// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/gear_activity.cpp

// Line 20: range 0000000015086AB0-0000000015086C4F
void __cdecl GearLevelData::toClient(const GearLevelData *const this, proto::GearLevelData *client_gear_data)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::GearLevelData::set_level_id(client_gear_data, this->level_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_open);
  }
  proto::GearLevelData::set_is_open(client_gear_data, this->is_open);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_finished >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 5) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_finished >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_finished);
  }
  proto::GearLevelData::set_is_finished(client_gear_data, this->is_finished);
  if ( *(_BYTE *)(((unsigned __int64)&this->shortest_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->shortest_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::GearLevelData::set_shortest_time(client_gear_data, this->shortest_time);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_duration >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_duration >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::GearLevelData::set_last_duration(client_gear_data, this->last_duration);
};

// Line 29: range 0000000015086C50-0000000015086D9F
void __cdecl GearLevelData::toBin(const GearLevelData *const this, proto::GearStageBin *bin)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::GearStageBin::set_level_id(bin, this->level_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_open);
  }
  proto::GearStageBin::set_is_open(bin, this->is_open);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_finished >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 5) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_finished >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_finished);
  }
  proto::GearStageBin::set_is_finished(bin, this->is_finished);
  if ( *(_BYTE *)(((unsigned __int64)&this->shortest_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->shortest_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::GearStageBin::set_shortest_time(bin, this->shortest_time);
};

// Line 37: range 0000000015086DA0-0000000015086EEB
void __cdecl GearLevelData::fromBin(GearLevelData *const this, const proto::GearStageBin *bin)
{
  uint32_t v2; // ecx
  bool is_open; // cl
  bool is_finished; // cl
  uint32_t v5; // ecx

  v2 = proto::GearStageBin::level_id(bin);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->level_id = v2;
  is_open = proto::GearStageBin::is_open(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_open);
  }
  this->is_open = is_open;
  is_finished = proto::GearStageBin::is_finished(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_finished >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 5) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_finished >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_finished);
  }
  this->is_finished = is_finished;
  v5 = proto::GearStageBin::shortest_time(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->shortest_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->shortest_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->shortest_time);
  }
  this->shortest_time = v5;
};

// Line 45: range 0000000015086EEC-000000001508703B
void __cdecl JigsawPictureData::toClient(
        const JigsawPictureData *const this,
        proto::JigsawPictureData *client_gear_picture_data)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)this & 7) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(this);
  }
  proto::JigsawPictureData::set_is_open(client_gear_picture_data, this->is_open);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_finished >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 1) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_finished >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_finished);
  }
  proto::JigsawPictureData::set_is_finished(client_gear_picture_data, this->is_finished);
  if ( *(_BYTE *)(((unsigned __int64)&this->shortest_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->shortest_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::JigsawPictureData::set_shortest_time(client_gear_picture_data, this->shortest_time);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_duration >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_duration >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::JigsawPictureData::set_last_duration(client_gear_picture_data, this->last_duration);
};

// Line 53: range 000000001508703C-000000001508713B
void __cdecl JigsawPictureData::toBin(const JigsawPictureData *const this, proto::JigsawPictureDataBin *bin)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)this & 7) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(this);
  }
  proto::JigsawPictureDataBin::set_is_open(bin, this->is_open);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_finished >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 1) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_finished >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_finished);
  }
  proto::JigsawPictureDataBin::set_is_finished(bin, this->is_finished);
  if ( *(_BYTE *)(((unsigned __int64)&this->shortest_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->shortest_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::JigsawPictureDataBin::set_shortest_time(bin, this->shortest_time);
};

// Line 60: range 000000001508713C-0000000015087236
void __cdecl JigsawPictureData::fromBin(JigsawPictureData *const this, const proto::JigsawPictureDataBin *bin)
{
  bool is_open; // cl
  bool is_finished; // cl
  uint32_t v4; // ecx

  is_open = proto::JigsawPictureDataBin::is_open(bin);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)this & 7) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(this);
  }
  this->is_open = is_open;
  is_finished = proto::JigsawPictureDataBin::is_finished(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_finished >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 1) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_finished >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_finished);
  }
  this->is_finished = is_finished;
  v4 = proto::JigsawPictureDataBin::shortest_time(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->shortest_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->shortest_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->shortest_time);
  }
  this->shortest_time = v4;
};

// Line 67: range 0000000015087238-000000001508734D
void __cdecl JigsawPictureData::reset(JigsawPictureData *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)this & 7) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(this);
  }
  this->is_open = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_finished >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 1) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_finished >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_finished);
  }
  this->is_finished = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->shortest_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->shortest_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->shortest_time);
  }
  this->shortest_time = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_duration >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_duration >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->last_duration);
  }
  this->last_duration = 0;
};

// Line 75: range 000000001508734E-0000000015087644
int32_t __cdecl GearActivity::fromScheduleBin(GearActivity *const this, const proto::ActivityScheduleBin *bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  GearLevelData *v5; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,GearLevelData> >,bool> v6; // rax
  common::milog::MiLogStream *v7; // rax
  const proto::JigsawPictureDataBin *v8; // rax
  uint32_t v9; // edx
  int32_t result; // eax
  google::protobuf::RepeatedPtrField<proto::GearStageBin>::const_iterator __for_begin; // [rsp+18h] [rbp-A8h] BYREF
  google::protobuf::RepeatedPtrField<proto::GearStageBin>::const_iterator __for_end; // [rsp+20h] [rbp-A0h] BYREF
  const proto::GearScheduleBin *schedule_bin; // [rsp+28h] [rbp-98h]
  const google::protobuf::RepeatedPtrField<proto::GearStageBin> *__for_range; // [rsp+30h] [rbp-90h]
  const proto::GearStageBin *level_bin; // [rsp+38h] [rbp-88h]
  common::milog::MiLogStream v16; // [rsp+40h] [rbp-80h] BYREF
  char v17[96]; // [rsp+60h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 level_data:82";
  *(_QWORD *)(v2 + 16) = GearActivity::fromScheduleBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  schedule_bin = proto::ActivityScheduleBin::gear_bin(bin);
  std::map<unsigned int,GearLevelData>::clear(&this->level_data_map_);
  JigsawPictureData::reset(&this->picture_content_);
  __for_range = proto::GearScheduleBin::level_bin_list(schedule_bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::GearStageBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::GearStageBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::GearStageBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    level_bin = google::protobuf::internal::RepeatedPtrIterator<proto::GearStageBin const>::operator*(&__for_begin);
    *(_DWORD *)(v2 + 32) = 0;
    *(_BYTE *)(v2 + 36) = 0;
    *(_BYTE *)(v2 + 37) = 0;
    *(_DWORD *)(v2 + 40) = 0;
    *(_DWORD *)(v2 + 44) = 0;
    GearLevelData::fromBin((GearLevelData *const)(v2 + 32), level_bin);
    v6 = std::map<unsigned int,GearLevelData>::emplace<unsigned int &,GearLevelData&>(
           &this->level_data_map_,
           (unsigned int *)(v2 + 32),
           (GearLevelData *)(v2 + 32),
           (unsigned int *)&this->level_data_map_,
           v5);
    if ( !v6.second )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/gear_activity.cpp",
        "fromScheduleBin",
        86);
      v7 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
             &v16,
             (const char (*)[34])"[GEAR] duplicate level, level_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v16);
    }
    google::protobuf::internal::RepeatedPtrIterator<proto::GearStageBin const>::operator++(&__for_begin);
  }
  v8 = proto::GearScheduleBin::jigsaw_picture_data(schedule_bin);
  JigsawPictureData::fromBin(&this->picture_content_, v8);
  v9 = proto::GearScheduleBin::player_finish_gear_level(schedule_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_finish_gear_level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->player_finish_gear_level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->player_finish_gear_level_);
  }
  this->player_finish_gear_level_ = v9;
  result = 0;
  if ( v17 == (char *)v2 )
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

// Line 96: range 0000000015087646-0000000015087789
int32_t __cdecl GearActivity::toScheduleBin(const GearActivity *const this, proto::ActivityScheduleBin *bin)
{
  std::map<unsigned int,GearLevelData>::const_iterator __for_begin; // [rsp+18h] [rbp-48h] BYREF
  std::map<unsigned int,GearLevelData>::const_iterator __for_end; // [rsp+20h] [rbp-40h] BYREF
  proto::GearScheduleBin *schedule_bin; // [rsp+28h] [rbp-38h]
  const std::map<unsigned int,GearLevelData> *__for_range; // [rsp+30h] [rbp-30h]
  proto::JigsawPictureDataBin *picture_data_bin; // [rsp+38h] [rbp-28h]
  const std::pair<unsigned int const,GearLevelData> *v8; // [rsp+40h] [rbp-20h]
  std::tuple_element<0,const std::pair<unsigned int const,GearLevelData> >::type *level_id; // [rsp+48h] [rbp-18h]
  std::tuple_element<1,const std::pair<unsigned int const,GearLevelData> >::type *level_data; // [rsp+50h] [rbp-10h]
  proto::GearStageBin *level_bin; // [rsp+58h] [rbp-8h]

  schedule_bin = proto::ActivityScheduleBin::mutable_gear_bin(bin);
  __for_range = &this->level_data_map_;
  __for_begin._M_node = std::map<unsigned int,GearLevelData>::begin(&this->level_data_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,GearLevelData>::end(&this->level_data_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v8 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,GearLevelData>>::operator*(&__for_begin);
    level_id = std::get<0ul,unsigned int const,GearLevelData>(v8);
    level_data = (std::tuple_element<1,const std::pair<unsigned int const,GearLevelData> >::type *)std::get<1ul,unsigned int const,GearLevelData>(v8);
    level_bin = proto::GearScheduleBin::add_level_bin_list(schedule_bin);
    GearLevelData::toBin(level_data, level_bin);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,GearLevelData>>::operator++(&__for_begin);
  }
  picture_data_bin = proto::GearScheduleBin::mutable_jigsaw_picture_data(schedule_bin);
  JigsawPictureData::toBin(&this->picture_content_, picture_data_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_finish_gear_level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->player_finish_gear_level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::GearScheduleBin::set_player_finish_gear_level(schedule_bin, this->player_finish_gear_level_);
  return 0;
};

// Line 111: range 000000001508778A-0000000015087B6D
int32_t __cdecl GearActivity::toClient(GearActivity *const this, proto::ActivityInfo *activity_info)
{
  common::milog::MiLogStream *v2; // rbx
  ActivityGearExcelConfigMgr *p_activity_gear_config_mgr; // rcx
  common::milog::MiLogStream *v5; // rax
  uint32_t open_day_index; // ecx
  uint32_t BeginTimeByOpenDay; // eax
  unsigned int val; // [rsp+1Ch] [rbp-94h] BYREF
  std::map<unsigned int,GearLevelData>::iterator __for_begin; // [rsp+20h] [rbp-90h] BYREF
  std::map<unsigned int,GearLevelData>::iterator __for_end; // [rsp+28h] [rbp-88h] BYREF
  proto::GearActivityDetailInfo *client_info; // [rsp+30h] [rbp-80h]
  std::map<unsigned int,GearLevelData> *__for_range; // [rsp+38h] [rbp-78h]
  proto::JigsawPictureData *jigsaw_info; // [rsp+40h] [rbp-70h]
  const std::pair<unsigned int const,GearLevelData> *v14; // [rsp+48h] [rbp-68h]
  std::tuple_element<0,const std::pair<unsigned int const,GearLevelData> >::type *level_id; // [rsp+50h] [rbp-60h]
  std::tuple_element<1,const std::pair<unsigned int const,GearLevelData> >::type *level_data; // [rsp+58h] [rbp-58h]
  proto::GearLevelData *client_level_info; // [rsp+60h] [rbp-50h]
  const data::ActivityGearLevelExcelConfig *gear_config_ptr; // [rsp+68h] [rbp-48h]
  std::shared_ptr<Config> v19; // [rsp+70h] [rbp-40h] BYREF
  common::milog::MiLogStream v20; // [rsp+80h] [rbp-30h] BYREF

  if ( BaseActivity::toClient(this, activity_info) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/gear_activity.cpp",
      "toClient",
      114);
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
    client_info = proto::ActivityInfo::mutable_gear_info(activity_info);
    __for_range = &this->level_data_map_;
    __for_begin._M_node = std::map<unsigned int,GearLevelData>::begin(&this->level_data_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,GearLevelData>::end(&this->level_data_map_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v14 = std::_Rb_tree_iterator<std::pair<unsigned int const,GearLevelData>>::operator*(&__for_begin);
      level_id = std::get<0ul,unsigned int const,GearLevelData>(v14);
      level_data = (std::tuple_element<1,const std::pair<unsigned int const,GearLevelData> >::type *)std::get<1ul,unsigned int const,GearLevelData>(v14);
      client_level_info = proto::GearActivityDetailInfo::add_gear_level_data_list(client_info);
      GearLevelData::toClient(level_data, client_level_info);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v19);
      p_activity_gear_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19)->design_config.txt_config_mgr.activity_gear_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)level_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)level_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)level_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      gear_config_ptr = data::ActivityGearExcelConfigMgrBase::findActivityGearLevelExcelConfig(
                          p_activity_gear_config_mgr,
                          *level_id);
      std::shared_ptr<Config>::~shared_ptr(&v19);
      if ( !gear_config_ptr )
      {
        common::milog::MiLogStream::create(
          &v20,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/gear_activity.cpp",
          "toClient",
          126);
        v5 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
               &v20,
               (const char (*)[31])"[GEAR] level_id not invaild : ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, level_id);
        common::milog::MiLogStream::~MiLogStream(&v20);
        return -1;
      }
      if ( *(_BYTE *)(((unsigned __int64)&gear_config_ptr->open_day_index >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&gear_config_ptr->open_day_index >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      open_day_index = gear_config_ptr->open_day_index;
      if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      BeginTimeByOpenDay = BaseActivity::getBeginTimeByOpenDay(this->schedule_id_, open_day_index);
      proto::GearLevelData::set_open_time(client_level_info, BeginTimeByOpenDay);
      std::_Rb_tree_iterator<std::pair<unsigned int const,GearLevelData>>::operator++(&__for_begin);
    }
    jigsaw_info = proto::GearActivityDetailInfo::mutable_jigsaw_picture_data(client_info);
    JigsawPictureData::toClient(&this->picture_content_, jigsaw_info);
    return 0;
  }
};

// Line 137: range 0000000015087B6E-0000000015087E0C
void __cdecl GearActivity::onPreStart(GearActivity *const this)
{
  uint32_t v1; // ecx
  std::unordered_map<unsigned int,data::ActivityGearLevelExcelConfig>::const_iterator __for_begin; // [rsp+10h] [rbp-50h] BYREF
  std::unordered_map<unsigned int,data::ActivityGearLevelExcelConfig>::const_iterator __for_end; // [rsp+18h] [rbp-48h] BYREF
  const ActivityGearExcelConfigMgr *config_mgr; // [rsp+20h] [rbp-40h]
  const std::unordered_map<unsigned int,data::ActivityGearLevelExcelConfig> *__for_range; // [rsp+28h] [rbp-38h]
  const std::pair<unsigned int const,data::ActivityGearLevelExcelConfig> *v6; // [rsp+30h] [rbp-30h]
  std::tuple_element<0,const std::pair<unsigned int const,data::ActivityGearLevelExcelConfig> >::type *level_id; // [rsp+38h] [rbp-28h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivityGearLevelExcelConfig> >::type *_; // [rsp+40h] [rbp-20h]
  GearLevelData *level_data; // [rsp+48h] [rbp-18h]
  std::shared_ptr<Config> v10; // [rsp+50h] [rbp-10h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v10);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v10)->design_config.txt_config_mgr.activity_gear_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v10);
  std::map<unsigned int,GearLevelData>::clear(&this->level_data_map_);
  JigsawPictureData::reset(&this->picture_content_);
  __for_range = &config_mgr->activity_gear_level_excel_config_map;
  __for_begin._M_cur = std::unordered_map<unsigned int,data::ActivityGearLevelExcelConfig>::begin(&config_mgr->activity_gear_level_excel_config_map)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,data::ActivityGearLevelExcelConfig>::end(&config_mgr->activity_gear_level_excel_config_map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ActivityGearLevelExcelConfig>,false>(
            &__for_begin,
            &__for_end) )
  {
    v6 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityGearLevelExcelConfig>,false,false>::operator*(&__for_begin);
    level_id = std::get<0ul,unsigned int const,data::ActivityGearLevelExcelConfig>(v6);
    _ = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivityGearLevelExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivityGearLevelExcelConfig>(v6);
    level_data = std::map<unsigned int,GearLevelData>::operator[](&this->level_data_map_, level_id);
    if ( *(_BYTE *)(((unsigned __int64)level_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)level_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)level_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v1 = *level_id;
    if ( *(_BYTE *)(((unsigned __int64)level_data >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)level_data & 7) + 3) >= *(_BYTE *)(((unsigned __int64)level_data >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(level_data);
    }
    level_data->level_id = v1;
    if ( *(_BYTE *)(((unsigned __int64)&level_data->is_open >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)level_data + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&level_data->is_open >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(&level_data->is_open);
    }
    level_data->is_open = 0;
    if ( *(_BYTE *)(((unsigned __int64)&level_data->is_finished >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)level_data + 5) & 7) >= *(_BYTE *)(((unsigned __int64)&level_data->is_finished >> 3)
                                                             + 0x7FFF8000) )
    {
      __asan_report_store1(&level_data->is_finished);
    }
    level_data->is_finished = 0;
    if ( *(_BYTE *)(((unsigned __int64)&level_data->shortest_time >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)level_data + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_data->shortest_time >> 3)
                                                               + 0x7FFF8000) )
    {
      __asan_report_store4(&level_data->shortest_time);
    }
    level_data->shortest_time = 0;
    if ( *(_BYTE *)(((unsigned __int64)&level_data->last_duration >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)level_data + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_data->last_duration >> 3)
                                                                + 0x7FFF8000) )
    {
      __asan_report_store4(&level_data->last_duration);
    }
    level_data->last_duration = 0;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityGearLevelExcelConfig>,false,false>::operator++(&__for_begin);
  }
};

// Line 154: range 0000000015087E0E-0000000015087E8A
void __cdecl GearActivity::onStart(GearActivity *const this)
{
  common::milog::MiLogStream v1; // [rsp+10h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v1,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/gear_activity.cpp",
    "onStart",
    155);
  common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
    &v1,
    (const char (*)[32])"[GEAR] SpiceActivity::onStart()");
  common::milog::MiLogStream::~MiLogStream(&v1);
};

// Line 159: range 0000000015087E8C-00000000150881FF
int32_t __cdecl GearActivity::execAction(GearActivity *const this, const data::NewActivityExec *action_exec)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // r13
  common::milog::MiLogStream *v6; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v8; // rax
  std::vector<std::string>::const_iterator __for_begin; // [rsp+10h] [rbp-A0h] BYREF
  std::vector<std::string>::const_iterator __for_end; // [rsp+18h] [rbp-98h] BYREF
  const std::vector<std::string> *__for_range; // [rsp+20h] [rbp-90h]
  const std::string *stage_id_str; // [rsp+28h] [rbp-88h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-80h] BYREF
  char v14[96]; // [rsp+50h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 stage_id:172";
  *(_QWORD *)(v2 + 16) = GearActivity::execAction;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( action_exec->type == NEW_ACTIVITY_ACTION_OPEN_GEAR_STAGE )
  {
    if ( std::vector<std::string>::size(&action_exec->param) )
    {
      __for_range = &action_exec->param;
      __for_begin._M_current = std::vector<std::string>::begin(&action_exec->param)._M_current;
      __for_end._M_current = std::vector<std::string>::end(&action_exec->param)._M_current;
      while ( __gnu_cxx::operator!=<std::string const*,std::vector<std::string>>(&__for_begin, &__for_end) )
      {
        stage_id_str = __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator*(&__for_begin);
        *(_DWORD *)(v2 + 32) = 0;
        if ( !common::tools::StringUtils::strToNum<unsigned int>(stage_id_str, (unsigned int *)(v2 + 32), 1)
          && GearActivity::tryopenStage(this, *(_DWORD *)(v2 + 32)) )
        {
          common::milog::MiLogStream::create(
            &v13,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/gear_activity.cpp",
            "execAction",
            179);
          v8 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                 &v13,
                 (const char (*)[39])"[GEAR] tryopenStage failed, stage_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 32));
          common::milog::MiLogStream::~MiLogStream(&v13);
          result = -1;
          goto LABEL_17;
        }
        __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator++(&__for_begin);
      }
      BaseActivity::notifyClientData(this, 0);
      result = 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/gear_activity.cpp",
        "execAction",
        166);
      v5 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
             &v13,
             (const char (*)[26])"[GEAR] action param size ");
      __for_end._M_current = (const std::string *)std::vector<std::string>::size(&action_exec->param);
      v6 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
             v5,
             (const unsigned __int64 *)&__for_end);
      common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v6, (const char (*)[12])off_256E81C0);
      common::milog::MiLogStream::~MiLogStream(&v13);
      result = -1;
    }
  }
  else
  {
    result = BaseActivity::execAction(this, action_exec);
  }
LABEL_17:
  if ( v14 == (char *)v2 )
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

// Line 193: range 0000000015088200-00000000150882B8
void __cdecl GearActivity::onClear(GearActivity *const this)
{
  std::map<unsigned int,GearLevelData>::clear(&this->level_data_map_);
  JigsawPictureData::reset(&this->picture_content_);
  if ( *(_BYTE *)(((unsigned __int64)&this->play_start_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->play_start_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->play_start_time_);
  }
  this->play_start_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_finish_gear_level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->player_finish_gear_level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->player_finish_gear_level_);
  }
  this->player_finish_gear_level_ = 0;
};

// Line 201: range 00000000150882BA-0000000015088313
void __cdecl GearActivity::onDailyRefresh(GearActivity *const this)
{
  if ( BaseActivity::isOpening(this, 0) && !BaseActivity::isSettled(this) )
    BaseActivity::notifyClientData(this, 0);
};

// Line 211: range 0000000015088314-00000000150886A3
int32_t __cdecl GearActivity::onGearActivityStartPlayGearReq(
        GearActivity *const this,
        const proto::GearActivityStartPlayGearReq *req,
        proto::GearActivityStartPlayGearRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::milog::MiLogStream *v8; // r13
  std::_Rb_tree_iterator<std::pair<unsigned int const,GearLevelData> >::pointer v9; // rax
  bool *p_is_open; // rax
  common::milog::MiLogStream *v11; // r13
  uint32_t Now; // esi
  std::map<unsigned int,GearLevelData>::key_type __x; // [rsp+2Ch] [rbp-A4h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,GearLevelData> >::_Self __y; // [rsp+30h] [rbp-A0h] BYREF
  GearLevelData *level_data; // [rsp+38h] [rbp-98h]
  common::milog::MiLogStream v16; // [rsp+40h] [rbp-90h] BYREF
  char v17[112]; // [rsp+60h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 8 iter:218";
  *(_QWORD *)(v3 + 16) = GearActivity::onGearActivityStartPlayGearReq;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  if ( !BaseActivity::isOpening(this, 0) || BaseActivity::isSettled(this) )
  {
    result = -1;
  }
  else
  {
    __x = proto::GearActivityStartPlayGearReq::level_id(req);
    *(std::map<unsigned int,GearLevelData>::iterator *)(v3 + 32) = std::map<unsigned int,GearLevelData>::find(
                                                                     &this->level_data_map_,
                                                                     &__x);
    __y._M_node = std::map<unsigned int,GearLevelData>::end(&this->level_data_map_)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,GearLevelData> >::_Self *)(v3 + 32),
           &__y) )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/gear_activity.cpp",
        "onGearActivityStartPlayGearReq",
        221);
      v8 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
             &v16,
             (const char (*)[33])"[GEAR] error level_id, level_id:");
      __x = proto::GearActivityStartPlayGearReq::level_id(req);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &__x);
      common::milog::MiLogStream::~MiLogStream(&v16);
      result = -1;
    }
    else
    {
      v9 = std::_Rb_tree_iterator<std::pair<unsigned int const,GearLevelData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,GearLevelData> > *const)(v3 + 32));
      level_data = &v9->second;
      p_is_open = &v9->second.is_open;
      if ( *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)p_is_open & 7) >= *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(p_is_open);
      }
      if ( !level_data->is_open )
      {
        common::milog::MiLogStream::create(
          &v16,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/gear_activity.cpp",
          "onGearActivityStartPlayGearReq",
          227);
        v11 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                &v16,
                (const char (*)[36])"[GEAR] level_id not open, stage_id:");
        __x = proto::GearActivityStartPlayGearReq::level_id(req);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &__x);
        common::milog::MiLogStream::~MiLogStream(&v16);
        result = -1;
      }
      else
      {
        Now = common::tools::TimeUtils::getNow();
        if ( *(_BYTE *)(((unsigned __int64)&this->play_start_time_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->play_start_time_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&this->play_start_time_);
        }
        this->play_start_time_ = Now;
        result = 0;
      }
    }
  }
  if ( v17 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 238: range 00000000150886A4-0000000015089E63
int32_t __cdecl GearActivity::onGearActivityFinishPlayGearReq(
        GearActivity *const this,
        const proto::GearActivityFinishPlayGearReq *req,
        proto::GearActivityFinishPlayGearRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int32_t v7; // r14d
  common::milog::MiLogStream *v8; // rbx
  std::_Rb_tree_iterator<std::pair<unsigned int const,GearLevelData> >::pointer v9; // rax
  bool *p_is_open; // rax
  common::milog::MiLogStream *v11; // rbx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rbx
  const google::protobuf::RepeatedPtrField<proto::GearColumnInfo> *v14; // rax
  common::milog::MiLogStream *v15; // rbx
  const google::protobuf::RepeatedPtrField<proto::GearColumnInfo> *v16; // rax
  ActivityGearExcelConfigMgr *p_activity_gear_config_mgr; // r14
  uint32_t v18; // eax
  common::milog::MiLogStream *v19; // r14
  std::map<unsigned int,unsigned int>::mapped_type *v20; // rax
  ActivityGearExcelConfigMgr *v21; // r15
  uint32_t v22; // r14d
  uint32_t v23; // eax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // r14
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  int v35; // ecx
  PlayerEventComp *EventComp; // r14
  bool *p_is_finished; // rax
  uint32_t *v38; // rdx
  uint32_t v39; // ecx
  std::map<unsigned int,GearLevelData>::size_type v40; // r14
  uint32_t v41; // edx
  uint32_t v42; // ecx
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGearFinishPlayGear,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v44; // r14
  google::protobuf::uint32 v45; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGearFinishPlayGear,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v46; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGearFinishPlayGear,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v47; // r14
  bool is_success; // al
  std::__shared_ptr_access<proto_log::PlayerLogBodyGearFinishPlayGear,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v49; // r14
  bool v50; // al
  std::__shared_ptr_access<proto_log::PlayerLogBodyGearFinishPlayGear,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v51; // rax
  google::protobuf::uint32 v52; // eax
  bool has_gear; // al
  google::protobuf::uint32 v54; // eax
  google::protobuf::uint32 v55; // eax
  bool is_overturn; // al
  Player *v57; // r14
  int32_t result; // eax
  std::string v59; // [rsp+0h] [rbp-220h]
  bool is_all_finished; // [rsp+2Fh] [rbp-1F1h]
  std::map<unsigned int,GearLevelData>::key_type __x; // [rsp+30h] [rbp-1F0h] BYREF
  uint32_t gear_ret; // [rsp+34h] [rbp-1ECh]
  uint32_t duration; // [rsp+38h] [rbp-1E8h]
  uint32_t have_count; // [rsp+3Ch] [rbp-1E4h]
  google::protobuf::RepeatedPtrField<proto::GearColumnInfo>::const_iterator __for_begin; // [rsp+40h] [rbp-1E0h] BYREF
  google::protobuf::RepeatedPtrField<proto::GearColumnInfo>::const_iterator __for_end; // [rsp+48h] [rbp-1D8h] BYREF
  GearLevelData *level_data; // [rsp+50h] [rbp-1D0h]
  const google::protobuf::RepeatedPtrField<proto::GearColumnInfo> *__for_range; // [rsp+58h] [rbp-1C8h]
  std::map<unsigned int,unsigned int> *__for_range_0; // [rsp+60h] [rbp-1C0h]
  std::map<unsigned int,GearLevelData> *__for_range_1; // [rsp+68h] [rbp-1B8h]
  const std::pair<unsigned int const,GearLevelData> *v71; // [rsp+70h] [rbp-1B0h]
  std::tuple_element<0,const std::pair<unsigned int const,GearLevelData> >::type *_; // [rsp+78h] [rbp-1A8h]
  std::tuple_element<1,const std::pair<unsigned int const,GearLevelData> >::type *data; // [rsp+80h] [rbp-1A0h]
  const google::protobuf::RepeatedPtrField<proto::GearColumnInfo> *__for_range_2; // [rsp+88h] [rbp-198h]
  const proto::GearColumnInfo *column_info_0; // [rsp+90h] [rbp-190h]
  proto_log::GearColumnInfo *log_column_info; // [rsp+98h] [rbp-188h]
  const std::pair<unsigned int const,unsigned int> *v77; // [rsp+A0h] [rbp-180h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *gear_id; // [rsp+A8h] [rbp-178h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *use_gear_count; // [rsp+B0h] [rbp-170h]
  const proto::GearColumnInfo *column_info; // [rsp+B8h] [rbp-168h]
  std::shared_ptr<google::protobuf::Message> v81; // [rsp+C0h] [rbp-160h] BYREF
  common::milog::MiLogStream v82; // [rsp+D0h] [rbp-150h] BYREF
  char v83[304]; // [rsp+F0h] [rbp-130h] BYREF

  *(&v59._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v59._anon_0._M_allocated_capacity = (std::string::size_type)req;
  v59._M_string_length = (std::string::size_type)rsp_0;
  v3 = (unsigned __int64)v83;
  v59._M_dataplus._M_p = v83;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 48 1 10 holder:362 64 4 7 now:302 80 8 8 iter:245 112 16 11 log_ptr:363 144 16 13 event_ptr:32"
                        "8 176 48 22 use_gear_count_map:272";
  *(_QWORD *)(v3 + 16) = GearActivity::onGearActivityFinishPlayGearReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = 61956;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862724] = 62194;
  v5[536862725] = 62194;
  v5[536862727] = -202116109;
  if ( !BaseActivity::isOpening(this, 0) || BaseActivity::isSettled(this) )
  {
    v7 = -1;
  }
  else
  {
    __x = proto::GearActivityFinishPlayGearReq::level_id(req);
    *(std::map<unsigned int,GearLevelData>::iterator *)(v3 + 80) = std::map<unsigned int,GearLevelData>::find(
                                                                     &this->level_data_map_,
                                                                     &__x);
    __for_end.it_ = (void *const *)std::map<unsigned int,GearLevelData>::end(&this->level_data_map_)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,GearLevelData> >::_Self *)(v3 + 80),
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,GearLevelData> >::_Self *)&__for_end) )
    {
      common::milog::MiLogStream::create(
        &v82,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/gear_activity.cpp",
        "onGearActivityFinishPlayGearReq",
        248);
      v8 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
             &v82,
             (const char (*)[33])"[GEAR] error level_id, level_id:");
      __x = proto::GearActivityFinishPlayGearReq::level_id(req);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &__x);
      common::milog::MiLogStream::~MiLogStream(&v82);
      v7 = -1;
    }
    else
    {
      v9 = std::_Rb_tree_iterator<std::pair<unsigned int const,GearLevelData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,GearLevelData> > *const)(v3 + 80));
      level_data = &v9->second;
      p_is_open = &v9->second.is_open;
      if ( *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)p_is_open & 7) >= *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(p_is_open);
      }
      if ( !level_data->is_open )
      {
        common::milog::MiLogStream::create(
          &v82,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/gear_activity.cpp",
          "onGearActivityFinishPlayGearReq",
          254);
        v11 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                &v82,
                (const char (*)[36])"[GEAR] level_id not open, stage_id:");
        __x = proto::GearActivityFinishPlayGearReq::level_id(req);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &__x);
        common::milog::MiLogStream::~MiLogStream(&v82);
        v7 = -1;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->play_start_time_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->play_start_time_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        if ( this->play_start_time_ )
        {
          v14 = proto::GearActivityFinishPlayGearReq::gear_column_info_list(req);
          if ( (unsigned int)google::protobuf::RepeatedPtrField<proto::GearColumnInfo>::size(v14) <= 0xF )
          {
            std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v3 + 176));
            gear_ret = 0;
            __for_range = proto::GearActivityFinishPlayGearReq::gear_column_info_list(req);
            __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::GearColumnInfo>::begin(__for_range).it_;
            __for_end.it_ = google::protobuf::RepeatedPtrField<proto::GearColumnInfo>::end(__for_range).it_;
            while ( google::protobuf::internal::RepeatedPtrIterator<proto::GearColumnInfo const>::operator!=(
                      &__for_begin,
                      &__for_end) )
            {
              column_info = google::protobuf::internal::RepeatedPtrIterator<proto::GearColumnInfo const>::operator*(&__for_begin);
              if ( proto::GearColumnInfo::has_gear(column_info) )
              {
                ServiceBox::findService<GameserverService>();
                GameserverService::getConfig((GameserverService *const)&v81);
                p_activity_gear_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v81)->design_config.txt_config_mgr.activity_gear_config_mgr;
                v18 = proto::GearColumnInfo::gear_id(column_info);
                LOBYTE(p_activity_gear_config_mgr) = data::ActivityGearExcelConfigMgrBase::findActivityGearGadgetGearExcelConfig(
                                                       p_activity_gear_config_mgr,
                                                       v18) == 0LL;
                std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v81);
                if ( (_BYTE)p_activity_gear_config_mgr )
                {
                  common::milog::MiLogStream::create(
                    &v82,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/activity/gear_activity.cpp",
                    "onGearActivityFinishPlayGearReq",
                    282);
                  v19 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
                          &v82,
                          (const char (*)[61])"[GEAR] findActivityGearGadgetGearExcelConfig fails, gear_id:");
                  __x = proto::GearColumnInfo::gear_id(column_info);
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &__x);
                  common::milog::MiLogStream::~MiLogStream(&v82);
                  gear_ret = -1;
                }
                __x = proto::GearColumnInfo::gear_id(column_info);
                v20 = std::map<unsigned int,unsigned int>::operator[](
                        (std::map<unsigned int,unsigned int> *const)(v3 + 176),
                        &__x);
                if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                ++*v20;
              }
              google::protobuf::internal::RepeatedPtrIterator<proto::GearColumnInfo const>::operator++(&__for_begin);
            }
            __for_range_0 = (std::map<unsigned int,unsigned int> *)(v3 + 176);
            __for_begin.it_ = (void *const *)std::map<unsigned int,unsigned int>::begin((std::map<unsigned int,unsigned int> *const)(v3 + 176))._M_node;
            __for_end.it_ = (void *const *)std::map<unsigned int,unsigned int>::end(__for_range_0)._M_node;
            while ( std::operator!=(
                      (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_begin,
                      (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_end) )
            {
              v77 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin);
              gear_id = std::get<0ul,unsigned int const,unsigned int>(v77);
              use_gear_count = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v77);
              ServiceBox::findService<GameserverService>();
              GameserverService::getConfig((GameserverService *const)&v81);
              v21 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v81)->design_config.txt_config_mgr.activity_gear_config_mgr;
              if ( *(_BYTE *)(((unsigned __int64)gear_id >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)gear_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)gear_id >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              v22 = *gear_id;
              v23 = proto::GearActivityFinishPlayGearReq::level_id(req);
              have_count = ActivityGearExcelConfigMgr::findGearCntByLevelIdAndGearId(v21, v23, v22);
              std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v81);
              if ( *(_BYTE *)(((unsigned __int64)use_gear_count >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)use_gear_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)use_gear_count >> 3)
                                                                                 + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              if ( have_count < *use_gear_count )
              {
                common::milog::MiLogStream::create(
                  &v82,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/activity/gear_activity.cpp",
                  "onGearActivityFinishPlayGearReq",
                  292);
                v24 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                        &v82,
                        (const char (*)[37])"[GEAR] use too much gear, gear_id : ");
                v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, gear_id);
                v26 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                        v25,
                        (const char (*)[12])", level_id:");
                __x = proto::GearActivityFinishPlayGearReq::level_id(req);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &__x);
                common::milog::MiLogStream::~MiLogStream(&v82);
                gear_ret = -1;
              }
              std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin);
            }
            if ( gear_ret )
            {
              common::milog::MiLogStream::create(
                &v82,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/gear_activity.cpp",
                "onGearActivityFinishPlayGearReq",
                298);
              common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                &v82,
                (const char (*)[35])"[GEAR] gear_id or count not valid!");
              common::milog::MiLogStream::~MiLogStream(&v82);
              v7 = gear_ret;
            }
            else
            {
              *(_DWORD *)(v3 + 64) = common::tools::TimeUtils::getNow();
              if ( *(_BYTE *)(((unsigned __int64)&this->play_start_time_ >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&this->play_start_time_ >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4();
              }
              if ( this->play_start_time_ > *(_DWORD *)(v3 + 64) )
                goto LABEL_48;
              if ( *(_BYTE *)(((unsigned __int64)&this->last_finish_time_ >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_finish_time_ >> 3)
                                                                    + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              if ( this->last_finish_time_ < *(_DWORD *)(v3 + 64) )
              {
                if ( *(_BYTE *)(((unsigned __int64)&this->last_finish_time_ >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_finish_time_ >> 3)
                                                                      + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                if ( this->last_finish_time_ == *(_DWORD *)(v3 + 64) )
                {
                  common::milog::MiLogStream::create(
                    &v82,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/activity/gear_activity.cpp",
                    "onGearActivityFinishPlayGearReq",
                    312);
                  v32 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                          &v82,
                          (const char (*)[43])"[GEAR]finish too often! last_finish_time_:");
                  v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v32,
                          &this->last_finish_time_);
                  v34 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v33, (const char (*)[7])", now:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v34,
                    (const unsigned int *)(v3 + 64));
                  common::milog::MiLogStream::~MiLogStream(&v82);
                  v7 = -1;
                }
                else
                {
                  v35 = *(_DWORD *)(v3 + 64);
                  if ( *(_BYTE *)(((unsigned __int64)&this->play_start_time_ >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&this->play_start_time_ >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_load4();
                  }
                  duration = v35 - this->play_start_time_;
                  if ( *(_BYTE *)(((unsigned __int64)&level_data->last_duration >> 3) + 0x7FFF8000) != 0
                    && (char)((((_BYTE)level_data + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_data->last_duration >> 3)
                                                                              + 0x7FFF8000) )
                  {
                    __asan_report_store4(&level_data->last_duration);
                  }
                  level_data->last_duration = duration;
                  if ( proto::GearActivityFinishPlayGearReq::is_success(req) )
                  {
                    if ( *(_BYTE *)(((unsigned __int64)&level_data->is_finished >> 3) + 0x7FFF8000) != 0
                      && (((unsigned __int8)level_data + 5) & 7) >= *(_BYTE *)(((unsigned __int64)&level_data->is_finished >> 3)
                                                                             + 0x7FFF8000) )
                    {
                      __asan_report_load1(&level_data->is_finished);
                    }
                    if ( !level_data->is_finished )
                      goto LABEL_64;
                    if ( *(_BYTE *)(((unsigned __int64)&level_data->shortest_time >> 3) + 0x7FFF8000) != 0
                      && (char)((((_BYTE)level_data + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_data->shortest_time >> 3)
                                                                               + 0x7FFF8000) )
                    {
                      __asan_report_load4();
                    }
                    if ( duration < level_data->shortest_time )
                    {
LABEL_64:
                      if ( *(_BYTE *)(((unsigned __int64)&level_data->shortest_time >> 3) + 0x7FFF8000) != 0
                        && (char)((((_BYTE)level_data + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_data->shortest_time >> 3)
                                                                                 + 0x7FFF8000) )
                      {
                        __asan_report_store4(&level_data->shortest_time);
                      }
                      level_data->shortest_time = duration;
                    }
                    if ( *(_BYTE *)(((unsigned __int64)&level_data->is_finished >> 3) + 0x7FFF8000) != 0
                      && (((unsigned __int8)level_data + 5) & 7) >= *(_BYTE *)(((unsigned __int64)&level_data->is_finished >> 3)
                                                                             + 0x7FFF8000) )
                    {
                      __asan_report_store1(&level_data->is_finished);
                    }
                    level_data->is_finished = 1;
                    __x = proto::GearActivityFinishPlayGearReq::level_id(req);
                    common::tools::perf::make_shared<GearFinishStageEvent,unsigned int>(
                      (unsigned int *)(v3 + 144),
                      &__x);
                    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                      __asan_report_load8();
                    EventComp = Player::getEventComp(this->player_);
                    std::shared_ptr<BaseEvent>::shared_ptr<GearFinishStageEvent,void>(
                      (std::shared_ptr<BaseEvent> *const)&v81,
                      (const std::shared_ptr<GearFinishStageEvent> *)(v3 + 144));
                    PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v81);
                    std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v81);
                    if ( *(_BYTE *)(((unsigned __int64)&this->picture_content_ >> 3) + 0x7FFF8000) != 0
                      && (((unsigned __int8)this - 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->picture_content_ >> 3)
                                                                        + 0x7FFF8000) )
                    {
                      __asan_report_load1(&this->picture_content_);
                    }
                    if ( !this->picture_content_.is_open )
                    {
                      is_all_finished = 1;
                      __for_range_1 = &this->level_data_map_;
                      __for_begin.it_ = (void *const *)std::map<unsigned int,GearLevelData>::begin(&this->level_data_map_)._M_node;
                      __for_end.it_ = (void *const *)std::map<unsigned int,GearLevelData>::end(__for_range_1)._M_node;
                      while ( std::operator!=(
                                (const std::_Rb_tree_iterator<std::pair<unsigned int const,GearLevelData> >::_Self *)&__for_begin,
                                (const std::_Rb_tree_iterator<std::pair<unsigned int const,GearLevelData> >::_Self *)&__for_end) )
                      {
                        v71 = std::_Rb_tree_iterator<std::pair<unsigned int const,GearLevelData>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,GearLevelData> > *const)&__for_begin);
                        _ = std::get<0ul,unsigned int const,GearLevelData>(v71);
                        data = (std::tuple_element<1,const std::pair<unsigned int const,GearLevelData> >::type *)std::get<1ul,unsigned int const,GearLevelData>(v71);
                        p_is_finished = &data->is_finished;
                        if ( *(_BYTE *)(((unsigned __int64)p_is_finished >> 3) + 0x7FFF8000) != 0
                          && ((unsigned __int8)p_is_finished & 7) >= *(_BYTE *)(((unsigned __int64)p_is_finished >> 3)
                                                                              + 0x7FFF8000) )
                        {
                          __asan_report_load1(p_is_finished);
                        }
                        if ( !data->is_finished )
                        {
                          is_all_finished = 0;
                          break;
                        }
                        std::_Rb_tree_iterator<std::pair<unsigned int const,GearLevelData>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,GearLevelData> > *const)&__for_begin);
                      }
                      if ( is_all_finished )
                      {
                        if ( *(_BYTE *)(((unsigned __int64)&this->picture_content_ >> 3) + 0x7FFF8000) != 0
                          && (((unsigned __int8)this - 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->picture_content_ >> 3)
                                                                            + 0x7FFF8000) )
                        {
                          __asan_report_store1(&this->picture_content_);
                        }
                        this->picture_content_.is_open = 1;
                      }
                    }
                    __x = proto::GearActivityFinishPlayGearReq::level_id(req);
                    v38 = (uint32_t *)std::max<unsigned int>(&__x, &this->player_finish_gear_level_);
                    if ( *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000) != 0
                      && (char)(((unsigned __int8)v38 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_load4();
                    }
                    v39 = *v38;
                    if ( *(_BYTE *)(((unsigned __int64)&this->player_finish_gear_level_ >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((unsigned __int64)&this->player_finish_gear_level_ >> 3) + 0x7FFF8000) <= 3 )
                    {
                      __asan_report_store4(&this->player_finish_gear_level_);
                    }
                    this->player_finish_gear_level_ = v39;
                    v40 = proto::GearActivityFinishPlayGearReq::level_id(req);
                    if ( v40 < std::map<unsigned int,GearLevelData>::size(&this->level_data_map_) )
                    {
                      v41 = proto::GearActivityFinishPlayGearReq::level_id(req) + 1;
                      GearActivity::tryopenStage(this, v41);
                    }
                    BaseActivity::notifyClientData(this, 0);
                    std::shared_ptr<GearFinishStageEvent>::~shared_ptr((std::shared_ptr<GearFinishStageEvent> *const)(v3 + 144));
                  }
                  if ( *(_BYTE *)(((unsigned __int64)&this->play_start_time_ >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&this->play_start_time_ >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_store4(&this->play_start_time_);
                  }
                  this->play_start_time_ = 0;
                  v42 = *(_DWORD *)(v3 + 64);
                  if ( *(_BYTE *)(((unsigned __int64)&this->last_finish_time_ >> 3) + 0x7FFF8000) != 0
                    && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_finish_time_ >> 3)
                                                                        + 0x7FFF8000) )
                  {
                    __asan_report_store4(&this->last_finish_time_);
                  }
                  this->last_finish_time_ = v42;
                  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8();
                  BasicComp = Player::getBasicComp(this->player_);
                  PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v82, BasicComp);
                  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48), 0xE24u, v59);
                  std::string::~string(&v82);
                  common::tools::perf::make_shared<proto_log::PlayerLogBodyGearFinishPlayGear>();
                  v44 = std::__shared_ptr_access<proto_log::PlayerLogBodyGearFinishPlayGear,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGearFinishPlayGear,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
                  v45 = proto::GearActivityFinishPlayGearReq::level_id((const proto::GearActivityFinishPlayGearReq *const)v59._anon_0._M_allocated_capacity);
                  proto_log::PlayerLogBodyGearFinishPlayGear::set_stage_id(v44, v45);
                  v46 = std::__shared_ptr_access<proto_log::PlayerLogBodyGearFinishPlayGear,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGearFinishPlayGear,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
                  proto_log::PlayerLogBodyGearFinishPlayGear::set_use_time(v46, duration);
                  v47 = std::__shared_ptr_access<proto_log::PlayerLogBodyGearFinishPlayGear,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGearFinishPlayGear,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
                  is_success = proto::GearActivityFinishPlayGearReq::is_success((const proto::GearActivityFinishPlayGearReq *const)v59._anon_0._M_allocated_capacity);
                  proto_log::PlayerLogBodyGearFinishPlayGear::set_result(v47, is_success);
                  v49 = std::__shared_ptr_access<proto_log::PlayerLogBodyGearFinishPlayGear,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGearFinishPlayGear,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
                  v50 = proto::GearActivityFinishPlayGearReq::use_clue((const proto::GearActivityFinishPlayGearReq *const)v59._anon_0._M_allocated_capacity);
                  proto_log::PlayerLogBodyGearFinishPlayGear::set_use_clue(v49, v50);
                  __for_range_2 = proto::GearActivityFinishPlayGearReq::gear_column_info_list((const proto::GearActivityFinishPlayGearReq *const)v59._anon_0._M_allocated_capacity);
                  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::GearColumnInfo>::begin(__for_range_2).it_;
                  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::GearColumnInfo>::end(__for_range_2).it_;
                  while ( google::protobuf::internal::RepeatedPtrIterator<proto::GearColumnInfo const>::operator!=(
                            &__for_begin,
                            &__for_end) )
                  {
                    column_info_0 = google::protobuf::internal::RepeatedPtrIterator<proto::GearColumnInfo const>::operator*(&__for_begin);
                    v51 = std::__shared_ptr_access<proto_log::PlayerLogBodyGearFinishPlayGear,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGearFinishPlayGear,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
                    log_column_info = proto_log::PlayerLogBodyGearFinishPlayGear::add_gear_column_info_list(v51);
                    v52 = proto::GearColumnInfo::gear_column_index(column_info_0);
                    proto_log::GearColumnInfo::set_gear_column_index(log_column_info, v52);
                    has_gear = proto::GearColumnInfo::has_gear(column_info_0);
                    proto_log::GearColumnInfo::set_has_gear(log_column_info, has_gear);
                    v54 = proto::GearColumnInfo::gear_id(column_info_0);
                    proto_log::GearColumnInfo::set_gear_id(log_column_info, v54);
                    v55 = proto::GearColumnInfo::placement_layer(column_info_0);
                    proto_log::GearColumnInfo::set_placement_layer(log_column_info, v55);
                    is_overturn = proto::GearColumnInfo::is_overturn(column_info_0);
                    proto_log::GearColumnInfo::set_is_overturn(log_column_info, is_overturn);
                    google::protobuf::internal::RepeatedPtrIterator<proto::GearColumnInfo const>::operator++(&__for_begin);
                  }
                  if ( *(_BYTE *)(((*(&v59._anon_0._M_allocated_capacity + 1) + 24) >> 3) + 0x7FFF8000) )
                    __asan_report_load8();
                  v57 = *(Player **)(*(&v59._anon_0._M_allocated_capacity + 1) + 24);
                  std::shared_ptr<google::protobuf::Message>::shared_ptr(&v81, 0LL);
                  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyGearFinishPlayGear,void>(
                    (std::shared_ptr<google::protobuf::Message> *const)(v3 + 144),
                    (const std::shared_ptr<proto_log::PlayerLogBodyGearFinishPlayGear> *)(v3 + 112));
                  Player::printStatLog(v57, (MessagePtr *)(v3 + 144), &v81, 0xEu);
                  std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)(v3 + 144));
                  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v81);
                  v7 = 0;
                  std::shared_ptr<proto_log::PlayerLogBodyGearFinishPlayGear>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyGearFinishPlayGear> *const)(v3 + 112));
                  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48));
                }
              }
              else
              {
LABEL_48:
                common::milog::MiLogStream::create(
                  &v82,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/activity/gear_activity.cpp",
                  "onGearActivityFinishPlayGearReq",
                  306);
                v27 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                        &v82,
                        (const char (*)[36])"[GEAR]time error! play_start_time_:");
                v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v27,
                        &this->play_start_time_);
                v29 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v28, (const char (*)[7])", now:");
                v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v29,
                        (const unsigned int *)(v3 + 64));
                v31 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                        v30,
                        (const char (*)[21])", last_finish_time_:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, &this->last_finish_time_);
                common::milog::MiLogStream::~MiLogStream(&v82);
                v7 = -1;
              }
            }
            std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v3 + 176));
          }
          else
          {
            common::milog::MiLogStream::create(
              &v82,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/gear_activity.cpp",
              "onGearActivityFinishPlayGearReq",
              267);
            v15 = common::milog::MiLogStream::operator<<<char [78],(char *[78])0>(
                    &v82,
                    (const char (*)[78])"[GEAR] gear_column_info_ size too large, req.gear_column_info_list().size(): ");
            v16 = proto::GearActivityFinishPlayGearReq::gear_column_info_list(req);
            __x = google::protobuf::RepeatedPtrField<proto::GearColumnInfo>::size(v16);
            common::milog::MiLogStream::operator<<<int,(int *)0>(v15, (const int *)&__x);
            common::milog::MiLogStream::~MiLogStream(&v82);
            v7 = -1;
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v82,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/gear_activity.cpp",
            "onGearActivityFinishPlayGearReq",
            260);
          v12 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
                  &v82,
                  (const char (*)[57])"[GEAR] player not in gear play! play_start_time_ is zero");
          v13 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v12, (const char (*)[12])", level_id:");
          __x = proto::GearActivityFinishPlayGearReq::level_id(req);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &__x);
          common::milog::MiLogStream::~MiLogStream(&v82);
          v7 = -1;
        }
      }
    }
  }
  result = v7;
  if ( v59._M_dataplus._M_p == (std::string::pointer)v3 )
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

// Line 383: range 0000000015089E64-0000000015089FC8
int32_t __cdecl GearActivity::onGearActivityStartPlayPictureReq(
        GearActivity *const this,
        const proto::GearActivityStartPlayPictureReq *req,
        proto::GearActivityStartPlayPictureRsp *rsp_0)
{
  uint32_t Now; // esi
  common::milog::MiLogStream v6; // [rsp+20h] [rbp-30h] BYREF

  if ( !BaseActivity::isOpening(this, 0) || BaseActivity::isSettled(this) )
    return -1;
  if ( *(_BYTE *)(((unsigned __int64)&this->picture_content_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->picture_content_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->picture_content_);
  }
  if ( !this->picture_content_.is_open )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/gear_activity.cpp",
      "onGearActivityStartPlayPictureReq",
      391);
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
      &v6,
      (const char (*)[32])"[GEAR] Jigsaw picture not open.");
    common::milog::MiLogStream::~MiLogStream(&v6);
    return -1;
  }
  else
  {
    Now = common::tools::TimeUtils::getNow();
    if ( *(_BYTE *)(((unsigned __int64)&this->play_start_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->play_start_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->play_start_time_);
    }
    this->play_start_time_ = Now;
    return 0;
  }
};

// Line 401: range 0000000015089FCA-000000001508AA13
int32_t __cdecl GearActivity::onGearActivityFinishPlayPictureReq(
        GearActivity *const this,
        const proto::GearActivityFinishPlayPictureReq *req,
        proto::GearActivityFinishPlayPictureRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  int32_t v7; // r14d
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  int v11; // ecx
  PlayerEventComp *EventComp; // r14
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGearFinishJigsaw,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGearFinishJigsaw,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // r14
  bool is_success; // al
  Player *player; // r14
  int32_t result; // eax
  std::string v19; // [rsp+0h] [rbp-110h]
  const proto::GearActivityFinishPlayPictureReq *const reqa; // [rsp+10h] [rbp-100h]
  GearActivity *thisa; // [rsp+18h] [rbp-F8h]
  uint32_t duration; // [rsp+20h] [rbp-F0h]
  uint32_t quest_state_trigger_id; // [rsp+24h] [rbp-ECh]
  ActivityGearExcelConfigMgr *gear_config_mgr; // [rsp+28h] [rbp-E8h]
  std::shared_ptr<google::protobuf::Message> v25; // [rsp+30h] [rbp-E0h] BYREF
  common::milog::MiLogStream v26; // [rsp+40h] [rbp-D0h] BYREF
  char v27[176]; // [rsp+60h] [rbp-B0h] BYREF

  *(&v19._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v19._anon_0._M_allocated_capacity = (std::string::size_type)req;
  v19._M_string_length = (std::string::size_type)rsp_0;
  v3 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 1 10 holder:461 48 4 7 now:419 64 16 11 log_ptr:462 96 16 13 event_ptr:450";
  *(_QWORD *)(v3 + 16) = GearActivity::onGearActivityFinishPlayPictureReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556927;
  v5[536862722] = -219021312;
  v5[536862723] = -202178560;
  if ( !BaseActivity::isOpening(this, 0) || BaseActivity::isSettled(this) )
  {
    v7 = -1;
    goto LABEL_54;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->picture_content_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->picture_content_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->picture_content_);
  }
  if ( !this->picture_content_.is_open )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/gear_activity.cpp",
      "onGearActivityFinishPlayPictureReq",
      409);
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
      &v26,
      (const char (*)[32])"[GEAR] Jigsaw picture not open.");
    common::milog::MiLogStream::~MiLogStream(&v26);
    v7 = -1;
    goto LABEL_54;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->play_start_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->play_start_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( !this->play_start_time_ )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/gear_activity.cpp",
      "onGearActivityFinishPlayPictureReq",
      415);
    common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
      &v26,
      (const char (*)[62])"[GEAR] player not in picture play!, play_start_time_ is zero.");
    common::milog::MiLogStream::~MiLogStream(&v26);
    v7 = -1;
    goto LABEL_54;
  }
  *(_DWORD *)(v3 + 48) = common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)&this->play_start_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->play_start_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->play_start_time_ > *(_DWORD *)(v3 + 48) )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/gear_activity.cpp",
      "onGearActivityFinishPlayPictureReq",
      422);
    v8 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v26,
           (const char (*)[36])"[GEAR]time error! play_start_time_:");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->play_start_time_);
    v10 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v9, (const char (*)[7])", now:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v26);
    v7 = -1;
    goto LABEL_54;
  }
  v11 = *(_DWORD *)(v3 + 48);
  if ( *(_BYTE *)(((unsigned __int64)&this->play_start_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->play_start_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  duration = v11 - this->play_start_time_;
  if ( *(_BYTE *)(((unsigned __int64)&this->picture_content_.last_duration >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->picture_content_.last_duration >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->picture_content_.last_duration);
  }
  this->picture_content_.last_duration = duration;
  if ( proto::GearActivityFinishPlayPictureReq::is_success(req) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v25);
    gear_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v25)->design_config.txt_config_mgr.activity_gear_config_mgr;
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v25);
    quest_state_trigger_id = ActivityGearExcelConfigMgr::getJigsawQuestStateTriggerId(gear_config_mgr);
    if ( !quest_state_trigger_id )
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/gear_activity.cpp",
        "onGearActivityFinishPlayPictureReq",
        434);
      common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
        &v26,
        (const char (*)[59])"[GEAR] quest_state_trigger_id is zeor, please check excel.");
      common::milog::MiLogStream::~MiLogStream(&v26);
      v7 = -1;
      goto LABEL_54;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->picture_content_.is_finished >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this - 35) & 7) >= *(_BYTE *)(((unsigned __int64)&this->picture_content_.is_finished >> 3)
                                                        + 0x7FFF8000) )
    {
      __asan_report_load1(&this->picture_content_.is_finished);
    }
    if ( !this->picture_content_.is_finished )
      goto LABEL_35;
    if ( *(_BYTE *)(((unsigned __int64)&this->picture_content_.shortest_time >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->picture_content_.shortest_time >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( duration < this->picture_content_.shortest_time )
    {
LABEL_35:
      if ( *(_BYTE *)(((unsigned __int64)&this->picture_content_.shortest_time >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->picture_content_.shortest_time >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->picture_content_.shortest_time);
      }
      this->picture_content_.shortest_time = duration;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->picture_content_.is_finished >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this - 35) & 7) >= *(_BYTE *)(((unsigned __int64)&this->picture_content_.is_finished >> 3)
                                                        + 0x7FFF8000) )
    {
      __asan_report_load1(&this->picture_content_.is_finished);
    }
    if ( !this->picture_content_.is_finished )
      BaseActivity::updateQuestContent(this, quest_state_trigger_id);
    common::tools::perf::make_shared<GearFinishJigsawPictureEvent>();
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    EventComp = Player::getEventComp(this->player_);
    std::shared_ptr<BaseEvent>::shared_ptr<GearFinishJigsawPictureEvent,void>(
      (std::shared_ptr<BaseEvent> *const)&v25,
      (const std::shared_ptr<GearFinishJigsawPictureEvent> *)(v3 + 96));
    PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v25);
    std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v25);
    if ( *(_BYTE *)(((unsigned __int64)&this->picture_content_.is_finished >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this - 35) & 7) >= *(_BYTE *)(((unsigned __int64)&this->picture_content_.is_finished >> 3)
                                                        + 0x7FFF8000) )
    {
      __asan_report_store1(&this->picture_content_.is_finished);
    }
    this->picture_content_.is_finished = 1;
    BaseActivity::notifyClientData(this, 0);
    std::shared_ptr<GearFinishJigsawPictureEvent>::~shared_ptr((std::shared_ptr<GearFinishJigsawPictureEvent> *const)(v3 + 96));
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->play_start_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->play_start_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->play_start_time_);
  }
  this->play_start_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Player::getBasicComp(this->player_);
  PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v26, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32), 0xE25u, v19);
  std::string::~string(&v26);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyGearFinishJigsaw>();
  v14 = std::__shared_ptr_access<proto_log::PlayerLogBodyGearFinishJigsaw,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGearFinishJigsaw,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  proto_log::PlayerLogBodyGearFinishJigsaw::set_use_time(v14, duration);
  v15 = std::__shared_ptr_access<proto_log::PlayerLogBodyGearFinishJigsaw,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGearFinishJigsaw,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  is_success = proto::GearActivityFinishPlayPictureReq::is_success(reqa);
  proto_log::PlayerLogBodyGearFinishJigsaw::set_result(v15, is_success);
  if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  player = thisa->player_;
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&v25, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyGearFinishJigsaw,void>(
    (std::shared_ptr<google::protobuf::Message> *const)(v3 + 96),
    (const std::shared_ptr<proto_log::PlayerLogBodyGearFinishJigsaw> *)(v3 + 64));
  Player::printStatLog(player, (MessagePtr *)(v3 + 96), &v25, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)(v3 + 96));
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v25);
  v7 = 0;
  std::shared_ptr<proto_log::PlayerLogBodyGearFinishJigsaw>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyGearFinishJigsaw> *const)(v3 + 64));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32));
LABEL_54:
  result = v7;
  if ( v27 == (char *)v3 )
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

// Line 471: range 000000001508AA14-000000001508AF95
__int64 __fastcall GearActivity::tryopenStage(GearActivity *const this, uint32_t stage_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v7; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,GearLevelData> >::pointer v8; // rax
  bool *p_is_open; // rax
  uint32_t DayIndexAfterStart; // ecx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,GearLevelData> >::_Self __y; // [rsp+10h] [rbp-D0h] BYREF
  const ActivityGearExcelConfigMgr *gear_config_mgr; // [rsp+18h] [rbp-C8h]
  const data::ActivityGearLevelExcelConfig *gear_stage_ptr; // [rsp+20h] [rbp-C0h]
  GearLevelData *level_data; // [rsp+28h] [rbp-B8h]
  std::shared_ptr<Config> v19; // [rsp+30h] [rbp-B0h] BYREF
  common::milog::MiLogStream v20; // [rsp+40h] [rbp-A0h] BYREF
  char v21[128]; // [rsp+60h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 stage_id:470 64 8 8 iter:480";
  *(_QWORD *)(v2 + 16) = GearActivity::tryopenStage;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = stage_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v19);
  gear_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19)->design_config.txt_config_mgr.activity_gear_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v19);
  gear_stage_ptr = data::ActivityGearExcelConfigMgrBase::findActivityGearLevelExcelConfig(
                     gear_config_mgr,
                     *(_DWORD *)(v2 + 48));
  if ( gear_stage_ptr )
  {
    *(std::map<unsigned int,GearLevelData>::iterator *)(v2 + 64) = std::map<unsigned int,GearLevelData>::find(
                                                                     &this->level_data_map_,
                                                                     (const std::map<unsigned int,GearLevelData>::key_type *)(v2 + 48));
    __y._M_node = std::map<unsigned int,GearLevelData>::end(&this->level_data_map_)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,GearLevelData> >::_Self *)(v2 + 64),
           &__y) )
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/gear_activity.cpp",
        "tryopenStage",
        483);
      v7 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
             &v20,
             (const char (*)[37])"[GEAR] stage_id not found, stage_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v20);
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v8 = std::_Rb_tree_iterator<std::pair<unsigned int const,GearLevelData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,GearLevelData> > *const)(v2 + 64));
      level_data = &v8->second;
      p_is_open = &v8->second.is_open;
      if ( *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)p_is_open & 7) >= *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(p_is_open);
      }
      if ( level_data->is_open )
      {
        result = 0LL;
      }
      else
      {
        DayIndexAfterStart = BaseActivity::getDayIndexAfterStart(this);
        if ( *(_BYTE *)(((unsigned __int64)&gear_stage_ptr->open_day_index >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&gear_stage_ptr->open_day_index >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        if ( DayIndexAfterStart >= gear_stage_ptr->open_day_index )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_finish_gear_level_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->player_finish_gear_level_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          if ( this->player_finish_gear_level_ == *(_DWORD *)(v2 + 48) - 1 )
          {
            if ( *(_BYTE *)(((unsigned __int64)&level_data->is_open >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)level_data + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&level_data->is_open >> 3)
                                                                     + 0x7FFF8000) )
            {
              __asan_report_store1(&level_data->is_open);
            }
            level_data->is_open = 1;
            result = 0LL;
          }
          else
          {
            common::milog::MiLogStream::create(
              &v20,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/activity/gear_activity.cpp",
              "tryopenStage",
              501);
            v12 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
                    &v20,
                    (const char (*)[60])"[GEAR] pre stage not finished, stage can't open. stage_id: ");
            v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v12,
                    (const unsigned int *)(v2 + 48));
            v14 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                    v13,
                    (const char (*)[29])", player_finish_gear_level_:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v14,
              &this->player_finish_gear_level_);
            common::milog::MiLogStream::~MiLogStream(&v20);
            result = 0LL;
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v20,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/gear_activity.cpp",
            "tryopenStage",
            495);
          v11 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                  &v20,
                  (const char (*)[47])"[GEAR] gear not reach next openday. stage_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 48));
          common::milog::MiLogStream::~MiLogStream(&v20);
          result = 0LL;
        }
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/gear_activity.cpp",
      "tryopenStage",
      476);
    v5 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
           &v20,
           (const char (*)[57])"[GEAR] findActivityGearLevelExcelConfig fails, stage_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v20);
    result = 0xFFFFFFFFLL;
  }
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
  return result;
};
