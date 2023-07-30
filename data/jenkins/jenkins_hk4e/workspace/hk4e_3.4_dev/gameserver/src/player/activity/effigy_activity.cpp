// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/effigy_activity.cpp

// Line 32: range 00000000165D04C8-00000000165D061A
int32_t __cdecl EffigyDailyRecordInfo::fromBin(
        EffigyDailyRecordInfo *const this,
        const proto::EffigyDailyRecordBin *proto)
{
  uint32_t v2; // ecx
  uint32_t v3; // ecx
  uint32_t v4; // ecx
  bool is_first_pass_reward_taken; // cl

  v2 = proto::EffigyDailyRecordBin::day_index(proto);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->day_index = v2;
  v3 = proto::EffigyDailyRecordBin::challenge_id(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->challenge_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->challenge_id);
  }
  this->challenge_id = v3;
  v4 = proto::EffigyDailyRecordBin::challenge_max_score(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_max_score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->challenge_max_score >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->challenge_max_score);
  }
  this->challenge_max_score = v4;
  is_first_pass_reward_taken = proto::EffigyDailyRecordBin::is_first_pass_reward_taken(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_first_pass_reward_taken >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_first_pass_reward_taken >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_first_pass_reward_taken);
  }
  this->is_first_pass_reward_taken = is_first_pass_reward_taken;
  return 0;
};

// Line 42: range 00000000165D061C-00000000165D076E
int32_t __cdecl EffigyDailyRecordInfo::toBin(
        const EffigyDailyRecordInfo *const this,
        proto::EffigyDailyRecordBin *proto)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::EffigyDailyRecordBin::set_day_index(proto, this->day_index);
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->challenge_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::EffigyDailyRecordBin::set_challenge_id(proto, this->challenge_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_max_score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->challenge_max_score >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::EffigyDailyRecordBin::set_challenge_max_score(proto, this->challenge_max_score);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_first_pass_reward_taken >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_first_pass_reward_taken >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_first_pass_reward_taken);
  }
  proto::EffigyDailyRecordBin::set_is_first_pass_reward_taken(proto, this->is_first_pass_reward_taken);
  return 0;
};

// Line 52: range 00000000165D0770-00000000165D092A
void __cdecl EffigyDailyRecordInfo::toClient(
        const EffigyDailyRecordInfo *const this,
        const EffigyActivity *effigy_activity,
        proto::EffigyDailyInfo *proto)
{
  uint32_t day_index; // ebx
  uint32_t ScheduleId; // eax
  uint32_t BeginTimeByOpenDay; // edx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::EffigyDailyInfo::set_day_index(proto, this->day_index);
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->challenge_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::EffigyDailyInfo::set_challenge_id(proto, this->challenge_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_max_score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->challenge_max_score >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::EffigyDailyInfo::set_challenge_max_score(proto, this->challenge_max_score);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_first_pass_reward_taken >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_first_pass_reward_taken >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_first_pass_reward_taken);
  }
  proto::EffigyDailyInfo::set_is_first_pass_reward_taken(proto, this->is_first_pass_reward_taken);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  day_index = this->day_index;
  ScheduleId = BaseActivity::getScheduleId(effigy_activity);
  BeginTimeByOpenDay = BaseActivity::getBeginTimeByOpenDay(ScheduleId, day_index);
  proto::EffigyDailyInfo::set_begin_time(proto, BeginTimeByOpenDay);
};

// Line 61: range 00000000165D092C-00000000165D0CB9
int32_t __cdecl EffigyActivity::fromScheduleBin(EffigyActivity *const this, const proto::ActivityScheduleBin *bin)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  EffigyDailyRecordInfo *v5; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,EffigyDailyRecordInfo> >,bool> v6; // rax
  common::milog::MiLogStream *v7; // rax
  int32_t result; // eax
  uint32_t difficulty_id; // edx
  google::protobuf::RepeatedPtrField<proto::EffigyDailyRecordBin>::const_iterator __for_begin; // [rsp+10h] [rbp-E0h] BYREF
  google::protobuf::RepeatedPtrField<proto::EffigyDailyRecordBin>::const_iterator __for_end; // [rsp+18h] [rbp-D8h] BYREF
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin_0; // [rsp+20h] [rbp-D0h]
  const proto::EffigyScheduleBin *effigy_bin; // [rsp+28h] [rbp-C8h]
  const google::protobuf::RepeatedPtrField<proto::EffigyDailyRecordBin> *__for_range; // [rsp+30h] [rbp-C0h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range_0; // [rsp+38h] [rbp-B8h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end_0; // [rsp+40h] [rbp-B0h]
  const proto::EffigyDailyRecordBin *daily_record_bin; // [rsp+48h] [rbp-A8h]
  common::milog::MiLogStream v18; // [rsp+50h] [rbp-A0h] BYREF
  char v19[128]; // [rsp+70h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 15 reward_index:74 64 16 20 daily_record_info:65";
  *(_QWORD *)(v2 + 16) = EffigyActivity::fromScheduleBin;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  effigy_bin = proto::ActivityScheduleBin::effigy_bin(bin);
  __for_range = proto::EffigyScheduleBin::daily_record_list(effigy_bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::EffigyDailyRecordBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::EffigyDailyRecordBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::EffigyDailyRecordBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    daily_record_bin = google::protobuf::internal::RepeatedPtrIterator<proto::EffigyDailyRecordBin const>::operator*(&__for_begin);
    *(_DWORD *)(v2 + 64) = 0;
    *(_DWORD *)(v2 + 68) = 0;
    *(_DWORD *)(v2 + 72) = 0;
    *(_BYTE *)(v2 + 76) = 0;
    EffigyDailyRecordInfo::fromBin((EffigyDailyRecordInfo *const)(v2 + 64), daily_record_bin);
    v6 = std::map<unsigned int,EffigyDailyRecordInfo>::emplace<unsigned int &,EffigyDailyRecordInfo&>(
           &this->daily_record_map_,
           (unsigned int *)(v2 + 64),
           (EffigyDailyRecordInfo *)(v2 + 64),
           (unsigned int *)&this->daily_record_map_,
           v5);
    if ( !v6.second )
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/effigy_activity.cpp",
        "fromScheduleBin",
        69);
      v7 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
             &v18,
             (const char (*)[43])"[EFFIGY] day index duplicated, day_index: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 64));
      common::milog::MiLogStream::~MiLogStream(&v18);
      result = -1;
      goto LABEL_17;
    }
    google::protobuf::internal::RepeatedPtrIterator<proto::EffigyDailyRecordBin const>::operator++(&__for_begin);
  }
  difficulty_id = proto::EffigyScheduleBin::last_difficulty_id(effigy_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_difficulty_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_difficulty_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_difficulty_id_);
  }
  this->last_difficulty_id_ = difficulty_id;
  __for_range_0 = proto::EffigyScheduleBin::taken_reward_index_list(effigy_bin);
  __for_begin_0 = google::protobuf::RepeatedField<unsigned int>::begin(__for_range_0);
  __for_end_0 = google::protobuf::RepeatedField<unsigned int>::end(__for_range_0);
  while ( __for_begin_0 != __for_end_0 )
  {
    if ( *(_BYTE *)(((unsigned __int64)__for_begin_0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)__for_begin_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin_0 >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 48) = *__for_begin_0;
    std::set<unsigned int>::insert(
      &this->taken_reward_index_set_,
      (const std::set<unsigned int>::value_type *)(v2 + 48));
    ++__for_begin_0;
  }
  result = 0;
LABEL_17:
  if ( v19 == (char *)v2 )
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

// Line 83: range 00000000165D0CBA-00000000165D0E85
int32_t __cdecl EffigyActivity::toScheduleBin(const EffigyActivity *const this, proto::ActivityScheduleBin *bin)
{
  google::protobuf::uint32 *v2; // rdx
  std::map<unsigned int,EffigyDailyRecordInfo>::const_iterator __for_begin; // [rsp+18h] [rbp-48h] BYREF
  std::map<unsigned int,EffigyDailyRecordInfo>::const_iterator __for_end; // [rsp+20h] [rbp-40h] BYREF
  proto::EffigyScheduleBin *effigy_bin; // [rsp+28h] [rbp-38h]
  const std::map<unsigned int,EffigyDailyRecordInfo> *__for_range; // [rsp+30h] [rbp-30h]
  const std::set<unsigned int> *__for_range_0; // [rsp+38h] [rbp-28h]
  const std::pair<unsigned int const,EffigyDailyRecordInfo> *v9; // [rsp+40h] [rbp-20h]
  std::tuple_element<0,const std::pair<unsigned int const,EffigyDailyRecordInfo> >::type *day_index; // [rsp+48h] [rbp-18h]
  std::tuple_element<1,const std::pair<unsigned int const,EffigyDailyRecordInfo> >::type *daily_record_info; // [rsp+50h] [rbp-10h]
  proto::EffigyDailyRecordBin *daily_record_bin; // [rsp+58h] [rbp-8h]

  effigy_bin = proto::ActivityScheduleBin::mutable_effigy_bin(bin);
  __for_range = &this->daily_record_map_;
  __for_begin._M_node = std::map<unsigned int,EffigyDailyRecordInfo>::begin(&this->daily_record_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,EffigyDailyRecordInfo>::end(&this->daily_record_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v9 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,EffigyDailyRecordInfo>>::operator*(&__for_begin);
    day_index = std::get<0ul,unsigned int const,EffigyDailyRecordInfo>(v9);
    daily_record_info = (std::tuple_element<1,const std::pair<unsigned int const,EffigyDailyRecordInfo> >::type *)std::get<1ul,unsigned int const,EffigyDailyRecordInfo>(v9);
    daily_record_bin = proto::EffigyScheduleBin::add_daily_record_list(effigy_bin);
    EffigyDailyRecordInfo::toBin(daily_record_info, daily_record_bin);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,EffigyDailyRecordInfo>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->last_difficulty_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_difficulty_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::EffigyScheduleBin::set_last_difficulty_id(effigy_bin, this->last_difficulty_id_);
  __for_range_0 = &this->taken_reward_index_set_;
  __for_begin._M_node = std::set<unsigned int>::begin(&this->taken_reward_index_set_)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(__for_range_0)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_begin,
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_end) )
  {
    v2 = (google::protobuf::uint32 *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::EffigyScheduleBin::add_taken_reward_index_list(effigy_bin, *v2);
    std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
  }
  return 0;
};

// Line 100: range 00000000165D0E86-00000000165D1181
int32_t __cdecl EffigyActivity::toClient(EffigyActivity *const this, proto::ActivityInfo *activity_info)
{
  common::milog::MiLogStream *v2; // rbx
  uint32_t CurScore; // eax
  unsigned int *v5; // rdx
  unsigned int val; // [rsp+10h] [rbp-80h] BYREF
  unsigned int reward_index; // [rsp+14h] [rbp-7Ch]
  std::map<unsigned int,EffigyDailyRecordInfo>::iterator __for_begin; // [rsp+18h] [rbp-78h] BYREF
  std::map<unsigned int,EffigyDailyRecordInfo>::iterator __for_end; // [rsp+20h] [rbp-70h] BYREF
  proto::EffigyActivityDetailInfo *effigy_info; // [rsp+28h] [rbp-68h]
  std::map<unsigned int,EffigyDailyRecordInfo> *__for_range; // [rsp+30h] [rbp-60h]
  std::set<unsigned int> *__for_range_0; // [rsp+38h] [rbp-58h]
  const std::pair<unsigned int const,EffigyDailyRecordInfo> *v13; // [rsp+40h] [rbp-50h]
  std::tuple_element<0,const std::pair<unsigned int const,EffigyDailyRecordInfo> >::type *day_index; // [rsp+48h] [rbp-48h]
  std::tuple_element<1,const std::pair<unsigned int const,EffigyDailyRecordInfo> >::type *daily_record_info; // [rsp+50h] [rbp-40h]
  proto::EffigyDailyInfo *daily_info; // [rsp+58h] [rbp-38h]
  common::milog::MiLogStream v17; // [rsp+60h] [rbp-30h] BYREF

  if ( BaseActivity::toClient(this, activity_info) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/effigy_activity.cpp",
      "toClient",
      103);
    v2 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
           &v17,
           (const char (*)[46])"[EFFIGY] BaseActivity::toClient failed, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
    common::milog::MiLogStream::~MiLogStream(&v17);
    return -1;
  }
  else
  {
    effigy_info = proto::ActivityInfo::mutable_effigy_info(activity_info);
    __for_range = &this->daily_record_map_;
    __for_begin._M_node = std::map<unsigned int,EffigyDailyRecordInfo>::begin(&this->daily_record_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,EffigyDailyRecordInfo>::end(&this->daily_record_map_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v13 = std::_Rb_tree_iterator<std::pair<unsigned int const,EffigyDailyRecordInfo>>::operator*(&__for_begin);
      day_index = std::get<0ul,unsigned int const,EffigyDailyRecordInfo>(v13);
      daily_record_info = (std::tuple_element<1,const std::pair<unsigned int const,EffigyDailyRecordInfo> >::type *)std::get<1ul,unsigned int const,EffigyDailyRecordInfo>(v13);
      daily_info = proto::EffigyActivityDetailInfo::add_daily_info_list(effigy_info);
      EffigyDailyRecordInfo::toClient(daily_record_info, this, daily_info);
      std::_Rb_tree_iterator<std::pair<unsigned int const,EffigyDailyRecordInfo>>::operator++(&__for_begin);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->last_difficulty_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->last_difficulty_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::EffigyActivityDetailInfo::set_last_difficulty_id(effigy_info, this->last_difficulty_id_);
    CurScore = EffigyActivity::getCurScore(this);
    proto::EffigyActivityDetailInfo::set_cur_score(effigy_info, CurScore);
    __for_range_0 = &this->taken_reward_index_set_;
    __for_begin._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,EffigyDailyRecordInfo> >::_Base_ptr)std::set<unsigned int>::begin(&this->taken_reward_index_set_)._M_node;
    __for_end._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,EffigyDailyRecordInfo> >::_Base_ptr)std::set<unsigned int>::end(__for_range_0)._M_node;
    while ( std::operator!=(
              (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_begin,
              (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_end) )
    {
      v5 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      reward_index = *v5;
      proto::EffigyActivityDetailInfo::add_taken_reward_index_list(effigy_info, reward_index);
      std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
    }
    return 0;
  }
};

// Line 124: range 00000000165D1182-00000000165D11DF
int32_t __cdecl EffigyActivity::init(EffigyActivity *const this)
{
  if ( BaseActivity::isOpening(this, 0) && !BaseActivity::isSettled(this) )
    EffigyActivity::registerObserver(this);
  return 0;
};

// Line 136: range 00000000165D11E0-00000000165D11FA
void __cdecl EffigyActivity::onLogin(EffigyActivity *const this)
{
  BaseActivity::onLogin(this);
};

// Line 141: range 00000000165D11FC-00000000165D1478
void __cdecl EffigyActivity::onPreStart(EffigyActivity *const this)
{
  uint32_t day_index; // ecx
  uint32_t v2; // ecx
  std::unordered_map<unsigned int,data::EffigyChallengeExcelConfig>::const_iterator __for_begin; // [rsp+10h] [rbp-50h] BYREF
  std::unordered_map<unsigned int,data::EffigyChallengeExcelConfig>::const_iterator __for_end; // [rsp+18h] [rbp-48h] BYREF
  const ActivityEffigyChallengeExcelConfigMgr *conf_mgr; // [rsp+20h] [rbp-40h]
  const std::unordered_map<unsigned int,data::EffigyChallengeExcelConfig> *__for_range; // [rsp+28h] [rbp-38h]
  const std::pair<unsigned int const,data::EffigyChallengeExcelConfig> *v7; // [rsp+30h] [rbp-30h]
  std::tuple_element<0,const std::pair<unsigned int const,data::EffigyChallengeExcelConfig> >::type *challenge_id; // [rsp+38h] [rbp-28h]
  std::tuple_element<1,const std::pair<unsigned int const,data::EffigyChallengeExcelConfig> >::type *effigy_challenge_config; // [rsp+40h] [rbp-20h]
  EffigyDailyRecordInfo *daily_record_info; // [rsp+48h] [rbp-18h]
  std::shared_ptr<Config> v11; // [rsp+50h] [rbp-10h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v11);
  conf_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v11)->design_config.txt_config_mgr.activity_effigy_challenge_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v11);
  __for_range = &conf_mgr->effigy_challenge_excel_config_map;
  __for_begin._M_cur = std::unordered_map<unsigned int,data::EffigyChallengeExcelConfig>::begin(&conf_mgr->effigy_challenge_excel_config_map)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,data::EffigyChallengeExcelConfig>::end(&conf_mgr->effigy_challenge_excel_config_map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::EffigyChallengeExcelConfig>,false>(
            &__for_begin,
            &__for_end) )
  {
    v7 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::EffigyChallengeExcelConfig>,false,false>::operator*(&__for_begin);
    challenge_id = std::get<0ul,unsigned int const,data::EffigyChallengeExcelConfig>(v7);
    effigy_challenge_config = (std::tuple_element<1,const std::pair<unsigned int const,data::EffigyChallengeExcelConfig> >::type *)std::get<1ul,unsigned int const,data::EffigyChallengeExcelConfig>(v7);
    daily_record_info = std::map<unsigned int,EffigyDailyRecordInfo>::operator[](
                          &this->daily_record_map_,
                          &effigy_challenge_config->day_index);
    if ( *(_BYTE *)(((unsigned __int64)&effigy_challenge_config->day_index >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)effigy_challenge_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&effigy_challenge_config->day_index >> 3)
                                                                             + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    day_index = effigy_challenge_config->day_index;
    if ( *(_BYTE *)(((unsigned __int64)daily_record_info >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)daily_record_info & 7) + 3) >= *(_BYTE *)(((unsigned __int64)daily_record_info >> 3)
                                                                          + 0x7FFF8000) )
    {
      __asan_report_store4(daily_record_info);
    }
    daily_record_info->day_index = day_index;
    if ( *(_BYTE *)(((unsigned __int64)challenge_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)challenge_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)challenge_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v2 = *challenge_id;
    if ( *(_BYTE *)(((unsigned __int64)&daily_record_info->challenge_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)daily_record_info + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&daily_record_info->challenge_id >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_store4(&daily_record_info->challenge_id);
    }
    daily_record_info->challenge_id = v2;
    if ( *(_BYTE *)(((unsigned __int64)&daily_record_info->challenge_max_score >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)daily_record_info + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&daily_record_info->challenge_max_score >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_store4(&daily_record_info->challenge_max_score);
    }
    daily_record_info->challenge_max_score = 0;
    if ( *(_BYTE *)(((unsigned __int64)&daily_record_info->is_first_pass_reward_taken >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)daily_record_info + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&daily_record_info->is_first_pass_reward_taken >> 3)
                                                                     + 0x7FFF8000) )
    {
      __asan_report_store1(&daily_record_info->is_first_pass_reward_taken);
    }
    daily_record_info->is_first_pass_reward_taken = 0;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::EffigyChallengeExcelConfig>,false,false>::operator++(&__for_begin);
  }
};

// Line 155: range 00000000165D147A-00000000165D1494
void __cdecl EffigyActivity::onStart(EffigyActivity *const this)
{
  EffigyActivity::registerObserver(this);
};

// Line 160: range 00000000165D1496-00000000165D14B0
void __cdecl EffigyActivity::onSettle(EffigyActivity *const this)
{
  EffigyActivity::unregisterObserver(this);
};

// Line 165: range 00000000165D14B2-00000000165D14E4
void __cdecl EffigyActivity::onClear(EffigyActivity *const this)
{
  std::map<unsigned int,EffigyDailyRecordInfo>::clear(&this->daily_record_map_);
  std::set<unsigned int>::clear(&this->taken_reward_index_set_);
};

// Line 171: range 00000000165D14E6-00000000165D1892
void __cdecl EffigyActivity::registerObserver(EffigyActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::weak_ptr<EffigyActivity> *EventComp; // [rsp+10h] [rbp-D0h]
  std::weak_ptr<EffigyActivity> *p_this_wtr; // [rsp+20h] [rbp-C0h]
  std::weak_ptr<Observer> __r; // [rsp+30h] [rbp-B0h] BYREF
  std::enable_shared_from_this<BaseActivity> v7; // [rsp+40h] [rbp-A0h] BYREF
  char v8[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 12 this_ptr:172 64 16 12 this_wtr:173";
  *(_QWORD *)(v1 + 16) = EffigyActivity::registerObserver;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  std::enable_shared_from_this<BaseActivity>::shared_from_this(&v7);
  std::dynamic_pointer_cast<EffigyActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)(v1 + 32));
  std::shared_ptr<BaseActivity>::~shared_ptr((std::shared_ptr<BaseActivity> *const)&v7);
  std::weak_ptr<EffigyActivity>::weak_ptr<EffigyActivity,void>(
    (std::weak_ptr<EffigyActivity> *const)(v1 + 64),
    (const std::shared_ptr<EffigyActivity> *)(v1 + 32));
  if ( std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->enter_scene_obs_wtr_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    p_this_wtr = (std::weak_ptr<EffigyActivity> *)Player::getEventComp(this->player_);
    std::weak_ptr<EffigyActivity>::weak_ptr(
      (std::weak_ptr<EffigyActivity> *const)&v7,
      (const std::weak_ptr<EffigyActivity> *)(v1 + 64));
    PlayerEventComp::registerObserver<EffigyActivity,PostEnterSceneEvent>(
      (PlayerEventComp *const)&__r,
      p_this_wtr,
      (void (*)(EffigyActivity *, const PostEnterSceneEvent *))&v7);
    std::weak_ptr<Observer>::operator=(&this->enter_scene_obs_wtr_, &__r);
    std::weak_ptr<Observer>::~weak_ptr(&__r);
    std::weak_ptr<EffigyActivity>::~weak_ptr((std::weak_ptr<EffigyActivity> *const)&v7);
  }
  if ( std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->leave_scene_obs_wtr_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    EventComp = (std::weak_ptr<EffigyActivity> *)Player::getEventComp(this->player_);
    std::weak_ptr<EffigyActivity>::weak_ptr(
      (std::weak_ptr<EffigyActivity> *const)&__r,
      (const std::weak_ptr<EffigyActivity> *)(v1 + 64));
    PlayerEventComp::registerObserver<EffigyActivity,LeaveSceneEvent>(
      (PlayerEventComp *const)&v7,
      EventComp,
      (void (*)(EffigyActivity *, const LeaveSceneEvent *))&__r);
    std::weak_ptr<Observer>::operator=(&this->leave_scene_obs_wtr_, (std::weak_ptr<Observer> *)&v7);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v7);
    std::weak_ptr<EffigyActivity>::~weak_ptr((std::weak_ptr<EffigyActivity> *const)&__r);
  }
  std::weak_ptr<EffigyActivity>::~weak_ptr((std::weak_ptr<EffigyActivity> *const)(v1 + 64));
  std::shared_ptr<EffigyActivity>::~shared_ptr((std::shared_ptr<EffigyActivity> *const)(v1 + 32));
  if ( v8 == (char *)v1 )
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

// Line 185: range 00000000165D1894-00000000165D1992
void __cdecl EffigyActivity::unregisterObserver(EffigyActivity *const this)
{
  PlayerEventComp *EventComp; // rax
  PlayerEventComp *v2; // rax

  if ( !std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->enter_scene_obs_wtr_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    EventComp = Player::getEventComp(this->player_);
    PlayerEventComp::unregisterObserver(EventComp, &this->enter_scene_obs_wtr_);
    std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::reset(&this->enter_scene_obs_wtr_);
  }
  if ( !std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->leave_scene_obs_wtr_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v2 = Player::getEventComp(this->player_);
    PlayerEventComp::unregisterObserver(v2, &this->leave_scene_obs_wtr_);
    std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::reset(&this->leave_scene_obs_wtr_);
  }
};

// Line 199: range 00000000165D1994-00000000165D1C93
void __cdecl EffigyActivity::onPostEnterSceneEvent(EffigyActivity *const this, const PostEnterSceneEvent *event)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  std::shared_ptr<DungeonScene> p_dungeon_scene_ptr; // [rsp+10h] [rbp-C0h] BYREF
  common::milog::MiLogStream v8; // [rsp+20h] [rbp-B0h] BYREF
  char v9[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 17 cur_scene_ptr:200 64 16 21 dungeon_scene_ptr:205";
  *(_QWORD *)(v2 + 16) = EffigyActivity::onPostEnterSceneEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 32));
  if ( !std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 32)) )
  {
    std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    toPtr<DungeonScene,Scene>((Scene *)(v2 + 64));
    if ( !std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v2 + 64)) )
    {
      v5 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      if ( DungeonScene::getDungeonType(v5) == DUNGEON_EFFIGY )
      {
        common::milog::MiLogStream::create(
          &v8,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/effigy_activity.cpp",
          "onPostEnterSceneEvent",
          214);
        v6 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
               &v8,
               (const char (*)[43])"[EFFIGY] onPostEnterSceneEvent, scene_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &event->dst_scene_id);
        common::milog::MiLogStream::~MiLogStream(&v8);
        std::shared_ptr<DungeonScene>::shared_ptr(
          &p_dungeon_scene_ptr,
          (const std::shared_ptr<DungeonScene> *)(v2 + 64));
        EffigyActivity::notifyEffigyChallengeInfo(this, &p_dungeon_scene_ptr);
        std::shared_ptr<DungeonScene>::~shared_ptr(&p_dungeon_scene_ptr);
      }
    }
    std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 64));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 32));
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
};

// Line 219: range 00000000165D1C94-00000000165D1CA2
void __cdecl EffigyActivity::onLeaveSceneEvent(EffigyActivity *const this, const LeaveSceneEvent *event)
{
  ;
};

// Line 224: range 00000000165D1CA4-00000000165D1D8A
uint32_t __cdecl EffigyActivity::getCurScore(const EffigyActivity *const this)
{
  uint32_t cur_score; // [rsp+1Ch] [rbp-34h]
  std::map<unsigned int,EffigyDailyRecordInfo>::const_iterator __for_begin; // [rsp+20h] [rbp-30h] BYREF
  std::map<unsigned int,EffigyDailyRecordInfo>::const_iterator __for_end; // [rsp+28h] [rbp-28h] BYREF
  const std::map<unsigned int,EffigyDailyRecordInfo> *__for_range; // [rsp+30h] [rbp-20h]
  const std::pair<unsigned int const,EffigyDailyRecordInfo> *v6; // [rsp+38h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,EffigyDailyRecordInfo> >::type *_; // [rsp+40h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,EffigyDailyRecordInfo> >::type *daily_record_info; // [rsp+48h] [rbp-8h]

  cur_score = 0;
  __for_range = &this->daily_record_map_;
  __for_begin._M_node = std::map<unsigned int,EffigyDailyRecordInfo>::begin(&this->daily_record_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,EffigyDailyRecordInfo>::end(&this->daily_record_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v6 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,EffigyDailyRecordInfo>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,EffigyDailyRecordInfo>(v6);
    daily_record_info = (std::tuple_element<1,const std::pair<unsigned int const,EffigyDailyRecordInfo> >::type *)std::get<1ul,unsigned int const,EffigyDailyRecordInfo>(v6);
    if ( *(_BYTE *)(((unsigned __int64)&daily_record_info->challenge_max_score >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)daily_record_info + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&daily_record_info->challenge_max_score >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    cur_score += daily_record_info->challenge_max_score;
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,EffigyDailyRecordInfo>>::operator++(&__for_begin);
  }
  return cur_score;
};

// Line 235: range 00000000165D1D8C-00000000165D1E48
uint32_t __cdecl EffigyActivity::getChallengeScore(
        const EffigyActivity *const this,
        const EffigyActivity::EffigyDungeonContext *context,
        bool is_with_time_limit)
{
  uint32_t challenge_id; // [rsp+20h] [rbp-10h]

  if ( *(_BYTE *)(((unsigned __int64)context >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)context >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  challenge_id = context->select_challenge_id;
  if ( *(_BYTE *)(((unsigned __int64)&context->select_difficulty_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)context + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&context->select_difficulty_id >> 3)
                                                          + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  return EffigyActivity::getChallengeScore(
           this,
           challenge_id,
           context->select_difficulty_id,
           &context->select_condition_id_vec,
           is_with_time_limit);
};

// Line 243: range 00000000165D1E4A-00000000165D2354
__int64 __fastcall EffigyActivity::getChallengeScore(
        const EffigyActivity *const this,
        uint32_t challenge_id,
        uint32_t difficulty_id,
        const std::vector<unsigned int> *condition_id_vec,
        bool is_with_time_limit)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // r12
  common::milog::MiLogStream *v8; // rax
  __int64 result; // rax
  uint32_t *v10; // rdx
  int32_t challenge_score; // [rsp+20h] [rbp-E0h]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-D8h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-D0h] BYREF
  double condition_total_score; // [rsp+38h] [rbp-C8h]
  const ActivityEffigyChallengeExcelConfigMgr *conf_mgr; // [rsp+40h] [rbp-C0h]
  const data::EffigyDifficultyExcelConfig *difficulty_config_ptr; // [rsp+50h] [rbp-B0h]
  const std::vector<unsigned int> *__for_range; // [rsp+58h] [rbp-A8h]
  double score_ratio; // [rsp+60h] [rbp-A0h]
  const data::EffigyLimitingConditionExcelConfig *condition_config_ptr; // [rsp+68h] [rbp-98h]
  std::shared_ptr<Config> v24; // [rsp+70h] [rbp-90h] BYREF
  common::milog::MiLogStream v25; // [rsp+80h] [rbp-80h] BYREF
  char v26[96]; // [rsp+A0h] [rbp-60h] BYREF

  v5 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_0(64LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 4 16 challenge_id:242";
  *(_QWORD *)(v5 + 16) = EffigyActivity::getChallengeScore;
  v7 = v5 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202116348;
  *(_DWORD *)(v5 + 32) = challenge_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v24);
  conf_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v24)->design_config.txt_config_mgr.activity_effigy_challenge_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v24);
  if ( data::ActivityEffigyChallengeExcelConfigMgrBase::findEffigyChallengeExcelConfig(conf_mgr, *(_DWORD *)(v5 + 32)) )
  {
    difficulty_config_ptr = ActivityEffigyChallengeExcelConfigMgr::findEffigyDifficultyConfig(
                              conf_mgr,
                              *(_DWORD *)(v5 + 32),
                              difficulty_id);
    if ( difficulty_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&difficulty_config_ptr->base_score >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&difficulty_config_ptr->base_score >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      condition_total_score = (double)(int)difficulty_config_ptr->base_score;
      __for_range = condition_id_vec;
      __for_begin._M_current = std::vector<unsigned int>::begin(condition_id_vec)._M_current;
      __for_end._M_current = std::vector<unsigned int>::end(condition_id_vec)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
      {
        v10 = (uint32_t *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
        if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        condition_config_ptr = data::ActivityEffigyChallengeExcelConfigMgrBase::findEffigyLimitingConditionExcelConfig(
                                 conf_mgr,
                                 *v10);
        if ( condition_config_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&condition_config_ptr->condition_type >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)condition_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&condition_config_ptr->condition_type >> 3)
                                                                                + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          if ( condition_config_ptr->condition_type != EFFIGY_CONDITION_TIME_LIMIT || is_with_time_limit )
          {
            if ( *(_BYTE *)(((unsigned __int64)&condition_config_ptr->score >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&condition_config_ptr->score >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            condition_total_score = (double)condition_config_ptr->score + condition_total_score;
          }
        }
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
      }
      if ( *(_BYTE *)(((unsigned __int64)&difficulty_config_ptr->score_ratio >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)difficulty_config_ptr + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&difficulty_config_ptr->score_ratio >> 3)
                                                                             + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      score_ratio = difficulty_config_ptr->score_ratio;
      challenge_score = (int)ceil(condition_total_score * score_ratio);
      result = 0LL;
      if ( challenge_score >= 0 )
        result = (unsigned int)challenge_score;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/effigy_activity.cpp",
        "getChallengeScore",
        254);
      common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
        &v25,
        (const char (*)[43])"[EFFIGY] findEffigyDifficultyConfig failed");
      common::milog::MiLogStream::~MiLogStream(&v25);
      result = 0LL;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/effigy_activity.cpp",
      "getChallengeScore",
      248);
    v8 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
           &v25,
           (const char (*)[63])"[EFFIGY] findEffigyChallengeExcelConfig failed, challenge_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v5 + 32));
    common::milog::MiLogStream::~MiLogStream(&v25);
    result = 0LL;
  }
  if ( v26 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 279: range 00000000165D2356-00000000165D2752
void __cdecl EffigyActivity::notifyEffigyChallengeInfo(
        EffigyActivity *const this,
        DungeonScenePtr *p_dungeon_scene_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<proto::EffigyChallengeInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // r14
  EffigyActivity::EffigyDungeonContext *v7; // rax
  std::__shared_ptr_access<proto::EffigyChallengeInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // r14
  EffigyActivity::EffigyDungeonContext *v9; // rdx
  std::__shared_ptr_access<proto::EffigyChallengeInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  google::protobuf::RepeatedField<unsigned int> *v11; // r14
  EffigyActivity::EffigyDungeonContext *v12; // rax
  std::__shared_ptr_access<proto::EffigyChallengeInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // r14
  EffigyActivity::EffigyDungeonContext *v14; // rcx
  uint32_t ChallengeScore; // eax
  Player *player; // r14
  std::shared_ptr<proto::EffigyChallengeInfoNotify> __r; // [rsp+10h] [rbp-100h] BYREF
  common::milog::MiLogStream v18; // [rsp+20h] [rbp-F0h] BYREF
  char v19[208]; // [rsp+40h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 16 14 notify_ptr:290 80 40 15 context_opt:284";
  *(_QWORD *)(v2 + 16) = EffigyActivity::notifyEffigyChallengeInfo;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = 62194;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  if ( !std::operator==<DungeonScene>(p_dungeon_scene_ptr, 0LL) )
  {
    v5 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_dungeon_scene_ptr);
    DungeonScene::getDungeonExtraData<EffigyActivity::EffigyDungeonContext>(
      (std::optional<EffigyActivity::EffigyDungeonContext> *)(v2 + 80),
      v5);
    if ( !std::optional<EffigyActivity::EffigyDungeonContext>::has_value((const std::optional<EffigyActivity::EffigyDungeonContext> *const)(v2 + 80)) )
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/effigy_activity.cpp",
        "notifyEffigyChallengeInfo",
        287);
      common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v18, (const char (*)[19])"[EFFIGY] no data. ");
      common::milog::MiLogStream::~MiLogStream(&v18);
    }
    else
    {
      common::tools::perf::make_shared<proto::EffigyChallengeInfoNotify>();
      v6 = std::__shared_ptr_access<proto::EffigyChallengeInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::EffigyChallengeInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
      v7 = std::optional<EffigyActivity::EffigyDungeonContext>::operator->((std::optional<EffigyActivity::EffigyDungeonContext> *const)(v2 + 80));
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      proto::EffigyChallengeInfoNotify::set_challenge_id(v6, v7->select_challenge_id);
      v8 = std::__shared_ptr_access<proto::EffigyChallengeInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::EffigyChallengeInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
      v9 = std::optional<EffigyActivity::EffigyDungeonContext>::operator->((std::optional<EffigyActivity::EffigyDungeonContext> *const)(v2 + 80));
      if ( *(_BYTE *)(((unsigned __int64)&v9->select_difficulty_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v9 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v9->select_difficulty_id >> 3)
                                                         + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::EffigyChallengeInfoNotify::set_difficulty_id(v8, v9->select_difficulty_id);
      v10 = std::__shared_ptr_access<proto::EffigyChallengeInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::EffigyChallengeInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
      v11 = proto::EffigyChallengeInfoNotify::mutable_condition_id_list(v10);
      v12 = std::optional<EffigyActivity::EffigyDungeonContext>::operator->((std::optional<EffigyActivity::EffigyDungeonContext> *const)(v2 + 80));
      common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&v12->select_condition_id_vec, v11);
      v13 = std::__shared_ptr_access<proto::EffigyChallengeInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::EffigyChallengeInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
      v14 = std::optional<EffigyActivity::EffigyDungeonContext>::operator*((std::optional<EffigyActivity::EffigyDungeonContext> *const)(v2 + 80));
      ChallengeScore = EffigyActivity::getChallengeScore(this, v14, 1);
      proto::EffigyChallengeInfoNotify::set_challenge_score(v13, ChallengeScore);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      player = this->player_;
      std::dynamic_pointer_cast<google::protobuf::Message const,proto::EffigyChallengeInfoNotify>(&__r);
      Player::sendMessage(player, (common::minet::ConstMessagePtr *)&__r, 0LL);
      std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
      std::shared_ptr<proto::EffigyChallengeInfoNotify>::~shared_ptr((std::shared_ptr<proto::EffigyChallengeInfoNotify> *const)(v2 + 48));
    }
    std::optional<EffigyActivity::EffigyDungeonContext>::~optional((std::optional<EffigyActivity::EffigyDungeonContext> *const)(v2 + 80));
  }
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
};

// Line 300: range 00000000165D2754-00000000165D2CA0
void __cdecl EffigyActivity::logEnterDungeon(EffigyActivity *const this, DungeonScenePtr *p_dungeon_scene_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyEffigyEnterDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // r14
  DungeonScene *v7; // rax
  const std::string *v8; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyEffigyEnterDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // r14
  EffigyActivity::EffigyDungeonContext *v10; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyEffigyEnterDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  uint32_t DungeonId; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyEffigyEnterDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // r14
  EffigyActivity::EffigyDungeonContext *v15; // rdx
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v16; // rdx
  std::__shared_ptr_access<proto_log::PlayerLogBodyEffigyEnterDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyEffigyEnterDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // r14
  EffigyActivity::EffigyDungeonContext *v19; // rcx
  uint32_t ChallengeScore; // eax
  Player *player; // r14
  unsigned int condition_id; // [rsp+14h] [rbp-12Ch]
  std::vector<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-128h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-120h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+28h] [rbp-118h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+30h] [rbp-110h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+40h] [rbp-100h] BYREF
  common::milog::MiLogStream v28; // [rsp+50h] [rbp-F0h] BYREF
  char v29[208]; // [rsp+70h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 16 11 log_ptr:311 80 40 15 context_opt:305";
  *(_QWORD *)(v2 + 16) = EffigyActivity::logEnterDungeon;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = 62194;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  if ( !std::operator==<DungeonScene>(0LL, p_dungeon_scene_ptr) )
  {
    v5 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_dungeon_scene_ptr);
    DungeonScene::getDungeonExtraData<EffigyActivity::EffigyDungeonContext>(
      (std::optional<EffigyActivity::EffigyDungeonContext> *)(v2 + 80),
      v5);
    if ( !std::optional<EffigyActivity::EffigyDungeonContext>::has_value((const std::optional<EffigyActivity::EffigyDungeonContext> *const)(v2 + 80)) )
    {
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/effigy_activity.cpp",
        "logEnterDungeon",
        308);
      common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v28, (const char (*)[19])"[EFFIGY] no data. ");
      common::milog::MiLogStream::~MiLogStream(&v28);
    }
    else
    {
      common::tools::perf::make_shared<proto_log::PlayerLogBodyEffigyEnterDungeon>();
      v6 = std::__shared_ptr_access<proto_log::PlayerLogBodyEffigyEnterDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyEffigyEnterDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
      v7 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_dungeon_scene_ptr);
      v8 = DungeonScene::getTransaction[abi:cxx11](v7);
      proto_log::PlayerLogBodyEffigyEnterDungeon::set_transaction(v6, v8);
      v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyEffigyEnterDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyEffigyEnterDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
      v10 = std::optional<EffigyActivity::EffigyDungeonContext>::operator->((std::optional<EffigyActivity::EffigyDungeonContext> *const)(v2 + 80));
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      proto_log::PlayerLogBodyEffigyEnterDungeon::set_challenge_id(v9, v10->select_challenge_id);
      v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyEffigyEnterDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyEffigyEnterDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
      v12 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_dungeon_scene_ptr);
      DungeonId = DungeonScene::getDungeonId(v12);
      proto_log::PlayerLogBodyEffigyEnterDungeon::set_dungeon_id(v11, DungeonId);
      v14 = std::__shared_ptr_access<proto_log::PlayerLogBodyEffigyEnterDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyEffigyEnterDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
      v15 = std::optional<EffigyActivity::EffigyDungeonContext>::operator->((std::optional<EffigyActivity::EffigyDungeonContext> *const)(v2 + 80));
      if ( *(_BYTE *)(((unsigned __int64)&v15->select_difficulty_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v15 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v15->select_difficulty_id >> 3)
                                                          + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto_log::PlayerLogBodyEffigyEnterDungeon::set_difficulty_id(v14, v15->select_difficulty_id);
      __for_range = &std::optional<EffigyActivity::EffigyDungeonContext>::operator->((std::optional<EffigyActivity::EffigyDungeonContext> *const)(v2 + 80))->select_condition_id_vec;
      __for_begin._M_current = std::vector<unsigned int>::begin(__for_range)._M_current;
      __for_end._M_current = std::vector<unsigned int>::end(__for_range)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
      {
        v16 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
        if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        condition_id = *v16;
        v17 = std::__shared_ptr_access<proto_log::PlayerLogBodyEffigyEnterDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyEffigyEnterDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
        proto_log::PlayerLogBodyEffigyEnterDungeon::add_condition_id_list(v17, condition_id);
        __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
      }
      v18 = std::__shared_ptr_access<proto_log::PlayerLogBodyEffigyEnterDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyEffigyEnterDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
      v19 = std::optional<EffigyActivity::EffigyDungeonContext>::operator*((std::optional<EffigyActivity::EffigyDungeonContext> *const)(v2 + 80));
      ChallengeScore = EffigyActivity::getChallengeScore(this, v19, 1);
      proto_log::PlayerLogBodyEffigyEnterDungeon::set_challenge_score(v18, ChallengeScore);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      player = this->player_;
      std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
      std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyEffigyEnterDungeon,void>(
        &p_body_ptr,
        (const std::shared_ptr<proto_log::PlayerLogBodyEffigyEnterDungeon> *)(v2 + 48));
      Player::printStatLog(player, &p_body_ptr, &p_body_ext_ptr, 0xEu);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
      std::shared_ptr<proto_log::PlayerLogBodyEffigyEnterDungeon>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyEffigyEnterDungeon> *const)(v2 + 48));
    }
    std::optional<EffigyActivity::EffigyDungeonContext>::~optional((std::optional<EffigyActivity::EffigyDungeonContext> *const)(v2 + 80));
  }
  if ( v29 == (char *)v2 )
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
};

// Line 325: range 00000000165D2CA2-00000000165D342B
int32_t __cdecl EffigyActivity::selectEffigyChallengeCondition(
        EffigyActivity *const this,
        const proto::SelectEffigyChallengeConditionReq *req,
        proto::SelectEffigyChallengeConditionRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  PlayerSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::milog::MiLogStream *v9; // r14
  const google::protobuf::RepeatedField<unsigned int> *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  google::protobuf::RepeatedField<unsigned int> *v13; // rax
  google::protobuf::uint32 ChallengeScore; // eax
  World *v15; // rax
  int32_t result; // eax
  uint32_t difficulty_id; // [rsp+20h] [rbp-180h]
  uint32_t day_index; // [rsp+24h] [rbp-17Ch]
  unsigned int begin_time; // [rsp+28h] [rbp-178h]
  ActivityEffigyChallengeExcelConfigMgr *conf_mgr; // [rsp+30h] [rbp-170h]
  const data::EffigyChallengeExcelConfig *effigy_challenge_config_ptr; // [rsp+38h] [rbp-168h]
  std::shared_ptr<Config> v22; // [rsp+40h] [rbp-160h] BYREF
  common::milog::MiLogStream v23; // [rsp+50h] [rbp-150h] BYREF
  char v24[304]; // [rsp+70h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 16 challenge_id:340 64 16 17 cur_world_ptr:333 96 24 20 condition_id_vec:342 160 56 10 notify:364";
  *(_QWORD *)(v3 + 16) = EffigyActivity::selectEffigyChallengeCondition;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862723] = -234881024;
  v5[536862724] = -218959118;
  v5[536862726] = -218103808;
  v5[536862727] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = Player::getSceneComp(this->player_);
  if ( !PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/effigy_activity.cpp",
      "selectEffigyChallengeCondition",
      329);
    v7 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v23,
           (const char (*)[34])"[EFFIGY] not in self world, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_DWORD *)(v3 + 48) = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v23);
    v8 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurWorld((const PlayerSceneComp *const)(v3 + 64));
    if ( std::operator==<World>(0LL, (const std::shared_ptr<World> *)(v3 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/effigy_activity.cpp",
        "selectEffigyChallengeCondition",
        336);
      v9 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
             &v23,
             (const char (*)[35])"[EFFIGY] getCurWorld failed, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      *(_DWORD *)(v3 + 48) = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v23);
      v8 = -1;
    }
    else
    {
      *(_DWORD *)(v3 + 48) = proto::SelectEffigyChallengeConditionReq::challenge_id(req);
      difficulty_id = proto::SelectEffigyChallengeConditionReq::difficulty_id(req);
      std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 96));
      v10 = proto::SelectEffigyChallengeConditionReq::condition_id_list(req);
      common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(v10, (std::vector<unsigned int> *)(v3 + 96));
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v22);
      conf_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22)->design_config.txt_config_mgr.activity_effigy_challenge_config_mgr;
      std::shared_ptr<Config>::~shared_ptr(&v22);
      effigy_challenge_config_ptr = data::ActivityEffigyChallengeExcelConfigMgrBase::findEffigyChallengeExcelConfig(
                                      conf_mgr,
                                      *(_DWORD *)(v3 + 48));
      if ( effigy_challenge_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&effigy_challenge_config_ptr->day_index >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)effigy_challenge_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&effigy_challenge_config_ptr->day_index >> 3)
                                                                                     + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        day_index = effigy_challenge_config_ptr->day_index;
        if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        begin_time = BaseActivity::getBeginTimeByOpenDay(this->schedule_id_, day_index);
        if ( (unsigned int)common::tools::TimeUtils::getNow() >= begin_time )
        {
          proto::EffigyChallengeInfoNotify::EffigyChallengeInfoNotify((proto::EffigyChallengeInfoNotify *const)(v3 + 160));
          proto::EffigyChallengeInfoNotify::set_challenge_id(
            (proto::EffigyChallengeInfoNotify *const)(v3 + 160),
            *(_DWORD *)(v3 + 48));
          proto::EffigyChallengeInfoNotify::set_difficulty_id(
            (proto::EffigyChallengeInfoNotify *const)(v3 + 160),
            difficulty_id);
          v13 = proto::EffigyChallengeInfoNotify::mutable_condition_id_list((proto::EffigyChallengeInfoNotify *const)(v3 + 160));
          common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(
            (const std::vector<unsigned int> *)(v3 + 96),
            v13);
          ChallengeScore = EffigyActivity::getChallengeScore(
                             this,
                             *(_DWORD *)(v3 + 48),
                             difficulty_id,
                             (const std::vector<unsigned int> *)(v3 + 96),
                             1);
          proto::EffigyChallengeInfoNotify::set_challenge_score(
            (proto::EffigyChallengeInfoNotify *const)(v3 + 160),
            ChallengeScore);
          v15 = std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          World::notifyAllPlayer<proto::EffigyChallengeInfoNotify>(
            v15,
            (const proto::EffigyChallengeInfoNotify *)(v3 + 160),
            0);
          v8 = 0;
          proto::EffigyChallengeInfoNotify::~EffigyChallengeInfoNotify((proto::EffigyChallengeInfoNotify *const)(v3 + 160));
        }
        else
        {
          common::milog::MiLogStream::create(
            &v23,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/effigy_activity.cpp",
            "selectEffigyChallengeCondition",
            359);
          v12 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                  &v23,
                  (const char (*)[52])"[EFFIGY] effigy challenge not begin, challenge_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream(&v23);
          v8 = -1;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v23,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/effigy_activity.cpp",
          "selectEffigyChallengeCondition",
          349);
        v11 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
                &v23,
                (const char (*)[63])"[EFFIGY] findEffigyChallengeExcelConfig failed, challenge_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v23);
        v8 = -1;
      }
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 96));
    }
    std::shared_ptr<World>::~shared_ptr((std::shared_ptr<World> *const)(v3 + 64));
  }
  result = v8;
  if ( v24 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 375: range 00000000165D342C-00000000165D36D6
bool __cdecl EffigyActivity::isConditionValid(EffigyActivity *const this, std::vector<unsigned int> *condition_id_vec)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v5; // rdx
  std::pair<std::__detail::_Node_iterator<unsigned int,true,false>,bool> v6; // rax
  common::milog::MiLogStream *v7; // rax
  bool v8; // r15
  bool result; // al
  std::vector<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-108h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-100h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+28h] [rbp-F8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-F0h] BYREF
  char v14[208]; // [rsp+50h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 16 condition_id:377 64 56 20 condition_id_set:376";
  *(_QWORD *)(v2 + 16) = EffigyActivity::isConditionValid;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  std::unordered_set<unsigned int>::unordered_set((std::unordered_set<unsigned int> *const)(v2 + 64));
  __for_range = condition_id_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(condition_id_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(condition_id_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v5 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 48) = *v5;
    v6 = std::unordered_set<unsigned int>::insert(
           (std::unordered_set<unsigned int> *const)(v2 + 64),
           (const std::unordered_set<unsigned int>::value_type *)(v2 + 48));
    if ( !v6.second )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/effigy_activity.cpp",
        "isConditionValid",
        381);
      v7 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
             &v13,
             (const char (*)[55])"[EFFIGY] check isConditionValid failed, condition_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = 0;
      goto LABEL_12;
    }
    __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  v8 = 1;
LABEL_12:
  std::unordered_set<unsigned int>::~unordered_set((std::unordered_set<unsigned int> *const)(v2 + 64));
  result = v8;
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF800C) = 0LL;
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

// Line 389: range 00000000165D399E-00000000165D5751
int32_t __cdecl EffigyActivity::startEffigyChallenge(
        EffigyActivity *const this,
        const proto::StartEffigyChallengeReq *req,
        proto::StartEffigyChallengeRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const google::protobuf::RepeatedField<unsigned int> *v6; // rax
  google::protobuf::RepeatedField<unsigned int> *v7; // rax
  common::milog::MiLogStream *v8; // rax
  int32_t v9; // r14d
  common::milog::MiLogStream *v10; // rax
  PlayerSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::milog::MiLogStream *v14; // r14
  common::milog::MiLogStream *v15; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v16; // rdx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v21; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // r14
  PlayerWorld *v25; // rax
  DungeonCandidateTeam *DungeonCandidateTeam; // rax
  PlayerBasicComp *BasicComp; // rax
  PlayerDungeonComp *DungeonComp; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  __int32 SceneId; // eax
  common::milog::MiLogStream *v31; // r14
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // r14
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // r14
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v42; // rax
  common::milog::MiLogStream *v44; // r14
  DungeonScene *v45; // rax
  common::milog::MiLogStream *v46; // r14
  std::vector<unsigned int>::iterator *p_for_end; // rsi
  const std::shared_ptr<Player> *v48; // rax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v49; // rax
  uint32_t Uid; // r14d
  Player *v51; // rax
  bool v52; // r14
  Player *v53; // rax
  EffigyActivity *v54; // r14
  DungeonScene *v55; // r14
  DungeonScene *v56; // r14
  int32_t result; // eax
  std::string v58; // [rsp+0h] [rbp-3F0h]
  EffigyActivity *thisa; // [rsp+18h] [rbp-3D8h]
  uint32_t difficulty_id; // [rsp+24h] [rbp-3CCh]
  google::protobuf::uint32 point_id; // [rsp+28h] [rbp-3C8h]
  uint32_t day_index; // [rsp+2Ch] [rbp-3C4h]
  unsigned int begin_time; // [rsp+30h] [rbp-3C0h]
  std::vector<unsigned int>::iterator __for_begin; // [rsp+38h] [rbp-3B8h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+40h] [rbp-3B0h] BYREF
  const ActivityEffigyChallengeExcelConfigMgr *conf_mgr; // [rsp+48h] [rbp-3A8h]
  const data::EffigyChallengeExcelConfig *effigy_challenge_config_ptr; // [rsp+50h] [rbp-3A0h]
  std::vector<unsigned int> *__for_range; // [rsp+58h] [rbp-398h]
  std::tuple_element<0,std::pair<int,std::shared_ptr<DungeonScene> > >::type *ret; // [rsp+60h] [rbp-390h]
  std::tuple_element<1,std::pair<int,std::shared_ptr<DungeonScene> > >::type *dungeon_ptr; // [rsp+68h] [rbp-388h]
  std::vector<std::shared_ptr<Player>> *__for_range_0; // [rsp+70h] [rbp-380h]
  const data::EffigyLimitingConditionExcelConfig *condition_config_ptr; // [rsp+78h] [rbp-378h]
  std::shared_ptr<Scene> v73; // [rsp+80h] [rbp-370h] BYREF
  std::pair<int,std::shared_ptr<DungeonScene> > __in; // [rsp+90h] [rbp-360h] BYREF
  EnterDungeonOption v75; // [rsp+B0h] [rbp-340h] BYREF
  common::milog::MiLogStream v76; // [rsp+D0h] [rbp-320h] BYREF
  std::map<unsigned int,unsigned int> level_config_id_map; // [rsp+F0h] [rbp-300h] BYREF
  char v78[720]; // [rsp+120h] [rbp-2D0h] BYREF

  *(&v58._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v58._anon_0._M_allocated_capacity = (std::string::size_type)req;
  v58._M_string_length = (std::string::size_type)rsp_0;
  v3 = (unsigned __int64)v78;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(672LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "14 32 1 10 holder:482 48 4 16 challenge_id:390 64 4 14 dungeon_id:481 80 4 16 condition_id:447 9"
                        "6 16 17 cur_world_ptr:421 128 16 13 scene_ptr:428 160 16 21 dungeon_scene_ptr:500 192 16 14 play"
                        "er_ptr:526 224 16 23 effigy_activity_ptr:543 256 24 20 condition_id_vec:393 320 24 18 player_ptr"
                        "_vec:524 384 32 11 context:511 448 48 20 exclusive_id_set:446 528 104 26 dungeon_candidate_team:480";
  *(_QWORD *)(v3 + 16) = EffigyActivity::startEffigyChallenge;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556927;
  v5[536862722] = -234556924;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = -219021312;
  v5[536862726] = -219021312;
  v5[536862727] = -219021312;
  v5[536862728] = -234881024;
  v5[536862729] = -218959118;
  v5[536862730] = -234881024;
  v5[536862731] = -218959118;
  v5[536862733] = -218959118;
  v5[536862735] = -219021312;
  v5[536862736] = 62194;
  v5[536862739] = -218103808;
  v5[536862740] = -202116109;
  *(_DWORD *)(v3 + 48) = proto::StartEffigyChallengeReq::challenge_id(req);
  difficulty_id = proto::StartEffigyChallengeReq::difficulty_id(req);
  point_id = proto::StartEffigyChallengeReq::point_id(req);
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 256));
  v6 = proto::StartEffigyChallengeReq::condition_id_list(req);
  common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(v6, (std::vector<unsigned int> *)(v3 + 256));
  proto::StartEffigyChallengeRsp::set_challenge_id(
    (proto::StartEffigyChallengeRsp *const)v58._M_string_length,
    *(_DWORD *)(v3 + 48));
  proto::StartEffigyChallengeRsp::set_difficulty_id(
    (proto::StartEffigyChallengeRsp *const)v58._M_string_length,
    difficulty_id);
  proto::StartEffigyChallengeRsp::set_point_id((proto::StartEffigyChallengeRsp *const)v58._M_string_length, point_id);
  v7 = proto::StartEffigyChallengeRsp::mutable_condition_id_list((proto::StartEffigyChallengeRsp *const)v58._M_string_length);
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(
    (const std::vector<unsigned int> *)(v3 + 256),
    v7);
  if ( !EffigyActivity::isConditionValid(this, (std::vector<unsigned int> *)(v3 + 256)) )
  {
    common::milog::MiLogStream::create(
      &v76,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/effigy_activity.cpp",
      "startEffigyChallenge",
      402);
    v8 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
           &v76,
           (const char (*)[49])"[EFFIGY] isConditionValid failed, challenge_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v76);
    v9 = -1;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v73);
    conf_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v73)->design_config.txt_config_mgr.activity_effigy_challenge_config_mgr;
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v73);
    effigy_challenge_config_ptr = data::ActivityEffigyChallengeExcelConfigMgrBase::findEffigyChallengeExcelConfig(
                                    conf_mgr,
                                    *(_DWORD *)(v3 + 48));
    if ( effigy_challenge_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      SceneComp = Player::getSceneComp(this->player_);
      if ( !PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
      {
        common::milog::MiLogStream::create(
          &v76,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/effigy_activity.cpp",
          "startEffigyChallenge",
          417);
        v12 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                &v76,
                (const char (*)[34])"[EFFIGY] not in self world, uid: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        *(_DWORD *)(v3 + 80) = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 80));
        common::milog::MiLogStream::~MiLogStream(&v76);
        v9 = -1;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Player::getSceneComp(this->player_);
        PlayerSceneComp::getCurWorld<PlayerWorld>((const PlayerSceneComp *const)(v3 + 96));
        if ( std::operator==<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v3 + 96)) )
        {
          common::milog::MiLogStream::create(
            &v76,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/effigy_activity.cpp",
            "startEffigyChallenge",
            424);
          v13 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                  &v76,
                  (const char (*)[35])"[EFFIGY] getCurWorld failed, uid: ");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          *(_DWORD *)(v3 + 80) = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 80));
          common::milog::MiLogStream::~MiLogStream(&v76);
          v9 = -1;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          Player::getSceneComp(this->player_);
          PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v3 + 128));
          if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 128)) )
          {
            common::milog::MiLogStream::create(
              &v76,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/effigy_activity.cpp",
              "startEffigyChallenge",
              431);
            v14 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                    &v76,
                    (const char (*)[33])"[EFFIGY] scene_ptr is null, uid:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            *(_DWORD *)(v3 + 80) = Player::getUid(this->player_);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 80));
            common::milog::MiLogStream::~MiLogStream(&v76);
            v9 = 512;
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)&effigy_challenge_config_ptr->day_index >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)effigy_challenge_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&effigy_challenge_config_ptr->day_index >> 3)
                                                                                         + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            day_index = effigy_challenge_config_ptr->day_index;
            if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3)
                                                                  + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            begin_time = BaseActivity::getBeginTimeByOpenDay(this->schedule_id_, day_index);
            if ( (unsigned int)common::tools::TimeUtils::getNow() >= begin_time )
            {
              std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 448));
              __for_range = (std::vector<unsigned int> *)(v3 + 256);
              __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 256))._M_current;
              __for_end._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v3 + 256))._M_current;
              while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
              {
                v16 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
                if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                *(_DWORD *)(v3 + 80) = *v16;
                condition_config_ptr = data::ActivityEffigyChallengeExcelConfigMgrBase::findEffigyLimitingConditionExcelConfig(
                                         conf_mgr,
                                         *(_DWORD *)(v3 + 80));
                if ( !condition_config_ptr )
                {
                  common::milog::MiLogStream::create(
                    &v76,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/activity/effigy_activity.cpp",
                    "startEffigyChallenge",
                    452);
                  v17 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
                          &v76,
                          (const char (*)[63])"[EFFIGY] findEffigyChallengeExcelConfig failed, challenge_id: ");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v17,
                    (const unsigned int *)(v3 + 48));
                  common::milog::MiLogStream::~MiLogStream(&v76);
                  v9 = -1;
                  goto LABEL_111;
                }
                if ( !ActivityEffigyChallengeExcelConfigMgr::isConditionIdAvailable(
                        conf_mgr,
                        *(_DWORD *)(v3 + 48),
                        *(_DWORD *)(v3 + 80)) )
                {
                  common::milog::MiLogStream::create(
                    &v76,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/activity/effigy_activity.cpp",
                    "startEffigyChallenge",
                    459);
                  v18 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                          &v76,
                          (const char (*)[50])"[EFFIGY] condition_id unavailable, challenge_id: ");
                  v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v18,
                          (const unsigned int *)(v3 + 48));
                  v20 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                          v19,
                          (const char (*)[17])" ,condition_id: ");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v20,
                    (const unsigned int *)(v3 + 80));
                  common::milog::MiLogStream::~MiLogStream(&v76);
                  v9 = -1;
                  goto LABEL_111;
                }
                if ( *(_BYTE *)(((unsigned __int64)&condition_config_ptr->exclusive_id >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&condition_config_ptr->exclusive_id >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4();
                }
                if ( condition_config_ptr->exclusive_id )
                {
                  v21 = std::set<unsigned int>::emplace<unsigned int const&>(
                          (std::set<unsigned int> *const)(v3 + 448),
                          &condition_config_ptr->exclusive_id,
                          &condition_config_ptr->exclusive_id);
                  if ( !v21.second )
                  {
                    common::milog::MiLogStream::create(
                      &v76,
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/player/activity/effigy_activity.cpp",
                      "startEffigyChallenge",
                      467);
                    v23 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                            &v76,
                            (const char (*)[49])"[EFFIGY] exclusive_id duplicated, exclusive_id: ");
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v23,
                      &condition_config_ptr->exclusive_id);
                    common::milog::MiLogStream::~MiLogStream(&v76);
                    v9 = -1;
                    goto LABEL_111;
                  }
                }
                __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
              }
              if ( (unsigned int)EffigyActivity::getChallengeScore(
                                   this,
                                   *(_DWORD *)(v3 + 48),
                                   difficulty_id,
                                   (const std::vector<unsigned int> *)(v3 + 256),
                                   1) )
              {
                v25 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
                DungeonCandidateTeam = PlayerWorld::getDungeonCandidateTeam(v25);
                DungeonCandidateTeam::DungeonCandidateTeam(
                  (DungeonCandidateTeam *const)(v3 + 528),
                  DungeonCandidateTeam);
                if ( *(_BYTE *)(((unsigned __int64)&effigy_challenge_config_ptr->dungeon_id >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&effigy_challenge_config_ptr->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4();
                }
                *(_DWORD *)(v3 + 64) = effigy_challenge_config_ptr->dungeon_id;
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                BasicComp = Player::getBasicComp(this->player_);
                PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v76, BasicComp);
                StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32), 0xBE0u, v58);
                std::string::~string(&v76);
                if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                DungeonComp = Player::getDungeonComp(thisa->player_);
                memset(&v75, 0, sizeof(v75));
                EnterDungeonOption::EnterDungeonOption(&v75);
                memset(&level_config_id_map, 0, sizeof(level_config_id_map));
                std::map<unsigned int,unsigned int>::map(&level_config_id_map);
                v29 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
                SceneId = Scene::getSceneId(v29);
                PlayerDungeonComp::enterDungeon(
                  &__in,
                  DungeonComp,
                  *(_DWORD *)(v3 + 64),
                  SceneId,
                  point_id,
                  &level_config_id_map,
                  v75);
                std::map<unsigned int,unsigned int>::~map(&level_config_id_map);
                ret = std::get<0ul,int,std::shared_ptr<DungeonScene>>(&__in);
                dungeon_ptr = std::get<1ul,int,std::shared_ptr<DungeonScene>>(&__in);
                if ( *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                if ( *ret >= 0 )
                {
                  if ( *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load4();
                  }
                  if ( *ret <= 0 )
                  {
                    if ( std::operator==<DungeonScene>(dungeon_ptr, 0LL) )
                    {
                      common::milog::MiLogStream::create(
                        &v76,
                        &common::milog::MiLogDefault::default_log_obj_,
                        1u,
                        "./src/player/activity/effigy_activity.cpp",
                        "startEffigyChallenge",
                        496);
                      v39 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                              &v76,
                              (const char (*)[52])"[EFFIGY] enterDungeon dungeon_ptr is nullptr, uid: ");
                      if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
                        __asan_report_load8();
                      *(_DWORD *)(v3 + 80) = Player::getUid(thisa->player_);
                      v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                              v39,
                              (const unsigned int *)(v3 + 80));
                      v41 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                              v40,
                              (const char (*)[15])" ,dungeon_id: ");
                      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v41,
                        (const unsigned int *)(v3 + 64));
                      common::milog::MiLogStream::~MiLogStream(&v76);
                      if ( *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) != 0
                        && (char)(((unsigned __int8)ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_load4();
                      }
                      v9 = *ret;
                    }
                    else
                    {
                      if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
                        __asan_report_load8();
                      Player::getSceneComp(thisa->player_);
                      PlayerSceneComp::getDestScene((const PlayerSceneComp *const)&v73);
                      std::dynamic_pointer_cast<DungeonScene,Scene>((const std::shared_ptr<Scene> *)(v3 + 160));
                      std::shared_ptr<Scene>::~shared_ptr(&v73);
                      if ( std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v3 + 160))
                        || (v42 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160)),
                            DungeonScene::getDungeonId(v42) != *(_DWORD *)(v3 + 64)) )
                      {
                        common::milog::MiLogStream::create(
                          &v76,
                          &common::milog::MiLogDefault::default_log_obj_,
                          3u,
                          "./src/player/activity/effigy_activity.cpp",
                          "startEffigyChallenge",
                          503);
                        v44 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                                &v76,
                                (const char (*)[43])"[EFFIGY] player enter dungeon failed, uid:");
                        if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
                          __asan_report_load8();
                        *(_DWORD *)(v3 + 80) = Player::getUid(thisa->player_);
                        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v44,
                          (const unsigned int *)(v3 + 80));
                        common::milog::MiLogStream::~MiLogStream(&v76);
                        v9 = -1;
                      }
                      else
                      {
                        if ( *(_BYTE *)(((unsigned __int64)&thisa->last_difficulty_id_ >> 3) + 0x7FFF8000) != 0
                          && *(_BYTE *)(((unsigned __int64)&thisa->last_difficulty_id_ >> 3) + 0x7FFF8000) <= 3 )
                        {
                          __asan_report_store4(&thisa->last_difficulty_id_);
                        }
                        thisa->last_difficulty_id_ = difficulty_id;
                        EffigyActivity::EffigyDungeonContext::EffigyDungeonContext((EffigyActivity::EffigyDungeonContext *const)(v3 + 384));
                        *(_DWORD *)(v3 + 384) = *(_DWORD *)(v3 + 48);
                        *(_DWORD *)(v3 + 388) = difficulty_id;
                        std::vector<unsigned int>::operator=(
                          (std::vector<unsigned int> *const)(v3 + 392),
                          (const std::vector<unsigned int> *)(v3 + 256));
                        v45 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
                        DungeonScene::setDungeonExtraData<EffigyActivity::EffigyDungeonContext>(
                          v45,
                          (const EffigyActivity::EffigyDungeonContext *)(v3 + 384));
                        std::shared_ptr<DungeonScene>::shared_ptr(
                          (std::shared_ptr<DungeonScene> *const)&v73,
                          (const std::shared_ptr<DungeonScene> *)(v3 + 160));
                        EffigyActivity::initLevel(thisa, (DungeonScenePtr *)&v73);
                        std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)&v73);
                        common::milog::MiLogStream::create(
                          &v76,
                          &common::milog::MiLogDefault::default_log_obj_,
                          1u,
                          "./src/player/activity/effigy_activity.cpp",
                          "startEffigyChallenge",
                          520);
                        v46 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                                &v76,
                                (const char (*)[43])"[EFFIGY] save effigy challenge info, uid: ");
                        if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
                          __asan_report_load8();
                        *(_DWORD *)(v3 + 80) = Player::getUid(thisa->player_);
                        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v46,
                          (const unsigned int *)(v3 + 80));
                        common::milog::MiLogStream::~MiLogStream(&v76);
                        std::shared_ptr<DungeonScene>::shared_ptr(
                          (std::shared_ptr<DungeonScene> *const)&v73,
                          (const std::shared_ptr<DungeonScene> *)(v3 + 160));
                        p_for_end = (std::vector<unsigned int>::iterator *)&v73;
                        EffigyActivity::logEnterDungeon(thisa, (DungeonScenePtr *)&v73);
                        std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)&v73);
                        if ( DungeonCandidateTeam::isVaild((DungeonCandidateTeam *const)(v3 + 528)) )
                        {
                          std::vector<std::shared_ptr<Player>>::vector((std::vector<std::shared_ptr<Player>> *const)(v3 + 320));
                          DungeonCandidateTeam::getAllPlayerPtrVec(
                            (DungeonCandidateTeam *const)(v3 + 528),
                            (std::vector<std::shared_ptr<Player>> *)(v3 + 320));
                          __for_range_0 = (std::vector<std::shared_ptr<Player>> *)(v3 + 320);
                          __for_begin._M_current = (unsigned int *)std::vector<std::shared_ptr<Player>>::begin((std::vector<std::shared_ptr<Player>> *const)(v3 + 320))._M_current;
                          __for_end._M_current = (unsigned int *)std::vector<std::shared_ptr<Player>>::end(__for_range_0)._M_current;
                          while ( 1 )
                          {
                            p_for_end = &__for_end;
                            if ( !__gnu_cxx::operator!=<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>(
                                    (const __gnu_cxx::__normal_iterator<std::shared_ptr<Player>*,std::vector<std::shared_ptr<Player>> > *)&__for_begin,
                                    (const __gnu_cxx::__normal_iterator<std::shared_ptr<Player>*,std::vector<std::shared_ptr<Player>> > *)&__for_end) )
                              break;
                            v48 = __gnu_cxx::__normal_iterator<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>::operator*((const __gnu_cxx::__normal_iterator<std::shared_ptr<Player>*,std::vector<std::shared_ptr<Player>> > *const)&__for_begin);
                            std::shared_ptr<Player>::shared_ptr((std::shared_ptr<Player> *const)(v3 + 192), v48);
                            if ( !std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v3 + 192)) )
                            {
                              v49 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
                              Uid = Player::getUid(v49);
                              if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
                                __asan_report_load8();
                              if ( Uid != Player::getUid(thisa->player_) )
                              {
                                v51 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
                                Player::getSceneComp(v51);
                                PlayerSceneComp::getDestScene((const PlayerSceneComp *const)(v3 + 224));
                                std::dynamic_pointer_cast<DungeonScene,Scene>(&v73);
                                v52 = std::operator!=<DungeonScene,DungeonScene>(
                                        (const std::shared_ptr<DungeonScene> *)&v73,
                                        (const std::shared_ptr<DungeonScene> *)(v3 + 160));
                                std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)&v73);
                                std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 224));
                                if ( !v52 )
                                {
                                  v53 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
                                  Player::getActivityComp(v53);
                                  PlayerActivityComp::findOpenningActivity<EffigyActivity>((PlayerActivityComp *const)(v3 + 224));
                                  if ( std::operator!=<EffigyActivity>(
                                         0LL,
                                         (const std::shared_ptr<EffigyActivity> *)(v3 + 224)) )
                                  {
                                    v54 = std::__shared_ptr_access<EffigyActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<EffigyActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 224));
                                    std::shared_ptr<DungeonScene>::shared_ptr(
                                      (std::shared_ptr<DungeonScene> *const)&v73,
                                      (const std::shared_ptr<DungeonScene> *)(v3 + 160));
                                    EffigyActivity::logEnterDungeon(v54, (DungeonScenePtr *)&v73);
                                    std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)&v73);
                                  }
                                  std::shared_ptr<EffigyActivity>::~shared_ptr((std::shared_ptr<EffigyActivity> *const)(v3 + 224));
                                }
                              }
                            }
                            std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 192));
                            __gnu_cxx::__normal_iterator<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>::operator++((__gnu_cxx::__normal_iterator<std::shared_ptr<Player>*,std::vector<std::shared_ptr<Player>> > *const)&__for_begin);
                          }
                          std::vector<std::shared_ptr<Player>>::~vector((std::vector<std::shared_ptr<Player>> *const)(v3 + 320));
                        }
                        v55 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
                        std::function<void ()(Player &,DungeonScene &,proto::DungeonSettleNotify &)>::function<EffigyActivity::startEffigyChallenge(proto::StartEffigyChallengeReq const&,proto::StartEffigyChallengeRsp &)::{lambda(Player &,DungeonScene &,proto::DungeonSettleNotify &)#1},void,void>(
                          (std::function<void(Player&,DungeonScene&,proto::DungeonSettleNotify&)> *const)&v76,
                          (EffigyActivity::startEffigyChallenge::<lambda(Player&, DungeonScene&, proto::DungeonSettleNotify&)>)p_for_end);
                        DungeonScene::registerDungeonSettleCallback(v55, (DungeonSettleCallback *)&v76);
                        std::function<void ()(Player &,DungeonScene &,proto::DungeonSettleNotify &)>::~function((std::function<void(Player&,DungeonScene&,proto::DungeonSettleNotify&)> *const)&v76);
                        v56 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
                        std::function<void ()(Player &,DungeonScene &,Challenge &,proto::DungeonChallengeFinishNotify &)>::function<EffigyActivity::startEffigyChallenge(proto::StartEffigyChallengeReq const&,proto::StartEffigyChallengeRsp &)::{lambda(Player &,DungeonScene &,Challenge &,proto::DungeonChallengeFinishNotify &)#2},void,void>(
                          (std::function<void(Player&,DungeonScene&,Challenge&,proto::DungeonChallengeFinishNotify&)> *const)&v76,
                          (EffigyActivity::startEffigyChallenge::<lambda(Player&, DungeonScene&, Challenge&, proto::DungeonChallengeFinishNotify&)>)&v76);
                        DungeonScene::registerChallengeSettleCallback(v56, (ChallengeSettleCallback *)&v76);
                        std::function<void ()(Player &,DungeonScene &,Challenge &,proto::DungeonChallengeFinishNotify &)>::~function((std::function<void(Player&,DungeonScene&,Challenge&,proto::DungeonChallengeFinishNotify&)> *const)&v76);
                        v9 = 0;
                        EffigyActivity::EffigyDungeonContext::~EffigyDungeonContext((EffigyActivity::EffigyDungeonContext *const)(v3 + 384));
                      }
                      std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v3 + 160));
                    }
                  }
                  else
                  {
                    common::milog::MiLogStream::create(
                      &v76,
                      &common::milog::MiLogDefault::default_log_obj_,
                      1u,
                      "./src/player/activity/effigy_activity.cpp",
                      "startEffigyChallenge",
                      491);
                    v34 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                            &v76,
                            (const char (*)[36])"[EFFIGY] enterDungeon failed, uid: ");
                    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
                      __asan_report_load8();
                    *(_DWORD *)(v3 + 80) = Player::getUid(thisa->player_);
                    v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                            v34,
                            (const unsigned int *)(v3 + 80));
                    v36 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                            v35,
                            (const char (*)[15])" ,dungeon_id: ");
                    v37 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                            v36,
                            (const unsigned int *)(v3 + 64));
                    v38 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(
                            v37,
                            (const char (*)[7])" ret: ");
                    common::milog::MiLogStream::operator<<<int,(int *)0>(v38, ret);
                    common::milog::MiLogStream::~MiLogStream(&v76);
                    if ( *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) != 0
                      && (char)(((unsigned __int8)ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_load4();
                    }
                    v9 = *ret;
                  }
                }
                else
                {
                  common::milog::MiLogStream::create(
                    &v76,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/activity/effigy_activity.cpp",
                    "startEffigyChallenge",
                    486);
                  v31 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                          &v76,
                          (const char (*)[36])"[EFFIGY] enterDungeon failed, uid: ");
                  if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8();
                  *(_DWORD *)(v3 + 80) = Player::getUid(thisa->player_);
                  v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v31,
                          (const unsigned int *)(v3 + 80));
                  v33 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                          v32,
                          (const char (*)[15])" ,dungeon_id: ");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v33,
                    (const unsigned int *)(v3 + 64));
                  common::milog::MiLogStream::~MiLogStream(&v76);
                  if ( *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load4();
                  }
                  v9 = *ret;
                }
                std::pair<int,std::shared_ptr<DungeonScene>>::~pair(&__in);
                StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32));
                DungeonCandidateTeam::~DungeonCandidateTeam((DungeonCandidateTeam *const)(v3 + 528));
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v76,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/activity/effigy_activity.cpp",
                  "startEffigyChallenge",
                  475);
                v24 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                        &v76,
                        (const char (*)[49])"[EFFIGY] challenge_score must more than 0, uid: ");
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                *(_DWORD *)(v3 + 80) = Player::getUid(this->player_);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v24,
                  (const unsigned int *)(v3 + 80));
                common::milog::MiLogStream::~MiLogStream(&v76);
                v9 = -1;
              }
LABEL_111:
              std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 448));
            }
            else
            {
              common::milog::MiLogStream::create(
                &v76,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/effigy_activity.cpp",
                "startEffigyChallenge",
                441);
              v15 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                      &v76,
                      (const char (*)[52])"[EFFIGY] effigy challenge not begin, challenge_id: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v15,
                (const unsigned int *)(v3 + 48));
              common::milog::MiLogStream::~MiLogStream(&v76);
              v9 = -1;
            }
          }
          std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 128));
        }
        std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v3 + 96));
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v76,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/effigy_activity.cpp",
        "startEffigyChallenge",
        410);
      v10 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
              &v76,
              (const char (*)[63])"[EFFIGY] findEffigyChallengeExcelConfig failed, challenge_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v76);
      v9 = -1;
    }
  }
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 256));
  result = v9;
  if ( v78 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8034) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF803C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF804C) = 0LL;
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
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8050) = -168430091;
  }
  return result;
};

// Line 551: range 00000000165D36D8-00000000165D3832
void __cdecl EffigyActivity::startEffigyChallenge(proto::StartEffigyChallengeReq const&,proto::StartEffigyChallengeRsp &)::{lambda(Player &,DungeonScene &,proto::DungeonSettleNotify &)#1}::operator()(
        const EffigyActivity::startEffigyChallenge::<lambda(Player&, DungeonScene&, proto::DungeonSettleNotify&)> *const __closure,
        Player *player,
        DungeonScene *dungeon_scene,
        proto::DungeonSettleNotify *notify)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  EffigyActivity *v7; // r14
  proto::EffigyChallengeDungeonResultInfo *v8; // rdx
  char v11[112]; // [rsp+20h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 16 activity_ptr:553";
  *(_QWORD *)(v4 + 16) = EffigyActivity::startEffigyChallenge(proto::StartEffigyChallengeReq const&,proto::StartEffigyChallengeRsp &)::{lambda(Player &,DungeonScene &,proto::DungeonSettleNotify &)#1}::operator();
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  Player::getActivityComp(player);
  PlayerActivityComp::findOpenningActivity<EffigyActivity>((PlayerActivityComp *const)(v4 + 32));
  if ( std::operator!=<EffigyActivity>(0LL, (const std::shared_ptr<EffigyActivity> *)(v4 + 32)) )
  {
    v7 = std::__shared_ptr_access<EffigyActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<EffigyActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    v8 = proto::DungeonSettleNotify::mutable_effigy_challenge_dungeon_result_info(notify);
    EffigyActivity::onSettleLoopDungeon(v7, dungeon_scene, v8);
  }
  std::shared_ptr<EffigyActivity>::~shared_ptr((std::shared_ptr<EffigyActivity> *const)(v4 + 32));
  if ( v11 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 560: range 00000000165D3834-00000000165D399C
void __cdecl EffigyActivity::startEffigyChallenge(proto::StartEffigyChallengeReq const&,proto::StartEffigyChallengeRsp &)::{lambda(Player &,DungeonScene &,Challenge &,proto::DungeonChallengeFinishNotify &)#2}::operator()(
        const EffigyActivity::startEffigyChallenge::<lambda(Player&, DungeonScene&, Challenge&, proto::DungeonChallengeFinishNotify&)> *const __closure,
        Player *player,
        DungeonScene *dungeon_scene,
        Challenge *challenge,
        proto::DungeonChallengeFinishNotify *notify)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // r12
  EffigyActivity *v8; // r14
  proto::EffigyChallengeDungeonResultInfo *v9; // rcx
  char v13[112]; // [rsp+30h] [rbp-70h] BYREF

  v5 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_0(64LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 16 16 activity_ptr:562";
  *(_QWORD *)(v5 + 16) = EffigyActivity::startEffigyChallenge(proto::StartEffigyChallengeReq const&,proto::StartEffigyChallengeRsp &)::{lambda(Player &,DungeonScene &,Challenge &,proto::DungeonChallengeFinishNotify &)#2}::operator();
  v7 = v5 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202178560;
  Player::getActivityComp(player);
  PlayerActivityComp::findOpenningActivity<EffigyActivity>((PlayerActivityComp *const)(v5 + 32));
  if ( std::operator!=<EffigyActivity>(0LL, (const std::shared_ptr<EffigyActivity> *)(v5 + 32)) )
  {
    v8 = std::__shared_ptr_access<EffigyActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<EffigyActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 32));
    v9 = proto::DungeonChallengeFinishNotify::mutable_effigy_challenge_dungeon_result_info(notify);
    EffigyActivity::onSettleLoopDungeonChallenge(v8, dungeon_scene, challenge, v9);
  }
  std::shared_ptr<EffigyActivity>::~shared_ptr((std::shared_ptr<EffigyActivity> *const)(v5 + 32));
  if ( v13 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 573: range 00000000165D5752-00000000165D5FC5
int32_t __cdecl EffigyActivity::initLevel(EffigyActivity *const this, DungeonScenePtr *p_dungeon_scene_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // r14
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v8; // rdx
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  SceneEntity *v13; // rax
  DungeonScene *v14; // r14
  EffigyActivity::EffigyDungeonContext *v15; // rax
  int32_t EffigyChallengeMonsterLevel; // eax
  int32_t result; // eax
  std::vector<unsigned int>::iterator __for_begin; // [rsp+10h] [rbp-170h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+18h] [rbp-168h] BYREF
  std::vector<data::DungeonLevelEntityConfig>::const_iterator __for_begin_0; // [rsp+20h] [rbp-160h] BYREF
  std::vector<data::DungeonLevelEntityConfig>::const_iterator __for_end_0; // [rsp+28h] [rbp-158h] BYREF
  const ActivityEffigyChallengeExcelConfigMgr *conf_mgr; // [rsp+30h] [rbp-150h]
  std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-148h]
  const data::EffigyLimitingConditionExcelConfig *condition_config_ptr; // [rsp+40h] [rbp-140h]
  const std::vector<data::DungeonLevelEntityConfig> *level_config_vec_ptr; // [rsp+48h] [rbp-138h]
  const std::vector<data::DungeonLevelEntityConfig> *__for_range_0; // [rsp+50h] [rbp-130h]
  const data::DungeonLevelEntityConfig *level_config; // [rsp+58h] [rbp-128h]
  std::shared_ptr<Config> v28; // [rsp+60h] [rbp-120h] BYREF
  common::milog::MiLogStream v29; // [rsp+70h] [rbp-110h] BYREF
  char v30[240]; // [rsp+90h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 16 condition_id:590 64 4 19 level_config_id:601 80 16 20 scene_entity_ptr:585 112 40 15 context_opt:579";
  *(_QWORD *)(v2 + 16) = EffigyActivity::initLevel;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = 61956;
  v4[536862723] = 62194;
  v4[536862724] = -218103808;
  v4[536862725] = -202116109;
  if ( std::operator==<DungeonScene>(p_dungeon_scene_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/effigy_activity.cpp",
      "initLevel",
      576);
    common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
      &v29,
      (const char (*)[37])"[EFFIGY] dungeon_scene_ptr is null. ");
    common::milog::MiLogStream::~MiLogStream(&v29);
    v5 = -1;
  }
  else
  {
    v6 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_dungeon_scene_ptr);
    DungeonScene::getDungeonExtraData<EffigyActivity::EffigyDungeonContext>(
      (std::optional<EffigyActivity::EffigyDungeonContext> *)(v2 + 112),
      v6);
    if ( !std::optional<EffigyActivity::EffigyDungeonContext>::has_value((const std::optional<EffigyActivity::EffigyDungeonContext> *const)(v2 + 112)) )
    {
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/effigy_activity.cpp",
        "initLevel",
        582);
      common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v29, (const char (*)[19])"[EFFIGY] no data. ");
      common::milog::MiLogStream::~MiLogStream(&v29);
      v5 = -1;
    }
    else
    {
      std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_dungeon_scene_ptr);
      Scene::getSceneEntity((const Scene *const)(v2 + 80));
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v28);
      conf_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v28)->design_config.txt_config_mgr.activity_effigy_challenge_config_mgr;
      std::shared_ptr<Config>::~shared_ptr(&v28);
      if ( std::operator!=<SceneEntity>(0LL, (const std::shared_ptr<SceneEntity> *)(v2 + 80)) )
      {
        common::milog::MiLogStream::create(
          &v29,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/effigy_activity.cpp",
          "initLevel",
          589);
        v7 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
               &v29,
               (const char (*)[50])"[EFFIGY] scene_entity_ptr add level config, uid: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        *(_DWORD *)(v2 + 64) = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 64));
        common::milog::MiLogStream::~MiLogStream(&v29);
        __for_range = &std::optional<EffigyActivity::EffigyDungeonContext>::operator->((std::optional<EffigyActivity::EffigyDungeonContext> *const)(v2 + 112))->select_condition_id_vec;
        __for_begin._M_current = std::vector<unsigned int>::begin(__for_range)._M_current;
        __for_end._M_current = std::vector<unsigned int>::end(__for_range)._M_current;
        while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
        {
          v8 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
          if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          *(_DWORD *)(v2 + 48) = *v8;
          condition_config_ptr = data::ActivityEffigyChallengeExcelConfigMgrBase::findEffigyLimitingConditionExcelConfig(
                                   conf_mgr,
                                   *(_DWORD *)(v2 + 48));
          if ( !condition_config_ptr )
          {
            common::milog::MiLogStream::create(
              &v29,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/effigy_activity.cpp",
              "initLevel",
              595);
            v9 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
                   &v29,
                   (const char (*)[63])"[EFFIGY] findEffigyChallengeExcelConfig failed, challenge_id: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
            common::milog::MiLogStream::~MiLogStream(&v29);
            v5 = -1;
            goto LABEL_29;
          }
          if ( *(_BYTE *)(((unsigned __int64)&condition_config_ptr->condition_type >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)condition_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&condition_config_ptr->condition_type >> 3)
                                                                                + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          if ( condition_config_ptr->condition_type == EFFIGY_CONDITION_LEVEL_CONFIG )
          {
            if ( *(_BYTE *)(((unsigned __int64)&condition_config_ptr->condition_param1 >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&condition_config_ptr->condition_param1 >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            *(_DWORD *)(v2 + 64) = condition_config_ptr->condition_param1;
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v28);
            v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v28);
            level_config_vec_ptr = DungeonExcelConfigMgr::findDungeonLevelConfigVec(
                                     &v10->design_config.txt_config_mgr.dungeon_config_mgr,
                                     *(_DWORD *)(v2 + 64));
            std::shared_ptr<Config>::~shared_ptr(&v28);
            if ( !level_config_vec_ptr )
            {
              common::milog::MiLogStream::create(
                &v29,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/effigy_activity.cpp",
                "initLevel",
                605);
              v11 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
                      &v29,
                      (const char (*)[61])"[EFFIGY] findDungeonLevelConfigVec failed, level_config_id: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v11,
                (const unsigned int *)(v2 + 64));
              common::milog::MiLogStream::~MiLogStream(&v29);
              v5 = -1;
              goto LABEL_29;
            }
            __for_range_0 = level_config_vec_ptr;
            __for_begin_0._M_current = std::vector<data::DungeonLevelEntityConfig>::begin(level_config_vec_ptr)._M_current;
            __for_end_0._M_current = std::vector<data::DungeonLevelEntityConfig>::end(__for_range_0)._M_current;
            while ( __gnu_cxx::operator!=<data::DungeonLevelEntityConfig const*,std::vector<data::DungeonLevelEntityConfig>>(
                      &__for_begin_0,
                      &__for_end_0) )
            {
              level_config = __gnu_cxx::__normal_iterator<data::DungeonLevelEntityConfig const*,std::vector<data::DungeonLevelEntityConfig>>::operator*(&__for_begin_0);
              common::milog::MiLogStream::create(
                &v29,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/player/activity/effigy_activity.cpp",
                "initLevel",
                610);
              v12 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                      &v29,
                      (const char (*)[52])"[EFFIGY] add init level config, level_config_name: ");
              common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, &level_config->level_config_name);
              common::milog::MiLogStream::~MiLogStream(&v29);
              v13 = std::__shared_ptr_access<SceneEntity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneEntity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
              SceneEntity::addInitLevelConfig(v13, &level_config->level_config_name);
              __gnu_cxx::__normal_iterator<data::DungeonLevelEntityConfig const*,std::vector<data::DungeonLevelEntityConfig>>::operator++(&__for_begin_0);
            }
          }
          __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
        }
      }
      v14 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_dungeon_scene_ptr);
      v15 = std::optional<EffigyActivity::EffigyDungeonContext>::operator->((std::optional<EffigyActivity::EffigyDungeonContext> *const)(v2 + 112));
      EffigyChallengeMonsterLevel = EffigyActivity::EffigyDungeonContext::getEffigyChallengeMonsterLevel(v15);
      DungeonScene::setReviseLevel(v14, EffigyChallengeMonsterLevel);
      v5 = 0;
LABEL_29:
      std::shared_ptr<SceneEntity>::~shared_ptr((std::shared_ptr<SceneEntity> *const)(v2 + 80));
    }
    std::optional<EffigyActivity::EffigyDungeonContext>::~optional((std::optional<EffigyActivity::EffigyDungeonContext> *const)(v2 + 112));
  }
  result = v5;
  if ( v30 == (char *)v2 )
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

// Line 622: range 00000000165D5FC6-00000000165D6A8C
int32_t __cdecl EffigyActivity::restartEffigyChallenge(
        EffigyActivity *const this,
        const proto::RestartEffigyChallengeReq *req,
        proto::RestartEffigyChallengeRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int32_t v6; // r14d
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  bool isDungeonClosed; // r14
  common::milog::MiLogStream *v10; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  uint32_t OwnerUid; // r14d
  DungeonScene *v13; // rax
  DungeonSceneTeam *DungeonSceneTeam; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r14
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  DungeonScene *v25; // r14
  EffigyActivity::EffigyDungeonContext *v26; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+24h] [rbp-18Ch] BYREF
  PlayerDungeonComp *dungeon_comp; // [rsp+28h] [rbp-188h]
  std::tuple_element<0,std::pair<int,std::shared_ptr<DungeonScene> > >::type *ret; // [rsp+30h] [rbp-180h]
  std::tuple_element<1,std::pair<int,std::shared_ptr<DungeonScene> > >::type *next_dungeon_scene_ptr; // [rsp+38h] [rbp-178h]
  std::shared_ptr<Config> v32; // [rsp+40h] [rbp-170h] BYREF
  std::pair<int,std::shared_ptr<DungeonScene> > __in; // [rsp+50h] [rbp-160h] BYREF
  EnterDungeonOption v34; // [rsp+70h] [rbp-140h] BYREF
  common::milog::MiLogStream v35; // [rsp+90h] [rbp-120h] BYREF
  std::map<unsigned int,unsigned int> level_config_id_map; // [rsp+B0h] [rbp-100h] BYREF
  char v37[208]; // [rsp+E0h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 14 dungeon_id:630 48 16 21 dungeon_scene_ptr:624 80 40 15 context_opt:652";
  *(_QWORD *)(v3 + 16) = EffigyActivity::restartEffigyChallenge;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862722] = 62194;
  v5[536862723] = -218103808;
  v5[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  dungeon_comp = Player::getDungeonComp(this->player_);
  PlayerDungeonComp::getCurDungeon((PlayerDungeonComp *const)(v3 + 48));
  if ( std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v3 + 48), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v35,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/effigy_activity.cpp",
      "restartEffigyChallenge",
      627);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
      &v35,
      (const char (*)[26])"dungeon_scene_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v35);
    v6 = -1;
  }
  else
  {
    v7 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
    *(_DWORD *)(v3 + 32) = DungeonScene::getDungeonId(v7);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v32);
    v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v32);
    isDungeonClosed = FeatureSwitchMgr::isDungeonClosed(&v8->feature_switch_mgr, *(_DWORD *)(v3 + 32));
    std::shared_ptr<Config>::~shared_ptr(&v32);
    if ( isDungeonClosed )
    {
      common::milog::MiLogStream::create(
        &v35,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/effigy_activity.cpp",
        "restartEffigyChallenge",
        633);
      v10 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
              &v35,
              (const char (*)[46])"[FEATURE_SWITCH] dungeon closed, dungeon_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v35);
      v6 = 142;
    }
    else
    {
      v11 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
      OwnerUid = Scene::getOwnerUid((const Scene *const)v11);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( OwnerUid == Player::getUid(this->player_) )
      {
        v13 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
        DungeonSceneTeam = DungeonScene::getDungeonSceneTeam(v13);
        if ( DungeonSceneTeam::isInMpMode(DungeonSceneTeam)
          && (v15 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48)),
              Scene::getPlayerCount((const Scene *const)v15) > 1) )
        {
          common::milog::MiLogStream::create(
            &v35,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/effigy_activity.cpp",
            "restartEffigyChallenge",
            644);
          common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(&v35, (const char (*)[24])off_25D28F00);
          common::milog::MiLogStream::~MiLogStream(&v35);
          v6 = -1;
        }
        else
        {
          v17 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
          if ( DungeonScene::getIsForceQuit(v17) )
          {
            common::milog::MiLogStream::create(
              &v35,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/activity/effigy_activity.cpp",
              "restartEffigyChallenge",
              649);
            common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
              &v35,
              (const char (*)[39])"dungeon timeout force all players quit");
            common::milog::MiLogStream::~MiLogStream(&v35);
            v6 = 1123;
          }
          else
          {
            v18 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
            DungeonScene::getDungeonExtraData<EffigyActivity::EffigyDungeonContext>(
              (std::optional<EffigyActivity::EffigyDungeonContext> *)(v3 + 80),
              v18);
            if ( !std::optional<EffigyActivity::EffigyDungeonContext>::has_value((const std::optional<EffigyActivity::EffigyDungeonContext> *const)(v3 + 80)) )
            {
              common::milog::MiLogStream::create(
                &v35,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/effigy_activity.cpp",
                "restartEffigyChallenge",
                655);
              common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                &v35,
                (const char (*)[18])"[EFFIGY] no data ");
              common::milog::MiLogStream::~MiLogStream(&v35);
              v6 = -1;
            }
            else
            {
              memset(&v34, 0, sizeof(v34));
              EnterDungeonOption::EnterDungeonOption(&v34);
              memset(&level_config_id_map, 0, sizeof(level_config_id_map));
              std::map<unsigned int,unsigned int>::map(&level_config_id_map);
              PlayerDungeonComp::restartDungeon(&__in, dungeon_comp, &level_config_id_map, v34);
              std::map<unsigned int,unsigned int>::~map(&level_config_id_map);
              ret = std::get<0ul,int,std::shared_ptr<DungeonScene>>(&__in);
              next_dungeon_scene_ptr = std::get<1ul,int,std::shared_ptr<DungeonScene>>(&__in);
              if ( *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              if ( *ret >= 0 )
              {
                if ( *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                if ( *ret <= 0 )
                {
                  if ( std::operator!=<DungeonScene>(next_dungeon_scene_ptr, 0LL) )
                  {
                    v25 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)next_dungeon_scene_ptr);
                    v26 = std::optional<EffigyActivity::EffigyDungeonContext>::operator*((std::optional<EffigyActivity::EffigyDungeonContext> *const)(v3 + 80));
                    DungeonScene::setDungeonExtraData<EffigyActivity::EffigyDungeonContext>(v25, v26);
                    std::shared_ptr<DungeonScene>::shared_ptr(
                      (std::shared_ptr<DungeonScene> *const)&v32,
                      next_dungeon_scene_ptr);
                    EffigyActivity::initLevel(this, (DungeonScenePtr *)&v32);
                    std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)&v32);
                  }
                  v6 = 0;
                }
                else
                {
                  common::milog::MiLogStream::create(
                    &v35,
                    &common::milog::MiLogDefault::default_log_obj_,
                    1u,
                    "./src/player/activity/effigy_activity.cpp",
                    "restartEffigyChallenge",
                    666);
                  v20 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                          &v35,
                          (const char (*)[38])"[EFFIGY] restartDungeon failed, uid: ");
                  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8();
                  val = Player::getUid(this->player_);
                  v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &val);
                  v22 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                          v21,
                          (const char (*)[15])" ,dungeon_id: ");
                  v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v22,
                          (const unsigned int *)(v3 + 32));
                  v24 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v23, (const char (*)[7])" ret: ");
                  common::milog::MiLogStream::operator<<<int,(int *)0>(v24, ret);
                  common::milog::MiLogStream::~MiLogStream(&v35);
                  if ( *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load4();
                  }
                  v6 = *ret;
                }
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v35,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/activity/effigy_activity.cpp",
                  "restartEffigyChallenge",
                  661);
                v19 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                        &v35,
                        (const char (*)[38])"[EFFIGY] restartDungeon failed. ret: ");
                common::milog::MiLogStream::operator<<<int,(int *)0>(v19, ret);
                common::milog::MiLogStream::~MiLogStream(&v35);
                if ( *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                v6 = *ret;
              }
              std::pair<int,std::shared_ptr<DungeonScene>>::~pair(&__in);
            }
            std::optional<EffigyActivity::EffigyDungeonContext>::~optional((std::optional<EffigyActivity::EffigyDungeonContext> *const)(v3 + 80));
          }
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v35,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/effigy_activity.cpp",
          "restartEffigyChallenge",
          638);
        common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
          &v35,
          (const char (*)[44])"guest can not send DungeonRestartReq, error");
        common::milog::MiLogStream::~MiLogStream(&v35);
        v6 = -1;
      }
    }
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v3 + 48));
  result = v6;
  if ( v37 == (char *)v3 )
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

// Line 679: range 00000000165D6A8E-00000000165D724C
int32_t __cdecl EffigyActivity::takeEffigyFirstPassReward(
        EffigyActivity *const this,
        const proto::TakeEffigyFirstPassRewardReq *req,
        proto::TakeEffigyFirstPassRewardRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v8; // r12
  PlayerItemComp *ItemComp; // rax
  common::milog::MiLogStream *v10; // r12
  PlayerItemComp *v11; // rax
  PlayerActivityComp *ActivityComp; // rdi
  uint32_t schedule_id; // edx
  unsigned int val; // [rsp+2Ch] [rbp-F4h] BYREF
  uint32_t reward_id; // [rsp+30h] [rbp-F0h]
  int32_t ret; // [rsp+34h] [rbp-ECh]
  const ActivityEffigyChallengeExcelConfigMgr *conf_mgr; // [rsp+38h] [rbp-E8h]
  const data::EffigyChallengeExcelConfig *effigy_challenge_config_ptr; // [rsp+40h] [rbp-E0h]
  EffigyDailyRecordInfo *daily_record_info; // [rsp+48h] [rbp-D8h]
  std::shared_ptr<Config> v22; // [rsp+50h] [rbp-D0h] BYREF
  common::milog::MiLogStream v23; // [rsp+60h] [rbp-C0h] BYREF
  char v24[160]; // [rsp+80h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 16 challenge_id:680 64 24 10 reason:713";
  *(_QWORD *)(v3 + 16) = EffigyActivity::takeEffigyFirstPassReward;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  *(_DWORD *)(v3 + 48) = proto::TakeEffigyFirstPassRewardReq::challenge_id(req);
  proto::TakeEffigyFirstPassRewardRsp::set_challenge_id(rsp_0, *(_DWORD *)(v3 + 48));
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v22);
  conf_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22)->design_config.txt_config_mgr.activity_effigy_challenge_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v22);
  effigy_challenge_config_ptr = data::ActivityEffigyChallengeExcelConfigMgrBase::findEffigyChallengeExcelConfig(
                                  conf_mgr,
                                  *(_DWORD *)(v3 + 48));
  if ( effigy_challenge_config_ptr )
  {
    daily_record_info = std::map<unsigned int,EffigyDailyRecordInfo>::operator[](
                          &this->daily_record_map_,
                          &effigy_challenge_config_ptr->day_index);
    if ( *(_BYTE *)(((unsigned __int64)&daily_record_info->challenge_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)daily_record_info + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&daily_record_info->challenge_id >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( daily_record_info->challenge_id == *(_DWORD *)(v3 + 48) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&daily_record_info->is_first_pass_reward_taken >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)daily_record_info + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&daily_record_info->is_first_pass_reward_taken >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load1(&daily_record_info->is_first_pass_reward_taken);
      }
      if ( daily_record_info->is_first_pass_reward_taken )
      {
        result = 891;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&daily_record_info->challenge_max_score >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)daily_record_info + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&daily_record_info->challenge_max_score >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( daily_record_info->challenge_max_score )
        {
          if ( *(_BYTE *)(((unsigned __int64)&effigy_challenge_config_ptr->first_pass_reward_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&effigy_challenge_config_ptr->first_pass_reward_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          reward_id = effigy_challenge_config_ptr->first_pass_reward_id;
          ActionReason::ActionReason(
            (ActionReason *const)(v3 + 64),
            ACTION_REASON_EFFIGY_FIRST_PASS_REWARD,
            ITEM_LIMIT_ACTIVITY_EFFIGY_REWARD);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          ItemComp = Player::getItemComp(this->player_);
          ret = PlayerItemComp::checkGrantReward(ItemComp, reward_id, (const ActionReason *)(v3 + 64));
          if ( ret )
          {
            common::milog::MiLogStream::create(
              &v23,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/effigy_activity.cpp",
              "takeEffigyFirstPassReward",
              717);
            v10 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                    &v23,
                    (const char (*)[40])"[EFFIGY] checkGrantReward failed, uid: ");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            val = Player::getUid(this->player_);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
            common::milog::MiLogStream::~MiLogStream(&v23);
            result = ret;
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v11 = Player::getItemComp(this->player_);
            PlayerItemComp::grantReward(v11, reward_id, (const ActionReason *)(v3 + 64), 0LL);
            if ( *(_BYTE *)(((unsigned __int64)&daily_record_info->is_first_pass_reward_taken >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)daily_record_info + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&daily_record_info->is_first_pass_reward_taken >> 3)
                                                                             + 0x7FFF8000) )
            {
              __asan_report_store1(&daily_record_info->is_first_pass_reward_taken);
            }
            daily_record_info->is_first_pass_reward_taken = 1;
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            ActivityComp = Player::getActivityComp(this->player_);
            if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3)
                                                                  + 0x7FFF8000) )
            {
              ActivityComp = (PlayerActivityComp *)&this->schedule_id_;
              __asan_report_load4();
            }
            schedule_id = this->schedule_id_;
            if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
            {
              ActivityComp = (PlayerActivityComp *)&this->activity_id_;
              __asan_report_load4();
            }
            PlayerActivityComp::logGetActivityReward(ActivityComp, this->activity_id_, schedule_id, reward_id);
            BaseActivity::notifyClientData(this, 0);
            result = 0;
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v23,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/effigy_activity.cpp",
            "takeEffigyFirstPassReward",
            708);
          v8 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                 &v23,
                 (const char (*)[41])"[EFFIGY] challenge_max_score is 0, uid: ");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
          common::milog::MiLogStream::~MiLogStream(&v23);
          result = -1;
        }
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/effigy_activity.cpp",
        "takeEffigyFirstPassReward",
        695);
      common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
        &v23,
        (const char (*)[31])"[EFFIGY] challenge id not same");
      common::milog::MiLogStream::~MiLogStream(&v23);
      result = -1;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/effigy_activity.cpp",
      "takeEffigyFirstPassReward",
      687);
    v6 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
           &v23,
           (const char (*)[63])"[EFFIGY] findEffigyChallengeExcelConfig failed, challenge_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v23);
    result = -1;
  }
  if ( v24 == (char *)v3 )
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

// Line 730: range 00000000165D724E-00000000165D797B
int32_t __cdecl EffigyActivity::takeEffigyReward(
        EffigyActivity *const this,
        const proto::TakeEffigyRewardReq *req,
        proto::TakeEffigyRewardRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v10; // rax
  PlayerItemComp *ItemComp; // rax
  common::milog::MiLogStream *v12; // r12
  PlayerItemComp *v13; // rax
  PlayerActivityComp *ActivityComp; // rdi
  uint32_t schedule_id; // edx
  unsigned int val; // [rsp+20h] [rbp-100h] BYREF
  uint32_t cur_score; // [rsp+24h] [rbp-FCh]
  uint32_t reward_id; // [rsp+28h] [rbp-F8h]
  int32_t ret; // [rsp+2Ch] [rbp-F4h]
  const ActivityEffigyChallengeExcelConfigMgr *conf_mgr; // [rsp+30h] [rbp-F0h]
  const data::EffigyRewardExcelConfig *reward_config_ptr; // [rsp+38h] [rbp-E8h]
  std::shared_ptr<Config> v24; // [rsp+40h] [rbp-E0h] BYREF
  common::milog::MiLogStream v25; // [rsp+50h] [rbp-D0h] BYREF
  char v26[176]; // [rsp+70h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 16 reward_index:731 64 24 10 reason:755";
  *(_QWORD *)(v3 + 16) = EffigyActivity::takeEffigyReward;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  *(_DWORD *)(v3 + 48) = proto::TakeEffigyRewardReq::reward_index(req);
  proto::TakeEffigyRewardRsp::set_reward_index(rsp_0, *(_DWORD *)(v3 + 48));
  if ( std::set<unsigned int>::count(
         &this->taken_reward_index_set_,
         (const std::set<unsigned int>::key_type *)(v3 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/effigy_activity.cpp",
      "takeEffigyReward",
      736);
    v6 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
           &v25,
           (const char (*)[38])"[EFFIGY] reward has been taken, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    v8 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v7, (const char (*)[17])" ,reward_index: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v25);
    result = 892;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v24);
    conf_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v24)->design_config.txt_config_mgr.activity_effigy_challenge_config_mgr;
    std::shared_ptr<Config>::~shared_ptr(&v24);
    reward_config_ptr = data::ActivityEffigyChallengeExcelConfigMgrBase::findEffigyRewardExcelConfig(
                          conf_mgr,
                          *(_DWORD *)(v3 + 48));
    if ( reward_config_ptr )
    {
      cur_score = EffigyActivity::getCurScore(this);
      if ( *(_BYTE *)(((unsigned __int64)&reward_config_ptr->score_grade >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)reward_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&reward_config_ptr->score_grade >> 3)
                                                                         + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( cur_score >= reward_config_ptr->score_grade )
      {
        if ( *(_BYTE *)(((unsigned __int64)&reward_config_ptr->reward_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&reward_config_ptr->reward_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        reward_id = reward_config_ptr->reward_id;
        ActionReason::ActionReason(
          (ActionReason *const)(v3 + 64),
          ACTION_REASON_EFFIGY_REWARD,
          ITEM_LIMIT_ACTIVITY_EFFIGY_REWARD);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        ItemComp = Player::getItemComp(this->player_);
        ret = PlayerItemComp::checkGrantReward(ItemComp, reward_id, (const ActionReason *)(v3 + 64));
        if ( ret )
        {
          common::milog::MiLogStream::create(
            &v25,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/effigy_activity.cpp",
            "takeEffigyReward",
            759);
          v12 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                  &v25,
                  (const char (*)[40])"[EFFIGY] checkGrantReward failed, uid: ");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
          common::milog::MiLogStream::~MiLogStream(&v25);
          result = ret;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v13 = Player::getItemComp(this->player_);
          PlayerItemComp::grantReward(v13, reward_id, (const ActionReason *)(v3 + 64), 0LL);
          std::set<unsigned int>::insert(
            &this->taken_reward_index_set_,
            (const std::set<unsigned int>::value_type *)(v3 + 48));
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          ActivityComp = Player::getActivityComp(this->player_);
          if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3)
                                                                + 0x7FFF8000) )
          {
            ActivityComp = (PlayerActivityComp *)&this->schedule_id_;
            __asan_report_load4();
          }
          schedule_id = this->schedule_id_;
          if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
          {
            ActivityComp = (PlayerActivityComp *)&this->activity_id_;
            __asan_report_load4();
          }
          PlayerActivityComp::logGetActivityReward(ActivityComp, this->activity_id_, schedule_id, reward_id);
          BaseActivity::notifyClientData(this, 0);
          result = 0;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v25,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/effigy_activity.cpp",
          "takeEffigyReward",
          751);
        common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
          &v25,
          (const char (*)[33])"[EFFIGY] cur_score is not enough");
        common::milog::MiLogStream::~MiLogStream(&v25);
        result = -1;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/effigy_activity.cpp",
        "takeEffigyReward",
        744);
      v10 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
              &v25,
              (const char (*)[60])"[EFFIGY] findEffigyRewardExcelConfig failed, reward_index: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v25);
      result = -1;
    }
  }
  if ( v26 == (char *)v3 )
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

// Line 772: range 00000000165D797C-00000000165D7BD5
__int64 __fastcall EffigyActivity::setChallengeMaxScoreByGm(
        EffigyActivity *const this,
        uint32_t challenge_id,
        uint32_t max_score)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  uint32_t *p_challenge_max_score; // rax
  ActivityEffigyChallengeExcelConfigMgr *conf_mgr; // [rsp+18h] [rbp-A8h]
  const data::EffigyChallengeExcelConfig *effigy_challenge_config_ptr; // [rsp+20h] [rbp-A0h]
  EffigyDailyRecordInfo *daily_record_info; // [rsp+28h] [rbp-98h]
  std::shared_ptr<Config> v13; // [rsp+30h] [rbp-90h] BYREF
  common::milog::MiLogStream v14; // [rsp+40h] [rbp-80h] BYREF
  char v15[96]; // [rsp+60h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 16 challenge_id:771";
  *(_QWORD *)(v3 + 16) = EffigyActivity::setChallengeMaxScoreByGm;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = challenge_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v13);
  conf_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13)->design_config.txt_config_mgr.activity_effigy_challenge_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v13);
  effigy_challenge_config_ptr = data::ActivityEffigyChallengeExcelConfigMgrBase::findEffigyChallengeExcelConfig(
                                  conf_mgr,
                                  *(_DWORD *)(v3 + 32));
  if ( effigy_challenge_config_ptr )
  {
    daily_record_info = std::map<unsigned int,EffigyDailyRecordInfo>::operator[](
                          &this->daily_record_map_,
                          &effigy_challenge_config_ptr->day_index);
    p_challenge_max_score = &daily_record_info->challenge_max_score;
    if ( *(_BYTE *)(((unsigned __int64)p_challenge_max_score >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_challenge_max_score & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_challenge_max_score >> 3)
                                                                              + 0x7FFF8000) )
    {
      __asan_report_store4(p_challenge_max_score);
    }
    daily_record_info->challenge_max_score = max_score;
    BaseActivity::notifyClientData(this, 0);
    result = 0LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/effigy_activity.cpp",
      "setChallengeMaxScoreByGm",
      777);
    v6 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
           &v14,
           (const char (*)[63])"[EFFIGY] findEffigyChallengeExcelConfig failed, challenge_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v14);
    result = 0xFFFFFFFFLL;
  }
  if ( v15 == (char *)v3 )
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

// Line 790: range 00000000165D7BD6-00000000165D80B4
void __cdecl EffigyActivity::onSettleLoopDungeon(
        EffigyActivity *const this,
        DungeonScene *dungeon_scene,
        proto::EffigyChallengeDungeonResultInfo *result_info)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  EffigyActivity::EffigyDungeonContext *v6; // rax
  common::milog::MiLogStream *v7; // r14
  EffigyActivity::EffigyDungeonContext *v8; // rax
  EffigyActivity::EffigyDungeonContext *v9; // rcx
  EffigyActivity::EffigyDungeonContext *v10; // rax
  common::milog::MiLogStream *v11; // r14
  EffigyActivity::EffigyDungeonContext *v12; // rax
  google::protobuf::uint32 challenge_score; // [rsp+24h] [rbp-FCh]
  ActivityEffigyChallengeExcelConfigMgr *conf_mgr; // [rsp+28h] [rbp-F8h]
  const data::EffigyChallengeExcelConfig *effigy_challenge_config_ptr; // [rsp+30h] [rbp-F0h]
  EffigyDailyRecordInfo *daily_record_info; // [rsp+38h] [rbp-E8h]
  std::shared_ptr<Config> v18; // [rsp+40h] [rbp-E0h] BYREF
  common::milog::MiLogStream v19; // [rsp+50h] [rbp-D0h] BYREF
  char v20[176]; // [rsp+70h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 48 40 15 context_opt:796";
  *(_QWORD *)(v3 + 16) = EffigyActivity::onSettleLoopDungeon;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  if ( DungeonScene::getDungeonResult(dungeon_scene) == DUNGEON_RESULT_CANCEL )
  {
    DungeonScene::getDungeonExtraData<EffigyActivity::EffigyDungeonContext>(
      (std::optional<EffigyActivity::EffigyDungeonContext> *)(v3 + 48),
      dungeon_scene);
    if ( !std::optional<EffigyActivity::EffigyDungeonContext>::has_value((const std::optional<EffigyActivity::EffigyDungeonContext> *const)(v3 + 48)) )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/effigy_activity.cpp",
        "onSettleLoopDungeon",
        799);
      common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v19, (const char (*)[18])"[EFFIGY] no data ");
      common::milog::MiLogStream::~MiLogStream(&v19);
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v18);
      conf_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v18)->design_config.txt_config_mgr.activity_effigy_challenge_config_mgr;
      std::shared_ptr<Config>::~shared_ptr(&v18);
      v6 = std::optional<EffigyActivity::EffigyDungeonContext>::operator->((std::optional<EffigyActivity::EffigyDungeonContext> *const)(v3 + 48));
      if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      effigy_challenge_config_ptr = data::ActivityEffigyChallengeExcelConfigMgrBase::findEffigyChallengeExcelConfig(
                                      conf_mgr,
                                      v6->select_challenge_id);
      if ( effigy_challenge_config_ptr )
      {
        daily_record_info = std::map<unsigned int,EffigyDailyRecordInfo>::operator[](
                              &this->daily_record_map_,
                              &effigy_challenge_config_ptr->day_index);
        v9 = std::optional<EffigyActivity::EffigyDungeonContext>::operator*((std::optional<EffigyActivity::EffigyDungeonContext> *const)(v3 + 48));
        challenge_score = EffigyActivity::getChallengeScore(this, v9, 1);
        v10 = std::optional<EffigyActivity::EffigyDungeonContext>::operator->((std::optional<EffigyActivity::EffigyDungeonContext> *const)(v3 + 48));
        if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        proto::EffigyChallengeDungeonResultInfo::set_challenge_id(result_info, v10->select_challenge_id);
        proto::EffigyChallengeDungeonResultInfo::set_is_success(result_info, 0);
        proto::EffigyChallengeDungeonResultInfo::set_challenge_score(result_info, challenge_score);
        if ( *(_BYTE *)(((unsigned __int64)&daily_record_info->challenge_max_score >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)daily_record_info + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&daily_record_info->challenge_max_score >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto::EffigyChallengeDungeonResultInfo::set_challenge_max_score(
          result_info,
          daily_record_info->challenge_max_score);
        common::milog::MiLogStream::create(
          &v19,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/effigy_activity.cpp",
          "onSettleLoopDungeon",
          818);
        v11 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                &v19,
                (const char (*)[45])"[EFFIGY] onSettleLoopDungeon, challenge_id: ");
        v12 = std::optional<EffigyActivity::EffigyDungeonContext>::operator->((std::optional<EffigyActivity::EffigyDungeonContext> *const)(v3 + 48));
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &v12->select_challenge_id);
        common::milog::MiLogStream::~MiLogStream(&v19);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v19,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/effigy_activity.cpp",
          "onSettleLoopDungeon",
          806);
        v7 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
               &v19,
               (const char (*)[63])"[EFFIGY] findEffigyChallengeExcelConfig failed, challenge_id: ");
        v8 = std::optional<EffigyActivity::EffigyDungeonContext>::operator->((std::optional<EffigyActivity::EffigyDungeonContext> *const)(v3 + 48));
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &v8->select_challenge_id);
        common::milog::MiLogStream::~MiLogStream(&v19);
      }
    }
    std::optional<EffigyActivity::EffigyDungeonContext>::~optional((std::optional<EffigyActivity::EffigyDungeonContext> *const)(v3 + 48));
  }
  if ( v20 == (char *)v3 )
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
};

// Line 823: range 00000000165D811C-00000000165D92FE
void __cdecl EffigyActivity::onSettleLoopDungeonChallenge(
        EffigyActivity *const this,
        DungeonScene *dungeon_scene,
        Challenge *challenge,
        proto::EffigyChallengeDungeonResultInfo *result_info)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  EffigyActivity::EffigyDungeonContext *v7; // rax
  EffigyActivity::EffigyDungeonContext *v8; // rdx
  EffigyActivity::EffigyDungeonContext *v9; // rax
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rcx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  EffigyActivity::EffigyDungeonContext *v20; // rcx
  Group *v21; // r14
  EffigyActivity::EffigyDungeonContext *v22; // rcx
  PlayerBasicComp *BasicComp; // rax
  PlayerEventComp *EventComp; // r14
  std::__shared_ptr_access<proto_log::PlayerLogBodyEffigyScoreChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // r14
  const std::string *v26; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyEffigyScoreChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyEffigyScoreChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyEffigyScoreChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // r14
  uint32_t CurScore; // eax
  Player *v31; // r14
  PlayerBasicComp *v32; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyEffigySettleChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // r14
  const std::string *v34; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyEffigySettleChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v35; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyEffigySettleChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // r14
  uint32_t DungeonId; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyEffigySettleChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyEffigySettleChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v39; // r14
  bool isMpDungeonMode; // al
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v41; // rdx
  std::__shared_ptr_access<proto_log::PlayerLogBodyEffigySettleChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v42; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyEffigySettleChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v43; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyEffigySettleChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v44; // rax
  PlayerAvatarComp *AvatarComp; // r14
  int v46; // ecx
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyEffigySettleChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v52; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyEffigySettleChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v53; // rcx
  Player *player; // r14
  std::string result_infoa; // [rsp+0h] [rbp-1E0h]
  Challenge *challengea; // [rsp+8h] [rbp-1D8h]
  DungeonScene *const dungeon_scenea; // [rsp+10h] [rbp-1D0h]
  EffigyActivity *thisa; // [rsp+18h] [rbp-1C8h]
  uint32_t cur_score; // [rsp+20h] [rbp-1C0h]
  uint32_t cost_time; // [rsp+24h] [rbp-1BCh]
  uint32_t select_difficulty_id; // [rsp+28h] [rbp-1B8h]
  google::protobuf::uint32 challenge_score; // [rsp+2Ch] [rbp-1B4h]
  uint32_t add_score; // [rsp+30h] [rbp-1B0h]
  unsigned int condition_id; // [rsp+34h] [rbp-1ACh]
  std::vector<unsigned int>::iterator __for_begin; // [rsp+38h] [rbp-1A8h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+40h] [rbp-1A0h] BYREF
  std::vector<unsigned int> *select_condition_id_vec; // [rsp+48h] [rbp-198h]
  const ActivityEffigyChallengeExcelConfigMgr *conf_mgr; // [rsp+50h] [rbp-190h]
  const data::EffigyChallengeExcelConfig *effigy_challenge_config_ptr; // [rsp+58h] [rbp-188h]
  EffigyDailyRecordInfo *daily_record_info; // [rsp+60h] [rbp-180h]
  std::vector<unsigned int> *__for_range; // [rsp+68h] [rbp-178h]
  std::shared_ptr<google::protobuf::Message> v72; // [rsp+70h] [rbp-170h] BYREF
  std::shared_ptr<EffigyChallengeScoreEvent> __r; // [rsp+80h] [rbp-160h] BYREF
  common::milog::MiLogStream v74; // [rsp+90h] [rbp-150h] BYREF
  char v75[304]; // [rsp+B0h] [rbp-130h] BYREF

  *(&result_infoa._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  result_infoa._anon_0._M_allocated_capacity = (std::string::size_type)dungeon_scene;
  result_infoa._M_string_length = (std::string::size_type)challenge;
  result_infoa._M_dataplus._M_p = (std::string::pointer)result_info;
  v4 = (unsigned __int64)v75;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(256LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "7 48 1 10 holder:888 64 4 23 select_challenge_id:830 80 4 26 finish_challenge_index:832 96 4 7 n"
                        "ow:908 112 16 13 event_ptr:869 144 16 11 log_ptr:890 176 40 15 context_opt:824";
  *(_QWORD *)(v4 + 16) = EffigyActivity::onSettleLoopDungeonChallenge;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -234556924;
  v6[536862723] = 61956;
  v6[536862724] = 62194;
  v6[536862725] = 62194;
  v6[536862726] = -218103808;
  v6[536862727] = -202116109;
  DungeonScene::getDungeonExtraData<EffigyActivity::EffigyDungeonContext>(
    (std::optional<EffigyActivity::EffigyDungeonContext> *)(v4 + 176),
    dungeon_scene);
  if ( !std::optional<EffigyActivity::EffigyDungeonContext>::has_value((const std::optional<EffigyActivity::EffigyDungeonContext> *const)(v4 + 176)) )
  {
    common::milog::MiLogStream::create(
      &v74,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/effigy_activity.cpp",
      "onSettleLoopDungeonChallenge",
      827);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v74, (const char (*)[18])"[EFFIGY] no data ");
    common::milog::MiLogStream::~MiLogStream(&v74);
  }
  else
  {
    v7 = std::optional<EffigyActivity::EffigyDungeonContext>::operator->((std::optional<EffigyActivity::EffigyDungeonContext> *const)(v4 + 176));
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v4 + 64) = v7->select_challenge_id;
    v8 = std::optional<EffigyActivity::EffigyDungeonContext>::operator->((std::optional<EffigyActivity::EffigyDungeonContext> *const)(v4 + 176));
    if ( *(_BYTE *)(((unsigned __int64)&v8->select_difficulty_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v8 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->select_difficulty_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    select_difficulty_id = v8->select_difficulty_id;
    v9 = std::optional<EffigyActivity::EffigyDungeonContext>::operator->((std::optional<EffigyActivity::EffigyDungeonContext> *const)(v4 + 176));
    *(_DWORD *)(v4 + 80) = EffigyActivity::EffigyDungeonContext::getFinishChallengeIndex(v9);
    select_condition_id_vec = &std::optional<EffigyActivity::EffigyDungeonContext>::operator->((std::optional<EffigyActivity::EffigyDungeonContext> *const)(v4 + 176))->select_condition_id_vec;
    common::milog::MiLogStream::create(
      &v74,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/effigy_activity.cpp",
      "onSettleLoopDungeonChallenge",
      834);
    v10 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
            &v74,
            (const char (*)[52])"[EFFIGY] onSettleLoopDungeonChallenge, dungeon_id: ");
    *(_DWORD *)(v4 + 96) = DungeonScene::getDungeonId(dungeon_scene);
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v4 + 96));
    v12 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v11, (const char (*)[15])" ,is_success: ");
    if ( *(_BYTE *)(((result_infoa._M_string_length + 41) >> 3) + 0x7FFF8000) != 0
      && ((LOBYTE(result_infoa._M_string_length) + 41) & 7) >= *(_BYTE *)(((result_infoa._M_string_length + 41) >> 3)
                                                                        + 0x7FFF8000) )
    {
      __asan_report_load1(result_infoa._M_string_length + 41);
    }
    v13 = common::milog::MiLogStream::operator<<(v12, *(_BYTE *)(result_infoa._M_string_length + 41));
    v14 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v13, (const char (*)[19])" challenge_index: ");
    v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v14,
            (const unsigned int *)(result_infoa._M_string_length + 28));
    v16 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
            v15,
            (const char (*)[26])" select challenge index: ");
    v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v4 + 80));
    v18 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
            v17,
            (const char (*)[23])" select challenge id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v4 + 64));
    common::milog::MiLogStream::~MiLogStream(&v74);
    if ( *(_BYTE *)(((result_infoa._M_string_length + 28) >> 3) + 0x7FFF8000) != 0
      && (char)(((LOBYTE(result_infoa._M_string_length) + 28) & 7) + 3) >= *(_BYTE *)(((result_infoa._M_string_length
                                                                                      + 28) >> 3)
                                                                                    + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( *(_DWORD *)(result_infoa._M_string_length + 28) == *(_DWORD *)(v4 + 80) )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v72);
      conf_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v72)->design_config.txt_config_mgr.activity_effigy_challenge_config_mgr;
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v72);
      effigy_challenge_config_ptr = data::ActivityEffigyChallengeExcelConfigMgrBase::findEffigyChallengeExcelConfig(
                                      conf_mgr,
                                      *(_DWORD *)(v4 + 64));
      if ( effigy_challenge_config_ptr )
      {
        v20 = std::optional<EffigyActivity::EffigyDungeonContext>::operator*((std::optional<EffigyActivity::EffigyDungeonContext> *const)(v4 + 176));
        challenge_score = EffigyActivity::getChallengeScore(this, v20, 1);
        cur_score = challenge_score;
        daily_record_info = std::map<unsigned int,EffigyDailyRecordInfo>::operator[](
                              &this->daily_record_map_,
                              &effigy_challenge_config_ptr->day_index);
        if ( *(_BYTE *)(((result_infoa._M_string_length + 41) >> 3) + 0x7FFF8000) != 0
          && ((LOBYTE(result_infoa._M_string_length) + 41) & 7) >= *(_BYTE *)(((result_infoa._M_string_length + 41) >> 3)
                                                                            + 0x7FFF8000) )
        {
          __asan_report_load1(result_infoa._M_string_length + 41);
        }
        if ( *(_BYTE *)(result_infoa._M_string_length + 41) )
        {
          *(_DWORD *)(v4 + 96) = 0;
          if ( *(_BYTE *)(((result_infoa._M_string_length + 16) >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v21 = *(Group **)(result_infoa._M_string_length + 16);
          std::allocator<char>::allocator(v4 + 48);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)&v74,
            "IS_IN_LIMIT_TIME",
            (const std::allocator<char> *)(v4 + 48));
          Group::getVariableValue(v21, (const std::string *)&v74, (int32_t *)(v4 + 96));
          std::string::~string(&v74);
          std::allocator<char>::~allocator(v4 + 48);
          if ( !*(_DWORD *)(v4 + 96) )
          {
            v22 = std::optional<EffigyActivity::EffigyDungeonContext>::operator*((std::optional<EffigyActivity::EffigyDungeonContext> *const)(v4 + 176));
            cur_score = EffigyActivity::getChallengeScore(this, v22, 0);
          }
          if ( *(_BYTE *)(((unsigned __int64)&daily_record_info->challenge_max_score >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)daily_record_info + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&daily_record_info->challenge_max_score >> 3)
                                                                            + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          if ( cur_score > daily_record_info->challenge_max_score )
          {
            add_score = cur_score - daily_record_info->challenge_max_score;
            daily_record_info->challenge_max_score = cur_score;
            if ( add_score )
            {
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              BasicComp = Player::getBasicComp(this->player_);
              PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v74, BasicComp);
              StatLogUtils::ContextHolder::ContextHolder(
                (StatLogUtils::ContextHolder *const)(v4 + 48),
                0xBE1u,
                result_infoa);
              std::string::~string(&v74);
              common::tools::perf::make_shared<EffigyChallengeScoreEvent>();
              std::shared_ptr<BaseEvent>::shared_ptr<EffigyChallengeScoreEvent,void>(
                (std::shared_ptr<BaseEvent> *const)(v4 + 112),
                &__r);
              std::shared_ptr<EffigyChallengeScoreEvent>::~shared_ptr(&__r);
              if ( *(_BYTE *)(((*(&result_infoa._anon_0._M_allocated_capacity + 1) + 24) >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              EventComp = Player::getEventComp(*(Player *const *)(*(&result_infoa._anon_0._M_allocated_capacity + 1) + 24));
              std::shared_ptr<BaseEvent>::shared_ptr(
                (std::shared_ptr<BaseEvent> *const)&__r,
                (const std::shared_ptr<BaseEvent> *)(v4 + 112));
              PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&__r);
              std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&__r);
              common::tools::perf::make_shared<proto_log::PlayerLogBodyEffigyScoreChange>();
              v25 = std::__shared_ptr_access<proto_log::PlayerLogBodyEffigyScoreChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyEffigyScoreChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
              v26 = DungeonScene::getTransaction[abi:cxx11]((DungeonScene *const)result_infoa._anon_0._M_allocated_capacity);
              proto_log::PlayerLogBodyEffigyScoreChange::set_transaction(v25, v26);
              v27 = std::__shared_ptr_access<proto_log::PlayerLogBodyEffigyScoreChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyEffigyScoreChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
              proto_log::PlayerLogBodyEffigyScoreChange::set_add_score(v27, add_score);
              v28 = std::__shared_ptr_access<proto_log::PlayerLogBodyEffigyScoreChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyEffigyScoreChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
              proto_log::PlayerLogBodyEffigyScoreChange::set_challenge_score(v28, cur_score);
              v29 = std::__shared_ptr_access<proto_log::PlayerLogBodyEffigyScoreChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyEffigyScoreChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
              CurScore = EffigyActivity::getCurScore(*((const EffigyActivity *const *)&result_infoa._anon_0._M_allocated_capacity
                                                     + 1));
              proto_log::PlayerLogBodyEffigyScoreChange::set_cur_score(v29, CurScore);
              if ( *(_BYTE *)(((*(&result_infoa._anon_0._M_allocated_capacity + 1) + 24) >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              v31 = *(Player **)(*(&result_infoa._anon_0._M_allocated_capacity + 1) + 24);
              std::shared_ptr<google::protobuf::Message>::shared_ptr(
                (std::shared_ptr<google::protobuf::Message> *const)&__r,
                0LL);
              std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyEffigyScoreChange,void>(
                &v72,
                (const std::shared_ptr<proto_log::PlayerLogBodyEffigyScoreChange> *)(v4 + 144));
              Player::printStatLog(v31, &v72, (MessagePtr *)&__r, 0xEu);
              std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v72);
              std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&__r);
              std::shared_ptr<proto_log::PlayerLogBodyEffigyScoreChange>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyEffigyScoreChange> *const)(v4 + 144));
              std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v4 + 112));
              StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 48));
            }
          }
        }
        proto::EffigyChallengeDungeonResultInfo::set_challenge_id(
          (proto::EffigyChallengeDungeonResultInfo *const)result_infoa._M_dataplus._M_p,
          *(_DWORD *)(v4 + 64));
        if ( *(_BYTE *)(((result_infoa._M_string_length + 41) >> 3) + 0x7FFF8000) != 0
          && ((LOBYTE(result_infoa._M_string_length) + 41) & 7) >= *(_BYTE *)(((result_infoa._M_string_length + 41) >> 3)
                                                                            + 0x7FFF8000) )
        {
          __asan_report_load1(result_infoa._M_string_length + 41);
        }
        proto::EffigyChallengeDungeonResultInfo::set_is_success(
          (proto::EffigyChallengeDungeonResultInfo *const)result_infoa._M_dataplus._M_p,
          *(_BYTE *)(result_infoa._M_string_length + 41));
        proto::EffigyChallengeDungeonResultInfo::set_challenge_score(
          (proto::EffigyChallengeDungeonResultInfo *const)result_infoa._M_dataplus._M_p,
          cur_score);
        if ( *(_BYTE *)(((unsigned __int64)&daily_record_info->challenge_max_score >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)daily_record_info + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&daily_record_info->challenge_max_score >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto::EffigyChallengeDungeonResultInfo::set_challenge_max_score(
          (proto::EffigyChallengeDungeonResultInfo *const)result_infoa._M_dataplus._M_p,
          daily_record_info->challenge_max_score);
        BaseActivity::notifyClientData(*((BaseActivity *const *)&result_infoa._anon_0._M_allocated_capacity + 1), 0);
        if ( *(_BYTE *)(((*(&result_infoa._anon_0._M_allocated_capacity + 1) + 24) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v32 = Player::getBasicComp(*(Player *const *)(*(&result_infoa._anon_0._M_allocated_capacity + 1) + 24));
        PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v74, v32);
        StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 48), 0xBE2u, result_infoa);
        std::string::~string(&v74);
        common::tools::perf::make_shared<proto_log::PlayerLogBodyEffigySettleChallenge>();
        v33 = std::__shared_ptr_access<proto_log::PlayerLogBodyEffigySettleChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyEffigySettleChallenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
        v34 = DungeonScene::getTransaction[abi:cxx11](dungeon_scenea);
        proto_log::PlayerLogBodyEffigySettleChallenge::set_dungeon_transaction(v33, v34);
        v35 = std::__shared_ptr_access<proto_log::PlayerLogBodyEffigySettleChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyEffigySettleChallenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
        proto_log::PlayerLogBodyEffigySettleChallenge::set_challenge_id(v35, *(_DWORD *)(v4 + 64));
        v36 = std::__shared_ptr_access<proto_log::PlayerLogBodyEffigySettleChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyEffigySettleChallenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
        DungeonId = DungeonScene::getDungeonId(dungeon_scenea);
        proto_log::PlayerLogBodyEffigySettleChallenge::set_dungeon_id(v36, DungeonId);
        v38 = std::__shared_ptr_access<proto_log::PlayerLogBodyEffigySettleChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyEffigySettleChallenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
        proto_log::PlayerLogBodyEffigySettleChallenge::set_difficulty_id(v38, select_difficulty_id);
        v39 = std::__shared_ptr_access<proto_log::PlayerLogBodyEffigySettleChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyEffigySettleChallenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
        isMpDungeonMode = DungeonScene::isMpDungeonMode(dungeon_scenea);
        proto_log::PlayerLogBodyEffigySettleChallenge::set_is_mp(v39, isMpDungeonMode);
        __for_range = select_condition_id_vec;
        __for_begin._M_current = std::vector<unsigned int>::begin(select_condition_id_vec)._M_current;
        __for_end._M_current = std::vector<unsigned int>::end(select_condition_id_vec)._M_current;
        while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
        {
          v41 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
          if ( *(_BYTE *)(((unsigned __int64)v41 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v41 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v41 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          condition_id = *v41;
          v42 = std::__shared_ptr_access<proto_log::PlayerLogBodyEffigySettleChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyEffigySettleChallenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
          proto_log::PlayerLogBodyEffigySettleChallenge::add_condition_id_list(v42, condition_id);
          __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
        }
        v43 = std::__shared_ptr_access<proto_log::PlayerLogBodyEffigySettleChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyEffigySettleChallenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
        proto_log::PlayerLogBodyEffigySettleChallenge::set_challenge_score(v43, challenge_score);
        v44 = std::__shared_ptr_access<proto_log::PlayerLogBodyEffigySettleChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyEffigySettleChallenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
        proto_log::PlayerLogBodyEffigySettleChallenge::set_cur_score(v44, cur_score);
        if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        AvatarComp = Player::getAvatarComp(thisa->player_);
        std::function<ForeachPolicy ()(Avatar &)>::function<EffigyActivity::onSettleLoopDungeonChallenge(DungeonScene &,Challenge &,proto::EffigyChallengeDungeonResultInfo &)::{lambda(Avatar &)#1},void,void>(
          (std::function<ForeachPolicy(Avatar&)> *const)&v74,
          (EffigyActivity::onSettleLoopDungeonChallenge::<lambda(Avatar&)>)(v4 + 144));
        PlayerAvatarComp::foreachAvatarInSceneTeam(AvatarComp, (std::function<ForeachPolicy(Avatar&)> *)&v74);
        std::function<ForeachPolicy ()(Avatar &)>::~function((std::function<ForeachPolicy(Avatar&)> *const)&v74);
        *(_DWORD *)(v4 + 96) = common::tools::TimeUtils::getNow();
        v46 = *(_DWORD *)(v4 + 96);
        if ( *(_BYTE *)(((unsigned __int64)&challengea->start_time >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&challengea->start_time >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        cost_time = v46 - challengea->start_time;
        if ( challengea->start_time >= *(_DWORD *)(v4 + 96) )
        {
          common::milog::MiLogStream::create(
            &v74,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/effigy_activity.cpp",
            "onSettleLoopDungeonChallenge",
            912);
          v47 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                  &v74,
                  (const char (*)[52])"[EFFIGY] challenge.start_time error, challenge_id: ");
          v48 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v47,
                  (const unsigned int *)(v4 + 64));
          v49 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v48,
                  (const char (*)[14])" start time: ");
          v50 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v49, &challengea->start_time);
          v51 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v50, (const char (*)[6])" now:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v51, (const unsigned int *)(v4 + 96));
          common::milog::MiLogStream::~MiLogStream(&v74);
          cost_time = 0;
        }
        v52 = std::__shared_ptr_access<proto_log::PlayerLogBodyEffigySettleChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyEffigySettleChallenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
        proto_log::PlayerLogBodyEffigySettleChallenge::set_cost_time(v52, cost_time);
        v53 = std::__shared_ptr_access<proto_log::PlayerLogBodyEffigySettleChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyEffigySettleChallenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
        if ( *(_BYTE *)(((unsigned __int64)&challengea->is_success >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)challengea + 41) & 7) >= *(_BYTE *)(((unsigned __int64)&challengea->is_success >> 3)
                                                                  + 0x7FFF8000) )
        {
          __asan_report_load1(&challengea->is_success);
        }
        proto_log::PlayerLogBodyEffigySettleChallenge::set_is_success(v53, challengea->is_success);
        if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        player = thisa->player_;
        std::shared_ptr<google::protobuf::Message>::shared_ptr(
          (std::shared_ptr<google::protobuf::Message> *const)&__r,
          0LL);
        std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyEffigySettleChallenge,void>(
          &v72,
          (const std::shared_ptr<proto_log::PlayerLogBodyEffigySettleChallenge> *)(v4 + 144));
        Player::printStatLog(player, &v72, (MessagePtr *)&__r, 0xEu);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v72);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&__r);
        std::shared_ptr<proto_log::PlayerLogBodyEffigySettleChallenge>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyEffigySettleChallenge> *const)(v4 + 144));
        StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 48));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v74,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/effigy_activity.cpp",
          "onSettleLoopDungeonChallenge",
          844);
        v19 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
                &v74,
                (const char (*)[63])"[EFFIGY] findEffigyChallengeExcelConfig failed, challenge_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v4 + 64));
        common::milog::MiLogStream::~MiLogStream(&v74);
      }
    }
  }
  std::optional<EffigyActivity::EffigyDungeonContext>::~optional((std::optional<EffigyActivity::EffigyDungeonContext> *const)(v4 + 176));
  if ( v75 == (char *)v4 )
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
};

// Line 902: range 00000000165D80B6-00000000165D811B
ForeachPolicy __cdecl EffigyActivity::onSettleLoopDungeonChallenge(DungeonScene &,Challenge &,proto::EffigyChallengeDungeonResultInfo &)::{lambda(Avatar &)#1}::operator()(
        const EffigyActivity::onSettleLoopDungeonChallenge::<lambda(Avatar&)> *const __closure,
        Avatar *avatar)
{
  std::__shared_ptr_access<proto_log::PlayerLogBodyEffigySettleChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  proto_log::AvatarLog *v3; // rdx

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = std::__shared_ptr_access<proto_log::PlayerLogBodyEffigySettleChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyEffigySettleChallenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)__closure->__log_ptr);
  v3 = proto_log::PlayerLogBodyEffigySettleChallenge::add_avatar_log_list(v2);
  Avatar::getAvatarLog(avatar, v3);
  return 0;
};

// Line 922: range 00000000165D9300-00000000165D9719
std::map<unsigned int,std::vector<unsigned int>> *__cdecl EffigyActivity::EffigyDungeonContext::getAffixConditionMap(
        std::map<unsigned int,std::vector<unsigned int>> *retstr,
        EffigyActivity::EffigyDungeonContext *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v5; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v8; // rdx
  std::vector<unsigned int> *v9; // rax
  std::vector<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-E8h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-E0h] BYREF
  std::vector<unsigned int>::const_iterator __for_begin_0; // [rsp+28h] [rbp-D8h] BYREF
  std::vector<unsigned int>::const_iterator __for_end_0; // [rsp+30h] [rbp-D0h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-C8h]
  const data::EffigyLimitingConditionExcelConfig *condition_config_ptr; // [rsp+40h] [rbp-C0h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+48h] [rbp-B8h]
  std::shared_ptr<Config> v18; // [rsp+50h] [rbp-B0h] BYREF
  common::milog::MiLogStream v19; // [rsp+60h] [rbp-A0h] BYREF
  char v20[128]; // [rsp+80h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 16 condition_id:924 64 4 11 pool_id:936";
  *(_QWORD *)(v2 + 16) = EffigyActivity::EffigyDungeonContext::getAffixConditionMap;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  std::map<unsigned int,std::vector<unsigned int>>::map(retstr);
  __for_range = &this->select_condition_id_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(&this->select_condition_id_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(&this->select_condition_id_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v5 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 48) = *v5;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v18);
    v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v18);
    condition_config_ptr = data::ActivityEffigyChallengeExcelConfigMgrBase::findEffigyLimitingConditionExcelConfig(
                             &v6->design_config.txt_config_mgr.activity_effigy_challenge_config_mgr,
                             *(_DWORD *)(v2 + 48));
    std::shared_ptr<Config>::~shared_ptr(&v18);
    if ( condition_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&condition_config_ptr->condition_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)condition_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&condition_config_ptr->condition_type >> 3)
                                                                            + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( condition_config_ptr->condition_type == EFFIGY_CONDITION_MONSTER_CONFIG )
      {
        __for_range_0 = &condition_config_ptr->condition_param2;
        __for_begin_0._M_current = std::vector<unsigned int>::begin(&condition_config_ptr->condition_param2)._M_current;
        __for_end_0._M_current = std::vector<unsigned int>::end(__for_range_0)._M_current;
        while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin_0, &__for_end_0) )
        {
          v8 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin_0);
          if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          *(_DWORD *)(v2 + 64) = *v8;
          v9 = std::map<unsigned int,std::vector<unsigned int>>::operator[](
                 retstr,
                 (const std::map<unsigned int,std::vector<unsigned int>>::key_type *)(v2 + 64));
          std::vector<unsigned int>::push_back(v9, &condition_config_ptr->condition_param1);
          __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin_0);
        }
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/effigy_activity.cpp",
        "getAffixConditionMap",
        929);
      v7 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
             &v19,
             (const char (*)[34])"config is nullptr. condition_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v19);
    }
    __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
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
  return retstr;
};

// Line 945: range 00000000165D971A-00000000165D98A7
int32_t __cdecl EffigyActivity::EffigyDungeonContext::getEffigyChallengeMonsterLevel(
        EffigyActivity::EffigyDungeonContext *const this)
{
  uint32_t select_difficulty_id; // edx
  ActivityEffigyChallengeExcelConfigMgr *conf_mgr; // [rsp+10h] [rbp-50h]
  const data::EffigyDifficultyExcelConfig *difficulty_config_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v5; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v6; // [rsp+30h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v5);
  conf_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5)->design_config.txt_config_mgr.activity_effigy_challenge_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v5);
  if ( *(_BYTE *)(((unsigned __int64)&this->select_difficulty_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->select_difficulty_id >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  select_difficulty_id = this->select_difficulty_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  difficulty_config_ptr = ActivityEffigyChallengeExcelConfigMgr::findEffigyDifficultyConfig(
                            conf_mgr,
                            this->select_challenge_id,
                            select_difficulty_id);
  if ( difficulty_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&difficulty_config_ptr->monster_level >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&difficulty_config_ptr->monster_level >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    return difficulty_config_ptr->monster_level;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/effigy_activity.cpp",
      "getEffigyChallengeMonsterLevel",
      950);
    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
      &v6,
      (const char (*)[34])"findEffigyDifficultyConfig failed");
    common::milog::MiLogStream::~MiLogStream(&v6);
    return -1;
  }
};

// Line 957: range 00000000165D98A8-00000000165D9A35
uint32_t __cdecl EffigyActivity::EffigyDungeonContext::getFinishChallengeIndex(
        EffigyActivity::EffigyDungeonContext *const this)
{
  uint32_t select_difficulty_id; // edx
  ActivityEffigyChallengeExcelConfigMgr *conf_mgr; // [rsp+10h] [rbp-50h]
  const data::EffigyDifficultyExcelConfig *difficulty_config_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v5; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v6; // [rsp+30h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v5);
  conf_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5)->design_config.txt_config_mgr.activity_effigy_challenge_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v5);
  if ( *(_BYTE *)(((unsigned __int64)&this->select_difficulty_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->select_difficulty_id >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  select_difficulty_id = this->select_difficulty_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  difficulty_config_ptr = ActivityEffigyChallengeExcelConfigMgr::findEffigyDifficultyConfig(
                            conf_mgr,
                            this->select_challenge_id,
                            select_difficulty_id);
  if ( difficulty_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&difficulty_config_ptr->finish_challenge_index >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&difficulty_config_ptr->finish_challenge_index >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    return difficulty_config_ptr->finish_challenge_index;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/effigy_activity.cpp",
      "getFinishChallengeIndex",
      962);
    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
      &v6,
      (const char (*)[34])"findEffigyDifficultyConfig failed");
    common::milog::MiLogStream::~MiLogStream(&v6);
    return -1;
  }
};

// Line 969: range 00000000165D9A36-00000000165D9B24
int32_t __cdecl EffigyActivity::clearEffigyRewardRecordByGm(EffigyActivity *const this)
{
  bool *p_is_first_pass_reward_taken; // rax
  std::map<unsigned int,EffigyDailyRecordInfo>::iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::map<unsigned int,EffigyDailyRecordInfo>::iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  std::map<unsigned int,EffigyDailyRecordInfo> *__for_range; // [rsp+20h] [rbp-20h]
  std::pair<unsigned int const,EffigyDailyRecordInfo> *__in; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,std::pair<unsigned int const,EffigyDailyRecordInfo> >::type *_; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,std::pair<unsigned int const,EffigyDailyRecordInfo> >::type *daily_record_info; // [rsp+38h] [rbp-8h]

  std::set<unsigned int>::clear(&this->taken_reward_index_set_);
  __for_range = &this->daily_record_map_;
  __for_begin._M_node = std::map<unsigned int,EffigyDailyRecordInfo>::begin(&this->daily_record_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,EffigyDailyRecordInfo>::end(&this->daily_record_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,EffigyDailyRecordInfo>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,EffigyDailyRecordInfo>(__in);
    daily_record_info = std::get<1ul,unsigned int const,EffigyDailyRecordInfo>(__in);
    p_is_first_pass_reward_taken = &daily_record_info->is_first_pass_reward_taken;
    if ( *(_BYTE *)(((unsigned __int64)p_is_first_pass_reward_taken >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_first_pass_reward_taken & 7) >= *(_BYTE *)(((unsigned __int64)p_is_first_pass_reward_taken >> 3)
                                                                         + 0x7FFF8000) )
    {
      __asan_report_store1(p_is_first_pass_reward_taken);
    }
    daily_record_info->is_first_pass_reward_taken = 0;
    std::_Rb_tree_iterator<std::pair<unsigned int const,EffigyDailyRecordInfo>>::operator++(&__for_begin);
  }
  return 0;
};
