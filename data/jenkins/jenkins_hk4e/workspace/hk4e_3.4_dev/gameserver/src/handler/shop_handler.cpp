// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/handler/shop_handler.cpp

// Line 26: range 0000000015C8DFDA-0000000015C8E50F
int32_t __cdecl ShopHandler::addPacketFuncToMap(ShopHandler *const this, PacketFuncMap *process_packet_func_map)
{
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v3; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v4; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v5; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v6; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v7; // rax
  std::map<unsigned int,std::function<int(std::shared_ptr<common::minet::Packet>)>>::key_type __x; // [rsp+1Ch] [rbp-44h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self v9; // [rsp+20h] [rbp-40h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self __y; // [rsp+28h] [rbp-38h] BYREF
  common::milog::MiLogStream v11; // [rsp+30h] [rbp-30h] BYREF

  __x = 772;
  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                  process_packet_func_map,
                  &__x)._M_node;
  v9._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
  if ( std::operator!=(&v9, &__y) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/handler/shop_handler.cpp",
      "addPacketFuncToMap",
      27);
    common::milog::MiLogStream::operator()(&v11, off_259BE5C0, 772LL);
    common::milog::MiLogStream::~MiLogStream(&v11);
    return -1;
  }
  else
  {
    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
    __x = 772;
    v3 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
           process_packet_func_map,
           &__x);
    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<ShopHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}>(
      v3,
      (ShopHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
    __x = 712;
    __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                    process_packet_func_map,
                    &__x)._M_node;
    v9._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
    if ( std::operator!=(&v9, &__y) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/handler/shop_handler.cpp",
        "addPacketFuncToMap",
        28);
      common::milog::MiLogStream::operator()(&v11, off_259BE5C0, 712LL);
      common::milog::MiLogStream::~MiLogStream(&v11);
      return -1;
    }
    else
    {
      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
      __x = 712;
      v4 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
             process_packet_func_map,
             &__x);
      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<ShopHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}>(
        v4,
        (ShopHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
      __x = 707;
      __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                      process_packet_func_map,
                      &__x)._M_node;
      v9._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
      if ( std::operator!=(&v9, &__y) )
      {
        common::milog::MiLogStream::create(
          &v11,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/handler/shop_handler.cpp",
          "addPacketFuncToMap",
          29);
        common::milog::MiLogStream::operator()(&v11, off_259BE5C0, 707LL);
        common::milog::MiLogStream::~MiLogStream(&v11);
        return -1;
      }
      else
      {
        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
        __x = 707;
        v5 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
               process_packet_func_map,
               &__x);
        std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<ShopHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#3}>(
          v5,
          (ShopHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
        __x = 703;
        __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                        process_packet_func_map,
                        &__x)._M_node;
        v9._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
        if ( std::operator!=(&v9, &__y) )
        {
          common::milog::MiLogStream::create(
            &v11,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/handler/shop_handler.cpp",
            "addPacketFuncToMap",
            30);
          common::milog::MiLogStream::operator()(&v11, off_259BE5C0, 703LL);
          common::milog::MiLogStream::~MiLogStream(&v11);
          return -1;
        }
        else
        {
          __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
          __x = 703;
          v6 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                 process_packet_func_map,
                 &__x);
          std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<ShopHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#4}>(
            v6,
            (ShopHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
          __x = 773;
          __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                          process_packet_func_map,
                          &__x)._M_node;
          v9._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
          if ( std::operator!=(&v9, &__y) )
          {
            common::milog::MiLogStream::create(
              &v11,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/handler/shop_handler.cpp",
              "addPacketFuncToMap",
              31);
            common::milog::MiLogStream::operator()(&v11, off_259BE5C0, 773LL);
            common::milog::MiLogStream::~MiLogStream(&v11);
            return -1;
          }
          else
          {
            __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
            __x = 773;
            v7 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
                   process_packet_func_map,
                   &__x);
            std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<ShopHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#5}>(
              v7,
              (ShopHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
            return 0;
          }
        }
      }
    }
  }
};

// Line 27: range 0000000015C8D044-0000000015C8D360
int __cdecl ShopHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}::operator()(
        const ShopHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  ShopHandler *this; // r14
  std::__shared_ptr_access<const proto::GetShopReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::GetShopRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::GetShopRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:27 64 16 10 rsp_ptr:27";
  *(_QWORD *)(v2 + 16) = ShopHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GetShopReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::GetShopReq const>((const std::shared_ptr<const proto::GetShopReq> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/shop_handler.cpp",
      "operator()",
      27);
    common::milog::MiLogStream::operator()(&v15, off_259BE200);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::GetShopReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetShopReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::GetShopRsp>();
    rsp_0 = std::__shared_ptr_access<proto::GetShopRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GetShopRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::GetShopRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::GetShopReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetShopReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = ShopHandler::onGetShopReq(this, v8, rsp_0);
    proto::GetShopRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::GetShopRsp>::shared_ptr(&p_proto_ptr, (const std::shared_ptr<proto::GetShopRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::GetShopRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::GetShopRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::GetShopRsp>::~shared_ptr((std::shared_ptr<proto::GetShopRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::GetShopReq const>::~shared_ptr((std::shared_ptr<const proto::GetShopReq> *const)(v2 + 32));
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

// Line 28: range 0000000015C8D362-0000000015C8D67E
int __cdecl ShopHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}::operator()(
        const ShopHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  ShopHandler *this; // r14
  std::__shared_ptr_access<const proto::BuyGoodsReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::BuyGoodsRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::BuyGoodsRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = ShopHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::BuyGoodsReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::BuyGoodsReq const>((const std::shared_ptr<const proto::BuyGoodsReq> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/shop_handler.cpp",
      "operator()",
      28);
    common::milog::MiLogStream::operator()(&v15, off_259BE200);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::BuyGoodsReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::BuyGoodsReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::BuyGoodsRsp>();
    rsp_0 = std::__shared_ptr_access<proto::BuyGoodsRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::BuyGoodsRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::BuyGoodsRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::BuyGoodsReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::BuyGoodsReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = ShopHandler::onBuyGoodsReq(this, v8, rsp_0);
    proto::BuyGoodsRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::BuyGoodsRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::BuyGoodsRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::BuyGoodsRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::BuyGoodsRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::BuyGoodsRsp>::~shared_ptr((std::shared_ptr<proto::BuyGoodsRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::BuyGoodsReq const>::~shared_ptr((std::shared_ptr<const proto::BuyGoodsReq> *const)(v2 + 32));
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

// Line 29: range 0000000015C8D680-0000000015C8D99C
int __cdecl ShopHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#3}::operator()(
        const ShopHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  ShopHandler *this; // r14
  std::__shared_ptr_access<const proto::GetShopmallDataReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::GetShopmallDataRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::GetShopmallDataRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = ShopHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#3}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GetShopmallDataReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::GetShopmallDataReq const>(
         (const std::shared_ptr<const proto::GetShopmallDataReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/shop_handler.cpp",
      "operator()",
      29);
    common::milog::MiLogStream::operator()(&v15, off_259BE200);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::GetShopmallDataReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetShopmallDataReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::GetShopmallDataRsp>();
    rsp_0 = std::__shared_ptr_access<proto::GetShopmallDataRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GetShopmallDataRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::GetShopmallDataRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::GetShopmallDataReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetShopmallDataReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = ShopHandler::onGetShopmallDataReq(this, v8, rsp_0);
    proto::GetShopmallDataRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::GetShopmallDataRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::GetShopmallDataRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::GetShopmallDataRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::GetShopmallDataRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::GetShopmallDataRsp>::~shared_ptr((std::shared_ptr<proto::GetShopmallDataRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::GetShopmallDataReq const>::~shared_ptr((std::shared_ptr<const proto::GetShopmallDataReq> *const)(v2 + 32));
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

// Line 30: range 0000000015C8D99E-0000000015C8DCBA
int __cdecl ShopHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#4}::operator()(
        const ShopHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  ShopHandler *this; // r14
  std::__shared_ptr_access<const proto::GetActivityShopSheetInfoReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::GetActivityShopSheetInfoRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::GetActivityShopSheetInfoRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = ShopHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#4}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::GetActivityShopSheetInfoReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::GetActivityShopSheetInfoReq const>(
         (const std::shared_ptr<const proto::GetActivityShopSheetInfoReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/shop_handler.cpp",
      "operator()",
      30);
    common::milog::MiLogStream::operator()(&v15, off_259BE200);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::GetActivityShopSheetInfoReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetActivityShopSheetInfoReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::GetActivityShopSheetInfoRsp>();
    rsp_0 = std::__shared_ptr_access<proto::GetActivityShopSheetInfoRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GetActivityShopSheetInfoRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::GetActivityShopSheetInfoRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::GetActivityShopSheetInfoReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::GetActivityShopSheetInfoReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = ShopHandler::onGetActivityShopSheetInfoReq(this, v8, rsp_0);
    proto::GetActivityShopSheetInfoRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::GetActivityShopSheetInfoRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::GetActivityShopSheetInfoRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::GetActivityShopSheetInfoRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::GetActivityShopSheetInfoRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::GetActivityShopSheetInfoRsp>::~shared_ptr((std::shared_ptr<proto::GetActivityShopSheetInfoRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::GetActivityShopSheetInfoReq const>::~shared_ptr((std::shared_ptr<const proto::GetActivityShopSheetInfoReq> *const)(v2 + 32));
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

// Line 31: range 0000000015C8DCBC-0000000015C8DFD8
int __cdecl ShopHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#5}::operator()(
        const ShopHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  ShopHandler *this; // r14
  std::__shared_ptr_access<const proto::BatchBuyGoodsReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::BatchBuyGoodsRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::BatchBuyGoodsRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 16) = ShopHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#5}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::BatchBuyGoodsReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::BatchBuyGoodsReq const>(
         (const std::shared_ptr<const proto::BatchBuyGoodsReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/shop_handler.cpp",
      "operator()",
      31);
    common::milog::MiLogStream::operator()(&v15, off_259BE200);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::BatchBuyGoodsReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::BatchBuyGoodsReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::BatchBuyGoodsRsp>();
    rsp_0 = std::__shared_ptr_access<proto::BatchBuyGoodsRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::BatchBuyGoodsRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::BatchBuyGoodsRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::BatchBuyGoodsReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::BatchBuyGoodsReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = ShopHandler::onBatchBuyGoodsReq(this, v8, rsp_0);
    proto::BatchBuyGoodsRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::BatchBuyGoodsRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::BatchBuyGoodsRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::BatchBuyGoodsRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::BatchBuyGoodsRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::BatchBuyGoodsRsp>::~shared_ptr((std::shared_ptr<proto::BatchBuyGoodsRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::BatchBuyGoodsReq const>::~shared_ptr((std::shared_ptr<const proto::BatchBuyGoodsReq> *const)(v2 + 32));
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

// Line 37: range 0000000015C8E510-0000000015C8E583
int32_t __cdecl ShopHandler::onGetShopReq(
        ShopHandler *const this,
        const proto::GetShopReq *req,
        proto::GetShopRsp *rsp_0)
{
  PlayerShopComp *ShopComp; // rcx
  int32_t ret; // [rsp+2Ch] [rbp-4h]

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  ShopComp = Player::getShopComp(this->player_);
  ret = PlayerShopComp::onGetShopReq(ShopComp, req, rsp_0);
  if ( ret )
    return ret;
  else
    return 0;
};

// Line 47: range 0000000015C8E584-0000000015C8E5F7
int32_t __cdecl ShopHandler::onBuyGoodsReq(
        ShopHandler *const this,
        const proto::BuyGoodsReq *req,
        proto::BuyGoodsRsp *rsp_0)
{
  PlayerShopComp *ShopComp; // rcx
  int32_t ret; // [rsp+2Ch] [rbp-4h]

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  ShopComp = Player::getShopComp(this->player_);
  ret = PlayerShopComp::onBuyGoodsReq(ShopComp, req, rsp_0);
  if ( ret )
    return ret;
  else
    return 0;
};

// Line 58: range 0000000015C8E5F8-0000000015C8E660
int32_t __cdecl ShopHandler::onGetShopmallDataReq(
        ShopHandler *const this,
        const proto::GetShopmallDataReq *req,
        proto::GetShopmallDataRsp *rsp_0)
{
  PlayerShopComp *ShopComp; // rdx

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  ShopComp = Player::getShopComp(this->player_);
  PlayerShopComp::getShopmallData(ShopComp, rsp_0);
  return proto::GetShopmallDataRsp::retcode(rsp_0);
};

// Line 64: range 0000000015C8E662-0000000015C8E6D5
int32_t __cdecl ShopHandler::onGetActivityShopSheetInfoReq(
        ShopHandler *const this,
        const proto::GetActivityShopSheetInfoReq *req,
        proto::GetActivityShopSheetInfoRsp *rsp_0)
{
  PlayerShopComp *ShopComp; // rcx
  int32_t ret; // [rsp+2Ch] [rbp-4h]

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  ShopComp = Player::getShopComp(this->player_);
  ret = PlayerShopComp::onGetActivityShopSheetInfoReq(ShopComp, req, rsp_0);
  if ( ret )
    return ret;
  else
    return 0;
};

// Line 74: range 0000000015C8E6D6-0000000015C8E736
int32_t __cdecl ShopHandler::onBatchBuyGoodsReq(
        ShopHandler *const this,
        const proto::BatchBuyGoodsReq *req,
        proto::BatchBuyGoodsRsp *rsp_0)
{
  PlayerShopComp *ShopComp; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  ShopComp = Player::getShopComp(this->player_);
  return PlayerShopComp::onBatchBuyGoodsReq(ShopComp, req, rsp_0);
};
