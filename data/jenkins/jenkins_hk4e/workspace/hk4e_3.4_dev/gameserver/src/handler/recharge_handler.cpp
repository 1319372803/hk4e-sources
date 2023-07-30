// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/handler/recharge_handler.cpp

// Line 27: range 0000000015C814F2-0000000015C82181
int32_t __cdecl RechargeHandler::addPacketFuncToMap(
        RechargeHandler *const this,
        PacketFuncMap *process_packet_func_map)
{
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v3; // rax
  RechargeHandler **v4; // r8
  const std::_Placeholder<1> *v5; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v6; // rax
  RechargeHandler **v7; // r8
  const std::_Placeholder<1> *v8; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v9; // rax
  RechargeHandler **v10; // r8
  const std::_Placeholder<1> *v11; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v12; // rax
  RechargeHandler **v13; // r8
  const std::_Placeholder<1> *v14; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v15; // rax
  RechargeHandler **v16; // r8
  const std::_Placeholder<1> *v17; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v18; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v19; // rax
  RechargeHandler **v20; // r8
  const std::_Placeholder<1> *v21; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v22; // rax
  RechargeHandler **v23; // r8
  const std::_Placeholder<1> *v24; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v25; // rax
  __m128i v26; // [rsp+0h] [rbp-100h] BYREF
  __m128i v27; // [rsp+10h] [rbp-F0h] BYREF
  __m128i v28; // [rsp+20h] [rbp-E0h] BYREF
  __m128i v29; // [rsp+30h] [rbp-D0h] BYREF
  __m128i v30; // [rsp+40h] [rbp-C0h] BYREF
  PacketFuncMap *process_packet_func_mapa; // [rsp+50h] [rbp-B0h]
  RechargeHandler *thisa; // [rsp+58h] [rbp-A8h]
  std::map<unsigned int,std::function<int(std::shared_ptr<common::minet::Packet>)>>::key_type __x; // [rsp+6Ch] [rbp-94h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self v34; // [rsp+70h] [rbp-90h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self __y; // [rsp+78h] [rbp-88h] BYREF
  int (*__f[2])(RechargeHandler *, std::shared_ptr<common::minet::Packet>); // [rsp+80h] [rbp-80h] BYREF
  std::_Bind_helper<false,int (RechargeHandler::*)(std::shared_ptr<common::minet::Packet>),RechargeHandler*,const std::_Placeholder<1>&>::type v37; // [rsp+90h] [rbp-70h] BYREF
  common::milog::MiLogStream v38; // [rsp+B0h] [rbp-50h] BYREF

  thisa = this;
  process_packet_func_mapa = process_packet_func_map;
  __x = 4126;
  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                  process_packet_func_map,
                  &__x)._M_node;
  v34._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
  if ( std::operator!=(&v34, &__y) )
  {
    common::milog::MiLogStream::create(
      &v38,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/handler/recharge_handler.cpp",
      "addPacketFuncToMap",
      28);
    common::milog::MiLogStream::operator()(&v38, off_259BE5C0, 4126LL);
    common::milog::MiLogStream::~MiLogStream(&v38);
    return -1;
  }
  else
  {
    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
    __x = 4126;
    v3 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
           process_packet_func_mapa,
           &__x);
    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<RechargeHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}>(
      v3,
      (RechargeHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
    __x = 10726;
    __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                    process_packet_func_mapa,
                    &__x)._M_node;
    v34._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
    if ( std::operator!=(&v34, &__y) )
    {
      common::milog::MiLogStream::create(
        &v38,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/handler/recharge_handler.cpp",
        "addPacketFuncToMap",
        29);
      common::milog::MiLogStream::operator()(&v38, off_259BE5C0, 10726LL);
      common::milog::MiLogStream::~MiLogStream(&v38);
      return -1;
    }
    else
    {
      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
      __f[0] = (int (*)(RechargeHandler *, std::shared_ptr<common::minet::Packet>))RechargeHandler::onRechargeOrderNotify;
      __f[1] = 0LL;
      std::bind<int (RechargeHandler::*)(std::shared_ptr<common::minet::Packet>),RechargeHandler*,std::_Placeholder<1> const&>(
        &v37,
        __f,
        (RechargeHandler **)&__y,
        (const std::_Placeholder<1> *)&std::placeholders::_1,
        v4,
        v5);
      __x = 10726;
      v6 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
             process_packet_func_mapa,
             &__x);
      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (RechargeHandler::*)(std::shared_ptr<common::minet::Packet>) ()(RechargeHandler*,std::_Placeholder<1>)>>(
        v6,
        &v37);
      __x = 10725;
      __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                      process_packet_func_mapa,
                      &__x)._M_node;
      v34._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
      if ( std::operator!=(&v34, &__y) )
      {
        common::milog::MiLogStream::create(
          &v38,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/handler/recharge_handler.cpp",
          "addPacketFuncToMap",
          30);
        common::milog::MiLogStream::operator()(&v38, off_259BE5C0, 10725LL);
        common::milog::MiLogStream::~MiLogStream(&v38);
        return -1;
      }
      else
      {
        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
        v26.m128i_i64[0] = (__int64)RechargeHandler::onMarkOrderFinishedRsp;
        v26.m128i_i64[1] = 0LL;
        *(__m128i *)__f = _mm_load_si128(&v26);
        std::bind<int (RechargeHandler::*)(std::shared_ptr<common::minet::Packet>),RechargeHandler*,std::_Placeholder<1> const&>(
          &v37,
          __f,
          (RechargeHandler **)&__y,
          (const std::_Placeholder<1> *)&std::placeholders::_1,
          v7,
          v8);
        __x = 10725;
        v9 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
               process_packet_func_mapa,
               &__x);
        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (RechargeHandler::*)(std::shared_ptr<common::minet::Packet>) ()(RechargeHandler*,std::_Placeholder<1>)>>(
          v9,
          &v37);
        __x = 10702;
        __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                        process_packet_func_mapa,
                        &__x)._M_node;
        v34._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
        if ( std::operator!=(&v34, &__y) )
        {
          common::milog::MiLogStream::create(
            &v38,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/handler/recharge_handler.cpp",
            "addPacketFuncToMap",
            31);
          common::milog::MiLogStream::operator()(&v38, off_259BE5C0, 10702LL);
          common::milog::MiLogStream::~MiLogStream(&v38);
          return -1;
        }
        else
        {
          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
          v27.m128i_i64[0] = (__int64)RechargeHandler::onGetUnfinishedOrderRsp;
          v27.m128i_i64[1] = 0LL;
          *(__m128i *)__f = _mm_load_si128(&v27);
          std::bind<int (RechargeHandler::*)(std::shared_ptr<common::minet::Packet>),RechargeHandler*,std::_Placeholder<1> const&>(
            &v37,
            __f,
            (RechargeHandler **)&__y,
            (const std::_Placeholder<1> *)&std::placeholders::_1,
            v10,
            v11);
          __x = 10702;
          v12 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                  process_packet_func_mapa,
                  &__x);
          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (RechargeHandler::*)(std::shared_ptr<common::minet::Packet>) ()(RechargeHandler*,std::_Placeholder<1>)>>(
            v12,
            &v37);
          __x = 10729;
          __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                          process_packet_func_mapa,
                          &__x)._M_node;
          v34._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
          if ( std::operator!=(&v34, &__y) )
          {
            common::milog::MiLogStream::create(
              &v38,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/handler/recharge_handler.cpp",
              "addPacketFuncToMap",
              32);
            common::milog::MiLogStream::operator()(&v38, off_259BE5C0, 10729LL);
            common::milog::MiLogStream::~MiLogStream(&v38);
            return -1;
          }
          else
          {
            __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
            v28.m128i_i64[0] = (__int64)RechargeHandler::onGetSpecificUnfinishedRsp;
            v28.m128i_i64[1] = 0LL;
            *(__m128i *)__f = _mm_load_si128(&v28);
            std::bind<int (RechargeHandler::*)(std::shared_ptr<common::minet::Packet>),RechargeHandler*,std::_Placeholder<1> const&>(
              &v37,
              __f,
              (RechargeHandler **)&__y,
              (const std::_Placeholder<1> *)&std::placeholders::_1,
              v13,
              v14);
            __x = 10729;
            v15 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                    process_packet_func_mapa,
                    &__x);
            std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (RechargeHandler::*)(std::shared_ptr<common::minet::Packet>) ()(RechargeHandler*,std::_Placeholder<1>)>>(
              v15,
              &v37);
            __x = 4131;
            __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                            process_packet_func_mapa,
                            &__x)._M_node;
            v34._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
            if ( std::operator!=(&v34, &__y) )
            {
              common::milog::MiLogStream::create(
                &v38,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/handler/recharge_handler.cpp",
                "addPacketFuncToMap",
                33);
              common::milog::MiLogStream::operator()(&v38, off_259BE5C0, 4131LL);
              common::milog::MiLogStream::~MiLogStream(&v38);
              return -1;
            }
            else
            {
              __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
              v29.m128i_i64[0] = (__int64)RechargeHandler::onOrderDisplayNotify;
              v29.m128i_i64[1] = 0LL;
              *(__m128i *)__f = _mm_load_si128(&v29);
              std::bind<int (RechargeHandler::*)(std::shared_ptr<common::minet::Packet>),RechargeHandler*,std::_Placeholder<1> const&>(
                &v37,
                __f,
                (RechargeHandler **)&__y,
                (const std::_Placeholder<1> *)&std::placeholders::_1,
                v16,
                v17);
              __x = 4131;
              v18 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                      process_packet_func_mapa,
                      &__x);
              std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (RechargeHandler::*)(std::shared_ptr<common::minet::Packet>) ()(RechargeHandler*,std::_Placeholder<1>)>>(
                v18,
                &v37);
              __x = 4122;
              __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                              process_packet_func_mapa,
                              &__x)._M_node;
              v34._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
              if ( std::operator!=(&v34, &__y) )
              {
                common::milog::MiLogStream::create(
                  &v38,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/handler/recharge_handler.cpp",
                  "addPacketFuncToMap",
                  34);
                common::milog::MiLogStream::operator()(&v38, off_259BE5C0, 4122LL);
                common::milog::MiLogStream::~MiLogStream(&v38);
                return -1;
              }
              else
              {
                __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                __x = 4122;
                v19 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                        process_packet_func_mapa,
                        &__x);
                std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<RechargeHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}>(
                  v19,
                  (RechargeHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
                __x = 10294;
                __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                process_packet_func_mapa,
                                &__x)._M_node;
                v34._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                if ( std::operator!=(&v34, &__y) )
                {
                  common::milog::MiLogStream::create(
                    &v38,
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/handler/recharge_handler.cpp",
                    "addPacketFuncToMap",
                    35);
                  common::milog::MiLogStream::operator()(&v38, off_259BE5C0, 10294LL);
                  common::milog::MiLogStream::~MiLogStream(&v38);
                  return -1;
                }
                else
                {
                  __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                  v30.m128i_i64[0] = (__int64)RechargeHandler::onSendConcertProductReq;
                  v30.m128i_i64[1] = 0LL;
                  *(__m128i *)__f = _mm_load_si128(&v30);
                  std::bind<int (RechargeHandler::*)(std::shared_ptr<common::minet::Packet>),RechargeHandler*,std::_Placeholder<1> const&>(
                    &v37,
                    __f,
                    (RechargeHandler **)&__y,
                    (const std::_Placeholder<1> *)&std::placeholders::_1,
                    v20,
                    v21);
                  __x = 10294;
                  v22 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                          process_packet_func_mapa,
                          &__x);
                  std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (RechargeHandler::*)(std::shared_ptr<common::minet::Packet>) ()(RechargeHandler*,std::_Placeholder<1>)>>(
                    v22,
                    &v37);
                  __x = 10226;
                  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                                  process_packet_func_mapa,
                                  &__x)._M_node;
                  v34._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
                  if ( std::operator!=(&v34, &__y) )
                  {
                    common::milog::MiLogStream::create(
                      &v38,
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/handler/recharge_handler.cpp",
                      "addPacketFuncToMap",
                      36);
                    common::milog::MiLogStream::operator()(&v38, off_259BE5C0, 10226LL);
                    common::milog::MiLogStream::~MiLogStream(&v38);
                    return -1;
                  }
                  else
                  {
                    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
                    __f[0] = (int (*)(RechargeHandler *, std::shared_ptr<common::minet::Packet>))RechargeHandler::onQueryConcertProductInfoReq;
                    __f[1] = 0LL;
                    std::bind<int (RechargeHandler::*)(std::shared_ptr<common::minet::Packet>),RechargeHandler*,std::_Placeholder<1> const&>(
                      &v37,
                      __f,
                      (RechargeHandler **)&__y,
                      (const std::_Placeholder<1> *)&std::placeholders::_1,
                      v23,
                      v24);
                    __x = 10226;
                    v25 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                            process_packet_func_mapa,
                            &__x);
                    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (RechargeHandler::*)(std::shared_ptr<common::minet::Packet>) ()(RechargeHandler*,std::_Placeholder<1>)>>(
                      v25,
                      &v37);
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
};

// Line 28: range 0000000015C80EB6-0000000015C811D2
int __cdecl RechargeHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}::operator()(
        const RechargeHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  RechargeHandler *this; // r14
  std::__shared_ptr_access<const proto::RechargeReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::RechargeRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::RechargeRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = RechargeHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::RechargeReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::RechargeReq const>((const std::shared_ptr<const proto::RechargeReq> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/recharge_handler.cpp",
      "operator()",
      28);
    common::milog::MiLogStream::operator()(&v15, off_259BE200);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::RechargeReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::RechargeReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::RechargeRsp>();
    rsp_0 = std::__shared_ptr_access<proto::RechargeRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::RechargeRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::RechargeRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::RechargeReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::RechargeReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = RechargeHandler::onRechargeReq(this, v8, rsp_0);
    proto::RechargeRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::RechargeRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::RechargeRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::RechargeRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::RechargeRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::RechargeRsp>::~shared_ptr((std::shared_ptr<proto::RechargeRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::RechargeReq const>::~shared_ptr((std::shared_ptr<const proto::RechargeReq> *const)(v2 + 32));
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

// Line 34: range 0000000015C811D4-0000000015C814F0
int __cdecl RechargeHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}::operator()(
        const RechargeHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  RechargeHandler *this; // r14
  std::__shared_ptr_access<const proto::TakeResinCardDailyRewardReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::TakeResinCardDailyRewardRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::TakeResinCardDailyRewardRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = RechargeHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::TakeResinCardDailyRewardReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::TakeResinCardDailyRewardReq const>(
         (const std::shared_ptr<const proto::TakeResinCardDailyRewardReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/recharge_handler.cpp",
      "operator()",
      34);
    common::milog::MiLogStream::operator()(&v15, off_259BE200);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::TakeResinCardDailyRewardReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::TakeResinCardDailyRewardReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::TakeResinCardDailyRewardRsp>();
    rsp_0 = std::__shared_ptr_access<proto::TakeResinCardDailyRewardRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::TakeResinCardDailyRewardRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::TakeResinCardDailyRewardRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::TakeResinCardDailyRewardReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::TakeResinCardDailyRewardReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = RechargeHandler::onTakeResinCardDailyRewardReq(this, v8, rsp_0);
    proto::TakeResinCardDailyRewardRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::TakeResinCardDailyRewardRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::TakeResinCardDailyRewardRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::TakeResinCardDailyRewardRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::TakeResinCardDailyRewardRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::TakeResinCardDailyRewardRsp>::~shared_ptr((std::shared_ptr<proto::TakeResinCardDailyRewardRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::TakeResinCardDailyRewardReq const>::~shared_ptr((std::shared_ptr<const proto::TakeResinCardDailyRewardReq> *const)(v2 + 32));
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

// Line 42: range 0000000015C82182-0000000015C821E2
int32_t __cdecl RechargeHandler::onRechargeReq(
        RechargeHandler *const this,
        const proto::RechargeReq *req,
        proto::RechargeRsp *rsp_0)
{
  PlayerRechargeComp *RechargeComp; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  RechargeComp = Player::getRechargeComp(this->player_);
  return PlayerRechargeComp::onRecharge(RechargeComp, req, rsp_0);
};

// Line 48: range 0000000015C821E4-0000000015C82513
int32_t __cdecl RechargeHandler::onRechargeOrderNotify(
        RechargeHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  PlayerRechargeComp *RechargeComp; // rdx
  char v7; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rdx
  bool *p_is_player_save_when_recharge; // rax
  char v10; // r15
  int32_t result; // eax
  int32_t ret; // [rsp+2Ch] [rbp-B4h]
  std::__shared_ptr_access<const proto::RechargeOrderNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *notify; // [rsp+30h] [rbp-B0h]
  const proto::Order *proto_order; // [rsp+38h] [rbp-A8h]
  std::shared_ptr<Config> v15; // [rsp+40h] [rbp-A0h] BYREF
  common::milog::MiLogStream v16; // [rsp+50h] [rbp-90h] BYREF
  char v17[112]; // [rsp+70h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 notify_ptr:49";
  *(_QWORD *)(v2 + 16) = RechargeHandler::onRechargeOrderNotify;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::RechargeOrderNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::RechargeOrderNotify const>(
         (const std::shared_ptr<const proto::RechargeOrderNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/recharge_handler.cpp",
      "onRechargeOrderNotify",
      49);
    common::milog::MiLogStream::operator()(&v16, off_259C1900);
    common::milog::MiLogStream::~MiLogStream(&v16);
    v5 = -1;
  }
  else
  {
    notify = std::__shared_ptr_access<proto::RechargeOrderNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::RechargeOrderNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    proto_order = proto::RechargeOrderNotify::order(notify);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    RechargeComp = Player::getRechargeComp(this->player_);
    ret = PlayerRechargeComp::processOrder(RechargeComp, proto_order);
    v7 = 0;
    if ( ret )
      goto LABEL_13;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v15);
    v7 = 1;
    v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15);
    p_is_player_save_when_recharge = &v8->is_player_save_when_recharge;
    if ( *(_BYTE *)(((unsigned __int64)p_is_player_save_when_recharge >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_player_save_when_recharge & 7) >= *(_BYTE *)(((unsigned __int64)p_is_player_save_when_recharge >> 3)
                                                                           + 0x7FFF8000) )
    {
      __asan_report_load1(p_is_player_save_when_recharge);
    }
    if ( !v8->is_player_save_when_recharge )
LABEL_13:
      v10 = 0;
    else
      v10 = 1;
    if ( v7 )
      std::shared_ptr<Config>::~shared_ptr(&v15);
    if ( v10 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::savePlayerDataToDB(this->player_);
    }
    v5 = ret;
  }
  std::shared_ptr<proto::RechargeOrderNotify const>::~shared_ptr((std::shared_ptr<const proto::RechargeOrderNotify> *const)(v2 + 32));
  result = v5;
  if ( v17 == (char *)v2 )
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

// Line 61: range 0000000015C82514-0000000015C8281A
int32_t __cdecl RechargeHandler::onMarkOrderFinishedRsp(
        RechargeHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  PlayerRechargeComp *RechargeComp; // r14
  uint32_t v7; // eax
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+10h] [rbp-A0h] BYREF
  int v13; // [rsp+14h] [rbp-9Ch] BYREF
  const proto::MarkOrderFinishedRsp *rsp_0; // [rsp+18h] [rbp-98h]
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 10 rsp_ptr:62";
  *(_QWORD *)(v2 + 16) = RechargeHandler::onMarkOrderFinishedRsp;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::MarkOrderFinishedRsp>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::MarkOrderFinishedRsp const>(
         (const std::shared_ptr<const proto::MarkOrderFinishedRsp> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/recharge_handler.cpp",
      "onMarkOrderFinishedRsp",
      62);
    common::milog::MiLogStream::operator()(&v15, off_259C19A0);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    rsp_0 = std::__shared_ptr_access<proto::MarkOrderFinishedRsp const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::MarkOrderFinishedRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( proto::MarkOrderFinishedRsp::retcode(rsp_0) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/recharge_handler.cpp",
        "onMarkOrderFinishedRsp",
        69);
      v8 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
             &v15,
             (const char (*)[31])"MarkOrderFinishedRsp order_id:");
      val = proto::MarkOrderFinishedRsp::order_id(rsp_0);
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
      v10 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v9, (const char (*)[6])" ret:");
      v13 = proto::MarkOrderFinishedRsp::retcode(rsp_0);
      common::milog::MiLogStream::operator<<<int,(int *)0>(v10, &v13);
      common::milog::MiLogStream::~MiLogStream(&v15);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      RechargeComp = Player::getRechargeComp(this->player_);
      v7 = proto::MarkOrderFinishedRsp::order_id(rsp_0);
      PlayerRechargeComp::onMarkOrderFinished(RechargeComp, v7);
    }
    v5 = proto::MarkOrderFinishedRsp::retcode(rsp_0);
  }
  std::shared_ptr<proto::MarkOrderFinishedRsp const>::~shared_ptr((std::shared_ptr<const proto::MarkOrderFinishedRsp> *const)(v2 + 32));
  result = v5;
  if ( v16 == (char *)v2 )
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

// Line 76: range 0000000015C8281C-0000000015C82CF3
int32_t __cdecl RechargeHandler::onGetUnfinishedOrderRsp(
        RechargeHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  char v9; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
  bool *p_is_player_save_when_recharge; // rax
  char v12; // r15
  int32_t result; // eax
  bool is_has_succ_order; // [rsp+27h] [rbp-F9h]
  unsigned int val; // [rsp+28h] [rbp-F8h] BYREF
  int32_t ret; // [rsp+2Ch] [rbp-F4h]
  google::protobuf::RepeatedPtrField<proto::Order>::const_iterator __for_begin; // [rsp+30h] [rbp-F0h] BYREF
  google::protobuf::RepeatedPtrField<proto::Order>::const_iterator __for_end; // [rsp+38h] [rbp-E8h] BYREF
  const proto::GetUnfinishedOrderRsp *rsp_0; // [rsp+40h] [rbp-E0h]
  PlayerRechargeComp *recharge_comp; // [rsp+48h] [rbp-D8h]
  const google::protobuf::RepeatedPtrField<proto::Order> *__for_range; // [rsp+50h] [rbp-D0h]
  const proto::Order *proto_order; // [rsp+58h] [rbp-C8h]
  std::shared_ptr<Config> v23; // [rsp+60h] [rbp-C0h] BYREF
  common::milog::MiLogStream v24; // [rsp+70h] [rbp-B0h] BYREF
  char v25[144]; // [rsp+90h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 order_ret:85 64 16 10 rsp_ptr:77";
  *(_QWORD *)(v2 + 16) = RechargeHandler::onGetUnfinishedOrderRsp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GetUnfinishedOrderRsp>((common::minet::Packet *const)(v2 + 64));
  if ( std::operator==<proto::GetUnfinishedOrderRsp const>(
         (const std::shared_ptr<const proto::GetUnfinishedOrderRsp> *)(v2 + 64),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/recharge_handler.cpp",
      "onGetUnfinishedOrderRsp",
      77);
    common::milog::MiLogStream::operator()(&v24, off_259C1AE0);
    common::milog::MiLogStream::~MiLogStream(&v24);
    v5 = -1;
  }
  else
  {
    rsp_0 = std::__shared_ptr_access<proto::GetUnfinishedOrderRsp const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetUnfinishedOrderRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    recharge_comp = Player::getRechargeComp(this->player_);
    ret = proto::GetUnfinishedOrderRsp::retcode(rsp_0);
    is_has_succ_order = 0;
    if ( !ret )
    {
      __for_range = proto::GetUnfinishedOrderRsp::order_list(rsp_0);
      __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::Order>::begin(__for_range).it_;
      __for_end.it_ = google::protobuf::RepeatedPtrField<proto::Order>::end(__for_range).it_;
      while ( google::protobuf::internal::RepeatedPtrIterator<proto::Order const>::operator!=(&__for_begin, &__for_end) )
      {
        proto_order = google::protobuf::internal::RepeatedPtrIterator<proto::Order const>::operator*(&__for_begin);
        *(_DWORD *)(v2 + 48) = PlayerRechargeComp::processOrder(recharge_comp, proto_order);
        if ( *(_DWORD *)(v2 + 48) )
        {
          common::milog::MiLogStream::create(
            &v24,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/handler/recharge_handler.cpp",
            "onGetUnfinishedOrderRsp",
            88);
          v6 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                 &v24,
                 (const char (*)[15])"processOrder: ");
          val = proto::Order::id(proto_order);
          v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
          v8 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v7, (const char (*)[13])" fails, ret:");
          common::milog::MiLogStream::operator<<<int,(int *)0>(v8, (const int *)(v2 + 48));
          common::milog::MiLogStream::~MiLogStream(&v24);
          ret = *(_DWORD *)(v2 + 48);
        }
        else
        {
          is_has_succ_order = 1;
        }
        google::protobuf::internal::RepeatedPtrIterator<proto::Order const>::operator++(&__for_begin);
      }
      v9 = 0;
      if ( !is_has_succ_order )
        goto LABEL_20;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v23);
      v9 = 1;
      v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v23);
      p_is_player_save_when_recharge = &v10->is_player_save_when_recharge;
      if ( *(_BYTE *)(((unsigned __int64)p_is_player_save_when_recharge >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)p_is_player_save_when_recharge & 7) >= *(_BYTE *)(((unsigned __int64)p_is_player_save_when_recharge >> 3)
                                                                             + 0x7FFF8000) )
      {
        __asan_report_load1(p_is_player_save_when_recharge);
      }
      if ( v10->is_player_save_when_recharge )
        v12 = 1;
      else
LABEL_20:
        v12 = 0;
      if ( v9 )
        std::shared_ptr<Config>::~shared_ptr(&v23);
      if ( v12 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Player::savePlayerDataToDB(this->player_);
      }
    }
    v5 = ret;
  }
  std::shared_ptr<proto::GetUnfinishedOrderRsp const>::~shared_ptr((std::shared_ptr<const proto::GetUnfinishedOrderRsp> *const)(v2 + 64));
  result = v5;
  if ( v25 == (char *)v2 )
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

// Line 108: range 0000000015C82CF4-0000000015C830BD
int32_t __cdecl RechargeHandler::onGetSpecificUnfinishedRsp(
        RechargeHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  PlayerRechargeComp *RechargeComp; // r14
  const proto::Order *v7; // rax
  common::milog::MiLogStream *v8; // r14
  proto::Order *v9; // rax
  common::milog::MiLogStream *v10; // r14
  const proto::Order *v11; // rax
  common::milog::MiLogStream *v12; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+10h] [rbp-C0h] BYREF
  int32_t ret; // [rsp+14h] [rbp-BCh]
  const proto::GetSpecificUnfinishedRsp *rsp_0; // [rsp+18h] [rbp-B8h]
  common::milog::MiLogStream v17; // [rsp+20h] [rbp-B0h] BYREF
  common::milog::MiLogStream v18; // [rsp+40h] [rbp-90h] BYREF
  char v19[112]; // [rsp+60h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 11 rsp_ptr:109";
  *(_QWORD *)(v2 + 16) = RechargeHandler::onGetSpecificUnfinishedRsp;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GetSpecificUnfinishedRsp>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::GetSpecificUnfinishedRsp const>(
         (const std::shared_ptr<const proto::GetSpecificUnfinishedRsp> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/recharge_handler.cpp",
      "onGetSpecificUnfinishedRsp",
      109);
    common::milog::MiLogStream::operator()(&v18, off_259C1C20);
    common::milog::MiLogStream::~MiLogStream(&v18);
    v5 = -1;
  }
  else
  {
    rsp_0 = std::__shared_ptr_access<proto::GetSpecificUnfinishedRsp const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetSpecificUnfinishedRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    ret = proto::GetSpecificUnfinishedRsp::retcode(rsp_0);
    if ( ret )
    {
      if ( ret == 2011 )
      {
        common::milog::MiLogStream::create(
          &v18,
          &common::milog::MiLogDefault::default_log_obj_,
          2u,
          "./src/handler/recharge_handler.cpp",
          "onGetSpecificUnfinishedRsp",
          120);
        v10 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v18, (const char (*)[10])"order_id:");
        v11 = proto::GetSpecificUnfinishedRsp::order(rsp_0);
        val = proto::Order::id(v11);
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
        common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v12, (const char (*)[19])" has been finished");
        common::milog::MiLogStream::~MiLogStream(&v18);
      }
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      RechargeComp = Player::getRechargeComp(this->player_);
      v7 = proto::GetSpecificUnfinishedRsp::order(rsp_0);
      if ( PlayerRechargeComp::processOrder(RechargeComp, v7) )
      {
        common::milog::MiLogStream::create(
          &v17,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/recharge_handler.cpp",
          "onGetSpecificUnfinishedRsp",
          115);
        v8 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
               &v17,
               (const char (*)[20])"processOrder fails:");
        v9 = (proto::Order *)proto::GetSpecificUnfinishedRsp::order(rsp_0);
        google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v18, v9);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, (const std::string *)&v18);
        std::string::~string(&v18);
        common::milog::MiLogStream::~MiLogStream(&v17);
      }
    }
    v5 = ret;
  }
  std::shared_ptr<proto::GetSpecificUnfinishedRsp const>::~shared_ptr((std::shared_ptr<const proto::GetSpecificUnfinishedRsp> *const)(v2 + 32));
  result = v5;
  if ( v19 == (char *)v2 )
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

// Line 127: range 0000000015C830BE-0000000015C832D6
int32_t __cdecl RechargeHandler::onOrderDisplayNotify(
        RechargeHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  PlayerRechargeComp *RechargeComp; // rax
  int32_t result; // eax
  google::protobuf::uint32 order_id; // [rsp+14h] [rbp-9Ch]
  std::__shared_ptr_access<const proto::OrderDisplayNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *notify; // [rsp+18h] [rbp-98h]
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-90h] BYREF
  char v11[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 notify_ptr:128";
  *(_QWORD *)(v2 + 16) = RechargeHandler::onOrderDisplayNotify;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::OrderDisplayNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::OrderDisplayNotify const>(
         (const std::shared_ptr<const proto::OrderDisplayNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/recharge_handler.cpp",
      "onOrderDisplayNotify",
      128);
    common::milog::MiLogStream::operator()(&v10, off_259C1DA0);
    common::milog::MiLogStream::~MiLogStream(&v10);
    v5 = -1;
  }
  else
  {
    notify = std::__shared_ptr_access<proto::OrderDisplayNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::OrderDisplayNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    order_id = proto::OrderDisplayNotify::order_id(notify);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    RechargeComp = Player::getRechargeComp(this->player_);
    v5 = PlayerRechargeComp::onOrderDisplay(RechargeComp, order_id);
  }
  std::shared_ptr<proto::OrderDisplayNotify const>::~shared_ptr((std::shared_ptr<const proto::OrderDisplayNotify> *const)(v2 + 32));
  result = v5;
  if ( v11 == (char *)v2 )
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

// Line 134: range 0000000015C832D8-0000000015C8368D
int32_t __cdecl RechargeHandler::onTakeResinCardDailyRewardReq(
        RechargeHandler *const this,
        const proto::TakeResinCardDailyRewardReq *req,
        proto::TakeResinCardDailyRewardRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  google::protobuf::uint32 v6; // edx
  PlayerRechargeComp *RechargeComp; // r14
  uint32_t v8; // eax
  int32_t v9; // r14d
  PlayerRechargeComp *v10; // r14
  uint32_t v11; // eax
  common::milog::MiLogStream *v12; // rcx
  int32_t result; // eax
  uint32_t now; // [rsp+20h] [rbp-E0h]
  int32_t ret; // [rsp+24h] [rbp-DCh]
  int32_t reta; // [rsp+24h] [rbp-DCh]
  std::vector<ItemParam>::iterator __for_begin; // [rsp+28h] [rbp-D8h] BYREF
  std::vector<ItemParam>::iterator __for_end; // [rsp+30h] [rbp-D0h] BYREF
  std::vector<ItemParam> *__for_range; // [rsp+38h] [rbp-C8h]
  ItemParam *p; // [rsp+40h] [rbp-C0h]
  proto::ItemParam *proto_item; // [rsp+48h] [rbp-B8h]
  common::milog::MiLogStream v23; // [rsp+50h] [rbp-B0h] BYREF
  char v24[144]; // [rsp+70h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 24 15 display_vec:142";
  *(_QWORD *)(v3 + 16) = RechargeHandler::onTakeResinCardDailyRewardReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218103808;
  v5[536862722] = -202116109;
  now = common::tools::TimeUtils::getNow();
  v6 = proto::TakeResinCardDailyRewardReq::product_config_id(req);
  proto::TakeResinCardDailyRewardRsp::set_product_config_id(rsp_0, v6);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  RechargeComp = Player::getRechargeComp(this->player_);
  v8 = proto::TakeResinCardDailyRewardReq::product_config_id(req);
  ret = PlayerRechargeComp::checkCanTakeResinCardDailyReward(RechargeComp, now, v8);
  if ( ret )
  {
    v9 = ret;
  }
  else
  {
    std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v3 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v10 = Player::getRechargeComp(this->player_);
    v11 = proto::TakeResinCardDailyRewardReq::product_config_id(req);
    reta = PlayerRechargeComp::takeResinCardDailyReward(v10, now, v11, (std::vector<ItemParam> *)(v3 + 32));
    if ( reta )
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/recharge_handler.cpp",
        "onTakeResinCardDailyRewardReq",
        146);
      v12 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
              &v23,
              (const char (*)[42])"takeResinCardDailyReward failes, player_:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      operator<<(v12, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v23);
      v9 = reta;
    }
    else
    {
      __for_range = (std::vector<ItemParam> *)(v3 + 32);
      __for_begin._M_current = std::vector<ItemParam>::begin((std::vector<ItemParam> *const)(v3 + 32))._M_current;
      __for_end._M_current = std::vector<ItemParam>::end((std::vector<ItemParam> *const)(v3 + 32))._M_current;
      while ( __gnu_cxx::operator!=<ItemParam *,std::vector<ItemParam>>(&__for_begin, &__for_end) )
      {
        p = __gnu_cxx::__normal_iterator<ItemParam *,std::vector<ItemParam>>::operator*(&__for_begin);
        proto_item = proto::TakeResinCardDailyRewardRsp::add_item_vec(rsp_0);
        ItemParam::toClient(p, proto_item);
        __gnu_cxx::__normal_iterator<ItemParam *,std::vector<ItemParam>>::operator++(&__for_begin);
      }
      v9 = 0;
    }
    std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v3 + 32));
  }
  result = v9;
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

// Line 158: range 0000000015C8368E-0000000015C83AEE
int32_t __cdecl RechargeHandler::onSendConcertProductReq(
        RechargeHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  GameserverService *v7; // rax
  unsigned int GameThreadLocal; // eax
  common::milog::MiLogStream *v9; // rax
  Player *v10; // rax
  PlayerRechargeComp *RechargeComp; // rcx
  int32_t v12; // edx
  GameserverService *v13; // r14
  int32_t result; // eax
  std::__shared_ptr_access<const proto::SendConcertProductReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *req; // [rsp+20h] [rbp-110h]
  std::__shared_ptr_access<proto::SendConcertProductRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-108h]
  std::shared_ptr<proto::SendConcertProductRsp> p_rsp_ptr; // [rsp+30h] [rbp-100h] BYREF
  common::milog::MiLogStream v18; // [rsp+40h] [rbp-F0h] BYREF
  char v19[208]; // [rsp+60h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 7 uid:162 64 16 11 req_ptr:159 96 16 11 rsp_ptr:159 128 16 14 player_ptr:163";
  *(_QWORD *)(v2 + 16) = RechargeHandler::onSendConcertProductReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::SendConcertProductReq>((common::minet::Packet *const)(v2 + 64));
  if ( std::operator==<proto::SendConcertProductReq const>(
         (const std::shared_ptr<const proto::SendConcertProductReq> *)(v2 + 64),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/recharge_handler.cpp",
      "onSendConcertProductReq",
      159);
    common::milog::MiLogStream::operator()(&v18, off_259BE200);
    common::milog::MiLogStream::~MiLogStream(&v18);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::SendConcertProductReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::SendConcertProductReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    common::tools::perf::make_shared<proto::SendConcertProductRsp>();
    rsp_0 = std::__shared_ptr_access<proto::SendConcertProductRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::SendConcertProductRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    proto::SendConcertProductRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    *(_DWORD *)(v2 + 48) = common::minet::Packet::getUserId(v6);
    v7 = ServiceBox::findService<GameserverService>();
    GameThreadLocal = (unsigned int)GameserverService::getGameThreadLocal(v7);
    PlayerMgr::findPlayerAndCheckSession(
      (PlayerMgr *const)(v2 + 128),
      GameThreadLocal + 16,
      (const common::minet::PacketPtr *)*(unsigned int *)(v2 + 48));
    if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 128)) )
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/recharge_handler.cpp",
        "onSendConcertProductReq",
        166);
      v9 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
             &v18,
             (const char (*)[23])"findPlayer fails, uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v18);
      proto::SendConcertProductRsp::set_retcode(rsp_0, 140);
    }
    else
    {
      v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
      RechargeComp = Player::getRechargeComp(v10);
      v12 = PlayerRechargeComp::sendConcertProductByMuip(RechargeComp, req, rsp_0);
      proto::SendConcertProductRsp::set_retcode(rsp_0, v12);
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 128));
    v13 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      (std::shared_ptr<common::minet::Packet> *const)(v2 + 128),
      p_packet_ptr);
    std::shared_ptr<proto::SendConcertProductRsp>::shared_ptr(
      &p_rsp_ptr,
      (const std::shared_ptr<proto::SendConcertProductRsp> *)(v2 + 96));
    ServiceBase::sendRsp<proto::SendConcertProductRsp>(v13, &p_rsp_ptr, (common::minet::PacketPtr *)(v2 + 128));
    std::shared_ptr<proto::SendConcertProductRsp>::~shared_ptr(&p_rsp_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 128));
    v5 = 0;
    std::shared_ptr<proto::SendConcertProductRsp>::~shared_ptr((std::shared_ptr<proto::SendConcertProductRsp> *const)(v2 + 96));
  }
  std::shared_ptr<proto::SendConcertProductReq const>::~shared_ptr((std::shared_ptr<const proto::SendConcertProductReq> *const)(v2 + 64));
  result = v5;
  if ( v19 == (char *)v2 )
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
  return result;
};

// Line 180: range 0000000015C83AF0-0000000015C83F50
int32_t __cdecl RechargeHandler::onQueryConcertProductInfoReq(
        RechargeHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  GameserverService *v7; // rax
  unsigned int GameThreadLocal; // eax
  common::milog::MiLogStream *v9; // rax
  Player *v10; // rax
  PlayerRechargeComp *RechargeComp; // rcx
  int32_t ConcertProductInfoByMuip; // edx
  GameserverService *v13; // r14
  int32_t result; // eax
  std::__shared_ptr_access<const proto::QueryConcertProductInfoReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *req; // [rsp+20h] [rbp-110h]
  std::__shared_ptr_access<proto::QueryConcertProductInfoRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-108h]
  std::shared_ptr<proto::QueryConcertProductInfoRsp> p_rsp_ptr; // [rsp+30h] [rbp-100h] BYREF
  common::milog::MiLogStream v18; // [rsp+40h] [rbp-F0h] BYREF
  char v19[208]; // [rsp+60h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 7 uid:184 64 16 11 req_ptr:181 96 16 11 rsp_ptr:181 128 16 14 player_ptr:185";
  *(_QWORD *)(v2 + 16) = RechargeHandler::onQueryConcertProductInfoReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::QueryConcertProductInfoReq>((common::minet::Packet *const)(v2 + 64));
  if ( std::operator==<proto::QueryConcertProductInfoReq const>(
         (const std::shared_ptr<const proto::QueryConcertProductInfoReq> *)(v2 + 64),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/recharge_handler.cpp",
      "onQueryConcertProductInfoReq",
      181);
    common::milog::MiLogStream::operator()(&v18, off_259BE200);
    common::milog::MiLogStream::~MiLogStream(&v18);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::QueryConcertProductInfoReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::QueryConcertProductInfoReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    common::tools::perf::make_shared<proto::QueryConcertProductInfoRsp>();
    rsp_0 = std::__shared_ptr_access<proto::QueryConcertProductInfoRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::QueryConcertProductInfoRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    proto::QueryConcertProductInfoRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    *(_DWORD *)(v2 + 48) = common::minet::Packet::getUserId(v6);
    v7 = ServiceBox::findService<GameserverService>();
    GameThreadLocal = (unsigned int)GameserverService::getGameThreadLocal(v7);
    PlayerMgr::findPlayerAndCheckSession(
      (PlayerMgr *const)(v2 + 128),
      GameThreadLocal + 16,
      (const common::minet::PacketPtr *)*(unsigned int *)(v2 + 48));
    if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 128)) )
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/recharge_handler.cpp",
        "onQueryConcertProductInfoReq",
        188);
      v9 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
             &v18,
             (const char (*)[23])"findPlayer fails, uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v18);
      proto::QueryConcertProductInfoRsp::set_retcode(rsp_0, 140);
    }
    else
    {
      v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
      RechargeComp = Player::getRechargeComp(v10);
      ConcertProductInfoByMuip = PlayerRechargeComp::queryConcertProductInfoByMuip(RechargeComp, req, rsp_0);
      proto::QueryConcertProductInfoRsp::set_retcode(rsp_0, ConcertProductInfoByMuip);
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 128));
    v13 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      (std::shared_ptr<common::minet::Packet> *const)(v2 + 128),
      p_packet_ptr);
    std::shared_ptr<proto::QueryConcertProductInfoRsp>::shared_ptr(
      &p_rsp_ptr,
      (const std::shared_ptr<proto::QueryConcertProductInfoRsp> *)(v2 + 96));
    ServiceBase::sendRsp<proto::QueryConcertProductInfoRsp>(v13, &p_rsp_ptr, (common::minet::PacketPtr *)(v2 + 128));
    std::shared_ptr<proto::QueryConcertProductInfoRsp>::~shared_ptr(&p_rsp_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 128));
    v5 = 0;
    std::shared_ptr<proto::QueryConcertProductInfoRsp>::~shared_ptr((std::shared_ptr<proto::QueryConcertProductInfoRsp> *const)(v2 + 96));
  }
  std::shared_ptr<proto::QueryConcertProductInfoReq const>::~shared_ptr((std::shared_ptr<const proto::QueryConcertProductInfoReq> *const)(v2 + 64));
  result = v5;
  if ( v19 == (char *)v2 )
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
  return result;
};
