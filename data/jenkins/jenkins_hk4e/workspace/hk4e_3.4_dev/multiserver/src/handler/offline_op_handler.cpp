// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/handler/offline_op_handler.cpp

// Line 26: range 000000000DECDD2A-000000000DECE31B
int32_t __cdecl OfflineOpHandler::addPacketFuncToMap(
        OfflineOpHandler *const this,
        PacketFuncMap *push_packet_func_map,
        PacketFuncMap *push_fail_packet_func_map,
        PacketFuncMap *process_packet_func_map)
{
  OfflineOpHandler **v4; // r8
  const std::_Placeholder<1> *v5; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v7; // rax
  OfflineOpHandler **v8; // r8
  const std::_Placeholder<1> *v9; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v10; // rax
  OfflineOpHandler **v11; // r8
  const std::_Placeholder<1> *v12; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v13; // rax
  OfflineOpHandler **v14; // r8
  const std::_Placeholder<1> *v15; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v16; // rax
  __m128i v17; // [rsp+0h] [rbp-E0h] BYREF
  __m128i v18; // [rsp+10h] [rbp-D0h] BYREF
  PacketFuncMap *process_packet_func_mapa; // [rsp+20h] [rbp-C0h]
  PacketFuncMap *push_fail_packet_func_mapa; // [rsp+28h] [rbp-B8h]
  PacketFuncMap *push_packet_func_mapa; // [rsp+30h] [rbp-B0h]
  OfflineOpHandler *thisa; // [rsp+38h] [rbp-A8h]
  std::map<unsigned int,std::function<int(std::shared_ptr<common::minet::Packet>)>>::key_type __x; // [rsp+4Ch] [rbp-94h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self v24; // [rsp+50h] [rbp-90h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self __y; // [rsp+58h] [rbp-88h] BYREF
  int (*__f[2])(OfflineOpHandler *, std::shared_ptr<common::minet::Packet>); // [rsp+60h] [rbp-80h] BYREF
  std::_Bind_helper<false,int (OfflineOpHandler::*)(std::shared_ptr<common::minet::Packet>),OfflineOpHandler*,const std::_Placeholder<1>&>::type v27; // [rsp+70h] [rbp-70h] BYREF
  common::milog::MiLogStream v28; // [rsp+90h] [rbp-50h] BYREF

  thisa = this;
  push_packet_func_mapa = push_packet_func_map;
  push_fail_packet_func_mapa = push_fail_packet_func_map;
  process_packet_func_mapa = process_packet_func_map;
  __x = 12226;
  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                  process_packet_func_map,
                  &__x)._M_node;
  v24._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
  if ( std::operator!=(&v24, &__y) )
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/handler/offline_op_handler.cpp",
      "addPacketFuncToMap",
      27);
    common::milog::MiLogStream::operator()(&v28, off_1BB4F780, 12226LL);
    common::milog::MiLogStream::~MiLogStream(&v28);
    return -1;
  }
  else
  {
    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
    v17.m128i_i64[0] = (__int64)OfflineOpHandler::onSendOfflineOpReq;
    v17.m128i_i64[1] = 0LL;
    *(__m128i *)__f = _mm_load_si128(&v17);
    std::bind<int (OfflineOpHandler::*)(std::shared_ptr<common::minet::Packet>),OfflineOpHandler*,std::_Placeholder<1> const&>(
      &v27,
      __f,
      (OfflineOpHandler **)&__y,
      (const std::_Placeholder<1> *)&std::placeholders::_1,
      v4,
      v5);
    __x = 12226;
    v7 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
           process_packet_func_mapa,
           &__x);
    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (OfflineOpHandler::*)(std::shared_ptr<common::minet::Packet>) ()(OfflineOpHandler*,std::_Placeholder<1>)>>(
      v7,
      &v27);
    __x = 12225;
    __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                    process_packet_func_mapa,
                    &__x)._M_node;
    v24._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
    if ( std::operator!=(&v24, &__y) )
    {
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/handler/offline_op_handler.cpp",
        "addPacketFuncToMap",
        28);
      common::milog::MiLogStream::operator()(&v28, off_1BB4F780, 12225LL);
      common::milog::MiLogStream::~MiLogStream(&v28);
      return -1;
    }
    else
    {
      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
      v18.m128i_i64[0] = (__int64)OfflineOpHandler::onGetOfflineOpReq;
      v18.m128i_i64[1] = 0LL;
      *(__m128i *)__f = _mm_load_si128(&v18);
      std::bind<int (OfflineOpHandler::*)(std::shared_ptr<common::minet::Packet>),OfflineOpHandler*,std::_Placeholder<1> const&>(
        &v27,
        __f,
        (OfflineOpHandler **)&__y,
        (const std::_Placeholder<1> *)&std::placeholders::_1,
        v8,
        v9);
      __x = 12225;
      v10 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
              process_packet_func_mapa,
              &__x);
      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (OfflineOpHandler::*)(std::shared_ptr<common::minet::Packet>) ()(OfflineOpHandler*,std::_Placeholder<1>)>>(
        v10,
        &v27);
      __x = 12231;
      __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                      process_packet_func_mapa,
                      &__x)._M_node;
      v24._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
      if ( std::operator!=(&v24, &__y) )
      {
        common::milog::MiLogStream::create(
          &v28,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/handler/offline_op_handler.cpp",
          "addPacketFuncToMap",
          29);
        common::milog::MiLogStream::operator()(&v28, off_1BB4F780, 12231LL);
        common::milog::MiLogStream::~MiLogStream(&v28);
        return -1;
      }
      else
      {
        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
        __f[0] = (int (*)(OfflineOpHandler *, std::shared_ptr<common::minet::Packet>))OfflineOpHandler::onRemoveOfflineOpReq;
        __f[1] = 0LL;
        std::bind<int (OfflineOpHandler::*)(std::shared_ptr<common::minet::Packet>),OfflineOpHandler*,std::_Placeholder<1> const&>(
          &v27,
          __f,
          (OfflineOpHandler **)&__y,
          (const std::_Placeholder<1> *)&std::placeholders::_1,
          v11,
          v12);
        __x = 12231;
        v13 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                process_packet_func_mapa,
                &__x);
        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (OfflineOpHandler::*)(std::shared_ptr<common::minet::Packet>) ()(OfflineOpHandler*,std::_Placeholder<1>)>>(
          v13,
          &v27);
        __x = 12222;
        __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                        process_packet_func_mapa,
                        &__x)._M_node;
        v24._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
        if ( std::operator!=(&v24, &__y) )
        {
          common::milog::MiLogStream::create(
            &v28,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/handler/offline_op_handler.cpp",
            "addPacketFuncToMap",
            30);
          common::milog::MiLogStream::operator()(&v28, off_1BB4F780, 12222LL);
          common::milog::MiLogStream::~MiLogStream(&v28);
          return -1;
        }
        else
        {
          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
          __f[0] = (int (*)(OfflineOpHandler *, std::shared_ptr<common::minet::Packet>))OfflineOpHandler::onSendGCGOfflineOpReq;
          __f[1] = 0LL;
          std::bind<int (OfflineOpHandler::*)(std::shared_ptr<common::minet::Packet>),OfflineOpHandler*,std::_Placeholder<1> const&>(
            &v27,
            __f,
            (OfflineOpHandler **)&__y,
            (const std::_Placeholder<1> *)&std::placeholders::_1,
            v14,
            v15);
          __x = 12222;
          v16 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                  process_packet_func_mapa,
                  &__x);
          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (OfflineOpHandler::*)(std::shared_ptr<common::minet::Packet>) ()(OfflineOpHandler*,std::_Placeholder<1>)>>(
            v16,
            &v27);
          return 0;
        }
      }
    }
  }
};

// Line 35: range 000000000DECE31C-000000000DECE701
int32_t __cdecl OfflineOpHandler::onSendOfflineOpReq(
        OfflineOpHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  proto::OfflineOpContext *v6; // r14
  const proto::OfflineOpContext *v7; // rax
  OfflineOpService *v8; // r14
  int32_t result; // eax
  google::protobuf::uint32 uid; // [rsp+18h] [rbp-118h]
  google::protobuf::uint32 time; // [rsp+1Ch] [rbp-114h]
  proto::OfflineOpType op_type; // [rsp+20h] [rbp-110h]
  google::protobuf::int32 ret; // [rsp+24h] [rbp-10Ch]
  std::__shared_ptr_access<const proto::SendOfflineOpReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *req; // [rsp+28h] [rbp-108h]
  std::__shared_ptr_access<proto::SendOfflineOpRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+30h] [rbp-100h]
  const proto::OfflineOpData *op_data; // [rsp+38h] [rbp-F8h]
  std::shared_ptr<proto::SendOfflineOpRsp> p_rsp_ptr; // [rsp+40h] [rbp-F0h] BYREF
  std::shared_ptr<common::minet::Packet> p_req_packet_ptr; // [rsp+50h] [rbp-E0h] BYREF
  common::milog::MiLogStream v19; // [rsp+60h] [rbp-D0h] BYREF
  char v20[176]; // [rsp+80h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 11 op_index:43 64 16 10 req_ptr:37 96 16 10 rsp_ptr:37";
  *(_QWORD *)(v2 + 16) = OfflineOpHandler::onSendOfflineOpReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::SendOfflineOpReq>((common::minet::Packet *const)(v2 + 64));
  if ( std::operator==<proto::SendOfflineOpReq const>(
         (const std::shared_ptr<const proto::SendOfflineOpReq> *)(v2 + 64),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/offline_op_handler.cpp",
      "onSendOfflineOpReq",
      37);
    common::milog::MiLogStream::operator()(&v19, off_1BB4F860);
    common::milog::MiLogStream::~MiLogStream(&v19);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::SendOfflineOpReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::SendOfflineOpReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    common::tools::perf::make_shared<proto::SendOfflineOpRsp>();
    rsp_0 = std::__shared_ptr_access<proto::SendOfflineOpRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::SendOfflineOpRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    proto::SendOfflineOpRsp::set_retcode(rsp_0, -1);
    uid = proto::SendOfflineOpReq::uid(req);
    time = proto::SendOfflineOpReq::time(req);
    op_type = proto::SendOfflineOpReq::op_type(req);
    op_data = proto::SendOfflineOpReq::op_data(req);
    *(_DWORD *)(v2 + 48) = 0;
    ret = OfflineOpHandler::sendOfflineOp(this, uid, time, op_type, op_data, (uint32_t *)(v2 + 48));
    proto::SendOfflineOpRsp::set_retcode(rsp_0, ret);
    if ( !ret )
      proto::SendOfflineOpRsp::set_index(rsp_0, *(_DWORD *)(v2 + 48));
    proto::SendOfflineOpRsp::set_op_type(rsp_0, op_type);
    v6 = proto::SendOfflineOpRsp::mutable_context(rsp_0);
    v7 = proto::OfflineOpData::context(op_data);
    proto::OfflineOpContext::CopyFrom(v6, v7);
    v8 = ServiceBox::findService<OfflineOpService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(&p_req_packet_ptr, p_packet_ptr);
    std::shared_ptr<proto::SendOfflineOpRsp>::shared_ptr(
      &p_rsp_ptr,
      (const std::shared_ptr<proto::SendOfflineOpRsp> *)(v2 + 96));
    v5 = ServiceBase::sendRsp<proto::SendOfflineOpRsp>(v8, &p_rsp_ptr, &p_req_packet_ptr);
    std::shared_ptr<proto::SendOfflineOpRsp>::~shared_ptr(&p_rsp_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
    std::shared_ptr<proto::SendOfflineOpRsp>::~shared_ptr((std::shared_ptr<proto::SendOfflineOpRsp> *const)(v2 + 96));
  }
  std::shared_ptr<proto::SendOfflineOpReq const>::~shared_ptr((std::shared_ptr<const proto::SendOfflineOpReq> *const)(v2 + 64));
  result = v5;
  if ( v20 == (char *)v2 )
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

// Line 57: range 000000000DECE702-000000000DECEAE7
int32_t __cdecl OfflineOpHandler::onSendGCGOfflineOpReq(
        OfflineOpHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  proto::OfflineOpContext *v6; // r14
  const proto::OfflineOpContext *v7; // rax
  OfflineOpService *v8; // r14
  int32_t result; // eax
  google::protobuf::uint32 uid; // [rsp+18h] [rbp-118h]
  google::protobuf::uint32 time; // [rsp+1Ch] [rbp-114h]
  proto::OfflineOpType op_type; // [rsp+20h] [rbp-110h]
  google::protobuf::int32 ret; // [rsp+24h] [rbp-10Ch]
  std::__shared_ptr_access<const proto::SendGCGOfflineOpReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *req; // [rsp+28h] [rbp-108h]
  std::__shared_ptr_access<proto::SendGCGOfflineOpRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+30h] [rbp-100h]
  const proto::OfflineOpData *op_data; // [rsp+38h] [rbp-F8h]
  std::shared_ptr<proto::SendGCGOfflineOpRsp> p_rsp_ptr; // [rsp+40h] [rbp-F0h] BYREF
  std::shared_ptr<common::minet::Packet> p_req_packet_ptr; // [rsp+50h] [rbp-E0h] BYREF
  common::milog::MiLogStream v19; // [rsp+60h] [rbp-D0h] BYREF
  char v20[176]; // [rsp+80h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 11 op_index:65 64 16 10 req_ptr:59 96 16 10 rsp_ptr:59";
  *(_QWORD *)(v2 + 16) = OfflineOpHandler::onSendGCGOfflineOpReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::SendGCGOfflineOpReq>((common::minet::Packet *const)(v2 + 64));
  if ( std::operator==<proto::SendGCGOfflineOpReq const>(
         (const std::shared_ptr<const proto::SendGCGOfflineOpReq> *)(v2 + 64),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/offline_op_handler.cpp",
      "onSendGCGOfflineOpReq",
      59);
    common::milog::MiLogStream::operator()(&v19, off_1BB4F860);
    common::milog::MiLogStream::~MiLogStream(&v19);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::SendGCGOfflineOpReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::SendGCGOfflineOpReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    common::tools::perf::make_shared<proto::SendGCGOfflineOpRsp>();
    rsp_0 = std::__shared_ptr_access<proto::SendGCGOfflineOpRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::SendGCGOfflineOpRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    proto::SendGCGOfflineOpRsp::set_retcode(rsp_0, -1);
    uid = proto::SendGCGOfflineOpReq::uid(req);
    time = proto::SendGCGOfflineOpReq::time(req);
    op_type = proto::SendGCGOfflineOpReq::op_type(req);
    op_data = proto::SendGCGOfflineOpReq::op_data(req);
    *(_DWORD *)(v2 + 48) = 0;
    ret = OfflineOpHandler::sendOfflineOp(this, uid, time, op_type, op_data, (uint32_t *)(v2 + 48));
    proto::SendGCGOfflineOpRsp::set_retcode(rsp_0, ret);
    if ( !ret )
      proto::SendGCGOfflineOpRsp::set_index(rsp_0, *(_DWORD *)(v2 + 48));
    proto::SendGCGOfflineOpRsp::set_op_type(rsp_0, op_type);
    v6 = proto::SendGCGOfflineOpRsp::mutable_context(rsp_0);
    v7 = proto::OfflineOpData::context(op_data);
    proto::OfflineOpContext::CopyFrom(v6, v7);
    v8 = ServiceBox::findService<OfflineOpService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(&p_req_packet_ptr, p_packet_ptr);
    std::shared_ptr<proto::SendGCGOfflineOpRsp>::shared_ptr(
      &p_rsp_ptr,
      (const std::shared_ptr<proto::SendGCGOfflineOpRsp> *)(v2 + 96));
    v5 = ServiceBase::sendRsp<proto::SendGCGOfflineOpRsp>(v8, &p_rsp_ptr, &p_req_packet_ptr);
    std::shared_ptr<proto::SendGCGOfflineOpRsp>::~shared_ptr(&p_rsp_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
    std::shared_ptr<proto::SendGCGOfflineOpRsp>::~shared_ptr((std::shared_ptr<proto::SendGCGOfflineOpRsp> *const)(v2 + 96));
  }
  std::shared_ptr<proto::SendGCGOfflineOpReq const>::~shared_ptr((std::shared_ptr<const proto::SendGCGOfflineOpReq> *const)(v2 + 64));
  result = v5;
  if ( v20 == (char *)v2 )
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

// Line 79: range 000000000DECEAE8-000000000DECEDE4
int32_t __cdecl OfflineOpHandler::onGetOfflineOpReq(
        OfflineOpHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t OfflineOp; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t UserId; // esi
  OfflineOpService *v8; // r14
  int32_t result; // eax
  std::__shared_ptr_access<const proto::GetOfflineOpReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *req; // [rsp+10h] [rbp-E0h]
  std::__shared_ptr_access<proto::GetOfflineOpRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+18h] [rbp-D8h]
  std::shared_ptr<proto::GetOfflineOpRsp> p_rsp_ptr; // [rsp+20h] [rbp-D0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:81 64 16 10 rsp_ptr:81";
  *(_QWORD *)(v2 + 16) = OfflineOpHandler::onGetOfflineOpReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GetOfflineOpReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::GetOfflineOpReq const>(
         (const std::shared_ptr<const proto::GetOfflineOpReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/offline_op_handler.cpp",
      "onGetOfflineOpReq",
      81);
    common::milog::MiLogStream::operator()(&v15, off_1BB4F860);
    common::milog::MiLogStream::~MiLogStream(&v15);
    OfflineOp = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::GetOfflineOpReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetOfflineOpReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::GetOfflineOpRsp>();
    rsp_0 = std::__shared_ptr_access<proto::GetOfflineOpRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GetOfflineOpRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::GetOfflineOpRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    UserId = common::minet::Packet::getUserId(v6);
    OfflineOpHandler::getOfflineOp(this, UserId, req, rsp_0);
    v8 = ServiceBox::findService<OfflineOpService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(&p_req_packet_ptr, p_packet_ptr);
    std::shared_ptr<proto::GetOfflineOpRsp>::shared_ptr(
      &p_rsp_ptr,
      (const std::shared_ptr<proto::GetOfflineOpRsp> *)(v2 + 64));
    OfflineOp = ServiceBase::sendRsp<proto::GetOfflineOpRsp>(v8, &p_rsp_ptr, &p_req_packet_ptr);
    std::shared_ptr<proto::GetOfflineOpRsp>::~shared_ptr(&p_rsp_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
    std::shared_ptr<proto::GetOfflineOpRsp>::~shared_ptr((std::shared_ptr<proto::GetOfflineOpRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::GetOfflineOpReq const>::~shared_ptr((std::shared_ptr<const proto::GetOfflineOpReq> *const)(v2 + 32));
  result = OfflineOp;
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

// Line 87: range 000000000DECEDE6-000000000DECF0E2
int32_t __cdecl OfflineOpHandler::onRemoveOfflineOpReq(
        OfflineOpHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t UserId; // esi
  OfflineOpService *v8; // r14
  int32_t result; // eax
  std::__shared_ptr_access<const proto::RemoveOfflineOpReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *req; // [rsp+10h] [rbp-E0h]
  std::__shared_ptr_access<proto::RemoveOfflineOpRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+18h] [rbp-D8h]
  std::shared_ptr<proto::RemoveOfflineOpRsp> p_rsp_ptr; // [rsp+20h] [rbp-D0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:89 64 16 10 rsp_ptr:89";
  *(_QWORD *)(v2 + 16) = OfflineOpHandler::onRemoveOfflineOpReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::RemoveOfflineOpReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::RemoveOfflineOpReq const>(
         (const std::shared_ptr<const proto::RemoveOfflineOpReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/offline_op_handler.cpp",
      "onRemoveOfflineOpReq",
      89);
    common::milog::MiLogStream::operator()(&v15, off_1BB4F860);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::RemoveOfflineOpReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::RemoveOfflineOpReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::RemoveOfflineOpRsp>();
    rsp_0 = std::__shared_ptr_access<proto::RemoveOfflineOpRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::RemoveOfflineOpRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::RemoveOfflineOpRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    UserId = common::minet::Packet::getUserId(v6);
    OfflineOpHandler::removeOfflineOp(this, UserId, req, rsp_0);
    v8 = ServiceBox::findService<OfflineOpService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(&p_req_packet_ptr, p_packet_ptr);
    std::shared_ptr<proto::RemoveOfflineOpRsp>::shared_ptr(
      &p_rsp_ptr,
      (const std::shared_ptr<proto::RemoveOfflineOpRsp> *)(v2 + 64));
    v5 = ServiceBase::sendRsp<proto::RemoveOfflineOpRsp>(v8, &p_rsp_ptr, &p_req_packet_ptr);
    std::shared_ptr<proto::RemoveOfflineOpRsp>::~shared_ptr(&p_rsp_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
    std::shared_ptr<proto::RemoveOfflineOpRsp>::~shared_ptr((std::shared_ptr<proto::RemoveOfflineOpRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::RemoveOfflineOpReq const>::~shared_ptr((std::shared_ptr<const proto::RemoveOfflineOpReq> *const)(v2 + 32));
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

// Line 95: range 000000000DECF0E4-000000000DECF7DB
__int64 __fastcall OfflineOpHandler::sendOfflineOp(
        OfflineOpHandler *const this,
        uint32_t uid,
        uint32_t time,
        proto::OfflineOpType op_type,
        const proto::OfflineOpData *op_data,
        unsigned __int64 op_index)
{
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  unsigned int v12; // r14d
  common::milog::MiLogStream *v13; // r14
  const std::string *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  proto::OfflineOpBin *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  uint32_t v25; // ecx
  __int64 result; // rax
  const proto::OfflineOpBin *bin; // [rsp+38h] [rbp-118h]
  common::milog::MiLogStream v32; // [rsp+40h] [rbp-110h] BYREF
  char v33[240]; // [rsp+60h] [rbp-F0h] BYREF

  v6 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_2(192LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "6 32 4 13 max_length:97 48 4 10 length:107 64 4 9 index:118 80 4 6 uid:94 96 4 10 op_type:94 112"
                        " 40 25 offline_op_redis_data:125";
  *(_QWORD *)(v6 + 16) = OfflineOpHandler::sendOfflineOp;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234556924;
  v8[536862722] = -234556924;
  v8[536862723] = 61956;
  v8[536862724] = -218103808;
  v8[536862725] = -202116109;
  *(_DWORD *)(v6 + 80) = uid;
  *(_DWORD *)(v6 + 96) = op_type;
  bin = proto::OfflineOpData::bin(op_data);
  *(_DWORD *)(v6 + 32) = proto::OfflineOpData::max_length(op_data);
  if ( *(_DWORD *)(v6 + 32) )
  {
    if ( *(_DWORD *)(v6 + 32) > 0xC8u )
    {
      common::milog::MiLogStream::create(
        &v32,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/handler/offline_op_handler.cpp",
        "sendOfflineOp",
        104);
      v9 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
             &v32,
             (const char (*)[41])"onSendOfflineOpReq max length too large:");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v6 + 32));
      v11 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v10, (const char (*)[8])" limit:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        v11,
        &OfflineOpHandler::OFFLINE_OP_MAX_LENGTH);
      common::milog::MiLogStream::~MiLogStream(&v32);
      *(_DWORD *)(v6 + 32) = 200;
    }
  }
  else
  {
    *(_DWORD *)(v6 + 32) = 200;
  }
  *(_DWORD *)(v6 + 48) = 0;
  if ( RedisOpOfflineOp::getOfflineOpDataRedisLength(*(_DWORD *)(v6 + 80), *(_DWORD *)(v6 + 96), (uint32_t *)(v6 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v32,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/offline_op_handler.cpp",
      "sendOfflineOp",
      110);
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
      &v32,
      (const char (*)[33])"getOfflineOpDataRedisLength fail");
    common::milog::MiLogStream::~MiLogStream(&v32);
    v12 = -1;
  }
  else if ( *(_DWORD *)(v6 + 48) <= *(_DWORD *)(v6 + 32) )
  {
    *(_DWORD *)(v6 + 64) = 0;
    if ( RedisOpOfflineOp::genOfflineOpIndex(*(_DWORD *)(v6 + 80), *(_DWORD *)(v6 + 96), (uint32_t *)(v6 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v32,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/offline_op_handler.cpp",
        "sendOfflineOp",
        121);
      common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
        &v32,
        (const char (*)[23])"genOfflineOpIndex fail");
      common::milog::MiLogStream::~MiLogStream(&v32);
      v12 = -1;
    }
    else
    {
      proto::OfflineOpRedisData::OfflineOpRedisData((proto::OfflineOpRedisData *const)(v6 + 112));
      proto::OfflineOpRedisData::set_index((proto::OfflineOpRedisData *const)(v6 + 112), *(_DWORD *)(v6 + 64));
      proto::OfflineOpRedisData::set_op_type(
        (proto::OfflineOpRedisData *const)(v6 + 112),
        *(proto::OfflineOpType *)(v6 + 96));
      proto::OfflineOpRedisData::set_time((proto::OfflineOpRedisData *const)(v6 + 112), time);
      v19 = proto::OfflineOpRedisData::mutable_op_bin((proto::OfflineOpRedisData *const)(v6 + 112));
      proto::OfflineOpBin::CopyFrom(v19, bin);
      if ( RedisOpOfflineOp::insertOfflineOpData(*(_DWORD *)(v6 + 80), (const proto::OfflineOpRedisData *)(v6 + 112)) )
      {
        common::milog::MiLogStream::create(
          &v32,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/handler/offline_op_handler.cpp",
          "sendOfflineOp",
          132);
        common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
          &v32,
          (const char (*)[25])"insertOfflineOpData fail");
        common::milog::MiLogStream::~MiLogStream(&v32);
        v12 = -1;
      }
      else
      {
        OfflineOpHandler::notifyNewOfflineOp(
          this,
          *(_DWORD *)(v6 + 80),
          *(proto::OfflineOpType *)(v6 + 96),
          *(_DWORD *)(v6 + 64));
        common::milog::MiLogStream::create(
          &v32,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/handler/offline_op_handler.cpp",
          "sendOfflineOp",
          137);
        v20 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                &v32,
                (const char (*)[27])"sendOfflineOp success uid:");
        v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v20,
                (const unsigned int *)(v6 + 80));
        v22 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v21, (const char (*)[10])" op_type:");
        v23 = common::milog::MiLogStream::operator<<<proto::OfflineOpType,(proto::OfflineOpType*)0>(
                v22,
                (const proto::OfflineOpType *)(v6 + 96));
        v24 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v23, (const char (*)[8])" index:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)(v6 + 64));
        common::milog::MiLogStream::~MiLogStream(&v32);
        v25 = *(_DWORD *)(v6 + 64);
        if ( *(_BYTE *)((op_index >> 3) + 0x7FFF8000) != 0
          && (char)((op_index & 7) + 3) >= *(_BYTE *)((op_index >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(op_index);
        }
        *(_DWORD *)op_index = v25;
        v12 = 0;
      }
      proto::OfflineOpRedisData::~OfflineOpRedisData((proto::OfflineOpRedisData *const)(v6 + 112));
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v32,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/handler/offline_op_handler.cpp",
      "sendOfflineOp",
      115);
    v13 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
            &v32,
            (const char (*)[48])"getOfflineOpDataRedisLength already full. type:");
    v14 = proto::OfflineOpType_Name[abi:cxx11]((proto::OfflineOpType)*(_DWORD *)(v6 + 96));
    v15 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, v14);
    v16 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v15, (const char (*)[9])" length:");
    v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v6 + 48));
    v18 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v17, (const char (*)[13])" max_length:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v6 + 32));
    common::milog::MiLogStream::~MiLogStream(&v32);
    v12 = 2013;
  }
  result = v12;
  if ( v33 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 143: range 000000000DECF7DC-000000000DECFBB7
void __fastcall OfflineOpHandler::getOfflineOp(
        OfflineOpHandler *const this,
        uint32_t uid,
        const proto::GetOfflineOpReq *req,
        proto::GetOfflineOpRsp *rsp_0)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  google::protobuf::RepeatedPtrField<std::string > *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-F0h] BYREF
  char v16[208]; // [rsp+40h] [rbp-D0h] BYREF

  v4 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 48 4 11 op_type:145 64 4 9 index:146 80 4 7 uid:142 96 24 15 bin_str_vec:149";
  *(_QWORD *)(v4 + 16) = OfflineOpHandler::getOfflineOp;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -234556924;
  v6[536862723] = -218103808;
  v6[536862724] = -202116109;
  *(_DWORD *)(v4 + 80) = uid;
  proto::GetOfflineOpRsp::set_retcode(rsp_0, -1);
  *(_DWORD *)(v4 + 48) = proto::GetOfflineOpReq::op_type(req);
  *(_DWORD *)(v4 + 64) = proto::GetOfflineOpReq::index(req);
  std::vector<std::string>::vector((std::vector<std::string> *const)(v4 + 96));
  if ( *(_DWORD *)(v4 + 48) )
  {
    if ( RedisOpOfflineOp::getOfflineOpData(
           *(_DWORD *)(v4 + 80),
           *(_DWORD *)(v4 + 48),
           *(_DWORD *)(v4 + 64),
           (std::vector<std::string> *)(v4 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/offline_op_handler.cpp",
        "getOfflineOp",
        162);
      common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v15, (const char (*)[22])"getOfflineOpData fail");
      common::milog::MiLogStream::~MiLogStream(&v15);
      goto LABEL_10;
    }
  }
  else if ( RedisOpOfflineOp::getAllOfflineOpData(
              *(_DWORD *)(v4 + 80),
              *(_DWORD *)(v4 + 64),
              (std::vector<std::string> *)(v4 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/offline_op_handler.cpp",
      "getOfflineOp",
      154);
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
      &v15,
      (const char (*)[25])"getAllOfflineOpData fail");
    common::milog::MiLogStream::~MiLogStream(&v15);
    goto LABEL_10;
  }
  v7 = proto::GetOfflineOpRsp::mutable_bin_str_list[abi:cxx11](rsp_0);
  common::tools::MiscUtils::toRepeated<std::string,std::string>((const std::vector<std::string> *)(v4 + 96), v7);
  common::milog::MiLogStream::create(
    &v15,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/handler/offline_op_handler.cpp",
    "getOfflineOp",
    167);
  v8 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
         &v15,
         (const char (*)[26])"getOfflineOp success uid:");
  v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 80));
  v10 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v9, (const char (*)[10])" op_type:");
  v11 = common::milog::MiLogStream::operator<<<proto::OfflineOpType,(proto::OfflineOpType*)0>(
          v10,
          (const proto::OfflineOpType *)(v4 + 48));
  v12 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v11, (const char (*)[8])" index:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v4 + 64));
  common::milog::MiLogStream::~MiLogStream(&v15);
  proto::GetOfflineOpRsp::set_retcode(rsp_0, 0);
LABEL_10:
  std::vector<std::string>::~vector((std::vector<std::string> *const)(v4 + 96));
  if ( v16 == (char *)v4 )
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
};

// Line 175: range 000000000DECFBB8-000000000DECFF25
void __fastcall OfflineOpHandler::removeOfflineOp(
        OfflineOpHandler *const this,
        uint32_t uid,
        const proto::RemoveOfflineOpReq *req,
        proto::RemoveOfflineOpRsp *rsp_0)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  proto::OfflineOpType v12; // eax
  google::protobuf::uint32 v13; // eax
  common::milog::MiLogStream v16; // [rsp+20h] [rbp-A0h] BYREF
  char v17[128]; // [rsp+40h] [rbp-80h] BYREF

  v4 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 4 11 op_type:178 48 4 9 index:179 64 4 7 uid:174";
  *(_QWORD *)(v4 + 16) = OfflineOpHandler::removeOfflineOp;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -202116348;
  *(_DWORD *)(v4 + 64) = uid;
  proto::RemoveOfflineOpRsp::set_retcode(rsp_0, -1);
  *(_DWORD *)(v4 + 32) = proto::RemoveOfflineOpReq::op_type(req);
  *(_DWORD *)(v4 + 48) = proto::RemoveOfflineOpReq::index(req);
  if ( *(_DWORD *)(v4 + 32) )
  {
    if ( RedisOpOfflineOp::removeOfflineOpData(*(_DWORD *)(v4 + 64), *(_DWORD *)(v4 + 32), *(_DWORD *)(v4 + 48)) )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/handler/offline_op_handler.cpp",
        "removeOfflineOp",
        189);
      common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v16, (const char (*)[22])"getOfflineOpData fail");
      common::milog::MiLogStream::~MiLogStream(&v16);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/handler/offline_op_handler.cpp",
        "removeOfflineOp",
        192);
      v7 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v16,
             (const char (*)[29])"removeOfflineOp success uid:");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 64));
      v9 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v8, (const char (*)[10])" op_type:");
      v10 = common::milog::MiLogStream::operator<<<proto::OfflineOpType,(proto::OfflineOpType*)0>(
              v9,
              (const proto::OfflineOpType *)(v4 + 32));
      v11 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v10, (const char (*)[8])" index:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v4 + 48));
      common::milog::MiLogStream::~MiLogStream(&v16);
      proto::RemoveOfflineOpRsp::set_retcode(rsp_0, 0);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/handler/offline_op_handler.cpp",
      "removeOfflineOp",
      184);
    common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
      &v16,
      (const char (*)[52])"removeOfflineOpData fail ERROR TYPE OFFLINE_OP_NONE");
    common::milog::MiLogStream::~MiLogStream(&v16);
  }
  v12 = proto::RemoveOfflineOpReq::op_type(req);
  proto::RemoveOfflineOpRsp::set_op_type(rsp_0, v12);
  v13 = proto::RemoveOfflineOpReq::index(req);
  proto::RemoveOfflineOpRsp::set_index(rsp_0, v13);
  if ( v17 == (char *)v4 )
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

// Line 202: range 000000000DECFF26-000000000DED023D
void __cdecl OfflineOpHandler::notifyNewOfflineOp(
        OfflineOpHandler *const this,
        uint32_t uid,
        proto::OfflineOpType op_type,
        uint32_t index)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::minet::Packet *v7; // rax
  common::minet::Packet *v8; // rax
  common::minet::Packet *v9; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // r14
  unsigned __int64 v12; // rax
  void (__fastcall *v13)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  std::shared_ptr<common::minet::Packet> v16; // [rsp+20h] [rbp-C0h] BYREF
  char v17[176]; // [rsp+30h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 32 16 14 packet_ptr:203 64 32 10 notify:210";
  *(_QWORD *)(v4 + 16) = OfflineOpHandler::notifyNewOfflineOp;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -219021312;
  v6[536862723] = -202116109;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v4 + 32)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/offline_op_handler.cpp",
      "notifyNewOfflineOp",
      206);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
      (common::milog::MiLogStream *const)(v4 + 64),
      (const char (*)[19])"createPacket fails");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 64));
  }
  else
  {
    proto::NewOfflineOpNotify::NewOfflineOpNotify((proto::NewOfflineOpNotify *const)(v4 + 64));
    proto::NewOfflineOpNotify::set_op_type((proto::NewOfflineOpNotify *const)(v4 + 64), op_type);
    proto::NewOfflineOpNotify::set_index((proto::NewOfflineOpNotify *const)(v4 + 64), index);
    v7 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    common::minet::Packet::setProto<proto::NewOfflineOpNotify>(v7, (const proto::NewOfflineOpNotify *)(v4 + 64));
    v8 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    common::minet::Packet::setUserId(v8, uid);
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    common::minet::Packet::setTargetService(v9, 3u);
    v10 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    v11 = v10;
    if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v10);
    v12 = (unsigned __int64)(v11->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v11->_vptr_NetworkMgrBase + 8);
    v13 = *(void (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v12;
    std::shared_ptr<common::minet::Packet>::shared_ptr(&v16, (const std::shared_ptr<common::minet::Packet> *)(v4 + 32));
    v13(v11, &v16);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&v16);
    proto::NewOfflineOpNotify::~NewOfflineOpNotify((proto::NewOfflineOpNotify *const)(v4 + 64));
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 32));
  if ( v17 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
