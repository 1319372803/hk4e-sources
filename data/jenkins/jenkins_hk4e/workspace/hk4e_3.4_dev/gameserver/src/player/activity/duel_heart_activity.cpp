// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/duel_heart_activity.cpp

// Line 20: range 00000000165C546E-00000000165C593A
int32_t __cdecl DuelHeartActivity::fromScheduleBin(
        DuelHeartActivity *const this,
        const proto::ActivityScheduleBin *bin)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  DuelHeartActivity::DifficultyData *v5; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,DuelHeartActivity::DifficultyData> >,bool> v6; // rax
  common::milog::MiLogStream *v7; // r14
  DuelHeartActivity::LevelData *v8; // r15
  unsigned int *v9; // rcx
  DuelHeartActivity::LevelData *v10; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,DuelHeartActivity::LevelData> >,bool> v11; // rax
  common::milog::MiLogStream *v12; // r14
  uint64_t v13; // rax
  int32_t result; // eax
  unsigned int __args_0; // [rsp+24h] [rbp-13Ch] BYREF
  google::protobuf::RepeatedPtrField<proto::DuelHeartLevelBin>::const_iterator __for_begin; // [rsp+28h] [rbp-138h] BYREF
  google::protobuf::RepeatedPtrField<proto::DuelHeartLevelBin>::const_iterator __for_end; // [rsp+30h] [rbp-130h] BYREF
  google::protobuf::RepeatedPtrField<proto::DuelHeartDifficultyBin>::const_iterator __for_begin_0; // [rsp+38h] [rbp-128h] BYREF
  google::protobuf::RepeatedPtrField<proto::DuelHeartDifficultyBin>::const_iterator __for_end_0; // [rsp+40h] [rbp-120h] BYREF
  const proto::DuelheartScheduleBin *duel_heart_bin; // [rsp+48h] [rbp-118h]
  const google::protobuf::RepeatedPtrField<proto::DuelHeartLevelBin> *__for_range; // [rsp+50h] [rbp-110h]
  const proto::DuelHeartLevelBin *level_bin; // [rsp+58h] [rbp-108h]
  const google::protobuf::RepeatedPtrField<proto::DuelHeartDifficultyBin> *__for_range_0; // [rsp+60h] [rbp-100h]
  const proto::DuelHeartDifficultyBin *difficulty_bin; // [rsp+68h] [rbp-F8h]
  common::milog::MiLogStream v25; // [rsp+70h] [rbp-F0h] BYREF
  char v26[208]; // [rsp+90h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 18 difficulty_data:27 64 56 13 level_data:24";
  *(_QWORD *)(v2 + 16) = DuelHeartActivity::fromScheduleBin;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  duel_heart_bin = proto::ActivityScheduleBin::duel_heart_bin(bin);
  __for_range = proto::DuelheartScheduleBin::level_bin_list(duel_heart_bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::DuelHeartLevelBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::DuelHeartLevelBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::DuelHeartLevelBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    level_bin = google::protobuf::internal::RepeatedPtrIterator<proto::DuelHeartLevelBin const>::operator*(&__for_begin);
    DuelHeartActivity::LevelData::LevelData((DuelHeartActivity::LevelData *const)(v2 + 64));
    __for_range_0 = proto::DuelHeartLevelBin::difficulty_bin_list(level_bin);
    __for_begin_0.it_ = google::protobuf::RepeatedPtrField<proto::DuelHeartDifficultyBin>::begin(__for_range_0).it_;
    __for_end_0.it_ = google::protobuf::RepeatedPtrField<proto::DuelHeartDifficultyBin>::end(__for_range_0).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<proto::DuelHeartDifficultyBin const>::operator!=(
              &__for_begin_0,
              &__for_end_0) )
    {
      difficulty_bin = google::protobuf::internal::RepeatedPtrIterator<proto::DuelHeartDifficultyBin const>::operator*(&__for_begin_0);
      *(_DWORD *)(v2 + 32) = 0;
      *(_BYTE *)(v2 + 36) = 0;
      *(_DWORD *)(v2 + 32) = proto::DuelHeartDifficultyBin::cost_time(difficulty_bin);
      *(_BYTE *)(v2 + 36) = proto::DuelHeartDifficultyBin::is_open(difficulty_bin);
      __args_0 = proto::DuelHeartDifficultyBin::difficulty(difficulty_bin);
      v6 = std::map<unsigned int,DuelHeartActivity::DifficultyData>::emplace<unsigned int,DuelHeartActivity::DifficultyData&>(
             (std::map<unsigned int,DuelHeartActivity::DifficultyData> *const)(v2 + 64),
             &__args_0,
             (DuelHeartActivity::DifficultyData *)(v2 + 32),
             &__args_0,
             v5);
      if ( !v6.second )
      {
        common::milog::MiLogStream::create(
          &v25,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/duel_heart_activity.cpp",
          "fromScheduleBin",
          32);
        v7 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
               &v25,
               (const char (*)[27])"duplicate difficulty bin: ");
        __args_0 = proto::DuelHeartDifficultyBin::difficulty(difficulty_bin);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &__args_0);
        common::milog::MiLogStream::~MiLogStream(&v25);
      }
      google::protobuf::internal::RepeatedPtrIterator<proto::DuelHeartDifficultyBin const>::operator++(&__for_begin_0);
    }
    *(_BYTE *)(v2 + 112) = proto::DuelHeartLevelBin::is_open(level_bin);
    *(_BYTE *)(v2 + 113) = proto::DuelHeartLevelBin::is_cg_viewed(level_bin);
    v8 = std::move<DuelHeartActivity::LevelData &>((DuelHeartActivity::LevelData *)(v2 + 64));
    __args_0 = proto::DuelHeartLevelBin::level_id(level_bin);
    v11 = std::map<unsigned int,DuelHeartActivity::LevelData>::emplace<unsigned int,DuelHeartActivity::LevelData>(
            &this->level_data_map_,
            &__args_0,
            v8,
            v9,
            v10);
    if ( !v11.second )
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/duel_heart_activity.cpp",
        "fromScheduleBin",
        39);
      v12 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              &v25,
              (const char (*)[18])"duplicate level: ");
      __args_0 = proto::DuelHeartLevelBin::level_id(level_bin);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &__args_0);
      common::milog::MiLogStream::~MiLogStream(&v25);
    }
    DuelHeartActivity::LevelData::~LevelData((DuelHeartActivity::LevelData *const)(v2 + 64));
    google::protobuf::internal::RepeatedPtrIterator<proto::DuelHeartLevelBin const>::operator++(&__for_begin);
  }
  v13 = proto::DuelheartScheduleBin::in_dungeon_guid(duel_heart_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->in_dungeon_avatar_guid_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->in_dungeon_avatar_guid_);
  this->in_dungeon_avatar_guid_ = v13;
  result = 0;
  if ( v26 == (char *)v2 )
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

// Line 47: range 00000000165C593C-00000000165C5CB5
int32_t __cdecl DuelHeartActivity::toScheduleBin(const DuelHeartActivity *const this, proto::ActivityScheduleBin *bin)
{
  std::map<unsigned int,DuelHeartActivity::LevelData>::const_iterator __for_begin; // [rsp+18h] [rbp-78h] BYREF
  std::map<unsigned int,DuelHeartActivity::LevelData>::const_iterator __for_end; // [rsp+20h] [rbp-70h] BYREF
  std::map<unsigned int,DuelHeartActivity::DifficultyData>::const_iterator __for_begin_0; // [rsp+28h] [rbp-68h] BYREF
  std::map<unsigned int,DuelHeartActivity::DifficultyData>::const_iterator __for_end_0; // [rsp+30h] [rbp-60h] BYREF
  proto::DuelheartScheduleBin *duel_heart_bin; // [rsp+38h] [rbp-58h]
  const std::map<unsigned int,DuelHeartActivity::LevelData> *__for_range; // [rsp+40h] [rbp-50h]
  const std::pair<unsigned int const,DuelHeartActivity::LevelData> *v9; // [rsp+48h] [rbp-48h]
  std::tuple_element<0,const std::pair<unsigned int const,DuelHeartActivity::LevelData> >::type *level_id; // [rsp+50h] [rbp-40h]
  std::tuple_element<1,const std::pair<unsigned int const,DuelHeartActivity::LevelData> >::type *level_data; // [rsp+58h] [rbp-38h]
  proto::DuelHeartLevelBin *level_bin; // [rsp+60h] [rbp-30h]
  const std::map<unsigned int,DuelHeartActivity::DifficultyData> *__for_range_0; // [rsp+68h] [rbp-28h]
  const std::pair<unsigned int const,DuelHeartActivity::DifficultyData> *v14; // [rsp+70h] [rbp-20h]
  std::tuple_element<0,const std::pair<unsigned int const,DuelHeartActivity::DifficultyData> >::type *difficulty; // [rsp+78h] [rbp-18h]
  std::tuple_element<1,const std::pair<unsigned int const,DuelHeartActivity::DifficultyData> >::type *difficulty_data; // [rsp+80h] [rbp-10h]
  proto::DuelHeartDifficultyBin *difficulty_bin; // [rsp+88h] [rbp-8h]

  duel_heart_bin = proto::ActivityScheduleBin::mutable_duel_heart_bin(bin);
  __for_range = &this->level_data_map_;
  __for_begin._M_node = std::map<unsigned int,DuelHeartActivity::LevelData>::begin(&this->level_data_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,DuelHeartActivity::LevelData>::end(&this->level_data_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v9 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,DuelHeartActivity::LevelData>>::operator*(&__for_begin);
    level_id = std::get<0ul,unsigned int const,DuelHeartActivity::LevelData>(v9);
    level_data = (std::tuple_element<1,const std::pair<unsigned int const,DuelHeartActivity::LevelData> >::type *)std::get<1ul,unsigned int const,DuelHeartActivity::LevelData>(v9);
    level_bin = proto::DuelheartScheduleBin::add_level_bin_list(duel_heart_bin);
    if ( *(_BYTE *)(((unsigned __int64)level_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)level_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)level_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::DuelHeartLevelBin::set_level_id(level_bin, *level_id);
    __for_range_0 = &level_data->difficulty_data_map;
    __for_begin_0._M_node = std::map<unsigned int,DuelHeartActivity::DifficultyData>::begin(&level_data->difficulty_data_map)._M_node;
    __for_end_0._M_node = std::map<unsigned int,DuelHeartActivity::DifficultyData>::end(__for_range_0)._M_node;
    while ( std::operator!=(&__for_begin_0, &__for_end_0) )
    {
      v14 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,DuelHeartActivity::DifficultyData>>::operator*(&__for_begin_0);
      difficulty = std::get<0ul,unsigned int const,DuelHeartActivity::DifficultyData>(v14);
      difficulty_data = (std::tuple_element<1,const std::pair<unsigned int const,DuelHeartActivity::DifficultyData> >::type *)std::get<1ul,unsigned int const,DuelHeartActivity::DifficultyData>(v14);
      difficulty_bin = proto::DuelHeartLevelBin::add_difficulty_bin_list(level_bin);
      if ( *(_BYTE *)(((unsigned __int64)difficulty >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)difficulty & 7) + 3) >= *(_BYTE *)(((unsigned __int64)difficulty >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::DuelHeartDifficultyBin::set_difficulty(difficulty_bin, *difficulty);
      if ( *(_BYTE *)(((unsigned __int64)difficulty_data >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)difficulty_data & 7) + 3) >= *(_BYTE *)(((unsigned __int64)difficulty_data >> 3)
                                                                          + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::DuelHeartDifficultyBin::set_cost_time(difficulty_bin, difficulty_data->cost_time);
      if ( *(_BYTE *)(((unsigned __int64)&difficulty_data->is_open >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)difficulty_data + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&difficulty_data->is_open >> 3)
                                                                    + 0x7FFF8000) )
      {
        __asan_report_load1(&difficulty_data->is_open);
      }
      proto::DuelHeartDifficultyBin::set_is_open(difficulty_bin, difficulty_data->is_open);
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,DuelHeartActivity::DifficultyData>>::operator++(&__for_begin_0);
    }
    if ( *(char *)(((unsigned __int64)&level_data->is_open >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&level_data->is_open);
    proto::DuelHeartLevelBin::set_is_open(level_bin, level_data->is_open);
    if ( *(_BYTE *)(((unsigned __int64)&level_data->is_cg_viewed >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)level_data + 49) & 7) >= *(_BYTE *)(((unsigned __int64)&level_data->is_cg_viewed >> 3)
                                                              + 0x7FFF8000) )
    {
      __asan_report_load1(&level_data->is_cg_viewed);
    }
    proto::DuelHeartLevelBin::set_is_cg_viewed(level_bin, level_data->is_cg_viewed);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,DuelHeartActivity::LevelData>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->in_dungeon_avatar_guid_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  proto::DuelheartScheduleBin::set_in_dungeon_guid(duel_heart_bin, this->in_dungeon_avatar_guid_);
  return 0;
};

// Line 68: range 00000000165C5CB6-00000000165C60B0
int32_t __cdecl DuelHeartActivity::toClient(DuelHeartActivity *const this, proto::ActivityInfo *activity_info)
{
  std::map<unsigned int,DuelHeartActivity::LevelData>::iterator __for_begin; // [rsp+18h] [rbp-A8h] BYREF
  std::map<unsigned int,DuelHeartActivity::LevelData>::iterator __for_end; // [rsp+20h] [rbp-A0h] BYREF
  std::map<unsigned int,DuelHeartActivity::DifficultyData>::const_iterator __for_begin_0; // [rsp+28h] [rbp-98h] BYREF
  std::map<unsigned int,DuelHeartActivity::DifficultyData>::const_iterator __for_end_0; // [rsp+30h] [rbp-90h] BYREF
  proto::DuelHeartDetailInfo *info; // [rsp+38h] [rbp-88h]
  std::map<unsigned int,DuelHeartActivity::LevelData> *__for_range; // [rsp+40h] [rbp-80h]
  const std::pair<unsigned int const,DuelHeartActivity::LevelData> *v9; // [rsp+48h] [rbp-78h]
  std::tuple_element<0,const std::pair<unsigned int const,DuelHeartActivity::LevelData> >::type *level_id; // [rsp+50h] [rbp-70h]
  std::tuple_element<1,const std::pair<unsigned int const,DuelHeartActivity::LevelData> >::type *level_data; // [rsp+58h] [rbp-68h]
  proto::DuelHeartLevelInfo *level_info; // [rsp+60h] [rbp-60h]
  const std::map<unsigned int,DuelHeartActivity::DifficultyData> *__for_range_0; // [rsp+68h] [rbp-58h]
  const std::pair<unsigned int const,DuelHeartActivity::DifficultyData> *v14; // [rsp+70h] [rbp-50h]
  std::tuple_element<0,const std::pair<unsigned int const,DuelHeartActivity::DifficultyData> >::type *difficulty; // [rsp+78h] [rbp-48h]
  std::tuple_element<1,const std::pair<unsigned int const,DuelHeartActivity::DifficultyData> >::type *difficulty_data; // [rsp+80h] [rbp-40h]
  proto::DuelHeartLevelDifficultyInfo *difficulty_info; // [rsp+88h] [rbp-38h]
  common::milog::MiLogStream v18; // [rsp+90h] [rbp-30h] BYREF

  if ( BaseActivity::toClient(this, activity_info) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/duel_heart_activity.cpp",
      "toClient",
      71);
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
      &v18,
      (const char (*)[30])"BaseActivity::toClient failed");
    common::milog::MiLogStream::~MiLogStream(&v18);
    return -1;
  }
  else
  {
    info = proto::ActivityInfo::mutable_duel_heart_info(activity_info);
    __for_range = &this->level_data_map_;
    __for_begin._M_node = std::map<unsigned int,DuelHeartActivity::LevelData>::begin(&this->level_data_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,DuelHeartActivity::LevelData>::end(&this->level_data_map_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v9 = std::_Rb_tree_iterator<std::pair<unsigned int const,DuelHeartActivity::LevelData>>::operator*(&__for_begin);
      level_id = std::get<0ul,unsigned int const,DuelHeartActivity::LevelData>(v9);
      level_data = (std::tuple_element<1,const std::pair<unsigned int const,DuelHeartActivity::LevelData> >::type *)std::get<1ul,unsigned int const,DuelHeartActivity::LevelData>(v9);
      level_info = proto::DuelHeartDetailInfo::add_level_info_list(info);
      if ( *(_BYTE *)(((unsigned __int64)level_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)level_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)level_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::DuelHeartLevelInfo::set_level_id(level_info, *level_id);
      __for_range_0 = &level_data->difficulty_data_map;
      __for_begin_0._M_node = std::map<unsigned int,DuelHeartActivity::DifficultyData>::begin(&level_data->difficulty_data_map)._M_node;
      __for_end_0._M_node = std::map<unsigned int,DuelHeartActivity::DifficultyData>::end(__for_range_0)._M_node;
      while ( std::operator!=(&__for_begin_0, &__for_end_0) )
      {
        v14 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,DuelHeartActivity::DifficultyData>>::operator*(&__for_begin_0);
        difficulty = std::get<0ul,unsigned int const,DuelHeartActivity::DifficultyData>(v14);
        difficulty_data = (std::tuple_element<1,const std::pair<unsigned int const,DuelHeartActivity::DifficultyData> >::type *)std::get<1ul,unsigned int const,DuelHeartActivity::DifficultyData>(v14);
        difficulty_info = proto::DuelHeartLevelInfo::add_difficulty_info_list(level_info);
        if ( *(_BYTE *)(((unsigned __int64)difficulty >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)difficulty & 7) + 3) >= *(_BYTE *)(((unsigned __int64)difficulty >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto::DuelHeartLevelDifficultyInfo::set_difficulty(difficulty_info, *difficulty);
        if ( *(_BYTE *)(((unsigned __int64)difficulty_data >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)difficulty_data & 7) + 3) >= *(_BYTE *)(((unsigned __int64)difficulty_data >> 3)
                                                                            + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto::DuelHeartLevelDifficultyInfo::set_cost_time(difficulty_info, difficulty_data->cost_time);
        if ( *(_BYTE *)(((unsigned __int64)&difficulty_data->is_open >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)difficulty_data + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&difficulty_data->is_open >> 3)
                                                                      + 0x7FFF8000) )
        {
          __asan_report_load1(&difficulty_data->is_open);
        }
        proto::DuelHeartLevelDifficultyInfo::set_is_open(difficulty_info, difficulty_data->is_open);
        std::_Rb_tree_const_iterator<std::pair<unsigned int const,DuelHeartActivity::DifficultyData>>::operator++(&__for_begin_0);
      }
      if ( *(char *)(((unsigned __int64)&level_data->is_open >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&level_data->is_open);
      proto::DuelHeartLevelInfo::set_is_open(level_info, level_data->is_open);
      if ( *(_BYTE *)(((unsigned __int64)&level_data->is_cg_viewed >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)level_data + 49) & 7) >= *(_BYTE *)(((unsigned __int64)&level_data->is_cg_viewed >> 3)
                                                                + 0x7FFF8000) )
      {
        __asan_report_load1(&level_data->is_cg_viewed);
      }
      proto::DuelHeartLevelInfo::set_is_cg_viewed(level_info, level_data->is_cg_viewed);
      std::_Rb_tree_iterator<std::pair<unsigned int const,DuelHeartActivity::LevelData>>::operator++(&__for_begin);
    }
    return 0;
  }
};

// Line 93: range 00000000165C60B2-00000000165C610F
int32_t __cdecl DuelHeartActivity::init(DuelHeartActivity *const this)
{
  if ( BaseActivity::isOpening(this, 0) && !BaseActivity::isSettled(this) )
    DuelHeartActivity::registerObserver(this);
  return 0;
};

// Line 103: range 00000000165C6110-00000000165C612A
void __cdecl DuelHeartActivity::onStart(DuelHeartActivity *const this)
{
  DuelHeartActivity::registerObserver(this);
};

// Line 108: range 00000000165C612C-00000000165C6305
void __cdecl DuelHeartActivity::onPreStart(DuelHeartActivity *const this)
{
  DuelHeartActivity::DifficultyData *v1; // r8
  std::unordered_map<unsigned int,data::ActivityDuelHeartLevelExcelConfig>::const_iterator __for_begin; // [rsp+18h] [rbp-78h] BYREF
  std::unordered_map<unsigned int,data::ActivityDuelHeartLevelExcelConfig>::const_iterator __for_end; // [rsp+20h] [rbp-70h] BYREF
  std::set<data::DuelHeartDifficultyType>::iterator __for_begin_0; // [rsp+28h] [rbp-68h] BYREF
  std::set<data::DuelHeartDifficultyType>::iterator __for_end_0; // [rsp+30h] [rbp-60h] BYREF
  const ActivityDuelHeartExcelConfigMgr *config_mgr; // [rsp+38h] [rbp-58h]
  const std::unordered_map<unsigned int,data::ActivityDuelHeartLevelExcelConfig> *__for_range; // [rsp+40h] [rbp-50h]
  const std::pair<unsigned int const,data::ActivityDuelHeartLevelExcelConfig> *v8; // [rsp+48h] [rbp-48h]
  std::tuple_element<0,const std::pair<unsigned int const,data::ActivityDuelHeartLevelExcelConfig> >::type *level_id; // [rsp+50h] [rbp-40h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivityDuelHeartLevelExcelConfig> >::type *level_config; // [rsp+58h] [rbp-38h]
  DuelHeartActivity::LevelData *level_data; // [rsp+60h] [rbp-30h]
  const std::set<data::DuelHeartDifficultyType> *__for_range_0; // [rsp+68h] [rbp-28h]
  const data::DuelHeartDifficultyType *difficulty; // [rsp+70h] [rbp-20h]
  DuelHeartActivity::DifficultyData v14; // [rsp+78h] [rbp-18h] BYREF
  std::shared_ptr<Config> v15; // [rsp+80h] [rbp-10h] BYREF

  std::map<unsigned int,DuelHeartActivity::LevelData>::clear(&this->level_data_map_);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v15);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15)->design_config.txt_config_mgr.activity_duel_heart_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v15);
  __for_range = &config_mgr->activity_duel_heart_level_excel_config_map;
  __for_begin._M_cur = std::unordered_map<unsigned int,data::ActivityDuelHeartLevelExcelConfig>::begin(&config_mgr->activity_duel_heart_level_excel_config_map)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,data::ActivityDuelHeartLevelExcelConfig>::end(&config_mgr->activity_duel_heart_level_excel_config_map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ActivityDuelHeartLevelExcelConfig>,false>(
            &__for_begin,
            &__for_end) )
  {
    v8 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityDuelHeartLevelExcelConfig>,false,false>::operator*(&__for_begin);
    level_id = std::get<0ul,unsigned int const,data::ActivityDuelHeartLevelExcelConfig>(v8);
    level_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivityDuelHeartLevelExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivityDuelHeartLevelExcelConfig>(v8);
    level_data = std::map<unsigned int,DuelHeartActivity::LevelData>::operator[](&this->level_data_map_, level_id);
    if ( *(_BYTE *)(((unsigned __int64)level_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)level_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)level_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    __for_range_0 = ActivityDuelHeartExcelConfigMgr::getLevelDifficultySet(config_mgr, *level_id);
    __for_begin_0._M_node = std::set<data::DuelHeartDifficultyType>::begin(__for_range_0)._M_node;
    __for_end_0._M_node = std::set<data::DuelHeartDifficultyType>::end(__for_range_0)._M_node;
    while ( std::operator!=(&__for_begin_0, &__for_end_0) )
    {
      difficulty = std::_Rb_tree_const_iterator<data::DuelHeartDifficultyType>::operator*(&__for_begin_0);
      v14.cost_time = 0;
      v14.is_open = 0;
      std::map<unsigned int,DuelHeartActivity::DifficultyData>::emplace<data::DuelHeartDifficultyType const&,DuelHeartActivity::DifficultyData>(
        &level_data->difficulty_data_map,
        difficulty,
        &v14,
        difficulty,
        v1);
      std::_Rb_tree_const_iterator<data::DuelHeartDifficultyType>::operator++(&__for_begin_0);
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityDuelHeartLevelExcelConfig>,false,false>::operator++(&__for_begin);
  }
};

// Line 122: range 00000000165C6306-00000000165C6368
void __cdecl DuelHeartActivity::onLogin(DuelHeartActivity *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( !Player::isRelogin(this->player_) )
    DuelHeartActivity::recallInDungeonAvatar(this);
  BaseActivity::onLogin(this);
};

// Line 131: range 00000000165C636A-00000000165C6396
void __cdecl DuelHeartActivity::onClear(DuelHeartActivity *const this)
{
  std::map<unsigned int,DuelHeartActivity::LevelData>::clear(&this->level_data_map_);
  DuelHeartActivity::clearInDungeonAvatar(this);
};

// Line 137: range 00000000165C6398-00000000165C6647
int32_t __cdecl DuelHeartActivity::execAction(DuelHeartActivity *const this, const data::NewActivityExec *action_exec)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t result; // eax
  const std::string *v6; // rax
  common::milog::MiLogStream *v7; // r13
  const std::string *v8; // rax
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
  *(_QWORD *)(v2 + 8) = "1 32 4 12 level_id:147";
  *(_QWORD *)(v2 + 16) = DuelHeartActivity::execAction;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( action_exec->type == NEW_ACTIVITY_ACTION_DUEL_HEART_OPEN_LEVEL )
  {
    if ( std::vector<std::string>::empty(&action_exec->param) )
    {
      common::milog::MiLogStream::create(
        &v9,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/duel_heart_activity.cpp",
        "execAction",
        144);
      common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v9, (const char (*)[22])"action param is empty");
      common::milog::MiLogStream::~MiLogStream(&v9);
      result = -1;
    }
    else
    {
      *(_DWORD *)(v2 + 32) = 0;
      v6 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
      if ( common::tools::StringUtils::strToNum<unsigned int>(v6, (unsigned int *)(v2 + 32), 1) )
      {
        common::milog::MiLogStream::create(
          &v9,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/duel_heart_activity.cpp",
          "execAction",
          150);
        v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v9, (const char (*)[16])"strToNum fail: ");
        v8 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, v8);
        common::milog::MiLogStream::~MiLogStream(&v9);
        result = -1;
      }
      else
      {
        DuelHeartActivity::openLevel(this, *(_DWORD *)(v2 + 32));
        BaseActivity::notifyClientData(this, 0);
        result = 0;
      }
    }
  }
  else
  {
    result = BaseActivity::execAction(this, action_exec);
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

// Line 166: range 00000000165C6648-00000000165C6A00
bool __cdecl DuelHeartActivity::checkCondIsMeet(DuelHeartActivity *const this, const data::NewActivityCond *cond)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
  std::vector<int>::const_reference v6; // rdx
  common::milog::MiLogStream *v7; // rax
  std::map<unsigned int,DuelHeartActivity::DifficultyData>::iterator __for_begin; // [rsp+18h] [rbp-B8h] BYREF
  std::map<unsigned int,DuelHeartActivity::DifficultyData>::iterator __for_end; // [rsp+20h] [rbp-B0h] BYREF
  DuelHeartActivity::LevelData *level_ptr; // [rsp+28h] [rbp-A8h]
  std::map<unsigned int,DuelHeartActivity::DifficultyData> *__for_range; // [rsp+30h] [rbp-A0h]
  const std::pair<unsigned int const,DuelHeartActivity::DifficultyData> *v12; // [rsp+38h] [rbp-98h]
  std::tuple_element<0,const std::pair<unsigned int const,DuelHeartActivity::DifficultyData> >::type *_; // [rsp+40h] [rbp-90h]
  std::tuple_element<1,const std::pair<unsigned int const,DuelHeartActivity::DifficultyData> >::type *difficulty_data; // [rsp+48h] [rbp-88h]
  common::milog::MiLogStream v15; // [rsp+50h] [rbp-80h] BYREF
  char v16[96]; // [rsp+70h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 level_id:176";
  *(_QWORD *)(v2 + 16) = DuelHeartActivity::checkCondIsMeet;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( cond->type == NEW_ACTIVITY_COND_DUEL_HEART_FINISH_LEVEL )
  {
    if ( std::vector<int>::empty(&cond->param) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/duel_heart_activity.cpp",
        "checkCondIsMeet",
        173);
      common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v15, (const char (*)[20])"cond param is empty");
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = 0;
    }
    else
    {
      v6 = std::vector<int>::operator[](&cond->param, 0LL);
      if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v2 + 32) = *v6;
      level_ptr = DuelHeartActivity::findLevelData(this, *(_DWORD *)(v2 + 32));
      if ( level_ptr )
      {
        __for_range = &level_ptr->difficulty_data_map;
        __for_begin._M_node = std::map<unsigned int,DuelHeartActivity::DifficultyData>::begin(&level_ptr->difficulty_data_map)._M_node;
        __for_end._M_node = std::map<unsigned int,DuelHeartActivity::DifficultyData>::end(&level_ptr->difficulty_data_map)._M_node;
        while ( std::operator!=(&__for_begin, &__for_end) )
        {
          v12 = std::_Rb_tree_iterator<std::pair<unsigned int const,DuelHeartActivity::DifficultyData>>::operator*(&__for_begin);
          _ = std::get<0ul,unsigned int const,DuelHeartActivity::DifficultyData>(v12);
          difficulty_data = (std::tuple_element<1,const std::pair<unsigned int const,DuelHeartActivity::DifficultyData> >::type *)std::get<1ul,unsigned int const,DuelHeartActivity::DifficultyData>(v12);
          if ( *(_BYTE *)(((unsigned __int64)difficulty_data >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)difficulty_data & 7) + 3) >= *(_BYTE *)(((unsigned __int64)difficulty_data >> 3)
                                                                              + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          if ( difficulty_data->cost_time )
          {
            result = 1;
            goto LABEL_22;
          }
          std::_Rb_tree_iterator<std::pair<unsigned int const,DuelHeartActivity::DifficultyData>>::operator++(&__for_begin);
        }
        result = 0;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v15,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/duel_heart_activity.cpp",
          "checkCondIsMeet",
          180);
        v7 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
               &v15,
               (const char (*)[19])"invalid level id: ");
        common::milog::MiLogStream::operator<<<int,(int *)0>(v7, (const int *)(v2 + 32));
        common::milog::MiLogStream::~MiLogStream(&v15);
        result = 0;
      }
    }
  }
  else
  {
    result = BaseActivity::checkCondIsMeet(this, cond);
  }
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

// Line 202: range 00000000165C6A02-00000000165C6C92
void __cdecl DuelHeartActivity::registerObserver(DuelHeartActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::weak_ptr<DuelHeartActivity> *p_this_wtr; // [rsp+10h] [rbp-C0h]
  std::weak_ptr<DuelHeartActivity> v5; // [rsp+20h] [rbp-B0h] BYREF
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
  *(_QWORD *)(v1 + 8) = "2 32 16 12 this_ptr:203 64 16 12 this_wtr:204";
  *(_QWORD *)(v1 + 16) = DuelHeartActivity::registerObserver;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  std::enable_shared_from_this<BaseActivity>::shared_from_this(&v6);
  std::dynamic_pointer_cast<DuelHeartActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)(v1 + 32));
  std::shared_ptr<BaseActivity>::~shared_ptr((std::shared_ptr<BaseActivity> *const)&v6);
  std::weak_ptr<DuelHeartActivity>::weak_ptr<DuelHeartActivity,void>(
    (std::weak_ptr<DuelHeartActivity> *const)(v1 + 64),
    (const std::shared_ptr<DuelHeartActivity> *)(v1 + 32));
  if ( std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->leave_scene_wtr_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    p_this_wtr = (std::weak_ptr<DuelHeartActivity> *)Player::getEventComp(this->player_);
    std::weak_ptr<DuelHeartActivity>::weak_ptr(&v5, (const std::weak_ptr<DuelHeartActivity> *)(v1 + 64));
    PlayerEventComp::registerObserver<DuelHeartActivity,LeaveSceneEvent>(
      (PlayerEventComp *const)&v6,
      p_this_wtr,
      (void (*)(DuelHeartActivity *, const LeaveSceneEvent *))&v5);
    std::weak_ptr<Observer>::operator=(&this->leave_scene_wtr_, (std::weak_ptr<Observer> *)&v6);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v6);
    std::weak_ptr<DuelHeartActivity>::~weak_ptr(&v5);
  }
  std::weak_ptr<DuelHeartActivity>::~weak_ptr((std::weak_ptr<DuelHeartActivity> *const)(v1 + 64));
  std::shared_ptr<DuelHeartActivity>::~shared_ptr((std::shared_ptr<DuelHeartActivity> *const)(v1 + 32));
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

// Line 212: range 00000000165C6C94-00000000165C74CD
__int64 __fastcall DuelHeartActivity::enterDuelHeartDungeon(DuelHeartActivity *const this, uint32_t level_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned int v5; // r14d
  common::milog::MiLogStream *v6; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  PlayerDungeonComp *DungeonComp; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  __int32 SceneId; // eax
  common::milog::MiLogStream *v15; // rax
  DungeonScene *v16; // rax
  common::milog::MiLogStream *v17; // rax
  __int64 result; // rax
  unsigned int val; // [rsp+10h] [rbp-180h] BYREF
  unsigned int dungeon_id; // [rsp+14h] [rbp-17Ch]
  const data::ActivityDuelHeartLevelExcelConfig *level_config_ptr; // [rsp+18h] [rbp-178h]
  std::shared_ptr<Config> v22; // [rsp+20h] [rbp-170h] BYREF
  std::pair<int,std::shared_ptr<DungeonScene> > __in; // [rsp+30h] [rbp-160h] BYREF
  EnterDungeonOption v24; // [rsp+50h] [rbp-140h] BYREF
  common::milog::MiLogStream v25; // [rsp+70h] [rbp-120h] BYREF
  std::map<unsigned int,unsigned int> level_config_id_map; // [rsp+90h] [rbp-100h] BYREF
  char v27[208]; // [rsp+C0h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 7 ret:213 48 4 12 level_id:211 64 8 11 context:248 96 16 13 scene_ptr:218 128 16 21 dunge"
                        "on_scene_ptr:224";
  *(_QWORD *)(v2 + 16) = DuelHeartActivity::enterDuelHeartDungeon;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -219021312;
  v4[536862724] = -202178560;
  *(_DWORD *)(v2 + 48) = level_id;
  *(_DWORD *)(v2 + 32) = DuelHeartActivity::checkPlayerStatus(this);
  if ( *(_DWORD *)(v2 + 32) )
  {
    v5 = *(_DWORD *)(v2 + 32);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 96));
    if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 96), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/duel_heart_activity.cpp",
        "enterDuelHeartDungeon",
        221);
      common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v25, (const char (*)[21])off_25D25DE0);
      common::milog::MiLogStream::~MiLogStream(&v25);
      v5 = -1;
    }
    else
    {
      std::dynamic_pointer_cast<DungeonScene,Scene>((const std::shared_ptr<Scene> *)(v2 + 128));
      if ( std::operator!=<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v2 + 128), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v25,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/duel_heart_activity.cpp",
          "enterDuelHeartDungeon",
          227);
        v6 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
               &v25,
               (const char (*)[23])"player is in dungeon: ");
        v7 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        val = Scene::getSceneId(v7);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
        common::milog::MiLogStream::~MiLogStream(&v25);
        v5 = -1;
      }
      else if ( !DuelHeartActivity::isLevelOpen(this, *(_DWORD *)(v2 + 48)) )
      {
        common::milog::MiLogStream::create(
          &v25,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/duel_heart_activity.cpp",
          "enterDuelHeartDungeon",
          232);
        v8 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
               &v25,
               (const char (*)[20])"level is not open: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v25);
        v5 = -1;
      }
      else
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v22);
        v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22);
        level_config_ptr = data::ActivityDuelHeartConfigMgrBase::findActivityDuelHeartLevelExcelConfig(
                             &v9->design_config.txt_config_mgr.activity_duel_heart_config_mgr,
                             *(_DWORD *)(v2 + 48));
        std::shared_ptr<Config>::~shared_ptr(&v22);
        if ( level_config_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->dungeon_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)level_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_config_ptr->dungeon_id >> 3)
                                                                            + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          dungeon_id = level_config_ptr->dungeon_id;
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          DungeonComp = Player::getDungeonComp(this->player_);
          memset(&v24, 0, sizeof(v24));
          EnterDungeonOption::EnterDungeonOption(&v24);
          memset(&level_config_id_map, 0, sizeof(level_config_id_map));
          std::map<unsigned int,unsigned int>::map(&level_config_id_map);
          v12 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          SceneId = Scene::getSceneId(v12);
          PlayerDungeonComp::enterDungeon(&__in, DungeonComp, dungeon_id, SceneId, 0, &level_config_id_map, v24);
          std::tie<int,std::shared_ptr<DungeonScene>>(
            (int *)&v22,
            (std::shared_ptr<DungeonScene> *)(v2 + 32),
            (int *)(v2 + 128),
            (std::shared_ptr<DungeonScene> *)(v2 + 32));
          std::tuple<int &,std::shared_ptr<DungeonScene> &>::operator=<int,std::shared_ptr<DungeonScene>>(
            (std::tuple<int&,std::shared_ptr<DungeonScene>&> *const)&v22,
            &__in);
          std::pair<int,std::shared_ptr<DungeonScene>>::~pair(&__in);
          std::map<unsigned int,unsigned int>::~map(&level_config_id_map);
          if ( *(_DWORD *)(v2 + 32)
            || std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v2 + 128), 0LL) )
          {
            common::milog::MiLogStream::create(
              &v25,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/duel_heart_activity.cpp",
              "enterDuelHeartDungeon",
              245);
            v15 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                    &v25,
                    (const char (*)[23])"enter dungeon failed: ");
            common::milog::MiLogStream::operator<<<int,(int *)0>(v15, (const int *)(v2 + 32));
            common::milog::MiLogStream::~MiLogStream(&v25);
            v5 = *(_DWORD *)(v2 + 32);
          }
          else
          {
            *(_DWORD *)(v2 + 64) = 0;
            *(_DWORD *)(v2 + 68) = 0;
            *(_DWORD *)(v2 + 64) = *(_DWORD *)(v2 + 48);
            v16 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
            DungeonScene::setDungeonExtraData<DuelHeartDungeonContext>(v16, (const DuelHeartDungeonContext *)(v2 + 64));
            common::milog::MiLogStream::create(
              &v25,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/activity/duel_heart_activity.cpp",
              "enterDuelHeartDungeon",
              251);
            v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    &v25,
                    (const char (*)[16])"start dungeon: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v2 + 48));
            common::milog::MiLogStream::~MiLogStream(&v25);
            v5 = 0;
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v25,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/duel_heart_activity.cpp",
            "enterDuelHeartDungeon",
            238);
          v10 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                  &v25,
                  (const char (*)[21])"level id not found: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 48));
          common::milog::MiLogStream::~MiLogStream(&v25);
          v5 = -1;
        }
      }
      std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 128));
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 96));
  }
  result = v5;
  if ( v27 == (char *)v2 )
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

// Line 256: range 00000000165C74CE-00000000165C7BD2
int32_t __cdecl DuelHeartActivity::restartDuelHeartDungeon(DuelHeartActivity *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t v4; // r14d
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  uint32_t *p_difficulty; // rax
  PlayerDungeonComp *DungeonComp; // rax
  common::milog::MiLogStream *v10; // rax
  PlayerDungeonComp *v11; // r14
  common::milog::MiLogStream *v13; // rax
  DungeonScene *v14; // rax
  common::milog::MiLogStream *v15; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+14h] [rbp-15Ch] BYREF
  DuelHeartDungeonContext *context; // [rsp+18h] [rbp-158h]
  std::tuple<int&,std::shared_ptr<DungeonScene>&> v19; // [rsp+20h] [rbp-150h] BYREF
  std::pair<int,std::shared_ptr<DungeonScene> > __in; // [rsp+30h] [rbp-140h] BYREF
  EnterDungeonOption v21; // [rsp+50h] [rbp-120h] BYREF
  common::milog::MiLogStream v22; // [rsp+70h] [rbp-100h] BYREF
  std::map<unsigned int,unsigned int> level_config_id_map; // [rsp+90h] [rbp-E0h] BYREF
  char v24[176]; // [rsp+C0h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 4 7 ret:257 64 12 15 context_opt:268 96 16 21 dungeon_scene_ptr:262";
  *(_QWORD *)(v1 + 16) = DuelHeartActivity::restartDuelHeartDungeon;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -219020288;
  v3[536862723] = -202178560;
  *(_DWORD *)(v1 + 48) = DuelHeartActivity::checkPlayerStatus(this);
  if ( *(_DWORD *)(v1 + 48) )
  {
    v4 = *(_DWORD *)(v1 + 48);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurScene<DungeonScene>((PlayerSceneComp *const)(v1 + 96));
    if ( std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v1 + 96), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/duel_heart_activity.cpp",
        "restartDuelHeartDungeon",
        265);
      common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
        &v22,
        (const char (*)[25])"player is not in dungeon");
      common::milog::MiLogStream::~MiLogStream(&v22);
      v4 = -1;
    }
    else
    {
      v5 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
      *(std::optional<DuelHeartDungeonContext> *)(v1 + 64) = DungeonScene::getDungeonExtraData<DuelHeartDungeonContext>(v5);
      if ( !std::optional<DuelHeartDungeonContext>::has_value((const std::optional<DuelHeartDungeonContext> *const)(v1 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/duel_heart_activity.cpp",
          "restartDuelHeartDungeon",
          271);
        v6 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
               &v22,
               (const char (*)[38])"player is not in duel heart dungeon: ");
        v7 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
        val = Scene::getSceneId((const Scene *const)v7);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
        common::milog::MiLogStream::~MiLogStream(&v22);
        v4 = -1;
      }
      else
      {
        context = std::optional<DuelHeartDungeonContext>::value((std::optional<DuelHeartDungeonContext> *const)(v1 + 64));
        p_difficulty = &context->difficulty;
        if ( *(_BYTE *)(((unsigned __int64)p_difficulty >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_difficulty & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_difficulty >> 3)
                                                                         + 0x7FFF8000) )
        {
          __asan_report_store4(p_difficulty);
        }
        context->difficulty = 0;
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        DungeonComp = Player::getDungeonComp(this->player_);
        *(_DWORD *)(v1 + 48) = PlayerDungeonComp::checkRestartDungeon(DungeonComp, DUNGEON_RESTART_REASON_DIE_RETRY);
        if ( *(_DWORD *)(v1 + 48) )
        {
          common::milog::MiLogStream::create(
            &v22,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/duel_heart_activity.cpp",
            "restartDuelHeartDungeon",
            280);
          v10 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                  &v22,
                  (const char (*)[31])"check restart dungeon failed: ");
          common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v1 + 48));
          common::milog::MiLogStream::~MiLogStream(&v22);
          v4 = -1;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v11 = Player::getDungeonComp(this->player_);
          memset(&v21, 0, sizeof(v21));
          EnterDungeonOption::EnterDungeonOption(&v21);
          memset(&level_config_id_map, 0, sizeof(level_config_id_map));
          std::map<unsigned int,unsigned int>::map(&level_config_id_map);
          PlayerDungeonComp::restartDungeon(&__in, v11, &level_config_id_map, v21);
          std::tie<int,std::shared_ptr<DungeonScene>>(
            (int *)&v19,
            (std::shared_ptr<DungeonScene> *)(v1 + 48),
            (int *)(v1 + 96),
            (std::shared_ptr<DungeonScene> *)(v1 + 48));
          std::tuple<int &,std::shared_ptr<DungeonScene> &>::operator=<int,std::shared_ptr<DungeonScene>>(&v19, &__in);
          std::pair<int,std::shared_ptr<DungeonScene>>::~pair(&__in);
          std::map<unsigned int,unsigned int>::~map(&level_config_id_map);
          if ( *(_DWORD *)(v1 + 48)
            || std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v1 + 96), 0LL) )
          {
            common::milog::MiLogStream::create(
              &v22,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/duel_heart_activity.cpp",
              "restartDuelHeartDungeon",
              287);
            v13 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                    &v22,
                    (const char (*)[23])"enter dungeon failed: ");
            common::milog::MiLogStream::operator<<<int,(int *)0>(v13, (const int *)(v1 + 48));
            common::milog::MiLogStream::~MiLogStream(&v22);
            v4 = *(_DWORD *)(v1 + 48);
          }
          else
          {
            v14 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
            DungeonScene::setDungeonExtraData<DuelHeartDungeonContext>(v14, context);
            common::milog::MiLogStream::create(
              &v22,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/activity/duel_heart_activity.cpp",
              "restartDuelHeartDungeon",
              291);
            v15 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                    &v22,
                    (const char (*)[18])"restart dungeon: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)context);
            common::milog::MiLogStream::~MiLogStream(&v22);
            v4 = 0;
          }
        }
      }
    }
    std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v1 + 96));
  }
  result = v4;
  if ( v24 == (char *)v1 )
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
  return result;
};

// Line 296: range 00000000165C7BD4-00000000165C8699
__int64 __fastcall DuelHeartActivity::selectDifficulty(DuelHeartActivity *const this, uint32_t difficulty)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned int v5; // r14d
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  common::milog::MiLogStream *v15; // rax
  uint32_t v16; // ecx
  DungeonScene *v17; // rax
  Scene *v18; // rax
  uint32_t BlockGroupComp; // eax
  common::milog::MiLogStream *v20; // rax
  int32_t gallery_id; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rdx
  int32_t *p_param1; // rax
  int32_t v24; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  int32_t v26; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rdx
  int32_t *p_param3; // rax
  Group *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  __int64 result; // rax
  DuelHeartDungeonContext *context; // [rsp+10h] [rbp-140h]
  const data::ActivityDuelHeartLevelExcelConfig *level_config_ptr; // [rsp+18h] [rbp-138h]
  common::milog::MiLogStream v36; // [rsp+20h] [rbp-130h] BYREF
  char v37[272]; // [rsp+40h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 4 12 level_id:322 64 4 12 group_id:341 80 4 14 difficulty:295 96 12 15 context_opt:309 128 "
                        "16 21 dungeon_scene_ptr:297 160 16 13 group_ptr:342 192 16 13 event_ptr:349";
  *(_QWORD *)(v2 + 16) = DuelHeartActivity::selectDifficulty;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234556924;
  v4[536862723] = -219020288;
  v4[536862724] = -219021312;
  v4[536862725] = -219021312;
  v4[536862726] = -202178560;
  *(_DWORD *)(v2 + 80) = difficulty;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene<DungeonScene>((PlayerSceneComp *const)(v2 + 128));
  if ( std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v2 + 128), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v36,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/duel_heart_activity.cpp",
      "selectDifficulty",
      300);
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
      &v36,
      (const char (*)[25])"player is not in dungeon");
    common::milog::MiLogStream::~MiLogStream(&v36);
    v5 = -1;
  }
  else
  {
    v6 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
    if ( DungeonScene::getDungeonResult(v6) )
    {
      common::milog::MiLogStream::create(
        &v36,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/duel_heart_activity.cpp",
        "selectDifficulty",
        306);
      v7 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v36,
             (const char (*)[29])"dungeon is already settled: ");
      v8 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
      *(_DWORD *)(v2 + 64) = DungeonScene::getDungeonResult(v8);
      common::milog::MiLogStream::operator<<<DungeonResult,(DungeonResult*)0>(v7, (const DungeonResult *)(v2 + 64));
      common::milog::MiLogStream::~MiLogStream(&v36);
      v5 = -1;
    }
    else
    {
      v9 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
      *(std::optional<DuelHeartDungeonContext> *)(v2 + 96) = DungeonScene::getDungeonExtraData<DuelHeartDungeonContext>(v9);
      if ( !std::optional<DuelHeartDungeonContext>::has_value((const std::optional<DuelHeartDungeonContext> *const)(v2 + 96)) )
      {
        common::milog::MiLogStream::create(
          &v36,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/duel_heart_activity.cpp",
          "selectDifficulty",
          312);
        common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
          &v36,
          (const char (*)[36])"player is not in duel heart dungeon");
        common::milog::MiLogStream::~MiLogStream(&v36);
        v5 = -1;
      }
      else
      {
        context = std::optional<DuelHeartDungeonContext>::value((std::optional<DuelHeartDungeonContext> *const)(v2 + 96));
        if ( *(_BYTE *)(((unsigned __int64)&context->difficulty >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)context + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&context->difficulty >> 3)
                                                                + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( context->difficulty )
        {
          common::milog::MiLogStream::create(
            &v36,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/duel_heart_activity.cpp",
            "selectDifficulty",
            319);
          v10 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                  &v36,
                  (const char (*)[35])"player already select difficulty: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 80));
          common::milog::MiLogStream::~MiLogStream(&v36);
          v5 = -1;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)context >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)context & 7) + 3) >= *(_BYTE *)(((unsigned __int64)context >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          *(_DWORD *)(v2 + 48) = context->level_id;
          if ( !DuelHeartActivity::isDifficultyOpen(this, *(_DWORD *)(v2 + 48), *(_DWORD *)(v2 + 80)) )
          {
            common::milog::MiLogStream::create(
              &v36,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/duel_heart_activity.cpp",
              "selectDifficulty",
              326);
            v11 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                    &v36,
                    (const char (*)[28])"difficulty is not opening: ");
            v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v11,
                    (const unsigned int *)(v2 + 48));
            v13 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v12, (const char (*)[2])"@");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 80));
            common::milog::MiLogStream::~MiLogStream(&v36);
            v5 = -1;
          }
          else
          {
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)(v2 + 192));
            v14 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
            level_config_ptr = data::ActivityDuelHeartConfigMgrBase::findActivityDuelHeartLevelExcelConfig(
                                 &v14->design_config.txt_config_mgr.activity_duel_heart_config_mgr,
                                 *(_DWORD *)(v2 + 48));
            std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 192));
            if ( level_config_ptr )
            {
              v16 = *(_DWORD *)(v2 + 80);
              if ( *(_BYTE *)(((unsigned __int64)&context->difficulty >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)context + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&context->difficulty >> 3)
                                                                      + 0x7FFF8000) )
              {
                __asan_report_store4(&context->difficulty);
              }
              context->difficulty = v16;
              v17 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
              DungeonScene::setDungeonExtraData<DuelHeartDungeonContext>(v17, context);
              if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->group_id >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&level_config_ptr->group_id >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4();
              }
              *(_DWORD *)(v2 + 64) = level_config_ptr->group_id;
              v18 = (Scene *)std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
              BlockGroupComp = (unsigned int)Scene::getBlockGroupComp(v18);
              SceneBlockGroupComp::getActiveGroup((SceneBlockGroupComp *const)(v2 + 160), BlockGroupComp);
              if ( std::operator==<Group>((const std::shared_ptr<Group> *)(v2 + 160), 0LL) )
              {
                common::milog::MiLogStream::create(
                  &v36,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/player/activity/duel_heart_activity.cpp",
                  "selectDifficulty",
                  345);
                v20 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                        &v36,
                        (const char (*)[18])"group not found: ");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v20,
                  (const unsigned int *)(v2 + 64));
                common::milog::MiLogStream::~MiLogStream(&v36);
                v5 = -1;
              }
              else
              {
                EventUtil::createEvent((std::shared_ptr<Event> *)(v2 + 192), 48);
                if ( std::operator!=<Event>((const std::shared_ptr<Event> *)(v2 + 192), 0LL) )
                {
                  if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->gallery_id >> 3) + 0x7FFF8000) != 0
                    && (char)((((_BYTE)level_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_config_ptr->gallery_id >> 3)
                                                                                    + 0x7FFF8000) )
                  {
                    __asan_report_load4();
                  }
                  gallery_id = level_config_ptr->gallery_id;
                  v22 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
                  p_param1 = &v22->param1;
                  if ( *(_BYTE *)(((unsigned __int64)p_param1 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)p_param1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_param1 >> 3)
                                                                               + 0x7FFF8000) )
                  {
                    __asan_report_store4(p_param1);
                  }
                  v22->param1 = gallery_id;
                  v24 = *(_DWORD *)(v2 + 48);
                  v25 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
                  if ( *(_BYTE *)(((unsigned __int64)&v25->param2 >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&v25->param2 >> 3) + 0x7FFF8000) <= 3 )
                  {
                    v25 = (std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v25->param2);
                  }
                  v25->param2 = v24;
                  v26 = *(_DWORD *)(v2 + 80);
                  v27 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
                  p_param3 = &v27->param3;
                  if ( *(_BYTE *)(((unsigned __int64)p_param3 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)p_param3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_param3 >> 3)
                                                                               + 0x7FFF8000) )
                  {
                    __asan_report_store4(p_param3);
                  }
                  v27->param3 = v26;
                  v29 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
                  Group::handleEvent(v29, (EventPtr *)(v2 + 192));
                }
                common::milog::MiLogStream::create(
                  &v36,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/player/activity/duel_heart_activity.cpp",
                  "selectDifficulty",
                  358);
                v30 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                        &v36,
                        (const char (*)[20])"select difficulty: ");
                v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v30,
                        (const unsigned int *)(v2 + 48));
                v32 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v31, (const char (*)[2])"@");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v32,
                  (const unsigned int *)(v2 + 80));
                common::milog::MiLogStream::~MiLogStream(&v36);
                v5 = 0;
                std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v2 + 192));
              }
              std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v2 + 160));
            }
            else
            {
              common::milog::MiLogStream::create(
                &v36,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/duel_heart_activity.cpp",
                "selectDifficulty",
                333);
              v15 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                      &v36,
                      (const char (*)[21])"level id not found: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v15,
                (const unsigned int *)(v2 + 48));
              common::milog::MiLogStream::~MiLogStream(&v36);
              v5 = -1;
            }
          }
        }
      }
    }
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 128));
  result = v5;
  if ( v37 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 364: range 00000000165C869A-00000000165C8A35
int32_t __cdecl DuelHeartActivity::checkPlayerStatus(DuelHeartActivity *const this)
{
  PlayerSceneComp *SceneComp; // rax
  PlayerSceneComp *v3; // rax
  common::milog::MiLogStream *v4; // rbx
  PlayerMpComp *MpComp; // rax
  common::milog::MiLogStream *v6; // rbx
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v8; // [rsp+20h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = Player::getSceneComp(this->player_);
  if ( !PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/duel_heart_activity.cpp",
      "checkPlayerStatus",
      368);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v8, (const char (*)[23])"player not in my world");
    common::milog::MiLogStream::~MiLogStream(&v8);
    return -1;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v3 = Player::getSceneComp(this->player_);
  if ( PlayerSceneComp::isInTransfer(v3) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/duel_heart_activity.cpp",
      "checkPlayerStatus",
      374);
    v4 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           &v8,
           (const char (*)[28])"player is in transfer, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_10:
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
    common::milog::MiLogStream::~MiLogStream(&v8);
    return -1;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  MpComp = Player::getMpComp(this->player_);
  if ( PlayerMpComp::isInMpMode(MpComp) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/duel_heart_activity.cpp",
      "checkPlayerStatus",
      380);
    v6 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v8, (const char (*)[17])"in mp mode, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v8);
    return 1202;
  }
  else
  {
    if ( BaseActivity::isSettled(this) )
    {
      common::milog::MiLogStream::create(
        &v8,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/duel_heart_activity.cpp",
        "checkPlayerStatus",
        386);
      v4 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
             &v8,
             (const char (*)[26])"activity is settled, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      goto LABEL_10;
    }
    return 0;
  }
};

// Line 393: range 00000000165C8A36-00000000165C94A7
void __cdecl DuelHeartActivity::cgEnd(DuelHeartActivity *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  common::milog::MiLogStream *v5; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  ActivityDuelHeartExcelConfigMgr *p_activity_duel_heart_config_mgr; // rcx
  Scene *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  Scene *v18; // rax
  SceneGalleryComp *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  SceneGalleryComp *GalleryComp; // [rsp+10h] [rbp-140h]
  std::less<unsigned int> __comp; // [rsp+22h] [rbp-12Eh] BYREF
  std::allocator<unsigned int> __a; // [rsp+23h] [rbp-12Dh] BYREF
  DungeonResult val; // [rsp+24h] [rbp-12Ch] BYREF
  const DuelHeartDungeonContext *context; // [rsp+28h] [rbp-128h]
  const data::ActivityDuelHeartLevelExcelConfig *level_config_ptr; // [rsp+30h] [rbp-120h]
  DuelHeartActivity::LevelData *level_data_ptr; // [rsp+38h] [rbp-118h]
  std::shared_ptr<Config> v32; // [rsp+40h] [rbp-110h] BYREF
  common::milog::MiLogStream v33; // [rsp+50h] [rbp-100h] BYREF
  std::set<unsigned int> uid_set; // [rsp+70h] [rbp-E0h] BYREF
  char v35[176]; // [rsp+A0h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "4 32 4 14 gallery_id:425 48 4 7 ret:426 64 12 15 context_opt:406 96 16 21 dungeon_scene_ptr:394";
  *(_QWORD *)(v1 + 16) = DuelHeartActivity::cgEnd;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556924;
  v3[536862722] = -219020288;
  v3[536862723] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene<DungeonScene>((PlayerSceneComp *const)(v1 + 96));
  if ( std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v1 + 96), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v33,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/duel_heart_activity.cpp",
      "cgEnd",
      397);
    common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(&v33, (const char (*)[31])off_25D26600);
    common::milog::MiLogStream::~MiLogStream(&v33);
  }
  else
  {
    v4 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
    if ( DungeonScene::getDungeonResult(v4) )
    {
      common::milog::MiLogStream::create(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/duel_heart_activity.cpp",
        "cgEnd",
        403);
      v5 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v33,
             (const char (*)[29])"dungeon is already settled: ");
      v6 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
      val = DungeonScene::getDungeonResult(v6);
      common::milog::MiLogStream::operator<<<DungeonResult,(DungeonResult*)0>(v5, &val);
      common::milog::MiLogStream::~MiLogStream(&v33);
    }
    else
    {
      v7 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
      *(std::optional<DuelHeartDungeonContext> *)(v1 + 64) = DungeonScene::getDungeonExtraData<DuelHeartDungeonContext>(v7);
      if ( !std::optional<DuelHeartDungeonContext>::has_value((const std::optional<DuelHeartDungeonContext> *const)(v1 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v33,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/duel_heart_activity.cpp",
          "cgEnd",
          409);
        v8 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(&v33, (const char (*)[40])off_25D26640);
        v9 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
        val = DungeonScene::getDungeonId(v9);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)&val);
        common::milog::MiLogStream::~MiLogStream(&v33);
      }
      else
      {
        context = std::optional<DuelHeartDungeonContext>::value((std::optional<DuelHeartDungeonContext> *const)(v1 + 64));
        if ( *(_BYTE *)(((unsigned __int64)context >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)context & 7) + 3) >= *(_BYTE *)(((unsigned __int64)context >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( !context->level_id )
          goto LABEL_18;
        if ( *(_BYTE *)(((unsigned __int64)&context->difficulty >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)context + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&context->difficulty >> 3)
                                                                + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( context->difficulty )
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v32);
          p_activity_duel_heart_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v32)->design_config.txt_config_mgr.activity_duel_heart_config_mgr;
          if ( *(_BYTE *)(((unsigned __int64)context >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)context & 7) + 3) >= *(_BYTE *)(((unsigned __int64)context >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          level_config_ptr = data::ActivityDuelHeartConfigMgrBase::findActivityDuelHeartLevelExcelConfig(
                               p_activity_duel_heart_config_mgr,
                               context->level_id);
          std::shared_ptr<Config>::~shared_ptr(&v32);
          if ( level_config_ptr )
          {
            if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->gallery_id >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)level_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_config_ptr->gallery_id >> 3)
                                                                              + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            *(_DWORD *)(v1 + 32) = level_config_ptr->gallery_id;
            v14 = (Scene *)std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
            GalleryComp = Scene::getGalleryComp(v14);
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            val = Player::getUid(this->player_);
            std::allocator<unsigned int>::allocator(&__a);
            std::set<unsigned int>::set(
              &uid_set,
              (std::initializer_list<unsigned int>)__PAIR128__(1LL, &val),
              &__comp,
              &__a);
            *(_DWORD *)(v1 + 48) = SceneGalleryComp::initGallery(GalleryComp, *(_DWORD *)(v1 + 32), &uid_set);
            std::set<unsigned int>::~set(&uid_set);
            std::allocator<unsigned int>::~allocator(&__a);
            if ( *(_DWORD *)(v1 + 48) )
            {
              common::milog::MiLogStream::create(
                &v33,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/duel_heart_activity.cpp",
                "cgEnd",
                429);
              v15 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                      &v33,
                      (const char (*)[22])"init gallery failed: ");
              v16 = common::milog::MiLogStream::operator<<<int,(int *)0>(v15, (const int *)(v1 + 48));
              v17 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                      v16,
                      (const char (*)[15])", gallery_id: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v17,
                (const unsigned int *)(v1 + 32));
              common::milog::MiLogStream::~MiLogStream(&v33);
            }
            else
            {
              v18 = (Scene *)std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
              v19 = Scene::getGalleryComp(v18);
              *(_DWORD *)(v1 + 48) = SceneGalleryComp::startGallery(v19, *(_DWORD *)(v1 + 32));
              if ( *(_DWORD *)(v1 + 48) )
              {
                common::milog::MiLogStream::create(
                  &v33,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/activity/duel_heart_activity.cpp",
                  "cgEnd",
                  435);
                v20 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                        &v33,
                        (const char (*)[23])"start gallery failed: ");
                v21 = common::milog::MiLogStream::operator<<<int,(int *)0>(v20, (const int *)(v1 + 48));
                v22 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                        v21,
                        (const char (*)[15])", gallery_id: ");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v22,
                  (const unsigned int *)(v1 + 32));
                common::milog::MiLogStream::~MiLogStream(&v33);
              }
              else
              {
                if ( *(_BYTE *)(((unsigned __int64)context >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)context & 7) + 3) >= *(_BYTE *)(((unsigned __int64)context >> 3)
                                                                            + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                level_data_ptr = DuelHeartActivity::findLevelData(this, context->level_id);
                if ( level_data_ptr )
                {
                  if ( *(_BYTE *)(((unsigned __int64)&level_data_ptr->is_cg_viewed >> 3) + 0x7FFF8000) != 0
                    && (((unsigned __int8)level_data_ptr + 49) & 7) >= *(_BYTE *)(((unsigned __int64)&level_data_ptr->is_cg_viewed >> 3)
                                                                                + 0x7FFF8000) )
                  {
                    __asan_report_store1(&level_data_ptr->is_cg_viewed);
                  }
                  level_data_ptr->is_cg_viewed = 1;
                  common::milog::MiLogStream::create(
                    &v33,
                    &common::milog::MiLogDefault::default_log_obj_,
                    1u,
                    "./src/player/activity/duel_heart_activity.cpp",
                    "cgEnd",
                    446);
                  v24 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                          &v33,
                          (const char (*)[24])"cg end, start gallery: ");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v24,
                    (const unsigned int *)(v1 + 32));
                  common::milog::MiLogStream::~MiLogStream(&v33);
                }
                else
                {
                  common::milog::MiLogStream::create(
                    &v33,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/activity/duel_heart_activity.cpp",
                    "cgEnd",
                    442);
                  v23 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                          &v33,
                          (const char (*)[23])"level data not found: ");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v23,
                    (const unsigned int *)context);
                  common::milog::MiLogStream::~MiLogStream(&v33);
                }
              }
            }
          }
        }
        else
        {
LABEL_18:
          common::milog::MiLogStream::create(
            &v33,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/duel_heart_activity.cpp",
            "cgEnd",
            415);
          v10 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                  &v33,
                  (const char (*)[30])"level or difficulty invalid: ");
          v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v10,
                  (const unsigned int *)context);
          v12 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v11, (const char (*)[2])"@");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &context->difficulty);
          common::milog::MiLogStream::~MiLogStream(&v33);
        }
      }
    }
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v1 + 96));
  if ( v35 == (char *)v1 )
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

// Line 450: range 00000000165C94A8-00000000165CA357
int32_t __cdecl DuelHeartActivity::initEnterSceneAvatar(
        DuelHeartActivity *const this,
        ScenePtr *p_dest_scene_ptr,
        std::vector<std::shared_ptr<Avatar>> *enter_scene_avatar_vec,
        AvatarPtr *appear_avatar_ptr)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  int32_t v7; // r14d
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  PlayerAvatarComp *AvatarComp; // rcx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  unsigned __int64 v14; // rax
  void (__fastcall **v15)(common::milog::MiLogStream *, unsigned __int64); // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  common::milog::MiLogStream *v17; // rax
  TrialAvatarExcelConfigMgr *p_trial_avatar_config_mgr; // rcx
  common::milog::MiLogStream *v19; // rax
  uint32_t avatar_id; // r14d
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  uint32_t v22; // eax
  PlayerAvatarComp *v23; // r14
  common::milog::MiLogStream *v24; // r14
  std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  uint64_t Guid; // rdx
  int32_t result; // eax
  uint32_t selected_trial_avatar_id; // [rsp+24h] [rbp-1BCh]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-1B8h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-1B0h] BYREF
  DuelHeartDungeonContext *context; // [rsp+38h] [rbp-1A8h]
  const data::ActivityDuelHeartLevelExcelConfig *level_config_ptr; // [rsp+40h] [rbp-1A0h]
  const std::vector<unsigned int> *__for_range; // [rsp+48h] [rbp-198h]
  const unsigned int *trial_avatar_id; // [rsp+50h] [rbp-190h]
  const data::TrialAvatarExcelConfig *trial_avatar_config_ptr; // [rsp+58h] [rbp-188h]
  std::shared_ptr<TrialAvatar> v39; // [rsp+60h] [rbp-180h] BYREF
  common::milog::MiLogStream v40; // [rsp+70h] [rbp-170h] BYREF
  char v41[336]; // [rsp+90h] [rbp-150h] BYREF

  v4 = (unsigned __int64)v41;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(288LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "7 48 4 12 level_id:487 64 12 15 context_opt:463 96 16 21 dungeon_scene_ptr:456 128 16 21 player_"
                        "avatar_ptr:496 160 16 20 trial_avatar_ptr:519 192 16 14 avatar_ptr:473 224 32 10 record:525";
  *(_QWORD *)(v4 + 16) = DuelHeartActivity::initEnterSceneAvatar;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -219020288;
  v6[536862723] = -219021312;
  v6[536862724] = -219021312;
  v6[536862725] = -219021312;
  v6[536862726] = -219021312;
  v6[536862728] = -202116109;
  if ( std::operator==<Scene>(p_dest_scene_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v40,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/duel_heart_activity.cpp",
      "initEnterSceneAvatar",
      453);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v40, (const char (*)[19])"dest scene is null");
    common::milog::MiLogStream::~MiLogStream(&v40);
    v7 = -1;
  }
  else
  {
    std::dynamic_pointer_cast<DungeonScene,Scene>((const std::shared_ptr<Scene> *)(v4 + 96));
    if ( std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v4 + 96), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v40,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/duel_heart_activity.cpp",
        "initEnterSceneAvatar",
        459);
      v8 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(&v40, (const char (*)[27])off_25D26960);
      v9 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_dest_scene_ptr);
      *(_DWORD *)(v4 + 48) = Scene::getSceneId(v9);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 48));
      common::milog::MiLogStream::~MiLogStream(&v40);
      v7 = -1;
    }
    else
    {
      v10 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
      *(std::optional<DuelHeartDungeonContext> *)(v4 + 64) = DungeonScene::getDungeonExtraData<DuelHeartDungeonContext>(v10);
      if ( !std::optional<DuelHeartDungeonContext>::has_value((const std::optional<DuelHeartDungeonContext> *const)(v4 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v40,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/duel_heart_activity.cpp",
          "initEnterSceneAvatar",
          466);
        common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(&v40, (const char (*)[41])off_25D269A0);
        common::milog::MiLogStream::~MiLogStream(&v40);
        v7 = -1;
      }
      else if ( DuelHeartActivity::isAlreadyInDungeon(this) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        AvatarComp = Player::getAvatarComp(this->player_);
        if ( *(_BYTE *)(((unsigned __int64)&this->in_dungeon_avatar_guid_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        PlayerAvatarComp::findAvatar<TrialAvatar>((const PlayerAvatarComp *const)(v4 + 192), (uint64_t)AvatarComp);
        if ( std::operator==<TrialAvatar>((const std::shared_ptr<TrialAvatar> *)(v4 + 192), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v40,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/activity/duel_heart_activity.cpp",
            "initEnterSceneAvatar",
            476);
          v12 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                  &v40,
                  (const char (*)[25])"trial avatar not found: ");
          common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v12, &this->in_dungeon_avatar_guid_);
          common::milog::MiLogStream::~MiLogStream(&v40);
          DuelHeartActivity::clearInDungeonAvatar(this);
          v7 = -1;
        }
        else
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v4 + 224),
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/duel_heart_activity.cpp",
            "initEnterSceneAvatar",
            480);
          v13 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                  (common::milog::MiLogStream *const)(v4 + 224),
                  (const char (*)[21])"already in dungeon: ");
          v14 = (unsigned __int64)std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
          if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
            v14 = __asan_report_load8();
          v15 = *(void (__fastcall ***)(common::milog::MiLogStream *, unsigned __int64))v14;
          if ( *(_BYTE *)((*(_QWORD *)v14 >> 3) + 0x7FFF8000LL) )
            v14 = __asan_report_load8();
          (*v15)(&v40, v14);
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, (const std::string *)&v40);
          std::string::~string(&v40);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 224));
          std::vector<std::shared_ptr<Avatar>>::emplace_back<std::shared_ptr&<TrialAvatar>>(
            enter_scene_avatar_vec,
            (std::shared_ptr<TrialAvatar> *)(v4 + 192),
            (std::shared_ptr<TrialAvatar> *)(v4 + 192));
          std::shared_ptr<Avatar>::operator=<TrialAvatar>(
            appear_avatar_ptr,
            (const std::shared_ptr<TrialAvatar> *)(v4 + 192));
          v7 = 0;
        }
        std::shared_ptr<TrialAvatar>::~shared_ptr((std::shared_ptr<TrialAvatar> *const)(v4 + 192));
      }
      else
      {
        context = std::optional<DuelHeartDungeonContext>::value((std::optional<DuelHeartDungeonContext> *const)(v4 + 64));
        if ( *(_BYTE *)(((unsigned __int64)context >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)context & 7) + 3) >= *(_BYTE *)(((unsigned __int64)context >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v4 + 48) = context->level_id;
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)(v4 + 192));
        v16 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
        level_config_ptr = data::ActivityDuelHeartConfigMgrBase::findActivityDuelHeartLevelExcelConfig(
                             &v16->design_config.txt_config_mgr.activity_duel_heart_config_mgr,
                             *(_DWORD *)(v4 + 48));
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 192));
        if ( level_config_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          Player::getAvatarComp(this->player_);
          PlayerAvatarComp::getPlayerAvatarPtr((PlayerAvatarComp *const)(v4 + 128));
          if ( std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v4 + 128), 0LL) )
          {
            common::milog::MiLogStream::create(
              &v40,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/activity/duel_heart_activity.cpp",
              "initEnterSceneAvatar",
              499);
            common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
              &v40,
              (const char (*)[24])"player avatar not found");
            common::milog::MiLogStream::~MiLogStream(&v40);
            v7 = -1;
          }
          else
          {
            LOBYTE(selected_trial_avatar_id) = 0;
            __for_range = &level_config_ptr->trial_avatar_id_list;
            __for_begin._M_current = std::vector<unsigned int>::begin(&level_config_ptr->trial_avatar_id_list)._M_current;
            __for_end._M_current = std::vector<unsigned int>::end(&level_config_ptr->trial_avatar_id_list)._M_current;
            while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
            {
              trial_avatar_id = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
              ServiceBox::findService<GameserverService>();
              GameserverService::getConfig((GameserverService *const)(v4 + 192));
              p_trial_avatar_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192))->design_config.txt_config_mgr.trial_avatar_config_mgr;
              if ( *(_BYTE *)(((unsigned __int64)trial_avatar_id >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)trial_avatar_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)trial_avatar_id >> 3)
                                                                                  + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              trial_avatar_config_ptr = data::TrialAvatarExcelConfigMgrBase::findTrialAvatarExcelConfig(
                                          p_trial_avatar_config_mgr,
                                          *trial_avatar_id);
              std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 192));
              if ( trial_avatar_config_ptr )
              {
                if ( *(_BYTE *)(((unsigned __int64)&trial_avatar_config_ptr->avatar.avatar_id >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&trial_avatar_config_ptr->avatar.avatar_id >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4();
                }
                avatar_id = trial_avatar_config_ptr->avatar.avatar_id;
                v21 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
                if ( avatar_id == Avatar::getAvatarId(v21) )
                {
                  if ( *(_BYTE *)(((unsigned __int64)trial_avatar_id >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)trial_avatar_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)trial_avatar_id >> 3)
                                                                                      + 0x7FFF8000) )
                  {
                    __asan_report_load4();
                  }
                  selected_trial_avatar_id = *trial_avatar_id;
                  break;
                }
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v40,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/player/activity/duel_heart_activity.cpp",
                  "initEnterSceneAvatar",
                  509);
                v19 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                        &v40,
                        (const char (*)[32])"trial avatar config not found: ");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, trial_avatar_id);
                common::milog::MiLogStream::~MiLogStream(&v40);
              }
              __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
            }
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v22 = (unsigned int)Player::getAvatarComp(this->player_);
            PlayerAvatarComp::createTrialAvatar((PlayerAvatarComp *const)(v4 + 160), v22, selected_trial_avatar_id);
            if ( std::operator==<TrialAvatar>((const std::shared_ptr<TrialAvatar> *)(v4 + 160), 0LL) )
            {
              common::milog::MiLogStream::create(
                &v40,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/duel_heart_activity.cpp",
                "initEnterSceneAvatar",
                522);
              common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                &v40,
                (const char (*)[27])"create trial avatar failed");
              common::milog::MiLogStream::~MiLogStream(&v40);
              v7 = -1;
            }
            else
            {
              proto::TrialAvatarGrantRecord::TrialAvatarGrantRecord((proto::TrialAvatarGrantRecord *const)(v4 + 224));
              proto::TrialAvatarGrantRecord::set_grant_reason((proto::TrialAvatarGrantRecord *const)(v4 + 224), 0xEu);
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              v23 = Player::getAvatarComp(this->player_);
              std::shared_ptr<TrialAvatar>::shared_ptr(&v39, (const std::shared_ptr<TrialAvatar> *)(v4 + 160));
              PlayerAvatarComp::addTrialAvatar(
                (PlayerAvatarComp *const)(v4 + 192),
                (TrialAvatarPtr *)v23,
                (const proto::TrialAvatarGrantRecord *)&v39);
              LOBYTE(v23) = std::operator==<TrialAvatar>(0LL, (const std::shared_ptr<TrialAvatar> *)(v4 + 192));
              std::shared_ptr<TrialAvatar>::~shared_ptr((std::shared_ptr<TrialAvatar> *const)(v4 + 192));
              std::shared_ptr<TrialAvatar>::~shared_ptr(&v39);
              if ( (_BYTE)v23 )
              {
                common::milog::MiLogStream::create(
                  &v40,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/activity/duel_heart_activity.cpp",
                  "initEnterSceneAvatar",
                  529);
                common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(&v40, (const char (*)[24])off_25D26B40);
                common::milog::MiLogStream::~MiLogStream(&v40);
                v7 = -1;
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v40,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/player/activity/duel_heart_activity.cpp",
                  "initEnterSceneAvatar",
                  533);
                v24 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                        &v40,
                        (const char (*)[22])"create trial avatar: ");
                v25 = std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
                __for_end._M_current = (const unsigned int *)Avatar::getGuid(v25);
                common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                  v24,
                  (const unsigned __int64 *)&__for_end);
                common::milog::MiLogStream::~MiLogStream(&v40);
                v26 = std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
                Guid = Avatar::getGuid(v26);
                DuelHeartActivity::setInDungeonAvatar(this, Guid);
                std::vector<std::shared_ptr<Avatar>>::emplace_back<std::shared_ptr&<TrialAvatar>>(
                  enter_scene_avatar_vec,
                  (std::shared_ptr<TrialAvatar> *)(v4 + 160),
                  (std::shared_ptr<TrialAvatar> *)(v4 + 160));
                std::shared_ptr<Avatar>::operator=<TrialAvatar>(
                  appear_avatar_ptr,
                  (const std::shared_ptr<TrialAvatar> *)(v4 + 160));
                v7 = 0;
              }
              proto::TrialAvatarGrantRecord::~TrialAvatarGrantRecord((proto::TrialAvatarGrantRecord *const)(v4 + 224));
            }
            std::shared_ptr<TrialAvatar>::~shared_ptr((std::shared_ptr<TrialAvatar> *const)(v4 + 160));
          }
          std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v4 + 128));
        }
        else
        {
          common::milog::MiLogStream::create(
            &v40,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/duel_heart_activity.cpp",
            "initEnterSceneAvatar",
            491);
          v17 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                  &v40,
                  (const char (*)[21])"level id not found: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v4 + 48));
          common::milog::MiLogStream::~MiLogStream(&v40);
          v7 = -1;
        }
      }
    }
    std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v4 + 96));
  }
  result = v7;
  if ( v41 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 543: range 00000000165CA358-00000000165CA9B9
void __fastcall DuelHeartActivity::gallerySettle(
        DuelHeartActivity *const this,
        uint32_t level_id,
        uint32_t difficulty,
        uint32_t cost_time,
        unsigned int reason)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  __int64 v8; // rax
  const unsigned int *v9; // rdx
  char v10; // cl
  const unsigned int *v11; // rdx
  const unsigned int *v12; // rdx
  char v13; // al
  unsigned int *v14; // rdx
  unsigned __int64 v15; // rcx
  unsigned int v16; // esi
  unsigned int *v17; // rdx
  unsigned int v18; // esi
  unsigned int *v19; // r9
  PlayerEventComp *EventComp; // r14
  std::shared_ptr<DuelHeartGallerySettleEvent> *v21; // rax
  bool *v22; // [rsp+0h] [rbp-110h]
  unsigned int *reasona; // [rsp+8h] [rbp-108h]
  bool is_new_record; // [rsp+2Fh] [rbp-E1h]
  std::tuple_element<0,std::pair<DuelHeartActivity::LevelData*,DuelHeartActivity::DifficultyData*> >::type *level_ptr; // [rsp+30h] [rbp-E0h]
  unsigned __int64 difficulty_ptr; // [rsp+38h] [rbp-D8h]
  std::pair<DuelHeartActivity::LevelData*,DuelHeartActivity::DifficultyData*> __in; // [rsp+40h] [rbp-D0h] BYREF
  std::shared_ptr<BaseEvent> p_event_ptr; // [rsp+50h] [rbp-C0h] BYREF
  char v30[176]; // [rsp+60h] [rbp-B0h] BYREF

  reasona = (unsigned int *)__PAIR64__(cost_time, reason);
  v5 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(128LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "5 32 1 11 is_succ:553 48 4 12 level_id:542 64 4 14 difficulty:542 80 4 13 cost_time:542 96 16 13 event_ptr:576";
  *(_QWORD *)(v5 + 16) = DuelHeartActivity::gallerySettle;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556927;
  v7[536862722] = -234556924;
  v7[536862723] = -202178560;
  *(_DWORD *)(v5 + 48) = level_id;
  *(_DWORD *)(v5 + 64) = difficulty;
  *(_DWORD *)(v5 + 80) = HIDWORD(reasona);
  __in = DuelHeartActivity::findLevelDifficultyData(this, *(_DWORD *)(v5 + 48), *(_DWORD *)(v5 + 64));
  level_ptr = std::get<0ul,DuelHeartActivity::LevelData *,DuelHeartActivity::DifficultyData *>(&__in);
  difficulty_ptr = (unsigned __int64)std::get<1ul,DuelHeartActivity::LevelData *,DuelHeartActivity::DifficultyData *>(&__in);
  if ( *(_BYTE *)(((unsigned __int64)level_ptr >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( *level_ptr )
  {
    if ( *(_BYTE *)((difficulty_ptr >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( *(_QWORD *)difficulty_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)level_ptr >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v8 = (__int64)*level_ptr;
      if ( *(char *)(((unsigned __int64)&(*level_ptr)->is_open >> 3) + 0x7FFF8000) < 0 )
        v8 = __asan_report_load1(&(*level_ptr)->is_open);
      if ( *(_BYTE *)(v8 + 48) == 1 )
      {
        if ( *(_BYTE *)((difficulty_ptr >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v9 = *(const unsigned int **)difficulty_ptr;
        v10 = *(_BYTE *)(((unsigned __int64)(*(_QWORD *)difficulty_ptr + 4LL) >> 3) + 0x7FFF8000);
        if ( v10 != 0 && ((*(_BYTE *)difficulty_ptr + 4) & 7) >= v10 )
          __asan_report_load1(*(_QWORD *)difficulty_ptr + 4LL);
        if ( *((_BYTE *)v9 + 4) == 1 )
        {
          *(_BYTE *)(v5 + 32) = (_DWORD)reasona == 3;
          if ( *(_BYTE *)(v5 + 32) )
          {
            if ( *(_BYTE *)((difficulty_ptr >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v11 = *(const unsigned int **)difficulty_ptr;
            if ( *(_BYTE *)((*(_QWORD *)difficulty_ptr >> 3) + 0x7FFF8000LL) != 0
              && (char)((*(_QWORD *)difficulty_ptr & 7) + 3) >= *(_BYTE *)((*(_QWORD *)difficulty_ptr >> 3)
                                                                         + 0x7FFF8000LL) )
            {
              __asan_report_load4();
            }
            if ( *v11 > *(_DWORD *)(v5 + 80) )
              goto LABEL_29;
            v12 = *(const unsigned int **)difficulty_ptr;
            if ( *(_BYTE *)((*(_QWORD *)difficulty_ptr >> 3) + 0x7FFF8000LL) != 0
              && (char)((*(_QWORD *)difficulty_ptr & 7) + 3) >= *(_BYTE *)((*(_QWORD *)difficulty_ptr >> 3)
                                                                         + 0x7FFF8000LL) )
            {
              __asan_report_load4();
            }
            if ( *v12 )
              v13 = 0;
            else
LABEL_29:
              v13 = 1;
            is_new_record = v13;
            if ( v13 )
            {
              if ( *(_BYTE *)((difficulty_ptr >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              v14 = (unsigned int *)std::min<unsigned int>(
                                      (const unsigned int *)(v5 + 80),
                                      *(const unsigned int **)difficulty_ptr);
              if ( *(_BYTE *)((difficulty_ptr >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              v15 = *(_QWORD *)difficulty_ptr;
              if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              v16 = *v14;
              if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) != 0
                && (char)((v15 & 7) + 3) >= *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
              {
                __asan_report_store4(v15);
              }
              *(_DWORD *)v15 = v16;
            }
            else
            {
              if ( *(_BYTE *)((difficulty_ptr >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              v17 = *(unsigned int **)difficulty_ptr;
              v18 = *(_DWORD *)(v5 + 80);
              if ( *(_BYTE *)((*(_QWORD *)difficulty_ptr >> 3) + 0x7FFF8000LL) != 0
                && (char)((*(_QWORD *)difficulty_ptr & 7) + 3) >= *(_BYTE *)((*(_QWORD *)difficulty_ptr >> 3)
                                                                           + 0x7FFF8000LL) )
              {
                __asan_report_store4(*(_QWORD *)difficulty_ptr);
              }
              *v17 = v18;
            }
            DuelHeartActivity::sendSettleNotify(this, *(_DWORD *)(v5 + 80), 1, is_new_record);
          }
          else
          {
            DuelHeartActivity::sendSettleNotify(this, *(_DWORD *)(v5 + 80), 0, 0);
          }
          DuelHeartActivity::openLevelDifficulty(this, *(_DWORD *)(v5 + 48), *(_DWORD *)(v5 + 64) + 1);
          common::tools::perf::make_shared<DuelHeartGallerySettleEvent,unsigned int &,unsigned int &,bool &,unsigned int &>(
            (unsigned int *)(v5 + 96),
            (unsigned int *)(v5 + 48),
            (bool *)(v5 + 64),
            (unsigned int *)(v5 + 32),
            (unsigned int *)(v5 + 80),
            v19,
            v22,
            reasona);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          EventComp = Player::getEventComp(this->player_);
          v21 = std::move<std::shared_ptr<DuelHeartGallerySettleEvent> &>((std::shared_ptr<DuelHeartGallerySettleEvent> *)(v5 + 96));
          std::shared_ptr<BaseEvent>::shared_ptr<DuelHeartGallerySettleEvent,void>(&p_event_ptr, v21);
          PlayerEventComp::notifyEvent(EventComp, &p_event_ptr);
          std::shared_ptr<BaseEvent>::~shared_ptr(&p_event_ptr);
          BaseActivity::notifyClientData(this, 0);
          std::shared_ptr<DuelHeartGallerySettleEvent>::~shared_ptr((std::shared_ptr<DuelHeartGallerySettleEvent> *const)(v5 + 96));
        }
      }
    }
  }
  if ( v30 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 583: range 00000000165CA9BA-00000000165CAD54
void __cdecl DuelHeartActivity::recallInDungeonAvatar(DuelHeartActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  PlayerAvatarComp *AvatarComp; // [rsp+10h] [rbp-D0h]
  std::allocator<long unsigned int> __a; // [rsp+27h] [rbp-B9h] BYREF
  std::initializer_list<long unsigned int> __l; // [rsp+28h] [rbp-B8h] BYREF
  common::milog::MiLogStream v11; // [rsp+50h] [rbp-90h] BYREF
  char v12[112]; // [rsp+70h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 7 ret:589";
  *(_QWORD *)(v1 + 16) = DuelHeartActivity::recallInDungeonAvatar;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&this->in_dungeon_avatar_guid_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( this->in_dungeon_avatar_guid_ )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/duel_heart_activity.cpp",
      "recallInDungeonAvatar",
      588);
    v4 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
           &v11,
           (const char (*)[24])"recallIndungeonAvatar: ");
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v4, &this->in_dungeon_avatar_guid_);
    common::milog::MiLogStream::~MiLogStream(&v11);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    AvatarComp = Player::getAvatarComp(this->player_);
    if ( *(_BYTE *)(((unsigned __int64)&this->in_dungeon_avatar_guid_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    __l._M_array = (std::initializer_list<long unsigned int>::iterator)this->in_dungeon_avatar_guid_;
    std::allocator<unsigned long>::allocator(&__a);
    std::vector<unsigned long>::vector(
      (std::vector<long unsigned int> *const)&__l._M_len,
      (std::initializer_list<long unsigned int>)__PAIR128__(1LL, &__l),
      &__a);
    *(_DWORD *)(v1 + 32) = PlayerAvatarComp::delInformalAvatarBatchAndReplaceByAvatarTeam(
                             AvatarComp,
                             (const std::vector<long unsigned int> *)&__l._M_len);
    std::vector<unsigned long>::~vector((std::vector<long unsigned int> *const)&__l._M_len);
    std::allocator<unsigned long>::~allocator(&__a);
    if ( *(_DWORD *)(v1 + 32) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/duel_heart_activity.cpp",
        "recallInDungeonAvatar",
        592);
      v5 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             &v11,
             (const char (*)[27])"delInformalAvatar failed: ");
      v6 = common::milog::MiLogStream::operator<<<int,(int *)0>(v5, (const int *)(v1 + 32));
      v7 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v6, (const char (*)[9])", guid: ");
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v7, &this->in_dungeon_avatar_guid_);
      common::milog::MiLogStream::~MiLogStream(&v11);
    }
    DuelHeartActivity::clearInDungeonAvatar(this);
  }
  if ( v12 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 598: range 00000000165CAD56-00000000165CAED8
void __cdecl DuelHeartActivity::onLeaveSceneEvent(DuelHeartActivity *const this, const LeaveSceneEvent *event)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  DungeonScene *v5; // rax
  char v6[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 21 dungeon_scene_ptr:600";
  *(_QWORD *)(v2 + 16) = DuelHeartActivity::onLeaveSceneEvent;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene<DungeonScene>((PlayerSceneComp *const)(v2 + 32));
  if ( !std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v2 + 32)) )
  {
    v5 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( DungeonScene::isEnterByDuelHeartActivity(v5) )
      DuelHeartActivity::recallInDungeonAvatar(this);
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 613: range 00000000165CAEDA-00000000165CB074
void __cdecl DuelHeartActivity::sendSettleNotify(
        DuelHeartActivity *const this,
        uint32_t cost_time,
        bool is_succ,
        bool is_new_record)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r13
  char v9[128]; // [rsp+20h] [rbp-80h] BYREF

  v4 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 32 10 notify:614";
  *(_QWORD *)(v4 + 16) = DuelHeartActivity::sendSettleNotify;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450888) = -202116109;
  proto::DuelHeartSettleNotify::DuelHeartSettleNotify((proto::DuelHeartSettleNotify *const)(v4 + 32));
  proto::DuelHeartSettleNotify::set_cost_time((proto::DuelHeartSettleNotify *const)(v4 + 32), cost_time);
  proto::DuelHeartSettleNotify::set_is_succ((proto::DuelHeartSettleNotify *const)(v4 + 32), is_succ);
  proto::DuelHeartSettleNotify::set_is_new_record((proto::DuelHeartSettleNotify *const)(v4 + 32), is_new_record);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v4 + 32));
  proto::DuelHeartSettleNotify::~DuelHeartSettleNotify((proto::DuelHeartSettleNotify *const)(v4 + 32));
  if ( v9 == (char *)v4 )
  {
    *(_DWORD *)((v4 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 622: range 00000000165CB076-00000000165CB2E1
void __fastcall DuelHeartActivity::openLevel(DuelHeartActivity *const this, uint32_t level_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::map<unsigned int,DuelHeartActivity::DifficultyData>::mapped_type *v5; // rdx
  bool *p_is_open; // rax
  std::map<unsigned int,DuelHeartActivity::DifficultyData>::mapped_type *v7; // rdx
  bool *v8; // rax
  common::milog::MiLogStream *v9; // rax
  std::map<unsigned int,DuelHeartActivity::DifficultyData>::key_type __k; // [rsp+14h] [rbp-8Ch] BYREF
  DuelHeartActivity::LevelData *level_ptr; // [rsp+18h] [rbp-88h]
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-80h] BYREF
  char v13[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 level_id:621";
  *(_QWORD *)(v2 + 16) = DuelHeartActivity::openLevel;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = level_id;
  level_ptr = DuelHeartActivity::findLevelData(this, *(_DWORD *)(v2 + 32));
  if ( level_ptr )
  {
    if ( *(char *)(((unsigned __int64)&level_ptr->is_open >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&level_ptr->is_open);
    level_ptr->is_open = 1;
    __k = 1;
    v5 = std::map<unsigned int,DuelHeartActivity::DifficultyData>::operator[](&level_ptr->difficulty_data_map, &__k);
    p_is_open = &v5->is_open;
    if ( *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_open & 7) >= *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(p_is_open);
    }
    v5->is_open = 1;
    __k = 2;
    v7 = std::map<unsigned int,DuelHeartActivity::DifficultyData>::operator[](&level_ptr->difficulty_data_map, &__k);
    v8 = &v7->is_open;
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)v8 & 7) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(v8);
    }
    v7->is_open = 1;
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/duel_heart_activity.cpp",
      "openLevel",
      633);
    v9 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v12, (const char (*)[13])"open level: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v12);
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
};

// Line 637: range 00000000165CB2E2-00000000165CB6F5
void __fastcall DuelHeartActivity::openLevelDifficulty(
        DuelHeartActivity *const this,
        uint32_t level_id,
        uint32_t difficulty)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  __int64 v6; // rax
  common::milog::MiLogStream *v7; // rax
  __int64 v8; // rdx
  char v9; // cl
  __int64 v10; // rdx
  char v11; // cl
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  std::tuple_element<0,std::pair<DuelHeartActivity::LevelData*,DuelHeartActivity::DifficultyData*> >::type *level_ptr; // [rsp+10h] [rbp-C0h]
  std::tuple_element<1,std::pair<DuelHeartActivity::LevelData*,DuelHeartActivity::DifficultyData*> >::type *difficulty_ptr; // [rsp+18h] [rbp-B8h]
  std::pair<DuelHeartActivity::LevelData*,DuelHeartActivity::DifficultyData*> __in; // [rsp+20h] [rbp-B0h] BYREF
  common::milog::MiLogStream v19; // [rsp+30h] [rbp-A0h] BYREF
  char v20[128]; // [rsp+50h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 12 level_id:636 64 4 14 difficulty:636";
  *(_QWORD *)(v3 + 16) = DuelHeartActivity::openLevelDifficulty;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 48) = level_id;
  *(_DWORD *)(v3 + 64) = difficulty;
  __in = DuelHeartActivity::findLevelDifficultyData(this, *(_DWORD *)(v3 + 48), *(_DWORD *)(v3 + 64));
  level_ptr = std::get<0ul,DuelHeartActivity::LevelData *,DuelHeartActivity::DifficultyData *>(&__in);
  difficulty_ptr = std::get<1ul,DuelHeartActivity::LevelData *,DuelHeartActivity::DifficultyData *>(&__in);
  if ( *(_BYTE *)(((unsigned __int64)level_ptr >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( *level_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)difficulty_ptr >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( *difficulty_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)level_ptr >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v6 = (__int64)*level_ptr;
      if ( *(char *)(((unsigned __int64)&(*level_ptr)->is_open >> 3) + 0x7FFF8000) < 0 )
        v6 = __asan_report_load1(&(*level_ptr)->is_open);
      if ( *(_BYTE *)(v6 + 48) != 1 )
      {
        common::milog::MiLogStream::create(
          &v19,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/duel_heart_activity.cpp",
          "openLevelDifficulty",
          645);
        v7 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
               &v19,
               (const char (*)[20])"level is not open: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v19);
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)difficulty_ptr >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v8 = (__int64)*difficulty_ptr;
        v9 = *(_BYTE *)(((unsigned __int64)&(*difficulty_ptr)->is_open >> 3) + 0x7FFF8000);
        if ( v9 != 0 && ((*(_BYTE *)difficulty_ptr + 4) & 7) >= v9 )
          __asan_report_load1(&(*difficulty_ptr)->is_open);
        if ( *(_BYTE *)(v8 + 4) != 1 )
        {
          v10 = (__int64)*difficulty_ptr;
          v11 = *(_BYTE *)(((unsigned __int64)&(*difficulty_ptr)->is_open >> 3) + 0x7FFF8000);
          if ( v11 != 0 && ((*(_BYTE *)difficulty_ptr + 4) & 7) >= v11 )
            __asan_report_store1(&(*difficulty_ptr)->is_open);
          *(_BYTE *)(v10 + 4) = 1;
          common::milog::MiLogStream::create(
            &v19,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/duel_heart_activity.cpp",
            "openLevelDifficulty",
            651);
          v12 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                  &v19,
                  (const char (*)[18])"open difficulty: ");
          v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v12,
                  (const unsigned int *)(v3 + 48));
          v14 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v13, (const char (*)[2])"@");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 64));
          common::milog::MiLogStream::~MiLogStream(&v19);
        }
      }
    }
  }
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
};

// Line 656: range 00000000165CB6F6-00000000165CB81B
void __cdecl DuelHeartActivity::openAllLevelByGm(DuelHeartActivity *const this)
{
  std::unordered_map<unsigned int,data::ActivityDuelHeartLevelExcelConfig>::const_iterator __for_begin; // [rsp+10h] [rbp-40h] BYREF
  std::unordered_map<unsigned int,data::ActivityDuelHeartLevelExcelConfig>::const_iterator __for_end; // [rsp+18h] [rbp-38h] BYREF
  const std::unordered_map<unsigned int,data::ActivityDuelHeartLevelExcelConfig> *__for_range; // [rsp+20h] [rbp-30h]
  const std::pair<unsigned int const,data::ActivityDuelHeartLevelExcelConfig> *v4; // [rsp+28h] [rbp-28h]
  std::tuple_element<0,const std::pair<unsigned int const,data::ActivityDuelHeartLevelExcelConfig> >::type *level_id; // [rsp+30h] [rbp-20h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivityDuelHeartLevelExcelConfig> >::type *_; // [rsp+38h] [rbp-18h]
  std::shared_ptr<Config> v7; // [rsp+40h] [rbp-10h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v7);
  __for_range = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v7)->design_config.txt_config_mgr.activity_duel_heart_config_mgr.activity_duel_heart_level_excel_config_map;
  std::shared_ptr<Config>::~shared_ptr(&v7);
  __for_begin._M_cur = std::unordered_map<unsigned int,data::ActivityDuelHeartLevelExcelConfig>::begin(__for_range)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,data::ActivityDuelHeartLevelExcelConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ActivityDuelHeartLevelExcelConfig>,false>(
            &__for_begin,
            &__for_end) )
  {
    v4 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityDuelHeartLevelExcelConfig>,false,false>::operator*(&__for_begin);
    level_id = std::get<0ul,unsigned int const,data::ActivityDuelHeartLevelExcelConfig>(v4);
    _ = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivityDuelHeartLevelExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivityDuelHeartLevelExcelConfig>(v4);
    if ( *(_BYTE *)(((unsigned __int64)level_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)level_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)level_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    DuelHeartActivity::openLevel(this, *level_id);
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityDuelHeartLevelExcelConfig>,false,false>::operator++(&__for_begin);
  }
  BaseActivity::notifyClientData(this, 0);
};

// Line 665: range 00000000165CB81C-00000000165CBA05
void __cdecl DuelHeartActivity::resetByGm(DuelHeartActivity *const this)
{
  bool *p_is_open; // rax
  std::map<unsigned int,DuelHeartActivity::LevelData>::iterator __for_begin; // [rsp+10h] [rbp-60h] BYREF
  std::map<unsigned int,DuelHeartActivity::LevelData>::iterator __for_end; // [rsp+18h] [rbp-58h] BYREF
  std::map<unsigned int,DuelHeartActivity::DifficultyData>::iterator __for_begin_0; // [rsp+20h] [rbp-50h] BYREF
  std::map<unsigned int,DuelHeartActivity::DifficultyData>::iterator __for_end_0; // [rsp+28h] [rbp-48h] BYREF
  std::map<unsigned int,DuelHeartActivity::LevelData> *__for_range; // [rsp+30h] [rbp-40h]
  std::pair<unsigned int const,DuelHeartActivity::LevelData> *__in; // [rsp+38h] [rbp-38h]
  std::tuple_element<0,std::pair<unsigned int const,DuelHeartActivity::LevelData> >::type *_; // [rsp+40h] [rbp-30h]
  std::tuple_element<1,std::pair<unsigned int const,DuelHeartActivity::LevelData> >::type *level_data; // [rsp+48h] [rbp-28h]
  std::map<unsigned int,DuelHeartActivity::DifficultyData> *__for_range_0; // [rsp+50h] [rbp-20h]
  std::pair<unsigned int const,DuelHeartActivity::DifficultyData> *v11; // [rsp+58h] [rbp-18h]
  std::tuple_element<0,std::pair<unsigned int const,DuelHeartActivity::DifficultyData> >::type *__0; // [rsp+60h] [rbp-10h]
  std::tuple_element<1,std::pair<unsigned int const,DuelHeartActivity::DifficultyData> >::type *difficulty_data; // [rsp+68h] [rbp-8h]

  __for_range = &this->level_data_map_;
  __for_begin._M_node = std::map<unsigned int,DuelHeartActivity::LevelData>::begin(&this->level_data_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,DuelHeartActivity::LevelData>::end(&this->level_data_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,DuelHeartActivity::LevelData>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,DuelHeartActivity::LevelData>(__in);
    level_data = std::get<1ul,unsigned int const,DuelHeartActivity::LevelData>(__in);
    if ( *(char *)(((unsigned __int64)&level_data->is_open >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&level_data->is_open);
    level_data->is_open = 0;
    __for_range_0 = &level_data->difficulty_data_map;
    __for_begin_0._M_node = std::map<unsigned int,DuelHeartActivity::DifficultyData>::begin(&level_data->difficulty_data_map)._M_node;
    __for_end_0._M_node = std::map<unsigned int,DuelHeartActivity::DifficultyData>::end(__for_range_0)._M_node;
    while ( std::operator!=(&__for_begin_0, &__for_end_0) )
    {
      v11 = std::_Rb_tree_iterator<std::pair<unsigned int const,DuelHeartActivity::DifficultyData>>::operator*(&__for_begin_0);
      __0 = std::get<0ul,unsigned int const,DuelHeartActivity::DifficultyData>(v11);
      difficulty_data = std::get<1ul,unsigned int const,DuelHeartActivity::DifficultyData>(v11);
      p_is_open = &difficulty_data->is_open;
      if ( *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)p_is_open & 7) >= *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) )
      {
        __asan_report_store1(p_is_open);
      }
      difficulty_data->is_open = 0;
      if ( *(_BYTE *)(((unsigned __int64)difficulty_data >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)difficulty_data & 7) + 3) >= *(_BYTE *)(((unsigned __int64)difficulty_data >> 3)
                                                                          + 0x7FFF8000) )
      {
        __asan_report_store4(difficulty_data);
      }
      difficulty_data->cost_time = 0;
      std::_Rb_tree_iterator<std::pair<unsigned int const,DuelHeartActivity::DifficultyData>>::operator++(&__for_begin_0);
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,DuelHeartActivity::LevelData>>::operator++(&__for_begin);
  }
  BaseActivity::notifyClientData(this, 0);
};

// Line 679: range 00000000165CBA06-00000000165CBA74
bool __cdecl DuelHeartActivity::isLevelOpen(DuelHeartActivity *const this, uint32_t level_id)
{
  DuelHeartActivity::LevelData *level_ptr; // [rsp+18h] [rbp-8h]

  level_ptr = DuelHeartActivity::findLevelData(this, level_id);
  if ( !level_ptr )
    return 0;
  if ( *(char *)(((unsigned __int64)&level_ptr->is_open >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&level_ptr->is_open);
  return level_ptr->is_open;
};

// Line 689: range 00000000165CBA76-00000000165CBAEF
bool __cdecl DuelHeartActivity::isDifficultyOpen(DuelHeartActivity *const this, uint32_t level_id, uint32_t difficulty)
{
  DuelHeartActivity::DifficultyData *difficulty_ptr; // [rsp+18h] [rbp-8h]

  difficulty_ptr = DuelHeartActivity::findDifficultyData(this, level_id, difficulty);
  if ( !difficulty_ptr )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&difficulty_ptr->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)difficulty_ptr + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&difficulty_ptr->is_open >> 3)
                                                               + 0x7FFF8000) )
  {
    __asan_report_load1(&difficulty_ptr->is_open);
  }
  return difficulty_ptr->is_open;
};

// Line 699: range 00000000165CBAF0-00000000165CBBC1
DuelHeartActivity::LevelData *__fastcall DuelHeartActivity::findLevelData(
        DuelHeartActivity *const this,
        uint32_t level_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  DuelHeartActivity::LevelData *result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 level_id:698";
  *(_QWORD *)(v2 + 16) = DuelHeartActivity::findLevelData;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = level_id;
  result = common::tools::MiscUtils::findMapValuePointer<std::map<unsigned int,DuelHeartActivity::LevelData>>(
             &this->level_data_map_,
             (const std::map<unsigned int,DuelHeartActivity::LevelData>::key_type *)(v2 + 32));
  if ( v6 == (char *)v2 )
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

// Line 704: range 00000000165CBBC2-00000000165CBBEC
DuelHeartActivity::DifficultyData *__cdecl DuelHeartActivity::findDifficultyData(
        DuelHeartActivity *const this,
        uint32_t level_id,
        uint32_t difficulty)
{
  std::pair<DuelHeartActivity::LevelData*,DuelHeartActivity::DifficultyData*> LevelDifficultyData; // rax

  LevelDifficultyData = DuelHeartActivity::findLevelDifficultyData(this, level_id, difficulty);
  return LevelDifficultyData.second;
};

// Line 709: range 00000000165CBBEE-00000000165CBDAF
DuelHeartActivity::LevelData *__fastcall DuelHeartActivity::findLevelDifficultyData(
        DuelHeartActivity *const this,
        uint32_t level_id,
        uint32_t difficulty)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  DuelHeartActivity::LevelData *result; // rax
  __int64 __x; // [rsp+10h] [rbp-B0h] BYREF
  DuelHeartActivity::DifficultyData *__y; // [rsp+18h] [rbp-A8h] BYREF
  std::pair<std::nullptr_t,std::nullptr_t> __p; // [rsp+20h] [rbp-A0h] BYREF
  std::pair<DuelHeartActivity::LevelData*,DuelHeartActivity::DifficultyData*> v11; // [rsp+30h] [rbp-90h] BYREF
  char v12[128]; // [rsp+40h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 14 difficulty:708 64 8 13 level_ptr:710";
  *(_QWORD *)(v3 + 16) = DuelHeartActivity::findLevelDifficultyData;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = difficulty;
  *(_QWORD *)(v3 + 64) = DuelHeartActivity::findLevelData(this, level_id);
  if ( *(_QWORD *)(v3 + 64) )
  {
    __y = common::tools::MiscUtils::findMapValuePointer<std::map<unsigned int,DuelHeartActivity::DifficultyData>>(
            *(std::map<unsigned int,DuelHeartActivity::DifficultyData> **)(v3 + 64),
            (const std::map<unsigned int,DuelHeartActivity::DifficultyData>::key_type *)(v3 + 48));
    std::pair<DuelHeartActivity::LevelData *,DuelHeartActivity::DifficultyData *>::pair<DuelHeartActivity::LevelData *&,DuelHeartActivity::DifficultyData *,true>(
      &v11,
      (DuelHeartActivity::LevelData **)(v3 + 64),
      &__y);
  }
  else
  {
    __y = 0LL;
    __x = 0LL;
    std::pair<decltype(nullptr),decltype(nullptr)>::pair<decltype(nullptr),decltype(nullptr),true>(&__p, &__x, &__y);
    std::pair<DuelHeartActivity::LevelData *,DuelHeartActivity::DifficultyData *>::pair<decltype(nullptr),decltype(nullptr),true>(
      &v11,
      &__p);
  }
  result = v11.first;
  if ( v12 == (char *)v3 )
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
