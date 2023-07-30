// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/buoyant_combat_activity.cpp

// Line 27: range 000000001794CB96-000000001794CBF4
void __cdecl BuoyantCombatRecordData::fromBin(
        BuoyantCombatRecordData *const this,
        const proto::BuoyantCombatDailyRecordBin *bin)
{
  uint32_t v2; // ecx

  v2 = proto::BuoyantCombatDailyRecordBin::best_score(bin);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->best_score = v2;
};

// Line 32: range 000000001794CBF6-000000001794CC53
void __cdecl BuoyantCombatRecordData::toBin(
        const BuoyantCombatRecordData *const this,
        proto::BuoyantCombatDailyRecordBin *bin)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::BuoyantCombatDailyRecordBin::set_best_score(bin, this->best_score);
};

// Line 37: range 000000001794CC54-000000001794CCB1
void __cdecl BuoyantCombatRecordData::toClient(
        const BuoyantCombatRecordData *const this,
        proto::BuoyantCombatDailyInfo *proto)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::BuoyantCombatDailyInfo::set_best_score(proto, this->best_score);
};

// Line 42: range 000000001794CCB2-000000001794CE45
int32_t __cdecl BuoyantCombatActivity::fromScheduleBin(
        BuoyantCombatActivity *const this,
        const proto::ActivityScheduleBin *bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t result; // eax
  google::protobuf::RepeatedPtrField<proto::BuoyantCombatDailyRecordBin>::const_iterator __for_begin; // [rsp+18h] [rbp-88h] BYREF
  google::protobuf::RepeatedPtrField<proto::BuoyantCombatDailyRecordBin>::const_iterator __for_end; // [rsp+20h] [rbp-80h] BYREF
  const proto::BuoyantCombatScheduleBin *schedule_bin; // [rsp+28h] [rbp-78h]
  const google::protobuf::RepeatedPtrField<proto::BuoyantCombatDailyRecordBin> *__for_range; // [rsp+30h] [rbp-70h]
  const proto::BuoyantCombatDailyRecordBin *daily_bin; // [rsp+38h] [rbp-68h]
  char v11[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 daily_data:47";
  *(_QWORD *)(v2 + 16) = BuoyantCombatActivity::fromScheduleBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  std::vector<BuoyantCombatRecordData>::clear(&this->daily_record_vec_);
  schedule_bin = proto::ActivityScheduleBin::buoyant_combat_bin(bin);
  __for_range = proto::BuoyantCombatScheduleBin::daily_record_list(schedule_bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::BuoyantCombatDailyRecordBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::BuoyantCombatDailyRecordBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::BuoyantCombatDailyRecordBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    daily_bin = google::protobuf::internal::RepeatedPtrIterator<proto::BuoyantCombatDailyRecordBin const>::operator*(&__for_begin);
    *(_DWORD *)(v2 + 32) = 0;
    BuoyantCombatRecordData::fromBin((BuoyantCombatRecordData *const)(v2 + 32), daily_bin);
    std::vector<BuoyantCombatRecordData>::emplace_back<BuoyantCombatRecordData&>(
      &this->daily_record_vec_,
      (BuoyantCombatRecordData *)(v2 + 32),
      (BuoyantCombatRecordData *)&this->daily_record_vec_);
    google::protobuf::internal::RepeatedPtrIterator<proto::BuoyantCombatDailyRecordBin const>::operator++(&__for_begin);
  }
  result = 0;
  if ( v11 == (char *)v2 )
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

// Line 55: range 000000001794CE46-000000001794CEF2
int32_t __cdecl BuoyantCombatActivity::toScheduleBin(
        const BuoyantCombatActivity *const this,
        proto::ActivityScheduleBin *bin)
{
  std::vector<BuoyantCombatRecordData>::const_iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::vector<BuoyantCombatRecordData>::const_iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  proto::BuoyantCombatScheduleBin *schedule_bin; // [rsp+20h] [rbp-20h]
  const std::vector<BuoyantCombatRecordData> *__for_range; // [rsp+28h] [rbp-18h]
  const BuoyantCombatRecordData *daily_data; // [rsp+30h] [rbp-10h]
  proto::BuoyantCombatDailyRecordBin *daily_bin; // [rsp+38h] [rbp-8h]

  schedule_bin = proto::ActivityScheduleBin::mutable_buoyant_combat_bin(bin);
  __for_range = &this->daily_record_vec_;
  __for_begin._M_current = std::vector<BuoyantCombatRecordData>::begin(&this->daily_record_vec_)._M_current;
  __for_end._M_current = std::vector<BuoyantCombatRecordData>::end(&this->daily_record_vec_)._M_current;
  while ( __gnu_cxx::operator!=<BuoyantCombatRecordData const*,std::vector<BuoyantCombatRecordData>>(
            &__for_begin,
            &__for_end) )
  {
    daily_data = __gnu_cxx::__normal_iterator<BuoyantCombatRecordData const*,std::vector<BuoyantCombatRecordData>>::operator*(&__for_begin);
    daily_bin = proto::BuoyantCombatScheduleBin::add_daily_record_list(schedule_bin);
    BuoyantCombatRecordData::toBin(daily_data, daily_bin);
    __gnu_cxx::__normal_iterator<BuoyantCombatRecordData const*,std::vector<BuoyantCombatRecordData>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 66: range 000000001794CEF4-000000001794D311
int32_t __cdecl BuoyantCombatActivity::toClient(BuoyantCombatActivity *const this, proto::ActivityInfo *activity_info)
{
  common::milog::MiLogStream *v2; // rbx
  ActivityBuoyantCombatExcelConfigMgr *p_activity_buoyant_combat_config_mgr; // rcx
  common::milog::MiLogStream *v5; // rax
  uint32_t v6; // ecx
  unsigned int val; // [rsp+18h] [rbp-98h] BYREF
  uint32_t level_start_time; // [rsp+1Ch] [rbp-94h]
  std::map<unsigned int,BuoyantCombatLevelInfo>::const_iterator __for_begin; // [rsp+20h] [rbp-90h] BYREF
  std::map<unsigned int,BuoyantCombatLevelInfo>::const_iterator __for_end; // [rsp+28h] [rbp-88h] BYREF
  proto::BuoyantCombatDetailInfo *detail_info; // [rsp+30h] [rbp-80h]
  const std::map<unsigned int,BuoyantCombatLevelInfo> *level_info_map_ptr; // [rsp+38h] [rbp-78h]
  const std::map<unsigned int,BuoyantCombatLevelInfo> *__for_range; // [rsp+40h] [rbp-70h]
  const std::pair<unsigned int const,BuoyantCombatLevelInfo> *v14; // [rsp+48h] [rbp-68h]
  std::tuple_element<0,const std::pair<unsigned int const,BuoyantCombatLevelInfo> >::type *day_index; // [rsp+50h] [rbp-60h]
  std::tuple_element<1,const std::pair<unsigned int const,BuoyantCombatLevelInfo> >::type *level_info; // [rsp+58h] [rbp-58h]
  proto::BuoyantCombatDailyInfo *day_content_info; // [rsp+60h] [rbp-50h]
  BuoyantCombatRecordData *daily_record_ptr; // [rsp+68h] [rbp-48h]
  std::shared_ptr<Config> v19; // [rsp+70h] [rbp-40h] BYREF
  common::milog::MiLogStream v20; // [rsp+80h] [rbp-30h] BYREF

  if ( BaseActivity::toClient(this, activity_info) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/buoyant_combat_activity.cpp",
      "toClient",
      69);
    v2 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v20,
           (const char (*)[36])"BaseActivity::toClient fails, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
    common::milog::MiLogStream::~MiLogStream(&v20);
    return -1;
  }
  else
  {
    detail_info = proto::ActivityInfo::mutable_buoyant_combat_info(activity_info);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v19);
    p_activity_buoyant_combat_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19)->design_config.txt_config_mgr.activity_buoyant_combat_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    level_info_map_ptr = ActivityBuoyantCombatExcelConfigMgr::findLevelInfoMapByActivityId(
                           p_activity_buoyant_combat_config_mgr,
                           this->activity_id_);
    std::shared_ptr<Config>::~shared_ptr(&v19);
    if ( level_info_map_ptr )
    {
      __for_range = level_info_map_ptr;
      __for_begin._M_node = std::map<unsigned int,BuoyantCombatLevelInfo>::begin(level_info_map_ptr)._M_node;
      __for_end._M_node = std::map<unsigned int,BuoyantCombatLevelInfo>::end(level_info_map_ptr)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        v14 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,BuoyantCombatLevelInfo>>::operator*(&__for_begin);
        day_index = std::get<0ul,unsigned int const,BuoyantCombatLevelInfo>(v14);
        level_info = (std::tuple_element<1,const std::pair<unsigned int const,BuoyantCombatLevelInfo> >::type *)std::get<1ul,unsigned int const,BuoyantCombatLevelInfo>(v14);
        day_content_info = proto::BuoyantCombatDetailInfo::add_daily_info_list(detail_info);
        if ( *(_BYTE *)(((unsigned __int64)day_index >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)day_index & 7) + 3) >= *(_BYTE *)(((unsigned __int64)day_index >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        v6 = *day_index;
        if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        level_start_time = BaseActivity::getBeginTimeByOpenDay(this->schedule_id_, v6);
        if ( *(_BYTE *)(((unsigned __int64)day_index >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)day_index & 7) + 3) >= *(_BYTE *)(((unsigned __int64)day_index >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        daily_record_ptr = BuoyantCombatActivity::findDailyRecord(this, *day_index);
        if ( daily_record_ptr )
          BuoyantCombatRecordData::toClient(daily_record_ptr, day_content_info);
        proto::BuoyantCombatDailyInfo::set_start_time(day_content_info, level_start_time);
        std::_Rb_tree_const_iterator<std::pair<unsigned int const,BuoyantCombatLevelInfo>>::operator++(&__for_begin);
      }
      return 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/buoyant_combat_activity.cpp",
        "toClient",
        76);
      v5 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
             &v20,
             (const char (*)[57])"[BUOYANT_COMBAT] level_info_map nullptr for activity_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->activity_id_);
      common::milog::MiLogStream::~MiLogStream(&v20);
      return -1;
    }
  }
};

// Line 94: range 000000001794D312-000000001794D36F
int32_t __cdecl BuoyantCombatActivity::init(BuoyantCombatActivity *const this)
{
  if ( BaseActivity::isOpening(this, 0) && !BaseActivity::isSettled(this) )
    BuoyantCombatActivity::registerObserver(this);
  return 0;
};

// Line 104: range 000000001794D370-000000001794D38A
void __cdecl BuoyantCombatActivity::onStart(BuoyantCombatActivity *const this)
{
  BuoyantCombatActivity::registerObserver(this);
};

// Line 109: range 000000001794D38C-000000001794D66B
void __cdecl BuoyantCombatActivity::registerObserver(BuoyantCombatActivity *const this)
{
  unsigned __int64 p_pending_que; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::weak_ptr<BuoyantCombatActivity> *p_this_wtr; // [rsp+10h] [rbp-E0h]
  std::weak_ptr<BuoyantCombatActivity> v5; // [rsp+20h] [rbp-D0h] BYREF
  PlayerEventComp varC0; // [rsp+30h] [rbp-C0h] BYREF

  p_pending_que = (unsigned __int64)&varC0.event_center_.context_.pending_que_;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      p_pending_que = v2;
  }
  *(_QWORD *)p_pending_que = 1102416563LL;
  *(_QWORD *)(p_pending_que + 8) = "2 32 16 12 this_ptr:110 64 16 12 this_wtr:116";
  *(_QWORD *)(p_pending_que + 16) = BuoyantCombatActivity::registerObserver;
  v3 = (_DWORD *)(p_pending_que >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  toThisPtr<BuoyantCombatActivity>((BuoyantCombatActivity *)(p_pending_que + 32));
  if ( std::operator==<BuoyantCombatActivity>(0LL, (const std::shared_ptr<BuoyantCombatActivity> *)(p_pending_que + 32)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&varC0._M_weak_this._M_refcount,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/buoyant_combat_activity.cpp",
      "registerObserver",
      113);
    common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
      (common::milog::MiLogStream *const)&varC0._M_weak_this._M_refcount,
      (const char (*)[53])"dynamic_pointer_cast to BuoyantCombatActivity failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&varC0._M_weak_this._M_refcount);
  }
  else
  {
    std::weak_ptr<BuoyantCombatActivity>::weak_ptr<BuoyantCombatActivity,void>(
      (std::weak_ptr<BuoyantCombatActivity> *const)(p_pending_que + 64),
      (const std::shared_ptr<BuoyantCombatActivity> *)(p_pending_que + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    p_this_wtr = (std::weak_ptr<BuoyantCombatActivity> *)Player::getEventComp(this->player_);
    std::weak_ptr<BuoyantCombatActivity>::weak_ptr(
      &v5,
      (const std::weak_ptr<BuoyantCombatActivity> *)(p_pending_que + 64));
    PlayerEventComp::registerObserver<BuoyantCombatActivity,GalleryBuoyantCombatSettleEvent>(
      &varC0,
      p_this_wtr,
      (void (*)(BuoyantCombatActivity *, const GalleryBuoyantCombatSettleEvent *))&v5);
    std::weak_ptr<Observer>::operator=(&this->buoyant_combat_gallery_settle_wtr_, (std::weak_ptr<Observer> *)&varC0);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&varC0);
    std::weak_ptr<BuoyantCombatActivity>::~weak_ptr(&v5);
    std::weak_ptr<BuoyantCombatActivity>::~weak_ptr((std::weak_ptr<BuoyantCombatActivity> *const)(p_pending_que + 64));
  }
  std::shared_ptr<BuoyantCombatActivity>::~shared_ptr((std::shared_ptr<BuoyantCombatActivity> *const)(p_pending_que + 32));
  if ( &varC0.event_center_.context_.pending_que_ == (std::queue<std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> >> *)p_pending_que )
  {
    *(_QWORD *)((p_pending_que >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((p_pending_que >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)p_pending_que = 1172321806LL;
    *(_QWORD *)((p_pending_que >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((p_pending_que >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 122: range 000000001794D66C-000000001794D6F2
void __cdecl BuoyantCombatActivity::unregisterObserver(BuoyantCombatActivity *const this)
{
  PlayerEventComp *EventComp; // rax

  if ( !std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->buoyant_combat_gallery_settle_wtr_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    EventComp = Player::getEventComp(this->player_);
    PlayerEventComp::unregisterObserver(EventComp, &this->buoyant_combat_gallery_settle_wtr_);
    std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::reset(&this->buoyant_combat_gallery_settle_wtr_);
  }
};

// Line 131: range 000000001794D6F4-000000001794D714
void __cdecl BuoyantCombatActivity::onClear(BuoyantCombatActivity *const this)
{
  std::vector<BuoyantCombatRecordData>::clear(&this->daily_record_vec_);
};

// Line 136: range 000000001794D716-000000001794D73C
void __cdecl BuoyantCombatActivity::onSettle(BuoyantCombatActivity *const this)
{
  BuoyantCombatActivity::unregisterObserver(this);
  BuoyantCombatActivity::stopAllBuoyantCombatGallery(this);
};

// Line 142: range 000000001794D73E-000000001794D75D
void __cdecl BuoyantCombatActivity::onDailyRefresh(BuoyantCombatActivity *const this)
{
  BaseActivity::notifyClientData(this, 0);
};

// Line 147: range 000000001794D75E-000000001794DD48
void __cdecl BuoyantCombatActivity::onGalleryBuoyantCombatSettleEvent(
        BuoyantCombatActivity *const this,
        const GalleryBuoyantCombatSettleEvent *event)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // r14
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  const ActivityBuoyantCombatExcelConfigMgr *p_activity_buoyant_combat_config_mgr; // rdi
  uint32_t gallery_id; // edx
  common::milog::MiLogStream *v10; // rax
  uint32_t v11; // edi
  common::milog::MiLogStream *v12; // rax
  proto::BuoyantCombatGallerySettleInfo *v13; // rax
  unsigned int val; // [rsp+1Ch] [rbp-D4h] BYREF
  const BuoyantCombatLevelInfo *level_info_ptr; // [rsp+20h] [rbp-D0h]
  proto::BuoyantCombatSettleInfo *buoyant_combat_settle_info; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<Config> v18; // [rsp+30h] [rbp-C0h] BYREF
  char v19[176]; // [rsp+40h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 17 is_new_record:154 64 32 10 notify:167";
  *(_QWORD *)(v2 + 16) = BuoyantCombatActivity::onGalleryBuoyantCombatSettleEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -202116109;
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v2 + 64),
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/buoyant_combat_activity.cpp",
    "onGalleryBuoyantCombatSettleEvent",
    148);
  v5 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
         (common::milog::MiLogStream *const)(v2 + 64),
         (const char (*)[58])"[BUOYANT_COMBAT] onGalleryBuoyantCombatSettleEvent, uid: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
  v7 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v6, (const char (*)[15])" ,gallery_id: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &event->gallery_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&event->gallery_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->gallery_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( !BuoyantCombatActivity::isGalleryStartOrSettleValid(this, event->gallery_id) )
  {
    *(_BYTE *)(v2 + 48) = 0;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v18);
    p_activity_buoyant_combat_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v18)->design_config.txt_config_mgr.activity_buoyant_combat_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&event->gallery_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->gallery_id >> 3) + 0x7FFF8000) <= 3 )
    {
      p_activity_buoyant_combat_config_mgr = (const ActivityBuoyantCombatExcelConfigMgr *)&event->gallery_id;
      __asan_report_load4();
    }
    gallery_id = event->gallery_id;
    if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      p_activity_buoyant_combat_config_mgr = (const ActivityBuoyantCombatExcelConfigMgr *)&this->activity_id_;
      __asan_report_load4();
    }
    level_info_ptr = ActivityBuoyantCombatExcelConfigMgr::findLevelInfoByActivityIdAndGalleryId(
                       p_activity_buoyant_combat_config_mgr,
                       this->activity_id_,
                       gallery_id);
    std::shared_ptr<Config>::~shared_ptr(&v18);
    if ( level_info_ptr )
    {
      v11 = proto::BuoyantCombatGallerySettleInfo::final_score(&event->gallery_settle_info);
      if ( *(_BYTE *)(((unsigned __int64)level_info_ptr >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)level_info_ptr >> 3) + 0x7FFF8000) <= 3 )
      {
        v11 = (unsigned int)level_info_ptr;
        __asan_report_load4();
      }
      if ( BuoyantCombatActivity::tryRecordGalleryScore(this, level_info_ptr->day_index, v11, (bool *)(v2 + 48)) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 64),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/buoyant_combat_activity.cpp",
          "onGalleryBuoyantCombatSettleEvent",
          163);
        v12 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                (common::milog::MiLogStream *const)(v2 + 64),
                (const char (*)[56])"[BUOYANT_COMBAT] tryRecordGalleryScore fail. day_index:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &level_info_ptr->day_index);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
      }
      else
      {
        proto::BuoyantCombatSettleNotify::BuoyantCombatSettleNotify((proto::BuoyantCombatSettleNotify *const)(v2 + 64));
        if ( *(_BYTE *)(((unsigned __int64)&event->gallery_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&event->gallery_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        proto::BuoyantCombatSettleNotify::set_gallery_id(
          (proto::BuoyantCombatSettleNotify *const)(v2 + 64),
          event->gallery_id);
        buoyant_combat_settle_info = proto::BuoyantCombatSettleNotify::mutable_settle_info((proto::BuoyantCombatSettleNotify *const)(v2 + 64));
        v13 = proto::BuoyantCombatSettleInfo::mutable_settle_info(buoyant_combat_settle_info);
        proto::BuoyantCombatGallerySettleInfo::operator=(v13, &event->gallery_settle_info);
        proto::BuoyantCombatSettleInfo::set_is_new_record(buoyant_combat_settle_info, *(_BYTE *)(v2 + 48));
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 64));
        BaseActivity::notifyClientData(this, 0);
        proto::BuoyantCombatSettleNotify::~BuoyantCombatSettleNotify((proto::BuoyantCombatSettleNotify *const)(v2 + 64));
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 64),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/buoyant_combat_activity.cpp",
        "onGalleryBuoyantCombatSettleEvent",
        158);
      v10 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
              (common::milog::MiLogStream *const)(v2 + 64),
              (const char (*)[53])"[BUOYANT_COMBAT] level_info nullptr for activity_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->activity_id_);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
    }
  }
  if ( v19 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 177: range 000000001794DD4A-000000001794E4D2
__int64 __fastcall BuoyantCombatActivity::tryRecordGalleryScore(
        BuoyantCombatActivity *const this,
        uint32_t day_index,
        uint32_t score,
        unsigned __int64 is_new_record)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  ActivityBuoyantCombatExcelConfigMgr *p_activity_buoyant_combat_config_mgr; // rcx
  common::milog::MiLogStream *v8; // rax
  __int64 result; // rax
  std::map<unsigned int,BuoyantCombatLevelInfo>::size_type v10; // r14
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  std::vector<BuoyantCombatRecordData>::size_type v14; // r14
  common::milog::MiLogStream *v15; // rax
  bool v16; // cl
  unsigned int *v17; // r8
  unsigned int *v18; // r9
  PlayerEventComp *EventComp; // r14
  uint32_t i; // [rsp+2Ch] [rbp-124h]
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,BuoyantCombatLevelInfo> >::_Self __y; // [rsp+30h] [rbp-120h] BYREF
  const std::map<unsigned int,BuoyantCombatLevelInfo> *level_info_map_ptr; // [rsp+38h] [rbp-118h]
  const std::vector<unsigned int> *watcher_score_vec; // [rsp+40h] [rbp-110h]
  BuoyantCombatRecordData *daily_record_ptr; // [rsp+48h] [rbp-108h]
  std::shared_ptr<Config> v27; // [rsp+50h] [rbp-100h] BYREF
  common::milog::MiLogStream v28; // [rsp+60h] [rbp-F0h] BYREF
  char v29[208]; // [rsp+80h] [rbp-D0h] BYREF

  v4 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 48 4 19 old_score_level:213 64 4 19 new_score_level:215 80 4 13 day_index:176 96 8 8 iter:189 "
                        "128 16 13 event_ptr:218";
  *(_QWORD *)(v4 + 16) = BuoyantCombatActivity::tryRecordGalleryScore;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -234556924;
  v6[536862723] = -218959360;
  v6[536862724] = -202178560;
  *(_DWORD *)(v4 + 80) = day_index;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v27);
  p_activity_buoyant_combat_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v27)->design_config.txt_config_mgr.activity_buoyant_combat_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  level_info_map_ptr = ActivityBuoyantCombatExcelConfigMgr::findLevelInfoMapByActivityId(
                         p_activity_buoyant_combat_config_mgr,
                         this->activity_id_);
  std::shared_ptr<Config>::~shared_ptr(&v27);
  if ( level_info_map_ptr )
  {
    if ( !*(_DWORD *)(v4 + 80)
      || (v10 = *(unsigned int *)(v4 + 80), v10 > std::map<unsigned int,BuoyantCombatLevelInfo>::size(level_info_map_ptr)) )
    {
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/buoyant_combat_activity.cpp",
        "tryRecordGalleryScore",
        186);
      v12 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
              &v28,
              (const char (*)[47])"[BUOYANT_COMBAT] day_index invalid. day_index:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v4 + 80));
      common::milog::MiLogStream::~MiLogStream(&v28);
      result = 0xFFFFFFFFLL;
    }
    else
    {
      *(std::map<unsigned int,BuoyantCombatLevelInfo>::const_iterator *)(v4 + 96) = std::map<unsigned int,BuoyantCombatLevelInfo>::find(
                                                                                      level_info_map_ptr,
                                                                                      (const std::map<unsigned int,BuoyantCombatLevelInfo>::key_type *)(v4 + 80));
      __y._M_node = std::map<unsigned int,BuoyantCombatLevelInfo>::end(level_info_map_ptr)._M_node;
      if ( std::operator==(
             (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,BuoyantCombatLevelInfo> >::_Self *)(v4 + 96),
             &__y) )
      {
        common::milog::MiLogStream::create(
          &v28,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/buoyant_combat_activity.cpp",
          "tryRecordGalleryScore",
          192);
        v13 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                &v28,
                (const char (*)[47])"[BUOYANT_COMBAT] day_index invalid. day_index:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v4 + 80));
        common::milog::MiLogStream::~MiLogStream(&v28);
        result = 0xFFFFFFFFLL;
      }
      else
      {
        watcher_score_vec = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,BuoyantCombatLevelInfo>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,BuoyantCombatLevelInfo> > *const)(v4 + 96))->second.watcher_score_vec;
        v14 = *(unsigned int *)(v4 + 80);
        if ( v14 > std::vector<BuoyantCombatRecordData>::size(&this->daily_record_vec_) )
        {
          for ( i = std::vector<BuoyantCombatRecordData>::size(&this->daily_record_vec_); i < *(_DWORD *)(v4 + 80); ++i )
          {
            *(_DWORD *)(v4 + 64) = 0;
            std::vector<BuoyantCombatRecordData>::emplace_back<BuoyantCombatRecordData&>(
              &this->daily_record_vec_,
              (BuoyantCombatRecordData *)(v4 + 64),
              (BuoyantCombatRecordData *)&this->daily_record_vec_);
          }
        }
        daily_record_ptr = BuoyantCombatActivity::findDailyRecord(this, *(_DWORD *)(v4 + 80));
        if ( daily_record_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)daily_record_ptr >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)daily_record_ptr & 7) + 3) >= *(_BYTE *)(((unsigned __int64)daily_record_ptr >> 3)
                                                                               + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          v16 = score > daily_record_ptr->best_score;
          if ( *(_BYTE *)((is_new_record >> 3) + 0x7FFF8000) != 0
            && (char)(is_new_record & 7) >= *(_BYTE *)((is_new_record >> 3) + 0x7FFF8000) )
          {
            __asan_report_store1(is_new_record);
          }
          *(_BYTE *)is_new_record = v16;
          if ( *(_BYTE *)is_new_record )
          {
            *(_DWORD *)(v4 + 48) = BuoyantCombatActivity::getScoreLevel(
                                     this,
                                     daily_record_ptr->best_score,
                                     watcher_score_vec);
            if ( *(_BYTE *)(((unsigned __int64)daily_record_ptr >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)daily_record_ptr & 7) + 3) >= *(_BYTE *)(((unsigned __int64)daily_record_ptr >> 3)
                                                                                 + 0x7FFF8000) )
            {
              __asan_report_store4(daily_record_ptr);
            }
            daily_record_ptr->best_score = score;
            *(_DWORD *)(v4 + 64) = BuoyantCombatActivity::getScoreLevel(
                                     this,
                                     daily_record_ptr->best_score,
                                     watcher_score_vec);
            if ( *(_DWORD *)(v4 + 64) > *(_DWORD *)(v4 + 48) )
            {
              common::tools::perf::make_shared<BuoyantCombatReachNewScoreLevelEvent,unsigned int &,unsigned int &,unsigned int &>(
                (unsigned int *)(v4 + 128),
                (unsigned int *)(v4 + 80),
                (unsigned int *)(v4 + 48),
                (unsigned int *)(v4 + 64),
                v17,
                v18);
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              EventComp = Player::getEventComp(this->player_);
              std::shared_ptr<BaseEvent>::shared_ptr<BuoyantCombatReachNewScoreLevelEvent,void>(
                (std::shared_ptr<BaseEvent> *const)&v27,
                (const std::shared_ptr<BuoyantCombatReachNewScoreLevelEvent> *)(v4 + 128));
              PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v27);
              std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v27);
              std::shared_ptr<BuoyantCombatReachNewScoreLevelEvent>::~shared_ptr((std::shared_ptr<BuoyantCombatReachNewScoreLevelEvent> *const)(v4 + 128));
            }
          }
          result = 0LL;
        }
        else
        {
          common::milog::MiLogStream::create(
            &v28,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/activity/buoyant_combat_activity.cpp",
            "tryRecordGalleryScore",
            207);
          v15 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
                  &v28,
                  (const char (*)[54])"[BUOYANT_COMBAT] daily_record_ptr is null. day_index:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v4 + 80));
          common::milog::MiLogStream::~MiLogStream(&v28);
          result = 0xFFFFFFFFLL;
        }
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/buoyant_combat_activity.cpp",
      "tryRecordGalleryScore",
      181);
    v8 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
           &v28,
           (const char (*)[57])"[BUOYANT_COMBAT] level_info_map nullptr for activity_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->activity_id_);
    common::milog::MiLogStream::~MiLogStream(&v28);
    result = 0xFFFFFFFFLL;
  }
  if ( v29 == (char *)v4 )
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
  return result;
};

// Line 226: range 000000001794E4D4-000000001794E580
uint32_t __cdecl BuoyantCombatActivity::getScoreLevel(
        BuoyantCombatActivity *const this,
        uint32_t score,
        const std::vector<unsigned int> *score_vec)
{
  std::vector<unsigned int>::const_reference v3; // rdx
  uint32_t score_level; // [rsp+28h] [rbp-18h]
  uint32_t idx; // [rsp+2Ch] [rbp-14h]

  score_level = 0;
  for ( idx = 0; idx < std::vector<unsigned int>::size(score_vec); ++idx )
  {
    v3 = std::vector<unsigned int>::operator[](score_vec, idx);
    if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( score < *v3 )
      break;
    score_level = idx + 1;
  }
  return score_level;
};

// Line 243: range 000000001794E582-000000001794E5EC
BuoyantCombatRecordData *__cdecl BuoyantCombatActivity::findDailyRecord(
        BuoyantCombatActivity *const this,
        uint32_t day_index)
{
  if ( !day_index || day_index > std::vector<BuoyantCombatRecordData>::size(&this->daily_record_vec_) )
    return 0LL;
  else
    return std::vector<BuoyantCombatRecordData>::operator[](&this->daily_record_vec_, day_index - 1);
};

// Line 252: range 000000001794E5EE-000000001794EAB3
int32_t __cdecl BuoyantCombatActivity::isGalleryStartOrSettleValid(
        const BuoyantCombatActivity *const this,
        uint32_t gallery_id)
{
  const BuoyantCombatActivity *v2; // rdx
  unsigned __int64 v3; // rax
  char v4; // al
  common::milog::MiLogStream *v5; // rax
  ActivityBuoyantCombatExcelConfigMgr *p_activity_buoyant_combat_config_mgr; // rcx
  common::milog::MiLogStream *v8; // rax
  uint32_t day_index; // ecx
  common::milog::MiLogStream *v10; // rax
  PlayerSceneComp *SceneComp; // rax
  PlayerMpComp *MpComp; // rax
  common::milog::MiLogStream *v13; // rbx
  unsigned int val; // [rsp+1Ch] [rbp-54h] BYREF
  uint32_t now; // [rsp+20h] [rbp-50h]
  uint32_t level_start_time; // [rsp+24h] [rbp-4Ch]
  const BuoyantCombatLevelInfo *level_info_ptr; // [rsp+28h] [rbp-48h]
  std::shared_ptr<Config> v18; // [rsp+30h] [rbp-40h] BYREF
  common::milog::MiLogStream v19; // [rsp+40h] [rbp-30h] BYREF

  if ( !BaseActivity::isOpening(this, 0) )
    goto LABEL_7;
  v2 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v3 = (unsigned __int64)(this->_vptr_DescribalBase + 17);
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    v3 = __asan_report_load8();
  if ( (*(unsigned __int8 (__fastcall **)(const BuoyantCombatActivity *))v3)(v2) )
LABEL_7:
    v4 = 1;
  else
    v4 = 0;
  if ( v4 )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/buoyant_combat_activity.cpp",
      "isGalleryStartOrSettleValid",
      255);
    v5 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
           &v19,
           (const char (*)[51])"[BUOYANT_COMBAT] activity is not open activity_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->activity_id_);
    common::milog::MiLogStream::~MiLogStream(&v19);
    return 860;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v18);
    p_activity_buoyant_combat_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v18)->design_config.txt_config_mgr.activity_buoyant_combat_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    level_info_ptr = ActivityBuoyantCombatExcelConfigMgr::findLevelInfoByActivityIdAndGalleryId(
                       p_activity_buoyant_combat_config_mgr,
                       this->activity_id_,
                       gallery_id);
    std::shared_ptr<Config>::~shared_ptr(&v18);
    if ( level_info_ptr )
    {
      now = common::tools::TimeUtils::getNow();
      if ( *(_BYTE *)(((unsigned __int64)level_info_ptr >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)level_info_ptr >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      day_index = level_info_ptr->day_index;
      if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      level_start_time = BaseActivity::getBeginTimeByOpenDay(this->schedule_id_, day_index);
      if ( now >= level_start_time )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        SceneComp = Player::getSceneComp(this->player_);
        if ( !PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
        {
          return 512;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          MpComp = Player::getMpComp(this->player_);
          if ( PlayerMpComp::isInMpMode(MpComp) )
          {
            common::milog::MiLogStream::create(
              &v19,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/activity/buoyant_combat_activity.cpp",
              "isGalleryStartOrSettleValid",
              278);
            v13 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                    &v19,
                    (const char (*)[52])"[BUOYANT_COMBAT] should not start in mp mode, uid: ");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            val = Player::getUid(this->player_);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
            common::milog::MiLogStream::~MiLogStream(&v19);
            return 1202;
          }
          else
          {
            return 0;
          }
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v19,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/buoyant_combat_activity.cpp",
          "isGalleryStartOrSettleValid",
          269);
        v10 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                &v19,
                (const char (*)[44])"[BUOYANT_COMBAT] level not start. day_index");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &level_info_ptr->day_index);
        common::milog::MiLogStream::~MiLogStream(&v19);
        return -1;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/buoyant_combat_activity.cpp",
        "isGalleryStartOrSettleValid",
        261);
      v8 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
             &v19,
             (const char (*)[53])"[BUOYANT_COMBAT] level_info nullptr for activity_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->activity_id_);
      common::milog::MiLogStream::~MiLogStream(&v19);
      return 5;
    }
  }
};

// Line 285: range 000000001794EAB4-000000001794F32E
__int64 __fastcall BuoyantCombatActivity::startBuoyantCombatGallery(
        BuoyantCombatActivity *const this,
        uint32_t gallery_id,
        uint32_t difficult_level)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned int v6; // r14d
  common::milog::MiLogStream *v7; // r14
  Scene *v8; // rax
  Scene *v9; // rax
  SceneGalleryComp *GalleryComp; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  Scene *v14; // rax
  uint32_t v15; // eax
  BuoyantCombatGallery *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  Scene *v22; // rax
  SceneGalleryComp *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  __int64 result; // rax
  unsigned int val; // [rsp+18h] [rbp-158h] BYREF
  int32_t ret; // [rsp+1Ch] [rbp-154h]
  common::milog::MiLogStream v34; // [rsp+20h] [rbp-150h] BYREF
  char v35[304]; // [rsp+40h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 48 4 14 gallery_id:284 64 4 19 difficult_level:284 80 16 13 scene_ptr:291 112 16 20 base_galle"
                        "ry_ptr:305 144 16 30 buoyant_combat_gallery_ptr:311 176 48 11 uid_set:297";
  *(_QWORD *)(v3 + 16) = BuoyantCombatActivity::startBuoyantCombatGallery;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = 61956;
  v5[536862723] = 62194;
  v5[536862724] = 62194;
  v5[536862725] = 62194;
  v5[536862727] = -202116109;
  *(_DWORD *)(v3 + 48) = gallery_id;
  *(_DWORD *)(v3 + 64) = difficult_level;
  ret = BuoyantCombatActivity::isGalleryStartOrSettleValid(this, *(_DWORD *)(v3 + 48));
  if ( ret )
  {
    v6 = ret;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v3 + 80));
    if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 80)) )
    {
      common::milog::MiLogStream::create(
        &v34,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/buoyant_combat_activity.cpp",
        "startBuoyantCombatGallery",
        294);
      v7 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
             &v34,
             (const char (*)[43])"[BUOYANT_COMBAT] getCurScene failed, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
      common::milog::MiLogStream::~MiLogStream(&v34);
      v6 = -1;
    }
    else
    {
      std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 176));
      v8 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
      Scene::getPlayerUidSet(v8, (std::set<unsigned int> *)(v3 + 176));
      v9 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
      GalleryComp = Scene::getGalleryComp(v9);
      if ( SceneGalleryComp::initGallery(GalleryComp, *(_DWORD *)(v3 + 48), (const std::set<unsigned int> *)(v3 + 176)) )
      {
        common::milog::MiLogStream::create(
          &v34,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/buoyant_combat_activity.cpp",
          "startBuoyantCombatGallery",
          301);
        v11 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                &v34,
                (const char (*)[47])"[BUOYANT_COMBAT] initGallery fail, gallery_id:");
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v11,
                (const unsigned int *)(v3 + 48));
        v13 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v12, (const char (*)[14])" activity_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &this->activity_id_);
        common::milog::MiLogStream::~MiLogStream(&v34);
        v6 = -1;
      }
      else
      {
        v14 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
        v15 = (unsigned int)Scene::getGalleryComp(v14);
        SceneGalleryComp::findGallery((SceneGalleryComp *const)(v3 + 112), v15);
        if ( std::operator==<BaseGallery>(0LL, (const std::shared_ptr<BaseGallery> *)(v3 + 112)) )
        {
          common::milog::MiLogStream::create(
            &v34,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/buoyant_combat_activity.cpp",
            "startBuoyantCombatGallery",
            308);
          common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
            &v34,
            (const char (*)[36])"[BUOYANT_COMBAT] gallery not exists");
          common::milog::MiLogStream::~MiLogStream(&v34);
          v6 = -1;
        }
        else
        {
          std::dynamic_pointer_cast<BuoyantCombatGallery,BaseGallery>((const std::shared_ptr<BaseGallery> *)(v3 + 144));
          if ( std::operator==<BuoyantCombatGallery>((const std::shared_ptr<BuoyantCombatGallery> *)(v3 + 144), 0LL) )
          {
            common::milog::MiLogStream::create(
              &v34,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/buoyant_combat_activity.cpp",
              "startBuoyantCombatGallery",
              314);
            common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
              &v34,
              (const char (*)[51])"[BUOYANT_COMBAT] buoyant_combat gallery not exists");
            common::milog::MiLogStream::~MiLogStream(&v34);
            v6 = -1;
          }
          else
          {
            v16 = std::__shared_ptr_access<BuoyantCombatGallery,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BuoyantCombatGallery,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
            if ( BuoyantCombatGallery::trySetDifficultLevel(v16, *(_DWORD *)(v3 + 64)) )
            {
              common::milog::MiLogStream::create(
                &v34,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/buoyant_combat_activity.cpp",
                "startBuoyantCombatGallery",
                319);
              v17 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
                      &v34,
                      (const char (*)[61])"[BUOYANT_COMBAT] trySetDifficultLevel fail, difficult_level:");
              v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v17,
                      (const unsigned int *)(v3 + 64));
              v19 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                      v18,
                      (const char (*)[14])", gallery_id:");
              v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v19,
                      (const unsigned int *)(v3 + 48));
              v21 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                      v20,
                      (const char (*)[14])" activity_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &this->activity_id_);
              common::milog::MiLogStream::~MiLogStream(&v34);
              v6 = -1;
            }
            else
            {
              v22 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
              v23 = Scene::getGalleryComp(v22);
              if ( SceneGalleryComp::startGallery(v23, *(_DWORD *)(v3 + 48)) )
              {
                common::milog::MiLogStream::create(
                  &v34,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/activity/buoyant_combat_activity.cpp",
                  "startBuoyantCombatGallery",
                  325);
                v24 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                        &v34,
                        (const char (*)[48])"[BUOYANT_COMBAT] startGallery fail, gallery_id:");
                v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v24,
                        (const unsigned int *)(v3 + 48));
                v26 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                        v25,
                        (const char (*)[14])" activity_id:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &this->activity_id_);
                common::milog::MiLogStream::~MiLogStream(&v34);
                v6 = -1;
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v34,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/player/activity/buoyant_combat_activity.cpp",
                  "startBuoyantCombatGallery",
                  328);
                v27 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                        &v34,
                        (const char (*)[30])"[BUOYANT_COMBAT] initGallery:");
                v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v27,
                        (const unsigned int *)(v3 + 48));
                v29 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                        v28,
                        (const char (*)[14])" activity_id:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, &this->activity_id_);
                common::milog::MiLogStream::~MiLogStream(&v34);
                v6 = 0;
              }
            }
          }
          std::shared_ptr<BuoyantCombatGallery>::~shared_ptr((std::shared_ptr<BuoyantCombatGallery> *const)(v3 + 144));
        }
        std::shared_ptr<BaseGallery>::~shared_ptr((std::shared_ptr<BaseGallery> *const)(v3 + 112));
      }
      std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 176));
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 80));
  }
  result = v6;
  if ( v35 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF801C) = 0;
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

// Line 333: range 000000001794F330-000000001794FA0D
void __cdecl BuoyantCombatActivity::stopAllBuoyantCombatGallery(BuoyantCombatActivity *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  common::milog::MiLogStream *v4; // r14
  ActivityBuoyantCombatExcelConfigMgr *p_activity_buoyant_combat_config_mgr; // rcx
  common::milog::MiLogStream *v6; // rax
  Scene *v7; // rax
  uint32_t GalleryComp; // ecx
  _BOOL4 v9; // r14d
  int v10; // r14d
  Scene *v11; // rax
  SceneGalleryComp *p_gallery_id; // rdi
  common::milog::MiLogStream *v13; // rax
  unsigned int val; // [rsp+14h] [rbp-10Ch] BYREF
  std::map<unsigned int,BuoyantCombatLevelInfo>::const_iterator __for_begin; // [rsp+18h] [rbp-108h] BYREF
  std::map<unsigned int,BuoyantCombatLevelInfo>::const_iterator __for_end; // [rsp+20h] [rbp-100h] BYREF
  const std::map<unsigned int,BuoyantCombatLevelInfo> *level_info_map_ptr; // [rsp+28h] [rbp-F8h]
  const std::map<unsigned int,BuoyantCombatLevelInfo> *__for_range; // [rsp+30h] [rbp-F0h]
  const std::pair<unsigned int const,BuoyantCombatLevelInfo> *v19; // [rsp+38h] [rbp-E8h]
  std::tuple_element<0,const std::pair<unsigned int const,BuoyantCombatLevelInfo> >::type *day_index; // [rsp+40h] [rbp-E0h]
  std::tuple_element<1,const std::pair<unsigned int const,BuoyantCombatLevelInfo> >::type *level_info; // [rsp+48h] [rbp-D8h]
  common::milog::MiLogStream v22; // [rsp+50h] [rbp-D0h] BYREF
  char v23[176]; // [rsp+70h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 16 13 scene_ptr:334 64 16 20 base_gallery_ptr:348 96 16 30 buoyant_combat_gallery_ptr:353";
  *(_QWORD *)(v1 + 16) = BuoyantCombatActivity::stopAllBuoyantCombatGallery;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -219021312;
  v3[536862723] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v1 + 32));
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/buoyant_combat_activity.cpp",
      "stopAllBuoyantCombatGallery",
      337);
    v4 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v22,
           (const char (*)[43])"[BUOYANT_COMBAT] getCurScene failed, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
    common::milog::MiLogStream::~MiLogStream(&v22);
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v1 + 96));
    p_activity_buoyant_combat_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96))->design_config.txt_config_mgr.activity_buoyant_combat_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    level_info_map_ptr = ActivityBuoyantCombatExcelConfigMgr::findLevelInfoMapByActivityId(
                           p_activity_buoyant_combat_config_mgr,
                           this->activity_id_);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v1 + 96));
    if ( level_info_map_ptr )
    {
      __for_range = level_info_map_ptr;
      __for_begin._M_node = std::map<unsigned int,BuoyantCombatLevelInfo>::begin(level_info_map_ptr)._M_node;
      __for_end._M_node = std::map<unsigned int,BuoyantCombatLevelInfo>::end(level_info_map_ptr)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        v19 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,BuoyantCombatLevelInfo>>::operator*(&__for_begin);
        day_index = std::get<0ul,unsigned int const,BuoyantCombatLevelInfo>(v19);
        level_info = (std::tuple_element<1,const std::pair<unsigned int const,BuoyantCombatLevelInfo> >::type *)std::get<1ul,unsigned int const,BuoyantCombatLevelInfo>(v19);
        v7 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
        GalleryComp = (unsigned int)Scene::getGalleryComp(v7);
        if ( *(_BYTE *)(((unsigned __int64)&level_info->gallery_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)level_info + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_info->gallery_id >> 3)
                                                                   + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        SceneGalleryComp::findGallery((SceneGalleryComp *const)(v1 + 64), GalleryComp);
        if ( std::operator==<BaseGallery>(0LL, (const std::shared_ptr<BaseGallery> *)(v1 + 64)) )
        {
          v9 = 0;
        }
        else
        {
          std::dynamic_pointer_cast<BuoyantCombatGallery,BaseGallery>((const std::shared_ptr<BaseGallery> *)(v1 + 96));
          if ( std::operator==<BuoyantCombatGallery>((const std::shared_ptr<BuoyantCombatGallery> *)(v1 + 96), 0LL) )
          {
            common::milog::MiLogStream::create(
              &v22,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/buoyant_combat_activity.cpp",
              "stopAllBuoyantCombatGallery",
              356);
            common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
              &v22,
              (const char (*)[51])"[BUOYANT_COMBAT] buoyant_combat gallery not exists");
            common::milog::MiLogStream::~MiLogStream(&v22);
            v10 = 0;
          }
          else
          {
            v11 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
            p_gallery_id = Scene::getGalleryComp(v11);
            if ( *(_BYTE *)(((unsigned __int64)&level_info->gallery_id >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)level_info + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_info->gallery_id >> 3)
                                                                       + 0x7FFF8000) )
            {
              p_gallery_id = (SceneGalleryComp *)&level_info->gallery_id;
              __asan_report_load4();
            }
            if ( SceneGalleryComp::forceStopAndClearGallery(p_gallery_id, level_info->gallery_id, 1, GALLERY_STOP_NONE) )
            {
              common::milog::MiLogStream::create(
                &v22,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/buoyant_combat_activity.cpp",
                "stopAllBuoyantCombatGallery",
                361);
              v13 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
                      &v22,
                      (const char (*)[62])"[BUOYANT_COMBAT] forceStopAndClearGallery failed, gallery_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &level_info->gallery_id);
              common::milog::MiLogStream::~MiLogStream(&v22);
              v10 = 0;
            }
            else
            {
              v10 = 1;
            }
          }
          std::shared_ptr<BuoyantCombatGallery>::~shared_ptr((std::shared_ptr<BuoyantCombatGallery> *const)(v1 + 96));
          v9 = v10 == 1;
        }
        std::shared_ptr<BaseGallery>::~shared_ptr((std::shared_ptr<BaseGallery> *const)(v1 + 64));
        if ( !v9 )
          break;
        std::_Rb_tree_const_iterator<std::pair<unsigned int const,BuoyantCombatLevelInfo>>::operator++(&__for_begin);
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/buoyant_combat_activity.cpp",
        "stopAllBuoyantCombatGallery",
        343);
      v6 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
             &v22,
             (const char (*)[57])"[BUOYANT_COMBAT] level_info_map nullptr for activity_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->activity_id_);
      common::milog::MiLogStream::~MiLogStream(&v22);
    }
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 32));
  if ( v23 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
