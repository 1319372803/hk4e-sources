// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/oaserver/src/handler/recharge_handler.cpp

// Line 24: range 000000000CA841D2-000000000CA84653
int32_t __cdecl RechargeHandler::addPacketFuncToMap(
        RechargeHandler *const this,
        PacketFuncMap *push_packet_func_map,
        PacketFuncMap *push_fail_packet_func_map,
        PacketFuncMap *process_packet_func_map)
{
  RechargeHandler **v4; // r8
  const std::_Placeholder<1> *v5; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v7; // rax
  RechargeHandler **v8; // r8
  const std::_Placeholder<1> *v9; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v10; // rax
  RechargeHandler **v11; // r8
  const std::_Placeholder<1> *v12; // r9
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v13; // rax
  __m128i v14; // [rsp+0h] [rbp-D0h] BYREF
  PacketFuncMap *process_packet_func_mapa; // [rsp+10h] [rbp-C0h]
  PacketFuncMap *push_fail_packet_func_mapa; // [rsp+18h] [rbp-B8h]
  PacketFuncMap *push_packet_func_mapa; // [rsp+20h] [rbp-B0h]
  RechargeHandler *thisa; // [rsp+28h] [rbp-A8h]
  std::map<unsigned int,std::function<int(std::shared_ptr<common::minet::Packet>)>>::key_type __x; // [rsp+3Ch] [rbp-94h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self v20; // [rsp+40h] [rbp-90h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self __y; // [rsp+48h] [rbp-88h] BYREF
  int (*__f[2])(RechargeHandler *, std::shared_ptr<common::minet::Packet>); // [rsp+50h] [rbp-80h] BYREF
  std::_Bind_helper<false,int (RechargeHandler::*)(std::shared_ptr<common::minet::Packet>),RechargeHandler*,const std::_Placeholder<1>&>::type v23; // [rsp+60h] [rbp-70h] BYREF
  common::milog::MiLogStream v24; // [rsp+80h] [rbp-50h] BYREF

  thisa = this;
  push_packet_func_mapa = push_packet_func_map;
  push_fail_packet_func_mapa = push_fail_packet_func_map;
  process_packet_func_mapa = process_packet_func_map;
  __x = 10707;
  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                  process_packet_func_map,
                  &__x)._M_node;
  v20._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
  if ( std::operator!=(&v20, &__y) )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/handler/recharge_handler.cpp",
      "addPacketFuncToMap",
      25);
    common::milog::MiLogStream::operator()(&v24, "can not add repeat process func for cmd_id=%u", 10707LL);
    common::milog::MiLogStream::~MiLogStream(&v24);
    return -1;
  }
  else
  {
    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
    v14.m128i_i64[0] = (__int64)RechargeHandler::onGetUnfinishedOrderReq;
    v14.m128i_i64[1] = 0LL;
    *(__m128i *)__f = _mm_load_si128(&v14);
    std::bind<int (RechargeHandler::*)(std::shared_ptr<common::minet::Packet>),RechargeHandler*,std::_Placeholder<1> const&>(
      &v23,
      __f,
      (RechargeHandler **)&__y,
      (const std::_Placeholder<1> *)&std::placeholders::_1,
      v4,
      v5);
    __x = 10707;
    v7 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
           process_packet_func_mapa,
           &__x);
    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (RechargeHandler::*)(std::shared_ptr<common::minet::Packet>) ()(RechargeHandler*,std::_Placeholder<1>)>>(
      v7,
      &v23);
    __x = 10718;
    __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                    process_packet_func_mapa,
                    &__x)._M_node;
    v20._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
    if ( std::operator!=(&v20, &__y) )
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/handler/recharge_handler.cpp",
        "addPacketFuncToMap",
        26);
      common::milog::MiLogStream::operator()(&v24, "can not add repeat process func for cmd_id=%u", 10718LL);
      common::milog::MiLogStream::~MiLogStream(&v24);
      return -1;
    }
    else
    {
      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
      __f[0] = (int (*)(RechargeHandler *, std::shared_ptr<common::minet::Packet>))RechargeHandler::onMarkOrderFinishedReq;
      __f[1] = 0LL;
      std::bind<int (RechargeHandler::*)(std::shared_ptr<common::minet::Packet>),RechargeHandler*,std::_Placeholder<1> const&>(
        &v23,
        __f,
        (RechargeHandler **)&__y,
        (const std::_Placeholder<1> *)&std::placeholders::_1,
        v8,
        v9);
      __x = 10718;
      v10 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
              process_packet_func_mapa,
              &__x);
      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (RechargeHandler::*)(std::shared_ptr<common::minet::Packet>) ()(RechargeHandler*,std::_Placeholder<1>)>>(
        v10,
        &v23);
      __x = 10731;
      __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                      process_packet_func_mapa,
                      &__x)._M_node;
      v20._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_mapa)._M_node;
      if ( std::operator!=(&v20, &__y) )
      {
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/handler/recharge_handler.cpp",
          "addPacketFuncToMap",
          27);
        common::milog::MiLogStream::operator()(&v24, "can not add repeat process func for cmd_id=%u", 10731LL);
        common::milog::MiLogStream::~MiLogStream(&v24);
        return -1;
      }
      else
      {
        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)thisa;
        __f[0] = (int (*)(RechargeHandler *, std::shared_ptr<common::minet::Packet>))RechargeHandler::onGetSpecificUnfinishedReq;
        __f[1] = 0LL;
        std::bind<int (RechargeHandler::*)(std::shared_ptr<common::minet::Packet>),RechargeHandler*,std::_Placeholder<1> const&>(
          &v23,
          __f,
          (RechargeHandler **)&__y,
          (const std::_Placeholder<1> *)&std::placeholders::_1,
          v11,
          v12);
        __x = 10731;
        v13 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                process_packet_func_mapa,
                &__x);
        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<std::_Bind<int (RechargeHandler::*)(std::shared_ptr<common::minet::Packet>) ()(RechargeHandler*,std::_Placeholder<1>)>>(
          v13,
          &v23);
        return 0;
      }
    }
  }
};

// Line 33: range 000000000CA84654-000000000CA84A55
int32_t __cdecl RechargeHandler::onGetUnfinishedOrderReq(
        RechargeHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  int32_t v6; // r14d
  OaserverService *v7; // r14
  int32_t result; // eax
  uint32_t uid; // [rsp+10h] [rbp-140h]
  google::protobuf::int32 ret; // [rsp+14h] [rbp-13Ch]
  std::vector<TableOrderData>::iterator __for_begin; // [rsp+18h] [rbp-138h] BYREF
  std::vector<TableOrderData>::iterator __for_end; // [rsp+20h] [rbp-130h] BYREF
  const proto::GetUnfinishedOrderReq *req; // [rsp+28h] [rbp-128h]
  proto::GetUnfinishedOrderRsp *rsp_0; // [rsp+30h] [rbp-120h]
  std::vector<TableOrderData> *__for_range; // [rsp+38h] [rbp-118h]
  const TableOrderData *row; // [rsp+40h] [rbp-110h]
  proto::Order *proto_order; // [rsp+48h] [rbp-108h]
  std::shared_ptr<common::minet::Packet> p_req_packet_ptr; // [rsp+50h] [rbp-100h] BYREF
  common::milog::MiLogStream v19; // [rsp+60h] [rbp-F0h] BYREF
  char v20[208]; // [rsp+80h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 16 10 req_ptr:35 64 16 10 rsp_ptr:35 96 24 10 row_vec:37";
  *(_QWORD *)(v2 + 16) = RechargeHandler::onGetUnfinishedOrderReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  v5 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  uid = common::minet::Packet::getUserId(v5);
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GetUnfinishedOrderReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::GetUnfinishedOrderReq const>(
         (const std::shared_ptr<const proto::GetUnfinishedOrderReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/recharge_handler.cpp",
      "onGetUnfinishedOrderReq",
      35);
    common::milog::MiLogStream::operator()(&v19, "get proto failed");
    common::milog::MiLogStream::~MiLogStream(&v19);
    v6 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::GetUnfinishedOrderReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetUnfinishedOrderReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::GetUnfinishedOrderRsp>();
    rsp_0 = std::__shared_ptr_access<proto::GetUnfinishedOrderRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GetUnfinishedOrderRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::GetUnfinishedOrderRsp::set_retcode(rsp_0, -1);
    std::vector<TableOrderData>::vector((std::vector<TableOrderData> *const)(v2 + 96));
    ret = MysqlOpOrder::selectRecentUnfinishedOrder(uid, (std::vector<TableOrderData> *)(v2 + 96));
    proto::GetUnfinishedOrderRsp::set_retcode(rsp_0, ret);
    if ( !ret )
    {
      __for_range = (std::vector<TableOrderData> *)(v2 + 96);
      __for_begin._M_current = std::vector<TableOrderData>::begin((std::vector<TableOrderData> *const)(v2 + 96))._M_current;
      __for_end._M_current = std::vector<TableOrderData>::end((std::vector<TableOrderData> *const)(v2 + 96))._M_current;
      while ( __gnu_cxx::operator!=<TableOrderData *,std::vector<TableOrderData>>(&__for_begin, &__for_end) )
      {
        row = __gnu_cxx::__normal_iterator<TableOrderData *,std::vector<TableOrderData>>::operator*(&__for_begin);
        proto_order = proto::GetUnfinishedOrderRsp::add_order_list(rsp_0);
        RechargeHandler::convertTableRowToProtoOrder(this, row, proto_order);
        __gnu_cxx::__normal_iterator<TableOrderData *,std::vector<TableOrderData>>::operator++(&__for_begin);
      }
    }
    v7 = ServiceBox::findService<OaserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(&p_req_packet_ptr, p_packet_ptr);
    ServiceBase::sendRsp<proto::GetUnfinishedOrderRsp>(v7, rsp_0, &p_req_packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
    v6 = 0;
    std::vector<TableOrderData>::~vector((std::vector<TableOrderData> *const)(v2 + 96));
    std::shared_ptr<proto::GetUnfinishedOrderRsp>::~shared_ptr((std::shared_ptr<proto::GetUnfinishedOrderRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::GetUnfinishedOrderReq const>::~shared_ptr((std::shared_ptr<const proto::GetUnfinishedOrderReq> *const)(v2 + 32));
  result = v6;
  if ( v20 == (char *)v2 )
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

// Line 54: range 000000000CA84A56-000000000CA84EA2
void __cdecl RechargeHandler::convertTableRowToProtoOrder(
        const RechargeHandler *const this,
        const TableOrderData *row,
        proto::Order *proto_order)
{
  if ( *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(row);
  }
  proto::Order::set_id(proto_order, row->id);
  if ( *(_BYTE *)(((unsigned __int64)&row->uid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)row + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&row->uid >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&row->uid);
  }
  proto::Order::set_uid(proto_order, row->uid);
  proto::Order::set_product_id(proto_order, &row->product_id);
  proto::Order::set_product_name(proto_order, &row->product_name);
  if ( *(_BYTE *)(((unsigned __int64)&row->product_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&row->product_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&row->product_num);
  }
  proto::Order::set_product_num(proto_order, row->product_num);
  if ( *(_BYTE *)(((unsigned __int64)&row->coin_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)row + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&row->coin_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&row->coin_num);
  }
  proto::Order::set_coin_num(proto_order, row->coin_num);
  proto::Order::set_total_fee(proto_order, &row->total_fee);
  proto::Order::set_currency(proto_order, &row->currency);
  proto::Order::set_price_tier(proto_order, &row->price_tier);
  proto::Order::set_trade_no(proto_order, &row->trade_no);
  if ( *(_BYTE *)(((unsigned __int64)&row->trade_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&row->trade_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&row->trade_time);
  }
  proto::Order::set_trade_time(proto_order, row->trade_time);
  if ( *(_BYTE *)(((unsigned __int64)&row->channel_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)row - 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&row->channel_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&row->channel_id);
  }
  proto::Order::set_channel_id(proto_order, row->channel_id);
  proto::Order::set_channel_order_no(proto_order, &row->channel_order_no);
  proto::Order::set_pay_plat(proto_order, &row->pay_plat);
  proto::Order::set_extend(proto_order, &row->extend);
  if ( *(_BYTE *)(((unsigned __int64)&row->create_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&row->create_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&row->create_time);
  }
  proto::Order::set_create_time(proto_order, row->create_time);
  proto::Order::set_bonus(proto_order, &row->bonus);
  if ( *(_BYTE *)(((unsigned __int64)&row->bonus_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&row->bonus_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&row->bonus_num);
  }
  proto::Order::set_bonus_num(proto_order, row->bonus_num);
  if ( *(_BYTE *)(((unsigned __int64)&row->vip_point_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)row - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&row->vip_point_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&row->vip_point_num);
  }
  proto::Order::set_vip_point_num(proto_order, row->vip_point_num);
  proto::Order::set_pay_type(proto_order, &row->pay_type);
  proto::Order::set_pay_vendor(proto_order, &row->pay_vendor);
  proto::Order::set_client_type(proto_order, &row->client_type);
  proto::Order::set_device(proto_order, &row->device);
  proto::Order::set_client_ip(proto_order, &row->client_ip);
};

// Line 84: range 000000000CA84EA4-000000000CA853BB
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl RechargeHandler::onMarkOrderFinishedReq(
        RechargeHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  uint32_t v6; // r14d
  uint32_t v7; // eax
  google::protobuf::uint32 v8; // eax
  OaserverService *v9; // r14
  std::__shared_ptr_access<proto_log::OrderLogBodyFinish,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // r14
  google::protobuf::uint32 v11; // eax
  std::__shared_ptr_access<proto_log::OrderLogBodyFinish,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  uint32_t UserId; // eax
  std::__shared_ptr_access<proto_log::OrderLogBodyFinish,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // r14
  google::protobuf::uint32 v16; // eax
  std::__shared_ptr_access<proto_log::OrderLogBodyFinish,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // r14
  bool is_retry; // al
  OaserverService *v19; // r14
  int32_t result; // eax
  std::string p_packet_ptra; // [rsp+0h] [rbp-130h] OVERLAPPED BYREF
  const proto::MarkOrderFinishedReq *req; // [rsp+20h] [rbp-110h]
  proto::MarkOrderFinishedRsp *rsp_0; // [rsp+28h] [rbp-108h]
  std::shared_ptr<common::minet::Packet> p_req_packet_ptr; // [rsp+30h] [rbp-100h] BYREF
  common::milog::MiLogStream v25; // [rsp+40h] [rbp-F0h] BYREF
  char v26[208]; // [rsp+60h] [rbp-D0h] BYREF

  p_packet_ptra._M_string_length = (std::string::size_type)this;
  p_packet_ptra._M_dataplus._M_p = (std::string::pointer)p_packet_ptr;
  v2 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 1 9 holder:87 64 16 10 req_ptr:85 96 16 10 rsp_ptr:85 128 16 10 log_ptr:96";
  *(_QWORD *)(v2 + 16) = RechargeHandler::onMarkOrderFinishedReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptra._M_dataplus._M_p);
  common::minet::Packet::getConstProto<proto::MarkOrderFinishedReq>((common::minet::Packet *const)(v2 + 64));
  if ( std::operator==<proto::MarkOrderFinishedReq const>(
         (const std::shared_ptr<const proto::MarkOrderFinishedReq> *)(v2 + 64),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/recharge_handler.cpp",
      "onMarkOrderFinishedReq",
      85);
    common::milog::MiLogStream::operator()(&v25, "get proto failed");
    common::milog::MiLogStream::~MiLogStream(&v25);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::MarkOrderFinishedReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::MarkOrderFinishedReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    common::tools::perf::make_shared<proto::MarkOrderFinishedRsp>();
    rsp_0 = std::__shared_ptr_access<proto::MarkOrderFinishedRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::MarkOrderFinishedRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    proto::MarkOrderFinishedRsp::set_retcode(rsp_0, -1);
    std::allocator<char>::allocator((char *)&p_packet_ptra._anon_0._M_allocated_capacity + 11);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)&v25,
      byte_1A31C760,
      (const std::allocator<char> *)&p_packet_ptra._anon_0._M_allocated_capacity + 11);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 2u, p_packet_ptra);
    std::string::~string(&v25);
    std::allocator<char>::~allocator((char *)&p_packet_ptra._anon_0._M_allocated_capacity + 11);
    v6 = proto::MarkOrderFinishedReq::finish_time(req);
    v7 = proto::MarkOrderFinishedReq::order_id(req);
    *((_DWORD *)&p_packet_ptra._anon_0._M_allocated_capacity + 3) = MysqlOpOrder::updateOrderFinishTime(v7, v6);
    proto::MarkOrderFinishedRsp::set_retcode(
      rsp_0,
      *((google::protobuf::int32 *)&p_packet_ptra._anon_0._M_allocated_capacity + 3));
    v8 = proto::MarkOrderFinishedReq::order_id(req);
    proto::MarkOrderFinishedRsp::set_order_id(rsp_0, v8);
    v9 = ServiceBox::findService<OaserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &p_req_packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)p_packet_ptra._M_dataplus._M_p);
    ServiceBase::sendRsp<proto::MarkOrderFinishedRsp>(v9, rsp_0, &p_req_packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
    if ( !*((_DWORD *)&p_packet_ptra._anon_0._M_allocated_capacity + 3) )
    {
      common::tools::perf::make_shared<proto_log::OrderLogBodyFinish>();
      v10 = std::__shared_ptr_access<proto_log::OrderLogBodyFinish,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::OrderLogBodyFinish,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
      v11 = proto::MarkOrderFinishedReq::order_id(req);
      proto_log::OrderLogBodyFinish::set_order_id(v10, v11);
      v12 = std::__shared_ptr_access<proto_log::OrderLogBodyFinish,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::OrderLogBodyFinish,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
      v13 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptra._M_dataplus._M_p);
      UserId = common::minet::Packet::getUserId(v13);
      proto_log::OrderLogBodyFinish::set_uid(v12, UserId);
      v15 = std::__shared_ptr_access<proto_log::OrderLogBodyFinish,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::OrderLogBodyFinish,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
      v16 = proto::MarkOrderFinishedReq::finish_time(req);
      proto_log::OrderLogBodyFinish::set_finish_time(v15, v16);
      v17 = std::__shared_ptr_access<proto_log::OrderLogBodyFinish,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::OrderLogBodyFinish,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
      is_retry = proto::MarkOrderFinishedReq::is_retry(req);
      proto_log::OrderLogBodyFinish::set_is_retry(v17, is_retry);
      v19 = ServiceBox::findService<OaserverService>();
      std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::OrderLogBodyFinish,void>(
        (std::shared_ptr<google::protobuf::Message> *const)&p_req_packet_ptr,
        (const std::shared_ptr<proto_log::OrderLogBodyFinish> *)(v2 + 128));
      OaserverService::printStatLog(v19, (MessagePtr *)&p_req_packet_ptr);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&p_req_packet_ptr);
      std::shared_ptr<proto_log::OrderLogBodyFinish>::~shared_ptr((std::shared_ptr<proto_log::OrderLogBodyFinish> *const)(v2 + 128));
    }
    v5 = 0;
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
    std::shared_ptr<proto::MarkOrderFinishedRsp>::~shared_ptr((std::shared_ptr<proto::MarkOrderFinishedRsp> *const)(v2 + 96));
  }
  std::shared_ptr<proto::MarkOrderFinishedReq const>::~shared_ptr((std::shared_ptr<const proto::MarkOrderFinishedReq> *const)(v2 + 64));
  result = v5;
  if ( v26 == (char *)v2 )
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

// Line 110: range 000000000CA853BC-000000000CA8585F
int32_t __cdecl RechargeHandler::onGetSpecificUnfinishedReq(
        RechargeHandler *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // rbx
  int32_t v5; // r14d
  proto::Order *v6; // r14
  google::protobuf::uint32 v7; // eax
  uint32_t v8; // eax
  proto::Order *v9; // rdx
  OaserverService *v10; // r14
  int32_t result; // eax
  std::__shared_ptr_access<const proto::GetSpecificUnfinishedReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *req; // [rsp+20h] [rbp-3D0h]
  std::__shared_ptr_access<proto::GetSpecificUnfinishedRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-3C8h]
  std::shared_ptr<common::minet::Packet> p_req_packet_ptr; // [rsp+30h] [rbp-3C0h] BYREF
  common::milog::MiLogStream v15; // [rsp+40h] [rbp-3B0h] BYREF
  char v16[912]; // [rsp+60h] [rbp-390h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(864LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 1 12 is_exist:115 64 16 11 req_ptr:111 96 16 11 rsp_ptr:111 128 600 7 row:114";
  *(_QWORD *)(v2 + 16) = RechargeHandler::onGetSpecificUnfinishedReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862742] = -218103808;
  v4[536862743] = -202116109;
  v4[536862744] = -202116109;
  v4[536862745] = -202116109;
  v4[536862746] = -202116109;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GetSpecificUnfinishedReq>((common::minet::Packet *const)(v2 + 64));
  if ( std::operator==<proto::GetSpecificUnfinishedReq const>(
         (const std::shared_ptr<const proto::GetSpecificUnfinishedReq> *)(v2 + 64),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/recharge_handler.cpp",
      "onGetSpecificUnfinishedReq",
      111);
    common::milog::MiLogStream::operator()(&v15, "get proto failed");
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::GetSpecificUnfinishedReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetSpecificUnfinishedReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    common::tools::perf::make_shared<proto::GetSpecificUnfinishedRsp>();
    rsp_0 = std::__shared_ptr_access<proto::GetSpecificUnfinishedRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GetSpecificUnfinishedRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    proto::GetSpecificUnfinishedRsp::set_retcode(rsp_0, -1);
    v6 = proto::GetSpecificUnfinishedRsp::mutable_order(rsp_0);
    v7 = proto::GetSpecificUnfinishedReq::order_id(req);
    proto::Order::set_id(v6, v7);
    TableOrderData::TableOrderData((TableOrderData *const)(v2 + 128));
    *(_BYTE *)(v2 + 48) = 0;
    v8 = proto::GetSpecificUnfinishedReq::order_id(req);
    MysqlOpOrder::selectOrder(v8, (TableOrderData *)(v2 + 128), (bool *)(v2 + 48));
    if ( *(_BYTE *)(v2 + 48) != 1 )
    {
      proto::GetSpecificUnfinishedRsp::set_retcode(rsp_0, 2004);
    }
    else if ( *(_DWORD *)(v2 + 556) )
    {
      proto::GetSpecificUnfinishedRsp::set_retcode(rsp_0, 2011);
    }
    else
    {
      v9 = proto::GetSpecificUnfinishedRsp::mutable_order(rsp_0);
      RechargeHandler::convertTableRowToProtoOrder(this, (const TableOrderData *)(v2 + 128), v9);
      proto::GetSpecificUnfinishedRsp::set_retcode(rsp_0, 0);
    }
    v10 = ServiceBox::findService<OaserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(&p_req_packet_ptr, p_packet_ptr);
    ServiceBase::sendRsp<proto::GetSpecificUnfinishedRsp>(v10, rsp_0, &p_req_packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
    v5 = proto::GetSpecificUnfinishedRsp::retcode(rsp_0);
    TableOrderData::~TableOrderData((TableOrderData *const)(v2 + 128));
    std::shared_ptr<proto::GetSpecificUnfinishedRsp>::~shared_ptr((std::shared_ptr<proto::GetSpecificUnfinishedRsp> *const)(v2 + 96));
  }
  std::shared_ptr<proto::GetSpecificUnfinishedReq const>::~shared_ptr((std::shared_ptr<const proto::GetSpecificUnfinishedReq> *const)(v2 + 64));
  result = v5;
  if ( v16 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8058) = 0LL;
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
