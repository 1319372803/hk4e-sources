// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/hide_and_seek_activity.cpp

// Line 38: range 0000000014524D14-00000000145250F7
int32_t __cdecl HideAndSeekActivity::fromScheduleBin(
        HideAndSeekActivity *const this,
        const proto::ActivityScheduleBin *bin)
{
  const unsigned int *v2; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>,bool> v3; // rax
  common::milog::MiLogStream *v4; // rdx
  const unsigned int *v5; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>,bool> v6; // rax
  common::milog::MiLogStream *v7; // rdx
  bool is_play_open; // dl
  uint32_t v9; // edx
  uint32_t v10; // edx
  const google::protobuf::RepeatedField<unsigned int> *v11; // rax
  const google::protobuf::RepeatedField<unsigned int> *v12; // rax
  const proto::HideAndSeekScheduleBin *hide_and_seek_bin; // [rsp+18h] [rbp-98h]
  const google::protobuf::Map<unsigned int,unsigned int> *__for_range; // [rsp+20h] [rbp-90h]
  const google::protobuf::Map<unsigned int,unsigned int> *__for_range_0; // [rsp+28h] [rbp-88h]
  google::protobuf::Map<unsigned int,unsigned int>::const_reference p_slot_id_0; // [rsp+30h] [rbp-80h]
  google::protobuf::Map<unsigned int,unsigned int>::const_reference p_slot_id; // [rsp+38h] [rbp-78h]
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+40h] [rbp-70h] BYREF
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+60h] [rbp-50h] BYREF
  common::milog::MiLogStream v21; // [rsp+80h] [rbp-30h] BYREF

  hide_and_seek_bin = proto::ActivityScheduleBin::hide_and_seek_bin(bin);
  __for_range = proto::HideAndSeekScheduleBin::hider_slot_skill_map(hide_and_seek_bin);
  google::protobuf::Map<unsigned int,unsigned int>::begin(&__for_begin, __for_range);
  google::protobuf::Map<unsigned int,unsigned int>::end(&__for_end, __for_range);
  while ( google::protobuf::operator!=(&__for_begin, &__for_end) )
  {
    p_slot_id = google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator*(&__for_begin);
    v3 = std::unordered_map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int const&>(
           &this->hider_slot_skill_map_,
           (const unsigned int *)p_slot_id,
           &p_slot_id->second,
           (const unsigned int *)&this->hider_slot_skill_map_,
           v2);
    if ( !v3.second )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/hide_and_seek_activity.cpp",
        "fromScheduleBin",
        44);
      v4 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
             &v21,
             (const char (*)[31])"duplicate skill_slot, slot_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, (const unsigned int *)p_slot_id);
      common::milog::MiLogStream::~MiLogStream(&v21);
    }
    google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator++(&__for_begin);
  }
  __for_range_0 = proto::HideAndSeekScheduleBin::hunter_slot_skill_map(hide_and_seek_bin);
  google::protobuf::Map<unsigned int,unsigned int>::begin(&__for_begin, __for_range_0);
  google::protobuf::Map<unsigned int,unsigned int>::end(&__for_end, __for_range_0);
  while ( google::protobuf::operator!=(&__for_begin, &__for_end) )
  {
    p_slot_id_0 = google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator*(&__for_begin);
    v6 = std::unordered_map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int const&>(
           &this->hunter_slot_skill_map_,
           (const unsigned int *)p_slot_id_0,
           &p_slot_id_0->second,
           (const unsigned int *)&this->hunter_slot_skill_map_,
           v5);
    if ( !v6.second )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/hide_and_seek_activity.cpp",
        "fromScheduleBin",
        51);
      v7 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
             &v21,
             (const char (*)[31])"duplicate skill_slot, slot_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)p_slot_id_0);
      common::milog::MiLogStream::~MiLogStream(&v21);
    }
    google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator++(&__for_begin);
  }
  is_play_open = proto::HideAndSeekScheduleBin::is_play_open(hide_and_seek_bin);
  if ( *(char *)(((unsigned __int64)&this->is_play_open_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_play_open_);
  this->is_play_open_ = is_play_open;
  v9 = proto::HideAndSeekScheduleBin::hider_count(hide_and_seek_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->hider_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->hider_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->hider_count_);
  }
  this->hider_count_ = v9;
  v10 = proto::HideAndSeekScheduleBin::disappear_time(hide_and_seek_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->disappear_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->disappear_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->disappear_time_);
  }
  this->disappear_time_ = v10;
  v11 = proto::HideAndSeekScheduleBin::open_map_list(hide_and_seek_bin);
  common::tools::MiscUtils::setFromRepeated<std::set<unsigned int>,unsigned int>(&this->unlock_map_set_, v11);
  v12 = proto::HideAndSeekScheduleBin::unselected_map_list(hide_and_seek_bin);
  common::tools::MiscUtils::setFromRepeated<std::set<unsigned int>,unsigned int>(&this->unselected_map_set_, v12);
  return 0;
};

// Line 63: range 00000000145250F8-0000000014525499
int32_t __cdecl HideAndSeekActivity::toScheduleBin(
        const HideAndSeekActivity *const this,
        proto::ActivityScheduleBin *bin)
{
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type v2; // ebx
  google::protobuf::Map<unsigned int,unsigned int> *v3; // rax
  unsigned int *v4; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v5; // rdx
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type v6; // ebx
  google::protobuf::Map<unsigned int,unsigned int> *v7; // rax
  unsigned int *v8; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v9; // rdx
  google::protobuf::RepeatedField<unsigned int> *v10; // rax
  google::protobuf::RepeatedField<unsigned int> *v11; // rax
  std::unordered_map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-68h] BYREF
  std::unordered_map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-60h] BYREF
  proto::HideAndSeekScheduleBin *hide_and_seek_bin; // [rsp+28h] [rbp-58h]
  const std::unordered_map<unsigned int,unsigned int> *__for_range; // [rsp+30h] [rbp-50h]
  const std::unordered_map<unsigned int,unsigned int> *__for_range_0; // [rsp+38h] [rbp-48h]
  const std::pair<unsigned int const,unsigned int> *v18; // [rsp+40h] [rbp-40h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *slot_id_0; // [rsp+48h] [rbp-38h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *config_id_0; // [rsp+50h] [rbp-30h]
  const std::pair<unsigned int const,unsigned int> *v21; // [rsp+58h] [rbp-28h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *slot_id; // [rsp+60h] [rbp-20h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *config_id; // [rsp+68h] [rbp-18h]

  hide_and_seek_bin = proto::ActivityScheduleBin::mutable_hide_and_seek_bin(bin);
  __for_range = &this->hider_slot_skill_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,unsigned int>::begin(&this->hider_slot_skill_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,unsigned int>::end(&this->hider_slot_skill_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(&__for_begin, &__for_end) )
  {
    v21 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*(&__for_begin);
    slot_id = std::get<0ul,unsigned int const,unsigned int>(v21);
    config_id = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v21);
    if ( *(_BYTE *)(((unsigned __int64)config_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)config_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)config_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v2 = *config_id;
    v3 = proto::HideAndSeekScheduleBin::mutable_hider_slot_skill_map(hide_and_seek_bin);
    v4 = google::protobuf::Map<unsigned int,unsigned int>::operator[](v3, slot_id);
    v5 = v4;
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v4);
    }
    *v5 = v2;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++(&__for_begin);
  }
  __for_range_0 = &this->hunter_slot_skill_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,unsigned int>::begin(&this->hunter_slot_skill_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,unsigned int>::end(__for_range_0)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(&__for_begin, &__for_end) )
  {
    v18 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*(&__for_begin);
    slot_id_0 = std::get<0ul,unsigned int const,unsigned int>(v18);
    config_id_0 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v18);
    if ( *(_BYTE *)(((unsigned __int64)config_id_0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)config_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)config_id_0 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v6 = *config_id_0;
    v7 = proto::HideAndSeekScheduleBin::mutable_hunter_slot_skill_map(hide_and_seek_bin);
    v8 = google::protobuf::Map<unsigned int,unsigned int>::operator[](v7, slot_id_0);
    v9 = v8;
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v8);
    }
    *v9 = v6;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++(&__for_begin);
  }
  if ( *(char *)(((unsigned __int64)&this->is_play_open_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_play_open_);
  proto::HideAndSeekScheduleBin::set_is_play_open(hide_and_seek_bin, this->is_play_open_);
  if ( *(_BYTE *)(((unsigned __int64)&this->hider_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->hider_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::HideAndSeekScheduleBin::set_hider_count(hide_and_seek_bin, this->hider_count_);
  if ( *(_BYTE *)(((unsigned __int64)&this->disappear_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->disappear_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::HideAndSeekScheduleBin::set_disappear_time(hide_and_seek_bin, this->disappear_time_);
  v10 = proto::HideAndSeekScheduleBin::mutable_open_map_list(hide_and_seek_bin);
  common::tools::MiscUtils::setToRepeated<std::set<unsigned int>,unsigned int>(&this->unlock_map_set_, v10);
  v11 = proto::HideAndSeekScheduleBin::mutable_unselected_map_list(hide_and_seek_bin);
  common::tools::MiscUtils::setToRepeated<std::set<unsigned int>,unsigned int>(&this->unselected_map_set_, v11);
  return 0;
};

// Line 82: range 000000001452549A-00000000145257FF
int32_t __cdecl HideAndSeekActivity::toClient(HideAndSeekActivity *const this, proto::ActivityInfo *activity_info)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // rbx
  common::milog::MiLogStream *v5; // r13
  int32_t v6; // r14d
  google::protobuf::RepeatedField<unsigned int> *v7; // rax
  google::protobuf::RepeatedField<unsigned int> *v8; // rax
  google::protobuf::RepeatedField<unsigned int> *v9; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+14h] [rbp-11Ch] BYREF
  proto::HideAndSeekActivityDetailInfo *hide_and_seek_info; // [rsp+18h] [rbp-118h]
  std::vector<unsigned int> vec; // [rsp+20h] [rbp-110h] BYREF
  common::milog::MiLogStream v14; // [rsp+40h] [rbp-F0h] BYREF
  char v15[208]; // [rsp+60h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 24 19 hunter_skill_vec:90 96 24 18 hider_skill_vec:91";
  *(_QWORD *)(v2 + 16) = HideAndSeekActivity::toClient;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234881024;
  v4[536862722] = -218959118;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  if ( BaseActivity::toClient(this, activity_info) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/hide_and_seek_activity.cpp",
      "toClient",
      85);
    v5 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v14,
           (const char (*)[36])"BaseActivity::toClient fails, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v14);
    v6 = -1;
  }
  else
  {
    hide_and_seek_info = proto::ActivityInfo::mutable_hide_and_seek_info(activity_info);
    HideAndSeekActivity::getPersonalHunterSkillVec((std::vector<unsigned int> *)(v2 + 32), this);
    HideAndSeekActivity::getPersonalHiderSkillVec((std::vector<unsigned int> *)(v2 + 96), this);
    v7 = proto::HideAndSeekActivityDetailInfo::mutable_chosen_hunter_skill_list(hide_and_seek_info);
    common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(
      (const std::vector<unsigned int> *)(v2 + 32),
      v7);
    v8 = proto::HideAndSeekActivityDetailInfo::mutable_chosen_hider_skill_list(hide_and_seek_info);
    common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(
      (const std::vector<unsigned int> *)(v2 + 96),
      v8);
    v9 = proto::HideAndSeekActivityDetailInfo::mutable_chosen_map_list(hide_and_seek_info);
    HideAndSeekActivity::getChosenHideAndSeekMap(&vec, this);
    common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&vec, v9);
    std::vector<unsigned int>::~vector(&vec);
    HideAndSeekActivity::fillInMapInfo(this, hide_and_seek_info);
    v6 = 0;
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 96));
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 32));
  }
  result = v6;
  if ( v15 == (char *)v2 )
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

// Line 102: range 0000000014525800-0000000014525A76
void __cdecl HideAndSeekActivity::onClear(HideAndSeekActivity *const this)
{
  PlayerSocialComp *SocialComp; // rax
  PlayerSocialComp *v2; // rax

  std::unordered_map<unsigned int,unsigned int>::clear(&this->hider_slot_skill_map_);
  std::unordered_map<unsigned int,unsigned int>::clear(&this->hunter_slot_skill_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->play_index_);
  }
  this->play_index_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_map_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_map_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cur_map_id_);
  }
  this->cur_map_id_ = 0;
  if ( *(char *)(((unsigned __int64)&this->is_play_open_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_play_open_);
  this->is_play_open_ = 0;
  if ( *(char *)(((unsigned __int64)&this->is_in_play_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_in_play_);
  this->is_in_play_ = 0;
  std::set<unsigned int>::clear(&this->unlock_map_set_);
  if ( *(_BYTE *)(((unsigned __int64)&this->hider_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->hider_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->hider_count_);
  }
  this->hider_count_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SocialComp = Player::getSocialComp(this->player_);
  PlayerSocialComp::unshieldChatChannel(SocialComp, 3u);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = Player::getSocialComp(this->player_);
  PlayerSocialComp::unshieldChatChannel(v2, 5u);
  std::set<unsigned int>::clear(&this->unselected_map_set_);
  if ( *(_BYTE *)(((unsigned __int64)&this->disappear_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->disappear_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->disappear_time_);
  }
  this->disappear_time_ = 0;
};

// Line 119: range 0000000014525A78-0000000014525AD5
int32_t __cdecl HideAndSeekActivity::init(HideAndSeekActivity *const this)
{
  if ( BaseActivity::isOpening(this, 0) && !BaseActivity::isSettled(this) )
    HideAndSeekActivity::registerEvent(this);
  return 0;
};

// Line 129: range 0000000014525AD6-0000000014525AF0
void __cdecl HideAndSeekActivity::onStart(HideAndSeekActivity *const this)
{
  HideAndSeekActivity::registerEvent(this);
};

// Line 134: range 0000000014525AF2-0000000014525B0C
void __cdecl HideAndSeekActivity::onSettle(HideAndSeekActivity *const this)
{
  HideAndSeekActivity::unregisterEvent(this);
};

// Line 139: range 0000000014525B0E-0000000014525C12
void __cdecl HideAndSeekActivity::unregisterEvent(HideAndSeekActivity *const this)
{
  PlayerEventComp *EventComp; // rax
  std::map<std::type_index,std::weak_ptr<Observer>>::iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::map<std::type_index,std::weak_ptr<Observer>>::iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  std::map<std::type_index,std::weak_ptr<Observer>> *__for_range; // [rsp+20h] [rbp-20h]
  std::pair<const std::type_index,std::weak_ptr<Observer> > *__in; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,std::pair<const std::type_index,std::weak_ptr<Observer> > >::type *_; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,std::pair<const std::type_index,std::weak_ptr<Observer> > >::type *obs_wtr; // [rsp+38h] [rbp-8h]

  __for_range = &this->event_observer_map_;
  __for_begin._M_node = std::map<std::type_index,std::weak_ptr<Observer>>::begin(&this->event_observer_map_)._M_node;
  __for_end._M_node = std::map<std::type_index,std::weak_ptr<Observer>>::end(&this->event_observer_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<std::type_index const,std::weak_ptr<Observer>>>::operator*(&__for_begin);
    _ = std::get<0ul,std::type_index const,std::weak_ptr<Observer>>(__in);
    obs_wtr = std::get<1ul,std::type_index const,std::weak_ptr<Observer>>(__in);
    if ( !std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(obs_wtr) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      EventComp = Player::getEventComp(this->player_);
      PlayerEventComp::unregisterObserver(EventComp, obs_wtr);
    }
    std::_Rb_tree_iterator<std::pair<std::type_index const,std::weak_ptr<Observer>>>::operator++(&__for_begin);
  }
  std::map<std::type_index,std::weak_ptr<Observer>>::clear(&this->event_observer_map_);
};

// Line 151: range 0000000014525C14-0000000014525F34
void __cdecl HideAndSeekActivity::registerEvent(HideAndSeekActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  PlayerEventComp *cb_ptr; // [rsp+10h] [rbp-C0h]
  PlayerEventComp *EventComp; // [rsp+20h] [rbp-B0h]
  std::enable_shared_from_this<BaseActivity> v6; // [rsp+30h] [rbp-A0h] BYREF
  char v7[144]; // [rsp+40h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 12 this_ptr:152 64 16 12 this_wtr:153";
  *(_QWORD *)(v1 + 16) = HideAndSeekActivity::registerEvent;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  std::enable_shared_from_this<BaseActivity>::shared_from_this(&v6);
  std::dynamic_pointer_cast<HideAndSeekActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)(v1 + 32));
  std::shared_ptr<BaseActivity>::~shared_ptr((std::shared_ptr<BaseActivity> *const)&v6);
  std::weak_ptr<HideAndSeekActivity>::weak_ptr<HideAndSeekActivity,void>(
    (std::weak_ptr<HideAndSeekActivity> *const)(v1 + 64),
    (const std::shared_ptr<HideAndSeekActivity> *)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  EventComp = Player::getEventComp(this->player_);
  std::weak_ptr<HideAndSeekActivity>::weak_ptr(
    (std::weak_ptr<HideAndSeekActivity> *const)&v6,
    (const std::weak_ptr<HideAndSeekActivity> *)(v1 + 64));
  PlayerEventComp::tryRegisterObserver<HideAndSeekActivity,FinishQuestEvent>(
    EventComp,
    (std::weak_ptr<HideAndSeekActivity> *)&v6,
    (void (*)(HideAndSeekActivity *, const FinishQuestEvent *))HideAndSeekActivity::onFinishQuestEvent,
    0LL);
  std::weak_ptr<HideAndSeekActivity>::~weak_ptr((std::weak_ptr<HideAndSeekActivity> *const)&v6);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  cb_ptr = Player::getEventComp(this->player_);
  std::weak_ptr<HideAndSeekActivity>::weak_ptr(
    (std::weak_ptr<HideAndSeekActivity> *const)&v6,
    (const std::weak_ptr<HideAndSeekActivity> *)(v1 + 64));
  PlayerEventComp::tryRegisterObserver<HideAndSeekActivity,UnlockAreaEvent>(
    cb_ptr,
    (std::weak_ptr<HideAndSeekActivity> *)&v6,
    (void (*)(HideAndSeekActivity *, const UnlockAreaEvent *))HideAndSeekActivity::onUnlockAreaEvent,
    0LL);
  std::weak_ptr<HideAndSeekActivity>::~weak_ptr((std::weak_ptr<HideAndSeekActivity> *const)&v6);
  std::weak_ptr<HideAndSeekActivity>::~weak_ptr((std::weak_ptr<HideAndSeekActivity> *const)(v1 + 64));
  std::shared_ptr<HideAndSeekActivity>::~shared_ptr((std::shared_ptr<HideAndSeekActivity> *const)(v1 + 32));
  if ( v7 == (char *)v1 )
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

// Line 159: range 0000000014525F36-00000000145265D7
int32_t __cdecl HideAndSeekActivity::execAction(
        HideAndSeekActivity *const this,
        const data::NewActivityExec *action_exec)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  data::NewActivityActionType type; // eax
  common::milog::MiLogStream *v7; // rbx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  int v13; // r15d
  std::vector<unsigned int>::iterator v14; // rax
  int32_t result; // eax
  unsigned int *__last; // [rsp+8h] [rbp-138h]
  std::vector<std::string>::const_iterator __for_begin; // [rsp+28h] [rbp-118h] BYREF
  std::vector<std::string>::const_iterator __for_end; // [rsp+30h] [rbp-110h] BYREF
  const HideAndSeekDetailConfig *config_ptr; // [rsp+38h] [rbp-108h]
  const std::vector<std::string> *__for_range; // [rsp+40h] [rbp-100h]
  const std::string *map_str; // [rsp+48h] [rbp-F8h]
  common::milog::MiLogStream v22; // [rsp+50h] [rbp-F0h] BYREF
  common::milog::MiLogStream v23; // [rsp+70h] [rbp-D0h] BYREF
  char v24[176]; // [rsp+90h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 10 map_id:190 64 24 14 map_id_vec:187";
  *(_QWORD *)(v3 + 16) = HideAndSeekActivity::execAction;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  type = action_exec->type;
  if ( type != NEW_ACTIVITY_ACTION_UNLOCK_HIDE_AND_SEEK_MAP )
  {
    if ( type > NEW_ACTIVITY_ACTION_UNLOCK_HIDE_AND_SEEK_MAP )
    {
LABEL_32:
      v2 = BaseActivity::execAction(this, action_exec);
      goto LABEL_34;
    }
    if ( type == NEW_ACTIVITY_ACTION_OPEN_HIDE_AND_SEEK )
    {
      if ( *(char *)(((unsigned __int64)&this->is_play_open_ >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&this->is_play_open_);
      this->is_play_open_ = 1;
      BaseActivity::notifyClientData(this, 0);
    }
    else
    {
      if ( type != NEW_ACTIVITY_ACTION_CLOSE_HIDE_AND_SEEK )
        goto LABEL_32;
      if ( *(char *)(((unsigned __int64)&this->is_play_open_ >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&this->is_play_open_);
      this->is_play_open_ = 0;
      BaseActivity::notifyClientData(this, 0);
    }
    goto LABEL_33;
  }
  if ( !std::vector<std::string>::size(&action_exec->param) )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/hide_and_seek_activity.cpp",
      "execAction",
      178);
    v7 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
           &v23,
           (const char (*)[51])"[HIDEANDSEEK] param size not enough, param.size():");
    __for_end._M_current = (const std::string *)std::vector<std::string>::size(&action_exec->param);
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v7, (const unsigned __int64 *)&__for_end);
    common::milog::MiLogStream::~MiLogStream(&v23);
    v2 = -1;
    goto LABEL_34;
  }
  config_ptr = HideAndSeekActivity::getDetailConfig(this);
  if ( !config_ptr )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/hide_and_seek_activity.cpp",
      "execAction",
      184);
    v8 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
           &v23,
           (const char (*)[51])"[HIDEANDSEEK] getDetailConfig failed, activity_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->activity_id_);
    common::milog::MiLogStream::~MiLogStream(&v23);
    v2 = -1;
    goto LABEL_34;
  }
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 64));
  __for_range = &action_exec->param;
  __for_begin._M_current = std::vector<std::string>::begin(&action_exec->param)._M_current;
  __for_end._M_current = std::vector<std::string>::end(&action_exec->param)._M_current;
  while ( __gnu_cxx::operator!=<std::string const*,std::vector<std::string>>(&__for_begin, &__for_end) )
  {
    map_str = __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator*(&__for_begin);
    *(_DWORD *)(v3 + 48) = 0;
    if ( common::tools::StringUtils::strToNum<unsigned int>(map_str, (unsigned int *)(v3 + 48), 1) )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/hide_and_seek_activity.cpp",
        "execAction",
        193);
      v9 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
             &v22,
             (const char (*)[38])"[HIDEANDSEEK] map_id strToNum failed:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, map_str);
      common::milog::MiLogStream::~MiLogStream(&v22);
      v2 = -1;
LABEL_28:
      v13 = 0;
      goto LABEL_30;
    }
    if ( !common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
            &config_ptr->map_set,
            (const unsigned int *)(v3 + 48)) )
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/hide_and_seek_activity.cpp",
        "execAction",
        198);
      v10 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
              &v23,
              (const char (*)[64])"[HIDEANDSEEK] map_id is not in current activity config, map_id:");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v11, (const char (*)[15])", activity_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &this->activity_id_);
      common::milog::MiLogStream::~MiLogStream(&v23);
      v2 = -1;
      goto LABEL_28;
    }
    std::vector<unsigned int>::push_back(
      (std::vector<unsigned int> *const)(v3 + 64),
      (const std::vector<unsigned int>::value_type *)(v3 + 48));
    __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator++(&__for_begin);
  }
  __last = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v3 + 64))._M_current;
  v14._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 64))._M_current;
  std::set<unsigned int>::insert<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>>(
    &this->unlock_map_set_,
    v14,
    (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)__last);
  BaseActivity::notifyClientData(this, 0);
  v13 = 1;
LABEL_30:
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 64));
  if ( v13 )
LABEL_33:
    v2 = 0;
LABEL_34:
  result = v2;
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

// Line 215: range 00000000145265D8-000000001452710B
int32_t __cdecl HideAndSeekActivity::onHideAndSeekSelectSkillReq(
        HideAndSeekActivity *const this,
        const proto::HideAndSeekSelectSkillReq *req,
        proto::HideAndSeekSelectSkillRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  int32_t v7; // r14d
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  unsigned int *v12; // r8
  common::milog::MiLogStream *v13; // rax
  std::pair<std::__detail::_Node_iterator<std::pair<const data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY,unsigned int>,false,false>,bool> v14; // rax
  common::milog::MiLogStream *v15; // rax
  std::pair<std::__detail::_Node_iterator<std::pair<const data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY,unsigned int>,false,false>,bool> v16; // rax
  common::milog::MiLogStream *v17; // rax
  std::tuple_element<1,const std::pair<const data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY,unsigned int> >::type v18; // r14d
  std::unordered_map<unsigned int,unsigned int> *p_hider_slot_skill_map; // rcx
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v20; // rax
  std::tuple_element<1,const std::pair<const data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY,unsigned int> >::type *v21; // rdx
  std::tuple_element<1,const std::pair<const data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY,unsigned int> >::type v22; // r14d
  std::unordered_map<unsigned int,unsigned int> *p_hunter_slot_skill_map; // rcx
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v24; // rax
  std::tuple_element<1,const std::pair<const data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY,unsigned int> >::type *v25; // rdx
  google::protobuf::uint32 SelectedOrDefaultHunterSkill; // edx
  google::protobuf::uint32 v27; // edx
  google::protobuf::uint32 v28; // edx
  google::protobuf::uint32 SelectedOrDefaultHiderSkill; // edx
  google::protobuf::uint32 v30; // edx
  google::protobuf::uint32 v31; // edx
  int32_t result; // eax
  std::unordered_map<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY,unsigned int>::iterator __for_begin_0; // [rsp+28h] [rbp-1D8h] BYREF
  std::unordered_map<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY,unsigned int>::iterator __for_end_0; // [rsp+30h] [rbp-1D0h] BYREF
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin; // [rsp+38h] [rbp-1C8h]
  const HideAndSeekDetailConfig *config_ptr; // [rsp+40h] [rbp-1C0h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range; // [rsp+48h] [rbp-1B8h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end; // [rsp+50h] [rbp-1B0h]
  const data::HideAndSeekSkillExcelConfig *skill_config_ptr; // [rsp+58h] [rbp-1A8h]
  std::unordered_map<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY,unsigned int> *__for_range_0; // [rsp+60h] [rbp-1A0h]
  std::unordered_map<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY,unsigned int> *__for_range_1; // [rsp+68h] [rbp-198h]
  const std::pair<const data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY,unsigned int> *v43; // [rsp+70h] [rbp-190h]
  std::tuple_element<0,const std::pair<const data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY,unsigned int> >::type *slot_id_0; // [rsp+78h] [rbp-188h]
  std::tuple_element<1,const std::pair<const data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY,unsigned int> >::type *skill_id_0; // [rsp+80h] [rbp-180h]
  const std::pair<const data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY,unsigned int> *v46; // [rsp+88h] [rbp-178h]
  std::tuple_element<0,const std::pair<const data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY,unsigned int> >::type *slot_id; // [rsp+90h] [rbp-170h]
  std::tuple_element<1,const std::pair<const data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY,unsigned int> >::type *skill_id; // [rsp+98h] [rbp-168h]
  std::shared_ptr<Config> v49; // [rsp+A0h] [rbp-160h] BYREF
  common::milog::MiLogStream v50; // [rsp+B0h] [rbp-150h] BYREF
  char v51[304]; // [rsp+D0h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v51;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 12 skill_id:226 64 56 19 hider_skill_map:223 160 56 20 hunter_skill_map:224";
  *(_QWORD *)(v3 + 16) = HideAndSeekActivity::onHideAndSeekSelectSkillReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862723] = -234881024;
  v5[536862724] = -218959118;
  v5[536862726] = -218103808;
  v5[536862727] = -202116109;
  config_ptr = HideAndSeekActivity::getDetailConfig(this);
  if ( config_ptr )
  {
    std::unordered_map<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY,unsigned int>::unordered_map((std::unordered_map<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY,unsigned int> *const)(v3 + 64));
    std::unordered_map<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY,unsigned int>::unordered_map((std::unordered_map<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY,unsigned int> *const)(v3 + 160));
    __for_range = proto::HideAndSeekSelectSkillReq::skill_list(req);
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
      if ( !common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
              &config_ptr->skill_set,
              (const unsigned int *)(v3 + 48)) )
      {
        common::milog::MiLogStream::create(
          &v50,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/hide_and_seek_activity.cpp",
          "onHideAndSeekSelectSkillReq",
          230);
        v8 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
               &v50,
               (const char (*)[49])"[HIDEANDSEEK] skill_id is not existed, skill_id:");
        v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 48));
        v10 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v9, (const char (*)[15])", activity_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->activity_id_);
        common::milog::MiLogStream::~MiLogStream(&v50);
        v7 = -1;
        goto LABEL_44;
      }
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v49);
      v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v49);
      skill_config_ptr = data::ActivityHideAndSeekConfigMgrBase::findHideAndSeekSkillExcelConfig(
                           &v11->design_config.txt_config_mgr.activity_hide_and_seek_config_mgr,
                           *(_DWORD *)(v3 + 48));
      std::shared_ptr<Config>::~shared_ptr(&v49);
      if ( !skill_config_ptr )
      {
        common::milog::MiLogStream::create(
          &v50,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/hide_and_seek_activity.cpp",
          "onHideAndSeekSelectSkillReq",
          236);
        v13 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                &v50,
                (const char (*)[50])"findHideAndSeekSkillExcelConfig failed, skill_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v50);
        v7 = -1;
        goto LABEL_44;
      }
      if ( *(_BYTE *)(((unsigned __int64)&skill_config_ptr->skill_category >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)skill_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&skill_config_ptr->skill_category >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( skill_config_ptr->skill_category == HIDE_AND_SEEK_SKILL_CATEGORY_HUNTER )
      {
        v14 = std::unordered_map<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY,unsigned int>::emplace<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY const&,unsigned int &>(
                (std::unordered_map<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY,unsigned int> *const)(v3 + 160),
                &skill_config_ptr->skill_sub_category,
                (unsigned int *)(v3 + 48),
                &skill_config_ptr->skill_sub_category,
                v12);
        if ( !v14.second )
        {
          common::milog::MiLogStream::create(
            &v50,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/hide_and_seek_activity.cpp",
            "onHideAndSeekSelectSkillReq",
            243);
          v15 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                  &v50,
                  (const char (*)[32])"duplicate skill slot, skill_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream(&v50);
          v7 = -1;
          goto LABEL_44;
        }
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&skill_config_ptr->skill_category >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)skill_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&skill_config_ptr->skill_category >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( skill_config_ptr->skill_category == HIDE_AND_SEEK_SKILL_CATEGORY_PREY )
        {
          v16 = std::unordered_map<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY,unsigned int>::emplace<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY const&,unsigned int &>(
                  (std::unordered_map<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY,unsigned int> *const)(v3 + 64),
                  &skill_config_ptr->skill_sub_category,
                  (unsigned int *)(v3 + 48),
                  &skill_config_ptr->skill_sub_category,
                  v12);
          if ( !v16.second )
          {
            common::milog::MiLogStream::create(
              &v50,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/hide_and_seek_activity.cpp",
              "onHideAndSeekSelectSkillReq",
              251);
            v17 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                    &v50,
                    (const char (*)[32])"duplicate skill slot, skill_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v3 + 48));
            common::milog::MiLogStream::~MiLogStream(&v50);
            v7 = -1;
            goto LABEL_44;
          }
        }
      }
      ++__for_begin;
    }
    __for_range_0 = (std::unordered_map<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY,unsigned int> *)(v3 + 64);
    __for_begin_0._M_cur = std::unordered_map<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY,unsigned int>::begin((std::unordered_map<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY,unsigned int> *const)(v3 + 64))._M_cur;
    __for_end_0._M_cur = std::unordered_map<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY,unsigned int>::end((std::unordered_map<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY,unsigned int> *const)(v3 + 64))._M_cur;
    while ( std::__detail::operator!=<std::pair<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY const,unsigned int>,false>(
              &__for_begin_0,
              &__for_end_0) )
    {
      v46 = std::__detail::_Node_iterator<std::pair<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY const,unsigned int>,false,false>::operator*(&__for_begin_0);
      slot_id = std::get<0ul,data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY const,unsigned int>(v46);
      skill_id = (std::tuple_element<1,const std::pair<const data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY,unsigned int> >::type *)std::get<1ul,data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY const,unsigned int>(v46);
      if ( *(_BYTE *)(((unsigned __int64)skill_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)skill_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)skill_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v18 = *skill_id;
      p_hider_slot_skill_map = &this->hider_slot_skill_map_;
      if ( *(_BYTE *)(((unsigned __int64)slot_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)slot_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)slot_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(std::tuple_element<0,const std::pair<const data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY,unsigned int> >::type *)(v3 + 48) = *slot_id;
      v20 = std::unordered_map<unsigned int,unsigned int>::operator[](
              p_hider_slot_skill_map,
              (std::unordered_map<unsigned int,unsigned int>::key_type *)(v3 + 48));
      v21 = v20;
      if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v20);
      }
      *v21 = v18;
      std::__detail::_Node_iterator<std::pair<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY const,unsigned int>,false,false>::operator++(&__for_begin_0);
    }
    __for_range_1 = (std::unordered_map<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY,unsigned int> *)(v3 + 160);
    __for_begin_0._M_cur = std::unordered_map<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY,unsigned int>::begin((std::unordered_map<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY,unsigned int> *const)(v3 + 160))._M_cur;
    __for_end_0._M_cur = std::unordered_map<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY,unsigned int>::end(__for_range_1)._M_cur;
    while ( std::__detail::operator!=<std::pair<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY const,unsigned int>,false>(
              &__for_begin_0,
              &__for_end_0) )
    {
      v43 = std::__detail::_Node_iterator<std::pair<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY const,unsigned int>,false,false>::operator*(&__for_begin_0);
      slot_id_0 = std::get<0ul,data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY const,unsigned int>(v43);
      skill_id_0 = (std::tuple_element<1,const std::pair<const data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY,unsigned int> >::type *)std::get<1ul,data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY const,unsigned int>(v43);
      if ( *(_BYTE *)(((unsigned __int64)skill_id_0 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)skill_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)skill_id_0 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v22 = *skill_id_0;
      p_hunter_slot_skill_map = &this->hunter_slot_skill_map_;
      if ( *(_BYTE *)(((unsigned __int64)slot_id_0 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)slot_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)slot_id_0 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(std::tuple_element<0,const std::pair<const data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY,unsigned int> >::type *)(v3 + 48) = *slot_id_0;
      v24 = std::unordered_map<unsigned int,unsigned int>::operator[](
              p_hunter_slot_skill_map,
              (std::unordered_map<unsigned int,unsigned int>::key_type *)(v3 + 48));
      v25 = v24;
      if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v24 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v24);
      }
      *v25 = v22;
      std::__detail::_Node_iterator<std::pair<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY const,unsigned int>,false,false>::operator++(&__for_begin_0);
    }
    SelectedOrDefaultHunterSkill = HideAndSeekActivity::getSelectedOrDefaultHunterSkill(
                                     this,
                                     HIDE_AND_SEEK_SKILL_SUB_CATEGORY_COMMON);
    proto::HideAndSeekSelectSkillRsp::add_skill_list(rsp_0, SelectedOrDefaultHunterSkill);
    v27 = HideAndSeekActivity::getSelectedOrDefaultHunterSkill(this, HIDE_AND_SEEK_SKILL_SUB_CATEGORY_SKILL1);
    proto::HideAndSeekSelectSkillRsp::add_skill_list(rsp_0, v27);
    v28 = HideAndSeekActivity::getSelectedOrDefaultHunterSkill(this, HIDE_AND_SEEK_SKILL_SUB_CATEGORY_SKILL2);
    proto::HideAndSeekSelectSkillRsp::add_skill_list(rsp_0, v28);
    SelectedOrDefaultHiderSkill = HideAndSeekActivity::getSelectedOrDefaultHiderSkill(
                                    this,
                                    HIDE_AND_SEEK_SKILL_SUB_CATEGORY_COMMON);
    proto::HideAndSeekSelectSkillRsp::add_skill_list(rsp_0, SelectedOrDefaultHiderSkill);
    v30 = HideAndSeekActivity::getSelectedOrDefaultHiderSkill(this, HIDE_AND_SEEK_SKILL_SUB_CATEGORY_SKILL1);
    proto::HideAndSeekSelectSkillRsp::add_skill_list(rsp_0, v30);
    v31 = HideAndSeekActivity::getSelectedOrDefaultHiderSkill(this, HIDE_AND_SEEK_SKILL_SUB_CATEGORY_SKILL2);
    proto::HideAndSeekSelectSkillRsp::add_skill_list(rsp_0, v31);
    BaseActivity::notifyClientData(this, 0);
    v7 = 0;
LABEL_44:
    std::unordered_map<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY,unsigned int>::~unordered_map((std::unordered_map<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY,unsigned int> *const)(v3 + 160));
    std::unordered_map<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY,unsigned int>::~unordered_map((std::unordered_map<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY,unsigned int> *const)(v3 + 64));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v50,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/hide_and_seek_activity.cpp",
      "onHideAndSeekSelectSkillReq",
      219);
    v6 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
           &v50,
           (const char (*)[51])"[HIDEANDSEEK] getDetailConfig failed, activity_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->activity_id_);
    common::milog::MiLogStream::~MiLogStream(&v50);
    v7 = -1;
  }
  result = v7;
  if ( v51 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF800C) = 0LL;
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

// Line 277: range 000000001452710C-00000000145275E6
int32_t __cdecl HideAndSeekActivity::updateUnselectedHideAndSeekMap(
        HideAndSeekActivity *const this,
        const std::set<unsigned int> *chosen_map_set)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::_Rb_tree_const_iterator<unsigned int>::reference v6; // rdx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v9; // rax
  int v10; // r15d
  std::set<unsigned int>::iterator v11; // rax
  std::insert_iterator<std::set<unsigned int> > v12; // rax
  std::set<unsigned int> *container; // r14
  const std::_Rb_tree_node_base *M_node; // r15
  std::set<unsigned int>::iterator v15; // rax
  std::insert_iterator<std::set<unsigned int> > v16; // r8
  int32_t result; // eax
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr __last2; // [rsp+8h] [rbp-158h]
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr __first2; // [rsp+10h] [rbp-150h]
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr __last1; // [rsp+18h] [rbp-148h]
  std::set<unsigned int>::iterator __for_begin; // [rsp+38h] [rbp-128h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+40h] [rbp-120h] BYREF
  const std::set<unsigned int> *__for_range; // [rsp+48h] [rbp-118h]
  common::milog::MiLogStream v24; // [rsp+50h] [rbp-110h] BYREF
  char v25[240]; // [rsp+70h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 10 map_id:278 48 24 17 map_limit_vec:285 112 48 21 available_map_set:295";
  *(_QWORD *)(v3 + 16) = HideAndSeekActivity::updateUnselectedHideAndSeekMap;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862722] = -218959360;
  v5[536862723] = 62194;
  v5[536862725] = -202116109;
  __for_range = chosen_map_set;
  __for_begin._M_node = std::set<unsigned int>::begin(chosen_map_set)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(chosen_map_set)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v6 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v3 + 32) = *v6;
    if ( !common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
            &this->unlock_map_set_,
            (const unsigned int *)(v3 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/hide_and_seek_activity.cpp",
        "updateUnselectedHideAndSeekMap",
        282);
      v7 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
             &v24,
             (const char (*)[37])"[HIDEANDSEEK] map is locked, map_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v24);
      v2 = 9161;
      goto LABEL_20;
    }
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 48));
    if ( HideAndSeekActivity::getMapMatchLimitIndexVec(
           this,
           *(_DWORD *)(v3 + 32),
           (std::vector<unsigned int> *)(v3 + 48))
      || !std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v3 + 48)) )
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/hide_and_seek_activity.cpp",
        "updateUnselectedHideAndSeekMap",
        288);
      v9 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
             &v24,
             (const char (*)[38])"[HIDEANDSEEK] map is limited, map_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v24);
      v2 = 9161;
      v10 = 0;
    }
    else
    {
      v10 = 1;
    }
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 48));
    if ( v10 != 1 )
      goto LABEL_20;
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  std::set<unsigned int>::clear(&this->unselected_map_set_);
  HideAndSeekActivity::getAvailableHideAndSeekMap((std::set<unsigned int> *)(v3 + 112), this);
  v11._M_node = std::set<unsigned int>::begin(&this->unselected_map_set_)._M_node;
  v12 = std::inserter<std::set<unsigned int>,std::_Rb_tree_const_iterator<unsigned int>>(
          &this->unselected_map_set_,
          v11);
  container = v12.container;
  M_node = v12.iter._M_node;
  __last2 = std::set<unsigned int>::end(chosen_map_set)._M_node;
  __first2 = std::set<unsigned int>::begin(chosen_map_set)._M_node;
  __last1 = std::set<unsigned int>::end((const std::set<unsigned int> *const)(v3 + 112))._M_node;
  v15._M_node = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v3 + 112))._M_node;
  v16.container = container;
  v16.iter._M_node = M_node;
  std::set_difference<std::_Rb_tree_const_iterator<unsigned int>,std::_Rb_tree_const_iterator<unsigned int>,std::insert_iterator<std::set<unsigned int>>>(
    v15,
    (std::_Rb_tree_const_iterator<unsigned int>)__last1,
    (std::_Rb_tree_const_iterator<unsigned int>)__first2,
    (std::_Rb_tree_const_iterator<unsigned int>)__last2,
    v16);
  v2 = 0;
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 112));
LABEL_20:
  result = v2;
  if ( v25 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8014) = 0;
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

// Line 303: range 00000000145275E8-0000000014527858
std::set<unsigned int> *__cdecl HideAndSeekActivity::getAvailableHideAndSeekMap(
        std::set<unsigned int> *retstr,
        HideAndSeekActivity *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::_Rb_tree_const_iterator<unsigned int>::reference v5; // rdx
  std::set<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-B8h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-B0h] BYREF
  std::set<unsigned int> *__for_range; // [rsp+28h] [rbp-A8h]
  char v11[160]; // [rsp+30h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 10 map_id:306 64 24 17 map_limit_vec:308";
  *(_QWORD *)(v2 + 16) = HideAndSeekActivity::getAvailableHideAndSeekMap;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  std::set<unsigned int>::set(retstr);
  __for_range = &this->unlock_map_set_;
  __for_begin._M_node = std::set<unsigned int>::begin(&this->unlock_map_set_)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(&this->unlock_map_set_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v5 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 48) = *v5;
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 64));
    if ( !HideAndSeekActivity::getMapMatchLimitIndexVec(
            this,
            *(_DWORD *)(v2 + 48),
            (std::vector<unsigned int> *)(v2 + 64))
      && std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v2 + 64)) )
    {
      std::set<unsigned int>::emplace<unsigned int &>(retstr, (unsigned int *)(v2 + 48), (unsigned int *)(v2 + 48));
    }
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 64));
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  if ( v11 == (char *)v2 )
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
  return retstr;
};

// Line 319: range 000000001452785A-0000000014527A46
std::vector<unsigned int> *__cdecl HideAndSeekActivity::getChosenHideAndSeekMap(
        std::vector<unsigned int> *retstr,
        HideAndSeekActivity *const this)
{
  std::set<unsigned int> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr M_node; // r15
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr v6; // r14
  std::set<unsigned int>::iterator v7; // rax
  std::vector<unsigned int> *__result; // [rsp+10h] [rbp-D0h]
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr __last2; // [rsp+18h] [rbp-C8h]
  char v11[176]; // [rsp+30h] [rbp-B0h] BYREF

  v2 = (std::set<unsigned int> *)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = (std::set<unsigned int> *)v3;
  }
  *(_QWORD *)v2->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v2->_M_t._M_impl._M_header._M_color = "1 48 48 21 available_map_set:323";
  v2->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)HideAndSeekActivity::getChosenHideAndSeekMap;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -202116109;
  std::vector<unsigned int>::vector(retstr);
  HideAndSeekActivity::getAvailableHideAndSeekMap(v2 + 1, this);
  __result = std::back_inserter<std::vector<unsigned int>>(retstr).container;
  __last2 = std::set<unsigned int>::end(&this->unselected_map_set_)._M_node;
  M_node = std::set<unsigned int>::begin(&this->unselected_map_set_)._M_node;
  v6 = std::set<unsigned int>::end(v2 + 1)._M_node;
  v7._M_node = std::set<unsigned int>::begin(v2 + 1)._M_node;
  std::set_difference<std::_Rb_tree_const_iterator<unsigned int>,std::_Rb_tree_const_iterator<unsigned int>,std::back_insert_iterator<std::vector<unsigned int>>>(
    v7,
    (std::_Rb_tree_const_iterator<unsigned int>)v6,
    (std::_Rb_tree_const_iterator<unsigned int>)M_node,
    (std::_Rb_tree_const_iterator<unsigned int>)__last2,
    (std::back_insert_iterator<std::vector<unsigned int> >)__result);
  std::set<unsigned int>::~set(v2 + 1);
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2->_M_t._M_impl.gap0 = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 331: range 0000000014527A48-0000000014527B02
std::vector<unsigned int> *__cdecl HideAndSeekActivity::getPersonalHunterSkillVec(
        std::vector<unsigned int> *retstr,
        HideAndSeekActivity *const this)
{
  std::vector<unsigned int>::value_type __x[5]; // [rsp+1Ch] [rbp-14h] BYREF

  std::vector<unsigned int>::vector(retstr);
  __x[0] = HideAndSeekActivity::getSelectedOrDefaultHunterSkill(this, HIDE_AND_SEEK_SKILL_SUB_CATEGORY_COMMON);
  std::vector<unsigned int>::push_back(retstr, __x);
  __x[0] = HideAndSeekActivity::getSelectedOrDefaultHunterSkill(this, HIDE_AND_SEEK_SKILL_SUB_CATEGORY_SKILL1);
  std::vector<unsigned int>::push_back(retstr, __x);
  __x[0] = HideAndSeekActivity::getSelectedOrDefaultHunterSkill(this, HIDE_AND_SEEK_SKILL_SUB_CATEGORY_SKILL2);
  std::vector<unsigned int>::push_back(retstr, __x);
  return retstr;
};

// Line 340: range 0000000014527B04-0000000014527CC3
std::vector<unsigned int> *__cdecl HideAndSeekActivity::getPersonalHunterSkillGalleryIndexVec(
        std::vector<unsigned int> *retstr,
        HideAndSeekActivity *const this)
{
  ActivityHideAndSeekExcelConfigMgr *p_activity_hide_and_seek_config_mgr; // rbx
  uint32_t SelectedOrDefaultHunterSkill; // eax
  ActivityHideAndSeekExcelConfigMgr *v4; // rbx
  uint32_t v5; // eax
  ActivityHideAndSeekExcelConfigMgr *v6; // rbx
  uint32_t v7; // eax
  std::vector<unsigned int>::value_type __x; // [rsp+1Ch] [rbp-24h] BYREF
  std::shared_ptr<Config> v10[2]; // [rsp+20h] [rbp-20h] BYREF

  std::vector<unsigned int>::vector(retstr);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v10);
  p_activity_hide_and_seek_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v10)->design_config.txt_config_mgr.activity_hide_and_seek_config_mgr;
  SelectedOrDefaultHunterSkill = HideAndSeekActivity::getSelectedOrDefaultHunterSkill(
                                   this,
                                   HIDE_AND_SEEK_SKILL_SUB_CATEGORY_COMMON);
  __x = ActivityHideAndSeekExcelConfigMgr::getSkillGalleryIndex(
          p_activity_hide_and_seek_config_mgr,
          SelectedOrDefaultHunterSkill);
  std::vector<unsigned int>::push_back(retstr, &__x);
  std::shared_ptr<Config>::~shared_ptr(v10);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v10);
  v4 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v10)->design_config.txt_config_mgr.activity_hide_and_seek_config_mgr;
  v5 = HideAndSeekActivity::getSelectedOrDefaultHunterSkill(this, HIDE_AND_SEEK_SKILL_SUB_CATEGORY_SKILL1);
  __x = ActivityHideAndSeekExcelConfigMgr::getSkillGalleryIndex(v4, v5);
  std::vector<unsigned int>::push_back(retstr, &__x);
  std::shared_ptr<Config>::~shared_ptr(v10);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v10);
  v6 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v10)->design_config.txt_config_mgr.activity_hide_and_seek_config_mgr;
  v7 = HideAndSeekActivity::getSelectedOrDefaultHunterSkill(this, HIDE_AND_SEEK_SKILL_SUB_CATEGORY_SKILL2);
  __x = ActivityHideAndSeekExcelConfigMgr::getSkillGalleryIndex(v6, v7);
  std::vector<unsigned int>::push_back(retstr, &__x);
  std::shared_ptr<Config>::~shared_ptr(v10);
  return retstr;
};

// Line 352: range 0000000014527CC4-0000000014527D7E
std::vector<unsigned int> *__cdecl HideAndSeekActivity::getPersonalHiderSkillVec(
        std::vector<unsigned int> *retstr,
        HideAndSeekActivity *const this)
{
  std::vector<unsigned int>::value_type __x[5]; // [rsp+1Ch] [rbp-14h] BYREF

  std::vector<unsigned int>::vector(retstr);
  __x[0] = HideAndSeekActivity::getSelectedOrDefaultHiderSkill(this, HIDE_AND_SEEK_SKILL_SUB_CATEGORY_COMMON);
  std::vector<unsigned int>::push_back(retstr, __x);
  __x[0] = HideAndSeekActivity::getSelectedOrDefaultHiderSkill(this, HIDE_AND_SEEK_SKILL_SUB_CATEGORY_SKILL1);
  std::vector<unsigned int>::push_back(retstr, __x);
  __x[0] = HideAndSeekActivity::getSelectedOrDefaultHiderSkill(this, HIDE_AND_SEEK_SKILL_SUB_CATEGORY_SKILL2);
  std::vector<unsigned int>::push_back(retstr, __x);
  return retstr;
};

// Line 361: range 0000000014527D80-0000000014527F3F
std::vector<unsigned int> *__cdecl HideAndSeekActivity::getPersonalHiderSkillGalleryIndexVec(
        std::vector<unsigned int> *retstr,
        HideAndSeekActivity *const this)
{
  ActivityHideAndSeekExcelConfigMgr *p_activity_hide_and_seek_config_mgr; // rbx
  uint32_t SelectedOrDefaultHiderSkill; // eax
  ActivityHideAndSeekExcelConfigMgr *v4; // rbx
  uint32_t v5; // eax
  ActivityHideAndSeekExcelConfigMgr *v6; // rbx
  uint32_t v7; // eax
  std::vector<unsigned int>::value_type __x; // [rsp+1Ch] [rbp-24h] BYREF
  std::shared_ptr<Config> v10[2]; // [rsp+20h] [rbp-20h] BYREF

  std::vector<unsigned int>::vector(retstr);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v10);
  p_activity_hide_and_seek_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v10)->design_config.txt_config_mgr.activity_hide_and_seek_config_mgr;
  SelectedOrDefaultHiderSkill = HideAndSeekActivity::getSelectedOrDefaultHiderSkill(
                                  this,
                                  HIDE_AND_SEEK_SKILL_SUB_CATEGORY_COMMON);
  __x = ActivityHideAndSeekExcelConfigMgr::getSkillGalleryIndex(
          p_activity_hide_and_seek_config_mgr,
          SelectedOrDefaultHiderSkill);
  std::vector<unsigned int>::push_back(retstr, &__x);
  std::shared_ptr<Config>::~shared_ptr(v10);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v10);
  v4 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v10)->design_config.txt_config_mgr.activity_hide_and_seek_config_mgr;
  v5 = HideAndSeekActivity::getSelectedOrDefaultHiderSkill(this, HIDE_AND_SEEK_SKILL_SUB_CATEGORY_SKILL1);
  __x = ActivityHideAndSeekExcelConfigMgr::getSkillGalleryIndex(v4, v5);
  std::vector<unsigned int>::push_back(retstr, &__x);
  std::shared_ptr<Config>::~shared_ptr(v10);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v10);
  v6 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v10)->design_config.txt_config_mgr.activity_hide_and_seek_config_mgr;
  v7 = HideAndSeekActivity::getSelectedOrDefaultHiderSkill(this, HIDE_AND_SEEK_SKILL_SUB_CATEGORY_SKILL2);
  __x = ActivityHideAndSeekExcelConfigMgr::getSkillGalleryIndex(v6, v7);
  std::vector<unsigned int>::push_back(retstr, &__x);
  std::shared_ptr<Config>::~shared_ptr(v10);
  return retstr;
};

// Line 374: range 0000000014527F40-000000001452825E
__int64 __fastcall HideAndSeekActivity::getSelectedOrDefaultHiderSkill(
        HideAndSeekActivity *const this,
        data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY slot)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  char v5; // r14
  ActivityHideAndSeekExcelConfigMgr *p_activity_hide_and_seek_config_mgr; // r15
  uint32_t *v7; // rdx
  char v8; // r15
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v9; // rdx
  uint32_t DefaultSkillConfigId; // r12d
  const ActivityHideAndSeekExcelConfigMgr *p_activity_id; // rdi
  __int64 result; // rax
  std::unordered_map<unsigned int,unsigned int>::key_type __k; // [rsp+2Ch] [rbp-84h] BYREF
  std::shared_ptr<Config> v15; // [rsp+30h] [rbp-80h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 8 slot:373";
  *(_QWORD *)(v2 + 16) = HideAndSeekActivity::getSelectedOrDefaultHiderSkill;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = slot;
  v5 = 0;
  if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,unsigned int>,data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY>(
          &this->hider_slot_skill_map_,
          (const data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY *)(v2 + 32)) )
    goto LABEL_9;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v15);
  v5 = 1;
  p_activity_hide_and_seek_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15)->design_config.txt_config_mgr.activity_hide_and_seek_config_mgr;
  __k = *(_DWORD *)(v2 + 32);
  v7 = std::unordered_map<unsigned int,unsigned int>::operator[](&this->hider_slot_skill_map_, &__k);
  if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( ActivityHideAndSeekExcelConfigMgr::isValidSkillConfigId(
         p_activity_hide_and_seek_config_mgr,
         HIDE_AND_SEEK_SKILL_CATEGORY_PREY,
         *(data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY *)(v2 + 32),
         *v7) )
  {
    v8 = 1;
  }
  else
  {
LABEL_9:
    v8 = 0;
  }
  if ( v5 )
    std::shared_ptr<Config>::~shared_ptr(&v15);
  if ( v8 )
  {
    __k = *(_DWORD *)(v2 + 32);
    v9 = std::unordered_map<unsigned int,unsigned int>::operator[](&this->hider_slot_skill_map_, &__k);
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    DefaultSkillConfigId = *v9;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v15);
    p_activity_id = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15)->design_config.txt_config_mgr.activity_hide_and_seek_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      p_activity_id = (const ActivityHideAndSeekExcelConfigMgr *)&this->activity_id_;
      __asan_report_load4();
    }
    DefaultSkillConfigId = ActivityHideAndSeekExcelConfigMgr::getDefaultSkillConfigId(
                             p_activity_id,
                             HIDE_AND_SEEK_SKILL_CATEGORY_PREY,
                             *(data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY *)(v2 + 32),
                             this->activity_id_);
    std::shared_ptr<Config>::~shared_ptr(&v15);
  }
  result = DefaultSkillConfigId;
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

// Line 384: range 0000000014528260-000000001452857E
__int64 __fastcall HideAndSeekActivity::getSelectedOrDefaultHunterSkill(
        HideAndSeekActivity *const this,
        data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY slot)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  char v5; // r14
  ActivityHideAndSeekExcelConfigMgr *p_activity_hide_and_seek_config_mgr; // r15
  uint32_t *v7; // rdx
  char v8; // r15
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v9; // rdx
  uint32_t DefaultSkillConfigId; // r12d
  const ActivityHideAndSeekExcelConfigMgr *p_activity_id; // rdi
  __int64 result; // rax
  std::unordered_map<unsigned int,unsigned int>::key_type __k; // [rsp+2Ch] [rbp-84h] BYREF
  std::shared_ptr<Config> v15; // [rsp+30h] [rbp-80h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 8 slot:383";
  *(_QWORD *)(v2 + 16) = HideAndSeekActivity::getSelectedOrDefaultHunterSkill;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = slot;
  v5 = 0;
  if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,unsigned int>,data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY>(
          &this->hunter_slot_skill_map_,
          (const data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY *)(v2 + 32)) )
    goto LABEL_9;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v15);
  v5 = 1;
  p_activity_hide_and_seek_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15)->design_config.txt_config_mgr.activity_hide_and_seek_config_mgr;
  __k = *(_DWORD *)(v2 + 32);
  v7 = std::unordered_map<unsigned int,unsigned int>::operator[](&this->hunter_slot_skill_map_, &__k);
  if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( ActivityHideAndSeekExcelConfigMgr::isValidSkillConfigId(
         p_activity_hide_and_seek_config_mgr,
         HIDE_AND_SEEK_SKILL_CATEGORY_HUNTER,
         *(data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY *)(v2 + 32),
         *v7) )
  {
    v8 = 1;
  }
  else
  {
LABEL_9:
    v8 = 0;
  }
  if ( v5 )
    std::shared_ptr<Config>::~shared_ptr(&v15);
  if ( v8 )
  {
    __k = *(_DWORD *)(v2 + 32);
    v9 = std::unordered_map<unsigned int,unsigned int>::operator[](&this->hunter_slot_skill_map_, &__k);
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    DefaultSkillConfigId = *v9;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v15);
    p_activity_id = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15)->design_config.txt_config_mgr.activity_hide_and_seek_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      p_activity_id = (const ActivityHideAndSeekExcelConfigMgr *)&this->activity_id_;
      __asan_report_load4();
    }
    DefaultSkillConfigId = ActivityHideAndSeekExcelConfigMgr::getDefaultSkillConfigId(
                             p_activity_id,
                             HIDE_AND_SEEK_SKILL_CATEGORY_HUNTER,
                             *(data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY *)(v2 + 32),
                             this->activity_id_);
    std::shared_ptr<Config>::~shared_ptr(&v15);
  }
  result = DefaultSkillConfigId;
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

// Line 394: range 0000000014528580-0000000014528877
void __cdecl HideAndSeekActivity::fillInMapInfo(
        HideAndSeekActivity *const this,
        proto::HideAndSeekActivityDetailInfo *activity_info)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::_Rb_tree_const_iterator<unsigned int>::reference v5; // rdx
  common::milog::MiLogStream *v6; // rax
  google::protobuf::RepeatedField<unsigned int> *matched; // rax
  std::set<unsigned int>::iterator __for_begin; // [rsp+10h] [rbp-F0h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+18h] [rbp-E8h] BYREF
  std::set<unsigned int> *__for_range; // [rsp+20h] [rbp-E0h]
  proto::HideAndSeekMapInfo *map_info; // [rsp+28h] [rbp-D8h]
  common::milog::MiLogStream v12; // [rsp+30h] [rbp-D0h] BYREF
  char v13[176]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 10 map_id:395 64 24 19 match_limit_vec:397";
  *(_QWORD *)(v2 + 16) = HideAndSeekActivity::fillInMapInfo;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  __for_range = &this->unlock_map_set_;
  __for_begin._M_node = std::set<unsigned int>::begin(&this->unlock_map_set_)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(&this->unlock_map_set_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v5 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 48) = *v5;
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 64));
    if ( HideAndSeekActivity::getMapMatchLimitIndexVec(
           this,
           *(_DWORD *)(v2 + 48),
           (std::vector<unsigned int> *)(v2 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/hide_and_seek_activity.cpp",
        "fillInMapInfo",
        400);
      v6 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
             &v12,
             (const char (*)[55])"[HIDEANDSEEK] getMapMatchLimitIndexVec failed, map_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v12);
    }
    else
    {
      map_info = proto::HideAndSeekActivityDetailInfo::add_open_map_info_list(activity_info);
      proto::HideAndSeekMapInfo::set_id(map_info, *(_DWORD *)(v2 + 48));
      matched = proto::HideAndSeekMapInfo::mutable_match_lock_reason_list(map_info);
      common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(
        (const std::vector<unsigned int> *)(v2 + 64),
        matched);
    }
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 64));
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  if ( v13 == (char *)v2 )
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

// Line 410: range 0000000014528878-000000001452A463
__int64 __fastcall HideAndSeekActivity::initHideAndSeekPlay(
        HideAndSeekActivity *const this,
        uint32_t map_id,
        const std::set<unsigned int> *uid_set,
        uint32_t hunter_uid,
        bool is_record_score,
        uint32_t match_id)
{
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  unsigned int v9; // r14d
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v13; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  common::milog::MiLogStream *v16; // rax
  uint32_t SceneComp; // ecx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r14
  common::milog::MiLogStream *v22; // r14
  std::unordered_map<std::string,unsigned int>::mapped_type *v23; // rax
  _DWORD *v24; // rdx
  std::unordered_map<std::string,unsigned int>::mapped_type *v25; // rax
  _DWORD *v26; // rdx
  std::unordered_map<std::string,unsigned int>::mapped_type *v27; // rax
  uint32_t *v28; // rdx
  std::unordered_map<std::string,unsigned int>::mapped_type *v29; // rax
  _DWORD *v30; // rdx
  std::unordered_map<std::string,unsigned int>::mapped_type *v31; // rax
  _DWORD *v32; // rdx
  Scene *v33; // rax
  unsigned __int64 v34; // rax
  common::milog::MiLogStream *v35; // rax
  Scene *v36; // rax
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rdx
  void (__fastcall *v39)(unsigned __int64, unsigned __int64, _QWORD, _QWORD, _QWORD, _QWORD); // r10
  common::milog::MiLogStream *v40; // rax
  Scene *v41; // rax
  Group *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  const std::string *v45; // rax
  common::milog::MiLogStream *v46; // rax
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  const std::string *v50; // rax
  common::milog::MiLogStream *v51; // rax
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v52; // rax
  Scene *v53; // rax
  Group *v54; // rax
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rax
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v57; // rax
  uint32_t v58; // ecx
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // rax
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v61; // rax
  common::milog::MiLogStream *v62; // rax
  common::milog::MiLogStream *v63; // rax
  Scene *v64; // rax
  unsigned __int64 v65; // rax
  bool v66; // r14
  common::milog::MiLogStream *v67; // rax
  __int64 result; // rax
  std::initializer_list<unsigned int> __la; // [rsp+10h] [rbp-230h]
  uint32_t __lb; // [rsp+10h] [rbp-230h]
  uint32_t __lc; // [rsp+10h] [rbp-230h]
  unsigned int (__fastcall *__l)(SceneBlockGroupComp *, std::vector<unsigned int> *, __int64); // [rsp+10h] [rbp-230h]
  unsigned int (__fastcall *v73)(SceneBlockGroupComp *, std::vector<unsigned int> *, __int64, _QWORD); // [rsp+20h] [rbp-220h]
  uint32_t OwnerUid; // [rsp+28h] [rbp-218h]
  bool v75; // [rsp+28h] [rbp-218h]
  int v76; // [rsp+28h] [rbp-218h]
  uint32_t activity_id; // [rsp+28h] [rbp-218h]
  SceneBlockGroupComp *BlockGroupComp; // [rsp+28h] [rbp-218h]
  bool v79; // [rsp+28h] [rbp-218h]
  SceneMultistagePlayComp *MultistagePlayComp; // [rsp+28h] [rbp-218h]
  common::milog::MiLogStream *v81; // [rsp+28h] [rbp-218h]
  common::milog::MiLogStream *v82; // [rsp+28h] [rbp-218h]
  common::milog::MiLogStream *v83; // [rsp+28h] [rbp-218h]
  common::milog::MiLogStream *v84; // [rsp+28h] [rbp-218h]
  SceneMultistagePlayComp *v85; // [rsp+28h] [rbp-218h]
  bool v86; // [rsp+28h] [rbp-218h]
  common::milog::MiLogStream *v87; // [rsp+28h] [rbp-218h]
  common::milog::MiLogStream *v88; // [rsp+28h] [rbp-218h]
  SceneBlockGroupComp *v89; // [rsp+28h] [rbp-218h]
  std::allocator<char> __a; // [rsp+57h] [rbp-1E9h] BYREF
  unsigned int val; // [rsp+58h] [rbp-1E8h] BYREF
  int32_t ret; // [rsp+5Ch] [rbp-1E4h]
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,HideAndSeekMapConfig>,false> __y; // [rsp+60h] [rbp-1E0h] BYREF
  const HideAndSeekMapConfig *map_config; // [rsp+68h] [rbp-1D8h]
  std::vector<unsigned int> v99; // [rsp+70h] [rbp-1D0h] BYREF
  common::milog::MiLogStream v100; // [rsp+90h] [rbp-1B0h] BYREF
  char v101[400]; // [rsp+B0h] [rbp-190h] BYREF

  v6 = (unsigned __int64)v101;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_3(352LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "8 48 4 10 map_id:409 64 8 8 iter:435 96 16 13 world_ptr:416 128 16 17 cur_scene_ptr:428 160 16 1"
                        "3 scene_ptr:442 192 16 13 group_ptr:474 224 16 15 param_table:492 256 56 13 param_map:459";
  *(_QWORD *)(v6 + 16) = HideAndSeekActivity::initHideAndSeekPlay;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234556943;
  v8[536862722] = -218959360;
  v8[536862723] = -219021312;
  v8[536862724] = -219021312;
  v8[536862725] = -219021312;
  v8[536862726] = -219021312;
  v8[536862727] = -219021312;
  v8[536862729] = -218103808;
  v8[536862730] = -202116109;
  *(_DWORD *)(v6 + 48) = map_id;
  if ( *(char *)(((unsigned __int64)&this->is_in_play_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_in_play_);
  if ( this->is_in_play_ )
    goto LABEL_10;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_map_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_map_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( this->cur_map_id_ )
  {
LABEL_10:
    common::milog::MiLogStream::create(
      &v100,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/hide_and_seek_activity.cpp",
      "initHideAndSeekPlay",
      413);
    common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
      &v100,
      (const char (*)[45])"[HIDEANDSEEK] player_ is in hideandseek play");
    common::milog::MiLogStream::~MiLogStream(&v100);
    v9 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurWorld<PlayerWorld>((const PlayerSceneComp *const)(v6 + 96));
    if ( std::operator==<PlayerWorld>((const std::shared_ptr<PlayerWorld> *)(v6 + 96), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v100,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/hide_and_seek_activity.cpp",
        "initHideAndSeekPlay",
        419);
      common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
        &v100,
        (const char (*)[28])"[HIDEANDSEEK] world is null");
      common::milog::MiLogStream::~MiLogStream(&v100);
      v9 = -1;
    }
    else
    {
      v10 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 96));
      OwnerUid = World::getOwnerUid(v10);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( OwnerUid == Player::getUid(this->player_) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Player::getSceneComp(this->player_);
        PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v6 + 128));
        if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v6 + 128), 0LL)
          || (v11 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 128)),
              Scene::getSceneType(v11) != SCENE_WORLD) )
        {
          common::milog::MiLogStream::create(
            &v100,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/hide_and_seek_activity.cpp",
            "initHideAndSeekPlay",
            431);
          v13 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                  &v100,
                  (const char (*)[49])"[HIDEANDSEEK] player is not in world scene, uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
          common::milog::MiLogStream::~MiLogStream(&v100);
          v9 = -1;
        }
        else
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)(v6 + 224));
          v14 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 224));
          *(std::unordered_map<unsigned int,HideAndSeekMapConfig>::const_iterator *)(v6 + 64) = std::unordered_map<unsigned int,HideAndSeekMapConfig>::find(
                                                                                                  &v14->design_config.txt_config_mgr.activity_hide_and_seek_config_mgr.map_config_map,
                                                                                                  (const std::unordered_map<unsigned int,HideAndSeekMapConfig>::key_type *)(v6 + 48));
          std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v6 + 224));
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)(v6 + 224));
          v15 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 224));
          __y._M_cur = std::unordered_map<unsigned int,HideAndSeekMapConfig>::end(&v15->design_config.txt_config_mgr.activity_hide_and_seek_config_mgr.map_config_map)._M_cur;
          v75 = std::__detail::operator==<std::pair<unsigned int const,HideAndSeekMapConfig>,false>(
                  (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,HideAndSeekMapConfig>,false> *)(v6 + 64),
                  &__y);
          std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v6 + 224));
          if ( v75 )
          {
            common::milog::MiLogStream::create(
              &v100,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/activity/hide_and_seek_activity.cpp",
              "initHideAndSeekPlay",
              438);
            v16 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                    &v100,
                    (const char (*)[47])"[HIDEANDSEEK] can not find map config, map_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v6 + 48));
            common::milog::MiLogStream::~MiLogStream(&v100);
            v9 = -1;
          }
          else
          {
            map_config = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,HideAndSeekMapConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,HideAndSeekMapConfig>,false,false> *const)(v6 + 64))->second;
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            SceneComp = (unsigned int)Player::getSceneComp(this->player_);
            if ( *(_BYTE *)(((unsigned __int64)map_config >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)map_config >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            PlayerSceneComp::findScene((const PlayerSceneComp *const)(v6 + 160), SceneComp);
            if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v6 + 160), 0LL) )
            {
              common::milog::MiLogStream::create(
                &v100,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/hide_and_seek_activity.cpp",
                "initHideAndSeekPlay",
                445);
              v18 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                      &v100,
                      (const char (*)[28])"findScene failed, scene_id:");
              v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &map_config->scene_id);
              v20 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v19, (const char (*)[6])" uid:");
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              val = Player::getUid(this->player_);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &val);
              common::milog::MiLogStream::~MiLogStream(&v100);
              v9 = -1;
            }
            else if ( std::set<unsigned int>::size(uid_set) <= 1 || std::set<unsigned int>::size(uid_set) > 4 )
            {
              common::milog::MiLogStream::create(
                &v100,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/player/activity/hide_and_seek_activity.cpp",
                "initHideAndSeekPlay",
                451);
              v22 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                      &v100,
                      (const char (*)[37])"[HIDEANDSEEK] invalid uid_set, size:");
              __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,HideAndSeekMapConfig>,false>::__node_type *)std::set<unsigned int>::size(uid_set);
              common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                v22,
                (const unsigned __int64 *)&__y);
              common::milog::MiLogStream::~MiLogStream(&v100);
              v9 = -1;
            }
            else
            {
              if ( *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3)
                                                                    + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              ++this->play_index_;
              std::unordered_map<std::string,unsigned int>::unordered_map((std::unordered_map<std::string,unsigned int> *const)(v6 + 256));
              v76 = *(_DWORD *)(v6 + 48);
              std::allocator<char>::allocator(&__a);
              std::string::basic_string<std::allocator<char>>((std::string *const)&v100, "map_id", &__a);
              v23 = std::unordered_map<std::string,unsigned int>::operator[](
                      (std::unordered_map<std::string,unsigned int> *const)(v6 + 256),
                      (std::unordered_map<std::string,unsigned int>::key_type *)&v100);
              v24 = v23;
              if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v23 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
              {
                __asan_report_store4(v23);
              }
              *v24 = v76;
              std::string::~string(&v100);
              std::allocator<char>::~allocator(&__a);
              std::allocator<char>::allocator(&__a);
              std::string::basic_string<std::allocator<char>>((std::string *const)&v100, "is_record_score", &__a);
              v25 = std::unordered_map<std::string,unsigned int>::operator[](
                      (std::unordered_map<std::string,unsigned int> *const)(v6 + 256),
                      (std::unordered_map<std::string,unsigned int>::key_type *)&v100);
              v26 = v25;
              if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v25 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
              {
                __asan_report_store4(v25);
              }
              *v26 = is_record_score;
              std::string::~string(&v100);
              std::allocator<char>::~allocator(&__a);
              if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4();
              }
              activity_id = this->activity_id_;
              std::allocator<char>::allocator(&__a);
              std::string::basic_string<std::allocator<char>>((std::string *const)&v100, "activity_id", &__a);
              v27 = std::unordered_map<std::string,unsigned int>::operator[](
                      (std::unordered_map<std::string,unsigned int> *const)(v6 + 256),
                      (std::unordered_map<std::string,unsigned int>::key_type *)&v100);
              v28 = v27;
              if ( *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v27 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) )
              {
                __asan_report_store4(v27);
              }
              *v28 = activity_id;
              std::string::~string(&v100);
              std::allocator<char>::~allocator(&__a);
              std::allocator<char>::allocator(&__a);
              std::string::basic_string<std::allocator<char>>((std::string *const)&v100, "match_id", &__a);
              v29 = std::unordered_map<std::string,unsigned int>::operator[](
                      (std::unordered_map<std::string,unsigned int> *const)(v6 + 256),
                      (std::unordered_map<std::string,unsigned int>::key_type *)&v100);
              v30 = v29;
              if ( *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v29 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) )
              {
                __asan_report_store4(v29);
              }
              *v30 = match_id;
              std::string::~string(&v100);
              std::allocator<char>::~allocator(&__a);
              std::allocator<char>::allocator(&__a);
              std::string::basic_string<std::allocator<char>>((std::string *const)&v100, "hunter_uid", &__a);
              v31 = std::unordered_map<std::string,unsigned int>::operator[](
                      (std::unordered_map<std::string,unsigned int> *const)(v6 + 256),
                      (std::unordered_map<std::string,unsigned int>::key_type *)&v100);
              v32 = v31;
              if ( *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v31 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) )
              {
                __asan_report_store4(v31);
              }
              *v32 = hunter_uid;
              std::string::~string(&v100);
              std::allocator<char>::~allocator(&__a);
              v33 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 160));
              BlockGroupComp = Scene::getBlockGroupComp(v33);
              if ( *(_BYTE *)(((unsigned __int64)BlockGroupComp >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              v34 = (unsigned __int64)(BlockGroupComp->_vptr_SceneCompBase + 12);
              if ( *(_BYTE *)((v34 >> 3) + 0x7FFF8000) )
                v34 = __asan_report_load8();
              v73 = *(unsigned int (__fastcall **)(SceneBlockGroupComp *, std::vector<unsigned int> *, __int64, _QWORD))v34;
              if ( *(_BYTE *)(((unsigned __int64)&map_config->group_id >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)map_config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&map_config->group_id >> 3)
                                                                         + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              val = map_config->group_id;
              __la._M_array = &val;
              __la._M_len = 1LL;
              std::allocator<unsigned int>::allocator((std::allocator<unsigned int> *const)&__a);
              std::vector<unsigned int>::vector(&v99, __la, (const std::vector<unsigned int>::allocator_type *)&__a);
              v79 = v73(BlockGroupComp, &v99, 1LL, 0LL) != 0;
              std::vector<unsigned int>::~vector(&v99);
              std::allocator<unsigned int>::~allocator((std::allocator<unsigned int> *const)&__a);
              if ( v79 )
              {
                common::milog::MiLogStream::create(
                  &v100,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/activity/hide_and_seek_activity.cpp",
                  "initHideAndSeekPlay",
                  468);
                v35 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                        &v100,
                        (const char (*)[47])"[HIDEANDSEEK] registerGroups failed, group_id:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, &map_config->group_id);
                common::milog::MiLogStream::~MiLogStream(&v100);
                v9 = -1;
              }
              else
              {
                ret = 0;
                v36 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 160));
                v37 = (unsigned __int64)Scene::getBlockGroupComp(v36);
                if ( *(_BYTE *)((v37 >> 3) + 0x7FFF8000) )
                  v37 = __asan_report_load8();
                v38 = *(_QWORD *)v37 + 80LL;
                if ( *(_BYTE *)((v38 >> 3) + 0x7FFF8000) )
                  v37 = __asan_report_load8();
                v39 = *(void (__fastcall **)(unsigned __int64, unsigned __int64, _QWORD, _QWORD, _QWORD, _QWORD))v38;
                if ( *(_BYTE *)(((unsigned __int64)&map_config->group_id >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)map_config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&map_config->group_id >> 3)
                                                                           + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                v39(v6 + 192, v37, map_config->group_id, 0LL, 0LL, 0LL);
                if ( std::operator==<Group>((const std::shared_ptr<Group> *)(v6 + 192), 0LL) )
                {
                  common::milog::MiLogStream::create(
                    &v100,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/activity/hide_and_seek_activity.cpp",
                    "initHideAndSeekPlay",
                    477);
                  v40 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                          &v100,
                          (const char (*)[42])"[HIDEANDSEEK] findGroup failed, group_id:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v40, &map_config->group_id);
                  common::milog::MiLogStream::~MiLogStream(&v100);
                  ret = -1;
                }
                else
                {
                  v41 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 160));
                  MultistagePlayComp = Scene::getMultistagePlayComp(v41);
                  if ( *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) != 0
                    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3)
                                                                        + 0x7FFF8000) )
                  {
                    __asan_report_load4();
                  }
                  __lb = this->play_index_;
                  v42 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 192));
                  if ( SceneMultistagePlayComp::initPlay(
                         MultistagePlayComp,
                         v42,
                         __lb,
                         MULTISTAGE_PLAY_TYPE_HIDE_AND_SEEK,
                         (const std::unordered_map<std::string,unsigned int> *)(v6 + 256),
                         uid_set) )
                  {
                    common::milog::MiLogStream::create(
                      &v100,
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/player/activity/hide_and_seek_activity.cpp",
                      "initHideAndSeekPlay",
                      485);
                    v43 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                            &v100,
                            (const char (*)[25])"[HIDEANDSEEK] init play ");
                    v44 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                            v43,
                            &this->play_index_);
                    v81 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                            v44,
                            (const char (*)[10])off_253F5FE0);
                    v45 = proto::MultistagePlayType_Name[abi:cxx11](MULTISTAGE_PLAY_TYPE_HIDE_AND_SEEK);
                    v46 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v81, v45);
                    v82 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                            v46,
                            (const char (*)[10])" failed. ");
                    v47 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 192));
                    operator<<(v82, v47);
                    common::milog::MiLogStream::~MiLogStream(&v100);
                    ret = -1;
                  }
                  else
                  {
                    common::milog::MiLogStream::create(
                      &v100,
                      &common::milog::MiLogDefault::default_log_obj_,
                      1u,
                      "./src/player/activity/hide_and_seek_activity.cpp",
                      "initHideAndSeekPlay",
                      490);
                    v48 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                            &v100,
                            (const char (*)[25])"[HIDEANDSEEK] init play ");
                    v49 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                            v48,
                            &this->play_index_);
                    v83 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                            v49,
                            (const char (*)[10])off_253F5FE0);
                    v50 = proto::MultistagePlayType_Name[abi:cxx11](MULTISTAGE_PLAY_TYPE_HIDE_AND_SEEK);
                    v51 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v83, v50);
                    v84 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
                            v51,
                            (const char (*)[8])" done. ");
                    v52 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 192));
                    operator<<(v84, v52);
                    common::milog::MiLogStream::~MiLogStream(&v100);
                    luabind::adl::object::object((luabind::adl::object *const)(v6 + 224));
                    v53 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 160));
                    v85 = Scene::getMultistagePlayComp(v53);
                    std::allocator<char>::allocator(&__a);
                    std::string::basic_string<std::allocator<char>>((std::string *const)&v100, byte_253893A0, &__a);
                    if ( *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) != 0
                      && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3)
                                                                          + 0x7FFF8000) )
                    {
                      __asan_report_load4();
                    }
                    __lc = this->play_index_;
                    v54 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 192));
                    v86 = SceneMultistagePlayComp::startStage(
                            v85,
                            v54,
                            __lc,
                            0,
                            MULTISTAGE_STAGE_IDLE,
                            (const std::string *)&v100,
                            (const luabind::adl::object *)(v6 + 224)) != 0;
                    std::string::~string(&v100);
                    std::allocator<char>::~allocator(&__a);
                    if ( v86 )
                    {
                      common::milog::MiLogStream::create(
                        &v100,
                        &common::milog::MiLogDefault::default_log_obj_,
                        3u,
                        "./src/player/activity/hide_and_seek_activity.cpp",
                        "initHideAndSeekPlay",
                        496);
                      v55 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                              &v100,
                              (const char (*)[45])"[HIDEANDSEEK] startStage failed @play_index ");
                      v56 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                              v55,
                              &this->play_index_);
                      v87 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
                              v56,
                              (const char (*)[8])" group:");
                      v57 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 192));
                      operator<<(v87, v57);
                      common::milog::MiLogStream::~MiLogStream(&v100);
                      ret = -1;
                    }
                    else
                    {
                      v58 = *(_DWORD *)(v6 + 48);
                      if ( *(_BYTE *)(((unsigned __int64)&this->cur_map_id_ >> 3) + 0x7FFF8000) != 0
                        && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_map_id_ >> 3)
                                                                            + 0x7FFF8000) )
                      {
                        __asan_report_store4(&this->cur_map_id_);
                      }
                      this->cur_map_id_ = v58;
                      if ( *(char *)(((unsigned __int64)&this->is_in_play_ >> 3) + 0x7FFF8000) < 0 )
                        __asan_report_store1(&this->is_in_play_);
                      this->is_in_play_ = 1;
                      common::milog::MiLogStream::create(
                        &v100,
                        &common::milog::MiLogDefault::default_log_obj_,
                        1u,
                        "./src/player/activity/hide_and_seek_activity.cpp",
                        "initHideAndSeekPlay",
                        504);
                      v59 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                              &v100,
                              (const char (*)[43])"[HIDEANDSEEK] startStage done @play_index ");
                      v60 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                              v59,
                              &this->play_index_);
                      v88 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
                              v60,
                              (const char (*)[8])" group:");
                      v61 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 192));
                      v62 = operator<<(v88, v61);
                      v63 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                              v62,
                              (const char (*)[14])", cur_map_id:");
                      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v63, &this->cur_map_id_);
                      common::milog::MiLogStream::~MiLogStream(&v100);
                    }
                    luabind::adl::object::~object((luabind::adl::object *const)(v6 + 224));
                  }
                }
                std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v6 + 192));
                if ( ret )
                {
                  v64 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 160));
                  v89 = Scene::getBlockGroupComp(v64);
                  if ( *(_BYTE *)(((unsigned __int64)v89 >> 3) + 0x7FFF8000) )
                    __asan_report_load8();
                  v65 = (unsigned __int64)(v89->_vptr_SceneCompBase + 13);
                  if ( *(_BYTE *)((v65 >> 3) + 0x7FFF8000) )
                    v65 = __asan_report_load8();
                  __l = *(unsigned int (__fastcall **)(SceneBlockGroupComp *, std::vector<unsigned int> *, __int64))v65;
                  if ( *(_BYTE *)(((unsigned __int64)&map_config->group_id >> 3) + 0x7FFF8000) != 0
                    && (char)((((_BYTE)map_config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&map_config->group_id >> 3)
                                                                             + 0x7FFF8000) )
                  {
                    __asan_report_load4();
                  }
                  val = map_config->group_id;
                  std::allocator<unsigned int>::allocator((std::allocator<unsigned int> *const)&__a);
                  std::vector<unsigned int>::vector(
                    &v99,
                    (std::initializer_list<unsigned int>)__PAIR128__(1LL, &val),
                    (const std::vector<unsigned int>::allocator_type *)&__a);
                  v66 = __l(v89, &v99, 1LL) != 0;
                  std::vector<unsigned int>::~vector(&v99);
                  std::allocator<unsigned int>::~allocator((std::allocator<unsigned int> *const)&__a);
                  if ( v66 )
                  {
                    common::milog::MiLogStream::create(
                      &v100,
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/player/activity/hide_and_seek_activity.cpp",
                      "initHideAndSeekPlay",
                      511);
                    v67 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                            &v100,
                            (const char (*)[35])"unregisterGroups failed, group_id:");
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v67, &map_config->group_id);
                    common::milog::MiLogStream::~MiLogStream(&v100);
                  }
                  v9 = ret;
                }
                else
                {
                  v9 = 0;
                }
              }
              std::unordered_map<std::string,unsigned int>::~unordered_map((std::unordered_map<std::string,unsigned int> *const)(v6 + 256));
            }
            std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v6 + 160));
          }
        }
        std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v6 + 128));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v100,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/hide_and_seek_activity.cpp",
          "initHideAndSeekPlay",
          424);
        common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
          &v100,
          (const char (*)[56])"[HIDEANDSEEK] only owner can start hideandseek in world");
        common::milog::MiLogStream::~MiLogStream(&v100);
        v9 = 9652;
      }
    }
    std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v6 + 96));
  }
  result = v9;
  if ( v101 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8024) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8028) = -168430091;
  }
  return result;
};

// Line 519: range 000000001452A464-000000001452A5B5
void __cdecl HideAndSeekActivity::onHideAndSeekEnd(HideAndSeekActivity *const this)
{
  common::milog::MiLogStream *v1; // rbx
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v3; // [rsp+20h] [rbp-30h] BYREF

  if ( *(char *)(((unsigned __int64)&this->is_in_play_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_in_play_);
  this->is_in_play_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_map_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_map_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cur_map_id_);
  }
  this->cur_map_id_ = 0;
  common::milog::MiLogStream::create(
    &v3,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/hide_and_seek_activity.cpp",
    "onHideAndSeekEnd",
    522);
  v1 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
         &v3,
         (const char (*)[51])"[HIDEANDSEEK] onHideAndSeekEnd finished, host_uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, &val);
  common::milog::MiLogStream::~MiLogStream(&v3);
};

// Line 526: range 000000001452A5B6-000000001452AB9F
HideAndSeekMultistagePlayPtr __cdecl HideAndSeekActivity::findCurrentHideAndSeekPlay(HideAndSeekActivity *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rbx
  HideAndSeekMultistagePlayPtr result; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  bool v9; // r14
  uint32_t SceneComp; // ecx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  Scene *v14; // rax
  uint32_t MultistagePlayComp; // edi
  uint32_t group_id; // edx
  unsigned int val; // [rsp+1Ch] [rbp-C4h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,HideAndSeekMapConfig>,false> __y; // [rsp+20h] [rbp-C0h] BYREF
  const HideAndSeekMapConfig *map_config; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v21; // [rsp+30h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+50h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 8 iter:532 64 16 13 scene_ptr:538";
  *(_QWORD *)(v2 + 16) = HideAndSeekActivity::findCurrentHideAndSeekPlay;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)(v1 + 1116) >> 3) + 0x7FFF8000) != 0
    && (char)(((v1 + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(v1 + 1116) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( *(_DWORD *)(v1 + 1116) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v2 + 64));
    v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    *(std::unordered_map<unsigned int,HideAndSeekMapConfig>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned int,HideAndSeekMapConfig>::find(
                                                                                            &v7->design_config.txt_config_mgr.activity_hide_and_seek_config_mgr.map_config_map,
                                                                                            (const std::unordered_map<unsigned int,HideAndSeekMapConfig>::key_type *)(v1 + 1116));
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 64));
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v2 + 64));
    v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    __y._M_cur = std::unordered_map<unsigned int,HideAndSeekMapConfig>::end(&v8->design_config.txt_config_mgr.activity_hide_and_seek_config_mgr.map_config_map)._M_cur;
    v9 = std::__detail::operator==<std::pair<unsigned int const,HideAndSeekMapConfig>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,HideAndSeekMapConfig>,false> *)(v2 + 32),
           &__y);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 64));
    if ( v9 )
    {
      std::shared_ptr<HideAndSeekMultistagePlay>::shared_ptr(
        (std::shared_ptr<HideAndSeekMultistagePlay> *const)this,
        0LL);
    }
    else
    {
      map_config = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,HideAndSeekMapConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,HideAndSeekMapConfig>,false,false> *const)(v2 + 32))->second;
      if ( *(_BYTE *)(((unsigned __int64)(v1 + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      SceneComp = (unsigned int)Player::getSceneComp(*(Player *const *)(v1 + 24));
      if ( *(_BYTE *)(((unsigned __int64)map_config >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)map_config >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      PlayerSceneComp::findScene((const PlayerSceneComp *const)(v2 + 64), SceneComp);
      if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 64), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/hide_and_seek_activity.cpp",
          "findCurrentHideAndSeekPlay",
          541);
        v11 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                &v21,
                (const char (*)[28])"findScene failed, scene_id:");
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &map_config->scene_id);
        v13 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v12, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)(v1 + 24) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(*(const Player *const *)(v1 + 24));
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        std::shared_ptr<HideAndSeekMultistagePlay>::shared_ptr(
          (std::shared_ptr<HideAndSeekMultistagePlay> *const)this,
          0LL);
      }
      else
      {
        v14 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        MultistagePlayComp = (unsigned int)Scene::getMultistagePlayComp(v14);
        if ( *(_BYTE *)(((unsigned __int64)(v1 + 1108) >> 3) + 0x7FFF8000) != 0
          && (char)(((v1 + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(v1 + 1108) >> 3) + 0x7FFF8000) )
        {
          MultistagePlayComp = v1 + 1108;
          __asan_report_load4();
        }
        if ( *(_BYTE *)(((unsigned __int64)&map_config->group_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)map_config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&map_config->group_id >> 3)
                                                                   + 0x7FFF8000) )
        {
          MultistagePlayComp = (_DWORD)map_config + 4;
          __asan_report_load4();
        }
        group_id = map_config->group_id;
        if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        {
          MultistagePlayComp = (unsigned int)this;
          __asan_report_store16(this);
        }
        SceneMultistagePlayComp::findPlay<HideAndSeekMultistagePlay>(
          (const SceneMultistagePlayComp *const)this,
          MultistagePlayComp,
          group_id);
      }
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 64));
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/hide_and_seek_activity.cpp",
      "findCurrentHideAndSeekPlay",
      529);
    v5 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v21,
           (const char (*)[36])"[HIDEANDSEEK] cur_map_id is 0, uid:");
    if ( *(_BYTE *)(((unsigned __int64)(v1 + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(*(const Player *const *)(v1 + 24));
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    std::shared_ptr<HideAndSeekMultistagePlay>::shared_ptr((std::shared_ptr<HideAndSeekMultistagePlay> *const)this, 0LL);
  }
  if ( v22 == (char *)v2 )
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
  result._M_ptr = (std::__shared_ptr<HideAndSeekMultistagePlay,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 548: range 000000001452ABA0-000000001452AD9F
int32_t __cdecl HideAndSeekActivity::selectHideAndSeekAvatar(
        HideAndSeekActivity *const this,
        uint32_t uid,
        uint32_t avatar_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  int32_t v9; // r14d
  HideAndSeekMultistagePlay *v10; // rax
  int32_t result; // eax
  common::milog::MiLogStream v13; // [rsp+10h] [rbp-90h] BYREF
  char v14[112]; // [rsp+30h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 12 play_ptr:549";
  *(_QWORD *)(v3 + 16) = HideAndSeekActivity::selectHideAndSeekAvatar;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  HideAndSeekActivity::findCurrentHideAndSeekPlay((HideAndSeekActivity *const)(v3 + 32));
  if ( std::operator==<HideAndSeekMultistagePlay>((const std::shared_ptr<HideAndSeekMultistagePlay> *)(v3 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/hide_and_seek_activity.cpp",
      "selectHideAndSeekAvatar",
      552);
    v6 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
           &v13,
           (const char (*)[45])"hideandseek play does not exist, cur_map_id_");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->cur_map_id_);
    v8 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v7, (const char (*)[14])", play_index:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->play_index_);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v9 = -1;
  }
  else
  {
    v10 = std::__shared_ptr_access<HideAndSeekMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HideAndSeekMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    v9 = HideAndSeekMultistagePlay::onSelectHideAndSeekAvatar(v10, uid, avatar_id);
  }
  std::shared_ptr<HideAndSeekMultistagePlay>::~shared_ptr((std::shared_ptr<HideAndSeekMultistagePlay> *const)(v3 + 32));
  result = v9;
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

// Line 559: range 000000001452ADA0-000000001452AF96
int32_t __cdecl HideAndSeekActivity::setHideAndSeekReady(HideAndSeekActivity *const this, uint32_t uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  int32_t v8; // r14d
  HideAndSeekMultistagePlay *v9; // rax
  int32_t result; // eax
  common::milog::MiLogStream v11; // [rsp+10h] [rbp-90h] BYREF
  char v12[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 12 play_ptr:560";
  *(_QWORD *)(v2 + 16) = HideAndSeekActivity::setHideAndSeekReady;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  HideAndSeekActivity::findCurrentHideAndSeekPlay((HideAndSeekActivity *const)(v2 + 32));
  if ( std::operator==<HideAndSeekMultistagePlay>((const std::shared_ptr<HideAndSeekMultistagePlay> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/hide_and_seek_activity.cpp",
      "setHideAndSeekReady",
      563);
    v5 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
           &v11,
           (const char (*)[45])"hideandseek play does not exist, cur_map_id_");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->cur_map_id_);
    v7 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v6, (const char (*)[14])", play_index:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->play_index_);
    common::milog::MiLogStream::~MiLogStream(&v11);
    v8 = -1;
  }
  else
  {
    v9 = std::__shared_ptr_access<HideAndSeekMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HideAndSeekMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    HideAndSeekMultistagePlay::onSetHideAndSeekReady(v9, uid);
    v8 = 0;
  }
  std::shared_ptr<HideAndSeekMultistagePlay>::~shared_ptr((std::shared_ptr<HideAndSeekMultistagePlay> *const)(v2 + 32));
  result = v8;
  if ( v12 == (char *)v2 )
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

// Line 571: range 000000001452AF98-000000001452B17D
int32_t __cdecl HideAndSeekActivity::endHideAndSeekPlayByGm(HideAndSeekActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  int32_t v7; // r14d
  HideAndSeekMultistagePlay *v8; // rax
  int32_t result; // eax
  common::milog::MiLogStream v10; // [rsp+10h] [rbp-90h] BYREF
  char v11[112]; // [rsp+30h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 12 play_ptr:572";
  *(_QWORD *)(v1 + 16) = HideAndSeekActivity::endHideAndSeekPlayByGm;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  HideAndSeekActivity::findCurrentHideAndSeekPlay((HideAndSeekActivity *const)(v1 + 32));
  if ( std::operator==<HideAndSeekMultistagePlay>((const std::shared_ptr<HideAndSeekMultistagePlay> *)(v1 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/hide_and_seek_activity.cpp",
      "endHideAndSeekPlayByGm",
      575);
    v4 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
           &v10,
           (const char (*)[45])"hideandseek play does not exist, cur_map_id_");
    v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->cur_map_id_);
    v6 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v5, (const char (*)[14])", play_index:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->play_index_);
    common::milog::MiLogStream::~MiLogStream(&v10);
    v7 = -1;
  }
  else
  {
    v8 = std::__shared_ptr_access<HideAndSeekMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HideAndSeekMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    HideAndSeekMultistagePlay::settleByGm(v8);
    v7 = 0;
  }
  std::shared_ptr<HideAndSeekMultistagePlay>::~shared_ptr((std::shared_ptr<HideAndSeekMultistagePlay> *const)(v1 + 32));
  result = v7;
  if ( v11 == (char *)v1 )
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

// Line 583: range 000000001452B17E-000000001452B29B
int32_t __cdecl HideAndSeekActivity::canStartHideAndSeek(HideAndSeekActivity *const this)
{
  common::milog::MiLogStream *v1; // rbx
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v4; // [rsp+20h] [rbp-30h] BYREF

  if ( *(char *)(((unsigned __int64)&this->is_play_open_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_play_open_);
  if ( this->is_play_open_ )
    return 0;
  common::milog::MiLogStream::create(
    &v4,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/hide_and_seek_activity.cpp",
    "canStartHideAndSeek",
    586);
  v1 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
         &v4,
         (const char (*)[38])"[HIDEANDSEEK] play not open yet, uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, &val);
  common::milog::MiLogStream::~MiLogStream(&v4);
  return 9160;
};

// Line 593: range 000000001452B29C-000000001452BA22
int32_t __cdecl HideAndSeekActivity::startHideAndSeekByDraft(HideAndSeekActivity *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  int32_t inited; // r14d
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  uint32_t OwnerUid; // r14d
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v8; // rdx
  std::pair<unsigned int,unsigned int> *v9; // rdx
  char v10; // al
  common::milog::MiLogStream *v11; // r14
  common::milog::MiLogStream *v12; // r14
  std::pair<unsigned int,unsigned int> *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  std::pair<unsigned int,unsigned int> *v16; // rax
  std::pair<unsigned int,unsigned int> *v17; // rdx
  int32_t result; // eax
  uint32_t map_id; // [rsp+1Ch] [rbp-154h]
  std::set<unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-150h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+28h] [rbp-148h] BYREF
  std::set<unsigned int> *__for_range; // [rsp+30h] [rbp-140h]
  std::pair<unsigned int,unsigned int> __u; // [rsp+38h] [rbp-138h] BYREF
  common::milog::MiLogStream v24; // [rsp+40h] [rbp-130h] BYREF
  char v25[272]; // [rsp+60h] [rbp-110h] BYREF

  v1 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(224LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "5 48 4 7 uid:617 64 4 15 hider_count:619 80 12 23 optional_hunter_uid:616 112 16 13 world_ptr:59"
                        "4 144 48 11 uid_set:615";
  *(_QWORD *)(v1 + 16) = HideAndSeekActivity::startHideAndSeekByDraft;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = 61956;
  v3[536862722] = 0x4000000;
  v3[536862723] = 62194;
  v3[536862724] = 62194;
  v3[536862726] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurWorld<PlayerWorld>((const PlayerSceneComp *const)(v1 + 112));
  if ( std::operator==<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v1 + 112)) )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/hide_and_seek_activity.cpp",
      "startHideAndSeekByDraft",
      597);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v24,
      (const char (*)[28])"[HIDEANDSEEK] world is null");
    common::milog::MiLogStream::~MiLogStream(&v24);
    inited = -1;
  }
  else
  {
    v5 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 112));
    OwnerUid = World::getOwnerUid(v5);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( OwnerUid == Player::getUid(this->player_) )
    {
      map_id = HideAndSeekActivity::getRandomMapId(this);
      if ( map_id )
      {
        v7 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 112));
        World::getWorldPlayerUidSet((std::set<unsigned int> *)(v1 + 144), v7);
        *(_QWORD *)(v1 + 80) = 0LL;
        *(_DWORD *)(v1 + 88) = 0;
        __for_range = (std::set<unsigned int> *)(v1 + 144);
        __for_begin._M_node = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v1 + 144))._M_node;
        __for_end._M_node = std::set<unsigned int>::end((const std::set<unsigned int> *const)(v1 + 144))._M_node;
        while ( std::operator!=(&__for_begin, &__for_end) )
        {
          v8 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
          if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          *(_DWORD *)(v1 + 48) = *v8;
          *(_DWORD *)(v1 + 64) = HideAndSeekActivity::getPlayerHiderCount(this, *(_DWORD *)(v1 + 48));
          if ( !std::optional<std::pair<unsigned int,unsigned int>>::operator bool((const std::optional<std::pair<unsigned int,unsigned int> > *const)(v1 + 80)) )
            goto LABEL_22;
          v9 = std::optional<std::pair<unsigned int,unsigned int>>::value((std::optional<std::pair<unsigned int,unsigned int> > *const)(v1 + 80));
          if ( *(_BYTE *)(((unsigned __int64)&v9->second >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)v9 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v9->second >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          if ( v9->second < *(_DWORD *)(v1 + 64) )
LABEL_22:
            v10 = 1;
          else
            v10 = 0;
          if ( v10 )
          {
            __u = std::make_pair<unsigned int &,unsigned int &>((unsigned int *)(v1 + 48), (unsigned int *)(v1 + 64));
            std::optional<std::pair<unsigned int,unsigned int>>::operator=<std::pair<unsigned int,unsigned int>>(
              (std::optional<std::pair<unsigned int,unsigned int> > *const)(v1 + 80),
              &__u);
          }
          std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
        }
        if ( !std::optional<std::pair<unsigned int,unsigned int>>::operator bool((const std::optional<std::pair<unsigned int,unsigned int> > *const)(v1 + 80)) )
        {
          common::milog::MiLogStream::create(
            &v24,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/activity/hide_and_seek_activity.cpp",
            "startHideAndSeekByDraft",
            627);
          v11 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                  &v24,
                  (const char (*)[37])"[HIDEANDSEEK] invalid uid_set, size:");
          __u = (std::pair<unsigned int,unsigned int>)std::set<unsigned int>::size((const std::set<unsigned int> *const)(v1 + 144));
          common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v11, (const unsigned __int64 *)&__u);
          common::milog::MiLogStream::~MiLogStream(&v24);
          inited = -1;
        }
        else
        {
          common::milog::MiLogStream::create(
            &v24,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/hide_and_seek_activity.cpp",
            "startHideAndSeekByDraft",
            630);
          v12 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                  &v24,
                  (const char (*)[33])"[HIDEANDSEEK] choose hunter uid:");
          v13 = std::optional<std::pair<unsigned int,unsigned int>>::value((std::optional<std::pair<unsigned int,unsigned int> > *const)(v1 + 80));
          v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)v13);
          v15 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                  v14,
                  (const char (*)[24])", player's hider_count:");
          v16 = std::optional<std::pair<unsigned int,unsigned int>>::value((std::optional<std::pair<unsigned int,unsigned int> > *const)(v1 + 80));
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &v16->second);
          common::milog::MiLogStream::~MiLogStream(&v24);
          v17 = std::optional<std::pair<unsigned int,unsigned int>>::value((std::optional<std::pair<unsigned int,unsigned int> > *const)(v1 + 80));
          if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          inited = HideAndSeekActivity::initHideAndSeekPlay(
                     this,
                     map_id,
                     (const std::set<unsigned int> *)(v1 + 144),
                     v17->first,
                     0,
                     0);
        }
        std::set<unsigned int>::~set((std::set<unsigned int> *const)(v1 + 144));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/hide_and_seek_activity.cpp",
          "startHideAndSeekByDraft",
          610);
        common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
          &v24,
          (const char (*)[42])"[HIDEANDSEEK] player have none unlock map");
        common::milog::MiLogStream::~MiLogStream(&v24);
        inited = 9161;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/hide_and_seek_activity.cpp",
        "startHideAndSeekByDraft",
        602);
      common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
        &v24,
        (const char (*)[58])"[HIDEANDSEEK]   only owner can start hideandseek in world");
      common::milog::MiLogStream::~MiLogStream(&v24);
      inited = 9652;
    }
  }
  std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v1 + 112));
  result = inited;
  if ( v25 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
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

// Line 636: range 000000001452BA24-000000001452BDFA
uint32_t __cdecl HideAndSeekActivity::getRandomMapId(HideAndSeekActivity *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  uint32_t v4; // r14d
  common::milog::MiLogStream *v5; // r14
  common::milog::MiLogStream *v6; // r14
  std::vector<unsigned int>::reference v7; // rdx
  uint32_t result; // eax
  unsigned int val; // [rsp+1Ch] [rbp-F4h] BYREF
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-F0h] BYREF
  char v11[208]; // [rsp+40h] [rbp-D0h] BYREF

  v1 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 24 20 optional_map_vec:641 96 24 18 target_map_vec:647";
  *(_QWORD *)(v1 + 16) = HideAndSeekActivity::getRandomMapId;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234881024;
  v3[536862722] = -218959118;
  v3[536862723] = -218103808;
  v3[536862724] = -202116109;
  if ( std::set<unsigned int>::empty(&this->unlock_map_set_) )
  {
    v4 = 0;
  }
  else
  {
    HideAndSeekActivity::getChosenHideAndSeekMap((std::vector<unsigned int> *)(v1 + 32), this);
    if ( std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v1 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v10,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/hide_and_seek_activity.cpp",
        "getRandomMapId",
        644);
      v5 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
             &v10,
             (const char (*)[46])"[HIDEANDSEEK] optional_map_vec is empty, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
      common::milog::MiLogStream::~MiLogStream(&v10);
      v4 = 0;
    }
    else
    {
      std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v1 + 96));
      common::tools::RandomUtils::randomSelect<unsigned int>(
        (const std::vector<unsigned int> *)(v1 + 32),
        (std::vector<unsigned int> *)(v1 + 96),
        1u);
      if ( std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v1 + 96)) )
      {
        common::milog::MiLogStream::create(
          &v10,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/hide_and_seek_activity.cpp",
          "getRandomMapId",
          651);
        v6 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
               &v10,
               (const char (*)[40])"[HIDEANDSEEK] randomSelect failed, uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
        common::milog::MiLogStream::~MiLogStream(&v10);
        v4 = 0;
      }
      else
      {
        v7 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v1 + 96), 0LL);
        if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        v4 = *v7;
      }
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v1 + 96));
    }
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v1 + 32));
  }
  result = v4;
  if ( v11 == (char *)v1 )
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

// Line 658: range 000000001452BDFC-000000001452C7FE
__int64 __fastcall HideAndSeekActivity::startHideAndSeekByMatch(
        HideAndSeekActivity *const this,
        uint32_t match_id,
        uint32_t map_id,
        const google::protobuf::RepeatedPtrField<proto::MatchPlayer> *match_player_list)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  unsigned int v7; // r14d
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  uint32_t OwnerUid; // r14d
  common::milog::MiLogStream *v11; // rax
  google::protobuf::uint32 v12; // r14d
  std::pair<unsigned int,unsigned int> *v13; // rdx
  char v14; // al
  std::vector<unsigned int> *v15; // r14
  const google::protobuf::RepeatedField<unsigned int> *v16; // rax
  common::milog::MiLogStream *v17; // r14
  common::milog::MiLogStream *v18; // r14
  std::pair<unsigned int,unsigned int> *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // r14
  std::pair<unsigned int,unsigned int> *v22; // rax
  std::pair<unsigned int,unsigned int> *v23; // rdx
  common::milog::MiLogStream *v24; // rax
  HideAndSeekMultistagePlay *v25; // r14
  std::remove_reference<std::unordered_map<unsigned int,std::vector<unsigned int>>&>::type *v26; // rax
  __int64 result; // rax
  unsigned int v30; // [rsp+2Ch] [rbp-204h] BYREF
  std::set<unsigned int>::value_type __x; // [rsp+30h] [rbp-200h] BYREF
  int32_t ret; // [rsp+34h] [rbp-1FCh]
  google::protobuf::RepeatedPtrField<proto::MatchPlayer>::const_iterator __for_begin; // [rsp+38h] [rbp-1F8h] BYREF
  google::protobuf::RepeatedPtrField<proto::MatchPlayer>::const_iterator __for_end; // [rsp+40h] [rbp-1F0h] BYREF
  const google::protobuf::RepeatedPtrField<proto::MatchPlayer> *__for_range; // [rsp+48h] [rbp-1E8h]
  const proto::MatchPlayer *match_player; // [rsp+50h] [rbp-1E0h]
  std::pair<unsigned int,unsigned int> __u; // [rsp+58h] [rbp-1D8h] BYREF
  common::milog::MiLogStream v38; // [rsp+60h] [rbp-1D0h] BYREF
  char v39[432]; // [rsp+80h] [rbp-1B0h] BYREF

  v4 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(384LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "7 32 4 10 map_id:657 48 12 23 optional_hunter_uid:680 80 16 13 world_ptr:659 112 16 12 play_ptr:"
                        "704 144 24 17 map_limit_vec:671 208 48 11 uid_set:679 288 56 21 player_chosen_map:681";
  *(_QWORD *)(v4 + 16) = HideAndSeekActivity::startHideAndSeekByMatch;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61956;
  v6[536862721] = 0x4000000;
  v6[536862722] = 62194;
  v6[536862723] = 62194;
  v6[536862724] = 62194;
  v6[536862725] = -218959360;
  v6[536862726] = 62194;
  v6[536862728] = -218959118;
  v6[536862730] = -218103808;
  v6[536862731] = -202116109;
  *(_DWORD *)(v4 + 32) = map_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurWorld<PlayerWorld>((const PlayerSceneComp *const)(v4 + 80));
  if ( std::operator==<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v4 + 80)) )
  {
    common::milog::MiLogStream::create(
      &v38,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/hide_and_seek_activity.cpp",
      "startHideAndSeekByMatch",
      662);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v38,
      (const char (*)[28])"[HIDEANDSEEK] world is null");
    common::milog::MiLogStream::~MiLogStream(&v38);
    v7 = -1;
  }
  else
  {
    v8 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
    OwnerUid = World::getOwnerUid(v8);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( OwnerUid == Player::getUid(this->player_) )
    {
      std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v4 + 144));
      if ( HideAndSeekActivity::getMapMatchLimitIndexVec(
             this,
             *(_DWORD *)(v4 + 32),
             (std::vector<unsigned int> *)(v4 + 144))
        || !std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v4 + 144)) )
      {
        common::milog::MiLogStream::create(
          &v38,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/hide_and_seek_activity.cpp",
          "startHideAndSeekByMatch",
          674);
        v11 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                &v38,
                (const char (*)[38])"[HIDEANDSEEK] map is limited, map_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v4 + 32));
        common::milog::MiLogStream::~MiLogStream(&v38);
        v7 = 9161;
      }
      else
      {
        std::set<unsigned int>::set((std::set<unsigned int> *const)(v4 + 208));
        *(_QWORD *)(v4 + 48) = 0LL;
        *(_DWORD *)(v4 + 56) = 0;
        std::unordered_map<unsigned int,std::vector<unsigned int>>::unordered_map((std::unordered_map<unsigned int,std::vector<unsigned int>> *const)(v4 + 288));
        __for_range = match_player_list;
        __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::MatchPlayer>::begin(match_player_list).it_;
        __for_end.it_ = google::protobuf::RepeatedPtrField<proto::MatchPlayer>::end(match_player_list).it_;
        while ( google::protobuf::internal::RepeatedPtrIterator<proto::MatchPlayer const>::operator!=(
                  &__for_begin,
                  &__for_end) )
        {
          match_player = google::protobuf::internal::RepeatedPtrIterator<proto::MatchPlayer const>::operator*(&__for_begin);
          __x = proto::MatchPlayer::uid(match_player);
          std::set<unsigned int>::insert((std::set<unsigned int> *const)(v4 + 208), &__x);
          if ( !std::optional<std::pair<unsigned int,unsigned int>>::operator bool((const std::optional<std::pair<unsigned int,unsigned int> > *const)(v4 + 48)) )
            goto LABEL_24;
          v12 = proto::MatchPlayer::hide_and_seek_hider_count(match_player);
          v13 = std::optional<std::pair<unsigned int,unsigned int>>::value((std::optional<std::pair<unsigned int,unsigned int> > *const)(v4 + 48));
          if ( *(_BYTE *)(((unsigned __int64)&v13->second >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)v13 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->second >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          if ( v12 > v13->second )
LABEL_24:
            v14 = 1;
          else
            v14 = 0;
          if ( v14 )
          {
            __x = proto::MatchPlayer::hide_and_seek_hider_count(match_player);
            v30 = proto::MatchPlayer::uid(match_player);
            __u = std::make_pair<unsigned int,unsigned int>(&v30, &__x);
            std::optional<std::pair<unsigned int,unsigned int>>::operator=<std::pair<unsigned int,unsigned int>>(
              (std::optional<std::pair<unsigned int,unsigned int> > *const)(v4 + 48),
              &__u);
          }
          __x = proto::MatchPlayer::uid(match_player);
          v15 = std::unordered_map<unsigned int,std::vector<unsigned int>>::operator[](
                  (std::unordered_map<unsigned int,std::vector<unsigned int>> *const)(v4 + 288),
                  &__x);
          v16 = proto::MatchPlayer::hide_and_seek_chosen_map_list(match_player);
          common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(v16, v15);
          google::protobuf::internal::RepeatedPtrIterator<proto::MatchPlayer const>::operator++(&__for_begin);
        }
        if ( !std::optional<std::pair<unsigned int,unsigned int>>::operator bool((const std::optional<std::pair<unsigned int,unsigned int> > *const)(v4 + 48)) )
        {
          common::milog::MiLogStream::create(
            &v38,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/activity/hide_and_seek_activity.cpp",
            "startHideAndSeekByMatch",
            693);
          v17 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                  &v38,
                  (const char (*)[37])"[HIDEANDSEEK] invalid uid_set, size:");
          __u = (std::pair<unsigned int,unsigned int>)std::set<unsigned int>::size((const std::set<unsigned int> *const)(v4 + 208));
          common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v17, (const unsigned __int64 *)&__u);
          common::milog::MiLogStream::~MiLogStream(&v38);
          v7 = -1;
        }
        else
        {
          common::milog::MiLogStream::create(
            &v38,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/hide_and_seek_activity.cpp",
            "startHideAndSeekByMatch",
            696);
          v18 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                  &v38,
                  (const char (*)[33])"[HIDEANDSEEK] choose hunter uid:");
          v19 = std::optional<std::pair<unsigned int,unsigned int>>::value((std::optional<std::pair<unsigned int,unsigned int> > *const)(v4 + 48));
          v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)v19);
          v21 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                  v20,
                  (const char (*)[24])", player's hider_count:");
          v22 = std::optional<std::pair<unsigned int,unsigned int>>::value((std::optional<std::pair<unsigned int,unsigned int> > *const)(v4 + 48));
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &v22->second);
          common::milog::MiLogStream::~MiLogStream(&v38);
          v23 = std::optional<std::pair<unsigned int,unsigned int>>::value((std::optional<std::pair<unsigned int,unsigned int> > *const)(v4 + 48));
          if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v23 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          ret = HideAndSeekActivity::initHideAndSeekPlay(
                  this,
                  *(_DWORD *)(v4 + 32),
                  (const std::set<unsigned int> *)(v4 + 208),
                  v23->first,
                  1,
                  match_id);
          if ( ret )
          {
            common::milog::MiLogStream::create(
              &v38,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/activity/hide_and_seek_activity.cpp",
              "startHideAndSeekByMatch",
              701);
            v24 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                    &v38,
                    (const char (*)[37])"initHideAndSeekPlay failed, uid_set:");
            common::milog::MiLogStream::operator<<<unsigned int>(v24, (const std::set<unsigned int> *)(v4 + 208));
            common::milog::MiLogStream::~MiLogStream(&v38);
            v7 = ret;
          }
          else
          {
            HideAndSeekActivity::findCurrentHideAndSeekPlay((HideAndSeekActivity *const)(v4 + 112));
            if ( std::operator!=<HideAndSeekMultistagePlay>(
                   0LL,
                   (const std::shared_ptr<HideAndSeekMultistagePlay> *)(v4 + 112)) )
            {
              v25 = std::__shared_ptr_access<HideAndSeekMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HideAndSeekMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 112));
              v26 = std::move<std::unordered_map<unsigned int,std::vector<unsigned int>> &>((std::unordered_map<unsigned int,std::vector<unsigned int>> *)(v4 + 288));
              HideAndSeekMultistagePlay::setPlayerChosenMap(v25, v26);
            }
            v7 = ret;
            std::shared_ptr<HideAndSeekMultistagePlay>::~shared_ptr((std::shared_ptr<HideAndSeekMultistagePlay> *const)(v4 + 112));
          }
        }
        std::unordered_map<unsigned int,std::vector<unsigned int>>::~unordered_map((std::unordered_map<unsigned int,std::vector<unsigned int>> *const)(v4 + 288));
        std::set<unsigned int>::~set((std::set<unsigned int> *const)(v4 + 208));
      }
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v4 + 144));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v38,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/hide_and_seek_activity.cpp",
        "startHideAndSeekByMatch",
        667);
      common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
        &v38,
        (const char (*)[56])"[HIDEANDSEEK] only owner can start hideandseek in world");
      common::milog::MiLogStream::~MiLogStream(&v38);
      v7 = 1201;
    }
  }
  std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v4 + 80));
  result = v7;
  if ( v39 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0LL;
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
  }
  return result;
};

// Line 714: range 000000001452C800-000000001452C823
void __cdecl HideAndSeekActivity::onUnlockAreaEvent(HideAndSeekActivity *const this, const UnlockAreaEvent *event)
{
  BaseActivity::notifyClientData(this, 0);
};

// Line 719: range 000000001452C824-000000001452C847
void __cdecl HideAndSeekActivity::onFinishQuestEvent(HideAndSeekActivity *const this, const FinishQuestEvent *event)
{
  BaseActivity::notifyClientData(this, 0);
};

// Line 724: range 000000001452C848-000000001452CBC4
__int64 __fastcall HideAndSeekActivity::getPlayerHiderCount(HideAndSeekActivity *const this, uint32_t uid)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  uint32_t hider_count; // r14d
  GameserverService *v6; // rax
  unsigned int GameThreadLocal; // eax
  common::milog::MiLogStream *v8; // rax
  Player *v9; // rax
  common::milog::MiLogStream *v10; // rax
  std::__shared_ptr_access<HideAndSeekActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  __int64 result; // rax
  common::milog::MiLogStream v13; // [rsp+10h] [rbp-D0h] BYREF
  char v14[176]; // [rsp+30h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 7 uid:723 64 16 14 player_ptr:729 96 16 16 activity_ptr:735";
  *(_QWORD *)(v2 + 16) = HideAndSeekActivity::getPlayerHiderCount;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  *(_DWORD *)(v2 + 48) = uid;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( Player::getUid(this->player_) == *(_DWORD *)(v2 + 48) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->hider_count_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->hider_count_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    hider_count = this->hider_count_;
  }
  else
  {
    v6 = ServiceBox::findService<GameserverService>();
    GameThreadLocal = (unsigned int)GameserverService::getGameThreadLocal(v6);
    PlayerMgr::findOnlinePlayer((PlayerMgr *const)(v2 + 64), GameThreadLocal + 16);
    if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/hide_and_seek_activity.cpp",
        "getPlayerHiderCount",
        732);
      v8 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
             &v13,
             (const char (*)[58])"[HideAndSeekMultistagePlay] player is not in thread ,uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v13);
      hider_count = 0;
    }
    else
    {
      v9 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      Player::getActivityComp(v9);
      PlayerActivityComp::findOpenningActivity<HideAndSeekActivity>((PlayerActivityComp *const)(v2 + 96));
      if ( std::operator==<HideAndSeekActivity>(0LL, (const std::shared_ptr<HideAndSeekActivity> *)(v2 + 96)) )
      {
        common::milog::MiLogStream::create(
          &v13,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/hide_and_seek_activity.cpp",
          "getPlayerHiderCount",
          738);
        v10 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                &v13,
                (const char (*)[31])"activity is not opening, uid: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v13);
        hider_count = 0;
      }
      else
      {
        v11 = std::__shared_ptr_access<HideAndSeekActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HideAndSeekActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        hider_count = HideAndSeekActivity::getHiderCount(v11);
      }
      std::shared_ptr<HideAndSeekActivity>::~shared_ptr((std::shared_ptr<HideAndSeekActivity> *const)(v2 + 96));
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 64));
  }
  result = hider_count;
  if ( v14 == (char *)v2 )
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

// Line 745: range 000000001452CBC6-000000001452D2CE
int32_t __cdecl HideAndSeekActivity::startHideAndSeekByGm(
        HideAndSeekActivity *const this,
        uint32_t map_id,
        bool is_record_score)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int32_t inited; // r14d
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  uint32_t OwnerUid; // r14d
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v10; // rdx
  std::pair<unsigned int,unsigned int> *v11; // rdx
  char v12; // al
  common::milog::MiLogStream *v13; // r14
  common::milog::MiLogStream *v14; // r14
  std::pair<unsigned int,unsigned int> *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  std::pair<unsigned int,unsigned int> *v18; // rax
  std::pair<unsigned int,unsigned int> *v19; // rdx
  int32_t result; // eax
  std::set<unsigned int>::iterator __for_begin; // [rsp+10h] [rbp-150h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+18h] [rbp-148h] BYREF
  std::set<unsigned int> *__for_range; // [rsp+20h] [rbp-140h]
  std::pair<unsigned int,unsigned int> __u; // [rsp+28h] [rbp-138h] BYREF
  common::milog::MiLogStream v26; // [rsp+30h] [rbp-130h] BYREF
  char v27[272]; // [rsp+50h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 4 7 uid:760 64 4 15 hider_count:762 80 12 23 optional_hunter_uid:759 112 16 13 world_ptr:74"
                        "6 144 48 11 uid_set:758";
  *(_QWORD *)(v3 + 16) = HideAndSeekActivity::startHideAndSeekByGm;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = 61956;
  v5[536862722] = 0x4000000;
  v5[536862723] = 62194;
  v5[536862724] = 62194;
  v5[536862726] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurWorld<PlayerWorld>((const PlayerSceneComp *const)(v3 + 112));
  if ( std::operator==<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v3 + 112)) )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/hide_and_seek_activity.cpp",
      "startHideAndSeekByGm",
      749);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v26,
      (const char (*)[28])"[HIDEANDSEEK] world is null");
    common::milog::MiLogStream::~MiLogStream(&v26);
    inited = -1;
  }
  else
  {
    v7 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
    OwnerUid = World::getOwnerUid(v7);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( OwnerUid == Player::getUid(this->player_) )
    {
      v9 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
      World::getWorldPlayerUidSet((std::set<unsigned int> *)(v3 + 144), v9);
      *(_QWORD *)(v3 + 80) = 0LL;
      *(_DWORD *)(v3 + 88) = 0;
      __for_range = (std::set<unsigned int> *)(v3 + 144);
      __for_begin._M_node = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v3 + 144))._M_node;
      __for_end._M_node = std::set<unsigned int>::end((const std::set<unsigned int> *const)(v3 + 144))._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        v10 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
        if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v3 + 48) = *v10;
        *(_DWORD *)(v3 + 64) = HideAndSeekActivity::getPlayerHiderCount(this, *(_DWORD *)(v3 + 48));
        if ( !std::optional<std::pair<unsigned int,unsigned int>>::operator bool((const std::optional<std::pair<unsigned int,unsigned int> > *const)(v3 + 80)) )
          goto LABEL_20;
        v11 = std::optional<std::pair<unsigned int,unsigned int>>::value((std::optional<std::pair<unsigned int,unsigned int> > *const)(v3 + 80));
        if ( *(_BYTE *)(((unsigned __int64)&v11->second >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)v11 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v11->second >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( v11->second < *(_DWORD *)(v3 + 64) )
LABEL_20:
          v12 = 1;
        else
          v12 = 0;
        if ( v12 )
        {
          __u = std::make_pair<unsigned int &,unsigned int &>((unsigned int *)(v3 + 48), (unsigned int *)(v3 + 64));
          std::optional<std::pair<unsigned int,unsigned int>>::operator=<std::pair<unsigned int,unsigned int>>(
            (std::optional<std::pair<unsigned int,unsigned int> > *const)(v3 + 80),
            &__u);
        }
        std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
      }
      if ( !std::optional<std::pair<unsigned int,unsigned int>>::operator bool((const std::optional<std::pair<unsigned int,unsigned int> > *const)(v3 + 80)) )
      {
        common::milog::MiLogStream::create(
          &v26,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/hide_and_seek_activity.cpp",
          "startHideAndSeekByGm",
          770);
        v13 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                &v26,
                (const char (*)[37])"[HIDEANDSEEK] invalid uid_set, size:");
        __u = (std::pair<unsigned int,unsigned int>)std::set<unsigned int>::size((const std::set<unsigned int> *const)(v3 + 144));
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v13, (const unsigned __int64 *)&__u);
        common::milog::MiLogStream::~MiLogStream(&v26);
        inited = -1;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v26,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/hide_and_seek_activity.cpp",
          "startHideAndSeekByGm",
          773);
        v14 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                &v26,
                (const char (*)[33])"[HIDEANDSEEK] choose hunter uid:");
        v15 = std::optional<std::pair<unsigned int,unsigned int>>::value((std::optional<std::pair<unsigned int,unsigned int> > *const)(v3 + 80));
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)v15);
        v17 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                v16,
                (const char (*)[24])", player's hider_count:");
        v18 = std::optional<std::pair<unsigned int,unsigned int>>::value((std::optional<std::pair<unsigned int,unsigned int> > *const)(v3 + 80));
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &v18->second);
        common::milog::MiLogStream::~MiLogStream(&v26);
        v19 = std::optional<std::pair<unsigned int,unsigned int>>::value((std::optional<std::pair<unsigned int,unsigned int> > *const)(v3 + 80));
        if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        inited = HideAndSeekActivity::initHideAndSeekPlay(
                   this,
                   map_id,
                   (const std::set<unsigned int> *)(v3 + 144),
                   v19->first,
                   is_record_score,
                   0);
      }
      std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 144));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/hide_and_seek_activity.cpp",
        "startHideAndSeekByGm",
        754);
      common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
        &v26,
        (const char (*)[58])"[HIDEANDSEEK]   only owner can start hideandseek in world");
      common::milog::MiLogStream::~MiLogStream(&v26);
      inited = 9652;
    }
  }
  std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v3 + 112));
  result = inited;
  if ( v27 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
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

// Line 778: range 000000001452D2D0-000000001452D4C9
int32_t __cdecl HideAndSeekActivity::endStageByGm(HideAndSeekActivity *const this, bool is_succ)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  int32_t v8; // r14d
  std::__shared_ptr_access<HideAndSeekMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  int32_t result; // eax
  common::milog::MiLogStream v11; // [rsp+10h] [rbp-90h] BYREF
  char v12[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 12 play_ptr:779";
  *(_QWORD *)(v2 + 16) = HideAndSeekActivity::endStageByGm;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  HideAndSeekActivity::findCurrentHideAndSeekPlay((HideAndSeekActivity *const)(v2 + 32));
  if ( std::operator==<HideAndSeekMultistagePlay>((const std::shared_ptr<HideAndSeekMultistagePlay> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/hide_and_seek_activity.cpp",
      "endStageByGm",
      782);
    v5 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
           &v11,
           (const char (*)[45])"hideandseek play does not exist, cur_map_id_");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->cur_map_id_);
    v7 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v6, (const char (*)[14])", play_index:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->play_index_);
    common::milog::MiLogStream::~MiLogStream(&v11);
    v8 = -1;
  }
  else
  {
    v9 = std::__shared_ptr_access<HideAndSeekMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HideAndSeekMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    SceneMultistagePlay::endStage(v9, is_succ);
    v8 = 0;
  }
  std::shared_ptr<HideAndSeekMultistagePlay>::~shared_ptr((std::shared_ptr<HideAndSeekMultistagePlay> *const)(v2 + 32));
  result = v8;
  if ( v12 == (char *)v2 )
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

// Line 790: range 000000001452D4CA-000000001452D5B1
int32_t __cdecl HideAndSeekActivity::setDelayUidByGm(
        HideAndSeekActivity *const this,
        const std::vector<unsigned int> *uid_vec)
{
  const unsigned int *M_current; // r12
  std::vector<unsigned int>::const_iterator v3; // rax
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream v6; // [rsp+10h] [rbp-30h] BYREF

  std::unordered_set<unsigned int>::clear(&this->gm_delay_uid_set_);
  M_current = std::vector<unsigned int>::end(uid_vec)._M_current;
  v3._M_current = std::vector<unsigned int>::begin(uid_vec)._M_current;
  std::unordered_set<unsigned int>::insert<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>>(
    &this->gm_delay_uid_set_,
    v3,
    (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current);
  common::milog::MiLogStream::create(
    &v6,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/hide_and_seek_activity.cpp",
    "setDelayUidByGm",
    793);
  v4 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
         &v6,
         (const char (*)[32])"[HIDEANDSEEK] gm_delay_uid_set:");
  common::milog::MiLogStream::operator<<<unsigned int>(v4, &this->gm_delay_uid_set_);
  common::milog::MiLogStream::~MiLogStream(&v6);
  return 0;
};

// Line 798: range 000000001452D5B2-000000001452DAF4
__int64 __fastcall HideAndSeekActivity::getMapMatchLimitIndexVec(
        HideAndSeekActivity *const this,
        uint32_t map_id,
        std::vector<unsigned int> *limit_vec)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  data::MatchLimitType type; // eax
  uint32_t SceneComp; // ecx
  Scene *v11; // rcx
  PlayerQuestComp *QuestComp; // rcx
  std::vector<data::MatchCond>::const_iterator __for_begin; // [rsp+28h] [rbp-C8h] BYREF
  std::vector<data::MatchCond>::const_iterator __for_end; // [rsp+30h] [rbp-C0h] BYREF
  const data::HideAndSeekMatchExcelConfig *config_ptr; // [rsp+38h] [rbp-B8h]
  const std::vector<data::MatchCond> *__for_range; // [rsp+40h] [rbp-B0h]
  const data::MatchCond *cond; // [rsp+48h] [rbp-A8h]
  common::milog::MiLogStream v19; // [rsp+50h] [rbp-A0h] BYREF
  char v20[128]; // [rsp+70h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 9 index:805 48 4 10 map_id:797 64 16 13 scene_ptr:813";
  *(_QWORD *)(v3 + 16) = HideAndSeekActivity::getMapMatchLimitIndexVec;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = map_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 64));
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  config_ptr = data::ActivityHideAndSeekConfigMgrBase::findHideAndSeekMatchExcelConfig(
                 &v6->design_config.txt_config_mgr.activity_hide_and_seek_config_mgr,
                 *(_DWORD *)(v3 + 48));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 64));
  if ( !config_ptr )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/hide_and_seek_activity.cpp",
      "getMapMatchLimitIndexVec",
      802);
    v7 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
           &v19,
           (const char (*)[62])"[HIDEANDSEEK] findHideAndSeekMatchExcelConfig failed, map_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v19);
    result = 0xFFFFFFFFLL;
    goto LABEL_33;
  }
  *(_DWORD *)(v3 + 32) = 0;
  __for_range = &config_ptr->cond;
  __for_begin._M_current = std::vector<data::MatchCond>::begin(&config_ptr->cond)._M_current;
  __for_end._M_current = std::vector<data::MatchCond>::end(&config_ptr->cond)._M_current;
  while ( __gnu_cxx::operator!=<data::MatchCond const*,std::vector<data::MatchCond>>(&__for_begin, &__for_end) )
  {
    cond = __gnu_cxx::__normal_iterator<data::MatchCond const*,std::vector<data::MatchCond>>::operator*(&__for_begin);
    ++*(_DWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    type = cond->type;
    if ( type == MATCH_LIMIT_TYPE_QUEST_FINISH )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      QuestComp = Player::getQuestComp(this->player_);
      if ( *(_BYTE *)(((unsigned __int64)&cond->param >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)cond + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cond->param >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( PlayerQuestComp::getQuestState(QuestComp, cond->param) != QUEST_STATE_FINISHED )
        goto LABEL_29;
    }
    else
    {
      if ( type > MATCH_LIMIT_TYPE_QUEST_FINISH )
        goto LABEL_29;
      if ( type == MATCH_LIMIT_TYPE_NONE )
        goto LABEL_31;
      if ( type != MATCH_LIMIT_TYPE_MAP_UNLOCK )
      {
LABEL_29:
        std::vector<unsigned int>::push_back(limit_vec, (const std::vector<unsigned int>::value_type *)(v3 + 32));
        goto LABEL_31;
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      SceneComp = (unsigned int)Player::getSceneComp(this->player_);
      if ( *(_BYTE *)(((unsigned __int64)&config_ptr->scene_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config_ptr->scene_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      PlayerSceneComp::findScene((const PlayerSceneComp *const)(v3 + 64), SceneComp);
      if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 64)) )
        goto LABEL_22;
      v11 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&cond->param >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)cond + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cond->param >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( !Scene::isAreaUnlocked(v11, cond->param) )
LABEL_22:
        std::vector<unsigned int>::push_back(limit_vec, (const std::vector<unsigned int>::value_type *)(v3 + 32));
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 64));
    }
LABEL_31:
    __gnu_cxx::__normal_iterator<data::MatchCond const*,std::vector<data::MatchCond>>::operator++(&__for_begin);
  }
  result = 0LL;
LABEL_33:
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

// Line 850: range 000000001452DAF6-000000001452DB6C
void __cdecl HideAndSeekActivity::openAllMapByGm(HideAndSeekActivity *const this)
{
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr M_node; // r12
  std::set<unsigned int>::iterator v2; // rax
  const HideAndSeekDetailConfig *config_ptr; // [rsp+18h] [rbp-18h]

  config_ptr = HideAndSeekActivity::getDetailConfig(this);
  if ( config_ptr )
  {
    M_node = std::set<unsigned int>::end(&config_ptr->map_set)._M_node;
    v2._M_node = std::set<unsigned int>::begin(&config_ptr->map_set)._M_node;
    std::set<unsigned int>::insert<std::_Rb_tree_const_iterator<unsigned int>>(
      &this->unlock_map_set_,
      v2,
      (std::_Rb_tree_const_iterator<unsigned int>)M_node);
    BaseActivity::notifyClientData(this, 0);
  }
};

// Line 861: range 000000001452DB6E-000000001452DC02
const HideAndSeekDetailConfig *__cdecl HideAndSeekActivity::getDetailConfig(const HideAndSeekActivity *const this)
{
  ActivityHideAndSeekExcelConfigMgr *activity_hide_and_seek_config_mgr; // [rsp+18h] [rbp-18h]
  std::shared_ptr<Config> v3; // [rsp+20h] [rbp-10h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v3);
  activity_hide_and_seek_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v3)->design_config.txt_config_mgr.activity_hide_and_seek_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v3);
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return ActivityHideAndSeekExcelConfigMgr::getActivityDetailConfig(
           activity_hide_and_seek_config_mgr,
           this->activity_id_);
};
