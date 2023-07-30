// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/wind_field_activity.cpp

// Line 36: range 00000000161CA2EC-00000000161CA466
int32_t __cdecl WindFieldActivity::fromScheduleBin(
        WindFieldActivity *const this,
        const proto::ActivityScheduleBin *bin)
{
  unsigned int *v2; // rcx
  bool *v3; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,bool> >,bool> v4; // rax
  common::milog::MiLogStream *v5; // rbx
  bool is_open; // [rsp+13h] [rbp-5Dh] BYREF
  unsigned int val; // [rsp+14h] [rbp-5Ch] BYREF
  google::protobuf::RepeatedPtrField<proto::WindFieldStageBin>::const_iterator __for_begin; // [rsp+18h] [rbp-58h] BYREF
  google::protobuf::RepeatedPtrField<proto::WindFieldStageBin>::const_iterator __for_end; // [rsp+20h] [rbp-50h] BYREF
  const proto::WindFieldScheduleBin *schedule_bin; // [rsp+28h] [rbp-48h]
  const google::protobuf::RepeatedPtrField<proto::WindFieldStageBin> *__for_range; // [rsp+30h] [rbp-40h]
  const proto::WindFieldStageBin *stage_bin; // [rsp+38h] [rbp-38h]
  common::milog::MiLogStream v14; // [rsp+40h] [rbp-30h] BYREF

  std::map<unsigned int,bool>::clear(&this->stage_open_map_);
  schedule_bin = proto::ActivityScheduleBin::wind_field_bin(bin);
  __for_range = proto::WindFieldScheduleBin::stage_bin_list(schedule_bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::WindFieldStageBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::WindFieldStageBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::WindFieldStageBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    stage_bin = google::protobuf::internal::RepeatedPtrIterator<proto::WindFieldStageBin const>::operator*(&__for_begin);
    is_open = proto::WindFieldStageBin::is_open(stage_bin);
    val = proto::WindFieldStageBin::stage_id(stage_bin);
    v4 = std::map<unsigned int,bool>::emplace<unsigned int,bool>(&this->stage_open_map_, &val, &is_open, v2, v3);
    if ( !v4.second )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/wind_field_activity.cpp",
        "fromScheduleBin",
        44);
      v5 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
             &v14,
             (const char (*)[33])"[WIND_FIELD] duplicate stage_id:");
      val = proto::WindFieldStageBin::stage_id(stage_bin);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
      common::milog::MiLogStream::~MiLogStream(&v14);
    }
    google::protobuf::internal::RepeatedPtrIterator<proto::WindFieldStageBin const>::operator++(&__for_begin);
  }
  return 0;
};

// Line 52: range 00000000161CA468-00000000161CA5BF
int32_t __cdecl WindFieldActivity::toScheduleBin(const WindFieldActivity *const this, proto::ActivityScheduleBin *bin)
{
  std::map<unsigned int,bool>::const_iterator __for_begin; // [rsp+10h] [rbp-40h] BYREF
  std::map<unsigned int,bool>::const_iterator __for_end; // [rsp+18h] [rbp-38h] BYREF
  proto::WindFieldScheduleBin *schedule_bin; // [rsp+20h] [rbp-30h]
  const std::map<unsigned int,bool> *__for_range; // [rsp+28h] [rbp-28h]
  const std::pair<unsigned int const,bool> *v7; // [rsp+30h] [rbp-20h]
  std::tuple_element<0,const std::pair<unsigned int const,bool> >::type *stage_id; // [rsp+38h] [rbp-18h]
  std::tuple_element<1,const std::pair<unsigned int const,bool> >::type *is_open; // [rsp+40h] [rbp-10h]
  proto::WindFieldStageBin *stage_bin; // [rsp+48h] [rbp-8h]

  schedule_bin = proto::ActivityScheduleBin::mutable_wind_field_bin(bin);
  __for_range = &this->stage_open_map_;
  __for_begin._M_node = std::map<unsigned int,bool>::begin(&this->stage_open_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,bool>::end(&this->stage_open_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v7 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,bool>>::operator*(&__for_begin);
    stage_id = std::get<0ul,unsigned int const,bool>(v7);
    is_open = (std::tuple_element<1,const std::pair<unsigned int const,bool> >::type *)std::get<1ul,unsigned int const,bool>(v7);
    stage_bin = proto::WindFieldScheduleBin::add_stage_bin_list(schedule_bin);
    if ( *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)stage_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(stage_id);
    }
    proto::WindFieldStageBin::set_stage_id(stage_bin, *stage_id);
    if ( *(_BYTE *)(((unsigned __int64)is_open >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)is_open & 7) >= *(_BYTE *)(((unsigned __int64)is_open >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(is_open);
    }
    proto::WindFieldStageBin::set_is_open(stage_bin, *is_open);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,bool>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 64: range 00000000161CA5C0-00000000161CA9E8
int32_t __cdecl WindFieldActivity::toClient(WindFieldActivity *const this, proto::ActivityInfo *activity_info)
{
  common::milog::MiLogStream *v2; // rbx
  const ActivityWindFieldExcelConfigMgr *v4; // rcx
  common::milog::MiLogStream *v5; // rax
  uint32_t day_index; // ecx
  uint32_t BeginTimeByOpenDay; // eax
  unsigned int val; // [rsp+1Ch] [rbp-94h] BYREF
  std::map<unsigned int,bool>::iterator __for_begin; // [rsp+20h] [rbp-90h] BYREF
  std::map<unsigned int,bool>::iterator __for_end; // [rsp+28h] [rbp-88h] BYREF
  proto::WindFieldDetailInfo *detail_info; // [rsp+30h] [rbp-80h]
  const ActivityWindFieldExcelConfigMgr *conf_mgr; // [rsp+38h] [rbp-78h]
  std::map<unsigned int,bool> *__for_range; // [rsp+40h] [rbp-70h]
  const std::pair<unsigned int const,bool> *v14; // [rsp+48h] [rbp-68h]
  std::tuple_element<0,const std::pair<unsigned int const,bool> >::type *stage_id; // [rsp+50h] [rbp-60h]
  std::tuple_element<1,const std::pair<unsigned int const,bool> >::type *is_stage_open; // [rsp+58h] [rbp-58h]
  proto::WindFieldStageInfo *stage; // [rsp+60h] [rbp-50h]
  const data::WindFieldStageExcelConfig *stage_config_ptr; // [rsp+68h] [rbp-48h]
  std::shared_ptr<Config> v19; // [rsp+70h] [rbp-40h] BYREF
  common::milog::MiLogStream v20; // [rsp+80h] [rbp-30h] BYREF

  if ( BaseActivity::toClient(this, activity_info) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/wind_field_activity.cpp",
      "toClient",
      67);
    v2 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
           &v20,
           (const char (*)[49])"[WIND_FIELD] BaseActivity::toClient fails, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
    common::milog::MiLogStream::~MiLogStream(&v20);
    return -1;
  }
  else
  {
    detail_info = proto::ActivityInfo::mutable_wind_field_info(activity_info);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v19);
    conf_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19)->design_config.txt_config_mgr.activity_wind_field_mgr;
    std::shared_ptr<Config>::~shared_ptr(&v19);
    __for_range = &this->stage_open_map_;
    __for_begin._M_node = std::map<unsigned int,bool>::begin(&this->stage_open_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,bool>::end(&this->stage_open_map_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v14 = std::_Rb_tree_iterator<std::pair<unsigned int const,bool>>::operator*(&__for_begin);
      stage_id = std::get<0ul,unsigned int const,bool>(v14);
      is_stage_open = (std::tuple_element<1,const std::pair<unsigned int const,bool> >::type *)std::get<1ul,unsigned int const,bool>(v14);
      stage = proto::WindFieldDetailInfo::add_stage_info_list(detail_info);
      if ( *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)stage_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(stage_id);
      }
      proto::WindFieldStageInfo::set_stage_id(stage, *stage_id);
      if ( *(_BYTE *)(((unsigned __int64)is_stage_open >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)is_stage_open & 7) >= *(_BYTE *)(((unsigned __int64)is_stage_open >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(is_stage_open);
      }
      proto::WindFieldStageInfo::set_is_open(stage, *is_stage_open);
      v4 = conf_mgr;
      if ( *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)stage_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(stage_id);
      }
      stage_config_ptr = data::ActivityWindFieldConfigMgrBase::findWindFieldStageExcelConfig(v4, *stage_id);
      if ( stage_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&stage_config_ptr->day_index >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)stage_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&stage_config_ptr->day_index >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4(&stage_config_ptr->day_index);
        }
        day_index = stage_config_ptr->day_index;
        if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&this->schedule_id_);
        }
        BeginTimeByOpenDay = BaseActivity::getBeginTimeByOpenDay(this->schedule_id_, day_index);
        proto::WindFieldStageInfo::set_open_time(stage, BeginTimeByOpenDay);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v20,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/wind_field_activity.cpp",
          "toClient",
          80);
        v5 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
               &v20,
               (const char (*)[49])"[WIND_FIELD] stage_config_ptr is null, stage_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, stage_id);
        common::milog::MiLogStream::~MiLogStream(&v20);
      }
      std::_Rb_tree_iterator<std::pair<unsigned int const,bool>>::operator++(&__for_begin);
    }
    return 0;
  }
};

// Line 89: range 00000000161CA9EA-00000000161CAA47
int32_t __cdecl WindFieldActivity::init(WindFieldActivity *const this)
{
  if ( BaseActivity::isOpening(this, 0) && !BaseActivity::isSettled(this) )
    WindFieldActivity::registerObserver(this);
  return 0;
};

// Line 99: range 00000000161CAA48-00000000161CAC1B
void __cdecl WindFieldActivity::onPreStart(WindFieldActivity *const this)
{
  std::tuple_element<0,const std::pair<unsigned int const,data::WindFieldStageExcelConfig> >::type *v1; // rsi
  std::map<unsigned int,bool>::mapped_type *v2; // rax
  _BYTE *v3; // rdx
  char v4; // cl
  std::unordered_map<unsigned int,data::WindFieldStageExcelConfig>::const_iterator __for_begin; // [rsp+18h] [rbp-78h] BYREF
  std::unordered_map<unsigned int,data::WindFieldStageExcelConfig>::const_iterator __for_end; // [rsp+20h] [rbp-70h] BYREF
  const ActivityWindFieldExcelConfigMgr *conf_mgr; // [rsp+28h] [rbp-68h]
  const std::unordered_map<unsigned int,data::WindFieldStageExcelConfig> *__for_range; // [rsp+30h] [rbp-60h]
  const std::pair<unsigned int const,data::WindFieldStageExcelConfig> *v9; // [rsp+38h] [rbp-58h]
  std::tuple_element<0,const std::pair<unsigned int const,data::WindFieldStageExcelConfig> >::type *stage_id; // [rsp+40h] [rbp-50h]
  std::tuple_element<1,const std::pair<unsigned int const,data::WindFieldStageExcelConfig> >::type *stage_config; // [rsp+48h] [rbp-48h]
  std::shared_ptr<Config> v12; // [rsp+50h] [rbp-40h] BYREF
  common::milog::MiLogStream v13; // [rsp+60h] [rbp-30h] BYREF

  if ( !std::map<unsigned int,bool>::empty(&this->stage_open_map_) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/wind_field_activity.cpp",
      "onPreStart",
      102);
    common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
      &v13,
      (const char (*)[42])"[WIND_FIELD] stage_open_map_ is not empty");
    common::milog::MiLogStream::~MiLogStream(&v13);
    std::map<unsigned int,bool>::clear(&this->stage_open_map_);
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v12);
  conf_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v12)->design_config.txt_config_mgr.activity_wind_field_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v12);
  __for_range = &conf_mgr->wind_field_stage_excel_config_map;
  __for_begin._M_cur = std::unordered_map<unsigned int,data::WindFieldStageExcelConfig>::begin(&conf_mgr->wind_field_stage_excel_config_map)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,data::WindFieldStageExcelConfig>::end(&conf_mgr->wind_field_stage_excel_config_map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::WindFieldStageExcelConfig>,false>(
            &__for_begin,
            &__for_end) )
  {
    v9 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::WindFieldStageExcelConfig>,false,false>::operator*(&__for_begin);
    stage_id = std::get<0ul,unsigned int const,data::WindFieldStageExcelConfig>(v9);
    stage_config = (std::tuple_element<1,const std::pair<unsigned int const,data::WindFieldStageExcelConfig> >::type *)std::get<1ul,unsigned int const,data::WindFieldStageExcelConfig>(v9);
    v1 = stage_id;
    v2 = std::map<unsigned int,bool>::operator[](&this->stage_open_map_, stage_id);
    v3 = v2;
    v4 = *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000);
    if ( v4 != 0 && ((unsigned __int8)v2 & 7) >= v4 )
    {
      LOBYTE(v1) = v4 != 0;
      __asan_report_store1(v2, v1, v2);
    }
    *v3 = 0;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::WindFieldStageExcelConfig>,false,false>::operator++(&__for_begin);
  }
};

// Line 113: range 00000000161CAC1C-00000000161CAC36
void __cdecl WindFieldActivity::onStart(WindFieldActivity *const this)
{
  WindFieldActivity::registerObserver(this);
};

// Line 118: range 00000000161CAC38-00000000161CAC52
void __cdecl WindFieldActivity::onSettle(WindFieldActivity *const this)
{
  WindFieldActivity::unregisterObserver(this);
};

// Line 123: range 00000000161CAC54-00000000161CB1B6
void __cdecl WindFieldActivity::registerObserver(WindFieldActivity *const this)
{
  unsigned __int64 p_M_last; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::weak_ptr<WindFieldActivity> *EventComp; // [rsp+10h] [rbp-110h]
  std::weak_ptr<WindFieldActivity> *v5; // [rsp+20h] [rbp-100h]
  std::weak_ptr<WindFieldActivity> *p_this_wtr; // [rsp+30h] [rbp-F0h]
  PlayerEventComp v7; // [rsp+40h] [rbp-E0h] BYREF

  p_M_last = (unsigned __int64)&v7.event_center_.context_.pending_que_.c._M_impl._M_start._M_last;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      p_M_last = v2;
  }
  *(_QWORD *)p_M_last = 1102416563LL;
  *(_QWORD *)(p_M_last + 8) = "2 32 16 12 this_ptr:124 64 16 12 this_wtr:130";
  *(_QWORD *)(p_M_last + 16) = WindFieldActivity::registerObserver;
  v3 = (_DWORD *)(p_M_last >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  std::enable_shared_from_this<BaseActivity>::shared_from_this((std::enable_shared_from_this<BaseActivity> *const)&v7.event_center_);
  std::dynamic_pointer_cast<WindFieldActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)(p_M_last + 32));
  std::shared_ptr<BaseActivity>::~shared_ptr((std::shared_ptr<BaseActivity> *const)&v7.event_center_);
  if ( std::operator==<WindFieldActivity>(0LL, (const std::shared_ptr<WindFieldActivity> *)(p_M_last + 32)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v7.event_center_.context_.pending_que_,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/wind_field_activity.cpp",
      "registerObserver",
      127);
    common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
      (common::milog::MiLogStream *const)&v7.event_center_.context_.pending_que_,
      (const char (*)[49])"dynamic_pointer_cast to WindFieldActivity failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v7.event_center_.context_.pending_que_);
  }
  else
  {
    std::weak_ptr<WindFieldActivity>::weak_ptr<WindFieldActivity,void>(
      (std::weak_ptr<WindFieldActivity> *const)(p_M_last + 64),
      (const std::shared_ptr<WindFieldActivity> *)(p_M_last + 32));
    if ( std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->dungeon_create_wtr_) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      p_this_wtr = (std::weak_ptr<WindFieldActivity> *)Player::getEventComp(this->player_);
      std::weak_ptr<WindFieldActivity>::weak_ptr(
        (std::weak_ptr<WindFieldActivity> *const)&v7.event_center_,
        (const std::weak_ptr<WindFieldActivity> *)(p_M_last + 64));
      PlayerEventComp::registerObserver<WindFieldActivity,CreateDungeonEvent>(
        &v7,
        p_this_wtr,
        (void (*)(WindFieldActivity *, const CreateDungeonEvent *))&v7.event_center_);
      std::weak_ptr<Observer>::operator=(&this->dungeon_create_wtr_, (std::weak_ptr<Observer> *)&v7);
      std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v7);
      std::weak_ptr<WindFieldActivity>::~weak_ptr((std::weak_ptr<WindFieldActivity> *const)&v7.event_center_);
    }
    if ( std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->post_enter_scene_wtr) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      EventComp = (std::weak_ptr<WindFieldActivity> *)Player::getEventComp(this->player_);
      std::weak_ptr<WindFieldActivity>::weak_ptr(
        (std::weak_ptr<WindFieldActivity> *const)&v7.event_center_,
        (const std::weak_ptr<WindFieldActivity> *)(p_M_last + 64));
      PlayerEventComp::registerObserver<WindFieldActivity,PostEnterSceneEvent>(
        (PlayerEventComp *const)&v7._M_weak_this._M_refcount,
        EventComp,
        (void (*)(WindFieldActivity *, const PostEnterSceneEvent *))&v7.event_center_);
      std::weak_ptr<Observer>::operator=(
        &this->post_enter_scene_wtr,
        (std::weak_ptr<Observer> *)&v7._M_weak_this._M_refcount);
      std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v7._M_weak_this._M_refcount);
      std::weak_ptr<WindFieldActivity>::~weak_ptr((std::weak_ptr<WindFieldActivity> *const)&v7.event_center_);
    }
    if ( std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->leave_scene_wtr) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      v5 = (std::weak_ptr<WindFieldActivity> *)Player::getEventComp(this->player_);
      std::weak_ptr<WindFieldActivity>::weak_ptr(
        (std::weak_ptr<WindFieldActivity> *const)&v7._M_weak_this._M_refcount,
        (const std::weak_ptr<WindFieldActivity> *)(p_M_last + 64));
      PlayerEventComp::registerObserver<WindFieldActivity,LeaveSceneEvent>(
        (PlayerEventComp *const)&v7.event_center_,
        v5,
        (void (*)(WindFieldActivity *, const LeaveSceneEvent *))&v7._M_weak_this._M_refcount);
      std::weak_ptr<Observer>::operator=(&this->leave_scene_wtr, (std::weak_ptr<Observer> *)&v7.event_center_);
      std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v7.event_center_);
      std::weak_ptr<WindFieldActivity>::~weak_ptr((std::weak_ptr<WindFieldActivity> *const)&v7._M_weak_this._M_refcount);
    }
    std::weak_ptr<WindFieldActivity>::~weak_ptr((std::weak_ptr<WindFieldActivity> *const)(p_M_last + 64));
  }
  std::shared_ptr<WindFieldActivity>::~shared_ptr((std::shared_ptr<WindFieldActivity> *const)(p_M_last + 32));
  if ( &v7.event_center_.context_.pending_que_.c._M_impl._M_start._M_last == (std::_Deque_iterator<std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> >,std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> >&,std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> >*>::_Elt_pointer *)p_M_last )
  {
    *(_QWORD *)((p_M_last >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((p_M_last >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)p_M_last = 1172321806LL;
    *(_QWORD *)((p_M_last >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((p_M_last >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 146: range 00000000161CB1B8-00000000161CB32E
void __cdecl WindFieldActivity::unregisterObserver(WindFieldActivity *const this)
{
  PlayerEventComp *EventComp; // rax
  PlayerEventComp *v2; // rax
  PlayerEventComp *v3; // rax

  if ( !std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->dungeon_create_wtr_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    EventComp = Player::getEventComp(this->player_);
    PlayerEventComp::unregisterObserver(EventComp, &this->dungeon_create_wtr_);
    std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::reset(&this->dungeon_create_wtr_);
  }
  if ( !std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->post_enter_scene_wtr) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    v2 = Player::getEventComp(this->player_);
    PlayerEventComp::unregisterObserver(v2, &this->post_enter_scene_wtr);
    std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::reset(&this->post_enter_scene_wtr);
  }
  if ( !std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->leave_scene_wtr) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    v3 = Player::getEventComp(this->player_);
    PlayerEventComp::unregisterObserver(v3, &this->leave_scene_wtr);
    std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::reset(&this->leave_scene_wtr);
  }
};

// Line 165: range 00000000161CB330-00000000161CB362
void __cdecl WindFieldActivity::onClear(WindFieldActivity *const this)
{
  std::map<unsigned int,bool>::clear(&this->stage_open_map_);
  std::set<unsigned int>::clear(&this->finished_watcher_snapshot_set_);
};

// Line 171: range 00000000161CB364-00000000161CB3BD
void __cdecl WindFieldActivity::onDailyRefresh(WindFieldActivity *const this)
{
  if ( BaseActivity::isOpening(this, 0) && !BaseActivity::isSettled(this) )
    BaseActivity::notifyClientData(this, 0);
};

// Line 182: range 00000000161CB3BE-00000000161CB6FE
int32_t __cdecl WindFieldActivity::execAction(WindFieldActivity *const this, const data::NewActivityExec *action_exec)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t result; // eax
  const std::string *v6; // rax
  common::milog::MiLogStream *v7; // r13
  const std::string *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream v11; // [rsp+10h] [rbp-80h] BYREF
  char v12[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 stage_id:192";
  *(_QWORD *)(v2 + 16) = WindFieldActivity::execAction;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&action_exec->type);
  }
  if ( action_exec->type == NEW_ACTIVITY_ACTION_OPEN_WIND_FIELD_STAGE )
  {
    if ( std::vector<std::string>::size(&action_exec->param) )
    {
      *(_DWORD *)(v2 + 32) = 0;
      v6 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
      if ( common::tools::StringUtils::strToNum<unsigned int>(v6, (unsigned int *)(v2 + 32), 1) )
      {
        common::milog::MiLogStream::create(
          &v11,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/wind_field_activity.cpp",
          "execAction",
          195);
        v7 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
               &v11,
               (const char (*)[23])"[WIND_FIELD] strToNum ");
        v8 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
        v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, v8);
        common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v9, (const char (*)[8])" failed");
        common::milog::MiLogStream::~MiLogStream(&v11);
        result = -1;
      }
      else if ( WindFieldActivity::openActivityStage(this, *(_DWORD *)(v2 + 32)) )
      {
        common::milog::MiLogStream::create(
          &v11,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/wind_field_activity.cpp",
          "execAction",
          200);
        v10 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                &v11,
                (const char (*)[49])"[WIND_FIELD] openActivityStage failed, stage_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 32));
        common::milog::MiLogStream::~MiLogStream(&v11);
        result = -1;
      }
      else
      {
        result = 0;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/wind_field_activity.cpp",
        "execAction",
        189);
      common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
        &v11,
        (const char (*)[35])"[WIND_FIELD] action param size < 1");
      common::milog::MiLogStream::~MiLogStream(&v11);
      result = -1;
    }
  }
  else
  {
    result = BaseActivity::execAction(this, action_exec);
  }
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

// Line 212: range 00000000161CB700-00000000161CBA95
__int64 __fastcall WindFieldActivity::openActivityStage(WindFieldActivity *const this, uint32_t stage_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::_Rb_tree_iterator<std::pair<unsigned int const,bool> >::_Self *p_y; // rsi
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,bool> >::pointer v8; // rdx
  bool *p_second; // rax
  common::milog::MiLogStream *v10; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,bool> >::pointer v11; // rdx
  char v12; // cl
  common::milog::MiLogStream *v13; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,bool> >::_Self __y; // [rsp+18h] [rbp-A8h] BYREF
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-A0h] BYREF
  char v16[128]; // [rsp+40h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 stage_id:211 64 8 8 iter:213";
  *(_QWORD *)(v2 + 16) = WindFieldActivity::openActivityStage;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = stage_id;
  *(std::map<unsigned int,bool>::iterator *)(v2 + 64) = std::map<unsigned int,bool>::find(
                                                          &this->stage_open_map_,
                                                          (const std::map<unsigned int,bool>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,bool>::end(&this->stage_open_map_)._M_node;
  p_y = &__y;
  if ( std::operator==((const std::_Rb_tree_iterator<std::pair<unsigned int const,bool> >::_Self *)(v2 + 64), &__y) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/wind_field_activity.cpp",
      "openActivityStage",
      216);
    v6 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           &v15,
           (const char (*)[31])"[WIND_FIELD] invalid stage_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    v8 = std::_Rb_tree_iterator<std::pair<unsigned int const,bool>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,bool> > *const)(v2 + 64));
    p_second = &v8->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_second & 7) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(p_second);
    }
    if ( v8->second )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/wind_field_activity.cpp",
        "openActivityStage",
        221);
      v10 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
              &v15,
              (const char (*)[36])"[WIND_FIELD] already open stage_id:");
      p_y = (std::_Rb_tree_iterator<std::pair<unsigned int const,bool> >::_Self *)(v2 + 48);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v15);
    }
    v11 = std::_Rb_tree_iterator<std::pair<unsigned int const,bool>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,bool> > *const)(v2 + 64));
    v12 = *(_BYTE *)(((unsigned __int64)&v11->second >> 3) + 0x7FFF8000);
    if ( v12 != 0 && (((unsigned __int8)v11 + 4) & 7) >= v12 )
    {
      LOBYTE(p_y) = v12 != 0;
      __asan_report_store1(&v11->second, p_y, v11);
    }
    v11->second = 1;
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/wind_field_activity.cpp",
      "openActivityStage",
      224);
    v13 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
            &v15,
            (const char (*)[35])"[WIND_FIELD] activity stage open: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v15);
    BaseActivity::notifyClientData(this, 0);
    result = 0LL;
  }
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

// Line 230: range 00000000161CBA96-00000000161CBC26
_BOOL8 __fastcall WindFieldActivity::isActivityStageOpen(const WindFieldActivity *const this, uint32_t stage_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  _BOOL8 result; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,bool> >::pointer v6; // rdx
  bool *p_second; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,bool> >::_Self __y; // [rsp+18h] [rbp-88h] BYREF
  char v9[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 stage_id:229 64 8 8 iter:231";
  *(_QWORD *)(v2 + 16) = WindFieldActivity::isActivityStageOpen;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = stage_id;
  *(std::map<unsigned int,bool>::const_iterator *)(v2 + 64) = std::map<unsigned int,bool>::find(
                                                                &this->stage_open_map_,
                                                                (const std::map<unsigned int,bool>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,bool>::end(&this->stage_open_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,bool> >::_Self *)(v2 + 64),
         &__y) )
  {
    result = 0LL;
  }
  else
  {
    v6 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,bool>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,bool> > *const)(v2 + 64));
    p_second = &v6->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_second & 7) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(p_second);
    }
    result = v6->second;
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

// Line 242: range 00000000161CBC28-00000000161CBFBC
__int64 __fastcall WindFieldActivity::checkEnterDungeon(WindFieldActivity *const this, uint32_t dungeon_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r13
  unsigned int val; // [rsp+1Ch] [rbp-C4h] BYREF
  const ActivityWindFieldExcelConfigMgr *conf_mgr; // [rsp+20h] [rbp-C0h]
  const data::WindFieldStageExcelConfig *stage_config_ptr; // [rsp+28h] [rbp-B8h]
  std::shared_ptr<Config> v14; // [rsp+30h] [rbp-B0h] BYREF
  common::milog::MiLogStream v15; // [rsp+40h] [rbp-A0h] BYREF
  char v16[128]; // [rsp+60h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 stage_id:254 64 4 14 dungeon_id:241";
  *(_QWORD *)(v2 + 16) = WindFieldActivity::checkEnterDungeon;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  *(_DWORD *)(v2 + 64) = dungeon_id;
  if ( !BaseActivity::isOpening(this, 0) || BaseActivity::isSettled(this) )
  {
    result = 860LL;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v14);
    conf_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14)->design_config.txt_config_mgr.activity_wind_field_mgr;
    std::shared_ptr<Config>::~shared_ptr(&v14);
    stage_config_ptr = ActivityWindFieldExcelConfigMgr::findStageConfigByDungeonId(conf_mgr, *(_DWORD *)(v2 + 64));
    if ( stage_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&stage_config_ptr->stage_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&stage_config_ptr->stage_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&stage_config_ptr->stage_id);
      }
      *(_DWORD *)(v2 + 48) = stage_config_ptr->stage_id;
      if ( !WindFieldActivity::isActivityStageOpen(this, *(_DWORD *)(v2 + 48)) )
      {
        common::milog::MiLogStream::create(
          &v15,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/wind_field_activity.cpp",
          "checkEnterDungeon",
          257);
        v8 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
               &v15,
               (const char (*)[43])"[WIND_FIELD] stage is not open, stage_id: ");
        v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
        v10 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v9, (const char (*)[8])", uid: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
        common::milog::MiLogStream::~MiLogStream(&v15);
        result = 10390LL;
      }
      else
      {
        result = 0LL;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/wind_field_activity.cpp",
        "checkEnterDungeon",
        251);
      v7 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
             &v15,
             (const char (*)[59])"[WIND_FIELD] cannot find corresponding stage, dungeon_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 64));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = 0xFFFFFFFFLL;
    }
  }
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

// Line 264: range 00000000161CC0FE-00000000161CC338
void __cdecl WindFieldActivity::onCreateDungeonEvent(WindFieldActivity *const this, const CreateDungeonEvent *event)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  GameserverService *v6; // rax
  uint32_t v7; // ecx
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  DungeonScene *v9; // r14
  std::function<void(Player&,DungeonScene&,proto::DungeonSettleNotify&)> p_dungeon_settle_callback; // [rsp+20h] [rbp-90h] BYREF
  char v11[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 21 dungeon_scene_ptr:269";
  *(_QWORD *)(v2 + 16) = WindFieldActivity::onCreateDungeonEvent;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( BaseActivity::isOpening(this, 0) && !BaseActivity::isSettled(this) )
  {
    v6 = ServiceBox::findService<GameserverService>();
    v7 = (unsigned int)GameserverService::getGameThreadLocal(v6) + 568;
    if ( *(_BYTE *)(((unsigned __int64)&event->inst_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->inst_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&event->inst_id);
    }
    DungeonMgr::findDungeon((DungeonMgr *const)(v2 + 32), v7);
    if ( !std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v2 + 32), 0LL) )
    {
      v8 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      if ( DungeonScene::getDungeonType(v8) == DUNGEON_WIND_FIELD )
      {
        v9 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        std::function<void ()(Player &,DungeonScene &,proto::DungeonSettleNotify &)>::function<WindFieldActivity::onCreateDungeonEvent(CreateDungeonEvent const&)::{lambda(Player &,DungeonScene &,proto::DungeonSettleNotify &)#1},void,void>(
          &p_dungeon_settle_callback,
          0);
        DungeonScene::registerDungeonSettleCallback(v9, &p_dungeon_settle_callback);
        std::function<void ()(Player &,DungeonScene &,proto::DungeonSettleNotify &)>::~function(&p_dungeon_settle_callback);
      }
    }
    std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 32));
  }
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 279: range 00000000161CBFBE-00000000161CC0FD
void __cdecl WindFieldActivity::onCreateDungeonEvent(CreateDungeonEvent const&)::{lambda(Player &,DungeonScene &,proto::DungeonSettleNotify &)#1}::operator()(
        const WindFieldActivity::onCreateDungeonEvent::<lambda(Player&, DungeonScene&, proto::DungeonSettleNotify&)> *const __closure,
        Player *player,
        DungeonScene *dungeon_scene,
        proto::DungeonSettleNotify *notify)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  WindFieldActivity *v7; // rcx
  char v10[96]; // [rsp+20h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 16 activity_ptr:281";
  *(_QWORD *)(v4 + 16) = WindFieldActivity::onCreateDungeonEvent(CreateDungeonEvent const&)::{lambda(Player &,DungeonScene &,proto::DungeonSettleNotify &)#1}::operator();
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  Player::getActivityComp(player);
  PlayerActivityComp::findOpenningActivity<WindFieldActivity>((PlayerActivityComp *const)(v4 + 32));
  if ( std::operator!=<WindFieldActivity>(0LL, (const std::shared_ptr<WindFieldActivity> *)(v4 + 32)) )
  {
    v7 = std::__shared_ptr_access<WindFieldActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<WindFieldActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    WindFieldActivity::onSettleDungeon(v7, dungeon_scene, notify);
  }
  std::shared_ptr<WindFieldActivity>::~shared_ptr((std::shared_ptr<WindFieldActivity> *const)(v4 + 32));
  if ( v10 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 290: range 00000000161CC33A-00000000161CC977
void __cdecl WindFieldActivity::onSettleDungeon(
        WindFieldActivity *const this,
        const DungeonScene *dungeon_scene,
        proto::DungeonSettleNotify *notify)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v7; // rax
  google::protobuf::RepeatedField<unsigned int> *v8; // rax
  __int64 p_for_end; // rsi
  unsigned int *v10; // rax
  uint32_t *v11; // rdx
  proto::GalleryStopReason gallery_stop_reason; // eax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  google::protobuf::uint32 watcher_id; // [rsp+2Ch] [rbp-C4h]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+30h] [rbp-C0h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+38h] [rbp-B8h] BYREF
  const ActivityWindFieldExcelConfigMgr *config_mgr; // [rsp+40h] [rbp-B0h]
  const data::WindFieldStageExcelConfig *stage_config_ptr; // [rsp+48h] [rbp-A8h]
  proto::WindFieldDungeonSettleInfo *settle_info; // [rsp+50h] [rbp-A0h]
  const std::vector<unsigned int> *__for_range; // [rsp+58h] [rbp-98h]
  std::shared_ptr<Config> v24; // [rsp+60h] [rbp-90h] BYREF
  common::milog::MiLogStream v25; // [rsp+70h] [rbp-80h] BYREF
  char v26[96]; // [rsp+90h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 22 settled_dungeon_id:296";
  *(_QWORD *)(v3 + 16) = WindFieldActivity::onSettleDungeon;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( !BaseActivity::isOpening(this, 0) || BaseActivity::isSettled(this) )
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/wind_field_activity.cpp",
      "onSettleDungeon",
      293);
    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
      &v25,
      (const char (*)[34])"[WIND_FIELD] activity is not open");
    common::milog::MiLogStream::~MiLogStream(&v25);
    goto LABEL_39;
  }
  *(_DWORD *)(v3 + 32) = DungeonScene::getDungeonId(dungeon_scene);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v24);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v24)->design_config.txt_config_mgr.activity_wind_field_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v24);
  stage_config_ptr = ActivityWindFieldExcelConfigMgr::findStageConfigByDungeonId(config_mgr, *(_DWORD *)(v3 + 32));
  if ( !stage_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/wind_field_activity.cpp",
      "onSettleDungeon",
      302);
    v7 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
           &v25,
           (const char (*)[60])"[WIND_FIELD] dungeon cannot find stage config, dungeon_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v25);
    goto LABEL_39;
  }
  settle_info = proto::DungeonSettleNotify::mutable_wind_field_dungeon_settle_info(notify);
  v8 = proto::WindFieldDungeonSettleInfo::mutable_before_watcher_id_list(settle_info);
  common::tools::MiscUtils::setToRepeated<std::set<unsigned int>,unsigned int>(
    &this->finished_watcher_snapshot_set_,
    v8);
  __for_range = &stage_config_ptr->watcher_list;
  __for_begin._M_current = std::vector<unsigned int>::begin(&stage_config_ptr->watcher_list)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(&stage_config_ptr->watcher_list)._M_current;
  while ( 1 )
  {
    p_for_end = (__int64)&__for_end;
    if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
      break;
    v10 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    v11 = v10;
    if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v10);
    }
    watcher_id = *v11;
    if ( BaseActivity::isWatcherFinished(this, *v11) )
      proto::WindFieldDungeonSettleInfo::add_after_watcher_id_list(settle_info, watcher_id);
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  if ( DungeonScene::getDungeonResult(dungeon_scene) != DUNGEON_RESULT_FAIL )
  {
    if ( DungeonScene::getDungeonResult(dungeon_scene) == DUNGEON_RESULT_CANCEL )
    {
      p_for_end = 1LL;
      proto::WindFieldDungeonSettleInfo::set_fail_reason(settle_info, WIND_FIELD_DUNGEON_FAIL_CANCEL);
      if ( *(_BYTE *)(((unsigned __int64)&this->gallery_stop_reason_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->gallery_stop_reason_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->gallery_stop_reason_);
      }
      if ( this->gallery_stop_reason_ )
      {
        common::milog::MiLogStream::create(
          &v25,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/wind_field_activity.cpp",
          "onSettleDungeon",
          351);
        v14 = common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(
                &v25,
                (const char (*)[68])"[WIND_FIELD] DUNGEON_RESULT_CANCEL but gallery reason is not None: ");
        p_for_end = (__int64)&this->gallery_stop_reason_;
        common::milog::MiLogStream::operator<<<proto::GalleryStopReason,(proto::GalleryStopReason*)0>(
          v14,
          &this->gallery_stop_reason_);
        common::milog::MiLogStream::~MiLogStream(&v25);
      }
    }
    goto LABEL_36;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_stop_reason_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gallery_stop_reason_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->gallery_stop_reason_);
  }
  gallery_stop_reason = this->gallery_stop_reason_;
  if ( gallery_stop_reason == GALLERY_STOP_AVATAR_DIE )
  {
    p_for_end = 3LL;
    proto::WindFieldDungeonSettleInfo::set_fail_reason(settle_info, WIND_FIELD_DUNGEON_FAIL_ALL_AVATAR_DIE);
  }
  else
  {
    if ( gallery_stop_reason > GALLERY_STOP_AVATAR_DIE )
    {
LABEL_30:
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/wind_field_activity.cpp",
        "onSettleDungeon",
        342);
      v13 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
              &v25,
              (const char (*)[58])"[WIND_FIELD] unknown DUNGEON_RESULT_FAIL gallery_reason: ");
      p_for_end = (__int64)&this->gallery_stop_reason_;
      common::milog::MiLogStream::operator<<<proto::GalleryStopReason,(proto::GalleryStopReason*)0>(
        v13,
        &this->gallery_stop_reason_);
      common::milog::MiLogStream::~MiLogStream(&v25);
      goto LABEL_36;
    }
    if ( gallery_stop_reason == GALLERY_STOP_TIMEUP )
    {
      p_for_end = 2LL;
      proto::WindFieldDungeonSettleInfo::set_fail_reason(settle_info, WIND_FIELD_DUNGEON_FAIL_TIMEOUT);
    }
    else
    {
      if ( gallery_stop_reason != GALLERY_STOP_LUA_INTERRUPT_FAIL )
        goto LABEL_30;
      p_for_end = 4LL;
      proto::WindFieldDungeonSettleInfo::set_fail_reason(settle_info, WIND_FIELD_DUNGEON_FAIL_LUA_INTERRUPT);
    }
  }
LABEL_36:
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_stop_reason_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gallery_stop_reason_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gallery_stop_reason_, p_for_end, &this->gallery_stop_reason_);
  }
  this->gallery_stop_reason_ = GALLERY_STOP_NONE;
LABEL_39:
  if ( v26 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 359: range 00000000161CC978-00000000161CCEB9
void __cdecl WindFieldActivity::onPostEnterSceneEvent(WindFieldActivity *const this, const PostEnterSceneEvent *event)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  char *v7; // rsi
  common::milog::MiLogStream *v9; // r14
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v10; // rax
  _DWORD *v11; // rdx
  uint32_t cur_dungeon_id; // [rsp+14h] [rbp-10Ch]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-108h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-100h] BYREF
  const ActivityWindFieldExcelConfigMgr *config_mgr; // [rsp+28h] [rbp-F8h]
  const data::WindFieldStageExcelConfig *stage_config_ptr; // [rsp+30h] [rbp-F0h]
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-E8h]
  std::shared_ptr<Config> v18; // [rsp+40h] [rbp-E0h] BYREF
  common::milog::MiLogStream v19; // [rsp+50h] [rbp-D0h] BYREF
  char v20[176]; // [rsp+70h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 watcher_id:389 64 16 25 cur_dungeon_scene_ptr:364 96 16 19 cur_dungeon_ptr:378";
  *(_QWORD *)(v2 + 16) = WindFieldActivity::onPostEnterSceneEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  if ( BaseActivity::isOpening(this, 0) && !BaseActivity::isSettled(this) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurScene<DungeonScene>((PlayerSceneComp *const)(v2 + 64));
    if ( !std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v2 + 64), 0LL) )
    {
      v6 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      cur_dungeon_id = DungeonScene::getDungeonId(v6);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v18);
      config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v18)->design_config.txt_config_mgr.activity_wind_field_mgr;
      std::shared_ptr<Config>::~shared_ptr(&v18);
      stage_config_ptr = ActivityWindFieldExcelConfigMgr::findStageConfigByDungeonId(config_mgr, cur_dungeon_id);
      if ( stage_config_ptr )
      {
        std::weak_ptr<DungeonScene>::lock((const std::weak_ptr<DungeonScene> *const)(v2 + 96));
        v7 = (char *)(v2 + 96);
        if ( std::operator!=<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v2 + 96))
          && (v7 = (char *)(v2 + 64),
              std::operator==<DungeonScene,DungeonScene>(
                (const std::shared_ptr<DungeonScene> *)(v2 + 96),
                (const std::shared_ptr<DungeonScene> *)(v2 + 64))) )
        {
          common::milog::MiLogStream::create(
            &v19,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/wind_field_activity.cpp",
            "onPostEnterSceneEvent",
            381);
          v9 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                 &v19,
                 (const char (*)[41])"[WIND_FIELD] reenter cycle dungeon, uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          *(_DWORD *)(v2 + 48) = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
          common::milog::MiLogStream::~MiLogStream(&v19);
        }
        else
        {
          std::set<unsigned int>::clear(&this->finished_watcher_snapshot_set_);
          if ( *(_BYTE *)(((unsigned __int64)&this->gallery_stop_reason_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->gallery_stop_reason_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_store4(&this->gallery_stop_reason_, v7, &this->gallery_stop_reason_);
          }
          this->gallery_stop_reason_ = GALLERY_STOP_NONE;
          __for_range = &stage_config_ptr->watcher_list;
          __for_begin._M_current = std::vector<unsigned int>::begin(&stage_config_ptr->watcher_list)._M_current;
          __for_end._M_current = std::vector<unsigned int>::end(&stage_config_ptr->watcher_list)._M_current;
          while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
          {
            v10 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
            v11 = v10;
            if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v10);
            }
            *(_DWORD *)(v2 + 48) = *v11;
            if ( BaseActivity::isWatcherFinished(this, *(_DWORD *)(v2 + 48)) )
              std::set<unsigned int>::insert(
                &this->finished_watcher_snapshot_set_,
                (const std::set<unsigned int>::value_type *)(v2 + 48));
            __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
          }
          std::weak_ptr<DungeonScene>::operator=<DungeonScene>(
            &this->cur_dungeon_wtr_,
            (const std::shared_ptr<DungeonScene> *)(v2 + 64));
        }
        std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 96));
      }
    }
    std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 64));
  }
  if ( v20 == (char *)v2 )
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

// Line 400: range 00000000161CCEBA-00000000161CD151
void __cdecl WindFieldActivity::onLeaveSceneEvent(WindFieldActivity *const this, const LeaveSceneEvent *event)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  bool v7; // r14
  uint32_t cur_dungeon_id; // [rsp+1Ch] [rbp-94h]
  char v10[144]; // [rsp+20h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 25 cur_dungeon_scene_ptr:401 64 16 19 cur_dungeon_ptr:412";
  *(_QWORD *)(v2 + 16) = WindFieldActivity::onLeaveSceneEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene<DungeonScene>((PlayerSceneComp *const)(v2 + 32));
  if ( !std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v2 + 32), 0LL) )
  {
    v5 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    cur_dungeon_id = DungeonScene::getDungeonId(v5);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v2 + 64));
    v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    v7 = !ActivityWindFieldExcelConfigMgr::isWindFieldDungeon(
            &v6->design_config.txt_config_mgr.activity_wind_field_mgr,
            cur_dungeon_id);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 64));
    if ( !v7 )
    {
      std::weak_ptr<DungeonScene>::lock((const std::weak_ptr<DungeonScene> *const)(v2 + 64));
      if ( std::operator!=<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v2 + 64))
        && std::operator==<DungeonScene,DungeonScene>(
             (const std::shared_ptr<DungeonScene> *)(v2 + 64),
             (const std::shared_ptr<DungeonScene> *)(v2 + 32)) )
      {
        std::__weak_ptr<DungeonScene,(__gnu_cxx::_Lock_policy)2>::reset(&this->cur_dungeon_wtr_);
      }
      std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 64));
    }
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 32));
  if ( v10 == (char *)v2 )
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

// Line 420: range 00000000161CD152-00000000161CDA07
int32_t __cdecl WindFieldActivity::restartDungeon(WindFieldActivity *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t v5; // r14d
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t OwnerUid; // r14d
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  int32_t result; // eax
  int32_t check_ret; // [rsp+14h] [rbp-15Ch]
  PlayerDungeonComp *dungeon_comp; // [rsp+18h] [rbp-158h]
  DungeonExcelConfigMgr *dungeon_config_mgr; // [rsp+20h] [rbp-150h]
  const data::DungeonExcelConfig *dungeon_config_ptr; // [rsp+28h] [rbp-148h]
  int32_t *ret; // [rsp+30h] [rbp-140h]
  std::shared_ptr<Config> v22; // [rsp+40h] [rbp-130h] BYREF
  std::pair<int,std::shared_ptr<DungeonScene> > __in; // [rsp+50h] [rbp-120h] BYREF
  EnterDungeonOption v24; // [rsp+70h] [rbp-100h] BYREF
  common::milog::MiLogStream v25; // [rsp+90h] [rbp-E0h] BYREF
  std::map<unsigned int,unsigned int> level_config_id_map; // [rsp+B0h] [rbp-C0h] BYREF
  char v27[144]; // [rsp+E0h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 14 dungeon_id:437 64 16 21 dungeon_scene_ptr:426";
  *(_QWORD *)(v1 + 16) = WindFieldActivity::restartDungeon;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  if ( !BaseActivity::isOpening(this, 0) || BaseActivity::isSettled(this) )
  {
    v5 = 860;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    dungeon_comp = Player::getDungeonComp(this->player_);
    PlayerDungeonComp::getCurDungeon((PlayerDungeonComp *const)(v1 + 64));
    if ( std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v1 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/wind_field_activity.cpp",
        "restartDungeon",
        429);
      common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
        &v25,
        (const char (*)[39])"[WIND_FIELD] dungeon_scene_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v25);
      v5 = -1;
    }
    else
    {
      v6 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      OwnerUid = Scene::getOwnerUid((const Scene *const)v6);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      if ( OwnerUid == Player::getUid(this->player_) )
      {
        v8 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
        *(_DWORD *)(v1 + 48) = DungeonScene::getDungeonId(v8);
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v22);
        dungeon_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22)->design_config.txt_config_mgr.dungeon_config_mgr;
        std::shared_ptr<Config>::~shared_ptr(&v22);
        dungeon_config_ptr = data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(
                               dungeon_config_mgr,
                               *(_DWORD *)(v1 + 48));
        if ( dungeon_config_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->type >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)dungeon_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->type >> 3)
                                                                              + 0x7FFF8000) )
          {
            __asan_report_load4(&dungeon_config_ptr->type);
          }
          if ( dungeon_config_ptr->type == DUNGEON_WIND_FIELD )
          {
            v11 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
            if ( DungeonScene::getDungeonResult(v11) != DUNGEON_RESULT_FAIL
              && (v12 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64)),
                  DungeonScene::getDungeonResult(v12) != DUNGEON_RESULT_CANCEL) )
            {
              common::milog::MiLogStream::create(
                &v25,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/wind_field_activity.cpp",
                "restartDungeon",
                453);
              v14 = common::milog::MiLogStream::operator<<<char [99],(char *[99])0>(
                      &v25,
                      (const char (*)[99])"[WIND_FIELD] only a failed/canceled DUNGEON_WIND_FIELD dungeon can specially r"
                                          "estart, dungeon_id: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v14,
                (const unsigned int *)(v1 + 48));
              common::milog::MiLogStream::~MiLogStream(&v25);
              v5 = -1;
            }
            else
            {
              check_ret = PlayerDungeonComp::checkRestartDungeon(dungeon_comp, DUNGEON_RESTART_REASON_DIE_RETRY);
              if ( check_ret )
              {
                common::milog::MiLogStream::create(
                  &v25,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/player/activity/wind_field_activity.cpp",
                  "restartDungeon",
                  459);
                v15 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
                        &v25,
                        (const char (*)[54])"[WIND_FIELD] checkRestartDungeon failed, dungeon_id: ");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v15,
                  (const unsigned int *)(v1 + 48));
                common::milog::MiLogStream::~MiLogStream(&v25);
                v5 = check_ret;
              }
              else
              {
                memset(&v24, 0, sizeof(v24));
                EnterDungeonOption::EnterDungeonOption(&v24);
                memset(&level_config_id_map, 0, sizeof(level_config_id_map));
                std::map<unsigned int,unsigned int>::map(&level_config_id_map);
                PlayerDungeonComp::restartDungeon(&__in, dungeon_comp, &level_config_id_map, v24);
                std::map<unsigned int,unsigned int>::~map(&level_config_id_map);
                ret = std::get<0ul,int,std::shared_ptr<DungeonScene>>(&__in);
                std::get<1ul,int,std::shared_ptr<DungeonScene>>(&__in);
                if ( *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4(ret);
                }
                if ( *ret )
                {
                  common::milog::MiLogStream::create(
                    &v25,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/activity/wind_field_activity.cpp",
                    "restartDungeon",
                    466);
                  common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                    &v25,
                    (const char (*)[35])"[WIND_FIELD] restartDungeon failed");
                  common::milog::MiLogStream::~MiLogStream(&v25);
                  if ( *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load4(ret);
                  }
                  v5 = *ret;
                }
                else
                {
                  v5 = 0;
                }
                std::pair<int,std::shared_ptr<DungeonScene>>::~pair(&__in);
              }
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v25,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/wind_field_activity.cpp",
              "restartDungeon",
              447);
            v10 = common::milog::MiLogStream::operator<<<char [67],(char *[67])0>(
                    &v25,
                    (const char (*)[67])"[WIND_FIELD] restart a no DUNGEON_WIND_FIELD dungeon, dungeon_id: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v1 + 48));
            common::milog::MiLogStream::~MiLogStream(&v25);
            v5 = -1;
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v25,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/activity/wind_field_activity.cpp",
            "restartDungeon",
            442);
          v9 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
                 &v25,
                 (const char (*)[57])"[WIND_FIELD] findDungeonExcelConfig failed, dungeon_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v1 + 48));
          common::milog::MiLogStream::~MiLogStream(&v25);
          v5 = -1;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v25,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/wind_field_activity.cpp",
          "restartDungeon",
          434);
        common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
          &v25,
          (const char (*)[57])"[WIND_FIELD] guest can not send DungeonRestartReq, error");
        common::milog::MiLogStream::~MiLogStream(&v25);
        v5 = -1;
      }
    }
    std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v1 + 64));
  }
  result = v5;
  if ( v27 == (char *)v1 )
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

// Line 473: range 00000000161CDA08-00000000161CDAE1
// local variable allocation has failed, the output may be wrong!
void __cdecl WindFieldActivity::setGalleryStopReason(WindFieldActivity *const this, proto::GalleryStopReason reason)
{
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream v3; // [rsp+10h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_stop_reason_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gallery_stop_reason_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gallery_stop_reason_, *(_QWORD *)&reason, &this->gallery_stop_reason_);
  }
  this->gallery_stop_reason_ = reason;
  common::milog::MiLogStream::create(
    &v3,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/wind_field_activity.cpp",
    "setGalleryStopReason",
    475);
  v2 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
         &v3,
         (const char (*)[40])"[WIND_FIELD] gallery_stop_reason_ set: ");
  common::milog::MiLogStream::operator<<<proto::GalleryStopReason,(proto::GalleryStopReason*)0>(
    v2,
    &this->gallery_stop_reason_);
  common::milog::MiLogStream::~MiLogStream(&v3);
};

// Line 481: range 00000000161CDAE2-00000000161CDD18
__int64 __fastcall WindFieldActivity::closeActivityStageByGm(WindFieldActivity *const this, uint32_t stage_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::_Rb_tree_iterator<std::pair<unsigned int const,bool> >::_Self *p_y; // rsi
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,bool> >::pointer v8; // rdx
  char v9; // cl
  std::_Rb_tree_iterator<std::pair<unsigned int const,bool> >::_Self __y; // [rsp+18h] [rbp-A8h] BYREF
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-A0h] BYREF
  char v12[128]; // [rsp+40h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 stage_id:480 64 8 8 iter:482";
  *(_QWORD *)(v2 + 16) = WindFieldActivity::closeActivityStageByGm;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = stage_id;
  *(std::map<unsigned int,bool>::iterator *)(v2 + 64) = std::map<unsigned int,bool>::find(
                                                          &this->stage_open_map_,
                                                          (const std::map<unsigned int,bool>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,bool>::end(&this->stage_open_map_)._M_node;
  p_y = &__y;
  if ( std::operator==((const std::_Rb_tree_iterator<std::pair<unsigned int const,bool> >::_Self *)(v2 + 64), &__y) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/wind_field_activity.cpp",
      "closeActivityStageByGm",
      485);
    v6 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
           &v11,
           (const char (*)[35])"[WIND_FIELD] cannot find stage_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v11);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    v8 = std::_Rb_tree_iterator<std::pair<unsigned int const,bool>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,bool> > *const)(v2 + 64));
    v9 = *(_BYTE *)(((unsigned __int64)&v8->second >> 3) + 0x7FFF8000);
    if ( v9 != 0 && (((unsigned __int8)v8 + 4) & 7) >= v9 )
    {
      LOBYTE(p_y) = v9 != 0;
      __asan_report_store1(&v8->second, p_y, v8);
    }
    v8->second = 0;
    BaseActivity::notifyClientData(this, 0);
    result = 0LL;
  }
  if ( v12 == (char *)v2 )
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

// Line 494: range 00000000161CDD1A-00000000161CDE55
void __cdecl WindFieldActivity::resetActivityDataByGm(WindFieldActivity *const this)
{
  std::tuple_element<0,const std::pair<unsigned int const,data::WindFieldStageExcelConfig> >::type *v1; // rsi
  std::map<unsigned int,bool>::mapped_type *v2; // rax
  _BYTE *v3; // rdx
  char v4; // cl
  std::unordered_map<unsigned int,data::WindFieldStageExcelConfig>::const_iterator __for_begin; // [rsp+18h] [rbp-48h] BYREF
  std::unordered_map<unsigned int,data::WindFieldStageExcelConfig>::const_iterator __for_end; // [rsp+20h] [rbp-40h] BYREF
  const ActivityWindFieldExcelConfigMgr *conf_mgr; // [rsp+28h] [rbp-38h]
  const std::unordered_map<unsigned int,data::WindFieldStageExcelConfig> *__for_range; // [rsp+30h] [rbp-30h]
  const std::pair<unsigned int const,data::WindFieldStageExcelConfig> *v9; // [rsp+38h] [rbp-28h]
  std::tuple_element<0,const std::pair<unsigned int const,data::WindFieldStageExcelConfig> >::type *stage_id; // [rsp+40h] [rbp-20h]
  std::tuple_element<1,const std::pair<unsigned int const,data::WindFieldStageExcelConfig> >::type *stage_config; // [rsp+48h] [rbp-18h]
  std::shared_ptr<Config> v12; // [rsp+50h] [rbp-10h] BYREF

  std::map<unsigned int,bool>::clear(&this->stage_open_map_);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v12);
  conf_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v12)->design_config.txt_config_mgr.activity_wind_field_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v12);
  __for_range = &conf_mgr->wind_field_stage_excel_config_map;
  __for_begin._M_cur = std::unordered_map<unsigned int,data::WindFieldStageExcelConfig>::begin(&conf_mgr->wind_field_stage_excel_config_map)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,data::WindFieldStageExcelConfig>::end(&conf_mgr->wind_field_stage_excel_config_map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::WindFieldStageExcelConfig>,false>(
            &__for_begin,
            &__for_end) )
  {
    v9 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::WindFieldStageExcelConfig>,false,false>::operator*(&__for_begin);
    stage_id = std::get<0ul,unsigned int const,data::WindFieldStageExcelConfig>(v9);
    stage_config = (std::tuple_element<1,const std::pair<unsigned int const,data::WindFieldStageExcelConfig> >::type *)std::get<1ul,unsigned int const,data::WindFieldStageExcelConfig>(v9);
    v1 = stage_id;
    v2 = std::map<unsigned int,bool>::operator[](&this->stage_open_map_, stage_id);
    v3 = v2;
    v4 = *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000);
    if ( v4 != 0 && ((unsigned __int8)v2 & 7) >= v4 )
    {
      LOBYTE(v1) = v4 != 0;
      __asan_report_store1(v2, v1, v2);
    }
    *v3 = 0;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::WindFieldStageExcelConfig>,false,false>::operator++(&__for_begin);
  }
};
