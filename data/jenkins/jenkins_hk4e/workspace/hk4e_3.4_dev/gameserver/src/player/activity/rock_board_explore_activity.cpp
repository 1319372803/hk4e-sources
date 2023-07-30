// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/rock_board_explore_activity.cpp

// Line 20: range 0000000016C3429E-0000000016C34398
void __cdecl RockBoardExploreStageData::fromBin(
        RockBoardExploreStageData *const this,
        const proto::RockBoardExploreStageBin *bin)
{
  __int64 v2; // rcx
  char v3; // dl
  __int64 v4; // rdx
  _BOOL4 v5; // eax
  bool v6; // cl
  char v7; // dl
  __int64 v8; // rdx
  _BOOL4 v9; // eax
  bool v10; // cl
  char v11; // dl
  __int64 v12; // rdx
  const proto::RockBoardExploreStageBin *bina; // [rsp+0h] [rbp-10h]

  bina = bin;
  v2 = proto::RockBoardExploreStageBin::stage_id(bin);
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  LOBYTE(bin) = v3 != 0;
  v4 = (v3 != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7) + 3) >= v3);
  if ( (_BYTE)v4 )
    __asan_report_store4(this, bin, v4, v2);
  this->stage_id = v2;
  LOBYTE(v5) = proto::RockBoardExploreStageBin::is_open(bina);
  v6 = v5;
  v7 = *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000);
  LOBYTE(bin) = v7 != 0;
  v8 = (v7 != 0) & (unsigned __int8)((((unsigned __int8)this + 4) & 7) >= v7);
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->is_open, bin, v8, v5);
  this->is_open = v6;
  LOBYTE(v9) = proto::RockBoardExploreStageBin::is_finish(bina);
  v10 = v9;
  v11 = *(_BYTE *)(((unsigned __int64)&this->is_finish >> 3) + 0x7FFF8000);
  LOBYTE(bin) = v11 != 0;
  v12 = (v11 != 0) & (unsigned __int8)((((unsigned __int8)this + 5) & 7) >= v11);
  if ( (_BYTE)v12 )
    __asan_report_store1(&this->is_finish, bin, v12, v9);
  this->is_finish = v10;
};

// Line 27: range 0000000016C3439A-0000000016C34499
void __cdecl RockBoardExploreStageData::toBin(
        const RockBoardExploreStageData *const this,
        proto::RockBoardExploreStageBin *bin)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  proto::RockBoardExploreStageBin::set_stage_id(bin, this->stage_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_open);
  }
  proto::RockBoardExploreStageBin::set_is_open(bin, this->is_open);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_finish >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 5) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_finish >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_finish);
  }
  proto::RockBoardExploreStageBin::set_is_finish(bin, this->is_finish);
};

// Line 34: range 0000000016C3449A-0000000016C34599
void __cdecl RockBoardExploreStageData::toClient(
        const RockBoardExploreStageData *const this,
        proto::RockBoardExploreStageData *proto)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  proto::RockBoardExploreStageData::set_stage_id(proto, this->stage_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_open);
  }
  proto::RockBoardExploreStageData::set_is_open(proto, this->is_open);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_finish >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 5) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_finish >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_finish);
  }
  proto::RockBoardExploreStageData::set_is_finish(proto, this->is_finish);
};

// Line 41: range 0000000016C3459A-0000000016C347B8
int32_t __cdecl RockBoardExploreActivity::fromScheduleBin(
        RockBoardExploreActivity *const this,
        const proto::ActivityScheduleBin *bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::map<unsigned int,RockBoardExploreStageData>::mapped_type *v5; // rax
  _QWORD *v6; // rdx
  int32_t result; // eax
  google::protobuf::RepeatedPtrField<proto::RockBoardExploreStageBin>::const_iterator __for_begin; // [rsp+18h] [rbp-88h] BYREF
  google::protobuf::RepeatedPtrField<proto::RockBoardExploreStageBin>::const_iterator __for_end; // [rsp+20h] [rbp-80h] BYREF
  const proto::RockBoardExploreScheduleBin *schedule_bin; // [rsp+28h] [rbp-78h]
  const google::protobuf::RepeatedPtrField<proto::RockBoardExploreStageBin> *__for_range; // [rsp+30h] [rbp-70h]
  const proto::RockBoardExploreStageBin *stage_bin; // [rsp+38h] [rbp-68h]
  char v13[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 13 stage_data:46";
  *(_QWORD *)(v2 + 16) = RockBoardExploreActivity::fromScheduleBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  std::map<unsigned int,RockBoardExploreStageData>::clear(&this->stage_data_map_);
  schedule_bin = proto::ActivityScheduleBin::rock_board_explore_bin(bin);
  __for_range = proto::RockBoardExploreScheduleBin::stage_bin_list(schedule_bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::RockBoardExploreStageBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::RockBoardExploreStageBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::RockBoardExploreStageBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    stage_bin = google::protobuf::internal::RepeatedPtrIterator<proto::RockBoardExploreStageBin const>::operator*(&__for_begin);
    *(_DWORD *)(v2 + 32) = 0;
    *(_BYTE *)(v2 + 36) = 0;
    *(_BYTE *)(v2 + 37) = 0;
    RockBoardExploreStageData::fromBin((RockBoardExploreStageData *const)(v2 + 32), stage_bin);
    v5 = std::map<unsigned int,RockBoardExploreStageData>::operator[](
           &this->stage_data_map_,
           (const std::map<unsigned int,RockBoardExploreStageData>::key_type *)(v2 + 32));
    v6 = v5;
    if ( ((unsigned __int8)v5 & 7) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)(((unsigned __int64)(&v5->is_finish + 2) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v5 + 7) & 7) >= *(_BYTE *)(((unsigned __int64)(&v5->is_finish + 2) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v5, 8LL);
    }
    *v6 = *(_QWORD *)(v2 + 32);
    google::protobuf::internal::RepeatedPtrIterator<proto::RockBoardExploreStageBin const>::operator++(&__for_begin);
  }
  result = 0;
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

// Line 54: range 0000000016C347BA-0000000016C34886
int32_t __cdecl RockBoardExploreActivity::toScheduleBin(
        const RockBoardExploreActivity *const this,
        proto::ActivityScheduleBin *bin)
{
  std::map<unsigned int,RockBoardExploreStageData>::const_iterator __for_begin; // [rsp+10h] [rbp-40h] BYREF
  std::map<unsigned int,RockBoardExploreStageData>::const_iterator __for_end; // [rsp+18h] [rbp-38h] BYREF
  proto::RockBoardExploreScheduleBin *schedule_bin; // [rsp+20h] [rbp-30h]
  const std::map<unsigned int,RockBoardExploreStageData> *__for_range; // [rsp+28h] [rbp-28h]
  const std::pair<unsigned int const,RockBoardExploreStageData> *v7; // [rsp+30h] [rbp-20h]
  std::tuple_element<0,const std::pair<unsigned int const,RockBoardExploreStageData> >::type *_; // [rsp+38h] [rbp-18h]
  std::tuple_element<1,const std::pair<unsigned int const,RockBoardExploreStageData> >::type *stage_data; // [rsp+40h] [rbp-10h]
  proto::RockBoardExploreStageBin *stage_bin; // [rsp+48h] [rbp-8h]

  schedule_bin = proto::ActivityScheduleBin::mutable_rock_board_explore_bin(bin);
  __for_range = &this->stage_data_map_;
  __for_begin._M_node = std::map<unsigned int,RockBoardExploreStageData>::begin(&this->stage_data_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,RockBoardExploreStageData>::end(&this->stage_data_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v7 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,RockBoardExploreStageData>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,RockBoardExploreStageData>(v7);
    stage_data = (std::tuple_element<1,const std::pair<unsigned int const,RockBoardExploreStageData> >::type *)std::get<1ul,unsigned int const,RockBoardExploreStageData>(v7);
    stage_bin = proto::RockBoardExploreScheduleBin::add_stage_bin_list(schedule_bin);
    RockBoardExploreStageData::toBin(stage_data, stage_bin);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,RockBoardExploreStageData>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 65: range 0000000016C34888-0000000016C34CBD
int32_t __cdecl RockBoardExploreActivity::toClient(
        RockBoardExploreActivity *const this,
        proto::ActivityInfo *activity_info)
{
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rbx
  const data::ActivityRockBoardExploreExcelConfigMgrBase *ConfigMgr; // rdi
  const data::ActivityRockBoardExploreExcelConfigMgrBase *v7; // rdi
  common::milog::MiLogStream *v8; // rax
  uint32_t BeginTimeByOpenDay; // eax
  unsigned int val; // [rsp+18h] [rbp-88h] BYREF
  uint32_t open_day; // [rsp+1Ch] [rbp-84h]
  std::map<unsigned int,RockBoardExploreStageData>::iterator __for_begin; // [rsp+20h] [rbp-80h] BYREF
  std::map<unsigned int,RockBoardExploreStageData>::iterator __for_end; // [rsp+28h] [rbp-78h] BYREF
  proto::RockBoardExploreDetailInfo *detail_info; // [rsp+30h] [rbp-70h]
  std::map<unsigned int,RockBoardExploreStageData> *__for_range; // [rsp+38h] [rbp-68h]
  const std::pair<unsigned int const,RockBoardExploreStageData> *v17; // [rsp+40h] [rbp-60h]
  std::tuple_element<0,const std::pair<unsigned int const,RockBoardExploreStageData> >::type *stage_id; // [rsp+48h] [rbp-58h]
  std::tuple_element<1,const std::pair<unsigned int const,RockBoardExploreStageData> >::type *stage_data; // [rsp+50h] [rbp-50h]
  proto::RockBoardExploreStageData *stage_data_info; // [rsp+58h] [rbp-48h]
  const data::ActivityRockBoardExploreStageExcelConfig *stage_config_ptr; // [rsp+60h] [rbp-40h]
  const data::ActivityRockBoardExploreQuestExcelConfig *quest_config_ptr; // [rsp+68h] [rbp-38h]
  common::milog::MiLogStream v23; // [rsp+70h] [rbp-30h] BYREF

  if ( BaseActivity::toClient(this, activity_info) )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/rock_board_explore_activity.cpp",
      "toClient",
      68);
    v2 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
           &v23,
           (const char (*)[64])"[ROCK_BOARD_EXPLORE] BaseActivity::toClient fails, schedule_id:");
    v3 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &this->schedule_id_);
    v4 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v3, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
    common::milog::MiLogStream::~MiLogStream(&v23);
    return -1;
  }
  else
  {
    detail_info = proto::ActivityInfo::mutable_rock_board_explore_info(activity_info);
    __for_range = &this->stage_data_map_;
    __for_begin._M_node = std::map<unsigned int,RockBoardExploreStageData>::begin(&this->stage_data_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,RockBoardExploreStageData>::end(&this->stage_data_map_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v17 = std::_Rb_tree_iterator<std::pair<unsigned int const,RockBoardExploreStageData>>::operator*(&__for_begin);
      stage_id = std::get<0ul,unsigned int const,RockBoardExploreStageData>(v17);
      stage_data = (std::tuple_element<1,const std::pair<unsigned int const,RockBoardExploreStageData> >::type *)std::get<1ul,unsigned int const,RockBoardExploreStageData>(v17);
      stage_data_info = proto::RockBoardExploreDetailInfo::add_stage_data_list(detail_info);
      RockBoardExploreStageData::toClient(stage_data, stage_data_info);
      open_day = 0;
      ConfigMgr = RockBoardExploreActivity::getConfigMgr(this);
      if ( *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)stage_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) )
      {
        ConfigMgr = (const data::ActivityRockBoardExploreExcelConfigMgrBase *)stage_id;
        __asan_report_load4(stage_id);
      }
      stage_config_ptr = data::ActivityRockBoardExploreExcelConfigMgrBase::findActivityRockBoardExploreStageExcelConfig(
                           ConfigMgr,
                           *stage_id);
      v7 = RockBoardExploreActivity::getConfigMgr(this);
      if ( *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)stage_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) )
      {
        v7 = (const data::ActivityRockBoardExploreExcelConfigMgrBase *)stage_id;
        __asan_report_load4(stage_id);
      }
      quest_config_ptr = data::ActivityRockBoardExploreExcelConfigMgrBase::findActivityRockBoardExploreQuestExcelConfig(
                           v7,
                           *stage_id);
      if ( stage_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&stage_config_ptr->open_day >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&stage_config_ptr->open_day >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&stage_config_ptr->open_day);
        }
        open_day = stage_config_ptr->open_day;
      }
      else if ( quest_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&quest_config_ptr->open_day >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&quest_config_ptr->open_day >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&quest_config_ptr->open_day);
        }
        open_day = quest_config_ptr->open_day;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v23,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/rock_board_explore_activity.cpp",
          "toClient",
          90);
        v8 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
               &v23,
               (const char (*)[45])"[ROCK_BOARD_EXPLORE] stage_id not invaild : ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, stage_id);
        common::milog::MiLogStream::~MiLogStream(&v23);
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->schedule_id_);
      }
      BeginTimeByOpenDay = BaseActivity::getBeginTimeByOpenDay(this->schedule_id_, open_day);
      proto::RockBoardExploreStageData::set_open_time(stage_data_info, BeginTimeByOpenDay);
      std::_Rb_tree_iterator<std::pair<unsigned int const,RockBoardExploreStageData>>::operator++(&__for_begin);
    }
    return 0;
  }
};

// Line 98: range 0000000016C34CBE-0000000016C34D1B
int32_t __cdecl RockBoardExploreActivity::init(RockBoardExploreActivity *const this)
{
  if ( BaseActivity::isOpening(this, 0) && !BaseActivity::isSettled(this) )
    RockBoardExploreActivity::registerObserver(this);
  return 0;
};

// Line 108: range 0000000016C34D1C-0000000016C352D0
void __cdecl RockBoardExploreActivity::onPreStart(RockBoardExploreActivity *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rcx
  char v3; // dl
  __int64 v4; // rdx
  char v5; // dl
  __int64 v6; // rsi
  __int64 v7; // rdx
  char v8; // dl
  __int64 v9; // rsi
  __int64 v10; // rdx
  common::milog::MiLogStream *v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // rcx
  char v14; // dl
  __int64 v15; // rdx
  char v16; // dl
  __int64 v17; // rsi
  __int64 v18; // rdx
  char v19; // dl
  __int64 v20; // rsi
  __int64 v21; // rdx
  common::milog::MiLogStream *v22; // rbx
  unsigned int val; // [rsp+1Ch] [rbp-B4h] BYREF
  std::unordered_map<unsigned int,data::ActivityRockBoardExploreQuestExcelConfig>::const_iterator __for_begin_0; // [rsp+20h] [rbp-B0h] BYREF
  std::unordered_map<unsigned int,data::ActivityRockBoardExploreQuestExcelConfig>::const_iterator __for_end_0; // [rsp+28h] [rbp-A8h] BYREF
  std::unordered_map<unsigned int,data::ActivityRockBoardExploreStageExcelConfig>::const_iterator __for_begin; // [rsp+30h] [rbp-A0h] BYREF
  std::unordered_map<unsigned int,data::ActivityRockBoardExploreStageExcelConfig>::const_iterator __for_end; // [rsp+38h] [rbp-98h] BYREF
  const std::unordered_map<unsigned int,data::ActivityRockBoardExploreStageExcelConfig> *stage_map; // [rsp+40h] [rbp-90h]
  const std::unordered_map<unsigned int,data::ActivityRockBoardExploreStageExcelConfig> *__for_range; // [rsp+48h] [rbp-88h]
  const std::unordered_map<unsigned int,data::ActivityRockBoardExploreQuestExcelConfig> *quest_stage_map; // [rsp+50h] [rbp-80h]
  const std::unordered_map<unsigned int,data::ActivityRockBoardExploreQuestExcelConfig> *__for_range_0; // [rsp+58h] [rbp-78h]
  const std::pair<unsigned int const,data::ActivityRockBoardExploreQuestExcelConfig> *v32; // [rsp+60h] [rbp-70h]
  std::tuple_element<0,const std::pair<unsigned int const,data::ActivityRockBoardExploreQuestExcelConfig> >::type *stage_id_0; // [rsp+68h] [rbp-68h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivityRockBoardExploreQuestExcelConfig> >::type *stage_config_0; // [rsp+70h] [rbp-60h]
  RockBoardExploreStageData *stage_data_0; // [rsp+78h] [rbp-58h]
  const std::pair<unsigned int const,data::ActivityRockBoardExploreStageExcelConfig> *v36; // [rsp+80h] [rbp-50h]
  std::tuple_element<0,const std::pair<unsigned int const,data::ActivityRockBoardExploreStageExcelConfig> >::type *stage_id; // [rsp+88h] [rbp-48h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivityRockBoardExploreStageExcelConfig> >::type *stage_config; // [rsp+90h] [rbp-40h]
  RockBoardExploreStageData *stage_data; // [rsp+98h] [rbp-38h]
  common::milog::MiLogStream v40; // [rsp+A0h] [rbp-30h] BYREF

  std::map<unsigned int,RockBoardExploreStageData>::clear(&this->stage_data_map_);
  stage_map = &RockBoardExploreActivity::getConfigMgr(this)->activity_rock_board_explore_stage_excel_config_map;
  __for_range = stage_map;
  __for_begin._M_cur = std::unordered_map<unsigned int,data::ActivityRockBoardExploreStageExcelConfig>::begin(stage_map)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,data::ActivityRockBoardExploreStageExcelConfig>::end(stage_map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ActivityRockBoardExploreStageExcelConfig>,false>(
            &__for_begin,
            &__for_end) )
  {
    v36 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityRockBoardExploreStageExcelConfig>,false,false>::operator*(&__for_begin);
    stage_id = std::get<0ul,unsigned int const,data::ActivityRockBoardExploreStageExcelConfig>(v36);
    stage_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivityRockBoardExploreStageExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivityRockBoardExploreStageExcelConfig>(v36);
    stage_data = std::map<unsigned int,RockBoardExploreStageData>::operator[](&this->stage_data_map_, stage_id);
    v1 = ((unsigned __int8)stage_id & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)stage_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(stage_id);
    }
    v2 = *stage_id;
    v3 = *(_BYTE *)(((unsigned __int64)stage_data >> 3) + 0x7FFF8000);
    LOBYTE(v1) = v3 != 0;
    v4 = (v3 != 0) & (unsigned __int8)((char)(((unsigned __int8)stage_data & 7) + 3) >= v3);
    if ( (_BYTE)v4 )
      __asan_report_store4(stage_data, v1, v4, v2);
    stage_data->stage_id = v2;
    v5 = *(_BYTE *)(((unsigned __int64)&stage_data->is_open >> 3) + 0x7FFF8000);
    LOBYTE(v2) = v5 != 0;
    v6 = ((_BYTE)stage_data + 4) & 7;
    v7 = (v5 != 0) & (unsigned __int8)((char)v6 >= v5);
    if ( (_BYTE)v7 )
      __asan_report_store1(&stage_data->is_open, v6, v7, v2);
    stage_data->is_open = 0;
    v8 = *(_BYTE *)(((unsigned __int64)&stage_data->is_finish >> 3) + 0x7FFF8000);
    LOBYTE(v2) = v8 != 0;
    v9 = ((_BYTE)stage_data + 5) & 7;
    v10 = (v8 != 0) & (unsigned __int8)((char)v9 >= v8);
    if ( (_BYTE)v10 )
      __asan_report_store1(&stage_data->is_finish, v9, v10, v2);
    stage_data->is_finish = 0;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityRockBoardExploreStageExcelConfig>,false,false>::operator++(&__for_begin);
  }
  quest_stage_map = &RockBoardExploreActivity::getConfigMgr(this)->activity_rock_board_explore_quest_excel_config_map;
  __for_range_0 = quest_stage_map;
  __for_begin_0._M_cur = std::unordered_map<unsigned int,data::ActivityRockBoardExploreQuestExcelConfig>::begin(quest_stage_map)._M_cur;
  __for_end_0._M_cur = std::unordered_map<unsigned int,data::ActivityRockBoardExploreQuestExcelConfig>::end(__for_range_0)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ActivityRockBoardExploreQuestExcelConfig>,false>(
            &__for_begin_0,
            &__for_end_0) )
  {
    v32 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityRockBoardExploreQuestExcelConfig>,false,false>::operator*(&__for_begin_0);
    stage_id_0 = std::get<0ul,unsigned int const,data::ActivityRockBoardExploreQuestExcelConfig>(v32);
    stage_config_0 = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivityRockBoardExploreQuestExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivityRockBoardExploreQuestExcelConfig>(v32);
    __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityRockBoardExploreStageExcelConfig>,false>::__node_type *)std::map<unsigned int,RockBoardExploreStageData>::find(&this->stage_data_map_, stage_id_0)._M_node;
    __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityRockBoardExploreStageExcelConfig>,false>::__node_type *)std::map<unsigned int,RockBoardExploreStageData>::end(&this->stage_data_map_)._M_node;
    if ( std::operator!=(
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,RockBoardExploreStageData> >::_Self *)&__for_begin,
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,RockBoardExploreStageData> >::_Self *)&__for_end) )
    {
      common::milog::MiLogStream::create(
        &v40,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/rock_board_explore_activity.cpp",
        "onPreStart",
        123);
      v11 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
              &v40,
              (const char (*)[47])"[ROCK_BOARD_EXPLORE] stage_id dumplicate, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
      common::milog::MiLogStream::~MiLogStream(&v40);
    }
    else
    {
      stage_data_0 = std::map<unsigned int,RockBoardExploreStageData>::operator[](&this->stage_data_map_, stage_id_0);
      v12 = ((unsigned __int8)stage_id_0 & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)stage_id_0 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)stage_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)stage_id_0 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(stage_id_0);
      }
      v13 = *stage_id_0;
      v14 = *(_BYTE *)(((unsigned __int64)stage_data_0 >> 3) + 0x7FFF8000);
      LOBYTE(v12) = v14 != 0;
      v15 = (v14 != 0) & (unsigned __int8)((char)(((unsigned __int8)stage_data_0 & 7) + 3) >= v14);
      if ( (_BYTE)v15 )
        __asan_report_store4(stage_data_0, v12, v15, v13);
      stage_data_0->stage_id = v13;
      v16 = *(_BYTE *)(((unsigned __int64)&stage_data_0->is_open >> 3) + 0x7FFF8000);
      LOBYTE(v13) = v16 != 0;
      v17 = ((_BYTE)stage_data_0 + 4) & 7;
      v18 = (v16 != 0) & (unsigned __int8)((char)v17 >= v16);
      if ( (_BYTE)v18 )
        __asan_report_store1(&stage_data_0->is_open, v17, v18, v13);
      stage_data_0->is_open = 0;
      v19 = *(_BYTE *)(((unsigned __int64)&stage_data_0->is_finish >> 3) + 0x7FFF8000);
      LOBYTE(v13) = v19 != 0;
      v20 = ((_BYTE)stage_data_0 + 5) & 7;
      v21 = (v19 != 0) & (unsigned __int8)((char)v20 >= v19);
      if ( (_BYTE)v21 )
        __asan_report_store1(&stage_data_0->is_finish, v20, v21, v13);
      stage_data_0->is_finish = 0;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityRockBoardExploreQuestExcelConfig>,false,false>::operator++(&__for_begin_0);
  }
  common::milog::MiLogStream::create(
    &v40,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/rock_board_explore_activity.cpp",
    "onPreStart",
    131);
  v22 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
          &v40,
          (const char (*)[38])"[ROCK_BOARD_EXPLORE] onPreStart, uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &val);
  common::milog::MiLogStream::~MiLogStream(&v40);
};

// Line 135: range 0000000016C352D2-0000000016C352EC
void __cdecl RockBoardExploreActivity::onStart(RockBoardExploreActivity *const this)
{
  RockBoardExploreActivity::registerObserver(this);
};

// Line 140: range 0000000016C352EE-0000000016C35308
void __cdecl RockBoardExploreActivity::onSettle(RockBoardExploreActivity *const this)
{
  RockBoardExploreActivity::unregisterObserver(this);
};

// Line 145: range 0000000016C3530A-0000000016C35363
void __cdecl RockBoardExploreActivity::onDailyRefresh(RockBoardExploreActivity *const this)
{
  if ( BaseActivity::isOpening(this, 0) && !BaseActivity::isSettled(this) )
    BaseActivity::notifyClientData(this, 0);
};

// Line 154: range 0000000016C35364-0000000016C35384
void __cdecl RockBoardExploreActivity::onClear(RockBoardExploreActivity *const this)
{
  std::map<unsigned int,RockBoardExploreStageData>::clear(&this->stage_data_map_);
};

// Line 159: range 0000000016C35386-0000000016C356A6
void __cdecl RockBoardExploreActivity::registerObserver(RockBoardExploreActivity *const this)
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
  *(_QWORD *)(v1 + 8) = "2 32 16 12 this_ptr:160 64 16 12 this_wtr:161";
  *(_QWORD *)(v1 + 16) = RockBoardExploreActivity::registerObserver;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  std::enable_shared_from_this<BaseActivity>::shared_from_this(&v6);
  std::dynamic_pointer_cast<RockBoardExploreActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)(v1 + 32));
  std::shared_ptr<BaseActivity>::~shared_ptr((std::shared_ptr<BaseActivity> *const)&v6);
  std::weak_ptr<RockBoardExploreActivity>::weak_ptr<RockBoardExploreActivity,void>(
    (std::weak_ptr<RockBoardExploreActivity> *const)(v1 + 64),
    (const std::shared_ptr<RockBoardExploreActivity> *)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  EventComp = Player::getEventComp(this->player_);
  std::weak_ptr<RockBoardExploreActivity>::weak_ptr(
    (std::weak_ptr<RockBoardExploreActivity> *const)&v6,
    (const std::weak_ptr<RockBoardExploreActivity> *)(v1 + 64));
  PlayerEventComp::tryRegisterObserver<RockBoardExploreActivity,GroupBundleFinishEvent>(
    EventComp,
    (std::weak_ptr<RockBoardExploreActivity> *)&v6,
    (void (*)(RockBoardExploreActivity *, const GroupBundleFinishEvent *))RockBoardExploreActivity::onGroupBundleFinishEvent,
    0LL);
  std::weak_ptr<RockBoardExploreActivity>::~weak_ptr((std::weak_ptr<RockBoardExploreActivity> *const)&v6);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  cb_ptr = Player::getEventComp(this->player_);
  std::weak_ptr<RockBoardExploreActivity>::weak_ptr(
    (std::weak_ptr<RockBoardExploreActivity> *const)&v6,
    (const std::weak_ptr<RockBoardExploreActivity> *)(v1 + 64));
  PlayerEventComp::tryRegisterObserver<RockBoardExploreActivity,FinishParentQuestEvent>(
    cb_ptr,
    (std::weak_ptr<RockBoardExploreActivity> *)&v6,
    (void (*)(RockBoardExploreActivity *, const FinishParentQuestEvent *))RockBoardExploreActivity::onParentQuestFinish,
    0LL);
  std::weak_ptr<RockBoardExploreActivity>::~weak_ptr((std::weak_ptr<RockBoardExploreActivity> *const)&v6);
  std::weak_ptr<RockBoardExploreActivity>::~weak_ptr((std::weak_ptr<RockBoardExploreActivity> *const)(v1 + 64));
  std::shared_ptr<RockBoardExploreActivity>::~shared_ptr((std::shared_ptr<RockBoardExploreActivity> *const)(v1 + 32));
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

// Line 167: range 0000000016C356A8-0000000016C357AC
void __cdecl RockBoardExploreActivity::unregisterObserver(RockBoardExploreActivity *const this)
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
        __asan_report_load8(&this->player_);
      EventComp = Player::getEventComp(this->player_);
      PlayerEventComp::unregisterObserver(EventComp, obs_wtr);
    }
    std::_Rb_tree_iterator<std::pair<std::type_index const,std::weak_ptr<Observer>>>::operator++(&__for_begin);
  }
  std::map<std::type_index,std::weak_ptr<Observer>>::clear(&this->event_observer_map_);
};

// Line 179: range 0000000016C357AE-0000000016C35D2C
int32_t __cdecl RockBoardExploreActivity::execAction(
        RockBoardExploreActivity *const this,
        const data::NewActivityExec *action_exec)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rbx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  int v9; // r15d
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v10; // rax
  _DWORD *v11; // rdx
  unsigned __int64 *p_val; // rsi
  common::milog::MiLogStream *v13; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,RockBoardExploreStageData> >::pointer v14; // rdx
  char v15; // cl
  __int64 v16; // rcx
  int32_t result; // eax
  std::vector<unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-110h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+28h] [rbp-108h] BYREF
  unsigned __int64 val; // [rsp+30h] [rbp-100h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-F8h]
  common::milog::MiLogStream v22; // [rsp+40h] [rbp-F0h] BYREF
  char v23[208]; // [rsp+60h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 12 stage_id:195 64 8 8 iter:198 96 24 16 stage_id_vec:189";
  *(_QWORD *)(v3 + 16) = RockBoardExploreActivity::execAction;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218103808;
  v5[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&action_exec->type);
  }
  if ( action_exec->type == NEW_ACTIVITY_ACTION_OPEN_ROCK_BOARD_EXPLORE_STAGE )
  {
    if ( std::vector<std::string>::size(&action_exec->param) )
    {
      std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 96));
      if ( common::tools::StringUtils::strVecToNumVec<unsigned int>(
             &action_exec->param,
             (std::vector<unsigned int> *)(v3 + 96)) )
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/rock_board_explore_activity.cpp",
          "execAction",
          192);
        v8 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
               &v22,
               (const char (*)[24])"strVecToNumVec falied: ");
        common::milog::MiLogStream::operator<<<std::string>(v8, &action_exec->param);
        common::milog::MiLogStream::~MiLogStream(&v22);
        v2 = -1;
        v9 = 0;
      }
      else
      {
        __for_range = (std::vector<unsigned int> *)(v3 + 96);
        __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 96))._M_current;
        __for_end._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v3 + 96))._M_current;
        while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
        {
          v10 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
          v11 = v10;
          if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v10);
          }
          *(_DWORD *)(v3 + 48) = *v11;
          *(std::map<unsigned int,RockBoardExploreStageData>::iterator *)(v3 + 64) = std::map<unsigned int,RockBoardExploreStageData>::find(
                                                                                       &this->stage_data_map_,
                                                                                       (const std::map<unsigned int,RockBoardExploreStageData>::key_type *)(v3 + 48));
          val = (unsigned __int64)std::map<unsigned int,RockBoardExploreStageData>::end(&this->stage_data_map_)._M_node;
          p_val = &val;
          if ( std::operator==(
                 (const std::_Rb_tree_iterator<std::pair<unsigned int const,RockBoardExploreStageData> >::_Self *)(v3 + 64),
                 (const std::_Rb_tree_iterator<std::pair<unsigned int const,RockBoardExploreStageData> >::_Self *)&val) )
          {
            common::milog::MiLogStream::create(
              &v22,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/rock_board_explore_activity.cpp",
              "execAction",
              201);
            v13 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                    &v22,
                    (const char (*)[45])"[ROCK_BOARD_EXPLORE] stage_id not invaild : ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 48));
            common::milog::MiLogStream::~MiLogStream(&v22);
            v2 = -1;
            v9 = 0;
            goto LABEL_21;
          }
          v14 = std::_Rb_tree_iterator<std::pair<unsigned int const,RockBoardExploreStageData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,RockBoardExploreStageData> > *const)(v3 + 64));
          v15 = *(_BYTE *)(((unsigned __int64)&v14->second.is_open >> 3) + 0x7FFF8000);
          LOBYTE(p_val) = v15 != 0;
          v16 = (v15 != 0) & (unsigned __int8)((((unsigned __int8)v14 + 8) & 7) >= v15);
          if ( (_BYTE)v16 )
            __asan_report_store1(&v14->second.is_open, p_val, v14, v16);
          v14->second.is_open = 1;
          __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
        }
        BaseActivity::notifyClientData(this, 0);
        v9 = 1;
      }
LABEL_21:
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 96));
      if ( v9 )
        v2 = 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/rock_board_explore_activity.cpp",
        "execAction",
        186);
      v6 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
             &v22,
             (const char (*)[19])"action param size ");
      val = std::vector<std::string>::size(&action_exec->param);
      v7 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v6, &val);
      common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v7, (const char (*)[12])off_25EFA1C0);
      common::milog::MiLogStream::~MiLogStream(&v22);
      v2 = -1;
    }
  }
  else
  {
    v2 = BaseActivity::execAction(this, action_exec);
  }
  result = v2;
  if ( v23 == (char *)v3 )
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

// Line 216: range 0000000016C35D2E-0000000016C3617B
bool __cdecl RockBoardExploreActivity::checkCondIsMeet(
        RockBoardExploreActivity *const this,
        const data::NewActivityCond *cond)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  bool result; // al
  __gnu_cxx::__normal_iterator<int const*,std::vector<int> >::reference v9; // rax
  _DWORD *v10; // rdx
  common::milog::MiLogStream *v11; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,RockBoardExploreStageData> >::pointer v12; // rdx
  bool *p_is_finish; // rax
  std::vector<int>::const_iterator __for_begin; // [rsp+10h] [rbp-C0h] BYREF
  std::vector<int>::const_iterator __for_end; // [rsp+18h] [rbp-B8h] BYREF
  unsigned __int64 val; // [rsp+20h] [rbp-B0h] BYREF
  const std::vector<int> *__for_range; // [rsp+28h] [rbp-A8h]
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-A0h] BYREF
  char v19[128]; // [rsp+50h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 stage_id:226 64 8 8 iter:229";
  *(_QWORD *)(v2 + 16) = RockBoardExploreActivity::checkCondIsMeet;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&cond->type);
  }
  if ( cond->type == NEW_ACTIVITY_COND_FINISH_ROCK_BOARD_EXPLORE_STAGE )
  {
    if ( std::vector<int>::size(&cond->param) )
    {
      __for_range = &cond->param;
      __for_begin._M_current = std::vector<int>::begin(&cond->param)._M_current;
      __for_end._M_current = std::vector<int>::end(&cond->param)._M_current;
      while ( __gnu_cxx::operator!=<int const*,std::vector<int>>(&__for_begin, &__for_end) )
      {
        v9 = __gnu_cxx::__normal_iterator<int const*,std::vector<int>>::operator*(&__for_begin);
        v10 = v9;
        if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v9);
        }
        *(_DWORD *)(v2 + 48) = *v10;
        *(std::map<unsigned int,RockBoardExploreStageData>::iterator *)(v2 + 64) = std::map<unsigned int,RockBoardExploreStageData>::find(
                                                                                     &this->stage_data_map_,
                                                                                     (const std::map<unsigned int,RockBoardExploreStageData>::key_type *)(v2 + 48));
        val = (unsigned __int64)std::map<unsigned int,RockBoardExploreStageData>::end(&this->stage_data_map_)._M_node;
        if ( std::operator==(
               (const std::_Rb_tree_iterator<std::pair<unsigned int const,RockBoardExploreStageData> >::_Self *)(v2 + 64),
               (const std::_Rb_tree_iterator<std::pair<unsigned int const,RockBoardExploreStageData> >::_Self *)&val) )
        {
          common::milog::MiLogStream::create(
            &v18,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/rock_board_explore_activity.cpp",
            "checkCondIsMeet",
            232);
          v11 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                  &v18,
                  (const char (*)[45])"[ROCK_BOARD_EXPLORE] stage_id not invaild : ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 48));
          common::milog::MiLogStream::~MiLogStream(&v18);
          result = 0;
          goto LABEL_22;
        }
        v12 = std::_Rb_tree_iterator<std::pair<unsigned int const,RockBoardExploreStageData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,RockBoardExploreStageData> > *const)(v2 + 64));
        p_is_finish = &v12->second.is_finish;
        if ( *(_BYTE *)(((unsigned __int64)p_is_finish >> 3) + 0x7FFF8000) != 0
          && ((unsigned __int8)p_is_finish & 7) >= *(_BYTE *)(((unsigned __int64)p_is_finish >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(p_is_finish);
        }
        if ( !v12->second.is_finish )
        {
          result = 0;
          goto LABEL_22;
        }
        __gnu_cxx::__normal_iterator<int const*,std::vector<int>>::operator++(&__for_begin);
      }
      result = 1;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/rock_board_explore_activity.cpp",
        "checkCondIsMeet",
        223);
      v5 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
             &v18,
             (const char (*)[32])"[ROCK_BOARD_EXPLORE]cond_type: ");
      v6 = common::milog::MiLogStream::operator<<<data::NewActivityCondType,(data::NewActivityCondType*)0>(
             v5,
             &cond->type);
      v7 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
             v6,
             (const char (*)[21])" param num invalid: ");
      val = std::vector<int>::size(&cond->param);
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v7, &val);
      common::milog::MiLogStream::~MiLogStream(&v18);
      result = 0;
    }
  }
  else
  {
    result = BaseActivity::checkCondIsMeet(this, cond);
  }
LABEL_22:
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

// Line 249: range 0000000016C3617C-0000000016C361CE
const ActivityRockBoardExploreExcelConfigMgr *__cdecl RockBoardExploreActivity::getConfigMgr(
        const RockBoardExploreActivity *const this)
{
  ActivityRockBoardExploreExcelConfigMgr *p_activity_rock_board_explore_config_mgr; // rbx
  std::shared_ptr<Config> v3[2]; // [rsp+10h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v3);
  p_activity_rock_board_explore_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v3)->design_config.txt_config_mgr.activity_rock_board_explore_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(v3);
  return p_activity_rock_board_explore_config_mgr;
};

// Line 254: range 0000000016C361D0-0000000016C3646B
_BOOL8 __fastcall RockBoardExploreActivity::isOpenByStageId(
        const RockBoardExploreActivity *const this,
        uint32_t stage_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  _BOOL8 result; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,RockBoardExploreStageData> >::pointer v9; // rax
  bool *p_is_open; // rax
  unsigned int val; // [rsp+1Ch] [rbp-B4h] BYREF
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,RockBoardExploreStageData> >::_Self __y; // [rsp+20h] [rbp-B0h] BYREF
  const RockBoardExploreStageData *stage_data; // [rsp+28h] [rbp-A8h]
  common::milog::MiLogStream v14; // [rsp+30h] [rbp-A0h] BYREF
  char v15[128]; // [rsp+50h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 stage_id:253 64 8 8 iter:255";
  *(_QWORD *)(v2 + 16) = RockBoardExploreActivity::isOpenByStageId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = stage_id;
  *(std::map<unsigned int,RockBoardExploreStageData>::const_iterator *)(v2 + 64) = std::map<unsigned int,RockBoardExploreStageData>::find(
                                                                                     &this->stage_data_map_,
                                                                                     (const std::map<unsigned int,RockBoardExploreStageData>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,RockBoardExploreStageData>::end(&this->stage_data_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,RockBoardExploreStageData> >::_Self *)(v2 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/rock_board_explore_activity.cpp",
      "isOpenByStageId",
      258);
    v5 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
           &v14,
           (const char (*)[55])"[ROCK_BOARD_EXPLORE] find stage data failed, stage_id:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v6, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v14);
    result = 0LL;
  }
  else
  {
    v9 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,RockBoardExploreStageData>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,RockBoardExploreStageData> > *const)(v2 + 64));
    stage_data = &v9->second;
    p_is_open = &v9->second.is_open;
    if ( *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_open & 7) >= *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(p_is_open);
    }
    result = stage_data->is_open;
  }
  if ( v15 == (char *)v2 )
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

// Line 266: range 0000000016C3646C-0000000016C3670F
__int64 __fastcall RockBoardExploreActivity::preCheck(RockBoardExploreActivity *const this, uint32_t stage_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  __int64 result; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream v9; // [rsp+10h] [rbp-80h] BYREF
  char v10[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 stage_id:265";
  *(_QWORD *)(v2 + 16) = RockBoardExploreActivity::preCheck;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = stage_id;
  if ( !BaseActivity::isOpening(this, 0) || BaseActivity::isSettled(this) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/rock_board_explore_activity.cpp",
      "preCheck",
      270);
    common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
      &v9,
      (const char (*)[45])"[ROCK_BOARD_EXPLORE] activity is not opening");
    common::milog::MiLogStream::~MiLogStream(&v9);
    result = 0xFFFFFFFFLL;
  }
  else if ( *(_DWORD *)(v2 + 32) )
  {
    if ( !RockBoardExploreActivity::isOpenByStageId(this, *(_DWORD *)(v2 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v9,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/rock_board_explore_activity.cpp",
        "preCheck",
        280);
      v8 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
             &v9,
             (const char (*)[62])"[ROCK_BOARD_EXPLORE] finish unexpect group bundle, stage_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v9);
      result = 0xFFFFFFFFLL;
    }
    else
    {
      result = 0LL;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/rock_board_explore_activity.cpp",
      "preCheck",
      275);
    v7 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
           &v9,
           (const char (*)[60])"[ROCK_BOARD_EXPLORE] finish others group bundle, stage_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v9);
    result = 0xFFFFFFFFLL;
  }
  if ( v10 == (char *)v2 )
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

// Line 287: range 0000000016C36710-0000000016C36F32
void __cdecl RockBoardExploreActivity::onGroupBundleFinishEvent(
        RockBoardExploreActivity *const this,
        const GroupBundleFinishEvent *event)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const ActivityRockBoardExploreExcelConfigMgr *ConfigMgr; // rcx
  const ActivityRockBoardExploreExcelConfigMgr *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rbx
  std::_Rb_tree_iterator<std::pair<unsigned int const,RockBoardExploreStageData> >::pointer v11; // rax
  __int64 v12; // rcx
  bool *p_is_finish; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  PlayerItemComp *ItemComp; // rdi
  char v17; // dl
  __int64 v18; // rsi
  __int64 v19; // rdx
  PlayerEventComp *EventComp; // r14
  unsigned int val; // [rsp+10h] [rbp-130h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,RockBoardExploreStageData> >::_Self __y; // [rsp+18h] [rbp-128h] BYREF
  const data::ActivityRockBoardExploreStageExcelConfig *stage_config_ptr; // [rsp+20h] [rbp-120h]
  RockBoardExploreStageData *stage_data; // [rsp+28h] [rbp-118h]
  std::shared_ptr<RockBoardExploreFinishStageEvent> __r; // [rsp+30h] [rbp-110h] BYREF
  std::shared_ptr<BaseEvent> p_event_ptr; // [rsp+40h] [rbp-100h] BYREF
  common::milog::MiLogStream v29; // [rsp+50h] [rbp-F0h] BYREF
  char v30[208]; // [rsp+70h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 12 stage_id:288 64 8 8 iter:299 96 24 10 reason:314";
  *(_QWORD *)(v2 + 16) = RockBoardExploreActivity::onGroupBundleFinishEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  ConfigMgr = RockBoardExploreActivity::getConfigMgr(this);
  if ( *(_BYTE *)(((unsigned __int64)&event->bundle_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->bundle_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->bundle_id);
  }
  *(_DWORD *)(v2 + 48) = ActivityRockBoardExploreExcelConfigMgr::findStageIdByGroupBundleId(ConfigMgr, event->bundle_id);
  if ( !(unsigned int)RockBoardExploreActivity::preCheck(this, *(_DWORD *)(v2 + 48)) )
  {
    v6 = RockBoardExploreActivity::getConfigMgr(this);
    stage_config_ptr = data::ActivityRockBoardExploreExcelConfigMgrBase::findActivityRockBoardExploreStageExcelConfig(
                         v6,
                         *(_DWORD *)(v2 + 48));
    if ( !stage_config_ptr )
    {
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/rock_board_explore_activity.cpp",
        "onGroupBundleFinishEvent",
        296);
      v7 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
             &v29,
             (const char (*)[45])"[ROCK_BOARD_EXPLORE] stage_id not invaild : ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v29);
      goto LABEL_35;
    }
    *(std::map<unsigned int,RockBoardExploreStageData>::iterator *)(v2 + 64) = std::map<unsigned int,RockBoardExploreStageData>::find(
                                                                                 &this->stage_data_map_,
                                                                                 (const std::map<unsigned int,RockBoardExploreStageData>::key_type *)(v2 + 48));
    __y._M_node = std::map<unsigned int,RockBoardExploreStageData>::end(&this->stage_data_map_)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,RockBoardExploreStageData> >::_Self *)(v2 + 64),
           &__y) )
    {
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/rock_board_explore_activity.cpp",
        "onGroupBundleFinishEvent",
        302);
      v8 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
             &v29,
             (const char (*)[55])"[ROCK_BOARD_EXPLORE] find stage data failed, stage_id:");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
      v10 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v9, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
LABEL_29:
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
      common::milog::MiLogStream::~MiLogStream(&v29);
      goto LABEL_35;
    }
    v11 = std::_Rb_tree_iterator<std::pair<unsigned int const,RockBoardExploreStageData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,RockBoardExploreStageData> > *const)(v2 + 64));
    stage_data = &v11->second;
    p_is_finish = &v11->second.is_finish;
    if ( *(_BYTE *)(((unsigned __int64)p_is_finish >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_finish & 7) >= *(_BYTE *)(((unsigned __int64)p_is_finish >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(p_is_finish);
    }
    if ( stage_data->is_finish )
    {
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/rock_board_explore_activity.cpp",
        "onGroupBundleFinishEvent",
        308);
      v14 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
              &v29,
              (const char (*)[48])"[ROCK_BOARD_EXPLORE] stage has finsh, stage_id:");
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v2 + 48));
      v10 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v15, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      goto LABEL_29;
    }
    if ( *(_BYTE *)(((unsigned __int64)&stage_config_ptr->drop_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)stage_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&stage_config_ptr->drop_id >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(&stage_config_ptr->drop_id);
    }
    if ( stage_config_ptr->drop_id )
    {
      ActionReason::ActionReason(
        (ActionReason *const)(v2 + 96),
        ACTION_REASON_ROCK_BOARD_EXPLORE_REWARD,
        ITEM_LIMIT_ACTIVITY_ROCK_BOARD_EXPLORE);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      ItemComp = Player::getItemComp(this->player_);
      if ( *(_BYTE *)(((unsigned __int64)&stage_config_ptr->drop_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)stage_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&stage_config_ptr->drop_id >> 3)
                                                                        + 0x7FFF8000) )
      {
        ItemComp = (PlayerItemComp *)&stage_config_ptr->drop_id;
        __asan_report_load4(&stage_config_ptr->drop_id);
      }
      if ( PlayerItemComp::grantDropItemsWithStackLimit(
             ItemComp,
             stage_config_ptr->drop_id,
             1u,
             (const ActionReason *)(v2 + 96),
             0LL) )
      {
        common::milog::MiLogStream::create(
          &v29,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/rock_board_explore_activity.cpp",
          "onGroupBundleFinishEvent",
          318);
        v10 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
                &v29,
                (const char (*)[61])"[ROCK_BOARD_EXPLORE] addItemBatchWithStackLimit failed, uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        goto LABEL_29;
      }
    }
    v17 = *(_BYTE *)(((unsigned __int64)&stage_data->is_finish >> 3) + 0x7FFF8000);
    LOBYTE(v12) = v17 != 0;
    v18 = ((_BYTE)stage_data + 5) & 7;
    v19 = (v17 != 0) & (unsigned __int8)((char)v18 >= v17);
    if ( (_BYTE)v19 )
      __asan_report_store1(&stage_data->is_finish, v18, v19, v12);
    stage_data->is_finish = 1;
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    EventComp = Player::getEventComp(this->player_);
    common::tools::perf::make_shared<RockBoardExploreFinishStageEvent,unsigned int &>(
      (unsigned int *)&__r,
      (unsigned int *)(v2 + 48));
    std::shared_ptr<BaseEvent>::shared_ptr<RockBoardExploreFinishStageEvent,void>(&p_event_ptr, &__r);
    PlayerEventComp::notifyEvent(EventComp, &p_event_ptr);
    std::shared_ptr<BaseEvent>::~shared_ptr(&p_event_ptr);
    std::shared_ptr<RockBoardExploreFinishStageEvent>::~shared_ptr(&__r);
    BaseActivity::notifyClientData(this, 0);
    BaseActivity::updateAllConds(this);
  }
LABEL_35:
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

// Line 330: range 0000000016C36F34-0000000016C373A8
void __cdecl RockBoardExploreActivity::onParentQuestFinish(
        RockBoardExploreActivity *const this,
        const FinishParentQuestEvent *event)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const ActivityRockBoardExploreExcelConfigMgr *ConfigMgr; // rcx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r13
  std::_Rb_tree_iterator<std::pair<unsigned int const,RockBoardExploreStageData> >::pointer v9; // rax
  __int64 v10; // rcx
  bool *p_is_finish; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  char v14; // dl
  __int64 v15; // rsi
  __int64 v16; // rdx
  unsigned int val; // [rsp+1Ch] [rbp-B4h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,RockBoardExploreStageData> >::_Self __y; // [rsp+20h] [rbp-B0h] BYREF
  RockBoardExploreStageData *stage_data; // [rsp+28h] [rbp-A8h]
  common::milog::MiLogStream v20; // [rsp+30h] [rbp-A0h] BYREF
  char v21[128]; // [rsp+50h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 stage_id:331 64 8 8 iter:336";
  *(_QWORD *)(v2 + 16) = RockBoardExploreActivity::onParentQuestFinish;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  ConfigMgr = RockBoardExploreActivity::getConfigMgr(this);
  if ( *(_BYTE *)(((unsigned __int64)&event->parent_quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->parent_quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->parent_quest_id);
  }
  *(_DWORD *)(v2 + 48) = ActivityRockBoardExploreExcelConfigMgr::findStageIdByParentQuestId(
                           ConfigMgr,
                           event->parent_quest_id);
  if ( !(unsigned int)RockBoardExploreActivity::preCheck(this, *(_DWORD *)(v2 + 48)) )
  {
    *(std::map<unsigned int,RockBoardExploreStageData>::iterator *)(v2 + 64) = std::map<unsigned int,RockBoardExploreStageData>::find(
                                                                                 &this->stage_data_map_,
                                                                                 (const std::map<unsigned int,RockBoardExploreStageData>::key_type *)(v2 + 48));
    __y._M_node = std::map<unsigned int,RockBoardExploreStageData>::end(&this->stage_data_map_)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,RockBoardExploreStageData> >::_Self *)(v2 + 64),
           &__y) )
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/rock_board_explore_activity.cpp",
        "onParentQuestFinish",
        339);
      v6 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
             &v20,
             (const char (*)[55])"[ROCK_BOARD_EXPLORE] find stage data failed, stage_id:");
      v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 48));
      v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v7, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
LABEL_10:
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
      common::milog::MiLogStream::~MiLogStream(&v20);
      goto LABEL_20;
    }
    v9 = std::_Rb_tree_iterator<std::pair<unsigned int const,RockBoardExploreStageData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,RockBoardExploreStageData> > *const)(v2 + 64));
    stage_data = &v9->second;
    p_is_finish = &v9->second.is_finish;
    if ( *(_BYTE *)(((unsigned __int64)p_is_finish >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_finish & 7) >= *(_BYTE *)(((unsigned __int64)p_is_finish >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(p_is_finish);
    }
    if ( stage_data->is_finish )
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/rock_board_explore_activity.cpp",
        "onParentQuestFinish",
        345);
      v12 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
              &v20,
              (const char (*)[48])"[ROCK_BOARD_EXPLORE] stage has finsh, stage_id:");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 48));
      v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v13, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      goto LABEL_10;
    }
    v14 = *(_BYTE *)(((unsigned __int64)&stage_data->is_finish >> 3) + 0x7FFF8000);
    LOBYTE(v10) = v14 != 0;
    v15 = ((_BYTE)stage_data + 5) & 7;
    v16 = (v14 != 0) & (unsigned __int8)((char)v15 >= v14);
    if ( (_BYTE)v16 )
      __asan_report_store1(&stage_data->is_finish, v15, v16, v10);
    stage_data->is_finish = 1;
    BaseActivity::notifyClientData(this, 0);
    BaseActivity::updateAllConds(this);
  }
LABEL_20:
  if ( v21 == (char *)v2 )
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

// Line 355: range 0000000016C373AA-0000000016C37891
__int64 __fastcall RockBoardExploreActivity::openStageByGm(RockBoardExploreActivity *const this, uint32_t stage_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,RockBoardExploreStageData> >::pointer v9; // rax
  __int64 v10; // rcx
  bool *p_is_open; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  char v14; // dl
  __int64 v15; // rsi
  __int64 v16; // rdx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // r13
  unsigned int val; // [rsp+1Ch] [rbp-B4h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,RockBoardExploreStageData> >::_Self __y; // [rsp+20h] [rbp-B0h] BYREF
  RockBoardExploreStageData *stage_data; // [rsp+28h] [rbp-A8h]
  common::milog::MiLogStream v23; // [rsp+30h] [rbp-A0h] BYREF
  char v24[128]; // [rsp+50h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 stage_id:354 64 8 8 iter:356";
  *(_QWORD *)(v2 + 16) = RockBoardExploreActivity::openStageByGm;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = stage_id;
  *(std::map<unsigned int,RockBoardExploreStageData>::iterator *)(v2 + 64) = std::map<unsigned int,RockBoardExploreStageData>::find(
                                                                               &this->stage_data_map_,
                                                                               (const std::map<unsigned int,RockBoardExploreStageData>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,RockBoardExploreStageData>::end(&this->stage_data_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,RockBoardExploreStageData> >::_Self *)(v2 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/rock_board_explore_activity.cpp",
      "openStageByGm",
      359);
    v5 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
           &v23,
           (const char (*)[55])"[ROCK_BOARD_EXPLORE] find stage data failed, stage_id:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v6, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
LABEL_7:
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v23);
    result = 0xFFFFFFFFLL;
    goto LABEL_19;
  }
  v9 = std::_Rb_tree_iterator<std::pair<unsigned int const,RockBoardExploreStageData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,RockBoardExploreStageData> > *const)(v2 + 64));
  stage_data = &v9->second;
  p_is_open = &v9->second.is_open;
  if ( *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)p_is_open & 7) >= *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(p_is_open);
  }
  if ( stage_data->is_open )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/rock_board_explore_activity.cpp",
      "openStageByGm",
      365);
    v12 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
            &v23,
            (const char (*)[47])"[ROCK_BOARD_EXPLORE] stage has open, stage_id:");
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v13, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    goto LABEL_7;
  }
  v14 = *(_BYTE *)(((unsigned __int64)&stage_data->is_open >> 3) + 0x7FFF8000);
  LOBYTE(v10) = v14 != 0;
  v15 = ((_BYTE)stage_data + 4) & 7;
  v16 = (v14 != 0) & (unsigned __int8)((char)v15 >= v14);
  if ( (_BYTE)v16 )
    __asan_report_store1(&stage_data->is_open, v15, v16, v10);
  stage_data->is_open = 1;
  common::milog::MiLogStream::create(
    &v23,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/rock_board_explore_activity.cpp",
    "openStageByGm",
    369);
  v17 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
          &v23,
          (const char (*)[36])"[ROCK_BOARD_EXPLORE] open stage_id:");
  v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v2 + 48));
  v19 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v18, (const char (*)[6])" uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &val);
  common::milog::MiLogStream::~MiLogStream(&v23);
  BaseActivity::notifyClientData(this, 0);
  result = 0LL;
LABEL_19:
  if ( v24 == (char *)v2 )
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

// Line 375: range 0000000016C37892-0000000016C37D88
__int64 __fastcall RockBoardExploreActivity::finishStageByGm(RockBoardExploreActivity *const this, uint32_t stage_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,RockBoardExploreStageData> >::pointer v9; // rax
  __int64 v10; // rcx
  bool *p_is_finish; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  char v14; // dl
  __int64 v15; // rsi
  __int64 v16; // rdx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // r13
  unsigned int val; // [rsp+1Ch] [rbp-B4h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,RockBoardExploreStageData> >::_Self __y; // [rsp+20h] [rbp-B0h] BYREF
  RockBoardExploreStageData *stage_data; // [rsp+28h] [rbp-A8h]
  common::milog::MiLogStream v23; // [rsp+30h] [rbp-A0h] BYREF
  char v24[128]; // [rsp+50h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 stage_id:374 64 8 8 iter:376";
  *(_QWORD *)(v2 + 16) = RockBoardExploreActivity::finishStageByGm;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = stage_id;
  *(std::map<unsigned int,RockBoardExploreStageData>::iterator *)(v2 + 64) = std::map<unsigned int,RockBoardExploreStageData>::find(
                                                                               &this->stage_data_map_,
                                                                               (const std::map<unsigned int,RockBoardExploreStageData>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,RockBoardExploreStageData>::end(&this->stage_data_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,RockBoardExploreStageData> >::_Self *)(v2 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/rock_board_explore_activity.cpp",
      "finishStageByGm",
      379);
    v5 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
           &v23,
           (const char (*)[55])"[ROCK_BOARD_EXPLORE] find stage data failed, stage_id:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v6, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
LABEL_7:
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v23);
    result = 0xFFFFFFFFLL;
    goto LABEL_19;
  }
  v9 = std::_Rb_tree_iterator<std::pair<unsigned int const,RockBoardExploreStageData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,RockBoardExploreStageData> > *const)(v2 + 64));
  stage_data = &v9->second;
  p_is_finish = &v9->second.is_finish;
  if ( *(_BYTE *)(((unsigned __int64)p_is_finish >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)p_is_finish & 7) >= *(_BYTE *)(((unsigned __int64)p_is_finish >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(p_is_finish);
  }
  if ( stage_data->is_finish )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/rock_board_explore_activity.cpp",
      "finishStageByGm",
      385);
    v12 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
            &v23,
            (const char (*)[48])"[ROCK_BOARD_EXPLORE] stage has finsh, stage_id:");
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v13, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    goto LABEL_7;
  }
  v14 = *(_BYTE *)(((unsigned __int64)&stage_data->is_finish >> 3) + 0x7FFF8000);
  LOBYTE(v10) = v14 != 0;
  v15 = ((_BYTE)stage_data + 5) & 7;
  v16 = (v14 != 0) & (unsigned __int8)((char)v15 >= v14);
  if ( (_BYTE)v16 )
    __asan_report_store1(&stage_data->is_finish, v15, v16, v10);
  stage_data->is_finish = 1;
  common::milog::MiLogStream::create(
    &v23,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/rock_board_explore_activity.cpp",
    "finishStageByGm",
    389);
  v17 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
          &v23,
          (const char (*)[37])"[ROCK_BOARD_EXPLORE] finsh stage_id:");
  v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v2 + 48));
  v19 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v18, (const char (*)[6])" uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &val);
  common::milog::MiLogStream::~MiLogStream(&v23);
  BaseActivity::notifyClientData(this, 0);
  BaseActivity::updateAllConds(this);
  result = 0LL;
LABEL_19:
  if ( v24 == (char *)v2 )
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

// Line 396: range 0000000016C37D8A-0000000016C3829A
int32_t __cdecl RockBoardExploreActivity::resetDataByGm(RockBoardExploreActivity *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rcx
  char v3; // dl
  __int64 v4; // rdx
  char v5; // dl
  __int64 v6; // rsi
  __int64 v7; // rdx
  char v8; // dl
  __int64 v9; // rsi
  __int64 v10; // rdx
  common::milog::MiLogStream *v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // rcx
  char v14; // dl
  __int64 v15; // rdx
  char v16; // dl
  __int64 v17; // rsi
  __int64 v18; // rdx
  char v19; // dl
  __int64 v20; // rsi
  __int64 v21; // rdx
  unsigned int val; // [rsp+1Ch] [rbp-B4h] BYREF
  std::unordered_map<unsigned int,data::ActivityRockBoardExploreQuestExcelConfig>::const_iterator __for_begin_0; // [rsp+20h] [rbp-B0h] BYREF
  std::unordered_map<unsigned int,data::ActivityRockBoardExploreQuestExcelConfig>::const_iterator __for_end_0; // [rsp+28h] [rbp-A8h] BYREF
  std::unordered_map<unsigned int,data::ActivityRockBoardExploreStageExcelConfig>::const_iterator __for_begin; // [rsp+30h] [rbp-A0h] BYREF
  std::unordered_map<unsigned int,data::ActivityRockBoardExploreStageExcelConfig>::const_iterator __for_end; // [rsp+38h] [rbp-98h] BYREF
  const std::unordered_map<unsigned int,data::ActivityRockBoardExploreStageExcelConfig> *stage_map; // [rsp+40h] [rbp-90h]
  const std::unordered_map<unsigned int,data::ActivityRockBoardExploreStageExcelConfig> *__for_range; // [rsp+48h] [rbp-88h]
  const std::unordered_map<unsigned int,data::ActivityRockBoardExploreQuestExcelConfig> *quest_stage_map; // [rsp+50h] [rbp-80h]
  const std::unordered_map<unsigned int,data::ActivityRockBoardExploreQuestExcelConfig> *__for_range_0; // [rsp+58h] [rbp-78h]
  const std::pair<unsigned int const,data::ActivityRockBoardExploreQuestExcelConfig> *v32; // [rsp+60h] [rbp-70h]
  std::tuple_element<0,const std::pair<unsigned int const,data::ActivityRockBoardExploreQuestExcelConfig> >::type *stage_id_0; // [rsp+68h] [rbp-68h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivityRockBoardExploreQuestExcelConfig> >::type *stage_config_0; // [rsp+70h] [rbp-60h]
  RockBoardExploreStageData *stage_data_0; // [rsp+78h] [rbp-58h]
  const std::pair<unsigned int const,data::ActivityRockBoardExploreStageExcelConfig> *v36; // [rsp+80h] [rbp-50h]
  std::tuple_element<0,const std::pair<unsigned int const,data::ActivityRockBoardExploreStageExcelConfig> >::type *stage_id; // [rsp+88h] [rbp-48h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivityRockBoardExploreStageExcelConfig> >::type *stage_config; // [rsp+90h] [rbp-40h]
  RockBoardExploreStageData *stage_data; // [rsp+98h] [rbp-38h]
  common::milog::MiLogStream v40; // [rsp+A0h] [rbp-30h] BYREF

  std::map<unsigned int,RockBoardExploreStageData>::clear(&this->stage_data_map_);
  stage_map = &RockBoardExploreActivity::getConfigMgr(this)->activity_rock_board_explore_stage_excel_config_map;
  __for_range = stage_map;
  __for_begin._M_cur = std::unordered_map<unsigned int,data::ActivityRockBoardExploreStageExcelConfig>::begin(stage_map)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,data::ActivityRockBoardExploreStageExcelConfig>::end(stage_map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ActivityRockBoardExploreStageExcelConfig>,false>(
            &__for_begin,
            &__for_end) )
  {
    v36 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityRockBoardExploreStageExcelConfig>,false,false>::operator*(&__for_begin);
    stage_id = std::get<0ul,unsigned int const,data::ActivityRockBoardExploreStageExcelConfig>(v36);
    stage_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivityRockBoardExploreStageExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivityRockBoardExploreStageExcelConfig>(v36);
    stage_data = std::map<unsigned int,RockBoardExploreStageData>::operator[](&this->stage_data_map_, stage_id);
    v1 = ((unsigned __int8)stage_id & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)stage_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(stage_id);
    }
    v2 = *stage_id;
    v3 = *(_BYTE *)(((unsigned __int64)stage_data >> 3) + 0x7FFF8000);
    LOBYTE(v1) = v3 != 0;
    v4 = (v3 != 0) & (unsigned __int8)((char)(((unsigned __int8)stage_data & 7) + 3) >= v3);
    if ( (_BYTE)v4 )
      __asan_report_store4(stage_data, v1, v4, v2);
    stage_data->stage_id = v2;
    v5 = *(_BYTE *)(((unsigned __int64)&stage_data->is_open >> 3) + 0x7FFF8000);
    LOBYTE(v2) = v5 != 0;
    v6 = ((_BYTE)stage_data + 4) & 7;
    v7 = (v5 != 0) & (unsigned __int8)((char)v6 >= v5);
    if ( (_BYTE)v7 )
      __asan_report_store1(&stage_data->is_open, v6, v7, v2);
    stage_data->is_open = 0;
    v8 = *(_BYTE *)(((unsigned __int64)&stage_data->is_finish >> 3) + 0x7FFF8000);
    LOBYTE(v2) = v8 != 0;
    v9 = ((_BYTE)stage_data + 5) & 7;
    v10 = (v8 != 0) & (unsigned __int8)((char)v9 >= v8);
    if ( (_BYTE)v10 )
      __asan_report_store1(&stage_data->is_finish, v9, v10, v2);
    stage_data->is_finish = 0;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityRockBoardExploreStageExcelConfig>,false,false>::operator++(&__for_begin);
  }
  quest_stage_map = &RockBoardExploreActivity::getConfigMgr(this)->activity_rock_board_explore_quest_excel_config_map;
  __for_range_0 = quest_stage_map;
  __for_begin_0._M_cur = std::unordered_map<unsigned int,data::ActivityRockBoardExploreQuestExcelConfig>::begin(quest_stage_map)._M_cur;
  __for_end_0._M_cur = std::unordered_map<unsigned int,data::ActivityRockBoardExploreQuestExcelConfig>::end(__for_range_0)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ActivityRockBoardExploreQuestExcelConfig>,false>(
            &__for_begin_0,
            &__for_end_0) )
  {
    v32 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityRockBoardExploreQuestExcelConfig>,false,false>::operator*(&__for_begin_0);
    stage_id_0 = std::get<0ul,unsigned int const,data::ActivityRockBoardExploreQuestExcelConfig>(v32);
    stage_config_0 = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivityRockBoardExploreQuestExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivityRockBoardExploreQuestExcelConfig>(v32);
    __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityRockBoardExploreStageExcelConfig>,false>::__node_type *)std::map<unsigned int,RockBoardExploreStageData>::find(&this->stage_data_map_, stage_id_0)._M_node;
    __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityRockBoardExploreStageExcelConfig>,false>::__node_type *)std::map<unsigned int,RockBoardExploreStageData>::end(&this->stage_data_map_)._M_node;
    if ( std::operator!=(
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,RockBoardExploreStageData> >::_Self *)&__for_begin,
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,RockBoardExploreStageData> >::_Self *)&__for_end) )
    {
      common::milog::MiLogStream::create(
        &v40,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/rock_board_explore_activity.cpp",
        "resetDataByGm",
        413);
      v11 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
              &v40,
              (const char (*)[47])"[ROCK_BOARD_EXPLORE] stage_id dumplicate, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
      common::milog::MiLogStream::~MiLogStream(&v40);
    }
    else
    {
      stage_data_0 = std::map<unsigned int,RockBoardExploreStageData>::operator[](&this->stage_data_map_, stage_id_0);
      v12 = ((unsigned __int8)stage_id_0 & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)stage_id_0 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)stage_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)stage_id_0 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(stage_id_0);
      }
      v13 = *stage_id_0;
      v14 = *(_BYTE *)(((unsigned __int64)stage_data_0 >> 3) + 0x7FFF8000);
      LOBYTE(v12) = v14 != 0;
      v15 = (v14 != 0) & (unsigned __int8)((char)(((unsigned __int8)stage_data_0 & 7) + 3) >= v14);
      if ( (_BYTE)v15 )
        __asan_report_store4(stage_data_0, v12, v15, v13);
      stage_data_0->stage_id = v13;
      v16 = *(_BYTE *)(((unsigned __int64)&stage_data_0->is_open >> 3) + 0x7FFF8000);
      LOBYTE(v13) = v16 != 0;
      v17 = ((_BYTE)stage_data_0 + 4) & 7;
      v18 = (v16 != 0) & (unsigned __int8)((char)v17 >= v16);
      if ( (_BYTE)v18 )
        __asan_report_store1(&stage_data_0->is_open, v17, v18, v13);
      stage_data_0->is_open = 0;
      v19 = *(_BYTE *)(((unsigned __int64)&stage_data_0->is_finish >> 3) + 0x7FFF8000);
      LOBYTE(v13) = v19 != 0;
      v20 = ((_BYTE)stage_data_0 + 5) & 7;
      v21 = (v19 != 0) & (unsigned __int8)((char)v20 >= v19);
      if ( (_BYTE)v21 )
        __asan_report_store1(&stage_data_0->is_finish, v20, v21, v13);
      stage_data_0->is_finish = 0;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityRockBoardExploreQuestExcelConfig>,false,false>::operator++(&__for_begin_0);
  }
  BaseActivity::notifyClientData(this, 0);
  return 0;
};
