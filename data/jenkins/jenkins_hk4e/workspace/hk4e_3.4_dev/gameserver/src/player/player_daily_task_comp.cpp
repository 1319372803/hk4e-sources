// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/player_daily_task_comp.cpp

// Line 32: range 0000000014187B7A-000000001418861E
int32_t __cdecl PlayerDailyTaskComp::fromBin(
        PlayerDailyTaskComp *const this,
        const proto::PlayerDataBin *player_data_bin)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 time; // rdx
  char v6; // al
  DailyTaskInfo *v7; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,DailyTaskInfo> >,bool> v8; // rax
  common::milog::MiLogStream *v9; // rax
  __int64 v10; // rdx
  char v11; // al
  unsigned int v12; // eax
  __int64 v13; // rdx
  char v14; // al
  uint32_t v15; // ecx
  char v16; // dl
  __int64 v17; // rdx
  std::unordered_set<unsigned int> *v18; // rax
  std::unordered_set<unsigned int> *v19; // rdx
  google::protobuf::Map<unsigned int,proto::Int32List>::const_iterator *p_for_end_1; // rsi
  std::vector<int> *v21; // rax
  __int64 refreshed; // rdx
  char v23; // al
  uint32_t v24; // ecx
  char v25; // dl
  __int64 v26; // rdx
  __int64 v27; // rdx
  char v28; // al
  uint32_t v29; // ecx
  char v30; // dl
  __int64 v31; // rdx
  google::protobuf::uint32 v32; // r14d
  char *v33; // rsi
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v34; // rax
  google::protobuf::uint32 *v35; // rdx
  char v36; // cl
  int32_t result; // eax
  int32_t idx; // [rsp+20h] [rbp-1F0h]
  unsigned int idx_0; // [rsp+24h] [rbp-1ECh]
  google::protobuf::RepeatedPtrField<proto::DailyTaskCycleQuestBin>::const_iterator __for_begin_3; // [rsp+28h] [rbp-1E8h] BYREF
  google::protobuf::RepeatedPtrField<proto::DailyTaskCycleQuestBin>::const_iterator __for_end_3; // [rsp+30h] [rbp-1E0h] BYREF
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin; // [rsp+38h] [rbp-1D8h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin_0; // [rsp+40h] [rbp-1D0h]
  google::protobuf::RepeatedField<int>::const_iterator __for_begin_2; // [rsp+48h] [rbp-1C8h]
  const proto::PlayerDailyTaskCompBin *proto_comp; // [rsp+50h] [rbp-1C0h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range; // [rsp+58h] [rbp-1B8h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end; // [rsp+60h] [rbp-1B0h]
  const google::protobuf::Map<unsigned int,proto::Int32List> *__for_range_1; // [rsp+68h] [rbp-1A8h]
  const google::protobuf::RepeatedPtrField<proto::DailyTaskCycleQuestBin> *__for_range_3; // [rsp+70h] [rbp-1A0h]
  const proto::DailyTaskCycleQuestBin *quest_bin; // [rsp+78h] [rbp-198h]
  const unsigned int *p_task_id; // [rsp+80h] [rbp-190h]
  const google::protobuf::RepeatedField<int> *int32_list; // [rsp+88h] [rbp-188h]
  const google::protobuf::RepeatedField<int> *__for_range_2; // [rsp+90h] [rbp-180h]
  google::protobuf::RepeatedField<int>::const_iterator __for_end_2; // [rsp+98h] [rbp-178h]
  const proto::Uint32List *pool_list; // [rsp+A0h] [rbp-170h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range_0; // [rsp+A8h] [rbp-168h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end_0; // [rsp+B0h] [rbp-160h]
  const proto::DailyTaskInfoBin *task_bin; // [rsp+B8h] [rbp-158h]
  google::protobuf::Map<unsigned int,proto::Int32List>::const_iterator __for_begin_1; // [rsp+C0h] [rbp-150h] BYREF
  google::protobuf::Map<unsigned int,proto::Int32List>::const_iterator __for_end_1; // [rsp+E0h] [rbp-130h] BYREF
  common::milog::MiLogStream v61; // [rsp+100h] [rbp-110h] BYREF
  char v62[240]; // [rsp+120h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v62;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 16 daily_task_id:39 64 16 7 info:40 96 56 11 pool_set:64";
  *(_QWORD *)(v2 + 16) = PlayerDailyTaskComp::fromBin;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862724] = -218103808;
  v4[536862725] = -202116109;
  proto_comp = proto::PlayerDataBin::daily_task_bin(player_data_bin);
  time = proto::PlayerDailyTaskCompBin::last_time(proto_comp);
  v6 = *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(player_data_bin) = v6 != 0;
    __asan_report_store4(&this->last_refresh_time_, player_data_bin, time);
  }
  this->last_refresh_time_ = time;
  std::map<unsigned int,DailyTaskInfo>::clear(&this->task_map_);
  for ( idx = 0; idx < proto::PlayerDailyTaskCompBin::task_list_size(proto_comp); ++idx )
  {
    task_bin = proto::PlayerDailyTaskCompBin::task_list(proto_comp, idx);
    *(_DWORD *)(v2 + 48) = proto::DailyTaskInfoBin::daily_task_id(task_bin);
    *(_DWORD *)(v2 + 64) = 0;
    *(_DWORD *)(v2 + 68) = 0;
    *(_DWORD *)(v2 + 72) = 0;
    *(_BYTE *)(v2 + 76) = 0;
    *(_DWORD *)(v2 + 68) = proto::DailyTaskInfoBin::preview_reward_id(task_bin);
    *(_DWORD *)(v2 + 72) = proto::DailyTaskInfoBin::progress(task_bin);
    *(_BYTE *)(v2 + 76) = proto::DailyTaskInfoBin::is_finished(task_bin);
    *(_DWORD *)(v2 + 64) = proto::DailyTaskInfoBin::drop_id(task_bin);
    player_data_bin = (const proto::PlayerDataBin *)(v2 + 48);
    v8 = std::map<unsigned int,DailyTaskInfo>::emplace<unsigned int &,DailyTaskInfo&>(
           &this->task_map_,
           (unsigned int *)(v2 + 48),
           (DailyTaskInfo *)(v2 + 64),
           (unsigned int *)&this->task_map_,
           v7);
    if ( !v8.second )
    {
      common::milog::MiLogStream::create(
        &v61,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/player_daily_task_comp.cpp",
        "fromBin",
        47);
      v9 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
             &v61,
             (const char (*)[41])"task_map_ emplace failed, daily_task_id:");
      player_data_bin = (const proto::PlayerDataBin *)(v2 + 48);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v61);
    }
  }
  v10 = proto::PlayerDailyTaskCompBin::score_player_level(proto_comp);
  v11 = *(_BYTE *)(((unsigned __int64)&this->score_player_level_ >> 3) + 0x7FFF8000);
  if ( v11 != 0 && v11 <= 3 )
  {
    LOBYTE(player_data_bin) = v11 != 0;
    __asan_report_store4(&this->score_player_level_, player_data_bin, v10);
  }
  this->score_player_level_ = v10;
  LOBYTE(v12) = proto::PlayerDailyTaskCompBin::is_taken_score_reward(proto_comp);
  v13 = v12;
  v14 = *(_BYTE *)(((unsigned __int64)&this->is_taken_score_reward_ >> 3) + 0x7FFF8000);
  if ( v14 < 0 )
  {
    LOBYTE(player_data_bin) = v14 != 0;
    __asan_report_store1(&this->is_taken_score_reward_, player_data_bin, v13);
  }
  this->is_taken_score_reward_ = v13;
  v15 = proto::PlayerDailyTaskCompBin::finished_num(proto_comp);
  v16 = *(_BYTE *)(((unsigned __int64)&this->finished_num_ >> 3) + 0x7FFF8000);
  LOBYTE(player_data_bin) = v16 != 0;
  v17 = (v16 != 0) & (unsigned __int8)((char)((((_BYTE)this + 92) & 7) + 3) >= v16);
  if ( (_BYTE)v17 )
    __asan_report_store4(&this->finished_num_, player_data_bin, v17);
  this->finished_num_ = v15;
  std::unordered_set<unsigned int>::clear(&this->sure_pool_set_);
  __for_range = proto::PlayerDailyTaskCompBin::sure_pool_list(proto_comp);
  __for_begin = google::protobuf::RepeatedField<unsigned int>::begin(__for_range);
  __for_end = google::protobuf::RepeatedField<unsigned int>::end(__for_range);
  while ( __for_begin != __for_end )
  {
    if ( *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)__for_begin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(__for_begin);
    }
    *(_DWORD *)(v2 + 48) = *__for_begin;
    std::unordered_set<unsigned int>::insert(
      &this->sure_pool_set_,
      (const std::unordered_set<unsigned int>::value_type *)(v2 + 48));
    ++__for_begin;
  }
  std::deque<std::unordered_set<unsigned int>>::clear(&this->possible_pools_que_);
  for ( idx_0 = 0; idx_0 < proto::PlayerDailyTaskCompBin::possible_pools_list_size(proto_comp); ++idx_0 )
  {
    pool_list = proto::PlayerDailyTaskCompBin::possible_pools_list(proto_comp, idx_0);
    std::unordered_set<unsigned int>::unordered_set((std::unordered_set<unsigned int> *const)(v2 + 96));
    __for_range_0 = proto::Uint32List::uint32_list(pool_list);
    __for_begin_0 = google::protobuf::RepeatedField<unsigned int>::begin(__for_range_0);
    __for_end_0 = google::protobuf::RepeatedField<unsigned int>::end(__for_range_0);
    while ( __for_begin_0 != __for_end_0 )
    {
      if ( *(_BYTE *)(((unsigned __int64)__for_begin_0 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)__for_begin_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin_0 >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(__for_begin_0);
      }
      *(_DWORD *)(v2 + 48) = *__for_begin_0;
      std::unordered_set<unsigned int>::insert(
        (std::unordered_set<unsigned int> *const)(v2 + 96),
        (const std::unordered_set<unsigned int>::value_type *)(v2 + 48));
      ++__for_begin_0;
    }
    v18 = std::move<std::unordered_set<unsigned int> &>((std::unordered_set<unsigned int> *)(v2 + 96));
    std::deque<std::unordered_set<unsigned int>>::emplace_back<std::unordered_set<unsigned int>>(
      &this->possible_pools_que_,
      v18,
      v19);
    std::unordered_set<unsigned int>::~unordered_set((std::unordered_set<unsigned int> *const)(v2 + 96));
  }
  std::unordered_map<unsigned int,std::vector<int>>::clear(&this->task_var_map_);
  __for_range_1 = proto::PlayerDailyTaskCompBin::task_var_map(proto_comp);
  google::protobuf::Map<unsigned int,proto::Int32List>::begin(&__for_begin_1, __for_range_1);
  google::protobuf::Map<unsigned int,proto::Int32List>::end(&__for_end_1, __for_range_1);
  while ( 1 )
  {
    p_for_end_1 = &__for_end_1;
    if ( !google::protobuf::operator!=(&__for_begin_1, &__for_end_1) )
      break;
    p_task_id = (const unsigned int *)google::protobuf::Map<unsigned int,proto::Int32List>::const_iterator::operator*(&__for_begin_1);
    int32_list = proto::Int32List::int32_list((const proto::Int32List *const)(p_task_id + 2));
    __for_range_2 = int32_list;
    __for_begin_2 = google::protobuf::RepeatedField<int>::begin(int32_list);
    __for_end_2 = google::protobuf::RepeatedField<int>::end(int32_list);
    while ( __for_begin_2 != __for_end_2 )
    {
      if ( *(_BYTE *)(((unsigned __int64)__for_begin_2 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)__for_begin_2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin_2 >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(__for_begin_2);
      }
      *(_DWORD *)(v2 + 48) = *__for_begin_2;
      v21 = std::unordered_map<unsigned int,std::vector<int>>::operator[](&this->task_var_map_, p_task_id);
      std::vector<int>::push_back(v21, (const std::vector<int>::value_type *)(v2 + 48));
      ++__for_begin_2;
    }
    google::protobuf::Map<unsigned int,proto::Int32List>::const_iterator::operator++(&__for_begin_1);
  }
  refreshed = proto::PlayerDailyTaskCompBin::refresh_times(proto_comp);
  v23 = *(_BYTE *)(((unsigned __int64)&this->refresh_times_ >> 3) + 0x7FFF8000);
  if ( v23 != 0 && v23 <= 3 )
  {
    LOBYTE(p_for_end_1) = v23 != 0;
    __asan_report_store4(&this->refresh_times_, p_for_end_1, refreshed);
  }
  this->refresh_times_ = refreshed;
  v24 = proto::PlayerDailyTaskCompBin::total_reward_num(proto_comp);
  v25 = *(_BYTE *)(((unsigned __int64)&this->total_reward_num_ >> 3) + 0x7FFF8000);
  LOBYTE(p_for_end_1) = v25 != 0;
  v26 = (v25 != 0) & (unsigned __int8)((char)((((_BYTE)this + 44) & 7) + 3) >= v25);
  if ( (_BYTE)v26 )
    __asan_report_store4(&this->total_reward_num_, p_for_end_1, v26);
  this->total_reward_num_ = v24;
  v27 = proto::PlayerDailyTaskCompBin::filter_city_id(proto_comp);
  v28 = *(_BYTE *)(((unsigned __int64)&this->filter_city_id_ >> 3) + 0x7FFF8000);
  if ( v28 != 0 && v28 <= 3 )
  {
    LOBYTE(p_for_end_1) = v28 != 0;
    __asan_report_store4(&this->filter_city_id_, p_for_end_1, v27);
  }
  this->filter_city_id_ = v27;
  v29 = proto::PlayerDailyTaskCompBin::random_city_id(proto_comp);
  v30 = *(_BYTE *)(((unsigned __int64)&this->random_city_id_ >> 3) + 0x7FFF8000);
  LOBYTE(p_for_end_1) = v30 != 0;
  v31 = (v30 != 0) & (unsigned __int8)((char)((((_BYTE)this + 52) & 7) + 3) >= v30);
  if ( (_BYTE)v31 )
    __asan_report_store4(&this->random_city_id_, p_for_end_1, v31);
  this->random_city_id_ = v29;
  __for_range_3 = proto::PlayerDailyTaskCompBin::cycle_quest_list(proto_comp);
  __for_begin_3.it_ = google::protobuf::RepeatedPtrField<proto::DailyTaskCycleQuestBin>::begin(__for_range_3).it_;
  __for_end_3.it_ = google::protobuf::RepeatedPtrField<proto::DailyTaskCycleQuestBin>::end(__for_range_3).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::DailyTaskCycleQuestBin const>::operator!=(
            &__for_begin_3,
            &__for_end_3) )
  {
    quest_bin = google::protobuf::internal::RepeatedPtrIterator<proto::DailyTaskCycleQuestBin const>::operator*(&__for_begin_3);
    v32 = proto::DailyTaskCycleQuestBin::refresh_count(quest_bin);
    *(_DWORD *)(v2 + 48) = proto::DailyTaskCycleQuestBin::quest_id(quest_bin);
    v33 = (char *)(v2 + 48);
    v34 = std::unordered_map<unsigned int,unsigned int>::operator[](
            &this->cycle_quest_count_map_,
            (std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
    v35 = v34;
    v36 = *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000);
    if ( v36 != 0 && (char)(((unsigned __int8)v34 & 7) + 3) >= v36 )
    {
      LOBYTE(v33) = v36 != 0;
      __asan_report_store4(v34, v33, v34);
    }
    *v35 = v32;
    google::protobuf::internal::RepeatedPtrIterator<proto::DailyTaskCycleQuestBin const>::operator++(&__for_begin_3);
  }
  result = 0;
  if ( v62 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 95: range 0000000014188620-000000001418911F
int32_t __cdecl PlayerDailyTaskComp::toBin(PlayerDailyTaskComp *const this, proto::PlayerDataBin *player_data_bin)
{
  unsigned int *v2; // rax
  google::protobuf::uint32 *v3; // rdx
  unsigned int *v4; // rax
  google::protobuf::uint32 *v5; // rdx
  int *v6; // rax
  int32_t *v7; // rdx
  proto::Int32List *v8; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::reference v9; // rax
  std::pair<unsigned int const,unsigned int> *v10; // rdx
  int32_t var; // [rsp+1Ch] [rbp-124h]
  std::unordered_map<unsigned int,std::vector<int>>::iterator __for_begin_1; // [rsp+28h] [rbp-118h] BYREF
  std::unordered_map<unsigned int,unsigned int>::iterator __for_begin_2; // [rsp+30h] [rbp-110h] BYREF
  std::unordered_map<unsigned int,unsigned int>::iterator __for_end_1; // [rsp+38h] [rbp-108h] BYREF
  proto::PlayerDailyTaskCompBin *proto_comp; // [rsp+40h] [rbp-100h]
  std::map<unsigned int,DailyTaskInfo> *__for_range; // [rsp+48h] [rbp-F8h]
  std::unordered_set<unsigned int> *__for_range_0; // [rsp+50h] [rbp-F0h]
  std::deque<std::unordered_set<unsigned int>> *__for_range_1; // [rsp+58h] [rbp-E8h]
  google::protobuf::Map<unsigned int,proto::Int32List> *v20; // [rsp+60h] [rbp-E0h]
  std::unordered_map<unsigned int,std::vector<int>> *__for_range_3; // [rsp+68h] [rbp-D8h]
  std::unordered_map<unsigned int,unsigned int> *__for_range_5; // [rsp+70h] [rbp-D0h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *daily_task_id_0; // [rsp+78h] [rbp-C8h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *refresh_count; // [rsp+80h] [rbp-C0h]
  proto::DailyTaskCycleQuestBin *quest_bin; // [rsp+88h] [rbp-B8h]
  const std::pair<unsigned int const,std::vector<int> > *v26; // [rsp+90h] [rbp-B0h]
  std::tuple_element<0,const std::pair<unsigned int const,std::vector<int> > >::type *task_id_1; // [rsp+98h] [rbp-A8h]
  std::tuple_element<1,const std::pair<unsigned int const,std::vector<int> > >::type *v28; // [rsp+A0h] [rbp-A0h]
  const std::vector<int> *__for_range_4; // [rsp+A8h] [rbp-98h]
  const std::unordered_set<unsigned int> *pool_set; // [rsp+B0h] [rbp-90h]
  proto::Uint32List *pool_list; // [rsp+B8h] [rbp-88h]
  const std::unordered_set<unsigned int> *__for_range_2; // [rsp+C0h] [rbp-80h]
  const std::pair<unsigned int const,DailyTaskInfo> *v33; // [rsp+C8h] [rbp-78h]
  std::tuple_element<0,const std::pair<unsigned int const,DailyTaskInfo> >::type *daily_task_id; // [rsp+D0h] [rbp-70h]
  std::tuple_element<1,const std::pair<unsigned int const,DailyTaskInfo> >::type *info; // [rsp+D8h] [rbp-68h]
  proto::DailyTaskInfoBin *task_bin; // [rsp+E0h] [rbp-60h]
  std::pair<unsigned int const,unsigned int> __for_end; // [rsp+E8h] [rbp-58h] BYREF
  std::deque<std::unordered_set<unsigned int>>::iterator __for_begin_0; // [rsp+F0h] [rbp-50h] BYREF
  std::deque<std::unordered_set<unsigned int>>::iterator __for_end_0; // [rsp+110h] [rbp-30h] BYREF

  proto_comp = proto::PlayerDataBin::mutable_daily_task_bin(player_data_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_refresh_time_);
  }
  proto::PlayerDailyTaskCompBin::set_last_time(proto_comp, this->last_refresh_time_);
  __for_range = &this->task_map_;
  __for_end_1._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false>::__node_type *)std::map<unsigned int,DailyTaskInfo>::begin(&this->task_map_)._M_node;
  __for_end = (std::pair<unsigned int const,unsigned int>)std::map<unsigned int,DailyTaskInfo>::end(&this->task_map_)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,DailyTaskInfo> >::_Self *)&__for_end_1,
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,DailyTaskInfo> >::_Self *)&__for_end) )
  {
    v33 = std::_Rb_tree_iterator<std::pair<unsigned int const,DailyTaskInfo>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,DailyTaskInfo> > *const)&__for_end_1);
    daily_task_id = std::get<0ul,unsigned int const,DailyTaskInfo>(v33);
    info = (std::tuple_element<1,const std::pair<unsigned int const,DailyTaskInfo> >::type *)std::get<1ul,unsigned int const,DailyTaskInfo>(v33);
    task_bin = proto::PlayerDailyTaskCompBin::add_task_list(proto_comp);
    if ( *(_BYTE *)(((unsigned __int64)daily_task_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)daily_task_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)daily_task_id >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(daily_task_id);
    }
    proto::DailyTaskInfoBin::set_daily_task_id(task_bin, *daily_task_id);
    if ( *(_BYTE *)(((unsigned __int64)&info->preview_reward_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)info + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&info->preview_reward_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&info->preview_reward_id);
    }
    proto::DailyTaskInfoBin::set_preview_reward_id(task_bin, info->preview_reward_id);
    if ( *(_BYTE *)(((unsigned __int64)&info->progress >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)info + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&info->progress >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&info->progress);
    }
    proto::DailyTaskInfoBin::set_progress(task_bin, info->progress);
    if ( *(_BYTE *)(((unsigned __int64)&info->is_finished >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)info + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&info->is_finished >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&info->is_finished);
    }
    proto::DailyTaskInfoBin::set_is_finished(task_bin, info->is_finished);
    if ( *(_BYTE *)(((unsigned __int64)info >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)info & 7) + 3) >= *(_BYTE *)(((unsigned __int64)info >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(info);
    }
    proto::DailyTaskInfoBin::set_drop_id(task_bin, info->drop_id);
    std::_Rb_tree_iterator<std::pair<unsigned int const,DailyTaskInfo>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,DailyTaskInfo> > *const)&__for_end_1);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->score_player_level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->score_player_level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->score_player_level_);
  }
  proto::PlayerDailyTaskCompBin::set_score_player_level(proto_comp, this->score_player_level_);
  if ( *(char *)(((unsigned __int64)&this->is_taken_score_reward_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_taken_score_reward_);
  proto::PlayerDailyTaskCompBin::set_is_taken_score_reward(proto_comp, this->is_taken_score_reward_);
  if ( *(_BYTE *)(((unsigned __int64)&this->finished_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->finished_num_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->finished_num_);
  }
  proto::PlayerDailyTaskCompBin::set_finished_num(proto_comp, this->finished_num_);
  __for_range_0 = &this->sure_pool_set_;
  __for_end_1._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false>::__node_type *)std::unordered_set<unsigned int>::begin(&this->sure_pool_set_)._M_cur;
  __for_end = (std::pair<unsigned int const,unsigned int>)std::unordered_set<unsigned int>::end(__for_range_0)._M_cur;
  while ( std::__detail::operator!=<unsigned int,false>(
            (const std::__detail::_Node_iterator_base<unsigned int,false> *)&__for_end_1,
            (const std::__detail::_Node_iterator_base<unsigned int,false> *)&__for_end) )
  {
    v2 = (unsigned int *)std::__detail::_Node_iterator<unsigned int,true,false>::operator*((const std::__detail::_Node_iterator<unsigned int,true,false> *const)&__for_end_1);
    v3 = v2;
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v2);
    }
    proto::PlayerDailyTaskCompBin::add_sure_pool_list(proto_comp, *v3);
    std::__detail::_Node_iterator<unsigned int,true,false>::operator++((std::__detail::_Node_iterator<unsigned int,true,false> *const)&__for_end_1);
  }
  __for_range_1 = &this->possible_pools_que_;
  std::deque<std::unordered_set<unsigned int>>::begin(&__for_begin_0, &this->possible_pools_que_);
  std::deque<std::unordered_set<unsigned int>>::end(&__for_end_0, __for_range_1);
  while ( std::operator!=<std::unordered_set<unsigned int>,std::unordered_set<unsigned int>&,std::unordered_set<unsigned int>*>(
            &__for_begin_0,
            &__for_end_0) )
  {
    pool_set = std::_Deque_iterator<std::unordered_set<unsigned int>,std::unordered_set<unsigned int>&,std::unordered_set<unsigned int>*>::operator*(&__for_begin_0);
    pool_list = proto::PlayerDailyTaskCompBin::add_possible_pools_list(proto_comp);
    __for_range_2 = pool_set;
    __for_end_1._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false>::__node_type *)std::unordered_set<unsigned int>::begin(pool_set)._M_cur;
    __for_end = (std::pair<unsigned int const,unsigned int>)std::unordered_set<unsigned int>::end(__for_range_2)._M_cur;
    while ( std::__detail::operator!=<unsigned int,false>(
              (const std::__detail::_Node_iterator_base<unsigned int,false> *)&__for_end_1,
              (const std::__detail::_Node_iterator_base<unsigned int,false> *)&__for_end) )
    {
      v4 = (unsigned int *)std::__detail::_Node_const_iterator<unsigned int,true,false>::operator*((const std::__detail::_Node_const_iterator<unsigned int,true,false> *const)&__for_end_1);
      v5 = v4;
      if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v4);
      }
      proto::Uint32List::add_uint32_list(pool_list, *v5);
      std::__detail::_Node_const_iterator<unsigned int,true,false>::operator++((std::__detail::_Node_const_iterator<unsigned int,true,false> *const)&__for_end_1);
    }
    std::_Deque_iterator<std::unordered_set<unsigned int>,std::unordered_set<unsigned int>&,std::unordered_set<unsigned int>*>::operator++(&__for_begin_0);
  }
  v20 = proto::PlayerDailyTaskCompBin::mutable_task_var_map(proto_comp);
  __for_range_3 = &this->task_var_map_;
  __for_begin_1._M_cur = std::unordered_map<unsigned int,std::vector<int>>::begin(&this->task_var_map_)._M_cur;
  __for_begin_2._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false>::__node_type *)std::unordered_map<unsigned int,std::vector<int>>::end(__for_range_3)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::vector<int>>,false>(
            &__for_begin_1,
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<int> >,false> *)&__for_begin_2) )
  {
    v26 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<int>>,false,false>::operator*(&__for_begin_1);
    task_id_1 = std::get<0ul,unsigned int const,std::vector<int>>(v26);
    v28 = (std::tuple_element<1,const std::pair<unsigned int const,std::vector<int> > >::type *)std::get<1ul,unsigned int const,std::vector<int>>(v26);
    __for_range_4 = v28;
    __for_end_1._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false>::__node_type *)std::vector<int>::begin(v28)._M_current;
    __for_end = (std::pair<unsigned int const,unsigned int>)std::vector<int>::end(__for_range_4)._M_current;
    while ( __gnu_cxx::operator!=<int const*,std::vector<int>>(
              (const __gnu_cxx::__normal_iterator<int const*,std::vector<int> > *)&__for_end_1,
              (const __gnu_cxx::__normal_iterator<int const*,std::vector<int> > *)&__for_end) )
    {
      v6 = (int *)__gnu_cxx::__normal_iterator<int const*,std::vector<int>>::operator*((const __gnu_cxx::__normal_iterator<int const*,std::vector<int> > *const)&__for_end_1);
      v7 = v6;
      if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v6);
      }
      var = *v7;
      v8 = google::protobuf::Map<unsigned int,proto::Int32List>::operator[](v20, task_id_1);
      proto::Int32List::add_int32_list(v8, var);
      __gnu_cxx::__normal_iterator<int const*,std::vector<int>>::operator++((__gnu_cxx::__normal_iterator<int const*,std::vector<int> > *const)&__for_end_1);
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<int>>,false,false>::operator++(&__for_begin_1);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->refresh_times_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->refresh_times_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->refresh_times_);
  }
  proto::PlayerDailyTaskCompBin::set_refresh_times(proto_comp, this->refresh_times_);
  if ( *(_BYTE *)(((unsigned __int64)&this->total_reward_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->total_reward_num_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->total_reward_num_);
  }
  proto::PlayerDailyTaskCompBin::set_total_reward_num(proto_comp, this->total_reward_num_);
  if ( *(_BYTE *)(((unsigned __int64)&this->filter_city_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->filter_city_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->filter_city_id_);
  }
  proto::PlayerDailyTaskCompBin::set_filter_city_id(proto_comp, this->filter_city_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->random_city_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->random_city_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->random_city_id_);
  }
  proto::PlayerDailyTaskCompBin::set_random_city_id(proto_comp, this->random_city_id_);
  __for_range_5 = &this->cycle_quest_count_map_;
  __for_begin_2._M_cur = std::unordered_map<unsigned int,unsigned int>::begin(&this->cycle_quest_count_map_)._M_cur;
  __for_end_1._M_cur = std::unordered_map<unsigned int,unsigned int>::end(__for_range_5)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(&__for_begin_2, &__for_end_1) )
  {
    v9 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*(&__for_begin_2);
    v10 = v9;
    if ( ((unsigned __int8)v9 & 7) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v9->second + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v9 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v9->second + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(v9, 8LL);
    }
    __for_end = *v10;
    daily_task_id_0 = std::get<0ul,unsigned int const,unsigned int>(&__for_end);
    refresh_count = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(&__for_end);
    quest_bin = proto::PlayerDailyTaskCompBin::add_cycle_quest_list(proto_comp);
    if ( *(_BYTE *)(((unsigned __int64)daily_task_id_0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)daily_task_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)daily_task_id_0 >> 3)
                                                                        + 0x7FFF8000) )
    {
      __asan_report_load4(daily_task_id_0);
    }
    proto::DailyTaskCycleQuestBin::set_quest_id(quest_bin, *daily_task_id_0);
    if ( *(_BYTE *)(((unsigned __int64)refresh_count >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)refresh_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)refresh_count >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(refresh_count);
    }
    proto::DailyTaskCycleQuestBin::set_refresh_count(quest_bin, *refresh_count);
    std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++(&__for_begin_2);
  }
  return 0;
};

// Line 149: range 0000000014189120-00000000141891A8
int32_t __cdecl PlayerDailyTaskComp::onLogin(PlayerDailyTaskComp *const this, bool is_new_player)
{
  PlayerDailyTaskComp::checkAndRepair(this);
  PlayerDailyTaskComp::notifyUnlockedCities(this);
  PlayerDailyTaskComp::tryRefresh(this, 0);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( !Player::isRelogin(this->player_) )
    PlayerDailyTaskComp::startDailyTask(this);
  return 0;
};

// Line 165: range 00000000141891AA-00000000141894F7
int32_t __cdecl PlayerDailyTaskComp::notifyAllData(PlayerDailyTaskComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  DailyTaskExcelConfigMgr *p_daily_task_config_mgr; // rcx
  std::__shared_ptr_access<proto::DailyTaskDataNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rcx
  std::__shared_ptr_access<proto::DailyTaskDataNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rcx
  std::__shared_ptr_access<proto::DailyTaskDataNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rcx
  Player *player; // r14
  int32_t result; // eax
  const data::DailyTaskLevelExcelConfig *score_config_ptr; // [rsp+18h] [rbp-88h]
  std::shared_ptr<const google::protobuf::Message> v11; // [rsp+20h] [rbp-80h] BYREF
  char v12[112]; // [rsp+30h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 14 notify_ptr:166";
  *(_QWORD *)(v1 + 16) = PlayerDailyTaskComp::notifyAllData;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::tools::perf::make_shared<proto::DailyTaskDataNotify>();
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v11);
  p_daily_task_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v11)->design_config.txt_config_mgr.daily_task_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->score_player_level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->score_player_level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->score_player_level_);
  }
  score_config_ptr = DailyTaskExcelConfigMgr::findScoreConfig(p_daily_task_config_mgr, this->score_player_level_);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v11);
  if ( score_config_ptr )
  {
    v5 = std::__shared_ptr_access<proto::DailyTaskDataNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::DailyTaskDataNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&score_config_ptr->score_preview_reward_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)score_config_ptr + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&score_config_ptr->score_preview_reward_id >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(&score_config_ptr->score_preview_reward_id);
    }
    proto::DailyTaskDataNotify::set_score_reward_id(v5, score_config_ptr->score_preview_reward_id);
  }
  v6 = std::__shared_ptr_access<proto::DailyTaskDataNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::DailyTaskDataNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
  if ( *(char *)(((unsigned __int64)&this->is_taken_score_reward_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_taken_score_reward_);
  proto::DailyTaskDataNotify::set_is_taken_score_reward(v6, this->is_taken_score_reward_);
  v7 = std::__shared_ptr_access<proto::DailyTaskDataNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::DailyTaskDataNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->finished_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->finished_num_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->finished_num_);
  }
  proto::DailyTaskDataNotify::set_finished_num(v7, this->finished_num_);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  player = this->player_;
  std::dynamic_pointer_cast<google::protobuf::Message const,proto::DailyTaskDataNotify>((const std::shared_ptr<proto::DailyTaskDataNotify> *)&v11);
  Player::sendMessage(player, &v11, 0LL);
  std::shared_ptr<google::protobuf::Message const>::~shared_ptr(&v11);
  PlayerDailyTaskComp::notifyAllTaskVar(this);
  std::shared_ptr<proto::DailyTaskDataNotify>::~shared_ptr((std::shared_ptr<proto::DailyTaskDataNotify> *const)(v1 + 32));
  result = 0;
  if ( v12 == (char *)v1 )
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

// Line 180: range 00000000141894F8-0000000014189929
int32_t __cdecl PlayerDailyTaskComp::fillOwnerDailyTaskNotify(
        const PlayerDailyTaskComp *const this,
        proto::WorldOwnerDailyTaskNotify *notify)
{
  DailyTaskExcelConfigMgr *p_daily_task_config_mgr; // rcx
  common::milog::MiLogStream *v3; // rax
  std::map<unsigned int,DailyTaskInfo>::const_iterator __for_begin; // [rsp+10h] [rbp-80h] BYREF
  std::map<unsigned int,DailyTaskInfo>::const_iterator __for_end; // [rsp+18h] [rbp-78h] BYREF
  const std::map<unsigned int,DailyTaskInfo> *__for_range; // [rsp+20h] [rbp-70h]
  const std::pair<unsigned int const,DailyTaskInfo> *v8; // [rsp+28h] [rbp-68h]
  std::tuple_element<0,const std::pair<unsigned int const,DailyTaskInfo> >::type *daily_task_id; // [rsp+30h] [rbp-60h]
  std::tuple_element<1,const std::pair<unsigned int const,DailyTaskInfo> >::type *info; // [rsp+38h] [rbp-58h]
  const data::DailyTaskExcelConfig *task_config_ptr; // [rsp+40h] [rbp-50h]
  proto::DailyTaskInfo *task_proto; // [rsp+48h] [rbp-48h]
  std::shared_ptr<Config> v13; // [rsp+50h] [rbp-40h] BYREF
  common::milog::MiLogStream v14; // [rsp+60h] [rbp-30h] BYREF

  __for_range = &this->task_map_;
  __for_begin._M_node = std::map<unsigned int,DailyTaskInfo>::begin(&this->task_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,DailyTaskInfo>::end(&this->task_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v8 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,DailyTaskInfo>>::operator*(&__for_begin);
    daily_task_id = std::get<0ul,unsigned int const,DailyTaskInfo>(v8);
    info = (std::tuple_element<1,const std::pair<unsigned int const,DailyTaskInfo> >::type *)std::get<1ul,unsigned int const,DailyTaskInfo>(v8);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v13);
    p_daily_task_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13)->design_config.txt_config_mgr.daily_task_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)daily_task_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)daily_task_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)daily_task_id >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(daily_task_id);
    }
    task_config_ptr = data::DailyTaskExcelConfigMgrBase::findDailyTaskExcelConfig(
                        p_daily_task_config_mgr,
                        *daily_task_id);
    std::shared_ptr<Config>::~shared_ptr(&v13);
    if ( task_config_ptr )
    {
      task_proto = proto::WorldOwnerDailyTaskNotify::add_task_list(notify);
      if ( *(_BYTE *)(((unsigned __int64)daily_task_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)daily_task_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)daily_task_id >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(daily_task_id);
      }
      proto::DailyTaskInfo::set_daily_task_id(task_proto, *daily_task_id);
      if ( *(_BYTE *)(((unsigned __int64)&info->preview_reward_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)info + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&info->preview_reward_id >> 3)
                                                           + 0x7FFF8000) )
      {
        __asan_report_load4(&info->preview_reward_id);
      }
      proto::DailyTaskInfo::set_reward_id(task_proto, info->preview_reward_id);
      if ( *(_BYTE *)(((unsigned __int64)&info->progress >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)info + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&info->progress >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&info->progress);
      }
      proto::DailyTaskInfo::set_progress(task_proto, info->progress);
      if ( *(_BYTE *)(((unsigned __int64)&task_config_ptr->finish_progress >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)task_config_ptr - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&task_config_ptr->finish_progress >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(&task_config_ptr->finish_progress);
      }
      proto::DailyTaskInfo::set_finish_progress(task_proto, task_config_ptr->finish_progress);
      if ( *(_BYTE *)(((unsigned __int64)&info->is_finished >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)info + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&info->is_finished >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&info->is_finished);
      }
      proto::DailyTaskInfo::set_is_finished(task_proto, info->is_finished);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player_daily_task_comp.cpp",
        "fillOwnerDailyTaskNotify",
        186);
      v3 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
             &v14,
             (const char (*)[33])"findDailyTaskExcelConfig fails, ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, daily_task_id);
      common::milog::MiLogStream::~MiLogStream(&v14);
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,DailyTaskInfo>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->filter_city_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->filter_city_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->filter_city_id_);
  }
  proto::WorldOwnerDailyTaskNotify::set_filter_city_id(notify, this->filter_city_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->finished_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->finished_num_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->finished_num_);
  }
  proto::WorldOwnerDailyTaskNotify::set_finished_daily_task_num(notify, this->finished_num_);
  return 0;
};

// Line 202: range 000000001418992A-0000000014189AFA
void __cdecl PlayerDailyTaskComp::onFinishQuest(PlayerDailyTaskComp *const this, uint32_t quest_id)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  bool v3; // bl
  PlayerSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v5; // rbx
  common::milog::MiLogStream *v6; // rax
  unsigned int val; // [rsp+1Ch] [rbp-44h] BYREF
  std::shared_ptr<Config> v8; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v9; // [rsp+30h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v8);
  v2 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v8);
  v3 = !DailyTaskExcelConfigMgr::isQuestOpenCity(&v2->design_config.txt_config_mgr.daily_task_config_mgr, quest_id);
  std::shared_ptr<Config>::~shared_ptr(&v8);
  if ( !v3 )
  {
    PlayerDailyTaskComp::notifyUnlockedCities(this);
    if ( std::map<unsigned int,DailyTaskInfo>::empty(&this->task_map_) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      SceneComp = Player::getSceneComp(this->player_);
      if ( !PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
      {
        common::milog::MiLogStream::create(
          &v9,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/player_daily_task_comp.cpp",
          "onFinishQuest",
          214);
        v5 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v9, (const char (*)[6])"uid: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
        common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v6, (const char (*)[19])" not in self world");
        common::milog::MiLogStream::~MiLogStream(&v9);
      }
      else
      {
        PlayerDailyTaskComp::tryRefresh(this, 1);
      }
    }
  }
};

// Line 222: range 0000000014189AFC-0000000014189BE9
int32_t __cdecl PlayerDailyTaskComp::tryRefresh(PlayerDailyTaskComp *const this, bool is_notify)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  uint32_t now; // [rsp+18h] [rbp-18h]
  uint32_t time_offset; // [rsp+1Ch] [rbp-14h]
  std::shared_ptr<Config> v7; // [rsp+20h] [rbp-10h] BYREF

  now = common::tools::TimeUtils::getNow();
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v7);
  v2 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v7);
  time_offset = ConstValueExcelConfigMgr::getTimeOffsetSec(&v2->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v7);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_refresh_time_);
  }
  if ( this->last_refresh_time_ && common::tools::TimeUtils::isSameDay(now, this->last_refresh_time_, time_offset) )
    return -1;
  PlayerDailyTaskComp::doRefresh(this, now, is_notify);
  return 0;
};

// Line 235: range 0000000014189BEA-0000000014189C09
void __cdecl PlayerDailyTaskComp::onDailyRefresh(PlayerDailyTaskComp *const this)
{
  PlayerDailyTaskComp::tryRefresh(this, 1);
};

// Line 240: range 0000000014189C0A-0000000014189D5D
DailyTaskInfo *__fastcall PlayerDailyTaskComp::findDailyTaskInfo(PlayerDailyTaskComp *const this, uint32_t task_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  DailyTaskInfo *result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,DailyTaskInfo> >::_Self __y; // [rsp+18h] [rbp-88h] BYREF
  char v7[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 11 task_id:239 64 8 8 iter:241";
  *(_QWORD *)(v2 + 16) = PlayerDailyTaskComp::findDailyTaskInfo;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = task_id;
  *(std::map<unsigned int,DailyTaskInfo>::iterator *)(v2 + 64) = std::map<unsigned int,DailyTaskInfo>::find(
                                                                   &this->task_map_,
                                                                   (const std::map<unsigned int,DailyTaskInfo>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,DailyTaskInfo>::end(&this->task_map_)._M_node;
  if ( std::operator!=(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,DailyTaskInfo> >::_Self *)(v2 + 64),
         &__y) )
  {
    result = &std::_Rb_tree_iterator<std::pair<unsigned int const,DailyTaskInfo>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,DailyTaskInfo> > *const)(v2 + 64))->second;
  }
  else
  {
    result = 0LL;
  }
  if ( v7 == (char *)v2 )
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

// Line 250: range 0000000014189D5E-000000001418A57C
void __cdecl PlayerDailyTaskComp::clear(PlayerDailyTaskComp *const this)
{
  std::map<unsigned int,DailyTaskInfo> *v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  DailyTaskExcelConfigMgr *p_daily_task_config_mgr; // rcx
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  data::DailyTaskType v7; // eax
  PlayerQuestComp *QuestComp; // rcx
  PlayerQuestComp *v9; // rax
  common::milog::MiLogStream *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rdx
  PlayerEventComp *EventComp; // rax
  PlayerEventComp *v14; // rax
  uint32_t parent_quest_id; // [rsp+14h] [rbp-12Ch]
  std::map<unsigned int,DailyTaskInfo>::iterator __for_begin; // [rsp+18h] [rbp-128h] BYREF
  std::map<unsigned int,DailyTaskInfo>::iterator __for_end; // [rsp+20h] [rbp-120h] BYREF
  std::map<unsigned int,DailyTaskInfo> *__for_range; // [rsp+28h] [rbp-118h]
  std::unordered_map<std::type_index,std::weak_ptr<Observer>> *__for_range_0; // [rsp+30h] [rbp-110h]
  std::pair<const std::type_index,std::weak_ptr<Observer> > *__in; // [rsp+38h] [rbp-108h]
  std::tuple_element<0,std::pair<const std::type_index,std::weak_ptr<Observer> > >::type *type; // [rsp+40h] [rbp-100h]
  std::tuple_element<1,std::pair<const std::type_index,std::weak_ptr<Observer> > >::type *observer_wtr; // [rsp+48h] [rbp-F8h]
  const std::pair<unsigned int const,DailyTaskInfo> *v23; // [rsp+50h] [rbp-F0h]
  std::tuple_element<0,const std::pair<unsigned int const,DailyTaskInfo> >::type *daily_task_id; // [rsp+58h] [rbp-E8h]
  std::tuple_element<1,const std::pair<unsigned int const,DailyTaskInfo> >::type *info; // [rsp+60h] [rbp-E0h]
  const data::DailyTaskExcelConfig *task_config_ptr; // [rsp+68h] [rbp-D8h]
  std::shared_ptr<Config> v27; // [rsp+70h] [rbp-D0h] BYREF
  common::milog::MiLogStream v28; // [rsp+80h] [rbp-C0h] BYREF
  char v29[160]; // [rsp+A0h] [rbp-A0h] BYREF

  v1 = (std::map<unsigned int,DailyTaskInfo> *)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = (std::map<unsigned int,DailyTaskInfo> *)v2;
  }
  *(_QWORD *)v1->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v1->_M_t._M_impl._M_header._M_color = "1 48 48 16 old_task_map:252";
  v1->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)PlayerDailyTaskComp::clear;
  v3 = (_DWORD *)((unsigned __int64)v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862723] = -202116109;
  std::map<unsigned int,DailyTaskInfo>::map(v1 + 1, &this->task_map_);
  std::map<unsigned int,DailyTaskInfo>::clear(&this->task_map_);
  __for_range = v1 + 1;
  __for_begin._M_node = std::map<unsigned int,DailyTaskInfo>::begin(v1 + 1)._M_node;
  __for_end._M_node = std::map<unsigned int,DailyTaskInfo>::end(v1 + 1)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v23 = std::_Rb_tree_iterator<std::pair<unsigned int const,DailyTaskInfo>>::operator*(&__for_begin);
    daily_task_id = std::get<0ul,unsigned int const,DailyTaskInfo>(v23);
    info = (std::tuple_element<1,const std::pair<unsigned int const,DailyTaskInfo> >::type *)std::get<1ul,unsigned int const,DailyTaskInfo>(v23);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v27);
    p_daily_task_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v27)->design_config.txt_config_mgr.daily_task_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)daily_task_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)daily_task_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)daily_task_id >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(daily_task_id);
    }
    task_config_ptr = data::DailyTaskExcelConfigMgrBase::findDailyTaskExcelConfig(
                        p_daily_task_config_mgr,
                        *daily_task_id);
    std::shared_ptr<Config>::~shared_ptr(&v27);
    if ( task_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&task_config_ptr->type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)task_config_ptr + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&task_config_ptr->type >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4(&task_config_ptr->type);
      }
      v7 = task_config_ptr->type;
      if ( v7 )
      {
        if ( v7 == DAILY_TASK_SCENE )
        {
          PlayerDailyTaskComp::unregisterTaskGroups(this, task_config_ptr);
        }
        else
        {
          common::milog::MiLogStream::create(
            &v28,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/player_daily_task_comp.cpp",
            "clear",
            273);
          v10 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(&v28, (const char (*)[24])off_25261240);
          common::milog::MiLogStream::operator<<<data::DailyTaskType,(data::DailyTaskType*)0>(
            v10,
            &task_config_ptr->type);
          common::milog::MiLogStream::~MiLogStream(&v28);
        }
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        QuestComp = Player::getQuestComp(this->player_);
        if ( *(_BYTE *)(((unsigned __int64)&task_config_ptr->quest_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)task_config_ptr + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&task_config_ptr->quest_id >> 3)
                                                                         + 0x7FFF8000) )
        {
          __asan_report_load4(&task_config_ptr->quest_id);
        }
        parent_quest_id = PlayerQuestComp::findParentQuestId(QuestComp, task_config_ptr->quest_id);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v9 = Player::getQuestComp(this->player_);
        PlayerQuestComp::cancelParentQuest(v9, parent_quest_id, 1);
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player_daily_task_comp.cpp",
        "clear",
        260);
      v5 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
             &v28,
             (const char (*)[26])"findDailyTaskExcelConfig ");
      v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, daily_task_id);
      common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v6, (const char (*)[7])" fails");
      common::milog::MiLogStream::~MiLogStream(&v28);
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,DailyTaskInfo>>::operator++(&__for_begin);
  }
  std::vector<std::set<unsigned int>>::clear(&this->exclude_tag_vec_);
  if ( *(_BYTE *)(((unsigned __int64)&this->score_player_level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->score_player_level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->score_player_level_, &__for_end, &this->score_player_level_);
  }
  this->score_player_level_ = 0;
  if ( *(char *)(((unsigned __int64)&this->is_taken_score_reward_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_taken_score_reward_, &__for_end, &this->is_taken_score_reward_);
  this->is_taken_score_reward_ = 0;
  v11 = (*(_BYTE *)(((unsigned __int64)&this->finished_num_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->finished_num_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v11 )
    __asan_report_store4(&this->finished_num_, (((_BYTE)this + 92) & 7u) + 3, v11);
  this->finished_num_ = 0;
  v12 = (*(_BYTE *)(((unsigned __int64)&this->random_city_id_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->random_city_id_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v12 )
    __asan_report_store4(&this->random_city_id_, (((_BYTE)this + 52) & 7u) + 3, v12);
  this->random_city_id_ = 0;
  if ( !std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->talk_observer_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    EventComp = Player::getEventComp(this->player_);
    PlayerEventComp::unregisterObserver(EventComp, &this->talk_observer_);
    std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::reset(&this->talk_observer_);
  }
  __for_range_0 = &this->observer_map_;
  __for_begin._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,DailyTaskInfo> >::_Base_ptr)std::unordered_map<std::type_index,std::weak_ptr<Observer>>::begin(&this->observer_map_)._M_cur;
  __for_end._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,DailyTaskInfo> >::_Base_ptr)std::unordered_map<std::type_index,std::weak_ptr<Observer>>::end(__for_range_0)._M_cur;
  while ( std::__detail::operator!=<std::pair<std::type_index const,std::weak_ptr<Observer>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::type_index,std::weak_ptr<Observer> >,false> *)&__for_begin,
            (const std::__detail::_Node_iterator_base<std::pair<const std::type_index,std::weak_ptr<Observer> >,false> *)&__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<std::type_index const,std::weak_ptr<Observer>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<const std::type_index,std::weak_ptr<Observer> >,false,false> *const)&__for_begin);
    type = std::get<0ul,std::type_index const,std::weak_ptr<Observer>>(__in);
    observer_wtr = std::get<1ul,std::type_index const,std::weak_ptr<Observer>>(__in);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v14 = Player::getEventComp(this->player_);
    PlayerEventComp::unregisterObserver(v14, observer_wtr);
    std::__detail::_Node_iterator<std::pair<std::type_index const,std::weak_ptr<Observer>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<const std::type_index,std::weak_ptr<Observer> >,false,false> *const)&__for_begin);
  }
  std::unordered_map<std::type_index,std::weak_ptr<Observer>>::clear(&this->observer_map_);
  std::map<unsigned int,unsigned int>::clear(&this->delayed_unregister_group_tasks_map_);
  std::map<unsigned int,DailyTaskInfo>::~map(v1 + 1);
  if ( v29 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v1->_M_t._M_impl.gap0 = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 302: range 000000001418A57E-000000001418A9B2
void __cdecl PlayerDailyTaskComp::registerTaskGroups(
        PlayerDailyTaskComp *const this,
        const data::DailyTaskExcelConfig *task_config,
        uint32_t revise_level)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  LuaConfigMgr *p_lua_config_mgr; // r14
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v8; // rax
  uint32_t *v9; // rdx
  uint32_t SceneComp; // eax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  const unsigned int *v14; // rax
  common::milog::MiLogStream *v15; // rax
  Scene *v16; // rax
  SceneBlockGroupComp *BlockGroupComp; // rax
  unsigned __int64 v18; // rdx
  common::milog::MiLogStream v20; // [rsp+20h] [rbp-B0h] BYREF
  char v21[144]; // [rsp+40h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 12 scene_id:308 64 16 13 scene_ptr:309";
  *(_QWORD *)(v3 + 16) = PlayerDailyTaskComp::registerTaskGroups;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  if ( std::vector<unsigned int>::empty(&task_config->new_group_vec) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/player_daily_task_comp.cpp",
      "registerTaskGroups",
      305);
    v6 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           &v20,
           (const char (*)[32])"it should not happend! task_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &task_config->id);
    common::milog::MiLogStream::~MiLogStream(&v20);
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v3 + 64));
    p_lua_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64))->design_config.lua_config_mgr;
    v8 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                               &task_config->new_group_vec,
                                                                                               0LL);
    v9 = v8;
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v8);
    }
    *(_DWORD *)(v3 + 48) = LuaConfigMgr::getSceneIdByGroupId(p_lua_config_mgr, *v9);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    SceneComp = (unsigned int)Player::getSceneComp(this->player_);
    PlayerSceneComp::findScene((const PlayerSceneComp *const)(v3 + 64), SceneComp);
    if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/player_daily_task_comp.cpp",
        "registerTaskGroups",
        312);
      v11 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v20, (const char (*)[11])"findScene:");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 48));
      v13 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v12, (const char (*)[11])" group_id:");
      v14 = std::vector<unsigned int>::operator[](&task_config->new_group_vec, 0LL);
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, v14);
      common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v15, (const char (*)[7])" fails");
      common::milog::MiLogStream::~MiLogStream(&v20);
    }
    else
    {
      v16 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      BlockGroupComp = Scene::getBlockGroupComp(v16);
      if ( *(_BYTE *)(((unsigned __int64)BlockGroupComp >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v18 = (unsigned __int64)(BlockGroupComp->_vptr_SceneCompBase + 12);
      if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      (*(void (__fastcall **)(SceneBlockGroupComp *, std::vector<unsigned int> *, _QWORD, _QWORD))v18)(
        BlockGroupComp,
        &task_config->new_group_vec,
        revise_level,
        0LL);
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 64));
  }
  if ( v21 == (char *)v3 )
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

// Line 321: range 000000001418A9B4-000000001418ADD8
void __cdecl PlayerDailyTaskComp::unregisterTaskGroups(
        PlayerDailyTaskComp *const this,
        const data::DailyTaskExcelConfig *task_config)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  LuaConfigMgr *p_lua_config_mgr; // r14
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v7; // rax
  uint32_t *v8; // rdx
  uint32_t SceneComp; // eax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  const unsigned int *v13; // rax
  common::milog::MiLogStream *v14; // rax
  Scene *v15; // rax
  SceneBlockGroupComp *BlockGroupComp; // rax
  unsigned __int64 v17; // rdx
  common::milog::MiLogStream v18; // [rsp+10h] [rbp-B0h] BYREF
  char v19[144]; // [rsp+30h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 scene_id:327 64 16 13 scene_ptr:328";
  *(_QWORD *)(v2 + 16) = PlayerDailyTaskComp::unregisterTaskGroups;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  if ( std::vector<unsigned int>::empty(&task_config->new_group_vec) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/player_daily_task_comp.cpp",
      "unregisterTaskGroups",
      324);
    v5 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           &v18,
           (const char (*)[32])"it should not happend! task_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &task_config->id);
    common::milog::MiLogStream::~MiLogStream(&v18);
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v2 + 64));
    p_lua_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64))->design_config.lua_config_mgr;
    v7 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                               &task_config->new_group_vec,
                                                                                               0LL);
    v8 = v7;
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v7);
    }
    *(_DWORD *)(v2 + 48) = LuaConfigMgr::getSceneIdByGroupId(p_lua_config_mgr, *v8);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    SceneComp = (unsigned int)Player::getSceneComp(this->player_);
    PlayerSceneComp::findScene((const PlayerSceneComp *const)(v2 + 64), SceneComp);
    if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/player_daily_task_comp.cpp",
        "unregisterTaskGroups",
        331);
      v10 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v18, (const char (*)[11])"findScene:");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])" group_id:");
      v13 = std::vector<unsigned int>::operator[](&task_config->new_group_vec, 0LL);
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, v13);
      common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v14, (const char (*)[7])" fails");
      common::milog::MiLogStream::~MiLogStream(&v18);
    }
    else
    {
      v15 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      BlockGroupComp = Scene::getBlockGroupComp(v15);
      if ( *(_BYTE *)(((unsigned __int64)BlockGroupComp >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v17 = (unsigned __int64)(BlockGroupComp->_vptr_SceneCompBase + 13);
      if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      (*(void (__fastcall **)(SceneBlockGroupComp *, std::vector<unsigned int> *, __int64))v17)(
        BlockGroupComp,
        &task_config->new_group_vec,
        1LL);
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 64));
  }
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
};

// Line 339: range 000000001418ADDA-000000001418B323
// local variable allocation has failed, the output may be wrong!
void __cdecl PlayerDailyTaskComp::generateDailyTask(PlayerDailyTaskComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  PlayerBasicComp *BasicComp; // rax
  __int64 v5; // rsi
  PlayerBasicComp *v6; // rax
  __int64 Level; // rdx
  char v8; // al
  DailyTaskExcelConfigMgr *p_daily_task_config_mgr; // rcx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  common::milog::MiLogStream *v15; // r14
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  std::string v18; // [rsp+0h] [rbp-C0h] OVERLAPPED BYREF
  std::shared_ptr<Config> v19; // [rsp+20h] [rbp-A0h] BYREF
  std::string v20; // [rsp+30h] [rbp-90h] BYREF
  char v21[112]; // [rsp+50h] [rbp-70h] BYREF

  v18._M_string_length = (std::string::size_type)this;
  v1 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 1 10 holder:341";
  *(_QWORD *)(v1 + 16) = PlayerDailyTaskComp::generateDailyTask;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116351;
  PlayerDailyTaskComp::checkAndRepair((PlayerDailyTaskComp *const)v18._M_string_length);
  if ( *(_BYTE *)(((v18._M_string_length + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Player::getBasicComp(*(Player *const *)(v18._M_string_length + 24));
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v20, BasicComp);
  v5 = 2101LL;
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 32), 0x835u, v18);
  std::string::~string(&v20);
  PlayerDailyTaskComp::chooseTaskFromRefreshTimesConfig((PlayerDailyTaskComp *const)v18._M_string_length);
  PlayerDailyTaskComp::chooseTaskFromSurePool((PlayerDailyTaskComp *const)v18._M_string_length);
  PlayerDailyTaskComp::chooseTaskFromPossiblePool((PlayerDailyTaskComp *const)v18._M_string_length);
  PlayerDailyTaskComp::chooseTaskFromCommonPool((PlayerDailyTaskComp *const)v18._M_string_length);
  if ( *(_BYTE *)(((v18._M_string_length + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = Player::getBasicComp(*(Player *const *)(v18._M_string_length + 24));
  Level = PlayerBasicComp::getLevel(v6);
  v8 = *(_BYTE *)(((v18._M_string_length + 88) >> 3) + 0x7FFF8000);
  LOBYTE(v5) = v8 != 0;
  if ( v8 != 0 && v8 <= 3 )
    __asan_report_store4(v18._M_string_length + 88, v5, Level);
  *(_DWORD *)(v18._M_string_length + 88) = Level;
  if ( *(char *)(((v18._M_string_length + 96) >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(v18._M_string_length + 96, v5, v18._M_string_length + 96);
  *(_BYTE *)(v18._M_string_length + 96) = 0;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v19);
  p_daily_task_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19)->design_config.txt_config_mgr.daily_task_config_mgr;
  if ( *(_BYTE *)(((v18._M_string_length + 88) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((v18._M_string_length + 88) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(v18._M_string_length + 88);
  }
  *(&v18._anon_0._M_allocated_capacity + 1) = (std::string::size_type)DailyTaskExcelConfigMgr::findScoreConfig(
                                                                        p_daily_task_config_mgr,
                                                                        *(_DWORD *)(v18._M_string_length + 88));
  std::shared_ptr<Config>::~shared_ptr(&v19);
  if ( *(&v18._anon_0._M_allocated_capacity + 1) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v20,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/player_daily_task_comp.cpp",
      "generateDailyTask",
      357);
    v10 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
            (common::milog::MiLogStream *const)&v20,
            (const char (*)[17])"generate level: ");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v10,
            (const unsigned int *)(v18._M_string_length + 88));
    v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v11, (const char (*)[16])" score_drop_id:");
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v12,
            (const unsigned int *)(*(&v18._anon_0._M_allocated_capacity + 1) + 24));
    v14 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v13, (const char (*)[7])" uid: ");
    if ( *(_BYTE *)(((v18._M_string_length + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    HIDWORD(v18._anon_0._M_allocated_capacity) = Player::getUid(*(const Player *const *)(v18._M_string_length + 24));
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
      v14,
      (const unsigned int *)&v18._anon_0._M_allocated_capacity + 1);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v20);
  }
  else
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v20,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/player_daily_task_comp.cpp",
      "generateDailyTask",
      361);
    v15 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
            (common::milog::MiLogStream *const)&v20,
            (const char (*)[6])"uid: ");
    if ( *(_BYTE *)(((v18._M_string_length + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    HIDWORD(v18._anon_0._M_allocated_capacity) = Player::getUid(*(const Player *const *)(v18._M_string_length + 24));
    v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v15,
            (const unsigned int *)&v18._anon_0._M_allocated_capacity + 1);
    v17 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
            v16,
            (const char (*)[32])" findScoreConfig fails, level: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
      v17,
      (const unsigned int *)(v18._M_string_length + 88));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v20);
  }
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 32));
  if ( v21 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 367: range 000000001418B324-000000001418BA58
void __cdecl PlayerDailyTaskComp::chooseTaskFromRefreshTimesConfig(PlayerDailyTaskComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::vector<std::vector<unsigned int>>::size_type refresh_times; // r14
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v9; // rax
  _DWORD *v10; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  bool isDailyTaskIdClosed; // r14
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  uint32_t task_max_num; // [rsp+1Ch] [rbp-D4h]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-D0h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-C8h] BYREF
  const std::vector<std::vector<unsigned int>> *refresh_times_pool_vec; // [rsp+30h] [rbp-C0h]
  const std::vector<unsigned int> *pool_vec; // [rsp+38h] [rbp-B8h]
  const std::vector<unsigned int> *__for_range; // [rsp+40h] [rbp-B0h]
  const data::DailyTaskExcelConfig *task_config_ptr; // [rsp+48h] [rbp-A8h]
  std::shared_ptr<Config> v27; // [rsp+50h] [rbp-A0h] BYREF
  common::milog::MiLogStream v28; // [rsp+60h] [rbp-90h] BYREF
  char v29[112]; // [rsp+80h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 11 task_id:381";
  *(_QWORD *)(v1 + 16) = PlayerDailyTaskComp::chooseTaskFromRefreshTimesConfig;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v27);
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v27);
  task_max_num = ConstValueExcelConfigMgr::getDailyTaskNum(&v4->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v27);
  if ( std::map<unsigned int,DailyTaskInfo>::size(&this->task_map_) < task_max_num )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v27);
    v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v27);
    refresh_times_pool_vec = ConstValueExcelConfigMgr::getDailyTaskRefreshTimesPool(&v5->design_config.txt_config_mgr.const_value_config_mgr);
    std::shared_ptr<Config>::~shared_ptr(&v27);
    if ( *(_BYTE *)(((unsigned __int64)&this->refresh_times_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->refresh_times_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->refresh_times_);
    }
    refresh_times = this->refresh_times_;
    if ( refresh_times < std::vector<std::vector<unsigned int>>::size(refresh_times_pool_vec) )
    {
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/player_daily_task_comp.cpp",
        "chooseTaskFromRefreshTimesConfig",
        379);
      v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v28, (const char (*)[6])"uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      *(_DWORD *)(v1 + 32) = Player::getUid(this->player_);
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v1 + 32));
      common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
        v8,
        (const char (*)[34])" chooseTaskFromRefreshTimesConfig");
      common::milog::MiLogStream::~MiLogStream(&v28);
      if ( *(_BYTE *)(((unsigned __int64)&this->refresh_times_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->refresh_times_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->refresh_times_);
      }
      pool_vec = std::vector<std::vector<unsigned int>>::operator[](refresh_times_pool_vec, this->refresh_times_);
      __for_range = pool_vec;
      __for_begin._M_current = std::vector<unsigned int>::begin(pool_vec)._M_current;
      __for_end._M_current = std::vector<unsigned int>::end(pool_vec)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
      {
        v9 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
        v10 = v9;
        if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v9);
        }
        *(_DWORD *)(v1 + 32) = *v10;
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v27);
        v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v27);
        task_config_ptr = data::DailyTaskExcelConfigMgrBase::findDailyTaskExcelConfig(
                            &v11->design_config.txt_config_mgr.daily_task_config_mgr,
                            *(_DWORD *)(v1 + 32));
        std::shared_ptr<Config>::~shared_ptr(&v27);
        if ( task_config_ptr )
        {
          if ( !common::tools::MiscUtils::isContains<std::map<unsigned int,DailyTaskInfo>,unsigned int>(
                  &this->task_map_,
                  (const unsigned int *)(v1 + 32)) )
          {
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v27);
            v14 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v27);
            isDailyTaskIdClosed = FeatureSwitchMgr::isDailyTaskIdClosed(&v14->feature_switch_mgr, *(_DWORD *)(v1 + 32));
            std::shared_ptr<Config>::~shared_ptr(&v27);
            if ( isDailyTaskIdClosed )
            {
              common::milog::MiLogStream::create(
                &v28,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/player/player_daily_task_comp.cpp",
                "chooseTaskFromRefreshTimesConfig",
                395);
              v16 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                      &v28,
                      (const char (*)[15])"daily_task_id:");
              v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v16,
                      (const unsigned int *)(v1 + 32));
              common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v17, (const char (*)[11])off_252616C0);
              common::milog::MiLogStream::~MiLogStream(&v28);
            }
            else if ( PlayerDailyTaskComp::isTaskGroupReplaced(this, task_config_ptr) )
            {
              common::milog::MiLogStream::create(
                &v28,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/player/player_daily_task_comp.cpp",
                "chooseTaskFromRefreshTimesConfig",
                400);
              v18 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                      &v28,
                      (const char (*)[15])"daily_task_id:");
              v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v18,
                      (const unsigned int *)(v1 + 32));
              common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                v19,
                (const char (*)[19])" group is replaced");
              common::milog::MiLogStream::~MiLogStream(&v28);
            }
            else
            {
              PlayerDailyTaskComp::addOneTask(this, task_config_ptr, 0);
              if ( std::map<unsigned int,DailyTaskInfo>::size(&this->task_map_) >= task_max_num )
                break;
            }
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v28,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/player_daily_task_comp.cpp",
            "chooseTaskFromRefreshTimesConfig",
            386);
          v12 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                  &v28,
                  (const char (*)[26])"findDailyTaskExcelConfig ");
          v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v12,
                  (const unsigned int *)(v1 + 32));
          common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v13, (const char (*)[7])" fails");
          common::milog::MiLogStream::~MiLogStream(&v28);
        }
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
      }
    }
  }
  if ( v29 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 412: range 000000001418BA5A-000000001418C063
void __cdecl PlayerDailyTaskComp::chooseTaskFromSurePool(PlayerDailyTaskComp *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // rax
  std::__detail::_Node_iterator<unsigned int,true,false>::reference v8; // rax
  _DWORD *v9; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  char v13; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  bool v15; // r15
  std::unordered_set<unsigned int> *v16; // rax
  uint32_t task_max_num; // [rsp+1Ch] [rbp-124h]
  std::unordered_set<unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-120h] BYREF
  std::unordered_set<unsigned int>::iterator __for_end; // [rsp+28h] [rbp-118h] BYREF
  std::unordered_set<unsigned int> *__for_range; // [rsp+30h] [rbp-110h]
  const data::DailyTaskExcelConfig *task_config_ptr; // [rsp+38h] [rbp-108h]
  std::shared_ptr<Config> v22; // [rsp+40h] [rbp-100h] BYREF
  common::milog::MiLogStream v23; // [rsp+50h] [rbp-F0h] BYREF
  char v24[208]; // [rsp+70h] [rbp-D0h] BYREF

  v1 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 11 task_id:421 64 56 22 next_sure_pool_set:420";
  *(_QWORD *)(v1 + 16) = PlayerDailyTaskComp::chooseTaskFromSurePool;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862723] = -218103808;
  v3[536862724] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v22);
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22);
  task_max_num = ConstValueExcelConfigMgr::getDailyTaskNum(&v4->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v22);
  if ( std::map<unsigned int,DailyTaskInfo>::size(&this->task_map_) < task_max_num
    && !std::unordered_set<unsigned int>::empty(&this->sure_pool_set_) )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/player_daily_task_comp.cpp",
      "chooseTaskFromSurePool",
      418);
    v6 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v23, (const char (*)[6])"uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_DWORD *)(v1 + 48) = Player::getUid(this->player_);
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v1 + 48));
    common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v7, (const char (*)[24])" chooseTaskFromSurePool");
    common::milog::MiLogStream::~MiLogStream(&v23);
    std::unordered_set<unsigned int>::unordered_set((std::unordered_set<unsigned int> *const)(v1 + 64));
    __for_range = &this->sure_pool_set_;
    __for_begin._M_cur = std::unordered_set<unsigned int>::begin(&this->sure_pool_set_)._M_cur;
    __for_end._M_cur = std::unordered_set<unsigned int>::end(&this->sure_pool_set_)._M_cur;
    while ( std::__detail::operator!=<unsigned int,false>(&__for_begin, &__for_end) )
    {
      v8 = std::__detail::_Node_iterator<unsigned int,true,false>::operator*(&__for_begin);
      v9 = v8;
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v8);
      }
      *(_DWORD *)(v1 + 48) = *v9;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v22);
      v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22);
      task_config_ptr = data::DailyTaskExcelConfigMgrBase::findDailyTaskExcelConfig(
                          &v10->design_config.txt_config_mgr.daily_task_config_mgr,
                          *(_DWORD *)(v1 + 48));
      std::shared_ptr<Config>::~shared_ptr(&v22);
      if ( task_config_ptr )
      {
        v13 = 0;
        v15 = 0;
        if ( std::map<unsigned int,DailyTaskInfo>::size(&this->task_map_) < task_max_num
          && !common::tools::MiscUtils::isContains<std::map<unsigned int,DailyTaskInfo>,unsigned int>(
                &this->task_map_,
                (const unsigned int *)(v1 + 48))
          && PlayerDailyTaskComp::isMeetExcludeTag(this, task_config_ptr)
          && PlayerDailyTaskComp::isMeetExcludeQuestNpc(this, task_config_ptr) )
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v22);
          v13 = 1;
          v14 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22);
          if ( !FeatureSwitchMgr::isDailyTaskIdClosed(&v14->feature_switch_mgr, *(_DWORD *)(v1 + 48))
            && !PlayerDailyTaskComp::isTaskGroupReplaced(this, task_config_ptr) )
          {
            v15 = 1;
          }
        }
        if ( v13 )
          std::shared_ptr<Config>::~shared_ptr(&v22);
        if ( v15 )
          PlayerDailyTaskComp::addOneTask(this, task_config_ptr, 0);
        else
          std::unordered_set<unsigned int>::insert(
            (std::unordered_set<unsigned int> *const)(v1 + 64),
            (const std::unordered_set<unsigned int>::value_type *)(v1 + 48));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v23,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/player_daily_task_comp.cpp",
          "chooseTaskFromSurePool",
          426);
        v11 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                &v23,
                (const char (*)[26])"findDailyTaskExcelConfig ");
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v11,
                (const unsigned int *)(v1 + 48));
        common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v12, (const char (*)[7])" fails");
        common::milog::MiLogStream::~MiLogStream(&v23);
      }
      std::__detail::_Node_iterator<unsigned int,true,false>::operator++(&__for_begin);
    }
    v16 = std::move<std::unordered_set<unsigned int> &>((std::unordered_set<unsigned int> *)(v1 + 64));
    std::unordered_set<unsigned int>::operator=(&this->sure_pool_set_, v16);
    std::unordered_set<unsigned int>::~unordered_set((std::unordered_set<unsigned int> *const)(v1 + 64));
  }
  if ( v24 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF800C) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 447: range 000000001418C138-000000001418CB21
void __cdecl PlayerDailyTaskComp::chooseTaskFromPossiblePool(PlayerDailyTaskComp *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // rax
  std::__detail::_Node_const_iterator<unsigned int,true,false>::reference v8; // rax
  _DWORD *v9; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  bool isDailyTaskIdClosed; // r14
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  std::vector<unsigned int> *v19; // rax
  unsigned int *M_current; // r14
  std::vector<unsigned int>::iterator v21; // rax
  std::vector<unsigned int>::size_type v22; // rax
  DailyTaskExcelConfigMgr *p_daily_task_config_mgr; // r14
  std::vector<unsigned int>::reference v24; // rax
  uint32_t *v25; // rdx
  uint32_t task_max_num; // [rsp+18h] [rbp-198h]
  uint32_t selected; // [rsp+1Ch] [rbp-194h]
  std::unordered_map<unsigned int,std::vector<unsigned int>>::iterator __for_begin_0; // [rsp+20h] [rbp-190h] BYREF
  std::unordered_map<unsigned int,std::vector<unsigned int>>::iterator __for_end_0; // [rsp+28h] [rbp-188h] BYREF
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > v30; // [rsp+30h] [rbp-180h] BYREF
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > __i; // [rsp+38h] [rbp-178h] BYREF
  std::unordered_set<unsigned int>::const_iterator __for_begin; // [rsp+40h] [rbp-170h] BYREF
  std::unordered_set<unsigned int>::const_iterator __for_end; // [rsp+48h] [rbp-168h] BYREF
  const std::unordered_set<unsigned int> *pool_set; // [rsp+50h] [rbp-160h]
  const std::unordered_set<unsigned int> *__for_range; // [rsp+58h] [rbp-158h]
  std::unordered_map<unsigned int,std::vector<unsigned int>> *__for_range_0; // [rsp+60h] [rbp-150h]
  std::pair<unsigned int const,std::vector<unsigned int> > *__in; // [rsp+68h] [rbp-148h]
  std::tuple_element<0,std::pair<unsigned int const,std::vector<unsigned int> > >::type *_; // [rsp+70h] [rbp-140h]
  std::tuple_element<1,std::pair<unsigned int const,std::vector<unsigned int> > >::type *task_vec; // [rsp+78h] [rbp-138h]
  const data::DailyTaskExcelConfig *task_config_ptr_0; // [rsp+80h] [rbp-130h]
  const data::DailyTaskExcelConfig *task_config_ptr; // [rsp+88h] [rbp-128h]
  std::shared_ptr<Config> v42; // [rsp+90h] [rbp-120h] BYREF
  common::milog::MiLogStream v43; // [rsp+A0h] [rbp-110h] BYREF
  char v44[240]; // [rsp+C0h] [rbp-F0h] BYREF

  v1 = (unsigned __int64)v44;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(192LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 4 11 task_id:460 64 8 11 rm_func:490 96 56 18 group_task_map:459";
  *(_QWORD *)(v1 + 16) = PlayerDailyTaskComp::chooseTaskFromPossiblePool;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -218959360;
  v3[536862724] = -218103808;
  v3[536862725] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v42);
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v42);
  task_max_num = ConstValueExcelConfigMgr::getDailyTaskNum(&v4->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v42);
  if ( std::map<unsigned int,DailyTaskInfo>::size(&this->task_map_) < task_max_num
    && !std::deque<std::unordered_set<unsigned int>>::empty(&this->possible_pools_que_) )
  {
    common::milog::MiLogStream::create(
      &v43,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/player_daily_task_comp.cpp",
      "chooseTaskFromPossiblePool",
      453);
    v6 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v43, (const char (*)[6])"uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_DWORD *)(v1 + 48) = Player::getUid(this->player_);
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v1 + 48));
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      v7,
      (const char (*)[28])" chooseTaskFromPossiblePool");
    common::milog::MiLogStream::~MiLogStream(&v43);
    pool_set = std::deque<std::unordered_set<unsigned int>>::front(&this->possible_pools_que_);
    if ( !std::unordered_set<unsigned int>::empty(pool_set) )
    {
      std::unordered_map<unsigned int,std::vector<unsigned int>>::unordered_map((std::unordered_map<unsigned int,std::vector<unsigned int>> *const)(v1 + 96));
      __for_range = pool_set;
      __for_begin._M_cur = std::unordered_set<unsigned int>::begin(pool_set)._M_cur;
      __for_end._M_cur = std::unordered_set<unsigned int>::end(pool_set)._M_cur;
      while ( std::__detail::operator!=<unsigned int,false>(&__for_begin, &__for_end) )
      {
        v8 = std::__detail::_Node_const_iterator<unsigned int,true,false>::operator*(&__for_begin);
        v9 = v8;
        if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v8);
        }
        *(_DWORD *)(v1 + 48) = *v9;
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v42);
        v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v42);
        task_config_ptr = data::DailyTaskExcelConfigMgrBase::findDailyTaskExcelConfig(
                            &v10->design_config.txt_config_mgr.daily_task_config_mgr,
                            *(_DWORD *)(v1 + 48));
        std::shared_ptr<Config>::~shared_ptr(&v42);
        if ( task_config_ptr )
        {
          if ( !common::tools::MiscUtils::isContains<std::map<unsigned int,DailyTaskInfo>,unsigned int>(
                  &this->task_map_,
                  (const unsigned int *)(v1 + 48))
            && PlayerDailyTaskComp::isMeetExcludeQuestNpc(this, task_config_ptr) )
          {
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v42);
            v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v42);
            isDailyTaskIdClosed = FeatureSwitchMgr::isDailyTaskIdClosed(&v13->feature_switch_mgr, *(_DWORD *)(v1 + 48));
            std::shared_ptr<Config>::~shared_ptr(&v42);
            if ( isDailyTaskIdClosed )
            {
              common::milog::MiLogStream::create(
                &v43,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/player/player_daily_task_comp.cpp",
                "chooseTaskFromPossiblePool",
                478);
              v15 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v43, (const char (*)[9])"task_id:");
              v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v15,
                      (const unsigned int *)(v1 + 48));
              common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v16, (const char (*)[8])" closed");
              common::milog::MiLogStream::~MiLogStream(&v43);
            }
            else if ( PlayerDailyTaskComp::isTaskGroupReplaced(this, task_config_ptr) )
            {
              common::milog::MiLogStream::create(
                &v43,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/player/player_daily_task_comp.cpp",
                "chooseTaskFromPossiblePool",
                483);
              v17 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                      &v43,
                      (const char (*)[15])"daily_task_id:");
              v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v17,
                      (const unsigned int *)(v1 + 48));
              common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                v18,
                (const char (*)[19])" group is replaced");
              common::milog::MiLogStream::~MiLogStream(&v43);
            }
            else
            {
              v19 = std::unordered_map<unsigned int,std::vector<unsigned int>>::operator[](
                      (std::unordered_map<unsigned int,std::vector<unsigned int>> *const)(v1 + 96),
                      &task_config_ptr->pool_id);
              std::vector<unsigned int>::push_back(v19, (const std::vector<unsigned int>::value_type *)(v1 + 48));
            }
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v43,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/player_daily_task_comp.cpp",
            "chooseTaskFromPossiblePool",
            465);
          v11 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                  &v43,
                  (const char (*)[26])"findDailyTaskExcelConfig ");
          v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v11,
                  (const unsigned int *)(v1 + 48));
          common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v12, (const char (*)[7])" fails");
          common::milog::MiLogStream::~MiLogStream(&v43);
        }
        std::__detail::_Node_const_iterator<unsigned int,true,false>::operator++(&__for_begin);
      }
      *(_QWORD *)(v1 + 64) = this;
      __for_range_0 = (std::unordered_map<unsigned int,std::vector<unsigned int>> *)(v1 + 96);
      __for_begin_0._M_cur = std::unordered_map<unsigned int,std::vector<unsigned int>>::begin((std::unordered_map<unsigned int,std::vector<unsigned int>> *const)(v1 + 96))._M_cur;
      __for_end_0._M_cur = std::unordered_map<unsigned int,std::vector<unsigned int>>::end(__for_range_0)._M_cur;
      while ( std::__detail::operator!=<std::pair<unsigned int const,std::vector<unsigned int>>,false>(
                &__for_begin_0,
                &__for_end_0) )
      {
        __in = std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator*(&__for_begin_0);
        _ = std::get<0ul,unsigned int const,std::vector<unsigned int>>(__in);
        task_vec = std::get<1ul,unsigned int const,std::vector<unsigned int>>(__in);
        __i._M_current = std::vector<unsigned int>::end(task_vec)._M_current;
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::__normal_iterator<unsigned int *>(
          (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__for_end,
          &__i);
        M_current = std::vector<unsigned int>::end(task_vec)._M_current;
        v21._M_current = std::vector<unsigned int>::begin(task_vec)._M_current;
        v30._M_current = std::remove_if<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,PlayerDailyTaskComp::chooseTaskFromPossiblePool(void)::{lambda(unsigned int)#1}>(
                           v21,
                           (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current,
                           *(PlayerDailyTaskComp::chooseTaskFromPossiblePool::<lambda(uint32_t)> *)(v1 + 64))._M_current;
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::__normal_iterator<unsigned int *>(
          (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__for_begin,
          &v30);
        std::vector<unsigned int>::erase(
          task_vec,
          (std::vector<unsigned int>::const_iterator)__for_begin._M_cur,
          (std::vector<unsigned int>::const_iterator)__for_end._M_cur);
        if ( !std::vector<unsigned int>::empty(task_vec) )
        {
          v22 = std::vector<unsigned int>::size(task_vec);
          selected = common::tools::RandomUtils::rand<unsigned long>(0LL, v22 - 1);
          if ( selected < std::vector<unsigned int>::size(task_vec) )
          {
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v42);
            p_daily_task_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v42)->design_config.txt_config_mgr.daily_task_config_mgr;
            v24 = std::vector<unsigned int>::operator[](task_vec, selected);
            v25 = v24;
            if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v24 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v24);
            }
            task_config_ptr_0 = data::DailyTaskExcelConfigMgrBase::findDailyTaskExcelConfig(
                                  p_daily_task_config_mgr,
                                  *v25);
            std::shared_ptr<Config>::~shared_ptr(&v42);
            if ( task_config_ptr_0 )
            {
              PlayerDailyTaskComp::addOneTask(this, task_config_ptr_0, 0);
              if ( std::map<unsigned int,DailyTaskInfo>::size(&this->task_map_) >= task_max_num )
                break;
            }
          }
        }
        std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator++(&__for_begin_0);
      }
      std::unordered_map<unsigned int,std::vector<unsigned int>>::~unordered_map((std::unordered_map<unsigned int,std::vector<unsigned int>> *const)(v1 + 96));
    }
    std::deque<std::unordered_set<unsigned int>>::pop_front(&this->possible_pools_que_);
  }
  if ( v44 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 490: range 000000001418C064-000000001418C136
bool __cdecl PlayerDailyTaskComp::chooseTaskFromPossiblePool(void)::{lambda(unsigned int)#1}::operator()(
        const PlayerDailyTaskComp::chooseTaskFromPossiblePool::<lambda(uint32_t)> *const __closure,
        uint32_t task_id)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  const data::DailyTaskExcelConfig *task_config_ptr; // [rsp+18h] [rbp-28h]
  std::shared_ptr<Config> v5[2]; // [rsp+20h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v5);
  v2 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v5);
  task_config_ptr = data::DailyTaskExcelConfigMgrBase::findDailyTaskExcelConfig(
                      &v2->design_config.txt_config_mgr.daily_task_config_mgr,
                      task_id);
  std::shared_ptr<Config>::~shared_ptr(v5);
  if ( !task_config_ptr )
    return 1;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return !PlayerDailyTaskComp::isMeetExcludeTag(__closure->__this, task_config_ptr);
};

// Line 526: range 000000001418CB22-000000001418E586
void __cdecl PlayerDailyTaskComp::chooseTaskFromCommonPool(PlayerDailyTaskComp *const this)
{
  float v1; // xmm1_4
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rcx
  common::milog::MiLogStream *v10; // r14
  int v11; // eax
  std::vector<unsigned int>::size_type v12; // r14
  common::milog::MiLogStream *v13; // rax
  std::vector<unsigned int>::size_type v14; // rsi
  std::vector<unsigned int>::reference v15; // rax
  uint32_t *v16; // rdx
  uint32_t v17; // ecx
  char v18; // dl
  __int64 v19; // rdx
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // r14
  const DailyTaskExcelConfigMgr *p_daily_task_config_mgr; // rdi
  bool v24; // r14
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // r14
  PlayerBasicComp *BasicComp; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v29; // rax
  _DWORD *v30; // rdx
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  char v37; // al
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v41; // rax
  _DWORD *v42; // rdx
  common::milog::MiLogStream *v43; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v44; // rax
  bool v45; // r14
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // r14
  common::milog::MiLogStream *v50; // r14
  std::vector<unsigned int>::size_type v51; // r14
  common::milog::MiLogStream *v52; // rax
  std::vector<unsigned int>::reference v53; // rax
  _DWORD *v54; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v55; // rax
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // rax
  uint32_t pre_choose_task_related_tag; // [rsp+10h] [rbp-3F0h]
  uint32_t task_max_num; // [rsp+14h] [rbp-3ECh]
  uint32_t num; // [rsp+18h] [rbp-3E8h]
  std::vector<unsigned int>::iterator __for_begin_0; // [rsp+20h] [rbp-3E0h] BYREF
  std::vector<unsigned int>::iterator __for_end_0; // [rsp+28h] [rbp-3D8h] BYREF
  std::vector<data::CityTaskOpenExcelConfig>::const_iterator __for_begin; // [rsp+30h] [rbp-3D0h] BYREF
  std::vector<data::CityTaskOpenExcelConfig>::const_iterator __for_end; // [rsp+38h] [rbp-3C8h] BYREF
  PlayerQuestComp *quest_comp; // [rsp+40h] [rbp-3C0h]
  const std::vector<data::CityTaskOpenExcelConfig> *__for_range; // [rsp+48h] [rbp-3B8h]
  std::vector<unsigned int> *__for_range_0; // [rsp+50h] [rbp-3B0h]
  const std::vector<data::DailyTaskExcelConfig> *task_config_vec_ptr; // [rsp+58h] [rbp-3A8h]
  const std::vector<data::DailyTaskExcelConfig> *__for_range_1; // [rsp+60h] [rbp-3A0h]
  const data::DailyTaskExcelConfig *task_config_ptr; // [rsp+68h] [rbp-398h]
  const data::DailyTaskExcelConfig *task_config; // [rsp+70h] [rbp-390h]
  const data::CityTaskOpenExcelConfig *city_config; // [rsp+78h] [rbp-388h]
  std::shared_ptr<Config> v74; // [rsp+80h] [rbp-380h] BYREF
  std::shared_ptr<Config> v75; // [rsp+90h] [rbp-370h] BYREF
  std::shared_ptr<Config> v76; // [rsp+A0h] [rbp-360h] BYREF
  common::milog::MiLogStream v77; // [rsp+B0h] [rbp-350h] BYREF
  common::milog::MiLogStream v78; // [rsp+D0h] [rbp-330h] BYREF
  common::milog::MiLogStream v79; // [rsp+F0h] [rbp-310h] BYREF
  common::milog::MiLogStream v80; // [rsp+110h] [rbp-2F0h] BYREF
  common::milog::MiLogStream v81; // [rsp+130h] [rbp-2D0h] BYREF
  common::milog::MiLogStream v82; // [rsp+150h] [rbp-2B0h] BYREF
  common::milog::MiLogStream v83; // [rsp+170h] [rbp-290h] BYREF
  common::milog::MiLogStream v84; // [rsp+190h] [rbp-270h] BYREF
  common::milog::MiLogStream v85; // [rsp+1B0h] [rbp-250h] BYREF
  char v86[560]; // [rsp+1D0h] [rbp-230h] BYREF

  v2 = (unsigned __int64)v86;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(512LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "11 48 4 12 selected:554 64 4 11 pool_id:579 80 4 15 task_weight:604 96 4 12 selected:637 112 4 1"
                        "7 daily_task_id:648 128 24 22 candidate_city_vec:535 192 24 12 pool_vec:564 256 24 22 candidate_"
                        "task_vec:572 320 24 14 weight_vec:573 384 24 26 candidate_tag_task_vec:575 448 24 18 tag_weight_vec:576";
  *(_QWORD *)(v2 + 16) = PlayerDailyTaskComp::chooseTaskFromCommonPool;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234556924;
  v4[536862723] = -234556924;
  v4[536862724] = -234881024;
  v4[536862725] = -218959118;
  v4[536862726] = -234881024;
  v4[536862727] = -218959118;
  v4[536862728] = -234881024;
  v4[536862729] = -218959118;
  v4[536862730] = -234881024;
  v4[536862731] = -218959118;
  v4[536862732] = -234881024;
  v4[536862733] = -218959118;
  v4[536862734] = -218103808;
  v4[536862735] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v76);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v76);
  task_max_num = ConstValueExcelConfigMgr::getDailyTaskNum(&v5->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v76);
  if ( std::map<unsigned int,DailyTaskInfo>::size(&this->task_map_) < task_max_num )
  {
    num = task_max_num - std::map<unsigned int,DailyTaskInfo>::size(&this->task_map_);
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 128));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    quest_comp = Player::getQuestComp(this->player_);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v76);
    __for_range = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v76)->design_config.txt_config_mgr.daily_task_config_mgr.city_task_open_excel_config_vec;
    std::shared_ptr<Config>::~shared_ptr(&v76);
    __for_begin._M_current = std::vector<data::CityTaskOpenExcelConfig>::begin(__for_range)._M_current;
    __for_end._M_current = std::vector<data::CityTaskOpenExcelConfig>::end(__for_range)._M_current;
    while ( __gnu_cxx::operator!=<data::CityTaskOpenExcelConfig const*,std::vector<data::CityTaskOpenExcelConfig>>(
              &__for_begin,
              &__for_end) )
    {
      city_config = __gnu_cxx::__normal_iterator<data::CityTaskOpenExcelConfig const*,std::vector<data::CityTaskOpenExcelConfig>>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)&this->filter_city_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->filter_city_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->filter_city_id_);
      }
      if ( !this->filter_city_id_ )
        goto LABEL_18;
      if ( *(_BYTE *)(((unsigned __int64)&city_config->city_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&city_config->city_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&city_config->city_id);
      }
      if ( city_config->city_id == this->filter_city_id_ )
      {
LABEL_18:
        if ( *(_BYTE *)(((unsigned __int64)&city_config->quest_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)city_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&city_config->quest_id >> 3)
                                                                     + 0x7FFF8000) )
        {
          __asan_report_load4(&city_config->quest_id);
        }
        if ( PlayerQuestComp::getQuestState(quest_comp, city_config->quest_id) == QUEST_STATE_FINISHED )
          std::vector<unsigned int>::push_back((std::vector<unsigned int> *const)(v2 + 128), &city_config->city_id);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v85,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/player_daily_task_comp.cpp",
          "chooseTaskFromCommonPool",
          541);
        v6 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v85, (const char (*)[10])" city_id:");
        v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &city_config->city_id);
        v8 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
               v7,
               (const char (*)[24])" not match filter city:");
        v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->filter_city_id_);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        operator<<(v9, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v85);
      }
      __gnu_cxx::__normal_iterator<data::CityTaskOpenExcelConfig const*,std::vector<data::CityTaskOpenExcelConfig>>::operator++(&__for_begin);
    }
    if ( std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v2 + 128)) )
    {
      common::milog::MiLogStream::create(
        &v85,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/player_daily_task_comp.cpp",
        "chooseTaskFromCommonPool",
        551);
      v10 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
              &v85,
              (const char (*)[35])"candidate_city_vec is empty, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      *(_DWORD *)(v2 + 112) = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 112));
      common::milog::MiLogStream::~MiLogStream(&v85);
    }
    else
    {
      v11 = std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v2 + 128));
      *(_DWORD *)(v2 + 48) = common::tools::RandomUtils::rand<int>(0, v11 - 1);
      v12 = *(unsigned int *)(v2 + 48);
      if ( v12 < std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v2 + 128)) )
      {
        v14 = *(unsigned int *)(v2 + 48);
        v15 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v2 + 128), v14);
        v16 = v15;
        if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v15);
        }
        v17 = *v16;
        v18 = *(_BYTE *)(((unsigned __int64)&this->random_city_id_ >> 3) + 0x7FFF8000);
        LOBYTE(v14) = v18 != 0;
        v19 = (v18 != 0) & (unsigned __int8)((char)((((_BYTE)this + 52) & 7) + 3) >= v18);
        if ( (_BYTE)v19 )
          __asan_report_store4(&this->random_city_id_, v14, v19);
        this->random_city_id_ = v17;
        common::milog::MiLogStream::create(
          &v85,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/player_daily_task_comp.cpp",
          "chooseTaskFromCommonPool",
          561);
        v20 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v85,
                (const char (*)[25])"select random_city_id_: ");
        v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &this->random_city_id_);
        v22 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v21, (const char (*)[7])" uid: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        *(_DWORD *)(v2 + 112) = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v2 + 112));
        common::milog::MiLogStream::~MiLogStream(&v85);
        std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 192));
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v76);
        p_daily_task_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v76)->design_config.txt_config_mgr.daily_task_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)&this->random_city_id_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->random_city_id_ >> 3)
                                                              + 0x7FFF8000) )
        {
          p_daily_task_config_mgr = (const DailyTaskExcelConfigMgr *)&this->random_city_id_;
          __asan_report_load4(&this->random_city_id_);
        }
        v24 = DailyTaskExcelConfigMgr::randPoolFromCity(
                p_daily_task_config_mgr,
                this->random_city_id_,
                num,
                (std::vector<unsigned int> *)(v2 + 192)) != 0;
        std::shared_ptr<Config>::~shared_ptr(&v76);
        if ( v24 )
        {
          common::milog::MiLogStream::create(
            &v85,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/player_daily_task_comp.cpp",
            "chooseTaskFromCommonPool",
            567);
          v25 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                  &v85,
                  (const char (*)[42])"randPoolFromCity fails, random_city_id_: ");
          v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &this->random_city_id_);
          v27 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v26, (const char (*)[7])" uid: ");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          *(_DWORD *)(v2 + 112) = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, (const unsigned int *)(v2 + 112));
          common::milog::MiLogStream::~MiLogStream(&v85);
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          BasicComp = Player::getBasicComp(this->player_);
          PlayerBasicComp::getLevel(BasicComp);
          std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 256));
          std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 320));
          std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 384));
          std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 448));
          pre_choose_task_related_tag = 0;
          __for_range_0 = (std::vector<unsigned int> *)(v2 + 192);
          __for_begin_0._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 192))._M_current;
          __for_end_0._M_current = std::vector<unsigned int>::end(__for_range_0)._M_current;
          while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin_0, &__for_end_0) )
          {
            v29 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin_0);
            v30 = v29;
            if ( *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v29 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v29);
            }
            *(_DWORD *)(v2 + 64) = *v30;
            common::milog::MiLogStream::create(
              &v77,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/player_daily_task_comp.cpp",
              "chooseTaskFromCommonPool",
              581);
            v31 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                    &v77,
                    (const char (*)[33])"select daily task from pool_id: ");
            v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v31,
                    (const unsigned int *)(v2 + 64));
            v33 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v32, (const char (*)[7])" uid: ");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            *(_DWORD *)(v2 + 112) = Player::getUid(this->player_);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v33,
              (const unsigned int *)(v2 + 112));
            common::milog::MiLogStream::~MiLogStream(&v77);
            std::vector<unsigned int>::clear((std::vector<unsigned int> *const)(v2 + 256));
            std::vector<unsigned int>::clear((std::vector<unsigned int> *const)(v2 + 320));
            std::vector<unsigned int>::clear((std::vector<unsigned int> *const)(v2 + 384));
            std::vector<unsigned int>::clear((std::vector<unsigned int> *const)(v2 + 448));
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v74);
            v34 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v74);
            task_config_vec_ptr = DailyTaskExcelConfigMgr::findPoolTaskVec(
                                    &v34->design_config.txt_config_mgr.daily_task_config_mgr,
                                    *(_DWORD *)(v2 + 64));
            std::shared_ptr<Config>::~shared_ptr(&v74);
            if ( task_config_vec_ptr )
            {
              __for_range_1 = task_config_vec_ptr;
              __for_begin._M_current = (const data::CityTaskOpenExcelConfig *)std::vector<data::DailyTaskExcelConfig>::begin(task_config_vec_ptr)._M_current;
              __for_end._M_current = (const data::CityTaskOpenExcelConfig *)std::vector<data::DailyTaskExcelConfig>::end(__for_range_1)._M_current;
              while ( __gnu_cxx::operator!=<data::DailyTaskExcelConfig const*,std::vector<data::DailyTaskExcelConfig>>(
                        (const __gnu_cxx::__normal_iterator<const data::DailyTaskExcelConfig*,std::vector<data::DailyTaskExcelConfig> > *)&__for_begin,
                        (const __gnu_cxx::__normal_iterator<const data::DailyTaskExcelConfig*,std::vector<data::DailyTaskExcelConfig> > *)&__for_end) )
              {
                task_config = __gnu_cxx::__normal_iterator<data::DailyTaskExcelConfig const*,std::vector<data::DailyTaskExcelConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::DailyTaskExcelConfig*,std::vector<data::DailyTaskExcelConfig> > *const)&__for_begin);
                if ( !PlayerDailyTaskComp::isDailyTaskSatisfied(this, task_config)
                  || common::tools::MiscUtils::isContains<std::map<unsigned int,DailyTaskInfo>,unsigned int>(
                       &this->task_map_,
                       &task_config->id)
                  || PlayerDailyTaskComp::isTaskGroupReplaced(this, task_config) )
                {
                  goto LABEL_60;
                }
                if ( *(_BYTE *)(((unsigned __int64)&task_config->weight >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&task_config->weight >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&task_config->weight);
                }
                if ( task_config->weight )
                  v37 = 1;
                else
LABEL_60:
                  v37 = 0;
                if ( v37 )
                {
                  if ( !PlayerDailyTaskComp::isDailyTaskAvailableInQuestCycle(this, task_config) )
                  {
                    common::milog::MiLogStream::create(
                      &v79,
                      &common::milog::MiLogDefault::default_log_obj_,
                      1u,
                      "./src/player/player_daily_task_comp.cpp",
                      "chooseTaskFromCommonPool",
                      600);
                    v38 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                            &v79,
                            (const char (*)[15])"daily_task_id:");
                    v39 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v38, &task_config->id);
                    common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                      v39,
                      (const char (*)[31])" not available in quest cycle.");
                    common::milog::MiLogStream::~MiLogStream(&v79);
                  }
                  else
                  {
                    std::vector<unsigned int>::push_back((std::vector<unsigned int> *const)(v2 + 256), &task_config->id);
                    if ( *(_BYTE *)(((unsigned __int64)&task_config->weight >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((unsigned __int64)&task_config->weight >> 3) + 0x7FFF8000) <= 3 )
                    {
                      __asan_report_load4(&task_config->weight);
                    }
                    *(_DWORD *)(v2 + 80) = task_config->weight;
                    if ( *(char *)(((unsigned __int64)&this->is_gm_ >> 3) + 0x7FFF8000) < 0 )
                      __asan_report_load1(&this->is_gm_);
                    if ( this->is_gm_
                      && common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,unsigned int>,unsigned int>(
                           &this->gm_task_weight_map_,
                           &task_config->id) )
                    {
                      v41 = std::unordered_map<unsigned int,unsigned int>::operator[](
                              &this->gm_task_weight_map_,
                              &task_config->id);
                      v42 = v41;
                      if ( *(_BYTE *)(((unsigned __int64)v41 >> 3) + 0x7FFF8000) != 0
                        && (char)(((unsigned __int8)v41 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v41 >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_load4(v41);
                      }
                      *(_DWORD *)(v2 + 80) = *v42;
                    }
                    std::vector<unsigned int>::push_back(
                      (std::vector<unsigned int> *const)(v2 + 320),
                      (const std::vector<unsigned int>::value_type *)(v2 + 80));
                    if ( *(_BYTE *)(((unsigned __int64)&task_config->related_tag >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((unsigned __int64)&task_config->related_tag >> 3) + 0x7FFF8000) <= 3 )
                    {
                      __asan_report_load4(&task_config->related_tag);
                    }
                    if ( task_config->related_tag && pre_choose_task_related_tag == task_config->related_tag )
                    {
                      common::milog::MiLogStream::create(
                        &v80,
                        &common::milog::MiLogDefault::default_log_obj_,
                        1u,
                        "./src/player/player_daily_task_comp.cpp",
                        "chooseTaskFromCommonPool",
                        613);
                      v43 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                              &v80,
                              (const char (*)[38])"daily task chooses with related tag: ");
                      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v43,
                        &task_config->related_tag);
                      common::milog::MiLogStream::~MiLogStream(&v80);
                      std::vector<unsigned int>::push_back(
                        (std::vector<unsigned int> *const)(v2 + 384),
                        &task_config->id);
                      std::vector<unsigned int>::push_back(
                        (std::vector<unsigned int> *const)(v2 + 448),
                        (const std::vector<unsigned int>::value_type *)(v2 + 80));
                    }
                  }
                }
                __gnu_cxx::__normal_iterator<data::DailyTaskExcelConfig const*,std::vector<data::DailyTaskExcelConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::DailyTaskExcelConfig*,std::vector<data::DailyTaskExcelConfig> > *const)&__for_begin);
              }
              if ( !std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v2 + 384)) )
              {
                ServiceBox::findService<GameserverService>();
                GameserverService::getConfig((GameserverService *const)&v75);
                v44 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v75);
                ConstValueExcelConfigMgr::getDailyTaskRelatedTagEffectProb(&v44->design_config.txt_config_mgr.const_value_config_mgr);
                v45 = common::tools::RandomUtils::randomTestProbability(v1);
                std::shared_ptr<Config>::~shared_ptr(&v75);
                if ( v45 )
                {
                  common::milog::MiLogStream::create(
                    &v81,
                    &common::milog::MiLogDefault::default_log_obj_,
                    1u,
                    "./src/player/player_daily_task_comp.cpp",
                    "chooseTaskFromCommonPool",
                    625);
                  v46 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                          &v81,
                          (const char (*)[32])"daily task related tag effect: ");
                  common::milog::MiLogStream::operator<<<unsigned int>(
                    v46,
                    (const std::vector<unsigned int> *)(v2 + 384));
                  common::milog::MiLogStream::~MiLogStream(&v81);
                  std::vector<unsigned int>::operator=(
                    (std::vector<unsigned int> *const)(v2 + 256),
                    (const std::vector<unsigned int> *)(v2 + 384));
                  std::vector<unsigned int>::operator=(
                    (std::vector<unsigned int> *const)(v2 + 320),
                    (const std::vector<unsigned int> *)(v2 + 448));
                }
              }
              if ( std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v2 + 320)) )
              {
                common::milog::MiLogStream::create(
                  &v82,
                  &common::milog::MiLogDefault::default_log_obj_,
                  2u,
                  "./src/player/player_daily_task_comp.cpp",
                  "chooseTaskFromCommonPool",
                  632);
                v47 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                        &v82,
                        (const char (*)[10])"pool_id: ");
                v48 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v47,
                        (const unsigned int *)(v2 + 64));
                v49 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                        v48,
                        (const char (*)[41])" satisfied empty, use backup pool, uid: ");
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                *(_DWORD *)(v2 + 112) = Player::getUid(this->player_);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v49,
                  (const unsigned int *)(v2 + 112));
                common::milog::MiLogStream::~MiLogStream(&v82);
                if ( *(_BYTE *)(((unsigned __int64)&this->random_city_id_ >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->random_city_id_ >> 3)
                                                                      + 0x7FFF8000) )
                {
                  __asan_report_load4(&this->random_city_id_);
                }
                PlayerDailyTaskComp::chooseTaskFromBackupPool(this, 0, this->random_city_id_);
                PlayerDailyTaskComp::resetQuestCycleCountByPoolId(this, *(_DWORD *)(v2 + 64));
              }
              else
              {
                *(_DWORD *)(v2 + 96) = 0;
                if ( common::tools::RandomUtils::weightSelectOne<unsigned int>(
                       (const std::vector<unsigned int> *)(v2 + 320),
                       (uint32_t *)(v2 + 96),
                       0) )
                {
                  common::milog::MiLogStream::create(
                    &v83,
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/player/player_daily_task_comp.cpp",
                    "chooseTaskFromCommonPool",
                    640);
                  v50 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                          &v83,
                          (const char (*)[29])"weightSelectOne fails, uid: ");
                  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8();
                  *(_DWORD *)(v2 + 112) = Player::getUid(this->player_);
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v50,
                    (const unsigned int *)(v2 + 112));
                  common::milog::MiLogStream::~MiLogStream(&v83);
                }
                else
                {
                  v51 = *(unsigned int *)(v2 + 96);
                  if ( v51 >= std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v2 + 256)) )
                  {
                    common::milog::MiLogStream::create(
                      &v84,
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/player/player_daily_task_comp.cpp",
                      "chooseTaskFromCommonPool",
                      645);
                    v52 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                            &v84,
                            (const char (*)[23])"rand fails, selected: ");
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v52,
                      (const unsigned int *)(v2 + 96));
                    common::milog::MiLogStream::~MiLogStream(&v84);
                    break;
                  }
                  v53 = std::vector<unsigned int>::operator[](
                          (std::vector<unsigned int> *const)(v2 + 256),
                          *(unsigned int *)(v2 + 96));
                  v54 = v53;
                  if ( *(_BYTE *)(((unsigned __int64)v53 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)v53 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v53 >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load4(v53);
                  }
                  *(_DWORD *)(v2 + 112) = *v54;
                  ServiceBox::findService<GameserverService>();
                  GameserverService::getConfig((GameserverService *const)&v76);
                  v55 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v76);
                  task_config_ptr = data::DailyTaskExcelConfigMgrBase::findDailyTaskExcelConfig(
                                      &v55->design_config.txt_config_mgr.daily_task_config_mgr,
                                      *(_DWORD *)(v2 + 112));
                  std::shared_ptr<Config>::~shared_ptr(&v76);
                  if ( task_config_ptr )
                  {
                    if ( !pre_choose_task_related_tag )
                    {
                      if ( *(_BYTE *)(((unsigned __int64)&task_config_ptr->related_tag >> 3) + 0x7FFF8000) != 0
                        && *(_BYTE *)(((unsigned __int64)&task_config_ptr->related_tag >> 3) + 0x7FFF8000) <= 3 )
                      {
                        __asan_report_load4(&task_config_ptr->related_tag);
                      }
                      if ( task_config_ptr->related_tag )
                        pre_choose_task_related_tag = task_config_ptr->related_tag;
                    }
                    PlayerDailyTaskComp::addOneTask(this, task_config_ptr, 0);
                  }
                  else
                  {
                    common::milog::MiLogStream::create(
                      &v85,
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/player/player_daily_task_comp.cpp",
                      "chooseTaskFromCommonPool",
                      652);
                    v56 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                            &v85,
                            (const char (*)[26])"findDailyTaskExcelConfig ");
                    v57 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                            v56,
                            (const unsigned int *)(v2 + 112));
                    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v57, (const char (*)[7])" fails");
                    common::milog::MiLogStream::~MiLogStream(&v85);
                  }
                }
              }
            }
            else
            {
              common::milog::MiLogStream::create(
                &v78,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/player_daily_task_comp.cpp",
                "chooseTaskFromCommonPool",
                589);
              v35 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                      &v78,
                      (const char (*)[26])"findPoolTaskVec pool_id: ");
              v36 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v35,
                      (const unsigned int *)(v2 + 64));
              common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v36, (const char (*)[7])" fails");
              common::milog::MiLogStream::~MiLogStream(&v78);
            }
            __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin_0);
          }
          std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 448));
          std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 384));
          std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 320));
          std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 256));
        }
        std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 192));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v85,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/player_daily_task_comp.cpp",
          "chooseTaskFromCommonPool",
          557);
        v13 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                &v85,
                (const char (*)[23])"rand fails, selected: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v85);
      }
    }
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 128));
  }
  if ( v86 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
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
  }
};

// Line 665: range 000000001418E588-000000001418EC27
__int64 __fastcall PlayerDailyTaskComp::chooseTaskFromBackupPool(
        PlayerDailyTaskComp *const this,
        bool is_by_group_replaced,
        uint32_t expect_city_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  __int64 result; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v14; // rax
  _DWORD *v15; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  bool isDailyTaskIdClosed; // r14
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+10h] [rbp-F0h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+18h] [rbp-E8h] BYREF
  const data::CityTaskOpenExcelConfig *city_task_open_excel_config; // [rsp+20h] [rbp-E0h]
  const std::vector<unsigned int> *backup_pool_vec; // [rsp+28h] [rbp-D8h]
  const std::vector<unsigned int> *__for_range; // [rsp+30h] [rbp-D0h]
  const data::DailyTaskExcelConfig *task_config_ptr; // [rsp+38h] [rbp-C8h]
  std::shared_ptr<Config> v28; // [rsp+40h] [rbp-C0h] BYREF
  common::milog::MiLogStream v29; // [rsp+50h] [rbp-B0h] BYREF
  char v30[144]; // [rsp+70h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 11 task_id:684 64 4 18 expect_city_id:664";
  *(_QWORD *)(v3 + 16) = PlayerDailyTaskComp::chooseTaskFromBackupPool;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 64) = expect_city_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->random_city_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->random_city_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->random_city_id_);
  }
  if ( this->random_city_id_ )
    *(_DWORD *)(v3 + 64) = this->random_city_id_;
  if ( !*(_DWORD *)(v3 + 64) )
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_daily_task_comp.cpp",
      "chooseTaskFromBackupPool",
      674);
    v6 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
           &v29,
           (const char (*)[40])"expect_city_id == 0, filter_city_id_ = ");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->filter_city_id_);
    v8 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v7, (const char (*)[18])", task_map_ size:");
    __for_end._M_current = (const unsigned int *)std::map<unsigned int,DailyTaskInfo>::size(&this->task_map_);
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v8, (const unsigned __int64 *)&__for_end);
    common::milog::MiLogStream::~MiLogStream(&v29);
    *(_DWORD *)(v3 + 64) = 1;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v28);
  v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v28);
  city_task_open_excel_config = DailyTaskExcelConfigMgr::findTaskOpenConfigByCityId(
                                  &v9->design_config.txt_config_mgr.daily_task_config_mgr,
                                  *(_DWORD *)(v3 + 64));
  std::shared_ptr<Config>::~shared_ptr(&v28);
  if ( !city_task_open_excel_config )
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_daily_task_comp.cpp",
      "chooseTaskFromBackupPool",
      680);
    v10 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
            &v29,
            (const char (*)[35])"findTaskOpenConfigByCityId fails: ");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 64));
    v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])" uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_DWORD *)(v3 + 48) = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v29);
    result = 0LL;
    goto LABEL_27;
  }
  backup_pool_vec = &city_task_open_excel_config->backup_vec;
  __for_range = &city_task_open_excel_config->backup_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(&city_task_open_excel_config->backup_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(__for_range)._M_current;
  while ( 1 )
  {
    if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      result = 0LL;
      goto LABEL_27;
    }
    v14 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    v15 = v14;
    if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v14);
    }
    *(_DWORD *)(v3 + 48) = *v15;
    if ( !common::tools::MiscUtils::isContains<std::map<unsigned int,DailyTaskInfo>,unsigned int>(
            &this->task_map_,
            (const unsigned int *)(v3 + 48)) )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v28);
      v16 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v28);
      isDailyTaskIdClosed = FeatureSwitchMgr::isDailyTaskIdClosed(&v16->feature_switch_mgr, *(_DWORD *)(v3 + 48));
      std::shared_ptr<Config>::~shared_ptr(&v28);
      if ( isDailyTaskIdClosed )
      {
        common::milog::MiLogStream::create(
          &v29,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/player_daily_task_comp.cpp",
          "chooseTaskFromBackupPool",
          692);
        v18 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                &v29,
                (const char (*)[15])"daily_task_id:");
        v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v18,
                (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v19, (const char (*)[8])" closed");
        common::milog::MiLogStream::~MiLogStream(&v29);
        goto LABEL_25;
      }
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v28);
      v20 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v28);
      task_config_ptr = data::DailyTaskExcelConfigMgrBase::findDailyTaskExcelConfig(
                          &v20->design_config.txt_config_mgr.daily_task_config_mgr,
                          *(_DWORD *)(v3 + 48));
      std::shared_ptr<Config>::~shared_ptr(&v28);
      if ( task_config_ptr )
        break;
    }
LABEL_25:
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  PlayerDailyTaskComp::addOneTask(this, task_config_ptr, is_by_group_replaced);
  if ( *(_BYTE *)(((unsigned __int64)&task_config_ptr->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&task_config_ptr->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&task_config_ptr->id);
  }
  result = task_config_ptr->id;
LABEL_27:
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

// Line 707: range 000000001418EC28-000000001418F2EB
void __cdecl PlayerDailyTaskComp::addOneTask(
        PlayerDailyTaskComp *const this,
        const data::DailyTaskExcelConfig *task_config,
        bool is_by_group_replaced)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  PlayerBasicComp *BasicComp; // rax
  unsigned int v7; // eax
  DailyTaskInfo *v8; // r8
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,DailyTaskInfo> >,bool> v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  std::vector<data::DailyTaskTagType>::size_type v17; // r14
  std::vector<data::DailyTaskTagType>::size_type v18; // rax
  uint32_t v19; // eax
  std::set<unsigned int> *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rbx
  unsigned int val; // [rsp+28h] [rbp-F8h] BYREF
  uint32_t tag_idx; // [rsp+2Ch] [rbp-F4h]
  std::vector<data::DailyTaskTagType>::const_iterator __for_begin; // [rsp+30h] [rbp-F0h] BYREF
  const std::vector<data::DailyTaskTagType> *__for_range; // [rsp+38h] [rbp-E8h]
  const data::DailyTaskTagType *tag_config; // [rsp+40h] [rbp-E0h]
  std::vector<data::DailyTaskTagType>::const_iterator __for_end; // [rsp+48h] [rbp-D8h] BYREF
  std::tuple<unsigned int&,unsigned int&> v33; // [rsp+50h] [rbp-D0h] BYREF
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
  *(_QWORD *)(v3 + 8) = "3 32 4 17 daily_task_id:708 48 4 9 level:709 64 16 8 info:710";
  *(_QWORD *)(v3 + 16) = PlayerDailyTaskComp::addOneTask;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&task_config->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&task_config->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&task_config->id);
  }
  *(_DWORD *)(v3 + 32) = task_config->id;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Player::getBasicComp(this->player_);
  *(_DWORD *)(v3 + 48) = PlayerBasicComp::getLevel(BasicComp);
  *(_DWORD *)(v3 + 64) = 0;
  *(_DWORD *)(v3 + 68) = 0;
  *(_DWORD *)(v3 + 72) = 0;
  *(_BYTE *)(v3 + 76) = 0;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v34);
  v7 = (unsigned int)std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v34);
  DailyTaskExcelConfigMgr::findTaskReward(
    (const DailyTaskExcelConfigMgr *const)&__for_end,
    v7 + 22680,
    *(_DWORD *)(v3 + 32));
  std::tie<unsigned int,unsigned int>(
    (unsigned int *)&v33,
    (unsigned int *)(v3 + 64),
    (unsigned int *)(v3 + 68),
    (unsigned int *)(v3 + 64));
  std::tuple<unsigned int &,unsigned int &>::operator=<unsigned int,unsigned int>(
    &v33,
    (std::tuple<unsigned int,unsigned int> *)&__for_end);
  std::shared_ptr<Config>::~shared_ptr(&v34);
  if ( !*(_DWORD *)(v3 + 64) )
  {
    common::milog::MiLogStream::create(
      &v35,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/player_daily_task_comp.cpp",
      "addOneTask",
      714);
    v9 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           &v35,
           (const char (*)[31])"findTaskReward daily_task_id: ");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 32));
    v11 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v10, (const char (*)[9])" level: ");
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v12, (const char (*)[7])" fails");
    common::milog::MiLogStream::~MiLogStream(&v35);
  }
  v13 = std::map<unsigned int,DailyTaskInfo>::emplace<unsigned int &,DailyTaskInfo&>(
          &this->task_map_,
          (unsigned int *)(v3 + 32),
          (DailyTaskInfo *)(v3 + 64),
          (unsigned int *)&this->task_map_,
          v8);
  if ( !v13.second )
  {
    common::milog::MiLogStream::create(
      &v35,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/player_daily_task_comp.cpp",
      "addOneTask",
      718);
    v14 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
            &v35,
            (const char (*)[20])"duplicate task_id: ");
    v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 32));
    v16 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v15, (const char (*)[7])" uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &val);
    common::milog::MiLogStream::~MiLogStream(&v35);
  }
  v17 = std::vector<std::set<unsigned int>>::size(&this->exclude_tag_vec_);
  if ( v17 < std::vector<data::DailyTaskTagType>::size(&task_config->tag_vec) )
  {
    v18 = std::vector<data::DailyTaskTagType>::size(&task_config->tag_vec);
    std::vector<std::set<unsigned int>>::resize(&this->exclude_tag_vec_, v18);
  }
  tag_idx = 0;
  __for_range = &task_config->tag_vec;
  __for_begin._M_current = std::vector<data::DailyTaskTagType>::begin(&task_config->tag_vec)._M_current;
  __for_end._M_current = std::vector<data::DailyTaskTagType>::end(__for_range)._M_current;
  while ( __gnu_cxx::operator!=<data::DailyTaskTagType const*,std::vector<data::DailyTaskTagType>>(
            &__for_begin,
            &__for_end) )
  {
    tag_config = __gnu_cxx::__normal_iterator<data::DailyTaskTagType const*,std::vector<data::DailyTaskTagType>>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)&tag_config->value >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&tag_config->value >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&tag_config->value);
    }
    if ( tag_config->value )
    {
      v19 = tag_idx++;
      v20 = std::vector<std::set<unsigned int>>::operator[](&this->exclude_tag_vec_, v19);
      std::set<unsigned int>::insert(v20, &tag_config->value);
    }
    __gnu_cxx::__normal_iterator<data::DailyTaskTagType const*,std::vector<data::DailyTaskTagType>>::operator++(&__for_begin);
  }
  PlayerDailyTaskComp::logDailyTaskGen(this, *(_DWORD *)(v3 + 32), is_by_group_replaced);
  common::milog::MiLogStream::create(
    &v35,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/player_daily_task_comp.cpp",
    "addOneTask",
    734);
  v21 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
          &v35,
          (const char (*)[34])"[DAILY_TASK] generate daily task ");
  v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v3 + 32));
  v23 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v22, (const char (*)[11])" drop_id: ");
  v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, (const unsigned int *)(v3 + 64));
  v25 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v24, (const char (*)[7])" uid: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &val);
  common::milog::MiLogStream::~MiLogStream(&v35);
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
};

// Line 738: range 000000001418F2EC-000000001418F500
bool __cdecl PlayerDailyTaskComp::isMeetExcludeTag(
        const PlayerDailyTaskComp *const this,
        const data::DailyTaskExcelConfig *task_config)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::vector<data::DailyTaskTagType>::const_reference v5; // rax
  const std::set<unsigned int> *v6; // rax
  const std::set<unsigned int> *v7; // rax
  bool result; // al
  uint32_t idx; // [rsp+1Ch] [rbp-84h]
  std::_Rb_tree_const_iterator<unsigned int>::_Self __x; // [rsp+20h] [rbp-80h] BYREF
  std::_Rb_tree_const_iterator<unsigned int>::_Self __y; // [rsp+28h] [rbp-78h] BYREF
  char v13[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 7 tag:742";
  *(_QWORD *)(v2 + 16) = PlayerDailyTaskComp::isMeetExcludeTag;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  for ( idx = 0; idx < std::vector<data::DailyTaskTagType>::size(&task_config->tag_vec); ++idx )
  {
    v5 = std::vector<data::DailyTaskTagType>::operator[](&task_config->tag_vec, idx);
    if ( *(_BYTE *)(((unsigned __int64)&v5->value >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v5->value >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&v5->value);
    }
    *(_DWORD *)(v2 + 32) = v5->value;
    if ( *(_DWORD *)(v2 + 32) )
    {
      if ( idx < std::vector<std::set<unsigned int>>::size(&this->exclude_tag_vec_) )
      {
        v6 = std::vector<std::set<unsigned int>>::operator[](&this->exclude_tag_vec_, idx);
        __y._M_node = std::set<unsigned int>::end(v6)._M_node;
        v7 = std::vector<std::set<unsigned int>>::operator[](&this->exclude_tag_vec_, idx);
        __x._M_node = std::set<unsigned int>::find(v7, (const std::set<unsigned int>::key_type *)(v2 + 32))._M_node;
        if ( std::operator!=(&__x, &__y) )
        {
          result = 0;
          goto LABEL_17;
        }
      }
    }
  }
  result = 1;
LABEL_17:
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

// Line 752: range 000000001418F502-000000001418F75E
bool __cdecl PlayerDailyTaskComp::isMeetExcludeQuestNpc(
        const PlayerDailyTaskComp *const this,
        const data::DailyTaskExcelConfig *task_config)
{
  DailyTaskExcelConfigMgr *p_daily_task_config_mgr; // rcx
  uint32_t *v3; // rax
  uint32_t *v4; // rdx
  uint32_t v5; // ebx
  uint32_t *v6; // rax
  uint32_t *v7; // rdx
  std::vector<std::tuple<unsigned int,unsigned int>>::const_iterator __for_begin; // [rsp+10h] [rbp-50h] BYREF
  std::vector<std::tuple<unsigned int,unsigned int>>::const_iterator __for_end; // [rsp+18h] [rbp-48h] BYREF
  PlayerQuestComp *quest_comp; // [rsp+20h] [rbp-40h]
  const std::vector<std::tuple<unsigned int,unsigned int>> *npc_vec_ptr; // [rsp+28h] [rbp-38h]
  const std::vector<std::tuple<unsigned int,unsigned int>> *__for_range; // [rsp+30h] [rbp-30h]
  const std::tuple<unsigned int,unsigned int> *elems; // [rsp+38h] [rbp-28h]
  std::shared_ptr<Config> v15[2]; // [rsp+40h] [rbp-20h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&task_config->type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)task_config + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&task_config->type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&task_config->type);
  }
  if ( task_config->type == DAILY_TASK_QUEST )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    quest_comp = Player::getQuestComp(this->player_);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v15);
    p_daily_task_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v15)->design_config.txt_config_mgr.daily_task_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&task_config->id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&task_config->id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&task_config->id);
    }
    npc_vec_ptr = DailyTaskExcelConfigMgr::findExcludeNpcVec(p_daily_task_config_mgr, task_config->id);
    std::shared_ptr<Config>::~shared_ptr(v15);
    if ( npc_vec_ptr )
    {
      __for_range = npc_vec_ptr;
      __for_begin._M_current = std::vector<std::tuple<unsigned int,unsigned int>>::begin(npc_vec_ptr)._M_current;
      __for_end._M_current = std::vector<std::tuple<unsigned int,unsigned int>>::end(npc_vec_ptr)._M_current;
      while ( __gnu_cxx::operator!=<std::tuple<unsigned int,unsigned int> const*,std::vector<std::tuple<unsigned int,unsigned int>>>(
                &__for_begin,
                &__for_end) )
      {
        elems = __gnu_cxx::__normal_iterator<std::tuple<unsigned int,unsigned int> const*,std::vector<std::tuple<unsigned int,unsigned int>>>::operator*(&__for_begin);
        v3 = (uint32_t *)std::get<1ul,unsigned int,unsigned int>(elems);
        v4 = v3;
        if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v3);
        }
        v5 = *v4;
        v6 = (uint32_t *)std::get<0ul,unsigned int,unsigned int>(elems);
        v7 = v6;
        if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v6);
        }
        if ( PlayerQuestComp::isNpcOccupied(quest_comp, *v7, v5) )
          return 0;
        __gnu_cxx::__normal_iterator<std::tuple<unsigned int,unsigned int> const*,std::vector<std::tuple<unsigned int,unsigned int>>>::operator++(&__for_begin);
      }
    }
  }
  return 1;
};

// Line 771: range 000000001418F760-000000001418FBC5
bool __cdecl PlayerDailyTaskComp::isDailyTaskSatisfied(
        const PlayerDailyTaskComp *const this,
        const data::DailyTaskExcelConfig *task_config)
{
  FeatureSwitchMgr *p_feature_switch_mgr; // rcx
  bool isDailyTaskIdClosed; // bl
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  data::LogicType statisfied_cond_comb; // eax
  const data::DailyTaskStatisfiedCond *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  char result; // [rsp+1Eh] [rbp-72h]
  bool result_0; // [rsp+1Fh] [rbp-71h]
  std::vector<data::DailyTaskStatisfiedCond>::const_iterator __for_begin; // [rsp+20h] [rbp-70h] BYREF
  std::vector<data::DailyTaskStatisfiedCond>::const_iterator __for_end; // [rsp+28h] [rbp-68h] BYREF
  const std::vector<data::DailyTaskStatisfiedCond> *__for_range_0; // [rsp+30h] [rbp-60h]
  const data::DailyTaskStatisfiedCond *cond_0; // [rsp+38h] [rbp-58h]
  const std::vector<data::DailyTaskStatisfiedCond> *__for_range; // [rsp+40h] [rbp-50h]
  const data::DailyTaskStatisfiedCond *cond; // [rsp+48h] [rbp-48h]
  std::shared_ptr<Config> v18; // [rsp+50h] [rbp-40h] BYREF
  common::milog::MiLogStream v19; // [rsp+60h] [rbp-30h] BYREF

  if ( !PlayerDailyTaskComp::isMeetExcludeTag(this, task_config) )
    return 0;
  if ( !PlayerDailyTaskComp::isMeetExcludeQuestNpc(this, task_config) )
    return 0;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v18);
  p_feature_switch_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v18)->feature_switch_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&task_config->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&task_config->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&task_config->id);
  }
  isDailyTaskIdClosed = FeatureSwitchMgr::isDailyTaskIdClosed(p_feature_switch_mgr, task_config->id);
  std::shared_ptr<Config>::~shared_ptr(&v18);
  if ( isDailyTaskIdClosed )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/player_daily_task_comp.cpp",
      "isDailyTaskSatisfied",
      782);
    v5 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v19, (const char (*)[15])"daily_task_id:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &task_config->id);
    common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v6, (const char (*)[11])off_252616C0);
    common::milog::MiLogStream::~MiLogStream(&v19);
    return 0;
  }
  if ( *(_BYTE *)(((unsigned __int64)&task_config->statisfied_cond_comb >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&task_config->statisfied_cond_comb >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&task_config->statisfied_cond_comb);
  }
  statisfied_cond_comb = task_config->statisfied_cond_comb;
  if ( statisfied_cond_comb == LOGIC_OR )
  {
    result_0 = 0;
    __for_range_0 = &task_config->statisfied_cond;
    __for_begin._M_current = std::vector<data::DailyTaskStatisfiedCond>::begin(&task_config->statisfied_cond)._M_current;
    __for_end._M_current = std::vector<data::DailyTaskStatisfiedCond>::end(&task_config->statisfied_cond)._M_current;
    while ( __gnu_cxx::operator!=<data::DailyTaskStatisfiedCond const*,std::vector<data::DailyTaskStatisfiedCond>>(
              &__for_begin,
              &__for_end) )
    {
      cond_0 = __gnu_cxx::__normal_iterator<data::DailyTaskStatisfiedCond const*,std::vector<data::DailyTaskStatisfiedCond>>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)&cond_0->type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&cond_0->type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&cond_0->type);
      }
      if ( cond_0->type )
        result_0 = (result_0 | PlayerDailyTaskComp::isDailyTaskSatisfiedCondition(this, cond_0)) != 0;
      __gnu_cxx::__normal_iterator<data::DailyTaskStatisfiedCond const*,std::vector<data::DailyTaskStatisfiedCond>>::operator++(&__for_begin);
    }
    return result_0;
  }
  else
  {
    if ( statisfied_cond_comb > LOGIC_OR )
    {
LABEL_31:
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/player_daily_task_comp.cpp",
        "isDailyTaskSatisfied",
        816);
      v9 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v19, (const char (*)[22])off_252622C0);
      common::milog::MiLogStream::operator<<<data::LogicType,(data::LogicType*)0>(
        v9,
        &task_config->statisfied_cond_comb);
      common::milog::MiLogStream::~MiLogStream(&v19);
      return 0;
    }
    if ( statisfied_cond_comb )
    {
      if ( statisfied_cond_comb != LOGIC_AND )
        goto LABEL_31;
      result = 1;
      __for_range = &task_config->statisfied_cond;
      __for_begin._M_current = std::vector<data::DailyTaskStatisfiedCond>::begin(&task_config->statisfied_cond)._M_current;
      __for_end._M_current = std::vector<data::DailyTaskStatisfiedCond>::end(&task_config->statisfied_cond)._M_current;
      while ( __gnu_cxx::operator!=<data::DailyTaskStatisfiedCond const*,std::vector<data::DailyTaskStatisfiedCond>>(
                &__for_begin,
                &__for_end) )
      {
        cond = __gnu_cxx::__normal_iterator<data::DailyTaskStatisfiedCond const*,std::vector<data::DailyTaskStatisfiedCond>>::operator*(&__for_begin);
        result = ((unsigned __int8)result & PlayerDailyTaskComp::isDailyTaskSatisfiedCondition(this, cond)) != 0;
        __gnu_cxx::__normal_iterator<data::DailyTaskStatisfiedCond const*,std::vector<data::DailyTaskStatisfiedCond>>::operator++(&__for_begin);
      }
      return result;
    }
    else if ( std::vector<data::DailyTaskStatisfiedCond>::size(&task_config->statisfied_cond) )
    {
      v8 = std::vector<data::DailyTaskStatisfiedCond>::operator[](&task_config->statisfied_cond, 0LL);
      return PlayerDailyTaskComp::isDailyTaskSatisfiedCondition(this, v8);
    }
    else
    {
      return 1;
    }
  }
};

// Line 823: range 000000001418FBC6-0000000014190698
bool __cdecl PlayerDailyTaskComp::isDailyTaskSatisfiedCondition(
        const PlayerDailyTaskComp *const this,
        const data::DailyTaskStatisfiedCond *cond)
{
  bool result; // al
  PlayerQuestComp *QuestComp; // rcx
  PlayerBasicComp *BasicComp; // rax
  uint32_t Level; // ecx
  uint32_t param2; // esi
  int32_t DailyTaskVar; // ecx
  uint32_t v8; // esi
  uint32_t v9; // edi
  uint32_t v10; // esi
  uint32_t v11; // edi
  uint32_t v12; // esi
  int32_t v13; // ecx
  const PlayerSceneComp *SceneComp; // rdi
  uint32_t v15; // ecx
  PlayerBasicComp *v16; // rax
  uint32_t v17; // ecx
  PlayerActivityComp *ActivityComp; // rcx
  PlayerActivityComp *v19; // rcx
  PlayerQuestComp *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  PlayerAchievementComp *AchievementComp; // rcx
  common::milog::MiLogStream *v24; // rax
  uint32_t param_key; // [rsp+14h] [rbp-3Ch]
  uint32_t param_value; // [rsp+18h] [rbp-38h]
  uint32_t value; // [rsp+1Ch] [rbp-34h]
  common::milog::MiLogStream v29; // [rsp+20h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&cond->type);
  }
  switch ( cond->type )
  {
    case CONDITION_NONE:
      result = 1;
      break;
    case CONDITION_QUEST:
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      QuestComp = Player::getQuestComp(this->player_);
      if ( *(_BYTE *)(((unsigned __int64)&cond->param1 >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)cond + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cond->param1 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&cond->param1);
      }
      result = PlayerQuestComp::getQuestState(QuestComp, cond->param1) == QUEST_STATE_FINISHED;
      break;
    case CONDITION_PLAYER_LEVEL:
    case CONDITION_PLAYER_LEVEL_GT_EQ:
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      BasicComp = Player::getBasicComp(this->player_);
      Level = PlayerBasicComp::getLevel(BasicComp);
      if ( *(_BYTE *)(((unsigned __int64)&cond->param1 >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)cond + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cond->param1 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&cond->param1);
      }
      result = Level >= cond->param1;
      break;
    case CONDITION_VAR_EQ:
      if ( *(_BYTE *)(((unsigned __int64)&cond->param2 >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&cond->param2 >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&cond->param2);
      }
      param2 = cond->param2;
      if ( *(_BYTE *)(((unsigned __int64)&cond->param1 >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)cond + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cond->param1 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&cond->param1);
      }
      DailyTaskVar = PlayerDailyTaskComp::getDailyTaskVar(this, cond->param1, param2);
      if ( *(_BYTE *)(((unsigned __int64)&cond->param3 >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)cond + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cond->param3 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&cond->param3);
      }
      result = DailyTaskVar == cond->param3;
      break;
    case CONDITION_VAR_NE:
      if ( *(_BYTE *)(((unsigned __int64)&cond->param2 >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&cond->param2 >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&cond->param2);
      }
      v12 = cond->param2;
      if ( *(_BYTE *)(((unsigned __int64)&cond->param1 >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)cond + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cond->param1 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&cond->param1);
      }
      v13 = PlayerDailyTaskComp::getDailyTaskVar(this, cond->param1, v12);
      if ( *(_BYTE *)(((unsigned __int64)&cond->param3 >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)cond + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cond->param3 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&cond->param3);
      }
      result = v13 != cond->param3;
      break;
    case CONDITION_VAR_GT:
      if ( *(_BYTE *)(((unsigned __int64)&cond->param2 >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&cond->param2 >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&cond->param2);
      }
      v8 = cond->param2;
      if ( *(_BYTE *)(((unsigned __int64)&cond->param1 >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)cond + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cond->param1 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&cond->param1);
      }
      v9 = PlayerDailyTaskComp::getDailyTaskVar(this, cond->param1, v8);
      if ( *(_BYTE *)(((unsigned __int64)&cond->param3 >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)cond + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cond->param3 >> 3) + 0x7FFF8000) )
      {
        v9 = (_DWORD)cond + 20;
        __asan_report_load4(&cond->param3);
      }
      result = v9 > cond->param3;
      break;
    case CONDITION_VAR_LT:
      if ( *(_BYTE *)(((unsigned __int64)&cond->param2 >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&cond->param2 >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&cond->param2);
      }
      v10 = cond->param2;
      if ( *(_BYTE *)(((unsigned __int64)&cond->param1 >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)cond + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cond->param1 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&cond->param1);
      }
      v11 = PlayerDailyTaskComp::getDailyTaskVar(this, cond->param1, v10);
      if ( *(_BYTE *)(((unsigned __int64)&cond->param3 >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)cond + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cond->param3 >> 3) + 0x7FFF8000) )
      {
        v11 = (_DWORD)cond + 20;
        __asan_report_load4(&cond->param3);
      }
      result = v11 < cond->param3;
      break;
    case CONDITION_UNLOCK_POINT:
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      SceneComp = Player::getSceneComp(this->player_);
      if ( *(_BYTE *)(((unsigned __int64)&cond->param2 >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&cond->param2 >> 3) + 0x7FFF8000) <= 3 )
      {
        SceneComp = (const PlayerSceneComp *)&cond->param2;
        __asan_report_load4(&cond->param2);
      }
      v15 = cond->param2;
      if ( *(_BYTE *)(((unsigned __int64)&cond->param1 >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)cond + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cond->param1 >> 3) + 0x7FFF8000) )
      {
        SceneComp = (const PlayerSceneComp *)&cond->param1;
        __asan_report_load4(&cond->param1);
      }
      result = PlayerSceneComp::isPointUnlocked(SceneComp, cond->param1, v15);
      break;
    case CONDITION_PLAYER_LEVEL_LT:
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v16 = Player::getBasicComp(this->player_);
      v17 = PlayerBasicComp::getLevel(v16);
      if ( *(_BYTE *)(((unsigned __int64)&cond->param1 >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)cond + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cond->param1 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&cond->param1);
      }
      result = v17 < cond->param1;
      break;
    case CONDITION_SPECIFIC_ACTIVITY_OPEN:
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      ActivityComp = Player::getActivityComp(this->player_);
      if ( *(_BYTE *)(((unsigned __int64)&cond->param1 >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)cond + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cond->param1 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&cond->param1);
      }
      result = PlayerActivityComp::isActivityOpen(ActivityComp, cond->param1);
      break;
    case CONDITION_ACTIVITY_TYPE_OPEN:
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v19 = Player::getActivityComp(this->player_);
      if ( *(_BYTE *)(((unsigned __int64)&cond->param1 >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)cond + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cond->param1 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&cond->param1);
      }
      result = PlayerActivityComp::isActivityTypeOpen(v19, (data::NewActivityType)cond->param1, 0);
      break;
    case CONDITION_QUEST_GLOBAL_VAR_EQUAL:
    case CONDITION_QUEST_GLOBAL_VAR_GREATER:
    case CONDITION_QUEST_GLOBAL_VAR_LESS:
      if ( *(_BYTE *)(((unsigned __int64)&cond->param1 >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)cond + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cond->param1 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&cond->param1);
      }
      param_key = cond->param1;
      if ( *(_BYTE *)(((unsigned __int64)&cond->param2 >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&cond->param2 >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&cond->param2);
      }
      param_value = cond->param2;
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v20 = Player::getQuestComp(this->player_);
      value = PlayerQuestComp::getGlobalVarValue(v20, param_key);
      if ( *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&cond->type);
      }
      if ( cond->type == CONDITION_QUEST_GLOBAL_VAR_GREATER )
      {
        result = value > param_value;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&cond->type);
        }
        if ( cond->type == CONDITION_QUEST_GLOBAL_VAR_LESS )
        {
          result = value < param_value;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&cond->type);
          }
          if ( cond->type == CONDITION_QUEST_GLOBAL_VAR_EQUAL )
          {
            result = value == param_value;
          }
          else
          {
            common::milog::MiLogStream::create(
              &v29,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/player_daily_task_comp.cpp",
              "isDailyTaskSatisfiedCondition",
              868);
            v21 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    &v29,
                    (const char (*)[12])"cond type: ");
            v22 = common::milog::MiLogStream::operator<<<data::ConditionType,(data::ConditionType*)0>(v21, &cond->type);
            common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v22, (const char (*)[11])off_25262380);
            common::milog::MiLogStream::~MiLogStream(&v29);
            result = 0;
          }
        }
      }
      break;
    case CONDITION_FINISH_ACHIEVEMENT:
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      AchievementComp = Player::getAchievementComp(this->player_);
      if ( *(_BYTE *)(((unsigned __int64)&cond->param1 >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)cond + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cond->param1 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&cond->param1);
      }
      result = PlayerAchievementComp::getAchievementStatus(AchievementComp, cond->param1) > Achievement_Status_UNFINISHED;
      break;
    default:
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player_daily_task_comp.cpp",
        "isDailyTaskSatisfiedCondition",
        876);
      v24 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(&v29, (const char (*)[29])off_252623C0);
      common::milog::MiLogStream::operator<<<data::ConditionType,(data::ConditionType*)0>(v24, &cond->type);
      common::milog::MiLogStream::~MiLogStream(&v29);
      result = 0;
      break;
  }
  return result;
};

// Line 884: range 000000001419069A-0000000014190705
int32_t __cdecl PlayerDailyTaskComp::startDailyTask(PlayerDailyTaskComp *const this)
{
  int32_t started; // ebx
  std::vector<unsigned int> daily_task_id_vec; // [rsp+10h] [rbp-30h] BYREF

  common::tools::MiscUtils::getAllMapKeys<std::map<unsigned int,DailyTaskInfo>>(&daily_task_id_vec, &this->task_map_);
  started = PlayerDailyTaskComp::startDailyTask(this, &daily_task_id_vec);
  std::vector<unsigned int>::~vector(&daily_task_id_vec);
  return started;
};

// Line 890: range 0000000014190706-0000000014190E24
int32_t __cdecl PlayerDailyTaskComp::startDailyTask(
        PlayerDailyTaskComp *const this,
        const std::vector<unsigned int> *daily_task_id_vec)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t result; // eax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v8; // rax
  _DWORD *v9; // rdx
  std::_Rb_tree_iterator<std::pair<unsigned int const,DailyTaskInfo> >::pointer v10; // rdx
  DailyTaskInfo *p_second; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  data::DailyTaskType type; // eax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  PlayerQuestComp *QuestComp; // rax
  bool is_accept_quest; // [rsp+1Fh] [rbp-141h]
  uint32_t level; // [rsp+20h] [rbp-140h]
  uint32_t revise_level; // [rsp+24h] [rbp-13Ch]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-138h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-130h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,DailyTaskInfo> >::_Self __y; // [rsp+38h] [rbp-128h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+40h] [rbp-120h]
  const data::DailyTaskExcelConfig *task_config_ptr; // [rsp+48h] [rbp-118h]
  std::shared_ptr<Config> v30; // [rsp+50h] [rbp-110h] BYREF
  common::milog::MiLogStream v31; // [rsp+60h] [rbp-100h] BYREF
  common::milog::MiLogStream v32; // [rsp+80h] [rbp-E0h] BYREF
  common::milog::MiLogStream v33; // [rsp+A0h] [rbp-C0h] BYREF
  char v34[160]; // [rsp+C0h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 17 daily_task_id:898 64 8 8 iter:900 96 16 8 info:905";
  *(_QWORD *)(v2 + 16) = PlayerDailyTaskComp::startDailyTask;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202178560;
  if ( std::vector<unsigned int>::empty(daily_task_id_vec) )
  {
    result = 0;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    BasicComp = Player::getBasicComp(this->player_);
    level = PlayerBasicComp::getLevel(BasicComp);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v30);
    v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v30);
    revise_level = DailyTaskExcelConfigMgr::findGroupReviseLevel(
                     &v7->design_config.txt_config_mgr.daily_task_config_mgr,
                     level);
    std::shared_ptr<Config>::~shared_ptr(&v30);
    is_accept_quest = 0;
    __for_range = daily_task_id_vec;
    __for_begin._M_current = std::vector<unsigned int>::begin(daily_task_id_vec)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(daily_task_id_vec)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v8 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
      v9 = v8;
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v8);
      }
      *(_DWORD *)(v2 + 48) = *v9;
      *(std::map<unsigned int,DailyTaskInfo>::iterator *)(v2 + 64) = std::map<unsigned int,DailyTaskInfo>::find(
                                                                       &this->task_map_,
                                                                       (const std::map<unsigned int,DailyTaskInfo>::key_type *)(v2 + 48));
      __y._M_node = std::map<unsigned int,DailyTaskInfo>::end(&this->task_map_)._M_node;
      if ( !std::operator==(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,DailyTaskInfo> >::_Self *)(v2 + 64),
              &__y) )
      {
        v10 = std::_Rb_tree_iterator<std::pair<unsigned int const,DailyTaskInfo>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,DailyTaskInfo> > *const)(v2 + 64));
        p_second = &v10->second;
        if ( ((unsigned __int8)p_second & 7) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)(((unsigned __int64)(&p_second->is_finished + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)p_second + 15) & 7) >= *(_BYTE *)(((unsigned __int64)(&p_second->is_finished + 3) >> 3)
                                                                + 0x7FFF8000) )
        {
          __asan_report_load_n(p_second, 16LL);
        }
        v12 = *(_QWORD *)&v10->second.drop_id;
        v13 = *(_QWORD *)&v10->second.progress;
        *(_QWORD *)(v2 + 96) = v12;
        *(_QWORD *)(v2 + 104) = v13;
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v30);
        v14 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v30);
        task_config_ptr = data::DailyTaskExcelConfigMgrBase::findDailyTaskExcelConfig(
                            &v14->design_config.txt_config_mgr.daily_task_config_mgr,
                            *(_DWORD *)(v2 + 48));
        std::shared_ptr<Config>::~shared_ptr(&v30);
        if ( task_config_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&task_config_ptr->type >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)task_config_ptr + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&task_config_ptr->type >> 3)
                                                                           + 0x7FFF8000) )
          {
            __asan_report_load4(&task_config_ptr->type);
          }
          type = task_config_ptr->type;
          if ( type )
          {
            if ( type == DAILY_TASK_SCENE )
            {
              if ( *(_BYTE *)(v2 + 108) != 1 )
                PlayerDailyTaskComp::registerTaskGroups(this, task_config_ptr, revise_level);
              if ( *(_BYTE *)(((unsigned __int64)&task_config_ptr->finish_type >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&task_config_ptr->finish_type >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&task_config_ptr->finish_type);
              }
              PlayerDailyTaskComp::registerObserver(this, task_config_ptr->finish_type);
            }
            else
            {
              common::milog::MiLogStream::create(
                &v32,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/player_daily_task_comp.cpp",
                "startDailyTask",
                925);
              v18 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                      &v32,
                      (const char (*)[24])off_25261240);
              common::milog::MiLogStream::operator<<<data::DailyTaskType,(data::DailyTaskType*)0>(
                v18,
                &task_config_ptr->type);
              common::milog::MiLogStream::~MiLogStream(&v32);
            }
          }
          else
          {
            is_accept_quest = 1;
          }
          common::milog::MiLogStream::create(
            &v33,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/player_daily_task_comp.cpp",
            "startDailyTask",
            928);
          v19 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                  &v33,
                  (const char (*)[25])"[DAILY_TASK] daily task ");
          v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &task_config_ptr->id);
          common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v20, (const char (*)[7])" start");
          common::milog::MiLogStream::~MiLogStream(&v33);
        }
        else
        {
          common::milog::MiLogStream::create(
            &v31,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/player_daily_task_comp.cpp",
            "startDailyTask",
            909);
          v15 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                  &v31,
                  (const char (*)[26])"findDailyTaskExcelConfig ");
          v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v15,
                  (const unsigned int *)(v2 + 48));
          common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v16, (const char (*)[7])" fails");
          common::milog::MiLogStream::~MiLogStream(&v31);
        }
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    if ( is_accept_quest )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      QuestComp = Player::getQuestComp(this->player_);
      PlayerQuestComp::tryAcceptQuestByCond(QuestComp, QUEST_COND_DAILY_TASK_START, 1, 0);
    }
    PlayerDailyTaskComp::registerTalkEventObserver(this);
    result = 0;
  }
  if ( v34 == (char *)v2 )
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

// Line 941: range 0000000014190E26-00000000141918C1
void __cdecl PlayerDailyTaskComp::registerObserver(
        PlayerDailyTaskComp *const this,
        data::DailyTaskFinishType cond_type)
{
  unsigned __int64 p_pending_que; // r15
  __int64 v3; // rax
  _DWORD *v4; // r14
  PlayerEventComp *EventComp; // r12
  std::weak_ptr<Observer> *v6; // rax
  PlayerEventComp *v7; // r12
  std::weak_ptr<Observer> *v8; // rax
  PlayerEventComp *v9; // r12
  std::weak_ptr<Observer> *v10; // rax
  PlayerEventComp *v11; // r12
  std::weak_ptr<Observer> *v12; // rax
  PlayerEventComp *v13; // r12
  std::weak_ptr<Observer> *v14; // rax
  PlayerEventComp *v15; // r12
  std::weak_ptr<Observer> *v16; // rax
  std::type_index value; // [rsp+88h] [rbp-D8h] BYREF
  std::weak_ptr<PlayerDailyTaskComp> v18; // [rsp+90h] [rbp-D0h] BYREF
  PlayerEventComp varC0; // [rsp+A0h] [rbp-C0h] BYREF

  p_pending_que = (unsigned __int64)&varC0.event_center_.context_.pending_que_;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      p_pending_que = v3;
  }
  *(_QWORD *)p_pending_que = 1102416563LL;
  *(_QWORD *)(p_pending_que + 8) = "2 32 16 12 this_ptr:942 64 16 12 this_wtr:948";
  *(_QWORD *)(p_pending_que + 16) = PlayerDailyTaskComp::registerObserver;
  v4 = (_DWORD *)(p_pending_que >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  toThisPtr<PlayerDailyTaskComp>((PlayerDailyTaskComp *)(p_pending_que + 32));
  if ( std::operator==<PlayerDailyTaskComp>(0LL, (const std::shared_ptr<PlayerDailyTaskComp> *)(p_pending_que + 32)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&varC0._M_weak_this._M_refcount,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_daily_task_comp.cpp",
      "registerObserver",
      945);
    common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
      (common::milog::MiLogStream *const)&varC0._M_weak_this._M_refcount,
      (const char (*)[17])"toThisPtr failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&varC0._M_weak_this._M_refcount);
  }
  else
  {
    std::weak_ptr<PlayerDailyTaskComp>::weak_ptr<PlayerDailyTaskComp,void>(
      (std::weak_ptr<PlayerDailyTaskComp> *const)(p_pending_que + 64),
      (const std::shared_ptr<PlayerDailyTaskComp> *)(p_pending_que + 32));
    switch ( cond_type )
    {
      case DAILY_FINISH_MONSTER_ID_NUM:
      case DAILY_FINISH_MONSTER_CONFIG_NUM:
      case DAILY_FINISH_MONSTER_NUM:
        value._M_target = getInternalPlayerEventType<MonsterDieEvent>()._M_target;
        if ( !common::tools::MiscUtils::isContains<std::unordered_map<std::type_index,std::weak_ptr<Observer>>,std::type_index>(
                &this->observer_map_,
                &value) )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          EventComp = Player::getEventComp(this->player_);
          std::weak_ptr<PlayerDailyTaskComp>::weak_ptr(
            &v18,
            (const std::weak_ptr<PlayerDailyTaskComp> *)(p_pending_que + 64));
          PlayerEventComp::registerObserver<PlayerDailyTaskComp,MonsterDieEvent>(
            &varC0,
            (std::weak_ptr<PlayerDailyTaskComp> *)EventComp,
            (void (*)(PlayerDailyTaskComp *, const MonsterDieEvent *))&v18);
          value._M_target = getInternalPlayerEventType<MonsterDieEvent>()._M_target;
          v6 = std::unordered_map<std::type_index,std::weak_ptr<Observer>>::operator[](&this->observer_map_, &value);
          std::weak_ptr<Observer>::operator=(v6, (std::weak_ptr<Observer> *)&varC0);
          std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&varC0);
          std::weak_ptr<PlayerDailyTaskComp>::~weak_ptr(&v18);
        }
        break;
      case DAILY_FINISH_GADGET_ID_NUM:
      case DAILY_FINISH_GADGET_CONFIG_NUM:
        value._M_target = getInternalPlayerEventType<GadgetDieEvent>()._M_target;
        if ( !common::tools::MiscUtils::isContains<std::unordered_map<std::type_index,std::weak_ptr<Observer>>,std::type_index>(
                &this->observer_map_,
                &value) )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v7 = Player::getEventComp(this->player_);
          std::weak_ptr<PlayerDailyTaskComp>::weak_ptr(
            &v18,
            (const std::weak_ptr<PlayerDailyTaskComp> *)(p_pending_que + 64));
          PlayerEventComp::registerObserver<PlayerDailyTaskComp,GadgetDieEvent>(
            &varC0,
            (std::weak_ptr<PlayerDailyTaskComp> *)v7,
            (void (*)(PlayerDailyTaskComp *, const GadgetDieEvent *))&v18);
          value._M_target = getInternalPlayerEventType<GadgetDieEvent>()._M_target;
          v8 = std::unordered_map<std::type_index,std::weak_ptr<Observer>>::operator[](&this->observer_map_, &value);
          std::weak_ptr<Observer>::operator=(v8, (std::weak_ptr<Observer> *)&varC0);
          std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&varC0);
          std::weak_ptr<PlayerDailyTaskComp>::~weak_ptr(&v18);
        }
        break;
      case DAILY_FINISH_CHEST_CONFIG:
        value._M_target = getInternalPlayerEventType<ChestOpenEvent>()._M_target;
        if ( !common::tools::MiscUtils::isContains<std::unordered_map<std::type_index,std::weak_ptr<Observer>>,std::type_index>(
                &this->observer_map_,
                &value) )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v9 = Player::getEventComp(this->player_);
          std::weak_ptr<PlayerDailyTaskComp>::weak_ptr(
            &v18,
            (const std::weak_ptr<PlayerDailyTaskComp> *)(p_pending_que + 64));
          PlayerEventComp::registerObserver<PlayerDailyTaskComp,ChestOpenEvent>(
            &varC0,
            (std::weak_ptr<PlayerDailyTaskComp> *)v9,
            (void (*)(PlayerDailyTaskComp *, const ChestOpenEvent *))&v18);
          value._M_target = getInternalPlayerEventType<ChestOpenEvent>()._M_target;
          v10 = std::unordered_map<std::type_index,std::weak_ptr<Observer>>::operator[](&this->observer_map_, &value);
          std::weak_ptr<Observer>::operator=(v10, (std::weak_ptr<Observer> *)&varC0);
          std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&varC0);
          std::weak_ptr<PlayerDailyTaskComp>::~weak_ptr(&v18);
        }
        break;
      case DAILY_FINISH_GATHER:
        value._M_target = getInternalPlayerEventType<WorldGatherEvent>()._M_target;
        if ( !common::tools::MiscUtils::isContains<std::unordered_map<std::type_index,std::weak_ptr<Observer>>,std::type_index>(
                &this->observer_map_,
                &value) )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v11 = Player::getEventComp(this->player_);
          std::weak_ptr<PlayerDailyTaskComp>::weak_ptr(
            &v18,
            (const std::weak_ptr<PlayerDailyTaskComp> *)(p_pending_que + 64));
          PlayerEventComp::registerObserver<PlayerDailyTaskComp,WorldGatherEvent>(
            &varC0,
            (std::weak_ptr<PlayerDailyTaskComp> *)v11,
            (void (*)(PlayerDailyTaskComp *, const WorldGatherEvent *))&v18);
          value._M_target = getInternalPlayerEventType<WorldGatherEvent>()._M_target;
          v12 = std::unordered_map<std::type_index,std::weak_ptr<Observer>>::operator[](&this->observer_map_, &value);
          std::weak_ptr<Observer>::operator=(v12, (std::weak_ptr<Observer> *)&varC0);
          std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&varC0);
          std::weak_ptr<PlayerDailyTaskComp>::~weak_ptr(&v18);
        }
        break;
      case DAILY_FINISH_CHALLENGE:
        value._M_target = getInternalPlayerEventType<ChallengeFinishEvent>()._M_target;
        if ( !common::tools::MiscUtils::isContains<std::unordered_map<std::type_index,std::weak_ptr<Observer>>,std::type_index>(
                &this->observer_map_,
                &value) )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v13 = Player::getEventComp(this->player_);
          std::weak_ptr<PlayerDailyTaskComp>::weak_ptr(
            &v18,
            (const std::weak_ptr<PlayerDailyTaskComp> *)(p_pending_que + 64));
          PlayerEventComp::registerObserver<PlayerDailyTaskComp,ChallengeFinishEvent>(
            &varC0,
            (std::weak_ptr<PlayerDailyTaskComp> *)v13,
            (void (*)(PlayerDailyTaskComp *, const ChallengeFinishEvent *))&v18);
          value._M_target = getInternalPlayerEventType<ChallengeFinishEvent>()._M_target;
          v14 = std::unordered_map<std::type_index,std::weak_ptr<Observer>>::operator[](&this->observer_map_, &value);
          std::weak_ptr<Observer>::operator=(v14, (std::weak_ptr<Observer> *)&varC0);
          std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&varC0);
          std::weak_ptr<PlayerDailyTaskComp>::~weak_ptr(&v18);
        }
        break;
      default:
        break;
    }
    value._M_target = getInternalPlayerEventType<GroupsReplaceEvent>()._M_target;
    if ( !common::tools::MiscUtils::isContains<std::unordered_map<std::type_index,std::weak_ptr<Observer>>,std::type_index>(
            &this->observer_map_,
            &value) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v15 = Player::getEventComp(this->player_);
      std::weak_ptr<PlayerDailyTaskComp>::weak_ptr(
        &v18,
        (const std::weak_ptr<PlayerDailyTaskComp> *)(p_pending_que + 64));
      PlayerEventComp::registerObserver<PlayerDailyTaskComp,GroupsReplaceEvent>(
        &varC0,
        (std::weak_ptr<PlayerDailyTaskComp> *)v15,
        (void (*)(PlayerDailyTaskComp *, const GroupsReplaceEvent *))&v18);
      value._M_target = getInternalPlayerEventType<GroupsReplaceEvent>()._M_target;
      v16 = std::unordered_map<std::type_index,std::weak_ptr<Observer>>::operator[](&this->observer_map_, &value);
      std::weak_ptr<Observer>::operator=(v16, (std::weak_ptr<Observer> *)&varC0);
      std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&varC0);
      std::weak_ptr<PlayerDailyTaskComp>::~weak_ptr(&v18);
    }
    std::weak_ptr<PlayerDailyTaskComp>::~weak_ptr((std::weak_ptr<PlayerDailyTaskComp> *const)(p_pending_que + 64));
  }
  std::shared_ptr<PlayerDailyTaskComp>::~shared_ptr((std::shared_ptr<PlayerDailyTaskComp> *const)(p_pending_que + 32));
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

// Line 996: range 00000000141918C2-0000000014192050
void __fastcall PlayerDailyTaskComp::onQuestNotify(
        PlayerDailyTaskComp *const this,
        uint32_t task_id,
        data::QuestState state)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  PlayerSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v17; // rbx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // r14
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rbx
  common::milog::MiLogStream *v23; // rax
  unsigned int val; // [rsp+14h] [rbp-CCh] BYREF
  const data::DailyTaskExcelConfig *task_config_ptr; // [rsp+18h] [rbp-C8h]
  std::shared_ptr<Config> v27; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v28; // [rsp+30h] [rbp-B0h] BYREF
  char v29[144]; // [rsp+50h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 11 task_id:995 64 4 9 state:995";
  *(_QWORD *)(v3 + 16) = PlayerDailyTaskComp::onQuestNotify;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 48) = task_id;
  *(_DWORD *)(v3 + 64) = state;
  common::milog::MiLogStream::create(
    &v28,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "./src/player/player_daily_task_comp.cpp",
    "onQuestNotify",
    997);
  v6 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v28, (const char (*)[15])"onQuestNotify ");
  v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
  v8 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v7, (const char (*)[2])" ");
  v9 = common::milog::MiLogStream::operator<<<data::QuestState,(data::QuestState*)0>(
         v8,
         (const data::QuestState *)(v3 + 64));
  v10 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v9, (const char (*)[7])" uid: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
  common::milog::MiLogStream::~MiLogStream(&v28);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v27);
  v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v27);
  task_config_ptr = data::DailyTaskExcelConfigMgrBase::findDailyTaskExcelConfig(
                      &v11->design_config.txt_config_mgr.daily_task_config_mgr,
                      *(_DWORD *)(v3 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v27);
  if ( !task_config_ptr )
    goto LABEL_10;
  if ( *(_BYTE *)(((unsigned __int64)&task_config_ptr->type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)task_config_ptr + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&task_config_ptr->type >> 3)
                                                                   + 0x7FFF8000) )
  {
    __asan_report_load4(&task_config_ptr->type);
  }
  if ( task_config_ptr->type == DAILY_TASK_QUEST )
  {
    if ( *(_DWORD *)(v3 + 64) == 3 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      SceneComp = Player::getSceneComp(this->player_);
      if ( !PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
      {
        common::milog::MiLogStream::create(
          &v28,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/player_daily_task_comp.cpp",
          "onQuestNotify",
          1010);
        v17 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v28, (const char (*)[6])"uid: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &val);
        common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v18, (const char (*)[19])" not in self world");
        common::milog::MiLogStream::~MiLogStream(&v28);
      }
      else if ( !common::tools::MiscUtils::isContains<std::map<unsigned int,DailyTaskInfo>,unsigned int>(
                   &this->task_map_,
                   (const unsigned int *)(v3 + 48)) )
      {
        common::milog::MiLogStream::create(
          &v28,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/player_daily_task_comp.cpp",
          "onQuestNotify",
          1015);
        v19 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v28, (const char (*)[5])"uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &val);
        v21 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                v20,
                (const char (*)[18])" has not task_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v28);
      }
      else if ( PlayerDailyTaskComp::tryRefresh(this, 1) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&task_config_ptr->finish_progress >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)task_config_ptr - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&task_config_ptr->finish_progress >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4(&task_config_ptr->finish_progress);
        }
        PlayerDailyTaskComp::addDailyTaskProgress(this, *(_DWORD *)(v3 + 48), task_config_ptr->finish_progress);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v28,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/player_daily_task_comp.cpp",
          "onQuestNotify",
          1022);
        v22 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v28, (const char (*)[5])"uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &val);
        common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v23, (const char (*)[21])" tryRefresh return 0");
        common::milog::MiLogStream::~MiLogStream(&v28);
      }
    }
  }
  else
  {
LABEL_10:
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_daily_task_comp.cpp",
      "onQuestNotify",
      1001);
    v12 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v28, (const char (*)[6])"uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
    v14 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v13, (const char (*)[11])" task_id: ");
    v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v15, (const char (*)[23])"  is not quest type!!!");
    common::milog::MiLogStream::~MiLogStream(&v28);
  }
  if ( v29 == (char *)v3 )
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

// Line 1030: range 00000000141920F6-0000000014192C77
void __fastcall PlayerDailyTaskComp::addDailyTaskProgress(
        PlayerDailyTaskComp *const this,
        __int32 task_id,
        __int32 finish_progress)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  PlayerBasicComp *BasicComp; // rax
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,DailyTaskInfo> >::pointer v11; // rdx
  bool *p_is_finished; // rax
  common::milog::MiLogStream *v13; // r14
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,DailyTaskInfo> >::pointer v17; // rax
  uint32_t *p_progress; // rax
  common::milog::MiLogStream *v19; // rax
  __int64 v20; // rsi
  bool v21; // cl
  char v22; // dl
  __int64 v23; // rdx
  __int64 v24; // rdx
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  std::string v29; // [rsp+0h] [rbp-150h]
  char *v30; // [rsp+0h] [rbp-150h]
  common::milog::MiLogStream *v31; // [rsp+8h] [rbp-148h]
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // [rsp+8h] [rbp-148h]
  google::protobuf::uint32 finish_progressa; // [rsp+10h] [rbp-140h]
  PlayerDailyTaskComp *thisa; // [rsp+18h] [rbp-138h]
  unsigned int val; // [rsp+20h] [rbp-130h] BYREF
  uint32_t owner_uid; // [rsp+24h] [rbp-12Ch]
  std::_Rb_tree_iterator<std::pair<unsigned int const,DailyTaskInfo> >::_Self __y; // [rsp+28h] [rbp-128h] BYREF
  DailyTaskInfo *info; // [rsp+30h] [rbp-120h]
  proto::DailyTaskInfo *task_proto; // [rsp+38h] [rbp-118h]
  std::string v40; // [rsp+40h] [rbp-110h] BYREF
  char v41[240]; // [rsp+60h] [rbp-F0h] BYREF
  PlayerDailyTaskComp::addDailyTaskProgress::<lambda(Player&)> v42; // 0:rsi.8,8:edx.4

  *(&v29._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  HIDWORD(v29._anon_0._M_allocated_capacity) = task_id;
  *(_DWORD *)v29._anon_0._M_local_buf = finish_progress;
  v3 = (unsigned __int64)v41;
  v29._M_dataplus._M_p = v41;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 1 11 holder:1031 48 4 12 task_id:1029 64 8 9 iter:1033 96 16 17 my_world_ptr:1072 128 32 11 notify:1051";
  *(_QWORD *)(v3 + 16) = PlayerDailyTaskComp::addDailyTaskProgress;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556927;
  v5[536862722] = -218959360;
  v5[536862723] = -219021312;
  v5[536862725] = -202116109;
  *(_DWORD *)(v3 + 48) = task_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Player::getBasicComp(this->player_);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v40, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32), 0x836u, v29);
  std::string::~string(&v40);
  *(std::map<unsigned int,DailyTaskInfo>::iterator *)(v3 + 64) = std::map<unsigned int,DailyTaskInfo>::find(
                                                                   &thisa->task_map_,
                                                                   (const std::map<unsigned int,DailyTaskInfo>::key_type *)(v3 + 48));
  __y._M_node = std::map<unsigned int,DailyTaskInfo>::end(&thisa->task_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,DailyTaskInfo> >::_Self *)(v3 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v40,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_daily_task_comp.cpp",
      "addDailyTaskProgress",
      1036);
    v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
           (common::milog::MiLogStream *const)&v40,
           (const char (*)[6])"uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(thisa->player_);
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v8, (const char (*)[16])" find task_id: ");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v10, (const char (*)[7])" fails");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v40);
  }
  else
  {
    v11 = std::_Rb_tree_iterator<std::pair<unsigned int const,DailyTaskInfo>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,DailyTaskInfo> > *const)(v3 + 64));
    p_is_finished = &v11->second.is_finished;
    if ( *(_BYTE *)(((unsigned __int64)p_is_finished >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_finished & 7) >= *(_BYTE *)(((unsigned __int64)p_is_finished >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(p_is_finished);
    }
    if ( v11->second.is_finished )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v40,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player_daily_task_comp.cpp",
        "addDailyTaskProgress",
        1041);
      v13 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
              (common::milog::MiLogStream *const)&v40,
              (const char (*)[6])"uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(thisa->player_);
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      v15 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v14, (const char (*)[11])" task_id: ");
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v16, (const char (*)[18])" already finished");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v40);
    }
    else
    {
      v17 = std::_Rb_tree_iterator<std::pair<unsigned int const,DailyTaskInfo>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,DailyTaskInfo> > *const)(v3 + 64));
      info = &v17->second;
      p_progress = &v17->second.progress;
      if ( *(_BYTE *)(((unsigned __int64)p_progress >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_progress & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_progress >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_progress);
      }
      ++info->progress;
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v40,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/player_daily_task_comp.cpp",
        "addDailyTaskProgress",
        1047);
      v19 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
              (common::milog::MiLogStream *const)&v40,
              (const char (*)[36])"[CHANLLENGE] addDailyTaskProgress: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &info->progress);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v40);
      v20 = (((_BYTE)info + 8) & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)&info->progress >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)info + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&info->progress >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&info->progress);
      }
      v21 = finish_progressa <= info->progress;
      v22 = *(_BYTE *)(((unsigned __int64)&info->is_finished >> 3) + 0x7FFF8000);
      LOBYTE(v20) = v22 != 0;
      v23 = (v22 != 0) & (unsigned __int8)((((unsigned __int8)info + 12) & 7) >= v22);
      if ( (_BYTE)v23 )
        __asan_report_store1(&info->is_finished, v20, v23);
      info->is_finished = v21;
      proto::DailyTaskProgressNotify::DailyTaskProgressNotify((proto::DailyTaskProgressNotify *const)(v3 + 128));
      task_proto = proto::DailyTaskProgressNotify::mutable_info((proto::DailyTaskProgressNotify *const)(v3 + 128));
      proto::DailyTaskInfo::set_daily_task_id(task_proto, *(_DWORD *)(v3 + 48));
      if ( *(_BYTE *)(((unsigned __int64)&info->preview_reward_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)info + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&info->preview_reward_id >> 3)
                                                           + 0x7FFF8000) )
      {
        __asan_report_load4(&info->preview_reward_id);
      }
      proto::DailyTaskInfo::set_reward_id(task_proto, info->preview_reward_id);
      if ( *(_BYTE *)(((unsigned __int64)&info->progress >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)info + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&info->progress >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&info->progress);
      }
      proto::DailyTaskInfo::set_progress(task_proto, info->progress);
      proto::DailyTaskInfo::set_finish_progress(task_proto, finish_progressa);
      if ( *(_BYTE *)(((unsigned __int64)&info->is_finished >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)info + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&info->is_finished >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&info->is_finished);
      }
      proto::DailyTaskInfo::set_is_finished(task_proto, info->is_finished);
      if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::sendProto(thisa->player_, (const google::protobuf::Message *)(v3 + 128));
      if ( *(_BYTE *)(((unsigned __int64)&info->is_finished >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)info + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&info->is_finished >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&info->is_finished);
      }
      if ( info->is_finished )
      {
        v24 = (*(_BYTE *)(((unsigned __int64)&info->progress >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)info + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&info->progress >> 3) + 0x7FFF8000));
        if ( (_BYTE)v24 )
          __asan_report_store4(&info->progress, (((_BYTE)info + 8) & 7u) + 3, v24);
        info->progress = finish_progressa;
        PlayerDailyTaskComp::takeDailyTaskReward(thisa, *(_DWORD *)(v3 + 48), info);
        PlayerDailyTaskComp::execFinishAction(thisa, *(_DWORD *)(v3 + 48));
        PlayerDailyTaskComp::onDailyTaskFinish(thisa, *(_DWORD *)(v3 + 48));
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v40,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/player_daily_task_comp.cpp",
          "addDailyTaskProgress",
          1066);
        v25 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                (common::milog::MiLogStream *const)&v40,
                (const char (*)[11])"take task ");
        v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v25,
                (const unsigned int *)(v3 + 48));
        v27 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v26, (const char (*)[11])" drop_id: ");
        v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, &info->drop_id);
        v31 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v28, (const char (*)[7])" uid: ");
        if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(thisa->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, &val);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v40);
        PlayerDailyTaskComp::clearGroupOnFinish(thisa, *(_DWORD *)(v3 + 48));
      }
      if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::getSceneComp(thisa->player_);
      PlayerSceneComp::getMyPlayerWorld((const PlayerSceneComp *const)(v3 + 96));
      if ( std::operator!=<PlayerWorld>((const std::shared_ptr<PlayerWorld> *)(v3 + 96), 0LL) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        owner_uid = Player::getUid(thisa->player_);
        v32 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        v42.__owner_uid = owner_uid;
        v42.__notify = (proto::DailyTaskProgressNotify *)(v3 + 128);
        std::function<ForeachPolicy ()(Player &)>::function<PlayerDailyTaskComp::addDailyTaskProgress(unsigned int,unsigned int)::{lambda(Player &)#1},void,void>(
          (std::function<ForeachPolicy(Player&)> *const)&v40,
          v42);
        World::foreachPlayer(v32, (std::function<ForeachPolicy(Player&)> *)&v40);
        std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v40);
      }
      PlayerDailyTaskComp::logDailyTaskProgress(thisa, *(_DWORD *)(v3 + 48), info);
      std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v3 + 96));
      proto::DailyTaskProgressNotify::~DailyTaskProgressNotify((proto::DailyTaskProgressNotify *const)(v3 + 128));
    }
  }
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32));
  if ( v30 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1076: range 0000000014192052-00000000141920F4
ForeachPolicy __cdecl PlayerDailyTaskComp::addDailyTaskProgress(unsigned int,unsigned int)::{lambda(Player &)#1}::operator()(
        const PlayerDailyTaskComp::addDailyTaskProgress::<lambda(Player&)> *const __closure,
        Player *player)
{
  uint32_t Uid; // ecx

  Uid = Player::getUid(player);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__owner_uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&__closure->__owner_uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&__closure->__owner_uid);
  }
  if ( Uid != __closure->__owner_uid )
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::sendProto(player, __closure->__notify);
  }
  return 0;
};

// Line 1090: range 0000000014193342-00000000141939FD
void __cdecl PlayerDailyTaskComp::takeDailyTaskReward(
        PlayerDailyTaskComp *const this,
        uint32_t task_id,
        const DailyTaskInfo *info)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto::ShowMessageNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  uint32_t Uid; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyDailyTaskReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyDailyTaskReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rcx
  common::milog::MiLogStream *v12; // r14
  std::string v13; // [rsp+0h] [rbp-180h]
  char *v14; // [rsp+8h] [rbp-178h]
  std::__shared_ptr_access<proto_log::PlayerLogBodyDailyTaskReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // [rsp+10h] [rbp-170h]
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // [rsp+10h] [rbp-170h]
  const DailyTaskInfo *infoa; // [rsp+18h] [rbp-168h]
  unsigned int val; // [rsp+34h] [rbp-14Ch] BYREF
  uint32_t max_num; // [rsp+38h] [rbp-148h]
  uint32_t owner_uid; // [rsp+3Ch] [rbp-144h]
  std::shared_ptr<Config> v21; // [rsp+40h] [rbp-140h] BYREF
  std::string v22; // [rsp+50h] [rbp-130h] BYREF
  char v23[272]; // [rsp+70h] [rbp-110h] BYREF
  PlayerDailyTaskComp::takeDailyTaskReward::<lambda(Player&)> v24; // 0:rsi.8,8:rdx.8

  *(&v13._anon_0._M_allocated_capacity + 1) = (std::string::size_type)info;
  v3 = (unsigned __int64)v23;
  v13._M_string_length = (std::string::size_type)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 1 11 holder:1091 48 16 15 notify_ptr:1093 80 16 12 log_ptr:1098 112 16 17 my_world_ptr:1129"
                        " 144 40 9 func:1103";
  *(_QWORD *)(v3 + 16) = PlayerDailyTaskComp::takeDailyTaskReward;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61953;
  v5[536862722] = 62194;
  v5[536862723] = 62194;
  v5[536862724] = 62194;
  v5[536862725] = -218103808;
  v5[536862726] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Player::getBasicComp(this->player_);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v22, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32), 0x83Bu, v13);
  std::string::~string(&v22);
  common::tools::perf::make_shared<proto::ShowMessageNotify>();
  v7 = std::__shared_ptr_access<proto::ShowMessageNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::ShowMessageNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
  proto::ShowMessageNotify::set_msg_id(v7, MSG_DAILY_TASK_REWARD_MAX_NUM);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v21);
  v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21);
  max_num = ConstValueExcelConfigMgr::getDailyTaskRewardMaxNum(&v8->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v21);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyDailyTaskReward>();
  v15 = std::__shared_ptr_access<proto_log::PlayerLogBodyDailyTaskReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDailyTaskReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Uid = Player::getUid(this->player_);
  proto_log::PlayerLogBodyDailyTaskReward::set_owner_uid(v15, Uid);
  v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyDailyTaskReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDailyTaskReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
  proto_log::PlayerLogBodyDailyTaskReward::set_daily_task_id(v10, task_id);
  v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyDailyTaskReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDailyTaskReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
  if ( *(_BYTE *)(((unsigned __int64)infoa >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)infoa & 7) + 3) >= *(_BYTE *)(((unsigned __int64)infoa >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(infoa);
  }
  proto_log::PlayerLogBodyDailyTaskReward::set_drop_id(v11, infoa->drop_id);
  *(_QWORD *)(v3 + 144) = infoa;
  std::shared_ptr<proto::ShowMessageNotify>::shared_ptr(
    (std::shared_ptr<proto::ShowMessageNotify> *const)(v3 + 152),
    (const std::shared_ptr<proto::ShowMessageNotify> *)(v3 + 48));
  *(_QWORD *)(v3 + 168) = v3 + 80;
  *(_DWORD *)(v3 + 176) = max_num;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  PlayerDailyTaskComp::takeDailyTaskReward(unsigned int,DailyTaskInfo const&)::{lambda(Player &,unsigned int,proto::ActionReasonType)#1}::operator()(
    (const PlayerDailyTaskComp::takeDailyTaskReward::<lambda(Player&, uint32_t, proto::ActionReasonType)> *const)(v3 + 144),
    this->player_,
    task_id,
    ACTION_REASON_DAILY_TASK_HOST);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  owner_uid = Player::getUid(this->player_);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getMyPlayerWorld((const PlayerSceneComp *const)(v3 + 112));
  if ( std::operator!=<PlayerWorld>((const std::shared_ptr<PlayerWorld> *)(v3 + 112), 0LL) )
  {
    v16 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
    v24.__owner_uid = owner_uid;
    v24.__task_id = task_id;
    v24.__func = (PlayerDailyTaskComp::takeDailyTaskReward::<lambda(Player&, uint32_t, proto::ActionReasonType)> *)(v3 + 144);
    std::function<ForeachPolicy ()(Player &)>::function<PlayerDailyTaskComp::takeDailyTaskReward(unsigned int,DailyTaskInfo const&)::{lambda(Player &)#2},void,void>(
      (std::function<ForeachPolicy(Player&)> *const)&v22,
      v24);
    World::foreachPlayer(v16, (std::function<ForeachPolicy(Player&)> *)&v22);
    std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v22);
  }
  else
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_daily_task_comp.cpp",
      "takeDailyTaskReward",
      1144);
    v12 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
            (common::milog::MiLogStream *const)&v22,
            (const char (*)[30])"getMyPlayerWorld fails, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v22);
  }
  std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v3 + 112));
  PlayerDailyTaskComp::takeDailyTaskReward(unsigned int,DailyTaskInfo const&)::{lambda(Player &,unsigned int,proto::ActionReasonType)#1}::~ActionReasonType((PlayerDailyTaskComp::takeDailyTaskReward::<lambda(Player&, uint32_t, proto::ActionReasonType)> *const)(v3 + 144));
  std::shared_ptr<proto_log::PlayerLogBodyDailyTaskReward>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyDailyTaskReward> *const)(v3 + 80));
  std::shared_ptr<proto::ShowMessageNotify>::~shared_ptr((std::shared_ptr<proto::ShowMessageNotify> *const)(v3 + 48));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32));
  if ( v14 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = -168430091;
  }
};

// Line 1103: range 0000000014192C78-0000000014193232
void __fastcall PlayerDailyTaskComp::takeDailyTaskReward(unsigned int,DailyTaskInfo const&)::{lambda(Player &,unsigned int,proto::ActionReasonType)#1}::operator()(
        unsigned __int64 __closure,
        Player *player,
        uint32_t task_id,
        proto::ActionReasonType reason)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  PlayerDailyTaskComp *DailyTaskComp; // rax
  PlayerDailyTaskComp *v8; // rax
  PlayerDailyTaskComp *v9; // rdx
  uint32_t *p_finished_num; // rax
  uint32_t finished_num; // ecx
  PlayerDailyTaskComp *v12; // rax
  PlayerItemComp *ItemComp; // r14
  const DailyTaskInfo *v15; // rdx
  common::milog::MiLogStream *v16; // r14
  common::milog::MiLogStream *v17; // rax
  PlayerEventComp *EventComp; // r14
  unsigned int val; // [rsp+2Ch] [rbp-F4h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+30h] [rbp-F0h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+40h] [rbp-E0h] BYREF
  ActionReason v24; // [rsp+50h] [rbp-D0h] BYREF
  common::milog::MiLogStream v25; // [rsp+70h] [rbp-B0h] BYREF
  char v26[144]; // [rsp+90h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 1 20 is_grant_reward:1107 64 4 12 task_id:1103";
  *(_QWORD *)(v4 + 16) = PlayerDailyTaskComp::takeDailyTaskReward(unsigned int,DailyTaskInfo const&)::{lambda(Player &,unsigned int,proto::ActionReasonType)#1}::operator();
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -202116348;
  *(_DWORD *)(v4 + 64) = task_id;
  DailyTaskComp = Player::getDailyTaskComp(player);
  if ( *(_BYTE *)(((unsigned __int64)&DailyTaskComp->finished_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)DailyTaskComp + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&DailyTaskComp->finished_num_ >> 3)
                                                                 + 0x7FFF8000) )
  {
    __asan_report_load4(&DailyTaskComp->finished_num_);
  }
  ++DailyTaskComp->finished_num_;
  v8 = Player::getDailyTaskComp(player);
  if ( *(_BYTE *)(((unsigned __int64)&v8->total_reward_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->total_reward_num_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->total_reward_num_);
  }
  ++v8->total_reward_num_;
  *(_BYTE *)(v4 + 48) = 0;
  v9 = Player::getDailyTaskComp(player);
  p_finished_num = &v9->finished_num_;
  if ( *(_BYTE *)(((unsigned __int64)p_finished_num >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)p_finished_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_finished_num >> 3)
                                                                     + 0x7FFF8000) )
  {
    __asan_report_load4(p_finished_num);
  }
  finished_num = v9->finished_num_;
  if ( *(_BYTE *)(((__closure + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((__closure + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(__closure + 32);
  if ( finished_num <= *(_DWORD *)(__closure + 32)
    && (v12 = Player::getDailyTaskComp(player), PlayerDailyTaskComp::isOpen(v12)) )
  {
    ItemComp = Player::getItemComp(player);
    ActionReason::ActionReason(&v24, reason, ITEM_LIMIT_DAILY_TASK);
    if ( *(_BYTE *)((__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v15 = *(const DailyTaskInfo **)__closure;
    if ( *(_BYTE *)((*(_QWORD *)__closure >> 3) + 0x7FFF8000LL) != 0
      && (char)((*(_QWORD *)__closure & 7) + 3) >= *(_BYTE *)((*(_QWORD *)__closure >> 3) + 0x7FFF8000LL) )
    {
      __asan_report_load4(*(_QWORD *)__closure);
    }
    PlayerItemComp::grantDropItems(ItemComp, v15->drop_id, 1u, &v24, 0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
    if ( *(_BYTE *)(((__closure + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyDailyTaskReward,void>(
      &p_body_ptr,
      *(const std::shared_ptr<proto_log::PlayerLogBodyDailyTaskReward> **)(__closure + 24));
    Player::printStatLog(player, &p_body_ptr, &p_body_ext_ptr, 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
    *(_BYTE *)(v4 + 48) = 1;
  }
  else
  {
    std::dynamic_pointer_cast<google::protobuf::Message const,proto::ShowMessageNotify>((const std::shared_ptr<proto::ShowMessageNotify> *)&p_body_ext_ptr);
    Player::sendMessage(player, (common::minet::ConstMessagePtr *)&p_body_ext_ptr, 0LL);
    std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&p_body_ext_ptr);
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/player_daily_task_comp.cpp",
      "operator()",
      1118);
    v16 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v25, (const char (*)[6])"uid: ");
    val = Player::getUid(player);
    v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &val);
    common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
      v17,
      (const char (*)[43])" reach daily task reward limit or not open");
    common::milog::MiLogStream::~MiLogStream(&v25);
  }
  EventComp = Player::getEventComp(player);
  common::tools::perf::make_shared<DailyTaskRewardEvent,unsigned int &,bool &>(
    (unsigned int *)&p_body_ptr,
    (bool *)(v4 + 64),
    (unsigned int *)(v4 + 48),
    (bool *)(v4 + 64));
  std::shared_ptr<BaseEvent>::shared_ptr<DailyTaskRewardEvent,void>(
    (std::shared_ptr<BaseEvent> *const)&p_body_ext_ptr,
    (std::shared_ptr<DailyTaskRewardEvent> *)&p_body_ptr);
  PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&p_body_ext_ptr);
  std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&p_body_ext_ptr);
  std::shared_ptr<DailyTaskRewardEvent>::~shared_ptr((std::shared_ptr<DailyTaskRewardEvent> *const)&p_body_ptr);
  if ( v26 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 1103: range 0000000014193234-0000000014193252
void __cdecl PlayerDailyTaskComp::takeDailyTaskReward(unsigned int,DailyTaskInfo const&)::{lambda(Player &,unsigned int,proto::ActionReasonType)#1}::~ActionReasonType(
        PlayerDailyTaskComp::takeDailyTaskReward::<lambda(Player&, uint32_t, proto::ActionReasonType)> *const this)
{
  std::shared_ptr<proto::ShowMessageNotify>::~shared_ptr(&this->__notify_ptr);
};

// Line 1132: range 0000000014193254-0000000014193341
ForeachPolicy __cdecl PlayerDailyTaskComp::takeDailyTaskReward(unsigned int,DailyTaskInfo const&)::{lambda(Player &)#2}::operator()(
        const PlayerDailyTaskComp::takeDailyTaskReward::<lambda(Player&)> *const __closure,
        Player *player)
{
  uint32_t Uid; // ecx
  void *func; // rdi

  Uid = Player::getUid(player);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__owner_uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&__closure->__owner_uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&__closure->__owner_uid);
  }
  if ( Uid == __closure->__owner_uid )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  func = __closure->__func;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__task_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)__closure + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&__closure->__task_id >> 3)
                                                             + 0x7FFF8000) )
  {
    func = &__closure->__task_id;
    __asan_report_load4(&__closure->__task_id);
  }
  PlayerDailyTaskComp::takeDailyTaskReward(unsigned int,DailyTaskInfo const&)::{lambda(Player &,unsigned int,proto::ActionReasonType)#1}::operator()(
    (unsigned __int64)func,
    player,
    __closure->__task_id,
    ACTION_REASON_DAILY_TASK_GUEST);
  return 0;
};

// Line 1149: range 00000000141939FE-0000000014193E12
void __cdecl PlayerDailyTaskComp::registerTalkEventObserver(PlayerDailyTaskComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  char v4; // al
  common::milog::MiLogStream *v5; // r14
  common::milog::MiLogStream *v6; // r14
  std::weak_ptr<PlayerDailyTaskComp> *p_this_wtr; // [rsp+10h] [rbp-D0h]
  unsigned int val; // [rsp+2Ch] [rbp-B4h] BYREF
  std::weak_ptr<PlayerDailyTaskComp> v9; // [rsp+30h] [rbp-B0h] BYREF
  std::weak_ptr<Observer> __r; // [rsp+40h] [rbp-A0h] BYREF
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
  *(_QWORD *)(v1 + 8) = "1 32 16 13 this_ptr:1154";
  *(_QWORD *)(v1 + 16) = PlayerDailyTaskComp::registerTalkEventObserver;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( !std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->talk_observer_) )
    goto LABEL_8;
  if ( *(char *)(((unsigned __int64)&this->is_taken_score_reward_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_taken_score_reward_);
  if ( this->is_taken_score_reward_ )
LABEL_8:
    v4 = 1;
  else
    v4 = 0;
  if ( !v4 )
  {
    toThisPtr<PlayerDailyTaskComp>((PlayerDailyTaskComp *)(v1 + 32));
    if ( std::operator==<PlayerDailyTaskComp>(0LL, (const std::shared_ptr<PlayerDailyTaskComp> *)(v1 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player_daily_task_comp.cpp",
        "registerTalkEventObserver",
        1157);
      v5 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
             &v11,
             (const char (*)[44])"toThisPtr<PlayerDailyTaskComp> fails, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
      common::milog::MiLogStream::~MiLogStream(&v11);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      p_this_wtr = (std::weak_ptr<PlayerDailyTaskComp> *)Player::getEventComp(this->player_);
      std::weak_ptr<PlayerDailyTaskComp>::weak_ptr<PlayerDailyTaskComp,void>(
        &v9,
        (const std::shared_ptr<PlayerDailyTaskComp> *)(v1 + 32));
      PlayerEventComp::registerObserver<PlayerDailyTaskComp,CompleteTalkEvent>(
        (PlayerEventComp *const)&__r,
        p_this_wtr,
        (void (*)(PlayerDailyTaskComp *, const CompleteTalkEvent *))&v9);
      std::weak_ptr<Observer>::operator=(&this->talk_observer_, &__r);
      std::weak_ptr<Observer>::~weak_ptr(&__r);
      std::weak_ptr<PlayerDailyTaskComp>::~weak_ptr(&v9);
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/player_daily_task_comp.cpp",
        "registerTalkEventObserver",
        1161);
      v6 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
             &v11,
             (const char (*)[25])"registerTalkEvent, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
      common::milog::MiLogStream::~MiLogStream(&v11);
    }
    std::shared_ptr<PlayerDailyTaskComp>::~shared_ptr((std::shared_ptr<PlayerDailyTaskComp> *const)(v1 + 32));
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

// Line 1165: range 0000000014193E14-0000000014193ED1
void __cdecl PlayerDailyTaskComp::onFinishTalk(PlayerDailyTaskComp *const this, const CompleteTalkEvent *event)
{
  uint32_t talk_id; // ebx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  std::shared_ptr<Config> v4[2]; // [rsp+10h] [rbp-20h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&event->talk_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->talk_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->talk_id);
  }
  talk_id = event->talk_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v4);
  v3 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v4);
  LOBYTE(talk_id) = talk_id != ConstValueExcelConfigMgr::getDailyTaskRewardTalk(&v3->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(v4);
  if ( !(_BYTE)talk_id )
  {
    PlayerDailyTaskComp::tryRefresh(this, 1);
    PlayerDailyTaskComp::takeScoreReward(this);
  }
};

// Line 1178: range 0000000014193ED2-00000000141949ED
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl PlayerDailyTaskComp::takeScoreReward(PlayerDailyTaskComp *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  PlayerBasicComp *BasicComp; // rax
  PlayerSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // rax
  int32_t v8; // r14d
  uint32_t v9; // r14d
  GameserverService *v10; // rsi
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  common::milog::MiLogStream *v15; // rax
  DailyTaskExcelConfigMgr *p_daily_task_config_mgr; // rcx
  PlayerItemComp *ItemComp; // rax
  PlayerItemComp *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // r14
  std::__shared_ptr_access<proto::DailyTaskScoreRewardNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  Player *v23; // r14
  std::__shared_ptr_access<proto_log::PlayerLogBodyDailyTaskScoreReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  Player *v25; // r14
  int32_t result; // eax
  std::string v27; // [rsp+0h] [rbp-160h] OVERLAPPED BYREF
  uint32_t score_preview_reward_id; // [rsp+20h] [rbp-140h]
  int32_t ret; // [rsp+24h] [rbp-13Ch]
  const data::DailyTaskLevelExcelConfig *score_config_ptr; // [rsp+28h] [rbp-138h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+30h] [rbp-130h] BYREF
  std::shared_ptr<google::protobuf::Message> v32; // [rsp+40h] [rbp-120h] BYREF
  std::string v33; // [rsp+50h] [rbp-110h] BYREF
  char v34[240]; // [rsp+70h] [rbp-F0h] BYREF

  v27._M_string_length = (std::string::size_type)this;
  v1 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(192LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "5 32 1 11 holder:1179 48 4 18 score_drop_id:1198 64 16 15 notify_ptr:1219 96 16 12 log_ptr:1223 "
                        "128 24 18 action_reason:1208";
  *(_QWORD *)(v1 + 16) = PlayerDailyTaskComp::takeScoreReward;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556927;
  v3[536862722] = -219021312;
  v3[536862723] = -219021312;
  v3[536862724] = -218103808;
  v3[536862725] = -202116109;
  if ( *(_BYTE *)(((v27._M_string_length + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Player::getBasicComp(*(Player *const *)(v27._M_string_length + 24));
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v33, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 32), 0x83Au, v27);
  std::string::~string(&v33);
  if ( *(_BYTE *)(((v27._M_string_length + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = Player::getSceneComp(*(Player *const *)(v27._M_string_length + 24));
  if ( !PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v33,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_daily_task_comp.cpp",
      "takeScoreReward",
      1182);
    v6 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
           (common::milog::MiLogStream *const)&v33,
           (const char (*)[6])"uid: ");
    if ( *(_BYTE *)(((v27._M_string_length + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *((_DWORD *)&v27._anon_0._M_allocated_capacity + 3) = Player::getUid(*(const Player *const *)(v27._M_string_length
                                                                                                + 24));
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
           v6,
           (const unsigned int *)&v27._anon_0._M_allocated_capacity + 3);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v7, (const char (*)[19])" not in self world");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v33);
    v8 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v27._M_string_length + 92) >> 3) + 0x7FFF8000) != 0
      && (char)(((LOBYTE(v27._M_string_length) + 92) & 7) + 3) >= *(_BYTE *)(((v27._M_string_length + 92) >> 3)
                                                                           + 0x7FFF8000) )
    {
      __asan_report_load4(v27._M_string_length + 92);
    }
    v9 = *(_DWORD *)(v27._M_string_length + 92);
    v10 = ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v32);
    v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v32);
    LOBYTE(v9) = v9 < ConstValueExcelConfigMgr::getDailyTaskFinishNum(&v11->design_config.txt_config_mgr.const_value_config_mgr);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v32);
    if ( (_BYTE)v9 )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v33,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/player_daily_task_comp.cpp",
        "takeScoreReward",
        1188);
      v12 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
              (common::milog::MiLogStream *const)&v33,
              (const char (*)[6])"uid: ");
      if ( *(_BYTE *)(((v27._M_string_length + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      *((_DWORD *)&v27._anon_0._M_allocated_capacity + 3) = Player::getUid(*(const Player *const *)(v27._M_string_length
                                                                                                  + 24));
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v12,
              (const unsigned int *)&v27._anon_0._M_allocated_capacity + 3);
      common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
        v13,
        (const char (*)[27])" RET_DAILY_TASK_NOT_FINISH");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v33);
      v8 = 1330;
    }
    else
    {
      if ( *(char *)(((v27._M_string_length + 96) >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(v27._M_string_length + 96);
      if ( *(_BYTE *)(v27._M_string_length + 96) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v33,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/player_daily_task_comp.cpp",
          "takeScoreReward",
          1193);
        v14 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
                (common::milog::MiLogStream *const)&v33,
                (const char (*)[6])"uid: ");
        if ( *(_BYTE *)(((v27._M_string_length + 24) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        *((_DWORD *)&v27._anon_0._M_allocated_capacity + 3) = Player::getUid(*(const Player *const *)(v27._M_string_length + 24));
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v14,
                (const unsigned int *)&v27._anon_0._M_allocated_capacity + 3);
        common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
          v15,
          (const char (*)[26])" RET_DAILY_TAKS_HAS_TAKEN");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v33);
        v8 = 1331;
      }
      else
      {
        if ( *(char *)(((v27._M_string_length + 96) >> 3) + 0x7FFF8000) < 0 )
          __asan_report_store1(v27._M_string_length + 96, v10, v27._M_string_length + 96);
        *(_BYTE *)(v27._M_string_length + 96) = 1;
        *(_DWORD *)(v1 + 48) = 0;
        score_preview_reward_id = 0;
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v32);
        p_daily_task_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v32)->design_config.txt_config_mgr.daily_task_config_mgr;
        if ( *(_BYTE *)(((v27._M_string_length + 88) >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((v27._M_string_length + 88) >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(v27._M_string_length + 88);
        }
        score_config_ptr = DailyTaskExcelConfigMgr::findScoreConfig(
                             p_daily_task_config_mgr,
                             *(_DWORD *)(v27._M_string_length + 88));
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v32);
        if ( score_config_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&score_config_ptr->score_drop_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&score_config_ptr->score_drop_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&score_config_ptr->score_drop_id);
          }
          *(_DWORD *)(v1 + 48) = score_config_ptr->score_drop_id;
          if ( *(_BYTE *)(((unsigned __int64)&score_config_ptr->score_preview_reward_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)score_config_ptr + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&score_config_ptr->score_preview_reward_id >> 3)
                                                                            + 0x7FFF8000) )
          {
            __asan_report_load4(&score_config_ptr->score_preview_reward_id);
          }
          score_preview_reward_id = score_config_ptr->score_preview_reward_id;
        }
        if ( *(_DWORD *)(v1 + 48) )
        {
          ActionReason::ActionReason(
            (ActionReason *const)(v1 + 128),
            ACTION_REASON_DAILY_TASK_SCORE,
            ITEM_LIMIT_DAILY_TASK_SCORE);
          if ( *(_BYTE *)(((v27._M_string_length + 24) >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          ItemComp = Player::getItemComp(*(Player *const *)(v27._M_string_length + 24));
          ret = PlayerItemComp::checkGrantDropItems(
                  ItemComp,
                  *(_DWORD *)(v1 + 48),
                  1u,
                  (const ActionReason *)(v1 + 128));
          if ( ret )
          {
            v8 = ret;
            goto LABEL_49;
          }
          if ( *(_BYTE *)(((v27._M_string_length + 24) >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v18 = Player::getItemComp(*(Player *const *)(v27._M_string_length + 24));
          PlayerItemComp::grantDropItems(v18, *(_DWORD *)(v1 + 48), 1u, (const ActionReason *)(v1 + 128), 0LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v33,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/player_daily_task_comp.cpp",
          "takeScoreReward",
          1217);
        v19 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                (common::milog::MiLogStream *const)&v33,
                (const char (*)[17])"takeScoreReward ");
        v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v19,
                (const unsigned int *)(v1 + 48));
        v21 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v20, (const char (*)[7])" uid: ");
        if ( *(_BYTE *)(((v27._M_string_length + 24) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        *((_DWORD *)&v27._anon_0._M_allocated_capacity + 3) = Player::getUid(*(const Player *const *)(v27._M_string_length + 24));
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
          v21,
          (const unsigned int *)&v27._anon_0._M_allocated_capacity + 3);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v33);
        common::tools::perf::make_shared<proto::DailyTaskScoreRewardNotify>();
        v22 = std::__shared_ptr_access<proto::DailyTaskScoreRewardNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::DailyTaskScoreRewardNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
        proto::DailyTaskScoreRewardNotify::set_reward_id(v22, score_preview_reward_id);
        if ( *(_BYTE *)(((v27._M_string_length + 24) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v23 = *(Player **)(v27._M_string_length + 24);
        std::dynamic_pointer_cast<google::protobuf::Message const,proto::DailyTaskScoreRewardNotify>((const std::shared_ptr<proto::DailyTaskScoreRewardNotify> *)&v32);
        Player::sendMessage(v23, (common::minet::ConstMessagePtr *)&v32, 0LL);
        std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&v32);
        common::tools::perf::make_shared<proto_log::PlayerLogBodyDailyTaskScoreReward>();
        v24 = std::__shared_ptr_access<proto_log::PlayerLogBodyDailyTaskScoreReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDailyTaskScoreReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
        proto_log::PlayerLogBodyDailyTaskScoreReward::set_drop_id(v24, *(_DWORD *)(v1 + 48));
        if ( *(_BYTE *)(((v27._M_string_length + 24) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v25 = *(Player **)(v27._M_string_length + 24);
        std::shared_ptr<google::protobuf::Message>::shared_ptr(&v32, 0LL);
        std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyDailyTaskScoreReward,void>(
          &p_body_ptr,
          (const std::shared_ptr<proto_log::PlayerLogBodyDailyTaskScoreReward> *)(v1 + 96));
        Player::printStatLog(v25, &p_body_ptr, &v32, 0xEu);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v32);
        v8 = 0;
        std::shared_ptr<proto_log::PlayerLogBodyDailyTaskScoreReward>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyDailyTaskScoreReward> *const)(v1 + 96));
        std::shared_ptr<proto::DailyTaskScoreRewardNotify>::~shared_ptr((std::shared_ptr<proto::DailyTaskScoreRewardNotify> *const)(v1 + 64));
      }
    }
  }
LABEL_49:
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 32));
  result = v8;
  if ( v34 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1232: range 00000000141949EE-0000000014194B85
__int64 __fastcall PlayerDailyTaskComp::isDailyTaskStarted(const PlayerDailyTaskComp *const this, uint32_t task_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,DailyTaskInfo> >::pointer v5; // rdx
  bool *p_is_finished; // rax
  __int64 result; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,DailyTaskInfo> >::_Self __y; // [rsp+18h] [rbp-88h] BYREF
  char v9[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 task_id:1231 64 8 9 iter:1233";
  *(_QWORD *)(v2 + 16) = PlayerDailyTaskComp::isDailyTaskStarted;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = task_id;
  *(std::map<unsigned int,DailyTaskInfo>::const_iterator *)(v2 + 64) = std::map<unsigned int,DailyTaskInfo>::find(
                                                                         &this->task_map_,
                                                                         (const std::map<unsigned int,DailyTaskInfo>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,DailyTaskInfo>::end(&this->task_map_)._M_node;
  if ( !std::operator!=(
          (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,DailyTaskInfo> >::_Self *)(v2 + 64),
          &__y) )
    goto LABEL_9;
  v5 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,DailyTaskInfo>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,DailyTaskInfo> > *const)(v2 + 64));
  p_is_finished = &v5->second.is_finished;
  if ( *(_BYTE *)(((unsigned __int64)p_is_finished >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)p_is_finished & 7) >= *(_BYTE *)(((unsigned __int64)p_is_finished >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(p_is_finished);
  }
  if ( v5->second.is_finished )
LABEL_9:
    result = 0LL;
  else
    result = 1LL;
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

// Line 1239: range 0000000014194B86-0000000014194CCD
bool __cdecl PlayerDailyTaskComp::isOpen(const PlayerDailyTaskComp *const this)
{
  uint32_t *p_quest_id; // rax
  std::vector<data::CityTaskOpenExcelConfig>::const_iterator __for_begin; // [rsp+18h] [rbp-38h] BYREF
  std::vector<data::CityTaskOpenExcelConfig>::const_iterator __for_end; // [rsp+20h] [rbp-30h] BYREF
  PlayerQuestComp *quest_comp; // [rsp+28h] [rbp-28h]
  const std::vector<data::CityTaskOpenExcelConfig> *__for_range; // [rsp+30h] [rbp-20h]
  const data::CityTaskOpenExcelConfig *city_config; // [rsp+38h] [rbp-18h]
  std::shared_ptr<Config> v8; // [rsp+40h] [rbp-10h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  quest_comp = Player::getQuestComp(this->player_);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v8);
  __for_range = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v8)->design_config.txt_config_mgr.daily_task_config_mgr.city_task_open_excel_config_vec;
  std::shared_ptr<Config>::~shared_ptr(&v8);
  __for_begin._M_current = std::vector<data::CityTaskOpenExcelConfig>::begin(__for_range)._M_current;
  __for_end._M_current = std::vector<data::CityTaskOpenExcelConfig>::end(__for_range)._M_current;
  while ( __gnu_cxx::operator!=<data::CityTaskOpenExcelConfig const*,std::vector<data::CityTaskOpenExcelConfig>>(
            &__for_begin,
            &__for_end) )
  {
    city_config = __gnu_cxx::__normal_iterator<data::CityTaskOpenExcelConfig const*,std::vector<data::CityTaskOpenExcelConfig>>::operator*(&__for_begin);
    p_quest_id = &city_config->quest_id;
    if ( *(_BYTE *)(((unsigned __int64)p_quest_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_quest_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_quest_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_quest_id);
    }
    if ( PlayerQuestComp::getQuestState(quest_comp, city_config->quest_id) == QUEST_STATE_FINISHED )
      return 1;
    __gnu_cxx::__normal_iterator<data::CityTaskOpenExcelConfig const*,std::vector<data::CityTaskOpenExcelConfig>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 1253: range 0000000014194CCE-0000000014194FAE
__int64 __fastcall PlayerDailyTaskComp::addDailyTaskIntoSurePool(PlayerDailyTaskComp *const this, uint32_t task_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // r13
  __int64 result; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  unsigned int val; // [rsp+14h] [rbp-9Ch] BYREF
  const data::DailyTaskExcelConfig *task_config_ptr; // [rsp+18h] [rbp-98h]
  std::shared_ptr<Config> v12; // [rsp+20h] [rbp-90h] BYREF
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
  *(_QWORD *)(v2 + 8) = "1 32 4 12 task_id:1252";
  *(_QWORD *)(v2 + 16) = PlayerDailyTaskComp::addDailyTaskIntoSurePool;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = task_id;
  if ( !PlayerDailyTaskComp::isOpen(this) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_daily_task_comp.cpp",
      "addDailyTaskIntoSurePool",
      1256);
    v5 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
           &v13,
           (const char (*)[20])"isOpen fails, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v12);
    v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v12);
    task_config_ptr = data::DailyTaskExcelConfigMgrBase::findDailyTaskExcelConfig(
                        &v7->design_config.txt_config_mgr.daily_task_config_mgr,
                        *(_DWORD *)(v2 + 32));
    std::shared_ptr<Config>::~shared_ptr(&v12);
    if ( task_config_ptr )
    {
      std::unordered_set<unsigned int>::insert(
        &this->sure_pool_set_,
        (const std::unordered_set<unsigned int>::value_type *)(v2 + 32));
      result = 0LL;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player_daily_task_comp.cpp",
        "addDailyTaskIntoSurePool",
        1262);
      v8 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
             &v13,
             (const char (*)[35])"findDailyTaskExcelConfig task_id: ");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v9, (const char (*)[7])" fails");
      common::milog::MiLogStream::~MiLogStream(&v13);
      result = 0xFFFFFFFFLL;
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
  return result;
};

// Line 1271: range 0000000014194FB0-0000000014195485
__int64 __fastcall PlayerDailyTaskComp::addDailyTaskIntoPossiblePool(
        PlayerDailyTaskComp *const this,
        uint32_t task_id,
        uint32_t next_days)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rbx
  __int64 result; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  std::unordered_set<unsigned int> *v17; // rax
  unsigned int val; // [rsp+14h] [rbp-CCh] BYREF
  const data::DailyTaskExcelConfig *task_config_ptr; // [rsp+18h] [rbp-C8h]
  std::shared_ptr<Config> v21; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v22; // [rsp+30h] [rbp-B0h] BYREF
  char v23[144]; // [rsp+50h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 13 pool_num:1284 48 4 12 task_id:1270 64 4 14 next_days:1270";
  *(_QWORD *)(v3 + 16) = PlayerDailyTaskComp::addDailyTaskIntoPossiblePool;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 48) = task_id;
  *(_DWORD *)(v3 + 64) = next_days;
  if ( !PlayerDailyTaskComp::isOpen(this) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_daily_task_comp.cpp",
      "addDailyTaskIntoPossiblePool",
      1274);
    v6 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
           &v22,
           (const char (*)[20])"isOpen fails, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v22);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v21);
    v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21);
    task_config_ptr = data::DailyTaskExcelConfigMgrBase::findDailyTaskExcelConfig(
                        &v8->design_config.txt_config_mgr.daily_task_config_mgr,
                        *(_DWORD *)(v3 + 48));
    std::shared_ptr<Config>::~shared_ptr(&v21);
    if ( task_config_ptr )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v21);
      v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21);
      *(_DWORD *)(v3 + 32) = ConstValueExcelConfigMgr::getDailyTaskPossiblePoolNum(&v11->design_config.txt_config_mgr.const_value_config_mgr);
      std::shared_ptr<Config>::~shared_ptr(&v21);
      if ( *(_DWORD *)(v3 + 64) >= *(_DWORD *)(v3 + 32) )
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/player_daily_task_comp.cpp",
          "addDailyTaskIntoPossiblePool",
          1287);
        v12 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                &v22,
                (const char (*)[23])"possible pool num is: ");
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v12,
                (const unsigned int *)(v3 + 32));
        v14 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                v13,
                (const char (*)[20])" but next_days is: ");
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v14,
                (const unsigned int *)(v3 + 64));
        v16 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v15, (const char (*)[7])" uid: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &val);
        common::milog::MiLogStream::~MiLogStream(&v22);
        *(_DWORD *)(v3 + 64) = *(_DWORD *)(v3 + 32);
      }
      std::deque<std::unordered_set<unsigned int>>::resize(&this->possible_pools_que_, *(unsigned int *)(v3 + 32));
      v17 = std::deque<std::unordered_set<unsigned int>>::operator[](
              &this->possible_pools_que_,
              *(unsigned int *)(v3 + 64));
      std::unordered_set<unsigned int>::insert(v17, (const std::unordered_set<unsigned int>::value_type *)(v3 + 48));
      result = 0LL;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player_daily_task_comp.cpp",
        "addDailyTaskIntoPossiblePool",
        1280);
      v9 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
             &v22,
             (const char (*)[35])"findDailyTaskExcelConfig task_id: ");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v10, (const char (*)[7])" fails");
      common::milog::MiLogStream::~MiLogStream(&v22);
      result = 0xFFFFFFFFLL;
    }
  }
  if ( v23 == (char *)v3 )
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

// Line 1297: range 0000000014195486-0000000014195A82
__int64 __fastcall PlayerDailyTaskComp::setDailyTaskVar(
        PlayerDailyTaskComp *const this,
        int task_id,
        int index,
        int32_t value)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  __int64 result; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  std::vector<int>::size_type v16; // rsi
  std::vector<int>::reference v17; // rax
  _DWORD *v18; // rdx
  char v19; // cl
  PlayerEventComp *EventComp; // r14
  unsigned int *v21; // r9
  int *v22; // [rsp+0h] [rbp-150h]
  int *v23; // [rsp+8h] [rbp-148h]
  uint32_t v24; // [rsp+8h] [rbp-148h]
  std::allocator<unsigned int> __a; // [rsp+2Bh] [rbp-125h] BYREF
  _DWORD __l[5]; // [rsp+2Ch] [rbp-124h] BYREF
  std::shared_ptr<DailyTaskVarUpdateEvent> __r; // [rsp+40h] [rbp-110h] BYREF
  std::shared_ptr<Config> v29; // [rsp+50h] [rbp-100h] BYREF
  std::vector<unsigned int> key_vec; // [rsp+60h] [rbp-F0h] BYREF
  common::milog::MiLogStream v31; // [rsp+80h] [rbp-D0h] BYREF
  int v32[44]; // [rsp+A0h] [rbp-B0h] BYREF

  HIDWORD(v23) = value;
  v4 = (unsigned __int64)v32;
  v22 = v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 48 4 14 old_value:1309 64 4 12 task_id:1296 80 4 10 index:1296 96 4 10 value:1296";
  *(_QWORD *)(v4 + 16) = PlayerDailyTaskComp::setDailyTaskVar;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -234556924;
  v6[536862723] = -202116348;
  *(_DWORD *)(v4 + 64) = task_id;
  *(_DWORD *)(v4 + 80) = index;
  *(_DWORD *)(v4 + 96) = HIDWORD(v23);
  v24 = *(_DWORD *)(v4 + 80) + 1;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v29);
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v29);
  LOBYTE(v24) = v24 > ConstValueExcelConfigMgr::getDailyTaskVarNum(&v7->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v29);
  if ( (_BYTE)v24 )
  {
    common::milog::MiLogStream::create(
      &v31,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_daily_task_comp.cpp",
      "setDailyTaskVar",
      1300);
    v8 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v31, (const char (*)[10])"task_id: ");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 64));
    v10 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v9, (const char (*)[9])" index: ");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v4 + 80));
    common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])" too large");
    common::milog::MiLogStream::~MiLogStream(&v31);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v29);
    v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v29);
    *(_QWORD *)&__l[1] = data::DailyTaskExcelConfigMgrBase::findDailyTaskExcelConfig(
                           &v13->design_config.txt_config_mgr.daily_task_config_mgr,
                           *(_DWORD *)(v4 + 64));
    std::shared_ptr<Config>::~shared_ptr(&v29);
    if ( *(_QWORD *)&__l[1] )
    {
      *(_DWORD *)(v4 + 48) = PlayerDailyTaskComp::getDailyTaskVar(this, *(_DWORD *)(v4 + 64), *(_DWORD *)(v4 + 80));
      *(_QWORD *)&__l[3] = std::unordered_map<unsigned int,std::vector<int>>::operator[](
                             &this->task_var_map_,
                             (const std::unordered_map<unsigned int,std::vector<int>>::key_type *)(v4 + 64));
      if ( std::vector<int>::size(*(const std::vector<int> *const *)&__l[3]) < (unsigned int)(*(_DWORD *)(v4 + 80) + 1) )
        std::vector<int>::resize(*(std::vector<int> *const *)&__l[3], (unsigned int)(*(_DWORD *)(v4 + 80) + 1));
      LODWORD(v23) = *(_DWORD *)(v4 + 96);
      v16 = *(unsigned int *)(v4 + 80);
      v17 = std::vector<int>::operator[](*(std::vector<int> *const *)&__l[3], v16);
      v18 = v17;
      v19 = *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000);
      if ( v19 != 0 && (char)(((unsigned __int8)v17 & 7) + 3) >= v19 )
      {
        LOBYTE(v16) = v19 != 0;
        __asan_report_store4(v17, v16, v17);
      }
      *v18 = (_DWORD)v23;
      __l[0] = *(_DWORD *)(v4 + 64);
      std::allocator<unsigned int>::allocator(&__a);
      std::vector<unsigned int>::vector(&key_vec, (std::initializer_list<unsigned int>)__PAIR128__(1LL, __l), &__a);
      PlayerDailyTaskComp::notifyTaskVar(this, &key_vec);
      std::vector<unsigned int>::~vector(&key_vec);
      std::allocator<unsigned int>::~allocator(&__a);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      EventComp = Player::getEventComp(this->player_);
      common::tools::perf::make_shared<DailyTaskVarUpdateEvent,unsigned int &,unsigned int &,int &,int &>(
        (unsigned int *)&__r,
        (unsigned int *)(v4 + 64),
        (int *)(v4 + 80),
        (int *)(v4 + 48),
        (unsigned int *)(v4 + 96),
        v21,
        v32,
        v23);
      std::shared_ptr<BaseEvent>::shared_ptr<DailyTaskVarUpdateEvent,void>(
        (std::shared_ptr<BaseEvent> *const)&v29,
        &__r);
      PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v29);
      std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v29);
      std::shared_ptr<DailyTaskVarUpdateEvent>::~shared_ptr(&__r);
      result = 0LL;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v31,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player_daily_task_comp.cpp",
        "setDailyTaskVar",
        1306);
      v14 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
              &v31,
              (const char (*)[35])"findDailyTaskExcelConfig task_id: ");
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v4 + 64));
      common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v15, (const char (*)[7])" fails");
      common::milog::MiLogStream::~MiLogStream(&v31);
      result = 0xFFFFFFFFLL;
    }
  }
  if ( v22 == (int *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1324: range 0000000014195A84-0000000014195C67
__int64 __fastcall PlayerDailyTaskComp::getDailyTaskVar(
        const PlayerDailyTaskComp *const this,
        uint32_t task_id,
        uint32_t index)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  __int64 result; // rax
  std::vector<int>::const_reference v7; // rax
  unsigned int *v8; // rdx
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<int> >,false> __y; // [rsp+10h] [rbp-90h] BYREF
  const std::vector<int> *p_second; // [rsp+18h] [rbp-88h]
  char v12[128]; // [rsp+20h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 12 task_id:1323 64 8 9 iter:1325";
  *(_QWORD *)(v3 + 16) = PlayerDailyTaskComp::getDailyTaskVar;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = task_id;
  *(std::unordered_map<unsigned int,std::vector<int>>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::vector<int>>::find(
                                                                                      &this->task_var_map_,
                                                                                      (const std::unordered_map<unsigned int,std::vector<int>>::key_type *)(v3 + 48));
  __y._M_cur = std::unordered_map<unsigned int,std::vector<int>>::end(&this->task_var_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,std::vector<int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<int> >,false> *)(v3 + 64),
         &__y) )
  {
    result = 0LL;
  }
  else
  {
    p_second = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<int> >,false,false> *const)(v3 + 64))->second;
    if ( index >= std::vector<int>::size(p_second) )
    {
      result = 0LL;
    }
    else
    {
      v7 = std::vector<int>::operator[](p_second, index);
      v8 = (unsigned int *)v7;
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v7);
      }
      result = *v8;
    }
  }
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

// Line 1340: range 0000000014195C68-0000000014195DDD
void __cdecl PlayerDailyTaskComp::clearByGm(PlayerDailyTaskComp *const this)
{
  __int64 v1; // rsi
  PlayerSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v3; // rbx
  common::milog::MiLogStream *v4; // rax
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v6; // [rsp+20h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = Player::getSceneComp(this->player_);
  if ( !PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_daily_task_comp.cpp",
      "clearByGm",
      1343);
    v3 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v6, (const char (*)[6])"uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    v4 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &val);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v4, (const char (*)[19])" not in self world");
    common::milog::MiLogStream::~MiLogStream(&v6);
  }
  else
  {
    PlayerDailyTaskComp::clear(this);
    if ( *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->last_refresh_time_, v1, &this->last_refresh_time_);
    }
    this->last_refresh_time_ = 0;
    PlayerDailyTaskComp::broadcastDailyTask(this);
  }
};

// Line 1354: range 0000000014195DDE-0000000014195F11
void __cdecl PlayerDailyTaskComp::finishDailyTaskByGm(PlayerDailyTaskComp *const this, uint32_t task_id)
{
  PlayerSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v3; // rbx
  common::milog::MiLogStream *v4; // rax
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v6; // [rsp+20h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = Player::getSceneComp(this->player_);
  if ( !PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_daily_task_comp.cpp",
      "finishDailyTaskByGm",
      1357);
    v3 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v6, (const char (*)[6])"uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    v4 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &val);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v4, (const char (*)[19])" not in self world");
    common::milog::MiLogStream::~MiLogStream(&v6);
  }
  else
  {
    PlayerDailyTaskComp::forceFinishDailyTask(this, task_id);
  }
};

// Line 1364: range 0000000014195F12-0000000014196768
__int64 __fastcall PlayerDailyTaskComp::forceFinishDailyTask(PlayerDailyTaskComp *const this, uint32_t task_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rbx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,DailyTaskInfo> >::pointer v19; // rdx
  bool *p_is_finished; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rbx
  __int64 v24; // rsi
  uint32_t finish_progress; // r14d
  std::_Rb_tree_iterator<std::pair<unsigned int const,DailyTaskInfo> >::pointer v26; // rdx
  char v27; // cl
  unsigned int val; // [rsp+1Ch] [rbp-D4h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,DailyTaskInfo> >::_Self __y; // [rsp+20h] [rbp-D0h] BYREF
  const data::DailyTaskExcelConfig *task_config_ptr; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<Config> v31; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v32; // [rsp+40h] [rbp-B0h] BYREF
  char v33[144]; // [rsp+60h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 task_id:1363 64 8 9 iter:1387";
  *(_QWORD *)(v2 + 16) = PlayerDailyTaskComp::forceFinishDailyTask;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = task_id;
  common::milog::MiLogStream::create(
    &v32,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/player_daily_task_comp.cpp",
    "forceFinishDailyTask",
    1367);
  v5 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v32, (const char (*)[17])"forceFinishTask ");
  v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
  v7 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v6, (const char (*)[7])" uid: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
  common::milog::MiLogStream::~MiLogStream(&v32);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v31);
  v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v31);
  task_config_ptr = data::DailyTaskExcelConfigMgrBase::findDailyTaskExcelConfig(
                      &v8->design_config.txt_config_mgr.daily_task_config_mgr,
                      *(_DWORD *)(v2 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v31);
  if ( task_config_ptr )
  {
    if ( !common::tools::MiscUtils::isContains<std::map<unsigned int,DailyTaskInfo>,unsigned int>(
            &this->task_map_,
            (const unsigned int *)(v2 + 48)) )
    {
      common::milog::MiLogStream::create(
        &v32,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player_daily_task_comp.cpp",
        "forceFinishDailyTask",
        1376);
      v12 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v32, (const char (*)[5])"uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      v14 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              v13,
              (const char (*)[18])" has not task_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v32);
      result = 0xFFFFFFFFLL;
    }
    else if ( PlayerDailyTaskComp::tryRefresh(this, 1) )
    {
      *(std::map<unsigned int,DailyTaskInfo>::iterator *)(v2 + 64) = std::map<unsigned int,DailyTaskInfo>::find(
                                                                       &this->task_map_,
                                                                       (const std::map<unsigned int,DailyTaskInfo>::key_type *)(v2 + 48));
      __y._M_node = std::map<unsigned int,DailyTaskInfo>::end(&this->task_map_)._M_node;
      if ( std::operator==(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,DailyTaskInfo> >::_Self *)(v2 + 64),
             &__y) )
      {
        common::milog::MiLogStream::create(
          &v32,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/player_daily_task_comp.cpp",
          "forceFinishDailyTask",
          1390);
        v17 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                &v32,
                (const char (*)[15])"task_map find ");
        v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v17,
                (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v18, (const char (*)[7])" fails");
        common::milog::MiLogStream::~MiLogStream(&v32);
        result = 0xFFFFFFFFLL;
      }
      else
      {
        v19 = std::_Rb_tree_iterator<std::pair<unsigned int const,DailyTaskInfo>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,DailyTaskInfo> > *const)(v2 + 64));
        p_is_finished = &v19->second.is_finished;
        if ( *(_BYTE *)(((unsigned __int64)p_is_finished >> 3) + 0x7FFF8000) != 0
          && ((unsigned __int8)p_is_finished & 7) >= *(_BYTE *)(((unsigned __int64)p_is_finished >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(p_is_finished);
        }
        if ( v19->second.is_finished )
        {
          common::milog::MiLogStream::create(
            &v32,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/player_daily_task_comp.cpp",
            "forceFinishDailyTask",
            1395);
          v21 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v32, (const char (*)[9])"task_id ");
          v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v21,
                  (const unsigned int *)(v2 + 48));
          v23 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                  v22,
                  (const char (*)[20])" is_finished, uid: ");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &val);
          common::milog::MiLogStream::~MiLogStream(&v32);
          result = 0xFFFFFFFFLL;
        }
        else
        {
          v24 = (((_BYTE)task_config_ptr - 100) & 7u) + 3;
          if ( *(_BYTE *)(((unsigned __int64)&task_config_ptr->finish_progress >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)task_config_ptr - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&task_config_ptr->finish_progress >> 3)
                                                                            + 0x7FFF8000) )
          {
            __asan_report_load4(&task_config_ptr->finish_progress);
          }
          finish_progress = task_config_ptr->finish_progress;
          v26 = std::_Rb_tree_iterator<std::pair<unsigned int const,DailyTaskInfo>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,DailyTaskInfo> > *const)(v2 + 64));
          v27 = *(_BYTE *)(((unsigned __int64)&v26->second.progress >> 3) + 0x7FFF8000);
          if ( v27 != 0 && (char)((((_BYTE)v26 + 12) & 7) + 3) >= v27 )
          {
            LOBYTE(v24) = v27 != 0;
            __asan_report_store4(&v26->second.progress, v24, v26);
          }
          v26->second.progress = finish_progress;
          if ( *(_BYTE *)(((unsigned __int64)&task_config_ptr->finish_progress >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)task_config_ptr - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&task_config_ptr->finish_progress >> 3)
                                                                            + 0x7FFF8000) )
          {
            __asan_report_load4(&task_config_ptr->finish_progress);
          }
          PlayerDailyTaskComp::addDailyTaskProgress(this, *(_DWORD *)(v2 + 48), task_config_ptr->finish_progress);
          result = 0LL;
        }
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v32,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/player_daily_task_comp.cpp",
        "forceFinishDailyTask",
        1383);
      v15 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v32, (const char (*)[5])"uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
      common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v16, (const char (*)[21])" tryRefresh return 0");
      common::milog::MiLogStream::~MiLogStream(&v32);
      result = 0xFFFFFFFFLL;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v32,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_daily_task_comp.cpp",
      "forceFinishDailyTask",
      1371);
    v9 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
           &v32,
           (const char (*)[26])"findDailyTaskExcelConfig ");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v10, (const char (*)[7])" fails");
    common::milog::MiLogStream::~MiLogStream(&v32);
    result = 0xFFFFFFFFLL;
  }
  if ( v33 == (char *)v2 )
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

// Line 1405: range 000000001419676A-0000000014196B63
__int64 __fastcall PlayerDailyTaskComp::forceFinishDailyTaskUnloadGroup(
        PlayerDailyTaskComp *const this,
        uint32_t task_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // r14
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rcx
  unsigned int val; // [rsp+14h] [rbp-ACh] BYREF
  const data::DailyTaskExcelConfig *task_config_ptr; // [rsp+18h] [rbp-A8h]
  std::shared_ptr<Config> v17; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-90h] BYREF
  char v19[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 task_id:1404";
  *(_QWORD *)(v2 + 16) = PlayerDailyTaskComp::forceFinishDailyTaskUnloadGroup;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = task_id;
  if ( (unsigned int)PlayerDailyTaskComp::forceFinishDailyTask(this, *(_DWORD *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_daily_task_comp.cpp",
      "forceFinishDailyTaskUnloadGroup",
      1408);
    v5 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v18, (const char (*)[5])"uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    v7 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           v6,
           (const char (*)[29])" forceFinishDailyTask fails:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v18);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v17);
    v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17);
    task_config_ptr = data::DailyTaskExcelConfigMgrBase::findDailyTaskExcelConfig(
                        &v9->design_config.txt_config_mgr.daily_task_config_mgr,
                        *(_DWORD *)(v2 + 32));
    std::shared_ptr<Config>::~shared_ptr(&v17);
    if ( task_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&task_config_ptr->type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)task_config_ptr + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&task_config_ptr->type >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4(&task_config_ptr->type);
      }
      if ( task_config_ptr->type == DAILY_TASK_SCENE )
      {
        common::milog::MiLogStream::create(
          &v18,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/player_daily_task_comp.cpp",
          "forceFinishDailyTaskUnloadGroup",
          1416);
        v10 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                &v18,
                (const char (*)[20])"unregister groups [");
        v11 = common::milog::MiLogStream::operator<<<unsigned int>(v10, &task_config_ptr->new_group_vec);
        v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                v11,
                (const char (*)[16])"] when task_id=");
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v12,
                (const unsigned int *)(v2 + 32));
        v14 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v13, (const char (*)[10])" finish. ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        operator<<(v14, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v18);
        PlayerDailyTaskComp::unregisterTaskGroups(this, task_config_ptr);
        std::map<unsigned int,unsigned int>::erase(
          &this->delayed_unregister_group_tasks_map_,
          (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 32));
      }
    }
    result = 0LL;
  }
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

// Line 1427: range 0000000014196B64-000000001419700C
void __cdecl PlayerDailyTaskComp::finishAllDailyTaskByGm(PlayerDailyTaskComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  PlayerSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r14
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v8; // rax
  uint32_t *v9; // rdx
  unsigned int val; // [rsp+10h] [rbp-F0h] BYREF
  uint32_t task_id_0; // [rsp+14h] [rbp-ECh]
  std::map<unsigned int,DailyTaskInfo>::iterator __for_begin; // [rsp+18h] [rbp-E8h] BYREF
  std::map<unsigned int,DailyTaskInfo>::iterator __for_end; // [rsp+20h] [rbp-E0h] BYREF
  std::map<unsigned int,DailyTaskInfo> *__for_range; // [rsp+28h] [rbp-D8h]
  std::vector<unsigned int> *__for_range_0; // [rsp+30h] [rbp-D0h]
  const std::pair<unsigned int const,DailyTaskInfo> *v16; // [rsp+38h] [rbp-C8h]
  std::tuple_element<0,const std::pair<unsigned int const,DailyTaskInfo> >::type *task_id; // [rsp+40h] [rbp-C0h]
  std::tuple_element<1,const std::pair<unsigned int const,DailyTaskInfo> >::type *info; // [rsp+48h] [rbp-B8h]
  common::milog::MiLogStream v19; // [rsp+50h] [rbp-B0h] BYREF
  char v20[144]; // [rsp+70h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 24 16 task_id_vec:1435";
  *(_QWORD *)(v1 + 16) = PlayerDailyTaskComp::finishAllDailyTaskByGm;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218103808;
  v3[536862722] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = Player::getSceneComp(this->player_);
  if ( !PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_daily_task_comp.cpp",
      "finishAllDailyTaskByGm",
      1430);
    v5 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v19, (const char (*)[6])"uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v6, (const char (*)[19])" not in self world");
    common::milog::MiLogStream::~MiLogStream(&v19);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/player_daily_task_comp.cpp",
      "finishAllDailyTaskByGm",
      1433);
    v7 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
           &v19,
           (const char (*)[24])"finishAllTaskByGm uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v19);
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v1 + 32));
    __for_range = &this->task_map_;
    __for_begin._M_node = std::map<unsigned int,DailyTaskInfo>::begin(&this->task_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,DailyTaskInfo>::end(__for_range)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v16 = std::_Rb_tree_iterator<std::pair<unsigned int const,DailyTaskInfo>>::operator*(&__for_begin);
      task_id = std::get<0ul,unsigned int const,DailyTaskInfo>(v16);
      info = (std::tuple_element<1,const std::pair<unsigned int const,DailyTaskInfo> >::type *)std::get<1ul,unsigned int const,DailyTaskInfo>(v16);
      std::vector<unsigned int>::push_back((std::vector<unsigned int> *const)(v1 + 32), task_id);
      std::_Rb_tree_iterator<std::pair<unsigned int const,DailyTaskInfo>>::operator++(&__for_begin);
    }
    __for_range_0 = (std::vector<unsigned int> *)(v1 + 32);
    __for_begin._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,DailyTaskInfo> >::_Base_ptr)std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v1 + 32))._M_current;
    __for_end._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,DailyTaskInfo> >::_Base_ptr)std::vector<unsigned int>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_begin,
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_end) )
    {
      v8 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
      v9 = v8;
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v8);
      }
      task_id_0 = *v9;
      PlayerDailyTaskComp::finishDailyTaskByGm(this, task_id_0);
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
    }
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v1 + 32));
  }
  if ( v20 == (char *)v1 )
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

// Line 1449: range 000000001419700E-0000000014197669
__int64 __fastcall PlayerDailyTaskComp::resetDailyTaskVarByGm(
        PlayerDailyTaskComp *const this,
        __int64 task_id_opt,
        std::string *ret_msg)
{
  unsigned int v3; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  unsigned int *v7; // rax
  unsigned int *v8; // rax
  int *v9; // rdx
  unsigned int *v10; // rax
  unsigned int *v11; // rdx
  int v12; // r15d
  int v13; // r15d
  __int64 result; // rax
  unsigned int index; // [rsp+28h] [rbp-1A8h]
  unsigned int index_0; // [rsp+2Ch] [rbp-1A4h]
  std::unordered_map<unsigned int,std::vector<int>>::iterator __for_begin; // [rsp+30h] [rbp-1A0h] BYREF
  std::unordered_map<unsigned int,std::vector<int>>::iterator __for_end; // [rsp+38h] [rbp-198h] BYREF
  std::unordered_map<unsigned int,std::vector<int>> *__for_range; // [rsp+40h] [rbp-190h]
  const std::pair<unsigned int const,std::vector<int> > *v21; // [rsp+48h] [rbp-188h]
  std::tuple_element<0,const std::pair<unsigned int const,std::vector<int> > >::type *task_id; // [rsp+50h] [rbp-180h]
  std::tuple_element<1,const std::pair<unsigned int const,std::vector<int> > >::type *v23; // [rsp+58h] [rbp-178h]
  std::vector<int> p_default_value; // [rsp+60h] [rbp-170h] BYREF
  std::string __rhs; // [rsp+80h] [rbp-150h] BYREF
  std::string v26; // [rsp+A0h] [rbp-130h] BYREF
  char v27[272]; // [rsp+C0h] [rbp-110h] BYREF

  v4 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(224LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 8 16 task_id_opt:1448 64 24 12 var_vec:1452 128 56 17 task_var_map:1464";
  *(_QWORD *)(v4 + 16) = PlayerDailyTaskComp::resetDailyTaskVarByGm;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -234881024;
  v6[536862723] = -218959118;
  v6[536862725] = -218103808;
  v6[536862726] = -202116109;
  *(_QWORD *)(v4 + 32) = task_id_opt;
  if ( std::optional<unsigned int>::has_value((const std::optional<unsigned int> *const)(v4 + 32)) )
  {
    memset(&p_default_value, 0, sizeof(p_default_value));
    std::vector<int>::vector(&p_default_value);
    v7 = std::optional<unsigned int>::value((std::optional<unsigned int> *const)(v4 + 32));
    common::tools::MiscUtils::findMapWithDefaultValue<std::unordered_map<unsigned int,std::vector<int>>>(
      (std::unordered_map<unsigned int,std::vector<int>>::mapped_type *)(v4 + 64),
      &this->task_var_map_,
      v7,
      &p_default_value);
    std::vector<int>::~vector(&p_default_value);
    for ( index = 0; ; ++index )
    {
      if ( index >= std::vector<int>::size((const std::vector<int> *const)(v4 + 64)) )
      {
        v12 = 1;
        goto LABEL_15;
      }
      v8 = std::optional<unsigned int>::value((std::optional<unsigned int> *const)(v4 + 32));
      v9 = (int *)v8;
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v8);
      }
      if ( (unsigned int)PlayerDailyTaskComp::setDailyTaskVar(this, *v9, index, 0) )
        break;
    }
    v10 = std::optional<unsigned int>::value((std::optional<unsigned int> *const)(v4 + 32));
    v11 = v10;
    if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v10);
    }
    std::to_string(&__rhs, *v11);
    std::operator+<char>(&v26, "findDailyTaskExcelConfig fail, task_id:", &__rhs);
    std::string::operator=(ret_msg, &v26);
    std::string::~string(&v26);
    std::string::~string(&__rhs);
    v3 = -1;
    v12 = 0;
LABEL_15:
    std::vector<int>::~vector((std::vector<int> *const)(v4 + 64));
    if ( v12 == 1 )
LABEL_31:
      v3 = 0;
  }
  else
  {
    std::unordered_map<unsigned int,std::vector<int>>::unordered_map(
      (std::unordered_map<unsigned int,std::vector<int>> *const)(v4 + 128),
      &this->task_var_map_);
    __for_range = (std::unordered_map<unsigned int,std::vector<int>> *)(v4 + 128);
    __for_begin._M_cur = std::unordered_map<unsigned int,std::vector<int>>::begin((std::unordered_map<unsigned int,std::vector<int>> *const)(v4 + 128))._M_cur;
    __for_end._M_cur = std::unordered_map<unsigned int,std::vector<int>>::end((std::unordered_map<unsigned int,std::vector<int>> *const)(v4 + 128))._M_cur;
LABEL_18:
    if ( std::__detail::operator!=<std::pair<unsigned int const,std::vector<int>>,false>(&__for_begin, &__for_end) )
    {
      v21 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<int>>,false,false>::operator*(&__for_begin);
      task_id = std::get<0ul,unsigned int const,std::vector<int>>(v21);
      v23 = (std::tuple_element<1,const std::pair<unsigned int const,std::vector<int> > >::type *)std::get<1ul,unsigned int const,std::vector<int>>(v21);
      for ( index_0 = 0; ; ++index_0 )
      {
        if ( index_0 >= std::vector<int>::size(v23) )
        {
          std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<int>>,false,false>::operator++(&__for_begin);
          goto LABEL_18;
        }
        if ( *(_BYTE *)(((unsigned __int64)task_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)task_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)task_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(task_id);
        }
        if ( (unsigned int)PlayerDailyTaskComp::setDailyTaskVar(this, *task_id, index_0, 0) )
          break;
      }
      if ( *(_BYTE *)(((unsigned __int64)task_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)task_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)task_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(task_id);
      }
      std::to_string(&__rhs, *task_id);
      std::operator+<char>(&v26, "findDailyTaskExcelConfig fail, task_id:", &__rhs);
      std::string::operator=(ret_msg, &v26);
      std::string::~string(&v26);
      std::string::~string(&__rhs);
      v3 = -1;
      v13 = 0;
    }
    else
    {
      v13 = 1;
    }
    std::unordered_map<unsigned int,std::vector<int>>::~unordered_map((std::unordered_map<unsigned int,std::vector<int>> *const)(v4 + 128));
    if ( v13 == 1 )
      goto LABEL_31;
  }
  result = v3;
  if ( v27 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8014) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 1482: range 000000001419766A-0000000014197CBC
__int64 __fastcall PlayerDailyTaskComp::addDailyTaskByGm(PlayerDailyTaskComp *const this, uint32_t task_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  PlayerSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v6; // rbx
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  bool isDailyTaskIdClosed; // r14
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  PlayerBasicComp *BasicComp; // rax
  unsigned int v17; // eax
  DailyTaskInfo *v18; // r8
  unsigned int val; // [rsp+18h] [rbp-E8h] BYREF
  uint32_t level; // [rsp+1Ch] [rbp-E4h]
  const data::DailyTaskExcelConfig *task_config_ptr; // [rsp+20h] [rbp-E0h]
  std::tuple<unsigned int,unsigned int> __in; // [rsp+28h] [rbp-D8h] BYREF
  std::tuple<unsigned int&,unsigned int&> v23; // [rsp+30h] [rbp-D0h] BYREF
  std::shared_ptr<Config> v24; // [rsp+40h] [rbp-C0h] BYREF
  common::milog::MiLogStream v25; // [rsp+50h] [rbp-B0h] BYREF
  char v26[144]; // [rsp+70h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 task_id:1481 64 16 9 info:1506";
  *(_QWORD *)(v2 + 16) = PlayerDailyTaskComp::addDailyTaskByGm;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = task_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = Player::getSceneComp(this->player_);
  if ( !PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_daily_task_comp.cpp",
      "addDailyTaskByGm",
      1485);
    v6 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v25, (const char (*)[6])"uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v7, (const char (*)[19])" not in self world");
    common::milog::MiLogStream::~MiLogStream(&v25);
    result = 0xFFFFFFFFLL;
  }
  else if ( PlayerDailyTaskComp::findDailyTaskInfo(this, *(_DWORD *)(v2 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_daily_task_comp.cpp",
      "addDailyTaskByGm",
      1490);
    v9 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
           &v25,
           (const char (*)[24])"already has dailytask: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v25);
    result = 1LL;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v24);
    v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v24);
    task_config_ptr = data::DailyTaskExcelConfigMgrBase::findDailyTaskExcelConfig(
                        &v10->design_config.txt_config_mgr.daily_task_config_mgr,
                        *(_DWORD *)(v2 + 48));
    std::shared_ptr<Config>::~shared_ptr(&v24);
    if ( task_config_ptr )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v24);
      v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v24);
      isDailyTaskIdClosed = FeatureSwitchMgr::isDailyTaskIdClosed(&v12->feature_switch_mgr, *(_DWORD *)(v2 + 48));
      std::shared_ptr<Config>::~shared_ptr(&v24);
      if ( isDailyTaskIdClosed )
      {
        common::milog::MiLogStream::create(
          &v25,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/player_daily_task_comp.cpp",
          "addDailyTaskByGm",
          1501);
        v14 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                &v25,
                (const char (*)[15])"daily_task_id:");
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v14,
                (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v15, (const char (*)[11])off_252616C0);
        common::milog::MiLogStream::~MiLogStream(&v25);
        result = 1LL;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        BasicComp = Player::getBasicComp(this->player_);
        level = PlayerBasicComp::getLevel(BasicComp);
        *(_DWORD *)(v2 + 64) = 0;
        *(_DWORD *)(v2 + 68) = 0;
        *(_DWORD *)(v2 + 72) = 0;
        *(_BYTE *)(v2 + 76) = 0;
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v24);
        v17 = (unsigned int)std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v24);
        DailyTaskExcelConfigMgr::findTaskReward(
          (const DailyTaskExcelConfigMgr *const)&__in,
          v17 + 22680,
          *(_DWORD *)(v2 + 48));
        std::tie<unsigned int,unsigned int>(
          (unsigned int *)&v23,
          (unsigned int *)(v2 + 64),
          (unsigned int *)(v2 + 68),
          (unsigned int *)(v2 + 64));
        std::tuple<unsigned int &,unsigned int &>::operator=<unsigned int,unsigned int>(&v23, &__in);
        std::shared_ptr<Config>::~shared_ptr(&v24);
        std::map<unsigned int,DailyTaskInfo>::emplace<unsigned int &,DailyTaskInfo&>(
          &this->task_map_,
          (unsigned int *)(v2 + 48),
          (DailyTaskInfo *)(v2 + 64),
          (unsigned int *)&this->task_map_,
          v18);
        PlayerDailyTaskComp::startDailyTask(this);
        PlayerDailyTaskComp::broadcastDailyTask(this);
        result = 0LL;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player_daily_task_comp.cpp",
        "addDailyTaskByGm",
        1496);
      v11 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v25,
              (const char (*)[33])"findDailyTaskExcelConfig fails, ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v25);
      result = 1LL;
    }
  }
  if ( v26 == (char *)v2 )
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

// Line 1520: range 0000000014197CBE-0000000014197DD8
void __fastcall PlayerDailyTaskComp::setDailyTaskCycleRefreshTimeByGm(
        PlayerDailyTaskComp *const this,
        uint32_t task_id,
        uint32_t value)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  char *v6; // rsi
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v7; // rax
  _DWORD *v8; // rdx
  char v9; // cl
  char v11[96]; // [rsp+10h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 12 task_id:1519";
  *(_QWORD *)(v3 + 16) = PlayerDailyTaskComp::setDailyTaskCycleRefreshTimeByGm;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = task_id;
  v6 = (char *)(v3 + 32);
  v7 = std::unordered_map<unsigned int,unsigned int>::operator[](
         &this->cycle_quest_count_map_,
         (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v3 + 32));
  v8 = v7;
  v9 = *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000);
  if ( v9 != 0 && (char)(((unsigned __int8)v7 & 7) + 3) >= v9 )
  {
    LOBYTE(v6) = v9 != 0;
    __asan_report_store4(v7, v6, v7);
  }
  *v8 = value;
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1526: range 0000000014197DDA-0000000014197F35
void __fastcall PlayerDailyTaskComp::setTaskWeightByGm(
        PlayerDailyTaskComp *const this,
        __int64 task_id,
        uint32_t weight)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  char *v5; // rcx
  unsigned __int64 v6; // r12
  char v7; // al
  char *v8; // rsi
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v9; // rax
  _DWORD *v10; // rdx
  char v11; // cl
  char v13[96]; // [rsp+10h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  v5 = (char *)(v3 + 64);
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 12 task_id:1525";
  *(_QWORD *)(v3 + 16) = PlayerDailyTaskComp::setTaskWeightByGm;
  v6 = v3 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = task_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->is_gm_ >> 3) + 0x7FFF8000);
  if ( v7 < 0 )
  {
    LOBYTE(task_id) = v7 != 0;
    __asan_report_store1(&this->is_gm_, task_id, &this->is_gm_);
  }
  this->is_gm_ = 1;
  v8 = v5 - 32;
  v9 = std::unordered_map<unsigned int,unsigned int>::operator[](
         &this->gm_task_weight_map_,
         (const std::unordered_map<unsigned int,unsigned int>::key_type *)v5 - 8);
  v10 = v9;
  v11 = *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000);
  if ( v11 != 0 && (char)(((unsigned __int8)v9 & 7) + 3) >= v11 )
  {
    LOBYTE(v8) = v11 != 0;
    __asan_report_store4(v9, v8, v9);
  }
  *v10 = weight;
  if ( v13 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1533: range 0000000014197F36-000000001419805E
void __fastcall PlayerDailyTaskComp::removeTaskWeightByGm(PlayerDailyTaskComp *const this, uint32_t task_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  char v5[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 task_id:1532";
  *(_QWORD *)(v2 + 16) = PlayerDailyTaskComp::removeTaskWeightByGm;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = task_id;
  std::unordered_map<unsigned int,unsigned int>::erase(
    &this->gm_task_weight_map_,
    (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 32));
  if ( std::unordered_map<unsigned int,unsigned int>::empty(&this->gm_task_weight_map_) )
  {
    if ( *(char *)(((unsigned __int64)&this->is_gm_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->is_gm_, v2 + 32, &this->is_gm_);
    this->is_gm_ = 0;
  }
  if ( v5 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1543: range 0000000014198060-00000000141980C0
void __cdecl PlayerDailyTaskComp::removeAllTaskWeightByGm(PlayerDailyTaskComp *const this)
{
  __int64 v1; // rsi

  if ( *(char *)(((unsigned __int64)&this->is_gm_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_gm_, v1, &this->is_gm_);
  this->is_gm_ = 0;
  std::unordered_map<unsigned int,unsigned int>::clear(&this->gm_task_weight_map_);
};

// Line 1550: range 00000000141980C2-000000001419810E
void __cdecl PlayerDailyTaskComp::clearLastRefreshTimeByGm(PlayerDailyTaskComp *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_refresh_time_, v1, &this->last_refresh_time_);
  }
  this->last_refresh_time_ = 0;
};

// Line 1557: range 0000000014198110-0000000014198236
std::vector<unsigned int> *__cdecl PlayerDailyTaskComp::getUnfinishedDailyTasks(
        std::vector<unsigned int> *retstr,
        const PlayerDailyTaskComp *const this)
{
  bool *p_is_finished; // rax
  std::map<unsigned int,DailyTaskInfo>::const_iterator __for_begin; // [rsp+10h] [rbp-40h] BYREF
  std::map<unsigned int,DailyTaskInfo>::const_iterator __for_end; // [rsp+18h] [rbp-38h] BYREF
  const std::map<unsigned int,DailyTaskInfo> *__for_range; // [rsp+20h] [rbp-30h]
  const std::pair<unsigned int const,DailyTaskInfo> *v7; // [rsp+28h] [rbp-28h]
  std::tuple_element<0,const std::pair<unsigned int const,DailyTaskInfo> >::type *task_id; // [rsp+30h] [rbp-20h]
  std::tuple_element<1,const std::pair<unsigned int const,DailyTaskInfo> >::type *info; // [rsp+38h] [rbp-18h]

  std::vector<unsigned int>::vector(retstr);
  __for_range = &this->task_map_;
  __for_begin._M_node = std::map<unsigned int,DailyTaskInfo>::begin(&this->task_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,DailyTaskInfo>::end(&this->task_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v7 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,DailyTaskInfo>>::operator*(&__for_begin);
    task_id = std::get<0ul,unsigned int const,DailyTaskInfo>(v7);
    info = (std::tuple_element<1,const std::pair<unsigned int const,DailyTaskInfo> >::type *)std::get<1ul,unsigned int const,DailyTaskInfo>(v7);
    p_is_finished = &info->is_finished;
    if ( *(_BYTE *)(((unsigned __int64)p_is_finished >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_finished & 7) >= *(_BYTE *)(((unsigned __int64)p_is_finished >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(p_is_finished);
    }
    if ( !info->is_finished )
      std::vector<unsigned int>::push_back(retstr, task_id);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,DailyTaskInfo>>::operator++(&__for_begin);
  }
  return retstr;
};

// Line 1571: range 0000000014198238-0000000014198996
void __cdecl PlayerDailyTaskComp::onMonsterDie(PlayerDailyTaskComp *const this, const MonsterDieEvent *event)
{
  std::map<unsigned int,DailyTaskInfo> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  PlayerSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v6; // r13
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  uint32_t group_id; // esi
  data::DailyTaskFinishType finish_type; // eax
  uint32_t finish_param1; // ecx
  char v14; // al
  uint32_t v15; // ecx
  char v16; // al
  __int32 finish_progress; // esi
  bool is_satisfied; // [rsp+13h] [rbp-FDh]
  unsigned int val; // [rsp+14h] [rbp-FCh] BYREF
  std::map<unsigned int,DailyTaskInfo>::iterator __for_begin; // [rsp+18h] [rbp-F8h] BYREF
  std::map<unsigned int,DailyTaskInfo>::iterator __for_end; // [rsp+20h] [rbp-F0h] BYREF
  std::map<unsigned int,DailyTaskInfo> *__for_range; // [rsp+28h] [rbp-E8h]
  std::pair<unsigned int const,DailyTaskInfo> *__in; // [rsp+30h] [rbp-E0h]
  std::tuple_element<0,std::pair<unsigned int const,DailyTaskInfo> >::type *daily_task_id; // [rsp+38h] [rbp-D8h]
  std::tuple_element<1,std::pair<unsigned int const,DailyTaskInfo> >::type *info; // [rsp+40h] [rbp-D0h]
  const data::DailyTaskExcelConfig *task_config_ptr; // [rsp+48h] [rbp-C8h]
  common::milog::MiLogStream v28; // [rsp+50h] [rbp-C0h] BYREF
  char v29[160]; // [rsp+70h] [rbp-A0h] BYREF

  v2 = (std::map<unsigned int,DailyTaskInfo> *)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = (std::map<unsigned int,DailyTaskInfo> *)v3;
  }
  *(_QWORD *)v2->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v2->_M_t._M_impl._M_header._M_color = "1 48 48 13 task_map:1590";
  v2->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)PlayerDailyTaskComp::onMonsterDie;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = Player::getSceneComp(this->player_);
  if ( PlayerSceneComp::isInMyPlayerWorld(SceneComp) && !std::map<unsigned int,DailyTaskInfo>::empty(&this->task_map_) )
  {
    if ( PlayerDailyTaskComp::tryRefresh(this, 1) )
    {
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/player_daily_task_comp.cpp",
        "onMonsterDie",
        1588);
      v8 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v28, (const char (*)[15])"onMonsterDie: ");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &event->group_id);
      v10 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v9, (const char (*)[2])" ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &event->config_id);
      common::milog::MiLogStream::~MiLogStream(&v28);
      std::map<unsigned int,DailyTaskInfo>::map(v2 + 1, &this->task_map_);
      __for_range = v2 + 1;
      __for_begin._M_node = std::map<unsigned int,DailyTaskInfo>::begin(v2 + 1)._M_node;
      __for_end._M_node = std::map<unsigned int,DailyTaskInfo>::end(v2 + 1)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        __in = std::_Rb_tree_iterator<std::pair<unsigned int const,DailyTaskInfo>>::operator*(&__for_begin);
        daily_task_id = std::get<0ul,unsigned int const,DailyTaskInfo>(__in);
        info = std::get<1ul,unsigned int const,DailyTaskInfo>(__in);
        if ( *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)event + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&event->group_id);
        }
        group_id = event->group_id;
        if ( *(_BYTE *)(((unsigned __int64)daily_task_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)daily_task_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)daily_task_id >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4(daily_task_id);
        }
        task_config_ptr = PlayerDailyTaskComp::getAndCheckCondValid(this, *daily_task_id, group_id);
        if ( task_config_ptr )
        {
          is_satisfied = 0;
          if ( *(_BYTE *)(((unsigned __int64)&task_config_ptr->finish_type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&task_config_ptr->finish_type >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&task_config_ptr->finish_type);
          }
          finish_type = task_config_ptr->finish_type;
          if ( finish_type == DAILY_FINISH_MONSTER_NUM )
          {
            is_satisfied = 1;
          }
          else if ( finish_type <= DAILY_FINISH_MONSTER_NUM )
          {
            if ( finish_type == DAILY_FINISH_MONSTER_ID_NUM )
            {
              if ( *(_BYTE *)(((unsigned __int64)&task_config_ptr->finish_param1 >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)task_config_ptr - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&task_config_ptr->finish_param1 >> 3)
                                                                                + 0x7FFF8000) )
              {
                __asan_report_load4(&task_config_ptr->finish_param1);
              }
              if ( !task_config_ptr->finish_param1 )
                goto LABEL_32;
              finish_param1 = task_config_ptr->finish_param1;
              if ( *(_BYTE *)(((unsigned __int64)&event->monster_id >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&event->monster_id >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&event->monster_id);
              }
              if ( finish_param1 != event->monster_id )
                v14 = 0;
              else
LABEL_32:
                v14 = 1;
              is_satisfied = v14;
            }
            else if ( finish_type == DAILY_FINISH_MONSTER_CONFIG_NUM )
            {
              if ( *(_BYTE *)(((unsigned __int64)&task_config_ptr->finish_param1 >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)task_config_ptr - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&task_config_ptr->finish_param1 >> 3)
                                                                                + 0x7FFF8000) )
              {
                __asan_report_load4(&task_config_ptr->finish_param1);
              }
              if ( !task_config_ptr->finish_param1 )
                goto LABEL_41;
              v15 = task_config_ptr->finish_param1;
              if ( *(_BYTE *)(((unsigned __int64)&event->config_id >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->config_id >> 3)
                                                                     + 0x7FFF8000) )
              {
                __asan_report_load4(&event->config_id);
              }
              if ( v15 != event->config_id )
                v16 = 0;
              else
LABEL_41:
                v16 = 1;
              is_satisfied = v16;
            }
          }
          if ( is_satisfied )
          {
            if ( *(_BYTE *)(((unsigned __int64)&task_config_ptr->finish_progress >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)task_config_ptr - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&task_config_ptr->finish_progress >> 3)
                                                                              + 0x7FFF8000) )
            {
              __asan_report_load4(&task_config_ptr->finish_progress);
            }
            finish_progress = task_config_ptr->finish_progress;
            if ( *(_BYTE *)(((unsigned __int64)daily_task_id >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)daily_task_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)daily_task_id >> 3)
                                                                              + 0x7FFF8000) )
            {
              __asan_report_load4(daily_task_id);
            }
            PlayerDailyTaskComp::addDailyTaskProgress(this, *daily_task_id, finish_progress);
          }
        }
        std::_Rb_tree_iterator<std::pair<unsigned int const,DailyTaskInfo>>::operator++(&__for_begin);
      }
      std::map<unsigned int,DailyTaskInfo>::~map(v2 + 1);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/player_daily_task_comp.cpp",
        "onMonsterDie",
        1584);
      v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v28, (const char (*)[5])"uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
      common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v7, (const char (*)[21])" tryRefresh return 0");
      common::milog::MiLogStream::~MiLogStream(&v28);
    }
  }
  if ( v29 == (char *)v2 )
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
};

// Line 1621: range 0000000014198998-0000000014199173
void __cdecl PlayerDailyTaskComp::onGadgetDie(PlayerDailyTaskComp *const this, const GadgetDieEvent *event)
{
  std::map<unsigned int,DailyTaskInfo> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  PlayerSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v6; // r13
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r13
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  uint32_t group_id; // esi
  data::DailyTaskFinishType finish_type; // eax
  uint32_t finish_param1; // ecx
  uint32_t v16; // ecx
  __int32 finish_progress; // esi
  bool is_satisfied; // [rsp+13h] [rbp-FDh]
  unsigned int val; // [rsp+14h] [rbp-FCh] BYREF
  std::map<unsigned int,DailyTaskInfo>::iterator __for_begin; // [rsp+18h] [rbp-F8h] BYREF
  std::map<unsigned int,DailyTaskInfo>::iterator __for_end; // [rsp+20h] [rbp-F0h] BYREF
  std::map<unsigned int,DailyTaskInfo> *__for_range; // [rsp+28h] [rbp-E8h]
  std::pair<unsigned int const,DailyTaskInfo> *__in; // [rsp+30h] [rbp-E0h]
  std::tuple_element<0,std::pair<unsigned int const,DailyTaskInfo> >::type *daily_task_id; // [rsp+38h] [rbp-D8h]
  std::tuple_element<1,std::pair<unsigned int const,DailyTaskInfo> >::type *info; // [rsp+40h] [rbp-D0h]
  const data::DailyTaskExcelConfig *task_config_ptr; // [rsp+48h] [rbp-C8h]
  common::milog::MiLogStream v28; // [rsp+50h] [rbp-C0h] BYREF
  char v29[160]; // [rsp+70h] [rbp-A0h] BYREF

  v2 = (std::map<unsigned int,DailyTaskInfo> *)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = (std::map<unsigned int,DailyTaskInfo> *)v3;
  }
  *(_QWORD *)v2->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v2->_M_t._M_impl._M_header._M_color = "1 48 48 13 task_map:1640";
  v2->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)PlayerDailyTaskComp::onGadgetDie;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = Player::getSceneComp(this->player_);
  if ( !PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/player_daily_task_comp.cpp",
      "onGadgetDie",
      1624);
    v6 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v28, (const char (*)[6])"uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v7, (const char (*)[19])" not in self world");
    common::milog::MiLogStream::~MiLogStream(&v28);
  }
  else if ( !std::map<unsigned int,DailyTaskInfo>::empty(&this->task_map_) )
  {
    if ( PlayerDailyTaskComp::tryRefresh(this, 1) )
    {
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/player_daily_task_comp.cpp",
        "onGadgetDie",
        1638);
      v10 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v28, (const char (*)[14])"onGadgetDie: ");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &event->group_id);
      v12 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v11, (const char (*)[2])" ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &event->gadget_id);
      common::milog::MiLogStream::~MiLogStream(&v28);
      std::map<unsigned int,DailyTaskInfo>::map(v2 + 1, &this->task_map_);
      __for_range = v2 + 1;
      __for_begin._M_node = std::map<unsigned int,DailyTaskInfo>::begin(v2 + 1)._M_node;
      __for_end._M_node = std::map<unsigned int,DailyTaskInfo>::end(v2 + 1)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        __in = std::_Rb_tree_iterator<std::pair<unsigned int const,DailyTaskInfo>>::operator*(&__for_begin);
        daily_task_id = std::get<0ul,unsigned int const,DailyTaskInfo>(__in);
        info = std::get<1ul,unsigned int const,DailyTaskInfo>(__in);
        if ( *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&event->group_id);
        }
        group_id = event->group_id;
        if ( *(_BYTE *)(((unsigned __int64)daily_task_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)daily_task_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)daily_task_id >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4(daily_task_id);
        }
        task_config_ptr = PlayerDailyTaskComp::getAndCheckCondValid(this, *daily_task_id, group_id);
        if ( task_config_ptr )
        {
          is_satisfied = 0;
          if ( *(_BYTE *)(((unsigned __int64)&task_config_ptr->finish_type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&task_config_ptr->finish_type >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&task_config_ptr->finish_type);
          }
          finish_type = task_config_ptr->finish_type;
          if ( finish_type == DAILY_FINISH_GADGET_ID_NUM )
          {
            if ( *(_BYTE *)(((unsigned __int64)&task_config_ptr->finish_param1 >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)task_config_ptr - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&task_config_ptr->finish_param1 >> 3)
                                                                              + 0x7FFF8000) )
            {
              __asan_report_load4(&task_config_ptr->finish_param1);
            }
            finish_param1 = task_config_ptr->finish_param1;
            if ( *(_BYTE *)(((unsigned __int64)&event->gadget_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&event->gadget_id >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&event->gadget_id);
            }
            is_satisfied = finish_param1 == event->gadget_id;
          }
          else if ( finish_type == DAILY_FINISH_GADGET_CONFIG_NUM )
          {
            if ( *(_BYTE *)(((unsigned __int64)&task_config_ptr->finish_param1 >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)task_config_ptr - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&task_config_ptr->finish_param1 >> 3)
                                                                              + 0x7FFF8000) )
            {
              __asan_report_load4(&task_config_ptr->finish_param1);
            }
            v16 = task_config_ptr->finish_param1;
            if ( *(_BYTE *)(((unsigned __int64)&event->config_id >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->config_id >> 3)
                                                                   + 0x7FFF8000) )
            {
              __asan_report_load4(&event->config_id);
            }
            is_satisfied = v16 == event->config_id;
          }
          if ( is_satisfied )
          {
            if ( *(_BYTE *)(((unsigned __int64)&task_config_ptr->finish_progress >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)task_config_ptr - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&task_config_ptr->finish_progress >> 3)
                                                                              + 0x7FFF8000) )
            {
              __asan_report_load4(&task_config_ptr->finish_progress);
            }
            finish_progress = task_config_ptr->finish_progress;
            if ( *(_BYTE *)(((unsigned __int64)daily_task_id >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)daily_task_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)daily_task_id >> 3)
                                                                              + 0x7FFF8000) )
            {
              __asan_report_load4(daily_task_id);
            }
            PlayerDailyTaskComp::addDailyTaskProgress(this, *daily_task_id, finish_progress);
          }
        }
        std::_Rb_tree_iterator<std::pair<unsigned int const,DailyTaskInfo>>::operator++(&__for_begin);
      }
      std::map<unsigned int,DailyTaskInfo>::~map(v2 + 1);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/player_daily_task_comp.cpp",
        "onGadgetDie",
        1634);
      v8 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v28, (const char (*)[5])"uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
      common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v9, (const char (*)[21])" tryRefresh return 0");
      common::milog::MiLogStream::~MiLogStream(&v28);
    }
  }
  if ( v29 == (char *)v2 )
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
};

// Line 1668: range 0000000014199174-00000000141998A9
void __cdecl PlayerDailyTaskComp::onChestOpen(PlayerDailyTaskComp *const this, const ChestOpenEvent *event)
{
  std::map<unsigned int,DailyTaskInfo> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  PlayerSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v6; // r13
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r13
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  uint32_t group_id; // esi
  uint32_t config_id; // ecx
  __int32 finish_progress; // esi
  bool is_satisfied; // [rsp+13h] [rbp-FDh]
  unsigned int val; // [rsp+14h] [rbp-FCh] BYREF
  std::map<unsigned int,DailyTaskInfo>::iterator __for_begin; // [rsp+18h] [rbp-F8h] BYREF
  std::map<unsigned int,DailyTaskInfo>::iterator __for_end; // [rsp+20h] [rbp-F0h] BYREF
  std::map<unsigned int,DailyTaskInfo> *__for_range; // [rsp+28h] [rbp-E8h]
  std::pair<unsigned int const,DailyTaskInfo> *__in; // [rsp+30h] [rbp-E0h]
  std::tuple_element<0,std::pair<unsigned int const,DailyTaskInfo> >::type *daily_task_id; // [rsp+38h] [rbp-D8h]
  std::tuple_element<1,std::pair<unsigned int const,DailyTaskInfo> >::type *info; // [rsp+40h] [rbp-D0h]
  const data::DailyTaskExcelConfig *task_config_ptr; // [rsp+48h] [rbp-C8h]
  common::milog::MiLogStream v26; // [rsp+50h] [rbp-C0h] BYREF
  char v27[160]; // [rsp+70h] [rbp-A0h] BYREF

  v2 = (std::map<unsigned int,DailyTaskInfo> *)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = (std::map<unsigned int,DailyTaskInfo> *)v3;
  }
  *(_QWORD *)v2->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v2->_M_t._M_impl._M_header._M_color = "1 48 48 13 task_map:1687";
  v2->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)PlayerDailyTaskComp::onChestOpen;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = Player::getSceneComp(this->player_);
  if ( !PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_daily_task_comp.cpp",
      "onChestOpen",
      1671);
    v6 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v26, (const char (*)[6])"uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v7, (const char (*)[19])" not in self world");
    common::milog::MiLogStream::~MiLogStream(&v26);
  }
  else if ( !std::map<unsigned int,DailyTaskInfo>::empty(&this->task_map_) )
  {
    if ( PlayerDailyTaskComp::tryRefresh(this, 1) )
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/player_daily_task_comp.cpp",
        "onChestOpen",
        1685);
      v10 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v26, (const char (*)[14])"onChestOpen: ");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &event->group_id);
      v12 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v11, (const char (*)[2])" ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &event->config_id);
      common::milog::MiLogStream::~MiLogStream(&v26);
      std::map<unsigned int,DailyTaskInfo>::map(v2 + 1, &this->task_map_);
      __for_range = v2 + 1;
      __for_begin._M_node = std::map<unsigned int,DailyTaskInfo>::begin(v2 + 1)._M_node;
      __for_end._M_node = std::map<unsigned int,DailyTaskInfo>::end(v2 + 1)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        __in = std::_Rb_tree_iterator<std::pair<unsigned int const,DailyTaskInfo>>::operator*(&__for_begin);
        daily_task_id = std::get<0ul,unsigned int const,DailyTaskInfo>(__in);
        info = std::get<1ul,unsigned int const,DailyTaskInfo>(__in);
        if ( *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&event->group_id);
        }
        group_id = event->group_id;
        if ( *(_BYTE *)(((unsigned __int64)daily_task_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)daily_task_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)daily_task_id >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4(daily_task_id);
        }
        task_config_ptr = PlayerDailyTaskComp::getAndCheckCondValid(this, *daily_task_id, group_id);
        if ( task_config_ptr )
        {
          is_satisfied = 0;
          if ( *(_BYTE *)(((unsigned __int64)&task_config_ptr->finish_type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&task_config_ptr->finish_type >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&task_config_ptr->finish_type);
          }
          if ( task_config_ptr->finish_type == DAILY_FINISH_CHEST_CONFIG )
          {
            if ( *(_BYTE *)(((unsigned __int64)&event->config_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&event->config_id >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&event->config_id);
            }
            config_id = event->config_id;
            if ( *(_BYTE *)(((unsigned __int64)&task_config_ptr->finish_param1 >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)task_config_ptr - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&task_config_ptr->finish_param1 >> 3)
                                                                              + 0x7FFF8000) )
            {
              __asan_report_load4(&task_config_ptr->finish_param1);
            }
            is_satisfied = config_id == task_config_ptr->finish_param1;
          }
          if ( is_satisfied )
          {
            if ( *(_BYTE *)(((unsigned __int64)&task_config_ptr->finish_progress >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)task_config_ptr - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&task_config_ptr->finish_progress >> 3)
                                                                              + 0x7FFF8000) )
            {
              __asan_report_load4(&task_config_ptr->finish_progress);
            }
            finish_progress = task_config_ptr->finish_progress;
            if ( *(_BYTE *)(((unsigned __int64)daily_task_id >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)daily_task_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)daily_task_id >> 3)
                                                                              + 0x7FFF8000) )
            {
              __asan_report_load4(daily_task_id);
            }
            PlayerDailyTaskComp::addDailyTaskProgress(this, *daily_task_id, finish_progress);
          }
        }
        std::_Rb_tree_iterator<std::pair<unsigned int const,DailyTaskInfo>>::operator++(&__for_begin);
      }
      std::map<unsigned int,DailyTaskInfo>::~map(v2 + 1);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/player_daily_task_comp.cpp",
        "onChestOpen",
        1681);
      v8 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v26, (const char (*)[5])"uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
      common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v9, (const char (*)[21])" tryRefresh return 0");
      common::milog::MiLogStream::~MiLogStream(&v26);
    }
  }
  if ( v27 == (char *)v2 )
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
};

// Line 1712: range 00000000141998AA-0000000014199FFA
void __cdecl PlayerDailyTaskComp::onWorldGather(PlayerDailyTaskComp *const this, const WorldGatherEvent *event)
{
  std::map<unsigned int,DailyTaskInfo> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  PlayerSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v6; // r13
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r13
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  uint32_t group_id; // esi
  char v14; // al
  __int32 finish_progress; // esi
  bool is_satisfied; // [rsp+13h] [rbp-FDh]
  unsigned int val; // [rsp+14h] [rbp-FCh] BYREF
  std::map<unsigned int,DailyTaskInfo>::iterator __for_begin; // [rsp+18h] [rbp-F8h] BYREF
  std::map<unsigned int,DailyTaskInfo>::iterator __for_end; // [rsp+20h] [rbp-F0h] BYREF
  std::map<unsigned int,DailyTaskInfo> *__for_range; // [rsp+28h] [rbp-E8h]
  std::pair<unsigned int const,DailyTaskInfo> *__in; // [rsp+30h] [rbp-E0h]
  std::tuple_element<0,std::pair<unsigned int const,DailyTaskInfo> >::type *daily_task_id; // [rsp+38h] [rbp-D8h]
  std::tuple_element<1,std::pair<unsigned int const,DailyTaskInfo> >::type *info; // [rsp+40h] [rbp-D0h]
  const data::DailyTaskExcelConfig *task_config_ptr; // [rsp+48h] [rbp-C8h]
  common::milog::MiLogStream v26; // [rsp+50h] [rbp-C0h] BYREF
  char v27[160]; // [rsp+70h] [rbp-A0h] BYREF

  v2 = (std::map<unsigned int,DailyTaskInfo> *)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = (std::map<unsigned int,DailyTaskInfo> *)v3;
  }
  *(_QWORD *)v2->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v2->_M_t._M_impl._M_header._M_color = "1 48 48 13 task_map:1731";
  v2->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)PlayerDailyTaskComp::onWorldGather;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = Player::getSceneComp(this->player_);
  if ( !PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_daily_task_comp.cpp",
      "onWorldGather",
      1715);
    v6 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v26, (const char (*)[6])"uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v7, (const char (*)[19])" not in self world");
    common::milog::MiLogStream::~MiLogStream(&v26);
  }
  else if ( !std::map<unsigned int,DailyTaskInfo>::empty(&this->task_map_) )
  {
    if ( PlayerDailyTaskComp::tryRefresh(this, 1) )
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/player_daily_task_comp.cpp",
        "onWorldGather",
        1729);
      v10 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v26, (const char (*)[15])"onWorldGather ");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &event->group_id);
      v12 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v11, (const char (*)[2])" ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &event->point_type);
      common::milog::MiLogStream::~MiLogStream(&v26);
      std::map<unsigned int,DailyTaskInfo>::map(v2 + 1, &this->task_map_);
      __for_range = v2 + 1;
      __for_begin._M_node = std::map<unsigned int,DailyTaskInfo>::begin(v2 + 1)._M_node;
      __for_end._M_node = std::map<unsigned int,DailyTaskInfo>::end(v2 + 1)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        __in = std::_Rb_tree_iterator<std::pair<unsigned int const,DailyTaskInfo>>::operator*(&__for_begin);
        daily_task_id = std::get<0ul,unsigned int const,DailyTaskInfo>(__in);
        info = std::get<1ul,unsigned int const,DailyTaskInfo>(__in);
        if ( *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&event->group_id);
        }
        group_id = event->group_id;
        if ( *(_BYTE *)(((unsigned __int64)daily_task_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)daily_task_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)daily_task_id >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4(daily_task_id);
        }
        task_config_ptr = PlayerDailyTaskComp::getAndCheckCondValid(this, *daily_task_id, group_id);
        if ( task_config_ptr )
        {
          is_satisfied = 0;
          if ( *(_BYTE *)(((unsigned __int64)&task_config_ptr->finish_type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&task_config_ptr->finish_type >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&task_config_ptr->finish_type);
          }
          if ( task_config_ptr->finish_type == DAILY_FINISH_GATHER )
          {
            if ( *(_BYTE *)(((unsigned __int64)&task_config_ptr->finish_param1 >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)task_config_ptr - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&task_config_ptr->finish_param1 >> 3)
                                                                              + 0x7FFF8000) )
            {
              __asan_report_load4(&task_config_ptr->finish_param1);
            }
            if ( !task_config_ptr->finish_param1 )
              goto LABEL_31;
            if ( *(_BYTE *)(((unsigned __int64)&event->point_type >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->point_type >> 3)
                                                                   + 0x7FFF8000) )
            {
              __asan_report_load4(&event->point_type);
            }
            if ( event->point_type != task_config_ptr->finish_param1 )
              v14 = 0;
            else
LABEL_31:
              v14 = 1;
            is_satisfied = v14;
          }
          if ( is_satisfied )
          {
            if ( *(_BYTE *)(((unsigned __int64)&task_config_ptr->finish_progress >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)task_config_ptr - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&task_config_ptr->finish_progress >> 3)
                                                                              + 0x7FFF8000) )
            {
              __asan_report_load4(&task_config_ptr->finish_progress);
            }
            finish_progress = task_config_ptr->finish_progress;
            if ( *(_BYTE *)(((unsigned __int64)daily_task_id >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)daily_task_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)daily_task_id >> 3)
                                                                              + 0x7FFF8000) )
            {
              __asan_report_load4(daily_task_id);
            }
            PlayerDailyTaskComp::addDailyTaskProgress(this, *daily_task_id, finish_progress);
          }
        }
        std::_Rb_tree_iterator<std::pair<unsigned int const,DailyTaskInfo>>::operator++(&__for_begin);
      }
      std::map<unsigned int,DailyTaskInfo>::~map(v2 + 1);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/player_daily_task_comp.cpp",
        "onWorldGather",
        1725);
      v8 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v26, (const char (*)[5])"uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
      common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v9, (const char (*)[21])" tryRefresh return 0");
      common::milog::MiLogStream::~MiLogStream(&v26);
    }
  }
  if ( v27 == (char *)v2 )
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
};

// Line 1756: range 0000000014199FFC-000000001419A7D2
void __cdecl PlayerDailyTaskComp::onChallengeFinish(PlayerDailyTaskComp *const this, const ChallengeFinishEvent *event)
{
  std::map<unsigned int,DailyTaskInfo> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  PlayerSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v6; // r13
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r13
  common::milog::MiLogStream *v9; // rax
  uint32_t group_id; // esi
  uint32_t challenge_id; // ecx
  uint32_t v12; // ecx
  char v13; // al
  __int32 finish_progress; // esi
  bool is_satisfied; // [rsp+13h] [rbp-FDh]
  unsigned int val; // [rsp+14h] [rbp-FCh] BYREF
  std::map<unsigned int,DailyTaskInfo>::iterator __for_begin; // [rsp+18h] [rbp-F8h] BYREF
  std::map<unsigned int,DailyTaskInfo>::iterator __for_end; // [rsp+20h] [rbp-F0h] BYREF
  std::map<unsigned int,DailyTaskInfo> *__for_range; // [rsp+28h] [rbp-E8h]
  std::pair<unsigned int const,DailyTaskInfo> *__in; // [rsp+30h] [rbp-E0h]
  std::tuple_element<0,std::pair<unsigned int const,DailyTaskInfo> >::type *daily_task_id; // [rsp+38h] [rbp-D8h]
  std::tuple_element<1,std::pair<unsigned int const,DailyTaskInfo> >::type *info; // [rsp+40h] [rbp-D0h]
  const data::DailyTaskExcelConfig *task_config_ptr; // [rsp+48h] [rbp-C8h]
  common::milog::MiLogStream v25; // [rsp+50h] [rbp-C0h] BYREF
  char v26[160]; // [rsp+70h] [rbp-A0h] BYREF

  v2 = (std::map<unsigned int,DailyTaskInfo> *)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = (std::map<unsigned int,DailyTaskInfo> *)v3;
  }
  *(_QWORD *)v2->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v2->_M_t._M_impl._M_header._M_color = "1 48 48 13 task_map:1777";
  v2->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)PlayerDailyTaskComp::onChallengeFinish;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = Player::getSceneComp(this->player_);
  if ( !PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/player_daily_task_comp.cpp",
      "onChallengeFinish",
      1759);
    v6 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v25, (const char (*)[6])"uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v7, (const char (*)[19])" not in self world");
    common::milog::MiLogStream::~MiLogStream(&v25);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->is_success >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)event + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&event->is_success >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&event->is_success);
    }
    if ( event->is_success && !std::map<unsigned int,DailyTaskInfo>::empty(&this->task_map_) )
    {
      if ( PlayerDailyTaskComp::tryRefresh(this, 1) )
      {
        std::map<unsigned int,DailyTaskInfo>::map(v2 + 1, &this->task_map_);
        __for_range = v2 + 1;
        __for_begin._M_node = std::map<unsigned int,DailyTaskInfo>::begin(v2 + 1)._M_node;
        __for_end._M_node = std::map<unsigned int,DailyTaskInfo>::end(v2 + 1)._M_node;
        while ( std::operator!=(&__for_begin, &__for_end) )
        {
          __in = std::_Rb_tree_iterator<std::pair<unsigned int const,DailyTaskInfo>>::operator*(&__for_begin);
          daily_task_id = std::get<0ul,unsigned int const,DailyTaskInfo>(__in);
          info = std::get<1ul,unsigned int const,DailyTaskInfo>(__in);
          if ( *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&event->group_id);
          }
          group_id = event->group_id;
          if ( *(_BYTE *)(((unsigned __int64)daily_task_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)daily_task_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)daily_task_id >> 3)
                                                                            + 0x7FFF8000) )
          {
            __asan_report_load4(daily_task_id);
          }
          task_config_ptr = PlayerDailyTaskComp::getAndCheckCondValid(this, *daily_task_id, group_id);
          if ( task_config_ptr )
          {
            is_satisfied = 0;
            if ( *(_BYTE *)(((unsigned __int64)&task_config_ptr->finish_type >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&task_config_ptr->finish_type >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&task_config_ptr->finish_type);
            }
            if ( task_config_ptr->finish_type == DAILY_FINISH_CHALLENGE )
            {
              if ( *(_BYTE *)(((unsigned __int64)&event->challenge_id >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->challenge_id >> 3)
                                                                     + 0x7FFF8000) )
              {
                __asan_report_load4(&event->challenge_id);
              }
              challenge_id = event->challenge_id;
              if ( *(_BYTE *)(((unsigned __int64)&task_config_ptr->finish_param1 >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)task_config_ptr - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&task_config_ptr->finish_param1 >> 3)
                                                                                + 0x7FFF8000) )
              {
                __asan_report_load4(&task_config_ptr->finish_param1);
              }
              if ( challenge_id != task_config_ptr->finish_param1 )
                goto LABEL_39;
              if ( *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&event->group_id);
              }
              v12 = event->group_id;
              if ( *(_BYTE *)(((unsigned __int64)&task_config_ptr->finish_param2 >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&task_config_ptr->finish_param2 >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&task_config_ptr->finish_param2);
              }
              if ( v12 == task_config_ptr->finish_param2 )
                v13 = 1;
              else
LABEL_39:
                v13 = 0;
              is_satisfied = v13;
            }
            if ( is_satisfied )
            {
              common::milog::MiLogStream::create(
                &v25,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/player/player_daily_task_comp.cpp",
                "onChallengeFinish",
                1796);
              common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                &v25,
                (const char (*)[31])"[CHANLLENGE] onChallengeFinish");
              common::milog::MiLogStream::~MiLogStream(&v25);
              if ( *(_BYTE *)(((unsigned __int64)&task_config_ptr->finish_progress >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)task_config_ptr - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&task_config_ptr->finish_progress >> 3)
                                                                                + 0x7FFF8000) )
              {
                __asan_report_load4(&task_config_ptr->finish_progress);
              }
              finish_progress = task_config_ptr->finish_progress;
              if ( *(_BYTE *)(((unsigned __int64)daily_task_id >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)daily_task_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)daily_task_id >> 3)
                                                                                + 0x7FFF8000) )
              {
                __asan_report_load4(daily_task_id);
              }
              PlayerDailyTaskComp::addDailyTaskProgress(this, *daily_task_id, finish_progress);
            }
          }
          std::_Rb_tree_iterator<std::pair<unsigned int const,DailyTaskInfo>>::operator++(&__for_begin);
        }
        std::map<unsigned int,DailyTaskInfo>::~map(v2 + 1);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v25,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/player_daily_task_comp.cpp",
          "onChallengeFinish",
          1773);
        v8 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v25, (const char (*)[5])"uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
        common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v9, (const char (*)[21])" tryRefresh return 0");
        common::milog::MiLogStream::~MiLogStream(&v25);
      }
    }
  }
  if ( v26 == (char *)v2 )
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
};

// Line 1804: range 000000001419A7D4-000000001419B712
void __cdecl PlayerDailyTaskComp::onGroupsReplace(PlayerDailyTaskComp *const this, const GroupsReplaceEvent *event)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned int *v5; // rax
  __int32 *v6; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v12; // rax
  _DWORD *v13; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::vector<unsigned int> *v15; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v18; // rax
  _DWORD *v19; // rdx
  uint32_t SceneComp; // ecx
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  Scene *v23; // rax
  SceneBlockGroupComp *BlockGroupComp; // rax
  unsigned __int64 v25; // rdx
  PlayerBasicComp *v26; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v27; // rax
  _DWORD *v28; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  std::string eventa; // [rsp+0h] [rbp-290h]
  std::string eventb; // [rsp+0h] [rbp-290h]
  PlayerDailyTaskComp *thisa; // [rsp+8h] [rbp-288h]
  uint32_t task_max_num; // [rsp+18h] [rbp-278h]
  std::unordered_set<unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-270h] BYREF
  std::unordered_set<unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-268h] BYREF
  std::vector<unsigned int>::const_iterator __for_begin_0; // [rsp+30h] [rbp-260h] BYREF
  std::vector<unsigned int>::const_iterator __for_end_0; // [rsp+38h] [rbp-258h] BYREF
  const std::unordered_set<unsigned int> *__for_range; // [rsp+40h] [rbp-250h]
  std::set<unsigned int> *__for_range_1; // [rsp+48h] [rbp-248h]
  std::map<unsigned int,std::vector<unsigned int>> *__for_range_2; // [rsp+50h] [rbp-240h]
  std::set<unsigned int> *__for_range_3; // [rsp+58h] [rbp-238h]
  const data::DailyTaskExcelConfig *task_config_ptr_0; // [rsp+60h] [rbp-230h]
  const std::pair<unsigned int const,std::vector<unsigned int> > *v45; // [rsp+68h] [rbp-228h]
  std::tuple_element<0,const std::pair<unsigned int const,std::vector<unsigned int> > >::type *scene_id; // [rsp+70h] [rbp-220h]
  std::tuple_element<1,const std::pair<unsigned int const,std::vector<unsigned int> > >::type *unregister_group_id_vec; // [rsp+78h] [rbp-218h]
  const data::DailyTaskExcelConfig *task_config_ptr; // [rsp+80h] [rbp-210h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+88h] [rbp-208h]
  std::shared_ptr<Config> v50; // [rsp+90h] [rbp-200h] BYREF
  common::milog::MiLogStream v51; // [rsp+A0h] [rbp-1F0h] BYREF
  common::milog::MiLogStream v52; // [rsp+C0h] [rbp-1D0h] BYREF
  char v53[432]; // [rsp+E0h] [rbp-1B0h] BYREF

  eventa._M_string_length = (std::string::size_type)this;
  eventa._M_dataplus._M_p = (std::string::pointer)event;
  v2 = (unsigned __int64)v53;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(384LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "9 48 1 15 holder_del:1838 64 1 15 holder_gen:1858 80 4 18 daily_task_id:1814 96 4 18 daily_task_"
                        "id:1859 112 4 19 backup_task_id:1871 128 16 14 scene_ptr:1849 160 24 23 backup_task_id_vec:1857 "
                        "224 48 30 replace_daily_task_id_set:1805 304 48 34 unregister_scene_group_id_map:1806";
  *(_QWORD *)(v2 + 16) = PlayerDailyTaskComp::onGroupsReplace;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234556927;
  v4[536862723] = -234556924;
  v4[536862724] = -219021312;
  v4[536862725] = -234881024;
  v4[536862726] = -218959118;
  v4[536862728] = -219021312;
  v4[536862729] = 62194;
  v4[536862731] = -202116109;
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 224));
  std::map<unsigned int,std::vector<unsigned int>>::map((std::map<unsigned int,std::vector<unsigned int>> *const)(v2 + 304));
  __for_range = &event->replaced_groups;
  __for_begin._M_cur = std::unordered_set<unsigned int>::begin(&event->replaced_groups)._M_cur;
  __for_end._M_cur = std::unordered_set<unsigned int>::end(&event->replaced_groups)._M_cur;
  while ( std::__detail::operator!=<unsigned int,false>(&__for_begin, &__for_end) )
  {
    v5 = (unsigned int *)std::__detail::_Node_const_iterator<unsigned int,true,false>::operator*(&__for_begin);
    v6 = (__int32 *)v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    *((_DWORD *)&eventa._anon_0._M_allocated_capacity + 3) = *v6;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v50);
    v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v50);
    task_config_ptr = DailyTaskExcelConfigMgr::findDailyTaskConfigByGroupId(
                        &v7->design_config.txt_config_mgr.daily_task_config_mgr,
                        *((uint32_t *)&eventa._anon_0._M_allocated_capacity + 3));
    std::shared_ptr<Config>::~shared_ptr(&v50);
    if ( task_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&task_config_ptr->id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&task_config_ptr->id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&task_config_ptr->id);
      }
      *(_DWORD *)(v2 + 80) = task_config_ptr->id;
      if ( (unsigned __int8)PlayerDailyTaskComp::isDailyTaskStarted(this, *(_DWORD *)(v2 + 80)) == 1 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&task_config_ptr->type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)task_config_ptr + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&task_config_ptr->type >> 3)
                                                                         + 0x7FFF8000) )
        {
          __asan_report_load4(&task_config_ptr->type);
        }
        if ( task_config_ptr->type == DAILY_TASK_SCENE )
        {
          std::set<unsigned int>::insert(
            (std::set<unsigned int> *const)(v2 + 224),
            (const std::set<unsigned int>::value_type *)(v2 + 80));
          common::milog::MiLogStream::create(
            &v52,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/player_daily_task_comp.cpp",
            "onGroupsReplace",
            1826);
          v11 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                  &v52,
                  (const char (*)[31])"[DAILY_TASK] replaced task id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 80));
          common::milog::MiLogStream::~MiLogStream(&v52);
          __for_range_0 = &task_config_ptr->new_group_vec;
          __for_begin_0._M_current = std::vector<unsigned int>::begin(&task_config_ptr->new_group_vec)._M_current;
          __for_end_0._M_current = std::vector<unsigned int>::end(__for_range_0)._M_current;
          while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin_0, &__for_end_0) )
          {
            v12 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin_0);
            v13 = v12;
            if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v12);
            }
            *(_DWORD *)(v2 + 96) = *v13;
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)(v2 + 128));
            v14 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
            *(_DWORD *)(v2 + 112) = LuaConfigMgr::getSceneIdByGroupId(
                                      &v14->design_config.lua_config_mgr,
                                      *(_DWORD *)(v2 + 96));
            std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 128));
            v15 = std::map<unsigned int,std::vector<unsigned int>>::operator[](
                    (std::map<unsigned int,std::vector<unsigned int>> *const)(v2 + 304),
                    (const std::map<unsigned int,std::vector<unsigned int>>::key_type *)(v2 + 112));
            std::vector<unsigned int>::push_back(v15, (const std::vector<unsigned int>::value_type *)(v2 + 96));
            __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin_0);
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v51,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/player_daily_task_comp.cpp",
            "onGroupsReplace",
            1821);
          v8 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                 &v51,
                 (const char (*)[48])"[DAILY_TASK] onGroupsReplace invalid task type:");
          v9 = common::milog::MiLogStream::operator<<<data::DailyTaskType,(data::DailyTaskType*)0>(
                 v8,
                 &task_config_ptr->type);
          v10 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v9, (const char (*)[11])", task id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 80));
          common::milog::MiLogStream::~MiLogStream(&v51);
        }
      }
    }
    std::__detail::_Node_const_iterator<unsigned int,true,false>::operator++(&__for_begin);
  }
  if ( !std::set<unsigned int>::empty((const std::set<unsigned int> *const)(v2 + 224)) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    BasicComp = Player::getBasicComp(this->player_);
    PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v52, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 0x83Du, eventa);
    std::string::~string(&v52);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v2 + 128));
    v17 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
    *((_DWORD *)&eventb._anon_0._M_allocated_capacity + 2) = ConstValueExcelConfigMgr::getDailyTaskNum(&v17->design_config.txt_config_mgr.const_value_config_mgr);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 128));
    __for_range_1 = (std::set<unsigned int> *)(v2 + 224);
    __for_begin_0._M_current = (const unsigned int *)std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v2 + 224))._M_node;
    __for_end_0._M_current = (const unsigned int *)std::set<unsigned int>::end(__for_range_1)._M_node;
    while ( std::operator!=(
              (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_begin_0,
              (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_end_0) )
    {
      v18 = std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin_0);
      v19 = v18;
      if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v18);
      }
      *(_DWORD *)(v2 + 112) = *v19;
      std::map<unsigned int,DailyTaskInfo>::erase(
        (std::map<unsigned int,DailyTaskInfo> *const)(eventb._M_string_length + 40),
        (const std::map<unsigned int,DailyTaskInfo>::key_type *)(v2 + 112));
      std::map<unsigned int,unsigned int>::erase(
        (std::map<unsigned int,unsigned int> *const)(eventb._M_string_length + 464),
        (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 112));
      PlayerDailyTaskComp::logDailyTaskDel(
        (PlayerDailyTaskComp *const)eventb._M_string_length,
        *(_DWORD *)(v2 + 112),
        PlayerLogBodyDailyTaskDel_DelReason_REPLACE);
      std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin_0);
    }
    __for_range_2 = (std::map<unsigned int,std::vector<unsigned int>> *)(v2 + 304);
    __for_begin_0._M_current = (const unsigned int *)std::map<unsigned int,std::vector<unsigned int>>::begin((std::map<unsigned int,std::vector<unsigned int>> *const)(v2 + 304))._M_node;
    __for_end_0._M_current = (const unsigned int *)std::map<unsigned int,std::vector<unsigned int>>::end(__for_range_2)._M_node;
    while ( std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >::_Self *)&__for_begin_0,
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >::_Self *)&__for_end_0) )
    {
      v45 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int>>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int> > > *const)&__for_begin_0);
      scene_id = std::get<0ul,unsigned int const,std::vector<unsigned int>>(v45);
      unregister_group_id_vec = (std::tuple_element<1,const std::pair<unsigned int const,std::vector<unsigned int> > >::type *)std::get<1ul,unsigned int const,std::vector<unsigned int>>(v45);
      if ( *(_BYTE *)(((eventb._M_string_length + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      SceneComp = (unsigned int)Player::getSceneComp(*(Player *const *)(eventb._M_string_length + 24));
      if ( *(_BYTE *)(((unsigned __int64)scene_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)scene_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)scene_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(scene_id);
      }
      PlayerSceneComp::findScene((const PlayerSceneComp *const)(v2 + 128), SceneComp);
      if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 128)) )
      {
        common::milog::MiLogStream::create(
          &v52,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/player_daily_task_comp.cpp",
          "onGroupsReplace",
          1852);
        v21 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v52, (const char (*)[11])"findScene:");
        v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, scene_id);
        common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v22, (const char (*)[7])" fails");
        common::milog::MiLogStream::~MiLogStream(&v52);
      }
      else
      {
        v23 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        BlockGroupComp = Scene::getBlockGroupComp(v23);
        if ( *(_BYTE *)(((unsigned __int64)BlockGroupComp >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v25 = (unsigned __int64)(BlockGroupComp->_vptr_SceneCompBase + 13);
        if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        (*(void (__fastcall **)(SceneBlockGroupComp *, std::tuple_element<1,const std::pair<unsigned int const,std::vector<unsigned int> > >::type *, __int64))v25)(
          BlockGroupComp,
          unregister_group_id_vec,
          1LL);
      }
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 128));
      std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int>>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int> > > *const)&__for_begin_0);
    }
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 160));
    if ( *(_BYTE *)(((eventb._M_string_length + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v26 = Player::getBasicComp(*(Player *const *)(eventb._M_string_length + 24));
    PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v52, v26);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 64), 0x835u, eventb);
    std::string::~string(&v52);
    __for_range_3 = (std::set<unsigned int> *)(v2 + 224);
    __for_begin_0._M_current = (const unsigned int *)std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v2 + 224))._M_node;
    __for_end_0._M_current = (const unsigned int *)std::set<unsigned int>::end(__for_range_3)._M_node;
    while ( std::operator!=(
              (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_begin_0,
              (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_end_0) )
    {
      v27 = std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin_0);
      v28 = v27;
      if ( *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v27 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v27);
      }
      *(_DWORD *)(v2 + 96) = *v28;
      if ( std::map<unsigned int,DailyTaskInfo>::size(&thisa->task_map_) >= task_max_num )
        break;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v2 + 128));
      v29 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
      task_config_ptr_0 = data::DailyTaskExcelConfigMgrBase::findDailyTaskExcelConfig(
                            &v29->design_config.txt_config_mgr.daily_task_config_mgr,
                            *(_DWORD *)(v2 + 96));
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 128));
      if ( task_config_ptr_0 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&task_config_ptr_0->city_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)task_config_ptr_0 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&task_config_ptr_0->city_id >> 3)
                                                                           + 0x7FFF8000) )
        {
          __asan_report_load4(&task_config_ptr_0->city_id);
        }
        *(_DWORD *)(v2 + 112) = PlayerDailyTaskComp::chooseTaskFromBackupPool(thisa, 1, task_config_ptr_0->city_id);
        if ( *(_DWORD *)(v2 + 112) )
          std::vector<unsigned int>::push_back(
            (std::vector<unsigned int> *const)(v2 + 160),
            (const std::vector<unsigned int>::value_type *)(v2 + 112));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v52,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/player_daily_task_comp.cpp",
          "onGroupsReplace",
          1868);
        v30 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                &v52,
                (const char (*)[26])"findDailyTaskExcelConfig ");
        v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v30,
                (const unsigned int *)(v2 + 96));
        common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v31, (const char (*)[7])" fails");
        common::milog::MiLogStream::~MiLogStream(&v52);
      }
      std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin_0);
    }
    PlayerDailyTaskComp::startDailyTask(thisa, (const std::vector<unsigned int> *)(v2 + 160));
    PlayerDailyTaskComp::broadcastDailyTask(thisa);
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 64));
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 160));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
  }
  std::map<unsigned int,std::vector<unsigned int>>::~map((std::map<unsigned int,std::vector<unsigned int>> *const)(v2 + 304));
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 224));
  if ( v53 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF802C) = 0;
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
  }
};

// Line 1882: range 000000001419B714-000000001419B94E
const data::DailyTaskExcelConfig *__fastcall PlayerDailyTaskComp::getAndCheckCondValid(
        PlayerDailyTaskComp *const this,
        uint32_t daily_task_id,
        uint32_t group_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  const data::DailyTaskExcelConfig *result; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  const unsigned int *M_current; // r14
  std::vector<unsigned int>::const_iterator v9; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > __rhs; // [rsp+10h] [rbp-B0h] BYREF
  const data::DailyTaskExcelConfig *task_config_ptr; // [rsp+18h] [rbp-A8h]
  std::shared_ptr<Config> v13; // [rsp+20h] [rbp-A0h] BYREF
  char v14[144]; // [rsp+30h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 13 group_id:1881 64 8 9 iter:1892";
  *(_QWORD *)(v3 + 16) = PlayerDailyTaskComp::getAndCheckCondValid;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = group_id;
  if ( (unsigned __int8)PlayerDailyTaskComp::isDailyTaskStarted(this, daily_task_id) != 1 )
  {
    result = 0LL;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v13);
    v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13);
    task_config_ptr = data::DailyTaskExcelConfigMgrBase::findDailyTaskExcelConfig(
                        &v7->design_config.txt_config_mgr.daily_task_config_mgr,
                        daily_task_id);
    std::shared_ptr<Config>::~shared_ptr(&v13);
    if ( task_config_ptr )
    {
      M_current = std::vector<unsigned int>::end(&task_config_ptr->new_group_vec)._M_current;
      v9._M_current = std::vector<unsigned int>::begin(&task_config_ptr->new_group_vec)._M_current;
      *(__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 64) = std::find<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,unsigned int>(
                                                                                                     v9,
                                                                                                     (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current,
                                                                                                     (const unsigned int *)(v3 + 48));
      __rhs._M_current = std::vector<unsigned int>::end(&task_config_ptr->new_group_vec)._M_current;
      if ( __gnu_cxx::operator==<unsigned int const*,std::vector<unsigned int>>(
             (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 64),
             &__rhs) )
      {
        result = 0LL;
      }
      else
      {
        result = task_config_ptr;
      }
    }
    else
    {
      result = 0LL;
    }
  }
  if ( v14 == (char *)v3 )
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

// Line 1901: range 000000001419B950-000000001419C6ED
void __fastcall PlayerDailyTaskComp::execFinishAction(PlayerDailyTaskComp *const this, uint32_t task_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  int32_t param3; // ecx
  int param2; // r8d
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r13
  int32_t v16; // edi
  int32_t v17; // ecx
  int v18; // r8d
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  int32_t v21; // edi
  int32_t v22; // ecx
  int v23; // r8d
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  int32_t v28; // edi
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  unsigned int val; // [rsp+1Ch] [rbp-D4h] BYREF
  uint32_t v33; // [rsp+20h] [rbp-D0h]
  uint32_t var; // [rsp+24h] [rbp-CCh]
  std::vector<data::DailyTaskAction>::const_iterator __for_begin; // [rsp+28h] [rbp-C8h] BYREF
  std::vector<data::DailyTaskAction>::const_iterator __for_end; // [rsp+30h] [rbp-C0h] BYREF
  const data::DailyTaskExcelConfig *task_config_ptr; // [rsp+38h] [rbp-B8h]
  const std::vector<data::DailyTaskAction> *__for_range; // [rsp+40h] [rbp-B0h]
  const data::DailyTaskAction *action; // [rsp+48h] [rbp-A8h]
  std::shared_ptr<Config> v40; // [rsp+50h] [rbp-A0h] BYREF
  common::milog::MiLogStream v41; // [rsp+60h] [rbp-90h] BYREF
  char v42[112]; // [rsp+80h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v42;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 task_id:1900";
  *(_QWORD *)(v2 + 16) = PlayerDailyTaskComp::execFinishAction;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = task_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v40);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v40);
  task_config_ptr = data::DailyTaskExcelConfigMgrBase::findDailyTaskExcelConfig(
                      &v5->design_config.txt_config_mgr.daily_task_config_mgr,
                      *(_DWORD *)(v2 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v40);
  if ( task_config_ptr )
  {
    __for_range = &task_config_ptr->finish_action_vec;
    __for_begin._M_current = std::vector<data::DailyTaskAction>::begin(&task_config_ptr->finish_action_vec)._M_current;
    __for_end._M_current = std::vector<data::DailyTaskAction>::end(&task_config_ptr->finish_action_vec)._M_current;
    while ( __gnu_cxx::operator!=<data::DailyTaskAction const*,std::vector<data::DailyTaskAction>>(
              &__for_begin,
              &__for_end) )
    {
      action = __gnu_cxx::__normal_iterator<data::DailyTaskAction const*,std::vector<data::DailyTaskAction>>::operator*(&__for_begin);
      if ( PlayerDailyTaskComp::isActionCondSatisfied(this, action) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&action->type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&action->type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&action->type);
        }
        switch ( action->type )
        {
          case DAILY_TASK_ACTION_SET_VAR:
            if ( *(_BYTE *)(((unsigned __int64)&action->param3 >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)action + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&action->param3 >> 3)
                                                                    + 0x7FFF8000) )
            {
              __asan_report_load4(&action->param3);
            }
            param3 = action->param3;
            if ( *(_BYTE *)(((unsigned __int64)&action->param2 >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&action->param2 >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&action->param2);
            }
            param2 = action->param2;
            if ( *(_BYTE *)(((unsigned __int64)&action->param1 >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)action + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&action->param1 >> 3)
                                                                    + 0x7FFF8000) )
            {
              __asan_report_load4(&action->param1);
            }
            if ( !(unsigned int)PlayerDailyTaskComp::setDailyTaskVar(this, action->param1, param2, param3) )
              goto LABEL_63;
            common::milog::MiLogStream::create(
              &v41,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/player_daily_task_comp.cpp",
              "execFinishAction",
              1924);
            v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                    &v41,
                    (const char (*)[33])"setDailyTaskVar fails, task_id: ");
            v14 = common::milog::MiLogStream::operator<<<int,(int *)0>(v13, &action->param1);
            v15 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v14, (const char (*)[6])" uid:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            break;
          case DAILY_TASK_ACTION_INC_VAR:
            if ( *(_BYTE *)(((unsigned __int64)&action->param2 >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&action->param2 >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&action->param2);
            }
            v16 = action->param2;
            if ( *(_BYTE *)(((unsigned __int64)&action->param1 >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)action + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&action->param1 >> 3)
                                                                    + 0x7FFF8000) )
            {
              v16 = (_DWORD)action + 28;
              __asan_report_load4(&action->param1);
            }
            var = PlayerDailyTaskComp::getDailyTaskVar(this, action->param1, v16) + 1;
            v17 = var;
            if ( *(_BYTE *)(((unsigned __int64)&action->param2 >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&action->param2 >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&action->param2);
            }
            v18 = action->param2;
            if ( *(_BYTE *)(((unsigned __int64)&action->param1 >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)action + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&action->param1 >> 3)
                                                                    + 0x7FFF8000) )
            {
              __asan_report_load4(&action->param1);
            }
            if ( !(unsigned int)PlayerDailyTaskComp::setDailyTaskVar(this, action->param1, v18, v17) )
              goto LABEL_63;
            common::milog::MiLogStream::create(
              &v41,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/player_daily_task_comp.cpp",
              "execFinishAction",
              1936);
            v19 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                    &v41,
                    (const char (*)[33])"setDailyTaskVar fails, task_id: ");
            v20 = common::milog::MiLogStream::operator<<<int,(int *)0>(v19, &action->param1);
            v15 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v20, (const char (*)[6])" uid:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            break;
          case DAILY_TASK_ACTION_DEC_VAR:
            if ( *(_BYTE *)(((unsigned __int64)&action->param2 >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&action->param2 >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&action->param2);
            }
            v21 = action->param2;
            if ( *(_BYTE *)(((unsigned __int64)&action->param1 >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)action + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&action->param1 >> 3)
                                                                    + 0x7FFF8000) )
            {
              v21 = (_DWORD)action + 28;
              __asan_report_load4(&action->param1);
            }
            v33 = PlayerDailyTaskComp::getDailyTaskVar(this, action->param1, v21) - 1;
            v22 = v33;
            if ( *(_BYTE *)(((unsigned __int64)&action->param2 >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&action->param2 >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&action->param2);
            }
            v23 = action->param2;
            if ( *(_BYTE *)(((unsigned __int64)&action->param1 >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)action + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&action->param1 >> 3)
                                                                    + 0x7FFF8000) )
            {
              __asan_report_load4(&action->param1);
            }
            if ( !(unsigned int)PlayerDailyTaskComp::setDailyTaskVar(this, action->param1, v23, v22) )
              goto LABEL_63;
            common::milog::MiLogStream::create(
              &v41,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/player_daily_task_comp.cpp",
              "execFinishAction",
              1948);
            v24 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                    &v41,
                    (const char (*)[33])"setDailyTaskVar fails, task_id: ");
            v25 = common::milog::MiLogStream::operator<<<int,(int *)0>(v24, &action->param1);
            v15 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v25, (const char (*)[6])" uid:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            break;
          case DAILY_TASK_ACTION_ADD_SURE_POOL:
            if ( *(_BYTE *)(((unsigned __int64)&action->param1 >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)action + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&action->param1 >> 3)
                                                                    + 0x7FFF8000) )
            {
              __asan_report_load4(&action->param1);
            }
            if ( !(unsigned int)PlayerDailyTaskComp::addDailyTaskIntoSurePool(this, action->param1) )
              goto LABEL_63;
            common::milog::MiLogStream::create(
              &v41,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/player_daily_task_comp.cpp",
              "execFinishAction",
              1958);
            v26 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                    &v41,
                    (const char (*)[26])"addDailyTaskIntoSurePool ");
            v27 = common::milog::MiLogStream::operator<<<int,(int *)0>(v26, &action->param1);
            v15 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v27,
                    (const char (*)[13])" fails, uid:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            break;
          case DAILY_TASK_ACTION_ADD_POSSIBLE_POOL:
            if ( *(_BYTE *)(((unsigned __int64)&action->param2 >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&action->param2 >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&action->param2);
            }
            v28 = action->param2;
            if ( *(_BYTE *)(((unsigned __int64)&action->param1 >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)action + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&action->param1 >> 3)
                                                                    + 0x7FFF8000) )
            {
              v28 = (_DWORD)action + 28;
              __asan_report_load4(&action->param1);
            }
            if ( !(unsigned int)PlayerDailyTaskComp::addDailyTaskIntoPossiblePool(this, action->param1, v28) )
              goto LABEL_63;
            common::milog::MiLogStream::create(
              &v41,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/player_daily_task_comp.cpp",
              "execFinishAction",
              1968);
            v29 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                    &v41,
                    (const char (*)[30])"addDailyTaskIntoPossiblePool ");
            v30 = common::milog::MiLogStream::operator<<<int,(int *)0>(v29, &action->param1);
            v15 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v30,
                    (const char (*)[14])" fails, uid: ");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            break;
          default:
            goto LABEL_63;
        }
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v41);
        break;
      }
      common::milog::MiLogStream::create(
        &v41,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/player_daily_task_comp.cpp",
        "execFinishAction",
        1912);
      v8 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v41, (const char (*)[10])"task_id: ");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 32));
      v10 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
              v9,
              (const char (*)[28])" action cond not fit, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
      common::milog::MiLogStream::~MiLogStream(&v41);
LABEL_63:
      __gnu_cxx::__normal_iterator<data::DailyTaskAction const*,std::vector<data::DailyTaskAction>>::operator++(&__for_begin);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v41,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_daily_task_comp.cpp",
      "execFinishAction",
      1905);
    v6 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
           &v41,
           (const char (*)[26])"findDailyTaskExcelConfig ");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v7, (const char (*)[7])" fails");
    common::milog::MiLogStream::~MiLogStream(&v41);
  }
  if ( v42 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1978: range 000000001419C6EE-000000001419CBBA
bool __cdecl PlayerDailyTaskComp::isActionCondSatisfied(
        PlayerDailyTaskComp *const this,
        const data::DailyTaskAction *action)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  bool result; // al
  int32_t cond_param2; // edi
  int DailyTaskVar; // ecx
  int32_t v6; // edi
  int v7; // ecx
  int32_t v8; // edi
  int32_t v9; // ecx
  int32_t v10; // edi
  int32_t v11; // ecx
  common::milog::MiLogStream *v12; // rax
  std::shared_ptr<Config> v14; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v15; // [rsp+30h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v14);
  v2 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14);
  ConstValueExcelConfigMgr::getDailyTaskVarNum(&v2->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v14);
  if ( *(_BYTE *)(((unsigned __int64)&action->cond_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&action->cond_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&action->cond_type);
  }
  switch ( action->cond_type )
  {
    case DAILY_TASK_COND_NONE:
      result = 1;
      break;
    case DAILY_TASK_COND_VAR_EQ:
      if ( *(_BYTE *)(((unsigned __int64)&action->cond_param2 >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&action->cond_param2 >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&action->cond_param2);
      }
      cond_param2 = action->cond_param2;
      if ( *(_BYTE *)(((unsigned __int64)&action->cond_param1 >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)action + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&action->cond_param1 >> 3)
                                                              + 0x7FFF8000) )
      {
        cond_param2 = (_DWORD)action + 12;
        __asan_report_load4(&action->cond_param1);
      }
      DailyTaskVar = PlayerDailyTaskComp::getDailyTaskVar(this, action->cond_param1, cond_param2);
      if ( *(_BYTE *)(((unsigned __int64)&action->cond_param3 >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)action + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&action->cond_param3 >> 3)
                                                              + 0x7FFF8000) )
      {
        __asan_report_load4(&action->cond_param3);
      }
      result = DailyTaskVar == action->cond_param3;
      break;
    case DAILY_TASK_COND_VAR_NE:
      if ( *(_BYTE *)(((unsigned __int64)&action->cond_param2 >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&action->cond_param2 >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&action->cond_param2);
      }
      v6 = action->cond_param2;
      if ( *(_BYTE *)(((unsigned __int64)&action->cond_param1 >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)action + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&action->cond_param1 >> 3)
                                                              + 0x7FFF8000) )
      {
        v6 = (_DWORD)action + 12;
        __asan_report_load4(&action->cond_param1);
      }
      v7 = PlayerDailyTaskComp::getDailyTaskVar(this, action->cond_param1, v6);
      if ( *(_BYTE *)(((unsigned __int64)&action->cond_param3 >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)action + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&action->cond_param3 >> 3)
                                                              + 0x7FFF8000) )
      {
        __asan_report_load4(&action->cond_param3);
      }
      result = v7 != action->cond_param3;
      break;
    case DAILY_TASK_COND_VAR_GT:
      if ( *(_BYTE *)(((unsigned __int64)&action->cond_param2 >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&action->cond_param2 >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&action->cond_param2);
      }
      v8 = action->cond_param2;
      if ( *(_BYTE *)(((unsigned __int64)&action->cond_param1 >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)action + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&action->cond_param1 >> 3)
                                                              + 0x7FFF8000) )
      {
        v8 = (_DWORD)action + 12;
        __asan_report_load4(&action->cond_param1);
      }
      v9 = PlayerDailyTaskComp::getDailyTaskVar(this, action->cond_param1, v8);
      if ( *(_BYTE *)(((unsigned __int64)&action->cond_param3 >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)action + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&action->cond_param3 >> 3)
                                                              + 0x7FFF8000) )
      {
        __asan_report_load4(&action->cond_param3);
      }
      result = v9 > action->cond_param3;
      break;
    case DAILY_TASK_COND_VAR_LT:
      if ( *(_BYTE *)(((unsigned __int64)&action->cond_param2 >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&action->cond_param2 >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&action->cond_param2);
      }
      v10 = action->cond_param2;
      if ( *(_BYTE *)(((unsigned __int64)&action->cond_param1 >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)action + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&action->cond_param1 >> 3)
                                                              + 0x7FFF8000) )
      {
        v10 = (_DWORD)action + 12;
        __asan_report_load4(&action->cond_param1);
      }
      v11 = PlayerDailyTaskComp::getDailyTaskVar(this, action->cond_param1, v10);
      if ( *(_BYTE *)(((unsigned __int64)&action->cond_param3 >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)action + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&action->cond_param3 >> 3)
                                                              + 0x7FFF8000) )
      {
        __asan_report_load4(&action->cond_param3);
      }
      result = v11 < action->cond_param3;
      break;
    default:
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/player_daily_task_comp.cpp",
        "isActionCondSatisfied",
        2003);
      v12 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])off_25263FE0);
      common::milog::MiLogStream::operator<<<data::DailyTaskCondType,(data::DailyTaskCondType*)0>(
        v12,
        &action->cond_type);
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = 0;
      break;
  }
  return result;
};

// Line 2010: range 000000001419CBBC-000000001419D0D6
void __fastcall PlayerDailyTaskComp::logDailyTaskGen(
        PlayerDailyTaskComp *const this,
        uint32_t daily_task_id,
        bool is_by_group_replaced)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyDailyTaskGen,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyDailyTaskGen,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyDailyTaskGen,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyDailyTaskGen,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyDailyTaskGen,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyDailyTaskGen,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyDailyTaskGen,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  Player *player; // r14
  google::protobuf::uint32 *task_config_ptr; // [rsp+18h] [rbp-D8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-D0h] BYREF
  std::shared_ptr<google::protobuf::Message> v20; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 18 daily_task_id:2009 64 16 12 log_ptr:2017";
  *(_QWORD *)(v3 + 16) = PlayerDailyTaskComp::logDailyTaskGen;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = daily_task_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v20);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20);
  task_config_ptr = (google::protobuf::uint32 *)data::DailyTaskExcelConfigMgrBase::findDailyTaskExcelConfig(
                                                  &v6->design_config.txt_config_mgr.daily_task_config_mgr,
                                                  *(_DWORD *)(v3 + 48));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v20);
  if ( task_config_ptr )
  {
    common::tools::perf::make_shared<proto_log::PlayerLogBodyDailyTaskGen>();
    v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyDailyTaskGen,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDailyTaskGen,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    if ( *(_BYTE *)(((unsigned __int64)(task_config_ptr + 3) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)task_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(task_config_ptr + 3) >> 3)
                                                                     + 0x7FFF8000) )
    {
      __asan_report_load4(task_config_ptr + 3);
    }
    proto_log::PlayerLogBodyDailyTaskGen::set_city_id(v9, task_config_ptr[3]);
    v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyDailyTaskGen,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDailyTaskGen,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    if ( *(_BYTE *)(((unsigned __int64)(task_config_ptr + 4) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)(task_config_ptr + 4) >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(task_config_ptr + 4);
    }
    proto_log::PlayerLogBodyDailyTaskGen::set_pool_id(v10, task_config_ptr[4]);
    v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyDailyTaskGen,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDailyTaskGen,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    if ( *(_BYTE *)(((unsigned __int64)(task_config_ptr + 13) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)task_config_ptr + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(task_config_ptr + 13) >> 3)
                                                                     + 0x7FFF8000) )
    {
      __asan_report_load4(task_config_ptr + 13);
    }
    proto_log::PlayerLogBodyDailyTaskGen::set_type(v11, task_config_ptr[13]);
    v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyDailyTaskGen,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDailyTaskGen,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    if ( *(_BYTE *)(((unsigned __int64)(task_config_ptr + 14) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)(task_config_ptr + 14) >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(task_config_ptr + 14);
    }
    proto_log::PlayerLogBodyDailyTaskGen::set_rarity(v12, task_config_ptr[14]);
    v13 = std::__shared_ptr_access<proto_log::PlayerLogBodyDailyTaskGen,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDailyTaskGen,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    if ( *(_BYTE *)(((unsigned __int64)(task_config_ptr + 36) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)(task_config_ptr + 36) >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(task_config_ptr + 36);
    }
    proto_log::PlayerLogBodyDailyTaskGen::set_finish_type(v13, task_config_ptr[36]);
    v14 = std::__shared_ptr_access<proto_log::PlayerLogBodyDailyTaskGen,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDailyTaskGen,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    proto_log::PlayerLogBodyDailyTaskGen::set_daily_task_id(v14, *(_DWORD *)(v3 + 48));
    v15 = std::__shared_ptr_access<proto_log::PlayerLogBodyDailyTaskGen,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDailyTaskGen,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    proto_log::PlayerLogBodyDailyTaskGen::set_is_by_group_replaced(v15, is_by_group_replaced);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    player = this->player_;
    std::shared_ptr<google::protobuf::Message>::shared_ptr(&v20, 0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyDailyTaskGen,void>(
      &p_body_ptr,
      (const std::shared_ptr<proto_log::PlayerLogBodyDailyTaskGen> *)(v3 + 64));
    Player::printStatLog(player, &p_body_ptr, &v20, 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v20);
    std::shared_ptr<proto_log::PlayerLogBodyDailyTaskGen>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyDailyTaskGen> *const)(v3 + 64));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_daily_task_comp.cpp",
      "logDailyTaskGen",
      2014);
    v7 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
           &v21,
           (const char (*)[26])"findDailyTaskExcelConfig ");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v8, (const char (*)[7])" fails");
    common::milog::MiLogStream::~MiLogStream(&v21);
  }
  if ( v22 == (char *)v3 )
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

// Line 2029: range 000000001419D0D8-000000001419D5EF
void __fastcall PlayerDailyTaskComp::logDailyTaskDel(
        PlayerDailyTaskComp *const this,
        uint32_t daily_task_id,
        google::protobuf::uint32 delete_reason)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyDailyTaskDel,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyDailyTaskDel,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyDailyTaskDel,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyDailyTaskDel,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyDailyTaskDel,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyDailyTaskDel,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyDailyTaskDel,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  Player *player; // r14
  google::protobuf::uint32 *task_config_ptr; // [rsp+18h] [rbp-D8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-D0h] BYREF
  std::shared_ptr<google::protobuf::Message> v20; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 18 daily_task_id:2028 64 16 12 log_ptr:2036";
  *(_QWORD *)(v3 + 16) = PlayerDailyTaskComp::logDailyTaskDel;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = daily_task_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v20);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20);
  task_config_ptr = (google::protobuf::uint32 *)data::DailyTaskExcelConfigMgrBase::findDailyTaskExcelConfig(
                                                  &v6->design_config.txt_config_mgr.daily_task_config_mgr,
                                                  *(_DWORD *)(v3 + 48));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v20);
  if ( task_config_ptr )
  {
    common::tools::perf::make_shared<proto_log::PlayerLogBodyDailyTaskDel>();
    v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyDailyTaskDel,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDailyTaskDel,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    if ( *(_BYTE *)(((unsigned __int64)(task_config_ptr + 3) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)task_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(task_config_ptr + 3) >> 3)
                                                                     + 0x7FFF8000) )
    {
      __asan_report_load4(task_config_ptr + 3);
    }
    proto_log::PlayerLogBodyDailyTaskDel::set_city_id(v9, task_config_ptr[3]);
    v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyDailyTaskDel,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDailyTaskDel,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    if ( *(_BYTE *)(((unsigned __int64)(task_config_ptr + 4) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)(task_config_ptr + 4) >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(task_config_ptr + 4);
    }
    proto_log::PlayerLogBodyDailyTaskDel::set_pool_id(v10, task_config_ptr[4]);
    v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyDailyTaskDel,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDailyTaskDel,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    if ( *(_BYTE *)(((unsigned __int64)(task_config_ptr + 13) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)task_config_ptr + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(task_config_ptr + 13) >> 3)
                                                                     + 0x7FFF8000) )
    {
      __asan_report_load4(task_config_ptr + 13);
    }
    proto_log::PlayerLogBodyDailyTaskDel::set_type(v11, task_config_ptr[13]);
    v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyDailyTaskDel,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDailyTaskDel,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    if ( *(_BYTE *)(((unsigned __int64)(task_config_ptr + 14) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)(task_config_ptr + 14) >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(task_config_ptr + 14);
    }
    proto_log::PlayerLogBodyDailyTaskDel::set_rarity(v12, task_config_ptr[14]);
    v13 = std::__shared_ptr_access<proto_log::PlayerLogBodyDailyTaskDel,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDailyTaskDel,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    if ( *(_BYTE *)(((unsigned __int64)(task_config_ptr + 36) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)(task_config_ptr + 36) >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(task_config_ptr + 36);
    }
    proto_log::PlayerLogBodyDailyTaskDel::set_finish_type(v13, task_config_ptr[36]);
    v14 = std::__shared_ptr_access<proto_log::PlayerLogBodyDailyTaskDel,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDailyTaskDel,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    proto_log::PlayerLogBodyDailyTaskDel::set_daily_task_id(v14, *(_DWORD *)(v3 + 48));
    v15 = std::__shared_ptr_access<proto_log::PlayerLogBodyDailyTaskDel,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDailyTaskDel,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    proto_log::PlayerLogBodyDailyTaskDel::set_delete_reason(v15, delete_reason);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    player = this->player_;
    std::shared_ptr<google::protobuf::Message>::shared_ptr(&v20, 0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyDailyTaskDel,void>(
      &p_body_ptr,
      (const std::shared_ptr<proto_log::PlayerLogBodyDailyTaskDel> *)(v3 + 64));
    Player::printStatLog(player, &p_body_ptr, &v20, 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v20);
    std::shared_ptr<proto_log::PlayerLogBodyDailyTaskDel>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyDailyTaskDel> *const)(v3 + 64));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_daily_task_comp.cpp",
      "logDailyTaskDel",
      2033);
    v7 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
           &v21,
           (const char (*)[26])"findDailyTaskExcelConfig ");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v8, (const char (*)[7])" fails");
    common::milog::MiLogStream::~MiLogStream(&v21);
  }
  if ( v22 == (char *)v3 )
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

// Line 2048: range 000000001419D5F0-000000001419D886
void __cdecl PlayerDailyTaskComp::logDailyTaskProgress(
        PlayerDailyTaskComp *const this,
        uint32_t daily_task_id,
        const DailyTaskInfo *info)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<proto_log::PlayerLogBodyDailyTaskProgress,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyDailyTaskProgress,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyDailyTaskProgress,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  Player *player; // r14
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-90h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+30h] [rbp-80h] BYREF
  char v13[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 12 log_ptr:2049";
  *(_QWORD *)(v3 + 16) = PlayerDailyTaskComp::logDailyTaskProgress;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  common::tools::perf::make_shared<proto_log::PlayerLogBodyDailyTaskProgress>();
  v6 = std::__shared_ptr_access<proto_log::PlayerLogBodyDailyTaskProgress,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDailyTaskProgress,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  proto_log::PlayerLogBodyDailyTaskProgress::set_daily_task_id(v6, daily_task_id);
  v7 = std::__shared_ptr_access<proto_log::PlayerLogBodyDailyTaskProgress,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDailyTaskProgress,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&info->progress >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)info + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&info->progress >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&info->progress);
  }
  proto_log::PlayerLogBodyDailyTaskProgress::set_progress(v7, info->progress);
  v8 = std::__shared_ptr_access<proto_log::PlayerLogBodyDailyTaskProgress,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDailyTaskProgress,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&info->is_finished >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)info + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&info->is_finished >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&info->is_finished);
  }
  proto_log::PlayerLogBodyDailyTaskProgress::set_is_finished(v8, info->is_finished);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  player = this->player_;
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyDailyTaskProgress,void>(
    &p_body_ptr,
    (const std::shared_ptr<proto_log::PlayerLogBodyDailyTaskProgress> *)(v3 + 32));
  Player::printStatLog(player, &p_body_ptr, &p_body_ext_ptr, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
  std::shared_ptr<proto_log::PlayerLogBodyDailyTaskProgress>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyDailyTaskProgress> *const)(v3 + 32));
  if ( v13 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 2057: range 000000001419D888-000000001419DBAA
void __cdecl PlayerDailyTaskComp::printSurePool(PlayerDailyTaskComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  unsigned int *v4; // rax
  uint32_t *v5; // rdx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v6; // rax
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  unsigned int val; // [rsp+10h] [rbp-D0h] BYREF
  uint32_t task_id; // [rsp+14h] [rbp-CCh]
  std::unordered_set<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-C8h] BYREF
  std::unordered_set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-C0h] BYREF
  std::unordered_set<unsigned int> *__for_range; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v15; // [rsp+30h] [rbp-B0h] BYREF
  std::string v16; // [rsp+50h] [rbp-90h] BYREF
  char v17[112]; // [rsp+70h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 8 oss:2058";
  *(_QWORD *)(v1 + 16) = PlayerDailyTaskComp::printSurePool;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v1 + 32));
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v1 + 32),
    " [");
  __for_range = &this->sure_pool_set_;
  __for_begin._M_cur = std::unordered_set<unsigned int>::begin(&this->sure_pool_set_)._M_cur;
  __for_end._M_cur = std::unordered_set<unsigned int>::end(&this->sure_pool_set_)._M_cur;
  while ( std::__detail::operator!=<unsigned int,false>(&__for_begin, &__for_end) )
  {
    v4 = (unsigned int *)std::__detail::_Node_iterator<unsigned int,true,false>::operator*(&__for_begin);
    v5 = v4;
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v4);
    }
    task_id = *v5;
    v6 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
           (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v1 + 32),
           task_id);
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v6, ",");
    std::__detail::_Node_iterator<unsigned int,true,false>::operator++(&__for_begin);
  }
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v1 + 32),
    "]");
  common::milog::MiLogStream::create(
    &v15,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/player_daily_task_comp.cpp",
    "printSurePool",
    2065);
  v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v15, (const char (*)[6])"uid: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
  v9 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v8, (const char (*)[13])" sure pool: ");
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::str[abi:cxx11](
    &v16,
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v1 + 32));
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, &v16);
  std::string::~string(&v16);
  common::milog::MiLogStream::~MiLogStream(&v15);
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::~StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v1 + 32));
  if ( v17 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 2069: range 000000001419DBAC-000000001419DD85
// local variable allocation has failed, the output may be wrong!
void __cdecl PlayerDailyTaskComp::doRefresh(PlayerDailyTaskComp *const this, uint32_t now, bool is_notify)
{
  common::milog::MiLogStream *v3; // rbx
  common::milog::MiLogStream *v4; // rax
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v7; // [rsp+20h] [rbp-30h] BYREF

  PlayerDailyTaskComp::clear(this);
  if ( PlayerDailyTaskComp::isOpen(this) )
  {
    PlayerDailyTaskComp::generateDailyTask(this);
    if ( std::map<unsigned int,DailyTaskInfo>::empty(&this->task_map_) )
    {
      common::milog::MiLogStream::create(
        &v7,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/player_daily_task_comp.cpp",
        "doRefresh",
        2080);
      v3 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v7, (const char (*)[6])"uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      v4 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &val);
      common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v4, (const char (*)[20])" task_map_ is empty");
      common::milog::MiLogStream::~MiLogStream(&v7);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->last_refresh_time_, *(_QWORD *)&now, &this->last_refresh_time_);
      }
      this->last_refresh_time_ = now;
      if ( *(_BYTE *)(((unsigned __int64)&this->refresh_times_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->refresh_times_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->refresh_times_);
      }
      ++this->refresh_times_;
      PlayerDailyTaskComp::startDailyTask(this);
      if ( is_notify )
        PlayerDailyTaskComp::broadcastDailyTask(this);
    }
  }
};

// Line 2102: range 000000001419DE14-000000001419E2ED
void __cdecl PlayerDailyTaskComp::broadcastDailyTask(PlayerDailyTaskComp *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  void (__fastcall **v4)(PlayerDailyTaskComp *const); // rax
  common::milog::MiLogStream *v5; // r14
  std::__shared_ptr_access<proto::WorldOwnerDailyTaskNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rdx
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // rax
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // r14
  unsigned int val; // [rsp+18h] [rbp-D8h] BYREF
  uint32_t owner_uid; // [rsp+1Ch] [rbp-D4h]
  PlayerDailyTaskComp::broadcastDailyTask::<lambda(Player&)> v12; // [rsp+20h] [rbp-D0h] BYREF
  common::milog::MiLogStream v13; // [rsp+40h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+60h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 14 world_ptr:2107 64 16 15 notify_ptr:2113";
  *(_QWORD *)(v1 + 16) = PlayerDailyTaskComp::broadcastDailyTask;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v4 = (void (__fastcall **)(PlayerDailyTaskComp *const))(this->_vptr_PlayerCompBase + 10);
  if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  (*v4)(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getMyPlayerWorld((const PlayerSceneComp *const)(v1 + 32));
  if ( std::operator==<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_daily_task_comp.cpp",
      "broadcastDailyTask",
      2110);
    v5 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v13,
           (const char (*)[30])"getMyPlayerWorld fails, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v13);
  }
  else
  {
    common::tools::perf::make_shared<proto::WorldOwnerDailyTaskNotify>();
    v6 = std::__shared_ptr_access<proto::WorldOwnerDailyTaskNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::WorldOwnerDailyTaskNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    if ( PlayerDailyTaskComp::fillOwnerDailyTaskNotify(this, v6) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player_daily_task_comp.cpp",
        "broadcastDailyTask",
        2116);
      v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v13, (const char (*)[6])"uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
      common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v8, (const char (*)[7])" fails");
      common::milog::MiLogStream::~MiLogStream(&v13);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      owner_uid = Player::getUid(this->player_);
      v9 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      std::shared_ptr<proto::WorldOwnerDailyTaskNotify>::shared_ptr(
        &v12.__notify_ptr,
        (const std::shared_ptr<proto::WorldOwnerDailyTaskNotify> *)(v1 + 64));
      v12.__owner_uid = owner_uid;
      std::function<ForeachPolicy ()(Player &)>::function<PlayerDailyTaskComp::broadcastDailyTask(void)::{lambda(Player &)#1},void,void>(
        (std::function<ForeachPolicy(Player&)> *const)&v13,
        &v12);
      World::foreachPlayer(v9, (std::function<ForeachPolicy(Player&)> *)&v13);
      std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v13);
      PlayerDailyTaskComp::broadcastDailyTask(void)::{lambda(Player &)#1}::~Player(&v12);
    }
    std::shared_ptr<proto::WorldOwnerDailyTaskNotify>::~shared_ptr((std::shared_ptr<proto::WorldOwnerDailyTaskNotify> *const)(v1 + 64));
  }
  std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v1 + 32));
  if ( v14 == (char *)v1 )
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

// Line 2120: range 000000001419DD86-000000001419DDF7
ForeachPolicy __cdecl PlayerDailyTaskComp::broadcastDailyTask(void)::{lambda(Player &)#1}::operator()(
        const PlayerDailyTaskComp::broadcastDailyTask::<lambda(Player&)> *const __closure,
        Player *player)
{
  std::shared_ptr<const google::protobuf::Message> p_msg_ptr; // [rsp+10h] [rbp-20h] BYREF

  std::shared_ptr<google::protobuf::Message const>::shared_ptr<proto::WorldOwnerDailyTaskNotify,void>(
    &p_msg_ptr,
    &__closure->__notify_ptr);
  Player::sendMessage(player, &p_msg_ptr, 0LL);
  std::shared_ptr<google::protobuf::Message const>::~shared_ptr(&p_msg_ptr);
  return 0;
};

// Line 2120: range 00000000141D7E8E-00000000141D7F28
void __cdecl PlayerDailyTaskComp::broadcastDailyTask(void)::{lambda(Player &)#1}::Player(
        PlayerDailyTaskComp::broadcastDailyTask::<lambda(Player&)> *const this,
        PlayerDailyTaskComp::broadcastDailyTask::<lambda(Player&)> *a2)
{
  uint32_t owner_uid; // ecx
  char v3; // al

  std::shared_ptr<proto::WorldOwnerDailyTaskNotify>::shared_ptr(&this->__notify_ptr, &a2->__notify_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&a2->__owner_uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->__owner_uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->__owner_uid);
  }
  owner_uid = a2->__owner_uid;
  v3 = *(_BYTE *)(((unsigned __int64)&this->__owner_uid >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->__owner_uid, a2, &this->__owner_uid);
  }
  this->__owner_uid = owner_uid;
};

// Line 2120: range 00000000141D7FF4-00000000141D808E
void __cdecl PlayerDailyTaskComp::broadcastDailyTask(void)::{lambda(Player &)#1}::Player(
        PlayerDailyTaskComp::broadcastDailyTask::<lambda(Player&)> *const this,
        const PlayerDailyTaskComp::broadcastDailyTask::<lambda(Player&)> *a2)
{
  uint32_t owner_uid; // ecx
  char v3; // al

  std::shared_ptr<proto::WorldOwnerDailyTaskNotify>::shared_ptr(&this->__notify_ptr, &a2->__notify_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&a2->__owner_uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->__owner_uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->__owner_uid);
  }
  owner_uid = a2->__owner_uid;
  v3 = *(_BYTE *)(((unsigned __int64)&this->__owner_uid >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->__owner_uid, a2, &this->__owner_uid);
  }
  this->__owner_uid = owner_uid;
};

// Line 2120: range 000000001419DDF8-000000001419DE12
void __cdecl PlayerDailyTaskComp::broadcastDailyTask(void)::{lambda(Player &)#1}::~Player(
        PlayerDailyTaskComp::broadcastDailyTask::<lambda(Player&)> *const this)
{
  std::shared_ptr<proto::WorldOwnerDailyTaskNotify>::~shared_ptr(&this->__notify_ptr);
};

// Line 2128: range 000000001419E2EE-000000001419E358
void __cdecl PlayerDailyTaskComp::notifyAllTaskVar(PlayerDailyTaskComp *const this)
{
  std::vector<unsigned int> key_vec; // [rsp+10h] [rbp-30h] BYREF

  common::tools::MiscUtils::getAllMapKeys<std::unordered_map<unsigned int,std::vector<int>>>(
    &key_vec,
    &this->task_var_map_);
  PlayerDailyTaskComp::notifyTaskVar(this, &key_vec);
  std::vector<unsigned int>::~vector(&key_vec);
};

// Line 2133: range 000000001419E35A-000000001419E713
void __cdecl PlayerDailyTaskComp::notifyTaskVar(
        PlayerDailyTaskComp *const this,
        const std::vector<unsigned int> *key_vec)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // rbx
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v5; // rax
  _DWORD *v6; // rdx
  __gnu_cxx::__normal_iterator<int*,std::vector<int> >::reference v7; // rax
  google::protobuf::int32 *v8; // rdx
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-F8h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-F0h] BYREF
  std::vector<int>::iterator __for_begin_0; // [rsp+28h] [rbp-E8h] BYREF
  std::vector<int>::iterator __for_end_0; // [rsp+30h] [rbp-E0h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-D8h]
  proto::TaskVar *task_var; // [rsp+40h] [rbp-D0h]
  std::vector<int> *__for_range_0; // [rsp+48h] [rbp-C8h]
  char v16[192]; // [rsp+50h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 8 key:2135 48 8 9 iter:2137 80 48 11 notify:2134";
  *(_QWORD *)(v2 + 16) = PlayerDailyTaskComp::notifyTaskVar;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862721] = -234881024;
  v4[536862722] = 62194;
  v4[536862724] = -202116109;
  proto::TaskVarNotify::TaskVarNotify((proto::TaskVarNotify *const)(v2 + 80));
  __for_range = key_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(key_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(key_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v5 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    *(_DWORD *)(v2 + 32) = *v6;
    *(std::unordered_map<unsigned int,std::vector<int>>::iterator *)(v2 + 48) = std::unordered_map<unsigned int,std::vector<int>>::find(
                                                                                  &this->task_var_map_,
                                                                                  (const std::unordered_map<unsigned int,std::vector<int>>::key_type *)(v2 + 32));
    __for_end_0._M_current = (int *)std::unordered_map<unsigned int,std::vector<int>>::end(&this->task_var_map_)._M_cur;
    if ( !std::__detail::operator==<std::pair<unsigned int const,std::vector<int>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<int> >,false> *)(v2 + 48),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<int> >,false> *)&__for_end_0) )
    {
      task_var = proto::TaskVarNotify::add_task_var_list((proto::TaskVarNotify *const)(v2 + 80));
      proto::TaskVar::set_key(task_var, *(_DWORD *)(v2 + 32));
      __for_range_0 = &std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<int>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<int> >,false,false> *const)(v2 + 48))->second;
      __for_begin_0._M_current = std::vector<int>::begin(__for_range_0)._M_current;
      __for_end_0._M_current = std::vector<int>::end(__for_range_0)._M_current;
      while ( __gnu_cxx::operator!=<int *,std::vector<int>>(&__for_begin_0, &__for_end_0) )
      {
        v7 = __gnu_cxx::__normal_iterator<int *,std::vector<int>>::operator*(&__for_begin_0);
        v8 = v7;
        if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v7);
        }
        proto::TaskVar::add_value_list(task_var, *v8);
        __gnu_cxx::__normal_iterator<int *,std::vector<int>>::operator++(&__for_begin_0);
      }
    }
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 80));
  proto::TaskVarNotify::~TaskVarNotify((proto::TaskVarNotify *const)(v2 + 80));
  if ( v16 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
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

// Line 2153: range 000000001419E714-000000001419E834
void __fastcall PlayerDailyTaskComp::clearGroupOnFinish(PlayerDailyTaskComp *const this, uint32_t task_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int Now; // r14d
  char *v6; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v7; // rax
  _DWORD *v8; // rdx
  char v9; // cl
  char v10[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 task_id:2152";
  *(_QWORD *)(v2 + 16) = PlayerDailyTaskComp::clearGroupOnFinish;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = task_id;
  Now = common::tools::TimeUtils::getNow();
  v6 = (char *)(v2 + 32);
  v7 = std::map<unsigned int,unsigned int>::operator[](
         &this->delayed_unregister_group_tasks_map_,
         (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 32));
  v8 = v7;
  v9 = *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000);
  if ( v9 != 0 && (char)(((unsigned __int8)v7 & 7) + 3) >= v9 )
  {
    LOBYTE(v6) = v9 != 0;
    __asan_report_store4(v7, v6, v7);
  }
  *v8 = Now;
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 2159: range 000000001419E836-000000001419EEF9
void __cdecl PlayerDailyTaskComp::tryUnregisterGroups(PlayerDailyTaskComp *const this, bool check_delay_time)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::reference v5; // rax
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr *v6; // rdx
  DailyTaskExcelConfigMgr *p_daily_task_config_mgr; // rcx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rcx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rcx
  std::_Rb_tree_const_iterator<unsigned int>::reference v18; // rax
  _DWORD *v19; // rdx
  uint32_t now; // [rsp+1Ch] [rbp-114h]
  std::map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-110h] BYREF
  std::set<unsigned int>::iterator __for_begin_0; // [rsp+28h] [rbp-108h] BYREF
  std::map<unsigned int,unsigned int> *__for_range; // [rsp+30h] [rbp-100h]
  std::set<unsigned int> *__for_range_0; // [rsp+38h] [rbp-F8h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *task_id; // [rsp+40h] [rbp-F0h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *done_time; // [rsp+48h] [rbp-E8h]
  const data::DailyTaskExcelConfig *task_config_ptr; // [rsp+50h] [rbp-E0h]
  std::set<unsigned int>::iterator __for_end; // [rsp+58h] [rbp-D8h] BYREF
  std::shared_ptr<Config> v29; // [rsp+60h] [rbp-D0h] BYREF
  common::milog::MiLogStream v30; // [rsp+70h] [rbp-C0h] BYREF
  char v31[160]; // [rsp+90h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 4 17 done_task_id:2182 48 48 18 done_task_set:2161";
  *(_QWORD *)(v2 + 16) = PlayerDailyTaskComp::tryUnregisterGroups;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862723] = -202116109;
  now = common::tools::TimeUtils::getNow();
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 48));
  __for_range = &this->delayed_unregister_group_tasks_map_;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&this->delayed_unregister_group_tasks_map_)._M_node;
  __for_begin_0._M_node = std::map<unsigned int,unsigned int>::end(&this->delayed_unregister_group_tasks_map_)._M_node;
  while ( std::operator!=(
            &__for_begin,
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_begin_0) )
  {
    v5 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
    v6 = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr *)v5;
    if ( ((unsigned __int8)v5 & 7) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v5->second + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v5 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v5->second + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(v5, 8LL);
    }
    __for_end._M_node = *v6;
    task_id = std::get<0ul,unsigned int const,unsigned int>((std::pair<unsigned int const,unsigned int> *)&__for_end);
    done_time = std::get<1ul,unsigned int const,unsigned int>((std::pair<unsigned int const,unsigned int> *)&__for_end);
    if ( !check_delay_time )
      goto LABEL_12;
    if ( *(_BYTE *)(((unsigned __int64)done_time >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)done_time & 7) + 3) >= *(_BYTE *)(((unsigned __int64)done_time >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(done_time);
    }
    if ( now >= *done_time + 1800 )
    {
LABEL_12:
      std::set<unsigned int>::insert((std::set<unsigned int> *const)(v2 + 48), task_id);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v29);
      p_daily_task_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v29)->design_config.txt_config_mgr.daily_task_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)task_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)task_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)task_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(task_id);
      }
      task_config_ptr = data::DailyTaskExcelConfigMgrBase::findDailyTaskExcelConfig(p_daily_task_config_mgr, *task_id);
      std::shared_ptr<Config>::~shared_ptr(&v29);
      if ( task_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&task_config_ptr->type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)task_config_ptr + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&task_config_ptr->type >> 3)
                                                                         + 0x7FFF8000) )
        {
          __asan_report_load4(&task_config_ptr->type);
        }
        if ( task_config_ptr->type == DAILY_TASK_SCENE )
        {
          common::milog::MiLogStream::create(
            &v30,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/player_daily_task_comp.cpp",
            "tryUnregisterGroups",
            2177);
          v11 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                  &v30,
                  (const char (*)[20])"unregister groups [");
          v12 = common::milog::MiLogStream::operator<<<unsigned int>(v11, &task_config_ptr->new_group_vec);
          v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  v12,
                  (const char (*)[16])"] when task_id=");
          v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, task_id);
          v15 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                  v14,
                  (const char (*)[23])" finish. check_delay: ");
          v16 = common::milog::MiLogStream::operator<<(v15, check_delay_time);
          v17 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v16, (const char (*)[10])" player: ");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          operator<<(v17, this->player_);
          common::milog::MiLogStream::~MiLogStream(&v30);
          PlayerDailyTaskComp::unregisterTaskGroups(this, task_config_ptr);
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v30,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/player_daily_task_comp.cpp",
          "tryUnregisterGroups",
          2172);
        v8 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
               &v30,
               (const char (*)[26])"findDailyTaskExcelConfig ");
        v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, task_id);
        v10 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v9, (const char (*)[8])" fails ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        operator<<(v10, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v30);
      }
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
  }
  __for_range_0 = (std::set<unsigned int> *)(v2 + 48);
  __for_begin_0._M_node = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v2 + 48))._M_node;
  __for_end._M_node = std::set<unsigned int>::end(__for_range_0)._M_node;
  while ( std::operator!=(&__for_begin_0, &__for_end) )
  {
    v18 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin_0);
    v19 = v18;
    if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v18);
    }
    *(_DWORD *)(v2 + 32) = *v19;
    std::map<unsigned int,unsigned int>::erase(
      &this->delayed_unregister_group_tasks_map_,
      (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 32));
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin_0);
  }
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 48));
  if ( v31 == (char *)v2 )
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
};

// Line 2189: range 000000001419EEFA-000000001419EF1D
int32_t __cdecl PlayerDailyTaskComp::onLogout(PlayerDailyTaskComp *const this)
{
  PlayerDailyTaskComp::tryUnregisterGroups(this, 0);
  return 0;
};

// Line 2195: range 000000001419EF1E-000000001419F783
__int64 __fastcall PlayerDailyTaskComp::onFilterCityReq(PlayerDailyTaskComp *const this, __int32 city_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rcx
  unsigned int v7; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rcx
  PlayerQuestComp *QuestComp; // rcx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rcx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rcx
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyDailyTaskFilterCity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyDailyTaskFilterCity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  Player *player; // r14
  __int64 result; // rax
  std::string v26; // [rsp+0h] [rbp-110h]
  PlayerDailyTaskComp *thisa; // [rsp+8h] [rbp-108h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-F0h] BYREF
  std::shared_ptr<google::protobuf::Message> v29; // [rsp+30h] [rbp-E0h] BYREF
  common::milog::MiLogStream v30; // [rsp+40h] [rbp-D0h] BYREF
  char v31[176]; // [rsp+60h] [rbp-B0h] BYREF

  v26._M_string_length = (std::string::size_type)this;
  HIDWORD(v26._M_dataplus._M_p) = city_id;
  v2 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 1 23 log_context_holder:2220 64 4 16 old_city_id:2216 80 4 12 city_id:2194 96 16 12 log_ptr:2221";
  *(_QWORD *)(v2 + 16) = PlayerDailyTaskComp::onFilterCityReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234556924;
  v4[536862723] = -202178560;
  *(_DWORD *)(v2 + 80) = city_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->filter_city_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->filter_city_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->filter_city_id_);
  }
  if ( this->filter_city_id_ == *(_DWORD *)(v2 + 80) )
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/player_daily_task_comp.cpp",
      "onFilterCityReq",
      2198);
    v5 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
           &v30,
           (const char (*)[23])"repeat filter city_id:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->filter_city_id_);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v6, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v30);
    v7 = 0;
    goto LABEL_32;
  }
  if ( !*(_DWORD *)(v2 + 80) )
    goto LABEL_23;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v29);
  v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v29);
  *(&v26._anon_0._M_allocated_capacity + 1) = (std::string::size_type)DailyTaskExcelConfigMgr::findTaskOpenConfigByCityId(
                                                                        &v8->design_config.txt_config_mgr.daily_task_config_mgr,
                                                                        *(_DWORD *)(v2 + 80));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v29);
  if ( !*(&v26._anon_0._M_allocated_capacity + 1) )
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/player_daily_task_comp.cpp",
      "onFilterCityReq",
      2207);
    v9 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v30, (const char (*)[14])" req city_id ");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 80));
    v11 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
            v10,
            (const char (*)[39])" not found in dailyTaskOpenCityConfig.");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v11, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v30);
    v7 = 5;
    goto LABEL_32;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  QuestComp = Player::getQuestComp(this->player_);
  if ( *(_BYTE *)(((*(&v26._anon_0._M_allocated_capacity + 1) + 12) >> 3) + 0x7FFF8000) != 0
    && (char)(((v26._anon_0._M_local_buf[8] + 12) & 7) + 3) >= *(_BYTE *)(((*(&v26._anon_0._M_allocated_capacity + 1)
                                                                          + 12) >> 3)
                                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(*(&v26._anon_0._M_allocated_capacity + 1) + 12);
  }
  if ( PlayerQuestComp::getQuestState(QuestComp, *(_DWORD *)(*(&v26._anon_0._M_allocated_capacity + 1) + 12)) == QUEST_STATE_FINISHED )
  {
LABEL_23:
    if ( *(_BYTE *)(((unsigned __int64)&this->filter_city_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->filter_city_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->filter_city_id_);
    }
    *(_DWORD *)(v2 + 64) = this->filter_city_id_;
    this->filter_city_id_ = *(_DWORD *)(v2 + 80);
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/player_daily_task_comp.cpp",
      "onFilterCityReq",
      2218);
    v17 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v30, (const char (*)[18])" filter city_id: ");
    v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v2 + 64));
    v19 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v18, (const char (*)[6])" --> ");
    v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v2 + 80));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v20, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v30);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    BasicComp = Player::getBasicComp(this->player_);
    PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v30, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 0xDACu, v26);
    std::string::~string(&v30);
    common::tools::perf::make_shared<proto_log::PlayerLogBodyDailyTaskFilterCity>();
    v22 = std::__shared_ptr_access<proto_log::PlayerLogBodyDailyTaskFilterCity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDailyTaskFilterCity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    proto_log::PlayerLogBodyDailyTaskFilterCity::set_old_city_id(v22, *(_DWORD *)(v2 + 64));
    v23 = std::__shared_ptr_access<proto_log::PlayerLogBodyDailyTaskFilterCity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDailyTaskFilterCity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    proto_log::PlayerLogBodyDailyTaskFilterCity::set_new_city_id(v23, *(_DWORD *)(v2 + 80));
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    player = thisa->player_;
    std::shared_ptr<google::protobuf::Message>::shared_ptr(&v29, 0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyDailyTaskFilterCity,void>(
      &p_body_ptr,
      (const std::shared_ptr<proto_log::PlayerLogBodyDailyTaskFilterCity> *)(v2 + 96));
    Player::printStatLog(player, &p_body_ptr, &v29, 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v29);
    v7 = 0;
    std::shared_ptr<proto_log::PlayerLogBodyDailyTaskFilterCity>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyDailyTaskFilterCity> *const)(v2 + 96));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/player_daily_task_comp.cpp",
      "onFilterCityReq",
      2212);
    v13 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v30, (const char (*)[14])" req city_id ");
    v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 80));
    v15 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
            v14,
            (const char (*)[20])" not open by quest:");
    v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v15,
            (const unsigned int *)(*(&v26._anon_0._M_allocated_capacity + 1) + 12));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v16, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v30);
    v7 = 1333;
  }
LABEL_32:
  result = v7;
  if ( v31 == (char *)v2 )
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

// Line 2229: range 000000001419F784-000000001419FAC5
void __cdecl PlayerDailyTaskComp::notifyUnlockedCities(const PlayerDailyTaskComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  uint32_t *p_quest_id; // rax
  std::__shared_ptr_access<proto::DailyTaskUnlockedCitiesNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rcx
  Player *player; // r14
  std::vector<data::CityTaskOpenExcelConfig>::const_iterator __for_begin; // [rsp+18h] [rbp-A8h] BYREF
  std::vector<data::CityTaskOpenExcelConfig>::const_iterator __for_end; // [rsp+20h] [rbp-A0h] BYREF
  PlayerQuestComp *quest_comp; // [rsp+28h] [rbp-98h]
  const std::vector<data::CityTaskOpenExcelConfig> *__for_range; // [rsp+30h] [rbp-90h]
  const data::CityTaskOpenExcelConfig *city_config; // [rsp+38h] [rbp-88h]
  std::shared_ptr<const google::protobuf::Message> v12; // [rsp+40h] [rbp-80h] BYREF
  char v13[112]; // [rsp+50h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 15 notify_ptr:2230";
  *(_QWORD *)(v1 + 16) = PlayerDailyTaskComp::notifyUnlockedCities;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::tools::perf::make_shared<proto::DailyTaskUnlockedCitiesNotify>();
  if ( std::operator!=<proto::DailyTaskUnlockedCitiesNotify>(
         0LL,
         (const std::shared_ptr<proto::DailyTaskUnlockedCitiesNotify> *)(v1 + 32)) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    quest_comp = Player::getQuestComp(this->player_);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v12);
    __for_range = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v12)->design_config.txt_config_mgr.daily_task_config_mgr.city_task_open_excel_config_vec;
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v12);
    __for_begin._M_current = std::vector<data::CityTaskOpenExcelConfig>::begin(__for_range)._M_current;
    __for_end._M_current = std::vector<data::CityTaskOpenExcelConfig>::end(__for_range)._M_current;
    while ( __gnu_cxx::operator!=<data::CityTaskOpenExcelConfig const*,std::vector<data::CityTaskOpenExcelConfig>>(
              &__for_begin,
              &__for_end) )
    {
      city_config = __gnu_cxx::__normal_iterator<data::CityTaskOpenExcelConfig const*,std::vector<data::CityTaskOpenExcelConfig>>::operator*(&__for_begin);
      p_quest_id = &city_config->quest_id;
      if ( *(_BYTE *)(((unsigned __int64)p_quest_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_quest_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_quest_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_quest_id);
      }
      if ( PlayerQuestComp::getQuestState(quest_comp, city_config->quest_id) == QUEST_STATE_FINISHED )
      {
        v5 = std::__shared_ptr_access<proto::DailyTaskUnlockedCitiesNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::DailyTaskUnlockedCitiesNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
        if ( *(_BYTE *)(((unsigned __int64)&city_config->city_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&city_config->city_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&city_config->city_id);
        }
        proto::DailyTaskUnlockedCitiesNotify::add_unlocked_city_list(v5, city_config->city_id);
      }
      __gnu_cxx::__normal_iterator<data::CityTaskOpenExcelConfig const*,std::vector<data::CityTaskOpenExcelConfig>>::operator++(&__for_begin);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    player = this->player_;
    std::dynamic_pointer_cast<google::protobuf::Message const,proto::DailyTaskUnlockedCitiesNotify>((const std::shared_ptr<proto::DailyTaskUnlockedCitiesNotify> *)&v12);
    Player::sendMessage(player, &v12, 0LL);
    std::shared_ptr<google::protobuf::Message const>::~shared_ptr(&v12);
  }
  std::shared_ptr<proto::DailyTaskUnlockedCitiesNotify>::~shared_ptr((std::shared_ptr<proto::DailyTaskUnlockedCitiesNotify> *const)(v1 + 32));
  if ( v13 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 2246: range 000000001419FAC6-000000001419FEA8
void __cdecl PlayerDailyTaskComp::checkAndRepair(PlayerDailyTaskComp *const this)
{
  DailyTaskExcelConfigMgr *p_daily_task_config_mgr; // rcx
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rcx
  Player *v5; // rsi
  PlayerQuestComp *QuestComp; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rcx
  Player *player; // rsi
  const data::CityTaskOpenExcelConfig *city_open_task_config_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v14; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v15; // [rsp+30h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->filter_city_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->filter_city_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->filter_city_id_);
  }
  if ( this->filter_city_id_ )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v14);
    p_daily_task_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14)->design_config.txt_config_mgr.daily_task_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->filter_city_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->filter_city_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->filter_city_id_);
    }
    city_open_task_config_ptr = DailyTaskExcelConfigMgr::findTaskOpenConfigByCityId(
                                  p_daily_task_config_mgr,
                                  this->filter_city_id_);
    std::shared_ptr<Config>::~shared_ptr(&v14);
    if ( city_open_task_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      QuestComp = Player::getQuestComp(this->player_);
      if ( *(_BYTE *)(((unsigned __int64)&city_open_task_config_ptr->quest_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)city_open_task_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&city_open_task_config_ptr->quest_id >> 3)
                                                                                 + 0x7FFF8000) )
      {
        __asan_report_load4(&city_open_task_config_ptr->quest_id);
      }
      if ( PlayerQuestComp::getQuestState(QuestComp, city_open_task_config_ptr->quest_id) != QUEST_STATE_FINISHED )
      {
        common::milog::MiLogStream::create(
          &v15,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/player_daily_task_comp.cpp",
          "checkAndRepair",
          2258);
        v7 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
               &v15,
               (const char (*)[21])" repair filter_city ");
        v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->filter_city_id_);
        v9 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v8, (const char (*)[14])off_252648A0);
        v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v9,
                &city_open_task_config_ptr->quest_id);
        v11 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v10, (const char (*)[13])off_252648E0);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        player = this->player_;
        operator<<(v11, player);
        common::milog::MiLogStream::~MiLogStream(&v15);
        if ( *(_BYTE *)(((unsigned __int64)&this->filter_city_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->filter_city_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&this->filter_city_id_, player, &this->filter_city_id_);
        }
        this->filter_city_id_ = 0;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/player_daily_task_comp.cpp",
        "checkAndRepair",
        2252);
      v2 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
             &v15,
             (const char (*)[21])" repair filter_city ");
      v3 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &this->filter_city_id_);
      v4 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v3, (const char (*)[22])off_25264860);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v5 = this->player_;
      operator<<(v4, v5);
      common::milog::MiLogStream::~MiLogStream(&v15);
      if ( *(_BYTE *)(((unsigned __int64)&this->filter_city_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->filter_city_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->filter_city_id_, v5, &this->filter_city_id_);
      }
      this->filter_city_id_ = 0;
    }
  }
};

// Line 2268: range 000000001419FEAA-00000000141A0375
bool __cdecl PlayerDailyTaskComp::isTaskGroupReplaced(
        const PlayerDailyTaskComp *const this,
        const data::DailyTaskExcelConfig *task_config)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v5; // rax
  _DWORD *v6; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  uint32_t SceneComp; // eax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  int v13; // r14d
  Scene *v14; // rax
  SceneBlockGroupComp *BlockGroupComp; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  bool result; // al
  bool v21; // [rsp+Fh] [rbp-F1h]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-D8h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-D0h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-C8h]
  std::shared_ptr<Config> v25; // [rsp+40h] [rbp-C0h] BYREF
  common::milog::MiLogStream v26; // [rsp+50h] [rbp-B0h] BYREF
  char v27[144]; // [rsp+70h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 13 group_id:2273 48 4 13 scene_id:2275 64 16 14 scene_ptr:2276";
  *(_QWORD *)(v2 + 16) = PlayerDailyTaskComp::isTaskGroupReplaced;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&task_config->type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)task_config + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&task_config->type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&task_config->type);
  }
  if ( task_config->type == DAILY_TASK_SCENE )
  {
    __for_range = &task_config->new_group_vec;
    __for_begin._M_current = std::vector<unsigned int>::begin(&task_config->new_group_vec)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(&task_config->new_group_vec)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v5 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
      v6 = v5;
      if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v5);
      }
      *(_DWORD *)(v2 + 32) = *v6;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v25);
      v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v25);
      *(_DWORD *)(v2 + 48) = LuaConfigMgr::getSceneIdByGroupId(&v7->design_config.lua_config_mgr, *(_DWORD *)(v2 + 32));
      std::shared_ptr<Config>::~shared_ptr(&v25);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      SceneComp = (unsigned int)Player::getSceneComp(this->player_);
      PlayerSceneComp::findScene((const PlayerSceneComp *const)(v2 + 64), SceneComp);
      if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v26,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/player_daily_task_comp.cpp",
          "isTaskGroupReplaced",
          2279);
        v9 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v26, (const char (*)[11])"findScene:");
        v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v9,
                (const unsigned int *)(v2 + 48));
        v11 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v10, (const char (*)[11])" group_id:");
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v11,
                (const unsigned int *)(v2 + 32));
        common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v12, (const char (*)[7])" fails");
        common::milog::MiLogStream::~MiLogStream(&v26);
        v13 = 0;
      }
      else
      {
        v14 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        BlockGroupComp = Scene::getBlockGroupComp(v14);
        if ( SceneBlockGroupComp::isGroupReplaced(BlockGroupComp, *(_DWORD *)(v2 + 32)) )
        {
          common::milog::MiLogStream::create(
            &v26,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/player_daily_task_comp.cpp",
            "isTaskGroupReplaced",
            2284);
          v16 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                  &v26,
                  (const char (*)[28])"[DAILY_TASK] daily_task_id:");
          v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &task_config->id);
          v18 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v17, (const char (*)[9])" group: ");
          v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v18,
                  (const unsigned int *)(v2 + 32));
          common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v19, (const char (*)[13])off_25264A40);
          common::milog::MiLogStream::~MiLogStream(&v26);
          v21 = 1;
          v13 = 1;
        }
        else
        {
          v13 = 2;
        }
      }
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 64));
      if ( v13 && v13 != 2 )
        goto LABEL_23;
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    v21 = 0;
  }
  else
  {
    v21 = 0;
  }
LABEL_23:
  result = v21;
  if ( v27 == (char *)v2 )
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

// Line 2292: range 00000000141A0376-00000000141A0802
void __fastcall PlayerDailyTaskComp::onDailyTaskFinish(PlayerDailyTaskComp *const this, uint32_t task_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v8; // rax
  uint32_t v9; // ecx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rcx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rcx
  const data::DailyTaskExcelConfig *task_config_ptr; // [rsp+10h] [rbp-A0h]
  uint32_t *refresh_count; // [rsp+18h] [rbp-98h]
  std::shared_ptr<Config> v17; // [rsp+20h] [rbp-90h] BYREF
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-80h] BYREF
  char v19[96]; // [rsp+50h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 task_id:2291";
  *(_QWORD *)(v2 + 16) = PlayerDailyTaskComp::onDailyTaskFinish;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = task_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v17);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17);
  task_config_ptr = data::DailyTaskExcelConfigMgrBase::findDailyTaskExcelConfig(
                      &v5->design_config.txt_config_mgr.daily_task_config_mgr,
                      *(_DWORD *)(v2 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v17);
  if ( task_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&task_config_ptr->type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)task_config_ptr + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&task_config_ptr->type >> 3)
                                                                     + 0x7FFF8000) )
    {
      __asan_report_load4(&task_config_ptr->type);
    }
    if ( task_config_ptr->type == DAILY_TASK_QUEST )
    {
      v8 = std::unordered_map<unsigned int,unsigned int>::operator[](
             &this->cycle_quest_count_map_,
             (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 32));
      refresh_count = v8;
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v8);
      }
      v9 = ++*refresh_count;
      if ( *(_BYTE *)(((unsigned __int64)&task_config_ptr->task_cycle_refresh_times >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)task_config_ptr - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&task_config_ptr->task_cycle_refresh_times >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4(&task_config_ptr->task_cycle_refresh_times);
      }
      if ( v9 >= task_config_ptr->task_cycle_refresh_times )
      {
        common::milog::MiLogStream::create(
          &v18,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/player_daily_task_comp.cpp",
          "onDailyTaskFinish",
          2307);
        v10 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v18, (const char (*)[6])"task:");
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v10,
                (const unsigned int *)(v2 + 32));
        v12 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                v11,
                (const char (*)[29])" reached max refresh times. ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        operator<<(v12, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v18);
      }
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/player_daily_task_comp.cpp",
        "onDailyTaskFinish",
        2309);
      v13 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
              &v18,
              (const char (*)[24])"cycle quest count map: ");
      v14 = common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(v13, &this->cycle_quest_count_map_);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      operator<<(v14, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v18);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_daily_task_comp.cpp",
      "onDailyTaskFinish",
      2296);
    v6 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
           &v18,
           (const char (*)[26])"findDailyTaskExcelConfig ");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v7, (const char (*)[7])" fails");
    common::milog::MiLogStream::~MiLogStream(&v18);
  }
  if ( v19 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 2314: range 00000000141A0804-00000000141A0C18
bool __cdecl PlayerDailyTaskComp::isDailyTaskAvailableInQuestCycle(
        const PlayerDailyTaskComp *const this,
        const data::DailyTaskExcelConfig *task_config)
{
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rcx
  uint32_t v7; // ecx
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rcx
  common::milog::MiLogStream *v14; // rdx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::tools::transcribe_cv_t_3 *count_ptr; // [rsp+18h] [rbp-38h]
  common::milog::MiLogStream v20; // [rsp+20h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&task_config->type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)task_config + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&task_config->type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&task_config->type);
  }
  if ( task_config->type )
    return 1;
  count_ptr = common::tools::MiscUtils::findMapValuePointer<std::unordered_map<unsigned int,unsigned int> const>(
                &this->cycle_quest_count_map_,
                &task_config->id);
  if ( !count_ptr )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/player_daily_task_comp.cpp",
      "isDailyTaskAvailableInQuestCycle",
      2322);
    v3 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
           &v20,
           (const char (*)[38])"cycle quest count not found for pool:");
    v4 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &task_config->pool_id);
    v5 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v4, (const char (*)[8])", task:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &task_config->id);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_19:
    operator<<(v6, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v20);
    return 1;
  }
  if ( *(_BYTE *)(((unsigned __int64)count_ptr >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)count_ptr & 7) + 3) >= *(_BYTE *)(((unsigned __int64)count_ptr >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(count_ptr);
  }
  v7 = *count_ptr;
  if ( *(_BYTE *)(((unsigned __int64)&task_config->task_cycle_refresh_times >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)task_config - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&task_config->task_cycle_refresh_times >> 3)
                                                               + 0x7FFF8000) )
  {
    __asan_report_load4(&task_config->task_cycle_refresh_times);
  }
  if ( v7 < task_config->task_cycle_refresh_times )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/player_daily_task_comp.cpp",
      "isDailyTaskAvailableInQuestCycle",
      2330);
    v14 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
            &v20,
            (const char (*)[19])"cycle quest count:");
    v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, count_ptr);
    v16 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v15, (const char (*)[24])off_25264D20);
    v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &task_config->pool_id);
    v18 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v17, (const char (*)[8])", task:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &task_config->id);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_19;
  }
  common::milog::MiLogStream::create(
    &v20,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/player_daily_task_comp.cpp",
    "isDailyTaskAvailableInQuestCycle",
    2327);
  v8 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v20, (const char (*)[19])"cycle quest count:");
  v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, count_ptr);
  v10 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v9, (const char (*)[24])off_25264CE0);
  v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &task_config->pool_id);
  v12 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v11, (const char (*)[8])", task:");
  v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &task_config->id);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  operator<<(v13, this->player_);
  common::milog::MiLogStream::~MiLogStream(&v20);
  return 0;
};

// Line 2335: range 00000000141A0C1A-00000000141A0F62
void __fastcall PlayerDailyTaskComp::resetQuestCycleCountByPoolId(PlayerDailyTaskComp *const this, uint32_t pool_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rcx
  std::vector<data::DailyTaskExcelConfig>::const_iterator __for_begin; // [rsp+18h] [rbp-B8h] BYREF
  std::vector<data::DailyTaskExcelConfig>::const_iterator __for_end; // [rsp+20h] [rbp-B0h] BYREF
  const std::vector<data::DailyTaskExcelConfig> *task_config_vec_ptr; // [rsp+28h] [rbp-A8h]
  const std::vector<data::DailyTaskExcelConfig> *__for_range; // [rsp+30h] [rbp-A0h]
  const data::DailyTaskExcelConfig *task_config; // [rsp+38h] [rbp-98h]
  std::shared_ptr<Config> v16; // [rsp+40h] [rbp-90h] BYREF
  common::milog::MiLogStream v17; // [rsp+50h] [rbp-80h] BYREF
  char v18[96]; // [rsp+70h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 pool_id:2334";
  *(_QWORD *)(v2 + 16) = PlayerDailyTaskComp::resetQuestCycleCountByPoolId;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = pool_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v16);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v16);
  task_config_vec_ptr = DailyTaskExcelConfigMgr::findPoolTaskVec(
                          &v5->design_config.txt_config_mgr.daily_task_config_mgr,
                          *(_DWORD *)(v2 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v16);
  if ( task_config_vec_ptr )
  {
    __for_range = task_config_vec_ptr;
    __for_begin._M_current = std::vector<data::DailyTaskExcelConfig>::begin(task_config_vec_ptr)._M_current;
    __for_end._M_current = std::vector<data::DailyTaskExcelConfig>::end(task_config_vec_ptr)._M_current;
    while ( __gnu_cxx::operator!=<data::DailyTaskExcelConfig const*,std::vector<data::DailyTaskExcelConfig>>(
              &__for_begin,
              &__for_end) )
    {
      task_config = __gnu_cxx::__normal_iterator<data::DailyTaskExcelConfig const*,std::vector<data::DailyTaskExcelConfig>>::operator*(&__for_begin);
      std::unordered_map<unsigned int,unsigned int>::erase(&this->cycle_quest_count_map_, &task_config->id);
      __gnu_cxx::__normal_iterator<data::DailyTaskExcelConfig const*,std::vector<data::DailyTaskExcelConfig>>::operator++(&__for_begin);
    }
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/player_daily_task_comp.cpp",
      "resetQuestCycleCountByPoolId",
      2346);
    v8 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v17, (const char (*)[12])"quest pool:");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 32));
    v10 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
            v9,
            (const char (*)[35])" exhausted: reset cycle count map.");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v10, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v17);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_daily_task_comp.cpp",
      "resetQuestCycleCountByPoolId",
      2339);
    v6 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
           &v17,
           (const char (*)[26])"findPoolTaskVec pool_id: ");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v7, (const char (*)[7])" fails");
    common::milog::MiLogStream::~MiLogStream(&v17);
  }
  if ( v18 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
