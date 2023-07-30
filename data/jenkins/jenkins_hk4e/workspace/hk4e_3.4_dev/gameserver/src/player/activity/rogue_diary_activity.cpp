// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/rogue_diary_activity.cpp

// Line 31: range 0000000016C3829C-0000000016C3876F
int32_t __cdecl RogueDiaryActivity::fromScheduleBin(
        RogueDiaryActivity *const this,
        const proto::ActivityScheduleBin *bin)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  unsigned int v5; // eax
  __int64 v6; // rdx
  char v7; // al
  google::protobuf::RepeatedPtrField<proto::RogueDiaryStageBin>::const_iterator *p_for_end; // rsi
  const proto::RogueDiaryStageRecordBin *v9; // rax
  const proto::RogueDiaryStageRecordBin *v10; // rax
  const proto::RogueDiaryStageRecordBin *v11; // rax
  const proto::RogueDiaryStageRecordBin *v12; // rax
  RogueDiaryStageData *v13; // r15
  unsigned int *v14; // rcx
  RogueDiaryStageData *v15; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,RogueDiaryStageData>,false,false>,bool> v16; // rax
  common::milog::MiLogStream *v17; // r14
  __int64 v18; // rdx
  char v19; // al
  __int64 v20; // rcx
  char v21; // dl
  __int64 v22; // rdx
  const proto::RogueDiaryProgressBin *v23; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+24h] [rbp-DCh] BYREF
  google::protobuf::RepeatedPtrField<proto::RogueDiaryStageBin>::const_iterator __for_begin; // [rsp+28h] [rbp-D8h] BYREF
  google::protobuf::RepeatedPtrField<proto::RogueDiaryStageBin>::const_iterator __for_end; // [rsp+30h] [rbp-D0h] BYREF
  const proto::RogueDiaryScheduleBin *rogue_diary_bin; // [rsp+38h] [rbp-C8h]
  const google::protobuf::RepeatedPtrField<proto::RogueDiaryStageBin> *__for_range; // [rsp+40h] [rbp-C0h]
  const proto::RogueDiaryStageBin *stage_bin; // [rsp+48h] [rbp-B8h]
  common::milog::MiLogStream v31; // [rsp+50h] [rbp-B0h] BYREF
  char v32[144]; // [rsp+70h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 20 13 stage_data:36";
  *(_QWORD *)(v2 + 16) = RogueDiaryActivity::fromScheduleBin;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -217841664;
  v4[536862722] = -202116109;
  rogue_diary_bin = proto::ActivityScheduleBin::rogue_diary_bin(bin);
  LOBYTE(v5) = proto::RogueDiaryScheduleBin::is_content_closed(rogue_diary_bin);
  v6 = v5;
  v7 = *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000);
  if ( v7 < 0 )
  {
    LOBYTE(bin) = v7 != 0;
    __asan_report_store1(&this->is_content_closed_, bin, v6, &this->is_content_closed_);
  }
  this->is_content_closed_ = v6;
  __for_range = proto::RogueDiaryScheduleBin::stage_bin_list(rogue_diary_bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::RogueDiaryStageBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::RogueDiaryStageBin>::end(__for_range).it_;
  while ( 1 )
  {
    p_for_end = &__for_end;
    if ( !google::protobuf::internal::RepeatedPtrIterator<proto::RogueDiaryStageBin const>::operator!=(
            &__for_begin,
            &__for_end) )
      break;
    stage_bin = google::protobuf::internal::RepeatedPtrIterator<proto::RogueDiaryStageBin const>::operator*(&__for_begin);
    *(_BYTE *)(v2 + 32) = 0;
    *(_DWORD *)(v2 + 36) = 0;
    *(_DWORD *)(v2 + 40) = 0;
    *(_BYTE *)(v2 + 44) = 0;
    *(_DWORD *)(v2 + 48) = 0;
    *(_BYTE *)(v2 + 32) = proto::RogueDiaryStageBin::is_have_try(stage_bin);
    v9 = proto::RogueDiaryStageBin::record_bin(stage_bin);
    *(_DWORD *)(v2 + 36) = proto::RogueDiaryStageRecordBin::difficulty(v9);
    v10 = proto::RogueDiaryStageBin::record_bin(stage_bin);
    *(_DWORD *)(v2 + 40) = proto::RogueDiaryStageRecordBin::round(v10);
    v11 = proto::RogueDiaryStageBin::record_bin(stage_bin);
    *(_BYTE *)(v2 + 44) = proto::RogueDiaryStageRecordBin::is_finish(v11);
    v12 = proto::RogueDiaryStageBin::record_bin(stage_bin);
    *(_DWORD *)(v2 + 48) = proto::RogueDiaryStageRecordBin::finish_time(v12);
    v13 = std::move<RogueDiaryStageData &>((RogueDiaryStageData *)(v2 + 32));
    val = proto::RogueDiaryStageBin::stage_id(stage_bin);
    v16 = std::unordered_map<unsigned int,RogueDiaryStageData>::emplace<unsigned int,RogueDiaryStageData>(
            &this->stage_map_,
            &val,
            v13,
            v14,
            v15);
    if ( !v16.second )
    {
      common::milog::MiLogStream::create(
        &v31,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/rogue_diary_activity.cpp",
        "fromScheduleBin",
        44);
      v17 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v31,
              (const char (*)[33])"[RogueDiary] duplicate stage_id:");
      val = proto::RogueDiaryStageBin::stage_id(stage_bin);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &val);
      common::milog::MiLogStream::~MiLogStream(&v31);
    }
    google::protobuf::internal::RepeatedPtrIterator<proto::RogueDiaryStageBin const>::operator++(&__for_begin);
  }
  v18 = proto::RogueDiaryScheduleBin::coin(rogue_diary_bin);
  v19 = *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000);
  if ( v19 != 0 && v19 <= 3 )
  {
    LOBYTE(p_for_end) = v19 != 0;
    __asan_report_store4(&this->coin_, p_for_end, v18, &this->coin_);
  }
  this->coin_ = v18;
  v20 = proto::RogueDiaryScheduleBin::transaction(rogue_diary_bin);
  v21 = *(_BYTE *)(((unsigned __int64)&this->transaction_ >> 3) + 0x7FFF8000);
  LOBYTE(p_for_end) = v21 != 0;
  v22 = (v21 != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= v21);
  if ( (_BYTE)v22 )
    __asan_report_store4(&this->transaction_, p_for_end, v22, v20);
  this->transaction_ = v20;
  v23 = proto::RogueDiaryScheduleBin::progress_bin(rogue_diary_bin);
  if ( RogueDiaryRuntimeMgr::fromProgressBin(&this->runtime_mgr_, v23) )
  {
    common::milog::MiLogStream::create(
      &v31,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/rogue_diary_activity.cpp",
      "fromScheduleBin",
      52);
    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
      &v31,
      (const char (*)[36])"[RogueDiary] fromProgressBin failed");
    common::milog::MiLogStream::~MiLogStream(&v31);
  }
  result = 0;
  if ( v32 == (char *)v2 )
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

// Line 58: range 0000000016C38770-0000000016C38BCC
int32_t __cdecl RogueDiaryActivity::toScheduleBin(
        const RogueDiaryActivity *const this,
        proto::ActivityScheduleBin *bin)
{
  proto::RogueDiaryProgressBin *v2; // rax
  std::unordered_map<unsigned int,RogueDiaryStageData>::const_iterator __for_begin; // [rsp+18h] [rbp-78h] BYREF
  std::unordered_map<unsigned int,RogueDiaryStageData>::const_iterator __for_end; // [rsp+20h] [rbp-70h] BYREF
  proto::RogueDiaryScheduleBin *rogue_diary_bin; // [rsp+28h] [rbp-68h]
  const std::unordered_map<unsigned int,RogueDiaryStageData> *__for_range; // [rsp+30h] [rbp-60h]
  const std::pair<unsigned int const,RogueDiaryStageData> *v8; // [rsp+38h] [rbp-58h]
  std::tuple_element<0,const std::pair<unsigned int const,RogueDiaryStageData> >::type *stage_id; // [rsp+40h] [rbp-50h]
  std::tuple_element<1,const std::pair<unsigned int const,RogueDiaryStageData> >::type *stage_data; // [rsp+48h] [rbp-48h]
  proto::RogueDiaryStageBin *stage_bin; // [rsp+50h] [rbp-40h]
  proto::RogueDiaryStageRecordBin *record_bin; // [rsp+58h] [rbp-38h]
  common::milog::MiLogStream v13; // [rsp+60h] [rbp-30h] BYREF

  rogue_diary_bin = proto::ActivityScheduleBin::mutable_rogue_diary_bin(bin);
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  proto::RogueDiaryScheduleBin::set_is_content_closed(rogue_diary_bin, this->is_content_closed_);
  __for_range = &this->stage_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,RogueDiaryStageData>::begin(&this->stage_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,RogueDiaryStageData>::end(&this->stage_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,RogueDiaryStageData>,false>(&__for_begin, &__for_end) )
  {
    v8 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,RogueDiaryStageData>,false,false>::operator*(&__for_begin);
    stage_id = std::get<0ul,unsigned int const,RogueDiaryStageData>(v8);
    stage_data = (std::tuple_element<1,const std::pair<unsigned int const,RogueDiaryStageData> >::type *)std::get<1ul,unsigned int const,RogueDiaryStageData>(v8);
    stage_bin = proto::RogueDiaryScheduleBin::add_stage_bin_list(rogue_diary_bin);
    if ( *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)stage_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(stage_id);
    }
    proto::RogueDiaryStageBin::set_stage_id(stage_bin, *stage_id);
    if ( *(_BYTE *)(((unsigned __int64)stage_data >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)stage_data & 7) >= *(_BYTE *)(((unsigned __int64)stage_data >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(stage_data);
    }
    proto::RogueDiaryStageBin::set_is_have_try(stage_bin, stage_data->is_have_try);
    record_bin = proto::RogueDiaryStageBin::mutable_record_bin(stage_bin);
    if ( *(_BYTE *)(((unsigned __int64)&stage_data->difficulty >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)stage_data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&stage_data->difficulty >> 3)
                                                               + 0x7FFF8000) )
    {
      __asan_report_load4(&stage_data->difficulty);
    }
    proto::RogueDiaryStageRecordBin::set_difficulty(record_bin, stage_data->difficulty);
    if ( *(_BYTE *)(((unsigned __int64)&stage_data->round >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)stage_data + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&stage_data->round >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&stage_data->round);
    }
    proto::RogueDiaryStageRecordBin::set_round(record_bin, stage_data->round);
    if ( *(_BYTE *)(((unsigned __int64)&stage_data->is_finish >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)stage_data + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&stage_data->is_finish >> 3)
                                                              + 0x7FFF8000) )
    {
      __asan_report_load1(&stage_data->is_finish);
    }
    proto::RogueDiaryStageRecordBin::set_is_finish(record_bin, stage_data->is_finish);
    if ( *(_BYTE *)(((unsigned __int64)&stage_data->finish_time >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)stage_data + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&stage_data->finish_time >> 3)
                                                                + 0x7FFF8000) )
    {
      __asan_report_load4(&stage_data->finish_time);
    }
    proto::RogueDiaryStageRecordBin::set_finish_time(record_bin, stage_data->finish_time);
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,RogueDiaryStageData>,false,false>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->coin_);
  }
  proto::RogueDiaryScheduleBin::set_coin(rogue_diary_bin, this->coin_);
  if ( *(_BYTE *)(((unsigned __int64)&this->transaction_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->transaction_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->transaction_);
  }
  proto::RogueDiaryScheduleBin::set_transaction(rogue_diary_bin, this->transaction_);
  v2 = proto::RogueDiaryScheduleBin::mutable_progress_bin(rogue_diary_bin);
  if ( RogueDiaryRuntimeMgr::toProgressBin(&this->runtime_mgr_, v2) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/rogue_diary_activity.cpp",
      "toScheduleBin",
      76);
    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
      &v13,
      (const char (*)[36])"[RogueDiary] fromProgressBin failed");
    common::milog::MiLogStream::~MiLogStream(&v13);
  }
  return 0;
};

// Line 82: range 0000000016C38BCE-0000000016C39090
int32_t __cdecl RogueDiaryActivity::toClient(RogueDiaryActivity *const this, proto::ActivityInfo *activity_info)
{
  common::milog::MiLogStream *v2; // rbx
  bool HaveProgress; // al
  proto::RogueDiaryProgress *v5; // rax
  unsigned int val; // [rsp+14h] [rbp-7Ch] BYREF
  std::unordered_map<unsigned int,RogueDiaryStageData>::iterator __for_begin; // [rsp+18h] [rbp-78h] BYREF
  std::unordered_map<unsigned int,RogueDiaryStageData>::iterator __for_end; // [rsp+20h] [rbp-70h] BYREF
  proto::RogueDiaryActivityDetailInfo *rogue_diary_info; // [rsp+28h] [rbp-68h]
  std::unordered_map<unsigned int,RogueDiaryStageData> *__for_range; // [rsp+30h] [rbp-60h]
  const std::pair<unsigned int const,RogueDiaryStageData> *v11; // [rsp+38h] [rbp-58h]
  std::tuple_element<0,const std::pair<unsigned int const,RogueDiaryStageData> >::type *stage_id; // [rsp+40h] [rbp-50h]
  std::tuple_element<1,const std::pair<unsigned int const,RogueDiaryStageData> >::type *stage_data; // [rsp+48h] [rbp-48h]
  proto::RogueDiaryStageInfo *stage_info; // [rsp+50h] [rbp-40h]
  proto::RogueDiaryDungeonRecord *record_info; // [rsp+58h] [rbp-38h]
  common::milog::MiLogStream v16; // [rsp+60h] [rbp-30h] BYREF

  if ( BaseActivity::toClient(this, activity_info) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/rogue_diary_activity.cpp",
      "toClient",
      85);
    v2 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
           &v16,
           (const char (*)[49])"[RogueDiary] BaseActivity::toClient fails, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
    common::milog::MiLogStream::~MiLogStream(&v16);
    return -1;
  }
  else
  {
    rogue_diary_info = proto::ActivityInfo::mutable_rogue_diary_info(activity_info);
    if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->is_content_closed_);
    proto::RogueDiaryActivityDetailInfo::set_is_content_closed(rogue_diary_info, this->is_content_closed_);
    __for_range = &this->stage_map_;
    __for_begin._M_cur = std::unordered_map<unsigned int,RogueDiaryStageData>::begin(&this->stage_map_)._M_cur;
    __for_end._M_cur = std::unordered_map<unsigned int,RogueDiaryStageData>::end(&this->stage_map_)._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,RogueDiaryStageData>,false>(&__for_begin, &__for_end) )
    {
      v11 = std::__detail::_Node_iterator<std::pair<unsigned int const,RogueDiaryStageData>,false,false>::operator*(&__for_begin);
      stage_id = std::get<0ul,unsigned int const,RogueDiaryStageData>(v11);
      stage_data = (std::tuple_element<1,const std::pair<unsigned int const,RogueDiaryStageData> >::type *)std::get<1ul,unsigned int const,RogueDiaryStageData>(v11);
      stage_info = proto::RogueDiaryActivityDetailInfo::add_stage_list(rogue_diary_info);
      if ( *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)stage_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(stage_id);
      }
      proto::RogueDiaryStageInfo::set_stage_id(stage_info, *stage_id);
      if ( *(_BYTE *)(((unsigned __int64)stage_data >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)stage_data & 7) >= *(_BYTE *)(((unsigned __int64)stage_data >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(stage_data);
      }
      proto::RogueDiaryStageInfo::set_is_have_try(stage_info, stage_data->is_have_try);
      record_info = proto::RogueDiaryStageInfo::mutable_best_record(stage_info);
      if ( *(_BYTE *)(((unsigned __int64)&stage_data->difficulty >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)stage_data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&stage_data->difficulty >> 3)
                                                                 + 0x7FFF8000) )
      {
        __asan_report_load4(&stage_data->difficulty);
      }
      proto::RogueDiaryDungeonRecord::set_difficulty(record_info, stage_data->difficulty);
      if ( *(_BYTE *)(((unsigned __int64)&stage_data->is_finish >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)stage_data + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&stage_data->is_finish >> 3)
                                                                + 0x7FFF8000) )
      {
        __asan_report_load1(&stage_data->is_finish);
      }
      proto::RogueDiaryDungeonRecord::set_is_finish(record_info, stage_data->is_finish);
      if ( *(_BYTE *)(((unsigned __int64)&stage_data->round >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)stage_data + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&stage_data->round >> 3)
                                                                 + 0x7FFF8000) )
      {
        __asan_report_load4(&stage_data->round);
      }
      proto::RogueDiaryDungeonRecord::set_max_round(record_info, stage_data->round);
      if ( *(_BYTE *)(((unsigned __int64)&stage_data->finish_time >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)stage_data + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&stage_data->finish_time >> 3)
                                                                  + 0x7FFF8000) )
      {
        __asan_report_load4(&stage_data->finish_time);
      }
      proto::RogueDiaryDungeonRecord::set_finish_time(record_info, stage_data->finish_time);
      std::__detail::_Node_iterator<std::pair<unsigned int const,RogueDiaryStageData>,false,false>::operator++(&__for_begin);
    }
    HaveProgress = RogueDiaryRuntimeMgr::getIsHaveProgress(&this->runtime_mgr_);
    proto::RogueDiaryActivityDetailInfo::set_is_have_progress(rogue_diary_info, HaveProgress);
    v5 = proto::RogueDiaryActivityDetailInfo::mutable_cur_progress(rogue_diary_info);
    if ( RogueDiaryRuntimeMgr::toClient(&this->runtime_mgr_, v5) )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/rogue_diary_activity.cpp",
        "toClient",
        105);
      common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
        &v16,
        (const char (*)[41])"[RogueDiary] runtime_mgr toClient failed");
      common::milog::MiLogStream::~MiLogStream(&v16);
      return -1;
    }
    else
    {
      return 0;
    }
  }
};

// Line 112: range 0000000016C39092-0000000016C39192
void __cdecl RogueDiaryActivity::onClear(RogueDiaryActivity *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx

  RogueDiaryRuntimeMgr::clearAll(&this->runtime_mgr_);
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_content_closed_, v1, &this->is_content_closed_);
  this->is_content_closed_ = 0;
  std::unordered_map<unsigned int,RogueDiaryStageData>::clear(&this->stage_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->coin_, v1, &this->coin_);
  }
  this->coin_ = 0;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->transaction_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->transaction_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store4(&this->transaction_, (((_BYTE)this + 28) & 7u) + 3, v2);
  this->transaction_ = 0;
};

// Line 121: range 0000000016C39194-0000000016C391F1
int32_t __cdecl RogueDiaryActivity::init(RogueDiaryActivity *const this)
{
  if ( BaseActivity::isOpening(this, 0) && !BaseActivity::isSettled(this) )
    RogueDiaryActivity::registerEvent(this);
  return 0;
};

// Line 131: range 0000000016C391F2-0000000016C3920C
void __cdecl RogueDiaryActivity::onStart(RogueDiaryActivity *const this)
{
  RogueDiaryActivity::registerEvent(this);
};

// Line 136: range 0000000016C3920E-0000000016C3979B
int32_t __cdecl RogueDiaryActivity::execAction(
        RogueDiaryActivity *const this,
        const data::NewActivityExec *action_exec)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::NewActivityActionType type; // eax
  common::milog::MiLogStream *v6; // rbx
  int32_t result; // eax
  const std::string *v8; // rax
  common::milog::MiLogStream *v9; // rbx
  const std::string *v10; // rax
  common::milog::MiLogStream *v11; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  bool v13; // r14
  RogueDiaryStageData *v14; // r8
  common::milog::MiLogStream *v15; // rax
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,RogueDiaryStageData>,false,false>,bool> v16; // rax
  common::milog::MiLogStream *v17; // rax
  unsigned __int64 val; // [rsp+18h] [rbp-E8h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 48 4 12 stage_id:152 64 20 14 stage_data:163";
  *(_QWORD *)(v2 + 16) = RogueDiaryActivity::execAction;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -217841664;
  v4[536862723] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&action_exec->type);
  }
  type = action_exec->type;
  if ( type == NEW_ACTIVITY_ACTION_OPEN_ROGUE_DIARY_STAGE )
  {
    if ( !std::vector<std::string>::size(&action_exec->param) )
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/rogue_diary_activity.cpp",
        "execAction",
        149);
      v6 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
             &v20,
             (const char (*)[50])"[RogueDiary] param size not enough, param.size():");
      val = std::vector<std::string>::size(&action_exec->param);
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v6, &val);
      common::milog::MiLogStream::~MiLogStream(&v20);
      result = -1;
      goto LABEL_22;
    }
    *(_DWORD *)(v2 + 48) = 0;
    v8 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
    if ( common::tools::StringUtils::strToNum<unsigned int>(v8, (unsigned int *)(v2 + 48), 1) )
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/rogue_diary_activity.cpp",
        "execAction",
        155);
      v9 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
             &v20,
             (const char (*)[37])"[RogueDiary] strToNum fails, param: ");
      v10 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
      v11 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, v10);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v11, (const char (*)[8])" failed");
      common::milog::MiLogStream::~MiLogStream(&v20);
      result = -1;
      goto LABEL_22;
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v19);
    v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19);
    v13 = data::ActivityRogueDiaryExcelConfigMgrBase::findRogueDiaryStageExcelConfig(
            &v12->design_config.txt_config_mgr.activity_rogue_diary_config_mgr,
            *(_DWORD *)(v2 + 48)) == 0LL;
    std::shared_ptr<Config>::~shared_ptr(&v19);
    if ( v13 )
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/rogue_diary_activity.cpp",
        "execAction",
        160);
      v15 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
              &v20,
              (const char (*)[62])"[RogueDiary] findRogueDiaryStageExcelConfig failed, stage_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v20);
      result = -1;
      goto LABEL_22;
    }
    *(_BYTE *)(v2 + 64) = 0;
    *(_DWORD *)(v2 + 68) = 0;
    *(_DWORD *)(v2 + 72) = 0;
    *(_BYTE *)(v2 + 76) = 0;
    *(_DWORD *)(v2 + 80) = 0;
    v16 = std::unordered_map<unsigned int,RogueDiaryStageData>::emplace<unsigned int &,RogueDiaryStageData&>(
            &this->stage_map_,
            (unsigned int *)(v2 + 48),
            (RogueDiaryStageData *)(v2 + 64),
            (unsigned int *)&this->stage_map_,
            v14);
    if ( !v16.second )
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/rogue_diary_activity.cpp",
        "execAction",
        166);
      v17 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
              &v20,
              (const char (*)[59])"[RogueDiary] duplicate open rogue dungoen stage, stage_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v20);
      result = -1;
      goto LABEL_22;
    }
    BaseActivity::notifyClientData(this, 0);
  }
  else
  {
    if ( type != NEW_ACTIVITY_ACTION_CLOSE_ROGUE_DIARY_CONTENT )
    {
      result = BaseActivity::execAction(this, action_exec);
      goto LABEL_22;
    }
    if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->is_content_closed_, action_exec, &this->is_content_closed_);
    this->is_content_closed_ = 1;
    BaseActivity::notifyClientData(this, 0);
  }
  result = 0;
LABEL_22:
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
  return result;
};

// Line 179: range 0000000016C3979C-0000000016C397B6
void __cdecl RogueDiaryActivity::onSettle(RogueDiaryActivity *const this)
{
  RogueDiaryActivity::unregisterEvent(this);
};

// Line 184: range 0000000016C397B8-0000000016C39A07
void __cdecl RogueDiaryActivity::onLogin(RogueDiaryActivity *const this)
{
  uint32_t StageId; // eax
  common::milog::MiLogStream *v4; // rbx
  uint32_t v5; // eax
  common::milog::MiLogStream v6; // [rsp+10h] [rbp-50h] BYREF
  std::string val; // [rsp+30h] [rbp-30h] BYREF

  BaseActivity::onLogin(this);
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  if ( this->is_content_closed_
    && RogueDiaryRuntimeMgr::getIsHaveProgress(&this->runtime_mgr_)
    && !RogueDiaryRuntimeMgr::getIsRunning(&this->runtime_mgr_) )
  {
    StageId = RogueDiaryRuntimeMgr::getStageId(&this->runtime_mgr_);
    RogueDiaryRuntimeMgr::clearProgress(&this->runtime_mgr_, StageId);
    BaseActivity::notifyClientData(this, 0);
  }
  else if ( RogueDiaryRuntimeMgr::getIsHaveProgress(&this->runtime_mgr_)
         && !RogueDiaryRuntimeMgr::getIsRunning(&this->runtime_mgr_)
         && RogueDiaryRuntimeMgr::isCurRoundDungeonFinalRound(&this->runtime_mgr_)
         && RogueDiaryRuntimeMgr::isCurDungeonStageFinalDungeon(&this->runtime_mgr_)
         && RogueDiaryRuntimeMgr::isRoundFightFinished(&this->runtime_mgr_) )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/rogue_diary_activity.cpp",
      "onLogin",
      196);
    v4 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
           &v6,
           (const char (*)[40])"[RogueDiary] settle but have progress, ");
    RogueDiaryRuntimeMgr::getDesc[abi:cxx11](&val, &this->runtime_mgr_);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v4, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v6);
    v5 = RogueDiaryRuntimeMgr::getStageId(&this->runtime_mgr_);
    RogueDiaryRuntimeMgr::clearProgress(&this->runtime_mgr_, v5);
    BaseActivity::notifyClientData(this, 0);
  }
};

// Line 203: range 0000000016C39A08-0000000016C39D28
void __cdecl RogueDiaryActivity::registerEvent(RogueDiaryActivity *const this)
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
  *(_QWORD *)(v1 + 8) = "2 32 16 12 this_ptr:204 64 16 12 this_wtr:205";
  *(_QWORD *)(v1 + 16) = RogueDiaryActivity::registerEvent;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  std::enable_shared_from_this<BaseActivity>::shared_from_this(&v6);
  std::dynamic_pointer_cast<RogueDiaryActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)(v1 + 32));
  std::shared_ptr<BaseActivity>::~shared_ptr((std::shared_ptr<BaseActivity> *const)&v6);
  std::weak_ptr<RogueDiaryActivity>::weak_ptr<RogueDiaryActivity,void>(
    (std::weak_ptr<RogueDiaryActivity> *const)(v1 + 64),
    (const std::shared_ptr<RogueDiaryActivity> *)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  EventComp = Player::getEventComp(this->player_);
  std::weak_ptr<RogueDiaryActivity>::weak_ptr(
    (std::weak_ptr<RogueDiaryActivity> *const)&v6,
    (const std::weak_ptr<RogueDiaryActivity> *)(v1 + 64));
  PlayerEventComp::tryRegisterObserver<RogueDiaryActivity,PostEnterSceneEvent>(
    EventComp,
    (std::weak_ptr<RogueDiaryActivity> *)&v6,
    (void (*)(RogueDiaryActivity *, const PostEnterSceneEvent *))RogueDiaryActivity::onPostEnterSceneEvent,
    0LL);
  std::weak_ptr<RogueDiaryActivity>::~weak_ptr((std::weak_ptr<RogueDiaryActivity> *const)&v6);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  cb_ptr = Player::getEventComp(this->player_);
  std::weak_ptr<RogueDiaryActivity>::weak_ptr(
    (std::weak_ptr<RogueDiaryActivity> *const)&v6,
    (const std::weak_ptr<RogueDiaryActivity> *)(v1 + 64));
  PlayerEventComp::tryRegisterObserver<RogueDiaryActivity,LeaveSceneEvent>(
    cb_ptr,
    (std::weak_ptr<RogueDiaryActivity> *)&v6,
    (void (*)(RogueDiaryActivity *, const LeaveSceneEvent *))RogueDiaryActivity::onLeaveSceneEvent,
    0LL);
  std::weak_ptr<RogueDiaryActivity>::~weak_ptr((std::weak_ptr<RogueDiaryActivity> *const)&v6);
  std::weak_ptr<RogueDiaryActivity>::~weak_ptr((std::weak_ptr<RogueDiaryActivity> *const)(v1 + 64));
  std::shared_ptr<RogueDiaryActivity>::~shared_ptr((std::shared_ptr<RogueDiaryActivity> *const)(v1 + 32));
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

// Line 211: range 0000000016C39D2A-0000000016C39E2E
void __cdecl RogueDiaryActivity::unregisterEvent(RogueDiaryActivity *const this)
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

// Line 223: range 0000000016C39E30-0000000016C3A0F0
int32_t __cdecl RogueDiaryActivity::openAllRogueDiaryStageByGm(RogueDiaryActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  RogueDiaryStageData *v4; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,RogueDiaryStageData>,false,false>,bool> v5; // rax
  common::milog::MiLogStream *v6; // rax
  int32_t result; // eax
  std::unordered_map<unsigned int,data::RogueDiaryStageExcelConfig>::const_iterator __for_begin; // [rsp+10h] [rbp-E0h] BYREF
  std::unordered_map<unsigned int,data::RogueDiaryStageExcelConfig>::const_iterator __for_end; // [rsp+18h] [rbp-D8h] BYREF
  const std::unordered_map<unsigned int,data::RogueDiaryStageExcelConfig> *__for_range; // [rsp+20h] [rbp-D0h]
  const std::pair<unsigned int const,data::RogueDiaryStageExcelConfig> *v11; // [rsp+28h] [rbp-C8h]
  std::tuple_element<0,const std::pair<unsigned int const,data::RogueDiaryStageExcelConfig> >::type *stage_id; // [rsp+30h] [rbp-C0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::RogueDiaryStageExcelConfig> >::type *config; // [rsp+38h] [rbp-B8h]
  std::shared_ptr<Config> v14; // [rsp+40h] [rbp-B0h] BYREF
  common::milog::MiLogStream v15; // [rsp+50h] [rbp-A0h] BYREF
  char v16[128]; // [rsp+70h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 20 14 stage_data:226";
  *(_QWORD *)(v1 + 16) = RogueDiaryActivity::openAllRogueDiaryStageByGm;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -217841664;
  v3[536862722] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v14);
  __for_range = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14)->design_config.txt_config_mgr.activity_rogue_diary_config_mgr.rogue_diary_stage_excel_config_map;
  std::shared_ptr<Config>::~shared_ptr(&v14);
  __for_begin._M_cur = std::unordered_map<unsigned int,data::RogueDiaryStageExcelConfig>::begin(__for_range)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,data::RogueDiaryStageExcelConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::RogueDiaryStageExcelConfig>,false>(
            &__for_begin,
            &__for_end) )
  {
    v11 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::RogueDiaryStageExcelConfig>,false,false>::operator*(&__for_begin);
    stage_id = std::get<0ul,unsigned int const,data::RogueDiaryStageExcelConfig>(v11);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::RogueDiaryStageExcelConfig> >::type *)std::get<1ul,unsigned int const,data::RogueDiaryStageExcelConfig>(v11);
    *(_BYTE *)(v1 + 32) = 0;
    *(_DWORD *)(v1 + 36) = 0;
    *(_DWORD *)(v1 + 40) = 0;
    *(_BYTE *)(v1 + 44) = 0;
    *(_DWORD *)(v1 + 48) = 0;
    v5 = std::unordered_map<unsigned int,RogueDiaryStageData>::emplace<unsigned int const&,RogueDiaryStageData&>(
           &this->stage_map_,
           stage_id,
           (RogueDiaryStageData *)(v1 + 32),
           (const unsigned int *)&this->stage_map_,
           v4);
    if ( !v5.second )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/rogue_diary_activity.cpp",
        "openAllRogueDiaryStageByGm",
        229);
      v6 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
             &v15,
             (const char (*)[59])"[RogueDiary] duplicate open rogue dungoen stage, stage_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, stage_id);
      common::milog::MiLogStream::~MiLogStream(&v15);
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::RogueDiaryStageExcelConfig>,false,false>::operator++(&__for_begin);
  }
  BaseActivity::notifyClientData(this, 0);
  result = 0;
  if ( v16 == (char *)v1 )
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

// Line 238: range 0000000016C3A0F2-0000000016C3A121
int32_t __cdecl RogueDiaryActivity::resumeRogueDiaryDungeonByGm(RogueDiaryActivity *const this)
{
  uint32_t StageId; // edx

  StageId = RogueDiaryRuntimeMgr::getStageId(&this->runtime_mgr_);
  return RogueDiaryActivity::resumeRogueDiaryDungeon(this, StageId);
};

// Line 243: range 0000000016C3A122-0000000016C3A146
int32_t __cdecl RogueDiaryActivity::resetRogueDiaryPlayByGm(RogueDiaryActivity *const this)
{
  RogueDiaryRuntimeMgr::clearAll(&this->runtime_mgr_);
  return 0;
};

// Line 249: range 0000000016C3A148-0000000016C3A16C
void __cdecl RogueDiaryActivity::onPostEnterSceneEvent(
        RogueDiaryActivity *const this,
        const PostEnterSceneEvent *event)
{
  RogueDiaryRuntimeMgr::onPostEnterScene(&this->runtime_mgr_);
};

// Line 254: range 0000000016C3A16E-0000000016C3A192
void __cdecl RogueDiaryActivity::onLeaveSceneEvent(RogueDiaryActivity *const this, const LeaveSceneEvent *event)
{
  RogueDiaryRuntimeMgr::onLeaveScene(&this->runtime_mgr_);
};

// Line 259: range 0000000016C3A194-0000000016C3A9C1
int32_t __cdecl RogueDiaryActivity::startRogueDiaryPlay(
        RogueDiaryActivity *const this,
        const proto::StartRogueDiaryPlayReq *req,
        proto::StartRogueDiaryPlayRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  ActivityRogueDiaryExcelConfigMgr *p_activity_rogue_diary_config_mgr; // r14
  uint32_t v8; // eax
  common::milog::MiLogStream *v9; // r13
  common::milog::MiLogStream *v11; // r13
  common::milog::MiLogStream *v12; // r13
  uint32_t v13; // r15d
  uint32_t v14; // eax
  common::milog::MiLogStream *v15; // r13
  std::__detail::_Node_iterator<std::pair<unsigned int const,RogueDiaryStageData>,false,false>::pointer v16; // rdx
  char v17; // cl
  uint32_t v18; // r13d
  common::milog::MiLogStream *v20; // r13
  bool HaveProgress; // al
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // r13
  bool HaveEnterDungeon; // al
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // r13
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // r13
  unsigned int StageId; // [rsp+28h] [rbp-B8h] BYREF
  unsigned int val; // [rsp+2Ch] [rbp-B4h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,RogueDiaryStageData>,false> __y; // [rsp+30h] [rbp-B0h] BYREF
  const data::RogueDiaryStageExcelConfig *stage_config_ptr; // [rsp+38h] [rbp-A8h]
  std::shared_ptr<Config> v33; // [rsp+40h] [rbp-A0h] BYREF
  common::milog::MiLogStream v34; // [rsp+50h] [rbp-90h] BYREF
  char v35[112]; // [rsp+70h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 8 iter:275";
  *(_QWORD *)(v3 + 16) = RogueDiaryActivity::startRogueDiaryPlay;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  if ( this->is_content_closed_ )
  {
    result = 10366;
    goto LABEL_32;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v33);
  p_activity_rogue_diary_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v33)->design_config.txt_config_mgr.activity_rogue_diary_config_mgr;
  v8 = proto::StartRogueDiaryPlayReq::stage_id(req);
  stage_config_ptr = data::ActivityRogueDiaryExcelConfigMgrBase::findRogueDiaryStageExcelConfig(
                       p_activity_rogue_diary_config_mgr,
                       v8);
  std::shared_ptr<Config>::~shared_ptr(&v33);
  if ( !stage_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v34,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/rogue_diary_activity.cpp",
      "startRogueDiaryPlay",
      267);
    v9 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
           &v34,
           (const char (*)[62])"[RogueDiary] findRogueDiaryStageExcelConfig failed, stage_id:");
    val = proto::StartRogueDiaryPlayReq::stage_id(req);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
    common::milog::MiLogStream::~MiLogStream(&v34);
    result = -1;
    goto LABEL_32;
  }
  if ( !proto::StartRogueDiaryPlayReq::difficulty(req) || proto::StartRogueDiaryPlayReq::difficulty(req) > 3 )
  {
    common::milog::MiLogStream::create(
      &v34,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/rogue_diary_activity.cpp",
      "startRogueDiaryPlay",
      272);
    v11 = common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(
            &v34,
            (const char (*)[65])"[RogueDiary] invalid rogue diary dungeon difficulty, difficulty:");
    val = proto::StartRogueDiaryPlayReq::difficulty(req);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
    common::milog::MiLogStream::~MiLogStream(&v34);
    result = -1;
    goto LABEL_32;
  }
  val = proto::StartRogueDiaryPlayReq::stage_id(req);
  *(std::unordered_map<unsigned int,RogueDiaryStageData>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,RogueDiaryStageData>::find(
                                                                                   &this->stage_map_,
                                                                                   &val);
  __y._M_cur = std::unordered_map<unsigned int,RogueDiaryStageData>::end(&this->stage_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,RogueDiaryStageData>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,RogueDiaryStageData>,false> *)(v3 + 32),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v34,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/rogue_diary_activity.cpp",
      "startRogueDiaryPlay",
      278);
    v12 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
            &v34,
            (const char (*)[40])"[RogueDiary] stage is locked, stage_id:");
    val = proto::StartRogueDiaryPlayReq::stage_id(req);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
    common::milog::MiLogStream::~MiLogStream(&v34);
    result = -1;
    goto LABEL_32;
  }
  if ( !RogueDiaryRuntimeMgr::getIsHaveProgress(&this->runtime_mgr_) )
  {
    v13 = proto::StartRogueDiaryPlayReq::difficulty(req);
    v14 = proto::StartRogueDiaryPlayReq::stage_id(req);
    if ( RogueDiaryRuntimeMgr::createProgress(&this->runtime_mgr_, v14, v13) )
    {
      common::milog::MiLogStream::create(
        &v34,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/rogue_diary_activity.cpp",
        "startRogueDiaryPlay",
        286);
      v15 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
              &v34,
              (const char (*)[46])"[RogueDiary] createProgress failed, stage_id:");
      val = proto::StartRogueDiaryPlayReq::stage_id(req);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
      common::milog::MiLogStream::~MiLogStream(&v34);
      result = -1;
      goto LABEL_32;
    }
    RogueDiaryRuntimeMgr::notifyRepairInfo(&this->runtime_mgr_, 0);
    v16 = std::__detail::_Node_iterator<std::pair<unsigned int const,RogueDiaryStageData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,RogueDiaryStageData>,false,false> *const)(v3 + 32));
    v17 = *(_BYTE *)(((unsigned __int64)&v16->second >> 3) + 0x7FFF8000);
    if ( v17 != 0 && (((unsigned __int8)v16 + 4) & 7) >= v17 )
      __asan_report_store1(&v16->second, v17 != 0, v16);
    v16->second.is_have_try = 1;
    BaseActivity::notifyClientData(this, 0);
  }
  else
  {
    if ( RogueDiaryRuntimeMgr::getIsHaveEnterDungeon(&this->runtime_mgr_)
      || (v18 = RogueDiaryRuntimeMgr::getStageId(&this->runtime_mgr_),
          v18 != proto::StartRogueDiaryPlayReq::stage_id(req)) )
    {
      common::milog::MiLogStream::create(
        &v34,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/rogue_diary_activity.cpp",
        "startRogueDiaryPlay",
        302);
      v20 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
              &v34,
              (const char (*)[46])"[RogueDiary] invalid stage, is_have_progress:");
      HaveProgress = RogueDiaryRuntimeMgr::getIsHaveProgress(&this->runtime_mgr_);
      v22 = common::milog::MiLogStream::operator<<(v20, HaveProgress);
      v23 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
              v22,
              (const char (*)[25])", is_have_enter_dungeon:");
      HaveEnterDungeon = RogueDiaryRuntimeMgr::getIsHaveEnterDungeon(&this->runtime_mgr_);
      v25 = common::milog::MiLogStream::operator<<(v23, HaveEnterDungeon);
      v26 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              v25,
              (const char (*)[18])", progress_stage:");
      StageId = RogueDiaryRuntimeMgr::getStageId(&this->runtime_mgr_);
      v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &StageId);
      v28 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v27, (const char (*)[17])", request_stage:");
      val = proto::StartRogueDiaryPlayReq::stage_id(req);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, &val);
      common::milog::MiLogStream::~MiLogStream(&v34);
      result = -1;
      goto LABEL_32;
    }
    common::milog::MiLogStream::create(
      &v34,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/rogue_diary_activity.cpp",
      "startRogueDiaryPlay",
      297);
    common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
      &v34,
      (const char (*)[62])"[RogueDiary] player have progress, but does not finish repair");
    common::milog::MiLogStream::~MiLogStream(&v34);
    RogueDiaryRuntimeMgr::notifyRepairInfo(&this->runtime_mgr_, 0);
  }
  result = 0;
LABEL_32:
  if ( v35 == (char *)v3 )
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

// Line 312: range 0000000016C3A9C2-0000000016C3B01D
__int64 __fastcall RogueDiaryActivity::resetRogueDiaryPlay(RogueDiaryActivity *const this, uint32_t stage_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  unsigned int v5; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  PlayerSceneComp *SceneComp; // rax
  char v9; // r14
  ActivityRogueDiaryExcelConfigMgr *p_activity_rogue_diary_config_mgr; // r15
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  uint32_t DungeonId; // eax
  bool v13; // r15
  common::milog::MiLogStream *v14; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  common::milog::MiLogStream *v16; // rax
  __int64 result; // rax
  unsigned int val; // [rsp+24h] [rbp-CCh] BYREF
  const data::RogueDiaryStageExcelConfig *stage_config_ptr; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<Config> v20; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 stage_id:311 64 16 21 dungeon_scene_ptr:329";
  *(_QWORD *)(v2 + 16) = RogueDiaryActivity::resetRogueDiaryPlay;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = stage_id;
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  if ( this->is_content_closed_ )
  {
    v5 = 10366;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v20);
    v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20);
    stage_config_ptr = data::ActivityRogueDiaryExcelConfigMgrBase::findRogueDiaryStageExcelConfig(
                         &v6->design_config.txt_config_mgr.activity_rogue_diary_config_mgr,
                         *(_DWORD *)(v2 + 48));
    std::shared_ptr<Config>::~shared_ptr(&v20);
    if ( stage_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      SceneComp = Player::getSceneComp(this->player_);
      if ( PlayerSceneComp::isInTransfer(SceneComp) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/rogue_diary_activity.cpp",
          "resetRogueDiaryPlay",
          326);
        common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
          &v21,
          (const char (*)[51])"[RogueDiary] is in transfer, cannot reset progress");
        common::milog::MiLogStream::~MiLogStream(&v21);
        v5 = -1;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        Player::getSceneComp(this->player_);
        PlayerSceneComp::getCurScene<DungeonScene>((PlayerSceneComp *const)(v2 + 64));
        v9 = 0;
        v13 = 0;
        if ( std::operator!=<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v2 + 64)) )
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v20);
          v9 = 1;
          p_activity_rogue_diary_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20)->design_config.txt_config_mgr.activity_rogue_diary_config_mgr;
          v11 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          DungeonId = DungeonScene::getDungeonId(v11);
          if ( data::ActivityRogueDiaryExcelConfigMgrBase::findRogueDiaryDungeonExcelConfig(
                 p_activity_rogue_diary_config_mgr,
                 DungeonId) )
          {
            v13 = 1;
          }
        }
        if ( v9 )
          std::shared_ptr<Config>::~shared_ptr(&v20);
        if ( v13 )
        {
          common::milog::MiLogStream::create(
            &v21,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/rogue_diary_activity.cpp",
            "resetRogueDiaryPlay",
            332);
          v14 = common::milog::MiLogStream::operator<<<char [82],(char *[82])0>(
                  &v21,
                  (const char (*)[82])"[RogueDiary] player is in rogue diary dungeon, cannot reset progress, dungeon_id:");
          v15 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          val = DungeonScene::getDungeonId(v15);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &val);
          common::milog::MiLogStream::~MiLogStream(&v21);
          v5 = -1;
        }
        else if ( !RogueDiaryRuntimeMgr::getIsHaveProgress(&this->runtime_mgr_) )
        {
          common::milog::MiLogStream::create(
            &v21,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/rogue_diary_activity.cpp",
            "resetRogueDiaryPlay",
            337);
          common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
            &v21,
            (const char (*)[30])"[RogueDiary] have no progress");
          common::milog::MiLogStream::~MiLogStream(&v21);
          v5 = -1;
        }
        else if ( RogueDiaryRuntimeMgr::clearProgress(&this->runtime_mgr_, *(_DWORD *)(v2 + 48)) )
        {
          common::milog::MiLogStream::create(
            &v21,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/rogue_diary_activity.cpp",
            "resetRogueDiaryPlay",
            342);
          v16 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                  &v21,
                  (const char (*)[45])"[RogueDiary] clearProgress failed, stage_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v2 + 48));
          common::milog::MiLogStream::~MiLogStream(&v21);
          v5 = -1;
        }
        else
        {
          BaseActivity::notifyClientData(this, 0);
          v5 = 0;
        }
        std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 64));
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/rogue_diary_activity.cpp",
        "resetRogueDiaryPlay",
        320);
      v7 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
             &v21,
             (const char (*)[62])"[RogueDiary] findRogueDiaryStageExcelConfig failed, stage_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v21);
      v5 = -1;
    }
  }
  result = v5;
  if ( v22 == (char *)v2 )
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

// Line 350: range 0000000016C3B01E-0000000016C3BF71
int32_t __cdecl RogueDiaryActivity::enterRogueDiaryDungeon(
        RogueDiaryActivity *const this,
        const proto::EnterRogueDiaryDungeonReq *req,
        proto::EnterRogueDiaryDungeonRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int32_t v6; // r14d
  common::milog::MiLogStream *v7; // rbx
  ActivityRogueDiaryExcelConfigMgr *p_activity_rogue_diary_config_mgr; // r14
  uint32_t StageId; // eax
  common::milog::MiLogStream *v10; // r14
  unsigned int v11; // edi
  common::milog::MiLogStream *v12; // r14
  const google::protobuf::RepeatedField<unsigned int> *v13; // rax
  __int64 v14; // r14
  common::milog::MiLogStream *v15; // r14
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr M_node; // r14
  std::set<unsigned int>::iterator v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v24; // r14
  const google::protobuf::RepeatedPtrField<proto::RogueDiaryAvatar> *v25; // rax
  const google::protobuf::RepeatedField<unsigned int> *v26; // rax
  GameserverService *v27; // rax
  uint32_t v28; // r14d
  uint32_t DungeonId; // eax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  uint32_t v31; // r14d
  common::milog::MiLogStream *v33; // r14
  DungeonScene *v34; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v35; // rax
  uint32_t SceneId; // esi
  PlayerDungeonComp *DungeonComp; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // rax
  uint32_t v39; // eax
  PlayerDungeonComp *v40; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v41; // rax
  uint32_t v42; // r15d
  common::milog::MiLogStream *v43; // r14
  DungeonScene *v44; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+20h] [rbp-180h] BYREF
  int32_t ret; // [rsp+24h] [rbp-17Ch]
  const data::RogueDiaryStageExcelConfig *stage_config_ptr; // [rsp+28h] [rbp-178h]
  const std::vector<unsigned int> *optional_card_vec; // [rsp+30h] [rbp-170h]
  DungeonSceneTeam *dungeon_scene_team; // [rsp+38h] [rbp-168h]
  std::shared_ptr<Player> v52; // [rsp+40h] [rbp-160h] BYREF
  common::milog::MiLogStream v53; // [rsp+50h] [rbp-150h] BYREF
  char v54[304]; // [rsp+70h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v54;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 8 8 pred:393 80 8 11 context:424 112 16 13 scene_ptr:366 144 16 21 dungeon_scene_ptr:426 17"
                        "6 48 19 chosen_card_set:385";
  *(_QWORD *)(v3 + 16) = RogueDiaryActivity::enterRogueDiaryDungeon;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862721] = -234881024;
  v5[536862722] = 62194;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862724] = 62194;
  v5[536862725] = 62194;
  v5[536862727] = -202116109;
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  if ( this->is_content_closed_ )
  {
    v6 = 10366;
  }
  else
  {
    ret = RogueDiaryRuntimeMgr::checkCanEnterRogueDiaryDungeon(&this->runtime_mgr_);
    if ( ret )
    {
      common::milog::MiLogStream::create(
        &v53,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/rogue_diary_activity.cpp",
        "enterRogueDiaryDungeon",
        358);
      common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
        &v53,
        (const char (*)[51])"[RogueDiary] checkCanEnterRogueDiaryDungeon failed");
      common::milog::MiLogStream::~MiLogStream(&v53);
      v6 = ret;
    }
    else if ( RogueDiaryRuntimeMgr::getIsHaveEnterDungeon(&this->runtime_mgr_) )
    {
      common::milog::MiLogStream::create(
        &v53,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/rogue_diary_activity.cpp",
        "enterRogueDiaryDungeon",
        363);
      v7 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
             &v53,
             (const char (*)[59])"[RogueDiary] player can enter dungeon by resume, stage_id:");
      val = RogueDiaryRuntimeMgr::getStageId(&this->runtime_mgr_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
      common::milog::MiLogStream::~MiLogStream(&v53);
      v6 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      Player::getSceneComp(this->player_);
      PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v3 + 112));
      if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 112)) )
      {
        common::milog::MiLogStream::create(
          &v53,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/rogue_diary_activity.cpp",
          "enterRogueDiaryDungeon",
          369);
        common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
          &v53,
          (const char (*)[33])"[RogueDiary] getCurScene nullptr");
        common::milog::MiLogStream::~MiLogStream(&v53);
        v6 = -1;
      }
      else
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v52);
        p_activity_rogue_diary_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v52)->design_config.txt_config_mgr.activity_rogue_diary_config_mgr;
        StageId = RogueDiaryRuntimeMgr::getStageId(&this->runtime_mgr_);
        stage_config_ptr = data::ActivityRogueDiaryExcelConfigMgrBase::findRogueDiaryStageExcelConfig(
                             p_activity_rogue_diary_config_mgr,
                             StageId);
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v52);
        if ( stage_config_ptr )
        {
          v11 = proto::EnterRogueDiaryDungeonReq::chosen_card_list_size(req);
          if ( *(_BYTE *)(((unsigned __int64)&stage_config_ptr->chosen_card_count >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)stage_config_ptr + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&stage_config_ptr->chosen_card_count >> 3)
                                                                            + 0x7FFF8000) )
          {
            v11 = (_DWORD)stage_config_ptr + 92;
            __asan_report_load4(&stage_config_ptr->chosen_card_count);
          }
          if ( v11 <= stage_config_ptr->chosen_card_count )
          {
            std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 176));
            v13 = proto::EnterRogueDiaryDungeonReq::chosen_card_list(req);
            common::tools::MiscUtils::setFromRepeated<std::set<unsigned int>,unsigned int>(
              (std::set<unsigned int> *)(v3 + 176),
              v13);
            v14 = proto::EnterRogueDiaryDungeonReq::chosen_card_list_size(req);
            if ( v14 == std::set<unsigned int>::size((const std::set<unsigned int> *const)(v3 + 176)) )
            {
              optional_card_vec = RogueDiaryRuntimeMgr::getOptionalCardVec(&this->runtime_mgr_);
              *(_QWORD *)(v3 + 48) = optional_card_vec;
              M_node = std::set<unsigned int>::end((const std::set<unsigned int> *const)(v3 + 176))._M_node;
              v19._M_node = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v3 + 176))._M_node;
              if ( std::any_of<std::_Rb_tree_const_iterator<unsigned int>,RogueDiaryActivity::enterRogueDiaryDungeon(proto::EnterRogueDiaryDungeonReq const&,proto::EnterRogueDiaryDungeonRsp &)::{lambda(std::_Rb_tree_const_iterator<unsigned int> &)#1}>(
                     v19,
                     (std::_Rb_tree_const_iterator<unsigned int>)M_node,
                     *(RogueDiaryActivity::enterRogueDiaryDungeon::<lambda(auto:23&)> *)(v3 + 48)) )
              {
                common::milog::MiLogStream::create(
                  &v53,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/activity/rogue_diary_activity.cpp",
                  "enterRogueDiaryDungeon",
                  399);
                v20 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                        &v53,
                        (const char (*)[55])"[RogueDiary] chosen card is not optional, chosen_card:");
                v21 = common::milog::MiLogStream::operator<<<unsigned int>(
                        v20,
                        (const std::set<unsigned int> *)(v3 + 176));
                v22 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                        v21,
                        (const char (*)[21])", optional_card_vec:");
                common::milog::MiLogStream::operator<<<unsigned int>(v22, optional_card_vec);
                common::milog::MiLogStream::~MiLogStream(&v53);
                v6 = -1;
              }
              else if ( (unsigned int)proto::EnterRogueDiaryDungeonReq::chosen_avatar_list_size(req) > 4
                     || !proto::EnterRogueDiaryDungeonReq::chosen_avatar_list_size(req) )
              {
                common::milog::MiLogStream::create(
                  &v53,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/activity/rogue_diary_activity.cpp",
                  "enterRogueDiaryDungeon",
                  406);
                v24 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                        &v53,
                        (const char (*)[47])"[RogueDiary] invalid chosen avatar size, size:");
                val = proto::EnterRogueDiaryDungeonReq::chosen_avatar_list_size(req);
                common::milog::MiLogStream::operator<<<int,(int *)0>(v24, (const int *)&val);
                common::milog::MiLogStream::~MiLogStream(&v53);
                v6 = -1;
              }
              else
              {
                v25 = proto::EnterRogueDiaryDungeonReq::chosen_avatar_list(req);
                ret = RogueDiaryRuntimeMgr::checkAndSetRogueDiaryTeam(&this->runtime_mgr_, v25);
                if ( ret )
                {
                  common::milog::MiLogStream::create(
                    &v53,
                    &common::milog::MiLogDefault::default_log_obj_,
                    1u,
                    "./src/player/activity/rogue_diary_activity.cpp",
                    "enterRogueDiaryDungeon",
                    413);
                  common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                    &v53,
                    (const char (*)[46])"[RogueDiary] checkAndSetRogueDiaryTeam failed");
                  common::milog::MiLogStream::~MiLogStream(&v53);
                  v6 = ret;
                }
                else
                {
                  RogueDiaryRuntimeMgr::setIsHaveEnterDungeon(&this->runtime_mgr_, 1);
                  RogueDiaryRuntimeMgr::saveLastRoundCardInfo(&this->runtime_mgr_);
                  v26 = proto::EnterRogueDiaryDungeonReq::chosen_card_list(req);
                  RogueDiaryRuntimeMgr::setChosenCardVec(&this->runtime_mgr_, v26);
                  RogueDiaryRuntimeMgr::clearOptionalCardVec(&this->runtime_mgr_);
                  *(_DWORD *)(v3 + 80) = 0;
                  *(_BYTE *)(v3 + 84) = 0;
                  *(_DWORD *)(v3 + 80) = RogueDiaryRuntimeMgr::getStageId(&this->runtime_mgr_);
                  v27 = ServiceBox::findService<GameserverService>();
                  v28 = (unsigned int)GameserverService::getGameThreadLocal(v27) + 568;
                  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8(&this->player_);
                  toThisPtr<Player>((Player *)&v52);
                  DungeonId = RogueDiaryRuntimeMgr::getDungeonId(&this->runtime_mgr_);
                  DungeonMgr::createDungeon((DungeonMgr *const)(v3 + 144), v28, (PlayerPtr *)DungeonId);
                  std::shared_ptr<Player>::~shared_ptr(&v52);
                  if ( std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v3 + 144))
                    || (v30 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144)),
                        v31 = DungeonScene::getDungeonId(v30),
                        v31 != RogueDiaryRuntimeMgr::getDungeonId(&this->runtime_mgr_)) )
                  {
                    common::milog::MiLogStream::create(
                      &v53,
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/player/activity/rogue_diary_activity.cpp",
                      "enterRogueDiaryDungeon",
                      429);
                    v33 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                            &v53,
                            (const char (*)[47])"[RogueDiary] player enter dungeon failed, uid:");
                    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                      __asan_report_load8(&this->player_);
                    val = Player::getUid(this->player_);
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, &val);
                    common::milog::MiLogStream::~MiLogStream(&v53);
                    v6 = -1;
                  }
                  else
                  {
                    v34 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
                    dungeon_scene_team = DungeonScene::getDungeonSceneTeam(v34);
                    v35 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
                    SceneId = Scene::getSceneId((const Scene *const)v35);
                    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                      __asan_report_load8(&this->player_);
                    DungeonSceneTeam::initSceneTeam(dungeon_scene_team, this->player_, SceneId);
                    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                      __asan_report_load8(&this->player_);
                    DungeonComp = Player::getDungeonComp(this->player_);
                    v38 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
                    v39 = DungeonScene::getDungeonId(v38);
                    PlayerDungeonComp::tryResetLevelTagBeforeEnterDungeon(DungeonComp, v39);
                    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                      __asan_report_load8(&this->player_);
                    v40 = Player::getDungeonComp(this->player_);
                    v41 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
                    v42 = Scene::getSceneId(v41);
                    std::shared_ptr<DungeonScene>::shared_ptr(
                      (std::shared_ptr<DungeonScene> *const)&v52,
                      (const std::shared_ptr<DungeonScene> *)(v3 + 144));
                    ret = PlayerDungeonComp::enterDungeon(v40, (DungeonScenePtr *)&v52, v42, 0);
                    std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)&v52);
                    if ( ret )
                    {
                      common::milog::MiLogStream::create(
                        &v53,
                        &common::milog::MiLogDefault::default_log_obj_,
                        3u,
                        "./src/player/activity/rogue_diary_activity.cpp",
                        "enterRogueDiaryDungeon",
                        438);
                      v43 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                              &v53,
                              (const char (*)[45])"[RogueDiary] enterDungeon fails, dungeon_id:");
                      val = RogueDiaryRuntimeMgr::getDungeonId(&this->runtime_mgr_);
                      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v43, &val);
                      common::milog::MiLogStream::~MiLogStream(&v53);
                      v6 = ret;
                    }
                    else
                    {
                      v44 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
                      DungeonScene::setDungeonExtraData<RogueDiaryDungeonContext>(
                        v44,
                        (const RogueDiaryDungeonContext *)(v3 + 80));
                      v6 = 0;
                    }
                  }
                  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v3 + 144));
                }
              }
            }
            else
            {
              common::milog::MiLogStream::create(
                &v53,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/rogue_diary_activity.cpp",
                "enterRogueDiaryDungeon",
                389);
              v15 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
                      &v53,
                      (const char (*)[62])"[RogueDiary] optional_order_list has duplicate element, size:");
              val = proto::EnterRogueDiaryDungeonReq::chosen_card_list_size(req);
              v16 = common::milog::MiLogStream::operator<<<int,(int *)0>(v15, (const int *)&val);
              v17 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                      v16,
                      (const char (*)[12])", set_size:");
              *(_QWORD *)(v3 + 80) = std::set<unsigned int>::size((const std::set<unsigned int> *const)(v3 + 176));
              common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                v17,
                (const unsigned __int64 *)(v3 + 80));
              common::milog::MiLogStream::~MiLogStream(&v53);
              v6 = -1;
            }
            std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 176));
          }
          else
          {
            common::milog::MiLogStream::create(
              &v53,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/rogue_diary_activity.cpp",
              "enterRogueDiaryDungeon",
              382);
            v12 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
                    &v53,
                    (const char (*)[66])"[RogueDiary] chosen card size too large failed, chosen card size:");
            val = proto::EnterRogueDiaryDungeonReq::chosen_card_list_size(req);
            common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)&val);
            common::milog::MiLogStream::~MiLogStream(&v53);
            v6 = -1;
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v53,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/rogue_diary_activity.cpp",
            "enterRogueDiaryDungeon",
            377);
          v10 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
                  &v53,
                  (const char (*)[62])"[RogueDiary] findRogueDiaryStageExcelConfig failed, stage_id:");
          val = RogueDiaryRuntimeMgr::getStageId(&this->runtime_mgr_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
          common::milog::MiLogStream::~MiLogStream(&v53);
          v6 = -1;
        }
      }
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 112));
    }
  }
  result = v6;
  if ( v54 == (char *)v3 )
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

// Line 393: range 0000000016D3C0FE-0000000016D3C149
bool __cdecl RogueDiaryActivity::enterRogueDiaryDungeon::_lambda_auto_23___::operator()_unsigned_int_const_(
        const RogueDiaryActivity::enterRogueDiaryDungeon::<lambda(auto:23&)> *const __closure,
        const unsigned int *p)
{
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  return !common::tools::MiscUtils::isContains<unsigned int>(__closure->__optional_card_vec, p);
};

// Line 449: range 0000000016C3BF72-0000000016C3CAAC
__int64 __fastcall RogueDiaryActivity::resumeRogueDiaryDungeon(RogueDiaryActivity *const this, uint32_t stage_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned int v5; // r14d
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  GameserverService *v11; // rax
  uint32_t v12; // r14d
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v15; // r14
  DungeonScene *v16; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  uint32_t SceneId; // esi
  PlayerDungeonComp *DungeonComp; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  uint32_t DungeonId; // eax
  PlayerDungeonComp *v22; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  uint32_t v24; // r15d
  common::milog::MiLogStream *v25; // r14
  DungeonScene *v26; // rax
  __int64 result; // rax
  unsigned int val; // [rsp+20h] [rbp-150h] BYREF
  int32_t ret; // [rsp+24h] [rbp-14Ch]
  DungeonSceneTeam *dungeon_scene_team; // [rsp+28h] [rbp-148h]
  std::shared_ptr<Player> v31; // [rsp+30h] [rbp-140h] BYREF
  common::milog::MiLogStream v32; // [rsp+40h] [rbp-130h] BYREF
  char v33[272]; // [rsp+60h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 4 21 resume_dungeon_id:485 48 4 12 stage_id:448 64 8 11 context:495 96 12 7 pos:486 128 12 "
                        "7 rot:487 160 16 13 scene_ptr:460 192 16 21 dungeon_scene_ptr:498";
  *(_QWORD *)(v2 + 16) = RogueDiaryActivity::resumeRogueDiaryDungeon;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -219020288;
  v4[536862724] = -219020288;
  v4[536862725] = -219021312;
  v4[536862726] = -202178560;
  *(_DWORD *)(v2 + 48) = stage_id;
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  if ( this->is_content_closed_ )
  {
    v5 = 10366;
  }
  else
  {
    ret = RogueDiaryRuntimeMgr::checkCanEnterRogueDiaryDungeon(&this->runtime_mgr_);
    if ( ret )
    {
      common::milog::MiLogStream::create(
        &v32,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/rogue_diary_activity.cpp",
        "resumeRogueDiaryDungeon",
        457);
      common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
        &v32,
        (const char (*)[51])"[RogueDiary] checkCanEnterRogueDiaryDungeon failed");
      common::milog::MiLogStream::~MiLogStream(&v32);
      v5 = ret;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      Player::getSceneComp(this->player_);
      PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 160));
      if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 160)) )
      {
        common::milog::MiLogStream::create(
          &v32,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/rogue_diary_activity.cpp",
          "resumeRogueDiaryDungeon",
          463);
        common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
          &v32,
          (const char (*)[33])"[RogueDiary] getCurScene nullptr");
        common::milog::MiLogStream::~MiLogStream(&v32);
        v5 = -1;
      }
      else if ( RogueDiaryRuntimeMgr::getStageId(&this->runtime_mgr_) == *(_DWORD *)(v2 + 48) )
      {
        if ( !RogueDiaryRuntimeMgr::getIsHaveEnterDungeon(&this->runtime_mgr_) )
        {
          common::milog::MiLogStream::create(
            &v32,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/rogue_diary_activity.cpp",
            "resumeRogueDiaryDungeon",
            474);
          v9 = common::milog::MiLogStream::operator<<<char [72],(char *[72])0>(
                 &v32,
                 (const char (*)[72])"[RogueDiary] player do not have enter dungeon, cannot resume, stage_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
          common::milog::MiLogStream::~MiLogStream(&v32);
          v5 = -1;
        }
        else
        {
          ret = RogueDiaryRuntimeMgr::resumeCurRoomAndGroupIndex(&this->runtime_mgr_);
          if ( ret )
          {
            common::milog::MiLogStream::create(
              &v32,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/activity/rogue_diary_activity.cpp",
              "resumeRogueDiaryDungeon",
              481);
            common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
              &v32,
              (const char (*)[47])"[RogueDiary] resumeCurRoomAndGroupIndex failed");
            common::milog::MiLogStream::~MiLogStream(&v32);
            v5 = ret;
          }
          else
          {
            *(_DWORD *)(v2 + 32) = 0;
            Vector3::Vector3((Vector3 *const)(v2 + 96), 0.0, 0.0, 0.0);
            Vector3::Vector3((Vector3 *const)(v2 + 128), 0.0, 0.0, 0.0);
            ret = RogueDiaryRuntimeMgr::tryGetProgressResumeDungeonAndBornData(
                    &this->runtime_mgr_,
                    (uint32_t *)(v2 + 32),
                    (Vector3 *)(v2 + 96),
                    (Vector3 *)(v2 + 128));
            if ( ret )
            {
              common::milog::MiLogStream::create(
                &v32,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/rogue_diary_activity.cpp",
                "resumeRogueDiaryDungeon",
                491);
              v10 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
                      &v32,
                      (const char (*)[63])"[RogueDiary] tryGetProgressResumeDungeonAndBornData, stage_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v10,
                (const unsigned int *)(v2 + 48));
              common::milog::MiLogStream::~MiLogStream(&v32);
              v5 = ret;
            }
            else
            {
              *(_DWORD *)(v2 + 64) = 0;
              *(_BYTE *)(v2 + 68) = 0;
              *(_DWORD *)(v2 + 64) = RogueDiaryRuntimeMgr::getStageId(&this->runtime_mgr_);
              *(_BYTE *)(v2 + 68) = 1;
              v11 = ServiceBox::findService<GameserverService>();
              v12 = (unsigned int)GameserverService::getGameThreadLocal(v11) + 568;
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->player_);
              toThisPtr<Player>((Player *)&v31);
              DungeonMgr::createDungeon((DungeonMgr *const)(v2 + 192), v12, (PlayerPtr *)*(unsigned int *)(v2 + 32));
              std::shared_ptr<Player>::~shared_ptr(&v31);
              if ( std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v2 + 192))
                || (v13 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192)),
                    DungeonScene::getDungeonId(v13) != *(_DWORD *)(v2 + 32)) )
              {
                common::milog::MiLogStream::create(
                  &v32,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/activity/rogue_diary_activity.cpp",
                  "resumeRogueDiaryDungeon",
                  501);
                v15 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                        &v32,
                        (const char (*)[47])"[RogueDiary] player createDungeon failed, uid:");
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8(&this->player_);
                val = Player::getUid(this->player_);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
                common::milog::MiLogStream::~MiLogStream(&v32);
                v5 = -1;
              }
              else
              {
                v16 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
                dungeon_scene_team = DungeonScene::getDungeonSceneTeam(v16);
                v17 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
                SceneId = Scene::getSceneId((const Scene *const)v17);
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8(&this->player_);
                DungeonSceneTeam::initSceneTeam(dungeon_scene_team, this->player_, SceneId);
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8(&this->player_);
                DungeonComp = Player::getDungeonComp(this->player_);
                v20 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
                DungeonId = DungeonScene::getDungeonId(v20);
                PlayerDungeonComp::tryResetLevelTagBeforeEnterDungeon(DungeonComp, DungeonId);
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8(&this->player_);
                v22 = Player::getDungeonComp(this->player_);
                v23 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
                v24 = Scene::getSceneId(v23);
                std::shared_ptr<DungeonScene>::shared_ptr(
                  (std::shared_ptr<DungeonScene> *const)&v31,
                  (const std::shared_ptr<DungeonScene> *)(v2 + 192));
                ret = PlayerDungeonComp::enterDungeon(
                        v22,
                        (DungeonScenePtr *)&v31,
                        v24,
                        0,
                        (const Vector3 *)(v2 + 96),
                        (const Vector3 *)(v2 + 128));
                std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)&v31);
                if ( ret )
                {
                  common::milog::MiLogStream::create(
                    &v32,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/activity/rogue_diary_activity.cpp",
                    "resumeRogueDiaryDungeon",
                    510);
                  v25 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                          &v32,
                          (const char (*)[45])"[RogueDiary] enterDungeon fails, dungeon_id:");
                  val = RogueDiaryRuntimeMgr::getDungeonId(&this->runtime_mgr_);
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &val);
                  common::milog::MiLogStream::~MiLogStream(&v32);
                  v5 = ret;
                }
                else
                {
                  v26 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
                  DungeonScene::setDungeonExtraData<RogueDiaryDungeonContext>(
                    v26,
                    (const RogueDiaryDungeonContext *)(v2 + 64));
                  if ( RogueDiaryRuntimeMgr::isCurStageNextDungeon(&this->runtime_mgr_, *(_DWORD *)(v2 + 32)) )
                    RogueDiaryRuntimeMgr::setIsEnterNextDungeon(&this->runtime_mgr_, 1);
                  v5 = 0;
                }
              }
              std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 192));
            }
          }
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v32,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/rogue_diary_activity.cpp",
          "resumeRogueDiaryDungeon",
          468);
        v6 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
               &v32,
               (const char (*)[50])"[RogueDiary] invalid stage_id, progress_stage_id:");
        val = RogueDiaryRuntimeMgr::getStageId(&this->runtime_mgr_);
        v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
        v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v7, (const char (*)[16])", req_stage_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v32);
        v5 = -1;
      }
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 160));
    }
  }
  result = v5;
  if ( v33 == (char *)v2 )
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

// Line 523: range 0000000016C3CAAE-0000000016C3D431
int32_t __cdecl RogueDiaryActivity::retryCurRogueDiaryDungeon(RogueDiaryActivity *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  int32_t v4; // r14d
  common::milog::MiLogStream *v5; // r14
  GameserverService *v6; // rax
  uint32_t v7; // r14d
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v10; // r14
  DungeonScene *v11; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  uint32_t SceneId; // esi
  PlayerDungeonComp *DungeonComp; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  uint32_t DungeonId; // eax
  PlayerDungeonComp *v17; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  uint32_t v19; // r15d
  common::milog::MiLogStream *v20; // r14
  DungeonScene *v21; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+10h] [rbp-150h] BYREF
  int32_t ret; // [rsp+14h] [rbp-14Ch]
  DungeonSceneTeam *dungeon_scene_team; // [rsp+18h] [rbp-148h]
  std::shared_ptr<Player> v26; // [rsp+20h] [rbp-140h] BYREF
  common::milog::MiLogStream v27; // [rsp+30h] [rbp-130h] BYREF
  char v28[272]; // [rsp+50h] [rbp-110h] BYREF

  v1 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(224LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "6 48 4 21 resume_dungeon_id:547 64 8 11 context:557 96 12 7 pos:548 128 12 7 rot:549 160 16 13 s"
                        "cene_ptr:530 192 16 21 dungeon_scene_ptr:560";
  *(_QWORD *)(v1 + 16) = RogueDiaryActivity::retryCurRogueDiaryDungeon;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -218959360;
  v3[536862723] = -219020288;
  v3[536862724] = -219020288;
  v3[536862725] = -219021312;
  v3[536862726] = -202178560;
  ret = RogueDiaryRuntimeMgr::checkCanRetryRogueDiaryDungeon(&this->runtime_mgr_);
  if ( ret )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/rogue_diary_activity.cpp",
      "retryCurRogueDiaryDungeon",
      527);
    common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
      &v27,
      (const char (*)[51])"[RogueDiary] checkCanRetryRogueDiaryDungeon failed");
    common::milog::MiLogStream::~MiLogStream(&v27);
    v4 = ret;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v1 + 160));
    if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v1 + 160)) )
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/rogue_diary_activity.cpp",
        "retryCurRogueDiaryDungeon",
        533);
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
        &v27,
        (const char (*)[33])"[RogueDiary] getCurScene nullptr");
      common::milog::MiLogStream::~MiLogStream(&v27);
      v4 = -1;
    }
    else
    {
      RogueDiaryRuntimeMgr::logSave(&this->runtime_mgr_);
      RogueDiaryRuntimeMgr::clearRuntimeData(&this->runtime_mgr_);
      ret = RogueDiaryRuntimeMgr::resumeCurRoomAndGroupIndex(&this->runtime_mgr_);
      if ( ret )
      {
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/rogue_diary_activity.cpp",
          "retryCurRogueDiaryDungeon",
          543);
        common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
          &v27,
          (const char (*)[47])"[RogueDiary] resumeCurRoomAndGroupIndex failed");
        common::milog::MiLogStream::~MiLogStream(&v27);
        v4 = ret;
      }
      else
      {
        *(_DWORD *)(v1 + 48) = 0;
        Vector3::Vector3((Vector3 *const)(v1 + 96), 0.0, 0.0, 0.0);
        Vector3::Vector3((Vector3 *const)(v1 + 128), 0.0, 0.0, 0.0);
        ret = RogueDiaryRuntimeMgr::tryGetProgressResumeDungeonAndBornData(
                &this->runtime_mgr_,
                (uint32_t *)(v1 + 48),
                (Vector3 *)(v1 + 96),
                (Vector3 *)(v1 + 128));
        if ( ret )
        {
          common::milog::MiLogStream::create(
            &v27,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/rogue_diary_activity.cpp",
            "retryCurRogueDiaryDungeon",
            553);
          v5 = common::milog::MiLogStream::operator<<<char [70],(char *[70])0>(
                 &v27,
                 (const char (*)[70])"[RogueDiary] tryGetProgressResumeDungeonAndBornData failed, stage_id:");
          val = RogueDiaryRuntimeMgr::getStageId(&this->runtime_mgr_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
          common::milog::MiLogStream::~MiLogStream(&v27);
          v4 = ret;
        }
        else
        {
          *(_DWORD *)(v1 + 64) = 0;
          *(_BYTE *)(v1 + 68) = 0;
          *(_DWORD *)(v1 + 64) = RogueDiaryRuntimeMgr::getStageId(&this->runtime_mgr_);
          *(_BYTE *)(v1 + 68) = 1;
          v6 = ServiceBox::findService<GameserverService>();
          v7 = (unsigned int)GameserverService::getGameThreadLocal(v6) + 568;
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          toThisPtr<Player>((Player *)&v26);
          DungeonMgr::createDungeon((DungeonMgr *const)(v1 + 192), v7, (PlayerPtr *)*(unsigned int *)(v1 + 48));
          std::shared_ptr<Player>::~shared_ptr(&v26);
          if ( std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v1 + 192))
            || (v8 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 192)),
                DungeonScene::getDungeonId(v8) != *(_DWORD *)(v1 + 48)) )
          {
            common::milog::MiLogStream::create(
              &v27,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/rogue_diary_activity.cpp",
              "retryCurRogueDiaryDungeon",
              563);
            v10 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                    &v27,
                    (const char (*)[47])"[RogueDiary] player createDungeon failed, uid:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            val = Player::getUid(this->player_);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
            common::milog::MiLogStream::~MiLogStream(&v27);
            v4 = -1;
          }
          else
          {
            v11 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 192));
            dungeon_scene_team = DungeonScene::getDungeonSceneTeam(v11);
            v12 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 192));
            SceneId = Scene::getSceneId((const Scene *const)v12);
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            DungeonSceneTeam::initSceneTeam(dungeon_scene_team, this->player_, SceneId);
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            DungeonComp = Player::getDungeonComp(this->player_);
            v15 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 192));
            DungeonId = DungeonScene::getDungeonId(v15);
            PlayerDungeonComp::tryResetLevelTagBeforeEnterDungeon(DungeonComp, DungeonId);
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            v17 = Player::getDungeonComp(this->player_);
            v18 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 160));
            v19 = Scene::getSceneId(v18);
            std::shared_ptr<DungeonScene>::shared_ptr(
              (std::shared_ptr<DungeonScene> *const)&v26,
              (const std::shared_ptr<DungeonScene> *)(v1 + 192));
            ret = PlayerDungeonComp::enterDungeon(
                    v17,
                    (DungeonScenePtr *)&v26,
                    v19,
                    0,
                    (const Vector3 *)(v1 + 96),
                    (const Vector3 *)(v1 + 128));
            std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)&v26);
            if ( ret )
            {
              common::milog::MiLogStream::create(
                &v27,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/rogue_diary_activity.cpp",
                "retryCurRogueDiaryDungeon",
                572);
              v20 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                      &v27,
                      (const char (*)[45])"[RogueDiary] enterDungeon fails, dungeon_id:");
              val = RogueDiaryRuntimeMgr::getDungeonId(&this->runtime_mgr_);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &val);
              common::milog::MiLogStream::~MiLogStream(&v27);
              v4 = ret;
            }
            else
            {
              v21 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 192));
              DungeonScene::setDungeonExtraData<RogueDiaryDungeonContext>(
                v21,
                (const RogueDiaryDungeonContext *)(v1 + 64));
              if ( RogueDiaryRuntimeMgr::isCurStageNextDungeon(&this->runtime_mgr_, *(_DWORD *)(v1 + 48)) )
                RogueDiaryRuntimeMgr::setIsEnterNextDungeon(&this->runtime_mgr_, 1);
              v4 = 0;
            }
          }
          std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v1 + 192));
        }
      }
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 160));
  }
  result = v4;
  if ( v28 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 584: range 0000000016C3D432-0000000016C3D55C
int32_t __cdecl RogueDiaryActivity::interruptRogueDiaryDungeon(RogueDiaryActivity *const this)
{
  common::milog::MiLogStream v2; // [rsp+10h] [rbp-30h] BYREF

  if ( RogueDiaryRuntimeMgr::checkIsInDungeonRunningState(&this->runtime_mgr_) )
  {
    if ( RogueDiaryRuntimeMgr::checkIsInDungeonInterruptState(&this->runtime_mgr_) )
    {
      if ( RogueDiaryRuntimeMgr::checkIsInDungeonSettleState(&this->runtime_mgr_) )
      {
        common::milog::MiLogStream::create(
          &v2,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/rogue_diary_activity.cpp",
          "interruptRogueDiaryDungeon",
          600);
        common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
          &v2,
          (const char (*)[45])"[RogueDiary] invalid state, cannot interrupt");
        common::milog::MiLogStream::~MiLogStream(&v2);
        return -1;
      }
      RogueDiaryRuntimeMgr::notifySettleInfo(&this->runtime_mgr_, 1);
    }
    else
    {
      RogueDiaryRuntimeMgr::notifySettleInfo(&this->runtime_mgr_, 0);
    }
  }
  else
  {
    RogueDiaryRuntimeMgr::onInterrupt(&this->runtime_mgr_, 3u);
  }
  return 0;
};

// Line 607: range 0000000016C3D55E-0000000016C3DE78
int32_t __cdecl RogueDiaryActivity::enterNextDungeonByGm(RogueDiaryActivity *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  common::milog::MiLogStream *v4; // rbx
  int32_t v5; // r14d
  PlayerSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v7; // rbx
  GameserverService *v8; // rax
  uint32_t v9; // r14d
  uint32_t CurStageNextDungeonId; // eax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  uint32_t v12; // r14d
  common::milog::MiLogStream *v14; // r14
  RogueDiaryActivity *v15; // rdx
  int (**vptr_DescribalBase)(...); // rax
  DungeonScene *v17; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  uint32_t SceneId; // esi
  PlayerDungeonComp *DungeonComp; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  uint32_t DungeonId; // eax
  PlayerDungeonComp *v23; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  uint32_t v25; // r15d
  common::milog::MiLogStream *v26; // r14
  DungeonScene *v27; // rax
  int32_t result; // eax
  unsigned int v29; // [rsp+10h] [rbp-110h] BYREF
  int32_t ret; // [rsp+14h] [rbp-10Ch]
  DungeonSceneTeam *dungeon_scene_team; // [rsp+18h] [rbp-108h]
  std::shared_ptr<Player> v32; // [rsp+20h] [rbp-100h] BYREF
  common::milog::MiLogStream v33; // [rsp+30h] [rbp-F0h] BYREF
  std::string val; // [rsp+50h] [rbp-D0h] BYREF
  char v35[176]; // [rsp+70h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 8 11 context:631 64 16 17 cur_scene_ptr:624 96 16 21 dungeon_scene_ptr:633";
  *(_QWORD *)(v1 + 16) = RogueDiaryActivity::enterNextDungeonByGm;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218959360;
  v3[536862722] = -219021312;
  v3[536862723] = -202178560;
  ret = RogueDiaryRuntimeMgr::checkIsInDungeonRunningState(&this->runtime_mgr_);
  if ( ret )
  {
    common::milog::MiLogStream::create(
      &v33,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/rogue_diary_activity.cpp",
      "enterNextDungeonByGm",
      611);
    v4 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
           &v33,
           (const char (*)[50])"[RogueDiary] checkIsInDungeonRunningState false, ");
    RogueDiaryRuntimeMgr::getDesc[abi:cxx11](&val, &this->runtime_mgr_);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v4, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v33);
    v5 = ret;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    SceneComp = Player::getSceneComp(this->player_);
    if ( PlayerSceneComp::isInTransfer(SceneComp) )
    {
      v5 = 170;
    }
    else if ( RogueDiaryRuntimeMgr::isCurDungeonStageFinalDungeon(&this->runtime_mgr_) )
    {
      common::milog::MiLogStream::create(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/rogue_diary_activity.cpp",
        "enterNextDungeonByGm",
        621);
      v7 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
             &v33,
             (const char (*)[45])"[RogueDiary] isCurDungeonStageFinalDungeon, ");
      RogueDiaryRuntimeMgr::getDesc[abi:cxx11](&val, &this->runtime_mgr_);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, &val);
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v33);
      v5 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      Player::getSceneComp(this->player_);
      PlayerSceneComp::getCurScene<DungeonScene>((PlayerSceneComp *const)(v1 + 64));
      if ( std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v1 + 64)) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&val,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/rogue_diary_activity.cpp",
          "enterNextDungeonByGm",
          627);
        common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
          (common::milog::MiLogStream *const)&val,
          (const char (*)[43])"[RogueDiary] get cur dungeon scene nullptr");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
        v5 = -1;
      }
      else
      {
        *(_DWORD *)(v1 + 32) = 0;
        *(_BYTE *)(v1 + 36) = 0;
        *(_DWORD *)(v1 + 32) = RogueDiaryRuntimeMgr::getStageId(&this->runtime_mgr_);
        v8 = ServiceBox::findService<GameserverService>();
        v9 = (unsigned int)GameserverService::getGameThreadLocal(v8) + 568;
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        toThisPtr<Player>((Player *)&v32);
        CurStageNextDungeonId = RogueDiaryRuntimeMgr::getCurStageNextDungeonId(&this->runtime_mgr_);
        DungeonMgr::createDungeon((DungeonMgr *const)(v1 + 96), v9, (PlayerPtr *)CurStageNextDungeonId);
        std::shared_ptr<Player>::~shared_ptr(&v32);
        if ( std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v1 + 96))
          || (v11 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96)),
              v12 = DungeonScene::getDungeonId(v11),
              v12 != RogueDiaryRuntimeMgr::getCurStageNextDungeonId(&this->runtime_mgr_)) )
        {
          common::milog::MiLogStream::create(
            &v33,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/rogue_diary_activity.cpp",
            "enterNextDungeonByGm",
            636);
          v14 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                  &v33,
                  (const char (*)[43])"[RogueDiary] player createDungeon failed, ");
          v15 = this;
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8(this);
          vptr_DescribalBase = this->_vptr_DescribalBase;
          if ( *(_BYTE *)(((unsigned __int64)this->_vptr_DescribalBase >> 3) + 0x7FFF8000) )
            vptr_DescribalBase = (int (**)(...))__asan_report_load8(this->_vptr_DescribalBase);
          (*vptr_DescribalBase)(&val, v15);
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v14, &val);
          std::string::~string(&val);
          common::milog::MiLogStream::~MiLogStream(&v33);
          v5 = -1;
        }
        else
        {
          v17 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
          dungeon_scene_team = DungeonScene::getDungeonSceneTeam(v17);
          v18 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
          SceneId = Scene::getSceneId((const Scene *const)v18);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          DungeonSceneTeam::initSceneTeam(dungeon_scene_team, this->player_, SceneId);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          DungeonComp = Player::getDungeonComp(this->player_);
          v21 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
          DungeonId = DungeonScene::getDungeonId(v21);
          PlayerDungeonComp::tryResetLevelTagBeforeEnterDungeon(DungeonComp, DungeonId);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          v23 = Player::getDungeonComp(this->player_);
          v24 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
          v25 = Scene::getSceneId((const Scene *const)v24);
          std::shared_ptr<DungeonScene>::shared_ptr(
            (std::shared_ptr<DungeonScene> *const)&v32,
            (const std::shared_ptr<DungeonScene> *)(v1 + 96));
          ret = PlayerDungeonComp::enterDungeon(v23, (DungeonScenePtr *)&v32, v25, 0);
          std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)&v32);
          if ( ret )
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&val,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/rogue_diary_activity.cpp",
              "enterNextDungeonByGm",
              645);
            v26 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                    (common::milog::MiLogStream *const)&val,
                    (const char (*)[45])"[RogueDiary] enterDungeon fails, dungeon_id:");
            v29 = RogueDiaryRuntimeMgr::getCurStageNextDungeonId(&this->runtime_mgr_);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &v29);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
            v5 = ret;
          }
          else
          {
            v27 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
            DungeonScene::setDungeonExtraData<RogueDiaryDungeonContext>(
              v27,
              (const RogueDiaryDungeonContext *)(v1 + 32));
            RogueDiaryRuntimeMgr::setIsEnterNextDungeon(&this->runtime_mgr_, 1);
            v5 = 0;
          }
        }
        std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v1 + 96));
      }
      std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v1 + 64));
    }
  }
  result = v5;
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
  return result;
};

// Line 654: range 0000000016C3DE7A-0000000016C3E797
int32_t __cdecl RogueDiaryActivity::tryEnterNextRogueDiaryDungeon(RogueDiaryActivity *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  common::milog::MiLogStream *v4; // rbx
  int32_t v5; // r14d
  PlayerSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v7; // rbx
  GameserverService *v8; // rax
  uint32_t v9; // r14d
  uint32_t CurStageNextDungeonId; // eax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  uint32_t v12; // r14d
  common::milog::MiLogStream *v14; // r14
  RogueDiaryActivity *v15; // rdx
  int (**vptr_DescribalBase)(...); // rax
  DungeonScene *v17; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  uint32_t SceneId; // esi
  PlayerDungeonComp *DungeonComp; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  uint32_t DungeonId; // eax
  PlayerDungeonComp *v23; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  uint32_t v25; // r15d
  common::milog::MiLogStream *v26; // r14
  DungeonScene *v27; // rax
  int32_t result; // eax
  unsigned int v29; // [rsp+10h] [rbp-110h] BYREF
  int32_t ret; // [rsp+14h] [rbp-10Ch]
  DungeonSceneTeam *dungeon_scene_team; // [rsp+18h] [rbp-108h]
  std::shared_ptr<Player> v32; // [rsp+20h] [rbp-100h] BYREF
  common::milog::MiLogStream v33; // [rsp+30h] [rbp-F0h] BYREF
  std::string val; // [rsp+50h] [rbp-D0h] BYREF
  char v35[176]; // [rsp+70h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 8 11 context:678 64 16 17 cur_scene_ptr:671 96 16 21 dungeon_scene_ptr:680";
  *(_QWORD *)(v1 + 16) = RogueDiaryActivity::tryEnterNextRogueDiaryDungeon;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218959360;
  v3[536862722] = -219021312;
  v3[536862723] = -202178560;
  ret = RogueDiaryRuntimeMgr::checkIsInDungeonRunningState(&this->runtime_mgr_);
  if ( ret )
  {
    common::milog::MiLogStream::create(
      &v33,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/rogue_diary_activity.cpp",
      "tryEnterNextRogueDiaryDungeon",
      658);
    v4 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
           &v33,
           (const char (*)[50])"[RogueDiary] checkIsInDungeonRunningState false, ");
    RogueDiaryRuntimeMgr::getDesc[abi:cxx11](&val, &this->runtime_mgr_);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v4, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v33);
    v5 = ret;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    SceneComp = Player::getSceneComp(this->player_);
    if ( PlayerSceneComp::isInTransfer(SceneComp) )
    {
      v5 = 170;
    }
    else if ( !RogueDiaryRuntimeMgr::isCanEnterNextDungeon(&this->runtime_mgr_) )
    {
      common::milog::MiLogStream::create(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/rogue_diary_activity.cpp",
        "tryEnterNextRogueDiaryDungeon",
        668);
      v7 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
             &v33,
             (const char (*)[43])"[RogueDiary] isCanEnterNextDungeon false, ");
      RogueDiaryRuntimeMgr::getDesc[abi:cxx11](&val, &this->runtime_mgr_);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, &val);
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v33);
      v5 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      Player::getSceneComp(this->player_);
      PlayerSceneComp::getCurScene<DungeonScene>((PlayerSceneComp *const)(v1 + 64));
      if ( std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v1 + 64)) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&val,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/rogue_diary_activity.cpp",
          "tryEnterNextRogueDiaryDungeon",
          674);
        common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
          (common::milog::MiLogStream *const)&val,
          (const char (*)[43])"[RogueDiary] get cur dungeon scene nullptr");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
        v5 = -1;
      }
      else
      {
        *(_DWORD *)(v1 + 32) = 0;
        *(_BYTE *)(v1 + 36) = 0;
        *(_DWORD *)(v1 + 32) = RogueDiaryRuntimeMgr::getStageId(&this->runtime_mgr_);
        v8 = ServiceBox::findService<GameserverService>();
        v9 = (unsigned int)GameserverService::getGameThreadLocal(v8) + 568;
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        toThisPtr<Player>((Player *)&v32);
        CurStageNextDungeonId = RogueDiaryRuntimeMgr::getCurStageNextDungeonId(&this->runtime_mgr_);
        DungeonMgr::createDungeon((DungeonMgr *const)(v1 + 96), v9, (PlayerPtr *)CurStageNextDungeonId);
        std::shared_ptr<Player>::~shared_ptr(&v32);
        if ( std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v1 + 96))
          || (v11 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96)),
              v12 = DungeonScene::getDungeonId(v11),
              v12 != RogueDiaryRuntimeMgr::getCurStageNextDungeonId(&this->runtime_mgr_)) )
        {
          common::milog::MiLogStream::create(
            &v33,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/rogue_diary_activity.cpp",
            "tryEnterNextRogueDiaryDungeon",
            683);
          v14 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                  &v33,
                  (const char (*)[43])"[RogueDiary] player createDungeon failed, ");
          v15 = this;
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8(this);
          vptr_DescribalBase = this->_vptr_DescribalBase;
          if ( *(_BYTE *)(((unsigned __int64)this->_vptr_DescribalBase >> 3) + 0x7FFF8000) )
            vptr_DescribalBase = (int (**)(...))__asan_report_load8(this->_vptr_DescribalBase);
          (*vptr_DescribalBase)(&val, v15);
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v14, &val);
          std::string::~string(&val);
          common::milog::MiLogStream::~MiLogStream(&v33);
          v5 = -1;
        }
        else
        {
          v17 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
          dungeon_scene_team = DungeonScene::getDungeonSceneTeam(v17);
          v18 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
          SceneId = Scene::getSceneId((const Scene *const)v18);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          DungeonSceneTeam::initSceneTeam(dungeon_scene_team, this->player_, SceneId);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          DungeonComp = Player::getDungeonComp(this->player_);
          v21 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
          DungeonId = DungeonScene::getDungeonId(v21);
          PlayerDungeonComp::tryResetLevelTagBeforeEnterDungeon(DungeonComp, DungeonId);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          v23 = Player::getDungeonComp(this->player_);
          v24 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
          v25 = Scene::getSceneId((const Scene *const)v24);
          std::shared_ptr<DungeonScene>::shared_ptr(
            (std::shared_ptr<DungeonScene> *const)&v32,
            (const std::shared_ptr<DungeonScene> *)(v1 + 96));
          ret = PlayerDungeonComp::enterDungeon(v23, (DungeonScenePtr *)&v32, v25, 0);
          std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)&v32);
          if ( ret )
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&val,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/rogue_diary_activity.cpp",
              "tryEnterNextRogueDiaryDungeon",
              692);
            v26 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                    (common::milog::MiLogStream *const)&val,
                    (const char (*)[45])"[RogueDiary] enterDungeon fails, dungeon_id:");
            v29 = RogueDiaryRuntimeMgr::getCurStageNextDungeonId(&this->runtime_mgr_);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &v29);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
            v5 = ret;
          }
          else
          {
            v27 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
            DungeonScene::setDungeonExtraData<RogueDiaryDungeonContext>(
              v27,
              (const RogueDiaryDungeonContext *)(v1 + 32));
            RogueDiaryRuntimeMgr::setIsEnterNextDungeon(&this->runtime_mgr_, 1);
            v5 = 0;
          }
        }
        std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v1 + 96));
      }
      std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v1 + 64));
    }
  }
  result = v5;
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
  return result;
};

// Line 701: range 0000000016C3E798-0000000016C3EDF1
void __fastcall RogueDiaryActivity::tryUpdateRogueDiaryStageRecord(
        RogueDiaryActivity *const this,
        uint32_t stage_id,
        uint32_t difficulty,
        uint32_t round,
        bool is_finished,
        uint32_t time)
{
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  _DWORD *v8; // r13
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,RogueDiaryStageData>,false> *p_y; // rsi
  common::milog::MiLogStream *v10; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,RogueDiaryStageData>,false,false>::pointer v11; // rdx
  bool *p_is_finish; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,RogueDiaryStageData>,false,false>::pointer v13; // rdx
  uint32_t *p_difficulty; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,RogueDiaryStageData>,false,false>::pointer v15; // rdx
  uint32_t *v16; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,RogueDiaryStageData>,false,false>::pointer v17; // rdx
  uint32_t *p_finish_time; // rax
  char v19; // al
  std::__detail::_Node_iterator<std::pair<unsigned int const,RogueDiaryStageData>,false,false>::pointer v20; // rdx
  uint32_t *p_round; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,RogueDiaryStageData>,false,false>::pointer v22; // rdx
  uint32_t *v23; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,RogueDiaryStageData>,false,false>::pointer v24; // rdx
  uint32_t *v25; // rax
  char v26; // al
  std::__detail::_Node_iterator<std::pair<unsigned int const,RogueDiaryStageData>,false,false>::pointer v27; // rdx
  char v28; // cl
  std::__detail::_Node_iterator<std::pair<unsigned int const,RogueDiaryStageData>,false,false>::pointer v29; // rdx
  char v30; // cl
  std::__detail::_Node_iterator<std::pair<unsigned int const,RogueDiaryStageData>,false,false>::pointer v31; // rdx
  char v32; // cl
  std::__detail::_Node_iterator<std::pair<unsigned int const,RogueDiaryStageData>,false,false>::pointer v33; // rdx
  char v34; // cl
  bool is_new_record; // [rsp+26h] [rbp-BAh]
  bool is_record_finish; // [rsp+27h] [rbp-B9h]
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,RogueDiaryStageData>,false> __y; // [rsp+28h] [rbp-B8h] BYREF
  common::milog::MiLogStream v42; // [rsp+30h] [rbp-B0h] BYREF
  char v43[144]; // [rsp+50h] [rbp-90h] BYREF

  v6 = (unsigned __int64)v43;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(96LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "2 48 4 12 stage_id:700 64 8 8 iter:702";
  *(_QWORD *)(v6 + 16) = RogueDiaryActivity::tryUpdateRogueDiaryStageRecord;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234556943;
  v8[536862722] = -202116352;
  *(_DWORD *)(v6 + 48) = stage_id;
  *(std::unordered_map<unsigned int,RogueDiaryStageData>::iterator *)(v6 + 64) = std::unordered_map<unsigned int,RogueDiaryStageData>::find(
                                                                                   &this->stage_map_,
                                                                                   (const std::unordered_map<unsigned int,RogueDiaryStageData>::key_type *)(v6 + 48));
  __y._M_cur = std::unordered_map<unsigned int,RogueDiaryStageData>::end(&this->stage_map_)._M_cur;
  p_y = &__y;
  if ( std::__detail::operator==<std::pair<unsigned int const,RogueDiaryStageData>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,RogueDiaryStageData>,false> *)(v6 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v42,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/rogue_diary_activity.cpp",
      "tryUpdateRogueDiaryStageRecord",
      705);
    v10 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
            &v42,
            (const char (*)[42])"[RogueDiary] stage is not open, stage_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v6 + 48));
    common::milog::MiLogStream::~MiLogStream(&v42);
  }
  else
  {
    v11 = std::__detail::_Node_iterator<std::pair<unsigned int const,RogueDiaryStageData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,RogueDiaryStageData>,false,false> *const)(v6 + 64));
    p_is_finish = &v11->second.is_finish;
    if ( *(_BYTE *)(((unsigned __int64)p_is_finish >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_finish & 7) >= *(_BYTE *)(((unsigned __int64)p_is_finish >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(p_is_finish);
    }
    is_record_finish = v11->second.is_finish;
    is_new_record = 0;
    if ( is_record_finish && is_finished )
    {
      v13 = std::__detail::_Node_iterator<std::pair<unsigned int const,RogueDiaryStageData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,RogueDiaryStageData>,false,false> *const)(v6 + 64));
      p_difficulty = &v13->second.difficulty;
      if ( *(_BYTE *)(((unsigned __int64)p_difficulty >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_difficulty & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_difficulty >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4(p_difficulty);
      }
      if ( difficulty <= v13->second.difficulty )
      {
        v15 = std::__detail::_Node_iterator<std::pair<unsigned int const,RogueDiaryStageData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,RogueDiaryStageData>,false,false> *const)(v6 + 64));
        v16 = &v15->second.difficulty;
        if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v16);
        }
        if ( difficulty != v15->second.difficulty )
          goto LABEL_21;
        v17 = std::__detail::_Node_iterator<std::pair<unsigned int const,RogueDiaryStageData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,RogueDiaryStageData>,false,false> *const)(v6 + 64));
        p_finish_time = &v17->second.finish_time;
        if ( *(_BYTE *)(((unsigned __int64)p_finish_time >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_finish_time & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_finish_time >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4(p_finish_time);
        }
        if ( time < v17->second.finish_time )
          v19 = 1;
        else
LABEL_21:
          v19 = 0;
        if ( v19 )
          is_new_record = 1;
      }
      else
      {
        is_new_record = 1;
      }
    }
    else if ( !is_record_finish && is_finished )
    {
      is_new_record = 1;
    }
    else if ( !is_record_finish && !is_finished )
    {
      v20 = std::__detail::_Node_iterator<std::pair<unsigned int const,RogueDiaryStageData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,RogueDiaryStageData>,false,false> *const)(v6 + 64));
      p_round = &v20->second.round;
      if ( *(_BYTE *)(((unsigned __int64)p_round >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_round & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_round >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_round);
      }
      if ( round <= v20->second.round )
      {
        v22 = std::__detail::_Node_iterator<std::pair<unsigned int const,RogueDiaryStageData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,RogueDiaryStageData>,false,false> *const)(v6 + 64));
        v23 = &v22->second.round;
        if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v23 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v23);
        }
        if ( round != v22->second.round )
          goto LABEL_40;
        v24 = std::__detail::_Node_iterator<std::pair<unsigned int const,RogueDiaryStageData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,RogueDiaryStageData>,false,false> *const)(v6 + 64));
        v25 = &v24->second.difficulty;
        if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v25 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v25);
        }
        if ( difficulty > v24->second.difficulty )
          v26 = 1;
        else
LABEL_40:
          v26 = 0;
        if ( v26 )
          is_new_record = 1;
      }
      else
      {
        is_new_record = 1;
      }
    }
    if ( is_new_record )
    {
      v27 = std::__detail::_Node_iterator<std::pair<unsigned int const,RogueDiaryStageData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,RogueDiaryStageData>,false,false> *const)(v6 + 64));
      v28 = *(_BYTE *)(((unsigned __int64)&v27->second.difficulty >> 3) + 0x7FFF8000);
      if ( v28 != 0 && (char)((((_BYTE)v27 + 8) & 7) + 3) >= v28 )
      {
        LOBYTE(p_y) = v28 != 0;
        __asan_report_store4(&v27->second.difficulty, p_y, v27);
      }
      v27->second.difficulty = difficulty;
      v29 = std::__detail::_Node_iterator<std::pair<unsigned int const,RogueDiaryStageData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,RogueDiaryStageData>,false,false> *const)(v6 + 64));
      v30 = *(_BYTE *)(((unsigned __int64)&v29->second.finish_time >> 3) + 0x7FFF8000);
      if ( v30 != 0 && (char)((((_BYTE)v29 + 20) & 7) + 3) >= v30 )
      {
        LOBYTE(p_y) = v30 != 0;
        __asan_report_store4(&v29->second.finish_time, p_y, v29);
      }
      v29->second.finish_time = time;
      v31 = std::__detail::_Node_iterator<std::pair<unsigned int const,RogueDiaryStageData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,RogueDiaryStageData>,false,false> *const)(v6 + 64));
      v32 = *(_BYTE *)(((unsigned __int64)&v31->second.round >> 3) + 0x7FFF8000);
      if ( v32 != 0 && (char)((((_BYTE)v31 + 12) & 7) + 3) >= v32 )
      {
        LOBYTE(p_y) = v32 != 0;
        __asan_report_store4(&v31->second.round, p_y, v31);
      }
      v31->second.round = round;
      v33 = std::__detail::_Node_iterator<std::pair<unsigned int const,RogueDiaryStageData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,RogueDiaryStageData>,false,false> *const)(v6 + 64));
      v34 = *(_BYTE *)(((unsigned __int64)&v33->second.is_finish >> 3) + 0x7FFF8000);
      if ( v34 != 0 && (((unsigned __int8)v33 + 16) & 7) >= v34 )
      {
        LOBYTE(p_y) = v34 != 0;
        __asan_report_store1(&v33->second.is_finish, p_y, v33);
      }
      v33->second.is_finish = is_finished;
      BaseActivity::notifyClientData(this, 0);
    }
  }
  if ( v43 == (char *)v6 )
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

// Line 751: range 0000000016C3EDF2-0000000016C3F143
__int64 __fastcall RogueDiaryActivity::checkAddActivityCoin(
        const RogueDiaryActivity *const this,
        proto::VirtualItem coin_type,
        uint32_t add_num)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v14; // [rsp+10h] [rbp-A0h] BYREF
  char v15[128]; // [rsp+30h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 13 coin_type:750 64 4 11 add_num:750";
  *(_QWORD *)(v3 + 16) = RogueDiaryActivity::checkAddActivityCoin;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 48) = coin_type;
  *(_DWORD *)(v3 + 64) = add_num;
  if ( *(_DWORD *)(v3 + 48) == 140 )
  {
    if ( *(_DWORD *)(v3 + 64) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->coin_);
      }
      if ( this->coin_ && *(_DWORD *)(v3 + 64) + this->coin_ < *(_DWORD *)(v3 + 64) )
        goto LABEL_16;
    }
    if ( *(_DWORD *)(v3 + 64) )
      goto LABEL_17;
    if ( *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->coin_);
    }
    if ( this->coin_ || *(_DWORD *)(v3 + 64) + this->coin_ <= *(_DWORD *)(v3 + 64) )
    {
LABEL_17:
      result = 0LL;
    }
    else
    {
LABEL_16:
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/rogue_diary_activity.cpp",
        "checkAddActivityCoin",
        759);
      v8 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
             &v14,
             (const char (*)[40])"[RogueDiary] coin over flow, coin_type:");
      v9 = common::milog::MiLogStream::operator<<<proto::VirtualItem,(proto::VirtualItem*)0>(
             v8,
             (const proto::VirtualItem *)(v3 + 48));
      v10 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v9, (const char (*)[12])", cur num: ");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->coin_);
      v12 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v11, (const char (*)[12])" ,add num: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 64));
      common::milog::MiLogStream::~MiLogStream(&v14);
      result = 10354LL;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/rogue_diary_activity.cpp",
      "checkAddActivityCoin",
      754);
    v6 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
           &v14,
           (const char (*)[41])"[RogueDiary] coin type error, coin_type:");
    common::milog::MiLogStream::operator<<<proto::VirtualItem,(proto::VirtualItem*)0>(
      v6,
      (const proto::VirtualItem *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v14);
    result = 0xFFFFFFFFLL;
  }
  if ( v15 == (char *)v3 )
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

// Line 766: range 0000000016C3F144-0000000016C3F40D
__int64 __fastcall RogueDiaryActivity::checkSubActivityCoin(
        const RogueDiaryActivity *const this,
        proto::VirtualItem coin_type,
        uint32_t sub_num)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v14; // [rsp+10h] [rbp-A0h] BYREF
  char v15[128]; // [rsp+30h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 13 coin_type:765 64 4 11 sub_num:765";
  *(_QWORD *)(v3 + 16) = RogueDiaryActivity::checkSubActivityCoin;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 48) = coin_type;
  *(_DWORD *)(v3 + 64) = sub_num;
  if ( *(_DWORD *)(v3 + 48) == 140 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->coin_);
    }
    if ( this->coin_ >= *(_DWORD *)(v3 + 64) )
    {
      result = 0LL;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/rogue_diary_activity.cpp",
        "checkSubActivityCoin",
        774);
      v8 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
             &v14,
             (const char (*)[41])"[RogueDiary] coin not enough, coin_type:");
      v9 = common::milog::MiLogStream::operator<<<proto::VirtualItem,(proto::VirtualItem*)0>(
             v8,
             (const proto::VirtualItem *)(v3 + 48));
      v10 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v9, (const char (*)[12])", cur num: ");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->coin_);
      v12 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v11, (const char (*)[10])off_25F0E240);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 64));
      common::milog::MiLogStream::~MiLogStream(&v14);
      result = 10355LL;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/rogue_diary_activity.cpp",
      "checkSubActivityCoin",
      769);
    v6 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
           &v14,
           (const char (*)[41])"[RogueDiary] coin type error, coin_type:");
    common::milog::MiLogStream::operator<<<proto::VirtualItem,(proto::VirtualItem*)0>(
      v6,
      (const proto::VirtualItem *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v14);
    result = 0xFFFFFFFFLL;
  }
  if ( v15 == (char *)v3 )
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

// Line 781: range 0000000016C3F40E-0000000016C3F7D7
int32_t __cdecl RogueDiaryActivity::addActivityCoin(
        RogueDiaryActivity *const this,
        proto::VirtualItem coin_type,
        uint32_t add_num,
        const ActionReason *reason)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  int32_t v7; // r14d
  PlayerBasicComp *BasicComp; // rax
  __int64 v9; // rsi
  __int64 v10; // rdx
  char v11; // al
  PlayerItemComp *ItemComp; // rdi
  data::ItemLimitType vptr_PlayerCompBase_high; // ecx
  uint32_t vptr_PlayerCompBase; // r8d
  int32_t result; // eax
  std::string v16; // [rsp+0h] [rbp-C0h]
  PlayerItemComp *reasona; // [rsp+8h] [rbp-B8h]
  unsigned int add_numa; // [rsp+10h] [rbp-B0h]
  proto::VirtualItem coin_typea; // [rsp+14h] [rbp-ACh]
  RogueDiaryActivity *thisa; // [rsp+18h] [rbp-A8h]
  int32_t ret; // [rsp+28h] [rbp-98h]
  unsigned int old_coin_num; // [rsp+2Ch] [rbp-94h]
  std::string v23; // [rsp+30h] [rbp-90h] BYREF
  char v24[112]; // [rsp+50h] [rbp-70h] BYREF

  *(&v16._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  HIDWORD(v16._anon_0._M_allocated_capacity) = coin_type;
  *(_DWORD *)v16._anon_0._M_local_buf = add_num;
  v16._M_string_length = (std::string::size_type)reason;
  v4 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 1 22 log_context_holder:788";
  *(_QWORD *)(v4 + 16) = RogueDiaryActivity::addActivityCoin;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116351;
  ret = RogueDiaryActivity::checkAddActivityCoin(this, coin_type, v16._anon_0._M_allocated_capacity);
  if ( ret )
  {
    v7 = ret;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    BasicComp = Player::getBasicComp(this->player_);
    PlayerBasicComp::getNextTransNo[abi:cxx11](&v23, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 32), 0x67u, v16);
    std::string::~string(&v23);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->coin_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&thisa->coin_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&thisa->coin_);
    }
    old_coin_num = thisa->coin_;
    v9 = add_numa;
    v10 = SAFE_ADD<unsigned int,unsigned int>(old_coin_num, add_numa);
    v11 = *(_BYTE *)(((unsigned __int64)&thisa->coin_ >> 3) + 0x7FFF8000);
    if ( v11 != 0 && v11 <= 3 )
    {
      LOBYTE(v9) = v11 != 0;
      __asan_report_store4(&thisa->coin_, v9, v10);
    }
    thisa->coin_ = v10;
    BaseActivity::notifyActivityCoinInfo(thisa);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&thisa->player_);
    ItemComp = Player::getItemComp(thisa->player_);
    if ( *(_BYTE *)((((unsigned __int64)&reasona->_vptr_PlayerCompBase + 4) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)reasona + 4) & 7) + 3) >= *(_BYTE *)((((unsigned __int64)&reasona->_vptr_PlayerCompBase + 4) >> 3)
                                                            + 0x7FFF8000) )
    {
      ItemComp = (PlayerItemComp *)((char *)&reasona->_vptr_PlayerCompBase + 4);
      __asan_report_load4((char *)&reasona->_vptr_PlayerCompBase + 4);
    }
    vptr_PlayerCompBase_high = HIDWORD(reasona->_vptr_PlayerCompBase);
    if ( *(_BYTE *)(((unsigned __int64)reasona >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)reasona & 7) + 3) >= *(_BYTE *)(((unsigned __int64)reasona >> 3) + 0x7FFF8000) )
    {
      ItemComp = reasona;
      __asan_report_load4(reasona);
    }
    vptr_PlayerCompBase = (uint32_t)reasona->_vptr_PlayerCompBase;
    if ( *(_BYTE *)(((unsigned __int64)&thisa->coin_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&thisa->coin_ >> 3) + 0x7FFF8000) <= 3 )
    {
      ItemComp = (PlayerItemComp *)&thisa->coin_;
      __asan_report_load4(&thisa->coin_);
    }
    PlayerItemComp::logPlayerAddCoin(
      ItemComp,
      coin_typea,
      old_coin_num,
      thisa->coin_,
      vptr_PlayerCompBase,
      vptr_PlayerCompBase_high,
      0);
    v7 = 0;
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 32));
  }
  result = v7;
  if ( v24 == (char *)v4 )
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

// Line 798: range 0000000016C3F7D8-0000000016C3FB15
int32_t __cdecl RogueDiaryActivity::subActivityCoin(
        RogueDiaryActivity *const this,
        proto::VirtualItem coin_type,
        uint32_t sub_num,
        const SubItemReason *reason)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  int32_t v7; // r14d
  PlayerBasicComp *BasicComp; // rax
  PlayerItemComp *ItemComp; // rdi
  uint32_t vptr_PlayerCompBase; // esi
  int32_t result; // eax
  std::string v12; // [rsp+0h] [rbp-C0h]
  PlayerItemComp *reasona; // [rsp+8h] [rbp-B8h]
  uint32_t sub_numa; // [rsp+10h] [rbp-B0h]
  proto::VirtualItem coin_typea; // [rsp+14h] [rbp-ACh]
  RogueDiaryActivity *thisa; // [rsp+18h] [rbp-A8h]
  int32_t ret; // [rsp+28h] [rbp-98h]
  uint32_t old_coin_num; // [rsp+2Ch] [rbp-94h]
  std::string v19; // [rsp+30h] [rbp-90h] BYREF
  char v20[112]; // [rsp+50h] [rbp-70h] BYREF

  *(&v12._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  HIDWORD(v12._anon_0._M_allocated_capacity) = coin_type;
  *(_DWORD *)v12._anon_0._M_local_buf = sub_num;
  v12._M_string_length = (std::string::size_type)reason;
  v4 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 1 22 log_context_holder:805";
  *(_QWORD *)(v4 + 16) = RogueDiaryActivity::subActivityCoin;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116351;
  ret = RogueDiaryActivity::checkSubActivityCoin(this, coin_type, v12._anon_0._M_allocated_capacity);
  if ( ret )
  {
    v7 = ret;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    BasicComp = Player::getBasicComp(this->player_);
    PlayerBasicComp::getNextTransNo[abi:cxx11](&v19, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 32), 0x67u, v12);
    std::string::~string(&v19);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->coin_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&thisa->coin_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&thisa->coin_);
    }
    old_coin_num = thisa->coin_;
    thisa->coin_ = old_coin_num - sub_numa;
    BaseActivity::notifyActivityCoinInfo(thisa);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&thisa->player_);
    ItemComp = Player::getItemComp(thisa->player_);
    if ( *(_BYTE *)(((unsigned __int64)reasona >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)reasona & 7) + 3) >= *(_BYTE *)(((unsigned __int64)reasona >> 3) + 0x7FFF8000) )
    {
      ItemComp = reasona;
      __asan_report_load4(reasona);
    }
    vptr_PlayerCompBase = (uint32_t)reasona->_vptr_PlayerCompBase;
    if ( *(_BYTE *)(((unsigned __int64)&thisa->coin_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&thisa->coin_ >> 3) + 0x7FFF8000) <= 3 )
    {
      ItemComp = (PlayerItemComp *)&thisa->coin_;
      __asan_report_load4(&thisa->coin_);
    }
    PlayerItemComp::logPlayerAddCoin(
      ItemComp,
      coin_typea,
      old_coin_num,
      thisa->coin_,
      vptr_PlayerCompBase,
      ITEM_LIMIT_NONE,
      0);
    v7 = 0;
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 32));
  }
  result = v7;
  if ( v20 == (char *)v4 )
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

// Line 815: range 0000000016C3FB16-0000000016C3FBC3
void __cdecl RogueDiaryActivity::fillActivityCoinInfo(
        RogueDiaryActivity *const this,
        google::protobuf::Map<unsigned int,unsigned int> *activity_coin_map)
{
  uint32_t coin; // ebx
  google::protobuf::Map<unsigned int,unsigned int>::key_type *v3; // rsi
  unsigned int *v4; // rax
  uint32_t *v5; // rdx
  char v6; // cl
  google::protobuf::Map<unsigned int,unsigned int>::key_type key[5]; // [rsp+1Ch] [rbp-14h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->coin_);
  }
  coin = this->coin_;
  key[0] = 140;
  v3 = key;
  v4 = google::protobuf::Map<unsigned int,unsigned int>::operator[](activity_coin_map, key);
  v5 = v4;
  v6 = *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)(((unsigned __int8)v4 & 7) + 3) >= v6 )
  {
    LOBYTE(v3) = v6 != 0;
    __asan_report_store4(v4, v3, v4);
  }
  *v5 = coin;
};

// Line 820: range 0000000016C3FBC4-0000000016C3FD5C
__int64 __fastcall RogueDiaryActivity::getActivityCoin(
        const RogueDiaryActivity *const this,
        proto::VirtualItem coin_type)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  __int64 result; // rax
  common::milog::MiLogStream v7; // [rsp+10h] [rbp-80h] BYREF
  char v8[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 coin_type:819";
  *(_QWORD *)(v2 + 16) = RogueDiaryActivity::getActivityCoin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = coin_type;
  if ( *(_DWORD *)(v2 + 32) == 140 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->coin_);
    }
    result = this->coin_;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/rogue_diary_activity.cpp",
      "getActivityCoin",
      823);
    v5 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
           &v7,
           (const char (*)[52])"[RogueDiary] getActivityCoin type error, coin_type:");
    common::milog::MiLogStream::operator<<<proto::VirtualItem,(proto::VirtualItem*)0>(
      v5,
      (const proto::VirtualItem *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v7);
    result = 0LL;
  }
  if ( v8 == (char *)v2 )
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

// Line 830: range 0000000016C3FD5E-0000000016C3FDC9
uint32_t __cdecl RogueDiaryActivity::genNextTransaction(RogueDiaryActivity *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->transaction_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->transaction_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->transaction_);
  }
  return ++this->transaction_;
};

// Line 836: range 0000000016C3FDCA-0000000016C3FE31
// local variable allocation has failed, the output may be wrong!
void __cdecl RogueDiaryActivity::setContentCloseByGm(RogueDiaryActivity *const this, bool is_closed)
{
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_content_closed_, is_closed, &this->is_content_closed_);
  this->is_content_closed_ = is_closed;
  BaseActivity::notifyClientData(this, 0);
};
