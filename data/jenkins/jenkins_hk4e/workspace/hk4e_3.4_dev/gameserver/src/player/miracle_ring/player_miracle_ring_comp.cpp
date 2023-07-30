// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/miracle_ring/player_miracle_ring_comp.cpp

// Line 34: range 0000000016C9DBE2-0000000016C9DD37
int32_t __cdecl PlayerMiracleRingComp::fromBin(
        PlayerMiracleRingComp *const this,
        const proto::PlayerDataBin *player_data_bin)
{
  __int64 take_reward_time; // rdx
  char v3; // al
  google::protobuf::uint32 v4; // ebx
  std::unordered_map<unsigned int,unsigned int>::key_type *p_k; // rsi
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v6; // rax
  google::protobuf::uint32 *v7; // rdx
  char v8; // cl
  std::unordered_map<unsigned int,unsigned int>::key_type __k; // [rsp+14h] [rbp-3Ch] BYREF
  google::protobuf::RepeatedPtrField<proto::MiracleRingDropParam>::const_iterator __for_begin; // [rsp+18h] [rbp-38h] BYREF
  google::protobuf::RepeatedPtrField<proto::MiracleRingDropParam>::const_iterator __for_end; // [rsp+20h] [rbp-30h] BYREF
  const proto::PlayerMiracleRingCompBin *comp_bin; // [rsp+28h] [rbp-28h]
  const google::protobuf::RepeatedPtrField<proto::MiracleRingDropParam> *__for_range; // [rsp+30h] [rbp-20h]
  const proto::MiracleRingDropParam *drop_param_bin; // [rsp+38h] [rbp-18h]

  comp_bin = proto::PlayerDataBin::miracle_ring_bin(player_data_bin);
  take_reward_time = proto::PlayerMiracleRingCompBin::last_take_reward_time(comp_bin);
  v3 = *(_BYTE *)(((unsigned __int64)&this->last_take_reward_time_ >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(player_data_bin) = v3 != 0;
    __asan_report_store4(&this->last_take_reward_time_, player_data_bin, take_reward_time);
  }
  this->last_take_reward_time_ = take_reward_time;
  __for_range = proto::PlayerMiracleRingCompBin::drop_param_list(comp_bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::MiracleRingDropParam>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::MiracleRingDropParam>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::MiracleRingDropParam const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    drop_param_bin = google::protobuf::internal::RepeatedPtrIterator<proto::MiracleRingDropParam const>::operator*(&__for_begin);
    v4 = proto::MiracleRingDropParam::count(drop_param_bin);
    __k = proto::MiracleRingDropParam::tag(drop_param_bin);
    p_k = &__k;
    v6 = std::unordered_map<unsigned int,unsigned int>::operator[](&this->drop_tag_to_count_map_, &__k);
    v7 = v6;
    v8 = *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000);
    if ( v8 != 0 && (char)(((unsigned __int8)v6 & 7) + 3) >= v8 )
    {
      LOBYTE(p_k) = v8 != 0;
      __asan_report_store4(v6, p_k, v6);
    }
    *v7 = v4;
    google::protobuf::internal::RepeatedPtrIterator<proto::MiracleRingDropParam const>::operator++(&__for_begin);
  }
  return 0;
};

// Line 46: range 0000000016C9DD38-0000000016C9DED4
int32_t __cdecl PlayerMiracleRingComp::toBin(PlayerMiracleRingComp *const this, proto::PlayerDataBin *player_data_bin)
{
  std::unordered_map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+10h] [rbp-40h] BYREF
  std::unordered_map<unsigned int,unsigned int>::iterator __for_end; // [rsp+18h] [rbp-38h] BYREF
  proto::PlayerMiracleRingCompBin *comp_bin; // [rsp+20h] [rbp-30h]
  std::unordered_map<unsigned int,unsigned int> *__for_range; // [rsp+28h] [rbp-28h]
  const std::pair<unsigned int const,unsigned int> *v7; // [rsp+30h] [rbp-20h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *tag; // [rsp+38h] [rbp-18h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *count; // [rsp+40h] [rbp-10h]
  proto::MiracleRingDropParam *drop_param_bin; // [rsp+48h] [rbp-8h]

  comp_bin = proto::PlayerDataBin::mutable_miracle_ring_bin(player_data_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_take_reward_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_take_reward_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_take_reward_time_);
  }
  proto::PlayerMiracleRingCompBin::set_last_take_reward_time(comp_bin, this->last_take_reward_time_);
  __for_range = &this->drop_tag_to_count_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,unsigned int>::begin(&this->drop_tag_to_count_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,unsigned int>::end(&this->drop_tag_to_count_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(&__for_begin, &__for_end) )
  {
    v7 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*(&__for_begin);
    tag = std::get<0ul,unsigned int const,unsigned int>(v7);
    count = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v7);
    drop_param_bin = proto::PlayerMiracleRingCompBin::add_drop_param_list(comp_bin);
    if ( *(_BYTE *)(((unsigned __int64)tag >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)tag & 7) + 3) >= *(_BYTE *)(((unsigned __int64)tag >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(tag);
    }
    proto::MiracleRingDropParam::set_tag(drop_param_bin, *tag);
    if ( *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(count);
    }
    proto::MiracleRingDropParam::set_count(drop_param_bin, *count);
    std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++(&__for_begin);
  }
  return 0;
};

// Line 60: range 0000000016C9DED6-0000000016C9DEF4
int32_t __cdecl PlayerMiracleRingComp::init(PlayerMiracleRingComp *const this)
{
  PlayerMiracleRingComp::initEventObservers(this);
  return 0;
};

// Line 68: range 0000000016C9DEF6-0000000016C9DF9E
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl PlayerMiracleRingComp::onLogin(PlayerMiracleRingComp *const this, bool is_new_player)
{
  __int64 v2; // rdx

  if ( *(char *)(((unsigned __int64)&this->is_gadget_created_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_gadget_created_, is_new_player, &this->is_gadget_created_);
  this->is_gadget_created_ = 0;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->gadget_entity_id_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gadget_entity_id_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store4(&this->gadget_entity_id_, (((_BYTE)this + 100) & 7u) + 3, v2);
  this->gadget_entity_id_ = 0;
  Vector3::reset(&this->create_pos_);
  return 0;
};

// Line 78: range 0000000016C9DFA0-0000000016C9E00E
int32_t __cdecl PlayerMiracleRingComp::notifyAllData(PlayerMiracleRingComp *const this)
{
  PlayerBasicComp *BasicComp; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Player::getBasicComp(this->player_);
  if ( PlayerBasicComp::isStateOpen(BasicComp, 0x57Fu) )
    PlayerMiracleRingComp::notifyMiracleRingData(this);
  return 0;
};

// Line 92: range 0000000016C9E010-0000000016C9E43B
void __cdecl PlayerMiracleRingComp::initEventObservers(PlayerMiracleRingComp *const this)
{
  unsigned __int64 p_M_start; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  common::milog::MiLogStream *v4; // [rsp+20h] [rbp-F0h]
  unsigned int val; // [rsp+34h] [rbp-DCh] BYREF
  PlayerEventComp *event_comp; // [rsp+38h] [rbp-D8h]
  PlayerEventComp v7; // [rsp+40h] [rbp-D0h] BYREF

  p_M_start = (unsigned __int64)&v7.event_center_.context_.pending_que_.c._M_impl._M_start;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      p_M_start = v2;
  }
  *(_QWORD *)p_M_start = 1102416563LL;
  *(_QWORD *)(p_M_start + 8) = "2 32 16 11 this_ptr:95 64 16 12 this_wtr:101";
  *(_QWORD *)(p_M_start + 16) = PlayerMiracleRingComp::initEventObservers;
  v3 = (_DWORD *)(p_M_start >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)&v7.event_center_,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
    "initEventObservers",
    93);
  v4 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
         (common::milog::MiLogStream *const)&v7.event_center_,
         (const char (*)[18])"initObservers....");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v7.event_center_);
  toThisPtr<PlayerMiracleRingComp>((PlayerMiracleRingComp *)(p_M_start + 32));
  if ( std::operator==<PlayerMiracleRingComp>(0LL, (const std::shared_ptr<PlayerMiracleRingComp> *)(p_M_start + 32)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v7.event_center_,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
      "initEventObservers",
      98);
    common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
      (common::milog::MiLogStream *const)&v7.event_center_,
      (const char (*)[53])"dynamic_pointer_cast to PlayerMiracleRingComp failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v7.event_center_);
  }
  else
  {
    std::weak_ptr<PlayerMiracleRingComp>::weak_ptr<PlayerMiracleRingComp,void>(
      (std::weak_ptr<PlayerMiracleRingComp> *const)(p_M_start + 64),
      (const std::shared_ptr<PlayerMiracleRingComp> *)(p_M_start + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    event_comp = Player::getEventComp(this->player_);
    std::weak_ptr<PlayerMiracleRingComp>::weak_ptr(
      (std::weak_ptr<PlayerMiracleRingComp> *const)&v7._M_weak_this._M_refcount,
      (const std::weak_ptr<PlayerMiracleRingComp> *)(p_M_start + 64));
    PlayerEventComp::registerObserver<PlayerMiracleRingComp,OpenStateChangeEvent>(
      &v7,
      (std::weak_ptr<PlayerMiracleRingComp> *)event_comp,
      (void (*)(PlayerMiracleRingComp *, const OpenStateChangeEvent *))&v7._M_weak_this._M_refcount);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v7);
    std::weak_ptr<PlayerMiracleRingComp>::~weak_ptr((std::weak_ptr<PlayerMiracleRingComp> *const)&v7._M_weak_this._M_refcount);
    std::weak_ptr<PlayerMiracleRingComp>::weak_ptr(
      (std::weak_ptr<PlayerMiracleRingComp> *const)&v7,
      (const std::weak_ptr<PlayerMiracleRingComp> *)(p_M_start + 64));
    PlayerEventComp::registerObserver<PlayerMiracleRingComp,EnterCombatEvent>(
      (PlayerEventComp *const)&v7._M_weak_this._M_refcount,
      (std::weak_ptr<PlayerMiracleRingComp> *)event_comp,
      (void (*)(PlayerMiracleRingComp *, const EnterCombatEvent *))&v7);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v7._M_weak_this._M_refcount);
    std::weak_ptr<PlayerMiracleRingComp>::~weak_ptr((std::weak_ptr<PlayerMiracleRingComp> *const)&v7);
    std::weak_ptr<PlayerMiracleRingComp>::~weak_ptr((std::weak_ptr<PlayerMiracleRingComp> *const)(p_M_start + 64));
  }
  std::shared_ptr<PlayerMiracleRingComp>::~shared_ptr((std::shared_ptr<PlayerMiracleRingComp> *const)(p_M_start + 32));
  if ( &v7.event_center_.context_.pending_que_.c._M_impl._M_start == (std::_Deque_base<std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> >>::iterator *)p_M_start )
  {
    *(_QWORD *)((p_M_start >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((p_M_start >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)p_M_start = 1172321806LL;
    *(_QWORD *)((p_M_start >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((p_M_start >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 111: range 0000000016C9E43C-0000000016C9ECF4
int32_t __cdecl PlayerMiracleRingComp::onMiracleRingDeliverItemReq(
        PlayerMiracleRingComp *const this,
        const proto::MiracleRingDeliverItemReq *req,
        proto::MiracleRingDeliverItemRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  int32_t v9; // r14d
  common::milog::MiLogStream *v10; // rax
  PlayerBasicComp *BasicComp; // rax
  const google::protobuf::RepeatedField<long unsigned int> *v12; // rax
  PlayerItemComp *ItemComp; // rax
  PlayerMiracleRingComp *MiracleRingComp; // rax
  common::milog::MiLogStream *v15; // rax
  Gadget *v16; // rax
  PlayerWatcherComp *WatcherComp; // rax
  int32_t result; // eax
  std::string v19; // [rsp+0h] [rbp-240h]
  const proto::MiracleRingDeliverItemReq *const reqa; // [rsp+10h] [rbp-230h]
  PlayerMiracleRingComp *thisa; // [rsp+18h] [rbp-228h]
  proto::InterOpType op_type; // [rsp+28h] [rbp-218h]
  uint32_t gadget_id; // [rsp+2Ch] [rbp-214h]
  google::protobuf::RepeatedPtrField<proto::ItemParam>::const_iterator __for_begin; // [rsp+30h] [rbp-210h] BYREF
  google::protobuf::RepeatedPtrField<proto::ItemParam>::const_iterator __for_end; // [rsp+38h] [rbp-208h] BYREF
  const google::protobuf::RepeatedPtrField<proto::ItemParam> *__for_range; // [rsp+40h] [rbp-200h]
  const proto::ItemParam *proto_item_param; // [rsp+48h] [rbp-1F8h]
  common::milog::MiLogStream v28; // [rsp+50h] [rbp-1F0h] BYREF
  char v29[464]; // [rsp+70h] [rbp-1D0h] BYREF

  *(&v19._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v19._anon_0._M_allocated_capacity = (std::string::size_type)req;
  v19._M_string_length = (std::string::size_type)rsp_0;
  v3 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(416LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "9 48 1 10 holder:132 64 4 13 entity_id:112 80 4 7 ret:125 96 16 14 gadget_ptr:118 128 16 9 param"
                        ":139 160 24 24 food_weapon_guid_vec:134 224 24 18 item_param_vec:136 288 24 23 food_item_param_v"
                        "ec:143 352 24 16 equip_id_vec:145";
  *(_QWORD *)(v3 + 16) = PlayerMiracleRingComp::onMiracleRingDeliverItemReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -234556924;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = -234881024;
  v5[536862726] = -218959118;
  v5[536862727] = -234881024;
  v5[536862728] = -218959118;
  v5[536862729] = -234881024;
  v5[536862730] = -218959118;
  v5[536862731] = -218103808;
  v5[536862732] = -202116109;
  *(_DWORD *)(v3 + 64) = proto::MiracleRingDeliverItemReq::gadget_entity_id(req);
  op_type = proto::MiracleRingDeliverItemReq::op_type(req);
  gadget_id = proto::MiracleRingDeliverItemReq::gadget_id(req);
  proto::MiracleRingDeliverItemRsp::set_gadget_entity_id(
    (proto::MiracleRingDeliverItemRsp *const)v19._M_string_length,
    *(_DWORD *)(v3 + 64));
  proto::MiracleRingDeliverItemRsp::set_op_type((proto::MiracleRingDeliverItemRsp *const)v19._M_string_length, op_type);
  proto::MiracleRingDeliverItemRsp::set_gadget_id(
    (proto::MiracleRingDeliverItemRsp *const)v19._M_string_length,
    gadget_id);
  PlayerMiracleRingComp::findMiracleRing((PlayerMiracleRingComp *const)(v3 + 96));
  if ( std::operator==<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v3 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
      "onMiracleRingDeliverItemReq",
      121);
    v6 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v28,
           (const char (*)[42])"findEntity MiracleRing failed, entity_id:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->gadget_entity_id_);
    v8 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v7, (const char (*)[7])", uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_DWORD *)(v3 + 80) = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 80));
    common::milog::MiLogStream::~MiLogStream(&v28);
    v9 = 504;
  }
  else
  {
    *(_DWORD *)(v3 + 80) = PlayerMiracleRingComp::checkBeforeDeliverItems(this, *(_DWORD *)(v3 + 64));
    if ( *(_DWORD *)(v3 + 80) )
    {
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
        "onMiracleRingDeliverItemReq",
        128);
      v10 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
              &v28,
              (const char (*)[43])"checkBeforeDeliverItems failed, entity_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 64));
      common::milog::MiLogStream::~MiLogStream(&v28);
      v9 = *(_DWORD *)(v3 + 80);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      BasicComp = Player::getBasicComp(this->player_);
      PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v28, BasicComp);
      StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48), 0xC29u, v19);
      std::string::~string(&v28);
      std::vector<unsigned long>::vector((std::vector<long unsigned int> *const)(v3 + 160));
      v12 = proto::MiracleRingDeliverItemReq::food_weapon_guid_list(reqa);
      common::tools::MiscUtils::repeatedToVector<unsigned long,unsigned long>(
        v12,
        (std::vector<long unsigned int> *)(v3 + 160));
      std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v3 + 224));
      __for_range = proto::MiracleRingDeliverItemReq::item_param_list(reqa);
      __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::ItemParam>::begin(__for_range).it_;
      __for_end.it_ = google::protobuf::RepeatedPtrField<proto::ItemParam>::end(__for_range).it_;
      while ( google::protobuf::internal::RepeatedPtrIterator<proto::ItemParam const>::operator!=(
                &__for_begin,
                &__for_end) )
      {
        proto_item_param = google::protobuf::internal::RepeatedPtrIterator<proto::ItemParam const>::operator*(&__for_begin);
        *(_QWORD *)(v3 + 128) = 0LL;
        *(_QWORD *)(v3 + 136) = 0LL;
        *(_DWORD *)(v3 + 128) = proto::ItemParam::item_id(proto_item_param);
        *(_DWORD *)(v3 + 132) = proto::ItemParam::count(proto_item_param);
        std::vector<ItemParam>::emplace_back<ItemParam&>(
          (std::vector<ItemParam> *const)(v3 + 224),
          (ItemParam *)(v3 + 128),
          (ItemParam *)(v3 + 128));
        google::protobuf::internal::RepeatedPtrIterator<proto::ItemParam const>::operator++(&__for_begin);
      }
      if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      ItemComp = Player::getItemComp(thisa->player_);
      PlayerItemComp::getMergedItemParamVec(
        (std::vector<ItemParam> *)(v3 + 288),
        ItemComp,
        (const std::vector<ItemParam> *)(v3 + 224));
      std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 352));
      if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      MiracleRingComp = Player::getMiracleRingComp(thisa->player_);
      *(_DWORD *)(v3 + 80) = PlayerMiracleRingComp::internalDeliverItems(
                               MiracleRingComp,
                               (const std::vector<long unsigned int> *)(v3 + 160),
                               (const std::vector<ItemParam> *)(v3 + 288),
                               (std::vector<unsigned int> *)(v3 + 352));
      if ( *(_DWORD *)(v3 + 80) )
      {
        common::milog::MiLogStream::create(
          &v28,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
          "onMiracleRingDeliverItemReq",
          150);
        v15 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                &v28,
                (const char (*)[31])"checkDeliverItems failed, ret:");
        common::milog::MiLogStream::operator<<<int,(int *)0>(v15, (const int *)(v3 + 80));
        common::milog::MiLogStream::~MiLogStream(&v28);
        v9 = *(_DWORD *)(v3 + 80);
      }
      else
      {
        PlayerMiracleRingComp::logMiracleRingDeliver(
          thisa,
          (const std::vector<long unsigned int> *)(v3 + 160),
          (const std::vector<ItemParam> *)(v3 + 288),
          (const std::vector<unsigned int> *)(v3 + 352));
        PlayerMiracleRingComp::notifyMiracleRingData(thisa);
        v16 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        Gadget::setState(v16, 0xC9u, 0, 1);
        if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        WatcherComp = Player::getWatcherComp(thisa->player_);
        PlayerWatcherComp::triggerMiracleRingDeliverItem(WatcherComp, 1u);
        v9 = 0;
      }
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 352));
      std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v3 + 288));
      std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v3 + 224));
      std::vector<unsigned long>::~vector((std::vector<long unsigned int> *const)(v3 + 160));
      StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48));
    }
  }
  std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v3 + 96));
  result = v9;
  if ( v29 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8030) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8030) = -168430091;
  }
  return result;
};

// Line 171: range 0000000016C9ECF6-0000000016C9F6A9
__int64 __fastcall PlayerMiracleRingComp::checkBeforeDeliverItems(
        PlayerMiracleRingComp *const this,
        uint32_t entity_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r14
  unsigned int v8; // r14d
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  PlayerBasicComp *BasicComp; // rax
  common::milog::MiLogStream *v13; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  common::milog::MiLogStream *v15; // r14
  std::__shared_ptr_access<data::ConfigWidgetToyMiracleRing,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  uint32_t ItemComp; // eax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r14
  common::milog::MiLogStream *v21; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  common::milog::MiLogStream *v23; // r14
  __int64 result; // rax
  unsigned int val; // [rsp+1Ch] [rbp-104h] BYREF
  std::shared_ptr<Config> v26; // [rsp+20h] [rbp-100h] BYREF
  common::milog::MiLogStream v27; // [rsp+30h] [rbp-F0h] BYREF
  char v28[208]; // [rsp+50h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 11 item_id:198 48 4 13 entity_id:170 64 16 14 gadget_ptr:173 96 16 27 miracle_ring_config"
                        "_ptr:191 128 16 16 material_ptr:199";
  *(_QWORD *)(v2 + 16) = PlayerMiracleRingComp::checkBeforeDeliverItems;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -202178560;
  *(_DWORD *)(v2 + 48) = entity_id;
  PlayerMiracleRingComp::findMiracleRing((PlayerMiracleRingComp *const)(v2 + 64));
  if ( std::operator==<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
      "checkBeforeDeliverItems",
      176);
    v5 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v27,
           (const char (*)[42])"findEntity MiracleRing failed, entity_id:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->gadget_entity_id_);
    v7 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v6, (const char (*)[7])", uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v27);
    v8 = 504;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_entity_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gadget_entity_id_ >> 3)
                                                           + 0x7FFF8000) )
    {
      __asan_report_load4(&this->gadget_entity_id_);
    }
    if ( this->gadget_entity_id_ == *(_DWORD *)(v2 + 48) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      BasicComp = Player::getBasicComp(this->player_);
      if ( !PlayerBasicComp::isStateOpen(BasicComp, 0x57Fu) )
      {
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
          "checkBeforeDeliverItems",
          188);
        v13 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                &v27,
                (const char (*)[40])"OPEN_STATE_MIRACLE_RING is locked. uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
        common::milog::MiLogStream::~MiLogStream(&v27);
        v8 = 141;
      }
      else
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v26);
        v14 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26);
        JsonConfigMgr::getWidgetNewConfig(&v14->design_config.json_config_mgr);
        WidgetJsonNewConfig::findWidgetConfig<data::ConfigWidgetToyMiracleRing>((const WidgetJsonNewConfig *const)(v2 + 96));
        std::shared_ptr<Config>::~shared_ptr(&v26);
        if ( std::operator==<data::ConfigWidgetToyMiracleRing>(
               0LL,
               (const std::shared_ptr<data::ConfigWidgetToyMiracleRing> *)(v2 + 96)) )
        {
          common::milog::MiLogStream::create(
            &v27,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
            "checkBeforeDeliverItems",
            194);
          v15 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                  &v27,
                  (const char (*)[55])"findWidgetConfig<ConfigWidgetMiracleRing> failed, uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
          common::milog::MiLogStream::~MiLogStream(&v27);
          v8 = -1;
        }
        else
        {
          v16 = std::__shared_ptr_access<data::ConfigWidgetToyMiracleRing,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetToyMiracleRing,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          if ( *(_BYTE *)(((unsigned __int64)&v16->material_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&v16->material_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&v16->material_id);
          }
          *(_DWORD *)(v2 + 32) = v16->material_id;
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          ItemComp = (unsigned int)Player::getItemComp(this->player_);
          PlayerItemComp::findMaterial((PlayerItemComp *const)(v2 + 128), ItemComp);
          if ( std::operator==<Material>((const std::shared_ptr<Material> *)(v2 + 128), 0LL) )
          {
            common::milog::MiLogStream::create(
              &v27,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
              "checkBeforeDeliverItems",
              202);
            v18 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                    &v27,
                    (const char (*)[30])"findMaterial failed, item_id:");
            v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v18,
                    (const unsigned int *)(v2 + 32));
            v20 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v19, (const char (*)[7])", uid:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            val = Player::getUid(this->player_);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &val);
            common::milog::MiLogStream::~MiLogStream(&v27);
          }
          if ( PlayerMiracleRingComp::isInMiracleRingCd(this) )
          {
            common::milog::MiLogStream::create(
              &v27,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
              "checkBeforeDeliverItems",
              207);
            v21 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                    &v27,
                    (const char (*)[26])"miraclering is in cd, cd:");
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v26);
            v22 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26);
            val = ConstValueExcelConfigMgr::getMiracleRingCd(&v22->design_config.txt_config_mgr.const_value_config_mgr);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &val);
            std::shared_ptr<Config>::~shared_ptr(&v26);
            common::milog::MiLogStream::~MiLogStream(&v27);
            v8 = 9202;
          }
          else if ( !std::unordered_map<unsigned int,unsigned int>::empty(&this->drop_tag_to_count_map_) )
          {
            common::milog::MiLogStream::create(
              &v27,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
              "checkBeforeDeliverItems",
              213);
            v23 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
                    &v27,
                    (const char (*)[61])"miraclering reward has not been taken, can not deliver, uid:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            val = Player::getUid(this->player_);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &val);
            common::milog::MiLogStream::~MiLogStream(&v27);
            v8 = 9203;
          }
          else
          {
            v8 = 0;
          }
          std::shared_ptr<Material>::~shared_ptr((std::shared_ptr<Material> *const)(v2 + 128));
        }
        std::shared_ptr<data::ConfigWidgetToyMiracleRing>::~shared_ptr((std::shared_ptr<data::ConfigWidgetToyMiracleRing> *const)(v2 + 96));
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
        "checkBeforeDeliverItems",
        181);
      v9 = common::milog::MiLogStream::operator<<<char [74],(char *[74])0>(
             &v27,
             (const char (*)[74])"interact gadget entity_id not equal gadget_entity_id, interact_entity_id:");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
      v11 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
              v10,
              (const char (*)[26])", miracle_ring_entity_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &this->gadget_entity_id_);
      common::milog::MiLogStream::~MiLogStream(&v27);
      v8 = 9208;
    }
  }
  std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v2 + 64));
  result = v8;
  if ( v28 == (char *)v2 )
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

// Line 220: range 0000000016C9F6AA-0000000016CA1388
int32_t __cdecl PlayerMiracleRingComp::internalDeliverItems(
        PlayerMiracleRingComp *const this,
        const std::vector<long unsigned int> *food_equip_guid_vec,
        const std::vector<ItemParam> *item_param_vec,
        std::vector<unsigned int> *equip_id_vec)
{
  int32_t v4; // r14d
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  common::milog::MiLogStream *v9; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  __gnu_cxx::__normal_iterator<long unsigned int const*,std::vector<long unsigned int> >::reference v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  PlayerItemComp *ItemComp; // rax
  common::milog::MiLogStream *v16; // r14
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  int v19; // r15d
  std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  common::milog::MiLogStream *v21; // r14
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  unsigned __int64 v25; // rdx
  common::milog::MiLogStream *v26; // r14
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  int v29; // r15d
  std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  common::milog::MiLogStream *v31; // r14
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v35; // rax
  std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rax
  common::milog::MiLogStream *v38; // r14
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // r14
  std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  std::unordered_map<unsigned int,unsigned int> *p_item_to_value_map; // r15
  std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v45; // rax
  const std::unordered_map<unsigned int,unsigned int>::mapped_type *v46; // rax
  _DWORD *v47; // rdx
  const unsigned int *v48; // rax
  _DWORD *v49; // rdx
  std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v50; // rax
  char v51; // r15
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v52; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v53; // rax
  common::milog::MiLogStream *v54; // r14
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // r14
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v59; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v60; // rax
  const std::unordered_map<unsigned int,unsigned int>::mapped_type *v61; // rax
  _DWORD *v62; // rdx
  const unsigned int *v63; // rax
  _DWORD *v64; // rdx
  common::milog::MiLogStream *v65; // rax
  common::milog::MiLogStream *v66; // rax
  common::milog::MiLogStream *v67; // rax
  common::milog::MiLogStream *v68; // rax
  common::milog::MiLogStream *v69; // r14
  common::milog::MiLogStream *v70; // r14
  common::milog::MiLogStream *v71; // rax
  common::milog::MiLogStream *v72; // rax
  common::milog::MiLogStream *v73; // rax
  common::milog::MiLogStream *v74; // rax
  common::milog::MiLogStream *v75; // rax
  common::milog::MiLogStream *v76; // r14
  PlayerItemComp *v77; // rdx
  common::milog::MiLogStream *v78; // r14
  PlayerItemComp *v79; // rdx
  PlayerItemComp *v80; // r14
  common::milog::MiLogStream *v81; // r14
  PlayerItemComp *v82; // r14
  common::milog::MiLogStream *v83; // r14
  int32_t result; // eax
  bool v85; // [rsp+17h] [rbp-239h]
  char value; // [rsp+18h] [rbp-238h]
  const ItemParam *valueb; // [rsp+18h] [rbp-238h]
  const ItemParam *valuec; // [rsp+18h] [rbp-238h]
  bool valuea; // [rsp+18h] [rbp-238h]
  int32_t ret; // [rsp+44h] [rbp-20Ch]
  int32_t reta; // [rsp+44h] [rbp-20Ch]
  std::vector<long unsigned int>::const_iterator __for_begin; // [rsp+48h] [rbp-208h] BYREF
  const std::vector<long unsigned int> *__for_range; // [rsp+50h] [rbp-200h]
  const std::vector<ItemParam> *__for_range_0; // [rsp+58h] [rbp-1F8h]
  const ItemParam *item_param; // [rsp+60h] [rbp-1F0h]
  std::vector<long unsigned int>::const_iterator __for_end; // [rsp+68h] [rbp-1E8h] BYREF
  std::shared_ptr<Config> v99; // [rsp+70h] [rbp-1E0h] BYREF
  common::milog::MiLogStream v100; // [rsp+80h] [rbp-1D0h] BYREF
  common::milog::MiLogStream v101; // [rsp+A0h] [rbp-1B0h] BYREF
  char v102[400]; // [rsp+C0h] [rbp-190h] BYREF

  v5 = (unsigned __int64)v102;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_3(352LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "10 32 4 18 max_item_value:227 48 4 25 deliver_miracle_value:228 64 4 26 standard_deliver_value:2"
                        "29 80 4 14 item_value:270 96 4 14 item_value:291 112 8 14 equip_guid:231 144 16 13 equip_ptr:239"
                        " 176 16 14 weapon_ptr:252 208 24 17 action_reason:339 272 48 23 food_equip_guid_set:226";
  *(_QWORD *)(v5 + 16) = PlayerMiracleRingComp::internalDeliverItems;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556924;
  v7[536862722] = -234556924;
  v7[536862723] = 61956;
  v7[536862723] = -234881024;
  v7[536862724] = 62194;
  v7[536862725] = 62194;
  v7[536862726] = 62194;
  v7[536862727] = -218959360;
  v7[536862728] = 62194;
  v7[536862730] = -202116109;
  if ( !std::vector<unsigned long>::empty(food_equip_guid_vec) || !std::vector<ItemParam>::empty(item_param_vec) )
  {
    std::set<unsigned long>::set((std::set<long unsigned int> *const)(v5 + 272));
    *(_DWORD *)(v5 + 32) = 0;
    *(_DWORD *)(v5 + 48) = 0;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v5 + 176));
    v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 176));
    *(_DWORD *)(v5 + 64) = ConstValueExcelConfigMgr::getMiracleRingDeliverValue(&v10->design_config.txt_config_mgr.const_value_config_mgr);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v5 + 176));
    __for_range = food_equip_guid_vec;
    __for_begin._M_current = std::vector<unsigned long>::begin(food_equip_guid_vec)._M_current;
    __for_end._M_current = std::vector<unsigned long>::end(food_equip_guid_vec)._M_current;
    while ( __gnu_cxx::operator!=<unsigned long const*,std::vector<unsigned long>>(&__for_begin, &__for_end) )
    {
      v11 = __gnu_cxx::__normal_iterator<unsigned long const*,std::vector<unsigned long>>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      *(_QWORD *)(v5 + 112) = *v11;
      if ( std::set<unsigned long>::count(
             (const std::set<long unsigned int> *const)(v5 + 272),
             (const std::set<long unsigned int>::key_type *)(v5 + 112)) )
      {
        common::milog::MiLogStream::create(
          &v101,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
          "internalDeliverItems",
          235);
        v12 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                &v101,
                (const char (*)[27])"duplicate food_equip, uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        *(_DWORD *)(v5 + 96) = Player::getUid(this->player_);
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v12,
                (const unsigned int *)(v5 + 96));
        v14 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v13, (const char (*)[13])" equip_guid:");
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
          v14,
          (const unsigned __int64 *)(v5 + 112));
        common::milog::MiLogStream::~MiLogStream(&v101);
        v4 = -1;
        goto LABEL_125;
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      ItemComp = Player::getItemComp(this->player_);
      PlayerItemComp::findItemInPack<Equip>(
        (PlayerItemComp *const)(v5 + 144),
        (uint64_t)ItemComp,
        *(_QWORD *)(v5 + 112));
      if ( std::operator==<Equip>((const std::shared_ptr<Equip> *)(v5 + 144), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v101,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
          "internalDeliverItems",
          242);
        v16 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                &v101,
                (const char (*)[28])"findItem equip failed, uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        *(_DWORD *)(v5 + 96) = Player::getUid(this->player_);
        v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v16,
                (const unsigned int *)(v5 + 96));
        v18 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v17, (const char (*)[13])" equip_guid:");
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
          v18,
          (const unsigned __int64 *)(v5 + 112));
        common::milog::MiLogStream::~MiLogStream(&v101);
        v4 = -1;
        v19 = 0;
      }
      else
      {
        v20 = std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 144));
        if ( Equip::getIsLocked(v20) )
        {
          common::milog::MiLogStream::create(
            &v101,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
            "internalDeliverItems",
            247);
          v21 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                  &v101,
                  (const char (*)[35])"food_equip can not be locked, uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          *(_DWORD *)(v5 + 96) = Player::getUid(this->player_);
          v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v21,
                  (const unsigned int *)(v5 + 96));
          v23 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v22, (const char (*)[13])" equip_guid:");
          common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
            v23,
            (const unsigned __int64 *)(v5 + 112));
          common::milog::MiLogStream::~MiLogStream(&v101);
          v4 = 691;
          v19 = 0;
        }
        else
        {
          v24 = std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 144));
          if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v25 = (unsigned __int64)(v24->_vptr_Item + 9);
          if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v25)(v24) != 4 )
            goto LABEL_46;
          std::dynamic_pointer_cast<Weapon,Equip>((const std::shared_ptr<Equip> *)(v5 + 176));
          if ( std::operator==<Weapon>(0LL, (const std::shared_ptr<Weapon> *)(v5 + 176)) )
          {
            common::milog::MiLogStream::create(
              &v101,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
              "internalDeliverItems",
              255);
            v26 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                    &v101,
                    (const char (*)[41])"dynamic_pointer_cast weapon failed, uid:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            *(_DWORD *)(v5 + 96) = Player::getUid(this->player_);
            v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v26,
                    (const unsigned int *)(v5 + 96));
            v28 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v27,
                    (const char (*)[14])", equip_guid:");
            common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v28,
              (const unsigned __int64 *)(v5 + 112));
            common::milog::MiLogStream::~MiLogStream(&v101);
            v4 = -1;
            v29 = 0;
          }
          else
          {
            v30 = std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 176));
            if ( !Weapon::isCanFood(v30) )
            {
              common::milog::MiLogStream::create(
                &v101,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
                "internalDeliverItems",
                260);
              v31 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                      &v101,
                      (const char (*)[38])"food_weapon can not food others, uid:");
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              *(_DWORD *)(v5 + 96) = Player::getUid(this->player_);
              v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v31,
                      (const unsigned int *)(v5 + 96));
              v33 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                      v32,
                      (const char (*)[19])" food_weapon_guid:");
              common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                v33,
                (const unsigned __int64 *)(v5 + 112));
              common::milog::MiLogStream::~MiLogStream(&v101);
              v4 = -1;
              v29 = 0;
            }
            else
            {
              v29 = 1;
            }
          }
          std::shared_ptr<Weapon>::~shared_ptr((std::shared_ptr<Weapon> *const)(v5 + 176));
          if ( v29 == 1 )
          {
LABEL_46:
            value = 0;
            v34 = std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 144));
            *(_DWORD *)(v5 + 80) = Item::getItemId(v34);
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v99);
            v35 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v99);
            v85 = 1;
            if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::vector<data::MiracleTag>> const,unsigned int>(
                   &v35->design_config.txt_config_mgr.miracle_ring_config_mgr.item_to_tag_map,
                   (const unsigned int *)(v5 + 80)) )
            {
              v36 = std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 144));
              *(_DWORD *)(v5 + 96) = Item::getItemId(v36);
              ServiceBox::findService<GameserverService>();
              GameserverService::getConfig((GameserverService *const)(v5 + 176));
              value = 1;
              v37 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 176));
              if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,unsigned int> const,unsigned int>(
                     &v37->design_config.txt_config_mgr.miracle_ring_config_mgr.item_to_value_map,
                     (const unsigned int *)(v5 + 96)) )
              {
                v85 = 0;
              }
            }
            if ( value )
              std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v5 + 176));
            std::shared_ptr<Config>::~shared_ptr(&v99);
            if ( v85 )
            {
              common::milog::MiLogStream::create(
                &v101,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
                "internalDeliverItems",
                267);
              v38 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                      &v101,
                      (const char (*)[37])"item is not allowed to deliver, uid:");
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              *(_DWORD *)(v5 + 80) = Player::getUid(this->player_);
              v39 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v38,
                      (const unsigned int *)(v5 + 80));
              v40 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                      v39,
                      (const char (*)[11])", item_id:");
              v41 = std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 144));
              *(_DWORD *)(v5 + 96) = Item::getItemId(v41);
              v42 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v40,
                      (const unsigned int *)(v5 + 96));
              v43 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                      v42,
                      (const char (*)[14])", equip_guid:");
              common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                v43,
                (const unsigned __int64 *)(v5 + 112));
              common::milog::MiLogStream::~MiLogStream(&v101);
              v4 = -1;
              v19 = 0;
            }
            else
            {
              ServiceBox::findService<GameserverService>();
              GameserverService::getConfig((GameserverService *const)(v5 + 176));
              p_item_to_value_map = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 176))->design_config.txt_config_mgr.miracle_ring_config_mgr.item_to_value_map;
              v45 = std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 144));
              *(_DWORD *)(v5 + 96) = Item::getItemId(v45);
              v46 = std::unordered_map<unsigned int,unsigned int>::at(
                      p_item_to_value_map,
                      (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v5 + 96));
              v47 = v46;
              if ( *(_BYTE *)(((unsigned __int64)v46 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v46 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v46 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v46);
              }
              *(_DWORD *)(v5 + 80) = *v47;
              std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v5 + 176));
              v48 = std::max<unsigned int>((const unsigned int *)(v5 + 80), (const unsigned int *)(v5 + 32));
              v49 = v48;
              if ( *(_BYTE *)(((unsigned __int64)v48 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v48 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v48 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v48);
              }
              *(_DWORD *)(v5 + 32) = *v49;
              std::set<unsigned long>::insert(
                (std::set<long unsigned int> *const)(v5 + 272),
                (const std::set<long unsigned int>::value_type *)(v5 + 112));
              *(_DWORD *)(v5 + 48) += *(_DWORD *)(v5 + 80);
              v50 = std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 144));
              *(_DWORD *)(v5 + 96) = Item::getItemId(v50);
              std::vector<unsigned int>::push_back(equip_id_vec, (std::vector<unsigned int>::value_type *)(v5 + 96));
              v19 = 1;
            }
          }
          else
          {
            v19 = 0;
          }
        }
      }
      std::shared_ptr<Equip>::~shared_ptr((std::shared_ptr<Equip> *const)(v5 + 144));
      if ( v19 != 1 )
        goto LABEL_125;
      __gnu_cxx::__normal_iterator<unsigned long const*,std::vector<unsigned long>>::operator++(&__for_begin);
    }
    __for_range_0 = item_param_vec;
    __for_begin._M_current = (const unsigned __int64 *)std::vector<ItemParam>::begin(item_param_vec)._M_current;
    __for_end._M_current = (const unsigned __int64 *)std::vector<ItemParam>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<ItemParam const*,std::vector<ItemParam>>(
              (const __gnu_cxx::__normal_iterator<const ItemParam*,std::vector<ItemParam> > *)&__for_begin,
              (const __gnu_cxx::__normal_iterator<const ItemParam*,std::vector<ItemParam> > *)&__for_end) )
    {
      item_param = __gnu_cxx::__normal_iterator<ItemParam const*,std::vector<ItemParam>>::operator*((const __gnu_cxx::__normal_iterator<const ItemParam*,std::vector<ItemParam> > *const)&__for_begin);
      v51 = 0;
      valueb = item_param;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v99);
      v52 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v99);
      valuea = 1;
      if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::vector<data::MiracleTag>> const,unsigned int>(
             &v52->design_config.txt_config_mgr.miracle_ring_config_mgr.item_to_tag_map,
             &valueb->item_id) )
      {
        valuec = item_param;
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)(v5 + 176));
        v51 = 1;
        v53 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 176));
        if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,unsigned int> const,unsigned int>(
               &v53->design_config.txt_config_mgr.miracle_ring_config_mgr.item_to_value_map,
               &valuec->item_id) )
        {
          valuea = 0;
        }
      }
      if ( v51 )
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v5 + 176));
      std::shared_ptr<Config>::~shared_ptr(&v99);
      if ( valuea )
      {
        common::milog::MiLogStream::create(
          &v100,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
          "internalDeliverItems",
          282);
        v54 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                &v100,
                (const char (*)[37])"item is not allowed to deliver, uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        *(_DWORD *)(v5 + 96) = Player::getUid(this->player_);
        v55 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v54,
                (const unsigned int *)(v5 + 96));
        v56 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v55, (const char (*)[11])", item_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v56, &item_param->item_id);
        common::milog::MiLogStream::~MiLogStream(&v100);
        v4 = -1;
        goto LABEL_125;
      }
      if ( *(_BYTE *)(((unsigned __int64)&item_param->count >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)item_param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_param->count >> 3)
                                                                 + 0x7FFF8000) )
      {
        __asan_report_load4(&item_param->count);
      }
      if ( !item_param->count )
      {
        common::milog::MiLogStream::create(
          &v101,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
          "internalDeliverItems",
          288);
        v57 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                &v101,
                (const char (*)[27])"deliver item count 0, uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        *(_DWORD *)(v5 + 96) = Player::getUid(this->player_);
        v58 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v57,
                (const unsigned int *)(v5 + 96));
        v59 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v58, (const char (*)[11])", item_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v59, &item_param->item_id);
        common::milog::MiLogStream::~MiLogStream(&v101);
        v4 = -1;
        goto LABEL_125;
      }
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v5 + 176));
      v60 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 176));
      v61 = std::unordered_map<unsigned int,unsigned int>::at(
              &v60->design_config.txt_config_mgr.miracle_ring_config_mgr.item_to_value_map,
              &item_param->item_id);
      v62 = v61;
      if ( *(_BYTE *)(((unsigned __int64)v61 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v61 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v61 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v61);
      }
      *(_DWORD *)(v5 + 96) = *v62;
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v5 + 176));
      v63 = std::max<unsigned int>((const unsigned int *)(v5 + 96), (const unsigned int *)(v5 + 32));
      v64 = v63;
      if ( *(_BYTE *)(((unsigned __int64)v63 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v63 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v63 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v63);
      }
      *(_DWORD *)(v5 + 32) = *v64;
      if ( *(_BYTE *)(((unsigned __int64)&item_param->count >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)item_param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_param->count >> 3)
                                                                 + 0x7FFF8000) )
      {
        __asan_report_load4(&item_param->count);
      }
      *(_DWORD *)(v5 + 48) += SAFE_MULTIPLY<unsigned int,unsigned int>(*(_DWORD *)(v5 + 96), item_param->count);
      __gnu_cxx::__normal_iterator<ItemParam const*,std::vector<ItemParam>>::operator++((__gnu_cxx::__normal_iterator<const ItemParam*,std::vector<ItemParam> > *const)&__for_begin);
    }
    if ( *(_DWORD *)(v5 + 48) >= *(_DWORD *)(v5 + 64) )
    {
      if ( SAFE_ADD<unsigned int,unsigned int>(*(_DWORD *)(v5 + 64), *(_DWORD *)(v5 + 32)) > *(_DWORD *)(v5 + 48) )
      {
        if ( std::vector<unsigned long>::empty(food_equip_guid_vec) )
          goto LABEL_131;
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v77 = Player::getItemComp(this->player_);
        ret = PlayerItemComp::checkSubItemBatch(v77, food_equip_guid_vec);
        if ( ret )
        {
          common::milog::MiLogStream::create(
            &v101,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
            "internalDeliverItems",
            318);
          v78 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                  &v101,
                  (const char (*)[31])"checkSubItemBatch failed, uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
        }
        else
        {
LABEL_131:
          if ( std::vector<ItemParam>::empty(item_param_vec) )
            goto LABEL_110;
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v79 = Player::getItemComp(this->player_);
          ret = PlayerItemComp::checkSubItemBatch(v79, item_param_vec);
          if ( !ret )
          {
LABEL_110:
            reta = PlayerMiracleRingComp::calcDeliverTagCount(this, food_equip_guid_vec, item_param_vec);
            if ( reta )
            {
              common::milog::MiLogStream::create(
                &v101,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
                "internalDeliverItems",
                335);
              common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                &v101,
                (const char (*)[27])"calcDeliverTagCount failed");
              common::milog::MiLogStream::~MiLogStream(&v101);
              v4 = reta;
            }
            else
            {
              ActionReason::ActionReason(
                (ActionReason *const)(v5 + 208),
                ACTION_MIRACLE_RING_REWARD,
                ITEM_LIMIT_MIRACLE_RING_REWARD);
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              v80 = Player::getItemComp(this->player_);
              SubItemReason::SubItemReason((SubItemReason *const)&__for_end, (const ActionReason *)(v5 + 208));
              if ( PlayerItemComp::subItemBatch(v80, item_param_vec, (const SubItemReason *)&__for_end) )
              {
                common::milog::MiLogStream::create(
                  &v101,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
                  "internalDeliverItems",
                  343);
                v81 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                        &v101,
                        (const char (*)[26])"subItemBatch failed, uid:");
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                *(_DWORD *)(v5 + 96) = Player::getUid(this->player_);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v81,
                  (const unsigned int *)(v5 + 96));
                common::milog::MiLogStream::~MiLogStream(&v101);
              }
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              v82 = Player::getItemComp(this->player_);
              SubItemReason::SubItemReason((SubItemReason *const)&__for_end, (const ActionReason *)(v5 + 208));
              if ( PlayerItemComp::subItemBatch(v82, food_equip_guid_vec, (const SubItemReason *)&__for_end) )
              {
                common::milog::MiLogStream::create(
                  &v101,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
                  "internalDeliverItems",
                  348);
                v83 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                        &v101,
                        (const char (*)[26])"subItemBatch failed, uid:");
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                *(_DWORD *)(v5 + 96) = Player::getUid(this->player_);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v83,
                  (const unsigned int *)(v5 + 96));
                common::milog::MiLogStream::~MiLogStream(&v101);
              }
              v4 = 0;
            }
            goto LABEL_125;
          }
          common::milog::MiLogStream::create(
            &v101,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
            "internalDeliverItems",
            327);
          v78 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                  &v101,
                  (const char (*)[31])"checkSubItemBatch failed, uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
        }
        *(_DWORD *)(v5 + 96) = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v78, (const unsigned int *)(v5 + 96));
        common::milog::MiLogStream::~MiLogStream(&v101);
        v4 = ret;
        goto LABEL_125;
      }
      common::milog::MiLogStream::create(
        &v101,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
        "internalDeliverItems",
        306);
      v70 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
              &v101,
              (const char (*)[66])"miraclering deliver item miracle_value exceed, max_deliver_value:");
      *(_DWORD *)(v5 + 80) = SAFE_ADD<unsigned int,unsigned int>(*(_DWORD *)(v5 + 64), *(_DWORD *)(v5 + 32));
      v71 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v70, (const unsigned int *)(v5 + 80));
      v72 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
              v71,
              (const char (*)[25])", deliver_miracle_value:");
      v73 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v72, (const unsigned int *)(v5 + 48));
      v74 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              v73,
              (const char (*)[18])", max_item_value:");
      v75 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v74, (const unsigned int *)(v5 + 32));
      v76 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v75, (const char (*)[7])", uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      *(_DWORD *)(v5 + 96) = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v76, (const unsigned int *)(v5 + 96));
      common::milog::MiLogStream::~MiLogStream(&v101);
      v4 = 9205;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v101,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
        "internalDeliverItems",
        299);
      v65 = common::milog::MiLogStream::operator<<<char [88],(char *[88])0>(
              &v101,
              (const char (*)[88])"deliver_miracle_value less than miracle_ring_deliver_value, miracle_ring_deliver_value:");
      v66 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v65, (const unsigned int *)(v5 + 64));
      v67 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              v66,
              (const char (*)[33])", current deliver_miracle_value:");
      v68 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v67, (const unsigned int *)(v5 + 48));
      v69 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v68, (const char (*)[7])", uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      *(_DWORD *)(v5 + 96) = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v69, (const unsigned int *)(v5 + 96));
      common::milog::MiLogStream::~MiLogStream(&v101);
      v4 = 9201;
    }
LABEL_125:
    std::set<unsigned long>::~set((std::set<long unsigned int> *const)(v5 + 272));
    goto LABEL_126;
  }
  common::milog::MiLogStream::create(
    &v101,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
    "internalDeliverItems",
    223);
  v9 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
         &v101,
         (const char (*)[59])"food_equip_guid_vec and item_param_vec are all empty, uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *(_DWORD *)(v5 + 96) = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v5 + 96));
  common::milog::MiLogStream::~MiLogStream(&v101);
  v4 = -1;
LABEL_126:
  result = v4;
  if ( v102 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8028) = -168430091;
  }
  return result;
};

// Line 356: range 0000000016CA138A-0000000016CA18FD
int32_t __cdecl PlayerMiracleRingComp::onUseMiracleRingReq(
        PlayerMiracleRingComp *const this,
        const proto::UseMiracleRingReq *req,
        proto::UseMiracleRingRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  google::protobuf::uint32 v6; // edx
  common::milog::MiLogStream *v7; // rax
  int32_t result; // eax
  google::protobuf::uint32 v9; // eax
  PlayerMiracleRingComp *MiracleRingComp; // r14
  const proto::Vector *v11; // rax
  const proto::Vector *v12; // rax
  PlayerMiracleRingComp *v13; // rax
  common::milog::MiLogStream *v14; // rbx
  common::milog::MiLogStream *v15; // rbx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rcx
  unsigned int val; // [rsp+24h] [rbp-ACh] BYREF
  Vector3 pos; // [rsp+28h] [rbp-A8h] BYREF
  Vector3 rot; // [rsp+34h] [rbp-9Ch] BYREF
  common::milog::MiLogStream v22; // [rsp+40h] [rbp-90h] BYREF
  char v23[112]; // [rsp+60h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 7 ret:358";
  *(_QWORD *)(v3 + 16) = PlayerMiracleRingComp::onUseMiracleRingReq;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  v6 = proto::UseMiracleRingReq::miracle_ring_op_type(req);
  proto::UseMiracleRingRsp::set_miracle_ring_op_type(rsp_0, v6);
  *(_DWORD *)(v3 + 32) = PlayerMiracleRingComp::checkBeforeUse(this);
  if ( *(_DWORD *)(v3 + 32) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
      "onUseMiracleRingReq",
      361);
    v7 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           &v22,
           (const char (*)[28])"checkBeforeUse failed, ret:");
    common::milog::MiLogStream::operator<<<int,(int *)0>(v7, (const int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v22);
    result = *(_DWORD *)(v3 + 32);
    goto LABEL_20;
  }
  v9 = proto::UseMiracleRingReq::miracle_ring_op_type(req);
  if ( v9 == 1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    MiracleRingComp = Player::getMiracleRingComp(this->player_);
    v11 = proto::UseMiracleRingReq::rot(req);
    Vector3::Vector3(&rot, v11);
    v12 = proto::UseMiracleRingReq::pos(req);
    Vector3::Vector3(&pos, v12);
    *(_DWORD *)(v3 + 32) = PlayerMiracleRingComp::placeMiracleRing(MiracleRingComp, &pos, &rot);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
        "onUseMiracleRingReq",
        371);
      common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
        &v22,
        (const char (*)[24])"placeMiracleRing failed");
      common::milog::MiLogStream::~MiLogStream(&v22);
      result = *(_DWORD *)(v3 + 32);
      goto LABEL_20;
    }
  }
  else
  {
    if ( v9 != 2 )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
        "onUseMiracleRingReq",
        388);
      v14 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
              &v22,
              (const char (*)[34])"unsupported miracle_ring_op_type:");
      val = proto::UseMiracleRingReq::miracle_ring_op_type(req);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &val);
      common::milog::MiLogStream::~MiLogStream(&v22);
      result = -1;
      goto LABEL_20;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v13 = Player::getMiracleRingComp(this->player_);
    *(_DWORD *)(v3 + 32) = PlayerMiracleRingComp::retractMiracleRing(v13);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
        "onUseMiracleRingReq",
        381);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v22,
        (const char (*)[26])"retractMiracleRing failed");
      common::milog::MiLogStream::~MiLogStream(&v22);
      result = *(_DWORD *)(v3 + 32);
      goto LABEL_20;
    }
  }
  PlayerMiracleRingComp::notifyMiracleRingCoolDown(this);
  common::milog::MiLogStream::create(
    &v22,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
    "onUseMiracleRingReq",
    393);
  v15 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
          &v22,
          (const char (*)[30])"UseMiracleRing succ, op_type:");
  val = proto::UseMiracleRingReq::miracle_ring_op_type(req);
  v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
  v17 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v16, (const char (*)[21])", is_gadget_created:");
  if ( *(char *)(((unsigned __int64)&this->is_gadget_created_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_gadget_created_);
  common::milog::MiLogStream::operator<<(v17, this->is_gadget_created_);
  common::milog::MiLogStream::~MiLogStream(&v22);
  result = 0;
LABEL_20:
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

// Line 398: range 0000000016CA18FE-0000000016CA25EB
int32_t __cdecl PlayerMiracleRingComp::checkBeforeUse(PlayerMiracleRingComp *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  PlayerBasicComp *BasicComp; // rax
  common::milog::MiLogStream *v5; // rbx
  int32_t v6; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<data::ConfigWidgetToyMiracleRing,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  uint32_t ItemComp; // eax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  common::milog::MiLogStream *v14; // rcx
  common::milog::MiLogStream *v15; // rcx
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  common::milog::MiLogStream *v17; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  const WidgetJsonNewConfig *WidgetNewConfig; // r14
  std::__shared_ptr_access<data::ConfigWidgetToyMiracleRing,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  common::milog::MiLogStream *v21; // r14
  std::__shared_ptr_access<data::ConfigWidgetToyMiracleRing,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+14h] [rbp-14Ch] BYREF
  const data::ConfigWidgetCdGroup *cd_group_config_ptr; // [rsp+18h] [rbp-148h]
  std::shared_ptr<Config> v32; // [rsp+20h] [rbp-140h] BYREF
  common::milog::MiLogStream v33; // [rsp+30h] [rbp-130h] BYREF
  char v34[272]; // [rsp+50h] [rbp-110h] BYREF

  v1 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(224LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "7 48 4 11 item_id:412 64 4 7 now:438 80 4 17 cool_down_sec:439 96 16 27 miracle_ring_config_ptr:"
                        "405 128 16 16 material_ptr:413 160 16 14 avatar_ptr:419 192 16 13 scene_ptr:425";
  *(_QWORD *)(v1 + 16) = PlayerMiracleRingComp::checkBeforeUse;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -234556924;
  v3[536862723] = -219021312;
  v3[536862724] = -219021312;
  v3[536862725] = -219021312;
  v3[536862726] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Player::getBasicComp(this->player_);
  if ( !PlayerBasicComp::isStateOpen(BasicComp, 0x57Fu) )
  {
    common::milog::MiLogStream::create(
      &v33,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
      "checkBeforeUse",
      402);
    v5 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
           &v33,
           (const char (*)[40])"OPEN_STATE_MIRACLE_RING is locked. uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v33);
    v6 = 141;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v32);
    v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v32);
    JsonConfigMgr::getWidgetNewConfig(&v7->design_config.json_config_mgr);
    WidgetJsonNewConfig::findWidgetConfig<data::ConfigWidgetToyMiracleRing>((const WidgetJsonNewConfig *const)(v1 + 96));
    std::shared_ptr<Config>::~shared_ptr(&v32);
    if ( std::operator==<data::ConfigWidgetToyMiracleRing>(
           0LL,
           (const std::shared_ptr<data::ConfigWidgetToyMiracleRing> *)(v1 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
        "checkBeforeUse",
        408);
      v8 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
             &v33,
             (const char (*)[55])"findWidgetConfig<ConfigWidgetMiracleRing> failed, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
      common::milog::MiLogStream::~MiLogStream(&v33);
      v6 = -1;
    }
    else
    {
      v9 = std::__shared_ptr_access<data::ConfigWidgetToyMiracleRing,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetToyMiracleRing,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&v9->material_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v9->material_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&v9->material_id);
      }
      *(_DWORD *)(v1 + 48) = v9->material_id;
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      ItemComp = (unsigned int)Player::getItemComp(this->player_);
      PlayerItemComp::findMaterial((PlayerItemComp *const)(v1 + 128), ItemComp);
      if ( std::operator==<Material>((const std::shared_ptr<Material> *)(v1 + 128), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v33,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
          "checkBeforeUse",
          416);
        v11 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                &v33,
                (const char (*)[30])"findMaterial failed, item_id:");
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v11,
                (const unsigned int *)(v1 + 48));
        v13 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v12, (const char (*)[7])", uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
        common::milog::MiLogStream::~MiLogStream(&v33);
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::getAvatarComp(this->player_);
      PlayerAvatarComp::getCurAvatar((const PlayerAvatarComp *const)(v1 + 160));
      if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v1 + 160)) )
      {
        common::milog::MiLogStream::create(
          &v33,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
          "checkBeforeUse",
          422);
        v14 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                &v33,
                (const char (*)[28])"avatar_ptr is null, player:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        operator<<(v14, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v33);
        v6 = -1;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Player::getSceneComp(this->player_);
        PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v1 + 192));
        if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v1 + 192)) )
        {
          common::milog::MiLogStream::create(
            &v33,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
            "checkBeforeUse",
            428);
          v15 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                  &v33,
                  (const char (*)[23])"getScene fail, player:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          operator<<(v15, this->player_);
          common::milog::MiLogStream::~MiLogStream(&v33);
          v6 = -1;
        }
        else
        {
          v16 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 192));
          if ( Scene::getSceneType(v16) == SCENE_DUNGEON )
          {
            common::milog::MiLogStream::create(
              &v33,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
              "checkBeforeUse",
              433);
            v17 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                    &v33,
                    (const char (*)[55])off_25F23440);
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            val = Player::getUid(this->player_);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &val);
            common::milog::MiLogStream::~MiLogStream(&v33);
            v6 = -1;
          }
          else
          {
            *(_DWORD *)(v1 + 64) = common::tools::TimeUtils::getNow();
            *(_DWORD *)(v1 + 80) = 0;
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v32);
            v18 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v32);
            WidgetNewConfig = JsonConfigMgr::getWidgetNewConfig(&v18->design_config.json_config_mgr);
            v20 = std::__shared_ptr_access<data::ConfigWidgetToyMiracleRing,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetToyMiracleRing,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
            if ( *(_BYTE *)(((unsigned __int64)&v20->cd_group >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&v20->cd_group >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&v20->cd_group);
            }
            cd_group_config_ptr = WidgetJsonNewConfig::queryCoolDownGroupConfig(WidgetNewConfig, v20->cd_group);
            std::shared_ptr<Config>::~shared_ptr(&v32);
            if ( cd_group_config_ptr )
            {
              if ( *(_BYTE *)(((unsigned __int64)&cd_group_config_ptr->cool_down_success >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)cd_group_config_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cd_group_config_ptr->cool_down_success >> 3)
                                                                                  + 0x7FFF8000) )
              {
                __asan_report_load4(&cd_group_config_ptr->cool_down_success);
              }
              *(_DWORD *)(v1 + 80) = (int)cd_group_config_ptr->cool_down_success;
            }
            else
            {
              common::milog::MiLogStream::create(
                &v33,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
                "checkBeforeUse",
                443);
              v21 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                      &v33,
                      (const char (*)[46])"queryCoolDownGroupConfig failed, cd_group_id:");
              v22 = std::__shared_ptr_access<data::ConfigWidgetToyMiracleRing,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetToyMiracleRing,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &v22->cd_group);
              common::milog::MiLogStream::~MiLogStream(&v33);
            }
            if ( *(_BYTE *)(((unsigned __int64)&this->last_use_time_ >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->last_use_time_ >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&this->last_use_time_);
            }
            if ( this->last_use_time_ && *(_DWORD *)(v1 + 80) + this->last_use_time_ > *(_DWORD *)(v1 + 64) )
            {
              common::milog::MiLogStream::create(
                &v33,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
                "checkBeforeUse",
                451);
              v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      &v33,
                      (const char (*)[16])"last_use_time_:");
              v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &this->last_use_time_);
              v25 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v24, (const char (*)[5])" CD:");
              v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v25,
                      (const unsigned int *)(v1 + 80));
              v27 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v26, (const char (*)[6])" now:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v27,
                (const unsigned int *)(v1 + 64));
              common::milog::MiLogStream::~MiLogStream(&v33);
              v6 = 608;
            }
            else if ( PlayerMiracleRingComp::isInMiracleRingCd(this) )
            {
              common::milog::MiLogStream::create(
                &v33,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
                "checkBeforeUse",
                457);
              v28 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                      &v33,
                      (const char (*)[28])"miracle ring is in cd, uid:");
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              val = Player::getUid(this->player_);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, &val);
              common::milog::MiLogStream::~MiLogStream(&v33);
              v6 = 9202;
            }
            else
            {
              v6 = 0;
            }
          }
        }
        std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 192));
      }
      std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v1 + 160));
      std::shared_ptr<Material>::~shared_ptr((std::shared_ptr<Material> *const)(v1 + 128));
    }
    std::shared_ptr<data::ConfigWidgetToyMiracleRing>::~shared_ptr((std::shared_ptr<data::ConfigWidgetToyMiracleRing> *const)(v1 + 96));
  }
  result = v6;
  if ( v34 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 465: range 0000000016CA25EC-0000000016CA2B6B
int32_t __cdecl PlayerMiracleRingComp::placeMiracleRing(
        PlayerMiracleRingComp *const this,
        const Vector3 *pos,
        const Vector3 *rot)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rcx
  int32_t v7; // r14d
  Scene *v8; // rdx
  __int64 Now; // rsi
  PlayerWatcherComp *WatcherComp; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+2Ch] [rbp-F4h]
  int32_t reta; // [rsp+2Ch] [rbp-F4h]
  common::milog::MiLogStream v15; // [rsp+30h] [rbp-F0h] BYREF
  char v16[208]; // [rsp+50h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 16 13 scene_ptr:466 80 40 15 gadget_data:480";
  *(_QWORD *)(v3 + 16) = PlayerMiracleRingComp::placeMiracleRing;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = 62194;
  v5[536862723] = -218103808;
  v5[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v3 + 48));
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
      "placeMiracleRing",
      469);
    v6 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
           &v15,
           (const char (*)[23])"getScene fail, player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v6, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v7 = -1;
  }
  else
  {
    ret = PlayerMiracleRingComp::checkPlaceMiracleRing(this, pos);
    if ( ret )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
        "placeMiracleRing",
        475);
      common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
        &v15,
        (const char (*)[29])"checkPlaceMiracleRing failed");
      common::milog::MiLogStream::~MiLogStream(&v15);
      v7 = ret;
    }
    else
    {
      MiracleRingGadgetData::MiracleRingGadgetData((MiracleRingGadgetData *const)(v3 + 80));
      if ( ((unsigned __int8)pos & 7) >= *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&pos->z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)pos + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&pos->z + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(pos, 12LL);
      }
      *(Vector3 *)(v3 + 80) = *pos;
      if ( ((unsigned __int8)rot & 7) >= *(_BYTE *)(((unsigned __int64)rot >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)rot >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&rot->z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)rot + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&rot->z + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(rot, 12LL);
      }
      *(_QWORD *)(v3 + 92) = *(_QWORD *)&rot->x;
      *(float *)(v3 + 100) = rot->z;
      v8 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
      reta = PlayerMiracleRingComp::tryCreateMiracleRingGadgetAndEnterScene(
               this,
               (MiracleRingGadgetData *)(v3 + 80),
               v8);
      if ( reta )
      {
        common::milog::MiLogStream::create(
          &v15,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
          "placeMiracleRing",
          487);
        common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
          &v15,
          (const char (*)[47])"tryCreateMiracleRingGadgetAndEnterScene failed");
        common::milog::MiLogStream::~MiLogStream(&v15);
        v7 = reta;
      }
      else
      {
        Now = (unsigned int)common::tools::TimeUtils::getNow();
        if ( *(_BYTE *)(((unsigned __int64)&this->last_use_time_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->last_use_time_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&this->last_use_time_, Now, &this->last_use_time_);
        }
        this->last_use_time_ = Now;
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        WatcherComp = Player::getWatcherComp(this->player_);
        PlayerWatcherComp::triggerPlaceMiracleRing(WatcherComp);
        v7 = 0;
      }
      MiracleRingGadgetData::~MiracleRingGadgetData((MiracleRingGadgetData *const)(v3 + 80));
    }
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 48));
  result = v7;
  if ( v16 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
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

// Line 498: range 0000000016CA2B6C-0000000016CA357A
int32_t __cdecl PlayerMiracleRingComp::checkPlaceMiracleRing(PlayerMiracleRingComp *const this, const Vector3 *pos)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // rcx
  common::milog::MiLogStream *v9; // r14
  common::milog::MiLogStream *v10; // rcx
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  const Vector3 *Position; // rdx
  common::milog::MiLogStream *v13; // rdx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  const Vector3 *v17; // rax
  common::milog::MiLogStream *v18; // rax
  Scene *v19; // r15
  std::__shared_ptr_access<data::ConfigWidgetToyMiracleRing,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rdx
  float *p_combat_destroy_distance; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  Vector3 *n; // rax
  const std::shared_ptr<Player> *v24; // rax
  Player *v25; // rax
  PlayerAvatarComp *AvatarComp; // rax
  const std::string *v27; // rax
  int v29; // r15d
  int32_t result; // eax
  float sight_range; // [rsp+Ch] [rbp-164h]
  unsigned int val; // [rsp+24h] [rbp-14Ch] BYREF
  std::vector<std::shared_ptr<Player>>::iterator __for_begin; // [rsp+28h] [rbp-148h] BYREF
  std::vector<std::shared_ptr<Player>>::iterator __for_end; // [rsp+30h] [rbp-140h] BYREF
  std::vector<std::shared_ptr<Player>> *__for_range; // [rsp+38h] [rbp-138h]
  common::milog::MiLogStream v36; // [rsp+40h] [rbp-130h] BYREF
  char v37[272]; // [rsp+60h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 16 27 miracle_ring_config_ptr:499 64 16 13 scene_ptr:505 96 16 14 avatar_ptr:519 128 16 14 "
                        "player_ptr:533 160 24 23 surround_player_vec:532";
  *(_QWORD *)(v3 + 16) = PlayerMiracleRingComp::checkPlaceMiracleRing;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = -218103808;
  v5[536862726] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 128));
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
  JsonConfigMgr::getWidgetNewConfig(&v6->design_config.json_config_mgr);
  WidgetJsonNewConfig::findWidgetConfig<data::ConfigWidgetToyMiracleRing>((const WidgetJsonNewConfig *const)(v3 + 32));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 128));
  if ( !std::operator==<data::ConfigWidgetToyMiracleRing>(
          0LL,
          (const std::shared_ptr<data::ConfigWidgetToyMiracleRing> *)(v3 + 32)) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v3 + 64));
    if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v36,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
        "checkPlaceMiracleRing",
        508);
      v8 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
             &v36,
             (const char (*)[23])"getScene fail, player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      operator<<(v8, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v36);
      v2 = -1;
      goto LABEL_48;
    }
    if ( *(char *)(((unsigned __int64)&this->is_gadget_created_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->is_gadget_created_);
    if ( this->is_gadget_created_ )
    {
      common::milog::MiLogStream::create(
        &v36,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
        "checkPlaceMiracleRing",
        515);
      v9 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
             &v36,
             (const char (*)[41])"duplicated placeMiracleRing, error, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
      common::milog::MiLogStream::~MiLogStream(&v36);
      v2 = 9206;
      goto LABEL_48;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getAvatarComp(this->player_);
    PlayerAvatarComp::getCurAvatar((const PlayerAvatarComp *const)(v3 + 96));
    if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v3 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v36,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
        "checkPlaceMiracleRing",
        522);
      v10 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
              &v36,
              (const char (*)[28])"avatar_ptr is null, player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
    }
    else
    {
      v11 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      Position = Entity::getPosition((const Entity *const)v11);
      if ( getDistance(pos, Position) <= 20.0 )
      {
        v19 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        v20 = std::__shared_ptr_access<data::ConfigWidgetToyMiracleRing,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetToyMiracleRing,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        p_combat_destroy_distance = &v20->combat_destroy_distance;
        if ( *(_BYTE *)(((unsigned __int64)p_combat_destroy_distance >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_combat_destroy_distance & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_combat_destroy_distance >> 3)
                                                                                      + 0x7FFF8000) )
        {
          __asan_report_load4(p_combat_destroy_distance);
        }
        sight_range = v20->combat_destroy_distance;
        v22 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        n = (Vector3 *)Entity::getPosition((const Entity *const)v22);
        if ( ((unsigned __int8)n & 7) >= *(_BYTE *)(((unsigned __int64)n >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)n >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&n->z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)n + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&n->z + 3) >> 3) + 0x7FFF8000) )
        {
          n = (Vector3 *)__asan_report_load_n(n, 12LL);
        }
        Scene::getSurroundPlayersInRange((std::vector<std::shared_ptr<Player>> *)(v3 + 160), v19, *n, sight_range);
        __for_range = (std::vector<std::shared_ptr<Player>> *)(v3 + 160);
        __for_begin._M_current = std::vector<std::shared_ptr<Player>>::begin((std::vector<std::shared_ptr<Player>> *const)(v3 + 160))._M_current;
        __for_end._M_current = std::vector<std::shared_ptr<Player>>::end((std::vector<std::shared_ptr<Player>> *const)(v3 + 160))._M_current;
        while ( __gnu_cxx::operator!=<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>(
                  &__for_begin,
                  &__for_end) )
        {
          v24 = __gnu_cxx::__normal_iterator<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>::operator*(&__for_begin);
          std::shared_ptr<Player>::shared_ptr((std::shared_ptr<Player> *const)(v3 + 128), v24);
          if ( std::operator!=<Player>(0LL, (const std::shared_ptr<Player> *)(v3 + 128))
            && (v25 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128)),
                AvatarComp = Player::getAvatarComp(v25),
                v27 = PlayerAvatarComp::getCombatTransaction[abi:cxx11](AvatarComp),
                (unsigned __int8)std::string::empty(v27) ^ 1) )
          {
            v2 = 688;
            v29 = 0;
          }
          else
          {
            v29 = 1;
          }
          std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 128));
          if ( v29 != 1 )
            goto LABEL_46;
          __gnu_cxx::__normal_iterator<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>::operator++(&__for_begin);
        }
        v2 = 0;
LABEL_46:
        std::vector<std::shared_ptr<Player>>::~vector((std::vector<std::shared_ptr<Player>> *const)(v3 + 160));
        goto LABEL_47;
      }
      common::milog::MiLogStream::create(
        &v36,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
        "checkPlaceMiracleRing",
        528);
      v13 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              &v36,
              (const char (*)[27])"distance is too long, pos:");
      v14 = operator<<(v13, pos);
      v15 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v14, (const char (*)[13])" avatar_pos:");
      v16 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      v17 = Entity::getPosition((const Entity *const)v16);
      v18 = operator<<(v15, v17);
      v10 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v18, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
    }
    operator<<(v10, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v36);
    v2 = -1;
LABEL_47:
    std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 96));
LABEL_48:
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 64));
    goto LABEL_49;
  }
  common::milog::MiLogStream::create(
    &v36,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
    "checkPlaceMiracleRing",
    502);
  v7 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
         &v36,
         (const char (*)[55])"findWidgetConfig<ConfigWidgetMiracleRing> failed, uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
  common::milog::MiLogStream::~MiLogStream(&v36);
  v2 = -1;
LABEL_49:
  std::shared_ptr<data::ConfigWidgetToyMiracleRing>::~shared_ptr((std::shared_ptr<data::ConfigWidgetToyMiracleRing> *const)(v3 + 32));
  result = v2;
  if ( v37 == (char *)v3 )
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

// Line 546: range 0000000016CA357C-0000000016CA3A76
int32_t __cdecl PlayerMiracleRingComp::retractMiracleRing(PlayerMiracleRingComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  common::milog::MiLogStream *v4; // rcx
  int32_t v5; // r14d
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  Scene *v10; // rsi
  __int64 Now; // rsi
  int32_t result; // eax
  unsigned int val; // [rsp+1Ch] [rbp-B4h] BYREF
  common::milog::MiLogStream v14; // [rsp+20h] [rbp-B0h] BYREF
  char v15[144]; // [rsp+40h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 13 scene_ptr:547 64 16 14 gadget_ptr:559";
  *(_QWORD *)(v1 + 16) = PlayerMiracleRingComp::retractMiracleRing;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v1 + 32));
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
      "retractMiracleRing",
      550);
    v4 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
           &v14,
           (const char (*)[23])"getScene fail, player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v4, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v14);
    v5 = -1;
  }
  else
  {
    if ( *(char *)(((unsigned __int64)&this->is_gadget_created_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->is_gadget_created_);
    if ( !this->is_gadget_created_ )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
        "retractMiracleRing",
        555);
      v6 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
             &v14,
             (const char (*)[38])"MiracleRing has not been placed, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
      common::milog::MiLogStream::~MiLogStream(&v14);
      v5 = 9207;
    }
    else
    {
      PlayerMiracleRingComp::findMiracleRing((PlayerMiracleRingComp *const)(v1 + 64));
      if ( std::operator==<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v1 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v14,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
          "retractMiracleRing",
          562);
        v7 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
               &v14,
               (const char (*)[42])"findEntity MiracleRing failed, entity_id:");
        v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->gadget_entity_id_);
        v9 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v8, (const char (*)[7])", uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
        common::milog::MiLogStream::~MiLogStream(&v14);
        v5 = 504;
      }
      else
      {
        v10 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
        PlayerMiracleRingComp::tryDestroyMiracleRingGadgetAndQuitScene(
          this,
          v10,
          &proto_log::PlayerLogBodyMiracleRingDestroy::REASON_RETRACT,
          0);
        Now = (unsigned int)common::tools::TimeUtils::getNow();
        if ( *(_BYTE *)(((unsigned __int64)&this->last_use_time_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->last_use_time_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&this->last_use_time_, Now, &this->last_use_time_);
        }
        this->last_use_time_ = Now;
        v5 = 0;
      }
      std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v1 + 64));
    }
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 32));
  result = v5;
  if ( v15 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 573: range 0000000016CA3A78-0000000016CA473F
int32_t __cdecl PlayerMiracleRingComp::tryCreateMiracleRingGadgetAndEnterScene(
        PlayerMiracleRingComp *const this,
        MiracleRingGadgetData *miracle_ring_gadget_data,
        Scene *scene)
{
  unsigned __int64 p_M_refcount; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // r14
  int32_t v9; // r14d
  std::__shared_ptr_access<data::ConfigWidgetToyMiracleRing,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  unsigned __int64 v14; // rdx
  Scene *v15; // rsi
  common::milog::MiLogStream *v16; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  uint32_t EntityId; // ecx
  char v19; // dl
  __int64 v20; // rdx
  common::milog::MiLogStream *v21; // rcx
  common::milog::MiLogStream *v22; // rdx
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // r14
  std::string v26; // [rsp+0h] [rbp-4E0h]
  std::__shared_count<(__gnu_cxx::_Lock_policy)2> *v27; // [rsp+10h] [rbp-4D0h]
  Scene *scenea; // [rsp+18h] [rbp-4C8h]
  std::allocator<unsigned int> __a; // [rsp+3Fh] [rbp-4A1h] BYREF
  GadgetParam v31; // [rsp+40h] [rbp-4A0h] BYREF

  *(&v26._anon_0._M_allocated_capacity + 1) = (std::string::size_type)scene;
  p_M_refcount = (unsigned __int64)&v31.owner_ptr._M_refcount;
  v26._anon_0._M_allocated_capacity = (std::string::size_type)&v31.owner_ptr._M_refcount;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1056LL);
    if ( v4 )
      p_M_refcount = v4;
  }
  *(_QWORD *)p_M_refcount = 1102416563LL;
  *(_QWORD *)(p_M_refcount + 8) = "4 48 1 10 holder:576 64 4 7 ret:603 80 16 27 miracle_ring_config_ptr:577 112 816 16 gadget_param:586";
  *(_QWORD *)(p_M_refcount + 16) = PlayerMiracleRingComp::tryCreateMiracleRingGadgetAndEnterScene;
  v5 = (_DWORD *)(p_M_refcount >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = 61956;
  v5[536862723] = 62194;
  v5[536862749] = -202116109;
  v5[536862750] = -202116109;
  v5[536862751] = -202116109;
  v5[536862752] = -202116109;
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)&v31.drop_id,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
    "tryCreateMiracleRingGadgetAndEnterScene",
    574);
  v26._M_string_length = (std::string::size_type)common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                                                   (common::milog::MiLogStream *const)&v31.drop_id,
                                                   (const char (*)[46])"tryCreateMiracleRingGadgetAndEnterScene, uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *(_DWORD *)(p_M_refcount + 64) = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
    (common::milog::MiLogStream *const)v26._M_string_length,
    (const unsigned int *)(p_M_refcount + 64));
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v31.drop_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Player::getBasicComp(this->player_);
  PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v31.drop_id, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(p_M_refcount + 48), 0xC27u, v26);
  std::string::~string(&v31.drop_id);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v31);
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v31);
  JsonConfigMgr::getWidgetNewConfig(&v7->design_config.json_config_mgr);
  WidgetJsonNewConfig::findWidgetConfig<data::ConfigWidgetToyMiracleRing>((const WidgetJsonNewConfig *const)(p_M_refcount + 80));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v31);
  if ( std::operator==<data::ConfigWidgetToyMiracleRing>(
         0LL,
         (const std::shared_ptr<data::ConfigWidgetToyMiracleRing> *)(p_M_refcount + 80)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v31.drop_id,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
      "tryCreateMiracleRingGadgetAndEnterScene",
      580);
    v8 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
           (common::milog::MiLogStream *const)&v31.drop_id,
           (const char (*)[55])"findWidgetConfig<ConfigWidgetMiracleRing> failed, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_DWORD *)(p_M_refcount + 64) = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
      v8,
      (const unsigned int *)(p_M_refcount + 64));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v31.drop_id);
    v9 = -1;
  }
  else
  {
    if ( std::operator==<Gadget>(0LL, &miracle_ring_gadget_data->gadget_ptr) )
    {
      GadgetParam::GadgetParam((GadgetParam *const)(p_M_refcount + 112));
      v10 = std::__shared_ptr_access<data::ConfigWidgetToyMiracleRing,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetToyMiracleRing,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 80));
      if ( *(_BYTE *)(((unsigned __int64)&v10->create_gadget_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v10->create_gadget_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&v10->create_gadget_id);
      }
      *(_DWORD *)(p_M_refcount + 112) = v10->create_gadget_id;
      *(_DWORD *)(p_M_refcount + 120) = Scene::genNewEntityId(scenea, PROT_ENTITY_GADGET);
      if ( *(char *)(((unsigned __int64)miracle_ring_gadget_data >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)((((unsigned __int64)&miracle_ring_gadget_data->pos.z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)miracle_ring_gadget_data + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&miracle_ring_gadget_data->pos.z
                                                                                + 3) >> 3)
                                                                              + 0x7FFF8000) )
      {
        __asan_report_load_n(miracle_ring_gadget_data, 12LL);
      }
      *(_QWORD *)(p_M_refcount + 124) = *(_QWORD *)&miracle_ring_gadget_data->pos.x;
      *(float *)(p_M_refcount + 132) = miracle_ring_gadget_data->pos.z;
      if ( (((unsigned __int8)miracle_ring_gadget_data + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&miracle_ring_gadget_data->rot >> 3)
                                                                              + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)&miracle_ring_gadget_data->rot >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&miracle_ring_gadget_data->rot.z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)miracle_ring_gadget_data + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&miracle_ring_gadget_data->rot.z
                                                                                + 3) >> 3)
                                                                              + 0x7FFF8000) )
      {
        __asan_report_load_n(&miracle_ring_gadget_data->rot, 12LL);
      }
      *(Vector3 *)(p_M_refcount + 136) = miracle_ring_gadget_data->rot;
      *(_DWORD *)(p_M_refcount + 204) = 0;
      std::allocator<unsigned int>::allocator(&__a);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      *(_DWORD *)(p_M_refcount + 64) = Player::getUid(this->player_);
      std::vector<unsigned int>::vector(
        (std::vector<unsigned int> *const)&v31.pos.y,
        (std::initializer_list<unsigned int>)__PAIR128__(1LL, p_M_refcount + 64),
        &__a);
      std::vector<unsigned int>::operator=(
        (std::vector<unsigned int> *const)(p_M_refcount + 272),
        (std::vector<unsigned int> *)&v31.pos.y);
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)&v31.pos.y);
      std::allocator<unsigned int>::~allocator(&__a);
      if ( !std::unordered_map<unsigned int,unsigned int>::empty(&this->drop_tag_to_count_map_) )
        *(_DWORD *)(p_M_refcount + 164) = 201;
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      *(_DWORD *)(p_M_refcount + 780) = Player::getUid(this->player_);
      EntityMgr::createGadget(&v31);
      std::shared_ptr<Gadget>::operator=(&miracle_ring_gadget_data->gadget_ptr, (std::shared_ptr<Gadget> *)&v31);
      std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)&v31);
      GadgetParam::~GadgetParam((GadgetParam *const)(p_M_refcount + 112));
    }
    if ( std::operator!=<Gadget>(0LL, &miracle_ring_gadget_data->gadget_ptr)
      && (v11 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)&miracle_ring_gadget_data->gadget_ptr),
          !Entity::isOnScene((const Entity *const)v11)) )
    {
      v13 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)&miracle_ring_gadget_data->gadget_ptr);
      if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v14 = *(_QWORD *)v13->baseclass_0 + 56LL;
      if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v15 = scenea;
      *(_DWORD *)(p_M_refcount + 64) = (*(__int64 (__fastcall **)(std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, Scene *, VisionContext *))v14)(
                                         v13,
                                         scenea,
                                         &VisionContext::meet_context);
      if ( *(_DWORD *)(p_M_refcount + 64) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v31.drop_id,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
          "tryCreateMiracleRingGadgetAndEnterScene",
          606);
        v16 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                (common::milog::MiLogStream *const)&v31.drop_id,
                (const char (*)[37])"miracle ring enterScene failed, ret:");
        common::milog::MiLogStream::operator<<<int,(int *)0>(v16, (const int *)(p_M_refcount + 64));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v31.drop_id);
        v9 = *(_DWORD *)(p_M_refcount + 64);
      }
      else
      {
        if ( *(char *)(((unsigned __int64)&this->is_gadget_created_ >> 3) + 0x7FFF8000) < 0 )
          __asan_report_store1(&this->is_gadget_created_, scenea, &this->is_gadget_created_);
        this->is_gadget_created_ = 1;
        v17 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)&miracle_ring_gadget_data->gadget_ptr);
        EntityId = Entity::getEntityId((const Entity *const)v17);
        v19 = *(_BYTE *)(((unsigned __int64)&this->gadget_entity_id_ >> 3) + 0x7FFF8000);
        LOBYTE(v15) = v19 != 0;
        v20 = (v19 != 0) & (unsigned __int8)((char)((((_BYTE)this + 100) & 7) + 3) >= v19);
        if ( (_BYTE)v20 )
          __asan_report_store4(&this->gadget_entity_id_, v15, v20);
        this->gadget_entity_id_ = EntityId;
        if ( (((unsigned __int8)this + 108) & 7) >= *(_BYTE *)(((unsigned __int64)&this->create_pos_ >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)&this->create_pos_ >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&this->create_pos_.z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)this + 119) & 7) >= *(_BYTE *)((((unsigned __int64)&this->create_pos_.z + 3) >> 3)
                                                             + 0x7FFF8000) )
        {
          __asan_report_store_n(&this->create_pos_, 12LL);
        }
        if ( *(char *)(((unsigned __int64)miracle_ring_gadget_data >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)((((unsigned __int64)&miracle_ring_gadget_data->pos.z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)miracle_ring_gadget_data + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&miracle_ring_gadget_data->pos.z
                                                                                  + 3) >> 3)
                                                                                + 0x7FFF8000) )
        {
          __asan_report_load_n(miracle_ring_gadget_data, 12LL);
        }
        this->create_pos_ = miracle_ring_gadget_data->pos;
        PlayerMiracleRingComp::logMiracleRingPlace(this, &this->create_pos_);
        PlayerMiracleRingComp::notifyMiracleRingData(this);
        if ( PlayerUnixTimer::startS(
               &this->miracle_ring_timer_,
               0x3Cu,
               0,
               "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
               "tryCreateMiracleRingGadgetAndEnterScene",
               617) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&v31.drop_id,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
            "tryCreateMiracleRingGadgetAndEnterScene",
            619);
          v21 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                  (common::milog::MiLogStream *const)&v31.drop_id,
                  (const char (*)[21])" start timer failed!");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          operator<<(v21, this->player_);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v31.drop_id);
        }
        v9 = 0;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v31.drop_id,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
        "tryCreateMiracleRingGadgetAndEnterScene",
        624);
      v22 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
              (common::milog::MiLogStream *const)&v31.drop_id,
              (const char (*)[39])"createGadget miracle ring failed, pos:");
      v23 = operator<<(v22, &miracle_ring_gadget_data->pos);
      v24 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v23, (const char (*)[7])", uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      *(_DWORD *)(p_M_refcount + 64) = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        v24,
        (const unsigned int *)(p_M_refcount + 64));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v31.drop_id);
      v9 = -1;
    }
  }
  std::shared_ptr<data::ConfigWidgetToyMiracleRing>::~shared_ptr((std::shared_ptr<data::ConfigWidgetToyMiracleRing> *const)(p_M_refcount + 80));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(p_M_refcount + 48));
  if ( v27 == (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)p_M_refcount )
  {
    *(_QWORD *)((p_M_refcount >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((p_M_refcount >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((p_M_refcount >> 3) + 0x7FFF8074) = 0LL;
    *(_QWORD *)((p_M_refcount >> 3) + 0x7FFF807C) = 0LL;
  }
  else
  {
    *(_QWORD *)p_M_refcount = 1172321806LL;
    __asan_stack_free_5(p_M_refcount, 1056LL, v27);
  }
  return v9;
};

// Line 631: range 0000000016CA4740-0000000016CA4BF9
void __cdecl PlayerMiracleRingComp::tryDestroyMiracleRingGadgetAndQuitScene(
        PlayerMiracleRingComp *const this,
        Scene *scene,
        const proto_log::PlayerLogBodyMiracleRingDestroy::DestroyReason *reason,
        bool is_notify)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  unsigned __int64 v11; // rdx
  common::milog::MiLogStream *v12; // rax
  unsigned int val; // [rsp+28h] [rbp-D8h] BYREF
  uint32_t old_entity_id; // [rsp+2Ch] [rbp-D4h]
  common::milog::MiLogStream v17; // [rsp+30h] [rbp-D0h] BYREF
  char v18[176]; // [rsp+50h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 32 16 14 gadget_ptr:634 64 24 10 notify:656";
  *(_QWORD *)(v4 + 16) = PlayerMiracleRingComp::tryDestroyMiracleRingGadgetAndQuitScene;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -219021312;
  v6[536862722] = -218103808;
  v6[536862723] = -202116109;
  common::milog::MiLogStream::create(
    &v17,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
    "tryDestroyMiracleRingGadgetAndQuitScene",
    632);
  v7 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
         &v17,
         (const char (*)[52])"tryDestroyMiracleRingGadgetAndQuitScene, entity_id:");
  v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->gadget_entity_id_);
  v9 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v8, (const char (*)[7])", uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
  common::milog::MiLogStream::~MiLogStream(&v17);
  PlayerMiracleRingComp::findMiracleRing((PlayerMiracleRingComp *const)(v4 + 32));
  if ( std::operator!=<Gadget>((const std::shared_ptr<Gadget> *)(v4 + 32), 0LL) )
  {
    v10 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v11 = *(_QWORD *)v10->baseclass_0 + 128LL;
    if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    (*(void (__fastcall **)(std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, VisionContext *))v11)(
      v10,
      &VisionContext::miss_context);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
      "tryDestroyMiracleRingGadgetAndQuitScene",
      641);
    v12 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
            &v17,
            (const char (*)[30])"findEntity failed, entity_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &this->gadget_entity_id_);
    common::milog::MiLogStream::~MiLogStream(&v17);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_entity_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gadget_entity_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->gadget_entity_id_);
  }
  old_entity_id = this->gadget_entity_id_;
  if ( *(char *)(((unsigned __int64)&this->is_gadget_created_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_gadget_created_, (((_BYTE)this + 100) & 7u) + 3, &this->is_gadget_created_);
  this->is_gadget_created_ = 0;
  this->gadget_entity_id_ = 0;
  Vector3::reset(&this->create_pos_);
  PlayerMiracleRingComp::logMiracleRingDestroy(this, reason);
  PlayerMiracleRingComp::notifyMiracleRingData(this);
  common::tools::MiTimer::cancel(&this->miracle_ring_timer_);
  if ( is_notify )
  {
    proto::MiracleRingDestroyNotify::MiracleRingDestroyNotify((proto::MiracleRingDestroyNotify *const)(v4 + 64));
    proto::MiracleRingDestroyNotify::set_entity_id((proto::MiracleRingDestroyNotify *const)(v4 + 64), old_entity_id);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::sendProto(this->player_, (const google::protobuf::Message *)(v4 + 64));
    proto::MiracleRingDestroyNotify::~MiracleRingDestroyNotify((proto::MiracleRingDestroyNotify *const)(v4 + 64));
  }
  std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v4 + 32));
  if ( v18 == (char *)v4 )
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
};

// Line 664: range 0000000016CA4BFA-0000000016CA58F8
int32_t __cdecl PlayerMiracleRingComp::checkAndGetDropItemVec(
        PlayerMiracleRingComp *const this,
        std::vector<ItemParam> *add_item_param_vec,
        std::vector<ItemParam> *drop_item_param_vec,
        DropParam *drop_param,
        std::vector<std::pair<unsigned int,unsigned int>> *drop_vec)
{
  int32_t v5; // r14d
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  PlayerBasicComp *BasicComp; // rax
  common::milog::MiLogStream *v10; // rbx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  common::milog::MiLogStream *v14; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  uint32_t v16; // esi
  uint32_t LogLevel; // eax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // r14
  int v23; // r15d
  ItemParam *M_current; // r15
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v25; // rax
  common::milog::MiLogStream *v26; // r14
  Entity *v27; // r15
  Player *player; // r14
  uint32_t v29; // eax
  common::milog::MiLogStream *v30; // r14
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rax
  int32_t result; // eax
  ItemParam *__last; // [rsp+10h] [rbp-280h]
  int v40; // [rsp+4Ch] [rbp-244h] BYREF
  unsigned int val; // [rsp+50h] [rbp-240h] BYREF
  uint32_t idx; // [rsp+54h] [rbp-23Ch]
  uint32_t drop_count; // [rsp+58h] [rbp-238h]
  int32_t ret; // [rsp+5Ch] [rbp-234h]
  std::unordered_map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+60h] [rbp-230h] BYREF
  std::unordered_map<unsigned int,unsigned int>::iterator __for_end; // [rsp+68h] [rbp-228h] BYREF
  std::unordered_map<unsigned int,unsigned int> *__for_range; // [rsp+70h] [rbp-220h]
  const std::pair<unsigned int const,unsigned int> *v48; // [rsp+78h] [rbp-218h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *drop_id; // [rsp+80h] [rbp-210h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *drop_count_0; // [rsp+88h] [rbp-208h]
  std::shared_ptr<Config> v51; // [rsp+90h] [rbp-200h] BYREF
  common::milog::MiLogStream v52; // [rsp+A0h] [rbp-1F0h] BYREF
  char v53[464]; // [rsp+C0h] [rbp-1D0h] BYREF

  v6 = (unsigned __int64)v53;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_3(416LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "7 48 4 11 drop_id:698 64 8 17 output_result:700 96 16 14 gadget_ptr:671 128 24 17 action_reason:"
                        "693 192 24 17 drop_item_vec:694 256 24 25 single_drop_param_vec:699 320 56 21 drop_id_count_map:695";
  *(_QWORD *)(v6 + 16) = PlayerMiracleRingComp::checkAndGetDropItemVec;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234556943;
  v8[536862722] = -218959360;
  v8[536862723] = -219021312;
  v8[536862724] = -234881024;
  v8[536862725] = -218959118;
  v8[536862726] = -234881024;
  v8[536862727] = -218959118;
  v8[536862728] = -234881024;
  v8[536862729] = -218959118;
  v8[536862731] = -218103808;
  v8[536862732] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Player::getBasicComp(this->player_);
  if ( !PlayerBasicComp::isStateOpen(BasicComp, 0x57Fu) )
  {
    common::milog::MiLogStream::create(
      &v52,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
      "checkAndGetDropItemVec",
      667);
    v10 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
            &v52,
            (const char (*)[40])"OPEN_STATE_MIRACLE_RING is locked. uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
    common::milog::MiLogStream::~MiLogStream(&v52);
    v5 = 141;
  }
  else
  {
    PlayerMiracleRingComp::findMiracleRing((PlayerMiracleRingComp *const)(v6 + 96));
    if ( std::operator==<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v6 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v52,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
        "checkAndGetDropItemVec",
        674);
      v11 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
              &v52,
              (const char (*)[42])"findEntity MiracleRing failed, entity_id:");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &this->gadget_entity_id_);
      v13 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v12, (const char (*)[7])", uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v52);
      v5 = 504;
    }
    else if ( std::unordered_map<unsigned int,unsigned int>::empty(&this->drop_tag_to_count_map_) )
    {
      common::milog::MiLogStream::create(
        &v52,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
        "checkAndGetDropItemVec",
        680);
      v14 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
              &v52,
              (const char (*)[39])"miraclering has not deliver item, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &val);
      common::milog::MiLogStream::~MiLogStream(&v52);
      v5 = 9204;
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v51);
      v15 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v51);
      drop_count = ConstValueExcelConfigMgr::getMiracleRingDropCount(&v15->design_config.txt_config_mgr.const_value_config_mgr);
      std::shared_ptr<Config>::~shared_ptr(&v51);
      if ( drop_count )
      {
        ret = 0;
        ActionReason::ActionReason(
          (ActionReason *const)(v6 + 128),
          ACTION_MIRACLE_RING_REWARD,
          ITEM_LIMIT_MIRACLE_RING_REWARD);
        std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v6 + 192));
        std::unordered_map<unsigned int,unsigned int>::unordered_map((std::unordered_map<unsigned int,unsigned int> *const)(v6 + 320));
        for ( idx = 0; idx < drop_count; ++idx )
        {
          *(_DWORD *)(v6 + 48) = PlayerMiracleRingComp::randDropIdByTagCount(this);
          std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v6 + 256));
          v16 = *(_DWORD *)(v6 + 48);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          *(OutputResult *)(v6 + 64) = DropUtils::dropItems(
                                         this->player_,
                                         v16,
                                         1u,
                                         (const ActionReason *)(v6 + 128),
                                         (std::vector<ItemParam> *)(v6 + 256));
          if ( *(_DWORD *)(v6 + 64) )
          {
            LogLevel = OutputResult::getLogLevel((const OutputResult *const)(v6 + 64));
            common::milog::MiLogStream::create(
              &v52,
              &common::milog::MiLogDefault::default_log_obj_,
              LogLevel,
              "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
              "checkAndGetDropItemVec",
              703);
            v18 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                    &v52,
                    (const char (*)[27])"dropItems failed, drop_id:");
            v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v18,
                    (const unsigned int *)(v6 + 48));
            v20 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v19,
                    (const char (*)[13])" drop_count:");
            v40 = 1;
            v21 = common::milog::MiLogStream::operator<<<int,(int *)0>(v20, &v40);
            v22 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v21, (const char (*)[7])", uid:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            val = Player::getUid(this->player_);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &val);
            common::milog::MiLogStream::~MiLogStream(&v52);
            v5 = *(_DWORD *)(v6 + 64);
            v23 = 0;
          }
          else
          {
            __last = std::vector<ItemParam>::end((std::vector<ItemParam> *const)(v6 + 256))._M_current;
            M_current = std::vector<ItemParam>::begin((std::vector<ItemParam> *const)(v6 + 256))._M_current;
            __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false>::__node_type *)std::vector<ItemParam>::end((std::vector<ItemParam> *const)(v6 + 192))._M_current;
            __gnu_cxx::__normal_iterator<ItemParam const*,std::vector<ItemParam>>::__normal_iterator<ItemParam*>(
              (__gnu_cxx::__normal_iterator<const ItemParam*,std::vector<ItemParam> > *const)&__for_end,
              (const __gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> > *)&__for_begin);
            std::vector<ItemParam>::insert<__gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam>>,void>(
              (std::vector<ItemParam> *const)(v6 + 192),
              (std::vector<ItemParam>::const_iterator)__for_end._M_cur,
              (__gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> >)M_current,
              (__gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> >)__last);
            v25 = std::unordered_map<unsigned int,unsigned int>::operator[](
                    (std::unordered_map<unsigned int,unsigned int> *const)(v6 + 320),
                    (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v6 + 48));
            if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v25 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v25);
            }
            ++*v25;
            v23 = 1;
          }
          std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v6 + 256));
          if ( v23 != 1 )
            goto LABEL_48;
        }
        __for_range = (std::unordered_map<unsigned int,unsigned int> *)(v6 + 320);
        __for_begin._M_cur = std::unordered_map<unsigned int,unsigned int>::begin((std::unordered_map<unsigned int,unsigned int> *const)(v6 + 320))._M_cur;
        __for_end._M_cur = std::unordered_map<unsigned int,unsigned int>::end(__for_range)._M_cur;
        while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(&__for_begin, &__for_end) )
        {
          v48 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*(&__for_begin);
          drop_id = std::get<0ul,unsigned int const,unsigned int>(v48);
          drop_count_0 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v48);
          *(std::pair<unsigned int,unsigned int> *)(v6 + 64) = std::make_pair<unsigned int const&,unsigned int const&>(
                                                                 drop_id,
                                                                 drop_count_0);
          std::vector<std::pair<unsigned int,unsigned int>>::emplace_back<std::pair<unsigned int,unsigned int>>(
            drop_vec,
            (std::pair<unsigned int,unsigned int> *)(v6 + 64),
            (std::pair<unsigned int,unsigned int> *)(v6 + 64));
          std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++(&__for_begin);
        }
        ret = PlayerMiracleRingComp::chooseDropItemsFromReward(
                this,
                (const std::vector<ItemParam> *)(v6 + 192),
                add_item_param_vec,
                drop_item_param_vec);
        if ( ret )
        {
          common::milog::MiLogStream::create(
            &v52,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
            "checkAndGetDropItemVec",
            716);
          v26 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                  &v52,
                  (const char (*)[39])"chooseDropItemsFromReward failed, uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &val);
          common::milog::MiLogStream::~MiLogStream(&v52);
          v5 = ret;
        }
        else
        {
          if ( std::vector<ItemParam>::empty(drop_item_param_vec) )
            goto LABEL_47;
          v27 = (Entity *)std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 96));
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          player = this->player_;
          v29 = PlayerMiracleRingComp::randDropIdByTagCount(this);
          ret = Entity::buildDropParamForPlayer(v27, v29, 1u, player, drop_param);
          if ( ret )
          {
            common::milog::MiLogStream::create(
              &v52,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
              "checkAndGetDropItemVec",
              726);
            v30 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                    &v52,
                    (const char (*)[38])"buildDropParamForPlayer failed, uid: ");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            val = Player::getUid(this->player_);
            v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, &val);
            v32 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v31, (const char (*)[11])" ,gadget: ");
            v33 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 96));
            common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v32, v33);
            common::milog::MiLogStream::~MiLogStream(&v52);
            v5 = ret;
          }
          else
          {
LABEL_47:
            v5 = 0;
          }
        }
LABEL_48:
        std::unordered_map<unsigned int,unsigned int>::~unordered_map((std::unordered_map<unsigned int,unsigned int> *const)(v6 + 320));
        std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v6 + 192));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v52,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
          "checkAndGetDropItemVec",
          687);
        common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
          &v52,
          (const char (*)[45])"miraclering reward drop_count equal 0, error");
        common::milog::MiLogStream::~MiLogStream(&v52);
        v5 = -1;
      }
    }
    std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v6 + 96));
  }
  result = v5;
  if ( v53 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF802C) = 0LL;
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
    *(_DWORD *)((v6 >> 3) + 0x7FFF8030) = -168430091;
  }
  return result;
};

// Line 735: range 0000000016CA58FA-0000000016CA61A5
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl PlayerMiracleRingComp::grantMiracleRingDropItems(PlayerMiracleRingComp *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // rcx
  PlayerBasicComp *BasicComp; // rax
  PlayerItemComp *ItemComp; // rax
  Scene *v7; // rax
  common::milog::MiLogStream *v8; // r14
  __int64 Now; // rsi
  PlayerWatcherComp *WatcherComp; // rax
  __int64 v11; // rsi
  __int64 v12; // rdx
  int32_t result; // eax
  std::string v14; // [rsp+0h] [rbp-210h] OVERLAPPED BYREF
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-1F0h] BYREF
  char v16[464]; // [rsp+40h] [rbp-1D0h] BYREF

  v14._M_string_length = (std::string::size_type)this;
  v1 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(416LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "7 32 1 10 holder:757 48 16 13 scene_ptr:739 80 24 22 add_item_param_vec:746 144 24 23 drop_item_"
                        "param_vec:747 208 24 12 drop_vec:749 272 24 17 action_reason:758 336 40 14 drop_param:748";
  *(_QWORD *)(v1 + 16) = PlayerMiracleRingComp::grantMiracleRingDropItems;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61953;
  v3[536862722] = 62194;
  v3[536862723] = -218959360;
  v3[536862724] = 62194;
  v3[536862725] = -218959360;
  v3[536862726] = 62194;
  v3[536862727] = -218959360;
  v3[536862728] = 62194;
  v3[536862729] = -218959360;
  v3[536862730] = 62194;
  v3[536862731] = -218103808;
  v3[536862732] = -202116109;
  *((_DWORD *)&v14._anon_0._M_allocated_capacity + 3) = 0;
  if ( *(_BYTE *)(((v14._M_string_length + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(*(Player *const *)(v14._M_string_length + 24));
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v1 + 48));
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v1 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
      "grantMiracleRingDropItems",
      742);
    v4 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
           &v15,
           (const char (*)[23])"getScene fail, player:");
    if ( *(_BYTE *)(((v14._M_string_length + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v4, *(const Player **)(v14._M_string_length + 24));
    common::milog::MiLogStream::~MiLogStream(&v15);
    *((_DWORD *)&v14._anon_0._M_allocated_capacity + 3) = -1;
  }
  else
  {
    std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v1 + 80));
    std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v1 + 144));
    DropParam::DropParam((DropParam *const)(v1 + 336));
    std::vector<std::pair<unsigned int,unsigned int>>::vector((std::vector<std::pair<unsigned int,unsigned int>> *const)(v1 + 208));
    *((_DWORD *)&v14._anon_0._M_allocated_capacity + 3) = PlayerMiracleRingComp::checkAndGetDropItemVec(
                                                            (PlayerMiracleRingComp *const)v14._M_string_length,
                                                            (std::vector<ItemParam> *)(v1 + 80),
                                                            (std::vector<ItemParam> *)(v1 + 144),
                                                            (DropParam *)(v1 + 336),
                                                            (std::vector<std::pair<unsigned int,unsigned int>> *)(v1 + 208));
    if ( *((_DWORD *)&v14._anon_0._M_allocated_capacity + 3) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
        "grantMiracleRingDropItems",
        753);
      common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
        &v15,
        (const char (*)[30])"checkAndGetDropItemVec failed");
      common::milog::MiLogStream::~MiLogStream(&v15);
    }
    else
    {
      if ( *(_BYTE *)(((v14._M_string_length + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      BasicComp = Player::getBasicComp(*(Player *const *)(v14._M_string_length + 24));
      PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v15, BasicComp);
      StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 32), 0xC2Au, v14);
      std::string::~string(&v15);
      ActionReason::ActionReason(
        (ActionReason *const)(v1 + 272),
        ACTION_MIRACLE_RING_REWARD,
        ITEM_LIMIT_MIRACLE_RING_REWARD);
      if ( *(_BYTE *)(((v14._M_string_length + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      ItemComp = Player::getItemComp(*(Player *const *)(v14._M_string_length + 24));
      PlayerItemComp::addItemBatch(
        ItemComp,
        (const std::vector<ItemParam> *)(v1 + 80),
        (const ActionReason *)(v1 + 272),
        0LL);
      if ( !std::vector<ItemParam>::empty((const std::vector<ItemParam> *const)(v1 + 144)) )
      {
        v7 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48));
        if ( Scene::dropItems(
               v7,
               (const std::vector<ItemParam> *)(v1 + 144),
               (const DropParam *)(v1 + 336),
               (const ActionReason *)(v1 + 272)) )
        {
          common::milog::MiLogStream::create(
            &v15,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
            "grantMiracleRingDropItems",
            766);
          v8 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                 &v15,
                 (const char (*)[30])"scene dropItems failed, uid: ");
          if ( *(_BYTE *)(((v14._M_string_length + 24) >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          *((_DWORD *)&v14._anon_0._M_allocated_capacity + 2) = Player::getUid(*(const Player *const *)(v14._M_string_length + 24));
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v8,
            (const unsigned int *)&v14._anon_0._M_allocated_capacity + 2);
          common::milog::MiLogStream::~MiLogStream(&v15);
        }
      }
      *((_DWORD *)&v14._anon_0._M_allocated_capacity + 3) = 0;
      PlayerMiracleRingComp::logMiracleRingGrant(
        (PlayerMiracleRingComp *const)v14._M_string_length,
        (const std::vector<std::pair<unsigned int,unsigned int>> *)(v1 + 208));
      Now = (unsigned int)common::tools::TimeUtils::getNow();
      if ( *(_BYTE *)(((v14._M_string_length + 32) >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((v14._M_string_length + 32) >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(v14._M_string_length + 32, Now, v14._M_string_length + 32);
      }
      *(_DWORD *)(v14._M_string_length + 32) = Now;
      std::unordered_map<unsigned int,unsigned int>::clear((std::unordered_map<unsigned int,unsigned int> *const)(v14._M_string_length + 40));
      if ( *(_BYTE *)(((v14._M_string_length + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      WatcherComp = Player::getWatcherComp(*(Player *const *)(v14._M_string_length + 24));
      PlayerWatcherComp::triggerMiracleRingTakeReward(WatcherComp, 1u);
      StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 32));
    }
    std::vector<std::pair<unsigned int,unsigned int>>::~vector((std::vector<std::pair<unsigned int,unsigned int>> *const)(v1 + 208));
    std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v1 + 144));
    std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v1 + 80));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 48));
  v11 = *((unsigned int *)&v14._anon_0._M_allocated_capacity + 3);
  PlayerMiracleRingComp::notifyDropResult(
    (PlayerMiracleRingComp *const)v14._M_string_length,
    *((int32_t *)&v14._anon_0._M_allocated_capacity + 3));
  if ( *(char *)(((v14._M_string_length + 96) >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(v14._M_string_length + 96, v11, v14._M_string_length + 96);
  *(_BYTE *)(v14._M_string_length + 96) = 0;
  v12 = (*(_BYTE *)(((v14._M_string_length + 100) >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)(((LOBYTE(v14._M_string_length) + 100) & 7) + 3) >= *(_BYTE *)(((v14._M_string_length + 100) >> 3) + 0x7FFF8000));
  if ( (_BYTE)v12 )
    __asan_report_store4(v14._M_string_length + 100, ((LOBYTE(v14._M_string_length) + 100) & 7u) + 3, v12);
  *(_DWORD *)(v14._M_string_length + 100) = 0;
  Vector3::reset((Vector3 *const)(v14._M_string_length + 108));
  PlayerMiracleRingComp::logMiracleRingDestroy(
    (PlayerMiracleRingComp *const)v14._M_string_length,
    &proto_log::PlayerLogBodyMiracleRingDestroy::REASON_DROP);
  PlayerMiracleRingComp::notifyMiracleRingData((PlayerMiracleRingComp *const)v14._M_string_length);
  result = 0;
  if ( v16 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8030) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8030) = -168430091;
  }
  return result;
};

// Line 801: range 0000000016CA61A6-0000000016CA6C99
uint32_t __cdecl PlayerMiracleRingComp::randDropIdByTagCount(PlayerMiracleRingComp *const this)
{
  float v1; // xmm1_4
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  uint32_t v6; // r14d
  std::vector<data::MiracleTag>::const_reference v7; // rax
  _DWORD *v8; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool v10; // r14
  common::milog::MiLogStream *v11; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  uint32_t *v13; // rax
  uint32_t *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  std::vector<data::MiracleTag>::size_type v16; // r14
  common::milog::MiLogStream *v17; // rax
  const data::MiracleTag *v18; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  common::milog::MiLogStream *v20; // r14
  std::vector<data::MiracleTag>::reference v21; // rax
  data::MiracleTag *v22; // rdx
  std::unordered_map<data::MiracleTag,unsigned int> *p_tag_to_drop_map; // r14
  const std::unordered_map<data::MiracleTag,unsigned int>::key_type *v24; // rax
  uint32_t *v25; // rax
  uint32_t *v26; // rdx
  uint32_t result; // eax
  uint32_t size; // [rsp+20h] [rbp-160h]
  uint32_t idx; // [rsp+24h] [rbp-15Ch]
  std::unordered_map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-158h] BYREF
  std::unordered_map<unsigned int,unsigned int>::iterator __for_end; // [rsp+30h] [rbp-150h] BYREF
  std::unordered_map<unsigned int,unsigned int> *__for_range; // [rsp+38h] [rbp-148h]
  const std::pair<unsigned int const,unsigned int> *v33; // [rsp+40h] [rbp-140h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *tag; // [rsp+48h] [rbp-138h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *count; // [rsp+50h] [rbp-130h]
  const std::vector<data::MiracleTag> *apply_tag_vec; // [rsp+58h] [rbp-128h]
  std::shared_ptr<Config> v37; // [rsp+60h] [rbp-120h] BYREF
  common::milog::MiLogStream v38; // [rsp+70h] [rbp-110h] BYREF
  char v39[240]; // [rsp+90h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 4 16 selected_idx:839 48 4 7 tag:821 64 24 11 tag_vec:832 128 24 18 tag_weight_vec:833";
  *(_QWORD *)(v2 + 16) = PlayerMiracleRingComp::randDropIdByTagCount;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -234881024;
  v4[536862723] = -218959118;
  v4[536862724] = -218103808;
  v4[536862725] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v37);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v37);
  ConstValueExcelConfigMgr::getMiracleRingRandomDropProb(&v5->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v37);
  if ( common::tools::RandomUtils::randomTestProbability(v1) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v37);
    apply_tag_vec = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v37)->design_config.txt_config_mgr.miracle_ring_config_mgr.apply_tag_vec;
    std::shared_ptr<Config>::~shared_ptr(&v37);
    if ( std::vector<data::MiracleTag>::empty(apply_tag_vec) )
    {
      common::milog::MiLogStream::create(
        &v38,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
        "randDropIdByTagCount",
        810);
      common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v38, (const char (*)[20])"apply_tag_vec empty");
      common::milog::MiLogStream::~MiLogStream(&v38);
      v6 = 0;
    }
    else
    {
      size = std::vector<data::MiracleTag>::size(apply_tag_vec);
      idx = common::tools::RandomUtils::rand<unsigned int>(0, size - 1);
      if ( idx < std::vector<data::MiracleTag>::size(apply_tag_vec) )
      {
        v7 = std::vector<data::MiracleTag>::operator[](apply_tag_vec, idx);
        v8 = v7;
        if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v7);
        }
        *(_DWORD *)(v2 + 48) = *v8;
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v37);
        v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v37);
        v10 = !common::tools::MiscUtils::isContains<std::unordered_map<data::MiracleTag,unsigned int> const,data::MiracleTag>(
                 &v9->design_config.txt_config_mgr.miracle_ring_config_mgr.tag_to_drop_map,
                 (const data::MiracleTag *)(v2 + 48));
        std::shared_ptr<Config>::~shared_ptr(&v37);
        if ( v10 )
        {
          common::milog::MiLogStream::create(
            &v38,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
            "randDropIdByTagCount",
            825);
          v11 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(&v38, (const char (*)[30])off_25F24300);
          __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false>::__node_type *)data::enumValToStr((data::MiracleTag)*(_DWORD *)(v2 + 48));
          common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v11, (const char *const *)&__for_end);
          common::milog::MiLogStream::~MiLogStream(&v38);
          v6 = 0;
        }
        else
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v37);
          v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v37);
          v13 = (uint32_t *)std::unordered_map<data::MiracleTag,unsigned int>::at(
                              &v12->design_config.txt_config_mgr.miracle_ring_config_mgr.tag_to_drop_map,
                              (const std::unordered_map<data::MiracleTag,unsigned int>::key_type *)(v2 + 48));
          v14 = v13;
          if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v13);
          }
          v6 = *v14;
          std::shared_ptr<Config>::~shared_ptr(&v37);
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v38,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
          "randDropIdByTagCount",
          817);
        common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
          &v38,
          (const char (*)[25])"RandomUtils::rand failed");
        common::milog::MiLogStream::~MiLogStream(&v38);
        v6 = 0;
      }
    }
  }
  else
  {
    std::vector<data::MiracleTag>::vector((std::vector<data::MiracleTag> *const)(v2 + 64));
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 128));
    __for_range = &this->drop_tag_to_count_map_;
    __for_begin._M_cur = std::unordered_map<unsigned int,unsigned int>::begin(&this->drop_tag_to_count_map_)._M_cur;
    __for_end._M_cur = std::unordered_map<unsigned int,unsigned int>::end(&this->drop_tag_to_count_map_)._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(&__for_begin, &__for_end) )
    {
      v33 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*(&__for_begin);
      tag = std::get<0ul,unsigned int const,unsigned int>(v33);
      count = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v33);
      if ( *(_BYTE *)(((unsigned __int64)tag >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)tag & 7) + 3) >= *(_BYTE *)(((unsigned __int64)tag >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(tag);
      }
      *(_DWORD *)(v2 + 48) = *tag;
      std::vector<data::MiracleTag>::push_back(
        (std::vector<data::MiracleTag> *const)(v2 + 64),
        (std::vector<data::MiracleTag>::value_type *)(v2 + 48));
      std::vector<unsigned int>::push_back((std::vector<unsigned int> *const)(v2 + 128), count);
      std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++(&__for_begin);
    }
    *(_DWORD *)(v2 + 32) = 0;
    if ( common::tools::RandomUtils::weightSelectOne<unsigned int>(
           (const std::vector<unsigned int> *)(v2 + 128),
           (uint32_t *)(v2 + 32),
           0) )
    {
      common::milog::MiLogStream::create(
        &v38,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
        "randDropIdByTagCount",
        842);
      v15 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
              &v38,
              (const char (*)[29])"weightSelectOne fails, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      *(_DWORD *)(v2 + 48) = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v38);
      v6 = 0;
    }
    else
    {
      v16 = *(unsigned int *)(v2 + 32);
      if ( v16 < std::vector<data::MiracleTag>::size((const std::vector<data::MiracleTag> *const)(v2 + 64)) )
      {
        v18 = std::vector<data::MiracleTag>::operator[](
                (std::vector<data::MiracleTag> *const)(v2 + 64),
                *(unsigned int *)(v2 + 32));
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v37);
        v19 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v37);
        LOBYTE(v18) = !common::tools::MiscUtils::isContains<std::unordered_map<data::MiracleTag,unsigned int> const,data::MiracleTag>(
                         &v19->design_config.txt_config_mgr.miracle_ring_config_mgr.tag_to_drop_map,
                         v18);
        std::shared_ptr<Config>::~shared_ptr(&v37);
        if ( (_BYTE)v18 )
        {
          common::milog::MiLogStream::create(
            &v38,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
            "randDropIdByTagCount",
            852);
          v20 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(&v38, (const char (*)[30])off_25F24300);
          v21 = std::vector<data::MiracleTag>::operator[](
                  (std::vector<data::MiracleTag> *const)(v2 + 64),
                  *(unsigned int *)(v2 + 32));
          v22 = v21;
          if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v21 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v21);
          }
          __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false>::__node_type *)data::enumValToStr(*v22);
          common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v20, (const char *const *)&__for_end);
          common::milog::MiLogStream::~MiLogStream(&v38);
          v6 = 0;
        }
        else
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v37);
          p_tag_to_drop_map = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v37)->design_config.txt_config_mgr.miracle_ring_config_mgr.tag_to_drop_map;
          v24 = std::vector<data::MiracleTag>::operator[](
                  (std::vector<data::MiracleTag> *const)(v2 + 64),
                  *(unsigned int *)(v2 + 32));
          v25 = (uint32_t *)std::unordered_map<data::MiracleTag,unsigned int>::at(p_tag_to_drop_map, v24);
          v26 = v25;
          if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v25 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v25);
          }
          v6 = *v26;
          std::shared_ptr<Config>::~shared_ptr(&v37);
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v38,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
          "randDropIdByTagCount",
          847);
        v17 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                &v38,
                (const char (*)[27])"rand fails, selected_idx: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v2 + 32));
        common::milog::MiLogStream::~MiLogStream(&v38);
        v6 = 0;
      }
    }
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 128));
    std::vector<data::MiracleTag>::~vector((std::vector<data::MiracleTag> *const)(v2 + 64));
  }
  result = v6;
  if ( v39 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
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

// Line 861: range 0000000016CA6C9A-0000000016CA6FB4
int32_t __cdecl PlayerMiracleRingComp::setDeliverdItemFinishedByGm(PlayerMiracleRingComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  std::unordered_map<unsigned int,unsigned int> *p_drop_tag_to_count_map; // rcx
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v5; // rax
  Gadget *v6; // rax
  PlayerWatcherComp *WatcherComp; // rax
  int32_t result; // eax
  std::unordered_map<unsigned int,unsigned int>::key_type __k; // [rsp+1Ch] [rbp-A4h] BYREF
  std::unordered_map<data::MiracleTag,unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-A0h] BYREF
  std::unordered_map<data::MiracleTag,unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-98h] BYREF
  const std::unordered_map<data::MiracleTag,unsigned int> *__for_range; // [rsp+30h] [rbp-90h]
  const std::pair<const data::MiracleTag,unsigned int> *v13; // [rsp+38h] [rbp-88h]
  std::tuple_element<0,const std::pair<const data::MiracleTag,unsigned int> >::type *tag; // [rsp+40h] [rbp-80h]
  std::tuple_element<1,const std::pair<const data::MiracleTag,unsigned int> >::type *drop_id; // [rsp+48h] [rbp-78h]
  char v16[112]; // [rsp+50h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 14 gadget_ptr:867";
  *(_QWORD *)(v1 + 16) = PlayerMiracleRingComp::setDeliverdItemFinishedByGm;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v1 + 32));
  __for_range = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32))->design_config.txt_config_mgr.miracle_ring_config_mgr.tag_to_drop_map;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v1 + 32));
  __for_begin._M_cur = std::unordered_map<data::MiracleTag,unsigned int>::begin(__for_range)._M_cur;
  __for_end._M_cur = std::unordered_map<data::MiracleTag,unsigned int>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<data::MiracleTag const,unsigned int>,false>(&__for_begin, &__for_end) )
  {
    v13 = std::__detail::_Node_const_iterator<std::pair<data::MiracleTag const,unsigned int>,false,false>::operator*(&__for_begin);
    tag = std::get<0ul,data::MiracleTag const,unsigned int>(v13);
    drop_id = (std::tuple_element<1,const std::pair<const data::MiracleTag,unsigned int> >::type *)std::get<1ul,data::MiracleTag const,unsigned int>(v13);
    p_drop_tag_to_count_map = &this->drop_tag_to_count_map_;
    if ( *(_BYTE *)(((unsigned __int64)tag >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)tag & 7) + 3) >= *(_BYTE *)(((unsigned __int64)tag >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(tag);
    }
    __k = *tag;
    v5 = std::unordered_map<unsigned int,unsigned int>::operator[](p_drop_tag_to_count_map, &__k);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    ++*v5;
    std::__detail::_Node_const_iterator<std::pair<data::MiracleTag const,unsigned int>,false,false>::operator++(&__for_begin);
  }
  PlayerMiracleRingComp::notifyMiracleRingData(this);
  PlayerMiracleRingComp::findMiracleRing((PlayerMiracleRingComp *const)(v1 + 32));
  if ( std::operator!=<Gadget>((const std::shared_ptr<Gadget> *)(v1 + 32), 0LL) )
  {
    v6 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    Gadget::setState(v6, 0xC9u, 0, 1);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  WatcherComp = Player::getWatcherComp(this->player_);
  PlayerWatcherComp::triggerMiracleRingDeliverItem(WatcherComp, 1u);
  std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v1 + 32));
  result = 0;
  if ( v16 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 880: range 0000000016CA6FB6-0000000016CA7053
int32_t __cdecl PlayerMiracleRingComp::grantMiracleRingDropItemsByGm(PlayerMiracleRingComp *const this)
{
  common::milog::MiLogStream v2; // [rsp+10h] [rbp-30h] BYREF

  if ( !PlayerMiracleRingComp::grantMiracleRingDropItems(this) )
    return 0;
  common::milog::MiLogStream::create(
    &v2,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
    "grantMiracleRingDropItemsByGm",
    883);
  common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
    &v2,
    (const char (*)[33])"grantMiracleRingDropItems failed");
  common::milog::MiLogStream::~MiLogStream(&v2);
  return -1;
};

// Line 890: range 0000000016CA7054-0000000016CA7244
int32_t __cdecl PlayerMiracleRingComp::refreshMiracleRingCdByGm(PlayerMiracleRingComp *const this)
{
  uint32_t last_take_reward_time; // ebx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  uint32_t MiracleRingCd; // ecx
  std::shared_ptr<Config> v6; // [rsp+10h] [rbp-40h] BYREF
  common::milog::MiLogStream v7; // [rsp+20h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->last_take_reward_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_take_reward_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_take_reward_time_);
  }
  if ( !this->last_take_reward_time_ )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_take_reward_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_take_reward_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_take_reward_time_);
  }
  last_take_reward_time = this->last_take_reward_time_;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v6);
  v3 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v6);
  LOBYTE(last_take_reward_time) = last_take_reward_time < ConstValueExcelConfigMgr::getMiracleRingCd(&v3->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v6);
  if ( (_BYTE)last_take_reward_time )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
      "refreshMiracleRingCdByGm",
      897);
    common::milog::MiLogStream::operator<<<char [71],(char *[71])0>(
      &v7,
      (const char (*)[71])"GET_TXT_CONFIG_MGR.const_value_config_mgr.getMiracleRingCd() too large");
    common::milog::MiLogStream::~MiLogStream(&v7);
    return -1;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v6);
    v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v6);
    MiracleRingCd = ConstValueExcelConfigMgr::getMiracleRingCd(&v4->design_config.txt_config_mgr.const_value_config_mgr);
    if ( *(_BYTE *)(((unsigned __int64)&this->last_take_reward_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->last_take_reward_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->last_take_reward_time_);
    }
    this->last_take_reward_time_ -= MiracleRingCd;
    std::shared_ptr<Config>::~shared_ptr(&v6);
    PlayerMiracleRingComp::notifyMiracleRingData(this);
    return 0;
  }
};

// Line 906: range 0000000016CA7246-0000000016CA72A5
void __cdecl PlayerMiracleRingComp::onOpenStateChange(
        PlayerMiracleRingComp *const this,
        const OpenStateChangeEvent *event)
{
  if ( *(_BYTE *)(((unsigned __int64)&event->key >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->key >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->key);
  }
  if ( event->key == 1407 )
    PlayerMiracleRingComp::notifyMiracleRingData(this);
};

// Line 915: range 0000000016CA72A6-0000000016CA7594
void __cdecl PlayerMiracleRingComp::notifyMiracleRingData(PlayerMiracleRingComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  std::__shared_ptr_access<proto::MiracleRingDataNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rcx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<proto::MiracleRingDataNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<proto::MiracleRingDataNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rcx
  std::__shared_ptr_access<proto::MiracleRingDataNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  Player *player; // r14
  google::protobuf::uint32 use_cd; // [rsp+1Ch] [rbp-84h]
  std::shared_ptr<const google::protobuf::Message> v11; // [rsp+20h] [rbp-80h] BYREF
  char v12[112]; // [rsp+30h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 27 miracle_ring_notify_ptr:916";
  *(_QWORD *)(v1 + 16) = PlayerMiracleRingComp::notifyMiracleRingData;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::tools::perf::make_shared<proto::MiracleRingDataNotify>();
  v4 = std::__shared_ptr_access<proto::MiracleRingDataNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::MiracleRingDataNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->last_take_reward_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_take_reward_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_take_reward_time_);
  }
  proto::MiracleRingDataNotify::set_last_take_reward_time(v4, this->last_take_reward_time_);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v11);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v11);
  use_cd = ConstValueExcelConfigMgr::getMiracleRingCd(&v5->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v11);
  v6 = std::__shared_ptr_access<proto::MiracleRingDataNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::MiracleRingDataNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
  proto::MiracleRingDataNotify::set_miracle_ring_cd(v6, use_cd);
  v7 = std::__shared_ptr_access<proto::MiracleRingDataNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::MiracleRingDataNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
  if ( *(char *)(((unsigned __int64)&this->is_gadget_created_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_gadget_created_);
  proto::MiracleRingDataNotify::set_is_gadget_created(v7, this->is_gadget_created_);
  v8 = std::__shared_ptr_access<proto::MiracleRingDataNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::MiracleRingDataNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_entity_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gadget_entity_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->gadget_entity_id_);
  }
  proto::MiracleRingDataNotify::set_gadget_entity_id(v8, this->gadget_entity_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  player = this->player_;
  std::dynamic_pointer_cast<google::protobuf::Message const,proto::MiracleRingDataNotify>((const std::shared_ptr<proto::MiracleRingDataNotify> *)&v11);
  Player::sendMessage(player, &v11, 0LL);
  std::shared_ptr<google::protobuf::Message const>::~shared_ptr(&v11);
  std::shared_ptr<proto::MiracleRingDataNotify>::~shared_ptr((std::shared_ptr<proto::MiracleRingDataNotify> *const)(v1 + 32));
  if ( v12 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 927: range 0000000016CA7596-0000000016CA863B
int32_t __cdecl PlayerMiracleRingComp::calcDeliverTagCount(
        PlayerMiracleRingComp *const this,
        const std::vector<long unsigned int> *food_equip_guid_vec,
        const std::vector<ItemParam> *item_param_vec)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  __gnu_cxx::__normal_iterator<long unsigned int const*,std::vector<long unsigned int> >::reference v6; // rax
  PlayerItemComp *ItemComp; // rax
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  char v11; // r15
  std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  common::milog::MiLogStream *v16; // r14
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // r14
  std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  std::unordered_map<unsigned int,std::vector<data::MiracleTag>> *p_item_to_tag_map; // r14
  std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  bool v25; // r14
  common::milog::MiLogStream *v26; // r14
  std::unordered_map<unsigned int,unsigned int> *p_drop_tag_to_count_map; // rcx
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v28; // rax
  unsigned int *v29; // rdx
  SelectType_0 v30; // r14d
  std::unordered_map<unsigned int,unsigned int> *v31; // rcx
  unsigned int *p_value; // rsi
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v33; // rax
  SelectType_0 *v34; // rdx
  char v35; // cl
  char v36; // r14
  const ItemParam *v37; // r15
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // rax
  const ItemParam *v39; // r15
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v40; // rax
  bool v41; // r15
  common::milog::MiLogStream *v42; // rbx
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v45; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v46; // rax
  bool v47; // bl
  common::milog::MiLogStream *v48; // rbx
  unsigned int count; // ebx
  std::unordered_map<unsigned int,unsigned int> *v50; // rcx
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v51; // rax
  unsigned int *v52; // rdx
  SelectType v53; // ebx
  std::unordered_map<unsigned int,unsigned int> *v54; // rcx
  unsigned int *v55; // rsi
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v56; // rax
  SelectType *v57; // rdx
  char v58; // cl
  int32_t result; // eax
  bool v60; // [rsp+17h] [rbp-169h]
  unsigned int value; // [rsp+38h] [rbp-148h] BYREF
  unsigned int val; // [rsp+3Ch] [rbp-144h] BYREF
  std::vector<long unsigned int>::const_iterator __for_begin; // [rsp+40h] [rbp-140h] BYREF
  std::vector<long unsigned int>::const_iterator __for_end; // [rsp+48h] [rbp-138h] BYREF
  std::vector<data::MiracleTag>::const_iterator __for_begin_0; // [rsp+50h] [rbp-130h] BYREF
  std::vector<data::MiracleTag>::const_iterator __for_end_0; // [rsp+58h] [rbp-128h] BYREF
  char *v68; // [rsp+60h] [rbp-120h] BYREF
  const std::vector<long unsigned int> *__for_range; // [rsp+68h] [rbp-118h]
  const std::vector<ItemParam> *__for_range_1; // [rsp+70h] [rbp-110h]
  const ItemParam *item_param; // [rsp+78h] [rbp-108h]
  const std::vector<data::MiracleTag> *tag_vec_0; // [rsp+80h] [rbp-100h]
  const std::vector<data::MiracleTag> *__for_range_2; // [rsp+88h] [rbp-F8h]
  const data::MiracleTag *tag_0; // [rsp+90h] [rbp-F0h]
  const std::vector<data::MiracleTag> *tag_vec; // [rsp+98h] [rbp-E8h]
  const std::vector<data::MiracleTag> *__for_range_0; // [rsp+A0h] [rbp-E0h]
  const data::MiracleTag *tag; // [rsp+A8h] [rbp-D8h]
  std::shared_ptr<Config> v78; // [rsp+B0h] [rbp-D0h] BYREF
  std::shared_ptr<Config> v79; // [rsp+C0h] [rbp-C0h] BYREF
  common::milog::MiLogStream v80; // [rsp+D0h] [rbp-B0h] BYREF
  char v81[144]; // [rsp+F0h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v81;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 14 equip_guid:928 64 16 13 equip_ptr:930";
  *(_QWORD *)(v3 + 16) = PlayerMiracleRingComp::calcDeliverTagCount;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202178560;
  __for_range = food_equip_guid_vec;
  __for_begin._M_current = std::vector<unsigned long>::begin(food_equip_guid_vec)._M_current;
  __for_end._M_current = std::vector<unsigned long>::end(food_equip_guid_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned long const*,std::vector<unsigned long>>(&__for_begin, &__for_end) )
  {
    v6 = __gnu_cxx::__normal_iterator<unsigned long const*,std::vector<unsigned long>>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_QWORD *)(v3 + 32) = *v6;
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    ItemComp = Player::getItemComp(this->player_);
    PlayerItemComp::findItemInPack<Equip>((PlayerItemComp *const)(v3 + 64), (uint64_t)ItemComp, *(_QWORD *)(v3 + 32));
    if ( std::operator==<Equip>((const std::shared_ptr<Equip> *)(v3 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v80,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
        "calcDeliverTagCount",
        933);
      v8 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
             &v80,
             (const char (*)[28])"findItem equip failed, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
      v10 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v9, (const char (*)[13])" equip_guid:");
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v10, (const unsigned __int64 *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v80);
    }
    else
    {
      v11 = 0;
      v12 = std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      value = Item::getItemId(v12);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v78);
      v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v78);
      v60 = 1;
      if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::vector<data::MiracleTag>> const,unsigned int>(
             &v13->design_config.txt_config_mgr.miracle_ring_config_mgr.item_to_tag_map,
             &value) )
      {
        v14 = std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        val = Item::getItemId(v14);
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v79);
        v11 = 1;
        v15 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v79);
        if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,unsigned int> const,unsigned int>(
               &v15->design_config.txt_config_mgr.miracle_ring_config_mgr.item_to_value_map,
               &val) )
        {
          v60 = 0;
        }
      }
      if ( v11 )
        std::shared_ptr<Config>::~shared_ptr(&v79);
      std::shared_ptr<Config>::~shared_ptr(&v78);
      if ( v60 )
      {
        common::milog::MiLogStream::create(
          &v80,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
          "calcDeliverTagCount",
          939);
        v16 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                &v80,
                (const char (*)[37])"item is not allowed to deliver, uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        value = Player::getUid(this->player_);
        v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &value);
        v18 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v17, (const char (*)[11])", item_id:");
        v19 = std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        val = Item::getItemId(v19);
        v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &val);
        v21 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v20, (const char (*)[14])", equip_guid:");
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
          v21,
          (const unsigned __int64 *)(v3 + 32));
        common::milog::MiLogStream::~MiLogStream(&v80);
      }
      else
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v79);
        p_item_to_tag_map = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v79)->design_config.txt_config_mgr.miracle_ring_config_mgr.item_to_tag_map;
        v23 = std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        val = Item::getItemId(v23);
        tag_vec = std::unordered_map<unsigned int,std::vector<data::MiracleTag>>::at(p_item_to_tag_map, &val);
        std::shared_ptr<Config>::~shared_ptr(&v79);
        __for_range_0 = tag_vec;
        __for_begin_0._M_current = std::vector<data::MiracleTag>::begin(tag_vec)._M_current;
        __for_end_0._M_current = std::vector<data::MiracleTag>::end(__for_range_0)._M_current;
        while ( __gnu_cxx::operator!=<data::MiracleTag const*,std::vector<data::MiracleTag>>(
                  &__for_begin_0,
                  &__for_end_0) )
        {
          tag = __gnu_cxx::__normal_iterator<data::MiracleTag const*,std::vector<data::MiracleTag>>::operator*(&__for_begin_0);
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v79);
          v24 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v79);
          v25 = !common::tools::MiscUtils::isContains<std::unordered_map<data::MiracleTag,unsigned int> const,data::MiracleTag>(
                   &v24->design_config.txt_config_mgr.miracle_ring_config_mgr.tag_to_drop_map,
                   tag);
          std::shared_ptr<Config>::~shared_ptr(&v79);
          if ( v25 )
          {
            common::milog::MiLogStream::create(
              &v80,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
              "calcDeliverTagCount",
              947);
            v26 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                    &v80,
                    (const char (*)[33])"find MiracleTagDrop failed, tag:");
            if ( *(_BYTE *)(((unsigned __int64)tag >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)tag & 7) + 3) >= *(_BYTE *)(((unsigned __int64)tag >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(tag);
            }
            v68 = (char *)data::enumValToStr((data::MiracleTag)*tag);
            common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v26, (const char *const *)&v68);
            common::milog::MiLogStream::~MiLogStream(&v80);
          }
          else
          {
            p_drop_tag_to_count_map = &this->drop_tag_to_count_map_;
            if ( *(_BYTE *)(((unsigned __int64)tag >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)tag & 7) + 3) >= *(_BYTE *)(((unsigned __int64)tag >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(tag);
            }
            val = *tag;
            v28 = std::unordered_map<unsigned int,unsigned int>::operator[](p_drop_tag_to_count_map, &val);
            v29 = v28;
            if ( *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v28 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v28);
            }
            v30 = SAFE_ADD<unsigned int,int>(*v29, 1);
            v31 = &this->drop_tag_to_count_map_;
            if ( *(_BYTE *)(((unsigned __int64)tag >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)tag & 7) + 3) >= *(_BYTE *)(((unsigned __int64)tag >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(tag);
            }
            value = *tag;
            p_value = &value;
            v33 = std::unordered_map<unsigned int,unsigned int>::operator[](v31, &value);
            v34 = v33;
            v35 = *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000);
            if ( v35 != 0 && (char)(((unsigned __int8)v33 & 7) + 3) >= v35 )
            {
              LOBYTE(p_value) = v35 != 0;
              __asan_report_store4(v33, p_value, v33);
            }
            *v34 = v30;
          }
          __gnu_cxx::__normal_iterator<data::MiracleTag const*,std::vector<data::MiracleTag>>::operator++(&__for_begin_0);
        }
      }
    }
    std::shared_ptr<Equip>::~shared_ptr((std::shared_ptr<Equip> *const)(v3 + 64));
    __gnu_cxx::__normal_iterator<unsigned long const*,std::vector<unsigned long>>::operator++(&__for_begin);
  }
  __for_range_1 = item_param_vec;
  __for_begin._M_current = (const unsigned __int64 *)std::vector<ItemParam>::begin(item_param_vec)._M_current;
  __for_end._M_current = (const unsigned __int64 *)std::vector<ItemParam>::end(__for_range_1)._M_current;
  while ( __gnu_cxx::operator!=<ItemParam const*,std::vector<ItemParam>>(
            (const __gnu_cxx::__normal_iterator<const ItemParam*,std::vector<ItemParam> > *)&__for_begin,
            (const __gnu_cxx::__normal_iterator<const ItemParam*,std::vector<ItemParam> > *)&__for_end) )
  {
    item_param = __gnu_cxx::__normal_iterator<ItemParam const*,std::vector<ItemParam>>::operator*((const __gnu_cxx::__normal_iterator<const ItemParam*,std::vector<ItemParam> > *const)&__for_begin);
    v36 = 0;
    v37 = item_param;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v78);
    v38 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v78);
    v41 = 1;
    if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::vector<data::MiracleTag>> const,unsigned int>(
           &v38->design_config.txt_config_mgr.miracle_ring_config_mgr.item_to_tag_map,
           &v37->item_id) )
    {
      v39 = item_param;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v79);
      v36 = 1;
      v40 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v79);
      if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,unsigned int> const,unsigned int>(
             &v40->design_config.txt_config_mgr.miracle_ring_config_mgr.item_to_value_map,
             &v39->item_id) )
      {
        v41 = 0;
      }
    }
    if ( v36 )
      std::shared_ptr<Config>::~shared_ptr(&v79);
    std::shared_ptr<Config>::~shared_ptr(&v78);
    if ( v41 )
    {
      common::milog::MiLogStream::create(
        &v80,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
        "calcDeliverTagCount",
        959);
      v42 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
              &v80,
              (const char (*)[37])"item is not allowed to deliver, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      v43 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v42, &val);
      v44 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v43, (const char (*)[11])", item_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v44, &item_param->item_id);
      common::milog::MiLogStream::~MiLogStream(&v80);
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v79);
      v45 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v79);
      tag_vec_0 = std::unordered_map<unsigned int,std::vector<data::MiracleTag>>::at(
                    &v45->design_config.txt_config_mgr.miracle_ring_config_mgr.item_to_tag_map,
                    &item_param->item_id);
      std::shared_ptr<Config>::~shared_ptr(&v79);
      __for_range_2 = tag_vec_0;
      __for_begin_0._M_current = std::vector<data::MiracleTag>::begin(tag_vec_0)._M_current;
      __for_end_0._M_current = std::vector<data::MiracleTag>::end(__for_range_2)._M_current;
      while ( __gnu_cxx::operator!=<data::MiracleTag const*,std::vector<data::MiracleTag>>(&__for_begin_0, &__for_end_0) )
      {
        tag_0 = __gnu_cxx::__normal_iterator<data::MiracleTag const*,std::vector<data::MiracleTag>>::operator*(&__for_begin_0);
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v79);
        v46 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v79);
        v47 = !common::tools::MiscUtils::isContains<std::unordered_map<data::MiracleTag,unsigned int> const,data::MiracleTag>(
                 &v46->design_config.txt_config_mgr.miracle_ring_config_mgr.tag_to_drop_map,
                 tag_0);
        std::shared_ptr<Config>::~shared_ptr(&v79);
        if ( v47 )
        {
          common::milog::MiLogStream::create(
            &v80,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
            "calcDeliverTagCount",
            967);
          v48 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                  &v80,
                  (const char (*)[33])"find MiracleTagDrop failed, tag:");
          if ( *(_BYTE *)(((unsigned __int64)tag_0 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)tag_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)tag_0 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(tag_0);
          }
          v68 = (char *)data::enumValToStr((data::MiracleTag)*tag_0);
          common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v48, (const char *const *)&v68);
          common::milog::MiLogStream::~MiLogStream(&v80);
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&item_param->count >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)item_param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_param->count >> 3)
                                                                     + 0x7FFF8000) )
          {
            __asan_report_load4(&item_param->count);
          }
          count = item_param->count;
          v50 = &this->drop_tag_to_count_map_;
          if ( *(_BYTE *)(((unsigned __int64)tag_0 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)tag_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)tag_0 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(tag_0);
          }
          val = *tag_0;
          v51 = std::unordered_map<unsigned int,unsigned int>::operator[](v50, &val);
          v52 = v51;
          if ( *(_BYTE *)(((unsigned __int64)v51 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v51 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v51 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v51);
          }
          v53 = SAFE_ADD<unsigned int,unsigned int>(*v52, count);
          v54 = &this->drop_tag_to_count_map_;
          if ( *(_BYTE *)(((unsigned __int64)tag_0 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)tag_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)tag_0 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(tag_0);
          }
          value = *tag_0;
          v55 = &value;
          v56 = std::unordered_map<unsigned int,unsigned int>::operator[](v54, &value);
          v57 = v56;
          v58 = *(_BYTE *)(((unsigned __int64)v56 >> 3) + 0x7FFF8000);
          if ( v58 != 0 && (char)(((unsigned __int8)v56 & 7) + 3) >= v58 )
          {
            LOBYTE(v55) = v58 != 0;
            __asan_report_store4(v56, v55, v56);
          }
          *v57 = v53;
        }
        __gnu_cxx::__normal_iterator<data::MiracleTag const*,std::vector<data::MiracleTag>>::operator++(&__for_begin_0);
      }
    }
    __gnu_cxx::__normal_iterator<ItemParam const*,std::vector<ItemParam>>::operator++((__gnu_cxx::__normal_iterator<const ItemParam*,std::vector<ItemParam> > *const)&__for_begin);
  }
  if ( std::unordered_map<unsigned int,unsigned int>::empty(&this->drop_tag_to_count_map_) )
  {
    common::milog::MiLogStream::create(
      &v80,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
      "calcDeliverTagCount",
      975);
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      &v80,
      (const char (*)[29])"drop_tag_to_count_map_ empty");
    common::milog::MiLogStream::~MiLogStream(&v80);
    result = -1;
  }
  else
  {
    result = 0;
  }
  if ( v81 == (char *)v3 )
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

// Line 982: range 0000000016CA863C-0000000016CA87B3
bool __cdecl PlayerMiracleRingComp::isInMiracleRingCd(PlayerMiracleRingComp *const this)
{
  time_t last_take_reward_time; // rbx
  time_t Now; // rcx
  __int64 v4; // rbx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::shared_ptr<Config> v6; // [rsp+10h] [rbp-40h] BYREF
  common::milog::MiLogStream v7; // [rsp+20h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->last_take_reward_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_take_reward_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_take_reward_time_);
  }
  last_take_reward_time = this->last_take_reward_time_;
  if ( last_take_reward_time <= common::tools::TimeUtils::getNow() )
  {
    Now = common::tools::TimeUtils::getNow();
    if ( *(_BYTE *)(((unsigned __int64)&this->last_take_reward_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->last_take_reward_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->last_take_reward_time_);
    }
    v4 = Now - this->last_take_reward_time_;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v6);
    v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v6);
    LOBYTE(v4) = v4 < ConstValueExcelConfigMgr::getMiracleRingCd(&v5->design_config.txt_config_mgr.const_value_config_mgr);
    std::shared_ptr<Config>::~shared_ptr(&v6);
    return (_BYTE)v4 != 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
      "isInMiracleRingCd",
      985);
    common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
      &v7,
      (const char (*)[38])"last_take_reward_time_ great than now");
    common::milog::MiLogStream::~MiLogStream(&v7);
    return 1;
  }
};

// Line 996: range 0000000016CA87B4-0000000016CA8A3D
void __cdecl PlayerMiracleRingComp::onEnterCombat(
        PlayerMiracleRingComp *const this,
        const EnterCombatEvent *enter_combat_event)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rcx
  Scene *v6; // rsi
  common::milog::MiLogStream v7; // [rsp+10h] [rbp-90h] BYREF
  char v8[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 scene_ptr:997";
  *(_QWORD *)(v2 + 16) = PlayerMiracleRingComp::onEnterCombat;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 32));
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
      "onEnterCombat",
      1000);
    v5 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
           &v7,
           (const char (*)[23])"getScene fail, player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v5, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v7);
  }
  else
  {
    if ( *(char *)(((unsigned __int64)&this->is_gadget_created_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->is_gadget_created_);
    if ( this->is_gadget_created_ )
    {
      v6 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      PlayerMiracleRingComp::tryDestroyMiracleRingGadgetAndQuitScene(
        this,
        v6,
        &proto_log::PlayerLogBodyMiracleRingDestroy::REASON_ENTER_COMBAT,
        1);
    }
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 32));
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1011: range 0000000016CA8A3E-0000000016CA8E0C
GadgetPtr __cdecl PlayerMiracleRingComp::findMiracleRing(PlayerMiracleRingComp *const this)
{
  PlayerMiracleRingComp *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rcx
  common::milog::MiLogStream *v6; // r14
  uint32_t v7; // esi
  GadgetPtr result; // rax
  PlayerMiracleRingComp *thisa; // [rsp+0h] [rbp-B0h]
  unsigned int val; // [rsp+1Ch] [rbp-94h] BYREF
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-90h] BYREF
  char v12[112]; // [rsp+40h] [rbp-70h] BYREF

  thisa = v1;
  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 scene_ptr:1012";
  *(_QWORD *)(v2 + 16) = PlayerMiracleRingComp::findMiracleRing;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&v1->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(v1->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 32));
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
      "findMiracleRing",
      1015);
    v5 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
           &v11,
           (const char (*)[23])"getScene fail, player:");
    if ( *(_BYTE *)(((unsigned __int64)&v1->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v5, v1->player_);
    common::milog::MiLogStream::~MiLogStream(&v11);
    std::shared_ptr<Gadget>::shared_ptr((std::shared_ptr<Gadget> *const)this, 0LL);
  }
  else
  {
    if ( *(char *)(((unsigned __int64)&v1->is_gadget_created_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&v1->is_gadget_created_);
    if ( !v1->is_gadget_created_ )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
        "findMiracleRing",
        1020);
      v6 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
             &v11,
             (const char (*)[47])"miracle ring has not been created, error, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&v1->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(v1->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
      common::milog::MiLogStream::~MiLogStream(&v11);
      std::shared_ptr<Gadget>::shared_ptr((std::shared_ptr<Gadget> *const)this, 0LL);
    }
    else
    {
      v7 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      if ( *(_BYTE *)(((unsigned __int64)&thisa->gadget_entity_id_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)thisa + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->gadget_entity_id_ >> 3)
                                                              + 0x7FFF8000) )
      {
        __asan_report_load4(&thisa->gadget_entity_id_);
      }
      if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_store16(this);
      Scene::findEntity<Gadget>((const Scene *const)this, v7);
    }
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 32));
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<Gadget,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 1028: range 0000000016CA8E0E-0000000016CAA379
int32_t __cdecl PlayerMiracleRingComp::chooseDropItemsFromReward(
        PlayerMiracleRingComp *const this,
        const std::vector<ItemParam> *item_param_vec,
        std::vector<ItemParam> *add_item_param_vec,
        std::vector<ItemParam> *drop_item_param_vec)
{
  std::map<unsigned int,ItemParam> *v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  PlayerItemComp *ItemComp; // rax
  PlayerItemComp *v12; // rax
  PlayerItemComp *v13; // rax
  ItemExcelConfigMgr *p_item_config_mgr; // rcx
  common::milog::MiLogStream *v15; // r14
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  int32_t v18; // r14d
  data::ItemType item_type; // eax
  const data::MaterialExcelConfig *v20; // rax
  PlayerItemComp *v21; // rcx
  uint32_t v22; // ecx
  uint32_t v23; // eax
  uint32_t v24; // ecx
  uint32_t v25; // eax
  uint32_t count; // eax
  uint32_t v27; // eax
  uint32_t v28; // eax
  uint32_t v29; // eax
  common::milog::MiLogStream *v30; // r14
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+20h] [rbp-1C0h] BYREF
  uint32_t material_item_limit; // [rsp+24h] [rbp-1BCh]
  uint32_t weapon_item_limit; // [rsp+28h] [rbp-1B8h]
  uint32_t reliquary_item_limit; // [rsp+2Ch] [rbp-1B4h]
  uint32_t total_material_num; // [rsp+30h] [rbp-1B0h]
  uint32_t total_weapon_num; // [rsp+34h] [rbp-1ACh]
  uint32_t total_reliquary_num; // [rsp+38h] [rbp-1A8h]
  uint32_t drop_count_0; // [rsp+3Ch] [rbp-1A4h]
  uint32_t add_count_0; // [rsp+40h] [rbp-1A0h]
  uint32_t drop_count_1; // [rsp+44h] [rbp-19Ch]
  uint32_t add_count_1; // [rsp+48h] [rbp-198h]
  uint32_t cur_material_count; // [rsp+4Ch] [rbp-194h]
  uint32_t drop_count; // [rsp+50h] [rbp-190h]
  uint32_t add_count; // [rsp+54h] [rbp-18Ch]
  std::map<unsigned int,ItemParam>::iterator __for_begin; // [rsp+58h] [rbp-188h] BYREF
  std::map<unsigned int,ItemParam>::iterator __for_end; // [rsp+60h] [rbp-180h] BYREF
  const std::vector<unsigned int> *direct_enter_bag_item_vec; // [rsp+68h] [rbp-178h]
  std::map<unsigned int,ItemParam> *__for_range; // [rsp+70h] [rbp-170h]
  const std::pair<unsigned int const,ItemParam> *v56; // [rsp+78h] [rbp-168h]
  std::tuple_element<0,const std::pair<unsigned int const,ItemParam> >::type *item_id; // [rsp+80h] [rbp-160h]
  std::tuple_element<1,const std::pair<unsigned int const,ItemParam> >::type *item_param; // [rsp+88h] [rbp-158h]
  const data::ItemConfig *item_config_ptr; // [rsp+90h] [rbp-150h]
  const data::MaterialExcelConfig *material_config_ptr; // [rsp+98h] [rbp-148h]
  std::shared_ptr<Config> v61; // [rsp+A0h] [rbp-140h] BYREF
  std::shared_ptr<Config> v62; // [rsp+B0h] [rbp-130h] BYREF
  std::shared_ptr<Config> v63; // [rsp+C0h] [rbp-120h] BYREF
  std::shared_ptr<Config> v64; // [rsp+D0h] [rbp-110h] BYREF
  common::milog::MiLogStream v65; // [rsp+E0h] [rbp-100h] BYREF
  std::map<unsigned int,ItemParam> v66; // [rsp+100h] [rbp-E0h] BYREF
  char v67[176]; // [rsp+130h] [rbp-B0h] BYREF

  v4 = (std::map<unsigned int,ItemParam> *)v67;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = (std::map<unsigned int,ItemParam> *)v5;
  }
  *(_QWORD *)v4->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v4->_M_t._M_impl._M_header._M_color = "1 48 48 19 item_param_map:1029";
  v4->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)PlayerMiracleRingComp::chooseDropItemsFromReward;
  v6 = (_DWORD *)((unsigned __int64)v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61937;
  v6[536862723] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getItemComp(this->player_);
  PlayerItemComp::mergeItemParam(&v66, item_param_vec);
  std::map<unsigned int,ItemParam>::map(v4 + 1, &v66);
  std::map<unsigned int,ItemParam>::~map(&v66);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v61);
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v61);
  direct_enter_bag_item_vec = ConstValueExcelConfigMgr::getMiracleRingAddPackItemVec(&v7->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v61);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v62);
  v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v62);
  material_item_limit = ConstValueExcelConfigMgr::getMaterialItemLimit(&v8->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v62);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v63);
  v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v63);
  weapon_item_limit = ConstValueExcelConfigMgr::getWeaponItemLimit(&v9->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v63);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v64);
  v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v64);
  reliquary_item_limit = ConstValueExcelConfigMgr::getReliquaryItemLimit(&v10->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v64);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  ItemComp = Player::getItemComp(this->player_);
  total_material_num = PlayerItemComp::getTotalMaterialNum(ItemComp);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v12 = Player::getItemComp(this->player_);
  total_weapon_num = PlayerItemComp::getTotalWeaponNum(v12);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v13 = Player::getItemComp(this->player_);
  total_reliquary_num = PlayerItemComp::getTotalReliquaryNum(v13);
  __for_range = v4 + 1;
  __for_begin._M_node = std::map<unsigned int,ItemParam>::begin(v4 + 1)._M_node;
  __for_end._M_node = std::map<unsigned int,ItemParam>::end(v4 + 1)._M_node;
  while ( 1 )
  {
    if ( !std::operator!=(&__for_begin, &__for_end) )
    {
      v18 = 0;
      goto LABEL_136;
    }
    v56 = std::_Rb_tree_iterator<std::pair<unsigned int const,ItemParam>>::operator*(&__for_begin);
    item_id = std::get<0ul,unsigned int const,ItemParam>(v56);
    item_param = (std::tuple_element<1,const std::pair<unsigned int const,ItemParam> >::type *)std::get<1ul,unsigned int const,ItemParam>(v56);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v64);
    p_item_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v64)->design_config.txt_config_mgr.item_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)item_param >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)item_param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_param >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(item_param);
    }
    item_config_ptr = ItemExcelConfigMgr::findItemConfig(p_item_config_mgr, item_param->item_id);
    std::shared_ptr<Config>::~shared_ptr(&v64);
    if ( !item_config_ptr )
    {
      common::milog::MiLogStream::create(
        &v65,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
        "chooseDropItemsFromReward",
        1044);
      v15 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
              &v65,
              (const char (*)[28])"findItemConfig failed, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
LABEL_19:
      val = Player::getUid(this->player_);
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
      v17 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v16, (const char (*)[10])" item_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &item_param->item_id);
      common::milog::MiLogStream::~MiLogStream(&v65);
      v18 = -1;
      goto LABEL_136;
    }
    if ( *(_BYTE *)(((unsigned __int64)&item_config_ptr->item_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)item_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_config_ptr->item_type >> 3)
                                                                     + 0x7FFF8000) )
    {
      __asan_report_load4(&item_config_ptr->item_type);
    }
    item_type = item_config_ptr->item_type;
    if ( item_type == ITEM_WEAPON )
    {
      if ( *(_BYTE *)(((unsigned __int64)&item_param->count >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)item_param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_param->count >> 3)
                                                                 + 0x7FFF8000) )
      {
        __asan_report_load4(&item_param->count);
      }
      if ( weapon_item_limit >= item_param->count + total_weapon_num )
      {
        if ( *(_BYTE *)(((unsigned __int64)item_param >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)item_param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_param >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(item_param);
        }
        LODWORD(v64._M_ptr) = item_param->item_id;
        if ( *(_BYTE *)(((unsigned __int64)&item_param->count >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)item_param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_param->count >> 3)
                                                                   + 0x7FFF8000) )
        {
          __asan_report_load4(&item_param->count);
        }
        goto LABEL_130;
      }
      if ( total_weapon_num < weapon_item_limit )
      {
        if ( *(_BYTE *)(((unsigned __int64)&item_param->count >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)item_param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_param->count >> 3)
                                                                   + 0x7FFF8000) )
        {
          __asan_report_load4(&item_param->count);
        }
        count = item_param->count + total_weapon_num - weapon_item_limit;
      }
      else
      {
        count = item_param->count;
      }
      drop_count_0 = count;
      if ( total_weapon_num >= weapon_item_limit )
        v27 = 0;
      else
        v27 = weapon_item_limit - total_weapon_num;
      add_count_0 = v27;
      if ( v27 )
      {
        if ( *(_BYTE *)(((unsigned __int64)item_param >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)item_param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_param >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(item_param);
        }
        LODWORD(v64._M_ptr) = item_param->item_id;
        HIDWORD(v64._M_ptr) = add_count_0;
        v64._M_refcount._M_pi = 0LL;
        std::vector<ItemParam>::push_back(add_item_param_vec, (std::vector<ItemParam>::value_type *)&v64);
      }
      if ( *(_BYTE *)(((unsigned __int64)item_param >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)item_param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_param >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(item_param);
      }
      LODWORD(v64._M_ptr) = item_param->item_id;
      HIDWORD(v64._M_ptr) = drop_count_0;
      v64._M_refcount._M_pi = 0LL;
      std::vector<ItemParam>::push_back(drop_item_param_vec, (std::vector<ItemParam>::value_type *)&v64);
      goto LABEL_134;
    }
    if ( item_type > ITEM_WEAPON )
      break;
    if ( item_type == ITEM_RELIQUARY )
    {
      if ( *(_BYTE *)(((unsigned __int64)&item_param->count >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)item_param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_param->count >> 3)
                                                                 + 0x7FFF8000) )
      {
        __asan_report_load4(&item_param->count);
      }
      if ( reliquary_item_limit >= item_param->count + total_reliquary_num )
      {
        if ( *(_BYTE *)(((unsigned __int64)item_param >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)item_param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_param >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(item_param);
        }
        LODWORD(v64._M_ptr) = item_param->item_id;
        if ( *(_BYTE *)(((unsigned __int64)&item_param->count >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)item_param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_param->count >> 3)
                                                                   + 0x7FFF8000) )
        {
          __asan_report_load4(&item_param->count);
        }
        goto LABEL_130;
      }
      if ( total_reliquary_num < reliquary_item_limit )
      {
        if ( *(_BYTE *)(((unsigned __int64)&item_param->count >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)item_param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_param->count >> 3)
                                                                   + 0x7FFF8000) )
        {
          __asan_report_load4(&item_param->count);
        }
        v28 = item_param->count + total_reliquary_num - reliquary_item_limit;
      }
      else
      {
        v28 = item_param->count;
      }
      drop_count_1 = v28;
      if ( total_reliquary_num >= reliquary_item_limit )
        v29 = 0;
      else
        v29 = reliquary_item_limit - total_reliquary_num;
      add_count_1 = v29;
      if ( v29 )
      {
        if ( *(_BYTE *)(((unsigned __int64)item_param >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)item_param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_param >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(item_param);
        }
        LODWORD(v64._M_ptr) = item_param->item_id;
        HIDWORD(v64._M_ptr) = add_count_1;
        v64._M_refcount._M_pi = 0LL;
        std::vector<ItemParam>::push_back(add_item_param_vec, (std::vector<ItemParam>::value_type *)&v64);
      }
      if ( *(_BYTE *)(((unsigned __int64)item_param >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)item_param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_param >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(item_param);
      }
      LODWORD(v64._M_ptr) = item_param->item_id;
      HIDWORD(v64._M_ptr) = drop_count_1;
      v64._M_refcount._M_pi = 0LL;
      std::vector<ItemParam>::push_back(drop_item_param_vec, (std::vector<ItemParam>::value_type *)&v64);
      goto LABEL_134;
    }
    if ( item_type == ITEM_VIRTUAL )
    {
      if ( *(_BYTE *)(((unsigned __int64)item_param >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)item_param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_param >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(item_param);
      }
      LODWORD(v64._M_ptr) = item_param->item_id;
      if ( *(_BYTE *)(((unsigned __int64)&item_param->count >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)item_param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_param->count >> 3)
                                                                 + 0x7FFF8000) )
      {
        __asan_report_load4(&item_param->count);
      }
      goto LABEL_130;
    }
    if ( item_type != ITEM_MATERIAL )
      break;
    if ( item_config_ptr )
      v20 = (const data::MaterialExcelConfig *)__dynamic_cast(
                                                 item_config_ptr,
                                                 (const struct __class_type_info *)&`typeinfo for'data::ItemConfig,
                                                 (const struct __class_type_info *)&`typeinfo for'data::MaterialExcelConfig,
                                                 0LL);
    else
      v20 = 0LL;
    material_config_ptr = v20;
    if ( !v20 )
    {
      common::milog::MiLogStream::create(
        &v65,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
        "chooseDropItemsFromReward",
        1056);
      v15 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
              &v65,
              (const char (*)[34])"dynamic_pointer_cast failed, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      goto LABEL_19;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v21 = Player::getItemComp(this->player_);
    if ( *(_BYTE *)(((unsigned __int64)item_param >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)item_param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_param >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(item_param);
    }
    cur_material_count = PlayerItemComp::getPackMaterialCount(v21, item_param->item_id);
    if ( common::tools::MiscUtils::isContains<unsigned int>(direct_enter_bag_item_vec, item_id) )
    {
      if ( *(_BYTE *)(((unsigned __int64)item_param >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)item_param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_param >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(item_param);
      }
      LODWORD(v64._M_ptr) = item_param->item_id;
      if ( *(_BYTE *)(((unsigned __int64)&item_param->count >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)item_param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_param->count >> 3)
                                                                 + 0x7FFF8000) )
      {
        __asan_report_load4(&item_param->count);
      }
LABEL_130:
      HIDWORD(v64._M_ptr) = item_param->count;
      v64._M_refcount._M_pi = 0LL;
      std::vector<ItemParam>::push_back(add_item_param_vec, (std::vector<ItemParam>::value_type *)&v64);
      goto LABEL_134;
    }
    if ( cur_material_count || material_item_limit >= total_material_num + 1 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&item_param->count >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)item_param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_param->count >> 3)
                                                                 + 0x7FFF8000) )
      {
        __asan_report_load4(&item_param->count);
      }
      v22 = item_param->count + cur_material_count;
      if ( *(_BYTE *)(((unsigned __int64)&material_config_ptr->stack_limit >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&material_config_ptr->stack_limit >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&material_config_ptr->stack_limit);
      }
      if ( v22 <= material_config_ptr->stack_limit )
      {
        if ( *(_BYTE *)(((unsigned __int64)item_param >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)item_param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_param >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(item_param);
        }
        LODWORD(v64._M_ptr) = item_param->item_id;
        if ( *(_BYTE *)(((unsigned __int64)&item_param->count >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)item_param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_param->count >> 3)
                                                                   + 0x7FFF8000) )
        {
          __asan_report_load4(&item_param->count);
        }
        goto LABEL_130;
      }
      if ( cur_material_count < material_config_ptr->stack_limit )
      {
        if ( *(_BYTE *)(((unsigned __int64)&item_param->count >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)item_param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_param->count >> 3)
                                                                   + 0x7FFF8000) )
        {
          __asan_report_load4(&item_param->count);
        }
        v24 = item_param->count + cur_material_count;
        if ( *(_BYTE *)(((unsigned __int64)&material_config_ptr->stack_limit >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&material_config_ptr->stack_limit >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&material_config_ptr->stack_limit);
        }
        v23 = v24 - material_config_ptr->stack_limit;
      }
      else
      {
        v23 = item_param->count;
      }
      drop_count = v23;
      if ( *(_BYTE *)(((unsigned __int64)&material_config_ptr->stack_limit >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&material_config_ptr->stack_limit >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&material_config_ptr->stack_limit);
      }
      if ( cur_material_count >= material_config_ptr->stack_limit )
        v25 = 0;
      else
        v25 = material_config_ptr->stack_limit - cur_material_count;
      add_count = v25;
      if ( v25 )
      {
        if ( *(_BYTE *)(((unsigned __int64)item_param >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)item_param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_param >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(item_param);
        }
        LODWORD(v64._M_ptr) = item_param->item_id;
        HIDWORD(v64._M_ptr) = add_count;
        v64._M_refcount._M_pi = 0LL;
        std::vector<ItemParam>::push_back(add_item_param_vec, (std::vector<ItemParam>::value_type *)&v64);
      }
      if ( *(_BYTE *)(((unsigned __int64)item_param >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)item_param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_param >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(item_param);
      }
      LODWORD(v64._M_ptr) = item_param->item_id;
      HIDWORD(v64._M_ptr) = drop_count;
      v64._M_refcount._M_pi = 0LL;
      std::vector<ItemParam>::push_back(drop_item_param_vec, (std::vector<ItemParam>::value_type *)&v64);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)item_param >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)item_param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_param >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(item_param);
      }
      LODWORD(v64._M_ptr) = item_param->item_id;
      if ( *(_BYTE *)(((unsigned __int64)&item_param->count >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)item_param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_param->count >> 3)
                                                                 + 0x7FFF8000) )
      {
        __asan_report_load4(&item_param->count);
      }
      HIDWORD(v64._M_ptr) = item_param->count;
      v64._M_refcount._M_pi = 0LL;
      std::vector<ItemParam>::push_back(drop_item_param_vec, (std::vector<ItemParam>::value_type *)&v64);
    }
LABEL_134:
    std::_Rb_tree_iterator<std::pair<unsigned int const,ItemParam>>::operator++(&__for_begin);
  }
  common::milog::MiLogStream::create(
    &v65,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
    "chooseDropItemsFromReward",
    1132);
  v30 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
          &v65,
          (const char (*)[24])"invalid item type, uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, &val);
  v32 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v31, (const char (*)[12])" item_type:");
  v33 = common::milog::MiLogStream::operator<<<data::ItemType,(data::ItemType*)0>(v32, &item_config_ptr->item_type);
  v34 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v33, (const char (*)[13])" item_param:");
  operator<<(v34, item_param);
  common::milog::MiLogStream::~MiLogStream(&v65);
  v18 = -1;
LABEL_136:
  std::map<unsigned int,ItemParam>::~map(v4 + 1);
  result = v18;
  if ( v67 == (char *)v4 )
  {
    *(_QWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v4->_M_t._M_impl.gap0 = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1140: range 0000000016CAA37A-0000000016CAA55E
void __cdecl PlayerMiracleRingComp::notifyDropResult(PlayerMiracleRingComp *const this, int32_t result)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::__shared_ptr_access<proto::MiracleRingDropResultNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<proto::MiracleRingDropResultNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rcx
  Player *player; // r14
  std::shared_ptr<proto::MiracleRingDropResultNotify> __r; // [rsp+10h] [rbp-80h] BYREF
  char v9[112]; // [rsp+20h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 15 notify_ptr:1141";
  *(_QWORD *)(v2 + 16) = PlayerMiracleRingComp::notifyDropResult;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::tools::perf::make_shared<proto::MiracleRingDropResultNotify>();
  v5 = std::__shared_ptr_access<proto::MiracleRingDropResultNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::MiracleRingDropResultNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  proto::MiracleRingDropResultNotify::set_drop_result(v5, result);
  v6 = std::__shared_ptr_access<proto::MiracleRingDropResultNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::MiracleRingDropResultNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->last_take_reward_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_take_reward_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_take_reward_time_);
  }
  proto::MiracleRingDropResultNotify::set_last_take_reward_time(v6, this->last_take_reward_time_);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  player = this->player_;
  std::dynamic_pointer_cast<google::protobuf::Message const,proto::MiracleRingDropResultNotify>(&__r);
  Player::sendMessage(player, (common::minet::ConstMessagePtr *)&__r, 0LL);
  std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
  std::shared_ptr<proto::MiracleRingDropResultNotify>::~shared_ptr((std::shared_ptr<proto::MiracleRingDropResultNotify> *const)(v2 + 32));
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1148: range 0000000016CAA560-0000000016CAABF4
void __cdecl PlayerMiracleRingComp::onTimer(PlayerMiracleRingComp *const this, uint64_t now_ms)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rcx
  common::milog::MiLogStream *v6; // rcx
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  const Vector3 *Position; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  const Vector3 *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rcx
  Scene *v16; // rsi
  common::milog::MiLogStream *v17; // rcx
  bool is_continue; // [rsp+1Fh] [rbp-B1h]
  common::milog::MiLogStream v19; // [rsp+20h] [rbp-B0h] BYREF
  char v20[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 14 scene_ptr:1157 64 16 15 avatar_ptr:1164";
  *(_QWORD *)(v2 + 16) = PlayerMiracleRingComp::onTimer;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  is_continue = 0;
  if ( *(char *)(((unsigned __int64)&this->is_gadget_created_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_gadget_created_);
  if ( this->is_gadget_created_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 32));
    if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
        "onTimer",
        1160);
      v5 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
             &v19,
             (const char (*)[23])"getScene fail, player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      operator<<(v5, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v19);
      is_continue = 1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::getAvatarComp(this->player_);
      PlayerAvatarComp::getCurAvatar((const PlayerAvatarComp *const)(v2 + 64));
      if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v2 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v19,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
          "onTimer",
          1167);
        v6 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
               &v19,
               (const char (*)[28])"avatar_ptr is null, player:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        operator<<(v6, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v19);
        is_continue = 1;
      }
      else
      {
        v7 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        Position = Entity::getPosition((const Entity *const)v7);
        if ( getDistance(&this->create_pos_, Position) <= 100.0 )
        {
          is_continue = 1;
        }
        else
        {
          common::milog::MiLogStream::create(
            &v19,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
            "onTimer",
            1174);
          v9 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
                 &v19,
                 (const char (*)[59])"distance is too long try destroy miracle ring, create_pos:");
          v10 = operator<<(v9, &this->create_pos_);
          v11 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v10, (const char (*)[13])" avatar_pos:");
          v12 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          v13 = Entity::getPosition((const Entity *const)v12);
          v14 = operator<<(v11, v13);
          v15 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v14, (const char (*)[9])" player:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          operator<<(v15, this->player_);
          common::milog::MiLogStream::~MiLogStream(&v19);
          v16 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
          PlayerMiracleRingComp::tryDestroyMiracleRingGadgetAndQuitScene(
            this,
            v16,
            &proto_log::PlayerLogBodyMiracleRingDestroy::REASON_EXIT_SIGHT,
            1);
        }
      }
      std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 64));
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 32));
  }
  if ( is_continue )
  {
    common::tools::MiTimer::cancel(&this->miracle_ring_timer_);
    if ( PlayerUnixTimer::startS(
           &this->miracle_ring_timer_,
           0x3Cu,
           0,
           "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
           "onTimer",
           1186) )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
        "onTimer",
        1188);
      v17 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              &v19,
              (const char (*)[21])" start timer failed!");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      operator<<(v17, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v19);
    }
  }
  else
  {
    common::tools::MiTimer::cancel(&this->miracle_ring_timer_);
  }
  if ( v20 == (char *)v2 )
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
};

// Line 1198: range 0000000016CAABF6-0000000016CAAF1F
void __cdecl PlayerMiracleRingComp::logMiracleRingPlace(PlayerMiracleRingComp *const this, const Vector3 *pos)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::__shared_ptr_access<proto_log::PlayerLogBodyMiracleRingPlace,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMiracleRingPlace,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyMiracleRingPlace,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyMiracleRingPlace,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  Player *player; // r14
  bool is_deliverd; // [rsp+1Fh] [rbp-91h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-90h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+30h] [rbp-80h] BYREF
  char v13[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 12 log_ptr:1199";
  *(_QWORD *)(v2 + 16) = PlayerMiracleRingComp::logMiracleRingPlace;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::tools::perf::make_shared<proto_log::PlayerLogBodyMiracleRingPlace>();
  is_deliverd = !std::unordered_map<unsigned int,unsigned int>::empty(&this->drop_tag_to_count_map_);
  v5 = std::__shared_ptr_access<proto_log::PlayerLogBodyMiracleRingPlace,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMiracleRingPlace,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  proto_log::PlayerLogBodyMiracleRingPlace::set_is_deliverd(v5, is_deliverd);
  v6 = std::__shared_ptr_access<proto_log::PlayerLogBodyMiracleRingPlace,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMiracleRingPlace,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)pos & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(pos);
  }
  proto_log::PlayerLogBodyMiracleRingPlace::set_x_coordinate(v6, (int)pos->x);
  v7 = std::__shared_ptr_access<proto_log::PlayerLogBodyMiracleRingPlace,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMiracleRingPlace,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&pos->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)pos + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pos->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&pos->y);
  }
  proto_log::PlayerLogBodyMiracleRingPlace::set_y_coordinate(v7, (int)pos->y);
  v8 = std::__shared_ptr_access<proto_log::PlayerLogBodyMiracleRingPlace,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMiracleRingPlace,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&pos->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)pos + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pos->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&pos->z);
  }
  proto_log::PlayerLogBodyMiracleRingPlace::set_z_coordinate(v8, (int)pos->z);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  player = this->player_;
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyMiracleRingPlace,void>(
    &p_body_ptr,
    (const std::shared_ptr<proto_log::PlayerLogBodyMiracleRingPlace> *)(v2 + 32));
  Player::printStatLog(player, &p_body_ptr, &p_body_ext_ptr, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
  std::shared_ptr<proto_log::PlayerLogBodyMiracleRingPlace>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyMiracleRingPlace> *const)(v2 + 32));
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1209: range 0000000016CAAF20-0000000016CAB25B
void __cdecl PlayerMiracleRingComp::logMiracleRingDestroy(
        PlayerMiracleRingComp *const this,
        const proto_log::PlayerLogBodyMiracleRingDestroy::DestroyReason *reason)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMiracleRingDestroy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMiracleRingDestroy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rcx
  Player *player; // r14
  std::string reasona; // [rsp+0h] [rbp-F0h]
  google::protobuf::uint32 *reasonb; // [rsp+0h] [rbp-F0h]
  PlayerMiracleRingComp *thisa; // [rsp+8h] [rbp-E8h]
  bool is_deliverd; // [rsp+1Fh] [rbp-D1h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-D0h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+30h] [rbp-C0h] BYREF
  std::string v15; // [rsp+40h] [rbp-B0h] BYREF
  char v16[144]; // [rsp+60h] [rbp-90h] BYREF

  reasona._M_string_length = (std::string::size_type)this;
  reasona._M_dataplus._M_p = (std::string::pointer)reason;
  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 11 holder:1210 64 16 12 log_ptr:1211";
  *(_QWORD *)(v2 + 16) = PlayerMiracleRingComp::logMiracleRingDestroy;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Player::getBasicComp(this->player_);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v15, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 0xC28u, reasona);
  std::string::~string(&v15);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyMiracleRingDestroy>();
  is_deliverd = !std::unordered_map<unsigned int,unsigned int>::empty(&thisa->drop_tag_to_count_map_);
  v6 = std::__shared_ptr_access<proto_log::PlayerLogBodyMiracleRingDestroy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMiracleRingDestroy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  proto_log::PlayerLogBodyMiracleRingDestroy::set_is_deliverd(v6, is_deliverd);
  v7 = std::__shared_ptr_access<proto_log::PlayerLogBodyMiracleRingDestroy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMiracleRingDestroy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  if ( *(_BYTE *)(((unsigned __int64)reasonb >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)reasonb & 7) + 3) >= *(_BYTE *)(((unsigned __int64)reasonb >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(reasonb);
  }
  proto_log::PlayerLogBodyMiracleRingDestroy::set_reason(v7, *reasonb);
  if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  player = thisa->player_;
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyMiracleRingDestroy,void>(
    &p_body_ptr,
    (const std::shared_ptr<proto_log::PlayerLogBodyMiracleRingDestroy> *)(v2 + 64));
  Player::printStatLog(player, &p_body_ptr, &p_body_ext_ptr, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
  std::shared_ptr<proto_log::PlayerLogBodyMiracleRingDestroy>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyMiracleRingDestroy> *const)(v2 + 64));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
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
};

// Line 1219: range 0000000016CAB25C-0000000016CAB885
void __cdecl PlayerMiracleRingComp::logMiracleRingDeliver(
        PlayerMiracleRingComp *const this,
        const std::vector<long unsigned int> *food_equip_guid_vec,
        const std::vector<ItemParam> *item_param_vec,
        const std::vector<unsigned int> *equip_id_vec)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r13
  std::__shared_ptr_access<proto_log::PlayerLogBodyMiracleRingDeliver,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  uint64_t *v8; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMiracleRingDeliver,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  unsigned int *v10; // rax
  uint32_t *v11; // rdx
  std::__shared_ptr_access<proto_log::PlayerLogBodyMiracleRingDeliver,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMiracleRingDeliver,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  Player *player; // r14
  uint32_t equip_id; // [rsp+24h] [rbp-FCh]
  std::vector<ItemParam>::const_iterator __for_begin; // [rsp+28h] [rbp-F8h] BYREF
  std::vector<ItemParam>::const_iterator __for_end; // [rsp+30h] [rbp-F0h] BYREF
  const std::vector<ItemParam> *__for_range; // [rsp+38h] [rbp-E8h]
  const std::vector<long unsigned int> *__for_range_0; // [rsp+40h] [rbp-E0h]
  const std::vector<unsigned int> *__for_range_1; // [rsp+48h] [rbp-D8h]
  std::unordered_map<unsigned int,unsigned int> *__for_range_2; // [rsp+50h] [rbp-D0h]
  const std::pair<unsigned int const,unsigned int> *v24; // [rsp+58h] [rbp-C8h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *drop_tag; // [rsp+60h] [rbp-C0h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *tag_count; // [rsp+68h] [rbp-B8h]
  proto_log::MiracleRingTagLog *tag_log; // [rsp+70h] [rbp-B0h]
  uint64_t guid; // [rsp+78h] [rbp-A8h]
  const ItemParam *item_param; // [rsp+80h] [rbp-A0h]
  proto_log::ItemLog *item_log; // [rsp+88h] [rbp-98h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+90h] [rbp-90h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+A0h] [rbp-80h] BYREF
  char v33[112]; // [rsp+B0h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 12 log_ptr:1220";
  *(_QWORD *)(v4 + 16) = PlayerMiracleRingComp::logMiracleRingDeliver;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  common::tools::perf::make_shared<proto_log::PlayerLogBodyMiracleRingDeliver>();
  __for_range = item_param_vec;
  __for_begin._M_current = std::vector<ItemParam>::begin(item_param_vec)._M_current;
  __for_end._M_current = std::vector<ItemParam>::end(item_param_vec)._M_current;
  while ( __gnu_cxx::operator!=<ItemParam const*,std::vector<ItemParam>>(&__for_begin, &__for_end) )
  {
    item_param = __gnu_cxx::__normal_iterator<ItemParam const*,std::vector<ItemParam>>::operator*(&__for_begin);
    v7 = std::__shared_ptr_access<proto_log::PlayerLogBodyMiracleRingDeliver,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMiracleRingDeliver,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    item_log = proto_log::PlayerLogBodyMiracleRingDeliver::add_item_vec(v7);
    if ( *(_BYTE *)(((unsigned __int64)item_param >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)item_param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_param >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(item_param);
    }
    proto_log::ItemLog::set_item_id(item_log, item_param->item_id);
    if ( *(_BYTE *)(((unsigned __int64)&item_param->count >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)item_param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_param->count >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&item_param->count);
    }
    proto_log::ItemLog::set_count(item_log, item_param->count);
    __gnu_cxx::__normal_iterator<ItemParam const*,std::vector<ItemParam>>::operator++(&__for_begin);
  }
  __for_range_0 = food_equip_guid_vec;
  __for_begin._M_current = (const ItemParam *)std::vector<unsigned long>::begin(food_equip_guid_vec)._M_current;
  __for_end._M_current = (const ItemParam *)std::vector<unsigned long>::end(__for_range_0)._M_current;
  while ( __gnu_cxx::operator!=<unsigned long const*,std::vector<unsigned long>>(
            (const __gnu_cxx::__normal_iterator<long unsigned int const*,std::vector<long unsigned int> > *)&__for_begin,
            (const __gnu_cxx::__normal_iterator<long unsigned int const*,std::vector<long unsigned int> > *)&__for_end) )
  {
    v8 = (uint64_t *)__gnu_cxx::__normal_iterator<unsigned long const*,std::vector<unsigned long>>::operator*((const __gnu_cxx::__normal_iterator<long unsigned int const*,std::vector<long unsigned int> > *const)&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    guid = *v8;
    v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyMiracleRingDeliver,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMiracleRingDeliver,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    proto_log::PlayerLogBodyMiracleRingDeliver::add_guid_list(v9, guid);
    __gnu_cxx::__normal_iterator<unsigned long const*,std::vector<unsigned long>>::operator++((__gnu_cxx::__normal_iterator<long unsigned int const*,std::vector<long unsigned int> > *const)&__for_begin);
  }
  __for_range_1 = equip_id_vec;
  __for_begin._M_current = (const ItemParam *)std::vector<unsigned int>::begin(equip_id_vec)._M_current;
  __for_end._M_current = (const ItemParam *)std::vector<unsigned int>::end(__for_range_1)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
            (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&__for_begin,
            (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&__for_end) )
  {
    v10 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__for_begin);
    v11 = v10;
    if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v10);
    }
    equip_id = *v11;
    v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyMiracleRingDeliver,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMiracleRingDeliver,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    proto_log::PlayerLogBodyMiracleRingDeliver::add_guid_item_list(v12, equip_id);
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__for_begin);
  }
  __for_range_2 = &this->drop_tag_to_count_map_;
  __for_begin._M_current = (const ItemParam *)std::unordered_map<unsigned int,unsigned int>::begin(&this->drop_tag_to_count_map_)._M_cur;
  __for_end._M_current = (const ItemParam *)std::unordered_map<unsigned int,unsigned int>::end(__for_range_2)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)&__for_begin,
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)&__for_end) )
  {
    v24 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)&__for_begin);
    drop_tag = std::get<0ul,unsigned int const,unsigned int>(v24);
    tag_count = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v24);
    v13 = std::__shared_ptr_access<proto_log::PlayerLogBodyMiracleRingDeliver,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMiracleRingDeliver,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    tag_log = proto_log::PlayerLogBodyMiracleRingDeliver::add_tag_log_vec(v13);
    if ( *(_BYTE *)(((unsigned __int64)drop_tag >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)drop_tag & 7) + 3) >= *(_BYTE *)(((unsigned __int64)drop_tag >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(drop_tag);
    }
    proto_log::MiracleRingTagLog::set_tag_id(tag_log, *drop_tag);
    if ( *(_BYTE *)(((unsigned __int64)tag_count >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)tag_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)tag_count >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(tag_count);
    }
    proto_log::MiracleRingTagLog::set_tag_count(tag_log, *tag_count);
    std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  player = this->player_;
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyMiracleRingDeliver,void>(
    &p_body_ptr,
    (const std::shared_ptr<proto_log::PlayerLogBodyMiracleRingDeliver> *)(v4 + 32));
  Player::printStatLog(player, &p_body_ptr, &p_body_ext_ptr, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
  std::shared_ptr<proto_log::PlayerLogBodyMiracleRingDeliver>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyMiracleRingDeliver> *const)(v4 + 32));
  if ( v33 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1247: range 0000000016CAB886-0000000016CABCFB
void __cdecl PlayerMiracleRingComp::logMiracleRingGrant(
        PlayerMiracleRingComp *const this,
        const std::vector<std::pair<unsigned int,unsigned int>> *drop_vec)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::__shared_ptr_access<proto_log::PlayerLogBodyMiracleRingGrant,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMiracleRingGrant,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Player *player; // r14
  std::unordered_map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+10h] [rbp-E0h] BYREF
  std::unordered_map<unsigned int,unsigned int>::iterator __for_end; // [rsp+18h] [rbp-D8h] BYREF
  std::unordered_map<unsigned int,unsigned int> *__for_range; // [rsp+20h] [rbp-D0h]
  const std::vector<std::pair<unsigned int,unsigned int>> *__for_range_0; // [rsp+28h] [rbp-C8h]
  const std::pair<unsigned int,unsigned int> *drop_pair; // [rsp+30h] [rbp-C0h]
  proto_log::MiracleRingDropLog *drop_log; // [rsp+38h] [rbp-B8h]
  const std::pair<unsigned int const,unsigned int> *v14; // [rsp+40h] [rbp-B0h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *drop_tag; // [rsp+48h] [rbp-A8h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *tag_count; // [rsp+50h] [rbp-A0h]
  proto_log::MiracleRingTagLog *tag_log; // [rsp+58h] [rbp-98h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+60h] [rbp-90h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+70h] [rbp-80h] BYREF
  char v20[112]; // [rsp+80h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 12 log_ptr:1248";
  *(_QWORD *)(v2 + 16) = PlayerMiracleRingComp::logMiracleRingGrant;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::tools::perf::make_shared<proto_log::PlayerLogBodyMiracleRingGrant>();
  __for_range = &this->drop_tag_to_count_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,unsigned int>::begin(&this->drop_tag_to_count_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,unsigned int>::end(&this->drop_tag_to_count_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(&__for_begin, &__for_end) )
  {
    v14 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*(&__for_begin);
    drop_tag = std::get<0ul,unsigned int const,unsigned int>(v14);
    tag_count = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v14);
    v5 = std::__shared_ptr_access<proto_log::PlayerLogBodyMiracleRingGrant,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMiracleRingGrant,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    tag_log = proto_log::PlayerLogBodyMiracleRingGrant::add_tag_log_vec(v5);
    if ( *(_BYTE *)(((unsigned __int64)drop_tag >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)drop_tag & 7) + 3) >= *(_BYTE *)(((unsigned __int64)drop_tag >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(drop_tag);
    }
    proto_log::MiracleRingTagLog::set_tag_id(tag_log, *drop_tag);
    if ( *(_BYTE *)(((unsigned __int64)tag_count >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)tag_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)tag_count >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(tag_count);
    }
    proto_log::MiracleRingTagLog::set_tag_count(tag_log, *tag_count);
    std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++(&__for_begin);
  }
  __for_range_0 = drop_vec;
  __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false>::__node_type *)std::vector<std::pair<unsigned int,unsigned int>>::begin(drop_vec)._M_current;
  __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false>::__node_type *)std::vector<std::pair<unsigned int,unsigned int>>::end(__for_range_0)._M_current;
  while ( __gnu_cxx::operator!=<std::pair<unsigned int,unsigned int> const*,std::vector<std::pair<unsigned int,unsigned int>>>(
            (const __gnu_cxx::__normal_iterator<const std::pair<unsigned int,unsigned int>*,std::vector<std::pair<unsigned int,unsigned int>> > *)&__for_begin,
            (const __gnu_cxx::__normal_iterator<const std::pair<unsigned int,unsigned int>*,std::vector<std::pair<unsigned int,unsigned int>> > *)&__for_end) )
  {
    drop_pair = __gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int> const*,std::vector<std::pair<unsigned int,unsigned int>>>::operator*((const __gnu_cxx::__normal_iterator<const std::pair<unsigned int,unsigned int>*,std::vector<std::pair<unsigned int,unsigned int>> > *const)&__for_begin);
    v6 = std::__shared_ptr_access<proto_log::PlayerLogBodyMiracleRingGrant,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMiracleRingGrant,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    drop_log = proto_log::PlayerLogBodyMiracleRingGrant::add_drop_log_vec(v6);
    if ( *(_BYTE *)(((unsigned __int64)drop_pair >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)drop_pair & 7) + 3) >= *(_BYTE *)(((unsigned __int64)drop_pair >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(drop_pair);
    }
    proto_log::MiracleRingDropLog::set_drop_id(drop_log, drop_pair->first);
    if ( *(_BYTE *)(((unsigned __int64)&drop_pair->second >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)drop_pair + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&drop_pair->second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&drop_pair->second);
    }
    proto_log::MiracleRingDropLog::set_drop_count(drop_log, drop_pair->second);
    __gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int> const*,std::vector<std::pair<unsigned int,unsigned int>>>::operator++((__gnu_cxx::__normal_iterator<const std::pair<unsigned int,unsigned int>*,std::vector<std::pair<unsigned int,unsigned int>> > *const)&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  player = this->player_;
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyMiracleRingGrant,void>(
    &p_body_ptr,
    (const std::shared_ptr<proto_log::PlayerLogBodyMiracleRingGrant> *)(v2 + 32));
  Player::printStatLog(player, &p_body_ptr, &p_body_ext_ptr, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
  std::shared_ptr<proto_log::PlayerLogBodyMiracleRingGrant>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyMiracleRingGrant> *const)(v2 + 32));
  if ( v20 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1265: range 0000000016CABCFC-0000000016CAC353
void __cdecl PlayerMiracleRingComp::notifyMiracleRingCoolDown(PlayerMiracleRingComp *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  common::milog::MiLogStream *v5; // r14
  std::__shared_ptr_access<data::ConfigWidgetToyMiracleRing,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  const WidgetJsonNewConfig *WidgetNewConfig; // r14
  std::__shared_ptr_access<data::ConfigWidgetToyMiracleRing,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // r14
  std::__shared_ptr_access<data::ConfigWidgetToyMiracleRing,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  __int64 v12; // r14
  std::__shared_ptr_access<proto::WidgetCoolDownNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  Player *player; // r14
  unsigned int val; // [rsp+1Ch] [rbp-E4h] BYREF
  uint32_t cool_down_sec; // [rsp+20h] [rbp-E0h]
  uint32_t item_id; // [rsp+24h] [rbp-DCh]
  const data::ConfigWidgetCdGroup *cd_group_config_ptr; // [rsp+28h] [rbp-D8h]
  uint64_t cool_down_ms; // [rsp+30h] [rbp-D0h]
  proto::WidgetCoolDownData *cool_down_data; // [rsp+38h] [rbp-C8h]
  std::shared_ptr<const google::protobuf::Message> v21; // [rsp+40h] [rbp-C0h] BYREF
  common::milog::MiLogStream v22; // [rsp+50h] [rbp-B0h] BYREF
  char v23[144]; // [rsp+70h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 15 notify_ptr:1266 64 16 28 miracle_ring_config_ptr:1272";
  *(_QWORD *)(v1 + 16) = PlayerMiracleRingComp::notifyMiracleRingCoolDown;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  common::tools::perf::make_shared<proto::WidgetCoolDownNotify>();
  if ( std::operator==<proto::WidgetCoolDownNotify>(
         0LL,
         (const std::shared_ptr<proto::WidgetCoolDownNotify> *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
      "notifyMiracleRingCoolDown",
      1269);
    common::milog::MiLogStream::operator()(&v22, "create WidgetCoolDownNotify nullptr");
    common::milog::MiLogStream::~MiLogStream(&v22);
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v21);
    v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21);
    JsonConfigMgr::getWidgetNewConfig(&v4->design_config.json_config_mgr);
    WidgetJsonNewConfig::findWidgetConfig<data::ConfigWidgetToyMiracleRing>((const WidgetJsonNewConfig *const)(v1 + 64));
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v21);
    if ( std::operator==<data::ConfigWidgetToyMiracleRing>(
           0LL,
           (const std::shared_ptr<data::ConfigWidgetToyMiracleRing> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
        "notifyMiracleRingCoolDown",
        1275);
      v5 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
             &v22,
             (const char (*)[55])"findWidgetConfig<ConfigWidgetMiracleRing> failed, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
      common::milog::MiLogStream::~MiLogStream(&v22);
    }
    else
    {
      v6 = std::__shared_ptr_access<data::ConfigWidgetToyMiracleRing,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetToyMiracleRing,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&v6->material_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v6->material_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&v6->material_id);
      }
      item_id = v6->material_id;
      cool_down_sec = 0;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v21);
      v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21);
      WidgetNewConfig = JsonConfigMgr::getWidgetNewConfig(&v7->design_config.json_config_mgr);
      v9 = std::__shared_ptr_access<data::ConfigWidgetToyMiracleRing,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetToyMiracleRing,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&v9->cd_group >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v9->cd_group >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&v9->cd_group);
      }
      cd_group_config_ptr = WidgetJsonNewConfig::queryCoolDownGroupConfig(WidgetNewConfig, v9->cd_group);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v21);
      if ( cd_group_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&cd_group_config_ptr->cool_down_success >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)cd_group_config_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cd_group_config_ptr->cool_down_success >> 3)
                                                                            + 0x7FFF8000) )
        {
          __asan_report_load4(&cd_group_config_ptr->cool_down_success);
        }
        cool_down_sec = (int)cd_group_config_ptr->cool_down_success;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/miracle_ring/player_miracle_ring_comp.cpp",
          "notifyMiracleRingCoolDown",
          1284);
        v10 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                &v22,
                (const char (*)[46])"queryCoolDownGroupConfig failed, cd_group_id:");
        v11 = std::__shared_ptr_access<data::ConfigWidgetToyMiracleRing,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetToyMiracleRing,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &v11->cd_group);
        common::milog::MiLogStream::~MiLogStream(&v22);
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->last_use_time_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->last_use_time_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->last_use_time_);
      }
      v12 = 1000LL * this->last_use_time_;
      cool_down_ms = v12 + SAFE_MULTIPLY<unsigned int,int>(cool_down_sec, 1000);
      v13 = std::__shared_ptr_access<proto::WidgetCoolDownNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::WidgetCoolDownNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      cool_down_data = proto::WidgetCoolDownNotify::add_normal_cool_down_data_list(v13);
      proto::WidgetCoolDownData::set_id(cool_down_data, item_id);
      proto::WidgetCoolDownData::set_cool_down_time(cool_down_data, cool_down_ms);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      player = this->player_;
      std::dynamic_pointer_cast<google::protobuf::Message const,proto::WidgetCoolDownNotify>((const std::shared_ptr<proto::WidgetCoolDownNotify> *)&v21);
      Player::sendMessage(player, &v21, 0LL);
      std::shared_ptr<google::protobuf::Message const>::~shared_ptr(&v21);
    }
    std::shared_ptr<data::ConfigWidgetToyMiracleRing>::~shared_ptr((std::shared_ptr<data::ConfigWidgetToyMiracleRing> *const)(v1 + 64));
  }
  std::shared_ptr<proto::WidgetCoolDownNotify>::~shared_ptr((std::shared_ptr<proto::WidgetCoolDownNotify> *const)(v1 + 32));
  if ( v23 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
};
