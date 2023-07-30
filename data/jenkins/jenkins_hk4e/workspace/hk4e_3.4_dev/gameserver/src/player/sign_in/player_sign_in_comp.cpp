// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/sign_in/player_sign_in_comp.cpp

// Line 33: range 0000000016D07374-0000000016D07478
int32_t __cdecl OpActivityTagBriefInfo::toClient(
        const OpActivityTagBriefInfo *const this,
        proto::OpActivityTagBriefInfo *proto)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  proto::OpActivityTagBriefInfo::set_op_activity_type(proto, this->op_activity_type);
  if ( *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->config_id);
  }
  proto::OpActivityTagBriefInfo::set_config_id(proto, this->config_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->has_reward >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 8) & 7) >= *(_BYTE *)(((unsigned __int64)&this->has_reward >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->has_reward);
  }
  proto::OpActivityTagBriefInfo::set_has_reward(proto, this->has_reward);
  return 0;
};

// Line 42: range 0000000016D0747A-0000000016D0758F
void __cdecl SignInRecord::fromBin(SignInRecord *const this, const proto::SignInRecordBin *proto_sign_in_record)
{
  uint32_t v2; // edx
  char v3; // al
  uint32_t v4; // ecx
  char v5; // dl
  bool v6; // dl
  uint32_t sign_in_time; // edx
  char v8; // al
  const google::protobuf::RepeatedField<unsigned int> *v9; // rax
  const proto::SignInRecordBin *proto_sign_in_recorda; // [rsp+0h] [rbp-20h]

  proto_sign_in_recorda = proto_sign_in_record;
  v2 = proto::SignInRecordBin::schedule_id(proto_sign_in_record);
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(proto_sign_in_record) = v3 != 0;
    __asan_report_store4(this, proto_sign_in_record, v2);
  }
  this->schedule_id = v2;
  v4 = proto::SignInRecordBin::sign_in_count(proto_sign_in_recorda);
  v5 = *(_BYTE *)(((unsigned __int64)&this->sign_in_count >> 3) + 0x7FFF8000);
  LOBYTE(proto_sign_in_record) = v5 != 0;
  v6 = v5 != 0 && (char)((((_BYTE)this + 4) & 7) + 3) >= v5;
  if ( v6 )
    __asan_report_store4(&this->sign_in_count, proto_sign_in_record, v6);
  this->sign_in_count = v4;
  sign_in_time = proto::SignInRecordBin::last_sign_in_time(proto_sign_in_recorda);
  v8 = *(_BYTE *)(((unsigned __int64)&this->last_sign_in_time >> 3) + 0x7FFF8000);
  if ( v8 != 0 && v8 <= 3 )
  {
    LOBYTE(proto_sign_in_record) = v8 != 0;
    __asan_report_store4(&this->last_sign_in_time, proto_sign_in_record, sign_in_time);
  }
  this->last_sign_in_time = sign_in_time;
  v9 = proto::SignInRecordBin::reward_day_list(proto_sign_in_recorda);
  common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(v9, &this->reward_day_vec);
};

// Line 50: range 0000000016D07590-0000000016D0769F
void __cdecl SignInRecord::toBin(const SignInRecord *const this, proto::SignInRecordBin *proto_sign_in_record)
{
  google::protobuf::RepeatedField<unsigned int> *v2; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  proto::SignInRecordBin::set_schedule_id(proto_sign_in_record, this->schedule_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->sign_in_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->sign_in_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->sign_in_count);
  }
  proto::SignInRecordBin::set_sign_in_count(proto_sign_in_record, this->sign_in_count);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_sign_in_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_sign_in_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_sign_in_time);
  }
  proto::SignInRecordBin::set_last_sign_in_time(proto_sign_in_record, this->last_sign_in_time);
  v2 = proto::SignInRecordBin::mutable_reward_day_list(proto_sign_in_record);
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&this->reward_day_vec, v2);
};

// Line 58: range 0000000016D076A0-0000000016D077AF
void __cdecl SignInRecord::toClient(const SignInRecord *const this, proto::SignInInfo *sign_in_info)
{
  google::protobuf::RepeatedField<unsigned int> *v2; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  proto::SignInInfo::set_schedule_id(sign_in_info, this->schedule_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->sign_in_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->sign_in_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->sign_in_count);
  }
  proto::SignInInfo::set_sign_in_count(sign_in_info, this->sign_in_count);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_sign_in_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_sign_in_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_sign_in_time);
  }
  proto::SignInInfo::set_last_sign_in_time(sign_in_info, this->last_sign_in_time);
  v2 = proto::SignInInfo::mutable_reward_day_list(sign_in_info);
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&this->reward_day_vec, v2);
};

// Line 67: range 0000000016D077B0-0000000016D0785F
void __cdecl BonusActivityRecord::fromBin(
        BonusActivityRecord *const this,
        const proto::BonusActivityRecordBin *proto_bonus_activity_record_bin)
{
  uint32_t v2; // ecx
  char v3; // dl
  bool v4; // dl
  google::protobuf::uint32 v5; // ecx
  char v6; // dl
  bool v7; // dl
  const proto::BonusActivityRecordBin *proto_bonus_activity_record_bina; // [rsp+0h] [rbp-10h]

  proto_bonus_activity_record_bina = proto_bonus_activity_record_bin;
  v2 = proto::BonusActivityRecordBin::bonus_activity_id(proto_bonus_activity_record_bin);
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  LOBYTE(proto_bonus_activity_record_bin) = v3 != 0;
  v4 = v3 != 0 && (char)(((unsigned __int8)this & 7) + 3) >= v3;
  if ( v4 )
    __asan_report_store4(this, proto_bonus_activity_record_bin, v4);
  this->bonus_activity_id = v2;
  v5 = proto::BonusActivityRecordBin::state(proto_bonus_activity_record_bina);
  v6 = *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000);
  LOBYTE(proto_bonus_activity_record_bin) = v6 != 0;
  v7 = v6 != 0 && (char)((((_BYTE)this + 4) & 7) + 3) >= v6;
  if ( v7 )
    __asan_report_store4(&this->state, proto_bonus_activity_record_bin, v7);
  this->state = v5;
};

// Line 73: range 0000000016D07860-0000000016D0790D
void __cdecl BonusActivityRecord::toBin(
        const BonusActivityRecord *const this,
        proto::BonusActivityRecordBin *proto_bonus_activity_record_bin)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  proto::BonusActivityRecordBin::set_bonus_activity_id(proto_bonus_activity_record_bin, this->bonus_activity_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->state);
  }
  proto::BonusActivityRecordBin::set_state(proto_bonus_activity_record_bin, this->state);
};

// Line 79: range 0000000016D0790E-0000000016D079BB
void __cdecl BonusActivityRecord::toClient(
        const BonusActivityRecord *const this,
        proto::BonusActivityInfo *proto_bonus_activity_info)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  proto::BonusActivityInfo::set_bonus_activity_id(proto_bonus_activity_info, this->bonus_activity_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->state);
  }
  proto::BonusActivityInfo::set_state(proto_bonus_activity_info, this->state);
};

// Line 86: range 0000000016D079BC-0000000016D07B22
int32_t __cdecl PlayerSignInComp::fromBin(PlayerSignInComp *const this, const proto::PlayerDataBin *player_data_bin)
{
  SignInRecord *v2; // rax
  BonusActivityRecord *v3; // rax
  std::unordered_map<unsigned int,SignInRecord>::key_type __k; // [rsp+14h] [rbp-4Ch] BYREF
  google::protobuf::RepeatedPtrField<proto::SignInRecordBin>::const_iterator __for_begin; // [rsp+18h] [rbp-48h] BYREF
  google::protobuf::RepeatedPtrField<proto::SignInRecordBin>::const_iterator __for_end; // [rsp+20h] [rbp-40h] BYREF
  const proto::PlayerSignInCompBin *proto_comp; // [rsp+28h] [rbp-38h]
  const google::protobuf::RepeatedPtrField<proto::SignInRecordBin> *__for_range; // [rsp+30h] [rbp-30h]
  const google::protobuf::RepeatedPtrField<proto::BonusActivityRecordBin> *__for_range_0; // [rsp+38h] [rbp-28h]
  const proto::BonusActivityRecordBin *bonus_activity_record; // [rsp+40h] [rbp-20h]
  const proto::SignInRecordBin *proto_sign_in_record; // [rsp+48h] [rbp-18h]

  proto_comp = proto::PlayerDataBin::sign_in_bin(player_data_bin);
  __for_range = proto::PlayerSignInCompBin::sign_in_record_list(proto_comp);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::SignInRecordBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::SignInRecordBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::SignInRecordBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    proto_sign_in_record = google::protobuf::internal::RepeatedPtrIterator<proto::SignInRecordBin const>::operator*(&__for_begin);
    __k = proto::SignInRecordBin::schedule_id(proto_sign_in_record);
    v2 = std::unordered_map<unsigned int,SignInRecord>::operator[](&this->sign_in_record_map_, &__k);
    SignInRecord::fromBin(v2, proto_sign_in_record);
    google::protobuf::internal::RepeatedPtrIterator<proto::SignInRecordBin const>::operator++(&__for_begin);
  }
  __for_range_0 = proto::PlayerSignInCompBin::bonus_activity_record_list(proto_comp);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::BonusActivityRecordBin>::begin(__for_range_0).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::BonusActivityRecordBin>::end(__for_range_0).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::BonusActivityRecordBin const>::operator!=(
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::BonusActivityRecordBin> *const)&__for_begin,
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::BonusActivityRecordBin>::iterator *)&__for_end) )
  {
    bonus_activity_record = google::protobuf::internal::RepeatedPtrIterator<proto::BonusActivityRecordBin const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::BonusActivityRecordBin> *const)&__for_begin);
    __k = proto::BonusActivityRecordBin::bonus_activity_id(bonus_activity_record);
    v3 = std::unordered_map<unsigned int,BonusActivityRecord>::operator[](&this->bonus_activity_record_map_, &__k);
    BonusActivityRecord::fromBin(v3, bonus_activity_record);
    google::protobuf::internal::RepeatedPtrIterator<proto::BonusActivityRecordBin const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::BonusActivityRecordBin> *const)&__for_begin);
  }
  return 0;
};

// Line 101: range 0000000016D07B24-0000000016D07C88
int32_t __cdecl PlayerSignInComp::toBin(PlayerSignInComp *const this, proto::PlayerDataBin *player_data_bin)
{
  proto::SignInRecordBin *v2; // rax
  proto::BonusActivityRecordBin *v3; // rax
  std::unordered_map<unsigned int,SignInRecord>::iterator __for_begin; // [rsp+18h] [rbp-58h] BYREF
  std::unordered_map<unsigned int,SignInRecord>::iterator __for_end; // [rsp+20h] [rbp-50h] BYREF
  proto::PlayerSignInCompBin *proto_comp; // [rsp+28h] [rbp-48h]
  std::unordered_map<unsigned int,SignInRecord> *__for_range; // [rsp+30h] [rbp-40h]
  std::unordered_map<unsigned int,BonusActivityRecord> *__for_range_0; // [rsp+38h] [rbp-38h]
  const std::pair<unsigned int const,BonusActivityRecord> *v10; // [rsp+40h] [rbp-30h]
  std::tuple_element<0,const std::pair<unsigned int const,BonusActivityRecord> >::type *__0; // [rsp+48h] [rbp-28h]
  std::tuple_element<1,const std::pair<unsigned int const,BonusActivityRecord> >::type *bonus_activity_record; // [rsp+50h] [rbp-20h]
  const std::pair<unsigned int const,SignInRecord> *v13; // [rsp+58h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,SignInRecord> >::type *_; // [rsp+60h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,SignInRecord> >::type *sign_in_record; // [rsp+68h] [rbp-8h]

  proto_comp = proto::PlayerDataBin::mutable_sign_in_bin(player_data_bin);
  __for_range = &this->sign_in_record_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,SignInRecord>::begin(&this->sign_in_record_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,SignInRecord>::end(&this->sign_in_record_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,SignInRecord>,false>(&__for_begin, &__for_end) )
  {
    v13 = std::__detail::_Node_iterator<std::pair<unsigned int const,SignInRecord>,false,false>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,SignInRecord>(v13);
    sign_in_record = (std::tuple_element<1,const std::pair<unsigned int const,SignInRecord> >::type *)std::get<1ul,unsigned int const,SignInRecord>(v13);
    v2 = proto::PlayerSignInCompBin::add_sign_in_record_list(proto_comp);
    SignInRecord::toBin(sign_in_record, v2);
    std::__detail::_Node_iterator<std::pair<unsigned int const,SignInRecord>,false,false>::operator++(&__for_begin);
  }
  __for_range_0 = &this->bonus_activity_record_map_;
  __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,SignInRecord>,false>::__node_type *)std::unordered_map<unsigned int,BonusActivityRecord>::begin(&this->bonus_activity_record_map_)._M_cur;
  __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,SignInRecord>,false>::__node_type *)std::unordered_map<unsigned int,BonusActivityRecord>::end(__for_range_0)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,BonusActivityRecord>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,BonusActivityRecord>,false> *)&__for_begin,
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,BonusActivityRecord>,false> *)&__for_end) )
  {
    v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,BonusActivityRecord>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,BonusActivityRecord>,false,false> *const)&__for_begin);
    __0 = std::get<0ul,unsigned int const,BonusActivityRecord>(v10);
    bonus_activity_record = (std::tuple_element<1,const std::pair<unsigned int const,BonusActivityRecord> >::type *)std::get<1ul,unsigned int const,BonusActivityRecord>(v10);
    v3 = proto::PlayerSignInCompBin::add_bonus_activity_record_list(proto_comp);
    BonusActivityRecord::toBin(bonus_activity_record, v3);
    std::__detail::_Node_iterator<std::pair<unsigned int const,BonusActivityRecord>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,BonusActivityRecord>,false,false> *const)&__for_begin);
  }
  return 0;
};

// Line 116: range 0000000016D07C8A-0000000016D0836A
int32_t __cdecl PlayerSignInComp::init(PlayerSignInComp *const this)
{
  unsigned __int64 p_event_center; // r14
  __int64 v2; // rax
  _DWORD *v3; // r15
  int32_t v4; // ebx
  PlayerEventComp *EventComp; // r12
  PlayerEventComp *v6; // r12
  PlayerEventComp *v7; // r12
  PlayerEventComp *v8; // r12
  PlayerEventComp *v9; // r12
  PlayerEventComp *v10; // r12
  int32_t result; // eax
  PlayerEventComp v12; // [rsp+70h] [rbp-110h] BYREF

  p_event_center = (unsigned __int64)&v12.event_center_.context_.event_center_;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      p_event_center = v2;
  }
  *(_QWORD *)p_event_center = 1102416563LL;
  *(_QWORD *)(p_event_center + 8) = "2 32 16 12 this_ptr:117 64 16 12 this_wtr:123";
  *(_QWORD *)(p_event_center + 16) = PlayerSignInComp::init;
  v3 = (_DWORD *)(p_event_center >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  toThisPtr<PlayerSignInComp>((PlayerSignInComp *)(p_event_center + 32));
  if ( std::operator==<PlayerSignInComp>(0LL, (const std::shared_ptr<PlayerSignInComp> *)(p_event_center + 32)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v12.event_center_.context_.pending_que_.c._M_impl._M_finish,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/sign_in/player_sign_in_comp.cpp",
      "init",
      120);
    common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
      (common::milog::MiLogStream *const)&v12.event_center_.context_.pending_que_.c._M_impl._M_finish,
      (const char (*)[48])"dynamic_pointer_cast to PlayerSignInComp failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v12.event_center_.context_.pending_que_.c._M_impl._M_finish);
    v4 = -1;
  }
  else
  {
    std::weak_ptr<PlayerSignInComp>::weak_ptr<PlayerSignInComp,void>(
      (std::weak_ptr<PlayerSignInComp> *const)(p_event_center + 64),
      (const std::shared_ptr<PlayerSignInComp> *)(p_event_center + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    EventComp = Player::getEventComp(this->player_);
    std::weak_ptr<PlayerSignInComp>::weak_ptr(
      (std::weak_ptr<PlayerSignInComp> *const)&v12.event_center_.context_.pending_que_.c._M_impl._M_start._M_last,
      (const std::weak_ptr<PlayerSignInComp> *)(p_event_center + 64));
    PlayerEventComp::registerObserver<PlayerSignInComp,WatcherProgressUpdateEvent>(
      &v12,
      (std::weak_ptr<PlayerSignInComp> *)EventComp,
      (void (*)(PlayerSignInComp *, const WatcherProgressUpdateEvent *))&v12.event_center_.context_.pending_que_.c._M_impl._M_start._M_last);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v12);
    std::weak_ptr<PlayerSignInComp>::~weak_ptr((std::weak_ptr<PlayerSignInComp> *const)&v12.event_center_.context_.pending_que_.c._M_impl._M_start._M_last);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    v6 = Player::getEventComp(this->player_);
    std::weak_ptr<PlayerSignInComp>::weak_ptr(
      (std::weak_ptr<PlayerSignInComp> *const)&v12.event_center_.context_.pending_que_.c._M_impl._M_start._M_last,
      (const std::weak_ptr<PlayerSignInComp> *)(p_event_center + 64));
    PlayerEventComp::registerObserver<PlayerSignInComp,PlayerLevelupEvent>(
      (PlayerEventComp *const)&v12._M_weak_this._M_refcount,
      (std::weak_ptr<PlayerSignInComp> *)v6,
      (void (*)(PlayerSignInComp *, const PlayerLevelupEvent *))&v12.event_center_.context_.pending_que_.c._M_impl._M_start._M_last);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v12._M_weak_this._M_refcount);
    std::weak_ptr<PlayerSignInComp>::~weak_ptr((std::weak_ptr<PlayerSignInComp> *const)&v12.event_center_.context_.pending_que_.c._M_impl._M_start._M_last);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    v7 = Player::getEventComp(this->player_);
    std::weak_ptr<PlayerSignInComp>::weak_ptr(
      (std::weak_ptr<PlayerSignInComp> *const)&v12.event_center_.context_.pending_que_.c._M_impl._M_start._M_last,
      (const std::weak_ptr<PlayerSignInComp> *)(p_event_center + 64));
    PlayerEventComp::registerObserver<PlayerSignInComp,FinishQuestEvent>(
      (PlayerEventComp *const)&v12.event_center_,
      (std::weak_ptr<PlayerSignInComp> *)v7,
      (void (*)(PlayerSignInComp *, const FinishQuestEvent *))&v12.event_center_.context_.pending_que_.c._M_impl._M_start._M_last);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v12.event_center_);
    std::weak_ptr<PlayerSignInComp>::~weak_ptr((std::weak_ptr<PlayerSignInComp> *const)&v12.event_center_.context_.pending_que_.c._M_impl._M_start._M_last);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    v8 = Player::getEventComp(this->player_);
    std::weak_ptr<PlayerSignInComp>::weak_ptr(
      (std::weak_ptr<PlayerSignInComp> *const)&v12.event_center_.context_.pending_que_.c._M_impl._M_start._M_last,
      (const std::weak_ptr<PlayerSignInComp> *)(p_event_center + 64));
    PlayerEventComp::registerObserver<PlayerSignInComp,FinishParentQuestEvent>(
      (PlayerEventComp *const)&v12.event_center_.context_.pending_que_,
      (std::weak_ptr<PlayerSignInComp> *)v8,
      (void (*)(PlayerSignInComp *, const FinishParentQuestEvent *))&v12.event_center_.context_.pending_que_.c._M_impl._M_start._M_last);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v12.event_center_.context_.pending_que_);
    std::weak_ptr<PlayerSignInComp>::~weak_ptr((std::weak_ptr<PlayerSignInComp> *const)&v12.event_center_.context_.pending_que_.c._M_impl._M_start._M_last);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    v9 = Player::getEventComp(this->player_);
    std::weak_ptr<PlayerSignInComp>::weak_ptr(
      (std::weak_ptr<PlayerSignInComp> *const)&v12.event_center_.context_.pending_que_.c._M_impl._M_start._M_last,
      (const std::weak_ptr<PlayerSignInComp> *)(p_event_center + 64));
    PlayerEventComp::registerObserver<PlayerSignInComp,AvatarLevelupEvent>(
      (PlayerEventComp *const)&v12.event_center_.context_.pending_que_.c._M_impl._M_start,
      (std::weak_ptr<PlayerSignInComp> *)v9,
      (void (*)(PlayerSignInComp *, const AvatarLevelupEvent *))&v12.event_center_.context_.pending_que_.c._M_impl._M_start._M_last);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v12.event_center_.context_.pending_que_.c._M_impl._M_start);
    std::weak_ptr<PlayerSignInComp>::~weak_ptr((std::weak_ptr<PlayerSignInComp> *const)&v12.event_center_.context_.pending_que_.c._M_impl._M_start._M_last);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    v10 = Player::getEventComp(this->player_);
    std::weak_ptr<PlayerSignInComp>::weak_ptr(
      (std::weak_ptr<PlayerSignInComp> *const)&v12.event_center_.context_.pending_que_.c._M_impl._M_start,
      (const std::weak_ptr<PlayerSignInComp> *)(p_event_center + 64));
    PlayerEventComp::registerObserver<PlayerSignInComp,ObtainAvatarEvent>(
      (PlayerEventComp *const)&v12.event_center_.context_.pending_que_.c._M_impl._M_start._M_last,
      (std::weak_ptr<PlayerSignInComp> *)v10,
      (void (*)(PlayerSignInComp *, const ObtainAvatarEvent *))&v12.event_center_.context_.pending_que_.c._M_impl._M_start);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v12.event_center_.context_.pending_que_.c._M_impl._M_start._M_last);
    std::weak_ptr<PlayerSignInComp>::~weak_ptr((std::weak_ptr<PlayerSignInComp> *const)&v12.event_center_.context_.pending_que_.c._M_impl._M_start);
    v4 = 0;
    std::weak_ptr<PlayerSignInComp>::~weak_ptr((std::weak_ptr<PlayerSignInComp> *const)(p_event_center + 64));
  }
  std::shared_ptr<PlayerSignInComp>::~shared_ptr((std::shared_ptr<PlayerSignInComp> *const)(p_event_center + 32));
  result = v4;
  if ( &v12.event_center_.context_.event_center_ == (EventCenter **)p_event_center )
  {
    *(_QWORD *)((p_event_center >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((p_event_center >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)p_event_center = 1172321806LL;
    *(_QWORD *)((p_event_center >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((p_event_center >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 135: range 0000000016D0836C-0000000016D083B3
int32_t __cdecl PlayerSignInComp::onLogin(PlayerSignInComp *const this, bool is_new_player)
{
  PlayerSignInComp::checkRefreshSchedule(this);
  PlayerSignInComp::checkAndAddNewBonusActivity(this);
  PlayerSignInComp::checkAndOpenBonusActivity(this);
  PlayerSignInComp::checkRevertBonusActivity(this);
  return 0;
};

// Line 148: range 0000000016D083B4-0000000016D083DE
void __cdecl PlayerSignInComp::onDailyRefresh(PlayerSignInComp *const this)
{
  if ( PlayerSignInComp::checkRefreshSchedule(this) )
    PlayerSignInComp::notifyAllOpActivityTagBriefInfo(this);
};

// Line 157: range 0000000016D083E0-0000000016D08513
int32_t __cdecl PlayerSignInComp::start(PlayerSignInComp *const this)
{
  common::milog::MiLogStream *v2; // rbx
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v5; // [rsp+20h] [rbp-30h] BYREF

  if ( common::tools::MiTimer::isActive(&this->refresh_op_activity_timer_)
    || !PlayerUnixTimer::startS(
          &this->refresh_op_activity_timer_,
          0x3Cu,
          1,
          "./src/player/sign_in/player_sign_in_comp.cpp",
          "start",
          158) )
  {
    return 0;
  }
  common::milog::MiLogStream::create(
    &v5,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/sign_in/player_sign_in_comp.cpp",
    "start",
    160);
  v2 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
         &v5,
         (const char (*)[46])"refresh_op_activity_timer_ start failed, uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
  common::milog::MiLogStream::~MiLogStream(&v5);
  return -1;
};

// Line 168: range 0000000016D08514-0000000016D08532
void __cdecl PlayerSignInComp::checkOpenOpActivityOnTimer(PlayerSignInComp *const this, uint64_t now_ms)
{
  PlayerSignInComp::checkRefreshScheduleAndTryNotify(this);
};

// Line 174: range 0000000016D08534-0000000016D08552
int32_t __cdecl PlayerSignInComp::notifyAllData(PlayerSignInComp *const this)
{
  PlayerSignInComp::notifyAllOpActivityTagBriefInfo(this);
  return 0;
};

// Line 181: range 0000000016D08554-0000000016D0891A
bool __cdecl PlayerSignInComp::checkRefreshSchedule(PlayerSignInComp *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::__detail::_Node_iterator<std::pair<unsigned int const,SignInRecord>,false,false>::pointer v4; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v5; // rax
  _DWORD *v6; // rdx
  SignInRecord *v7; // r8
  bool result; // al
  bool is_has_change; // [rsp+1Bh] [rbp-F5h]
  uint32_t now; // [rsp+1Ch] [rbp-F4h]
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-F0h] BYREF
  const data::DbSignInConfigMgr *db_sign_in_config_mgr; // [rsp+28h] [rbp-E8h]
  const std::vector<unsigned int> *cur_schedule_id_vec; // [rsp+30h] [rbp-E0h]
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-D8h]
  std::shared_ptr<Config> v15; // [rsp+40h] [rbp-D0h] BYREF
  char v16[192]; // [rsp+50h] [rbp-C0h] BYREF

  v1 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 4 15 schedule_id:202 48 8 8 iter:188 80 40 18 sign_in_record:208";
  *(_QWORD *)(v1 + 16) = PlayerSignInComp::checkRefreshSchedule;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61956;
  v3[536862721] = -234881024;
  v3[536862722] = 62194;
  v3[536862723] = -218103808;
  v3[536862724] = -202116109;
  is_has_change = 0;
  now = common::tools::TimeUtils::getNow();
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v15);
  db_sign_in_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15)->design_config.db_config_mgr.db_local_config_mgr.sign_in_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v15);
  cur_schedule_id_vec = data::DbSignInConfigMgr::findActiveSignInSchedules(db_sign_in_config_mgr, now);
  *(std::unordered_map<unsigned int,SignInRecord>::iterator *)(v1 + 48) = std::unordered_map<unsigned int,SignInRecord>::begin(&this->sign_in_record_map_);
  while ( 1 )
  {
    __for_end._M_current = (const unsigned int *)std::unordered_map<unsigned int,SignInRecord>::end(&this->sign_in_record_map_)._M_cur;
    if ( !std::__detail::operator!=<std::pair<unsigned int const,SignInRecord>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,SignInRecord>,false> *)(v1 + 48),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,SignInRecord>,false> *)&__for_end) )
      break;
    v4 = std::__detail::_Node_iterator<std::pair<unsigned int const,SignInRecord>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,SignInRecord>,false,false> *const)(v1 + 48));
    if ( !common::tools::MiscUtils::isContains<unsigned int>(cur_schedule_id_vec, &v4->first) )
    {
      *(std::unordered_map<unsigned int,SignInRecord>::iterator *)(v1 + 48) = std::unordered_map<unsigned int,SignInRecord>::erase(
                                                                                &this->sign_in_record_map_,
                                                                                *(std::unordered_map<unsigned int,SignInRecord>::iterator *)(v1 + 48));
      is_has_change = 1;
    }
    else
    {
      std::__detail::_Node_iterator<std::pair<unsigned int const,SignInRecord>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,SignInRecord>,false,false> *const)(v1 + 48));
    }
  }
  __for_range = cur_schedule_id_vec;
  *(std::vector<unsigned int>::const_iterator *)(v1 + 48) = std::vector<unsigned int>::begin(cur_schedule_id_vec);
  __for_end._M_current = std::vector<unsigned int>::end(__for_range)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
            (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v1 + 48),
            &__for_end) )
  {
    v5 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v1 + 48));
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    *(_DWORD *)(v1 + 32) = *v6;
    if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,SignInRecord>,unsigned int>(
            &this->sign_in_record_map_,
            (const unsigned int *)(v1 + 32)) )
    {
      SignInRecord::SignInRecord((SignInRecord *const)(v1 + 80));
      *(_DWORD *)(v1 + 80) = *(_DWORD *)(v1 + 32);
      *(_DWORD *)(v1 + 84) = 0;
      *(_DWORD *)(v1 + 88) = 0;
      std::unordered_map<unsigned int,SignInRecord>::emplace<unsigned int &,SignInRecord&>(
        &this->sign_in_record_map_,
        (unsigned int *)(v1 + 32),
        (SignInRecord *)(v1 + 80),
        (unsigned int *)&this->sign_in_record_map_,
        v7);
      is_has_change = 1;
      SignInRecord::~SignInRecord((SignInRecord *const)(v1 + 80));
    }
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v1 + 48));
  }
  result = (is_has_change | PlayerSignInComp::tryAutoSignInAllActivity(this)) != 0;
  if ( v16 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 223: range 0000000016D0891C-0000000016D08946
void __cdecl PlayerSignInComp::checkRefreshScheduleAndTryNotify(PlayerSignInComp *const this)
{
  if ( PlayerSignInComp::checkRefreshSchedule(this) )
    PlayerSignInComp::notifyAllOpActivityTagBriefInfo(this);
};

// Line 232: range 0000000016D08948-0000000016D08E03
int32_t __cdecl PlayerSignInComp::getCurOrNextSignInInfo(
        const PlayerSignInComp *const this,
        google::protobuf::RepeatedPtrField<proto::SignInInfo> *proto_sign_in_info_list)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  proto::SignInInfo *v5; // rsi
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v6; // rax
  _DWORD *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rcx
  int32_t result; // eax
  uint32_t now; // [rsp+14h] [rbp-ECh]
  std::unordered_map<unsigned int,SignInRecord>::const_iterator __for_begin; // [rsp+18h] [rbp-E8h] BYREF
  std::unordered_map<unsigned int,SignInRecord>::const_iterator __for_end; // [rsp+20h] [rbp-E0h] BYREF
  const data::DbSignInConfigMgr *db_sign_in_config_mgr; // [rsp+28h] [rbp-D8h]
  const std::vector<unsigned int> *next_schedule_id_vec; // [rsp+30h] [rbp-D0h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+38h] [rbp-C8h]
  const data::SignInScheduleConfig *schedule_config_ptr; // [rsp+40h] [rbp-C0h]
  proto::SignInInfo *sign_in_info; // [rsp+48h] [rbp-B8h]
  const std::unordered_map<unsigned int,SignInRecord> *__for_range; // [rsp+50h] [rbp-B0h]
  const std::pair<unsigned int const,SignInRecord> *v22; // [rsp+58h] [rbp-A8h]
  std::tuple_element<0,const std::pair<unsigned int const,SignInRecord> >::type *schedule_id; // [rsp+60h] [rbp-A0h]
  std::tuple_element<1,const std::pair<unsigned int const,SignInRecord> >::type *_; // [rsp+68h] [rbp-98h]
  std::shared_ptr<Config> v25; // [rsp+70h] [rbp-90h] BYREF
  common::milog::MiLogStream v26; // [rsp+80h] [rbp-80h] BYREF
  char v27[96]; // [rsp+A0h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 15 schedule_id:248";
  *(_QWORD *)(v2 + 16) = PlayerSignInComp::getCurOrNextSignInInfo;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  now = common::tools::TimeUtils::getNow();
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v25);
  db_sign_in_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v25)->design_config.db_config_mgr.db_local_config_mgr.sign_in_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v25);
  if ( !std::unordered_map<unsigned int,SignInRecord>::empty(&this->sign_in_record_map_) )
  {
    __for_range = &this->sign_in_record_map_;
    __for_begin._M_cur = std::unordered_map<unsigned int,SignInRecord>::begin(&this->sign_in_record_map_)._M_cur;
    __for_end._M_cur = std::unordered_map<unsigned int,SignInRecord>::end(&this->sign_in_record_map_)._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,SignInRecord>,false>(&__for_begin, &__for_end) )
    {
      v22 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,SignInRecord>,false,false>::operator*(&__for_begin);
      schedule_id = std::get<0ul,unsigned int const,SignInRecord>(v22);
      _ = (std::tuple_element<1,const std::pair<unsigned int const,SignInRecord> >::type *)std::get<1ul,unsigned int const,SignInRecord>(v22);
      if ( *(_BYTE *)(((unsigned __int64)schedule_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)schedule_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)schedule_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(schedule_id);
      }
      if ( PlayerSignInComp::isSignInActivityCondSatisfied(this, *schedule_id) )
      {
        v5 = google::protobuf::RepeatedPtrField<proto::SignInInfo>::Add(proto_sign_in_info_list);
        if ( *(_BYTE *)(((unsigned __int64)schedule_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)schedule_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)schedule_id >> 3)
                                                                        + 0x7FFF8000) )
        {
          __asan_report_load4(schedule_id);
        }
        PlayerSignInComp::scheduleRecordToClient(this, *schedule_id, v5);
      }
      std::__detail::_Node_const_iterator<std::pair<unsigned int const,SignInRecord>,false,false>::operator++(&__for_begin);
    }
  }
  else
  {
    next_schedule_id_vec = data::DbSignInConfigMgr::findNextSignInSchedules(db_sign_in_config_mgr, now);
    __for_range_0 = next_schedule_id_vec;
    __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,SignInRecord>,false>::__node_type *)std::vector<unsigned int>::begin(next_schedule_id_vec)._M_current;
    __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,SignInRecord>,false>::__node_type *)std::vector<unsigned int>::end(next_schedule_id_vec)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&__for_begin,
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&__for_end) )
    {
      v6 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__for_begin);
      v7 = v6;
      if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v6);
      }
      *(_DWORD *)(v2 + 32) = *v7;
      schedule_config_ptr = data::DbSignInConfigMgr::findSignInScheduleConfig(
                              db_sign_in_config_mgr,
                              *(_DWORD *)(v2 + 32));
      if ( schedule_config_ptr )
      {
        sign_in_info = google::protobuf::RepeatedPtrField<proto::SignInInfo>::Add(proto_sign_in_info_list);
        PlayerSignInComp::scheduleConfigToClient(this, schedule_config_ptr, sign_in_info);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v26,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/sign_in/player_sign_in_comp.cpp",
          "getCurOrNextSignInInfo",
          253);
        v8 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
               &v26,
               (const char (*)[44])"findSignInScheduleConfig fail, schedule_id:");
        v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 32));
        v10 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v9, (const char (*)[9])" player:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        operator<<(v10, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v26);
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__for_begin);
    }
  }
  result = 0;
  if ( v27 == (char *)v2 )
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

// Line 265: range 0000000016D08E04-0000000016D09D2D
__int64 __fastcall PlayerSignInComp::doGetSignInReward(
        PlayerSignInComp *const this,
        __int32 schedule_id,
        __int32 reward_day)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  PlayerBasicComp *BasicComp; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rcx
  unsigned int v10; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rcx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rcx
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rcx
  PlayerItemComp *ItemComp; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rcx
  PlayerItemComp *v36; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGetSignInReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGetSignInReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGetSignInReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v39; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGetSignInReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v40; // rax
  google::protobuf::RepeatedPtrField<proto_log::ItemLog> *v41; // rax
  Player *player; // r14
  std::vector<unsigned int>::size_type v43; // rcx
  __int64 result; // rax
  std::string v45; // [rsp+0h] [rbp-220h]
  char *v46; // [rsp+8h] [rbp-218h]
  PlayerSignInComp *thisa; // [rsp+18h] [rbp-208h]
  std::vector<data::SignInRewardItemConfig>::const_iterator __for_begin; // [rsp+28h] [rbp-1F8h] BYREF
  std::vector<data::SignInRewardItemConfig>::const_iterator __for_end; // [rsp+30h] [rbp-1F0h] BYREF
  SignInRecord *sign_in_record; // [rsp+38h] [rbp-1E8h]
  const data::SignInScheduleConfig *schedule_config_ptr; // [rsp+40h] [rbp-1E0h]
  const data::SignInDayExcelConfig *sign_in_day_config_ptr; // [rsp+48h] [rbp-1D8h]
  const std::vector<data::SignInRewardItemConfig> *__for_range; // [rsp+50h] [rbp-1D0h]
  const data::SignInRewardItemConfig *reward_item_config; // [rsp+58h] [rbp-1C8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+60h] [rbp-1C0h] BYREF
  std::string v56; // [rsp+70h] [rbp-1B0h] BYREF
  char v57[400]; // [rsp+90h] [rbp-190h] BYREF

  *(&v45._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  HIDWORD(v45._anon_0._M_allocated_capacity) = schedule_id;
  *(_DWORD *)v45._anon_0._M_local_buf = reward_day;
  v3 = (unsigned __int64)v57;
  v45._M_string_length = (std::string::size_type)v57;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(352LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "10 48 1 10 holder:266 64 4 13 config_id:283 80 4 7 ret:316 96 4 15 schedule_id:264 112 4 14 rewa"
                        "rd_day:264 128 8 8 iter:268 160 16 11 log_ptr:328 192 16 14 item_param:309 224 24 18 item_param_"
                        "vec:306 288 24 17 action_reason:315";
  *(_QWORD *)(v3 + 16) = PlayerSignInComp::doGetSignInReward;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -234556924;
  v5[536862723] = -234556924;
  v5[536862724] = -218959360;
  v5[536862725] = -219021312;
  v5[536862726] = -219021312;
  v5[536862727] = -234881024;
  v5[536862728] = -218959118;
  v5[536862729] = -218103808;
  v5[536862730] = -202116109;
  *(_DWORD *)(v3 + 96) = schedule_id;
  *(_DWORD *)(v3 + 112) = *(_DWORD *)v45._anon_0._M_local_buf;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  BasicComp = Player::getBasicComp(this->player_);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v56, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48), 0xAF0u, v45);
  std::string::~string(&v56);
  *(std::unordered_map<unsigned int,SignInRecord>::iterator *)(v3 + 128) = std::unordered_map<unsigned int,SignInRecord>::find(
                                                                             &thisa->sign_in_record_map_,
                                                                             (const std::unordered_map<unsigned int,SignInRecord>::key_type *)(v3 + 96));
  __for_end._M_current = (const data::SignInRewardItemConfig *)std::unordered_map<unsigned int,SignInRecord>::end(&thisa->sign_in_record_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,SignInRecord>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,SignInRecord>,false> *)(v3 + 128),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,SignInRecord>,false> *)&__for_end) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v56,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/sign_in/player_sign_in_comp.cpp",
      "doGetSignInReward",
      271);
    v7 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
           (common::milog::MiLogStream *const)&v56,
           (const char (*)[39])"sign_in_record not found, schedule_id:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 96));
    v9 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v8, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&thisa->player_);
    operator<<(v9, thisa->player_);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v56);
    v10 = 1506;
    goto LABEL_53;
  }
  sign_in_record = &std::__detail::_Node_iterator<std::pair<unsigned int const,SignInRecord>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,SignInRecord>,false,false> *const)(v3 + 128))->second;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 192));
  v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
  schedule_config_ptr = data::DbSignInConfigMgr::findSignInScheduleConfig(
                          &v11->design_config.db_config_mgr.db_local_config_mgr.sign_in_config_mgr,
                          *(_DWORD *)(v3 + 96));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 192));
  if ( !schedule_config_ptr )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v56,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/sign_in/player_sign_in_comp.cpp",
      "doGetSignInReward",
      279);
    v12 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
            (common::milog::MiLogStream *const)&v56,
            (const char (*)[44])"findSignInScheduleConfig fail, schedule_id:");
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 96));
    v14 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v13, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&thisa->player_);
LABEL_13:
    operator<<(v14, thisa->player_);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v56);
    v10 = 5;
    goto LABEL_53;
  }
  if ( *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)schedule_config_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->config_id >> 3)
                                                                      + 0x7FFF8000) )
  {
    __asan_report_load4(&schedule_config_ptr->config_id);
  }
  *(_DWORD *)(v3 + 64) = schedule_config_ptr->config_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 192));
  v15 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
  sign_in_day_config_ptr = SignInExcelConfigMgr::findSignIdRewardItemConfig(
                             &v15->design_config.txt_config_mgr.sign_in_config_mgr,
                             *(_DWORD *)(v3 + 64),
                             *(_DWORD *)(v3 + 112));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 192));
  if ( !sign_in_day_config_ptr )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v56,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/sign_in/player_sign_in_comp.cpp",
      "doGetSignInReward",
      287);
    v16 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
            (common::milog::MiLogStream *const)&v56,
            (const char (*)[44])"findSignIdRewardItemConfig fail, config_id:");
    v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v3 + 64));
    v18 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v17, (const char (*)[13])" reward_day:");
    v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v3 + 112));
    v14 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v19, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&thisa->player_);
    goto LABEL_13;
  }
  if ( *(_BYTE *)(((unsigned __int64)&sign_in_record->sign_in_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)sign_in_record + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&sign_in_record->sign_in_count >> 3)
                                                                 + 0x7FFF8000) )
  {
    __asan_report_load4(&sign_in_record->sign_in_count);
  }
  if ( sign_in_record->sign_in_count >= *(_DWORD *)(v3 + 112) )
  {
    if ( common::tools::MiscUtils::isContains<unsigned int>(
           &sign_in_record->reward_day_vec,
           (const unsigned int *)(v3 + 112)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v56,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/sign_in/player_sign_in_comp.cpp",
        "doGetSignInReward",
        301);
      v25 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
              (common::milog::MiLogStream *const)&v56,
              (const char (*)[30])"already rewarded, reward_day:");
      v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v25,
              (const unsigned int *)(v3 + 112));
      v27 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v26, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&thisa->player_);
      operator<<(v27, thisa->player_);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v56);
      v10 = 1510;
    }
    else
    {
      std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v3 + 224));
      __for_range = &sign_in_day_config_ptr->reward_item_list;
      __for_begin._M_current = std::vector<data::SignInRewardItemConfig>::begin(&sign_in_day_config_ptr->reward_item_list)._M_current;
      __for_end._M_current = std::vector<data::SignInRewardItemConfig>::end(__for_range)._M_current;
      while ( __gnu_cxx::operator!=<data::SignInRewardItemConfig const*,std::vector<data::SignInRewardItemConfig>>(
                &__for_begin,
                &__for_end) )
      {
        reward_item_config = __gnu_cxx::__normal_iterator<data::SignInRewardItemConfig const*,std::vector<data::SignInRewardItemConfig>>::operator*(&__for_begin);
        *(_DWORD *)(v3 + 192) = 0;
        *(_DWORD *)(v3 + 196) = 0;
        *(_DWORD *)(v3 + 200) = 0;
        *(_DWORD *)(v3 + 204) = 0;
        if ( *(_BYTE *)(((unsigned __int64)&reward_item_config->item_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&reward_item_config->item_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&reward_item_config->item_id);
        }
        *(_DWORD *)(v3 + 192) = reward_item_config->item_id;
        if ( *(_BYTE *)(((unsigned __int64)&reward_item_config->count >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)reward_item_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&reward_item_config->count >> 3)
                                                                            + 0x7FFF8000) )
        {
          __asan_report_load4(&reward_item_config->count);
        }
        *(_DWORD *)(v3 + 196) = reward_item_config->count;
        std::vector<ItemParam>::push_back(
          (std::vector<ItemParam> *const)(v3 + 224),
          (const std::vector<ItemParam>::value_type *)(v3 + 192));
        __gnu_cxx::__normal_iterator<data::SignInRewardItemConfig const*,std::vector<data::SignInRewardItemConfig>>::operator++(&__for_begin);
      }
      ActionReason::ActionReason((ActionReason *const)(v3 + 288), ACTION_REASON_SIGN_IN_REWARD, ITEM_LIMIT_SIGN_IN);
      if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&thisa->player_);
      ItemComp = Player::getItemComp(thisa->player_);
      *(_DWORD *)(v3 + 80) = PlayerItemComp::checkAddItemBatch(
                               ItemComp,
                               (const std::vector<ItemParam> *)(v3 + 224),
                               (const ActionReason *)(v3 + 288));
      if ( *(_DWORD *)(v3 + 80) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v56,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/sign_in/player_sign_in_comp.cpp",
          "doGetSignInReward",
          319);
        v29 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                (common::milog::MiLogStream *const)&v56,
                (const char (*)[29])"checkAddItemBatch fail, ret:");
        v30 = common::milog::MiLogStream::operator<<<int,(int *)0>(v29, (const int *)(v3 + 80));
        v31 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                v30,
                (const char (*)[17])" item_param_vec:");
        v32 = common::milog::MiLogStream::operator<<<ItemParam>(v31, (const std::vector<ItemParam> *)(v3 + 224));
        v33 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v32, (const char (*)[12])" config_id:");
        v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v33,
                (const unsigned int *)(v3 + 64));
        v35 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v34, (const char (*)[9])" player:");
        if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&thisa->player_);
        operator<<(v35, thisa->player_);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v56);
        v10 = *(_DWORD *)(v3 + 80);
      }
      else
      {
        std::vector<unsigned int>::push_back(
          &sign_in_record->reward_day_vec,
          (const std::vector<unsigned int>::value_type *)(v3 + 112));
        if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&thisa->player_);
        v36 = Player::getItemComp(thisa->player_);
        PlayerItemComp::addItemBatch(
          v36,
          (const std::vector<ItemParam> *)(v3 + 224),
          (const ActionReason *)(v3 + 288),
          0LL);
        common::tools::perf::make_shared<proto_log::PlayerLogBodyGetSignInReward>();
        v37 = std::__shared_ptr_access<proto_log::PlayerLogBodyGetSignInReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGetSignInReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
        proto_log::PlayerLogBodyGetSignInReward::set_schedule_id(v37, *(_DWORD *)(v3 + 96));
        v38 = std::__shared_ptr_access<proto_log::PlayerLogBodyGetSignInReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGetSignInReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
        proto_log::PlayerLogBodyGetSignInReward::set_config_id(v38, *(_DWORD *)(v3 + 64));
        v39 = std::__shared_ptr_access<proto_log::PlayerLogBodyGetSignInReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGetSignInReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
        proto_log::PlayerLogBodyGetSignInReward::set_reward_day(v39, *(_DWORD *)(v3 + 112));
        v40 = std::__shared_ptr_access<proto_log::PlayerLogBodyGetSignInReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGetSignInReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
        v41 = proto_log::PlayerLogBodyGetSignInReward::mutable_reward_item_list(v40);
        common::tools::MiscUtils::vectorToRepeated<ItemParam,proto_log::ItemLog,void (ItemParam::*)(proto_log::ItemLog&)const>(
          (const std::vector<ItemParam> *)(v3 + 224),
          v41,
          (void (*)(const ItemParam *, proto_log::ItemLog *))ItemParam::toItemLog);
        if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&thisa->player_);
        player = thisa->player_;
        std::shared_ptr<google::protobuf::Message>::shared_ptr(
          (std::shared_ptr<google::protobuf::Message> *const)(v3 + 192),
          0LL);
        std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyGetSignInReward,void>(
          &p_body_ptr,
          (const std::shared_ptr<proto_log::PlayerLogBodyGetSignInReward> *)(v3 + 160));
        Player::printStatLog(player, &p_body_ptr, (MessagePtr *)(v3 + 192), 0xEu);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)(v3 + 192));
        v43 = std::vector<unsigned int>::size(&sign_in_record->reward_day_vec);
        if ( *(_BYTE *)(((unsigned __int64)&sign_in_record->sign_in_count >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)sign_in_record + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&sign_in_record->sign_in_count >> 3)
                                                                       + 0x7FFF8000) )
        {
          __asan_report_load4(&sign_in_record->sign_in_count);
        }
        if ( v43 >= sign_in_record->sign_in_count )
          PlayerSignInComp::notifyAllOpActivityTagBriefInfo(thisa);
        v10 = 0;
        std::shared_ptr<proto_log::PlayerLogBodyGetSignInReward>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyGetSignInReward> *const)(v3 + 160));
      }
      std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v3 + 224));
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v56,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/sign_in/player_sign_in_comp.cpp",
      "doGetSignInReward",
      294);
    v20 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
            (common::milog::MiLogStream *const)&v56,
            (const char (*)[12])"reward_day:");
    v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v3 + 112));
    v22 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
            v21,
            (const char (*)[31])" sign_in_record.sign_in_count:");
    v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &sign_in_record->sign_in_count);
    v24 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v23, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&thisa->player_);
    operator<<(v24, thisa->player_);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v56);
    v10 = -1;
  }
LABEL_53:
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48));
  result = v10;
  if ( v46 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = -168430091;
  }
  return result;
};

// Line 346: range 0000000016D09D2E-0000000016D0A143
__int64 __fastcall PlayerSignInComp::scheduleRecordToClient(
        const PlayerSignInComp *const this,
        uint32_t schedule_id,
        proto::SignInInfo *sign_in_info)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rcx
  __int64 result; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rcx
  bool isSignInActivityCondSatisfied; // al
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,SignInRecord>,false> __y; // [rsp+28h] [rbp-C8h] BYREF
  const SignInRecord *sign_in_record; // [rsp+30h] [rbp-C0h]
  const data::SignInScheduleConfig *schedule_config_ptr; // [rsp+38h] [rbp-B8h]
  std::shared_ptr<Config> v19; // [rsp+40h] [rbp-B0h] BYREF
  common::milog::MiLogStream v20; // [rsp+50h] [rbp-A0h] BYREF
  char v21[128]; // [rsp+70h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 15 schedule_id:345 64 8 8 iter:347";
  *(_QWORD *)(v3 + 16) = PlayerSignInComp::scheduleRecordToClient;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = schedule_id;
  *(std::unordered_map<unsigned int,SignInRecord>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,SignInRecord>::find(
                                                                                  &this->sign_in_record_map_,
                                                                                  (const std::unordered_map<unsigned int,SignInRecord>::key_type *)(v3 + 48));
  __y._M_cur = std::unordered_map<unsigned int,SignInRecord>::end(&this->sign_in_record_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,SignInRecord>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,SignInRecord>,false> *)(v3 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/sign_in/player_sign_in_comp.cpp",
      "scheduleRecordToClient",
      350);
    v6 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
           &v20,
           (const char (*)[39])"sign_in_record not found, schedule_id:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
    v8 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v7, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v8, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v20);
    result = 1506LL;
  }
  else
  {
    sign_in_record = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,SignInRecord>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,SignInRecord>,false,false> *const)(v3 + 64))->second;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v19);
    v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19);
    schedule_config_ptr = data::DbSignInConfigMgr::findSignInScheduleConfig(
                            &v10->design_config.db_config_mgr.db_local_config_mgr.sign_in_config_mgr,
                            *(_DWORD *)(v3 + 48));
    std::shared_ptr<Config>::~shared_ptr(&v19);
    if ( schedule_config_ptr )
    {
      SignInRecord::toClient(sign_in_record, sign_in_info);
      PlayerSignInComp::scheduleConfigToClient(this, schedule_config_ptr, sign_in_info);
      isSignInActivityCondSatisfied = PlayerSignInComp::isSignInActivityCondSatisfied(this, *(_DWORD *)(v3 + 48));
      proto::SignInInfo::set_is_cond_satisfied(sign_in_info, isSignInActivityCondSatisfied);
      result = 0LL;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/sign_in/player_sign_in_comp.cpp",
        "scheduleRecordToClient",
        357);
      v11 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
              &v20,
              (const char (*)[44])"findSignInScheduleConfig fail, schedule_id:");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 48));
      v13 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v12, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      operator<<(v13, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v20);
      result = 5LL;
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

// Line 368: range 0000000016D0A144-0000000016D0AA3F
__int64 __fastcall PlayerSignInComp::tryAutoSignIn(PlayerSignInComp *const this, uint32_t schedule_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rcx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  time_t p_last_sign_in_time; // rdi
  time_t v10; // rsi
  __int64 result; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rcx
  Player *player; // rsi
  uint32_t v27; // ecx
  char v28; // al
  bool v29; // dl
  uint32_t new_sign_in_count; // [rsp+14h] [rbp-FCh]
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,SignInRecord>,false> __y; // [rsp+18h] [rbp-F8h] BYREF
  SignInRecord *sign_in_record; // [rsp+20h] [rbp-F0h]
  const data::SignInScheduleConfig *schedule_config_ptr; // [rsp+28h] [rbp-E8h]
  const data::SignInDayExcelConfig *sign_in_day_config_ptr; // [rsp+30h] [rbp-E0h]
  const data::SignInCondExcelConfig *sign_in_cond_config_ptr; // [rsp+38h] [rbp-D8h]
  std::shared_ptr<Config> v37; // [rsp+40h] [rbp-D0h] BYREF
  common::milog::MiLogStream v38; // [rsp+50h] [rbp-C0h] BYREF
  char v39[160]; // [rsp+70h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 7 now:378 48 4 15 time_offset:379 64 4 13 config_id:392 80 4 15 schedule_id:367 96 8 8 iter:369";
  *(_QWORD *)(v2 + 16) = PlayerSignInComp::tryAutoSignIn;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -234556924;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 80) = schedule_id;
  *(std::unordered_map<unsigned int,SignInRecord>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,SignInRecord>::find(
                                                                            &this->sign_in_record_map_,
                                                                            (const std::unordered_map<unsigned int,SignInRecord>::key_type *)(v2 + 80));
  __y._M_cur = std::unordered_map<unsigned int,SignInRecord>::end(&this->sign_in_record_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,SignInRecord>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,SignInRecord>,false> *)(v2 + 96),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v38,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/sign_in/player_sign_in_comp.cpp",
      "tryAutoSignIn",
      372);
    v5 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
           &v38,
           (const char (*)[39])"sign_in_record not found, schedule_id:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 80));
    v7 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v6, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
LABEL_25:
    operator<<(v7, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v38);
    result = 0LL;
    goto LABEL_35;
  }
  sign_in_record = &std::__detail::_Node_iterator<std::pair<unsigned int const,SignInRecord>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,SignInRecord>,false,false> *const)(v2 + 96))->second;
  *(_DWORD *)(v2 + 32) = common::tools::TimeUtils::getNow();
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v37);
  v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v37);
  *(_DWORD *)(v2 + 48) = ConstValueExcelConfigMgr::getTimeOffsetSec(&v8->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v37);
  p_last_sign_in_time = *(unsigned int *)(v2 + 48);
  v10 = *(unsigned int *)(v2 + 32);
  if ( *(_BYTE *)(((unsigned __int64)&sign_in_record->last_sign_in_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&sign_in_record->last_sign_in_time >> 3) + 0x7FFF8000) <= 3 )
  {
    p_last_sign_in_time = (time_t)&sign_in_record->last_sign_in_time;
    __asan_report_load4(&sign_in_record->last_sign_in_time);
  }
  if ( common::tools::TimeUtils::isSameDay(sign_in_record->last_sign_in_time, v10, p_last_sign_in_time) )
  {
    result = 0LL;
    goto LABEL_35;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v37);
  v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v37);
  schedule_config_ptr = data::DbSignInConfigMgr::findSignInScheduleConfig(
                          &v12->design_config.db_config_mgr.db_local_config_mgr.sign_in_config_mgr,
                          *(_DWORD *)(v2 + 80));
  std::shared_ptr<Config>::~shared_ptr(&v37);
  if ( !schedule_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v38,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/sign_in/player_sign_in_comp.cpp",
      "tryAutoSignIn",
      389);
    v13 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
            &v38,
            (const char (*)[44])"findSignInScheduleConfig fail, schedule_id:");
    v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 80));
    v7 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v14, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    goto LABEL_25;
  }
  if ( *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)schedule_config_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->config_id >> 3)
                                                                      + 0x7FFF8000) )
  {
    __asan_report_load4(&schedule_config_ptr->config_id);
  }
  *(_DWORD *)(v2 + 64) = schedule_config_ptr->config_id;
  if ( *(_BYTE *)(((unsigned __int64)&sign_in_record->sign_in_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)sign_in_record + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&sign_in_record->sign_in_count >> 3)
                                                                 + 0x7FFF8000) )
  {
    __asan_report_load4(&sign_in_record->sign_in_count);
  }
  new_sign_in_count = sign_in_record->sign_in_count + 1;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v37);
  v15 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v37);
  sign_in_day_config_ptr = SignInExcelConfigMgr::findSignIdRewardItemConfig(
                             &v15->design_config.txt_config_mgr.sign_in_config_mgr,
                             *(_DWORD *)(v2 + 64),
                             new_sign_in_count);
  std::shared_ptr<Config>::~shared_ptr(&v37);
  if ( !sign_in_day_config_ptr )
  {
    result = 0LL;
    goto LABEL_35;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v37);
  v16 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v37);
  sign_in_cond_config_ptr = data::SignInExcelConfigMgrBase::findSignInCondExcelConfig(
                              &v16->design_config.txt_config_mgr.sign_in_config_mgr,
                              *(_DWORD *)(v2 + 64));
  std::shared_ptr<Config>::~shared_ptr(&v37);
  if ( !sign_in_cond_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v38,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/sign_in/player_sign_in_comp.cpp",
      "tryAutoSignIn",
      405);
    v17 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
            &v38,
            (const char (*)[43])"findSignInCondExcelConfig fail, config_id:");
    v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v2 + 64));
    v7 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v18, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    goto LABEL_25;
  }
  if ( !PlayerSignInComp::isOpenCondSatisfied(
          this,
          &sign_in_cond_config_ptr->cond_comb,
          &sign_in_cond_config_ptr->cond_list) )
  {
    result = 0LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v38,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/sign_in/player_sign_in_comp.cpp",
      "tryAutoSignIn",
      414);
    v19 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
            &v38,
            (const char (*)[34])"sign_in_record.last_sign_in_time:");
    v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v19,
            &sign_in_record->last_sign_in_time);
    v21 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v20, (const char (*)[6])" now:");
    v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v2 + 32));
    v23 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v22, (const char (*)[14])" time_offset:");
    v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, (const unsigned int *)(v2 + 48));
    v25 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v24, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    player = this->player_;
    operator<<(v25, player);
    common::milog::MiLogStream::~MiLogStream(&v38);
    v27 = *(_DWORD *)(v2 + 32);
    v28 = *(_BYTE *)(((unsigned __int64)&sign_in_record->last_sign_in_time >> 3) + 0x7FFF8000);
    if ( v28 != 0 && v28 <= 3 )
    {
      LOBYTE(player) = v28 != 0;
      __asan_report_store4(&sign_in_record->last_sign_in_time, player, (_BYTE)sign_in_record + 8);
    }
    sign_in_record->last_sign_in_time = v27;
    v29 = *(_BYTE *)(((unsigned __int64)&sign_in_record->sign_in_count >> 3) + 0x7FFF8000) != 0
       && (char)((((_BYTE)sign_in_record + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&sign_in_record->sign_in_count >> 3)
                                                                    + 0x7FFF8000);
    if ( v29 )
      __asan_report_store4(&sign_in_record->sign_in_count, (((_BYTE)sign_in_record + 4) & 7u) + 3, v29);
    sign_in_record->sign_in_count = new_sign_in_count;
    result = 1LL;
  }
LABEL_35:
  if ( v39 == (char *)v2 )
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

// Line 422: range 0000000016D0AA40-0000000016D0AB56
bool __cdecl PlayerSignInComp::tryAutoSignInAllActivity(PlayerSignInComp *const this)
{
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v1; // rax
  uint32_t *v2; // rdx
  bool is_has_change; // [rsp+13h] [rbp-4Dh]
  std::vector<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-48h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-40h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+28h] [rbp-38h]
  std::vector<unsigned int> v8; // [rsp+30h] [rbp-30h] BYREF

  is_has_change = 0;
  common::tools::MiscUtils::getAllMapKeys<std::unordered_map<unsigned int,SignInRecord>>(
    &v8,
    &this->sign_in_record_map_);
  __for_range = &v8;
  __for_begin._M_current = std::vector<unsigned int>::begin(&v8)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(&v8)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v1 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
    v2 = v1;
    if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v1);
    }
    is_has_change = (unsigned __int8)(is_has_change | PlayerSignInComp::tryAutoSignIn(this, *v2)) != 0;
    __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  std::vector<unsigned int>::~vector(&v8);
  return is_has_change;
};

// Line 433: range 0000000016D0AE90-0000000016D0B828
bool __cdecl PlayerSignInComp::isOpenCondSatisfied(
        const PlayerSignInComp *const this,
        const data::LogicType *logic_type,
        const std::vector<data::SignInCondConfig> *cond_list)
{
  std::vector<bool> *v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::vector<bool>::size_type v6; // rax
  bool v7; // r14
  uint32_t *v8; // rax
  uint32_t *v9; // rdx
  PlayerBasicComp *BasicComp; // rax
  uint32_t Level; // eax
  uint32_t *v12; // rax
  uint32_t *v13; // rdx
  PlayerQuestComp *QuestComp; // rax
  data::QuestState QuestState; // eax
  uint32_t *v16; // rax
  uint32_t *v17; // rdx
  PlayerQuestComp *v18; // rax
  bool isParentQuestOnceFinished; // al
  uint32_t *v20; // rax
  uint32_t *v21; // rdx
  uint32_t *v22; // rax
  uint32_t *v23; // rdx
  uint32_t *v24; // rax
  uint32_t *v25; // rdx
  common::milog::MiLogStream *v26; // rax
  bool result; // al
  const PlayerAvatarComp *AvatarComp; // [rsp+10h] [rbp-150h]
  const PlayerAvatarComp *v29; // [rsp+10h] [rbp-150h]
  const PlayerAvatarComp *v30; // [rsp+10h] [rbp-150h]
  uint32_t avatar_count_limit; // [rsp+38h] [rbp-128h]
  uint32_t avatar_level_limit; // [rsp+3Ch] [rbp-124h]
  uint32_t average_avatar_level; // [rsp+40h] [rbp-120h]
  uint32_t parent_quest_id; // [rsp+44h] [rbp-11Ch]
  uint32_t quest_id; // [rsp+48h] [rbp-118h]
  uint32_t player_level; // [rsp+4Ch] [rbp-114h]
  std::vector<data::SignInCondConfig>::const_iterator __for_begin; // [rsp+50h] [rbp-110h] BYREF
  std::vector<data::SignInCondConfig>::const_iterator __for_end; // [rsp+58h] [rbp-108h] BYREF
  const std::vector<data::SignInCondConfig> *__for_range; // [rsp+60h] [rbp-100h]
  const data::SignInCondConfig *cond; // [rsp+68h] [rbp-F8h]
  common::milog::MiLogStream v42; // [rsp+70h] [rbp-F0h] BYREF
  char v43[208]; // [rsp+90h] [rbp-D0h] BYREF

  v3 = (std::vector<bool> *)v43;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = (std::vector<bool> *)v4;
  }
  v3->_M_impl._M_start._M_p = (std::_Bit_type *)1102416563;
  *(_QWORD *)&v3->_M_impl._M_start._M_offset = "3 48 4 22 total_avatar_level:466 64 4 16 avatar_count:492 80 40 19 cond_result_vec:434";
  v3->_M_impl._M_finish._M_p = (std::_Bit_type *)PlayerSignInComp::isOpenCondSatisfied;
  v5 = (_DWORD *)((unsigned __int64)v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = 61956;
  v5[536862723] = -218103808;
  v5[536862724] = -202116109;
  std::vector<bool>::vector(v3 + 2);
  v6 = std::vector<data::SignInCondConfig>::size(cond_list);
  std::vector<bool>::reserve(v3 + 2, v6);
  __for_range = cond_list;
  __for_begin._M_current = std::vector<data::SignInCondConfig>::begin(cond_list)._M_current;
  __for_end._M_current = std::vector<data::SignInCondConfig>::end(cond_list)._M_current;
  while ( 2 )
  {
    if ( __gnu_cxx::operator!=<data::SignInCondConfig const*,std::vector<data::SignInCondConfig>>(
           &__for_begin,
           &__for_end) )
    {
      cond = __gnu_cxx::__normal_iterator<data::SignInCondConfig const*,std::vector<data::SignInCondConfig>>::operator*(&__for_begin);
      if ( !std::vector<int>::empty(&cond->param_list) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&cond->type);
        }
        switch ( cond->type )
        {
          case SIGN_IN_COND_PLAYER_LEVEL:
            v8 = (uint32_t *)std::vector<int>::operator[](&cond->param_list, 0LL);
            v9 = v8;
            if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v8);
            }
            player_level = *v9;
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            BasicComp = Player::getBasicComp(this->player_);
            Level = PlayerBasicComp::getLevel(BasicComp);
            std::vector<bool>::push_back(v3 + 2, player_level <= Level);
            goto LABEL_42;
          case SIGN_IN_COND_FINISH_QUEST:
            v12 = (uint32_t *)std::vector<int>::operator[](&cond->param_list, 0LL);
            v13 = v12;
            if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v12);
            }
            quest_id = *v13;
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            QuestComp = Player::getQuestComp(this->player_);
            QuestState = PlayerQuestComp::getQuestState(QuestComp, quest_id);
            std::vector<bool>::push_back(v3 + 2, QuestState == QUEST_STATE_FINISHED);
            goto LABEL_42;
          case SIGN_IN_COND_FINISH_PARENT_QUEST:
            v16 = (uint32_t *)std::vector<int>::operator[](&cond->param_list, 0LL);
            v17 = v16;
            if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v16);
            }
            parent_quest_id = *v17;
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            v18 = Player::getQuestComp(this->player_);
            isParentQuestOnceFinished = PlayerQuestComp::isParentQuestOnceFinished(v18, parent_quest_id);
            std::vector<bool>::push_back(v3 + 2, isParentQuestOnceFinished);
            goto LABEL_42;
          case SIGN_IN_COND_AVERAGE_AVATAR_LEVEL:
            v20 = (uint32_t *)std::vector<int>::operator[](&cond->param_list, 0LL);
            v21 = v20;
            if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v20);
            }
            average_avatar_level = *v21;
            v3[1]._M_impl._M_start._M_offset = 0;
            v3[1]._M_impl._M_finish._M_offset = 0;
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            AvatarComp = Player::getAvatarComp(this->player_);
            std::function<ForeachPolicy ()(FormalAvatar const&)>::function<PlayerSignInComp::isOpenCondSatisfied(data::LogicType const&,std::vector<data::SignInCondConfig> const&)::{lambda(FormalAvatar const&)#1},void,void>(
              (std::function<ForeachPolicy(const FormalAvatar&)> *const)&v42,
              (PlayerSignInComp::isOpenCondSatisfied::<lambda(const FormalAvatar&)>)__PAIR128__(
                                                                                      (unsigned __int64)&v3[1]._M_impl._M_finish._M_offset,
                                                                                      (unsigned __int64)&v3[1]._M_impl._M_start._M_offset));
            PlayerAvatarComp::foreachFormalAvatar(AvatarComp, (std::function<ForeachPolicy(const FormalAvatar&)> *)&v42);
            std::function<ForeachPolicy ()(FormalAvatar const&)>::~function((std::function<ForeachPolicy(const FormalAvatar&)> *const)&v42);
            std::vector<bool>::push_back(
              v3 + 2,
              average_avatar_level * v3[1]._M_impl._M_finish._M_offset <= v3[1]._M_impl._M_start._M_offset);
            goto LABEL_42;
          case SIGN_IN_COND_MAX_AVATAR_LEVEL:
            v22 = (uint32_t *)std::vector<int>::operator[](&cond->param_list, 0LL);
            v23 = v22;
            if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v22 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v22);
            }
            avatar_level_limit = *v23;
            v3[1]._M_impl._M_finish._M_offset = 0;
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            v29 = Player::getAvatarComp(this->player_);
            std::function<ForeachPolicy ()(FormalAvatar const&)>::function<PlayerSignInComp::isOpenCondSatisfied(data::LogicType const&,std::vector<data::SignInCondConfig> const&)::{lambda(FormalAvatar const&)#2},void,void>(
              (std::function<ForeachPolicy(const FormalAvatar&)> *const)&v42,
              (PlayerSignInComp::isOpenCondSatisfied::<lambda(const FormalAvatar&)>_0)&v3[1]._M_impl._M_finish._M_offset);
            PlayerAvatarComp::foreachFormalAvatar(v29, (std::function<ForeachPolicy(const FormalAvatar&)> *)&v42);
            std::function<ForeachPolicy ()(FormalAvatar const&)>::~function((std::function<ForeachPolicy(const FormalAvatar&)> *const)&v42);
            std::vector<bool>::push_back(v3 + 2, avatar_level_limit <= v3[1]._M_impl._M_finish._M_offset);
            goto LABEL_42;
          case SIGN_IN_COND_AVATAR_NUM:
            v24 = (uint32_t *)std::vector<int>::operator[](&cond->param_list, 0LL);
            v25 = v24;
            if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v24 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v24);
            }
            avatar_count_limit = *v25;
            v3[1]._M_impl._M_finish._M_offset = 0;
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            v30 = Player::getAvatarComp(this->player_);
            std::function<ForeachPolicy ()(FormalAvatar const&)>::function<PlayerSignInComp::isOpenCondSatisfied(data::LogicType const&,std::vector<data::SignInCondConfig> const&)::{lambda(FormalAvatar const&)#3},void,void>(
              (std::function<ForeachPolicy(const FormalAvatar&)> *const)&v42,
              (PlayerSignInComp::isOpenCondSatisfied::<lambda(const FormalAvatar&)>_1)&v3[1]._M_impl._M_finish._M_offset);
            PlayerAvatarComp::foreachFormalAvatar(v30, (std::function<ForeachPolicy(const FormalAvatar&)> *)&v42);
            std::function<ForeachPolicy ()(FormalAvatar const&)>::~function((std::function<ForeachPolicy(const FormalAvatar&)> *const)&v42);
            std::vector<bool>::push_back(v3 + 2, avatar_count_limit <= v3[1]._M_impl._M_finish._M_offset);
LABEL_42:
            __gnu_cxx::__normal_iterator<data::SignInCondConfig const*,std::vector<data::SignInCondConfig>>::operator++(&__for_begin);
            continue;
          default:
            common::milog::MiLogStream::create(
              &v42,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/sign_in/player_sign_in_comp.cpp",
              "isOpenCondSatisfied",
              502);
            v26 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                    &v42,
                    (const char (*)[35])byte_25F3ABC0);
            common::milog::MiLogStream::operator<<<data::SignInCondType,(data::SignInCondType*)0>(v26, &cond->type);
            common::milog::MiLogStream::~MiLogStream(&v42);
            v7 = 0;
            goto LABEL_46;
        }
      }
      common::milog::MiLogStream::create(
        &v42,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/sign_in/player_sign_in_comp.cpp",
        "isOpenCondSatisfied",
        440);
      common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
        &v42,
        (const char (*)[25])"cond.param_list is empty");
      common::milog::MiLogStream::~MiLogStream(&v42);
      v7 = 0;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)logic_type >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)logic_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)logic_type >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(logic_type);
      }
      v7 = CommonMiscs::evaluateLogicComb(*logic_type, v3 + 2);
    }
    break;
  }
LABEL_46:
  std::vector<bool>::~vector(v3 + 2);
  result = v7;
  if ( v43 == (char *)v3 )
  {
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    v3->_M_impl._M_start._M_p = (std::_Bit_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 468: range 0000000016D0AB58-0000000016D0ACCF
ForeachPolicy __cdecl PlayerSignInComp::isOpenCondSatisfied(data::LogicType const&,std::vector<data::SignInCondConfig> const&)const::{lambda(FormalAvatar const&)#1}::operator()(
        const PlayerSignInComp::isOpenCondSatisfied::<lambda(const FormalAvatar&)> *const __closure,
        const FormalAvatar *formal_avatar)
{
  uint32_t Level; // esi
  uint32_t *total_avatar_level; // rdx
  uint32_t v4; // ecx
  uint32_t *v5; // rdx
  __int64 v6; // rsi
  uint32_t *total_avatar_count; // rdx
  int v8; // ecx
  uint32_t *v9; // rdx
  __int64 v10; // rsi

  Level = Creature::getLevel(formal_avatar);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  total_avatar_level = __closure->__total_avatar_level;
  if ( *(_BYTE *)(((unsigned __int64)__closure->__total_avatar_level >> 3) + 0x7FFF8000) != 0
    && (char)(((__int64)__closure->__total_avatar_level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure->__total_avatar_level >> 3)
                                                                              + 0x7FFF8000) )
  {
    __asan_report_load4(__closure->__total_avatar_level);
  }
  v4 = *total_avatar_level;
  v5 = __closure->__total_avatar_level;
  v6 = v4 + Level;
  if ( *(_BYTE *)(((unsigned __int64)__closure->__total_avatar_level >> 3) + 0x7FFF8000) != 0
    && (char)(((__int64)__closure->__total_avatar_level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure->__total_avatar_level >> 3)
                                                                              + 0x7FFF8000) )
  {
    __asan_report_store4(__closure->__total_avatar_level, v6, (_BYTE)v5);
  }
  *v5 = v6;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__total_avatar_count >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__total_avatar_count);
  total_avatar_count = __closure->__total_avatar_count;
  if ( *(_BYTE *)(((unsigned __int64)total_avatar_count >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)total_avatar_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)total_avatar_count >> 3)
                                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(__closure->__total_avatar_count);
  }
  v8 = *total_avatar_count;
  v9 = __closure->__total_avatar_count;
  v10 = (unsigned int)(v8 + 1);
  if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(__closure->__total_avatar_count, v10, (_BYTE)v9);
  }
  *v9 = v10;
  return 0;
};

// Line 481: range 0000000016D0ACD0-0000000016D0ADD0
ForeachPolicy __cdecl PlayerSignInComp::isOpenCondSatisfied(data::LogicType const&,std::vector<data::SignInCondConfig> const&)const::{lambda(FormalAvatar const&)#2}::operator()(
        const PlayerSignInComp::isOpenCondSatisfied::<lambda(const FormalAvatar&)>_0 *const __closure,
        const FormalAvatar *formal_avatar)
{
  const unsigned int *v2; // rdx
  uint32_t *max_avatar_level; // rcx
  __int64 v4; // rsi
  bool v5; // dl
  unsigned int __b; // [rsp+1Ch] [rbp-4h] BYREF

  __b = Creature::getLevel(formal_avatar);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  v2 = std::max<unsigned int>(__closure->__max_avatar_level, &__b);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  max_avatar_level = __closure->__max_avatar_level;
  if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v2);
  }
  v4 = *v2;
  v5 = *(_BYTE *)(((unsigned __int64)max_avatar_level >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)max_avatar_level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)max_avatar_level >> 3)
                                                                       + 0x7FFF8000);
  if ( v5 )
    __asan_report_store4(max_avatar_level, v4, v5);
  *max_avatar_level = v4;
  return 0;
};

// Line 493: range 0000000016D0ADD2-0000000016D0AE8E
ForeachPolicy __cdecl PlayerSignInComp::isOpenCondSatisfied(data::LogicType const&,std::vector<data::SignInCondConfig> const&)const::{lambda(FormalAvatar const&)#3}::operator()(
        const PlayerSignInComp::isOpenCondSatisfied::<lambda(const FormalAvatar&)>_1 *const __closure,
        const FormalAvatar *formal_avatar)
{
  uint32_t *avatar_count; // rdx
  uint32_t v3; // ecx
  uint32_t *v4; // rdx
  __int64 v5; // rsi

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  avatar_count = __closure->__avatar_count;
  if ( *(_BYTE *)(((unsigned __int64)__closure->__avatar_count >> 3) + 0x7FFF8000) != 0
    && (char)(((__int64)__closure->__avatar_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure->__avatar_count >> 3)
                                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(__closure->__avatar_count);
  }
  v3 = *avatar_count;
  v4 = __closure->__avatar_count;
  v5 = v3 + 1;
  if ( *(_BYTE *)(((unsigned __int64)__closure->__avatar_count >> 3) + 0x7FFF8000) != 0
    && (char)(((__int64)__closure->__avatar_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure->__avatar_count >> 3)
                                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(__closure->__avatar_count, v5, (_BYTE)v4);
  }
  *v4 = v5;
  return 0;
};

// Line 512: range 0000000016D0B82A-0000000016D0BF96
void __cdecl PlayerSignInComp::scheduleConfigToClient(
        const PlayerSignInComp *const this,
        const data::SignInScheduleConfig *schedule_config,
        proto::SignInInfo *sign_in_info)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  SignInExcelConfigMgr *p_sign_in_config_mgr; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rcx
  const SignInExcelConfigMgr *p_config_id; // rdi
  uint32_t v11; // ecx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rcx
  std::vector<data::SignInRewardItemConfig>::const_iterator __for_begin; // [rsp+20h] [rbp-D0h] BYREF
  std::vector<data::SignInRewardItemConfig>::const_iterator __for_end; // [rsp+28h] [rbp-C8h] BYREF
  const data::SignInCondExcelConfig *sign_in_cond_config_ptr; // [rsp+30h] [rbp-C0h]
  const data::SignInDayExcelConfig *sign_in_day_config_ptr; // [rsp+38h] [rbp-B8h]
  proto::SignInData *sign_in_data; // [rsp+40h] [rbp-B0h]
  const std::vector<data::SignInRewardItemConfig> *__for_range; // [rsp+48h] [rbp-A8h]
  const data::SignInRewardItemConfig *reward_item; // [rsp+50h] [rbp-A0h]
  proto::ItemParam *item_param; // [rsp+58h] [rbp-98h]
  std::shared_ptr<Config> v27; // [rsp+60h] [rbp-90h] BYREF
  common::milog::MiLogStream v28; // [rsp+70h] [rbp-80h] BYREF
  char v29[96]; // [rsp+90h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 7 day:525";
  *(_QWORD *)(v3 + 16) = PlayerSignInComp::scheduleConfigToClient;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)schedule_config >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)schedule_config & 7) + 3) >= *(_BYTE *)(((unsigned __int64)schedule_config >> 3)
                                                                      + 0x7FFF8000) )
  {
    __asan_report_load4(schedule_config);
  }
  proto::SignInInfo::set_schedule_id(sign_in_info, schedule_config->schedule_id);
  if ( *(_BYTE *)(((unsigned __int64)&schedule_config->config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)schedule_config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_config->config_id >> 3)
                                                                  + 0x7FFF8000) )
  {
    __asan_report_load4(&schedule_config->config_id);
  }
  proto::SignInInfo::set_config_id(sign_in_info, schedule_config->config_id);
  if ( *(_BYTE *)(((unsigned __int64)&schedule_config->begin_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)schedule_config + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_config->begin_time >> 3)
                                                                  + 0x7FFF8000) )
  {
    __asan_report_load4(&schedule_config->begin_time);
  }
  proto::SignInInfo::set_begin_time(sign_in_info, schedule_config->begin_time);
  if ( *(_BYTE *)(((unsigned __int64)&schedule_config->end_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)schedule_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_config->end_time >> 3)
                                                                   + 0x7FFF8000) )
  {
    __asan_report_load4(&schedule_config->end_time);
  }
  proto::SignInInfo::set_end_time(sign_in_info, schedule_config->end_time);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v27);
  p_sign_in_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v27)->design_config.txt_config_mgr.sign_in_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&schedule_config->config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)schedule_config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_config->config_id >> 3)
                                                                  + 0x7FFF8000) )
  {
    __asan_report_load4(&schedule_config->config_id);
  }
  sign_in_cond_config_ptr = data::SignInExcelConfigMgrBase::findSignInCondExcelConfig(
                              p_sign_in_config_mgr,
                              schedule_config->config_id);
  std::shared_ptr<Config>::~shared_ptr(&v27);
  if ( sign_in_cond_config_ptr )
  {
    for ( *(_DWORD *)(v3 + 32) = 1; ; ++*(_DWORD *)(v3 + 32) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&sign_in_cond_config_ptr->total_day_count >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&sign_in_cond_config_ptr->total_day_count >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&sign_in_cond_config_ptr->total_day_count);
      }
      if ( sign_in_cond_config_ptr->total_day_count < *(_DWORD *)(v3 + 32) )
        break;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v27);
      p_config_id = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v27)->design_config.txt_config_mgr.sign_in_config_mgr;
      v11 = *(_DWORD *)(v3 + 32);
      if ( *(_BYTE *)(((unsigned __int64)&schedule_config->config_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)schedule_config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_config->config_id >> 3)
                                                                      + 0x7FFF8000) )
      {
        p_config_id = (const SignInExcelConfigMgr *)&schedule_config->config_id;
        __asan_report_load4(&schedule_config->config_id);
      }
      sign_in_day_config_ptr = SignInExcelConfigMgr::findSignIdRewardItemConfig(
                                 p_config_id,
                                 schedule_config->config_id,
                                 v11);
      std::shared_ptr<Config>::~shared_ptr(&v27);
      if ( sign_in_day_config_ptr )
      {
        sign_in_data = proto::SignInInfo::add_signin_data_list(sign_in_info);
        proto::SignInData::set_day_count(sign_in_data, *(_DWORD *)(v3 + 32));
        __for_range = &sign_in_day_config_ptr->reward_item_list;
        __for_begin._M_current = std::vector<data::SignInRewardItemConfig>::begin(&sign_in_day_config_ptr->reward_item_list)._M_current;
        __for_end._M_current = std::vector<data::SignInRewardItemConfig>::end(__for_range)._M_current;
        while ( __gnu_cxx::operator!=<data::SignInRewardItemConfig const*,std::vector<data::SignInRewardItemConfig>>(
                  &__for_begin,
                  &__for_end) )
        {
          reward_item = __gnu_cxx::__normal_iterator<data::SignInRewardItemConfig const*,std::vector<data::SignInRewardItemConfig>>::operator*(&__for_begin);
          item_param = proto::SignInData::add_reward_item_list(sign_in_data);
          if ( *(_BYTE *)(((unsigned __int64)&reward_item->item_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&reward_item->item_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&reward_item->item_id);
          }
          proto::ItemParam::set_item_id(item_param, reward_item->item_id);
          if ( *(_BYTE *)(((unsigned __int64)&reward_item->count >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)reward_item + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&reward_item->count >> 3)
                                                                       + 0x7FFF8000) )
          {
            __asan_report_load4(&reward_item->count);
          }
          proto::ItemParam::set_count(item_param, reward_item->count);
          __gnu_cxx::__normal_iterator<data::SignInRewardItemConfig const*,std::vector<data::SignInRewardItemConfig>>::operator++(&__for_begin);
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v28,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/sign_in/player_sign_in_comp.cpp",
          "scheduleConfigToClient",
          530);
        v12 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                &v28,
                (const char (*)[44])"findSignIdRewardItemConfig fail, config_id:");
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &schedule_config->config_id);
        v14 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v13, (const char (*)[13])" reward_day:");
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v14,
                (const unsigned int *)(v3 + 32));
        v16 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v15, (const char (*)[9])" player:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        operator<<(v16, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v28);
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/sign_in/player_sign_in_comp.cpp",
      "scheduleConfigToClient",
      521);
    v7 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v28,
           (const char (*)[43])"findSignInCondExcelConfig fail, config_id:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &schedule_config->config_id);
    v9 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v8, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v9, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v28);
  }
  if ( v29 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 546: range 0000000016D0BF98-0000000016D0C3CB
bool __fastcall PlayerSignInComp::isSignInActivityCondSatisfied(
        const PlayerSignInComp *const this,
        uint32_t schedule_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rcx
  bool result; // al
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  const data::SignInScheduleConfig *schedule_config_ptr; // [rsp+10h] [rbp-C0h]
  const data::SignInCondExcelConfig *sign_in_cond_config_ptr; // [rsp+18h] [rbp-B8h]
  std::shared_ptr<Config> v15; // [rsp+20h] [rbp-B0h] BYREF
  common::milog::MiLogStream v16; // [rsp+30h] [rbp-A0h] BYREF
  char v17[128]; // [rsp+50h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 13 config_id:553 64 4 15 schedule_id:545";
  *(_QWORD *)(v2 + 16) = PlayerSignInComp::isSignInActivityCondSatisfied;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  *(_DWORD *)(v2 + 64) = schedule_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v15);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15);
  schedule_config_ptr = data::DbSignInConfigMgr::findSignInScheduleConfig(
                          &v5->design_config.db_config_mgr.db_local_config_mgr.sign_in_config_mgr,
                          *(_DWORD *)(v2 + 64));
  std::shared_ptr<Config>::~shared_ptr(&v15);
  if ( !schedule_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/sign_in/player_sign_in_comp.cpp",
      "isSignInActivityCondSatisfied",
      550);
    v6 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
           &v16,
           (const char (*)[44])"findSignInScheduleConfig fail, schedule_id:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 64));
    v8 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v7, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
LABEL_7:
    operator<<(v8, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v16);
    result = 0;
    goto LABEL_15;
  }
  if ( *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)schedule_config_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->config_id >> 3)
                                                                      + 0x7FFF8000) )
  {
    __asan_report_load4(&schedule_config_ptr->config_id);
  }
  *(_DWORD *)(v2 + 48) = schedule_config_ptr->config_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v15);
  v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15);
  sign_in_cond_config_ptr = data::SignInExcelConfigMgrBase::findSignInCondExcelConfig(
                              &v10->design_config.txt_config_mgr.sign_in_config_mgr,
                              *(_DWORD *)(v2 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v15);
  if ( !sign_in_cond_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/sign_in/player_sign_in_comp.cpp",
      "isSignInActivityCondSatisfied",
      557);
    v11 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
            &v16,
            (const char (*)[43])"findSignInCondExcelConfig fail, config_id:");
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 48));
    v8 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v12, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    goto LABEL_7;
  }
  result = PlayerSignInComp::isOpenCondSatisfied(
             this,
             &sign_in_cond_config_ptr->cond_comb,
             &sign_in_cond_config_ptr->cond_list);
LABEL_15:
  if ( v17 == (char *)v2 )
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

// Line 566: range 0000000016D0C3CC-0000000016D0C559
__int64 __fastcall PlayerSignInComp::getBonusActivityState(
        const PlayerSignInComp *const this,
        uint32_t bonus_activity_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,BonusActivityRecord>,false,false>::pointer v6; // rdx
  data::BonusActivityState *p_state; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,BonusActivityRecord>,false> __y; // [rsp+18h] [rbp-88h] BYREF
  char v9[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 21 bonus_activity_id:565 64 8 8 iter:567";
  *(_QWORD *)(v2 + 16) = PlayerSignInComp::getBonusActivityState;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = bonus_activity_id;
  *(std::unordered_map<unsigned int,BonusActivityRecord>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,BonusActivityRecord>::find(
                                                                                         &this->bonus_activity_record_map_,
                                                                                         (const std::unordered_map<unsigned int,BonusActivityRecord>::key_type *)(v2 + 48));
  __y._M_cur = std::unordered_map<unsigned int,BonusActivityRecord>::end(&this->bonus_activity_record_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,BonusActivityRecord>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,BonusActivityRecord>,false> *)(v2 + 64),
         &__y) )
  {
    result = 0LL;
  }
  else
  {
    v6 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,BonusActivityRecord>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,BonusActivityRecord>,false,false> *const)(v2 + 64));
    p_state = &v6->second.state;
    if ( *(_BYTE *)(((unsigned __int64)p_state >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_state & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_state >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_state);
    }
    result = (unsigned int)v6->second.state;
  }
  if ( v9 == (char *)v2 )
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

// Line 577: range 0000000016D0C55A-0000000016D0C757
void __cdecl PlayerSignInComp::checkAndAddNewBonusActivity(PlayerSignInComp *const this)
{
  __int64 v1; // rsi
  uint32_t v2; // ecx
  char v3; // dl
  bool v4; // dl
  bool v5; // dl
  std::unordered_map<unsigned int,data::BonusActivityExcelConfig>::const_iterator __for_begin; // [rsp+18h] [rbp-48h] BYREF
  std::unordered_map<unsigned int,data::BonusActivityExcelConfig>::const_iterator __for_end; // [rsp+20h] [rbp-40h] BYREF
  const std::unordered_map<unsigned int,data::BonusActivityExcelConfig> *__for_range; // [rsp+28h] [rbp-38h]
  const std::pair<unsigned int const,data::BonusActivityExcelConfig> *v9; // [rsp+30h] [rbp-30h]
  std::tuple_element<0,const std::pair<unsigned int const,data::BonusActivityExcelConfig> >::type *bonus_activity_id; // [rsp+38h] [rbp-28h]
  std::tuple_element<1,const std::pair<unsigned int const,data::BonusActivityExcelConfig> >::type *bonus_activity_config; // [rsp+40h] [rbp-20h]
  BonusActivityRecord *record; // [rsp+48h] [rbp-18h]
  std::shared_ptr<Config> v13; // [rsp+50h] [rbp-10h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v13);
  __for_range = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13)->design_config.txt_config_mgr.sign_in_config_mgr.bonus_activity_excel_config_map;
  std::shared_ptr<Config>::~shared_ptr(&v13);
  __for_begin._M_cur = std::unordered_map<unsigned int,data::BonusActivityExcelConfig>::begin(__for_range)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,data::BonusActivityExcelConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::BonusActivityExcelConfig>,false>(
            &__for_begin,
            &__for_end) )
  {
    v9 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BonusActivityExcelConfig>,false,false>::operator*(&__for_begin);
    bonus_activity_id = std::get<0ul,unsigned int const,data::BonusActivityExcelConfig>(v9);
    bonus_activity_config = (std::tuple_element<1,const std::pair<unsigned int const,data::BonusActivityExcelConfig> >::type *)std::get<1ul,unsigned int const,data::BonusActivityExcelConfig>(v9);
    if ( *(_BYTE *)(((unsigned __int64)bonus_activity_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)bonus_activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)bonus_activity_id >> 3)
                                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(bonus_activity_id);
    }
    if ( !(unsigned int)PlayerSignInComp::getBonusActivityState(this, *bonus_activity_id) )
    {
      record = std::unordered_map<unsigned int,BonusActivityRecord>::operator[](
                 &this->bonus_activity_record_map_,
                 bonus_activity_id);
      v1 = ((unsigned __int8)bonus_activity_id & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)bonus_activity_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)bonus_activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)bonus_activity_id >> 3)
                                                                            + 0x7FFF8000) )
      {
        __asan_report_load4(bonus_activity_id);
      }
      v2 = *bonus_activity_id;
      v3 = *(_BYTE *)(((unsigned __int64)record >> 3) + 0x7FFF8000);
      LOBYTE(v1) = v3 != 0;
      v4 = v3 != 0 && (char)(((unsigned __int8)record & 7) + 3) >= v3;
      if ( v4 )
        __asan_report_store4(record, v1, v4);
      record->bonus_activity_id = v2;
      v5 = *(_BYTE *)(((unsigned __int64)&record->state >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)record + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&record->state >> 3) + 0x7FFF8000);
      if ( v5 )
        __asan_report_store4(&record->state, (((_BYTE)record + 4) & 7u) + 3, v5);
      record->state = BONUS_ACTIVITY_STATE_UNSTARTED;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BonusActivityExcelConfig>,false,false>::operator++(&__for_begin);
  }
};

// Line 591: range 0000000016D0C758-0000000016D0CE7B
bool __cdecl PlayerSignInComp::checkAndOpenBonusActivity(PlayerSignInComp *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  data::BonusActivityState *p_state; // rax
  SignInExcelConfigMgr *p_sign_in_config_mgr; // rcx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rcx
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v9; // rax
  _DWORD *v10; // rdx
  data::BonusActivityState *v11; // rax
  bool v12; // dl
  uint32_t WatcherComp; // eax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rcx
  bool v17; // dl
  bool v18; // r14
  bool result; // al
  std::unordered_map<unsigned int,BonusActivityRecord>::iterator __for_begin; // [rsp+18h] [rbp-138h] BYREF
  std::unordered_map<unsigned int,BonusActivityRecord>::iterator __for_end; // [rsp+20h] [rbp-130h] BYREF
  std::unordered_map<unsigned int,BonusActivityRecord> *__for_range; // [rsp+28h] [rbp-128h]
  std::vector<unsigned int> *__for_range_0; // [rsp+30h] [rbp-120h]
  BonusActivityRecord *bonus_activity_record_0; // [rsp+38h] [rbp-118h]
  std::pair<unsigned int const,BonusActivityRecord> *__in; // [rsp+40h] [rbp-110h]
  std::tuple_element<0,std::pair<unsigned int const,BonusActivityRecord> >::type *bonus_activity_id; // [rsp+48h] [rbp-108h]
  std::tuple_element<1,std::pair<unsigned int const,BonusActivityRecord> >::type *bonus_activity_record; // [rsp+50h] [rbp-100h]
  const data::BonusActivityExcelConfig *config_ptr; // [rsp+58h] [rbp-F8h]
  common::milog::MiLogStream v29; // [rsp+60h] [rbp-F0h] BYREF
  char v30[208]; // [rsp+80h] [rbp-D0h] BYREF

  v1 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 4 21 bonus_activity_id:611 64 16 15 watcher_ptr:616 96 24 32 candidate_bonus_activity_vec:592";
  *(_QWORD *)(v1 + 16) = PlayerSignInComp::checkAndOpenBonusActivity;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -219021312;
  v3[536862723] = -218103808;
  v3[536862724] = -202116109;
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v1 + 96));
  __for_range = &this->bonus_activity_record_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,BonusActivityRecord>::begin(&this->bonus_activity_record_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,BonusActivityRecord>::end(&this->bonus_activity_record_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,BonusActivityRecord>,false>(&__for_begin, &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,BonusActivityRecord>,false,false>::operator*(&__for_begin);
    bonus_activity_id = std::get<0ul,unsigned int const,BonusActivityRecord>(__in);
    bonus_activity_record = std::get<1ul,unsigned int const,BonusActivityRecord>(__in);
    p_state = &bonus_activity_record->state;
    if ( *(_BYTE *)(((unsigned __int64)p_state >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_state & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_state >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_state);
    }
    if ( bonus_activity_record->state == BONUS_ACTIVITY_STATE_UNSTARTED )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v1 + 64));
      p_sign_in_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64))->design_config.txt_config_mgr.sign_in_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)bonus_activity_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)bonus_activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)bonus_activity_id >> 3)
                                                                            + 0x7FFF8000) )
      {
        __asan_report_load4(bonus_activity_id);
      }
      config_ptr = data::SignInExcelConfigMgrBase::findBonusActivityExcelConfig(
                     p_sign_in_config_mgr,
                     *bonus_activity_id);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v1 + 64));
      if ( config_ptr )
      {
        if ( PlayerSignInComp::isOpenCondSatisfied(this, &config_ptr->cond_comb, &config_ptr->cond_list) )
          std::vector<unsigned int>::push_back((std::vector<unsigned int> *const)(v1 + 96), bonus_activity_id);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v29,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/sign_in/player_sign_in_comp.cpp",
          "checkAndOpenBonusActivity",
          602);
        v6 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
               &v29,
               (const char (*)[54])"findBonusActivityExcelConfig fail, bonus_activity_id:");
        v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, bonus_activity_id);
        v8 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v7, (const char (*)[9])" player:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        operator<<(v8, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v29);
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,BonusActivityRecord>,false,false>::operator++(&__for_begin);
  }
  __for_range_0 = (std::vector<unsigned int> *)(v1 + 96);
  __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,BonusActivityRecord>,false>::__node_type *)std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v1 + 96))._M_current;
  __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,BonusActivityRecord>,false>::__node_type *)std::vector<unsigned int>::end(__for_range_0)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
            (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_begin,
            (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_end) )
  {
    v9 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
    v10 = v9;
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v9);
    }
    *(_DWORD *)(v1 + 48) = *v10;
    bonus_activity_record_0 = std::unordered_map<unsigned int,BonusActivityRecord>::operator[](
                                &this->bonus_activity_record_map_,
                                (const std::unordered_map<unsigned int,BonusActivityRecord>::key_type *)(v1 + 48));
    v11 = &bonus_activity_record_0->state;
    v12 = *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
       && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000);
    if ( v12 )
      __asan_report_store4(v11, (((_BYTE)bonus_activity_record_0 + 4) & 7u) + 3, v12);
    bonus_activity_record_0->state = BONUS_ACTIVITY_STATE_UNFINISHED;
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    WatcherComp = (unsigned int)Player::getWatcherComp(this->player_);
    PlayerWatcherComp::addWatcher((PlayerWatcherComp *const)(v1 + 64), WatcherComp, *(_DWORD *)(v1 + 48));
    if ( std::operator==<BaseWatcher>(0LL, (const std::shared_ptr<BaseWatcher> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/sign_in/player_sign_in_comp.cpp",
        "checkAndOpenBonusActivity",
        619);
      v14 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
              &v29,
              (const char (*)[36])"addWatcher fail, bonus_activity_id:");
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v1 + 48));
      v16 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v15, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      operator<<(v16, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v29);
      v17 = *(_BYTE *)(((unsigned __int64)&bonus_activity_record_0->state >> 3) + 0x7FFF8000) != 0
         && (char)((((_BYTE)bonus_activity_record_0 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&bonus_activity_record_0->state >> 3)
                                                                               + 0x7FFF8000);
      if ( v17 )
        __asan_report_store4(&bonus_activity_record_0->state, (((_BYTE)bonus_activity_record_0 + 4) & 7u) + 3, v17);
      bonus_activity_record_0->state = BONUS_ACTIVITY_STATE_UNSTARTED;
    }
    std::shared_ptr<BaseWatcher>::~shared_ptr((std::shared_ptr<BaseWatcher> *const)(v1 + 64));
    __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
  }
  v18 = !std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v1 + 96));
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v1 + 96));
  result = v18;
  if ( v30 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 630: range 0000000016D0CE7C-0000000016D0D2BE
bool __cdecl PlayerSignInComp::checkRevertBonusActivity(PlayerSignInComp *const this)
{
  data::BonusActivityState *p_state; // rax
  SignInExcelConfigMgr *p_sign_in_config_mgr; // rcx
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rcx
  bool v6; // dl
  PlayerWatcherComp *WatcherComp; // rcx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  bool is_has_change; // [rsp+17h] [rbp-79h]
  std::unordered_map<unsigned int,BonusActivityRecord>::iterator __for_begin; // [rsp+18h] [rbp-78h] BYREF
  std::unordered_map<unsigned int,BonusActivityRecord>::iterator __for_end; // [rsp+20h] [rbp-70h] BYREF
  std::unordered_map<unsigned int,BonusActivityRecord> *__for_range; // [rsp+28h] [rbp-68h]
  std::pair<unsigned int const,BonusActivityRecord> *__in; // [rsp+30h] [rbp-60h]
  std::tuple_element<0,std::pair<unsigned int const,BonusActivityRecord> >::type *bonus_activity_id; // [rsp+38h] [rbp-58h]
  std::tuple_element<1,std::pair<unsigned int const,BonusActivityRecord> >::type *bonus_activity_record; // [rsp+40h] [rbp-50h]
  const data::BonusActivityExcelConfig *config_ptr; // [rsp+48h] [rbp-48h]
  std::shared_ptr<Config> v19; // [rsp+50h] [rbp-40h] BYREF
  common::milog::MiLogStream v20; // [rsp+60h] [rbp-30h] BYREF

  is_has_change = 0;
  __for_range = &this->bonus_activity_record_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,BonusActivityRecord>::begin(&this->bonus_activity_record_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,BonusActivityRecord>::end(&this->bonus_activity_record_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,BonusActivityRecord>,false>(&__for_begin, &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,BonusActivityRecord>,false,false>::operator*(&__for_begin);
    bonus_activity_id = std::get<0ul,unsigned int const,BonusActivityRecord>(__in);
    bonus_activity_record = std::get<1ul,unsigned int const,BonusActivityRecord>(__in);
    p_state = &bonus_activity_record->state;
    if ( *(_BYTE *)(((unsigned __int64)p_state >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_state & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_state >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_state);
    }
    if ( bonus_activity_record->state == BONUS_ACTIVITY_STATE_UNFINISHED )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v19);
      p_sign_in_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19)->design_config.txt_config_mgr.sign_in_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)bonus_activity_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)bonus_activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)bonus_activity_id >> 3)
                                                                            + 0x7FFF8000) )
      {
        __asan_report_load4(bonus_activity_id);
      }
      config_ptr = data::SignInExcelConfigMgrBase::findBonusActivityExcelConfig(
                     p_sign_in_config_mgr,
                     *bonus_activity_id);
      std::shared_ptr<Config>::~shared_ptr(&v19);
      if ( config_ptr )
      {
        if ( PlayerSignInComp::isOpenCondSatisfied(this, &config_ptr->cond_comb, &config_ptr->cond_list) )
          goto LABEL_22;
        v6 = *(_BYTE *)(((unsigned __int64)&bonus_activity_record->state >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)bonus_activity_record + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&bonus_activity_record->state >> 3)
                                                                              + 0x7FFF8000);
        if ( v6 )
          __asan_report_store4(&bonus_activity_record->state, (((_BYTE)bonus_activity_record + 4) & 7u) + 3, v6);
        bonus_activity_record->state = BONUS_ACTIVITY_STATE_UNSTARTED;
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        WatcherComp = Player::getWatcherComp(this->player_);
        if ( *(_BYTE *)(((unsigned __int64)bonus_activity_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)bonus_activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)bonus_activity_id >> 3)
                                                                              + 0x7FFF8000) )
        {
          __asan_report_load4(bonus_activity_id);
        }
        PlayerWatcherComp::delWatcher(WatcherComp, *bonus_activity_id);
        is_has_change = 1;
        common::milog::MiLogStream::create(
          &v20,
          &common::milog::MiLogDefault::default_log_obj_,
          2u,
          "./src/player/sign_in/player_sign_in_comp.cpp",
          "checkRevertBonusActivity",
          651);
        v8 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
               &v20,
               (const char (*)[44])"bonus_activity reverted, bonus_activity_id:");
        v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, bonus_activity_id);
        v5 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v9, (const char (*)[9])" player:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v20,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/sign_in/player_sign_in_comp.cpp",
          "checkRevertBonusActivity",
          641);
        v3 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
               &v20,
               (const char (*)[54])"findBonusActivityExcelConfig fail, bonus_activity_id:");
        v4 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, bonus_activity_id);
        v5 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v4, (const char (*)[9])" player:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
      }
      operator<<(v5, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v20);
    }
LABEL_22:
    std::__detail::_Node_iterator<std::pair<unsigned int const,BonusActivityRecord>,false,false>::operator++(&__for_begin);
  }
  return is_has_change;
};

// Line 657: range 0000000016D0D2C0-0000000016D0D2EA
void __cdecl PlayerSignInComp::checkRevertBonusActivityAndNotify(PlayerSignInComp *const this)
{
  if ( PlayerSignInComp::checkRevertBonusActivity(this) )
    PlayerSignInComp::notifyAllOpActivityTagBriefInfo(this);
};

// Line 666: range 0000000016D0D2EC-0000000016D0D39D
void __cdecl PlayerSignInComp::getAllBonusActivityInfo(
        const PlayerSignInComp *const this,
        google::protobuf::RepeatedPtrField<proto::BonusActivityInfo> *proto_bonus_activity_info_list)
{
  proto::BonusActivityInfo *v2; // rax
  std::unordered_map<unsigned int,BonusActivityRecord>::const_iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::unordered_map<unsigned int,BonusActivityRecord>::const_iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  const std::unordered_map<unsigned int,BonusActivityRecord> *__for_range; // [rsp+20h] [rbp-20h]
  const std::pair<unsigned int const,BonusActivityRecord> *v6; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,BonusActivityRecord> >::type *_; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,BonusActivityRecord> >::type *bonus_activity_record; // [rsp+38h] [rbp-8h]

  __for_range = &this->bonus_activity_record_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,BonusActivityRecord>::begin(&this->bonus_activity_record_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,BonusActivityRecord>::end(&this->bonus_activity_record_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,BonusActivityRecord>,false>(&__for_begin, &__for_end) )
  {
    v6 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,BonusActivityRecord>,false,false>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,BonusActivityRecord>(v6);
    bonus_activity_record = (std::tuple_element<1,const std::pair<unsigned int const,BonusActivityRecord> >::type *)std::get<1ul,unsigned int const,BonusActivityRecord>(v6);
    v2 = google::protobuf::RepeatedPtrField<proto::BonusActivityInfo>::Add(proto_bonus_activity_info_list);
    BonusActivityRecord::toClient(bonus_activity_record, v2);
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,BonusActivityRecord>,false,false>::operator++(&__for_begin);
  }
};

// Line 675: range 0000000016D0D39E-0000000016D0DCF2
__int64 __fastcall PlayerSignInComp::getBonusActivityReward(PlayerSignInComp *const this, uint32_t bonus_activity_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rcx
  unsigned int v8; // r14d
  std::__detail::_Node_iterator<std::pair<unsigned int const,BonusActivityRecord>,false,false>::pointer v9; // rax
  data::BonusActivityState *p_state; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rcx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rcx
  PlayerItemComp *ItemComp; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rcx
  bool v26; // dl
  PlayerItemComp *v27; // rax
  __int64 result; // rax
  std::vector<data::IdCountConfig>::const_iterator __for_begin; // [rsp+10h] [rbp-180h] BYREF
  std::vector<data::IdCountConfig>::const_iterator __for_end; // [rsp+18h] [rbp-178h] BYREF
  BonusActivityRecord *record; // [rsp+20h] [rbp-170h]
  const data::BonusActivityExcelConfig *config_ptr; // [rsp+28h] [rbp-168h]
  const std::vector<data::IdCountConfig> *__for_range; // [rsp+30h] [rbp-160h]
  const data::IdCountConfig *id_count_config; // [rsp+38h] [rbp-158h]
  common::milog::MiLogStream v35; // [rsp+40h] [rbp-150h] BYREF
  char v36[304]; // [rsp+60h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 4 7 ret:707 48 4 21 bonus_activity_id:674 64 8 8 iter:676 96 16 14 item_param:701 128 24 18"
                        " item_param_vec:698 192 24 17 action_reason:706";
  *(_QWORD *)(v2 + 16) = PlayerSignInComp::getBonusActivityReward;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -219021312;
  v4[536862724] = -234881024;
  v4[536862725] = -218959118;
  v4[536862726] = -218103808;
  v4[536862727] = -202116109;
  *(_DWORD *)(v2 + 48) = bonus_activity_id;
  *(std::unordered_map<unsigned int,BonusActivityRecord>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,BonusActivityRecord>::find(
                                                                                   &this->bonus_activity_record_map_,
                                                                                   (const std::unordered_map<unsigned int,BonusActivityRecord>::key_type *)(v2 + 48));
  __for_end._M_current = (const data::IdCountConfig *)std::unordered_map<unsigned int,BonusActivityRecord>::end(&this->bonus_activity_record_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,BonusActivityRecord>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,BonusActivityRecord>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,BonusActivityRecord>,false> *)&__for_end) )
  {
    common::milog::MiLogStream::create(
      &v35,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/sign_in/player_sign_in_comp.cpp",
      "getBonusActivityReward",
      679);
    v5 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
           &v35,
           (const char (*)[52])"bonus_activity_record not found, bonus_activity_id:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v6, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v7, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v35);
    v8 = -1;
  }
  else
  {
    v9 = std::__detail::_Node_iterator<std::pair<unsigned int const,BonusActivityRecord>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,BonusActivityRecord>,false,false> *const)(v2 + 64));
    record = &v9->second;
    p_state = &v9->second.state;
    if ( *(_BYTE *)(((unsigned __int64)p_state >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_state & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_state >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_state);
    }
    if ( record->state == BONUS_ACTIVITY_STATE_UNREWARDED )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v2 + 96));
      v14 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      config_ptr = data::SignInExcelConfigMgrBase::findBonusActivityExcelConfig(
                     &v14->design_config.txt_config_mgr.sign_in_config_mgr,
                     *(_DWORD *)(v2 + 48));
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 96));
      if ( config_ptr )
      {
        std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v2 + 128));
        __for_range = &config_ptr->reward_item_list;
        __for_begin._M_current = std::vector<data::IdCountConfig>::begin(&config_ptr->reward_item_list)._M_current;
        __for_end._M_current = std::vector<data::IdCountConfig>::end(__for_range)._M_current;
        while ( __gnu_cxx::operator!=<data::IdCountConfig const*,std::vector<data::IdCountConfig>>(
                  &__for_begin,
                  &__for_end) )
        {
          id_count_config = __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator*(&__for_begin);
          *(_DWORD *)(v2 + 96) = 0;
          *(_DWORD *)(v2 + 100) = 0;
          *(_DWORD *)(v2 + 104) = 0;
          *(_DWORD *)(v2 + 108) = 0;
          if ( *(_BYTE *)(((unsigned __int64)&id_count_config->id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&id_count_config->id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&id_count_config->id);
          }
          *(_DWORD *)(v2 + 96) = id_count_config->id;
          if ( *(_BYTE *)(((unsigned __int64)&id_count_config->count >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)id_count_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&id_count_config->count >> 3)
                                                                           + 0x7FFF8000) )
          {
            __asan_report_load4(&id_count_config->count);
          }
          *(_DWORD *)(v2 + 100) = id_count_config->count;
          std::vector<ItemParam>::push_back(
            (std::vector<ItemParam> *const)(v2 + 128),
            (const std::vector<ItemParam>::value_type *)(v2 + 96));
          __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator++(&__for_begin);
        }
        ActionReason::ActionReason(
          (ActionReason *const)(v2 + 192),
          ACTION_REASON_BONUS_ACTIVITY_REWARD,
          ITEM_LIMIT_BONUS_ACTIVITY);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        ItemComp = Player::getItemComp(this->player_);
        *(_DWORD *)(v2 + 32) = PlayerItemComp::checkAddItemBatch(
                                 ItemComp,
                                 (const std::vector<ItemParam> *)(v2 + 128),
                                 (const ActionReason *)(v2 + 192));
        if ( *(_DWORD *)(v2 + 32) )
        {
          common::milog::MiLogStream::create(
            &v35,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/sign_in/player_sign_in_comp.cpp",
            "getBonusActivityReward",
            710);
          v19 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                  &v35,
                  (const char (*)[29])"checkAddItemBatch fail, ret:");
          v20 = common::milog::MiLogStream::operator<<<int,(int *)0>(v19, (const int *)(v2 + 32));
          v21 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                  v20,
                  (const char (*)[17])" item_param_vec:");
          v22 = common::milog::MiLogStream::operator<<<ItemParam>(v21, (const std::vector<ItemParam> *)(v2 + 128));
          v23 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                  v22,
                  (const char (*)[20])" bonus_activity_id:");
          v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v23,
                  (const unsigned int *)(v2 + 48));
          v25 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v24, (const char (*)[9])" player:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          operator<<(v25, this->player_);
          common::milog::MiLogStream::~MiLogStream(&v35);
          v8 = *(_DWORD *)(v2 + 32);
        }
        else
        {
          v26 = *(_BYTE *)(((unsigned __int64)&record->state >> 3) + 0x7FFF8000) != 0
             && (char)((((_BYTE)record + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&record->state >> 3) + 0x7FFF8000);
          if ( v26 )
            __asan_report_store4(&record->state, (((_BYTE)record + 4) & 7u) + 3, v26);
          record->state = BONUS_ACTIVITY_STATE_REWARDED;
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          v27 = Player::getItemComp(this->player_);
          PlayerItemComp::addItemBatch(
            v27,
            (const std::vector<ItemParam> *)(v2 + 128),
            (const ActionReason *)(v2 + 192),
            0LL);
          PlayerSignInComp::notifyAllOpActivityTagBriefInfo(this);
          v8 = 0;
        }
        std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v2 + 128));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v35,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/sign_in/player_sign_in_comp.cpp",
          "getBonusActivityReward",
          695);
        v15 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
                &v35,
                (const char (*)[54])"findBonusActivityExcelConfig fail, bonus_activity_id:");
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v15,
                (const unsigned int *)(v2 + 48));
        v17 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v16, (const char (*)[9])" player:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        operator<<(v17, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v35);
        v8 = 5;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v35,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/sign_in/player_sign_in_comp.cpp",
        "getBonusActivityReward",
        687);
      v11 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
              &v35,
              (const char (*)[63])"bonus_activity_record state not unrewarded, bonus_activity_id:");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 48));
      v13 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v12, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      operator<<(v13, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v35);
      v8 = 1509;
    }
  }
  result = v8;
  if ( v36 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
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

// Line 726: range 0000000016D0DCF4-0000000016D0DF3C
void __fastcall PlayerSignInComp::getBonusActivityInfo(
        const PlayerSignInComp *const this,
        uint32_t bonus_activity_id,
        proto::BonusActivityInfo *proto_bonus_activity_info)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rcx
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,BonusActivityRecord>,false,false>::pointer v9; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,BonusActivityRecord>,false> __y; // [rsp+28h] [rbp-A8h] BYREF
  common::milog::MiLogStream v12; // [rsp+30h] [rbp-A0h] BYREF
  char v13[128]; // [rsp+50h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 21 bonus_activity_id:725 64 8 8 iter:727";
  *(_QWORD *)(v3 + 16) = PlayerSignInComp::getBonusActivityInfo;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = bonus_activity_id;
  *(std::unordered_map<unsigned int,BonusActivityRecord>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,BonusActivityRecord>::find(
                                                                                         &this->bonus_activity_record_map_,
                                                                                         (const std::unordered_map<unsigned int,BonusActivityRecord>::key_type *)(v3 + 48));
  __y._M_cur = std::unordered_map<unsigned int,BonusActivityRecord>::end(&this->bonus_activity_record_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,BonusActivityRecord>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,BonusActivityRecord>,false> *)(v3 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/sign_in/player_sign_in_comp.cpp",
      "getBonusActivityInfo",
      730);
    v6 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
           &v12,
           (const char (*)[52])"bonus_activity_record not found, bonus_activity_id:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
    v8 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v7, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v8, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v12);
  }
  else
  {
    v9 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,BonusActivityRecord>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,BonusActivityRecord>,false,false> *const)(v3 + 64));
    BonusActivityRecord::toClient(&v9->second, proto_bonus_activity_info);
  }
  if ( v13 == (char *)v3 )
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
};

// Line 738: range 0000000016D0DF3E-0000000016D0E5FE
std::vector<OpActivityTagBriefInfo> *__cdecl PlayerSignInComp::getOpActivityTagBriefInfoVec(
        std::vector<OpActivityTagBriefInfo> *retstr,
        const PlayerSignInComp *const this,
        proto::OpActivityStateNotify *notify)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  data::DbSignInConfigMgr *p_sign_in_config_mgr; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rcx
  std::vector<unsigned int>::size_type v10; // rcx
  data::BonusActivityState *p_state; // rax
  data::BonusActivityState state; // eax
  std::unordered_map<unsigned int,SignInRecord>::const_iterator __for_begin; // [rsp+28h] [rbp-E8h] BYREF
  std::unordered_map<unsigned int,SignInRecord>::const_iterator __for_end; // [rsp+30h] [rbp-E0h] BYREF
  const std::unordered_map<unsigned int,SignInRecord> *__for_range; // [rsp+38h] [rbp-D8h]
  const std::unordered_map<unsigned int,BonusActivityRecord> *__for_range_0; // [rsp+40h] [rbp-D0h]
  const std::pair<unsigned int const,BonusActivityRecord> *v19; // [rsp+48h] [rbp-C8h]
  std::tuple_element<0,const std::pair<unsigned int const,BonusActivityRecord> >::type *bonus_activity_id; // [rsp+50h] [rbp-C0h]
  std::tuple_element<1,const std::pair<unsigned int const,BonusActivityRecord> >::type *bonus_activity_record; // [rsp+58h] [rbp-B8h]
  const std::pair<unsigned int const,SignInRecord> *v22; // [rsp+60h] [rbp-B0h]
  std::tuple_element<0,const std::pair<unsigned int const,SignInRecord> >::type *schedule_id; // [rsp+68h] [rbp-A8h]
  std::tuple_element<1,const std::pair<unsigned int const,SignInRecord> >::type *sign_in_record; // [rsp+70h] [rbp-A0h]
  const data::SignInScheduleConfig *schedule_config_ptr; // [rsp+78h] [rbp-98h]
  std::shared_ptr<Config> v26; // [rsp+80h] [rbp-90h] BYREF
  common::milog::MiLogStream v27; // [rsp+90h] [rbp-80h] BYREF
  char v28[96]; // [rsp+B0h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 12 8 info:765";
  *(_QWORD *)(v3 + 16) = PlayerSignInComp::getOpActivityTagBriefInfoVec;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202177536;
  std::vector<OpActivityTagBriefInfo>::vector(retstr);
  __for_range = &this->sign_in_record_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,SignInRecord>::begin(&this->sign_in_record_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,SignInRecord>::end(&this->sign_in_record_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,SignInRecord>,false>(&__for_begin, &__for_end) )
  {
    v22 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,SignInRecord>,false,false>::operator*(&__for_begin);
    schedule_id = std::get<0ul,unsigned int const,SignInRecord>(v22);
    sign_in_record = (std::tuple_element<1,const std::pair<unsigned int const,SignInRecord> >::type *)std::get<1ul,unsigned int const,SignInRecord>(v22);
    if ( *(_BYTE *)(((unsigned __int64)schedule_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)schedule_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)schedule_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(schedule_id);
    }
    if ( PlayerSignInComp::isSignInActivityCondSatisfied(this, *schedule_id) )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v26);
      p_sign_in_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26)->design_config.db_config_mgr.db_local_config_mgr.sign_in_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)schedule_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)schedule_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)schedule_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(schedule_id);
      }
      schedule_config_ptr = data::DbSignInConfigMgr::findSignInScheduleConfig(p_sign_in_config_mgr, *schedule_id);
      std::shared_ptr<Config>::~shared_ptr(&v26);
      if ( schedule_config_ptr )
      {
        *(_DWORD *)(v3 + 32) = 0;
        *(_DWORD *)(v3 + 36) = 0;
        *(_BYTE *)(v3 + 40) = 0;
        *(_DWORD *)(v3 + 32) = 1;
        if ( *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->config_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)schedule_config_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->config_id >> 3)
                                                                            + 0x7FFF8000) )
        {
          __asan_report_load4(&schedule_config_ptr->config_id);
        }
        *(_DWORD *)(v3 + 36) = schedule_config_ptr->config_id;
        v10 = std::vector<unsigned int>::size(&sign_in_record->reward_day_vec);
        if ( *(_BYTE *)(((unsigned __int64)&sign_in_record->sign_in_count >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)sign_in_record + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&sign_in_record->sign_in_count >> 3)
                                                                       + 0x7FFF8000) )
        {
          __asan_report_load4(&sign_in_record->sign_in_count);
        }
        *(_BYTE *)(v3 + 40) = v10 < sign_in_record->sign_in_count;
        std::vector<OpActivityTagBriefInfo>::push_back(
          retstr,
          (const std::vector<OpActivityTagBriefInfo>::value_type *)(v3 + 32));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/sign_in/player_sign_in_comp.cpp",
          "getOpActivityTagBriefInfoVec",
          749);
        v7 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
               &v27,
               (const char (*)[44])"findSignInScheduleConfig fail, schedule_id:");
        v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, schedule_id);
        v9 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v8, (const char (*)[9])" player:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        operator<<(v9, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v27);
      }
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,SignInRecord>,false,false>::operator++(&__for_begin);
  }
  __for_range_0 = &this->bonus_activity_record_map_;
  __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,SignInRecord>,false>::__node_type *)std::unordered_map<unsigned int,BonusActivityRecord>::begin(&this->bonus_activity_record_map_)._M_cur;
  __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,SignInRecord>,false>::__node_type *)std::unordered_map<unsigned int,BonusActivityRecord>::end(__for_range_0)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,BonusActivityRecord>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,BonusActivityRecord>,false> *)&__for_begin,
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,BonusActivityRecord>,false> *)&__for_end) )
  {
    v19 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,BonusActivityRecord>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,BonusActivityRecord>,false,false> *const)&__for_begin);
    bonus_activity_id = std::get<0ul,unsigned int const,BonusActivityRecord>(v19);
    bonus_activity_record = (std::tuple_element<1,const std::pair<unsigned int const,BonusActivityRecord> >::type *)std::get<1ul,unsigned int const,BonusActivityRecord>(v19);
    p_state = &bonus_activity_record->state;
    if ( *(_BYTE *)(((unsigned __int64)p_state >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_state & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_state >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_state);
    }
    state = bonus_activity_record->state;
    if ( state > BONUS_ACTIVITY_STATE_UNREWARDED )
    {
      if ( state == BONUS_ACTIVITY_STATE_REWARDED )
      {
        if ( *(_BYTE *)(((unsigned __int64)bonus_activity_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)bonus_activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)bonus_activity_id >> 3)
                                                                              + 0x7FFF8000) )
        {
          __asan_report_load4(bonus_activity_id);
        }
        proto::OpActivityStateNotify::add_finished_bonus_activity_id_list(notify, *bonus_activity_id);
      }
    }
    else if ( state >= BONUS_ACTIVITY_STATE_UNFINISHED )
    {
      *(_DWORD *)(v3 + 32) = 0;
      *(_DWORD *)(v3 + 36) = 0;
      *(_BYTE *)(v3 + 40) = 0;
      *(_DWORD *)(v3 + 32) = 2;
      if ( *(_BYTE *)(((unsigned __int64)bonus_activity_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)bonus_activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)bonus_activity_id >> 3)
                                                                            + 0x7FFF8000) )
      {
        __asan_report_load4(bonus_activity_id);
      }
      *(_DWORD *)(v3 + 36) = *bonus_activity_id;
      if ( *(_BYTE *)(((unsigned __int64)&bonus_activity_record->state >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)bonus_activity_record + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&bonus_activity_record->state >> 3)
                                                                            + 0x7FFF8000) )
      {
        __asan_report_load4(&bonus_activity_record->state);
      }
      *(_BYTE *)(v3 + 40) = bonus_activity_record->state == BONUS_ACTIVITY_STATE_UNREWARDED;
      std::vector<OpActivityTagBriefInfo>::push_back(
        retstr,
        (const std::vector<OpActivityTagBriefInfo>::value_type *)(v3 + 32));
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,BonusActivityRecord>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,BonusActivityRecord>,false,false> *const)&__for_begin);
  }
  if ( v28 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 784: range 0000000016D0E600-0000000016D0E7E4
void __cdecl PlayerSignInComp::notifyAllOpActivityTagBriefInfo(const PlayerSignInComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  google::protobuf::RepeatedPtrField<proto::OpActivityTagBriefInfo> *repeated; // [rsp+10h] [rbp-E0h]
  std::vector<OpActivityTagBriefInfo> vec; // [rsp+20h] [rbp-D0h] BYREF
  char v6[176]; // [rsp+40h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 64 10 notify:785";
  *(_QWORD *)(v1 + 16) = PlayerSignInComp::notifyAllOpActivityTagBriefInfo;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450892) = -202116109;
  proto::OpActivityStateNotify::OpActivityStateNotify((proto::OpActivityStateNotify *const)(v1 + 32));
  repeated = proto::OpActivityStateNotify::mutable_opened_op_activity_info_list((proto::OpActivityStateNotify *const)(v1 + 32));
  PlayerSignInComp::getOpActivityTagBriefInfoVec(&vec, this, (proto::OpActivityStateNotify *)(v1 + 32));
  common::tools::MiscUtils::toRepeated<OpActivityTagBriefInfo,proto::OpActivityTagBriefInfo,int (OpActivityTagBriefInfo::*)(proto::OpActivityTagBriefInfo&)const>(
    &vec,
    repeated,
    (int (*)(const OpActivityTagBriefInfo *, proto::OpActivityTagBriefInfo *))OpActivityTagBriefInfo::toClient);
  std::vector<OpActivityTagBriefInfo>::~vector(&vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v1 + 32));
  proto::OpActivityStateNotify::~OpActivityStateNotify((proto::OpActivityStateNotify *const)(v1 + 32));
  if ( v6 == (char *)v1 )
  {
    *(_DWORD *)((v1 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 792: range 0000000016D0E7E6-0000000016D0EE4E
void __cdecl PlayerSignInComp::onWatcherProgressUpdate(
        PlayerSignInComp *const this,
        const WatcherProgressUpdateEvent *event)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__detail::_Node_iterator<std::pair<unsigned int const,BonusActivityRecord>,false,false>::pointer v5; // rax
  data::BonusActivityState *p_state; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rcx
  PlayerWatcherComp *v12; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rcx
  bool v17; // dl
  proto::BonusActivityInfo *v18; // rax
  PlayerWatcherComp *WatcherComp; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,BonusActivityRecord>,false> __y; // [rsp+18h] [rbp-108h] BYREF
  BonusActivityRecord *bonus_activity_record; // [rsp+20h] [rbp-100h]
  const data::BonusActivityExcelConfig *config_ptr; // [rsp+28h] [rbp-F8h]
  std::shared_ptr<Config> v23; // [rsp+30h] [rbp-F0h] BYREF
  common::milog::MiLogStream v24; // [rsp+40h] [rbp-E0h] BYREF
  char v25[192]; // [rsp+60h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 21 bonus_activity_id:797 48 8 8 iter:798 80 48 10 notify:822";
  *(_QWORD *)(v2 + 16) = PlayerSignInComp::onWatcherProgressUpdate;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862721] = -234881024;
  v4[536862722] = 62194;
  v4[536862724] = -202116109;
  if ( *(char *)(((unsigned __int64)&event->is_finished >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&event->is_finished);
  if ( event->is_finished )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->watcher_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->watcher_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&event->watcher_id);
    }
    *(_DWORD *)(v2 + 32) = event->watcher_id;
    *(std::unordered_map<unsigned int,BonusActivityRecord>::iterator *)(v2 + 48) = std::unordered_map<unsigned int,BonusActivityRecord>::find(
                                                                                     &this->bonus_activity_record_map_,
                                                                                     (const std::unordered_map<unsigned int,BonusActivityRecord>::key_type *)(v2 + 32));
    __y._M_cur = std::unordered_map<unsigned int,BonusActivityRecord>::end(&this->bonus_activity_record_map_)._M_cur;
    if ( !std::__detail::operator==<std::pair<unsigned int const,BonusActivityRecord>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,BonusActivityRecord>,false> *)(v2 + 48),
            &__y) )
    {
      v5 = std::__detail::_Node_iterator<std::pair<unsigned int const,BonusActivityRecord>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,BonusActivityRecord>,false,false> *const)(v2 + 48));
      bonus_activity_record = &v5->second;
      p_state = &v5->second.state;
      if ( *(_BYTE *)(((unsigned __int64)p_state >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_state & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_state >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_state);
      }
      if ( bonus_activity_record->state == BONUS_ACTIVITY_STATE_UNFINISHED )
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v23);
        v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v23);
        config_ptr = data::SignInExcelConfigMgrBase::findBonusActivityExcelConfig(
                       &v13->design_config.txt_config_mgr.sign_in_config_mgr,
                       *(_DWORD *)(v2 + 32));
        std::shared_ptr<Config>::~shared_ptr(&v23);
        if ( config_ptr )
        {
          v17 = *(_BYTE *)(((unsigned __int64)&bonus_activity_record->state >> 3) + 0x7FFF8000) != 0
             && (char)((((_BYTE)bonus_activity_record + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&bonus_activity_record->state >> 3)
                                                                                 + 0x7FFF8000);
          if ( v17 )
            __asan_report_store4(&bonus_activity_record->state, (((_BYTE)bonus_activity_record + 4) & 7u) + 3, v17);
          bonus_activity_record->state = BONUS_ACTIVITY_STATE_UNREWARDED;
          proto::BonusActivityUpdateNotify::BonusActivityUpdateNotify((proto::BonusActivityUpdateNotify *const)(v2 + 80));
          v18 = proto::BonusActivityUpdateNotify::add_bonus_activity_info_list((proto::BonusActivityUpdateNotify *const)(v2 + 80));
          BonusActivityRecord::toClient(bonus_activity_record, v18);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 80));
          PlayerSignInComp::notifyAllOpActivityTagBriefInfo(this);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          WatcherComp = Player::getWatcherComp(this->player_);
          PlayerWatcherComp::delWatcher(WatcherComp, *(_DWORD *)(v2 + 32));
          proto::BonusActivityUpdateNotify::~BonusActivityUpdateNotify((proto::BonusActivityUpdateNotify *const)(v2 + 80));
        }
        else
        {
          common::milog::MiLogStream::create(
            &v24,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/sign_in/player_sign_in_comp.cpp",
            "onWatcherProgressUpdate",
            816);
          v14 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
                  &v24,
                  (const char (*)[54])"findBonusActivityExcelConfig fail, bonus_activity_id:");
          v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v14,
                  (const unsigned int *)(v2 + 32));
          v16 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v15, (const char (*)[9])" player:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          operator<<(v16, this->player_);
          common::milog::MiLogStream::~MiLogStream(&v24);
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/sign_in/player_sign_in_comp.cpp",
          "onWatcherProgressUpdate",
          808);
        v7 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
               &v24,
               (const char (*)[19])"bonus_activity_id:");
        v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
        v9 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
               v8,
               (const char (*)[30])" bonus_activity_record.state:");
        v10 = common::milog::MiLogStream::operator<<<data::BonusActivityState,(data::BonusActivityState*)0>(
                v9,
                &bonus_activity_record->state);
        v11 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v10, (const char (*)[9])" player:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        operator<<(v11, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v24);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        v12 = Player::getWatcherComp(this->player_);
        PlayerWatcherComp::delWatcher(v12, *(_DWORD *)(v2 + 32));
      }
    }
  }
  if ( v25 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 833: range 0000000016D0EE50-0000000016D0EEB3
void __cdecl PlayerSignInComp::checkIsAnyOpActivityCanOpenAndNotify(PlayerSignInComp *const this)
{
  bool is_has_change; // [rsp+1Fh] [rbp-1h]
  bool is_has_changea; // [rsp+1Fh] [rbp-1h]

  is_has_change = PlayerSignInComp::tryAutoSignInAllActivity(this);
  is_has_changea = (is_has_change | PlayerSignInComp::checkAndOpenBonusActivity(this)) != 0;
  if ( is_has_changea | PlayerSignInComp::checkRevertBonusActivity(this) )
    PlayerSignInComp::notifyAllOpActivityTagBriefInfo(this);
};

// Line 845: range 0000000016D0EEB4-0000000016D0EED2
void __cdecl PlayerSignInComp::onPlayerLevelupEvent(PlayerSignInComp *const this, const PlayerLevelupEvent *event)
{
  PlayerSignInComp::checkIsAnyOpActivityCanOpenAndNotify(this);
};

// Line 850: range 0000000016D0EED4-0000000016D0EEF2
void __cdecl PlayerSignInComp::onFinishQuestEvent(PlayerSignInComp *const this, const FinishQuestEvent *event)
{
  PlayerSignInComp::checkIsAnyOpActivityCanOpenAndNotify(this);
};

// Line 855: range 0000000016D0EEF4-0000000016D0EF12
void __cdecl PlayerSignInComp::onFinishParentQuestEvent(
        PlayerSignInComp *const this,
        const FinishParentQuestEvent *event)
{
  PlayerSignInComp::checkIsAnyOpActivityCanOpenAndNotify(this);
};

// Line 860: range 0000000016D0EF14-0000000016D0EF32
void __cdecl PlayerSignInComp::onAvatarLevelupEvent(PlayerSignInComp *const this, const AvatarLevelupEvent *event)
{
  PlayerSignInComp::checkIsAnyOpActivityCanOpenAndNotify(this);
};

// Line 865: range 0000000016D0EF34-0000000016D0EF52
void __cdecl PlayerSignInComp::onObtainAvatarEvent(PlayerSignInComp *const this, const ObtainAvatarEvent *event)
{
  PlayerSignInComp::checkIsAnyOpActivityCanOpenAndNotify(this);
};
