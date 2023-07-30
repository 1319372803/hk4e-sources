// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/electrohercules_battle_activity.cpp

// Line 27: range 00000000165E1D46-00000000165E1E43
void __cdecl ElectroherculesBattleLevelData::fromBin(
        ElectroherculesBattleLevelData *const this,
        const proto::ElectroherculesBattleLevelBin *bin)
{
  uint32_t v2; // ecx
  bool is_finish; // cl
  uint32_t v4; // ecx

  v2 = proto::ElectroherculesBattleLevelBin::level_id(bin);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->level_id = v2;
  is_finish = proto::ElectroherculesBattleLevelBin::is_finish(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_finish >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_finish >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_finish);
  }
  this->is_finish = is_finish;
  v4 = proto::ElectroherculesBattleLevelBin::min_finish_time(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->min_finish_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->min_finish_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->min_finish_time);
  }
  this->min_finish_time = v4;
};

// Line 35: range 00000000165E1E44-00000000165E1F42
void __cdecl ElectroherculesBattleLevelData::toBin(
        const ElectroherculesBattleLevelData *const this,
        proto::ElectroherculesBattleLevelBin *bin)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::ElectroherculesBattleLevelBin::set_level_id(bin, this->level_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_finish >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_finish >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_finish);
  }
  proto::ElectroherculesBattleLevelBin::set_is_finish(bin, this->is_finish);
  if ( *(_BYTE *)(((unsigned __int64)&this->min_finish_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->min_finish_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::ElectroherculesBattleLevelBin::set_min_finish_time(bin, this->min_finish_time);
};

// Line 42: range 00000000165E1F44-00000000165E2042
void __cdecl ElectroherculesBattleLevelData::toClient(
        const ElectroherculesBattleLevelData *const this,
        proto::ElectroherculesBattleLevelInfo *proto)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::ElectroherculesBattleLevelInfo::set_level_id(proto, this->level_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_finish >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_finish >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_finish);
  }
  proto::ElectroherculesBattleLevelInfo::set_is_finish(proto, this->is_finish);
  if ( *(_BYTE *)(((unsigned __int64)&this->min_finish_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->min_finish_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::ElectroherculesBattleLevelInfo::set_min_finish_time(proto, this->min_finish_time);
};

// Line 49: range 00000000165E2044-00000000165E2383
void __cdecl ElectroherculesBattleStageData::fromBin(
        ElectroherculesBattleStageData *const this,
        const proto::ElectroherculesBattleStageBin *bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  uint32_t v5; // edx
  bool is_stage_open; // cl
  ElectroherculesBattleLevelData *v7; // r15
  unsigned int *v8; // rcx
  ElectroherculesBattleLevelData *v9; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,ElectroherculesBattleLevelData> >,bool> v10; // rax
  common::milog::MiLogStream *v11; // r14
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rdx
  unsigned int val; // [rsp+2Ch] [rbp-B4h] BYREF
  google::protobuf::RepeatedPtrField<proto::ElectroherculesBattleLevelBin>::const_iterator __for_begin; // [rsp+30h] [rbp-B0h] BYREF
  google::protobuf::RepeatedPtrField<proto::ElectroherculesBattleLevelBin>::const_iterator __for_end; // [rsp+38h] [rbp-A8h] BYREF
  const google::protobuf::RepeatedPtrField<proto::ElectroherculesBattleLevelBin> *__for_range; // [rsp+40h] [rbp-A0h]
  const proto::ElectroherculesBattleLevelBin *difficulty_bin; // [rsp+48h] [rbp-98h]
  common::milog::MiLogStream v19; // [rsp+50h] [rbp-90h] BYREF
  char v20[112]; // [rsp+70h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 12 13 level_data:54";
  *(_QWORD *)(v2 + 16) = ElectroherculesBattleStageData::fromBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202177536;
  v5 = proto::ElectroherculesBattleStageBin::stage_id(bin);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->stage_id = v5;
  is_stage_open = proto::ElectroherculesBattleStageBin::is_stage_open(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_stage_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_stage_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_stage_open);
  }
  this->is_stage_open = is_stage_open;
  __for_range = proto::ElectroherculesBattleStageBin::level_bin_list(bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::ElectroherculesBattleLevelBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::ElectroherculesBattleLevelBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::ElectroherculesBattleLevelBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    difficulty_bin = google::protobuf::internal::RepeatedPtrIterator<proto::ElectroherculesBattleLevelBin const>::operator*(&__for_begin);
    *(_DWORD *)(v2 + 32) = 0;
    *(_BYTE *)(v2 + 36) = 0;
    *(_DWORD *)(v2 + 40) = 0;
    ElectroherculesBattleLevelData::fromBin((ElectroherculesBattleLevelData *const)(v2 + 32), difficulty_bin);
    v7 = std::move<ElectroherculesBattleLevelData &>((ElectroherculesBattleLevelData *)(v2 + 32));
    val = proto::ElectroherculesBattleLevelBin::level_id(difficulty_bin);
    v10 = std::map<unsigned int,ElectroherculesBattleLevelData>::emplace<unsigned int,ElectroherculesBattleLevelData>(
            &this->level_data_map,
            &val,
            v7,
            v8,
            v9);
    if ( !v10.second )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/electrohercules_battle_activity.cpp",
        "fromBin",
        58);
      v11 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
              &v19,
              (const char (*)[45])"[ELECTROHERCULES_BATTLE] duplicate level_id:");
      val = proto::ElectroherculesBattleLevelBin::level_id(difficulty_bin);
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
      v13 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v12, (const char (*)[12])", stage_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &this->stage_id);
      common::milog::MiLogStream::~MiLogStream(&v19);
    }
    google::protobuf::internal::RepeatedPtrIterator<proto::ElectroherculesBattleLevelBin const>::operator++(&__for_begin);
  }
  if ( v20 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 65: range 00000000165E2384-00000000165E24CE
void __cdecl ElectroherculesBattleStageData::toBin(
        const ElectroherculesBattleStageData *const this,
        proto::ElectroherculesBattleStageBin *bin)
{
  std::map<unsigned int,ElectroherculesBattleLevelData>::const_iterator __for_begin; // [rsp+18h] [rbp-38h] BYREF
  std::map<unsigned int,ElectroherculesBattleLevelData>::const_iterator __for_end; // [rsp+20h] [rbp-30h] BYREF
  const std::map<unsigned int,ElectroherculesBattleLevelData> *__for_range; // [rsp+28h] [rbp-28h]
  const std::pair<unsigned int const,ElectroherculesBattleLevelData> *v5; // [rsp+30h] [rbp-20h]
  std::tuple_element<0,const std::pair<unsigned int const,ElectroherculesBattleLevelData> >::type *difficulty; // [rsp+38h] [rbp-18h]
  std::tuple_element<1,const std::pair<unsigned int const,ElectroherculesBattleLevelData> >::type *difficulty_data; // [rsp+40h] [rbp-10h]
  proto::ElectroherculesBattleLevelBin *difficulty_bin; // [rsp+48h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::ElectroherculesBattleStageBin::set_stage_id(bin, this->stage_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_stage_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_stage_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_stage_open);
  }
  proto::ElectroherculesBattleStageBin::set_is_stage_open(bin, this->is_stage_open);
  __for_range = &this->level_data_map;
  __for_begin._M_node = std::map<unsigned int,ElectroherculesBattleLevelData>::begin(&this->level_data_map)._M_node;
  __for_end._M_node = std::map<unsigned int,ElectroherculesBattleLevelData>::end(&this->level_data_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v5 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,ElectroherculesBattleLevelData>>::operator*(&__for_begin);
    difficulty = std::get<0ul,unsigned int const,ElectroherculesBattleLevelData>(v5);
    difficulty_data = (std::tuple_element<1,const std::pair<unsigned int const,ElectroherculesBattleLevelData> >::type *)std::get<1ul,unsigned int const,ElectroherculesBattleLevelData>(v5);
    difficulty_bin = proto::ElectroherculesBattleStageBin::add_level_bin_list(bin);
    ElectroherculesBattleLevelData::toBin(difficulty_data, difficulty_bin);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,ElectroherculesBattleLevelData>>::operator++(&__for_begin);
  }
};

// Line 76: range 00000000165E24D0-00000000165E261A
void __cdecl ElectroherculesBattleStageData::toClient(
        const ElectroherculesBattleStageData *const this,
        proto::ElectroherculesBattleStageInfo *proto)
{
  std::map<unsigned int,ElectroherculesBattleLevelData>::const_iterator __for_begin; // [rsp+18h] [rbp-38h] BYREF
  std::map<unsigned int,ElectroherculesBattleLevelData>::const_iterator __for_end; // [rsp+20h] [rbp-30h] BYREF
  const std::map<unsigned int,ElectroherculesBattleLevelData> *__for_range; // [rsp+28h] [rbp-28h]
  const std::pair<unsigned int const,ElectroherculesBattleLevelData> *v5; // [rsp+30h] [rbp-20h]
  std::tuple_element<0,const std::pair<unsigned int const,ElectroherculesBattleLevelData> >::type *level_id; // [rsp+38h] [rbp-18h]
  std::tuple_element<1,const std::pair<unsigned int const,ElectroherculesBattleLevelData> >::type *level_data; // [rsp+40h] [rbp-10h]
  proto::ElectroherculesBattleLevelInfo *level_proto; // [rsp+48h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::ElectroherculesBattleStageInfo::set_stage_id(proto, this->stage_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_stage_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_stage_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_stage_open);
  }
  proto::ElectroherculesBattleStageInfo::set_is_stage_open(proto, this->is_stage_open);
  __for_range = &this->level_data_map;
  __for_begin._M_node = std::map<unsigned int,ElectroherculesBattleLevelData>::begin(&this->level_data_map)._M_node;
  __for_end._M_node = std::map<unsigned int,ElectroherculesBattleLevelData>::end(&this->level_data_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v5 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,ElectroherculesBattleLevelData>>::operator*(&__for_begin);
    level_id = std::get<0ul,unsigned int const,ElectroherculesBattleLevelData>(v5);
    level_data = (std::tuple_element<1,const std::pair<unsigned int const,ElectroherculesBattleLevelData> >::type *)std::get<1ul,unsigned int const,ElectroherculesBattleLevelData>(v5);
    level_proto = proto::ElectroherculesBattleStageInfo::add_level_info_list(proto);
    ElectroherculesBattleLevelData::toClient(level_data, level_proto);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,ElectroherculesBattleLevelData>>::operator++(&__for_begin);
  }
};

// Line 87: range 00000000165E261C-00000000165E28B7
int32_t __cdecl ElectroherculesBattleActivity::fromScheduleBin(
        ElectroherculesBattleActivity *const this,
        const proto::ActivityScheduleBin *bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  ElectroherculesBattleStageData *v5; // r15
  unsigned int *v6; // rcx
  ElectroherculesBattleStageData *v7; // r8
  int32_t result; // eax
  unsigned int v9; // [rsp+24h] [rbp-DCh] BYREF
  google::protobuf::RepeatedPtrField<proto::ElectroherculesBattleStageBin>::const_iterator __for_begin; // [rsp+28h] [rbp-D8h] BYREF
  google::protobuf::RepeatedPtrField<proto::ElectroherculesBattleStageBin>::const_iterator __for_end; // [rsp+30h] [rbp-D0h] BYREF
  const proto::ElectroherculesBattleScheduleBin *schedule_bin; // [rsp+38h] [rbp-C8h]
  const google::protobuf::RepeatedPtrField<proto::ElectroherculesBattleStageBin> *__for_range; // [rsp+40h] [rbp-C0h]
  const proto::ElectroherculesBattleStageBin *stage_bin; // [rsp+48h] [rbp-B8h]
  char v15[176]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 64 13 stage_data:92";
  *(_QWORD *)(v2 + 16) = ElectroherculesBattleActivity::fromScheduleBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450892) = -202116109;
  std::map<unsigned int,ElectroherculesBattleStageData>::clear(&this->stage_data_map_);
  schedule_bin = proto::ActivityScheduleBin::electrohercules_battle_bin(bin);
  __for_range = proto::ElectroherculesBattleScheduleBin::stage_bin_list(schedule_bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::ElectroherculesBattleStageBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::ElectroherculesBattleStageBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::ElectroherculesBattleStageBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    stage_bin = google::protobuf::internal::RepeatedPtrIterator<proto::ElectroherculesBattleStageBin const>::operator*(&__for_begin);
    ElectroherculesBattleStageData::ElectroherculesBattleStageData((ElectroherculesBattleStageData *const)(v2 + 32));
    ElectroherculesBattleStageData::fromBin((ElectroherculesBattleStageData *const)(v2 + 32), stage_bin);
    if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 40) = BaseActivity::getBeginTimeByOpenDay(this->schedule_id_, 1u);
    v5 = std::move<ElectroherculesBattleStageData &>((ElectroherculesBattleStageData *)(v2 + 32));
    v9 = proto::ElectroherculesBattleStageBin::stage_id(stage_bin);
    std::map<unsigned int,ElectroherculesBattleStageData>::emplace<unsigned int,ElectroherculesBattleStageData>(
      &this->stage_data_map_,
      &v9,
      v5,
      v6,
      v7);
    ElectroherculesBattleStageData::~ElectroherculesBattleStageData((ElectroherculesBattleStageData *const)(v2 + 32));
    google::protobuf::internal::RepeatedPtrIterator<proto::ElectroherculesBattleStageBin const>::operator++(&__for_begin);
  }
  result = 0;
  if ( v15 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 101: range 00000000165E28B8-00000000165E2984
int32_t __cdecl ElectroherculesBattleActivity::toScheduleBin(
        const ElectroherculesBattleActivity *const this,
        proto::ActivityScheduleBin *bin)
{
  std::map<unsigned int,ElectroherculesBattleStageData>::const_iterator __for_begin; // [rsp+10h] [rbp-40h] BYREF
  std::map<unsigned int,ElectroherculesBattleStageData>::const_iterator __for_end; // [rsp+18h] [rbp-38h] BYREF
  proto::ElectroherculesBattleScheduleBin *schedule_bin; // [rsp+20h] [rbp-30h]
  const std::map<unsigned int,ElectroherculesBattleStageData> *__for_range; // [rsp+28h] [rbp-28h]
  const std::pair<unsigned int const,ElectroherculesBattleStageData> *v7; // [rsp+30h] [rbp-20h]
  std::tuple_element<0,const std::pair<unsigned int const,ElectroherculesBattleStageData> >::type *_; // [rsp+38h] [rbp-18h]
  std::tuple_element<1,const std::pair<unsigned int const,ElectroherculesBattleStageData> >::type *stage_info; // [rsp+40h] [rbp-10h]
  proto::ElectroherculesBattleStageBin *stage_bin; // [rsp+48h] [rbp-8h]

  schedule_bin = proto::ActivityScheduleBin::mutable_electrohercules_battle_bin(bin);
  __for_range = &this->stage_data_map_;
  __for_begin._M_node = std::map<unsigned int,ElectroherculesBattleStageData>::begin(&this->stage_data_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,ElectroherculesBattleStageData>::end(&this->stage_data_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v7 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,ElectroherculesBattleStageData>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,ElectroherculesBattleStageData>(v7);
    stage_info = (std::tuple_element<1,const std::pair<unsigned int const,ElectroherculesBattleStageData> >::type *)std::get<1ul,unsigned int const,ElectroherculesBattleStageData>(v7);
    stage_bin = proto::ElectroherculesBattleScheduleBin::add_stage_bin_list(schedule_bin);
    ElectroherculesBattleStageData::toBin(stage_info, stage_bin);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,ElectroherculesBattleStageData>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 112: range 00000000165E2986-00000000165E2B53
int32_t __cdecl ElectroherculesBattleActivity::toClient(
        ElectroherculesBattleActivity *const this,
        proto::ActivityInfo *activity_info)
{
  common::milog::MiLogStream *v2; // rbx
  unsigned int val; // [rsp+1Ch] [rbp-74h] BYREF
  std::map<unsigned int,ElectroherculesBattleStageData>::iterator __for_begin; // [rsp+20h] [rbp-70h] BYREF
  std::map<unsigned int,ElectroherculesBattleStageData>::iterator __for_end; // [rsp+28h] [rbp-68h] BYREF
  proto::ElectroherculesBattleDetailInfo *detail_info; // [rsp+30h] [rbp-60h]
  std::map<unsigned int,ElectroherculesBattleStageData> *__for_range; // [rsp+38h] [rbp-58h]
  const std::pair<unsigned int const,ElectroherculesBattleStageData> *v9; // [rsp+40h] [rbp-50h]
  std::tuple_element<0,const std::pair<unsigned int const,ElectroherculesBattleStageData> >::type *stage_id; // [rsp+48h] [rbp-48h]
  std::tuple_element<1,const std::pair<unsigned int const,ElectroherculesBattleStageData> >::type *level_info; // [rsp+50h] [rbp-40h]
  proto::ElectroherculesBattleStageInfo *level_info_proto; // [rsp+58h] [rbp-38h]
  common::milog::MiLogStream v13; // [rsp+60h] [rbp-30h] BYREF

  if ( BaseActivity::toClient(this, activity_info) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/electrohercules_battle_activity.cpp",
      "toClient",
      115);
    v2 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v13,
           (const char (*)[36])"BaseActivity::toClient fails, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    return -1;
  }
  else
  {
    detail_info = proto::ActivityInfo::mutable_electrohercules_battle_info(activity_info);
    __for_range = &this->stage_data_map_;
    __for_begin._M_node = std::map<unsigned int,ElectroherculesBattleStageData>::begin(&this->stage_data_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,ElectroherculesBattleStageData>::end(&this->stage_data_map_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v9 = std::_Rb_tree_iterator<std::pair<unsigned int const,ElectroherculesBattleStageData>>::operator*(&__for_begin);
      stage_id = std::get<0ul,unsigned int const,ElectroherculesBattleStageData>(v9);
      level_info = (std::tuple_element<1,const std::pair<unsigned int const,ElectroherculesBattleStageData> >::type *)std::get<1ul,unsigned int const,ElectroherculesBattleStageData>(v9);
      level_info_proto = proto::ElectroherculesBattleDetailInfo::add_stage_info_list(detail_info);
      ElectroherculesBattleStageData::toClient(level_info, level_info_proto);
      std::_Rb_tree_iterator<std::pair<unsigned int const,ElectroherculesBattleStageData>>::operator++(&__for_begin);
    }
    return 0;
  }
};

// Line 129: range 00000000165E2B54-00000000165E3089
int32_t __cdecl ElectroherculesBattleActivity::execAction(
        ElectroherculesBattleActivity *const this,
        const data::NewActivityExec *action_exec)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t result; // eax
  common::milog::MiLogStream *v6; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  bool v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,ElectroherculesBattleStageData> >::pointer v12; // rdx
  bool *p_is_stage_open; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,ElectroherculesBattleStageData> >::_Self __y; // [rsp+10h] [rbp-D0h] BYREF
  const std::string *stage_id_str; // [rsp+18h] [rbp-C8h]
  std::shared_ptr<Config> v16; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v17; // [rsp+30h] [rbp-B0h] BYREF
  char v18[144]; // [rsp+50h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 stage_id:141 64 8 19 level_data_iter:154";
  *(_QWORD *)(v2 + 16) = ElectroherculesBattleActivity::execAction;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( action_exec->type == NEW_ACTIVITY_ACTION_ELECTROHERCULES_BATTLE_OPEN_LEVEL )
  {
    if ( std::vector<std::string>::empty(&action_exec->param) )
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/electrohercules_battle_activity.cpp",
        "execAction",
        137);
      common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
        &v17,
        (const char (*)[47])"[ELECTROHERCULES_BATTLE] action param is empty");
      common::milog::MiLogStream::~MiLogStream(&v17);
      result = -1;
    }
    else
    {
      *(_DWORD *)(v2 + 48) = 0;
      stage_id_str = std::vector<std::string>::operator[](&action_exec->param, 0LL);
      if ( common::tools::StringUtils::strToNum<unsigned int>(stage_id_str, (unsigned int *)(v2 + 48), 1) )
      {
        common::milog::MiLogStream::create(
          &v17,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/electrohercules_battle_activity.cpp",
          "execAction",
          145);
        v6 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
               &v17,
               (const char (*)[52])"[ELECTROHERCULES_BATTLE] convert to stage_id error ");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, stage_id_str);
        common::milog::MiLogStream::~MiLogStream(&v17);
        result = -1;
      }
      else
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v16);
        v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v16);
        v8 = data::ActivityElectroherculesBattleExcelConfigMgrBase::findElectroherculesBattleLevelExcelConfig(
               &v7->design_config.txt_config_mgr.activity_electrohercules_battle_config_mgr,
               *(_DWORD *)(v2 + 48)) == 0LL;
        std::shared_ptr<Config>::~shared_ptr(&v16);
        if ( v8 )
        {
          common::milog::MiLogStream::create(
            &v17,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/electrohercules_battle_activity.cpp",
            "execAction",
            150);
          v9 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                 &v17,
                 (const char (*)[35])"[ELECTROHERCULES_BATTLE] stage id ");
          v10 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, stage_id_str);
          common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v10, (const char (*)[16])" does not exist");
          common::milog::MiLogStream::~MiLogStream(&v17);
          result = -1;
        }
        else
        {
          *(std::map<unsigned int,ElectroherculesBattleStageData>::iterator *)(v2 + 64) = std::map<unsigned int,ElectroherculesBattleStageData>::find(
                                                                                            &this->stage_data_map_,
                                                                                            (const std::map<unsigned int,ElectroherculesBattleStageData>::key_type *)(v2 + 48));
          __y._M_node = std::map<unsigned int,ElectroherculesBattleStageData>::end(&this->stage_data_map_)._M_node;
          if ( std::operator==(
                 (const std::_Rb_tree_iterator<std::pair<unsigned int const,ElectroherculesBattleStageData> >::_Self *)(v2 + 64),
                 &__y) )
          {
            common::milog::MiLogStream::create(
              &v17,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/electrohercules_battle_activity.cpp",
              "execAction",
              157);
            v11 = common::milog::MiLogStream::operator<<<char [69],(char *[69])0>(
                    &v17,
                    (const char (*)[69])"[ELECTROHERCULES_BATTLE] stage_id not in stage_data_map_, stage_id: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 48));
            common::milog::MiLogStream::~MiLogStream(&v17);
            result = -1;
          }
          else
          {
            v12 = std::_Rb_tree_iterator<std::pair<unsigned int const,ElectroherculesBattleStageData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,ElectroherculesBattleStageData> > *const)(v2 + 64));
            p_is_stage_open = &v12->second.is_stage_open;
            if ( *(_BYTE *)(((unsigned __int64)p_is_stage_open >> 3) + 0x7FFF8000) != 0
              && ((unsigned __int8)p_is_stage_open & 7) >= *(_BYTE *)(((unsigned __int64)p_is_stage_open >> 3)
                                                                    + 0x7FFF8000) )
            {
              __asan_report_store1(p_is_stage_open);
            }
            v12->second.is_stage_open = 1;
            BaseActivity::notifyClientData(this, 0);
            result = 0;
          }
        }
      }
    }
  }
  else
  {
    result = BaseActivity::execAction(this, action_exec);
  }
  if ( v18 == (char *)v2 )
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

// Line 171: range 00000000165E308A-00000000165E30E7
int32_t __cdecl ElectroherculesBattleActivity::init(ElectroherculesBattleActivity *const this)
{
  if ( BaseActivity::isOpening(this, 0) && !BaseActivity::isSettled(this) )
    ElectroherculesBattleActivity::registerObserver(this);
  return 0;
};

// Line 181: range 00000000165E30E8-00000000165E34B4
void __cdecl ElectroherculesBattleActivity::onPreStart(ElectroherculesBattleActivity *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  ElectroherculesBattleLevelData *v4; // rax
  ElectroherculesBattleLevelData *v5; // r8
  ElectroherculesBattleStageData *v6; // rax
  const unsigned int *v7; // rcx
  ElectroherculesBattleStageData *v8; // r8
  std::unordered_map<unsigned int,data::ElectroherculesBattleStageExcelConfig>::const_iterator __for_begin; // [rsp+18h] [rbp-138h] BYREF
  std::unordered_map<unsigned int,data::ElectroherculesBattleStageExcelConfig>::const_iterator __for_end; // [rsp+20h] [rbp-130h] BYREF
  std::vector<unsigned int>::const_iterator __for_begin_0; // [rsp+28h] [rbp-128h] BYREF
  std::vector<unsigned int>::const_iterator __for_end_0; // [rsp+30h] [rbp-120h] BYREF
  const ActivityElectroherculesBattleExcelConfigMgr *config_mgr; // [rsp+38h] [rbp-118h]
  const std::unordered_map<unsigned int,data::ElectroherculesBattleStageExcelConfig> *__for_range; // [rsp+40h] [rbp-110h]
  const std::pair<unsigned int const,data::ElectroherculesBattleStageExcelConfig> *v15; // [rsp+48h] [rbp-108h]
  std::tuple_element<0,const std::pair<unsigned int const,data::ElectroherculesBattleStageExcelConfig> >::type *stage_id; // [rsp+50h] [rbp-100h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ElectroherculesBattleStageExcelConfig> >::type *stage_config; // [rsp+58h] [rbp-F8h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+60h] [rbp-F0h]
  const unsigned int *level_id; // [rsp+68h] [rbp-E8h]
  std::shared_ptr<Config> v20; // [rsp+70h] [rbp-E0h] BYREF
  char v21[208]; // [rsp+80h] [rbp-D0h] BYREF

  v1 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 12 18 new_level_data:190 64 64 18 new_stage_data:186";
  *(_QWORD *)(v1 + 16) = ElectroherculesBattleActivity::onPreStart;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219020288;
  v3[536862724] = -202116109;
  std::map<unsigned int,ElectroherculesBattleStageData>::clear(&this->stage_data_map_);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v20);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20)->design_config.txt_config_mgr.activity_electrohercules_battle_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v20);
  __for_range = &config_mgr->electrohercules_battle_stage_excel_config_map;
  __for_begin._M_cur = std::unordered_map<unsigned int,data::ElectroherculesBattleStageExcelConfig>::begin(&config_mgr->electrohercules_battle_stage_excel_config_map)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,data::ElectroherculesBattleStageExcelConfig>::end(&config_mgr->electrohercules_battle_stage_excel_config_map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ElectroherculesBattleStageExcelConfig>,false>(
            &__for_begin,
            &__for_end) )
  {
    v15 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ElectroherculesBattleStageExcelConfig>,false,false>::operator*(&__for_begin);
    stage_id = std::get<0ul,unsigned int const,data::ElectroherculesBattleStageExcelConfig>(v15);
    stage_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ElectroherculesBattleStageExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ElectroherculesBattleStageExcelConfig>(v15);
    ElectroherculesBattleStageData::ElectroherculesBattleStageData((ElectroherculesBattleStageData *const)(v1 + 64));
    if ( *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)stage_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v1 + 64) = *stage_id;
    __for_range_0 = &stage_config->level_id_list;
    __for_begin_0._M_current = std::vector<unsigned int>::begin(&stage_config->level_id_list)._M_current;
    __for_end_0._M_current = std::vector<unsigned int>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin_0, &__for_end_0) )
    {
      level_id = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin_0);
      *(_DWORD *)(v1 + 32) = 0;
      *(_BYTE *)(v1 + 36) = 0;
      *(_DWORD *)(v1 + 40) = 0;
      if ( *(_BYTE *)(((unsigned __int64)level_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)level_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)level_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v1 + 32) = *level_id;
      *(_DWORD *)(v1 + 40) = -1;
      v4 = std::move<ElectroherculesBattleLevelData &>((ElectroherculesBattleLevelData *)(v1 + 32));
      std::map<unsigned int,ElectroherculesBattleLevelData>::emplace<unsigned int const&,ElectroherculesBattleLevelData>(
        (std::map<unsigned int,ElectroherculesBattleLevelData> *const)(v1 + 80),
        level_id,
        v4,
        (const unsigned int *)(v1 + 80),
        v5);
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin_0);
    }
    v6 = std::move<ElectroherculesBattleStageData &>((ElectroherculesBattleStageData *)(v1 + 64));
    std::map<unsigned int,ElectroherculesBattleStageData>::emplace<unsigned int const&,ElectroherculesBattleStageData>(
      &this->stage_data_map_,
      stage_id,
      v6,
      v7,
      v8);
    ElectroherculesBattleStageData::~ElectroherculesBattleStageData((ElectroherculesBattleStageData *const)(v1 + 64));
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ElectroherculesBattleStageExcelConfig>,false,false>::operator++(&__for_begin);
  }
  if ( v21 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 200: range 00000000165E34B6-00000000165E34D0
void __cdecl ElectroherculesBattleActivity::onStart(ElectroherculesBattleActivity *const this)
{
  ElectroherculesBattleActivity::registerObserver(this);
};

// Line 205: range 00000000165E34D2-00000000165E34F2
void __cdecl ElectroherculesBattleActivity::onClear(ElectroherculesBattleActivity *const this)
{
  std::map<unsigned int,ElectroherculesBattleStageData>::clear(&this->stage_data_map_);
};

// Line 210: range 00000000165E34F4-00000000165E350E
void __cdecl ElectroherculesBattleActivity::onSettle(ElectroherculesBattleActivity *const this)
{
  ElectroherculesBattleActivity::unregisterObserver(this);
};

// Line 215: range 00000000165E3510-00000000165E352F
void __cdecl ElectroherculesBattleActivity::onDailyRefresh(ElectroherculesBattleActivity *const this)
{
  BaseActivity::notifyClientData(this, 0);
};

// Line 220: range 00000000165E3530-00000000165E380F
void __cdecl ElectroherculesBattleActivity::registerObserver(ElectroherculesBattleActivity *const this)
{
  unsigned __int64 p_pending_que; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::weak_ptr<ElectroherculesBattleActivity> *p_this_wtr; // [rsp+10h] [rbp-E0h]
  std::weak_ptr<ElectroherculesBattleActivity> v5; // [rsp+20h] [rbp-D0h] BYREF
  PlayerEventComp varC0; // [rsp+30h] [rbp-C0h] BYREF

  p_pending_que = (unsigned __int64)&varC0.event_center_.context_.pending_que_;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      p_pending_que = v2;
  }
  *(_QWORD *)p_pending_que = 1102416563LL;
  *(_QWORD *)(p_pending_que + 8) = "2 32 16 12 this_ptr:221 64 16 12 this_wtr:227";
  *(_QWORD *)(p_pending_que + 16) = ElectroherculesBattleActivity::registerObserver;
  v3 = (_DWORD *)(p_pending_que >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  toThisPtr<ElectroherculesBattleActivity>((ElectroherculesBattleActivity *)(p_pending_que + 32));
  if ( std::operator==<ElectroherculesBattleActivity>(
         0LL,
         (const std::shared_ptr<ElectroherculesBattleActivity> *)(p_pending_que + 32)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&varC0._M_weak_this._M_refcount,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/electrohercules_battle_activity.cpp",
      "registerObserver",
      224);
    common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
      (common::milog::MiLogStream *const)&varC0._M_weak_this._M_refcount,
      (const char (*)[61])"dynamic_pointer_cast to ElectroherculesBattleActivity failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&varC0._M_weak_this._M_refcount);
  }
  else
  {
    std::weak_ptr<ElectroherculesBattleActivity>::weak_ptr<ElectroherculesBattleActivity,void>(
      (std::weak_ptr<ElectroherculesBattleActivity> *const)(p_pending_que + 64),
      (const std::shared_ptr<ElectroherculesBattleActivity> *)(p_pending_que + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    p_this_wtr = (std::weak_ptr<ElectroherculesBattleActivity> *)Player::getEventComp(this->player_);
    std::weak_ptr<ElectroherculesBattleActivity>::weak_ptr(
      &v5,
      (const std::weak_ptr<ElectroherculesBattleActivity> *)(p_pending_que + 64));
    PlayerEventComp::registerObserver<ElectroherculesBattleActivity,GalleryElectroherculesBattleSettleEvent>(
      &varC0,
      p_this_wtr,
      (void (*)(ElectroherculesBattleActivity *, const GalleryElectroherculesBattleSettleEvent *))&v5);
    std::weak_ptr<Observer>::operator=(
      &this->electrohercules_battle_gallery_settle_wtr_,
      (std::weak_ptr<Observer> *)&varC0);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&varC0);
    std::weak_ptr<ElectroherculesBattleActivity>::~weak_ptr(&v5);
    std::weak_ptr<ElectroherculesBattleActivity>::~weak_ptr((std::weak_ptr<ElectroherculesBattleActivity> *const)(p_pending_que + 64));
  }
  std::shared_ptr<ElectroherculesBattleActivity>::~shared_ptr((std::shared_ptr<ElectroherculesBattleActivity> *const)(p_pending_que + 32));
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

// Line 233: range 00000000165E3810-00000000165E3896
void __cdecl ElectroherculesBattleActivity::unregisterObserver(ElectroherculesBattleActivity *const this)
{
  PlayerEventComp *EventComp; // rax

  if ( !std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->electrohercules_battle_gallery_settle_wtr_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    EventComp = Player::getEventComp(this->player_);
    PlayerEventComp::unregisterObserver(EventComp, &this->electrohercules_battle_gallery_settle_wtr_);
    std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::reset(&this->electrohercules_battle_gallery_settle_wtr_);
  }
};

// Line 242: range 00000000165E3898-00000000165E4002
void __cdecl ElectroherculesBattleActivity::onGalleryElectroherculesBattleSettleEvent(
        ElectroherculesBattleActivity *const this,
        const GalleryElectroherculesBattleSettleEvent *event)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // r14
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  ActivityElectroherculesBattleExcelConfigMgr *p_activity_electrohercules_battle_config_mgr; // rcx
  common::milog::MiLogStream *v11; // rax
  uint32_t finish_time; // ecx
  uint32_t level_id; // edx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  unsigned int val; // [rsp+14h] [rbp-ECh] BYREF
  const data::ElectroherculesBattleLevelExcelConfig *level_info_ptr; // [rsp+18h] [rbp-E8h]
  std::shared_ptr<Config> v19; // [rsp+20h] [rbp-E0h] BYREF
  common::milog::MiLogStream v20; // [rsp+30h] [rbp-D0h] BYREF
  char v21[176]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 1 17 is_new_record:249 48 40 10 notify:262";
  *(_QWORD *)(v2 + 16) = ElectroherculesBattleActivity::onGalleryElectroherculesBattleSettleEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61953;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  common::milog::MiLogStream::create(
    &v20,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/electrohercules_battle_activity.cpp",
    "onGalleryElectroherculesBattleSettleEvent",
    243);
  v5 = common::milog::MiLogStream::operator<<<char [74],(char *[74])0>(
         &v20,
         (const char (*)[74])"[ELECTROHERCULES_BATTLE] onGalleryElectroherculesBattleSettleEvent, uid: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
  v7 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v6, (const char (*)[13])", stage_id: ");
  v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &event->stage_id);
  v9 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v8, (const char (*)[13])", level_id: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &event->level_id);
  common::milog::MiLogStream::~MiLogStream(&v20);
  if ( *(_BYTE *)(((unsigned __int64)&event->stage_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->stage_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( !ElectroherculesBattleActivity::isGalleryStartOrSettleValid(this, event->stage_id) )
  {
    *(_BYTE *)(v2 + 32) = 0;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v19);
    p_activity_electrohercules_battle_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19)->design_config.txt_config_mgr.activity_electrohercules_battle_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&event->level_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->level_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    level_info_ptr = data::ActivityElectroherculesBattleExcelConfigMgrBase::findElectroherculesBattleLevelExcelConfig(
                       p_activity_electrohercules_battle_config_mgr,
                       event->level_id);
    std::shared_ptr<Config>::~shared_ptr(&v19);
    if ( level_info_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&event->finish_time >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&event->finish_time >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      finish_time = event->finish_time;
      if ( *(_BYTE *)(((unsigned __int64)&event->level_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->level_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      level_id = event->level_id;
      if ( *(_BYTE *)(((unsigned __int64)&event->stage_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&event->stage_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( ElectroherculesBattleActivity::tryRecordGalleryFinishTime(
             this,
             event->stage_id,
             level_id,
             finish_time,
             (bool *)(v2 + 32)) )
      {
        common::milog::MiLogStream::create(
          &v20,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/electrohercules_battle_activity.cpp",
          "onGalleryElectroherculesBattleSettleEvent",
          258);
        v14 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
                &v20,
                (const char (*)[64])"[ELECTROHERCULES_BATTLE] tryRecordGalleryScore fail. day_index:");
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &event->stage_id);
        v16 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v15, (const char (*)[12])", level_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &level_info_ptr->level_id);
        common::milog::MiLogStream::~MiLogStream(&v20);
      }
      else
      {
        proto::ElectroherculesBattleSettleNotify::ElectroherculesBattleSettleNotify((proto::ElectroherculesBattleSettleNotify *const)(v2 + 48));
        if ( *(_BYTE *)(((unsigned __int64)&event->stage_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&event->stage_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        proto::ElectroherculesBattleSettleNotify::set_stage_id(
          (proto::ElectroherculesBattleSettleNotify *const)(v2 + 48),
          event->stage_id);
        if ( *(_BYTE *)(((unsigned __int64)&level_info_ptr->gallery_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)level_info_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_info_ptr->gallery_id >> 3)
                                                                        + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto::ElectroherculesBattleSettleNotify::set_gallery_id(
          (proto::ElectroherculesBattleSettleNotify *const)(v2 + 48),
          level_info_ptr->gallery_id);
        if ( *(_BYTE *)(((unsigned __int64)&level_info_ptr->level_difficulty >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)level_info_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_info_ptr->level_difficulty >> 3)
                                                                        + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto::ElectroherculesBattleSettleNotify::set_diffculty(
          (proto::ElectroherculesBattleSettleNotify *const)(v2 + 48),
          level_info_ptr->level_difficulty);
        if ( *(_BYTE *)(((unsigned __int64)&event->finish_time >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&event->finish_time >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        proto::ElectroherculesBattleSettleNotify::set_finish_time(
          (proto::ElectroherculesBattleSettleNotify *const)(v2 + 48),
          event->finish_time);
        proto::ElectroherculesBattleSettleNotify::set_is_new_record(
          (proto::ElectroherculesBattleSettleNotify *const)(v2 + 48),
          *(_BYTE *)(v2 + 32));
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 48));
        BaseActivity::notifyClientData(this, 0);
        proto::ElectroherculesBattleSettleNotify::~ElectroherculesBattleSettleNotify((proto::ElectroherculesBattleSettleNotify *const)(v2 + 48));
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/electrohercules_battle_activity.cpp",
        "onGalleryElectroherculesBattleSettleEvent",
        253);
      v11 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
              &v20,
              (const char (*)[61])"[ELECTROHERCULES_BATTLE] level_info nullptr for activity_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &this->activity_id_);
      common::milog::MiLogStream::~MiLogStream(&v20);
    }
  }
  if ( v21 == (char *)v2 )
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

// Line 274: range 00000000165E4004-00000000165E4461
__int64 __fastcall ElectroherculesBattleActivity::tryRecordGalleryFinishTime(
        ElectroherculesBattleActivity *const this,
        uint32_t stage_id,
        uint32_t level_id,
        uint32_t finish_time,
        unsigned __int64 is_new_record)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  common::milog::MiLogStream *v8; // rax
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,ElectroherculesBattleStageData> >::pointer v10; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,ElectroherculesBattleStageData> >::pointer v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,ElectroherculesBattleLevelData> >::pointer v15; // rdx
  bool v16; // cl
  std::_Rb_tree_iterator<std::pair<unsigned int const,ElectroherculesBattleLevelData> >::pointer v17; // rdx
  uint32_t *p_min_finish_time; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,ElectroherculesBattleLevelData> >::pointer v19; // rdx
  bool *p_is_finish; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,ElectroherculesBattleStageData> >::_Self __y; // [rsp+28h] [rbp-D8h] BYREF
  common::milog::MiLogStream v25; // [rsp+30h] [rbp-D0h] BYREF
  char v26[176]; // [rsp+50h] [rbp-B0h] BYREF

  v5 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(128LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 32 4 12 stage_id:273 48 4 12 level_id:273 64 8 19 stage_data_iter:276 96 8 19 level_data_iter:282";
  *(_QWORD *)(v5 + 16) = ElectroherculesBattleActivity::tryRecordGalleryFinishTime;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556924;
  v7[536862722] = -218959360;
  v7[536862723] = -202116352;
  *(_DWORD *)(v5 + 32) = stage_id;
  *(_DWORD *)(v5 + 48) = level_id;
  *(std::map<unsigned int,ElectroherculesBattleStageData>::iterator *)(v5 + 64) = std::map<unsigned int,ElectroherculesBattleStageData>::find(
                                                                                    &this->stage_data_map_,
                                                                                    (const std::map<unsigned int,ElectroherculesBattleStageData>::key_type *)(v5 + 32));
  __y._M_node = std::map<unsigned int,ElectroherculesBattleStageData>::end(&this->stage_data_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,ElectroherculesBattleStageData> >::_Self *)(v5 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/electrohercules_battle_activity.cpp",
      "tryRecordGalleryFinishTime",
      279);
    v8 = common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(
           &v25,
           (const char (*)[68])"[ELECTROHERCULES_BATTLE] stage_id not in stage_data_map_. stage_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v5 + 32));
    common::milog::MiLogStream::~MiLogStream(&v25);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    v10 = std::_Rb_tree_iterator<std::pair<unsigned int const,ElectroherculesBattleStageData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,ElectroherculesBattleStageData> > *const)(v5 + 64));
    *(std::map<unsigned int,ElectroherculesBattleLevelData>::iterator *)(v5 + 96) = std::map<unsigned int,ElectroherculesBattleLevelData>::find(
                                                                                      &v10->second.level_data_map,
                                                                                      (const std::map<unsigned int,ElectroherculesBattleLevelData>::key_type *)(v5 + 48));
    v11 = std::_Rb_tree_iterator<std::pair<unsigned int const,ElectroherculesBattleStageData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,ElectroherculesBattleStageData> > *const)(v5 + 64));
    __y._M_node = std::map<unsigned int,ElectroherculesBattleLevelData>::end(&v11->second.level_data_map)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,ElectroherculesBattleLevelData> >::_Self *)(v5 + 96),
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,ElectroherculesBattleLevelData> >::_Self *)&__y) )
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/electrohercules_battle_activity.cpp",
        "tryRecordGalleryFinishTime",
        285);
      v12 = common::milog::MiLogStream::operator<<<char [67],(char *[67])0>(
              &v25,
              (const char (*)[67])"[ELECTROHERCULES_BATTLE] level_id not in level_data_map. stage_id:");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v5 + 32));
      v14 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v13, (const char (*)[10])"level_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v5 + 48));
      common::milog::MiLogStream::~MiLogStream(&v25);
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v15 = std::_Rb_tree_iterator<std::pair<unsigned int const,ElectroherculesBattleLevelData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,ElectroherculesBattleLevelData> > *const)(v5 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&v15->second.min_finish_time >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v15 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v15->second.min_finish_time >> 3)
                                                           + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v16 = finish_time < v15->second.min_finish_time;
      if ( *(_BYTE *)((is_new_record >> 3) + 0x7FFF8000) != 0
        && (char)(is_new_record & 7) >= *(_BYTE *)((is_new_record >> 3) + 0x7FFF8000) )
      {
        __asan_report_store1(is_new_record);
      }
      *(_BYTE *)is_new_record = v16;
      if ( *(_BYTE *)is_new_record )
      {
        v17 = std::_Rb_tree_iterator<std::pair<unsigned int const,ElectroherculesBattleLevelData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,ElectroherculesBattleLevelData> > *const)(v5 + 96));
        p_min_finish_time = &v17->second.min_finish_time;
        if ( *(_BYTE *)(((unsigned __int64)p_min_finish_time >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_min_finish_time & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_min_finish_time >> 3)
                                                                              + 0x7FFF8000) )
        {
          __asan_report_store4(p_min_finish_time);
        }
        v17->second.min_finish_time = finish_time;
      }
      v19 = std::_Rb_tree_iterator<std::pair<unsigned int const,ElectroherculesBattleLevelData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,ElectroherculesBattleLevelData> > *const)(v5 + 96));
      p_is_finish = &v19->second.is_finish;
      if ( *(_BYTE *)(((unsigned __int64)p_is_finish >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)p_is_finish & 7) >= *(_BYTE *)(((unsigned __int64)p_is_finish >> 3) + 0x7FFF8000) )
      {
        __asan_report_store1(p_is_finish);
      }
      v19->second.is_finish = 1;
      result = 0LL;
    }
  }
  if ( v26 == (char *)v5 )
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
  return result;
};

// Line 298: range 00000000165E4462-00000000165E49B9
__int64 __fastcall ElectroherculesBattleActivity::isGalleryStartOrSettleValid(
        const ElectroherculesBattleActivity *const this,
        uint32_t stage_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const ElectroherculesBattleActivity *v5; // rdx
  unsigned __int64 v6; // rax
  char v7; // al
  common::milog::MiLogStream *v8; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v10; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,ElectroherculesBattleStageData> >::pointer v11; // rdx
  bool *p_is_stage_open; // rax
  common::milog::MiLogStream *v13; // rax
  PlayerSceneComp *SceneComp; // rax
  PlayerMpComp *MpComp; // rax
  common::milog::MiLogStream *v16; // r13
  unsigned int val; // [rsp+14h] [rbp-ACh] BYREF
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,ElectroherculesBattleStageData> >::_Self __y; // [rsp+18h] [rbp-A8h] BYREF
  common::milog::MiLogStream v19; // [rsp+20h] [rbp-A0h] BYREF
  char v20[128]; // [rsp+40h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 stage_id:297 64 8 19 stage_info_iter:304";
  *(_QWORD *)(v2 + 16) = ElectroherculesBattleActivity::isGalleryStartOrSettleValid;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = stage_id;
  if ( !BaseActivity::isOpening(this, 0) )
    goto LABEL_10;
  v5 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = (unsigned __int64)(this->_vptr_DescribalBase + 17);
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8();
  if ( (*(unsigned __int8 (__fastcall **)(const ElectroherculesBattleActivity *))v6)(v5) )
LABEL_10:
    v7 = 1;
  else
    v7 = 0;
  if ( v7 )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/electrohercules_battle_activity.cpp",
      "isGalleryStartOrSettleValid",
      301);
    v8 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
           &v19,
           (const char (*)[59])"[ELECTROHERCULES_BATTLE] activity is not open activity_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->activity_id_);
    common::milog::MiLogStream::~MiLogStream(&v19);
    result = 860LL;
  }
  else
  {
    *(std::map<unsigned int,ElectroherculesBattleStageData>::const_iterator *)(v2 + 64) = std::map<unsigned int,ElectroherculesBattleStageData>::find(
                                                                                            &this->stage_data_map_,
                                                                                            (const std::map<unsigned int,ElectroherculesBattleStageData>::key_type *)(v2 + 48));
    __y._M_node = std::map<unsigned int,ElectroherculesBattleStageData>::end(&this->stage_data_map_)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,ElectroherculesBattleStageData> >::_Self *)(v2 + 64),
           &__y) )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/electrohercules_battle_activity.cpp",
        "isGalleryStartOrSettleValid",
        307);
      v10 = common::milog::MiLogStream::operator<<<char [73],(char *[73])0>(
              &v19,
              (const char (*)[73])"[ELECTROHERCULES_BATTLE] stage_data_map_ not found stage_data, stage_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v19);
      result = 5LL;
    }
    else
    {
      v11 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,ElectroherculesBattleStageData>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,ElectroherculesBattleStageData> > *const)(v2 + 64));
      p_is_stage_open = &v11->second.is_stage_open;
      if ( *(_BYTE *)(((unsigned __int64)p_is_stage_open >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)p_is_stage_open & 7) >= *(_BYTE *)(((unsigned __int64)p_is_stage_open >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(p_is_stage_open);
      }
      if ( !v11->second.is_stage_open )
      {
        common::milog::MiLogStream::create(
          &v19,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/electrohercules_battle_activity.cpp",
          "isGalleryStartOrSettleValid",
          312);
        v13 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                &v19,
                (const char (*)[51])"[ELECTROHERCULES_BATTLE] stage not start. stage_id");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v19);
        result = 0xFFFFFFFFLL;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        SceneComp = Player::getSceneComp(this->player_);
        if ( !PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
        {
          result = 512LL;
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
              "./src/player/activity/electrohercules_battle_activity.cpp",
              "isGalleryStartOrSettleValid",
              321);
            v16 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
                    &v19,
                    (const char (*)[60])"[ELECTROHERCULES_BATTLE] should not start in mp mode, uid: ");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            val = Player::getUid(this->player_);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &val);
            common::milog::MiLogStream::~MiLogStream(&v19);
            result = 1202LL;
          }
          else
          {
            result = 0LL;
          }
        }
      }
    }
  }
  if ( v20 == (char *)v2 )
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

// Line 328: range 00000000165E49BA-00000000165E538E
__int64 __fastcall ElectroherculesBattleActivity::selectGalleryDifficulty(
        ElectroherculesBattleActivity *const this,
        uint32_t stage_id,
        uint32_t difficulty,
        uint32_t *gallery_id)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  unsigned int v7; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  Scene *v11; // rax
  Scene *v12; // rax
  SceneGalleryComp *GalleryComp; // rcx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  uint32_t v17; // ecx
  Scene *v18; // rax
  uint32_t v19; // ecx
  common::milog::MiLogStream *v20; // rax
  uint32_t level_id; // r15d
  uint32_t v22; // r14d
  uint32_t Uid; // eax
  ElectroherculesBattleGallery *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  __int64 result; // rax
  uint32_t difficultya; // [rsp+Ch] [rbp-184h]
  std::__shared_ptr_access<ElectroherculesBattleGallery,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // [rsp+10h] [rbp-180h]
  unsigned int val; // [rsp+30h] [rbp-160h] BYREF
  int32_t ret; // [rsp+34h] [rbp-15Ch]
  const data::ElectroherculesBattleLevelExcelConfig *level_info_ptr; // [rsp+38h] [rbp-158h]
  common::milog::MiLogStream v38; // [rsp+40h] [rbp-150h] BYREF
  char v39[304]; // [rsp+60h] [rbp-130h] BYREF

  v4 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(256LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "6 48 4 12 stage_id:327 64 4 14 difficulty:327 80 16 13 scene_ptr:340 112 16 20 base_gallery_ptr:"
                        "354 144 16 38 electrohercules_battle_gallery_ptr:360 176 48 11 uid_set:346";
  *(_QWORD *)(v4 + 16) = ElectroherculesBattleActivity::selectGalleryDifficulty;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = 61956;
  v6[536862723] = 62194;
  v6[536862724] = 62194;
  v6[536862725] = 62194;
  v6[536862727] = -202116109;
  *(_DWORD *)(v4 + 48) = stage_id;
  *(_DWORD *)(v4 + 64) = difficulty;
  ret = ElectroherculesBattleActivity::isGalleryStartOrSettleValid(this, *(_DWORD *)(v4 + 48));
  if ( ret )
  {
    v7 = ret;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v4 + 144));
    v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
    level_info_ptr = ActivityElectroherculesBattleExcelConfigMgr::findLevelConfigByStageAndDifficulty(
                       &v8->design_config.txt_config_mgr.activity_electrohercules_battle_config_mgr,
                       *(_DWORD *)(v4 + 48),
                       *(_DWORD *)(v4 + 64));
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 144));
    if ( level_info_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::getSceneComp(this->player_);
      PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v4 + 80));
      if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v4 + 80)) )
      {
        common::milog::MiLogStream::create(
          &v38,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/electrohercules_battle_activity.cpp",
          "selectGalleryDifficulty",
          343);
        v10 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                &v38,
                (const char (*)[51])"[ELECTROHERCULES_BATTLE] getCurScene failed, uid: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
        common::milog::MiLogStream::~MiLogStream(&v38);
        v7 = -1;
      }
      else
      {
        std::set<unsigned int>::set((std::set<unsigned int> *const)(v4 + 176));
        v11 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
        Scene::getPlayerUidSet(v11, (std::set<unsigned int> *)(v4 + 176));
        v12 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
        GalleryComp = Scene::getGalleryComp(v12);
        if ( *(_BYTE *)(((unsigned __int64)&level_info_ptr->gallery_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)level_info_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_info_ptr->gallery_id >> 3)
                                                                        + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( SceneGalleryComp::initGallery(
               GalleryComp,
               level_info_ptr->gallery_id,
               (const std::set<unsigned int> *)(v4 + 176)) )
        {
          common::milog::MiLogStream::create(
            &v38,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/electrohercules_battle_activity.cpp",
            "selectGalleryDifficulty",
            350);
          v14 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                  &v38,
                  (const char (*)[55])"[ELECTROHERCULES_BATTLE] initGallery fail, gallery_id:");
          v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &level_info_ptr->gallery_id);
          v16 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v15,
                  (const char (*)[14])" activity_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &this->activity_id_);
          common::milog::MiLogStream::~MiLogStream(&v38);
          v7 = -1;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&level_info_ptr->gallery_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)level_info_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_info_ptr->gallery_id >> 3)
                                                                          + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          v17 = level_info_ptr->gallery_id;
          if ( *(_BYTE *)(((unsigned __int64)gallery_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)gallery_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)gallery_id >> 3)
                                                                         + 0x7FFF8000) )
          {
            __asan_report_store4(gallery_id);
          }
          *gallery_id = v17;
          v18 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
          v19 = (unsigned int)Scene::getGalleryComp(v18);
          if ( *(_BYTE *)(((unsigned __int64)&level_info_ptr->gallery_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)level_info_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_info_ptr->gallery_id >> 3)
                                                                          + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          SceneGalleryComp::findGallery((SceneGalleryComp *const)(v4 + 112), v19);
          if ( std::operator==<BaseGallery>(0LL, (const std::shared_ptr<BaseGallery> *)(v4 + 112)) )
          {
            common::milog::MiLogStream::create(
              &v38,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/electrohercules_battle_activity.cpp",
              "selectGalleryDifficulty",
              357);
            common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
              &v38,
              (const char (*)[44])"[ELECTROHERCULES_BATTLE] gallery not exists");
            common::milog::MiLogStream::~MiLogStream(&v38);
            v7 = -1;
          }
          else
          {
            std::dynamic_pointer_cast<ElectroherculesBattleGallery,BaseGallery>((const std::shared_ptr<BaseGallery> *)(v4 + 144));
            if ( std::operator==<ElectroherculesBattleGallery>(
                   0LL,
                   (const std::shared_ptr<ElectroherculesBattleGallery> *)(v4 + 144)) )
            {
              common::milog::MiLogStream::create(
                &v38,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/electrohercules_battle_activity.cpp",
                "selectGalleryDifficulty",
                363);
              v20 = common::milog::MiLogStream::operator<<<char [74],(char *[74])0>(
                      &v38,
                      (const char (*)[74])"[ELECTROHERCULES_BATTLE] gallery dynamic_pointer_cast failed, gallery_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, gallery_id);
              common::milog::MiLogStream::~MiLogStream(&v38);
              v7 = -1;
            }
            else
            {
              v32 = std::__shared_ptr_access<ElectroherculesBattleGallery,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ElectroherculesBattleGallery,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
              difficultya = *(_DWORD *)(v4 + 64);
              if ( *(_BYTE *)(((unsigned __int64)&level_info_ptr->level_id >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&level_info_ptr->level_id >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4();
              }
              level_id = level_info_ptr->level_id;
              v22 = *(_DWORD *)(v4 + 48);
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              Uid = Player::getUid(this->player_);
              ElectroherculesBattleGallery::initDetailInfo(v32, Uid, v22, level_id, difficultya);
              v24 = std::__shared_ptr_access<ElectroherculesBattleGallery,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ElectroherculesBattleGallery,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
              ElectroherculesBattleGallery::notifyDifficultyEvent(v24);
              common::milog::MiLogStream::create(
                &v38,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/player/activity/electrohercules_battle_activity.cpp",
                "selectGalleryDifficulty",
                371);
              v25 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                      &v38,
                      (const char (*)[35])"EVENT_SELECT_DIFFICULTY, stage_id:");
              v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v25,
                      (const unsigned int *)(v4 + 48));
              v27 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                      v26,
                      (const char (*)[13])" difficulty:");
              v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v27,
                      (const unsigned int *)(v4 + 64));
              v29 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                      v28,
                      (const char (*)[11])" activity:");
              common::milog::MiLogStream::operator<<<ElectroherculesBattleActivity,(ElectroherculesBattleActivity*)0>(
                v29,
                this);
              common::milog::MiLogStream::~MiLogStream(&v38);
              v7 = 0;
            }
            std::shared_ptr<ElectroherculesBattleGallery>::~shared_ptr((std::shared_ptr<ElectroherculesBattleGallery> *const)(v4 + 144));
          }
          std::shared_ptr<BaseGallery>::~shared_ptr((std::shared_ptr<BaseGallery> *const)(v4 + 112));
        }
        std::set<unsigned int>::~set((std::set<unsigned int> *const)(v4 + 176));
      }
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v4 + 80));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v38,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/electrohercules_battle_activity.cpp",
        "selectGalleryDifficulty",
        337);
      v9 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
             &v38,
             (const char (*)[61])"[ELECTROHERCULES_BATTLE] level_info nullptr for activity_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->activity_id_);
      common::milog::MiLogStream::~MiLogStream(&v38);
      v7 = -1;
    }
  }
  result = v7;
  if ( v39 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 377: range 00000000165E5390-00000000165E56ED
__int64 __fastcall ElectroherculesBattleActivity::openStageByGm(
        ElectroherculesBattleActivity *const this,
        uint32_t stage_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  bool v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v10; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,ElectroherculesBattleStageData> >::pointer v11; // rdx
  bool *p_is_stage_open; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,ElectroherculesBattleStageData> >::_Self __y; // [rsp+18h] [rbp-C8h] BYREF
  std::shared_ptr<Config> v14; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v15; // [rsp+30h] [rbp-B0h] BYREF
  char v16[144]; // [rsp+50h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 stage_id:376 64 8 19 level_data_iter:384";
  *(_QWORD *)(v2 + 16) = ElectroherculesBattleActivity::openStageByGm;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = stage_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v14);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14);
  v6 = data::ActivityElectroherculesBattleExcelConfigMgrBase::findElectroherculesBattleLevelExcelConfig(
         &v5->design_config.txt_config_mgr.activity_electrohercules_battle_config_mgr,
         *(_DWORD *)(v2 + 48)) == 0LL;
  std::shared_ptr<Config>::~shared_ptr(&v14);
  if ( v6 )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/electrohercules_battle_activity.cpp",
      "openStageByGm",
      380);
    v7 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
           &v15,
           (const char (*)[35])"[ELECTROHERCULES_BATTLE] stage id ");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v8, (const char (*)[16])" does not exist");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    *(std::map<unsigned int,ElectroherculesBattleStageData>::iterator *)(v2 + 64) = std::map<unsigned int,ElectroherculesBattleStageData>::find(
                                                                                      &this->stage_data_map_,
                                                                                      (const std::map<unsigned int,ElectroherculesBattleStageData>::key_type *)(v2 + 48));
    __y._M_node = std::map<unsigned int,ElectroherculesBattleStageData>::end(&this->stage_data_map_)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,ElectroherculesBattleStageData> >::_Self *)(v2 + 64),
           &__y) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/electrohercules_battle_activity.cpp",
        "openStageByGm",
        387);
      v10 = common::milog::MiLogStream::operator<<<char [69],(char *[69])0>(
              &v15,
              (const char (*)[69])"[ELECTROHERCULES_BATTLE] stage_id not in stage_data_map_, stage_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v11 = std::_Rb_tree_iterator<std::pair<unsigned int const,ElectroherculesBattleStageData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,ElectroherculesBattleStageData> > *const)(v2 + 64));
      p_is_stage_open = &v11->second.is_stage_open;
      if ( *(_BYTE *)(((unsigned __int64)p_is_stage_open >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)p_is_stage_open & 7) >= *(_BYTE *)(((unsigned __int64)p_is_stage_open >> 3) + 0x7FFF8000) )
      {
        __asan_report_store1(p_is_stage_open);
      }
      v11->second.is_stage_open = 1;
      BaseActivity::notifyClientData(this, 0);
      result = 0LL;
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
