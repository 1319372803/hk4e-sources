// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/brick_breaker_activity.cpp

// Line 32: range 0000000014EF3008-0000000014EF31AA
void __cdecl BrickBreakerActivity::onClear(BrickBreakerActivity *const this)
{
  std::map<unsigned int,std::tuple<bool,bool,bool,bool>>::clear(&this->unlock_stage_map_);
  std::map<unsigned int,BrickBreakerLevelData>::clear(&this->world_level_map_);
  std::map<unsigned int,BrickBreakerLevelData>::clear(&this->dungeon_level_map_);
  std::map<unsigned int,unsigned int>::clear(&this->skill_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->play_index_);
  }
  this->play_index_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_level_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_level_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cur_level_id_);
  }
  this->cur_level_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_play_mode_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_play_mode_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_play_mode_);
  }
  this->cur_play_mode_ = NONE_3;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_ignore_check_by_gm_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 116) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_ignore_check_by_gm_ >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_ignore_check_by_gm_);
  }
  this->is_ignore_check_by_gm_ = 0;
  BrickBreakerTransferContext::clear(&this->transfer_context_);
  Vector3::reset(&this->start_pos_);
  Vector3::reset(&this->start_rot_);
};

// Line 47: range 0000000014EF31AC-0000000014EF3281
void __cdecl BrickBreakerTransferContext::clear(BrickBreakerTransferContext *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->level_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_restart >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_restart >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_restart);
  }
  this->is_restart = 0;
  std::vector<unsigned int>::clear(&this->enter_scene_avatar_id_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->enter_reason >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->enter_reason >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->enter_reason);
  }
  this->enter_reason = ENTER_REASON_NONE;
};

// Line 55: range 0000000014EF3282-0000000014EF3B40
int32_t __cdecl BrickBreakerActivity::fromScheduleBin(
        BrickBreakerActivity *const this,
        const proto::ActivityScheduleBin *bin)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  bool *v5; // r9
  unsigned int *v6; // rcx
  std::tuple<bool,bool,bool,bool> *v7; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,std::tuple<bool,bool,bool,bool> > >,bool> v8; // rax
  common::milog::MiLogStream *v9; // r14
  const google::protobuf::RepeatedField<unsigned int> *v10; // rax
  const google::protobuf::RepeatedField<unsigned int> *v11; // rax
  BrickBreakerLevelData *v12; // r15
  unsigned int *v13; // rcx
  BrickBreakerLevelData *v14; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,BrickBreakerLevelData> >,bool> v15; // rax
  common::milog::MiLogStream *v16; // r14
  const google::protobuf::RepeatedField<unsigned int> *v17; // rax
  const google::protobuf::RepeatedField<unsigned int> *v18; // rax
  BrickBreakerLevelData *v19; // r15
  unsigned int *v20; // rcx
  BrickBreakerLevelData *v21; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,BrickBreakerLevelData> >,bool> v22; // rax
  common::milog::MiLogStream *v23; // r14
  unsigned int *v24; // rcx
  unsigned int *v25; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >,bool> v26; // rax
  common::milog::MiLogStream *v27; // rbx
  int32_t result; // eax
  bool *v29; // [rsp+0h] [rbp-160h]
  bool *v30; // [rsp+8h] [rbp-158h]
  bool is_world_level_unlock; // [rsp+2Ch] [rbp-134h] BYREF
  bool is_dungeon_level_unlock; // [rsp+2Dh] [rbp-133h] BYREF
  bool is_world_level_finish; // [rsp+2Eh] [rbp-132h] BYREF
  bool __args_0; // [rsp+2Fh] [rbp-131h] BYREF
  unsigned int v35; // [rsp+30h] [rbp-130h] BYREF
  std::tuple<bool,bool,bool,bool> v36; // [rsp+34h] [rbp-12Ch] BYREF
  google::protobuf::RepeatedPtrField<proto::BrickBreakerStageBin>::const_iterator __for_begin; // [rsp+38h] [rbp-128h] BYREF
  google::protobuf::RepeatedPtrField<proto::BrickBreakerStageBin>::const_iterator __for_end; // [rsp+40h] [rbp-120h] BYREF
  const proto::BrickBreakerScheduleBin *schedule_bin; // [rsp+48h] [rbp-118h]
  const google::protobuf::RepeatedPtrField<proto::BrickBreakerStageBin> *__for_range; // [rsp+50h] [rbp-110h]
  const google::protobuf::RepeatedPtrField<proto::BrickBreakerLevelBin> *__for_range_0; // [rsp+58h] [rbp-108h]
  const google::protobuf::RepeatedPtrField<proto::BrickBreakerLevelBin> *__for_range_1; // [rsp+60h] [rbp-100h]
  const google::protobuf::RepeatedPtrField<proto::Uint32PairBin> *__for_range_2; // [rsp+68h] [rbp-F8h]
  const proto::Uint32PairBin *pair_bin; // [rsp+70h] [rbp-F0h]
  const proto::BrickBreakerLevelBin *dungeon_level_bin; // [rsp+78h] [rbp-E8h]
  const proto::BrickBreakerLevelBin *world_level_bin; // [rsp+80h] [rbp-E0h]
  const proto::BrickBreakerStageBin *stage_bin; // [rsp+88h] [rbp-D8h]
  common::milog::MiLogStream v48; // [rsp+90h] [rbp-D0h] BYREF
  char v49[176]; // [rsp+B0h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v49;
  v30 = (bool *)v49;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 56 13 level_data:80";
  *(_QWORD *)(v2 + 16) = BrickBreakerActivity::fromScheduleBin;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  schedule_bin = proto::ActivityScheduleBin::brick_breaker_bin(bin);
  __for_range = proto::BrickBreakerScheduleBin::stage_bin_list(schedule_bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::BrickBreakerStageBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::BrickBreakerStageBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::BrickBreakerStageBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    stage_bin = google::protobuf::internal::RepeatedPtrIterator<proto::BrickBreakerStageBin const>::operator*(&__for_begin);
    __args_0 = proto::BrickBreakerStageBin::is_dungeon_level_finish(stage_bin);
    is_world_level_finish = proto::BrickBreakerStageBin::is_world_level_finish(stage_bin);
    is_dungeon_level_unlock = proto::BrickBreakerStageBin::is_dungeon_level_unlock(stage_bin);
    is_world_level_unlock = proto::BrickBreakerStageBin::is_world_level_unlock(stage_bin);
    std::make_tuple<bool,bool,bool,bool>(
      &v36.std::_Tuple_impl<0,bool,bool,bool,bool>::std::_Tuple_impl<1,bool,bool,bool>::std::_Tuple_impl<2,bool,bool>::std::_Tuple_impl<3,bool>::std::_Head_base<3,bool,false>::_M_head_impl,
      &is_world_level_unlock,
      &is_dungeon_level_unlock,
      &is_world_level_finish,
      &__args_0,
      v5,
      v29,
      v30);
    v35 = proto::BrickBreakerStageBin::stage_id(stage_bin);
    v8 = std::map<unsigned int,std::tuple<bool,bool,bool,bool>>::emplace<unsigned int,std::tuple<bool,bool,bool,bool>>(
           &this->unlock_stage_map_,
           &v35,
           &v36,
           v6,
           v7);
    if ( !v8.second )
    {
      common::milog::MiLogStream::create(
        &v48,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/brick_breaker_activity.cpp",
        "fromScheduleBin",
        62);
      v9 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
             &v48,
             (const char (*)[35])"[BrickBreaker] duplicate stage_id:");
      v36 = (std::tuple<bool,bool,bool,bool>)proto::BrickBreakerStageBin::stage_id(stage_bin);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)&v36);
      common::milog::MiLogStream::~MiLogStream(&v48);
    }
    google::protobuf::internal::RepeatedPtrIterator<proto::BrickBreakerStageBin const>::operator++(&__for_begin);
  }
  __for_range_0 = proto::BrickBreakerScheduleBin::world_level_bin_list(schedule_bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::BrickBreakerLevelBin>::begin(__for_range_0).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::BrickBreakerLevelBin>::end(__for_range_0).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::BrickBreakerLevelBin const>::operator!=(
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::BrickBreakerLevelBin> *const)&__for_begin,
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::BrickBreakerLevelBin>::iterator *)&__for_end) )
  {
    world_level_bin = google::protobuf::internal::RepeatedPtrIterator<proto::BrickBreakerLevelBin const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::BrickBreakerLevelBin> *const)&__for_begin);
    BrickBreakerLevelData::BrickBreakerLevelData((BrickBreakerLevelData *const)(v2 + 32));
    *(_BYTE *)(v2 + 32) = proto::BrickBreakerLevelBin::is_finish(world_level_bin);
    *(_DWORD *)(v2 + 36) = proto::BrickBreakerLevelBin::max_score(world_level_bin);
    v10 = proto::BrickBreakerLevelBin::chosen_avatar_list(world_level_bin);
    common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(v10, (std::vector<unsigned int> *)(v2 + 40));
    v11 = proto::BrickBreakerLevelBin::chosen_skill_list(world_level_bin);
    common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(v11, (std::vector<unsigned int> *)(v2 + 64));
    v12 = std::move<BrickBreakerLevelData &>((BrickBreakerLevelData *)(v2 + 32));
    v36 = (std::tuple<bool,bool,bool,bool>)proto::BrickBreakerLevelBin::level_id(world_level_bin);
    v15 = std::map<unsigned int,BrickBreakerLevelData>::emplace<unsigned int,BrickBreakerLevelData>(
            &this->world_level_map_,
            (unsigned int *)&v36,
            v12,
            v13,
            v14);
    if ( !v15.second )
    {
      common::milog::MiLogStream::create(
        &v48,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/brick_breaker_activity.cpp",
        "fromScheduleBin",
        74);
      v16 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
              &v48,
              (const char (*)[35])"[BrickBreaker] duplicate level_id:");
      v36 = (std::tuple<bool,bool,bool,bool>)proto::BrickBreakerLevelBin::level_id(world_level_bin);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)&v36);
      common::milog::MiLogStream::~MiLogStream(&v48);
    }
    BrickBreakerLevelData::~BrickBreakerLevelData((BrickBreakerLevelData *const)(v2 + 32));
    google::protobuf::internal::RepeatedPtrIterator<proto::BrickBreakerLevelBin const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::BrickBreakerLevelBin> *const)&__for_begin);
  }
  __for_range_1 = proto::BrickBreakerScheduleBin::dungeon_level_bin_list(schedule_bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::BrickBreakerLevelBin>::begin(__for_range_1).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::BrickBreakerLevelBin>::end(__for_range_1).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::BrickBreakerLevelBin const>::operator!=(
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::BrickBreakerLevelBin> *const)&__for_begin,
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::BrickBreakerLevelBin>::iterator *)&__for_end) )
  {
    dungeon_level_bin = google::protobuf::internal::RepeatedPtrIterator<proto::BrickBreakerLevelBin const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::BrickBreakerLevelBin> *const)&__for_begin);
    BrickBreakerLevelData::BrickBreakerLevelData((BrickBreakerLevelData *const)(v2 + 32));
    *(_BYTE *)(v2 + 32) = proto::BrickBreakerLevelBin::is_finish(dungeon_level_bin);
    *(_DWORD *)(v2 + 36) = proto::BrickBreakerLevelBin::max_score(dungeon_level_bin);
    v17 = proto::BrickBreakerLevelBin::chosen_avatar_list(dungeon_level_bin);
    common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(v17, (std::vector<unsigned int> *)(v2 + 40));
    v18 = proto::BrickBreakerLevelBin::chosen_skill_list(dungeon_level_bin);
    common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(v18, (std::vector<unsigned int> *)(v2 + 64));
    v19 = std::move<BrickBreakerLevelData &>((BrickBreakerLevelData *)(v2 + 32));
    v36 = (std::tuple<bool,bool,bool,bool>)proto::BrickBreakerLevelBin::level_id(dungeon_level_bin);
    v22 = std::map<unsigned int,BrickBreakerLevelData>::emplace<unsigned int,BrickBreakerLevelData>(
            &this->dungeon_level_map_,
            (unsigned int *)&v36,
            v19,
            v20,
            v21);
    if ( !v22.second )
    {
      common::milog::MiLogStream::create(
        &v48,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/brick_breaker_activity.cpp",
        "fromScheduleBin",
        87);
      v23 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
              &v48,
              (const char (*)[35])"[BrickBreaker] duplicate level_id:");
      v36 = (std::tuple<bool,bool,bool,bool>)proto::BrickBreakerLevelBin::level_id(dungeon_level_bin);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, (const unsigned int *)&v36);
      common::milog::MiLogStream::~MiLogStream(&v48);
    }
    BrickBreakerLevelData::~BrickBreakerLevelData((BrickBreakerLevelData *const)(v2 + 32));
    google::protobuf::internal::RepeatedPtrIterator<proto::BrickBreakerLevelBin const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::BrickBreakerLevelBin> *const)&__for_begin);
  }
  __for_range_2 = proto::BrickBreakerScheduleBin::skill_bin_list(schedule_bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::Uint32PairBin>::begin(__for_range_2).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::Uint32PairBin>::end(__for_range_2).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::Uint32PairBin const>::operator!=(
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::Uint32PairBin> *const)&__for_begin,
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::Uint32PairBin>::iterator *)&__for_end) )
  {
    pair_bin = google::protobuf::internal::RepeatedPtrIterator<proto::Uint32PairBin const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::Uint32PairBin> *const)&__for_begin);
    v36 = (std::tuple<bool,bool,bool,bool>)proto::Uint32PairBin::value(pair_bin);
    v35 = proto::Uint32PairBin::key(pair_bin);
    v26 = std::map<unsigned int,unsigned int>::emplace<unsigned int,unsigned int>(
            &this->skill_map_,
            &v35,
            (unsigned int *)&v36,
            v24,
            v25);
    if ( !v26.second )
    {
      common::milog::MiLogStream::create(
        &v48,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/brick_breaker_activity.cpp",
        "fromScheduleBin",
        94);
      v27 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
              &v48,
              (const char (*)[35])"[BrickBreaker] duplicate skill_id:");
      v36 = (std::tuple<bool,bool,bool,bool>)proto::Uint32PairBin::key(pair_bin);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, (const unsigned int *)&v36);
      common::milog::MiLogStream::~MiLogStream(&v48);
    }
    google::protobuf::internal::RepeatedPtrIterator<proto::Uint32PairBin const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::Uint32PairBin> *const)&__for_begin);
  }
  result = 0;
  if ( v30 == (bool *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
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

// Line 101: range 0000000014EF3B42-0000000014EF42EC
int32_t __cdecl BrickBreakerActivity::toScheduleBin(
        const BrickBreakerActivity *const this,
        proto::ActivityScheduleBin *bin)
{
  std::__tuple_element_t_41 *v2; // rax
  bool *v3; // rdx
  std::__tuple_element_t_40 *v4; // rax
  bool *v5; // rdx
  std::__tuple_element_t_39 *v6; // rax
  bool *v7; // rdx
  std::__tuple_element_t_9 *v8; // rax
  bool *v9; // rdx
  google::protobuf::RepeatedField<unsigned int> *v10; // rax
  google::protobuf::RepeatedField<unsigned int> *v11; // rax
  google::protobuf::RepeatedField<unsigned int> *v12; // rax
  google::protobuf::RepeatedField<unsigned int> *v13; // rax
  std::map<unsigned int,std::tuple<bool,bool,bool,bool>>::const_iterator __for_begin; // [rsp+18h] [rbp-B8h] BYREF
  std::map<unsigned int,std::tuple<bool,bool,bool,bool>>::const_iterator __for_end; // [rsp+20h] [rbp-B0h] BYREF
  proto::BrickBreakerScheduleBin *schedule_bin; // [rsp+28h] [rbp-A8h]
  const std::map<unsigned int,std::tuple<bool,bool,bool,bool>> *__for_range; // [rsp+30h] [rbp-A0h]
  const std::map<unsigned int,BrickBreakerLevelData> *__for_range_0; // [rsp+38h] [rbp-98h]
  const std::map<unsigned int,BrickBreakerLevelData> *__for_range_1; // [rsp+40h] [rbp-90h]
  const std::map<unsigned int,unsigned int> *__for_range_2; // [rsp+48h] [rbp-88h]
  const std::pair<unsigned int const,unsigned int> *v22; // [rsp+50h] [rbp-80h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *skill_id; // [rsp+58h] [rbp-78h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *level; // [rsp+60h] [rbp-70h]
  proto::Uint32PairBin *pair_bin; // [rsp+68h] [rbp-68h]
  const std::pair<unsigned int const,BrickBreakerLevelData> *v26; // [rsp+70h] [rbp-60h]
  std::tuple_element<0,const std::pair<unsigned int const,BrickBreakerLevelData> >::type *id_0; // [rsp+78h] [rbp-58h]
  std::tuple_element<1,const std::pair<unsigned int const,BrickBreakerLevelData> >::type *level_data_0; // [rsp+80h] [rbp-50h]
  proto::BrickBreakerLevelBin *level_bin_0; // [rsp+88h] [rbp-48h]
  const std::pair<unsigned int const,BrickBreakerLevelData> *v30; // [rsp+90h] [rbp-40h]
  std::tuple_element<0,const std::pair<unsigned int const,BrickBreakerLevelData> >::type *id; // [rsp+98h] [rbp-38h]
  std::tuple_element<1,const std::pair<unsigned int const,BrickBreakerLevelData> >::type *level_data; // [rsp+A0h] [rbp-30h]
  proto::BrickBreakerLevelBin *level_bin; // [rsp+A8h] [rbp-28h]
  const std::pair<unsigned int const,std::tuple<bool,bool,bool,bool> > *v34; // [rsp+B0h] [rbp-20h]
  std::tuple_element<0,const std::pair<unsigned int const,std::tuple<bool,bool,bool,bool> > >::type *stage_id; // [rsp+B8h] [rbp-18h]
  std::tuple_element<1,const std::pair<unsigned int const,std::tuple<bool,bool,bool,bool> > >::type *stage_data; // [rsp+C0h] [rbp-10h]
  proto::BrickBreakerStageBin *stage_bin; // [rsp+C8h] [rbp-8h]

  schedule_bin = proto::ActivityScheduleBin::mutable_brick_breaker_bin(bin);
  __for_range = &this->unlock_stage_map_;
  __for_begin._M_node = std::map<unsigned int,std::tuple<bool,bool,bool,bool>>::begin(&this->unlock_stage_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::tuple<bool,bool,bool,bool>>::end(&this->unlock_stage_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v34 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::tuple<bool,bool,bool,bool>>>::operator*(&__for_begin);
    stage_id = std::get<0ul,unsigned int const,std::tuple<bool,bool,bool,bool>>(v34);
    stage_data = (std::tuple_element<1,const std::pair<unsigned int const,std::tuple<bool,bool,bool,bool> > >::type *)std::get<1ul,unsigned int const,std::tuple<bool,bool,bool,bool>>(v34);
    stage_bin = proto::BrickBreakerScheduleBin::add_stage_bin_list(schedule_bin);
    if ( *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)stage_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::BrickBreakerStageBin::set_stage_id(stage_bin, *stage_id);
    v2 = (std::__tuple_element_t_41 *)std::get<0ul,bool,bool,bool,bool>(stage_data);
    v3 = v2;
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)v2 & 7) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(v2);
    }
    proto::BrickBreakerStageBin::set_is_world_level_unlock(stage_bin, *v3);
    v4 = (std::__tuple_element_t_40 *)std::get<1ul,bool,bool,bool,bool>(stage_data);
    v5 = v4;
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)v4 & 7) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(v4);
    }
    proto::BrickBreakerStageBin::set_is_dungeon_level_unlock(stage_bin, *v5);
    v6 = (std::__tuple_element_t_39 *)std::get<2ul,bool,bool,bool,bool>(stage_data);
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)v6 & 7) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(v6);
    }
    proto::BrickBreakerStageBin::set_is_world_level_finish(stage_bin, *v7);
    v8 = (std::__tuple_element_t_9 *)std::get<3ul,bool,bool,bool,bool>(stage_data);
    v9 = v8;
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)v8 & 7) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(v8);
    }
    proto::BrickBreakerStageBin::set_is_dungeon_level_finish(stage_bin, *v9);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::tuple<bool,bool,bool,bool>>>::operator++(&__for_begin);
  }
  __for_range_0 = &this->world_level_map_;
  __for_begin._M_node = std::map<unsigned int,BrickBreakerLevelData>::begin(&this->world_level_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,BrickBreakerLevelData>::end(__for_range_0)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,BrickBreakerLevelData> >::_Self *)&__for_begin,
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,BrickBreakerLevelData> >::_Self *)&__for_end) )
  {
    v30 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,BrickBreakerLevelData>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,BrickBreakerLevelData> > *const)&__for_begin);
    id = std::get<0ul,unsigned int const,BrickBreakerLevelData>(v30);
    level_data = (std::tuple_element<1,const std::pair<unsigned int const,BrickBreakerLevelData> >::type *)std::get<1ul,unsigned int const,BrickBreakerLevelData>(v30);
    level_bin = proto::BrickBreakerScheduleBin::add_world_level_bin_list(schedule_bin);
    if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::BrickBreakerLevelBin::set_level_id(level_bin, *id);
    if ( *(char *)(((unsigned __int64)level_data >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(level_data);
    proto::BrickBreakerLevelBin::set_is_finish(level_bin, level_data->is_finish);
    if ( *(_BYTE *)(((unsigned __int64)&level_data->max_score >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)level_data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_data->max_score >> 3)
                                                               + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::BrickBreakerLevelBin::set_max_score(level_bin, level_data->max_score);
    v10 = proto::BrickBreakerLevelBin::mutable_chosen_avatar_list(level_bin);
    common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&level_data->chosen_avatar_vec, v10);
    v11 = proto::BrickBreakerLevelBin::mutable_chosen_skill_list(level_bin);
    common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&level_data->chosen_skill_vec, v11);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,BrickBreakerLevelData>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,BrickBreakerLevelData> > *const)&__for_begin);
  }
  __for_range_1 = &this->dungeon_level_map_;
  __for_begin._M_node = std::map<unsigned int,BrickBreakerLevelData>::begin(&this->dungeon_level_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,BrickBreakerLevelData>::end(__for_range_1)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,BrickBreakerLevelData> >::_Self *)&__for_begin,
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,BrickBreakerLevelData> >::_Self *)&__for_end) )
  {
    v26 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,BrickBreakerLevelData>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,BrickBreakerLevelData> > *const)&__for_begin);
    id_0 = std::get<0ul,unsigned int const,BrickBreakerLevelData>(v26);
    level_data_0 = (std::tuple_element<1,const std::pair<unsigned int const,BrickBreakerLevelData> >::type *)std::get<1ul,unsigned int const,BrickBreakerLevelData>(v26);
    level_bin_0 = proto::BrickBreakerScheduleBin::add_dungeon_level_bin_list(schedule_bin);
    if ( *(_BYTE *)(((unsigned __int64)id_0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id_0 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::BrickBreakerLevelBin::set_level_id(level_bin_0, *id_0);
    if ( *(char *)(((unsigned __int64)level_data_0 >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(level_data_0);
    proto::BrickBreakerLevelBin::set_is_finish(level_bin_0, level_data_0->is_finish);
    if ( *(_BYTE *)(((unsigned __int64)&level_data_0->max_score >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)level_data_0 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_data_0->max_score >> 3)
                                                                 + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::BrickBreakerLevelBin::set_max_score(level_bin_0, level_data_0->max_score);
    v12 = proto::BrickBreakerLevelBin::mutable_chosen_avatar_list(level_bin_0);
    common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&level_data_0->chosen_avatar_vec, v12);
    v13 = proto::BrickBreakerLevelBin::mutable_chosen_skill_list(level_bin_0);
    common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&level_data_0->chosen_skill_vec, v13);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,BrickBreakerLevelData>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,BrickBreakerLevelData> > *const)&__for_begin);
  }
  __for_range_2 = &this->skill_map_;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&this->skill_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(__for_range_2)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_begin,
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_end) )
  {
    v22 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin);
    skill_id = std::get<0ul,unsigned int const,unsigned int>(v22);
    level = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v22);
    pair_bin = proto::BrickBreakerScheduleBin::add_skill_bin_list(schedule_bin);
    if ( *(_BYTE *)(((unsigned __int64)skill_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)skill_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)skill_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::Uint32PairBin::set_key(pair_bin, *skill_id);
    if ( *(_BYTE *)(((unsigned __int64)level >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)level >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::Uint32PairBin::set_value(pair_bin, *level);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin);
  }
  return 0;
};

// Line 140: range 0000000014EF42EE-0000000014EF4E3E
int32_t __cdecl BrickBreakerActivity::toClient(BrickBreakerActivity *const this, proto::ActivityInfo *activity_info)
{
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::tuple<bool,bool,bool,bool> > >::_Self *v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // rbx
  int32_t result; // eax
  std::__tuple_element_t_41 *v7; // rax
  bool *v8; // rdx
  std::__tuple_element_t_40 *v9; // rax
  bool *v10; // rdx
  int32_t v11; // eax
  std::_Rb_tree_iterator<std::pair<unsigned int const,BrickBreakerLevelData> >::pointer v12; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,BrickBreakerLevelData> >::pointer v13; // rdx
  google::protobuf::RepeatedField<unsigned int> *v14; // r14
  std::_Rb_tree_iterator<std::pair<unsigned int const,BrickBreakerLevelData> >::pointer v15; // rax
  google::protobuf::RepeatedField<unsigned int> *v16; // r14
  std::_Rb_tree_iterator<std::pair<unsigned int const,BrickBreakerLevelData> >::pointer v17; // rax
  int32_t v18; // eax
  std::_Rb_tree_iterator<std::pair<unsigned int const,BrickBreakerLevelData> >::pointer v19; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,BrickBreakerLevelData> >::pointer v20; // rdx
  google::protobuf::RepeatedField<unsigned int> *v21; // r14
  std::_Rb_tree_iterator<std::pair<unsigned int const,BrickBreakerLevelData> >::pointer v22; // rax
  google::protobuf::RepeatedField<unsigned int> *v23; // r14
  std::_Rb_tree_iterator<std::pair<unsigned int const,BrickBreakerLevelData> >::pointer v24; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type v25; // r14d
  google::protobuf::Map<unsigned int,unsigned int> *v26; // rax
  unsigned int *v27; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v28; // rdx
  unsigned int val; // [rsp+1Ch] [rbp-164h] BYREF
  std::unordered_map<unsigned int,data::BrickBreakerWorldLevelExcelConfig>::const_iterator __for_begin; // [rsp+20h] [rbp-160h] BYREF
  std::unordered_map<unsigned int,data::BrickBreakerWorldLevelExcelConfig>::const_iterator __for_end_0; // [rsp+28h] [rbp-158h] BYREF
  std::map<unsigned int,std::tuple<bool,bool,bool,bool>>::iterator __for_end; // [rsp+30h] [rbp-150h] BYREF
  proto::BrickBreakerDetailInfo *detail_info; // [rsp+38h] [rbp-148h]
  std::map<unsigned int,std::tuple<bool,bool,bool,bool>> *__for_range; // [rsp+40h] [rbp-140h]
  const ActivityBrickBreakerExcelConfigMgr *config_mgr; // [rsp+48h] [rbp-138h]
  const std::unordered_map<unsigned int,data::BrickBreakerWorldLevelExcelConfig> *__for_range_0; // [rsp+50h] [rbp-130h]
  const std::unordered_map<unsigned int,data::BrickBreakerDungeonLevelExcelConfig> *__for_range_1; // [rsp+58h] [rbp-128h]
  std::map<unsigned int,unsigned int> *__for_range_2; // [rsp+60h] [rbp-120h]
  const std::pair<unsigned int const,unsigned int> *v39; // [rsp+68h] [rbp-118h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *skill_id; // [rsp+70h] [rbp-110h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *level; // [rsp+78h] [rbp-108h]
  const std::pair<unsigned int const,data::BrickBreakerDungeonLevelExcelConfig> *v42; // [rsp+80h] [rbp-100h]
  std::tuple_element<0,const std::pair<unsigned int const,data::BrickBreakerDungeonLevelExcelConfig> >::type *level_id_0; // [rsp+88h] [rbp-F8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::BrickBreakerDungeonLevelExcelConfig> >::type *level_config; // [rsp+90h] [rbp-F0h]
  proto::BrickBreakerLevelInfo *level_info_0; // [rsp+98h] [rbp-E8h]
  const std::pair<unsigned int const,data::BrickBreakerWorldLevelExcelConfig> *v46; // [rsp+A0h] [rbp-E0h]
  std::tuple_element<0,const std::pair<unsigned int const,data::BrickBreakerWorldLevelExcelConfig> >::type *level_id; // [rsp+A8h] [rbp-D8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::BrickBreakerWorldLevelExcelConfig> >::type *config; // [rsp+B0h] [rbp-D0h]
  proto::BrickBreakerLevelInfo *level_info; // [rsp+B8h] [rbp-C8h]
  const std::pair<unsigned int const,std::tuple<bool,bool,bool,bool> > *v50; // [rsp+C0h] [rbp-C0h]
  std::tuple_element<0,const std::pair<unsigned int const,std::tuple<bool,bool,bool,bool> > >::type *stage_id; // [rsp+C8h] [rbp-B8h]
  std::tuple_element<1,const std::pair<unsigned int const,std::tuple<bool,bool,bool,bool> > >::type *stage_data; // [rsp+D0h] [rbp-B0h]
  proto::BrickBreakerActivityStageInfo *stage_info; // [rsp+D8h] [rbp-A8h]
  std::shared_ptr<Config> v54; // [rsp+E0h] [rbp-A0h] BYREF
  common::milog::MiLogStream v55; // [rsp+F0h] [rbp-90h] BYREF
  char v56[112]; // [rsp+110h] [rbp-70h] BYREF

  v2 = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::tuple<bool,bool,bool,bool> > >::_Self *)v56;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::tuple<bool,bool,bool,bool> > >::_Self *)v3;
  }
  v2->_M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::tuple<bool,bool,bool,bool> > >::_Base_ptr)1102416563;
  v2[1]._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::tuple<bool,bool,bool,bool> > >::_Base_ptr)"1 32 8 8 iter:160";
  v2[2]._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::tuple<bool,bool,bool,bool> > >::_Base_ptr)BrickBreakerActivity::toClient;
  v4 = (unsigned __int64)v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  if ( BaseActivity::toClient(this, activity_info) )
  {
    common::milog::MiLogStream::create(
      &v55,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/brick_breaker_activity.cpp",
      "toClient",
      143);
    v5 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
           &v55,
           (const char (*)[51])"[BrickBreaker] BaseActivity::toClient fails, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v55);
    result = -1;
  }
  else
  {
    detail_info = proto::ActivityInfo::mutable_brick_breaker_info(activity_info);
    __for_range = &this->unlock_stage_map_;
    v2[4]._M_node = std::map<unsigned int,std::tuple<bool,bool,bool,bool>>::begin(&this->unlock_stage_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,std::tuple<bool,bool,bool,bool>>::end(__for_range)._M_node;
    while ( std::operator!=(v2 + 4, &__for_end) )
    {
      v50 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::tuple<bool,bool,bool,bool>>>::operator*(v2 + 4);
      stage_id = std::get<0ul,unsigned int const,std::tuple<bool,bool,bool,bool>>(v50);
      stage_data = (std::tuple_element<1,const std::pair<unsigned int const,std::tuple<bool,bool,bool,bool> > >::type *)std::get<1ul,unsigned int const,std::tuple<bool,bool,bool,bool>>(v50);
      stage_info = proto::BrickBreakerDetailInfo::add_stage_info_list(detail_info);
      if ( *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)stage_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::BrickBreakerActivityStageInfo::set_stage_id(stage_info, *stage_id);
      v7 = (std::__tuple_element_t_41 *)std::get<0ul,bool,bool,bool,bool>(stage_data);
      v8 = v7;
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)v7 & 7) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(v7);
      }
      proto::BrickBreakerActivityStageInfo::set_is_world_level_unlock(stage_info, *v8);
      v9 = (std::__tuple_element_t_40 *)std::get<1ul,bool,bool,bool,bool>(stage_data);
      v10 = v9;
      if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)v9 & 7) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(v9);
      }
      proto::BrickBreakerActivityStageInfo::set_is_dungeon_level_unlock(stage_info, *v10);
      std::_Rb_tree_iterator<std::pair<unsigned int const,std::tuple<bool,bool,bool,bool>>>::operator++(v2 + 4);
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v54);
    config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v54)->design_config.txt_config_mgr.activity_brick_breaker_config_mgr;
    std::shared_ptr<Config>::~shared_ptr(&v54);
    __for_range_0 = &config_mgr->brick_breaker_world_level_excel_config_map;
    __for_begin._M_cur = std::unordered_map<unsigned int,data::BrickBreakerWorldLevelExcelConfig>::begin(&config_mgr->brick_breaker_world_level_excel_config_map)._M_cur;
    __for_end_0._M_cur = std::unordered_map<unsigned int,data::BrickBreakerWorldLevelExcelConfig>::end(__for_range_0)._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,data::BrickBreakerWorldLevelExcelConfig>,false>(
              &__for_begin,
              &__for_end_0) )
    {
      v46 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BrickBreakerWorldLevelExcelConfig>,false,false>::operator*(&__for_begin);
      level_id = std::get<0ul,unsigned int const,data::BrickBreakerWorldLevelExcelConfig>(v46);
      config = (std::tuple_element<1,const std::pair<unsigned int const,data::BrickBreakerWorldLevelExcelConfig> >::type *)std::get<1ul,unsigned int const,data::BrickBreakerWorldLevelExcelConfig>(v46);
      level_info = proto::BrickBreakerDetailInfo::add_world_level_info_list(detail_info);
      if ( *(_BYTE *)(((unsigned __int64)level_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)level_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)level_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::BrickBreakerLevelInfo::set_level_id(level_info, *level_id);
      if ( *(_BYTE *)(((unsigned __int64)level_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)level_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)level_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v11 = BrickBreakerActivity::checkWorldLevelCanStart(this, *level_id);
      proto::BrickBreakerLevelInfo::set_is_can_start(level_info, v11 == 0);
      v2[4]._M_node = std::map<unsigned int,BrickBreakerLevelData>::find(&this->world_level_map_, level_id)._M_node;
      __for_end._M_node = std::map<unsigned int,BrickBreakerLevelData>::end(&this->world_level_map_)._M_node;
      if ( std::operator!=(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,BrickBreakerLevelData> >::_Self *)&v2[4],
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,BrickBreakerLevelData> >::_Self *)&__for_end) )
      {
        v12 = std::_Rb_tree_iterator<std::pair<unsigned int const,BrickBreakerLevelData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,BrickBreakerLevelData> > *const)&v2[4]);
        if ( *(char *)(((unsigned __int64)&v12->second >> 3) + 0x7FFF8000) < 0 )
          v12 = (std::_Rb_tree_iterator<std::pair<unsigned int const,BrickBreakerLevelData> >::pointer)__asan_report_load1(&v12->second);
        proto::BrickBreakerLevelInfo::set_is_finish(level_info, v12->second.is_finish);
        v13 = std::_Rb_tree_iterator<std::pair<unsigned int const,BrickBreakerLevelData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,BrickBreakerLevelData> > *const)&v2[4]);
        if ( *(_BYTE *)(((unsigned __int64)&v13->second.max_score >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)v13 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->second.max_score >> 3)
                                                             + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto::BrickBreakerLevelInfo::set_max_score(level_info, v13->second.max_score);
        v14 = proto::BrickBreakerLevelInfo::mutable_chosen_avatar_list(level_info);
        v15 = std::_Rb_tree_iterator<std::pair<unsigned int const,BrickBreakerLevelData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,BrickBreakerLevelData> > *const)&v2[4]);
        common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&v15->second.chosen_avatar_vec, v14);
        v16 = proto::BrickBreakerLevelInfo::mutable_chosen_skill_list(level_info);
        v17 = std::_Rb_tree_iterator<std::pair<unsigned int const,BrickBreakerLevelData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,BrickBreakerLevelData> > *const)&v2[4]);
        common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&v17->second.chosen_skill_vec, v16);
      }
      std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BrickBreakerWorldLevelExcelConfig>,false,false>::operator++(&__for_begin);
    }
    __for_range_1 = &config_mgr->brick_breaker_dungeon_level_excel_config_map;
    __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BrickBreakerWorldLevelExcelConfig>,false>::__node_type *)std::unordered_map<unsigned int,data::BrickBreakerDungeonLevelExcelConfig>::begin(&config_mgr->brick_breaker_dungeon_level_excel_config_map)._M_cur;
    __for_end_0._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BrickBreakerWorldLevelExcelConfig>,false>::__node_type *)std::unordered_map<unsigned int,data::BrickBreakerDungeonLevelExcelConfig>::end(__for_range_1)._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,data::BrickBreakerDungeonLevelExcelConfig>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BrickBreakerDungeonLevelExcelConfig>,false> *)&__for_begin,
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BrickBreakerDungeonLevelExcelConfig>,false> *)&__for_end_0) )
    {
      v42 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BrickBreakerDungeonLevelExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BrickBreakerDungeonLevelExcelConfig>,false,false> *const)&__for_begin);
      level_id_0 = std::get<0ul,unsigned int const,data::BrickBreakerDungeonLevelExcelConfig>(v42);
      level_config = (std::tuple_element<1,const std::pair<unsigned int const,data::BrickBreakerDungeonLevelExcelConfig> >::type *)std::get<1ul,unsigned int const,data::BrickBreakerDungeonLevelExcelConfig>(v42);
      level_info_0 = proto::BrickBreakerDetailInfo::add_dungeon_level_info_list(detail_info);
      if ( *(_BYTE *)(((unsigned __int64)level_id_0 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)level_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)level_id_0 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::BrickBreakerLevelInfo::set_level_id(level_info_0, *level_id_0);
      if ( *(_BYTE *)(((unsigned __int64)level_id_0 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)level_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)level_id_0 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v18 = BrickBreakerActivity::checkDungeonLevelCanStart(this, *level_id_0);
      proto::BrickBreakerLevelInfo::set_is_can_start(level_info_0, v18 == 0);
      v2[4]._M_node = std::map<unsigned int,BrickBreakerLevelData>::find(&this->dungeon_level_map_, level_id_0)._M_node;
      __for_end._M_node = std::map<unsigned int,BrickBreakerLevelData>::end(&this->dungeon_level_map_)._M_node;
      if ( std::operator!=(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,BrickBreakerLevelData> >::_Self *)&v2[4],
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,BrickBreakerLevelData> >::_Self *)&__for_end) )
      {
        v19 = std::_Rb_tree_iterator<std::pair<unsigned int const,BrickBreakerLevelData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,BrickBreakerLevelData> > *const)&v2[4]);
        if ( *(char *)(((unsigned __int64)&v19->second >> 3) + 0x7FFF8000) < 0 )
          v19 = (std::_Rb_tree_iterator<std::pair<unsigned int const,BrickBreakerLevelData> >::pointer)__asan_report_load1(&v19->second);
        proto::BrickBreakerLevelInfo::set_is_finish(level_info_0, v19->second.is_finish);
        v20 = std::_Rb_tree_iterator<std::pair<unsigned int const,BrickBreakerLevelData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,BrickBreakerLevelData> > *const)&v2[4]);
        if ( *(_BYTE *)(((unsigned __int64)&v20->second.max_score >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)v20 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v20->second.max_score >> 3)
                                                             + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto::BrickBreakerLevelInfo::set_max_score(level_info_0, v20->second.max_score);
        v21 = proto::BrickBreakerLevelInfo::mutable_chosen_avatar_list(level_info_0);
        v22 = std::_Rb_tree_iterator<std::pair<unsigned int const,BrickBreakerLevelData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,BrickBreakerLevelData> > *const)&v2[4]);
        common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&v22->second.chosen_avatar_vec, v21);
        v23 = proto::BrickBreakerLevelInfo::mutable_chosen_skill_list(level_info_0);
        v24 = std::_Rb_tree_iterator<std::pair<unsigned int const,BrickBreakerLevelData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,BrickBreakerLevelData> > *const)&v2[4]);
        common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&v24->second.chosen_skill_vec, v23);
      }
      std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BrickBreakerDungeonLevelExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BrickBreakerDungeonLevelExcelConfig>,false,false> *const)&__for_begin);
    }
    __for_range_2 = &this->skill_map_;
    v2[4]._M_node = std::map<unsigned int,unsigned int>::begin(&this->skill_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,unsigned int>::end(__for_range_2)._M_node;
    while ( std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&v2[4],
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_end) )
    {
      v39 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)&v2[4]);
      skill_id = std::get<0ul,unsigned int const,unsigned int>(v39);
      level = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v39);
      if ( *(_BYTE *)(((unsigned __int64)level >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)level >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v25 = *level;
      v26 = proto::BrickBreakerDetailInfo::mutable_skill_info_map(detail_info);
      v27 = google::protobuf::Map<unsigned int,unsigned int>::operator[](v26, skill_id);
      v28 = v27;
      if ( *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v27 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v27);
      }
      *v28 = v25;
      std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)&v2[4]);
    }
    result = 0;
  }
  if ( v56 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v2->_M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::tuple<bool,bool,bool,bool> > >::_Base_ptr)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 191: range 0000000014EF4E40-0000000014EF4EA9
int32_t __cdecl BrickBreakerActivity::init(BrickBreakerActivity *const this)
{
  if ( BaseActivity::isOpening(this, 0) && !BaseActivity::isSettled(this) )
  {
    BrickBreakerActivity::registerObserver(this);
    BrickBreakerActivity::unlockDefaultSkill(this);
  }
  return 0;
};

// Line 202: range 0000000014EF4EAA-0000000014EF4ED0
void __cdecl BrickBreakerActivity::onStart(BrickBreakerActivity *const this)
{
  BrickBreakerActivity::registerObserver(this);
  BrickBreakerActivity::unlockDefaultSkill(this);
};

// Line 208: range 0000000014EF4ED2-0000000014EF4EEC
void __cdecl BrickBreakerActivity::onSettle(BrickBreakerActivity *const this)
{
  BrickBreakerActivity::unregisterObserver(this);
};

// Line 213: range 0000000014EF4EEE-0000000014EF5376
void __cdecl BrickBreakerActivity::registerObserver(BrickBreakerActivity *const this)
{
  unsigned __int64 v1; // r14
  __int64 v2; // rax
  _DWORD *v3; // r15
  PlayerEventComp *EventComp; // r12
  PlayerEventComp *v5; // rbx
  PlayerEventComp *v6; // rbx
  PlayerEventComp *v7; // rbx
  std::enable_shared_from_this<BaseActivity> v8; // [rsp+50h] [rbp-A0h] BYREF
  char v9[144]; // [rsp+60h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 12 this_ptr:214 64 16 12 this_wtr:215";
  *(_QWORD *)(v1 + 16) = BrickBreakerActivity::registerObserver;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  std::enable_shared_from_this<BaseActivity>::shared_from_this(&v8);
  std::dynamic_pointer_cast<BrickBreakerActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)(v1 + 32));
  std::shared_ptr<BaseActivity>::~shared_ptr((std::shared_ptr<BaseActivity> *const)&v8);
  std::weak_ptr<BrickBreakerActivity>::weak_ptr<BrickBreakerActivity,void>(
    (std::weak_ptr<BrickBreakerActivity> *const)(v1 + 64),
    (const std::shared_ptr<BrickBreakerActivity> *)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  EventComp = Player::getEventComp(this->player_);
  std::weak_ptr<BrickBreakerActivity>::weak_ptr(
    (std::weak_ptr<BrickBreakerActivity> *const)&v8,
    (const std::weak_ptr<BrickBreakerActivity> *)(v1 + 64));
  PlayerEventComp::tryRegisterObserver<BrickBreakerActivity,PostEnterSceneEvent>(
    EventComp,
    (std::weak_ptr<BrickBreakerActivity> *)&v8,
    (void (*)(BrickBreakerActivity *, const PostEnterSceneEvent *))BrickBreakerActivity::onPostEnterSceneEvent,
    0LL);
  std::weak_ptr<BrickBreakerActivity>::~weak_ptr((std::weak_ptr<BrickBreakerActivity> *const)&v8);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = Player::getEventComp(this->player_);
  std::weak_ptr<BrickBreakerActivity>::weak_ptr(
    (std::weak_ptr<BrickBreakerActivity> *const)&v8,
    (const std::weak_ptr<BrickBreakerActivity> *)(v1 + 64));
  PlayerEventComp::tryRegisterObserver<BrickBreakerActivity,GalleryStartEvent>(
    v5,
    (std::weak_ptr<BrickBreakerActivity> *)&v8,
    (void (*)(BrickBreakerActivity *, const GalleryStartEvent *))BrickBreakerActivity::onGalleryBrickBreakerStartEvent,
    0LL);
  std::weak_ptr<BrickBreakerActivity>::~weak_ptr((std::weak_ptr<BrickBreakerActivity> *const)&v8);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = Player::getEventComp(this->player_);
  std::weak_ptr<BrickBreakerActivity>::weak_ptr(
    (std::weak_ptr<BrickBreakerActivity> *const)&v8,
    (const std::weak_ptr<BrickBreakerActivity> *)(v1 + 64));
  PlayerEventComp::tryRegisterObserver<BrickBreakerActivity,GalleryBrickBreakerSettleEvent>(
    v6,
    (std::weak_ptr<BrickBreakerActivity> *)&v8,
    (void (*)(BrickBreakerActivity *, const GalleryBrickBreakerSettleEvent *))BrickBreakerActivity::onGalleryBrickBreakerSettleEvent,
    0LL);
  std::weak_ptr<BrickBreakerActivity>::~weak_ptr((std::weak_ptr<BrickBreakerActivity> *const)&v8);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v7 = Player::getEventComp(this->player_);
  std::weak_ptr<BrickBreakerActivity>::weak_ptr(
    (std::weak_ptr<BrickBreakerActivity> *const)&v8,
    (const std::weak_ptr<BrickBreakerActivity> *)(v1 + 64));
  PlayerEventComp::tryRegisterObserver<BrickBreakerActivity,LeaveSceneEvent>(
    v7,
    (std::weak_ptr<BrickBreakerActivity> *)&v8,
    (void (*)(BrickBreakerActivity *, const LeaveSceneEvent *))BrickBreakerActivity::onLeaveSceneEvent,
    0LL);
  std::weak_ptr<BrickBreakerActivity>::~weak_ptr((std::weak_ptr<BrickBreakerActivity> *const)&v8);
  std::weak_ptr<BrickBreakerActivity>::~weak_ptr((std::weak_ptr<BrickBreakerActivity> *const)(v1 + 64));
  std::shared_ptr<BrickBreakerActivity>::~shared_ptr((std::shared_ptr<BrickBreakerActivity> *const)(v1 + 32));
  if ( v9 == (char *)v1 )
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

// Line 223: range 0000000014EF5378-0000000014EF547C
void __cdecl BrickBreakerActivity::unregisterObserver(BrickBreakerActivity *const this)
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
        __asan_report_load8();
      EventComp = Player::getEventComp(this->player_);
      PlayerEventComp::unregisterObserver(EventComp, obs_wtr);
    }
    std::_Rb_tree_iterator<std::pair<std::type_index const,std::weak_ptr<Observer>>>::operator++(&__for_begin);
  }
  std::map<std::type_index,std::weak_ptr<Observer>>::clear(&this->event_observer_map_);
};

// Line 235: range 0000000014EF547E-0000000014EF5DCA
int32_t __cdecl BrickBreakerActivity::execAction(
        BrickBreakerActivity *const this,
        const data::NewActivityExec *action_exec)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rbx
  int32_t result; // eax
  const std::string *v7; // rax
  common::milog::MiLogStream *v8; // rbx
  const std::string *v9; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  bool v11; // r14
  bool *v12; // r9
  common::milog::MiLogStream *v13; // rax
  unsigned int *v14; // rcx
  std::tuple<bool,bool,bool,bool> *v15; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,std::tuple<bool,bool,bool,bool> > >,bool> v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::tuple<bool,bool,bool,bool> > >::pointer v20; // rax
  std::__tuple_element_t_41 *v21; // rax
  _BYTE *v22; // rdx
  common::milog::MiLogStream *v23; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::tuple<bool,bool,bool,bool> > >::pointer v24; // rax
  std::__tuple_element_t_40 *v25; // rax
  BrickBreakerActivity *thisa; // [rsp+8h] [rbp-D8h]
  bool v27; // [rsp+10h] [rbp-D0h] BYREF
  bool v28; // [rsp+11h] [rbp-CFh] BYREF
  bool v29; // [rsp+12h] [rbp-CEh] BYREF
  bool __args_0; // [rsp+13h] [rbp-CDh] BYREF
  std::tuple<bool,bool,bool,bool> v31; // [rsp+14h] [rbp-CCh] BYREF
  unsigned __int64 val; // [rsp+18h] [rbp-C8h] BYREF
  std::shared_ptr<Config> v33; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v34; // [rsp+30h] [rbp-B0h] BYREF
  char v35[144]; // [rsp+50h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 stage_id:247 64 8 8 iter:283";
  *(_QWORD *)(v2 + 16) = BrickBreakerActivity::execAction;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( (unsigned int)(action_exec->type - 164) <= 2 )
  {
    if ( !std::vector<std::string>::size(&action_exec->param) )
    {
      common::milog::MiLogStream::create(
        &v34,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/brick_breaker_activity.cpp",
        "execAction",
        244);
      v5 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
             &v34,
             (const char (*)[52])"[BrickBreaker] param size not enough, param.size():");
      val = std::vector<std::string>::size(&action_exec->param);
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v5, &val);
      common::milog::MiLogStream::~MiLogStream(&v34);
      result = -1;
      goto LABEL_37;
    }
    *(_DWORD *)(v2 + 48) = 0;
    v7 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
    if ( common::tools::StringUtils::strToNum<unsigned int>(v7, (unsigned int *)(v2 + 48), 1) )
    {
      common::milog::MiLogStream::create(
        &v34,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/brick_breaker_activity.cpp",
        "execAction",
        250);
      v8 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
             &v34,
             (const char (*)[32])"[BrickBreaker] strToNum failed ");
      v9 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, v9);
      common::milog::MiLogStream::~MiLogStream(&v34);
      result = -1;
      goto LABEL_37;
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v33);
    v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v33);
    v11 = data::ActivityBrickBreakerExcelConfigMgrBase::findBrickBreakerStageExcelConfig(
            &v10->design_config.txt_config_mgr.activity_brick_breaker_config_mgr,
            *(_DWORD *)(v2 + 48)) == 0LL;
    std::shared_ptr<Config>::~shared_ptr(&v33);
    if ( v11 )
    {
      common::milog::MiLogStream::create(
        &v34,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/brick_breaker_activity.cpp",
        "execAction",
        255);
      v13 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
              &v34,
              (const char (*)[66])"[BrickBreaker] findBrickBreakerStageExcelConfig failed, stage_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v34);
      result = -1;
      goto LABEL_37;
    }
    if ( *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( action_exec->type == NEW_ACTIVITY_ACTION_BRICK_OPEN_STAGE )
    {
      __args_0 = 0;
      v29 = 0;
      v28 = 0;
      v27 = 0;
      std::make_tuple<bool,bool,bool,bool>(
        &v31.std::_Tuple_impl<0,bool,bool,bool,bool>::std::_Tuple_impl<1,bool,bool,bool>::std::_Tuple_impl<2,bool,bool>::std::_Tuple_impl<3,bool>::std::_Head_base<3,bool,false>::_M_head_impl,
        &v27,
        &v28,
        &v29,
        &__args_0,
        v12,
        (bool *)action_exec,
        (bool *)this);
      v16 = std::map<unsigned int,std::tuple<bool,bool,bool,bool>>::emplace<unsigned int &,std::tuple<bool,bool,bool,bool>>(
              &this->unlock_stage_map_,
              (unsigned int *)(v2 + 48),
              &v31,
              v14,
              v15);
      if ( v16.second )
      {
        common::milog::MiLogStream::create(
          &v34,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/brick_breaker_activity.cpp",
          "execAction",
          262);
        v17 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                &v34,
                (const char (*)[39])"[BrickBreaker] unlock stage, stage_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v34);
        BaseActivity::notifyClientData(thisa, 0);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v34,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/brick_breaker_activity.cpp",
          "execAction",
          267);
        v18 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                &v34,
                (const char (*)[49])"[BrickBreaker] duplicate unlock stage, stage_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v34);
      }
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( action_exec->type == NEW_ACTIVITY_ACTION_BRICK_OPEN_STAGE_WORLD )
      {
        *(std::map<unsigned int,std::tuple<bool,bool,bool,bool>>::iterator *)(v2 + 64) = std::map<unsigned int,std::tuple<bool,bool,bool,bool>>::find(
                                                                                           &this->unlock_stage_map_,
                                                                                           (const std::map<unsigned int,std::tuple<bool,bool,bool,bool>>::key_type *)(v2 + 48));
        val = (unsigned __int64)std::map<unsigned int,std::tuple<bool,bool,bool,bool>>::end(&this->unlock_stage_map_)._M_node;
        if ( std::operator==(
               (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::tuple<bool,bool,bool,bool> > >::_Self *)(v2 + 64),
               (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::tuple<bool,bool,bool,bool> > >::_Self *)&val) )
        {
          common::milog::MiLogStream::create(
            &v34,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/brick_breaker_activity.cpp",
            "execAction",
            275);
          v19 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                  &v34,
                  (const char (*)[51])"[BrickBreaker] find unlock stage failed, stage_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v2 + 48));
          common::milog::MiLogStream::~MiLogStream(&v34);
          result = -1;
          goto LABEL_37;
        }
        v20 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::tuple<bool,bool,bool,bool>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::tuple<bool,bool,bool,bool> > > *const)(v2 + 64));
        v21 = std::get<0ul,bool,bool,bool,bool>(&v20->second);
        v22 = v21;
        if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
          && ((unsigned __int8)v21 & 7) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(v21);
        }
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        if ( action_exec->type != NEW_ACTIVITY_ACTION_BRICK_OPEN_STAGE_DUNGEON )
          goto LABEL_35;
        *(std::map<unsigned int,std::tuple<bool,bool,bool,bool>>::iterator *)(v2 + 64) = std::map<unsigned int,std::tuple<bool,bool,bool,bool>>::find(
                                                                                           &this->unlock_stage_map_,
                                                                                           (const std::map<unsigned int,std::tuple<bool,bool,bool,bool>>::key_type *)(v2 + 48));
        val = (unsigned __int64)std::map<unsigned int,std::tuple<bool,bool,bool,bool>>::end(&this->unlock_stage_map_)._M_node;
        if ( std::operator==(
               (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::tuple<bool,bool,bool,bool> > >::_Self *)(v2 + 64),
               (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::tuple<bool,bool,bool,bool> > >::_Self *)&val) )
        {
          common::milog::MiLogStream::create(
            &v34,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/brick_breaker_activity.cpp",
            "execAction",
            286);
          v23 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                  &v34,
                  (const char (*)[51])"[BrickBreaker] find unlock stage failed, stage_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, (const unsigned int *)(v2 + 48));
          common::milog::MiLogStream::~MiLogStream(&v34);
          result = -1;
          goto LABEL_37;
        }
        v24 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::tuple<bool,bool,bool,bool>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::tuple<bool,bool,bool,bool> > > *const)(v2 + 64));
        v25 = std::get<1ul,bool,bool,bool,bool>(&v24->second);
        v22 = v25;
        if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
          && ((unsigned __int8)v25 & 7) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(v25);
        }
      }
      *v22 = 1;
      BaseActivity::notifyClientData(this, 0);
    }
LABEL_35:
    result = 0;
    goto LABEL_37;
  }
  result = BaseActivity::execAction(this, action_exec);
LABEL_37:
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
  return result;
};

// Line 302: range 0000000014EF5DCC-0000000014EF6308
bool __cdecl BrickBreakerActivity::checkCondIsMeet(BrickBreakerActivity *const this, const data::NewActivityCond *cond)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // r13
  bool result; // al
  ActivityBrickBreakerExcelConfigMgr *p_activity_brick_breaker_config_mgr; // r14
  uint32_t *v8; // rdx
  bool v9; // r14
  common::milog::MiLogStream *v10; // r13
  const int *v11; // rax
  std::map<unsigned int,std::tuple<bool,bool,bool,bool>>::key_type *v12; // rdx
  std::vector<int>::const_reference v13; // rdx
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::tuple<bool,bool,bool,bool> > >::pointer v14; // rax
  std::__tuple_element_t_39 *v15; // rax
  bool *v16; // rdx
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::tuple<bool,bool,bool,bool> > >::pointer v17; // rax
  std::__tuple_element_t_9 *v18; // rax
  bool *v19; // rdx
  std::map<unsigned int,std::tuple<bool,bool,bool,bool>>::key_type __x; // [rsp+14h] [rbp-ACh] BYREF
  unsigned __int64 val; // [rsp+18h] [rbp-A8h] BYREF
  std::shared_ptr<Config> v22; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v23; // [rsp+30h] [rbp-90h] BYREF
  char v24[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 8 iter:317";
  *(_QWORD *)(v2 + 16) = BrickBreakerActivity::checkCondIsMeet;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( cond->type == NEW_ACTIVITY_COND_BRICK_BREAKER_STAGE_LEVEL_FINISH )
  {
    if ( std::vector<int>::size(&cond->param) > 1 )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v22);
      p_activity_brick_breaker_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22)->design_config.txt_config_mgr.activity_brick_breaker_config_mgr;
      v8 = (uint32_t *)std::vector<int>::operator[](&cond->param, 0LL);
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v9 = data::ActivityBrickBreakerExcelConfigMgrBase::findBrickBreakerStageExcelConfig(
             p_activity_brick_breaker_config_mgr,
             *v8) == 0LL;
      std::shared_ptr<Config>::~shared_ptr(&v22);
      if ( v9 )
      {
        common::milog::MiLogStream::create(
          &v23,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/brick_breaker_activity.cpp",
          "checkCondIsMeet",
          314);
        v10 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
                &v23,
                (const char (*)[66])"[BrickBreaker] findBrickBreakerStageExcelConfig failed, stage_id:");
        v11 = std::vector<int>::operator[](&cond->param, 0LL);
        common::milog::MiLogStream::operator<<<int,(int *)0>(v10, v11);
        common::milog::MiLogStream::~MiLogStream(&v23);
        result = 0;
      }
      else
      {
        v12 = (std::map<unsigned int,std::tuple<bool,bool,bool,bool>>::key_type *)std::vector<int>::operator[](
                                                                                    &cond->param,
                                                                                    0LL);
        if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        __x = *v12;
        *(std::map<unsigned int,std::tuple<bool,bool,bool,bool>>::iterator *)(v2 + 32) = std::map<unsigned int,std::tuple<bool,bool,bool,bool>>::find(
                                                                                           &this->unlock_stage_map_,
                                                                                           &__x);
        val = (unsigned __int64)std::map<unsigned int,std::tuple<bool,bool,bool,bool>>::end(&this->unlock_stage_map_)._M_node;
        if ( std::operator==(
               (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::tuple<bool,bool,bool,bool> > >::_Self *)(v2 + 32),
               (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::tuple<bool,bool,bool,bool> > >::_Self *)&val) )
        {
          result = 0;
        }
        else
        {
          v13 = std::vector<int>::operator[](&cond->param, 1uLL);
          if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          if ( *v13 )
          {
            v14 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::tuple<bool,bool,bool,bool>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::tuple<bool,bool,bool,bool> > > *const)(v2 + 32));
            v15 = std::get<2ul,bool,bool,bool,bool>(&v14->second);
            v16 = v15;
            if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
              && ((unsigned __int8)v15 & 7) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load1(v15);
            }
            result = *v16;
          }
          else
          {
            v17 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::tuple<bool,bool,bool,bool>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::tuple<bool,bool,bool,bool> > > *const)(v2 + 32));
            v18 = std::get<3ul,bool,bool,bool,bool>(&v17->second);
            v19 = v18;
            if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
              && ((unsigned __int8)v18 & 7) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load1(v18);
            }
            result = *v19;
          }
        }
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/brick_breaker_activity.cpp",
        "checkCondIsMeet",
        309);
      v5 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
             &v23,
             (const char (*)[56])"[BrickBreaker] param count invalid, expect: 2, acutal: ");
      val = std::vector<int>::size(&cond->param);
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v5, &val);
      common::milog::MiLogStream::~MiLogStream(&v23);
      result = 0;
    }
  }
  else
  {
    result = BaseActivity::checkCondIsMeet(this, cond);
  }
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

// Line 339: range 0000000014EF630A-0000000014EF67D8
__int64 __fastcall BrickBreakerActivity::checkDungeonLevelCanStart(BrickBreakerActivity *const this, uint32_t level_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  __int64 result; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v8; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::tuple<bool,bool,bool,bool> > >::pointer v9; // rax
  std::__tuple_element_t_40 *v10; // rax
  _BYTE *v11; // rdx
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::tuple<bool,bool,bool,bool> > >::pointer v12; // rax
  std::__tuple_element_t_39 *v13; // rax
  _BYTE *v14; // rdx
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> __y; // [rsp+18h] [rbp-F8h] BYREF
  const ActivityBrickBreakerExcelConfigMgr *config_mgr; // [rsp+20h] [rbp-F0h]
  std::shared_ptr<Config> v18; // [rsp+30h] [rbp-E0h] BYREF
  common::milog::MiLogStream v19; // [rsp+40h] [rbp-D0h] BYREF
  char v20[176]; // [rsp+60h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 12 level_id:338 64 8 21 stage_config_iter:352 96 8 14 stage_iter:359";
  *(_QWORD *)(v2 + 16) = BrickBreakerActivity::checkDungeonLevelCanStart;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = level_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_ignore_check_by_gm_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 116) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_ignore_check_by_gm_ >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_ignore_check_by_gm_);
  }
  if ( this->is_ignore_check_by_gm_ )
  {
    result = 0LL;
  }
  else
  {
    if ( *(char *)(((unsigned __int64)&this->is_common_content_closed_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->is_common_content_closed_);
    if ( this->is_common_content_closed_ )
    {
      result = 10901LL;
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v18);
      config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v18)->design_config.txt_config_mgr.activity_brick_breaker_config_mgr;
      std::shared_ptr<Config>::~shared_ptr(&v18);
      if ( data::ActivityBrickBreakerExcelConfigMgrBase::findBrickBreakerDungeonLevelExcelConfig(
             config_mgr,
             *(_DWORD *)(v2 + 48)) )
      {
        *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                        &config_mgr->dungeon_level_to_stage_map,
                                                                                        (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
        __y._M_cur = std::unordered_map<unsigned int,unsigned int>::end(&config_mgr->dungeon_level_to_stage_map)._M_cur;
        if ( std::__detail::operator==<std::pair<unsigned int const,unsigned int>,false>(
               (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 64),
               &__y) )
        {
          common::milog::MiLogStream::create(
            &v19,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/brick_breaker_activity.cpp",
            "checkDungeonLevelCanStart",
            355);
          v7 = common::milog::MiLogStream::operator<<<char [71],(char *[71])0>(
                 &v19,
                 (const char (*)[71])"[BrickBreaker] dungeon_level_to_stage_map find level failed, level_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
          common::milog::MiLogStream::~MiLogStream(&v19);
          result = 0xFFFFFFFFLL;
        }
        else
        {
          v8 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 64));
          *(std::map<unsigned int,std::tuple<bool,bool,bool,bool>>::iterator *)(v2 + 96) = std::map<unsigned int,std::tuple<bool,bool,bool,bool>>::find(
                                                                                             &this->unlock_stage_map_,
                                                                                             &v8->second);
          __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false>::__node_type *)std::map<unsigned int,std::tuple<bool,bool,bool,bool>>::end(&this->unlock_stage_map_)._M_node;
          if ( std::operator==(
                 (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::tuple<bool,bool,bool,bool> > >::_Self *)(v2 + 96),
                 (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::tuple<bool,bool,bool,bool> > >::_Self *)&__y) )
          {
            result = 10457LL;
          }
          else
          {
            v9 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::tuple<bool,bool,bool,bool>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::tuple<bool,bool,bool,bool> > > *const)(v2 + 96));
            v10 = std::get<1ul,bool,bool,bool,bool>(&v9->second);
            v11 = v10;
            if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
              && ((unsigned __int8)v10 & 7) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load1(v10);
            }
            if ( *v11 != 1 )
            {
              result = 10462LL;
            }
            else
            {
              v12 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::tuple<bool,bool,bool,bool>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::tuple<bool,bool,bool,bool> > > *const)(v2 + 96));
              v13 = std::get<2ul,bool,bool,bool,bool>(&v12->second);
              v14 = v13;
              if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
                && ((unsigned __int8)v13 & 7) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load1(v13);
              }
              if ( *v14 != 1 )
                result = 10459LL;
              else
                result = 0LL;
            }
          }
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v19,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/brick_breaker_activity.cpp",
          "checkDungeonLevelCanStart",
          349);
        v6 = common::milog::MiLogStream::operator<<<char [73],(char *[73])0>(
               &v19,
               (const char (*)[73])"[BrickBreaker] findBrickBreakerDungeonLevelExcelConfig failed, level_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v19);
        result = 0xFFFFFFFFLL;
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
  return result;
};

// Line 378: range 0000000014EF67DA-0000000014EF7204
__int64 __fastcall BrickBreakerActivity::checkWorldLevelCanStart(BrickBreakerActivity *const this, uint32_t level_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::tuple<bool,bool,bool,bool> > >::pointer v10; // rax
  std::__tuple_element_t_41 *v11; // rax
  _BYTE *v12; // rdx
  std::_Rb_tree_iterator<std::pair<unsigned int const,BrickBreakerLevelData> >::pointer v13; // rax
  char v14; // al
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,BrickBreakerWorldLevelGroupConfig>,false,false>::pointer v18; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,BrickBreakerLevelData> >::pointer v19; // rax
  char v20; // al
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::tuple<bool,bool,bool,bool> > >::pointer v21; // rax
  std::__tuple_element_t_39 *v22; // rax
  _BYTE *v23; // rdx
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::tuple<bool,bool,bool,bool> > >::pointer v24; // rax
  std::__tuple_element_t_9 *v25; // rax
  _BYTE *v26; // rdx
  char v27; // al
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,BrickBreakerWorldLevelGroupConfig>,false> __y; // [rsp+10h] [rbp-160h] BYREF
  const ActivityBrickBreakerExcelConfigMgr *config_mgr; // [rsp+18h] [rbp-158h]
  const data::BrickBreakerWorldLevelExcelConfig *world_level_config_ptr; // [rsp+20h] [rbp-150h]
  const BrickBreakerWorldLevelGroupConfig *level_group_config; // [rsp+28h] [rbp-148h]
  std::shared_ptr<Config> v32; // [rsp+30h] [rbp-140h] BYREF
  common::milog::MiLogStream v33; // [rsp+40h] [rbp-130h] BYREF
  char v34[272]; // [rsp+60h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 4 24 world_level_group_id:391 64 4 16 pre_stage_id:439 80 4 12 level_id:377 96 8 33 world_l"
                        "evel_group_config_iter:392 128 8 14 stage_iter:400 160 8 31 pre_level_group_config_iter:423 192 "
                        "8 18 pre_stage_iter:440";
  *(_QWORD *)(v2 + 16) = BrickBreakerActivity::checkWorldLevelCanStart;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234556924;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -202116352;
  *(_DWORD *)(v2 + 80) = level_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_ignore_check_by_gm_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 116) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_ignore_check_by_gm_ >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_ignore_check_by_gm_);
  }
  if ( this->is_ignore_check_by_gm_ )
  {
    result = 0LL;
    goto LABEL_64;
  }
  if ( *(char *)(((unsigned __int64)&this->is_common_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_common_content_closed_);
  if ( this->is_common_content_closed_ )
  {
    result = 10901LL;
    goto LABEL_64;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v32);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v32)->design_config.txt_config_mgr.activity_brick_breaker_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v32);
  world_level_config_ptr = data::ActivityBrickBreakerExcelConfigMgrBase::findBrickBreakerWorldLevelExcelConfig(
                             config_mgr,
                             *(_DWORD *)(v2 + 80));
  if ( !world_level_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v33,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/brick_breaker_activity.cpp",
      "checkWorldLevelCanStart",
      388);
    v6 = common::milog::MiLogStream::operator<<<char [71],(char *[71])0>(
           &v33,
           (const char (*)[71])"[BrickBreaker] findBrickBreakerWorldLevelExcelConfig failed, level_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 80));
    common::milog::MiLogStream::~MiLogStream(&v33);
    result = 0xFFFFFFFFLL;
    goto LABEL_64;
  }
  if ( *(_BYTE *)(((unsigned __int64)&world_level_config_ptr->world_level_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)world_level_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&world_level_config_ptr->world_level_id >> 3)
                                                                          + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  *(_DWORD *)(v2 + 48) = world_level_config_ptr->world_level_id;
  *(std::unordered_map<unsigned int,BrickBreakerWorldLevelGroupConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,BrickBreakerWorldLevelGroupConfig>::find(&config_mgr->world_level_group_config_map, (const std::unordered_map<unsigned int,BrickBreakerWorldLevelGroupConfig>::key_type *)(v2 + 48));
  __y._M_cur = std::unordered_map<unsigned int,BrickBreakerWorldLevelGroupConfig>::end(&config_mgr->world_level_group_config_map)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,BrickBreakerWorldLevelGroupConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,BrickBreakerWorldLevelGroupConfig>,false> *)(v2 + 96),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v33,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/brick_breaker_activity.cpp",
      "checkWorldLevelCanStart",
      395);
    v7 = common::milog::MiLogStream::operator<<<char [100],(char *[100])0>(
           &v33,
           (const char (*)[100])"[BrickBreaker] world_level_group_config_map find world_level_group_id failed, world_level_group_id:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
    v9 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v8, (const char (*)[12])", level_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 80));
    common::milog::MiLogStream::~MiLogStream(&v33);
    result = 0xFFFFFFFFLL;
    goto LABEL_64;
  }
  level_group_config = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,BrickBreakerWorldLevelGroupConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,BrickBreakerWorldLevelGroupConfig>,false,false> *const)(v2 + 96))->second;
  *(std::map<unsigned int,std::tuple<bool,bool,bool,bool>>::iterator *)(v2 + 128) = std::map<unsigned int,std::tuple<bool,bool,bool,bool>>::find(
                                                                                      &this->unlock_stage_map_,
                                                                                      &level_group_config->stage_id);
  __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,BrickBreakerWorldLevelGroupConfig>,false>::__node_type *)std::map<unsigned int,std::tuple<bool,bool,bool,bool>>::end(&this->unlock_stage_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::tuple<bool,bool,bool,bool> > >::_Self *)(v2 + 128),
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::tuple<bool,bool,bool,bool> > >::_Self *)&__y) )
  {
    result = 10457LL;
    goto LABEL_64;
  }
  v10 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::tuple<bool,bool,bool,bool>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::tuple<bool,bool,bool,bool> > > *const)(v2 + 128));
  v11 = std::get<0ul,bool,bool,bool,bool>(&v10->second);
  v12 = v11;
  if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)v11 & 7) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(v11);
  }
  if ( *v12 != 1 )
  {
    result = 10461LL;
    goto LABEL_64;
  }
  if ( *(char *)(((unsigned __int64)&world_level_config_ptr->is_hard >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&world_level_config_ptr->is_hard);
  if ( world_level_config_ptr->is_hard )
  {
    *(std::map<unsigned int,BrickBreakerLevelData>::iterator *)(v2 + 192) = std::map<unsigned int,BrickBreakerLevelData>::find(
                                                                              &this->world_level_map_,
                                                                              (const std::map<unsigned int,BrickBreakerLevelData>::key_type *)&level_group_config->level_pair);
    __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,BrickBreakerWorldLevelGroupConfig>,false>::__node_type *)std::map<unsigned int,BrickBreakerLevelData>::end(&this->world_level_map_)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,BrickBreakerLevelData> >::_Self *)(v2 + 192),
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,BrickBreakerLevelData> >::_Self *)&__y) )
    {
      goto LABEL_31;
    }
    v13 = std::_Rb_tree_iterator<std::pair<unsigned int const,BrickBreakerLevelData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,BrickBreakerLevelData> > *const)(v2 + 192));
    if ( *(char *)(((unsigned __int64)&v13->second >> 3) + 0x7FFF8000) < 0 )
      v13 = (std::_Rb_tree_iterator<std::pair<unsigned int const,BrickBreakerLevelData> >::pointer)__asan_report_load1(&v13->second);
    if ( !v13->second.is_finish )
LABEL_31:
      v14 = 1;
    else
      v14 = 0;
    if ( v14 )
    {
      result = 10458LL;
      goto LABEL_64;
    }
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&level_group_config->pre_level_group_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)level_group_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_group_config->pre_level_group_id >> 3)
                                                                        + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( level_group_config->pre_level_group_id )
    {
      *(std::unordered_map<unsigned int,BrickBreakerWorldLevelGroupConfig>::const_iterator *)(v2 + 160) = std::unordered_map<unsigned int,BrickBreakerWorldLevelGroupConfig>::find(&config_mgr->world_level_group_config_map, &level_group_config->pre_level_group_id);
      __y._M_cur = std::unordered_map<unsigned int,BrickBreakerWorldLevelGroupConfig>::end(&config_mgr->world_level_group_config_map)._M_cur;
      if ( std::__detail::operator==<std::pair<unsigned int const,BrickBreakerWorldLevelGroupConfig>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,BrickBreakerWorldLevelGroupConfig>,false> *)(v2 + 160),
             &__y) )
      {
        common::milog::MiLogStream::create(
          &v33,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/brick_breaker_activity.cpp",
          "checkWorldLevelCanStart",
          426);
        v15 = common::milog::MiLogStream::operator<<<char [100],(char *[100])0>(
                &v33,
                (const char (*)[100])"[BrickBreaker] world_level_group_config_map find world_level_group_id failed, world"
                                     "_level_group_id:");
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v15,
                &level_group_config->pre_level_group_id);
        v17 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v16, (const char (*)[12])", level_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v2 + 80));
        common::milog::MiLogStream::~MiLogStream(&v33);
        result = 0xFFFFFFFFLL;
        goto LABEL_64;
      }
      v18 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,BrickBreakerWorldLevelGroupConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,BrickBreakerWorldLevelGroupConfig>,false,false> *const)(v2 + 160));
      *(std::map<unsigned int,BrickBreakerLevelData>::iterator *)(v2 + 192) = std::map<unsigned int,BrickBreakerLevelData>::find(
                                                                                &this->world_level_map_,
                                                                                (const std::map<unsigned int,BrickBreakerLevelData>::key_type *)&v18->second.level_pair);
      __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,BrickBreakerWorldLevelGroupConfig>,false>::__node_type *)std::map<unsigned int,BrickBreakerLevelData>::end(&this->world_level_map_)._M_node;
      if ( std::operator==(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,BrickBreakerLevelData> >::_Self *)(v2 + 192),
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,BrickBreakerLevelData> >::_Self *)&__y) )
      {
        goto LABEL_44;
      }
      v19 = std::_Rb_tree_iterator<std::pair<unsigned int const,BrickBreakerLevelData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,BrickBreakerLevelData> > *const)(v2 + 192));
      if ( *(char *)(((unsigned __int64)&v19->second >> 3) + 0x7FFF8000) < 0 )
        v19 = (std::_Rb_tree_iterator<std::pair<unsigned int const,BrickBreakerLevelData> >::pointer)__asan_report_load1(&v19->second);
      if ( !v19->second.is_finish )
LABEL_44:
        v20 = 1;
      else
        v20 = 0;
      if ( v20 )
      {
        result = 10459LL;
        goto LABEL_64;
      }
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)level_group_config >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)level_group_config >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( level_group_config->stage_id > 1 )
      {
        *(_DWORD *)(v2 + 64) = level_group_config->stage_id - 1;
        *(std::map<unsigned int,std::tuple<bool,bool,bool,bool>>::iterator *)(v2 + 192) = std::map<unsigned int,std::tuple<bool,bool,bool,bool>>::find(
                                                                                            &this->unlock_stage_map_,
                                                                                            (const std::map<unsigned int,std::tuple<bool,bool,bool,bool>>::key_type *)(v2 + 64));
        __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,BrickBreakerWorldLevelGroupConfig>,false>::__node_type *)std::map<unsigned int,std::tuple<bool,bool,bool,bool>>::end(&this->unlock_stage_map_)._M_node;
        if ( std::operator==(
               (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::tuple<bool,bool,bool,bool> > >::_Self *)(v2 + 192),
               (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::tuple<bool,bool,bool,bool> > >::_Self *)&__y) )
        {
          result = 10457LL;
          goto LABEL_64;
        }
        v21 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::tuple<bool,bool,bool,bool>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::tuple<bool,bool,bool,bool> > > *const)(v2 + 192));
        v22 = std::get<2ul,bool,bool,bool,bool>(&v21->second);
        v23 = v22;
        if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
          && ((unsigned __int8)v22 & 7) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(v22);
        }
        if ( *v23 != 1 )
          goto LABEL_59;
        v24 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::tuple<bool,bool,bool,bool>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::tuple<bool,bool,bool,bool> > > *const)(v2 + 192));
        v25 = std::get<3ul,bool,bool,bool,bool>(&v24->second);
        v26 = v25;
        if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
          && ((unsigned __int8)v25 & 7) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(v25);
        }
        if ( *v26 != 1 )
LABEL_59:
          v27 = 1;
        else
          v27 = 0;
        if ( v27 )
        {
          result = 10460LL;
          goto LABEL_64;
        }
      }
    }
  }
  result = 0LL;
LABEL_64:
  if ( v34 == (char *)v2 )
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

// Line 454: range 0000000014EF7206-0000000014EF75AB
void __fastcall BrickBreakerActivity::onDungeonLevelStart(
        BrickBreakerActivity *const this,
        uint32_t level_id,
        const std::vector<unsigned int> *save_avatar_vec,
        const std::vector<unsigned int> *skill_vec)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  BrickBreakerLevelData *v8; // rax
  unsigned int *v9; // rcx
  BrickBreakerLevelData *v10; // r8
  std::_Rb_tree_iterator<std::pair<unsigned int const,BrickBreakerLevelData> >::pointer v11; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,BrickBreakerLevelData> >::_Self __y; // [rsp+20h] [rbp-140h] BYREF
  const ActivityBrickBreakerExcelConfigMgr *config_mgr; // [rsp+28h] [rbp-138h]
  BrickBreakerLevelData *level_data; // [rsp+38h] [rbp-128h]
  std::shared_ptr<Config> v18; // [rsp+40h] [rbp-120h] BYREF
  common::milog::MiLogStream v19; // [rsp+50h] [rbp-110h] BYREF
  char v20[240]; // [rsp+70h] [rbp-F0h] BYREF

  v4 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 4 12 level_id:453 64 8 8 iter:462 96 56 14 level_data:465";
  *(_QWORD *)(v4 + 16) = BrickBreakerActivity::onDungeonLevelStart;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -218959360;
  v6[536862724] = -218103808;
  v6[536862725] = -202116109;
  *(_DWORD *)(v4 + 48) = level_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v18);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v18)->design_config.txt_config_mgr.activity_brick_breaker_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v18);
  if ( data::ActivityBrickBreakerExcelConfigMgrBase::findBrickBreakerDungeonLevelExcelConfig(
         config_mgr,
         *(_DWORD *)(v4 + 48)) )
  {
    *(std::map<unsigned int,BrickBreakerLevelData>::iterator *)(v4 + 64) = std::map<unsigned int,BrickBreakerLevelData>::find(
                                                                             &this->dungeon_level_map_,
                                                                             (const std::map<unsigned int,BrickBreakerLevelData>::key_type *)(v4 + 48));
    __y._M_node = std::map<unsigned int,BrickBreakerLevelData>::end(&this->dungeon_level_map_)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,BrickBreakerLevelData> >::_Self *)(v4 + 64),
           &__y) )
    {
      BrickBreakerLevelData::BrickBreakerLevelData((BrickBreakerLevelData *const)(v4 + 96));
      std::vector<unsigned int>::operator=((std::vector<unsigned int> *const)(v4 + 104), save_avatar_vec);
      std::vector<unsigned int>::operator=((std::vector<unsigned int> *const)(v4 + 128), skill_vec);
      v8 = std::move<BrickBreakerLevelData &>((BrickBreakerLevelData *)(v4 + 96));
      std::map<unsigned int,BrickBreakerLevelData>::emplace<unsigned int &,BrickBreakerLevelData>(
        &this->dungeon_level_map_,
        (unsigned int *)(v4 + 48),
        v8,
        v9,
        v10);
      BrickBreakerLevelData::~BrickBreakerLevelData((BrickBreakerLevelData *const)(v4 + 96));
    }
    else
    {
      v11 = std::_Rb_tree_iterator<std::pair<unsigned int const,BrickBreakerLevelData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,BrickBreakerLevelData> > *const)(v4 + 64));
      level_data = &v11->second;
      std::vector<unsigned int>::operator=(&v11->second.chosen_avatar_vec, save_avatar_vec);
      std::vector<unsigned int>::operator=(&level_data->chosen_skill_vec, skill_vec);
    }
    BaseActivity::notifyClientData(this, 0);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/brick_breaker_activity.cpp",
      "onDungeonLevelStart",
      459);
    v7 = common::milog::MiLogStream::operator<<<char [73],(char *[73])0>(
           &v19,
           (const char (*)[73])"[BrickBreaker] findBrickBreakerDungeonLevelExcelConfig failed, level_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream(&v19);
  }
  if ( v20 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 480: range 0000000014EF75AC-0000000014EF7951
void __fastcall BrickBreakerActivity::onWorldLevelStart(
        BrickBreakerActivity *const this,
        uint32_t level_id,
        const std::vector<unsigned int> *save_avatar_vec,
        const std::vector<unsigned int> *skill_vec)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  BrickBreakerLevelData *v8; // rax
  unsigned int *v9; // rcx
  BrickBreakerLevelData *v10; // r8
  std::_Rb_tree_iterator<std::pair<unsigned int const,BrickBreakerLevelData> >::pointer v11; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,BrickBreakerLevelData> >::_Self __y; // [rsp+20h] [rbp-140h] BYREF
  const ActivityBrickBreakerExcelConfigMgr *config_mgr; // [rsp+28h] [rbp-138h]
  BrickBreakerLevelData *level_data; // [rsp+38h] [rbp-128h]
  std::shared_ptr<Config> v18; // [rsp+40h] [rbp-120h] BYREF
  common::milog::MiLogStream v19; // [rsp+50h] [rbp-110h] BYREF
  char v20[240]; // [rsp+70h] [rbp-F0h] BYREF

  v4 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 4 12 level_id:479 64 8 8 iter:488 96 56 14 level_data:491";
  *(_QWORD *)(v4 + 16) = BrickBreakerActivity::onWorldLevelStart;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -218959360;
  v6[536862724] = -218103808;
  v6[536862725] = -202116109;
  *(_DWORD *)(v4 + 48) = level_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v18);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v18)->design_config.txt_config_mgr.activity_brick_breaker_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v18);
  if ( data::ActivityBrickBreakerExcelConfigMgrBase::findBrickBreakerWorldLevelExcelConfig(
         config_mgr,
         *(_DWORD *)(v4 + 48)) )
  {
    *(std::map<unsigned int,BrickBreakerLevelData>::iterator *)(v4 + 64) = std::map<unsigned int,BrickBreakerLevelData>::find(
                                                                             &this->world_level_map_,
                                                                             (const std::map<unsigned int,BrickBreakerLevelData>::key_type *)(v4 + 48));
    __y._M_node = std::map<unsigned int,BrickBreakerLevelData>::end(&this->world_level_map_)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,BrickBreakerLevelData> >::_Self *)(v4 + 64),
           &__y) )
    {
      BrickBreakerLevelData::BrickBreakerLevelData((BrickBreakerLevelData *const)(v4 + 96));
      std::vector<unsigned int>::operator=((std::vector<unsigned int> *const)(v4 + 104), save_avatar_vec);
      std::vector<unsigned int>::operator=((std::vector<unsigned int> *const)(v4 + 128), skill_vec);
      v8 = std::move<BrickBreakerLevelData &>((BrickBreakerLevelData *)(v4 + 96));
      std::map<unsigned int,BrickBreakerLevelData>::emplace<unsigned int &,BrickBreakerLevelData>(
        &this->world_level_map_,
        (unsigned int *)(v4 + 48),
        v8,
        v9,
        v10);
      BrickBreakerLevelData::~BrickBreakerLevelData((BrickBreakerLevelData *const)(v4 + 96));
    }
    else
    {
      v11 = std::_Rb_tree_iterator<std::pair<unsigned int const,BrickBreakerLevelData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,BrickBreakerLevelData> > *const)(v4 + 64));
      level_data = &v11->second;
      std::vector<unsigned int>::operator=(&v11->second.chosen_avatar_vec, save_avatar_vec);
      std::vector<unsigned int>::operator=(&level_data->chosen_skill_vec, skill_vec);
    }
    BaseActivity::notifyClientData(this, 0);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/brick_breaker_activity.cpp",
      "onWorldLevelStart",
      485);
    v7 = common::milog::MiLogStream::operator<<<char [71],(char *[71])0>(
           &v19,
           (const char (*)[71])"[BrickBreaker] findBrickBreakerWorldLevelExcelConfig failed, level_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream(&v19);
  }
  if ( v20 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 506: range 0000000014EF7952-0000000014EF7ED8
void __fastcall BrickBreakerActivity::onDungeonLevelFinish(
        BrickBreakerActivity *const this,
        uint32_t level_id,
        uint32_t score,
        std::map<unsigned int,unsigned int> *update_skill_map,
        unsigned __int64 is_new_record)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  bool v10; // cl
  uint32_t *v11; // rdx
  uint32_t v12; // ecx
  uint32_t v13; // ecx
  std::_Rb_tree_iterator<std::pair<unsigned int const,BrickBreakerLevelData> >::_Self __y; // [rsp+20h] [rbp-D0h] BYREF
  const ActivityBrickBreakerExcelConfigMgr *config_mgr; // [rsp+28h] [rbp-C8h]
  BrickBreakerLevelData *level_data; // [rsp+38h] [rbp-B8h]
  std::shared_ptr<Config> v21; // [rsp+40h] [rbp-B0h] BYREF
  common::milog::MiLogStream v22; // [rsp+50h] [rbp-A0h] BYREF
  char v23[128]; // [rsp+70h] [rbp-80h] BYREF

  v5 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "3 32 4 12 level_id:505 48 4 9 score:505 64 8 8 iter:514";
  *(_QWORD *)(v5 + 16) = BrickBreakerActivity::onDungeonLevelFinish;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556924;
  v7[536862722] = -202116352;
  *(_DWORD *)(v5 + 32) = level_id;
  *(_DWORD *)(v5 + 48) = score;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v21);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21)->design_config.txt_config_mgr.activity_brick_breaker_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v21);
  if ( data::ActivityBrickBreakerExcelConfigMgrBase::findBrickBreakerDungeonLevelExcelConfig(
         config_mgr,
         *(_DWORD *)(v5 + 32)) )
  {
    *(std::map<unsigned int,BrickBreakerLevelData>::iterator *)(v5 + 64) = std::map<unsigned int,BrickBreakerLevelData>::find(
                                                                             &this->dungeon_level_map_,
                                                                             (const std::map<unsigned int,BrickBreakerLevelData>::key_type *)(v5 + 32));
    __y._M_node = std::map<unsigned int,BrickBreakerLevelData>::end(&this->dungeon_level_map_)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,BrickBreakerLevelData> >::_Self *)(v5 + 64),
           &__y) )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/brick_breaker_activity.cpp",
        "onDungeonLevelFinish",
        517);
      v9 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
             &v22,
             (const char (*)[62])"[BrickBreaker] dungeon_level_map find level failed, level_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v5 + 32));
      common::milog::MiLogStream::~MiLogStream(&v22);
    }
    else
    {
      level_data = &std::_Rb_tree_iterator<std::pair<unsigned int const,BrickBreakerLevelData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,BrickBreakerLevelData> > *const)(v5 + 64))->second;
      if ( *(char *)(((unsigned __int64)level_data >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(level_data);
      if ( level_data->is_finish )
      {
        if ( *(_BYTE *)(((unsigned __int64)&level_data->max_score >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)level_data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_data->max_score >> 3)
                                                                   + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        v10 = level_data->max_score < *(_DWORD *)(v5 + 48);
        if ( *(_BYTE *)((is_new_record >> 3) + 0x7FFF8000) != 0
          && (char)(is_new_record & 7) >= *(_BYTE *)((is_new_record >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(is_new_record);
        }
        *(_BYTE *)is_new_record = v10;
        v11 = (uint32_t *)std::max<unsigned int>(&level_data->max_score, (const unsigned int *)(v5 + 48));
        if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        v12 = *v11;
        if ( *(_BYTE *)(((unsigned __int64)&level_data->max_score >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)level_data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_data->max_score >> 3)
                                                                   + 0x7FFF8000) )
        {
          __asan_report_store4(&level_data->max_score);
        }
        level_data->max_score = v12;
      }
      else
      {
        if ( *(_BYTE *)((is_new_record >> 3) + 0x7FFF8000) != 0
          && (char)(is_new_record & 7) >= *(_BYTE *)((is_new_record >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(is_new_record);
        }
        *(_BYTE *)is_new_record = 1;
        if ( *(char *)(((unsigned __int64)level_data >> 3) + 0x7FFF8000) < 0 )
          __asan_report_store1(level_data);
        level_data->is_finish = 1;
        v13 = *(_DWORD *)(v5 + 48);
        if ( *(_BYTE *)(((unsigned __int64)&level_data->max_score >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)level_data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_data->max_score >> 3)
                                                                   + 0x7FFF8000) )
        {
          __asan_report_store4(&level_data->max_score);
        }
        level_data->max_score = v13;
        BrickBreakerActivity::tryUpgradeSkillByFinishDungeonLevel(this, *(_DWORD *)(v5 + 32), update_skill_map);
        BrickBreakerActivity::updateStageState(this, 0, *(_DWORD *)(v5 + 32));
      }
      BaseActivity::notifyClientData(this, 0);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/brick_breaker_activity.cpp",
      "onDungeonLevelFinish",
      511);
    v8 = common::milog::MiLogStream::operator<<<char [73],(char *[73])0>(
           &v22,
           (const char (*)[73])"[BrickBreaker] findBrickBreakerDungeonLevelExcelConfig failed, level_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v5 + 32));
    common::milog::MiLogStream::~MiLogStream(&v22);
  }
  if ( v23 == (char *)v5 )
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
};

// Line 542: range 0000000014EF7EDA-0000000014EF8460
void __fastcall BrickBreakerActivity::onWorldLevelFinish(
        BrickBreakerActivity *const this,
        uint32_t level_id,
        uint32_t score,
        std::map<unsigned int,unsigned int> *update_skill_map,
        unsigned __int64 is_new_record)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  bool v10; // cl
  uint32_t *v11; // rdx
  uint32_t v12; // ecx
  uint32_t v13; // ecx
  std::_Rb_tree_iterator<std::pair<unsigned int const,BrickBreakerLevelData> >::_Self __y; // [rsp+20h] [rbp-D0h] BYREF
  const ActivityBrickBreakerExcelConfigMgr *config_mgr; // [rsp+28h] [rbp-C8h]
  BrickBreakerLevelData *level_data; // [rsp+38h] [rbp-B8h]
  std::shared_ptr<Config> v21; // [rsp+40h] [rbp-B0h] BYREF
  common::milog::MiLogStream v22; // [rsp+50h] [rbp-A0h] BYREF
  char v23[128]; // [rsp+70h] [rbp-80h] BYREF

  v5 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "3 32 4 12 level_id:541 48 4 9 score:541 64 8 8 iter:550";
  *(_QWORD *)(v5 + 16) = BrickBreakerActivity::onWorldLevelFinish;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556924;
  v7[536862722] = -202116352;
  *(_DWORD *)(v5 + 32) = level_id;
  *(_DWORD *)(v5 + 48) = score;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v21);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21)->design_config.txt_config_mgr.activity_brick_breaker_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v21);
  if ( data::ActivityBrickBreakerExcelConfigMgrBase::findBrickBreakerWorldLevelExcelConfig(
         config_mgr,
         *(_DWORD *)(v5 + 32)) )
  {
    *(std::map<unsigned int,BrickBreakerLevelData>::iterator *)(v5 + 64) = std::map<unsigned int,BrickBreakerLevelData>::find(
                                                                             &this->world_level_map_,
                                                                             (const std::map<unsigned int,BrickBreakerLevelData>::key_type *)(v5 + 32));
    __y._M_node = std::map<unsigned int,BrickBreakerLevelData>::end(&this->world_level_map_)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,BrickBreakerLevelData> >::_Self *)(v5 + 64),
           &__y) )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/brick_breaker_activity.cpp",
        "onWorldLevelFinish",
        553);
      v9 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
             &v22,
             (const char (*)[62])"[BrickBreaker] dungeon_level_map find level failed, level_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v5 + 32));
      common::milog::MiLogStream::~MiLogStream(&v22);
    }
    else
    {
      level_data = &std::_Rb_tree_iterator<std::pair<unsigned int const,BrickBreakerLevelData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,BrickBreakerLevelData> > *const)(v5 + 64))->second;
      if ( *(char *)(((unsigned __int64)level_data >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(level_data);
      if ( level_data->is_finish )
      {
        if ( *(_BYTE *)(((unsigned __int64)&level_data->max_score >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)level_data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_data->max_score >> 3)
                                                                   + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        v10 = level_data->max_score < *(_DWORD *)(v5 + 48);
        if ( *(_BYTE *)((is_new_record >> 3) + 0x7FFF8000) != 0
          && (char)(is_new_record & 7) >= *(_BYTE *)((is_new_record >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(is_new_record);
        }
        *(_BYTE *)is_new_record = v10;
        v11 = (uint32_t *)std::max<unsigned int>(&level_data->max_score, (const unsigned int *)(v5 + 48));
        if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        v12 = *v11;
        if ( *(_BYTE *)(((unsigned __int64)&level_data->max_score >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)level_data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_data->max_score >> 3)
                                                                   + 0x7FFF8000) )
        {
          __asan_report_store4(&level_data->max_score);
        }
        level_data->max_score = v12;
      }
      else
      {
        if ( *(_BYTE *)((is_new_record >> 3) + 0x7FFF8000) != 0
          && (char)(is_new_record & 7) >= *(_BYTE *)((is_new_record >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(is_new_record);
        }
        *(_BYTE *)is_new_record = 1;
        if ( *(char *)(((unsigned __int64)level_data >> 3) + 0x7FFF8000) < 0 )
          __asan_report_store1(level_data);
        level_data->is_finish = 1;
        v13 = *(_DWORD *)(v5 + 48);
        if ( *(_BYTE *)(((unsigned __int64)&level_data->max_score >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)level_data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_data->max_score >> 3)
                                                                   + 0x7FFF8000) )
        {
          __asan_report_store4(&level_data->max_score);
        }
        level_data->max_score = v13;
        BrickBreakerActivity::tryUnlockSkillByFinishWorldLevel(this, *(_DWORD *)(v5 + 32), update_skill_map);
        BrickBreakerActivity::updateStageState(this, 1, *(_DWORD *)(v5 + 32));
      }
      BaseActivity::notifyClientData(this, 0);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/brick_breaker_activity.cpp",
      "onWorldLevelFinish",
      547);
    v8 = common::milog::MiLogStream::operator<<<char [71],(char *[71])0>(
           &v22,
           (const char (*)[71])"[BrickBreaker] findBrickBreakerWorldLevelExcelConfig failed, level_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v5 + 32));
    common::milog::MiLogStream::~MiLogStream(&v22);
  }
  if ( v23 == (char *)v5 )
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
};

// Line 577: range 0000000014EF8462-0000000014EF8693
int32_t __cdecl BrickBreakerActivity::finishWorldLevelByGm(BrickBreakerActivity *const this, uint32_t level_id)
{
  std::map<unsigned int,unsigned int> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t result; // eax
  std::vector<unsigned int> save_avatar_vec; // [rsp+10h] [rbp-F0h] BYREF
  std::vector<unsigned int> skill_vec; // [rsp+30h] [rbp-D0h] BYREF
  char v8[176]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = (std::map<unsigned int,unsigned int> *)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = (std::map<unsigned int,unsigned int> *)v3;
  }
  *(_QWORD *)v2->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v2->_M_t._M_impl._M_header._M_color = "2 32 1 17 is_new_record:580 48 48 20 update_skill_map:579";
  v2->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)BrickBreakerActivity::finishWorldLevelByGm;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61953;
  v4[536862723] = -202116109;
  memset(&skill_vec, 0, sizeof(skill_vec));
  std::vector<unsigned int>::vector(&skill_vec);
  memset(&save_avatar_vec, 0, sizeof(save_avatar_vec));
  std::vector<unsigned int>::vector(&save_avatar_vec);
  BrickBreakerActivity::onWorldLevelStart(this, level_id, &save_avatar_vec, &skill_vec);
  std::vector<unsigned int>::~vector(&save_avatar_vec);
  std::vector<unsigned int>::~vector(&skill_vec);
  std::map<unsigned int,unsigned int>::map(v2 + 1);
  LOBYTE(v2->_M_t._M_impl._M_header._M_right) = 0;
  BrickBreakerActivity::onWorldLevelFinish(
    this,
    level_id,
    0,
    v2 + 1,
    (unsigned __int64)&v2->_M_t._M_impl._M_header._M_right);
  std::map<unsigned int,unsigned int>::~map(v2 + 1);
  result = 0;
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2->_M_t._M_impl.gap0 = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 586: range 0000000014EF8694-0000000014EF88C5
int32_t __cdecl BrickBreakerActivity::finishDungeonLevelByGm(BrickBreakerActivity *const this, uint32_t level_id)
{
  std::map<unsigned int,unsigned int> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t result; // eax
  std::vector<unsigned int> save_avatar_vec; // [rsp+10h] [rbp-F0h] BYREF
  std::vector<unsigned int> skill_vec; // [rsp+30h] [rbp-D0h] BYREF
  char v8[176]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = (std::map<unsigned int,unsigned int> *)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = (std::map<unsigned int,unsigned int> *)v3;
  }
  *(_QWORD *)v2->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v2->_M_t._M_impl._M_header._M_color = "2 32 1 17 is_new_record:589 48 48 20 update_skill_map:588";
  v2->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)BrickBreakerActivity::finishDungeonLevelByGm;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61953;
  v4[536862723] = -202116109;
  memset(&skill_vec, 0, sizeof(skill_vec));
  std::vector<unsigned int>::vector(&skill_vec);
  memset(&save_avatar_vec, 0, sizeof(save_avatar_vec));
  std::vector<unsigned int>::vector(&save_avatar_vec);
  BrickBreakerActivity::onDungeonLevelStart(this, level_id, &save_avatar_vec, &skill_vec);
  std::vector<unsigned int>::~vector(&save_avatar_vec);
  std::vector<unsigned int>::~vector(&skill_vec);
  std::map<unsigned int,unsigned int>::map(v2 + 1);
  LOBYTE(v2->_M_t._M_impl._M_header._M_right) = 0;
  BrickBreakerActivity::onDungeonLevelFinish(
    this,
    level_id,
    0,
    v2 + 1,
    (unsigned __int64)&v2->_M_t._M_impl._M_header._M_right);
  std::map<unsigned int,unsigned int>::~map(v2 + 1);
  result = 0;
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2->_M_t._M_impl.gap0 = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 595: range 0000000014EF88C6-0000000014EF8F40
void __fastcall BrickBreakerActivity::tryUnlockSkillByFinishWorldLevel(
        BrickBreakerActivity *const this,
        uint32_t level_id,
        std::map<unsigned int,unsigned int> *update_skill_map)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,BrickBreakerWorldLevelGroupConfig>,false,false>::pointer v10; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v11; // rdx
  common::milog::MiLogStream *v12; // rax
  int *v13; // r8
  common::milog::MiLogStream *v14; // rax
  std::map<unsigned int,unsigned int>::mapped_type *v15; // rax
  _DWORD *v16; // rdx
  int v18; // [rsp+24h] [rbp-14Ch] BYREF
  std::set<unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-148h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+30h] [rbp-140h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,BrickBreakerWorldLevelGroupConfig>,false> __y; // [rsp+38h] [rbp-138h] BYREF
  const ActivityBrickBreakerExcelConfigMgr *config_mgr; // [rsp+40h] [rbp-130h]
  const data::BrickBreakerWorldLevelExcelConfig *world_level_config_ptr; // [rsp+48h] [rbp-128h]
  const std::set<unsigned int> *__for_range; // [rsp+50h] [rbp-120h]
  std::shared_ptr<Config> v26; // [rsp+60h] [rbp-110h] BYREF
  common::milog::MiLogStream v27; // [rsp+70h] [rbp-100h] BYREF
  common::milog::MiLogStream v28; // [rsp+90h] [rbp-E0h] BYREF
  char v29[192]; // [rsp+B0h] [rbp-C0h] BYREF

  v3 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 4 24 world_level_group_id:603 64 4 12 skill_id:614 80 4 12 level_id:594 96 8 33 world_level"
                        "_group_config_iter:604 128 8 14 skill_iter:622";
  *(_QWORD *)(v3 + 16) = BrickBreakerActivity::tryUnlockSkillByFinishWorldLevel;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -218959360;
  v5[536862724] = -202116352;
  *(_DWORD *)(v3 + 80) = level_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v26);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26)->design_config.txt_config_mgr.activity_brick_breaker_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v26);
  world_level_config_ptr = data::ActivityBrickBreakerExcelConfigMgrBase::findBrickBreakerWorldLevelExcelConfig(
                             config_mgr,
                             *(_DWORD *)(v3 + 80));
  if ( world_level_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&world_level_config_ptr->world_level_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)world_level_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&world_level_config_ptr->world_level_id >> 3)
                                                                            + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v3 + 48) = world_level_config_ptr->world_level_id;
    *(std::unordered_map<unsigned int,BrickBreakerWorldLevelGroupConfig>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,BrickBreakerWorldLevelGroupConfig>::find(&config_mgr->world_level_group_config_map, (const std::unordered_map<unsigned int,BrickBreakerWorldLevelGroupConfig>::key_type *)(v3 + 48));
    __y._M_cur = std::unordered_map<unsigned int,BrickBreakerWorldLevelGroupConfig>::end(&config_mgr->world_level_group_config_map)._M_cur;
    if ( std::__detail::operator==<std::pair<unsigned int const,BrickBreakerWorldLevelGroupConfig>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,BrickBreakerWorldLevelGroupConfig>,false> *)(v3 + 96),
           &__y) )
    {
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/brick_breaker_activity.cpp",
        "tryUnlockSkillByFinishWorldLevel",
        607);
      v7 = common::milog::MiLogStream::operator<<<char [100],(char *[100])0>(
             &v28,
             (const char (*)[100])"[BrickBreaker] world_level_group_config_map find world_level_group_id failed, world_level_group_id:");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
      v9 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v8, (const char (*)[12])", level_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 80));
      common::milog::MiLogStream::~MiLogStream(&v28);
    }
    else
    {
      v10 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,BrickBreakerWorldLevelGroupConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,BrickBreakerWorldLevelGroupConfig>,false,false> *const)(v3 + 96));
      if ( !std::set<unsigned int>::empty(&v10->second.unlock_skill_set) )
      {
        __for_range = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,BrickBreakerWorldLevelGroupConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,BrickBreakerWorldLevelGroupConfig>,false,false> *const)(v3 + 96))->second.unlock_skill_set;
        __for_begin._M_node = std::set<unsigned int>::begin(__for_range)._M_node;
        __for_end._M_node = std::set<unsigned int>::end(__for_range)._M_node;
        while ( std::operator!=(&__for_begin, &__for_end) )
        {
          v11 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
          if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          *(_DWORD *)(v3 + 64) = *v11;
          if ( data::ActivityBrickBreakerExcelConfigMgrBase::findBrickBreakerSkillExcelConfig(
                 config_mgr,
                 *(_DWORD *)(v3 + 64)) )
          {
            *(std::map<unsigned int,unsigned int>::iterator *)(v3 + 128) = std::map<unsigned int,unsigned int>::find(
                                                                             &this->skill_map_,
                                                                             (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 64));
            __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,BrickBreakerWorldLevelGroupConfig>,false>::__node_type *)std::map<unsigned int,unsigned int>::end(&this->skill_map_)._M_node;
            if ( std::operator!=(
                   (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 128),
                   (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__y) )
            {
              common::milog::MiLogStream::create(
                &v28,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/player/activity/brick_breaker_activity.cpp",
                "tryUnlockSkillByFinishWorldLevel",
                625);
              v14 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                      &v28,
                      (const char (*)[42])"[BrickBreaker] skill is unlock, skill_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v14,
                (const unsigned int *)(v3 + 64));
              common::milog::MiLogStream::~MiLogStream(&v28);
            }
            else
            {
              v18 = 1;
              std::map<unsigned int,unsigned int>::emplace<unsigned int &,int>(
                &this->skill_map_,
                (unsigned int *)(v3 + 64),
                &v18,
                (unsigned int *)&this->skill_map_,
                v13);
              v15 = std::map<unsigned int,unsigned int>::operator[](
                      update_skill_map,
                      (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 64));
              v16 = v15;
              if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
              {
                __asan_report_store4(v15);
              }
              *v16 = 1;
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v27,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/activity/brick_breaker_activity.cpp",
              "tryUnlockSkillByFinishWorldLevel",
              619);
            v12 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
                    &v27,
                    (const char (*)[66])"[BrickBreaker] findBrickBreakerSkillExcelConfig failed, skill_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 64));
            common::milog::MiLogStream::~MiLogStream(&v27);
          }
          std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
        }
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/brick_breaker_activity.cpp",
      "tryUnlockSkillByFinishWorldLevel",
      600);
    v6 = common::milog::MiLogStream::operator<<<char [71],(char *[71])0>(
           &v28,
           (const char (*)[71])"[BrickBreaker] findBrickBreakerWorldLevelExcelConfig failed, level_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 80));
    common::milog::MiLogStream::~MiLogStream(&v28);
  }
  if ( v29 == (char *)v3 )
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
};

// Line 634: range 0000000014EF8F42-0000000014EF9588
void __fastcall BrickBreakerActivity::tryUpgradeSkillByFinishDungeonLevel(
        BrickBreakerActivity *const this,
        uint32_t level_id,
        std::map<unsigned int,unsigned int> *update_skill_map)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::_Rb_tree_const_iterator<unsigned int>::reference v6; // rdx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::pointer v9; // rdx
  uint32_t second; // ecx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::pointer v14; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::pointer v15; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::pointer v16; // rdx
  unsigned int v17; // r14d
  std::map<unsigned int,unsigned int>::mapped_type *v18; // rax
  unsigned int *v19; // rdx
  std::set<unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-150h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+28h] [rbp-148h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> __y; // [rsp+30h] [rbp-140h] BYREF
  const ActivityBrickBreakerExcelConfigMgr *config_mgr; // [rsp+38h] [rbp-138h]
  const std::set<unsigned int> *__for_range; // [rsp+40h] [rbp-130h]
  const data::BrickBreakerSkillExcelConfig *skill_config_ptr; // [rsp+48h] [rbp-128h]
  std::shared_ptr<Config> v27; // [rsp+50h] [rbp-120h] BYREF
  common::milog::MiLogStream v28; // [rsp+60h] [rbp-110h] BYREF
  common::milog::MiLogStream v29; // [rsp+80h] [rbp-F0h] BYREF
  common::milog::MiLogStream v30; // [rsp+A0h] [rbp-D0h] BYREF
  char v31[176]; // [rsp+C0h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 4 12 skill_id:641 48 4 12 level_id:633 64 8 26 upgrade_skill_set_iter:636 96 8 14 skill_iter:649";
  *(_QWORD *)(v3 + 16) = BrickBreakerActivity::tryUpgradeSkillByFinishDungeonLevel;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 48) = level_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v27);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v27)->design_config.txt_config_mgr.activity_brick_breaker_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v27);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::set<unsigned int>>::find(
                                                                                            &config_mgr->dungeon_level_skill_map,
                                                                                            (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v3 + 48));
  __y._M_cur = std::unordered_map<unsigned int,std::set<unsigned int>>::end(&config_mgr->dungeon_level_skill_map)._M_cur;
  if ( !std::__detail::operator==<std::pair<unsigned int const,std::set<unsigned int>>,false>(
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v3 + 64),
          &__y) )
  {
    __for_range = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v3 + 64))->second;
    __for_begin._M_node = std::set<unsigned int>::begin(__for_range)._M_node;
    __for_end._M_node = std::set<unsigned int>::end(__for_range)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v6 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v3 + 32) = *v6;
      skill_config_ptr = data::ActivityBrickBreakerExcelConfigMgrBase::findBrickBreakerSkillExcelConfig(
                           config_mgr,
                           *(_DWORD *)(v3 + 32));
      if ( skill_config_ptr )
      {
        *(std::map<unsigned int,unsigned int>::iterator *)(v3 + 96) = std::map<unsigned int,unsigned int>::find(
                                                                        &this->skill_map_,
                                                                        (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 32));
        __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false>::__node_type *)std::map<unsigned int,unsigned int>::end(&this->skill_map_)._M_node;
        if ( std::operator==(
               (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 96),
               (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__y) )
        {
          common::milog::MiLogStream::create(
            &v29,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/activity/brick_breaker_activity.cpp",
            "tryUpgradeSkillByFinishDungeonLevel",
            652);
          v8 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                 &v29,
                 (const char (*)[46])"[BrickBreaker] skill is not unlock, skill_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 32));
          common::milog::MiLogStream::~MiLogStream(&v29);
        }
        else
        {
          v9 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 96));
          if ( *(_BYTE *)(((unsigned __int64)&v9->second >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)v9 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v9->second >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          second = v9->second;
          if ( *(_BYTE *)(((unsigned __int64)&skill_config_ptr->max_level >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)skill_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&skill_config_ptr->max_level >> 3)
                                                                            + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          if ( second < skill_config_ptr->max_level )
          {
            v15 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 96));
            if ( *(_BYTE *)(((unsigned __int64)&v15->second >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)v15 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v15->second >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            ++v15->second;
            v16 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 96));
            if ( *(_BYTE *)(((unsigned __int64)&v16->second >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)v16 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v16->second >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            v17 = v16->second;
            v18 = std::map<unsigned int,unsigned int>::operator[](
                    update_skill_map,
                    (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 32));
            v19 = v18;
            if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
            {
              __asan_report_store4(v18);
            }
            *v19 = v17;
          }
          else
          {
            common::milog::MiLogStream::create(
              &v30,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/activity/brick_breaker_activity.cpp",
              "tryUpgradeSkillByFinishDungeonLevel",
              657);
            v11 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                    &v30,
                    (const char (*)[45])"[BrickBreaker] skill level is max, skill_id:");
            v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v11,
                    (const unsigned int *)(v3 + 32));
            v13 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v12, (const char (*)[9])", level:");
            v14 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 96));
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &v14->second);
            common::milog::MiLogStream::~MiLogStream(&v30);
          }
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v28,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/brick_breaker_activity.cpp",
          "tryUpgradeSkillByFinishDungeonLevel",
          646);
        v7 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
               &v28,
               (const char (*)[66])"[BrickBreaker] findBrickBreakerSkillExcelConfig failed, skill_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 32));
        common::milog::MiLogStream::~MiLogStream(&v28);
      }
      std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
    }
  }
  if ( v31 == (char *)v3 )
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

// Line 666: range 0000000014EF958A-0000000014EF9849
int32_t __cdecl BrickBreakerActivity::checkChosenSkillValid(
        BrickBreakerActivity *const this,
        const std::vector<unsigned int> *skill_vec)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v5; // rdx
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v6; // rax
  common::milog::MiLogStream *v7; // rax
  int32_t v8; // r14d
  int32_t result; // eax
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-E8h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-E0h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+28h] [rbp-D8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-D0h] BYREF
  char v14[176]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 4 12 skill_id:668 48 48 13 skill_set:667";
  *(_QWORD *)(v2 + 16) = BrickBreakerActivity::checkChosenSkillValid;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862723] = -202116109;
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 48));
  __for_range = skill_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(skill_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(skill_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v5 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 32) = *v5;
    v6 = std::set<unsigned int>::insert(
           (std::set<unsigned int> *const)(v2 + 48),
           (const std::set<unsigned int>::value_type *)(v2 + 32));
    if ( !v6.second )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/brick_breaker_activity.cpp",
        "checkChosenSkillValid",
        672);
      v7 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
             &v13,
             (const char (*)[42])"[BrickBreaker] duplicate chosen skill_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
      goto LABEL_14;
    }
    if ( !common::tools::MiscUtils::isContains<std::map<unsigned int,unsigned int>,unsigned int>(
            &this->skill_map_,
            (const unsigned int *)(v2 + 32)) )
    {
      v8 = -1;
      goto LABEL_14;
    }
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  v8 = 0;
LABEL_14:
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 48));
  result = v8;
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 684: range 0000000014EF984A-0000000014EF9AB2
void __cdecl BrickBreakerActivity::unlockDefaultSkill(BrickBreakerActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::_Rb_tree_const_iterator<unsigned int>::reference v4; // rdx
  int *v5; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >,bool> v6; // rax
  common::milog::MiLogStream *v7; // rax
  int v8; // [rsp+14h] [rbp-ACh] BYREF
  std::set<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-A8h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-A0h] BYREF
  const std::set<unsigned int> *__for_range; // [rsp+28h] [rbp-98h]
  std::shared_ptr<Config> v12; // [rsp+30h] [rbp-90h] BYREF
  common::milog::MiLogStream v13; // [rsp+40h] [rbp-80h] BYREF
  char v14[96]; // [rsp+60h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 12 skill_id:685";
  *(_QWORD *)(v1 + 16) = BrickBreakerActivity::unlockDefaultSkill;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v12);
  __for_range = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v12)->design_config.txt_config_mgr.activity_brick_breaker_config_mgr.default_unlock_skill_set;
  std::shared_ptr<Config>::~shared_ptr(&v12);
  __for_begin._M_node = std::set<unsigned int>::begin(__for_range)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(__for_range)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v4 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v1 + 32) = *v4;
    v8 = 1;
    v6 = std::map<unsigned int,unsigned int>::emplace<unsigned int &,int>(
           &this->skill_map_,
           (unsigned int *)(v1 + 32),
           &v8,
           (unsigned int *)&this->skill_map_,
           v5);
    if ( !v6.second )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/brick_breaker_activity.cpp",
        "unlockDefaultSkill",
        689);
      v7 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
             &v13,
             (const char (*)[50])"[BrickBreaker] skill is unlock already, skill_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v1 + 32));
      common::milog::MiLogStream::~MiLogStream(&v13);
    }
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 695: range 0000000014EF9AB4-0000000014EFA501
void __fastcall BrickBreakerActivity::updateStageState(
        BrickBreakerActivity *const this,
        bool is_world_level,
        uint32_t level_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::tuple<bool,bool,bool,bool> > >::pointer v11; // rax
  std::__tuple_element_t_39 *v12; // rax
  _BYTE *v13; // rdx
  char v14; // al
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::tuple<bool,bool,bool,bool> > >::pointer v15; // rax
  std::__tuple_element_t_39 *v16; // rax
  _BYTE *v17; // rdx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v25; // rax
  common::milog::MiLogStream *v26; // r14
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v27; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::tuple<bool,bool,bool,bool> > >::pointer v28; // rax
  std::__tuple_element_t_9 *v29; // rax
  _BYTE *v30; // rdx
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::tuple<bool,bool,bool,bool> > >::pointer v31; // rax
  std::__tuple_element_t_9 *v32; // rax
  _BYTE *v33; // rdx
  common::milog::MiLogStream *v34; // r14
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,BrickBreakerWorldLevelGroupConfig>,false> __y; // [rsp+18h] [rbp-108h] BYREF
  const ActivityBrickBreakerExcelConfigMgr *config_mgr; // [rsp+20h] [rbp-100h]
  const data::BrickBreakerWorldLevelExcelConfig *world_level_config_ptr; // [rsp+30h] [rbp-F0h]
  const BrickBreakerWorldLevelGroupConfig *level_group_config; // [rsp+38h] [rbp-E8h]
  std::shared_ptr<Config> v44; // [rsp+40h] [rbp-E0h] BYREF
  common::milog::MiLogStream v45; // [rsp+50h] [rbp-D0h] BYREF
  char v46[176]; // [rsp+70h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v46;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 4 24 world_level_group_id:705 48 4 12 level_id:694 64 8 21 stage_config_iter:735 96 8 14 stage_iter:742";
  *(_QWORD *)(v3 + 16) = BrickBreakerActivity::updateStageState;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 48) = level_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v44);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v44)->design_config.txt_config_mgr.activity_brick_breaker_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v44);
  if ( is_world_level )
  {
    world_level_config_ptr = data::ActivityBrickBreakerExcelConfigMgrBase::findBrickBreakerWorldLevelExcelConfig(
                               config_mgr,
                               *(_DWORD *)(v3 + 48));
    if ( world_level_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&world_level_config_ptr->world_level_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)world_level_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&world_level_config_ptr->world_level_id >> 3)
                                                                              + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v3 + 32) = world_level_config_ptr->world_level_id;
      *(std::unordered_map<unsigned int,BrickBreakerWorldLevelGroupConfig>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,BrickBreakerWorldLevelGroupConfig>::find(&config_mgr->world_level_group_config_map, (const std::unordered_map<unsigned int,BrickBreakerWorldLevelGroupConfig>::key_type *)(v3 + 32));
      __y._M_cur = std::unordered_map<unsigned int,BrickBreakerWorldLevelGroupConfig>::end(&config_mgr->world_level_group_config_map)._M_cur;
      if ( std::__detail::operator==<std::pair<unsigned int const,BrickBreakerWorldLevelGroupConfig>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,BrickBreakerWorldLevelGroupConfig>,false> *)(v3 + 64),
             &__y) )
      {
        common::milog::MiLogStream::create(
          &v45,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/brick_breaker_activity.cpp",
          "updateStageState",
          709);
        v7 = common::milog::MiLogStream::operator<<<char [100],(char *[100])0>(
               &v45,
               (const char (*)[100])"[BrickBreaker] world_level_group_config_map find world_level_group_id failed, world_level_group_id:");
        v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 32));
        v9 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v8, (const char (*)[12])", level_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v45);
      }
      else
      {
        level_group_config = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,BrickBreakerWorldLevelGroupConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,BrickBreakerWorldLevelGroupConfig>,false,false> *const)(v3 + 64))->second;
        *(std::map<unsigned int,std::tuple<bool,bool,bool,bool>>::iterator *)(v3 + 96) = std::map<unsigned int,std::tuple<bool,bool,bool,bool>>::find(
                                                                                           &this->unlock_stage_map_,
                                                                                           &level_group_config->stage_id);
        __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,BrickBreakerWorldLevelGroupConfig>,false>::__node_type *)std::map<unsigned int,std::tuple<bool,bool,bool,bool>>::end(&this->unlock_stage_map_)._M_node;
        if ( std::operator==(
               (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::tuple<bool,bool,bool,bool> > >::_Self *)(v3 + 96),
               (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::tuple<bool,bool,bool,bool> > >::_Self *)&__y) )
        {
          common::milog::MiLogStream::create(
            &v45,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/brick_breaker_activity.cpp",
            "updateStageState",
            716);
          v10 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                  &v45,
                  (const char (*)[53])"[BrickBreaker] stage is not unlock failed, stage_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &level_group_config->stage_id);
          common::milog::MiLogStream::~MiLogStream(&v45);
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&level_group_config->pre_level_group_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)level_group_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_group_config->pre_level_group_id >> 3)
                                                                              + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          if ( !level_group_config->pre_level_group_id )
            goto LABEL_20;
          v11 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::tuple<bool,bool,bool,bool>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::tuple<bool,bool,bool,bool> > > *const)(v3 + 96));
          v12 = std::get<2ul,bool,bool,bool,bool>(&v11->second);
          v13 = v12;
          if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
            && ((unsigned __int8)v12 & 7) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load1(v12);
          }
          if ( *v13 != 1 )
            v14 = 1;
          else
LABEL_20:
            v14 = 0;
          if ( v14 )
          {
            v15 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::tuple<bool,bool,bool,bool>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::tuple<bool,bool,bool,bool> > > *const)(v3 + 96));
            v16 = std::get<2ul,bool,bool,bool,bool>(&v15->second);
            v17 = v16;
            if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
              && ((unsigned __int8)v16 & 7) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
            {
              __asan_report_store1(v16);
            }
            *v17 = 1;
            BaseActivity::updateAllConds(this);
            common::milog::MiLogStream::create(
              &v45,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/activity/brick_breaker_activity.cpp",
              "updateStageState",
              724);
            v18 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                    &v45,
                    (const char (*)[51])"[BrickBreaker] stage world level finish, stage_id:");
            v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v18,
                    &level_group_config->stage_id);
            v20 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v19,
                    (const char (*)[12])", level_id:");
            v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v20,
                    (const unsigned int *)(v3 + 48));
            v22 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                    v21,
                    (const char (*)[18])", level_group_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v3 + 32));
            common::milog::MiLogStream::~MiLogStream(&v45);
          }
        }
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v45,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/brick_breaker_activity.cpp",
        "updateStageState",
        702);
      v6 = common::milog::MiLogStream::operator<<<char [71],(char *[71])0>(
             &v45,
             (const char (*)[71])"[BrickBreaker] findBrickBreakerWorldLevelExcelConfig failed, level_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v45);
    }
  }
  else if ( data::ActivityBrickBreakerExcelConfigMgrBase::findBrickBreakerDungeonLevelExcelConfig(
              config_mgr,
              *(_DWORD *)(v3 + 48)) )
  {
    *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                    &config_mgr->dungeon_level_to_stage_map,
                                                                                    (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v3 + 48));
    __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,BrickBreakerWorldLevelGroupConfig>,false>::__node_type *)std::unordered_map<unsigned int,unsigned int>::end(&config_mgr->dungeon_level_to_stage_map)._M_cur;
    if ( std::__detail::operator==<std::pair<unsigned int const,unsigned int>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v3 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)&__y) )
    {
      common::milog::MiLogStream::create(
        &v45,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/brick_breaker_activity.cpp",
        "updateStageState",
        738);
      v24 = common::milog::MiLogStream::operator<<<char [71],(char *[71])0>(
              &v45,
              (const char (*)[71])"[BrickBreaker] dungeon_level_to_stage_map find level failed, level_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v45);
    }
    else
    {
      v25 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v3 + 64));
      *(std::map<unsigned int,std::tuple<bool,bool,bool,bool>>::iterator *)(v3 + 96) = std::map<unsigned int,std::tuple<bool,bool,bool,bool>>::find(
                                                                                         &this->unlock_stage_map_,
                                                                                         &v25->second);
      __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,BrickBreakerWorldLevelGroupConfig>,false>::__node_type *)std::map<unsigned int,std::tuple<bool,bool,bool,bool>>::end(&this->unlock_stage_map_)._M_node;
      if ( std::operator==(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::tuple<bool,bool,bool,bool> > >::_Self *)(v3 + 96),
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::tuple<bool,bool,bool,bool> > >::_Self *)&__y) )
      {
        common::milog::MiLogStream::create(
          &v45,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/brick_breaker_activity.cpp",
          "updateStageState",
          745);
        v26 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                &v45,
                (const char (*)[53])"[BrickBreaker] stage is not unlock failed, stage_id:");
        v27 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v3 + 64));
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &v27->second);
        common::milog::MiLogStream::~MiLogStream(&v45);
      }
      else
      {
        v28 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::tuple<bool,bool,bool,bool>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::tuple<bool,bool,bool,bool> > > *const)(v3 + 96));
        v29 = std::get<3ul,bool,bool,bool,bool>(&v28->second);
        v30 = v29;
        if ( *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) != 0
          && ((unsigned __int8)v29 & 7) >= *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(v29);
        }
        if ( *v30 != 1 )
        {
          v31 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::tuple<bool,bool,bool,bool>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::tuple<bool,bool,bool,bool> > > *const)(v3 + 96));
          v32 = std::get<3ul,bool,bool,bool,bool>(&v31->second);
          v33 = v32;
          if ( *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) != 0
            && ((unsigned __int8)v32 & 7) >= *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) )
          {
            __asan_report_store1(v32);
          }
          *v33 = 1;
          BaseActivity::updateAllConds(this);
          common::milog::MiLogStream::create(
            &v45,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/brick_breaker_activity.cpp",
            "updateStageState",
            752);
          v34 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                  &v45,
                  (const char (*)[53])"[BrickBreaker] stage dungeon level finish, stage_id:");
          v35 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v3 + 64));
          v36 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, &v35->second);
          v37 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v36, (const char (*)[12])", level_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream(&v45);
        }
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v45,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/brick_breaker_activity.cpp",
      "updateStageState",
      732);
    v23 = common::milog::MiLogStream::operator<<<char [73],(char *[73])0>(
            &v45,
            (const char (*)[73])"[BrickBreaker] findBrickBreakerDungeonLevelExcelConfig failed, level_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v45);
  }
  if ( v46 == (char *)v3 )
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

// Line 758: range 0000000014EFA502-0000000014EFA787
__int64 __fastcall BrickBreakerActivity::getAvatarAndSkillVec(
        BrickBreakerActivity *const this,
        uint32_t level_id,
        bool is_dungeon,
        std::vector<unsigned int> *avatar_vec,
        std::vector<unsigned int> *skill_vec)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r13
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,BrickBreakerLevelData> >::pointer v9; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,BrickBreakerLevelData> >::pointer v10; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,BrickBreakerLevelData> >::_Self __y; // [rsp+28h] [rbp-98h] BYREF
  BrickBreakerLevelData *level_data_0; // [rsp+30h] [rbp-90h]
  BrickBreakerLevelData *level_data; // [rsp+38h] [rbp-88h]
  char v17[128]; // [rsp+40h] [rbp-80h] BYREF

  v5 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 4 12 level_id:757 64 8 8 iter:776";
  *(_QWORD *)(v5 + 16) = BrickBreakerActivity::getAvatarAndSkillVec;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -202116352;
  *(_DWORD *)(v5 + 48) = level_id;
  if ( is_dungeon )
  {
    *(std::map<unsigned int,BrickBreakerLevelData>::iterator *)(v5 + 64) = std::map<unsigned int,BrickBreakerLevelData>::find(
                                                                             &this->dungeon_level_map_,
                                                                             (const std::map<unsigned int,BrickBreakerLevelData>::key_type *)(v5 + 48));
    __y._M_node = std::map<unsigned int,BrickBreakerLevelData>::end(&this->dungeon_level_map_)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,BrickBreakerLevelData> >::_Self *)(v5 + 64),
           &__y) )
    {
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v9 = std::_Rb_tree_iterator<std::pair<unsigned int const,BrickBreakerLevelData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,BrickBreakerLevelData> > *const)(v5 + 64));
      level_data = &v9->second;
      std::vector<unsigned int>::operator=(avatar_vec, &v9->second.chosen_avatar_vec);
      std::vector<unsigned int>::operator=(skill_vec, &level_data->chosen_skill_vec);
      result = 0LL;
    }
  }
  else
  {
    *(std::map<unsigned int,BrickBreakerLevelData>::iterator *)(v5 + 64) = std::map<unsigned int,BrickBreakerLevelData>::find(
                                                                             &this->world_level_map_,
                                                                             (const std::map<unsigned int,BrickBreakerLevelData>::key_type *)(v5 + 48));
    __y._M_node = std::map<unsigned int,BrickBreakerLevelData>::end(&this->world_level_map_)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,BrickBreakerLevelData> >::_Self *)(v5 + 64),
           &__y) )
    {
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v10 = std::_Rb_tree_iterator<std::pair<unsigned int const,BrickBreakerLevelData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,BrickBreakerLevelData> > *const)(v5 + 64));
      level_data_0 = &v10->second;
      std::vector<unsigned int>::operator=(avatar_vec, &v10->second.chosen_avatar_vec);
      std::vector<unsigned int>::operator=(skill_vec, &level_data_0->chosen_skill_vec);
      result = 0LL;
    }
  }
  if ( v17 == (char *)v5 )
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

// Line 793: range 0000000014EFA788-0000000014EFA91A
__int64 __fastcall BrickBreakerActivity::getBrickBreakerSkillLevel(BrickBreakerActivity *const this, uint32_t skill_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::pointer v5; // rdx
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self __y; // [rsp+18h] [rbp-88h] BYREF
  char v8[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 skill_id:792 64 8 8 iter:794";
  *(_QWORD *)(v2 + 16) = BrickBreakerActivity::getBrickBreakerSkillLevel;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = skill_id;
  *(std::map<unsigned int,unsigned int>::iterator *)(v2 + 64) = std::map<unsigned int,unsigned int>::find(
                                                                  &this->skill_map_,
                                                                  (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,unsigned int>::end(&this->skill_map_)._M_node;
  if ( std::operator!=(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 64),
         &__y) )
  {
    v5 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v5->second >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v5 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v5->second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    result = v5->second;
  }
  else
  {
    result = 0LL;
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

// Line 803: range 0000000014EFA91C-0000000014EFAE13
int32_t __cdecl BrickBreakerActivity::checkAndReviveAvatar(
        BrickBreakerActivity *const this,
        const std::vector<long unsigned int> *avatar_guid_vec)
{
  int32_t v2; // r14d
  __m128i v3; // xmm0
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  unsigned __int64 v7; // rax
  PlayerAvatarComp *AvatarComp; // rax
  common::milog::MiLogStream *v9; // rax
  int v10; // r15d
  std::pair<std::__detail::_Node_iterator<long unsigned int,true,false>,bool> v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  Avatar *v18; // rax
  Avatar *v19; // rax
  int32_t result; // eax
  std::vector<long unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-138h] BYREF
  std::vector<long unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-130h] BYREF
  const std::vector<long unsigned int> *__for_range; // [rsp+38h] [rbp-128h]
  std::shared_ptr<Config> v24; // [rsp+40h] [rbp-120h] BYREF
  common::milog::MiLogStream v25; // [rsp+50h] [rbp-110h] BYREF
  char v26[240]; // [rsp+70h] [rbp-F0h] BYREF

  v4 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 8 8 guid:806 64 16 14 avatar_ptr:808 96 56 12 guid_set:805";
  *(_QWORD *)(v4 + 16) = BrickBreakerActivity::checkAndReviveAvatar;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -219021312;
  v6[536862724] = -218103808;
  v6[536862725] = -202116109;
  std::unordered_set<unsigned long>::unordered_set((std::unordered_set<long unsigned int> *const)(v4 + 96));
  __for_range = avatar_guid_vec;
  __for_begin._M_current = std::vector<unsigned long>::begin(avatar_guid_vec)._M_current;
  __for_end._M_current = std::vector<unsigned long>::end(avatar_guid_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned long const*,std::vector<unsigned long>>(&__for_begin, &__for_end) )
  {
    v7 = (unsigned __int64)__gnu_cxx::__normal_iterator<unsigned long const*,std::vector<unsigned long>>::operator*(&__for_begin);
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      v7 = __asan_report_load8();
    *(_QWORD *)(v4 + 32) = *(_QWORD *)v7;
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    AvatarComp = Player::getAvatarComp(this->player_);
    PlayerAvatarComp::findAvatar((const PlayerAvatarComp *const)(v4 + 64), (uint64_t)AvatarComp);
    if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v4 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/brick_breaker_activity.cpp",
        "checkAndReviveAvatar",
        811);
      v9 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
             &v25,
             (const char (*)[26])"findAvatar nullptr, guid:");
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v9, (const unsigned __int64 *)(v4 + 32));
      common::milog::MiLogStream::~MiLogStream(&v25);
      v2 = -1;
      v10 = 0;
    }
    else
    {
      v11 = std::unordered_set<unsigned long>::insert(
              (std::unordered_set<long unsigned int> *const)(v4 + 96),
              (const std::unordered_set<long unsigned int>::value_type *)(v4 + 32));
      if ( !v11.second )
      {
        common::milog::MiLogStream::create(
          &v25,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/brick_breaker_activity.cpp",
          "checkAndReviveAvatar",
          816);
        v12 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                &v25,
                (const char (*)[34])"duplicate guid in guid_vec, guid:");
        v13 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                v12,
                (const unsigned __int64 *)(v4 + 32));
        v14 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v13, (const char (*)[12])", guid_vec:");
        common::milog::MiLogStream::operator<<<unsigned long>(v14, avatar_guid_vec);
        common::milog::MiLogStream::~MiLogStream(&v25);
        v2 = -1;
        v10 = 0;
      }
      else
      {
        v15 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
        if ( Creature::getLifeState(v15) == LIFE_DEAD )
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v24);
          v16 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v24);
          *(float *)v3.m128i_i32 = ConstValueExcelConfigMgr::getNoHurtDieSubHpPercent(&v16->design_config.txt_config_mgr.const_value_config_mgr);
          std::shared_ptr<Config>::~shared_ptr(&v24);
          v17 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
          v3 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v3));
          Creature::setCurHpPercent(v17, *(float *)v3.m128i_i32, CHANGE_HP_ADD_REVIVE, 1);
          v18 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
          Avatar::clearSpeed(v18);
          v19 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
          Avatar::setLifeAlive(v19, 0x66u, 0LL, 1);
        }
        v10 = 1;
      }
    }
    std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v4 + 64));
    if ( v10 != 1 )
      goto LABEL_20;
    __gnu_cxx::__normal_iterator<unsigned long const*,std::vector<unsigned long>>::operator++(&__for_begin);
  }
  v2 = 0;
LABEL_20:
  std::unordered_set<unsigned long>::~unordered_set((std::unordered_set<long unsigned int> *const)(v4 + 96));
  result = v2;
  if ( v26 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 831: range 0000000014EFAE14-0000000014EFBF25
int32_t __cdecl BrickBreakerActivity::onSingleStartBrickBreakerReq(
        BrickBreakerActivity *const this,
        const proto::SingleStartBrickBreakerReq *req,
        proto::SingleStartBrickBreakerRsp *rsp_0)
{
  int32_t v3; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  const google::protobuf::RepeatedField<unsigned int> *v7; // rax
  uint32_t v8; // eax
  const google::protobuf::RepeatedField<unsigned int> *v9; // rax
  const google::protobuf::RepeatedField<unsigned int> *v10; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v11; // rdx
  uint32_t AvatarComp; // eax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  int v15; // r15d
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdx
  common::milog::MiLogStream *v18; // r14
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rdx
  data::ElementType v21; // eax
  unsigned int *M_current; // r14
  std::vector<unsigned int>::iterator v23; // rax
  std::set<unsigned int>::size_type v24; // r14
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  unsigned int *v28; // rdx
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  bool is_dungeon; // r14
  uint32_t v33; // esi
  common::milog::MiLogStream *v34; // r14
  uint32_t v35; // esi
  uint32_t v36; // esi
  uint32_t v37; // ecx
  BrickBreakerActivity::CurPlayMode v38; // esi
  Scene *v39; // r14
  uint32_t Uid; // eax
  common::milog::MiLogStream *v41; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v42; // rax
  common::milog::MiLogStream *v43; // r14
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rcx
  int32_t result; // eax
  data::ElementType value; // [rsp+24h] [rbp-26Ch] BYREF
  int32_t ret; // [rsp+28h] [rbp-268h]
  unsigned int skill_id; // [rsp+2Ch] [rbp-264h]
  std::vector<unsigned int>::iterator __for_begin; // [rsp+30h] [rbp-260h] BYREF
  std::vector<unsigned int>::iterator __for_begin_0; // [rsp+38h] [rbp-258h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+40h] [rbp-250h] BYREF
  const ActivityBrickBreakerExcelConfigMgr *config_mgr; // [rsp+48h] [rbp-248h]
  std::vector<unsigned int> *__for_range; // [rsp+50h] [rbp-240h]
  std::vector<unsigned int> *__for_range_0; // [rsp+58h] [rbp-238h]
  common::milog::MiLogStream v57; // [rsp+60h] [rbp-230h] BYREF
  common::milog::MiLogStream v58; // [rsp+80h] [rbp-210h] BYREF
  char v59[496]; // [rsp+A0h] [rbp-1F0h] BYREF

  v4 = (unsigned __int64)v59;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(448LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "8 32 4 13 avatar_id:842 48 12 7 pos:889 80 12 7 rot:890 112 16 13 scene_ptr:883 144 24 21 chosen"
                        "_avatar_vec:839 208 24 20 chosen_skill_vec:839 272 48 16 skill_id_set:858 352 56 16 ban_elem_set:838";
  *(_QWORD *)(v4 + 16) = BrickBreakerActivity::onSingleStartBrickBreakerReq;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61956;
  v6[536862721] = 0x4000000;
  v6[536862722] = 62194;
  v6[536862722] = 0x4000000;
  v6[536862723] = 62194;
  v6[536862724] = 62194;
  v6[536862725] = -218959360;
  v6[536862726] = 62194;
  v6[536862727] = -218959360;
  v6[536862728] = 62194;
  v6[536862730] = -218959118;
  v6[536862732] = -218103808;
  v6[536862733] = -202116109;
  v7 = proto::SingleStartBrickBreakerReq::chosen_avatar_list(req);
  if ( google::protobuf::RepeatedField<unsigned int>::empty(v7) )
  {
    common::milog::MiLogStream::create(
      &v58,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/brick_breaker_activity.cpp",
      "onSingleStartBrickBreakerReq",
      834);
    common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
      &v58,
      (const char (*)[40])"[BrickBreaker] chosen_avatar_list empty");
    common::milog::MiLogStream::~MiLogStream(&v58);
    v3 = -1;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v4 + 112));
    config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 112))->design_config.txt_config_mgr.activity_brick_breaker_config_mgr;
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 112));
    v8 = proto::SingleStartBrickBreakerReq::level_id(req);
    ActivityBrickBreakerExcelConfigMgr::findBanElemSetByLevelId(
      (std::unordered_set<data::ElementType> *)(v4 + 352),
      config_mgr,
      v8);
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v4 + 144));
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v4 + 208));
    v9 = proto::SingleStartBrickBreakerReq::chosen_skill_list(req);
    common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(v9, (std::vector<unsigned int> *)(v4 + 208));
    v10 = proto::SingleStartBrickBreakerReq::chosen_avatar_list(req);
    common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(v10, (std::vector<unsigned int> *)(v4 + 144));
    __for_range = (std::vector<unsigned int> *)(v4 + 144);
    __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v4 + 144))._M_current;
    __for_begin_0._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v4 + 144))._M_current;
    while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_begin_0) )
    {
      v11 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v4 + 32) = *v11;
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      AvatarComp = (unsigned int)Player::getAvatarComp(this->player_);
      PlayerAvatarComp::findFormalAvatarByAvatarId((const PlayerAvatarComp *const)(v4 + 112), AvatarComp);
      if ( std::operator==<FormalAvatar>(0LL, (const std::shared_ptr<FormalAvatar> *)(v4 + 112)) )
      {
        common::milog::MiLogStream::create(
          &v58,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/brick_breaker_activity.cpp",
          "onSingleStartBrickBreakerReq",
          848);
        v13 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                &v58,
                (const char (*)[41])"[BrickBreaker] formal_avatar_ptr nullptr");
        v14 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v13, (const char (*)[13])", avatar_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v4 + 32));
        common::milog::MiLogStream::~MiLogStream(&v58);
        v3 = -1;
        v15 = 0;
      }
      else
      {
        v16 = (unsigned __int64)std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 112));
        if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
          v16 = __asan_report_load8();
        v17 = *(_QWORD *)v16 + 280LL;
        if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
          v16 = __asan_report_load8();
        value = (*(unsigned int (__fastcall **)(unsigned __int64))v17)(v16);
        if ( common::tools::MiscUtils::isContains<std::unordered_set<data::ElementType>,data::ElementType>(
               (std::unordered_set<data::ElementType> *)(v4 + 352),
               &value) )
        {
          common::milog::MiLogStream::create(
            &v58,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/brick_breaker_activity.cpp",
            "onSingleStartBrickBreakerReq",
            853);
          v18 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                  &v58,
                  (const char (*)[50])"[BrickBreaker] formal_avatar_ptr elem fail, elem:");
          v19 = (unsigned __int64)std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 112));
          if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
            v19 = __asan_report_load8();
          v20 = *(_QWORD *)v19 + 280LL;
          if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
            v19 = __asan_report_load8();
          v21 = (*(unsigned int (__fastcall **)(unsigned __int64))v20)(v19);
          __for_end._M_current = (unsigned int *)data::enumValToStr(v21);
          common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v18, (const char *const *)&__for_end);
          common::milog::MiLogStream::~MiLogStream(&v58);
          v3 = -1;
          v15 = 0;
        }
        else
        {
          v15 = 1;
        }
      }
      std::shared_ptr<FormalAvatar>::~shared_ptr((std::shared_ptr<FormalAvatar> *const)(v4 + 112));
      if ( v15 != 1 )
        goto LABEL_65;
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v4 + 208))._M_current;
    v23._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v4 + 208))._M_current;
    std::set<unsigned int>::set<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>>(
      (std::set<unsigned int> *const)(v4 + 272),
      v23,
      (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current);
    v24 = std::set<unsigned int>::size((const std::set<unsigned int> *const)(v4 + 272));
    if ( v24 == std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v4 + 208)) )
    {
      __for_range_0 = (std::vector<unsigned int> *)(v4 + 208);
      __for_begin_0._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v4 + 208))._M_current;
      __for_end._M_current = std::vector<unsigned int>::end(__for_range_0)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin_0, &__for_end) )
      {
        v28 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin_0);
        if ( *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v28 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        skill_id = *v28;
        if ( !(unsigned int)BrickBreakerActivity::getBrickBreakerSkillLevel(this, skill_id) )
        {
          common::milog::MiLogStream::create(
            &v58,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/brick_breaker_activity.cpp",
            "onSingleStartBrickBreakerReq",
            868);
          v29 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                  &v58,
                  (const char (*)[40])"BrickBreaker chosen_skill_vec invalid, ");
          v30 = common::milog::MiLogStream::operator<<<unsigned int>(v29, (const std::vector<unsigned int> *)(v4 + 208));
          v31 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v30,
                  (const char (*)[14])", skill_map_:");
          common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(v31, &this->skill_map_);
          common::milog::MiLogStream::~MiLogStream(&v58);
          v3 = -1;
          goto LABEL_64;
        }
        __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin_0);
      }
      is_dungeon = proto::SingleStartBrickBreakerReq::is_dungeon(req);
      v33 = proto::SingleStartBrickBreakerReq::level_id(req);
      ret = BrickBreakerActivity::singleBrickBreakerGame(
              this,
              v33,
              is_dungeon,
              0,
              (const std::vector<unsigned int> *)(v4 + 144));
      if ( ret )
      {
        common::milog::MiLogStream::create(
          &v57,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/brick_breaker_activity.cpp",
          "onSingleStartBrickBreakerReq",
          875);
        v34 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                &v57,
                (const char (*)[48])"[BrickBreaker] singleBrickBreakerGame fail, req");
        google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v58, &req->google::protobuf::Message);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v34, (const std::string *)&v58);
        std::string::~string(&v58);
        common::milog::MiLogStream::~MiLogStream(&v57);
        v3 = ret;
      }
      else
      {
        if ( proto::SingleStartBrickBreakerReq::is_dungeon(req) )
        {
          v35 = proto::SingleStartBrickBreakerReq::level_id(req);
          BrickBreakerActivity::onDungeonLevelStart(
            this,
            v35,
            (const std::vector<unsigned int> *)(v4 + 144),
            (const std::vector<unsigned int> *)(v4 + 208));
        }
        else
        {
          v36 = proto::SingleStartBrickBreakerReq::level_id(req);
          BrickBreakerActivity::onWorldLevelStart(
            this,
            v36,
            (const std::vector<unsigned int> *)(v4 + 144),
            (const std::vector<unsigned int> *)(v4 + 208));
        }
        v37 = proto::SingleStartBrickBreakerReq::level_id(req);
        if ( *(_BYTE *)(((unsigned __int64)&this->cur_level_id_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_level_id_ >> 3)
                                                               + 0x7FFF8000) )
        {
          __asan_report_store4(&this->cur_level_id_);
        }
        this->cur_level_id_ = v37;
        if ( proto::SingleStartBrickBreakerReq::is_dungeon(req) )
          v38 = IN_DUNGEON;
        else
          v38 = IN_SINGLE;
        if ( *(_BYTE *)(((unsigned __int64)&this->cur_play_mode_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->cur_play_mode_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&this->cur_play_mode_);
        }
        this->cur_play_mode_ = v38;
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Player::getSceneComp(this->player_);
        PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v4 + 112));
        if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v4 + 112)) )
        {
          common::milog::MiLogStream::create(
            &v58,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/brick_breaker_activity.cpp",
            "onSingleStartBrickBreakerReq",
            886);
          common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
            &v58,
            (const char (*)[41])"[BrickBreaker] player getCurScene failed");
          common::milog::MiLogStream::~MiLogStream(&v58);
          v3 = ret;
        }
        else
        {
          Vector3::Vector3((Vector3 *const)(v4 + 48), 0.0, 0.0, 0.0);
          Vector3::Vector3((Vector3 *const)(v4 + 80), 0.0, 0.0, 0.0);
          v39 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 112));
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          Uid = Player::getUid(this->player_);
          if ( Scene::getPlayerLocation(v39, Uid, (Vector3 *)(v4 + 48), (Vector3 *)(v4 + 80)) )
          {
            common::milog::MiLogStream::create(
              &v58,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/brick_breaker_activity.cpp",
              "onSingleStartBrickBreakerReq",
              893);
            v41 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
                    &v58,
                    (const char (*)[58])"[BrickBreaker] player getPlayerLocation failed, scene_id:");
            v42 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 112));
            value = Scene::getSceneId(v42);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v41, (const unsigned int *)&value);
            common::milog::MiLogStream::~MiLogStream(&v58);
            v3 = ret;
          }
          else
          {
            if ( *(char *)(((unsigned __int64)&this->start_pos_ >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)((((unsigned __int64)&this->start_pos_.z + 3) >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)this + 115) & 7) >= *(_BYTE *)((((unsigned __int64)&this->start_pos_.z + 3) >> 3)
                                                                 + 0x7FFF8000) )
            {
              __asan_report_store_n(&this->start_pos_, 12LL);
            }
            this->start_pos_ = *(Vector3 *)(v4 + 48);
            if ( (((unsigned __int8)this + 116) & 7) >= *(_BYTE *)(((unsigned __int64)&this->start_rot_ >> 3)
                                                                 + 0x7FFF8000)
              && *(_BYTE *)(((unsigned __int64)&this->start_rot_ >> 3) + 0x7FFF8000) != 0
              || *(_BYTE *)((((unsigned __int64)&this->start_rot_.z + 3) >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)this + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&this->start_rot_.z + 3) >> 3)
                                                                 + 0x7FFF8000) )
            {
              __asan_report_store_n(&this->start_rot_, 12LL);
            }
            this->start_rot_ = *(Vector3 *)(v4 + 80);
            common::milog::MiLogStream::create(
              &v58,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/activity/brick_breaker_activity.cpp",
              "onSingleStartBrickBreakerReq",
              898);
            v43 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                    &v58,
                    (const char (*)[31])"[BrickBreaker] start level_id:");
            *(_DWORD *)(v4 + 32) = proto::SingleStartBrickBreakerReq::level_id(req);
            v44 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v43,
                    (const unsigned int *)(v4 + 32));
            v45 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                    v44,
                    (const char (*)[18])", cur_play_mode_:");
            if ( *(_BYTE *)(((unsigned __int64)&this->cur_play_mode_ >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->cur_play_mode_ >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            value = this->cur_play_mode_;
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v45, (const unsigned int *)&value);
            common::milog::MiLogStream::~MiLogStream(&v58);
            v3 = 0;
          }
        }
        std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v4 + 112));
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v58,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/brick_breaker_activity.cpp",
        "onSingleStartBrickBreakerReq",
        861);
      v25 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
              &v58,
              (const char (*)[43])"BrickBreaker chosen_skill_vec duplicated, ");
      v26 = common::milog::MiLogStream::operator<<<unsigned int>(v25, (const std::vector<unsigned int> *)(v4 + 208));
      v27 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v26, (const char (*)[14])", skill_map_:");
      common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(v27, &this->skill_map_);
      common::milog::MiLogStream::~MiLogStream(&v58);
      v3 = -1;
    }
LABEL_64:
    std::set<unsigned int>::~set((std::set<unsigned int> *const)(v4 + 272));
LABEL_65:
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v4 + 208));
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v4 + 144));
    std::unordered_set<data::ElementType>::~unordered_set((std::unordered_set<data::ElementType> *const)(v4 + 352));
  }
  result = v3;
  if ( v59 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8028) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0LL;
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
  }
  return result;
};

// Line 903: range 0000000014EFBF26-0000000014EFC47B
int32_t __cdecl BrickBreakerActivity::onSingleRestartBrickBreakerReq(
        BrickBreakerActivity *const this,
        const proto::SingleRestartBrickBreakerReq *req,
        proto::SingleRestartBrickBreakerRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // rbx
  bool is_dungeon; // r14
  uint32_t v7; // esi
  common::milog::MiLogStream *v8; // r14
  int32_t v9; // r14d
  bool v10; // r14
  uint32_t v11; // esi
  common::milog::MiLogStream *v12; // r14
  uint32_t v13; // ecx
  BrickBreakerActivity::CurPlayMode v14; // esi
  common::milog::MiLogStream *v15; // r14
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rcx
  int32_t result; // eax
  unsigned int v20; // [rsp+24h] [rbp-11Ch] BYREF
  unsigned int val; // [rsp+28h] [rbp-118h] BYREF
  int32_t ret; // [rsp+2Ch] [rbp-114h]
  common::milog::MiLogStream v23; // [rsp+30h] [rbp-110h] BYREF
  common::milog::MiLogStream v24; // [rsp+50h] [rbp-F0h] BYREF
  char v25[208]; // [rsp+70h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 24 21 chosen_avatar_vec:904 96 24 20 chosen_skill_vec:904";
  *(_QWORD *)(v3 + 16) = BrickBreakerActivity::onSingleRestartBrickBreakerReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234881024;
  v5[536862722] = -218959118;
  v5[536862723] = -218103808;
  v5[536862724] = -202116109;
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 32));
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 96));
  is_dungeon = proto::SingleRestartBrickBreakerReq::is_dungeon(req);
  v7 = proto::SingleRestartBrickBreakerReq::level_id(req);
  if ( (unsigned int)BrickBreakerActivity::getAvatarAndSkillVec(
                       this,
                       v7,
                       is_dungeon,
                       (std::vector<unsigned int> *)(v3 + 32),
                       (std::vector<unsigned int> *)(v3 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/brick_breaker_activity.cpp",
      "onSingleRestartBrickBreakerReq",
      907);
    v8 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
           &v24,
           (const char (*)[53])"[BrickBreaker] getAvatarAndSkillVec fail, level_id: ");
    val = proto::SingleRestartBrickBreakerReq::level_id(req);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream(&v24);
    v9 = -1;
  }
  else
  {
    v10 = proto::SingleRestartBrickBreakerReq::is_dungeon(req);
    v11 = proto::SingleRestartBrickBreakerReq::level_id(req);
    ret = BrickBreakerActivity::singleBrickBreakerGame(this, v11, v10, 1, (const std::vector<unsigned int> *)(v3 + 32));
    if ( ret )
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/brick_breaker_activity.cpp",
        "onSingleRestartBrickBreakerReq",
        913);
      v12 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
              &v23,
              (const char (*)[48])"[BrickBreaker] singleBrickBreakerGame fail, req");
      google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v24, &req->google::protobuf::Message);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, (const std::string *)&v24);
      std::string::~string(&v24);
      common::milog::MiLogStream::~MiLogStream(&v23);
      v9 = ret;
    }
    else
    {
      v13 = proto::SingleRestartBrickBreakerReq::level_id(req);
      if ( *(_BYTE *)(((unsigned __int64)&this->cur_level_id_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_level_id_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(&this->cur_level_id_);
      }
      this->cur_level_id_ = v13;
      if ( proto::SingleRestartBrickBreakerReq::is_dungeon(req) )
        v14 = IN_DUNGEON;
      else
        v14 = IN_SINGLE;
      if ( *(_BYTE *)(((unsigned __int64)&this->cur_play_mode_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->cur_play_mode_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->cur_play_mode_);
      }
      this->cur_play_mode_ = v14;
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/brick_breaker_activity.cpp",
        "onSingleRestartBrickBreakerReq",
        919);
      v15 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v24,
              (const char (*)[33])"[BrickBreaker] restart level_id:");
      v20 = proto::SingleRestartBrickBreakerReq::level_id(req);
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &v20);
      v17 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              v16,
              (const char (*)[18])", cur_play_mode_:");
      if ( *(_BYTE *)(((unsigned __int64)&this->cur_play_mode_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->cur_play_mode_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      val = this->cur_play_mode_;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &val);
      common::milog::MiLogStream::~MiLogStream(&v24);
      v9 = 0;
    }
  }
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 96));
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 32));
  result = v9;
  if ( v25 == (char *)v3 )
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

// Line 925: range 0000000014EFC47C-0000000014EFD8F0
__int64 __fastcall BrickBreakerActivity::singleBrickBreakerGame(
        BrickBreakerActivity *const this,
        uint32_t level_id,
        bool is_dungeon,
        bool is_restart,
        const std::vector<unsigned int> *chosen_avatar_vec)
{
  unsigned int v5; // r14d
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  char v11; // al
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  uint32_t Uid; // r15d
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  PlayerMatchComp *MatchComp; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  PlayerSceneComp *SceneComp; // r14
  Scene *v19; // rax
  common::milog::MiLogStream *v20; // rax
  PlayerDungeonComp *DungeonComp; // r15
  PlayerSceneComp *v22; // rax
  __int32 CurSceneId; // eax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // r14
  int v29; // r15d
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  common::milog::MiLogStream *v32; // r14
  DungeonScene *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  uint32_t v36; // r15d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rax
  uint32_t v38; // ecx
  common::milog::MiLogStream *v39; // rax
  int v40; // r15d
  PlayerSceneComp *v41; // r15
  Scene *v42; // rax
  uint32_t v43; // ecx
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rcx
  __int64 result; // rax
  unsigned int val; // [rsp+3Ch] [rbp-214h] BYREF
  int32_t ret_0; // [rsp+40h] [rbp-210h]
  int32_t ret; // [rsp+44h] [rbp-20Ch]
  const ActivityBrickBreakerExcelConfigMgr *config_mgr; // [rsp+48h] [rbp-208h]
  const BrickBreakerWorldLevelConfig *world_level_config_ptr; // [rsp+50h] [rbp-200h]
  const data::BrickBreakerDungeonLevelExcelConfig *dungeon_level_config_ptr; // [rsp+58h] [rbp-1F8h]
  std::tuple_element<0,std::pair<int,std::shared_ptr<DungeonScene> > >::type *enter_dungeon_retcode; // [rsp+60h] [rbp-1F0h]
  std::tuple_element<1,std::pair<int,std::shared_ptr<DungeonScene> > >::type *dungeon_scene_ptr; // [rsp+68h] [rbp-1E8h]
  std::pair<int,std::shared_ptr<DungeonScene> > __in; // [rsp+70h] [rbp-1E0h] BYREF
  EnterDungeonOption v60; // [rsp+90h] [rbp-1C0h] BYREF
  std::map<unsigned int,unsigned int> level_config_id_map; // [rsp+B0h] [rbp-1A0h] BYREF
  TransferReason p_reason; // [rsp+E0h] [rbp-170h] BYREF
  char v63[304]; // [rsp+120h] [rbp-130h] BYREF

  v6 = (unsigned __int64)v63;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_2(256LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "7 32 4 14 dungeon_id:985 48 4 12 level_id:924 64 12 13 born_pos:1019 96 12 13 born_rot:1020 128 "
                        "16 13 world_ptr:927 160 16 14 scene_ptr:1026 192 32 11 context:997";
  *(_QWORD *)(v6 + 16) = BrickBreakerActivity::singleBrickBreakerGame;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234556924;
  v8[536862722] = -219020288;
  v8[536862723] = -219020288;
  v8[536862724] = -219021312;
  v8[536862725] = -219021312;
  v8[536862727] = -202116109;
  *(_DWORD *)(v6 + 48) = level_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurWorld<PlayerWorld>((const PlayerSceneComp *const)(v6 + 128));
  if ( std::operator==<PlayerWorld>((const std::shared_ptr<PlayerWorld> *)(v6 + 128), 0LL) )
    goto LABEL_12;
  v9 = (unsigned __int64)std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 128));
  if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
    v9 = __asan_report_load8();
  v10 = *(_QWORD *)v9 + 16LL;
  if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
    v9 = __asan_report_load8();
  if ( (*(unsigned int (__fastcall **)(unsigned __int64))v10)(v9) == 1 )
    v11 = 0;
  else
LABEL_12:
    v11 = 1;
  if ( v11 )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v6 + 192),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/brick_breaker_activity.cpp",
      "singleBrickBreakerGame",
      930);
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      (common::milog::MiLogStream *const)(v6 + 192),
      (const char (*)[39])"[BrickBreaker] cur world can not start");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 192));
    v5 = 527;
    goto LABEL_94;
  }
  v12 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 128));
  if ( World::getPlayerCount(v12) != 1 )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v6 + 192),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/brick_breaker_activity.cpp",
      "singleBrickBreakerGame",
      936);
    common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
      (common::milog::MiLogStream *const)(v6 + 192),
      (const char (*)[49])"[BrickBreaker] cannot start when player num != 1");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 192));
    v5 = -1;
    goto LABEL_94;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Uid = Player::getUid(this->player_);
  v14 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 128));
  if ( Uid != World::getOwnerUid(v14) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v6 + 192),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/brick_breaker_activity.cpp",
      "singleBrickBreakerGame",
      942);
    common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
      (common::milog::MiLogStream *const)(v6 + 192),
      (const char (*)[44])"[BrickBreaker] cannot start by other player");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 192));
    v5 = -1;
    goto LABEL_94;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  MatchComp = Player::getMatchComp(this->player_);
  if ( PlayerMatchComp::isInMatch(MatchComp) )
  {
    v5 = 1562;
    goto LABEL_94;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_level_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_level_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( this->cur_level_id_ )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v6 + 192),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/brick_breaker_activity.cpp",
      "singleBrickBreakerGame",
      953);
    v16 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
            (common::milog::MiLogStream *const)(v6 + 192),
            (const char (*)[50])"[BrickBreaker] cur_level_id_ != 0, cur_level_id_:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &this->cur_level_id_);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 192));
    v5 = -1;
    goto LABEL_94;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v6 + 160));
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 160))->design_config.txt_config_mgr.activity_brick_breaker_config_mgr;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v6 + 160));
  if ( is_dungeon )
  {
    ret = BrickBreakerActivity::checkDungeonLevelCanStart(this, *(_DWORD *)(v6 + 48));
    if ( ret )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v6 + 192),
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/brick_breaker_activity.cpp",
        "singleBrickBreakerGame",
        963);
      v17 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
              (common::milog::MiLogStream *const)(v6 + 192),
              (const char (*)[57])"[BrickBreaker] checkDungeonLevelCanStart fail, level_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v6 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 192));
      v5 = ret;
      goto LABEL_94;
    }
    if ( is_restart )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::getSceneComp(this->player_);
      PlayerSceneComp::getCurScene<DungeonScene>((PlayerSceneComp *const)(v6 + 160));
      if ( std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v6 + 160)) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v6 + 192),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/brick_breaker_activity.cpp",
          "singleBrickBreakerGame",
          972);
        common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
          (common::milog::MiLogStream *const)(v6 + 192),
          (const char (*)[34])"[BrickBreaker] getCurScene fails.");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 192));
        v5 = -1;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        SceneComp = Player::getSceneComp(this->player_);
        TransferReason::TransferReason(&p_reason, ENTER_REASON_DUNGEON_ENTER);
        v19 = (Scene *)std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 160));
        PlayerSceneComp::jumpToSceneBornPosition(SceneComp, v19, &p_reason);
        TransferReason::~TransferReason(&p_reason);
        v5 = 0;
      }
      std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v6 + 160));
      goto LABEL_94;
    }
    dungeon_level_config_ptr = data::ActivityBrickBreakerExcelConfigMgrBase::findBrickBreakerDungeonLevelExcelConfig(
                                 config_mgr,
                                 *(_DWORD *)(v6 + 48));
    if ( !dungeon_level_config_ptr )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v6 + 192),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/brick_breaker_activity.cpp",
        "singleBrickBreakerGame",
        981);
      v20 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              (common::milog::MiLogStream *const)(v6 + 192),
              (const char (*)[33])"[BrickBreaker] invalid level_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v6 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 192));
      v5 = -1;
      goto LABEL_94;
    }
    if ( *(_BYTE *)(((unsigned __int64)&dungeon_level_config_ptr->dungeon_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)dungeon_level_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_level_config_ptr->dungeon_id >> 3)
                                                                              + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v6 + 32) = dungeon_level_config_ptr->dungeon_id;
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    DungeonComp = Player::getDungeonComp(this->player_);
    memset(&v60, 0, sizeof(v60));
    EnterDungeonOption::EnterDungeonOption(&v60);
    memset(&level_config_id_map, 0, sizeof(level_config_id_map));
    std::map<unsigned int,unsigned int>::map(&level_config_id_map);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v22 = Player::getSceneComp(this->player_);
    CurSceneId = PlayerSceneComp::getCurSceneId(v22);
    PlayerDungeonComp::enterDungeon(&__in, DungeonComp, *(_DWORD *)(v6 + 32), CurSceneId, 0, &level_config_id_map, v60);
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
        (common::milog::MiLogStream *)(v6 + 192),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/brick_breaker_activity.cpp",
        "singleBrickBreakerGame",
        989);
      v24 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
              (common::milog::MiLogStream *const)(v6 + 192),
              (const char (*)[46])"[BrickBreaker] enterDungeon fail, dungeon_id:");
      v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)(v6 + 32));
      v26 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
              v25,
              (const char (*)[24])" enter_dungeon_retcode:");
      v27 = common::milog::MiLogStream::operator<<<int,(int *)0>(v26, enter_dungeon_retcode);
      v28 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v27, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, &val);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 192));
      if ( *(_BYTE *)(((unsigned __int64)enter_dungeon_retcode >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)enter_dungeon_retcode & 7) + 3) >= *(_BYTE *)(((unsigned __int64)enter_dungeon_retcode >> 3)
                                                                                + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v5 = *enter_dungeon_retcode;
      v29 = 0;
    }
    else if ( std::operator==<DungeonScene>(0LL, dungeon_scene_ptr)
           || (v30 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)dungeon_scene_ptr),
               DungeonScene::getDungeonId(v30) != *(_DWORD *)(v6 + 32)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v6 + 192),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/brick_breaker_activity.cpp",
        "singleBrickBreakerGame",
        994);
      v32 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
              (common::milog::MiLogStream *const)(v6 + 192),
              (const char (*)[49])"[BrickBreaker] player enter dungeon failed, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, &val);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 192));
      v5 = -1;
      v29 = 0;
    }
    else
    {
      BrickBreakerDungeonContext::BrickBreakerDungeonContext((BrickBreakerDungeonContext *const)(v6 + 192));
      *(_DWORD *)(v6 + 192) = *(_DWORD *)(v6 + 48);
      std::vector<unsigned int>::operator=((std::vector<unsigned int> *const)(v6 + 200), chosen_avatar_vec);
      v33 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)dungeon_scene_ptr);
      DungeonScene::setDungeonExtraData<BrickBreakerDungeonContext>(v33, (const BrickBreakerDungeonContext *)(v6 + 192));
      BrickBreakerDungeonContext::~BrickBreakerDungeonContext((BrickBreakerDungeonContext *const)(v6 + 192));
      v29 = 1;
    }
    std::pair<int,std::shared_ptr<DungeonScene>>::~pair(&__in);
    if ( v29 == 1 )
      goto LABEL_87;
  }
  else
  {
    ret_0 = BrickBreakerActivity::checkWorldLevelCanStart(this, *(_DWORD *)(v6 + 48));
    if ( ret_0 )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v6 + 192),
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/brick_breaker_activity.cpp",
        "singleBrickBreakerGame",
        1008);
      v34 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
              (common::milog::MiLogStream *const)(v6 + 192),
              (const char (*)[55])"[BrickBreaker] checkWorldLevelCanStart fail, level_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, (const unsigned int *)(v6 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 192));
      v5 = ret_0;
      goto LABEL_94;
    }
    world_level_config_ptr = ActivityBrickBreakerExcelConfigMgr::findWorldLevelConfig(config_mgr, *(_DWORD *)(v6 + 48));
    if ( !world_level_config_ptr )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v6 + 192),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/brick_breaker_activity.cpp",
        "singleBrickBreakerGame",
        1015);
      v35 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              (common::milog::MiLogStream *const)(v6 + 192),
              (const char (*)[33])"[BrickBreaker] invalid level_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, (const unsigned int *)(v6 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 192));
      v5 = -1;
      goto LABEL_94;
    }
    Vector3::Vector3((Vector3 *const)(v6 + 64), 0.0, 0.0, 0.0);
    Vector3::Vector3((Vector3 *const)(v6 + 96), 0.0, 0.0, 0.0);
    v36 = *(_DWORD *)(v6 + 48);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v6 + 160));
    v37 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 160));
    LOBYTE(v36) = ActivityBrickBreakerExcelConfigMgr::findBornPosRot(
                    config_mgr,
                    &v37->design_config.txt_config_mgr,
                    0,
                    v36,
                    (Vector3 *)(v6 + 64),
                    (Vector3 *)(v6 + 96)) != 0;
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v6 + 160));
    if ( (_BYTE)v36 )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v6 + 192),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/brick_breaker_activity.cpp",
        "singleBrickBreakerGame",
        1023);
      common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
        (common::milog::MiLogStream *const)(v6 + 192),
        (const char (*)[37])"[BrickBreaker] findBornPosRot failed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 192));
      v5 = -1;
      goto LABEL_94;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v38 = (unsigned int)Player::getSceneComp(this->player_);
    if ( *(_BYTE *)(((unsigned __int64)world_level_config_ptr >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)world_level_config_ptr >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    PlayerSceneComp::findScene((const PlayerSceneComp *const)(v6 + 160), v38);
    if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v6 + 160), 0LL) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v6 + 192),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/brick_breaker_activity.cpp",
        "singleBrickBreakerGame",
        1029);
      v39 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
              (common::milog::MiLogStream *const)(v6 + 192),
              (const char (*)[44])"[BrickBreaker] scene is nullptr, scene_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v39, &world_level_config_ptr->scene_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 192));
      v5 = -1;
      v40 = 0;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v41 = Player::getSceneComp(this->player_);
      TransferReason::TransferReason(&p_reason, ENTER_REASON_BRICK_BREAKER_SINGLE);
      v42 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 160));
      LOBYTE(v41) = PlayerSceneComp::jumpToScene(
                      v41,
                      v42,
                      (const Vector3 *)(v6 + 64),
                      (const Vector3 *)(v6 + 96),
                      0,
                      &p_reason) != 0;
      TransferReason::~TransferReason(&p_reason);
      if ( (_BYTE)v41 )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v6 + 192),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/brick_breaker_activity.cpp",
          "singleBrickBreakerGame",
          1034);
        common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
          (common::milog::MiLogStream *const)(v6 + 192),
          (const char (*)[34])"[BrickBreaker] jumpToScene failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 192));
        v5 = -1;
        v40 = 0;
      }
      else
      {
        v40 = 1;
      }
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v6 + 160));
    if ( v40 == 1 )
    {
LABEL_87:
      v43 = *(_DWORD *)(v6 + 48);
      if ( *(_BYTE *)(((unsigned __int64)&this->transfer_context_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->transfer_context_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->transfer_context_);
      }
      this->transfer_context_.level_id = v43;
      std::vector<unsigned int>::operator=(&this->transfer_context_.enter_scene_avatar_id_vec, chosen_avatar_vec);
      if ( *(_BYTE *)(((unsigned __int64)&this->transfer_context_.is_restart >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this - 108) & 7) >= *(_BYTE *)(((unsigned __int64)&this->transfer_context_.is_restart >> 3)
                                                           + 0x7FFF8000) )
      {
        __asan_report_store1(&this->transfer_context_.is_restart);
      }
      this->transfer_context_.is_restart = is_restart;
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v6 + 192),
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/brick_breaker_activity.cpp",
        "singleBrickBreakerGame",
        1042);
      v44 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
              (common::milog::MiLogStream *const)(v6 + 192),
              (const char (*)[31])"[BrickBreaker] start level_id:");
      v45 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v44, (const unsigned int *)(v6 + 48));
      v46 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              v45,
              (const char (*)[18])", cur_play_mode_:");
      if ( *(_BYTE *)(((unsigned __int64)&this->cur_play_mode_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->cur_play_mode_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      val = this->cur_play_mode_;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v46, &val);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 192));
      v5 = 0;
    }
  }
LABEL_94:
  std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v6 + 128));
  result = v5;
  if ( v63 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1048: range 0000000014EFD8F2-0000000014EFE336
int32_t __cdecl BrickBreakerActivity::brickBreakerTwiceStart(BrickBreakerActivity *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rcx
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  uint32_t level_id; // ecx
  const ActivityBrickBreakerExcelConfigMgr *v9; // rcx
  common::milog::MiLogStream *v10; // rax
  Scene *v11; // rax
  common::milog::MiLogStream *v12; // rax
  Scene *v13; // rax
  SceneGalleryComp *v14; // rcx
  common::milog::MiLogStream *v15; // rax
  int32_t result; // eax
  int v17; // [rsp+Ch] [rbp-174h]
  int32_t v18; // [rsp+10h] [rbp-170h]
  common::milog::MiLogStream *v19; // [rsp+10h] [rbp-170h]
  SceneGalleryComp *GalleryComp; // [rsp+10h] [rbp-170h]
  std::less<unsigned int> __comp; // [rsp+2Eh] [rbp-152h] BYREF
  std::allocator<unsigned int> __a; // [rsp+2Fh] [rbp-151h] BYREF
  unsigned int val; // [rsp+30h] [rbp-150h] BYREF
  int32_t ret; // [rsp+34h] [rbp-14Ch]
  BrickBreakerDungeonContext *context; // [rsp+38h] [rbp-148h]
  const ActivityBrickBreakerExcelConfigMgr *config_mgr; // [rsp+40h] [rbp-140h]
  const data::BrickBreakerDungeonLevelExcelConfig *dungeon_level_config_ptr; // [rsp+48h] [rbp-138h]
  std::shared_ptr<Config> v28; // [rsp+50h] [rbp-130h] BYREF
  common::milog::MiLogStream v29; // [rsp+60h] [rbp-120h] BYREF
  std::set<unsigned int> uid_set; // [rsp+80h] [rbp-100h] BYREF
  char v31[208]; // [rsp+B0h] [rbp-D0h] BYREF

  v1 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 16 22 dungeon_scene_ptr:1050 80 40 24 dungeon_context_opt:1060";
  *(_QWORD *)(v1 + 16) = BrickBreakerActivity::brickBreakerTwiceStart;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862722] = 62194;
  v3[536862723] = -218103808;
  v3[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene<DungeonScene>((PlayerSceneComp *const)(v1 + 48));
  if ( std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v1 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/brick_breaker_activity.cpp",
      "brickBreakerTwiceStart",
      1053);
    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
      &v29,
      (const char (*)[34])"[BrickBreaker] getCurScene fails.");
    common::milog::MiLogStream::~MiLogStream(&v29);
    v18 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_level_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_level_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( this->cur_level_id_ )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->cur_play_mode_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->cur_play_mode_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( this->cur_play_mode_ == IN_DUNGEON )
        goto LABEL_28;
    }
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/brick_breaker_activity.cpp",
      "brickBreakerTwiceStart",
      1059);
    v4 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v29,
           (const char (*)[42])"[BrickBreaker] start fail, cur_level_id_:");
    v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->cur_level_id_);
    v6 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v5, (const char (*)[18])", cur_play_mode_:");
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_play_mode_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->cur_play_mode_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    val = this->cur_play_mode_;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v29);
    v7 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48));
    DungeonScene::getDungeonExtraData<BrickBreakerDungeonContext>(
      (std::optional<BrickBreakerDungeonContext> *)(v1 + 80),
      v7);
    if ( !std::optional<BrickBreakerDungeonContext>::has_value((const std::optional<BrickBreakerDungeonContext> *const)(v1 + 80)) )
    {
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/brick_breaker_activity.cpp",
        "brickBreakerTwiceStart",
        1063);
      v19 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
              &v29,
              (const char (*)[50])"[BrickBreaker] dungeon context has not data, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &val);
      common::milog::MiLogStream::~MiLogStream(&v29);
      v18 = -1;
      v17 = 0;
    }
    else
    {
      context = std::optional<BrickBreakerDungeonContext>::value((std::optional<BrickBreakerDungeonContext> *const)(v1 + 80));
      if ( *(_BYTE *)(((unsigned __int64)context >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)context >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      level_id = context->level_id;
      if ( *(_BYTE *)(((unsigned __int64)&this->cur_level_id_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_level_id_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(&this->cur_level_id_);
      }
      this->cur_level_id_ = level_id;
      if ( *(_BYTE *)(((unsigned __int64)&this->cur_play_mode_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->cur_play_mode_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->cur_play_mode_);
      }
      this->cur_play_mode_ = IN_DUNGEON;
      v17 = 1;
    }
    std::optional<BrickBreakerDungeonContext>::~optional((std::optional<BrickBreakerDungeonContext> *const)(v1 + 80));
    if ( v17 == 1 )
    {
LABEL_28:
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v28);
      config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v28)->design_config.txt_config_mgr.activity_brick_breaker_config_mgr;
      std::shared_ptr<Config>::~shared_ptr(&v28);
      v9 = config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&this->cur_level_id_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_level_id_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      dungeon_level_config_ptr = data::ActivityBrickBreakerExcelConfigMgrBase::findBrickBreakerDungeonLevelExcelConfig(
                                   v9,
                                   this->cur_level_id_);
      if ( dungeon_level_config_ptr )
      {
        v11 = (Scene *)std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48));
        GalleryComp = Scene::getGalleryComp(v11);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        std::allocator<unsigned int>::allocator(&__a);
        std::set<unsigned int>::set(
          &uid_set,
          (std::initializer_list<unsigned int>)__PAIR128__(1LL, &val),
          &__comp,
          &__a);
        if ( *(_BYTE *)(((unsigned __int64)&dungeon_level_config_ptr->gallery_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&dungeon_level_config_ptr->gallery_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        ret = SceneGalleryComp::initGallery(GalleryComp, dungeon_level_config_ptr->gallery_id, &uid_set);
        std::set<unsigned int>::~set(&uid_set);
        std::allocator<unsigned int>::~allocator(&__a);
        if ( ret )
        {
          common::milog::MiLogStream::create(
            &v29,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/brick_breaker_activity.cpp",
            "brickBreakerTwiceStart",
            1080);
          v12 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                  &v29,
                  (const char (*)[48])"[BrickBreaker] gallery init failed, gallery_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v12,
            &dungeon_level_config_ptr->gallery_id);
          common::milog::MiLogStream::~MiLogStream(&v29);
          v18 = -1;
        }
        else
        {
          v13 = (Scene *)std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48));
          v14 = Scene::getGalleryComp(v13);
          if ( *(_BYTE *)(((unsigned __int64)&dungeon_level_config_ptr->gallery_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&dungeon_level_config_ptr->gallery_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          ret = SceneGalleryComp::startGallery(v14, dungeon_level_config_ptr->gallery_id);
          if ( ret )
          {
            common::milog::MiLogStream::create(
              &v29,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/brick_breaker_activity.cpp",
              "brickBreakerTwiceStart",
              1086);
            v15 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                    &v29,
                    (const char (*)[49])"[BrickBreaker] gallery start failed, gallery_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v15,
              &dungeon_level_config_ptr->gallery_id);
            common::milog::MiLogStream::~MiLogStream(&v29);
            v18 = -1;
          }
          else
          {
            v18 = 0;
          }
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v29,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/brick_breaker_activity.cpp",
          "brickBreakerTwiceStart",
          1074);
        v10 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                &v29,
                (const char (*)[33])"[BrickBreaker] invalid level_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->cur_level_id_);
        common::milog::MiLogStream::~MiLogStream(&v29);
        v18 = -1;
      }
    }
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v1 + 48));
  result = v18;
  if ( v31 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 1093: range 0000000014EFE338-0000000014EFE40C
void __cdecl BrickBreakerActivity::onEnterScene(
        BrickBreakerActivity *const this,
        ScenePtr *p_scene_ptr,
        bool is_reenter)
{
  PlayerSceneComp *SceneComp; // rax
  proto::EnterReason DestEnterReason; // edx

  if ( BaseActivity::isOpening(this, 0) && !BaseActivity::isSettled(this) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    SceneComp = Player::getSceneComp(this->player_);
    DestEnterReason = PlayerSceneComp::getDestEnterReason(SceneComp);
    if ( *(_BYTE *)(((unsigned __int64)&this->transfer_context_.enter_reason >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->transfer_context_.enter_reason >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->transfer_context_.enter_reason);
    }
    this->transfer_context_.enter_reason = DestEnterReason;
  }
};

// Line 1104: range 0000000014EFE4D0-0000000014EFF667
void __cdecl BrickBreakerActivity::onPostEnterSceneEvent(
        BrickBreakerActivity *const this,
        const PostEnterSceneEvent *event)
{
  unsigned __int64 v2; // r15
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v6; // r12d
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  uint32_t SceneId; // r12d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // r12
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  Scene *v15; // rax
  SceneBlockGroupComp *BlockGroupComp; // r12
  unsigned __int64 v17; // rax
  unsigned int (__fastcall *v18)(SceneBlockGroupComp *, std::vector<unsigned int> *, _QWORD, _QWORD); // r14
  bool v19; // r12
  common::milog::MiLogStream *v20; // rax
  Scene *v21; // rax
  SceneGalleryComp *GalleryComp; // r12
  common::milog::MiLogStream *v23; // rax
  Scene *v24; // rax
  uint32_t v25; // ecx
  common::milog::MiLogStream *v26; // rax
  BrickBreakerGallery *v27; // rax
  BrickBreakerGallery *v28; // rax
  Scene *v29; // rax
  SceneGalleryComp *v30; // rcx
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  Scene *v33; // rax
  SceneBlockGroupComp *v34; // r12
  unsigned __int64 v35; // rax
  unsigned int (__fastcall *v36)(SceneBlockGroupComp *, std::vector<unsigned int> *, __int64); // r14
  bool v37; // r12
  common::milog::MiLogStream *v38; // rax
  DungeonScene *v39; // rax
  int v41; // r12d
  std::initializer_list<unsigned int> __l; // [rsp+10h] [rbp-230h]
  std::initializer_list<unsigned int> v43; // [rsp+20h] [rbp-220h]
  std::initializer_list<unsigned int> v44; // [rsp+30h] [rbp-210h]
  std::less<unsigned int> __comp; // [rsp+59h] [rbp-1E7h] BYREF
  std::allocator<unsigned int> __a; // [rsp+5Ah] [rbp-1E6h] BYREF
  bool is_restart; // [rsp+5Bh] [rbp-1E5h]
  unsigned int val; // [rsp+5Ch] [rbp-1E4h] BYREF
  int32_t ret; // [rsp+60h] [rbp-1E0h]
  int32_t ret_0; // [rsp+64h] [rbp-1DCh]
  const ActivityBrickBreakerExcelConfigMgr *config_mgr; // [rsp+68h] [rbp-1D8h]
  const BrickBreakerWorldLevelConfig *world_level_config_ptr; // [rsp+70h] [rbp-1D0h]
  const data::BrickBreakerDungeonLevelExcelConfig *dungeon_level_config_ptr; // [rsp+78h] [rbp-1C8h]
  std::vector<unsigned int> v54; // [rsp+80h] [rbp-1C0h] BYREF
  std::function<void()> rollbacker; // [rsp+A0h] [rbp-1A0h] BYREF
  std::set<unsigned int> uid_set; // [rsp+C0h] [rbp-180h] BYREF
  char v57[336]; // [rsp+F0h] [rbp-150h] BYREF

  v2 = (unsigned __int64)v57;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 48 4 13 level_id:1110 64 4 17 enter_reason:1111 80 16 14 scene_ptr:1127 112 16 22 dungeon_scen"
                        "e_ptr:1190 144 24 30 enter_scene_avatar_id_vec:1112 208 40 14 committer:1116";
  *(_QWORD *)(v2 + 16) = BrickBreakerActivity::onPostEnterSceneEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = 61956;
  v4[536862723] = 62194;
  v4[536862724] = 62194;
  v4[536862725] = -218959360;
  v4[536862726] = 62194;
  v4[536862727] = -218103808;
  v4[536862728] = -202116109;
  if ( BaseActivity::isOpening(this, 0) && !BaseActivity::isSettled(this) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->transfer_context_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->transfer_context_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 48) = this->transfer_context_.level_id;
    if ( *(_BYTE *)(((unsigned __int64)&this->transfer_context_.enter_reason >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->transfer_context_.enter_reason >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 64) = this->transfer_context_.enter_reason;
    std::vector<unsigned int>::vector(
      (std::vector<unsigned int> *const)(v2 + 144),
      &this->transfer_context_.enter_scene_avatar_id_vec);
    if ( *(_BYTE *)(((unsigned __int64)&this->transfer_context_.is_restart >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this - 108) & 7) >= *(_BYTE *)(((unsigned __int64)&this->transfer_context_.is_restart >> 3)
                                                         + 0x7FFF8000) )
    {
      __asan_report_load1(&this->transfer_context_.is_restart);
    }
    is_restart = this->transfer_context_.is_restart;
    BrickBreakerTransferContext::clear(&this->transfer_context_);
    std::function<void ()(void)>::function<BrickBreakerActivity::onPostEnterSceneEvent(PostEnterSceneEvent const&)::{lambda(void)#1},void,void>(
      &rollbacker,
      (BrickBreakerActivity::onPostEnterSceneEvent::<lambda()>)this);
    common::tools::ScopedCommitter::ScopedCommitter((common::tools::ScopedCommitter *const)(v2 + 208), &rollbacker);
    std::function<void ()(void)>::~function(&rollbacker);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v2 + 112));
    config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112))->design_config.txt_config_mgr.activity_brick_breaker_config_mgr;
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 112));
    world_level_config_ptr = ActivityBrickBreakerExcelConfigMgr::findWorldLevelConfig(config_mgr, *(_DWORD *)(v2 + 48));
    dungeon_level_config_ptr = data::ActivityBrickBreakerExcelConfigMgrBase::findBrickBreakerDungeonLevelExcelConfig(
                                 config_mgr,
                                 *(_DWORD *)(v2 + 48));
    if ( world_level_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::getSceneComp(this->player_);
      PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 80));
      if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 80)) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&rollbacker,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/brick_breaker_activity.cpp",
          "onPostEnterSceneEvent",
          1130);
        common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
          (common::milog::MiLogStream *const)&rollbacker,
          (const char (*)[34])"[BrickBreaker] getCurScene fails.");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&rollbacker);
        v6 = 0;
      }
      else
      {
        v7 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
        SceneId = Scene::getSceneId(v7);
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)(v2 + 112));
        v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
        LOBYTE(SceneId) = SceneId != TxtConfigMgr::getDefaultWorldMainSceneId(&v9->design_config.txt_config_mgr);
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 112));
        if ( (_BYTE)SceneId )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&rollbacker,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/brick_breaker_activity.cpp",
            "onPostEnterSceneEvent",
            1135);
          v10 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                  (common::milog::MiLogStream *const)&rollbacker,
                  (const char (*)[53])"[BrickBreaker] player not in main scene 3, scene_id:");
          v11 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
          val = Scene::getSceneId(v11);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&rollbacker);
          v6 = 0;
        }
        else if ( *(_DWORD *)(v2 + 64) == 90 )
        {
          v15 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
          BlockGroupComp = Scene::getBlockGroupComp(v15);
          if ( *(_BYTE *)(((unsigned __int64)BlockGroupComp >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v17 = (unsigned __int64)(BlockGroupComp->_vptr_SceneCompBase + 12);
          if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
            v17 = __asan_report_load8();
          v18 = *(unsigned int (__fastcall **)(SceneBlockGroupComp *, std::vector<unsigned int> *, _QWORD, _QWORD))v17;
          if ( *(_BYTE *)(((unsigned __int64)&world_level_config_ptr->group_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)world_level_config_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&world_level_config_ptr->group_id >> 3)
                                                                                 + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          val = world_level_config_ptr->group_id;
          __l._M_array = &val;
          __l._M_len = 1LL;
          std::allocator<unsigned int>::allocator(&__a);
          std::vector<unsigned int>::vector(&v54, __l, &__a);
          v19 = v18(BlockGroupComp, &v54, 0LL, 0LL) != 0;
          std::vector<unsigned int>::~vector(&v54);
          std::allocator<unsigned int>::~allocator(&__a);
          if ( v19 )
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&rollbacker,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/brick_breaker_activity.cpp",
              "onPostEnterSceneEvent",
              1147);
            v20 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                    (common::milog::MiLogStream *const)&rollbacker,
                    (const char (*)[48])"[BrickBreaker] registerGroups failed, group_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v20,
              &world_level_config_ptr->group_id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&rollbacker);
            v6 = 0;
          }
          else
          {
            ret = 0;
            v21 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
            GalleryComp = Scene::getGalleryComp(v21);
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            val = Player::getUid(this->player_);
            v43._M_array = &val;
            v43._M_len = 1LL;
            std::allocator<unsigned int>::allocator(&__a);
            std::set<unsigned int>::set(&uid_set, v43, &__comp, &__a);
            if ( *(_BYTE *)(((unsigned __int64)&world_level_config_ptr->gallery_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&world_level_config_ptr->gallery_id >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            ret_0 = SceneGalleryComp::initGallery(GalleryComp, world_level_config_ptr->gallery_id, &uid_set);
            std::set<unsigned int>::~set(&uid_set);
            std::allocator<unsigned int>::~allocator(&__a);
            if ( ret_0 )
            {
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)&rollbacker,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/brick_breaker_activity.cpp",
                "onPostEnterSceneEvent",
                1157);
              v23 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                      (common::milog::MiLogStream *const)&rollbacker,
                      (const char (*)[48])"[BrickBreaker] gallery init failed, gallery_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v23,
                &world_level_config_ptr->gallery_id);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&rollbacker);
            }
            else
            {
              v24 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
              v25 = (unsigned int)Scene::getGalleryComp(v24);
              if ( *(_BYTE *)(((unsigned __int64)&world_level_config_ptr->gallery_id >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&world_level_config_ptr->gallery_id >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4();
              }
              SceneGalleryComp::findGallery<BrickBreakerGallery>((SceneGalleryComp *const)(v2 + 112), v25);
              if ( std::operator==<BrickBreakerGallery>(0LL, (const std::shared_ptr<BrickBreakerGallery> *)(v2 + 112)) )
              {
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)&rollbacker,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/activity/brick_breaker_activity.cpp",
                  "onPostEnterSceneEvent",
                  1163);
                v26 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
                        (common::milog::MiLogStream *const)&rollbacker,
                        (const char (*)[61])"[BrickBreakerMultistagePlay] findGallery failed, gallery_id:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v26,
                  &world_level_config_ptr->gallery_id);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&rollbacker);
                ret_0 = -1;
              }
              else
              {
                v27 = std::__shared_ptr_access<BrickBreakerGallery,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BrickBreakerGallery,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
                BrickBreakerGallery::setIsNeedSetTeam(v27, 1);
                v28 = std::__shared_ptr_access<BrickBreakerGallery,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BrickBreakerGallery,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
                BrickBreakerGallery::setEnterSceneAvatarIdVec(v28, (const std::vector<unsigned int> *)(v2 + 144));
                v29 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
                v30 = Scene::getGalleryComp(v29);
                if ( *(_BYTE *)(((unsigned __int64)&world_level_config_ptr->gallery_id >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&world_level_config_ptr->gallery_id >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4();
                }
                ret_0 = SceneGalleryComp::startGallery(v30, world_level_config_ptr->gallery_id);
                if ( ret_0 )
                {
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)&rollbacker,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/activity/brick_breaker_activity.cpp",
                    "onPostEnterSceneEvent",
                    1172);
                  v31 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                          (common::milog::MiLogStream *const)&rollbacker,
                          (const char (*)[49])"[BrickBreaker] gallery start failed, gallery_id:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v31,
                    &world_level_config_ptr->gallery_id);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&rollbacker);
                }
              }
              std::shared_ptr<BrickBreakerGallery>::~shared_ptr((std::shared_ptr<BrickBreakerGallery> *const)(v2 + 112));
            }
            if ( ret )
            {
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)&rollbacker,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/player/activity/brick_breaker_activity.cpp",
                "onPostEnterSceneEvent",
                1179);
              v32 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                      (common::milog::MiLogStream *const)&rollbacker,
                      (const char (*)[42])"[BrickBreaker] unregisterGroups group_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v32,
                &world_level_config_ptr->group_id);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&rollbacker);
              v33 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
              v34 = Scene::getBlockGroupComp(v33);
              if ( *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              v35 = (unsigned __int64)(v34->_vptr_SceneCompBase + 13);
              if ( *(_BYTE *)((v35 >> 3) + 0x7FFF8000) )
                v35 = __asan_report_load8();
              v36 = *(unsigned int (__fastcall **)(SceneBlockGroupComp *, std::vector<unsigned int> *, __int64))v35;
              if ( *(_BYTE *)(((unsigned __int64)&world_level_config_ptr->group_id >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)world_level_config_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&world_level_config_ptr->group_id >> 3)
                                                                                     + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              val = world_level_config_ptr->group_id;
              v44._M_array = &val;
              v44._M_len = 1LL;
              std::allocator<unsigned int>::allocator(&__a);
              std::vector<unsigned int>::vector(&v54, v44, &__a);
              v37 = v36(v34, &v54, 1LL) != 0;
              std::vector<unsigned int>::~vector(&v54);
              std::allocator<unsigned int>::~allocator(&__a);
              if ( v37 )
              {
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)&rollbacker,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/activity/brick_breaker_activity.cpp",
                  "onPostEnterSceneEvent",
                  1182);
                v38 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                        (common::milog::MiLogStream *const)&rollbacker,
                        (const char (*)[50])"[BrickBreaker] unregisterGroups failed, group_id:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v38,
                  &world_level_config_ptr->group_id);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&rollbacker);
              }
              v6 = 0;
            }
            else
            {
              v6 = 1;
            }
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&rollbacker,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/brick_breaker_activity.cpp",
            "onPostEnterSceneEvent",
            1141);
          v12 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                  (common::milog::MiLogStream *const)&rollbacker,
                  (const char (*)[29])"[BrickBreaker] enter_reason:");
          v13 = common::milog::MiLogStream::operator<<<proto::EnterReason,(proto::EnterReason*)0>(
                  v12,
                  (const proto::EnterReason *)(v2 + 64));
          v14 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v13, (const char (*)[12])", level_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v2 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&rollbacker);
          v6 = 0;
        }
      }
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 80));
      if ( v6 != 1 )
        goto LABEL_72;
    }
    else if ( dungeon_level_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::getSceneComp(this->player_);
      PlayerSceneComp::getCurScene<DungeonScene>((PlayerSceneComp *const)(v2 + 112));
      if ( std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v2 + 112))
        || (v39 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112)),
            !DungeonScene::isEnterByBrickBreakerActivity(v39)) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&rollbacker,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/brick_breaker_activity.cpp",
          "onPostEnterSceneEvent",
          1193);
        common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
          (common::milog::MiLogStream *const)&rollbacker,
          (const char (*)[47])"[BrickBreaker] enter dungeon not brick dungeon");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&rollbacker);
        v41 = 0;
      }
      else
      {
        v41 = 1;
      }
      std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 112));
      if ( v41 != 1 )
        goto LABEL_72;
    }
    common::tools::ScopedCommitter::commit((common::tools::ScopedCommitter *const)(v2 + 208));
LABEL_72:
    common::tools::ScopedCommitter::~ScopedCommitter((common::tools::ScopedCommitter *const)(v2 + 208));
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 144));
  }
  if ( v57 == (char *)v2 )
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
};

// Line 1116: range 0000000014EFE40E-0000000014EFE4CF
void __cdecl BrickBreakerActivity::onPostEnterSceneEvent(PostEnterSceneEvent const&)::{lambda(void)#1}::operator()(
        const BrickBreakerActivity::onPostEnterSceneEvent::<lambda()> *const __closure)
{
  BrickBreakerActivity *this; // rdx
  char v2; // cl
  BrickBreakerActivity *v3; // rax
  char v4; // dl

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  this = __closure->__this;
  v2 = *(_BYTE *)(((unsigned __int64)&__closure->__this->cur_level_id_ >> 3) + 0x7FFF8000);
  if ( v2 != 0 && (char)(((LOBYTE(__closure->__this) - 124) & 7) + 3) >= v2 )
    __asan_report_store4(&__closure->__this->cur_level_id_);
  this->cur_level_id_ = 0;
  v3 = __closure->__this;
  v4 = *(_BYTE *)(((unsigned __int64)&__closure->__this->cur_play_mode_ >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
    v3 = (BrickBreakerActivity *)__asan_report_store4(&__closure->__this->cur_play_mode_);
  v3->cur_play_mode_ = NONE_3;
};

// Line 1202: range 0000000014EFF668-0000000014F00030
// local variable allocation has failed, the output may be wrong!
void __cdecl BrickBreakerActivity::onGalleryBrickBreakerStartEvent(
        BrickBreakerActivity *const this,
        const GalleryStartEvent *event)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  Player *v9; // rax
  common::milog::MiLogStream *v10; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<BrickBreakerActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rdx
  Scene *v13; // rax
  uint32_t GalleryComp; // ecx
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBrickBreakerGalleryStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyBrickBreakerGalleryStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBrickBreakerGalleryStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // r14
  std::__shared_ptr_access<BrickBreakerGallery,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  Player *v21; // r14
  std::string eventa; // [rsp+0h] [rbp-170h] OVERLAPPED BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-150h] BYREF
  std::shared_ptr<google::protobuf::Message> v24; // [rsp+30h] [rbp-140h] BYREF
  common::milog::MiLogStream v25; // [rsp+40h] [rbp-130h] BYREF
  char v26[272]; // [rsp+60h] [rbp-110h] BYREF

  eventa._M_string_length = (std::string::size_type)this;
  eventa._M_dataplus._M_p = (std::string::pointer)event;
  v2 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 48 1 11 holder:1237 64 16 14 scene_ptr:1207 96 16 21 owner_player_ptr:1213 128 16 23 owner_act"
                        "ivity_ptr:1219 160 16 16 gallery_ptr:1230 192 16 12 log_ptr:1238";
  *(_QWORD *)(v2 + 16) = BrickBreakerActivity::onGalleryBrickBreakerStartEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -219021312;
  v4[536862726] = -202178560;
  if ( BaseActivity::isOpening((const BaseActivity *const)eventa._M_string_length, 0)
    && !BaseActivity::isFinished((const BaseActivity *const)eventa._M_string_length) )
  {
    if ( *(_BYTE *)(((eventa._M_string_length + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(*(Player *const *)(eventa._M_string_length + 24));
    PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 64));
    if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/brick_breaker_activity.cpp",
        "onGalleryBrickBreakerStartEvent",
        1210);
      v6 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
             &v25,
             (const char (*)[41])"[BrickBreaker] getCurScene failed, uid: ");
      if ( *(_BYTE *)(((eventa._M_string_length + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      *(_DWORD *)eventa._anon_0._M_local_buf = Player::getUid(*(const Player *const *)(eventa._M_string_length + 24));
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)&eventa._anon_0);
      common::milog::MiLogStream::~MiLogStream(&v25);
    }
    else
    {
      std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      Scene::getOwnPlayer((const Scene *const)(v2 + 96));
      if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 96)) )
      {
        common::milog::MiLogStream::create(
          &v25,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/brick_breaker_activity.cpp",
          "onGalleryBrickBreakerStartEvent",
          1216);
        v7 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
               &v25,
               (const char (*)[47])"[BrickBreaker] getOwnPlayer failed, owner_uid:");
        v8 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        *(_DWORD *)eventa._anon_0._M_local_buf = Scene::getOwnerUid(v8);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
          v7,
          (const unsigned int *)&eventa._anon_0);
        common::milog::MiLogStream::~MiLogStream(&v25);
      }
      else
      {
        v9 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        Player::getActivityComp(v9);
        PlayerActivityComp::findOpenningActivity<BrickBreakerActivity>((PlayerActivityComp *const)(v2 + 128));
        if ( std::operator==<BrickBreakerActivity>(0LL, (const std::shared_ptr<BrickBreakerActivity> *)(v2 + 128)) )
        {
          common::milog::MiLogStream::create(
            &v25,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/brick_breaker_activity.cpp",
            "onGalleryBrickBreakerStartEvent",
            1222);
          v10 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                  &v25,
                  (const char (*)[31])"activity is not opening, uid: ");
          v11 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          *(_DWORD *)eventa._anon_0._M_local_buf = Player::getUid(v11);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v10,
            (const unsigned int *)&eventa._anon_0);
          common::milog::MiLogStream::~MiLogStream(&v25);
        }
        else
        {
          v12 = std::__shared_ptr_access<BrickBreakerActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BrickBreakerActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
          if ( *(_BYTE *)(((unsigned __int64)&v12->cur_level_id_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)v12 - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v12->cur_level_id_ >> 3)
                                                                + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          HIDWORD(eventa._anon_0._M_allocated_capacity) = v12->cur_level_id_;
          if ( HIDWORD(eventa._anon_0._M_allocated_capacity) )
          {
            v13 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
            GalleryComp = (unsigned int)Scene::getGalleryComp(v13);
            if ( *(_BYTE *)(((unsigned __int64)(eventa._M_dataplus._M_p + 24) >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)(eventa._M_dataplus._M_p + 24) >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            SceneGalleryComp::findGallery<BrickBreakerGallery>((SceneGalleryComp *const)(v2 + 160), GalleryComp);
            if ( std::operator==<BrickBreakerGallery>(0LL, (const std::shared_ptr<BrickBreakerGallery> *)(v2 + 160)) )
            {
              common::milog::MiLogStream::create(
                &v25,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/brick_breaker_activity.cpp",
                "onGalleryBrickBreakerStartEvent",
                1233);
              common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                &v25,
                (const char (*)[34])"[BrickBreaker] gallery not exists");
              common::milog::MiLogStream::~MiLogStream(&v25);
            }
            else
            {
              if ( *(_BYTE *)(((eventa._M_string_length + 24) >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              BasicComp = Player::getBasicComp(*(Player *const *)(eventa._M_string_length + 24));
              PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v25, BasicComp);
              StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 0xEAEu, eventa);
              std::string::~string(&v25);
              common::tools::perf::make_shared<proto_log::PlayerLogBodyBrickBreakerGalleryStart>();
              ServiceBox::findService<GameserverService>();
              GameserverService::getConfig((GameserverService *const)&v24);
              v16 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v24);
              *(&eventa._anon_0._M_allocated_capacity + 1) = (std::string::size_type)data::ActivityBrickBreakerExcelConfigMgrBase::findBrickBreakerDungeonLevelExcelConfig(
                                                                                       &v16->design_config.txt_config_mgr.activity_brick_breaker_config_mgr,
                                                                                       HIDWORD(eventa._anon_0._M_allocated_capacity));
              std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v24);
              if ( *(&eventa._anon_0._M_allocated_capacity + 1) )
              {
                v17 = std::__shared_ptr_access<proto_log::PlayerLogBodyBrickBreakerGalleryStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBrickBreakerGalleryStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
                if ( *(_BYTE *)(((*(&eventa._anon_0._M_allocated_capacity + 1) + 12) >> 3) + 0x7FFF8000) != 0
                  && (char)(((eventa._anon_0._M_local_buf[8] + 12) & 7) + 3) >= *(_BYTE *)(((*(&eventa._anon_0._M_allocated_capacity
                                                                                             + 1)
                                                                                           + 12) >> 3)
                                                                                         + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                proto_log::PlayerLogBodyBrickBreakerGalleryStart::set_dungeon_id(
                  v17,
                  *(_DWORD *)(*(&eventa._anon_0._M_allocated_capacity + 1) + 12));
              }
              v18 = std::__shared_ptr_access<proto_log::PlayerLogBodyBrickBreakerGalleryStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBrickBreakerGalleryStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
              proto_log::PlayerLogBodyBrickBreakerGalleryStart::set_level_id(
                v18,
                HIDWORD(eventa._anon_0._M_allocated_capacity));
              v19 = std::__shared_ptr_access<proto_log::PlayerLogBodyBrickBreakerGalleryStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBrickBreakerGalleryStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
              v20 = std::__shared_ptr_access<BrickBreakerGallery,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BrickBreakerGallery,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
              BaseGallery::getTransaction[abi:cxx11]((std::string *)&v25, (const BaseGallery *const)v20);
              proto_log::PlayerLogBodyBrickBreakerGalleryStart::set_transaction(v19, (std::string *)&v25);
              std::string::~string(&v25);
              if ( *(_BYTE *)(((eventa._M_string_length + 24) >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              v21 = *(Player **)(eventa._M_string_length + 24);
              std::shared_ptr<google::protobuf::Message>::shared_ptr(&v24, 0LL);
              std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyBrickBreakerGalleryStart,void>(
                &p_body_ptr,
                (const std::shared_ptr<proto_log::PlayerLogBodyBrickBreakerGalleryStart> *)(v2 + 192));
              Player::printStatLog(v21, &p_body_ptr, &v24, 0xEu);
              std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
              std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v24);
              std::shared_ptr<proto_log::PlayerLogBodyBrickBreakerGalleryStart>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyBrickBreakerGalleryStart> *const)(v2 + 192));
              StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
            }
            std::shared_ptr<BrickBreakerGallery>::~shared_ptr((std::shared_ptr<BrickBreakerGallery> *const)(v2 + 160));
          }
        }
        std::shared_ptr<BrickBreakerActivity>::~shared_ptr((std::shared_ptr<BrickBreakerActivity> *const)(v2 + 128));
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 96));
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 64));
  }
  if ( v26 == (char *)v2 )
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

// Line 1250: range 0000000014F00032-0000000014F021E7
void __cdecl BrickBreakerActivity::onGalleryBrickBreakerSettleEvent(
        BrickBreakerActivity *const this,
        const GalleryBrickBreakerSettleEvent *event)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  Player *v9; // rax
  common::milog::MiLogStream *v10; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<BrickBreakerActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rdx
  std::__shared_ptr_access<BrickBreakerActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  Scene *v14; // rax
  uint32_t GalleryComp; // ecx
  common::milog::MiLogStream *v16; // rax
  std::vector<unsigned int>::reference v17; // rdx
  uint32_t v18; // r14d
  std::vector<unsigned int>::reference v19; // rdx
  int v20; // ecx
  std::vector<unsigned int>::reference v21; // rdx
  int v22; // r14d
  std::vector<unsigned int>::reference v23; // rdx
  int v24; // ecx
  uint32_t v25; // eax
  std::vector<unsigned int>::reference v26; // rdx
  int v27; // r14d
  std::vector<unsigned int>::reference v28; // rdx
  unsigned int *v29; // r8
  const unsigned int *v30; // r9
  std::__shared_ptr_access<BrickBreakerDungeonLevelFinishEvent,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rax
  std::__shared_ptr_access<BrickBreakerDungeonLevelFinishEvent,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rax
  PlayerEventComp *EventComp; // r14
  std::__shared_ptr_access<BrickBreakerWorldLevelFinishEvent,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rax
  std::__shared_ptr_access<BrickBreakerWorldLevelFinishEvent,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v35; // rax
  PlayerEventComp *v36; // r14
  Scene *v37; // rax
  bool v38; // al
  common::milog::MiLogStream *v39; // r14
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // r14
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBrickBreakerGalleryEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v45; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyBrickBreakerGalleryEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v46; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBrickBreakerGalleryEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v47; // r14
  std::__shared_ptr_access<BrickBreakerGallery,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v48; // rax
  std::__shared_ptr_access<BrickBreakerGallery,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v49; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBrickBreakerGalleryEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v50; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBrickBreakerGalleryEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v51; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBrickBreakerGalleryEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v52; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyBrickBreakerGalleryEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v53; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBrickBreakerGalleryEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v54; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyBrickBreakerGalleryEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v55; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyBrickBreakerGalleryEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v56; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v57; // rax
  uint32_t PlayerCount; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBrickBreakerGalleryEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v59; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyBrickBreakerGalleryEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v60; // rax
  google::protobuf::uint32 v61; // eax
  google::protobuf::uint32 v62; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBrickBreakerGalleryEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v63; // rax
  google::protobuf::uint32 v64; // eax
  google::protobuf::uint32 v65; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBrickBreakerGalleryEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v66; // rax
  google::protobuf::RepeatedField<unsigned int> *v67; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBrickBreakerGalleryEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v68; // rax
  google::protobuf::RepeatedField<unsigned int> *v69; // rax
  BrickBreakerMultistagePlay *v70; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBrickBreakerGalleryEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v71; // rax
  proto_log::BrickBreakerGalleryPlayerInfoLog *v72; // rax
  common::milog::MiLogStream *v73; // rax
  common::milog::MiLogStream *v74; // rax
  common::milog::MiLogStream *v75; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBrickBreakerGalleryEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v76; // rax
  uint32_t Uid; // eax
  google::protobuf::RepeatedField<unsigned int> *v78; // rax
  google::protobuf::RepeatedField<unsigned int> *v79; // rax
  Player *player; // r14
  PlayerSceneComp *SceneComp; // rax
  std::__shared_ptr_access<BrickBreakerMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v82; // rax
  PlayerSceneComp *v83; // rax
  std::string v85; // [rsp+0h] [rbp-420h]
  const GalleryBrickBreakerSettleEvent *eventa; // [rsp+10h] [rbp-410h]
  BrickBreakerActivity *thisa; // [rsp+18h] [rbp-408h]
  unsigned int v88; // [rsp+2Ch] [rbp-3F4h] BYREF
  unsigned int val; // [rsp+30h] [rbp-3F0h] BYREF
  proto::BrickBreakerSettleNotify_SettleReason reason; // [rsp+34h] [rbp-3ECh]
  uint32_t mp_mode; // [rsp+38h] [rbp-3E8h]
  BrickBreakerActivity::CurPlayMode play_mode; // [rsp+3Ch] [rbp-3E4h]
  uint32_t time_score; // [rsp+40h] [rbp-3E0h]
  uint32_t combo_score; // [rsp+44h] [rbp-3DCh]
  std::map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+48h] [rbp-3D8h] BYREF
  std::map<unsigned int,unsigned int>::iterator __for_end; // [rsp+50h] [rbp-3D0h] BYREF
  const ActivityBrickBreakerExcelConfigMgr *config_mgr; // [rsp+58h] [rbp-3C8h]
  const data::BrickBreakerDungeonLevelExcelConfig *dungeon_level_config_ptr; // [rsp+60h] [rbp-3C0h]
  const BrickBreakerWorldLevelConfig *world_level_config_ptr; // [rsp+68h] [rbp-3B8h]
  std::map<unsigned int,unsigned int> *__for_range; // [rsp+70h] [rbp-3B0h]
  const std::pair<unsigned int const,unsigned int> *v101; // [rsp+78h] [rbp-3A8h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *skill_id; // [rsp+80h] [rbp-3A0h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *skill_level; // [rsp+88h] [rbp-398h]
  proto::Uint32Pair *notify_pair; // [rsp+90h] [rbp-390h]
  const std::vector<proto::BreakoutElementReactionCounter> *__for_range_0; // [rsp+98h] [rbp-388h]
  const std::vector<proto::BreakoutElementReactionCounter> *__for_range_1; // [rsp+A0h] [rbp-380h]
  proto_log::BrickBreakerGalleryPlayerInfoLog *uid_info_0; // [rsp+A8h] [rbp-378h]
  std::vector<proto_log::BrickBreakerGalleryPlayerInfoLog> *__for_range_2; // [rsp+B0h] [rbp-370h]
  const proto_log::BrickBreakerGalleryPlayerInfoLog *uid_info; // [rsp+B8h] [rbp-368h]
  const proto::BreakoutElementReactionCounter *element_reaction_0; // [rsp+C0h] [rbp-360h]
  proto_log::BrickBreakerElementReactionCounterLog *brick_element_reaction; // [rsp+C8h] [rbp-358h]
  const proto::BreakoutElementReactionCounter *element_reaction; // [rsp+D0h] [rbp-350h]
  proto_log::BrickBreakerElementReactionCounterLog *ball_element_reaction; // [rsp+D8h] [rbp-348h]
  std::shared_ptr<google::protobuf::Message> v114; // [rsp+E0h] [rbp-340h] BYREF
  common::milog::MiLogStream v115; // [rsp+F0h] [rbp-330h] BYREF
  common::milog::MiLogStream v116; // [rsp+110h] [rbp-310h] BYREF
  char v117[752]; // [rsp+130h] [rbp-2F0h] BYREF

  *(&v85._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v85._anon_0._M_allocated_capacity = (std::string::size_type)event;
  v2 = (unsigned __int64)v117;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(704LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "15 48 1 11 holder:1354 64 4 13 level_id:1273 80 4 17 result_score:1304 96 16 14 scene_ptr:1255 1"
                        "28 16 21 owner_player_ptr:1261 160 16 23 owner_activity_ptr:1267 192 16 16 gallery_ptr:1279 224 "
                        "16 13 play_ptr:1348 256 16 12 log_ptr:1355 288 16 22 watcher_event_ptr:1326 320 24 20 score_para"
                        "m_vec:1288 384 24 22 chosen_avatar_vec:1400 448 24 21 chosen_skill_vec:1400 512 48 21 update_ski"
                        "ll_map:1323 592 72 11 notify:1311";
  *(_QWORD *)(v2 + 16) = BrickBreakerActivity::onGalleryBrickBreakerSettleEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234556924;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -219021312;
  v4[536862726] = -219021312;
  v4[536862727] = -219021312;
  v4[536862728] = -219021312;
  v4[536862729] = -219021312;
  v4[536862730] = -234881024;
  v4[536862731] = -218959118;
  v4[536862732] = -234881024;
  v4[536862733] = -218959118;
  v4[536862734] = -234881024;
  v4[536862735] = -218959118;
  v4[536862737] = -219021312;
  v4[536862738] = 62194;
  v4[536862740] = -218103808;
  v4[536862741] = -202116109;
  if ( BaseActivity::isOpening(this, 0) && !BaseActivity::isSettled(this) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 96));
    if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v116,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/brick_breaker_activity.cpp",
        "onGalleryBrickBreakerSettleEvent",
        1258);
      v6 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
             &v116,
             (const char (*)[41])"[BrickBreaker] getCurScene failed, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
      common::milog::MiLogStream::~MiLogStream(&v116);
    }
    else
    {
      std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      Scene::getOwnPlayer((const Scene *const)(v2 + 128));
      if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 128)) )
      {
        common::milog::MiLogStream::create(
          &v116,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/brick_breaker_activity.cpp",
          "onGalleryBrickBreakerSettleEvent",
          1264);
        v7 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
               &v116,
               (const char (*)[47])"[BrickBreaker] getOwnPlayer failed, owner_uid:");
        v8 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        val = Scene::getOwnerUid(v8);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
        common::milog::MiLogStream::~MiLogStream(&v116);
      }
      else
      {
        v9 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        Player::getActivityComp(v9);
        PlayerActivityComp::findOpenningActivity<BrickBreakerActivity>((PlayerActivityComp *const)(v2 + 160));
        if ( std::operator==<BrickBreakerActivity>(0LL, (const std::shared_ptr<BrickBreakerActivity> *)(v2 + 160)) )
        {
          common::milog::MiLogStream::create(
            &v116,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/brick_breaker_activity.cpp",
            "onGalleryBrickBreakerSettleEvent",
            1270);
          v10 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                  &v116,
                  (const char (*)[31])"activity is not opening, uid: ");
          v11 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
          val = Player::getUid(v11);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
          common::milog::MiLogStream::~MiLogStream(&v116);
        }
        else
        {
          v12 = std::__shared_ptr_access<BrickBreakerActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BrickBreakerActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
          if ( *(_BYTE *)(((unsigned __int64)&v12->cur_level_id_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)v12 - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v12->cur_level_id_ >> 3)
                                                                + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          *(_DWORD *)(v2 + 64) = v12->cur_level_id_;
          v13 = std::__shared_ptr_access<BrickBreakerActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BrickBreakerActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
          if ( *(_BYTE *)(((unsigned __int64)&v13->cur_play_mode_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&v13->cur_play_mode_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          play_mode = v13->cur_play_mode_;
          if ( *(_DWORD *)(v2 + 64) )
          {
            v14 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            GalleryComp = (unsigned int)Scene::getGalleryComp(v14);
            if ( *(_BYTE *)(((unsigned __int64)&event->gallery_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&event->gallery_id >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            SceneGalleryComp::findGallery<BrickBreakerGallery>((SceneGalleryComp *const)(v2 + 192), GalleryComp);
            if ( std::operator==<BrickBreakerGallery>(0LL, (const std::shared_ptr<BrickBreakerGallery> *)(v2 + 192)) )
            {
              common::milog::MiLogStream::create(
                &v116,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/brick_breaker_activity.cpp",
                "onGalleryBrickBreakerSettleEvent",
                1282);
              common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                &v116,
                (const char (*)[34])"[BrickBreaker] gallery not exists");
              common::milog::MiLogStream::~MiLogStream(&v116);
            }
            else
            {
              ServiceBox::findService<GameserverService>();
              GameserverService::getConfig((GameserverService *const)&v114);
              config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v114)->design_config.txt_config_mgr.activity_brick_breaker_config_mgr;
              std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v114);
              dungeon_level_config_ptr = data::ActivityBrickBreakerExcelConfigMgrBase::findBrickBreakerDungeonLevelExcelConfig(
                                           config_mgr,
                                           *(_DWORD *)(v2 + 64));
              world_level_config_ptr = ActivityBrickBreakerExcelConfigMgr::findWorldLevelConfig(
                                         config_mgr,
                                         *(_DWORD *)(v2 + 64));
              std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 320));
              if ( dungeon_level_config_ptr )
              {
                std::vector<unsigned int>::operator=(
                  (std::vector<unsigned int> *const)(v2 + 320),
                  &dungeon_level_config_ptr->score_param_list);
              }
              else if ( world_level_config_ptr )
              {
                std::vector<unsigned int>::operator=(
                  (std::vector<unsigned int> *const)(v2 + 320),
                  &world_level_config_ptr->score_param_vec);
              }
              if ( std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v2 + 320)) > 5 )
              {
                v17 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v2 + 320), 2uLL);
                if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                v18 = *v17;
                v19 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v2 + 320), 3uLL);
                if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                v20 = *v19;
                if ( *(_BYTE *)(((unsigned __int64)&event->time >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->time >> 3)
                                                                       + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                if ( v18 <= v20 * event->time )
                {
                  v25 = 0;
                }
                else
                {
                  v21 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v2 + 320), 2uLL);
                  if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)v21 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load4();
                  }
                  v22 = *v21;
                  v23 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v2 + 320), 3uLL);
                  if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)v23 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load4();
                  }
                  v24 = *v23;
                  if ( *(_BYTE *)(((unsigned __int64)&event->time >> 3) + 0x7FFF8000) != 0
                    && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->time >> 3)
                                                                         + 0x7FFF8000) )
                  {
                    __asan_report_load4();
                  }
                  v25 = v22 - v24 * event->time;
                }
                time_score = v25;
                v26 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v2 + 320), 4uLL);
                if ( *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v26 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                *(double *)&v85._M_string_length = (double)(int)*v26;
                if ( *(_BYTE *)(((unsigned __int64)&event->max_combo >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&event->max_combo >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4();
                }
                v27 = (int)(std::sqrt<unsigned int>(event->max_combo) * *(double *)&v85._M_string_length);
                v28 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v2 + 320), 5uLL);
                if ( *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v28 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                combo_score = v27 + *v28;
                if ( *(_BYTE *)(((unsigned __int64)&event->score >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&event->score >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4();
                }
                *(_DWORD *)(v2 + 80) = time_score + event->score + combo_score;
                if ( *(_BYTE *)(((unsigned __int64)&event->reason >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&event->reason >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4();
                }
                reason = event->reason;
                if ( world_level_config_ptr )
                {
                  if ( *(char *)(((unsigned __int64)&world_level_config_ptr->is_hard >> 3) + 0x7FFF8000) < 0 )
                    __asan_report_load1(&world_level_config_ptr->is_hard);
                  if ( world_level_config_ptr->is_hard
                    && reason == BrickBreakerSettleNotify_SettleReason_SETTLE_REASON_TIME_OUT )
                  {
                    reason = BrickBreakerSettleNotify_SettleReason_SETTLE_PLAY_END;
                  }
                }
                proto::BrickBreakerSettleNotify::BrickBreakerSettleNotify((proto::BrickBreakerSettleNotify *const)(v2 + 592));
                if ( *(_BYTE *)(((unsigned __int64)&event->gallery_id >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&event->gallery_id >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4();
                }
                proto::BrickBreakerSettleNotify::set_gallery_id(
                  (proto::BrickBreakerSettleNotify *const)(v2 + 592),
                  event->gallery_id);
                proto::BrickBreakerSettleNotify::set_reason((proto::BrickBreakerSettleNotify *const)(v2 + 592), reason);
                if ( *(_BYTE *)(((unsigned __int64)&event->time >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->time >> 3)
                                                                       + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                proto::BrickBreakerSettleNotify::set_time(
                  (proto::BrickBreakerSettleNotify *const)(v2 + 592),
                  event->time);
                proto::BrickBreakerSettleNotify::set_score(
                  (proto::BrickBreakerSettleNotify *const)(v2 + 592),
                  *(_DWORD *)(v2 + 80));
                if ( *(_BYTE *)(((unsigned __int64)&event->max_combo >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&event->max_combo >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4();
                }
                proto::BrickBreakerSettleNotify::set_combo(
                  (proto::BrickBreakerSettleNotify *const)(v2 + 592),
                  event->max_combo);
                proto::BrickBreakerSettleNotify::set_level_id(
                  (proto::BrickBreakerSettleNotify *const)(v2 + 592),
                  *(_DWORD *)(v2 + 64));
                proto::BrickBreakerSettleNotify::set_is_dungeon(
                  (proto::BrickBreakerSettleNotify *const)(v2 + 592),
                  play_mode == IN_DUNGEON);
                if ( reason == BrickBreakerSettleNotify_SettleReason_SETTLE_PLAY_END )
                {
                  *(_BYTE *)(v2 + 48) = 0;
                  std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v2 + 512));
                  if ( play_mode == IN_DUNGEON )
                  {
                    common::tools::perf::make_shared<BrickBreakerDungeonLevelFinishEvent,unsigned int &,unsigned int &,unsigned int const&>(
                      (unsigned int *)(v2 + 288),
                      (unsigned int *)(v2 + 64),
                      (const unsigned int *)(v2 + 80),
                      &event->max_combo,
                      v29,
                      v30);
                    v31 = std::__shared_ptr_access<BrickBreakerDungeonLevelFinishEvent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BrickBreakerDungeonLevelFinishEvent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 288));
                    std::vector<proto::BreakoutElementReactionCounter>::operator=(
                      &v31->ball_element_reaction_vec,
                      &event->ball_element_reaction_vec);
                    v32 = std::__shared_ptr_access<BrickBreakerDungeonLevelFinishEvent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BrickBreakerDungeonLevelFinishEvent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 288));
                    std::vector<proto::BreakoutElementReactionCounter>::operator=(
                      &v32->brick_element_reaction_vec,
                      &event->brick_element_reaction_vec);
                    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                      __asan_report_load8();
                    EventComp = Player::getEventComp(this->player_);
                    std::shared_ptr<BaseEvent>::shared_ptr<BrickBreakerDungeonLevelFinishEvent,void>(
                      (std::shared_ptr<BaseEvent> *const)&v114,
                      (const std::shared_ptr<BrickBreakerDungeonLevelFinishEvent> *)(v2 + 288));
                    PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v114);
                    std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v114);
                    BrickBreakerActivity::onDungeonLevelFinish(
                      this,
                      *(_DWORD *)(v2 + 64),
                      *(_DWORD *)(v2 + 80),
                      (std::map<unsigned int,unsigned int> *)(v2 + 512),
                      v2 + 48);
                    std::shared_ptr<BrickBreakerDungeonLevelFinishEvent>::~shared_ptr((std::shared_ptr<BrickBreakerDungeonLevelFinishEvent> *const)(v2 + 288));
                  }
                  else
                  {
                    common::tools::perf::make_shared<BrickBreakerWorldLevelFinishEvent,unsigned int &,unsigned int &,unsigned int const&>(
                      (unsigned int *)(v2 + 288),
                      (unsigned int *)(v2 + 64),
                      (const unsigned int *)(v2 + 80),
                      &event->max_combo,
                      v29,
                      v30);
                    v34 = std::__shared_ptr_access<BrickBreakerWorldLevelFinishEvent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BrickBreakerWorldLevelFinishEvent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 288));
                    std::vector<proto::BreakoutElementReactionCounter>::operator=(
                      &v34->ball_element_reaction_vec,
                      &event->ball_element_reaction_vec);
                    v35 = std::__shared_ptr_access<BrickBreakerWorldLevelFinishEvent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BrickBreakerWorldLevelFinishEvent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 288));
                    std::vector<proto::BreakoutElementReactionCounter>::operator=(
                      &v35->brick_element_reaction_vec,
                      &event->brick_element_reaction_vec);
                    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                      __asan_report_load8();
                    v36 = Player::getEventComp(this->player_);
                    std::shared_ptr<BaseEvent>::shared_ptr<BrickBreakerWorldLevelFinishEvent,void>(
                      (std::shared_ptr<BaseEvent> *const)&v114,
                      (const std::shared_ptr<BrickBreakerWorldLevelFinishEvent> *)(v2 + 288));
                    PlayerEventComp::notifyEvent(v36, (BaseEventPtr *)&v114);
                    std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v114);
                    BrickBreakerActivity::onWorldLevelFinish(
                      this,
                      *(_DWORD *)(v2 + 64),
                      *(_DWORD *)(v2 + 80),
                      (std::map<unsigned int,unsigned int> *)(v2 + 512),
                      v2 + 48);
                    std::shared_ptr<BrickBreakerWorldLevelFinishEvent>::~shared_ptr((std::shared_ptr<BrickBreakerWorldLevelFinishEvent> *const)(v2 + 288));
                  }
                  proto::BrickBreakerSettleNotify::set_is_new_record(
                    (proto::BrickBreakerSettleNotify *const)(v2 + 592),
                    *(_BYTE *)(v2 + 48));
                  __for_range = (std::map<unsigned int,unsigned int> *)(v2 + 512);
                  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin((std::map<unsigned int,unsigned int> *const)(v2 + 512))._M_node;
                  __for_end._M_node = std::map<unsigned int,unsigned int>::end((std::map<unsigned int,unsigned int> *const)(v2 + 512))._M_node;
                  while ( std::operator!=(&__for_begin, &__for_end) )
                  {
                    v101 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
                    skill_id = std::get<0ul,unsigned int const,unsigned int>(v101);
                    skill_level = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v101);
                    notify_pair = proto::BrickBreakerSettleNotify::add_update_skill_list((proto::BrickBreakerSettleNotify *const)(v2 + 592));
                    if ( *(_BYTE *)(((unsigned __int64)skill_id >> 3) + 0x7FFF8000) != 0
                      && (char)(((unsigned __int8)skill_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)skill_id >> 3)
                                                                                 + 0x7FFF8000) )
                    {
                      __asan_report_load4();
                    }
                    proto::Uint32Pair::set_key(notify_pair, *skill_id);
                    if ( *(_BYTE *)(((unsigned __int64)skill_level >> 3) + 0x7FFF8000) != 0
                      && (char)(((unsigned __int8)skill_level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)skill_level >> 3)
                                                                                    + 0x7FFF8000) )
                    {
                      __asan_report_load4();
                    }
                    proto::Uint32Pair::set_value(notify_pair, *skill_level);
                    std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
                  }
                  std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v2 + 512));
                }
                v37 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
                Scene::getMultistagePlayComp(v37);
                SceneMultistagePlayComp::findPlay<BrickBreakerMultistagePlay>((const SceneMultistagePlayComp *const)(v2 + 224));
                v38 = std::operator==<BrickBreakerMultistagePlay>(
                        0LL,
                        (const std::shared_ptr<BrickBreakerMultistagePlay> *)(v2 + 224));
                proto::BrickBreakerSettleNotify::set_is_single_mode(
                  (proto::BrickBreakerSettleNotify *const)(v2 + 592),
                  v38);
                common::milog::MiLogStream::create(
                  &v115,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/player/activity/brick_breaker_activity.cpp",
                  "onGalleryBrickBreakerSettleEvent",
                  1350);
                v39 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        &v115,
                        (const char (*)[16])"[BrickBreaker] ");
                google::protobuf::Message::ShortDebugString[abi:cxx11](
                  (std::string *)&v116,
                  (google::protobuf::Message *)(v2 + 592));
                v40 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                        v39,
                        (const std::string *)&v116);
                v41 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                        v40,
                        (const char (*)[13])", play_mode:");
                v88 = play_mode;
                v42 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v41, &v88);
                v43 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v42, (const char (*)[7])", uid:");
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                val = Player::getUid(this->player_);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v43, &val);
                std::string::~string(&v116);
                common::milog::MiLogStream::~MiLogStream(&v115);
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 592));
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                BasicComp = Player::getBasicComp(this->player_);
                PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v116, BasicComp);
                StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 0xEAFu, v85);
                std::string::~string(&v116);
                common::tools::perf::make_shared<proto_log::PlayerLogBodyBrickBreakerGalleryEnd>();
                if ( dungeon_level_config_ptr )
                {
                  v45 = std::__shared_ptr_access<proto_log::PlayerLogBodyBrickBreakerGalleryEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBrickBreakerGalleryEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 256));
                  if ( *(_BYTE *)(((unsigned __int64)&dungeon_level_config_ptr->dungeon_id >> 3) + 0x7FFF8000) != 0
                    && (char)((((_BYTE)dungeon_level_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_level_config_ptr->dungeon_id >> 3)
                                                                                            + 0x7FFF8000) )
                  {
                    __asan_report_load4();
                  }
                  proto_log::PlayerLogBodyBrickBreakerGalleryEnd::set_dungeon_id(
                    v45,
                    dungeon_level_config_ptr->dungeon_id);
                }
                v46 = std::__shared_ptr_access<proto_log::PlayerLogBodyBrickBreakerGalleryEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBrickBreakerGalleryEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 256));
                proto_log::PlayerLogBodyBrickBreakerGalleryEnd::set_level_id(v46, *(_DWORD *)(v2 + 64));
                v47 = std::__shared_ptr_access<proto_log::PlayerLogBodyBrickBreakerGalleryEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBrickBreakerGalleryEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 256));
                v48 = std::__shared_ptr_access<BrickBreakerGallery,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BrickBreakerGallery,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
                BaseGallery::getTransaction[abi:cxx11]((std::string *)&v116, (const BaseGallery *const)v48);
                proto_log::PlayerLogBodyBrickBreakerGalleryEnd::set_transaction(v47, (std::string *)&v116);
                std::string::~string(&v116);
                mp_mode = 0;
                v49 = std::__shared_ptr_access<BrickBreakerGallery,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BrickBreakerGallery,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
                if ( BrickBreakerGallery::getMatchId(v49) )
                {
                  mp_mode = 3;
                }
                else if ( play_mode == IN_MULTIPLE )
                {
                  mp_mode = 2;
                }
                else
                {
                  mp_mode = 1;
                }
                v50 = std::__shared_ptr_access<proto_log::PlayerLogBodyBrickBreakerGalleryEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBrickBreakerGalleryEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 256));
                proto_log::PlayerLogBodyBrickBreakerGalleryEnd::set_mp_mode(v50, mp_mode);
                v51 = std::__shared_ptr_access<proto_log::PlayerLogBodyBrickBreakerGalleryEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBrickBreakerGalleryEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 256));
                proto_log::PlayerLogBodyBrickBreakerGalleryEnd::set_result_type(v51, reason);
                v52 = std::__shared_ptr_access<proto_log::PlayerLogBodyBrickBreakerGalleryEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBrickBreakerGalleryEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 256));
                if ( *(_BYTE *)(((unsigned __int64)&eventa->time >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)eventa + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&eventa->time >> 3)
                                                                        + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                proto_log::PlayerLogBodyBrickBreakerGalleryEnd::set_use_time(v52, eventa->time);
                v53 = std::__shared_ptr_access<proto_log::PlayerLogBodyBrickBreakerGalleryEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBrickBreakerGalleryEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 256));
                proto_log::PlayerLogBodyBrickBreakerGalleryEnd::set_result_score(v53, *(_DWORD *)(v2 + 80));
                v54 = std::__shared_ptr_access<proto_log::PlayerLogBodyBrickBreakerGalleryEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBrickBreakerGalleryEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 256));
                if ( *(_BYTE *)(((unsigned __int64)&eventa->max_combo >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&eventa->max_combo >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4();
                }
                proto_log::PlayerLogBodyBrickBreakerGalleryEnd::set_max_combo(v54, eventa->max_combo);
                v55 = std::__shared_ptr_access<proto_log::PlayerLogBodyBrickBreakerGalleryEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBrickBreakerGalleryEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 256));
                if ( *(_BYTE *)(((unsigned __int64)&eventa->life_count >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)eventa + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&eventa->life_count >> 3)
                                                                        + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                proto_log::PlayerLogBodyBrickBreakerGalleryEnd::set_life_count(v55, eventa->life_count);
                v56 = std::__shared_ptr_access<proto_log::PlayerLogBodyBrickBreakerGalleryEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBrickBreakerGalleryEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 256));
                v57 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
                PlayerCount = Scene::getPlayerCount(v57);
                proto_log::PlayerLogBodyBrickBreakerGalleryEnd::set_player_num(v56, PlayerCount);
                v59 = std::__shared_ptr_access<proto_log::PlayerLogBodyBrickBreakerGalleryEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBrickBreakerGalleryEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 256));
                if ( *(_BYTE *)(((unsigned __int64)&eventa->remaining_boss_hp >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)eventa + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&eventa->remaining_boss_hp >> 3)
                                                                        + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                proto_log::PlayerLogBodyBrickBreakerGalleryEnd::set_remaining_boss_hp(v59, eventa->remaining_boss_hp);
                __for_range_0 = &eventa->ball_element_reaction_vec;
                __for_begin._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::vector<proto::BreakoutElementReactionCounter>::begin(&eventa->ball_element_reaction_vec)._M_current;
                __for_end._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::vector<proto::BreakoutElementReactionCounter>::end(__for_range_0)._M_current;
                while ( __gnu_cxx::operator!=<proto::BreakoutElementReactionCounter const*,std::vector<proto::BreakoutElementReactionCounter>>(
                          (const __gnu_cxx::__normal_iterator<const proto::BreakoutElementReactionCounter*,std::vector<proto::BreakoutElementReactionCounter> > *)&__for_begin,
                          (const __gnu_cxx::__normal_iterator<const proto::BreakoutElementReactionCounter*,std::vector<proto::BreakoutElementReactionCounter> > *)&__for_end) )
                {
                  element_reaction = __gnu_cxx::__normal_iterator<proto::BreakoutElementReactionCounter const*,std::vector<proto::BreakoutElementReactionCounter>>::operator*((const __gnu_cxx::__normal_iterator<const proto::BreakoutElementReactionCounter*,std::vector<proto::BreakoutElementReactionCounter> > *const)&__for_begin);
                  v60 = std::__shared_ptr_access<proto_log::PlayerLogBodyBrickBreakerGalleryEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBrickBreakerGalleryEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 256));
                  ball_element_reaction = proto_log::PlayerLogBodyBrickBreakerGalleryEnd::add_ball_element_reaction_list(v60);
                  v61 = proto::BreakoutElementReactionCounter::element_reaction(element_reaction);
                  proto_log::BrickBreakerElementReactionCounterLog::set_element_reaction(ball_element_reaction, v61);
                  v62 = proto::BreakoutElementReactionCounter::count(element_reaction);
                  proto_log::BrickBreakerElementReactionCounterLog::set_count(ball_element_reaction, v62);
                  __gnu_cxx::__normal_iterator<proto::BreakoutElementReactionCounter const*,std::vector<proto::BreakoutElementReactionCounter>>::operator++((__gnu_cxx::__normal_iterator<const proto::BreakoutElementReactionCounter*,std::vector<proto::BreakoutElementReactionCounter> > *const)&__for_begin);
                }
                __for_range_1 = &eventa->brick_element_reaction_vec;
                __for_begin._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::vector<proto::BreakoutElementReactionCounter>::begin(&eventa->brick_element_reaction_vec)._M_current;
                __for_end._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::vector<proto::BreakoutElementReactionCounter>::end(__for_range_1)._M_current;
                while ( __gnu_cxx::operator!=<proto::BreakoutElementReactionCounter const*,std::vector<proto::BreakoutElementReactionCounter>>(
                          (const __gnu_cxx::__normal_iterator<const proto::BreakoutElementReactionCounter*,std::vector<proto::BreakoutElementReactionCounter> > *)&__for_begin,
                          (const __gnu_cxx::__normal_iterator<const proto::BreakoutElementReactionCounter*,std::vector<proto::BreakoutElementReactionCounter> > *)&__for_end) )
                {
                  element_reaction_0 = __gnu_cxx::__normal_iterator<proto::BreakoutElementReactionCounter const*,std::vector<proto::BreakoutElementReactionCounter>>::operator*((const __gnu_cxx::__normal_iterator<const proto::BreakoutElementReactionCounter*,std::vector<proto::BreakoutElementReactionCounter> > *const)&__for_begin);
                  v63 = std::__shared_ptr_access<proto_log::PlayerLogBodyBrickBreakerGalleryEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBrickBreakerGalleryEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 256));
                  brick_element_reaction = proto_log::PlayerLogBodyBrickBreakerGalleryEnd::add_brick_element_reaction_list(v63);
                  v64 = proto::BreakoutElementReactionCounter::element_reaction(element_reaction_0);
                  proto_log::BrickBreakerElementReactionCounterLog::set_element_reaction(brick_element_reaction, v64);
                  v65 = proto::BreakoutElementReactionCounter::count(element_reaction_0);
                  proto_log::BrickBreakerElementReactionCounterLog::set_count(brick_element_reaction, v65);
                  __gnu_cxx::__normal_iterator<proto::BreakoutElementReactionCounter const*,std::vector<proto::BreakoutElementReactionCounter>>::operator++((__gnu_cxx::__normal_iterator<const proto::BreakoutElementReactionCounter*,std::vector<proto::BreakoutElementReactionCounter> > *const)&__for_begin);
                }
                v66 = std::__shared_ptr_access<proto_log::PlayerLogBodyBrickBreakerGalleryEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBrickBreakerGalleryEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 256));
                v67 = proto_log::PlayerLogBodyBrickBreakerGalleryEnd::mutable_score_list(v66);
                common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&eventa->score_vec, v67);
                v68 = std::__shared_ptr_access<proto_log::PlayerLogBodyBrickBreakerGalleryEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBrickBreakerGalleryEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 256));
                v69 = proto_log::PlayerLogBodyBrickBreakerGalleryEnd::mutable_remaining_boss_hp_list(v68);
                common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(
                  &eventa->remaining_boss_hp_vec,
                  v69);
                if ( std::operator!=<BrickBreakerMultistagePlay>(
                       0LL,
                       (const std::shared_ptr<BrickBreakerMultistagePlay> *)(v2 + 224)) )
                {
                  std::vector<proto_log::BrickBreakerGalleryPlayerInfoLog>::vector((std::vector<proto_log::BrickBreakerGalleryPlayerInfoLog> *const)(v2 + 448));
                  v70 = std::__shared_ptr_access<BrickBreakerMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BrickBreakerMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 224));
                  BrickBreakerMultistagePlay::getBrickBreakerPlayerInfoLog(
                    v70,
                    (std::vector<proto_log::BrickBreakerGalleryPlayerInfoLog> *)(v2 + 448));
                  __for_range_2 = (std::vector<proto_log::BrickBreakerGalleryPlayerInfoLog> *)(v2 + 448);
                  __for_begin._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::vector<proto_log::BrickBreakerGalleryPlayerInfoLog>::begin((std::vector<proto_log::BrickBreakerGalleryPlayerInfoLog> *const)(v2 + 448))._M_current;
                  __for_end._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::vector<proto_log::BrickBreakerGalleryPlayerInfoLog>::end(__for_range_2)._M_current;
                  while ( __gnu_cxx::operator!=<proto_log::BrickBreakerGalleryPlayerInfoLog *,std::vector<proto_log::BrickBreakerGalleryPlayerInfoLog>>(
                            (const __gnu_cxx::__normal_iterator<proto_log::BrickBreakerGalleryPlayerInfoLog*,std::vector<proto_log::BrickBreakerGalleryPlayerInfoLog> > *)&__for_begin,
                            (const __gnu_cxx::__normal_iterator<proto_log::BrickBreakerGalleryPlayerInfoLog*,std::vector<proto_log::BrickBreakerGalleryPlayerInfoLog> > *)&__for_end) )
                  {
                    uid_info = __gnu_cxx::__normal_iterator<proto_log::BrickBreakerGalleryPlayerInfoLog *,std::vector<proto_log::BrickBreakerGalleryPlayerInfoLog>>::operator*((const __gnu_cxx::__normal_iterator<proto_log::BrickBreakerGalleryPlayerInfoLog*,std::vector<proto_log::BrickBreakerGalleryPlayerInfoLog> > *const)&__for_begin);
                    v71 = std::__shared_ptr_access<proto_log::PlayerLogBodyBrickBreakerGalleryEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBrickBreakerGalleryEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 256));
                    v72 = proto_log::PlayerLogBodyBrickBreakerGalleryEnd::add_uid_info_list(v71);
                    proto_log::BrickBreakerGalleryPlayerInfoLog::operator=(v72, uid_info);
                    __gnu_cxx::__normal_iterator<proto_log::BrickBreakerGalleryPlayerInfoLog *,std::vector<proto_log::BrickBreakerGalleryPlayerInfoLog>>::operator++((__gnu_cxx::__normal_iterator<proto_log::BrickBreakerGalleryPlayerInfoLog*,std::vector<proto_log::BrickBreakerGalleryPlayerInfoLog> > *const)&__for_begin);
                  }
                  std::vector<proto_log::BrickBreakerGalleryPlayerInfoLog>::~vector((std::vector<proto_log::BrickBreakerGalleryPlayerInfoLog> *const)(v2 + 448));
                }
                else
                {
                  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 384));
                  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 448));
                  if ( (unsigned int)BrickBreakerActivity::getAvatarAndSkillVec(
                                       thisa,
                                       *(_DWORD *)(v2 + 64),
                                       play_mode == IN_DUNGEON,
                                       (std::vector<unsigned int> *)(v2 + 384),
                                       (std::vector<unsigned int> *)(v2 + 448)) )
                  {
                    common::milog::MiLogStream::create(
                      &v116,
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/player/activity/brick_breaker_activity.cpp",
                      "onGalleryBrickBreakerSettleEvent",
                      1404);
                    v73 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                            &v116,
                            (const char (*)[38])"getAvatarAndSkillVec fail, play_mode:");
                    val = play_mode;
                    v74 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v73, &val);
                    v75 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                            v74,
                            (const char (*)[12])", level_id:");
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v75,
                      (const unsigned int *)(v2 + 64));
                    common::milog::MiLogStream::~MiLogStream(&v116);
                  }
                  v76 = std::__shared_ptr_access<proto_log::PlayerLogBodyBrickBreakerGalleryEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBrickBreakerGalleryEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 256));
                  uid_info_0 = proto_log::PlayerLogBodyBrickBreakerGalleryEnd::add_uid_info_list(v76);
                  if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8();
                  Uid = Player::getUid(thisa->player_);
                  proto_log::BrickBreakerGalleryPlayerInfoLog::set_uid(uid_info_0, Uid);
                  v78 = proto_log::BrickBreakerGalleryPlayerInfoLog::mutable_avatar_id_list(uid_info_0);
                  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(
                    (const std::vector<unsigned int> *)(v2 + 384),
                    v78);
                  v79 = proto_log::BrickBreakerGalleryPlayerInfoLog::mutable_skill_id_list(uid_info_0);
                  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(
                    (const std::vector<unsigned int> *)(v2 + 448),
                    v79);
                  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 448));
                  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 384));
                }
                if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                player = thisa->player_;
                std::shared_ptr<google::protobuf::Message>::shared_ptr(&v114, 0LL);
                std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyBrickBreakerGalleryEnd,void>(
                  (std::shared_ptr<google::protobuf::Message> *const)(v2 + 288),
                  (const std::shared_ptr<proto_log::PlayerLogBodyBrickBreakerGalleryEnd> *)(v2 + 256));
                Player::printStatLog(player, (MessagePtr *)(v2 + 288), &v114, 0xEu);
                std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)(v2 + 288));
                std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v114);
                if ( std::operator!=<BrickBreakerMultistagePlay>(
                       0LL,
                       (const std::shared_ptr<BrickBreakerMultistagePlay> *)(v2 + 224)) )
                {
                  if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8();
                  SceneComp = Player::getSceneComp(thisa->player_);
                  if ( PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
                  {
                    v82 = std::__shared_ptr_access<BrickBreakerMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BrickBreakerMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 224));
                    SceneMultistagePlay::endStage(v82, 1);
                  }
                }
                if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                v83 = Player::getSceneComp(thisa->player_);
                if ( PlayerSceneComp::isInMyPlayerWorld(v83) && play_mode != IN_MULTIPLE )
                  BrickBreakerActivity::onBrickBreakerEnd(thisa, 1);
                std::shared_ptr<proto_log::PlayerLogBodyBrickBreakerGalleryEnd>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyBrickBreakerGalleryEnd> *const)(v2 + 256));
                StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
                std::shared_ptr<BrickBreakerMultistagePlay>::~shared_ptr((std::shared_ptr<BrickBreakerMultistagePlay> *const)(v2 + 224));
                proto::BrickBreakerSettleNotify::~BrickBreakerSettleNotify((proto::BrickBreakerSettleNotify *const)(v2 + 592));
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v116,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/player/activity/brick_breaker_activity.cpp",
                  "onGalleryBrickBreakerSettleEvent",
                  1299);
                v16 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
                        &v116,
                        (const char (*)[60])"[BrickBreaker] score_param_vec size fail, score_param_vec: ");
                common::milog::MiLogStream::operator<<<unsigned int>(v16, (const std::vector<unsigned int> *)(v2 + 320));
                common::milog::MiLogStream::~MiLogStream(&v116);
              }
              std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 320));
            }
            std::shared_ptr<BrickBreakerGallery>::~shared_ptr((std::shared_ptr<BrickBreakerGallery> *const)(v2 + 192));
          }
        }
        std::shared_ptr<BrickBreakerActivity>::~shared_ptr((std::shared_ptr<BrickBreakerActivity> *const)(v2 + 160));
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 128));
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 96));
  }
  if ( v117 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8044) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8050) = 0LL;
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1430: range 0000000014F021E8-0000000014F02A25
void __cdecl BrickBreakerActivity::onBrickBreakerEnd(BrickBreakerActivity *const this, bool is_force_unload)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  PlayerSceneComp *SceneComp; // rax
  char v10; // al
  common::milog::MiLogStream *v11; // r14
  int v12; // r14d
  ActivityBrickBreakerExcelConfigMgr *p_activity_brick_breaker_config_mgr; // rcx
  common::milog::MiLogStream *v14; // rax
  Scene *v15; // rax
  unsigned __int64 v16; // rax
  bool v17; // r14
  common::milog::MiLogStream *v18; // rax
  unsigned int (__fastcall *v19)(SceneBlockGroupComp *, std::vector<unsigned int> *, bool); // [rsp+10h] [rbp-100h]
  common::milog::MiLogStream *v20; // [rsp+18h] [rbp-F8h]
  SceneBlockGroupComp *BlockGroupComp; // [rsp+18h] [rbp-F8h]
  std::allocator<unsigned int> __a; // [rsp+3Fh] [rbp-D1h] BYREF
  unsigned int val; // [rsp+40h] [rbp-D0h] BYREF
  std::initializer_list<unsigned int> __l; // [rsp+44h] [rbp-CCh] BYREF
  std::vector<unsigned int> v25; // [rsp+60h] [rbp-B0h] BYREF
  common::milog::MiLogStream v26; // [rsp+80h] [rbp-90h] BYREF
  char v27[112]; // [rsp+A0h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 scene_ptr:1435";
  *(_QWORD *)(v2 + 16) = BrickBreakerActivity::onBrickBreakerEnd;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::milog::MiLogStream::create(
    &v26,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/brick_breaker_activity.cpp",
    "onBrickBreakerEnd",
    1431);
  v20 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
          &v26,
          (const char (*)[53])"[BrickBreaker] onBrickBreakerEnd finished, host_uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &val);
  v6 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v5, (const char (*)[18])", cur_play_mode_:");
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_play_mode_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_play_mode_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  LODWORD(__l._M_array) = this->cur_play_mode_;
  v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)&__l);
  v8 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v7, (const char (*)[12])", level_id:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->cur_level_id_);
  common::milog::MiLogStream::~MiLogStream(&v26);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = Player::getSceneComp(this->player_);
  if ( !PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
    goto LABEL_15;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_play_mode_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_play_mode_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->cur_play_mode_ == IN_DUNGEON )
LABEL_15:
    v10 = 0;
  else
    v10 = 1;
  if ( !v10 )
    goto LABEL_37;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getMainWorldScene((PlayerSceneComp *const)(v2 + 32));
  if ( std::operator==<PlayerWorldScene>(0LL, (const std::shared_ptr<PlayerWorldScene> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/brick_breaker_activity.cpp",
      "onBrickBreakerEnd",
      1438);
    v11 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
            &v26,
            (const char (*)[47])"[BrickBreaker] getMainWorldScene failed, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    LODWORD(__l._M_array) = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)&__l);
    common::milog::MiLogStream::~MiLogStream(&v26);
    v12 = 0;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)((char *)&__l._M_len + 4));
    p_activity_brick_breaker_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(
                                             (const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&__l._M_len
                                           + 4)->design_config.txt_config_mgr.activity_brick_breaker_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_level_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_level_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(std::initializer_list<unsigned int>::iterator *)((char *)&__l._M_array + 4) = (std::initializer_list<unsigned int>::iterator)ActivityBrickBreakerExcelConfigMgr::findWorldLevelConfig(p_activity_brick_breaker_config_mgr, this->cur_level_id_);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)((char *)&__l._M_len + 4));
    if ( *(std::initializer_list<unsigned int>::iterator *)((char *)&__l._M_array + 4) )
    {
      v15 = (Scene *)std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      BlockGroupComp = Scene::getBlockGroupComp(v15);
      if ( *(_BYTE *)(((unsigned __int64)BlockGroupComp >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v16 = (unsigned __int64)(BlockGroupComp->_vptr_SceneCompBase + 13);
      if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
        v16 = __asan_report_load8();
      v19 = *(unsigned int (__fastcall **)(SceneBlockGroupComp *, std::vector<unsigned int> *, bool))v16;
      if ( *(_BYTE *)(((unsigned __int64)(*(std::initializer_list<unsigned int>::iterator *)((char *)&__l._M_array + 4)
                                        + 1) >> 3)
                    + 0x7FFF8000) != 0
        && (char)(((BYTE4(__l._M_array) + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(*(std::initializer_list<unsigned int>::iterator *)((char *)&__l._M_array + 4)
                                                                                       + 1) >> 3)
                                                                   + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      LODWORD(__l._M_array) = (*(_DWORD **)((char *)&__l._M_array + 4))[1];
      std::allocator<unsigned int>::allocator(&__a);
      std::vector<unsigned int>::vector(&v25, (std::initializer_list<unsigned int>)__PAIR128__(1LL, &__l), &__a);
      v17 = v19(BlockGroupComp, &v25, is_force_unload) != 0;
      std::vector<unsigned int>::~vector(&v25);
      std::allocator<unsigned int>::~allocator(&__a);
      if ( v17 )
      {
        common::milog::MiLogStream::create(
          &v26,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/brick_breaker_activity.cpp",
          "onBrickBreakerEnd",
          1450);
        v18 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                &v26,
                (const char (*)[50])"[BrickBreaker] unregisterGroups failed, group_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
          v18,
          *(std::initializer_list<unsigned int>::iterator *)((char *)&__l._M_array + 4) + 1);
        common::milog::MiLogStream::~MiLogStream(&v26);
      }
      v12 = 1;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/brick_breaker_activity.cpp",
        "onBrickBreakerEnd",
        1444);
      v14 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
              &v26,
              (const char (*)[58])"[BrickBreaker] can not find world level config, level_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &this->cur_level_id_);
      common::milog::MiLogStream::~MiLogStream(&v26);
      v12 = 0;
    }
  }
  std::shared_ptr<PlayerWorldScene>::~shared_ptr((std::shared_ptr<PlayerWorldScene> *const)(v2 + 32));
  if ( v12 == 1 )
  {
LABEL_37:
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_level_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_level_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&this->cur_level_id_);
    }
    this->cur_level_id_ = 0;
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_play_mode_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->cur_play_mode_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->cur_play_mode_);
    }
    this->cur_play_mode_ = NONE_3;
  }
  if ( v27 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1459: range 0000000014F02A26-0000000014F031DD
int32_t __cdecl BrickBreakerActivity::initEnterSceneAvatar(
        BrickBreakerActivity *const this,
        ScenePtr *p_dest_scene_ptr,
        std::vector<std::shared_ptr<Avatar>> *enter_scene_avatar_vec,
        AvatarPtr *appear_avatar_ptr)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // r14
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v11; // rdx
  uint32_t AvatarComp; // eax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  const std::shared_ptr<Avatar> *v16; // rdx
  common::milog::MiLogStream *v17; // rax
  int32_t result; // eax
  std::vector<unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-178h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+30h] [rbp-170h] BYREF
  unsigned __int64 __args_0; // [rsp+38h] [rbp-168h] BYREF
  BrickBreakerDungeonContext *context; // [rsp+40h] [rbp-160h]
  std::vector<unsigned int> *__for_range; // [rsp+48h] [rbp-158h]
  common::milog::MiLogStream v26; // [rsp+50h] [rbp-150h] BYREF
  char v27[304]; // [rsp+70h] [rbp-130h] BYREF

  v4 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(256LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 32 4 14 avatar_id:1474 48 16 22 dungeon_scene_ptr:1460 80 16 22 formal_avatar_ptr:1477 112 24 "
                        "20 avatar_guid_vec:1473 176 40 24 dungeon_context_opt:1466";
  *(_QWORD *)(v4 + 16) = BrickBreakerActivity::initEnterSceneAvatar;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61956;
  v6[536862722] = 62194;
  v6[536862723] = 62194;
  v6[536862724] = -218959360;
  v6[536862725] = 62194;
  v6[536862726] = -218103808;
  v6[536862727] = -202116109;
  std::dynamic_pointer_cast<DungeonScene,Scene>((const std::shared_ptr<Scene> *)(v4 + 48));
  if ( std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v4 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/brick_breaker_activity.cpp",
      "initEnterSceneAvatar",
      1463);
    v7 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
           &v26,
           (const char (*)[50])"[BrickBreaker] dungeon_scene_ptr is nullptr, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_DWORD *)(v4 + 32) = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 32));
    common::milog::MiLogStream::~MiLogStream(&v26);
    v8 = -1;
  }
  else
  {
    v9 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 48));
    DungeonScene::getDungeonExtraData<BrickBreakerDungeonContext>(
      (std::optional<BrickBreakerDungeonContext> *)(v4 + 176),
      v9);
    if ( !std::optional<BrickBreakerDungeonContext>::has_value((const std::optional<BrickBreakerDungeonContext> *const)(v4 + 176)) )
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/brick_breaker_activity.cpp",
        "initEnterSceneAvatar",
        1469);
      v10 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
              &v26,
              (const char (*)[50])"[BrickBreaker] dungeon context has not data, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      *(_DWORD *)(v4 + 32) = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v4 + 32));
      common::milog::MiLogStream::~MiLogStream(&v26);
      v8 = -1;
    }
    else
    {
      context = std::optional<BrickBreakerDungeonContext>::value((std::optional<BrickBreakerDungeonContext> *const)(v4 + 176));
      std::vector<unsigned long>::vector((std::vector<long unsigned int> *const)(v4 + 112));
      __for_range = &context->enter_scene_avatar_id_vec;
      __for_begin._M_current = std::vector<unsigned int>::begin(&context->enter_scene_avatar_id_vec)._M_current;
      __for_end._M_current = std::vector<unsigned int>::end(&context->enter_scene_avatar_id_vec)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
      {
        v11 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
        if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v4 + 32) = *v11;
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        AvatarComp = (unsigned int)Player::getAvatarComp(this->player_);
        PlayerAvatarComp::findFormalAvatarByAvatarId((const PlayerAvatarComp *const)(v4 + 80), AvatarComp);
        if ( std::operator==<FormalAvatar>(0LL, (const std::shared_ptr<FormalAvatar> *)(v4 + 80)) )
        {
          common::milog::MiLogStream::create(
            &v26,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/brick_breaker_activity.cpp",
            "initEnterSceneAvatar",
            1480);
          v13 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                  &v26,
                  (const char (*)[41])"[BrickBreaker] formal_avatar_ptr nullptr");
          v14 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v13, (const char (*)[13])", avatar_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v4 + 32));
          common::milog::MiLogStream::~MiLogStream(&v26);
        }
        else
        {
          std::vector<std::shared_ptr<Avatar>>::emplace_back<std::shared_ptr&<FormalAvatar>>(
            enter_scene_avatar_vec,
            (std::shared_ptr<FormalAvatar> *)(v4 + 80),
            (std::shared_ptr<FormalAvatar> *)(v4 + 80));
          v15 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
          __args_0 = Avatar::getGuid(v15);
          std::vector<unsigned long>::emplace_back<unsigned long>(
            (std::vector<long unsigned int> *const)(v4 + 112),
            &__args_0,
            &__args_0);
        }
        std::shared_ptr<FormalAvatar>::~shared_ptr((std::shared_ptr<FormalAvatar> *const)(v4 + 80));
        __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
      }
      if ( std::vector<std::shared_ptr<Avatar>>::empty(enter_scene_avatar_vec) )
      {
        common::milog::MiLogStream::create(
          &v26,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/brick_breaker_activity.cpp",
          "initEnterSceneAvatar",
          1488);
        common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
          &v26,
          (const char (*)[44])"[BrickBreaker] enter_scene_avatar_vec empty");
        common::milog::MiLogStream::~MiLogStream(&v26);
        v8 = -1;
      }
      else
      {
        v16 = std::vector<std::shared_ptr<Avatar>>::operator[](enter_scene_avatar_vec, 0LL);
        std::shared_ptr<Avatar>::operator=(appear_avatar_ptr, v16);
        if ( BrickBreakerActivity::checkAndReviveAvatar(this, (const std::vector<long unsigned int> *)(v4 + 112)) )
        {
          common::milog::MiLogStream::create(
            &v26,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/brick_breaker_activity.cpp",
            "initEnterSceneAvatar",
            1495);
          v17 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
                  &v26,
                  (const char (*)[61])"[BrickBreaker] checkAndReviveAvatar failed, avatar_guid_vec:");
          common::milog::MiLogStream::operator<<<unsigned long>(v17, (const std::vector<long unsigned int> *)(v4 + 112));
          common::milog::MiLogStream::~MiLogStream(&v26);
          v8 = -1;
        }
        else
        {
          v8 = 0;
        }
      }
      std::vector<unsigned long>::~vector((std::vector<long unsigned int> *const)(v4 + 112));
    }
    std::optional<BrickBreakerDungeonContext>::~optional((std::optional<BrickBreakerDungeonContext> *const)(v4 + 176));
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v4 + 48));
  result = v8;
  if ( v27 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
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

// Line 1502: range 0000000014F031DE-0000000014F0388E
int32_t __cdecl BrickBreakerActivity::brickBreakerQuit(BrickBreakerActivity *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  PlayerSceneComp *SceneComp; // rax
  int32_t v5; // r14d
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  PlayerSceneComp *v10; // rax
  Scene *v11; // rax
  bool v12; // r14
  int32_t result; // eax
  PlayerSceneComp *v14; // [rsp+10h] [rbp-120h]
  const data::SceneExcelConfig *config_ptr; // [rsp+28h] [rbp-108h]
  std::shared_ptr<Config> v16; // [rsp+30h] [rbp-100h] BYREF
  common::milog::MiLogStream v17; // [rsp+40h] [rbp-F0h] BYREF
  TransferReason p_reason; // [rsp+60h] [rbp-D0h] BYREF
  char v19[144]; // [rsp+A0h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 13 scene_id:1515 64 16 14 scene_ptr:1509";
  *(_QWORD *)(v1 + 16) = BrickBreakerActivity::brickBreakerQuit;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = Player::getSceneComp(this->player_);
  if ( !PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/brick_breaker_activity.cpp",
      "brickBreakerQuit",
      1506);
    common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
      &v17,
      (const char (*)[38])"[BrickBreaker] not in my player world");
    common::milog::MiLogStream::~MiLogStream(&v17);
    v5 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v1 + 64));
    if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v1 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/brick_breaker_activity.cpp",
        "brickBreakerQuit",
        1512);
      common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
        &v17,
        (const char (*)[36])"[BrickBreaker] cur scene is nullptr");
      common::milog::MiLogStream::~MiLogStream(&v17);
      v5 = -1;
    }
    else
    {
      v6 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      *(_DWORD *)(v1 + 48) = Scene::getSceneId(v6);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v16);
      v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v16);
      config_ptr = data::SceneExcelConfigMgrBase::findSceneExcelConfig(
                     &v7->design_config.txt_config_mgr.scene_config_mgr,
                     *(_DWORD *)(v1 + 48));
      std::shared_ptr<Config>::~shared_ptr(&v16);
      if ( config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&config_ptr->type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->type >> 3)
                                                                    + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( !SceneExcelConfigMgr::isPlayerScene(config_ptr->type) )
        {
          common::milog::MiLogStream::create(
            &v17,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/brick_breaker_activity.cpp",
            "brickBreakerQuit",
            1525);
          v9 = common::milog::MiLogStream::operator<<<char [76],(char *[76])0>(
                 &v17,
                 (const char (*)[76])"[BrickBreaker] start location is not player scene, dont transfer, scene_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v1 + 48));
          common::milog::MiLogStream::~MiLogStream(&v17);
          v5 = -1;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v10 = Player::getSceneComp(this->player_);
          if ( PlayerSceneComp::isInTransfer(v10) )
          {
            common::milog::MiLogStream::create(
              &v17,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/activity/brick_breaker_activity.cpp",
              "brickBreakerQuit",
              1531);
            common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
              &v17,
              (const char (*)[37])"[BrickBreaker] player is in transfer");
            common::milog::MiLogStream::~MiLogStream(&v17);
            v5 = -1;
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v14 = Player::getSceneComp(this->player_);
            TransferReason::TransferReason(&p_reason, ENTER_REASON_BRICK_BREAKER_SINGLE);
            v11 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
            v12 = PlayerSceneComp::jumpToScene(v14, v11, &this->start_pos_, &this->start_rot_, 0, &p_reason) != 0;
            TransferReason::~TransferReason(&p_reason);
            if ( v12 )
            {
              common::milog::MiLogStream::create(
                &v17,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/player/activity/brick_breaker_activity.cpp",
                "brickBreakerQuit",
                1536);
              common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                &v17,
                (const char (*)[41])"[BrickBreaker] player jumpToScene failed");
              common::milog::MiLogStream::~MiLogStream(&v17);
              v5 = -1;
            }
            else
            {
              v5 = 0;
            }
          }
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v17,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/brick_breaker_activity.cpp",
          "brickBreakerQuit",
          1519);
        v8 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
               &v17,
               (const char (*)[54])"[BrickBreaker] findSceneExcelConfig failed, scene_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v1 + 48));
        common::milog::MiLogStream::~MiLogStream(&v17);
        v5 = -1;
      }
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 64));
  }
  result = v5;
  if ( v19 == (char *)v1 )
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

// Line 1543: range 0000000014F03890-0000000014F03AC3
void __cdecl BrickBreakerActivity::onLeaveSceneEvent(BrickBreakerActivity *const this, const LeaveSceneEvent *event)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  DungeonScene *v5; // rax
  char v7[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 22 dungeon_scene_ptr:1548";
  *(_QWORD *)(v2 + 16) = BrickBreakerActivity::onLeaveSceneEvent;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  Vector3::reset(&this->start_pos_);
  Vector3::reset(&this->start_rot_);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene<DungeonScene>((PlayerSceneComp *const)(v2 + 32));
  if ( !std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v2 + 32)) )
  {
    v5 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( DungeonScene::isEnterByBrickBreakerActivity(v5) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->cur_level_id_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_level_id_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(&this->cur_level_id_);
      }
      this->cur_level_id_ = 0;
      if ( *(_BYTE *)(((unsigned __int64)&this->cur_play_mode_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->cur_play_mode_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->cur_play_mode_);
      }
      this->cur_play_mode_ = NONE_3;
    }
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 32));
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1559: range 0000000014F0406C-0000000014F04AC2
__int64 __fastcall BrickBreakerActivity::checkBrickBreakerDraftExec(
        BrickBreakerActivity *const this,
        uint32_t draft_id,
        std::unordered_map<unsigned int,int> *fail_uid_reason_map)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  unsigned int v7; // r14d
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  char v10; // al
  std::unordered_map<unsigned int,int>::mapped_type *v11; // rax
  _DWORD *v12; // rdx
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v14; // rax
  uint32_t Uid; // r14d
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  common::milog::MiLogStream *v18; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  bool v20; // r14
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  Scene *v23; // rax
  bool v24; // r14
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // r14
  __int64 result; // rax
  BrickBreakerActivity::checkBrickBreakerDraftExec::<lambda(Player&)> v27; // [rsp-20h] [rbp-170h]
  const data::DraftExcelConfig *draft_config_ptr; // [rsp+28h] [rbp-128h]
  SceneMultistagePlayComp v30; // [rsp+30h] [rbp-120h] BYREF
  char v31[208]; // [rsp+80h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 4 13 level_id:1592 64 4 8 ret:1610 80 4 13 draft_id:1558 96 16 14 world_ptr:1567 128 16 14 scene_ptr:1599";
  *(_QWORD *)(v3 + 16) = BrickBreakerActivity::checkBrickBreakerDraftExec;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -219021312;
  v5[536862724] = -202178560;
  *(_DWORD *)(v3 + 80) = draft_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_level_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_level_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( this->cur_level_id_ )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v30.group_muiltistage_play_map_._M_h._M_element_count,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/brick_breaker_activity.cpp",
      "checkBrickBreakerDraftExec",
      1563);
    v6 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
           (common::milog::MiLogStream *const)&v30.group_muiltistage_play_map_._M_h._M_element_count,
           (const char (*)[50])"[BrickBreaker] cur_level_id_ != 0, cur_level_id_:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->cur_level_id_);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v30.group_muiltistage_play_map_._M_h._M_element_count);
    v7 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurWorld<PlayerWorld>((const PlayerSceneComp *const)(v3 + 96));
    if ( std::operator==<PlayerWorld>((const std::shared_ptr<PlayerWorld> *)(v3 + 96), 0LL) )
      goto LABEL_16;
    v8 = (unsigned __int64)std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
    if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
      v8 = __asan_report_load8();
    v9 = *(_QWORD *)v8 + 16LL;
    if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
      v8 = __asan_report_load8();
    if ( (*(unsigned int (__fastcall **)(unsigned __int64))v9)(v8) == 1 )
      v10 = 0;
    else
LABEL_16:
      v10 = 1;
    if ( v10 )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v30.group_muiltistage_play_map_._M_h._M_element_count,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/brick_breaker_activity.cpp",
        "checkBrickBreakerDraftExec",
        1570);
      common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
        (common::milog::MiLogStream *const)&v30.group_muiltistage_play_map_._M_h._M_element_count,
        (const char (*)[39])"[BrickBreaker] cur world can not start");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v30.group_muiltistage_play_map_._M_h._M_element_count);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      *(_DWORD *)(v3 + 64) = Player::getUid(this->player_);
      v11 = std::unordered_map<unsigned int,int>::operator[](
              fail_uid_reason_map,
              (std::unordered_map<unsigned int,int>::key_type *)(v3 + 64));
      v12 = v11;
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v11);
      }
      *v12 = 527;
      v7 = 527;
    }
    else
    {
      v13 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      if ( World::getPlayerCount(v13) == 2 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Uid = Player::getUid(this->player_);
        v16 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        if ( Uid == World::getOwnerUid(v16) )
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v30);
          v17 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v30);
          draft_config_ptr = data::DraftExcelConfigMgrBase::findDraftExcelConfig(
                               &v17->design_config.txt_config_mgr.draft_config_mgr,
                               *(_DWORD *)(v3 + 80));
          std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v30);
          if ( draft_config_ptr )
          {
            if ( *(_BYTE *)(((unsigned __int64)&draft_config_ptr->param >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)draft_config_ptr + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&draft_config_ptr->param >> 3)
                                                                              + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            *(_DWORD *)(v3 + 48) = draft_config_ptr->param;
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v30);
            v19 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v30);
            v20 = ActivityBrickBreakerExcelConfigMgr::findWorldLevelConfig(
                    &v19->design_config.txt_config_mgr.activity_brick_breaker_config_mgr,
                    *(_DWORD *)(v3 + 48)) == 0LL;
            std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v30);
            if ( v20 )
            {
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)&v30.group_muiltistage_play_map_._M_h._M_element_count,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/brick_breaker_activity.cpp",
                "checkBrickBreakerDraftExec",
                1595);
              v21 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                      (common::milog::MiLogStream *const)&v30.group_muiltistage_play_map_._M_h._M_element_count,
                      (const char (*)[26])"[BrickBreaker] level id: ");
              v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v21,
                      (const unsigned int *)(v3 + 48));
              common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v22, (const char (*)[12])off_256251A0);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v30.group_muiltistage_play_map_._M_h._M_element_count);
              v7 = -1;
            }
            else
            {
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              Player::getSceneComp(this->player_);
              PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v3 + 128));
              if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 128), 0LL) )
              {
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)&v30.group_muiltistage_play_map_._M_h._M_element_count,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/activity/brick_breaker_activity.cpp",
                  "checkBrickBreakerDraftExec",
                  1602);
                common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                  (common::milog::MiLogStream *const)&v30.group_muiltistage_play_map_._M_h._M_element_count,
                  (const char (*)[36])"[BrickBreaker] cur scene is nullptr");
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v30.group_muiltistage_play_map_._M_h._M_element_count);
                v7 = -1;
              }
              else
              {
                v23 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
                Scene::getMultistagePlayComp(v23);
                SceneMultistagePlayComp::findPlay<BrickBreakerMultistagePlay>(&v30);
                v24 = std::operator!=<BrickBreakerMultistagePlay>(
                        (const std::shared_ptr<BrickBreakerMultistagePlay> *)&v30,
                        0LL);
                std::shared_ptr<BrickBreakerMultistagePlay>::~shared_ptr((std::shared_ptr<BrickBreakerMultistagePlay> *const)&v30);
                if ( v24 )
                {
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)&v30.group_muiltistage_play_map_._M_h._M_element_count,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/activity/brick_breaker_activity.cpp",
                    "checkBrickBreakerDraftExec",
                    1607);
                  common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                    (common::milog::MiLogStream *const)&v30.group_muiltistage_play_map_._M_h._M_element_count,
                    (const char (*)[42])"[BrickBreaker] multistage play is ongoing");
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v30.group_muiltistage_play_map_._M_h._M_element_count);
                  v7 = -1;
                }
                else
                {
                  *(_DWORD *)(v3 + 64) = 0;
                  v25 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
                  *(_QWORD *)&v30.is_enable_ = v3 + 64;
                  v30.group_muiltistage_play_map_._M_h._M_buckets = (std::_Hashtable<long unsigned int,std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> >,std::allocator<std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> > >,std::__detail::_Select1st,std::equal_to<long unsigned int>,std::hash<long unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true> >::__bucket_type *)fail_uid_reason_map;
                  LODWORD(v30.group_muiltistage_play_map_._M_h._M_bucket_count) = *(_DWORD *)(v3 + 48);
                  *(_OWORD *)&v27.__fail_uid_reason_map = __PAIR128__(
                                                            v30.group_muiltistage_play_map_._M_h._M_bucket_count,
                                                            (unsigned __int64)fail_uid_reason_map);
                  v27.__ret = (int32_t *)(v3 + 64);
                  std::function<ForeachPolicy ()(Player &)>::function<BrickBreakerActivity::checkBrickBreakerDraftExec(unsigned int,std::unordered_map<unsigned int,int> &)::{lambda(Player &)#1},void,void>(
                    (std::function<ForeachPolicy(Player&)> *const)&v30.group_muiltistage_play_map_._M_h._M_element_count,
                    v27);
                  World::foreachPlayer(
                    v25,
                    (std::function<ForeachPolicy(Player&)> *)&v30.group_muiltistage_play_map_._M_h._M_element_count);
                  std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v30.group_muiltistage_play_map_._M_h._M_element_count);
                  v7 = *(_DWORD *)(v3 + 64);
                }
              }
              std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 128));
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&v30.group_muiltistage_play_map_._M_h._M_element_count,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/brick_breaker_activity.cpp",
              "checkBrickBreakerDraftExec",
              1589);
            v18 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                    (common::milog::MiLogStream *const)&v30.group_muiltistage_play_map_._M_h._M_element_count,
                    (const char (*)[50])"[BrickBreaker] draft config not found, draft_id: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v3 + 80));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v30.group_muiltistage_play_map_._M_h._M_element_count);
            v7 = -1;
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&v30.group_muiltistage_play_map_._M_h._M_element_count,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/brick_breaker_activity.cpp",
            "checkBrickBreakerDraftExec",
            1583);
          common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
            (common::milog::MiLogStream *const)&v30.group_muiltistage_play_map_._M_h._M_element_count,
            (const char (*)[50])"[BrickBreaker] draft cannot start by other player");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v30.group_muiltistage_play_map_._M_h._M_element_count);
          v7 = -1;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v30.group_muiltistage_play_map_._M_h._M_element_count,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/brick_breaker_activity.cpp",
          "checkBrickBreakerDraftExec",
          1577);
        v14 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
                (common::milog::MiLogStream *const)&v30.group_muiltistage_play_map_._M_h._M_element_count,
                (const char (*)[66])"[BrickBreaker] draft cannot start when player num != 2, draft_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 80));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v30.group_muiltistage_play_map_._M_h._M_element_count);
        v7 = 10456;
      }
    }
    std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v3 + 96));
  }
  result = v7;
  if ( v31 == (char *)v3 )
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

// Line 1611: range 0000000014F03AC4-0000000014F0406A
ForeachPolicy __cdecl BrickBreakerActivity::checkBrickBreakerDraftExec(unsigned int,std::unordered_map<unsigned int,int> &)::{lambda(Player &)#1}::operator()(
        const BrickBreakerActivity::checkBrickBreakerDraftExec::<lambda(Player&)> *const __closure,
        Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // r14
  std::unordered_map<unsigned int,int> *fail_uid_reason_map; // r14
  std::unordered_map<unsigned int,int>::mapped_type *v7; // rax
  _DWORD *v8; // rdx
  int32_t *ret; // rdx
  ForeachPolicy v10; // r14d
  BrickBreakerActivity *p_level_id; // rdi
  uint32_t level_id; // eax
  int32_t *v13; // r14
  int32_t v14; // ecx
  int32_t *v15; // rdx
  common::milog::MiLogStream *v16; // r14
  int32_t *v17; // rdx
  int32_t v18; // r15d
  std::unordered_map<unsigned int,int> *v19; // r14
  std::unordered_map<unsigned int,int>::mapped_type *v20; // rax
  int32_t *v21; // rdx
  ForeachPolicy result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-94h] BYREF
  common::milog::MiLogStream v25; // [rsp+30h] [rbp-90h] BYREF
  char v26[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 17 activity_ptr:1614";
  *(_QWORD *)(v2 + 16) = BrickBreakerActivity::checkBrickBreakerDraftExec(unsigned int,std::unordered_map<unsigned int,int> &)::{lambda(Player &)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  Player::getActivityComp(player);
  PlayerActivityComp::findOpenningActivity<BrickBreakerActivity>((PlayerActivityComp *const)(v2 + 32));
  if ( std::operator==<BrickBreakerActivity>(0LL, (const std::shared_ptr<BrickBreakerActivity> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/brick_breaker_activity.cpp",
      "operator()",
      1617);
    v5 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
           &v25,
           (const char (*)[46])"[BrickBreaker] activity is not opening, uid: ");
    val = Player::getUid(player);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v25);
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__fail_uid_reason_map >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    fail_uid_reason_map = __closure->__fail_uid_reason_map;
    val = Player::getUid(player);
    v7 = std::unordered_map<unsigned int,int>::operator[](fail_uid_reason_map, &val);
    v8 = v7;
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v7);
    }
    *v8 = 860;
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    ret = __closure->__ret;
    if ( *(_BYTE *)(((unsigned __int64)__closure->__ret >> 3) + 0x7FFF8000) != 0
      && (char)(((__int64)__closure->__ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure->__ret >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(__closure->__ret);
    }
    *ret = 860;
    v10 = FOREACH_BREAK;
  }
  else
  {
    p_level_id = std::__shared_ptr_access<BrickBreakerActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BrickBreakerActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__level_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&__closure->__level_id >> 3) + 0x7FFF8000) <= 3 )
    {
      p_level_id = (BrickBreakerActivity *)&__closure->__level_id;
      __asan_report_load4();
    }
    level_id = __closure->__level_id;
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    {
      p_level_id = (BrickBreakerActivity *)__closure;
      level_id = __asan_report_load8();
    }
    v13 = __closure->__ret;
    v14 = BrickBreakerActivity::checkWorldLevelCanStart(p_level_id, level_id);
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v13);
    }
    *v13 = v14;
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v15 = __closure->__ret;
    if ( *(_BYTE *)(((unsigned __int64)__closure->__ret >> 3) + 0x7FFF8000) != 0
      && (char)(((__int64)__closure->__ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure->__ret >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( *v15 )
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/brick_breaker_activity.cpp",
        "operator()",
        1626);
      v16 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
              &v25,
              (const char (*)[43])"[BrickBreaker] player can not start, uid: ");
      val = Player::getUid(player);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &val);
      common::milog::MiLogStream::~MiLogStream(&v25);
      if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v17 = __closure->__ret;
      if ( *(_BYTE *)(((unsigned __int64)__closure->__ret >> 3) + 0x7FFF8000) != 0
        && (char)(((__int64)__closure->__ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure->__ret >> 3)
                                                                   + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v18 = *v17;
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__fail_uid_reason_map >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v19 = __closure->__fail_uid_reason_map;
      val = Player::getUid(player);
      v20 = std::unordered_map<unsigned int,int>::operator[](v19, &val);
      v21 = v20;
      if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v20);
      }
      *v21 = v18;
      v10 = FOREACH_BREAK;
    }
    else
    {
      v10 = FOREACH_CONTINUE;
    }
  }
  std::shared_ptr<BrickBreakerActivity>::~shared_ptr((std::shared_ptr<BrickBreakerActivity> *const)(v2 + 32));
  result = v10;
  if ( v26 == (char *)v2 )
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

// Line 1636: range 0000000014F04AC4-0000000014F04CBA
int32_t __cdecl BrickBreakerActivity::setBrickBreakerReady(BrickBreakerActivity *const this, uint32_t uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  int32_t v8; // r14d
  BrickBreakerMultistagePlay *v9; // rax
  int32_t result; // eax
  common::milog::MiLogStream v11; // [rsp+10h] [rbp-90h] BYREF
  char v12[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 play_ptr:1637";
  *(_QWORD *)(v2 + 16) = BrickBreakerActivity::setBrickBreakerReady;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  BrickBreakerActivity::findCurrentBrickBreakerPlay((BrickBreakerActivity *const)(v2 + 32));
  if ( std::operator==<BrickBreakerMultistagePlay>((const std::shared_ptr<BrickBreakerMultistagePlay> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/brick_breaker_activity.cpp",
      "setBrickBreakerReady",
      1640);
    v5 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
           &v11,
           (const char (*)[48])"BrickBreaker play does not exist, cur_level_id_");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->cur_level_id_);
    v7 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v6, (const char (*)[14])", play_index:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->play_index_);
    common::milog::MiLogStream::~MiLogStream(&v11);
    v8 = -1;
  }
  else
  {
    v9 = std::__shared_ptr_access<BrickBreakerMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BrickBreakerMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    BrickBreakerMultistagePlay::onSetBrickBreakerReady(v9, uid);
    v8 = 0;
  }
  std::shared_ptr<BrickBreakerMultistagePlay>::~shared_ptr((std::shared_ptr<BrickBreakerMultistagePlay> *const)(v2 + 32));
  result = v8;
  if ( v12 == (char *)v2 )
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

// Line 1648: range 0000000014F04CBC-0000000014F04EC1
int32_t __cdecl BrickBreakerActivity::setBrickBreakerChanging(
        BrickBreakerActivity *const this,
        uint32_t uid,
        bool is_changing)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  int32_t v9; // r14d
  BrickBreakerMultistagePlay *v10; // rax
  int32_t result; // eax
  common::milog::MiLogStream v13; // [rsp+10h] [rbp-90h] BYREF
  char v14[112]; // [rsp+30h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 play_ptr:1649";
  *(_QWORD *)(v3 + 16) = BrickBreakerActivity::setBrickBreakerChanging;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  BrickBreakerActivity::findCurrentBrickBreakerPlay((BrickBreakerActivity *const)(v3 + 32));
  if ( std::operator==<BrickBreakerMultistagePlay>((const std::shared_ptr<BrickBreakerMultistagePlay> *)(v3 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/brick_breaker_activity.cpp",
      "setBrickBreakerChanging",
      1652);
    v6 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
           &v13,
           (const char (*)[48])"BrickBreaker play does not exist, cur_level_id_");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->cur_level_id_);
    v8 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v7, (const char (*)[14])", play_index:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->play_index_);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v9 = -1;
  }
  else
  {
    v10 = std::__shared_ptr_access<BrickBreakerMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BrickBreakerMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    BrickBreakerMultistagePlay::onSetBrickBreakerChanging(v10, uid, is_changing);
    v9 = 0;
  }
  std::shared_ptr<BrickBreakerMultistagePlay>::~shared_ptr((std::shared_ptr<BrickBreakerMultistagePlay> *const)(v3 + 32));
  result = v9;
  if ( v14 == (char *)v3 )
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

// Line 1660: range 0000000014F04EC2-0000000014F053DC
int32_t __cdecl BrickBreakerActivity::selectBrickBreakerSkill(
        BrickBreakerActivity *const this,
        uint32_t uid,
        const std::vector<unsigned int> *skill_id_vec)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // rbx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  int32_t v9; // r14d
  const unsigned int *M_current; // r14
  std::vector<unsigned int>::const_iterator v11; // rax
  std::set<unsigned int>::size_type v12; // r14
  common::milog::MiLogStream *v13; // rdx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  uint32_t *v16; // rdx
  common::milog::MiLogStream *v17; // rdx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  BrickBreakerMultistagePlay *v20; // rax
  int32_t result; // eax
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-108h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-100h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-F8h]
  common::milog::MiLogStream v26; // [rsp+40h] [rbp-F0h] BYREF
  char v27[208]; // [rsp+60h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 16 13 play_ptr:1661 80 48 17 skill_id_set:1668";
  *(_QWORD *)(v3 + 16) = BrickBreakerActivity::selectBrickBreakerSkill;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = 62194;
  v5[536862724] = -202116109;
  BrickBreakerActivity::findCurrentBrickBreakerPlay((BrickBreakerActivity *const)(v3 + 48));
  if ( std::operator==<BrickBreakerMultistagePlay>((const std::shared_ptr<BrickBreakerMultistagePlay> *)(v3 + 48), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/brick_breaker_activity.cpp",
      "selectBrickBreakerSkill",
      1664);
    v6 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
           &v26,
           (const char (*)[48])"BrickBreaker play does not exist, cur_level_id_");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->cur_level_id_);
    v8 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v7, (const char (*)[14])", play_index:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->play_index_);
    common::milog::MiLogStream::~MiLogStream(&v26);
    v9 = -1;
  }
  else
  {
    M_current = std::vector<unsigned int>::end(skill_id_vec)._M_current;
    v11._M_current = std::vector<unsigned int>::begin(skill_id_vec)._M_current;
    std::set<unsigned int>::set<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>>(
      (std::set<unsigned int> *const)(v3 + 80),
      v11,
      (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current);
    v12 = std::set<unsigned int>::size((const std::set<unsigned int> *const)(v3 + 80));
    if ( v12 == std::vector<unsigned int>::size(skill_id_vec) )
    {
      __for_range = skill_id_vec;
      __for_begin._M_current = std::vector<unsigned int>::begin(skill_id_vec)._M_current;
      __for_end._M_current = std::vector<unsigned int>::end(skill_id_vec)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
      {
        v16 = (uint32_t *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
        if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( !(unsigned int)BrickBreakerActivity::getBrickBreakerSkillLevel(this, *v16) )
        {
          common::milog::MiLogStream::create(
            &v26,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/brick_breaker_activity.cpp",
            "selectBrickBreakerSkill",
            1678);
          v17 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                  &v26,
                  (const char (*)[36])"BrickBreaker skill_id_vec invalid, ");
          v18 = common::milog::MiLogStream::operator<<<unsigned int>(v17, skill_id_vec);
          v19 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v18,
                  (const char (*)[14])", skill_map_:");
          common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(v19, &this->skill_map_);
          common::milog::MiLogStream::~MiLogStream(&v26);
          v9 = -1;
          goto LABEL_16;
        }
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
      }
      v20 = std::__shared_ptr_access<BrickBreakerMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BrickBreakerMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
      v9 = BrickBreakerMultistagePlay::onSelectBrickBreakerSkill(v20, uid, skill_id_vec);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/brick_breaker_activity.cpp",
        "selectBrickBreakerSkill",
        1671);
      v13 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
              &v26,
              (const char (*)[39])"BrickBreaker skill_id_vec duplicated, ");
      v14 = common::milog::MiLogStream::operator<<<unsigned int>(v13, skill_id_vec);
      v15 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v14, (const char (*)[14])", skill_map_:");
      common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(v15, &this->skill_map_);
      common::milog::MiLogStream::~MiLogStream(&v26);
      v9 = -1;
    }
LABEL_16:
    std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 80));
  }
  std::shared_ptr<BrickBreakerMultistagePlay>::~shared_ptr((std::shared_ptr<BrickBreakerMultistagePlay> *const)(v3 + 48));
  result = v9;
  if ( v27 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
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

// Line 1686: range 0000000014F053DE-0000000014F05734
int32_t __cdecl BrickBreakerActivity::selectBrickBreakerAvatar(
        BrickBreakerActivity *const this,
        uint32_t uid,
        const std::vector<unsigned int> *avatar_id_vec)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // rbx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  int32_t v9; // r14d
  const unsigned int *M_current; // r14
  std::vector<unsigned int>::const_iterator v11; // rax
  std::set<unsigned int>::size_type v12; // r14
  common::milog::MiLogStream *v13; // rdx
  BrickBreakerMultistagePlay *v14; // rax
  int32_t result; // eax
  common::milog::MiLogStream v17; // [rsp+20h] [rbp-F0h] BYREF
  char v18[208]; // [rsp+40h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 16 13 play_ptr:1687 80 48 18 avatar_id_set:1694";
  *(_QWORD *)(v3 + 16) = BrickBreakerActivity::selectBrickBreakerAvatar;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = 62194;
  v5[536862724] = -202116109;
  BrickBreakerActivity::findCurrentBrickBreakerPlay((BrickBreakerActivity *const)(v3 + 48));
  if ( std::operator==<BrickBreakerMultistagePlay>((const std::shared_ptr<BrickBreakerMultistagePlay> *)(v3 + 48), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/brick_breaker_activity.cpp",
      "selectBrickBreakerAvatar",
      1690);
    v6 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
           &v17,
           (const char (*)[48])"BrickBreaker play does not exist, cur_level_id_");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->cur_level_id_);
    v8 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v7, (const char (*)[14])", play_index:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->play_index_);
    common::milog::MiLogStream::~MiLogStream(&v17);
    v9 = -1;
  }
  else
  {
    M_current = std::vector<unsigned int>::end(avatar_id_vec)._M_current;
    v11._M_current = std::vector<unsigned int>::begin(avatar_id_vec)._M_current;
    std::set<unsigned int>::set<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>>(
      (std::set<unsigned int> *const)(v3 + 80),
      v11,
      (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current);
    v12 = std::set<unsigned int>::size((const std::set<unsigned int> *const)(v3 + 80));
    if ( v12 == std::vector<unsigned int>::size(avatar_id_vec) )
    {
      v14 = std::__shared_ptr_access<BrickBreakerMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BrickBreakerMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
      v9 = BrickBreakerMultistagePlay::onSelectBrickBreakerAvatar(v14, uid, avatar_id_vec);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/brick_breaker_activity.cpp",
        "selectBrickBreakerAvatar",
        1697);
      v13 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
              &v17,
              (const char (*)[40])"BrickBreaker avatar_id_vec duplicated, ");
      common::milog::MiLogStream::operator<<<unsigned int>(v13, avatar_id_vec);
      common::milog::MiLogStream::~MiLogStream(&v17);
      v9 = -1;
    }
    std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 80));
  }
  std::shared_ptr<BrickBreakerMultistagePlay>::~shared_ptr((std::shared_ptr<BrickBreakerMultistagePlay> *const)(v3 + 48));
  result = v9;
  if ( v18 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
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

// Line 1704: range 0000000014F05736-0000000014F05BC8
BrickBreakerMultistagePlayPtr __cdecl BrickBreakerActivity::findCurrentBrickBreakerPlay(
        BrickBreakerActivity *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  ActivityBrickBreakerExcelConfigMgr *p_activity_brick_breaker_config_mgr; // rcx
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  uint32_t SceneId; // ecx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  Scene *v14; // rax
  uint32_t MultistagePlayComp; // edi
  uint32_t group_id; // edx
  BrickBreakerMultistagePlayPtr result; // rax
  unsigned int val; // [rsp+14h] [rbp-ACh] BYREF
  const BrickBreakerWorldLevelConfig *world_level_config_ptr; // [rsp+18h] [rbp-A8h]
  std::shared_ptr<Config> v21; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v22; // [rsp+30h] [rbp-90h] BYREF
  char v23[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 scene_ptr:1705";
  *(_QWORD *)(v2 + 16) = BrickBreakerActivity::findCurrentBrickBreakerPlay;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)(v1 + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(*(Player *const *)(v1 + 24));
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 32));
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 32))
    || (v5 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32)),
        Scene::getSceneType(v5) != SCENE_WORLD) )
  {
    std::shared_ptr<BrickBreakerMultistagePlay>::shared_ptr(
      (std::shared_ptr<BrickBreakerMultistagePlay> *const)this,
      0LL);
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v21);
    p_activity_brick_breaker_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21)->design_config.txt_config_mgr.activity_brick_breaker_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)(v1 + 1156) >> 3) + 0x7FFF8000) != 0
      && (char)(((v1 - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(v1 + 1156) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    world_level_config_ptr = ActivityBrickBreakerExcelConfigMgr::findWorldLevelConfig(
                               p_activity_brick_breaker_config_mgr,
                               *(_DWORD *)(v1 + 1156));
    std::shared_ptr<Config>::~shared_ptr(&v21);
    if ( world_level_config_ptr )
    {
      v8 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      SceneId = Scene::getSceneId(v8);
      if ( *(_BYTE *)(((unsigned __int64)world_level_config_ptr >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)world_level_config_ptr >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( SceneId == world_level_config_ptr->scene_id )
      {
        v14 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        MultistagePlayComp = (unsigned int)Scene::getMultistagePlayComp(v14);
        if ( *(_BYTE *)(((unsigned __int64)(v1 + 1152) >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)(v1 + 1152) >> 3) + 0x7FFF8000) <= 3 )
        {
          MultistagePlayComp = v1 + 1152;
          __asan_report_load4();
        }
        if ( *(_BYTE *)(((unsigned __int64)&world_level_config_ptr->group_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)world_level_config_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&world_level_config_ptr->group_id >> 3)
                                                                               + 0x7FFF8000) )
        {
          MultistagePlayComp = (_DWORD)world_level_config_ptr + 4;
          __asan_report_load4();
        }
        group_id = world_level_config_ptr->group_id;
        if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        {
          MultistagePlayComp = (unsigned int)this;
          __asan_report_store16(this);
        }
        SceneMultistagePlayComp::findPlay<BrickBreakerMultistagePlay>(
          (const SceneMultistagePlayComp *const)this,
          MultistagePlayComp,
          group_id);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/brick_breaker_activity.cpp",
          "findCurrentBrickBreakerPlay",
          1717);
        v10 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
                &v22,
                (const char (*)[64])"[BrickBreaker] level_id does not match current scene, level_id:");
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v10,
                (const unsigned int *)(v1 + 1156));
        v12 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v11, (const char (*)[12])", scene_id:");
        v13 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        val = Scene::getSceneId(v13);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
        common::milog::MiLogStream::~MiLogStream(&v22);
        std::shared_ptr<BrickBreakerMultistagePlay>::shared_ptr(
          (std::shared_ptr<BrickBreakerMultistagePlay> *const)this,
          0LL);
      }
    }
    else
    {
      std::shared_ptr<BrickBreakerMultistagePlay>::shared_ptr(
        (std::shared_ptr<BrickBreakerMultistagePlay> *const)this,
        0LL);
    }
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 32));
  if ( v23 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<BrickBreakerMultistagePlay,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 1725: range 0000000014F05BCA-0000000014F07446
__int64 __fastcall BrickBreakerActivity::initBrickBreakerPlay(
        BrickBreakerActivity *const this,
        uint32_t level_id,
        const std::set<unsigned int> *uid_set,
        uint32_t match_id)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  unsigned int v7; // r14d
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v11; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  uint32_t SceneId; // ecx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  common::milog::MiLogStream *v19; // r14
  std::unordered_map<std::string,unsigned int>::mapped_type *v20; // rax
  _DWORD *v21; // rdx
  std::unordered_map<std::string,unsigned int>::mapped_type *v22; // rax
  uint32_t *v23; // rdx
  std::unordered_map<std::string,unsigned int>::mapped_type *v24; // rax
  _DWORD *v25; // rdx
  Scene *v26; // rax
  unsigned __int64 v27; // rax
  common::milog::MiLogStream *v28; // rax
  Scene *v29; // rax
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rdx
  void (__fastcall *v32)(unsigned __int64, unsigned __int64, _QWORD, _QWORD, _QWORD, _QWORD); // r10
  common::milog::MiLogStream *v33; // rax
  Scene *v34; // rax
  Group *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  const std::string *v38; // rax
  common::milog::MiLogStream *v39; // rax
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  const std::string *v43; // rax
  common::milog::MiLogStream *v44; // rax
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v45; // rax
  Scene *v46; // rax
  Group *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v50; // rax
  uint32_t v51; // ecx
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v54; // rax
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rax
  Scene *v57; // rax
  unsigned __int64 v58; // rax
  bool v59; // r14
  common::milog::MiLogStream *v60; // rax
  __int64 result; // rax
  unsigned int (__fastcall *v62)(SceneBlockGroupComp *, std::vector<unsigned int> *, _QWORD, _QWORD); // [rsp+8h] [rbp-1E8h]
  std::initializer_list<unsigned int> __la; // [rsp+10h] [rbp-1E0h]
  uint32_t __lb; // [rsp+10h] [rbp-1E0h]
  uint32_t __lc; // [rsp+10h] [rbp-1E0h]
  unsigned int (__fastcall *__l)(SceneBlockGroupComp *, std::vector<unsigned int> *, __int64); // [rsp+10h] [rbp-1E0h]
  uint32_t OwnerUid; // [rsp+20h] [rbp-1D0h]
  int v68; // [rsp+20h] [rbp-1D0h]
  uint32_t activity_id; // [rsp+20h] [rbp-1D0h]
  SceneBlockGroupComp *BlockGroupComp; // [rsp+20h] [rbp-1D0h]
  bool v71; // [rsp+20h] [rbp-1D0h]
  SceneMultistagePlayComp *MultistagePlayComp; // [rsp+20h] [rbp-1D0h]
  common::milog::MiLogStream *v73; // [rsp+20h] [rbp-1D0h]
  common::milog::MiLogStream *v74; // [rsp+20h] [rbp-1D0h]
  common::milog::MiLogStream *v75; // [rsp+20h] [rbp-1D0h]
  common::milog::MiLogStream *v76; // [rsp+20h] [rbp-1D0h]
  SceneMultistagePlayComp *v77; // [rsp+20h] [rbp-1D0h]
  bool v78; // [rsp+20h] [rbp-1D0h]
  common::milog::MiLogStream *v79; // [rsp+20h] [rbp-1D0h]
  common::milog::MiLogStream *v80; // [rsp+20h] [rbp-1D0h]
  SceneBlockGroupComp *v81; // [rsp+20h] [rbp-1D0h]
  std::allocator<char> __a; // [rsp+47h] [rbp-1A9h] BYREF
  unsigned int val; // [rsp+48h] [rbp-1A8h] BYREF
  int32_t ret; // [rsp+4Ch] [rbp-1A4h]
  unsigned __int64 v87; // [rsp+50h] [rbp-1A0h] BYREF
  const BrickBreakerWorldLevelConfig *world_level_config_ptr; // [rsp+58h] [rbp-198h]
  std::vector<unsigned int> v89; // [rsp+60h] [rbp-190h] BYREF
  common::milog::MiLogStream v90; // [rsp+80h] [rbp-170h] BYREF
  char v91[336]; // [rsp+A0h] [rbp-150h] BYREF

  v4 = (unsigned __int64)v91;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(288LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "6 48 4 13 level_id:1724 64 16 14 world_ptr:1731 96 16 14 scene_ptr:1743 128 16 14 group_ptr:1783"
                        " 160 16 16 param_table:1801 192 56 14 param_map:1770";
  *(_QWORD *)(v4 + 16) = BrickBreakerActivity::initBrickBreakerPlay;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -219021312;
  v6[536862723] = -219021312;
  v6[536862724] = -219021312;
  v6[536862725] = -219021312;
  v6[536862727] = -218103808;
  v6[536862728] = -202116109;
  *(_DWORD *)(v4 + 48) = level_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_level_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_level_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( this->cur_level_id_ )
  {
    common::milog::MiLogStream::create(
      &v90,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/brick_breaker_activity.cpp",
      "initBrickBreakerPlay",
      1728);
    common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
      &v90,
      (const char (*)[47])"[BrickBreaker] player_ is in BrickBreaker play");
    common::milog::MiLogStream::~MiLogStream(&v90);
    v7 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurWorld<PlayerWorld>((const PlayerSceneComp *const)(v4 + 64));
    if ( std::operator==<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v4 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v90,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/brick_breaker_activity.cpp",
        "initBrickBreakerPlay",
        1734);
      common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
        &v90,
        (const char (*)[29])"[BrickBreaker] world is null");
      common::milog::MiLogStream::~MiLogStream(&v90);
      v7 = -1;
    }
    else
    {
      v8 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      OwnerUid = World::getOwnerUid(v8);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( OwnerUid == Player::getUid(this->player_) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Player::getSceneComp(this->player_);
        PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v4 + 96));
        if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v4 + 96))
          || (v9 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96)),
              Scene::getSceneType(v9) != SCENE_WORLD) )
        {
          common::milog::MiLogStream::create(
            &v90,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/brick_breaker_activity.cpp",
            "initBrickBreakerPlay",
            1746);
          v11 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                  &v90,
                  (const char (*)[50])"[BrickBreaker] player is not in world scene, uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
          common::milog::MiLogStream::~MiLogStream(&v90);
          v7 = -1;
        }
        else
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)(v4 + 160));
          v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
          world_level_config_ptr = ActivityBrickBreakerExcelConfigMgr::findWorldLevelConfig(
                                     &v12->design_config.txt_config_mgr.activity_brick_breaker_config_mgr,
                                     *(_DWORD *)(v4 + 48));
          std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 160));
          if ( world_level_config_ptr )
          {
            v13 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
            SceneId = Scene::getSceneId(v13);
            if ( *(_BYTE *)(((unsigned __int64)world_level_config_ptr >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)world_level_config_ptr >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            if ( SceneId == world_level_config_ptr->scene_id )
            {
              if ( std::set<unsigned int>::size(uid_set) <= 2 )
              {
                if ( *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4();
                }
                ++this->play_index_;
                std::unordered_map<std::string,unsigned int>::unordered_map((std::unordered_map<std::string,unsigned int> *const)(v4 + 192));
                v68 = *(_DWORD *)(v4 + 48);
                std::allocator<char>::allocator(&__a);
                std::string::basic_string<std::allocator<char>>((std::string *const)&v90, "level_id", &__a);
                v20 = std::unordered_map<std::string,unsigned int>::operator[](
                        (std::unordered_map<std::string,unsigned int> *const)(v4 + 192),
                        (std::unordered_map<std::string,unsigned int>::key_type *)&v90);
                v21 = v20;
                if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store4(v20);
                }
                *v21 = v68;
                std::string::~string(&v90);
                std::allocator<char>::~allocator(&__a);
                if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4();
                }
                activity_id = this->activity_id_;
                std::allocator<char>::allocator(&__a);
                std::string::basic_string<std::allocator<char>>((std::string *const)&v90, "activity_id", &__a);
                v22 = std::unordered_map<std::string,unsigned int>::operator[](
                        (std::unordered_map<std::string,unsigned int> *const)(v4 + 192),
                        (std::unordered_map<std::string,unsigned int>::key_type *)&v90);
                v23 = v22;
                if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v22 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store4(v22);
                }
                *v23 = activity_id;
                std::string::~string(&v90);
                std::allocator<char>::~allocator(&__a);
                std::allocator<char>::allocator(&__a);
                std::string::basic_string<std::allocator<char>>((std::string *const)&v90, "match_id", &__a);
                v24 = std::unordered_map<std::string,unsigned int>::operator[](
                        (std::unordered_map<std::string,unsigned int> *const)(v4 + 192),
                        (std::unordered_map<std::string,unsigned int>::key_type *)&v90);
                v25 = v24;
                if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v24 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store4(v24);
                }
                *v25 = match_id;
                std::string::~string(&v90);
                std::allocator<char>::~allocator(&__a);
                v26 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
                BlockGroupComp = Scene::getBlockGroupComp(v26);
                if ( *(_BYTE *)(((unsigned __int64)BlockGroupComp >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                v27 = (unsigned __int64)(BlockGroupComp->_vptr_SceneCompBase + 12);
                if ( *(_BYTE *)((v27 >> 3) + 0x7FFF8000) )
                  v27 = __asan_report_load8();
                v62 = *(unsigned int (__fastcall **)(SceneBlockGroupComp *, std::vector<unsigned int> *, _QWORD, _QWORD))v27;
                if ( *(_BYTE *)(((unsigned __int64)&world_level_config_ptr->group_id >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)world_level_config_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&world_level_config_ptr->group_id >> 3)
                                                                                       + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                val = world_level_config_ptr->group_id;
                __la._M_array = &val;
                __la._M_len = 1LL;
                std::allocator<unsigned int>::allocator((std::allocator<unsigned int> *const)&__a);
                std::vector<unsigned int>::vector(&v89, __la, (const std::vector<unsigned int>::allocator_type *)&__a);
                v71 = v62(BlockGroupComp, &v89, 0LL, 0LL) != 0;
                std::vector<unsigned int>::~vector(&v89);
                std::allocator<unsigned int>::~allocator((std::allocator<unsigned int> *const)&__a);
                if ( v71 )
                {
                  common::milog::MiLogStream::create(
                    &v90,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/activity/brick_breaker_activity.cpp",
                    "initBrickBreakerPlay",
                    1777);
                  v28 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                          &v90,
                          (const char (*)[48])"[BrickBreaker] registerGroups failed, group_id:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v28,
                    &world_level_config_ptr->group_id);
                  common::milog::MiLogStream::~MiLogStream(&v90);
                  v7 = -1;
                }
                else
                {
                  ret = 0;
                  v29 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
                  v30 = (unsigned __int64)Scene::getBlockGroupComp(v29);
                  if ( *(_BYTE *)((v30 >> 3) + 0x7FFF8000) )
                    v30 = __asan_report_load8();
                  v31 = *(_QWORD *)v30 + 80LL;
                  if ( *(_BYTE *)((v31 >> 3) + 0x7FFF8000) )
                    v30 = __asan_report_load8();
                  v32 = *(void (__fastcall **)(unsigned __int64, unsigned __int64, _QWORD, _QWORD, _QWORD, _QWORD))v31;
                  if ( *(_BYTE *)(((unsigned __int64)&world_level_config_ptr->group_id >> 3) + 0x7FFF8000) != 0
                    && (char)((((_BYTE)world_level_config_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&world_level_config_ptr->group_id >> 3)
                                                                                         + 0x7FFF8000) )
                  {
                    __asan_report_load4();
                  }
                  v32(v4 + 128, v30, world_level_config_ptr->group_id, 0LL, 0LL, 0LL);
                  if ( std::operator==<Group>((const std::shared_ptr<Group> *)(v4 + 128), 0LL) )
                  {
                    common::milog::MiLogStream::create(
                      &v90,
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/player/activity/brick_breaker_activity.cpp",
                      "initBrickBreakerPlay",
                      1786);
                    v33 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                            &v90,
                            (const char (*)[43])"[BrickBreaker] findGroup failed, group_id:");
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v33,
                      &world_level_config_ptr->group_id);
                    common::milog::MiLogStream::~MiLogStream(&v90);
                    ret = -1;
                  }
                  else
                  {
                    v34 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
                    MultistagePlayComp = Scene::getMultistagePlayComp(v34);
                    if ( *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) <= 3 )
                    {
                      __asan_report_load4();
                    }
                    __lb = this->play_index_;
                    v35 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
                    if ( SceneMultistagePlayComp::initPlay(
                           MultistagePlayComp,
                           v35,
                           __lb,
                           MULTISTAGE_PLAY_TYPE_BRICK_BREAKER,
                           (const std::unordered_map<std::string,unsigned int> *)(v4 + 192),
                           uid_set) )
                    {
                      common::milog::MiLogStream::create(
                        &v90,
                        &common::milog::MiLogDefault::default_log_obj_,
                        3u,
                        "./src/player/activity/brick_breaker_activity.cpp",
                        "initBrickBreakerPlay",
                        1794);
                      v36 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                              &v90,
                              (const char (*)[26])"[BrickBreaker] init play ");
                      v37 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                              v36,
                              &this->play_index_);
                      v73 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                              v37,
                              (const char (*)[10])off_25625AC0);
                      v38 = proto::MultistagePlayType_Name[abi:cxx11](MULTISTAGE_PLAY_TYPE_BRICK_BREAKER);
                      v39 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v73, v38);
                      v74 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                              v39,
                              (const char (*)[10])" failed. ");
                      v40 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
                      operator<<(v74, v40);
                      common::milog::MiLogStream::~MiLogStream(&v90);
                      ret = -1;
                    }
                    else
                    {
                      common::milog::MiLogStream::create(
                        &v90,
                        &common::milog::MiLogDefault::default_log_obj_,
                        1u,
                        "./src/player/activity/brick_breaker_activity.cpp",
                        "initBrickBreakerPlay",
                        1799);
                      v41 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                              &v90,
                              (const char (*)[26])"[BrickBreaker] init play ");
                      v42 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                              v41,
                              &this->play_index_);
                      v75 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                              v42,
                              (const char (*)[10])off_25625AC0);
                      v43 = proto::MultistagePlayType_Name[abi:cxx11](MULTISTAGE_PLAY_TYPE_BRICK_BREAKER);
                      v44 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v75, v43);
                      v76 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
                              v44,
                              (const char (*)[8])" done. ");
                      v45 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
                      operator<<(v76, v45);
                      common::milog::MiLogStream::~MiLogStream(&v90);
                      luabind::adl::object::object((luabind::adl::object *const)(v4 + 160));
                      v46 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
                      v77 = Scene::getMultistagePlayComp(v46);
                      std::allocator<char>::allocator(&__a);
                      std::string::basic_string<std::allocator<char>>((std::string *const)&v90, byte_255BBB40, &__a);
                      if ( *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) != 0
                        && *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) <= 3 )
                      {
                        __asan_report_load4();
                      }
                      __lc = this->play_index_;
                      v47 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
                      v78 = SceneMultistagePlayComp::startStage(
                              v77,
                              v47,
                              __lc,
                              0,
                              MULTISTAGE_STAGE_IDLE,
                              (const std::string *)&v90,
                              (const luabind::adl::object *)(v4 + 160)) != 0;
                      std::string::~string(&v90);
                      std::allocator<char>::~allocator(&__a);
                      if ( v78 )
                      {
                        common::milog::MiLogStream::create(
                          &v90,
                          &common::milog::MiLogDefault::default_log_obj_,
                          3u,
                          "./src/player/activity/brick_breaker_activity.cpp",
                          "initBrickBreakerPlay",
                          1805);
                        v48 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                                &v90,
                                (const char (*)[46])"[BrickBreaker] startStage failed @play_index ");
                        v49 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                v48,
                                &this->play_index_);
                        v79 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
                                v49,
                                (const char (*)[8])" group:");
                        v50 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
                        operator<<(v79, v50);
                        common::milog::MiLogStream::~MiLogStream(&v90);
                        ret = -1;
                      }
                      else
                      {
                        v51 = *(_DWORD *)(v4 + 48);
                        if ( *(_BYTE *)(((unsigned __int64)&this->cur_level_id_ >> 3) + 0x7FFF8000) != 0
                          && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_level_id_ >> 3)
                                                                               + 0x7FFF8000) )
                        {
                          __asan_report_store4(&this->cur_level_id_);
                        }
                        this->cur_level_id_ = v51;
                        if ( *(_BYTE *)(((unsigned __int64)&this->cur_play_mode_ >> 3) + 0x7FFF8000) != 0
                          && *(_BYTE *)(((unsigned __int64)&this->cur_play_mode_ >> 3) + 0x7FFF8000) <= 3 )
                        {
                          __asan_report_store4(&this->cur_play_mode_);
                        }
                        this->cur_play_mode_ = IN_MULTIPLE;
                        common::milog::MiLogStream::create(
                          &v90,
                          &common::milog::MiLogDefault::default_log_obj_,
                          1u,
                          "./src/player/activity/brick_breaker_activity.cpp",
                          "initBrickBreakerPlay",
                          1812);
                        v52 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                                &v90,
                                (const char (*)[44])"[BrickBreaker] startStage done @play_index ");
                        v53 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                v52,
                                &this->play_index_);
                        v80 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
                                v53,
                                (const char (*)[8])" group:");
                        v54 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
                        v55 = operator<<(v80, v54);
                        v56 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                v55,
                                (const char (*)[16])", cur_level_id:");
                        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v56,
                          &this->cur_level_id_);
                        common::milog::MiLogStream::~MiLogStream(&v90);
                      }
                      luabind::adl::object::~object((luabind::adl::object *const)(v4 + 160));
                    }
                  }
                  std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v4 + 128));
                  if ( ret )
                  {
                    v57 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
                    v81 = Scene::getBlockGroupComp(v57);
                    if ( *(_BYTE *)(((unsigned __int64)v81 >> 3) + 0x7FFF8000) )
                      __asan_report_load8();
                    v58 = (unsigned __int64)(v81->_vptr_SceneCompBase + 13);
                    if ( *(_BYTE *)((v58 >> 3) + 0x7FFF8000) )
                      v58 = __asan_report_load8();
                    __l = *(unsigned int (__fastcall **)(SceneBlockGroupComp *, std::vector<unsigned int> *, __int64))v58;
                    if ( *(_BYTE *)(((unsigned __int64)&world_level_config_ptr->group_id >> 3) + 0x7FFF8000) != 0
                      && (char)((((_BYTE)world_level_config_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&world_level_config_ptr->group_id >> 3)
                                                                                           + 0x7FFF8000) )
                    {
                      __asan_report_load4();
                    }
                    val = world_level_config_ptr->group_id;
                    std::allocator<unsigned int>::allocator((std::allocator<unsigned int> *const)&__a);
                    std::vector<unsigned int>::vector(
                      &v89,
                      (std::initializer_list<unsigned int>)__PAIR128__(1LL, &val),
                      (const std::vector<unsigned int>::allocator_type *)&__a);
                    v59 = __l(v81, &v89, 1LL) != 0;
                    std::vector<unsigned int>::~vector(&v89);
                    std::allocator<unsigned int>::~allocator((std::allocator<unsigned int> *const)&__a);
                    if ( v59 )
                    {
                      common::milog::MiLogStream::create(
                        &v90,
                        &common::milog::MiLogDefault::default_log_obj_,
                        3u,
                        "./src/player/activity/brick_breaker_activity.cpp",
                        "initBrickBreakerPlay",
                        1819);
                      v60 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                              &v90,
                              (const char (*)[35])"unregisterGroups failed, group_id:");
                      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v60,
                        &world_level_config_ptr->group_id);
                      common::milog::MiLogStream::~MiLogStream(&v90);
                    }
                    if ( *(_BYTE *)(((unsigned __int64)&this->cur_level_id_ >> 3) + 0x7FFF8000) != 0
                      && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_level_id_ >> 3)
                                                                           + 0x7FFF8000) )
                    {
                      __asan_report_store4(&this->cur_level_id_);
                    }
                    this->cur_level_id_ = 0;
                    if ( *(_BYTE *)(((unsigned __int64)&this->cur_play_mode_ >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((unsigned __int64)&this->cur_play_mode_ >> 3) + 0x7FFF8000) <= 3 )
                    {
                      __asan_report_store4(&this->cur_play_mode_);
                    }
                    this->cur_play_mode_ = NONE_3;
                    v7 = ret;
                  }
                  else
                  {
                    v7 = 0;
                  }
                }
                std::unordered_map<std::string,unsigned int>::~unordered_map((std::unordered_map<std::string,unsigned int> *const)(v4 + 192));
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v90,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/player/activity/brick_breaker_activity.cpp",
                  "initBrickBreakerPlay",
                  1762);
                v19 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                        &v90,
                        (const char (*)[38])"[BrickBreaker] invalid uid_set, size:");
                v87 = std::set<unsigned int>::size(uid_set);
                common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v19, &v87);
                common::milog::MiLogStream::~MiLogStream(&v90);
                v7 = -1;
              }
            }
            else
            {
              common::milog::MiLogStream::create(
                &v90,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/brick_breaker_activity.cpp",
                "initBrickBreakerPlay",
                1756);
              v15 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
                      &v90,
                      (const char (*)[64])"[BrickBreaker] level_id does not match current scene, level_id:");
              v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v15,
                      (const unsigned int *)(v4 + 48));
              v17 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                      v16,
                      (const char (*)[12])", scene_id:");
              v18 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
              val = Scene::getSceneId(v18);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &val);
              common::milog::MiLogStream::~MiLogStream(&v90);
              v7 = -1;
            }
          }
          else
          {
            v7 = -1;
          }
        }
        std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v4 + 96));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v90,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/brick_breaker_activity.cpp",
          "initBrickBreakerPlay",
          1739);
        common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
          &v90,
          (const char (*)[58])"[BrickBreaker] only owner can start BrickBreaker in world");
        common::milog::MiLogStream::~MiLogStream(&v90);
        v7 = 9652;
      }
    }
    std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v4 + 64));
  }
  result = v7;
  if ( v91 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF801C) = 0LL;
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
