// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/flight_activity.cpp

// Line 26: range 00000000150645B8-0000000015064664
void __cdecl FlightDailyRecordData::fromBin(FlightDailyRecordData *const this, const proto::FlightDailyRecordBin *bin)
{
  bool is_touched; // cl
  uint32_t v3; // ecx

  is_touched = proto::FlightDailyRecordBin::is_touched(bin);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)this & 7) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(this);
  }
  this->is_touched = is_touched;
  v3 = proto::FlightDailyRecordBin::best_score(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->best_score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->best_score >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->best_score);
  }
  this->best_score = v3;
};

// Line 32: range 0000000015064666-0000000015064714
void __cdecl FlightDailyRecordData::toBin(const FlightDailyRecordData *const this, proto::FlightDailyRecordBin *bin)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)this & 7) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(this);
  }
  proto::FlightDailyRecordBin::set_is_touched(bin, this->is_touched);
  if ( *(_BYTE *)(((unsigned __int64)&this->best_score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->best_score >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::FlightDailyRecordBin::set_best_score(bin, this->best_score);
};

// Line 38: range 0000000015064716-00000000150647C4
void __cdecl FlightDailyRecordData::toClient(const FlightDailyRecordData *const this, proto::FlightDailyRecord *proto)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)this & 7) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(this);
  }
  proto::FlightDailyRecord::set_is_touched(proto, this->is_touched);
  if ( *(_BYTE *)(((unsigned __int64)&this->best_score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->best_score >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::FlightDailyRecord::set_best_score(proto, this->best_score);
};

// Line 44: range 00000000150647C6-0000000015064BB2
void __cdecl FlightActivity::compatibleInit(FlightActivity *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int v4; // ecx
  uint32_t *p_day_id; // rax
  const ActivityFlightExcelConfigMgr *p_activity_flight_config_mgr; // rdi
  uint32_t v7; // edx
  unsigned int *v8; // rax
  std::unordered_map<unsigned int,FlightDailyRecordData*>::mapped_type *v9; // rax
  int i_0; // [rsp+1Ch] [rbp-D4h]
  unsigned __int64 i; // [rsp+20h] [rbp-D0h]
  FlightDailyRecordData *daily_record; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<Config> v14; // [rsp+30h] [rbp-C0h] BYREF
  char v15[176]; // [rsp+40h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 8 15 group_id_opt:56 64 32 13 daily_data:48";
  *(_QWORD *)(v1 + 16) = FlightActivity::compatibleInit;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218959360;
  v3[536862723] = -202116109;
  for ( i = std::vector<FlightDailyRecordData>::size(&this->flight_daily_record_vec_); i <= 6; ++i )
  {
    *(_QWORD *)(v1 + 64) = 0LL;
    *(_QWORD *)(v1 + 72) = 0LL;
    *(_QWORD *)(v1 + 80) = 0LL;
    *(_QWORD *)(v1 + 88) = 0LL;
    std::vector<FlightDailyRecordData>::emplace_back<FlightDailyRecordData&>(
      &this->flight_daily_record_vec_,
      (FlightDailyRecordData *)(v1 + 64),
      (FlightDailyRecordData *)&this->flight_daily_record_vec_);
  }
  for ( i_0 = 0; i_0 < std::vector<FlightDailyRecordData>::size(&this->flight_daily_record_vec_); ++i_0 )
  {
    daily_record = std::vector<FlightDailyRecordData>::operator[](&this->flight_daily_record_vec_, i_0);
    v4 = i_0;
    p_day_id = &daily_record->day_id;
    if ( *(_BYTE *)(((unsigned __int64)p_day_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_day_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_day_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(p_day_id);
    }
    daily_record->day_id = v4;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v14);
    p_activity_flight_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14)->design_config.txt_config_mgr.activity_flight_config_mgr;
    v7 = i_0;
    if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      p_activity_flight_config_mgr = (const ActivityFlightExcelConfigMgr *)&this->activity_id_;
      __asan_report_load4();
    }
    *(std::optional<unsigned int> *)(v1 + 32) = ActivityFlightExcelConfigMgr::queryGroupIdByDayId(
                                                  p_activity_flight_config_mgr,
                                                  this->activity_id_,
                                                  v7);
    std::shared_ptr<Config>::~shared_ptr(&v14);
    if ( std::optional<unsigned int>::has_value((const std::optional<unsigned int> *const)(v1 + 32)) )
    {
      v8 = std::optional<unsigned int>::value((std::optional<unsigned int> *const)(v1 + 32));
      v9 = std::unordered_map<unsigned int,FlightDailyRecordData *>::operator[](&this->group_id_to_daily_data_map_, v8);
      if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
        __asan_report_store8(v9);
      *v9 = daily_record;
    }
    else
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v1 + 64),
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/flight_activity.cpp",
        "compatibleInit",
        63);
      if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)(v1 + 64),
        "group not found @day[%u] of activity[%u]",
        (unsigned int)i_0,
        this->activity_id_);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 64));
    }
  }
  if ( v15 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 69: range 0000000015064BB4-0000000015064DBF
int32_t __cdecl FlightActivity::fromScheduleBin(FlightActivity *const this, const proto::ActivityScheduleBin *bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t result; // eax
  google::protobuf::RepeatedPtrField<proto::FlightDailyRecordBin>::const_iterator __for_begin; // [rsp+18h] [rbp-A8h] BYREF
  google::protobuf::RepeatedPtrField<proto::FlightDailyRecordBin>::const_iterator __for_end; // [rsp+20h] [rbp-A0h] BYREF
  const proto::FlightScheduleBin *flight_bin; // [rsp+28h] [rbp-98h]
  const google::protobuf::RepeatedPtrField<proto::FlightDailyRecordBin> *__for_range; // [rsp+30h] [rbp-90h]
  const proto::FlightDailyRecordBin *daily_bin; // [rsp+38h] [rbp-88h]
  char v11[128]; // [rsp+40h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 13 daily_data:75";
  *(_QWORD *)(v2 + 16) = FlightActivity::fromScheduleBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  std::vector<FlightDailyRecordData>::clear(&this->flight_daily_record_vec_);
  std::unordered_map<unsigned int,FlightDailyRecordData *>::clear(&this->group_id_to_daily_data_map_);
  flight_bin = proto::ActivityScheduleBin::flight_bin(bin);
  __for_range = proto::FlightScheduleBin::daily_record_list(flight_bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::FlightDailyRecordBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::FlightDailyRecordBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::FlightDailyRecordBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    daily_bin = google::protobuf::internal::RepeatedPtrIterator<proto::FlightDailyRecordBin const>::operator*(&__for_begin);
    *(_QWORD *)(v2 + 32) = 0LL;
    *(_QWORD *)(v2 + 40) = 0LL;
    *(_QWORD *)(v2 + 48) = 0LL;
    *(_QWORD *)(v2 + 56) = 0LL;
    FlightDailyRecordData::fromBin((FlightDailyRecordData *const)(v2 + 32), daily_bin);
    std::vector<FlightDailyRecordData>::emplace_back<FlightDailyRecordData&>(
      &this->flight_daily_record_vec_,
      (FlightDailyRecordData *)(v2 + 32),
      (FlightDailyRecordData *)&this->flight_daily_record_vec_);
    google::protobuf::internal::RepeatedPtrIterator<proto::FlightDailyRecordBin const>::operator++(&__for_begin);
  }
  FlightActivity::compatibleInit(this);
  result = 0;
  if ( v11 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
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

// Line 86: range 0000000015064DC0-0000000015064E6C
int32_t __cdecl FlightActivity::toScheduleBin(const FlightActivity *const this, proto::ActivityScheduleBin *bin)
{
  std::vector<FlightDailyRecordData>::const_iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::vector<FlightDailyRecordData>::const_iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  proto::FlightScheduleBin *flight_bin; // [rsp+20h] [rbp-20h]
  const std::vector<FlightDailyRecordData> *__for_range; // [rsp+28h] [rbp-18h]
  const FlightDailyRecordData *daily_data; // [rsp+30h] [rbp-10h]
  proto::FlightDailyRecordBin *daily_bin; // [rsp+38h] [rbp-8h]

  flight_bin = proto::ActivityScheduleBin::mutable_flight_bin(bin);
  __for_range = &this->flight_daily_record_vec_;
  __for_begin._M_current = std::vector<FlightDailyRecordData>::begin(&this->flight_daily_record_vec_)._M_current;
  __for_end._M_current = std::vector<FlightDailyRecordData>::end(&this->flight_daily_record_vec_)._M_current;
  while ( __gnu_cxx::operator!=<FlightDailyRecordData const*,std::vector<FlightDailyRecordData>>(
            &__for_begin,
            &__for_end) )
  {
    daily_data = __gnu_cxx::__normal_iterator<FlightDailyRecordData const*,std::vector<FlightDailyRecordData>>::operator*(&__for_begin);
    daily_bin = proto::FlightScheduleBin::add_daily_record_list(flight_bin);
    FlightDailyRecordData::toBin(daily_data, daily_bin);
    __gnu_cxx::__normal_iterator<FlightDailyRecordData const*,std::vector<FlightDailyRecordData>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 98: range 0000000015064E6E-0000000015065B15
int32_t __cdecl FlightActivity::toClient(FlightActivity *const this, proto::ActivityInfo *activity_info)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rcx
  int32_t result; // eax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::vector<int>::const_reference v9; // rdx
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  uint32_t ScheduleBeginTime; // eax
  ActivityFlightExcelConfigMgr *p_activity_flight_config_mgr; // rsi
  uint32_t v13; // ecx
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v14; // rdx
  google::protobuf::RepeatedField<unsigned int> *v15; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  unsigned int *v17; // rdx
  common::milog::MiLogStream *v18; // r14
  common::milog::MiLogStream *v19; // rcx
  unsigned int i; // [rsp+1Ch] [rbp-154h]
  google::protobuf::uint32 activity_id; // [rsp+20h] [rbp-150h]
  google::protobuf::uint32 schedule_id; // [rsp+24h] [rbp-14Ch]
  std::vector<data::NewActivityScheduleCond>::const_iterator __for_begin; // [rsp+28h] [rbp-148h] BYREF
  proto::FlightActivityDetailInfo *flight_info; // [rsp+30h] [rbp-140h]
  const data::FlightActivityExcelConfig *flight_config_ptr; // [rsp+38h] [rbp-138h]
  const data::NewActivityScheduleExcelConfig *activity_schedule_config_ptr; // [rsp+40h] [rbp-130h]
  const std::vector<data::NewActivityScheduleCond> *__for_range; // [rsp+48h] [rbp-128h]
  FlightDailyRecordData *daily_data; // [rsp+50h] [rbp-120h]
  proto::FlightDailyRecord *daily_proto; // [rsp+58h] [rbp-118h]
  std::vector<unsigned int> *__for_range_0; // [rsp+60h] [rbp-110h]
  const data::NewActivityScheduleCond *schedule_cond; // [rsp+68h] [rbp-108h]
  std::shared_ptr<Config> v32; // [rsp+70h] [rbp-100h] BYREF
  common::milog::MiLogStream v33; // [rsp+80h] [rbp-F0h] BYREF
  char v34[208]; // [rsp+A0h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 watcher_id:147 64 8 16 group_id_opt:158 96 32 25 daily_watcher_vec_opt:141";
  *(_QWORD *)(v2 + 16) = FlightActivity::toClient;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862724] = -202116109;
  if ( BaseActivity::toClient(this, activity_info) )
  {
    common::milog::MiLogStream::create(
      &v33,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/flight_activity.cpp",
      "toClient",
      101);
    v5 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
           &v33,
           (const char (*)[46])"[FLIGHT] BaseActivity::toClient failed, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v5, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v33);
    result = -1;
  }
  else
  {
    activity_id = proto::ActivityInfo::activity_id(activity_info);
    flight_info = proto::ActivityInfo::mutable_flight_info(activity_info);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v32);
    v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v32);
    flight_config_ptr = data::ActivityFlightExcelConfigMgrBase::findFlightActivityExcelConfig(
                          &v7->design_config.txt_config_mgr.activity_flight_config_mgr,
                          activity_id);
    std::shared_ptr<Config>::~shared_ptr(&v32);
    if ( flight_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&flight_config_ptr->preview_reward_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&flight_config_ptr->preview_reward_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      proto::FlightActivityDetailInfo::set_preview_reward_id(flight_info, flight_config_ptr->preview_reward_id);
      schedule_id = proto::ActivityInfo::schedule_id(activity_info);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v32);
      v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v32);
      activity_schedule_config_ptr = data::NewActivityExcelConfigMgrBase::findNewActivityScheduleExcelConfig(
                                       &v8->design_config.txt_config_mgr.new_activity_config_mgr,
                                       schedule_id);
      std::shared_ptr<Config>::~shared_ptr(&v32);
      if ( activity_schedule_config_ptr )
      {
        __for_range = &activity_schedule_config_ptr->cond;
        __for_begin._M_current = std::vector<data::NewActivityScheduleCond>::begin(&activity_schedule_config_ptr->cond)._M_current;
        *(std::vector<data::NewActivityScheduleCond>::const_iterator *)(v2 + 64) = std::vector<data::NewActivityScheduleCond>::end(&activity_schedule_config_ptr->cond);
        while ( __gnu_cxx::operator!=<data::NewActivityScheduleCond const*,std::vector<data::NewActivityScheduleCond>>(
                  &__for_begin,
                  (const __gnu_cxx::__normal_iterator<const data::NewActivityScheduleCond*,std::vector<data::NewActivityScheduleCond> > *)(v2 + 64)) )
        {
          schedule_cond = __gnu_cxx::__normal_iterator<data::NewActivityScheduleCond const*,std::vector<data::NewActivityScheduleCond>>::operator*(&__for_begin);
          if ( *(_BYTE *)(((unsigned __int64)&schedule_cond->type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&schedule_cond->type >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          if ( schedule_cond->type == NEW_ACTIVITY_SCHEDULE_COND_PLAYER_LEVEL_GREATER
            && std::vector<int>::size(&schedule_cond->param) )
          {
            v9 = std::vector<int>::operator[](&schedule_cond->param, 0LL);
            if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            proto::FlightActivityDetailInfo::set_min_open_player_level(flight_info, *v9 + 1);
          }
          __gnu_cxx::__normal_iterator<data::NewActivityScheduleCond const*,std::vector<data::NewActivityScheduleCond>>::operator++(&__for_begin);
        }
        for ( i = 0; (int)i < std::vector<FlightDailyRecordData>::size(&this->flight_daily_record_vec_); ++i )
        {
          daily_data = std::vector<FlightDailyRecordData>::operator[](&this->flight_daily_record_vec_, (int)i);
          daily_proto = proto::FlightActivityDetailInfo::add_daily_record_list(flight_info);
          FlightDailyRecordData::toClient(daily_data, daily_proto);
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v32);
          p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v32)->design_config.txt_config_mgr.new_activity_config_mgr;
          if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3)
                                                                + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          ScheduleBeginTime = NewActivityExcelConfigMgr::getScheduleBeginTime(
                                p_new_activity_config_mgr,
                                this->schedule_id_);
          proto::FlightDailyRecord::set_start_time(daily_proto, ScheduleBeginTime + 86400 * i);
          std::shared_ptr<Config>::~shared_ptr(&v32);
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v32);
          p_activity_flight_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v32)->design_config.txt_config_mgr.activity_flight_config_mgr;
          v13 = i;
          if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          ActivityFlightExcelConfigMgr::findDailyWatcherVec(
            (std::optional<std::vector<unsigned int> > *)(v2 + 96),
            p_activity_flight_config_mgr,
            this->activity_id_,
            v13);
          std::shared_ptr<Config>::~shared_ptr(&v32);
          if ( !std::optional<std::vector<unsigned int>>::has_value((const std::optional<std::vector<unsigned int> > *const)(v2 + 96)) )
          {
            common::milog::MiLogStream::create(
              &v33,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/flight_activity.cpp",
              "toClient",
              144);
            common::milog::MiLogStream::operator()(&v33, off_256EA4C0, i, activity_id);
            common::milog::MiLogStream::~MiLogStream(&v33);
          }
          else
          {
            __for_range_0 = std::optional<std::vector<unsigned int>>::value((std::optional<std::vector<unsigned int> > *const)(v2 + 96));
            __for_begin._M_current = (const data::NewActivityScheduleCond *)std::vector<unsigned int>::begin(__for_range_0)._M_current;
            *(std::vector<unsigned int>::iterator *)(v2 + 64) = std::vector<unsigned int>::end(__for_range_0);
            while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                      (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_begin,
                      (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v2 + 64)) )
            {
              v14 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
              if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              *(_DWORD *)(v2 + 48) = *v14;
              v15 = proto::FlightDailyRecord::mutable_watcher_id_list(daily_proto);
              google::protobuf::RepeatedField<unsigned int>::Add(v15, (const unsigned int *)(v2 + 48));
              __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
            }
            if ( proto::FlightDailyRecord::watcher_id_list_size(daily_proto) )
            {
              ServiceBox::findService<GameserverService>();
              GameserverService::getConfig((GameserverService *const)&v32);
              v16 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v32);
              *(std::optional<unsigned int> *)(v2 + 64) = ActivityFlightExcelConfigMgr::queryGroupIdByDayId(
                                                            &v16->design_config.txt_config_mgr.activity_flight_config_mgr,
                                                            activity_id,
                                                            i);
              std::shared_ptr<Config>::~shared_ptr(&v32);
              if ( std::optional<unsigned int>::has_value((const std::optional<unsigned int> *const)(v2 + 64)) )
              {
                v17 = std::optional<unsigned int>::value((std::optional<unsigned int> *const)(v2 + 64));
                if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                proto::FlightDailyRecord::set_group_id(daily_proto, *v17);
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v33,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/activity/flight_activity.cpp",
                  "toClient",
                  165);
                common::milog::MiLogStream::operator()(&v33, "group not found @day[%u] of activity[%u]", i, activity_id);
                common::milog::MiLogStream::~MiLogStream(&v33);
              }
            }
            else
            {
              common::milog::MiLogStream::create(
                &v33,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/flight_activity.cpp",
                "toClient",
                153);
              common::milog::MiLogStream::operator()(
                &v33,
                "watcher list empty @day[%u] of activity[%u]",
                i,
                activity_id);
              common::milog::MiLogStream::~MiLogStream(&v33);
            }
          }
          std::optional<std::vector<unsigned int>>::~optional((std::optional<std::vector<unsigned int> > *const)(v2 + 96));
        }
        common::milog::MiLogStream::create(
          &v33,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/flight_activity.cpp",
          "toClient",
          170);
        v18 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                &v33,
                (const char (*)[36])"[FY] flight_info record list size: ");
        *(_DWORD *)(v2 + 48) = proto::FlightActivityDetailInfo::daily_record_list_size(flight_info);
        v19 = common::milog::MiLogStream::operator<<<int,(int *)0>(v18, (const int *)(v2 + 48));
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        operator<<(v19, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v33);
        result = 0;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v33,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/flight_activity.cpp",
          "toClient",
          119);
        common::milog::MiLogStream::operator()(&v33, off_256EA460, schedule_id);
        common::milog::MiLogStream::~MiLogStream(&v33);
        result = -1;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/flight_activity.cpp",
        "toClient",
        110);
      common::milog::MiLogStream::operator()(&v33, "Flight config nullptr for acitiy_id=%u", activity_id);
      common::milog::MiLogStream::~MiLogStream(&v33);
      result = -1;
    }
  }
  if ( v34 == (char *)v2 )
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
  return result;
};

// Line 176: range 0000000015065B16-0000000015065B6C
int32_t __cdecl FlightActivity::init(FlightActivity *const this)
{
  if ( BaseActivity::isOpening(this, 0) && !BaseActivity::isSettled(this) )
    FlightActivity::initObserver(this);
  return 0;
};

// Line 185: range 0000000015065B6E-0000000015065BA2
void __cdecl FlightActivity::onLogin(FlightActivity *const this)
{
  if ( BaseActivity::isOpening(this, 0) )
    BaseActivity::onLogin(this);
};

// Line 195: range 0000000015065BA4-0000000015065BCA
void __cdecl FlightActivity::onStart(FlightActivity *const this)
{
  FlightActivity::initObserver(this);
  FlightActivity::compatibleInit(this);
};

// Line 201: range 0000000015065BCC-0000000015065BD6
void __cdecl FlightActivity::onSettle(FlightActivity *const this)
{
  ;
};

// Line 205: range 0000000015065BD8-0000000015065C55
void __cdecl FlightActivity::onClear(FlightActivity *const this)
{
  std::vector<FlightDailyRecordData>::iterator __for_begin; // [rsp+10h] [rbp-20h] BYREF
  std::vector<FlightDailyRecordData>::iterator __for_end; // [rsp+18h] [rbp-18h] BYREF
  std::vector<FlightDailyRecordData> *__for_range; // [rsp+20h] [rbp-10h]
  FlightDailyRecordData *daily_data; // [rsp+28h] [rbp-8h]

  __for_range = &this->flight_daily_record_vec_;
  __for_begin._M_current = std::vector<FlightDailyRecordData>::begin(&this->flight_daily_record_vec_)._M_current;
  __for_end._M_current = std::vector<FlightDailyRecordData>::end(&this->flight_daily_record_vec_)._M_current;
  while ( __gnu_cxx::operator!=<FlightDailyRecordData *,std::vector<FlightDailyRecordData>>(&__for_begin, &__for_end) )
  {
    daily_data = __gnu_cxx::__normal_iterator<FlightDailyRecordData *,std::vector<FlightDailyRecordData>>::operator*(&__for_begin);
    FlightDailyRecordData::clear(daily_data);
    __gnu_cxx::__normal_iterator<FlightDailyRecordData *,std::vector<FlightDailyRecordData>>::operator++(&__for_begin);
  }
};

// Line 213: range 0000000015065C56-0000000015065C60
void __cdecl FlightActivity::initTimer(FlightActivity *const this)
{
  ;
};

// Line 218: range 0000000015065C62-0000000015065F94
void __cdecl FlightActivity::initObserver(FlightActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::weak_ptr<FlightActivity> *EventComp; // [rsp+10h] [rbp-D0h]
  std::weak_ptr<FlightActivity> *p_this_wtr; // [rsp+20h] [rbp-C0h]
  std::weak_ptr<Observer> v6; // [rsp+30h] [rbp-B0h] BYREF
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
  *(_QWORD *)(v1 + 8) = "2 32 16 12 this_ptr:219 64 16 12 this_wtr:220";
  *(_QWORD *)(v1 + 16) = FlightActivity::initObserver;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  std::enable_shared_from_this<BaseActivity>::shared_from_this(&v7);
  std::dynamic_pointer_cast<FlightActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)(v1 + 32));
  std::shared_ptr<BaseActivity>::~shared_ptr((std::shared_ptr<BaseActivity> *const)&v7);
  std::weak_ptr<FlightActivity>::weak_ptr<FlightActivity,void>(
    (std::weak_ptr<FlightActivity> *const)(v1 + 64),
    (const std::shared_ptr<FlightActivity> *)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  p_this_wtr = (std::weak_ptr<FlightActivity> *)Player::getEventComp(this->player_);
  std::weak_ptr<FlightActivity>::weak_ptr(
    (std::weak_ptr<FlightActivity> *const)&v7,
    (const std::weak_ptr<FlightActivity> *)(v1 + 64));
  PlayerEventComp::registerObserver<FlightActivity,LuaMarkedChallengeEvent>(
    (PlayerEventComp *const)&v6,
    p_this_wtr,
    (void (*)(FlightActivity *, const LuaMarkedChallengeEvent *))&v7);
  std::weak_ptr<Observer>::~weak_ptr(&v6);
  std::weak_ptr<FlightActivity>::~weak_ptr((std::weak_ptr<FlightActivity> *const)&v7);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  EventComp = (std::weak_ptr<FlightActivity> *)Player::getEventComp(this->player_);
  std::weak_ptr<FlightActivity>::weak_ptr(
    (std::weak_ptr<FlightActivity> *const)&v6,
    (const std::weak_ptr<FlightActivity> *)(v1 + 64));
  PlayerEventComp::registerObserver<FlightActivity,ChallengeBeginEvent>(
    (PlayerEventComp *const)&v7,
    EventComp,
    (void (*)(FlightActivity *, const ChallengeBeginEvent *))&v6);
  std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v7);
  std::weak_ptr<FlightActivity>::~weak_ptr((std::weak_ptr<FlightActivity> *const)&v6);
  std::weak_ptr<FlightActivity>::~weak_ptr((std::weak_ptr<FlightActivity> *const)(v1 + 64));
  std::shared_ptr<FlightActivity>::~shared_ptr((std::shared_ptr<FlightActivity> *const)(v1 + 32));
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

// Line 226: range 0000000015065F96-0000000015066DBD
__int64 __fastcall FlightActivity::restartChallengeByGroupId(FlightActivity *const this, uint32_t group_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rcx
  unsigned int v6; // r14d
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rcx
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  PlayerSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v16; // rcx
  uint32_t AvatarComp; // eax
  Group *v18; // rax
  __int64 v19; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  PlayerSceneComp *v21; // r14
  Scene *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rcx
  common::milog::MiLogStream *v30; // rcx
  __int64 result; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,FlightDailyRecordData*>,false> __y; // [rsp+18h] [rbp-188h] BYREF
  const GroupInfoScriptConfig *group_script_info_config_ptr; // [rsp+28h] [rbp-178h]
  ChallengeComp *challenge_comp; // [rsp+30h] [rbp-170h]
  FlightDailyRecordData *daily_data_ptr; // [rsp+38h] [rbp-168h]
  const Vector3 *rot; // [rsp+40h] [rbp-160h]
  const Vector3 *pos; // [rsp+48h] [rbp-158h]
  common::milog::MiLogStream v39; // [rsp+50h] [rbp-150h] BYREF
  TransferReason p_reason; // [rsp+70h] [rbp-130h] BYREF
  char v41[240]; // [rsp+B0h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v41;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 4 12 scene_id:246 48 4 12 group_id:225 64 8 8 iter:274 96 16 13 scene_ptr:232 128 16 13 gro"
                        "up_ptr:262 160 16 14 avatar_ptr:296";
  *(_QWORD *)(v2 + 16) = FlightActivity::restartChallengeByGroupId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -202178560;
  *(_DWORD *)(v2 + 48) = group_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 96));
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v39,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/flight_activity.cpp",
      "restartChallengeByGroupId",
      235);
    v5 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v39, (const char (*)[14])off_256EA6E0);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_9:
    operator<<(v5, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v39);
    v6 = 103;
    goto LABEL_62;
  }
  v7 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
  if ( !Scene::getScriptConfig(v7) )
  {
    common::milog::MiLogStream::create(
      &v39,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/flight_activity.cpp",
      "restartChallengeByGroupId",
      242);
    v8 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
           &v39,
           (const char (*)[22])"getScriptConfig fails");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v8, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v39);
    v6 = 5;
    goto LABEL_62;
  }
  v9 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
  *(_DWORD *)(v2 + 32) = Scene::getSceneId(v9);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 160));
  v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
  group_script_info_config_ptr = LuaConfigMgr::findGroupInfoConfig(
                                   &v10->design_config.lua_config_mgr,
                                   *(_DWORD *)(v2 + 48));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 160));
  if ( !group_script_info_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v39,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/flight_activity.cpp",
      "restartChallengeByGroupId",
      250);
    v11 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
            &v39,
            (const char (*)[41])"group script info config nullptr @group ");
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 48));
    v13 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v12, (const char (*)[9])" @scene ");
    v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 32));
    v5 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v14, (const char (*)[10])" player: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_9;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = Player::getSceneComp(this->player_);
  if ( PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    AvatarComp = (unsigned int)Player::getAvatarComp(this->player_);
    PlayerAvatarComp::queryActiveGroup((PlayerAvatarComp *const)(v2 + 128), AvatarComp);
    if ( std::operator!=<Group>(0LL, (const std::shared_ptr<Group> *)(v2 + 128)) )
    {
      v18 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
      challenge_comp = Group::getChallengeComp(v18);
      ChallengeComp::finishUnfinishedChallenges(challenge_comp, CLIENT, 0, PlayerLogBodyChallengeFinish_FinishType_STOP);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v39,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/flight_activity.cpp",
        "restartChallengeByGroupId",
        271);
      common::milog::MiLogStream::operator()(&v39, "group %u already unloaded.", *(unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v39);
    }
    *(std::unordered_map<unsigned int,FlightDailyRecordData*>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,FlightDailyRecordData *>::find(
                                                                                        &this->group_id_to_daily_data_map_,
                                                                                        (const std::unordered_map<unsigned int,FlightDailyRecordData*>::key_type *)(v2 + 48));
    __y._M_cur = std::unordered_map<unsigned int,FlightDailyRecordData *>::end(&this->group_id_to_daily_data_map_)._M_cur;
    if ( std::__detail::operator==<std::pair<unsigned int const,FlightDailyRecordData *>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,FlightDailyRecordData*>,false> *)(v2 + 64),
           &__y) )
    {
      common::milog::MiLogStream::create(
        &v39,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/flight_activity.cpp",
        "restartChallengeByGroupId",
        277);
      if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      common::milog::MiLogStream::operator()(
        &v39,
        "group_id=%u not find in activity=%u",
        *(unsigned int *)(v2 + 48),
        this->activity_id_);
      common::milog::MiLogStream::~MiLogStream(&v39);
    }
    else
    {
      v19 = (__int64)std::__detail::_Node_iterator<std::pair<unsigned int const,FlightDailyRecordData *>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,FlightDailyRecordData*>,false,false> *const)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)(v19 + 8) >> 3) + 0x7FFF8000) )
        v19 = __asan_report_load8();
      daily_data_ptr = *(FlightDailyRecordData **)(v19 + 8);
      if ( daily_data_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&daily_data_ptr->gather_points >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)daily_data_ptr + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&daily_data_ptr->gather_points >> 3)
                                                                        + 0x7FFF8000) )
        {
          __asan_report_store4(&daily_data_ptr->gather_points);
        }
        daily_data_ptr->gather_points = 0;
        if ( *(_BYTE *)(((unsigned __int64)&daily_data_ptr->gather_limit >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)daily_data_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&daily_data_ptr->gather_limit >> 3)
                                                                        + 0x7FFF8000) )
        {
          __asan_report_store4(&daily_data_ptr->gather_limit);
        }
        daily_data_ptr->gather_limit = 0;
        if ( *(_BYTE *)(((unsigned __int64)&daily_data_ptr->left_time_seconds >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)daily_data_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&daily_data_ptr->left_time_seconds >> 3)
                                                                        + 0x7FFF8000) )
        {
          __asan_report_store4(&daily_data_ptr->left_time_seconds);
        }
        daily_data_ptr->left_time_seconds = 0;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v39,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/flight_activity.cpp",
          "restartChallengeByGroupId",
          284);
        if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        common::milog::MiLogStream::operator()(
          &v39,
          "group_id=%u daily data nullptr @ activity=%u",
          *(unsigned int *)(v2 + 48),
          this->activity_id_);
        common::milog::MiLogStream::~MiLogStream(&v39);
      }
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getAvatarComp(this->player_);
    PlayerAvatarComp::getCurAvatar((const PlayerAvatarComp *const)(v2 + 160));
    if ( std::operator!=<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v2 + 160)) )
    {
      v20 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
      rot = Avatar::getLastValidRot(v20);
      pos = &group_script_info_config_ptr->pos;
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v21 = Player::getSceneComp(this->player_);
      TransferReason::TransferReason(&p_reason, ENTER_REASON_LUA);
      v22 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      LOBYTE(v21) = PlayerSceneComp::jumpToScene(v21, v22, pos, rot, 0, &p_reason) == 0;
      TransferReason::~TransferReason(&p_reason);
      if ( (_BYTE)v21 )
      {
        common::milog::MiLogStream::create(
          &v39,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/flight_activity.cpp",
          "restartChallengeByGroupId",
          303);
        v23 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                &v39,
                (const char (*)[26])" move player to scene_id:");
        v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v23,
                (const unsigned int *)(v2 + 32));
        v25 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v24, (const char (*)[6])" pos:");
        v26 = operator<<(v25, pos);
        v27 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v26, (const char (*)[6])" rot:");
        v28 = operator<<(v27, rot);
        v29 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v28, (const char (*)[10])" player: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        operator<<(v29, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v39);
        v6 = 0;
        goto LABEL_61;
      }
      common::milog::MiLogStream::create(
        &v39,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/flight_activity.cpp",
        "restartChallengeByGroupId",
        307);
      v30 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v39, (const char (*)[21])off_256EAA40);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
    }
    else
    {
      common::milog::MiLogStream::create(
        &v39,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/flight_activity.cpp",
        "restartChallengeByGroupId",
        313);
      v30 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v39, (const char (*)[21])off_256EAA40);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
    }
    operator<<(v30, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v39);
    v6 = 103;
LABEL_61:
    std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 160));
    std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v2 + 128));
    goto LABEL_62;
  }
  common::milog::MiLogStream::create(
    &v39,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/flight_activity.cpp",
    "restartChallengeByGroupId",
    258);
  v16 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v39, (const char (*)[19])off_256EA840);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  operator<<(v16, this->player_);
  common::milog::MiLogStream::~MiLogStream(&v39);
  v6 = 512;
LABEL_62:
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 96));
  result = v6;
  if ( v41 == (char *)v2 )
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

// Line 321: range 0000000015066DBE-0000000015067087
bool __cdecl FlightActivity::isDailyChallengeBeginByGroupId(const FlightActivity *const this, uint32_t group_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
  ActivityFlightExcelConfigMgr *p_activity_flight_config_mgr; // rcx
  unsigned int *v7; // rdx
  time_t Now; // r13
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  bool v10; // r13
  uint32_t day_id; // [rsp+1Ch] [rbp-74h]
  std::shared_ptr<Config> v12; // [rsp+20h] [rbp-70h] BYREF
  char v13[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 14 day_id_opt:327";
  *(_QWORD *)(v2 + 16) = FlightActivity::isDailyChallengeBeginByGroupId;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  if ( !BaseActivity::isOpening(this, 0) )
  {
    result = 0;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v12);
    p_activity_flight_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v12)->design_config.txt_config_mgr.activity_flight_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    *(std::optional<unsigned int> *)(v2 + 32) = ActivityFlightExcelConfigMgr::queryDayIdByGroupId(
                                                  p_activity_flight_config_mgr,
                                                  this->activity_id_,
                                                  group_id);
    std::shared_ptr<Config>::~shared_ptr(&v12);
    if ( !std::optional<unsigned int>::has_value((const std::optional<unsigned int> *const)(v2 + 32)) )
      goto LABEL_15;
    v7 = std::optional<unsigned int>::value((std::optional<unsigned int> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    day_id = *v7;
    Now = common::tools::TimeUtils::getNow();
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v12);
    p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v12)->design_config.txt_config_mgr.new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v10 = Now >= NewActivityExcelConfigMgr::getScheduleBeginTime(p_new_activity_config_mgr, this->schedule_id_)
               + 86400LL * day_id;
    std::shared_ptr<Config>::~shared_ptr(&v12);
    if ( v10 )
      result = 1;
    else
LABEL_15:
      result = 0;
  }
  if ( v13 == (char *)v2 )
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

// Line 341: range 0000000015067088-00000000150680FB
void __cdecl FlightActivity::onMarkedChallengeEvent(FlightActivity *const this, const LuaMarkedChallengeEvent *event)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 activity_id; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  uint32_t value; // ecx
  uint32_t v9; // esi
  __int64 group_id; // rcx
  const ActivityFlightExcelConfigMgr *p_activity_flight_config_mgr; // rdi
  uint32_t v12; // edx
  __int64 v13; // rcx
  uint32_t v14; // ecx
  uint32_t v15; // ecx
  int v16; // r14d
  PlayerEventComp *EventComp; // r14
  uint32_t gather_points; // r8d
  uint32_t v19; // ecx
  int v20; // edi
  uint32_t reason; // r8d
  uint32_t v22; // ecx
  int v23; // edi
  uint32_t v24; // ecx
  uint32_t limit; // ecx
  uint32_t v26; // edi
  uint32_t v27; // esi
  __int64 v28; // rcx
  bool has; // [rsp+1Fh] [rbp-111h]
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,FlightDailyRecordData*>,false> __y; // [rsp+20h] [rbp-110h] BYREF
  FlightDailyRecordData *daily_data_ptr; // [rsp+28h] [rbp-108h]
  std::shared_ptr<Config> v34; // [rsp+30h] [rbp-100h] BYREF
  common::milog::MiLogStream v35; // [rsp+40h] [rbp-F0h] BYREF
  char v36[208]; // [rsp+60h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 4 15 time_factor:364 64 4 15 gold_factor:365 80 4 17 result_points:372 96 8 8 iter:342 128 "
                        "16 13 event_ptr:377";
  *(_QWORD *)(v2 + 16) = FlightActivity::onMarkedChallengeEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234556924;
  v4[536862723] = -218959360;
  v4[536862724] = -202178560;
  *(std::unordered_map<unsigned int,FlightDailyRecordData*>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,FlightDailyRecordData *>::find(
                                                                                      &this->group_id_to_daily_data_map_,
                                                                                      &event->group_id);
  __y._M_cur = std::unordered_map<unsigned int,FlightDailyRecordData *>::end(&this->group_id_to_daily_data_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,FlightDailyRecordData *>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,FlightDailyRecordData*>,false> *)(v2 + 96),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v35,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/flight_activity.cpp",
      "onMarkedChallengeEvent",
      345);
    if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    activity_id = this->activity_id_;
    if ( *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    common::milog::MiLogStream::operator()(&v35, "group_id=%u not find in activity=%u", event->group_id, activity_id);
    common::milog::MiLogStream::~MiLogStream(&v35);
    goto LABEL_91;
  }
  v6 = (__int64)std::__detail::_Node_iterator<std::pair<unsigned int const,FlightDailyRecordData *>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,FlightDailyRecordData*>,false,false> *const)(v2 + 96));
  if ( *(_BYTE *)(((unsigned __int64)(v6 + 8) >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8();
  daily_data_ptr = *(FlightDailyRecordData **)(v6 + 8);
  if ( !daily_data_ptr )
  {
    common::milog::MiLogStream::create(
      &v35,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/flight_activity.cpp",
      "onMarkedChallengeEvent",
      352);
    if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    v7 = this->activity_id_;
    if ( *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    common::milog::MiLogStream::operator()(&v35, "group_id=%u daily data nullptr @ activity=%u", event->group_id, v7);
    common::milog::MiLogStream::~MiLogStream(&v35);
    goto LABEL_91;
  }
  if ( *(_BYTE *)(((unsigned __int64)&event->event_mark >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->event_mark >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( event->event_mark == FLIGHT_TIME )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->is_success >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)event + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&event->is_success >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&event->is_success);
    }
    if ( !event->is_success )
      goto LABEL_58;
    if ( *(_BYTE *)(((unsigned __int64)daily_data_ptr >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)daily_data_ptr & 7) >= *(_BYTE *)(((unsigned __int64)daily_data_ptr >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(daily_data_ptr);
    }
    daily_data_ptr->is_touched = 1;
    if ( *(_BYTE *)(((unsigned __int64)&event->value >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->value >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    value = event->value;
    if ( *(_BYTE *)(((unsigned __int64)&daily_data_ptr->left_time_seconds >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)daily_data_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&daily_data_ptr->left_time_seconds >> 3)
                                                                    + 0x7FFF8000) )
    {
      __asan_report_store4(&daily_data_ptr->left_time_seconds);
    }
    daily_data_ptr->left_time_seconds = value;
    common::milog::MiLogStream::create(
      &v35,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/flight_activity.cpp",
      "onMarkedChallengeEvent",
      362);
    v9 = event->value;
    if ( *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    group_id = event->group_id;
    if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    common::milog::MiLogStream::operator()(
      &v35,
      "flight activity=%u, group=%u, left_time=%u.",
      this->activity_id_,
      group_id,
      v9);
    common::milog::MiLogStream::~MiLogStream(&v35);
    *(_DWORD *)(v2 + 48) = 0;
    *(_DWORD *)(v2 + 64) = 0;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v34);
    p_activity_flight_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v34)->design_config.txt_config_mgr.activity_flight_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) <= 3 )
    {
      p_activity_flight_config_mgr = (const ActivityFlightExcelConfigMgr *)&event->group_id;
      __asan_report_load4();
    }
    v12 = event->group_id;
    if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      p_activity_flight_config_mgr = (const ActivityFlightExcelConfigMgr *)&this->activity_id_;
      __asan_report_load4();
    }
    has = ActivityFlightExcelConfigMgr::queryDailyPointFactorByGroupId(
            p_activity_flight_config_mgr,
            this->activity_id_,
            v12,
            (uint32_t *)(v2 + 48),
            (uint32_t *)(v2 + 64));
    std::shared_ptr<Config>::~shared_ptr(&v34);
    if ( !has )
    {
      common::milog::MiLogStream::create(
        &v35,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/flight_activity.cpp",
        "onMarkedChallengeEvent",
        369);
      if ( *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      v13 = event->group_id;
      if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      common::milog::MiLogStream::operator()(
        &v35,
        "point factor config not found for activit_id=%u @group=%u",
        this->activity_id_,
        v13);
      common::milog::MiLogStream::~MiLogStream(&v35);
      goto LABEL_91;
    }
    if ( *(_BYTE *)(((unsigned __int64)&event->value >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->value >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    v14 = *(_DWORD *)(v2 + 48) * event->value;
    if ( *(_BYTE *)(((unsigned __int64)&daily_data_ptr->gather_points >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)daily_data_ptr + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&daily_data_ptr->gather_points >> 3)
                                                                    + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 80) = v14 + daily_data_ptr->gather_points * *(_DWORD *)(v2 + 64);
    common::milog::MiLogStream::create(
      &v35,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/flight_activity.cpp",
      "onMarkedChallengeEvent",
      373);
    if ( *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    common::milog::MiLogStream::operator()(
      &v35,
      "left_time=%u time_factor=%u got_badge=%u badge_factor=%u => result=%u @group=%u",
      event->value,
      *(unsigned int *)(v2 + 48),
      daily_data_ptr->gather_points,
      *(unsigned int *)(v2 + 64),
      *(unsigned int *)(v2 + 80),
      event->group_id);
    common::milog::MiLogStream::~MiLogStream(&v35);
    v15 = *(_DWORD *)(v2 + 80);
    if ( *(_BYTE *)(((unsigned __int64)&daily_data_ptr->new_score >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)daily_data_ptr + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&daily_data_ptr->new_score >> 3)
                                                                    + 0x7FFF8000) )
    {
      __asan_report_store4(&daily_data_ptr->new_score);
    }
    daily_data_ptr->new_score = v15;
    common::tools::perf::make_shared<GroupFlightChallengeReachPointsEvent,unsigned int const&,unsigned int &>(
      (const unsigned int *)(v2 + 128),
      &event->group_id,
      (const unsigned int *)(v2 + 80),
      &event->group_id);
    if ( std::operator==<GroupFlightChallengeReachPointsEvent>(
           0LL,
           (const std::shared_ptr<GroupFlightChallengeReachPointsEvent> *)(v2 + 128)) )
    {
      common::milog::MiLogStream::create(
        &v35,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/flight_activity.cpp",
        "onMarkedChallengeEvent",
        380);
      common::milog::MiLogStream::operator()(&v35, "make GroupFlightChallengeReachPointsEvent shared ptr failed");
      common::milog::MiLogStream::~MiLogStream(&v35);
      v16 = 0;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      EventComp = Player::getEventComp(this->player_);
      std::shared_ptr<BaseEvent>::shared_ptr<GroupFlightChallengeReachPointsEvent,void>(
        (std::shared_ptr<BaseEvent> *const)&v34,
        (const std::shared_ptr<GroupFlightChallengeReachPointsEvent> *)(v2 + 128));
      PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v34);
      std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v34);
      v16 = 1;
    }
    std::shared_ptr<GroupFlightChallengeReachPointsEvent>::~shared_ptr((std::shared_ptr<GroupFlightChallengeReachPointsEvent> *const)(v2 + 128));
    if ( v16 == 1 )
    {
LABEL_58:
      if ( *(_BYTE *)(((unsigned __int64)&daily_data_ptr->gather_points >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)daily_data_ptr + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&daily_data_ptr->gather_points >> 3)
                                                                      + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      gather_points = daily_data_ptr->gather_points;
      if ( *(_BYTE *)(((unsigned __int64)&event->value >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&event->value >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      v19 = event->value;
      if ( *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      v20 = event->group_id;
      if ( *(_BYTE *)(((unsigned __int64)&event->is_success >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)event + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&event->is_success >> 3) + 0x7FFF8000) )
      {
        v20 = (_DWORD)event + 36;
        __asan_report_load1(&event->is_success);
      }
      FlightActivity::notifyFlightChallengeSettle(this, event->is_success, v20, v19, gather_points);
      BaseActivity::notifyClientData(this, 0);
      if ( *(_BYTE *)(((unsigned __int64)&event->reason >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&event->reason >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      reason = event->reason;
      if ( *(_BYTE *)(((unsigned __int64)&event->value >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&event->value >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      v22 = event->value;
      if ( *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      v23 = event->group_id;
      if ( *(_BYTE *)(((unsigned __int64)&event->is_success >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)event + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&event->is_success >> 3) + 0x7FFF8000) )
      {
        v23 = (_DWORD)event + 36;
        __asan_report_load1(&event->is_success);
      }
      FlightActivity::writeSettleStatLog(this, event->is_success, v23, v22, daily_data_ptr, reason);
    }
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->event_mark >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->event_mark >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( event->event_mark == FLIGHT_GATHER_POINT )
    {
      if ( *(_BYTE *)(((unsigned __int64)&event->value >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&event->value >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      v24 = event->value;
      if ( *(_BYTE *)(((unsigned __int64)&daily_data_ptr->gather_points >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)daily_data_ptr + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&daily_data_ptr->gather_points >> 3)
                                                                      + 0x7FFF8000) )
      {
        __asan_report_store4(&daily_data_ptr->gather_points);
      }
      daily_data_ptr->gather_points = v24;
      if ( *(_BYTE *)(((unsigned __int64)&event->limit >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)event + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->limit >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      limit = event->limit;
      if ( *(_BYTE *)(((unsigned __int64)&daily_data_ptr->gather_limit >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)daily_data_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&daily_data_ptr->gather_limit >> 3)
                                                                      + 0x7FFF8000) )
      {
        __asan_report_store4(&daily_data_ptr->gather_limit);
      }
      daily_data_ptr->gather_limit = limit;
      common::milog::MiLogStream::create(
        &v35,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/flight_activity.cpp",
        "onMarkedChallengeEvent",
        396);
      v26 = event->limit;
      v27 = event->value;
      if ( *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) <= 3 )
      {
        v26 = (_DWORD)event + 24;
        __asan_report_load4();
      }
      v28 = event->group_id;
      if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        v26 = (_DWORD)this + 32;
        __asan_report_load4();
      }
      common::milog::MiLogStream::operator()(
        &v35,
        "flight activity=%u, group=%u, gathered points=%u / limit=%u.",
        this->activity_id_,
        v28,
        v27,
        v26);
      common::milog::MiLogStream::~MiLogStream(&v35);
    }
  }
LABEL_91:
  if ( v36 == (char *)v2 )
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

// Line 401: range 00000000150680FC-0000000015068D0D
void __fastcall FlightActivity::notifyFlightChallengeSettle(
        FlightActivity *const this,
        bool is_success,
        uint32_t group_id,
        uint32_t left_time,
        uint32_t gather_points)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  __int64 v8; // rax
  uint32_t best_score; // ecx
  ActivityFlightExcelConfigMgr *p_activity_flight_config_mgr; // rsi
  uint32_t day_id; // ecx
  std::vector<unsigned int>::const_reference v12; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  __int64 progress; // rcx
  uint32_t new_score; // ecx
  common::milog::MiLogStream *v16; // r14
  int32_t i; // [rsp+28h] [rbp-198h]
  unsigned int watcher_id; // [rsp+2Ch] [rbp-194h]
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,FlightDailyRecordData*>,false> __y; // [rsp+30h] [rbp-190h] BYREF
  FlightDailyRecordData *daily_data_ptr; // [rsp+38h] [rbp-188h]
  FlightDailyRecordData *daily_record; // [rsp+40h] [rbp-180h]
  PlayerWatcherComp *watcher_comp; // [rsp+48h] [rbp-178h]
  const std::vector<unsigned int> *watcher_vec; // [rsp+50h] [rbp-170h]
  const data::WatcherConfig *watcher_config_ptr; // [rsp+58h] [rbp-168h]
  std::shared_ptr<Config> v28; // [rsp+60h] [rbp-160h] BYREF
  common::milog::MiLogStream v29; // [rsp+70h] [rbp-150h] BYREF
  common::milog::MiLogStream v30; // [rsp+90h] [rbp-130h] BYREF
  char v31[272]; // [rsp+B0h] [rbp-110h] BYREF

  v5 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(224LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 32 4 12 group_id:400 48 8 8 iter:402 80 32 19 watcher_vec_opt:430 144 48 10 notify:417";
  *(_QWORD *)(v5 + 16) = FlightActivity::notifyFlightChallengeSettle;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = 61956;
  v7[536862721] = -234881024;
  v7[536862722] = 62194;
  v7[536862723] = -219021312;
  v7[536862724] = 62194;
  v7[536862726] = -202116109;
  *(_DWORD *)(v5 + 32) = group_id;
  *(std::unordered_map<unsigned int,FlightDailyRecordData*>::iterator *)(v5 + 48) = std::unordered_map<unsigned int,FlightDailyRecordData *>::find(
                                                                                      &this->group_id_to_daily_data_map_,
                                                                                      (const std::unordered_map<unsigned int,FlightDailyRecordData*>::key_type *)(v5 + 32));
  __y._M_cur = std::unordered_map<unsigned int,FlightDailyRecordData *>::end(&this->group_id_to_daily_data_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,FlightDailyRecordData *>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,FlightDailyRecordData*>,false> *)(v5 + 48),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/flight_activity.cpp",
      "notifyFlightChallengeSettle",
      405);
    if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    common::milog::MiLogStream::operator()(
      &v30,
      "group_id=%u not find in activity=%u",
      *(unsigned int *)(v5 + 32),
      this->activity_id_);
    common::milog::MiLogStream::~MiLogStream(&v30);
  }
  else
  {
    v8 = (__int64)std::__detail::_Node_iterator<std::pair<unsigned int const,FlightDailyRecordData *>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,FlightDailyRecordData*>,false,false> *const)(v5 + 48));
    if ( *(_BYTE *)(((unsigned __int64)(v8 + 8) >> 3) + 0x7FFF8000) )
      v8 = __asan_report_load8();
    daily_data_ptr = *(FlightDailyRecordData **)(v8 + 8);
    if ( daily_data_ptr )
    {
      daily_record = daily_data_ptr;
      proto::FlightActivitySettleNotify::FlightActivitySettleNotify((proto::FlightActivitySettleNotify *const)(v5 + 144));
      proto::FlightActivitySettleNotify::set_is_success(
        (proto::FlightActivitySettleNotify *const)(v5 + 144),
        is_success);
      proto::FlightActivitySettleNotify::set_group_id(
        (proto::FlightActivitySettleNotify *const)(v5 + 144),
        *(_DWORD *)(v5 + 32));
      proto::FlightActivitySettleNotify::set_left_time((proto::FlightActivitySettleNotify *const)(v5 + 144), left_time);
      proto::FlightActivitySettleNotify::set_collect_num(
        (proto::FlightActivitySettleNotify *const)(v5 + 144),
        gather_points);
      if ( *(_BYTE *)(((unsigned __int64)&daily_record->gather_limit >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)daily_record + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&daily_record->gather_limit >> 3)
                                                                    + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::FlightActivitySettleNotify::set_total_num(
        (proto::FlightActivitySettleNotify *const)(v5 + 144),
        daily_record->gather_limit);
      if ( *(_BYTE *)(((unsigned __int64)&daily_record->best_score >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)daily_record + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&daily_record->best_score >> 3)
                                                                   + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      best_score = daily_record->best_score;
      if ( *(_BYTE *)(((unsigned __int64)&daily_record->new_score >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)daily_record + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&daily_record->new_score >> 3)
                                                                    + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( best_score < daily_record->new_score )
      {
        daily_record->best_score = daily_record->new_score;
        proto::FlightActivitySettleNotify::set_is_new_record((proto::FlightActivitySettleNotify *const)(v5 + 144), 1);
      }
      if ( *(_BYTE *)(((unsigned __int64)&daily_record->new_score >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)daily_record + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&daily_record->new_score >> 3)
                                                                    + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::FlightActivitySettleNotify::set_score(
        (proto::FlightActivitySettleNotify *const)(v5 + 144),
        daily_record->new_score);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v28);
      p_activity_flight_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v28)->design_config.txt_config_mgr.activity_flight_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&daily_record->day_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)daily_record + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&daily_record->day_id >> 3)
                                                                    + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      day_id = daily_record->day_id;
      if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      ActivityFlightExcelConfigMgr::findDailyWatcherVec(
        (std::optional<std::vector<unsigned int> > *)(v5 + 80),
        p_activity_flight_config_mgr,
        this->activity_id_,
        day_id);
      std::shared_ptr<Config>::~shared_ptr(&v28);
      if ( std::optional<std::vector<unsigned int>>::has_value((const std::optional<std::vector<unsigned int> > *const)(v5 + 80)) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        watcher_comp = Player::getWatcherComp(this->player_);
        watcher_vec = std::optional<std::vector<unsigned int>>::value((std::optional<std::vector<unsigned int> > *const)(v5 + 80));
        for ( i = std::vector<unsigned int>::size(watcher_vec) - 1; i >= 0; --i )
        {
          v12 = std::vector<unsigned int>::operator[](watcher_vec, i);
          if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          watcher_id = *v12;
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v28);
          v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v28);
          watcher_config_ptr = WatcherExcelConfigMgr::findWatcherConfig(
                                 &v13->design_config.txt_config_mgr.watcher_config_mgr,
                                 watcher_id);
          std::shared_ptr<Config>::~shared_ptr(&v28);
          if ( watcher_config_ptr )
          {
            common::milog::MiLogStream::create(
              &v30,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/activity/flight_activity.cpp",
              "notifyFlightChallengeSettle",
              446);
            if ( *(_BYTE *)(((unsigned __int64)&watcher_config_ptr->progress >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&watcher_config_ptr->progress >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            progress = watcher_config_ptr->progress;
            if ( *(_BYTE *)(((unsigned __int64)&daily_record->new_score >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)daily_record + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&daily_record->new_score >> 3)
                                                                          + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            common::milog::MiLogStream::operator()(
              &v30,
              off_256EAE40,
              daily_record->new_score,
              progress,
              watcher_id,
              (unsigned int)i);
            common::milog::MiLogStream::~MiLogStream(&v30);
            if ( *(_BYTE *)(((unsigned __int64)&daily_record->new_score >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)daily_record + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&daily_record->new_score >> 3)
                                                                          + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            new_score = daily_record->new_score;
            if ( *(_BYTE *)(((unsigned __int64)&watcher_config_ptr->progress >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&watcher_config_ptr->progress >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            if ( new_score >= watcher_config_ptr->progress )
            {
              proto::FlightActivitySettleNotify::set_medal_level(
                (proto::FlightActivitySettleNotify *const)(v5 + 144),
                i + 1);
              break;
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v30,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/activity/flight_activity.cpp",
              "notifyFlightChallengeSettle",
              443);
            common::milog::MiLogStream::operator()(&v30, "config for watcher %u not found", watcher_id);
            common::milog::MiLogStream::~MiLogStream(&v30);
          }
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v30,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/flight_activity.cpp",
          "notifyFlightChallengeSettle",
          456);
        if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        common::milog::MiLogStream::operator()(&v30, "watcher vec null opt @ activity=%u", this->activity_id_);
        common::milog::MiLogStream::~MiLogStream(&v30);
      }
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/flight_activity.cpp",
        "notifyFlightChallengeSettle",
        459);
      v16 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v29, (const char (*)[13])"settle msg: ");
      google::protobuf::Message::ShortDebugString[abi:cxx11](
        (std::string *)&v30,
        (google::protobuf::Message *)(v5 + 144));
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v16, (const std::string *)&v30);
      std::string::~string(&v30);
      common::milog::MiLogStream::~MiLogStream(&v29);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::sendProto(this->player_, (const google::protobuf::Message *)(v5 + 144));
      std::optional<std::vector<unsigned int>>::~optional((std::optional<std::vector<unsigned int> > *const)(v5 + 80));
      proto::FlightActivitySettleNotify::~FlightActivitySettleNotify((proto::FlightActivitySettleNotify *const)(v5 + 144));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v30,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/flight_activity.cpp",
        "notifyFlightChallengeSettle",
        412);
      if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      common::milog::MiLogStream::operator()(
        &v30,
        "group_id=%u daily data nullptr @ activity=%u",
        *(unsigned int *)(v5 + 32),
        this->activity_id_);
      common::milog::MiLogStream::~MiLogStream(&v30);
    }
  }
  if ( v31 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8018) = -168430091;
  }
};

// Line 465: range 0000000015068D0E-0000000015069426
// local variable allocation has failed, the output may be wrong!
void __cdecl FlightActivity::onChallengeBeginEvent(FlightActivity *const this, const ChallengeBeginEvent *event)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // ecx
  __int64 v6; // rax
  PlayerBasicComp *BasicComp; // rax
  PlayerBasicComp *v8; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyFlightActivityDailyChallengeBegin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyFlightActivityDailyChallengeBegin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyFlightActivityDailyChallengeBegin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyFlightActivityDailyChallengeBegin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyFlightActivityDailyChallengeBegin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  Player *v14; // r14
  std::string eventa; // [rsp+0h] [rbp-130h] OVERLAPPED BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-110h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+30h] [rbp-100h] BYREF
  std::string __lhs; // [rsp+40h] [rbp-F0h] BYREF
  common::milog::MiLogStream v19; // [rsp+60h] [rbp-D0h] BYREF
  char v20[176]; // [rsp+80h] [rbp-B0h] BYREF

  eventa._M_string_length = (std::string::size_type)this;
  eventa._M_dataplus._M_p = (std::string::pointer)event;
  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 1 22 log_context_holder:487 64 8 8 iter:473 96 16 11 log_ptr:488";
  *(_QWORD *)(v2 + 16) = FlightActivity::onChallengeBeginEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -218959360;
  v4[536862723] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)(eventa._M_dataplus._M_p + 32) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)(eventa._M_dataplus._M_p + 32) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  v5 = *((_DWORD *)eventa._M_dataplus._M_p + 8);
  if ( *(_BYTE *)(((unsigned __int64)(eventa._M_dataplus._M_p + 24) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)(eventa._M_dataplus._M_p + 24) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( v5 == *((_DWORD *)eventa._M_dataplus._M_p + 6) )
  {
    *(std::unordered_map<unsigned int,FlightDailyRecordData*>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,FlightDailyRecordData *>::find(
                                                                                        (std::unordered_map<unsigned int,FlightDailyRecordData*> *const)(eventa._M_string_length + 960),
                                                                                        (const std::unordered_map<unsigned int,FlightDailyRecordData*>::key_type *)eventa._M_dataplus._M_p
                                                                                      + 9);
    *(std::unordered_map<unsigned int,FlightDailyRecordData*>::iterator *)eventa._anon_0._M_local_buf = std::unordered_map<unsigned int,FlightDailyRecordData *>::end((std::unordered_map<unsigned int,FlightDailyRecordData*> *const)(eventa._M_string_length + 960));
    if ( !std::__detail::operator==<std::pair<unsigned int const,FlightDailyRecordData *>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,FlightDailyRecordData*>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,FlightDailyRecordData*>,false> *)&eventa._anon_0) )
    {
      v6 = (__int64)std::__detail::_Node_iterator<std::pair<unsigned int const,FlightDailyRecordData *>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,FlightDailyRecordData*>,false,false> *const)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)(v6 + 8) >> 3) + 0x7FFF8000) )
        v6 = __asan_report_load8();
      *(&eventa._anon_0._M_allocated_capacity + 1) = *(_QWORD *)(v6 + 8);
      if ( *(&eventa._anon_0._M_allocated_capacity + 1) )
      {
        if ( *(_BYTE *)(((eventa._M_string_length + 24) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        BasicComp = Player::getBasicComp(*(Player *const *)(eventa._M_string_length + 24));
        PlayerBasicComp::getNextTransNo[abi:cxx11](&__lhs, BasicComp);
        std::operator+<char>((std::string *)&v19, &__lhs, "_FlightActivityDailyChallenge");
        std::string::operator=(eventa._M_string_length + 1016, &v19);
        std::string::~string(&v19);
        std::string::~string(&__lhs);
        if ( *(_BYTE *)(((eventa._M_string_length + 24) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v8 = Player::getBasicComp(*(Player *const *)(eventa._M_string_length + 24));
        PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v19, v8);
        StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 0xBCCu, eventa);
        std::string::~string(&v19);
        common::tools::perf::make_shared<proto_log::PlayerLogBodyFlightActivityDailyChallengeBegin>();
        v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyFlightActivityDailyChallengeBegin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFlightActivityDailyChallengeBegin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        if ( *(_BYTE *)(((eventa._M_string_length + 32) >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((eventa._M_string_length + 32) >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        proto_log::PlayerLogBodyFlightActivityDailyChallengeBegin::set_activity_id(
          v9,
          *(_DWORD *)(eventa._M_string_length + 32));
        v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyFlightActivityDailyChallengeBegin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFlightActivityDailyChallengeBegin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        if ( *(_BYTE *)(((eventa._M_string_length + 36) >> 3) + 0x7FFF8000) != 0
          && (char)(((LOBYTE(eventa._M_string_length) + 36) & 7) + 3) >= *(_BYTE *)(((eventa._M_string_length + 36) >> 3)
                                                                                  + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto_log::PlayerLogBodyFlightActivityDailyChallengeBegin::set_schedule_id(
          v10,
          *(_DWORD *)(eventa._M_string_length + 36));
        v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyFlightActivityDailyChallengeBegin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFlightActivityDailyChallengeBegin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        if ( *(_BYTE *)(((unsigned __int64)(eventa._M_dataplus._M_p + 36) >> 3) + 0x7FFF8000) != 0
          && (char)(((LOBYTE(eventa._M_dataplus._M_p) + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(eventa._M_dataplus._M_p + 36) >> 3)
                                                                                  + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto_log::PlayerLogBodyFlightActivityDailyChallengeBegin::set_group_id(
          v11,
          *((_DWORD *)eventa._M_dataplus._M_p + 9));
        v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyFlightActivityDailyChallengeBegin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFlightActivityDailyChallengeBegin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        if ( *(_BYTE *)(((*(&eventa._anon_0._M_allocated_capacity + 1) + 28) >> 3) + 0x7FFF8000) != 0
          && (char)(((eventa._anon_0._M_local_buf[8] + 28) & 7) + 3) >= *(_BYTE *)(((*(&eventa._anon_0._M_allocated_capacity
                                                                                     + 1)
                                                                                   + 28) >> 3)
                                                                                 + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto_log::PlayerLogBodyFlightActivityDailyChallengeBegin::set_day_id(
          v12,
          *(_DWORD *)(*(&eventa._anon_0._M_allocated_capacity + 1) + 28));
        v13 = std::__shared_ptr_access<proto_log::PlayerLogBodyFlightActivityDailyChallengeBegin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFlightActivityDailyChallengeBegin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        proto_log::PlayerLogBodyFlightActivityDailyChallengeBegin::set_transaction_no(
          v13,
          (const std::string *)(eventa._M_string_length + 1016));
        if ( *(_BYTE *)(((eventa._M_string_length + 24) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v14 = *(Player **)(eventa._M_string_length + 24);
        std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
        std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyFlightActivityDailyChallengeBegin,void>(
          &p_body_ptr,
          (const std::shared_ptr<proto_log::PlayerLogBodyFlightActivityDailyChallengeBegin> *)(v2 + 96));
        Player::printStatLog(v14, &p_body_ptr, &p_body_ext_ptr, 0xEu);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
        std::shared_ptr<proto_log::PlayerLogBodyFlightActivityDailyChallengeBegin>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyFlightActivityDailyChallengeBegin> *const)(v2 + 96));
        StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v19,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/flight_activity.cpp",
          "onChallengeBeginEvent",
          481);
        if ( *(_BYTE *)(((unsigned __int64)(eventa._M_dataplus._M_p + 36) >> 3) + 0x7FFF8000) != 0
          && (char)(((LOBYTE(eventa._M_dataplus._M_p) + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(eventa._M_dataplus._M_p + 36) >> 3)
                                                                                  + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        common::milog::MiLogStream::operator()(
          &v19,
          "group=%u daily data nullptr",
          *((unsigned int *)eventa._M_dataplus._M_p + 9));
        common::milog::MiLogStream::~MiLogStream(&v19);
      }
    }
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

// Line 498: range 0000000015069428-0000000015069975
void __cdecl FlightActivity::writeSettleStatLog(
        const FlightActivity *const this,
        bool is_success,
        uint32_t group_id,
        uint32_t left_time,
        const FlightDailyRecordData *daily_data,
        uint32_t reason)
{
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  _DWORD *v8; // r13
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyFlightActivityDailyChallengeSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyFlightActivityDailyChallengeSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyFlightActivityDailyChallengeSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyFlightActivityDailyChallengeSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rcx
  int v14; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyFlightActivityDailyChallengeSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyFlightActivityDailyChallengeSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyFlightActivityDailyChallengeSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyFlightActivityDailyChallengeSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyFlightActivityDailyChallengeSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  Player *player; // r14
  std::string daily_dataa; // [rsp+0h] [rbp-100h]
  const FlightDailyRecordData *daily_datab; // [rsp+0h] [rbp-100h]
  uint32_t reasona; // [rsp+8h] [rbp-F8h]
  uint32_t left_timea; // [rsp+Ch] [rbp-F4h]
  uint32_t group_ida; // [rsp+10h] [rbp-F0h]
  bool is_successa; // [rsp+14h] [rbp-ECh]
  const FlightActivity *thisa; // [rsp+18h] [rbp-E8h]
  uint32_t result_type; // [rsp+2Ch] [rbp-D4h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+30h] [rbp-D0h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+40h] [rbp-C0h] BYREF
  std::string v31; // [rsp+50h] [rbp-B0h] BYREF
  char v32[144]; // [rsp+70h] [rbp-90h] BYREF

  *(&daily_dataa._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  *(_DWORD *)daily_dataa._anon_0._M_local_buf = group_id;
  HIDWORD(daily_dataa._M_string_length) = left_time;
  daily_dataa._M_dataplus._M_p = (std::string::pointer)&daily_data->is_touched;
  LODWORD(daily_dataa._M_string_length) = reason;
  daily_dataa._anon_0._M_local_buf[4] = is_success;
  v6 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(96LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "2 48 1 22 log_context_holder:499 64 16 11 log_ptr:500";
  *(_QWORD *)(v6 + 16) = FlightActivity::writeSettleStatLog;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234753551;
  v8[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Player::getBasicComp(this->player_);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v31, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v6 + 48), 0xBCDu, daily_dataa);
  std::string::~string(&v31);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyFlightActivityDailyChallengeSettle>();
  v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyFlightActivityDailyChallengeSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFlightActivityDailyChallengeSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&thisa->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&thisa->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto_log::PlayerLogBodyFlightActivityDailyChallengeSettle::set_activity_id(v10, thisa->activity_id_);
  v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyFlightActivityDailyChallengeSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFlightActivityDailyChallengeSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&thisa->schedule_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)thisa + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->schedule_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto_log::PlayerLogBodyFlightActivityDailyChallengeSettle::set_schedule_id(v11, thisa->schedule_id_);
  v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyFlightActivityDailyChallengeSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFlightActivityDailyChallengeSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 64));
  proto_log::PlayerLogBodyFlightActivityDailyChallengeSettle::set_group_id(v12, group_ida);
  v13 = std::__shared_ptr_access<proto_log::PlayerLogBodyFlightActivityDailyChallengeSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFlightActivityDailyChallengeSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&daily_datab->day_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)daily_datab + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&daily_datab->day_id >> 3)
                                                               + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto_log::PlayerLogBodyFlightActivityDailyChallengeSettle::set_day_id(v13, daily_datab->day_id);
  result_type = 0;
  if ( !is_successa )
  {
    if ( reasona == 3 )
      v14 = 2;
    else
      v14 = 1;
    result_type = v14;
  }
  v15 = std::__shared_ptr_access<proto_log::PlayerLogBodyFlightActivityDailyChallengeSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFlightActivityDailyChallengeSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 64));
  proto_log::PlayerLogBodyFlightActivityDailyChallengeSettle::set_result_type(v15, result_type);
  v16 = std::__shared_ptr_access<proto_log::PlayerLogBodyFlightActivityDailyChallengeSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFlightActivityDailyChallengeSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&daily_datab->new_score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)daily_datab + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&daily_datab->new_score >> 3)
                                                               + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto_log::PlayerLogBodyFlightActivityDailyChallengeSettle::set_settle_points(v16, daily_datab->new_score);
  v17 = std::__shared_ptr_access<proto_log::PlayerLogBodyFlightActivityDailyChallengeSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFlightActivityDailyChallengeSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 64));
  proto_log::PlayerLogBodyFlightActivityDailyChallengeSettle::set_left_time_sec(v17, left_timea);
  v18 = std::__shared_ptr_access<proto_log::PlayerLogBodyFlightActivityDailyChallengeSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFlightActivityDailyChallengeSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&daily_datab->gather_points >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)daily_datab + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&daily_datab->gather_points >> 3)
                                                               + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto_log::PlayerLogBodyFlightActivityDailyChallengeSettle::set_gather_num(v18, daily_datab->gather_points);
  v19 = std::__shared_ptr_access<proto_log::PlayerLogBodyFlightActivityDailyChallengeSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFlightActivityDailyChallengeSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 64));
  proto_log::PlayerLogBodyFlightActivityDailyChallengeSettle::set_transaction_no(v19, &thisa->transaction_no_);
  if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  player = thisa->player_;
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyFlightActivityDailyChallengeSettle,void>(
    &p_body_ptr,
    (const std::shared_ptr<proto_log::PlayerLogBodyFlightActivityDailyChallengeSettle> *)(v6 + 64));
  Player::printStatLog(player, &p_body_ptr, &p_body_ext_ptr, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
  std::shared_ptr<proto_log::PlayerLogBodyFlightActivityDailyChallengeSettle>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyFlightActivityDailyChallengeSettle> *const)(v6 + 64));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v6 + 48));
  if ( v32 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8008) = -168430091;
  }
};
