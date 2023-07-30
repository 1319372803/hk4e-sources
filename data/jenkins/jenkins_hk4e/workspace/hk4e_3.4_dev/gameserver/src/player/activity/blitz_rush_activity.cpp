// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/blitz_rush_activity.cpp

// Line 35: range 0000000017940FC8-0000000017941587
int32_t __cdecl BlitzRushActivity::fromScheduleBin(
        BlitzRushActivity *const this,
        const proto::ActivityScheduleBin *bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  bool is_content_closed; // dl
  unsigned int *v6; // rcx
  bool *v7; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,bool> >,bool> v8; // rax
  common::milog::MiLogStream *v9; // r14
  unsigned int *v10; // rcx
  BlitzRushParkourLevelRecordData *v11; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,BlitzRushParkourLevelRecordData> >,bool> v12; // rax
  common::milog::MiLogStream *v13; // r14
  bool is_dungeon_unlocked; // cl
  google::protobuf::uint32 v15; // r12d
  std::map<proto::VirtualItem,unsigned int>::mapped_type *v16; // rax
  google::protobuf::uint32 *v17; // rdx
  google::protobuf::uint32 v18; // r12d
  std::map<proto::VirtualItem,unsigned int>::mapped_type *v19; // rax
  google::protobuf::uint32 *v20; // rdx
  int32_t result; // eax
  bool is_open; // [rsp+13h] [rbp-CDh] BYREF
  unsigned int val; // [rsp+14h] [rbp-CCh] BYREF
  google::protobuf::RepeatedPtrField<proto::BlitzRushParkourLevelRecordBin>::const_iterator __for_begin_0; // [rsp+18h] [rbp-C8h] BYREF
  google::protobuf::RepeatedPtrField<proto::BlitzRushParkourLevelRecordBin>::const_iterator __for_end; // [rsp+20h] [rbp-C0h] BYREF
  const proto::BlitzRushScheduleBin *schedule_bin; // [rsp+28h] [rbp-B8h]
  const google::protobuf::RepeatedPtrField<proto::BlitzRushStageBin> *__for_range; // [rsp+30h] [rbp-B0h]
  const google::protobuf::RepeatedPtrField<proto::BlitzRushParkourLevelRecordBin> *__for_range_0; // [rsp+38h] [rbp-A8h]
  const proto::BlitzRushParkourLevelRecordBin *parkour_level_bin; // [rsp+40h] [rbp-A0h]
  const proto::BlitzRushStageBin *stage_bin; // [rsp+48h] [rbp-98h]
  common::milog::MiLogStream v31; // [rsp+50h] [rbp-90h] BYREF
  char v32[112]; // [rsp+70h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 14 record_data:48";
  *(_QWORD *)(v2 + 16) = BlitzRushActivity::fromScheduleBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  schedule_bin = proto::ActivityScheduleBin::blitz_rush_bin(bin);
  is_content_closed = proto::BlitzRushScheduleBin::is_content_closed(schedule_bin);
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_content_closed_);
  this->is_content_closed_ = is_content_closed;
  __for_range = proto::BlitzRushScheduleBin::stage_bin_list(schedule_bin);
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::BlitzRushStageBin>::begin(__for_range).it_;
  *(google::protobuf::RepeatedPtrField<proto::BlitzRushStageBin>::const_iterator *)(v2 + 32) = google::protobuf::RepeatedPtrField<proto::BlitzRushStageBin>::end(__for_range);
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::BlitzRushStageBin const>::operator!=(
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::BlitzRushStageBin> *const)&__for_end,
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::BlitzRushStageBin>::iterator *)(v2 + 32)) )
  {
    stage_bin = google::protobuf::internal::RepeatedPtrIterator<proto::BlitzRushStageBin const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::BlitzRushStageBin> *const)&__for_end);
    is_open = proto::BlitzRushStageBin::is_open(stage_bin);
    val = proto::BlitzRushStageBin::stage_id(stage_bin);
    v8 = std::map<unsigned int,bool>::emplace<unsigned int,bool>(&this->stage_open_map_, &val, &is_open, v6, v7);
    if ( !v8.second )
    {
      common::milog::MiLogStream::create(
        &v31,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/blitz_rush_activity.cpp",
        "fromScheduleBin",
        42);
      v9 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
             &v31,
             (const char (*)[33])"[BLITZ_RUSH] duplicate stage_id:");
      val = proto::BlitzRushStageBin::stage_id(stage_bin);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
      common::milog::MiLogStream::~MiLogStream(&v31);
    }
    google::protobuf::internal::RepeatedPtrIterator<proto::BlitzRushStageBin const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::BlitzRushStageBin> *const)&__for_end);
  }
  __for_range_0 = proto::BlitzRushScheduleBin::parkour_level_record_list(schedule_bin);
  __for_begin_0.it_ = google::protobuf::RepeatedPtrField<proto::BlitzRushParkourLevelRecordBin>::begin(__for_range_0).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::BlitzRushParkourLevelRecordBin>::end(__for_range_0).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::BlitzRushParkourLevelRecordBin const>::operator!=(
            &__for_begin_0,
            &__for_end) )
  {
    parkour_level_bin = google::protobuf::internal::RepeatedPtrIterator<proto::BlitzRushParkourLevelRecordBin const>::operator*(&__for_begin_0);
    *(_DWORD *)(v2 + 32) = 0;
    *(_BYTE *)(v2 + 36) = 0;
    *(_BYTE *)(v2 + 36) = proto::BlitzRushParkourLevelRecordBin::is_open(parkour_level_bin);
    *(_DWORD *)(v2 + 32) = proto::BlitzRushParkourLevelRecordBin::best_record(parkour_level_bin);
    val = proto::BlitzRushParkourLevelRecordBin::level_id(parkour_level_bin);
    v12 = std::map<unsigned int,BlitzRushParkourLevelRecordData>::emplace<unsigned int,BlitzRushParkourLevelRecordData&>(
            &this->parkour_level_record_map_,
            &val,
            (BlitzRushParkourLevelRecordData *)(v2 + 32),
            v10,
            v11);
    if ( !v12.second )
    {
      common::milog::MiLogStream::create(
        &v31,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/blitz_rush_activity.cpp",
        "fromScheduleBin",
        53);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v31,
              (const char (*)[33])"[BLITZ_RUSH] duplicate level_id:");
      val = proto::BlitzRushParkourLevelRecordBin::level_id(parkour_level_bin);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v31);
    }
    google::protobuf::internal::RepeatedPtrIterator<proto::BlitzRushParkourLevelRecordBin const>::operator++(&__for_begin_0);
  }
  is_dungeon_unlocked = proto::BlitzRushScheduleBin::is_dungeon_unlocked(schedule_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_dungeon_unlocked_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 95) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_dungeon_unlocked_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_dungeon_unlocked_);
  }
  this->is_dungeon_unlocked_ = is_dungeon_unlocked;
  std::map<proto::VirtualItem,unsigned int>::clear(&this->activity_coin_map_);
  v15 = proto::BlitzRushScheduleBin::coin_a(schedule_bin);
  val = 127;
  v16 = std::map<proto::VirtualItem,unsigned int>::operator[](
          &this->activity_coin_map_,
          (std::map<proto::VirtualItem,unsigned int>::key_type *)&val);
  v17 = v16;
  if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v16);
  }
  *v17 = v15;
  v18 = proto::BlitzRushScheduleBin::coin_b(schedule_bin);
  val = 128;
  v19 = std::map<proto::VirtualItem,unsigned int>::operator[](
          &this->activity_coin_map_,
          (std::map<proto::VirtualItem,unsigned int>::key_type *)&val);
  v20 = v19;
  if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v19);
  }
  *v20 = v18;
  result = 0;
  if ( v32 == (char *)v2 )
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

// Line 65: range 0000000017941588-0000000017941AF7
int32_t __cdecl BlitzRushActivity::toScheduleBin(const BlitzRushActivity *const this, proto::ActivityScheduleBin *bin)
{
  std::map<unsigned int,bool>::const_iterator __for_begin; // [rsp+18h] [rbp-88h] BYREF
  std::map<unsigned int,bool>::const_iterator __for_end; // [rsp+20h] [rbp-80h] BYREF
  proto::BlitzRushScheduleBin *schedule_bin; // [rsp+28h] [rbp-78h]
  const std::map<unsigned int,bool> *__for_range; // [rsp+30h] [rbp-70h]
  const std::map<unsigned int,BlitzRushParkourLevelRecordData> *__for_range_0; // [rsp+38h] [rbp-68h]
  const std::map<proto::VirtualItem,unsigned int> *__for_range_1; // [rsp+40h] [rbp-60h]
  const std::pair<const proto::VirtualItem,unsigned int> *v9; // [rsp+48h] [rbp-58h]
  std::tuple_element<0,const std::pair<const proto::VirtualItem,unsigned int> >::type *coin_type; // [rsp+50h] [rbp-50h]
  std::tuple_element<1,const std::pair<const proto::VirtualItem,unsigned int> >::type *coin_num; // [rsp+58h] [rbp-48h]
  const std::pair<unsigned int const,BlitzRushParkourLevelRecordData> *v12; // [rsp+60h] [rbp-40h]
  std::tuple_element<0,const std::pair<unsigned int const,BlitzRushParkourLevelRecordData> >::type *level_id; // [rsp+68h] [rbp-38h]
  std::tuple_element<1,const std::pair<unsigned int const,BlitzRushParkourLevelRecordData> >::type *level_record; // [rsp+70h] [rbp-30h]
  proto::BlitzRushParkourLevelRecordBin *parkour_level_bin; // [rsp+78h] [rbp-28h]
  const std::pair<unsigned int const,bool> *v16; // [rsp+80h] [rbp-20h]
  std::tuple_element<0,const std::pair<unsigned int const,bool> >::type *stage_id; // [rsp+88h] [rbp-18h]
  std::tuple_element<1,const std::pair<unsigned int const,bool> >::type *is_open; // [rsp+90h] [rbp-10h]
  proto::BlitzRushStageBin *stage_bin; // [rsp+98h] [rbp-8h]

  schedule_bin = proto::ActivityScheduleBin::mutable_blitz_rush_bin(bin);
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  proto::BlitzRushScheduleBin::set_is_content_closed(schedule_bin, this->is_content_closed_);
  __for_range = &this->stage_open_map_;
  __for_begin._M_node = std::map<unsigned int,bool>::begin(&this->stage_open_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,bool>::end(&this->stage_open_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v16 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,bool>>::operator*(&__for_begin);
    stage_id = std::get<0ul,unsigned int const,bool>(v16);
    is_open = (std::tuple_element<1,const std::pair<unsigned int const,bool> >::type *)std::get<1ul,unsigned int const,bool>(v16);
    stage_bin = proto::BlitzRushScheduleBin::add_stage_bin_list(schedule_bin);
    if ( *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)stage_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::BlitzRushStageBin::set_stage_id(stage_bin, *stage_id);
    if ( *(_BYTE *)(((unsigned __int64)is_open >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)is_open & 7) >= *(_BYTE *)(((unsigned __int64)is_open >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(is_open);
    }
    proto::BlitzRushStageBin::set_is_open(stage_bin, *is_open);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,bool>>::operator++(&__for_begin);
  }
  __for_range_0 = &this->parkour_level_record_map_;
  __for_begin._M_node = std::map<unsigned int,BlitzRushParkourLevelRecordData>::begin(&this->parkour_level_record_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,BlitzRushParkourLevelRecordData>::end(__for_range_0)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,BlitzRushParkourLevelRecordData> >::_Self *)&__for_begin,
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,BlitzRushParkourLevelRecordData> >::_Self *)&__for_end) )
  {
    v12 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,BlitzRushParkourLevelRecordData>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,BlitzRushParkourLevelRecordData> > *const)&__for_begin);
    level_id = std::get<0ul,unsigned int const,BlitzRushParkourLevelRecordData>(v12);
    level_record = (std::tuple_element<1,const std::pair<unsigned int const,BlitzRushParkourLevelRecordData> >::type *)std::get<1ul,unsigned int const,BlitzRushParkourLevelRecordData>(v12);
    parkour_level_bin = proto::BlitzRushScheduleBin::add_parkour_level_record_list(schedule_bin);
    if ( *(_BYTE *)(((unsigned __int64)level_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)level_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)level_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::BlitzRushParkourLevelRecordBin::set_level_id(parkour_level_bin, *level_id);
    if ( *(_BYTE *)(((unsigned __int64)&level_record->is_open >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)level_record + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&level_record->is_open >> 3)
                                                               + 0x7FFF8000) )
    {
      __asan_report_load1(&level_record->is_open);
    }
    proto::BlitzRushParkourLevelRecordBin::set_is_open(parkour_level_bin, level_record->is_open);
    if ( *(_BYTE *)(((unsigned __int64)level_record >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)level_record & 7) + 3) >= *(_BYTE *)(((unsigned __int64)level_record >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::BlitzRushParkourLevelRecordBin::set_best_record(parkour_level_bin, level_record->best_record);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,BlitzRushParkourLevelRecordData>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,BlitzRushParkourLevelRecordData> > *const)&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->is_dungeon_unlocked_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 95) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_dungeon_unlocked_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_dungeon_unlocked_);
  }
  proto::BlitzRushScheduleBin::set_is_dungeon_unlocked(schedule_bin, this->is_dungeon_unlocked_);
  __for_range_1 = &this->activity_coin_map_;
  __for_begin._M_node = std::map<proto::VirtualItem,unsigned int>::begin(&this->activity_coin_map_)._M_node;
  __for_end._M_node = std::map<proto::VirtualItem,unsigned int>::end(__for_range_1)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<std::pair<const proto::VirtualItem,unsigned int> >::_Self *)&__for_begin,
            (const std::_Rb_tree_const_iterator<std::pair<const proto::VirtualItem,unsigned int> >::_Self *)&__for_end) )
  {
    v9 = std::_Rb_tree_const_iterator<std::pair<proto::VirtualItem const,unsigned int>>::operator*((const std::_Rb_tree_const_iterator<std::pair<const proto::VirtualItem,unsigned int> > *const)&__for_begin);
    coin_type = std::get<0ul,proto::VirtualItem const,unsigned int>(v9);
    coin_num = (std::tuple_element<1,const std::pair<const proto::VirtualItem,unsigned int> >::type *)std::get<1ul,proto::VirtualItem const,unsigned int>(v9);
    if ( *(_BYTE *)(((unsigned __int64)coin_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)coin_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)coin_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( *coin_type == ITEM_VIRTUAL_BLITZ_RUSH_COIN_A )
    {
      if ( *(_BYTE *)(((unsigned __int64)coin_num >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)coin_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)coin_num >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::BlitzRushScheduleBin::set_coin_a(schedule_bin, *coin_num);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)coin_type >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)coin_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)coin_type >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( *coin_type == ITEM_VIRTUAL_BLITZ_RUSH_COIN_B )
      {
        if ( *(_BYTE *)(((unsigned __int64)coin_num >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)coin_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)coin_num >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto::BlitzRushScheduleBin::set_coin_b(schedule_bin, *coin_num);
      }
    }
    std::_Rb_tree_const_iterator<std::pair<proto::VirtualItem const,unsigned int>>::operator++((std::_Rb_tree_const_iterator<std::pair<const proto::VirtualItem,unsigned int> > *const)&__for_begin);
  }
  return 0;
};

// Line 98: range 0000000017941AF8-0000000017942436
int32_t __cdecl BlitzRushActivity::toClient(BlitzRushActivity *const this, proto::ActivityInfo *activity_info)
{
  common::milog::MiLogStream *v2; // rbx
  const ActivityBlitzRushExcelConfigMgr *v4; // rcx
  common::milog::MiLogStream *v5; // rax
  uint32_t open_day; // ecx
  uint32_t BeginTimeByOpenDay; // eax
  const ActivityBlitzRushExcelConfigMgr *v8; // rcx
  common::milog::MiLogStream *v9; // rax
  uint32_t v10; // ecx
  uint32_t v11; // eax
  LuaConfigMgr *p_lua_config_mgr; // rcx
  common::milog::MiLogStream *v13; // rax
  Vector3 *p_pos; // rbx
  proto::Vector *v15; // rax
  uint32_t ActivityStayTime; // ecx
  uint32_t v17; // eax
  unsigned int val; // [rsp+14h] [rbp-CCh] BYREF
  std::map<unsigned int,bool>::iterator __for_begin; // [rsp+18h] [rbp-C8h] BYREF
  std::map<unsigned int,bool>::iterator __for_end; // [rsp+20h] [rbp-C0h] BYREF
  proto::BlitzRushActivityDetailInfo *detail_info; // [rsp+28h] [rbp-B8h]
  const ActivityBlitzRushExcelConfigMgr *conf_mgr; // [rsp+30h] [rbp-B0h]
  std::map<unsigned int,bool> *__for_range; // [rsp+38h] [rbp-A8h]
  std::map<unsigned int,BlitzRushParkourLevelRecordData> *__for_range_0; // [rsp+40h] [rbp-A0h]
  const std::pair<unsigned int const,BlitzRushParkourLevelRecordData> *v25; // [rsp+48h] [rbp-98h]
  std::tuple_element<0,const std::pair<unsigned int const,BlitzRushParkourLevelRecordData> >::type *level_id; // [rsp+50h] [rbp-90h]
  std::tuple_element<1,const std::pair<unsigned int const,BlitzRushParkourLevelRecordData> >::type *parkour_level_record; // [rsp+58h] [rbp-88h]
  proto::ParkourLevelInfo *parkour_level_info; // [rsp+60h] [rbp-80h]
  const data::BlitzRushParkourExcelConfig *parkour_level_config_ptr; // [rsp+68h] [rbp-78h]
  const GroupInfoScriptConfig *group_info_script_config_ptr; // [rsp+70h] [rbp-70h]
  const std::pair<unsigned int const,bool> *v31; // [rsp+78h] [rbp-68h]
  std::tuple_element<0,const std::pair<unsigned int const,bool> >::type *stage_id; // [rsp+80h] [rbp-60h]
  std::tuple_element<1,const std::pair<unsigned int const,bool> >::type *is_stage_open; // [rsp+88h] [rbp-58h]
  proto::BlitzRushStage *stage; // [rsp+90h] [rbp-50h]
  const data::BlitzRushStageExcelConfig *stage_config_ptr; // [rsp+98h] [rbp-48h]
  std::shared_ptr<Config> v36; // [rsp+A0h] [rbp-40h] BYREF
  common::milog::MiLogStream v37; // [rsp+B0h] [rbp-30h] BYREF

  if ( BaseActivity::toClient((BaseActivity *const)this, activity_info) )
  {
    common::milog::MiLogStream::create(
      &v37,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/blitz_rush_activity.cpp",
      "toClient",
      101);
    v2 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
           &v37,
           (const char (*)[49])"[BLITZ_RUSH] BaseActivity::toClient fails, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
    common::milog::MiLogStream::~MiLogStream(&v37);
    return -1;
  }
  else
  {
    detail_info = proto::ActivityInfo::mutable_blitz_rush_info(activity_info);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v36);
    conf_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v36)->design_config.txt_config_mgr.activity_blitz_rush_config_mgr;
    std::shared_ptr<Config>::~shared_ptr(&v36);
    __for_range = &this->stage_open_map_;
    __for_begin._M_node = std::map<unsigned int,bool>::begin(&this->stage_open_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,bool>::end(&this->stage_open_map_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v31 = std::_Rb_tree_iterator<std::pair<unsigned int const,bool>>::operator*(&__for_begin);
      stage_id = std::get<0ul,unsigned int const,bool>(v31);
      is_stage_open = (std::tuple_element<1,const std::pair<unsigned int const,bool> >::type *)std::get<1ul,unsigned int const,bool>(v31);
      stage = proto::BlitzRushActivityDetailInfo::add_stage_list(detail_info);
      if ( *(_BYTE *)(((unsigned __int64)is_stage_open >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)is_stage_open & 7) >= *(_BYTE *)(((unsigned __int64)is_stage_open >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(is_stage_open);
      }
      proto::BlitzRushStage::set_is_open(stage, *is_stage_open);
      v4 = conf_mgr;
      if ( *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)stage_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      stage_config_ptr = data::ActivityBlitzRushExcelConfigMgrBase::findBlitzRushStageExcelConfig(v4, *stage_id);
      if ( stage_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&stage_config_ptr->open_day >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)stage_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&stage_config_ptr->open_day >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        open_day = stage_config_ptr->open_day;
        if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        BeginTimeByOpenDay = BaseActivity::getBeginTimeByOpenDay(this->schedule_id_, open_day);
        proto::BlitzRushStage::set_open_time(stage, BeginTimeByOpenDay);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v37,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/blitz_rush_activity.cpp",
          "toClient",
          114);
        v5 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
               &v37,
               (const char (*)[49])"[BLITZ_RUSH] stage_config_ptr is null, stage_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, stage_id);
        common::milog::MiLogStream::~MiLogStream(&v37);
      }
      std::_Rb_tree_iterator<std::pair<unsigned int const,bool>>::operator++(&__for_begin);
    }
    __for_range_0 = &this->parkour_level_record_map_;
    __for_begin._M_node = std::map<unsigned int,BlitzRushParkourLevelRecordData>::begin(&this->parkour_level_record_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,BlitzRushParkourLevelRecordData>::end(__for_range_0)._M_node;
    while ( std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,BlitzRushParkourLevelRecordData> >::_Self *)&__for_begin,
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,BlitzRushParkourLevelRecordData> >::_Self *)&__for_end) )
    {
      v25 = std::_Rb_tree_iterator<std::pair<unsigned int const,BlitzRushParkourLevelRecordData>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,BlitzRushParkourLevelRecordData> > *const)&__for_begin);
      level_id = std::get<0ul,unsigned int const,BlitzRushParkourLevelRecordData>(v25);
      parkour_level_record = (std::tuple_element<1,const std::pair<unsigned int const,BlitzRushParkourLevelRecordData> >::type *)std::get<1ul,unsigned int const,BlitzRushParkourLevelRecordData>(v25);
      parkour_level_info = proto::BlitzRushActivityDetailInfo::add_parkour_level_info_list(detail_info);
      if ( *(_BYTE *)(((unsigned __int64)parkour_level_record >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)parkour_level_record & 7) + 3) >= *(_BYTE *)(((unsigned __int64)parkour_level_record >> 3)
                                                                               + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::ParkourLevelInfo::set_best_record(parkour_level_info, parkour_level_record->best_record);
      v8 = conf_mgr;
      if ( *(_BYTE *)(((unsigned __int64)level_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)level_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)level_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      parkour_level_config_ptr = data::ActivityBlitzRushExcelConfigMgrBase::findBlitzRushParkourExcelConfig(
                                   v8,
                                   *level_id);
      if ( parkour_level_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&parkour_level_record->is_open >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)parkour_level_record + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&parkour_level_record->is_open >> 3)
                                                                           + 0x7FFF8000) )
        {
          __asan_report_load1(&parkour_level_record->is_open);
        }
        proto::ParkourLevelInfo::set_is_open(parkour_level_info, parkour_level_record->is_open);
        if ( *(_BYTE *)(((unsigned __int64)&parkour_level_config_ptr->open_day >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)parkour_level_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&parkour_level_config_ptr->open_day >> 3)
                                                                                  + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        v10 = parkour_level_config_ptr->open_day;
        if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        v11 = BaseActivity::getBeginTimeByOpenDay(this->schedule_id_, v10);
        proto::ParkourLevelInfo::set_open_time(parkour_level_info, v11);
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v36);
        p_lua_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v36)->design_config.lua_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)&parkour_level_config_ptr->group_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&parkour_level_config_ptr->group_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        group_info_script_config_ptr = LuaConfigMgr::findGroupInfoConfig(
                                         p_lua_config_mgr,
                                         parkour_level_config_ptr->group_id);
        std::shared_ptr<Config>::~shared_ptr(&v36);
        if ( group_info_script_config_ptr )
        {
          p_pos = &group_info_script_config_ptr->pos;
          v15 = proto::ParkourLevelInfo::mutable_pos(parkour_level_info);
          Vector3::toClient(p_pos, v15);
        }
        else
        {
          common::milog::MiLogStream::create(
            &v37,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/blitz_rush_activity.cpp",
            "toClient",
            134);
          v13 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
                  &v37,
                  (const char (*)[61])"[BLITZ_RUSH] group_info_script_config_ptr is null, group_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v13,
            &parkour_level_config_ptr->group_id);
          common::milog::MiLogStream::~MiLogStream(&v37);
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v37,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/blitz_rush_activity.cpp",
          "toClient",
          126);
        v9 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
               &v37,
               (const char (*)[57])"[BLITZ_RUSH] parkour_level_config_ptr is null, level_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, level_id);
        common::milog::MiLogStream::~MiLogStream(&v37);
      }
      std::_Rb_tree_iterator<std::pair<unsigned int const,BlitzRushParkourLevelRecordData>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,BlitzRushParkourLevelRecordData> > *const)&__for_begin);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    ActivityStayTime = ActivityBlitzRushExcelConfigMgr::getActivityStayTime(conf_mgr, this->activity_id_);
    if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v17 = BaseActivity::getBeginTimeByOpenDay(this->schedule_id_, ActivityStayTime);
    proto::BlitzRushActivityDetailInfo::set_content_close_time(detail_info, v17);
    if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->is_content_closed_);
    proto::BlitzRushActivityDetailInfo::set_is_content_closed(detail_info, this->is_content_closed_);
    return 0;
  }
};

// Line 145: range 0000000017942438-0000000017942495
int32_t __cdecl BlitzRushActivity::init(BlitzRushActivity *const this)
{
  if ( BaseActivity::isOpening((const BaseActivity *const)this, 0)
    && !BaseActivity::isSettled((const BaseActivity *const)this) )
  {
    BlitzRushActivity::registerObserver(this);
  }
  return 0;
};

// Line 155: range 0000000017942496-00000000179424B0
void __cdecl BlitzRushActivity::onStart(BlitzRushActivity *const this)
{
  BlitzRushActivity::registerObserver(this);
};

// Line 160: range 00000000179424B2-00000000179429F5
void __cdecl BlitzRushActivity::onPreStart(BlitzRushActivity *const this)
{
  std::map<unsigned int,bool>::mapped_type *v1; // rax
  _BYTE *v2; // rdx
  std::map<unsigned int,BlitzRushParkourLevelRecordData>::mapped_type *v3; // rdx
  bool *p_is_open; // rax
  std::map<unsigned int,BlitzRushParkourLevelRecordData>::mapped_type *v5; // rax
  _DWORD *v6; // rdx
  std::map<proto::VirtualItem,unsigned int>::mapped_type *v7; // rax
  _DWORD *v8; // rdx
  std::map<proto::VirtualItem,unsigned int>::mapped_type *v9; // rax
  _DWORD *v10; // rdx
  std::map<proto::VirtualItem,unsigned int>::key_type __k; // [rsp+14h] [rbp-9Ch] BYREF
  std::unordered_map<unsigned int,data::BlitzRushStageExcelConfig>::const_iterator __for_begin; // [rsp+18h] [rbp-98h] BYREF
  std::unordered_map<unsigned int,data::BlitzRushStageExcelConfig>::const_iterator __for_end; // [rsp+20h] [rbp-90h] BYREF
  const ActivityBlitzRushExcelConfigMgr *config_mgr; // [rsp+28h] [rbp-88h]
  const std::unordered_map<unsigned int,data::BlitzRushStageExcelConfig> *__for_range; // [rsp+30h] [rbp-80h]
  const std::unordered_map<unsigned int,data::BlitzRushParkourExcelConfig> *__for_range_0; // [rsp+38h] [rbp-78h]
  const std::pair<unsigned int const,data::BlitzRushParkourExcelConfig> *v17; // [rsp+40h] [rbp-70h]
  std::tuple_element<0,const std::pair<unsigned int const,data::BlitzRushParkourExcelConfig> >::type *level_id; // [rsp+48h] [rbp-68h]
  std::tuple_element<1,const std::pair<unsigned int const,data::BlitzRushParkourExcelConfig> >::type *parkour_level_config; // [rsp+50h] [rbp-60h]
  const std::pair<unsigned int const,data::BlitzRushStageExcelConfig> *v20; // [rsp+58h] [rbp-58h]
  std::tuple_element<0,const std::pair<unsigned int const,data::BlitzRushStageExcelConfig> >::type *stage_id; // [rsp+60h] [rbp-50h]
  std::tuple_element<1,const std::pair<unsigned int const,data::BlitzRushStageExcelConfig> >::type *stage_config; // [rsp+68h] [rbp-48h]
  std::shared_ptr<Config> v23; // [rsp+70h] [rbp-40h] BYREF
  common::milog::MiLogStream v24; // [rsp+80h] [rbp-30h] BYREF

  if ( !std::map<unsigned int,bool>::empty(&this->stage_open_map_) )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/blitz_rush_activity.cpp",
      "onPreStart",
      163);
    common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
      &v24,
      (const char (*)[42])"[BLITZ_RUSH] stage_open_map_ is not empty");
    common::milog::MiLogStream::~MiLogStream(&v24);
    std::map<unsigned int,bool>::clear(&this->stage_open_map_);
  }
  if ( !std::map<unsigned int,BlitzRushParkourLevelRecordData>::empty(&this->parkour_level_record_map_) )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/blitz_rush_activity.cpp",
      "onPreStart",
      168);
    common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
      &v24,
      (const char (*)[52])"[BLITZ_RUSH] parkour_level_record_map_ is not empty");
    common::milog::MiLogStream::~MiLogStream(&v24);
    std::map<unsigned int,BlitzRushParkourLevelRecordData>::clear(&this->parkour_level_record_map_);
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v23);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v23)->design_config.txt_config_mgr.activity_blitz_rush_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v23);
  __for_range = &config_mgr->blitz_rush_stage_excel_config_map;
  __for_begin._M_cur = std::unordered_map<unsigned int,data::BlitzRushStageExcelConfig>::begin(&config_mgr->blitz_rush_stage_excel_config_map)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,data::BlitzRushStageExcelConfig>::end(&config_mgr->blitz_rush_stage_excel_config_map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::BlitzRushStageExcelConfig>,false>(
            &__for_begin,
            &__for_end) )
  {
    v20 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BlitzRushStageExcelConfig>,false,false>::operator*(&__for_begin);
    stage_id = std::get<0ul,unsigned int const,data::BlitzRushStageExcelConfig>(v20);
    stage_config = (std::tuple_element<1,const std::pair<unsigned int const,data::BlitzRushStageExcelConfig> >::type *)std::get<1ul,unsigned int const,data::BlitzRushStageExcelConfig>(v20);
    v1 = std::map<unsigned int,bool>::operator[](&this->stage_open_map_, stage_id);
    v2 = v1;
    if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)v1 & 7) >= *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(v1);
    }
    *v2 = 0;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BlitzRushStageExcelConfig>,false,false>::operator++(&__for_begin);
  }
  __for_range_0 = &config_mgr->blitz_rush_parkour_excel_config_map;
  __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BlitzRushStageExcelConfig>,false>::__node_type *)std::unordered_map<unsigned int,data::BlitzRushParkourExcelConfig>::begin(&config_mgr->blitz_rush_parkour_excel_config_map)._M_cur;
  __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BlitzRushStageExcelConfig>,false>::__node_type *)std::unordered_map<unsigned int,data::BlitzRushParkourExcelConfig>::end(__for_range_0)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::BlitzRushParkourExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BlitzRushParkourExcelConfig>,false> *)&__for_begin,
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BlitzRushParkourExcelConfig>,false> *)&__for_end) )
  {
    v17 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BlitzRushParkourExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BlitzRushParkourExcelConfig>,false,false> *const)&__for_begin);
    level_id = std::get<0ul,unsigned int const,data::BlitzRushParkourExcelConfig>(v17);
    parkour_level_config = (std::tuple_element<1,const std::pair<unsigned int const,data::BlitzRushParkourExcelConfig> >::type *)std::get<1ul,unsigned int const,data::BlitzRushParkourExcelConfig>(v17);
    v3 = std::map<unsigned int,BlitzRushParkourLevelRecordData>::operator[](&this->parkour_level_record_map_, level_id);
    p_is_open = &v3->is_open;
    if ( *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_open & 7) >= *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(p_is_open);
    }
    v3->is_open = 0;
    v5 = std::map<unsigned int,BlitzRushParkourLevelRecordData>::operator[](&this->parkour_level_record_map_, level_id);
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v5);
    }
    *v6 = 0;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BlitzRushParkourExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BlitzRushParkourExcelConfig>,false,false> *const)&__for_begin);
  }
  if ( !std::map<proto::VirtualItem,unsigned int>::empty(&this->activity_coin_map_) )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/blitz_rush_activity.cpp",
      "onPreStart",
      183);
    common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
      &v24,
      (const char (*)[54])"[BLITZ_RUSH] prestart activity_coin_map_ is not empty");
    common::milog::MiLogStream::~MiLogStream(&v24);
    std::map<proto::VirtualItem,unsigned int>::clear(&this->activity_coin_map_);
  }
  __k = ITEM_VIRTUAL_BLITZ_RUSH_COIN_A;
  v7 = std::map<proto::VirtualItem,unsigned int>::operator[](&this->activity_coin_map_, &__k);
  v8 = v7;
  if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v7);
  }
  *v8 = 0;
  __k = ITEM_VIRTUAL_BLITZ_RUSH_COIN_B;
  v9 = std::map<proto::VirtualItem,unsigned int>::operator[](&this->activity_coin_map_, &__k);
  v10 = v9;
  if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v9);
  }
  *v10 = 0;
};

// Line 191: range 00000000179429F6-0000000017942E0F
void __cdecl BlitzRushActivity::registerObserver(BlitzRushActivity *const this)
{
  unsigned __int64 p_M_start; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::weak_ptr<BlitzRushActivity> *EventComp; // [rsp+10h] [rbp-F0h]
  std::weak_ptr<BlitzRushActivity> *p_this_wtr; // [rsp+20h] [rbp-E0h]
  PlayerEventComp v6; // [rsp+30h] [rbp-D0h] BYREF

  p_M_start = (unsigned __int64)&v6.event_center_.context_.pending_que_.c._M_impl._M_start;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      p_M_start = v2;
  }
  *(_QWORD *)p_M_start = 1102416563LL;
  *(_QWORD *)(p_M_start + 8) = "2 32 16 12 this_ptr:192 64 16 12 this_wtr:198";
  *(_QWORD *)(p_M_start + 16) = BlitzRushActivity::registerObserver;
  v3 = (_DWORD *)(p_M_start >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  toThisPtr<BlitzRushActivity>((BlitzRushActivity *)(p_M_start + 32));
  if ( std::operator==<BlitzRushActivity>(0LL, (const std::shared_ptr<BlitzRushActivity> *)(p_M_start + 32)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v6.event_center_,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/blitz_rush_activity.cpp",
      "registerObserver",
      195);
    common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
      (common::milog::MiLogStream *const)&v6.event_center_,
      (const char (*)[49])"dynamic_pointer_cast to BlitzRushActivity failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v6.event_center_);
  }
  else
  {
    std::weak_ptr<BlitzRushActivity>::weak_ptr<BlitzRushActivity,void>(
      (std::weak_ptr<BlitzRushActivity> *const)(p_M_start + 64),
      (const std::shared_ptr<BlitzRushActivity> *)(p_M_start + 32));
    if ( std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->challenge_finish_wtr_) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      p_this_wtr = (std::weak_ptr<BlitzRushActivity> *)Player::getEventComp(this->player_);
      std::weak_ptr<BlitzRushActivity>::weak_ptr(
        (std::weak_ptr<BlitzRushActivity> *const)&v6._M_weak_this._M_refcount,
        (const std::weak_ptr<BlitzRushActivity> *)(p_M_start + 64));
      PlayerEventComp::registerObserver<BlitzRushActivity,ChallengeFinishEvent>(
        &v6,
        p_this_wtr,
        (void (*)(BlitzRushActivity *, const ChallengeFinishEvent *))&v6._M_weak_this._M_refcount);
      std::weak_ptr<Observer>::operator=(&this->challenge_finish_wtr_, (std::weak_ptr<Observer> *)&v6);
      std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v6);
      std::weak_ptr<BlitzRushActivity>::~weak_ptr((std::weak_ptr<BlitzRushActivity> *const)&v6._M_weak_this._M_refcount);
    }
    if ( std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->create_dungeon_wtr_) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      EventComp = (std::weak_ptr<BlitzRushActivity> *)Player::getEventComp(this->player_);
      std::weak_ptr<BlitzRushActivity>::weak_ptr(
        (std::weak_ptr<BlitzRushActivity> *const)&v6,
        (const std::weak_ptr<BlitzRushActivity> *)(p_M_start + 64));
      PlayerEventComp::registerObserver<BlitzRushActivity,CreateDungeonEvent>(
        (PlayerEventComp *const)&v6._M_weak_this._M_refcount,
        EventComp,
        (void (*)(BlitzRushActivity *, const CreateDungeonEvent *))&v6);
      std::weak_ptr<Observer>::operator=(
        &this->create_dungeon_wtr_,
        (std::weak_ptr<Observer> *)&v6._M_weak_this._M_refcount);
      std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v6._M_weak_this._M_refcount);
      std::weak_ptr<BlitzRushActivity>::~weak_ptr((std::weak_ptr<BlitzRushActivity> *const)&v6);
    }
    std::weak_ptr<BlitzRushActivity>::~weak_ptr((std::weak_ptr<BlitzRushActivity> *const)(p_M_start + 64));
  }
  std::shared_ptr<BlitzRushActivity>::~shared_ptr((std::shared_ptr<BlitzRushActivity> *const)(p_M_start + 32));
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

// Line 211: range 0000000017942E10-0000000017942F0E
void __cdecl BlitzRushActivity::unregisterObserver(BlitzRushActivity *const this)
{
  PlayerEventComp *EventComp; // rax
  PlayerEventComp *v2; // rax

  if ( !std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->challenge_finish_wtr_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    EventComp = Player::getEventComp(this->player_);
    PlayerEventComp::unregisterObserver(EventComp, &this->challenge_finish_wtr_);
    std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::reset(&this->challenge_finish_wtr_);
  }
  if ( !std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->create_dungeon_wtr_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v2 = Player::getEventComp(this->player_);
    PlayerEventComp::unregisterObserver(v2, &this->create_dungeon_wtr_);
    std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::reset(&this->create_dungeon_wtr_);
  }
};

// Line 225: range 0000000017942F10-0000000017942F7D
void __cdecl BlitzRushActivity::onSettle(BlitzRushActivity *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  if ( !this->is_content_closed_ )
    BlitzRushActivity::closeContent(this);
  BlitzRushActivity::unregisterObserver(this);
};

// Line 234: range 0000000017942F7E-0000000017942F9D
void __cdecl BlitzRushActivity::onDailyRefresh(BlitzRushActivity *const this)
{
  BaseActivity::notifyClientData((BaseActivity *const)this, 0);
};

// Line 239: range 0000000017942F9E-0000000017943277
void __cdecl BlitzRushActivity::onClear(BlitzRushActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  uint32_t v4; // edi
  std::map<proto::VirtualItem,unsigned int>::iterator __for_begin; // [rsp+10h] [rbp-90h] BYREF
  std::map<proto::VirtualItem,unsigned int>::iterator __for_end; // [rsp+18h] [rbp-88h] BYREF
  std::map<proto::VirtualItem,unsigned int> *__for_range; // [rsp+20h] [rbp-80h]
  const std::pair<const proto::VirtualItem,unsigned int> *v9; // [rsp+28h] [rbp-78h]
  std::tuple_element<0,const std::pair<const proto::VirtualItem,unsigned int> >::type *coin_type; // [rsp+30h] [rbp-70h]
  std::tuple_element<1,const std::pair<const proto::VirtualItem,unsigned int> >::type *coin_num; // [rsp+38h] [rbp-68h]
  char v12[96]; // [rsp+40h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 8 14 sub_reason:245";
  *(_QWORD *)(v1 + 16) = BlitzRushActivity::onClear;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_content_closed_);
  this->is_content_closed_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_dungeon_unlocked_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 95) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_dungeon_unlocked_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_dungeon_unlocked_);
  }
  this->is_dungeon_unlocked_ = 0;
  std::map<unsigned int,bool>::clear(&this->stage_open_map_);
  std::map<unsigned int,BlitzRushParkourLevelRecordData>::clear(&this->parkour_level_record_map_);
  SubItemReason::SubItemReason((SubItemReason *const)(v1 + 32), ACTION_REASON_ACTIVITY_EXPIRE_ITEM);
  __for_range = &this->activity_coin_map_;
  __for_begin._M_node = std::map<proto::VirtualItem,unsigned int>::begin(&this->activity_coin_map_)._M_node;
  __for_end._M_node = std::map<proto::VirtualItem,unsigned int>::end(&this->activity_coin_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v9 = std::_Rb_tree_iterator<std::pair<proto::VirtualItem const,unsigned int>>::operator*(&__for_begin);
    coin_type = std::get<0ul,proto::VirtualItem const,unsigned int>(v9);
    coin_num = (std::tuple_element<1,const std::pair<const proto::VirtualItem,unsigned int> >::type *)std::get<1ul,proto::VirtualItem const,unsigned int>(v9);
    if ( *(_BYTE *)(((unsigned __int64)coin_num >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)coin_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)coin_num >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( *coin_num )
    {
      v4 = *coin_num;
      if ( *(_BYTE *)(((unsigned __int64)coin_type >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)coin_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)coin_type >> 3) + 0x7FFF8000) )
      {
        v4 = (unsigned int)coin_type;
        __asan_report_load4();
      }
      BlitzRushActivity::subActivityCoin(this, *coin_type, v4, (const SubItemReason *)(v1 + 32), 0);
    }
    std::_Rb_tree_iterator<std::pair<proto::VirtualItem const,unsigned int>>::operator++(&__for_begin);
  }
  std::map<proto::VirtualItem,unsigned int>::clear(&this->activity_coin_map_);
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

// Line 257: range 0000000017943278-0000000017943329
void __cdecl BlitzRushActivity::closeContent(BlitzRushActivity *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  if ( !this->is_content_closed_ )
  {
    if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->is_content_closed_);
    this->is_content_closed_ = 1;
    BlitzRushActivity::unregisterObserver(this);
    BaseActivity::notifyClientData((BaseActivity *const)this, 0);
  }
};

// Line 268: range 000000001794332A-0000000017943351
bool __cdecl BlitzRushActivity::isCoinTypeValid(const BlitzRushActivity *const this, proto::VirtualItem coin_type)
{
  return coin_type == ITEM_VIRTUAL_BLITZ_RUSH_COIN_A || coin_type == ITEM_VIRTUAL_BLITZ_RUSH_COIN_B;
};

// Line 273: range 0000000017943352-00000000179434E4
__int64 __fastcall BlitzRushActivity::getActivityCoin(
        const BlitzRushActivity *const this,
        proto::VirtualItem coin_type)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::_Rb_tree_const_iterator<std::pair<const proto::VirtualItem,unsigned int> >::pointer v6; // rdx
  std::_Rb_tree_const_iterator<std::pair<const proto::VirtualItem,unsigned int> >::_Self __y; // [rsp+18h] [rbp-88h] BYREF
  char v8[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 13 coin_type:272 64 8 8 iter:274";
  *(_QWORD *)(v2 + 16) = BlitzRushActivity::getActivityCoin;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = coin_type;
  *(std::map<proto::VirtualItem,unsigned int>::const_iterator *)(v2 + 64) = std::map<proto::VirtualItem,unsigned int>::find(
                                                                              &this->activity_coin_map_,
                                                                              (const std::map<proto::VirtualItem,unsigned int>::key_type *)(v2 + 48));
  __y._M_node = std::map<proto::VirtualItem,unsigned int>::end(&this->activity_coin_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const proto::VirtualItem,unsigned int> >::_Self *)(v2 + 64),
         &__y) )
  {
    result = 0LL;
  }
  else
  {
    v6 = std::_Rb_tree_const_iterator<std::pair<proto::VirtualItem const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const proto::VirtualItem,unsigned int> > *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v6->second >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v6 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v6->second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    result = v6->second;
  }
  if ( v8 == (char *)v2 )
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

// Line 283: range 00000000179434E6-0000000017943904
__int64 __fastcall BlitzRushActivity::checkAddActivityCoin(
        const BlitzRushActivity *const this,
        proto::VirtualItem coin_type,
        uint32_t add_num)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v8; // rax
  std::_Rb_tree_const_iterator<std::pair<const proto::VirtualItem,unsigned int> >::pointer v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  std::_Rb_tree_const_iterator<std::pair<const proto::VirtualItem,unsigned int> >::_Self __y; // [rsp+18h] [rbp-C8h] BYREF
  common::milog::MiLogStream v17; // [rsp+20h] [rbp-C0h] BYREF
  char v18[160]; // [rsp+40h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 16 cur_coin_num:295 64 4 13 coin_type:282 80 4 11 add_num:282 96 8 8 iter:289";
  *(_QWORD *)(v3 + 16) = BlitzRushActivity::checkAddActivityCoin;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 64) = coin_type;
  *(_DWORD *)(v3 + 80) = add_num;
  if ( !BlitzRushActivity::isCoinTypeValid(this, *(proto::VirtualItem *)(v3 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/blitz_rush_activity.cpp",
      "checkAddActivityCoin",
      286);
    v6 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
           &v17,
           (const char (*)[46])"[BLITZ_RUSH] coin_type is invalid. coin_type:");
    common::milog::MiLogStream::operator<<<proto::VirtualItem,(proto::VirtualItem*)0>(
      v6,
      (const proto::VirtualItem *)(v3 + 64));
    common::milog::MiLogStream::~MiLogStream(&v17);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    *(std::map<proto::VirtualItem,unsigned int>::const_iterator *)(v3 + 96) = std::map<proto::VirtualItem,unsigned int>::find(
                                                                                &this->activity_coin_map_,
                                                                                (const std::map<proto::VirtualItem,unsigned int>::key_type *)(v3 + 64));
    __y._M_node = std::map<proto::VirtualItem,unsigned int>::end(&this->activity_coin_map_)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_const_iterator<std::pair<const proto::VirtualItem,unsigned int> >::_Self *)(v3 + 96),
           &__y) )
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/blitz_rush_activity.cpp",
        "checkAddActivityCoin",
        292);
      v8 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
             &v17,
             (const char (*)[64])"[BLITZ_RUSH] coin_type is not in activity_coin_map_. coin_type:");
      common::milog::MiLogStream::operator<<<proto::VirtualItem,(proto::VirtualItem*)0>(
        v8,
        (const proto::VirtualItem *)(v3 + 64));
      common::milog::MiLogStream::~MiLogStream(&v17);
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v9 = std::_Rb_tree_const_iterator<std::pair<proto::VirtualItem const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const proto::VirtualItem,unsigned int> > *const)(v3 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&v9->second >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v9 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v9->second >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v3 + 48) = v9->second;
      if ( (!*(_DWORD *)(v3 + 80)
         || !*(_DWORD *)(v3 + 48)
         || (unsigned int)(*(_DWORD *)(v3 + 48) + *(_DWORD *)(v3 + 80)) >= *(_DWORD *)(v3 + 80))
        && (*(_DWORD *)(v3 + 80)
         || *(_DWORD *)(v3 + 48)
         || (unsigned int)(*(_DWORD *)(v3 + 48) + *(_DWORD *)(v3 + 80)) <= *(_DWORD *)(v3 + 80)) )
      {
        result = 0LL;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v17,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/blitz_rush_activity.cpp",
          "checkAddActivityCoin",
          298);
        v10 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                &v17,
                (const char (*)[40])"[BLITZ_RUSH] coin over flow, coin_type:");
        v11 = common::milog::MiLogStream::operator<<<proto::VirtualItem,(proto::VirtualItem*)0>(
                v10,
                (const proto::VirtualItem *)(v3 + 64));
        v12 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v11, (const char (*)[12])", cur num: ");
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v12,
                (const unsigned int *)(v3 + 48));
        v14 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v13, (const char (*)[12])" ,add num: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 80));
        common::milog::MiLogStream::~MiLogStream(&v17);
        if ( *(_DWORD *)(v3 + 64) == 127 )
          result = 9194LL;
        else
          result = 9195LL;
      }
    }
  }
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

// Line 312: range 0000000017943906-0000000017943CEC
__int64 __fastcall BlitzRushActivity::checkSubActivityCoin(
        const BlitzRushActivity *const this,
        proto::VirtualItem coin_type,
        uint32_t sub_num)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v8; // rax
  std::_Rb_tree_const_iterator<std::pair<const proto::VirtualItem,unsigned int> >::pointer v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  std::_Rb_tree_const_iterator<std::pair<const proto::VirtualItem,unsigned int> >::_Self __y; // [rsp+18h] [rbp-C8h] BYREF
  common::milog::MiLogStream v17; // [rsp+20h] [rbp-C0h] BYREF
  char v18[160]; // [rsp+40h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 16 cur_coin_num:324 64 4 13 coin_type:311 80 4 11 sub_num:311 96 8 8 iter:318";
  *(_QWORD *)(v3 + 16) = BlitzRushActivity::checkSubActivityCoin;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 64) = coin_type;
  *(_DWORD *)(v3 + 80) = sub_num;
  if ( !BlitzRushActivity::isCoinTypeValid(this, *(proto::VirtualItem *)(v3 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/blitz_rush_activity.cpp",
      "checkSubActivityCoin",
      315);
    v6 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
           &v17,
           (const char (*)[46])"[BLITZ_RUSH] coin_type is invalid. coin_type:");
    common::milog::MiLogStream::operator<<<proto::VirtualItem,(proto::VirtualItem*)0>(
      v6,
      (const proto::VirtualItem *)(v3 + 64));
    common::milog::MiLogStream::~MiLogStream(&v17);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    *(std::map<proto::VirtualItem,unsigned int>::const_iterator *)(v3 + 96) = std::map<proto::VirtualItem,unsigned int>::find(
                                                                                &this->activity_coin_map_,
                                                                                (const std::map<proto::VirtualItem,unsigned int>::key_type *)(v3 + 64));
    __y._M_node = std::map<proto::VirtualItem,unsigned int>::end(&this->activity_coin_map_)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_const_iterator<std::pair<const proto::VirtualItem,unsigned int> >::_Self *)(v3 + 96),
           &__y) )
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/blitz_rush_activity.cpp",
        "checkSubActivityCoin",
        321);
      v8 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
             &v17,
             (const char (*)[64])"[BLITZ_RUSH] coin_type is not in activity_coin_map_. coin_type:");
      common::milog::MiLogStream::operator<<<proto::VirtualItem,(proto::VirtualItem*)0>(
        v8,
        (const proto::VirtualItem *)(v3 + 64));
      common::milog::MiLogStream::~MiLogStream(&v17);
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v9 = std::_Rb_tree_const_iterator<std::pair<proto::VirtualItem const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const proto::VirtualItem,unsigned int> > *const)(v3 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&v9->second >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v9 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v9->second >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v3 + 48) = v9->second;
      if ( *(_DWORD *)(v3 + 48) >= *(_DWORD *)(v3 + 80) )
      {
        result = 0LL;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v17,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/blitz_rush_activity.cpp",
          "checkSubActivityCoin",
          327);
        v10 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                &v17,
                (const char (*)[41])"[BLITZ_RUSH] coin not enough, coin_type:");
        v11 = common::milog::MiLogStream::operator<<<proto::VirtualItem,(proto::VirtualItem*)0>(
                v10,
                (const proto::VirtualItem *)(v3 + 64));
        v12 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v11, (const char (*)[12])", cur num: ");
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v12,
                (const unsigned int *)(v3 + 48));
        v14 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v13, (const char (*)[10])off_262431E0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 80));
        common::milog::MiLogStream::~MiLogStream(&v17);
        if ( *(_DWORD *)(v3 + 64) == 127 )
          result = 9196LL;
        else
          result = 9197LL;
      }
    }
  }
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

// Line 341: range 0000000017943CEE-000000001794413D
__int64 __fastcall BlitzRushActivity::addActivityCoin(
        BlitzRushActivity *const this,
        proto::VirtualItem coin_type,
        uint32_t add_num,
        const ActionReason *reason,
        __int8 is_notify)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r13
  unsigned int v8; // r14d
  PlayerBasicComp *BasicComp; // rax
  std::map<proto::VirtualItem,unsigned int>::mapped_type *v10; // rdx
  SelectType v11; // r14d
  std::map<proto::VirtualItem,unsigned int>::mapped_type *v12; // rax
  SelectType *v13; // rdx
  PlayerItemComp *ItemComp; // r14
  data::ItemLimitType v15; // r15d
  std::map<proto::VirtualItem,unsigned int>::mapped_type *v16; // rdx
  __int64 result; // rax
  std::string v18; // [rsp+0h] [rbp-F0h]
  uint32_t reason_type; // [rsp+10h] [rbp-E0h]
  int32_t ret; // [rsp+38h] [rbp-B8h]
  uint32_t old_coin_num; // [rsp+3Ch] [rbp-B4h]
  std::string v23; // [rsp+40h] [rbp-B0h] BYREF
  char v24[144]; // [rsp+60h] [rbp-90h] BYREF

  *(&v18._anon_0._M_allocated_capacity + 1) = (std::string::size_type)reason;
  v18._anon_0._M_local_buf[4] = is_notify;
  v5 = (unsigned __int64)v24;
  v18._M_string_length = (std::string::size_type)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 1 22 log_context_holder:348 64 4 13 coin_type:340";
  *(_QWORD *)(v5 + 16) = BlitzRushActivity::addActivityCoin;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234753551;
  v7[536862722] = -202116348;
  *(_DWORD *)(v5 + 64) = coin_type;
  ret = BlitzRushActivity::checkAddActivityCoin(this, (proto::VirtualItem)*(_DWORD *)(v5 + 64), add_num);
  if ( ret )
  {
    v8 = ret;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    BasicComp = Player::getBasicComp(this->player_);
    PlayerBasicComp::getNextTransNo[abi:cxx11](&v23, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 48), 0x67u, v18);
    std::string::~string(&v23);
    v10 = std::map<proto::VirtualItem,unsigned int>::operator[](
            &this->activity_coin_map_,
            (const std::map<proto::VirtualItem,unsigned int>::key_type *)(v5 + 64));
    if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    old_coin_num = *v10;
    v11 = SAFE_ADD<unsigned int,unsigned int>(*v10, add_num);
    v12 = std::map<proto::VirtualItem,unsigned int>::operator[](
            &this->activity_coin_map_,
            (const std::map<proto::VirtualItem,unsigned int>::key_type *)(v5 + 64));
    v13 = v12;
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v12);
    }
    *v13 = v11;
    if ( v18._anon_0._M_local_buf[4] )
      BaseActivity::notifyActivityCoinInfo((BaseActivity *const)this);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    ItemComp = Player::getItemComp(this->player_);
    if ( *(_BYTE *)(((*(&v18._anon_0._M_allocated_capacity + 1) + 4) >> 3) + 0x7FFF8000) != 0
      && (char)(((v18._anon_0._M_local_buf[8] + 4) & 7) + 3) >= *(_BYTE *)(((*(&v18._anon_0._M_allocated_capacity + 1)
                                                                           + 4) >> 3)
                                                                         + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v15 = *(_DWORD *)(*(&v18._anon_0._M_allocated_capacity + 1) + 4);
    if ( *(_BYTE *)((*(&v18._anon_0._M_allocated_capacity + 1) >> 3) + 0x7FFF8000) != 0
      && (char)((v18._anon_0._M_local_buf[8] & 7) + 3) >= *(_BYTE *)((*(&v18._anon_0._M_allocated_capacity + 1) >> 3)
                                                                   + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    reason_type = **((_DWORD **)&v18._anon_0._M_allocated_capacity + 1);
    v16 = std::map<proto::VirtualItem,unsigned int>::operator[](
            &this->activity_coin_map_,
            (const std::map<proto::VirtualItem,unsigned int>::key_type *)(v5 + 64));
    if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    PlayerItemComp::logPlayerAddCoin(
      ItemComp,
      *(proto::VirtualItem *)(v5 + 64),
      old_coin_num,
      *v16,
      reason_type,
      v15,
      0);
    v8 = 0;
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 48));
  }
  result = v8;
  if ( v18._M_string_length == v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 361: range 000000001794413E-000000001794452B
__int64 __fastcall BlitzRushActivity::subActivityCoin(
        BlitzRushActivity *const this,
        __int32 coin_type,
        __int32 sub_num,
        const SubItemReason *reason,
        __int8 is_notify)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r13
  unsigned int v8; // r14d
  PlayerBasicComp *BasicComp; // rax
  std::map<proto::VirtualItem,unsigned int>::mapped_type *v10; // rdx
  std::map<proto::VirtualItem,unsigned int>::mapped_type *v11; // rax
  PlayerItemComp *ItemComp; // r14
  std::map<proto::VirtualItem,unsigned int>::mapped_type *v13; // rdx
  __int64 result; // rax
  std::string reason_type; // [rsp+0h] [rbp-E0h]
  uint32_t reason_typea; // [rsp+0h] [rbp-E0h]
  bool is_notifya; // [rsp+4h] [rbp-DCh]
  const SubItemReason *reasona; // [rsp+8h] [rbp-D8h]
  uint32_t sub_numa; // [rsp+10h] [rbp-D0h]
  BlitzRushActivity *thisa; // [rsp+18h] [rbp-C8h]
  int32_t ret; // [rsp+28h] [rbp-B8h]
  uint32_t old_coin_num; // [rsp+2Ch] [rbp-B4h]
  std::string v23; // [rsp+30h] [rbp-B0h] BYREF
  char v24[144]; // [rsp+50h] [rbp-90h] BYREF

  *(&reason_type._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  HIDWORD(reason_type._anon_0._M_allocated_capacity) = coin_type;
  *(_DWORD *)reason_type._anon_0._M_local_buf = sub_num;
  reason_type._M_string_length = (std::string::size_type)reason;
  BYTE4(reason_type._M_dataplus._M_p) = is_notify;
  v5 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 1 22 log_context_holder:368 64 4 13 coin_type:360";
  *(_QWORD *)(v5 + 16) = BlitzRushActivity::subActivityCoin;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234753551;
  v7[536862722] = -202116348;
  *(_DWORD *)(v5 + 64) = coin_type;
  ret = BlitzRushActivity::checkSubActivityCoin(
          this,
          (proto::VirtualItem)*(_DWORD *)(v5 + 64),
          reason_type._anon_0._M_allocated_capacity);
  if ( ret )
  {
    v8 = ret;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    BasicComp = Player::getBasicComp(this->player_);
    PlayerBasicComp::getNextTransNo[abi:cxx11](&v23, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 48), 0x67u, reason_type);
    std::string::~string(&v23);
    v10 = std::map<proto::VirtualItem,unsigned int>::operator[](
            &thisa->activity_coin_map_,
            (const std::map<proto::VirtualItem,unsigned int>::key_type *)(v5 + 64));
    if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    old_coin_num = *v10;
    v11 = std::map<proto::VirtualItem,unsigned int>::operator[](
            &thisa->activity_coin_map_,
            (const std::map<proto::VirtualItem,unsigned int>::key_type *)(v5 + 64));
    if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *v11 -= sub_numa;
    if ( is_notifya )
      BaseActivity::notifyActivityCoinInfo((BaseActivity *const)thisa);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    ItemComp = Player::getItemComp(thisa->player_);
    if ( *(_BYTE *)(((unsigned __int64)reasona >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)reasona & 7) + 3) >= *(_BYTE *)(((unsigned __int64)reasona >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    reason_typea = reasona->reason_type;
    v13 = std::map<proto::VirtualItem,unsigned int>::operator[](
            &thisa->activity_coin_map_,
            (const std::map<proto::VirtualItem,unsigned int>::key_type *)(v5 + 64));
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    PlayerItemComp::logPlayerAddCoin(
      ItemComp,
      *(proto::VirtualItem *)(v5 + 64),
      old_coin_num,
      *v13,
      reason_typea,
      ITEM_LIMIT_NONE,
      0);
    v8 = 0;
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 48));
  }
  result = v8;
  if ( v24 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 381: range 000000001794452C-000000001794469A
void __cdecl BlitzRushActivity::fillActivityCoinInfo(
        BlitzRushActivity *const this,
        google::protobuf::Map<unsigned int,unsigned int> *activity_coin_map)
{
  std::tuple_element<1,const std::pair<const proto::VirtualItem,unsigned int> >::type v2; // ebx
  unsigned int *v3; // rax
  std::tuple_element<1,const std::pair<const proto::VirtualItem,unsigned int> >::type *v4; // rdx
  google::protobuf::Map<unsigned int,unsigned int>::key_type key; // [rsp+1Ch] [rbp-44h] BYREF
  std::map<proto::VirtualItem,unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-40h] BYREF
  std::map<proto::VirtualItem,unsigned int>::iterator __for_end; // [rsp+28h] [rbp-38h] BYREF
  std::map<proto::VirtualItem,unsigned int> *__for_range; // [rsp+30h] [rbp-30h]
  const std::pair<const proto::VirtualItem,unsigned int> *v9; // [rsp+38h] [rbp-28h]
  std::tuple_element<0,const std::pair<const proto::VirtualItem,unsigned int> >::type *coin_type; // [rsp+40h] [rbp-20h]
  std::tuple_element<1,const std::pair<const proto::VirtualItem,unsigned int> >::type *coin_num; // [rsp+48h] [rbp-18h]

  __for_range = &this->activity_coin_map_;
  __for_begin._M_node = std::map<proto::VirtualItem,unsigned int>::begin(&this->activity_coin_map_)._M_node;
  __for_end._M_node = std::map<proto::VirtualItem,unsigned int>::end(&this->activity_coin_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v9 = std::_Rb_tree_iterator<std::pair<proto::VirtualItem const,unsigned int>>::operator*(&__for_begin);
    coin_type = std::get<0ul,proto::VirtualItem const,unsigned int>(v9);
    coin_num = (std::tuple_element<1,const std::pair<const proto::VirtualItem,unsigned int> >::type *)std::get<1ul,proto::VirtualItem const,unsigned int>(v9);
    if ( *(_BYTE *)(((unsigned __int64)coin_num >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)coin_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)coin_num >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v2 = *coin_num;
    if ( *(_BYTE *)(((unsigned __int64)coin_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)coin_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)coin_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    key = *coin_type;
    v3 = google::protobuf::Map<unsigned int,unsigned int>::operator[](activity_coin_map, &key);
    v4 = v3;
    if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v3);
    }
    *v4 = v2;
    std::_Rb_tree_iterator<std::pair<proto::VirtualItem const,unsigned int>>::operator++(&__for_begin);
  }
};

// Line 389: range 000000001794469C-00000000179449A6
__int64 __fastcall BlitzRushActivity::openActivityStage(BlitzRushActivity *const this, uint32_t stage_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,bool> >::pointer v7; // rdx
  bool *p_second; // rax
  common::milog::MiLogStream *v9; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,bool> >::pointer v10; // rdx
  bool *v11; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,bool> >::_Self __y; // [rsp+18h] [rbp-A8h] BYREF
  common::milog::MiLogStream v13; // [rsp+20h] [rbp-A0h] BYREF
  char v14[128]; // [rsp+40h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 stage_id:388 64 8 8 iter:390";
  *(_QWORD *)(v2 + 16) = BlitzRushActivity::openActivityStage;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = stage_id;
  *(std::map<unsigned int,bool>::iterator *)(v2 + 64) = std::map<unsigned int,bool>::find(
                                                          &this->stage_open_map_,
                                                          (const std::map<unsigned int,bool>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,bool>::end(&this->stage_open_map_)._M_node;
  if ( std::operator==((const std::_Rb_tree_iterator<std::pair<unsigned int const,bool> >::_Self *)(v2 + 64), &__y) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/blitz_rush_activity.cpp",
      "openActivityStage",
      393);
    v5 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           &v13,
           (const char (*)[31])"[BLITZ_RUSH] invalid stage_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v13);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    v7 = std::_Rb_tree_iterator<std::pair<unsigned int const,bool>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,bool> > *const)(v2 + 64));
    p_second = &v7->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_second & 7) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(p_second);
    }
    if ( v7->second )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/blitz_rush_activity.cpp",
        "openActivityStage",
        398);
      v9 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
             &v13,
             (const char (*)[36])"[BLITZ_RUSH] already open stage_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v13);
    }
    v10 = std::_Rb_tree_iterator<std::pair<unsigned int const,bool>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,bool> > *const)(v2 + 64));
    v11 = &v10->second;
    if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)v11 & 7) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(v11);
    }
    v10->second = 1;
    BaseActivity::notifyClientData((BaseActivity *const)this, 0);
    result = 0LL;
  }
  if ( v14 == (char *)v2 )
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

// Line 406: range 00000000179449A8-0000000017944B38
_BOOL8 __fastcall BlitzRushActivity::isActivityStageOpen(const BlitzRushActivity *const this, uint32_t stage_id)
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
  *(_QWORD *)(v2 + 8) = "2 48 4 12 stage_id:405 64 8 8 iter:407";
  *(_QWORD *)(v2 + 16) = BlitzRushActivity::isActivityStageOpen;
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

// Line 416: range 0000000017944B3A-0000000017944E44
__int64 __fastcall BlitzRushActivity::openParkourLevel(BlitzRushActivity *const this, uint32_t level_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,BlitzRushParkourLevelRecordData> >::pointer v7; // rdx
  bool *p_is_open; // rax
  common::milog::MiLogStream *v9; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,BlitzRushParkourLevelRecordData> >::pointer v10; // rdx
  bool *v11; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,BlitzRushParkourLevelRecordData> >::_Self __y; // [rsp+18h] [rbp-A8h] BYREF
  common::milog::MiLogStream v13; // [rsp+20h] [rbp-A0h] BYREF
  char v14[128]; // [rsp+40h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 level_id:415 64 8 8 iter:417";
  *(_QWORD *)(v2 + 16) = BlitzRushActivity::openParkourLevel;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = level_id;
  *(std::map<unsigned int,BlitzRushParkourLevelRecordData>::iterator *)(v2 + 64) = std::map<unsigned int,BlitzRushParkourLevelRecordData>::find(
                                                                                     &this->parkour_level_record_map_,
                                                                                     (const std::map<unsigned int,BlitzRushParkourLevelRecordData>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,BlitzRushParkourLevelRecordData>::end(&this->parkour_level_record_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,BlitzRushParkourLevelRecordData> >::_Self *)(v2 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/blitz_rush_activity.cpp",
      "openParkourLevel",
      420);
    v5 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
           &v13,
           (const char (*)[39])"[BLITZ_RUSH] invalid parkour level_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v13);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    v7 = std::_Rb_tree_iterator<std::pair<unsigned int const,BlitzRushParkourLevelRecordData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,BlitzRushParkourLevelRecordData> > *const)(v2 + 64));
    p_is_open = &v7->second.is_open;
    if ( *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_open & 7) >= *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(p_is_open);
    }
    if ( v7->second.is_open )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/blitz_rush_activity.cpp",
        "openParkourLevel",
        425);
      v9 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
             &v13,
             (const char (*)[44])"[BLITZ_RUSH] already open parkour level_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v13);
    }
    v10 = std::_Rb_tree_iterator<std::pair<unsigned int const,BlitzRushParkourLevelRecordData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,BlitzRushParkourLevelRecordData> > *const)(v2 + 64));
    v11 = &v10->second.is_open;
    if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)v11 & 7) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(v11);
    }
    v10->second.is_open = 1;
    BaseActivity::notifyClientData((BaseActivity *const)this, 0);
    result = 0LL;
  }
  if ( v14 == (char *)v2 )
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

// Line 433: range 0000000017944E46-00000000179454B8
int32_t __cdecl BlitzRushActivity::execAction(BlitzRushActivity *const this, const data::NewActivityExec *action_exec)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::NewActivityActionType type; // eax
  int32_t result; // eax
  const std::string *v7; // rax
  common::milog::MiLogStream *v8; // rbx
  const std::string *v9; // rax
  common::milog::MiLogStream *v10; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v11; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  uint32_t group_id; // [rsp+1Ch] [rbp-104h]
  std::vector<std::string>::const_iterator __for_begin; // [rsp+20h] [rbp-100h] BYREF
  std::vector<std::string>::const_iterator __for_end; // [rsp+28h] [rbp-F8h] BYREF
  const std::vector<std::string> *__for_range; // [rsp+30h] [rbp-F0h]
  std::vector<unsigned int> *__for_range_0; // [rsp+38h] [rbp-E8h]
  const data::BlitzRushParkourExcelConfig *parkour_config_ptr; // [rsp+40h] [rbp-E0h]
  const std::string *group_str; // [rsp+48h] [rbp-D8h]
  std::shared_ptr<Config> v20; // [rsp+50h] [rbp-D0h] BYREF
  common::milog::MiLogStream v21; // [rsp+60h] [rbp-C0h] BYREF
  char v22[160]; // [rsp+80h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 group_id:467 64 24 16 group_id_vec:464";
  *(_QWORD *)(v2 + 16) = BlitzRushActivity::execAction;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  type = action_exec->type;
  if ( type == NEW_ACTIVITY_ACTION_OPEN_BLITZ_RUSH_DUNGEON )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->is_dungeon_unlocked_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this - 95) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_dungeon_unlocked_ >> 3)
                                                        + 0x7FFF8000) )
    {
      __asan_report_store1(&this->is_dungeon_unlocked_);
    }
    this->is_dungeon_unlocked_ = 1;
    goto LABEL_40;
  }
  if ( type > NEW_ACTIVITY_ACTION_OPEN_BLITZ_RUSH_DUNGEON )
    goto LABEL_39;
  if ( type == NEW_ACTIVITY_ACTION_CLOSE_BLITZ_RUSH_CONTENT )
  {
    BlitzRushActivity::closeContent(this);
    goto LABEL_40;
  }
  if ( type > NEW_ACTIVITY_ACTION_CLOSE_BLITZ_RUSH_CONTENT )
  {
LABEL_39:
    result = BaseActivity::execAction((BaseActivity *const)this, action_exec);
    goto LABEL_41;
  }
  if ( type == NEW_ACTIVITY_ACTION_LOAD_DYNAMIC_GROUP )
  {
    if ( !BaseActivity::execAction((BaseActivity *const)this, action_exec)
      && std::vector<std::string>::size(&action_exec->param) )
    {
      std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 64));
      __for_range = &action_exec->param;
      __for_begin._M_current = std::vector<std::string>::begin(&action_exec->param)._M_current;
      __for_end._M_current = std::vector<std::string>::end(&action_exec->param)._M_current;
      while ( __gnu_cxx::operator!=<std::string const*,std::vector<std::string>>(&__for_begin, &__for_end) )
      {
        group_str = __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator*(&__for_begin);
        *(_DWORD *)(v2 + 48) = 0;
        if ( !common::tools::StringUtils::strToNum<unsigned int>(group_str, (unsigned int *)(v2 + 48), 1) )
          std::vector<unsigned int>::push_back(
            (std::vector<unsigned int> *const)(v2 + 64),
            (const std::vector<unsigned int>::value_type *)(v2 + 48));
        __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator++(&__for_begin);
      }
      __for_range_0 = (std::vector<unsigned int> *)(v2 + 64);
      __for_begin._M_current = (const std::string *)std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 64))._M_current;
      __for_end._M_current = (const std::string *)std::vector<unsigned int>::end(__for_range_0)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_begin,
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_end) )
      {
        v11 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
        if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        group_id = *v11;
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v20);
        v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20);
        parkour_config_ptr = ActivityBlitzRushExcelConfigMgr::findBlitzRushParkourExcelConfigByGroupId(
                               &v12->design_config.txt_config_mgr.activity_blitz_rush_config_mgr,
                               group_id);
        std::shared_ptr<Config>::~shared_ptr(&v20);
        if ( parkour_config_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&parkour_config_ptr->id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&parkour_config_ptr->id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          BlitzRushActivity::openParkourLevel(this, parkour_config_ptr->id);
        }
        __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
      }
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 64));
    }
  }
  else
  {
    if ( type != NEW_ACTIVITY_ACTION_OPEN_BLITZ_RUSH_STAGE )
      goto LABEL_39;
    if ( !std::vector<std::string>::size(&action_exec->param) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/blitz_rush_activity.cpp",
        "execAction",
        445);
      common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
        &v21,
        (const char (*)[35])"[BLITZ_RUSH] action param size < 1");
      common::milog::MiLogStream::~MiLogStream(&v21);
      result = -1;
      goto LABEL_41;
    }
    *(_DWORD *)(v2 + 48) = 0;
    v7 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
    if ( common::tools::StringUtils::strToNum<unsigned int>(v7, (unsigned int *)(v2 + 48), 1) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/blitz_rush_activity.cpp",
        "execAction",
        451);
      v8 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
             &v21,
             (const char (*)[23])"[BLITZ_RUSH] strToNum ");
      v9 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
      v10 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, v9);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v10, (const char (*)[8])" failed");
      common::milog::MiLogStream::~MiLogStream(&v21);
      result = -1;
      goto LABEL_41;
    }
    BlitzRushActivity::openActivityStage(this, *(_DWORD *)(v2 + 48));
  }
LABEL_40:
  result = 0;
LABEL_41:
  if ( v22 == (char *)v2 )
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

// Line 498: range 00000000179454BA-0000000017945841
__int64 __fastcall BlitzRushActivity::tryUpdateParkourLevelRecord(
        BlitzRushActivity *const this,
        uint32_t level_id,
        uint32_t left_time)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,BlitzRushParkourLevelRecordData> >::pointer v8; // rdx
  bool *p_is_open; // rax
  common::milog::MiLogStream *v10; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,BlitzRushParkourLevelRecordData> >::pointer v11; // rdx
  std::_Rb_tree_iterator<std::pair<unsigned int const,BlitzRushParkourLevelRecordData> >::pointer v12; // rdx
  BlitzRushParkourLevelRecordData *p_second; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,BlitzRushParkourLevelRecordData> >::_Self __y; // [rsp+18h] [rbp-B8h] BYREF
  common::milog::MiLogStream v16; // [rsp+20h] [rbp-B0h] BYREF
  char v17[144]; // [rsp+40h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 12 level_id:497 64 8 8 iter:499";
  *(_QWORD *)(v3 + 16) = BlitzRushActivity::tryUpdateParkourLevelRecord;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = level_id;
  *(std::map<unsigned int,BlitzRushParkourLevelRecordData>::iterator *)(v3 + 64) = std::map<unsigned int,BlitzRushParkourLevelRecordData>::find(
                                                                                     &this->parkour_level_record_map_,
                                                                                     (const std::map<unsigned int,BlitzRushParkourLevelRecordData>::key_type *)(v3 + 48));
  __y._M_node = std::map<unsigned int,BlitzRushParkourLevelRecordData>::end(&this->parkour_level_record_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,BlitzRushParkourLevelRecordData> >::_Self *)(v3 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/blitz_rush_activity.cpp",
      "tryUpdateParkourLevelRecord",
      502);
    v6 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
           &v16,
           (const char (*)[39])"[BLITZ_RUSH] invalid parkour level_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v16);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    v8 = std::_Rb_tree_iterator<std::pair<unsigned int const,BlitzRushParkourLevelRecordData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,BlitzRushParkourLevelRecordData> > *const)(v3 + 64));
    p_is_open = &v8->second.is_open;
    if ( *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_open & 7) >= *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(p_is_open);
    }
    if ( !v8->second.is_open )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/blitz_rush_activity.cpp",
        "tryUpdateParkourLevelRecord",
        507);
      v10 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
              &v16,
              (const char (*)[46])"[BLITZ_RUSH] parkour level not open level_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v16);
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v11 = std::_Rb_tree_iterator<std::pair<unsigned int const,BlitzRushParkourLevelRecordData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,BlitzRushParkourLevelRecordData> > *const)(v3 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&v11->second >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v11 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v11->second >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( left_time > v11->second.best_record )
      {
        v12 = std::_Rb_tree_iterator<std::pair<unsigned int const,BlitzRushParkourLevelRecordData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,BlitzRushParkourLevelRecordData> > *const)(v3 + 64));
        p_second = &v12->second;
        if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(p_second);
        }
        v12->second.best_record = left_time;
        BaseActivity::notifyClientData((BaseActivity *const)this, 0);
      }
      result = 0LL;
    }
  }
  if ( v17 == (char *)v3 )
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

// Line 519: range 0000000017945842-0000000017945CFD
void __cdecl BlitzRushActivity::onChallengeFinishEvent(
        BlitzRushActivity *const this,
        const ChallengeFinishEvent *event)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // r14
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  ActivityBlitzRushExcelConfigMgr *p_activity_blitz_rush_config_mgr; // rcx
  common::milog::MiLogStream *v10; // rax
  const data::BlitzRushParkourExcelConfig *parkour_config_ptr; // [rsp+18h] [rbp-A8h]
  std::shared_ptr<Config> v12; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-90h] BYREF
  char v14[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 level_id:531";
  *(_QWORD *)(v2 + 16) = BlitzRushActivity::onChallengeFinishEvent;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  common::milog::MiLogStream::create(
    &v13,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/blitz_rush_activity.cpp",
    "onChallengeFinishEvent",
    520);
  v5 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
         &v13,
         (const char (*)[43])"[BLITZ_RUSH] onChallengeFinishEvent, uid: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *(_DWORD *)(v2 + 32) = Player::getUid(this->player_);
  v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
  v7 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v6, (const char (*)[13])", group_id: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &event->group_id);
  common::milog::MiLogStream::~MiLogStream(&v13);
  if ( !BaseActivity::isOpening((const BaseActivity *const)this, 0)
    || BaseActivity::isSettled((const BaseActivity *const)this) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/blitz_rush_activity.cpp",
      "onChallengeFinishEvent",
      523);
    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
      &v13,
      (const char (*)[34])"[BLITZ_RUSH] activity is not open");
    common::milog::MiLogStream::~MiLogStream(&v13);
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v12);
    p_activity_blitz_rush_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v12)->design_config.txt_config_mgr.activity_blitz_rush_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    parkour_config_ptr = ActivityBlitzRushExcelConfigMgr::findBlitzRushParkourExcelConfigByGroupId(
                           p_activity_blitz_rush_config_mgr,
                           event->group_id);
    std::shared_ptr<Config>::~shared_ptr(&v12);
    if ( parkour_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&parkour_config_ptr->id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&parkour_config_ptr->id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v2 + 32) = parkour_config_ptr->id;
      if ( *(_BYTE *)(((unsigned __int64)&event->is_success >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)event + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&event->is_success >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&event->is_success);
      }
      if ( event->is_success )
      {
        if ( *(_BYTE *)(((unsigned __int64)&event->left_time >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)event + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->left_time >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( (unsigned int)BlitzRushActivity::tryUpdateParkourLevelRecord(this, *(_DWORD *)(v2 + 32), event->left_time) )
        {
          common::milog::MiLogStream::create(
            &v13,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/blitz_rush_activity.cpp",
            "onChallengeFinishEvent",
            540);
          v10 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
                  &v13,
                  (const char (*)[57])"[BLITZ_RUSH] tryUpdateParkourLevelRecord fail. level_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 32));
          common::milog::MiLogStream::~MiLogStream(&v13);
        }
      }
    }
  }
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 546: range 0000000017945CFE-0000000017945E81
uint32_t __cdecl BlitzRushActivity::getDungeonId(const BlitzRushActivity *const this)
{
  ActivityBlitzRushExcelConfigMgr *p_activity_blitz_rush_config_mgr; // rcx
  common::milog::MiLogStream *v2; // rax
  const data::BlitzRushExcelConfig *preview_confid_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v5; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v6; // [rsp+30h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v5);
  p_activity_blitz_rush_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5)->design_config.txt_config_mgr.activity_blitz_rush_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  preview_confid_ptr = ActivityBlitzRushExcelConfigMgr::findBlitzRushPreviewExcelConfigByActivityId(
                         p_activity_blitz_rush_config_mgr,
                         this->activity_id_);
  std::shared_ptr<Config>::~shared_ptr(&v5);
  if ( preview_confid_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&preview_confid_ptr->dungeon_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)preview_confid_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&preview_confid_ptr->dungeon_id >> 3)
                                                                        + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    return preview_confid_ptr->dungeon_id;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/blitz_rush_activity.cpp",
      "getDungeonId",
      550);
    v2 = common::milog::MiLogStream::operator<<<char [79],(char *[79])0>(
           &v6,
           (const char (*)[79])"[BLITZ_RUSH] findBlitzRushPreviewExcelConfigByActivityId failed, activity_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &this->activity_id_);
    common::milog::MiLogStream::~MiLogStream(&v6);
    return 0;
  }
};

// Line 557: range 0000000017945E82-0000000017946187
__int64 __fastcall BlitzRushActivity::checkEnterDungeon(const BlitzRushActivity *const this, uint32_t dungeon_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned __int64 v5; // rax
  char v6; // al
  __int64 result; // rax
  char v8; // al
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream v12; // [rsp+10h] [rbp-A0h] BYREF
  char v13[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 21 config_dungeon_id:566 64 4 14 dungeon_id:556";
  *(_QWORD *)(v2 + 16) = BlitzRushActivity::checkEnterDungeon;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  *(_DWORD *)(v2 + 64) = dungeon_id;
  if ( !BaseActivity::isOpening((const BaseActivity *const)this, 0) )
    goto LABEL_11;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = (unsigned __int64)(this->_vptr_DescribalBase + 17);
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8();
  if ( (*(unsigned __int8 (__fastcall **)(const BlitzRushActivity *const))v5)(this)
    || BaseActivity::isSettled((const BaseActivity *const)this) )
  {
LABEL_11:
    v6 = 1;
  }
  else
  {
    v6 = 0;
  }
  if ( v6 )
  {
    result = 9192LL;
  }
  else
  {
    if ( !BlitzRushActivity::isActivityStageOpen(this, 4u) )
      goto LABEL_19;
    if ( *(_BYTE *)(((unsigned __int64)&this->is_dungeon_unlocked_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this - 95) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_dungeon_unlocked_ >> 3)
                                                        + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_dungeon_unlocked_);
    }
    if ( !this->is_dungeon_unlocked_ )
LABEL_19:
      v8 = 1;
    else
      v8 = 0;
    if ( v8 )
    {
      result = 9193LL;
    }
    else
    {
      *(_DWORD *)(v2 + 48) = BlitzRushActivity::getDungeonId(this);
      if ( *(_DWORD *)(v2 + 48) && *(_DWORD *)(v2 + 64) == *(_DWORD *)(v2 + 48) )
      {
        result = 0LL;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v12,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/blitz_rush_activity.cpp",
          "checkEnterDungeon",
          569);
        v9 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
               &v12,
               (const char (*)[33])"[BLITZ_RUSH] invalid dungeon_id:");
        v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v9,
                (const unsigned int *)(v2 + 64));
        v11 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                v10,
                (const char (*)[21])", config_dungeon_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v12);
        result = 0xFFFFFFFFLL;
      }
    }
  }
  if ( v13 == (char *)v2 )
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

// Line 576: range 00000000179462C8-0000000017946661
void __cdecl BlitzRushActivity::onCreateDungeonEvent(BlitzRushActivity *const this, const CreateDungeonEvent *event)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  GameserverService *v6; // rax
  DungeonMgr *p_dungeon_mgr; // rcx
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  DungeonScene *v11; // r14
  uint32_t config_dungeon_id; // [rsp+1Ch] [rbp-94h]
  common::milog::MiLogStream v13; // [rsp+20h] [rbp-90h] BYREF
  char v14[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 21 dungeon_scene_ptr:588";
  *(_QWORD *)(v2 + 16) = BlitzRushActivity::onCreateDungeonEvent;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( !BaseActivity::isOpening((const BaseActivity *const)this, 0)
    || BaseActivity::isSettled((const BaseActivity *const)this) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/blitz_rush_activity.cpp",
      "onCreateDungeonEvent",
      579);
    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
      &v13,
      (const char (*)[34])"[BLITZ_RUSH] activity is not open");
    common::milog::MiLogStream::~MiLogStream(&v13);
  }
  else if ( !BlitzRushActivity::isActivityStageOpen(this, 4u) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/blitz_rush_activity.cpp",
      "onCreateDungeonEvent",
      584);
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      &v13,
      (const char (*)[39])"[BLITZ_RUSH] dungeon stage is not open");
    common::milog::MiLogStream::~MiLogStream(&v13);
  }
  else
  {
    v6 = ServiceBox::findService<GameserverService>();
    p_dungeon_mgr = &GameserverService::getGameThreadLocal(v6)->dungeon_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&event->inst_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->inst_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    DungeonMgr::findDungeon((DungeonMgr *const)(v2 + 32), &p_dungeon_mgr->dungeon_scene_map_, event->inst_id);
    if ( !std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v2 + 32), 0LL) )
    {
      v8 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      if ( DungeonScene::getDungeonType(v8) == DUNGEON_BLITZ_RUSH )
      {
        config_dungeon_id = BlitzRushActivity::getDungeonId(this);
        if ( config_dungeon_id )
        {
          v9 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
          if ( config_dungeon_id == DungeonScene::getDungeonId(v9) )
          {
            v11 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
            std::function<void ()(Player &,DungeonScene &,proto::DungeonSettleNotify &)>::function<BlitzRushActivity::onCreateDungeonEvent(CreateDungeonEvent const&)::{lambda(Player &,DungeonScene &,proto::DungeonSettleNotify &)#1},void,void>(
              (std::function<void(Player&,DungeonScene&,proto::DungeonSettleNotify&)> *const)&v13,
              0);
            DungeonScene::registerDungeonSettleCallback(v11, (DungeonSettleCallback *)&v13);
            std::function<void ()(Player &,DungeonScene &,proto::DungeonSettleNotify &)>::~function((std::function<void(Player&,DungeonScene&,proto::DungeonSettleNotify&)> *const)&v13);
          }
        }
      }
    }
    std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 32));
  }
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 603: range 0000000017946188-00000000179462C7
void __cdecl BlitzRushActivity::onCreateDungeonEvent(CreateDungeonEvent const&)::{lambda(Player &,DungeonScene &,proto::DungeonSettleNotify &)#1}::operator()(
        const BlitzRushActivity::onCreateDungeonEvent::<lambda(Player&, DungeonScene&, proto::DungeonSettleNotify&)> *const __closure,
        Player *player,
        DungeonScene *dungeon_scene,
        proto::DungeonSettleNotify *notify)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  std::__shared_ptr_access<BlitzRushActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rcx
  char v10[96]; // [rsp+20h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 16 activity_ptr:605";
  *(_QWORD *)(v4 + 16) = BlitzRushActivity::onCreateDungeonEvent(CreateDungeonEvent const&)::{lambda(Player &,DungeonScene &,proto::DungeonSettleNotify &)#1}::operator();
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  Player::getActivityComp(player);
  PlayerActivityComp::findOpenningActivity<BlitzRushActivity>((PlayerActivityComp *const)(v4 + 32));
  if ( std::operator!=<BlitzRushActivity>(0LL, (const std::shared_ptr<BlitzRushActivity> *)(v4 + 32)) )
  {
    v7 = std::__shared_ptr_access<BlitzRushActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BlitzRushActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    BlitzRushActivity::onSettleDungeon(v7, dungeon_scene, notify);
  }
  std::shared_ptr<BlitzRushActivity>::~shared_ptr((std::shared_ptr<BlitzRushActivity> *const)(v4 + 32));
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

// Line 614: range 0000000017946662-0000000017946BA8
void __cdecl BlitzRushActivity::onSettleDungeon(
        BlitzRushActivity *const this,
        const DungeonScene *dungeon_scene,
        proto::DungeonSettleNotify *notify)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  ActivityBlitzRushExcelConfigMgr *p_activity_blitz_rush_config_mgr; // rcx
  common::milog::MiLogStream *v8; // rax
  PlayerItemComp *ItemComp; // rax
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  PlayerItemComp *v13; // rax
  unsigned int val; // [rsp+20h] [rbp-F0h] BYREF
  const data::BlitzRushExcelConfig *preview_confid_ptr; // [rsp+28h] [rbp-E8h]
  std::shared_ptr<Config> v17; // [rsp+30h] [rbp-E0h] BYREF
  common::milog::MiLogStream v18; // [rsp+40h] [rbp-D0h] BYREF
  char v19[176]; // [rsp+60h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 13 reward_id:630 64 24 10 reason:637";
  *(_QWORD *)(v3 + 16) = BlitzRushActivity::onSettleDungeon;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  if ( !BaseActivity::isOpening((const BaseActivity *const)this, 0)
    || BaseActivity::isSettled((const BaseActivity *const)this) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/blitz_rush_activity.cpp",
      "onSettleDungeon",
      617);
    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
      &v18,
      (const char (*)[34])"[BLITZ_RUSH] activity is not open");
    common::milog::MiLogStream::~MiLogStream(&v18);
  }
  else if ( DungeonScene::isSettledAndSuccess(dungeon_scene) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v17);
    p_activity_blitz_rush_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17)->design_config.txt_config_mgr.activity_blitz_rush_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    preview_confid_ptr = ActivityBlitzRushExcelConfigMgr::findBlitzRushPreviewExcelConfigByActivityId(
                           p_activity_blitz_rush_config_mgr,
                           this->activity_id_);
    std::shared_ptr<Config>::~shared_ptr(&v17);
    if ( preview_confid_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&preview_confid_ptr->dungeon_reward_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)preview_confid_ptr + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&preview_confid_ptr->dungeon_reward_id >> 3)
                                                                          + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v3 + 48) = preview_confid_ptr->dungeon_reward_id;
      if ( *(_DWORD *)(v3 + 48) )
      {
        ActionReason::ActionReason(
          (ActionReason *const)(v3 + 64),
          ACTION_REASON_BLITZ_RUSH_DUNGEON_REWARD,
          ITEM_LIMIT_ACTIVITY_BLITZ_RUSH_REWARD);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        ItemComp = Player::getItemComp(this->player_);
        if ( PlayerItemComp::checkGrantReward(ItemComp, *(_DWORD *)(v3 + 48), (const ActionReason *)(v3 + 64)) )
        {
          common::milog::MiLogStream::create(
            &v18,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/blitz_rush_activity.cpp",
            "onSettleDungeon",
            641);
          v10 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                  &v18,
                  (const char (*)[44])"[BLITZ_RUSH] checkGrantReward failed, uid: ");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
          v12 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v11,
                  (const char (*)[14])" ,reward_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream(&v18);
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v13 = Player::getItemComp(this->player_);
          PlayerItemComp::grantReward(v13, *(_DWORD *)(v3 + 48), (const ActionReason *)(v3 + 64), 0LL);
        }
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/blitz_rush_activity.cpp",
        "onSettleDungeon",
        627);
      v8 = common::milog::MiLogStream::operator<<<char [79],(char *[79])0>(
             &v18,
             (const char (*)[79])"[BLITZ_RUSH] findBlitzRushPreviewExcelConfigByActivityId failed, activity_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->activity_id_);
      common::milog::MiLogStream::~MiLogStream(&v18);
    }
  }
  if ( v19 == (char *)v3 )
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

// Line 648: range 0000000017946BAA-000000001794772B
__int64 __fastcall BlitzRushActivity::restartParkourByGroupId(BlitzRushActivity *const this, uint32_t group_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  unsigned int v8; // r14d
  PlayerSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  bool v15; // r14
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  common::milog::MiLogStream *v21; // rax
  uint32_t AvatarComp; // eax
  Group *v23; // rax
  ChallengeComp *ChallengeComp; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  PlayerSceneComp *v29; // r14
  Scene *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  __int64 result; // rax
  const data::BlitzRushParkourExcelConfig *parkour_config_ptr; // [rsp+10h] [rbp-150h]
  const GroupInfoScriptConfig *group_info_script_config_ptr; // [rsp+18h] [rbp-148h]
  const Vector3 *rot; // [rsp+20h] [rbp-140h]
  const Vector3 *pos; // [rsp+28h] [rbp-138h]
  common::milog::MiLogStream v50; // [rsp+30h] [rbp-130h] BYREF
  TransferReason p_reason; // [rsp+50h] [rbp-110h] BYREF
  char v52[208]; // [rsp+90h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v52;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 12 scene_id:677 48 4 12 group_id:647 64 16 13 scene_ptr:663 96 16 14 avatar_ptr:670 128 1"
                        "6 13 group_ptr:691";
  *(_QWORD *)(v2 + 16) = BlitzRushActivity::restartParkourByGroupId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -202178560;
  *(_DWORD *)(v2 + 48) = group_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 128));
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
  parkour_config_ptr = ActivityBlitzRushExcelConfigMgr::findBlitzRushParkourExcelConfigByGroupId(
                         &v5->design_config.txt_config_mgr.activity_blitz_rush_config_mgr,
                         *(_DWORD *)(v2 + 48));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 128));
  if ( parkour_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    SceneComp = Player::getSceneComp(this->player_);
    if ( !PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
    {
      common::milog::MiLogStream::create(
        &v50,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/blitz_rush_activity.cpp",
        "restartParkourByGroupId",
        659);
      v10 = common::milog::MiLogStream::operator<<<BlitzRushActivity,(BlitzRushActivity*)0>(&v50, this);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        v10,
        (const char (*)[26])" player not in self scene");
      common::milog::MiLogStream::~MiLogStream(&v50);
      v8 = 512;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::getSceneComp(this->player_);
      PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 64));
      if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v50,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/blitz_rush_activity.cpp",
          "restartParkourByGroupId",
          666);
        v11 = common::milog::MiLogStream::operator<<<BlitzRushActivity,(BlitzRushActivity*)0>(&v50, this);
        common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
          v11,
          (const char (*)[22])" player not on scene.");
        common::milog::MiLogStream::~MiLogStream(&v50);
        v8 = 103;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Player::getAvatarComp(this->player_);
        PlayerAvatarComp::getCurAvatar((const PlayerAvatarComp *const)(v2 + 96));
        if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v2 + 96)) )
        {
          common::milog::MiLogStream::create(
            &v50,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/blitz_rush_activity.cpp",
            "restartParkourByGroupId",
            673);
          v12 = common::milog::MiLogStream::operator<<<BlitzRushActivity,(BlitzRushActivity*)0>(&v50, this);
          common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v12, (const char (*)[17])" avatar nullptr.");
          common::milog::MiLogStream::~MiLogStream(&v50);
          v8 = 103;
        }
        else
        {
          v13 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          *(_DWORD *)(v2 + 32) = Scene::getSceneId(v13);
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)(v2 + 128));
          v14 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
          v15 = LuaConfigMgr::getSceneIdByGroupId(&v14->design_config.lua_config_mgr, *(_DWORD *)(v2 + 48)) != *(_DWORD *)(v2 + 32);
          std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 128));
          if ( v15 )
          {
            common::milog::MiLogStream::create(
              &v50,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/activity/blitz_rush_activity.cpp",
              "restartParkourByGroupId",
              680);
            v16 = common::milog::MiLogStream::operator<<<BlitzRushActivity,(BlitzRushActivity*)0>(&v50, this);
            v17 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                    v16,
                    (const char (*)[22])" player not on group:");
            v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v17,
                    (const unsigned int *)(v2 + 48));
            v19 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v18, (const char (*)[8])" scene:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v2 + 32));
            common::milog::MiLogStream::~MiLogStream(&v50);
            v8 = 531;
          }
          else
          {
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)(v2 + 128));
            v20 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
            group_info_script_config_ptr = LuaConfigMgr::findGroupInfoConfig(
                                             &v20->design_config.lua_config_mgr,
                                             *(_DWORD *)(v2 + 48));
            std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 128));
            if ( group_info_script_config_ptr )
            {
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              AvatarComp = (unsigned int)Player::getAvatarComp(this->player_);
              PlayerAvatarComp::queryActiveGroup((PlayerAvatarComp *const)(v2 + 128), AvatarComp);
              if ( std::operator!=<Group>(0LL, (const std::shared_ptr<Group> *)(v2 + 128)) )
              {
                v23 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
                ChallengeComp = Group::getChallengeComp(v23);
                ChallengeComp::finishUnfinishedChallenges(
                  ChallengeComp,
                  CLIENT,
                  0,
                  PlayerLogBodyChallengeFinish_FinishType_STOP);
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v50,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/player/activity/blitz_rush_activity.cpp",
                  "restartParkourByGroupId",
                  699);
                v25 = common::milog::MiLogStream::operator<<<BlitzRushActivity,(BlitzRushActivity*)0>(&v50, this);
                v26 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v25, (const char (*)[8])" group:");
                v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v26,
                        (const unsigned int *)(v2 + 48));
                common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                  v27,
                  (const char (*)[19])" already unloaded.");
                common::milog::MiLogStream::~MiLogStream(&v50);
              }
              v28 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
              rot = Avatar::getLastValidRot(v28);
              pos = &group_info_script_config_ptr->pos;
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              v29 = Player::getSceneComp(this->player_);
              TransferReason::TransferReason(&p_reason, ENTER_REASON_LUA);
              v30 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
              LOBYTE(v29) = PlayerSceneComp::jumpToScene(v29, v30, pos, rot, 0, &p_reason) == 0;
              TransferReason::~TransferReason(&p_reason);
              if ( (_BYTE)v29 )
              {
                common::milog::MiLogStream::create(
                  &v50,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/player/activity/blitz_rush_activity.cpp",
                  "restartParkourByGroupId",
                  707);
                v31 = common::milog::MiLogStream::operator<<<BlitzRushActivity,(BlitzRushActivity*)0>(&v50, this);
                v32 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                        v31,
                        (const char (*)[26])" move player to scene_id:");
                v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v32,
                        (const unsigned int *)(v2 + 32));
                v34 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v33, (const char (*)[6])" pos:");
                v35 = operator<<(v34, pos);
                v36 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v35, (const char (*)[6])" rot:");
                operator<<(v36, rot);
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v50,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/activity/blitz_rush_activity.cpp",
                  "restartParkourByGroupId",
                  711);
                v37 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                        &v50,
                        (const char (*)[14])"[BLITZ_RUSH] ");
                v38 = common::milog::MiLogStream::operator<<<BlitzRushActivity,(BlitzRushActivity*)0>(v37, this);
                v39 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                        v38,
                        (const char (*)[25])"move player to scene_id:");
                v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v39,
                        (const unsigned int *)(v2 + 32));
                v41 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v40, (const char (*)[6])" pos:");
                v42 = operator<<(v41, pos);
                v43 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v42, (const char (*)[6])" rot:");
                v44 = operator<<(v43, rot);
                common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v44, (const char (*)[9])" failed.");
              }
              common::milog::MiLogStream::~MiLogStream(&v50);
              v8 = 0;
              std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v2 + 128));
            }
            else
            {
              common::milog::MiLogStream::create(
                &v50,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/blitz_rush_activity.cpp",
                "restartParkourByGroupId",
                687);
              v21 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
                      &v50,
                      (const char (*)[61])"[BLITZ_RUSH] group_info_script_config_ptr is null, group_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v21,
                (const unsigned int *)(v2 + 48));
              common::milog::MiLogStream::~MiLogStream(&v50);
              v8 = 5;
            }
          }
        }
        std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 96));
      }
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 64));
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v50,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/blitz_rush_activity.cpp",
      "restartParkourByGroupId",
      652);
    v6 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
           &v50,
           (const char (*)[20])"[BLITZ_RUSH] group:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
      v7,
      (const char (*)[35])" not in parkour_config_ptr config.");
    common::milog::MiLogStream::~MiLogStream(&v50);
    v8 = 5;
  }
  result = v8;
  if ( v52 == (char *)v2 )
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

// Line 718: range 000000001794772C-00000000179479E9
bool __cdecl BlitzRushActivity::isParkourChallengeOnGoing(const BlitzRushActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  uint32_t AvatarComp; // ecx
  int v5; // r14d
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  bool result; // al
  bool v8; // [rsp+7h] [rbp-B9h]
  std::unordered_map<unsigned int,data::BlitzRushParkourExcelConfig>::const_iterator __for_begin; // [rsp+18h] [rbp-A8h] BYREF
  std::unordered_map<unsigned int,data::BlitzRushParkourExcelConfig>::const_iterator __for_end; // [rsp+20h] [rbp-A0h] BYREF
  const ActivityBlitzRushExcelConfigMgr *config_mgr; // [rsp+28h] [rbp-98h]
  const std::unordered_map<unsigned int,data::BlitzRushParkourExcelConfig> *__for_range; // [rsp+30h] [rbp-90h]
  const std::pair<unsigned int const,data::BlitzRushParkourExcelConfig> *v13; // [rsp+38h] [rbp-88h]
  std::tuple_element<0,const std::pair<unsigned int const,data::BlitzRushParkourExcelConfig> >::type *id; // [rsp+40h] [rbp-80h]
  std::tuple_element<1,const std::pair<unsigned int const,data::BlitzRushParkourExcelConfig> >::type *parkour_config; // [rsp+48h] [rbp-78h]
  char v16[112]; // [rsp+50h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 13 group_ptr:722";
  *(_QWORD *)(v1 + 16) = BlitzRushActivity::isParkourChallengeOnGoing;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v1 + 32));
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32))->design_config.txt_config_mgr.activity_blitz_rush_config_mgr;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v1 + 32));
  __for_range = &config_mgr->blitz_rush_parkour_excel_config_map;
  __for_begin._M_cur = std::unordered_map<unsigned int,data::BlitzRushParkourExcelConfig>::begin(&config_mgr->blitz_rush_parkour_excel_config_map)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,data::BlitzRushParkourExcelConfig>::end(&config_mgr->blitz_rush_parkour_excel_config_map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::BlitzRushParkourExcelConfig>,false>(
            &__for_begin,
            &__for_end) )
  {
    v13 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BlitzRushParkourExcelConfig>,false,false>::operator*(&__for_begin);
    id = std::get<0ul,unsigned int const,data::BlitzRushParkourExcelConfig>(v13);
    parkour_config = (std::tuple_element<1,const std::pair<unsigned int const,data::BlitzRushParkourExcelConfig> >::type *)std::get<1ul,unsigned int const,data::BlitzRushParkourExcelConfig>(v13);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    AvatarComp = (unsigned int)Player::getAvatarComp(this->player_);
    if ( *(_BYTE *)(((unsigned __int64)&parkour_config->group_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&parkour_config->group_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    PlayerAvatarComp::queryActiveGroup((PlayerAvatarComp *const)(v1 + 32), AvatarComp);
    if ( std::operator==<Group>(0LL, (const std::shared_ptr<Group> *)(v1 + 32)) )
    {
      v5 = 0;
    }
    else
    {
      v6 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      if ( Group::hasOngoingChallenge(v6) )
      {
        v8 = 1;
        v5 = 1;
      }
      else
      {
        v5 = 2;
      }
    }
    std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v1 + 32));
    if ( v5 && v5 != 2 )
      goto LABEL_19;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BlitzRushParkourExcelConfig>,false,false>::operator++(&__for_begin);
  }
  v8 = 0;
LABEL_19:
  result = v8;
  if ( v16 == (char *)v1 )
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

// Line 738: range 00000000179479EA-0000000017947A0B
int32_t __cdecl BlitzRushActivity::openActivityStageByGm(BlitzRushActivity *const this, uint32_t stage_id)
{
  return BlitzRushActivity::openActivityStage(this, stage_id);
};
