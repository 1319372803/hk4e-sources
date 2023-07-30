// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/potion_activity.cpp

// Line 39: range 0000000016C255B0-0000000016C25705
int32_t __cdecl PotionLevel::fromBin(PotionLevel *const this, const proto::PotionLevelBin *bin)
{
  uint32_t v2; // ecx
  uint32_t v3; // ecx
  uint32_t v4; // ecx
  uint32_t v5; // ecx

  v2 = proto::PotionLevelBin::level_id(bin);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->level_id = v2;
  v3 = proto::PotionLevelBin::difficulty_level(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->difficulty_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->difficulty_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->difficulty_level);
  }
  this->difficulty_level = v3;
  v4 = proto::PotionLevelBin::mode_id(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->mode_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->mode_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->mode_id);
  }
  this->mode_id = v4;
  v5 = proto::PotionLevelBin::score(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->score);
  }
  this->score = v5;
  return 0;
};

// Line 48: range 0000000016C25706-0000000016C25857
int32_t __cdecl PotionLevel::toBin(const PotionLevel *const this, proto::PotionLevelBin *bin)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::PotionLevelBin::set_level_id(bin, this->level_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->difficulty_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->difficulty_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::PotionLevelBin::set_difficulty_level(bin, this->difficulty_level);
  if ( *(_BYTE *)(((unsigned __int64)&this->mode_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->mode_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::PotionLevelBin::set_mode_id(bin, this->mode_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::PotionLevelBin::set_score(bin, this->score);
  return 0;
};

// Line 57: range 0000000016C25858-0000000016C259A9
int32_t __cdecl PotionLevel::toClient(const PotionLevel *const this, proto::PotionLevelData *proto)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::PotionLevelData::set_level_id(proto, this->level_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->difficulty_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->difficulty_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::PotionLevelData::set_difficulty_level(proto, this->difficulty_level);
  if ( *(_BYTE *)(((unsigned __int64)&this->mode_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->mode_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::PotionLevelData::set_mode_id(proto, this->mode_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::PotionLevelData::set_score(proto, this->score);
  return 0;
};

// Line 66: range 0000000016C259AA-0000000016C25A8A
void __cdecl PotionLevel::init(PotionLevel *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->difficulty_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->difficulty_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->difficulty_level);
  }
  this->difficulty_level = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->mode_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->mode_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->mode_id);
  }
  this->mode_id = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->score);
  }
  this->score = 0;
};

// Line 74: range 0000000016C25A8C-0000000016C25EB8
int32_t __cdecl PotionStage::fromBin(PotionStage *const this, const proto::PotionStageBin *bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  uint32_t v5; // edx
  bool is_open; // cl
  uint32_t v7; // edx
  PotionLevel *v8; // r15
  unsigned int *v9; // rcx
  PotionLevel *v10; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,PotionLevel> >,bool> v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  const google::protobuf::RepeatedField<unsigned int> *v15; // rax
  const google::protobuf::RepeatedField<unsigned int> *v16; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-B4h] BYREF
  google::protobuf::RepeatedPtrField<proto::PotionLevelBin>::const_iterator __for_begin; // [rsp+30h] [rbp-B0h] BYREF
  google::protobuf::RepeatedPtrField<proto::PotionLevelBin>::const_iterator __for_end; // [rsp+38h] [rbp-A8h] BYREF
  const google::protobuf::RepeatedPtrField<proto::PotionLevelBin> *__for_range; // [rsp+40h] [rbp-A0h]
  const proto::PotionLevelBin *level_bin; // [rsp+48h] [rbp-98h]
  common::milog::MiLogStream v23; // [rsp+50h] [rbp-90h] BYREF
  char v24[112]; // [rsp+70h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 8 level:81";
  *(_QWORD *)(v2 + 16) = PotionStage::fromBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  v5 = proto::PotionStageBin::stage_id(bin);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->stage_id = v5;
  is_open = proto::PotionStageBin::is_open(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_open);
  }
  this->is_open = is_open;
  v7 = proto::PotionStageBin::reset_times(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->reset_times >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reset_times >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->reset_times);
  }
  this->reset_times = v7;
  std::map<unsigned int,PotionLevel>::clear(&this->level_map);
  __for_range = proto::PotionStageBin::level_bin_list(bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::PotionLevelBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::PotionLevelBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::PotionLevelBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    level_bin = google::protobuf::internal::RepeatedPtrIterator<proto::PotionLevelBin const>::operator*(&__for_begin);
    *(_DWORD *)(v2 + 32) = 0;
    *(_DWORD *)(v2 + 36) = 0;
    *(_DWORD *)(v2 + 40) = 0;
    *(_DWORD *)(v2 + 44) = 0;
    PotionLevel::fromBin((PotionLevel *const)(v2 + 32), level_bin);
    v8 = std::move<PotionLevel &>((PotionLevel *)(v2 + 32));
    val = proto::PotionLevelBin::level_id(level_bin);
    v11 = std::map<unsigned int,PotionLevel>::emplace<unsigned int,PotionLevel>(&this->level_map, &val, v8, v9, v10);
    if ( !v11.second )
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/potion_activity.cpp",
        "fromBin",
        85);
      v12 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
              &v23,
              (const char (*)[29])"[POTION] duplicate level id:");
      val = proto::PotionLevelBin::level_id(level_bin);
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      v14 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v13, (const char (*)[11])" stage id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &this->stage_id);
      common::milog::MiLogStream::~MiLogStream(&v23);
    }
    google::protobuf::internal::RepeatedPtrIterator<proto::PotionLevelBin const>::operator++(&__for_begin);
  }
  std::unordered_set<unsigned int>::clear(&this->cool_down_avatar_id_set);
  std::unordered_set<unsigned int>::clear(&this->cool_down_buff_id_set);
  v15 = proto::PotionStageBin::cool_down_avatar_id_list(bin);
  common::tools::MiscUtils::setFromRepeated<std::unordered_set<unsigned int>,unsigned int>(
    &this->cool_down_avatar_id_set,
    v15);
  v16 = proto::PotionStageBin::cool_down_buff_id_list(bin);
  common::tools::MiscUtils::setFromRepeated<std::unordered_set<unsigned int>,unsigned int>(
    &this->cool_down_buff_id_set,
    v16);
  result = 0;
  if ( v24 == (char *)v2 )
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

// Line 96: range 0000000016C25EBA-0000000016C2608F
int32_t __cdecl PotionStage::toBin(const PotionStage *const this, proto::PotionStageBin *bin)
{
  proto::PotionLevelBin *v2; // rax
  google::protobuf::RepeatedField<unsigned int> *v3; // rax
  google::protobuf::RepeatedField<unsigned int> *v4; // rax
  std::map<unsigned int,PotionLevel>::const_iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::map<unsigned int,PotionLevel>::const_iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  const std::map<unsigned int,PotionLevel> *__for_range; // [rsp+20h] [rbp-20h]
  const std::pair<unsigned int const,PotionLevel> *v9; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,PotionLevel> >::type *_; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,PotionLevel> >::type *level; // [rsp+38h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::PotionStageBin::set_stage_id(bin, this->stage_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_open);
  }
  proto::PotionStageBin::set_is_open(bin, this->is_open);
  if ( *(_BYTE *)(((unsigned __int64)&this->reset_times >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reset_times >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::PotionStageBin::set_reset_times(bin, this->reset_times);
  __for_range = &this->level_map;
  __for_begin._M_node = std::map<unsigned int,PotionLevel>::begin(&this->level_map)._M_node;
  __for_end._M_node = std::map<unsigned int,PotionLevel>::end(&this->level_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v9 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,PotionLevel>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,PotionLevel>(v9);
    level = (std::tuple_element<1,const std::pair<unsigned int const,PotionLevel> >::type *)std::get<1ul,unsigned int const,PotionLevel>(v9);
    v2 = proto::PotionStageBin::add_level_bin_list(bin);
    PotionLevel::toBin(level, v2);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,PotionLevel>>::operator++(&__for_begin);
  }
  v3 = proto::PotionStageBin::mutable_cool_down_avatar_id_list(bin);
  common::tools::MiscUtils::setToRepeated<std::unordered_set<unsigned int>,unsigned int>(
    &this->cool_down_avatar_id_set,
    v3);
  v4 = proto::PotionStageBin::mutable_cool_down_buff_id_list(bin);
  common::tools::MiscUtils::setToRepeated<std::unordered_set<unsigned int>,unsigned int>(
    &this->cool_down_buff_id_set,
    v4);
  return 0;
};

// Line 110: range 0000000016C26090-0000000016C2621D
int32_t __cdecl PotionStage::toClient(const PotionStage *const this, proto::PotionStageData *proto)
{
  proto::PotionLevelData *v2; // rax
  google::protobuf::RepeatedField<unsigned int> *v3; // rax
  google::protobuf::RepeatedField<unsigned int> *v4; // rax
  std::map<unsigned int,PotionLevel>::const_iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::map<unsigned int,PotionLevel>::const_iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  const std::map<unsigned int,PotionLevel> *__for_range; // [rsp+20h] [rbp-20h]
  const std::pair<unsigned int const,PotionLevel> *v9; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,PotionLevel> >::type *_; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,PotionLevel> >::type *level; // [rsp+38h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::PotionStageData::set_stage_id(proto, this->stage_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_open);
  }
  proto::PotionStageData::set_is_open(proto, this->is_open);
  __for_range = &this->level_map;
  __for_begin._M_node = std::map<unsigned int,PotionLevel>::begin(&this->level_map)._M_node;
  __for_end._M_node = std::map<unsigned int,PotionLevel>::end(&this->level_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v9 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,PotionLevel>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,PotionLevel>(v9);
    level = (std::tuple_element<1,const std::pair<unsigned int const,PotionLevel> >::type *)std::get<1ul,unsigned int const,PotionLevel>(v9);
    v2 = proto::PotionStageData::add_level_list(proto);
    PotionLevel::toClient(level, v2);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,PotionLevel>>::operator++(&__for_begin);
  }
  v3 = proto::PotionStageData::mutable_cool_down_avatar_id_list(proto);
  common::tools::MiscUtils::setToRepeated<std::unordered_set<unsigned int>,unsigned int>(
    &this->cool_down_avatar_id_set,
    v3);
  v4 = proto::PotionStageData::mutable_cool_down_buff_id_list(proto);
  common::tools::MiscUtils::setToRepeated<std::unordered_set<unsigned int>,unsigned int>(
    &this->cool_down_buff_id_set,
    v4);
  return 0;
};

// Line 123: range 0000000016C2621E-0000000016C2631D
void __cdecl PotionStage::reset(PotionStage *const this)
{
  std::map<unsigned int,PotionLevel>::iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::map<unsigned int,PotionLevel>::iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  std::map<unsigned int,PotionLevel> *__for_range; // [rsp+20h] [rbp-20h]
  std::pair<unsigned int const,PotionLevel> *__in; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,std::pair<unsigned int const,PotionLevel> >::type *_; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,std::pair<unsigned int const,PotionLevel> >::type *level; // [rsp+38h] [rbp-8h]

  __for_range = &this->level_map;
  __for_begin._M_node = std::map<unsigned int,PotionLevel>::begin(&this->level_map)._M_node;
  __for_end._M_node = std::map<unsigned int,PotionLevel>::end(&this->level_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,PotionLevel>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,PotionLevel>(__in);
    level = std::get<1ul,unsigned int const,PotionLevel>(__in);
    PotionLevel::init(level);
    std::_Rb_tree_iterator<std::pair<unsigned int const,PotionLevel>>::operator++(&__for_begin);
  }
  std::unordered_set<unsigned int>::clear(&this->cool_down_avatar_id_set);
  std::unordered_set<unsigned int>::clear(&this->cool_down_buff_id_set);
  if ( *(_BYTE *)(((unsigned __int64)&this->reset_times >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reset_times >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  ++this->reset_times;
};

// Line 134: range 0000000016C2631E-0000000016C26402
uint32_t __cdecl PotionStage::getTotalScore(PotionStage *const this)
{
  uint32_t total_score; // [rsp+1Ch] [rbp-34h]
  std::map<unsigned int,PotionLevel>::iterator __for_begin; // [rsp+20h] [rbp-30h] BYREF
  std::map<unsigned int,PotionLevel>::iterator __for_end; // [rsp+28h] [rbp-28h] BYREF
  std::map<unsigned int,PotionLevel> *__for_range; // [rsp+30h] [rbp-20h]
  const std::pair<unsigned int const,PotionLevel> *v6; // [rsp+38h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,PotionLevel> >::type *_; // [rsp+40h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,PotionLevel> >::type *level; // [rsp+48h] [rbp-8h]

  total_score = 0;
  __for_range = &this->level_map;
  __for_begin._M_node = std::map<unsigned int,PotionLevel>::begin(&this->level_map)._M_node;
  __for_end._M_node = std::map<unsigned int,PotionLevel>::end(&this->level_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v6 = std::_Rb_tree_iterator<std::pair<unsigned int const,PotionLevel>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,PotionLevel>(v6);
    level = (std::tuple_element<1,const std::pair<unsigned int const,PotionLevel> >::type *)std::get<1ul,unsigned int const,PotionLevel>(v6);
    if ( *(_BYTE *)(((unsigned __int64)&level->score >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)level + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level->score >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    total_score += level->score;
    std::_Rb_tree_iterator<std::pair<unsigned int const,PotionLevel>>::operator++(&__for_begin);
  }
  return total_score;
};

// Line 144: range 0000000016C26404-0000000016C26801
int32_t __cdecl PotionActivity::fromScheduleBin(PotionActivity *const this, const proto::ActivityScheduleBin *bin)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // rbx
  unsigned int *v5; // rcx
  PotionStage *v6; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,PotionStage> >,bool> v7; // rax
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  const google::protobuf::RepeatedField<long unsigned int> *v11; // rax
  bool is_finish_any_level; // dl
  int32_t result; // eax
  unsigned int val; // [rsp+10h] [rbp-1A0h] BYREF
  unsigned int Uid; // [rsp+14h] [rbp-19Ch] BYREF
  google::protobuf::RepeatedPtrField<proto::PotionStageBin>::const_iterator __for_begin; // [rsp+18h] [rbp-198h] BYREF
  google::protobuf::RepeatedPtrField<proto::PotionStageBin>::const_iterator __for_end; // [rsp+20h] [rbp-190h] BYREF
  const proto::PotionScheduleBin *schedule_bin; // [rsp+28h] [rbp-188h]
  const google::protobuf::RepeatedPtrField<proto::PotionStageBin> *__for_range; // [rsp+30h] [rbp-180h]
  const proto::PotionStageBin *stage_bin; // [rsp+38h] [rbp-178h]
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-170h] BYREF
  char v22[336]; // [rsp+60h] [rbp-150h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 48 176 9 stage:149";
  *(_QWORD *)(v2 + 16) = PotionActivity::fromScheduleBin;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862727] = -202116109;
  v4[536862728] = -202116109;
  schedule_bin = proto::ActivityScheduleBin::potion_bin(bin);
  std::map<unsigned int,PotionStage>::clear(&this->stage_map_);
  __for_range = proto::PotionScheduleBin::stage_bin_list(schedule_bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::PotionStageBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::PotionStageBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::PotionStageBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    stage_bin = google::protobuf::internal::RepeatedPtrIterator<proto::PotionStageBin const>::operator*(&__for_begin);
    PotionStage::PotionStage((PotionStage *const)(v2 + 48));
    PotionStage::fromBin((PotionStage *const)(v2 + 48), stage_bin);
    Uid = proto::PotionStageBin::stage_id(stage_bin);
    v7 = std::map<unsigned int,PotionStage>::emplace<unsigned int,PotionStage&>(
           &this->stage_map_,
           &Uid,
           (PotionStage *)(v2 + 48),
           v5,
           v6);
    if ( !v7.second )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/potion_activity.cpp",
        "fromScheduleBin",
        153);
      v8 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
             &v21,
             (const char (*)[36])"[POTION] duplicate stage, stage_id:");
      val = proto::PotionStageBin::stage_id(stage_bin);
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
      v10 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v9, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Uid = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &Uid);
      common::milog::MiLogStream::~MiLogStream(&v21);
    }
    PotionStage::~PotionStage((PotionStage *const)(v2 + 48));
    google::protobuf::internal::RepeatedPtrIterator<proto::PotionStageBin const>::operator++(&__for_begin);
  }
  std::vector<unsigned long>::clear(&this->in_dungeon_avatar_guid_vec_);
  v11 = proto::PotionScheduleBin::in_dungeon_avatar_guid_list(schedule_bin);
  common::tools::MiscUtils::repeatedToVector<unsigned long,unsigned long>(v11, &this->in_dungeon_avatar_guid_vec_);
  is_finish_any_level = proto::PotionScheduleBin::is_finish_any_level(schedule_bin);
  if ( *(char *)(((unsigned __int64)&this->is_finish_any_level_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_finish_any_level_);
  this->is_finish_any_level_ = is_finish_any_level;
  result = 0;
  if ( v22 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF801C) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 163: range 0000000016C26802-0000000016C2693E
int32_t __cdecl PotionActivity::toScheduleBin(const PotionActivity *const this, proto::ActivityScheduleBin *bin)
{
  proto::PotionStageBin *v2; // rax
  google::protobuf::RepeatedField<long unsigned int> *v3; // rax
  std::map<unsigned int,PotionStage>::const_iterator __for_begin; // [rsp+18h] [rbp-38h] BYREF
  std::map<unsigned int,PotionStage>::const_iterator __for_end; // [rsp+20h] [rbp-30h] BYREF
  proto::PotionScheduleBin *schedule_bin; // [rsp+28h] [rbp-28h]
  const std::map<unsigned int,PotionStage> *__for_range; // [rsp+30h] [rbp-20h]
  const std::pair<unsigned int const,PotionStage> *v9; // [rsp+38h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,PotionStage> >::type *_; // [rsp+40h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,PotionStage> >::type *stage; // [rsp+48h] [rbp-8h]

  schedule_bin = proto::ActivityScheduleBin::mutable_potion_bin(bin);
  __for_range = &this->stage_map_;
  __for_begin._M_node = std::map<unsigned int,PotionStage>::begin(&this->stage_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,PotionStage>::end(&this->stage_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v9 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,PotionStage>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,PotionStage>(v9);
    stage = (std::tuple_element<1,const std::pair<unsigned int const,PotionStage> >::type *)std::get<1ul,unsigned int const,PotionStage>(v9);
    v2 = proto::PotionScheduleBin::add_stage_bin_list(schedule_bin);
    PotionStage::toBin(stage, v2);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,PotionStage>>::operator++(&__for_begin);
  }
  v3 = proto::PotionScheduleBin::mutable_in_dungeon_avatar_guid_list(schedule_bin);
  common::tools::MiscUtils::vectorToRepeated<unsigned long,unsigned long>(&this->in_dungeon_avatar_guid_vec_, v3);
  if ( *(char *)(((unsigned __int64)&this->is_finish_any_level_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_finish_any_level_);
  proto::PotionScheduleBin::set_is_finish_any_level(schedule_bin, this->is_finish_any_level_);
  return 0;
};

// Line 175: range 0000000016C26940-0000000016C26B0D
int32_t __cdecl PotionActivity::toClient(PotionActivity *const this, proto::ActivityInfo *activity_info)
{
  common::milog::MiLogStream *v2; // rbx
  unsigned int val; // [rsp+1Ch] [rbp-74h] BYREF
  std::map<unsigned int,PotionStage>::iterator __for_begin; // [rsp+20h] [rbp-70h] BYREF
  std::map<unsigned int,PotionStage>::iterator __for_end; // [rsp+28h] [rbp-68h] BYREF
  proto::PotionActivityDetailInfo *client_info; // [rsp+30h] [rbp-60h]
  std::map<unsigned int,PotionStage> *__for_range; // [rsp+38h] [rbp-58h]
  const std::pair<unsigned int const,PotionStage> *v9; // [rsp+40h] [rbp-50h]
  std::tuple_element<0,const std::pair<unsigned int const,PotionStage> >::type *stage_id; // [rsp+48h] [rbp-48h]
  std::tuple_element<1,const std::pair<unsigned int const,PotionStage> >::type *stage; // [rsp+50h] [rbp-40h]
  proto::PotionStageData *stage_data; // [rsp+58h] [rbp-38h]
  common::milog::MiLogStream v13; // [rsp+60h] [rbp-30h] BYREF

  if ( BaseActivity::toClient(this, activity_info) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/potion_activity.cpp",
      "toClient",
      178);
    v2 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
           &v13,
           (const char (*)[45])"[POTION] BaseActivity::toClient fails, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    return -1;
  }
  else
  {
    client_info = proto::ActivityInfo::mutable_potion_info(activity_info);
    __for_range = &this->stage_map_;
    __for_begin._M_node = std::map<unsigned int,PotionStage>::begin(&this->stage_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,PotionStage>::end(&this->stage_map_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v9 = std::_Rb_tree_iterator<std::pair<unsigned int const,PotionStage>>::operator*(&__for_begin);
      stage_id = std::get<0ul,unsigned int const,PotionStage>(v9);
      stage = (std::tuple_element<1,const std::pair<unsigned int const,PotionStage> >::type *)std::get<1ul,unsigned int const,PotionStage>(v9);
      stage_data = proto::PotionActivityDetailInfo::add_stage_list(client_info);
      PotionStage::toClient(stage, stage_data);
      std::_Rb_tree_iterator<std::pair<unsigned int const,PotionStage>>::operator++(&__for_begin);
    }
    return 0;
  }
};

// Line 191: range 0000000016C26B0E-0000000016C26B70
void __cdecl PotionActivity::onLogin(PotionActivity *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( !Player::isRelogin(this->player_) )
    PotionActivity::recallDungeonAvatars(this);
  BaseActivity::onLogin(this);
};

// Line 200: range 0000000016C26B72-0000000016C26B90
int32_t __cdecl PotionActivity::init(PotionActivity *const this)
{
  PotionActivity::registerObserver(this);
  return 0;
};

// Line 208: range 0000000016C26B92-0000000016C2714F
void __cdecl PotionActivity::onPreStart(PotionActivity *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  uint32_t v4; // ecx
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v5; // rdx
  std::map<unsigned int,PotionLevel> *p_level_map; // r14
  PotionLevel *v7; // rax
  unsigned int *v8; // rcx
  PotionLevel *v9; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,PotionLevel> >,bool> v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  common::milog::MiLogStream *v16; // rbx
  unsigned int val; // [rsp+1Ch] [rbp-104h] BYREF
  std::unordered_map<unsigned int,data::ActivityPotionStageExcelConfig>::const_iterator __for_begin; // [rsp+20h] [rbp-100h] BYREF
  std::unordered_map<unsigned int,data::ActivityPotionStageExcelConfig>::const_iterator __for_end; // [rsp+28h] [rbp-F8h] BYREF
  std::vector<unsigned int>::const_iterator __for_begin_0; // [rsp+30h] [rbp-F0h] BYREF
  std::vector<unsigned int>::const_iterator __for_end_0; // [rsp+38h] [rbp-E8h] BYREF
  const std::unordered_map<unsigned int,data::ActivityPotionStageExcelConfig> *__for_range; // [rsp+40h] [rbp-E0h]
  const std::pair<unsigned int const,data::ActivityPotionStageExcelConfig> *v23; // [rsp+48h] [rbp-D8h]
  std::tuple_element<0,const std::pair<unsigned int const,data::ActivityPotionStageExcelConfig> >::type *stage_id; // [rsp+50h] [rbp-D0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivityPotionStageExcelConfig> >::type *stage_config; // [rsp+58h] [rbp-C8h]
  PotionStage *stage; // [rsp+60h] [rbp-C0h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+68h] [rbp-B8h]
  common::milog::MiLogStream v28; // [rsp+70h] [rbp-B0h] BYREF
  char v29[144]; // [rsp+90h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 12 level_id:215 64 16 9 level:217";
  *(_QWORD *)(v1 + 16) = PotionActivity::onPreStart;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v1 + 64));
  __for_range = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64))->design_config.txt_config_mgr.activity_potion_config_mgr.activity_potion_stage_excel_config_map;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v1 + 64));
  __for_begin._M_cur = std::unordered_map<unsigned int,data::ActivityPotionStageExcelConfig>::begin(__for_range)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,data::ActivityPotionStageExcelConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ActivityPotionStageExcelConfig>,false>(
            &__for_begin,
            &__for_end) )
  {
    v23 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityPotionStageExcelConfig>,false,false>::operator*(&__for_begin);
    stage_id = std::get<0ul,unsigned int const,data::ActivityPotionStageExcelConfig>(v23);
    stage_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivityPotionStageExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivityPotionStageExcelConfig>(v23);
    stage = std::map<unsigned int,PotionStage>::operator[](&this->stage_map_, stage_id);
    if ( *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)stage_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v4 = *stage_id;
    if ( *(_BYTE *)(((unsigned __int64)stage >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)stage >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(stage);
    }
    stage->stage_id = v4;
    if ( *(_BYTE *)(((unsigned __int64)&stage->is_open >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)stage + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&stage->is_open >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(&stage->is_open);
    }
    stage->is_open = 0;
    __for_range_0 = &stage_config->level_id_list;
    __for_begin_0._M_current = std::vector<unsigned int>::begin(&stage_config->level_id_list)._M_current;
    __for_end_0._M_current = std::vector<unsigned int>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin_0, &__for_end_0) )
    {
      v5 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin_0);
      if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v1 + 48) = *v5;
      *(_DWORD *)(v1 + 64) = 0;
      *(_DWORD *)(v1 + 68) = 0;
      *(_DWORD *)(v1 + 72) = 0;
      *(_DWORD *)(v1 + 76) = 0;
      *(_DWORD *)(v1 + 64) = *(_DWORD *)(v1 + 48);
      PotionLevel::init((PotionLevel *const)(v1 + 64));
      p_level_map = &stage->level_map;
      v7 = std::move<PotionLevel &>((PotionLevel *)(v1 + 64));
      v10 = std::map<unsigned int,PotionLevel>::emplace<unsigned int &,PotionLevel>(
              p_level_map,
              (unsigned int *)(v1 + 48),
              v7,
              v8,
              v9);
      if ( !v10.second )
      {
        common::milog::MiLogStream::create(
          &v28,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/potion_activity.cpp",
          "onPreStart",
          222);
        v11 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                &v28,
                (const char (*)[30])"[POTION] duplicated level_id:");
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v11,
                (const unsigned int *)(v1 + 48));
        v13 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v12, (const char (*)[11])" stage_id:");
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, stage_id);
        v15 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v14, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v28);
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin_0);
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityPotionStageExcelConfig>,false,false>::operator++(&__for_begin);
  }
  common::milog::MiLogStream::create(
    &v28,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/potion_activity.cpp",
    "onPreStart",
    227);
  v16 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
          &v28,
          (const char (*)[26])"[POTION] onPreStart, uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &val);
  common::milog::MiLogStream::~MiLogStream(&v28);
  if ( v29 == (char *)v1 )
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

// Line 231: range 0000000016C27150-0000000016C2716A
void __cdecl PotionActivity::onStart(PotionActivity *const this)
{
  PotionActivity::registerObserver(this);
};

// Line 236: range 0000000016C2716C-0000000016C27601
int32_t __cdecl PotionActivity::execAction(PotionActivity *const this, const data::NewActivityExec *action_exec)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t result; // eax
  const std::string *v9; // rax
  common::milog::MiLogStream *v10; // r13
  const std::string *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r13
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  unsigned int Uid; // [rsp+14h] [rbp-8Ch] BYREF
  unsigned __int64 val; // [rsp+18h] [rbp-88h] BYREF
  common::milog::MiLogStream v18; // [rsp+20h] [rbp-80h] BYREF
  char v19[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 stage_id:246";
  *(_QWORD *)(v2 + 16) = PotionActivity::execAction;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( action_exec->type == NEW_ACTIVITY_ACTION_OPEN_POTION_STAGE )
  {
    if ( std::vector<std::string>::size(&action_exec->param) )
    {
      *(_DWORD *)(v2 + 32) = 0;
      v9 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
      if ( common::tools::StringUtils::strToNum<unsigned int>(v9, (unsigned int *)(v2 + 32), 1) )
      {
        common::milog::MiLogStream::create(
          &v18,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/potion_activity.cpp",
          "execAction",
          249);
        v10 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                &v18,
                (const char (*)[19])"[POTION] strToNum ");
        v11 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
        v12 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, v11);
        v13 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v12, (const char (*)[14])" failed, uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
      }
      else
      {
        if ( !PotionActivity::openStage(this, *(_DWORD *)(v2 + 32)) )
        {
          result = 0;
          goto LABEL_21;
        }
        common::milog::MiLogStream::create(
          &v18,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/potion_activity.cpp",
          "execAction",
          254);
        v14 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                &v18,
                (const char (*)[37])"[POTION] openStage failed, stage_id:");
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v14,
                (const unsigned int *)(v2 + 32));
        v13 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v15, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
      }
      Uid = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &Uid);
      common::milog::MiLogStream::~MiLogStream(&v18);
      result = -1;
      goto LABEL_21;
    }
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/potion_activity.cpp",
      "execAction",
      243);
    v5 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           &v18,
           (const char (*)[28])"[POTION] action param size ");
    val = std::vector<std::string>::size(&action_exec->param);
    v6 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v5, &val);
    v7 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v6, (const char (*)[18])off_25F092C0);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Uid = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &Uid);
    common::milog::MiLogStream::~MiLogStream(&v18);
    result = -1;
  }
  else
  {
    result = BaseActivity::execAction(this, action_exec);
  }
LABEL_21:
  if ( v19 == (char *)v2 )
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

// Line 266: range 0000000016C27602-0000000016C27674
void __cdecl PotionActivity::onClear(PotionActivity *const this)
{
  std::map<unsigned int,PotionStage>::clear(&this->stage_map_);
  std::vector<unsigned long>::clear(&this->in_dungeon_avatar_guid_vec_);
  if ( *(char *)(((unsigned __int64)&this->is_finish_any_level_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_finish_any_level_);
  this->is_finish_any_level_ = 0;
};

// Line 273: range 0000000016C27676-0000000016C2771B
bool __cdecl PotionActivity::checkCondIsMeet(PotionActivity *const this, const data::NewActivityCond *cond)
{
  if ( *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( cond->type != NEW_ACTIVITY_COND_FINISH_POTION_ANY_LEVEL )
    return BaseActivity::checkCondIsMeet(this, cond);
  if ( *(char *)(((unsigned __int64)&this->is_finish_any_level_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_finish_any_level_);
  return this->is_finish_any_level_;
};

// Line 287: range 0000000016C2771C-0000000016C27968
void __cdecl PotionActivity::recallDungeonAvatars(PotionActivity *const this)
{
  common::milog::MiLogStream *v1; // rax
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream *v3; // rbx
  PlayerAvatarComp *AvatarComp; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rbx
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-30h] BYREF

  if ( !std::vector<unsigned long>::empty(&this->in_dungeon_avatar_guid_vec_) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/potion_activity.cpp",
      "recallDungeonAvatars",
      292);
    v1 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           &v9,
           (const char (*)[31])"[POTION] recallDungeonAvatars:");
    v2 = common::milog::MiLogStream::operator<<<unsigned long>(v1, &this->in_dungeon_avatar_guid_vec_);
    v3 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v2, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &val);
    common::milog::MiLogStream::~MiLogStream(&v9);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    AvatarComp = Player::getAvatarComp(this->player_);
    if ( PlayerAvatarComp::delInformalAvatarBatchAndReplaceByAvatarTeam(AvatarComp, &this->in_dungeon_avatar_guid_vec_) )
    {
      common::milog::MiLogStream::create(
        &v9,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/potion_activity.cpp",
        "recallDungeonAvatars",
        295);
      v5 = common::milog::MiLogStream::operator<<<char [80],(char *[80])0>(
             &v9,
             (const char (*)[80])"[POTION] delInformalAvatarBatchAndReplaceByAvatarTeam failed, avatar_guid_vec_:");
      v6 = common::milog::MiLogStream::operator<<<unsigned long>(v5, &this->in_dungeon_avatar_guid_vec_);
      v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v6, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
      common::milog::MiLogStream::~MiLogStream(&v9);
    }
    std::vector<unsigned long>::clear(&this->in_dungeon_avatar_guid_vec_);
  }
};

// Line 301: range 0000000016C2796A-0000000016C27D16
void __cdecl PotionActivity::registerObserver(PotionActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::weak_ptr<PotionActivity> *EventComp; // [rsp+10h] [rbp-D0h]
  std::weak_ptr<PotionActivity> *p_this_wtr; // [rsp+20h] [rbp-C0h]
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
  *(_QWORD *)(v1 + 8) = "2 32 16 12 this_ptr:302 64 16 12 this_wtr:303";
  *(_QWORD *)(v1 + 16) = PotionActivity::registerObserver;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  std::enable_shared_from_this<BaseActivity>::shared_from_this(&v7);
  std::dynamic_pointer_cast<PotionActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)(v1 + 32));
  std::shared_ptr<BaseActivity>::~shared_ptr((std::shared_ptr<BaseActivity> *const)&v7);
  std::weak_ptr<PotionActivity>::weak_ptr<PotionActivity,void>(
    (std::weak_ptr<PotionActivity> *const)(v1 + 64),
    (const std::shared_ptr<PotionActivity> *)(v1 + 32));
  if ( std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->leave_scene_obs_wtr_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    p_this_wtr = (std::weak_ptr<PotionActivity> *)Player::getEventComp(this->player_);
    std::weak_ptr<PotionActivity>::weak_ptr(
      (std::weak_ptr<PotionActivity> *const)&v7,
      (const std::weak_ptr<PotionActivity> *)(v1 + 64));
    PlayerEventComp::registerObserver<PotionActivity,LeaveSceneEvent>(
      (PlayerEventComp *const)&__r,
      p_this_wtr,
      (void (*)(PotionActivity *, const LeaveSceneEvent *))&v7);
    std::weak_ptr<Observer>::operator=(&this->leave_scene_obs_wtr_, &__r);
    std::weak_ptr<Observer>::~weak_ptr(&__r);
    std::weak_ptr<PotionActivity>::~weak_ptr((std::weak_ptr<PotionActivity> *const)&v7);
  }
  if ( std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->post_enter_scene_obs_wtr_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    EventComp = (std::weak_ptr<PotionActivity> *)Player::getEventComp(this->player_);
    std::weak_ptr<PotionActivity>::weak_ptr(
      (std::weak_ptr<PotionActivity> *const)&__r,
      (const std::weak_ptr<PotionActivity> *)(v1 + 64));
    PlayerEventComp::registerObserver<PotionActivity,PostEnterSceneEvent>(
      (PlayerEventComp *const)&v7,
      EventComp,
      (void (*)(PotionActivity *, const PostEnterSceneEvent *))&__r);
    std::weak_ptr<Observer>::operator=(&this->post_enter_scene_obs_wtr_, (std::weak_ptr<Observer> *)&v7);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v7);
    std::weak_ptr<PotionActivity>::~weak_ptr((std::weak_ptr<PotionActivity> *const)&__r);
  }
  std::weak_ptr<PotionActivity>::~weak_ptr((std::weak_ptr<PotionActivity> *const)(v1 + 64));
  std::shared_ptr<PotionActivity>::~shared_ptr((std::shared_ptr<PotionActivity> *const)(v1 + 32));
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

// Line 315: range 0000000016C27D18-0000000016C280A4
__int64 __fastcall PotionActivity::openStage(PotionActivity *const this, uint32_t stage_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,PotionStage> >::pointer v9; // rdx
  bool *p_is_open; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r13
  unsigned int val; // [rsp+14h] [rbp-ACh] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,PotionStage> >::_Self __y; // [rsp+18h] [rbp-A8h] BYREF
  common::milog::MiLogStream v16; // [rsp+20h] [rbp-A0h] BYREF
  char v17[128]; // [rsp+40h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 stage_id:314 64 8 8 iter:316";
  *(_QWORD *)(v2 + 16) = PotionActivity::openStage;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = stage_id;
  *(std::map<unsigned int,PotionStage>::iterator *)(v2 + 64) = std::map<unsigned int,PotionStage>::find(
                                                                 &this->stage_map_,
                                                                 (const std::map<unsigned int,PotionStage>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,PotionStage>::end(&this->stage_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,PotionStage> >::_Self *)(v2 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/potion_activity.cpp",
      "openStage",
      319);
    v5 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v16,
           (const char (*)[36])"[POTION] stage not found, stage_id:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v6, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v16);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    v9 = std::_Rb_tree_iterator<std::pair<unsigned int const,PotionStage>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,PotionStage> > *const)(v2 + 64));
    p_is_open = &v9->second.is_open;
    if ( *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_open & 7) >= *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(p_is_open);
    }
    v9->second.is_open = 1;
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/potion_activity.cpp",
      "openStage",
      323);
    v11 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
            &v16,
            (const char (*)[31])"[POTION] stage open, stage_id:");
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 48));
    v13 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v12, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
    common::milog::MiLogStream::~MiLogStream(&v16);
    BaseActivity::notifyClientData(this, 0);
    result = 0LL;
  }
  if ( v17 == (char *)v2 )
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

// Line 329: range 0000000016C28332-0000000016C29DAE
int32_t __cdecl PotionActivity::enterPotionDungeon(PotionActivity *const this, const proto::PotionEnterDungeonReq *req)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  PlayerSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v6; // rbx
  int32_t v7; // r14d
  PlayerMpComp *MpComp; // rax
  common::milog::MiLogStream *v9; // rbx
  common::milog::MiLogStream *v10; // r14
  bool v11; // r14
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  std::_Rb_tree_iterator<std::pair<unsigned int const,PotionStage> >::pointer v16; // rax
  bool *p_is_open; // rax
  common::milog::MiLogStream *v18; // r14
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r14
  std::map<unsigned int,PotionLevel> *p_level_map; // r14
  common::milog::MiLogStream *v22; // r14
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // r14
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // r14
  std::_Rb_tree_iterator<std::pair<unsigned int const,PotionLevel> >::pointer v27; // rax
  common::milog::MiLogStream *v28; // r14
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // r14
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // r14
  ActivityPotionExcelConfigMgr *p_activity_potion_config_mgr; // r14
  uint32_t v34; // eax
  common::milog::MiLogStream *v35; // r14
  common::milog::MiLogStream *v36; // rax
  ActivityPotionExcelConfigMgr *v37; // r14
  uint32_t v38; // eax
  common::milog::MiLogStream *v39; // r14
  common::milog::MiLogStream *v40; // rax
  PlayerDungeonComp *DungeonComp; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v42; // rax
  __int32 SceneId; // eax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // r14
  PotionActivity::enterPotionDungeon::<lambda(Player&, DungeonScene&, proto::DungeonSettleNotify&)> v49; // si
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v50; // rax
  common::milog::MiLogStream *v52; // r14
  DungeonScene *v53; // r14
  DungeonScene *v54; // r14
  std::vector<PotionAvatar>::value_type *v55; // rax
  const google::protobuf::RepeatedField<unsigned int> *v56; // rax
  DungeonScene *v57; // rax
  DungeonScene *v58; // rcx
  PlayerAvatarComp *AvatarComp; // rax
  uint32_t v60; // ecx
  common::milog::MiLogStream *v61; // r14
  common::milog::MiLogStream *v62; // rax
  common::milog::MiLogStream *v63; // r14
  common::milog::MiLogStream *v64; // rax
  common::milog::MiLogStream *v65; // rax
  common::milog::MiLogStream *v66; // rax
  common::milog::MiLogStream *v67; // r14
  common::milog::MiLogStream *v68; // rax
  common::milog::MiLogStream *v69; // rax
  common::milog::MiLogStream *v70; // rax
  common::milog::MiLogStream *v71; // rax
  common::milog::MiLogStream *v72; // rax
  common::milog::MiLogStream *v73; // r14
  int32_t result; // eax
  unsigned int v76; // [rsp+1Ch] [rbp-2D4h] BYREF
  unsigned int v77; // [rsp+20h] [rbp-2D0h] BYREF
  unsigned int v78; // [rsp+24h] [rbp-2CCh] BYREF
  unsigned int val; // [rsp+28h] [rbp-2C8h] BYREF
  int32_t ret; // [rsp+2Ch] [rbp-2C4h]
  google::protobuf::RepeatedPtrField<proto::PotionAvatarInfo>::const_iterator __for_begin; // [rsp+30h] [rbp-2C0h] BYREF
  google::protobuf::RepeatedPtrField<proto::PotionAvatarInfo>::const_iterator __for_end; // [rsp+38h] [rbp-2B8h] BYREF
  PotionStage *stage; // [rsp+40h] [rbp-2B0h]
  PotionLevel *level; // [rsp+48h] [rbp-2A8h]
  const data::ActivityPotionModeChoiceExcelConfig *mode_config_ptr; // [rsp+50h] [rbp-2A0h]
  const data::ActivityPotionLevelExcelConfig *level_config_ptr; // [rsp+58h] [rbp-298h]
  std::tuple_element<0,std::pair<int,std::shared_ptr<DungeonScene> > >::type *enter_dungeon_retcode; // [rsp+60h] [rbp-290h]
  std::tuple_element<1,std::pair<int,std::shared_ptr<DungeonScene> > >::type *dungeon_scene_ptr; // [rsp+68h] [rbp-288h]
  const google::protobuf::RepeatedPtrField<proto::PotionAvatarInfo> *__for_range; // [rsp+70h] [rbp-280h]
  const proto::PotionAvatarInfo *avatar_info; // [rsp+78h] [rbp-278h]
  std::shared_ptr<Scene> __r; // [rsp+80h] [rbp-270h] BYREF
  std::pair<int,std::shared_ptr<DungeonScene> > __in; // [rsp+90h] [rbp-260h] BYREF
  EnterDungeonOption v93; // [rsp+B0h] [rbp-240h] BYREF
  common::milog::MiLogStream v94; // [rsp+D0h] [rbp-220h] BYREF
  std::map<unsigned int,unsigned int> level_config_id_map; // [rsp+F0h] [rbp-200h] BYREF
  char v96[464]; // [rsp+120h] [rbp-1D0h] BYREF

  v2 = (unsigned __int64)v96;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(416LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 4 14 dungeon_id:404 48 8 14 stage_iter:355 80 8 14 level_iter:369 112 16 17 cur_scene_ptr:3"
                        "42 144 24 15 avatar_data:441 208 136 19 dungeon_context:434";
  *(_QWORD *)(v2 + 16) = PotionActivity::enterPotionDungeon;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862721] = -234881024;
  v4[536862722] = 62194;
  v4[536862722] = -234881024;
  v4[536862723] = 62194;
  v4[536862724] = 62194;
  v4[536862725] = -218959360;
  v4[536862726] = 62194;
  v4[536862730] = -218103808;
  v4[536862731] = -202116109;
  v4[536862732] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = Player::getSceneComp(this->player_);
  if ( !PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
  {
    common::milog::MiLogStream::create(
      &v94,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/potion_activity.cpp",
      "enterPotionDungeon",
      333);
    v6 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v94,
           (const char (*)[36])"[POTION] is not in self world, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v94);
    v7 = 512;
    goto LABEL_92;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  MpComp = Player::getMpComp(this->player_);
  if ( !PlayerMpComp::isInMpMode(MpComp) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 112));
    if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 112)) )
    {
      common::milog::MiLogStream::create(
        &v94,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/potion_activity.cpp",
        "enterPotionDungeon",
        345);
      v10 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v94,
              (const char (*)[33])"[POTION] cur scene is null, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
      common::milog::MiLogStream::~MiLogStream(&v94);
      v7 = -1;
      goto LABEL_91;
    }
    std::dynamic_pointer_cast<DungeonScene,Scene>(&__r);
    v11 = std::operator!=<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)&__r);
    std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)&__r);
    if ( v11 )
    {
      common::milog::MiLogStream::create(
        &v94,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/potion_activity.cpp",
        "enterPotionDungeon",
        350);
      v12 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
              &v94,
              (const char (*)[36])"[POTION] player is in dungeon, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v94);
      v7 = -1;
      goto LABEL_91;
    }
    val = proto::PotionEnterDungeonReq::stage_id(req);
    *(std::map<unsigned int,PotionStage>::iterator *)(v2 + 48) = std::map<unsigned int,PotionStage>::find(
                                                                   &this->stage_map_,
                                                                   &val);
    __for_end.it_ = (void *const *)std::map<unsigned int,PotionStage>::end(&this->stage_map_)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,PotionStage> >::_Self *)(v2 + 48),
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,PotionStage> >::_Self *)&__for_end) )
    {
      common::milog::MiLogStream::create(
        &v94,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/potion_activity.cpp",
        "enterPotionDungeon",
        358);
      v13 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
              &v94,
              (const char (*)[36])"[POTION] stage not found, stage_id:");
      v78 = proto::PotionEnterDungeonReq::stage_id(req);
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &v78);
      v15 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v14, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
    }
    else
    {
      v16 = std::_Rb_tree_iterator<std::pair<unsigned int const,PotionStage>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,PotionStage> > *const)(v2 + 48));
      stage = &v16->second;
      p_is_open = &v16->second.is_open;
      if ( *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)p_is_open & 7) >= *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(p_is_open);
      }
      if ( !stage->is_open )
      {
        common::milog::MiLogStream::create(
          &v94,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/potion_activity.cpp",
          "enterPotionDungeon",
          364);
        v18 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                &v94,
                (const char (*)[35])"[POTION] stage not open, stage_id:");
        v78 = proto::PotionEnterDungeonReq::stage_id(req);
        v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &v78);
        v20 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v19, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &val);
        common::milog::MiLogStream::~MiLogStream(&v94);
        v7 = 10110;
        goto LABEL_91;
      }
      p_level_map = &stage->level_map;
      val = proto::PotionEnterDungeonReq::level_id(req);
      *(std::map<unsigned int,PotionLevel>::iterator *)(v2 + 80) = std::map<unsigned int,PotionLevel>::find(
                                                                     p_level_map,
                                                                     &val);
      __for_end.it_ = (void *const *)std::map<unsigned int,PotionLevel>::end(&stage->level_map)._M_node;
      if ( std::operator==(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,PotionLevel> >::_Self *)(v2 + 80),
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,PotionLevel> >::_Self *)&__for_end) )
      {
        common::milog::MiLogStream::create(
          &v94,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/potion_activity.cpp",
          "enterPotionDungeon",
          372);
        v22 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                &v94,
                (const char (*)[36])"[POTION] level not found, level_id:");
        v77 = proto::PotionEnterDungeonReq::level_id(req);
        v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &v77);
        v24 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v23, (const char (*)[11])" stage_id:");
        v78 = proto::PotionEnterDungeonReq::stage_id(req);
        v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &v78);
        v26 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v25, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &val);
        common::milog::MiLogStream::~MiLogStream(&v94);
        v7 = -1;
        goto LABEL_91;
      }
      v27 = std::_Rb_tree_iterator<std::pair<unsigned int const,PotionLevel>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,PotionLevel> > *const)(v2 + 80));
      level = &v27->second;
      if ( *(_BYTE *)(((unsigned __int64)&v27->second.score >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v27 + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v27->second.score >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( level->score )
      {
        common::milog::MiLogStream::create(
          &v94,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/potion_activity.cpp",
          "enterPotionDungeon",
          378);
        v28 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                &v94,
                (const char (*)[36])"[POTION] level have pass, level_id:");
        v77 = proto::PotionEnterDungeonReq::level_id(req);
        v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, &v77);
        v30 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v29, (const char (*)[11])" stage_id:");
        v78 = proto::PotionEnterDungeonReq::stage_id(req);
        v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, &v78);
        v32 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v31, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, &val);
        common::milog::MiLogStream::~MiLogStream(&v94);
        v7 = 10111;
        goto LABEL_91;
      }
      ret = PotionActivity::verifyClientTeamInfo(this, req);
      if ( ret )
      {
        v7 = ret;
LABEL_91:
        std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 112));
        goto LABEL_92;
      }
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&__r);
      p_activity_potion_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&__r)->design_config.txt_config_mgr.activity_potion_config_mgr;
      v34 = proto::PotionEnterDungeonReq::mode_id(req);
      mode_config_ptr = data::ActivityPotionExcelConfigMgrBase::findActivityPotionModeChoiceExcelConfig(
                          p_activity_potion_config_mgr,
                          v34);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&__r);
      if ( mode_config_ptr )
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&__r);
        v37 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&__r)->design_config.txt_config_mgr.activity_potion_config_mgr;
        v38 = proto::PotionEnterDungeonReq::level_id(req);
        level_config_ptr = data::ActivityPotionExcelConfigMgrBase::findActivityPotionLevelExcelConfig(v37, v38);
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&__r);
        if ( level_config_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->dungeon_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)level_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_config_ptr->dungeon_id >> 3)
                                                                            + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          *(_DWORD *)(v2 + 32) = level_config_ptr->dungeon_id;
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          DungeonComp = Player::getDungeonComp(this->player_);
          memset(&v93, 0, sizeof(v93));
          EnterDungeonOption::EnterDungeonOption(&v93);
          memset(&level_config_id_map, 0, sizeof(level_config_id_map));
          std::map<unsigned int,unsigned int>::map(&level_config_id_map);
          v42 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
          SceneId = Scene::getSceneId(v42);
          PlayerDungeonComp::enterDungeon(
            &__in,
            DungeonComp,
            *(_DWORD *)(v2 + 32),
            SceneId,
            0,
            &level_config_id_map,
            v93);
          std::map<unsigned int,unsigned int>::~map(&level_config_id_map);
          enter_dungeon_retcode = std::get<0ul,int,std::shared_ptr<DungeonScene>>(&__in);
          dungeon_scene_ptr = std::get<1ul,int,std::shared_ptr<DungeonScene>>(&__in);
          if ( *(_BYTE *)(((unsigned __int64)enter_dungeon_retcode >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)enter_dungeon_retcode & 7) + 3) >= *(_BYTE *)(((unsigned __int64)enter_dungeon_retcode >> 3)
                                                                                    + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          if ( *enter_dungeon_retcode )
          {
            common::milog::MiLogStream::create(
              &v94,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/activity/potion_activity.cpp",
              "enterPotionDungeon",
              408);
            v44 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                    &v94,
                    (const char (*)[40])"[POTION] enterDungeon fail, dungeon_id:");
            v45 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v44,
                    (const unsigned int *)(v2 + 32));
            v46 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                    v45,
                    (const char (*)[24])" enter_dungeon_retcode:");
            v47 = common::milog::MiLogStream::operator<<<int,(int *)0>(v46, enter_dungeon_retcode);
            v48 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v47, (const char (*)[6])" uid:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            val = Player::getUid(this->player_);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v48, &val);
            common::milog::MiLogStream::~MiLogStream(&v94);
            if ( *(_BYTE *)(((unsigned __int64)enter_dungeon_retcode >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)enter_dungeon_retcode & 7) + 3) >= *(_BYTE *)(((unsigned __int64)enter_dungeon_retcode >> 3)
                                                                                      + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            v7 = *enter_dungeon_retcode;
          }
          else
          {
            v49.gap0[0] = (char)dungeon_scene_ptr;
            if ( std::operator==<DungeonScene>(0LL, dungeon_scene_ptr)
              || (v50 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)dungeon_scene_ptr),
                  DungeonScene::getDungeonId(v50) != *(_DWORD *)(v2 + 32)) )
            {
              common::milog::MiLogStream::create(
                &v94,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/player/activity/potion_activity.cpp",
                "enterPotionDungeon",
                413);
              v52 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                      &v94,
                      (const char (*)[43])"[POTION] player enter dungeon failed, uid:");
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              val = Player::getUid(this->player_);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v52, &val);
              common::milog::MiLogStream::~MiLogStream(&v94);
              v7 = -1;
            }
            else
            {
              v53 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)dungeon_scene_ptr);
              std::function<void ()(Player &,DungeonScene &,proto::DungeonSettleNotify &)>::function<PotionActivity::enterPotionDungeon(proto::PotionEnterDungeonReq const&)::{lambda(Player &,DungeonScene &,proto::DungeonSettleNotify &)#1},void,void>(
                (std::function<void(Player&,DungeonScene&,proto::DungeonSettleNotify&)> *const)&v94,
                v49);
              DungeonScene::registerDungeonSettleCallback(v53, (DungeonSettleCallback *)&v94);
              std::function<void ()(Player &,DungeonScene &,proto::DungeonSettleNotify &)>::~function((std::function<void(Player&,DungeonScene&,proto::DungeonSettleNotify&)> *const)&v94);
              v54 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)dungeon_scene_ptr);
              std::function<void ()(Player &,DungeonScene &,Challenge &,proto::DungeonChallengeFinishNotify &)>::function<PotionActivity::enterPotionDungeon(proto::PotionEnterDungeonReq const&)::{lambda(Player &,DungeonScene &,Challenge &,proto::DungeonChallengeFinishNotify &)#2},void,void>(
                (std::function<void(Player&,DungeonScene&,Challenge&,proto::DungeonChallengeFinishNotify&)> *const)&v94,
                (PotionActivity::enterPotionDungeon::<lambda(Player&, DungeonScene&, Challenge&, proto::DungeonChallengeFinishNotify&)>)&v94);
              DungeonScene::registerChallengeSettleCallback(v54, (ChallengeSettleCallback *)&v94);
              std::function<void ()(Player &,DungeonScene &,Challenge &,proto::DungeonChallengeFinishNotify &)>::~function((std::function<void(Player&,DungeonScene&,Challenge&,proto::DungeonChallengeFinishNotify&)> *const)&v94);
              PotionDungeonContext::PotionDungeonContext((PotionDungeonContext *const)(v2 + 208));
              *(_DWORD *)(v2 + 208) = proto::PotionEnterDungeonReq::stage_id(req);
              *(_DWORD *)(v2 + 212) = proto::PotionEnterDungeonReq::level_id(req);
              *(_DWORD *)(v2 + 220) = proto::PotionEnterDungeonReq::mode_id(req);
              if ( *(_BYTE *)(((unsigned __int64)&level->difficulty_level >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)level + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level->difficulty_level >> 3)
                                                                    + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              *(_DWORD *)(v2 + 216) = level->difficulty_level;
              __for_range = proto::PotionEnterDungeonReq::avatar_info_list(req);
              __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::PotionAvatarInfo>::begin(__for_range).it_;
              __for_end.it_ = google::protobuf::RepeatedPtrField<proto::PotionAvatarInfo>::end(__for_range).it_;
              while ( google::protobuf::internal::RepeatedPtrIterator<proto::PotionAvatarInfo const>::operator!=(
                        &__for_begin,
                        &__for_end) )
              {
                avatar_info = google::protobuf::internal::RepeatedPtrIterator<proto::PotionAvatarInfo const>::operator*(&__for_begin);
                *(_BYTE *)(v2 + 144) = 0;
                *(_QWORD *)(v2 + 152) = 0LL;
                *(_QWORD *)(v2 + 160) = 0LL;
                *(_BYTE *)(v2 + 144) = proto::PotionAvatarInfo::is_trial(avatar_info);
                *(_QWORD *)(v2 + 152) = proto::PotionAvatarInfo::avatar_id(avatar_info);
                v55 = std::move<PotionAvatar &>((PotionAvatar *)(v2 + 144));
                std::vector<PotionAvatar>::push_back((std::vector<PotionAvatar> *const)(v2 + 224), v55);
                google::protobuf::internal::RepeatedPtrIterator<proto::PotionAvatarInfo const>::operator++(&__for_begin);
              }
              v56 = proto::PotionEnterDungeonReq::buff_id_list(req);
              common::tools::MiscUtils::setFromRepeated<std::unordered_set<unsigned int>,unsigned int>(
                (std::unordered_set<unsigned int> *)(v2 + 248),
                v56);
              v57 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)dungeon_scene_ptr);
              DungeonScene::setDungeonExtraData<PotionDungeonContext>(v57, (const PotionDungeonContext *)(v2 + 208));
              v58 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)dungeon_scene_ptr);
              if ( *(_BYTE *)(((unsigned __int64)&mode_config_ptr->dungeon_level >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&mode_config_ptr->dungeon_level >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4();
              }
              DungeonScene::setReviseLevel(v58, mode_config_ptr->dungeon_level);
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              AvatarComp = Player::getAvatarComp(this->player_);
              PlayerAvatarComp::delAllBuffs(AvatarComp);
              v60 = proto::PotionEnterDungeonReq::mode_id(req);
              if ( *(_BYTE *)(((unsigned __int64)&level->mode_id >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)level + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level->mode_id >> 3)
                                                                    + 0x7FFF8000) )
              {
                __asan_report_store4(&level->mode_id);
              }
              level->mode_id = v60;
              BaseActivity::notifyClientData(this, 0);
              common::milog::MiLogStream::create(
                &v94,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/player/activity/potion_activity.cpp",
                "enterPotionDungeon",
                458);
              v61 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                      &v94,
                      (const char (*)[39])"[POTION] enterPotionDungeon, stage_id:");
              v76 = proto::PotionEnterDungeonReq::stage_id(req);
              v62 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v61, &v76);
              v63 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                      v62,
                      (const char (*)[11])" level_id:");
              v77 = proto::PotionEnterDungeonReq::level_id(req);
              v64 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v63, &v77);
              v65 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                      v64,
                      (const char (*)[19])" difficulty_level:");
              v66 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v65,
                      &level->difficulty_level);
              v67 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                      v66,
                      (const char (*)[10])" mode_id:");
              v78 = proto::PotionEnterDungeonReq::mode_id(req);
              v68 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v67, &v78);
              v69 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                      v68,
                      (const char (*)[13])" dungeon_id:");
              v70 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v69,
                      (const unsigned int *)(v2 + 32));
              v71 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      v70,
                      (const char (*)[16])" dungeon_level:");
              v72 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v71,
                      &mode_config_ptr->dungeon_level);
              v73 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v72, (const char (*)[6])" uid:");
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              val = Player::getUid(this->player_);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v73, &val);
              common::milog::MiLogStream::~MiLogStream(&v94);
              v7 = 0;
              PotionDungeonContext::~PotionDungeonContext((PotionDungeonContext *const)(v2 + 208));
            }
          }
          std::pair<int,std::shared_ptr<DungeonScene>>::~pair(&__in);
          goto LABEL_91;
        }
        common::milog::MiLogStream::create(
          &v94,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/potion_activity.cpp",
          "enterPotionDungeon",
          401);
        v39 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                &v94,
                (const char (*)[43])"[POTION] level config not found, level_id:");
        v78 = proto::PotionEnterDungeonReq::level_id(req);
        v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v39, &v78);
        v15 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v40, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
      }
      else
      {
        common::milog::MiLogStream::create(
          &v94,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/potion_activity.cpp",
          "enterPotionDungeon",
          393);
        v35 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                &v94,
                (const char (*)[41])"[POTION] mode config not found, mode_id:");
        v78 = proto::PotionEnterDungeonReq::mode_id(req);
        v36 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, &v78);
        v15 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v36, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
      }
    }
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
    common::milog::MiLogStream::~MiLogStream(&v94);
    v7 = -1;
    goto LABEL_91;
  }
  common::milog::MiLogStream::create(
    &v94,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/potion_activity.cpp",
    "enterPotionDungeon",
    339);
  v9 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
         &v94,
         (const char (*)[26])"[POTION] in mp mode, uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
  common::milog::MiLogStream::~MiLogStream(&v94);
  v7 = 1202;
LABEL_92:
  result = v7;
  if ( v96 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = -168430091;
  }
  return result;
};

// Line 416: range 0000000016C280A6-0000000016C281E5
void __cdecl PotionActivity::enterPotionDungeon(proto::PotionEnterDungeonReq const&)::{lambda(Player &,DungeonScene &,proto::DungeonSettleNotify &)#1}::operator()(
        const PotionActivity::enterPotionDungeon::<lambda(Player&, DungeonScene&, proto::DungeonSettleNotify&)> *const __closure,
        Player *player,
        DungeonScene *dungeon_scene,
        proto::DungeonSettleNotify *notify)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  PotionActivity *v7; // rcx
  char v10[96]; // [rsp+20h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 16 activity_ptr:418";
  *(_QWORD *)(v4 + 16) = PotionActivity::enterPotionDungeon(proto::PotionEnterDungeonReq const&)::{lambda(Player &,DungeonScene &,proto::DungeonSettleNotify &)#1}::operator();
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  Player::getActivityComp(player);
  PlayerActivityComp::findOpenningActivity<PotionActivity>((PlayerActivityComp *const)(v4 + 32));
  if ( std::operator!=<PotionActivity>(0LL, (const std::shared_ptr<PotionActivity> *)(v4 + 32)) )
  {
    v7 = std::__shared_ptr_access<PotionActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PotionActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    PotionActivity::onDungeonSettle(v7, dungeon_scene, notify);
  }
  std::shared_ptr<PotionActivity>::~shared_ptr((std::shared_ptr<PotionActivity> *const)(v4 + 32));
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

// Line 424: range 0000000016C281E6-0000000016C28330
void __cdecl PotionActivity::enterPotionDungeon(proto::PotionEnterDungeonReq const&)::{lambda(Player &,DungeonScene &,Challenge &,proto::DungeonChallengeFinishNotify &)#2}::operator()(
        const PotionActivity::enterPotionDungeon::<lambda(Player&, DungeonScene&, Challenge&, proto::DungeonChallengeFinishNotify&)> *const __closure,
        Player *player,
        DungeonScene *dungeon_scene,
        Challenge *challenge,
        proto::DungeonChallengeFinishNotify *notify)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // r12
  PotionActivity *v8; // rdi
  char v12[96]; // [rsp+30h] [rbp-60h] BYREF

  v5 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_0(64LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 16 16 activity_ptr:426";
  *(_QWORD *)(v5 + 16) = PotionActivity::enterPotionDungeon(proto::PotionEnterDungeonReq const&)::{lambda(Player &,DungeonScene &,Challenge &,proto::DungeonChallengeFinishNotify &)#2}::operator();
  v7 = v5 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202178560;
  Player::getActivityComp(player);
  PlayerActivityComp::findOpenningActivity<PotionActivity>((PlayerActivityComp *const)(v5 + 32));
  if ( std::operator!=<PotionActivity>(0LL, (const std::shared_ptr<PotionActivity> *)(v5 + 32)) )
  {
    v8 = std::__shared_ptr_access<PotionActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PotionActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 32));
    PotionActivity::onDungeonChallengeSettle(v8, dungeon_scene, challenge, notify);
  }
  std::shared_ptr<PotionActivity>::~shared_ptr((std::shared_ptr<PotionActivity> *const)(v5 + 32));
  if ( v12 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 464: range 0000000016C29DB0-0000000016C2A1D7
void __cdecl PotionActivity::fillAbilityGroupVec(
        PotionActivity *const this,
        const std::unordered_set<unsigned int> *buff_id_set,
        std::vector<std::string> *ability_group_vec)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::__detail::_Node_const_iterator<unsigned int,true,false>::reference v6; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::unordered_set<unsigned int>::const_iterator __for_begin; // [rsp+30h] [rbp-C0h] BYREF
  std::unordered_set<unsigned int>::const_iterator __for_end; // [rsp+38h] [rbp-B8h] BYREF
  const std::unordered_set<unsigned int> *__for_range; // [rsp+40h] [rbp-B0h]
  const data::ActivityPotionBuffExcelConfig *buff_config_ptr; // [rsp+48h] [rbp-A8h]
  std::shared_ptr<Config> v19; // [rsp+50h] [rbp-A0h] BYREF
  common::milog::MiLogStream v20; // [rsp+60h] [rbp-90h] BYREF
  char v21[112]; // [rsp+80h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 11 buff_id:465";
  *(_QWORD *)(v3 + 16) = PotionActivity::fillAbilityGroupVec;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  __for_range = buff_id_set;
  __for_begin._M_cur = std::unordered_set<unsigned int>::begin(buff_id_set)._M_cur;
  __for_end._M_cur = std::unordered_set<unsigned int>::end(buff_id_set)._M_cur;
  while ( std::__detail::operator!=<unsigned int,false>(&__for_begin, &__for_end) )
  {
    v6 = std::__detail::_Node_const_iterator<unsigned int,true,false>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v3 + 32) = *v6;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v19);
    v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19);
    buff_config_ptr = data::ActivityPotionExcelConfigMgrBase::findActivityPotionBuffExcelConfig(
                        &v7->design_config.txt_config_mgr.activity_potion_config_mgr,
                        *(_DWORD *)(v3 + 32));
    std::shared_ptr<Config>::~shared_ptr(&v19);
    if ( !buff_config_ptr )
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/potion_activity.cpp",
        "fillAbilityGroupVec",
        470);
      v8 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
             &v20,
             (const char (*)[52])"[POTION] findActivityPotionBuffExcelConfig buff_id:");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 32));
      v10 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v9, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
LABEL_11:
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
      common::milog::MiLogStream::~MiLogStream(&v20);
      goto LABEL_17;
    }
    if ( (unsigned __int8)std::string::empty(&buff_config_ptr->ability_group_name) )
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/potion_activity.cpp",
        "fillAbilityGroupVec",
        475);
      v11 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
              &v20,
              (const char (*)[44])"[POTION] ability group name empty, buff_id:");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 32));
      v10 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v12, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      goto LABEL_11;
    }
    std::vector<std::string>::push_back(ability_group_vec, &buff_config_ptr->ability_group_name);
LABEL_17:
    std::__detail::_Node_const_iterator<unsigned int,true,false>::operator++(&__for_begin);
  }
  if ( v21 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 483: range 0000000016C2A1D8-0000000016C2A585
void __cdecl PotionActivity::onDungeonSettle(
        PotionActivity *const this,
        DungeonScene *dungeon_scene,
        proto::DungeonSettleNotify *notify)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  unsigned int DungeonId; // [rsp+20h] [rbp-160h] BYREF
  unsigned int val; // [rsp+24h] [rbp-15Ch] BYREF
  const PotionDungeonContext *dungeon_context; // [rsp+28h] [rbp-158h]
  common::milog::MiLogStream v17; // [rsp+30h] [rbp-150h] BYREF
  char v18[304]; // [rsp+50h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 48 144 23 dungeon_context_opt:484";
  *(_QWORD *)(v3 + 16) = PotionActivity::onDungeonSettle;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862726] = -202116109;
  v5[536862727] = -202116109;
  DungeonScene::getDungeonExtraData<PotionDungeonContext>(
    (std::optional<PotionDungeonContext> *)(v3 + 48),
    dungeon_scene);
  if ( !std::optional<PotionDungeonContext>::has_value((const std::optional<PotionDungeonContext> *const)(v3 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/potion_activity.cpp",
      "onDungeonSettle",
      487);
    v6 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
           &v17,
           (const char (*)[49])"[POTION] cur dungeon is not potion dungeon, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v17);
  }
  else
  {
    dungeon_context = std::optional<PotionDungeonContext>::value((std::optional<PotionDungeonContext> *const)(v3 + 48));
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/potion_activity.cpp",
      "onDungeonSettle",
      492);
    v7 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
           &v17,
           (const char (*)[38])"[POTION] onDungeonSettle, dungeon_id:");
    DungeonId = DungeonScene::getDungeonId(dungeon_scene);
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &DungeonId);
    v9 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v8, (const char (*)[11])" stage_id:");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &dungeon_context->stage_id);
    v11 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v10, (const char (*)[11])" level_id:");
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &dungeon_context->level_id);
    v13 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v12, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
    common::milog::MiLogStream::~MiLogStream(&v17);
  }
  std::optional<PotionDungeonContext>::~optional((std::optional<PotionDungeonContext> *const)(v3 + 48));
  if ( v18 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 497: range 0000000016C2A5E8-0000000016C2B3B5
void __cdecl PotionActivity::onDungeonChallengeSettle(
        PotionActivity *const this,
        DungeonScene *dungeon_scene,
        Challenge *challenge,
        proto::DungeonChallengeFinishNotify *notify)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // r14
  PotionDungeonContext *v8; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  char v11; // al
  ActivityPotionExcelConfigMgr *p_activity_potion_config_mgr; // rcx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  double v19; // xmm1_8
  double v20; // xmm1_8
  float v21; // xmm0_4
  int32_t v22; // eax
  uint32_t v23; // eax
  PlayerAvatarComp *AvatarComp; // r14
  common::milog::MiLogStream *v25; // r14
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rcx
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  double score_param_a; // [rsp+8h] [rbp-2B8h]
  unsigned int val; // [rsp+38h] [rbp-288h] BYREF
  float init_score; // [rsp+3Ch] [rbp-284h]
  int32_t challenge_score; // [rsp+40h] [rbp-280h]
  uint32_t now; // [rsp+44h] [rbp-27Ch]
  std::vector<std::shared_ptr<ChallengeCondition>>::iterator __for_begin; // [rsp+48h] [rbp-278h] BYREF
  std::vector<std::shared_ptr<ChallengeCondition>>::iterator __for_end; // [rsp+50h] [rbp-270h] BYREF
  proto::PotionDungeonResultInfo *result_info; // [rsp+58h] [rbp-268h]
  std::vector<std::shared_ptr<ChallengeCondition>> *__for_range; // [rsp+60h] [rbp-260h]
  const ChallengeConditionPtr *challenge_condition_ptr; // [rsp+68h] [rbp-258h]
  const data::ActivityPotionOverallExcelConfig *overall_config_ptr; // [rsp+70h] [rbp-250h]
  const data::ActivityPotionModeChoiceExcelConfig *mode_config_ptr; // [rsp+78h] [rbp-248h]
  std::shared_ptr<Config> v54; // [rsp+80h] [rbp-240h] BYREF
  common::milog::MiLogStream v55; // [rsp+90h] [rbp-230h] BYREF
  char v56[528]; // [rsp+B0h] [rbp-210h] BYREF

  v4 = (unsigned __int64)v56;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(480LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 32 4 13 left_time:511 48 4 15 final_score:512 64 136 19 dungeon_context:505 272 144 23 dungeon"
                        "_context_opt:498";
  *(_QWORD *)(v4 + 16) = PotionActivity::onDungeonChallengeSettle;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862726] = -218959360;
  v6[536862727] = -218959118;
  v6[536862728] = 62194;
  v6[536862733] = -202116109;
  v6[536862734] = -202116109;
  DungeonScene::getDungeonExtraData<PotionDungeonContext>(
    (std::optional<PotionDungeonContext> *)(v4 + 272),
    dungeon_scene);
  if ( std::optional<PotionDungeonContext>::has_value((const std::optional<PotionDungeonContext> *const)(v4 + 272)) )
  {
    v8 = std::optional<PotionDungeonContext>::value((std::optional<PotionDungeonContext> *const)(v4 + 272));
    PotionDungeonContext::PotionDungeonContext((PotionDungeonContext *const)(v4 + 64), v8);
    result_info = proto::DungeonChallengeFinishNotify::mutable_potion_dungeon_result_info(notify);
    proto::PotionDungeonResultInfo::set_stage_id(result_info, *(_DWORD *)(v4 + 64));
    proto::PotionDungeonResultInfo::set_level_id(result_info, *(_DWORD *)(v4 + 68));
    proto::PotionDungeonResultInfo::set_difficulty_level(result_info, *(_DWORD *)(v4 + 72));
    proto::PotionDungeonResultInfo::set_mode_id(result_info, *(_DWORD *)(v4 + 76));
    *(_DWORD *)(v4 + 32) = 0;
    *(_DWORD *)(v4 + 48) = 0;
    if ( *(_BYTE *)(((unsigned __int64)&challenge->is_success >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)challenge + 41) & 7) >= *(_BYTE *)(((unsigned __int64)&challenge->is_success >> 3)
                                                             + 0x7FFF8000) )
    {
      __asan_report_load1(&challenge->is_success);
    }
    if ( challenge->is_success )
    {
      if ( *(char *)(((unsigned __int64)&this->is_finish_any_level_ >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&this->is_finish_any_level_);
      if ( !this->is_finish_any_level_ )
      {
        this->is_finish_any_level_ = 1;
        BaseActivity::updateAllConds(this);
        BaseActivity::notifyClientData(this, 0);
      }
      __for_range = &challenge->condition_vec;
      __for_begin._M_current = std::vector<std::shared_ptr<ChallengeCondition>>::begin(&challenge->condition_vec)._M_current;
      __for_end._M_current = std::vector<std::shared_ptr<ChallengeCondition>>::end(&challenge->condition_vec)._M_current;
      while ( __gnu_cxx::operator!=<std::shared_ptr<ChallengeCondition> *,std::vector<std::shared_ptr<ChallengeCondition>>>(
                &__for_begin,
                &__for_end) )
      {
        challenge_condition_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<ChallengeCondition> *,std::vector<std::shared_ptr<ChallengeCondition>>>::operator*(&__for_begin);
        if ( !std::operator!=<ChallengeCondition>(0LL, challenge_condition_ptr) )
          goto LABEL_24;
        v9 = (unsigned __int64)std::__shared_ptr_access<ChallengeCondition,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ChallengeCondition,(__gnu_cxx::_Lock_policy)2,false,false> *const)challenge_condition_ptr);
        if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
          v9 = __asan_report_load8();
        v10 = *(_QWORD *)v9 + 64LL;
        if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
          v9 = __asan_report_load8();
        if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64, unsigned __int64))v10)(v9, v4 + 32) )
          v11 = 1;
        else
LABEL_24:
          v11 = 0;
        if ( v11 )
          break;
        __gnu_cxx::__normal_iterator<std::shared_ptr<ChallengeCondition> *,std::vector<std::shared_ptr<ChallengeCondition>>>::operator++(&__for_begin);
      }
      proto::PotionDungeonResultInfo::set_left_time(result_info, *(_DWORD *)(v4 + 32));
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v54);
      p_activity_potion_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v54)->design_config.txt_config_mgr.activity_potion_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      overall_config_ptr = data::ActivityPotionExcelConfigMgrBase::findActivityPotionOverallExcelConfig(
                             p_activity_potion_config_mgr,
                             this->schedule_id_);
      std::shared_ptr<Config>::~shared_ptr(&v54);
      if ( !overall_config_ptr )
      {
        common::milog::MiLogStream::create(
          &v55,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/potion_activity.cpp",
          "onDungeonChallengeSettle",
          532);
        v13 = common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(
                &v55,
                (const char (*)[65])"[POTION] findActivityPotionOverallExcelConfig fail, schedule_id:");
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &this->schedule_id_);
        v15 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v14, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
LABEL_32:
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v55);
LABEL_58:
        PotionDungeonContext::~PotionDungeonContext((PotionDungeonContext *const)(v4 + 64));
        goto LABEL_59;
      }
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v54);
      v16 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v54);
      mode_config_ptr = data::ActivityPotionExcelConfigMgrBase::findActivityPotionModeChoiceExcelConfig(
                          &v16->design_config.txt_config_mgr.activity_potion_config_mgr,
                          *(_DWORD *)(v4 + 76));
      std::shared_ptr<Config>::~shared_ptr(&v54);
      if ( !mode_config_ptr )
      {
        common::milog::MiLogStream::create(
          &v55,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/potion_activity.cpp",
          "onDungeonChallengeSettle",
          538);
        v17 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                &v55,
                (const char (*)[41])"[POTION] mode config not found, mode_id:");
        v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v17,
                (const unsigned int *)(v4 + 76));
        v15 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v18, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        goto LABEL_32;
      }
      if ( *(_BYTE *)(((unsigned __int64)&overall_config_ptr->score_param_a >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)overall_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&overall_config_ptr->score_param_a >> 3)
                                                                          + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      score_param_a = overall_config_ptr->score_param_a;
      v19 = score_param_a * std::pow<unsigned int,int>(*(_DWORD *)(v4 + 32), 2);
      if ( *(_BYTE *)(((unsigned __int64)&overall_config_ptr->score_param_b >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&overall_config_ptr->score_param_b >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      v20 = v19 + (float)((float)*(int *)(v4 + 32) * overall_config_ptr->score_param_b);
      if ( *(_BYTE *)(((unsigned __int64)&overall_config_ptr->score_param_c >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)overall_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&overall_config_ptr->score_param_c >> 3)
                                                                          + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v21 = overall_config_ptr->score_param_c + v20;
      init_score = v21;
      if ( *(_BYTE *)(((unsigned __int64)&mode_config_ptr->score_ratio >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)mode_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&mode_config_ptr->score_ratio >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      challenge_score = (int)std::ceil(mode_config_ptr->score_ratio * init_score);
      v22 = 0;
      if ( challenge_score >= 0 )
        v22 = challenge_score;
      *(_DWORD *)(v4 + 48) = v22;
      proto::PotionDungeonResultInfo::set_final_score(result_info, *(_DWORD *)(v4 + 48));
    }
    *(_DWORD *)(v4 + 164) = *(_DWORD *)(v4 + 48);
    now = common::tools::TimeUtils::getNow();
    if ( *(_BYTE *)(((unsigned __int64)&challenge->start_time >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&challenge->start_time >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( now <= challenge->start_time )
      v23 = 0;
    else
      v23 = now - challenge->start_time;
    *(_DWORD *)(v4 + 172) = v23;
    google::protobuf::RepeatedPtrField<proto_log::AvatarLog>::Clear((google::protobuf::RepeatedPtrField<proto_log::AvatarLog> *const)(v4 + 176));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    AvatarComp = Player::getAvatarComp(this->player_);
    std::function<ForeachPolicy ()(Avatar &)>::function<PotionActivity::onDungeonChallengeSettle(DungeonScene &,Challenge &,proto::DungeonChallengeFinishNotify &)::{lambda(Avatar &)#1},void,void>(
      (std::function<ForeachPolicy(Avatar&)> *const)&v55,
      (PotionActivity::onDungeonChallengeSettle::<lambda(Avatar&)>)(v4 + 64));
    PlayerAvatarComp::foreachMyAvatarInSceneTeam(AvatarComp, (std::function<ForeachPolicy(Avatar&)> *)&v55);
    std::function<ForeachPolicy ()(Avatar &)>::~function((std::function<ForeachPolicy(Avatar&)> *const)&v55);
    DungeonScene::setDungeonExtraData<PotionDungeonContext>(dungeon_scene, (const PotionDungeonContext *)(v4 + 64));
    common::milog::MiLogStream::create(
      &v55,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/potion_activity.cpp",
      "onDungeonChallengeSettle",
      559);
    v25 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
            &v55,
            (const char (*)[47])"[POTION] onDungeonChallengeSettle, dungeon_id:");
    val = DungeonScene::getDungeonId(dungeon_scene);
    v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &val);
    v27 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v26, (const char (*)[11])" stage_id:");
    v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, (const unsigned int *)(v4 + 64));
    v29 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v28, (const char (*)[11])" level_id:");
    v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, (const unsigned int *)(v4 + 68));
    v31 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v30, (const char (*)[15])" challenge_id:");
    v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, &challenge->challenge_id);
    v33 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v32, (const char (*)[18])" challenge_index:");
    v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, &challenge->challenge_index);
    v35 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v34, (const char (*)[11])" is_succ: ");
    if ( *(_BYTE *)(((unsigned __int64)&challenge->is_success >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)challenge + 41) & 7) >= *(_BYTE *)(((unsigned __int64)&challenge->is_success >> 3)
                                                             + 0x7FFF8000) )
    {
      __asan_report_load1(&challenge->is_success);
    }
    v36 = common::milog::MiLogStream::operator<<(v35, challenge->is_success);
    v37 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v36, (const char (*)[12])" left_time:");
    v38 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, (const unsigned int *)(v4 + 32));
    v39 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v38, (const char (*)[14])" final_score:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v39, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream(&v55);
    goto LABEL_58;
  }
  common::milog::MiLogStream::create(
    &v55,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/activity/potion_activity.cpp",
    "onDungeonChallengeSettle",
    501);
  v7 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
         &v55,
         (const char (*)[44])"[POTION] PotionDungeonContext invalid, uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
  common::milog::MiLogStream::~MiLogStream(&v55);
LABEL_59:
  std::optional<PotionDungeonContext>::~optional((std::optional<PotionDungeonContext> *const)(v4 + 272));
  if ( v56 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8034) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8038) = -168430091;
  }
};

// Line 552: range 0000000016C2A586-0000000016C2A5E7
ForeachPolicy __cdecl PotionActivity::onDungeonChallengeSettle(DungeonScene &,Challenge &,proto::DungeonChallengeFinishNotify &)::{lambda(Avatar &)#1}::operator()(
        const PotionActivity::onDungeonChallengeSettle::<lambda(Avatar&)> *const __closure,
        Avatar *avatar)
{
  proto_log::AvatarLog *v2; // rdx

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = google::protobuf::RepeatedPtrField<proto_log::AvatarLog>::Add(&__closure->__dungeon_context->avatar_log_list);
  Avatar::getAvatarLog(avatar, v2);
  return 0;
};

// Line 565: range 0000000016C2B3B6-0000000016C2D00B
int32_t __cdecl PotionActivity::verifyClientTeamInfo(
        PotionActivity *const this,
        const proto::PotionEnterDungeonReq *req)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rbx
  std::_Rb_tree_iterator<std::pair<unsigned int const,PotionStage> >::pointer v9; // rax
  bool *p_is_open; // rax
  common::milog::MiLogStream *v11; // r14
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rbx
  common::milog::MiLogStream *v15; // r14
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rbx
  ActivityPotionExcelConfigMgr *p_activity_potion_config_mgr; // rcx
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  TrialAvatarExcelConfigMgr *p_trial_avatar_config_mgr; // r15
  uint32_t v22; // eax
  common::milog::MiLogStream *v23; // r14
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // r14
  common::milog::MiLogStream *v26; // r14
  common::milog::MiLogStream *v27; // rax
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // r14
  PlayerAvatarComp *AvatarComp; // r15
  common::milog::MiLogStream *v35; // r14
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // r14
  int v38; // r15d
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v39; // rax
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v40; // rax
  common::milog::MiLogStream *v41; // r14
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v42; // rax
  common::milog::MiLogStream *v43; // rax
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v44; // rax
  common::milog::MiLogStream *v45; // r14
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // r14
  ActivityPotionExcelConfigMgr *v49; // r14
  uint32_t v50; // eax
  common::milog::MiLogStream *v51; // r14
  common::milog::MiLogStream *v52; // rax
  unsigned int v53; // esi
  common::milog::MiLogStream *v54; // r14
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // rax
  common::milog::MiLogStream *v58; // r14
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // r14
  ActivityPotionExcelConfigMgr *v61; // rcx
  common::milog::MiLogStream *v62; // rax
  common::milog::MiLogStream *v63; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v64; // rax
  common::milog::MiLogStream *v65; // rax
  common::milog::MiLogStream *v66; // rax
  common::milog::MiLogStream *v67; // r14
  common::milog::MiLogStream *v68; // rax
  common::milog::MiLogStream *v69; // rax
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v70; // rax
  common::milog::MiLogStream *v71; // rax
  common::milog::MiLogStream *v72; // rax
  common::milog::MiLogStream *v73; // rax
  common::milog::MiLogStream *v74; // rax
  common::milog::MiLogStream *v75; // r14
  int32_t result; // eax
  int val; // [rsp+28h] [rbp-1F8h] BYREF
  std::map<unsigned int,PotionStage>::key_type __x; // [rsp+2Ch] [rbp-1F4h] BYREF
  google::protobuf::RepeatedPtrField<proto::PotionAvatarInfo>::const_iterator __for_begin; // [rsp+30h] [rbp-1F0h] BYREF
  google::protobuf::RepeatedPtrField<proto::PotionAvatarInfo>::const_iterator __for_end; // [rsp+38h] [rbp-1E8h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,PotionStage> >::_Self __y; // [rsp+40h] [rbp-1E0h] BYREF
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin_0; // [rsp+48h] [rbp-1D8h]
  PotionStage *stage; // [rsp+50h] [rbp-1D0h]
  const google::protobuf::RepeatedPtrField<proto::PotionAvatarInfo> *avatar_info_list; // [rsp+58h] [rbp-1C8h]
  const std::set<unsigned int> *trial_avatar_set_ptr; // [rsp+60h] [rbp-1C0h]
  const google::protobuf::RepeatedPtrField<proto::PotionAvatarInfo> *__for_range; // [rsp+68h] [rbp-1B8h]
  const data::ActivityPotionLevelExcelConfig *level_config_ptr; // [rsp+70h] [rbp-1B0h]
  const google::protobuf::RepeatedField<unsigned int> *buff_id_list; // [rsp+78h] [rbp-1A8h]
  const std::set<unsigned int> *buff_id_set_ptr; // [rsp+80h] [rbp-1A0h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range_0; // [rsp+88h] [rbp-198h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end_0; // [rsp+90h] [rbp-190h]
  const data::ActivityPotionBuffExcelConfig *buff_config_ptr; // [rsp+98h] [rbp-188h]
  const proto::PotionAvatarInfo *avatar_info; // [rsp+A0h] [rbp-180h]
  const data::TrialAvatarExcelConfig *trial_avatar_config_ptr; // [rsp+A8h] [rbp-178h]
  common::milog::MiLogStream v96; // [rsp+B0h] [rbp-170h] BYREF
  char v97[336]; // [rsp+D0h] [rbp-150h] BYREF

  v3 = (unsigned __int64)v97;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 4 11 buff_id:665 64 8 14 stage_iter:566 96 16 21 formal_avatar_ptr:624 128 48 17 avatar_id_"
                        "set:593 208 48 15 buff_id_set:664";
  *(_QWORD *)(v3 + 16) = PotionActivity::verifyClientTeamInfo;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -219021312;
  v5[536862725] = -219021312;
  v5[536862726] = 62194;
  v5[536862728] = -202116109;
  __x = proto::PotionEnterDungeonReq::stage_id(req);
  *(std::map<unsigned int,PotionStage>::iterator *)(v3 + 64) = std::map<unsigned int,PotionStage>::find(
                                                                 &this->stage_map_,
                                                                 &__x);
  __y._M_node = std::map<unsigned int,PotionStage>::end(&this->stage_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,PotionStage> >::_Self *)(v3 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v96,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/potion_activity.cpp",
      "verifyClientTeamInfo",
      569);
    v6 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v96,
           (const char (*)[36])"[POTION] stage not found, stage_id:");
    *(_DWORD *)(v3 + 48) = proto::PotionEnterDungeonReq::stage_id(req);
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
    v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v7, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_7:
    __x = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &__x);
    common::milog::MiLogStream::~MiLogStream(&v96);
    v2 = -1;
    goto LABEL_104;
  }
  v9 = std::_Rb_tree_iterator<std::pair<unsigned int const,PotionStage>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,PotionStage> > *const)(v3 + 64));
  stage = &v9->second;
  p_is_open = &v9->second.is_open;
  if ( *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)p_is_open & 7) >= *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(p_is_open);
  }
  if ( !stage->is_open )
  {
    common::milog::MiLogStream::create(
      &v96,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/potion_activity.cpp",
      "verifyClientTeamInfo",
      575);
    v11 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
            &v96,
            (const char (*)[35])"[POTION] stage not open, stage_id:");
    *(_DWORD *)(v3 + 48) = proto::PotionEnterDungeonReq::stage_id(req);
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 48));
    v13 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v12, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    __x = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &__x);
    common::milog::MiLogStream::~MiLogStream(&v96);
    v2 = 10110;
    goto LABEL_104;
  }
  avatar_info_list = proto::PotionEnterDungeonReq::avatar_info_list(req);
  if ( google::protobuf::RepeatedPtrField<proto::PotionAvatarInfo>::empty(avatar_info_list)
    || (unsigned int)google::protobuf::RepeatedPtrField<proto::PotionAvatarInfo>::size(avatar_info_list) > 4 )
  {
    common::milog::MiLogStream::create(
      &v96,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/potion_activity.cpp",
      "verifyClientTeamInfo",
      583);
    v15 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
            &v96,
            (const char (*)[28])"[POTION] invalid team size:");
    *(_DWORD *)(v3 + 48) = google::protobuf::RepeatedPtrField<proto::PotionAvatarInfo>::size(avatar_info_list);
    v16 = common::milog::MiLogStream::operator<<<int,(int *)0>(v15, (const int *)(v3 + 48));
    v17 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v16, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    __x = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &__x);
    common::milog::MiLogStream::~MiLogStream(&v96);
    v2 = 10112;
    goto LABEL_104;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 96));
  p_activity_potion_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96))->design_config.txt_config_mgr.activity_potion_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)stage >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)stage >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  trial_avatar_set_ptr = ActivityPotionExcelConfigMgr::findStageTrialAvatarSet(
                           p_activity_potion_config_mgr,
                           stage->stage_id);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 96));
  if ( !trial_avatar_set_ptr )
  {
    common::milog::MiLogStream::create(
      &v96,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/potion_activity.cpp",
      "verifyClientTeamInfo",
      590);
    v19 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
            &v96,
            (const char (*)[49])"[POTION] findStageTrialAvatarSet fail, stage_id:");
    v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &stage->stage_id);
    v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v20, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_7;
  }
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 128));
  __for_range = avatar_info_list;
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::PotionAvatarInfo>::begin(avatar_info_list).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::PotionAvatarInfo>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::PotionAvatarInfo const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    avatar_info = google::protobuf::internal::RepeatedPtrIterator<proto::PotionAvatarInfo const>::operator*(&__for_begin);
    if ( !proto::PotionAvatarInfo::is_trial(avatar_info) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      AvatarComp = Player::getAvatarComp(this->player_);
      proto::PotionAvatarInfo::avatar_id(avatar_info);
      PlayerAvatarComp::findFormalAvatar((const PlayerAvatarComp *const)(v3 + 96), (uint64_t)AvatarComp);
      if ( std::operator==<FormalAvatar>(0LL, (const std::shared_ptr<FormalAvatar> *)(v3 + 96)) )
      {
        common::milog::MiLogStream::create(
          &v96,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/potion_activity.cpp",
          "verifyClientTeamInfo",
          627);
        v35 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                &v96,
                (const char (*)[47])"[POTION] formal avatar not found, avatar_guid:");
        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,PotionStage> >::_Base_ptr)proto::PotionAvatarInfo::avatar_id(avatar_info);
        v36 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                v35,
                (const unsigned __int64 *)&__y);
        v37 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v36, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        goto LABEL_52;
      }
      v39 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      __x = Avatar::getAvatarId(v39);
      v40 = std::set<unsigned int>::insert((std::set<unsigned int> *const)(v3 + 128), &__x);
      if ( !v40.second )
      {
        common::milog::MiLogStream::create(
          &v96,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/potion_activity.cpp",
          "verifyClientTeamInfo",
          632);
        v41 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                &v96,
                (const char (*)[42])"[POTION] duplicated avatar id, avatar_id:");
        v42 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        *(_DWORD *)(v3 + 48) = Avatar::getAvatarId(v42);
        v43 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v41,
                (const unsigned int *)(v3 + 48));
        v37 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v43, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
LABEL_52:
        __x = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, &__x);
        common::milog::MiLogStream::~MiLogStream(&v96);
        v2 = -1;
        v38 = 0;
      }
      else
      {
        v44 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        __x = Avatar::getAvatarId(v44);
        if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
               &stage->cool_down_avatar_id_set,
               &__x) )
        {
          common::milog::MiLogStream::create(
            &v96,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/potion_activity.cpp",
            "verifyClientTeamInfo",
            637);
          v45 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                  &v96,
                  (const char (*)[41])"[POTION] avatar in cool down, avatar_id:");
          v46 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
          *(_DWORD *)(v3 + 48) = Avatar::getAvatarId(v46);
          v47 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v45,
                  (const unsigned int *)(v3 + 48));
          v48 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v47, (const char (*)[6])" uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          __x = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v48, &__x);
          common::milog::MiLogStream::~MiLogStream(&v96);
          v2 = 10113;
          v38 = 0;
        }
        else
        {
          v38 = 1;
        }
      }
      std::shared_ptr<FormalAvatar>::~shared_ptr((std::shared_ptr<FormalAvatar> *const)(v3 + 96));
      if ( v38 != 1 )
        goto LABEL_103;
      goto LABEL_63;
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v3 + 96));
    p_trial_avatar_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96))->design_config.txt_config_mgr.trial_avatar_config_mgr;
    v22 = proto::PotionAvatarInfo::avatar_id(avatar_info);
    trial_avatar_config_ptr = data::TrialAvatarExcelConfigMgrBase::findTrialAvatarExcelConfig(
                                p_trial_avatar_config_mgr,
                                v22);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 96));
    if ( !trial_avatar_config_ptr )
    {
      common::milog::MiLogStream::create(
        &v96,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/potion_activity.cpp",
        "verifyClientTeamInfo",
        602);
      v23 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
              &v96,
              (const char (*)[59])"[POTION] findTrialAvatarExcelConfig fail, trial_avatar_id:");
      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,PotionStage> >::_Base_ptr)proto::PotionAvatarInfo::avatar_id(avatar_info);
      v24 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v23,
              (const unsigned __int64 *)&__y);
      v25 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v24, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
LABEL_79:
      __x = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &__x);
      common::milog::MiLogStream::~MiLogStream(&v96);
      v2 = -1;
      goto LABEL_103;
    }
    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,PotionStage> >::_Base_ptr)proto::PotionAvatarInfo::avatar_id(avatar_info);
    if ( !common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned long>(
            trial_avatar_set_ptr,
            (const unsigned __int64 *)&__y) )
    {
      common::milog::MiLogStream::create(
        &v96,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/potion_activity.cpp",
        "verifyClientTeamInfo",
        607);
      v26 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
              &v96,
              (const char (*)[52])"[POTION] trial avatar not in pool, trial_avatar_id:");
      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,PotionStage> >::_Base_ptr)proto::PotionAvatarInfo::avatar_id(avatar_info);
      v27 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v26,
              (const unsigned __int64 *)&__y);
      v25 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v27, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      goto LABEL_79;
    }
    v28 = std::set<unsigned int>::insert(
            (std::set<unsigned int> *const)(v3 + 128),
            &trial_avatar_config_ptr->avatar.avatar_id);
    if ( !v28.second )
    {
      common::milog::MiLogStream::create(
        &v96,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/potion_activity.cpp",
        "verifyClientTeamInfo",
        612);
      v29 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
              &v96,
              (const char (*)[42])"[POTION] duplicated avatar id, avatar_id:");
      v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v29,
              &trial_avatar_config_ptr->avatar.avatar_id);
      v25 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v30, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      goto LABEL_79;
    }
    if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
           &stage->cool_down_avatar_id_set,
           &trial_avatar_config_ptr->avatar.avatar_id) )
    {
      common::milog::MiLogStream::create(
        &v96,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/potion_activity.cpp",
        "verifyClientTeamInfo",
        617);
      v31 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
              &v96,
              (const char (*)[41])"[POTION] avatar in cool down, avatar_id:");
      v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v31,
              &trial_avatar_config_ptr->avatar.avatar_id);
      v33 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v32, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      __x = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, &__x);
      common::milog::MiLogStream::~MiLogStream(&v96);
      v2 = 10113;
      goto LABEL_103;
    }
LABEL_63:
    google::protobuf::internal::RepeatedPtrIterator<proto::PotionAvatarInfo const>::operator++(&__for_begin);
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 96));
  v49 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96))->design_config.txt_config_mgr.activity_potion_config_mgr;
  v50 = proto::PotionEnterDungeonReq::level_id(req);
  level_config_ptr = data::ActivityPotionExcelConfigMgrBase::findActivityPotionLevelExcelConfig(v49, v50);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 96));
  if ( !level_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v96,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/potion_activity.cpp",
      "verifyClientTeamInfo",
      647);
    v51 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
            &v96,
            (const char (*)[60])"[POTION] findActivityPotionLevelExcelConfig fail, level_id:");
    *(_DWORD *)(v3 + 48) = proto::PotionEnterDungeonReq::level_id(req);
    v52 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v51, (const unsigned int *)(v3 + 48));
    v25 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v52, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_79;
  }
  buff_id_list = proto::PotionEnterDungeonReq::buff_id_list(req);
  v53 = google::protobuf::RepeatedField<unsigned int>::size(buff_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->buff_count_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&level_config_ptr->buff_count_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( v53 > level_config_ptr->buff_count_limit )
  {
    common::milog::MiLogStream::create(
      &v96,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/potion_activity.cpp",
      "verifyClientTeamInfo",
      653);
    v54 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
            &v96,
            (const char (*)[45])"[POTION] buff count reach limit, buff count:");
    val = google::protobuf::RepeatedField<unsigned int>::size(buff_id_list);
    v55 = common::milog::MiLogStream::operator<<<int,(int *)0>(v54, &val);
    v56 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v55, (const char (*)[14])" limit count:");
    v57 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v56,
            &level_config_ptr->buff_count_limit);
    v58 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v57, (const char (*)[11])" level_id:");
    *(_DWORD *)(v3 + 48) = proto::PotionEnterDungeonReq::level_id(req);
    v59 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v58, (const unsigned int *)(v3 + 48));
    v60 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v59, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    __x = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v60, &__x);
    common::milog::MiLogStream::~MiLogStream(&v96);
    v2 = -1;
    goto LABEL_103;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 96));
  v61 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96))->design_config.txt_config_mgr.activity_potion_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)stage >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)stage >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  buff_id_set_ptr = ActivityPotionExcelConfigMgr::findStageBuffIdSet(v61, stage->stage_id);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 96));
  if ( !buff_id_set_ptr )
  {
    common::milog::MiLogStream::create(
      &v96,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/potion_activity.cpp",
      "verifyClientTeamInfo",
      661);
    v62 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
            &v96,
            (const char (*)[44])"[POTION] findStageBuffIdSet fail, stage_id:");
    v63 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v62, &stage->stage_id);
    v25 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v63, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_79;
  }
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 208));
  __for_range_0 = buff_id_list;
  __for_begin_0 = google::protobuf::RepeatedField<unsigned int>::begin(buff_id_list);
  __for_end_0 = google::protobuf::RepeatedField<unsigned int>::end(__for_range_0);
  while ( 2 )
  {
    if ( __for_begin_0 == __for_end_0 )
    {
      v2 = 0;
      goto LABEL_102;
    }
    if ( *(_BYTE *)(((unsigned __int64)__for_begin_0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)__for_begin_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin_0 >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v3 + 48) = *__for_begin_0;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v3 + 96));
    v64 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
    buff_config_ptr = data::ActivityPotionExcelConfigMgrBase::findActivityPotionBuffExcelConfig(
                        &v64->design_config.txt_config_mgr.activity_potion_config_mgr,
                        *(_DWORD *)(v3 + 48));
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 96));
    if ( !buff_config_ptr )
    {
      common::milog::MiLogStream::create(
        &v96,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/potion_activity.cpp",
        "verifyClientTeamInfo",
        671);
      v65 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
              &v96,
              (const char (*)[52])"[POTION] findActivityPotionBuffExcelConfig buff_id:");
      v66 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v65, (const unsigned int *)(v3 + 48));
      v67 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v66, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
LABEL_95:
      __x = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v67, &__x);
      common::milog::MiLogStream::~MiLogStream(&v96);
      v2 = -1;
      goto LABEL_102;
    }
    if ( !common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
            buff_id_set_ptr,
            (const unsigned int *)(v3 + 48)) )
    {
      common::milog::MiLogStream::create(
        &v96,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/potion_activity.cpp",
        "verifyClientTeamInfo",
        676);
      v68 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
              &v96,
              (const char (*)[36])"[POTION] buff not in pool, buff_id:");
      v69 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v68, (const unsigned int *)(v3 + 48));
      v67 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v69, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      goto LABEL_95;
    }
    v70 = std::set<unsigned int>::insert(
            (std::set<unsigned int> *const)(v3 + 208),
            (const std::set<unsigned int>::value_type *)(v3 + 48));
    if ( !v70.second )
    {
      common::milog::MiLogStream::create(
        &v96,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/potion_activity.cpp",
        "verifyClientTeamInfo",
        681);
      v71 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
              &v96,
              (const char (*)[29])"[POTION] duplicated buff_id:");
      v72 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v71, (const unsigned int *)(v3 + 48));
      v67 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v72, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      goto LABEL_95;
    }
    if ( !common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
            &stage->cool_down_buff_id_set,
            (const unsigned int *)(v3 + 48)) )
    {
      ++__for_begin_0;
      continue;
    }
    break;
  }
  common::milog::MiLogStream::create(
    &v96,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/potion_activity.cpp",
    "verifyClientTeamInfo",
    686);
  v73 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
          &v96,
          (const char (*)[37])"[POTION] buff in cool down, buff_id:");
  v74 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v73, (const unsigned int *)(v3 + 48));
  v75 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v74, (const char (*)[6])" uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  __x = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v75, &__x);
  common::milog::MiLogStream::~MiLogStream(&v96);
  v2 = 10114;
LABEL_102:
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 208));
LABEL_103:
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 128));
LABEL_104:
  result = v2;
  if ( v97 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8014) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 694: range 0000000016C2D00C-0000000016C2E868
int32_t __cdecl PotionActivity::saveDungeonResult(
        PotionActivity *const this,
        const proto::PotionSaveDungeonResultReq *req)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // r14
  int32_t v6; // r14d
  common::milog::MiLogStream *v7; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // r14
  PotionDungeonContext *v10; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r14
  common::milog::MiLogStream *v21; // r14
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // r14
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // r14
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // r14
  std::_Rb_tree_iterator<std::pair<unsigned int const,PotionStage> >::pointer v28; // rax
  bool *p_is_open; // rax
  common::milog::MiLogStream *v30; // r14
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // r14
  std::map<unsigned int,PotionLevel> *p_level_map; // r14
  common::milog::MiLogStream *v34; // r14
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // r14
  common::milog::MiLogStream *v37; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,PotionLevel> >::pointer v38; // rax
  common::milog::MiLogStream *v39; // r14
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // r14
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // r14
  uint32_t v44; // ecx
  TrialAvatarExcelConfigMgr *p_trial_avatar_config_mgr; // rdx
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // r14
  PlayerAvatarComp *AvatarComp; // rcx
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // r14
  std::unordered_set<unsigned int> *p_cool_down_avatar_id_set; // r14
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v54; // rax
  std::unordered_set<unsigned int> *p_cool_down_buff_id_set; // r14
  std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *M_cur; // r15
  std::unordered_set<unsigned int>::iterator v57; // rax
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // rax
  common::milog::MiLogStream *v61; // rax
  common::milog::MiLogStream *v62; // rax
  common::milog::MiLogStream *v63; // rax
  common::milog::MiLogStream *v64; // rax
  common::milog::MiLogStream *v65; // rax
  common::milog::MiLogStream *v66; // rax
  common::milog::MiLogStream *v67; // rax
  common::milog::MiLogStream *v68; // rax
  common::milog::MiLogStream *v69; // rax
  common::milog::MiLogStream *v70; // r14
  uint32_t v71; // edx
  PlayerEventComp *EventComp; // r14
  PlayerEventComp *v73; // r14
  DungeonScene *v74; // rax
  int32_t result; // eax
  unsigned int v76; // [rsp+2Ch] [rbp-334h] BYREF
  unsigned int v77; // [rsp+30h] [rbp-330h] BYREF
  unsigned int val; // [rsp+34h] [rbp-32Ch] BYREF
  std::vector<PotionAvatar>::iterator __for_begin; // [rsp+38h] [rbp-328h] BYREF
  std::vector<PotionAvatar>::iterator __for_end; // [rsp+40h] [rbp-320h] BYREF
  PotionStage *stage; // [rsp+48h] [rbp-318h]
  PotionLevel *level; // [rsp+50h] [rbp-310h]
  std::vector<PotionAvatar> *__for_range; // [rsp+58h] [rbp-308h]
  const PotionAvatar *team_avatar; // [rsp+60h] [rbp-300h]
  const data::TrialAvatarExcelConfig *trial_avatar_config_ptr; // [rsp+68h] [rbp-2F8h]
  common::milog::MiLogStream v86; // [rsp+70h] [rbp-2F0h] BYREF
  char v87[720]; // [rsp+90h] [rbp-2D0h] BYREF

  v2 = (unsigned __int64)v87;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(672LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "9 32 8 14 stage_iter:729 64 8 14 level_iter:741 96 16 17 cur_scene_ptr:695 128 16 21 dungeon_sce"
                        "ne_ptr:701 160 16 24 level_pass_event_ptr:788 192 16 26 score_change_event_ptr:790 224 16 21 for"
                        "mal_avatar_ptr:770 256 136 19 dungeon_context:713 464 144 23 dungeon_context_opt:707";
  *(_QWORD *)(v2 + 16) = PotionActivity::saveDungeonResult;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -219021312;
  v4[536862726] = -219021312;
  v4[536862727] = -219021312;
  v4[536862732] = -218959360;
  v4[536862733] = -218959118;
  v4[536862734] = 62194;
  v4[536862739] = -202116109;
  v4[536862740] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 96));
  if ( !std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 96)) )
  {
    std::dynamic_pointer_cast<DungeonScene,Scene>((const std::shared_ptr<Scene> *)(v2 + 128));
    if ( std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v2 + 128)) )
    {
      common::milog::MiLogStream::create(
        &v86,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/potion_activity.cpp",
        "saveDungeonResult",
        704);
      v7 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
             &v86,
             (const char (*)[40])"[POTION] player is not in dungeon, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
      common::milog::MiLogStream::~MiLogStream(&v86);
      v6 = -1;
      goto LABEL_84;
    }
    v8 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
    DungeonScene::getDungeonExtraData<PotionDungeonContext>((std::optional<PotionDungeonContext> *)(v2 + 464), v8);
    if ( !std::optional<PotionDungeonContext>::has_value((const std::optional<PotionDungeonContext> *const)(v2 + 464)) )
    {
      common::milog::MiLogStream::create(
        &v86,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/potion_activity.cpp",
        "saveDungeonResult",
        710);
      v9 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
             &v86,
             (const char (*)[44])"[POTION] PotionDungeonContext invalid, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
      common::milog::MiLogStream::~MiLogStream(&v86);
      v6 = -1;
      goto LABEL_83;
    }
    v10 = std::optional<PotionDungeonContext>::value((std::optional<PotionDungeonContext> *const)(v2 + 464));
    PotionDungeonContext::PotionDungeonContext((PotionDungeonContext *const)(v2 + 256), v10);
    if ( proto::PotionSaveDungeonResultReq::stage_id(req) != *(_DWORD *)(v2 + 256)
      || proto::PotionSaveDungeonResultReq::level_id(req) != *(_DWORD *)(v2 + 260) )
    {
      common::milog::MiLogStream::create(
        &v86,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/potion_activity.cpp",
        "saveDungeonResult",
        718);
      v12 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
              &v86,
              (const char (*)[23])"[POTION] req_stage_id:");
      v76 = proto::PotionSaveDungeonResultReq::stage_id(req);
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &v76);
      v14 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v13, (const char (*)[15])" req_level_id:");
      v77 = proto::PotionSaveDungeonResultReq::level_id(req);
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &v77);
      v16 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
              v15,
              (const char (*)[19])" dungeon_stage_id:");
      v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v16,
              (const unsigned int *)(v2 + 256));
      v18 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
              v17,
              (const char (*)[19])" dungeon_level_id:");
      v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v18,
              (const unsigned int *)(v2 + 260));
      v20 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v19, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
    }
    else if ( *(_DWORD *)(v2 + 356) )
    {
      val = proto::PotionSaveDungeonResultReq::stage_id(req);
      *(std::map<unsigned int,PotionStage>::iterator *)(v2 + 32) = std::map<unsigned int,PotionStage>::find(
                                                                     &this->stage_map_,
                                                                     &val);
      __for_end._M_current = (PotionAvatar *)std::map<unsigned int,PotionStage>::end(&this->stage_map_)._M_node;
      if ( std::operator==(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,PotionStage> >::_Self *)(v2 + 32),
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,PotionStage> >::_Self *)&__for_end) )
      {
        common::milog::MiLogStream::create(
          &v86,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/potion_activity.cpp",
          "saveDungeonResult",
          732);
        v25 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                &v86,
                (const char (*)[36])"[POTION] stage not found, stage_id:");
        v77 = proto::PotionSaveDungeonResultReq::stage_id(req);
        v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &v77);
        v27 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v26, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, &val);
        common::milog::MiLogStream::~MiLogStream(&v86);
        v6 = -1;
        goto LABEL_82;
      }
      v28 = std::_Rb_tree_iterator<std::pair<unsigned int const,PotionStage>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,PotionStage> > *const)(v2 + 32));
      stage = &v28->second;
      p_is_open = &v28->second.is_open;
      if ( *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)p_is_open & 7) >= *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(p_is_open);
      }
      if ( !stage->is_open )
      {
        common::milog::MiLogStream::create(
          &v86,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/potion_activity.cpp",
          "saveDungeonResult",
          738);
        v30 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                &v86,
                (const char (*)[35])"[POTION] stage not open, stage_id:");
        v77 = proto::PotionSaveDungeonResultReq::stage_id(req);
        v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, &v77);
        v32 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v31, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, &val);
        common::milog::MiLogStream::~MiLogStream(&v86);
        v6 = 10110;
        goto LABEL_82;
      }
      p_level_map = &stage->level_map;
      val = proto::PotionSaveDungeonResultReq::level_id(req);
      *(std::map<unsigned int,PotionLevel>::iterator *)(v2 + 64) = std::map<unsigned int,PotionLevel>::find(
                                                                     p_level_map,
                                                                     &val);
      __for_end._M_current = (PotionAvatar *)std::map<unsigned int,PotionLevel>::end(&stage->level_map)._M_node;
      if ( !std::operator==(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,PotionLevel> >::_Self *)(v2 + 64),
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,PotionLevel> >::_Self *)&__for_end) )
      {
        v38 = std::_Rb_tree_iterator<std::pair<unsigned int const,PotionLevel>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,PotionLevel> > *const)(v2 + 64));
        level = &v38->second;
        if ( *(_BYTE *)(((unsigned __int64)&v38->second.score >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)v38 + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v38->second.score >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( level->score )
        {
          common::milog::MiLogStream::create(
            &v86,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/potion_activity.cpp",
            "saveDungeonResult",
            750);
          v39 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                  &v86,
                  (const char (*)[36])"[POTION] level have pass, level_id:");
          v76 = proto::PotionSaveDungeonResultReq::level_id(req);
          v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v39, &v76);
          v41 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v40, (const char (*)[11])" stage_id:");
          v77 = proto::PotionSaveDungeonResultReq::stage_id(req);
          v42 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v41, &v77);
          v43 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v42, (const char (*)[6])" uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v43, &val);
          common::milog::MiLogStream::~MiLogStream(&v86);
          v6 = 10111;
        }
        else
        {
          v44 = *(_DWORD *)(v2 + 356);
          if ( *(_BYTE *)(((unsigned __int64)&level->score >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)level + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level->score >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(&level->score);
          }
          level->score = v44;
          std::unordered_set<unsigned int>::clear(&stage->cool_down_avatar_id_set);
          __for_range = (std::vector<PotionAvatar> *)(v2 + 272);
          __for_begin._M_current = std::vector<PotionAvatar>::begin((std::vector<PotionAvatar> *const)(v2 + 272))._M_current;
          __for_end._M_current = std::vector<PotionAvatar>::end(__for_range)._M_current;
          while ( __gnu_cxx::operator!=<PotionAvatar *,std::vector<PotionAvatar>>(&__for_begin, &__for_end) )
          {
            team_avatar = __gnu_cxx::__normal_iterator<PotionAvatar *,std::vector<PotionAvatar>>::operator*(&__for_begin);
            if ( *(char *)(((unsigned __int64)team_avatar >> 3) + 0x7FFF8000) < 0 )
              __asan_report_load1(team_avatar);
            if ( team_avatar->is_trial )
            {
              ServiceBox::findService<GameserverService>();
              GameserverService::getConfig((GameserverService *const)(v2 + 224));
              p_trial_avatar_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 224))->design_config.txt_config_mgr.trial_avatar_config_mgr;
              if ( *(_BYTE *)(((unsigned __int64)&team_avatar->avatar_id >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              trial_avatar_config_ptr = data::TrialAvatarExcelConfigMgrBase::findTrialAvatarExcelConfig(
                                          p_trial_avatar_config_mgr,
                                          team_avatar->avatar_id);
              std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 224));
              if ( trial_avatar_config_ptr )
              {
                std::unordered_set<unsigned int>::insert(
                  &stage->cool_down_avatar_id_set,
                  &trial_avatar_config_ptr->avatar.avatar_id);
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v86,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/activity/potion_activity.cpp",
                  "saveDungeonResult",
                  763);
                v46 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
                        &v86,
                        (const char (*)[59])"[POTION] findTrialAvatarExcelConfig fail, trial_avatar_id:");
                v47 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                        v46,
                        &team_avatar->avatar_id);
                v48 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v47, (const char (*)[6])" uid:");
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                val = Player::getUid(this->player_);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v48, &val);
                common::milog::MiLogStream::~MiLogStream(&v86);
              }
            }
            else
            {
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              AvatarComp = Player::getAvatarComp(this->player_);
              if ( *(_BYTE *)(((unsigned __int64)&team_avatar->avatar_id >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              PlayerAvatarComp::findFormalAvatar((const PlayerAvatarComp *const)(v2 + 224), (uint64_t)AvatarComp);
              if ( std::operator==<FormalAvatar>(0LL, (const std::shared_ptr<FormalAvatar> *)(v2 + 224)) )
              {
                common::milog::MiLogStream::create(
                  &v86,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/activity/potion_activity.cpp",
                  "saveDungeonResult",
                  773);
                v50 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                        &v86,
                        (const char (*)[47])"[POTION] formal avatar not found, avatar_guid:");
                v51 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                        v50,
                        &team_avatar->avatar_id);
                v52 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v51, (const char (*)[6])" uid:");
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                val = Player::getUid(this->player_);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v52, &val);
                common::milog::MiLogStream::~MiLogStream(&v86);
              }
              else
              {
                p_cool_down_avatar_id_set = &stage->cool_down_avatar_id_set;
                v54 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 224));
                val = Avatar::getAvatarId(v54);
                std::unordered_set<unsigned int>::insert(p_cool_down_avatar_id_set, &val);
              }
              std::shared_ptr<FormalAvatar>::~shared_ptr((std::shared_ptr<FormalAvatar> *const)(v2 + 224));
            }
            __gnu_cxx::__normal_iterator<PotionAvatar *,std::vector<PotionAvatar>>::operator++(&__for_begin);
          }
          p_cool_down_buff_id_set = &stage->cool_down_buff_id_set;
          M_cur = std::unordered_set<unsigned int>::end((std::unordered_set<unsigned int> *const)(v2 + 296))._M_cur;
          v57._M_cur = std::unordered_set<unsigned int>::begin((std::unordered_set<unsigned int> *const)(v2 + 296))._M_cur;
          std::unordered_set<unsigned int>::insert<std::__detail::_Node_iterator<unsigned int,true,false>>(
            p_cool_down_buff_id_set,
            v57,
            (std::__detail::_Node_iterator<unsigned int,true,false>)M_cur);
          common::milog::MiLogStream::create(
            &v86,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/potion_activity.cpp",
            "saveDungeonResult",
            782);
          v58 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                  &v86,
                  (const char (*)[38])"[POTION] saveDungeonResult, stage_id:");
          v59 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v58, &stage->stage_id);
          v60 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v59, (const char (*)[11])" level_id:");
          v61 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v60, &level->level_id);
          v62 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                  v61,
                  (const char (*)[19])" difficulty_level:");
          v63 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v62, &level->difficulty_level);
          v64 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v63, (const char (*)[8])" score:");
          v65 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v64, &level->score);
          v66 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  v65,
                  (const char (*)[16])" avatar_id_set:");
          v67 = common::milog::MiLogStream::operator<<<unsigned int>(v66, &stage->cool_down_avatar_id_set);
          v68 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v67,
                  (const char (*)[14])" buff_id_set:");
          v69 = common::milog::MiLogStream::operator<<<unsigned int>(
                  v68,
                  (const std::unordered_set<unsigned int> *)(v2 + 296));
          v70 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v69, (const char (*)[6])" uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v70, &val);
          common::milog::MiLogStream::~MiLogStream(&v86);
          v71 = proto::PotionSaveDungeonResultReq::stage_id(req);
          PotionActivity::upStageLevelDifficultyLevel(this, v71);
          common::tools::perf::make_shared<PotionStageLevelPassEvent,unsigned int &,unsigned int &>(
            (unsigned int *)(v2 + 160),
            &stage->stage_id,
            &level->level_id,
            &stage->stage_id);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          EventComp = Player::getEventComp(this->player_);
          std::shared_ptr<BaseEvent>::shared_ptr<PotionStageLevelPassEvent,void>(
            (std::shared_ptr<BaseEvent> *const)(v2 + 224),
            (const std::shared_ptr<PotionStageLevelPassEvent> *)(v2 + 160));
          PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)(v2 + 224));
          std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v2 + 224));
          val = PotionStage::getTotalScore(stage);
          common::tools::perf::make_shared<PotionStageScoreChangeEvent,unsigned int &,unsigned int>(
            (unsigned int *)(v2 + 192),
            &stage->stage_id,
            &val,
            &stage->stage_id);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v73 = Player::getEventComp(this->player_);
          std::shared_ptr<BaseEvent>::shared_ptr<PotionStageScoreChangeEvent,void>(
            (std::shared_ptr<BaseEvent> *const)(v2 + 224),
            (const std::shared_ptr<PotionStageScoreChangeEvent> *)(v2 + 192));
          PlayerEventComp::notifyEvent(v73, (BaseEventPtr *)(v2 + 224));
          std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v2 + 224));
          *(_BYTE *)(v2 + 360) = 1;
          v74 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
          DungeonScene::setDungeonExtraData<PotionDungeonContext>(v74, (const PotionDungeonContext *)(v2 + 256));
          BaseActivity::notifyClientData(this, 0);
          v6 = 0;
          std::shared_ptr<PotionStageScoreChangeEvent>::~shared_ptr((std::shared_ptr<PotionStageScoreChangeEvent> *const)(v2 + 192));
          std::shared_ptr<PotionStageLevelPassEvent>::~shared_ptr((std::shared_ptr<PotionStageLevelPassEvent> *const)(v2 + 160));
        }
        goto LABEL_82;
      }
      common::milog::MiLogStream::create(
        &v86,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/potion_activity.cpp",
        "saveDungeonResult",
        744);
      v34 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
              &v86,
              (const char (*)[36])"[POTION] level not found, level_id:");
      v76 = proto::PotionSaveDungeonResultReq::level_id(req);
      v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, &v76);
      v36 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v35, (const char (*)[11])" stage_id:");
      v77 = proto::PotionSaveDungeonResultReq::stage_id(req);
      v37 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, &v77);
      v20 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v37, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
    }
    else
    {
      common::milog::MiLogStream::create(
        &v86,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/potion_activity.cpp",
        "saveDungeonResult",
        724);
      v21 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
              &v86,
              (const char (*)[40])"[POTION] level score is zero, level_id:");
      v76 = proto::PotionSaveDungeonResultReq::level_id(req);
      v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &v76);
      v23 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v22, (const char (*)[11])" stage_id:");
      v77 = proto::PotionSaveDungeonResultReq::stage_id(req);
      v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &v77);
      v20 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v24, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
    }
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &val);
    common::milog::MiLogStream::~MiLogStream(&v86);
    v6 = -1;
LABEL_82:
    PotionDungeonContext::~PotionDungeonContext((PotionDungeonContext *const)(v2 + 256));
LABEL_83:
    std::optional<PotionDungeonContext>::~optional((std::optional<PotionDungeonContext> *const)(v2 + 464));
LABEL_84:
    std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 128));
    goto LABEL_85;
  }
  common::milog::MiLogStream::create(
    &v86,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/activity/potion_activity.cpp",
    "saveDungeonResult",
    698);
  v5 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
         &v86,
         (const char (*)[33])"[POTION] cur scene is null, uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
  common::milog::MiLogStream::~MiLogStream(&v86);
  v6 = -1;
LABEL_85:
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 96));
  result = v6;
  if ( v87 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF804C) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8050) = -168430091;
  }
  return result;
};

// Line 800: range 0000000016C2E86A-0000000016C2EF1C
void __fastcall PotionActivity::upStageLevelDifficultyLevel(PotionActivity *const this, uint32_t stage_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rbx
  std::_Rb_tree_iterator<std::pair<unsigned int const,PotionStage> >::pointer v8; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  uint32_t v16; // ecx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // r14
  unsigned int val; // [rsp+14h] [rbp-11Ch] BYREF
  std::map<unsigned int,PotionLevel>::iterator __for_begin; // [rsp+18h] [rbp-118h] BYREF
  std::map<unsigned int,PotionLevel>::iterator __for_end; // [rsp+20h] [rbp-110h] BYREF
  PotionStage *stage; // [rsp+28h] [rbp-108h]
  std::map<unsigned int,PotionLevel> *__for_range; // [rsp+30h] [rbp-100h]
  std::pair<unsigned int const,PotionLevel> *__in; // [rsp+38h] [rbp-F8h]
  std::tuple_element<0,std::pair<unsigned int const,PotionLevel> >::type *_; // [rsp+40h] [rbp-F0h]
  std::tuple_element<1,std::pair<unsigned int const,PotionLevel> >::type *level; // [rsp+48h] [rbp-E8h]
  std::shared_ptr<Config> v32; // [rsp+50h] [rbp-E0h] BYREF
  common::milog::MiLogStream v33; // [rsp+60h] [rbp-D0h] BYREF
  common::milog::MiLogStream v34; // [rsp+80h] [rbp-B0h] BYREF
  char v35[144]; // [rsp+A0h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 24 new_difficulty_level:814 48 4 12 stage_id:799 64 8 14 stage_iter:801";
  *(_QWORD *)(v2 + 16) = PotionActivity::upStageLevelDifficultyLevel;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = stage_id;
  *(std::map<unsigned int,PotionStage>::iterator *)(v2 + 64) = std::map<unsigned int,PotionStage>::find(
                                                                 &this->stage_map_,
                                                                 (const std::map<unsigned int,PotionStage>::key_type *)(v2 + 48));
  __for_end._M_node = std::map<unsigned int,PotionStage>::end(&this->stage_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,PotionStage> >::_Self *)(v2 + 64),
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,PotionStage> >::_Self *)&__for_end) )
  {
    common::milog::MiLogStream::create(
      &v34,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/potion_activity.cpp",
      "upStageLevelDifficultyLevel",
      804);
    v5 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v34,
           (const char (*)[36])"[POTION] stage not found, stage_id:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v6, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v34);
  }
  else
  {
    v8 = std::_Rb_tree_iterator<std::pair<unsigned int const,PotionStage>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,PotionStage> > *const)(v2 + 64));
    stage = &v8->second;
    __for_range = &v8->second.level_map;
    __for_begin._M_node = std::map<unsigned int,PotionLevel>::begin(&v8->second.level_map)._M_node;
    __for_end._M_node = std::map<unsigned int,PotionLevel>::end(__for_range)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      __in = std::_Rb_tree_iterator<std::pair<unsigned int const,PotionLevel>>::operator*(&__for_begin);
      _ = std::get<0ul,unsigned int const,PotionLevel>(__in);
      level = std::get<1ul,unsigned int const,PotionLevel>(__in);
      if ( *(_BYTE *)(((unsigned __int64)&level->score >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)level + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level->score >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( !level->score )
      {
        if ( *(_BYTE *)(((unsigned __int64)&level->difficulty_level >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)level + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level->difficulty_level >> 3)
                                                              + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v2 + 32) = level->difficulty_level + 1;
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v32);
        v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v32);
        v10 = data::ActivityPotionExcelConfigMgrBase::findActivityPotionDifficultyExcelConfig(
                &v9->design_config.txt_config_mgr.activity_potion_config_mgr,
                *(_DWORD *)(v2 + 32)) == 0LL;
        std::shared_ptr<Config>::~shared_ptr(&v32);
        if ( v10 )
        {
          common::milog::MiLogStream::create(
            &v33,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/potion_activity.cpp",
            "upStageLevelDifficultyLevel",
            817);
          v11 = common::milog::MiLogStream::operator<<<char [73],(char *[73])0>(
                  &v33,
                  (const char (*)[73])"[POTION] findActivityPotionDifficultyExcelConfig fail, difficulty_level:");
          v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v11,
                  (const unsigned int *)(v2 + 32));
          v13 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v12, (const char (*)[11])" level_id:");
          v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &level->level_id);
          v15 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v14, (const char (*)[6])" uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
          common::milog::MiLogStream::~MiLogStream(&v33);
        }
        else
        {
          v16 = *(_DWORD *)(v2 + 32);
          if ( *(_BYTE *)(((unsigned __int64)&level->difficulty_level >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)level + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level->difficulty_level >> 3)
                                                                + 0x7FFF8000) )
          {
            __asan_report_store4(&level->difficulty_level);
          }
          level->difficulty_level = v16;
          common::milog::MiLogStream::create(
            &v34,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/potion_activity.cpp",
            "upStageLevelDifficultyLevel",
            822);
          v17 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                  &v34,
                  (const char (*)[19])"[POTION] up level ");
          v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &level->level_id);
          v19 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  v18,
                  (const char (*)[22])" difficulty level to ");
          v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v19,
                  (const unsigned int *)(v2 + 32));
          v21 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v20, (const char (*)[11])" stage_id:");
          v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v21,
                  (const unsigned int *)(v2 + 48));
          v23 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v22, (const char (*)[6])" uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &val);
          common::milog::MiLogStream::~MiLogStream(&v34);
        }
      }
      std::_Rb_tree_iterator<std::pair<unsigned int const,PotionLevel>>::operator++(&__for_begin);
    }
  }
  if ( v35 == (char *)v2 )
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

// Line 828: range 0000000016C2EF1E-0000000016C2F42D
int32_t __cdecl PotionActivity::resetChallenge(
        PotionActivity *const this,
        const proto::PotionResetChallengeReq *req,
        proto::PotionResetChallengeRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r13
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r13
  int32_t v9; // r14d
  std::_Rb_tree_iterator<std::pair<unsigned int const,PotionStage> >::pointer v10; // rax
  bool *p_is_open; // rax
  common::milog::MiLogStream *v12; // r13
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r13
  proto::PotionStageData *v15; // rax
  PlayerEventComp *EventComp; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+28h] [rbp-D8h] BYREF
  std::map<unsigned int,PotionStage>::key_type __x; // [rsp+2Ch] [rbp-D4h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,PotionStage> >::_Self __y; // [rsp+30h] [rbp-D0h] BYREF
  PotionStage *stage_data; // [rsp+38h] [rbp-C8h]
  std::shared_ptr<BaseEvent> p_event_ptr; // [rsp+40h] [rbp-C0h] BYREF
  common::milog::MiLogStream v24; // [rsp+50h] [rbp-B0h] BYREF
  char v25[144]; // [rsp+70h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 14 stage_iter:829 64 16 26 score_change_event_ptr:843";
  *(_QWORD *)(v3 + 16) = PotionActivity::resetChallenge;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202178560;
  __x = proto::PotionResetChallengeReq::stage_id(req);
  *(std::map<unsigned int,PotionStage>::iterator *)(v3 + 32) = std::map<unsigned int,PotionStage>::find(
                                                                 &this->stage_map_,
                                                                 &__x);
  __y._M_node = std::map<unsigned int,PotionStage>::end(&this->stage_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,PotionStage> >::_Self *)(v3 + 32),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/potion_activity.cpp",
      "resetChallenge",
      832);
    v6 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v24,
           (const char (*)[36])"[POTION] stage not found, stage_id:");
    val = proto::PotionResetChallengeReq::stage_id(req);
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v7, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    __x = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &__x);
    common::milog::MiLogStream::~MiLogStream(&v24);
    v9 = -1;
  }
  else
  {
    v10 = std::_Rb_tree_iterator<std::pair<unsigned int const,PotionStage>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,PotionStage> > *const)(v3 + 32));
    stage_data = &v10->second;
    p_is_open = &v10->second.is_open;
    if ( *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_open & 7) >= *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(p_is_open);
    }
    if ( !stage_data->is_open )
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/potion_activity.cpp",
        "resetChallenge",
        838);
      v12 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
              &v24,
              (const char (*)[35])"[POTION] stage not open, stage_id:");
      val = proto::PotionResetChallengeReq::stage_id(req);
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      v14 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v13, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      __x = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &__x);
      common::milog::MiLogStream::~MiLogStream(&v24);
      v9 = 10110;
    }
    else
    {
      PotionStage::reset(stage_data);
      v15 = proto::PotionResetChallengeRsp::mutable_stage_data(rsp_0);
      PotionStage::toClient(stage_data, v15);
      __x = PotionStage::getTotalScore(stage_data);
      common::tools::perf::make_shared<PotionStageScoreChangeEvent,unsigned int &,unsigned int>(
        (unsigned int *)(v3 + 64),
        &stage_data->stage_id,
        &__x,
        &stage_data->stage_id);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      EventComp = Player::getEventComp(this->player_);
      std::shared_ptr<BaseEvent>::shared_ptr<PotionStageScoreChangeEvent,void>(
        &p_event_ptr,
        (const std::shared_ptr<PotionStageScoreChangeEvent> *)(v3 + 64));
      PlayerEventComp::notifyEvent(EventComp, &p_event_ptr);
      std::shared_ptr<BaseEvent>::~shared_ptr(&p_event_ptr);
      v9 = 0;
      std::shared_ptr<PotionStageScoreChangeEvent>::~shared_ptr((std::shared_ptr<PotionStageScoreChangeEvent> *const)(v3 + 64));
    }
  }
  result = v9;
  if ( v25 == (char *)v3 )
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

// Line 849: range 0000000016C2F42E-0000000016C30258
int32_t __cdecl PotionActivity::restartDungeon(PotionActivity *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // r14
  int32_t v5; // r14d
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // r14
  ActivityPotionExcelConfigMgr *p_activity_potion_config_mgr; // rcx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  PlayerDungeonComp *DungeonComp; // r14
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // r14
  common::milog::MiLogStream *v19; // r14
  DungeonScene *v20; // rax
  DungeonScene *v21; // rcx
  int32_t result; // eax
  unsigned int val; // [rsp+14h] [rbp-2FCh] BYREF
  PlayerDungeonComp *dungeon_comp; // [rsp+18h] [rbp-2F8h]
  const PotionDungeonContext *dungeon_context; // [rsp+20h] [rbp-2F0h]
  const data::ActivityPotionModeChoiceExcelConfig *mode_config_ptr; // [rsp+28h] [rbp-2E8h]
  std::tuple_element<0,std::pair<int,std::shared_ptr<DungeonScene> > >::type *ret; // [rsp+30h] [rbp-2E0h]
  std::tuple_element<1,std::pair<int,std::shared_ptr<DungeonScene> > >::type *dest_dungeon_scene_ptr; // [rsp+38h] [rbp-2D8h]
  std::shared_ptr<Config> v29; // [rsp+40h] [rbp-2D0h] BYREF
  std::pair<int,std::shared_ptr<DungeonScene> > __in; // [rsp+50h] [rbp-2C0h] BYREF
  EnterDungeonOption v31; // [rsp+70h] [rbp-2A0h] BYREF
  common::milog::MiLogStream v32; // [rsp+90h] [rbp-280h] BYREF
  std::map<unsigned int,unsigned int> level_config_id_map; // [rsp+B0h] [rbp-260h] BYREF
  char v34[560]; // [rsp+E0h] [rbp-230h] BYREF

  v1 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(512LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "4 48 4 12 ret_code:857 64 16 21 dungeon_scene_ptr:851 96 136 23 new_dungeon_context:895 304 144 "
                        "23 dungeon_context_opt:863";
  *(_QWORD *)(v1 + 16) = PotionActivity::restartDungeon;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -219021312;
  v3[536862727] = -218959360;
  v3[536862728] = -218959118;
  v3[536862729] = 62194;
  v3[536862734] = -202116109;
  v3[536862735] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  dungeon_comp = Player::getDungeonComp(this->player_);
  PlayerDungeonComp::getCurDungeon((PlayerDungeonComp *const)(v1 + 64));
  if ( std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v1 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v32,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/potion_activity.cpp",
      "restartDungeon",
      854);
    v4 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
           &v32,
           (const char (*)[41])"[POTION] dungeon_scene_ptr is null, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
    common::milog::MiLogStream::~MiLogStream(&v32);
    v5 = -1;
    goto LABEL_57;
  }
  *(_DWORD *)(v1 + 48) = PlayerDungeonComp::checkRestartDungeon(dungeon_comp, DUNGEON_RESTART_REASON_DIE_RETRY);
  if ( !*(_DWORD *)(v1 + 48) )
  {
    v9 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    DungeonScene::getDungeonExtraData<PotionDungeonContext>((std::optional<PotionDungeonContext> *)(v1 + 304), v9);
    if ( !std::optional<PotionDungeonContext>::has_value((const std::optional<PotionDungeonContext> *const)(v1 + 304)) )
    {
      common::milog::MiLogStream::create(
        &v32,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/potion_activity.cpp",
        "restartDungeon",
        866);
      v10 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
              &v32,
              (const char (*)[49])"[POTION] cur dungeon is not potion dungeon, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
    }
    else
    {
      dungeon_context = std::optional<PotionDungeonContext>::value((std::optional<PotionDungeonContext> *const)(v1 + 304));
      if ( *(_BYTE *)(((unsigned __int64)&dungeon_context->final_score >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)dungeon_context + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_context->final_score >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( !dungeon_context->final_score )
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v29);
        p_activity_potion_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v29)->design_config.txt_config_mgr.activity_potion_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)&dungeon_context->mode_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)dungeon_context + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_context->mode_id >> 3)
                                                                         + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        mode_config_ptr = data::ActivityPotionExcelConfigMgrBase::findActivityPotionModeChoiceExcelConfig(
                            p_activity_potion_config_mgr,
                            dungeon_context->mode_id);
        std::shared_ptr<Config>::~shared_ptr(&v29);
        if ( mode_config_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          DungeonComp = Player::getDungeonComp(this->player_);
          memset(&v31, 0, sizeof(v31));
          EnterDungeonOption::EnterDungeonOption(&v31);
          memset(&level_config_id_map, 0, sizeof(level_config_id_map));
          std::map<unsigned int,unsigned int>::map(&level_config_id_map);
          PlayerDungeonComp::restartDungeon(&__in, DungeonComp, &level_config_id_map, v31);
          std::map<unsigned int,unsigned int>::~map(&level_config_id_map);
          ret = std::get<0ul,int,std::shared_ptr<DungeonScene>>(&__in);
          dest_dungeon_scene_ptr = std::get<1ul,int,std::shared_ptr<DungeonScene>>(&__in);
          if ( *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          if ( *ret )
          {
            common::milog::MiLogStream::create(
              &v32,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/activity/potion_activity.cpp",
              "restartDungeon",
              885);
            v16 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                    &v32,
                    (const char (*)[37])"[POTION] restart dungeo failed, ret:");
            v17 = common::milog::MiLogStream::operator<<<int,(int *)0>(v16, ret);
            v18 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v17, (const char (*)[6])" uid:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            val = Player::getUid(this->player_);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &val);
            common::milog::MiLogStream::~MiLogStream(&v32);
            if ( *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            v5 = *ret;
          }
          else if ( std::operator==<DungeonScene>(0LL, dest_dungeon_scene_ptr) )
          {
            common::milog::MiLogStream::create(
              &v32,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/potion_activity.cpp",
              "restartDungeon",
              890);
            v19 = common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(
                    &v32,
                    (const char (*)[65])"[POTION] restart dungeo failed, dest dungeon scene is null, uid:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            val = Player::getUid(this->player_);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &val);
            common::milog::MiLogStream::~MiLogStream(&v32);
            v5 = -1;
          }
          else
          {
            PotionDungeonContext::PotionDungeonContext((PotionDungeonContext *const)(v1 + 96));
            if ( *(_BYTE *)(((unsigned __int64)dungeon_context >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)dungeon_context >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            *(_DWORD *)(v1 + 96) = dungeon_context->stage_id;
            if ( *(_BYTE *)(((unsigned __int64)&dungeon_context->level_id >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)dungeon_context + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_context->level_id >> 3)
                                                                            + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            *(_DWORD *)(v1 + 100) = dungeon_context->level_id;
            if ( *(_BYTE *)(((unsigned __int64)&dungeon_context->mode_id >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)dungeon_context + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_context->mode_id >> 3)
                                                                             + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            *(_DWORD *)(v1 + 108) = dungeon_context->mode_id;
            if ( *(_BYTE *)(((unsigned __int64)&dungeon_context->difficulty_level >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&dungeon_context->difficulty_level >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            *(_DWORD *)(v1 + 104) = dungeon_context->difficulty_level;
            std::vector<PotionAvatar>::operator=(
              (std::vector<PotionAvatar> *const)(v1 + 112),
              &dungeon_context->team_avatar_vec);
            std::unordered_set<unsigned int>::operator=(
              (std::unordered_set<unsigned int> *const)(v1 + 136),
              &dungeon_context->buff_id_set);
            v20 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)dest_dungeon_scene_ptr);
            DungeonScene::setDungeonExtraData<PotionDungeonContext>(v20, (const PotionDungeonContext *)(v1 + 96));
            v21 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)dest_dungeon_scene_ptr);
            if ( *(_BYTE *)(((unsigned __int64)&mode_config_ptr->dungeon_level >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&mode_config_ptr->dungeon_level >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            DungeonScene::setReviseLevel(v21, mode_config_ptr->dungeon_level);
            v5 = 0;
            PotionDungeonContext::~PotionDungeonContext((PotionDungeonContext *const)(v1 + 96));
          }
          std::pair<int,std::shared_ptr<DungeonScene>>::~pair(&__in);
        }
        else
        {
          common::milog::MiLogStream::create(
            &v32,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/potion_activity.cpp",
            "restartDungeon",
            878);
          v12 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                  &v32,
                  (const char (*)[41])"[POTION] mode config not found, mode_id:");
          v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &dungeon_context->mode_id);
          v14 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v13, (const char (*)[6])" uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &val);
          common::milog::MiLogStream::~MiLogStream(&v32);
          v5 = -1;
        }
        goto LABEL_56;
      }
      common::milog::MiLogStream::create(
        &v32,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/potion_activity.cpp",
        "restartDungeon",
        872);
      v10 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
              &v32,
              (const char (*)[38])"[POTION] dungeon cannot restart, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
    }
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
    common::milog::MiLogStream::~MiLogStream(&v32);
    v5 = -1;
LABEL_56:
    std::optional<PotionDungeonContext>::~optional((std::optional<PotionDungeonContext> *const)(v1 + 304));
    goto LABEL_57;
  }
  common::milog::MiLogStream::create(
    &v32,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/potion_activity.cpp",
    "restartDungeon",
    860);
  v6 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
         &v32,
         (const char (*)[42])"[POTION] checkRestartDungeon failed, ret:");
  v7 = common::milog::MiLogStream::operator<<<int,(int *)0>(v6, (const int *)(v1 + 48));
  v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v7, (const char (*)[6])" uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
  common::milog::MiLogStream::~MiLogStream(&v32);
  v5 = *(_DWORD *)(v1 + 48);
LABEL_57:
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v1 + 64));
  result = v5;
  if ( v34 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF801C) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8024) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8038) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 909: range 0000000016C3025A-0000000016C3180B
int32_t __cdecl PotionActivity::initPotionEnterSceneAvatar(
        PotionActivity *const this,
        ScenePtr *p_dest_scene_ptr,
        std::vector<std::shared_ptr<Avatar>> *enter_scene_avatar_vec,
        AvatarPtr *appear_avatar_ptr)
{
  __m128i v4; // xmm0
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  common::milog::MiLogStream *v8; // r14
  int32_t v9; // r14d
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // r14
  PotionDungeonContext *v12; // rax
  unsigned __int64 v13; // rax
  std::vector<PotionAvatar>::reference v14; // rax
  std::map<long unsigned int,unsigned int>::mapped_type *v15; // rax
  uint32_t *v16; // rdx
  PlayerAvatarComp *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r14
  const std::vector<long unsigned int>::value_type *v21; // rax
  const std::map<long unsigned int,unsigned int>::key_type *v22; // rax
  std::_Rb_tree_iterator<std::pair<long unsigned int const,unsigned int> >::pointer v23; // rax
  unsigned __int64 v24; // rax
  uint64_t v25; // r14
  std::vector<PotionAvatar>::reference v26; // rax
  std::vector<long unsigned int>::size_type v27; // r14
  common::milog::MiLogStream *v28; // r14
  uint32_t v29; // esi
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // r14
  int v33; // r14d
  std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rax
  FightPropComp *FightPropComp; // rax
  std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // rax
  FightPropComp *v37; // r14
  PlayerAvatarComp *v38; // r14
  common::milog::MiLogStream *v39; // r14
  std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v40; // rax
  common::milog::MiLogStream *v41; // rax
  std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v42; // rax
  std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v43; // rax
  uint64_t Guid; // rax
  PlayerAvatarComp *AvatarComp; // rcx
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // r14
  int v49; // r14d
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v50; // rax
  common::milog::MiLogStream *v52; // r14
  const std::shared_ptr<Avatar> *v53; // rdx
  DungeonScene *v54; // rax
  int32_t result; // eax
  unsigned int TrialAvatarId; // [rsp+2Ch] [rbp-414h] BYREF
  unsigned int val; // [rsp+30h] [rbp-410h] BYREF
  uint32_t index; // [rsp+34h] [rbp-40Ch]
  int32_t ret; // [rsp+38h] [rbp-408h]
  uint32_t index_0; // [rsp+3Ch] [rbp-404h]
  float max_energy; // [rsp+40h] [rbp-400h]
  uint32_t avatar_index; // [rsp+44h] [rbp-3FCh]
  std::vector<PotionAvatar>::iterator __for_begin; // [rsp+48h] [rbp-3F8h] BYREF
  std::vector<PotionAvatar>::iterator __for_end; // [rsp+50h] [rbp-3F0h] BYREF
  std::vector<PotionAvatar> *team_avatar_vec; // [rsp+58h] [rbp-3E8h]
  std::vector<PotionAvatar> *__for_range; // [rsp+60h] [rbp-3E0h]
  PotionAvatar *team_avatar; // [rsp+68h] [rbp-3D8h]
  std::vector<PotionAvatar> *__for_range_0; // [rsp+70h] [rbp-3D0h]
  const PotionAvatar *team_avatar_0; // [rsp+78h] [rbp-3C8h]
  std::shared_ptr<TrialAvatar> v72; // [rsp+80h] [rbp-3C0h] BYREF
  common::milog::MiLogStream v73; // [rsp+90h] [rbp-3B0h] BYREF
  char v74[912]; // [rsp+B0h] [rbp-390h] BYREF

  v5 = (unsigned __int64)v74;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_4(864LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "10 48 8 8 iter:953 80 16 21 dungeon_scene_ptr:910 112 16 20 trial_avatar_ptr:980 144 16 15 avata"
                        "r_ptr:1011 176 24 26 formal_avatar_guid_vec:940 240 24 26 mirror_avatar_guid_vec:941 304 32 10 r"
                        "ecord:972 368 48 27 formal_avatar_index_map:925 448 136 19 dungeon_context:923 656 144 23 dungeo"
                        "n_context_opt:916";
  *(_QWORD *)(v5 + 16) = PotionActivity::initPotionEnterSceneAvatar;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = 61937;
  v7[536862721] = -234881024;
  v7[536862722] = 62194;
  v7[536862723] = 62194;
  v7[536862724] = 62194;
  v7[536862725] = 62194;
  v7[536862726] = -218959360;
  v7[536862727] = 62194;
  v7[536862728] = -218959360;
  v7[536862729] = 62194;
  v7[536862730] = -219021312;
  v7[536862731] = 62194;
  v7[536862733] = -218959118;
  v7[536862738] = -218959360;
  v7[536862739] = -218959118;
  v7[536862740] = 62194;
  v7[536862745] = -202116109;
  v7[536862746] = -202116109;
  std::dynamic_pointer_cast<DungeonScene,Scene>((const std::shared_ptr<Scene> *)(v5 + 80));
  if ( !std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v5 + 80)) )
  {
    v10 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 80));
    DungeonScene::getDungeonExtraData<PotionDungeonContext>((std::optional<PotionDungeonContext> *)(v5 + 656), v10);
    if ( !std::optional<PotionDungeonContext>::has_value((const std::optional<PotionDungeonContext> *const)(v5 + 656)) )
    {
      common::milog::MiLogStream::create(
        &v73,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/potion_activity.cpp",
        "initPotionEnterSceneAvatar",
        919);
      v11 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
              &v73,
              (const char (*)[44])"[POTION] dungeon context has not data, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
      common::milog::MiLogStream::~MiLogStream(&v73);
      v9 = -1;
      goto LABEL_101;
    }
    v12 = std::optional<PotionDungeonContext>::value((std::optional<PotionDungeonContext> *const)(v5 + 656));
    PotionDungeonContext::PotionDungeonContext((PotionDungeonContext *const)(v5 + 448), v12);
    team_avatar_vec = (std::vector<PotionAvatar> *)(v5 + 464);
    std::map<unsigned long,unsigned int>::map((std::map<long unsigned int,unsigned int> *const)(v5 + 368));
    for ( index = 0; index < std::vector<PotionAvatar>::size(team_avatar_vec); ++index )
    {
      v13 = (unsigned __int64)std::vector<PotionAvatar>::operator[](team_avatar_vec, index);
      if ( *(char *)((v13 >> 3) + 0x7FFF8000) < 0 )
        v13 = __asan_report_load1(v13);
      if ( *(_BYTE *)v13 != 1 )
      {
        v14 = std::vector<PotionAvatar>::operator[](team_avatar_vec, index);
        v15 = std::map<unsigned long,unsigned int>::operator[](
                (std::map<long unsigned int,unsigned int> *const)(v5 + 368),
                &v14->avatar_id);
        v16 = v15;
        if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v15);
        }
        *v16 = index;
      }
    }
    ret = 0;
    if ( !std::vector<unsigned long>::empty(&this->in_dungeon_avatar_guid_vec_) )
    {
LABEL_71:
      if ( ret )
        goto LABEL_72;
      __for_range_0 = team_avatar_vec;
      *(std::vector<PotionAvatar>::iterator *)(v5 + 48) = std::vector<PotionAvatar>::begin(team_avatar_vec);
      __for_end._M_current = std::vector<PotionAvatar>::end(__for_range_0)._M_current;
      while ( __gnu_cxx::operator!=<PotionAvatar *,std::vector<PotionAvatar>>(
                (const __gnu_cxx::__normal_iterator<PotionAvatar*,std::vector<PotionAvatar> > *)(v5 + 48),
                &__for_end) )
      {
        team_avatar_0 = __gnu_cxx::__normal_iterator<PotionAvatar *,std::vector<PotionAvatar>>::operator*((const __gnu_cxx::__normal_iterator<PotionAvatar*,std::vector<PotionAvatar> > *const)(v5 + 48));
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        AvatarComp = Player::getAvatarComp(this->player_);
        if ( *(_BYTE *)(((unsigned __int64)&team_avatar_0->in_dungeon_guid >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        PlayerAvatarComp::findAvatar((const PlayerAvatarComp *const)(v5 + 144), (uint64_t)AvatarComp);
        if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v5 + 144)) )
        {
          common::milog::MiLogStream::create(
            &v73,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/potion_activity.cpp",
            "initPotionEnterSceneAvatar",
            1014);
          v46 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                  &v73,
                  (const char (*)[34])"[POTION] findAvatar failed, guid:");
          v47 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                  v46,
                  &team_avatar_0->in_dungeon_guid);
          v48 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v47, (const char (*)[6])" uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v48, &val);
          common::milog::MiLogStream::~MiLogStream(&v73);
          ret = -1;
          v49 = 0;
        }
        else
        {
          std::vector<std::shared_ptr<Avatar>>::push_back(
            enter_scene_avatar_vec,
            (const std::vector<std::shared_ptr<Avatar>>::value_type *)(v5 + 144));
          if ( std::operator==<Avatar>(0LL, appear_avatar_ptr) )
          {
            v50 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 144));
            if ( Creature::getLifeState(v50) == LIFE_ALIVE )
              std::shared_ptr<Avatar>::operator=(appear_avatar_ptr, (const std::shared_ptr<Avatar> *)(v5 + 144));
          }
          v49 = 1;
        }
        std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v5 + 144));
        if ( v49 != 1 )
          break;
        __gnu_cxx::__normal_iterator<PotionAvatar *,std::vector<PotionAvatar>>::operator++((__gnu_cxx::__normal_iterator<PotionAvatar*,std::vector<PotionAvatar> > *const)(v5 + 48));
      }
      if ( ret )
      {
LABEL_72:
        PotionActivity::recallDungeonAvatars(this);
        v9 = ret;
      }
      else
      {
        if ( std::operator==<Avatar>(0LL, appear_avatar_ptr) )
        {
          if ( !std::vector<std::shared_ptr<Avatar>>::size(enter_scene_avatar_vec) )
          {
            common::milog::MiLogStream::create(
              &v73,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/activity/potion_activity.cpp",
              "initPotionEnterSceneAvatar",
              1034);
            v52 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                    &v73,
                    (const char (*)[55])"[POTION] enter_scene_avatar_vec size less than 1, uid:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            val = Player::getUid(this->player_);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v52, &val);
            common::milog::MiLogStream::~MiLogStream(&v73);
            v9 = -1;
            goto LABEL_100;
          }
          v53 = std::vector<std::shared_ptr<Avatar>>::operator[](enter_scene_avatar_vec, 0LL);
          std::shared_ptr<Avatar>::operator=(appear_avatar_ptr, v53);
        }
        v54 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 80));
        DungeonScene::setDungeonExtraData<PotionDungeonContext>(v54, (const PotionDungeonContext *)(v5 + 448));
        v9 = 0;
      }
LABEL_100:
      std::map<unsigned long,unsigned int>::~map((std::map<long unsigned int,unsigned int> *const)(v5 + 368));
      PotionDungeonContext::~PotionDungeonContext((PotionDungeonContext *const)(v5 + 448));
LABEL_101:
      std::optional<PotionDungeonContext>::~optional((std::optional<PotionDungeonContext> *const)(v5 + 656));
      goto LABEL_102;
    }
    common::tools::MiscUtils::getAllMapKeys<std::map<unsigned long,unsigned int>>(
      (std::vector<long unsigned int> *)(v5 + 176),
      (const std::map<long unsigned int,unsigned int> *)(v5 + 368));
    std::vector<unsigned long>::vector((std::vector<long unsigned int> *const)(v5 + 240));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v17 = Player::getAvatarComp(this->player_);
    ret = PlayerAvatarComp::addMirrorAvatars(
            v17,
            (const std::vector<long unsigned int> *)(v5 + 176),
            (std::vector<long unsigned int> *)(v5 + 240),
            AVATAR_SNAPSHOT_TYPE_NONE);
    if ( ret )
    {
      common::milog::MiLogStream::create(
        &v73,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/potion_activity.cpp",
        "initPotionEnterSceneAvatar",
        945);
      v18 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
              &v73,
              (const char (*)[58])"[POTION] addMirrorAvatars failed, formal_avatar_guid_vec:");
      v19 = common::milog::MiLogStream::operator<<<unsigned long>(
              v18,
              (const std::vector<long unsigned int> *)(v5 + 176));
      v20 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v19, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &val);
      common::milog::MiLogStream::~MiLogStream(&v73);
LABEL_70:
      std::vector<unsigned long>::~vector((std::vector<long unsigned int> *const)(v5 + 240));
      std::vector<unsigned long>::~vector((std::vector<long unsigned int> *const)(v5 + 176));
      goto LABEL_71;
    }
    for ( index_0 = 0;
          index_0 < std::vector<unsigned long>::size((const std::vector<long unsigned int> *const)(v5 + 240));
          ++index_0 )
    {
      v21 = std::vector<unsigned long>::operator[]((std::vector<long unsigned int> *const)(v5 + 240), index_0);
      std::vector<unsigned long>::push_back(&this->in_dungeon_avatar_guid_vec_, v21);
      if ( index_0 < std::vector<unsigned long>::size((const std::vector<long unsigned int> *const)(v5 + 176)) )
      {
        v22 = std::vector<unsigned long>::operator[]((std::vector<long unsigned int> *const)(v5 + 176), index_0);
        *(std::map<long unsigned int,unsigned int>::iterator *)(v5 + 48) = std::map<unsigned long,unsigned int>::find(
                                                                             (std::map<long unsigned int,unsigned int> *const)(v5 + 368),
                                                                             v22);
        __for_end._M_current = (PotionAvatar *)std::map<unsigned long,unsigned int>::end((std::map<long unsigned int,unsigned int> *const)(v5 + 368))._M_node;
        if ( std::operator!=(
               (const std::_Rb_tree_iterator<std::pair<long unsigned int const,unsigned int> >::_Self *)(v5 + 48),
               (const std::_Rb_tree_iterator<std::pair<long unsigned int const,unsigned int> >::_Self *)&__for_end) )
        {
          v23 = std::_Rb_tree_iterator<std::pair<unsigned long const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<long unsigned int const,unsigned int> > *const)(v5 + 48));
          if ( *(_BYTE *)(((unsigned __int64)&v23->second >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&v23->second >> 3) + 0x7FFF8000) <= 3 )
          {
            *(double *)v4.m128i_i64 = __asan_report_load4();
          }
          avatar_index = v23->second;
          if ( avatar_index < std::vector<PotionAvatar>::size(team_avatar_vec) )
          {
            v24 = (unsigned __int64)std::vector<unsigned long>::operator[](
                                      (std::vector<long unsigned int> *const)(v5 + 240),
                                      index_0);
            if ( *(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
              v24 = __asan_report_load8();
            v25 = *(_QWORD *)v24;
            v26 = std::vector<PotionAvatar>::operator[](team_avatar_vec, avatar_index);
            if ( *(_BYTE *)(((unsigned __int64)&v26->in_dungeon_guid >> 3) + 0x7FFF8000) )
              *(double *)v4.m128i_i64 = __asan_report_store8(&v26->in_dungeon_guid);
            v26->in_dungeon_guid = v25;
          }
        }
      }
    }
    v27 = std::vector<unsigned long>::size((const std::vector<long unsigned int> *const)(v5 + 240));
    if ( v27 != std::vector<unsigned long>::size((const std::vector<long unsigned int> *const)(v5 + 176)) )
    {
      common::milog::MiLogStream::create(
        &v73,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/potion_activity.cpp",
        "initPotionEnterSceneAvatar",
        966);
      v28 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
              &v73,
              (const char (*)[49])"[POTION] added mirror avatar num incorrect, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, &val);
      common::milog::MiLogStream::~MiLogStream(&v73);
      ret = -1;
      goto LABEL_70;
    }
    proto::TrialAvatarGrantRecord::TrialAvatarGrantRecord((proto::TrialAvatarGrantRecord *const)(v5 + 304));
    proto::TrialAvatarGrantRecord::set_grant_reason((proto::TrialAvatarGrantRecord *const)(v5 + 304), 6u);
    __for_range = team_avatar_vec;
    __for_begin._M_current = std::vector<PotionAvatar>::begin(team_avatar_vec)._M_current;
    *(std::vector<PotionAvatar>::iterator *)(v5 + 48) = std::vector<PotionAvatar>::end(__for_range);
    while ( 1 )
    {
      if ( !__gnu_cxx::operator!=<PotionAvatar *,std::vector<PotionAvatar>>(
              &__for_begin,
              (const __gnu_cxx::__normal_iterator<PotionAvatar*,std::vector<PotionAvatar> > *)(v5 + 48)) )
      {
LABEL_69:
        proto::TrialAvatarGrantRecord::~TrialAvatarGrantRecord((proto::TrialAvatarGrantRecord *const)(v5 + 304));
        goto LABEL_70;
      }
      team_avatar = __gnu_cxx::__normal_iterator<PotionAvatar *,std::vector<PotionAvatar>>::operator*(&__for_begin);
      if ( *(char *)(((unsigned __int64)team_avatar >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(team_avatar);
      if ( team_avatar->is_trial )
        break;
LABEL_68:
      __gnu_cxx::__normal_iterator<PotionAvatar *,std::vector<PotionAvatar>>::operator++(&__for_begin);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v29 = (unsigned int)Player::getAvatarComp(this->player_);
    if ( *(_BYTE *)(((unsigned __int64)&team_avatar->avatar_id >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    PlayerAvatarComp::createTrialAvatar((PlayerAvatarComp *const)(v5 + 112), v29, team_avatar->avatar_id);
    if ( std::operator==<TrialAvatar>(0LL, (const std::shared_ptr<TrialAvatar> *)(v5 + 112)) )
    {
      common::milog::MiLogStream::create(
        &v73,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/potion_activity.cpp",
        "initPotionEnterSceneAvatar",
        983);
      v30 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
              &v73,
              (const char (*)[50])"[POTION] createTrialAvatar fail, trial_avatar_id:");
      v31 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v30, &team_avatar->avatar_id);
      v32 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v31, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
    }
    else
    {
      v34 = std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 112));
      FightPropComp = Creature::getFightPropComp(v34);
      *(float *)v4.m128i_i32 = FightPropComp::getMaxEnergy(FightPropComp);
      LODWORD(max_energy) = _mm_cvtsi128_si32(v4);
      v36 = std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 112));
      v37 = Creature::getFightPropComp(v36);
      std::shared_ptr<FightPropNtfParam>::shared_ptr((std::shared_ptr<FightPropNtfParam> *const)(v5 + 144), 0LL);
      v4 = _mm_cvtsi32_si128(LODWORD(max_energy));
      FightPropComp::setCurEnergy(v37, *(float *)v4.m128i_i32, 0, (FightPropNtfParamPtr *)(v5 + 144));
      std::shared_ptr<FightPropNtfParam>::~shared_ptr((std::shared_ptr<FightPropNtfParam> *const)(v5 + 144));
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v38 = Player::getAvatarComp(this->player_);
      std::shared_ptr<TrialAvatar>::shared_ptr(&v72, (const std::shared_ptr<TrialAvatar> *)(v5 + 112));
      PlayerAvatarComp::addTrialAvatar(
        (PlayerAvatarComp *const)(v5 + 144),
        (TrialAvatarPtr *)v38,
        (const proto::TrialAvatarGrantRecord *)&v72);
      LOBYTE(v38) = std::operator==<TrialAvatar>(0LL, (const std::shared_ptr<TrialAvatar> *)(v5 + 144));
      std::shared_ptr<TrialAvatar>::~shared_ptr((std::shared_ptr<TrialAvatar> *const)(v5 + 144));
      std::shared_ptr<TrialAvatar>::~shared_ptr(&v72);
      if ( !(_BYTE)v38 )
      {
        v42 = std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 112));
        __for_end._M_current = (PotionAvatar *)Avatar::getGuid(v42);
        std::vector<unsigned long>::push_back(
          &this->in_dungeon_avatar_guid_vec_,
          (std::vector<long unsigned int>::value_type *)&__for_end);
        v43 = std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 112));
        Guid = Avatar::getGuid(v43);
        if ( *(_BYTE *)(((unsigned __int64)&team_avatar->in_dungeon_guid >> 3) + 0x7FFF8000) )
          *(double *)v4.m128i_i64 = __asan_report_store8(&team_avatar->in_dungeon_guid);
        team_avatar->in_dungeon_guid = Guid;
        v33 = 1;
LABEL_67:
        std::shared_ptr<TrialAvatar>::~shared_ptr((std::shared_ptr<TrialAvatar> *const)(v5 + 112));
        if ( v33 != 1 )
          goto LABEL_69;
        goto LABEL_68;
      }
      common::milog::MiLogStream::create(
        &v73,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/potion_activity.cpp",
        "initPotionEnterSceneAvatar",
        992);
      v39 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
              &v73,
              (const char (*)[49])"[POTION] addTrialAvatar failed, trial_avatar_id:");
      v40 = std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 112));
      TrialAvatarId = TrialAvatar::getTrialAvatarId(v40);
      v41 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v39, &TrialAvatarId);
      v32 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v41, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
    }
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, &val);
    common::milog::MiLogStream::~MiLogStream(&v73);
    ret = -1;
    v33 = 0;
    goto LABEL_67;
  }
  common::milog::MiLogStream::create(
    &v73,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/activity/potion_activity.cpp",
    "initPotionEnterSceneAvatar",
    913);
  v8 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
         &v73,
         (const char (*)[44])"[POTION] dungeon_scene_ptr is nullptr, uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
  common::milog::MiLogStream::~MiLogStream(&v73);
  v9 = -1;
LABEL_102:
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v5 + 80));
  result = v9;
  if ( v74 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8034) = 0;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8048) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8050) = 0;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8064) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8068) = -168430091;
  }
  return result;
};

// Line 1044: range 0000000016C3180C-0000000016C32499
// local variable allocation has failed, the output may be wrong!
void __cdecl PotionActivity::onLeaveSceneEvent(PotionActivity *const this, const LeaveSceneEvent *event)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // r14
  PlayerAbilityGroupComp *AbilityGroupComp; // rax
  PlayerAbilityGroupComp *v12; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyPotionDungeonChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // r14
  DungeonScene *v15; // rax
  const std::string *v16; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyPotionDungeonChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyPotionDungeonChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyPotionDungeonChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  uint32_t DungeonId; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyPotionDungeonChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyPotionDungeonChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyPotionDungeonChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  google::protobuf::RepeatedField<unsigned int> *v25; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyPotionDungeonChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyPotionDungeonChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyPotionDungeonChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyPotionDungeonChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyPotionDungeonChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyPotionDungeonChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // r14
  uint32_t TotalScore; // eax
  Player *v33; // r14
  std::string eventa; // [rsp+0h] [rbp-270h] OVERLAPPED BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,PotionStage> >::_Self __y; // [rsp+20h] [rbp-250h] BYREF
  const PotionDungeonContext *dungeon_context; // [rsp+28h] [rbp-248h]
  google::protobuf::RepeatedPtrField<proto_log::AvatarLog> *avatar_log_list; // [rsp+30h] [rbp-240h]
  PotionStage *stage; // [rsp+38h] [rbp-238h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+40h] [rbp-230h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+50h] [rbp-220h] BYREF
  common::milog::MiLogStream v41; // [rsp+60h] [rbp-210h] BYREF
  char v42[496]; // [rsp+80h] [rbp-1F0h] BYREF

  eventa._M_string_length = (std::string::size_type)this;
  eventa._M_dataplus._M_p = (std::string::pointer)event;
  v2 = (unsigned __int64)v42;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(448LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 1 11 holder:1078 48 8 15 stage_iter:1093 80 16 18 cur_scene_ptr:1045 112 16 22 dungeon_scen"
                        "e_ptr:1051 144 16 12 log_ptr:1079 176 24 22 ability_group_vec:1068 240 144 24 dungeon_context_opt:1060";
  *(_QWORD *)(v2 + 16) = PotionActivity::onLeaveSceneEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61953;
  v4[536862721] = -234881024;
  v4[536862722] = 62194;
  v4[536862723] = 62194;
  v4[536862724] = 62194;
  v4[536862725] = 62194;
  v4[536862726] = -218959360;
  v4[536862727] = 62194;
  v4[536862732] = -202116109;
  v4[536862733] = -202116109;
  if ( *(_BYTE *)(((eventa._M_string_length + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(*(Player *const *)(eventa._M_string_length + 24));
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 80));
  if ( !std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 80)) )
  {
    std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
    toPtr<DungeonScene,Scene>((Scene *)(v2 + 112));
    if ( !std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v2 + 112)) )
    {
      v5 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
      if ( DungeonScene::getDungeonType(v5) == DUNGEON_POTION )
      {
        common::milog::MiLogStream::create(
          &v41,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/potion_activity.cpp",
          "onLeaveSceneEvent",
          1059);
        v6 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
               &v41,
               (const char (*)[38])"[POTION] onLeaveSceneEvent, scene_id:");
        v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
               v6,
               (const unsigned int *)eventa._M_dataplus._M_p + 6);
        v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v7, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((eventa._M_string_length + 24) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        *((_DWORD *)&eventa._anon_0._M_allocated_capacity + 3) = Player::getUid(*(const Player *const *)(eventa._M_string_length + 24));
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
          v8,
          (const unsigned int *)&eventa._anon_0._M_allocated_capacity + 3);
        common::milog::MiLogStream::~MiLogStream(&v41);
        v9 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
        DungeonScene::getDungeonExtraData<PotionDungeonContext>((std::optional<PotionDungeonContext> *)(v2 + 240), v9);
        if ( !std::optional<PotionDungeonContext>::has_value((const std::optional<PotionDungeonContext> *const)(v2 + 240)) )
        {
          common::milog::MiLogStream::create(
            &v41,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/activity/potion_activity.cpp",
            "onLeaveSceneEvent",
            1063);
          v10 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                  &v41,
                  (const char (*)[38])"[POTION] dungeon has no context, uid:");
          if ( *(_BYTE *)(((eventa._M_string_length + 24) >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          *((_DWORD *)&eventa._anon_0._M_allocated_capacity + 3) = Player::getUid(*(const Player *const *)(eventa._M_string_length + 24));
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v10,
            (const unsigned int *)&eventa._anon_0._M_allocated_capacity + 3);
          common::milog::MiLogStream::~MiLogStream(&v41);
        }
        else
        {
          dungeon_context = std::optional<PotionDungeonContext>::value((std::optional<PotionDungeonContext> *const)(v2 + 240));
          std::vector<std::string>::vector((std::vector<std::string> *const)(v2 + 176));
          PotionActivity::fillAbilityGroupVec(
            (PotionActivity *const)eventa._M_string_length,
            &dungeon_context->buff_id_set,
            (std::vector<std::string> *)(v2 + 176));
          if ( !std::vector<std::string>::empty((const std::vector<std::string> *const)(v2 + 176)) )
          {
            if ( *(_BYTE *)(((eventa._M_string_length + 24) >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            AbilityGroupComp = Player::getAbilityGroupComp(*(Player *const *)(eventa._M_string_length + 24));
            PlayerAbilityGroupComp::delNoneFilterAbilityGroup(
              AbilityGroupComp,
              (const std::vector<std::string> *)(v2 + 176));
            if ( *(_BYTE *)(((eventa._M_string_length + 24) >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v12 = Player::getAbilityGroupComp(*(Player *const *)(eventa._M_string_length + 24));
            PlayerAbilityGroupComp::tryRefreshAbilityGroup(v12);
          }
          PotionActivity::recallDungeonAvatars((PotionActivity *const)eventa._M_string_length);
          if ( *(_BYTE *)(((eventa._M_string_length + 24) >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          BasicComp = Player::getBasicComp(*(Player *const *)(eventa._M_string_length + 24));
          PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v41, BasicComp);
          StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32), 0xDE5u, eventa);
          std::string::~string(&v41);
          common::tools::perf::make_shared<proto_log::PlayerLogBodyPotionDungeonChallengeEnd>();
          v14 = std::__shared_ptr_access<proto_log::PlayerLogBodyPotionDungeonChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyPotionDungeonChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
          v15 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
          v16 = DungeonScene::getTransaction[abi:cxx11](v15);
          proto_log::PlayerLogBodyPotionDungeonChallengeEnd::set_dungeon_transaction(v14, v16);
          v17 = std::__shared_ptr_access<proto_log::PlayerLogBodyPotionDungeonChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyPotionDungeonChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
          avatar_log_list = proto_log::PlayerLogBodyPotionDungeonChallengeEnd::mutable_avatar_list(v17);
          google::protobuf::RepeatedPtrField<proto_log::AvatarLog>::operator=(
            avatar_log_list,
            &dungeon_context->avatar_log_list);
          v18 = std::__shared_ptr_access<proto_log::PlayerLogBodyPotionDungeonChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyPotionDungeonChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
          if ( *(_BYTE *)(((unsigned __int64)dungeon_context >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)dungeon_context >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          proto_log::PlayerLogBodyPotionDungeonChallengeEnd::set_stage_id(v18, dungeon_context->stage_id);
          v19 = std::__shared_ptr_access<proto_log::PlayerLogBodyPotionDungeonChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyPotionDungeonChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
          v20 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
          DungeonId = DungeonScene::getDungeonId(v20);
          proto_log::PlayerLogBodyPotionDungeonChallengeEnd::set_dungeon_id(v19, DungeonId);
          v22 = std::__shared_ptr_access<proto_log::PlayerLogBodyPotionDungeonChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyPotionDungeonChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
          if ( *(_BYTE *)(((unsigned __int64)&dungeon_context->mode_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)dungeon_context + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_context->mode_id >> 3)
                                                                           + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          proto_log::PlayerLogBodyPotionDungeonChallengeEnd::set_difficulty(v22, dungeon_context->mode_id);
          v23 = std::__shared_ptr_access<proto_log::PlayerLogBodyPotionDungeonChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyPotionDungeonChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
          if ( *(_BYTE *)(((unsigned __int64)&dungeon_context->difficulty_level >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&dungeon_context->difficulty_level >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          proto_log::PlayerLogBodyPotionDungeonChallengeEnd::set_ordinal(v23, dungeon_context->difficulty_level);
          v24 = std::__shared_ptr_access<proto_log::PlayerLogBodyPotionDungeonChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyPotionDungeonChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
          v25 = proto_log::PlayerLogBodyPotionDungeonChallengeEnd::mutable_buff_id_list(v24);
          common::tools::MiscUtils::setToRepeated<std::unordered_set<unsigned int>,unsigned int>(
            &dungeon_context->buff_id_set,
            v25);
          v26 = std::__shared_ptr_access<proto_log::PlayerLogBodyPotionDungeonChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyPotionDungeonChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
          if ( *(_BYTE *)(((unsigned __int64)&dungeon_context->challenge_use_time >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)dungeon_context + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_context->challenge_use_time >> 3)
                                                                            + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          proto_log::PlayerLogBodyPotionDungeonChallengeEnd::set_use_time(v26, dungeon_context->challenge_use_time);
          if ( *(_BYTE *)(((unsigned __int64)&dungeon_context->final_score >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)dungeon_context + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_context->final_score >> 3)
                                                                            + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          eventa._anon_0._M_local_buf[11] = dungeon_context->final_score != 0;
          v27 = std::__shared_ptr_access<proto_log::PlayerLogBodyPotionDungeonChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyPotionDungeonChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
          proto_log::PlayerLogBodyPotionDungeonChallengeEnd::set_is_success(v27, eventa._anon_0._M_local_buf[11]);
          v28 = std::__shared_ptr_access<proto_log::PlayerLogBodyPotionDungeonChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyPotionDungeonChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
          if ( *(char *)(((unsigned __int64)&dungeon_context->is_saved >> 3) + 0x7FFF8000) < 0 )
            __asan_report_load1(&dungeon_context->is_saved);
          proto_log::PlayerLogBodyPotionDungeonChallengeEnd::set_is_saved(v28, dungeon_context->is_saved);
          v29 = std::__shared_ptr_access<proto_log::PlayerLogBodyPotionDungeonChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyPotionDungeonChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
          if ( *(_BYTE *)(((unsigned __int64)&dungeon_context->final_score >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)dungeon_context + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_context->final_score >> 3)
                                                                            + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          proto_log::PlayerLogBodyPotionDungeonChallengeEnd::set_score(v29, dungeon_context->final_score);
          *(std::map<unsigned int,PotionStage>::iterator *)(v2 + 48) = std::map<unsigned int,PotionStage>::find(
                                                                         (std::map<unsigned int,PotionStage> *const)(eventa._M_string_length + 968),
                                                                         &dungeon_context->stage_id);
          __y._M_node = std::map<unsigned int,PotionStage>::end((std::map<unsigned int,PotionStage> *const)(eventa._M_string_length + 968))._M_node;
          if ( std::operator!=(
                 (const std::_Rb_tree_iterator<std::pair<unsigned int const,PotionStage> >::_Self *)(v2 + 48),
                 &__y) )
          {
            stage = &std::_Rb_tree_iterator<std::pair<unsigned int const,PotionStage>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,PotionStage> > *const)(v2 + 48))->second;
            v30 = std::__shared_ptr_access<proto_log::PlayerLogBodyPotionDungeonChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyPotionDungeonChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
            if ( *(_BYTE *)(((unsigned __int64)&stage->reset_times >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&stage->reset_times >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            proto_log::PlayerLogBodyPotionDungeonChallengeEnd::set_challenge_time(v30, stage->reset_times);
            v31 = std::__shared_ptr_access<proto_log::PlayerLogBodyPotionDungeonChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyPotionDungeonChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
            TotalScore = PotionStage::getTotalScore(stage);
            proto_log::PlayerLogBodyPotionDungeonChallengeEnd::set_cumulative_score(v31, TotalScore);
          }
          if ( *(_BYTE *)(((eventa._M_string_length + 24) >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v33 = *(Player **)(eventa._M_string_length + 24);
          std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
          std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyPotionDungeonChallengeEnd,void>(
            &p_body_ptr,
            (const std::shared_ptr<proto_log::PlayerLogBodyPotionDungeonChallengeEnd> *)(v2 + 144));
          Player::printStatLog(v33, &p_body_ptr, &p_body_ext_ptr, 0xEu);
          std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
          std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
          std::shared_ptr<proto_log::PlayerLogBodyPotionDungeonChallengeEnd>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyPotionDungeonChallengeEnd> *const)(v2 + 144));
          StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32));
          std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 176));
        }
        std::optional<PotionDungeonContext>::~optional((std::optional<PotionDungeonContext> *const)(v2 + 240));
      }
    }
    std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 112));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 80));
  if ( v42 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1105: range 0000000016C3249A-0000000016C32E47
void __cdecl PotionActivity::onPostEnterSceneEvent(PotionActivity *const this, const PostEnterSceneEvent *event)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // r14
  PotionDungeonContext *v11; // rax
  common::milog::MiLogStream *v12; // r14
  PlayerAbilityGroupComp *AbilityGroupComp; // rax
  PlayerAbilityGroupComp *v14; // rax
  DungeonScene *v15; // rax
  unsigned int val; // [rsp+14h] [rbp-31Ch] BYREF
  std::vector<PotionAvatar>::iterator __for_begin; // [rsp+18h] [rbp-318h] BYREF
  std::vector<PotionAvatar>::iterator __for_end; // [rsp+20h] [rbp-310h] BYREF
  std::vector<PotionAvatar> *__for_range; // [rsp+28h] [rbp-308h]
  const PotionAvatar *team_avatar; // [rsp+30h] [rbp-300h]
  proto::PotionDungeonAvatar *dungeon_avatar_info; // [rsp+38h] [rbp-2F8h]
  common::milog::MiLogStream v22; // [rsp+40h] [rbp-2F0h] BYREF
  char v23[720]; // [rsp+60h] [rbp-2D0h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(672LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 16 18 cur_scene_ptr:1106 64 16 22 dungeon_scene_ptr:1111 96 24 22 ability_group_vec:1127 16"
                        "0 64 11 notify:1146 256 136 20 dungeon_context:1126 464 144 24 dungeon_context_opt:1119";
  *(_QWORD *)(v2 + 16) = PotionActivity::onPostEnterSceneEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -234881024;
  v4[536862724] = -218959118;
  v4[536862727] = -218959118;
  v4[536862732] = -218959360;
  v4[536862733] = -218959118;
  v4[536862734] = 62194;
  v4[536862739] = -202116109;
  v4[536862740] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 32));
  if ( !std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 32)) )
  {
    std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    toPtr<DungeonScene,Scene>((Scene *)(v2 + 64));
    if ( !std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v2 + 64)) )
    {
      v5 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      if ( DungeonScene::getDungeonType(v5) == DUNGEON_POTION )
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/potion_activity.cpp",
          "onPostEnterSceneEvent",
          1118);
        v6 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
               &v22,
               (const char (*)[43])"[POTION] onPostEnterSceneEvent, scene_id: ");
        v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &event->dst_scene_id);
        v8 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v7, (const char (*)[7])" uid: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
        common::milog::MiLogStream::~MiLogStream(&v22);
        v9 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        DungeonScene::getDungeonExtraData<PotionDungeonContext>((std::optional<PotionDungeonContext> *)(v2 + 464), v9);
        if ( !std::optional<PotionDungeonContext>::has_value((const std::optional<PotionDungeonContext> *const)(v2 + 464)) )
        {
          common::milog::MiLogStream::create(
            &v22,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/potion_activity.cpp",
            "onPostEnterSceneEvent",
            1122);
          v10 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                  &v22,
                  (const char (*)[44])"[POTION] PotionDungeonContext invalid, uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
          common::milog::MiLogStream::~MiLogStream(&v22);
        }
        else
        {
          v11 = std::optional<PotionDungeonContext>::value((std::optional<PotionDungeonContext> *const)(v2 + 464));
          PotionDungeonContext::PotionDungeonContext((PotionDungeonContext *const)(v2 + 256), v11);
          std::vector<std::string>::vector((std::vector<std::string> *const)(v2 + 96));
          PotionActivity::fillAbilityGroupVec(
            this,
            (const std::unordered_set<unsigned int> *)(v2 + 296),
            (std::vector<std::string> *)(v2 + 96));
          if ( !std::vector<std::string>::empty((const std::vector<std::string> *const)(v2 + 96)) )
          {
            if ( *(_BYTE *)(v2 + 352) )
            {
              common::milog::MiLogStream::create(
                &v22,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/player/activity/potion_activity.cpp",
                "onPostEnterSceneEvent",
                1134);
              v12 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                      &v22,
                      (const char (*)[51])"[POTION] onPostEnterSceneEvent has add buff, uid: ");
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              val = Player::getUid(this->player_);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
              common::milog::MiLogStream::~MiLogStream(&v22);
            }
            else
            {
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              AbilityGroupComp = Player::getAbilityGroupComp(this->player_);
              PlayerAbilityGroupComp::addNoneFilterAbilityGroup(
                AbilityGroupComp,
                (const std::vector<std::string> *)(v2 + 96),
                0);
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              v14 = Player::getAbilityGroupComp(this->player_);
              PlayerAbilityGroupComp::tryRefreshAbilityGroup(v14);
              *(_BYTE *)(v2 + 352) = 1;
              v15 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
              DungeonScene::setDungeonExtraData<PotionDungeonContext>(v15, (const PotionDungeonContext *)(v2 + 256));
            }
          }
          proto::PotionEnterDungeonNotify::PotionEnterDungeonNotify((proto::PotionEnterDungeonNotify *const)(v2 + 160));
          proto::PotionEnterDungeonNotify::set_stage_id(
            (proto::PotionEnterDungeonNotify *const)(v2 + 160),
            *(_DWORD *)(v2 + 256));
          proto::PotionEnterDungeonNotify::set_level_id(
            (proto::PotionEnterDungeonNotify *const)(v2 + 160),
            *(_DWORD *)(v2 + 260));
          proto::PotionEnterDungeonNotify::set_difficulty_level(
            (proto::PotionEnterDungeonNotify *const)(v2 + 160),
            *(_DWORD *)(v2 + 264));
          proto::PotionEnterDungeonNotify::set_mode_id(
            (proto::PotionEnterDungeonNotify *const)(v2 + 160),
            *(_DWORD *)(v2 + 268));
          __for_range = (std::vector<PotionAvatar> *)(v2 + 272);
          __for_begin._M_current = std::vector<PotionAvatar>::begin((std::vector<PotionAvatar> *const)(v2 + 272))._M_current;
          __for_end._M_current = std::vector<PotionAvatar>::end(__for_range)._M_current;
          while ( __gnu_cxx::operator!=<PotionAvatar *,std::vector<PotionAvatar>>(&__for_begin, &__for_end) )
          {
            team_avatar = __gnu_cxx::__normal_iterator<PotionAvatar *,std::vector<PotionAvatar>>::operator*(&__for_begin);
            dungeon_avatar_info = proto::PotionEnterDungeonNotify::add_dungeon_avatar_list((proto::PotionEnterDungeonNotify *const)(v2 + 160));
            if ( *(char *)(((unsigned __int64)team_avatar >> 3) + 0x7FFF8000) < 0 )
              __asan_report_load1(team_avatar);
            proto::PotionDungeonAvatar::set_is_trial(dungeon_avatar_info, team_avatar->is_trial);
            if ( *(_BYTE *)(((unsigned __int64)&team_avatar->in_dungeon_guid >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            proto::PotionDungeonAvatar::set_avatar_guid(dungeon_avatar_info, team_avatar->in_dungeon_guid);
            __gnu_cxx::__normal_iterator<PotionAvatar *,std::vector<PotionAvatar>>::operator++(&__for_begin);
          }
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 160));
          proto::PotionEnterDungeonNotify::~PotionEnterDungeonNotify((proto::PotionEnterDungeonNotify *const)(v2 + 160));
          std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 96));
          PotionDungeonContext::~PotionDungeonContext((PotionDungeonContext *const)(v2 + 256));
        }
        std::optional<PotionDungeonContext>::~optional((std::optional<PotionDungeonContext> *const)(v2 + 464));
      }
    }
    std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 64));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 32));
  if ( v23 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF801C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF804C) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8050) = -168430091;
  }
};

// Line 1162: range 0000000016C32E48-0000000016C331A6
__int64 __fastcall PotionActivity::getStageLevelPassNum(PotionActivity *const this, uint32_t stage_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  __int64 result; // rax
  unsigned int val; // [rsp+18h] [rbp-D8h] BYREF
  uint32_t level_pass_num; // [rsp+1Ch] [rbp-D4h]
  std::map<unsigned int,PotionLevel>::iterator __for_begin; // [rsp+20h] [rbp-D0h] BYREF
  std::map<unsigned int,PotionLevel>::iterator __for_end; // [rsp+28h] [rbp-C8h] BYREF
  std::map<unsigned int,PotionLevel> *__for_range; // [rsp+30h] [rbp-C0h]
  const std::pair<unsigned int const,PotionLevel> *v14; // [rsp+38h] [rbp-B8h]
  std::tuple_element<0,const std::pair<unsigned int const,PotionLevel> >::type *_; // [rsp+40h] [rbp-B0h]
  std::tuple_element<1,const std::pair<unsigned int const,PotionLevel> >::type *level; // [rsp+48h] [rbp-A8h]
  common::milog::MiLogStream v17; // [rsp+50h] [rbp-A0h] BYREF
  char v18[128]; // [rsp+70h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 13 stage_id:1161 64 8 15 stage_iter:1163";
  *(_QWORD *)(v2 + 16) = PotionActivity::getStageLevelPassNum;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = stage_id;
  *(std::map<unsigned int,PotionStage>::iterator *)(v2 + 64) = std::map<unsigned int,PotionStage>::find(
                                                                 &this->stage_map_,
                                                                 (const std::map<unsigned int,PotionStage>::key_type *)(v2 + 48));
  __for_end._M_node = std::map<unsigned int,PotionStage>::end(&this->stage_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,PotionStage> >::_Self *)(v2 + 64),
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,PotionStage> >::_Self *)&__for_end) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/potion_activity.cpp",
      "getStageLevelPassNum",
      1166);
    v5 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v17,
           (const char (*)[36])"[POTION] stage not found, stage_id:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v6, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v17);
    result = 0LL;
  }
  else
  {
    level_pass_num = 0;
    __for_range = &std::_Rb_tree_iterator<std::pair<unsigned int const,PotionStage>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,PotionStage> > *const)(v2 + 64))->second.level_map;
    __for_begin._M_node = std::map<unsigned int,PotionLevel>::begin(__for_range)._M_node;
    __for_end._M_node = std::map<unsigned int,PotionLevel>::end(__for_range)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v14 = std::_Rb_tree_iterator<std::pair<unsigned int const,PotionLevel>>::operator*(&__for_begin);
      _ = std::get<0ul,unsigned int const,PotionLevel>(v14);
      level = (std::tuple_element<1,const std::pair<unsigned int const,PotionLevel> >::type *)std::get<1ul,unsigned int const,PotionLevel>(v14);
      if ( *(_BYTE *)(((unsigned __int64)&level->score >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)level + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level->score >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( level->score )
        ++level_pass_num;
      std::_Rb_tree_iterator<std::pair<unsigned int const,PotionLevel>>::operator++(&__for_begin);
    }
    result = level_pass_num;
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

// Line 1181: range 0000000016C331A8-0000000016C333FE
uint32_t __fastcall PotionActivity::getStageTotalScore(PotionActivity *const this, uint32_t stage_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  uint32_t result; // eax
  std::_Rb_tree_iterator<std::pair<unsigned int const,PotionStage> >::pointer v9; // rax
  unsigned int val; // [rsp+14h] [rbp-ACh] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,PotionStage> >::_Self __y; // [rsp+18h] [rbp-A8h] BYREF
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-A0h] BYREF
  char v13[128]; // [rsp+40h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 13 stage_id:1180 64 8 15 stage_iter:1182";
  *(_QWORD *)(v2 + 16) = PotionActivity::getStageTotalScore;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = stage_id;
  *(std::map<unsigned int,PotionStage>::iterator *)(v2 + 64) = std::map<unsigned int,PotionStage>::find(
                                                                 &this->stage_map_,
                                                                 (const std::map<unsigned int,PotionStage>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,PotionStage>::end(&this->stage_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,PotionStage> >::_Self *)(v2 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/potion_activity.cpp",
      "getStageTotalScore",
      1185);
    v5 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v12,
           (const char (*)[36])"[POTION] stage not found, stage_id:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v6, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v12);
    result = 0;
  }
  else
  {
    v9 = std::_Rb_tree_iterator<std::pair<unsigned int const,PotionStage>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,PotionStage> > *const)(v2 + 64));
    result = PotionStage::getTotalScore(&v9->second);
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

// Line 1192: range 0000000016C33400-0000000016C33B0A
__int64 __fastcall PotionActivity::getStageObtainMedalNum(
        PotionActivity *const this,
        uint32_t stage_id,
        uint32_t medal_type)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rbx
  __int64 result; // rax
  ActivityPotionExcelConfigMgr *p_activity_potion_config_mgr; // rcx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  std::vector<unsigned int>::size_type v14; // r14
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // r14
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  uint32_t score; // r14d
  std::vector<unsigned int>::const_reference v22; // rdx
  unsigned int val; // [rsp+18h] [rbp-108h] BYREF
  uint32_t medal_num; // [rsp+1Ch] [rbp-104h]
  std::map<unsigned int,PotionLevel>::iterator __for_begin; // [rsp+20h] [rbp-100h] BYREF
  std::map<unsigned int,PotionLevel>::iterator __for_end; // [rsp+28h] [rbp-F8h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,PotionStage> >::_Self __y; // [rsp+30h] [rbp-F0h] BYREF
  std::map<unsigned int,PotionLevel> *__for_range; // [rsp+38h] [rbp-E8h]
  const std::pair<unsigned int const,PotionLevel> *v30; // [rsp+40h] [rbp-E0h]
  std::tuple_element<0,const std::pair<unsigned int const,PotionLevel> >::type *_; // [rsp+48h] [rbp-D8h]
  std::tuple_element<1,const std::pair<unsigned int const,PotionLevel> >::type *level; // [rsp+50h] [rbp-D0h]
  const data::ActivityPotionLevelExcelConfig *level_config_ptr; // [rsp+58h] [rbp-C8h]
  std::shared_ptr<Config> v34; // [rsp+60h] [rbp-C0h] BYREF
  common::milog::MiLogStream v35; // [rsp+70h] [rbp-B0h] BYREF
  char v36[144]; // [rsp+90h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 13 stage_id:1191 48 4 15 medal_type:1191 64 8 15 stage_iter:1193";
  *(_QWORD *)(v3 + 16) = PotionActivity::getStageObtainMedalNum;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 32) = stage_id;
  *(_DWORD *)(v3 + 48) = medal_type;
  *(std::map<unsigned int,PotionStage>::iterator *)(v3 + 64) = std::map<unsigned int,PotionStage>::find(
                                                                 &this->stage_map_,
                                                                 (const std::map<unsigned int,PotionStage>::key_type *)(v3 + 32));
  __y._M_node = std::map<unsigned int,PotionStage>::end(&this->stage_map_)._M_node;
  if ( !std::operator==(
          (const std::_Rb_tree_iterator<std::pair<unsigned int const,PotionStage> >::_Self *)(v3 + 64),
          &__y) )
  {
    medal_num = 0;
    __for_range = &std::_Rb_tree_iterator<std::pair<unsigned int const,PotionStage>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,PotionStage> > *const)(v3 + 64))->second.level_map;
    __for_begin._M_node = std::map<unsigned int,PotionLevel>::begin(__for_range)._M_node;
    __for_end._M_node = std::map<unsigned int,PotionLevel>::end(__for_range)._M_node;
    while ( 1 )
    {
      if ( !std::operator!=(&__for_begin, &__for_end) )
      {
        result = medal_num;
        goto LABEL_32;
      }
      v30 = std::_Rb_tree_iterator<std::pair<unsigned int const,PotionLevel>>::operator*(&__for_begin);
      _ = std::get<0ul,unsigned int const,PotionLevel>(v30);
      level = (std::tuple_element<1,const std::pair<unsigned int const,PotionLevel> >::type *)std::get<1ul,unsigned int const,PotionLevel>(v30);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v34);
      p_activity_potion_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v34)->design_config.txt_config_mgr.activity_potion_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)level >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)level >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      level_config_ptr = data::ActivityPotionExcelConfigMgrBase::findActivityPotionLevelExcelConfig(
                           p_activity_potion_config_mgr,
                           level->level_id);
      std::shared_ptr<Config>::~shared_ptr(&v34);
      if ( !level_config_ptr )
        break;
      if ( !*(_DWORD *)(v3 + 48)
        || (v14 = *(unsigned int *)(v3 + 48), v14 > std::vector<unsigned int>::size(&level_config_ptr->medal_score_list)) )
      {
        common::milog::MiLogStream::create(
          &v35,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/potion_activity.cpp",
          "getStageObtainMedalNum",
          1210);
        v16 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                &v35,
                (const char (*)[29])"[POTION] invalid medal_type:");
        v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v16,
                (const unsigned int *)(v3 + 48));
        v18 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                v17,
                (const char (*)[24])" medal_score_list_size:");
        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,PotionStage> >::_Base_ptr)std::vector<unsigned int>::size(&level_config_ptr->medal_score_list);
        v19 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                v18,
                (const unsigned __int64 *)&__y);
        v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &level->level_id);
        v13 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v20, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        goto LABEL_15;
      }
      if ( *(_BYTE *)(((unsigned __int64)&level->score >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)level + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level->score >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      score = level->score;
      v22 = std::vector<unsigned int>::operator[](
              &level_config_ptr->medal_score_list,
              (unsigned int)(*(_DWORD *)(v3 + 48) - 1));
      if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v22 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( score >= *v22 )
        ++medal_num;
LABEL_30:
      std::_Rb_tree_iterator<std::pair<unsigned int const,PotionLevel>>::operator++(&__for_begin);
    }
    common::milog::MiLogStream::create(
      &v35,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/potion_activity.cpp",
      "getStageObtainMedalNum",
      1205);
    v11 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
            &v35,
            (const char (*)[60])"[POTION] findActivityPotionLevelExcelConfig fail, level_id:");
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &level->level_id);
    v13 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v12, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_15:
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
    common::milog::MiLogStream::~MiLogStream(&v35);
    goto LABEL_30;
  }
  common::milog::MiLogStream::create(
    &v35,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/activity/potion_activity.cpp",
    "getStageObtainMedalNum",
    1196);
  v6 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
         &v35,
         (const char (*)[36])"[POTION] stage not found, stage_id:");
  v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 32));
  v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v7, (const char (*)[6])" uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
  common::milog::MiLogStream::~MiLogStream(&v35);
  result = 0LL;
LABEL_32:
  if ( v36 == (char *)v3 )
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

// Line 1223: range 0000000016C33B0C-0000000016C3429D
__int64 __fastcall PotionActivity::setStageLevelScoreByGm(
        PotionActivity *const this,
        uint32_t stage_id,
        uint32_t level_id,
        uint32_t score)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rbx
  unsigned int v8; // r14d
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rbx
  std::_Rb_tree_iterator<std::pair<unsigned int const,PotionStage> >::pointer v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,PotionLevel> >::pointer v17; // rdx
  std::_Rb_tree_iterator<std::pair<unsigned int const,PotionLevel> >::pointer v18; // rdx
  uint32_t *p_score; // rax
  PlayerEventComp *EventComp; // r14
  PlayerEventComp *v21; // r14
  __int64 result; // rax
  unsigned int val; // [rsp+28h] [rbp-118h] BYREF
  uint32_t old_score; // [rsp+2Ch] [rbp-114h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,PotionStage> >::_Self __y; // [rsp+30h] [rbp-110h] BYREF
  PotionStage *stage; // [rsp+38h] [rbp-108h]
  std::shared_ptr<BaseEvent> p_event_ptr; // [rsp+40h] [rbp-100h] BYREF
  common::milog::MiLogStream v30; // [rsp+50h] [rbp-F0h] BYREF
  char v31[208]; // [rsp+70h] [rbp-D0h] BYREF

  v4 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 32 4 13 stage_id:1222 48 4 13 level_id:1222 64 8 15 stage_iter:1229 96 8 15 level_iter:1236 12"
                        "8 16 27 score_change_event_ptr:1250";
  *(_QWORD *)(v4 + 16) = PotionActivity::setStageLevelScoreByGm;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862724] = -202178560;
  *(_DWORD *)(v4 + 32) = stage_id;
  *(_DWORD *)(v4 + 48) = level_id;
  if ( !score )
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/potion_activity.cpp",
      "setStageLevelScoreByGm",
      1226);
    v7 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
           &v30,
           (const char (*)[45])"[POTION] can not set level score zero,  uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v30);
    v8 = -1;
    goto LABEL_27;
  }
  *(std::map<unsigned int,PotionStage>::iterator *)(v4 + 64) = std::map<unsigned int,PotionStage>::find(
                                                                 &this->stage_map_,
                                                                 (const std::map<unsigned int,PotionStage>::key_type *)(v4 + 32));
  __y._M_node = std::map<unsigned int,PotionStage>::end(&this->stage_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,PotionStage> >::_Self *)(v4 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/potion_activity.cpp",
      "setStageLevelScoreByGm",
      1232);
    v9 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v30,
           (const char (*)[36])"[POTION] stage not found, stage_id:");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 32));
    v11 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v10, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_11:
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
    common::milog::MiLogStream::~MiLogStream(&v30);
    v8 = -1;
    goto LABEL_27;
  }
  v12 = std::_Rb_tree_iterator<std::pair<unsigned int const,PotionStage>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,PotionStage> > *const)(v4 + 64));
  stage = &v12->second;
  *(std::map<unsigned int,PotionLevel>::iterator *)(v4 + 96) = std::map<unsigned int,PotionLevel>::find(
                                                                 &v12->second.level_map,
                                                                 (const std::map<unsigned int,PotionLevel>::key_type *)(v4 + 48));
  __y._M_node = std::map<unsigned int,PotionLevel>::end(&stage->level_map)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,PotionLevel> >::_Self *)(v4 + 96),
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,PotionLevel> >::_Self *)&__y) )
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/potion_activity.cpp",
      "setStageLevelScoreByGm",
      1239);
    v13 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
            &v30,
            (const char (*)[36])"[POTION] level not found, level_id:");
    v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v4 + 48));
    v15 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v14, (const char (*)[11])" stage_id:");
    v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v4 + 32));
    v11 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v16, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_11;
  }
  v17 = std::_Rb_tree_iterator<std::pair<unsigned int const,PotionLevel>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,PotionLevel> > *const)(v4 + 96));
  if ( *(_BYTE *)(((unsigned __int64)&v17->second.score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v17 + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v17->second.score >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  old_score = v17->second.score;
  v18 = std::_Rb_tree_iterator<std::pair<unsigned int const,PotionLevel>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,PotionLevel> > *const)(v4 + 96));
  p_score = &v18->second.score;
  if ( *(_BYTE *)(((unsigned __int64)p_score >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)p_score & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_score >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(p_score);
  }
  v18->second.score = score;
  if ( !old_score )
  {
    PotionActivity::upStageLevelDifficultyLevel(this, *(_DWORD *)(v4 + 32));
    common::tools::perf::make_shared<PotionStageLevelPassEvent,unsigned int &,unsigned int &>(
      (unsigned int *)(v4 + 128),
      (unsigned int *)(v4 + 32),
      (unsigned int *)(v4 + 48),
      (unsigned int *)(v4 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    EventComp = Player::getEventComp(this->player_);
    std::shared_ptr<BaseEvent>::shared_ptr<PotionStageLevelPassEvent,void>(
      &p_event_ptr,
      (const std::shared_ptr<PotionStageLevelPassEvent> *)(v4 + 128));
    PlayerEventComp::notifyEvent(EventComp, &p_event_ptr);
    std::shared_ptr<BaseEvent>::~shared_ptr(&p_event_ptr);
    std::shared_ptr<PotionStageLevelPassEvent>::~shared_ptr((std::shared_ptr<PotionStageLevelPassEvent> *const)(v4 + 128));
  }
  val = PotionStage::getTotalScore(stage);
  common::tools::perf::make_shared<PotionStageScoreChangeEvent,unsigned int &,unsigned int>(
    (unsigned int *)(v4 + 128),
    (unsigned int *)(v4 + 32),
    &val,
    (unsigned int *)(v4 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v21 = Player::getEventComp(this->player_);
  std::shared_ptr<BaseEvent>::shared_ptr<PotionStageScoreChangeEvent,void>(
    &p_event_ptr,
    (const std::shared_ptr<PotionStageScoreChangeEvent> *)(v4 + 128));
  PlayerEventComp::notifyEvent(v21, &p_event_ptr);
  std::shared_ptr<BaseEvent>::~shared_ptr(&p_event_ptr);
  BaseActivity::notifyClientData(this, 0);
  v8 = 0;
  std::shared_ptr<PotionStageScoreChangeEvent>::~shared_ptr((std::shared_ptr<PotionStageScoreChangeEvent> *const)(v4 + 128));
LABEL_27:
  result = v8;
  if ( v31 == (char *)v4 )
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
