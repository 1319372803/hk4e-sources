// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/handler/achievement_handler.cpp

// Line 24: range 00000000130E58AA-00000000130E5AD0
int32_t __cdecl AchievementHandler::addPacketFuncToMap(
        AchievementHandler *const this,
        PacketFuncMap *process_packet_func_map)
{
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v3; // rax
  std::function<int(std::shared_ptr<common::minet::Packet>)> *v4; // rax
  std::map<unsigned int,std::function<int(std::shared_ptr<common::minet::Packet>)>>::key_type __x; // [rsp+1Ch] [rbp-44h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self v6; // [rsp+20h] [rbp-40h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Self __y; // [rsp+28h] [rbp-38h] BYREF
  common::milog::MiLogStream v8; // [rsp+30h] [rbp-30h] BYREF

  __x = 2675;
  __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                  process_packet_func_map,
                  &__x)._M_node;
  v6._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
  if ( std::operator!=(&v6, &__y) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/handler/achievement_handler.cpp",
      "addPacketFuncToMap",
      25);
    common::milog::MiLogStream::operator()(&v8, format, 2675LL);
    common::milog::MiLogStream::~MiLogStream(&v8);
    return -1;
  }
  else
  {
    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
    __x = 2675;
    v3 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
           process_packet_func_map,
           &__x);
    std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<AchievementHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}>(
      v3,
      (AchievementHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
    __x = 2652;
    __y._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::find(
                    process_packet_func_map,
                    &__x)._M_node;
    v6._M_node = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::end(process_packet_func_map)._M_node;
    if ( std::operator!=(&v6, &__y) )
    {
      common::milog::MiLogStream::create(
        &v8,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/handler/achievement_handler.cpp",
        "addPacketFuncToMap",
        26);
      common::milog::MiLogStream::operator()(&v8, format, 2652LL);
      common::milog::MiLogStream::~MiLogStream(&v8);
      return -1;
    }
    else
    {
      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >::_Base_ptr)this;
      __x = 2652;
      v4 = std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>::operator[](
             process_packet_func_map,
             &__x);
      std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator=<AchievementHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}>(
        v4,
        (AchievementHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *)&__y);
      return 0;
    }
  }
};

// Line 25: range 00000000130E526E-00000000130E558A
int __cdecl AchievementHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}::operator()(
        const AchievementHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  AchievementHandler *this; // r14
  std::__shared_ptr_access<const proto::TakeAchievementRewardReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::TakeAchievementRewardRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::TakeAchievementRewardRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:25 64 16 10 rsp_ptr:25";
  *(_QWORD *)(v2 + 16) = AchievementHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::TakeAchievementRewardReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::TakeAchievementRewardReq const>(
         (const std::shared_ptr<const proto::TakeAchievementRewardReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/achievement_handler.cpp",
      "operator()",
      25);
    common::milog::MiLogStream::operator()(&v15, off_24F2A720);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::TakeAchievementRewardReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::TakeAchievementRewardReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::TakeAchievementRewardRsp>();
    rsp_0 = std::__shared_ptr_access<proto::TakeAchievementRewardRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::TakeAchievementRewardRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::TakeAchievementRewardRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::TakeAchievementRewardReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::TakeAchievementRewardReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = AchievementHandler::onTakeAchievementRewardReq(this, v8, rsp_0);
    proto::TakeAchievementRewardRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::TakeAchievementRewardRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::TakeAchievementRewardRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::TakeAchievementRewardRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::TakeAchievementRewardRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::TakeAchievementRewardRsp>::~shared_ptr((std::shared_ptr<proto::TakeAchievementRewardRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::TakeAchievementRewardReq const>::~shared_ptr((std::shared_ptr<const proto::TakeAchievementRewardReq> *const)(v2 + 32));
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

// Line 26: range 00000000130E558C-00000000130E58A8
int __cdecl AchievementHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}::operator()(
        const AchievementHandler::addPacketFuncToMap::<lambda(common::minet::PacketPtr)> *const __closure,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  AchievementHandler *this; // r14
  std::__shared_ptr_access<const proto::TakeAchievementGoalRewardReq,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  GameserverService *v9; // r14
  int result; // eax
  uint32_t uid; // [rsp+18h] [rbp-D8h]
  google::protobuf::int32 retcode; // [rsp+1Ch] [rbp-D4h]
  std::__shared_ptr_access<proto::TakeAchievementGoalRewardRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *rsp_0; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::TakeAchievementGoalRewardRsp> p_proto_ptr; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 16 10 req_ptr:26 64 16 10 rsp_ptr:26";
  *(_QWORD *)(v2 + 16) = AchievementHandler::addPacketFuncToMap(std::map<unsigned int,std::function<int ()(std::shared_ptr<common::minet::Packet>)>> &)::{lambda(std::shared_ptr<common::minet::Packet>)#2}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::TakeAchievementGoalRewardReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::TakeAchievementGoalRewardReq const>(
         (const std::shared_ptr<const proto::TakeAchievementGoalRewardReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/handler/achievement_handler.cpp",
      "operator()",
      26);
    common::milog::MiLogStream::operator()(&v15, off_24F2A720);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    std::__shared_ptr_access<proto::TakeAchievementGoalRewardReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::TakeAchievementGoalRewardReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::TakeAchievementGoalRewardRsp>();
    rsp_0 = std::__shared_ptr_access<proto::TakeAchievementGoalRewardRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::TakeAchievementGoalRewardRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::TakeAchievementGoalRewardRsp::set_retcode(rsp_0, -1);
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    uid = common::minet::Packet::getUserId(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = __closure->__this;
    v8 = std::__shared_ptr_access<proto::TakeAchievementGoalRewardReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::TakeAchievementGoalRewardReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    retcode = AchievementHandler::onTakeAchievementGoalRewardReq(this, v8, rsp_0);
    proto::TakeAchievementGoalRewardRsp::set_retcode(rsp_0, retcode);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::TakeAchievementGoalRewardRsp>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::TakeAchievementGoalRewardRsp> *)(v2 + 64));
    GameserverService::sendRspToClient<proto::TakeAchievementGoalRewardRsp>(v9, uid, &p_proto_ptr);
    std::shared_ptr<proto::TakeAchievementGoalRewardRsp>::~shared_ptr(&p_proto_ptr);
    v5 = retcode;
    std::shared_ptr<proto::TakeAchievementGoalRewardRsp>::~shared_ptr((std::shared_ptr<proto::TakeAchievementGoalRewardRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::TakeAchievementGoalRewardReq const>::~shared_ptr((std::shared_ptr<const proto::TakeAchievementGoalRewardReq> *const)(v2 + 32));
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

// Line 32: range 00000000130E5AD2-00000000130E5FB9
int32_t __cdecl AchievementHandler::onTakeAchievementRewardReq(
        AchievementHandler *const this,
        const proto::TakeAchievementRewardReq *req,
        proto::TakeAchievementRewardRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  PlayerAchievementComp *AchievementComp; // rax
  int32_t v8; // r14d
  PlayerItemComp *ItemComp; // rax
  google::protobuf::uint32 *v10; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+20h] [rbp-160h]
  std::vector<ItemParam>::iterator __for_begin_0; // [rsp+28h] [rbp-158h] BYREF
  std::vector<ItemParam>::iterator __for_end_0; // [rsp+30h] [rbp-150h] BYREF
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin; // [rsp+38h] [rbp-148h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range; // [rsp+40h] [rbp-140h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end; // [rsp+48h] [rbp-138h]
  std::vector<ItemParam> *__for_range_0; // [rsp+50h] [rbp-130h]
  std::vector<unsigned int> *__for_range_1; // [rsp+58h] [rbp-128h]
  ItemParam *p; // [rsp+60h] [rbp-120h]
  proto::ItemParam *proto_item; // [rsp+68h] [rbp-118h]
  std::vector<ItemParam> __x; // [rsp+70h] [rbp-110h] BYREF
  char v24[240]; // [rsp+90h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 5 id:34 64 24 9 id_vec:33 128 24 14 display_vec:38";
  *(_QWORD *)(v3 + 16) = AchievementHandler::onTakeAchievementRewardReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234881024;
  v5[536862723] = -218959118;
  v5[536862724] = -218103808;
  v5[536862725] = -202116109;
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 64));
  __for_range = proto::TakeAchievementRewardReq::id_list(req);
  __for_begin = google::protobuf::RepeatedField<unsigned int>::begin(__for_range);
  __for_end = google::protobuf::RepeatedField<unsigned int>::end(__for_range);
  while ( __for_begin != __for_end )
  {
    if ( *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)__for_begin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v3 + 48) = *__for_begin;
    std::vector<unsigned int>::push_back(
      (std::vector<unsigned int> *const)(v3 + 64),
      (const std::vector<unsigned int>::value_type *)(v3 + 48));
    ++__for_begin;
  }
  std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v3 + 128));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  AchievementComp = Player::getAchievementComp(this->player_);
  ret = PlayerAchievementComp::takeAchievementReward(
          AchievementComp,
          (std::vector<unsigned int> *)(v3 + 64),
          (std::vector<ItemParam> *)(v3 + 128));
  if ( ret || std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v3 + 64)) )
  {
    v8 = ret;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    ItemComp = Player::getItemComp(this->player_);
    PlayerItemComp::getMergedItemParamVec(&__x, ItemComp, (const std::vector<ItemParam> *)(v3 + 128));
    std::vector<ItemParam>::operator=((std::vector<ItemParam> *const)(v3 + 128), &__x);
    std::vector<ItemParam>::~vector(&__x);
    __for_range_0 = (std::vector<ItemParam> *)(v3 + 128);
    __for_begin_0._M_current = std::vector<ItemParam>::begin((std::vector<ItemParam> *const)(v3 + 128))._M_current;
    __for_end_0._M_current = std::vector<ItemParam>::end((std::vector<ItemParam> *const)(v3 + 128))._M_current;
    while ( __gnu_cxx::operator!=<ItemParam *,std::vector<ItemParam>>(&__for_begin_0, &__for_end_0) )
    {
      p = __gnu_cxx::__normal_iterator<ItemParam *,std::vector<ItemParam>>::operator*(&__for_begin_0);
      proto_item = proto::TakeAchievementRewardRsp::add_item_list(rsp_0);
      ItemParam::toClient(p, proto_item);
      __gnu_cxx::__normal_iterator<ItemParam *,std::vector<ItemParam>>::operator++(&__for_begin_0);
    }
    __for_range_1 = (std::vector<unsigned int> *)(v3 + 64);
    __for_begin_0._M_current = (ItemParam *)std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 64))._M_current;
    __for_end_0._M_current = (ItemParam *)std::vector<unsigned int>::end(__for_range_1)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_begin_0,
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_end_0) )
    {
      v10 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin_0);
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::TakeAchievementRewardRsp::add_id_list(rsp_0, *v10);
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin_0);
    }
    v8 = 0;
  }
  std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v3 + 128));
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 64));
  result = v8;
  if ( v24 == (char *)v3 )
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

// Line 58: range 00000000130E5FBA-00000000130E64A1
int32_t __cdecl AchievementHandler::onTakeAchievementGoalRewardReq(
        AchievementHandler *const this,
        const proto::TakeAchievementGoalRewardReq *req,
        proto::TakeAchievementGoalRewardRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  PlayerAchievementComp *AchievementComp; // rax
  int32_t v8; // r14d
  PlayerItemComp *ItemComp; // rax
  google::protobuf::uint32 *v10; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+20h] [rbp-160h]
  std::vector<ItemParam>::iterator __for_begin_0; // [rsp+28h] [rbp-158h] BYREF
  std::vector<ItemParam>::iterator __for_end_0; // [rsp+30h] [rbp-150h] BYREF
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin; // [rsp+38h] [rbp-148h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range; // [rsp+40h] [rbp-140h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end; // [rsp+48h] [rbp-138h]
  std::vector<ItemParam> *__for_range_0; // [rsp+50h] [rbp-130h]
  std::vector<unsigned int> *__for_range_1; // [rsp+58h] [rbp-128h]
  ItemParam *p; // [rsp+60h] [rbp-120h]
  proto::ItemParam *proto_item; // [rsp+68h] [rbp-118h]
  std::vector<ItemParam> __x; // [rsp+70h] [rbp-110h] BYREF
  char v24[240]; // [rsp+90h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 5 id:60 64 24 9 id_vec:59 128 24 14 display_vec:64";
  *(_QWORD *)(v3 + 16) = AchievementHandler::onTakeAchievementGoalRewardReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234881024;
  v5[536862723] = -218959118;
  v5[536862724] = -218103808;
  v5[536862725] = -202116109;
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 64));
  __for_range = proto::TakeAchievementGoalRewardReq::id_list(req);
  __for_begin = google::protobuf::RepeatedField<unsigned int>::begin(__for_range);
  __for_end = google::protobuf::RepeatedField<unsigned int>::end(__for_range);
  while ( __for_begin != __for_end )
  {
    if ( *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)__for_begin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v3 + 48) = *__for_begin;
    std::vector<unsigned int>::push_back(
      (std::vector<unsigned int> *const)(v3 + 64),
      (const std::vector<unsigned int>::value_type *)(v3 + 48));
    ++__for_begin;
  }
  std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v3 + 128));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  AchievementComp = Player::getAchievementComp(this->player_);
  ret = PlayerAchievementComp::takeAchievementGoalReward(
          AchievementComp,
          (std::vector<unsigned int> *)(v3 + 64),
          (std::vector<ItemParam> *)(v3 + 128));
  if ( ret || std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v3 + 64)) )
  {
    v8 = ret;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    ItemComp = Player::getItemComp(this->player_);
    PlayerItemComp::getMergedItemParamVec(&__x, ItemComp, (const std::vector<ItemParam> *)(v3 + 128));
    std::vector<ItemParam>::operator=((std::vector<ItemParam> *const)(v3 + 128), &__x);
    std::vector<ItemParam>::~vector(&__x);
    __for_range_0 = (std::vector<ItemParam> *)(v3 + 128);
    __for_begin_0._M_current = std::vector<ItemParam>::begin((std::vector<ItemParam> *const)(v3 + 128))._M_current;
    __for_end_0._M_current = std::vector<ItemParam>::end((std::vector<ItemParam> *const)(v3 + 128))._M_current;
    while ( __gnu_cxx::operator!=<ItemParam *,std::vector<ItemParam>>(&__for_begin_0, &__for_end_0) )
    {
      p = __gnu_cxx::__normal_iterator<ItemParam *,std::vector<ItemParam>>::operator*(&__for_begin_0);
      proto_item = proto::TakeAchievementGoalRewardRsp::add_item_list(rsp_0);
      ItemParam::toClient(p, proto_item);
      __gnu_cxx::__normal_iterator<ItemParam *,std::vector<ItemParam>>::operator++(&__for_begin_0);
    }
    __for_range_1 = (std::vector<unsigned int> *)(v3 + 64);
    __for_begin_0._M_current = (ItemParam *)std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 64))._M_current;
    __for_end_0._M_current = (ItemParam *)std::vector<unsigned int>::end(__for_range_1)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_begin_0,
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_end_0) )
    {
      v10 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin_0);
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::TakeAchievementGoalRewardRsp::add_id_list(rsp_0, *v10);
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin_0);
    }
    v8 = 0;
  }
  std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v3 + 128));
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 64));
  result = v8;
  if ( v24 == (char *)v3 )
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
