// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/delivery_activity.cpp

// Line 28: range 00000000165B3DDC-00000000165B3DFA
int32_t __cdecl DeliveryActivity::init(DeliveryActivity *const this)
{
  DeliveryActivity::initEventObserver(this);
  return 0;
};

// Line 34: range 00000000165B3DFC-00000000165B3EA2
void __cdecl DeliveryActivity::onLogin(DeliveryActivity *const this)
{
  DeliveryActivity::refreshDayIndexByCurrentTime(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( !Player::isRelogin(this->player_)
    && BaseActivity::isOpening((const BaseActivity *const)this, 0)
    && !BaseActivity::isSettled((const BaseActivity *const)this) )
  {
    DeliveryActivity::addDeliveryWatchers(this);
  }
  BaseActivity::onLogin((BaseActivity *const)this);
};

// Line 47: range 00000000165B3EA4-00000000165B3ED6
void __cdecl DeliveryActivity::onStart(DeliveryActivity *const this)
{
  DeliveryActivity::initEventObserver(this);
  DeliveryActivity::refreshDayIndexByCurrentTime(this);
  DeliveryActivity::addDeliveryWatchers(this);
};

// Line 54: range 00000000165B3ED8-00000000165B3F22
void __cdecl DeliveryActivity::onSettle(DeliveryActivity *const this)
{
  std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::reset(&this->watcher_progress_obs_wtr_);
  std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::reset(&this->finish_parent_quest_obs_wtr_);
  DeliveryActivity::resetDailyDeliveryData(this);
  DeliveryActivity::delDeliveryWatchers(this);
};

// Line 62: range 00000000165B3F24-00000000165B3F3E
void __cdecl DeliveryActivity::onRefresh(DeliveryActivity *const this)
{
  DeliveryActivity::refreshDayIndexByCurrentTime(this);
};

// Line 67: range 00000000165B3F40-00000000165B42B2
void __cdecl DeliveryActivity::initEventObserver(DeliveryActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::weak_ptr<DeliveryActivity> *EventComp; // [rsp+10h] [rbp-D0h]
  std::weak_ptr<DeliveryActivity> *p_this_wtr; // [rsp+20h] [rbp-C0h]
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
  *(_QWORD *)(v1 + 8) = "2 32 16 11 this_ptr:68 64 16 11 this_wtr:69";
  *(_QWORD *)(v1 + 16) = DeliveryActivity::initEventObserver;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  std::enable_shared_from_this<BaseActivity>::shared_from_this(&v7);
  std::dynamic_pointer_cast<DeliveryActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)(v1 + 32));
  std::shared_ptr<BaseActivity>::~shared_ptr((std::shared_ptr<BaseActivity> *const)&v7);
  std::weak_ptr<DeliveryActivity>::weak_ptr<DeliveryActivity,void>(
    (std::weak_ptr<DeliveryActivity> *const)(v1 + 64),
    (const std::shared_ptr<DeliveryActivity> *)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  p_this_wtr = (std::weak_ptr<DeliveryActivity> *)Player::getEventComp(this->player_);
  std::weak_ptr<DeliveryActivity>::weak_ptr(
    (std::weak_ptr<DeliveryActivity> *const)&v7,
    (const std::weak_ptr<DeliveryActivity> *)(v1 + 64));
  PlayerEventComp::registerObserver<DeliveryActivity,WatcherProgressUpdateEvent>(
    (PlayerEventComp *const)&__r,
    p_this_wtr,
    (void (*)(DeliveryActivity *, const WatcherProgressUpdateEvent *))&v7);
  std::weak_ptr<Observer>::operator=(&this->watcher_progress_obs_wtr_, &__r);
  std::weak_ptr<Observer>::~weak_ptr(&__r);
  std::weak_ptr<DeliveryActivity>::~weak_ptr((std::weak_ptr<DeliveryActivity> *const)&v7);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  EventComp = (std::weak_ptr<DeliveryActivity> *)Player::getEventComp(this->player_);
  std::weak_ptr<DeliveryActivity>::weak_ptr(
    (std::weak_ptr<DeliveryActivity> *const)&__r,
    (const std::weak_ptr<DeliveryActivity> *)(v1 + 64));
  PlayerEventComp::registerObserver<DeliveryActivity,FinishParentQuestEvent>(
    (PlayerEventComp *const)&v7,
    EventComp,
    (void (*)(DeliveryActivity *, const FinishParentQuestEvent *))&__r);
  std::weak_ptr<Observer>::operator=(&this->finish_parent_quest_obs_wtr_, (std::weak_ptr<Observer> *)&v7);
  std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v7);
  std::weak_ptr<DeliveryActivity>::~weak_ptr((std::weak_ptr<DeliveryActivity> *const)&__r);
  std::weak_ptr<DeliveryActivity>::~weak_ptr((std::weak_ptr<DeliveryActivity> *const)(v1 + 64));
  std::shared_ptr<DeliveryActivity>::~shared_ptr((std::shared_ptr<DeliveryActivity> *const)(v1 + 32));
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

// Line 75: range 00000000165B42B4-00000000165B44D8
int32_t __cdecl DeliveryActivity::fromScheduleBin(DeliveryActivity *const this, const proto::ActivityScheduleBin *bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  uint32_t v5; // ecx
  bool is_taken_daily_reward; // dl
  int32_t result; // eax
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin; // [rsp+10h] [rbp-80h]
  const proto::DeliveryScheduleBin *delivery_bin; // [rsp+18h] [rbp-78h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range; // [rsp+20h] [rbp-70h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-68h]
  char v12[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 14 quest_index:79";
  *(_QWORD *)(v2 + 16) = DeliveryActivity::fromScheduleBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  delivery_bin = proto::ActivityScheduleBin::delivery_bin(bin);
  v5 = proto::DeliveryScheduleBin::day_index(delivery_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->day_index_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->day_index_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->day_index_);
  }
  this->day_index_ = v5;
  is_taken_daily_reward = proto::DeliveryScheduleBin::is_taken_daily_reward(delivery_bin);
  if ( *(char *)(((unsigned __int64)&this->is_taken_daily_reward_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_taken_daily_reward_);
  this->is_taken_daily_reward_ = is_taken_daily_reward;
  __for_range = proto::DeliveryScheduleBin::cur_day_finished_delivery_quest_index_list(delivery_bin);
  __for_begin = google::protobuf::RepeatedField<unsigned int>::begin(__for_range);
  __for_end = google::protobuf::RepeatedField<unsigned int>::end(__for_range);
  while ( __for_begin != __for_end )
  {
    if ( *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)__for_begin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 32) = *__for_begin;
    std::unordered_set<unsigned int>::insert(
      &this->cur_day_finished_delivery_quest_index_set_,
      (const std::unordered_set<unsigned int>::value_type *)(v2 + 32));
    ++__for_begin;
  }
  result = 0;
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

// Line 87: range 00000000165B44DA-00000000165B4658
int32_t __cdecl DeliveryActivity::toScheduleBin(const DeliveryActivity *const this, proto::ActivityScheduleBin *bin)
{
  google::protobuf::uint32 *v2; // rdx
  std::unordered_set<unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-20h] BYREF
  std::unordered_set<unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-18h] BYREF
  proto::DeliveryScheduleBin *delivery_bin; // [rsp+30h] [rbp-10h]
  const std::unordered_set<unsigned int> *__for_range; // [rsp+38h] [rbp-8h]

  delivery_bin = proto::ActivityScheduleBin::mutable_delivery_bin(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->day_index_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->day_index_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::DeliveryScheduleBin::set_day_index(delivery_bin, this->day_index_);
  if ( *(char *)(((unsigned __int64)&this->is_taken_daily_reward_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_taken_daily_reward_);
  proto::DeliveryScheduleBin::set_is_taken_daily_reward(delivery_bin, this->is_taken_daily_reward_);
  __for_range = &this->cur_day_finished_delivery_quest_index_set_;
  __for_begin._M_cur = std::unordered_set<unsigned int>::begin(&this->cur_day_finished_delivery_quest_index_set_)._M_cur;
  __for_end._M_cur = std::unordered_set<unsigned int>::end(&this->cur_day_finished_delivery_quest_index_set_)._M_cur;
  while ( std::__detail::operator!=<unsigned int,false>(&__for_begin, &__for_end) )
  {
    v2 = (google::protobuf::uint32 *)std::__detail::_Node_const_iterator<unsigned int,true,false>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::DeliveryScheduleBin::add_cur_day_finished_delivery_quest_index_list(delivery_bin, *v2);
    std::__detail::_Node_const_iterator<unsigned int,true,false>::operator++(&__for_begin);
  }
  return 0;
};

// Line 100: range 00000000165B465A-00000000165B48BB
int32_t __cdecl DeliveryActivity::toClient(DeliveryActivity *const this, proto::ActivityInfo *activity_info)
{
  common::milog::MiLogStream *v2; // rbx
  uint32_t *v4; // rdx
  unsigned int val; // [rsp+18h] [rbp-58h] BYREF
  uint32_t quest_index; // [rsp+1Ch] [rbp-54h]
  std::unordered_set<unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-50h] BYREF
  std::unordered_set<unsigned int>::iterator __for_end; // [rsp+28h] [rbp-48h] BYREF
  proto::DeliveryActivityDetailInfo *delivery_info; // [rsp+30h] [rbp-40h]
  std::unordered_set<unsigned int> *__for_range; // [rsp+38h] [rbp-38h]
  common::milog::MiLogStream v11; // [rsp+40h] [rbp-30h] BYREF

  if ( BaseActivity::toClient((BaseActivity *const)this, activity_info) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/delivery_activity.cpp",
      "toClient",
      103);
    v2 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v11,
           (const char (*)[36])"BaseActivity::toClient fails, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
    common::milog::MiLogStream::~MiLogStream(&v11);
    return -1;
  }
  else
  {
    delivery_info = proto::ActivityInfo::mutable_delivery_info(activity_info);
    if ( *(_BYTE *)(((unsigned __int64)&this->day_index_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->day_index_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::DeliveryActivityDetailInfo::set_day_index(delivery_info, this->day_index_);
    __for_range = &this->cur_day_finished_delivery_quest_index_set_;
    __for_begin._M_cur = std::unordered_set<unsigned int>::begin(&this->cur_day_finished_delivery_quest_index_set_)._M_cur;
    __for_end._M_cur = std::unordered_set<unsigned int>::end(&this->cur_day_finished_delivery_quest_index_set_)._M_cur;
    while ( std::__detail::operator!=<unsigned int,false>(&__for_begin, &__for_end) )
    {
      v4 = (uint32_t *)std::__detail::_Node_iterator<unsigned int,true,false>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      quest_index = *v4;
      proto::DeliveryActivityDetailInfo::add_finished_delivery_quest_index(delivery_info, quest_index);
      std::__detail::_Node_iterator<unsigned int,true,false>::operator++(&__for_begin);
    }
    if ( *(char *)(((unsigned __int64)&this->is_taken_daily_reward_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->is_taken_daily_reward_);
    proto::DeliveryActivityDetailInfo::set_is_taken_reward(delivery_info, this->is_taken_daily_reward_);
    return 0;
  }
};

// Line 117: range 00000000165B48BC-00000000165B4DA6
void __cdecl DeliveryActivity::refreshDayIndexByCurrentTime(DeliveryActivity *const this)
{
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rcx
  ActivityDeliveryExcelConfigMgr *p_activity_delivery_config_mgr; // rcx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  time_t v9; // rdx
  time_t Now; // rax
  uint32_t time_offset_sec; // [rsp+1Ch] [rbp-64h]
  uint32_t start_time_day; // [rsp+20h] [rbp-60h]
  uint32_t new_day_index; // [rsp+28h] [rbp-58h]
  uint32_t old_day_index; // [rsp+2Ch] [rbp-54h]
  const data::NewActivityScheduleExcelConfig *schedule_config_ptr; // [rsp+30h] [rbp-50h]
  const data::ActivityDeliveryExcelConfig *activity_delivery_config_ptr; // [rsp+38h] [rbp-48h]
  std::shared_ptr<Config> v17; // [rsp+40h] [rbp-40h] BYREF
  common::milog::MiLogStream v18; // [rsp+50h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v17);
  p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17)->design_config.txt_config_mgr.new_activity_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  schedule_config_ptr = data::NewActivityExcelConfigMgrBase::findNewActivityScheduleExcelConfig(
                          p_new_activity_config_mgr,
                          this->schedule_id_);
  std::shared_ptr<Config>::~shared_ptr(&v17);
  if ( !schedule_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/delivery_activity.cpp",
      "refreshDayIndexByCurrentTime",
      121);
    v2 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
           &v18,
           (const char (*)[51])"findActivityScheduleExcelConfig fail, schedule_id:");
    v3 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &this->schedule_id_);
    v4 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v3, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_6:
    operator<<(v4, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v18);
    return;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v17);
  p_activity_delivery_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17)->design_config.txt_config_mgr.activity_delivery_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  activity_delivery_config_ptr = data::ActivityDeliveryExcelConfigMgrBase::findActivityDeliveryExcelConfig(
                                   p_activity_delivery_config_mgr,
                                   this->schedule_id_);
  std::shared_ptr<Config>::~shared_ptr(&v17);
  if ( !activity_delivery_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/delivery_activity.cpp",
      "refreshDayIndexByCurrentTime",
      128);
    v6 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
           &v18,
           (const char (*)[51])"findActivityDeliveryExcelConfig fail, schedule_id:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->schedule_id_);
    v4 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v7, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_6;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v17);
  v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17);
  time_offset_sec = ConstValueExcelConfigMgr::getTimeOffsetSec(&v8->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v17);
  v9 = time_offset_sec;
  if ( *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->begin_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->begin_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  start_time_day = common::tools::TimeUtils::getTimeDay(schedule_config_ptr->begin_time, v9);
  Now = common::tools::TimeUtils::getNow();
  new_day_index = common::tools::TimeUtils::getTimeDay(Now, time_offset_sec) - start_time_day + 1;
  if ( new_day_index <= std::vector<unsigned int>::size(&activity_delivery_config_ptr->daily_config_id_list) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->day_index_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->day_index_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    old_day_index = this->day_index_;
    this->day_index_ = new_day_index;
    if ( old_day_index != this->day_index_ )
      DeliveryActivity::resetDailyDeliveryData(this);
    if ( *(_BYTE *)(((unsigned __int64)&this->is_play_open_anim_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 42) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_play_open_anim_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(&this->is_play_open_anim_);
    }
    this->is_play_open_anim_ = 0;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->day_index_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->day_index_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&this->day_index_);
    }
    this->day_index_ = 0;
  }
};

// Line 153: range 00000000165B4DA8-00000000165B5314
void __cdecl DeliveryActivity::onFinishParentQuestEvent(
        DeliveryActivity *const this,
        const FinishParentQuestEvent *event)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const ActivityDeliveryExcelConfigMgr *p_activity_delivery_config_mgr; // rdi
  uint32_t day_index; // ecx
  const unsigned int *M_current; // r15
  std::vector<unsigned int>::const_iterator v9; // rax
  unsigned int *v10; // r8
  const unsigned int *v11; // r9
  PlayerEventComp *EventComp; // r14
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > __rhs; // [rsp+20h] [rbp-110h] BYREF
  const std::vector<unsigned int> *parent_quest_id_vec_ptr; // [rsp+28h] [rbp-108h]
  std::shared_ptr<Config> v16; // [rsp+30h] [rbp-100h] BYREF
  char v17[240]; // [rsp+40h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 15 quest_index:170 64 8 8 iter:164 96 16 13 event_ptr:179 128 32 10 notify:171";
  *(_QWORD *)(v2 + 16) = DeliveryActivity::onFinishParentQuestEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -219021312;
  v4[536862725] = -202116109;
  if ( !BaseActivity::isFinished((const BaseActivity *const)this)
    && !BaseActivity::isSettled((const BaseActivity *const)this) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v16);
    p_activity_delivery_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v16)->design_config.txt_config_mgr.activity_delivery_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->day_index_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->day_index_ >> 3) + 0x7FFF8000) )
    {
      p_activity_delivery_config_mgr = (const ActivityDeliveryExcelConfigMgr *)&this->day_index_;
      __asan_report_load4();
    }
    day_index = this->day_index_;
    if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
    {
      p_activity_delivery_config_mgr = (const ActivityDeliveryExcelConfigMgr *)&this->schedule_id_;
      __asan_report_load4();
    }
    parent_quest_id_vec_ptr = ActivityDeliveryExcelConfigMgr::findDeliveryParentQuestIdVecByDayIndex(
                                p_activity_delivery_config_mgr,
                                this->schedule_id_,
                                day_index);
    std::shared_ptr<Config>::~shared_ptr(&v16);
    if ( parent_quest_id_vec_ptr )
    {
      M_current = std::vector<unsigned int>::end(parent_quest_id_vec_ptr)._M_current;
      v9._M_current = std::vector<unsigned int>::begin(parent_quest_id_vec_ptr)._M_current;
      *(__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 64) = std::find<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,unsigned int>(
                                                                                                     v9,
                                                                                                     (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current,
                                                                                                     &event->parent_quest_id);
      __rhs._M_current = std::vector<unsigned int>::end(parent_quest_id_vec_ptr)._M_current;
      if ( !__gnu_cxx::operator==<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 64),
              &__rhs) )
      {
        __rhs._M_current = std::vector<unsigned int>::begin(parent_quest_id_vec_ptr)._M_current;
        *(_DWORD *)(v2 + 48) = __gnu_cxx::operator-<unsigned int const*,std::vector<unsigned int>>(
                                 (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 64),
                                 &__rhs);
        proto::FinishDeliveryNotify::FinishDeliveryNotify((proto::FinishDeliveryNotify *const)(v2 + 128));
        if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto::FinishDeliveryNotify::set_schedule_id((proto::FinishDeliveryNotify *const)(v2 + 128), this->schedule_id_);
        if ( *(_BYTE *)(((unsigned __int64)&this->day_index_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->day_index_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto::FinishDeliveryNotify::set_day_index((proto::FinishDeliveryNotify *const)(v2 + 128), this->day_index_);
        proto::FinishDeliveryNotify::set_finished_quest_index(
          (proto::FinishDeliveryNotify *const)(v2 + 128),
          *(_DWORD *)(v2 + 48));
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 128));
        std::unordered_set<unsigned int>::insert(
          &this->cur_day_finished_delivery_quest_index_set_,
          (const std::unordered_set<unsigned int>::value_type *)(v2 + 48));
        common::tools::perf::make_shared<DeliveryFinishEvent,unsigned int &,unsigned int &,unsigned int const&>(
          (unsigned int *)(v2 + 96),
          &this->schedule_id_,
          &this->day_index_,
          &event->parent_quest_id,
          v10,
          v11);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        EventComp = Player::getEventComp(this->player_);
        std::shared_ptr<BaseEvent>::shared_ptr<DeliveryFinishEvent,void>(
          (std::shared_ptr<BaseEvent> *const)&v16,
          (const std::shared_ptr<DeliveryFinishEvent> *)(v2 + 96));
        PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v16);
        std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v16);
        std::shared_ptr<DeliveryFinishEvent>::~shared_ptr((std::shared_ptr<DeliveryFinishEvent> *const)(v2 + 96));
        proto::FinishDeliveryNotify::~FinishDeliveryNotify((proto::FinishDeliveryNotify *const)(v2 + 128));
      }
    }
  }
  if ( v17 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 184: range 00000000165B5316-00000000165B5376
void __cdecl DeliveryActivity::resetDailyDeliveryData(DeliveryActivity *const this)
{
  std::unordered_set<unsigned int>::clear(&this->cur_day_finished_delivery_quest_index_set_);
  if ( *(char *)(((unsigned __int64)&this->is_taken_daily_reward_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_taken_daily_reward_);
  this->is_taken_daily_reward_ = 0;
};

// Line 190: range 00000000165B5378-00000000165B5C69
// local variable allocation has failed, the output may be wrong!
void __cdecl DeliveryActivity::onWatcherProgressUpdate(
        DeliveryActivity *const this,
        const WatcherProgressUpdateEvent *event)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  bool v9; // r14
  common::milog::MiLogStream *v10; // rax
  ActivityDeliveryExcelConfigMgr *p_activity_delivery_config_mgr; // rdi
  uint32_t v12; // ecx
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v13; // rdx
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false,false>::pointer v14; // rax
  PlayerEventComp *EventComp; // r14
  std::__shared_ptr_access<proto_log::PlayerLogBodyDeliveryWatcherTriggerFailed,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyDeliveryWatcherTriggerFailed,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyDeliveryWatcherTriggerFailed,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyDeliveryWatcherTriggerFailed,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rcx
  Player *v21; // r14
  std::string eventa; // [rsp+0h] [rbp-150h] OVERLAPPED BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-130h] BYREF
  const std::vector<unsigned int> *quest_id_vec_ptr; // [rsp+28h] [rbp-128h]
  PlayerQuestComp *quest_comp; // [rsp+30h] [rbp-120h]
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-118h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+40h] [rbp-110h] BYREF
  std::shared_ptr<google::protobuf::Message> v28; // [rsp+50h] [rbp-100h] BYREF
  std::string v29; // [rsp+60h] [rbp-F0h] BYREF
  char v30[208]; // [rsp+80h] [rbp-D0h] BYREF

  eventa._M_string_length = (std::string::size_type)this;
  eventa._M_dataplus._M_p = (std::string::pointer)event;
  v2 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 1 10 holder:191 48 4 12 quest_id:212 64 8 8 iter:198 96 16 13 event_ptr:217 128 16 11 log_ptr:220";
  *(_QWORD *)(v2 + 16) = DeliveryActivity::onWatcherProgressUpdate;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556927;
  v4[536862722] = -218959360;
  v4[536862723] = -219021312;
  v4[536862724] = -202178560;
  if ( *(_BYTE *)(((eventa._M_string_length + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Player::getBasicComp(*(Player *const *)(eventa._M_string_length + 24));
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v29, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32), 0xBB8u, eventa);
  std::string::~string(&v29);
  if ( !BaseActivity::isFinished((const BaseActivity *const)eventa._M_string_length)
    && !BaseActivity::isSettled((const BaseActivity *const)eventa._M_string_length) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v28);
    v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v28);
    *(std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::find(&v7->design_config.txt_config_mgr.activity_delivery_config_mgr.daily_delivery_watcher_quest_map, (const std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::key_type *)eventa._M_dataplus._M_p + 6);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v28);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v28);
    v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v28);
    __for_end._M_current = (const unsigned int *)std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::end(&v8->design_config.txt_config_mgr.activity_delivery_config_mgr.daily_delivery_watcher_quest_map)._M_cur;
    v9 = std::__detail::operator==<std::pair<unsigned int const,std::unordered_set<unsigned int>>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false> *)&__for_end);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v28);
    if ( v9 )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v29,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/delivery_activity.cpp",
        "onWatcherProgressUpdate",
        201);
      v10 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
              (common::milog::MiLogStream *const)&v29,
              (const char (*)[57])"[Delivery] daily_delivery_watcher_quest_map can't find: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        v10,
        (const unsigned int *)eventa._M_dataplus._M_p + 6);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v29);
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v28);
      p_activity_delivery_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v28)->design_config.txt_config_mgr.activity_delivery_config_mgr;
      if ( *(_BYTE *)(((eventa._M_string_length + 932) >> 3) + 0x7FFF8000) != 0
        && (char)(((LOBYTE(eventa._M_string_length) - 92) & 7) + 3) >= *(_BYTE *)(((eventa._M_string_length + 932) >> 3)
                                                                                + 0x7FFF8000) )
      {
        p_activity_delivery_config_mgr = (ActivityDeliveryExcelConfigMgr *)(eventa._M_string_length + 932);
        __asan_report_load4();
      }
      v12 = *(_DWORD *)(eventa._M_string_length + 932);
      if ( *(_BYTE *)(((eventa._M_string_length + 36) >> 3) + 0x7FFF8000) != 0
        && (char)(((LOBYTE(eventa._M_string_length) + 36) & 7) + 3) >= *(_BYTE *)(((eventa._M_string_length + 36) >> 3)
                                                                                + 0x7FFF8000) )
      {
        p_activity_delivery_config_mgr = (ActivityDeliveryExcelConfigMgr *)(eventa._M_string_length + 36);
        __asan_report_load4();
      }
      quest_id_vec_ptr = ActivityDeliveryExcelConfigMgr::findDeliveryQuestIdVecByDayIndex(
                           p_activity_delivery_config_mgr,
                           *(_DWORD *)(eventa._M_string_length + 36),
                           v12);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v28);
      if ( quest_id_vec_ptr )
      {
        if ( *(_BYTE *)(((eventa._M_string_length + 24) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        quest_comp = Player::getQuestComp(*(Player *const *)(eventa._M_string_length + 24));
        __for_range = quest_id_vec_ptr;
        *((std::vector<unsigned int>::const_iterator *)&eventa._anon_0._M_allocated_capacity + 1) = std::vector<unsigned int>::begin(quest_id_vec_ptr);
        __for_end._M_current = std::vector<unsigned int>::end(__for_range)._M_current;
        while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&eventa._anon_0._M_allocated_capacity
                + 1,
                  &__for_end) )
        {
          v13 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&eventa._anon_0._M_allocated_capacity
                + 1);
          if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          *(_DWORD *)(v2 + 48) = *v13;
          v14 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false,false> *const)(v2 + 64));
          if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
                 &v14->second,
                 (const unsigned int *)(v2 + 48))
            && PlayerQuestComp::getQuestState(quest_comp, *(_DWORD *)(v2 + 48)) == QUEST_STATE_UNFINISHED )
          {
            common::tools::perf::make_shared<ActivityTriggerQuestEvent,unsigned int &>(
              (unsigned int *)(v2 + 96),
              (unsigned int *)(eventa._M_string_length + 32));
            if ( *(_BYTE *)(((eventa._M_string_length + 24) >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            EventComp = Player::getEventComp(*(Player *const *)(eventa._M_string_length + 24));
            std::shared_ptr<BaseEvent>::shared_ptr<ActivityTriggerQuestEvent,void>(
              (std::shared_ptr<BaseEvent> *const)&v28,
              (const std::shared_ptr<ActivityTriggerQuestEvent> *)(v2 + 96));
            PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v28);
            std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v28);
            common::tools::perf::make_shared<proto_log::PlayerLogBodyDeliveryWatcherTriggerFailed>();
            v17 = std::__shared_ptr_access<proto_log::PlayerLogBodyDeliveryWatcherTriggerFailed,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDeliveryWatcherTriggerFailed,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
            if ( *(_BYTE *)(((eventa._M_string_length + 36) >> 3) + 0x7FFF8000) != 0
              && (char)(((LOBYTE(eventa._M_string_length) + 36) & 7) + 3) >= *(_BYTE *)(((eventa._M_string_length + 36) >> 3)
                                                                                      + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            proto_log::PlayerLogBodyDeliveryWatcherTriggerFailed::set_schedule_id(
              v17,
              *(_DWORD *)(eventa._M_string_length + 36));
            v18 = std::__shared_ptr_access<proto_log::PlayerLogBodyDeliveryWatcherTriggerFailed,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDeliveryWatcherTriggerFailed,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
            proto_log::PlayerLogBodyDeliveryWatcherTriggerFailed::set_quest_id(v18, *(_DWORD *)(v2 + 48));
            v19 = std::__shared_ptr_access<proto_log::PlayerLogBodyDeliveryWatcherTriggerFailed,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDeliveryWatcherTriggerFailed,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
            if ( *(_BYTE *)(((eventa._M_string_length + 932) >> 3) + 0x7FFF8000) != 0
              && (char)(((LOBYTE(eventa._M_string_length) - 92) & 7) + 3) >= *(_BYTE *)(((eventa._M_string_length + 932) >> 3)
                                                                                      + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            proto_log::PlayerLogBodyDeliveryWatcherTriggerFailed::set_day_index(
              v19,
              *(_DWORD *)(eventa._M_string_length + 932));
            v20 = std::__shared_ptr_access<proto_log::PlayerLogBodyDeliveryWatcherTriggerFailed,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDeliveryWatcherTriggerFailed,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
            if ( *(_BYTE *)(((unsigned __int64)(eventa._M_dataplus._M_p + 24) >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)(eventa._M_dataplus._M_p + 24) >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            proto_log::PlayerLogBodyDeliveryWatcherTriggerFailed::set_watcher_id(
              v20,
              *((_DWORD *)eventa._M_dataplus._M_p + 6));
            if ( *(_BYTE *)(((eventa._M_string_length + 24) >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v21 = *(Player **)(eventa._M_string_length + 24);
            std::shared_ptr<google::protobuf::Message>::shared_ptr(&v28, 0LL);
            std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyDeliveryWatcherTriggerFailed,void>(
              &p_body_ptr,
              (const std::shared_ptr<proto_log::PlayerLogBodyDeliveryWatcherTriggerFailed> *)(v2 + 128));
            Player::printStatLog(v21, &p_body_ptr, &v28, 0xEu);
            std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
            std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v28);
            std::shared_ptr<proto_log::PlayerLogBodyDeliveryWatcherTriggerFailed>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyDeliveryWatcherTriggerFailed> *const)(v2 + 128));
            std::shared_ptr<ActivityTriggerQuestEvent>::~shared_ptr((std::shared_ptr<ActivityTriggerQuestEvent> *const)(v2 + 96));
          }
          __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(
            (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&eventa._anon_0._M_allocated_capacity
          + 1);
        }
      }
    }
  }
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32));
  if ( v30 == (char *)v2 )
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

// Line 231: range 00000000165B5C6A-00000000165B66EC
int32_t __cdecl DeliveryActivity::takeDailyReward(DeliveryActivity *const this, uint32_t *reward_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  PlayerBasicComp *BasicComp; // rax
  ActivityDeliveryExcelConfigMgr *p_activity_delivery_config_mgr; // rdi
  uint32_t day_index; // ecx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rcx
  int32_t v13; // r14d
  std::unordered_set<unsigned int>::size_type v14; // r14
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rcx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rcx
  PlayerItemComp *ItemComp; // rcx
  PlayerItemComp *p_daily_reward_id; // rdi
  uint32_t daily_reward_id; // ecx
  std::__shared_ptr_access<proto_log::PlayerLogBodyDeliveryTakeDailyReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyDeliveryTakeDailyReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyDeliveryTakeDailyReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rcx
  Player *player; // r14
  int32_t result; // eax
  std::string reward_ida; // [rsp+0h] [rbp-130h]
  uint32_t *reward_idb; // [rsp+0h] [rbp-130h]
  DeliveryActivity *thisa; // [rsp+8h] [rbp-128h]
  int32_t ret; // [rsp+14h] [rbp-11Ch]
  const data::ActivityDeliveryDailyExcelConfig *daily_config_ptr; // [rsp+18h] [rbp-118h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-110h] BYREF
  std::shared_ptr<google::protobuf::Message> v33; // [rsp+30h] [rbp-100h] BYREF
  std::string v34; // [rsp+40h] [rbp-F0h] BYREF
  char v35[208]; // [rsp+60h] [rbp-D0h] BYREF

  reward_ida._M_string_length = (std::string::size_type)this;
  reward_ida._M_dataplus._M_p = (std::string::pointer)reward_id;
  v2 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 1 10 holder:232 64 16 11 log_ptr:267 96 24 10 reason:255";
  *(_QWORD *)(v2 + 16) = DeliveryActivity::takeDailyReward;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -219021312;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Player::getBasicComp(this->player_);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v34, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 0xBB9u, reward_ida);
  std::string::~string(&v34);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v33);
  p_activity_delivery_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v33)->design_config.txt_config_mgr.activity_delivery_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->day_index_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)thisa - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->day_index_ >> 3) + 0x7FFF8000) )
  {
    p_activity_delivery_config_mgr = (ActivityDeliveryExcelConfigMgr *)&thisa->day_index_;
    __asan_report_load4();
  }
  day_index = thisa->day_index_;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->schedule_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)thisa + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->schedule_id_ >> 3) + 0x7FFF8000) )
  {
    p_activity_delivery_config_mgr = (ActivityDeliveryExcelConfigMgr *)&thisa->schedule_id_;
    __asan_report_load4();
  }
  daily_config_ptr = ActivityDeliveryExcelConfigMgr::findDailyConfig(
                       p_activity_delivery_config_mgr,
                       thisa->schedule_id_,
                       day_index);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v33);
  if ( daily_config_ptr )
  {
    v14 = std::unordered_set<unsigned int>::size(&thisa->cur_day_finished_delivery_quest_index_set_);
    if ( v14 >= std::vector<data::DeliveryQuestConfig>::size(&daily_config_ptr->delivery_quest_config) )
    {
      if ( *(char *)(((unsigned __int64)&thisa->is_taken_daily_reward_ >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&thisa->is_taken_daily_reward_);
      if ( thisa->is_taken_daily_reward_ )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v34,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/delivery_activity.cpp",
          "takeDailyReward",
          249);
        v17 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                (common::milog::MiLogStream *const)&v34,
                (const char (*)[39])"[Delivery] already take daily reward. ");
        v18 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v17, (const char (*)[10])" player: ");
        if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        operator<<(v18, thisa->player_);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v34);
        v13 = 872;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&daily_config_ptr->daily_reward_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&daily_config_ptr->daily_reward_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        if ( daily_config_ptr->daily_reward_id )
        {
          ActionReason::ActionReason(
            (ActionReason *const)(v2 + 96),
            ACTION_REASON_DELIVERY_DAILY_REWARD,
            ITEM_LIMIT_ACTIVITY_DELIVERY);
          if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          ItemComp = Player::getItemComp(thisa->player_);
          if ( *(_BYTE *)(((unsigned __int64)&daily_config_ptr->daily_reward_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&daily_config_ptr->daily_reward_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          ret = PlayerItemComp::checkGrantReward(
                  ItemComp,
                  daily_config_ptr->daily_reward_id,
                  (const ActionReason *)(v2 + 96));
          if ( ret )
          {
            v13 = ret;
            goto LABEL_53;
          }
          if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          p_daily_reward_id = Player::getItemComp(thisa->player_);
          if ( *(_BYTE *)(((unsigned __int64)&daily_config_ptr->daily_reward_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&daily_config_ptr->daily_reward_id >> 3) + 0x7FFF8000) <= 3 )
          {
            p_daily_reward_id = (PlayerItemComp *)&daily_config_ptr->daily_reward_id;
            __asan_report_load4();
          }
          PlayerItemComp::grantReward(
            p_daily_reward_id,
            daily_config_ptr->daily_reward_id,
            (const ActionReason *)(v2 + 96),
            0LL);
        }
        if ( *(_BYTE *)(((unsigned __int64)&daily_config_ptr->daily_reward_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&daily_config_ptr->daily_reward_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        daily_reward_id = daily_config_ptr->daily_reward_id;
        if ( *(_BYTE *)(((unsigned __int64)reward_idb >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)reward_idb & 7) + 3) >= *(_BYTE *)(((unsigned __int64)reward_idb >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(reward_idb);
        }
        *reward_idb = daily_reward_id;
        if ( *(char *)(((unsigned __int64)&thisa->is_taken_daily_reward_ >> 3) + 0x7FFF8000) < 0 )
          __asan_report_store1(&thisa->is_taken_daily_reward_);
        thisa->is_taken_daily_reward_ = 1;
        common::tools::perf::make_shared<proto_log::PlayerLogBodyDeliveryTakeDailyReward>();
        v22 = std::__shared_ptr_access<proto_log::PlayerLogBodyDeliveryTakeDailyReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDeliveryTakeDailyReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        if ( *(_BYTE *)(((unsigned __int64)&thisa->schedule_id_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)thisa + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->schedule_id_ >> 3)
                                                               + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto_log::PlayerLogBodyDeliveryTakeDailyReward::set_schedule_id(v22, thisa->schedule_id_);
        v23 = std::__shared_ptr_access<proto_log::PlayerLogBodyDeliveryTakeDailyReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDeliveryTakeDailyReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        if ( *(_BYTE *)(((unsigned __int64)&thisa->day_index_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)thisa - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->day_index_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto_log::PlayerLogBodyDeliveryTakeDailyReward::set_day_index(v23, thisa->day_index_);
        v24 = std::__shared_ptr_access<proto_log::PlayerLogBodyDeliveryTakeDailyReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDeliveryTakeDailyReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        if ( *(_BYTE *)(((unsigned __int64)reward_idb >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)reward_idb & 7) + 3) >= *(_BYTE *)(((unsigned __int64)reward_idb >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto_log::PlayerLogBodyDeliveryTakeDailyReward::set_reward_id(v24, *reward_idb);
        if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        player = thisa->player_;
        std::shared_ptr<google::protobuf::Message>::shared_ptr(&v33, 0LL);
        std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyDeliveryTakeDailyReward,void>(
          &p_body_ptr,
          (const std::shared_ptr<proto_log::PlayerLogBodyDeliveryTakeDailyReward> *)(v2 + 64));
        Player::printStatLog(player, &p_body_ptr, &v33, 0xEu);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v33);
        v13 = 0;
        std::shared_ptr<proto_log::PlayerLogBodyDeliveryTakeDailyReward>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyDeliveryTakeDailyReward> *const)(v2 + 64));
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v34,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/delivery_activity.cpp",
        "takeDailyReward",
        243);
      v15 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
              (common::milog::MiLogStream *const)&v34,
              (const char (*)[41])"[Delivery] not finish all daily quests. ");
      v16 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v15, (const char (*)[10])" player: ");
      if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      operator<<(v16, thisa->player_);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v34);
      v13 = 871;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v34,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/delivery_activity.cpp",
      "takeDailyReward",
      237);
    v8 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
           (common::milog::MiLogStream *const)&v34,
           (const char (*)[35])"findDailyConfig fail, schedule_id:");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &thisa->schedule_id_);
    v10 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v9, (const char (*)[15])" ,day_index_: ");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &thisa->day_index_);
    v12 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v11, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v12, thisa->player_);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v34);
    v13 = -1;
  }
LABEL_53:
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
  result = v13;
  if ( v35 == (char *)v2 )
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

// Line 276: range 00000000165B66EE-00000000165B69A2
int32_t __cdecl DeliveryActivity::addDeliveryWatchers(DeliveryActivity *const this)
{
  bool v1; // bl
  bool v2; // bl
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rbx
  unsigned int val; // [rsp+14h] [rbp-7Ch] BYREF
  std::unordered_map<unsigned int,data::ActivityDeliveryWatcherDataConfig>::const_iterator __for_begin; // [rsp+18h] [rbp-78h] BYREF
  std::unordered_map<unsigned int,data::ActivityDeliveryWatcherDataConfig>::const_iterator __for_end; // [rsp+20h] [rbp-70h] BYREF
  PlayerWatcherComp *watcher_comp; // [rsp+28h] [rbp-68h]
  const std::unordered_map<unsigned int,data::ActivityDeliveryWatcherDataConfig> *__for_range; // [rsp+30h] [rbp-60h]
  const std::pair<unsigned int const,data::ActivityDeliveryWatcherDataConfig> *v12; // [rsp+38h] [rbp-58h]
  std::tuple_element<0,const std::pair<unsigned int const,data::ActivityDeliveryWatcherDataConfig> >::type *watcher_id; // [rsp+40h] [rbp-50h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivityDeliveryWatcherDataConfig> >::type *watcher_config; // [rsp+48h] [rbp-48h]
  std::shared_ptr<Config> v15; // [rsp+50h] [rbp-40h] BYREF
  common::milog::MiLogStream v16; // [rsp+60h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  watcher_comp = Player::getWatcherComp(this->player_);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v15);
  __for_range = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15)->design_config.txt_config_mgr.activity_delivery_config_mgr.activity_delivery_watcher_data_config_map;
  std::shared_ptr<Config>::~shared_ptr(&v15);
  __for_begin._M_cur = std::unordered_map<unsigned int,data::ActivityDeliveryWatcherDataConfig>::begin(__for_range)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,data::ActivityDeliveryWatcherDataConfig>::end(__for_range)._M_cur;
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ActivityDeliveryWatcherDataConfig>,false>(
            &__for_begin,
            &__for_end) )
      return 0;
    v12 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityDeliveryWatcherDataConfig>,false,false>::operator*(&__for_begin);
    watcher_id = std::get<0ul,unsigned int const,data::ActivityDeliveryWatcherDataConfig>(v12);
    watcher_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivityDeliveryWatcherDataConfig> >::type *)std::get<1ul,unsigned int const,data::ActivityDeliveryWatcherDataConfig>(v12);
    if ( *(_BYTE *)(((unsigned __int64)watcher_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)watcher_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)watcher_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    PlayerWatcherComp::findWatcher((PlayerWatcherComp *const)&v15, (uint32_t)watcher_comp);
    v1 = std::operator!=<BaseWatcher>(0LL, (const std::shared_ptr<BaseWatcher> *)&v15);
    std::shared_ptr<BaseWatcher>::~shared_ptr((std::shared_ptr<BaseWatcher> *const)&v15);
    if ( !v1 )
    {
      PlayerWatcherComp::addWatcher(
        (PlayerWatcherComp *const)&v15,
        (const WatcherConfig *)watcher_comp,
        (uint32_t)watcher_config);
      v2 = std::operator==<BaseWatcher>(0LL, (const std::shared_ptr<BaseWatcher> *)&v15);
      std::shared_ptr<BaseWatcher>::~shared_ptr((std::shared_ptr<BaseWatcher> *const)&v15);
      if ( v2 )
        break;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityDeliveryWatcherDataConfig>,false,false>::operator++(&__for_begin);
  }
  common::milog::MiLogStream::create(
    &v16,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/activity/delivery_activity.cpp",
    "addDeliveryWatchers",
    287);
  v3 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v16, (const char (*)[15])"addWatcher id:");
  v4 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, watcher_id);
  v5 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v4, (const char (*)[13])" fails, uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
  common::milog::MiLogStream::~MiLogStream(&v16);
  return -1;
};

// Line 295: range 00000000165B69A4-00000000165B6BA7
int32_t __cdecl DeliveryActivity::delDeliveryWatchers(DeliveryActivity *const this)
{
  bool v1; // bl
  PlayerWatcherComp *WatcherComp; // rcx
  std::unordered_map<unsigned int,data::ActivityDeliveryWatcherDataConfig>::const_iterator __for_begin; // [rsp+18h] [rbp-58h] BYREF
  std::unordered_map<unsigned int,data::ActivityDeliveryWatcherDataConfig>::const_iterator __for_end; // [rsp+20h] [rbp-50h] BYREF
  PlayerWatcherComp *watcher_comp; // [rsp+28h] [rbp-48h]
  const std::unordered_map<unsigned int,data::ActivityDeliveryWatcherDataConfig> *__for_range; // [rsp+30h] [rbp-40h]
  const std::pair<unsigned int const,data::ActivityDeliveryWatcherDataConfig> *v8; // [rsp+38h] [rbp-38h]
  std::tuple_element<0,const std::pair<unsigned int const,data::ActivityDeliveryWatcherDataConfig> >::type *watcher_id; // [rsp+40h] [rbp-30h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivityDeliveryWatcherDataConfig> >::type *watcher_config; // [rsp+48h] [rbp-28h]
  std::shared_ptr<BaseWatcher> v11[2]; // [rsp+50h] [rbp-20h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  watcher_comp = Player::getWatcherComp(this->player_);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v11);
  __for_range = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v11)->design_config.txt_config_mgr.activity_delivery_config_mgr.activity_delivery_watcher_data_config_map;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)v11);
  __for_begin._M_cur = std::unordered_map<unsigned int,data::ActivityDeliveryWatcherDataConfig>::begin(__for_range)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,data::ActivityDeliveryWatcherDataConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ActivityDeliveryWatcherDataConfig>,false>(
            &__for_begin,
            &__for_end) )
  {
    v8 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityDeliveryWatcherDataConfig>,false,false>::operator*(&__for_begin);
    watcher_id = std::get<0ul,unsigned int const,data::ActivityDeliveryWatcherDataConfig>(v8);
    watcher_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivityDeliveryWatcherDataConfig> >::type *)std::get<1ul,unsigned int const,data::ActivityDeliveryWatcherDataConfig>(v8);
    if ( *(_BYTE *)(((unsigned __int64)watcher_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)watcher_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)watcher_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    PlayerWatcherComp::findWatcher((PlayerWatcherComp *const)v11, (uint32_t)watcher_comp);
    v1 = std::operator!=<BaseWatcher>(0LL, v11);
    std::shared_ptr<BaseWatcher>::~shared_ptr(v11);
    if ( v1 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      WatcherComp = Player::getWatcherComp(this->player_);
      if ( *(_BYTE *)(((unsigned __int64)watcher_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)watcher_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)watcher_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      PlayerWatcherComp::delWatcher(WatcherComp, *watcher_id);
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityDeliveryWatcherDataConfig>,false,false>::operator++(&__for_begin);
  }
  return 0;
};

// Line 308: range 00000000165B6BA8-00000000165B6C53
void __cdecl DeliveryActivity::onClear(DeliveryActivity *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->day_index_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->day_index_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->day_index_);
  }
  this->day_index_ = 0;
  if ( *(char *)(((unsigned __int64)&this->is_taken_daily_reward_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_taken_daily_reward_);
  this->is_taken_daily_reward_ = 0;
  std::unordered_set<unsigned int>::clear(&this->cur_day_finished_delivery_quest_index_set_);
};
