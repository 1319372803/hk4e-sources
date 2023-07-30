// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/sea_lamp_activity.cpp

// Line 40: range 0000000017FC303E-0000000017FC3205
int32_t __cdecl SeaLampActivity::fromScheduleBin(SeaLampActivity *const this, const proto::ActivityScheduleBin *bin)
{
  uint32_t v2; // ecx
  char v3; // dl
  __int64 v4; // rdx
  __int64 v5; // rdx
  char v6; // al
  bool is_content_closed; // cl
  char v8; // dl
  __int64 v9; // rdx
  std::map<unsigned int,SeaLampSectionInfo>::key_type __k; // [rsp+1Ch] [rbp-44h] BYREF
  google::protobuf::RepeatedPtrField<proto::SeaLampSectionBin>::const_iterator __for_begin; // [rsp+20h] [rbp-40h] BYREF
  google::protobuf::RepeatedPtrField<proto::SeaLampSectionBin>::const_iterator __for_end; // [rsp+28h] [rbp-38h] BYREF
  const proto::SeaLampScheduleDataBin *sea_lamp_bin; // [rsp+30h] [rbp-30h]
  const google::protobuf::RepeatedPtrField<proto::SeaLampSectionBin> *__for_range; // [rsp+38h] [rbp-28h]
  const proto::SeaLampSectionBin *section_bin; // [rsp+40h] [rbp-20h]
  SeaLampSectionInfo *section_info; // [rsp+48h] [rbp-18h]

  sea_lamp_bin = proto::ActivityScheduleBin::sea_lamp_bin(bin);
  v2 = proto::SeaLampScheduleDataBin::popularity(sea_lamp_bin);
  v3 = *(_BYTE *)(((unsigned __int64)&this->popularity_ >> 3) + 0x7FFF8000);
  LOBYTE(bin) = v3 != 0;
  v4 = (v3 != 0) & (unsigned __int8)((char)((((_BYTE)this - 92) & 7) + 3) >= v3);
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->popularity_, bin, v4);
  this->popularity_ = v2;
  v5 = proto::SeaLampScheduleDataBin::sea_lamp_coin(sea_lamp_bin);
  v6 = *(_BYTE *)(((unsigned __int64)&this->sea_lamp_coin_ >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(bin) = v6 != 0;
    __asan_report_store4(&this->sea_lamp_coin_, bin, v5);
  }
  this->sea_lamp_coin_ = v5;
  is_content_closed = proto::SeaLampScheduleDataBin::is_content_closed(sea_lamp_bin);
  v8 = *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000);
  LOBYTE(bin) = v8 != 0;
  v9 = (v8 != 0) & (unsigned __int8)((((unsigned __int8)this - 84) & 7) >= v8);
  if ( (_BYTE)v9 )
    __asan_report_store1(&this->is_content_closed_, bin, v9);
  this->is_content_closed_ = is_content_closed;
  std::map<unsigned int,SeaLampSectionInfo>::clear(&this->section_map_);
  __for_range = proto::SeaLampScheduleDataBin::section_list(sea_lamp_bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::SeaLampSectionBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::SeaLampSectionBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::SeaLampSectionBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    section_bin = google::protobuf::internal::RepeatedPtrIterator<proto::SeaLampSectionBin const>::operator*(&__for_begin);
    __k = proto::SeaLampSectionBin::section_id(section_bin);
    section_info = std::map<unsigned int,SeaLampSectionInfo>::operator[](&this->section_map_, &__k);
    google::protobuf::internal::RepeatedPtrIterator<proto::SeaLampSectionBin const>::operator++(&__for_begin);
  }
  return 0;
};

// Line 55: range 0000000017FC3206-0000000017FC3409
int32_t __cdecl SeaLampActivity::toScheduleBin(const SeaLampActivity *const this, proto::ActivityScheduleBin *bin)
{
  std::map<unsigned int,SeaLampSectionInfo>::const_iterator __for_begin; // [rsp+10h] [rbp-40h] BYREF
  std::map<unsigned int,SeaLampSectionInfo>::const_iterator __for_end; // [rsp+18h] [rbp-38h] BYREF
  proto::SeaLampScheduleDataBin *sea_lamp_bin; // [rsp+20h] [rbp-30h]
  const std::map<unsigned int,SeaLampSectionInfo> *__for_range; // [rsp+28h] [rbp-28h]
  const std::pair<unsigned int const,SeaLampSectionInfo> *v7; // [rsp+30h] [rbp-20h]
  std::tuple_element<0,const std::pair<unsigned int const,SeaLampSectionInfo> >::type *section_id; // [rsp+38h] [rbp-18h]
  std::tuple_element<1,const std::pair<unsigned int const,SeaLampSectionInfo> >::type *section_info; // [rsp+40h] [rbp-10h]
  proto::SeaLampSectionBin *section_bin; // [rsp+48h] [rbp-8h]

  sea_lamp_bin = proto::ActivityScheduleBin::mutable_sea_lamp_bin(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->popularity_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->popularity_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->popularity_);
  }
  proto::SeaLampScheduleDataBin::set_popularity(sea_lamp_bin, this->popularity_);
  if ( *(_BYTE *)(((unsigned __int64)&this->sea_lamp_coin_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->sea_lamp_coin_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->sea_lamp_coin_);
  }
  proto::SeaLampScheduleDataBin::set_sea_lamp_coin(sea_lamp_bin, this->sea_lamp_coin_);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 84) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_content_closed_);
  }
  proto::SeaLampScheduleDataBin::set_is_content_closed(sea_lamp_bin, this->is_content_closed_);
  __for_range = &this->section_map_;
  __for_begin._M_node = std::map<unsigned int,SeaLampSectionInfo>::begin(&this->section_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,SeaLampSectionInfo>::end(&this->section_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v7 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,SeaLampSectionInfo>>::operator*(&__for_begin);
    section_id = std::get<0ul,unsigned int const,SeaLampSectionInfo>(v7);
    section_info = (std::tuple_element<1,const std::pair<unsigned int const,SeaLampSectionInfo> >::type *)std::get<1ul,unsigned int const,SeaLampSectionInfo>(v7);
    section_bin = proto::SeaLampScheduleDataBin::add_section_list(sea_lamp_bin);
    if ( *(_BYTE *)(((unsigned __int64)section_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)section_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)section_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(section_id);
    }
    proto::SeaLampSectionBin::set_section_id(section_bin, *section_id);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,SeaLampSectionInfo>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 69: range 0000000017FC340A-0000000017FC3A7B
int32_t __cdecl SeaLampActivity::toClient(SeaLampActivity *const this, proto::ActivityInfo *activity_info)
{
  common::milog::MiLogStream *v2; // rbx
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  PlayerMechanicusComp *MechanicusComp; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  NewActivityExcelConfigMgr *v7; // rcx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  time_t v9; // rdx
  bool is_open; // [rsp+1Eh] [rbp-A2h]
  bool is_feature_close; // [rsp+1Fh] [rbp-A1h]
  unsigned int val; // [rsp+20h] [rbp-A0h] BYREF
  uint32_t day_index; // [rsp+24h] [rbp-9Ch]
  uint32_t mechanicus_id; // [rsp+28h] [rbp-98h]
  uint32_t time_offset; // [rsp+2Ch] [rbp-94h]
  uint32_t schedule_begin_day; // [rsp+30h] [rbp-90h]
  uint32_t day_start_time; // [rsp+34h] [rbp-8Ch]
  std::map<unsigned int,SeaLampSectionInfo>::iterator __for_begin; // [rsp+38h] [rbp-88h] BYREF
  std::map<unsigned int,SeaLampSectionInfo>::iterator __for_end; // [rsp+40h] [rbp-80h] BYREF
  proto::SeaLampActivityInfo *sea_lamp_info; // [rsp+48h] [rbp-78h]
  std::map<unsigned int,SeaLampSectionInfo> *__for_range; // [rsp+50h] [rbp-70h]
  const data::NewActivityScheduleExcelConfig *schedule_config_ptr; // [rsp+58h] [rbp-68h]
  const std::pair<unsigned int const,SeaLampSectionInfo> *v23; // [rsp+60h] [rbp-60h]
  std::tuple_element<0,const std::pair<unsigned int const,SeaLampSectionInfo> >::type *section_id; // [rsp+68h] [rbp-58h]
  std::tuple_element<1,const std::pair<unsigned int const,SeaLampSectionInfo> >::type *section_info; // [rsp+70h] [rbp-50h]
  proto::SeaLampSectionInfo *section_proto; // [rsp+78h] [rbp-48h]
  std::shared_ptr<Config> v27; // [rsp+80h] [rbp-40h] BYREF
  common::milog::MiLogStream v28; // [rsp+90h] [rbp-30h] BYREF

  if ( BaseActivity::toClient((BaseActivity *const)this, activity_info) )
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/sea_lamp_activity.cpp",
      "toClient",
      72);
    v2 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v28,
           (const char (*)[36])"BaseActivity::toClient fails, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
    common::milog::MiLogStream::~MiLogStream(&v28);
    return -1;
  }
  else
  {
    sea_lamp_info = proto::ActivityInfo::mutable_sea_lamp_info(activity_info);
    day_index = BaseActivity::getDayIndexAfterStart((BaseActivity *const)this);
    proto::SeaLampActivityInfo::set_day_index(sea_lamp_info, day_index);
    if ( *(_BYTE *)(((unsigned __int64)&this->popularity_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->popularity_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->popularity_);
    }
    proto::SeaLampActivityInfo::set_popularity(sea_lamp_info, this->popularity_);
    if ( *(_BYTE *)(((unsigned __int64)&this->sea_lamp_coin_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->sea_lamp_coin_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->sea_lamp_coin_);
    }
    proto::SeaLampActivityInfo::set_sea_lamp_coin(sea_lamp_info, this->sea_lamp_coin_);
    if ( *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this - 84) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_content_closed_);
    }
    proto::SeaLampActivityInfo::set_is_content_closed(sea_lamp_info, this->is_content_closed_);
    __for_range = &this->section_map_;
    __for_begin._M_node = std::map<unsigned int,SeaLampSectionInfo>::begin(&this->section_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,SeaLampSectionInfo>::end(&this->section_map_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v23 = std::_Rb_tree_iterator<std::pair<unsigned int const,SeaLampSectionInfo>>::operator*(&__for_begin);
      section_id = std::get<0ul,unsigned int const,SeaLampSectionInfo>(v23);
      section_info = (std::tuple_element<1,const std::pair<unsigned int const,SeaLampSectionInfo> >::type *)std::get<1ul,unsigned int const,SeaLampSectionInfo>(v23);
      section_proto = proto::SeaLampActivityInfo::add_section_info_list(sea_lamp_info);
      if ( *(_BYTE *)(((unsigned __int64)section_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)section_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)section_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(section_id);
      }
      proto::SeaLampSectionInfo::set_section_id(section_proto, *section_id);
      std::_Rb_tree_iterator<std::pair<unsigned int const,SeaLampSectionInfo>>::operator++(&__for_begin);
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v27);
    p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v27)->design_config.txt_config_mgr.new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->activity_id_);
    }
    mechanicus_id = NewActivityExcelConfigMgr::findActivityMechanicusId(p_new_activity_config_mgr, this->activity_id_);
    std::shared_ptr<Config>::~shared_ptr(&v27);
    proto::SeaLampActivityInfo::set_mechanicus_id(sea_lamp_info, mechanicus_id);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    MechanicusComp = Player::getMechanicusComp(this->player_);
    is_open = mechanicus_id == PlayerMechanicusComp::getCurMechanicusId(MechanicusComp);
    proto::SeaLampActivityInfo::set_is_mechanicus_open(sea_lamp_info, is_open);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v27);
    v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v27);
    is_feature_close = FeatureSwitchMgr::isMechanicusClosed(&v6->feature_switch_mgr);
    std::shared_ptr<Config>::~shared_ptr(&v27);
    proto::SeaLampActivityInfo::set_is_mechanicus_feature_close(sea_lamp_info, is_feature_close);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v27);
    v7 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v27)->design_config.txt_config_mgr.new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->schedule_id_);
    }
    schedule_config_ptr = data::NewActivityExcelConfigMgrBase::findNewActivityScheduleExcelConfig(
                            v7,
                            this->schedule_id_);
    std::shared_ptr<Config>::~shared_ptr(&v27);
    if ( schedule_config_ptr )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v27);
      v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v27);
      time_offset = ConstValueExcelConfigMgr::getTimeOffsetSec(&v8->design_config.txt_config_mgr.const_value_config_mgr);
      std::shared_ptr<Config>::~shared_ptr(&v27);
      v9 = time_offset;
      if ( *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->begin_time >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->begin_time >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&schedule_config_ptr->begin_time);
      }
      schedule_begin_day = common::tools::TimeUtils::getTimeDay(schedule_config_ptr->begin_time, v9);
      day_start_time = common::tools::TimeUtils::getDailyStartTime(schedule_begin_day, time_offset);
      proto::SeaLampActivityInfo::set_first_day_start_time(sea_lamp_info, day_start_time);
    }
    return 0;
  }
};

// Line 107: range 0000000017FC3A7C-0000000017FC3B22
int32_t __cdecl SeaLampActivity::init(SeaLampActivity *const this)
{
  char v1; // al

  if ( !BaseActivity::isOpening((const BaseActivity *const)this, 0)
    || BaseActivity::isSettled((const BaseActivity *const)this) )
  {
    goto LABEL_6;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 84) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_content_closed_);
  }
  if ( this->is_content_closed_ )
LABEL_6:
    v1 = 1;
  else
    v1 = 0;
  if ( !v1 )
    SeaLampActivity::registerObserver(this);
  return 0;
};

// Line 117: range 0000000017FC3B24-0000000017FC3B3E
void __cdecl SeaLampActivity::onStart(SeaLampActivity *const this)
{
  SeaLampActivity::registerObserver(this);
};

// Line 122: range 0000000017FC3B40-0000000017FC3E86
void __cdecl SeaLampActivity::registerObserver(SeaLampActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::weak_ptr<SeaLampActivity> *EventComp; // [rsp+10h] [rbp-D0h]
  std::weak_ptr<SeaLampActivity> *p_this_wtr; // [rsp+20h] [rbp-C0h]
  std::weak_ptr<Observer> __r; // [rsp+30h] [rbp-B0h] BYREF
  std::weak_ptr<SeaLampActivity> v7; // [rsp+40h] [rbp-A0h] BYREF
  char v8[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 12 this_ptr:123 64 16 12 this_wtr:124";
  *(_QWORD *)(v1 + 16) = SeaLampActivity::registerObserver;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  toThisPtr<SeaLampActivity>((SeaLampActivity *)(v1 + 32));
  std::weak_ptr<SeaLampActivity>::weak_ptr<SeaLampActivity,void>(
    (std::weak_ptr<SeaLampActivity> *const)(v1 + 64),
    (const std::shared_ptr<SeaLampActivity> *)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  p_this_wtr = (std::weak_ptr<SeaLampActivity> *)Player::getEventComp(this->player_);
  std::weak_ptr<SeaLampActivity>::weak_ptr(&v7, (const std::weak_ptr<SeaLampActivity> *)(v1 + 64));
  PlayerEventComp::registerObserver<SeaLampActivity,OpenMechanicusEvent>(
    (PlayerEventComp *const)&__r,
    p_this_wtr,
    (void (*)(SeaLampActivity *, const OpenMechanicusEvent *))&v7);
  std::weak_ptr<Observer>::operator=(&this->open_mechanicus_wtr_, &__r);
  std::weak_ptr<Observer>::~weak_ptr(&__r);
  std::weak_ptr<SeaLampActivity>::~weak_ptr(&v7);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  EventComp = (std::weak_ptr<SeaLampActivity> *)Player::getEventComp(this->player_);
  std::weak_ptr<SeaLampActivity>::weak_ptr(
    (std::weak_ptr<SeaLampActivity> *const)&__r,
    (const std::weak_ptr<SeaLampActivity> *)(v1 + 64));
  PlayerEventComp::registerObserver<SeaLampActivity,FinishParentQuestEvent>(
    (PlayerEventComp *const)&v7,
    EventComp,
    (void (*)(SeaLampActivity *, const FinishParentQuestEvent *))&__r);
  std::weak_ptr<Observer>::operator=(&this->mini_quest_wtr_, (std::weak_ptr<Observer> *)&v7);
  std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v7);
  std::weak_ptr<SeaLampActivity>::~weak_ptr((std::weak_ptr<SeaLampActivity> *const)&__r);
  std::weak_ptr<SeaLampActivity>::~weak_ptr((std::weak_ptr<SeaLampActivity> *const)(v1 + 64));
  std::shared_ptr<SeaLampActivity>::~shared_ptr((std::shared_ptr<SeaLampActivity> *const)(v1 + 32));
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

// Line 130: range 0000000017FC3E88-0000000017FC3F86
void __cdecl SeaLampActivity::unregisterObserver(SeaLampActivity *const this)
{
  PlayerEventComp *EventComp; // rax
  PlayerEventComp *v2; // rax

  if ( !std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->open_mechanicus_wtr_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    EventComp = Player::getEventComp(this->player_);
    PlayerEventComp::unregisterObserver(EventComp, &this->open_mechanicus_wtr_);
  }
  std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::reset(&this->open_mechanicus_wtr_);
  if ( !std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->mini_quest_wtr_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    v2 = Player::getEventComp(this->player_);
    PlayerEventComp::unregisterObserver(v2, &this->mini_quest_wtr_);
  }
  std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::reset(&this->mini_quest_wtr_);
};

// Line 144: range 0000000017FC3F88-0000000017FC402E
void __cdecl SeaLampActivity::onOpenMechanicusEvent(SeaLampActivity *const this, const OpenMechanicusEvent *event)
{
  char v2; // al

  if ( !BaseActivity::isOpening((const BaseActivity *const)this, 0)
    || BaseActivity::isSettled((const BaseActivity *const)this) )
  {
    goto LABEL_6;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 84) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_content_closed_);
  }
  if ( this->is_content_closed_ )
LABEL_6:
    v2 = 1;
  else
    v2 = 0;
  if ( !v2 )
    BaseActivity::notifyClientData((BaseActivity *const)this, 0);
};

// Line 153: range 0000000017FC4030-0000000017FC421C
void __cdecl SeaLampActivity::onParentQuestFinish(SeaLampActivity *const this, const FinishParentQuestEvent *event)
{
  char v2; // al
  ActivitySeaLampExcelConfigMgr *p_activity_sea_lamp_config_mgr; // r12
  uint32_t parent_quest_id; // ebx
  uint32_t ActivityId; // eax
  PlayerWatcherComp *WatcherComp; // rbx
  uint32_t finish_num; // [rsp+1Ch] [rbp-44h]
  std::shared_ptr<Config> v8; // [rsp+20h] [rbp-40h] BYREF
  SeaLampMiniQuestFinishEvent v9; // [rsp+30h] [rbp-30h] BYREF

  if ( !BaseActivity::isOpening((const BaseActivity *const)this, 0)
    || BaseActivity::isSettled((const BaseActivity *const)this) )
  {
    goto LABEL_6;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 84) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_content_closed_);
  }
  if ( this->is_content_closed_ )
LABEL_6:
    v2 = 1;
  else
    v2 = 0;
  if ( !v2 )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v8);
    p_activity_sea_lamp_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v8)->design_config.txt_config_mgr.activity_sea_lamp_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&event->parent_quest_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->parent_quest_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&event->parent_quest_id);
    }
    parent_quest_id = event->parent_quest_id;
    ActivityId = BaseActivity::getActivityId((const BaseActivity *const)this);
    LOBYTE(parent_quest_id) = !ActivitySeaLampExcelConfigMgr::isAcitivityMiniParentQuest(
                                 p_activity_sea_lamp_config_mgr,
                                 ActivityId,
                                 parent_quest_id);
    std::shared_ptr<Config>::~shared_ptr(&v8);
    if ( !(_BYTE)parent_quest_id )
    {
      finish_num = SeaLampActivity::getFinishMiniParentQuestNum(this);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      WatcherComp = Player::getWatcherComp(this->player_);
      SeaLampMiniQuestFinishEvent::SeaLampMiniQuestFinishEvent(&v9, finish_num);
      PlayerWatcherComp::triggerSeaLampMiniQuestFinish(WatcherComp, &v9);
      SeaLampMiniQuestFinishEvent::~SeaLampMiniQuestFinishEvent(&v9);
    }
  }
};

// Line 167: range 0000000017FC421E-0000000017FC4785
void __cdecl SeaLampActivity::onSettle(SeaLampActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  common::milog::MiLogStream *v4; // r14
  common::milog::MiLogStream *v5; // rax
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  PlayerMechanicusComp *MechanicusComp; // rax
  char v8; // al
  common::milog::MiLogStream *v9; // r14
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  PlayerMechanicusComp *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r12
  unsigned int val; // [rsp+1Ch] [rbp-A4h] BYREF
  std::shared_ptr<Config> v17; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-90h] BYREF
  char v19[112]; // [rsp+50h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 17 mechanicus_id:178";
  *(_QWORD *)(v1 + 16) = SeaLampActivity::onSettle;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 84) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_content_closed_);
  }
  if ( !this->is_content_closed_ )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/sea_lamp_activity.cpp",
      "onSettle",
      171);
    v4 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v18, (const char (*)[5])"uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
      v5,
      (const char (*)[30])" is_content_closed_ not false");
    common::milog::MiLogStream::~MiLogStream(&v18);
    SeaLampActivity::closeContent(this);
  }
  SeaLampActivity::unregisterObserver(this);
  SeaLampActivity::delSectionWatchers(this);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v17);
  p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17)->design_config.txt_config_mgr.new_activity_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->activity_id_);
  }
  *(_DWORD *)(v1 + 32) = NewActivityExcelConfigMgr::findActivityMechanicusId(
                           p_new_activity_config_mgr,
                           this->activity_id_);
  std::shared_ptr<Config>::~shared_ptr(&v17);
  if ( !*(_DWORD *)(v1 + 32) )
    goto LABEL_17;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  MechanicusComp = Player::getMechanicusComp(this->player_);
  if ( PlayerMechanicusComp::getCurMechanicusId(MechanicusComp) == *(_DWORD *)(v1 + 32) )
    v8 = 1;
  else
LABEL_17:
    v8 = 0;
  if ( v8 )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/sea_lamp_activity.cpp",
      "onSettle",
      181);
    v9 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
           &v18,
           (const char (*)[22])"closeMechanicus, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
    v11 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v10, (const char (*)[2])" ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v1 + 32));
    common::milog::MiLogStream::~MiLogStream(&v18);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    v12 = Player::getMechanicusComp(this->player_);
    if ( PlayerMechanicusComp::closeMechanicus(v12, *(_DWORD *)(v1 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/sea_lamp_activity.cpp",
        "onSettle",
        184);
      v13 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
              &v18,
              (const char (*)[17])"closeMechanicus ");
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v1 + 32));
      v15 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v14, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
      common::milog::MiLogStream::~MiLogStream(&v18);
    }
  }
  if ( v19 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 190: range 0000000017FC4786-0000000017FC4885
void __cdecl SeaLampActivity::onClear(SeaLampActivity *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  SeaLampActivity::delSectionWatchers(this);
  v1 = (((_BYTE)this - 92) & 7u) + 3;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->popularity_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->popularity_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store4(&this->popularity_, v1, v2);
  this->popularity_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->sea_lamp_coin_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->sea_lamp_coin_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->sea_lamp_coin_, v1, &this->sea_lamp_coin_);
  }
  this->sea_lamp_coin_ = 0;
  v3 = ((_BYTE)this - 84) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_content_closed_, v3, v4);
  this->is_content_closed_ = 0;
  std::map<unsigned int,SeaLampSectionInfo>::clear(&this->section_map_);
};

// Line 200: range 0000000017FC4886-0000000017FC4B54
bool __cdecl SeaLampActivity::checkCondIsMeet(SeaLampActivity *const this, const data::NewActivityCond *cond)
{
  data::NewActivityCondType type; // eax
  uint32_t popularity; // ebx
  uint32_t *v4; // rax
  uint32_t *v5; // rdx
  std::map<unsigned int,SeaLampSectionInfo>::key_type *v6; // rax
  std::map<unsigned int,SeaLampSectionInfo>::key_type *v7; // rdx
  std::map<unsigned int,SeaLampSectionInfo>::key_type __x; // [rsp+1Ch] [rbp-44h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,SeaLampSectionInfo> >::_Self v10; // [rsp+20h] [rbp-40h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,SeaLampSectionInfo> >::_Self __y; // [rsp+28h] [rbp-38h] BYREF
  common::milog::MiLogStream v12; // [rsp+30h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&cond->type);
  }
  type = cond->type;
  if ( type == NEW_ACTIVITY_COND_SEA_LAMP_POPULARIT )
  {
    if ( std::vector<int>::size(&cond->param) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->popularity_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->popularity_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->popularity_);
      }
      popularity = this->popularity_;
      v4 = (uint32_t *)std::vector<int>::operator[](&cond->param, 0LL);
      v5 = v4;
      if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v4);
      }
      return popularity >= *v5;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/sea_lamp_activity.cpp",
        "checkCondIsMeet",
        207);
      common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
        &v12,
        (const char (*)[54])"NEW_ACTIVITY_COND_SEA_LAMP_POPULARIT cond.param empty");
      common::milog::MiLogStream::~MiLogStream(&v12);
      return 0;
    }
  }
  else if ( type == NEW_ACTIVITY_COND_SEA_LAMP_PHASE )
  {
    if ( std::vector<int>::size(&cond->param) )
    {
      __y._M_node = std::map<unsigned int,SeaLampSectionInfo>::end(&this->section_map_)._M_node;
      v6 = (std::map<unsigned int,SeaLampSectionInfo>::key_type *)std::vector<int>::operator[](&cond->param, 0LL);
      v7 = v6;
      if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v6);
      }
      __x = *v7;
      v10._M_node = std::map<unsigned int,SeaLampSectionInfo>::find(&this->section_map_, &__x)._M_node;
      return std::operator!=(&v10, &__y);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/sea_lamp_activity.cpp",
        "checkCondIsMeet",
        216);
      common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
        &v12,
        (const char (*)[50])"NEW_ACTIVITY_COND_SEA_LAMP_PHASE cond.param empty");
      common::milog::MiLogStream::~MiLogStream(&v12);
      return 0;
    }
  }
  else
  {
    return BaseActivity::checkCondIsMeet((BaseActivity *const)this, cond);
  }
};

// Line 228: range 0000000017FC4B56-0000000017FC4FE8
int32_t __cdecl SeaLampActivity::execAction(SeaLampActivity *const this, const data::NewActivityExec *action_exec)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  data::NewActivityActionType type; // eax
  const std::string *v6; // rax
  common::milog::MiLogStream *v7; // r13
  const std::string *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r13
  int32_t result; // eax
  unsigned int val; // [rsp+1Ch] [rbp-84h] BYREF
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-80h] BYREF
  char v16[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 14 section_id:238";
  *(_QWORD *)(v2 + 16) = SeaLampActivity::execAction;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&action_exec->type);
  }
  type = action_exec->type;
  if ( type != NEW_ACTIVITY_ACTION_SEA_LAMP_OPEN_PHASE )
  {
    if ( type != NEW_ACTIVITY_ACTION_SEA_LAMP_CLOSE )
    {
      result = BaseActivity::execAction((BaseActivity *const)this, action_exec);
      goto LABEL_22;
    }
    if ( !SeaLampActivity::closeContent(this) )
      goto LABEL_21;
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/sea_lamp_activity.cpp",
      "execAction",
      254);
    v12 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
            &v15,
            (const char (*)[36])"[SEA_LAMP] closeContent fails, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    goto LABEL_20;
  }
  if ( !std::vector<std::string>::size(&action_exec->param) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/sea_lamp_activity.cpp",
      "execAction",
      235);
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      &v15,
      (const char (*)[29])"action_exec.param.size() < 1");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
    goto LABEL_22;
  }
  *(_DWORD *)(v2 + 32) = 0;
  v6 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
  if ( common::tools::StringUtils::strToNum<unsigned int>(v6, (unsigned int *)(v2 + 32), 1) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/sea_lamp_activity.cpp",
      "execAction",
      241);
    v7 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v15, (const char (*)[10])"strToNum ");
    v8 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
    v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, v8);
    common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v9, (const char (*)[8])" failed");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
    goto LABEL_22;
  }
  if ( SeaLampActivity::openSection(this, *(_DWORD *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/sea_lamp_activity.cpp",
      "execAction",
      246);
    v10 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
            &v15,
            (const char (*)[24])"[SEA_LAMP] openSection:");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 32));
    v12 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v11, (const char (*)[13])" fails, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
LABEL_20:
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
    common::milog::MiLogStream::~MiLogStream(&v15);
  }
LABEL_21:
  result = 0;
LABEL_22:
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

// Line 265: range 0000000017FC4FEA-0000000017FC54DE
__int64 __fastcall SeaLampActivity::checkAddPopularity(const SeaLampActivity *const this, uint32_t add_popularity)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  unsigned __int64 v5; // rax
  char v6; // al
  common::milog::MiLogStream *v7; // r12
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r12
  bool isSettled; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r12
  unsigned __int64 v13; // rax
  char v14; // al
  __int64 result; // rax
  common::milog::MiLogStream *v16; // r14
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  unsigned int val; // [rsp+1Ch] [rbp-94h] BYREF
  common::milog::MiLogStream v21; // [rsp+20h] [rbp-90h] BYREF
  char v22[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 18 add_popularity:264";
  *(_QWORD *)(v2 + 16) = SeaLampActivity::checkAddPopularity;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = add_popularity;
  if ( BaseActivity::isSettled((const BaseActivity *const)this) )
    goto LABEL_10;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v5 = (unsigned __int64)(this->_vptr_DescribalBase + 17);
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8(this->_vptr_DescribalBase + 17);
  if ( (*(unsigned __int8 (__fastcall **)(const SeaLampActivity *const))v5)(this) )
LABEL_10:
    v6 = 1;
  else
    v6 = 0;
  if ( v6 )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/sea_lamp_activity.cpp",
      "checkAddPopularity",
      268);
    v7 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v21, (const char (*)[5])"uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    v9 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v8, (const char (*)[12])" isSettled:");
    isSettled = BaseActivity::isSettled((const BaseActivity *const)this);
    v11 = common::milog::MiLogStream::operator<<(v9, isSettled);
    v12 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v11, (const char (*)[18])" isContentClosed:");
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v13 = (unsigned __int64)(this->_vptr_DescribalBase + 17);
    if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
      v13 = __asan_report_load8(this->_vptr_DescribalBase + 17);
    v14 = (*(__int64 (__fastcall **)(const SeaLampActivity *const))v13)(this);
    common::milog::MiLogStream::operator<<(v12, v14);
    common::milog::MiLogStream::~MiLogStream(&v21);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->popularity_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->popularity_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->popularity_);
    }
    if ( this->popularity_ && *(_DWORD *)(v2 + 32) && *(_DWORD *)(v2 + 32) + this->popularity_ < this->popularity_ )
      goto LABEL_30;
    if ( *(_BYTE *)(((unsigned __int64)&this->popularity_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->popularity_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->popularity_);
    }
    if ( this->popularity_ || *(_DWORD *)(v2 + 32) || *(_DWORD *)(v2 + 32) + this->popularity_ <= this->popularity_ )
    {
      result = 0LL;
    }
    else
    {
LABEL_30:
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/sea_lamp_activity.cpp",
        "checkAddPopularity",
        273);
      v16 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v21, (const char (*)[5])"uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &val);
      v18 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v17, (const char (*)[17])" add_popularity:");
      v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v19, (const char (*)[10])" overflow");
      common::milog::MiLogStream::~MiLogStream(&v21);
      result = 897LL;
    }
  }
  if ( v22 == (char *)v2 )
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

// Line 280: range 0000000017FC54E0-0000000017FC5B3D
int32_t __cdecl SeaLampActivity::addPopularity(
        SeaLampActivity *const this,
        uint32_t add_popularity,
        const ActionReason *reason)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int32_t v6; // r14d
  PlayerBasicComp *BasicComp; // rax
  SelectType v8; // ecx
  char v9; // dl
  __int64 v10; // rsi
  __int64 v11; // rdx
  std::__shared_ptr_access<proto_log::PlayerLogBodySeaLampPopularity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodySeaLampPopularity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodySeaLampPopularity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodySeaLampPopularity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodySeaLampPopularity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rcx
  Player *player; // r14
  int32_t result; // eax
  std::string v19; // [rsp+0h] [rbp-140h]
  google::protobuf::uint32 *reasona; // [rsp+8h] [rbp-138h]
  unsigned int add_popularitya; // [rsp+14h] [rbp-12Ch]
  SeaLampActivity *thisa; // [rsp+18h] [rbp-128h]
  int32_t ret; // [rsp+28h] [rbp-118h]
  unsigned int old_popularity; // [rsp+2Ch] [rbp-114h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+30h] [rbp-110h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+40h] [rbp-100h] BYREF
  std::string v27; // [rsp+50h] [rbp-F0h] BYREF
  char v28[208]; // [rsp+70h] [rbp-D0h] BYREF

  *(&v19._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  HIDWORD(v19._anon_0._M_allocated_capacity) = add_popularity;
  v19._M_string_length = (std::string::size_type)reason;
  v3 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 1 10 holder:287 64 16 11 log_ptr:303 96 24 10 notify:298";
  *(_QWORD *)(v3 + 16) = SeaLampActivity::addPopularity;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -219021312;
  v5[536862723] = -218103808;
  v5[536862724] = -202116109;
  ret = SeaLampActivity::checkAddPopularity(this, add_popularity);
  if ( ret )
  {
    v6 = ret;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    BasicComp = Player::getBasicComp(this->player_);
    PlayerBasicComp::getNextTransNo[abi:cxx11](&v27, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48), 0xC1Cu, v19);
    std::string::~string(&v27);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->popularity_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)thisa - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->popularity_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&thisa->popularity_);
    }
    old_popularity = thisa->popularity_;
    v10 = add_popularitya;
    v8 = SAFE_ADD<unsigned int,unsigned int>(old_popularity, add_popularitya);
    v9 = *(_BYTE *)(((unsigned __int64)&thisa->popularity_ >> 3) + 0x7FFF8000);
    LOBYTE(v10) = v9 != 0;
    v11 = (v9 != 0) & (unsigned __int8)((char)((((_BYTE)thisa - 92) & 7) + 3) >= v9);
    if ( (_BYTE)v11 )
      __asan_report_store4(&thisa->popularity_, v10, v11);
    thisa->popularity_ = v8;
    if ( old_popularity < thisa->popularity_ )
    {
      BaseActivity::updateAllConds((BaseActivity *const)thisa);
      proto::SeaLampPopularityNotify::SeaLampPopularityNotify((proto::SeaLampPopularityNotify *const)(v3 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&thisa->popularity_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)thisa - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->popularity_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&thisa->popularity_);
      }
      proto::SeaLampPopularityNotify::set_popularity(
        (proto::SeaLampPopularityNotify *const)(v3 + 96),
        thisa->popularity_);
      if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&thisa->player_);
      Player::sendProto(thisa->player_, (const google::protobuf::Message *)(v3 + 96));
      proto::SeaLampPopularityNotify::~SeaLampPopularityNotify((proto::SeaLampPopularityNotify *const)(v3 + 96));
    }
    common::tools::perf::make_shared<proto_log::PlayerLogBodySeaLampPopularity>();
    v12 = std::__shared_ptr_access<proto_log::PlayerLogBodySeaLampPopularity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodySeaLampPopularity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&thisa->activity_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&thisa->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&thisa->activity_id_);
    }
    proto_log::PlayerLogBodySeaLampPopularity::set_activity_id(v12, thisa->activity_id_);
    v13 = std::__shared_ptr_access<proto_log::PlayerLogBodySeaLampPopularity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodySeaLampPopularity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&thisa->schedule_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)thisa + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->schedule_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&thisa->schedule_id_);
    }
    proto_log::PlayerLogBodySeaLampPopularity::set_schedule_id(v13, thisa->schedule_id_);
    v14 = std::__shared_ptr_access<proto_log::PlayerLogBodySeaLampPopularity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodySeaLampPopularity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    proto_log::PlayerLogBodySeaLampPopularity::set_add_popularity(v14, add_popularitya);
    v15 = std::__shared_ptr_access<proto_log::PlayerLogBodySeaLampPopularity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodySeaLampPopularity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&thisa->popularity_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)thisa - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->popularity_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&thisa->popularity_);
    }
    proto_log::PlayerLogBodySeaLampPopularity::set_after_popularity(v15, thisa->popularity_);
    v16 = std::__shared_ptr_access<proto_log::PlayerLogBodySeaLampPopularity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodySeaLampPopularity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    if ( *(_BYTE *)(((unsigned __int64)reasona >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)reasona & 7) + 3) >= *(_BYTE *)(((unsigned __int64)reasona >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(reasona);
    }
    proto_log::PlayerLogBodySeaLampPopularity::set_reason(v16, *reasona);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&thisa->player_);
    player = thisa->player_;
    std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodySeaLampPopularity,void>(
      &p_body_ptr,
      (const std::shared_ptr<proto_log::PlayerLogBodySeaLampPopularity> *)(v3 + 64));
    Player::printStatLog(player, &p_body_ptr, &p_body_ext_ptr, 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
    v6 = 0;
    std::shared_ptr<proto_log::PlayerLogBodySeaLampPopularity>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodySeaLampPopularity> *const)(v3 + 64));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48));
  }
  result = v6;
  if ( v28 == (char *)v3 )
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

// Line 314: range 0000000017FC5B3E-0000000017FC601B
__int64 __fastcall SeaLampActivity::checkAddSeaLampCoin(const SeaLampActivity *const this, uint32_t add_coin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  unsigned __int64 v5; // rax
  char v6; // al
  common::milog::MiLogStream *v7; // r12
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r12
  bool isSettled; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r12
  unsigned __int64 v13; // rax
  char v14; // al
  __int64 result; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r12
  unsigned int val; // [rsp+1Ch] [rbp-84h] BYREF
  common::milog::MiLogStream v22; // [rsp+20h] [rbp-80h] BYREF
  char v23[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 add_coin:313";
  *(_QWORD *)(v2 + 16) = SeaLampActivity::checkAddSeaLampCoin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = add_coin;
  if ( BaseActivity::isSettled((const BaseActivity *const)this) )
    goto LABEL_10;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v5 = (unsigned __int64)(this->_vptr_DescribalBase + 17);
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8(this->_vptr_DescribalBase + 17);
  if ( (*(unsigned __int8 (__fastcall **)(const SeaLampActivity *const))v5)(this) )
LABEL_10:
    v6 = 1;
  else
    v6 = 0;
  if ( v6 )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/sea_lamp_activity.cpp",
      "checkAddSeaLampCoin",
      317);
    v7 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v22, (const char (*)[5])"uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    v9 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v8, (const char (*)[12])" isSettled:");
    isSettled = BaseActivity::isSettled((const BaseActivity *const)this);
    v11 = common::milog::MiLogStream::operator<<(v9, isSettled);
    v12 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v11, (const char (*)[18])" isContentClosed:");
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v13 = (unsigned __int64)(this->_vptr_DescribalBase + 17);
    if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
      v13 = __asan_report_load8(this->_vptr_DescribalBase + 17);
    v14 = (*(__int64 (__fastcall **)(const SeaLampActivity *const))v13)(this);
    common::milog::MiLogStream::operator<<(v12, v14);
    common::milog::MiLogStream::~MiLogStream(&v22);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->sea_lamp_coin_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->sea_lamp_coin_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->sea_lamp_coin_);
    }
    if ( this->sea_lamp_coin_
      && *(_DWORD *)(v2 + 32)
      && *(_DWORD *)(v2 + 32) + this->sea_lamp_coin_ < this->sea_lamp_coin_ )
    {
      goto LABEL_30;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->sea_lamp_coin_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->sea_lamp_coin_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->sea_lamp_coin_);
    }
    if ( this->sea_lamp_coin_
      || *(_DWORD *)(v2 + 32)
      || *(_DWORD *)(v2 + 32) + this->sea_lamp_coin_ <= this->sea_lamp_coin_ )
    {
      result = 0LL;
    }
    else
    {
LABEL_30:
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/sea_lamp_activity.cpp",
        "checkAddSeaLampCoin",
        322);
      v16 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(&v22, (const char (*)[30])off_26487EA0);
      v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &this->sea_lamp_coin_);
      v18 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v17, (const char (*)[11])" add_coin:");
      v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v2 + 32));
      v20 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v19, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &val);
      common::milog::MiLogStream::~MiLogStream(&v22);
      result = 895LL;
    }
  }
  if ( v23 == (char *)v2 )
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

// Line 330: range 0000000017FC601C-0000000017FC64C4
int32_t __cdecl SeaLampActivity::addSeaLampCoin(
        SeaLampActivity *const this,
        uint32_t add_coin,
        const ActionReason *reason)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  int32_t v6; // r14d
  PlayerBasicComp *BasicComp; // rax
  __int64 v8; // rsi
  __int64 v9; // rdx
  char v10; // al
  PlayerItemComp *ItemComp; // rdi
  data::ItemLimitType vptr_PlayerCompBase_high; // ecx
  uint32_t vptr_PlayerCompBase; // r8d
  int32_t result; // eax
  std::string v15; // [rsp+0h] [rbp-100h]
  PlayerItemComp *reasona; // [rsp+8h] [rbp-F8h]
  unsigned int add_coina; // [rsp+14h] [rbp-ECh]
  SeaLampActivity *thisa; // [rsp+18h] [rbp-E8h]
  int32_t ret; // [rsp+28h] [rbp-D8h]
  unsigned int old_coin; // [rsp+2Ch] [rbp-D4h]
  std::string v21; // [rsp+30h] [rbp-D0h] BYREF
  char v22[176]; // [rsp+50h] [rbp-B0h] BYREF

  *(&v15._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  HIDWORD(v15._anon_0._M_allocated_capacity) = add_coin;
  v15._M_string_length = (std::string::size_type)reason;
  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 1 10 holder:337 64 24 10 notify:342";
  *(_QWORD *)(v3 + 16) = SeaLampActivity::addSeaLampCoin;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  ret = SeaLampActivity::checkAddSeaLampCoin(this, add_coin);
  if ( ret )
  {
    v6 = ret;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    BasicComp = Player::getBasicComp(this->player_);
    PlayerBasicComp::getNextTransNo[abi:cxx11](&v21, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48), 0x67u, v15);
    std::string::~string(&v21);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->sea_lamp_coin_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&thisa->sea_lamp_coin_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&thisa->sea_lamp_coin_);
    }
    old_coin = thisa->sea_lamp_coin_;
    v8 = add_coina;
    v9 = SAFE_ADD<unsigned int,unsigned int>(old_coin, add_coina);
    v10 = *(_BYTE *)(((unsigned __int64)&thisa->sea_lamp_coin_ >> 3) + 0x7FFF8000);
    if ( v10 != 0 && v10 <= 3 )
    {
      LOBYTE(v8) = v10 != 0;
      __asan_report_store4(&thisa->sea_lamp_coin_, v8, v9);
    }
    thisa->sea_lamp_coin_ = v9;
    proto::SeaLampCoinNotify::SeaLampCoinNotify((proto::SeaLampCoinNotify *const)(v3 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&thisa->sea_lamp_coin_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&thisa->sea_lamp_coin_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&thisa->sea_lamp_coin_);
    }
    proto::SeaLampCoinNotify::set_sea_lamp_coin((proto::SeaLampCoinNotify *const)(v3 + 64), thisa->sea_lamp_coin_);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&thisa->player_);
    Player::sendProto(thisa->player_, (const google::protobuf::Message *)(v3 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&thisa->player_);
    ItemComp = Player::getItemComp(thisa->player_);
    if ( *(_BYTE *)((((unsigned __int64)&reasona->_vptr_PlayerCompBase + 4) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)reasona + 4) & 7) + 3) >= *(_BYTE *)((((unsigned __int64)&reasona->_vptr_PlayerCompBase + 4) >> 3)
                                                            + 0x7FFF8000) )
    {
      ItemComp = (PlayerItemComp *)((char *)&reasona->_vptr_PlayerCompBase + 4);
      __asan_report_load4((char *)&reasona->_vptr_PlayerCompBase + 4);
    }
    vptr_PlayerCompBase_high = HIDWORD(reasona->_vptr_PlayerCompBase);
    if ( *(_BYTE *)(((unsigned __int64)reasona >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)reasona & 7) + 3) >= *(_BYTE *)(((unsigned __int64)reasona >> 3) + 0x7FFF8000) )
    {
      ItemComp = reasona;
      __asan_report_load4(reasona);
    }
    vptr_PlayerCompBase = (uint32_t)reasona->_vptr_PlayerCompBase;
    if ( *(_BYTE *)(((unsigned __int64)&thisa->sea_lamp_coin_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&thisa->sea_lamp_coin_ >> 3) + 0x7FFF8000) <= 3 )
    {
      ItemComp = (PlayerItemComp *)&thisa->sea_lamp_coin_;
      __asan_report_load4(&thisa->sea_lamp_coin_);
    }
    PlayerItemComp::logPlayerAddCoin(
      ItemComp,
      ITEM_VIRTUAL_SEA_LAMP_COIN,
      old_coin,
      thisa->sea_lamp_coin_,
      vptr_PlayerCompBase,
      vptr_PlayerCompBase_high,
      0);
    v6 = 0;
    proto::SeaLampCoinNotify::~SeaLampCoinNotify((proto::SeaLampCoinNotify *const)(v3 + 64));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48));
  }
  result = v6;
  if ( v22 == (char *)v3 )
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

// Line 351: range 0000000017FC64C6-0000000017FC680B
__int64 __fastcall SeaLampActivity::checkSubSeaLampCoin(const SeaLampActivity *const this, uint32_t sub_coin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v6; // r13
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r13
  unsigned int val; // [rsp+1Ch] [rbp-84h] BYREF
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-80h] BYREF
  char v16[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 sub_coin:350";
  *(_QWORD *)(v2 + 16) = SeaLampActivity::checkSubSeaLampCoin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = sub_coin;
  if ( !BaseActivity::isOpening((const BaseActivity *const)this, 0)
    || BaseActivity::isSettled((const BaseActivity *const)this) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/sea_lamp_activity.cpp",
      "checkSubSeaLampCoin",
      354);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v15, (const char (*)[5])"uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v7, (const char (*)[12])off_26487FA0);
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->sea_lamp_coin_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->sea_lamp_coin_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->sea_lamp_coin_);
    }
    if ( this->sea_lamp_coin_ >= *(_DWORD *)(v2 + 32) )
    {
      result = 0LL;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/sea_lamp_activity.cpp",
        "checkSubSeaLampCoin",
        359);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v15, (const char (*)[16])"sea_lamp_coin_:");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->sea_lamp_coin_);
      v11 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v10, (const char (*)[11])" sub_coin:");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 32));
      v13 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v12, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = 896LL;
    }
  }
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

// Line 366: range 0000000017FC680C-0000000017FC6C83
int32_t __cdecl SeaLampActivity::subSeaLampCoin(
        SeaLampActivity *const this,
        uint32_t sub_coin,
        const SubItemReason *reason)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  int32_t v6; // r14d
  PlayerBasicComp *BasicComp; // rax
  PlayerItemComp *ItemComp; // rdi
  uint32_t vptr_PlayerCompBase; // esi
  int32_t result; // eax
  std::string v11; // [rsp+0h] [rbp-100h]
  PlayerItemComp *reasona; // [rsp+8h] [rbp-F8h]
  uint32_t sub_coina; // [rsp+14h] [rbp-ECh]
  SeaLampActivity *thisa; // [rsp+18h] [rbp-E8h]
  int32_t ret; // [rsp+28h] [rbp-D8h]
  uint32_t old_coin; // [rsp+2Ch] [rbp-D4h]
  std::string v17; // [rsp+30h] [rbp-D0h] BYREF
  char v18[176]; // [rsp+50h] [rbp-B0h] BYREF

  *(&v11._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  HIDWORD(v11._anon_0._M_allocated_capacity) = sub_coin;
  v11._M_string_length = (std::string::size_type)reason;
  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 1 10 holder:377 64 24 10 notify:382";
  *(_QWORD *)(v3 + 16) = SeaLampActivity::subSeaLampCoin;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  ret = SeaLampActivity::checkSubSeaLampCoin(this, sub_coin);
  if ( ret )
  {
    v6 = ret;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->sea_lamp_coin_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->sea_lamp_coin_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->sea_lamp_coin_);
    }
    if ( sub_coin <= this->sea_lamp_coin_ )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      BasicComp = Player::getBasicComp(this->player_);
      PlayerBasicComp::getNextTransNo[abi:cxx11](&v17, BasicComp);
      StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48), 0x67u, v11);
      std::string::~string(&v17);
      if ( *(_BYTE *)(((unsigned __int64)&thisa->sea_lamp_coin_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&thisa->sea_lamp_coin_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&thisa->sea_lamp_coin_);
      }
      old_coin = thisa->sea_lamp_coin_;
      thisa->sea_lamp_coin_ = old_coin - sub_coina;
      proto::SeaLampCoinNotify::SeaLampCoinNotify((proto::SeaLampCoinNotify *const)(v3 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&thisa->sea_lamp_coin_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&thisa->sea_lamp_coin_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&thisa->sea_lamp_coin_);
      }
      proto::SeaLampCoinNotify::set_sea_lamp_coin((proto::SeaLampCoinNotify *const)(v3 + 64), thisa->sea_lamp_coin_);
      if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&thisa->player_);
      Player::sendProto(thisa->player_, (const google::protobuf::Message *)(v3 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&thisa->player_);
      ItemComp = Player::getItemComp(thisa->player_);
      if ( *(_BYTE *)(((unsigned __int64)reasona >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)reasona & 7) + 3) >= *(_BYTE *)(((unsigned __int64)reasona >> 3) + 0x7FFF8000) )
      {
        ItemComp = reasona;
        __asan_report_load4(reasona);
      }
      vptr_PlayerCompBase = (uint32_t)reasona->_vptr_PlayerCompBase;
      if ( *(_BYTE *)(((unsigned __int64)&thisa->sea_lamp_coin_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&thisa->sea_lamp_coin_ >> 3) + 0x7FFF8000) <= 3 )
      {
        ItemComp = (PlayerItemComp *)&thisa->sea_lamp_coin_;
        __asan_report_load4(&thisa->sea_lamp_coin_);
      }
      PlayerItemComp::logPlayerAddCoin(
        ItemComp,
        ITEM_VIRTUAL_SEA_LAMP_COIN,
        old_coin,
        thisa->sea_lamp_coin_,
        vptr_PlayerCompBase,
        ITEM_LIMIT_NONE,
        0);
      v6 = 0;
      proto::SeaLampCoinNotify::~SeaLampCoinNotify((proto::SeaLampCoinNotify *const)(v3 + 64));
      StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48));
    }
    else
    {
      v6 = -1;
    }
  }
  result = v6;
  if ( v18 == (char *)v3 )
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

// Line 391: range 0000000017FC6C84-0000000017FC6E0A
_BOOL8 __fastcall SeaLampActivity::isSectionOpen(const SeaLampActivity *const this, uint32_t section_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rax
  _BOOL8 result; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,SeaLampSectionInfo> >::_Self __x; // [rsp+10h] [rbp-70h] BYREF
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,SeaLampSectionInfo> >::_Self __y; // [rsp+18h] [rbp-68h] BYREF
  char v9[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 14 section_id:390";
  *(_QWORD *)(v2 + 16) = SeaLampActivity::isSectionOpen;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = section_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v5 = (unsigned __int64)(this->_vptr_DescribalBase + 17);
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8(this->_vptr_DescribalBase + 17);
  result = 0;
  if ( (*(unsigned __int8 (__fastcall **)(const SeaLampActivity *const))v5)(this) != 1 )
  {
    __y._M_node = std::map<unsigned int,SeaLampSectionInfo>::end(&this->section_map_)._M_node;
    __x._M_node = std::map<unsigned int,SeaLampSectionInfo>::find(
                    &this->section_map_,
                    (const std::map<unsigned int,SeaLampSectionInfo>::key_type *)(v2 + 32))._M_node;
    if ( std::operator!=(&__x, &__y) )
      result = 1;
  }
  if ( v9 == (char *)v2 )
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

// Line 396: range 0000000017FC6E0C-0000000017FC7305
__int64 __fastcall SeaLampActivity::openSection(SeaLampActivity *const this, uint32_t section_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // r14
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  __int64 result; // rax
  const ActivitySeaLampExcelConfigMgr *p_activity_sea_lamp_config_mgr; // rdi
  uint32_t v11; // edx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  unsigned int *v15; // rax
  uint32_t *v16; // rdx
  unsigned int val; // [rsp+10h] [rbp-F0h] BYREF
  uint32_t watcher_id; // [rsp+14h] [rbp-ECh]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-E8h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-E0h] BYREF
  const data::SeaLampSectionExcelConfig *section_config_ptr; // [rsp+28h] [rbp-D8h]
  SeaLampSectionInfo *section_info; // [rsp+30h] [rbp-D0h]
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-C8h]
  std::shared_ptr<Config> v25; // [rsp+40h] [rbp-C0h] BYREF
  common::milog::MiLogStream v26; // [rsp+50h] [rbp-B0h] BYREF
  char v27[144]; // [rsp+70h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 14 section_id:395 64 8 8 iter:397";
  *(_QWORD *)(v2 + 16) = SeaLampActivity::openSection;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = section_id;
  *(std::map<unsigned int,SeaLampSectionInfo>::iterator *)(v2 + 64) = std::map<unsigned int,SeaLampSectionInfo>::find(
                                                                        &this->section_map_,
                                                                        (const std::map<unsigned int,SeaLampSectionInfo>::key_type *)(v2 + 48));
  __for_end._M_current = (const unsigned int *)std::map<unsigned int,SeaLampSectionInfo>::end(&this->section_map_)._M_node;
  if ( std::operator!=(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,SeaLampSectionInfo> >::_Self *)(v2 + 64),
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,SeaLampSectionInfo> >::_Self *)&__for_end) )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/sea_lamp_activity.cpp",
      "openSection",
      400);
    v5 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v26, (const char (*)[5])"uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    v7 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v6, (const char (*)[13])" section_id:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v8, (const char (*)[14])" already open");
    common::milog::MiLogStream::~MiLogStream(&v26);
    result = 0LL;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v25);
    p_activity_sea_lamp_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v25)->design_config.txt_config_mgr.activity_sea_lamp_config_mgr;
    v11 = *(_DWORD *)(v2 + 48);
    if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      p_activity_sea_lamp_config_mgr = (const ActivitySeaLampExcelConfigMgr *)&this->activity_id_;
      __asan_report_load4(&this->activity_id_);
    }
    section_config_ptr = ActivitySeaLampExcelConfigMgr::findSectionConfig(
                           p_activity_sea_lamp_config_mgr,
                           this->activity_id_,
                           v11);
    std::shared_ptr<Config>::~shared_ptr(&v25);
    if ( section_config_ptr )
    {
      section_info = std::map<unsigned int,SeaLampSectionInfo>::operator[](
                       &this->section_map_,
                       (const std::map<unsigned int,SeaLampSectionInfo>::key_type *)(v2 + 48));
      __for_range = &section_config_ptr->watcher_id_vec;
      __for_begin._M_current = std::vector<unsigned int>::begin(&section_config_ptr->watcher_id_vec)._M_current;
      __for_end._M_current = std::vector<unsigned int>::end(__for_range)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
      {
        v15 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
        v16 = v15;
        if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v15);
        }
        watcher_id = *v16;
        BaseActivity::tryRegisterWatcher((BaseActivity *const)this, watcher_id);
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
      }
      BaseActivity::updateAllConds((BaseActivity *const)this);
      BaseActivity::notifyClientData((BaseActivity *const)this, 0);
      result = 0LL;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/sea_lamp_activity.cpp",
        "openSection",
        406);
      v12 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
              &v26,
              (const char (*)[38])"findSectionConfig fails, activity_id:");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &this->activity_id_);
      v14 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v13, (const char (*)[13])" section_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v26);
      result = 0xFFFFFFFFLL;
    }
  }
  if ( v27 == (char *)v2 )
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

// Line 426: range 0000000017FC7306-0000000017FC7882
int32_t __cdecl SeaLampActivity::closeContent(SeaLampActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  common::milog::MiLogStream *v4; // r13
  common::milog::MiLogStream *v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rdx
  PlayerCombineComp *CombineComp; // rax
  Scene *v9; // rax
  SceneBlockGroupComp *BlockGroupComp; // rcx
  char v11; // al
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  common::milog::MiLogStream *v15; // r14
  common::milog::MiLogStream *v16; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+1Ch] [rbp-94h] BYREF
  common::milog::MiLogStream v19; // [rsp+20h] [rbp-90h] BYREF
  char v20[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 13 scene_ptr:441";
  *(_QWORD *)(v1 + 16) = SeaLampActivity::closeContent;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 84) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_content_closed_);
  }
  if ( this->is_content_closed_ )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/sea_lamp_activity.cpp",
      "closeContent",
      429);
    v4 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v19, (const char (*)[5])"uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
      v5,
      (const char (*)[36])" is_content_closed_ is already true");
    common::milog::MiLogStream::~MiLogStream(&v19);
  }
  else
  {
    v6 = ((_BYTE)this - 84) & 7;
    v7 = (*(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000));
    if ( (_BYTE)v7 )
      __asan_report_store1(&this->is_content_closed_, v6, v7);
    this->is_content_closed_ = 1;
    SeaLampActivity::unregisterObserver(this);
    SeaLampActivity::notifyClientReloadTerrain(this);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    CombineComp = Player::getCombineComp(this->player_);
    PlayerCombineComp::refreshCombine(CombineComp);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getMainWorldScene((PlayerSceneComp *const)(v1 + 32));
    if ( !std::operator!=<PlayerWorldScene>((const std::shared_ptr<PlayerWorldScene> *)(v1 + 32), 0LL) )
      goto LABEL_21;
    v9 = (Scene *)std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    BlockGroupComp = Scene::getBlockGroupComp(v9);
    if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->activity_id_);
    }
    if ( SceneBlockGroupComp::unloadActivitGroups(BlockGroupComp, this->activity_id_) )
      v11 = 1;
    else
LABEL_21:
      v11 = 0;
    if ( v11 )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/sea_lamp_activity.cpp",
        "closeContent",
        444);
      v12 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
              &v19,
              (const char (*)[40])"unloadActivitGroups fails, activity_id:");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &this->activity_id_);
      v14 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v13, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &val);
      common::milog::MiLogStream::~MiLogStream(&v19);
    }
    BaseActivity::notifyClientData((BaseActivity *const)this, 0);
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/sea_lamp_activity.cpp",
      "closeContent",
      449);
    v15 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v19, (const char (*)[5])"uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
    common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v16, (const char (*)[14])" closeContent");
    common::milog::MiLogStream::~MiLogStream(&v19);
    std::shared_ptr<PlayerWorldScene>::~shared_ptr((std::shared_ptr<PlayerWorldScene> *const)(v1 + 32));
  }
  result = 0;
  if ( v20 == (char *)v1 )
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

// Line 456: range 0000000017FC7884-0000000017FC79F6
void __cdecl SeaLampActivity::notifyClientReloadTerrain(SeaLampActivity *const this)
{
  std::shared_ptr<Scene> *v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  Scene *v4; // rax
  std::shared_ptr<PlayerWorldScene> __r; // [rsp+10h] [rbp-70h] BYREF
  char v6[96]; // [rsp+20h] [rbp-60h] BYREF

  v1 = (std::shared_ptr<Scene> *)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = (std::shared_ptr<Scene> *)v2;
  }
  v1->_M_ptr = (std::__shared_ptr<Scene,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v1->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 13 scene_ptr:457";
  v1[1]._M_ptr = (std::__shared_ptr<Scene,(__gnu_cxx::_Lock_policy)2>::element_type *)SeaLampActivity::notifyClientReloadTerrain;
  v3 = (unsigned __int64)v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getMainWorldScene((PlayerSceneComp *const)&__r);
  std::shared_ptr<Scene>::shared_ptr<PlayerWorldScene,void>(v1 + 2, &__r);
  std::shared_ptr<PlayerWorldScene>::~shared_ptr(&__r);
  if ( std::operator!=<Scene>(v1 + 2, 0LL) )
  {
    v4 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
    Scene::notifyClientReloadTerrain(v4, 0LL);
  }
  std::shared_ptr<Scene>::~shared_ptr(v1 + 2);
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v1->_M_ptr = (std::__shared_ptr<Scene,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 465: range 0000000017FC79F8-0000000017FC7C87
void __cdecl SeaLampActivity::delSectionWatchers(SeaLampActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  ActivitySeaLampExcelConfigMgr *p_activity_sea_lamp_config_mgr; // rcx
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v5; // rax
  uint32_t *v6; // rdx
  std::vector<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-A8h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-A0h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+28h] [rbp-98h]
  std::shared_ptr<Config> v10; // [rsp+30h] [rbp-90h] BYREF
  char v11[128]; // [rsp+40h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 24 18 watcher_id_vec:467";
  *(_QWORD *)(v1 + 16) = SeaLampActivity::delSectionWatchers;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218103808;
  v3[536862722] = -202116109;
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v1 + 32));
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v10);
  p_activity_sea_lamp_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v10)->design_config.txt_config_mgr.activity_sea_lamp_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->activity_id_);
  }
  ActivitySeaLampExcelConfigMgr::findAllSectionWatcherVec(
    p_activity_sea_lamp_config_mgr,
    this->activity_id_,
    (std::vector<unsigned int> *)(v1 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v10);
  __for_range = (std::vector<unsigned int> *)(v1 + 32);
  __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v1 + 32))._M_current;
  __for_end._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v1 + 32))._M_current;
  while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v5 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    BaseActivity::tryUnregisterWatcher((BaseActivity *const)this, *v6);
    __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v1 + 32));
  if ( v11 == (char *)v1 )
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

// Line 477: range 0000000017FC7C88-0000000017FC7D96
int32_t __cdecl SeaLampActivity::clearByGm(SeaLampActivity *const this)
{
  common::milog::MiLogStream *v1; // rbx
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v4; // [rsp+20h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v4,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/sea_lamp_activity.cpp",
    "clearByGm",
    478);
  v1 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v4, (const char (*)[16])"clearByGm, uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, &val);
  common::milog::MiLogStream::~MiLogStream(&v4);
  if ( *(_BYTE *)(((unsigned __int64)&this->selected_avatar_reward_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->selected_avatar_reward_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->selected_avatar_reward_id_, &val, &this->selected_avatar_reward_id_);
  }
  this->selected_avatar_reward_id_ = 0;
  return 0;
};

// Line 485: range 0000000017FC7D98-0000000017FC7E25
int32_t __cdecl SeaLampActivity::closeContentByGm(SeaLampActivity *const this)
{
  common::milog::MiLogStream v2; // [rsp+10h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v2,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/sea_lamp_activity.cpp",
    "closeContentByGm",
    486);
  common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v2, (const char (*)[20])"closeContentByGm!!!");
  common::milog::MiLogStream::~MiLogStream(&v2);
  SeaLampActivity::closeContent(this);
  return 0;
};

// Line 492: range 0000000017FC7E26-0000000017FC7F5A
int32_t __cdecl SeaLampActivity::openContentByGm(SeaLampActivity *const this)
{
  __int64 v2; // rsi
  __int64 v3; // rdx
  common::milog::MiLogStream v4; // [rsp+10h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 84) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_content_closed_);
  }
  if ( !this->is_content_closed_ )
    return 0;
  common::milog::MiLogStream::create(
    &v4,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/sea_lamp_activity.cpp",
    "openContentByGm",
    498);
  common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v4, (const char (*)[19])"openContentByGm!!!");
  common::milog::MiLogStream::~MiLogStream(&v4);
  v2 = ((_BYTE)this - 84) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_content_closed_, v2, v3);
  this->is_content_closed_ = 0;
  SeaLampActivity::registerObserver(this);
  SeaLampActivity::notifyClientReloadTerrain(this);
  return 0;
};

// Line 510: range 0000000017FC7F5C-0000000017FC8176
uint32_t __cdecl SeaLampActivity::getFinishMiniParentQuestNum(const SeaLampActivity *const this)
{
  char v1; // al
  ActivitySeaLampExcelConfigMgr *p_activity_sea_lamp_config_mgr; // rbx
  uint32_t ActivityId; // eax
  unsigned int *v5; // rax
  uint32_t *v6; // rdx
  PlayerQuestComp *QuestComp; // rax
  uint32_t finish_num; // [rsp+18h] [rbp-48h]
  uint32_t parent_quest_id; // [rsp+1Ch] [rbp-44h]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-40h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-38h] BYREF
  const std::vector<unsigned int> *mini_parent_quest_vec_ptr; // [rsp+30h] [rbp-30h]
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-28h]
  std::shared_ptr<Config> v14[2]; // [rsp+40h] [rbp-20h] BYREF

  if ( !BaseActivity::isOpening((const BaseActivity *const)this, 0)
    || BaseActivity::isSettled((const BaseActivity *const)this) )
  {
    goto LABEL_6;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 84) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_content_closed_);
  }
  if ( this->is_content_closed_ )
LABEL_6:
    v1 = 1;
  else
    v1 = 0;
  if ( v1 )
    return 0;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v14);
  p_activity_sea_lamp_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v14)->design_config.txt_config_mgr.activity_sea_lamp_config_mgr;
  ActivityId = BaseActivity::getActivityId((const BaseActivity *const)this);
  mini_parent_quest_vec_ptr = ActivitySeaLampExcelConfigMgr::findActivityMiniParentQuestVec(
                                p_activity_sea_lamp_config_mgr,
                                ActivityId);
  std::shared_ptr<Config>::~shared_ptr(v14);
  if ( !mini_parent_quest_vec_ptr )
    return 0;
  finish_num = 0;
  __for_range = mini_parent_quest_vec_ptr;
  __for_begin._M_current = std::vector<unsigned int>::begin(mini_parent_quest_vec_ptr)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(mini_parent_quest_vec_ptr)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v5 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    parent_quest_id = *v6;
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    QuestComp = Player::getQuestComp(this->player_);
    if ( PlayerQuestComp::isParentQuestOnceFinished(QuestComp, parent_quest_id) )
      ++finish_num;
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  return finish_num;
};
