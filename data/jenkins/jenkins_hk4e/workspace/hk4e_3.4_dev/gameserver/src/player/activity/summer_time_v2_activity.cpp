// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/summer_time_v2_activity.cpp

// Line 40: range 0000000017FE7A96-0000000017FE7B6B
int32_t __cdecl SummerTimeV2DungeonStageData::init(SummerTimeV2DungeonStageData *const this, uint32_t dungeon_stage_id)
{
  __int64 v2; // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx

  v2 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7)
                                                                                              + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3, v2);
  this->stage_id = dungeon_stage_id;
  v3 = ((_BYTE)this + 4) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_open, v3, v4);
  this->is_open = 0;
  v5 = ((_BYTE)this + 5) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->is_prev_dungeon_succeed >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->is_prev_dungeon_succeed >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->is_prev_dungeon_succeed, v5, v6);
  this->is_prev_dungeon_succeed = 0;
  return 0;
};

// Line 49: range 0000000017FE7B6C-0000000017FE7C6A
int32_t __cdecl SummerTimeV2DungeonStageData::fromBin(
        SummerTimeV2DungeonStageData *const this,
        const proto::SummerTimeV2DungeonStageBin *stage_bin)
{
  uint32_t v2; // ecx
  char v3; // dl
  __int64 v4; // rdx
  bool is_open; // cl
  char v6; // dl
  __int64 v7; // rdx
  bool is_prev_dungeon_succeed; // cl
  char v9; // dl
  __int64 v10; // rdx
  const proto::SummerTimeV2DungeonStageBin *stage_bina; // [rsp+0h] [rbp-10h]

  stage_bina = stage_bin;
  v2 = proto::SummerTimeV2DungeonStageBin::stage_id(stage_bin);
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  LOBYTE(stage_bin) = v3 != 0;
  v4 = (v3 != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7) + 3) >= v3);
  if ( (_BYTE)v4 )
    __asan_report_store4(this, stage_bin, v4);
  this->stage_id = v2;
  is_open = proto::SummerTimeV2DungeonStageBin::is_open(stage_bina);
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000);
  LOBYTE(stage_bin) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this + 4) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->is_open, stage_bin, v7);
  this->is_open = is_open;
  is_prev_dungeon_succeed = proto::SummerTimeV2DungeonStageBin::is_prev_dungeon_succeed(stage_bina);
  v9 = *(_BYTE *)(((unsigned __int64)&this->is_prev_dungeon_succeed >> 3) + 0x7FFF8000);
  LOBYTE(stage_bin) = v9 != 0;
  v10 = (v9 != 0) & (unsigned __int8)((((unsigned __int8)this + 5) & 7) >= v9);
  if ( (_BYTE)v10 )
    __asan_report_store1(&this->is_prev_dungeon_succeed, stage_bin, v10);
  this->is_prev_dungeon_succeed = is_prev_dungeon_succeed;
  return 0;
};

// Line 57: range 0000000017FE7C6C-0000000017FE7D6F
int32_t __cdecl SummerTimeV2DungeonStageData::toBin(
        const SummerTimeV2DungeonStageData *const this,
        proto::SummerTimeV2DungeonStageBin *stage_bin)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  proto::SummerTimeV2DungeonStageBin::set_stage_id(stage_bin, this->stage_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_open);
  }
  proto::SummerTimeV2DungeonStageBin::set_is_open(stage_bin, this->is_open);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_prev_dungeon_succeed >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 5) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_prev_dungeon_succeed >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_prev_dungeon_succeed);
  }
  proto::SummerTimeV2DungeonStageBin::set_is_prev_dungeon_succeed(stage_bin, this->is_prev_dungeon_succeed);
  return 0;
};

// Line 65: range 0000000017FE7D70-0000000017FE7E73
int32_t __cdecl SummerTimeV2DungeonStageData::toClient(
        const SummerTimeV2DungeonStageData *const this,
        proto::SummerTimeV2DungeonStageInfo *stage_info)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  proto::SummerTimeV2DungeonStageInfo::set_stage_id(stage_info, this->stage_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_open);
  }
  proto::SummerTimeV2DungeonStageInfo::set_is_open(stage_info, this->is_open);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_prev_dungeon_succeed >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 5) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_prev_dungeon_succeed >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_prev_dungeon_succeed);
  }
  proto::SummerTimeV2DungeonStageInfo::set_is_prev_dungeon_succeed(stage_info, this->is_prev_dungeon_succeed);
  return 0;
};

// Line 74: range 0000000017FE7E74-0000000017FE7F4F
int32_t __cdecl SummerTimeV2BoatStageData::init(SummerTimeV2BoatStageData *const this, uint32_t boat_stage_id)
{
  __int64 v2; // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rdx

  v2 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7)
                                                                                              + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3, v2);
  this->stage_id = boat_stage_id;
  v3 = ((_BYTE)this + 4) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_open, v3, v4);
  this->is_open = 0;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->best_score >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->best_score >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store4(&this->best_score, (((_BYTE)this + 8) & 7u) + 3, v5);
  this->best_score = 0;
  return 0;
};

// Line 83: range 0000000017FE7F50-0000000017FE8051
int32_t __cdecl SummerTimeV2BoatStageData::fromBin(
        SummerTimeV2BoatStageData *const this,
        const proto::SummerTimeV2BoatStageBin *stage_bin)
{
  uint32_t v2; // ecx
  char v3; // dl
  __int64 v4; // rdx
  bool is_open; // cl
  char v6; // dl
  __int64 v7; // rdx
  uint32_t v8; // ecx
  char v9; // dl
  __int64 v10; // rdx
  const proto::SummerTimeV2BoatStageBin *stage_bina; // [rsp+0h] [rbp-10h]

  stage_bina = stage_bin;
  v2 = proto::SummerTimeV2BoatStageBin::stage_id(stage_bin);
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  LOBYTE(stage_bin) = v3 != 0;
  v4 = (v3 != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7) + 3) >= v3);
  if ( (_BYTE)v4 )
    __asan_report_store4(this, stage_bin, v4);
  this->stage_id = v2;
  is_open = proto::SummerTimeV2BoatStageBin::is_open(stage_bina);
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000);
  LOBYTE(stage_bin) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this + 4) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->is_open, stage_bin, v7);
  this->is_open = is_open;
  v8 = proto::SummerTimeV2BoatStageBin::best_score(stage_bina);
  v9 = *(_BYTE *)(((unsigned __int64)&this->best_score >> 3) + 0x7FFF8000);
  LOBYTE(stage_bin) = v9 != 0;
  v10 = (v9 != 0) & (unsigned __int8)((char)((((_BYTE)this + 8) & 7) + 3) >= v9);
  if ( (_BYTE)v10 )
    __asan_report_store4(&this->best_score, stage_bin, v10);
  this->best_score = v8;
  return 0;
};

// Line 91: range 0000000017FE8052-0000000017FE8154
int32_t __cdecl SummerTimeV2BoatStageData::toBin(
        const SummerTimeV2BoatStageData *const this,
        proto::SummerTimeV2BoatStageBin *stage_bin)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  proto::SummerTimeV2BoatStageBin::set_stage_id(stage_bin, this->stage_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_open);
  }
  proto::SummerTimeV2BoatStageBin::set_is_open(stage_bin, this->is_open);
  if ( *(_BYTE *)(((unsigned __int64)&this->best_score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->best_score >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->best_score);
  }
  proto::SummerTimeV2BoatStageBin::set_best_score(stage_bin, this->best_score);
  return 0;
};

// Line 99: range 0000000017FE8156-0000000017FE8258
int32_t __cdecl SummerTimeV2BoatStageData::toClient(
        const SummerTimeV2BoatStageData *const this,
        proto::SummerTimeV2BoatStageInfo *stage_info)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  proto::SummerTimeV2BoatStageInfo::set_stage_id(stage_info, this->stage_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_open);
  }
  proto::SummerTimeV2BoatStageInfo::set_is_open(stage_info, this->is_open);
  if ( *(_BYTE *)(((unsigned __int64)&this->best_score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->best_score >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->best_score);
  }
  proto::SummerTimeV2BoatStageInfo::set_best_score(stage_info, this->best_score);
  return 0;
};

// Line 110: range 0000000017FE825A-0000000017FE866E
int32_t __cdecl SummerTimeV2Activity::fromScheduleBin(
        SummerTimeV2Activity *const this,
        const proto::ActivityScheduleBin *bin)
{
  common::milog::MiLogStream *v2; // rbx
  google::protobuf::RepeatedPtrField<proto::SummerTimeV2DungeonStageBin>::const_iterator *p_for_end; // rsi
  common::milog::MiLogStream *v4; // rbx
  unsigned int v5; // eax
  __int64 v6; // rdx
  char v7; // al
  google::protobuf::uint32 v8; // ebx
  std::map<unsigned int,SummerTimeV2DungeonStageData>::key_type *p_k; // rsi
  std::map<proto::VirtualItem,unsigned int>::mapped_type *v10; // rax
  google::protobuf::uint32 *v11; // rdx
  char v12; // cl
  __int64 v13; // rdx
  char v14; // al
  std::map<unsigned int,SummerTimeV2DungeonStageData>::key_type __k; // [rsp+14h] [rbp-7Ch] BYREF
  google::protobuf::RepeatedPtrField<proto::SummerTimeV2DungeonStageBin>::const_iterator __for_begin; // [rsp+18h] [rbp-78h] BYREF
  google::protobuf::RepeatedPtrField<proto::SummerTimeV2DungeonStageBin>::const_iterator __for_end; // [rsp+20h] [rbp-70h] BYREF
  const proto::SummerTimeV2ScheduleBin *schedule_bin; // [rsp+28h] [rbp-68h]
  const google::protobuf::RepeatedPtrField<proto::SummerTimeV2DungeonStageBin> *__for_range; // [rsp+30h] [rbp-60h]
  const google::protobuf::RepeatedPtrField<proto::SummerTimeV2BoatStageBin> *__for_range_0; // [rsp+38h] [rbp-58h]
  const proto::SummerTimeV2BoatStageBin *boat_stage_bin; // [rsp+40h] [rbp-50h]
  SummerTimeV2BoatStageData *boat_stage_data; // [rsp+48h] [rbp-48h]
  const proto::SummerTimeV2DungeonStageBin *dungeon_stage_bin; // [rsp+50h] [rbp-40h]
  SummerTimeV2DungeonStageData *dungeon_stage_data; // [rsp+58h] [rbp-38h]
  common::milog::MiLogStream v26; // [rsp+60h] [rbp-30h] BYREF

  std::map<unsigned int,SummerTimeV2DungeonStageData>::clear(&this->dungeon_stage_open_map_);
  std::map<unsigned int,SummerTimeV2BoatStageData>::clear(&this->boat_stage_open_map_);
  schedule_bin = proto::ActivityScheduleBin::summer_time_v2_bin(bin);
  __for_range = proto::SummerTimeV2ScheduleBin::dungeon_stage_bin_list(schedule_bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::SummerTimeV2DungeonStageBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::SummerTimeV2DungeonStageBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::SummerTimeV2DungeonStageBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    dungeon_stage_bin = google::protobuf::internal::RepeatedPtrIterator<proto::SummerTimeV2DungeonStageBin const>::operator*(&__for_begin);
    __k = proto::SummerTimeV2DungeonStageBin::stage_id(dungeon_stage_bin);
    dungeon_stage_data = std::map<unsigned int,SummerTimeV2DungeonStageData>::operator[](
                           &this->dungeon_stage_open_map_,
                           &__k);
    if ( SummerTimeV2DungeonStageData::fromBin(dungeon_stage_data, dungeon_stage_bin) )
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/summer_time_v2_activity.cpp",
        "fromScheduleBin",
        120);
      v2 = common::milog::MiLogStream::operator<<<char [73],(char *[73])0>(
             &v26,
             (const char (*)[73])"[SUMMER_TIME_V2] SummerTimeV2DungeonStageData fromBin failed, stage_id: ");
      __k = proto::SummerTimeV2DungeonStageBin::stage_id(dungeon_stage_bin);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &__k);
      common::milog::MiLogStream::~MiLogStream(&v26);
    }
    google::protobuf::internal::RepeatedPtrIterator<proto::SummerTimeV2DungeonStageBin const>::operator++(&__for_begin);
  }
  __for_range_0 = proto::SummerTimeV2ScheduleBin::boat_stage_bin_list(schedule_bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::SummerTimeV2BoatStageBin>::begin(__for_range_0).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::SummerTimeV2BoatStageBin>::end(__for_range_0).it_;
  while ( 1 )
  {
    p_for_end = &__for_end;
    if ( !google::protobuf::internal::RepeatedPtrIterator<proto::SummerTimeV2BoatStageBin const>::operator!=(
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::SummerTimeV2BoatStageBin> *const)&__for_begin,
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::SummerTimeV2BoatStageBin>::iterator *)&__for_end) )
      break;
    boat_stage_bin = google::protobuf::internal::RepeatedPtrIterator<proto::SummerTimeV2BoatStageBin const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::SummerTimeV2BoatStageBin> *const)&__for_begin);
    __k = proto::SummerTimeV2BoatStageBin::stage_id(boat_stage_bin);
    boat_stage_data = std::map<unsigned int,SummerTimeV2BoatStageData>::operator[](&this->boat_stage_open_map_, &__k);
    if ( SummerTimeV2BoatStageData::fromBin(boat_stage_data, boat_stage_bin) )
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/summer_time_v2_activity.cpp",
        "fromScheduleBin",
        130);
      v4 = common::milog::MiLogStream::operator<<<char [70],(char *[70])0>(
             &v26,
             (const char (*)[70])"[SUMMER_TIME_V2] SummerTimeV2BoatStageData fromBin failed, stage_id: ");
      __k = proto::SummerTimeV2BoatStageBin::stage_id(boat_stage_bin);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &__k);
      common::milog::MiLogStream::~MiLogStream(&v26);
    }
    google::protobuf::internal::RepeatedPtrIterator<proto::SummerTimeV2BoatStageBin const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::SummerTimeV2BoatStageBin> *const)&__for_begin);
  }
  LOBYTE(v5) = proto::SummerTimeV2ScheduleBin::is_content_closed(schedule_bin);
  v6 = v5;
  v7 = *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000);
  if ( v7 < 0 )
  {
    LOBYTE(p_for_end) = v7 != 0;
    __asan_report_store1(&this->is_content_closed_, p_for_end, v6);
  }
  this->is_content_closed_ = v6;
  std::map<proto::VirtualItem,unsigned int>::clear(&this->activity_coin_map_);
  v8 = proto::SummerTimeV2ScheduleBin::coin(schedule_bin);
  __k = 141;
  p_k = &__k;
  v10 = std::map<proto::VirtualItem,unsigned int>::operator[](
          &this->activity_coin_map_,
          (std::map<proto::VirtualItem,unsigned int>::key_type *)&__k);
  v11 = v10;
  v12 = *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)(((unsigned __int8)v10 & 7) + 3) >= v12 )
  {
    LOBYTE(p_k) = v12 != 0;
    __asan_report_store4(v10, p_k, v10);
  }
  *v11 = v8;
  v13 = proto::SummerTimeV2ScheduleBin::taken_reward_count(schedule_bin);
  v14 = *(_BYTE *)(((unsigned __int64)&this->taken_reward_count_ >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(p_k) = v14 != 0;
    __asan_report_store4(&this->taken_reward_count_, p_k, v13);
  }
  this->taken_reward_count_ = v13;
  return 0;
};

// Line 144: range 0000000017FE8670-0000000017FE8B45
int32_t __cdecl SummerTimeV2Activity::toScheduleBin(
        const SummerTimeV2Activity *const this,
        proto::ActivityScheduleBin *bin)
{
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream *v3; // rax
  std::map<unsigned int,SummerTimeV2DungeonStageData>::const_iterator __for_begin; // [rsp+18h] [rbp-B8h] BYREF
  std::map<unsigned int,SummerTimeV2DungeonStageData>::const_iterator __for_end; // [rsp+20h] [rbp-B0h] BYREF
  proto::SummerTimeV2ScheduleBin *schedule_bin; // [rsp+28h] [rbp-A8h]
  const std::map<unsigned int,SummerTimeV2DungeonStageData> *__for_range; // [rsp+30h] [rbp-A0h]
  const std::map<unsigned int,SummerTimeV2BoatStageData> *__for_range_0; // [rsp+38h] [rbp-98h]
  const std::map<proto::VirtualItem,unsigned int> *__for_range_1; // [rsp+40h] [rbp-90h]
  const std::pair<const proto::VirtualItem,unsigned int> *v11; // [rsp+48h] [rbp-88h]
  std::tuple_element<0,const std::pair<const proto::VirtualItem,unsigned int> >::type *coin_type; // [rsp+50h] [rbp-80h]
  std::tuple_element<1,const std::pair<const proto::VirtualItem,unsigned int> >::type *coin_num; // [rsp+58h] [rbp-78h]
  const std::pair<unsigned int const,SummerTimeV2BoatStageData> *v14; // [rsp+60h] [rbp-70h]
  std::tuple_element<0,const std::pair<unsigned int const,SummerTimeV2BoatStageData> >::type *stage_id_0; // [rsp+68h] [rbp-68h]
  std::tuple_element<1,const std::pair<unsigned int const,SummerTimeV2BoatStageData> >::type *boat_stage_data; // [rsp+70h] [rbp-60h]
  proto::SummerTimeV2BoatStageBin *boat_stage_bin; // [rsp+78h] [rbp-58h]
  const std::pair<unsigned int const,SummerTimeV2DungeonStageData> *v18; // [rsp+80h] [rbp-50h]
  std::tuple_element<0,const std::pair<unsigned int const,SummerTimeV2DungeonStageData> >::type *stage_id; // [rsp+88h] [rbp-48h]
  std::tuple_element<1,const std::pair<unsigned int const,SummerTimeV2DungeonStageData> >::type *dungeon_stage_data; // [rsp+90h] [rbp-40h]
  proto::SummerTimeV2DungeonStageBin *dungeon_stage_bin; // [rsp+98h] [rbp-38h]
  common::milog::MiLogStream v22; // [rsp+A0h] [rbp-30h] BYREF

  schedule_bin = proto::ActivityScheduleBin::mutable_summer_time_v2_bin(bin);
  __for_range = &this->dungeon_stage_open_map_;
  __for_begin._M_node = std::map<unsigned int,SummerTimeV2DungeonStageData>::begin(&this->dungeon_stage_open_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,SummerTimeV2DungeonStageData>::end(&this->dungeon_stage_open_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v18 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,SummerTimeV2DungeonStageData>>::operator*(&__for_begin);
    stage_id = std::get<0ul,unsigned int const,SummerTimeV2DungeonStageData>(v18);
    dungeon_stage_data = (std::tuple_element<1,const std::pair<unsigned int const,SummerTimeV2DungeonStageData> >::type *)std::get<1ul,unsigned int const,SummerTimeV2DungeonStageData>(v18);
    dungeon_stage_bin = proto::SummerTimeV2ScheduleBin::add_dungeon_stage_bin_list(schedule_bin);
    if ( SummerTimeV2DungeonStageData::toBin(dungeon_stage_data, dungeon_stage_bin) )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/summer_time_v2_activity.cpp",
        "toScheduleBin",
        152);
      v2 = common::milog::MiLogStream::operator<<<char [71],(char *[71])0>(
             &v22,
             (const char (*)[71])"[SUMMER_TIME_V2] SummerTimeV2DungeonStageData toBin failed, stage_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, stage_id);
      common::milog::MiLogStream::~MiLogStream(&v22);
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,SummerTimeV2DungeonStageData>>::operator++(&__for_begin);
  }
  __for_range_0 = &this->boat_stage_open_map_;
  __for_begin._M_node = std::map<unsigned int,SummerTimeV2BoatStageData>::begin(&this->boat_stage_open_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,SummerTimeV2BoatStageData>::end(__for_range_0)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,SummerTimeV2BoatStageData> >::_Self *)&__for_begin,
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,SummerTimeV2BoatStageData> >::_Self *)&__for_end) )
  {
    v14 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,SummerTimeV2BoatStageData>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,SummerTimeV2BoatStageData> > *const)&__for_begin);
    stage_id_0 = std::get<0ul,unsigned int const,SummerTimeV2BoatStageData>(v14);
    boat_stage_data = (std::tuple_element<1,const std::pair<unsigned int const,SummerTimeV2BoatStageData> >::type *)std::get<1ul,unsigned int const,SummerTimeV2BoatStageData>(v14);
    boat_stage_bin = proto::SummerTimeV2ScheduleBin::add_boat_stage_bin_list(schedule_bin);
    if ( SummerTimeV2BoatStageData::toBin(boat_stage_data, boat_stage_bin) )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/summer_time_v2_activity.cpp",
        "toScheduleBin",
        162);
      v3 = common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(
             &v22,
             (const char (*)[68])"[SUMMER_TIME_V2] SummerTimeV2BoatStageData toBin failed, stage_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, stage_id_0);
      common::milog::MiLogStream::~MiLogStream(&v22);
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,SummerTimeV2BoatStageData>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,SummerTimeV2BoatStageData> > *const)&__for_begin);
  }
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  proto::SummerTimeV2ScheduleBin::set_is_content_closed(schedule_bin, this->is_content_closed_);
  __for_range_1 = &this->activity_coin_map_;
  __for_begin._M_node = std::map<proto::VirtualItem,unsigned int>::begin(&this->activity_coin_map_)._M_node;
  __for_end._M_node = std::map<proto::VirtualItem,unsigned int>::end(__for_range_1)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<std::pair<const proto::VirtualItem,unsigned int> >::_Self *)&__for_begin,
            (const std::_Rb_tree_const_iterator<std::pair<const proto::VirtualItem,unsigned int> >::_Self *)&__for_end) )
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<proto::VirtualItem const,unsigned int>>::operator*((const std::_Rb_tree_const_iterator<std::pair<const proto::VirtualItem,unsigned int> > *const)&__for_begin);
    coin_type = std::get<0ul,proto::VirtualItem const,unsigned int>(v11);
    coin_num = (std::tuple_element<1,const std::pair<const proto::VirtualItem,unsigned int> >::type *)std::get<1ul,proto::VirtualItem const,unsigned int>(v11);
    if ( *(_BYTE *)(((unsigned __int64)coin_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)coin_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)coin_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(coin_type);
    }
    if ( *coin_type == ITEM_VIRTUAL_SUMMER_TIME_V2_COIN )
    {
      if ( *(_BYTE *)(((unsigned __int64)coin_num >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)coin_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)coin_num >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(coin_num);
      }
      proto::SummerTimeV2ScheduleBin::set_coin(schedule_bin, *coin_num);
    }
    std::_Rb_tree_const_iterator<std::pair<proto::VirtualItem const,unsigned int>>::operator++((std::_Rb_tree_const_iterator<std::pair<const proto::VirtualItem,unsigned int> > *const)&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->taken_reward_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->taken_reward_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->taken_reward_count_);
  }
  proto::SummerTimeV2ScheduleBin::set_taken_reward_count(schedule_bin, this->taken_reward_count_);
  return 0;
};

// Line 181: range 0000000017FE8B46-0000000017FE9358
int32_t __cdecl SummerTimeV2Activity::toClient(SummerTimeV2Activity *const this, proto::ActivityInfo *activity_info)
{
  common::milog::MiLogStream *v2; // rbx
  const ActivitySummerTimeV2ExcelConfigMgr *v4; // rcx
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  uint32_t day_index; // ecx
  uint32_t BeginTimeByOpenDay; // eax
  const ActivitySummerTimeV2ExcelConfigMgr *v9; // rcx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  uint32_t v12; // ecx
  uint32_t v13; // eax
  uint32_t CurDungeonStageRewardLimit; // eax
  unsigned int val; // [rsp+1Ch] [rbp-C4h] BYREF
  std::map<unsigned int,SummerTimeV2DungeonStageData>::iterator __for_begin; // [rsp+20h] [rbp-C0h] BYREF
  std::map<unsigned int,SummerTimeV2DungeonStageData>::iterator __for_end; // [rsp+28h] [rbp-B8h] BYREF
  const ActivitySummerTimeV2ExcelConfigMgr *config_mgr; // [rsp+30h] [rbp-B0h]
  proto::SummerTimeV2DetailInfo *detail_info; // [rsp+38h] [rbp-A8h]
  std::map<unsigned int,SummerTimeV2DungeonStageData> *__for_range; // [rsp+40h] [rbp-A0h]
  std::map<unsigned int,SummerTimeV2BoatStageData> *__for_range_0; // [rsp+48h] [rbp-98h]
  const std::pair<unsigned int const,SummerTimeV2BoatStageData> *v22; // [rsp+50h] [rbp-90h]
  std::tuple_element<0,const std::pair<unsigned int const,SummerTimeV2BoatStageData> >::type *stage_id_0; // [rsp+58h] [rbp-88h]
  std::tuple_element<1,const std::pair<unsigned int const,SummerTimeV2BoatStageData> >::type *boat_stage_data; // [rsp+60h] [rbp-80h]
  const data::SummerTimeV2BoatStageExcelConfig *boat_config_ptr; // [rsp+68h] [rbp-78h]
  proto::SummerTimeV2BoatStageInfo *boat_stage_info; // [rsp+70h] [rbp-70h]
  const std::pair<unsigned int const,SummerTimeV2DungeonStageData> *v27; // [rsp+78h] [rbp-68h]
  std::tuple_element<0,const std::pair<unsigned int const,SummerTimeV2DungeonStageData> >::type *stage_id; // [rsp+80h] [rbp-60h]
  std::tuple_element<1,const std::pair<unsigned int const,SummerTimeV2DungeonStageData> >::type *dungeon_stage_data; // [rsp+88h] [rbp-58h]
  const data::SummerTimeV2DungeonStageExcelConfig *dungeon_config_ptr; // [rsp+90h] [rbp-50h]
  proto::SummerTimeV2DungeonStageInfo *dungeon_stage_info; // [rsp+98h] [rbp-48h]
  std::shared_ptr<Config> v32; // [rsp+A0h] [rbp-40h] BYREF
  common::milog::MiLogStream v33; // [rsp+B0h] [rbp-30h] BYREF

  if ( BaseActivity::toClient(this, activity_info) )
  {
    common::milog::MiLogStream::create(
      &v33,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/summer_time_v2_activity.cpp",
      "toClient",
      184);
    v2 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
           &v33,
           (const char (*)[53])"[SUMMER_TIME_V2] BaseActivity::toClient fails, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
    common::milog::MiLogStream::~MiLogStream(&v33);
    return -1;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v32);
    config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v32)->design_config.txt_config_mgr.activity_summer_time_v2_mgr;
    std::shared_ptr<Config>::~shared_ptr(&v32);
    detail_info = proto::ActivityInfo::mutable_summer_time_v2_info(activity_info);
    __for_range = &this->dungeon_stage_open_map_;
    __for_begin._M_node = std::map<unsigned int,SummerTimeV2DungeonStageData>::begin(&this->dungeon_stage_open_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,SummerTimeV2DungeonStageData>::end(&this->dungeon_stage_open_map_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v27 = std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2DungeonStageData>>::operator*(&__for_begin);
      stage_id = std::get<0ul,unsigned int const,SummerTimeV2DungeonStageData>(v27);
      dungeon_stage_data = (std::tuple_element<1,const std::pair<unsigned int const,SummerTimeV2DungeonStageData> >::type *)std::get<1ul,unsigned int const,SummerTimeV2DungeonStageData>(v27);
      v4 = config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)stage_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(stage_id);
      }
      dungeon_config_ptr = data::ActivitySummerTimeV2ExcelConfigMgrBase::findSummerTimeV2DungeonStageExcelConfig(
                             v4,
                             *stage_id);
      if ( !dungeon_config_ptr )
      {
        common::milog::MiLogStream::create(
          &v33,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/summer_time_v2_activity.cpp",
          "toClient",
          194);
        v5 = common::milog::MiLogStream::operator<<<char [76],(char *[76])0>(
               &v33,
               (const char (*)[76])"[SUMMER_TIME_V2] findSummerTimeV2DungeonStageExcelConfig failed, stage_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, stage_id);
        common::milog::MiLogStream::~MiLogStream(&v33);
        return -1;
      }
      dungeon_stage_info = proto::SummerTimeV2DetailInfo::add_dungeon_stage_info_list(detail_info);
      if ( SummerTimeV2DungeonStageData::toClient(dungeon_stage_data, dungeon_stage_info) )
      {
        common::milog::MiLogStream::create(
          &v33,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/summer_time_v2_activity.cpp",
          "toClient",
          200);
        v6 = common::milog::MiLogStream::operator<<<char [74],(char *[74])0>(
               &v33,
               (const char (*)[74])"[SUMMER_TIME_V2] SummerTimeV2DungeonStageData toClient failed, stage_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, stage_id);
        common::milog::MiLogStream::~MiLogStream(&v33);
        return -1;
      }
      if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->day_index >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)dungeon_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->day_index >> 3)
                                                                          + 0x7FFF8000) )
      {
        __asan_report_load4(&dungeon_config_ptr->day_index);
      }
      day_index = dungeon_config_ptr->day_index;
      if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->schedule_id_);
      }
      BeginTimeByOpenDay = BaseActivity::getBeginTimeByOpenDay(this->schedule_id_, day_index);
      proto::SummerTimeV2DungeonStageInfo::set_open_time(dungeon_stage_info, BeginTimeByOpenDay);
      std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2DungeonStageData>>::operator++(&__for_begin);
    }
    __for_range_0 = &this->boat_stage_open_map_;
    __for_begin._M_node = std::map<unsigned int,SummerTimeV2BoatStageData>::begin(&this->boat_stage_open_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,SummerTimeV2BoatStageData>::end(__for_range_0)._M_node;
    while ( std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2BoatStageData> >::_Self *)&__for_begin,
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2BoatStageData> >::_Self *)&__for_end) )
    {
      v22 = std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2BoatStageData>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2BoatStageData> > *const)&__for_begin);
      stage_id_0 = std::get<0ul,unsigned int const,SummerTimeV2BoatStageData>(v22);
      boat_stage_data = (std::tuple_element<1,const std::pair<unsigned int const,SummerTimeV2BoatStageData> >::type *)std::get<1ul,unsigned int const,SummerTimeV2BoatStageData>(v22);
      v9 = config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)stage_id_0 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)stage_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)stage_id_0 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(stage_id_0);
      }
      boat_config_ptr = data::ActivitySummerTimeV2ExcelConfigMgrBase::findSummerTimeV2BoatStageExcelConfig(
                          v9,
                          *stage_id_0);
      if ( !boat_config_ptr )
      {
        common::milog::MiLogStream::create(
          &v33,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/summer_time_v2_activity.cpp",
          "toClient",
          210);
        v10 = common::milog::MiLogStream::operator<<<char [73],(char *[73])0>(
                &v33,
                (const char (*)[73])"[SUMMER_TIME_V2] findSummerTimeV2BoatStageExcelConfig failed, stage_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, stage_id_0);
        common::milog::MiLogStream::~MiLogStream(&v33);
        return -1;
      }
      boat_stage_info = proto::SummerTimeV2DetailInfo::add_boat_stage_info_list(detail_info);
      if ( SummerTimeV2BoatStageData::toClient(boat_stage_data, boat_stage_info) )
      {
        common::milog::MiLogStream::create(
          &v33,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/summer_time_v2_activity.cpp",
          "toClient",
          216);
        v11 = common::milog::MiLogStream::operator<<<char [71],(char *[71])0>(
                &v33,
                (const char (*)[71])"[SUMMER_TIME_V2] SummerTimeV2BoatStageData toClient failed, stage_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, stage_id_0);
        common::milog::MiLogStream::~MiLogStream(&v33);
        return -1;
      }
      if ( *(_BYTE *)(((unsigned __int64)&boat_config_ptr->day_index >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)boat_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&boat_config_ptr->day_index >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4(&boat_config_ptr->day_index);
      }
      v12 = boat_config_ptr->day_index;
      if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->schedule_id_);
      }
      v13 = BaseActivity::getBeginTimeByOpenDay(this->schedule_id_, v12);
      proto::SummerTimeV2BoatStageInfo::set_open_time(boat_stage_info, v13);
      std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2BoatStageData>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2BoatStageData> > *const)&__for_begin);
    }
    if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->is_content_closed_);
    proto::SummerTimeV2DetailInfo::set_is_content_closed(detail_info, this->is_content_closed_);
    if ( *(_BYTE *)(((unsigned __int64)&this->taken_reward_count_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->taken_reward_count_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->taken_reward_count_);
    }
    proto::SummerTimeV2DetailInfo::set_taken_reward_count(detail_info, this->taken_reward_count_);
    CurDungeonStageRewardLimit = SummerTimeV2Activity::getCurDungeonStageRewardLimit(this);
    proto::SummerTimeV2DetailInfo::set_cur_dungeon_reward_limit(detail_info, CurDungeonStageRewardLimit);
    return 0;
  }
};

// Line 228: range 0000000017FE935A-0000000017FE93FB
int32_t __cdecl SummerTimeV2Activity::init(SummerTimeV2Activity *const this)
{
  char v1; // al

  if ( !BaseActivity::isOpening(this, 0) || BaseActivity::isSettled(this) )
    goto LABEL_6;
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  if ( this->is_content_closed_ )
LABEL_6:
    v1 = 1;
  else
    v1 = 0;
  if ( !v1 )
    SummerTimeV2Activity::registerObserver(this);
  return 0;
};

// Line 238: range 0000000017FE93FC-0000000017FE9416
void __cdecl SummerTimeV2Activity::onStart(SummerTimeV2Activity *const this)
{
  SummerTimeV2Activity::registerObserver(this);
};

// Line 243: range 0000000017FE9418-0000000017FE9B08
void __cdecl SummerTimeV2Activity::onPreStart(SummerTimeV2Activity *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  common::milog::MiLogStream *v4; // rax
  SummerTimeV2DungeonStageData *v5; // rax
  const unsigned int *v6; // rcx
  SummerTimeV2DungeonStageData *v7; // r8
  common::milog::MiLogStream *v8; // rax
  SummerTimeV2BoatStageData *v9; // rax
  const unsigned int *v10; // rcx
  SummerTimeV2BoatStageData *v11; // r8
  std::map<proto::VirtualItem,unsigned int>::mapped_type *v12; // rax
  _DWORD *v13; // rdx
  char v14; // cl
  std::map<proto::VirtualItem,unsigned int>::key_type *p_k; // rsi
  std::map<proto::VirtualItem,unsigned int>::key_type __k; // [rsp+14h] [rbp-11Ch] BYREF
  std::unordered_map<unsigned int,data::SummerTimeV2DungeonStageExcelConfig>::const_iterator __for_begin; // [rsp+18h] [rbp-118h] BYREF
  std::unordered_map<unsigned int,data::SummerTimeV2BoatStageExcelConfig>::const_iterator __for_begin_0; // [rsp+20h] [rbp-110h] BYREF
  const ActivitySummerTimeV2ExcelConfigMgr *config_mgr; // [rsp+28h] [rbp-108h]
  const std::unordered_map<unsigned int,data::SummerTimeV2DungeonStageExcelConfig> *__for_range; // [rsp+30h] [rbp-100h]
  const std::unordered_map<unsigned int,data::SummerTimeV2BoatStageExcelConfig> *__for_range_0; // [rsp+38h] [rbp-F8h]
  const std::pair<unsigned int const,data::SummerTimeV2BoatStageExcelConfig> *v22; // [rsp+40h] [rbp-F0h]
  std::tuple_element<0,const std::pair<unsigned int const,data::SummerTimeV2BoatStageExcelConfig> >::type *stage_id_0; // [rsp+48h] [rbp-E8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::SummerTimeV2BoatStageExcelConfig> >::type *stage_config_0; // [rsp+50h] [rbp-E0h]
  const std::pair<unsigned int const,data::SummerTimeV2DungeonStageExcelConfig> *v25; // [rsp+58h] [rbp-D8h]
  std::tuple_element<0,const std::pair<unsigned int const,data::SummerTimeV2DungeonStageExcelConfig> >::type *stage_id; // [rsp+60h] [rbp-D0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::SummerTimeV2DungeonStageExcelConfig> >::type *stage_config; // [rsp+68h] [rbp-C8h]
  std::shared_ptr<Config> v28; // [rsp+70h] [rbp-C0h] BYREF
  common::milog::MiLogStream v29; // [rsp+80h] [rbp-B0h] BYREF
  char v30[144]; // [rsp+A0h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 8 22 dungeon_stage_data:253 64 12 19 boat_stage_data:270";
  *(_QWORD *)(v1 + 16) = SummerTimeV2Activity::onPreStart;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218959360;
  v3[536862722] = -202177536;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v28);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v28)->design_config.txt_config_mgr.activity_summer_time_v2_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v28);
  if ( !std::map<unsigned int,SummerTimeV2DungeonStageData>::empty(&this->dungeon_stage_open_map_) )
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/summer_time_v2_activity.cpp",
      "onPreStart",
      248);
    common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
      &v29,
      (const char (*)[54])"[SUMMER_TIME_V2] dungeon_stage_open_map_ is not empty");
    common::milog::MiLogStream::~MiLogStream(&v29);
    std::map<unsigned int,SummerTimeV2DungeonStageData>::clear(&this->dungeon_stage_open_map_);
  }
  __for_range = &config_mgr->summer_time_v2_dungeon_stage_excel_config_map;
  __for_begin._M_cur = std::unordered_map<unsigned int,data::SummerTimeV2DungeonStageExcelConfig>::begin(&config_mgr->summer_time_v2_dungeon_stage_excel_config_map)._M_cur;
  __for_begin_0._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::SummerTimeV2BoatStageExcelConfig>,false>::__node_type *)std::unordered_map<unsigned int,data::SummerTimeV2DungeonStageExcelConfig>::end(&config_mgr->summer_time_v2_dungeon_stage_excel_config_map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::SummerTimeV2DungeonStageExcelConfig>,false>(
            &__for_begin,
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::SummerTimeV2DungeonStageExcelConfig>,false> *)&__for_begin_0) )
  {
    v25 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::SummerTimeV2DungeonStageExcelConfig>,false,false>::operator*(&__for_begin);
    stage_id = std::get<0ul,unsigned int const,data::SummerTimeV2DungeonStageExcelConfig>(v25);
    stage_config = (std::tuple_element<1,const std::pair<unsigned int const,data::SummerTimeV2DungeonStageExcelConfig> >::type *)std::get<1ul,unsigned int const,data::SummerTimeV2DungeonStageExcelConfig>(v25);
    *(_DWORD *)(v1 + 32) = 0;
    *(_BYTE *)(v1 + 36) = 0;
    *(_BYTE *)(v1 + 37) = 0;
    if ( *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)stage_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(stage_id);
    }
    if ( SummerTimeV2DungeonStageData::init((SummerTimeV2DungeonStageData *const)(v1 + 32), *stage_id) )
    {
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/summer_time_v2_activity.cpp",
        "onPreStart",
        256);
      v4 = common::milog::MiLogStream::operator<<<char [69],(char *[69])0>(
             &v29,
             (const char (*)[69])"[SUMMER_TIME_V2] SummerTimeV2DungeonStageData init failed, stage id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, stage_id);
      common::milog::MiLogStream::~MiLogStream(&v29);
    }
    else
    {
      v5 = std::move<SummerTimeV2DungeonStageData &>((SummerTimeV2DungeonStageData *)(v1 + 32));
      std::map<unsigned int,SummerTimeV2DungeonStageData>::emplace<unsigned int const&,SummerTimeV2DungeonStageData>(
        &this->dungeon_stage_open_map_,
        stage_id,
        v5,
        v6,
        v7);
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::SummerTimeV2DungeonStageExcelConfig>,false,false>::operator++(&__for_begin);
  }
  if ( !std::map<unsigned int,SummerTimeV2BoatStageData>::empty(&this->boat_stage_open_map_) )
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/summer_time_v2_activity.cpp",
      "onPreStart",
      265);
    common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
      &v29,
      (const char (*)[51])"[SUMMER_TIME_V2] boat_stage_open_map_ is not empty");
    common::milog::MiLogStream::~MiLogStream(&v29);
    std::map<unsigned int,SummerTimeV2BoatStageData>::clear(&this->boat_stage_open_map_);
  }
  __for_range_0 = &config_mgr->summer_time_v2_boat_stage_excel_config_map;
  __for_begin_0._M_cur = std::unordered_map<unsigned int,data::SummerTimeV2BoatStageExcelConfig>::begin(&config_mgr->summer_time_v2_boat_stage_excel_config_map)._M_cur;
  *(std::unordered_map<unsigned int,data::SummerTimeV2BoatStageExcelConfig>::const_iterator *)(v1 + 32) = std::unordered_map<unsigned int,data::SummerTimeV2BoatStageExcelConfig>::end(__for_range_0);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::SummerTimeV2BoatStageExcelConfig>,false>(
            &__for_begin_0,
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::SummerTimeV2BoatStageExcelConfig>,false> *)(v1 + 32)) )
  {
    v22 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::SummerTimeV2BoatStageExcelConfig>,false,false>::operator*(&__for_begin_0);
    stage_id_0 = std::get<0ul,unsigned int const,data::SummerTimeV2BoatStageExcelConfig>(v22);
    stage_config_0 = (std::tuple_element<1,const std::pair<unsigned int const,data::SummerTimeV2BoatStageExcelConfig> >::type *)std::get<1ul,unsigned int const,data::SummerTimeV2BoatStageExcelConfig>(v22);
    *(_DWORD *)(v1 + 64) = 0;
    *(_BYTE *)(v1 + 68) = 0;
    *(_DWORD *)(v1 + 72) = 0;
    if ( *(_BYTE *)(((unsigned __int64)stage_id_0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)stage_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)stage_id_0 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(stage_id_0);
    }
    if ( SummerTimeV2BoatStageData::init((SummerTimeV2BoatStageData *const)(v1 + 64), *stage_id_0) )
    {
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/summer_time_v2_activity.cpp",
        "onPreStart",
        273);
      v8 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
             &v29,
             (const char (*)[66])"[SUMMER_TIME_V2] SummerTimeV2BoatStageData init failed, stage id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, stage_id_0);
      common::milog::MiLogStream::~MiLogStream(&v29);
    }
    else
    {
      v9 = std::move<SummerTimeV2BoatStageData &>((SummerTimeV2BoatStageData *)(v1 + 64));
      std::map<unsigned int,SummerTimeV2BoatStageData>::emplace<unsigned int const&,SummerTimeV2BoatStageData>(
        &this->boat_stage_open_map_,
        stage_id_0,
        v9,
        v10,
        v11);
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::SummerTimeV2BoatStageExcelConfig>,false,false>::operator++(&__for_begin_0);
  }
  __k = ITEM_VIRTUAL_SUMMER_TIME_V2_COIN;
  p_k = &__k;
  v12 = std::map<proto::VirtualItem,unsigned int>::operator[](&this->activity_coin_map_, &__k);
  v13 = v12;
  v14 = *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000);
  LOBYTE(p_k) = v14 != 0;
  if ( v14 != 0 && (char)(((unsigned __int8)v12 & 7) + 3) >= v14 )
    __asan_report_store4(v12, p_k, v12);
  *v13 = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->taken_reward_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->taken_reward_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->taken_reward_count_, p_k, &this->taken_reward_count_);
  }
  this->taken_reward_count_ = 0;
  if ( v30 == (char *)v1 )
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

// Line 286: range 0000000017FE9B0A-0000000017FEA274
void __cdecl SummerTimeV2Activity::registerObserver(SummerTimeV2Activity *const this)
{
  unsigned __int64 p_M_last; // r14
  __int64 v2; // rax
  _DWORD *v3; // r15
  PlayerEventComp *EventComp; // r12
  PlayerEventComp *v5; // r12
  PlayerEventComp *v6; // r12
  PlayerEventComp *v7; // r12
  PlayerEventComp *v8; // r12
  PlayerEventComp v9; // [rsp+60h] [rbp-100h] BYREF

  p_M_last = (unsigned __int64)&v9.event_center_.context_.pending_que_.c._M_impl._M_finish._M_last;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      p_M_last = v2;
  }
  *(_QWORD *)p_M_last = 1102416563LL;
  *(_QWORD *)(p_M_last + 8) = "2 32 16 12 this_ptr:287 64 16 12 this_wtr:293";
  *(_QWORD *)(p_M_last + 16) = SummerTimeV2Activity::registerObserver;
  v3 = (_DWORD *)(p_M_last >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  std::enable_shared_from_this<BaseActivity>::shared_from_this((std::enable_shared_from_this<BaseActivity> *const)&v9.event_center_.context_.pending_que_.c._M_impl._M_start);
  std::dynamic_pointer_cast<SummerTimeV2Activity,BaseActivity>((const std::shared_ptr<BaseActivity> *)(p_M_last + 32));
  std::shared_ptr<BaseActivity>::~shared_ptr((std::shared_ptr<BaseActivity> *const)&v9.event_center_.context_.pending_que_.c._M_impl._M_start);
  if ( std::operator==<SummerTimeV2Activity>(0LL, (const std::shared_ptr<SummerTimeV2Activity> *)(p_M_last + 32)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v9.event_center_.context_.pending_que_.c._M_impl._M_start._M_last,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/summer_time_v2_activity.cpp",
      "registerObserver",
      290);
    common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
      (common::milog::MiLogStream *const)&v9.event_center_.context_.pending_que_.c._M_impl._M_start._M_last,
      (const char (*)[52])"dynamic_pointer_cast to SummerTimeV2Activity failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v9.event_center_.context_.pending_que_.c._M_impl._M_start._M_last);
  }
  else
  {
    std::weak_ptr<SummerTimeV2Activity>::weak_ptr<SummerTimeV2Activity,void>(
      (std::weak_ptr<SummerTimeV2Activity> *const)(p_M_last + 64),
      (const std::shared_ptr<SummerTimeV2Activity> *)(p_M_last + 32));
    if ( std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->dungeon_create_wtr_) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      EventComp = Player::getEventComp(this->player_);
      std::weak_ptr<SummerTimeV2Activity>::weak_ptr(
        (std::weak_ptr<SummerTimeV2Activity> *const)&v9.event_center_.context_.pending_que_.c._M_impl._M_start,
        (const std::weak_ptr<SummerTimeV2Activity> *)(p_M_last + 64));
      PlayerEventComp::registerObserver<SummerTimeV2Activity,CreateDungeonEvent>(
        &v9,
        (std::weak_ptr<SummerTimeV2Activity> *)EventComp,
        (void (*)(SummerTimeV2Activity *, const CreateDungeonEvent *))&v9.event_center_.context_.pending_que_.c._M_impl._M_start);
      std::weak_ptr<Observer>::operator=(&this->dungeon_create_wtr_, (std::weak_ptr<Observer> *)&v9);
      std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v9);
      std::weak_ptr<SummerTimeV2Activity>::~weak_ptr((std::weak_ptr<SummerTimeV2Activity> *const)&v9.event_center_.context_.pending_que_.c._M_impl._M_start);
    }
    if ( std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->boat_gallery_settle_wtr) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      v5 = Player::getEventComp(this->player_);
      std::weak_ptr<SummerTimeV2Activity>::weak_ptr(
        (std::weak_ptr<SummerTimeV2Activity> *const)&v9.event_center_.context_.pending_que_.c._M_impl._M_start,
        (const std::weak_ptr<SummerTimeV2Activity> *)(p_M_last + 64));
      PlayerEventComp::registerObserver<SummerTimeV2Activity,SummerTimeV2BoatGallerySettleEvent>(
        (PlayerEventComp *const)&v9._M_weak_this._M_refcount,
        (std::weak_ptr<SummerTimeV2Activity> *)v5,
        (void (*)(SummerTimeV2Activity *, const SummerTimeV2BoatGallerySettleEvent *))&v9.event_center_.context_.pending_que_.c._M_impl._M_start);
      std::weak_ptr<Observer>::operator=(
        &this->boat_gallery_settle_wtr,
        (std::weak_ptr<Observer> *)&v9._M_weak_this._M_refcount);
      std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v9._M_weak_this._M_refcount);
      std::weak_ptr<SummerTimeV2Activity>::~weak_ptr((std::weak_ptr<SummerTimeV2Activity> *const)&v9.event_center_.context_.pending_que_.c._M_impl._M_start);
    }
    if ( std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->post_enter_scene_wtr) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      v6 = Player::getEventComp(this->player_);
      std::weak_ptr<SummerTimeV2Activity>::weak_ptr(
        (std::weak_ptr<SummerTimeV2Activity> *const)&v9.event_center_.context_.pending_que_.c._M_impl._M_start,
        (const std::weak_ptr<SummerTimeV2Activity> *)(p_M_last + 64));
      PlayerEventComp::registerObserver<SummerTimeV2Activity,PostEnterSceneEvent>(
        (PlayerEventComp *const)&v9.event_center_,
        (std::weak_ptr<SummerTimeV2Activity> *)v6,
        (void (*)(SummerTimeV2Activity *, const PostEnterSceneEvent *))&v9.event_center_.context_.pending_que_.c._M_impl._M_start);
      std::weak_ptr<Observer>::operator=(&this->post_enter_scene_wtr, (std::weak_ptr<Observer> *)&v9.event_center_);
      std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v9.event_center_);
      std::weak_ptr<SummerTimeV2Activity>::~weak_ptr((std::weak_ptr<SummerTimeV2Activity> *const)&v9.event_center_.context_.pending_que_.c._M_impl._M_start);
    }
    if ( std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->leave_scene_wtr) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      v7 = Player::getEventComp(this->player_);
      std::weak_ptr<SummerTimeV2Activity>::weak_ptr(
        (std::weak_ptr<SummerTimeV2Activity> *const)&v9.event_center_.context_.pending_que_.c._M_impl._M_start,
        (const std::weak_ptr<SummerTimeV2Activity> *)(p_M_last + 64));
      PlayerEventComp::registerObserver<SummerTimeV2Activity,LeaveSceneEvent>(
        (PlayerEventComp *const)&v9.event_center_.context_.pending_que_,
        (std::weak_ptr<SummerTimeV2Activity> *)v7,
        (void (*)(SummerTimeV2Activity *, const LeaveSceneEvent *))&v9.event_center_.context_.pending_que_.c._M_impl._M_start);
      std::weak_ptr<Observer>::operator=(
        &this->leave_scene_wtr,
        (std::weak_ptr<Observer> *)&v9.event_center_.context_.pending_que_);
      std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v9.event_center_.context_.pending_que_);
      std::weak_ptr<SummerTimeV2Activity>::~weak_ptr((std::weak_ptr<SummerTimeV2Activity> *const)&v9.event_center_.context_.pending_que_.c._M_impl._M_start);
    }
    if ( std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->skill_wtr) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      v8 = Player::getEventComp(this->player_);
      std::weak_ptr<SummerTimeV2Activity>::weak_ptr(
        (std::weak_ptr<SummerTimeV2Activity> *const)&v9.event_center_.context_.pending_que_,
        (const std::weak_ptr<SummerTimeV2Activity> *)(p_M_last + 64));
      PlayerEventComp::registerObserver<SummerTimeV2Activity,SkillEvent>(
        (PlayerEventComp *const)&v9.event_center_.context_.pending_que_.c._M_impl._M_start,
        (std::weak_ptr<SummerTimeV2Activity> *)v8,
        (void (*)(SummerTimeV2Activity *, const SkillEvent *))&v9.event_center_.context_.pending_que_);
      std::weak_ptr<Observer>::operator=(
        &this->skill_wtr,
        (std::weak_ptr<Observer> *)&v9.event_center_.context_.pending_que_.c._M_impl._M_start);
      std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v9.event_center_.context_.pending_que_.c._M_impl._M_start);
      std::weak_ptr<SummerTimeV2Activity>::~weak_ptr((std::weak_ptr<SummerTimeV2Activity> *const)&v9.event_center_.context_.pending_que_);
    }
    std::weak_ptr<SummerTimeV2Activity>::~weak_ptr((std::weak_ptr<SummerTimeV2Activity> *const)(p_M_last + 64));
  }
  std::shared_ptr<SummerTimeV2Activity>::~shared_ptr((std::shared_ptr<SummerTimeV2Activity> *const)(p_M_last + 32));
  if ( &v9.event_center_.context_.pending_que_.c._M_impl._M_finish._M_last == (std::_Deque_iterator<std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> >,std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> >&,std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> >*>::_Elt_pointer *)p_M_last )
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

// Line 317: range 0000000017FEA276-0000000017FEA4DC
void __cdecl SummerTimeV2Activity::unregisterObserver(SummerTimeV2Activity *const this)
{
  PlayerEventComp *EventComp; // rax
  PlayerEventComp *v2; // rax
  PlayerEventComp *v3; // rax
  PlayerEventComp *v4; // rax
  PlayerEventComp *v5; // rax

  if ( !std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->dungeon_create_wtr_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    EventComp = Player::getEventComp(this->player_);
    PlayerEventComp::unregisterObserver(EventComp, &this->dungeon_create_wtr_);
    std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::reset(&this->dungeon_create_wtr_);
  }
  if ( !std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->boat_gallery_settle_wtr) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    v2 = Player::getEventComp(this->player_);
    PlayerEventComp::unregisterObserver(v2, &this->boat_gallery_settle_wtr);
    std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::reset(&this->boat_gallery_settle_wtr);
  }
  if ( !std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->post_enter_scene_wtr) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    v3 = Player::getEventComp(this->player_);
    PlayerEventComp::unregisterObserver(v3, &this->post_enter_scene_wtr);
    std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::reset(&this->post_enter_scene_wtr);
  }
  if ( !std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->leave_scene_wtr) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    v4 = Player::getEventComp(this->player_);
    PlayerEventComp::unregisterObserver(v4, &this->leave_scene_wtr);
    std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::reset(&this->leave_scene_wtr);
  }
  if ( !std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->skill_wtr) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    v5 = Player::getEventComp(this->player_);
    PlayerEventComp::unregisterObserver(v5, &this->skill_wtr);
    std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::reset(&this->skill_wtr);
  }
};

// Line 346: range 0000000017FEA4DE-0000000017FEA54B
void __cdecl SummerTimeV2Activity::onSettle(SummerTimeV2Activity *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  if ( !this->is_content_closed_ )
    SummerTimeV2Activity::closeContent(this);
  SummerTimeV2Activity::unregisterObserver(this);
};

// Line 355: range 0000000017FEA54C-0000000017FEA5A5
void __cdecl SummerTimeV2Activity::onDailyRefresh(SummerTimeV2Activity *const this)
{
  if ( BaseActivity::isOpening(this, 0) && !BaseActivity::isSettled(this) )
    BaseActivity::notifyClientData(this, 0);
};

// Line 364: range 0000000017FEA5A6-0000000017FEA87D
void __cdecl SummerTimeV2Activity::onClear(SummerTimeV2Activity *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::tuple_element<1,const std::pair<const proto::VirtualItem,unsigned int> >::type *v5; // rax
  uint32_t v6; // edi
  std::map<proto::VirtualItem,unsigned int>::iterator __for_begin; // [rsp+10h] [rbp-90h] BYREF
  std::map<proto::VirtualItem,unsigned int>::iterator __for_end; // [rsp+18h] [rbp-88h] BYREF
  std::map<proto::VirtualItem,unsigned int> *__for_range; // [rsp+20h] [rbp-80h]
  const std::pair<const proto::VirtualItem,unsigned int> *v11; // [rsp+28h] [rbp-78h]
  std::tuple_element<0,const std::pair<const proto::VirtualItem,unsigned int> >::type *coin_type; // [rsp+30h] [rbp-70h]
  std::tuple_element<1,const std::pair<const proto::VirtualItem,unsigned int> >::type *coin_num; // [rsp+38h] [rbp-68h]
  char v14[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 14 sub_reason:369";
  *(_QWORD *)(v2 + 16) = SummerTimeV2Activity::onClear;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_content_closed_, v1, &this->is_content_closed_);
  this->is_content_closed_ = 0;
  std::map<unsigned int,SummerTimeV2DungeonStageData>::clear(&this->dungeon_stage_open_map_);
  std::map<unsigned int,SummerTimeV2BoatStageData>::clear(&this->boat_stage_open_map_);
  SubItemReason::SubItemReason((SubItemReason *const)(v2 + 32), ACTION_REASON_ACTIVITY_EXPIRE_ITEM);
  __for_range = &this->activity_coin_map_;
  __for_begin._M_node = std::map<proto::VirtualItem,unsigned int>::begin(&this->activity_coin_map_)._M_node;
  __for_end._M_node = std::map<proto::VirtualItem,unsigned int>::end(&this->activity_coin_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v11 = std::_Rb_tree_iterator<std::pair<proto::VirtualItem const,unsigned int>>::operator*(&__for_begin);
    coin_type = std::get<0ul,proto::VirtualItem const,unsigned int>(v11);
    v5 = (std::tuple_element<1,const std::pair<const proto::VirtualItem,unsigned int> >::type *)std::get<1ul,proto::VirtualItem const,unsigned int>(v11);
    coin_num = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    if ( *coin_num )
    {
      v6 = *coin_num;
      if ( *(_BYTE *)(((unsigned __int64)coin_type >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)coin_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)coin_type >> 3) + 0x7FFF8000) )
      {
        v6 = (unsigned int)coin_type;
        __asan_report_load4(coin_type);
      }
      SummerTimeV2Activity::subActivityCoin(this, *coin_type, v6, (const SubItemReason *)(v2 + 32), 0);
    }
    std::_Rb_tree_iterator<std::pair<proto::VirtualItem const,unsigned int>>::operator++(&__for_begin);
  }
  std::map<proto::VirtualItem,unsigned int>::clear(&this->activity_coin_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->taken_reward_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->taken_reward_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->taken_reward_count_, &__for_end, &this->taken_reward_count_);
  }
  this->taken_reward_count_ = 0;
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

// Line 383: range 0000000017FEA87E-0000000017FEA93B
void __cdecl SummerTimeV2Activity::closeContent(SummerTimeV2Activity *const this)
{
  __int64 v1; // rsi

  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  if ( !this->is_content_closed_ )
  {
    if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->is_content_closed_, v1, &this->is_content_closed_);
    this->is_content_closed_ = 1;
    SummerTimeV2Activity::unregisterObserver(this);
    SummerTimeV2Activity::clearAllCycleDungeonExhibitionData(this);
    BaseActivity::notifyClientData(this, 0);
  }
};

// Line 395: range 0000000017FEA93C-0000000017FEAEF0
int32_t __cdecl SummerTimeV2Activity::execAction(
        SummerTimeV2Activity *const this,
        const data::NewActivityExec *action_exec)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  data::NewActivityActionType type; // eax
  common::milog::MiLogStream *v6; // rax
  const std::string *v7; // rax
  common::milog::MiLogStream *v8; // r12
  const std::string *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  const std::string *v13; // rax
  common::milog::MiLogStream *v14; // r12
  const std::string *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  int32_t result; // eax
  common::milog::MiLogStream v19; // [rsp+10h] [rbp-80h] BYREF
  char v20[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 stage_id:425";
  *(_QWORD *)(v2 + 16) = SummerTimeV2Activity::execAction;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&action_exec->type);
  }
  type = action_exec->type;
  if ( type == NEW_ACTIVITY_ACTION_OPEN_SUMMER_V2_DUNGEON_STAGE )
  {
    if ( !std::vector<std::string>::size(&action_exec->param) )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/summer_time_v2_activity.cpp",
        "execAction",
        402);
      v6 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
             &v19,
             (const char (*)[53])"[SUMMER_TIME_V2] cond param size error, activity id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->activity_id_);
      common::milog::MiLogStream::~MiLogStream(&v19);
      result = -1;
      goto LABEL_22;
    }
    *(_DWORD *)(v2 + 32) = 0;
    v7 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
    if ( common::tools::StringUtils::strToNum<unsigned int>(v7, (unsigned int *)(v2 + 32), 1) )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/summer_time_v2_activity.cpp",
        "execAction",
        408);
      v8 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             &v19,
             (const char (*)[27])"[SUMMER_TIME_V2] strToNum ");
      v9 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
      v10 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, v9);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v10, (const char (*)[8])" failed");
      common::milog::MiLogStream::~MiLogStream(&v19);
      result = -1;
      goto LABEL_22;
    }
    if ( SummerTimeV2Activity::openActivityDungeonStage(this, *(_DWORD *)(v2 + 32), 0) )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/summer_time_v2_activity.cpp",
        "execAction",
        413);
      v11 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
              &v19,
              (const char (*)[61])"[SUMMER_TIME_V2] openActivityDungeonStage failed, stage_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v19);
      result = -1;
      goto LABEL_22;
    }
  }
  else
  {
    if ( type != NEW_ACTIVITY_ACTION_OPEN_SUMMER_V2_BOAT_STAGE )
    {
      result = BaseActivity::execAction(this, action_exec);
      goto LABEL_22;
    }
    if ( !std::vector<std::string>::size(&action_exec->param) )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/summer_time_v2_activity.cpp",
        "execAction",
        422);
      v12 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
              &v19,
              (const char (*)[53])"[SUMMER_TIME_V2] cond param size error, activity id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &this->activity_id_);
      common::milog::MiLogStream::~MiLogStream(&v19);
      result = -1;
      goto LABEL_22;
    }
    *(_DWORD *)(v2 + 32) = 0;
    v13 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
    if ( common::tools::StringUtils::strToNum<unsigned int>(v13, (unsigned int *)(v2 + 32), 1) )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/summer_time_v2_activity.cpp",
        "execAction",
        428);
      v14 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              &v19,
              (const char (*)[27])"[SUMMER_TIME_V2] strToNum ");
      v15 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
      v16 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v14, v15);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v16, (const char (*)[8])" failed");
      common::milog::MiLogStream::~MiLogStream(&v19);
      result = -1;
      goto LABEL_22;
    }
    if ( SummerTimeV2Activity::openActivityBoatStage(this, *(_DWORD *)(v2 + 32), 0) )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/summer_time_v2_activity.cpp",
        "execAction",
        433);
      v17 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
              &v19,
              (const char (*)[58])"[SUMMER_TIME_V2] openActivityBoatStage failed, stage_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v19);
      result = -1;
      goto LABEL_22;
    }
  }
  result = 0;
LABEL_22:
  if ( v20 == (char *)v2 )
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

// Line 449: range 0000000017FEAEF2-0000000017FEB454
__int64 __fastcall SummerTimeV2Activity::openActivityDungeonStage(
        SummerTimeV2Activity *const this,
        uint32_t stage_id,
        bool is_force)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  char *v8; // rsi
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  SummerTimeV2DungeonStageData *v11; // rax
  unsigned int *v12; // rcx
  SummerTimeV2DungeonStageData *v13; // r8
  common::milog::MiLogStream *v14; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2DungeonStageData> >::pointer v15; // rdx
  char v16; // cl
  common::milog::MiLogStream *v17; // rax
  ActivitySummerTimeV2ExcelConfigMgr *config_mgr; // [rsp+10h] [rbp-F0h]
  std::shared_ptr<Config> v20; // [rsp+20h] [rbp-E0h] BYREF
  common::milog::MiLogStream v21; // [rsp+30h] [rbp-D0h] BYREF
  char v22[176]; // [rsp+50h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 12 stage_id:448 64 8 8 iter:458 96 8 22 dungeon_stage_data:466";
  *(_QWORD *)(v3 + 16) = SummerTimeV2Activity::openActivityDungeonStage;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 48) = stage_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v20);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20)->design_config.txt_config_mgr.activity_summer_time_v2_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v20);
  if ( !data::ActivitySummerTimeV2ExcelConfigMgrBase::findSummerTimeV2DungeonStageExcelConfig(
          config_mgr,
          *(_DWORD *)(v3 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/summer_time_v2_activity.cpp",
      "openActivityDungeonStage",
      455);
    v6 = common::milog::MiLogStream::operator<<<char [76],(char *[76])0>(
           &v21,
           (const char (*)[76])"[SUMMER_TIME_V2] findSummerTimeV2DungeonStageExcelConfig failed, stage_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v21);
    result = 0xFFFFFFFFLL;
    goto LABEL_16;
  }
  *(std::map<unsigned int,SummerTimeV2DungeonStageData>::iterator *)(v3 + 64) = std::map<unsigned int,SummerTimeV2DungeonStageData>::find(
                                                                                  &this->dungeon_stage_open_map_,
                                                                                  (const std::map<unsigned int,SummerTimeV2DungeonStageData>::key_type *)(v3 + 48));
  *(std::map<unsigned int,SummerTimeV2DungeonStageData>::iterator *)(v3 + 96) = std::map<unsigned int,SummerTimeV2DungeonStageData>::end(&this->dungeon_stage_open_map_);
  v8 = (char *)(v3 + 96);
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2DungeonStageData> >::_Self *)(v3 + 64),
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2DungeonStageData> >::_Self *)(v3 + 96)) )
  {
    if ( !is_force )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/summer_time_v2_activity.cpp",
        "openActivityDungeonStage",
        463);
      v9 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
             &v21,
             (const char (*)[56])"[SUMMER_TIME_V2] open unexist dungeon stage, stage_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v21);
      result = 0xFFFFFFFFLL;
      goto LABEL_16;
    }
    *(_DWORD *)(v3 + 96) = 0;
    *(_BYTE *)(v3 + 100) = 0;
    *(_BYTE *)(v3 + 101) = 0;
    if ( SummerTimeV2DungeonStageData::init((SummerTimeV2DungeonStageData *const)(v3 + 96), *(_DWORD *)(v3 + 48)) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/summer_time_v2_activity.cpp",
        "openActivityDungeonStage",
        469);
      v10 = common::milog::MiLogStream::operator<<<char [69],(char *[69])0>(
              &v21,
              (const char (*)[69])"[SUMMER_TIME_V2] SummerTimeV2DungeonStageData init failed, stage id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v21);
      result = 0xFFFFFFFFLL;
      goto LABEL_16;
    }
    *(_BYTE *)(v3 + 100) = 1;
    v11 = std::move<SummerTimeV2DungeonStageData &>((SummerTimeV2DungeonStageData *)(v3 + 96));
    std::map<unsigned int,SummerTimeV2DungeonStageData>::emplace<unsigned int &,SummerTimeV2DungeonStageData>(
      &this->dungeon_stage_open_map_,
      (unsigned int *)(v3 + 48),
      v11,
      v12,
      v13);
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/summer_time_v2_activity.cpp",
      "openActivityDungeonStage",
      475);
    v14 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
            &v21,
            (const char (*)[55])"[SUMMER_TIME_V2] dungeon stage force opened, stage_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v21);
  }
  else
  {
    v15 = std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2DungeonStageData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2DungeonStageData> > *const)(v3 + 64));
    v16 = *(_BYTE *)(((unsigned __int64)&v15->second.is_open >> 3) + 0x7FFF8000);
    if ( v16 != 0 && (((unsigned __int8)v15 + 8) & 7) >= v16 )
    {
      LOBYTE(v8) = v16 != 0;
      __asan_report_store1(&v15->second.is_open, v8, v15);
    }
    v15->second.is_open = 1;
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/summer_time_v2_activity.cpp",
      "openActivityDungeonStage",
      480);
    v17 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
            &v21,
            (const char (*)[50])"[SUMMER_TIME_V2] dungeon stage is open, stage id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v21);
  }
  BaseActivity::notifyClientData(this, 0);
  result = 0LL;
LABEL_16:
  if ( v22 == (char *)v3 )
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

// Line 488: range 0000000017FEB456-0000000017FEB5E6
_BOOL8 __fastcall SummerTimeV2Activity::isActivityDungeonStageOpen(
        const SummerTimeV2Activity *const this,
        uint32_t stage_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  _BOOL8 result; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,SummerTimeV2DungeonStageData> >::pointer v6; // rdx
  bool *p_is_open; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,SummerTimeV2DungeonStageData> >::_Self __y; // [rsp+18h] [rbp-88h] BYREF
  char v9[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 stage_id:487 64 8 8 iter:489";
  *(_QWORD *)(v2 + 16) = SummerTimeV2Activity::isActivityDungeonStageOpen;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = stage_id;
  *(std::map<unsigned int,SummerTimeV2DungeonStageData>::const_iterator *)(v2 + 64) = std::map<unsigned int,SummerTimeV2DungeonStageData>::find(
                                                                                        &this->dungeon_stage_open_map_,
                                                                                        (const std::map<unsigned int,SummerTimeV2DungeonStageData>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,SummerTimeV2DungeonStageData>::end(&this->dungeon_stage_open_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,SummerTimeV2DungeonStageData> >::_Self *)(v2 + 64),
         &__y) )
  {
    result = 0LL;
  }
  else
  {
    v6 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,SummerTimeV2DungeonStageData>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,SummerTimeV2DungeonStageData> > *const)(v2 + 64));
    p_is_open = &v6->second.is_open;
    if ( *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_open & 7) >= *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(p_is_open);
    }
    result = v6->second.is_open;
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

// Line 498: range 0000000017FEB5E8-0000000017FEBE30
__int64 __fastcall SummerTimeV2Activity::checkEnterDungeon(SummerTimeV2Activity *const this, uint32_t dungeon_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  char v5; // al
  __int64 result; // rax
  common::milog::MiLogStream *v7; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2DungeonStageData> >::pointer v8; // rdx
  bool *p_is_open; // rax
  char v10; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2DungeonStageData> >::pointer v14; // rdx
  bool *p_is_prev_dungeon_succeed; // rax
  char v16; // al
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  PlayerMpComp *MpComp; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  PlayerMpComp *v24; // rax
  common::milog::MiLogStream *v25; // r14
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  unsigned int val; // [rsp+14h] [rbp-DCh] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2DungeonStageData> >::_Self __y; // [rsp+18h] [rbp-D8h] BYREF
  const ActivitySummerTimeV2ExcelConfigMgr *config_mgr; // [rsp+20h] [rbp-D0h]
  const data::SummerTimeV2DungeonStageExcelConfig *dungeon_stage_config_ptr; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<Config> v34; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v35; // [rsp+40h] [rbp-B0h] BYREF
  char v36[144]; // [rsp+60h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 20 dungeon_stage_id:511 48 4 14 dungeon_id:497 64 8 8 iter:512";
  *(_QWORD *)(v2 + 16) = SummerTimeV2Activity::checkEnterDungeon;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = dungeon_id;
  if ( !BaseActivity::isOpening(this, 0) || BaseActivity::isSettled(this) )
    goto LABEL_9;
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  if ( this->is_content_closed_ )
LABEL_9:
    v5 = 1;
  else
    v5 = 0;
  if ( v5 )
  {
    result = 860LL;
    goto LABEL_49;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v34);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v34)->design_config.txt_config_mgr.activity_summer_time_v2_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v34);
  dungeon_stage_config_ptr = ActivitySummerTimeV2ExcelConfigMgr::findStageConfigByDungeonId(
                               config_mgr,
                               *(_DWORD *)(v2 + 48));
  if ( !dungeon_stage_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v35,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/summer_time_v2_activity.cpp",
      "checkEnterDungeon",
      508);
    v7 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
           &v35,
           (const char (*)[58])"[SUMMER_TIME_V2] cannot find dungeon config, dungeon id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v35);
    result = 0xFFFFFFFFLL;
    goto LABEL_49;
  }
  if ( *(_BYTE *)(((unsigned __int64)&dungeon_stage_config_ptr->stage_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&dungeon_stage_config_ptr->stage_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&dungeon_stage_config_ptr->stage_id);
  }
  *(_DWORD *)(v2 + 32) = dungeon_stage_config_ptr->stage_id;
  *(std::map<unsigned int,SummerTimeV2DungeonStageData>::iterator *)(v2 + 64) = std::map<unsigned int,SummerTimeV2DungeonStageData>::find(
                                                                                  &this->dungeon_stage_open_map_,
                                                                                  (const std::map<unsigned int,SummerTimeV2DungeonStageData>::key_type *)(v2 + 32));
  __y._M_node = std::map<unsigned int,SummerTimeV2DungeonStageData>::end(&this->dungeon_stage_open_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2DungeonStageData> >::_Self *)(v2 + 64),
         &__y) )
  {
    goto LABEL_21;
  }
  v8 = std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2DungeonStageData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2DungeonStageData> > *const)(v2 + 64));
  p_is_open = &v8->second.is_open;
  if ( *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)p_is_open & 7) >= *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(p_is_open);
  }
  if ( !v8->second.is_open )
LABEL_21:
    v10 = 1;
  else
    v10 = 0;
  if ( v10 )
  {
    common::milog::MiLogStream::create(
      &v35,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/summer_time_v2_activity.cpp",
      "checkEnterDungeon",
      515);
    v11 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
            &v35,
            (const char (*)[59])"[SUMMER_TIME_V2] dungeon stage is not open yet, stage id: ");
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 32));
    v13 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v12, (const char (*)[14])" dungeon id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v35);
    result = 10319LL;
    goto LABEL_49;
  }
  if ( *(_BYTE *)(((unsigned __int64)&dungeon_stage_config_ptr->cycle_dungeon_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)dungeon_stage_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_stage_config_ptr->cycle_dungeon_id >> 3)
                                                                            + 0x7FFF8000) )
  {
    __asan_report_load4(&dungeon_stage_config_ptr->cycle_dungeon_id);
  }
  if ( dungeon_stage_config_ptr->cycle_dungeon_id != *(_DWORD *)(v2 + 48) )
    goto LABEL_32;
  v14 = std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2DungeonStageData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2DungeonStageData> > *const)(v2 + 64));
  p_is_prev_dungeon_succeed = &v14->second.is_prev_dungeon_succeed;
  if ( *(_BYTE *)(((unsigned __int64)p_is_prev_dungeon_succeed >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)p_is_prev_dungeon_succeed & 7) >= *(_BYTE *)(((unsigned __int64)p_is_prev_dungeon_succeed >> 3)
                                                                    + 0x7FFF8000) )
  {
    __asan_report_load1(p_is_prev_dungeon_succeed);
  }
  if ( !v14->second.is_prev_dungeon_succeed )
    v16 = 1;
  else
LABEL_32:
    v16 = 0;
  if ( v16 )
  {
    common::milog::MiLogStream::create(
      &v35,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/summer_time_v2_activity.cpp",
      "checkEnterDungeon",
      522);
    v17 = common::milog::MiLogStream::operator<<<char [78],(char *[78])0>(
            &v35,
            (const char (*)[78])"[SUMMER_TIME_V2] cycle dungeon should first complete prev dungeon, stage id: ");
    v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v2 + 32));
    v19 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v18, (const char (*)[14])" dungeon id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v35);
    result = 10320LL;
    goto LABEL_49;
  }
  if ( *(_BYTE *)(((unsigned __int64)&dungeon_stage_config_ptr->prev_dungeon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&dungeon_stage_config_ptr->prev_dungeon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&dungeon_stage_config_ptr->prev_dungeon_id);
  }
  if ( dungeon_stage_config_ptr->prev_dungeon_id != *(_DWORD *)(v2 + 48) )
    goto LABEL_48;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  MpComp = Player::getMpComp(this->player_);
  if ( PlayerMpComp::isInMpMode(MpComp) )
  {
    common::milog::MiLogStream::create(
      &v35,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/summer_time_v2_activity.cpp",
      "checkEnterDungeon",
      531);
    v21 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
            &v35,
            (const char (*)[66])"[SUMMER_TIME_V2] prev dungeon cannot enter in mp mode, stage id: ");
    v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v2 + 32));
    v23 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v22, (const char (*)[14])" dungeon id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v35);
    result = 1202LL;
    goto LABEL_49;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  v24 = Player::getMpComp(this->player_);
  if ( !PlayerMpComp::isAllowEnterPlayerEmpty(v24) )
  {
    common::milog::MiLogStream::create(
      &v35,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/summer_time_v2_activity.cpp",
      "checkEnterDungeon",
      537);
    v25 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
            &v35,
            (const char (*)[54])"[SUMMER_TIME_V2] others is entering self world, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &val);
    v27 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v26, (const char (*)[13])", stage id: ");
    v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, (const unsigned int *)(v2 + 32));
    v29 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v28, (const char (*)[14])" dungeon id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v35);
    result = 1216LL;
  }
  else
  {
LABEL_48:
    result = 0LL;
  }
LABEL_49:
  if ( v36 == (char *)v2 )
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

// Line 546: range 0000000017FEBF72-0000000017FEC68C
void __cdecl SummerTimeV2Activity::onCreateDungeonEvent(
        SummerTimeV2Activity *const this,
        const CreateDungeonEvent *event)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  char v5; // al
  GameserverService *v6; // rax
  uint32_t v7; // ecx
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2DungeonStageData> >::pointer v11; // rdx
  bool *p_is_open; // rax
  char v13; // al
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2DungeonStageData> >::pointer v17; // rdx
  bool *p_is_prev_dungeon_succeed; // rax
  char v19; // al
  common::milog::MiLogStream *v20; // rax
  SummerTimeV2Activity::onCreateDungeonEvent::<lambda(Player&, DungeonScene&, proto::DungeonSettleNotify&)> v21; // si
  DungeonScene *v22; // rax
  DungeonScene *v23; // r14
  std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2DungeonStageData> >::_Self __y; // [rsp+18h] [rbp-F8h] BYREF
  const ActivitySummerTimeV2ExcelConfigMgr *config_mgr; // [rsp+20h] [rbp-F0h]
  const data::SummerTimeV2DungeonStageExcelConfig *dungeon_stage_config_ptr; // [rsp+28h] [rbp-E8h]
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
  *(_QWORD *)(v2 + 8) = "4 32 4 20 enter_dungeon_id:560 48 4 20 dungeon_stage_id:570 64 8 8 iter:571 96 16 21 dungeon_scene_ptr:551";
  *(_QWORD *)(v2 + 16) = SummerTimeV2Activity::onCreateDungeonEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -202178560;
  if ( !BaseActivity::isOpening(this, 0) || BaseActivity::isSettled(this) )
    goto LABEL_9;
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  if ( this->is_content_closed_ )
LABEL_9:
    v5 = 1;
  else
    v5 = 0;
  if ( !v5 )
  {
    v6 = ServiceBox::findService<GameserverService>();
    v7 = (unsigned int)GameserverService::getGameThreadLocal(v6) + 568;
    if ( *(_BYTE *)(((unsigned __int64)&event->inst_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->inst_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&event->inst_id);
    }
    DungeonMgr::findDungeon((DungeonMgr *const)(v2 + 96), v7);
    if ( !std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v2 + 96), 0LL) )
    {
      v8 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      if ( DungeonScene::getDungeonType(v8) == DUNGEON_SUMMER_V2 )
      {
        v9 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        *(_DWORD *)(v2 + 32) = DungeonScene::getDungeonId(v9);
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v27);
        config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v27)->design_config.txt_config_mgr.activity_summer_time_v2_mgr;
        std::shared_ptr<Config>::~shared_ptr(&v27);
        dungeon_stage_config_ptr = ActivitySummerTimeV2ExcelConfigMgr::findStageConfigByDungeonId(
                                     config_mgr,
                                     *(_DWORD *)(v2 + 32));
        if ( dungeon_stage_config_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&dungeon_stage_config_ptr->stage_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&dungeon_stage_config_ptr->stage_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&dungeon_stage_config_ptr->stage_id);
          }
          *(_DWORD *)(v2 + 48) = dungeon_stage_config_ptr->stage_id;
          *(std::map<unsigned int,SummerTimeV2DungeonStageData>::iterator *)(v2 + 64) = std::map<unsigned int,SummerTimeV2DungeonStageData>::find(
                                                                                          &this->dungeon_stage_open_map_,
                                                                                          (const std::map<unsigned int,SummerTimeV2DungeonStageData>::key_type *)(v2 + 48));
          __y._M_node = std::map<unsigned int,SummerTimeV2DungeonStageData>::end(&this->dungeon_stage_open_map_)._M_node;
          if ( std::operator==(
                 (const std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2DungeonStageData> >::_Self *)(v2 + 64),
                 &__y) )
          {
            goto LABEL_24;
          }
          v11 = std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2DungeonStageData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2DungeonStageData> > *const)(v2 + 64));
          p_is_open = &v11->second.is_open;
          if ( *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) != 0
            && ((unsigned __int8)p_is_open & 7) >= *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) )
          {
            __asan_report_load1(p_is_open);
          }
          if ( !v11->second.is_open )
LABEL_24:
            v13 = 1;
          else
            v13 = 0;
          if ( v13 )
          {
            common::milog::MiLogStream::create(
              &v28,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/summer_time_v2_activity.cpp",
              "onCreateDungeonEvent",
              574);
            v14 = common::milog::MiLogStream::operator<<<char [69],(char *[69])0>(
                    &v28,
                    (const char (*)[69])"[SUMMER_TIME_V2] stage is not open but dungeon entered, dungeon_id: ");
            v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v14,
                    (const unsigned int *)(v2 + 32));
            v16 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v15, (const char (*)[11])"stage id: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v2 + 48));
            common::milog::MiLogStream::~MiLogStream(&v28);
          }
          else
          {
            v17 = std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2DungeonStageData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2DungeonStageData> > *const)(v2 + 64));
            p_is_prev_dungeon_succeed = &v17->second.is_prev_dungeon_succeed;
            if ( *(_BYTE *)(((unsigned __int64)p_is_prev_dungeon_succeed >> 3) + 0x7FFF8000) != 0
              && ((unsigned __int8)p_is_prev_dungeon_succeed & 7) >= *(_BYTE *)(((unsigned __int64)p_is_prev_dungeon_succeed >> 3)
                                                                              + 0x7FFF8000) )
            {
              __asan_report_load1(p_is_prev_dungeon_succeed);
            }
            if ( v17->second.is_prev_dungeon_succeed )
              goto LABEL_35;
            if ( *(_BYTE *)(((unsigned __int64)&dungeon_stage_config_ptr->cycle_dungeon_id >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)dungeon_stage_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_stage_config_ptr->cycle_dungeon_id >> 3)
                                                                                      + 0x7FFF8000) )
            {
              __asan_report_load4(&dungeon_stage_config_ptr->cycle_dungeon_id);
            }
            if ( dungeon_stage_config_ptr->cycle_dungeon_id == *(_DWORD *)(v2 + 32) )
              v19 = 1;
            else
LABEL_35:
              v19 = 0;
            if ( v19 )
            {
              common::milog::MiLogStream::create(
                &v28,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/summer_time_v2_activity.cpp",
                "onCreateDungeonEvent",
                581);
              v20 = common::milog::MiLogStream::operator<<<char [90],(char *[90])0>(
                      &v28,
                      (const char (*)[90])"[SUMMER_TIME_V2] prev dungeon is not passed but cycle dungeon entered, cycle_dungeon_id: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v20,
                (const unsigned int *)(v2 + 32));
              common::milog::MiLogStream::~MiLogStream(&v28);
            }
            else
            {
              v21.gap0[0] = (((_BYTE)dungeon_stage_config_ptr + 20) & 7) + 3;
              if ( *(_BYTE *)(((unsigned __int64)&dungeon_stage_config_ptr->cycle_dungeon_id >> 3) + 0x7FFF8000) != 0
                && v21.gap0[0] >= *(_BYTE *)(((unsigned __int64)&dungeon_stage_config_ptr->cycle_dungeon_id >> 3)
                                           + 0x7FFF8000) )
              {
                __asan_report_load4(&dungeon_stage_config_ptr->cycle_dungeon_id);
              }
              if ( dungeon_stage_config_ptr->cycle_dungeon_id == *(_DWORD *)(v2 + 32) )
              {
                v22 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
                v21.gap0[0] = (_BYTE)dungeon_stage_config_ptr + 48;
                DungeonScene::setDungeonExhibitionCardVec(v22, &dungeon_stage_config_ptr->dungeon_card_id_list);
              }
              v23 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
              std::function<void ()(Player &,DungeonScene &,proto::DungeonSettleNotify &)>::function<SummerTimeV2Activity::onCreateDungeonEvent(CreateDungeonEvent const&)::{lambda(Player &,DungeonScene &,proto::DungeonSettleNotify &)#1},void,void>(
                (std::function<void(Player&,DungeonScene&,proto::DungeonSettleNotify&)> *const)&v28,
                v21);
              DungeonScene::registerDungeonSettleCallback(v23, (DungeonSettleCallback *)&v28);
              std::function<void ()(Player &,DungeonScene &,proto::DungeonSettleNotify &)>::~function((std::function<void(Player&,DungeonScene&,proto::DungeonSettleNotify&)> *const)&v28);
            }
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v28,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/summer_time_v2_activity.cpp",
            "onCreateDungeonEvent",
            566);
          v10 = common::milog::MiLogStream::operator<<<char [79],(char *[79])0>(
                  &v28,
                  (const char (*)[79])"[SUMMER_TIME_V2] dungeon type is DUNGEON_SUMMER_V2 but no config, dungeon_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 32));
          common::milog::MiLogStream::~MiLogStream(&v28);
        }
      }
    }
    std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 96));
  }
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

// Line 590: range 0000000017FEBE32-0000000017FEBF71
void __cdecl SummerTimeV2Activity::onCreateDungeonEvent(CreateDungeonEvent const&)::{lambda(Player &,DungeonScene &,proto::DungeonSettleNotify &)#1}::operator()(
        const SummerTimeV2Activity::onCreateDungeonEvent::<lambda(Player&, DungeonScene&, proto::DungeonSettleNotify&)> *const __closure,
        Player *player,
        DungeonScene *dungeon_scene,
        proto::DungeonSettleNotify *notify)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  SummerTimeV2Activity *v7; // rcx
  char v10[96]; // [rsp+20h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 16 activity_ptr:592";
  *(_QWORD *)(v4 + 16) = SummerTimeV2Activity::onCreateDungeonEvent(CreateDungeonEvent const&)::{lambda(Player &,DungeonScene &,proto::DungeonSettleNotify &)#1}::operator();
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  Player::getActivityComp(player);
  PlayerActivityComp::findOpenningActivity<SummerTimeV2Activity>((PlayerActivityComp *const)(v4 + 32));
  if ( std::operator!=<SummerTimeV2Activity>(0LL, (const std::shared_ptr<SummerTimeV2Activity> *)(v4 + 32)) )
  {
    v7 = std::__shared_ptr_access<SummerTimeV2Activity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SummerTimeV2Activity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    SummerTimeV2Activity::onSettleDungeon(v7, dungeon_scene, notify);
  }
  std::shared_ptr<SummerTimeV2Activity>::~shared_ptr((std::shared_ptr<SummerTimeV2Activity> *const)(v4 + 32));
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

// Line 601: range 0000000017FEC68E-0000000017FED353
void __cdecl SummerTimeV2Activity::onSettleDungeon(
        SummerTimeV2Activity *const this,
        const DungeonScene *dungeon_scene,
        proto::DungeonSettleNotify *notify)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char v6; // al
  common::milog::MiLogStream *v7; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2DungeonStageData> >::pointer v8; // rdx
  bool *p_is_open; // rax
  char v10; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2DungeonStageData> >::pointer v14; // rdx
  bool *p_is_prev_dungeon_succeed; // rax
  common::milog::MiLogStream *v16; // rax
  uint32_t *p_prev_dungeon_id; // rsi
  std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2DungeonStageData> >::pointer v18; // rdx
  char v19; // cl
  common::milog::MiLogStream *v20; // rax
  const ActivitySummerTimeV2ExcelConfigMgr *v21; // rdx
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  PlayerItemComp *ItemComp; // rax
  common::milog::MiLogStream *v27; // r14
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  PlayerItemComp *v30; // rax
  unsigned int val; // [rsp+20h] [rbp-150h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2DungeonStageData> >::_Self __y; // [rsp+28h] [rbp-148h] BYREF
  const ActivitySummerTimeV2ExcelConfigMgr *config_mgr; // [rsp+30h] [rbp-140h]
  const data::SummerTimeV2DungeonStageExcelConfig *dungeon_stage_config_ptr; // [rsp+38h] [rbp-138h]
  const data::SummerTimeV2OverallExcelConfig *overall_config_ptr; // [rsp+40h] [rbp-130h]
  proto::SummerTimeV2DungeonSettleInfo *settle_info; // [rsp+48h] [rbp-128h]
  std::shared_ptr<Config> v39; // [rsp+50h] [rbp-120h] BYREF
  common::milog::MiLogStream v40; // [rsp+60h] [rbp-110h] BYREF
  char v41[240]; // [rsp+80h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v41;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 4 22 settled_dungeon_id:611 48 4 20 dungeon_stage_id:621 64 4 13 reward_id:652 80 4 20 cur_"
                        "reward_limit:665 96 8 8 iter:622 128 24 10 reason:674";
  *(_QWORD *)(v3 + 16) = SummerTimeV2Activity::onSettleDungeon;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -234556924;
  v5[536862723] = -218959360;
  v5[536862724] = -218103808;
  v5[536862725] = -202116109;
  if ( !BaseActivity::isOpening(this, 0) || BaseActivity::isSettled(this) )
    goto LABEL_9;
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  if ( this->is_content_closed_ )
LABEL_9:
    v6 = 1;
  else
    v6 = 0;
  if ( v6 )
  {
    common::milog::MiLogStream::create(
      &v40,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/summer_time_v2_activity.cpp",
      "onSettleDungeon",
      604);
    common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
      &v40,
      (const char (*)[38])"[SUMMER_TIME_V2] activity is not open");
    common::milog::MiLogStream::~MiLogStream(&v40);
    goto LABEL_62;
  }
  if ( DungeonScene::isSettledAndSuccess(dungeon_scene) )
  {
    *(_DWORD *)(v3 + 32) = DungeonScene::getDungeonId(dungeon_scene);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v39);
    config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v39)->design_config.txt_config_mgr.activity_summer_time_v2_mgr;
    std::shared_ptr<Config>::~shared_ptr(&v39);
    dungeon_stage_config_ptr = ActivitySummerTimeV2ExcelConfigMgr::findStageConfigByDungeonId(
                                 config_mgr,
                                 *(_DWORD *)(v3 + 32));
    if ( !dungeon_stage_config_ptr )
    {
      common::milog::MiLogStream::create(
        &v40,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/summer_time_v2_activity.cpp",
        "onSettleDungeon",
        617);
      v7 = common::milog::MiLogStream::operator<<<char [79],(char *[79])0>(
             &v40,
             (const char (*)[79])"[SUMMER_TIME_V2] dungeon type is DUNGEON_SUMMER_V2 but no config, dungeon_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v40);
      goto LABEL_62;
    }
    if ( *(_BYTE *)(((unsigned __int64)&dungeon_stage_config_ptr->stage_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&dungeon_stage_config_ptr->stage_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&dungeon_stage_config_ptr->stage_id);
    }
    *(_DWORD *)(v3 + 48) = dungeon_stage_config_ptr->stage_id;
    *(std::map<unsigned int,SummerTimeV2DungeonStageData>::iterator *)(v3 + 96) = std::map<unsigned int,SummerTimeV2DungeonStageData>::find(
                                                                                    &this->dungeon_stage_open_map_,
                                                                                    (const std::map<unsigned int,SummerTimeV2DungeonStageData>::key_type *)(v3 + 48));
    __y._M_node = std::map<unsigned int,SummerTimeV2DungeonStageData>::end(&this->dungeon_stage_open_map_)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2DungeonStageData> >::_Self *)(v3 + 96),
           &__y) )
    {
      goto LABEL_22;
    }
    v8 = std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2DungeonStageData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2DungeonStageData> > *const)(v3 + 96));
    p_is_open = &v8->second.is_open;
    if ( *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_open & 7) >= *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(p_is_open);
    }
    if ( !v8->second.is_open )
LABEL_22:
      v10 = 1;
    else
      v10 = 0;
    if ( v10 )
    {
      common::milog::MiLogStream::create(
        &v40,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/summer_time_v2_activity.cpp",
        "onSettleDungeon",
        626);
      v11 = common::milog::MiLogStream::operator<<<char [69],(char *[69])0>(
              &v40,
              (const char (*)[69])"[SUMMER_TIME_V2] stage is not open but dungeon settled, dungeon_id: ");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 32));
      v13 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v12, (const char (*)[11])"stage id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v40);
      goto LABEL_62;
    }
    v14 = std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2DungeonStageData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2DungeonStageData> > *const)(v3 + 96));
    p_is_prev_dungeon_succeed = &v14->second.is_prev_dungeon_succeed;
    if ( *(_BYTE *)(((unsigned __int64)p_is_prev_dungeon_succeed >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_prev_dungeon_succeed & 7) >= *(_BYTE *)(((unsigned __int64)p_is_prev_dungeon_succeed >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load1(p_is_prev_dungeon_succeed);
    }
    if ( !v14->second.is_prev_dungeon_succeed )
    {
      if ( *(_BYTE *)(((unsigned __int64)&dungeon_stage_config_ptr->prev_dungeon_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&dungeon_stage_config_ptr->prev_dungeon_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&dungeon_stage_config_ptr->prev_dungeon_id);
      }
      if ( dungeon_stage_config_ptr->prev_dungeon_id != *(_DWORD *)(v3 + 32) )
      {
        common::milog::MiLogStream::create(
          &v40,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/summer_time_v2_activity.cpp",
          "onSettleDungeon",
          641);
        v20 = common::milog::MiLogStream::operator<<<char [90],(char *[90])0>(
                &v40,
                (const char (*)[90])"[SUMMER_TIME_V2] prev dungeon is not passed but cycle dungeon settled, cycle_dungeon_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v3 + 32));
        common::milog::MiLogStream::~MiLogStream(&v40);
        goto LABEL_62;
      }
      common::milog::MiLogStream::create(
        &v40,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/summer_time_v2_activity.cpp",
        "onSettleDungeon",
        635);
      v16 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
              &v40,
              (const char (*)[62])"[SUMMER_TIME_V2] prev_dungeon first settle, prev_dungeon_id: ");
      p_prev_dungeon_id = &dungeon_stage_config_ptr->prev_dungeon_id;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        v16,
        &dungeon_stage_config_ptr->prev_dungeon_id);
      common::milog::MiLogStream::~MiLogStream(&v40);
      v18 = std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2DungeonStageData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2DungeonStageData> > *const)(v3 + 96));
      v19 = *(_BYTE *)(((unsigned __int64)&v18->second.is_prev_dungeon_succeed >> 3) + 0x7FFF8000);
      if ( v19 != 0 && (((unsigned __int8)v18 + 9) & 7) >= v19 )
      {
        LOBYTE(p_prev_dungeon_id) = v19 != 0;
        __asan_report_store1(&v18->second.is_prev_dungeon_succeed, p_prev_dungeon_id, v18);
      }
      v18->second.is_prev_dungeon_succeed = 1;
      BaseActivity::notifyClientData(this, 0);
    }
    v21 = config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->activity_id_);
    }
    overall_config_ptr = data::ActivitySummerTimeV2ExcelConfigMgrBase::findSummerTimeV2OverallExcelConfig(
                           v21,
                           this->activity_id_);
    if ( overall_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&overall_config_ptr->dungeon_reward_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)overall_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&overall_config_ptr->dungeon_reward_id >> 3)
                                                                          + 0x7FFF8000) )
      {
        __asan_report_load4(&overall_config_ptr->dungeon_reward_id);
      }
      *(_DWORD *)(v3 + 64) = overall_config_ptr->dungeon_reward_id;
      if ( *(_DWORD *)(v3 + 64) )
      {
        settle_info = proto::DungeonSettleNotify::mutable_summer_time_v2_dungeon_settle_info(notify);
        if ( *(_BYTE *)(((unsigned __int64)&this->taken_reward_count_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->taken_reward_count_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->taken_reward_count_);
        }
        proto::SummerTimeV2DungeonSettleInfo::set_taken_reward_count(settle_info, this->taken_reward_count_);
        proto::SummerTimeV2DungeonSettleInfo::set_is_success(settle_info, 0);
        *(_DWORD *)(v3 + 80) = SummerTimeV2Activity::getCurDungeonStageRewardLimit(this);
        proto::SummerTimeV2DungeonSettleInfo::set_cur_dungeon_reward_limit(settle_info, *(_DWORD *)(v3 + 80));
        if ( *(_BYTE *)(((unsigned __int64)&this->taken_reward_count_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->taken_reward_count_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->taken_reward_count_);
        }
        if ( this->taken_reward_count_ < *(_DWORD *)(v3 + 80) )
        {
          ActionReason::ActionReason(
            (ActionReason *const)(v3 + 128),
            ACTION_REASON_SUMMER_TIME_V2_DUNGEON_REWARD,
            ITEM_LIMIT_ACTIVITY_SUMMER_TIME_V2);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          ItemComp = Player::getItemComp(this->player_);
          if ( PlayerItemComp::checkGrantReward(ItemComp, *(_DWORD *)(v3 + 64), (const ActionReason *)(v3 + 128)) )
          {
            common::milog::MiLogStream::create(
              &v40,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/summer_time_v2_activity.cpp",
              "onSettleDungeon",
              678);
            v27 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                    &v40,
                    (const char (*)[48])"[SUMMER_TIME_V2] checkGrantReward failed, uid: ");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            val = Player::getUid(this->player_);
            v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, &val);
            v29 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v28,
                    (const char (*)[14])" ,reward_id: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, (const unsigned int *)(v3 + 64));
            common::milog::MiLogStream::~MiLogStream(&v40);
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            v30 = Player::getItemComp(this->player_);
            PlayerItemComp::grantReward(v30, *(_DWORD *)(v3 + 64), (const ActionReason *)(v3 + 128), 0LL);
            if ( *(_BYTE *)(((unsigned __int64)&this->taken_reward_count_ >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->taken_reward_count_ >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&this->taken_reward_count_);
            }
            ++this->taken_reward_count_;
            BaseActivity::notifyClientData(this, 0);
            if ( *(_BYTE *)(((unsigned __int64)&this->taken_reward_count_ >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->taken_reward_count_ >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&this->taken_reward_count_);
            }
            proto::SummerTimeV2DungeonSettleInfo::set_taken_reward_count(settle_info, this->taken_reward_count_);
            proto::SummerTimeV2DungeonSettleInfo::set_is_success(settle_info, 1);
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v40,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/summer_time_v2_activity.cpp",
            "onSettleDungeon",
            669);
          v23 = common::milog::MiLogStream::operator<<<char [71],(char *[71])0>(
                  &v40,
                  (const char (*)[71])"[SUMMER_TIME_V2] taken_reward_count_ reach limit, taken_reward_count_:");
          v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &this->taken_reward_count_);
          v25 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                  v24,
                  (const char (*)[20])" cur_reward_limit: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, (const unsigned int *)(v3 + 80));
          common::milog::MiLogStream::~MiLogStream(&v40);
        }
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v40,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/summer_time_v2_activity.cpp",
        "onSettleDungeon",
        649);
      v22 = common::milog::MiLogStream::operator<<<char [73],(char *[73])0>(
              &v40,
              (const char (*)[73])"[SUMMER_TIME_V2] cannot find corresponding overall config, activity_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &this->activity_id_);
      common::milog::MiLogStream::~MiLogStream(&v40);
    }
  }
LABEL_62:
  if ( v41 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 693: range 0000000017FED354-0000000017FED87C
void __cdecl SummerTimeV2Activity::onPostEnterSceneEvent(
        SummerTimeV2Activity *const this,
        const PostEnterSceneEvent *event)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  char v5; // al
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  PlayerExhibitionComp *ExhibitionComp; // rax
  unsigned int val; // [rsp+1Ch] [rbp-F4h] BYREF
  const ActivitySummerTimeV2ExcelConfigMgr *config_mgr; // [rsp+20h] [rbp-F0h]
  const data::SummerTimeV2DungeonStageExcelConfig *dungeon_stage_config_ptr; // [rsp+28h] [rbp-E8h]
  std::shared_ptr<Config> v14; // [rsp+30h] [rbp-E0h] BYREF
  common::milog::MiLogStream v15; // [rsp+40h] [rbp-D0h] BYREF
  char v16[176]; // [rsp+60h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 18 cur_dungeon_id:703 64 16 25 cur_dungeon_scene_ptr:698 96 16 25 cur_cycle_dungeon_ptr:709";
  *(_QWORD *)(v2 + 16) = SummerTimeV2Activity::onPostEnterSceneEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  if ( !BaseActivity::isOpening(this, 0) || BaseActivity::isSettled(this) )
    goto LABEL_9;
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  if ( this->is_content_closed_ )
LABEL_9:
    v5 = 1;
  else
    v5 = 0;
  if ( !v5 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurScene<DungeonScene>((PlayerSceneComp *const)(v2 + 64));
    if ( !std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v2 + 64), 0LL) )
    {
      v6 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      *(_DWORD *)(v2 + 48) = DungeonScene::getDungeonId(v6);
      if ( SummerTimeV2Activity::isCycleDungeon(this, *(_DWORD *)(v2 + 48)) )
      {
        std::weak_ptr<DungeonScene>::lock((const std::weak_ptr<DungeonScene> *const)(v2 + 96));
        if ( std::operator!=<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v2 + 96))
          && std::operator==<DungeonScene,DungeonScene>(
               (const std::shared_ptr<DungeonScene> *)(v2 + 96),
               (const std::shared_ptr<DungeonScene> *)(v2 + 64)) )
        {
          common::milog::MiLogStream::create(
            &v15,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/summer_time_v2_activity.cpp",
            "onPostEnterSceneEvent",
            712);
          v8 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                 &v15,
                 (const char (*)[45])"[SUMMER_TIME_V2] reenter cycle dungeon, uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
          common::milog::MiLogStream::~MiLogStream(&v15);
        }
        else
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v14);
          config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14)->design_config.txt_config_mgr.activity_summer_time_v2_mgr;
          std::shared_ptr<Config>::~shared_ptr(&v14);
          dungeon_stage_config_ptr = ActivitySummerTimeV2ExcelConfigMgr::findStageConfigByDungeonId(
                                       config_mgr,
                                       *(_DWORD *)(v2 + 48));
          if ( dungeon_stage_config_ptr )
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            ExhibitionComp = Player::getExhibitionComp(this->player_);
            PlayerExhibitionComp::clearExhibitionReplaceableData(
              ExhibitionComp,
              &dungeon_stage_config_ptr->dungeon_exhibition_id_list);
            std::weak_ptr<DungeonScene>::operator=<DungeonScene>(
              &this->cur_cycle_dungeon_wtr_,
              (const std::shared_ptr<DungeonScene> *)(v2 + 64));
          }
          else
          {
            common::milog::MiLogStream::create(
              &v15,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/summer_time_v2_activity.cpp",
              "onPostEnterSceneEvent",
              720);
            v9 = common::milog::MiLogStream::operator<<<char [70],(char *[70])0>(
                   &v15,
                   (const char (*)[70])"[SUMMER_TIME_V2] dungeon is cycle dungeon but no config, dungeon_id: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
            common::milog::MiLogStream::~MiLogStream(&v15);
          }
        }
        std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 96));
      }
    }
    std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 64));
  }
  if ( v16 == (char *)v2 )
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

// Line 728: range 0000000017FED87E-0000000017FEDACB
void __cdecl SummerTimeV2Activity::onLeaveSceneEvent(SummerTimeV2Activity *const this, const LeaveSceneEvent *event)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  uint32_t DungeonId; // edx
  char v8[144]; // [rsp+20h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 25 cur_dungeon_scene_ptr:729 64 16 25 cur_cycle_dungeon_ptr:740";
  *(_QWORD *)(v2 + 16) = SummerTimeV2Activity::onLeaveSceneEvent;
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
    DungeonId = DungeonScene::getDungeonId(v5);
    if ( SummerTimeV2Activity::isCycleDungeon(this, DungeonId) )
    {
      std::weak_ptr<DungeonScene>::lock((const std::weak_ptr<DungeonScene> *const)(v2 + 64));
      if ( std::operator!=<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v2 + 64))
        && std::operator==<DungeonScene,DungeonScene>(
             (const std::shared_ptr<DungeonScene> *)(v2 + 64),
             (const std::shared_ptr<DungeonScene> *)(v2 + 32)) )
      {
        std::__weak_ptr<DungeonScene,(__gnu_cxx::_Lock_policy)2>::reset(&this->cur_cycle_dungeon_wtr_);
      }
      std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 64));
    }
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 32));
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
};

// Line 748: range 0000000017FEDACC-0000000017FEDB4E
bool __cdecl SummerTimeV2Activity::isCycleDungeon(const SummerTimeV2Activity *const this, uint32_t dungeon_id)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  bool isSummerTimeV2CycleDungeon; // bl
  std::shared_ptr<Config> v5[2]; // [rsp+10h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v5);
  v2 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v5);
  isSummerTimeV2CycleDungeon = ActivitySummerTimeV2ExcelConfigMgr::isSummerTimeV2CycleDungeon(
                                 &v2->design_config.txt_config_mgr.activity_summer_time_v2_mgr,
                                 dungeon_id);
  std::shared_ptr<Config>::~shared_ptr(v5);
  return isSummerTimeV2CycleDungeon;
};

// Line 754: range 0000000017FEDB50-0000000017FEDD5C
void __cdecl SummerTimeV2Activity::clearAllCycleDungeonExhibitionData(SummerTimeV2Activity *const this)
{
  const ActivitySummerTimeV2ExcelConfigMgr *v1; // rcx
  common::milog::MiLogStream *v2; // rax
  PlayerExhibitionComp *ExhibitionComp; // rax
  std::map<unsigned int,SummerTimeV2DungeonStageData>::iterator __for_begin; // [rsp+10h] [rbp-80h] BYREF
  std::map<unsigned int,SummerTimeV2DungeonStageData>::iterator __for_end; // [rsp+18h] [rbp-78h] BYREF
  const ActivitySummerTimeV2ExcelConfigMgr *config_mgr; // [rsp+20h] [rbp-70h]
  std::map<unsigned int,SummerTimeV2DungeonStageData> *__for_range; // [rsp+28h] [rbp-68h]
  const std::pair<unsigned int const,SummerTimeV2DungeonStageData> *v8; // [rsp+30h] [rbp-60h]
  std::tuple_element<0,const std::pair<unsigned int const,SummerTimeV2DungeonStageData> >::type *stage_id; // [rsp+38h] [rbp-58h]
  std::tuple_element<1,const std::pair<unsigned int const,SummerTimeV2DungeonStageData> >::type *_; // [rsp+40h] [rbp-50h]
  const data::SummerTimeV2DungeonStageExcelConfig *dungeon_stage_config_ptr; // [rsp+48h] [rbp-48h]
  std::shared_ptr<Config> v12; // [rsp+50h] [rbp-40h] BYREF
  common::milog::MiLogStream v13; // [rsp+60h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v12);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v12)->design_config.txt_config_mgr.activity_summer_time_v2_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v12);
  __for_range = &this->dungeon_stage_open_map_;
  __for_begin._M_node = std::map<unsigned int,SummerTimeV2DungeonStageData>::begin(&this->dungeon_stage_open_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,SummerTimeV2DungeonStageData>::end(&this->dungeon_stage_open_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v8 = std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2DungeonStageData>>::operator*(&__for_begin);
    stage_id = std::get<0ul,unsigned int const,SummerTimeV2DungeonStageData>(v8);
    _ = (std::tuple_element<1,const std::pair<unsigned int const,SummerTimeV2DungeonStageData> >::type *)std::get<1ul,unsigned int const,SummerTimeV2DungeonStageData>(v8);
    v1 = config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)stage_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(stage_id);
    }
    dungeon_stage_config_ptr = data::ActivitySummerTimeV2ExcelConfigMgrBase::findSummerTimeV2DungeonStageExcelConfig(
                                 v1,
                                 *stage_id);
    if ( dungeon_stage_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      ExhibitionComp = Player::getExhibitionComp(this->player_);
      PlayerExhibitionComp::clearExhibitionReplaceableData(
        ExhibitionComp,
        &dungeon_stage_config_ptr->dungeon_exhibition_id_list);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/summer_time_v2_activity.cpp",
        "clearAllCycleDungeonExhibitionData",
        761);
      v2 = common::milog::MiLogStream::operator<<<char [79],(char *[79])0>(
             &v13,
             (const char (*)[79])"[SUMMER_TIME_V2] stage id in dungeon_stage_open_map_ but no config, stage_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, stage_id);
      common::milog::MiLogStream::~MiLogStream(&v13);
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2DungeonStageData>>::operator++(&__for_begin);
  }
};

// Line 769: range 0000000017FEDD5E-0000000017FEE639
int32_t __cdecl SummerTimeV2Activity::restartDungeon(SummerTimeV2Activity *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  char v4; // al
  int32_t v5; // r14d
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t OwnerUid; // r14d
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  int32_t result; // eax
  int32_t check_ret; // [rsp+14h] [rbp-15Ch]
  PlayerDungeonComp *dungeon_comp; // [rsp+18h] [rbp-158h]
  DungeonExcelConfigMgr *dungeon_config_mgr; // [rsp+20h] [rbp-150h]
  const data::DungeonExcelConfig *dungeon_config_ptr; // [rsp+28h] [rbp-148h]
  int32_t *ret; // [rsp+30h] [rbp-140h]
  std::shared_ptr<Config> v20; // [rsp+40h] [rbp-130h] BYREF
  std::pair<int,std::shared_ptr<DungeonScene> > __in; // [rsp+50h] [rbp-120h] BYREF
  EnterDungeonOption v22; // [rsp+70h] [rbp-100h] BYREF
  common::milog::MiLogStream v23; // [rsp+90h] [rbp-E0h] BYREF
  std::map<unsigned int,unsigned int> level_config_id_map; // [rsp+B0h] [rbp-C0h] BYREF
  char v25[144]; // [rsp+E0h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 14 dungeon_id:786 64 16 21 dungeon_scene_ptr:775";
  *(_QWORD *)(v1 + 16) = SummerTimeV2Activity::restartDungeon;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  if ( !BaseActivity::isOpening(this, 0) || BaseActivity::isSettled(this) )
    goto LABEL_9;
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  if ( this->is_content_closed_ )
LABEL_9:
    v4 = 1;
  else
    v4 = 0;
  if ( v4 )
  {
    v5 = -1;
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
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/summer_time_v2_activity.cpp",
        "restartDungeon",
        778);
      common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
        &v23,
        (const char (*)[43])"[SUMMER_TIME_V2] dungeon_scene_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v23);
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
        GameserverService::getConfig((GameserverService *const)&v20);
        dungeon_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20)->design_config.txt_config_mgr.dungeon_config_mgr;
        std::shared_ptr<Config>::~shared_ptr(&v20);
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
          if ( dungeon_config_ptr->type == DUNGEON_SUMMER_V2 )
          {
            v11 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
            if ( DungeonScene::getDungeonResult(v11) == DUNGEON_RESULT_FAIL )
            {
              check_ret = PlayerDungeonComp::checkRestartDungeon(dungeon_comp, DUNGEON_RESTART_REASON_DIE_RETRY);
              if ( check_ret )
              {
                common::milog::MiLogStream::create(
                  &v23,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/player/activity/summer_time_v2_activity.cpp",
                  "restartDungeon",
                  807);
                v13 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
                        &v23,
                        (const char (*)[58])"[SUMMER_TIME_V2] checkRestartDungeon failed, dungeon_id: ");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v13,
                  (const unsigned int *)(v1 + 48));
                common::milog::MiLogStream::~MiLogStream(&v23);
                v5 = check_ret;
              }
              else
              {
                memset(&v22, 0, sizeof(v22));
                EnterDungeonOption::EnterDungeonOption(&v22);
                memset(&level_config_id_map, 0, sizeof(level_config_id_map));
                std::map<unsigned int,unsigned int>::map(&level_config_id_map);
                PlayerDungeonComp::restartDungeon(&__in, dungeon_comp, &level_config_id_map, v22);
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
                    &v23,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/activity/summer_time_v2_activity.cpp",
                    "restartDungeon",
                    814);
                  common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                    &v23,
                    (const char (*)[39])"[SUMMER_TIME_V2] restartDungeon failed");
                  common::milog::MiLogStream::~MiLogStream(&v23);
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
            else
            {
              common::milog::MiLogStream::create(
                &v23,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/summer_time_v2_activity.cpp",
                "restartDungeon",
                801);
              v12 = common::milog::MiLogStream::operator<<<char [84],(char *[84])0>(
                      &v23,
                      (const char (*)[84])"[SUMMER_TIME_V2] only a failed SUMMERV2 dungeon can specially restart, dungeon_id: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v12,
                (const unsigned int *)(v1 + 48));
              common::milog::MiLogStream::~MiLogStream(&v23);
              v5 = -1;
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v23,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/summer_time_v2_activity.cpp",
              "restartDungeon",
              796);
            v10 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
                    &v23,
                    (const char (*)[62])"[SUMMER_TIME_V2] restart a no SUMMER_V2 dungeon, dungeon_id: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v1 + 48));
            common::milog::MiLogStream::~MiLogStream(&v23);
            v5 = -1;
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v23,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/activity/summer_time_v2_activity.cpp",
            "restartDungeon",
            791);
          v9 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
                 &v23,
                 (const char (*)[61])"[SUMMER_TIME_V2] findDungeonExcelConfig failed, dungeon_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v1 + 48));
          common::milog::MiLogStream::~MiLogStream(&v23);
          v5 = -1;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v23,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/summer_time_v2_activity.cpp",
          "restartDungeon",
          783);
        common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
          &v23,
          (const char (*)[61])"[SUMMER_TIME_V2] guest can not send DungeonRestartReq, error");
        common::milog::MiLogStream::~MiLogStream(&v23);
        v5 = -1;
      }
    }
    std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v1 + 64));
  }
  result = v5;
  if ( v25 == (char *)v1 )
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

// Line 821: range 0000000017FEE63A-0000000017FEEF12
void __cdecl SummerTimeV2Activity::onSkillEvent(SummerTimeV2Activity *const this, const SkillEvent *skill_event)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // al
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t DungeonId; // edx
  uint32_t v8; // esi
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  uint32_t Uid; // r14d
  PlayerAvatarComp *AvatarComp; // rcx
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  uint32_t SkillComp; // ecx
  std::__shared_ptr_access<Skill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  PlayerExhibitionComp *ExhibitionComp; // rax
  common::milog::MiLogStream v19; // [rsp+20h] [rbp-130h] BYREF
  char v20[272]; // [rsp+40h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 16 17 cur_scene_ptr:827 64 16 21 dungeon_scene_ptr:832 96 16 21 entity_avatar_ptr:843 128 1"
                        "6 14 player_ptr:850 160 16 14 avatar_ptr:861 192 16 13 skill_ptr:874";
  *(_QWORD *)(v2 + 16) = SummerTimeV2Activity::onSkillEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -219021312;
  v4[536862726] = -202178560;
  if ( !BaseActivity::isOpening(this, 0) || BaseActivity::isSettled(this) )
    goto LABEL_9;
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  if ( this->is_content_closed_ )
LABEL_9:
    v5 = 1;
  else
    v5 = 0;
  if ( !v5 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 32));
    if ( !std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 32)) )
    {
      std::dynamic_pointer_cast<DungeonScene,Scene>((const std::shared_ptr<Scene> *)(v2 + 64));
      if ( !std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v2 + 64), 0LL) )
      {
        v6 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        DungeonId = DungeonScene::getDungeonId(v6);
        if ( SummerTimeV2Activity::isCycleDungeon(this, DungeonId) )
        {
          v8 = (unsigned int)std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          if ( *(_BYTE *)(((unsigned __int64)&skill_event->avatar_entity_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&skill_event->avatar_entity_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&skill_event->avatar_entity_id);
          }
          Scene::findEntity<Avatar>((const Scene *const)(v2 + 96), v8);
          if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v2 + 96)) )
          {
            common::milog::MiLogStream::create(
              &v19,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/summer_time_v2_activity.cpp",
              "onSkillEvent",
              846);
            common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
              &v19,
              (const char (*)[36])"[SUMMER_TIME_V2] avatar_ptr is null");
            common::milog::MiLogStream::~MiLogStream(&v19);
          }
          else
          {
            v9 = (unsigned __int64)std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
              v9 = __asan_report_load8(v9);
            v10 = *(_QWORD *)v9 + 152LL;
            if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
              v9 = __asan_report_load8(*(_QWORD *)v9 + 152LL);
            (*(void (__fastcall **)(unsigned __int64, unsigned __int64))v10)(v2 + 128, v9);
            if ( !std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 128)) )
            {
              v11 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
              Uid = Player::getUid(v11);
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->player_);
              if ( Uid == Player::getUid(this->player_) )
              {
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8(&this->player_);
                AvatarComp = Player::getAvatarComp(this->player_);
                if ( *(_BYTE *)(((unsigned __int64)&skill_event->avatar_guid >> 3) + 0x7FFF8000) )
                  __asan_report_load8(&skill_event->avatar_guid);
                PlayerAvatarComp::findAvatar((const PlayerAvatarComp *const)(v2 + 160), (uint64_t)AvatarComp);
                if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v2 + 160)) )
                {
                  common::milog::MiLogStream::create(
                    &v19,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/activity/summer_time_v2_activity.cpp",
                    "onSkillEvent",
                    864);
                  common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                    &v19,
                    (const char (*)[36])"[SUMMER_TIME_V2] avatar_ptr is null");
                  common::milog::MiLogStream::~MiLogStream(&v19);
                }
                else if ( std::operator!=<Avatar,Avatar>(
                            (const std::shared_ptr<Avatar> *)(v2 + 160),
                            (const std::shared_ptr<Avatar> *)(v2 + 96)) )
                {
                  common::milog::MiLogStream::create(
                    &v19,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/activity/summer_time_v2_activity.cpp",
                    "onSkillEvent",
                    870);
                  common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
                    &v19,
                    (const char (*)[60])"[SUMMER_TIME_V2] avatar_ptr and entity_avatar_ptr not match");
                  common::milog::MiLogStream::~MiLogStream(&v19);
                }
                else
                {
                  v14 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
                  SkillComp = (unsigned int)Avatar::getSkillComp(v14);
                  if ( *(_BYTE *)(((unsigned __int64)&skill_event->skill_id >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&skill_event->skill_id >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_load4(&skill_event->skill_id);
                  }
                  SkillComp::findSkill((const SkillComp *const)(v2 + 192), SkillComp);
                  if ( std::operator==<Skill>(0LL, (const std::shared_ptr<Skill> *)(v2 + 192)) )
                  {
                    common::milog::MiLogStream::create(
                      &v19,
                      &common::milog::MiLogDefault::default_log_obj_,
                      1u,
                      "./src/player/activity/summer_time_v2_activity.cpp",
                      "onSkillEvent",
                      877);
                    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                      &v19,
                      (const char (*)[35])"[SUMMER_TIME_V2] skill_ptr is null");
                    common::milog::MiLogStream::~MiLogStream(&v19);
                  }
                  else
                  {
                    v16 = std::__shared_ptr_access<Skill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Skill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
                    if ( Skill::getType(v16) == SKILL_ENERGY )
                    {
                      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                        __asan_report_load8(&this->player_);
                      ExhibitionComp = Player::getExhibitionComp(this->player_);
                      PlayerExhibitionComp::addReplaceableDataByServer(
                        ExhibitionComp,
                        EXHIBITION_SERVER_TRIGGER_SUMMER_V2_DUNGEON_ELEMENT_BURST_COUNT,
                        1u);
                    }
                  }
                  std::shared_ptr<Skill>::~shared_ptr((std::shared_ptr<Skill> *const)(v2 + 192));
                }
                std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 160));
              }
            }
            std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 128));
          }
          std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 96));
        }
      }
      std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 64));
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 32));
  }
  if ( v20 == (char *)v2 )
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
};

// Line 890: range 0000000017FEEF14-0000000017FEF252
uint32_t __cdecl SummerTimeV2Activity::getCurDungeonStageRewardLimit(const SummerTimeV2Activity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::reverse_iterator<std::_Rb_tree_const_iterator<std::pair<unsigned int const,SummerTimeV2DungeonStageData> > >::pointer v4; // rdx
  bool *p_is_open; // rax
  std::reverse_iterator<std::_Rb_tree_const_iterator<std::pair<unsigned int const,SummerTimeV2DungeonStageData> > >::pointer v6; // rax
  _DWORD *p_first; // rdx
  common::milog::MiLogStream *v8; // rax
  uint32_t result; // eax
  std::map<unsigned int,SummerTimeV2DungeonStageData> v10; // [rsp+18h] [rbp-C8h] BYREF
  char v11[128]; // [rsp+60h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 28 cur_max_dungeon_stage_id:897 64 8 8 iter:893";
  *(_QWORD *)(v1 + 16) = SummerTimeV2Activity::getCurDungeonStageRewardLimit;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202116352;
  std::map<unsigned int,SummerTimeV2DungeonStageData>::crbegin((const std::map<unsigned int,SummerTimeV2DungeonStageData> *const)(v1 + 64));
  while ( 1 )
  {
    std::map<unsigned int,SummerTimeV2DungeonStageData>::crend(&v10);
    if ( !std::operator!=<std::_Rb_tree_const_iterator<std::pair<unsigned int const,SummerTimeV2DungeonStageData>>>(
            (const std::reverse_iterator<std::_Rb_tree_const_iterator<std::pair<unsigned int const,SummerTimeV2DungeonStageData> > > *)(v1 + 64),
            (const std::reverse_iterator<std::_Rb_tree_const_iterator<std::pair<unsigned int const,SummerTimeV2DungeonStageData> > > *)&v10) )
    {
      result = 0;
      goto LABEL_18;
    }
    v4 = std::reverse_iterator<std::_Rb_tree_const_iterator<std::pair<unsigned int const,SummerTimeV2DungeonStageData>>>::operator->((const std::reverse_iterator<std::_Rb_tree_const_iterator<std::pair<unsigned int const,SummerTimeV2DungeonStageData> > > *const)(v1 + 64));
    p_is_open = &v4->second.is_open;
    if ( *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_open & 7) >= *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(p_is_open);
    }
    if ( v4->second.is_open )
      break;
    std::reverse_iterator<std::_Rb_tree_const_iterator<std::pair<unsigned int const,SummerTimeV2DungeonStageData>>>::operator++(
      (std::reverse_iterator<std::_Rb_tree_const_iterator<std::pair<unsigned int const,SummerTimeV2DungeonStageData> > > *const)&v10,
      v1 + 64);
  }
  v6 = std::reverse_iterator<std::_Rb_tree_const_iterator<std::pair<unsigned int const,SummerTimeV2DungeonStageData>>>::operator->((const std::reverse_iterator<std::_Rb_tree_const_iterator<std::pair<unsigned int const,SummerTimeV2DungeonStageData> > > *const)(v1 + 64));
  p_first = &v6->first;
  if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v6);
  }
  *(_DWORD *)(v1 + 48) = *p_first;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v10._M_t._M_impl._M_header._M_left);
  *(_QWORD *)&v10._M_t._M_impl._M_header._M_color = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v10._M_t._M_impl._M_header._M_left)->design_config.txt_config_mgr.activity_summer_time_v2_mgr;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v10._M_t._M_impl._M_header._M_left);
  v10._M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)data::ActivitySummerTimeV2ExcelConfigMgrBase::findSummerTimeV2DungeonStageExcelConfig(
                                                                               *(const data::ActivitySummerTimeV2ExcelConfigMgrBase *const *)&v10._M_t._M_impl._M_header._M_color,
                                                                               *(_DWORD *)(v1 + 48));
  if ( v10._M_t._M_impl._M_header._M_parent )
  {
    if ( *(_BYTE *)(((unsigned __int64)&v10._M_t._M_impl._M_header._M_parent[2]._M_parent >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v10._M_t._M_impl._M_header._M_parent[2]._M_parent >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&v10._M_t._M_impl._M_header._M_parent[2]._M_parent);
    }
    result = (uint32_t)v10._M_t._M_impl._M_header._M_parent[2]._M_parent;
  }
  else
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v10._M_t._M_impl._M_node_count,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/summer_time_v2_activity.cpp",
      "getCurDungeonStageRewardLimit",
      902);
    v8 = common::milog::MiLogStream::operator<<<char [79],(char *[79])0>(
           (common::milog::MiLogStream *const)&v10._M_t._M_impl._M_node_count,
           (const char (*)[79])"[SUMMER_TIME_V2] stage id in dungeon_stage_open_map_ but no config, stage_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v1 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v10._M_t._M_impl._M_node_count);
    result = 0;
  }
LABEL_18:
  if ( v11 == (char *)v1 )
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

// Line 914: range 0000000017FEF254-0000000017FEF3E4
_BOOL8 __fastcall SummerTimeV2Activity::isActivityBoatStageOpen(
        const SummerTimeV2Activity *const this,
        uint32_t stage_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  _BOOL8 result; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,SummerTimeV2BoatStageData> >::pointer v6; // rdx
  bool *p_is_open; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,SummerTimeV2BoatStageData> >::_Self __y; // [rsp+18h] [rbp-88h] BYREF
  char v9[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 stage_id:913 64 8 8 iter:915";
  *(_QWORD *)(v2 + 16) = SummerTimeV2Activity::isActivityBoatStageOpen;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = stage_id;
  *(std::map<unsigned int,SummerTimeV2BoatStageData>::const_iterator *)(v2 + 64) = std::map<unsigned int,SummerTimeV2BoatStageData>::find(
                                                                                     &this->boat_stage_open_map_,
                                                                                     (const std::map<unsigned int,SummerTimeV2BoatStageData>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,SummerTimeV2BoatStageData>::end(&this->boat_stage_open_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,SummerTimeV2BoatStageData> >::_Self *)(v2 + 64),
         &__y) )
  {
    result = 0LL;
  }
  else
  {
    v6 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,SummerTimeV2BoatStageData>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,SummerTimeV2BoatStageData> > *const)(v2 + 64));
    p_is_open = &v6->second.is_open;
    if ( *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_open & 7) >= *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(p_is_open);
    }
    result = v6->second.is_open;
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

// Line 924: range 0000000017FEF3E6-0000000017FEF951
__int64 __fastcall SummerTimeV2Activity::openActivityBoatStage(
        SummerTimeV2Activity *const this,
        uint32_t stage_id,
        bool is_force)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2BoatStageData> >::_Self *p_y; // rsi
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  SummerTimeV2BoatStageData *v11; // rax
  unsigned int *v12; // rcx
  SummerTimeV2BoatStageData *v13; // r8
  common::milog::MiLogStream *v14; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2BoatStageData> >::pointer v15; // rdx
  char v16; // cl
  common::milog::MiLogStream *v17; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2BoatStageData> >::_Self __y; // [rsp+18h] [rbp-F8h] BYREF
  const ActivitySummerTimeV2ExcelConfigMgr *config_mgr; // [rsp+20h] [rbp-F0h]
  std::shared_ptr<Config> v22; // [rsp+30h] [rbp-E0h] BYREF
  common::milog::MiLogStream v23; // [rsp+40h] [rbp-D0h] BYREF
  char v24[176]; // [rsp+60h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 12 stage_id:923 64 8 8 iter:933 96 12 19 boat_stage_data:941";
  *(_QWORD *)(v3 + 16) = SummerTimeV2Activity::openActivityBoatStage;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202177536;
  *(_DWORD *)(v3 + 48) = stage_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v22);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22)->design_config.txt_config_mgr.activity_summer_time_v2_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v22);
  if ( !data::ActivitySummerTimeV2ExcelConfigMgrBase::findSummerTimeV2BoatStageExcelConfig(
          config_mgr,
          *(_DWORD *)(v3 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/summer_time_v2_activity.cpp",
      "openActivityBoatStage",
      930);
    v6 = common::milog::MiLogStream::operator<<<char [73],(char *[73])0>(
           &v23,
           (const char (*)[73])"[SUMMER_TIME_V2] findSummerTimeV2BoatStageExcelConfig failed, stage_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v23);
    result = 0xFFFFFFFFLL;
    goto LABEL_16;
  }
  *(std::map<unsigned int,SummerTimeV2BoatStageData>::iterator *)(v3 + 64) = std::map<unsigned int,SummerTimeV2BoatStageData>::find(
                                                                               &this->boat_stage_open_map_,
                                                                               (const std::map<unsigned int,SummerTimeV2BoatStageData>::key_type *)(v3 + 48));
  __y._M_node = std::map<unsigned int,SummerTimeV2BoatStageData>::end(&this->boat_stage_open_map_)._M_node;
  p_y = &__y;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2BoatStageData> >::_Self *)(v3 + 64),
         &__y) )
  {
    if ( !is_force )
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/summer_time_v2_activity.cpp",
        "openActivityBoatStage",
        938);
      v9 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
             &v23,
             (const char (*)[53])"[SUMMER_TIME_V2] open unexist boat stage, stage_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v23);
      result = 0xFFFFFFFFLL;
      goto LABEL_16;
    }
    *(_DWORD *)(v3 + 96) = 0;
    *(_BYTE *)(v3 + 100) = 0;
    *(_DWORD *)(v3 + 104) = 0;
    if ( SummerTimeV2BoatStageData::init((SummerTimeV2BoatStageData *const)(v3 + 96), *(_DWORD *)(v3 + 48)) )
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/summer_time_v2_activity.cpp",
        "openActivityBoatStage",
        944);
      v10 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
              &v23,
              (const char (*)[66])"[SUMMER_TIME_V2] SummerTimeV2BoatStageData init failed, stage id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v23);
      result = 0xFFFFFFFFLL;
      goto LABEL_16;
    }
    *(_BYTE *)(v3 + 100) = 1;
    v11 = std::move<SummerTimeV2BoatStageData &>((SummerTimeV2BoatStageData *)(v3 + 96));
    std::map<unsigned int,SummerTimeV2BoatStageData>::emplace<unsigned int &,SummerTimeV2BoatStageData>(
      &this->boat_stage_open_map_,
      (unsigned int *)(v3 + 48),
      v11,
      v12,
      v13);
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/summer_time_v2_activity.cpp",
      "openActivityBoatStage",
      950);
    v14 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
            &v23,
            (const char (*)[50])"[SUMMER_TIME_V2] boat stage force open, stage_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v23);
  }
  else
  {
    v15 = std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2BoatStageData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2BoatStageData> > *const)(v3 + 64));
    v16 = *(_BYTE *)(((unsigned __int64)&v15->second.is_open >> 3) + 0x7FFF8000);
    if ( v16 != 0 && (((unsigned __int8)v15 + 8) & 7) >= v16 )
    {
      LOBYTE(p_y) = v16 != 0;
      __asan_report_store1(&v15->second.is_open, p_y, v15);
    }
    v15->second.is_open = 1;
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/summer_time_v2_activity.cpp",
      "openActivityBoatStage",
      955);
    v17 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
            &v23,
            (const char (*)[51])"[SUMMER_TIME_V2] new boat stage is open, stage id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v23);
  }
  BaseActivity::notifyClientData(this, 0);
  result = 0LL;
LABEL_16:
  if ( v24 == (char *)v3 )
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

// Line 963: range 0000000017FEF952-0000000017FEFC4A
void __cdecl SummerTimeV2Activity::onSummerTimeV2BoatGallerySettleEvent(
        SummerTimeV2Activity *const this,
        const SummerTimeV2BoatGallerySettleEvent *event)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  proto::SummerTimeV2BoatGallerySettleInfo *v5; // rax
  common::milog::MiLogStream v6; // [rsp+10h] [rbp-F0h] BYREF
  char v7[208]; // [rsp+30h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 1 17 is_new_record:964 64 4 17 boat_stage_id:965 80 40 10 notify:973";
  *(_QWORD *)(v2 + 16) = SummerTimeV2Activity::onSummerTimeV2BoatGallerySettleEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = 61956;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  *(_BYTE *)(v2 + 48) = 0;
  *(_DWORD *)(v2 + 64) = 0;
  if ( SummerTimeV2Activity::tryRecordGalleryScore(this, event, (bool *)(v2 + 48), (uint32_t *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/summer_time_v2_activity.cpp",
      "onSummerTimeV2BoatGallerySettleEvent",
      968);
    common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
      &v6,
      (const char (*)[46])"[SUMMER_TIME_V2] tryRecordGalleryScore failed");
    common::milog::MiLogStream::~MiLogStream(&v6);
  }
  else
  {
    proto::SummerTimeV2BoatSettleNotify::SummerTimeV2BoatSettleNotify((proto::SummerTimeV2BoatSettleNotify *const)(v2 + 80));
    v5 = proto::SummerTimeV2BoatSettleNotify::mutable_settle_info((proto::SummerTimeV2BoatSettleNotify *const)(v2 + 80));
    proto::SummerTimeV2BoatGallerySettleInfo::operator=(v5, &event->gallery_settle_info);
    proto::SummerTimeV2BoatSettleNotify::set_is_new_record(
      (proto::SummerTimeV2BoatSettleNotify *const)(v2 + 80),
      *(_BYTE *)(v2 + 48));
    if ( *(_BYTE *)(((unsigned __int64)&event->gallery_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->gallery_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&event->gallery_id);
    }
    proto::SummerTimeV2BoatSettleNotify::set_gallery_id(
      (proto::SummerTimeV2BoatSettleNotify *const)(v2 + 80),
      event->gallery_id);
    proto::SummerTimeV2BoatSettleNotify::set_stage_id(
      (proto::SummerTimeV2BoatSettleNotify *const)(v2 + 80),
      *(_DWORD *)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 80));
    BaseActivity::notifyClientData(this, 0);
    proto::SummerTimeV2BoatSettleNotify::~SummerTimeV2BoatSettleNotify((proto::SummerTimeV2BoatSettleNotify *const)(v2 + 80));
  }
  if ( v7 == (char *)v2 )
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

// Line 984: range 0000000017FEFC4C-0000000017FF04BE
int32_t __cdecl SummerTimeV2Activity::tryRecordGalleryScore(
        SummerTimeV2Activity *const this,
        const SummerTimeV2BoatGallerySettleEvent *event,
        bool *is_new_record,
        uint32_t *boat_stage_id)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r13
  char v7; // al
  common::milog::MiLogStream *v8; // rcx
  int32_t result; // eax
  __int64 gallery_id; // rsi
  common::milog::MiLogStream *v11; // rax
  PlayerMpComp *MpComp; // rax
  common::milog::MiLogStream *v13; // r12
  uint32_t stage_id; // ecx
  char v15; // dl
  __int64 v16; // rdx
  std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2BoatStageData> >::_Self *p_y; // rsi
  std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2BoatStageData> >::pointer v18; // rdx
  bool *p_is_open; // rax
  char v20; // al
  common::milog::MiLogStream *v21; // rdx
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // r12
  google::protobuf::uint32 v26; // r14d
  std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2BoatStageData> >::pointer v27; // rdx
  uint32_t *p_best_score; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2BoatStageData> >::pointer v29; // rdx
  uint32_t *v30; // rax
  char v31; // al
  google::protobuf::uint32 v32; // r14d
  std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2BoatStageData> >::pointer v33; // rdx
  char v34; // cl
  __int64 v35; // rsi
  __int64 v36; // rdx
  unsigned int val; // [rsp+24h] [rbp-BCh] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2BoatStageData> >::_Self __y; // [rsp+28h] [rbp-B8h] BYREF
  const ActivitySummerTimeV2ExcelConfigMgr *config_mgr; // [rsp+30h] [rbp-B0h]
  const data::SummerTimeV2BoatStageExcelConfig *boat_config_ptr; // [rsp+38h] [rbp-A8h]
  std::shared_ptr<Config> v44; // [rsp+40h] [rbp-A0h] BYREF
  common::milog::MiLogStream v45; // [rsp+50h] [rbp-90h] BYREF
  char v46[112]; // [rsp+70h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v46;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 8 9 iter:1007";
  *(_QWORD *)(v4 + 16) = SummerTimeV2Activity::tryRecordGalleryScore;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116352;
  if ( !BaseActivity::isOpening(this, 0) || BaseActivity::isSettled(this) )
    goto LABEL_9;
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  if ( this->is_content_closed_ )
LABEL_9:
    v7 = 1;
  else
    v7 = 0;
  if ( v7 )
  {
    common::milog::MiLogStream::create(
      &v45,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/summer_time_v2_activity.cpp",
      "tryRecordGalleryScore",
      988);
    v8 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
           &v45,
           (const char (*)[44])"[SUMMER_TIME_V2] activity has been closed. ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v8, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v45);
    result = 860;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v44);
    config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v44)->design_config.txt_config_mgr.activity_summer_time_v2_mgr;
    std::shared_ptr<Config>::~shared_ptr(&v44);
    if ( *(_BYTE *)(((unsigned __int64)&event->gallery_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->gallery_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&event->gallery_id);
    }
    gallery_id = event->gallery_id;
    boat_config_ptr = ActivitySummerTimeV2ExcelConfigMgr::findBoatConfigByGalleryId(config_mgr, gallery_id);
    if ( boat_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      MpComp = Player::getMpComp(this->player_);
      if ( PlayerMpComp::isInMpMode(MpComp) )
      {
        common::milog::MiLogStream::create(
          &v45,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/summer_time_v2_activity.cpp",
          "tryRecordGalleryScore",
          1002);
        v13 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                &v45,
                (const char (*)[56])"[SUMMER_TIME_V2] boat gallery settled in mp mode, uid: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
        common::milog::MiLogStream::~MiLogStream(&v45);
        result = 1202;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&boat_config_ptr->stage_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&boat_config_ptr->stage_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&boat_config_ptr->stage_id);
        }
        stage_id = boat_config_ptr->stage_id;
        v15 = *(_BYTE *)(((unsigned __int64)boat_stage_id >> 3) + 0x7FFF8000);
        LOBYTE(gallery_id) = v15 != 0;
        v16 = (v15 != 0) & (unsigned __int8)((char)(((unsigned __int8)boat_stage_id & 7) + 3) >= v15);
        if ( (_BYTE)v16 )
          __asan_report_store4(boat_stage_id, gallery_id, v16);
        *boat_stage_id = stage_id;
        *(std::map<unsigned int,SummerTimeV2BoatStageData>::iterator *)(v4 + 32) = std::map<unsigned int,SummerTimeV2BoatStageData>::find(
                                                                                     &this->boat_stage_open_map_,
                                                                                     boat_stage_id);
        __y._M_node = std::map<unsigned int,SummerTimeV2BoatStageData>::end(&this->boat_stage_open_map_)._M_node;
        p_y = &__y;
        if ( std::operator==(
               (const std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2BoatStageData> >::_Self *)(v4 + 32),
               &__y) )
        {
          goto LABEL_33;
        }
        v18 = std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2BoatStageData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2BoatStageData> > *const)(v4 + 32));
        p_is_open = &v18->second.is_open;
        if ( *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) != 0
          && ((unsigned __int8)p_is_open & 7) >= *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(p_is_open);
        }
        if ( !v18->second.is_open )
LABEL_33:
          v20 = 1;
        else
          v20 = 0;
        if ( v20 )
        {
          common::milog::MiLogStream::create(
            &v45,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/summer_time_v2_activity.cpp",
            "tryRecordGalleryScore",
            1010);
          v21 = common::milog::MiLogStream::operator<<<char [73],(char *[73])0>(
                  &v45,
                  (const char (*)[73])"[SUMMER_TIME_V2] boat gallery settled when stage is not open, stage id: ");
          v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, boat_stage_id);
          v23 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v22, (const char (*)[13])"gallery id: ");
          v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &event->gallery_id);
          v25 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v24, (const char (*)[6])"uid: ");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &val);
          common::milog::MiLogStream::~MiLogStream(&v45);
          result = -1;
        }
        else
        {
          if ( proto::SummerTimeV2BoatGallerySettleInfo::reason(&event->gallery_settle_info) != GALLERY_STOP_LUA_INTERRUPT_SUCCESS )
            goto LABEL_47;
          v26 = proto::SummerTimeV2BoatGallerySettleInfo::used_time(&event->gallery_settle_info);
          v27 = std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2BoatStageData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2BoatStageData> > *const)(v4 + 32));
          p_best_score = &v27->second.best_score;
          if ( *(_BYTE *)(((unsigned __int64)p_best_score >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)p_best_score & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_best_score >> 3)
                                                                           + 0x7FFF8000) )
          {
            __asan_report_load4(p_best_score);
          }
          if ( v26 < v27->second.best_score )
            goto LABEL_46;
          v29 = std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2BoatStageData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2BoatStageData> > *const)(v4 + 32));
          v30 = &v29->second.best_score;
          if ( *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v30 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v30);
          }
          if ( v29->second.best_score )
LABEL_47:
            v31 = 0;
          else
LABEL_46:
            v31 = 1;
          if ( v31 )
          {
            v32 = proto::SummerTimeV2BoatGallerySettleInfo::used_time(&event->gallery_settle_info);
            v33 = std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2BoatStageData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2BoatStageData> > *const)(v4 + 32));
            v34 = *(_BYTE *)(((unsigned __int64)&v33->second.best_score >> 3) + 0x7FFF8000);
            if ( v34 != 0 && (char)((((_BYTE)v33 + 12) & 7) + 3) >= v34 )
            {
              LOBYTE(p_y) = v34 != 0;
              __asan_report_store4(&v33->second.best_score, p_y, v33);
            }
            v33->second.best_score = v32;
            v35 = (unsigned __int8)is_new_record & 7;
            v36 = (*(_BYTE *)(((unsigned __int64)is_new_record >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v35 >= *(_BYTE *)(((unsigned __int64)is_new_record >> 3) + 0x7FFF8000));
            if ( (_BYTE)v36 )
              __asan_report_store1(is_new_record, v35, v36);
            *is_new_record = 1;
          }
          result = 0;
        }
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v45,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/summer_time_v2_activity.cpp",
        "tryRecordGalleryScore",
        996);
      v11 = common::milog::MiLogStream::operator<<<char [86],(char *[86])0>(
              &v45,
              (const char (*)[86])"[SUMMER_TIME_V2] SummerTimeV2BoatGallerySettleEvent triggered by invalid gallery_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &event->gallery_id);
      common::milog::MiLogStream::~MiLogStream(&v45);
      result = -1;
    }
  }
  if ( v46 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1027: range 0000000017FF04C0-0000000017FF1AA7
__int64 __fastcall SummerTimeV2Activity::tryRestartBoatGallery(SummerTimeV2Activity *const this, uint32_t gallery_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // al
  unsigned int v6; // r14d
  PlayerSceneComp *SceneComp; // rax
  PlayerMpComp *MpComp; // rax
  common::milog::MiLogStream *v9; // r14
  common::milog::MiLogStream *v10; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2BoatStageData> >::pointer v11; // rdx
  bool *p_is_open; // rax
  char v13; // al
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // r14
  Scene *v19; // rax
  SceneGalleryComp *GalleryComp; // rax
  PlayerSceneComp *v21; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  common::milog::MiLogStream *v28; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  uint32_t AvatarComp; // eax
  Group *v36; // rax
  ChallengeComp *ChallengeComp; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  Vector3 *p_rot; // r15
  Vector3 *p_pos; // r14
  Scene *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rax
  uint32_t v57; // r14d
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // rax
  common::milog::MiLogStream *v61; // rax
  common::milog::MiLogStream *v62; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v63; // rax
  __int64 result; // rax
  PlayerSceneComp *v65; // [rsp+8h] [rbp-218h]
  uint32_t vehicle_gadget_id; // [rsp+2Ch] [rbp-1F4h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2BoatStageData> >::_Self __y; // [rsp+30h] [rbp-1F0h] BYREF
  const ActivitySummerTimeV2ExcelConfigMgr *config_mgr; // [rsp+38h] [rbp-1E8h]
  const data::SummerTimeV2BoatStageExcelConfig *boat_config_ptr; // [rsp+40h] [rbp-1E0h]
  const GroupScriptConfig *group_script_config_ptr; // [rsp+48h] [rbp-1D8h]
  const PointScriptConfig *avatar_point_config_ptr; // [rsp+50h] [rbp-1D0h]
  const PointScriptConfig *boat_point_config_ptr; // [rsp+58h] [rbp-1C8h]
  std::shared_ptr<Player> v73; // [rsp+60h] [rbp-1C0h] BYREF
  common::milog::MiLogStream v74; // [rsp+70h] [rbp-1B0h] BYREF
  TransferReason p_reason; // [rsp+90h] [rbp-190h] BYREF
  char v76[336]; // [rsp+D0h] [rbp-150h] BYREF

  v2 = (unsigned __int64)v76;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "11 32 4 18 boat_stage_id:1055 48 4 20 revive_group_id:1090 64 4 28 revive_avatar_config_id:1091 "
                        "80 4 20 revive_scene_id:1098 96 4 26 revive_boat_config_id:1132 112 4 15 gallery_id:1026 128 8 9"
                        " iter:1056 160 16 14 scene_ptr:1064 192 16 15 avatar_ptr:1082 224 16 14 group_ptr:1110 256 16 20"
                        " boat_gadget_ptr:1141";
  *(_QWORD *)(v2 + 16) = SummerTimeV2Activity::tryRestartBoatGallery;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -234556924;
  v4[536862723] = -234556924;
  v4[536862724] = -218959360;
  v4[536862725] = -219021312;
  v4[536862726] = -219021312;
  v4[536862727] = -219021312;
  v4[536862728] = -202178560;
  *(_DWORD *)(v2 + 112) = gallery_id;
  if ( !BaseActivity::isOpening(this, 0) || BaseActivity::isSettled(this) )
    goto LABEL_9;
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  if ( this->is_content_closed_ )
LABEL_9:
    v5 = 1;
  else
    v5 = 0;
  if ( v5 )
  {
    common::milog::MiLogStream::create(
      &v74,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/summer_time_v2_activity.cpp",
      "tryRestartBoatGallery",
      1030);
    common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
      &v74,
      (const char (*)[41])"[SUMMER_TIME_V2] activity is not opening");
    common::milog::MiLogStream::~MiLogStream(&v74);
    v6 = 860;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    SceneComp = Player::getSceneComp(this->player_);
    if ( !PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
    {
      common::milog::MiLogStream::create(
        &v74,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/summer_time_v2_activity.cpp",
        "tryRestartBoatGallery",
        1037);
      common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
        &v74,
        (const char (*)[42])"[SUMMER_TIME_V2] player not in self scene");
      common::milog::MiLogStream::~MiLogStream(&v74);
      v6 = 512;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      MpComp = Player::getMpComp(this->player_);
      if ( PlayerMpComp::isInMpMode(MpComp) )
      {
        common::milog::MiLogStream::create(
          &v74,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/summer_time_v2_activity.cpp",
          "tryRestartBoatGallery",
          1043);
        v9 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
               &v74,
               (const char (*)[56])"[SUMMER_TIME_V2] boat gallery restart in mp mode, uid: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        *(_DWORD *)(v2 + 96) = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 96));
        common::milog::MiLogStream::~MiLogStream(&v74);
        v6 = 1202;
      }
      else
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v73);
        config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v73)->design_config.txt_config_mgr.activity_summer_time_v2_mgr;
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v73);
        boat_config_ptr = ActivitySummerTimeV2ExcelConfigMgr::findBoatConfigByGalleryId(
                            config_mgr,
                            *(_DWORD *)(v2 + 112));
        if ( boat_config_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&boat_config_ptr->stage_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&boat_config_ptr->stage_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&boat_config_ptr->stage_id);
          }
          *(_DWORD *)(v2 + 32) = boat_config_ptr->stage_id;
          *(std::map<unsigned int,SummerTimeV2BoatStageData>::iterator *)(v2 + 128) = std::map<unsigned int,SummerTimeV2BoatStageData>::find(
                                                                                        &this->boat_stage_open_map_,
                                                                                        (const std::map<unsigned int,SummerTimeV2BoatStageData>::key_type *)(v2 + 32));
          __y._M_node = std::map<unsigned int,SummerTimeV2BoatStageData>::end(&this->boat_stage_open_map_)._M_node;
          if ( std::operator==(
                 (const std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2BoatStageData> >::_Self *)(v2 + 128),
                 &__y) )
          {
            goto LABEL_31;
          }
          v11 = std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2BoatStageData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2BoatStageData> > *const)(v2 + 128));
          p_is_open = &v11->second.is_open;
          if ( *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) != 0
            && ((unsigned __int8)p_is_open & 7) >= *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) )
          {
            __asan_report_load1(p_is_open);
          }
          if ( !v11->second.is_open )
LABEL_31:
            v13 = 1;
          else
            v13 = 0;
          if ( v13 )
          {
            common::milog::MiLogStream::create(
              &v74,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/summer_time_v2_activity.cpp",
              "tryRestartBoatGallery",
              1059);
            v14 = common::milog::MiLogStream::operator<<<char [73],(char *[73])0>(
                    &v74,
                    (const char (*)[73])"[SUMMER_TIME_V2] boat gallery restart when stage is not open, stage id: ");
            v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v14,
                    (const unsigned int *)(v2 + 32));
            v16 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v15,
                    (const char (*)[13])"gallery id: ");
            v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v16,
                    (const unsigned int *)(v2 + 112));
            v18 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v17, (const char (*)[6])"uid: ");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            *(_DWORD *)(v2 + 96) = Player::getUid(this->player_);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v2 + 96));
            common::milog::MiLogStream::~MiLogStream(&v74);
            v6 = -1;
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            Player::getSceneComp(this->player_);
            PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 160));
            if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 160), 0LL) )
            {
              common::milog::MiLogStream::create(
                &v74,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/player/activity/summer_time_v2_activity.cpp",
                "tryRestartBoatGallery",
                1067);
              common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                &v74,
                (const char (*)[38])"[SUMMER_TIME_V2] player not on scene.");
              common::milog::MiLogStream::~MiLogStream(&v74);
              v6 = 103;
            }
            else
            {
              v19 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
              GalleryComp = Scene::getGalleryComp(v19);
              if ( SceneGalleryComp::isAnyGalleryStarted(GalleryComp) )
              {
                common::milog::MiLogStream::create(
                  &v74,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/player/activity/summer_time_v2_activity.cpp",
                  "tryRestartBoatGallery",
                  1073);
                common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                  &v74,
                  (const char (*)[36])"[SUMMER_TIME_V2] anyGalleryStarted.");
                common::milog::MiLogStream::~MiLogStream(&v74);
                v6 = 523;
              }
              else
              {
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8(&this->player_);
                v21 = Player::getSceneComp(this->player_);
                if ( PlayerSceneComp::isInTransfer(v21) )
                {
                  common::milog::MiLogStream::create(
                    &v74,
                    &common::milog::MiLogDefault::default_log_obj_,
                    1u,
                    "./src/player/activity/summer_time_v2_activity.cpp",
                    "tryRestartBoatGallery",
                    1079);
                  common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                    &v74,
                    (const char (*)[37])"[SUMMER_TIME_V2] player in transfer.");
                  common::milog::MiLogStream::~MiLogStream(&v74);
                  v6 = 170;
                }
                else
                {
                  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8(&this->player_);
                  Player::getAvatarComp(this->player_);
                  PlayerAvatarComp::getCurAvatar((const PlayerAvatarComp *const)(v2 + 192));
                  if ( std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v2 + 192), 0LL) )
                  {
                    common::milog::MiLogStream::create(
                      &v74,
                      &common::milog::MiLogDefault::default_log_obj_,
                      1u,
                      "./src/player/activity/summer_time_v2_activity.cpp",
                      "tryRestartBoatGallery",
                      1085);
                    common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                      &v74,
                      (const char (*)[42])"[SUMMER_TIME_V2] getCurAvatar is nullptr.");
                    common::milog::MiLogStream::~MiLogStream(&v74);
                    v6 = 103;
                  }
                  else
                  {
                    if ( *(_BYTE *)(((unsigned __int64)&boat_config_ptr->revive_point_group_id >> 3) + 0x7FFF8000) != 0
                      && (char)((((_BYTE)boat_config_ptr + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&boat_config_ptr->revive_point_group_id >> 3)
                                                                                     + 0x7FFF8000) )
                    {
                      __asan_report_load4(&boat_config_ptr->revive_point_group_id);
                    }
                    *(_DWORD *)(v2 + 48) = boat_config_ptr->revive_point_group_id;
                    if ( *(_BYTE *)(((unsigned __int64)&boat_config_ptr->avatar_revive_point_config_id >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((unsigned __int64)&boat_config_ptr->avatar_revive_point_config_id >> 3) + 0x7FFF8000) <= 3 )
                    {
                      __asan_report_load4(&boat_config_ptr->avatar_revive_point_config_id);
                    }
                    *(_DWORD *)(v2 + 64) = boat_config_ptr->avatar_revive_point_config_id;
                    ServiceBox::findService<GameserverService>();
                    GameserverService::getConfig((GameserverService *const)&v73);
                    v22 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v73);
                    group_script_config_ptr = LuaConfigMgr::findGroupScriptConfig(
                                                &v22->design_config.lua_config_mgr,
                                                *(_DWORD *)(v2 + 48));
                    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v73);
                    if ( group_script_config_ptr )
                    {
                      ServiceBox::findService<GameserverService>();
                      GameserverService::getConfig((GameserverService *const)&v73);
                      v26 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v73);
                      *(_DWORD *)(v2 + 80) = LuaConfigMgr::getSceneIdByGroupId(
                                               &v26->design_config.lua_config_mgr,
                                               *(_DWORD *)(v2 + 48));
                      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v73);
                      v27 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
                      if ( Scene::getSceneId(v27) == *(_DWORD *)(v2 + 80) )
                      {
                        avatar_point_config_ptr = GroupScriptConfig::findPointConfig(
                                                    group_script_config_ptr,
                                                    *(_DWORD *)(v2 + 64));
                        if ( avatar_point_config_ptr )
                        {
                          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                            __asan_report_load8(&this->player_);
                          AvatarComp = (unsigned int)Player::getAvatarComp(this->player_);
                          PlayerAvatarComp::queryActiveGroup((PlayerAvatarComp *const)(v2 + 224), AvatarComp);
                          if ( std::operator!=<Group>(0LL, (const std::shared_ptr<Group> *)(v2 + 224)) )
                          {
                            v36 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 224));
                            ChallengeComp = Group::getChallengeComp(v36);
                            ChallengeComp::finishUnfinishedChallenges(
                              ChallengeComp,
                              CLIENT,
                              0,
                              PlayerLogBodyChallengeFinish_FinishType_STOP);
                          }
                          else
                          {
                            common::milog::MiLogStream::create(
                              &v74,
                              &common::milog::MiLogDefault::default_log_obj_,
                              1u,
                              "./src/player/activity/summer_time_v2_activity.cpp",
                              "tryRestartBoatGallery",
                              1118);
                            v38 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                                    &v74,
                                    (const char (*)[24])"[SUMMER_TIME_V2] group:");
                            v39 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                    v38,
                                    (const unsigned int *)(v2 + 48));
                            common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                              v39,
                              (const char (*)[19])" already unloaded.");
                            common::milog::MiLogStream::~MiLogStream(&v74);
                          }
                          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                            __asan_report_load8(&this->player_);
                          v65 = Player::getSceneComp(this->player_);
                          TransferReason::TransferReason(&p_reason, ENTER_REASON_SUMMER_TIME_V2_BOAT_RESTART);
                          p_rot = &avatar_point_config_ptr->rot;
                          p_pos = &avatar_point_config_ptr->pos;
                          v42 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
                          LOBYTE(p_pos) = PlayerSceneComp::jumpToScene(v65, v42, p_pos, p_rot, 0, &p_reason) == 0;
                          TransferReason::~TransferReason(&p_reason);
                          if ( (_BYTE)p_pos )
                          {
                            common::milog::MiLogStream::create(
                              &v74,
                              &common::milog::MiLogDefault::default_log_obj_,
                              1u,
                              "./src/player/activity/summer_time_v2_activity.cpp",
                              "tryRestartBoatGallery",
                              1124);
                            v43 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                                    &v74,
                                    (const char (*)[29])"[SUMMER_TIME_V2] gallery_id:");
                            v44 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                    v43,
                                    (const unsigned int *)(v2 + 112));
                            v45 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                                    v44,
                                    (const char (*)[21])" move player to pos:");
                            v46 = operator<<(v45, &avatar_point_config_ptr->pos);
                            v47 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
                                    v46,
                                    (const char (*)[6])" rot:");
                            operator<<(v47, &avatar_point_config_ptr->rot);
                          }
                          else
                          {
                            common::milog::MiLogStream::create(
                              &v74,
                              &common::milog::MiLogDefault::default_log_obj_,
                              3u,
                              "./src/player/activity/summer_time_v2_activity.cpp",
                              "tryRestartBoatGallery",
                              1128);
                            v48 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                                    &v74,
                                    (const char (*)[29])"[SUMMER_TIME_V2] gallery_id:");
                            v49 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                    v48,
                                    (const unsigned int *)(v2 + 112));
                            v50 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                                    v49,
                                    (const char (*)[21])" move player to pos:");
                            v51 = operator<<(v50, &avatar_point_config_ptr->pos);
                            v52 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
                                    v51,
                                    (const char (*)[6])" rot:");
                            v53 = operator<<(v52, &avatar_point_config_ptr->rot);
                            common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(
                              v53,
                              (const char (*)[9])" failed.");
                          }
                          common::milog::MiLogStream::~MiLogStream(&v74);
                          if ( *(_BYTE *)(((unsigned __int64)&boat_config_ptr->vehicle_revive_point_config_id >> 3)
                                        + 0x7FFF8000) != 0
                            && (char)((((_BYTE)boat_config_ptr + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&boat_config_ptr->vehicle_revive_point_config_id >> 3)
                                                                                           + 0x7FFF8000) )
                          {
                            __asan_report_load4(&boat_config_ptr->vehicle_revive_point_config_id);
                          }
                          *(_DWORD *)(v2 + 96) = boat_config_ptr->vehicle_revive_point_config_id;
                          if ( *(_BYTE *)(((unsigned __int64)&boat_config_ptr->vehicle_gadget_id >> 3) + 0x7FFF8000) != 0
                            && *(_BYTE *)(((unsigned __int64)&boat_config_ptr->vehicle_gadget_id >> 3) + 0x7FFF8000) <= 3 )
                          {
                            __asan_report_load4(&boat_config_ptr->vehicle_gadget_id);
                          }
                          vehicle_gadget_id = boat_config_ptr->vehicle_gadget_id;
                          boat_point_config_ptr = GroupScriptConfig::findPointConfig(
                                                    group_script_config_ptr,
                                                    *(_DWORD *)(v2 + 96));
                          if ( boat_point_config_ptr )
                          {
                            v57 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
                            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                              __asan_report_load8(&this->player_);
                            toPtr<Player,Player>((Player *)&v73);
                            Scene::createPlayerVehicle(
                              (Scene *const)(v2 + 256),
                              v57,
                              (const Vector3 *)vehicle_gadget_id,
                              &boat_point_config_ptr->pos,
                              (PlayerPtr *)&boat_point_config_ptr->rot,
                              (proto::CreateGadgetReason)&v73,
                              0);
                            std::shared_ptr<Player>::~shared_ptr(&v73);
                            if ( std::operator==<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v2 + 256)) )
                            {
                              common::milog::MiLogStream::create(
                                &v74,
                                &common::milog::MiLogDefault::default_log_obj_,
                                3u,
                                "./src/player/activity/summer_time_v2_activity.cpp",
                                "tryRestartBoatGallery",
                                1144);
                              v58 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                                      &v74,
                                      (const char (*)[44])"[SUMMER_TIME_V2] create vehicle failed pos:");
                              v59 = operator<<(v58, &boat_point_config_ptr->pos);
                              v60 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(
                                      v59,
                                      (const char (*)[7])", rot:");
                              v61 = operator<<(v60, &boat_point_config_ptr->rot);
                              v62 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
                                      v61,
                                      (const char (*)[5])" in:");
                              v63 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
                              common::milog::MiLogStream::operator<<<Scene,(Scene*)0>(v62, v63);
                              common::milog::MiLogStream::~MiLogStream(&v74);
                            }
                            v6 = 0;
                            std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v2 + 256));
                          }
                          else
                          {
                            common::milog::MiLogStream::create(
                              &v74,
                              &common::milog::MiLogDefault::default_log_obj_,
                              3u,
                              "./src/player/activity/summer_time_v2_activity.cpp",
                              "tryRestartBoatGallery",
                              1137);
                            v54 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                                    &v74,
                                    (const char (*)[39])"[SUMMER_TIME_V2] boat point config id:");
                            v55 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                    v54,
                                    (const unsigned int *)(v2 + 96));
                            v56 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                                    v55,
                                    (const char (*)[19])" NOT found @group:");
                            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                              v56,
                              (const unsigned int *)(v2 + 48));
                            common::milog::MiLogStream::~MiLogStream(&v74);
                            v6 = 5;
                          }
                          std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v2 + 224));
                        }
                        else
                        {
                          common::milog::MiLogStream::create(
                            &v74,
                            &common::milog::MiLogDefault::default_log_obj_,
                            3u,
                            "./src/player/activity/summer_time_v2_activity.cpp",
                            "tryRestartBoatGallery",
                            1107);
                          v32 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                                  &v74,
                                  (const char (*)[41])"[SUMMER_TIME_V2] avatar point config id:");
                          v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                  v32,
                                  (const unsigned int *)(v2 + 64));
                          v34 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                                  v33,
                                  (const char (*)[29])" NOT found, revive_group_id:");
                          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                            v34,
                            (const unsigned int *)(v2 + 48));
                          common::milog::MiLogStream::~MiLogStream(&v74);
                          v6 = 5;
                        }
                      }
                      else
                      {
                        common::milog::MiLogStream::create(
                          &v74,
                          &common::milog::MiLogDefault::default_log_obj_,
                          3u,
                          "./src/player/activity/summer_time_v2_activity.cpp",
                          "tryRestartBoatGallery",
                          1101);
                        v28 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                                &v74,
                                (const char (*)[55])"[SUMMER_TIME_V2] restart boat gallery in wrong scene: ");
                        v29 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
                        *(_DWORD *)(v2 + 96) = Scene::getSceneId(v29);
                        v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                v28,
                                (const unsigned int *)(v2 + 96));
                        v31 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                                v30,
                                (const char (*)[13])", expected: ");
                        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v31,
                          (const unsigned int *)(v2 + 80));
                        common::milog::MiLogStream::~MiLogStream(&v74);
                        v6 = 531;
                      }
                    }
                    else
                    {
                      common::milog::MiLogStream::create(
                        &v74,
                        &common::milog::MiLogDefault::default_log_obj_,
                        1u,
                        "./src/player/activity/summer_time_v2_activity.cpp",
                        "tryRestartBoatGallery",
                        1095);
                      v23 = common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(
                              &v74,
                              (const char (*)[65])"[SUMMER_TIME_V2] group script config nullptr , revive_group_id: ");
                      v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                              v23,
                              (const unsigned int *)(v2 + 48));
                      v25 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                              v24,
                              (const char (*)[14])" ,gallery_id ");
                      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v25,
                        (const unsigned int *)(v2 + 112));
                      common::milog::MiLogStream::~MiLogStream(&v74);
                      v6 = 5;
                    }
                  }
                  std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 192));
                }
              }
            }
            std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 160));
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v74,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/summer_time_v2_activity.cpp",
            "tryRestartBoatGallery",
            1051);
          v10 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
                  &v74,
                  (const char (*)[62])"[SUMMER_TIME_V2] restartBoatGallery with invalid gallery_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 112));
          common::milog::MiLogStream::~MiLogStream(&v74);
          v6 = -1;
        }
      }
    }
  }
  result = v6;
  if ( v76 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
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

// Line 1152: range 0000000017FF1AA8-0000000017FF1C16
void __cdecl SummerTimeV2Activity::fillActivityCoinInfo(
        SummerTimeV2Activity *const this,
        google::protobuf::Map<unsigned int,unsigned int> *activity_coin_map)
{
  std::tuple_element<1,const std::pair<const proto::VirtualItem,unsigned int> >::type *v2; // rax
  std::tuple_element<1,const std::pair<const proto::VirtualItem,unsigned int> >::type v3; // ebx
  google::protobuf::Map<unsigned int,unsigned int>::key_type *p_key; // rsi
  unsigned int *v5; // rax
  std::tuple_element<1,const std::pair<const proto::VirtualItem,unsigned int> >::type *v6; // rdx
  char v7; // cl
  google::protobuf::Map<unsigned int,unsigned int>::key_type key; // [rsp+1Ch] [rbp-44h] BYREF
  std::map<proto::VirtualItem,unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-40h] BYREF
  std::map<proto::VirtualItem,unsigned int>::iterator __for_end; // [rsp+28h] [rbp-38h] BYREF
  std::map<proto::VirtualItem,unsigned int> *__for_range; // [rsp+30h] [rbp-30h]
  const std::pair<const proto::VirtualItem,unsigned int> *v13; // [rsp+38h] [rbp-28h]
  std::tuple_element<0,const std::pair<const proto::VirtualItem,unsigned int> >::type *coin_type; // [rsp+40h] [rbp-20h]
  std::tuple_element<1,const std::pair<const proto::VirtualItem,unsigned int> >::type *coin_num; // [rsp+48h] [rbp-18h]

  __for_range = &this->activity_coin_map_;
  __for_begin._M_node = std::map<proto::VirtualItem,unsigned int>::begin(&this->activity_coin_map_)._M_node;
  __for_end._M_node = std::map<proto::VirtualItem,unsigned int>::end(&this->activity_coin_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v13 = std::_Rb_tree_iterator<std::pair<proto::VirtualItem const,unsigned int>>::operator*(&__for_begin);
    coin_type = std::get<0ul,proto::VirtualItem const,unsigned int>(v13);
    v2 = (std::tuple_element<1,const std::pair<const proto::VirtualItem,unsigned int> >::type *)std::get<1ul,proto::VirtualItem const,unsigned int>(v13);
    coin_num = v2;
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v2);
    }
    v3 = *coin_num;
    if ( *(_BYTE *)(((unsigned __int64)coin_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)coin_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)coin_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(coin_type);
    }
    key = *coin_type;
    p_key = &key;
    v5 = google::protobuf::Map<unsigned int,unsigned int>::operator[](activity_coin_map, &key);
    v6 = v5;
    v7 = *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000);
    if ( v7 != 0 && (char)(((unsigned __int8)v5 & 7) + 3) >= v7 )
    {
      LOBYTE(p_key) = v7 != 0;
      __asan_report_store4(v5, p_key, v5);
    }
    *v6 = v3;
    std::_Rb_tree_iterator<std::pair<proto::VirtualItem const,unsigned int>>::operator++(&__for_begin);
  }
};

// Line 1160: range 0000000017FF1C18-0000000017FF2016
__int64 __fastcall SummerTimeV2Activity::checkAddActivityCoin(
        const SummerTimeV2Activity *const this,
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
  unsigned int *p_second; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  std::_Rb_tree_const_iterator<std::pair<const proto::VirtualItem,unsigned int> >::_Self __y; // [rsp+18h] [rbp-C8h] BYREF
  common::milog::MiLogStream v18; // [rsp+20h] [rbp-C0h] BYREF
  char v19[160]; // [rsp+40h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 17 cur_coin_num:1172 64 4 14 coin_type:1159 80 4 12 add_num:1159 96 8 9 iter:1166";
  *(_QWORD *)(v3 + 16) = SummerTimeV2Activity::checkAddActivityCoin;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 64) = coin_type;
  *(_DWORD *)(v3 + 80) = add_num;
  if ( *(_DWORD *)(v3 + 64) == 141 )
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
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/summer_time_v2_activity.cpp",
        "checkAddActivityCoin",
        1169);
      v8 = common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(
             &v18,
             (const char (*)[68])"[SUMMER_TIME_V2] coin_type is not in activity_coin_map_. coin_type:");
      common::milog::MiLogStream::operator<<<proto::VirtualItem,(proto::VirtualItem*)0>(
        v8,
        (const proto::VirtualItem *)(v3 + 64));
      common::milog::MiLogStream::~MiLogStream(&v18);
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v9 = std::_Rb_tree_const_iterator<std::pair<proto::VirtualItem const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const proto::VirtualItem,unsigned int> > *const)(v3 + 96));
      p_second = &v9->second;
      if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_second);
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
          &v18,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/summer_time_v2_activity.cpp",
          "checkAddActivityCoin",
          1175);
        v11 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                &v18,
                (const char (*)[44])"[SUMMER_TIME_V2] coin over flow, coin_type:");
        v12 = common::milog::MiLogStream::operator<<<proto::VirtualItem,(proto::VirtualItem*)0>(
                v11,
                (const proto::VirtualItem *)(v3 + 64));
        v13 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v12, (const char (*)[12])", cur num: ");
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v13,
                (const unsigned int *)(v3 + 48));
        v15 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v14, (const char (*)[12])" ,add num: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 80));
        common::milog::MiLogStream::~MiLogStream(&v18);
        result = 10317LL;
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/summer_time_v2_activity.cpp",
      "checkAddActivityCoin",
      1163);
    v6 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
           &v18,
           (const char (*)[50])"[SUMMER_TIME_V2] coin_type is invalid. coin_type:");
    common::milog::MiLogStream::operator<<<proto::VirtualItem,(proto::VirtualItem*)0>(
      v6,
      (const proto::VirtualItem *)(v3 + 64));
    common::milog::MiLogStream::~MiLogStream(&v18);
    result = 0xFFFFFFFFLL;
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
  return result;
};

// Line 1182: range 0000000017FF2018-0000000017FF23DE
__int64 __fastcall SummerTimeV2Activity::checkSubActivityCoin(
        const SummerTimeV2Activity *const this,
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
  unsigned int *p_second; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  std::_Rb_tree_const_iterator<std::pair<const proto::VirtualItem,unsigned int> >::_Self __y; // [rsp+18h] [rbp-C8h] BYREF
  common::milog::MiLogStream v18; // [rsp+20h] [rbp-C0h] BYREF
  char v19[160]; // [rsp+40h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 17 cur_coin_num:1194 64 4 14 coin_type:1181 80 4 12 sub_num:1181 96 8 9 iter:1188";
  *(_QWORD *)(v3 + 16) = SummerTimeV2Activity::checkSubActivityCoin;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 64) = coin_type;
  *(_DWORD *)(v3 + 80) = sub_num;
  if ( *(_DWORD *)(v3 + 64) == 141 )
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
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/summer_time_v2_activity.cpp",
        "checkSubActivityCoin",
        1191);
      v8 = common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(
             &v18,
             (const char (*)[68])"[SUMMER_TIME_V2] coin_type is not in activity_coin_map_. coin_type:");
      common::milog::MiLogStream::operator<<<proto::VirtualItem,(proto::VirtualItem*)0>(
        v8,
        (const proto::VirtualItem *)(v3 + 64));
      common::milog::MiLogStream::~MiLogStream(&v18);
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v9 = std::_Rb_tree_const_iterator<std::pair<proto::VirtualItem const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const proto::VirtualItem,unsigned int> > *const)(v3 + 96));
      p_second = &v9->second;
      if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_second);
      }
      *(_DWORD *)(v3 + 48) = v9->second;
      if ( *(_DWORD *)(v3 + 48) >= *(_DWORD *)(v3 + 80) )
      {
        result = 0LL;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v18,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/summer_time_v2_activity.cpp",
          "checkSubActivityCoin",
          1197);
        v11 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                &v18,
                (const char (*)[45])"[SUMMER_TIME_V2] coin not enough, coin_type:");
        v12 = common::milog::MiLogStream::operator<<<proto::VirtualItem,(proto::VirtualItem*)0>(
                v11,
                (const proto::VirtualItem *)(v3 + 64));
        v13 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v12, (const char (*)[12])", cur num: ");
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v13,
                (const unsigned int *)(v3 + 48));
        v15 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v14, (const char (*)[10])off_2648E1C0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 80));
        common::milog::MiLogStream::~MiLogStream(&v18);
        result = 10318LL;
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/summer_time_v2_activity.cpp",
      "checkSubActivityCoin",
      1185);
    v6 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
           &v18,
           (const char (*)[50])"[SUMMER_TIME_V2] coin_type is invalid. coin_type:");
    common::milog::MiLogStream::operator<<<proto::VirtualItem,(proto::VirtualItem*)0>(
      v6,
      (const proto::VirtualItem *)(v3 + 64));
    common::milog::MiLogStream::~MiLogStream(&v18);
    result = 0xFFFFFFFFLL;
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
  return result;
};

// Line 1204: range 0000000017FF23E0-0000000017FF282F
__int64 __fastcall SummerTimeV2Activity::addActivityCoin(
        SummerTimeV2Activity *const this,
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
  std::map<proto::VirtualItem,unsigned int>::mapped_type *v10; // rax
  unsigned int *v11; // rdx
  SelectType v12; // r14d
  char *v13; // rsi
  std::map<proto::VirtualItem,unsigned int>::mapped_type *v14; // rax
  SelectType *v15; // rdx
  char v16; // cl
  PlayerItemComp *ItemComp; // r14
  data::ItemLimitType v18; // r15d
  std::map<proto::VirtualItem,unsigned int>::mapped_type *v19; // rax
  unsigned int *v20; // rdx
  __int64 result; // rax
  std::string v22; // [rsp+0h] [rbp-F0h]
  uint32_t reason_type; // [rsp+10h] [rbp-E0h]
  int32_t ret; // [rsp+38h] [rbp-B8h]
  uint32_t old_coin_num; // [rsp+3Ch] [rbp-B4h]
  std::string v27; // [rsp+40h] [rbp-B0h] BYREF
  char v28[144]; // [rsp+60h] [rbp-90h] BYREF

  *(&v22._anon_0._M_allocated_capacity + 1) = (std::string::size_type)reason;
  v22._anon_0._M_local_buf[4] = is_notify;
  v5 = (unsigned __int64)v28;
  v22._M_string_length = (std::string::size_type)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 1 23 log_context_holder:1211 64 4 14 coin_type:1203";
  *(_QWORD *)(v5 + 16) = SummerTimeV2Activity::addActivityCoin;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234753551;
  v7[536862722] = -202116348;
  *(_DWORD *)(v5 + 64) = coin_type;
  ret = SummerTimeV2Activity::checkAddActivityCoin(this, (proto::VirtualItem)*(_DWORD *)(v5 + 64), add_num);
  if ( ret )
  {
    v8 = ret;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    BasicComp = Player::getBasicComp(this->player_);
    PlayerBasicComp::getNextTransNo[abi:cxx11](&v27, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 48), 0x67u, v22);
    std::string::~string(&v27);
    v10 = std::map<proto::VirtualItem,unsigned int>::operator[](
            &this->activity_coin_map_,
            (const std::map<proto::VirtualItem,unsigned int>::key_type *)(v5 + 64));
    v11 = v10;
    if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v10);
    }
    old_coin_num = *v11;
    v12 = SAFE_ADD<unsigned int,unsigned int>(*v11, add_num);
    v13 = (char *)(v5 + 64);
    v14 = std::map<proto::VirtualItem,unsigned int>::operator[](
            &this->activity_coin_map_,
            (const std::map<proto::VirtualItem,unsigned int>::key_type *)(v5 + 64));
    v15 = v14;
    v16 = *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000);
    if ( v16 != 0 && (char)(((unsigned __int8)v14 & 7) + 3) >= v16 )
    {
      LOBYTE(v13) = v16 != 0;
      __asan_report_store4(v14, v13, v14);
    }
    *v15 = v12;
    if ( v22._anon_0._M_local_buf[4] )
      BaseActivity::notifyActivityCoinInfo(this);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    ItemComp = Player::getItemComp(this->player_);
    if ( *(_BYTE *)(((*(&v22._anon_0._M_allocated_capacity + 1) + 4) >> 3) + 0x7FFF8000) != 0
      && (char)(((v22._anon_0._M_local_buf[8] + 4) & 7) + 3) >= *(_BYTE *)(((*(&v22._anon_0._M_allocated_capacity + 1)
                                                                           + 4) >> 3)
                                                                         + 0x7FFF8000) )
    {
      __asan_report_load4(*(&v22._anon_0._M_allocated_capacity + 1) + 4);
    }
    v18 = *(_DWORD *)(*(&v22._anon_0._M_allocated_capacity + 1) + 4);
    if ( *(_BYTE *)((*(&v22._anon_0._M_allocated_capacity + 1) >> 3) + 0x7FFF8000) != 0
      && (char)((v22._anon_0._M_local_buf[8] & 7) + 3) >= *(_BYTE *)((*(&v22._anon_0._M_allocated_capacity + 1) >> 3)
                                                                   + 0x7FFF8000) )
    {
      __asan_report_load4(*(&v22._anon_0._M_allocated_capacity + 1));
    }
    reason_type = **((_DWORD **)&v22._anon_0._M_allocated_capacity + 1);
    v19 = std::map<proto::VirtualItem,unsigned int>::operator[](
            &this->activity_coin_map_,
            (const std::map<proto::VirtualItem,unsigned int>::key_type *)(v5 + 64));
    v20 = v19;
    if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v19);
    }
    PlayerItemComp::logPlayerAddCoin(
      ItemComp,
      *(proto::VirtualItem *)(v5 + 64),
      old_coin_num,
      *v20,
      reason_type,
      v18,
      0);
    v8 = 0;
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 48));
  }
  result = v8;
  if ( v22._M_string_length == v5 )
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

// Line 1224: range 0000000017FF2830-0000000017FF2C1D
__int64 __fastcall SummerTimeV2Activity::subActivityCoin(
        SummerTimeV2Activity *const this,
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
  std::map<proto::VirtualItem,unsigned int>::mapped_type *v10; // rax
  uint32_t *v11; // rdx
  unsigned __int64 v12; // rax
  PlayerItemComp *ItemComp; // r14
  std::map<proto::VirtualItem,unsigned int>::mapped_type *v14; // rax
  unsigned int *v15; // rdx
  __int64 result; // rax
  std::string reason_type; // [rsp+0h] [rbp-E0h]
  uint32_t reason_typea; // [rsp+0h] [rbp-E0h]
  bool is_notifya; // [rsp+4h] [rbp-DCh]
  const SubItemReason *reasona; // [rsp+8h] [rbp-D8h]
  uint32_t sub_numa; // [rsp+10h] [rbp-D0h]
  SummerTimeV2Activity *thisa; // [rsp+18h] [rbp-C8h]
  int32_t ret; // [rsp+28h] [rbp-B8h]
  uint32_t old_coin_num; // [rsp+2Ch] [rbp-B4h]
  std::string v25; // [rsp+30h] [rbp-B0h] BYREF
  char v26[144]; // [rsp+50h] [rbp-90h] BYREF

  *(&reason_type._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  HIDWORD(reason_type._anon_0._M_allocated_capacity) = coin_type;
  *(_DWORD *)reason_type._anon_0._M_local_buf = sub_num;
  reason_type._M_string_length = (std::string::size_type)reason;
  BYTE4(reason_type._M_dataplus._M_p) = is_notify;
  v5 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 1 23 log_context_holder:1231 64 4 14 coin_type:1223";
  *(_QWORD *)(v5 + 16) = SummerTimeV2Activity::subActivityCoin;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234753551;
  v7[536862722] = -202116348;
  *(_DWORD *)(v5 + 64) = coin_type;
  ret = SummerTimeV2Activity::checkSubActivityCoin(
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
      __asan_report_load8(&this->player_);
    BasicComp = Player::getBasicComp(this->player_);
    PlayerBasicComp::getNextTransNo[abi:cxx11](&v25, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 48), 0x67u, reason_type);
    std::string::~string(&v25);
    v10 = std::map<proto::VirtualItem,unsigned int>::operator[](
            &thisa->activity_coin_map_,
            (const std::map<proto::VirtualItem,unsigned int>::key_type *)(v5 + 64));
    v11 = v10;
    if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v10);
    }
    old_coin_num = *v11;
    v12 = (unsigned __int64)std::map<proto::VirtualItem,unsigned int>::operator[](
                              &thisa->activity_coin_map_,
                              (const std::map<proto::VirtualItem,unsigned int>::key_type *)(v5 + 64));
    if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) != 0 && (char)((v12 & 7) + 3) >= *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
      v12 = __asan_report_load4(v12);
    *(_DWORD *)v12 -= sub_numa;
    if ( is_notifya )
      BaseActivity::notifyActivityCoinInfo(thisa);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&thisa->player_);
    ItemComp = Player::getItemComp(thisa->player_);
    if ( *(_BYTE *)(((unsigned __int64)reasona >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)reasona & 7) + 3) >= *(_BYTE *)(((unsigned __int64)reasona >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(reasona);
    }
    reason_typea = reasona->reason_type;
    v14 = std::map<proto::VirtualItem,unsigned int>::operator[](
            &thisa->activity_coin_map_,
            (const std::map<proto::VirtualItem,unsigned int>::key_type *)(v5 + 64));
    v15 = v14;
    if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v14);
    }
    PlayerItemComp::logPlayerAddCoin(
      ItemComp,
      *(proto::VirtualItem *)(v5 + 64),
      old_coin_num,
      *v15,
      reason_typea,
      ITEM_LIMIT_NONE,
      0);
    v8 = 0;
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 48));
  }
  result = v8;
  if ( v26 == (char *)v5 )
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

// Line 1244: range 0000000017FF2C1E-0000000017FF2DB0
__int64 __fastcall SummerTimeV2Activity::getActivityCoin(
        const SummerTimeV2Activity *const this,
        proto::VirtualItem coin_type)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::_Rb_tree_const_iterator<std::pair<const proto::VirtualItem,unsigned int> >::pointer v6; // rdx
  unsigned int *p_second; // rax
  std::_Rb_tree_const_iterator<std::pair<const proto::VirtualItem,unsigned int> >::_Self __y; // [rsp+18h] [rbp-88h] BYREF
  char v9[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 14 coin_type:1243 64 8 9 iter:1245";
  *(_QWORD *)(v2 + 16) = SummerTimeV2Activity::getActivityCoin;
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
    p_second = &v6->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
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

// Line 1256: range 0000000017FF2DB2-0000000017FF2DD8
int32_t __cdecl SummerTimeV2Activity::openActivityDungeonStageByGm(SummerTimeV2Activity *const this, uint32_t stage_id)
{
  return SummerTimeV2Activity::openActivityDungeonStage(this, stage_id, 1);
};

// Line 1261: range 0000000017FF2DDA-0000000017FF2F7C
__int64 __fastcall SummerTimeV2Activity::closeActivityDungeonStageByGm(
        SummerTimeV2Activity *const this,
        uint32_t stage_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2DungeonStageData> >::_Self *p_y; // rsi
  std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2DungeonStageData> >::pointer v6; // rdx
  char v7; // cl
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2DungeonStageData> >::_Self __y; // [rsp+18h] [rbp-88h] BYREF
  char v10[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 13 stage_id:1260 64 8 9 iter:1262";
  *(_QWORD *)(v2 + 16) = SummerTimeV2Activity::closeActivityDungeonStageByGm;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = stage_id;
  *(std::map<unsigned int,SummerTimeV2DungeonStageData>::iterator *)(v2 + 64) = std::map<unsigned int,SummerTimeV2DungeonStageData>::find(
                                                                                  &this->dungeon_stage_open_map_,
                                                                                  (const std::map<unsigned int,SummerTimeV2DungeonStageData>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,SummerTimeV2DungeonStageData>::end(&this->dungeon_stage_open_map_)._M_node;
  p_y = &__y;
  if ( std::operator!=(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2DungeonStageData> >::_Self *)(v2 + 64),
         &__y) )
  {
    v6 = std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2DungeonStageData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2DungeonStageData> > *const)(v2 + 64));
    v7 = *(_BYTE *)(((unsigned __int64)&v6->second.is_open >> 3) + 0x7FFF8000);
    if ( v7 != 0 && (((unsigned __int8)v6 + 8) & 7) >= v7 )
    {
      LOBYTE(p_y) = v7 != 0;
      __asan_report_store1(&v6->second.is_open, p_y, v6);
    }
    v6->second.is_open = 0;
    BaseActivity::notifyClientData(this, 0);
  }
  result = 0LL;
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
  return result;
};

// Line 1272: range 0000000017FF2F7E-0000000017FF316C
__int64 __fastcall SummerTimeV2Activity::clearActivityDungeonStageByGm(
        SummerTimeV2Activity *const this,
        uint32_t stage_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2DungeonStageData> >::_Self *p_y; // rsi
  std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2DungeonStageData> >::pointer v6; // rdx
  char v7; // cl
  std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2DungeonStageData> >::pointer v8; // rdx
  char v9; // cl
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2DungeonStageData> >::_Self __y; // [rsp+18h] [rbp-88h] BYREF
  char v12[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 13 stage_id:1271 64 8 9 iter:1273";
  *(_QWORD *)(v2 + 16) = SummerTimeV2Activity::clearActivityDungeonStageByGm;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = stage_id;
  *(std::map<unsigned int,SummerTimeV2DungeonStageData>::iterator *)(v2 + 64) = std::map<unsigned int,SummerTimeV2DungeonStageData>::find(
                                                                                  &this->dungeon_stage_open_map_,
                                                                                  (const std::map<unsigned int,SummerTimeV2DungeonStageData>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,SummerTimeV2DungeonStageData>::end(&this->dungeon_stage_open_map_)._M_node;
  p_y = &__y;
  if ( std::operator!=(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2DungeonStageData> >::_Self *)(v2 + 64),
         &__y) )
  {
    v6 = std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2DungeonStageData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2DungeonStageData> > *const)(v2 + 64));
    v7 = *(_BYTE *)(((unsigned __int64)&v6->second.is_open >> 3) + 0x7FFF8000);
    if ( v7 != 0 && (((unsigned __int8)v6 + 8) & 7) >= v7 )
    {
      LOBYTE(p_y) = v7 != 0;
      __asan_report_store1(&v6->second.is_open, p_y, v6);
    }
    v6->second.is_open = 0;
    v8 = std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2DungeonStageData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2DungeonStageData> > *const)(v2 + 64));
    v9 = *(_BYTE *)(((unsigned __int64)&v8->second.is_prev_dungeon_succeed >> 3) + 0x7FFF8000);
    if ( v9 != 0 && (((unsigned __int8)v8 + 9) & 7) >= v9 )
    {
      LOBYTE(p_y) = v9 != 0;
      __asan_report_store1(&v8->second.is_prev_dungeon_succeed, p_y, v8);
    }
    v8->second.is_prev_dungeon_succeed = 0;
    BaseActivity::notifyClientData(this, 0);
  }
  result = 0LL;
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

// Line 1284: range 0000000017FF316E-0000000017FF3194
int32_t __cdecl SummerTimeV2Activity::openActivityBoatStageByGm(SummerTimeV2Activity *const this, uint32_t stage_id)
{
  return SummerTimeV2Activity::openActivityBoatStage(this, stage_id, 1);
};

// Line 1289: range 0000000017FF3196-0000000017FF3338
__int64 __fastcall SummerTimeV2Activity::closeActivityBoatStageByGm(
        SummerTimeV2Activity *const this,
        uint32_t stage_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2BoatStageData> >::_Self *p_y; // rsi
  std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2BoatStageData> >::pointer v6; // rdx
  char v7; // cl
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2BoatStageData> >::_Self __y; // [rsp+18h] [rbp-88h] BYREF
  char v10[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 13 stage_id:1288 64 8 9 iter:1290";
  *(_QWORD *)(v2 + 16) = SummerTimeV2Activity::closeActivityBoatStageByGm;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = stage_id;
  *(std::map<unsigned int,SummerTimeV2BoatStageData>::iterator *)(v2 + 64) = std::map<unsigned int,SummerTimeV2BoatStageData>::find(
                                                                               &this->boat_stage_open_map_,
                                                                               (const std::map<unsigned int,SummerTimeV2BoatStageData>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,SummerTimeV2BoatStageData>::end(&this->boat_stage_open_map_)._M_node;
  p_y = &__y;
  if ( std::operator!=(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2BoatStageData> >::_Self *)(v2 + 64),
         &__y) )
  {
    v6 = std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2BoatStageData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2BoatStageData> > *const)(v2 + 64));
    v7 = *(_BYTE *)(((unsigned __int64)&v6->second.is_open >> 3) + 0x7FFF8000);
    if ( v7 != 0 && (((unsigned __int8)v6 + 8) & 7) >= v7 )
    {
      LOBYTE(p_y) = v7 != 0;
      __asan_report_store1(&v6->second.is_open, p_y, v6);
    }
    v6->second.is_open = 0;
    BaseActivity::notifyClientData(this, 0);
  }
  result = 0LL;
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
  return result;
};

// Line 1300: range 0000000017FF333A-0000000017FF352E
__int64 __fastcall SummerTimeV2Activity::clearActivityBoatStageByGm(
        SummerTimeV2Activity *const this,
        uint32_t stage_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2BoatStageData> >::_Self *p_y; // rsi
  std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2BoatStageData> >::pointer v6; // rdx
  char v7; // cl
  std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2BoatStageData> >::pointer v8; // rdx
  char v9; // cl
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2BoatStageData> >::_Self __y; // [rsp+18h] [rbp-88h] BYREF
  char v12[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 13 stage_id:1299 64 8 9 iter:1301";
  *(_QWORD *)(v2 + 16) = SummerTimeV2Activity::clearActivityBoatStageByGm;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = stage_id;
  *(std::map<unsigned int,SummerTimeV2BoatStageData>::iterator *)(v2 + 64) = std::map<unsigned int,SummerTimeV2BoatStageData>::find(
                                                                               &this->boat_stage_open_map_,
                                                                               (const std::map<unsigned int,SummerTimeV2BoatStageData>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,SummerTimeV2BoatStageData>::end(&this->boat_stage_open_map_)._M_node;
  p_y = &__y;
  if ( std::operator!=(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2BoatStageData> >::_Self *)(v2 + 64),
         &__y) )
  {
    v6 = std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2BoatStageData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2BoatStageData> > *const)(v2 + 64));
    v7 = *(_BYTE *)(((unsigned __int64)&v6->second.is_open >> 3) + 0x7FFF8000);
    if ( v7 != 0 && (((unsigned __int8)v6 + 8) & 7) >= v7 )
    {
      LOBYTE(p_y) = v7 != 0;
      __asan_report_store1(&v6->second.is_open, p_y, v6);
    }
    v6->second.is_open = 0;
    v8 = std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2BoatStageData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,SummerTimeV2BoatStageData> > *const)(v2 + 64));
    v9 = *(_BYTE *)(((unsigned __int64)&v8->second.best_score >> 3) + 0x7FFF8000);
    if ( v9 != 0 && (char)((((_BYTE)v8 + 12) & 7) + 3) >= v9 )
    {
      LOBYTE(p_y) = v9 != 0;
      __asan_report_store4(&v8->second.best_score, p_y, v8);
    }
    v8->second.best_score = 0;
    BaseActivity::notifyClientData(this, 0);
  }
  result = 0LL;
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

// Line 1312: range 0000000017FF3530-0000000017FF3609
// local variable allocation has failed, the output may be wrong!
void __cdecl SummerTimeV2Activity::setActivityTakenDungeonRewardCountByGm(
        SummerTimeV2Activity *const this,
        uint32_t count)
{
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream v3; // [rsp+10h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->taken_reward_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->taken_reward_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->taken_reward_count_, *(_QWORD *)&count, &this->taken_reward_count_);
  }
  this->taken_reward_count_ = count;
  common::milog::MiLogStream::create(
    &v3,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/summer_time_v2_activity.cpp",
    "setActivityTakenDungeonRewardCountByGm",
    1314);
  v2 = common::milog::MiLogStream::operator<<<char [83],(char *[83])0>(
         &v3,
         (const char (*)[83])"[SUMMER_TIME_V2] setActivityTakenDungeonRewardCountByGm succ, taken_reward_count_:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &this->taken_reward_count_);
  common::milog::MiLogStream::~MiLogStream(&v3);
};

// Line 1318: range 0000000017FF360A-0000000017FF3C2F
void __cdecl SummerTimeV2Activity::resetActivityDataByGm(SummerTimeV2Activity *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  common::milog::MiLogStream *v4; // rax
  SummerTimeV2DungeonStageData *v5; // rax
  const unsigned int *v6; // rcx
  SummerTimeV2DungeonStageData *v7; // r8
  common::milog::MiLogStream *v8; // rax
  SummerTimeV2BoatStageData *v9; // rax
  const unsigned int *v10; // rcx
  SummerTimeV2BoatStageData *v11; // r8
  std::map<proto::VirtualItem,unsigned int>::mapped_type *v12; // rax
  _DWORD *v13; // rdx
  char v14; // cl
  std::map<proto::VirtualItem,unsigned int>::key_type *p_k; // rsi
  std::map<proto::VirtualItem,unsigned int>::key_type __k; // [rsp+14h] [rbp-11Ch] BYREF
  std::unordered_map<unsigned int,data::SummerTimeV2DungeonStageExcelConfig>::const_iterator __for_begin; // [rsp+18h] [rbp-118h] BYREF
  std::unordered_map<unsigned int,data::SummerTimeV2BoatStageExcelConfig>::const_iterator __for_begin_0; // [rsp+20h] [rbp-110h] BYREF
  const ActivitySummerTimeV2ExcelConfigMgr *config_mgr; // [rsp+28h] [rbp-108h]
  const std::unordered_map<unsigned int,data::SummerTimeV2DungeonStageExcelConfig> *__for_range; // [rsp+30h] [rbp-100h]
  const std::unordered_map<unsigned int,data::SummerTimeV2BoatStageExcelConfig> *__for_range_0; // [rsp+38h] [rbp-F8h]
  const std::pair<unsigned int const,data::SummerTimeV2BoatStageExcelConfig> *v22; // [rsp+40h] [rbp-F0h]
  std::tuple_element<0,const std::pair<unsigned int const,data::SummerTimeV2BoatStageExcelConfig> >::type *stage_id_0; // [rsp+48h] [rbp-E8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::SummerTimeV2BoatStageExcelConfig> >::type *stage_config_0; // [rsp+50h] [rbp-E0h]
  const std::pair<unsigned int const,data::SummerTimeV2DungeonStageExcelConfig> *v25; // [rsp+58h] [rbp-D8h]
  std::tuple_element<0,const std::pair<unsigned int const,data::SummerTimeV2DungeonStageExcelConfig> >::type *stage_id; // [rsp+60h] [rbp-D0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::SummerTimeV2DungeonStageExcelConfig> >::type *stage_config; // [rsp+68h] [rbp-C8h]
  std::shared_ptr<Config> v28; // [rsp+70h] [rbp-C0h] BYREF
  common::milog::MiLogStream v29; // [rsp+80h] [rbp-B0h] BYREF
  char v30[144]; // [rsp+A0h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 8 23 dungeon_stage_data:1324 64 12 20 boat_stage_data:1337";
  *(_QWORD *)(v1 + 16) = SummerTimeV2Activity::resetActivityDataByGm;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218959360;
  v3[536862722] = -202177536;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v28);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v28)->design_config.txt_config_mgr.activity_summer_time_v2_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v28);
  std::map<unsigned int,SummerTimeV2DungeonStageData>::clear(&this->dungeon_stage_open_map_);
  __for_range = &config_mgr->summer_time_v2_dungeon_stage_excel_config_map;
  __for_begin._M_cur = std::unordered_map<unsigned int,data::SummerTimeV2DungeonStageExcelConfig>::begin(&config_mgr->summer_time_v2_dungeon_stage_excel_config_map)._M_cur;
  __for_begin_0._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::SummerTimeV2BoatStageExcelConfig>,false>::__node_type *)std::unordered_map<unsigned int,data::SummerTimeV2DungeonStageExcelConfig>::end(&config_mgr->summer_time_v2_dungeon_stage_excel_config_map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::SummerTimeV2DungeonStageExcelConfig>,false>(
            &__for_begin,
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::SummerTimeV2DungeonStageExcelConfig>,false> *)&__for_begin_0) )
  {
    v25 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::SummerTimeV2DungeonStageExcelConfig>,false,false>::operator*(&__for_begin);
    stage_id = std::get<0ul,unsigned int const,data::SummerTimeV2DungeonStageExcelConfig>(v25);
    stage_config = (std::tuple_element<1,const std::pair<unsigned int const,data::SummerTimeV2DungeonStageExcelConfig> >::type *)std::get<1ul,unsigned int const,data::SummerTimeV2DungeonStageExcelConfig>(v25);
    *(_DWORD *)(v1 + 32) = 0;
    *(_BYTE *)(v1 + 36) = 0;
    *(_BYTE *)(v1 + 37) = 0;
    if ( *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)stage_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(stage_id);
    }
    if ( SummerTimeV2DungeonStageData::init((SummerTimeV2DungeonStageData *const)(v1 + 32), *stage_id) )
    {
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/summer_time_v2_activity.cpp",
        "resetActivityDataByGm",
        1327);
      v4 = common::milog::MiLogStream::operator<<<char [69],(char *[69])0>(
             &v29,
             (const char (*)[69])"[SUMMER_TIME_V2] SummerTimeV2DungeonStageData init failed, stage id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, stage_id);
      common::milog::MiLogStream::~MiLogStream(&v29);
    }
    else
    {
      v5 = std::move<SummerTimeV2DungeonStageData &>((SummerTimeV2DungeonStageData *)(v1 + 32));
      std::map<unsigned int,SummerTimeV2DungeonStageData>::emplace<unsigned int const&,SummerTimeV2DungeonStageData>(
        &this->dungeon_stage_open_map_,
        stage_id,
        v5,
        v6,
        v7);
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::SummerTimeV2DungeonStageExcelConfig>,false,false>::operator++(&__for_begin);
  }
  std::map<unsigned int,SummerTimeV2BoatStageData>::clear(&this->boat_stage_open_map_);
  __for_range_0 = &config_mgr->summer_time_v2_boat_stage_excel_config_map;
  __for_begin_0._M_cur = std::unordered_map<unsigned int,data::SummerTimeV2BoatStageExcelConfig>::begin(&config_mgr->summer_time_v2_boat_stage_excel_config_map)._M_cur;
  *(std::unordered_map<unsigned int,data::SummerTimeV2BoatStageExcelConfig>::const_iterator *)(v1 + 32) = std::unordered_map<unsigned int,data::SummerTimeV2BoatStageExcelConfig>::end(__for_range_0);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::SummerTimeV2BoatStageExcelConfig>,false>(
            &__for_begin_0,
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::SummerTimeV2BoatStageExcelConfig>,false> *)(v1 + 32)) )
  {
    v22 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::SummerTimeV2BoatStageExcelConfig>,false,false>::operator*(&__for_begin_0);
    stage_id_0 = std::get<0ul,unsigned int const,data::SummerTimeV2BoatStageExcelConfig>(v22);
    stage_config_0 = (std::tuple_element<1,const std::pair<unsigned int const,data::SummerTimeV2BoatStageExcelConfig> >::type *)std::get<1ul,unsigned int const,data::SummerTimeV2BoatStageExcelConfig>(v22);
    *(_DWORD *)(v1 + 64) = 0;
    *(_BYTE *)(v1 + 68) = 0;
    *(_DWORD *)(v1 + 72) = 0;
    if ( *(_BYTE *)(((unsigned __int64)stage_id_0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)stage_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)stage_id_0 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(stage_id_0);
    }
    if ( SummerTimeV2BoatStageData::init((SummerTimeV2BoatStageData *const)(v1 + 64), *stage_id_0) )
    {
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/summer_time_v2_activity.cpp",
        "resetActivityDataByGm",
        1340);
      v8 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
             &v29,
             (const char (*)[66])"[SUMMER_TIME_V2] SummerTimeV2BoatStageData init failed, stage id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, stage_id_0);
      common::milog::MiLogStream::~MiLogStream(&v29);
    }
    else
    {
      v9 = std::move<SummerTimeV2BoatStageData &>((SummerTimeV2BoatStageData *)(v1 + 64));
      std::map<unsigned int,SummerTimeV2BoatStageData>::emplace<unsigned int const&,SummerTimeV2BoatStageData>(
        &this->boat_stage_open_map_,
        stage_id_0,
        v9,
        v10,
        v11);
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::SummerTimeV2BoatStageExcelConfig>,false,false>::operator++(&__for_begin_0);
  }
  __k = ITEM_VIRTUAL_SUMMER_TIME_V2_COIN;
  p_k = &__k;
  v12 = std::map<proto::VirtualItem,unsigned int>::operator[](&this->activity_coin_map_, &__k);
  v13 = v12;
  v14 = *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000);
  LOBYTE(p_k) = v14 != 0;
  if ( v14 != 0 && (char)(((unsigned __int8)v12 & 7) + 3) >= v14 )
    __asan_report_store4(v12, p_k, v12);
  *v13 = 0;
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_content_closed_, p_k, &this->is_content_closed_);
  this->is_content_closed_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->taken_reward_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->taken_reward_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->taken_reward_count_, p_k, &this->taken_reward_count_);
  }
  this->taken_reward_count_ = 0;
  BaseActivity::notifyClientData(this, 0);
  if ( v30 == (char *)v1 )
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
