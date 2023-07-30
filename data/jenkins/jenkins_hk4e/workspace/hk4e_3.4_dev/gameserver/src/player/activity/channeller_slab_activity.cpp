// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/channeller_slab_activity.cpp

// Line 41: range 0000000014F24560-0000000014F24F20
void __cdecl ChannellerSlabActivity::BinData::fromBin(
        ChannellerSlabActivity::BinData *const this,
        const proto::ChannellerSlabScheduleBin *bin)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  uint32_t v5; // edx
  int v6; // eax
  ChannellerSlabActivity::StageData *v7; // rax
  ChannellerSlabActivity::StageData *v8; // rdx
  const google::protobuf::RepeatedField<unsigned int> *v9; // rax
  unsigned int v10; // r14d
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v11; // rax
  unsigned int *v12; // rdx
  unsigned int v13; // r14d
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v14; // rax
  unsigned int *v15; // rdx
  uint32_t v16; // edx
  uint32_t v17; // ecx
  bool is_first_pass_reward_taken; // dl
  std::vector<unsigned int> *p_last_condition_id_vec; // rbx
  const google::protobuf::RepeatedField<unsigned int> *condition_id_list; // rax
  bool is_open; // dl
  uint32_t difficulty_id; // edx
  const google::protobuf::RepeatedField<unsigned int> *v23; // rax
  bool v24; // dl
  std::map<unsigned int,ChannellerSlabActivity::LoopDungeonData>::key_type __k; // [rsp+18h] [rbp-188h] BYREF
  int32_t i; // [rsp+1Ch] [rbp-184h]
  google::protobuf::RepeatedPtrField<proto::ChannellerSlabChallengeBin>::const_iterator __for_begin; // [rsp+20h] [rbp-180h] BYREF
  google::protobuf::RepeatedPtrField<proto::ChannellerSlabChallengeBin>::const_iterator __for_end; // [rsp+28h] [rbp-178h] BYREF
  const proto::ChannellerSlabBuffDataBin *proto_buff_data; // [rsp+30h] [rbp-170h]
  const proto::ChannellerSlabBuffSchemeBin *proto_single_buff_scheme; // [rsp+38h] [rbp-168h]
  const google::protobuf::Map<unsigned int,unsigned int> *__for_range_0; // [rsp+40h] [rbp-160h]
  const proto::ChannellerSlabBuffSchemeBin *proto_mp_buff_scheme; // [rsp+48h] [rbp-158h]
  const google::protobuf::Map<unsigned int,unsigned int> *__for_range_1; // [rsp+50h] [rbp-150h]
  const google::protobuf::RepeatedPtrField<proto::ChannellerSlabAssistBin> *__for_range_2; // [rsp+58h] [rbp-148h]
  const proto::ChannellerSlabLoopDungeonStageBin *proto_loop_dungeon_stage; // [rsp+60h] [rbp-140h]
  const google::protobuf::RepeatedPtrField<proto::ChannellerSlabLoopDungeonDataBin> *__for_range_3; // [rsp+68h] [rbp-138h]
  const proto::ChannellerSlabLoopDungeonDataBin *proto_loop_dungeon_data; // [rsp+70h] [rbp-130h]
  ChannellerSlabActivity::LoopDungeonData *loop_dungeon_data; // [rsp+78h] [rbp-128h]
  const proto::ChannellerSlabAssistBin *proto_assist_bin; // [rsp+80h] [rbp-120h]
  const unsigned int *p_slot_id_0; // [rsp+88h] [rbp-118h]
  const unsigned int *p_slot_id; // [rsp+90h] [rbp-110h]
  const proto::ChannellerSlabStageBin *stage_bin; // [rsp+98h] [rbp-108h]
  const google::protobuf::RepeatedPtrField<proto::ChannellerSlabChallengeBin> *__for_range; // [rsp+A0h] [rbp-100h]
  const proto::ChannellerSlabChallengeBin *challenge_bin; // [rsp+A8h] [rbp-F8h]
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __for_begin_0; // [rsp+B0h] [rbp-F0h] BYREF
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __for_end_0; // [rsp+D0h] [rbp-D0h] BYREF
  char v47[176]; // [rsp+F0h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v47;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 12 14 assist_data:71 64 32 8 stage:46";
  *(_QWORD *)(v2 + 16) = ChannellerSlabActivity::BinData::fromBin;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219020288;
  v4[536862723] = -202116109;
  v5 = proto::ChannellerSlabScheduleBin::tokens(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->tokens >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->tokens >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->tokens);
  }
  this->tokens = v5;
  for ( i = 0; ; ++i )
  {
    v6 = proto::ChannellerSlabScheduleBin::stage_list_size(bin);
    if ( i >= v6 )
      break;
    stage_bin = proto::ChannellerSlabScheduleBin::stage_list(bin, i);
    ChannellerSlabActivity::StageData::StageData((ChannellerSlabActivity::StageData *const)(v2 + 64));
    *(_DWORD *)(v2 + 64) = i + 1;
    *(_BYTE *)(v2 + 68) = proto::ChannellerSlabStageBin::is_dungeon_done(stage_bin);
    __for_range = proto::ChannellerSlabStageBin::challenge_list(stage_bin);
    __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::ChannellerSlabChallengeBin>::begin(__for_range).it_;
    __for_end.it_ = google::protobuf::RepeatedPtrField<proto::ChannellerSlabChallengeBin>::end(__for_range).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<proto::ChannellerSlabChallengeBin const>::operator!=(
              &__for_begin,
              &__for_end) )
    {
      challenge_bin = google::protobuf::internal::RepeatedPtrIterator<proto::ChannellerSlabChallengeBin const>::operator*(&__for_begin);
      __k = proto::ChannellerSlabChallengeBin::active_camp_index(challenge_bin);
      std::vector<unsigned int>::emplace_back<unsigned int>(
        (std::vector<unsigned int> *const)(v2 + 72),
        &__k,
        (unsigned int *)(v2 + 72));
      google::protobuf::internal::RepeatedPtrIterator<proto::ChannellerSlabChallengeBin const>::operator++(&__for_begin);
    }
    v7 = std::move<ChannellerSlabActivity::StageData &>((ChannellerSlabActivity::StageData *)(v2 + 64));
    std::vector<ChannellerSlabActivity::StageData>::emplace_back<ChannellerSlabActivity::StageData>(
      &this->stage_vec,
      v7,
      v8);
    ChannellerSlabActivity::StageData::~StageData((ChannellerSlabActivity::StageData *const)(v2 + 64));
  }
  proto_buff_data = proto::ChannellerSlabScheduleBin::buff_data(bin);
  v9 = proto::ChannellerSlabBuffDataBin::buff_id_list(proto_buff_data);
  common::tools::MiscUtils::setFromRepeated<std::unordered_set<unsigned int>,unsigned int>(
    &this->buff_data.buff_id_set,
    v9);
  proto_single_buff_scheme = proto::ChannellerSlabBuffDataBin::single_buff_scheme(proto_buff_data);
  __for_range_0 = proto::ChannellerSlabBuffSchemeBin::slot_map(proto_single_buff_scheme);
  google::protobuf::Map<unsigned int,unsigned int>::begin(&__for_begin_0, __for_range_0);
  google::protobuf::Map<unsigned int,unsigned int>::end(&__for_end_0, __for_range_0);
  while ( google::protobuf::operator!=(&__for_begin_0, &__for_end_0) )
  {
    p_slot_id = (const unsigned int *)google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator*(&__for_begin_0);
    if ( *(_BYTE *)(((unsigned __int64)(p_slot_id + 1) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)p_slot_id + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(p_slot_id + 1) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v10 = p_slot_id[1];
    v11 = std::unordered_map<unsigned int,unsigned int>::operator[](
            &this->buff_data.single_buff_scheme.slot_map,
            p_slot_id);
    v12 = v11;
    if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v11);
    }
    *v12 = v10;
    google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator++(&__for_begin_0);
  }
  proto_mp_buff_scheme = proto::ChannellerSlabBuffDataBin::mp_buff_scheme(proto_buff_data);
  __for_range_1 = proto::ChannellerSlabBuffSchemeBin::slot_map(proto_mp_buff_scheme);
  google::protobuf::Map<unsigned int,unsigned int>::begin(&__for_begin_0, __for_range_1);
  google::protobuf::Map<unsigned int,unsigned int>::end(&__for_end_0, __for_range_1);
  while ( google::protobuf::operator!=(&__for_begin_0, &__for_end_0) )
  {
    p_slot_id_0 = (const unsigned int *)google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator*(&__for_begin_0);
    if ( *(_BYTE *)(((unsigned __int64)(p_slot_id_0 + 1) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)p_slot_id_0 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(p_slot_id_0 + 1) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v13 = p_slot_id_0[1];
    v14 = std::unordered_map<unsigned int,unsigned int>::operator[](
            &this->buff_data.mp_buff_scheme.slot_map,
            p_slot_id_0);
    v15 = v14;
    if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v14);
    }
    *v15 = v13;
    google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator++(&__for_begin_0);
  }
  __for_range_2 = proto::ChannellerSlabBuffDataBin::assist_bin_list(proto_buff_data);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::ChannellerSlabAssistBin>::begin(__for_range_2).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::ChannellerSlabAssistBin>::end(__for_range_2).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::ChannellerSlabAssistBin const>::operator!=(
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::ChannellerSlabAssistBin> *const)&__for_begin,
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::ChannellerSlabAssistBin>::iterator *)&__for_end) )
  {
    proto_assist_bin = google::protobuf::internal::RepeatedPtrIterator<proto::ChannellerSlabAssistBin const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::ChannellerSlabAssistBin> *const)&__for_begin);
    *(_DWORD *)(v2 + 32) = 0;
    *(_DWORD *)(v2 + 36) = 0;
    *(_DWORD *)(v2 + 40) = 0;
    *(_DWORD *)(v2 + 32) = proto::ChannellerSlabAssistBin::uid(proto_assist_bin);
    *(_DWORD *)(v2 + 36) = proto::ChannellerSlabAssistBin::avatar_id(proto_assist_bin);
    *(_DWORD *)(v2 + 40) = proto::ChannellerSlabAssistBin::avatar_level(proto_assist_bin);
    std::vector<ChannellerSlabActivity::AssistData>::push_back(
      &this->buff_data.assist_vec,
      (const std::vector<ChannellerSlabActivity::AssistData>::value_type *)(v2 + 32));
    google::protobuf::internal::RepeatedPtrIterator<proto::ChannellerSlabAssistBin const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::ChannellerSlabAssistBin> *const)&__for_begin);
  }
  proto_loop_dungeon_stage = proto::ChannellerSlabScheduleBin::loop_dungeon_stage(bin);
  __for_range_3 = proto::ChannellerSlabLoopDungeonStageBin::dungeon_data_list(proto_loop_dungeon_stage);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::ChannellerSlabLoopDungeonDataBin>::begin(__for_range_3).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::ChannellerSlabLoopDungeonDataBin>::end(__for_range_3).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::ChannellerSlabLoopDungeonDataBin const>::operator!=(
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::ChannellerSlabLoopDungeonDataBin> *const)&__for_begin,
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::ChannellerSlabLoopDungeonDataBin>::iterator *)&__for_end) )
  {
    proto_loop_dungeon_data = google::protobuf::internal::RepeatedPtrIterator<proto::ChannellerSlabLoopDungeonDataBin const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::ChannellerSlabLoopDungeonDataBin> *const)&__for_begin);
    __k = proto::ChannellerSlabLoopDungeonDataBin::dungeon_index(proto_loop_dungeon_data);
    loop_dungeon_data = std::map<unsigned int,ChannellerSlabActivity::LoopDungeonData>::operator[](
                          &this->loop_dungeon_stage_data.dungeon_data_map,
                          &__k);
    v16 = proto::ChannellerSlabLoopDungeonDataBin::dungeon_index(proto_loop_dungeon_data);
    if ( *(_BYTE *)(((unsigned __int64)loop_dungeon_data >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)loop_dungeon_data >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(loop_dungeon_data);
    }
    loop_dungeon_data->dungeon_index = v16;
    v17 = proto::ChannellerSlabLoopDungeonDataBin::score(proto_loop_dungeon_data);
    if ( *(_BYTE *)(((unsigned __int64)&loop_dungeon_data->score >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)loop_dungeon_data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&loop_dungeon_data->score >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_store4(&loop_dungeon_data->score);
    }
    loop_dungeon_data->score = v17;
    is_first_pass_reward_taken = proto::ChannellerSlabLoopDungeonDataBin::is_first_pass_reward_taken(proto_loop_dungeon_data);
    if ( *(char *)(((unsigned __int64)&loop_dungeon_data->is_first_pass_reward_taken >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&loop_dungeon_data->is_first_pass_reward_taken);
    loop_dungeon_data->is_first_pass_reward_taken = is_first_pass_reward_taken;
    p_last_condition_id_vec = &loop_dungeon_data->last_condition_id_vec;
    condition_id_list = proto::ChannellerSlabLoopDungeonDataBin::last_condition_id_list(proto_loop_dungeon_data);
    common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(condition_id_list, p_last_condition_id_vec);
    is_open = proto::ChannellerSlabLoopDungeonDataBin::is_open(proto_loop_dungeon_data);
    if ( *(char *)(((unsigned __int64)&loop_dungeon_data->is_open >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&loop_dungeon_data->is_open);
    loop_dungeon_data->is_open = is_open;
    google::protobuf::internal::RepeatedPtrIterator<proto::ChannellerSlabLoopDungeonDataBin const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::ChannellerSlabLoopDungeonDataBin> *const)&__for_begin);
  }
  difficulty_id = proto::ChannellerSlabLoopDungeonStageBin::last_difficulty_id(proto_loop_dungeon_stage);
  if ( *(_BYTE *)(((unsigned __int64)&this->loop_dungeon_stage_data.last_difficulty_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->loop_dungeon_stage_data.last_difficulty_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->loop_dungeon_stage_data.last_difficulty_id);
  }
  this->loop_dungeon_stage_data.last_difficulty_id = difficulty_id;
  v23 = proto::ChannellerSlabLoopDungeonStageBin::taken_reward_index_list(proto_loop_dungeon_stage);
  common::tools::MiscUtils::setFromRepeated<std::unordered_set<unsigned int>,unsigned int>(
    &this->loop_dungeon_stage_data.taken_reward_index_set,
    v23);
  v24 = proto::ChannellerSlabLoopDungeonStageBin::is_open(proto_loop_dungeon_stage);
  if ( *(char *)(((unsigned __int64)&this->loop_dungeon_stage_data.is_open >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->loop_dungeon_stage_data.is_open);
  this->loop_dungeon_stage_data.is_open = v24;
  if ( v47 == (char *)v2 )
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

// Line 95: range 0000000014F24F22-0000000014F258D4
void __cdecl ChannellerSlabActivity::BinData::toBin(
        const ChannellerSlabActivity::BinData *const this,
        proto::ChannellerSlabScheduleBin *bin)
{
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v2; // rdx
  google::protobuf::RepeatedField<unsigned int> *v3; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type v4; // ebx
  google::protobuf::Map<unsigned int,unsigned int> *v5; // rax
  unsigned int *v6; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v7; // rdx
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type v8; // ebx
  google::protobuf::Map<unsigned int,unsigned int> *v9; // rax
  unsigned int *v10; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v11; // rdx
  google::protobuf::RepeatedField<unsigned int> *condition_id_list; // rax
  google::protobuf::RepeatedField<unsigned int> *v13; // rax
  unsigned int active_camp_index; // [rsp+14h] [rbp-FCh]
  std::vector<ChannellerSlabActivity::StageData>::const_iterator __for_begin; // [rsp+18h] [rbp-F8h] BYREF
  std::vector<ChannellerSlabActivity::StageData>::const_iterator __for_end; // [rsp+20h] [rbp-F0h] BYREF
  std::vector<unsigned int>::const_iterator __for_begin_0; // [rsp+28h] [rbp-E8h] BYREF
  std::vector<unsigned int>::const_iterator __for_end_0; // [rsp+30h] [rbp-E0h] BYREF
  const std::vector<ChannellerSlabActivity::StageData> *__for_range; // [rsp+38h] [rbp-D8h]
  proto::ChannellerSlabBuffDataBin *proto_buff_data; // [rsp+40h] [rbp-D0h]
  proto::ChannellerSlabBuffSchemeBin *proto_single_buff_scheme; // [rsp+48h] [rbp-C8h]
  const std::unordered_map<unsigned int,unsigned int> *__for_range_1; // [rsp+50h] [rbp-C0h]
  proto::ChannellerSlabBuffSchemeBin *proto_mp_buff_scheme; // [rsp+58h] [rbp-B8h]
  const std::unordered_map<unsigned int,unsigned int> *__for_range_2; // [rsp+60h] [rbp-B0h]
  const std::vector<ChannellerSlabActivity::AssistData> *__for_range_3; // [rsp+68h] [rbp-A8h]
  proto::ChannellerSlabLoopDungeonStageBin *proto_loop_dungeon_stage; // [rsp+70h] [rbp-A0h]
  const std::map<unsigned int,ChannellerSlabActivity::LoopDungeonData> *__for_range_4; // [rsp+78h] [rbp-98h]
  const std::pair<unsigned int const,ChannellerSlabActivity::LoopDungeonData> *v28; // [rsp+80h] [rbp-90h]
  std::tuple_element<0,const std::pair<unsigned int const,ChannellerSlabActivity::LoopDungeonData> >::type *_; // [rsp+88h] [rbp-88h]
  std::tuple_element<1,const std::pair<unsigned int const,ChannellerSlabActivity::LoopDungeonData> >::type *loop_dungeon_data; // [rsp+90h] [rbp-80h]
  proto::ChannellerSlabLoopDungeonDataBin *proto_loop_dungeon_data; // [rsp+98h] [rbp-78h]
  const ChannellerSlabActivity::AssistData *assist_data; // [rsp+A0h] [rbp-70h]
  proto::ChannellerSlabAssistBin *proto_assist_bin; // [rsp+A8h] [rbp-68h]
  const std::pair<unsigned int const,unsigned int> *v34; // [rsp+B0h] [rbp-60h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *slot_id_0; // [rsp+B8h] [rbp-58h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *buff_id_0; // [rsp+C0h] [rbp-50h]
  const std::pair<unsigned int const,unsigned int> *v37; // [rsp+C8h] [rbp-48h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *slot_id; // [rsp+D0h] [rbp-40h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *buff_id; // [rsp+D8h] [rbp-38h]
  const ChannellerSlabActivity::StageData *stage_data; // [rsp+E0h] [rbp-30h]
  proto::ChannellerSlabStageBin *stage_bin; // [rsp+E8h] [rbp-28h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+F0h] [rbp-20h]
  proto::ChannellerSlabChallengeBin *challenge_bin; // [rsp+F8h] [rbp-18h]

  if ( *(_BYTE *)(((unsigned __int64)&this->tokens >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->tokens >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::ChannellerSlabScheduleBin::set_tokens(bin, this->tokens);
  __for_range = &this->stage_vec;
  __for_begin._M_current = std::vector<ChannellerSlabActivity::StageData>::begin(&this->stage_vec)._M_current;
  __for_end._M_current = std::vector<ChannellerSlabActivity::StageData>::end(&this->stage_vec)._M_current;
  while ( __gnu_cxx::operator!=<ChannellerSlabActivity::StageData const*,std::vector<ChannellerSlabActivity::StageData>>(
            &__for_begin,
            &__for_end) )
  {
    stage_data = __gnu_cxx::__normal_iterator<ChannellerSlabActivity::StageData const*,std::vector<ChannellerSlabActivity::StageData>>::operator*(&__for_begin);
    stage_bin = proto::ChannellerSlabScheduleBin::add_stage_list(bin);
    if ( *(_BYTE *)(((unsigned __int64)&stage_data->is_dungeon_done >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)stage_data + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&stage_data->is_dungeon_done >> 3)
                                                             + 0x7FFF8000) )
    {
      __asan_report_load1(&stage_data->is_dungeon_done);
    }
    proto::ChannellerSlabStageBin::set_is_dungeon_done(stage_bin, stage_data->is_dungeon_done);
    __for_range_0 = &stage_data->active_camp_vec;
    __for_begin_0._M_current = std::vector<unsigned int>::begin(&stage_data->active_camp_vec)._M_current;
    __for_end_0._M_current = std::vector<unsigned int>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin_0, &__for_end_0) )
    {
      v2 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin_0);
      if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      active_camp_index = *v2;
      challenge_bin = proto::ChannellerSlabStageBin::add_challenge_list(stage_bin);
      proto::ChannellerSlabChallengeBin::set_active_camp_index(challenge_bin, active_camp_index);
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin_0);
    }
    __gnu_cxx::__normal_iterator<ChannellerSlabActivity::StageData const*,std::vector<ChannellerSlabActivity::StageData>>::operator++(&__for_begin);
  }
  proto_buff_data = proto::ChannellerSlabScheduleBin::mutable_buff_data(bin);
  v3 = proto::ChannellerSlabBuffDataBin::mutable_buff_id_list(proto_buff_data);
  common::tools::MiscUtils::setToRepeated<std::unordered_set<unsigned int>,unsigned int>(
    &this->buff_data.buff_id_set,
    v3);
  proto_single_buff_scheme = proto::ChannellerSlabBuffDataBin::mutable_single_buff_scheme(proto_buff_data);
  __for_range_1 = &this->buff_data.single_buff_scheme.slot_map;
  __for_begin_0._M_current = (const unsigned int *)std::unordered_map<unsigned int,unsigned int>::begin(&this->buff_data.single_buff_scheme.slot_map)._M_cur;
  __for_end_0._M_current = (const unsigned int *)std::unordered_map<unsigned int,unsigned int>::end(__for_range_1)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)&__for_begin_0,
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)&__for_end_0) )
  {
    v37 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)&__for_begin_0);
    slot_id = std::get<0ul,unsigned int const,unsigned int>(v37);
    buff_id = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v37);
    if ( *(_BYTE *)(((unsigned __int64)buff_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)buff_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)buff_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v4 = *buff_id;
    v5 = proto::ChannellerSlabBuffSchemeBin::mutable_slot_map(proto_single_buff_scheme);
    v6 = google::protobuf::Map<unsigned int,unsigned int>::operator[](v5, slot_id);
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v6);
    }
    *v7 = v4;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)&__for_begin_0);
  }
  proto_mp_buff_scheme = proto::ChannellerSlabBuffDataBin::mutable_mp_buff_scheme(proto_buff_data);
  __for_range_2 = &this->buff_data.mp_buff_scheme.slot_map;
  __for_begin_0._M_current = (const unsigned int *)std::unordered_map<unsigned int,unsigned int>::begin(&this->buff_data.mp_buff_scheme.slot_map)._M_cur;
  __for_end_0._M_current = (const unsigned int *)std::unordered_map<unsigned int,unsigned int>::end(__for_range_2)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)&__for_begin_0,
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)&__for_end_0) )
  {
    v34 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)&__for_begin_0);
    slot_id_0 = std::get<0ul,unsigned int const,unsigned int>(v34);
    buff_id_0 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v34);
    if ( *(_BYTE *)(((unsigned __int64)buff_id_0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)buff_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)buff_id_0 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v8 = *buff_id_0;
    v9 = proto::ChannellerSlabBuffSchemeBin::mutable_slot_map(proto_mp_buff_scheme);
    v10 = google::protobuf::Map<unsigned int,unsigned int>::operator[](v9, slot_id_0);
    v11 = v10;
    if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v10);
    }
    *v11 = v8;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)&__for_begin_0);
  }
  __for_range_3 = &this->buff_data.assist_vec;
  __for_begin_0._M_current = (const unsigned int *)std::vector<ChannellerSlabActivity::AssistData>::begin(&this->buff_data.assist_vec)._M_current;
  __for_end_0._M_current = (const unsigned int *)std::vector<ChannellerSlabActivity::AssistData>::end(__for_range_3)._M_current;
  while ( __gnu_cxx::operator!=<ChannellerSlabActivity::AssistData const*,std::vector<ChannellerSlabActivity::AssistData>>(
            (const __gnu_cxx::__normal_iterator<const ChannellerSlabActivity::AssistData*,std::vector<ChannellerSlabActivity::AssistData> > *)&__for_begin_0,
            (const __gnu_cxx::__normal_iterator<const ChannellerSlabActivity::AssistData*,std::vector<ChannellerSlabActivity::AssistData> > *)&__for_end_0) )
  {
    assist_data = __gnu_cxx::__normal_iterator<ChannellerSlabActivity::AssistData const*,std::vector<ChannellerSlabActivity::AssistData>>::operator*((const __gnu_cxx::__normal_iterator<const ChannellerSlabActivity::AssistData*,std::vector<ChannellerSlabActivity::AssistData> > *const)&__for_begin_0);
    proto_assist_bin = proto::ChannellerSlabBuffDataBin::add_assist_bin_list(proto_buff_data);
    if ( *(_BYTE *)(((unsigned __int64)assist_data >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)assist_data & 7) + 3) >= *(_BYTE *)(((unsigned __int64)assist_data >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::ChannellerSlabAssistBin::set_uid(proto_assist_bin, assist_data->uid);
    if ( *(_BYTE *)(((unsigned __int64)&assist_data->avatar_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)assist_data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&assist_data->avatar_id >> 3)
                                                                + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::ChannellerSlabAssistBin::set_avatar_id(proto_assist_bin, assist_data->avatar_id);
    if ( *(_BYTE *)(((unsigned __int64)&assist_data->avatar_level >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)assist_data + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&assist_data->avatar_level >> 3)
                                                                + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::ChannellerSlabAssistBin::set_avatar_level(proto_assist_bin, assist_data->avatar_level);
    __gnu_cxx::__normal_iterator<ChannellerSlabActivity::AssistData const*,std::vector<ChannellerSlabActivity::AssistData>>::operator++((__gnu_cxx::__normal_iterator<const ChannellerSlabActivity::AssistData*,std::vector<ChannellerSlabActivity::AssistData> > *const)&__for_begin_0);
  }
  proto_loop_dungeon_stage = proto::ChannellerSlabScheduleBin::mutable_loop_dungeon_stage(bin);
  __for_range_4 = &this->loop_dungeon_stage_data.dungeon_data_map;
  __for_begin_0._M_current = (const unsigned int *)std::map<unsigned int,ChannellerSlabActivity::LoopDungeonData>::begin(&this->loop_dungeon_stage_data.dungeon_data_map)._M_node;
  __for_end_0._M_current = (const unsigned int *)std::map<unsigned int,ChannellerSlabActivity::LoopDungeonData>::end(__for_range_4)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,ChannellerSlabActivity::LoopDungeonData> >::_Self *)&__for_begin_0,
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,ChannellerSlabActivity::LoopDungeonData> >::_Self *)&__for_end_0) )
  {
    v28 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,ChannellerSlabActivity::LoopDungeonData>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,ChannellerSlabActivity::LoopDungeonData> > *const)&__for_begin_0);
    _ = std::get<0ul,unsigned int const,ChannellerSlabActivity::LoopDungeonData>(v28);
    loop_dungeon_data = (std::tuple_element<1,const std::pair<unsigned int const,ChannellerSlabActivity::LoopDungeonData> >::type *)std::get<1ul,unsigned int const,ChannellerSlabActivity::LoopDungeonData>(v28);
    proto_loop_dungeon_data = proto::ChannellerSlabLoopDungeonStageBin::add_dungeon_data_list(proto_loop_dungeon_stage);
    if ( *(_BYTE *)(((unsigned __int64)loop_dungeon_data >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)loop_dungeon_data >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::ChannellerSlabLoopDungeonDataBin::set_dungeon_index(
      proto_loop_dungeon_data,
      loop_dungeon_data->dungeon_index);
    if ( *(_BYTE *)(((unsigned __int64)&loop_dungeon_data->score >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)loop_dungeon_data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&loop_dungeon_data->score >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::ChannellerSlabLoopDungeonDataBin::set_score(proto_loop_dungeon_data, loop_dungeon_data->score);
    if ( *(char *)(((unsigned __int64)&loop_dungeon_data->is_first_pass_reward_taken >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&loop_dungeon_data->is_first_pass_reward_taken);
    proto::ChannellerSlabLoopDungeonDataBin::set_is_first_pass_reward_taken(
      proto_loop_dungeon_data,
      loop_dungeon_data->is_first_pass_reward_taken);
    condition_id_list = proto::ChannellerSlabLoopDungeonDataBin::mutable_last_condition_id_list(proto_loop_dungeon_data);
    common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(
      &loop_dungeon_data->last_condition_id_vec,
      condition_id_list);
    if ( *(char *)(((unsigned __int64)&loop_dungeon_data->is_open >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&loop_dungeon_data->is_open);
    proto::ChannellerSlabLoopDungeonDataBin::set_is_open(proto_loop_dungeon_data, loop_dungeon_data->is_open);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,ChannellerSlabActivity::LoopDungeonData>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,ChannellerSlabActivity::LoopDungeonData> > *const)&__for_begin_0);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->loop_dungeon_stage_data.last_difficulty_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->loop_dungeon_stage_data.last_difficulty_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::ChannellerSlabLoopDungeonStageBin::set_last_difficulty_id(
    proto_loop_dungeon_stage,
    this->loop_dungeon_stage_data.last_difficulty_id);
  v13 = proto::ChannellerSlabLoopDungeonStageBin::mutable_taken_reward_index_list(proto_loop_dungeon_stage);
  common::tools::MiscUtils::setToRepeated<std::unordered_set<unsigned int>,unsigned int>(
    &this->loop_dungeon_stage_data.taken_reward_index_set,
    v13);
  if ( *(char *)(((unsigned __int64)&this->loop_dungeon_stage_data.is_open >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->loop_dungeon_stage_data.is_open);
  proto::ChannellerSlabLoopDungeonStageBin::set_is_open(proto_loop_dungeon_stage, this->loop_dungeon_stage_data.is_open);
};

// Line 146: range 0000000014F258D6-0000000014F25AB7
std::string *__cdecl ChannellerSlabActivity::getDesc[abi:cxx11](
        std::string *retstr,
        const ChannellerSlabActivity *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v5; // r14
  std::string v; // [rsp+10h] [rbp-90h] BYREF
  char v8[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 6 os:147";
  *(_QWORD *)(v2 + 16) = ChannellerSlabActivity::getDesc[abi:cxx11];
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  v5 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
         (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
         "[CHANNELLER_SLAB] ");
  BaseActivity::getDesc[abi:cxx11](&v, this);
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v5, &v);
  std::string::~string(&v);
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::str[abi:cxx11](
    retstr,
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::~StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 153: range 0000000014F25AB8-0000000014F25B0A
const ActivityChannellerSlabExcelConfigMgr *__cdecl ChannellerSlabActivity::getConfigMgr(
        const ChannellerSlabActivity *const this)
{
  ActivityChannellerSlabExcelConfigMgr *p_activity_channeller_slab_config_mgr; // rbx
  std::shared_ptr<Config> v3[2]; // [rsp+10h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v3);
  p_activity_channeller_slab_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v3)->design_config.txt_config_mgr.activity_channeller_slab_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(v3);
  return p_activity_channeller_slab_config_mgr;
};

// Line 158: range 0000000014F25B0C-0000000014F25B5A
int32_t __cdecl ChannellerSlabActivity::fromScheduleBin(
        ChannellerSlabActivity *const this,
        const proto::ActivityScheduleBin *bin)
{
  const proto::ChannellerSlabScheduleBin *v2; // rax

  proto::ActivityScheduleBin::channeller_slab_bin(bin);
  v2 = proto::ActivityScheduleBin::channeller_slab_bin(bin);
  ChannellerSlabActivity::BinData::fromBin(&this->bin_data_, v2);
  return 0;
};

// Line 165: range 0000000014F25B5C-0000000014F25B9A
int32_t __cdecl ChannellerSlabActivity::toScheduleBin(
        const ChannellerSlabActivity *const this,
        proto::ActivityScheduleBin *bin)
{
  proto::ChannellerSlabScheduleBin *v2; // rax

  v2 = proto::ActivityScheduleBin::mutable_channeller_slab_bin(bin);
  ChannellerSlabActivity::BinData::toBin(&this->bin_data_, v2);
  return 0;
};

// Line 171: range 0000000014F25B9C-0000000014F271D8
int32_t __cdecl ChannellerSlabActivity::toClient(
        ChannellerSlabActivity *const this,
        proto::ActivityInfo *activity_info)
{
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream *v3; // rcx
  const ActivityChannellerSlabExcelConfigMgr *v5; // rdx
  common::milog::MiLogStream *v6; // rax
  uint32_t v7; // ecx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  uint32_t open_day; // ecx
  uint32_t BeginTimeByOpenDay; // eax
  bool v12; // al
  std::vector<ChannellerSlabActivity::StageData>::size_type v13; // rbx
  ChannellerSlabActivity::BinData *p_bin_data; // rcx
  std::vector<unsigned int>::size_type v16; // rbx
  google::protobuf::uint32 *v18; // rdx
  unsigned __int64 v19; // rax
  LuaConfigMgr *p_lua_config_mgr; // rcx
  Vector3 *p_pos; // rbx
  proto::Vector *v22; // rax
  google::protobuf::RepeatedField<unsigned int> *v23; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type v24; // ebx
  google::protobuf::Map<unsigned int,unsigned int> *v25; // rax
  unsigned int *v26; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v27; // rdx
  uint32_t TotalBuffEnergy; // eax
  uint32_t SelfBuffEnergy; // eax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type v30; // ebx
  google::protobuf::Map<unsigned int,unsigned int> *v31; // rax
  unsigned int *v32; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v33; // rdx
  uint32_t v34; // eax
  uint32_t v35; // eax
  const ActivityChannellerSlabExcelConfigMgr *v36; // rdx
  google::protobuf::RepeatedField<unsigned int> *condition_id_list; // rax
  uint32_t v38; // ecx
  uint32_t v39; // eax
  google::protobuf::RepeatedField<unsigned int> *v40; // rax
  uint32_t v41; // ecx
  uint32_t v42; // eax
  google::protobuf::uint32 play_end_time; // [rsp+1Ch] [rbp-1D4h]
  std::map<unsigned int,std::map<unsigned int,std::vector<const data::ChannellerSlabLevelExcelConfig*>>>::const_iterator __for_begin; // [rsp+20h] [rbp-1D0h] BYREF
  std::map<unsigned int,std::map<unsigned int,std::vector<const data::ChannellerSlabLevelExcelConfig*>>>::const_iterator __for_end; // [rsp+28h] [rbp-1C8h] BYREF
  std::map<unsigned int,std::vector<const data::ChannellerSlabLevelExcelConfig*>>::const_iterator __for_begin_0; // [rsp+30h] [rbp-1C0h] BYREF
  std::map<unsigned int,std::vector<const data::ChannellerSlabLevelExcelConfig*>>::const_iterator __for_end_0; // [rsp+38h] [rbp-1B8h] BYREF
  std::vector<const data::ChannellerSlabLevelExcelConfig*>::const_iterator __for_begin_1; // [rsp+40h] [rbp-1B0h] BYREF
  std::vector<const data::ChannellerSlabLevelExcelConfig*>::const_iterator __for_end_1; // [rsp+48h] [rbp-1A8h] BYREF
  const std::vector<unsigned int> *active_camp_vec_ptr; // [rsp+50h] [rbp-1A0h]
  const ActivityChannellerSlabExcelConfigMgr *config_mgr; // [rsp+58h] [rbp-198h]
  const data::ChannellerSlabPreviewExcelConfig *preview_config_ptr; // [rsp+60h] [rbp-190h]
  proto::ChannelerSlabActivityDetailInfo *channeler_slab_info; // [rsp+68h] [rbp-188h]
  const std::map<unsigned int,std::map<unsigned int,std::vector<const data::ChannellerSlabLevelExcelConfig*>>> *stage_round_level_config_map; // [rsp+70h] [rbp-180h]
  const std::map<unsigned int,std::map<unsigned int,std::vector<const data::ChannellerSlabLevelExcelConfig*>>> *__for_range; // [rsp+78h] [rbp-178h]
  proto::ChannellerSlabBuffInfo *buff_info; // [rsp+80h] [rbp-170h]
  proto::ChannellerSlabBuffSchemeInfo *single_buff_scheme_info; // [rsp+88h] [rbp-168h]
  std::unordered_map<unsigned int,unsigned int> *__for_range_2; // [rsp+90h] [rbp-160h]
  proto::ChannellerSlabBuffSchemeInfo *mp_buff_scheme_info; // [rsp+98h] [rbp-158h]
  std::unordered_map<unsigned int,unsigned int> *__for_range_3; // [rsp+A0h] [rbp-150h]
  std::vector<ChannellerSlabActivity::AssistData> *__for_range_4; // [rsp+A8h] [rbp-148h]
  const data::ChannellerSlabLoopDungeonPreviewExcelConfig *loop_dungeon_preview_config_ptr; // [rsp+B0h] [rbp-140h]
  proto::ChannellerSlabLoopDungeonStageInfo *loop_dungeon_stage_info; // [rsp+B8h] [rbp-138h]
  const ChannellerSlabActivity::LoopDungeonStageData *loop_dungeon_stage_data; // [rsp+C0h] [rbp-130h]
  const std::map<unsigned int,ChannellerSlabActivity::LoopDungeonData> *__for_range_5; // [rsp+C8h] [rbp-128h]
  const std::pair<unsigned int const,ChannellerSlabActivity::LoopDungeonData> *v66; // [rsp+D0h] [rbp-120h]
  std::tuple_element<0,const std::pair<unsigned int const,ChannellerSlabActivity::LoopDungeonData> >::type *_; // [rsp+D8h] [rbp-118h]
  std::tuple_element<1,const std::pair<unsigned int const,ChannellerSlabActivity::LoopDungeonData> >::type *loop_dungeon_data; // [rsp+E0h] [rbp-110h]
  const data::ChannellerSlabLoopDungeonExcelConfig *loop_dungeon_config_ptr; // [rsp+E8h] [rbp-108h]
  proto::ChannellerSlabLoopDungeonInfo *loop_dungeon_info; // [rsp+F0h] [rbp-100h]
  const ChannellerSlabActivity::AssistData *assist_data; // [rsp+F8h] [rbp-F8h]
  proto::ChannellerSlabAssistInfo *assist_info; // [rsp+100h] [rbp-F0h]
  const std::pair<unsigned int const,unsigned int> *v73; // [rsp+108h] [rbp-E8h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *slot_id_0; // [rsp+110h] [rbp-E0h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *buff_id_0; // [rsp+118h] [rbp-D8h]
  const std::pair<unsigned int const,unsigned int> *v76; // [rsp+120h] [rbp-D0h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *slot_id; // [rsp+128h] [rbp-C8h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *buff_id; // [rsp+130h] [rbp-C0h]
  const std::pair<unsigned int const,std::map<unsigned int,std::vector<const data::ChannellerSlabLevelExcelConfig*>> > *v79; // [rsp+138h] [rbp-B8h]
  std::tuple_element<0,const std::pair<unsigned int const,std::map<unsigned int,std::vector<const data::ChannellerSlabLevelExcelConfig*>> > >::type *stage_id; // [rsp+140h] [rbp-B0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::map<unsigned int,std::vector<const data::ChannellerSlabLevelExcelConfig*>> > >::type *round_level_config_map; // [rsp+148h] [rbp-A8h]
  const data::ChannellerSlabChapterExcelConfig *chapter_config_ptr; // [rsp+150h] [rbp-A0h]
  proto::ChannelerSlabChallengeStage *stage_info; // [rsp+158h] [rbp-98h]
  const ChannellerSlabActivity::StageData *stage_data; // [rsp+160h] [rbp-90h]
  const std::map<unsigned int,std::vector<const data::ChannellerSlabLevelExcelConfig*>> *__for_range_0; // [rsp+168h] [rbp-88h]
  const std::pair<unsigned int const,std::vector<const data::ChannellerSlabLevelExcelConfig*> > *v86; // [rsp+170h] [rbp-80h]
  std::tuple_element<0,const std::pair<unsigned int const,std::vector<const data::ChannellerSlabLevelExcelConfig*> > >::type *round_id; // [rsp+178h] [rbp-78h]
  std::tuple_element<1,const std::pair<unsigned int const,std::vector<const data::ChannellerSlabLevelExcelConfig*> > >::type *level_config_vec; // [rsp+180h] [rbp-70h]
  proto::ChannelerSlabChallenge *challenge_info; // [rsp+188h] [rbp-68h]
  const std::vector<const data::ChannellerSlabLevelExcelConfig*> *__for_range_1; // [rsp+190h] [rbp-60h]
  const data::ChannellerSlabLevelExcelConfig *level_config_ptr; // [rsp+198h] [rbp-58h]
  proto::ChannelerSlabCamp *camp_info; // [rsp+1A0h] [rbp-50h]
  const GroupInfoScriptConfig *group_info_script_config_ptr; // [rsp+1A8h] [rbp-48h]
  std::shared_ptr<Config> v94; // [rsp+1B0h] [rbp-40h] BYREF
  common::milog::MiLogStream v95; // [rsp+1C0h] [rbp-30h] BYREF

  if ( BaseActivity::toClient(this, activity_info) )
  {
    common::milog::MiLogStream::create(
      &v95,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/channeller_slab_activity.cpp",
      "toClient",
      174);
    v2 = common::milog::MiLogStream::operator<<<ChannellerSlabActivity,(ChannellerSlabActivity*)0>(&v95, this);
    v3 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
           v2,
           (const char (*)[33])" BaseActivity::toClient failed. ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v3, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v95);
    return -1;
  }
  else
  {
    config_mgr = ChannellerSlabActivity::getConfigMgr(this);
    v5 = config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    preview_config_ptr = data::ActivityChannellerSlabExcelConfigMgrBase::findChannellerSlabPreviewExcelConfig(
                           v5,
                           this->activity_id_);
    if ( preview_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&preview_config_ptr->activity_stay_time >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&preview_config_ptr->activity_stay_time >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      v7 = preview_config_ptr->activity_stay_time + 1;
      if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      play_end_time = BaseActivity::getBeginTimeByOpenDay(this->schedule_id_, v7);
      channeler_slab_info = proto::ActivityInfo::mutable_challneler_slab_info(activity_info);
      proto::ChannelerSlabActivityDetailInfo::set_play_end_time(channeler_slab_info, play_end_time);
      stage_round_level_config_map = ActivityChannellerSlabExcelConfigMgr::getStageRoundsLevelConfigMap(config_mgr);
      __for_range = stage_round_level_config_map;
      __for_begin._M_node = std::map<unsigned int,std::map<unsigned int,std::vector<data::ChannellerSlabLevelExcelConfig const*>>>::begin(stage_round_level_config_map)._M_node;
      __for_end._M_node = std::map<unsigned int,std::map<unsigned int,std::vector<data::ChannellerSlabLevelExcelConfig const*>>>::end(stage_round_level_config_map)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        v79 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::vector<data::ChannellerSlabLevelExcelConfig const*>>>>::operator*(&__for_begin);
        stage_id = std::get<0ul,unsigned int const,std::map<unsigned int,std::vector<data::ChannellerSlabLevelExcelConfig const*>>>(v79);
        round_level_config_map = (std::tuple_element<1,const std::pair<unsigned int const,std::map<unsigned int,std::vector<const data::ChannellerSlabLevelExcelConfig*>> > >::type *)std::get<1ul,unsigned int const,std::map<unsigned int,std::vector<data::ChannellerSlabLevelExcelConfig const*>>>(v79);
        if ( *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)stage_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        chapter_config_ptr = ActivityChannellerSlabExcelConfigMgr::findChapterConfigByStageID(config_mgr, *stage_id);
        if ( chapter_config_ptr )
        {
          stage_info = proto::ChannelerSlabActivityDetailInfo::add_stage_list(channeler_slab_info);
          if ( *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)stage_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          proto::ChannelerSlabChallengeStage::set_stage_id(stage_info, *stage_id);
          if ( *(_BYTE *)(((unsigned __int64)&chapter_config_ptr->open_day >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&chapter_config_ptr->open_day >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          open_day = chapter_config_ptr->open_day;
          if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3)
                                                                + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          BeginTimeByOpenDay = BaseActivity::getBeginTimeByOpenDay(this->schedule_id_, open_day);
          proto::ChannelerSlabChallengeStage::set_open_time(stage_info, BeginTimeByOpenDay);
          v12 = common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
                  &this->active_stage_set_,
                  stage_id);
          proto::ChannelerSlabChallengeStage::set_is_open(stage_info, v12);
          active_camp_vec_ptr = 0LL;
          if ( *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)stage_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          if ( *stage_id )
          {
            v13 = *stage_id;
            if ( v13 < std::vector<ChannellerSlabActivity::StageData>::size(&this->bin_data_.stage_vec) + 1 )
            {
              p_bin_data = &this->bin_data_;
              if ( *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)stage_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)stage_id >> 3)
                                                                           + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              stage_data = std::vector<ChannellerSlabActivity::StageData>::operator[](
                             &p_bin_data->stage_vec,
                             *stage_id - 1);
              active_camp_vec_ptr = &stage_data->active_camp_vec;
            }
          }
          __for_range_0 = round_level_config_map;
          __for_begin_0._M_node = std::map<unsigned int,std::vector<data::ChannellerSlabLevelExcelConfig const*>>::begin(round_level_config_map)._M_node;
          __for_end_0._M_node = std::map<unsigned int,std::vector<data::ChannellerSlabLevelExcelConfig const*>>::end(__for_range_0)._M_node;
          while ( std::operator!=(&__for_begin_0, &__for_end_0) )
          {
            v86 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<data::ChannellerSlabLevelExcelConfig const*>>>::operator*(&__for_begin_0);
            round_id = std::get<0ul,unsigned int const,std::vector<data::ChannellerSlabLevelExcelConfig const*>>(v86);
            level_config_vec = (std::tuple_element<1,const std::pair<unsigned int const,std::vector<const data::ChannellerSlabLevelExcelConfig*> > >::type *)std::get<1ul,unsigned int const,std::vector<data::ChannellerSlabLevelExcelConfig const*>>(v86);
            challenge_info = proto::ChannelerSlabChallengeStage::add_challenge_list(stage_info);
            if ( active_camp_vec_ptr )
            {
              if ( *(_BYTE *)(((unsigned __int64)round_id >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)round_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)round_id >> 3)
                                                                           + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              if ( *round_id )
              {
                v16 = *round_id;
                if ( v16 < std::vector<unsigned int>::size(active_camp_vec_ptr) + 1 )
                {
                  if ( *(_BYTE *)(((unsigned __int64)round_id >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)round_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)round_id >> 3)
                                                                               + 0x7FFF8000) )
                  {
                    __asan_report_load4();
                  }
                  v18 = (google::protobuf::uint32 *)std::vector<unsigned int>::at(active_camp_vec_ptr, *round_id - 1);
                  if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load4();
                  }
                  proto::ChannelerSlabChallenge::set_active_camp_index(challenge_info, *v18);
                }
              }
            }
            __for_range_1 = level_config_vec;
            __for_begin_1._M_current = std::vector<data::ChannellerSlabLevelExcelConfig const*>::begin(level_config_vec)._M_current;
            __for_end_1._M_current = std::vector<data::ChannellerSlabLevelExcelConfig const*>::end(__for_range_1)._M_current;
            while ( __gnu_cxx::operator!=<data::ChannellerSlabLevelExcelConfig const* const*,std::vector<data::ChannellerSlabLevelExcelConfig const*>>(
                      &__for_begin_1,
                      &__for_end_1) )
            {
              v19 = (unsigned __int64)__gnu_cxx::__normal_iterator<data::ChannellerSlabLevelExcelConfig const* const*,std::vector<data::ChannellerSlabLevelExcelConfig const*>>::operator*(&__for_begin_1);
              if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
                v19 = __asan_report_load8();
              level_config_ptr = *(const data::ChannellerSlabLevelExcelConfig **)v19;
              if ( level_config_ptr )
              {
                camp_info = proto::ChannelerSlabChallenge::add_camp_list(challenge_info);
                if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->group_id >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)level_config_ptr + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_config_ptr->group_id >> 3)
                                                                                  + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                proto::ChannelerSlabCamp::set_group_id(camp_info, level_config_ptr->group_id);
                if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->reward_id >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&level_config_ptr->reward_id >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4();
                }
                proto::ChannelerSlabCamp::set_reward_id(camp_info, level_config_ptr->reward_id);
                if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->buff_num >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&level_config_ptr->buff_num >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4();
                }
                proto::ChannelerSlabCamp::set_buff_num(camp_info, level_config_ptr->buff_num);
                ServiceBox::findService<GameserverService>();
                GameserverService::getConfig((GameserverService *const)&v94);
                p_lua_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v94)->design_config.lua_config_mgr;
                if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->group_id >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)level_config_ptr + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_config_ptr->group_id >> 3)
                                                                                  + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                group_info_script_config_ptr = LuaConfigMgr::findGroupInfoConfig(
                                                 p_lua_config_mgr,
                                                 level_config_ptr->group_id);
                std::shared_ptr<Config>::~shared_ptr(&v94);
                if ( group_info_script_config_ptr )
                {
                  p_pos = &group_info_script_config_ptr->pos;
                  v22 = proto::ChannelerSlabCamp::mutable_pos(camp_info);
                  Vector3::toClient(p_pos, v22);
                }
              }
              __gnu_cxx::__normal_iterator<data::ChannellerSlabLevelExcelConfig const* const*,std::vector<data::ChannellerSlabLevelExcelConfig const*>>::operator++(&__for_begin_1);
            }
            std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<data::ChannellerSlabLevelExcelConfig const*>>>::operator++(&__for_begin_0);
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v95,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/channeller_slab_activity.cpp",
            "toClient",
            194);
          v8 = common::milog::MiLogStream::operator<<<ChannellerSlabActivity,(ChannellerSlabActivity*)0>(&v95, this);
          v9 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                 v8,
                 (const char (*)[32])" chapter config nullptr @stage:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, stage_id);
          common::milog::MiLogStream::~MiLogStream(&v95);
        }
        std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::vector<data::ChannellerSlabLevelExcelConfig const*>>>>::operator++(&__for_begin);
      }
      buff_info = proto::ChannelerSlabActivityDetailInfo::mutable_buff_info(channeler_slab_info);
      v23 = proto::ChannellerSlabBuffInfo::mutable_buff_id_list(buff_info);
      common::tools::MiscUtils::setToRepeated<std::unordered_set<unsigned int>,unsigned int>(
        &this->bin_data_.buff_data.buff_id_set,
        v23);
      single_buff_scheme_info = proto::ChannellerSlabBuffInfo::mutable_single_buff_scheme_info(buff_info);
      __for_range_2 = &this->bin_data_.buff_data.single_buff_scheme.slot_map;
      __for_begin_1._M_current = (const data::ChannellerSlabLevelExcelConfig *const *)std::unordered_map<unsigned int,unsigned int>::begin(&this->bin_data_.buff_data.single_buff_scheme.slot_map)._M_cur;
      __for_end_1._M_current = (const data::ChannellerSlabLevelExcelConfig *const *)std::unordered_map<unsigned int,unsigned int>::end(__for_range_2)._M_cur;
      while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)&__for_begin_1,
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)&__for_end_1) )
      {
        v76 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)&__for_begin_1);
        slot_id = std::get<0ul,unsigned int const,unsigned int>(v76);
        buff_id = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v76);
        if ( *(_BYTE *)(((unsigned __int64)buff_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)buff_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)buff_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        v24 = *buff_id;
        v25 = proto::ChannellerSlabBuffSchemeInfo::mutable_slot_map(single_buff_scheme_info);
        v26 = google::protobuf::Map<unsigned int,unsigned int>::operator[](v25, slot_id);
        v27 = v26;
        if ( *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v26 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v26);
        }
        *v27 = v24;
        std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)&__for_begin_1);
      }
      TotalBuffEnergy = ChannellerSlabActivity::getTotalBuffEnergy(this, 0);
      proto::ChannellerSlabBuffSchemeInfo::set_total_energy(single_buff_scheme_info, TotalBuffEnergy);
      SelfBuffEnergy = ChannellerSlabActivity::getSelfBuffEnergy(this, 0);
      proto::ChannellerSlabBuffSchemeInfo::set_self_energy(single_buff_scheme_info, SelfBuffEnergy);
      mp_buff_scheme_info = proto::ChannellerSlabBuffInfo::mutable_mp_buff_scheme_info(buff_info);
      __for_range_3 = &this->bin_data_.buff_data.mp_buff_scheme.slot_map;
      __for_begin_1._M_current = (const data::ChannellerSlabLevelExcelConfig *const *)std::unordered_map<unsigned int,unsigned int>::begin(&this->bin_data_.buff_data.mp_buff_scheme.slot_map)._M_cur;
      __for_end_1._M_current = (const data::ChannellerSlabLevelExcelConfig *const *)std::unordered_map<unsigned int,unsigned int>::end(__for_range_3)._M_cur;
      while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)&__for_begin_1,
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)&__for_end_1) )
      {
        v73 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)&__for_begin_1);
        slot_id_0 = std::get<0ul,unsigned int const,unsigned int>(v73);
        buff_id_0 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v73);
        if ( *(_BYTE *)(((unsigned __int64)buff_id_0 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)buff_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)buff_id_0 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        v30 = *buff_id_0;
        v31 = proto::ChannellerSlabBuffSchemeInfo::mutable_slot_map(mp_buff_scheme_info);
        v32 = google::protobuf::Map<unsigned int,unsigned int>::operator[](v31, slot_id_0);
        v33 = v32;
        if ( *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v32 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v32);
        }
        *v33 = v30;
        std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)&__for_begin_1);
      }
      v34 = ChannellerSlabActivity::getTotalBuffEnergy(this, 1);
      proto::ChannellerSlabBuffSchemeInfo::set_total_energy(mp_buff_scheme_info, v34);
      v35 = ChannellerSlabActivity::getSelfBuffEnergy(this, 1);
      proto::ChannellerSlabBuffSchemeInfo::set_self_energy(mp_buff_scheme_info, v35);
      __for_range_4 = &this->bin_data_.buff_data.assist_vec;
      __for_begin_1._M_current = (const data::ChannellerSlabLevelExcelConfig *const *)std::vector<ChannellerSlabActivity::AssistData>::begin(&this->bin_data_.buff_data.assist_vec)._M_current;
      __for_end_1._M_current = (const data::ChannellerSlabLevelExcelConfig *const *)std::vector<ChannellerSlabActivity::AssistData>::end(__for_range_4)._M_current;
      while ( __gnu_cxx::operator!=<ChannellerSlabActivity::AssistData *,std::vector<ChannellerSlabActivity::AssistData>>(
                (const __gnu_cxx::__normal_iterator<ChannellerSlabActivity::AssistData*,std::vector<ChannellerSlabActivity::AssistData> > *)&__for_begin_1,
                (const __gnu_cxx::__normal_iterator<ChannellerSlabActivity::AssistData*,std::vector<ChannellerSlabActivity::AssistData> > *)&__for_end_1) )
      {
        assist_data = __gnu_cxx::__normal_iterator<ChannellerSlabActivity::AssistData *,std::vector<ChannellerSlabActivity::AssistData>>::operator*((const __gnu_cxx::__normal_iterator<ChannellerSlabActivity::AssistData*,std::vector<ChannellerSlabActivity::AssistData> > *const)&__for_begin_1);
        assist_info = proto::ChannellerSlabBuffInfo::add_assist_info_list(buff_info);
        if ( *(_BYTE *)(((unsigned __int64)assist_data >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)assist_data & 7) + 3) >= *(_BYTE *)(((unsigned __int64)assist_data >> 3)
                                                                        + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto::ChannellerSlabAssistInfo::set_uid(assist_info, assist_data->uid);
        if ( *(_BYTE *)(((unsigned __int64)&assist_data->avatar_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)assist_data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&assist_data->avatar_id >> 3)
                                                                    + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto::ChannellerSlabAssistInfo::set_avatar_id(assist_info, assist_data->avatar_id);
        if ( *(_BYTE *)(((unsigned __int64)&assist_data->avatar_level >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)assist_data + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&assist_data->avatar_level >> 3)
                                                                    + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto::ChannellerSlabAssistInfo::set_avatar_level(assist_info, assist_data->avatar_level);
        __gnu_cxx::__normal_iterator<ChannellerSlabActivity::AssistData *,std::vector<ChannellerSlabActivity::AssistData>>::operator++((__gnu_cxx::__normal_iterator<ChannellerSlabActivity::AssistData*,std::vector<ChannellerSlabActivity::AssistData> > *const)&__for_begin_1);
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      loop_dungeon_preview_config_ptr = ActivityChannellerSlabExcelConfigMgr::findLoopDungeonPreviewConfigByActivityId(
                                          config_mgr,
                                          this->activity_id_);
      if ( loop_dungeon_preview_config_ptr )
      {
        loop_dungeon_stage_info = proto::ChannelerSlabActivityDetailInfo::mutable_loop_dungeon_stage_info(channeler_slab_info);
        loop_dungeon_stage_data = &this->bin_data_.loop_dungeon_stage_data;
        __for_range_5 = &this->bin_data_.loop_dungeon_stage_data.dungeon_data_map;
        __for_begin_1._M_current = (const data::ChannellerSlabLevelExcelConfig *const *)std::map<unsigned int,ChannellerSlabActivity::LoopDungeonData>::begin(&this->bin_data_.loop_dungeon_stage_data.dungeon_data_map)._M_node;
        __for_end_1._M_current = (const data::ChannellerSlabLevelExcelConfig *const *)std::map<unsigned int,ChannellerSlabActivity::LoopDungeonData>::end(__for_range_5)._M_node;
        while ( std::operator!=(
                  (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,ChannellerSlabActivity::LoopDungeonData> >::_Self *)&__for_begin_1,
                  (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,ChannellerSlabActivity::LoopDungeonData> >::_Self *)&__for_end_1) )
        {
          v66 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,ChannellerSlabActivity::LoopDungeonData>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,ChannellerSlabActivity::LoopDungeonData> > *const)&__for_begin_1);
          _ = std::get<0ul,unsigned int const,ChannellerSlabActivity::LoopDungeonData>(v66);
          loop_dungeon_data = (std::tuple_element<1,const std::pair<unsigned int const,ChannellerSlabActivity::LoopDungeonData> >::type *)std::get<1ul,unsigned int const,ChannellerSlabActivity::LoopDungeonData>(v66);
          v36 = config_mgr;
          if ( *(_BYTE *)(((unsigned __int64)loop_dungeon_data >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)loop_dungeon_data >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          loop_dungeon_config_ptr = data::ActivityChannellerSlabExcelConfigMgrBase::findChannellerSlabLoopDungeonExcelConfig(
                                      v36,
                                      loop_dungeon_data->dungeon_index);
          if ( loop_dungeon_config_ptr )
          {
            loop_dungeon_info = proto::ChannellerSlabLoopDungeonStageInfo::add_dungeon_info_list(loop_dungeon_stage_info);
            if ( *(_BYTE *)(((unsigned __int64)loop_dungeon_data >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)loop_dungeon_data >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            proto::ChannellerSlabLoopDungeonInfo::set_dungeon_index(loop_dungeon_info, loop_dungeon_data->dungeon_index);
            if ( *(_BYTE *)(((unsigned __int64)&loop_dungeon_data->score >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)loop_dungeon_data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&loop_dungeon_data->score >> 3)
                                                                              + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            proto::ChannellerSlabLoopDungeonInfo::set_score(loop_dungeon_info, loop_dungeon_data->score);
            if ( *(char *)(((unsigned __int64)&loop_dungeon_data->is_first_pass_reward_taken >> 3) + 0x7FFF8000) < 0 )
              __asan_report_load1(&loop_dungeon_data->is_first_pass_reward_taken);
            proto::ChannellerSlabLoopDungeonInfo::set_is_first_pass_reward_taken(
              loop_dungeon_info,
              loop_dungeon_data->is_first_pass_reward_taken);
            condition_id_list = proto::ChannellerSlabLoopDungeonInfo::mutable_last_condition_id_list(loop_dungeon_info);
            common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(
              &loop_dungeon_data->last_condition_id_vec,
              condition_id_list);
            if ( *(_BYTE *)(((unsigned __int64)&loop_dungeon_config_ptr->open_day >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)loop_dungeon_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&loop_dungeon_config_ptr->open_day >> 3)
                                                                                     + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            v38 = loop_dungeon_config_ptr->open_day;
            if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3)
                                                                  + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            v39 = BaseActivity::getBeginTimeByOpenDay(this->schedule_id_, v38);
            proto::ChannellerSlabLoopDungeonInfo::set_open_time(loop_dungeon_info, v39);
            if ( *(char *)(((unsigned __int64)&loop_dungeon_data->is_open >> 3) + 0x7FFF8000) < 0 )
              __asan_report_load1(&loop_dungeon_data->is_open);
            proto::ChannellerSlabLoopDungeonInfo::set_is_open(loop_dungeon_info, loop_dungeon_data->is_open);
          }
          std::_Rb_tree_const_iterator<std::pair<unsigned int const,ChannellerSlabActivity::LoopDungeonData>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,ChannellerSlabActivity::LoopDungeonData> > *const)&__for_begin_1);
        }
        if ( *(_BYTE *)(((unsigned __int64)&loop_dungeon_stage_data->last_difficulty_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&loop_dungeon_stage_data->last_difficulty_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        proto::ChannellerSlabLoopDungeonStageInfo::set_last_difficulty_id(
          loop_dungeon_stage_info,
          loop_dungeon_stage_data->last_difficulty_id);
        v40 = proto::ChannellerSlabLoopDungeonStageInfo::mutable_taken_reward_index_list(loop_dungeon_stage_info);
        common::tools::MiscUtils::setToRepeated<std::unordered_set<unsigned int>,unsigned int>(
          &loop_dungeon_stage_data->taken_reward_index_set,
          v40);
        if ( *(_BYTE *)(((unsigned __int64)&loop_dungeon_preview_config_ptr->open_day >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&loop_dungeon_preview_config_ptr->open_day >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        v41 = loop_dungeon_preview_config_ptr->open_day;
        if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        v42 = BaseActivity::getBeginTimeByOpenDay(this->schedule_id_, v41);
        proto::ChannellerSlabLoopDungeonStageInfo::set_open_time(loop_dungeon_stage_info, v42);
        if ( *(char *)(((unsigned __int64)&loop_dungeon_stage_data->is_open >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(&loop_dungeon_stage_data->is_open);
        proto::ChannellerSlabLoopDungeonStageInfo::set_is_open(
          loop_dungeon_stage_info,
          loop_dungeon_stage_data->is_open);
        return 0;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v95,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/channeller_slab_activity.cpp",
          "toClient",
          269);
        common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
          &v95,
          (const char (*)[61])"[CHANNELLER_SLAB] loop_dungeon_preview_config_ptr is nullptr");
        common::milog::MiLogStream::~MiLogStream(&v95);
        return -1;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v95,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/channeller_slab_activity.cpp",
        "toClient",
        181);
      v6 = common::milog::MiLogStream::operator<<<ChannellerSlabActivity,(ChannellerSlabActivity*)0>(&v95, this);
      common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
        v6,
        (const char (*)[25])" preivew config nullptr.");
      common::milog::MiLogStream::~MiLogStream(&v95);
      return -1;
    }
  }
};

// Line 297: range 0000000014F271DA-0000000014F27287
void __cdecl ChannellerSlabActivity::fillActivityCoinInfo(
        ChannellerSlabActivity *const this,
        google::protobuf::Map<unsigned int,unsigned int> *activity_coin_map)
{
  uint32_t tokens; // ebx
  unsigned int *v3; // rax
  uint32_t *v4; // rdx
  google::protobuf::Map<unsigned int,unsigned int>::key_type key[5]; // [rsp+1Ch] [rbp-14h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->bin_data_.tokens >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->bin_data_.tokens >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  tokens = this->bin_data_.tokens;
  key[0] = 122;
  v3 = google::protobuf::Map<unsigned int,unsigned int>::operator[](activity_coin_map, key);
  v4 = v3;
  if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v3);
  }
  *v4 = tokens;
};

// Line 302: range 0000000014F27288-0000000014F272DE
int32_t __cdecl ChannellerSlabActivity::init(ChannellerSlabActivity *const this)
{
  if ( BaseActivity::isOpening(this, 0) && !BaseActivity::isSettled(this) )
    ChannellerSlabActivity::initObserver(this);
  return 0;
};

// Line 311: range 0000000014F272E0-0000000014F274A1
void __cdecl ChannellerSlabActivity::onPreStart(ChannellerSlabActivity *const this)
{
  uint32_t v1; // ecx
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::const_iterator __for_begin; // [rsp+18h] [rbp-48h] BYREF
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::const_iterator __for_end; // [rsp+20h] [rbp-40h] BYREF
  const ActivityChannellerSlabExcelConfigMgr *config_mgr; // [rsp+28h] [rbp-38h]
  std::map<unsigned int,ChannellerSlabActivity::LoopDungeonData> *loop_dungeon_data_map; // [rsp+30h] [rbp-30h]
  const std::unordered_map<unsigned int,std::unordered_set<unsigned int>> *__for_range; // [rsp+38h] [rbp-28h]
  const std::pair<unsigned int const,std::unordered_set<unsigned int> > *v7; // [rsp+40h] [rbp-20h]
  std::tuple_element<0,const std::pair<unsigned int const,std::unordered_set<unsigned int> > >::type *id; // [rsp+48h] [rbp-18h]
  std::tuple_element<1,const std::pair<unsigned int const,std::unordered_set<unsigned int> > >::type *_; // [rsp+50h] [rbp-10h]
  ChannellerSlabActivity::LoopDungeonData *loop_dungeon_data; // [rsp+58h] [rbp-8h]

  config_mgr = ChannellerSlabActivity::getConfigMgr(this);
  loop_dungeon_data_map = &this->bin_data_.loop_dungeon_stage_data.dungeon_data_map;
  __for_range = &config_mgr->loop_dungeon_map;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::begin(&config_mgr->loop_dungeon_map)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::end(&config_mgr->loop_dungeon_map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::unordered_set<unsigned int>>,false>(
            &__for_begin,
            &__for_end) )
  {
    v7 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int>>,false,false>::operator*(&__for_begin);
    id = std::get<0ul,unsigned int const,std::unordered_set<unsigned int>>(v7);
    _ = (std::tuple_element<1,const std::pair<unsigned int const,std::unordered_set<unsigned int> > >::type *)std::get<1ul,unsigned int const,std::unordered_set<unsigned int>>(v7);
    loop_dungeon_data = std::map<unsigned int,ChannellerSlabActivity::LoopDungeonData>::operator[](
                          loop_dungeon_data_map,
                          id);
    if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v1 = *id;
    if ( *(_BYTE *)(((unsigned __int64)loop_dungeon_data >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)loop_dungeon_data >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(loop_dungeon_data);
    }
    loop_dungeon_data->dungeon_index = v1;
    if ( *(_BYTE *)(((unsigned __int64)&loop_dungeon_data->score >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)loop_dungeon_data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&loop_dungeon_data->score >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_store4(&loop_dungeon_data->score);
    }
    loop_dungeon_data->score = 0;
    if ( *(char *)(((unsigned __int64)&loop_dungeon_data->is_first_pass_reward_taken >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&loop_dungeon_data->is_first_pass_reward_taken);
    loop_dungeon_data->is_first_pass_reward_taken = 0;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int>>,false,false>::operator++(&__for_begin);
  }
};

// Line 324: range 0000000014F274A2-0000000014F274BC
void __cdecl ChannellerSlabActivity::onStart(ChannellerSlabActivity *const this)
{
  ChannellerSlabActivity::initObserver(this);
};

// Line 329: range 0000000014F274BE-0000000014F27650
void __cdecl ChannellerSlabActivity::onClear(ChannellerSlabActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  char v4[96]; // [rsp+10h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v4;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 8 14 sub_reason:337";
  *(_QWORD *)(v1 + 16) = ChannellerSlabActivity::onClear;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  std::vector<ChannellerSlabActivity::StageData>::clear(&this->bin_data_.stage_vec);
  ChannellerSlabActivity::BuffData::clear(&this->bin_data_.buff_data);
  ChannellerSlabActivity::LoopDungeonStageData::clear(&this->bin_data_.loop_dungeon_stage_data);
  if ( *(_BYTE *)(((unsigned __int64)&this->bin_data_.tokens >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->bin_data_.tokens >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->bin_data_.tokens )
  {
    SubItemReason::SubItemReason((SubItemReason *const)(v1 + 32), ACTION_REASON_ACTIVITY_EXPIRE_ITEM);
    if ( *(_BYTE *)(((unsigned __int64)&this->bin_data_.tokens >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->bin_data_.tokens >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    ChannellerSlabActivity::subToken(this, this->bin_data_.tokens, (const SubItemReason *)(v1 + 32), 0);
  }
  if ( v4 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 343: range 0000000014F27652-0000000014F2767B
int32_t __cdecl ChannellerSlabActivity::execAction(
        ChannellerSlabActivity *const this,
        const data::NewActivityExec *action_exec)
{
  return ChannellerSlabActivity::procAction(this, action_exec, 0);
};

// Line 348: range 0000000014F2767C-0000000014F276A5
int32_t __cdecl ChannellerSlabActivity::refreshAction(
        ChannellerSlabActivity *const this,
        const data::NewActivityExec *action_exec)
{
  return ChannellerSlabActivity::procAction(this, action_exec, 1);
};

// Line 353: range 0000000014F276A6-0000000014F283A9
int32_t __cdecl ChannellerSlabActivity::procAction(
        ChannellerSlabActivity *const this,
        const data::NewActivityExec *action_exec,
        bool is_refresh)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  common::milog::MiLogStream *v6; // rbx
  common::milog::MiLogStream *v7; // rax
  int32_t result; // eax
  const std::string *v9; // rax
  common::milog::MiLogStream *v10; // rbx
  const std::string *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rbx
  common::milog::MiLogStream *v18; // rax
  const std::string *v19; // rax
  common::milog::MiLogStream *v20; // rbx
  const std::string *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // r14
  common::milog::MiLogStream *v28; // r14
  common::milog::MiLogStream *v29; // rbx
  common::milog::MiLogStream *v30; // rax
  const std::string *v31; // rax
  common::milog::MiLogStream *v32; // rbx
  const std::string *v33; // rax
  common::milog::MiLogStream *v34; // rax
  unsigned __int64 val; // [rsp+20h] [rbp-B0h] BYREF
  ChannellerSlabActivity::LoopDungeonData *loop_dungeon_data; // [rsp+28h] [rbp-A8h]
  ChannellerSlabActivity::LoopDungeonStageData *loop_dungeon_stage_data_0; // [rsp+30h] [rbp-A0h]
  ChannellerSlabActivity::LoopDungeonStageData *loop_dungeon_stage_data; // [rsp+38h] [rbp-98h]
  common::milog::MiLogStream v40; // [rsp+40h] [rbp-90h] BYREF
  char v41[112]; // [rsp+60h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v41;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 17 dungeon_index:438";
  *(_QWORD *)(v3 + 16) = ChannellerSlabActivity::procAction;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  switch ( action_exec->type )
  {
    case NEW_ACTIVITY_ACTION_OPEN_CHANNELLER_SLAB_STAGE:
      if ( std::vector<std::string>::size(&action_exec->param) )
      {
        *(_DWORD *)(v3 + 32) = 0;
        v9 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
        if ( common::tools::StringUtils::strToNum<unsigned int>(v9, (unsigned int *)(v3 + 32), 1) )
        {
          common::milog::MiLogStream::create(
            &v40,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/channeller_slab_activity.cpp",
            "procAction",
            367);
          v10 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                  &v40,
                  (const char (*)[19])"stage_id strToNum ");
          v11 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
          v12 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, v11);
          common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v12, (const char (*)[8])" failed");
          common::milog::MiLogStream::~MiLogStream(&v40);
          result = -1;
        }
        else if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
                    &this->active_stage_set_,
                    (const unsigned int *)(v3 + 32)) )
        {
          result = 0;
        }
        else
        {
          if ( !ChannellerSlabActivity::openLevelStage(this, *(_DWORD *)(v3 + 32)) )
          {
            common::milog::MiLogStream::create(
              &v40,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/activity/channeller_slab_activity.cpp",
              "procAction",
              381);
            v15 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    &v40,
                    (const char (*)[12])"open stage ");
            v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v15,
                    (const unsigned int *)(v3 + 32));
            common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v16, (const char (*)[9])" success");
            common::milog::MiLogStream::~MiLogStream(&v40);
            BaseActivity::notifyClientData(this, 0);
            goto LABEL_45;
          }
          common::milog::MiLogStream::create(
            &v40,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/channeller_slab_activity.cpp",
            "procAction",
            378);
          v13 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v40, (const char (*)[12])"open stage ");
          v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v13,
                  (const unsigned int *)(v3 + 32));
          common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v14, (const char (*)[8])" failed");
          common::milog::MiLogStream::~MiLogStream(&v40);
          result = -1;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v40,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/channeller_slab_activity.cpp",
          "procAction",
          360);
        v6 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
               &v40,
               (const char (*)[19])"action param size ");
        val = std::vector<std::string>::size(&action_exec->param);
        v7 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v6, &val);
        common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v7, (const char (*)[12])off_256251A0);
        common::milog::MiLogStream::~MiLogStream(&v40);
        result = -1;
      }
      goto LABEL_46;
    case NEW_ACTIVITY_ACTION_CLOSE_CHANNELLER_SLAB_STAGE:
      if ( std::vector<std::string>::size(&action_exec->param) )
      {
        *(_DWORD *)(v3 + 32) = 0;
        v19 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
        if ( common::tools::StringUtils::strToNum<unsigned int>(v19, (unsigned int *)(v3 + 32), 1) )
        {
          common::milog::MiLogStream::create(
            &v40,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/channeller_slab_activity.cpp",
            "procAction",
            396);
          v20 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                  &v40,
                  (const char (*)[19])"stage_id strToNum ");
          v21 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
          v22 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v20, v21);
          common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v22, (const char (*)[8])" failed");
          common::milog::MiLogStream::~MiLogStream(&v40);
          result = -1;
        }
        else if ( !common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
                     &this->active_stage_set_,
                     (const unsigned int *)(v3 + 32)) )
        {
          result = 0;
        }
        else
        {
          if ( !ChannellerSlabActivity::closeLevelStage(this, *(_DWORD *)(v3 + 32)) )
          {
            common::milog::MiLogStream::create(
              &v40,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/activity/channeller_slab_activity.cpp",
              "procAction",
              410);
            v25 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    &v40,
                    (const char (*)[13])"close stage ");
            v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v25,
                    (const unsigned int *)(v3 + 32));
            common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v26, (const char (*)[9])" success");
            common::milog::MiLogStream::~MiLogStream(&v40);
            BaseActivity::notifyClientData(this, 0);
            goto LABEL_45;
          }
          common::milog::MiLogStream::create(
            &v40,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/channeller_slab_activity.cpp",
            "procAction",
            407);
          v23 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                  &v40,
                  (const char (*)[13])"close stage ");
          v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v23,
                  (const unsigned int *)(v3 + 32));
          common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v24, (const char (*)[8])" failed");
          common::milog::MiLogStream::~MiLogStream(&v40);
          result = -1;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v40,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/channeller_slab_activity.cpp",
          "procAction",
          389);
        v17 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                &v40,
                (const char (*)[19])"action param size ");
        val = std::vector<std::string>::size(&action_exec->param);
        v18 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v17, &val);
        common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v18, (const char (*)[12])off_256251A0);
        common::milog::MiLogStream::~MiLogStream(&v40);
        result = -1;
      }
      goto LABEL_46;
    case NEW_ACTIVITY_ACTION_OPEN_CHANNELLER_SLAB_LOOP_DUNGEON_STAGE:
      common::milog::MiLogStream::create(
        &v40,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/channeller_slab_activity.cpp",
        "procAction",
        416);
      v27 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
              &v40,
              (const char (*)[49])"[CHANNELLER_SLAB] open loop dungeon stage, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      *(_DWORD *)(v3 + 32) = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v40);
      loop_dungeon_stage_data = &this->bin_data_.loop_dungeon_stage_data;
      if ( *(char *)(((unsigned __int64)&this->bin_data_.loop_dungeon_stage_data.is_open >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&this->bin_data_.loop_dungeon_stage_data.is_open);
      loop_dungeon_stage_data->is_open = 1;
      BaseActivity::notifyClientData(this, 0);
      goto LABEL_45;
    case NEW_ACTIVITY_ACTION_CLOSE_CHANNELLER_SLAB_LOOP_DUNGEON_STAGE:
      common::milog::MiLogStream::create(
        &v40,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/channeller_slab_activity.cpp",
        "procAction",
        424);
      v28 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
              &v40,
              (const char (*)[50])"[CHANNELLER_SLAB] close loop dungeon stage, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      *(_DWORD *)(v3 + 32) = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v40);
      loop_dungeon_stage_data_0 = &this->bin_data_.loop_dungeon_stage_data;
      if ( *(char *)(((unsigned __int64)&this->bin_data_.loop_dungeon_stage_data.is_open >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&this->bin_data_.loop_dungeon_stage_data.is_open);
      loop_dungeon_stage_data_0->is_open = 0;
      BaseActivity::notifyClientData(this, 0);
      goto LABEL_45;
    case NEW_ACTIVITY_ACTION_OPEN_CHANNELLER_SLAB_LOOP_DUNGEON:
      if ( std::vector<std::string>::size(&action_exec->param) )
      {
        *(_DWORD *)(v3 + 32) = 0;
        v31 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
        if ( common::tools::StringUtils::strToNum<unsigned int>(v31, (unsigned int *)(v3 + 32), 1) )
        {
          common::milog::MiLogStream::create(
            &v40,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/channeller_slab_activity.cpp",
            "procAction",
            441);
          v32 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                  &v40,
                  (const char (*)[24])"dungeon_index strToNum ");
          v33 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
          v34 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v32, v33);
          common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v34, (const char (*)[8])" failed");
          common::milog::MiLogStream::~MiLogStream(&v40);
          result = -1;
        }
        else
        {
          loop_dungeon_data = std::map<unsigned int,ChannellerSlabActivity::LoopDungeonData>::operator[](
                                &this->bin_data_.loop_dungeon_stage_data.dungeon_data_map,
                                (const std::map<unsigned int,ChannellerSlabActivity::LoopDungeonData>::key_type *)(v3 + 32));
          if ( *(char *)(((unsigned __int64)&loop_dungeon_data->is_open >> 3) + 0x7FFF8000) < 0 )
            __asan_report_store1(&loop_dungeon_data->is_open);
          loop_dungeon_data->is_open = 1;
          BaseActivity::notifyClientData(this, 0);
LABEL_45:
          result = 0;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v40,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/channeller_slab_activity.cpp",
          "procAction",
          434);
        v29 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                &v40,
                (const char (*)[19])"action param size ");
        val = std::vector<std::string>::size(&action_exec->param);
        v30 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v29, &val);
        common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v30, (const char (*)[12])off_256251A0);
        common::milog::MiLogStream::~MiLogStream(&v40);
        result = -1;
      }
LABEL_46:
      if ( v41 == (char *)v3 )
      {
        *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
      }
      else
      {
        *(_QWORD *)v3 = 1172321806LL;
        *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
      }
      return result;
    default:
      if ( is_refresh )
        result = BaseActivity::refreshAction(this, action_exec);
      else
        result = BaseActivity::execAction(this, action_exec);
      goto LABEL_46;
  }
};

// Line 461: range 0000000014F283AA-0000000014F28DF2
void __fastcall ChannellerSlabActivity::getStageActiveCampGroups(
        ChannellerSlabActivity *const this,
        uint32_t stage_id,
        std::vector<unsigned int> *stage_group_vec)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  unsigned __int64 v9; // rax
  unsigned int v10; // ecx
  std::vector<ChannellerSlabActivity::StageData>::size_type v11; // r14
  std::vector<unsigned int>::size_type v12; // r14
  std::vector<unsigned int> *p_active_camp_vec; // rcx
  std::vector<unsigned int>::reference v14; // rdx
  std::vector<const data::ChannellerSlabLevelExcelConfig*>::size_type v15; // r14
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  unsigned __int64 v21; // rax
  unsigned int v22; // ecx
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::reference v27; // rax
  std::pair<unsigned int const,unsigned int> *v28; // rdx
  uint32_t active_camp_index; // [rsp+2Ch] [rbp-174h]
  std::map<unsigned int,std::vector<const data::ChannellerSlabLevelExcelConfig*>>::const_iterator __for_begin; // [rsp+30h] [rbp-170h] BYREF
  std::map<unsigned int,unsigned int>::iterator __for_begin_0; // [rsp+38h] [rbp-168h] BYREF
  const ActivityChannellerSlabExcelConfigMgr *config_mgr; // [rsp+40h] [rbp-160h]
  const std::map<unsigned int,std::vector<const data::ChannellerSlabLevelExcelConfig*>> *round_camp_config_map_ptr; // [rsp+48h] [rbp-158h]
  const std::map<unsigned int,std::vector<const data::ChannellerSlabLevelExcelConfig*>> *__for_range; // [rsp+50h] [rbp-150h]
  std::map<unsigned int,unsigned int> *__for_range_0; // [rsp+58h] [rbp-148h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *_; // [rsp+60h] [rbp-140h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *group_id; // [rsp+68h] [rbp-138h]
  const std::pair<unsigned int const,std::vector<const data::ChannellerSlabLevelExcelConfig*> > *v39; // [rsp+70h] [rbp-130h]
  std::tuple_element<0,const std::pair<unsigned int const,std::vector<const data::ChannellerSlabLevelExcelConfig*> > >::type *round_id; // [rsp+78h] [rbp-128h]
  std::tuple_element<1,const std::pair<unsigned int const,std::vector<const data::ChannellerSlabLevelExcelConfig*> > >::type *camp_config_vec; // [rsp+80h] [rbp-120h]
  const data::ChannellerSlabLevelExcelConfig *first_camp_config_ptr; // [rsp+88h] [rbp-118h]
  unsigned int *camp_group_id; // [rsp+90h] [rbp-110h]
  ChannellerSlabActivity::StageData *stage_data; // [rsp+98h] [rbp-108h]
  const data::ChannellerSlabLevelExcelConfig *camp_config_ptr; // [rsp+A0h] [rbp-100h]
  std::pair<unsigned int const,unsigned int> __in; // [rsp+A8h] [rbp-F8h] BYREF
  common::milog::MiLogStream v47; // [rsp+B0h] [rbp-F0h] BYREF
  char v48[208]; // [rsp+D0h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v48;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 12 stage_id:460 48 8 19 first_camp_iter:481 80 48 19 round_group_map:474";
  *(_QWORD *)(v3 + 16) = ChannellerSlabActivity::getStageActiveCampGroups;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862721] = -234881024;
  v5[536862722] = 62194;
  v5[536862724] = -202116109;
  *(_DWORD *)(v3 + 32) = stage_id;
  if ( *(_DWORD *)(v3 + 32) )
  {
    config_mgr = ChannellerSlabActivity::getConfigMgr(this);
    round_camp_config_map_ptr = ActivityChannellerSlabExcelConfigMgr::getRoundCampsMapByStageID(
                                  config_mgr,
                                  *(_DWORD *)(v3 + 32));
    if ( round_camp_config_map_ptr )
    {
      std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v3 + 80));
      __for_range = round_camp_config_map_ptr;
      __for_begin._M_node = std::map<unsigned int,std::vector<data::ChannellerSlabLevelExcelConfig const*>>::begin(round_camp_config_map_ptr)._M_node;
      __for_begin_0._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::map<unsigned int,std::vector<data::ChannellerSlabLevelExcelConfig const*>>::end(round_camp_config_map_ptr)._M_node;
      while ( std::operator!=(
                &__for_begin,
                (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<const data::ChannellerSlabLevelExcelConfig*> > >::_Self *)&__for_begin_0) )
      {
        v39 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<data::ChannellerSlabLevelExcelConfig const*>>>::operator*(&__for_begin);
        round_id = std::get<0ul,unsigned int const,std::vector<data::ChannellerSlabLevelExcelConfig const*>>(v39);
        camp_config_vec = (std::tuple_element<1,const std::pair<unsigned int const,std::vector<const data::ChannellerSlabLevelExcelConfig*> > >::type *)std::get<1ul,unsigned int const,std::vector<data::ChannellerSlabLevelExcelConfig const*>>(v39);
        if ( *(_BYTE *)(((unsigned __int64)round_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)round_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)round_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( *round_id )
        {
          *(std::vector<const data::ChannellerSlabLevelExcelConfig*>::const_iterator *)(v3 + 48) = std::vector<data::ChannellerSlabLevelExcelConfig const*>::begin(camp_config_vec);
          __in = (std::pair<unsigned int const,unsigned int>)std::vector<data::ChannellerSlabLevelExcelConfig const*>::end(camp_config_vec)._M_current;
          if ( !__gnu_cxx::operator==<data::ChannellerSlabLevelExcelConfig const* const*,std::vector<data::ChannellerSlabLevelExcelConfig const*>>(
                  (const __gnu_cxx::__normal_iterator<const data::ChannellerSlabLevelExcelConfig* const*,std::vector<const data::ChannellerSlabLevelExcelConfig*> > *)(v3 + 48),
                  (const __gnu_cxx::__normal_iterator<const data::ChannellerSlabLevelExcelConfig* const*,std::vector<const data::ChannellerSlabLevelExcelConfig*> > *)&__in) )
          {
            v9 = (unsigned __int64)__gnu_cxx::__normal_iterator<data::ChannellerSlabLevelExcelConfig const* const*,std::vector<data::ChannellerSlabLevelExcelConfig const*>>::operator*((const __gnu_cxx::__normal_iterator<const data::ChannellerSlabLevelExcelConfig* const*,std::vector<const data::ChannellerSlabLevelExcelConfig*> > *const)(v3 + 48));
            if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
              v9 = __asan_report_load8();
            first_camp_config_ptr = *(const data::ChannellerSlabLevelExcelConfig **)v9;
            if ( first_camp_config_ptr )
            {
              camp_group_id = std::map<unsigned int,unsigned int>::operator[](
                                (std::map<unsigned int,unsigned int> *const)(v3 + 80),
                                round_id);
              if ( *(_BYTE *)(((unsigned __int64)&first_camp_config_ptr->group_id >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)first_camp_config_ptr + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&first_camp_config_ptr->group_id >> 3)
                                                                                     + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              v10 = first_camp_config_ptr->group_id;
              if ( *(_BYTE *)(((unsigned __int64)camp_group_id >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)camp_group_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)camp_group_id >> 3)
                                                                                + 0x7FFF8000) )
              {
                __asan_report_store4(camp_group_id);
              }
              *camp_group_id = v10;
              v11 = *(unsigned int *)(v3 + 32);
              if ( v11 < std::vector<ChannellerSlabActivity::StageData>::size(&this->bin_data_.stage_vec) + 1 )
              {
                stage_data = std::vector<ChannellerSlabActivity::StageData>::operator[](
                               &this->bin_data_.stage_vec,
                               (unsigned int)(*(_DWORD *)(v3 + 32) - 1));
                if ( *(_BYTE *)(((unsigned __int64)round_id >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)round_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)round_id >> 3)
                                                                             + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                v12 = *round_id;
                if ( v12 < std::vector<unsigned int>::size(&stage_data->active_camp_vec) + 1 )
                {
                  p_active_camp_vec = &stage_data->active_camp_vec;
                  if ( *(_BYTE *)(((unsigned __int64)round_id >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)round_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)round_id >> 3)
                                                                               + 0x7FFF8000) )
                  {
                    __asan_report_load4();
                  }
                  v14 = std::vector<unsigned int>::operator[](p_active_camp_vec, *round_id - 1);
                  if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load4();
                  }
                  active_camp_index = *v14;
                  v15 = *v14;
                  if ( v15 < std::vector<data::ChannellerSlabLevelExcelConfig const*>::size(camp_config_vec) )
                  {
                    v21 = (unsigned __int64)std::vector<data::ChannellerSlabLevelExcelConfig const*>::operator[](
                                              camp_config_vec,
                                              active_camp_index);
                    if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
                      v21 = __asan_report_load8();
                    camp_config_ptr = *(const data::ChannellerSlabLevelExcelConfig **)v21;
                    if ( camp_config_ptr )
                    {
                      if ( *(_BYTE *)(((unsigned __int64)&camp_config_ptr->group_id >> 3) + 0x7FFF8000) != 0
                        && (char)((((_BYTE)camp_config_ptr + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&camp_config_ptr->group_id >> 3)
                                                                                       + 0x7FFF8000) )
                      {
                        __asan_report_load4();
                      }
                      v22 = camp_config_ptr->group_id;
                      if ( *(_BYTE *)(((unsigned __int64)camp_group_id >> 3) + 0x7FFF8000) != 0
                        && (char)(((unsigned __int8)camp_group_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)camp_group_id >> 3)
                                                                                        + 0x7FFF8000) )
                      {
                        __asan_report_store4(camp_group_id);
                      }
                      *camp_group_id = v22;
                    }
                  }
                  else
                  {
                    if ( *(_BYTE *)(((unsigned __int64)camp_group_id >> 3) + 0x7FFF8000) != 0
                      && (char)(((unsigned __int8)camp_group_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)camp_group_id >> 3)
                                                                                      + 0x7FFF8000) )
                    {
                      __asan_report_store4(camp_group_id);
                    }
                    *camp_group_id = 0;
                    common::milog::MiLogStream::create(
                      &v47,
                      &common::milog::MiLogDefault::default_log_obj_,
                      1u,
                      "./src/player/activity/channeller_slab_activity.cpp",
                      "getStageActiveCampGroups",
                      507);
                    v16 = common::milog::MiLogStream::operator<<<ChannellerSlabActivity,(ChannellerSlabActivity*)0>(
                            &v47,
                            this);
                    v17 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
                            v16,
                            (const char (*)[8])" stage:");
                    v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                            v17,
                            (const unsigned int *)(v3 + 32));
                    v19 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
                            v18,
                            (const char (*)[8])" round:");
                    v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, round_id);
                    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      v20,
                      (const char (*)[16])" all camp done.");
                    common::milog::MiLogStream::~MiLogStream(&v47);
                  }
                }
              }
            }
          }
        }
        std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<data::ChannellerSlabLevelExcelConfig const*>>>::operator++(&__for_begin);
      }
      common::milog::MiLogStream::create(
        &v47,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/channeller_slab_activity.cpp",
        "getStageActiveCampGroups",
        520);
      v23 = common::milog::MiLogStream::operator<<<ChannellerSlabActivity,(ChannellerSlabActivity*)0>(&v47, this);
      v24 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v23, (const char (*)[8])" stage:");
      v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)(v3 + 32));
      v26 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
              v25,
              (const char (*)[29])", active round camp groups: ");
      common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(
        v26,
        (const std::map<unsigned int,unsigned int> *)(v3 + 80));
      common::milog::MiLogStream::~MiLogStream(&v47);
      __for_range_0 = (std::map<unsigned int,unsigned int> *)(v3 + 80);
      __for_begin_0._M_node = std::map<unsigned int,unsigned int>::begin((std::map<unsigned int,unsigned int> *const)(v3 + 80))._M_node;
      *(std::map<unsigned int,unsigned int>::iterator *)(v3 + 48) = std::map<unsigned int,unsigned int>::end(__for_range_0);
      while ( std::operator!=(
                &__for_begin_0,
                (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 48)) )
      {
        v27 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin_0);
        v28 = v27;
        if ( ((unsigned __int8)v27 & 7) >= *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&v27->second + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)v27 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v27->second + 3) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load_n(v27, 8LL);
        }
        __in = *v28;
        _ = std::get<0ul,unsigned int const,unsigned int>(&__in);
        group_id = std::get<1ul,unsigned int const,unsigned int>(&__in);
        if ( *(_BYTE *)(((unsigned __int64)group_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)group_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)group_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( *group_id )
          std::vector<unsigned int>::push_back(stage_group_vec, group_id);
        std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin_0);
      }
      std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v3 + 80));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v47,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/channeller_slab_activity.cpp",
        "getStageActiveCampGroups",
        471);
      v6 = common::milog::MiLogStream::operator<<<ChannellerSlabActivity,(ChannellerSlabActivity*)0>(&v47, this);
      v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])" stage:");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
        v8,
        (const char (*)[33])" round camp config map not found");
      common::milog::MiLogStream::~MiLogStream(&v47);
    }
  }
  if ( v48 == (char *)v3 )
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
};

// Line 532: range 0000000014F28DF4-0000000014F294EB
__int64 __fastcall ChannellerSlabActivity::openLevelStage(ChannellerSlabActivity *const this, uint32_t stage_id)
{
  unsigned int v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  PlayerSceneComp *SceneComp; // rax
  std::vector<unsigned int>::size_type GroupSceneMap; // r15
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  int v15; // r15d
  Scene *v16; // rax
  unsigned __int64 BlockGroupComp; // rax
  unsigned __int64 v18; // rdx
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  __int64 result; // rax
  std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::iterator __for_begin; // [rsp+30h] [rbp-140h] BYREF
  std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::iterator __for_end; // [rsp+38h] [rbp-138h] BYREF
  std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *__for_range; // [rsp+40h] [rbp-130h]
  std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > *__in; // [rsp+48h] [rbp-128h]
  std::tuple_element<0,std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::type *scene_ptr; // [rsp+50h] [rbp-120h]
  std::tuple_element<1,std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::type *group_vec; // [rsp+58h] [rbp-118h]
  common::milog::MiLogStream v36; // [rsp+60h] [rbp-110h] BYREF
  char v37[240]; // [rsp+80h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 12 stage_id:531 48 24 19 stage_group_vec:539 112 48 19 scene_group_map:547";
  *(_QWORD *)(v3 + 16) = ChannellerSlabActivity::openLevelStage;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862722] = -218959360;
  v5[536862723] = 62194;
  v5[536862725] = -202116109;
  *(_DWORD *)(v3 + 32) = stage_id;
  if ( !*(_DWORD *)(v3 + 32) )
  {
    v2 = -1;
    goto LABEL_26;
  }
  std::unordered_set<unsigned int>::insert(
    &this->active_stage_set_,
    (const std::unordered_set<unsigned int>::value_type *)(v3 + 32));
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 48));
  ChannellerSlabActivity::getStageActiveCampGroups(this, *(_DWORD *)(v3 + 32), (std::vector<unsigned int> *)(v3 + 48));
  if ( std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v3 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v36,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/channeller_slab_activity.cpp",
      "openLevelStage",
      543);
    v6 = common::milog::MiLogStream::operator<<<ChannellerSlabActivity,(ChannellerSlabActivity*)0>(&v36, this);
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])" stage:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v8, (const char (*)[16])" all camp done.");
    common::milog::MiLogStream::~MiLogStream(&v36);
  }
  else
  {
    std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::map((std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *const)(v3 + 112));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    SceneComp = Player::getSceneComp(this->player_);
    GroupSceneMap = PlayerSceneComp::getGroupSceneMap(
                      SceneComp,
                      (const std::vector<unsigned int> *)(v3 + 48),
                      (std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *)(v3 + 112));
    if ( GroupSceneMap >= std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 48)) )
    {
      __for_range = (std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *)(v3 + 112);
      __for_begin._M_node = std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::begin((std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *const)(v3 + 112))._M_node;
      __for_end._M_node = std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::end((std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *const)(v3 + 112))._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        __in = std::_Rb_tree_iterator<std::pair<std::shared_ptr<Scene> const,std::vector<unsigned int>>>::operator*(&__for_begin);
        scene_ptr = std::get<0ul,std::shared_ptr<Scene> const,std::vector<unsigned int>>(__in);
        group_vec = std::get<1ul,std::shared_ptr<Scene> const,std::vector<unsigned int>>(__in);
        if ( !std::operator==<Scene>(0LL, scene_ptr) )
        {
          v16 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)scene_ptr);
          BlockGroupComp = (unsigned __int64)Scene::getBlockGroupComp(v16);
          if ( *(_BYTE *)((BlockGroupComp >> 3) + 0x7FFF8000) )
            BlockGroupComp = __asan_report_load8();
          v18 = *(_QWORD *)BlockGroupComp + 96LL;
          if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
            BlockGroupComp = __asan_report_load8();
          if ( (*(unsigned int (__fastcall **)(unsigned __int64, std::tuple_element<1,std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::type *, _QWORD, _QWORD))v18)(
                 BlockGroupComp,
                 group_vec,
                 0LL,
                 0LL) )
          {
            common::milog::MiLogStream::create(
              &v36,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/channeller_slab_activity.cpp",
              "openLevelStage",
              562);
            v19 = common::milog::MiLogStream::operator<<<ChannellerSlabActivity,(ChannellerSlabActivity*)0>(&v36, this);
            v20 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                    v19,
                    (const char (*)[17])" register stage:");
            v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v20,
                    (const unsigned int *)(v3 + 32));
            v22 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v21, (const char (*)[9])" groups:");
            v23 = common::milog::MiLogStream::operator<<<unsigned int>(v22, group_vec);
            v24 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v23, (const char (*)[9])" failed.");
            v25 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)scene_ptr);
            common::milog::MiLogStream::operator<<<Scene,(Scene*)0>(v24, v25);
            common::milog::MiLogStream::~MiLogStream(&v36);
            v2 = -1;
            v15 = 0;
            goto LABEL_23;
          }
        }
        std::_Rb_tree_iterator<std::pair<std::shared_ptr<Scene> const,std::vector<unsigned int>>>::operator++(&__for_begin);
      }
      common::milog::MiLogStream::create(
        &v36,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/channeller_slab_activity.cpp",
        "openLevelStage",
        566);
      v26 = common::milog::MiLogStream::operator<<<ChannellerSlabActivity,(ChannellerSlabActivity*)0>(&v36, this);
      v27 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
              v26,
              (const char (*)[24])" register stage groups:");
      v28 = common::milog::MiLogStream::operator<<<unsigned int>(v27, (const std::vector<unsigned int> *)(v3 + 48));
      common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v28, (const char (*)[7])" done.");
      common::milog::MiLogStream::~MiLogStream(&v36);
      v15 = 1;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v36,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/channeller_slab_activity.cpp",
        "openLevelStage",
        551);
      v11 = common::milog::MiLogStream::operator<<<ChannellerSlabActivity,(ChannellerSlabActivity*)0>(&v36, this);
      v12 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
              v11,
              (const char (*)[25])" get group scene failed.");
      v13 = common::milog::MiLogStream::operator<<<unsigned int>(v12, (const std::vector<unsigned int> *)(v3 + 48));
      v14 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v13, (const char (*)[9])" @stage:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v36);
      v2 = -1;
      v15 = 0;
    }
LABEL_23:
    std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::~map((std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *const)(v3 + 112));
    if ( v15 != 1 )
      goto LABEL_25;
  }
  v2 = 0;
LABEL_25:
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 48));
LABEL_26:
  result = v2;
  if ( v37 == (char *)v3 )
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
  return result;
};

// Line 573: range 0000000014F294EC-0000000014F29C05
__int64 __fastcall ChannellerSlabActivity::closeLevelStage(ChannellerSlabActivity *const this, uint32_t stage_id)
{
  unsigned int v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  PlayerSceneComp *SceneComp; // rax
  std::vector<unsigned int>::size_type GroupSceneMap; // r15
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  int v15; // r15d
  Scene *v16; // rax
  unsigned __int64 BlockGroupComp; // rax
  unsigned __int64 v18; // rdx
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  __int64 result; // rax
  std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::iterator __for_begin; // [rsp+30h] [rbp-140h] BYREF
  std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::iterator __for_end; // [rsp+38h] [rbp-138h] BYREF
  std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *__for_range; // [rsp+40h] [rbp-130h]
  std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > *__in; // [rsp+48h] [rbp-128h]
  std::tuple_element<0,std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::type *scene_ptr; // [rsp+50h] [rbp-120h]
  std::tuple_element<1,std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::type *group_vec; // [rsp+58h] [rbp-118h]
  common::milog::MiLogStream v38; // [rsp+60h] [rbp-110h] BYREF
  char v39[240]; // [rsp+80h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 12 stage_id:572 48 24 19 stage_group_vec:580 112 48 19 scene_group_map:588";
  *(_QWORD *)(v3 + 16) = ChannellerSlabActivity::closeLevelStage;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862722] = -218959360;
  v5[536862723] = 62194;
  v5[536862725] = -202116109;
  *(_DWORD *)(v3 + 32) = stage_id;
  if ( !*(_DWORD *)(v3 + 32) )
  {
    v2 = -1;
    goto LABEL_26;
  }
  std::unordered_set<unsigned int>::erase(
    &this->active_stage_set_,
    (const std::unordered_set<unsigned int>::key_type *)(v3 + 32));
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 48));
  ChannellerSlabActivity::getStageActiveCampGroups(this, *(_DWORD *)(v3 + 32), (std::vector<unsigned int> *)(v3 + 48));
  if ( std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v3 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v38,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/channeller_slab_activity.cpp",
      "closeLevelStage",
      584);
    v6 = common::milog::MiLogStream::operator<<<ChannellerSlabActivity,(ChannellerSlabActivity*)0>(&v38, this);
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])" stage:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v8, (const char (*)[16])" all camp done.");
    common::milog::MiLogStream::~MiLogStream(&v38);
  }
  else
  {
    std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::map((std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *const)(v3 + 112));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    SceneComp = Player::getSceneComp(this->player_);
    GroupSceneMap = PlayerSceneComp::getGroupSceneMap(
                      SceneComp,
                      (const std::vector<unsigned int> *)(v3 + 48),
                      (std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *)(v3 + 112));
    if ( GroupSceneMap >= std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 48)) )
    {
      __for_range = (std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *)(v3 + 112);
      __for_begin._M_node = std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::begin((std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *const)(v3 + 112))._M_node;
      __for_end._M_node = std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::end((std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *const)(v3 + 112))._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        __in = std::_Rb_tree_iterator<std::pair<std::shared_ptr<Scene> const,std::vector<unsigned int>>>::operator*(&__for_begin);
        scene_ptr = std::get<0ul,std::shared_ptr<Scene> const,std::vector<unsigned int>>(__in);
        group_vec = std::get<1ul,std::shared_ptr<Scene> const,std::vector<unsigned int>>(__in);
        if ( !std::operator==<Scene>(0LL, scene_ptr) )
        {
          v16 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)scene_ptr);
          BlockGroupComp = (unsigned __int64)Scene::getBlockGroupComp(v16);
          if ( *(_BYTE *)((BlockGroupComp >> 3) + 0x7FFF8000) )
            BlockGroupComp = __asan_report_load8();
          v18 = *(_QWORD *)BlockGroupComp + 104LL;
          if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
            BlockGroupComp = __asan_report_load8();
          if ( (*(unsigned int (__fastcall **)(unsigned __int64, std::tuple_element<1,std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::type *, _QWORD))v18)(
                 BlockGroupComp,
                 group_vec,
                 0LL) )
          {
            common::milog::MiLogStream::create(
              &v38,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/channeller_slab_activity.cpp",
              "closeLevelStage",
              603);
            v19 = common::milog::MiLogStream::operator<<<ChannellerSlabActivity,(ChannellerSlabActivity*)0>(&v38, this);
            v20 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                    v19,
                    (const char (*)[19])" unregister stage:");
            v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v20,
                    (const unsigned int *)(v3 + 32));
            v22 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v21, (const char (*)[9])" groups:");
            v23 = common::milog::MiLogStream::operator<<<unsigned int>(v22, group_vec);
            v24 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v23, (const char (*)[9])" failed.");
            v25 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)scene_ptr);
            common::milog::MiLogStream::operator<<<Scene,(Scene*)0>(v24, v25);
            common::milog::MiLogStream::~MiLogStream(&v38);
            v2 = -1;
            v15 = 0;
            goto LABEL_23;
          }
        }
        std::_Rb_tree_iterator<std::pair<std::shared_ptr<Scene> const,std::vector<unsigned int>>>::operator++(&__for_begin);
      }
      common::milog::MiLogStream::create(
        &v38,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/channeller_slab_activity.cpp",
        "closeLevelStage",
        607);
      v26 = common::milog::MiLogStream::operator<<<ChannellerSlabActivity,(ChannellerSlabActivity*)0>(&v38, this);
      v27 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
              v26,
              (const char (*)[19])" unregister stage:");
      v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, (const unsigned int *)(v3 + 32));
      v29 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v28, (const char (*)[9])" groups:");
      v30 = common::milog::MiLogStream::operator<<<unsigned int>(v29, (const std::vector<unsigned int> *)(v3 + 48));
      common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v30, (const char (*)[7])" done.");
      common::milog::MiLogStream::~MiLogStream(&v38);
      v15 = 1;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v38,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/channeller_slab_activity.cpp",
        "closeLevelStage",
        592);
      v11 = common::milog::MiLogStream::operator<<<ChannellerSlabActivity,(ChannellerSlabActivity*)0>(&v38, this);
      v12 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
              v11,
              (const char (*)[25])" get group scene failed.");
      v13 = common::milog::MiLogStream::operator<<<unsigned int>(v12, (const std::vector<unsigned int> *)(v3 + 48));
      v14 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v13, (const char (*)[9])" @stage:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v38);
      v2 = -1;
      v15 = 0;
    }
LABEL_23:
    std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::~map((std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *const)(v3 + 112));
    if ( v15 != 1 )
      goto LABEL_25;
  }
  v2 = 0;
LABEL_25:
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 48));
LABEL_26:
  result = v2;
  if ( v39 == (char *)v3 )
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
  return result;
};

// Line 614: range 0000000014F29C06-0000000014F2A3EB
void __cdecl ChannellerSlabActivity::initObserver(ChannellerSlabActivity *const this)
{
  unsigned __int64 p_M_finish; // r14
  __int64 v2; // rax
  _DWORD *v3; // r15
  PlayerEventComp *EventComp; // r12
  PlayerEventComp *v5; // r12
  PlayerEventComp *v6; // r12
  PlayerEventComp *v7; // r12
  PlayerEventComp *v8; // r12
  PlayerEventComp *v9; // r12
  PlayerEventComp v10; // [rsp+70h] [rbp-F0h] BYREF

  p_M_finish = (unsigned __int64)&v10.event_center_.context_.pending_que_.c._M_impl._M_finish;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      p_M_finish = v2;
  }
  *(_QWORD *)p_M_finish = 1102416563LL;
  *(_QWORD *)(p_M_finish + 8) = "2 32 16 12 this_ptr:615 64 16 12 this_wtr:616";
  *(_QWORD *)(p_M_finish + 16) = ChannellerSlabActivity::initObserver;
  v3 = (_DWORD *)(p_M_finish >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  std::enable_shared_from_this<BaseActivity>::shared_from_this((std::enable_shared_from_this<BaseActivity> *const)&v10.event_center_.context_.pending_que_.c._M_impl._M_start._M_last);
  std::dynamic_pointer_cast<ChannellerSlabActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)(p_M_finish + 32));
  std::shared_ptr<BaseActivity>::~shared_ptr((std::shared_ptr<BaseActivity> *const)&v10.event_center_.context_.pending_que_.c._M_impl._M_start._M_last);
  std::weak_ptr<ChannellerSlabActivity>::weak_ptr<ChannellerSlabActivity,void>(
    (std::weak_ptr<ChannellerSlabActivity> *const)(p_M_finish + 64),
    (const std::shared_ptr<ChannellerSlabActivity> *)(p_M_finish + 32));
  if ( std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->general_reward_obs_wtr_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    EventComp = Player::getEventComp(this->player_);
    std::weak_ptr<ChannellerSlabActivity>::weak_ptr(
      (std::weak_ptr<ChannellerSlabActivity> *const)&v10.event_center_.context_.pending_que_.c._M_impl._M_start._M_last,
      (const std::weak_ptr<ChannellerSlabActivity> *)(p_M_finish + 64));
    PlayerEventComp::registerObserver<ChannellerSlabActivity,TakeGeneralRewardEvent>(
      &v10,
      (std::weak_ptr<ChannellerSlabActivity> *)EventComp,
      (void (*)(ChannellerSlabActivity *, const TakeGeneralRewardEvent *))&v10.event_center_.context_.pending_que_.c._M_impl._M_start._M_last);
    std::weak_ptr<Observer>::operator=(&this->general_reward_obs_wtr_, (std::weak_ptr<Observer> *)&v10);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v10);
    std::weak_ptr<ChannellerSlabActivity>::~weak_ptr((std::weak_ptr<ChannellerSlabActivity> *const)&v10.event_center_.context_.pending_que_.c._M_impl._M_start._M_last);
  }
  if ( std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->enter_scene_obs_wtr_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v5 = Player::getEventComp(this->player_);
    std::weak_ptr<ChannellerSlabActivity>::weak_ptr(
      (std::weak_ptr<ChannellerSlabActivity> *const)&v10.event_center_.context_.pending_que_.c._M_impl._M_start._M_last,
      (const std::weak_ptr<ChannellerSlabActivity> *)(p_M_finish + 64));
    PlayerEventComp::registerObserver<ChannellerSlabActivity,PostEnterSceneEvent>(
      (PlayerEventComp *const)&v10._M_weak_this._M_refcount,
      (std::weak_ptr<ChannellerSlabActivity> *)v5,
      (void (*)(ChannellerSlabActivity *, const PostEnterSceneEvent *))&v10.event_center_.context_.pending_que_.c._M_impl._M_start._M_last);
    std::weak_ptr<Observer>::operator=(
      &this->enter_scene_obs_wtr_,
      (std::weak_ptr<Observer> *)&v10._M_weak_this._M_refcount);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v10._M_weak_this._M_refcount);
    std::weak_ptr<ChannellerSlabActivity>::~weak_ptr((std::weak_ptr<ChannellerSlabActivity> *const)&v10.event_center_.context_.pending_que_.c._M_impl._M_start._M_last);
  }
  if ( std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->leave_scene_obs_wtr_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v6 = Player::getEventComp(this->player_);
    std::weak_ptr<ChannellerSlabActivity>::weak_ptr(
      (std::weak_ptr<ChannellerSlabActivity> *const)&v10.event_center_.context_.pending_que_.c._M_impl._M_start._M_last,
      (const std::weak_ptr<ChannellerSlabActivity> *)(p_M_finish + 64));
    PlayerEventComp::registerObserver<ChannellerSlabActivity,LeaveSceneEvent>(
      (PlayerEventComp *const)&v10.event_center_,
      (std::weak_ptr<ChannellerSlabActivity> *)v6,
      (void (*)(ChannellerSlabActivity *, const LeaveSceneEvent *))&v10.event_center_.context_.pending_que_.c._M_impl._M_start._M_last);
    std::weak_ptr<Observer>::operator=(&this->leave_scene_obs_wtr_, (std::weak_ptr<Observer> *)&v10.event_center_);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v10.event_center_);
    std::weak_ptr<ChannellerSlabActivity>::~weak_ptr((std::weak_ptr<ChannellerSlabActivity> *const)&v10.event_center_.context_.pending_que_.c._M_impl._M_start._M_last);
  }
  if ( std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->obtain_avatar_obs_wtr_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v7 = Player::getEventComp(this->player_);
    std::weak_ptr<ChannellerSlabActivity>::weak_ptr(
      (std::weak_ptr<ChannellerSlabActivity> *const)&v10.event_center_.context_.pending_que_.c._M_impl._M_start._M_last,
      (const std::weak_ptr<ChannellerSlabActivity> *)(p_M_finish + 64));
    PlayerEventComp::registerObserver<ChannellerSlabActivity,ObtainAvatarEvent>(
      (PlayerEventComp *const)&v10.event_center_.context_.pending_que_,
      (std::weak_ptr<ChannellerSlabActivity> *)v7,
      (void (*)(ChannellerSlabActivity *, const ObtainAvatarEvent *))&v10.event_center_.context_.pending_que_.c._M_impl._M_start._M_last);
    std::weak_ptr<Observer>::operator=(
      &this->obtain_avatar_obs_wtr_,
      (std::weak_ptr<Observer> *)&v10.event_center_.context_.pending_que_);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v10.event_center_.context_.pending_que_);
    std::weak_ptr<ChannellerSlabActivity>::~weak_ptr((std::weak_ptr<ChannellerSlabActivity> *const)&v10.event_center_.context_.pending_que_.c._M_impl._M_start._M_last);
  }
  if ( std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->avatar_level_up_obs_wtr_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v8 = Player::getEventComp(this->player_);
    std::weak_ptr<ChannellerSlabActivity>::weak_ptr(
      (std::weak_ptr<ChannellerSlabActivity> *const)&v10.event_center_.context_.pending_que_.c._M_impl._M_start._M_last,
      (const std::weak_ptr<ChannellerSlabActivity> *)(p_M_finish + 64));
    PlayerEventComp::registerObserver<ChannellerSlabActivity,AvatarLevelupEvent>(
      (PlayerEventComp *const)&v10.event_center_.context_.pending_que_.c._M_impl._M_start,
      (std::weak_ptr<ChannellerSlabActivity> *)v8,
      (void (*)(ChannellerSlabActivity *, const AvatarLevelupEvent *))&v10.event_center_.context_.pending_que_.c._M_impl._M_start._M_last);
    std::weak_ptr<Observer>::operator=(
      &this->avatar_level_up_obs_wtr_,
      (std::weak_ptr<Observer> *)&v10.event_center_.context_.pending_que_.c._M_impl._M_start);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v10.event_center_.context_.pending_que_.c._M_impl._M_start);
    std::weak_ptr<ChannellerSlabActivity>::~weak_ptr((std::weak_ptr<ChannellerSlabActivity> *const)&v10.event_center_.context_.pending_que_.c._M_impl._M_start._M_last);
  }
  if ( std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->challenge_begin_obs_wtr_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v9 = Player::getEventComp(this->player_);
    std::weak_ptr<ChannellerSlabActivity>::weak_ptr(
      (std::weak_ptr<ChannellerSlabActivity> *const)&v10.event_center_.context_.pending_que_.c._M_impl._M_start,
      (const std::weak_ptr<ChannellerSlabActivity> *)(p_M_finish + 64));
    PlayerEventComp::registerObserver<ChannellerSlabActivity,ChallengeBeginEvent>(
      (PlayerEventComp *const)&v10.event_center_.context_.pending_que_.c._M_impl._M_start._M_last,
      (std::weak_ptr<ChannellerSlabActivity> *)v9,
      (void (*)(ChannellerSlabActivity *, const ChallengeBeginEvent *))&v10.event_center_.context_.pending_que_.c._M_impl._M_start);
    std::weak_ptr<Observer>::operator=(
      &this->challenge_begin_obs_wtr_,
      (std::weak_ptr<Observer> *)&v10.event_center_.context_.pending_que_.c._M_impl._M_start._M_last);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v10.event_center_.context_.pending_que_.c._M_impl._M_start._M_last);
    std::weak_ptr<ChannellerSlabActivity>::~weak_ptr((std::weak_ptr<ChannellerSlabActivity> *const)&v10.event_center_.context_.pending_que_.c._M_impl._M_start);
  }
  std::weak_ptr<ChannellerSlabActivity>::~weak_ptr((std::weak_ptr<ChannellerSlabActivity> *const)(p_M_finish + 64));
  std::shared_ptr<ChannellerSlabActivity>::~shared_ptr((std::shared_ptr<ChannellerSlabActivity> *const)(p_M_finish + 32));
  if ( &v10.event_center_.context_.pending_que_.c._M_impl._M_finish == (std::_Deque_base<std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> >>::iterator *)p_M_finish )
  {
    *(_QWORD *)((p_M_finish >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((p_M_finish >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)p_M_finish = 1172321806LL;
    *(_QWORD *)((p_M_finish >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((p_M_finish >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 644: range 0000000014F2A3EC-0000000014F2BBB8
void __cdecl ChannellerSlabActivity::onTakeGeneralRewardEvent(
        ChannellerSlabActivity *const this,
        const TakeGeneralRewardEvent *event)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const data::ActivityChannellerSlabExcelConfigMgrBase *M_len; // rdx
  common::milog::MiLogStream *v6; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  uint32_t SceneComp; // eax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  Scene *v12; // rax
  unsigned __int64 v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  ChannellerSlabActivity::BinData *p_bin_data; // rcx
  unsigned __int64 v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  ChannellerSlabActivity::BinData *v29; // rcx
  std::vector<unsigned int> *p_active_camp_vec; // rcx
  std::vector<unsigned int> *v31; // rcx
  uint32_t v32; // r8d
  uint32_t v33; // ecx
  uint32_t v34; // edi
  uint32_t v35; // ecx
  uint32_t v36; // edi
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  PlayerWatcherComp *WatcherComp; // rdi
  uint32_t schedule_id; // edx
  uint32_t v48; // ecx
  uint32_t v49; // edi
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  LuaConfigMgr *p_lua_config_mgr; // rcx
  uint32_t v56; // eax
  common::milog::MiLogStream *v57; // rax
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // rax
  Scene *v61; // rax
  unsigned __int64 v62; // rax
  bool v63; // r14
  common::milog::MiLogStream *v64; // rax
  common::milog::MiLogStream *v65; // rax
  common::milog::MiLogStream *v66; // rax
  common::milog::MiLogStream *v67; // rax
  common::milog::MiLogStream *v68; // rax
  common::milog::MiLogStream *v69; // rax
  common::milog::MiLogStream *v70; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v71; // rax
  common::milog::MiLogStream *v72; // rax
  common::milog::MiLogStream *v73; // rax
  common::milog::MiLogStream *v74; // rax
  std::initializer_list<unsigned int> __la; // [rsp+10h] [rbp-190h]
  unsigned int (__fastcall *__l)(SceneBlockGroupComp *, std::vector<unsigned int> *, _QWORD, _QWORD); // [rsp+10h] [rbp-190h]
  unsigned int (__fastcall *v77)(SceneBlockGroupComp *, std::vector<unsigned int> *, _QWORD); // [rsp+20h] [rbp-180h]
  SceneBlockGroupComp *BlockGroupComp; // [rsp+28h] [rbp-178h]
  bool v79; // [rsp+28h] [rbp-178h]
  common::milog::MiLogStream *v80; // [rsp+28h] [rbp-178h]
  std::vector<ChannellerSlabActivity::StageData>::size_type stage_id; // [rsp+28h] [rbp-178h]
  uint32_t v82; // [rsp+28h] [rbp-178h]
  std::vector<unsigned int>::size_type round_id; // [rsp+28h] [rbp-178h]
  SceneBlockGroupComp *v84; // [rsp+28h] [rbp-178h]
  std::allocator<unsigned int> __a; // [rsp+4Fh] [rbp-151h] BYREF
  std::initializer_list<unsigned int> v87; // [rsp+50h] [rbp-150h] BYREF
  const ChannellerSlabGroupInfo *camp_group_info_ptr; // [rsp+60h] [rbp-140h]
  const ChannellerSlabGroupInfo *camp_group_info; // [rsp+68h] [rbp-138h]
  const data::ChannellerSlabPreviewExcelConfig *preview_config_ptr; // [rsp+70h] [rbp-130h]
  ChannellerSlabActivity::StageData *stage_data; // [rsp+78h] [rbp-128h]
  uint32_t *active_camp_index; // [rsp+80h] [rbp-120h]
  const data::ChannellerSlabLevelExcelConfig *camp_level_config_ptr; // [rsp+88h] [rbp-118h]
  std::vector<unsigned int> v94; // [rsp+90h] [rbp-110h] BYREF
  common::milog::MiLogStream v95; // [rsp+B0h] [rbp-F0h] BYREF
  char v96[208]; // [rsp+D0h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v96;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 4 12 group_id:645 48 4 12 scene_id:671 64 4 19 prev_camp_index:701 80 4 16 new_scene_id:717"
                        " 96 16 13 scene_ptr:672 128 16 17 new_scene_ptr:718";
  *(_QWORD *)(v2 + 16) = ChannellerSlabActivity::onTakeGeneralRewardEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -234556924;
  v4[536862723] = -219021312;
  v4[536862724] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  *(_DWORD *)(v2 + 32) = event->group_id;
  if ( *(_BYTE *)(((unsigned __int64)&event->gadget_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->gadget_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  HIDWORD(v87._M_array) = event->gadget_id;
  v87._M_len = (std::initializer_list<unsigned int>::size_type)ChannellerSlabActivity::getConfigMgr(this);
  camp_group_info_ptr = ActivityChannellerSlabExcelConfigMgr::findCampGroupInfoByGroupID(
                          (const ActivityChannellerSlabExcelConfigMgr *const)v87._M_len,
                          *(_DWORD *)(v2 + 32));
  if ( camp_group_info_ptr )
  {
    camp_group_info = camp_group_info_ptr;
    if ( *(_BYTE *)(((unsigned __int64)camp_group_info_ptr >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)camp_group_info_ptr & 7) + 3) >= *(_BYTE *)(((unsigned __int64)camp_group_info_ptr >> 3)
                                                                            + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( camp_group_info->stage_id )
    {
      if ( *(_BYTE *)(((unsigned __int64)&camp_group_info->round_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)camp_group_info + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&camp_group_info->round_id >> 3)
                                                                      + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( camp_group_info->round_id )
      {
        M_len = (const data::ActivityChannellerSlabExcelConfigMgrBase *)v87._M_len;
        if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        preview_config_ptr = data::ActivityChannellerSlabExcelConfigMgrBase::findChannellerSlabPreviewExcelConfig(
                               M_len,
                               this->activity_id_);
        if ( preview_config_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&preview_config_ptr->level_reward_gadget_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&preview_config_ptr->level_reward_gadget_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          if ( HIDWORD(v87._M_array) == preview_config_ptr->level_reward_gadget_id )
          {
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)(v2 + 128));
            v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
            *(_DWORD *)(v2 + 48) = LuaConfigMgr::getSceneIdByGroupId(
                                     &v7->design_config.lua_config_mgr,
                                     *(_DWORD *)(v2 + 32));
            std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 128));
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            SceneComp = (unsigned int)Player::getSceneComp(this->player_);
            PlayerSceneComp::getPersonalScene((PlayerSceneComp *const)(v2 + 96), SceneComp);
            if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 96)) )
            {
              common::milog::MiLogStream::create(
                &v95,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/channeller_slab_activity.cpp",
                "onTakeGeneralRewardEvent",
                675);
              v9 = common::milog::MiLogStream::operator<<<ChannellerSlabActivity,(ChannellerSlabActivity*)0>(&v95, this);
              v10 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v9, (const char (*)[8])" scene:");
              v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v10,
                      (const unsigned int *)(v2 + 48));
              common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v11, (const char (*)[9])" nullptr");
              common::milog::MiLogStream::~MiLogStream(&v95);
            }
            else
            {
              v12 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
              BlockGroupComp = Scene::getBlockGroupComp(v12);
              if ( *(_BYTE *)(((unsigned __int64)BlockGroupComp >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              v13 = (unsigned __int64)(BlockGroupComp->_vptr_SceneCompBase + 13);
              if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
                v13 = __asan_report_load8();
              v77 = *(unsigned int (__fastcall **)(SceneBlockGroupComp *, std::vector<unsigned int> *, _QWORD))v13;
              LODWORD(v87._M_array) = *(_DWORD *)(v2 + 32);
              __la._M_array = (std::initializer_list<unsigned int>::iterator)&v87;
              __la._M_len = 1LL;
              std::allocator<unsigned int>::allocator(&__a);
              std::vector<unsigned int>::vector(&v94, __la, &__a);
              v79 = v77(BlockGroupComp, &v94, 0LL) != 0;
              std::vector<unsigned int>::~vector(&v94);
              std::allocator<unsigned int>::~allocator(&__a);
              if ( v79 )
              {
                common::milog::MiLogStream::create(
                  &v95,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/activity/channeller_slab_activity.cpp",
                  "onTakeGeneralRewardEvent",
                  681);
                v14 = common::milog::MiLogStream::operator<<<ChannellerSlabActivity,(ChannellerSlabActivity*)0>(
                        &v95,
                        this);
                v15 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                        v14,
                        (const char (*)[19])" unregister group:");
                v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v15,
                        (const unsigned int *)(v2 + 32));
                v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        v16,
                        (const char (*)[16])" failed. stage:");
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v95,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/player/activity/channeller_slab_activity.cpp",
                  "onTakeGeneralRewardEvent",
                  685);
                v21 = common::milog::MiLogStream::operator<<<ChannellerSlabActivity,(ChannellerSlabActivity*)0>(
                        &v95,
                        this);
                v22 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                        v21,
                        (const char (*)[19])" unregister group:");
                v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v22,
                        (const unsigned int *)(v2 + 32));
                v17 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                        v23,
                        (const char (*)[14])" done. stage:");
              }
              v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v17,
                      &camp_group_info->stage_id);
              v19 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v18, (const char (*)[8])" round:");
              v80 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v19,
                      &camp_group_info->round_id);
              v20 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
              common::milog::MiLogStream::operator<<<Scene,(Scene*)0>(v80, v20);
              common::milog::MiLogStream::~MiLogStream(&v95);
              if ( *(_BYTE *)(((unsigned __int64)camp_group_info >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)camp_group_info & 7) + 3) >= *(_BYTE *)(((unsigned __int64)camp_group_info >> 3)
                                                                                  + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              stage_id = camp_group_info->stage_id;
              if ( stage_id >= std::vector<ChannellerSlabActivity::StageData>::size(&this->bin_data_.stage_vec) + 1 )
              {
                p_bin_data = &this->bin_data_;
                if ( *(_BYTE *)(((unsigned __int64)camp_group_info >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)camp_group_info & 7) + 3) >= *(_BYTE *)(((unsigned __int64)camp_group_info >> 3)
                                                                                    + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                std::vector<ChannellerSlabActivity::StageData>::resize(
                  &p_bin_data->stage_vec,
                  camp_group_info->stage_id);
                if ( *(_BYTE *)(((unsigned __int64)camp_group_info >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)camp_group_info & 7) + 3) >= *(_BYTE *)(((unsigned __int64)camp_group_info >> 3)
                                                                                    + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                v82 = camp_group_info->stage_id;
                v25 = (unsigned __int64)std::vector<ChannellerSlabActivity::StageData>::operator[](
                                          &this->bin_data_.stage_vec,
                                          camp_group_info->stage_id - 1);
                if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((v25 >> 3) + 0x7FFF8000) <= 3 )
                  v25 = __asan_report_store4(v25);
                *(_DWORD *)v25 = v82;
                common::milog::MiLogStream::create(
                  &v95,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/player/activity/channeller_slab_activity.cpp",
                  "onTakeGeneralRewardEvent",
                  692);
                v26 = common::milog::MiLogStream::operator<<<ChannellerSlabActivity,(ChannellerSlabActivity*)0>(
                        &v95,
                        this);
                v27 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                        v26,
                        (const char (*)[13])" init stage:");
                v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v27,
                        &camp_group_info->stage_id);
                common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v28, (const char (*)[11])" bin data.");
                common::milog::MiLogStream::~MiLogStream(&v95);
              }
              v29 = &this->bin_data_;
              if ( *(_BYTE *)(((unsigned __int64)camp_group_info >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)camp_group_info & 7) + 3) >= *(_BYTE *)(((unsigned __int64)camp_group_info >> 3)
                                                                                  + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              stage_data = std::vector<ChannellerSlabActivity::StageData>::operator[](
                             &v29->stage_vec,
                             camp_group_info->stage_id - 1);
              if ( *(_BYTE *)(((unsigned __int64)&camp_group_info->round_id >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)camp_group_info + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&camp_group_info->round_id >> 3)
                                                                              + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              round_id = camp_group_info->round_id;
              if ( round_id >= std::vector<unsigned int>::size(&stage_data->active_camp_vec) + 1 )
              {
                p_active_camp_vec = &stage_data->active_camp_vec;
                if ( *(_BYTE *)(((unsigned __int64)&camp_group_info->round_id >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)camp_group_info + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&camp_group_info->round_id >> 3)
                                                                                + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                std::vector<unsigned int>::resize(p_active_camp_vec, camp_group_info->round_id);
              }
              v31 = &stage_data->active_camp_vec;
              if ( *(_BYTE *)(((unsigned __int64)&camp_group_info->round_id >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)camp_group_info + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&camp_group_info->round_id >> 3)
                                                                              + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              active_camp_index = std::vector<unsigned int>::operator[](v31, camp_group_info->round_id - 1);
              v32 = *(_DWORD *)(v2 + 32);
              if ( *(_BYTE *)(((unsigned __int64)active_camp_index >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)active_camp_index & 7) + 3) >= *(_BYTE *)(((unsigned __int64)active_camp_index >> 3)
                                                                                    + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              v33 = *active_camp_index;
              if ( *(_BYTE *)(((unsigned __int64)&camp_group_info->round_id >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)camp_group_info + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&camp_group_info->round_id >> 3)
                                                                              + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              v34 = camp_group_info->round_id;
              if ( *(_BYTE *)(((unsigned __int64)camp_group_info >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)camp_group_info & 7) + 3) >= *(_BYTE *)(((unsigned __int64)camp_group_info >> 3)
                                                                                  + 0x7FFF8000) )
              {
                v34 = (unsigned int)camp_group_info;
                __asan_report_load4();
              }
              ChannellerSlabActivity::writeCampDoneLog(this, camp_group_info->stage_id, v34, v33, v32);
              if ( *(_BYTE *)(((unsigned __int64)active_camp_index >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)active_camp_index & 7) + 3) >= *(_BYTE *)(((unsigned __int64)active_camp_index >> 3)
                                                                                    + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              *(_DWORD *)(v2 + 64) = (*active_camp_index)++;
              v35 = *active_camp_index;
              if ( *(_BYTE *)(((unsigned __int64)&camp_group_info->round_id >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)camp_group_info + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&camp_group_info->round_id >> 3)
                                                                              + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              v36 = camp_group_info->round_id;
              if ( *(_BYTE *)(((unsigned __int64)camp_group_info >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)camp_group_info & 7) + 3) >= *(_BYTE *)(((unsigned __int64)camp_group_info >> 3)
                                                                                  + 0x7FFF8000) )
              {
                v36 = (unsigned int)camp_group_info;
                __asan_report_load4();
              }
              ChannellerSlabActivity::sendStageActiveChallengeIndexNotify(this, camp_group_info->stage_id, v36, v35);
              common::milog::MiLogStream::create(
                &v95,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/player/activity/channeller_slab_activity.cpp",
                "onTakeGeneralRewardEvent",
                704);
              v37 = common::milog::MiLogStream::operator<<<ChannellerSlabActivity,(ChannellerSlabActivity*)0>(
                      &v95,
                      this);
              v38 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v37, (const char (*)[8])" stage:");
              v39 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v38,
                      &camp_group_info->stage_id);
              v40 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v39, (const char (*)[8])" round:");
              v41 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v40,
                      &camp_group_info->round_id);
              v42 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                      v41,
                      (const char (*)[22])" active_camp change [");
              v43 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v42,
                      (const unsigned int *)(v2 + 64));
              v44 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v43, (const char (*)[3])"->");
              v45 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v44, active_camp_index);
              common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v45, (const char (*)[3])"].");
              common::milog::MiLogStream::~MiLogStream(&v95);
              BaseActivity::updateAllConds(this);
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              WatcherComp = Player::getWatcherComp(this->player_);
              if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3)
                                                                    + 0x7FFF8000) )
              {
                WatcherComp = (PlayerWatcherComp *)&this->schedule_id_;
                __asan_report_load4();
              }
              schedule_id = this->schedule_id_;
              if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
              {
                WatcherComp = (PlayerWatcherComp *)&this->activity_id_;
                __asan_report_load4();
              }
              PlayerWatcherComp::triggerChannellerSlabFinishAllCamp(WatcherComp, this->activity_id_, schedule_id);
              if ( *(_BYTE *)(((unsigned __int64)active_camp_index >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)active_camp_index & 7) + 3) >= *(_BYTE *)(((unsigned __int64)active_camp_index >> 3)
                                                                                    + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              v48 = *active_camp_index;
              if ( *(_BYTE *)(((unsigned __int64)&camp_group_info->round_id >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)camp_group_info + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&camp_group_info->round_id >> 3)
                                                                              + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              v49 = camp_group_info->round_id;
              if ( *(_BYTE *)(((unsigned __int64)camp_group_info >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)camp_group_info & 7) + 3) >= *(_BYTE *)(((unsigned __int64)camp_group_info >> 3)
                                                                                  + 0x7FFF8000) )
              {
                v49 = (unsigned int)camp_group_info;
                __asan_report_load4();
              }
              camp_level_config_ptr = ActivityChannellerSlabExcelConfigMgr::findLevelConfigByStageRoundCampIndex(
                                        (const ActivityChannellerSlabExcelConfigMgr *const)v87._M_len,
                                        camp_group_info->stage_id,
                                        v49,
                                        v48);
              if ( camp_level_config_ptr )
              {
                ServiceBox::findService<GameserverService>();
                GameserverService::getConfig((GameserverService *const)(v2 + 128));
                p_lua_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128))->design_config.lua_config_mgr;
                if ( *(_BYTE *)(((unsigned __int64)&camp_level_config_ptr->group_id >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)camp_level_config_ptr + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&camp_level_config_ptr->group_id >> 3)
                                                                                       + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                *(_DWORD *)(v2 + 80) = LuaConfigMgr::getSceneIdByGroupId(
                                         p_lua_config_mgr,
                                         camp_level_config_ptr->group_id);
                std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 128));
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                v56 = (unsigned int)Player::getSceneComp(this->player_);
                PlayerSceneComp::getPersonalScene((PlayerSceneComp *const)(v2 + 128), v56);
                if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 128)) )
                {
                  common::milog::MiLogStream::create(
                    &v95,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/activity/channeller_slab_activity.cpp",
                    "onTakeGeneralRewardEvent",
                    721);
                  v57 = common::milog::MiLogStream::operator<<<ChannellerSlabActivity,(ChannellerSlabActivity*)0>(
                          &v95,
                          this);
                  v58 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v57, (const char (*)[8])" scene:");
                  v59 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v58,
                          (const unsigned int *)(v2 + 80));
                  v60 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                          v59,
                          (const char (*)[20])" nullptr for group:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v60,
                    &camp_level_config_ptr->group_id);
                  common::milog::MiLogStream::~MiLogStream(&v95);
                }
                else
                {
                  v61 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
                  v84 = Scene::getBlockGroupComp(v61);
                  if ( *(_BYTE *)(((unsigned __int64)v84 >> 3) + 0x7FFF8000) )
                    __asan_report_load8();
                  v62 = (unsigned __int64)(v84->_vptr_SceneCompBase + 12);
                  if ( *(_BYTE *)((v62 >> 3) + 0x7FFF8000) )
                    v62 = __asan_report_load8();
                  __l = *(unsigned int (__fastcall **)(SceneBlockGroupComp *, std::vector<unsigned int> *, _QWORD, _QWORD))v62;
                  if ( *(_BYTE *)(((unsigned __int64)&camp_level_config_ptr->group_id >> 3) + 0x7FFF8000) != 0
                    && (char)((((_BYTE)camp_level_config_ptr + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&camp_level_config_ptr->group_id >> 3)
                                                                                         + 0x7FFF8000) )
                  {
                    __asan_report_load4();
                  }
                  LODWORD(v87._M_array) = camp_level_config_ptr->group_id;
                  std::allocator<unsigned int>::allocator(&__a);
                  std::vector<unsigned int>::vector(
                    &v94,
                    (std::initializer_list<unsigned int>)__PAIR128__(1LL, &v87),
                    &__a);
                  v63 = __l(v84, &v94, 0LL, 0LL) != 0;
                  std::vector<unsigned int>::~vector(&v94);
                  std::allocator<unsigned int>::~allocator(&__a);
                  if ( v63 )
                  {
                    common::milog::MiLogStream::create(
                      &v95,
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/player/activity/channeller_slab_activity.cpp",
                      "onTakeGeneralRewardEvent",
                      727);
                    v64 = common::milog::MiLogStream::operator<<<ChannellerSlabActivity,(ChannellerSlabActivity*)0>(
                            &v95,
                            this);
                    v65 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                            v64,
                            (const char (*)[17])" register group:");
                    v66 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                            v65,
                            &camp_level_config_ptr->group_id);
                    v67 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            v66,
                            (const char (*)[16])" failed. stage:");
                  }
                  else
                  {
                    common::milog::MiLogStream::create(
                      &v95,
                      &common::milog::MiLogDefault::default_log_obj_,
                      1u,
                      "./src/player/activity/channeller_slab_activity.cpp",
                      "onTakeGeneralRewardEvent",
                      730);
                    v72 = common::milog::MiLogStream::operator<<<ChannellerSlabActivity,(ChannellerSlabActivity*)0>(
                            &v95,
                            this);
                    v73 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                            v72,
                            (const char (*)[17])" register group:");
                    v74 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                            v73,
                            &camp_level_config_ptr->group_id);
                    v67 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                            v74,
                            (const char (*)[14])" done. stage:");
                  }
                  v68 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v67,
                          &camp_group_info->stage_id);
                  v69 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v68, (const char (*)[8])" round:");
                  v70 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v69,
                          &camp_group_info->round_id);
                  v71 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
                  common::milog::MiLogStream::operator<<<Scene,(Scene*)0>(v70, v71);
                  common::milog::MiLogStream::~MiLogStream(&v95);
                }
                std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 128));
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v95,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/player/activity/channeller_slab_activity.cpp",
                  "onTakeGeneralRewardEvent",
                  713);
                v50 = common::milog::MiLogStream::operator<<<ChannellerSlabActivity,(ChannellerSlabActivity*)0>(
                        &v95,
                        this);
                v51 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v50, (const char (*)[8])" stage:");
                v52 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v51,
                        &camp_group_info->stage_id);
                v53 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v52, (const char (*)[8])" round:");
                v54 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v53,
                        &camp_group_info->round_id);
                common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                  v54,
                  (const char (*)[17])" all camps done.");
                common::milog::MiLogStream::~MiLogStream(&v95);
              }
            }
            std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 96));
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v95,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/channeller_slab_activity.cpp",
            "onTakeGeneralRewardEvent",
            663);
          v6 = common::milog::MiLogStream::operator<<<ChannellerSlabActivity,(ChannellerSlabActivity*)0>(&v95, this);
          common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
            v6,
            (const char (*)[25])" preivew config nullptr.");
          common::milog::MiLogStream::~MiLogStream(&v95);
        }
      }
    }
  }
  if ( v96 == (char *)v2 )
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

// Line 734: range 0000000014F2BBBA-0000000014F2C2EF
void __cdecl ChannellerSlabActivity::onPostEnterSceneEvent(
        ChannellerSlabActivity *const this,
        const PostEnterSceneEvent *event)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  ChannellerSlabActivity::LoopDungeonContext *v10; // rax
  std::pair<std::__detail::_Node_iterator<unsigned int,true,false>,bool> v11; // rax
  DungeonScene *v12; // rax
  PlayerAbilityGroupComp *AbilityGroupComp; // rax
  PlayerAbilityGroupComp *v14; // rax
  unsigned int val; // [rsp+1Ch] [rbp-314h] BYREF
  common::milog::MiLogStream v16; // [rsp+20h] [rbp-310h] BYREF
  char v17[752]; // [rsp+40h] [rbp-2F0h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(704LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 16 17 cur_scene_ptr:735 80 16 21 dungeon_scene_ptr:741 112 80 10 notify:770 224 168 19 dung"
                        "eon_context:759 464 176 12 data_opt:752";
  *(_QWORD *)(v2 + 16) = ChannellerSlabActivity::onPostEnterSceneEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = 62194;
  v4[536862723] = 62194;
  v4[536862726] = -218959118;
  v4[536862732] = -218959360;
  v4[536862733] = -218959118;
  v4[536862734] = 62194;
  v4[536862740] = -202116109;
  v4[536862741] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 48));
  if ( !std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 48)) )
  {
    std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
    toPtr<DungeonScene,Scene>((Scene *)(v2 + 80));
    if ( !std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v2 + 80)) )
    {
      v5 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
      if ( DungeonScene::getDungeonType(v5) == DUNGEON_CHANNELLER_SLAB_LOOP )
      {
        common::milog::MiLogStream::create(
          &v16,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/channeller_slab_activity.cpp",
          "onPostEnterSceneEvent",
          750);
        v6 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
               &v16,
               (const char (*)[60])"[CHANNELLER_SLAB] loop dungeon onPostEnterSceneEvent, uid: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
        v8 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v7, (const char (*)[13])" ,scene_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &event->dst_scene_id);
        common::milog::MiLogStream::~MiLogStream(&v16);
        v9 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
        DungeonScene::getDungeonExtraData<ChannellerSlabActivity::LoopDungeonContext>(
          (std::optional<ChannellerSlabActivity::LoopDungeonContext> *)(v2 + 464),
          v9);
        if ( !std::optional<ChannellerSlabActivity::LoopDungeonContext>::has_value((const std::optional<ChannellerSlabActivity::LoopDungeonContext> *const)(v2 + 464)) )
        {
          common::milog::MiLogStream::create(
            &v16,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/channeller_slab_activity.cpp",
            "onPostEnterSceneEvent",
            755);
          common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
            &v16,
            (const char (*)[45])"[CHANNELLER_SLAB] LoopDungeonContext invalid");
          common::milog::MiLogStream::~MiLogStream(&v16);
        }
        else
        {
          v10 = std::optional<ChannellerSlabActivity::LoopDungeonContext>::value((std::optional<ChannellerSlabActivity::LoopDungeonContext> *const)(v2 + 464));
          ChannellerSlabActivity::LoopDungeonContext::LoopDungeonContext(
            (ChannellerSlabActivity::LoopDungeonContext *const)(v2 + 224),
            v10);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          v11 = std::unordered_set<unsigned int>::emplace<unsigned int>(
                  (std::unordered_set<unsigned int> *const)(v2 + 336),
                  &val,
                  (unsigned int *)(v2 + 336));
          if ( v11.second )
          {
            v12 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
            DungeonScene::setDungeonExtraData<ChannellerSlabActivity::LoopDungeonContext>(
              v12,
              (const ChannellerSlabActivity::LoopDungeonContext *)(v2 + 224));
            if ( !std::vector<std::string>::empty((const std::vector<std::string> *const)(v2 + 312)) )
            {
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              AbilityGroupComp = Player::getAbilityGroupComp(this->player_);
              PlayerAbilityGroupComp::addNoneFilterAbilityGroup(
                AbilityGroupComp,
                (const std::vector<std::string> *)(v2 + 312),
                0);
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              v14 = Player::getAbilityGroupComp(this->player_);
              PlayerAbilityGroupComp::tryRefreshAbilityGroup(v14);
            }
          }
          proto::ChannellerSlabLoopDungeonChallengeInfoNotify::ChannellerSlabLoopDungeonChallengeInfoNotify((proto::ChannellerSlabLoopDungeonChallengeInfoNotify *const)(v2 + 112));
          ChannellerSlabActivity::fillLoopDungeonChallengeInfoNotify(
            this,
            (proto::ChannellerSlabLoopDungeonChallengeInfoNotify *)(v2 + 112),
            *(_DWORD *)(v2 + 224),
            *(_DWORD *)(v2 + 228),
            (const std::vector<unsigned int> *)(v2 + 232),
            (const std::unordered_set<unsigned int> *)(v2 + 256));
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 112));
          proto::ChannellerSlabLoopDungeonChallengeInfoNotify::~ChannellerSlabLoopDungeonChallengeInfoNotify((proto::ChannellerSlabLoopDungeonChallengeInfoNotify *const)(v2 + 112));
          ChannellerSlabActivity::LoopDungeonContext::~LoopDungeonContext((ChannellerSlabActivity::LoopDungeonContext *const)(v2 + 224));
        }
        std::optional<ChannellerSlabActivity::LoopDungeonContext>::~optional((std::optional<ChannellerSlabActivity::LoopDungeonContext> *const)(v2 + 464));
      }
    }
    std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 80));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 48));
  if ( v17 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = 0;
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

// Line 777: range 0000000014F2C2F0-0000000014F2C833
void __cdecl ChannellerSlabActivity::onLeaveSceneEvent(
        ChannellerSlabActivity *const this,
        const LeaveSceneEvent *event)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  PlayerAbilityGroupComp *AbilityGroupComp; // rax
  PlayerAbilityGroupComp *v11; // rax
  unsigned int val; // [rsp+14h] [rbp-1BCh] BYREF
  const ChannellerSlabActivity::LoopDungeonContext *dungeon_context; // [rsp+18h] [rbp-1B8h]
  common::milog::MiLogStream v14; // [rsp+20h] [rbp-1B0h] BYREF
  char v15[400]; // [rsp+40h] [rbp-190h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 16 17 cur_scene_ptr:778 80 16 21 dungeon_scene_ptr:784 112 176 12 data_opt:795";
  *(_QWORD *)(v2 + 16) = ChannellerSlabActivity::onLeaveSceneEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = 62194;
  v4[536862723] = 62194;
  v4[536862729] = -202116109;
  v4[536862730] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 48));
  if ( !std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 48)) )
  {
    std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
    toPtr<DungeonScene,Scene>((Scene *)(v2 + 80));
    if ( !std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v2 + 80)) )
    {
      v5 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
      if ( DungeonScene::getDungeonType(v5) == DUNGEON_CHANNELLER_SLAB_LOOP )
      {
        common::milog::MiLogStream::create(
          &v14,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/channeller_slab_activity.cpp",
          "onLeaveSceneEvent",
          793);
        v6 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
               &v14,
               (const char (*)[56])"[CHANNELLER_SLAB] loop dungeon onLeaveSceneEvent, uid: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
        v8 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v7, (const char (*)[13])" ,scene_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &event->scene_id);
        common::milog::MiLogStream::~MiLogStream(&v14);
        v9 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
        DungeonScene::getDungeonExtraData<ChannellerSlabActivity::LoopDungeonContext>(
          (std::optional<ChannellerSlabActivity::LoopDungeonContext> *)(v2 + 112),
          v9);
        if ( !std::optional<ChannellerSlabActivity::LoopDungeonContext>::has_value((const std::optional<ChannellerSlabActivity::LoopDungeonContext> *const)(v2 + 112)) )
        {
          common::milog::MiLogStream::create(
            &v14,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/channeller_slab_activity.cpp",
            "onLeaveSceneEvent",
            798);
          common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
            &v14,
            (const char (*)[45])"[CHANNELLER_SLAB] LoopDungeonContext invalid");
          common::milog::MiLogStream::~MiLogStream(&v14);
        }
        else
        {
          dungeon_context = std::optional<ChannellerSlabActivity::LoopDungeonContext>::value((std::optional<ChannellerSlabActivity::LoopDungeonContext> *const)(v2 + 112));
          if ( !std::vector<std::string>::empty(&dungeon_context->scheme_ability_group_vec) )
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            AbilityGroupComp = Player::getAbilityGroupComp(this->player_);
            PlayerAbilityGroupComp::delNoneFilterAbilityGroup(
              AbilityGroupComp,
              &dungeon_context->scheme_ability_group_vec);
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v11 = Player::getAbilityGroupComp(this->player_);
            PlayerAbilityGroupComp::tryRefreshAbilityGroup(v11);
          }
        }
        std::optional<ChannellerSlabActivity::LoopDungeonContext>::~optional((std::optional<ChannellerSlabActivity::LoopDungeonContext> *const)(v2 + 112));
      }
    }
    std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 80));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 48));
  if ( v15 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8024) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = -168430091;
  }
};

// Line 811: range 0000000014F2C834-0000000014F2C9CA
void __cdecl ChannellerSlabActivity::sendStageActiveChallengeIndexNotify(
        ChannellerSlabActivity *const this,
        uint32_t stage_id,
        uint32_t challenge_index,
        uint32_t active_camp_index)
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
  *(_QWORD *)(v4 + 8) = "1 32 32 10 notify:812";
  *(_QWORD *)(v4 + 16) = ChannellerSlabActivity::sendStageActiveChallengeIndexNotify;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450888) = -202116109;
  proto::ChannelerSlabStageActiveChallengeIndexNotify::ChannelerSlabStageActiveChallengeIndexNotify((proto::ChannelerSlabStageActiveChallengeIndexNotify *const)(v4 + 32));
  proto::ChannelerSlabStageActiveChallengeIndexNotify::set_stage_id(
    (proto::ChannelerSlabStageActiveChallengeIndexNotify *const)(v4 + 32),
    stage_id);
  proto::ChannelerSlabStageActiveChallengeIndexNotify::set_challenge_index(
    (proto::ChannelerSlabStageActiveChallengeIndexNotify *const)(v4 + 32),
    challenge_index);
  proto::ChannelerSlabStageActiveChallengeIndexNotify::set_active_camp_index(
    (proto::ChannelerSlabStageActiveChallengeIndexNotify *const)(v4 + 32),
    active_camp_index);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v4 + 32));
  proto::ChannelerSlabStageActiveChallengeIndexNotify::~ChannelerSlabStageActiveChallengeIndexNotify((proto::ChannelerSlabStageActiveChallengeIndexNotify *const)(v4 + 32));
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

// Line 820: range 0000000014F2C9CC-0000000014F2CBD2
__int64 __fastcall ChannellerSlabActivity::addBuff(ChannellerSlabActivity *const this, uint32_t buff_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::pair<std::__detail::_Node_iterator<unsigned int,true,false>,bool> v5; // rax
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  __int64 result; // rax
  unsigned int val; // [rsp+1Ch] [rbp-94h] BYREF
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-90h] BYREF
  char v12[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 11 buff_id:819";
  *(_QWORD *)(v2 + 16) = ChannellerSlabActivity::addBuff;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = buff_id;
  v5 = std::unordered_set<unsigned int>::emplace<unsigned int &>(
         &this->bin_data_.buff_data.buff_id_set,
         (unsigned int *)(v2 + 32),
         (unsigned int *)&this->bin_data_.buff_data);
  if ( !v5.second )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/channeller_slab_activity.cpp",
      "addBuff",
      823);
    v6 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
           &v11,
           (const char (*)[60])"[CHANNELLER_SLAB] addBuff failed, buff already exist, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    v8 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v7, (const char (*)[12])" ,buff_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v11);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    BaseActivity::notifyClientData(this, 0);
    result = 0LL;
  }
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

// Line 832: range 0000000014F2CBD4-0000000014F2CE59
int32_t __cdecl ChannellerSlabActivity::checkEnterLoopDungeon(ChannellerSlabActivity *const this, uint32_t dungeon_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t result; // eax
  common::milog::MiLogStream *v6; // rax
  const ActivityChannellerSlabExcelConfigMgr *config_mgr; // [rsp+18h] [rbp-98h]
  std::map<unsigned int,ChannellerSlabActivity::LoopDungeonData>::mapped_type *loop_dungeon_data; // [rsp+28h] [rbp-88h]
  common::milog::MiLogStream v9; // [rsp+30h] [rbp-80h] BYREF
  char v10[96]; // [rsp+50h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 17 dungeon_index:842";
  *(_QWORD *)(v2 + 16) = ChannellerSlabActivity::checkEnterLoopDungeon;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(char *)(((unsigned __int64)&this->bin_data_.loop_dungeon_stage_data.is_open >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->bin_data_.loop_dungeon_stage_data.is_open);
  if ( !this->bin_data_.loop_dungeon_stage_data.is_open )
  {
    result = 9130;
    goto LABEL_16;
  }
  if ( !dungeon_id )
    goto LABEL_15;
  config_mgr = ChannellerSlabActivity::getConfigMgr(this);
  *(_DWORD *)(v2 + 32) = ActivityChannellerSlabExcelConfigMgr::findLoopDungeonIndexByDungeonId(config_mgr, dungeon_id);
  if ( !data::ActivityChannellerSlabExcelConfigMgrBase::findChannellerSlabLoopDungeonExcelConfig(
          config_mgr,
          *(_DWORD *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/channeller_slab_activity.cpp",
      "checkEnterLoopDungeon",
      846);
    v6 = common::milog::MiLogStream::operator<<<char [83],(char *[83])0>(
           &v9,
           (const char (*)[83])"[CHANNELLER_SLAB] findChannellerSlabLoopDungeonExcelConfig failed, dungeon_index: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v9);
    result = -1;
    goto LABEL_16;
  }
  loop_dungeon_data = std::map<unsigned int,ChannellerSlabActivity::LoopDungeonData>::operator[](
                        &this->bin_data_.loop_dungeon_stage_data.dungeon_data_map,
                        (const std::map<unsigned int,ChannellerSlabActivity::LoopDungeonData>::key_type *)(v2 + 32));
  if ( *(char *)(((unsigned __int64)&loop_dungeon_data->is_open >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&loop_dungeon_data->is_open);
  if ( !loop_dungeon_data->is_open )
    result = 9131;
  else
LABEL_15:
    result = 0;
LABEL_16:
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

// Line 861: range 0000000014F2CE5A-0000000014F2CF48
uint32_t __cdecl ChannellerSlabActivity::getLoopDungeonTotalScore(const ChannellerSlabActivity *const this)
{
  uint32_t total_score; // [rsp+14h] [rbp-3Ch]
  std::map<unsigned int,ChannellerSlabActivity::LoopDungeonData>::const_iterator __for_begin; // [rsp+18h] [rbp-38h] BYREF
  std::map<unsigned int,ChannellerSlabActivity::LoopDungeonData>::const_iterator __for_end; // [rsp+20h] [rbp-30h] BYREF
  const ChannellerSlabActivity::LoopDungeonStageData *loop_dungeon_stage_data; // [rsp+28h] [rbp-28h]
  const std::map<unsigned int,ChannellerSlabActivity::LoopDungeonData> *__for_range; // [rsp+30h] [rbp-20h]
  const std::pair<unsigned int const,ChannellerSlabActivity::LoopDungeonData> *v7; // [rsp+38h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,ChannellerSlabActivity::LoopDungeonData> >::type *_; // [rsp+40h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,ChannellerSlabActivity::LoopDungeonData> >::type *loop_dungeon_data; // [rsp+48h] [rbp-8h]

  total_score = 0;
  loop_dungeon_stage_data = &this->bin_data_.loop_dungeon_stage_data;
  __for_range = &this->bin_data_.loop_dungeon_stage_data.dungeon_data_map;
  __for_begin._M_node = std::map<unsigned int,ChannellerSlabActivity::LoopDungeonData>::begin(&this->bin_data_.loop_dungeon_stage_data.dungeon_data_map)._M_node;
  __for_end._M_node = std::map<unsigned int,ChannellerSlabActivity::LoopDungeonData>::end(&this->bin_data_.loop_dungeon_stage_data.dungeon_data_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v7 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,ChannellerSlabActivity::LoopDungeonData>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,ChannellerSlabActivity::LoopDungeonData>(v7);
    loop_dungeon_data = (std::tuple_element<1,const std::pair<unsigned int const,ChannellerSlabActivity::LoopDungeonData> >::type *)std::get<1ul,unsigned int const,ChannellerSlabActivity::LoopDungeonData>(v7);
    if ( *(_BYTE *)(((unsigned __int64)&loop_dungeon_data->score >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)loop_dungeon_data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&loop_dungeon_data->score >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    total_score += loop_dungeon_data->score;
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,ChannellerSlabActivity::LoopDungeonData>>::operator++(&__for_begin);
  }
  return total_score;
};

// Line 872: range 0000000014F2CF4A-0000000014F2D252
void __cdecl ChannellerSlabActivity::onSettleLoopDungeon(
        ChannellerSlabActivity *const this,
        DungeonScene *dungeon_scene,
        proto::ChannellerSlabLoopDungeonResultInfo *result_info)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // rbx
  common::milog::MiLogStream *v6; // rdx
  ChannellerSlabActivity::LoopDungeonContext *dungeon_context; // [rsp+28h] [rbp-178h]
  common::milog::MiLogStream v9; // [rsp+30h] [rbp-170h] BYREF
  char v10[336]; // [rsp+50h] [rbp-150h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 48 176 12 data_opt:879";
  *(_QWORD *)(v3 + 16) = ChannellerSlabActivity::onSettleLoopDungeon;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862727] = -202116109;
  v5[536862728] = -202116109;
  if ( DungeonScene::getDungeonResult(dungeon_scene) == DUNGEON_RESULT_CANCEL )
  {
    DungeonScene::getDungeonExtraData<ChannellerSlabActivity::LoopDungeonContext>(
      (std::optional<ChannellerSlabActivity::LoopDungeonContext> *)(v3 + 48),
      dungeon_scene);
    if ( !std::optional<ChannellerSlabActivity::LoopDungeonContext>::has_value((const std::optional<ChannellerSlabActivity::LoopDungeonContext> *const)(v3 + 48)) )
    {
      common::milog::MiLogStream::create(
        &v9,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/channeller_slab_activity.cpp",
        "onSettleLoopDungeon",
        882);
      common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
        &v9,
        (const char (*)[45])"[CHANNELLER_SLAB] LoopDungeonContext invalid");
      common::milog::MiLogStream::~MiLogStream(&v9);
    }
    else
    {
      dungeon_context = std::optional<ChannellerSlabActivity::LoopDungeonContext>::value((std::optional<ChannellerSlabActivity::LoopDungeonContext> *const)(v3 + 48));
      if ( *(_BYTE *)(((unsigned __int64)dungeon_context >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)dungeon_context >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      proto::ChannellerSlabLoopDungeonResultInfo::set_dungeon_index(result_info, dungeon_context->dungeon_index);
      proto::ChannellerSlabLoopDungeonResultInfo::set_is_success(result_info, 0);
      common::milog::MiLogStream::create(
        &v9,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/channeller_slab_activity.cpp",
        "onSettleLoopDungeon",
        891);
      v6 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
             &v9,
             (const char (*)[55])"[CHANNELLER_SLAB] onSettleLoopDungeon, dungeon_index: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &dungeon_context->dungeon_index);
      common::milog::MiLogStream::~MiLogStream(&v9);
    }
    std::optional<ChannellerSlabActivity::LoopDungeonContext>::~optional((std::optional<ChannellerSlabActivity::LoopDungeonContext> *const)(v3 + 48));
  }
  if ( v10 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF801C) = 0LL;
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
};

// Line 896: range 0000000014F2D376-0000000014F2E561
void __cdecl ChannellerSlabActivity::onSettleLoopDungeonChallenge(
        ChannellerSlabActivity *const this,
        DungeonScene *dungeon_scene,
        Challenge *challenge,
        proto::ChannellerSlabLoopDungeonResultInfo *result_info)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  uint32_t difficulty_id; // edx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  int v11; // ecx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rcx
  PlayerBasicComp *BasicComp; // rax
  Group *v20; // r14
  const unsigned int *M_current; // r15
  std::vector<unsigned int>::const_iterator v22; // rax
  uint32_t v23; // edx
  PlayerEventComp *EventComp; // r14
  std::__shared_ptr_access<proto_log::PlayerLogBodyChannellerSlabLoopDungeonChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // r14
  const std::string *v26; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyChannellerSlabLoopDungeonChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // r14
  uint32_t DungeonId; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyChannellerSlabLoopDungeonChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyChannellerSlabLoopDungeonChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyChannellerSlabLoopDungeonChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyChannellerSlabLoopDungeonChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyChannellerSlabLoopDungeonChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // r14
  uint32_t TotalBuffEnergy; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyChannellerSlabLoopDungeonChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v35; // r14
  uint32_t TotalBuffEnergyCost; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyChannellerSlabLoopDungeonChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rax
  google::protobuf::RepeatedField<unsigned int> *v38; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyChannellerSlabLoopDungeonChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v39; // rax
  google::protobuf::RepeatedField<unsigned int> *v40; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyChannellerSlabLoopDungeonChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v41; // r14
  const std::vector<unsigned int> *p_condition_id_vec; // rdi
  uint32_t v43; // edx
  google::protobuf::uint32 LoopDungeonChallengeScore; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyChannellerSlabLoopDungeonChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v45; // rax
  PlayerAvatarComp *AvatarComp; // r14
  uint32_t v47; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyChannellerSlabLoopDungeonChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v48; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyChannellerSlabLoopDungeonChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v49; // rcx
  Player *player; // r14
  std::string v51; // [rsp+0h] [rbp-280h]
  std::vector<unsigned int> *__result; // [rsp+8h] [rbp-278h]
  std::allocator<char> __a; // [rsp+31h] [rbp-24Fh] BYREF
  bool is_in_limit_time; // [rsp+32h] [rbp-24Eh]
  bool is_mp; // [rsp+33h] [rbp-24Dh]
  uint32_t real_challenge_score; // [rsp+34h] [rbp-24Ch]
  uint32_t now; // [rsp+38h] [rbp-248h]
  uint32_t cost_time; // [rsp+3Ch] [rbp-244h]
  const ActivityChannellerSlabExcelConfigMgr *config_mgr; // [rsp+40h] [rbp-240h]
  const ChannellerSlabActivity::LoopDungeonContext *dungeon_context; // [rsp+48h] [rbp-238h]
  const data::ChannellerSlabLoopDungeonDifficultyExcelConfig *difficulty_config_ptr; // [rsp+50h] [rbp-230h]
  ChannellerSlabActivity::LoopDungeonData *loop_dungeon_data; // [rsp+58h] [rbp-228h]
  std::shared_ptr<ChannellerSlabLoopDungeonScoreEvent> __r; // [rsp+60h] [rbp-220h] BYREF
  common::milog::MiLogStream v65; // [rsp+70h] [rbp-210h] BYREF
  char v66[496]; // [rsp+90h] [rbp-1F0h] BYREF

  *(&v51._anon_0._M_allocated_capacity + 1) = (std::string::size_type)challenge;
  v51._anon_0._M_allocated_capacity = (std::string::size_type)result_info;
  v4 = (unsigned __int64)v66;
  v51._M_dataplus._M_p = v66;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(448LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "6 48 1 10 holder:925 64 4 23 in_limit_time_value:935 80 16 11 log_ptr:985 112 16 13 event_ptr:97"
                        "6 144 24 20 condition_id_vec:932 208 176 12 data_opt:897";
  *(_QWORD *)(v4 + 16) = ChannellerSlabActivity::onSettleLoopDungeonChallenge;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = 61956;
  v6[536862723] = 62194;
  v6[536862724] = 62194;
  v6[536862725] = -218959360;
  v6[536862726] = 62194;
  v6[536862732] = -202116109;
  v6[536862733] = -202116109;
  DungeonScene::getDungeonExtraData<ChannellerSlabActivity::LoopDungeonContext>(
    (std::optional<ChannellerSlabActivity::LoopDungeonContext> *)(v4 + 208),
    dungeon_scene);
  if ( !std::optional<ChannellerSlabActivity::LoopDungeonContext>::has_value((const std::optional<ChannellerSlabActivity::LoopDungeonContext> *const)(v4 + 208)) )
  {
    common::milog::MiLogStream::create(
      &v65,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/channeller_slab_activity.cpp",
      "onSettleLoopDungeonChallenge",
      900);
    common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
      &v65,
      (const char (*)[45])"[CHANNELLER_SLAB] LoopDungeonContext invalid");
    common::milog::MiLogStream::~MiLogStream(&v65);
  }
  else
  {
    config_mgr = ChannellerSlabActivity::getConfigMgr(this);
    dungeon_context = std::optional<ChannellerSlabActivity::LoopDungeonContext>::value((std::optional<ChannellerSlabActivity::LoopDungeonContext> *const)(v4 + 208));
    if ( *(_BYTE *)(((unsigned __int64)&dungeon_context->difficulty_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)dungeon_context + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_context->difficulty_id >> 3)
                                                                    + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    difficulty_id = dungeon_context->difficulty_id;
    if ( *(_BYTE *)(((unsigned __int64)dungeon_context >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)dungeon_context >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    difficulty_config_ptr = ActivityChannellerSlabExcelConfigMgr::findLoopDungeonDifficultyConfig(
                              config_mgr,
                              dungeon_context->dungeon_index,
                              difficulty_id);
    if ( difficulty_config_ptr )
    {
      if ( *(_BYTE *)(((*(&v51._anon_0._M_allocated_capacity + 1) + 28) >> 3) + 0x7FFF8000) != 0
        && (char)(((v51._anon_0._M_local_buf[8] + 28) & 7) + 3) >= *(_BYTE *)(((*(&v51._anon_0._M_allocated_capacity + 1)
                                                                              + 28) >> 3)
                                                                            + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v11 = *(_DWORD *)(*(&v51._anon_0._M_allocated_capacity + 1) + 28);
      if ( *(_BYTE *)(((unsigned __int64)&difficulty_config_ptr->finish_challenge_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)difficulty_config_ptr + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&difficulty_config_ptr->finish_challenge_id >> 3)
                                                                             + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( v11 == difficulty_config_ptr->finish_challenge_id )
      {
        common::milog::MiLogStream::create(
          &v65,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/channeller_slab_activity.cpp",
          "onSettleLoopDungeonChallenge",
          920);
        v12 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
                &v65,
                (const char (*)[64])"[CHANNELLER_SLAB] onSettleLoopDungeonChallenge, dungeon_index: ");
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v12,
                &dungeon_context->dungeon_index);
        v14 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                v13,
                (const char (*)[17])" ,challenge_id: ");
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v14,
                (const unsigned int *)(*(&v51._anon_0._M_allocated_capacity + 1) + 32));
        v16 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                v15,
                (const char (*)[20])" ,challenge_index: ");
        v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v16,
                (const unsigned int *)(*(&v51._anon_0._M_allocated_capacity + 1) + 28));
        v18 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v17, (const char (*)[12])" ,is_succ: ");
        if ( *(_BYTE *)(((*(&v51._anon_0._M_allocated_capacity + 1) + 41) >> 3) + 0x7FFF8000) != 0
          && ((v51._anon_0._M_local_buf[8] + 41) & 7) >= *(_BYTE *)(((*(&v51._anon_0._M_allocated_capacity + 1) + 41) >> 3)
                                                                  + 0x7FFF8000) )
        {
          __asan_report_load1(*(&v51._anon_0._M_allocated_capacity + 1) + 41);
        }
        common::milog::MiLogStream::operator<<(v18, *(_BYTE *)(*(&v51._anon_0._M_allocated_capacity + 1) + 41));
        common::milog::MiLogStream::~MiLogStream(&v65);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        BasicComp = Player::getBasicComp(this->player_);
        PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v65, BasicComp);
        StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 48), 0xD7Cu, v51);
        std::string::~string(&v65);
        if ( *(_BYTE *)(((unsigned __int64)dungeon_context >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)dungeon_context >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        proto::ChannellerSlabLoopDungeonResultInfo::set_dungeon_index(
          (proto::ChannellerSlabLoopDungeonResultInfo *const)v51._anon_0._M_allocated_capacity,
          dungeon_context->dungeon_index);
        if ( *(_BYTE *)(((*(&v51._anon_0._M_allocated_capacity + 1) + 41) >> 3) + 0x7FFF8000) != 0
          && ((v51._anon_0._M_local_buf[8] + 41) & 7) >= *(_BYTE *)(((*(&v51._anon_0._M_allocated_capacity + 1) + 41) >> 3)
                                                                  + 0x7FFF8000) )
        {
          __asan_report_load1(*(&v51._anon_0._M_allocated_capacity + 1) + 41);
        }
        proto::ChannellerSlabLoopDungeonResultInfo::set_is_success(
          (proto::ChannellerSlabLoopDungeonResultInfo *const)v51._anon_0._M_allocated_capacity,
          *(_BYTE *)(*(&v51._anon_0._M_allocated_capacity + 1) + 41));
        real_challenge_score = 0;
        if ( *(_BYTE *)(((*(&v51._anon_0._M_allocated_capacity + 1) + 41) >> 3) + 0x7FFF8000) != 0
          && ((v51._anon_0._M_local_buf[8] + 41) & 7) >= *(_BYTE *)(((*(&v51._anon_0._M_allocated_capacity + 1) + 41) >> 3)
                                                                  + 0x7FFF8000) )
        {
          __asan_report_load1(*(&v51._anon_0._M_allocated_capacity + 1) + 41);
        }
        if ( *(_BYTE *)(*(&v51._anon_0._M_allocated_capacity + 1) + 41) )
        {
          is_in_limit_time = 1;
          std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v4 + 144));
          if ( ChannellerSlabActivity::isLoopDungeonConditionTypeSelected(
                 this,
                 &dungeon_context->condition_id_vec,
                 CHANNELLER_SLAB_CONDITION_LIMIT) )
          {
            *(_DWORD *)(v4 + 64) = 0;
            if ( *(_BYTE *)(((*(&v51._anon_0._M_allocated_capacity + 1) + 16) >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v20 = *(Group **)(*(&v51._anon_0._M_allocated_capacity + 1) + 16);
            std::allocator<char>::allocator(&__a);
            std::string::basic_string<std::allocator<char>>((std::string *const)&v65, "IS_IN_LIMIT_TIME", &__a);
            Group::getVariableValue(v20, (const std::string *)&v65, (int32_t *)(v4 + 64));
            std::string::~string(&v65);
            std::allocator<char>::~allocator(&__a);
            if ( *(int *)(v4 + 64) <= 0 )
            {
              is_in_limit_time = 0;
              __result = std::back_inserter<std::vector<unsigned int>>((std::vector<unsigned int> *)(v4 + 144)).container;
              M_current = std::vector<unsigned int>::end(&dungeon_context->condition_id_vec)._M_current;
              v22._M_current = std::vector<unsigned int>::begin(&dungeon_context->condition_id_vec)._M_current;
              std::copy_if<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,std::back_insert_iterator<std::vector<unsigned int>>,ChannellerSlabActivity::onSettleLoopDungeonChallenge(DungeonScene &,Challenge &,proto::ChannellerSlabLoopDungeonResultInfo &)::{lambda(unsigned int)#1}>(
                v22,
                (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current,
                (std::back_insert_iterator<std::vector<unsigned int> >)__result,
                (ChannellerSlabActivity::onSettleLoopDungeonChallenge::<lambda(uint32_t)>)this);
            }
            else
            {
              std::vector<unsigned int>::operator=(
                (std::vector<unsigned int> *const)(v4 + 144),
                &dungeon_context->condition_id_vec);
            }
          }
          else
          {
            std::vector<unsigned int>::operator=(
              (std::vector<unsigned int> *const)(v4 + 144),
              &dungeon_context->condition_id_vec);
          }
          if ( *(_BYTE *)(((unsigned __int64)&dungeon_context->difficulty_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)dungeon_context + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_context->difficulty_id >> 3)
                                                                          + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          v23 = dungeon_context->difficulty_id;
          if ( *(_BYTE *)(((unsigned __int64)dungeon_context >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)dungeon_context >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          real_challenge_score = ChannellerSlabActivity::getLoopDungeonChallengeScore(
                                   this,
                                   dungeon_context->dungeon_index,
                                   v23,
                                   (const std::vector<unsigned int> *)(v4 + 144));
          loop_dungeon_data = std::map<unsigned int,ChannellerSlabActivity::LoopDungeonData>::operator[](
                                &this->bin_data_.loop_dungeon_stage_data.dungeon_data_map,
                                &dungeon_context->dungeon_index);
          if ( *(_BYTE *)(((unsigned __int64)&loop_dungeon_data->score >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)loop_dungeon_data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&loop_dungeon_data->score >> 3)
                                                                            + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          if ( real_challenge_score > loop_dungeon_data->score )
          {
            loop_dungeon_data->score = real_challenge_score;
            common::tools::perf::make_shared<ChannellerSlabLoopDungeonScoreEvent,unsigned int &,unsigned int &>(
              (unsigned int *)&__r,
              &this->schedule_id_,
              &this->activity_id_,
              &this->schedule_id_);
            std::shared_ptr<BaseEvent>::shared_ptr<ChannellerSlabLoopDungeonScoreEvent,void>(
              (std::shared_ptr<BaseEvent> *const)(v4 + 112),
              &__r);
            std::shared_ptr<ChannellerSlabLoopDungeonScoreEvent>::~shared_ptr(&__r);
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            EventComp = Player::getEventComp(this->player_);
            std::shared_ptr<BaseEvent>::shared_ptr(
              (std::shared_ptr<BaseEvent> *const)&__r,
              (const std::shared_ptr<BaseEvent> *)(v4 + 112));
            PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&__r);
            std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&__r);
            std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v4 + 112));
          }
          proto::ChannellerSlabLoopDungeonResultInfo::set_challenge_score(
            (proto::ChannellerSlabLoopDungeonResultInfo *const)v51._anon_0._M_allocated_capacity,
            real_challenge_score);
          if ( *(_BYTE *)(((unsigned __int64)&loop_dungeon_data->score >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)loop_dungeon_data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&loop_dungeon_data->score >> 3)
                                                                            + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          proto::ChannellerSlabLoopDungeonResultInfo::set_challenge_max_score(
            (proto::ChannellerSlabLoopDungeonResultInfo *const)v51._anon_0._M_allocated_capacity,
            loop_dungeon_data->score);
          proto::ChannellerSlabLoopDungeonResultInfo::set_is_in_time_limit(
            (proto::ChannellerSlabLoopDungeonResultInfo *const)v51._anon_0._M_allocated_capacity,
            is_in_limit_time);
          std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v4 + 144));
        }
        common::tools::perf::make_shared<proto_log::PlayerLogBodyChannellerSlabLoopDungeonChallengeEnd>();
        v25 = std::__shared_ptr_access<proto_log::PlayerLogBodyChannellerSlabLoopDungeonChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyChannellerSlabLoopDungeonChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
        v26 = DungeonScene::getTransaction[abi:cxx11](dungeon_scene);
        proto_log::PlayerLogBodyChannellerSlabLoopDungeonChallengeEnd::set_dungeon_transaction(v25, v26);
        v27 = std::__shared_ptr_access<proto_log::PlayerLogBodyChannellerSlabLoopDungeonChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyChannellerSlabLoopDungeonChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
        DungeonId = DungeonScene::getDungeonId(dungeon_scene);
        proto_log::PlayerLogBodyChannellerSlabLoopDungeonChallengeEnd::set_dungeon_id(v27, DungeonId);
        v29 = std::__shared_ptr_access<proto_log::PlayerLogBodyChannellerSlabLoopDungeonChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyChannellerSlabLoopDungeonChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
        proto_log::PlayerLogBodyChannellerSlabLoopDungeonChallengeEnd::set_challenge_transaction(
          v29,
          (const std::string *)(*(&v51._anon_0._M_allocated_capacity + 1) + 344));
        v30 = std::__shared_ptr_access<proto_log::PlayerLogBodyChannellerSlabLoopDungeonChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyChannellerSlabLoopDungeonChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
        if ( *(_BYTE *)(((*(&v51._anon_0._M_allocated_capacity + 1) + 32) >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((*(&v51._anon_0._M_allocated_capacity + 1) + 32) >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        proto_log::PlayerLogBodyChannellerSlabLoopDungeonChallengeEnd::set_challenge_id(
          v30,
          *(_DWORD *)(*(&v51._anon_0._M_allocated_capacity + 1) + 32));
        v31 = std::__shared_ptr_access<proto_log::PlayerLogBodyChannellerSlabLoopDungeonChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyChannellerSlabLoopDungeonChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
        if ( *(_BYTE *)(((unsigned __int64)&dungeon_context->difficulty_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)dungeon_context + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_context->difficulty_id >> 3)
                                                                        + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto_log::PlayerLogBodyChannellerSlabLoopDungeonChallengeEnd::set_difficulty_id(
          v31,
          dungeon_context->difficulty_id);
        is_mp = DungeonScene::isMpDungeonMode(dungeon_scene);
        v32 = std::__shared_ptr_access<proto_log::PlayerLogBodyChannellerSlabLoopDungeonChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyChannellerSlabLoopDungeonChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
        proto_log::PlayerLogBodyChannellerSlabLoopDungeonChallengeEnd::set_is_mp(v32, is_mp);
        v33 = std::__shared_ptr_access<proto_log::PlayerLogBodyChannellerSlabLoopDungeonChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyChannellerSlabLoopDungeonChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
        TotalBuffEnergy = ChannellerSlabActivity::getTotalBuffEnergy(this, is_mp);
        proto_log::PlayerLogBodyChannellerSlabLoopDungeonChallengeEnd::set_total_energy(v33, TotalBuffEnergy);
        v35 = std::__shared_ptr_access<proto_log::PlayerLogBodyChannellerSlabLoopDungeonChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyChannellerSlabLoopDungeonChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
        TotalBuffEnergyCost = ChannellerSlabActivity::getTotalBuffEnergyCost(this, is_mp);
        proto_log::PlayerLogBodyChannellerSlabLoopDungeonChallengeEnd::set_cost_energy(v35, TotalBuffEnergyCost);
        v37 = std::__shared_ptr_access<proto_log::PlayerLogBodyChannellerSlabLoopDungeonChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyChannellerSlabLoopDungeonChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
        v38 = proto_log::PlayerLogBodyChannellerSlabLoopDungeonChallengeEnd::mutable_buff_id_list(v37);
        common::tools::MiscUtils::setToRepeated<std::unordered_set<unsigned int>,unsigned int>(
          &dungeon_context->scheme_buff_id_set,
          v38);
        v39 = std::__shared_ptr_access<proto_log::PlayerLogBodyChannellerSlabLoopDungeonChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyChannellerSlabLoopDungeonChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
        v40 = proto_log::PlayerLogBodyChannellerSlabLoopDungeonChallengeEnd::mutable_condition_id_list(v39);
        common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&dungeon_context->condition_id_vec, v40);
        v41 = std::__shared_ptr_access<proto_log::PlayerLogBodyChannellerSlabLoopDungeonChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyChannellerSlabLoopDungeonChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
        p_condition_id_vec = &dungeon_context->condition_id_vec;
        if ( *(_BYTE *)(((unsigned __int64)&dungeon_context->difficulty_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)dungeon_context + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_context->difficulty_id >> 3)
                                                                        + 0x7FFF8000) )
        {
          p_condition_id_vec = (const std::vector<unsigned int> *)&dungeon_context->difficulty_id;
          __asan_report_load4();
        }
        v43 = dungeon_context->difficulty_id;
        if ( *(_BYTE *)(((unsigned __int64)dungeon_context >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)dungeon_context >> 3) + 0x7FFF8000) <= 3 )
        {
          p_condition_id_vec = (const std::vector<unsigned int> *)dungeon_context;
          __asan_report_load4();
        }
        LoopDungeonChallengeScore = ChannellerSlabActivity::getLoopDungeonChallengeScore(
                                      this,
                                      dungeon_context->dungeon_index,
                                      v43,
                                      p_condition_id_vec);
        proto_log::PlayerLogBodyChannellerSlabLoopDungeonChallengeEnd::set_challenge_score(
          v41,
          LoopDungeonChallengeScore);
        v45 = std::__shared_ptr_access<proto_log::PlayerLogBodyChannellerSlabLoopDungeonChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyChannellerSlabLoopDungeonChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
        proto_log::PlayerLogBodyChannellerSlabLoopDungeonChallengeEnd::set_real_challenge_score(
          v45,
          real_challenge_score);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        AvatarComp = Player::getAvatarComp(this->player_);
        std::function<ForeachPolicy ()(Avatar &)>::function<ChannellerSlabActivity::onSettleLoopDungeonChallenge(DungeonScene &,Challenge &,proto::ChannellerSlabLoopDungeonResultInfo &)::{lambda(Avatar &)#2},void,void>(
          (std::function<ForeachPolicy(Avatar&)> *const)&v65,
          (ChannellerSlabActivity::onSettleLoopDungeonChallenge::<lambda(Avatar&)>)(v4 + 80));
        PlayerAvatarComp::foreachMyAvatarInSceneTeam(AvatarComp, (std::function<ForeachPolicy(Avatar&)> *)&v65);
        std::function<ForeachPolicy ()(Avatar &)>::~function((std::function<ForeachPolicy(Avatar&)> *const)&v65);
        now = common::tools::TimeUtils::getNow();
        if ( *(_BYTE *)(((*(&v51._anon_0._M_allocated_capacity + 1) + 184) >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((*(&v51._anon_0._M_allocated_capacity + 1) + 184) >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        if ( now <= *(_DWORD *)(*(&v51._anon_0._M_allocated_capacity + 1) + 184) )
          v47 = 0;
        else
          v47 = now - *(_DWORD *)(*(&v51._anon_0._M_allocated_capacity + 1) + 184);
        cost_time = v47;
        v48 = std::__shared_ptr_access<proto_log::PlayerLogBodyChannellerSlabLoopDungeonChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyChannellerSlabLoopDungeonChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
        proto_log::PlayerLogBodyChannellerSlabLoopDungeonChallengeEnd::set_cost_time(v48, cost_time);
        v49 = std::__shared_ptr_access<proto_log::PlayerLogBodyChannellerSlabLoopDungeonChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyChannellerSlabLoopDungeonChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
        if ( *(_BYTE *)(((*(&v51._anon_0._M_allocated_capacity + 1) + 41) >> 3) + 0x7FFF8000) != 0
          && ((v51._anon_0._M_local_buf[8] + 41) & 7) >= *(_BYTE *)(((*(&v51._anon_0._M_allocated_capacity + 1) + 41) >> 3)
                                                                  + 0x7FFF8000) )
        {
          __asan_report_load1(*(&v51._anon_0._M_allocated_capacity + 1) + 41);
        }
        proto_log::PlayerLogBodyChannellerSlabLoopDungeonChallengeEnd::set_is_succ(
          v49,
          *(_BYTE *)(*(&v51._anon_0._M_allocated_capacity + 1) + 41));
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        player = this->player_;
        std::shared_ptr<google::protobuf::Message>::shared_ptr(
          (std::shared_ptr<google::protobuf::Message> *const)&__r,
          0LL);
        std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyChannellerSlabLoopDungeonChallengeEnd,void>(
          (std::shared_ptr<google::protobuf::Message> *const)(v4 + 112),
          (const std::shared_ptr<proto_log::PlayerLogBodyChannellerSlabLoopDungeonChallengeEnd> *)(v4 + 80));
        Player::printStatLog(player, (MessagePtr *)(v4 + 112), (MessagePtr *)&__r, 0xEu);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)(v4 + 112));
        std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&__r);
        BaseActivity::notifyClientData(this, 0);
        std::shared_ptr<proto_log::PlayerLogBodyChannellerSlabLoopDungeonChallengeEnd>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyChannellerSlabLoopDungeonChallengeEnd> *const)(v4 + 80));
        StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 48));
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v65,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/channeller_slab_activity.cpp",
        "onSettleLoopDungeonChallenge",
        909);
      v8 = common::milog::MiLogStream::operator<<<char [74],(char *[74])0>(
             &v65,
             (const char (*)[74])"[CHANNELLER_SLAB] findLoopDungeonDifficultyConfig failed, dungeon_index: ");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &dungeon_context->dungeon_index);
      v10 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v9, (const char (*)[18])" ,difficulty_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &dungeon_context->difficulty_id);
      common::milog::MiLogStream::~MiLogStream(&v65);
    }
  }
  std::optional<ChannellerSlabActivity::LoopDungeonContext>::~optional((std::optional<ChannellerSlabActivity::LoopDungeonContext> *const)(v4 + 208));
  if ( v51._M_dataplus._M_p == (std::string::pointer)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = 0;
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
};

// Line 946: range 0000000014F2D254-0000000014F2D30E
bool __cdecl ChannellerSlabActivity::onSettleLoopDungeonChallenge(DungeonScene &,Challenge &,proto::ChannellerSlabLoopDungeonResultInfo &)::{lambda(unsigned int)#1}::operator()(
        const ChannellerSlabActivity::onSettleLoopDungeonChallenge::<lambda(uint32_t)> *const __closure,
        uint32_t condition_id)
{
  const ActivityChannellerSlabExcelConfigMgr *config_mgr; // [rsp+10h] [rbp-10h]
  const data::ChannellerSlabLoopDungeonConditionExcelConfig *condition_config_ptr; // [rsp+18h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  config_mgr = ChannellerSlabActivity::getConfigMgr(__closure->__this);
  condition_config_ptr = data::ActivityChannellerSlabExcelConfigMgrBase::findChannellerSlabLoopDungeonConditionExcelConfig(
                           config_mgr,
                           condition_id);
  if ( !condition_config_ptr )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&condition_config_ptr->condition_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)condition_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&condition_config_ptr->condition_type >> 3)
                                                                        + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  return condition_config_ptr->condition_type != CHANNELLER_SLAB_CONDITION_LIMIT;
};

// Line 999: range 0000000014F2D310-0000000014F2D375
ForeachPolicy __cdecl ChannellerSlabActivity::onSettleLoopDungeonChallenge(DungeonScene &,Challenge &,proto::ChannellerSlabLoopDungeonResultInfo &)::{lambda(Avatar &)#2}::operator()(
        const ChannellerSlabActivity::onSettleLoopDungeonChallenge::<lambda(Avatar&)> *const __closure,
        Avatar *avatar)
{
  std::__shared_ptr_access<proto_log::PlayerLogBodyChannellerSlabLoopDungeonChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  proto_log::AvatarLog *v3; // rdx

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = std::__shared_ptr_access<proto_log::PlayerLogBodyChannellerSlabLoopDungeonChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyChannellerSlabLoopDungeonChallengeEnd,(__gnu_cxx::_Lock_policy)2,false,false> *const)__closure->__log_ptr);
  v3 = proto_log::PlayerLogBodyChannellerSlabLoopDungeonChallengeEnd::add_avatar_list(v2);
  Avatar::getAvatarLog(avatar, v3);
  return 0;
};

// Line 1015: range 0000000014F2E562-0000000014F2E8CC
__int64 __fastcall ChannellerSlabActivity::passLoopDungeonByGm(
        ChannellerSlabActivity *const this,
        uint32_t dungeon_index,
        uint32_t score)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  __int64 result; // rax
  uint32_t v13; // ecx
  uint32_t *p_score; // rax
  unsigned int val; // [rsp+14h] [rbp-CCh] BYREF
  const ActivityChannellerSlabExcelConfigMgr *config_mgr; // [rsp+18h] [rbp-C8h]
  ChannellerSlabActivity::LoopDungeonData *loop_dungeon_data; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v20; // [rsp+30h] [rbp-B0h] BYREF
  char v21[144]; // [rsp+50h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 18 dungeon_index:1014 64 4 10 score:1014";
  *(_QWORD *)(v3 + 16) = ChannellerSlabActivity::passLoopDungeonByGm;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 48) = dungeon_index;
  *(_DWORD *)(v3 + 64) = score;
  common::milog::MiLogStream::create(
    &v20,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/channeller_slab_activity.cpp",
    "passLoopDungeonByGm",
    1016);
  v6 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
         &v20,
         (const char (*)[45])"[CHANNELLER_SLAB] passLoopDungeonByGm, uid: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
  v8 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v7, (const char (*)[17])" dungeon_index: ");
  v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 48));
  v10 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v9, (const char (*)[10])" ,score: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 64));
  common::milog::MiLogStream::~MiLogStream(&v20);
  config_mgr = ChannellerSlabActivity::getConfigMgr(this);
  if ( data::ActivityChannellerSlabExcelConfigMgrBase::findChannellerSlabLoopDungeonExcelConfig(
         config_mgr,
         *(_DWORD *)(v3 + 48)) )
  {
    loop_dungeon_data = std::map<unsigned int,ChannellerSlabActivity::LoopDungeonData>::operator[](
                          &this->bin_data_.loop_dungeon_stage_data.dungeon_data_map,
                          (const std::map<unsigned int,ChannellerSlabActivity::LoopDungeonData>::key_type *)(v3 + 48));
    v13 = *(_DWORD *)(v3 + 64);
    p_score = &loop_dungeon_data->score;
    if ( *(_BYTE *)(((unsigned __int64)p_score >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_score & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_score >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(p_score);
    }
    loop_dungeon_data->score = v13;
    BaseActivity::notifyClientData(this, 0);
    result = 0LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/channeller_slab_activity.cpp",
      "passLoopDungeonByGm",
      1022);
    v11 = common::milog::MiLogStream::operator<<<char [83],(char *[83])0>(
            &v20,
            (const char (*)[83])"[CHANNELLER_SLAB] findChannellerSlabLoopDungeonExcelConfig failed, dungeon_index: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v20);
    result = 0xFFFFFFFFLL;
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
  return result;
};

// Line 1034: range 0000000014F2E8CE-0000000014F2EA83
int32_t __cdecl ChannellerSlabActivity::resetLoopDungeonRewardByGm(ChannellerSlabActivity *const this)
{
  common::milog::MiLogStream *v1; // rbx
  unsigned int val; // [rsp+14h] [rbp-6Ch] BYREF
  std::map<unsigned int,ChannellerSlabActivity::LoopDungeonData>::iterator __for_begin; // [rsp+18h] [rbp-68h] BYREF
  std::map<unsigned int,ChannellerSlabActivity::LoopDungeonData>::iterator __for_end; // [rsp+20h] [rbp-60h] BYREF
  ChannellerSlabActivity::LoopDungeonStageData *loop_dungeon_stage_data; // [rsp+28h] [rbp-58h]
  std::map<unsigned int,ChannellerSlabActivity::LoopDungeonData> *__for_range; // [rsp+30h] [rbp-50h]
  std::pair<unsigned int const,ChannellerSlabActivity::LoopDungeonData> *__in; // [rsp+38h] [rbp-48h]
  std::tuple_element<0,std::pair<unsigned int const,ChannellerSlabActivity::LoopDungeonData> >::type *_; // [rsp+40h] [rbp-40h]
  std::tuple_element<1,std::pair<unsigned int const,ChannellerSlabActivity::LoopDungeonData> >::type *loop_dungeon_data; // [rsp+48h] [rbp-38h]
  common::milog::MiLogStream v11; // [rsp+50h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v11,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/channeller_slab_activity.cpp",
    "resetLoopDungeonRewardByGm",
    1035);
  v1 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
         &v11,
         (const char (*)[52])"[CHANNELLER_SLAB] resetLoopDungeonRewardByGm, uid: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, &val);
  common::milog::MiLogStream::~MiLogStream(&v11);
  loop_dungeon_stage_data = &this->bin_data_.loop_dungeon_stage_data;
  std::unordered_set<unsigned int>::clear(&this->bin_data_.loop_dungeon_stage_data.taken_reward_index_set);
  __for_range = &loop_dungeon_stage_data->dungeon_data_map;
  __for_begin._M_node = std::map<unsigned int,ChannellerSlabActivity::LoopDungeonData>::begin(&loop_dungeon_stage_data->dungeon_data_map)._M_node;
  __for_end._M_node = std::map<unsigned int,ChannellerSlabActivity::LoopDungeonData>::end(__for_range)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,ChannellerSlabActivity::LoopDungeonData>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,ChannellerSlabActivity::LoopDungeonData>(__in);
    loop_dungeon_data = std::get<1ul,unsigned int const,ChannellerSlabActivity::LoopDungeonData>(__in);
    if ( *(char *)(((unsigned __int64)&loop_dungeon_data->is_first_pass_reward_taken >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&loop_dungeon_data->is_first_pass_reward_taken);
    loop_dungeon_data->is_first_pass_reward_taken = 0;
    std::_Rb_tree_iterator<std::pair<unsigned int const,ChannellerSlabActivity::LoopDungeonData>>::operator++(&__for_begin);
  }
  BaseActivity::notifyClientData(this, 0);
  return 0;
};

// Line 1048: range 0000000014F2EA84-0000000014F2F9A1
int32_t __cdecl ChannellerSlabActivity::wearBuff(
        ChannellerSlabActivity *const this,
        const proto::ChannellerSlabWearBuffReq *req,
        proto::ChannellerSlabWearBuffRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  google::protobuf::uint32 v6; // edx
  google::protobuf::uint32 v7; // edx
  bool is_mp; // dl
  uint32_t v9; // eax
  common::milog::MiLogStream *v10; // r12
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r12
  int32_t result; // eax
  common::milog::MiLogStream *v14; // r12
  bool v15; // dl
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type v16; // r14d
  common::milog::MiLogStream *v18; // r12
  ChannellerSlabActivity::BuffScheme *v21; // r14
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // r12
  uint32_t v24; // edx
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // r12
  bool v27; // dl
  bool v28; // dl
  common::milog::MiLogStream *v29; // r12
  google::protobuf::uint32 v30; // r12d
  ChannellerSlabActivity::BuffScheme *v31; // r14
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v32; // rax
  google::protobuf::uint32 *v33; // rdx
  bool is_replace_purple_buff; // [rsp+2Bh] [rbp-E5h]
  unsigned int val; // [rsp+2Ch] [rbp-E4h] BYREF
  unsigned int value; // [rsp+30h] [rbp-E0h] BYREF
  uint32_t energy_cost; // [rsp+34h] [rbp-DCh]
  uint32_t total_energy; // [rsp+38h] [rbp-D8h]
  uint32_t total_energy_cost; // [rsp+3Ch] [rbp-D4h]
  std::unordered_map<unsigned int,unsigned int>::iterator __for_end; // [rsp+40h] [rbp-D0h] BYREF
  const ActivityChannellerSlabExcelConfigMgr *config_mgr; // [rsp+48h] [rbp-C8h]
  const data::ChannellerSlabBuffExcelConfig *buff_config_ptr; // [rsp+50h] [rbp-C0h]
  ChannellerSlabActivity::BuffScheme *buff_scheme; // [rsp+58h] [rbp-B8h]
  std::unordered_map<unsigned int,unsigned int> *__for_range; // [rsp+60h] [rbp-B0h]
  const std::pair<unsigned int const,unsigned int> *v46; // [rsp+68h] [rbp-A8h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *slot_id; // [rsp+70h] [rbp-A0h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *buff_id; // [rsp+78h] [rbp-98h]
  common::milog::MiLogStream v49; // [rsp+80h] [rbp-90h] BYREF
  char v50[112]; // [rsp+A0h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v50;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 9 iter:1101";
  *(_QWORD *)(v3 + 16) = ChannellerSlabActivity::wearBuff;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  v6 = proto::ChannellerSlabWearBuffReq::buff_id(req);
  proto::ChannellerSlabWearBuffRsp::set_buff_id(rsp_0, v6);
  v7 = proto::ChannellerSlabWearBuffReq::slot_id(req);
  proto::ChannellerSlabWearBuffRsp::set_slot_id(rsp_0, v7);
  is_mp = proto::ChannellerSlabWearBuffReq::is_mp(req);
  proto::ChannellerSlabWearBuffRsp::set_is_mp(rsp_0, is_mp);
  config_mgr = ChannellerSlabActivity::getConfigMgr(this);
  v9 = proto::ChannellerSlabWearBuffReq::buff_id(req);
  buff_config_ptr = data::ActivityChannellerSlabExcelConfigMgrBase::findChannellerSlabBuffExcelConfig(config_mgr, v9);
  if ( !buff_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v49,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/channeller_slab_activity.cpp",
      "wearBuff",
      1057);
    v10 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
            &v49,
            (const char (*)[66])"[CHANNELLER_SLAB] findChannellerSlabBuffExcelConfig failed, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
    v12 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v11, (const char (*)[12])" ,buff_id: ");
    value = proto::ChannellerSlabWearBuffReq::buff_id(req);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &value);
    common::milog::MiLogStream::~MiLogStream(&v49);
    result = -1;
    goto LABEL_67;
  }
  value = proto::ChannellerSlabWearBuffReq::buff_id(req);
  if ( !common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
          &this->bin_data_.buff_data.buff_id_set,
          &value) )
  {
    common::milog::MiLogStream::create(
      &v49,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/channeller_slab_activity.cpp",
      "wearBuff",
      1063);
    v14 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
            &v49,
            (const char (*)[43])"[CHANNELLER_SLAB] buff_id not exist, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_59;
  }
  v15 = proto::ChannellerSlabWearBuffReq::is_mp(req);
  buff_scheme = ChannellerSlabActivity::getBuffScheme(this, v15);
  __for_range = &buff_scheme->slot_map;
  *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,unsigned int>::begin(&buff_scheme->slot_map);
  __for_end._M_cur = std::unordered_map<unsigned int,unsigned int>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v3 + 32),
            &__for_end) )
  {
    v46 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v3 + 32));
    slot_id = std::get<0ul,unsigned int const,unsigned int>(v46);
    buff_id = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v46);
    if ( *(_BYTE *)(((unsigned __int64)buff_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)buff_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)buff_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v16 = *buff_id;
    if ( v16 == proto::ChannellerSlabWearBuffReq::buff_id(req) )
    {
      common::milog::MiLogStream::create(
        &v49,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/channeller_slab_activity.cpp",
        "wearBuff",
        1073);
      v14 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
              &v49,
              (const char (*)[43])"[CHANNELLER_SLAB] buff already worn, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      goto LABEL_59;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v3 + 32));
  }
  if ( !proto::ChannellerSlabWearBuffReq::slot_id(req) || proto::ChannellerSlabWearBuffReq::slot_id(req) > 0xB )
  {
    common::milog::MiLogStream::create(
      &v49,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/channeller_slab_activity.cpp",
      "wearBuff",
      1081);
    v18 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
            &v49,
            (const char (*)[41])"[CHANNELLER_SLAB] slot_id invalid, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_53:
    val = Player::getUid(this->player_);
    v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &val);
    v23 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v22, (const char (*)[12])" ,slot_id: ");
    value = proto::ChannellerSlabWearBuffReq::slot_id(req);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &value);
    common::milog::MiLogStream::~MiLogStream(&v49);
    result = -1;
    goto LABEL_67;
  }
  if ( *(_BYTE *)(((unsigned __int64)&buff_config_ptr->buff_quality_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&buff_config_ptr->buff_quality_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( buff_config_ptr->buff_quality_type == QUALITY_PURPLE && proto::ChannellerSlabWearBuffReq::slot_id(req) != 1 )
  {
    common::milog::MiLogStream::create(
      &v49,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/channeller_slab_activity.cpp",
      "wearBuff",
      1088);
    v18 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
            &v49,
            (const char (*)[41])"[CHANNELLER_SLAB] slot_id invalid, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_53;
  }
  if ( *(_BYTE *)(((unsigned __int64)&buff_config_ptr->buff_quality_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&buff_config_ptr->buff_quality_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( buff_config_ptr->buff_quality_type != QUALITY_PURPLE && proto::ChannellerSlabWearBuffReq::slot_id(req) == 1 )
  {
    common::milog::MiLogStream::create(
      &v49,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/channeller_slab_activity.cpp",
      "wearBuff",
      1095);
    v18 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
            &v49,
            (const char (*)[41])"[CHANNELLER_SLAB] slot_id invalid, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_53;
  }
  is_replace_purple_buff = 0;
  v21 = buff_scheme;
  value = proto::ChannellerSlabWearBuffReq::slot_id(req);
  *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                            &v21->slot_map,
                                                                            &value);
  __for_end._M_cur = std::unordered_map<unsigned int,unsigned int>::end(&buff_scheme->slot_map)._M_cur;
  if ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v3 + 32),
         &__for_end) )
  {
    if ( proto::ChannellerSlabWearBuffReq::slot_id(req) != 1 )
    {
      common::milog::MiLogStream::create(
        &v49,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/channeller_slab_activity.cpp",
        "wearBuff",
        1107);
      v18 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
              &v49,
              (const char (*)[41])"[CHANNELLER_SLAB] slot_id invalid, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      goto LABEL_53;
    }
    is_replace_purple_buff = 1;
  }
  if ( is_replace_purple_buff )
  {
LABEL_64:
    v30 = proto::ChannellerSlabWearBuffReq::buff_id(req);
    v31 = buff_scheme;
    value = proto::ChannellerSlabWearBuffReq::slot_id(req);
    v32 = std::unordered_map<unsigned int,unsigned int>::operator[](&v31->slot_map, &value);
    v33 = v32;
    if ( *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v32 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v32);
    }
    *v33 = v30;
    BaseActivity::notifyClientData(this, 0);
    result = 0;
    goto LABEL_67;
  }
  v24 = proto::ChannellerSlabWearBuffReq::buff_id(req);
  energy_cost = ChannellerSlabActivity::getBuffEnergyCost(this, v24);
  if ( energy_cost )
  {
    v27 = proto::ChannellerSlabWearBuffReq::is_mp(req);
    total_energy = ChannellerSlabActivity::getTotalBuffEnergy(this, v27);
    v28 = proto::ChannellerSlabWearBuffReq::is_mp(req);
    total_energy_cost = ChannellerSlabActivity::getTotalBuffEnergyCost(this, v28);
    if ( total_energy < energy_cost + total_energy_cost )
    {
      common::milog::MiLogStream::create(
        &v49,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/channeller_slab_activity.cpp",
        "wearBuff",
        1126);
      v29 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
              &v49,
              (const char (*)[43])"[CHANNELLER_SLAB] energy not enough, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      value = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, &value);
      common::milog::MiLogStream::~MiLogStream(&v49);
      result = -1;
      goto LABEL_67;
    }
    goto LABEL_64;
  }
  common::milog::MiLogStream::create(
    &v49,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/activity/channeller_slab_activity.cpp",
    "wearBuff",
    1119);
  v14 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
          &v49,
          (const char (*)[41])"[CHANNELLER_SLAB] buff_id invalid, uid: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
LABEL_59:
  val = Player::getUid(this->player_);
  v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &val);
  v26 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v25, (const char (*)[12])" ,buff_id: ");
  value = proto::ChannellerSlabWearBuffReq::buff_id(req);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &value);
  common::milog::MiLogStream::~MiLogStream(&v49);
  result = -1;
LABEL_67:
  if ( v50 == (char *)v3 )
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

// Line 1138: range 0000000014F2F9A2-0000000014F2FD62
int32_t __cdecl ChannellerSlabActivity::takeoffBuff(
        ChannellerSlabActivity *const this,
        const proto::ChannellerSlabTakeoffBuffReq *req,
        proto::ChannellerSlabTakeoffBuffRsp *rsp_0)
{
  google::protobuf::uint32 v3; // edx
  google::protobuf::uint32 v4; // edx
  bool is_mp; // dl
  common::milog::MiLogStream *v6; // rbx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rbx
  bool v10; // dl
  ChannellerSlabActivity::BuffScheme *v11; // rbx
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v12; // rdx
  int v13; // ebx
  char v14; // al
  common::milog::MiLogStream *v15; // rbx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rbx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rbx
  ChannellerSlabActivity::BuffScheme *v20; // rbx
  unsigned int Uid; // [rsp+2Ch] [rbp-44h] BYREF
  unsigned int val; // [rsp+30h] [rbp-40h] BYREF
  unsigned int value; // [rsp+34h] [rbp-3Ch] BYREF
  ChannellerSlabActivity::BuffScheme *buff_scheme; // [rsp+38h] [rbp-38h]
  common::milog::MiLogStream v26; // [rsp+40h] [rbp-30h] BYREF

  v3 = proto::ChannellerSlabTakeoffBuffReq::buff_id(req);
  proto::ChannellerSlabTakeoffBuffRsp::set_buff_id(rsp_0, v3);
  v4 = proto::ChannellerSlabTakeoffBuffReq::slot_id(req);
  proto::ChannellerSlabTakeoffBuffRsp::set_slot_id(rsp_0, v4);
  is_mp = proto::ChannellerSlabTakeoffBuffReq::is_mp(req);
  proto::ChannellerSlabTakeoffBuffRsp::set_is_mp(rsp_0, is_mp);
  value = proto::ChannellerSlabTakeoffBuffReq::buff_id(req);
  if ( !common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
          &this->bin_data_.buff_data.buff_id_set,
          &value) )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/channeller_slab_activity.cpp",
      "takeoffBuff",
      1145);
    v6 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v26,
           (const char (*)[43])"[CHANNELLER_SLAB] buff_id not exist, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    v8 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v7, (const char (*)[12])" ,buff_id: ");
    value = proto::ChannellerSlabTakeoffBuffReq::buff_id(req);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &value);
    common::milog::MiLogStream::~MiLogStream(&v26);
    return -1;
  }
  else
  {
    v10 = proto::ChannellerSlabTakeoffBuffReq::is_mp(req);
    buff_scheme = ChannellerSlabActivity::getBuffScheme(this, v10);
    val = proto::ChannellerSlabTakeoffBuffReq::slot_id(req);
    if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,unsigned int>,unsigned int>(
            &buff_scheme->slot_map,
            &val) )
      goto LABEL_9;
    v11 = buff_scheme;
    value = proto::ChannellerSlabTakeoffBuffReq::slot_id(req);
    v12 = std::unordered_map<unsigned int,unsigned int>::operator[](&v11->slot_map, &value);
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v13 = *v12;
    if ( v13 == proto::ChannellerSlabTakeoffBuffReq::buff_id(req) )
      v14 = 0;
    else
LABEL_9:
      v14 = 1;
    if ( v14 )
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/channeller_slab_activity.cpp",
        "takeoffBuff",
        1153);
      v15 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
              &v26,
              (const char (*)[52])"[CHANNELLER_SLAB] slot_id or buff_id invalid, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Uid = Player::getUid(this->player_);
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &Uid);
      v17 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v16, (const char (*)[12])" ,buff_id: ");
      val = proto::ChannellerSlabTakeoffBuffReq::buff_id(req);
      v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &val);
      v19 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v18, (const char (*)[12])" ,slot_id: ");
      value = proto::ChannellerSlabTakeoffBuffReq::slot_id(req);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &value);
      common::milog::MiLogStream::~MiLogStream(&v26);
      return -1;
    }
    else
    {
      v20 = buff_scheme;
      value = proto::ChannellerSlabTakeoffBuffReq::slot_id(req);
      std::unordered_map<unsigned int,unsigned int>::erase(&v20->slot_map, &value);
      BaseActivity::notifyClientData(this, 0);
      return 0;
    }
  }
};

// Line 1165: range 0000000014F3002A-0000000014F319EF
int32_t __cdecl ChannellerSlabActivity::enterLoopDungeon(
        ChannellerSlabActivity *const this,
        const proto::ChannellerSlabEnterLoopDungeonReq *req,
        proto::ChannellerSlabEnterLoopDungeonRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const google::protobuf::RepeatedField<unsigned int> *v6; // rax
  google::protobuf::RepeatedField<unsigned int> *v7; // rax
  PlayerSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v9; // r14
  int32_t v10; // r14d
  common::milog::MiLogStream *v11; // r14
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  uint32_t v16; // r15d
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  uint32_t SceneId; // eax
  common::milog::MiLogStream *v19; // r14
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  std::__shared_ptr_access<data::DungeonEntry,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  unsigned int *M_current; // r14
  std::__shared_ptr_access<data::DungeonEntry,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  std::vector<unsigned int>::iterator v25; // rax
  std::__shared_ptr_access<data::DungeonEntry,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  common::milog::MiLogStream *v27; // r14
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  PlayerDungeonComp *DungeonComp; // r14
  __int32 v33; // r15d
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rax
  __int32 v35; // eax
  common::milog::MiLogStream *v36; // r14
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // r14
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v42; // rax
  common::milog::MiLogStream *v43; // r14
  std::vector<unsigned int>::iterator *p_for_end; // rsi
  common::milog::MiLogStream *v45; // r14
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v46; // rdx
  common::milog::MiLogStream *v47; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  SceneEntity *v51; // rax
  DungeonScene *v52; // r14
  DungeonScene *v53; // r14
  DungeonScene *v54; // rax
  bool isMpDungeonMode; // al
  DungeonScene *v56; // rax
  bool v57; // al
  DungeonScene *v58; // rax
  uint32_t v59; // ecx
  int32_t result; // eax
  std::vector<unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-3A8h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+30h] [rbp-3A0h] BYREF
  std::vector<data::DungeonLevelEntityConfig>::const_iterator __for_begin_0; // [rsp+38h] [rbp-398h] BYREF
  std::vector<data::DungeonLevelEntityConfig>::const_iterator __for_end_0; // [rsp+40h] [rbp-390h] BYREF
  const ActivityChannellerSlabExcelConfigMgr *config_mgr; // [rsp+48h] [rbp-388h]
  const data::ChannellerSlabLoopDungeonDifficultyExcelConfig *difficulty_config_ptr; // [rsp+50h] [rbp-380h]
  std::tuple_element<0,std::pair<int,std::shared_ptr<DungeonScene> > >::type *ret; // [rsp+58h] [rbp-378h]
  std::tuple_element<1,std::pair<int,std::shared_ptr<DungeonScene> > >::type *dungeon_scene_ptr; // [rsp+60h] [rbp-370h]
  std::vector<unsigned int> *__for_range; // [rsp+68h] [rbp-368h]
  const data::ChannellerSlabLoopDungeonConditionExcelConfig *condition_config_ptr; // [rsp+70h] [rbp-360h]
  const std::vector<data::DungeonLevelEntityConfig> *level_config_vec_ptr; // [rsp+78h] [rbp-358h]
  const std::vector<data::DungeonLevelEntityConfig> *__for_range_0; // [rsp+80h] [rbp-350h]
  const data::DungeonLevelEntityConfig *level_config; // [rsp+88h] [rbp-348h]
  ChannellerSlabActivity::LoopDungeonStageData *loop_dungeon_stage_data; // [rsp+90h] [rbp-340h]
  ChannellerSlabActivity::LoopDungeonData *loop_dungeon_data; // [rsp+98h] [rbp-338h]
  std::shared_ptr<Config> v77; // [rsp+A0h] [rbp-330h] BYREF
  std::pair<int,std::shared_ptr<DungeonScene> > __in; // [rsp+B0h] [rbp-320h] BYREF
  EnterDungeonOption v79; // [rsp+D0h] [rbp-300h] BYREF
  common::milog::MiLogStream v80; // [rsp+F0h] [rbp-2E0h] BYREF
  std::map<unsigned int,unsigned int> level_config_id_map; // [rsp+110h] [rbp-2C0h] BYREF
  char v82[656]; // [rsp+140h] [rbp-290h] BYREF

  v3 = (unsigned __int64)v82;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(608LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "13 48 4 18 dungeon_index:1166 64 4 18 difficulty_id:1167 80 4 13 point_id:1168 96 4 15 dungeon_i"
                        "d:1211 112 4 17 condition_id:1256 128 4 20 level_config_id:1267 144 8 9 iter:1220 176 16 18 cur_"
                        "world_ptr:1190 208 16 14 scene_ptr:1197 240 16 22 dungeon_entry_ptr:1214 272 16 21 scene_entity_"
                        "ptr:1250 304 24 21 condition_id_vec:1169 368 168 20 dungeon_context:1304";
  *(_QWORD *)(v3 + 16) = ChannellerSlabActivity::enterLoopDungeon;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -234556924;
  v5[536862724] = 61956;
  v5[536862724] = -234881024;
  v5[536862725] = 62194;
  v5[536862726] = 62194;
  v5[536862727] = 62194;
  v5[536862728] = 62194;
  v5[536862729] = 62194;
  v5[536862730] = -218959360;
  v5[536862731] = 62194;
  v5[536862736] = -218103808;
  v5[536862737] = -202116109;
  v5[536862738] = -202116109;
  *(_DWORD *)(v3 + 48) = proto::ChannellerSlabEnterLoopDungeonReq::dungeon_index(req);
  *(_DWORD *)(v3 + 64) = proto::ChannellerSlabEnterLoopDungeonReq::difficulty_id(req);
  *(_DWORD *)(v3 + 80) = proto::ChannellerSlabEnterLoopDungeonReq::point_id(req);
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 304));
  v6 = proto::ChannellerSlabEnterLoopDungeonReq::condition_id_list(req);
  common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(v6, (std::vector<unsigned int> *)(v3 + 304));
  proto::ChannellerSlabEnterLoopDungeonRsp::set_dungeon_index(rsp_0, *(_DWORD *)(v3 + 48));
  proto::ChannellerSlabEnterLoopDungeonRsp::set_difficulty_id(rsp_0, *(_DWORD *)(v3 + 64));
  proto::ChannellerSlabEnterLoopDungeonRsp::set_point_id(rsp_0, *(_DWORD *)(v3 + 80));
  v7 = proto::ChannellerSlabEnterLoopDungeonRsp::mutable_condition_id_list(rsp_0);
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(
    (const std::vector<unsigned int> *)(v3 + 304),
    v7);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = Player::getSceneComp(this->player_);
  if ( !PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
  {
    common::milog::MiLogStream::create(
      &v80,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/channeller_slab_activity.cpp",
      "enterLoopDungeon",
      1180);
    v9 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v80,
           (const char (*)[43])"[CHANNELLER_SLAB] not in self world, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_9:
    *(_DWORD *)(v3 + 128) = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 128));
    common::milog::MiLogStream::~MiLogStream(&v80);
    v10 = -1;
    goto LABEL_86;
  }
  if ( ChannellerSlabActivity::checkLoopDungeonCondition(
         this,
         *(_DWORD *)(v3 + 48),
         *(_DWORD *)(v3 + 64),
         (const std::vector<unsigned int> *)(v3 + 304)) )
  {
    common::milog::MiLogStream::create(
      &v80,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/channeller_slab_activity.cpp",
      "enterLoopDungeon",
      1186);
    v9 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
           &v80,
           (const char (*)[58])"[CHANNELLER_SLAB] checkLoopDungeonCondition failed, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_9;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurWorld<PlayerWorld>((const PlayerSceneComp *const)(v3 + 176));
  if ( std::operator==<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v3 + 176)) )
  {
    common::milog::MiLogStream::create(
      &v80,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/channeller_slab_activity.cpp",
      "enterLoopDungeon",
      1193);
    v11 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
            &v80,
            (const char (*)[44])"[CHANNELLER_SLAB] getCurWorld failed, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_DWORD *)(v3 + 128) = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 128));
    common::milog::MiLogStream::~MiLogStream(&v80);
    v10 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v3 + 208));
    if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 208)) )
    {
      common::milog::MiLogStream::create(
        &v80,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/channeller_slab_activity.cpp",
        "enterLoopDungeon",
        1200);
      v12 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
              &v80,
              (const char (*)[42])"[CHANNELLER_SLAB] scene_ptr is null, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      *(_DWORD *)(v3 + 128) = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 128));
      common::milog::MiLogStream::~MiLogStream(&v80);
      v10 = 512;
    }
    else
    {
      config_mgr = ChannellerSlabActivity::getConfigMgr(this);
      difficulty_config_ptr = ActivityChannellerSlabExcelConfigMgr::findLoopDungeonDifficultyConfig(
                                config_mgr,
                                *(_DWORD *)(v3 + 48),
                                *(_DWORD *)(v3 + 64));
      if ( difficulty_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&difficulty_config_ptr->dungeon_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)difficulty_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&difficulty_config_ptr->dungeon_id >> 3)
                                                                               + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v3 + 96) = difficulty_config_ptr->dungeon_id;
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v77);
        v16 = (unsigned int)std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v77)
            + 93080;
        v17 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 208));
        SceneId = Scene::getSceneId(v17);
        JsonConfigMgr::findScenePoint<data::DungeonEntry>((const JsonConfigMgr *const)(v3 + 240), v16, SceneId);
        std::shared_ptr<Config>::~shared_ptr(&v77);
        if ( std::operator==<data::DungeonEntry>(0LL, (const std::shared_ptr<data::DungeonEntry> *)(v3 + 240)) )
        {
          common::milog::MiLogStream::create(
            &v80,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/channeller_slab_activity.cpp",
            "enterLoopDungeon",
            1217);
          v19 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                  &v80,
                  (const char (*)[47])"[CHANNELLER_SLAB] findScenePoint failed, uid: ");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          *(_DWORD *)(v3 + 128) = Player::getUid(this->player_);
          v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v19,
                  (const unsigned int *)(v3 + 128));
          v21 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v20, (const char (*)[13])" ,point_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v3 + 80));
          common::milog::MiLogStream::~MiLogStream(&v80);
          v10 = 5;
        }
        else
        {
          v22 = std::__shared_ptr_access<data::DungeonEntry,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::DungeonEntry,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 240));
          M_current = std::vector<unsigned int>::end(&v22->dungeon_ids)._M_current;
          v24 = std::__shared_ptr_access<data::DungeonEntry,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::DungeonEntry,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 240));
          v25._M_current = std::vector<unsigned int>::begin(&v24->dungeon_ids)._M_current;
          *(__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 144) = std::find<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,unsigned int>(
                                                                                                    v25,
                                                                                                    (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current,
                                                                                                    (const unsigned int *)(v3 + 96));
          v26 = std::__shared_ptr_access<data::DungeonEntry,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::DungeonEntry,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 240));
          __for_end_0._M_current = (const data::DungeonLevelEntityConfig *)std::vector<unsigned int>::end(&v26->dungeon_ids)._M_current;
          if ( __gnu_cxx::operator==<unsigned int *,std::vector<unsigned int>>(
                 (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 144),
                 (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_end_0) )
          {
            common::milog::MiLogStream::create(
              &v80,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/channeller_slab_activity.cpp",
              "enterLoopDungeon",
              1223);
            v27 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                    &v80,
                    (const char (*)[44])"[CHANNELLER_SLAB] check point failed, uid: ");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            *(_DWORD *)(v3 + 128) = Player::getUid(this->player_);
            v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v27,
                    (const unsigned int *)(v3 + 128));
            v29 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v28,
                    (const char (*)[13])" ,point_id: ");
            v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v29,
                    (const unsigned int *)(v3 + 80));
            v31 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                    v30,
                    (const char (*)[15])" ,dungeon_id: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, (const unsigned int *)(v3 + 96));
            common::milog::MiLogStream::~MiLogStream(&v80);
            v10 = -1;
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            DungeonComp = Player::getDungeonComp(this->player_);
            memset(&v79, 0, sizeof(v79));
            EnterDungeonOption::EnterDungeonOption(&v79);
            memset(&level_config_id_map, 0, sizeof(level_config_id_map));
            std::map<unsigned int,unsigned int>::map(&level_config_id_map);
            v33 = *(_DWORD *)(v3 + 80);
            v34 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 208));
            v35 = Scene::getSceneId(v34);
            PlayerDungeonComp::enterDungeon(
              &__in,
              DungeonComp,
              *(_DWORD *)(v3 + 96),
              v35,
              v33,
              &level_config_id_map,
              v79);
            std::map<unsigned int,unsigned int>::~map(&level_config_id_map);
            ret = std::get<0ul,int,std::shared_ptr<DungeonScene>>(&__in);
            dungeon_scene_ptr = std::get<1ul,int,std::shared_ptr<DungeonScene>>(&__in);
            if ( *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            if ( *ret )
            {
              if ( *ret < 0 )
              {
                common::milog::MiLogStream::create(
                  &v80,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/activity/channeller_slab_activity.cpp",
                  "enterLoopDungeon",
                  1233);
                v36 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                        &v80,
                        (const char (*)[45])"[CHANNELLER_SLAB] enterDungeon failed, uid: ");
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                *(_DWORD *)(v3 + 128) = Player::getUid(this->player_);
                v37 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v36,
                        (const unsigned int *)(v3 + 128));
                v38 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                        v37,
                        (const char (*)[15])" ,dungeon_id: ");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v38,
                  (const unsigned int *)(v3 + 96));
                common::milog::MiLogStream::~MiLogStream(&v80);
              }
              if ( *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              v10 = *ret;
            }
            else if ( std::operator==<DungeonScene>(0LL, dungeon_scene_ptr) )
            {
              common::milog::MiLogStream::create(
                &v80,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/player/activity/channeller_slab_activity.cpp",
                "enterLoopDungeon",
                1240);
              v39 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                      &v80,
                      (const char (*)[48])"[CHANNELLER_SLAB] enterDungeon duplicate, uid: ");
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              *(_DWORD *)(v3 + 128) = Player::getUid(this->player_);
              v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v39,
                      (const unsigned int *)(v3 + 128));
              v41 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                      v40,
                      (const char (*)[15])" ,dungeon_id: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v41,
                (const unsigned int *)(v3 + 96));
              common::milog::MiLogStream::~MiLogStream(&v80);
              v10 = 0;
            }
            else
            {
              v42 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)dungeon_scene_ptr);
              if ( DungeonScene::getDungeonId(v42) == *(_DWORD *)(v3 + 96) )
              {
                std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)dungeon_scene_ptr);
                Scene::getSceneEntity((const Scene *const)(v3 + 272));
                LOBYTE(p_for_end) = v3 + 16;
                if ( std::operator!=<SceneEntity>(0LL, (const std::shared_ptr<SceneEntity> *)(v3 + 272)) )
                {
                  common::milog::MiLogStream::create(
                    &v80,
                    &common::milog::MiLogDefault::default_log_obj_,
                    1u,
                    "./src/player/activity/channeller_slab_activity.cpp",
                    "enterLoopDungeon",
                    1254);
                  v45 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
                          &v80,
                          (const char (*)[59])"[CHANNELLER_SLAB] scene_entity_ptr add level config, uid: ");
                  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8();
                  *(_DWORD *)(v3 + 128) = Player::getUid(this->player_);
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v45,
                    (const unsigned int *)(v3 + 128));
                  common::milog::MiLogStream::~MiLogStream(&v80);
                  __for_range = (std::vector<unsigned int> *)(v3 + 304);
                  __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 304))._M_current;
                  __for_end._M_current = std::vector<unsigned int>::end(__for_range)._M_current;
                  while ( 1 )
                  {
                    p_for_end = &__for_end;
                    if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
                      break;
                    v46 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
                    if ( *(_BYTE *)(((unsigned __int64)v46 >> 3) + 0x7FFF8000) != 0
                      && (char)(((unsigned __int8)v46 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v46 >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_load4();
                    }
                    *(_DWORD *)(v3 + 112) = *v46;
                    condition_config_ptr = data::ActivityChannellerSlabExcelConfigMgrBase::findChannellerSlabLoopDungeonConditionExcelConfig(
                                             config_mgr,
                                             *(_DWORD *)(v3 + 112));
                    if ( !condition_config_ptr )
                    {
                      common::milog::MiLogStream::create(
                        &v80,
                        &common::milog::MiLogDefault::default_log_obj_,
                        3u,
                        "./src/player/activity/channeller_slab_activity.cpp",
                        "enterLoopDungeon",
                        1261);
                      v47 = common::milog::MiLogStream::operator<<<char [91],(char *[91])0>(
                              &v80,
                              (const char (*)[91])"[CHANNELLER_SLAB] findChannellerSlabLoopDungeonConditionExcelConfig fa"
                                                  "iled, condition_id: ");
                      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v47,
                        (const unsigned int *)(v3 + 112));
                      common::milog::MiLogStream::~MiLogStream(&v80);
                      v10 = -1;
                      goto LABEL_81;
                    }
                    if ( *(_BYTE *)(((unsigned __int64)&condition_config_ptr->condition_type >> 3) + 0x7FFF8000) != 0
                      && (char)((((_BYTE)condition_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&condition_config_ptr->condition_type >> 3)
                                                                                          + 0x7FFF8000) )
                    {
                      __asan_report_load4();
                    }
                    if ( condition_config_ptr->condition_type == CHANNELLER_SLAB_CONDITION_CONFIG )
                    {
                      if ( *(_BYTE *)(((unsigned __int64)&condition_config_ptr->condition_param1 >> 3) + 0x7FFF8000) != 0
                        && *(_BYTE *)(((unsigned __int64)&condition_config_ptr->condition_param1 >> 3) + 0x7FFF8000) <= 3 )
                      {
                        __asan_report_load4();
                      }
                      *(_DWORD *)(v3 + 128) = condition_config_ptr->condition_param1;
                      ServiceBox::findService<GameserverService>();
                      GameserverService::getConfig((GameserverService *const)&v77);
                      v48 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v77);
                      level_config_vec_ptr = DungeonExcelConfigMgr::findDungeonLevelConfigVec(
                                               &v48->design_config.txt_config_mgr.dungeon_config_mgr,
                                               *(_DWORD *)(v3 + 128));
                      std::shared_ptr<Config>::~shared_ptr(&v77);
                      if ( !level_config_vec_ptr )
                      {
                        common::milog::MiLogStream::create(
                          &v80,
                          &common::milog::MiLogDefault::default_log_obj_,
                          3u,
                          "./src/player/activity/channeller_slab_activity.cpp",
                          "enterLoopDungeon",
                          1271);
                        v49 = common::milog::MiLogStream::operator<<<char [70],(char *[70])0>(
                                &v80,
                                (const char (*)[70])"[CHANNELLER_SLAB] findDungeonLevelConfigVec failed, level_config_id: ");
                        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v49,
                          (const unsigned int *)(v3 + 128));
                        common::milog::MiLogStream::~MiLogStream(&v80);
                        v10 = -1;
                        goto LABEL_81;
                      }
                      __for_range_0 = level_config_vec_ptr;
                      __for_begin_0._M_current = std::vector<data::DungeonLevelEntityConfig>::begin(level_config_vec_ptr)._M_current;
                      __for_end_0._M_current = std::vector<data::DungeonLevelEntityConfig>::end(__for_range_0)._M_current;
                      while ( __gnu_cxx::operator!=<data::DungeonLevelEntityConfig const*,std::vector<data::DungeonLevelEntityConfig>>(
                                &__for_begin_0,
                                &__for_end_0) )
                      {
                        level_config = __gnu_cxx::__normal_iterator<data::DungeonLevelEntityConfig const*,std::vector<data::DungeonLevelEntityConfig>>::operator*(&__for_begin_0);
                        common::milog::MiLogStream::create(
                          &v80,
                          &common::milog::MiLogDefault::default_log_obj_,
                          1u,
                          "./src/player/activity/channeller_slab_activity.cpp",
                          "enterLoopDungeon",
                          1277);
                        v50 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
                                &v80,
                                (const char (*)[61])"[CHANNELLER_SLAB] add init level config, level_config_name: ");
                        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                          v50,
                          &level_config->level_config_name);
                        common::milog::MiLogStream::~MiLogStream(&v80);
                        v51 = std::__shared_ptr_access<SceneEntity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneEntity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 272));
                        SceneEntity::addInitLevelConfig(v51, &level_config->level_config_name);
                        __gnu_cxx::__normal_iterator<data::DungeonLevelEntityConfig const*,std::vector<data::DungeonLevelEntityConfig>>::operator++(&__for_begin_0);
                      }
                    }
                    __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
                  }
                }
                v52 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)dungeon_scene_ptr);
                std::function<void ()(Player &,DungeonScene &,proto::DungeonSettleNotify &)>::function<ChannellerSlabActivity::enterLoopDungeon(proto::ChannellerSlabEnterLoopDungeonReq const&,proto::ChannellerSlabEnterLoopDungeonRsp &)::{lambda(Player &,DungeonScene &,proto::DungeonSettleNotify &)#1},void,void>(
                  (std::function<void(Player&,DungeonScene&,proto::DungeonSettleNotify&)> *const)&v80,
                  (ChannellerSlabActivity::enterLoopDungeon::<lambda(Player&, DungeonScene&, proto::DungeonSettleNotify&)>)p_for_end);
                DungeonScene::registerDungeonSettleCallback(v52, (DungeonSettleCallback *)&v80);
                std::function<void ()(Player &,DungeonScene &,proto::DungeonSettleNotify &)>::~function((std::function<void(Player&,DungeonScene&,proto::DungeonSettleNotify&)> *const)&v80);
                v53 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)dungeon_scene_ptr);
                std::function<void ()(Player &,DungeonScene &,Challenge &,proto::DungeonChallengeFinishNotify &)>::function<ChannellerSlabActivity::enterLoopDungeon(proto::ChannellerSlabEnterLoopDungeonReq const&,proto::ChannellerSlabEnterLoopDungeonRsp &)::{lambda(Player &,DungeonScene &,Challenge &,proto::DungeonChallengeFinishNotify &)#2},void,void>(
                  (std::function<void(Player&,DungeonScene&,Challenge&,proto::DungeonChallengeFinishNotify&)> *const)&v80,
                  (ChannellerSlabActivity::enterLoopDungeon::<lambda(Player&, DungeonScene&, Challenge&, proto::DungeonChallengeFinishNotify&)>)&v80);
                DungeonScene::registerChallengeSettleCallback(v53, (ChallengeSettleCallback *)&v80);
                std::function<void ()(Player &,DungeonScene &,Challenge &,proto::DungeonChallengeFinishNotify &)>::~function((std::function<void(Player&,DungeonScene&,Challenge&,proto::DungeonChallengeFinishNotify&)> *const)&v80);
                ChannellerSlabActivity::LoopDungeonContext::LoopDungeonContext((ChannellerSlabActivity::LoopDungeonContext *const)(v3 + 368));
                *(_DWORD *)(v3 + 368) = *(_DWORD *)(v3 + 48);
                *(_DWORD *)(v3 + 372) = *(_DWORD *)(v3 + 64);
                std::vector<unsigned int>::operator=(
                  (std::vector<unsigned int> *const)(v3 + 376),
                  (const std::vector<unsigned int> *)(v3 + 304));
                v54 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)dungeon_scene_ptr);
                isMpDungeonMode = DungeonScene::isMpDungeonMode(v54);
                ChannellerSlabActivity::fillSchemeBuffIdSet(
                  this,
                  isMpDungeonMode,
                  (std::unordered_set<unsigned int> *)(v3 + 400));
                v56 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)dungeon_scene_ptr);
                v57 = DungeonScene::isMpDungeonMode(v56);
                ChannellerSlabActivity::fillSchemeAbilityGroupVec(this, v57, (std::vector<std::string> *)(v3 + 456));
                v58 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)dungeon_scene_ptr);
                DungeonScene::setDungeonExtraData<ChannellerSlabActivity::LoopDungeonContext>(
                  v58,
                  (const ChannellerSlabActivity::LoopDungeonContext *)(v3 + 368));
                loop_dungeon_stage_data = &this->bin_data_.loop_dungeon_stage_data;
                v59 = *(_DWORD *)(v3 + 64);
                if ( *(_BYTE *)(((unsigned __int64)&this->bin_data_.loop_dungeon_stage_data.last_difficulty_id >> 3)
                              + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&this->bin_data_.loop_dungeon_stage_data.last_difficulty_id >> 3)
                              + 0x7FFF8000) <= 3 )
                {
                  __asan_report_store4(&this->bin_data_.loop_dungeon_stage_data.last_difficulty_id);
                }
                loop_dungeon_stage_data->last_difficulty_id = v59;
                loop_dungeon_data = std::map<unsigned int,ChannellerSlabActivity::LoopDungeonData>::operator[](
                                      &loop_dungeon_stage_data->dungeon_data_map,
                                      (const std::map<unsigned int,ChannellerSlabActivity::LoopDungeonData>::key_type *)(v3 + 48));
                std::vector<unsigned int>::operator=(
                  &loop_dungeon_data->last_condition_id_vec,
                  (const std::vector<unsigned int> *)(v3 + 304));
                BaseActivity::notifyClientData(this, 0);
                v10 = 0;
                ChannellerSlabActivity::LoopDungeonContext::~LoopDungeonContext((ChannellerSlabActivity::LoopDungeonContext *const)(v3 + 368));
LABEL_81:
                std::shared_ptr<SceneEntity>::~shared_ptr((std::shared_ptr<SceneEntity> *const)(v3 + 272));
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v80,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/activity/channeller_slab_activity.cpp",
                  "enterLoopDungeon",
                  1245);
                v43 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                        &v80,
                        (const char (*)[52])"[CHANNELLER_SLAB] player enter dungeon failed, uid:");
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                *(_DWORD *)(v3 + 128) = Player::getUid(this->player_);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v43,
                  (const unsigned int *)(v3 + 128));
                common::milog::MiLogStream::~MiLogStream(&v80);
                v10 = -1;
              }
            }
            std::pair<int,std::shared_ptr<DungeonScene>>::~pair(&__in);
          }
        }
        std::shared_ptr<data::DungeonEntry>::~shared_ptr((std::shared_ptr<data::DungeonEntry> *const)(v3 + 240));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v80,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/channeller_slab_activity.cpp",
          "enterLoopDungeon",
          1208);
        v13 = common::milog::MiLogStream::operator<<<char [74],(char *[74])0>(
                &v80,
                (const char (*)[74])"[CHANNELLER_SLAB] findLoopDungeonDifficultyConfig failed, dungeon_index: ");
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v13,
                (const unsigned int *)(v3 + 48));
        v15 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                v14,
                (const char (*)[18])" ,difficulty_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 64));
        common::milog::MiLogStream::~MiLogStream(&v80);
        v10 = -1;
      }
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 208));
  }
  std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v3 + 176));
LABEL_86:
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 304));
  result = v10;
  if ( v82 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8040) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8048) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8048) = -168430091;
  }
  return result;
};

// Line 1285: range 0000000014F2FD64-0000000014F2FEBE
void __cdecl ChannellerSlabActivity::enterLoopDungeon(proto::ChannellerSlabEnterLoopDungeonReq const&,proto::ChannellerSlabEnterLoopDungeonRsp &)::{lambda(Player &,DungeonScene &,proto::DungeonSettleNotify &)#1}::operator()(
        const ChannellerSlabActivity::enterLoopDungeon::<lambda(Player&, DungeonScene&, proto::DungeonSettleNotify&)> *const __closure,
        Player *player,
        DungeonScene *dungeon_scene,
        proto::DungeonSettleNotify *notify)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  ChannellerSlabActivity *v7; // r14
  proto::ChannellerSlabLoopDungeonResultInfo *v8; // rdx
  char v11[112]; // [rsp+20h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 17 activity_ptr:1287";
  *(_QWORD *)(v4 + 16) = ChannellerSlabActivity::enterLoopDungeon(proto::ChannellerSlabEnterLoopDungeonReq const&,proto::ChannellerSlabEnterLoopDungeonRsp &)::{lambda(Player &,DungeonScene &,proto::DungeonSettleNotify &)#1}::operator();
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  Player::getActivityComp(player);
  PlayerActivityComp::findOpenningActivity<ChannellerSlabActivity>((PlayerActivityComp *const)(v4 + 32));
  if ( std::operator!=<ChannellerSlabActivity>(0LL, (const std::shared_ptr<ChannellerSlabActivity> *)(v4 + 32)) )
  {
    v7 = std::__shared_ptr_access<ChannellerSlabActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ChannellerSlabActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    v8 = proto::DungeonSettleNotify::mutable_channeller_slab_loop_dungeon_result_info(notify);
    ChannellerSlabActivity::onSettleLoopDungeon(v7, dungeon_scene, v8);
  }
  std::shared_ptr<ChannellerSlabActivity>::~shared_ptr((std::shared_ptr<ChannellerSlabActivity> *const)(v4 + 32));
  if ( v11 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1294: range 0000000014F2FEC0-0000000014F30028
void __cdecl ChannellerSlabActivity::enterLoopDungeon(proto::ChannellerSlabEnterLoopDungeonReq const&,proto::ChannellerSlabEnterLoopDungeonRsp &)::{lambda(Player &,DungeonScene &,Challenge &,proto::DungeonChallengeFinishNotify &)#2}::operator()(
        const ChannellerSlabActivity::enterLoopDungeon::<lambda(Player&, DungeonScene&, Challenge&, proto::DungeonChallengeFinishNotify&)> *const __closure,
        Player *player,
        DungeonScene *dungeon_scene,
        Challenge *challenge,
        proto::DungeonChallengeFinishNotify *notify)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // r12
  ChannellerSlabActivity *v8; // r14
  proto::ChannellerSlabLoopDungeonResultInfo *v9; // rcx
  char v13[112]; // [rsp+30h] [rbp-70h] BYREF

  v5 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_0(64LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 16 17 activity_ptr:1296";
  *(_QWORD *)(v5 + 16) = ChannellerSlabActivity::enterLoopDungeon(proto::ChannellerSlabEnterLoopDungeonReq const&,proto::ChannellerSlabEnterLoopDungeonRsp &)::{lambda(Player &,DungeonScene &,Challenge &,proto::DungeonChallengeFinishNotify &)#2}::operator();
  v7 = v5 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202178560;
  Player::getActivityComp(player);
  PlayerActivityComp::findOpenningActivity<ChannellerSlabActivity>((PlayerActivityComp *const)(v5 + 32));
  if ( std::operator!=<ChannellerSlabActivity>(0LL, (const std::shared_ptr<ChannellerSlabActivity> *)(v5 + 32)) )
  {
    v8 = std::__shared_ptr_access<ChannellerSlabActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ChannellerSlabActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 32));
    v9 = proto::DungeonChallengeFinishNotify::mutable_channeller_slab_loop_dungeon_result_info(notify);
    ChannellerSlabActivity::onSettleLoopDungeonChallenge(v8, dungeon_scene, challenge, v9);
  }
  std::shared_ptr<ChannellerSlabActivity>::~shared_ptr((std::shared_ptr<ChannellerSlabActivity> *const)(v5 + 32));
  if ( v13 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1323: range 0000000014F319F0-0000000014F320B3
int32_t __cdecl ChannellerSlabActivity::takeLoopDungeonFirstPassReward(
        ChannellerSlabActivity *const this,
        const proto::ChannellerSlabLoopDungeonTakeFirstPassRewardReq *req,
        proto::ChannellerSlabLoopDungeonTakeFirstPassRewardRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v8; // rbx
  PlayerItemComp *ItemComp; // rax
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  PlayerItemComp *v13; // rax
  PlayerActivityComp *ActivityComp; // rdi
  uint32_t v15; // ecx
  uint32_t schedule_id; // edx
  unsigned int val; // [rsp+20h] [rbp-F0h] BYREF
  int32_t ret; // [rsp+24h] [rbp-ECh]
  const ActivityChannellerSlabExcelConfigMgr *config_mgr; // [rsp+28h] [rbp-E8h]
  const data::ChannellerSlabLoopDungeonExcelConfig *loop_dungeon_config_ptr; // [rsp+30h] [rbp-E0h]
  ChannellerSlabActivity::LoopDungeonData *loop_dungeon_data; // [rsp+38h] [rbp-D8h]
  common::milog::MiLogStream v24; // [rsp+40h] [rbp-D0h] BYREF
  char v25[176]; // [rsp+60h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 18 dungeon_index:1324 48 4 14 reward_id:1348 64 24 11 reason:1349";
  *(_QWORD *)(v3 + 16) = ChannellerSlabActivity::takeLoopDungeonFirstPassReward;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  *(_DWORD *)(v3 + 32) = proto::ChannellerSlabLoopDungeonTakeFirstPassRewardReq::dungeon_index(req);
  proto::ChannellerSlabLoopDungeonTakeFirstPassRewardRsp::set_dungeon_index(rsp_0, *(_DWORD *)(v3 + 32));
  config_mgr = ChannellerSlabActivity::getConfigMgr(this);
  loop_dungeon_config_ptr = data::ActivityChannellerSlabExcelConfigMgrBase::findChannellerSlabLoopDungeonExcelConfig(
                              config_mgr,
                              *(_DWORD *)(v3 + 32));
  if ( loop_dungeon_config_ptr )
  {
    loop_dungeon_data = std::map<unsigned int,ChannellerSlabActivity::LoopDungeonData>::operator[](
                          &this->bin_data_.loop_dungeon_stage_data.dungeon_data_map,
                          (const std::map<unsigned int,ChannellerSlabActivity::LoopDungeonData>::key_type *)(v3 + 32));
    if ( *(char *)(((unsigned __int64)&loop_dungeon_data->is_first_pass_reward_taken >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&loop_dungeon_data->is_first_pass_reward_taken);
    if ( loop_dungeon_data->is_first_pass_reward_taken )
    {
      result = 9132;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&loop_dungeon_data->score >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)loop_dungeon_data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&loop_dungeon_data->score >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( loop_dungeon_data->score )
      {
        if ( *(_BYTE *)(((unsigned __int64)&loop_dungeon_config_ptr->first_pass_reward_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&loop_dungeon_config_ptr->first_pass_reward_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v3 + 48) = loop_dungeon_config_ptr->first_pass_reward_id;
        ActionReason::ActionReason(
          (ActionReason *const)(v3 + 64),
          ACTION_REASON_CHANNELLER_SLAB_LOOP_DUNGEON_FIRST_PASS_REWARD,
          ITEM_LIMIT_ACTIVITY_CHANNELLER_SLAB);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        ItemComp = Player::getItemComp(this->player_);
        ret = PlayerItemComp::checkGrantReward(ItemComp, *(_DWORD *)(v3 + 48), (const ActionReason *)(v3 + 64));
        if ( ret )
        {
          common::milog::MiLogStream::create(
            &v24,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/channeller_slab_activity.cpp",
            "takeLoopDungeonFirstPassReward",
            1353);
          v10 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                  &v24,
                  (const char (*)[49])"[CHANNELLER_SLAB] checkGrantReward failed, uid: ");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
          v12 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v11,
                  (const char (*)[14])" ,reward_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream(&v24);
          result = ret;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v13 = Player::getItemComp(this->player_);
          PlayerItemComp::grantReward(v13, *(_DWORD *)(v3 + 48), (const ActionReason *)(v3 + 64), 0LL);
          if ( *(char *)(((unsigned __int64)&loop_dungeon_data->is_first_pass_reward_taken >> 3) + 0x7FFF8000) < 0 )
            __asan_report_store1(&loop_dungeon_data->is_first_pass_reward_taken);
          loop_dungeon_data->is_first_pass_reward_taken = 1;
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          ActivityComp = Player::getActivityComp(this->player_);
          v15 = *(_DWORD *)(v3 + 48);
          if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3)
                                                                + 0x7FFF8000) )
          {
            ActivityComp = (PlayerActivityComp *)&this->schedule_id_;
            __asan_report_load4();
          }
          schedule_id = this->schedule_id_;
          if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
          {
            ActivityComp = (PlayerActivityComp *)&this->activity_id_;
            __asan_report_load4();
          }
          PlayerActivityComp::logGetActivityReward(ActivityComp, this->activity_id_, schedule_id, v15);
          BaseActivity::notifyClientData(this, 0);
          result = 0;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/channeller_slab_activity.cpp",
          "takeLoopDungeonFirstPassReward",
          1344);
        v8 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
               &v24,
               (const char (*)[49])"[CHANNELLER_SLAB] loop dungeon score is 0, uid: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
        common::milog::MiLogStream::~MiLogStream(&v24);
        result = -1;
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/channeller_slab_activity.cpp",
      "takeLoopDungeonFirstPassReward",
      1331);
    v6 = common::milog::MiLogStream::operator<<<char [83],(char *[83])0>(
           &v24,
           (const char (*)[83])"[CHANNELLER_SLAB] findChannellerSlabLoopDungeonExcelConfig failed, dungeon_index: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v24);
    result = -1;
  }
  if ( v25 == (char *)v3 )
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

// Line 1366: range 0000000014F320B4-0000000014F326D8
int32_t __cdecl ChannellerSlabActivity::takeLoopDungeonScoreReward(
        ChannellerSlabActivity *const this,
        const proto::ChannellerSlabLoopDungeonTakeScoreRewardReq *req,
        proto::ChannellerSlabLoopDungeonTakeScoreRewardRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  int32_t result; // eax
  common::milog::MiLogStream *v7; // rax
  PlayerItemComp *ItemComp; // rax
  common::milog::MiLogStream *v9; // r14
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  PlayerItemComp *v12; // rax
  PlayerActivityComp *ActivityComp; // rdi
  uint32_t v14; // ecx
  uint32_t schedule_id; // edx
  unsigned int val; // [rsp+2Ch] [rbp-F4h] BYREF
  uint32_t total_score; // [rsp+30h] [rbp-F0h]
  int32_t ret; // [rsp+34h] [rbp-ECh]
  ChannellerSlabActivity::LoopDungeonStageData *loop_dungeon_stage_data; // [rsp+38h] [rbp-E8h]
  const ActivityChannellerSlabExcelConfigMgr *config_mgr; // [rsp+40h] [rbp-E0h]
  const data::ChannellerSlabLoopDungeonRewardExcelConfig *reward_config_ptr; // [rsp+48h] [rbp-D8h]
  common::milog::MiLogStream v24; // [rsp+50h] [rbp-D0h] BYREF
  char v25[176]; // [rsp+70h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 17 reward_index:1367 48 4 14 reward_id:1391 64 24 11 reason:1392";
  *(_QWORD *)(v3 + 16) = ChannellerSlabActivity::takeLoopDungeonScoreReward;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  *(_DWORD *)(v3 + 32) = proto::ChannellerSlabLoopDungeonTakeScoreRewardReq::reward_index(req);
  proto::ChannellerSlabLoopDungeonTakeScoreRewardRsp::set_reward_index(rsp_0, *(_DWORD *)(v3 + 32));
  loop_dungeon_stage_data = &this->bin_data_.loop_dungeon_stage_data;
  if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
         &this->bin_data_.loop_dungeon_stage_data.taken_reward_index_set,
         (const unsigned int *)(v3 + 32)) )
  {
    result = 9133;
  }
  else
  {
    config_mgr = ChannellerSlabActivity::getConfigMgr(this);
    reward_config_ptr = data::ActivityChannellerSlabExcelConfigMgrBase::findChannellerSlabLoopDungeonRewardExcelConfig(
                          config_mgr,
                          *(_DWORD *)(v3 + 32));
    if ( reward_config_ptr )
    {
      total_score = ChannellerSlabActivity::getLoopDungeonTotalScore(this);
      if ( *(_BYTE *)(((unsigned __int64)&reward_config_ptr->score_grade >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)reward_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&reward_config_ptr->score_grade >> 3)
                                                                         + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( total_score >= reward_config_ptr->score_grade )
      {
        if ( *(_BYTE *)(((unsigned __int64)&reward_config_ptr->reward_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&reward_config_ptr->reward_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v3 + 48) = reward_config_ptr->reward_id;
        ActionReason::ActionReason(
          (ActionReason *const)(v3 + 64),
          ACTION_REASON_CHANNELLER_SLAB_LOOP_DUNGEON_SCORE_REWARD,
          ITEM_LIMIT_ACTIVITY_CHANNELLER_SLAB);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        ItemComp = Player::getItemComp(this->player_);
        ret = PlayerItemComp::checkGrantReward(ItemComp, *(_DWORD *)(v3 + 48), (const ActionReason *)(v3 + 64));
        if ( ret )
        {
          common::milog::MiLogStream::create(
            &v24,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/channeller_slab_activity.cpp",
            "takeLoopDungeonScoreReward",
            1396);
          v9 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                 &v24,
                 (const char (*)[49])"[CHANNELLER_SLAB] checkGrantReward failed, uid: ");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
          v11 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v10,
                  (const char (*)[14])" ,reward_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream(&v24);
          result = ret;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v12 = Player::getItemComp(this->player_);
          PlayerItemComp::grantReward(v12, *(_DWORD *)(v3 + 48), (const ActionReason *)(v3 + 64), 0LL);
          std::unordered_set<unsigned int>::insert(
            &loop_dungeon_stage_data->taken_reward_index_set,
            (const std::unordered_set<unsigned int>::value_type *)(v3 + 32));
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          ActivityComp = Player::getActivityComp(this->player_);
          v14 = *(_DWORD *)(v3 + 48);
          if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3)
                                                                + 0x7FFF8000) )
          {
            ActivityComp = (PlayerActivityComp *)&this->schedule_id_;
            __asan_report_load4();
          }
          schedule_id = this->schedule_id_;
          if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
          {
            ActivityComp = (PlayerActivityComp *)&this->activity_id_;
            __asan_report_load4();
          }
          PlayerActivityComp::logGetActivityReward(ActivityComp, this->activity_id_, schedule_id, v14);
          BaseActivity::notifyClientData(this, 0);
          result = 0;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/channeller_slab_activity.cpp",
          "takeLoopDungeonScoreReward",
          1387);
        common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
          &v24,
          (const char (*)[44])"[CHANNELLER_SLAB] total_score is not enough");
        common::milog::MiLogStream::~MiLogStream(&v24);
        result = -1;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/channeller_slab_activity.cpp",
        "takeLoopDungeonScoreReward",
        1380);
      v7 = common::milog::MiLogStream::operator<<<char [88],(char *[88])0>(
             &v24,
             (const char (*)[88])"[CHANNELLER_SLAB] findChannellerSlabLoopDungeonRewardExcelConfig failed, reward_index: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v24);
      result = -1;
    }
  }
  if ( v25 == (char *)v3 )
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

// Line 1409: range 0000000014F326DA-0000000014F32D8B
int32_t __cdecl ChannellerSlabActivity::selectLoopDungeonCondition(
        ChannellerSlabActivity *const this,
        const proto::ChannellerSlabLoopDungeonSelectConditionReq *req,
        proto::ChannellerSlabLoopDungeonSelectConditionRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const google::protobuf::RepeatedField<unsigned int> *v6; // rax
  google::protobuf::RepeatedField<unsigned int> *v7; // rax
  PlayerSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v9; // r14
  int32_t v10; // r14d
  common::milog::MiLogStream *v11; // r14
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+24h] [rbp-1BCh] BYREF
  uint32_t dungeon_index; // [rsp+28h] [rbp-1B8h]
  uint32_t difficulty_id; // [rsp+2Ch] [rbp-1B4h]
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-1B0h] BYREF
  char v19[400]; // [rsp+50h] [rbp-190h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(352LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 16 18 cur_world_ptr:1432 80 24 21 condition_id_vec:1412 144 56 23 scheme_buff_id_set:1442 2"
                        "40 80 11 notify:1440";
  *(_QWORD *)(v3 + 16) = ChannellerSlabActivity::selectLoopDungeonCondition;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = 62194;
  v5[536862723] = -218959360;
  v5[536862724] = 62194;
  v5[536862726] = -218959360;
  v5[536862727] = 62194;
  v5[536862730] = -202116109;
  dungeon_index = proto::ChannellerSlabLoopDungeonSelectConditionReq::dungeon_index(req);
  difficulty_id = proto::ChannellerSlabLoopDungeonSelectConditionReq::difficulty_id(req);
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 80));
  v6 = proto::ChannellerSlabLoopDungeonSelectConditionReq::condition_id_list(req);
  common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(v6, (std::vector<unsigned int> *)(v3 + 80));
  proto::ChannellerSlabLoopDungeonSelectConditionRsp::set_dungeon_index(rsp_0, dungeon_index);
  proto::ChannellerSlabLoopDungeonSelectConditionRsp::set_difficulty_id(rsp_0, difficulty_id);
  v7 = proto::ChannellerSlabLoopDungeonSelectConditionRsp::mutable_condition_id_list(rsp_0);
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(
    (const std::vector<unsigned int> *)(v3 + 80),
    v7);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = Player::getSceneComp(this->player_);
  if ( !PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/channeller_slab_activity.cpp",
      "selectLoopDungeonCondition",
      1422);
    v9 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v18,
           (const char (*)[43])"[CHANNELLER_SLAB] not in self world, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_9:
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
    common::milog::MiLogStream::~MiLogStream(&v18);
    v10 = -1;
    goto LABEL_22;
  }
  if ( ChannellerSlabActivity::checkLoopDungeonCondition(
         this,
         dungeon_index,
         difficulty_id,
         (const std::vector<unsigned int> *)(v3 + 80)) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/channeller_slab_activity.cpp",
      "selectLoopDungeonCondition",
      1428);
    v9 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
           &v18,
           (const char (*)[58])"[CHANNELLER_SLAB] checkLoopDungeonCondition failed, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_9;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurWorld<PlayerWorld>((const PlayerSceneComp *const)(v3 + 48));
  if ( std::operator==<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v3 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/channeller_slab_activity.cpp",
      "selectLoopDungeonCondition",
      1435);
    v11 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
            &v18,
            (const char (*)[44])"[CHANNELLER_SLAB] getCurWorld failed, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
    common::milog::MiLogStream::~MiLogStream(&v18);
    v10 = -1;
  }
  else
  {
    proto::ChannellerSlabLoopDungeonChallengeInfoNotify::ChannellerSlabLoopDungeonChallengeInfoNotify((proto::ChannellerSlabLoopDungeonChallengeInfoNotify *const)(v3 + 240));
    std::unordered_set<unsigned int>::unordered_set((std::unordered_set<unsigned int> *const)(v3 + 144));
    ChannellerSlabActivity::fillSchemeBuffIdSet(this, 1, (std::unordered_set<unsigned int> *)(v3 + 144));
    ChannellerSlabActivity::fillLoopDungeonChallengeInfoNotify(
      this,
      (proto::ChannellerSlabLoopDungeonChallengeInfoNotify *)(v3 + 240),
      dungeon_index,
      difficulty_id,
      (const std::vector<unsigned int> *)(v3 + 80),
      (const std::unordered_set<unsigned int> *)(v3 + 144));
    v12 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
    World::notifyAllPlayer<proto::ChannellerSlabLoopDungeonChallengeInfoNotify>(
      v12,
      (const proto::ChannellerSlabLoopDungeonChallengeInfoNotify *)(v3 + 240),
      0);
    v10 = 0;
    std::unordered_set<unsigned int>::~unordered_set((std::unordered_set<unsigned int> *const)(v3 + 144));
    proto::ChannellerSlabLoopDungeonChallengeInfoNotify::~ChannellerSlabLoopDungeonChallengeInfoNotify((proto::ChannellerSlabLoopDungeonChallengeInfoNotify *const)(v3 + 240));
  }
  std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v3 + 48));
LABEL_22:
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 80));
  result = v10;
  if ( v19 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = -168430091;
  }
  return result;
};

// Line 1451: range 0000000014F32D8C-0000000014F336C4
int32_t __cdecl ChannellerSlabActivity::saveAssistInfo(
        ChannellerSlabActivity *const this,
        const proto::ChannellerSlabSaveAssistInfoReq *req,
        proto::ChannellerSlabSaveAssistInfoRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  proto::ChannellerSlabAssistInfo *v6; // rax
  PlayerSocialComp *SocialComp; // rcx
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  int32_t v11; // r14d
  google::protobuf::uint32 v12; // ecx
  common::milog::MiLogStream *v13; // r14
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  std::pair<std::_Rb_tree_const_iterator<std::pair<unsigned int,unsigned int> >,bool> v18; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+20h] [rbp-190h] BYREF
  uint32_t assist_avatar_level; // [rsp+24h] [rbp-18Ch]
  std::vector<ChannellerSlabActivity::AssistData>::iterator __for_begin_0; // [rsp+28h] [rbp-188h] BYREF
  std::vector<ChannellerSlabActivity::AssistData>::iterator __for_end_0; // [rsp+30h] [rbp-180h] BYREF
  google::protobuf::RepeatedPtrField<proto::ChannellerSlabAssistInfo>::const_iterator __for_begin; // [rsp+38h] [rbp-178h] BYREF
  const google::protobuf::RepeatedPtrField<proto::ChannellerSlabAssistInfo> *__for_range; // [rsp+40h] [rbp-170h]
  std::vector<ChannellerSlabActivity::AssistData> *__for_range_0; // [rsp+48h] [rbp-168h]
  ChannellerSlabActivity::AssistData *assist_data; // [rsp+50h] [rbp-160h]
  const proto::FriendBrief *friend_brief_ptr; // [rsp+58h] [rbp-158h]
  const google::protobuf::RepeatedPtrField<proto::SocialShowAvatarInfo> *__for_range_1; // [rsp+60h] [rbp-150h]
  const proto::SocialShowAvatarInfo *avatar_info; // [rsp+68h] [rbp-148h]
  const proto::ChannellerSlabAssistInfo *assist_info; // [rsp+70h] [rbp-140h]
  google::protobuf::RepeatedPtrField<proto::ChannellerSlabAssistInfo>::const_iterator __for_end; // [rsp+78h] [rbp-138h] BYREF
  common::milog::MiLogStream v34; // [rsp+80h] [rbp-130h] BYREF
  char v35[272]; // [rsp+A0h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 12 16 assist_data:1455 80 24 15 assist_vec:1452 144 48 27 assist_avatar_info_set:1464";
  *(_QWORD *)(v3 + 16) = ChannellerSlabActivity::saveAssistInfo;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862721] = 0x4000000;
  v5[536862722] = 62194;
  v5[536862723] = -218959360;
  v5[536862724] = 62194;
  v5[536862726] = -202116109;
  std::vector<ChannellerSlabActivity::AssistData>::vector((std::vector<ChannellerSlabActivity::AssistData> *const)(v3 + 80));
  __for_range = proto::ChannellerSlabSaveAssistInfoReq::assist_info_list(req);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::ChannellerSlabAssistInfo>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::ChannellerSlabAssistInfo>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::ChannellerSlabAssistInfo const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    assist_info = google::protobuf::internal::RepeatedPtrIterator<proto::ChannellerSlabAssistInfo const>::operator*(&__for_begin);
    *(_DWORD *)(v3 + 48) = 0;
    *(_DWORD *)(v3 + 52) = 0;
    *(_DWORD *)(v3 + 56) = 0;
    *(_DWORD *)(v3 + 48) = proto::ChannellerSlabAssistInfo::uid(assist_info);
    *(_DWORD *)(v3 + 52) = proto::ChannellerSlabAssistInfo::avatar_id(assist_info);
    *(_DWORD *)(v3 + 56) = proto::ChannellerSlabAssistInfo::avatar_level(assist_info);
    std::vector<ChannellerSlabActivity::AssistData>::push_back(
      (std::vector<ChannellerSlabActivity::AssistData> *const)(v3 + 80),
      (const std::vector<ChannellerSlabActivity::AssistData>::value_type *)(v3 + 48));
    v6 = proto::ChannellerSlabSaveAssistInfoRsp::add_assist_info_list(rsp_0);
    proto::ChannellerSlabAssistInfo::operator=(v6, assist_info);
    google::protobuf::internal::RepeatedPtrIterator<proto::ChannellerSlabAssistInfo const>::operator++(&__for_begin);
  }
  std::set<std::pair<unsigned int,unsigned int>>::set((std::set<std::pair<unsigned int,unsigned int>> *const)(v3 + 144));
  __for_range_0 = (std::vector<ChannellerSlabActivity::AssistData> *)(v3 + 80);
  __for_begin_0._M_current = std::vector<ChannellerSlabActivity::AssistData>::begin((std::vector<ChannellerSlabActivity::AssistData> *const)(v3 + 80))._M_current;
  __for_end_0._M_current = std::vector<ChannellerSlabActivity::AssistData>::end(__for_range_0)._M_current;
  while ( 1 )
  {
    if ( !__gnu_cxx::operator!=<ChannellerSlabActivity::AssistData *,std::vector<ChannellerSlabActivity::AssistData>>(
            &__for_begin_0,
            &__for_end_0) )
    {
      std::vector<ChannellerSlabActivity::AssistData>::operator=(
        &this->bin_data_.buff_data.assist_vec,
        (const std::vector<ChannellerSlabActivity::AssistData> *)(v3 + 80));
      ChannellerSlabActivity::adjustBuffScheme(this);
      BaseActivity::notifyClientData(this, 0);
      v11 = 0;
      goto LABEL_36;
    }
    assist_data = __gnu_cxx::__normal_iterator<ChannellerSlabActivity::AssistData *,std::vector<ChannellerSlabActivity::AssistData>>::operator*(&__for_begin_0);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    SocialComp = Player::getSocialComp(this->player_);
    if ( *(_BYTE *)(((unsigned __int64)assist_data >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)assist_data & 7) + 3) >= *(_BYTE *)(((unsigned __int64)assist_data >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    friend_brief_ptr = PlayerSocialComp::findFriendBrief(SocialComp, assist_data->uid);
    if ( !friend_brief_ptr )
      break;
    assist_avatar_level = 0;
    __for_range_1 = proto::FriendBrief::show_avatar_info_list(friend_brief_ptr);
    __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::SocialShowAvatarInfo>::begin(__for_range_1).it_;
    __for_end.it_ = google::protobuf::RepeatedPtrField<proto::SocialShowAvatarInfo>::end(__for_range_1).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<proto::SocialShowAvatarInfo const>::operator!=(
              (const google::protobuf::internal::RepeatedPtrIterator<const proto::SocialShowAvatarInfo> *const)&__for_begin,
              (const google::protobuf::internal::RepeatedPtrIterator<const proto::SocialShowAvatarInfo>::iterator *)&__for_end) )
    {
      avatar_info = google::protobuf::internal::RepeatedPtrIterator<proto::SocialShowAvatarInfo const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::SocialShowAvatarInfo> *const)&__for_begin);
      v12 = proto::SocialShowAvatarInfo::avatar_id(avatar_info);
      if ( *(_BYTE *)(((unsigned __int64)&assist_data->avatar_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)assist_data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&assist_data->avatar_id >> 3)
                                                                  + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( v12 == assist_data->avatar_id )
      {
        assist_avatar_level = proto::SocialShowAvatarInfo::level(avatar_info);
        break;
      }
      google::protobuf::internal::RepeatedPtrIterator<proto::SocialShowAvatarInfo const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::SocialShowAvatarInfo> *const)&__for_begin);
    }
    if ( !assist_avatar_level )
    {
      common::milog::MiLogStream::create(
        &v34,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/channeller_slab_activity.cpp",
        "saveAssistInfo",
        1485);
      v13 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
              &v34,
              (const char (*)[50])"[CHANNELLER_SLAB] assist avatar is invalid, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
LABEL_27:
      val = Player::getUid(this->player_);
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      v15 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v14, (const char (*)[15])" ,assist uid: ");
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &assist_data->uid);
      v17 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              v16,
              (const char (*)[21])" ,assist avatar id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &assist_data->avatar_id);
      common::milog::MiLogStream::~MiLogStream(&v34);
      v11 = -1;
      goto LABEL_36;
    }
    __for_end.it_ = (void *const *)std::make_pair<unsigned int &,unsigned int &>(
                                     &assist_data->uid,
                                     &assist_data->avatar_id);
    v18 = std::set<std::pair<unsigned int,unsigned int>>::emplace<std::pair<unsigned int,unsigned int>>(
            (std::set<std::pair<unsigned int,unsigned int>> *const)(v3 + 144),
            (std::pair<unsigned int,unsigned int> *)&__for_end,
            (std::pair<unsigned int,unsigned int> *)&__for_end);
    if ( !v18.second )
    {
      common::milog::MiLogStream::create(
        &v34,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/channeller_slab_activity.cpp",
        "saveAssistInfo",
        1492);
      v13 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
              &v34,
              (const char (*)[48])"[CHANNELLER_SLAB] assist avatar repeated, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      goto LABEL_27;
    }
    if ( *(_BYTE *)(((unsigned __int64)&assist_data->avatar_level >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)assist_data + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&assist_data->avatar_level >> 3)
                                                                + 0x7FFF8000) )
    {
      __asan_report_store4(&assist_data->avatar_level);
    }
    assist_data->avatar_level = assist_avatar_level;
    __gnu_cxx::__normal_iterator<ChannellerSlabActivity::AssistData *,std::vector<ChannellerSlabActivity::AssistData>>::operator++(&__for_begin_0);
  }
  common::milog::MiLogStream::create(
    &v34,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/activity/channeller_slab_activity.cpp",
    "saveAssistInfo",
    1470);
  v8 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
         &v34,
         (const char (*)[50])"[CHANNELLER_SLAB] friend_brief_ptr is null, uid: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
  v10 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v9, (const char (*)[15])" ,assist uid: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &assist_data->uid);
  common::milog::MiLogStream::~MiLogStream(&v34);
  v11 = -1;
LABEL_36:
  std::set<std::pair<unsigned int,unsigned int>>::~set((std::set<std::pair<unsigned int,unsigned int>> *const)(v3 + 144));
  std::vector<ChannellerSlabActivity::AssistData>::~vector((std::vector<ChannellerSlabActivity::AssistData> *const)(v3 + 80));
  result = v11;
  if ( v35 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
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
  return result;
};

// Line 1509: range 0000000014F336C6-0000000014F33B08
__int64 __fastcall ChannellerSlabActivity::getLoopDungeonChallengeScore(
        const ChannellerSlabActivity *const this,
        uint32_t dungeon_index,
        uint32_t difficulty_id,
        const std::vector<unsigned int> *condition_id_vec)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  __int64 result; // rax
  uint32_t *v11; // rdx
  float condition_total_score; // [rsp+2Ch] [rbp-E4h]
  float score_ratio; // [rsp+30h] [rbp-E0h]
  int32_t challenge_score; // [rsp+38h] [rbp-D8h]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+40h] [rbp-D0h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+48h] [rbp-C8h] BYREF
  const ActivityChannellerSlabExcelConfigMgr *config_mgr; // [rsp+50h] [rbp-C0h]
  const data::ChannellerSlabLoopDungeonDifficultyExcelConfig *difficulty_config_ptr; // [rsp+58h] [rbp-B8h]
  const std::vector<unsigned int> *__for_range; // [rsp+60h] [rbp-B0h]
  const data::ChannellerSlabLoopDungeonConditionExcelConfig *condition_config_ptr; // [rsp+68h] [rbp-A8h]
  common::milog::MiLogStream v23; // [rsp+70h] [rbp-A0h] BYREF
  char v24[128]; // [rsp+90h] [rbp-80h] BYREF

  v4 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 18 dungeon_index:1508 64 4 18 difficulty_id:1508";
  *(_QWORD *)(v4 + 16) = ChannellerSlabActivity::getLoopDungeonChallengeScore;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202116348;
  *(_DWORD *)(v4 + 48) = dungeon_index;
  *(_DWORD *)(v4 + 64) = difficulty_id;
  config_mgr = ChannellerSlabActivity::getConfigMgr(this);
  difficulty_config_ptr = ActivityChannellerSlabExcelConfigMgr::findLoopDungeonDifficultyConfig(
                            config_mgr,
                            *(_DWORD *)(v4 + 48),
                            *(_DWORD *)(v4 + 64));
  if ( difficulty_config_ptr )
  {
    condition_total_score = 0.0;
    __for_range = condition_id_vec;
    __for_begin._M_current = std::vector<unsigned int>::begin(condition_id_vec)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(condition_id_vec)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v11 = (uint32_t *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      condition_config_ptr = data::ActivityChannellerSlabExcelConfigMgrBase::findChannellerSlabLoopDungeonConditionExcelConfig(
                               config_mgr,
                               *v11);
      if ( condition_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&condition_config_ptr->score >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)condition_config_ptr + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&condition_config_ptr->score >> 3)
                                                                              + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        condition_total_score = (float)condition_config_ptr->score + condition_total_score;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    if ( *(_BYTE *)(((unsigned __int64)&difficulty_config_ptr->score_ratio >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)difficulty_config_ptr + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&difficulty_config_ptr->score_ratio >> 3)
                                                                           + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    score_ratio = difficulty_config_ptr->score_ratio;
    if ( *(_BYTE *)(((unsigned __int64)&difficulty_config_ptr->base_score >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&difficulty_config_ptr->base_score >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    challenge_score = (int)std::ceil(
                             (float)((float)(int)difficulty_config_ptr->base_score + condition_total_score)
                           * score_ratio);
    result = 0LL;
    if ( challenge_score >= 0 )
      result = (unsigned int)challenge_score;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/channeller_slab_activity.cpp",
      "getLoopDungeonChallengeScore",
      1514);
    v7 = common::milog::MiLogStream::operator<<<char [74],(char *[74])0>(
           &v23,
           (const char (*)[74])"[CHANNELLER_SLAB] findLoopDungeonDifficultyConfig failed, dungeon_index: ");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 48));
    v9 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v8, (const char (*)[18])" ,difficulty_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 64));
    common::milog::MiLogStream::~MiLogStream(&v23);
    result = 0LL;
  }
  if ( v24 == (char *)v4 )
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
  return result;
};

// Line 1535: range 0000000014F33B0A-0000000014F33BAE
void __cdecl ChannellerSlabActivity::fillLoopDungeonChallengeInfoNotify(
        ChannellerSlabActivity *const this,
        proto::ChannellerSlabLoopDungeonChallengeInfoNotify *notify,
        uint32_t dungeon_index,
        uint32_t difficulty_id,
        const std::vector<unsigned int> *condition_id_vec,
        const std::unordered_set<unsigned int> *scheme_buff_id_set)
{
  google::protobuf::RepeatedField<unsigned int> *v6; // rdx
  google::protobuf::RepeatedField<unsigned int> *v7; // rdx
  google::protobuf::uint32 LoopDungeonChallengeScore; // edx

  proto::ChannellerSlabLoopDungeonChallengeInfoNotify::set_dungeon_index(notify, dungeon_index);
  proto::ChannellerSlabLoopDungeonChallengeInfoNotify::set_difficulty_id(notify, difficulty_id);
  v6 = proto::ChannellerSlabLoopDungeonChallengeInfoNotify::mutable_condition_id_list(notify);
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(condition_id_vec, v6);
  v7 = proto::ChannellerSlabLoopDungeonChallengeInfoNotify::mutable_scheme_buff_id_list(notify);
  common::tools::MiscUtils::setToRepeated<std::unordered_set<unsigned int>,unsigned int>(scheme_buff_id_set, v7);
  LoopDungeonChallengeScore = ChannellerSlabActivity::getLoopDungeonChallengeScore(
                                this,
                                dungeon_index,
                                difficulty_id,
                                condition_id_vec);
  proto::ChannellerSlabLoopDungeonChallengeInfoNotify::set_challenge_score(notify, LoopDungeonChallengeScore);
};

// Line 1544: range 0000000014F33BB0-0000000014F33C6D
void __cdecl ChannellerSlabActivity::fillSchemeBuffIdSet(
        ChannellerSlabActivity *const this,
        bool is_mp,
        std::unordered_set<unsigned int> *scheme_buff_id_set)
{
  std::unordered_map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-38h] BYREF
  std::unordered_map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-30h] BYREF
  const ChannellerSlabActivity::BuffScheme *buff_scheme; // [rsp+38h] [rbp-28h]
  const std::unordered_map<unsigned int,unsigned int> *__for_range; // [rsp+40h] [rbp-20h]
  const std::pair<unsigned int const,unsigned int> *v8; // [rsp+48h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *_; // [rsp+50h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *buff_id; // [rsp+58h] [rbp-8h]

  buff_scheme = ChannellerSlabActivity::getBuffScheme(this, is_mp);
  __for_range = &buff_scheme->slot_map;
  __for_begin._M_cur = std::unordered_map<unsigned int,unsigned int>::begin(&buff_scheme->slot_map)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,unsigned int>::end(&buff_scheme->slot_map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(&__for_begin, &__for_end) )
  {
    v8 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,unsigned int>(v8);
    buff_id = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v8);
    std::unordered_set<unsigned int>::insert(scheme_buff_id_set, buff_id);
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++(&__for_begin);
  }
};

// Line 1553: range 0000000014F33C6E-0000000014F33D9D
void __cdecl ChannellerSlabActivity::fillSchemeAbilityGroupVec(
        ChannellerSlabActivity *const this,
        bool is_mp,
        std::vector<std::string> *scheme_ability_group_vec)
{
  const ActivityChannellerSlabExcelConfigMgr *v3; // rcx
  std::unordered_map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-48h] BYREF
  std::unordered_map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-40h] BYREF
  const ActivityChannellerSlabExcelConfigMgr *config_mgr; // [rsp+38h] [rbp-38h]
  const ChannellerSlabActivity::BuffScheme *buff_scheme; // [rsp+40h] [rbp-30h]
  const std::unordered_map<unsigned int,unsigned int> *__for_range; // [rsp+48h] [rbp-28h]
  const std::pair<unsigned int const,unsigned int> *v10; // [rsp+50h] [rbp-20h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *_; // [rsp+58h] [rbp-18h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *buff_id; // [rsp+60h] [rbp-10h]
  const data::ChannellerSlabBuffExcelConfig *buff_config_ptr; // [rsp+68h] [rbp-8h]

  config_mgr = ChannellerSlabActivity::getConfigMgr(this);
  buff_scheme = ChannellerSlabActivity::getBuffScheme(this, is_mp);
  __for_range = &buff_scheme->slot_map;
  __for_begin._M_cur = std::unordered_map<unsigned int,unsigned int>::begin(&buff_scheme->slot_map)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,unsigned int>::end(&buff_scheme->slot_map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(&__for_begin, &__for_end) )
  {
    v10 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,unsigned int>(v10);
    buff_id = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v10);
    v3 = config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)buff_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)buff_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)buff_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    buff_config_ptr = data::ActivityChannellerSlabExcelConfigMgrBase::findChannellerSlabBuffExcelConfig(v3, *buff_id);
    if ( buff_config_ptr )
      std::vector<std::string>::push_back(scheme_ability_group_vec, &buff_config_ptr->ability_group_name);
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++(&__for_begin);
  }
};

// Line 1567: range 0000000014F33D9E-0000000014F34583
__int64 __fastcall ChannellerSlabActivity::checkLoopDungeonCondition(
        ChannellerSlabActivity *const this,
        uint32_t dungeon_index,
        uint32_t difficulty_id,
        const std::vector<unsigned int> *condition_id_vec)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  unsigned int v8; // r14d
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v16; // rax
  common::milog::MiLogStream *v17; // rax
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v18; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // r14
  __int64 result; // rax
  unsigned int val; // [rsp+2Ch] [rbp-164h] BYREF
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+30h] [rbp-160h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+38h] [rbp-158h] BYREF
  const ActivityChannellerSlabExcelConfigMgr *config_mgr; // [rsp+40h] [rbp-150h]
  const std::vector<unsigned int> *__for_range; // [rsp+50h] [rbp-140h]
  const data::ChannellerSlabLoopDungeonConditionExcelConfig *condition_config_ptr; // [rsp+58h] [rbp-138h]
  common::milog::MiLogStream v32; // [rsp+60h] [rbp-130h] BYREF
  char v33[272]; // [rsp+80h] [rbp-110h] BYREF

  v4 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(224LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 32 4 17 condition_id:1578 48 4 18 dungeon_index:1566 64 48 21 exclusive_id_set:1576 144 48 21 "
                        "condition_id_set:1577";
  *(_QWORD *)(v4 + 16) = ChannellerSlabActivity::checkLoopDungeonCondition;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862723] = -219021312;
  v6[536862724] = 62194;
  v6[536862726] = -202116109;
  *(_DWORD *)(v4 + 48) = dungeon_index;
  config_mgr = ChannellerSlabActivity::getConfigMgr(this);
  if ( data::ActivityChannellerSlabExcelConfigMgrBase::findChannellerSlabLoopDungeonExcelConfig(
         config_mgr,
         *(_DWORD *)(v4 + 48)) )
  {
    std::set<unsigned int>::set((std::set<unsigned int> *const)(v4 + 64));
    std::set<unsigned int>::set((std::set<unsigned int> *const)(v4 + 144));
    __for_range = condition_id_vec;
    __for_begin._M_current = std::vector<unsigned int>::begin(condition_id_vec)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(condition_id_vec)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v9 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v4 + 32) = *v9;
      condition_config_ptr = data::ActivityChannellerSlabExcelConfigMgrBase::findChannellerSlabLoopDungeonConditionExcelConfig(
                               config_mgr,
                               *(_DWORD *)(v4 + 32));
      if ( !condition_config_ptr )
      {
        common::milog::MiLogStream::create(
          &v32,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/channeller_slab_activity.cpp",
          "checkLoopDungeonCondition",
          1583);
        v10 = common::milog::MiLogStream::operator<<<char [91],(char *[91])0>(
                &v32,
                (const char (*)[91])"[CHANNELLER_SLAB] findChannellerSlabLoopDungeonConditionExcelConfig failed, condition_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v4 + 32));
        common::milog::MiLogStream::~MiLogStream(&v32);
        v8 = -1;
        goto LABEL_32;
      }
      if ( !ActivityChannellerSlabExcelConfigMgr::isLoopDungeonConditionIdAvailable(
              config_mgr,
              *(_DWORD *)(v4 + 48),
              *(_DWORD *)(v4 + 32)) )
      {
        common::milog::MiLogStream::create(
          &v32,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/channeller_slab_activity.cpp",
          "checkLoopDungeonCondition",
          1590);
        v11 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                &v32,
                (const char (*)[50])"[CHANNELLER_SLAB] condition is unavailable, uid: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
        v13 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                v12,
                (const char (*)[18])" ,dungeon_index: ");
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v13,
                (const unsigned int *)(v4 + 48));
        v15 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                v14,
                (const char (*)[17])" ,condition_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v4 + 32));
        common::milog::MiLogStream::~MiLogStream(&v32);
        v8 = -1;
        goto LABEL_32;
      }
      v16 = std::set<unsigned int>::emplace<unsigned int &>(
              (std::set<unsigned int> *const)(v4 + 144),
              (unsigned int *)(v4 + 32),
              (unsigned int *)(v4 + 32));
      if ( !v16.second )
      {
        common::milog::MiLogStream::create(
          &v32,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/channeller_slab_activity.cpp",
          "checkLoopDungeonCondition",
          1598);
        v17 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
                &v32,
                (const char (*)[58])"[CHANNELLER_SLAB] condition_id duplicated, condition_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v4 + 32));
        common::milog::MiLogStream::~MiLogStream(&v32);
        v8 = -1;
        goto LABEL_32;
      }
      if ( *(_BYTE *)(((unsigned __int64)&condition_config_ptr->exclusive_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&condition_config_ptr->exclusive_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( condition_config_ptr->exclusive_id )
      {
        v18 = std::set<unsigned int>::emplace<unsigned int const&>(
                (std::set<unsigned int> *const)(v4 + 64),
                &condition_config_ptr->exclusive_id,
                &condition_config_ptr->exclusive_id);
        if ( !v18.second )
        {
          common::milog::MiLogStream::create(
            &v32,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/channeller_slab_activity.cpp",
            "checkLoopDungeonCondition",
            1606);
          v20 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
                  &v32,
                  (const char (*)[58])"[CHANNELLER_SLAB] exclusive_id duplicated, exclusive_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v20,
            &condition_config_ptr->exclusive_id);
          common::milog::MiLogStream::~MiLogStream(&v32);
          v8 = -1;
          goto LABEL_32;
        }
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    if ( (unsigned int)ChannellerSlabActivity::getLoopDungeonChallengeScore(
                         this,
                         *(_DWORD *)(v4 + 48),
                         difficulty_id,
                         condition_id_vec) )
    {
      v8 = 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v32,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/channeller_slab_activity.cpp",
        "checkLoopDungeonCondition",
        1614);
      v21 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
              &v32,
              (const char (*)[58])"[CHANNELLER_SLAB] challenge_score must more than 0, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &val);
      common::milog::MiLogStream::~MiLogStream(&v32);
      v8 = -1;
    }
LABEL_32:
    std::set<unsigned int>::~set((std::set<unsigned int> *const)(v4 + 144));
    std::set<unsigned int>::~set((std::set<unsigned int> *const)(v4 + 64));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v32,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/channeller_slab_activity.cpp",
      "checkLoopDungeonCondition",
      1572);
    v7 = common::milog::MiLogStream::operator<<<char [83],(char *[83])0>(
           &v32,
           (const char (*)[83])"[CHANNELLER_SLAB] findChannellerSlabLoopDungeonExcelConfig failed, dungeon_index: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream(&v32);
    v8 = -1;
  }
  result = v8;
  if ( v33 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF800C) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = 0;
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

// Line 1622: range 0000000014F34584-0000000014F346B6
bool __cdecl ChannellerSlabActivity::isLoopDungeonConditionTypeSelected(
        ChannellerSlabActivity *const this,
        const std::vector<unsigned int> *condition_id_vec,
        data::ChannellerSlabCondition condition_type)
{
  uint32_t *v3; // rdx
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-28h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-20h] BYREF
  const ActivityChannellerSlabExcelConfigMgr *config_mgr; // [rsp+38h] [rbp-18h]
  const std::vector<unsigned int> *__for_range; // [rsp+40h] [rbp-10h]
  const data::ChannellerSlabLoopDungeonConditionExcelConfig *condition_config_ptr; // [rsp+48h] [rbp-8h]

  config_mgr = ChannellerSlabActivity::getConfigMgr(this);
  __for_range = condition_id_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(condition_id_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(condition_id_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v3 = (uint32_t *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    condition_config_ptr = data::ActivityChannellerSlabExcelConfigMgrBase::findChannellerSlabLoopDungeonConditionExcelConfig(
                             config_mgr,
                             *v3);
    if ( condition_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&condition_config_ptr->condition_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)condition_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&condition_config_ptr->condition_type >> 3)
                                                                            + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( condition_type == condition_config_ptr->condition_type )
        return 1;
    }
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 1639: range 0000000014F346B8-0000000014F34929
__int64 __fastcall ChannellerSlabActivity::checkAddToken(ChannellerSlabActivity *const this, uint32_t num)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  __int64 result; // rax
  common::milog::MiLogStream v10; // [rsp+10h] [rbp-80h] BYREF
  char v11[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 8 num:1638";
  *(_QWORD *)(v2 + 16) = ChannellerSlabActivity::checkAddToken;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = num;
  if ( *(_DWORD *)(v2 + 32) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->bin_data_.tokens >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->bin_data_.tokens >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( this->bin_data_.tokens && *(_DWORD *)(v2 + 32) + this->bin_data_.tokens < *(_DWORD *)(v2 + 32) )
      goto LABEL_14;
  }
  if ( *(_DWORD *)(v2 + 32) )
    goto LABEL_15;
  if ( *(_BYTE *)(((unsigned __int64)&this->bin_data_.tokens >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->bin_data_.tokens >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->bin_data_.tokens || *(_DWORD *)(v2 + 32) + this->bin_data_.tokens <= *(_DWORD *)(v2 + 32) )
  {
LABEL_15:
    result = 0LL;
  }
  else
  {
LABEL_14:
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/channeller_slab_activity.cpp",
      "checkAddToken",
      1642);
    v5 = common::milog::MiLogStream::operator<<<ChannellerSlabActivity,(ChannellerSlabActivity*)0>(&v10, this);
    v6 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           v5,
           (const char (*)[28])" token over flow, cur num: ");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->bin_data_.tokens);
    v8 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v7, (const char (*)[12])" ,add num: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v10);
    result = 9137LL;
  }
  if ( v11 == (char *)v2 )
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

// Line 1650: range 0000000014F3492A-0000000014F34CFD
int32_t __cdecl ChannellerSlabActivity::addToken(
        ChannellerSlabActivity *const this,
        uint32_t num,
        const ActionReason *reason,
        bool is_notify)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  int32_t v7; // r14d
  PlayerBasicComp *BasicComp; // rax
  SelectType v9; // edx
  PlayerItemComp *ItemComp; // rdi
  data::ItemLimitType vptr_PlayerCompBase_high; // ecx
  uint32_t vptr_PlayerCompBase; // r8d
  int32_t result; // eax
  std::string v14; // [rsp+0h] [rbp-C0h]
  PlayerItemComp *reasona; // [rsp+8h] [rbp-B8h]
  bool is_notifya; // [rsp+10h] [rbp-B0h]
  unsigned int numa; // [rsp+14h] [rbp-ACh]
  ChannellerSlabActivity *thisa; // [rsp+18h] [rbp-A8h]
  int32_t ret; // [rsp+28h] [rbp-98h]
  unsigned int old_token; // [rsp+2Ch] [rbp-94h]
  std::string v21; // [rsp+30h] [rbp-90h] BYREF
  char v22[112]; // [rsp+50h] [rbp-70h] BYREF

  *(&v14._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  HIDWORD(v14._anon_0._M_allocated_capacity) = num;
  v14._M_string_length = (std::string::size_type)reason;
  v14._anon_0._M_local_buf[0] = is_notify;
  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 1 23 log_context_holder:1657";
  *(_QWORD *)(v4 + 16) = ChannellerSlabActivity::addToken;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116351;
  ret = ChannellerSlabActivity::checkAddToken(this, num);
  if ( ret )
  {
    v7 = ret;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    BasicComp = Player::getBasicComp(this->player_);
    PlayerBasicComp::getNextTransNo[abi:cxx11](&v21, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 32), 0x67u, v14);
    std::string::~string(&v21);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->bin_data_.tokens >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&thisa->bin_data_.tokens >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    old_token = thisa->bin_data_.tokens;
    v9 = SAFE_ADD<unsigned int,unsigned int>(old_token, numa);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->bin_data_.tokens >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&thisa->bin_data_.tokens >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&thisa->bin_data_.tokens);
    }
    thisa->bin_data_.tokens = v9;
    if ( is_notifya )
      BaseActivity::notifyClientData(thisa, 0);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    ItemComp = Player::getItemComp(thisa->player_);
    if ( *(_BYTE *)((((unsigned __int64)&reasona->_vptr_PlayerCompBase + 4) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)reasona + 4) & 7) + 3) >= *(_BYTE *)((((unsigned __int64)&reasona->_vptr_PlayerCompBase + 4) >> 3)
                                                            + 0x7FFF8000) )
    {
      ItemComp = (PlayerItemComp *)((char *)&reasona->_vptr_PlayerCompBase + 4);
      __asan_report_load4();
    }
    vptr_PlayerCompBase_high = HIDWORD(reasona->_vptr_PlayerCompBase);
    if ( *(_BYTE *)(((unsigned __int64)reasona >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)reasona & 7) + 3) >= *(_BYTE *)(((unsigned __int64)reasona >> 3) + 0x7FFF8000) )
    {
      ItemComp = reasona;
      __asan_report_load4();
    }
    vptr_PlayerCompBase = (uint32_t)reasona->_vptr_PlayerCompBase;
    if ( *(_BYTE *)(((unsigned __int64)&thisa->bin_data_.tokens >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&thisa->bin_data_.tokens >> 3) + 0x7FFF8000) <= 3 )
    {
      ItemComp = (PlayerItemComp *)&thisa->bin_data_.tokens;
      __asan_report_load4();
    }
    PlayerItemComp::logPlayerAddCoin(
      ItemComp,
      ITEM_VIRTUAL_CHANNELLER_SLAB_TOKEN,
      old_token,
      thisa->bin_data_.tokens,
      vptr_PlayerCompBase,
      vptr_PlayerCompBase_high,
      0);
    v7 = 0;
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 32));
  }
  result = v7;
  if ( v22 == (char *)v4 )
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

// Line 1672: range 0000000014F34CFE-0000000014F34ED8
__int64 __fastcall ChannellerSlabActivity::checkSubToken(const ChannellerSlabActivity *const this, uint32_t num)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  __int64 result; // rax
  common::milog::MiLogStream v10; // [rsp+10h] [rbp-80h] BYREF
  char v11[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 8 num:1671";
  *(_QWORD *)(v2 + 16) = ChannellerSlabActivity::checkSubToken;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = num;
  if ( *(_BYTE *)(((unsigned __int64)&this->bin_data_.tokens >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->bin_data_.tokens >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->bin_data_.tokens >= *(_DWORD *)(v2 + 32) )
  {
    result = 0LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/channeller_slab_activity.cpp",
      "checkSubToken",
      1675);
    v5 = common::milog::MiLogStream::operator<<<ChannellerSlabActivity,(ChannellerSlabActivity*)0>(&v10, this);
    v6 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           v5,
           (const char (*)[29])" token not enough, cur num: ");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->bin_data_.tokens);
    v8 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v7, (const char (*)[11])" sub num: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v10);
    result = 9138LL;
  }
  if ( v11 == (char *)v2 )
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

// Line 1683: range 0000000014F34EDA-0000000014F3521F
int32_t __cdecl ChannellerSlabActivity::subToken(
        ChannellerSlabActivity *const this,
        uint32_t num,
        const SubItemReason *reason,
        bool is_notify)
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
  bool is_notifya; // [rsp+10h] [rbp-B0h]
  uint32_t numa; // [rsp+14h] [rbp-ACh]
  ChannellerSlabActivity *thisa; // [rsp+18h] [rbp-A8h]
  int32_t ret; // [rsp+28h] [rbp-98h]
  uint32_t old_token; // [rsp+2Ch] [rbp-94h]
  std::string v19; // [rsp+30h] [rbp-90h] BYREF
  char v20[112]; // [rsp+50h] [rbp-70h] BYREF

  *(&v12._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  HIDWORD(v12._anon_0._M_allocated_capacity) = num;
  v12._M_string_length = (std::string::size_type)reason;
  v12._anon_0._M_local_buf[0] = is_notify;
  v4 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 1 23 log_context_holder:1690";
  *(_QWORD *)(v4 + 16) = ChannellerSlabActivity::subToken;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116351;
  ret = ChannellerSlabActivity::checkSubToken(this, num);
  if ( ret )
  {
    v7 = ret;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    BasicComp = Player::getBasicComp(this->player_);
    PlayerBasicComp::getNextTransNo[abi:cxx11](&v19, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 32), 0x67u, v12);
    std::string::~string(&v19);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->bin_data_.tokens >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&thisa->bin_data_.tokens >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    old_token = thisa->bin_data_.tokens;
    thisa->bin_data_.tokens = old_token - numa;
    if ( is_notifya )
      BaseActivity::notifyActivityCoinInfo(thisa);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    ItemComp = Player::getItemComp(thisa->player_);
    if ( *(_BYTE *)(((unsigned __int64)reasona >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)reasona & 7) + 3) >= *(_BYTE *)(((unsigned __int64)reasona >> 3) + 0x7FFF8000) )
    {
      ItemComp = reasona;
      __asan_report_load4();
    }
    vptr_PlayerCompBase = (uint32_t)reasona->_vptr_PlayerCompBase;
    if ( *(_BYTE *)(((unsigned __int64)&thisa->bin_data_.tokens >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&thisa->bin_data_.tokens >> 3) + 0x7FFF8000) <= 3 )
    {
      ItemComp = (PlayerItemComp *)&thisa->bin_data_.tokens;
      __asan_report_load4();
    }
    PlayerItemComp::logPlayerAddCoin(
      ItemComp,
      ITEM_VIRTUAL_CHANNELLER_SLAB_TOKEN,
      old_token,
      thisa->bin_data_.tokens,
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

// Line 1703: range 0000000014F35220-0000000014F35231
int32_t __cdecl ChannellerSlabActivity::checkEnterDungeon(ChannellerSlabActivity *const this, uint32_t dungeon_id)
{
  return 9136;
};

// Line 1709: range 0000000014F35232-0000000014F35255
void __cdecl ChannellerSlabActivity::onObtainAvatarEvent(
        ChannellerSlabActivity *const this,
        const ObtainAvatarEvent *event)
{
  BaseActivity::notifyClientData(this, 0);
};

// Line 1714: range 0000000014F35256-0000000014F35279
void __cdecl ChannellerSlabActivity::onAvatarLevelUpEvent(
        ChannellerSlabActivity *const this,
        const AvatarLevelupEvent *event)
{
  BaseActivity::notifyClientData(this, 0);
};

// Line 1719: range 0000000014F3527A-0000000014F35DD2
void __cdecl ChannellerSlabActivity::onChallengeBeginEvent(
        ChannellerSlabActivity *const this,
        const ChallengeBeginEvent *event)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t difficulty_id; // edx
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  uint32_t challenge_index; // ecx
  uint32_t v12; // edi
  Group *v13; // rax
  ChallengeComp *ChallengeComp; // rcx
  common::milog::MiLogStream *v15; // rdx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyChannellerSlabLoopDungeonChallengeBegin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // r14
  DungeonScene *v22; // rax
  const std::string *v23; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyChannellerSlabLoopDungeonChallengeBegin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  uint32_t DungeonId; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyChannellerSlabLoopDungeonChallengeBegin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // r14
  std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyChannellerSlabLoopDungeonChallengeBegin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyChannellerSlabLoopDungeonChallengeBegin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rcx
  Player *player; // r14
  std::string eventa; // [rsp+0h] [rbp-260h]
  const ChallengeBeginEvent *eventb; // [rsp+0h] [rbp-260h]
  ChannellerSlabActivity *thisa; // [rsp+8h] [rbp-258h]
  ChannellerSlabActivity::LoopDungeonContext *dungeon_context; // [rsp+20h] [rbp-240h]
  const data::ChannellerSlabLoopDungeonDifficultyExcelConfig *difficulty_config_ptr; // [rsp+28h] [rbp-238h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+30h] [rbp-230h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+40h] [rbp-220h] BYREF
  common::milog::MiLogStream v39; // [rsp+50h] [rbp-210h] BYREF
  char v40[496]; // [rsp+70h] [rbp-1F0h] BYREF

  eventa._M_string_length = (std::string::size_type)this;
  eventa._M_dataplus._M_p = (std::string::pointer)event;
  v2 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(448LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 1 11 holder:1771 48 16 18 cur_scene_ptr:1720 80 16 22 dungeon_scene_ptr:1726 112 16 14 grou"
                        "p_ptr:1754 144 16 18 challenge_ptr:1760 176 16 12 log_ptr:1772 208 176 13 data_opt:1735";
  *(_QWORD *)(v2 + 16) = ChannellerSlabActivity::onChallengeBeginEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61953;
  v4[536862722] = 62194;
  v4[536862723] = 62194;
  v4[536862724] = 62194;
  v4[536862725] = 62194;
  v4[536862726] = 62194;
  v4[536862732] = -202116109;
  v4[536862733] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 48));
  if ( !std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 48)) )
  {
    std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
    toPtr<DungeonScene,Scene>((Scene *)(v2 + 80));
    if ( !std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v2 + 80)) )
    {
      *(&eventa._anon_0._M_allocated_capacity + 1) = (std::string::size_type)ChannellerSlabActivity::getConfigMgr(this);
      v5 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
      if ( DungeonScene::getDungeonType(v5) == DUNGEON_CHANNELLER_SLAB_LOOP )
      {
        v6 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
        DungeonScene::getDungeonExtraData<ChannellerSlabActivity::LoopDungeonContext>(
          (std::optional<ChannellerSlabActivity::LoopDungeonContext> *)(v2 + 208),
          v6);
        if ( !std::optional<ChannellerSlabActivity::LoopDungeonContext>::has_value((const std::optional<ChannellerSlabActivity::LoopDungeonContext> *const)(v2 + 208)) )
        {
          common::milog::MiLogStream::create(
            &v39,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/channeller_slab_activity.cpp",
            "onChallengeBeginEvent",
            1738);
          common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
            &v39,
            (const char (*)[45])"[CHANNELLER_SLAB] LoopDungeonContext invalid");
          common::milog::MiLogStream::~MiLogStream(&v39);
        }
        else
        {
          dungeon_context = std::optional<ChannellerSlabActivity::LoopDungeonContext>::value((std::optional<ChannellerSlabActivity::LoopDungeonContext> *const)(v2 + 208));
          if ( *(_BYTE *)(((unsigned __int64)&dungeon_context->difficulty_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)dungeon_context + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_context->difficulty_id >> 3)
                                                                          + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          difficulty_id = dungeon_context->difficulty_id;
          if ( *(_BYTE *)(((unsigned __int64)dungeon_context >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)dungeon_context >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          difficulty_config_ptr = ActivityChannellerSlabExcelConfigMgr::findLoopDungeonDifficultyConfig(
                                    *((const ActivityChannellerSlabExcelConfigMgr *const *)&eventa._anon_0._M_allocated_capacity
                                    + 1),
                                    dungeon_context->dungeon_index,
                                    difficulty_id);
          if ( difficulty_config_ptr )
          {
            if ( *(_BYTE *)(((unsigned __int64)&event->challenge_index >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&event->challenge_index >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            challenge_index = event->challenge_index;
            if ( *(_BYTE *)(((unsigned __int64)&difficulty_config_ptr->finish_challenge_id >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)difficulty_config_ptr + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&difficulty_config_ptr->finish_challenge_id >> 3)
                                                                                   + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            if ( challenge_index == difficulty_config_ptr->finish_challenge_id )
            {
              v12 = (unsigned int)std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
              if ( *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)event + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->group_id >> 3)
                                                                     + 0x7FFF8000) )
              {
                v12 = (_DWORD)event + 36;
                __asan_report_load4();
              }
              Scene::findGroup((Scene *const)(v2 + 112), v12);
              if ( !std::operator==<Group>(0LL, (const std::shared_ptr<Group> *)(v2 + 112)) )
              {
                v13 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
                ChallengeComp = Group::getChallengeComp(v13);
                if ( *(_BYTE *)(((unsigned __int64)&event->challenge_index >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&event->challenge_index >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4();
                }
                ChallengeComp::findChallenge(
                  (const ChallengeComp *const)(v2 + 144),
                  &ChallengeComp->challenge_map_,
                  event->challenge_index);
                if ( !std::operator==<Challenge>(0LL, (const std::shared_ptr<Challenge> *)(v2 + 144)) )
                {
                  common::milog::MiLogStream::create(
                    &v39,
                    &common::milog::MiLogDefault::default_log_obj_,
                    1u,
                    "./src/player/activity/channeller_slab_activity.cpp",
                    "onChallengeBeginEvent",
                    1767);
                  v15 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
                          &v39,
                          (const char (*)[57])"[CHANNELLER_SLAB] onChallengeBeginEvent, dungeon_index: ");
                  v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v15,
                          &dungeon_context->dungeon_index);
                  v17 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                          v16,
                          (const char (*)[17])" ,challenge_id: ");
                  v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v17,
                          &event->challenge_id);
                  v19 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                          v18,
                          (const char (*)[20])" ,challenge_index: ");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &event->challenge_index);
                  common::milog::MiLogStream::~MiLogStream(&v39);
                  if ( *(_BYTE *)(((eventa._M_string_length + 24) >> 3) + 0x7FFF8000) )
                    __asan_report_load8();
                  BasicComp = Player::getBasicComp(*(Player *const *)(eventa._M_string_length + 24));
                  PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v39, BasicComp);
                  StatLogUtils::ContextHolder::ContextHolder(
                    (StatLogUtils::ContextHolder *const)(v2 + 32),
                    0xD7Bu,
                    eventa);
                  std::string::~string(&v39);
                  common::tools::perf::make_shared<proto_log::PlayerLogBodyChannellerSlabLoopDungeonChallengeBegin>();
                  v21 = std::__shared_ptr_access<proto_log::PlayerLogBodyChannellerSlabLoopDungeonChallengeBegin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyChannellerSlabLoopDungeonChallengeBegin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 176));
                  v22 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
                  v23 = DungeonScene::getTransaction[abi:cxx11](v22);
                  proto_log::PlayerLogBodyChannellerSlabLoopDungeonChallengeBegin::set_dungeon_transaction(v21, v23);
                  v24 = std::__shared_ptr_access<proto_log::PlayerLogBodyChannellerSlabLoopDungeonChallengeBegin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyChannellerSlabLoopDungeonChallengeBegin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 176));
                  v25 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
                  DungeonId = DungeonScene::getDungeonId(v25);
                  proto_log::PlayerLogBodyChannellerSlabLoopDungeonChallengeBegin::set_dungeon_id(v24, DungeonId);
                  v27 = std::__shared_ptr_access<proto_log::PlayerLogBodyChannellerSlabLoopDungeonChallengeBegin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyChannellerSlabLoopDungeonChallengeBegin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 176));
                  v28 = std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
                  proto_log::PlayerLogBodyChannellerSlabLoopDungeonChallengeBegin::set_challenge_transaction(
                    v27,
                    &v28->trans_no);
                  v29 = std::__shared_ptr_access<proto_log::PlayerLogBodyChannellerSlabLoopDungeonChallengeBegin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyChannellerSlabLoopDungeonChallengeBegin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 176));
                  if ( *(_BYTE *)(((unsigned __int64)&eventb->challenge_id >> 3) + 0x7FFF8000) != 0
                    && (char)((((_BYTE)eventb + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&eventb->challenge_id >> 3)
                                                                          + 0x7FFF8000) )
                  {
                    __asan_report_load4();
                  }
                  proto_log::PlayerLogBodyChannellerSlabLoopDungeonChallengeBegin::set_challenge_id(
                    v29,
                    eventb->challenge_id);
                  v30 = std::__shared_ptr_access<proto_log::PlayerLogBodyChannellerSlabLoopDungeonChallengeBegin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyChannellerSlabLoopDungeonChallengeBegin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 176));
                  if ( *(_BYTE *)(((unsigned __int64)&dungeon_context->difficulty_id >> 3) + 0x7FFF8000) != 0
                    && (char)((((_BYTE)dungeon_context + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_context->difficulty_id >> 3)
                                                                                  + 0x7FFF8000) )
                  {
                    __asan_report_load4();
                  }
                  proto_log::PlayerLogBodyChannellerSlabLoopDungeonChallengeBegin::set_difficulty_id(
                    v30,
                    dungeon_context->difficulty_id);
                  if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8();
                  player = thisa->player_;
                  std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
                  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyChannellerSlabLoopDungeonChallengeBegin,void>(
                    &p_body_ptr,
                    (const std::shared_ptr<proto_log::PlayerLogBodyChannellerSlabLoopDungeonChallengeBegin> *)(v2 + 176));
                  Player::printStatLog(player, &p_body_ptr, &p_body_ext_ptr, 0xEu);
                  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
                  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
                  std::shared_ptr<proto_log::PlayerLogBodyChannellerSlabLoopDungeonChallengeBegin>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyChannellerSlabLoopDungeonChallengeBegin> *const)(v2 + 176));
                  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32));
                }
                std::shared_ptr<Challenge>::~shared_ptr((std::shared_ptr<Challenge> *const)(v2 + 144));
              }
              std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v2 + 112));
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v39,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/channeller_slab_activity.cpp",
              "onChallengeBeginEvent",
              1745);
            v8 = common::milog::MiLogStream::operator<<<char [74],(char *[74])0>(
                   &v39,
                   (const char (*)[74])"[CHANNELLER_SLAB] findLoopDungeonDifficultyConfig failed, dungeon_index: ");
            v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                   v8,
                   &dungeon_context->dungeon_index);
            v10 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                    v9,
                    (const char (*)[18])" ,difficulty_id: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &dungeon_context->difficulty_id);
            common::milog::MiLogStream::~MiLogStream(&v39);
          }
        }
        std::optional<ChannellerSlabActivity::LoopDungeonContext>::~optional((std::optional<ChannellerSlabActivity::LoopDungeonContext> *const)(v2 + 208));
      }
    }
    std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 80));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 48));
  if ( v40 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
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

// Line 1783: range 0000000014F35DD4-0000000014F35DE6
int32_t __cdecl ChannellerSlabActivity::onOneoffDungeonInfoReq(
        ChannellerSlabActivity *const this,
        proto::ChannellerSlabOneOffDungeonInfoRsp *rsp_0)
{
  return 0;
};

// Line 1789: range 0000000014F35DE8-0000000014F361C6
void __cdecl ChannellerSlabActivity::writeCampDoneLog(
        ChannellerSlabActivity *const this,
        uint32_t stage_id,
        uint32_t round_id,
        uint32_t camp_index,
        uint32_t group_id)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyChannellerSlabActivityCampDone,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyChannellerSlabActivityCampDone,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyChannellerSlabActivityCampDone,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyChannellerSlabActivityCampDone,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyChannellerSlabActivityCampDone,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyChannellerSlabActivityCampDone,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  Player *player; // r14
  std::string v16; // [rsp+0h] [rbp-F0h]
  __int64 group_ida; // [rsp+8h] [rbp-E8h]
  __int64 round_ida; // [rsp+10h] [rbp-E0h]
  ChannellerSlabActivity *thisa; // [rsp+18h] [rbp-D8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-D0h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+30h] [rbp-C0h] BYREF
  std::string v22; // [rsp+40h] [rbp-B0h] BYREF
  char v23[144]; // [rsp+60h] [rbp-90h] BYREF

  *(&v16._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  HIDWORD(v16._anon_0._M_allocated_capacity) = stage_id;
  *(_DWORD *)v16._anon_0._M_local_buf = round_id;
  HIDWORD(v16._M_string_length) = camp_index;
  LODWORD(v16._M_string_length) = group_id;
  v5 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 1 11 holder:1790 64 16 12 log_ptr:1791";
  *(_QWORD *)(v5 + 16) = ChannellerSlabActivity::writeCampDoneLog;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234753551;
  v7[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Player::getBasicComp(this->player_);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v22, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 48), 0xD7Au, v16);
  std::string::~string(&v22);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyChannellerSlabActivityCampDone>();
  v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyChannellerSlabActivityCampDone,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyChannellerSlabActivityCampDone,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&thisa->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&thisa->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto_log::PlayerLogBodyChannellerSlabActivityCampDone::set_activity_id(v9, thisa->activity_id_);
  v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyChannellerSlabActivityCampDone,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyChannellerSlabActivityCampDone,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&thisa->schedule_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)thisa + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->schedule_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto_log::PlayerLogBodyChannellerSlabActivityCampDone::set_schedule_id(v10, thisa->schedule_id_);
  v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyChannellerSlabActivityCampDone,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyChannellerSlabActivityCampDone,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
  proto_log::PlayerLogBodyChannellerSlabActivityCampDone::set_stage_id(v11, HIDWORD(round_ida));
  v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyChannellerSlabActivityCampDone,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyChannellerSlabActivityCampDone,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
  proto_log::PlayerLogBodyChannellerSlabActivityCampDone::set_round_id(v12, round_ida);
  v13 = std::__shared_ptr_access<proto_log::PlayerLogBodyChannellerSlabActivityCampDone,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyChannellerSlabActivityCampDone,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
  proto_log::PlayerLogBodyChannellerSlabActivityCampDone::set_camp_index(v13, HIDWORD(group_ida));
  v14 = std::__shared_ptr_access<proto_log::PlayerLogBodyChannellerSlabActivityCampDone,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyChannellerSlabActivityCampDone,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
  proto_log::PlayerLogBodyChannellerSlabActivityCampDone::set_group_id(v14, group_ida);
  if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  player = thisa->player_;
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyChannellerSlabActivityCampDone,void>(
    &p_body_ptr,
    (const std::shared_ptr<proto_log::PlayerLogBodyChannellerSlabActivityCampDone> *)(v5 + 64));
  Player::printStatLog(player, &p_body_ptr, &p_body_ext_ptr, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
  std::shared_ptr<proto_log::PlayerLogBodyChannellerSlabActivityCampDone>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyChannellerSlabActivityCampDone> *const)(v5 + 64));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 48));
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

// Line 1802: range 0000000014F361C8-0000000014F361F2
ChannellerSlabActivity::BuffScheme *__cdecl ChannellerSlabActivity::getBuffScheme(
        ChannellerSlabActivity *const this,
        bool is_mp)
{
  if ( is_mp )
    return &this->bin_data_.buff_data.mp_buff_scheme;
  else
    return &this->bin_data_.buff_data.single_buff_scheme;
};

// Line 1812: range 0000000014F363F8-0000000014F36598
uint32_t __cdecl ChannellerSlabActivity::getSelfBuffEnergy(ChannellerSlabActivity *const this, bool is_mp)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  PlayerAvatarComp *AvatarComp; // r14
  uint32_t result; // eax
  ChannellerSlabActivity::getSelfBuffEnergy::<lambda(const FormalAvatar&)> v7; // [rsp-20h] [rbp-E0h]
  __int64 __f_8; // [rsp+18h] [rbp-A8h]
  std::function<ForeachPolicy(const FormalAvatar&)> p_func; // [rsp+30h] [rbp-90h] BYREF
  char v10[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 16 self_energy:1813";
  *(_QWORD *)(v2 + 16) = ChannellerSlabActivity::getSelfBuffEnergy;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  AvatarComp = Player::getAvatarComp(this->player_);
  LOBYTE(__f_8) = is_mp;
  v7.__self_energy = (uint32_t *)(v2 + 32);
  *(_QWORD *)&v7.__is_mp = __f_8;
  v7.__this = this;
  std::function<ForeachPolicy ()(FormalAvatar const&)>::function<ChannellerSlabActivity::getSelfBuffEnergy(bool)::{lambda(FormalAvatar const&)#1},void,void>(
    &p_func,
    v7);
  PlayerAvatarComp::foreachFormalAvatar(AvatarComp, &p_func);
  std::function<ForeachPolicy ()(FormalAvatar const&)>::~function(&p_func);
  result = *(_DWORD *)(v2 + 32);
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

// Line 1814: range 0000000014F361F4-0000000014F363F6
ForeachPolicy __cdecl ChannellerSlabActivity::getSelfBuffEnergy(bool)::{lambda(FormalAvatar const&)#1}::operator()(
        const ChannellerSlabActivity::getSelfBuffEnergy::<lambda(const FormalAvatar&)> *const __closure,
        const FormalAvatar *formal_avatar)
{
  uint32_t Level; // edx
  uint32_t *self_energy; // rdx
  int v4; // esi
  int mp_energy; // eax
  uint32_t *v6; // rdx
  uint32_t v7; // esi
  const ActivityChannellerSlabExcelConfigMgr *config_mgr; // [rsp+10h] [rbp-10h]
  const data::ChannellerSlabBuffEnergyExcelConfig *buff_energy_config_ptr; // [rsp+18h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  config_mgr = ChannellerSlabActivity::getConfigMgr(__closure->__this);
  Level = Creature::getLevel(formal_avatar);
  buff_energy_config_ptr = ActivityChannellerSlabExcelConfigMgr::findBuffEnergyConfigByAvatarLevel(config_mgr, Level);
  if ( buff_energy_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__self_energy >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    self_energy = __closure->__self_energy;
    if ( *(_BYTE *)(((unsigned __int64)self_energy >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)self_energy & 7) + 3) >= *(_BYTE *)(((unsigned __int64)self_energy >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v4 = *self_energy;
    if ( *(char *)(((unsigned __int64)&__closure->__is_mp >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&__closure->__is_mp);
    if ( __closure->__is_mp )
    {
      if ( *(_BYTE *)(((unsigned __int64)&buff_energy_config_ptr->mp_energy >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)buff_energy_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&buff_energy_config_ptr->mp_energy >> 3)
                                                                              + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      mp_energy = buff_energy_config_ptr->mp_energy;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&buff_energy_config_ptr->single_energy >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&buff_energy_config_ptr->single_energy >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      mp_energy = buff_energy_config_ptr->single_energy;
    }
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__self_energy >> 3) + 0x7FFF8000) )
      mp_energy = __asan_report_load8();
    v6 = __closure->__self_energy;
    v7 = mp_energy + v4;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(__closure->__self_energy);
    }
    *v6 = v7;
  }
  return 0;
};

// Line 1829: range 0000000014F3659A-0000000014F3692F
uint32_t __cdecl ChannellerSlabActivity::getTotalBuffEnergy(ChannellerSlabActivity *const this, bool is_mp)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  uint32_t SelfBuffEnergy; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  uint32_t v8; // eax
  common::milog::MiLogStream *v9; // r14
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  uint32_t result; // eax
  unsigned int val; // [rsp+14h] [rbp-CCh] BYREF
  uint32_t single_energy_limit; // [rsp+18h] [rbp-C8h]
  uint32_t mp_energy_limit; // [rsp+1Ch] [rbp-C4h]
  std::shared_ptr<Config> v22; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v23; // [rsp+30h] [rbp-B0h] BYREF
  char v24[144]; // [rsp+50h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 17 total_energy:1830 64 4 17 energy_limit:1833";
  *(_QWORD *)(v2 + 16) = ChannellerSlabActivity::getTotalBuffEnergy;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  SelfBuffEnergy = ChannellerSlabActivity::getSelfBuffEnergy(this, is_mp);
  *(_DWORD *)(v2 + 48) = SelfBuffEnergy + ChannellerSlabActivity::getAssistBuffEnergy(this);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v22);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22);
  single_energy_limit = ConstValueExcelConfigMgr::getChannellerSlabSingleBuffEnergyLimit(&v6->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v22);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v22);
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22);
  mp_energy_limit = ConstValueExcelConfigMgr::getChannellerSlabMpBuffEnergyLimit(&v7->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v22);
  if ( is_mp )
    v8 = mp_energy_limit;
  else
    v8 = single_energy_limit;
  *(_DWORD *)(v2 + 64) = v8;
  if ( *(_BYTE *)(((unsigned __int64)&this->gm_add_buff_energy_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gm_add_buff_energy_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  *(_DWORD *)(v2 + 48) += this->gm_add_buff_energy_;
  common::milog::MiLogStream::create(
    &v23,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/channeller_slab_activity.cpp",
    "getTotalBuffEnergy",
    1836);
  v9 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
         &v23,
         (const char (*)[44])"[CHANNELLER_SLAB] getTotalBuffEnergy, uid: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
  v11 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v10, (const char (*)[10])" ,is_mp: ");
  v12 = common::milog::MiLogStream::operator<<(v11, is_mp);
  v13 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v12, (const char (*)[17])" ,total_energy: ");
  v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 48));
  v15 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v14, (const char (*)[17])" ,energy_limit: ");
  v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v2 + 64));
  v17 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
          v16,
          (const char (*)[24])" ,gm_add_buff_energy_: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &this->gm_add_buff_energy_);
  common::milog::MiLogStream::~MiLogStream(&v23);
  if ( *(_DWORD *)(v2 + 48) > *(_DWORD *)(v2 + 64) )
    *(_DWORD *)(v2 + 48) = *(_DWORD *)(v2 + 64);
  result = *(_DWORD *)(v2 + 48);
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

// Line 1848: range 0000000014F36930-0000000014F36A59
uint32_t __cdecl ChannellerSlabActivity::getAssistBuffEnergy(ChannellerSlabActivity *const this)
{
  uint32_t assist_energy; // [rsp+1Ch] [rbp-34h]
  std::vector<ChannellerSlabActivity::AssistData>::iterator __for_begin; // [rsp+20h] [rbp-30h] BYREF
  std::vector<ChannellerSlabActivity::AssistData>::iterator __for_end; // [rsp+28h] [rbp-28h] BYREF
  const ActivityChannellerSlabExcelConfigMgr *config_mgr; // [rsp+30h] [rbp-20h]
  std::vector<ChannellerSlabActivity::AssistData> *__for_range; // [rsp+38h] [rbp-18h]
  const ChannellerSlabActivity::AssistData *assist_data; // [rsp+40h] [rbp-10h]
  const data::ChannellerSlabBuffEnergyExcelConfig *buff_energy_config_ptr; // [rsp+48h] [rbp-8h]

  assist_energy = 0;
  config_mgr = ChannellerSlabActivity::getConfigMgr(this);
  __for_range = &this->bin_data_.buff_data.assist_vec;
  __for_begin._M_current = std::vector<ChannellerSlabActivity::AssistData>::begin(&this->bin_data_.buff_data.assist_vec)._M_current;
  __for_end._M_current = std::vector<ChannellerSlabActivity::AssistData>::end(&this->bin_data_.buff_data.assist_vec)._M_current;
  while ( __gnu_cxx::operator!=<ChannellerSlabActivity::AssistData *,std::vector<ChannellerSlabActivity::AssistData>>(
            &__for_begin,
            &__for_end) )
  {
    assist_data = __gnu_cxx::__normal_iterator<ChannellerSlabActivity::AssistData *,std::vector<ChannellerSlabActivity::AssistData>>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)&assist_data->avatar_level >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)assist_data + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&assist_data->avatar_level >> 3)
                                                                + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    buff_energy_config_ptr = ActivityChannellerSlabExcelConfigMgr::findBuffEnergyConfigByAvatarLevel(
                               config_mgr,
                               assist_data->avatar_level);
    if ( buff_energy_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&buff_energy_config_ptr->single_energy >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&buff_energy_config_ptr->single_energy >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      assist_energy += buff_energy_config_ptr->single_energy;
    }
    __gnu_cxx::__normal_iterator<ChannellerSlabActivity::AssistData *,std::vector<ChannellerSlabActivity::AssistData>>::operator++(&__for_begin);
  }
  return assist_energy;
};

// Line 1864: range 0000000014F36A5A-0000000014F36B5E
uint32_t __cdecl ChannellerSlabActivity::getTotalBuffEnergyCost(ChannellerSlabActivity *const this, bool is_mp)
{
  uint32_t total_cost; // [rsp+14h] [rbp-3Ch]
  std::unordered_map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-38h] BYREF
  std::unordered_map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-30h] BYREF
  const ChannellerSlabActivity::BuffScheme *buff_scheme; // [rsp+28h] [rbp-28h]
  const std::unordered_map<unsigned int,unsigned int> *__for_range; // [rsp+30h] [rbp-20h]
  const std::pair<unsigned int const,unsigned int> *v8; // [rsp+38h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *_; // [rsp+40h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *buff_id; // [rsp+48h] [rbp-8h]

  total_cost = 0;
  buff_scheme = ChannellerSlabActivity::getBuffScheme(this, is_mp);
  __for_range = &buff_scheme->slot_map;
  __for_begin._M_cur = std::unordered_map<unsigned int,unsigned int>::begin(&buff_scheme->slot_map)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,unsigned int>::end(&buff_scheme->slot_map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(&__for_begin, &__for_end) )
  {
    v8 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,unsigned int>(v8);
    buff_id = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v8);
    if ( *(_BYTE *)(((unsigned __int64)buff_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)buff_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)buff_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    total_cost += ChannellerSlabActivity::getBuffEnergyCost(this, *buff_id);
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++(&__for_begin);
  }
  return total_cost;
};

// Line 1876: range 0000000014F36B60-0000000014F36D35
uint32_t __fastcall ChannellerSlabActivity::getBuffEnergyCost(ChannellerSlabActivity *const this, uint32_t buff_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  uint32_t result; // eax
  const ActivityChannellerSlabExcelConfigMgr *config_mgr; // [rsp+10h] [rbp-90h]
  const data::ChannellerSlabBuffExcelConfig *buff_config_ptr; // [rsp+18h] [rbp-88h]
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-80h] BYREF
  char v10[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 buff_id:1875";
  *(_QWORD *)(v2 + 16) = ChannellerSlabActivity::getBuffEnergyCost;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = buff_id;
  config_mgr = ChannellerSlabActivity::getConfigMgr(this);
  buff_config_ptr = data::ActivityChannellerSlabExcelConfigMgrBase::findChannellerSlabBuffExcelConfig(
                      config_mgr,
                      *(_DWORD *)(v2 + 32));
  if ( buff_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&buff_config_ptr->buff_quality_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&buff_config_ptr->buff_quality_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    result = ActivityChannellerSlabExcelConfigMgr::getBuffCostByQualityType(
               config_mgr,
               buff_config_ptr->buff_quality_type);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/channeller_slab_activity.cpp",
      "getBuffEnergyCost",
      1881);
    v5 = common::milog::MiLogStream::operator<<<char [70],(char *[70])0>(
           &v9,
           (const char (*)[70])"[CHANNELLER_SLAB] findChannellerSlabBuffExcelConfig failed, buff_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v9);
    result = 0;
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

// Line 1890: range 0000000014F36D36-0000000014F36D66
void __cdecl ChannellerSlabActivity::adjustBuffScheme(ChannellerSlabActivity *const this)
{
  ChannellerSlabActivity::doAdjustBuffScheme(this, 1);
  ChannellerSlabActivity::doAdjustBuffScheme(this, 0);
};

// Line 1896: range 0000000014F36D68-0000000014F372B2
void __cdecl ChannellerSlabActivity::doAdjustBuffScheme(ChannellerSlabActivity *const this, bool is_mp)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::pair<unsigned int,unsigned int> *M_current; // r15
  std::vector<std::pair<unsigned int,unsigned int>>::iterator v6; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v7; // rdx
  uint32_t temp_value; // [rsp+28h] [rbp-168h]
  uint32_t total_energy_cost; // [rsp+2Ch] [rbp-164h]
  uint32_t total_energy; // [rsp+30h] [rbp-160h]
  std::unordered_map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+38h] [rbp-158h] BYREF
  std::vector<std::pair<unsigned int,unsigned int>>::iterator __for_begin_0; // [rsp+40h] [rbp-150h] BYREF
  ChannellerSlabActivity::BuffScheme *buff_scheme; // [rsp+48h] [rbp-148h]
  std::unordered_map<unsigned int,unsigned int> *__for_range; // [rsp+50h] [rbp-140h]
  std::vector<std::pair<unsigned int,unsigned int>> *__for_range_0; // [rsp+58h] [rbp-138h]
  const std::pair<unsigned int,unsigned int> *v16; // [rsp+60h] [rbp-130h]
  std::tuple_element<0,const std::pair<unsigned int,unsigned int> >::type *slot_id_0; // [rsp+68h] [rbp-128h]
  std::tuple_element<1,const std::pair<unsigned int,unsigned int> >::type *buff_id_0; // [rsp+70h] [rbp-120h]
  std::vector<unsigned int> *__for_range_1; // [rsp+78h] [rbp-118h]
  const std::pair<unsigned int const,unsigned int> *v20; // [rsp+80h] [rbp-110h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *slot_id; // [rsp+88h] [rbp-108h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *buff_id; // [rsp+90h] [rbp-100h]
  std::vector<std::pair<unsigned int,unsigned int>>::iterator __for_end; // [rsp+98h] [rbp-F8h] BYREF
  char v24[240]; // [rsp+A0h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 12 slot_id:1929 64 24 23 slot_buff_pair_vec:1904 128 24 16 slot_id_vec:1916";
  *(_QWORD *)(v2 + 16) = ChannellerSlabActivity::doAdjustBuffScheme;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234881024;
  v4[536862723] = -218959118;
  v4[536862724] = -218103808;
  v4[536862725] = -202116109;
  total_energy_cost = ChannellerSlabActivity::getTotalBuffEnergyCost(this, is_mp);
  total_energy = ChannellerSlabActivity::getTotalBuffEnergy(this, is_mp);
  if ( total_energy_cost > total_energy )
  {
    buff_scheme = ChannellerSlabActivity::getBuffScheme(this, is_mp);
    std::vector<std::pair<unsigned int,unsigned int>>::vector((std::vector<std::pair<unsigned int,unsigned int>> *const)(v2 + 64));
    __for_range = &buff_scheme->slot_map;
    __for_begin._M_cur = std::unordered_map<unsigned int,unsigned int>::begin(&buff_scheme->slot_map)._M_cur;
    __for_begin_0._M_current = (std::pair<unsigned int,unsigned int> *)std::unordered_map<unsigned int,unsigned int>::end(&buff_scheme->slot_map)._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
              &__for_begin,
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)&__for_begin_0) )
    {
      v20 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*(&__for_begin);
      slot_id = std::get<0ul,unsigned int const,unsigned int>(v20);
      buff_id = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v20);
      __for_end._M_current = (std::pair<unsigned int,unsigned int> *)std::make_pair<unsigned int const&,unsigned int const&>(
                                                                       slot_id,
                                                                       buff_id);
      std::vector<std::pair<unsigned int,unsigned int>>::push_back(
        (std::vector<std::pair<unsigned int,unsigned int>> *const)(v2 + 64),
        (std::vector<std::pair<unsigned int,unsigned int>>::value_type *)&__for_end);
      std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++(&__for_begin);
    }
    M_current = std::vector<std::pair<unsigned int,unsigned int>>::end((std::vector<std::pair<unsigned int,unsigned int>> *const)(v2 + 64))._M_current;
    v6._M_current = std::vector<std::pair<unsigned int,unsigned int>>::begin((std::vector<std::pair<unsigned int,unsigned int>> *const)(v2 + 64))._M_current;
    std::sort___gnu_cxx::__normal_iterator_std::pair_unsigned_int_unsigned_int___std::vector_std::pair_unsigned_int_unsigned_int______ChannellerSlabActivity::doAdjustBuffScheme_bool_::_lambda_const_auto_25__const_auto_26_____(
      v6,
      (__gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int>*,std::vector<std::pair<unsigned int,unsigned int>> >)M_current,
      (ChannellerSlabActivity::doAdjustBuffScheme::<lambda(const auto:25&, const auto:26&)>)this);
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 128));
    temp_value = 0;
    __for_range_0 = (std::vector<std::pair<unsigned int,unsigned int>> *)(v2 + 64);
    __for_begin_0._M_current = std::vector<std::pair<unsigned int,unsigned int>>::begin((std::vector<std::pair<unsigned int,unsigned int>> *const)(v2 + 64))._M_current;
    __for_end._M_current = std::vector<std::pair<unsigned int,unsigned int>>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<std::pair<unsigned int,unsigned int> *,std::vector<std::pair<unsigned int,unsigned int>>>(
              &__for_begin_0,
              &__for_end) )
    {
      v16 = __gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int> *,std::vector<std::pair<unsigned int,unsigned int>>>::operator*(&__for_begin_0);
      slot_id_0 = (std::tuple_element<0,const std::pair<unsigned int,unsigned int> >::type *)std::get<0ul,unsigned int,unsigned int>(v16);
      buff_id_0 = (std::tuple_element<1,const std::pair<unsigned int,unsigned int> >::type *)std::get<1ul,unsigned int,unsigned int>(v16);
      if ( temp_value >= total_energy_cost - total_energy )
        break;
      if ( *(_BYTE *)(((unsigned __int64)buff_id_0 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)buff_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)buff_id_0 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      temp_value += ChannellerSlabActivity::getBuffEnergyCost(this, *buff_id_0);
      std::vector<unsigned int>::push_back((std::vector<unsigned int> *const)(v2 + 128), slot_id_0);
      __gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int> *,std::vector<std::pair<unsigned int,unsigned int>>>::operator++(&__for_begin_0);
    }
    __for_range_1 = (std::vector<unsigned int> *)(v2 + 128);
    __for_begin_0._M_current = (std::pair<unsigned int,unsigned int> *)std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 128))._M_current;
    __for_end._M_current = (std::pair<unsigned int,unsigned int> *)std::vector<unsigned int>::end(__for_range_1)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_begin_0,
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_end) )
    {
      v7 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin_0);
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v2 + 48) = *v7;
      std::unordered_map<unsigned int,unsigned int>::erase(
        &buff_scheme->slot_map,
        (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin_0);
    }
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 128));
    std::vector<std::pair<unsigned int,unsigned int>>::~vector((std::vector<std::pair<unsigned int,unsigned int>> *const)(v2 + 64));
  }
  if ( v24 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1909: range 0000000014F65ED8-0000000014F65FE4
bool __cdecl ChannellerSlabActivity::doAdjustBuffScheme::_lambda_const_auto_25___const_auto_26___::operator()_std::pair_unsigned_int_unsigned_int__std::pair_unsigned_int_unsigned_int___(
        const ChannellerSlabActivity::doAdjustBuffScheme::<lambda(const auto:25&, const auto:26&)> *const __closure,
        const std::pair<unsigned int,unsigned int> *lhs,
        const std::pair<unsigned int,unsigned int> *rhs)
{
  ChannellerSlabActivity *this; // rcx
  uint32_t BuffEnergyCost; // ebx
  ChannellerSlabActivity *v5; // rcx

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  this = __closure->__this;
  if ( *(_BYTE *)(((unsigned __int64)&lhs->second >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)lhs + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&lhs->second >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  BuffEnergyCost = ChannellerSlabActivity::getBuffEnergyCost(this, lhs->second);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = __closure->__this;
  if ( *(_BYTE *)(((unsigned __int64)&rhs->second >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rhs + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rhs->second >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  return BuffEnergyCost < ChannellerSlabActivity::getBuffEnergyCost(v5, rhs->second);
};

// Line 1936: range 0000000014F372B4-0000000014F37405
bool __cdecl ChannellerSlabActivity::isFinishAllCamp(const ChannellerSlabActivity *const this)
{
  std::map<unsigned int,std::map<unsigned int,std::vector<const data::ChannellerSlabLevelExcelConfig*>>>::const_iterator __for_begin; // [rsp+10h] [rbp-40h] BYREF
  std::map<unsigned int,std::map<unsigned int,std::vector<const data::ChannellerSlabLevelExcelConfig*>>>::const_iterator __for_end; // [rsp+18h] [rbp-38h] BYREF
  const ActivityChannellerSlabExcelConfigMgr *config_mgr; // [rsp+20h] [rbp-30h]
  const std::map<unsigned int,std::map<unsigned int,std::vector<const data::ChannellerSlabLevelExcelConfig*>>> *stage_rounds_level_config_map; // [rsp+28h] [rbp-28h]
  const std::map<unsigned int,std::map<unsigned int,std::vector<const data::ChannellerSlabLevelExcelConfig*>>> *__for_range; // [rsp+30h] [rbp-20h]
  const std::pair<unsigned int const,std::map<unsigned int,std::vector<const data::ChannellerSlabLevelExcelConfig*>> > *v7; // [rsp+38h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,std::map<unsigned int,std::vector<const data::ChannellerSlabLevelExcelConfig*>> > >::type *stage_id; // [rsp+40h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,std::map<unsigned int,std::vector<const data::ChannellerSlabLevelExcelConfig*>> > >::type *_; // [rsp+48h] [rbp-8h]

  config_mgr = ChannellerSlabActivity::getConfigMgr(this);
  stage_rounds_level_config_map = ActivityChannellerSlabExcelConfigMgr::getStageRoundsLevelConfigMap(config_mgr);
  __for_range = stage_rounds_level_config_map;
  __for_begin._M_node = std::map<unsigned int,std::map<unsigned int,std::vector<data::ChannellerSlabLevelExcelConfig const*>>>::begin(stage_rounds_level_config_map)._M_node;
  __for_end._M_node = std::map<unsigned int,std::map<unsigned int,std::vector<data::ChannellerSlabLevelExcelConfig const*>>>::end(stage_rounds_level_config_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v7 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::vector<data::ChannellerSlabLevelExcelConfig const*>>>>::operator*(&__for_begin);
    stage_id = std::get<0ul,unsigned int const,std::map<unsigned int,std::vector<data::ChannellerSlabLevelExcelConfig const*>>>(v7);
    _ = (std::tuple_element<1,const std::pair<unsigned int const,std::map<unsigned int,std::vector<const data::ChannellerSlabLevelExcelConfig*>> > >::type *)std::get<1ul,unsigned int const,std::map<unsigned int,std::vector<data::ChannellerSlabLevelExcelConfig const*>>>(v7);
    if ( *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)stage_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( *stage_id )
    {
      if ( *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)stage_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( !ChannellerSlabActivity::isStageFinishAllCamp(this, *stage_id) )
        return 0;
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::vector<data::ChannellerSlabLevelExcelConfig const*>>>>::operator++(&__for_begin);
  }
  return 1;
};

// Line 1955: range 0000000014F37406-0000000014F37B76
__int64 __fastcall ChannellerSlabActivity::isStageFinishAllCamp(
        const ChannellerSlabActivity *const this,
        uint32_t stage_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::vector<ChannellerSlabActivity::StageData>::size_type v5; // r15
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  std::vector<unsigned int>::size_type v14; // r15
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  std::vector<unsigned int> *p_active_camp_vec; // rcx
  std::vector<unsigned int>::const_reference v21; // rdx
  std::vector<const data::ChannellerSlabLevelExcelConfig*>::size_type v22; // r15
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rbx
  std::map<unsigned int,std::vector<const data::ChannellerSlabLevelExcelConfig*>>::const_iterator __for_begin; // [rsp+18h] [rbp-128h] BYREF
  std::map<unsigned int,std::vector<const data::ChannellerSlabLevelExcelConfig*>>::const_iterator __for_end; // [rsp+20h] [rbp-120h] BYREF
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::vector<const data::ChannellerSlabLevelExcelConfig*>> > >::_Self __y; // [rsp+28h] [rbp-118h] BYREF
  const ActivityChannellerSlabExcelConfigMgr *config_mgr; // [rsp+30h] [rbp-110h]
  const std::map<unsigned int,std::map<unsigned int,std::vector<const data::ChannellerSlabLevelExcelConfig*>>> *stage_rounds_level_config_map; // [rsp+38h] [rbp-108h]
  const std::map<unsigned int,std::vector<const data::ChannellerSlabLevelExcelConfig*>> *rounds_map; // [rsp+40h] [rbp-100h]
  const ChannellerSlabActivity::StageData *stage_data; // [rsp+48h] [rbp-F8h]
  const std::map<unsigned int,std::vector<const data::ChannellerSlabLevelExcelConfig*>> *__for_range; // [rsp+50h] [rbp-F0h]
  const std::pair<unsigned int const,std::vector<const data::ChannellerSlabLevelExcelConfig*> > *v39; // [rsp+58h] [rbp-E8h]
  std::tuple_element<0,const std::pair<unsigned int const,std::vector<const data::ChannellerSlabLevelExcelConfig*> > >::type *round_id; // [rsp+60h] [rbp-E0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::vector<const data::ChannellerSlabLevelExcelConfig*> > >::type *camp_configs_vec; // [rsp+68h] [rbp-D8h]
  common::milog::MiLogStream v42; // [rsp+70h] [rbp-D0h] BYREF
  common::milog::MiLogStream v43; // [rsp+90h] [rbp-B0h] BYREF
  char v44[144]; // [rsp+B0h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v44;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 22 active_camp_index:1984 48 4 13 stage_id:1954 64 8 9 iter:1964";
  *(_QWORD *)(v2 + 16) = ChannellerSlabActivity::isStageFinishAllCamp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = stage_id;
  if ( !*(_DWORD *)(v2 + 48)
    || (v5 = *(unsigned int *)(v2 + 48),
        v5 >= std::vector<ChannellerSlabActivity::StageData>::size(&this->bin_data_.stage_vec) + 1) )
  {
    common::milog::MiLogStream::create(
      &v43,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/channeller_slab_activity.cpp",
      "isStageFinishAllCamp",
      1958);
    v7 = common::milog::MiLogStream::operator<<<ChannellerSlabActivity,(ChannellerSlabActivity*)0>(&v43, this);
    v8 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v7, (const char (*)[8])" stage:");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v9, (const char (*)[18])" not touched yet.");
    common::milog::MiLogStream::~MiLogStream(&v43);
    result = 0LL;
  }
  else
  {
    config_mgr = ChannellerSlabActivity::getConfigMgr(this);
    stage_rounds_level_config_map = ActivityChannellerSlabExcelConfigMgr::getStageRoundsLevelConfigMap(config_mgr);
    *(std::map<unsigned int,std::map<unsigned int,std::vector<const data::ChannellerSlabLevelExcelConfig*>>>::const_iterator *)(v2 + 64) = std::map<unsigned int,std::map<unsigned int,std::vector<data::ChannellerSlabLevelExcelConfig const*>>>::find(stage_rounds_level_config_map, (const std::map<unsigned int,std::map<unsigned int,std::vector<const data::ChannellerSlabLevelExcelConfig*>>>::key_type *)(v2 + 48));
    __y._M_node = std::map<unsigned int,std::map<unsigned int,std::vector<data::ChannellerSlabLevelExcelConfig const*>>>::end(stage_rounds_level_config_map)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::vector<const data::ChannellerSlabLevelExcelConfig*>> > >::_Self *)(v2 + 64),
           &__y) )
    {
      common::milog::MiLogStream::create(
        &v43,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/channeller_slab_activity.cpp",
        "isStageFinishAllCamp",
        1967);
      v11 = common::milog::MiLogStream::operator<<<ChannellerSlabActivity,(ChannellerSlabActivity*)0>(&v43, this);
      v12 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v11, (const char (*)[8])" stage:");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
        v13,
        (const char (*)[38])" not found stage rounds level config.");
      common::milog::MiLogStream::~MiLogStream(&v43);
      result = 0LL;
    }
    else
    {
      rounds_map = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::vector<data::ChannellerSlabLevelExcelConfig const*>>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::vector<const data::ChannellerSlabLevelExcelConfig*>> > > *const)(v2 + 64))->second;
      stage_data = std::vector<ChannellerSlabActivity::StageData>::operator[](
                     &this->bin_data_.stage_vec,
                     (unsigned int)(*(_DWORD *)(v2 + 48) - 1));
      __for_range = rounds_map;
      __for_begin._M_node = std::map<unsigned int,std::vector<data::ChannellerSlabLevelExcelConfig const*>>::begin(rounds_map)._M_node;
      __for_end._M_node = std::map<unsigned int,std::vector<data::ChannellerSlabLevelExcelConfig const*>>::end(__for_range)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        v39 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<data::ChannellerSlabLevelExcelConfig const*>>>::operator*(&__for_begin);
        round_id = std::get<0ul,unsigned int const,std::vector<data::ChannellerSlabLevelExcelConfig const*>>(v39);
        camp_configs_vec = (std::tuple_element<1,const std::pair<unsigned int const,std::vector<const data::ChannellerSlabLevelExcelConfig*> > >::type *)std::get<1ul,unsigned int const,std::vector<data::ChannellerSlabLevelExcelConfig const*>>(v39);
        if ( *(_BYTE *)(((unsigned __int64)round_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)round_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)round_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( *round_id )
        {
          if ( *(_BYTE *)(((unsigned __int64)round_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)round_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)round_id >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          v14 = *round_id;
          if ( v14 >= std::vector<unsigned int>::size(&stage_data->active_camp_vec) + 1 )
          {
            common::milog::MiLogStream::create(
              &v42,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/activity/channeller_slab_activity.cpp",
              "isStageFinishAllCamp",
              1981);
            v15 = common::milog::MiLogStream::operator<<<ChannellerSlabActivity,(ChannellerSlabActivity*)0>(&v42, this);
            v16 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v15, (const char (*)[8])" stage:");
            v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v16,
                    (const unsigned int *)(v2 + 48));
            v18 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v17, (const char (*)[8])" round:");
            v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, round_id);
            common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              v19,
              (const char (*)[18])" not touched yet.");
            common::milog::MiLogStream::~MiLogStream(&v42);
            result = 0LL;
            goto LABEL_29;
          }
          p_active_camp_vec = &stage_data->active_camp_vec;
          if ( *(_BYTE *)(((unsigned __int64)round_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)round_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)round_id >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          v21 = std::vector<unsigned int>::operator[](p_active_camp_vec, *round_id - 1);
          if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v21 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          *(_DWORD *)(v2 + 32) = *v21;
          v22 = *(unsigned int *)(v2 + 32);
          if ( v22 < std::vector<data::ChannellerSlabLevelExcelConfig const*>::size(camp_configs_vec) )
          {
            common::milog::MiLogStream::create(
              &v43,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/activity/channeller_slab_activity.cpp",
              "isStageFinishAllCamp",
              1987);
            v23 = common::milog::MiLogStream::operator<<<ChannellerSlabActivity,(ChannellerSlabActivity*)0>(&v43, this);
            v24 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v23, (const char (*)[8])" stage:");
            v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v24,
                    (const unsigned int *)(v2 + 48));
            v26 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v25, (const char (*)[8])" round:");
            v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, round_id);
            v28 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v27,
                    (const char (*)[14])" active camp:");
            v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v28,
                    (const unsigned int *)(v2 + 32));
            v30 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v29,
                    (const char (*)[14])" total camps:");
            __y._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::vector<const data::ChannellerSlabLevelExcelConfig*>> > >::_Base_ptr)std::vector<data::ChannellerSlabLevelExcelConfig const*>::size(camp_configs_vec);
            common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v30,
              (const unsigned __int64 *)&__y);
            common::milog::MiLogStream::~MiLogStream(&v43);
            result = 0LL;
            goto LABEL_29;
          }
        }
        std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<data::ChannellerSlabLevelExcelConfig const*>>>::operator++(&__for_begin);
      }
      result = 1LL;
    }
  }
LABEL_29:
  if ( v44 == (char *)v2 )
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

// Line 1995: range 0000000014F37B78-0000000014F37B86
bool __cdecl ChannellerSlabActivity::isFinishAllOneoffDungeon(const ChannellerSlabActivity *const this)
{
  return 0;
};

// Line 2001: range 0000000014F37B88-0000000014F3818B
bool __cdecl ChannellerSlabActivity::checkCondIsMeet(
        ChannellerSlabActivity *const this,
        const data::NewActivityCond *cond)
{
  data::NewActivityCondType type; // eax
  std::vector<int>::const_reference v3; // rdx
  common::milog::MiLogStream *v4; // rax
  bool *p_is_dungeon_done; // rax
  bool *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  uint32_t *v11; // rdx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  int stage_id; // [rsp+14h] [rbp-7Ch]
  std::vector<ChannellerSlabActivity::StageData>::iterator __for_begin; // [rsp+18h] [rbp-78h] BYREF
  std::vector<ChannellerSlabActivity::StageData>::iterator __for_end; // [rsp+20h] [rbp-70h] BYREF
  size_t idx; // [rsp+28h] [rbp-68h]
  size_t idx_0; // [rsp+30h] [rbp-60h]
  std::vector<ChannellerSlabActivity::StageData> *__for_range_0; // [rsp+38h] [rbp-58h]
  const ChannellerSlabActivity::StageData *stage_data_1; // [rsp+40h] [rbp-50h]
  std::vector<ChannellerSlabActivity::StageData> *__for_range; // [rsp+48h] [rbp-48h]
  const ChannellerSlabActivity::StageData *stage_data_0; // [rsp+50h] [rbp-40h]
  const ChannellerSlabActivity::StageData *stage_data; // [rsp+58h] [rbp-38h]
  common::milog::MiLogStream v25; // [rsp+60h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  type = cond->type;
  if ( type == NEW_ACTIVITY_COND_FINISH_CHANNELLER_SLAB_APPOINTED_STAGE_ALL_CAMP )
  {
    for ( idx_0 = 0LL; idx_0 < std::vector<int>::size(&cond->param); ++idx_0 )
    {
      v11 = (uint32_t *)std::vector<int>::operator[](&cond->param, idx_0);
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( (unsigned __int8)ChannellerSlabActivity::isStageFinishAllCamp(this, *v11) != 1 )
        return 0;
    }
    return 1;
  }
  else
  {
    if ( type > NEW_ACTIVITY_COND_FINISH_CHANNELLER_SLAB_APPOINTED_STAGE_ALL_CAMP )
      return BaseActivity::checkCondIsMeet(this, cond);
    switch ( type )
    {
      case NEW_ACTIVITY_COND_FINISH_CHANNELLER_SLAB_ANY_STAGE_ALL_CAMP:
        __for_range_0 = &this->bin_data_.stage_vec;
        __for_begin._M_current = std::vector<ChannellerSlabActivity::StageData>::begin(&this->bin_data_.stage_vec)._M_current;
        __for_end._M_current = std::vector<ChannellerSlabActivity::StageData>::end(&this->bin_data_.stage_vec)._M_current;
        while ( __gnu_cxx::operator!=<ChannellerSlabActivity::StageData *,std::vector<ChannellerSlabActivity::StageData>>(
                  &__for_begin,
                  &__for_end) )
        {
          stage_data_1 = __gnu_cxx::__normal_iterator<ChannellerSlabActivity::StageData *,std::vector<ChannellerSlabActivity::StageData>>::operator*(&__for_begin);
          if ( *(_BYTE *)(((unsigned __int64)stage_data_1 >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)stage_data_1 >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          if ( (unsigned __int8)ChannellerSlabActivity::isStageFinishAllCamp(this, stage_data_1->stage_id) )
          {
            common::milog::MiLogStream::create(
              &v25,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/activity/channeller_slab_activity.cpp",
              "checkCondIsMeet",
              2056);
            v12 = common::milog::MiLogStream::operator<<<ChannellerSlabActivity,(ChannellerSlabActivity*)0>(&v25, this);
            v13 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v12, (const char (*)[8])" stage:");
            v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &stage_data_1->stage_id);
            common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v14, (const char (*)[16])" all comp done.");
            common::milog::MiLogStream::~MiLogStream(&v25);
            return 1;
          }
          __gnu_cxx::__normal_iterator<ChannellerSlabActivity::StageData *,std::vector<ChannellerSlabActivity::StageData>>::operator++(&__for_begin);
        }
        return 0;
      case NEW_ACTIVITY_COND_FINISH_CHANNELLER_SLAB_ONEOFF_DUNGEON_IN_STAGE:
        for ( idx = 0LL; idx < std::vector<int>::size(&cond->param); ++idx )
        {
          v3 = std::vector<int>::operator[](&cond->param, idx);
          if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          stage_id = *v3;
          if ( *v3 <= 0 )
          {
            common::milog::MiLogStream::create(
              &v25,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/activity/channeller_slab_activity.cpp",
              "checkCondIsMeet",
              2011);
            v4 = common::milog::MiLogStream::operator<<<ChannellerSlabActivity,(ChannellerSlabActivity*)0>(&v25, this);
            common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
              v4,
              (const char (*)[36])" oneofff dungeon cond stage id is 0");
            common::milog::MiLogStream::~MiLogStream(&v25);
            return 0;
          }
          if ( stage_id >= std::vector<ChannellerSlabActivity::StageData>::size(&this->bin_data_.stage_vec) + 1 )
            return 0;
          stage_data = std::vector<ChannellerSlabActivity::StageData>::operator[](
                         &this->bin_data_.stage_vec,
                         stage_id - 1);
          p_is_dungeon_done = &stage_data->is_dungeon_done;
          if ( *(_BYTE *)(((unsigned __int64)p_is_dungeon_done >> 3) + 0x7FFF8000) != 0
            && ((unsigned __int8)p_is_dungeon_done & 7) >= *(_BYTE *)(((unsigned __int64)p_is_dungeon_done >> 3)
                                                                    + 0x7FFF8000) )
          {
            __asan_report_load1(p_is_dungeon_done);
          }
          if ( !stage_data->is_dungeon_done )
            return 0;
        }
        return 1;
      case NEW_ACTIVITY_COND_FINISH_CHANNELLER_SLAB_ANY_ONEOFF_DUNGEON:
        __for_range = &this->bin_data_.stage_vec;
        __for_begin._M_current = std::vector<ChannellerSlabActivity::StageData>::begin(&this->bin_data_.stage_vec)._M_current;
        __for_end._M_current = std::vector<ChannellerSlabActivity::StageData>::end(&this->bin_data_.stage_vec)._M_current;
        while ( __gnu_cxx::operator!=<ChannellerSlabActivity::StageData *,std::vector<ChannellerSlabActivity::StageData>>(
                  &__for_begin,
                  &__for_end) )
        {
          stage_data_0 = __gnu_cxx::__normal_iterator<ChannellerSlabActivity::StageData *,std::vector<ChannellerSlabActivity::StageData>>::operator*(&__for_begin);
          v7 = &stage_data_0->is_dungeon_done;
          if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
            && ((unsigned __int8)v7 & 7) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load1(v7);
          }
          if ( stage_data_0->is_dungeon_done )
          {
            common::milog::MiLogStream::create(
              &v25,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/activity/channeller_slab_activity.cpp",
              "checkCondIsMeet",
              2032);
            v8 = common::milog::MiLogStream::operator<<<ChannellerSlabActivity,(ChannellerSlabActivity*)0>(&v25, this);
            v9 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v8, (const char (*)[8])" stage:");
            v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &stage_data_0->stage_id);
            common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              v10,
              (const char (*)[22])" oneoff dungeon done.");
            common::milog::MiLogStream::~MiLogStream(&v25);
            return 1;
          }
          __gnu_cxx::__normal_iterator<ChannellerSlabActivity::StageData *,std::vector<ChannellerSlabActivity::StageData>>::operator++(&__for_begin);
        }
        return 0;
      default:
        return BaseActivity::checkCondIsMeet(this, cond);
    }
  }
};

// Line 2070: range 0000000014F3818C-0000000014F381F0
void __cdecl ChannellerSlabActivity::addBuffEnergyByGm(ChannellerSlabActivity *const this, uint32_t add_energy)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->gm_add_buff_energy_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gm_add_buff_energy_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gm_add_buff_energy_);
  }
  this->gm_add_buff_energy_ = add_energy;
  BaseActivity::notifyClientData(this, 0);
};

// Line 2076: range 0000000014F381F2-0000000014F38849
int32_t __cdecl ChannellerSlabActivity::finishOneCampByGM(ChannellerSlabActivity *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  const ActivityChannellerSlabExcelConfigMgr *v4; // rdx
  common::milog::MiLogStream *v5; // rax
  int32_t v6; // r14d
  std::vector<unsigned int>::reference v7; // rdx
  int v8; // r14d
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  int32_t result; // eax
  std::map<unsigned int,std::map<unsigned int,std::vector<const data::ChannellerSlabLevelExcelConfig*>>>::const_iterator __for_begin; // [rsp+18h] [rbp-158h] BYREF
  std::map<unsigned int,std::map<unsigned int,std::vector<const data::ChannellerSlabLevelExcelConfig*>>>::const_iterator __for_end; // [rsp+20h] [rbp-150h] BYREF
  const ActivityChannellerSlabExcelConfigMgr *config_mgr; // [rsp+28h] [rbp-148h]
  const data::ChannellerSlabPreviewExcelConfig *preview_config_ptr; // [rsp+30h] [rbp-140h]
  const std::map<unsigned int,std::map<unsigned int,std::vector<const data::ChannellerSlabLevelExcelConfig*>>> *stage_rounds_level_config_map; // [rsp+38h] [rbp-138h]
  const std::map<unsigned int,std::map<unsigned int,std::vector<const data::ChannellerSlabLevelExcelConfig*>>> *__for_range; // [rsp+40h] [rbp-130h]
  const std::pair<unsigned int const,std::map<unsigned int,std::vector<const data::ChannellerSlabLevelExcelConfig*>> > *v21; // [rsp+48h] [rbp-128h]
  std::tuple_element<0,const std::pair<unsigned int const,std::map<unsigned int,std::vector<const data::ChannellerSlabLevelExcelConfig*>> > >::type *stage_id; // [rsp+50h] [rbp-120h]
  std::tuple_element<1,const std::pair<unsigned int const,std::map<unsigned int,std::vector<const data::ChannellerSlabLevelExcelConfig*>> > >::type *rounds_map; // [rsp+58h] [rbp-118h]
  common::milog::MiLogStream v24; // [rsp+60h] [rbp-110h] BYREF
  char v25[240]; // [rsp+80h] [rbp-F0h] BYREF

  v1 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(192LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "4 32 4 18 curr_stage_id:2086 48 4 18 curr_group_id:2087 64 24 18 active_groups:2090 128 32 10 event:2102";
  *(_QWORD *)(v1 + 16) = ChannellerSlabActivity::finishOneCampByGM;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556924;
  v3[536862722] = -234881024;
  v3[536862723] = -218959118;
  v3[536862725] = -202116109;
  config_mgr = ChannellerSlabActivity::getConfigMgr(this);
  v4 = config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  preview_config_ptr = data::ActivityChannellerSlabExcelConfigMgrBase::findChannellerSlabPreviewExcelConfig(
                         v4,
                         this->activity_id_);
  if ( preview_config_ptr )
  {
    stage_rounds_level_config_map = ActivityChannellerSlabExcelConfigMgr::getStageRoundsLevelConfigMap(config_mgr);
    *(_DWORD *)(v1 + 32) = 0;
    *(_DWORD *)(v1 + 48) = 0;
    __for_range = stage_rounds_level_config_map;
    __for_begin._M_node = std::map<unsigned int,std::map<unsigned int,std::vector<data::ChannellerSlabLevelExcelConfig const*>>>::begin(stage_rounds_level_config_map)._M_node;
    __for_end._M_node = std::map<unsigned int,std::map<unsigned int,std::vector<data::ChannellerSlabLevelExcelConfig const*>>>::end(stage_rounds_level_config_map)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v21 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::vector<data::ChannellerSlabLevelExcelConfig const*>>>>::operator*(&__for_begin);
      stage_id = std::get<0ul,unsigned int const,std::map<unsigned int,std::vector<data::ChannellerSlabLevelExcelConfig const*>>>(v21);
      rounds_map = (std::tuple_element<1,const std::pair<unsigned int const,std::map<unsigned int,std::vector<const data::ChannellerSlabLevelExcelConfig*>> > >::type *)std::get<1ul,unsigned int const,std::map<unsigned int,std::vector<data::ChannellerSlabLevelExcelConfig const*>>>(v21);
      std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v1 + 64));
      if ( *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)stage_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      ChannellerSlabActivity::getStageActiveCampGroups(this, *stage_id, (std::vector<unsigned int> *)(v1 + 64));
      if ( !std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v1 + 64)) )
      {
        if ( *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)stage_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v1 + 32) = *stage_id;
        v7 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v1 + 64), 0LL);
        if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v1 + 48) = *v7;
        v8 = 0;
      }
      else
      {
        v8 = 1;
      }
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v1 + 64));
      if ( v8 != 1 )
        break;
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::vector<data::ChannellerSlabLevelExcelConfig const*>>>>::operator++(&__for_begin);
    }
    if ( *(_DWORD *)(v1 + 48) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&preview_config_ptr->level_reward_gadget_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&preview_config_ptr->level_reward_gadget_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      TakeGeneralRewardEvent::TakeGeneralRewardEvent(
        (TakeGeneralRewardEvent *const)(v1 + 128),
        preview_config_ptr->level_reward_gadget_id,
        *(_DWORD *)(v1 + 48));
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/channeller_slab_activity.cpp",
        "finishOneCampByGM",
        2103);
      v9 = common::milog::MiLogStream::operator<<<ChannellerSlabActivity,(ChannellerSlabActivity*)0>(&v24, this);
      v10 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              v9,
              (const char (*)[21])" finish camp @stage:");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v1 + 32));
      v12 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v11, (const char (*)[10])" @groupd:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v1 + 48));
      common::milog::MiLogStream::~MiLogStream(&v24);
      ChannellerSlabActivity::onTakeGeneralRewardEvent(this, (const TakeGeneralRewardEvent *)(v1 + 128));
      v6 = 0;
      TakeGeneralRewardEvent::~TakeGeneralRewardEvent((TakeGeneralRewardEvent *const)(v1 + 128));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/channeller_slab_activity.cpp",
        "finishOneCampByGM",
        2109);
      v13 = common::milog::MiLogStream::operator<<<ChannellerSlabActivity,(ChannellerSlabActivity*)0>(&v24, this);
      common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v13, (const char (*)[16])" ALL camp Done!");
      common::milog::MiLogStream::~MiLogStream(&v24);
      v6 = -1;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/channeller_slab_activity.cpp",
      "finishOneCampByGM",
      2081);
    v5 = common::milog::MiLogStream::operator<<<ChannellerSlabActivity,(ChannellerSlabActivity*)0>(&v24, this);
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(v5, (const char (*)[25])" preivew config nullptr.");
    common::milog::MiLogStream::~MiLogStream(&v24);
    v6 = -1;
  }
  result = v6;
  if ( v25 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8014) = 0;
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

// Line 2116: range 0000000014F3884A-0000000014F3887A
int32_t __cdecl ChannellerSlabActivity::resetAllCampByGM(ChannellerSlabActivity *const this)
{
  std::vector<ChannellerSlabActivity::StageData>::clear(&this->bin_data_.stage_vec);
  BaseActivity::updateAllConds(this);
  return 0;
};

// Line 2123: range 0000000014F3887C-0000000014F39695
__int64 __fastcall ChannellerSlabActivity::resetChannellerSlabCampGroupByMuip(
        ChannellerSlabActivity *const this,
        uint32_t stage_id,
        uint32_t round_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  unsigned int v9; // r14d
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  unsigned __int64 v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  std::vector<unsigned int>::reference v20; // rdx
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  unsigned __int64 v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  Scene *v29; // rax
  unsigned __int64 BlockGroupComp; // rax
  unsigned __int64 v31; // rdx
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  Scene *v35; // rax
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rdx
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  __int64 result; // rax
  std::vector<ChannellerSlabActivity::StageData>::size_type v43; // [rsp+8h] [rbp-1D8h]
  std::vector<unsigned int>::size_type v44; // [rsp+8h] [rbp-1D8h]
  PlayerSceneComp *SceneComp; // [rsp+8h] [rbp-1D8h]
  std::allocator<unsigned int> __a; // [rsp+23h] [rbp-1BDh] BYREF
  _DWORD __l[5]; // [rsp+24h] [rbp-1BCh] BYREF
  std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::iterator __for_end; // [rsp+38h] [rbp-1A8h] BYREF
  const ActivityChannellerSlabExcelConfigMgr *config_mgr; // [rsp+40h] [rbp-1A0h]
  const std::map<unsigned int,std::vector<const data::ChannellerSlabLevelExcelConfig*>> *round_camp_config_map_ptr; // [rsp+48h] [rbp-198h]
  const std::vector<const data::ChannellerSlabLevelExcelConfig*> *camp_config_vec; // [rsp+50h] [rbp-190h]
  const data::ChannellerSlabLevelExcelConfig *first_camp_config_ptr; // [rsp+58h] [rbp-188h]
  ChannellerSlabActivity::StageData *stage_data; // [rsp+60h] [rbp-180h]
  const data::ChannellerSlabLevelExcelConfig *camp_config_ptr; // [rsp+68h] [rbp-178h]
  std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *__for_range; // [rsp+70h] [rbp-170h]
  std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > *__in; // [rsp+78h] [rbp-168h]
  std::tuple_element<0,std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::type *scene_ptr; // [rsp+80h] [rbp-160h]
  std::tuple_element<1,std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::type *group_vec; // [rsp+88h] [rbp-158h]
  std::vector<unsigned int> v60; // [rsp+90h] [rbp-150h] BYREF
  common::milog::MiLogStream v61; // [rsp+B0h] [rbp-130h] BYREF
  char v62[272]; // [rsp+D0h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v62;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 4 18 camp_group_id:2151 48 4 13 stage_id:2122 64 4 13 round_id:2122 80 8 15 round_iter:2131"
                        " 112 8 20 first_camp_iter:2139 144 48 20 scene_group_map:2182";
  *(_QWORD *)(v3 + 16) = ChannellerSlabActivity::resetChannellerSlabCampGroupByMuip;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = 61956;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862723] = -234881024;
  v5[536862724] = 62194;
  v5[536862726] = -202116109;
  *(_DWORD *)(v3 + 48) = stage_id;
  *(_DWORD *)(v3 + 64) = round_id;
  config_mgr = ChannellerSlabActivity::getConfigMgr(this);
  round_camp_config_map_ptr = ActivityChannellerSlabExcelConfigMgr::getRoundCampsMapByStageID(
                                config_mgr,
                                *(_DWORD *)(v3 + 48));
  if ( !round_camp_config_map_ptr )
  {
    common::milog::MiLogStream::create(
      &v61,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/channeller_slab_activity.cpp",
      "resetChannellerSlabCampGroupByMuip",
      2128);
    v6 = common::milog::MiLogStream::operator<<<ChannellerSlabActivity,(ChannellerSlabActivity*)0>(&v61, this);
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])" stage:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
      v8,
      (const char (*)[33])" round camp config map not found");
    common::milog::MiLogStream::~MiLogStream(&v61);
    v9 = -1;
    goto LABEL_50;
  }
  *(std::map<unsigned int,std::vector<const data::ChannellerSlabLevelExcelConfig*>>::const_iterator *)(v3 + 80) = std::map<unsigned int,std::vector<data::ChannellerSlabLevelExcelConfig const*>>::find(round_camp_config_map_ptr, (const std::map<unsigned int,std::vector<const data::ChannellerSlabLevelExcelConfig*>>::key_type *)(v3 + 64));
  __for_end._M_node = (std::_Rb_tree_iterator<std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::_Base_ptr)std::map<unsigned int,std::vector<data::ChannellerSlabLevelExcelConfig const*>>::end(round_camp_config_map_ptr)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<const data::ChannellerSlabLevelExcelConfig*> > >::_Self *)(v3 + 80),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<const data::ChannellerSlabLevelExcelConfig*> > >::_Self *)&__for_end) )
  {
    common::milog::MiLogStream::create(
      &v61,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/channeller_slab_activity.cpp",
      "resetChannellerSlabCampGroupByMuip",
      2134);
    v10 = common::milog::MiLogStream::operator<<<ChannellerSlabActivity,(ChannellerSlabActivity*)0>(&v61, this);
    v11 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v10, (const char (*)[8])" round:");
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 64));
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v12, (const char (*)[18])" config not found");
    common::milog::MiLogStream::~MiLogStream(&v61);
    v9 = -1;
    goto LABEL_50;
  }
  camp_config_vec = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<data::ChannellerSlabLevelExcelConfig const*>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<const data::ChannellerSlabLevelExcelConfig*> > > *const)(v3 + 80))->second;
  *(std::vector<const data::ChannellerSlabLevelExcelConfig*>::const_iterator *)(v3 + 112) = std::vector<data::ChannellerSlabLevelExcelConfig const*>::begin(camp_config_vec);
  __for_end._M_node = (std::_Rb_tree_iterator<std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::_Base_ptr)std::vector<data::ChannellerSlabLevelExcelConfig const*>::end(camp_config_vec)._M_current;
  if ( __gnu_cxx::operator==<data::ChannellerSlabLevelExcelConfig const* const*,std::vector<data::ChannellerSlabLevelExcelConfig const*>>(
         (const __gnu_cxx::__normal_iterator<const data::ChannellerSlabLevelExcelConfig* const*,std::vector<const data::ChannellerSlabLevelExcelConfig*> > *)(v3 + 112),
         (const __gnu_cxx::__normal_iterator<const data::ChannellerSlabLevelExcelConfig* const*,std::vector<const data::ChannellerSlabLevelExcelConfig*> > *)&__for_end) )
  {
    common::milog::MiLogStream::create(
      &v61,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/channeller_slab_activity.cpp",
      "resetChannellerSlabCampGroupByMuip",
      2142);
    v13 = common::milog::MiLogStream::operator<<<ChannellerSlabActivity,(ChannellerSlabActivity*)0>(&v61, this);
    v14 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v13, (const char (*)[8])" round:");
    v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 64));
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(v15, (const char (*)[25])" has not group in config");
    common::milog::MiLogStream::~MiLogStream(&v61);
    v9 = -1;
    goto LABEL_50;
  }
  v16 = (unsigned __int64)__gnu_cxx::__normal_iterator<data::ChannellerSlabLevelExcelConfig const* const*,std::vector<data::ChannellerSlabLevelExcelConfig const*>>::operator*((const __gnu_cxx::__normal_iterator<const data::ChannellerSlabLevelExcelConfig* const*,std::vector<const data::ChannellerSlabLevelExcelConfig*> > *const)(v3 + 112));
  if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
    v16 = __asan_report_load8();
  first_camp_config_ptr = *(const data::ChannellerSlabLevelExcelConfig **)v16;
  if ( !first_camp_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v61,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/channeller_slab_activity.cpp",
      "resetChannellerSlabCampGroupByMuip",
      2148);
    v17 = common::milog::MiLogStream::operator<<<ChannellerSlabActivity,(ChannellerSlabActivity*)0>(&v61, this);
    v18 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v17, (const char (*)[8])" round:");
    v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v3 + 64));
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v19, (const char (*)[21])" camp config nullptr");
    common::milog::MiLogStream::~MiLogStream(&v61);
    v9 = -1;
    goto LABEL_50;
  }
  if ( *(_BYTE *)(((unsigned __int64)&first_camp_config_ptr->group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)first_camp_config_ptr + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&first_camp_config_ptr->group_id >> 3)
                                                                         + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  *(_DWORD *)(v3 + 32) = first_camp_config_ptr->group_id;
  v43 = *(unsigned int *)(v3 + 48);
  if ( v43 < std::vector<ChannellerSlabActivity::StageData>::size(&this->bin_data_.stage_vec) + 1 )
  {
    stage_data = std::vector<ChannellerSlabActivity::StageData>::operator[](
                   &this->bin_data_.stage_vec,
                   (unsigned int)(*(_DWORD *)(v3 + 48) - 1));
    v44 = *(unsigned int *)(v3 + 64);
    if ( v44 < std::vector<unsigned int>::size(&stage_data->active_camp_vec) + 1 )
    {
      v20 = std::vector<unsigned int>::operator[](
              &stage_data->active_camp_vec,
              (unsigned int)(*(_DWORD *)(v3 + 64) - 1));
      if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      __l[1] = *v20;
      if ( __l[1] >= std::vector<data::ChannellerSlabLevelExcelConfig const*>::size(camp_config_vec) )
      {
        *(_DWORD *)(v3 + 32) = 0;
        common::milog::MiLogStream::create(
          &v61,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/channeller_slab_activity.cpp",
          "resetChannellerSlabCampGroupByMuip",
          2167);
        v21 = common::milog::MiLogStream::operator<<<ChannellerSlabActivity,(ChannellerSlabActivity*)0>(&v61, this);
        v22 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v21, (const char (*)[8])" stage:");
        v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v22,
                (const unsigned int *)(v3 + 48));
        v24 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v23, (const char (*)[8])" round:");
        v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v24,
                (const unsigned int *)(v3 + 64));
        common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v25, (const char (*)[16])" all camp done.");
        common::milog::MiLogStream::~MiLogStream(&v61);
        v9 = 0;
        goto LABEL_50;
      }
      v26 = (unsigned __int64)std::vector<data::ChannellerSlabLevelExcelConfig const*>::operator[](
                                camp_config_vec,
                                __l[1]);
      if ( *(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
        v26 = __asan_report_load8();
      camp_config_ptr = *(const data::ChannellerSlabLevelExcelConfig **)v26;
      if ( camp_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&camp_config_ptr->group_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)camp_config_ptr + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&camp_config_ptr->group_id >> 3)
                                                                         + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v3 + 32) = camp_config_ptr->group_id;
      }
    }
  }
  std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::map((std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *const)(v3 + 144));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = Player::getSceneComp(this->player_);
  __l[0] = *(_DWORD *)(v3 + 32);
  std::allocator<unsigned int>::allocator(&__a);
  std::vector<unsigned int>::vector(&v60, (std::initializer_list<unsigned int>)__PAIR128__(1LL, __l), &__a);
  __l[2] = PlayerSceneComp::getGroupSceneMap(
             SceneComp,
             &v60,
             (std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *)(v3 + 144));
  std::vector<unsigned int>::~vector(&v60);
  std::allocator<unsigned int>::~allocator(&__a);
  if ( __l[2] )
  {
    __for_range = (std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *)(v3 + 144);
    *(std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::iterator *)&__l[3] = std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::begin((std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *const)(v3 + 144));
    __for_end._M_node = std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::end(__for_range)._M_node;
    while ( std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::_Self *)&__l[3],
              &__for_end) )
    {
      __in = std::_Rb_tree_iterator<std::pair<std::shared_ptr<Scene> const,std::vector<unsigned int>>>::operator*((const std::_Rb_tree_iterator<std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > > *const)&__l[3]);
      scene_ptr = std::get<0ul,std::shared_ptr<Scene> const,std::vector<unsigned int>>(__in);
      group_vec = std::get<1ul,std::shared_ptr<Scene> const,std::vector<unsigned int>>(__in);
      if ( !std::operator==<Scene>(0LL, scene_ptr) )
      {
        v29 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)scene_ptr);
        BlockGroupComp = (unsigned __int64)Scene::getBlockGroupComp(v29);
        if ( *(_BYTE *)((BlockGroupComp >> 3) + 0x7FFF8000) )
          BlockGroupComp = __asan_report_load8();
        v31 = *(_QWORD *)BlockGroupComp + 104LL;
        if ( *(_BYTE *)((v31 >> 3) + 0x7FFF8000) )
          BlockGroupComp = __asan_report_load8();
        if ( (*(unsigned int (__fastcall **)(unsigned __int64, std::tuple_element<1,std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::type *, __int64))v31)(
               BlockGroupComp,
               group_vec,
               1LL) )
        {
          common::milog::MiLogStream::create(
            &v61,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/channeller_slab_activity.cpp",
            "resetChannellerSlabCampGroupByMuip",
            2197);
          v32 = common::milog::MiLogStream::operator<<<ChannellerSlabActivity,(ChannellerSlabActivity*)0>(&v61, this);
          v33 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                  v32,
                  (const char (*)[19])" unregister group:");
          v34 = common::milog::MiLogStream::operator<<<unsigned int>(v33, group_vec);
          common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v34, (const char (*)[9])" failed.");
          common::milog::MiLogStream::~MiLogStream(&v61);
        }
        v35 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)scene_ptr);
        v36 = (unsigned __int64)Scene::getBlockGroupComp(v35);
        if ( *(_BYTE *)((v36 >> 3) + 0x7FFF8000) )
          v36 = __asan_report_load8();
        v37 = *(_QWORD *)v36 + 96LL;
        if ( *(_BYTE *)((v37 >> 3) + 0x7FFF8000) )
          v36 = __asan_report_load8();
        if ( (*(unsigned int (__fastcall **)(unsigned __int64, std::tuple_element<1,std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > >::type *, _QWORD, _QWORD))v37)(
               v36,
               group_vec,
               0LL,
               0LL) )
        {
          common::milog::MiLogStream::create(
            &v61,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/channeller_slab_activity.cpp",
            "resetChannellerSlabCampGroupByMuip",
            2201);
          v38 = common::milog::MiLogStream::operator<<<ChannellerSlabActivity,(ChannellerSlabActivity*)0>(&v61, this);
          v39 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                  v38,
                  (const char (*)[17])" register group:");
          v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v39,
                  (const unsigned int *)(v3 + 32));
          common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v40, (const char (*)[9])" failed.");
          common::milog::MiLogStream::~MiLogStream(&v61);
        }
      }
      std::_Rb_tree_iterator<std::pair<std::shared_ptr<Scene> const,std::vector<unsigned int>>>::operator++((std::_Rb_tree_iterator<std::pair<const std::shared_ptr<Scene>,std::vector<unsigned int> > > *const)&__l[3]);
    }
    common::milog::MiLogStream::create(
      &v61,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/channeller_slab_activity.cpp",
      "resetChannellerSlabCampGroupByMuip",
      2205);
    v41 = common::milog::MiLogStream::operator<<<ChannellerSlabActivity,(ChannellerSlabActivity*)0>(&v61, this);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v41, (const char (*)[12])" reset done");
    common::milog::MiLogStream::~MiLogStream(&v61);
    v9 = 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v61,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/channeller_slab_activity.cpp",
      "resetChannellerSlabCampGroupByMuip",
      2186);
    v27 = common::milog::MiLogStream::operator<<<ChannellerSlabActivity,(ChannellerSlabActivity*)0>(&v61, this);
    v28 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
            v27,
            (const char (*)[32])" get group scene failed. group:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v61);
    v9 = -1;
  }
  std::map<std::shared_ptr<Scene>,std::vector<unsigned int>>::~map((std::map<std::shared_ptr<Scene>,std::vector<unsigned int>> *const)(v3 + 144));
LABEL_50:
  result = v9;
  if ( v62 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
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
  return result;
};

// Line 2210: range 0000000014F39696-0000000014F39766
int32_t __cdecl ChannellerSlabActivity::addAllBuffByGM(ChannellerSlabActivity *const this)
{
  std::unordered_map<unsigned int,data::ChannellerSlabBuffExcelConfig>::const_iterator __for_begin; // [rsp+18h] [rbp-38h] BYREF
  std::unordered_map<unsigned int,data::ChannellerSlabBuffExcelConfig>::const_iterator __for_end; // [rsp+20h] [rbp-30h] BYREF
  const std::unordered_map<unsigned int,data::ChannellerSlabBuffExcelConfig> *slab_buff_excel_config_map; // [rsp+28h] [rbp-28h]
  const std::unordered_map<unsigned int,data::ChannellerSlabBuffExcelConfig> *__for_range; // [rsp+30h] [rbp-20h]
  const std::pair<unsigned int const,data::ChannellerSlabBuffExcelConfig> *v6; // [rsp+38h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,data::ChannellerSlabBuffExcelConfig> >::type *buff_id; // [rsp+40h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ChannellerSlabBuffExcelConfig> >::type *_; // [rsp+48h] [rbp-8h]

  slab_buff_excel_config_map = &ChannellerSlabActivity::getConfigMgr(this)->channeller_slab_buff_excel_config_map;
  __for_range = slab_buff_excel_config_map;
  __for_begin._M_cur = std::unordered_map<unsigned int,data::ChannellerSlabBuffExcelConfig>::begin(slab_buff_excel_config_map)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,data::ChannellerSlabBuffExcelConfig>::end(slab_buff_excel_config_map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ChannellerSlabBuffExcelConfig>,false>(
            &__for_begin,
            &__for_end) )
  {
    v6 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ChannellerSlabBuffExcelConfig>,false,false>::operator*(&__for_begin);
    buff_id = std::get<0ul,unsigned int const,data::ChannellerSlabBuffExcelConfig>(v6);
    _ = (std::tuple_element<1,const std::pair<unsigned int const,data::ChannellerSlabBuffExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ChannellerSlabBuffExcelConfig>(v6);
    std::unordered_set<unsigned int>::insert(&this->bin_data_.buff_data.buff_id_set, buff_id);
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ChannellerSlabBuffExcelConfig>,false,false>::operator++(&__for_begin);
  }
  BaseActivity::notifyClientData(this, 0);
  return 0;
};
