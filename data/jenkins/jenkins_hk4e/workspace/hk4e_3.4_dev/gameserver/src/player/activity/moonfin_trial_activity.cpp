// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/moonfin_trial_activity.cpp

// Line 24: range 00000000145710B0-0000000014571483
int32_t __cdecl MoonfinTrialActivity::fromScheduleBin(
        MoonfinTrialActivity *const this,
        const proto::ActivityScheduleBin *bin)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  unsigned int *v5; // rcx
  MoonfinTrialLevelRecordData *v6; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,MoonfinTrialLevelRecordData> >,bool> v7; // rax
  common::milog::MiLogStream *v8; // r14
  uint32_t v9; // ecx
  int32_t result; // eax
  google::protobuf::RepeatedPtrField<proto::MoonfinTrialLevelRecordBin>::const_iterator __for_begin; // [rsp+10h] [rbp-110h] BYREF
  google::protobuf::RepeatedPtrField<proto::MoonfinTrialLevelRecordBin>::const_iterator __for_end; // [rsp+18h] [rbp-108h] BYREF
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin_0; // [rsp+20h] [rbp-100h]
  const proto::MoonfinTrialScheduleBin *schedule_bin; // [rsp+28h] [rbp-F8h]
  const google::protobuf::RepeatedPtrField<proto::MoonfinTrialLevelRecordBin> *__for_range; // [rsp+30h] [rbp-F0h]
  const proto::MoonfinTrialLevelRecordBin *level_bin; // [rsp+38h] [rbp-E8h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range_0; // [rsp+40h] [rbp-E0h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end_0; // [rsp+48h] [rbp-D8h]
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
  *(_QWORD *)(v2 + 8) = "2 48 4 14 best_record:29 64 24 14 record_data:28";
  *(_QWORD *)(v2 + 16) = MoonfinTrialActivity::fromScheduleBin;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  schedule_bin = proto::ActivityScheduleBin::moonfin_trial_bin(bin);
  __for_range = proto::MoonfinTrialScheduleBin::moonfintrial_level_record_list(schedule_bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::MoonfinTrialLevelRecordBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::MoonfinTrialLevelRecordBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::MoonfinTrialLevelRecordBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    level_bin = google::protobuf::internal::RepeatedPtrIterator<proto::MoonfinTrialLevelRecordBin const>::operator*(&__for_begin);
    MoonfinTrialLevelRecordData::MoonfinTrialLevelRecordData((MoonfinTrialLevelRecordData *const)(v2 + 64));
    __for_range_0 = proto::MoonfinTrialLevelRecordBin::best_record_list(level_bin);
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
      std::vector<unsigned int>::push_back(
        (std::vector<unsigned int> *const)(v2 + 64),
        (const std::vector<unsigned int>::value_type *)(v2 + 48));
      ++__for_begin_0;
    }
    *(_DWORD *)(v2 + 48) = proto::MoonfinTrialLevelRecordBin::level_id(level_bin);
    v7 = std::map<unsigned int,MoonfinTrialLevelRecordData>::emplace<unsigned int,MoonfinTrialLevelRecordData&>(
           &this->level_record_map_,
           (unsigned int *)(v2 + 48),
           (MoonfinTrialLevelRecordData *)(v2 + 64),
           v5,
           v6);
    if ( !v7.second )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/moonfin_trial_activity.cpp",
        "fromScheduleBin",
        35);
      v8 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
             &v19,
             (const char (*)[36])"[MOONFIN_TRIAL] duplicate level_id:");
      *(_DWORD *)(v2 + 48) = proto::MoonfinTrialLevelRecordBin::level_id(level_bin);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v19);
    }
    MoonfinTrialLevelRecordData::~MoonfinTrialLevelRecordData((MoonfinTrialLevelRecordData *const)(v2 + 64));
    google::protobuf::internal::RepeatedPtrIterator<proto::MoonfinTrialLevelRecordBin const>::operator++(&__for_begin);
  }
  v9 = proto::MoonfinTrialScheduleBin::special_fish_count(schedule_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->special_fish_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->special_fish_count_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->special_fish_count_);
  }
  this->special_fish_count_ = v9;
  result = 0;
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
  return result;
};

// Line 44: range 0000000014571484-0000000014571690
int32_t __cdecl MoonfinTrialActivity::toScheduleBin(
        const MoonfinTrialActivity *const this,
        proto::ActivityScheduleBin *bin)
{
  google::protobuf::uint32 *v2; // rdx
  std::map<unsigned int,MoonfinTrialLevelRecordData>::const_iterator __for_begin; // [rsp+18h] [rbp-58h] BYREF
  std::map<unsigned int,MoonfinTrialLevelRecordData>::const_iterator __for_end; // [rsp+20h] [rbp-50h] BYREF
  std::vector<unsigned int>::const_iterator __for_begin_0; // [rsp+28h] [rbp-48h] BYREF
  std::vector<unsigned int>::const_iterator __for_end_0; // [rsp+30h] [rbp-40h] BYREF
  proto::MoonfinTrialScheduleBin *schedule_bin; // [rsp+38h] [rbp-38h]
  const std::map<unsigned int,MoonfinTrialLevelRecordData> *__for_range; // [rsp+40h] [rbp-30h]
  const std::pair<unsigned int const,MoonfinTrialLevelRecordData> *v10; // [rsp+48h] [rbp-28h]
  std::tuple_element<0,const std::pair<unsigned int const,MoonfinTrialLevelRecordData> >::type *level_id; // [rsp+50h] [rbp-20h]
  std::tuple_element<1,const std::pair<unsigned int const,MoonfinTrialLevelRecordData> >::type *level_record; // [rsp+58h] [rbp-18h]
  proto::MoonfinTrialLevelRecordBin *level_bin; // [rsp+60h] [rbp-10h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+68h] [rbp-8h]

  schedule_bin = proto::ActivityScheduleBin::mutable_moonfin_trial_bin(bin);
  __for_range = &this->level_record_map_;
  __for_begin._M_node = std::map<unsigned int,MoonfinTrialLevelRecordData>::begin(&this->level_record_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,MoonfinTrialLevelRecordData>::end(&this->level_record_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v10 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,MoonfinTrialLevelRecordData>>::operator*(&__for_begin);
    level_id = std::get<0ul,unsigned int const,MoonfinTrialLevelRecordData>(v10);
    level_record = (std::tuple_element<1,const std::pair<unsigned int const,MoonfinTrialLevelRecordData> >::type *)std::get<1ul,unsigned int const,MoonfinTrialLevelRecordData>(v10);
    level_bin = proto::MoonfinTrialScheduleBin::add_moonfintrial_level_record_list(schedule_bin);
    if ( *(_BYTE *)(((unsigned __int64)level_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)level_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)level_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::MoonfinTrialLevelRecordBin::set_level_id(level_bin, *level_id);
    __for_range_0 = &level_record->best_record_vec;
    __for_begin_0._M_current = std::vector<unsigned int>::begin(&level_record->best_record_vec)._M_current;
    __for_end_0._M_current = std::vector<unsigned int>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin_0, &__for_end_0) )
    {
      v2 = (google::protobuf::uint32 *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin_0);
      if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::MoonfinTrialLevelRecordBin::add_best_record_list(level_bin, *v2);
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin_0);
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,MoonfinTrialLevelRecordData>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->special_fish_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->special_fish_count_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::MoonfinTrialScheduleBin::set_special_fish_count(schedule_bin, this->special_fish_count_);
  return 0;
};

// Line 60: range 0000000014571692-0000000014571C7F
int32_t __cdecl MoonfinTrialActivity::toClient(MoonfinTrialActivity *const this, proto::ActivityInfo *activity_info)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // r13
  int32_t result; // eax
  common::milog::MiLogStream *v7; // rax
  uint32_t open_day; // ecx
  uint32_t BeginTimeByOpenDay; // eax
  std::_Rb_tree_iterator<std::pair<unsigned int const,MoonfinTrialLevelRecordData> >::pointer v10; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,MoonfinTrialLevelRecordData> >::pointer v11; // rax
  google::protobuf::uint32 *v12; // rdx
  unsigned int val; // [rsp+1Ch] [rbp-F4h] BYREF
  std::map<unsigned int,data::MoonfinTrialLevelExcelConfig>::const_iterator __for_begin; // [rsp+20h] [rbp-F0h] BYREF
  std::map<unsigned int,data::MoonfinTrialLevelExcelConfig>::const_iterator __for_end; // [rsp+28h] [rbp-E8h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,MoonfinTrialLevelRecordData> >::_Self __y; // [rsp+30h] [rbp-E0h] BYREF
  proto::MoonfinTrialActivityDetailInfo *detail_info; // [rsp+38h] [rbp-D8h]
  const ActivityMoonfinTrialExcelConfigMgr *conf_mgr; // [rsp+40h] [rbp-D0h]
  const std::map<unsigned int,data::MoonfinTrialLevelExcelConfig> *level_config_map_ptr; // [rsp+48h] [rbp-C8h]
  google::protobuf::Map<unsigned int,proto::MoonfinTrialLevelInfo> *proto_level_info_map; // [rsp+50h] [rbp-C0h]
  const std::map<unsigned int,data::MoonfinTrialLevelExcelConfig> *__for_range; // [rsp+58h] [rbp-B8h]
  const std::pair<unsigned int const,data::MoonfinTrialLevelExcelConfig> *v22; // [rsp+60h] [rbp-B0h]
  std::tuple_element<0,const std::pair<unsigned int const,data::MoonfinTrialLevelExcelConfig> >::type *level_id; // [rsp+68h] [rbp-A8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::MoonfinTrialLevelExcelConfig> >::type *level_config; // [rsp+70h] [rbp-A0h]
  proto::MoonfinTrialLevelInfo *proto_level_info; // [rsp+78h] [rbp-98h]
  std::shared_ptr<Config> v26; // [rsp+80h] [rbp-90h] BYREF
  common::milog::MiLogStream v27; // [rsp+90h] [rbp-80h] BYREF
  char v28[96]; // [rsp+B0h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 7 iter:82";
  *(_QWORD *)(v2 + 16) = MoonfinTrialActivity::toClient;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  if ( BaseActivity::toClient((BaseActivity *const)this, activity_info) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/moonfin_trial_activity.cpp",
      "toClient",
      63);
    v5 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
           &v27,
           (const char (*)[52])"[MOONFIN_TRIAL] BaseActivity::toClient fails, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v27);
    result = -1;
  }
  else
  {
    detail_info = proto::ActivityInfo::mutable_moonfin_trial_info(activity_info);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v26);
    conf_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26)->design_config.txt_config_mgr.activity_moonfin_trial_config_mgr;
    std::shared_ptr<Config>::~shared_ptr(&v26);
    if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    level_config_map_ptr = ActivityMoonfinTrialExcelConfigMgr::findLevelConfigMapByActivityId(
                             conf_mgr,
                             this->activity_id_);
    if ( level_config_map_ptr )
    {
      proto_level_info_map = proto::MoonfinTrialActivityDetailInfo::mutable_level_info_map(detail_info);
      __for_range = level_config_map_ptr;
      __for_begin._M_node = std::map<unsigned int,data::MoonfinTrialLevelExcelConfig>::begin(level_config_map_ptr)._M_node;
      __for_end._M_node = std::map<unsigned int,data::MoonfinTrialLevelExcelConfig>::end(level_config_map_ptr)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        v22 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::MoonfinTrialLevelExcelConfig>>::operator*(&__for_begin);
        level_id = std::get<0ul,unsigned int const,data::MoonfinTrialLevelExcelConfig>(v22);
        level_config = (std::tuple_element<1,const std::pair<unsigned int const,data::MoonfinTrialLevelExcelConfig> >::type *)std::get<1ul,unsigned int const,data::MoonfinTrialLevelExcelConfig>(v22);
        proto_level_info = google::protobuf::Map<unsigned int,proto::MoonfinTrialLevelInfo>::operator[](
                             proto_level_info_map,
                             level_id);
        if ( *(_BYTE *)(((unsigned __int64)&level_config->open_day >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)level_config + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_config->open_day >> 3)
                                                                      + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        open_day = level_config->open_day;
        if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        BeginTimeByOpenDay = BaseActivity::getBeginTimeByOpenDay(this->schedule_id_, open_day);
        proto::MoonfinTrialLevelInfo::set_open_time(proto_level_info, BeginTimeByOpenDay);
        *(std::map<unsigned int,MoonfinTrialLevelRecordData>::iterator *)(v2 + 32) = std::map<unsigned int,MoonfinTrialLevelRecordData>::find(
                                                                                       &this->level_record_map_,
                                                                                       level_id);
        __y._M_node = std::map<unsigned int,MoonfinTrialLevelRecordData>::end(&this->level_record_map_)._M_node;
        if ( std::operator!=(
               (const std::_Rb_tree_iterator<std::pair<unsigned int const,MoonfinTrialLevelRecordData> >::_Self *)(v2 + 32),
               &__y) )
        {
          v10 = std::_Rb_tree_iterator<std::pair<unsigned int const,MoonfinTrialLevelRecordData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,MoonfinTrialLevelRecordData> > *const)(v2 + 32));
          if ( !std::vector<unsigned int>::empty(&v10->second.best_record_vec) )
          {
            v11 = std::_Rb_tree_iterator<std::pair<unsigned int const,MoonfinTrialLevelRecordData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,MoonfinTrialLevelRecordData> > *const)(v2 + 32));
            v12 = std::vector<unsigned int>::operator[](&v11->second.best_record_vec, 0LL);
            if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            proto::MoonfinTrialLevelInfo::set_best_record(proto_level_info, *v12);
          }
        }
        std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::MoonfinTrialLevelExcelConfig>>::operator++(&__for_begin);
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->special_fish_count_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->special_fish_count_ >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::MoonfinTrialActivityDetailInfo::set_special_fish_count(detail_info, this->special_fish_count_);
      result = 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/moonfin_trial_activity.cpp",
        "toClient",
        73);
      v7 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
             &v27,
             (const char (*)[62])"[MOONFIN_TRIAL] level_config_map_ptr nullptr for activity_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->activity_id_);
      common::milog::MiLogStream::~MiLogStream(&v27);
      result = -1;
    }
  }
  if ( v28 == (char *)v2 )
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

// Line 96: range 0000000014571C80-0000000014571CDD
int32_t __cdecl MoonfinTrialActivity::init(MoonfinTrialActivity *const this)
{
  if ( BaseActivity::isOpening((const BaseActivity *const)this, 0)
    && !BaseActivity::isSettled((const BaseActivity *const)this) )
  {
    MoonfinTrialActivity::registerObserver(this);
  }
  return 0;
};

// Line 106: range 0000000014571CDE-0000000014571CF8
void __cdecl MoonfinTrialActivity::onStart(MoonfinTrialActivity *const this)
{
  MoonfinTrialActivity::registerObserver(this);
};

// Line 111: range 0000000014571CFA-0000000014571DA2
void __cdecl MoonfinTrialActivity::onPreStart(MoonfinTrialActivity *const this)
{
  common::milog::MiLogStream v1; // [rsp+10h] [rbp-30h] BYREF

  if ( !std::map<unsigned int,MoonfinTrialLevelRecordData>::empty(&this->level_record_map_) )
  {
    common::milog::MiLogStream::create(
      &v1,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/moonfin_trial_activity.cpp",
      "onPreStart",
      114);
    common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
      &v1,
      (const char (*)[47])"[MOONFIN_TRIAL] level_record_map_ is not empty");
    common::milog::MiLogStream::~MiLogStream(&v1);
    std::map<unsigned int,MoonfinTrialLevelRecordData>::clear(&this->level_record_map_);
  }
};

// Line 120: range 0000000014571DA4-00000000145721BD
void __cdecl MoonfinTrialActivity::registerObserver(MoonfinTrialActivity *const this)
{
  unsigned __int64 p_M_start; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::weak_ptr<MoonfinTrialActivity> *EventComp; // [rsp+10h] [rbp-F0h]
  std::weak_ptr<MoonfinTrialActivity> *p_this_wtr; // [rsp+20h] [rbp-E0h]
  PlayerEventComp v6; // [rsp+30h] [rbp-D0h] BYREF

  p_M_start = (unsigned __int64)&v6.event_center_.context_.pending_que_.c._M_impl._M_start;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      p_M_start = v2;
  }
  *(_QWORD *)p_M_start = 1102416563LL;
  *(_QWORD *)(p_M_start + 8) = "2 32 16 12 this_ptr:121 64 16 12 this_wtr:127";
  *(_QWORD *)(p_M_start + 16) = MoonfinTrialActivity::registerObserver;
  v3 = (_DWORD *)(p_M_start >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  toThisPtr<MoonfinTrialActivity>((MoonfinTrialActivity *)(p_M_start + 32));
  if ( std::operator==<MoonfinTrialActivity>(0LL, (const std::shared_ptr<MoonfinTrialActivity> *)(p_M_start + 32)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v6.event_center_,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/moonfin_trial_activity.cpp",
      "registerObserver",
      124);
    common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
      (common::milog::MiLogStream *const)&v6.event_center_,
      (const char (*)[52])"dynamic_pointer_cast to MoonfinTrialActivity failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v6.event_center_);
  }
  else
  {
    std::weak_ptr<MoonfinTrialActivity>::weak_ptr<MoonfinTrialActivity,void>(
      (std::weak_ptr<MoonfinTrialActivity> *const)(p_M_start + 64),
      (const std::shared_ptr<MoonfinTrialActivity> *)(p_M_start + 32));
    if ( std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->gallery_settle_wtr_) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      p_this_wtr = (std::weak_ptr<MoonfinTrialActivity> *)Player::getEventComp(this->player_);
      std::weak_ptr<MoonfinTrialActivity>::weak_ptr(
        (std::weak_ptr<MoonfinTrialActivity> *const)&v6._M_weak_this._M_refcount,
        (const std::weak_ptr<MoonfinTrialActivity> *)(p_M_start + 64));
      PlayerEventComp::registerObserver<MoonfinTrialActivity,GalleryFishSettleEvent>(
        &v6,
        p_this_wtr,
        (void (*)(MoonfinTrialActivity *, const GalleryFishSettleEvent *))&v6._M_weak_this._M_refcount);
      std::weak_ptr<Observer>::operator=(&this->gallery_settle_wtr_, (std::weak_ptr<Observer> *)&v6);
      std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v6);
      std::weak_ptr<MoonfinTrialActivity>::~weak_ptr((std::weak_ptr<MoonfinTrialActivity> *const)&v6._M_weak_this._M_refcount);
    }
    if ( std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->fishing_succ_wtr_) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      EventComp = (std::weak_ptr<MoonfinTrialActivity> *)Player::getEventComp(this->player_);
      std::weak_ptr<MoonfinTrialActivity>::weak_ptr(
        (std::weak_ptr<MoonfinTrialActivity> *const)&v6,
        (const std::weak_ptr<MoonfinTrialActivity> *)(p_M_start + 64));
      PlayerEventComp::registerObserver<MoonfinTrialActivity,FishingSuccEvent>(
        (PlayerEventComp *const)&v6._M_weak_this._M_refcount,
        EventComp,
        (void (*)(MoonfinTrialActivity *, const FishingSuccEvent *))&v6);
      std::weak_ptr<Observer>::operator=(
        &this->fishing_succ_wtr_,
        (std::weak_ptr<Observer> *)&v6._M_weak_this._M_refcount);
      std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v6._M_weak_this._M_refcount);
      std::weak_ptr<MoonfinTrialActivity>::~weak_ptr((std::weak_ptr<MoonfinTrialActivity> *const)&v6);
    }
    std::weak_ptr<MoonfinTrialActivity>::~weak_ptr((std::weak_ptr<MoonfinTrialActivity> *const)(p_M_start + 64));
  }
  std::shared_ptr<MoonfinTrialActivity>::~shared_ptr((std::shared_ptr<MoonfinTrialActivity> *const)(p_M_start + 32));
  if ( &v6.event_center_.context_.pending_que_.c._M_impl._M_start == (std::_Deque_base<std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> >>::iterator *)p_M_start )
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

// Line 139: range 00000000145721BE-00000000145722BC
void __cdecl MoonfinTrialActivity::unregisterObserver(MoonfinTrialActivity *const this)
{
  PlayerEventComp *EventComp; // rax
  PlayerEventComp *v2; // rax

  if ( !std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->gallery_settle_wtr_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    EventComp = Player::getEventComp(this->player_);
    PlayerEventComp::unregisterObserver(EventComp, &this->gallery_settle_wtr_);
    std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::reset(&this->gallery_settle_wtr_);
  }
  if ( !std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->fishing_succ_wtr_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v2 = Player::getEventComp(this->player_);
    PlayerEventComp::unregisterObserver(v2, &this->fishing_succ_wtr_);
    std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::reset(&this->fishing_succ_wtr_);
  }
};

// Line 153: range 00000000145722BE-00000000145722D8
void __cdecl MoonfinTrialActivity::onSettle(MoonfinTrialActivity *const this)
{
  MoonfinTrialActivity::unregisterObserver(this);
};

// Line 158: range 00000000145722DA-00000000145722F9
void __cdecl MoonfinTrialActivity::onDailyRefresh(MoonfinTrialActivity *const this)
{
  BaseActivity::notifyClientData((BaseActivity *const)this, 0);
};

// Line 163: range 00000000145722FA-0000000014572365
void __cdecl MoonfinTrialActivity::onClear(MoonfinTrialActivity *const this)
{
  std::map<unsigned int,MoonfinTrialLevelRecordData>::clear(&this->level_record_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->special_fish_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->special_fish_count_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->special_fish_count_);
  }
  this->special_fish_count_ = 0;
};

// Line 169: range 0000000014572366-0000000014572D51
void __cdecl MoonfinTrialActivity::onGalleryFishSettleEvent(
        MoonfinTrialActivity *const this,
        const GalleryFishSettleEvent *event)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // r14
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  const ActivityMoonfinTrialExcelConfigMgr *p_activity_moonfin_trial_config_mgr; // rdi
  uint32_t gallery_id; // edx
  common::milog::MiLogStream *v11; // rax
  int level_type; // eax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  int v20; // eax
  uint32_t fishing_score_list_size; // [rsp+10h] [rbp-100h]
  uint32_t i; // [rsp+14h] [rbp-FCh]
  const data::MoonfinTrialLevelExcelConfig *level_info_ptr; // [rsp+18h] [rbp-F8h]
  proto::FishingGallerySettleInfo *gallery_settle_info; // [rsp+20h] [rbp-F0h]
  proto::FishingScore *fishing_score; // [rsp+28h] [rbp-E8h]
  std::shared_ptr<Config> v27; // [rsp+30h] [rbp-E0h] BYREF
  common::milog::MiLogStream v28; // [rsp+40h] [rbp-D0h] BYREF
  char v29[176]; // [rsp+60h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 4 12 level_id:183 48 40 10 notify:220";
  *(_QWORD *)(v2 + 16) = MoonfinTrialActivity::onGalleryFishSettleEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  common::milog::MiLogStream::create(
    &v28,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/moonfin_trial_activity.cpp",
    "onGalleryFishSettleEvent",
    170);
  v5 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
         &v28,
         (const char (*)[48])"[MOONFIN_TRIAL] onGalleryFishSettleEvent, uid: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *(_DWORD *)(v2 + 32) = Player::getUid(this->player_);
  v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
  v7 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v6, (const char (*)[15])" ,gallery_id: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &event->gallery_id);
  common::milog::MiLogStream::~MiLogStream(&v28);
  if ( !BaseActivity::isOpening((const BaseActivity *const)this, 0)
    || BaseActivity::isSettled((const BaseActivity *const)this) )
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/moonfin_trial_activity.cpp",
      "onGalleryFishSettleEvent",
      173);
    common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
      &v28,
      (const char (*)[37])"[MOONFIN_TRIAL] activity is not open");
    common::milog::MiLogStream::~MiLogStream(&v28);
    goto LABEL_56;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v27);
  p_activity_moonfin_trial_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v27)->design_config.txt_config_mgr.activity_moonfin_trial_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&event->gallery_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->gallery_id >> 3) + 0x7FFF8000) <= 3 )
  {
    p_activity_moonfin_trial_config_mgr = (const ActivityMoonfinTrialExcelConfigMgr *)&event->gallery_id;
    __asan_report_load4();
  }
  gallery_id = event->gallery_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    p_activity_moonfin_trial_config_mgr = (const ActivityMoonfinTrialExcelConfigMgr *)&this->activity_id_;
    __asan_report_load4();
  }
  level_info_ptr = ActivityMoonfinTrialExcelConfigMgr::findLevelInfoByActivityIdAndGalleryId(
                     p_activity_moonfin_trial_config_mgr,
                     this->activity_id_,
                     gallery_id);
  std::shared_ptr<Config>::~shared_ptr(&v27);
  if ( !level_info_ptr )
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/moonfin_trial_activity.cpp",
      "onGalleryFishSettleEvent",
      180);
    v11 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
            &v28,
            (const char (*)[52])"[MOONFIN_TRIAL] level_info nullptr for activity_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &this->activity_id_);
    common::milog::MiLogStream::~MiLogStream(&v28);
    goto LABEL_56;
  }
  if ( *(_BYTE *)(((unsigned __int64)&level_info_ptr->level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&level_info_ptr->level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  *(_DWORD *)(v2 + 32) = level_info_ptr->level_id;
  if ( *(_BYTE *)(((unsigned __int64)&level_info_ptr->level_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)level_info_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_info_ptr->level_type >> 3)
                                                                  + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  level_type = level_info_ptr->level_type;
  if ( level_type == 4 )
  {
    if ( proto::FishingGallerySettleInfo::fishing_score_list_size(&event->gallery_settle_info) > 0
      && proto::FishingGallerySettleInfo::fishing_score_list_size(&event->gallery_settle_info) != 3 )
    {
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/moonfin_trial_activity.cpp",
        "onGalleryFishSettleEvent",
        196);
      v15 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
              &v28,
              (const char (*)[56])"[MOONFIN_TRIAL] fishing_score_list_size != 3, level_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v28);
      goto LABEL_56;
    }
    fishing_score_list_size = 3;
  }
  else
  {
    if ( level_type > 4 )
      goto LABEL_43;
    if ( !level_type )
    {
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/moonfin_trial_activity.cpp",
        "onGalleryFishSettleEvent",
        189);
      v13 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
              &v28,
              (const char (*)[58])"[MOONFIN_TRIAL] level type quest not challenge, level_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v28);
      goto LABEL_56;
    }
    if ( level_type < 0 || (unsigned int)(level_type - 1) > 2 )
    {
LABEL_43:
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/moonfin_trial_activity.cpp",
        "onGalleryFishSettleEvent",
        216);
      v18 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
              &v28,
              (const char (*)[46])"[MOONFIN_TRIAL] unknown level type, level_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v28);
      goto LABEL_56;
    }
    if ( proto::FishingGallerySettleInfo::fishing_score_list_size(&event->gallery_settle_info) > 0
      && proto::FishingGallerySettleInfo::fishing_score_list_size(&event->gallery_settle_info) != 1 )
    {
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/moonfin_trial_activity.cpp",
        "onGalleryFishSettleEvent",
        208);
      v17 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
              &v28,
              (const char (*)[56])"[MOONFIN_TRIAL] fishing_score_list_size != 1, level_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v28);
      goto LABEL_56;
    }
    fishing_score_list_size = 1;
  }
  proto::FishingGallerySettleNotify::FishingGallerySettleNotify((proto::FishingGallerySettleNotify *const)(v2 + 48));
  gallery_settle_info = proto::FishingGallerySettleNotify::mutable_settle_info((proto::FishingGallerySettleNotify *const)(v2 + 48));
  proto::FishingGallerySettleInfo::CopyFrom(gallery_settle_info, &event->gallery_settle_info);
  if ( !proto::FishingGallerySettleInfo::fishing_score_list_size(gallery_settle_info) )
  {
    for ( i = 0; i < fishing_score_list_size; ++i )
    {
      fishing_score = proto::FishingGallerySettleInfo::add_fishing_score_list(gallery_settle_info);
      proto::FishingScore::set_fishing_score(fishing_score, 0);
    }
  }
  if ( MoonfinTrialActivity::tryRecordGalleryScore(this, *(_DWORD *)(v2 + 32), gallery_settle_info) )
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/moonfin_trial_activity.cpp",
      "onGalleryFishSettleEvent",
      234);
    v19 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
            &v28,
            (const char (*)[54])"[MOONFIN_TRIAL] tryRecordGalleryScore fail. level_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v28);
  }
  else
  {
    v20 = *(unsigned __int8 *)(((unsigned __int64)&event->gallery_id >> 3) + 0x7FFF8000);
    if ( (_BYTE)v20 != 0 && (char)v20 <= 3 )
      __asan_report_load4();
    proto::FishingGallerySettleNotify::set_gallery_id(
      (proto::FishingGallerySettleNotify *const)(v2 + 48),
      event->gallery_id);
    proto::FishingGallerySettleNotify::set_level_id(
      (proto::FishingGallerySettleNotify *const)(v2 + 48),
      *(_DWORD *)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 48));
    BaseActivity::notifyClientData((BaseActivity *const)this, 0);
  }
  proto::FishingGallerySettleNotify::~FishingGallerySettleNotify((proto::FishingGallerySettleNotify *const)(v2 + 48));
LABEL_56:
  if ( v29 == (char *)v2 )
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

// Line 245: range 0000000014572D52-0000000014573198
__int64 __fastcall MoonfinTrialActivity::tryRecordGalleryScore(
        MoonfinTrialActivity *const this,
        uint32_t level_id,
        proto::FishingGallerySettleInfo *settle_info)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::vector<unsigned int>::size_type v6; // r14
  unsigned int v7; // eax
  std::vector<unsigned int>::size_type v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r12
  __int64 result; // rax
  std::vector<unsigned int>::reference v13; // rdx
  google::protobuf::uint32 v14; // r14d
  google::protobuf::uint32 v15; // r14d
  std::vector<unsigned int>::reference v16; // rax
  google::protobuf::uint32 *v17; // rdx
  bool is_new_record; // [rsp+2Fh] [rbp-F1h]
  std::vector<unsigned int>::value_type __x; // [rsp+30h] [rbp-F0h] BYREF
  uint32_t i; // [rsp+34h] [rbp-ECh]
  google::protobuf::RepeatedPtrField<proto::FishingScore>::iterator __for_begin; // [rsp+38h] [rbp-E8h] BYREF
  google::protobuf::RepeatedPtrField<proto::FishingScore>::iterator __for_end; // [rsp+40h] [rbp-E0h] BYREF
  unsigned __int64 val; // [rsp+48h] [rbp-D8h] BYREF
  google::protobuf::RepeatedPtrField<proto::FishingScore> *fishing_score_list; // [rsp+50h] [rbp-D0h]
  std::vector<unsigned int> *best_record_vec; // [rsp+58h] [rbp-C8h]
  google::protobuf::RepeatedPtrField<proto::FishingScore> *__for_range; // [rsp+60h] [rbp-C0h]
  proto::FishingScore *fishing_score; // [rsp+68h] [rbp-B8h]
  common::milog::MiLogStream v29; // [rsp+70h] [rbp-B0h] BYREF
  char v30[144]; // [rsp+90h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 9 index:248 64 4 12 level_id:244";
  *(_QWORD *)(v3 + 16) = MoonfinTrialActivity::tryRecordGalleryScore;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 64) = level_id;
  fishing_score_list = proto::FishingGallerySettleInfo::mutable_fishing_score_list(settle_info);
  best_record_vec = (std::vector<unsigned int> *)std::map<unsigned int,MoonfinTrialLevelRecordData>::operator[](
                                                   &this->level_record_map_,
                                                   (const std::map<unsigned int,MoonfinTrialLevelRecordData>::key_type *)(v3 + 64));
  *(_DWORD *)(v3 + 48) = 0;
  v6 = google::protobuf::RepeatedPtrField<proto::FishingScore>::size(fishing_score_list);
  if ( v6 > std::vector<unsigned int>::size(best_record_vec) )
  {
    for ( i = std::vector<unsigned int>::size(best_record_vec); ; ++i )
    {
      v7 = google::protobuf::RepeatedPtrField<proto::FishingScore>::size(fishing_score_list);
      if ( i >= v7 )
        break;
      __x = 0;
      std::vector<unsigned int>::push_back(best_record_vec, &__x);
    }
  }
  __for_range = fishing_score_list;
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::FishingScore>::begin(fishing_score_list).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::FishingScore>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::FishingScore>::operator!=(&__for_begin, &__for_end) )
  {
    fishing_score = google::protobuf::internal::RepeatedPtrIterator<proto::FishingScore>::operator*(&__for_begin);
    v8 = *(unsigned int *)(v3 + 48);
    if ( v8 >= std::vector<unsigned int>::size(best_record_vec) )
    {
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/moonfin_trial_activity.cpp",
        "tryRecordGalleryScore",
        261);
      v9 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
             &v29,
             (const char (*)[54])"[MOONFIN_TRIAL] index >= best_record_vec size. index:");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 48));
      v11 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v10, (const char (*)[8])", size:");
      val = std::vector<unsigned int>::size(best_record_vec);
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v11, &val);
      common::milog::MiLogStream::~MiLogStream(&v29);
      result = 0xFFFFFFFFLL;
      goto LABEL_20;
    }
    v13 = std::vector<unsigned int>::operator[](best_record_vec, *(unsigned int *)(v3 + 48));
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v14 = *v13;
    is_new_record = v14 < proto::FishingScore::fishing_score(fishing_score);
    proto::FishingScore::set_is_new_record(fishing_score, is_new_record);
    if ( is_new_record )
    {
      v15 = proto::FishingScore::fishing_score(fishing_score);
      v16 = std::vector<unsigned int>::operator[](best_record_vec, *(unsigned int *)(v3 + 48));
      v17 = v16;
      if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v16);
      }
      *v17 = v15;
    }
    ++*(_DWORD *)(v3 + 48);
    google::protobuf::internal::RepeatedPtrIterator<proto::FishingScore>::operator++(&__for_begin);
  }
  result = 0LL;
LABEL_20:
  if ( v30 == (char *)v3 )
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

// Line 276: range 000000001457319A-000000001457354C
void __cdecl MoonfinTrialActivity::onFishingSuccEvent(MoonfinTrialActivity *const this, const FishingSuccEvent *event)
{
  ActivityMoonfinTrialExcelConfigMgr *p_activity_moonfin_trial_config_mgr; // rcx
  common::milog::MiLogStream *v3; // rax
  uint32_t activity_fish_id; // ecx
  uint32_t special_fish_count; // ecx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  const data::MoonfinTrialExcelConfig *preview_config_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v10; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v11; // [rsp+30h] [rbp-30h] BYREF

  if ( *(char *)(((unsigned __int64)&event->is_got_item >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&event->is_got_item);
  if ( event->is_got_item )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v10);
    p_activity_moonfin_trial_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v10)->design_config.txt_config_mgr.activity_moonfin_trial_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    preview_config_ptr = ActivityMoonfinTrialExcelConfigMgr::findPreviewExcelConfigByActivityId(
                           p_activity_moonfin_trial_config_mgr,
                           this->activity_id_);
    std::shared_ptr<Config>::~shared_ptr(&v10);
    if ( preview_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&preview_config_ptr->activity_fish_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&preview_config_ptr->activity_fish_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      activity_fish_id = preview_config_ptr->activity_fish_id;
      if ( *(_BYTE *)(((unsigned __int64)&event->fish_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->fish_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( activity_fish_id == event->fish_id )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->special_fish_count_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->special_fish_count_ >> 3)
                                                              + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        special_fish_count = this->special_fish_count_;
        if ( *(_BYTE *)(((unsigned __int64)&preview_config_ptr->activity_fish_gain_limit >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)preview_config_ptr + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&preview_config_ptr->activity_fish_gain_limit >> 3)
                                                                            + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( special_fish_count < preview_config_ptr->activity_fish_gain_limit )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->special_fish_count_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->special_fish_count_ >> 3)
                                                                + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          ++this->special_fish_count_;
          BaseActivity::notifyClientData((BaseActivity *const)this, 0);
        }
        else
        {
          common::milog::MiLogStream::create(
            &v11,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/moonfin_trial_activity.cpp",
            "onFishingSuccEvent",
            293);
          v6 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                 &v11,
                 (const char (*)[52])"[MOONFIN_TRIAL] cannot get activity fish, fish_id: ");
          v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &event->fish_id);
          v8 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v7, (const char (*)[12])"fish_count:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->special_fish_count_);
          common::milog::MiLogStream::~MiLogStream(&v11);
        }
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/moonfin_trial_activity.cpp",
        "onFishingSuccEvent",
        284);
      v3 = common::milog::MiLogStream::operator<<<char [73],(char *[73])0>(
             &v11,
             (const char (*)[73])"[MOONFIN_TRIAL] findPreviewExcelConfigByActivityId failed, activity_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &this->activity_id_);
      common::milog::MiLogStream::~MiLogStream(&v11);
    }
  }
};

// Line 301: range 000000001457354E-000000001457376D
bool __cdecl MoonfinTrialActivity::isCanGetFish(const MoonfinTrialActivity *const this, uint32_t fish_id)
{
  ActivityMoonfinTrialExcelConfigMgr *p_activity_moonfin_trial_config_mgr; // rcx
  common::milog::MiLogStream *v3; // rax
  uint32_t special_fish_count; // ecx
  const data::MoonfinTrialExcelConfig *preview_config_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v7; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v8; // [rsp+30h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v7);
  p_activity_moonfin_trial_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v7)->design_config.txt_config_mgr.activity_moonfin_trial_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  preview_config_ptr = ActivityMoonfinTrialExcelConfigMgr::findPreviewExcelConfigByActivityId(
                         p_activity_moonfin_trial_config_mgr,
                         this->activity_id_);
  std::shared_ptr<Config>::~shared_ptr(&v7);
  if ( preview_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&preview_config_ptr->activity_fish_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&preview_config_ptr->activity_fish_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( fish_id == preview_config_ptr->activity_fish_id )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->special_fish_count_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->special_fish_count_ >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      special_fish_count = this->special_fish_count_;
      if ( *(_BYTE *)(((unsigned __int64)&preview_config_ptr->activity_fish_gain_limit >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)preview_config_ptr + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&preview_config_ptr->activity_fish_gain_limit >> 3)
                                                                          + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      return special_fish_count < preview_config_ptr->activity_fish_gain_limit;
    }
    else
    {
      return 1;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/moonfin_trial_activity.cpp",
      "isCanGetFish",
      305);
    v3 = common::milog::MiLogStream::operator<<<char [73],(char *[73])0>(
           &v8,
           (const char (*)[73])"[MOONFIN_TRIAL] findPreviewExcelConfigByActivityId failed, activity_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &this->activity_id_);
    common::milog::MiLogStream::~MiLogStream(&v8);
    return 1;
  }
};

// Line 317: range 000000001457376E-00000000145737DE
int32_t __cdecl MoonfinTrialActivity::setActivityFishCountByGM(MoonfinTrialActivity *const this, uint32_t count)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->special_fish_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->special_fish_count_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->special_fish_count_);
  }
  this->special_fish_count_ = count;
  BaseActivity::notifyClientData((BaseActivity *const)this, 0);
  return 0;
};
