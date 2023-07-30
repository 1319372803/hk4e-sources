// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/quest/quest.cpp

// Line 45: range 00000000143B5DD4-00000000143B630A
int32_t __cdecl Quest::fromBin(Quest *const this, const proto::QuestBin *bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  __int64 v5; // rcx
  char v6; // dl
  __int64 v7; // rdx
  int v8; // eax
  google::protobuf::uint32 v9; // r14d
  std::vector<unsigned int>::reference v10; // rax
  google::protobuf::uint32 *v11; // rdx
  char v12; // cl
  __int64 v13; // rsi
  __int64 v14; // rcx
  std::vector<unsigned int>::size_type v15; // rsi
  google::protobuf::uint32 v16; // r14d
  std::vector<unsigned int>::reference v17; // rax
  google::protobuf::uint32 *v18; // rdx
  char v19; // cl
  __int64 v20; // rcx
  __int64 started; // rdx
  char v22; // al
  __int64 v23; // rcx
  char v24; // dl
  __int64 v25; // rdx
  __int64 v26; // rdx
  char v27; // al
  Quest::QuestTalkRecord *v28; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,Quest::QuestTalkRecord> >,bool> v29; // rax
  common::milog::MiLogStream *v30; // rax
  int32_t result; // eax
  const proto::QuestBin *bina; // [rsp+0h] [rbp-D0h]
  int i; // [rsp+18h] [rbp-B8h]
  int i_0; // [rsp+1Ch] [rbp-B4h]
  google::protobuf::RepeatedPtrField<proto::QuestTalkRecordBin>::const_iterator __for_begin; // [rsp+20h] [rbp-B0h] BYREF
  google::protobuf::RepeatedPtrField<proto::QuestTalkRecordBin>::const_iterator __for_end; // [rsp+28h] [rbp-A8h] BYREF
  const google::protobuf::RepeatedPtrField<proto::QuestTalkRecordBin> *__for_range; // [rsp+30h] [rbp-A0h]
  const proto::QuestTalkRecordBin *proto_talk_record_bin; // [rsp+38h] [rbp-98h]
  common::milog::MiLogStream v39; // [rsp+40h] [rbp-90h] BYREF
  char v40[112]; // [rsp+60h] [rbp-70h] BYREF

  bina = bin;
  v2 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 14 talk_record:69";
  *(_QWORD *)(v2 + 16) = Quest::fromBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  v5 = proto::QuestBin::state(bin);
  v6 = *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000);
  LOBYTE(bin) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((char)((((_BYTE)this + 20) & 7) + 3) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store4(&this->state_, bin, v7, v5);
  this->state_ = v5;
  v8 = proto::QuestBin::finish_progress_list_size(bina);
  std::vector<unsigned int>::resize(&this->content_finish_progress_vec_, v8);
  for ( i = 0; i < proto::QuestBin::finish_progress_list_size(bina); ++i )
  {
    v9 = proto::QuestBin::finish_progress_list(bina, i);
    v13 = i;
    v10 = std::vector<unsigned int>::operator[](&this->content_finish_progress_vec_, i);
    v11 = v10;
    v12 = *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000);
    LOBYTE(v13) = v12 != 0;
    v14 = (v12 != 0) & (unsigned __int8)((char)(((unsigned __int8)v10 & 7) + 3) >= v12);
    if ( (_BYTE)v14 )
      __asan_report_store4(v10, v13, v10, v14);
    *v11 = v9;
  }
  v15 = proto::QuestBin::fail_progress_list_size(bina);
  std::vector<unsigned int>::resize(&this->content_fail_progress_vec_, v15);
  for ( i_0 = 0; i_0 < proto::QuestBin::fail_progress_list_size(bina); ++i_0 )
  {
    v16 = proto::QuestBin::fail_progress_list(bina, i_0);
    v15 = i_0;
    v17 = std::vector<unsigned int>::operator[](&this->content_fail_progress_vec_, i_0);
    v18 = v17;
    v19 = *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000);
    LOBYTE(v15) = v19 != 0;
    v20 = (v19 != 0) & (unsigned __int8)((char)(((unsigned __int8)v17 & 7) + 3) >= v19);
    if ( (_BYTE)v20 )
      __asan_report_store4(v17, v15, v17, v20);
    *v18 = v16;
  }
  started = proto::QuestBin::start_time(bina);
  v22 = *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000);
  if ( v22 != 0 && v22 <= 3 )
  {
    LOBYTE(v15) = v22 != 0;
    __asan_report_store4(&this->start_time_, v15, started, &this->start_time_);
  }
  this->start_time_ = started;
  v23 = proto::QuestBin::start_game_time(bina);
  v24 = *(_BYTE *)(((unsigned __int64)&this->start_game_time_ >> 3) + 0x7FFF8000);
  LOBYTE(v15) = v24 != 0;
  v25 = (v24 != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= v24);
  if ( (_BYTE)v25 )
    __asan_report_store4(&this->start_game_time_, v15, v25, v23);
  this->start_game_time_ = v23;
  v26 = proto::QuestBin::accept_time(bina);
  v27 = *(_BYTE *)(((unsigned __int64)&this->accept_time_ >> 3) + 0x7FFF8000);
  if ( v27 != 0 && v27 <= 3 )
  {
    LOBYTE(v15) = v27 != 0;
    __asan_report_store4(&this->accept_time_, v15, v26, &this->accept_time_);
  }
  this->accept_time_ = v26;
  __for_range = proto::QuestBin::talk_history_list(bina);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::QuestTalkRecordBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::QuestTalkRecordBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::QuestTalkRecordBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    proto_talk_record_bin = google::protobuf::internal::RepeatedPtrIterator<proto::QuestTalkRecordBin const>::operator*(&__for_begin);
    *(_DWORD *)(v2 + 32) = proto::QuestTalkRecordBin::talk_id(proto_talk_record_bin);
    *(_DWORD *)(v2 + 36) = proto::QuestTalkRecordBin::talk_time(proto_talk_record_bin);
    v29 = std::map<unsigned int,Quest::QuestTalkRecord>::emplace<unsigned int &,Quest::QuestTalkRecord&>(
            &this->talk_history_map_,
            (unsigned int *)(v2 + 32),
            (Quest::QuestTalkRecord *)(v2 + 32),
            (unsigned int *)&this->talk_history_map_,
            v28);
    if ( !v29.second )
    {
      common::milog::MiLogStream::create(
        &v39,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/quest/quest.cpp",
        "fromBin",
        72);
      v30 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
              &v39,
              (const char (*)[28])"duplicate talk_id, talk_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v39);
      result = -1;
      goto LABEL_28;
    }
    google::protobuf::internal::RepeatedPtrIterator<proto::QuestTalkRecordBin const>::operator++(&__for_begin);
  }
  result = 0;
LABEL_28:
  if ( v40 == (char *)v2 )
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

// Line 82: range 00000000143B630C-00000000143B672D
int32_t __cdecl Quest::toBin(const Quest *const this, proto::QuestBin *bin)
{
  unsigned int *v2; // rax
  google::protobuf::uint32 *v3; // rdx
  unsigned int *v4; // rax
  google::protobuf::uint32 *v5; // rdx
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-48h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-40h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+28h] [rbp-38h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+30h] [rbp-30h]
  const std::map<unsigned int,Quest::QuestTalkRecord> *__for_range_1; // [rsp+38h] [rbp-28h]
  const std::pair<unsigned int const,Quest::QuestTalkRecord> *v12; // [rsp+40h] [rbp-20h]
  std::tuple_element<0,const std::pair<unsigned int const,Quest::QuestTalkRecord> >::type *talk_id; // [rsp+48h] [rbp-18h]
  std::tuple_element<1,const std::pair<unsigned int const,Quest::QuestTalkRecord> >::type *talk_record; // [rsp+50h] [rbp-10h]
  proto::QuestTalkRecordBin *proto_talk_record_bin; // [rsp+58h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&this->quest_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->quest_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->quest_id_);
  }
  proto::QuestBin::set_quest_id(bin, this->quest_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->state_);
  }
  proto::QuestBin::set_state(bin, this->state_);
  __for_range = &this->content_finish_progress_vec_;
  __for_begin._M_current = std::vector<unsigned int>::begin(&this->content_finish_progress_vec_)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(&this->content_finish_progress_vec_)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v2 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    v3 = v2;
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v2);
    }
    proto::QuestBin::add_finish_progress_list(bin, *v3);
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  __for_range_0 = &this->content_fail_progress_vec_;
  __for_begin._M_current = std::vector<unsigned int>::begin(&this->content_fail_progress_vec_)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(__for_range_0)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v4 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    v5 = v4;
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v4);
    }
    proto::QuestBin::add_fail_progress_list(bin, *v5);
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->start_time_);
  }
  proto::QuestBin::set_start_time(bin, this->start_time_);
  if ( *(_BYTE *)(((unsigned __int64)&this->start_game_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->start_game_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->start_game_time_);
  }
  proto::QuestBin::set_start_game_time(bin, this->start_game_time_);
  if ( *(_BYTE *)(((unsigned __int64)&this->accept_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->accept_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->accept_time_);
  }
  proto::QuestBin::set_accept_time(bin, this->accept_time_);
  __for_range_1 = &this->talk_history_map_;
  __for_begin._M_current = (const unsigned int *)std::map<unsigned int,Quest::QuestTalkRecord>::begin(&this->talk_history_map_)._M_node;
  __for_end._M_current = (const unsigned int *)std::map<unsigned int,Quest::QuestTalkRecord>::end(__for_range_1)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,Quest::QuestTalkRecord> >::_Self *)&__for_begin,
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,Quest::QuestTalkRecord> >::_Self *)&__for_end) )
  {
    v12 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,Quest::QuestTalkRecord>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,Quest::QuestTalkRecord> > *const)&__for_begin);
    talk_id = std::get<0ul,unsigned int const,Quest::QuestTalkRecord>(v12);
    talk_record = (std::tuple_element<1,const std::pair<unsigned int const,Quest::QuestTalkRecord> >::type *)std::get<1ul,unsigned int const,Quest::QuestTalkRecord>(v12);
    proto_talk_record_bin = proto::QuestBin::add_talk_history_list(bin);
    if ( *(_BYTE *)(((unsigned __int64)talk_record >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)talk_record & 7) + 3) >= *(_BYTE *)(((unsigned __int64)talk_record >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(talk_record);
    }
    proto::QuestTalkRecordBin::set_talk_id(proto_talk_record_bin, talk_record->talk_id);
    if ( *(_BYTE *)(((unsigned __int64)&talk_record->talk_time >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)talk_record + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&talk_record->talk_time >> 3)
                                                                + 0x7FFF8000) )
    {
      __asan_report_load4(&talk_record->talk_time);
    }
    proto::QuestTalkRecordBin::set_talk_time(proto_talk_record_bin, talk_record->talk_time);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,Quest::QuestTalkRecord>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,Quest::QuestTalkRecord> > *const)&__for_begin);
  }
  return 0;
};

// Line 110: range 00000000143B672E-00000000143B6EED
int32_t __cdecl Quest::toClient(const Quest *const this, proto::Quest *quest)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // rax
  int32_t v6; // r14d
  Player *v7; // rax
  PlayerQuestComp *QuestComp; // rcx
  Player *v9; // rax
  PlayerQuestComp *v10; // rcx
  uint32_t ParentQuestId; // edx
  Player *v12; // rax
  PlayerQuestComp *v13; // rcx
  google::protobuf::uint32 QuestConfigId; // edx
  Player *v15; // rax
  PlayerQuestComp *p_quest_id; // rdi
  Player *v17; // rax
  PlayerQuestComp *v18; // rdi
  unsigned int *v19; // rax
  google::protobuf::uint32 *v20; // rdx
  unsigned int *v21; // rax
  google::protobuf::uint32 *v22; // rdx
  Player *v23; // rax
  PlayerQuestComp *v24; // rcx
  uint32_t v25; // edx
  int32_t result; // eax
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-B0h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-A8h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+30h] [rbp-A0h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+38h] [rbp-98h]
  common::milog::MiLogStream v32; // [rsp+40h] [rbp-90h] BYREF
  char v33[112]; // [rsp+60h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 player_ptr:111";
  *(_QWORD *)(v2 + 16) = Quest::toClient;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  Quest::getOwner((const Quest *const)(v2 + 32));
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v32,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/quest/quest.cpp",
      "toClient",
      114);
    v5 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
           &v32,
           (const char (*)[27])"getOwner failed, quest_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->quest_id_);
    common::milog::MiLogStream::~MiLogStream(&v32);
    v6 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->quest_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->quest_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->quest_id_);
    }
    proto::Quest::set_quest_id(quest, this->quest_id_);
    if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->state_);
    }
    proto::Quest::set_state(quest, this->state_);
    if ( *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->start_time_);
    }
    proto::Quest::set_start_time(quest, this->start_time_);
    if ( *(_BYTE *)(((unsigned __int64)&this->start_game_time_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->start_game_time_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->start_game_time_);
    }
    proto::Quest::set_start_game_time(quest, this->start_game_time_);
    if ( *(_BYTE *)(((unsigned __int64)&this->accept_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->accept_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->accept_time_);
    }
    proto::Quest::set_accept_time(quest, this->accept_time_);
    v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    QuestComp = Player::getQuestComp(v7);
    if ( *(_BYTE *)(((unsigned __int64)&this->quest_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->quest_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->quest_id_);
    }
    if ( PlayerQuestComp::isRandomQuest(QuestComp, this->quest_id_) )
    {
      proto::Quest::set_is_random(quest, 1);
      v9 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      v10 = Player::getQuestComp(v9);
      if ( *(_BYTE *)(((unsigned __int64)&this->quest_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->quest_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->quest_id_);
      }
      ParentQuestId = PlayerQuestComp::findParentQuestId(v10, this->quest_id_);
      proto::Quest::set_parent_quest_id(quest, ParentQuestId);
      v12 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      v13 = Player::getQuestComp(v12);
      if ( *(_BYTE *)(((unsigned __int64)&this->quest_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->quest_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->quest_id_);
      }
      QuestConfigId = PlayerQuestComp::findQuestConfigId(v13, this->quest_id_);
      proto::Quest::set_quest_config_id(quest, QuestConfigId);
    }
    v15 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    p_quest_id = Player::getQuestComp(v15);
    if ( *(_BYTE *)(((unsigned __int64)&this->quest_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->quest_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      p_quest_id = (PlayerQuestComp *)&this->quest_id_;
      __asan_report_load4(&this->quest_id_);
    }
    PlayerQuestComp::calcLackingNpcList(p_quest_id, this, quest, this->quest_id_);
    v17 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v18 = Player::getQuestComp(v17);
    if ( *(_BYTE *)(((unsigned __int64)&this->quest_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->quest_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      v18 = (PlayerQuestComp *)&this->quest_id_;
      __asan_report_load4(&this->quest_id_);
    }
    PlayerQuestComp::calcLackingPlaceList(v18, this, quest, this->quest_id_);
    __for_range = &this->content_finish_progress_vec_;
    __for_begin._M_current = std::vector<unsigned int>::begin(&this->content_finish_progress_vec_)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(&this->content_finish_progress_vec_)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v19 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
      v20 = v19;
      if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v19);
      }
      proto::Quest::add_finish_progress_list(quest, *v20);
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    __for_range_0 = &this->content_fail_progress_vec_;
    __for_begin._M_current = std::vector<unsigned int>::begin(&this->content_fail_progress_vec_)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v21 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
      v22 = v21;
      if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v21 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v21);
      }
      proto::Quest::add_fail_progress_list(quest, *v22);
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    v23 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v24 = Player::getQuestComp(v23);
    if ( *(_BYTE *)(((unsigned __int64)&this->quest_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->quest_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->quest_id_);
    }
    v25 = PlayerQuestComp::findParentQuestId(v24, this->quest_id_);
    proto::Quest::set_parent_quest_id(quest, v25);
    v6 = 0;
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 32));
  result = v6;
  if ( v33 == (char *)v2 )
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

// Line 147: range 00000000143B6EEE-00000000143B719C
const data::QuestExcelConfig *__cdecl Quest::getQuestConfig(const Quest *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  common::milog::MiLogStream *v4; // rax
  const data::QuestExcelConfig *v5; // r14
  Player *v6; // rax
  PlayerQuestComp *QuestComp; // rcx
  common::milog::MiLogStream *v8; // rax
  const data::QuestExcelConfig *result; // rax
  const data::QuestExcelConfig *quest_config_ptr; // [rsp+18h] [rbp-98h]
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-90h] BYREF
  char v12[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 14 player_ptr:148";
  *(_QWORD *)(v1 + 16) = Quest::getQuestConfig;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v1 + 32));
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v1 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/quest/quest.cpp",
      "getQuestConfig",
      151);
    v4 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
           &v11,
           (const char (*)[27])"getOwner failed, quest_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->quest_id_);
    common::milog::MiLogStream::~MiLogStream(&v11);
    v5 = 0LL;
  }
  else
  {
    v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    QuestComp = Player::getQuestComp(v6);
    if ( *(_BYTE *)(((unsigned __int64)&this->quest_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->quest_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->quest_id_);
    }
    quest_config_ptr = PlayerQuestComp::findPlayerQuestExcelConfig(QuestComp, this->quest_id_);
    if ( quest_config_ptr )
    {
      v5 = quest_config_ptr;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/quest/quest.cpp",
        "getQuestConfig",
        158);
      v8 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
             &v11,
             (const char (*)[44])"findPlayerQuestExcelConfig fails, quest_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->quest_id_);
      common::milog::MiLogStream::~MiLogStream(&v11);
      v5 = 0LL;
    }
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 32));
  result = v5;
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

// Line 166: range 00000000143B719E-00000000143B743D
int32_t __cdecl Quest::onAccept(Quest *const this, PlayerPtr *p_player_ptr)
{
  common::milog::MiLogStream *v2; // rax
  Player *v4; // rax
  PlayerQuestComp *QuestComp; // rcx
  common::milog::MiLogStream *v6; // rax
  std::vector<unsigned int>::size_type v7; // rax
  std::vector<unsigned int>::size_type v8; // rax
  __int64 v9; // rcx
  __int64 Now; // rsi
  char v11; // al
  Player *v12; // rdx
  data::QuestState old_state; // [rsp+14h] [rbp-3Ch]
  const data::QuestExcelConfig *quest_config_ptr; // [rsp+18h] [rbp-38h]
  common::milog::MiLogStream v16; // [rsp+20h] [rbp-30h] BYREF

  if ( std::operator==<Player>(p_player_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/quest/quest.cpp",
      "onAccept",
      169);
    v2 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
           &v16,
           (const char (*)[27])"getOwner failed, quest_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &this->quest_id_);
    common::milog::MiLogStream::~MiLogStream(&v16);
    return -1;
  }
  else
  {
    v4 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
    QuestComp = Player::getQuestComp(v4);
    if ( *(_BYTE *)(((unsigned __int64)&this->quest_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->quest_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->quest_id_);
    }
    quest_config_ptr = PlayerQuestComp::findPlayerQuestExcelConfig(QuestComp, this->quest_id_);
    if ( quest_config_ptr )
    {
      v7 = std::vector<data::QuestContent>::size(&quest_config_ptr->finish_cond);
      std::vector<unsigned int>::resize(&this->content_finish_progress_vec_, v7);
      v8 = std::vector<data::QuestContent>::size(&quest_config_ptr->fail_cond);
      std::vector<unsigned int>::resize(&this->content_fail_progress_vec_, v8);
      if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->state_);
      }
      old_state = this->state_;
      this->state_ = QUEST_STATE_UNSTARTED;
      Now = (unsigned int)common::tools::TimeUtils::getNow();
      v11 = *(_BYTE *)(((unsigned __int64)&this->accept_time_ >> 3) + 0x7FFF8000);
      if ( v11 != 0 && v11 <= 3 )
      {
        LOBYTE(v9) = v11 != 0;
        __asan_report_store4(&this->accept_time_, Now, &this->accept_time_, v9);
      }
      this->accept_time_ = Now;
      v12 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
      Quest::tryTriggerChangeQuestStateEvent(this, old_state, v12);
      return 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/quest/quest.cpp",
        "onAccept",
        176);
      v6 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
             &v16,
             (const char (*)[32])"getQuestConfig fails, quest_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->quest_id_);
      common::milog::MiLogStream::~MiLogStream(&v16);
      return -1;
    }
  }
};

// Line 189: range 00000000143B743E-00000000143B785C
int32_t __cdecl Quest::checkAndInit(Quest *const this, PlayerPtr *p_player_ptr)
{
  common::milog::MiLogStream *v2; // rax
  Player *v4; // rax
  PlayerQuestComp *QuestComp; // rcx
  common::milog::MiLogStream *v6; // rax
  std::vector<unsigned int>::size_type v7; // rbx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rbx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rbx
  std::vector<unsigned int>::size_type v13; // rax
  std::vector<unsigned int>::size_type v14; // rbx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rbx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rbx
  std::vector<unsigned int>::size_type v20; // rax
  unsigned __int64 val; // [rsp+18h] [rbp-48h] BYREF
  unsigned __int64 v22; // [rsp+20h] [rbp-40h] BYREF
  const data::QuestExcelConfig *quest_config_ptr; // [rsp+28h] [rbp-38h]
  common::milog::MiLogStream v24; // [rsp+30h] [rbp-30h] BYREF

  if ( std::operator==<Player>(p_player_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/quest/quest.cpp",
      "checkAndInit",
      192);
    v2 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
           &v24,
           (const char (*)[27])"getOwner failed, quest_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &this->quest_id_);
    common::milog::MiLogStream::~MiLogStream(&v24);
    return -1;
  }
  else
  {
    v4 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
    QuestComp = Player::getQuestComp(v4);
    if ( *(_BYTE *)(((unsigned __int64)&this->quest_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->quest_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->quest_id_);
    }
    quest_config_ptr = PlayerQuestComp::findPlayerQuestExcelConfig(QuestComp, this->quest_id_);
    if ( quest_config_ptr )
    {
      v7 = std::vector<unsigned int>::size(&this->content_finish_progress_vec_);
      if ( v7 != std::vector<data::QuestContent>::size(&quest_config_ptr->finish_cond) )
      {
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/quest/quest.cpp",
          "checkAndInit",
          205);
        v8 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
               &v24,
               (const char (*)[55])"[QUEST_COND_SIZE] quest cond size not match, quest_id:");
        v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->quest_id_);
        v10 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                v9,
                (const char (*)[19])" bin_content_size:");
        val = std::vector<unsigned int>::size(&this->content_finish_progress_vec_);
        v11 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v10, &val);
        v12 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                v11,
                (const char (*)[19])" config cond size:");
        v22 = std::vector<data::QuestContent>::size(&quest_config_ptr->finish_cond);
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v12, &v22);
        common::milog::MiLogStream::~MiLogStream(&v24);
        v13 = std::vector<data::QuestContent>::size(&quest_config_ptr->finish_cond);
        std::vector<unsigned int>::resize(&this->content_finish_progress_vec_, v13);
      }
      v14 = std::vector<unsigned int>::size(&this->content_fail_progress_vec_);
      if ( v14 != std::vector<data::QuestContent>::size(&quest_config_ptr->fail_cond) )
      {
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/quest/quest.cpp",
          "checkAndInit",
          213);
        v15 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
                &v24,
                (const char (*)[60])"[QUEST_COND_SIZE] quest fail cond size not match, quest_id:");
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &this->quest_id_);
        v17 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                v16,
                (const char (*)[19])" bin_content_size:");
        val = std::vector<unsigned int>::size(&this->content_fail_progress_vec_);
        v18 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v17, &val);
        v19 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                v18,
                (const char (*)[19])" config cond size:");
        v22 = std::vector<data::QuestContent>::size(&quest_config_ptr->fail_cond);
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v19, &v22);
        common::milog::MiLogStream::~MiLogStream(&v24);
        v20 = std::vector<data::QuestContent>::size(&quest_config_ptr->fail_cond);
        std::vector<unsigned int>::resize(&this->content_fail_progress_vec_, v20);
      }
      return 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/quest/quest.cpp",
        "checkAndInit",
        199);
      v6 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
             &v24,
             (const char (*)[32])"getQuestConfig fails, quest_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->quest_id_);
      common::milog::MiLogStream::~MiLogStream(&v24);
      return -1;
    }
  }
};

// Line 222: range 00000000143B785E-00000000143B7E9F
void __cdecl Quest::onStart(Quest *const this, bool is_notify)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  Player *v5; // rax
  PlayerQuestComp *QuestComp; // rcx
  common::milog::MiLogStream *v7; // rax
  __int64 v8; // rcx
  __int64 Now; // rsi
  char v10; // al
  Player *v11; // rax
  PlayerBasicComp *BasicComp; // rax
  __int64 GameTime; // rcx
  char v14; // dl
  __int64 v15; // rdx
  Player *v16; // rax
  PlayerQuestComp *v17; // rdx
  Player *v18; // rax
  PlayerQuestComp *v19; // rcx
  Player *v20; // rax
  PlayerEventComp *EventComp; // r14
  Player *v22; // rdx
  Player *v23; // rax
  PlayerCoopComp *CoopComp; // rcx
  data::QuestState old_state; // [rsp+14h] [rbp-BCh]
  const data::QuestExcelConfig *quest_config_ptr; // [rsp+18h] [rbp-B8h]
  std::shared_ptr<StartQuestEvent> __r; // [rsp+20h] [rbp-B0h] BYREF
  std::shared_ptr<BaseEvent> p_event_ptr; // [rsp+30h] [rbp-A0h] BYREF
  common::milog::MiLogStream v30; // [rsp+40h] [rbp-90h] BYREF
  char v31[112]; // [rsp+60h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 player_ptr:223";
  *(_QWORD *)(v2 + 16) = Quest::onStart;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  Quest::getOwner((const Quest *const)(v2 + 32));
  if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/quest/quest.cpp",
      "onStart",
      226);
    common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v30, (const char (*)[17])"getOwner is null");
    common::milog::MiLogStream::~MiLogStream(&v30);
  }
  else
  {
    v5 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    QuestComp = Player::getQuestComp(v5);
    if ( *(_BYTE *)(((unsigned __int64)&this->quest_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->quest_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->quest_id_);
    }
    quest_config_ptr = PlayerQuestComp::findPlayerQuestExcelConfig(QuestComp, this->quest_id_);
    if ( quest_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->state_);
      }
      old_state = this->state_;
      this->state_ = QUEST_STATE_UNFINISHED;
      Now = (unsigned int)common::tools::TimeUtils::getNow();
      v10 = *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000);
      if ( v10 != 0 && v10 <= 3 )
      {
        LOBYTE(v8) = v10 != 0;
        __asan_report_store4(&this->start_time_, Now, &this->start_time_, v8);
      }
      this->start_time_ = Now;
      v11 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      BasicComp = Player::getBasicComp(v11);
      GameTime = PlayerBasicComp::getGameTime(BasicComp);
      v14 = *(_BYTE *)(((unsigned __int64)&this->start_game_time_ >> 3) + 0x7FFF8000);
      LOBYTE(Now) = v14 != 0;
      v15 = (v14 != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= v14);
      if ( (_BYTE)v15 )
        __asan_report_store4(&this->start_game_time_, Now, v15, GameTime);
      this->start_game_time_ = GameTime;
      if ( is_notify )
        Quest::notifyQuest(this);
      v16 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      v17 = Player::getQuestComp(v16);
      PlayerQuestComp::registerOccupiedResource(v17, quest_config_ptr);
      if ( *(char *)(((unsigned __int64)&quest_config_ptr->is_mp_block >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&quest_config_ptr->is_mp_block);
      if ( quest_config_ptr->is_mp_block )
      {
        v18 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        v19 = Player::getQuestComp(v18);
        if ( *(_BYTE *)(((unsigned __int64)&this->quest_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->quest_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->quest_id_);
        }
        PlayerQuestComp::addMpBlockQuest(v19, this->quest_id_);
      }
      Quest::initAbilityGroup(this);
      if ( !std::map<unsigned int,unsigned int>::empty(&quest_config_ptr->world_quest_flow_group_suite_map) )
        Quest::onBindFlowGroupSuiteWorldQuestStart(this);
      Quest::execAction(this, &quest_config_ptr->begin_exec);
      v20 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      EventComp = Player::getEventComp(v20);
      common::tools::perf::make_shared<StartQuestEvent,unsigned int &>((unsigned int *)&__r, &this->quest_id_);
      std::shared_ptr<BaseEvent>::shared_ptr<StartQuestEvent,void>(&p_event_ptr, &__r);
      PlayerEventComp::notifyEvent(EventComp, &p_event_ptr);
      std::shared_ptr<BaseEvent>::~shared_ptr(&p_event_ptr);
      std::shared_ptr<StartQuestEvent>::~shared_ptr(&__r);
      v22 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      Quest::tryTriggerChangeQuestStateEvent(this, old_state, v22);
      v23 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      CoopComp = Player::getCoopComp(v23);
      if ( *(_BYTE *)(((unsigned __int64)&this->quest_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->quest_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->quest_id_);
      }
      PlayerCoopComp::onQuestStart(CoopComp, this->quest_id_);
      Quest::addQuestSceneRange(this);
      Quest::refreshProgress(this, is_notify, 1);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v30,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/quest/quest.cpp",
        "onStart",
        233);
      v7 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
             &v30,
             (const char (*)[32])"getQuestConfig fails, quest_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->quest_id_);
      common::milog::MiLogStream::~MiLogStream(&v30);
    }
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 32));
  if ( v31 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 282: range 00000000143B7EA0-00000000143B7ED7
int32_t __cdecl Quest::setFinishProgress(
        Quest *const this,
        const std::map<unsigned int,unsigned int> *progress_idx_value_map,
        bool is_notify)
{
  return Quest::setProgress(this, progress_idx_value_map, &this->content_finish_progress_vec_, is_notify);
};

// Line 287: range 00000000143B7ED8-00000000143B7F0F
int32_t __cdecl Quest::setFailProgress(
        Quest *const this,
        const std::map<unsigned int,unsigned int> *progress_idx_value_map,
        bool is_notify)
{
  return Quest::setProgress(this, progress_idx_value_map, &this->content_fail_progress_vec_, is_notify);
};

// Line 292: range 00000000143B7F10-00000000143B833A
int32_t __cdecl Quest::setProgress(
        Quest *const this,
        const std::map<unsigned int,unsigned int> *progress_idx_value_map,
        std::vector<unsigned int> *progress_vec,
        bool is_notify)
{
  std::pair<unsigned int const,unsigned int> *v4; // rax
  std::pair<unsigned int const,unsigned int> *v5; // rdx
  std::vector<unsigned int>::size_type v6; // rbx
  common::milog::MiLogStream *v8; // rbx
  std::pair<unsigned int const,unsigned int> *v10; // rax
  std::pair<unsigned int const,unsigned int> *v11; // rdx
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *v12; // rax
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type v13; // ebx
  std::vector<unsigned int>::reference v14; // rax
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *v15; // rdx
  char v16; // cl
  std::vector<unsigned int>::size_type v17; // rsi
  __int64 v18; // rcx
  unsigned int val; // [rsp+24h] [rbp-7Ch] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-78h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-70h] BYREF
  const std::map<unsigned int,unsigned int> *__for_range; // [rsp+38h] [rbp-68h]
  const std::map<unsigned int,unsigned int> *__for_range_0; // [rsp+40h] [rbp-60h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *idx_0; // [rsp+48h] [rbp-58h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *value; // [rsp+50h] [rbp-50h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *idx; // [rsp+58h] [rbp-48h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *_; // [rsp+60h] [rbp-40h]
  std::pair<unsigned int const,unsigned int> __in; // [rsp+68h] [rbp-38h] BYREF
  common::milog::MiLogStream v31; // [rsp+70h] [rbp-30h] BYREF

  __for_range = progress_idx_value_map;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(progress_idx_value_map)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(progress_idx_value_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v4 = (std::pair<unsigned int const,unsigned int> *)std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
    v5 = v4;
    if ( ((unsigned __int8)v4 & 7) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v4->second + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v4 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v4->second + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(v4, 8LL);
    }
    __in = *v5;
    idx = std::get<0ul,unsigned int const,unsigned int>(&__in);
    _ = std::get<1ul,unsigned int const,unsigned int>(&__in);
    if ( *(_BYTE *)(((unsigned __int64)idx >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)idx & 7) + 3) >= *(_BYTE *)(((unsigned __int64)idx >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(idx);
    }
    if ( !*idx || (v6 = *idx, v6 > std::vector<unsigned int>::size(progress_vec)) )
    {
      common::milog::MiLogStream::create(
        &v31,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/quest/quest.cpp",
        "setProgress",
        297);
      v8 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
             &v31,
             (const char (*)[31])"quest idx not match, quest_id:");
      val = Quest::getQuestId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
      common::milog::MiLogStream::~MiLogStream(&v31);
      return -1;
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
  }
  __for_range_0 = progress_idx_value_map;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(progress_idx_value_map)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(__for_range_0)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v10 = (std::pair<unsigned int const,unsigned int> *)std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
    v11 = v10;
    if ( ((unsigned __int8)v10 & 7) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v10->second + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v10 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v10->second + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(v10, 8LL);
    }
    __in = *v11;
    idx_0 = std::get<0ul,unsigned int const,unsigned int>(&__in);
    v12 = std::get<1ul,unsigned int const,unsigned int>(&__in);
    value = v12;
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v12);
    }
    v13 = *value;
    if ( *(_BYTE *)(((unsigned __int64)idx_0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)idx_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)idx_0 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(idx_0);
    }
    v17 = *idx_0 - 1;
    v14 = std::vector<unsigned int>::operator[](progress_vec, v17);
    v15 = v14;
    v16 = *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000);
    LOBYTE(v17) = v16 != 0;
    v18 = (v16 != 0) & (unsigned __int8)((char)(((unsigned __int8)v14 & 7) + 3) >= v16);
    if ( (_BYTE)v18 )
      __asan_report_store4(v14, v17, v14, v18);
    *v15 = v13;
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
  }
  if ( is_notify )
    Quest::notifyQuestProgress(this);
  Quest::checkAndUpdateState(this, 1);
  return 0;
};

// Line 315: range 00000000143B833C-00000000143B8665
void __cdecl Quest::resetProgress(Quest *const this, bool is_notify)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  Player *v5; // rax
  PlayerQuestComp *QuestComp; // rcx
  common::milog::MiLogStream *v7; // rax
  std::vector<unsigned int>::size_type v8; // rax
  std::vector<unsigned int>::size_type v9; // rax
  const data::QuestExcelConfig *quest_config_ptr; // [rsp+18h] [rbp-98h]
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
  *(_QWORD *)(v2 + 8) = "1 32 16 14 player_ptr:316";
  *(_QWORD *)(v2 + 16) = Quest::resetProgress;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  Quest::getOwner((const Quest *const)(v2 + 32));
  if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/quest/quest.cpp",
      "resetProgress",
      319);
    common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v11, (const char (*)[17])"getOwner is null");
    common::milog::MiLogStream::~MiLogStream(&v11);
  }
  else
  {
    v5 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    QuestComp = Player::getQuestComp(v5);
    if ( *(_BYTE *)(((unsigned __int64)&this->quest_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->quest_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->quest_id_);
    }
    quest_config_ptr = PlayerQuestComp::findPlayerQuestExcelConfig(QuestComp, this->quest_id_);
    if ( quest_config_ptr )
    {
      std::vector<unsigned int>::clear(&this->content_finish_progress_vec_);
      v8 = std::vector<data::QuestContent>::size(&quest_config_ptr->finish_cond);
      std::vector<unsigned int>::resize(&this->content_finish_progress_vec_, v8);
      std::vector<unsigned int>::clear(&this->content_fail_progress_vec_);
      v9 = std::vector<data::QuestContent>::size(&quest_config_ptr->fail_cond);
      std::vector<unsigned int>::resize(&this->content_fail_progress_vec_, v9);
      if ( is_notify )
        Quest::notifyQuestProgress(this);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/quest/quest.cpp",
        "resetProgress",
        325);
      v7 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
             &v11,
             (const char (*)[32])"getQuestConfig fails, quest_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->quest_id_);
      common::milog::MiLogStream::~MiLogStream(&v11);
    }
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 32));
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 341: range 00000000143B8666-00000000143BC63A
void __cdecl Quest::refreshProgress(Quest *const this, bool is_notify, bool is_new_created)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  std::vector<unsigned int>::size_type v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  std::vector<unsigned int>::size_type v14; // rax
  common::milog::MiLogStream *v15; // rax
  const std::pair<const std::vector<data::QuestContent>&,std::vector<unsigned int>&> *v16; // rax
  std::vector<data::QuestContent>::size_type v17; // r14
  std::vector<unsigned int>::size_type v18; // r14
  Player *v20; // rax
  PlayerItemComp *ItemComp; // r14
  uint32_t *v22; // rax
  uint32_t *v23; // rdx
  uint32_t PackMaterialCount; // r14d
  std::vector<unsigned int>::reference v25; // rax
  uint32_t *v26; // rdx
  char v27; // cl
  __int64 v28; // rsi
  __int64 v29; // rcx
  Player *v30; // rax
  PlayerItemComp *v31; // r14
  uint32_t *v32; // rax
  uint32_t *v33; // rdx
  uint32_t PackMaterialCountWithSubtype; // r14d
  std::vector<unsigned int>::reference v35; // rax
  uint32_t *v36; // rdx
  char v37; // cl
  __int64 v38; // rsi
  __int64 v39; // rcx
  Player *v40; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v42; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  std::vector<unsigned int>::reference v47; // rax
  _DWORD *v48; // rdx
  char v49; // cl
  __int64 v50; // rsi
  __int64 v51; // rcx
  uint32_t *v52; // rax
  uint32_t *v53; // rdx
  uint32_t *v54; // rax
  uint32_t *v55; // rdx
  Player *v56; // rax
  uint32_t CityComp; // eax
  std::__shared_ptr_access<City,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v58; // rax
  uint32_t v59; // eax
  std::vector<unsigned int>::reference v60; // rax
  _DWORD *v61; // rdx
  char v62; // cl
  __int64 v63; // rsi
  __int64 v64; // rcx
  uint32_t *v65; // rax
  uint32_t *v66; // rdx
  std::vector<int>::const_reference v67; // rax
  _DWORD *v68; // rdx
  common::milog::MiLogStream *v69; // rax
  common::milog::MiLogStream *v70; // rax
  common::milog::MiLogStream *v71; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v72; // rax
  unsigned int *v73; // rax
  uint32_t *v74; // rdx
  Player *v75; // rax
  uint32_t v76; // eax
  Scene *v77; // rax
  unsigned int *v78; // rax
  uint32_t *v79; // rdx
  unsigned int v80; // eax
  char v81; // r14
  char v82; // r15
  unsigned __int64 v83; // rax
  unsigned __int64 v84; // rdx
  const char *v85; // rax
  std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v86; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v87; // rax
  std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v88; // rax
  char v89; // al
  uint32_t v90; // r14d
  std::vector<unsigned int>::reference v91; // rax
  uint32_t *v92; // rdx
  char v93; // cl
  __int64 v94; // rsi
  __int64 v95; // rcx
  uint32_t *v96; // rax
  uint32_t *v97; // rdx
  uint32_t *v98; // rax
  uint32_t *v99; // rdx
  Player *v100; // rax
  uint32_t SceneComp; // eax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v102; // rax
  std::vector<unsigned int>::reference v103; // rax
  _DWORD *v104; // rdx
  char v105; // cl
  __int64 v106; // rsi
  __int64 v107; // rcx
  uint32_t *v108; // rax
  uint32_t *v109; // rdx
  uint32_t *v110; // rax
  uint32_t *v111; // rdx
  Player *v112; // rax
  PlayerItemComp *v113; // rax
  uint32_t v114; // eax
  _BOOL4 v115; // r14d
  std::vector<unsigned int>::reference v116; // rax
  _BOOL4 *v117; // rdx
  char v118; // cl
  __int64 v119; // rsi
  __int64 v120; // rcx
  Player *v121; // rax
  PlayerBasicComp *v122; // rax
  uint32_t v123; // r14d
  std::vector<unsigned int>::reference v124; // rax
  uint32_t *v125; // rdx
  char v126; // cl
  __int64 v127; // rsi
  __int64 v128; // rcx
  uint32_t *v129; // rax
  uint32_t *v130; // rdx
  uint32_t *v131; // rax
  uint32_t *v132; // rdx
  Player *v133; // rax
  uint32_t v134; // eax
  Scene *v135; // rax
  std::vector<unsigned int>::reference v136; // rax
  _DWORD *v137; // rdx
  char v138; // cl
  __int64 v139; // rsi
  __int64 v140; // rcx
  uint32_t *v141; // rax
  uint32_t *v142; // rdx
  Player *v143; // rax
  PlayerDungeonComp *DungeonComp; // rax
  Player *v145; // rax
  PlayerQuestComp *QuestComp; // rax
  common::milog::MiLogStream *v147; // rax
  common::milog::MiLogStream *v148; // rax
  common::milog::MiLogStream *v149; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v150; // rax
  std::vector<unsigned int>::reference v151; // rax
  _DWORD *v152; // rdx
  char v153; // cl
  __int64 v154; // rsi
  __int64 v155; // rcx
  uint32_t *v156; // rax
  uint32_t *v157; // rdx
  Player *v158; // rax
  PlayerDungeonComp *v159; // rax
  Player *v160; // rax
  PlayerQuestComp *v161; // rax
  common::milog::MiLogStream *v162; // rax
  common::milog::MiLogStream *v163; // rax
  common::milog::MiLogStream *v164; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v165; // rax
  std::vector<unsigned int>::reference v166; // rax
  _DWORD *v167; // rdx
  char v168; // cl
  __int64 v169; // rsi
  __int64 v170; // rcx
  uint32_t *v171; // rax
  uint32_t *v172; // rdx
  Player *v173; // rax
  PlayerTalkComp *TalkComp; // rax
  common::milog::MiLogStream *v175; // rax
  common::milog::MiLogStream *v176; // rax
  common::milog::MiLogStream *v177; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v178; // rax
  std::vector<unsigned int>::reference v179; // rax
  _DWORD *v180; // rdx
  char v181; // cl
  __int64 v182; // rsi
  __int64 v183; // rcx
  Player *v184; // rax
  PlayerCoopComp *CoopComp; // r14
  uint32_t *v186; // rax
  uint32_t *v187; // rdx
  uint32_t v188; // r15d
  uint32_t *v189; // rax
  uint32_t *v190; // rdx
  std::vector<unsigned int>::reference v191; // rax
  _DWORD *v192; // rdx
  char v193; // cl
  __int64 v194; // rsi
  __int64 v195; // rcx
  uint32_t *v196; // rax
  uint32_t *v197; // rdx
  data::QuestState *v198; // rax
  data::QuestState *v199; // rdx
  Player *v200; // rax
  PlayerQuestComp *v201; // rax
  data::QuestState QuestState; // eax
  _BOOL4 v203; // ecx
  std::vector<unsigned int>::reference v204; // rax
  _DWORD *v205; // rdx
  char v206; // cl
  __int64 v207; // rsi
  __int64 v208; // rcx
  Player *v209; // rax
  std::pair<unsigned int const,unsigned int> *v210; // rax
  std::pair<unsigned int const,unsigned int> *v211; // rdx
  common::milog::MiLogStream *v212; // rax
  common::milog::MiLogStream *v213; // rax
  common::milog::MiLogStream *v214; // rax
  common::milog::MiLogStream *v215; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v216; // rax
  std::vector<unsigned int>::reference v217; // rax
  _DWORD *v218; // rdx
  char v219; // cl
  __int64 v220; // rsi
  __int64 v221; // rcx
  Player *v222; // rax
  std::pair<unsigned int const,unsigned int> *v223; // rax
  std::pair<unsigned int const,unsigned int> *v224; // rdx
  common::milog::MiLogStream *v225; // rax
  common::milog::MiLogStream *v226; // rax
  common::milog::MiLogStream *v227; // rax
  common::milog::MiLogStream *v228; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v229; // rax
  std::vector<unsigned int>::reference v230; // rax
  _DWORD *v231; // rdx
  char v232; // cl
  __int64 v233; // rsi
  __int64 v234; // rcx
  Player *v235; // rax
  std::vector<int>::const_reference v236; // rax
  _DWORD *v237; // rdx
  __gnu_cxx::__alloc_traits<std::allocator<int>,int>::value_type *v238; // rax
  int *v239; // rdx
  int v240; // r14d
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v241; // rax
  bool v242; // al
  std::vector<unsigned int>::reference v243; // rax
  _DWORD *v244; // rdx
  char v245; // al
  std::vector<unsigned int>::reference v246; // rax
  _DWORD *v247; // rdx
  char v248; // cl
  __int64 v249; // rsi
  __int64 v250; // rcx
  std::vector<int>::const_reference v251; // rax
  _DWORD *v252; // rdx
  Player *v253; // rax
  PlayerSceneComp *v254; // rax
  std::vector<unsigned int>::reference v255; // rax
  _DWORD *v256; // rdx
  char v257; // cl
  __int64 v258; // rsi
  __int64 v259; // rcx
  Player *v260; // rax
  __gnu_cxx::__alloc_traits<std::allocator<int>,int>::value_type *v261; // rax
  int *v262; // rdx
  int v263; // r14d
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v264; // rax
  std::vector<unsigned int>::reference v265; // rax
  _DWORD *v266; // rdx
  char v267; // cl
  __int64 v268; // rsi
  __int64 v269; // rcx
  Player *v271; // rax
  PlayerQuestComp *v272; // r14
  uint32_t *v273; // rax
  uint32_t *v274; // rdx
  uint32_t v275; // r15d
  uint32_t *v276; // rax
  uint32_t *v277; // rdx
  bool isNotInSceneRange; // r14
  std::vector<unsigned int>::reference v279; // rax
  _DWORD *v280; // rdx
  char v281; // cl
  __int64 v282; // rsi
  __int64 v283; // rcx
  Player *v285; // rax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v286; // rax
  std::vector<int>::size_type v287; // r14
  std::vector<int>::const_reference v288; // rax
  _DWORD *v289; // rdx
  char v290; // r14
  Player *v291; // rax
  PlayerQuestComp *v292; // r15
  uint32_t *v293; // rax
  uint32_t *v294; // rdx
  uint32_t *v295; // rax
  uint32_t *v296; // rdx
  char v297; // r15
  std::vector<unsigned int>::reference v298; // rax
  _DWORD *v299; // rdx
  char v300; // cl
  __int64 v301; // rsi
  __int64 v302; // rcx
  std::vector<int>::const_reference v303; // rax
  _DWORD *v304; // rdx
  uint32_t *v305; // rax
  uint32_t *v306; // rdx
  Player *v307; // rax
  uint32_t ActivityComp; // eax
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v309; // rax
  common::milog::MiLogStream *v311; // rax
  common::milog::MiLogStream *v312; // rax
  common::milog::MiLogStream *v313; // rax
  common::milog::MiLogStream *v314; // rax
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v315; // rax
  uint32_t QuestContentValue; // r14d
  std::vector<unsigned int>::reference v317; // rax
  uint32_t *v318; // rdx
  char v319; // cl
  __int64 v320; // rsi
  __int64 v321; // rcx
  __gnu_cxx::__alloc_traits<std::allocator<int>,int>::value_type *v322; // rax
  int *v323; // rdx
  __gnu_cxx::__alloc_traits<std::allocator<int>,int>::value_type *v324; // rax
  int *v325; // rdx
  __gnu_cxx::__alloc_traits<std::allocator<int>,int>::value_type *v326; // rax
  int *v327; // rdx
  Player *v328; // rax
  uint32_t v329; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v330; // rax
  Scene *v331; // rax
  uint32_t BlockGroupComp; // eax
  uint32_t v333; // eax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v334; // rax
  uint32_t v335; // eax
  std::vector<unsigned int>::reference v336; // rax
  _DWORD *v337; // rdx
  char v338; // cl
  __int64 v339; // rsi
  __int64 v340; // rcx
  std::vector<int>::const_reference v341; // rax
  _DWORD *v342; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v343; // rax
  common::milog::MiLogStream *v344; // rax
  Player *v345; // rax
  PlayerAvatarComp *AvatarComp; // rcx
  std::vector<unsigned int>::reference v347; // rax
  _DWORD *v348; // rdx
  char v349; // cl
  __int64 v350; // rsi
  __int64 v351; // rcx
  common::milog::MiLogStream *v352; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v353; // rax
  _BOOL4 isQuestGlobalVarParamMatch; // r14d
  std::vector<unsigned int>::reference v355; // rax
  _BOOL4 *v356; // rdx
  char v357; // cl
  __int64 v358; // rsi
  __int64 v359; // rcx
  std::vector<unsigned int>::size_type radiusb; // [rsp+8h] [rbp-328h]
  common::milog::MiLogStream *radiusc; // [rsp+8h] [rbp-328h]
  common::milog::MiLogStream *radiusd; // [rsp+8h] [rbp-328h]
  std::vector<unsigned int>::size_type radiuse; // [rsp+8h] [rbp-328h]
  common::milog::MiLogStream *radiusf; // [rsp+8h] [rbp-328h]
  common::milog::MiLogStream *radiusg; // [rsp+8h] [rbp-328h]
  char radius; // [rsp+8h] [rbp-328h]
  uint32_t radiusa; // [rsp+8h] [rbp-328h]
  std::allocator<std::pair<const std::vector<data::QuestContent>&,std::vector<unsigned int>&> > __a; // [rsp+27h] [rbp-309h] BYREF
  bool is_all_unlocked; // [rsp+28h] [rbp-308h]
  bool is_all_locked; // [rsp+29h] [rbp-307h]
  bool is_in_target_room; // [rsp+2Ah] [rbp-306h]
  bool is_quest_content_meet; // [rsp+2Bh] [rbp-305h]
  uint32_t idx; // [rsp+2Ch] [rbp-304h]
  uint32_t target_unlock_count; // [rsp+30h] [rbp-300h]
  int idx_0; // [rsp+34h] [rbp-2FCh]
  uint32_t scene_id_2; // [rsp+38h] [rbp-2F8h]
  int group_id; // [rsp+3Ch] [rbp-2F4h]
  int config_id; // [rsp+40h] [rbp-2F0h]
  int state; // [rsp+44h] [rbp-2ECh]
  uint32_t param_key; // [rsp+48h] [rbp-2E8h]
  uint32_t quest_id; // [rsp+4Ch] [rbp-2E4h]
  data::QuestState quest_state; // [rsp+50h] [rbp-2E0h]
  uint32_t bargain_id; // [rsp+54h] [rbp-2DCh]
  uint32_t point_type; // [rsp+58h] [rbp-2D8h]
  uint32_t scene_id; // [rsp+5Ch] [rbp-2D4h]
  uint32_t point_id; // [rsp+60h] [rbp-2D0h]
  uint32_t area_id; // [rsp+64h] [rbp-2CCh]
  uint32_t point_city_id; // [rsp+68h] [rbp-2C8h]
  uint32_t scene_id_1; // [rsp+6Ch] [rbp-2C4h]
  uint32_t area_id_0; // [rsp+70h] [rbp-2C0h]
  uint32_t item_id; // [rsp+74h] [rbp-2BCh]
  uint32_t count; // [rsp+78h] [rbp-2B8h]
  uint32_t city_id; // [rsp+7Ch] [rbp-2B4h]
  uint32_t level; // [rsp+80h] [rbp-2B0h]
  uint32_t scene_id_0; // [rsp+84h] [rbp-2ACh]
  uint32_t point_id_0; // [rsp+88h] [rbp-2A8h]
  uint32_t dungeon_id_0; // [rsp+8Ch] [rbp-2A4h]
  uint32_t cur_dungeon_id_0; // [rsp+90h] [rbp-2A0h]
  uint32_t game_time; // [rsp+94h] [rbp-29Ch]
  uint32_t game_day; // [rsp+98h] [rbp-298h]
  uint32_t game_hour; // [rsp+9Ch] [rbp-294h]
  uint32_t dungeon_id; // [rsp+A0h] [rbp-290h]
  uint32_t cur_dungeon_id; // [rsp+A4h] [rbp-28Ch]
  std::vector<std::pair<const std::vector<data::QuestContent>&,std::vector<unsigned int>&>>::iterator __for_begin; // [rsp+A8h] [rbp-288h] BYREF
  std::vector<std::pair<const std::vector<data::QuestContent>&,std::vector<unsigned int>&>>::iterator __for_end; // [rsp+B0h] [rbp-280h] BYREF
  std::set<unsigned int>::iterator __for_begin_0; // [rsp+B8h] [rbp-278h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_begin_1; // [rsp+C0h] [rbp-270h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end_0; // [rsp+C8h] [rbp-268h] BYREF
  const data::QuestExcelConfig *quest_config_ptr; // [rsp+D0h] [rbp-260h]
  std::vector<std::pair<const std::vector<data::QuestContent>&,std::vector<unsigned int>&>> *__for_range; // [rsp+D8h] [rbp-258h]
  const std::pair<const std::vector<data::QuestContent>&,std::vector<unsigned int>&> *pr; // [rsp+E0h] [rbp-250h]
  const std::vector<data::QuestContent> *config_quest_content_vec; // [rsp+E8h] [rbp-248h]
  std::vector<unsigned int> *quest_progress_vec; // [rsp+F0h] [rbp-240h]
  const data::QuestContent *quest_content; // [rsp+F8h] [rbp-238h]
  const data::AvatarRenameExcelConfig *rename_config_ptr; // [rsp+100h] [rbp-230h]
  const AvatarRenameData *rename_data_ptr; // [rsp+108h] [rbp-228h]
  PlayerCookComp *cook_comp_0; // [rsp+110h] [rbp-220h]
  const std::map<unsigned int,unsigned int> *__for_range_3; // [rsp+118h] [rbp-218h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *id_0; // [rsp+120h] [rbp-210h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *__0; // [rsp+128h] [rbp-208h]
  PlayerCookComp *cook_comp; // [rsp+130h] [rbp-200h]
  const std::map<unsigned int,unsigned int> *__for_range_2; // [rsp+138h] [rbp-1F8h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *id; // [rsp+140h] [rbp-1F0h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *_; // [rsp+148h] [rbp-1E8h]
  const std::unordered_map<unsigned int,std::set<unsigned int>> *city_to_scene_ids_map; // [rsp+150h] [rbp-1E0h]
  const std::set<unsigned int> *scene_id_set; // [rsp+158h] [rbp-1D8h]
  const std::set<unsigned int> *__for_range_0; // [rsp+160h] [rbp-1D0h]
  const std::unordered_set<unsigned int> *unlock_point_set; // [rsp+168h] [rbp-1C8h]
  const std::unordered_set<unsigned int> *__for_range_1; // [rsp+170h] [rbp-1C0h]
  std::pair<unsigned int const,unsigned int> __for_end_1; // [rsp+178h] [rbp-1B8h] BYREF
  common::milog::MiLogStream v433; // [rsp+180h] [rbp-1B0h] BYREF
  char v434[400]; // [rsp+1A0h] [rbp-190h] BYREF

  v3 = (unsigned __int64)v434;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(352LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "9 32 4 13 rename_id:810 48 4 21 game_hour_seconds:404 64 8 8 iter:448 96 16 14 player_ptr:368 12"
                        "8 16 13 scene_ptr:792 160 16 13 group_ptr:794 192 16 12 city_ptr:426 224 24 26 quest_content_pai"
                        "r_vec:375 288 24 20 level_tag_id_vec:697";
  *(_QWORD *)(v3 + 16) = Quest::refreshProgress;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = -219021312;
  v5[536862726] = -219021312;
  v5[536862727] = -234881024;
  v5[536862728] = -218959118;
  v5[536862729] = -218103808;
  v5[536862730] = -202116109;
  quest_config_ptr = Quest::getQuestConfig(this);
  if ( quest_config_ptr )
  {
    if ( Quest::getState(this) == QUEST_STATE_UNFINISHED )
    {
      radiusb = std::vector<unsigned int>::size(&this->content_finish_progress_vec_);
      if ( radiusb != std::vector<data::QuestContent>::size(&quest_config_ptr->finish_cond) )
      {
        common::milog::MiLogStream::create(
          &v433,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/quest/quest.cpp",
          "refreshProgress",
          356);
        v7 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
               &v433,
               (const char (*)[35])"quest content not match, quest_id:");
        v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->quest_id_);
        radiusc = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v8, (const char (*)[11])" bin size:");
        __for_end_0._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::vector<unsigned int>::size(&this->content_finish_progress_vec_);
        v9 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
               radiusc,
               (const unsigned __int64 *)&__for_end_0);
        radiusd = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v9,
                    (const char (*)[14])" config size:");
        __for_end_1 = (std::pair<unsigned int const,unsigned int>)std::vector<data::QuestContent>::size(&quest_config_ptr->finish_cond);
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
          radiusd,
          (const unsigned __int64 *)&__for_end_1);
        common::milog::MiLogStream::~MiLogStream(&v433);
        v10 = std::vector<data::QuestContent>::size(&quest_config_ptr->finish_cond);
        std::vector<unsigned int>::resize(&this->content_finish_progress_vec_, v10);
      }
      radiuse = std::vector<unsigned int>::size(&this->content_fail_progress_vec_);
      if ( radiuse != std::vector<data::QuestContent>::size(&quest_config_ptr->fail_cond) )
      {
        common::milog::MiLogStream::create(
          &v433,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/quest/quest.cpp",
          "refreshProgress",
          363);
        v11 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                &v433,
                (const char (*)[40])"quest fail content not match, quest_id:");
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &this->quest_id_);
        radiusf = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v12, (const char (*)[11])" bin size:");
        __for_end_0._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::vector<unsigned int>::size(&this->content_fail_progress_vec_);
        v13 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                radiusf,
                (const unsigned __int64 *)&__for_end_0);
        radiusg = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v13,
                    (const char (*)[14])" config size:");
        __for_end_1 = (std::pair<unsigned int const,unsigned int>)std::vector<data::QuestContent>::size(&quest_config_ptr->fail_cond);
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
          radiusg,
          (const unsigned __int64 *)&__for_end_1);
        common::milog::MiLogStream::~MiLogStream(&v433);
        v14 = std::vector<data::QuestContent>::size(&quest_config_ptr->fail_cond);
        std::vector<unsigned int>::resize(&this->content_fail_progress_vec_, v14);
      }
      Quest::getOwner((const Quest *const)(v3 + 96));
      if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v3 + 96), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v433,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/quest/quest.cpp",
          "refreshProgress",
          371);
        v15 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                &v433,
                (const char (*)[27])"getOwner failed, quest_id_");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &this->quest_id_);
        common::milog::MiLogStream::~MiLogStream(&v433);
      }
      else
      {
        std::pair<std::vector<data::QuestContent> const&,std::vector&<unsigned int,std::allocator<unsigned int>>>::pair<std::vector<data::QuestContent> const&,std::vector&<unsigned int,std::allocator<unsigned int>>,true>(
          (std::pair<const std::vector<data::QuestContent>&,std::vector<unsigned int>&> *const)&v433,
          &quest_config_ptr->finish_cond,
          &this->content_finish_progress_vec_);
        std::pair<std::vector<data::QuestContent> const&,std::vector&<unsigned int,std::allocator<unsigned int>>>::pair<std::vector<data::QuestContent> const&,std::vector&<unsigned int,std::allocator<unsigned int>>,true>(
          (std::pair<const std::vector<data::QuestContent>&,std::vector<unsigned int>&> *const)&v433.ostr_ptr_._M_refcount,
          &quest_config_ptr->fail_cond,
          &this->content_fail_progress_vec_);
        std::allocator<std::pair<std::vector<data::QuestContent> const&,std::vector&<unsigned int,std::allocator<unsigned int>>>>::allocator(&__a);
        std::vector<std::pair<std::vector const&<data::QuestContent,std::allocator<std::vector const&>>,std::vector&<unsigned int,std::allocator<unsigned int>>>>::vector(
          (std::vector<std::pair<const std::vector<data::QuestContent>&,std::vector<unsigned int>&>> *const)(v3 + 224),
          (std::initializer_list<std::pair<const std::vector<data::QuestContent>&,std::vector<unsigned int>&> >)__PAIR128__(2LL, &v433),
          &__a);
        std::allocator<std::pair<std::vector<data::QuestContent> const&,std::vector&<unsigned int,std::allocator<unsigned int>>>>::~allocator(&__a);
        __for_range = (std::vector<std::pair<const std::vector<data::QuestContent>&,std::vector<unsigned int>&>> *)(v3 + 224);
        __for_begin._M_current = std::vector<std::pair<std::vector const&<data::QuestContent,std::allocator<std::vector const&>>,std::vector&<unsigned int,std::allocator<unsigned int>>>>::begin((std::vector<std::pair<const std::vector<data::QuestContent>&,std::vector<unsigned int>&>> *const)(v3 + 224))._M_current;
        __for_end._M_current = std::vector<std::pair<std::vector const&<data::QuestContent,std::allocator<std::vector const&>>,std::vector&<unsigned int,std::allocator<unsigned int>>>>::end(__for_range)._M_current;
        while ( __gnu_cxx::operator!=<std::pair<std::vector<data::QuestContent> const&,std::vector&<unsigned int,std::allocator<unsigned int>>> *,std::vector<std::pair<std::vector<data::QuestContent> const&,std::vector&<unsigned int,std::allocator<unsigned int>>>>>(
                  &__for_begin,
                  &__for_end) )
        {
          v16 = __gnu_cxx::__normal_iterator<std::pair<std::vector<data::QuestContent> const&,std::vector&<unsigned int,std::allocator<unsigned int>>> *,std::vector<std::pair<std::vector<data::QuestContent> const&,std::vector&<unsigned int,std::allocator<unsigned int>>>>>::operator*(&__for_begin);
          pr = v16;
          if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
            __asan_report_load8(v16);
          config_quest_content_vec = pr->first;
          if ( *(_BYTE *)(((unsigned __int64)&pr->second >> 3) + 0x7FFF8000) )
            __asan_report_load8(&pr->second);
          quest_progress_vec = pr->second;
          for ( idx = 0; ; ++idx )
          {
            v17 = idx;
            if ( v17 >= std::vector<data::QuestContent>::size(config_quest_content_vec) )
              break;
            v18 = idx;
            if ( v18 >= std::vector<unsigned int>::size(quest_progress_vec) )
              break;
            quest_content = std::vector<data::QuestContent>::operator[](config_quest_content_vec, idx);
            if ( *(_BYTE *)(((unsigned __int64)&quest_content->type >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&quest_content->type >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&quest_content->type);
            }
            switch ( quest_content->type )
            {
              case QUEST_CONTENT_OBTAIN_ITEM:
                v20 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
                ItemComp = Player::getItemComp(v20);
                v22 = (uint32_t *)std::vector<int>::operator[](&quest_content->param, 0LL);
                v23 = v22;
                if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v22 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4(v22);
                }
                PackMaterialCount = PlayerItemComp::getPackMaterialCount(ItemComp, *v23);
                v28 = idx;
                v25 = std::vector<unsigned int>::operator[](quest_progress_vec, idx);
                v26 = v25;
                v27 = *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000);
                LOBYTE(v28) = v27 != 0;
                v29 = (v27 != 0) & (unsigned __int8)((char)(((unsigned __int8)v25 & 7) + 3) >= v27);
                if ( (_BYTE)v29 )
                  __asan_report_store4(v25, v28, v25, v29);
                *v26 = PackMaterialCount;
                break;
              case QUEST_CONTENT_FINISH_DUNGEON:
                if ( !std::vector<int>::empty(&quest_content->param) )
                {
                  v141 = (uint32_t *)std::vector<int>::operator[](&quest_content->param, 0LL);
                  v142 = v141;
                  if ( *(_BYTE *)(((unsigned __int64)v141 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)v141 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v141 >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load4(v141);
                  }
                  dungeon_id = *v142;
                  v143 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
                  DungeonComp = Player::getDungeonComp(v143);
                  cur_dungeon_id = PlayerDungeonComp::getCurDungeonId(DungeonComp);
                  if ( (!cur_dungeon_id || cur_dungeon_id != dungeon_id) && !is_new_created )
                  {
                    v145 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
                    QuestComp = Player::getQuestComp(v145);
                    if ( PlayerQuestComp::isLastDungeonFinished(QuestComp, dungeon_id) )
                    {
                      common::milog::MiLogStream::create(
                        &v433,
                        &common::milog::MiLogDefault::default_log_obj_,
                        1u,
                        "./src/player/quest/quest.cpp",
                        "refreshProgress",
                        561);
                      v147 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                               &v433,
                               (const char (*)[11])"quest_id: ");
                      v148 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                               v147,
                               &this->quest_id_);
                      v149 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                               v148,
                               (const char (*)[44])" progress = 1 because of last dungeon uid: ");
                      v150 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
                      *(_DWORD *)(v3 + 48) = Player::getUid(v150);
                      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v149,
                        (const unsigned int *)(v3 + 48));
                      common::milog::MiLogStream::~MiLogStream(&v433);
                      v154 = idx;
                      v151 = std::vector<unsigned int>::operator[](quest_progress_vec, idx);
                      v152 = v151;
                      v153 = *(_BYTE *)(((unsigned __int64)v151 >> 3) + 0x7FFF8000);
                      LOBYTE(v154) = v153 != 0;
                      v155 = (v153 != 0) & (unsigned __int8)((char)(((unsigned __int8)v151 & 7) + 3) >= v153);
                      if ( (_BYTE)v155 )
                        __asan_report_store4(v151, v154, v151, v155);
                      *v152 = 1;
                    }
                  }
                }
                break;
              case QUEST_CONTENT_OBTAIN_MATERIAL_WITH_SUBTYPE:
                v30 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
                v31 = Player::getItemComp(v30);
                v32 = (uint32_t *)std::vector<int>::operator[](&quest_content->param, 0LL);
                v33 = v32;
                if ( *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v32 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4(v32);
                }
                PackMaterialCountWithSubtype = PlayerItemComp::getPackMaterialCountWithSubtype(v31, *v33);
                v38 = idx;
                v35 = std::vector<unsigned int>::operator[](quest_progress_vec, idx);
                v36 = v35;
                v37 = *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000);
                LOBYTE(v38) = v37 != 0;
                v39 = (v37 != 0) & (unsigned __int8)((char)(((unsigned __int8)v35 & 7) + 3) >= v37);
                if ( (_BYTE)v39 )
                  __asan_report_store4(v35, v38, v35, v39);
                *v36 = PackMaterialCountWithSubtype;
                break;
              case QUEST_CONTENT_GAME_TIME_TICK:
                v40 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
                BasicComp = Player::getBasicComp(v40);
                game_time = PlayerBasicComp::getGameTime(BasicComp);
                ServiceBox::findService<GameserverService>();
                GameserverService::getConfig((GameserverService *const)(v3 + 128));
                v42 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
                *(_DWORD *)(v3 + 32) = ConstValueExcelConfigMgr::getGameDaySeconds(&v42->design_config.txt_config_mgr.const_value_config_mgr);
                std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 128));
                ServiceBox::findService<GameserverService>();
                GameserverService::getConfig((GameserverService *const)(v3 + 160));
                v43 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
                *(_DWORD *)(v3 + 48) = ConstValueExcelConfigMgr::getGameHourSeconds(&v43->design_config.txt_config_mgr.const_value_config_mgr);
                std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 160));
                if ( *(_DWORD *)(v3 + 32) && *(_DWORD *)(v3 + 48) )
                {
                  game_day = game_time / *(_DWORD *)(v3 + 32);
                  game_hour = (game_time - game_day * *(_DWORD *)(v3 + 32)) / *(_DWORD *)(v3 + 48);
                  if ( Quest::isGameTimeTickParamMatch(this, quest_content, game_day, game_hour) )
                  {
                    v50 = idx;
                    v47 = std::vector<unsigned int>::operator[](quest_progress_vec, idx);
                    v48 = v47;
                    v49 = *(_BYTE *)(((unsigned __int64)v47 >> 3) + 0x7FFF8000);
                    LOBYTE(v50) = v49 != 0;
                    v51 = (v49 != 0) & (unsigned __int8)((char)(((unsigned __int8)v47 & 7) + 3) >= v49);
                    if ( (_BYTE)v51 )
                      __asan_report_store4(v47, v50, v47, v51);
                    *v48 = 1;
                  }
                }
                else
                {
                  common::milog::MiLogStream::create(
                    &v433,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/quest/quest.cpp",
                    "refreshProgress",
                    407);
                  v44 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                          &v433,
                          (const char (*)[18])"game_day_seconds:");
                  v45 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v44,
                          (const unsigned int *)(v3 + 32));
                  v46 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                          v45,
                          (const char (*)[20])" game_hour_seconds:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v46,
                    (const unsigned int *)(v3 + 48));
                  common::milog::MiLogStream::~MiLogStream(&v433);
                }
                break;
              case QUEST_CONTENT_FAIL_DUNGEON:
                if ( !std::vector<int>::empty(&quest_content->param) )
                {
                  v156 = (uint32_t *)std::vector<int>::operator[](&quest_content->param, 0LL);
                  v157 = v156;
                  if ( *(_BYTE *)(((unsigned __int64)v156 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)v156 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v156 >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load4(v156);
                  }
                  dungeon_id_0 = *v157;
                  v158 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
                  v159 = Player::getDungeonComp(v158);
                  cur_dungeon_id_0 = PlayerDungeonComp::getCurDungeonId(v159);
                  if ( (!cur_dungeon_id_0 || cur_dungeon_id_0 != dungeon_id_0) && !is_new_created )
                  {
                    v160 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
                    v161 = Player::getQuestComp(v160);
                    if ( PlayerQuestComp::isLastDungeonFailed(v161, dungeon_id_0) )
                    {
                      common::milog::MiLogStream::create(
                        &v433,
                        &common::milog::MiLogDefault::default_log_obj_,
                        1u,
                        "./src/player/quest/quest.cpp",
                        "refreshProgress",
                        586);
                      v162 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                               &v433,
                               (const char (*)[11])"quest_id: ");
                      v163 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                               v162,
                               &this->quest_id_);
                      v164 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                               v163,
                               (const char (*)[44])" progress = 1 because of last dungeon uid: ");
                      v165 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
                      *(_DWORD *)(v3 + 48) = Player::getUid(v165);
                      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v164,
                        (const unsigned int *)(v3 + 48));
                      common::milog::MiLogStream::~MiLogStream(&v433);
                      v169 = idx;
                      v166 = std::vector<unsigned int>::operator[](quest_progress_vec, idx);
                      v167 = v166;
                      v168 = *(_BYTE *)(((unsigned __int64)v166 >> 3) + 0x7FFF8000);
                      LOBYTE(v169) = v168 != 0;
                      v170 = (v168 != 0) & (unsigned __int8)((char)(((unsigned __int8)v166 & 7) + 3) >= v168);
                      if ( (_BYTE)v170 )
                        __asan_report_store4(v166, v169, v166, v170);
                      *v167 = 1;
                    }
                  }
                }
                break;
              case QUEST_CONTENT_UNLOCK_TRANS_POINT:
                if ( std::vector<int>::size(&quest_content->param) == 2 )
                {
                  v96 = (uint32_t *)std::vector<int>::operator[](&quest_content->param, 0LL);
                  v97 = v96;
                  if ( *(_BYTE *)(((unsigned __int64)v96 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)v96 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v96 >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load4(v96);
                  }
                  scene_id_0 = *v97;
                  v98 = (uint32_t *)std::vector<int>::operator[](&quest_content->param, 1uLL);
                  v99 = v98;
                  if ( *(_BYTE *)(((unsigned __int64)v98 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)v98 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v98 >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load4(v98);
                  }
                  point_id_0 = *v99;
                  v100 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
                  SceneComp = (unsigned int)Player::getSceneComp(v100);
                  PlayerSceneComp::findScene((const PlayerSceneComp *const)(v3 + 192), SceneComp);
                  if ( !std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 192)) )
                  {
                    v102 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
                    if ( Scene::isPointUnlocked(v102, point_id_0) )
                    {
                      v106 = idx;
                      v103 = std::vector<unsigned int>::operator[](quest_progress_vec, idx);
                      v104 = v103;
                      v105 = *(_BYTE *)(((unsigned __int64)v103 >> 3) + 0x7FFF8000);
                      LOBYTE(v106) = v105 != 0;
                      v107 = (v105 != 0) & (unsigned __int8)((char)(((unsigned __int8)v103 & 7) + 3) >= v105);
                      if ( (_BYTE)v107 )
                        __asan_report_store4(v103, v106, v103, v107);
                      *v104 = 1;
                    }
                  }
                  goto LABEL_285;
                }
                break;
              case QUEST_CONTENT_CITY_LEVEL_UP:
                if ( std::vector<int>::size(&quest_content->param) > 1 )
                {
                  v52 = (uint32_t *)std::vector<int>::operator[](&quest_content->param, 0LL);
                  v53 = v52;
                  if ( *(_BYTE *)(((unsigned __int64)v52 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)v52 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v52 >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load4(v52);
                  }
                  city_id = *v53;
                  v54 = (uint32_t *)std::vector<int>::operator[](&quest_content->param, 1uLL);
                  v55 = v54;
                  if ( *(_BYTE *)(((unsigned __int64)v54 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)v54 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v54 >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load4(v54);
                  }
                  level = *v55;
                  v56 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
                  CityComp = (unsigned int)Player::getCityComp(v56);
                  PlayerCityComp::findCity((const PlayerCityComp *const)(v3 + 192), CityComp);
                  if ( !std::operator==<City>(0LL, (const std::shared_ptr<City> *)(v3 + 192)) )
                  {
                    v58 = std::__shared_ptr_access<City,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<City,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
                    v59 = City::getLevel(v58);
                    if ( level <= v59 )
                    {
                      v63 = idx;
                      v60 = std::vector<unsigned int>::operator[](quest_progress_vec, idx);
                      v61 = v60;
                      v62 = *(_BYTE *)(((unsigned __int64)v60 >> 3) + 0x7FFF8000);
                      LOBYTE(v63) = v62 != 0;
                      v64 = (v62 != 0) & (unsigned __int8)((char)(((unsigned __int8)v60 & 7) + 3) >= v62);
                      if ( (_BYTE)v64 )
                        __asan_report_store4(v60, v63, v60, v64);
                      *v61 = 1;
                    }
                  }
                  std::shared_ptr<City>::~shared_ptr((std::shared_ptr<City> *const)(v3 + 192));
                }
                break;
              case QUEST_CONTENT_ITEM_LESS_THAN:
                if ( std::vector<int>::size(&quest_content->param) == 2 )
                {
                  v108 = (uint32_t *)std::vector<int>::operator[](&quest_content->param, 0LL);
                  v109 = v108;
                  if ( *(_BYTE *)(((unsigned __int64)v108 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)v108 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v108 >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load4(v108);
                  }
                  item_id = *v109;
                  v110 = (uint32_t *)std::vector<int>::operator[](&quest_content->param, 1uLL);
                  v111 = v110;
                  if ( *(_BYTE *)(((unsigned __int64)v110 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)v110 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v110 >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load4(v110);
                  }
                  count = *v111;
                  v112 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
                  v113 = Player::getItemComp(v112);
                  v114 = PlayerItemComp::getPackMaterialCount(v113, item_id);
                  v115 = count > v114;
                  v119 = idx;
                  v116 = std::vector<unsigned int>::operator[](quest_progress_vec, idx);
                  v117 = (_BOOL4 *)v116;
                  v118 = *(_BYTE *)(((unsigned __int64)v116 >> 3) + 0x7FFF8000);
                  LOBYTE(v119) = v118 != 0;
                  v120 = (v118 != 0) & (unsigned __int8)((char)(((unsigned __int8)v116 & 7) + 3) >= v118);
                  if ( (_BYTE)v120 )
                    __asan_report_store4(v116, v119, v116, v120);
                  *v117 = v115;
                }
                break;
              case QUEST_CONTENT_PLAYER_LEVEL_UP:
                v121 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
                v122 = Player::getBasicComp(v121);
                v123 = PlayerBasicComp::getLevel(v122);
                v127 = idx;
                v124 = std::vector<unsigned int>::operator[](quest_progress_vec, idx);
                v125 = v124;
                v126 = *(_BYTE *)(((unsigned __int64)v124 >> 3) + 0x7FFF8000);
                LOBYTE(v127) = v126 != 0;
                v128 = (v126 != 0) & (unsigned __int8)((char)(((unsigned __int8)v124 & 7) + 3) >= v126);
                if ( (_BYTE)v128 )
                  __asan_report_store4(v124, v127, v124, v128);
                *v125 = v123;
                break;
              case QUEST_CONTENT_UNLOCK_AREA:
                if ( std::vector<int>::size(&quest_content->param) == 2 )
                {
                  v129 = (uint32_t *)std::vector<int>::operator[](&quest_content->param, 0LL);
                  v130 = v129;
                  if ( *(_BYTE *)(((unsigned __int64)v129 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)v129 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v129 >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load4(v129);
                  }
                  scene_id_1 = *v130;
                  v131 = (uint32_t *)std::vector<int>::operator[](&quest_content->param, 1uLL);
                  v132 = v131;
                  if ( *(_BYTE *)(((unsigned __int64)v131 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)v131 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v131 >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load4(v131);
                  }
                  area_id_0 = *v132;
                  v133 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
                  v134 = (unsigned int)Player::getSceneComp(v133);
                  PlayerSceneComp::findScene((const PlayerSceneComp *const)(v3 + 192), v134);
                  if ( !std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 192)) )
                  {
                    v135 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
                    if ( Scene::isAreaUnlocked(v135, area_id_0) )
                    {
                      v139 = idx;
                      v136 = std::vector<unsigned int>::operator[](quest_progress_vec, idx);
                      v137 = v136;
                      v138 = *(_BYTE *)(((unsigned __int64)v136 >> 3) + 0x7FFF8000);
                      LOBYTE(v139) = v138 != 0;
                      v140 = (v138 != 0) & (unsigned __int8)((char)(((unsigned __int8)v136 & 7) + 3) >= v138);
                      if ( (_BYTE)v140 )
                        __asan_report_store4(v136, v139, v136, v140);
                      *v137 = 1;
                    }
                  }
                  goto LABEL_285;
                }
                break;
              case QUEST_CONTENT_UNLOCK_TRANS_POINT_WITH_TYPE:
                if ( std::vector<int>::size(&quest_content->param) == 2 )
                {
                  v65 = (uint32_t *)std::vector<int>::operator[](&quest_content->param, 0LL);
                  v66 = v65;
                  if ( *(_BYTE *)(((unsigned __int64)v65 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)v65 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v65 >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load4(v65);
                  }
                  point_type = *v66;
                  v67 = std::vector<int>::operator[](&quest_content->param, 1uLL);
                  v68 = v67;
                  if ( *(_BYTE *)(((unsigned __int64)v67 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)v67 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v67 >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load4(v67);
                  }
                  *(_DWORD *)(v3 + 48) = *v68;
                  ServiceBox::findService<GameserverService>();
                  GameserverService::getConfig((GameserverService *const)(v3 + 192));
                  city_to_scene_ids_map = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192))->design_config.txt_config_mgr.world_area_config_mgr.city_to_scene_ids_map;
                  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 192));
                  *(std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::set<unsigned int>>::find(city_to_scene_ids_map, (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v3 + 48));
                  __for_end_1 = (std::pair<unsigned int const,unsigned int>)std::unordered_map<unsigned int,std::set<unsigned int>>::end(city_to_scene_ids_map)._M_cur;
                  if ( std::__detail::operator==<std::pair<unsigned int const,std::set<unsigned int>>,false>(
                         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v3 + 64),
                         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)&__for_end_1) )
                  {
                    common::milog::MiLogStream::create(
                      &v433,
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/player/quest/quest.cpp",
                      "refreshProgress",
                      451);
                    v69 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                            &v433,
                            (const char (*)[17])"invalid city_id:");
                    v70 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                            v69,
                            (const unsigned int *)(v3 + 48));
                    v71 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(
                            v70,
                            (const char (*)[9])" player:");
                    v72 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
                    operator<<(v71, v72);
                    common::milog::MiLogStream::~MiLogStream(&v433);
                  }
                  else
                  {
                    scene_id_set = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v3 + 64))->second;
                    target_unlock_count = 0;
                    __for_range_0 = scene_id_set;
                    __for_begin_0._M_node = std::set<unsigned int>::begin(scene_id_set)._M_node;
                    __for_begin_1._M_node = std::set<unsigned int>::end(__for_range_0)._M_node;
                    while ( std::operator!=(
                              &__for_begin_0,
                              (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_begin_1) )
                    {
                      v73 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin_0);
                      v74 = v73;
                      if ( *(_BYTE *)(((unsigned __int64)v73 >> 3) + 0x7FFF8000) != 0
                        && (char)(((unsigned __int8)v73 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v73 >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_load4(v73);
                      }
                      scene_id = *v74;
                      v75 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
                      v76 = (unsigned int)Player::getSceneComp(v75);
                      PlayerSceneComp::findScene((const PlayerSceneComp *const)(v3 + 128), v76);
                      if ( !std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 128)) )
                      {
                        v77 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
                        unlock_point_set = Scene::getAllUnlockPoint(v77);
                        __for_range_1 = unlock_point_set;
                        __for_end_0._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::unordered_set<unsigned int>::begin(unlock_point_set)._M_cur;
                        __for_end_1 = (std::pair<unsigned int const,unsigned int>)std::unordered_set<unsigned int>::end(__for_range_1)._M_cur;
                        while ( std::__detail::operator!=<unsigned int,false>(
                                  (const std::__detail::_Node_iterator_base<unsigned int,false> *)&__for_end_0,
                                  (const std::__detail::_Node_iterator_base<unsigned int,false> *)&__for_end_1) )
                        {
                          v78 = (unsigned int *)std::__detail::_Node_const_iterator<unsigned int,true,false>::operator*((const std::__detail::_Node_const_iterator<unsigned int,true,false> *const)&__for_end_0);
                          v79 = v78;
                          if ( *(_BYTE *)(((unsigned __int64)v78 >> 3) + 0x7FFF8000) != 0
                            && (char)(((unsigned __int8)v78 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v78 >> 3)
                                                                                  + 0x7FFF8000) )
                          {
                            __asan_report_load4(v78);
                          }
                          point_id = *v79;
                          ServiceBox::findService<GameserverService>();
                          GameserverService::getConfig((GameserverService *const)(v3 + 192));
                          v80 = (unsigned int)std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
                          JsonConfigMgr::findScenePoint<data::SceneTransPoint>(
                            (const JsonConfigMgr *const)(v3 + 160),
                            v80 + 93080,
                            scene_id);
                          std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 192));
                          v81 = 0;
                          v82 = 0;
                          if ( !std::operator!=<data::SceneTransPoint>(
                                  0LL,
                                  (const std::shared_ptr<data::SceneTransPoint> *)(v3 + 160)) )
                            goto LABEL_79;
                          std::allocator<char>::allocator(&__a);
                          v81 = 1;
                          std::string::basic_string<std::allocator<char>>(
                            (std::string *const)&v433,
                            "SceneTransPoint",
                            (const std::allocator<char> *)&__a);
                          v82 = 1;
                          v83 = (unsigned __int64)std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
                          if ( *(_BYTE *)((v83 >> 3) + 0x7FFF8000) )
                            v83 = __asan_report_load8(v83);
                          v84 = *(_QWORD *)v83 + 32LL;
                          if ( *(_BYTE *)((v84 >> 3) + 0x7FFF8000) )
                            v83 = __asan_report_load8(*(_QWORD *)v83 + 32LL);
                          v85 = (const char *)(*(__int64 (__fastcall **)(unsigned __int64))v84)(v83);
                          if ( std::operator==<char>(v85, (const std::string *)&v433) )
                            radius = 1;
                          else
LABEL_79:
                            radius = 0;
                          if ( v82 )
                            std::string::~string(&v433);
                          if ( v81 )
                            std::allocator<char>::~allocator(&__a);
                          if ( radius )
                          {
                            v86 = std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
                            if ( *(_BYTE *)(((unsigned __int64)&v86->area_id >> 3) + 0x7FFF8000) != 0
                              && *(_BYTE *)(((unsigned __int64)&v86->area_id >> 3) + 0x7FFF8000) <= 1 )
                            {
                              v86 = (std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load2(&v86->area_id);
                            }
                            area_id = v86->area_id;
                            ServiceBox::findService<GameserverService>();
                            GameserverService::getConfig((GameserverService *const)(v3 + 192));
                            v87 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
                            point_city_id = WorldAreaExcelConfigMgr::findAreaCityId(
                                              &v87->design_config.txt_config_mgr.world_area_config_mgr,
                                              area_id);
                            std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 192));
                            if ( point_city_id != *(_DWORD *)(v3 + 48) )
                              goto LABEL_92;
                            v88 = std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
                            if ( *(_BYTE *)(((unsigned __int64)&v88->type >> 3) + 0x7FFF8000) != 0
                              && *(_BYTE *)(((unsigned __int64)&v88->type >> 3) + 0x7FFF8000) <= 3 )
                            {
                              v88 = (std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v88->type);
                            }
                            if ( point_type == v88->type )
                              v89 = 1;
                            else
LABEL_92:
                              v89 = 0;
                            if ( v89 )
                              ++target_unlock_count;
                          }
                          std::shared_ptr<data::SceneTransPoint>::~shared_ptr((std::shared_ptr<data::SceneTransPoint> *const)(v3 + 160));
                          std::__detail::_Node_const_iterator<unsigned int,true,false>::operator++((std::__detail::_Node_const_iterator<unsigned int,true,false> *const)&__for_end_0);
                        }
                      }
                      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 128));
                      std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin_0);
                    }
                    v90 = target_unlock_count;
                    v94 = idx;
                    v91 = std::vector<unsigned int>::operator[](quest_progress_vec, idx);
                    v92 = v91;
                    v93 = *(_BYTE *)(((unsigned __int64)v91 >> 3) + 0x7FFF8000);
                    LOBYTE(v94) = v93 != 0;
                    v95 = (v93 != 0) & (unsigned __int8)((char)(((unsigned __int8)v91 & 7) + 3) >= v93);
                    if ( (_BYTE)v95 )
                      __asan_report_store4(v91, v94, v91, v95);
                    *v92 = v90;
                  }
                }
                break;
              case QUEST_CONTENT_ITEM_LESS_THAN_BARGAIN:
                if ( !std::vector<int>::empty(&quest_content->param) )
                {
                  v171 = (uint32_t *)std::vector<int>::operator[](&quest_content->param, 0LL);
                  v172 = v171;
                  if ( *(_BYTE *)(((unsigned __int64)v171 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)v171 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v171 >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load4(v171);
                  }
                  bargain_id = *v172;
                  v173 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
                  TalkComp = Player::getTalkComp(v173);
                  if ( PlayerTalkComp::isPlayerItemLessThanBargainLimit(TalkComp, bargain_id) )
                  {
                    common::milog::MiLogStream::create(
                      &v433,
                      &common::milog::MiLogDefault::default_log_obj_,
                      1u,
                      "./src/player/quest/quest.cpp",
                      "refreshProgress",
                      601);
                    v175 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                             &v433,
                             (const char (*)[21])"[Bargain] quest_id: ");
                    v176 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                             v175,
                             &this->quest_id_);
                    v177 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                             v176,
                             (const char (*)[50])" progress = 1 because of item less than bargain: ");
                    v178 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
                    *(_DWORD *)(v3 + 48) = Player::getUid(v178);
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v177,
                      (const unsigned int *)(v3 + 48));
                    common::milog::MiLogStream::~MiLogStream(&v433);
                    v182 = idx;
                    v179 = std::vector<unsigned int>::operator[](quest_progress_vec, idx);
                    v180 = v179;
                    v181 = *(_BYTE *)(((unsigned __int64)v179 >> 3) + 0x7FFF8000);
                    LOBYTE(v182) = v181 != 0;
                    v183 = (v181 != 0) & (unsigned __int8)((char)(((unsigned __int8)v179 & 7) + 3) >= v181);
                    if ( (_BYTE)v183 )
                      __asan_report_store4(v179, v182, v179, v183);
                    *v180 = 1;
                  }
                }
                break;
              case QUEST_CONTENT_MAIN_COOP_ENTER_SAVE_POINT:
                if ( std::vector<int>::size(&quest_content->param) > 1 )
                {
                  v184 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
                  CoopComp = Player::getCoopComp(v184);
                  v186 = (uint32_t *)std::vector<int>::operator[](&quest_content->param, 1uLL);
                  v187 = v186;
                  if ( *(_BYTE *)(((unsigned __int64)v186 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)v186 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v186 >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load4(v186);
                  }
                  v188 = *v187;
                  v189 = (uint32_t *)std::vector<int>::operator[](&quest_content->param, 0LL);
                  v190 = v189;
                  if ( *(_BYTE *)(((unsigned __int64)v189 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)v189 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v189 >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load4(v189);
                  }
                  if ( PlayerCoopComp::isMainCoopHasSavePoint(CoopComp, *v190, v188) )
                  {
                    v194 = idx;
                    v191 = std::vector<unsigned int>::operator[](quest_progress_vec, idx);
                    v192 = v191;
                    v193 = *(_BYTE *)(((unsigned __int64)v191 >> 3) + 0x7FFF8000);
                    LOBYTE(v194) = v193 != 0;
                    v195 = (v193 != 0) & (unsigned __int8)((char)(((unsigned __int8)v191 & 7) + 3) >= v193);
                    if ( (_BYTE)v195 )
                      __asan_report_store4(v191, v194, v191, v195);
                    *v192 = 1;
                  }
                }
                break;
              case QUEST_CONTENT_QUEST_STATE_EQUAL:
              case QUEST_CONTENT_QUEST_STATE_NOT_EQUAL:
                if ( std::vector<int>::size(&quest_content->param) > 1 )
                {
                  v196 = (uint32_t *)std::vector<int>::operator[](&quest_content->param, 0LL);
                  v197 = v196;
                  if ( *(_BYTE *)(((unsigned __int64)v196 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)v196 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v196 >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load4(v196);
                  }
                  quest_id = *v197;
                  v198 = (data::QuestState *)std::vector<int>::operator[](&quest_content->param, 1uLL);
                  v199 = v198;
                  if ( *(_BYTE *)(((unsigned __int64)v198 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)v198 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v198 >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load4(v198);
                  }
                  quest_state = *v199;
                  v200 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
                  v201 = Player::getQuestComp(v200);
                  QuestState = PlayerQuestComp::getQuestState(v201, quest_id);
                  v203 = quest_state == QuestState;
                  if ( *(_BYTE *)(((unsigned __int64)&quest_content->type >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&quest_content->type >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_load4(&quest_content->type);
                  }
                  if ( v203 == (quest_content->type == QUEST_CONTENT_QUEST_STATE_EQUAL) )
                  {
                    v207 = idx;
                    v204 = std::vector<unsigned int>::operator[](quest_progress_vec, idx);
                    v205 = v204;
                    v206 = *(_BYTE *)(((unsigned __int64)v204 >> 3) + 0x7FFF8000);
                    LOBYTE(v207) = v206 != 0;
                    v208 = (v206 != 0) & (unsigned __int8)((char)(((unsigned __int8)v204 & 7) + 3) >= v206);
                    if ( (_BYTE)v208 )
                      __asan_report_store4(v204, v207, v204, v208);
                    *v205 = 1;
                  }
                }
                else
                {
                  common::milog::MiLogStream::create(
                    &v433,
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/player/quest/quest.cpp",
                    "refreshProgress",
                    623);
                  common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                    &v433,
                    (const char (*)[23])"param size less than 2");
                  common::milog::MiLogStream::~MiLogStream(&v433);
                }
                break;
              case QUEST_CONTENT_UNLOCKED_RECIPE:
                v209 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
                cook_comp = Player::getCookComp(v209);
                is_all_unlocked = 1;
                __for_range_2 = &quest_content->param_map;
                __for_begin_1._M_node = std::map<unsigned int,unsigned int>::begin(&quest_content->param_map)._M_node;
                __for_end_0._M_node = std::map<unsigned int,unsigned int>::end(__for_range_2)._M_node;
                while ( std::operator!=(&__for_begin_1, &__for_end_0) )
                {
                  v210 = (std::pair<unsigned int const,unsigned int> *)std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin_1);
                  v211 = v210;
                  if ( ((unsigned __int8)v210 & 7) >= *(_BYTE *)(((unsigned __int64)v210 >> 3) + 0x7FFF8000)
                    && *(_BYTE *)(((unsigned __int64)v210 >> 3) + 0x7FFF8000) != 0
                    || *(_BYTE *)((((unsigned __int64)&v210->second + 3) >> 3) + 0x7FFF8000) != 0
                    && (((unsigned __int8)v210 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v210->second + 3) >> 3)
                                                                     + 0x7FFF8000) )
                  {
                    __asan_report_load_n(v210, 8LL);
                  }
                  __for_end_1 = *v211;
                  id = std::get<0ul,unsigned int const,unsigned int>(&__for_end_1);
                  _ = std::get<1ul,unsigned int const,unsigned int>(&__for_end_1);
                  if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load4(id);
                  }
                  if ( !PlayerCookComp::isRecipeUnlocked(cook_comp, *id) )
                  {
                    is_all_unlocked = 0;
                    common::milog::MiLogStream::create(
                      &v433,
                      &common::milog::MiLogDefault::default_log_obj_,
                      1u,
                      "./src/player/quest/quest.cpp",
                      "refreshProgress",
                      643);
                    v212 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                             &v433,
                             (const char (*)[11])"quest_id: ");
                    v213 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                             v212,
                             &this->quest_id_);
                    v214 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                             v213,
                             (const char (*)[21])" not unlock recipe: ");
                    v215 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v214, id);
                    v216 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
                    operator<<(v215, v216);
                    common::milog::MiLogStream::~MiLogStream(&v433);
                    break;
                  }
                  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin_1);
                }
                if ( is_all_unlocked )
                {
                  v220 = idx;
                  v217 = std::vector<unsigned int>::operator[](quest_progress_vec, idx);
                  v218 = v217;
                  v219 = *(_BYTE *)(((unsigned __int64)v217 >> 3) + 0x7FFF8000);
                  LOBYTE(v220) = v219 != 0;
                  v221 = (v219 != 0) & (unsigned __int8)((char)(((unsigned __int8)v217 & 7) + 3) >= v219);
                  if ( (_BYTE)v221 )
                    __asan_report_store4(v217, v220, v217, v221);
                  *v218 = 1;
                }
                break;
              case QUEST_CONTENT_NOT_UNLOCKED_RECIPE:
                v222 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
                cook_comp_0 = Player::getCookComp(v222);
                is_all_locked = 1;
                __for_range_3 = &quest_content->param_map;
                __for_begin_1._M_node = std::map<unsigned int,unsigned int>::begin(&quest_content->param_map)._M_node;
                __for_end_0._M_node = std::map<unsigned int,unsigned int>::end(__for_range_3)._M_node;
                while ( std::operator!=(&__for_begin_1, &__for_end_0) )
                {
                  v223 = (std::pair<unsigned int const,unsigned int> *)std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin_1);
                  v224 = v223;
                  if ( ((unsigned __int8)v223 & 7) >= *(_BYTE *)(((unsigned __int64)v223 >> 3) + 0x7FFF8000)
                    && *(_BYTE *)(((unsigned __int64)v223 >> 3) + 0x7FFF8000) != 0
                    || *(_BYTE *)((((unsigned __int64)&v223->second + 3) >> 3) + 0x7FFF8000) != 0
                    && (((unsigned __int8)v223 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v223->second + 3) >> 3)
                                                                     + 0x7FFF8000) )
                  {
                    __asan_report_load_n(v223, 8LL);
                  }
                  __for_end_1 = *v224;
                  id_0 = std::get<0ul,unsigned int const,unsigned int>(&__for_end_1);
                  __0 = std::get<1ul,unsigned int const,unsigned int>(&__for_end_1);
                  if ( *(_BYTE *)(((unsigned __int64)id_0 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id_0 >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load4(id_0);
                  }
                  if ( PlayerCookComp::isRecipeUnlocked(cook_comp_0, *id_0) )
                  {
                    is_all_locked = 0;
                    common::milog::MiLogStream::create(
                      &v433,
                      &common::milog::MiLogDefault::default_log_obj_,
                      1u,
                      "./src/player/quest/quest.cpp",
                      "refreshProgress",
                      662);
                    v225 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                             &v433,
                             (const char (*)[11])"quest_id: ");
                    v226 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                             v225,
                             &this->quest_id_);
                    v227 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                             v226,
                             (const char (*)[19])" unlocked recipe: ");
                    v228 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v227, id_0);
                    v229 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
                    operator<<(v228, v229);
                    common::milog::MiLogStream::~MiLogStream(&v433);
                    break;
                  }
                  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin_1);
                }
                if ( is_all_locked )
                {
                  v233 = idx;
                  v230 = std::vector<unsigned int>::operator[](quest_progress_vec, idx);
                  v231 = v230;
                  v232 = *(_BYTE *)(((unsigned __int64)v230 >> 3) + 0x7FFF8000);
                  LOBYTE(v233) = v232 != 0;
                  v234 = (v232 != 0) & (unsigned __int8)((char)(((unsigned __int8)v230 & 7) + 3) >= v232);
                  if ( (_BYTE)v234 )
                    __asan_report_store4(v230, v233, v230, v234);
                  *v231 = 1;
                }
                break;
              case QUEST_CONTENT_ENTER_VEHICLE:
                if ( !std::vector<int>::empty(&quest_content->param) )
                {
                  v235 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
                  Player::getVehicleComp(v235);
                  PlayerVehicleComp::getCurVehicle((const PlayerVehicleComp *const)(v3 + 192));
                  if ( !std::operator==<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v3 + 192)) )
                  {
                    v236 = std::vector<int>::operator[](&quest_content->param, 0LL);
                    v237 = v236;
                    if ( *(_BYTE *)(((unsigned __int64)v236 >> 3) + 0x7FFF8000) != 0
                      && (char)(((unsigned __int8)v236 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v236 >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_load4(v236);
                    }
                    if ( !*v237 )
                      goto LABEL_215;
                    v238 = (__gnu_cxx::__alloc_traits<std::allocator<int>,int>::value_type *)std::vector<int>::operator[](
                                                                                               &quest_content->param,
                                                                                               0LL);
                    v239 = v238;
                    if ( *(_BYTE *)(((unsigned __int64)v238 >> 3) + 0x7FFF8000) != 0
                      && (char)(((unsigned __int8)v238 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v238 >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_load4(v238);
                    }
                    v240 = *v239;
                    v241 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
                    if ( v240 != Gadget::getGadgetId(v241) )
                      v242 = 0;
                    else
LABEL_215:
                      v242 = 1;
                    is_quest_content_meet = v242;
                    if ( !v242 )
                      goto LABEL_222;
                    v243 = std::vector<unsigned int>::operator[](quest_progress_vec, idx);
                    v244 = v243;
                    if ( *(_BYTE *)(((unsigned __int64)v243 >> 3) + 0x7FFF8000) != 0
                      && (char)(((unsigned __int8)v243 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v243 >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_load4(v243);
                    }
                    if ( *v244 )
LABEL_222:
                      v245 = 0;
                    else
                      v245 = 1;
                    if ( v245 )
                    {
                      v249 = idx;
                      v246 = std::vector<unsigned int>::operator[](quest_progress_vec, idx);
                      v247 = v246;
                      v248 = *(_BYTE *)(((unsigned __int64)v246 >> 3) + 0x7FFF8000);
                      LOBYTE(v249) = v248 != 0;
                      v250 = (v248 != 0) & (unsigned __int8)((char)(((unsigned __int8)v246 & 7) + 3) >= v248);
                      if ( (_BYTE)v250 )
                        __asan_report_store4(v246, v249, v246, v250);
                      *v247 = 1;
                    }
                  }
                  std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v3 + 192));
                }
                break;
              case QUEST_CONTENT_SCENE_LEVEL_TAG_EQ:
                if ( !std::vector<int>::empty(&quest_content->param) )
                {
                  v251 = std::vector<int>::operator[](&quest_content->param, 0LL);
                  v252 = v251;
                  if ( *(_BYTE *)(((unsigned __int64)v251 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)v251 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v251 >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load4(v251);
                  }
                  *(_DWORD *)(v3 + 48) = *v252;
                  v253 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
                  v254 = Player::getSceneComp(v253);
                  PlayerSceneComp::getCurLevelTagIdVec((std::vector<unsigned int> *)(v3 + 288), v254);
                  if ( common::tools::MiscUtils::isContains<unsigned int>(
                         (std::vector<unsigned int> *)(v3 + 288),
                         (const unsigned int *)(v3 + 48)) )
                  {
                    v258 = idx;
                    v255 = std::vector<unsigned int>::operator[](quest_progress_vec, idx);
                    v256 = v255;
                    v257 = *(_BYTE *)(((unsigned __int64)v255 >> 3) + 0x7FFF8000);
                    LOBYTE(v258) = v257 != 0;
                    v259 = (v257 != 0) & (unsigned __int8)((char)(((unsigned __int8)v255 & 7) + 3) >= v257);
                    if ( (_BYTE)v259 )
                      __asan_report_store4(v255, v258, v255, v259);
                    *v256 = 1;
                  }
                  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 288));
                }
                break;
              case QUEST_CONTENT_LEAVE_SCENE:
                if ( !std::vector<int>::empty(&quest_content->param) )
                {
                  v260 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
                  Player::getSceneComp(v260);
                  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v3 + 192));
                  if ( !std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 192)) )
                  {
                    v261 = (__gnu_cxx::__alloc_traits<std::allocator<int>,int>::value_type *)std::vector<int>::operator[](
                                                                                               &quest_content->param,
                                                                                               0LL);
                    v262 = v261;
                    if ( *(_BYTE *)(((unsigned __int64)v261 >> 3) + 0x7FFF8000) != 0
                      && (char)(((unsigned __int8)v261 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v261 >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_load4(v261);
                    }
                    v263 = *v262;
                    v264 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
                    if ( v263 != Scene::getSceneId(v264) )
                    {
                      v268 = idx;
                      v265 = std::vector<unsigned int>::operator[](quest_progress_vec, idx);
                      v266 = v265;
                      v267 = *(_BYTE *)(((unsigned __int64)v265 >> 3) + 0x7FFF8000);
                      LOBYTE(v268) = v267 != 0;
                      v269 = (v267 != 0) & (unsigned __int8)((char)(((unsigned __int8)v265 & 7) + 3) >= v267);
                      if ( (_BYTE)v269 )
                        __asan_report_store4(v265, v268, v265, v269);
                      *v266 = 1;
                    }
                  }
                  goto LABEL_285;
                }
                break;
              case QUEST_CONTENT_LEAVE_SCENE_RANGE:
                if ( std::vector<int>::size(&quest_content->param) == 2
                  && !(unsigned __int8)std::string::empty(&quest_content->param_str) )
                {
                  v271 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
                  v272 = Player::getQuestComp(v271);
                  std::string::basic_string(&v433, &quest_content->param_str);
                  v273 = (uint32_t *)std::vector<int>::operator[](&quest_content->param, 1uLL);
                  v274 = v273;
                  if ( *(_BYTE *)(((unsigned __int64)v273 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)v273 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v273 >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load4(v273);
                  }
                  v275 = *v274;
                  v276 = (uint32_t *)std::vector<int>::operator[](&quest_content->param, 0LL);
                  v277 = v276;
                  if ( *(_BYTE *)(((unsigned __int64)v276 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)v276 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v276 >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load4(v276);
                  }
                  isNotInSceneRange = PlayerQuestComp::isNotInSceneRange(v272, *v277, v275, (std::string *)&v433);
                  std::string::~string(&v433);
                  if ( isNotInSceneRange )
                  {
                    v282 = idx;
                    v279 = std::vector<unsigned int>::operator[](quest_progress_vec, idx);
                    v280 = v279;
                    v281 = *(_BYTE *)(((unsigned __int64)v279 >> 3) + 0x7FFF8000);
                    LOBYTE(v282) = v281 != 0;
                    v283 = (v281 != 0) & (unsigned __int8)((char)(((unsigned __int8)v279 & 7) + 3) >= v281);
                    if ( (_BYTE)v283 )
                      __asan_report_store4(v279, v282, v279, v283);
                    *v280 = 1;
                  }
                }
                break;
              case QUEST_CONTENT_ACTIVITY_TRIGGER_UPDATE:
                if ( std::vector<int>::size(&quest_content->param) == 2 )
                {
                  v303 = std::vector<int>::operator[](&quest_content->param, 0LL);
                  v304 = v303;
                  if ( *(_BYTE *)(((unsigned __int64)v303 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)v303 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v303 >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load4(v303);
                  }
                  *(_DWORD *)(v3 + 48) = *v304;
                  v305 = (uint32_t *)std::vector<int>::operator[](&quest_content->param, 1uLL);
                  v306 = v305;
                  if ( *(_BYTE *)(((unsigned __int64)v305 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)v305 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v305 >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load4(v305);
                  }
                  param_key = *v306;
                  v307 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
                  ActivityComp = (unsigned int)Player::getActivityComp(v307);
                  PlayerActivityComp::findBaseActivity((PlayerActivityComp *const)(v3 + 192), ActivityComp);
                  if ( std::operator==<BaseActivity>(0LL, (const std::shared_ptr<BaseActivity> *)(v3 + 192))
                    || (v309 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192)),
                        !BaseActivity::isOpening(v309, 0)) )
                  {
                    common::milog::MiLogStream::create(
                      &v433,
                      &common::milog::MiLogDefault::default_log_obj_,
                      1u,
                      "./src/player/quest/quest.cpp",
                      "refreshProgress",
                      774);
                    v311 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                             &v433,
                             (const char (*)[11])"quest_id: ");
                    v312 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                             v311,
                             &this->quest_id_);
                    v313 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                             v312,
                             (const char (*)[15])", activity_id:");
                    v314 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                             v313,
                             (const unsigned int *)(v3 + 48));
                    common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                      v314,
                      (const char (*)[10])" not open");
                    common::milog::MiLogStream::~MiLogStream(&v433);
                  }
                  else
                  {
                    v315 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
                    QuestContentValue = BaseActivity::getQuestContentValue(v315, param_key);
                    v320 = idx;
                    v317 = std::vector<unsigned int>::operator[](quest_progress_vec, idx);
                    v318 = v317;
                    v319 = *(_BYTE *)(((unsigned __int64)v317 >> 3) + 0x7FFF8000);
                    LOBYTE(v320) = v319 != 0;
                    v321 = (v319 != 0) & (unsigned __int8)((char)(((unsigned __int8)v317 & 7) + 3) >= v319);
                    if ( (_BYTE)v321 )
                      __asan_report_store4(v317, v320, v317, v321);
                    *v318 = QuestContentValue;
                  }
                  std::shared_ptr<BaseActivity>::~shared_ptr((std::shared_ptr<BaseActivity> *const)(v3 + 192));
                }
                break;
              case QUEST_CONTENT_GADGET_STATE_CHANGE:
                if ( std::vector<int>::size(&quest_content->param) == 3 )
                {
                  v322 = (__gnu_cxx::__alloc_traits<std::allocator<int>,int>::value_type *)std::vector<int>::operator[](
                                                                                             &quest_content->param,
                                                                                             0LL);
                  v323 = v322;
                  if ( *(_BYTE *)(((unsigned __int64)v322 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)v322 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v322 >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load4(v322);
                  }
                  group_id = *v323;
                  v324 = (__gnu_cxx::__alloc_traits<std::allocator<int>,int>::value_type *)std::vector<int>::operator[](
                                                                                             &quest_content->param,
                                                                                             1uLL);
                  v325 = v324;
                  if ( *(_BYTE *)(((unsigned __int64)v324 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)v324 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v324 >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load4(v324);
                  }
                  config_id = *v325;
                  v326 = (__gnu_cxx::__alloc_traits<std::allocator<int>,int>::value_type *)std::vector<int>::operator[](
                                                                                             &quest_content->param,
                                                                                             2uLL);
                  v327 = v326;
                  if ( *(_BYTE *)(((unsigned __int64)v326 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)v326 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v326 >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load4(v326);
                  }
                  state = *v327;
                  v328 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
                  v329 = (unsigned int)Player::getSceneComp(v328);
                  ServiceBox::findService<GameserverService>();
                  GameserverService::getConfig((GameserverService *const)(v3 + 192));
                  v330 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
                  LuaConfigMgr::getSceneIdByGroupId(&v330->design_config.lua_config_mgr, group_id);
                  PlayerSceneComp::findScene((const PlayerSceneComp *const)(v3 + 128), v329);
                  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 192));
                  if ( !std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 128), 0LL) )
                  {
                    v331 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
                    BlockGroupComp = (unsigned int)Scene::getBlockGroupComp(v331);
                    SceneBlockGroupComp::getActiveGroup((SceneBlockGroupComp *const)(v3 + 160), BlockGroupComp);
                    if ( !std::operator==<Group>((const std::shared_ptr<Group> *)(v3 + 160), 0LL) )
                    {
                      v333 = (unsigned int)std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
                      Group::findEntityByConfigId<Gadget>((Group *const)(v3 + 192), v333);
                      if ( !std::operator==<Gadget>((const std::shared_ptr<Gadget> *)(v3 + 192), 0LL) )
                      {
                        v334 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
                        v335 = Gadget::getState(v334);
                        if ( v335 == state )
                        {
                          v339 = idx;
                          v336 = std::vector<unsigned int>::operator[](quest_progress_vec, idx);
                          v337 = v336;
                          v338 = *(_BYTE *)(((unsigned __int64)v336 >> 3) + 0x7FFF8000);
                          LOBYTE(v339) = v338 != 0;
                          v340 = (v338 != 0) & (unsigned __int8)((char)(((unsigned __int8)v336 & 7) + 3) >= v338);
                          if ( (_BYTE)v340 )
                            __asan_report_store4(v336, v339, v336, v340);
                          *v337 = 1;
                        }
                      }
                      std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v3 + 192));
                    }
                    std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v3 + 160));
                  }
                  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 128));
                }
                break;
              case QUEST_CONTENT_LEAVE_SCENE_RANGE_AND_ROOM:
                if ( std::vector<int>::size(&quest_content->param) > 2
                  && !(unsigned __int8)std::string::empty(&quest_content->param_str) )
                {
                  v285 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
                  Player::getSceneComp(v285);
                  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v3 + 192));
                  if ( !std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 192)) )
                  {
                    v286 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
                    scene_id_2 = Scene::getSceneId(v286);
                    is_in_target_room = 0;
                    for ( idx_0 = 2; ; ++idx_0 )
                    {
                      v287 = idx_0;
                      if ( v287 >= std::vector<int>::size(&quest_content->param) )
                        break;
                      v288 = std::vector<int>::operator[](&quest_content->param, idx_0);
                      v289 = v288;
                      if ( *(_BYTE *)(((unsigned __int64)v288 >> 3) + 0x7FFF8000) != 0
                        && (char)(((unsigned __int8)v288 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v288 >> 3)
                                                                               + 0x7FFF8000) )
                      {
                        __asan_report_load4(v288);
                      }
                      if ( scene_id_2 == *v289 )
                      {
                        is_in_target_room = 1;
                        break;
                      }
                    }
                    v290 = 0;
                    if ( is_in_target_room )
                      goto LABEL_278;
                    v291 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
                    v292 = Player::getQuestComp(v291);
                    std::string::basic_string(&v433, &quest_content->param_str);
                    v290 = 1;
                    v293 = (uint32_t *)std::vector<int>::operator[](&quest_content->param, 1uLL);
                    v294 = v293;
                    if ( *(_BYTE *)(((unsigned __int64)v293 >> 3) + 0x7FFF8000) != 0
                      && (char)(((unsigned __int8)v293 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v293 >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_load4(v293);
                    }
                    radiusa = *v294;
                    v295 = (uint32_t *)std::vector<int>::operator[](&quest_content->param, 0LL);
                    v296 = v295;
                    if ( *(_BYTE *)(((unsigned __int64)v295 >> 3) + 0x7FFF8000) != 0
                      && (char)(((unsigned __int8)v295 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v295 >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_load4(v295);
                    }
                    if ( PlayerQuestComp::isNotInSceneRange(v292, *v296, radiusa, (std::string *)&v433) )
                      v297 = 1;
                    else
LABEL_278:
                      v297 = 0;
                    if ( v290 )
                      std::string::~string(&v433);
                    if ( v297 )
                    {
                      v301 = idx;
                      v298 = std::vector<unsigned int>::operator[](quest_progress_vec, idx);
                      v299 = v298;
                      v300 = *(_BYTE *)(((unsigned __int64)v298 >> 3) + 0x7FFF8000);
                      LOBYTE(v301) = v300 != 0;
                      v302 = (v300 != 0) & (unsigned __int8)((char)(((unsigned __int8)v298 & 7) + 3) >= v300);
                      if ( (_BYTE)v302 )
                        __asan_report_store4(v298, v301, v298, v302);
                      *v299 = 1;
                    }
                  }
LABEL_285:
                  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 192));
                }
                break;
              case QUEST_CONTENT_AVATAR_RENAME_COMPLETE:
                if ( std::vector<int>::size(&quest_content->param) == 1 )
                {
                  v341 = std::vector<int>::operator[](&quest_content->param, 0LL);
                  v342 = v341;
                  if ( *(_BYTE *)(((unsigned __int64)v341 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)v341 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v341 >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load4(v341);
                  }
                  *(_DWORD *)(v3 + 32) = *v342;
                  ServiceBox::findService<GameserverService>();
                  GameserverService::getConfig((GameserverService *const)(v3 + 192));
                  v343 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
                  rename_config_ptr = data::RenameExcelConfigMgrBase::findAvatarRenameExcelConfig(
                                        &v343->design_config.txt_config_mgr.rename_config_mgr,
                                        *(_DWORD *)(v3 + 32));
                  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 192));
                  if ( rename_config_ptr )
                  {
                    v345 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
                    AvatarComp = Player::getAvatarComp(v345);
                    if ( *(_BYTE *)(((unsigned __int64)&rename_config_ptr->related_avatar_id >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((unsigned __int64)&rename_config_ptr->related_avatar_id >> 3) + 0x7FFF8000) <= 3 )
                    {
                      __asan_report_load4(&rename_config_ptr->related_avatar_id);
                    }
                    rename_data_ptr = PlayerAvatarComp::findAvatarRenameData(
                                        AvatarComp,
                                        rename_config_ptr->related_avatar_id);
                    if ( rename_data_ptr )
                    {
                      if ( *(_BYTE *)(((unsigned __int64)&rename_data_ptr->has_set_by_quest >> 3) + 0x7FFF8000) != 0
                        && (((unsigned __int8)rename_data_ptr + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&rename_data_ptr->has_set_by_quest >> 3)
                                                                                    + 0x7FFF8000) )
                      {
                        __asan_report_load1(&rename_data_ptr->has_set_by_quest);
                      }
                      if ( rename_data_ptr->has_set_by_quest )
                      {
                        v350 = idx;
                        v347 = std::vector<unsigned int>::operator[](quest_progress_vec, idx);
                        v348 = v347;
                        v349 = *(_BYTE *)(((unsigned __int64)v347 >> 3) + 0x7FFF8000);
                        LOBYTE(v350) = v349 != 0;
                        v351 = (v349 != 0) & (unsigned __int8)((char)(((unsigned __int8)v347 & 7) + 3) >= v349);
                        if ( (_BYTE)v351 )
                          __asan_report_store4(v347, v350, v347, v351);
                        *v348 = 1;
                        common::milog::MiLogStream::create(
                          &v433,
                          &common::milog::MiLogDefault::default_log_obj_,
                          1u,
                          "./src/player/quest/quest.cpp",
                          "refreshProgress",
                          824);
                        v352 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                                 &v433,
                                 (const char (*)[55])"name has already set by quest, now refresh quest, uid:");
                        v353 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
                        *(_DWORD *)(v3 + 48) = Player::getUid(v353);
                        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v352,
                          (const unsigned int *)(v3 + 48));
                        common::milog::MiLogStream::~MiLogStream(&v433);
                      }
                    }
                  }
                  else
                  {
                    common::milog::MiLogStream::create(
                      &v433,
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/player/quest/quest.cpp",
                      "refreshProgress",
                      816);
                    v344 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                             &v433,
                             (const char (*)[39])"cannot find rename config, rename_id: ");
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v344,
                      (const unsigned int *)(v3 + 32));
                    common::milog::MiLogStream::~MiLogStream(&v433);
                  }
                }
                break;
              case QUEST_CONTENT_QUEST_GLOBAL_VAR_EQUAL:
              case QUEST_CONTENT_QUEST_GLOBAL_VAR_GREATER:
              case QUEST_CONTENT_QUEST_GLOBAL_VAR_LESS:
                isQuestGlobalVarParamMatch = Quest::isQuestGlobalVarParamMatch(this, quest_content);
                v358 = idx;
                v355 = std::vector<unsigned int>::operator[](quest_progress_vec, idx);
                v356 = (_BOOL4 *)v355;
                v357 = *(_BYTE *)(((unsigned __int64)v355 >> 3) + 0x7FFF8000);
                LOBYTE(v358) = v357 != 0;
                v359 = (v357 != 0) & (unsigned __int8)((char)(((unsigned __int8)v355 & 7) + 3) >= v357);
                if ( (_BYTE)v359 )
                  __asan_report_store4(v355, v358, v355, v359);
                *v356 = isQuestGlobalVarParamMatch;
                break;
              default:
                continue;
            }
          }
          __gnu_cxx::__normal_iterator<std::pair<std::vector<data::QuestContent> const&,std::vector&<unsigned int,std::allocator<unsigned int>>> *,std::vector<std::pair<std::vector<data::QuestContent> const&,std::vector&<unsigned int,std::allocator<unsigned int>>>>>::operator++(&__for_begin);
        }
        if ( is_notify )
          Quest::notifyQuestProgress(this);
        Quest::checkAndUpdateState(this, is_notify);
        std::vector<std::pair<std::vector const&<data::QuestContent,std::allocator<std::vector const&>>,std::vector&<unsigned int,std::allocator<unsigned int>>>>::~vector((std::vector<std::pair<const std::vector<data::QuestContent>&,std::vector<unsigned int>&>> *const)(v3 + 224));
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 96));
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v433,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/quest/quest.cpp",
      "refreshProgress",
      345);
    v6 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           &v433,
           (const char (*)[32])"getQuestConfig fails, quest_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->quest_id_);
    common::milog::MiLogStream::~MiLogStream(&v433);
  }
  if ( v434 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
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
};

// Line 854: range 00000000143BCD00-00000000143BD5E0
void __cdecl Quest::updateContentProgress(
        Quest *const this,
        data::QuestContentType type,
        uint32_t param1,
        uint32_t param2,
        uint32_t param3,
        const std::string *param_str,
        uint32_t up_type,
        uint32_t delta)
{
  unsigned __int64 v8; // r13
  __int64 v9; // rax
  _DWORD *v10; // r12
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  Player *v13; // rax
  PlayerQuestComp *QuestComp; // rcx
  Player *v15; // rax
  PlayerQuestComp *v16; // rax
  std::__shared_ptr_access<ParentQuest,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  std::vector<unsigned int>::size_type v23; // r14
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // r14
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // r14
  std::vector<unsigned int>::size_type v29; // rax
  std::vector<unsigned int>::size_type v30; // r14
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // r14
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // r14
  std::vector<unsigned int>::size_type v36; // rax
  unsigned __int64 val; // [rsp+28h] [rbp-148h] BYREF
  unsigned __int64 v42; // [rsp+30h] [rbp-140h] BYREF
  const data::QuestExcelConfig *quest_config_ptr; // [rsp+38h] [rbp-138h]
  common::milog::MiLogStream v44; // [rsp+40h] [rbp-130h] BYREF
  char v45[272]; // [rsp+60h] [rbp-110h] BYREF

  v8 = (unsigned __int64)v45;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_2(224LL);
    if ( v9 )
      v8 = v9;
  }
  *(_QWORD *)v8 = 1102416563LL;
  *(_QWORD *)(v8 + 8) = "5 48 1 14 is_updated:905 64 4 19 parent_quest_id:875 80 16 14 player_ptr:869 112 16 20 parent_qu"
                        "est_ptr:876 144 48 15 update_func:906";
  *(_QWORD *)(v8 + 16) = Quest::updateContentProgress;
  v10 = (_DWORD *)(v8 >> 3);
  v10[536862720] = -235802127;
  v10[536862721] = -234753551;
  v10[536862722] = 61956;
  v10[536862723] = 62194;
  v10[536862724] = 62194;
  v10[536862726] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->state_);
  }
  if ( this->state_ == QUEST_STATE_UNFINISHED )
  {
    quest_config_ptr = Quest::getQuestConfig(this);
    if ( quest_config_ptr )
    {
      Quest::getOwner((const Quest *const)(v8 + 80));
      if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v8 + 80), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v44,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/quest/quest.cpp",
          "updateContentProgress",
          872);
        v12 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                &v44,
                (const char (*)[27])"getOwner failed, quest_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &this->quest_id_);
        common::milog::MiLogStream::~MiLogStream(&v44);
      }
      else
      {
        v13 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v8 + 80));
        QuestComp = Player::getQuestComp(v13);
        if ( *(_BYTE *)(((unsigned __int64)&this->quest_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->quest_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->quest_id_);
        }
        *(_DWORD *)(v8 + 64) = PlayerQuestComp::findParentQuestId(QuestComp, this->quest_id_);
        v15 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v8 + 80));
        v16 = Player::getQuestComp(v15);
        PlayerQuestComp::findParentQuest((const PlayerQuestComp *const)(v8 + 112), (__int64)v16, *(_DWORD *)(v8 + 64));
        if ( std::operator!=<ParentQuest>((const std::shared_ptr<ParentQuest> *)(v8 + 112), 0LL)
          && (v17 = std::__shared_ptr_access<ParentQuest,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ParentQuest,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v8 + 112)),
              ParentQuest::getParentQuestState(v17) == PARENT_QUEST_STATE_CANCELED) )
        {
          Quest::clearAbilityGroup(this);
          common::milog::MiLogStream::create(
            &v44,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/quest/quest.cpp",
            "updateContentProgress",
            881);
          v19 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
                  &v44,
                  (const char (*)[62])"parent_quest has been cancelled, don't updateContentProgress,");
          v20 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v19, (const char (*)[11])" quest_id:");
          v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &this->quest_id_);
          v22 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                  v21,
                  (const char (*)[18])" parent_quest_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v8 + 64));
          common::milog::MiLogStream::~MiLogStream(&v44);
          Quest::clearQuestSceneRange(this);
        }
        else
        {
          v23 = std::vector<unsigned int>::size(&this->content_finish_progress_vec_);
          if ( v23 != std::vector<data::QuestContent>::size(&quest_config_ptr->finish_cond) )
          {
            common::milog::MiLogStream::create(
              &v44,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/quest/quest.cpp",
              "updateContentProgress",
              893);
            v24 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                    &v44,
                    (const char (*)[35])"quest content not match, quest_id:");
            v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &this->quest_id_);
            v26 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v25, (const char (*)[11])" bin size:");
            val = std::vector<unsigned int>::size(&this->content_finish_progress_vec_);
            v27 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v26, &val);
            v28 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v27,
                    (const char (*)[14])" config size:");
            v42 = std::vector<data::QuestContent>::size(&quest_config_ptr->finish_cond);
            common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v28, &v42);
            common::milog::MiLogStream::~MiLogStream(&v44);
            v29 = std::vector<data::QuestContent>::size(&quest_config_ptr->finish_cond);
            std::vector<unsigned int>::resize(&this->content_finish_progress_vec_, v29);
          }
          v30 = std::vector<unsigned int>::size(&this->content_fail_progress_vec_);
          if ( v30 != std::vector<data::QuestContent>::size(&quest_config_ptr->fail_cond) )
          {
            common::milog::MiLogStream::create(
              &v44,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/quest/quest.cpp",
              "updateContentProgress",
              900);
            v31 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                    &v44,
                    (const char (*)[40])"quest fail content not match, quest_id:");
            v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, &this->quest_id_);
            v33 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v32, (const char (*)[11])" bin size:");
            val = std::vector<unsigned int>::size(&this->content_fail_progress_vec_);
            v34 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v33, &val);
            v35 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v34,
                    (const char (*)[14])" config size:");
            v42 = std::vector<data::QuestContent>::size(&quest_config_ptr->fail_cond);
            common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v35, &v42);
            common::milog::MiLogStream::~MiLogStream(&v44);
            v36 = std::vector<data::QuestContent>::size(&quest_config_ptr->fail_cond);
            std::vector<unsigned int>::resize(&this->content_fail_progress_vec_, v36);
          }
          *(_BYTE *)(v8 + 48) = 0;
          *(_QWORD *)(v8 + 144) = this;
          *(_DWORD *)(v8 + 152) = type;
          *(_DWORD *)(v8 + 156) = param1;
          *(_DWORD *)(v8 + 160) = param2;
          *(_DWORD *)(v8 + 164) = param3;
          *(_QWORD *)(v8 + 168) = param_str;
          *(_DWORD *)(v8 + 176) = up_type;
          *(_DWORD *)(v8 + 180) = delta;
          *(_QWORD *)(v8 + 184) = v8 + 48;
          Quest::updateContentProgress(data::QuestContentType,unsigned int,unsigned int,unsigned int,std::string const&,unsigned int,unsigned int)::{lambda(std::vector<data::QuestContent> const&,std::vector&<unsigned int,std::allocator<unsigned int>>)#1}::operator()(
            (const Quest::updateContentProgress::<lambda(const std::vector<data::QuestContent>&, std::vector<unsigned int>&)> *const)(v8 + 144),
            &quest_config_ptr->finish_cond,
            &this->content_finish_progress_vec_);
          Quest::updateContentProgress(data::QuestContentType,unsigned int,unsigned int,unsigned int,std::string const&,unsigned int,unsigned int)::{lambda(std::vector<data::QuestContent> const&,std::vector&<unsigned int,std::allocator<unsigned int>>)#1}::operator()(
            (const Quest::updateContentProgress::<lambda(const std::vector<data::QuestContent>&, std::vector<unsigned int>&)> *const)(v8 + 144),
            &quest_config_ptr->fail_cond,
            &this->content_fail_progress_vec_);
          if ( *(_BYTE *)(v8 + 48) )
            Quest::notifyQuestProgress(this);
          Quest::checkAndUpdateState(this, 1);
        }
        std::shared_ptr<ParentQuest>::~shared_ptr((std::shared_ptr<ParentQuest> *const)(v8 + 112));
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v8 + 80));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v44,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/quest/quest.cpp",
        "updateContentProgress",
        863);
      v11 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
              &v44,
              (const char (*)[32])"getQuestConfig fails, quest_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &this->quest_id_);
      common::milog::MiLogStream::~MiLogStream(&v44);
    }
  }
  if ( v45 == (char *)v8 )
  {
    *(_QWORD *)((v8 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v8 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v8 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v8 = 1172321806LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v8 >> 3) + 0x7FFF8018) = -168430091;
  }
};

// Line 906: range 00000000143BC63C-00000000143BCCFF
void __cdecl Quest::updateContentProgress(data::QuestContentType,unsigned int,unsigned int,unsigned int,std::string const&,unsigned int,unsigned int)::{lambda(std::vector<data::QuestContent> const&,std::vector&<unsigned int,std::allocator<unsigned int>>)#1}::operator()(
        const Quest::updateContentProgress::<lambda(const std::vector<data::QuestContent>&, std::vector<unsigned int>&)> *const __closure,
        const std::vector<data::QuestContent> *quest_content_vec,
        std::vector<unsigned int> *progress_vec)
{
  data::QuestContentType type; // ecx
  Quest *this; // rcx
  Quest *p_param_str; // rdi
  const std::string *param_str; // r8
  uint32_t param3; // esi
  uint32_t param2; // ecx
  uint32_t up_type; // eax
  unsigned __int64 v10; // rax
  uint32_t *p_up_type; // rsi
  uint32_t delta; // ebx
  std::vector<unsigned int>::reference v13; // rax
  uint32_t *v14; // rdx
  char v15; // cl
  __int64 v16; // rcx
  std::vector<unsigned int>::reference v17; // rax
  uint32_t *v18; // rdx
  uint32_t v19; // ecx
  std::vector<unsigned int>::reference v20; // rax
  int *v21; // rdx
  int v22; // ecx
  uint32_t v23; // ebx
  std::vector<unsigned int>::reference v24; // rax
  _DWORD *v25; // rdx
  char v26; // cl
  __int64 v27; // rcx
  common::milog::MiLogStream *v28; // rax
  bool *is_updated; // rdx
  char v30; // cl
  __int64 v31; // rcx
  uint32_t idx; // [rsp+24h] [rbp-3Ch]
  const data::QuestContent *quest_content; // [rsp+28h] [rbp-38h]
  common::milog::MiLogStream v37; // [rsp+30h] [rbp-30h] BYREF

  for ( idx = 0; idx < std::vector<data::QuestContent>::size(quest_content_vec); ++idx )
  {
    quest_content = std::vector<data::QuestContent>::operator[](quest_content_vec, idx);
    if ( *(_BYTE *)(((unsigned __int64)&quest_content->type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&quest_content->type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&quest_content->type);
    }
    type = quest_content->type;
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&__closure->__type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&__closure->__type);
    }
    if ( type == __closure->__type )
    {
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&__closure->__type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&__closure->__type);
      }
      if ( __closure->__type == QUEST_CONTENT_COMPLETE_TALK )
      {
        if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
          __asan_report_load8(__closure);
        this = __closure->__this;
        if ( *(_BYTE *)(((unsigned __int64)&__closure->__param1 >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)__closure + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&__closure->__param1 >> 3)
                                                                   + 0x7FFF8000) )
        {
          __asan_report_load4(&__closure->__param1);
        }
        Quest::updateQuestTalk(this, quest_content, __closure->__param1);
      }
      if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
        __asan_report_load8(__closure);
      p_param_str = __closure->__this;
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__param_str >> 3) + 0x7FFF8000) )
      {
        p_param_str = (Quest *)&__closure->__param_str;
        __asan_report_load8(&__closure->__param_str);
      }
      param_str = __closure->__param_str;
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__param3 >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)__closure + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&__closure->__param3 >> 3)
                                                                 + 0x7FFF8000) )
      {
        p_param_str = (Quest *)&__closure->__param3;
        __asan_report_load4(&__closure->__param3);
      }
      param3 = __closure->__param3;
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__param2 >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&__closure->__param2 >> 3) + 0x7FFF8000) <= 3 )
      {
        p_param_str = (Quest *)&__closure->__param2;
        __asan_report_load4(&__closure->__param2);
      }
      param2 = __closure->__param2;
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__param1 >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)__closure + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&__closure->__param1 >> 3)
                                                                 + 0x7FFF8000) )
      {
        p_param_str = (Quest *)&__closure->__param1;
        __asan_report_load4(&__closure->__param1);
      }
      if ( Quest::isParamMatch(p_param_str, quest_content, __closure->__param1, param2, param3, param_str) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&__closure->__up_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&__closure->__up_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&__closure->__up_type);
        }
        up_type = __closure->__up_type;
        if ( up_type == 3 )
        {
          v17 = std::vector<unsigned int>::operator[](progress_vec, idx);
          v18 = v17;
          if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v17);
          }
          v19 = *v18;
          if ( *(_BYTE *)(((unsigned __int64)&__closure->__delta >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)__closure + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&__closure->__delta >> 3)
                                                                     + 0x7FFF8000) )
          {
            __asan_report_load4(&__closure->__delta);
          }
          if ( v19 <= __closure->__delta )
          {
            v23 = 0;
          }
          else
          {
            v20 = std::vector<unsigned int>::operator[](progress_vec, idx);
            v21 = (int *)v20;
            if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v20);
            }
            v22 = *v21;
            if ( *(_BYTE *)(((unsigned __int64)&__closure->__delta >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)__closure + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&__closure->__delta >> 3)
                                                                       + 0x7FFF8000) )
            {
              __asan_report_load4(&__closure->__delta);
            }
            v23 = v22 - __closure->__delta;
          }
          p_up_type = (uint32_t *)idx;
          v24 = std::vector<unsigned int>::operator[](progress_vec, idx);
          v25 = v24;
          v26 = *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000);
          LOBYTE(p_up_type) = v26 != 0;
          v27 = (v26 != 0) & (unsigned __int8)((char)(((unsigned __int8)v24 & 7) + 3) >= v26);
          if ( (_BYTE)v27 )
            __asan_report_store4(v24, p_up_type, v24, v27);
          *v25 = v23;
        }
        else
        {
          if ( up_type > 3 )
            goto LABEL_58;
          if ( up_type == 1 )
          {
            v10 = (unsigned __int64)std::vector<unsigned int>::operator[](progress_vec, idx);
            if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) != 0
              && (char)((v10 & 7) + 3) >= *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
            {
              v10 = __asan_report_load4(v10);
            }
            p_up_type = (uint32_t *)*(unsigned int *)v10;
            if ( *(_BYTE *)(((unsigned __int64)&__closure->__delta >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)__closure + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&__closure->__delta >> 3)
                                                                       + 0x7FFF8000) )
            {
              v10 = __asan_report_load4(&__closure->__delta);
            }
            *(_DWORD *)v10 = (_DWORD)p_up_type + __closure->__delta;
          }
          else if ( up_type == 2 )
          {
            if ( *(_BYTE *)(((unsigned __int64)&__closure->__delta >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)__closure + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&__closure->__delta >> 3)
                                                                       + 0x7FFF8000) )
            {
              __asan_report_load4(&__closure->__delta);
            }
            delta = __closure->__delta;
            p_up_type = (uint32_t *)idx;
            v13 = std::vector<unsigned int>::operator[](progress_vec, idx);
            v14 = v13;
            v15 = *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000);
            LOBYTE(p_up_type) = v15 != 0;
            v16 = (v15 != 0) & (unsigned __int8)((char)(((unsigned __int8)v13 & 7) + 3) >= v15);
            if ( (_BYTE)v16 )
              __asan_report_store4(v13, p_up_type, v13, v16);
            *v14 = delta;
          }
          else
          {
LABEL_58:
            common::milog::MiLogStream::create(
              &v37,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/quest/quest.cpp",
              "operator()",
              952);
            v28 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                    &v37,
                    (const char (*)[17])"Unknown up_type:");
            p_up_type = &__closure->__up_type;
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, &__closure->__up_type);
            common::milog::MiLogStream::~MiLogStream(&v37);
          }
        }
        if ( *(_BYTE *)(((unsigned __int64)&__closure->__is_updated >> 3) + 0x7FFF8000) )
          __asan_report_load8(&__closure->__is_updated);
        is_updated = __closure->__is_updated;
        v30 = *(_BYTE *)(((unsigned __int64)is_updated >> 3) + 0x7FFF8000);
        LOBYTE(p_up_type) = v30 != 0;
        v31 = (v30 != 0) & (unsigned __int8)(((__int64)__closure->__is_updated & 7) >= v30);
        if ( (_BYTE)v31 )
          __asan_report_store1(__closure->__is_updated, p_up_type, is_updated, v31);
        *is_updated = 1;
        continue;
      }
    }
  }
};

// Line 972: range 00000000143BD5E2-00000000143BD80F
bool __cdecl Quest::isFinishable(const Quest *const this)
{
  common::milog::MiLogStream *v1; // rax
  std::vector<unsigned int>::size_type v3; // rbx
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rbx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rbx
  std::vector<data::QuestContent> *p_finish_cond; // rcx
  unsigned __int64 val; // [rsp+18h] [rbp-48h] BYREF
  unsigned __int64 v11; // [rsp+20h] [rbp-40h] BYREF
  const data::QuestExcelConfig *quest_config_ptr; // [rsp+28h] [rbp-38h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-30h] BYREF

  quest_config_ptr = Quest::getQuestConfig(this);
  if ( quest_config_ptr )
  {
    v3 = std::vector<unsigned int>::size(&this->content_finish_progress_vec_);
    if ( v3 == std::vector<data::QuestContent>::size(&quest_config_ptr->finish_cond) )
    {
      p_finish_cond = &quest_config_ptr->finish_cond;
      if ( *(_BYTE *)(((unsigned __int64)&quest_config_ptr->finish_cond_comb >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&quest_config_ptr->finish_cond_comb >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&quest_config_ptr->finish_cond_comb);
      }
      return Quest::isCondSatisfy(
               quest_config_ptr->finish_cond_comb,
               p_finish_cond,
               &this->content_finish_progress_vec_);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/quest/quest.cpp",
        "isFinishable",
        982);
      v4 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
             &v13,
             (const char (*)[35])"quest content not match, quest_id:");
      v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->quest_id_);
      v6 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v5, (const char (*)[11])" bin size:");
      val = std::vector<unsigned int>::size(&this->content_finish_progress_vec_);
      v7 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v6, &val);
      v8 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v7, (const char (*)[14])" config size:");
      v11 = std::vector<data::QuestContent>::size(&quest_config_ptr->finish_cond);
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v8, &v11);
      common::milog::MiLogStream::~MiLogStream(&v13);
      return 0;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/quest/quest.cpp",
      "isFinishable",
      976);
    v1 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           &v13,
           (const char (*)[32])"getQuestConfig fails, quest_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, &this->quest_id_);
    common::milog::MiLogStream::~MiLogStream(&v13);
    return 0;
  }
};

// Line 992: range 00000000143BD810-00000000143BDA5B
bool __cdecl Quest::isFailable(const Quest *const this)
{
  common::milog::MiLogStream *v1; // rax
  std::vector<unsigned int>::size_type v3; // rbx
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rbx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rbx
  std::vector<data::QuestContent> *p_fail_cond; // rcx
  unsigned __int64 val; // [rsp+18h] [rbp-48h] BYREF
  unsigned __int64 v11; // [rsp+20h] [rbp-40h] BYREF
  const data::QuestExcelConfig *quest_config_ptr; // [rsp+28h] [rbp-38h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-30h] BYREF

  quest_config_ptr = Quest::getQuestConfig(this);
  if ( quest_config_ptr )
  {
    if ( std::vector<unsigned int>::empty(&this->content_fail_progress_vec_) )
    {
      return 0;
    }
    else
    {
      v3 = std::vector<unsigned int>::size(&this->content_fail_progress_vec_);
      if ( v3 == std::vector<data::QuestContent>::size(&quest_config_ptr->fail_cond) )
      {
        p_fail_cond = &quest_config_ptr->fail_cond;
        if ( *(_BYTE *)(((unsigned __int64)&quest_config_ptr->fail_cond_comb >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&quest_config_ptr->fail_cond_comb >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&quest_config_ptr->fail_cond_comb);
        }
        return Quest::isCondSatisfy(quest_config_ptr->fail_cond_comb, p_fail_cond, &this->content_fail_progress_vec_);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v13,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/quest/quest.cpp",
          "isFailable",
          1008);
        v4 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
               &v13,
               (const char (*)[40])"quest fail content not match, quest_id:");
        v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->quest_id_);
        v6 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v5, (const char (*)[11])" bin size:");
        val = std::vector<unsigned int>::size(&this->content_fail_progress_vec_);
        v7 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v6, &val);
        v8 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v7, (const char (*)[14])" config size:");
        v11 = std::vector<data::QuestContent>::size(&quest_config_ptr->fail_cond);
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v8, &v11);
        common::milog::MiLogStream::~MiLogStream(&v13);
        return 0;
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/quest/quest.cpp",
      "isFailable",
      996);
    v1 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           &v13,
           (const char (*)[32])"getQuestConfig fails, quest_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, &this->quest_id_);
    common::milog::MiLogStream::~MiLogStream(&v13);
    return 0;
  }
};

// Line 1018: range 00000000143BDA5C-00000000143BDF42
bool __cdecl Quest::isCondSatisfy(
        data::LogicType comb,
        const std::vector<data::QuestContent> *quest_content_vec,
        const std::vector<unsigned int> *progress_vec)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::vector<data::QuestContent>::size_type v6; // r14
  common::milog::MiLogStream *v7; // r12
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r12
  bool v10; // r14
  std::vector<bool>::size_type v11; // rax
  std::vector<unsigned int>::const_reference v12; // rax
  _DWORD *v13; // rdx
  std::vector<unsigned int>::const_reference v14; // rax
  _DWORD *v15; // rdx
  bool result; // al
  uint32_t idx; // [rsp+20h] [rbp-100h]
  int32_t count; // [rsp+24h] [rbp-FCh]
  unsigned __int64 val; // [rsp+28h] [rbp-F8h] BYREF
  unsigned __int64 v21; // [rsp+30h] [rbp-F0h] BYREF
  const data::QuestContent *quest_content; // [rsp+38h] [rbp-E8h]
  std::_Bit_reference v23; // [rsp+40h] [rbp-E0h] BYREF
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
  *(_QWORD *)(v3 + 8) = "1 48 40 18 is_finish_vec:1026";
  *(_QWORD *)(v3 + 16) = Quest::isCondSatisfy;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  v6 = std::vector<data::QuestContent>::size(quest_content_vec);
  if ( v6 != std::vector<unsigned int>::size(progress_vec) )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/quest/quest.cpp",
      "isCondSatisfy",
      1021);
    v7 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v24,
           (const char (*)[34])"quest content not match bin size:");
    val = std::vector<unsigned int>::size(progress_vec);
    v8 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v7, &val);
    v9 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v8, (const char (*)[14])" config size:");
    v21 = std::vector<data::QuestContent>::size(quest_content_vec);
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v9, &v21);
    common::milog::MiLogStream::~MiLogStream(&v24);
    v10 = 0;
    goto LABEL_22;
  }
  std::vector<bool>::vector((std::vector<bool> *const)(v3 + 48));
  v11 = std::vector<data::QuestContent>::size(quest_content_vec);
  std::vector<bool>::resize((std::vector<bool> *const)(v3 + 48), v11, 0);
  for ( idx = 0; idx < std::vector<data::QuestContent>::size(quest_content_vec); ++idx )
  {
    quest_content = std::vector<data::QuestContent>::operator[](quest_content_vec, idx);
    if ( *(_BYTE *)(((unsigned __int64)&quest_content->count >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&quest_content->count >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&quest_content->count);
    }
    count = quest_content->count;
    if ( count <= 0 )
    {
      v14 = std::vector<unsigned int>::operator[](progress_vec, idx);
      v15 = v14;
      if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v14);
      }
      if ( *v15 )
      {
LABEL_14:
        v23 = std::vector<bool>::operator[]((std::vector<bool> *const)(v3 + 48), idx);
        std::_Bit_reference::operator=(&v23, 1);
        continue;
      }
    }
    else
    {
      v12 = std::vector<unsigned int>::operator[](progress_vec, idx);
      v13 = v12;
      if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v12);
      }
      if ( *v13 >= (unsigned int)count )
        goto LABEL_14;
    }
    v23 = std::vector<bool>::operator[]((std::vector<bool> *const)(v3 + 48), idx);
    std::_Bit_reference::operator=(&v23, 0);
  }
  v10 = CommonMiscs::evaluateLogicComb(comb, (const std::vector<bool> *)(v3 + 48));
  std::vector<bool>::~vector((std::vector<bool> *const)(v3 + 48));
LABEL_22:
  result = v10;
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

// Line 1056: range 00000000143BDF44-00000000143BDFF4
void __cdecl Quest::checkAndUpdateState(Quest *const this, bool is_notify)
{
  if ( *(char *)(((unsigned __int64)&this->gm_force_finish_flag_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->gm_force_finish_flag_);
  if ( this->gm_force_finish_flag_ || Quest::isFinishable(this) )
  {
    Quest::finish(this, is_notify);
  }
  else if ( Quest::isFailable(this) )
  {
    Quest::fail(this, is_notify);
  }
};

// Line 1074: range 00000000143BDFF6-00000000143C1112
__int64 __fastcall Quest::isParamMatch(
        Quest *const this,
        const data::QuestContent *quest_content,
        uint32_t param1,
        uint32_t param2,
        uint32_t param3,
        const std::string *param_str)
{
  unsigned int v6; // r12d
  unsigned __int64 v7; // r14
  __int64 v8; // rax
  _DWORD *v9; // r13
  Player *v11; // rax
  PlayerQuestComp *v12; // rcx
  Player *v13; // rax
  PlayerQuestComp *v14; // rax
  common::milog::MiLogStream *v15; // rax
  __gnu_cxx::__alloc_traits<std::allocator<int>,int>::value_type *v16; // rax
  int32_t *v17; // rdx
  __gnu_cxx::__alloc_traits<std::allocator<int>,int>::value_type *v18; // rax
  int32_t *v19; // rdx
  ParentQuest *v20; // rax
  unsigned int v21; // eax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  uint32_t *v24; // rax
  uint32_t *v25; // rdx
  uint32_t *v26; // rax
  uint32_t *v27; // rdx
  common::milog::MiLogStream *v28; // rax
  Player *v29; // rax
  PlayerQuestComp *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  uint32_t *v37; // rax
  uint32_t *v38; // rdx
  uint32_t *v39; // rax
  uint32_t *v40; // rdx
  common::milog::MiLogStream *v41; // rax
  Player *v42; // rax
  PlayerQuestComp *v43; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  unsigned int v49; // eax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v50; // rax
  bool v51; // r12
  std::vector<int>::const_reference v52; // rax
  _DWORD *v53; // rdx
  std::vector<int>::const_reference v54; // rax
  _DWORD *v55; // rdx
  char v56; // al
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v57; // rax
  bool v58; // r12
  std::vector<int>::const_reference v59; // rax
  _DWORD *v60; // rdx
  std::vector<int>::const_reference v61; // rax
  _DWORD *v62; // rdx
  char v63; // al
  std::vector<int>::const_reference v64; // rax
  _DWORD *v65; // rdx
  uint32_t *v66; // rax
  uint32_t *v67; // rdx
  uint32_t *v68; // rax
  uint32_t *v69; // rdx
  Player *v70; // rax
  PlayerQuestComp *QuestComp; // rcx
  std::vector<int>::const_reference v72; // rax
  _DWORD *v73; // rdx
  uint32_t *v74; // rax
  uint32_t *v75; // rdx
  Player *v76; // rax
  PlayerTalkComp *TalkComp; // rax
  unsigned int v78; // eax
  std::vector<int>::const_reference v79; // rax
  _DWORD *v80; // rdx
  unsigned int v81; // eax
  std::vector<int>::const_reference v82; // rax
  _DWORD *v83; // rdx
  std::vector<int>::const_reference v84; // rax
  _DWORD *v85; // rdx
  std::vector<int>::const_reference v86; // rax
  _DWORD *v87; // rdx
  std::vector<int>::const_reference v88; // rax
  _DWORD *v89; // rdx
  unsigned int v90; // eax
  std::vector<int>::const_reference v91; // rax
  _DWORD *v92; // rdx
  std::vector<int>::const_reference v93; // rax
  _DWORD *v94; // rdx
  std::vector<int>::const_reference v95; // rax
  _DWORD *v96; // rdx
  std::vector<int>::const_reference v97; // rax
  _DWORD *v98; // rdx
  int v99; // r15d
  Player *v100; // rax
  std::pair<unsigned int const,unsigned int> *v101; // rax
  const int **v102; // rdx
  common::milog::MiLogStream *v103; // rax
  common::milog::MiLogStream *v104; // rax
  common::milog::MiLogStream *v105; // rax
  common::milog::MiLogStream *v106; // r15
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v107; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v108; // rax
  std::vector<int>::const_reference v109; // rax
  _DWORD *v110; // rdx
  std::vector<int>::const_reference v112; // rax
  _DWORD *v113; // rdx
  bool v114; // al
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v115; // rax
  bool v116; // r12
  std::vector<int>::const_reference v117; // rax
  _DWORD *v118; // rdx
  __gnu_cxx::__normal_iterator<int const*,std::vector<int> >::reference v119; // rax
  _DWORD *v120; // rdx
  _BOOL4 v121; // r15d
  Player *v122; // rax
  PlayerWidgetComp *WidgetComp; // rax
  int *v124; // rax
  int *v125; // rdx
  int v126; // r15d
  __gnu_cxx::__normal_iterator<int const*,std::vector<int> >::reference v127; // rax
  _DWORD *v128; // rdx
  std::vector<int>::const_reference v129; // rax
  _DWORD *v130; // rdx
  std::vector<int>::const_reference v131; // rax
  _DWORD *v132; // rdx
  unsigned __int8 v133; // al
  std::vector<int>::const_reference v134; // rax
  _DWORD *v135; // rdx
  std::vector<int>::const_reference v136; // rax
  _DWORD *v137; // rdx
  std::vector<int>::const_reference v139; // rax
  _DWORD *v140; // rdx
  std::vector<int>::const_reference v141; // rax
  _DWORD *v142; // rdx
  char v143; // al
  Player *v145; // rax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v146; // rax
  std::vector<int>::const_reference v147; // rax
  _DWORD *v148; // rdx
  char v149; // r12
  Player *v150; // rax
  PlayerQuestComp *v151; // r15
  uint32_t *v152; // rax
  uint32_t *v153; // rdx
  uint32_t *v154; // rax
  uint32_t *v155; // rdx
  char v156; // r15
  std::vector<int>::const_reference v157; // rax
  _DWORD *v158; // rdx
  std::vector<int>::const_reference v159; // rax
  _DWORD *v160; // rdx
  char v161; // al
  std::vector<int>::const_reference v162; // rax
  _DWORD *v163; // rdx
  std::vector<int>::const_reference v164; // rax
  _DWORD *v165; // rdx
  std::vector<int>::const_reference v166; // rax
  _DWORD *v167; // rdx
  std::vector<int>::const_reference v168; // rax
  _DWORD *v169; // rdx
  std::vector<int>::const_reference v170; // rax
  _DWORD *v171; // rdx
  std::vector<int>::const_reference v172; // rax
  _DWORD *v173; // rdx
  std::vector<int>::const_reference v174; // rax
  _DWORD *v175; // rdx
  char v176; // al
  __int64 result; // rax
  uint32_t radius; // [rsp+14h] [rbp-25Ch]
  bool is_all_unlocked; // [rsp+4Ah] [rbp-226h]
  bool is_in_target_room; // [rsp+4Bh] [rbp-225h]
  bool is_furniture_fish; // [rsp+4Dh] [rbp-223h]
  bool city_match_0; // [rsp+4Eh] [rbp-222h]
  int idx; // [rsp+50h] [rbp-220h]
  uint32_t scene_id_1; // [rsp+54h] [rbp-21Ch]
  uint32_t material_id; // [rsp+5Ch] [rbp-214h]
  int capture_tag; // [rsp+64h] [rbp-20Ch]
  uint32_t target_parent_quest_id_0; // [rsp+70h] [rbp-200h]
  uint32_t key_0; // [rsp+74h] [rbp-1FCh]
  uint32_t time_var; // [rsp+78h] [rbp-1F8h]
  uint32_t now; // [rsp+7Ch] [rbp-1F4h]
  uint32_t time_offset_sec; // [rsp+80h] [rbp-1F0h]
  uint32_t target_parent_quest_id; // [rsp+84h] [rbp-1ECh]
  uint32_t key; // [rsp+88h] [rbp-1E8h]
  uint32_t bargain_id; // [rsp+8Ch] [rbp-1E4h]
  int32_t index; // [rsp+90h] [rbp-1E0h]
  int32_t value; // [rsp+94h] [rbp-1DCh]
  int32_t quest_var; // [rsp+98h] [rbp-1D8h]
  uint32_t scene_id_0; // [rsp+9Ch] [rbp-1D4h]
  uint32_t scene_id; // [rsp+A8h] [rbp-1C8h]
  uint32_t parent_quest_id; // [rsp+B0h] [rbp-1C0h]
  uint32_t city_id_1; // [rsp+B4h] [rbp-1BCh]
  uint32_t target_city_id; // [rsp+C0h] [rbp-1B0h]
  uint32_t target_level; // [rsp+C4h] [rbp-1ACh]
  std::vector<int>::const_iterator __for_begin_1; // [rsp+C8h] [rbp-1A8h] BYREF
  std::vector<int>::const_iterator __for_end_0; // [rsp+D0h] [rbp-1A0h] BYREF
  std::vector<int>::const_iterator __for_begin; // [rsp+D8h] [rbp-198h] BYREF
  const std::vector<int> *__for_range_2; // [rsp+E0h] [rbp-190h]
  const std::vector<int> *__for_range_1; // [rsp+E8h] [rbp-188h]
  const std::vector<int> *__for_range_0; // [rsp+F0h] [rbp-180h]
  PlayerCookComp *cook_comp; // [rsp+F8h] [rbp-178h]
  const std::map<unsigned int,unsigned int> *__for_range; // [rsp+100h] [rbp-170h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *id; // [rsp+108h] [rbp-168h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *_; // [rsp+110h] [rbp-160h]
  std::vector<int>::const_iterator __for_end; // [rsp+118h] [rbp-158h] BYREF
  common::milog::MiLogStream v219; // [rsp+120h] [rbp-150h] BYREF
  char v220[304]; // [rsp+140h] [rbp-130h] BYREF

  v7 = (unsigned __int64)v220;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_2(256LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "7 48 4 14 day_delta:1168 64 4 12 now_day:1181 80 4 20 parent_quest_id:1087 96 4 11 param1:1073 1"
                        "12 16 15 player_ptr:1458 144 16 14 scene_ptr:1463 176 48 33 widget_monster_match_tag_set:1389";
  *(_QWORD *)(v7 + 16) = Quest::isParamMatch;
  v9 = (_DWORD *)(v7 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = -234556943;
  v9[536862722] = -234556924;
  v9[536862723] = 61956;
  v9[536862724] = 62194;
  v9[536862725] = 62194;
  v9[536862727] = -202116109;
  *(_DWORD *)(v7 + 96) = param1;
  if ( *(_BYTE *)(((unsigned __int64)&quest_content->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&quest_content->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&quest_content->type);
  }
  switch ( quest_content->type )
  {
    case QUEST_CONTENT_ENTER_MY_WORLD:
      v6 = 1;
      goto LABEL_371;
    case QUEST_CONTENT_WORKTOP_SELECT:
    case QUEST_CONTENT_SEAL_BATTLE_RESULT:
      if ( std::vector<int>::empty(&quest_content->param) )
        goto LABEL_138;
      v79 = std::vector<int>::operator[](&quest_content->param, 0LL);
      v80 = v79;
      if ( *(_BYTE *)(((unsigned __int64)v79 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v79 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v79 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v79);
      }
      if ( *v80 == *(_DWORD *)(v7 + 96) && std::operator==<char>(&quest_content->param_str, param_str) )
        v6 = 1;
      else
LABEL_138:
        v6 = 0;
      goto LABEL_371;
    case QUEST_CONTENT_GAME_TIME_TICK:
      LOBYTE(v49) = Quest::isGameTimeTickParamMatch(this, quest_content, *(_DWORD *)(v7 + 96), param2);
      v6 = v49;
      goto LABEL_371;
    case QUEST_CONTENT_LUA_NOTIFY:
      LOBYTE(v81) = std::operator==<char>(&quest_content->param_str, param_str);
      v6 = v81;
      goto LABEL_371;
    case QUEST_CONTENT_COMPLETE_ANY_TALK:
    case QUEST_CONTENT_OBTAIN_VARIOUS_ITEM:
    case QUEST_CONTENT_ENTER_MY_HOME_WORLD:
      LOBYTE(v90) = Quest::isParamInContentParamVec(this, quest_content, *(_DWORD *)(v7 + 96));
      v6 = v90;
      goto LABEL_371;
    case QUEST_CONTENT_UNLOCK_TRANS_POINT:
    case QUEST_CONTENT_UNLOCK_AREA:
    case QUEST_CONTENT_FINISH_TOWER_LEVEL:
    case QUEST_CONTENT_MAIN_COOP_ENTER_SAVE_POINT:
      if ( std::vector<int>::size(&quest_content->param) <= 1 )
        goto LABEL_157;
      v86 = std::vector<int>::operator[](&quest_content->param, 0LL);
      v87 = v86;
      if ( *(_BYTE *)(((unsigned __int64)v86 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v86 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v86 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v86);
      }
      if ( *v87 != *(_DWORD *)(v7 + 96) )
        goto LABEL_157;
      v88 = std::vector<int>::operator[](&quest_content->param, 1uLL);
      v89 = v88;
      if ( *(_BYTE *)(((unsigned __int64)v88 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v88 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v88 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v88);
      }
      if ( param2 == *v89 )
        v6 = 1;
      else
LABEL_157:
        v6 = 0;
      goto LABEL_371;
    case QUEST_CONTENT_CITY_LEVEL_UP:
      if ( std::vector<int>::size(&quest_content->param) > 1 )
      {
        city_id_1 = *(_DWORD *)(v7 + 96);
        v66 = (uint32_t *)std::vector<int>::operator[](&quest_content->param, 0LL);
        v67 = v66;
        if ( *(_BYTE *)(((unsigned __int64)v66 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v66 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v66 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v66);
        }
        target_city_id = *v67;
        v68 = (uint32_t *)std::vector<int>::operator[](&quest_content->param, 1uLL);
        v69 = v68;
        if ( *(_BYTE *)(((unsigned __int64)v68 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v68 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v68 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v68);
        }
        target_level = *v69;
        v6 = city_id_1 == target_city_id && param2 < target_level && param3 >= target_level;
      }
      else
      {
        v6 = 0;
      }
      goto LABEL_371;
    case QUEST_CONTENT_PATTERN_GROUP_CLEAR_MONSTER:
      Quest::getOwner((const Quest *const)(v7 + 144));
      if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v7 + 144), 0LL) )
      {
        v6 = 0;
      }
      else
      {
        v70 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 144));
        QuestComp = Player::getQuestComp(v70);
        if ( *(_BYTE *)(((unsigned __int64)&this->quest_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->quest_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->quest_id_);
        }
        parent_quest_id = PlayerQuestComp::findParentQuestId(QuestComp, this->quest_id_);
        if ( std::vector<int>::empty(&quest_content->param) )
          goto LABEL_125;
        v72 = std::vector<int>::operator[](&quest_content->param, 0LL);
        v73 = v72;
        if ( *(_BYTE *)(((unsigned __int64)v72 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v72 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v72 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v72);
        }
        if ( *v73 == *(_DWORD *)(v7 + 96) && parent_quest_id == param2 )
          v6 = 1;
        else
LABEL_125:
          v6 = 0;
      }
      goto LABEL_131;
    case QUEST_CONTENT_ITEM_LESS_THAN:
      if ( std::vector<int>::size(&quest_content->param) <= 1 )
        goto LABEL_148;
      v82 = std::vector<int>::operator[](&quest_content->param, 0LL);
      v83 = v82;
      if ( *(_BYTE *)(((unsigned __int64)v82 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v82 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v82 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v82);
      }
      if ( *v83 != *(_DWORD *)(v7 + 96) )
        goto LABEL_148;
      v84 = std::vector<int>::operator[](&quest_content->param, 1uLL);
      v85 = v84;
      if ( *(_BYTE *)(((unsigned __int64)v84 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v84 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v84 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v84);
      }
      if ( param2 < *v85 )
        v6 = 1;
      else
LABEL_148:
        v6 = 0;
      goto LABEL_371;
    case QUEST_CONTENT_OPEN_CHEST_WITH_GADGET_ID:
      scene_id = *(_DWORD *)(v7 + 96);
      *(_DWORD *)(v7 + 80) = param3;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v7 + 144));
      v50 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 144));
      v51 = scene_id != TxtConfigMgr::getDefaultWorldMainSceneId(&v50->design_config.txt_config_mgr);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v7 + 144));
      if ( v51 )
      {
        v6 = 0;
      }
      else if ( std::vector<int>::empty(&quest_content->param) )
      {
        v6 = 0;
      }
      else
      {
        v52 = std::vector<int>::operator[](&quest_content->param, 0LL);
        v53 = v52;
        if ( *(_BYTE *)(((unsigned __int64)v52 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v52 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v52 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v52);
        }
        if ( !*v53 )
          goto LABEL_80;
        v54 = std::vector<int>::operator[](&quest_content->param, 0LL);
        v55 = v54;
        if ( *(_BYTE *)(((unsigned __int64)v54 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v54 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v54 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v54);
        }
        if ( param2 != *v55 )
          v56 = 0;
        else
LABEL_80:
          v56 = 1;
        v6 = v56
          && common::tools::MiscUtils::isContains<std::map<unsigned int,unsigned int> const,unsigned int>(
               &quest_content->param_map,
               (const unsigned int *)(v7 + 80));
      }
      goto LABEL_371;
    case QUEST_CONTENT_UNLOCK_TRANS_POINT_WITH_TYPE:
      scene_id_0 = *(_DWORD *)(v7 + 96);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v7 + 144));
      v57 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 144));
      v58 = scene_id_0 != TxtConfigMgr::getDefaultWorldMainSceneId(&v57->design_config.txt_config_mgr);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v7 + 144));
      if ( v58 )
      {
        v6 = 0;
      }
      else if ( std::vector<int>::size(&quest_content->param) > 1 )
      {
        v59 = std::vector<int>::operator[](&quest_content->param, 1uLL);
        v60 = v59;
        if ( *(_BYTE *)(((unsigned __int64)v59 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v59 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v59 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v59);
        }
        if ( !*v60 )
          goto LABEL_96;
        v61 = std::vector<int>::operator[](&quest_content->param, 1uLL);
        v62 = v61;
        if ( *(_BYTE *)(((unsigned __int64)v61 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v61 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v61 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v61);
        }
        if ( param2 != *v62 )
          v63 = 0;
        else
LABEL_96:
          v63 = 1;
        city_match_0 = v63;
        v64 = std::vector<int>::operator[](&quest_content->param, 0LL);
        v65 = v64;
        if ( *(_BYTE *)(((unsigned __int64)v64 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v64 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v64 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v64);
        }
        v6 = param3 == *v65 && city_match_0;
      }
      else
      {
        v6 = 0;
      }
      goto LABEL_371;
    case QUEST_CONTENT_FINISH_DAILY_DUNGEON:
    case QUEST_CONTENT_FINISH_WEEKLY_DUNGEON:
    case QUEST_CONTENT_ANY_MANUAL_TRANSPORT:
      v6 = 1;
      goto LABEL_371;
    case QUEST_CONTENT_QUEST_VAR_EQUAL:
    case QUEST_CONTENT_QUEST_VAR_GREATER:
    case QUEST_CONTENT_QUEST_VAR_LESS:
      Quest::getOwner((const Quest *const)(v7 + 112));
      if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v7 + 112), 0LL)
        || std::vector<int>::size(&quest_content->param) <= 1 )
      {
        v6 = 0;
      }
      else
      {
        v11 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 112));
        v12 = Player::getQuestComp(v11);
        if ( *(_BYTE *)(((unsigned __int64)&this->quest_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->quest_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->quest_id_);
        }
        *(_DWORD *)(v7 + 80) = PlayerQuestComp::findParentQuestId(v12, this->quest_id_);
        if ( *(_DWORD *)(v7 + 96) == *(_DWORD *)(v7 + 80) )
        {
          v13 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 112));
          v14 = Player::getQuestComp(v13);
          PlayerQuestComp::findParentQuest((const PlayerQuestComp *const)(v7 + 144), (__int64)v14, *(_DWORD *)(v7 + 80));
          if ( std::operator==<ParentQuest>((const std::shared_ptr<ParentQuest> *)(v7 + 144), 0LL) )
          {
            common::milog::MiLogStream::create(
              &v219,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/quest/quest.cpp",
              "isParamMatch",
              1093);
            v15 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                    &v219,
                    (const char (*)[43])"parent quest ptr is null,parent_quest_id: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v7 + 80));
            common::milog::MiLogStream::~MiLogStream(&v219);
            v6 = 0;
          }
          else
          {
            v16 = (__gnu_cxx::__alloc_traits<std::allocator<int>,int>::value_type *)std::vector<int>::operator[](
                                                                                      &quest_content->param,
                                                                                      0LL);
            v17 = v16;
            if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v16);
            }
            index = *v17;
            v18 = (__gnu_cxx::__alloc_traits<std::allocator<int>,int>::value_type *)std::vector<int>::operator[](
                                                                                      &quest_content->param,
                                                                                      1uLL);
            v19 = v18;
            if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v18);
            }
            value = *v19;
            v20 = std::__shared_ptr_access<ParentQuest,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ParentQuest,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 144));
            quest_var = ParentQuest::getQuestVar(v20, index);
            if ( *(_BYTE *)(((unsigned __int64)&quest_content->type >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&quest_content->type >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&quest_content->type);
            }
            if ( quest_content->type == QUEST_CONTENT_QUEST_VAR_EQUAL )
            {
              LOBYTE(v6) = quest_var == value;
            }
            else
            {
              if ( *(_BYTE *)(((unsigned __int64)&quest_content->type >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&quest_content->type >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&quest_content->type);
              }
              if ( quest_content->type == QUEST_CONTENT_QUEST_VAR_LESS )
              {
                LOBYTE(v6) = quest_var < value;
              }
              else
              {
                if ( *(_BYTE *)(((unsigned __int64)&quest_content->type >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&quest_content->type >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&quest_content->type);
                }
                if ( quest_content->type == QUEST_CONTENT_QUEST_VAR_GREATER )
                  LOBYTE(v6) = quest_var > value;
                else
                  v6 = 0;
              }
            }
          }
          std::shared_ptr<ParentQuest>::~shared_ptr((std::shared_ptr<ParentQuest> *const)(v7 + 144));
        }
        else
        {
          v6 = 0;
        }
      }
      goto LABEL_333;
    case QUEST_CONTENT_ITEM_LESS_THAN_BARGAIN:
      Quest::getOwner((const Quest *const)(v7 + 144));
      if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v7 + 144), 0LL) )
      {
        v6 = 0;
      }
      else
      {
        v74 = (uint32_t *)std::vector<int>::operator[](&quest_content->param, 0LL);
        v75 = v74;
        if ( *(_BYTE *)(((unsigned __int64)v74 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v74 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v74 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v74);
        }
        bargain_id = *v75;
        v76 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 144));
        TalkComp = Player::getTalkComp(v76);
        LOBYTE(v78) = PlayerTalkComp::isPlayerItemLessThanBargainLimit(TalkComp, bargain_id);
        v6 = v78;
      }
LABEL_131:
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v7 + 144));
      goto LABEL_371;
    case QUEST_CONTENT_TIME_VAR_GT_EQ:
      Quest::getOwner((const Quest *const)(v7 + 144));
      if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v7 + 144), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v219,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/quest/quest.cpp",
          "isParamMatch",
          1124);
        v22 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                &v219,
                (const char (*)[31])"player ptr is null, quest_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &this->quest_id_);
        common::milog::MiLogStream::~MiLogStream(&v219);
        v6 = 0;
      }
      else if ( std::vector<int>::size(&quest_content->param) > 1 )
      {
        v24 = (uint32_t *)std::vector<int>::operator[](&quest_content->param, 0LL);
        v25 = v24;
        if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v24 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v24);
        }
        target_parent_quest_id = *v25;
        v26 = (uint32_t *)std::vector<int>::operator[](&quest_content->param, 1uLL);
        v27 = v26;
        if ( *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v26 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v26);
        }
        key = *v27;
        *(_DWORD *)(v7 + 48) = 0;
        if ( common::tools::StringUtils::strToNum<unsigned int>(&quest_content->param_str, (unsigned int *)(v7 + 48), 1) )
        {
          common::milog::MiLogStream::create(
            &v219,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/quest/quest.cpp",
            "isParamMatch",
            1137);
          v28 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                  &v219,
                  (const char (*)[33])"param_str is not int, quest_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, &this->quest_id_);
          common::milog::MiLogStream::~MiLogStream(&v219);
          v6 = 1;
        }
        else
        {
          v29 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 144));
          v30 = Player::getQuestComp(v29);
          *(_DWORD *)(v7 + 64) = PlayerQuestComp::getQuestTimeVar(v30, target_parent_quest_id, key);
          if ( *(_DWORD *)(v7 + 64) )
          {
            *(_DWORD *)(v7 + 80) = common::tools::TimeUtils::getNow();
            if ( *(_DWORD *)(v7 + 80) >= *(_DWORD *)(v7 + 64) )
            {
              LOBYTE(v6) = *(_DWORD *)(v7 + 80) - *(_DWORD *)(v7 + 64) >= (unsigned int)(3600 * *(_DWORD *)(v7 + 48));
            }
            else
            {
              common::milog::MiLogStream::create(
                &v219,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/player/quest/quest.cpp",
                "isParamMatch",
                1148);
              v31 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                      &v219,
                      (const char (*)[21])off_253301A0);
              v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v31,
                      (const unsigned int *)(v7 + 80));
              v33 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                      v32,
                      (const char (*)[12])", time_var:");
              v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v33,
                      (const unsigned int *)(v7 + 64));
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, &this->quest_id_);
              common::milog::MiLogStream::~MiLogStream(&v219);
              v6 = 0;
            }
          }
          else
          {
            v6 = 0;
          }
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v219,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/quest/quest.cpp",
          "isParamMatch",
          1129);
        v23 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                &v219,
                (const char (*)[35])"param size less than 2, quest_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &this->quest_id_);
        common::milog::MiLogStream::~MiLogStream(&v219);
        v6 = 0;
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v7 + 144));
      goto LABEL_371;
    case QUEST_CONTENT_TIME_VAR_PASS_DAY:
      Quest::getOwner((const Quest *const)(v7 + 112));
      if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v7 + 112), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v219,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/quest/quest.cpp",
          "isParamMatch",
          1158);
        v35 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                &v219,
                (const char (*)[31])"player ptr is null, quest_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, &this->quest_id_);
        common::milog::MiLogStream::~MiLogStream(&v219);
        v6 = 0;
      }
      else if ( std::vector<int>::size(&quest_content->param) > 1 )
      {
        v37 = (uint32_t *)std::vector<int>::operator[](&quest_content->param, 0LL);
        v38 = v37;
        if ( *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v37 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v37);
        }
        target_parent_quest_id_0 = *v38;
        v39 = (uint32_t *)std::vector<int>::operator[](&quest_content->param, 1uLL);
        v40 = v39;
        if ( *(_BYTE *)(((unsigned __int64)v39 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v39 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v39 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v39);
        }
        key_0 = *v40;
        *(_DWORD *)(v7 + 48) = 0;
        if ( common::tools::StringUtils::strToNum<unsigned int>(&quest_content->param_str, (unsigned int *)(v7 + 48), 1) )
        {
          common::milog::MiLogStream::create(
            &v219,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/quest/quest.cpp",
            "isParamMatch",
            1171);
          v41 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                  &v219,
                  (const char (*)[33])"param_str is not int, quest_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v41, &this->quest_id_);
          common::milog::MiLogStream::~MiLogStream(&v219);
          v6 = 1;
        }
        else
        {
          v42 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 112));
          v43 = Player::getQuestComp(v42);
          time_var = PlayerQuestComp::getQuestTimeVar(v43, target_parent_quest_id_0, key_0);
          if ( time_var )
          {
            now = common::tools::TimeUtils::getNow();
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)(v7 + 144));
            v44 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 144));
            time_offset_sec = ConstValueExcelConfigMgr::getTimeOffsetSec(&v44->design_config.txt_config_mgr.const_value_config_mgr);
            std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v7 + 144));
            *(_DWORD *)(v7 + 64) = common::tools::TimeUtils::getTimeDay(now, time_offset_sec);
            *(_DWORD *)(v7 + 80) = common::tools::TimeUtils::getTimeDay(time_var, time_offset_sec);
            if ( *(_DWORD *)(v7 + 64) >= *(_DWORD *)(v7 + 80) )
            {
              LOBYTE(v6) = (unsigned int)(*(_DWORD *)(v7 + 64) - *(_DWORD *)(v7 + 80)) >= *(_DWORD *)(v7 + 48);
            }
            else
            {
              common::milog::MiLogStream::create(
                &v219,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/player/quest/quest.cpp",
                "isParamMatch",
                1185);
              v45 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                      &v219,
                      (const char (*)[28])"now_day < var_day. now_day:");
              v46 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v45,
                      (const unsigned int *)(v7 + 64));
              v47 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                      v46,
                      (const char (*)[11])", var_day:");
              v48 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v47,
                      (const unsigned int *)(v7 + 80));
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v48, &this->quest_id_);
              common::milog::MiLogStream::~MiLogStream(&v219);
              v6 = 0;
            }
          }
          else
          {
            v6 = 0;
          }
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v219,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/quest/quest.cpp",
          "isParamMatch",
          1163);
        v36 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                &v219,
                (const char (*)[35])"param size less than 2, quest_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, &this->quest_id_);
        common::milog::MiLogStream::~MiLogStream(&v219);
        v6 = 0;
      }
      goto LABEL_333;
    case QUEST_CONTENT_QUEST_STATE_EQUAL:
      if ( std::vector<int>::size(&quest_content->param) <= 1 )
        goto LABEL_169;
      v91 = std::vector<int>::operator[](&quest_content->param, 0LL);
      v92 = v91;
      if ( *(_BYTE *)(((unsigned __int64)v91 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v91 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v91 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v91);
      }
      if ( *v92 != *(_DWORD *)(v7 + 96) )
        goto LABEL_169;
      v93 = std::vector<int>::operator[](&quest_content->param, 1uLL);
      v94 = v93;
      if ( *(_BYTE *)(((unsigned __int64)v93 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v93 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v93 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v93);
      }
      if ( param2 == *v94 )
        v6 = 1;
      else
LABEL_169:
        v6 = 0;
      goto LABEL_371;
    case QUEST_CONTENT_QUEST_STATE_NOT_EQUAL:
      if ( std::vector<int>::size(&quest_content->param) <= 1 )
        goto LABEL_178;
      v95 = std::vector<int>::operator[](&quest_content->param, 0LL);
      v96 = v95;
      if ( *(_BYTE *)(((unsigned __int64)v95 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v95 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v95 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v95);
      }
      if ( *v96 != *(_DWORD *)(v7 + 96) )
        goto LABEL_178;
      v97 = std::vector<int>::operator[](&quest_content->param, 1uLL);
      v98 = v97;
      if ( *(_BYTE *)(((unsigned __int64)v97 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v97 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v97 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v97);
      }
      if ( param2 == *v98 )
LABEL_178:
        v6 = 0;
      else
        v6 = 1;
      goto LABEL_371;
    case QUEST_CONTENT_UNLOCKED_RECIPE:
      Quest::getOwner((const Quest *const)(v7 + 144));
      if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v7 + 144), 0LL) )
      {
        v6 = 0;
        v99 = 0;
        goto LABEL_194;
      }
      v100 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 144));
      cook_comp = Player::getCookComp(v100);
      if ( !common::tools::MiscUtils::isContains<std::map<unsigned int,unsigned int> const,unsigned int>(
              &quest_content->param_map,
              (const unsigned int *)(v7 + 96)) )
        goto LABEL_193;
      is_all_unlocked = 1;
      __for_range = &quest_content->param_map;
      __for_end_0._M_current = (const int *)std::map<unsigned int,unsigned int>::begin(&quest_content->param_map)._M_node;
      __for_begin._M_current = (const int *)std::map<unsigned int,unsigned int>::end(&quest_content->param_map)._M_node;
      while ( 2 )
      {
        if ( std::operator!=(
               (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_end_0,
               (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_begin) )
        {
          v101 = (std::pair<unsigned int const,unsigned int> *)std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_end_0);
          v102 = (const int **)v101;
          if ( ((unsigned __int8)v101 & 7) >= *(_BYTE *)(((unsigned __int64)v101 >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)v101 >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&v101->second + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)v101 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v101->second + 3) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load_n(v101, 8LL);
          }
          __for_end._M_current = *v102;
          id = std::get<0ul,unsigned int const,unsigned int>((std::pair<unsigned int const,unsigned int> *)&__for_end);
          _ = std::get<1ul,unsigned int const,unsigned int>((std::pair<unsigned int const,unsigned int> *)&__for_end);
          if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(id);
          }
          if ( PlayerCookComp::isRecipeUnlocked(cook_comp, *id) )
          {
            std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_end_0);
            continue;
          }
          is_all_unlocked = 0;
          common::milog::MiLogStream::create(
            &v219,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/quest/quest.cpp",
            "isParamMatch",
            1311);
          v103 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                   &v219,
                   (const char (*)[11])"quest_id: ");
          v104 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v103, &this->quest_id_);
          v105 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                   v104,
                   (const char (*)[21])" not unlock recipe: ");
          v106 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v105, id);
          v107 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 144));
          operator<<(v106, v107);
          common::milog::MiLogStream::~MiLogStream(&v219);
        }
        break;
      }
      if ( is_all_unlocked )
      {
        v6 = 1;
        v99 = 0;
      }
      else
      {
LABEL_193:
        v99 = 1;
      }
LABEL_194:
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v7 + 144));
      if ( !v99 )
        goto LABEL_371;
      goto LABEL_370;
    case QUEST_CONTENT_NOT_UNLOCKED_RECIPE:
      goto LABEL_370;
    case QUEST_CONTENT_FISHING_SUCC:
      if ( std::vector<int>::empty(&quest_content->param) )
      {
        v6 = 0;
      }
      else
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)(v7 + 144));
        v108 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 144));
        is_furniture_fish = FishExcelConfigMgr::isFurnitureFish(
                              &v108->design_config.txt_config_mgr.fish_config_mgr,
                              *(_DWORD *)(v7 + 96));
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v7 + 144));
        v109 = std::vector<int>::operator[](&quest_content->param, 0LL);
        v110 = v109;
        if ( *(_BYTE *)(((unsigned __int64)v109 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v109 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v109 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v109);
        }
        if ( *v110 == 1 && is_furniture_fish )
        {
          v6 = 0;
        }
        else
        {
          v112 = std::vector<int>::operator[](&quest_content->param, 0LL);
          v113 = v112;
          if ( *(_BYTE *)(((unsigned __int64)v112 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v112 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v112 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v112);
          }
          v114 = *v113 == 2 && !is_furniture_fish;
          v6 = !v114;
        }
      }
      goto LABEL_371;
    case QUEST_CONTENT_ENTER_ROGUE_DUNGEON:
      if ( std::vector<int>::empty(&quest_content->param) )
      {
        v6 = 0;
      }
      else
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)(v7 + 144));
        v115 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 144));
        v116 = !ActivityRogueExcelConfigMgr::isRoguelikeDungeon(
                  &v115->design_config.txt_config_mgr.activity_rogue_config_mgr,
                  *(_DWORD *)(v7 + 96));
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v7 + 144));
        if ( v116 )
        {
          v6 = 0;
        }
        else
        {
          v117 = std::vector<int>::operator[](&quest_content->param, 0LL);
          v118 = v117;
          if ( *(_BYTE *)(((unsigned __int64)v117 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v117 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v117 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v117);
          }
          v6 = param2 == *v118;
        }
      }
      goto LABEL_371;
    case QUEST_CONTENT_CAPTURE_SUCC:
      if ( std::vector<int>::empty(&quest_content->param) )
      {
        v6 = 1;
        goto LABEL_371;
      }
      __for_range_0 = &quest_content->param;
      __for_begin._M_current = std::vector<int>::begin(&quest_content->param)._M_current;
      __for_end._M_current = std::vector<int>::end(&quest_content->param)._M_current;
      while ( 2 )
      {
        if ( !__gnu_cxx::operator!=<int const*,std::vector<int>>(&__for_begin, &__for_end) )
          goto LABEL_370;
        v119 = __gnu_cxx::__normal_iterator<int const*,std::vector<int>>::operator*(&__for_begin);
        v120 = v119;
        if ( *(_BYTE *)(((unsigned __int64)v119 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v119 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v119 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v119);
        }
        if ( *v120 != *(_DWORD *)(v7 + 96) )
        {
          __gnu_cxx::__normal_iterator<int const*,std::vector<int>>::operator++(&__for_begin);
          continue;
        }
        break;
      }
      v6 = 1;
      goto LABEL_371;
    case QUEST_CONTENT_CAPTURE_USE_CAPTURETAG_LIST:
      if ( std::vector<int>::empty(&quest_content->param) )
      {
        v6 = 1;
        goto LABEL_371;
      }
      material_id = *(_DWORD *)(v7 + 96);
      Quest::getOwner((const Quest *const)(v7 + 144));
      if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v7 + 144), 0LL) )
      {
        v6 = 0;
        v121 = 0;
        goto LABEL_242;
      }
      v122 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 144));
      WidgetComp = Player::getWidgetComp(v122);
      PlayerWidgetComp::getWidgetCaptureMonsterMatchTagsSet(
        (std::set<unsigned int> *)(v7 + 176),
        WidgetComp,
        material_id,
        param2);
      __for_range_1 = &quest_content->param;
      __for_begin_1._M_current = std::vector<int>::begin(&quest_content->param)._M_current;
      __for_end_0._M_current = std::vector<int>::end(&quest_content->param)._M_current;
      while ( 2 )
      {
        if ( __gnu_cxx::operator!=<int const*,std::vector<int>>(&__for_begin_1, &__for_end_0) )
        {
          v124 = (int *)__gnu_cxx::__normal_iterator<int const*,std::vector<int>>::operator*(&__for_begin_1);
          v125 = v124;
          if ( *(_BYTE *)(((unsigned __int64)v124 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v124 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v124 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v124);
          }
          capture_tag = *v125;
          __for_end._M_current = (const int *)std::set<unsigned int>::end((const std::set<unsigned int> *const)(v7 + 176))._M_node;
          *(_DWORD *)(v7 + 80) = capture_tag;
          __for_begin._M_current = (const int *)std::set<unsigned int>::find(
                                                  (std::set<unsigned int> *const)(v7 + 176),
                                                  (const std::set<unsigned int>::key_type *)(v7 + 80))._M_node;
          if ( !std::operator!=(
                  (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_begin,
                  (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_end) )
          {
            __gnu_cxx::__normal_iterator<int const*,std::vector<int>>::operator++(&__for_begin_1);
            continue;
          }
          v6 = 1;
          v126 = 0;
        }
        else
        {
          v126 = 1;
        }
        break;
      }
      std::set<unsigned int>::~set((std::set<unsigned int> *const)(v7 + 176));
      v121 = v126 != 0;
LABEL_242:
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v7 + 144));
      if ( !v121 )
        goto LABEL_371;
      goto LABEL_370;
    case QUEST_CONTENT_CAPTURE_USE_MATERIAL_LIST:
      if ( std::vector<int>::empty(&quest_content->param) )
      {
        v6 = 1;
        goto LABEL_371;
      }
      __for_range_2 = &quest_content->param;
      __for_begin._M_current = std::vector<int>::begin(&quest_content->param)._M_current;
      __for_end._M_current = std::vector<int>::end(&quest_content->param)._M_current;
      while ( 2 )
      {
        if ( __gnu_cxx::operator!=<int const*,std::vector<int>>(&__for_begin, &__for_end) )
        {
          v127 = __gnu_cxx::__normal_iterator<int const*,std::vector<int>>::operator*(&__for_begin);
          v128 = v127;
          if ( *(_BYTE *)(((unsigned __int64)v127 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v127 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v127 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v127);
          }
          if ( *v128 != *(_DWORD *)(v7 + 96) )
          {
            __gnu_cxx::__normal_iterator<int const*,std::vector<int>>::operator++(&__for_begin);
            continue;
          }
          v6 = 1;
        }
        else
        {
LABEL_370:
          v6 = 0;
        }
        break;
      }
      goto LABEL_371;
    case QUEST_CONTENT_ENTER_VEHICLE:
      if ( std::vector<int>::empty(&quest_content->param) )
      {
        v6 = 0;
      }
      else
      {
        v129 = std::vector<int>::operator[](&quest_content->param, 0LL);
        v130 = v129;
        if ( *(_BYTE *)(((unsigned __int64)v129 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v129 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v129 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v129);
        }
        if ( !*v130 )
          goto LABEL_261;
        v131 = std::vector<int>::operator[](&quest_content->param, 0LL);
        v132 = v131;
        if ( *(_BYTE *)(((unsigned __int64)v131 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v131 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v131 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v131);
        }
        if ( *v132 != *(_DWORD *)(v7 + 96) )
          v133 = 0;
        else
LABEL_261:
          v133 = 1;
        v6 = v133;
      }
      goto LABEL_371;
    case QUEST_CONTENT_SCENE_LEVEL_TAG_EQ:
      if ( std::vector<int>::empty(&quest_content->param) )
      {
        v6 = 0;
      }
      else
      {
        v134 = std::vector<int>::operator[](&quest_content->param, 0LL);
        v135 = v134;
        if ( *(_BYTE *)(((unsigned __int64)v134 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v134 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v134 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v134);
        }
        LOBYTE(v6) = *v135 == *(_DWORD *)(v7 + 96);
      }
      goto LABEL_371;
    case QUEST_CONTENT_LEAVE_SCENE:
      if ( std::vector<int>::empty(&quest_content->param) )
      {
        v6 = 0;
      }
      else
      {
        v136 = std::vector<int>::operator[](&quest_content->param, 0LL);
        v137 = v136;
        if ( *(_BYTE *)(((unsigned __int64)v136 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v136 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v136 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v136);
        }
        LOBYTE(v6) = *v137 != *(_DWORD *)(v7 + 96);
      }
      goto LABEL_371;
    case QUEST_CONTENT_LEAVE_SCENE_RANGE:
      if ( std::vector<int>::size(&quest_content->param) != 2
        || (unsigned __int8)std::string::empty(&quest_content->param_str) )
      {
        v6 = 0;
      }
      else
      {
        if ( !param3 )
          goto LABEL_289;
        v139 = std::vector<int>::operator[](&quest_content->param, 0LL);
        v140 = v139;
        if ( *(_BYTE *)(((unsigned __int64)v139 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v139 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v139 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v139);
        }
        if ( *v140 != *(_DWORD *)(v7 + 96) )
          goto LABEL_289;
        v141 = std::vector<int>::operator[](&quest_content->param, 1uLL);
        v142 = v141;
        if ( *(_BYTE *)(((unsigned __int64)v141 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v141 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v141 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v141);
        }
        if ( param2 >= *v142 && std::operator==<char>(&quest_content->param_str, param_str) )
          v143 = 1;
        else
LABEL_289:
          v143 = 0;
        v6 = v143 != 0;
      }
      goto LABEL_371;
    case QUEST_CONTENT_ACTIVITY_TRIGGER_UPDATE:
    case QUEST_CONTENT_GCG_LEVEL_WIN:
      if ( std::vector<int>::size(&quest_content->param) == 2 )
      {
        v162 = std::vector<int>::operator[](&quest_content->param, 0LL);
        v163 = v162;
        if ( *(_BYTE *)(((unsigned __int64)v162 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v162 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v162 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v162);
        }
        if ( *v163 != *(_DWORD *)(v7 + 96) )
          goto LABEL_343;
        v164 = std::vector<int>::operator[](&quest_content->param, 1uLL);
        v165 = v164;
        if ( *(_BYTE *)(((unsigned __int64)v164 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v164 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v164 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v164);
        }
        if ( param2 == *v165 )
          v6 = 1;
        else
LABEL_343:
          v6 = 0;
      }
      else
      {
        v6 = 0;
      }
      goto LABEL_371;
    case QUEST_CONTENT_GADGET_STATE_CHANGE:
      if ( std::vector<int>::size(&quest_content->param) == 3 )
      {
        v166 = std::vector<int>::operator[](&quest_content->param, 0LL);
        v167 = v166;
        if ( *(_BYTE *)(((unsigned __int64)v166 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v166 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v166 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v166);
        }
        if ( *v167 != *(_DWORD *)(v7 + 96) )
          goto LABEL_356;
        v168 = std::vector<int>::operator[](&quest_content->param, 1uLL);
        v169 = v168;
        if ( *(_BYTE *)(((unsigned __int64)v168 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v168 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v168 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v168);
        }
        if ( param2 != *v169 )
          goto LABEL_356;
        v170 = std::vector<int>::operator[](&quest_content->param, 2uLL);
        v171 = v170;
        if ( *(_BYTE *)(((unsigned __int64)v170 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v170 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v170 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v170);
        }
        if ( param3 == *v171 )
          v6 = 1;
        else
LABEL_356:
          v6 = 0;
      }
      else
      {
        v6 = 0;
      }
      goto LABEL_371;
    case QUEST_CONTENT_LEAVE_SCENE_RANGE_AND_ROOM:
      if ( std::vector<int>::size(&quest_content->param) <= 2
        || (unsigned __int8)std::string::empty(&quest_content->param_str) )
      {
        v6 = 0;
        goto LABEL_371;
      }
      Quest::getOwner((const Quest *const)(v7 + 112));
      if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v7 + 112), 0LL) )
      {
        v6 = 0;
        goto LABEL_333;
      }
      v145 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 112));
      Player::getSceneComp(v145);
      PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v7 + 144));
      if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v7 + 144)) )
      {
        v6 = 0;
        goto LABEL_332;
      }
      v146 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 144));
      scene_id_1 = Scene::getSceneId(v146);
      is_in_target_room = 0;
      idx = 2;
      break;
    case QUEST_CONTENT_AVATAR_RENAME_COMPLETE:
      if ( std::vector<int>::empty(&quest_content->param) )
      {
        v6 = 0;
      }
      else
      {
        v172 = std::vector<int>::operator[](&quest_content->param, 0LL);
        v173 = v172;
        if ( *(_BYTE *)(((unsigned __int64)v172 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v172 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v172 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v172);
        }
        LOBYTE(v6) = *v173 == *(_DWORD *)(v7 + 96);
      }
      goto LABEL_371;
    case QUEST_CONTENT_QUEST_GLOBAL_VAR_EQUAL:
    case QUEST_CONTENT_QUEST_GLOBAL_VAR_GREATER:
    case QUEST_CONTENT_QUEST_GLOBAL_VAR_LESS:
      LOBYTE(v21) = Quest::isQuestGlobalVarParamMatch(this, quest_content);
      v6 = v21;
      goto LABEL_371;
    default:
      if ( std::vector<int>::empty(&quest_content->param) )
        goto LABEL_367;
      v174 = std::vector<int>::operator[](&quest_content->param, 0LL);
      v175 = v174;
      if ( *(_BYTE *)(((unsigned __int64)v174 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v174 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v174 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v174);
      }
      if ( *v175 == *(_DWORD *)(v7 + 96) )
        v176 = 1;
      else
LABEL_367:
        v176 = 0;
      if ( !v176 )
        goto LABEL_370;
      v6 = 1;
      goto LABEL_371;
  }
  while ( idx < std::vector<int>::size(&quest_content->param) )
  {
    v147 = std::vector<int>::operator[](&quest_content->param, idx);
    v148 = v147;
    if ( *(_BYTE *)(((unsigned __int64)v147 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v147 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v147 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v147);
    }
    if ( scene_id_1 == *v148 )
    {
      is_in_target_room = 1;
      break;
    }
    ++idx;
  }
  if ( param2 )
  {
    if ( is_in_target_room || !param3 )
      goto LABEL_330;
    v157 = std::vector<int>::operator[](&quest_content->param, 0LL);
    v158 = v157;
    if ( *(_BYTE *)(((unsigned __int64)v157 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v157 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v157 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v157);
    }
    if ( *v158 != *(_DWORD *)(v7 + 96) )
      goto LABEL_330;
    v159 = std::vector<int>::operator[](&quest_content->param, 1uLL);
    v160 = v159;
    if ( *(_BYTE *)(((unsigned __int64)v159 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v159 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v159 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v159);
    }
    if ( param2 >= *v160 && std::operator==<char>(&quest_content->param_str, param_str) )
      v161 = 1;
    else
LABEL_330:
      v161 = 0;
    v6 = v161 != 0;
  }
  else
  {
    v149 = 0;
    if ( is_in_target_room )
      goto LABEL_316;
    v150 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 112));
    v151 = Player::getQuestComp(v150);
    std::string::basic_string(&v219, &quest_content->param_str);
    v149 = 1;
    v152 = (uint32_t *)std::vector<int>::operator[](&quest_content->param, 1uLL);
    v153 = v152;
    if ( *(_BYTE *)(((unsigned __int64)v152 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v152 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v152 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v152);
    }
    radius = *v153;
    v154 = (uint32_t *)std::vector<int>::operator[](&quest_content->param, 0LL);
    v155 = v154;
    if ( *(_BYTE *)(((unsigned __int64)v154 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v154 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v154 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v154);
    }
    if ( PlayerQuestComp::isNotInSceneRange(v151, *v155, radius, (std::string *)&v219) )
      v156 = 1;
    else
LABEL_316:
      v156 = 0;
    if ( v149 )
      std::string::~string(&v219);
    v6 = v156 != 0;
  }
LABEL_332:
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v7 + 144));
LABEL_333:
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v7 + 112));
LABEL_371:
  result = v6;
  if ( v220 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1534: range 00000000143C1114-00000000143C1438
bool __cdecl Quest::isQuestGlobalVarParamMatch(Quest *const this, const data::QuestContent *quest_content)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool v6; // r14
  uint32_t *v7; // rax
  uint32_t *v8; // rdx
  __gnu_cxx::__alloc_traits<std::allocator<int>,int>::value_type *v9; // rax
  int32_t *v10; // rdx
  Player *v11; // rax
  PlayerQuestComp *QuestComp; // rax
  bool result; // al
  uint32_t index; // [rsp+14h] [rbp-7Ch]
  int32_t value; // [rsp+18h] [rbp-78h]
  int32_t quest_var; // [rsp+1Ch] [rbp-74h]
  char v17[112]; // [rsp+20h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 15 player_ptr:1535";
  *(_QWORD *)(v2 + 16) = Quest::isQuestGlobalVarParamMatch;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  Quest::getOwner((const Quest *const)(v2 + 32));
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 32), 0LL)
    || std::vector<int>::size(&quest_content->param) <= 1 )
  {
    v6 = 0;
  }
  else
  {
    v7 = (uint32_t *)std::vector<int>::operator[](&quest_content->param, 0LL);
    v8 = v7;
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v7);
    }
    index = *v8;
    v9 = (__gnu_cxx::__alloc_traits<std::allocator<int>,int>::value_type *)std::vector<int>::operator[](
                                                                             &quest_content->param,
                                                                             1uLL);
    v10 = v9;
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v9);
    }
    value = *v10;
    v11 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    QuestComp = Player::getQuestComp(v11);
    quest_var = PlayerQuestComp::getGlobalVarValue(QuestComp, index);
    if ( *(_BYTE *)(((unsigned __int64)&quest_content->type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&quest_content->type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&quest_content->type);
    }
    if ( quest_content->type == QUEST_CONTENT_QUEST_GLOBAL_VAR_EQUAL )
    {
      v6 = quest_var == value;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&quest_content->type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&quest_content->type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&quest_content->type);
      }
      if ( quest_content->type == QUEST_CONTENT_QUEST_GLOBAL_VAR_LESS )
      {
        v6 = quest_var < value;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&quest_content->type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&quest_content->type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&quest_content->type);
        }
        v6 = quest_content->type == QUEST_CONTENT_QUEST_GLOBAL_VAR_GREATER && quest_var > value;
      }
    }
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 32));
  result = v6;
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

// Line 1560: range 00000000143C143A-00000000143C1CFF
_BOOL8 __fastcall Quest::isGameTimeTickParamMatch(
        Quest *const this,
        const data::QuestContent *quest_content,
        uint32_t cur_game_day,
        uint32_t cur_game_hour)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  _BOOL4 v7; // r14d
  std::vector<int>::const_reference v8; // rax
  _DWORD *v9; // rdx
  std::vector<unsigned int>::reference v10; // rax
  _DWORD *v11; // rdx
  std::vector<unsigned int>::reference v12; // rax
  _DWORD *v13; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  _BOOL8 result; // rax
  bool v35; // [rsp+17h] [rbp-199h]
  std::allocator<char> __a; // [rsp+3Fh] [rbp-171h] BYREF
  std::shared_ptr<Config> v39; // [rsp+40h] [rbp-170h] BYREF
  std::shared_ptr<Config> v40; // [rsp+50h] [rbp-160h] BYREF
  common::milog::MiLogStream v41; // [rsp+60h] [rbp-150h] BYREF
  char v42[304]; // [rsp+80h] [rbp-130h] BYREF

  v4 = (unsigned __int64)v42;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(256LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "10 48 4 19 game_day_count:1573 64 4 15 begin_hour:1574 80 4 13 end_hour:1575 96 4 21 game_day_se"
                        "conds:1577 112 4 22 game_hour_seconds:1578 128 4 19 start_game_day:1584 144 4 20 start_game_hour"
                        ":1585 160 4 17 cur_game_day:1559 176 4 18 cur_game_hour:1559 192 24 14 param_vec:1566";
  *(_QWORD *)(v4 + 16) = Quest::isGameTimeTickParamMatch;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -234556924;
  v6[536862723] = -234556924;
  v6[536862724] = -234556924;
  v6[536862725] = -234556924;
  v6[536862726] = -218103808;
  v6[536862727] = -202116109;
  *(_DWORD *)(v4 + 160) = cur_game_day;
  *(_DWORD *)(v4 + 176) = cur_game_hour;
  if ( std::vector<int>::empty(&quest_content->param) )
  {
    common::milog::MiLogStream::create(
      &v41,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/quest/quest.cpp",
      "isGameTimeTickParamMatch",
      1563);
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      &v41,
      (const char (*)[29])"quest_content.param is empty");
    common::milog::MiLogStream::~MiLogStream(&v41);
    v7 = 0;
  }
  else
  {
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v4 + 192));
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v41, ",", &__a);
    v35 = common::tools::StringUtils::splitToList<unsigned int>(
            &quest_content->param_str,
            (const std::string *)&v41,
            (std::vector<unsigned int> *)(v4 + 192),
            1)
       || std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v4 + 192)) != 2;
    std::string::~string(&v41);
    std::allocator<char>::~allocator(&__a);
    if ( v35 )
    {
      common::milog::MiLogStream::create(
        &v41,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/quest/quest.cpp",
        "isGameTimeTickParamMatch",
        1569);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(&v41, &quest_content->param_str);
      common::milog::MiLogStream::~MiLogStream(&v41);
      v7 = 0;
    }
    else
    {
      v8 = std::vector<int>::operator[](&quest_content->param, 0LL);
      v9 = v8;
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v8);
      }
      *(_DWORD *)(v4 + 48) = *v9;
      v10 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v4 + 192), 0LL);
      v11 = v10;
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v10);
      }
      *(_DWORD *)(v4 + 64) = *v11;
      v12 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v4 + 192), 1uLL);
      v13 = v12;
      if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v12);
      }
      *(_DWORD *)(v4 + 80) = *v13;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v39);
      v14 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v39);
      *(_DWORD *)(v4 + 96) = ConstValueExcelConfigMgr::getGameDaySeconds(&v14->design_config.txt_config_mgr.const_value_config_mgr);
      std::shared_ptr<Config>::~shared_ptr(&v39);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v40);
      v15 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v40);
      *(_DWORD *)(v4 + 112) = ConstValueExcelConfigMgr::getGameHourSeconds(&v15->design_config.txt_config_mgr.const_value_config_mgr);
      std::shared_ptr<Config>::~shared_ptr(&v40);
      if ( *(_DWORD *)(v4 + 96) && *(_DWORD *)(v4 + 112) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->start_game_time_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->start_game_time_ >> 3)
                                                              + 0x7FFF8000) )
        {
          __asan_report_load4(&this->start_game_time_);
        }
        *(_DWORD *)(v4 + 128) = this->start_game_time_ / *(_DWORD *)(v4 + 96);
        *(_DWORD *)(v4 + 144) = (this->start_game_time_ - *(_DWORD *)(v4 + 128) * *(_DWORD *)(v4 + 96))
                              / *(_DWORD *)(v4 + 112);
        common::milog::MiLogStream::create(
          &v41,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/quest/quest.cpp",
          "isGameTimeTickParamMatch",
          1586);
        v19 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                &v41,
                (const char (*)[15])" cur_game_day:");
        v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v19,
                (const unsigned int *)(v4 + 160));
        v21 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                v20,
                (const char (*)[17])", cur_game_hour:");
        v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v21,
                (const unsigned int *)(v4 + 176));
        v23 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                v22,
                (const char (*)[18])", start_game_day:");
        v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v23,
                (const unsigned int *)(v4 + 128));
        v25 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                v24,
                (const char (*)[19])", start_game_hour:");
        v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v25,
                (const unsigned int *)(v4 + 144));
        v27 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                v26,
                (const char (*)[18])", game_day_count:");
        v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v27,
                (const unsigned int *)(v4 + 48));
        v29 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v28, (const char (*)[14])", begin_hour:");
        v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v29,
                (const unsigned int *)(v4 + 64));
        v31 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v30, (const char (*)[12])", end_hour:");
        v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v31,
                (const unsigned int *)(v4 + 80));
        v33 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v32, (const char (*)[9])", quest:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, &this->quest_id_);
        common::milog::MiLogStream::~MiLogStream(&v41);
        if ( (unsigned int)(*(_DWORD *)(v4 + 48) + *(_DWORD *)(v4 + 128)) <= *(_DWORD *)(v4 + 160) )
        {
          if ( *(_DWORD *)(v4 + 64) >= *(_DWORD *)(v4 + 80) )
            v7 = (*(_DWORD *)(v4 + 176) >= *(_DWORD *)(v4 + 80)
               || !*(_DWORD *)(v4 + 48)
               || *(_DWORD *)(v4 + 48) + *(_DWORD *)(v4 + 128) != *(_DWORD *)(v4 + 160))
              && (*(_DWORD *)(v4 + 176) < *(_DWORD *)(v4 + 80) || *(_DWORD *)(v4 + 64) <= *(_DWORD *)(v4 + 176));
          else
            v7 = *(_DWORD *)(v4 + 64) <= *(_DWORD *)(v4 + 176) && *(_DWORD *)(v4 + 176) < *(_DWORD *)(v4 + 80);
        }
        else
        {
          v7 = 0;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v41,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/quest/quest.cpp",
          "isGameTimeTickParamMatch",
          1581);
        v16 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                &v41,
                (const char (*)[18])"game_day_seconds:");
        v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v16,
                (const unsigned int *)(v4 + 96));
        v18 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                v17,
                (const char (*)[20])" game_hour_seconds:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v4 + 112));
        common::milog::MiLogStream::~MiLogStream(&v41);
        v7 = 0;
      }
    }
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v4 + 192));
  }
  result = v7;
  if ( v42 == (char *)v4 )
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

// Line 1602: range 00000000143C1D00-00000000143C1DC4
bool __cdecl Quest::isParamInContentParamVec(
        Quest *const this,
        const data::QuestContent *quest_content,
        uint32_t param1)
{
  __gnu_cxx::__normal_iterator<int const*,std::vector<int> >::reference v3; // rax
  _DWORD *v4; // rdx
  std::vector<int>::const_iterator __for_begin; // [rsp+28h] [rbp-18h] BYREF
  std::vector<int>::const_iterator __for_end; // [rsp+30h] [rbp-10h] BYREF
  const std::vector<int> *__for_range; // [rsp+38h] [rbp-8h]

  __for_range = &quest_content->param;
  __for_begin._M_current = std::vector<int>::begin(&quest_content->param)._M_current;
  __for_end._M_current = std::vector<int>::end(&quest_content->param)._M_current;
  while ( __gnu_cxx::operator!=<int const*,std::vector<int>>(&__for_begin, &__for_end) )
  {
    v3 = __gnu_cxx::__normal_iterator<int const*,std::vector<int>>::operator*(&__for_begin);
    v4 = v3;
    if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v3);
    }
    if ( *v4 == param1 )
      return 1;
    __gnu_cxx::__normal_iterator<int const*,std::vector<int>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 1615: range 00000000143C1DC6-00000000143C20E7
int32_t __cdecl Quest::notifyQuest(Quest *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  common::milog::MiLogStream *v4; // rax
  int32_t v5; // r14d
  std::__shared_ptr_access<proto::QuestListUpdateNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  proto::Quest *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  Player *v9; // r14
  int32_t result; // eax
  std::shared_ptr<proto::QuestListUpdateNotify> __r; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v12; // [rsp+30h] [rbp-B0h] BYREF
  char v13[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 15 player_ptr:1616 64 16 15 notify_ptr:1623";
  *(_QWORD *)(v1 + 16) = Quest::notifyQuest;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  Quest::getOwner((const Quest *const)(v1 + 32));
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v1 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/quest/quest.cpp",
      "notifyQuest",
      1619);
    v4 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
           &v12,
           (const char (*)[27])"getOwner failed, quest_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->quest_id_);
    common::milog::MiLogStream::~MiLogStream(&v12);
    v5 = -1;
  }
  else
  {
    common::tools::perf::make_shared<proto::QuestListUpdateNotify>();
    v6 = std::__shared_ptr_access<proto::QuestListUpdateNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::QuestListUpdateNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    v7 = proto::QuestListUpdateNotify::add_quest_list(v6);
    if ( Quest::toClient(this, v7) )
    {
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/quest/quest.cpp",
        "notifyQuest",
        1627);
      v8 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
             &v12,
             (const char (*)[31])"getQuestProto fails, quest_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->quest_id_);
      common::milog::MiLogStream::~MiLogStream(&v12);
      v5 = -1;
    }
    else
    {
      v9 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      std::dynamic_pointer_cast<google::protobuf::Message const,proto::QuestListUpdateNotify>(&__r);
      v5 = Player::sendMessage(v9, (common::minet::ConstMessagePtr *)&__r, 0LL);
      std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
    }
    std::shared_ptr<proto::QuestListUpdateNotify>::~shared_ptr((std::shared_ptr<proto::QuestListUpdateNotify> *const)(v1 + 64));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 32));
  result = v5;
  if ( v13 == (char *)v1 )
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

// Line 1635: range 00000000143C20E8-00000000143C2563
int32_t __cdecl Quest::notifyQuestProgress(Quest *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  common::milog::MiLogStream *v4; // rax
  int32_t v5; // r14d
  std::__shared_ptr_access<proto::QuestProgressUpdateNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rcx
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v7; // rax
  unsigned int *v8; // rdx
  std::__shared_ptr_access<proto::QuestProgressUpdateNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v10; // rax
  unsigned int *v11; // rdx
  std::__shared_ptr_access<proto::QuestProgressUpdateNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  Player *v13; // r14
  int32_t result; // eax
  unsigned int p_0; // [rsp+18h] [rbp-E8h]
  unsigned int p; // [rsp+1Ch] [rbp-E4h]
  std::vector<unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-E0h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+28h] [rbp-D8h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+30h] [rbp-D0h]
  std::vector<unsigned int> *__for_range_0; // [rsp+38h] [rbp-C8h]
  std::shared_ptr<proto::QuestProgressUpdateNotify> __r; // [rsp+40h] [rbp-C0h] BYREF
  common::milog::MiLogStream v22; // [rsp+50h] [rbp-B0h] BYREF
  char v23[144]; // [rsp+70h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 15 player_ptr:1636 64 16 15 notify_ptr:1643";
  *(_QWORD *)(v1 + 16) = Quest::notifyQuestProgress;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  Quest::getOwner((const Quest *const)(v1 + 32));
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v1 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/quest/quest.cpp",
      "notifyQuestProgress",
      1639);
    v4 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
           &v22,
           (const char (*)[27])"getOwner failed, quest_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->quest_id_);
    common::milog::MiLogStream::~MiLogStream(&v22);
    v5 = -1;
  }
  else
  {
    common::tools::perf::make_shared<proto::QuestProgressUpdateNotify>();
    v6 = std::__shared_ptr_access<proto::QuestProgressUpdateNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::QuestProgressUpdateNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&this->quest_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->quest_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->quest_id_);
    }
    proto::QuestProgressUpdateNotify::set_quest_id(v6, this->quest_id_);
    __for_range = &this->content_finish_progress_vec_;
    __for_begin._M_current = std::vector<unsigned int>::begin(&this->content_finish_progress_vec_)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(&this->content_finish_progress_vec_)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v7 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
      v8 = v7;
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v7);
      }
      p = *v8;
      v9 = std::__shared_ptr_access<proto::QuestProgressUpdateNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::QuestProgressUpdateNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      proto::QuestProgressUpdateNotify::add_finish_progress_list(v9, p);
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    __for_range_0 = &this->content_fail_progress_vec_;
    __for_begin._M_current = std::vector<unsigned int>::begin(&this->content_fail_progress_vec_)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v10 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
      v11 = v10;
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v10);
      }
      p_0 = *v11;
      v12 = std::__shared_ptr_access<proto::QuestProgressUpdateNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::QuestProgressUpdateNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      proto::QuestProgressUpdateNotify::add_fail_progress_list(v12, p_0);
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    v13 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    std::dynamic_pointer_cast<google::protobuf::Message const,proto::QuestProgressUpdateNotify>(&__r);
    v5 = Player::sendMessage(v13, (common::minet::ConstMessagePtr *)&__r, 0LL);
    std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
    std::shared_ptr<proto::QuestProgressUpdateNotify>::~shared_ptr((std::shared_ptr<proto::QuestProgressUpdateNotify> *const)(v1 + 64));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 32));
  result = v5;
  if ( v23 == (char *)v1 )
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

// Line 1657: range 00000000143C2564-00000000143C27D3
void __fastcall Quest::updateQuestTalk(
        Quest *const this,
        const data::QuestContent *quest_content,
        uint32_t parent_talk_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  bool v7; // r14
  Quest::QuestTalkRecord *v8; // rax
  __int64 v9; // rcx
  char v10; // dl
  char *v11; // rsi
  __int64 v12; // rdx
  uint32_t Now; // edi
  char v14; // dl
  __int64 v15; // rcx
  __int64 v16; // rdx
  std::_Rb_tree_iterator<std::pair<unsigned int const,Quest::QuestTalkRecord> >::_Self __x; // [rsp+28h] [rbp-98h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,Quest::QuestTalkRecord> >::_Self __y; // [rsp+30h] [rbp-90h] BYREF
  Quest::QuestTalkRecord *talk_record; // [rsp+38h] [rbp-88h]
  std::shared_ptr<Config> v21; // [rsp+40h] [rbp-80h] BYREF
  char v22[112]; // [rsp+50h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 19 parent_talk_id:1656";
  *(_QWORD *)(v3 + 16) = Quest::updateQuestTalk;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = parent_talk_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v21);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21);
  v7 = !QuestExcelConfigMgr::isTalkInParentSeries(
          &v6->design_config.txt_config_mgr.quest_config_mgr,
          quest_content,
          *(_DWORD *)(v3 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v21);
  if ( !v7 )
  {
    __y._M_node = std::map<unsigned int,Quest::QuestTalkRecord>::end(&this->talk_history_map_)._M_node;
    __x._M_node = std::map<unsigned int,Quest::QuestTalkRecord>::find(
                    &this->talk_history_map_,
                    (const std::map<unsigned int,Quest::QuestTalkRecord>::key_type *)(v3 + 32))._M_node;
    if ( !std::operator!=(&__x, &__y) )
    {
      v11 = (char *)(v3 + 32);
      v8 = std::map<unsigned int,Quest::QuestTalkRecord>::operator[](
             &this->talk_history_map_,
             (const std::map<unsigned int,Quest::QuestTalkRecord>::key_type *)(v3 + 32));
      talk_record = v8;
      v9 = *(unsigned int *)(v3 + 32);
      v10 = *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000);
      LOBYTE(v11) = v10 != 0;
      v12 = (v10 != 0) & (unsigned __int8)((char)(((unsigned __int8)v8 & 7) + 3) >= v10);
      if ( (_BYTE)v12 )
        __asan_report_store4(v8, v11, v12, v9);
      talk_record->talk_id = v9;
      Now = common::tools::TimeUtils::getNow();
      v14 = *(_BYTE *)(((unsigned __int64)&talk_record->talk_time >> 3) + 0x7FFF8000);
      LOBYTE(v15) = v14 != 0;
      v16 = (v14 != 0) & (unsigned __int8)((char)((((_BYTE)talk_record + 4) & 7) + 3) >= v14);
      if ( (_BYTE)v16 )
      {
        Now = (_DWORD)talk_record + 4;
        __asan_report_store4(&talk_record->talk_time, (((_BYTE)talk_record + 4) & 7u) + 3, v16, v15);
      }
      talk_record->talk_time = Now;
    }
  }
  if ( v22 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1678: range 00000000143C27D4-00000000143C331D
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl Quest::finish(Quest *const this, bool is_notify)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t v6; // r14d
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  Player *v9; // rax
  PlayerBasicComp *BasicComp; // rax
  Player *v11; // rax
  PlayerQuestComp *QuestComp; // rdi
  uint32_t v13; // edx
  std::vector<unsigned int>::const_reference v14; // rax
  _DWORD *v15; // rdx
  std::vector<unsigned int>::const_reference v16; // rax
  _DWORD *v17; // rdx
  Player *v18; // rax
  PlayerItemComp *ItemComp; // rax
  common::milog::MiLogStream *v20; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  Player *v24; // rax
  PlayerBasicComp *v25; // rcx
  Player *v26; // rax
  PlayerDailyTaskComp *DailyTaskComp; // rcx
  Player *v28; // rax
  PlayerEventComp *EventComp; // r14
  Player *v30; // rax
  Player *v31; // rax
  PlayerCoopComp *CoopComp; // rcx
  common::milog::MiLogStream *v33; // rax
  int32_t result; // eax
  std::string v35; // [rsp+0h] [rbp-190h] OVERLAPPED BYREF
  size_t idx; // [rsp+20h] [rbp-170h]
  const data::QuestExcelConfig *quest_config_ptr; // [rsp+28h] [rbp-168h]
  std::shared_ptr<FinishQuestEvent> __r; // [rsp+30h] [rbp-160h] BYREF
  common::milog::MiLogStream v39; // [rsp+40h] [rbp-150h] BYREF
  char v40[304]; // [rsp+60h] [rbp-130h] BYREF

  v35._M_string_length = (std::string::size_type)this;
  BYTE4(v35._M_dataplus._M_p) = is_notify;
  v2 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 1 11 holder:1699 64 16 15 player_ptr:1692 96 16 10 param:1710 128 24 19 item_param_vec:1707"
                        " 192 24 18 action_reason:1716";
  *(_QWORD *)(v2 + 16) = Quest::finish;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -234881024;
  v4[536862725] = -218959118;
  v4[536862726] = -218103808;
  v4[536862727] = -202116109;
  if ( *(_BYTE *)(((v35._M_string_length + 20) >> 3) + 0x7FFF8000) != 0
    && (char)(((LOBYTE(v35._M_string_length) + 20) & 7) + 3) >= *(_BYTE *)(((v35._M_string_length + 20) >> 3)
                                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(v35._M_string_length + 20);
  }
  if ( *(_DWORD *)(v35._M_string_length + 20) == 2 )
  {
    quest_config_ptr = Quest::getQuestConfig((const Quest *const)v35._M_string_length);
    if ( quest_config_ptr )
    {
      Quest::getOwner((const Quest *const)(v2 + 64));
      if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 64), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v39,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/quest/quest.cpp",
          "finish",
          1695);
        v8 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
               &v39,
               (const char (*)[27])"getOwner failed, quest_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
          v8,
          (const unsigned int *)(v35._M_string_length + 16));
        common::milog::MiLogStream::~MiLogStream(&v39);
        v6 = -1;
      }
      else
      {
        v9 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        BasicComp = Player::getBasicComp(v9);
        PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v39, BasicComp);
        StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 0xCAu, v35);
        std::string::~string(&v39);
        if ( *(_BYTE *)(((v35._M_string_length + 20) >> 3) + 0x7FFF8000) != 0
          && (char)(((LOBYTE(v35._M_string_length) + 20) & 7) + 3) >= *(_BYTE *)(((v35._M_string_length + 20) >> 3)
                                                                               + 0x7FFF8000) )
        {
          __asan_report_load4(v35._M_string_length + 20);
        }
        *((_DWORD *)&v35._anon_0._M_allocated_capacity + 3) = *(_DWORD *)(v35._M_string_length + 20);
        *(_DWORD *)(v35._M_string_length + 20) = 3;
        v11 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        QuestComp = Player::getQuestComp(v11);
        if ( *(_BYTE *)(((v35._M_string_length + 24) >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((v35._M_string_length + 24) >> 3) + 0x7FFF8000) <= 3 )
        {
          QuestComp = (PlayerQuestComp *)(v35._M_string_length + 24);
          __asan_report_load4(v35._M_string_length + 24);
        }
        v13 = *(_DWORD *)(v35._M_string_length + 24);
        if ( *(_BYTE *)(((v35._M_string_length + 16) >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((v35._M_string_length + 16) >> 3) + 0x7FFF8000) <= 3 )
        {
          QuestComp = (PlayerQuestComp *)(v35._M_string_length + 16);
          __asan_report_load4(v35._M_string_length + 16);
        }
        PlayerQuestComp::logPlayerMissionFinish(QuestComp, 2u, *(_DWORD *)(v35._M_string_length + 16), v13);
        if ( std::vector<unsigned int>::size(&quest_config_ptr->quest_item_id_list) )
        {
          std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v2 + 128));
          for ( idx = 0LL; idx < std::vector<unsigned int>::size(&quest_config_ptr->quest_item_id_list); ++idx )
          {
            *(_DWORD *)(v2 + 96) = 0;
            *(_DWORD *)(v2 + 100) = 0;
            *(_DWORD *)(v2 + 104) = 0;
            *(_DWORD *)(v2 + 108) = 0;
            v14 = std::vector<unsigned int>::operator[](&quest_config_ptr->quest_item_id_list, idx);
            v15 = v14;
            if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v14);
            }
            *(_DWORD *)(v2 + 96) = *v15;
            v16 = std::vector<unsigned int>::operator[](&quest_config_ptr->quest_item_num_list, idx);
            v17 = v16;
            if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v16);
            }
            *(_DWORD *)(v2 + 100) = *v17;
            std::vector<ItemParam>::emplace_back<ItemParam&>(
              (std::vector<ItemParam> *const)(v2 + 128),
              (ItemParam *)(v2 + 96),
              (ItemParam *)(v2 + 96));
          }
          ActionReason::ActionReason(
            (ActionReason *const)(v2 + 192),
            ACTION_REASON_QUEST_ITEM,
            ITEM_LIMIT_QUEST_ADD_ITEM);
          if ( *(_BYTE *)(((v35._M_string_length + 16) >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((v35._M_string_length + 16) >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(v35._M_string_length + 16);
          }
          *(_DWORD *)(v2 + 200) = *(_DWORD *)(v35._M_string_length + 16);
          v18 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          ItemComp = Player::getItemComp(v18);
          if ( PlayerItemComp::addItemBatchWithStackLimit(
                 ItemComp,
                 (std::vector<ItemParam> *)(v2 + 128),
                 (const ActionReason *)(v2 + 192),
                 0LL) )
          {
            common::milog::MiLogStream::create(
              &v39,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/quest/quest.cpp",
              "finish",
              1720);
            v20 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                    &v39,
                    (const char (*)[27])"addGeneralItem fails, uid:");
            v21 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
            *((_DWORD *)&v35._anon_0._M_allocated_capacity + 2) = Player::getUid(v21);
            v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v20,
                    (const unsigned int *)&v35._anon_0._M_allocated_capacity + 2);
            v23 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v22, (const char (*)[11])" quest_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v23,
              (const unsigned int *)(v35._M_string_length + 16));
            common::milog::MiLogStream::~MiLogStream(&v39);
          }
          std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v2 + 128));
        }
        Quest::execAction((Quest *const)v35._M_string_length, &quest_config_ptr->finish_exec);
        Quest::clearAbilityGroup((Quest *const)v35._M_string_length);
        Quest::clearQuestSceneRange((Quest *const)v35._M_string_length);
        if ( BYTE4(v35._M_dataplus._M_p) )
          Quest::notifyQuest((Quest *const)v35._M_string_length);
        v24 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        v25 = Player::getBasicComp(v24);
        if ( *(_BYTE *)(((v35._M_string_length + 16) >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((v35._M_string_length + 16) >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(v35._M_string_length + 16);
        }
        PlayerBasicComp::onOpenStateCond(v25, OPEN_STATE_COND_QUEST, *(_DWORD *)(v35._M_string_length + 16));
        v26 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        DailyTaskComp = Player::getDailyTaskComp(v26);
        if ( *(_BYTE *)(((v35._M_string_length + 16) >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((v35._M_string_length + 16) >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(v35._M_string_length + 16);
        }
        PlayerDailyTaskComp::onFinishQuest(DailyTaskComp, *(_DWORD *)(v35._M_string_length + 16));
        v28 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        EventComp = Player::getEventComp(v28);
        common::tools::perf::make_shared<FinishQuestEvent,unsigned int &>(
          (unsigned int *)&__r,
          (unsigned int *)(v35._M_string_length + 16));
        std::shared_ptr<BaseEvent>::shared_ptr<FinishQuestEvent,void>(
          (std::shared_ptr<BaseEvent> *const)(v2 + 96),
          &__r);
        PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)(v2 + 96));
        std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v2 + 96));
        std::shared_ptr<FinishQuestEvent>::~shared_ptr(&__r);
        v30 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        Quest::tryTriggerChangeQuestStateEvent(
          (Quest *const)v35._M_string_length,
          *((data::QuestState *)&v35._anon_0._M_allocated_capacity + 3),
          v30);
        v31 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        CoopComp = Player::getCoopComp(v31);
        if ( *(_BYTE *)(((v35._M_string_length + 16) >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((v35._M_string_length + 16) >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(v35._M_string_length + 16);
        }
        PlayerCoopComp::onQuestFinish(CoopComp, *(_DWORD *)(v35._M_string_length + 16));
        common::milog::MiLogStream::create(
          &v39,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/quest/quest.cpp",
          "finish",
          1748);
        v33 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v39,
                (const char (*)[25])"quest finished,quest_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
          v33,
          (const unsigned int *)(v35._M_string_length + 16));
        common::milog::MiLogStream::~MiLogStream(&v39);
        v6 = 0;
        StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 64));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v39,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/quest/quest.cpp",
        "finish",
        1688);
      v7 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
             &v39,
             (const char (*)[33])"getQuestConfig failed, quest_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        v7,
        (const unsigned int *)(v35._M_string_length + 16));
      common::milog::MiLogStream::~MiLogStream(&v39);
      v6 = -1;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v39,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/quest/quest.cpp",
      "finish",
      1681);
    v5 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(&v39, (const char (*)[48])off_25330B20);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
      v5,
      (const unsigned int *)(v35._M_string_length + 16));
    common::milog::MiLogStream::~MiLogStream(&v39);
    v6 = -1;
  }
  result = v6;
  if ( v40 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1755: range 00000000143C331E-00000000143C391A
int32_t __cdecl Quest::fail(Quest *const this, bool notify)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  int32_t v6; // r14d
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  Player *v9; // rax
  PlayerBasicComp *BasicComp; // rax
  Player *v11; // rax
  PlayerQuestComp *QuestComp; // rdi
  uint32_t start_time; // edx
  Player *v14; // rdx
  common::milog::MiLogStream *v15; // rax
  int32_t result; // eax
  std::string v17; // [rsp+0h] [rbp-D0h]
  bool notifya; // [rsp+4h] [rbp-CCh]
  Quest *thisa; // [rsp+8h] [rbp-C8h]
  data::QuestState old_state; // [rsp+14h] [rbp-BCh]
  const data::QuestExcelConfig *quest_config_ptr; // [rsp+18h] [rbp-B8h]
  common::milog::MiLogStream v22; // [rsp+20h] [rbp-B0h] BYREF
  char v23[144]; // [rsp+40h] [rbp-90h] BYREF

  v17._M_string_length = (std::string::size_type)this;
  BYTE4(v17._M_dataplus._M_p) = notify;
  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 11 holder:1775 64 16 15 player_ptr:1769";
  *(_QWORD *)(v2 + 16) = Quest::fail;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->state_);
  }
  if ( this->state_ == QUEST_STATE_UNFINISHED )
  {
    *(&v17._anon_0._M_allocated_capacity + 1) = (std::string::size_type)Quest::getQuestConfig(this);
    if ( *(&v17._anon_0._M_allocated_capacity + 1) )
    {
      Quest::getOwner((const Quest *const)(v2 + 64));
      if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 64), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/quest/quest.cpp",
          "fail",
          1772);
        v8 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
               &v22,
               (const char (*)[27])"getOwner failed, quest_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->quest_id_);
        common::milog::MiLogStream::~MiLogStream(&v22);
        v6 = -1;
      }
      else
      {
        v9 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        BasicComp = Player::getBasicComp(v9);
        PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v22, BasicComp);
        StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 0xCBu, v17);
        std::string::~string(&v22);
        if ( *(_BYTE *)(((unsigned __int64)&thisa->state_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)thisa + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->state_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&thisa->state_);
        }
        old_state = thisa->state_;
        thisa->state_ = QUEST_STATE_FAILED;
        v11 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        QuestComp = Player::getQuestComp(v11);
        if ( *(_BYTE *)(((unsigned __int64)&thisa->start_time_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&thisa->start_time_ >> 3) + 0x7FFF8000) <= 3 )
        {
          QuestComp = (PlayerQuestComp *)&thisa->start_time_;
          __asan_report_load4(&thisa->start_time_);
        }
        start_time = thisa->start_time_;
        if ( *(_BYTE *)(((unsigned __int64)&thisa->quest_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&thisa->quest_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          QuestComp = (PlayerQuestComp *)&thisa->quest_id_;
          __asan_report_load4(&thisa->quest_id_);
        }
        PlayerQuestComp::logPlayerMissionFail(QuestComp, 2u, thisa->quest_id_, start_time);
        Quest::execAction(thisa, &quest_config_ptr->fail_exec);
        Quest::clearAbilityGroup(thisa);
        Quest::clearQuestSceneRange(thisa);
        if ( notifya )
          Quest::notifyQuest(thisa);
        v14 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        Quest::tryTriggerChangeQuestStateEvent(thisa, old_state, v14);
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/quest/quest.cpp",
          "fail",
          1796);
        v15 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                &v22,
                (const char (*)[23])"quest failed,quest_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &thisa->quest_id_);
        common::milog::MiLogStream::~MiLogStream(&v22);
        v6 = 0;
        StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 64));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/quest/quest.cpp",
        "fail",
        1765);
      v7 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
             &v22,
             (const char (*)[33])"getQuestConfig failed, quest_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->quest_id_);
      common::milog::MiLogStream::~MiLogStream(&v22);
      v6 = -1;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/quest/quest.cpp",
      "fail",
      1758);
    v5 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(&v22, (const char (*)[46])off_25330CE0);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->quest_id_);
    common::milog::MiLogStream::~MiLogStream(&v22);
    v6 = -1;
  }
  result = v6;
  if ( v23 == (char *)v2 )
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

// Line 1801: range 00000000143C391C-00000000143C392D
const std::map<unsigned int,Quest::QuestTalkRecord> *__cdecl Quest::getTalkHistory(Quest *const this)
{
  return &this->talk_history_map_;
};

// Line 1807: range 00000000143C392E-00000000143C3C3D
void __cdecl Quest::execAction(Quest *const this, const std::vector<data::QuestExec> *exec_vec)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  Player *v7; // rax
  PlayerQuestComp *QuestComp; // rdi
  uint32_t quest_id; // ecx
  const data::QuestExcelConfig *quest_excel_config_ptr; // [rsp+18h] [rbp-98h]
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-90h] BYREF
  char v13[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 15 player_ptr:1808";
  *(_QWORD *)(v2 + 16) = Quest::execAction;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  Quest::getOwner((const Quest *const)(v2 + 32));
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/quest/quest.cpp",
      "execAction",
      1811);
    v5 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
           &v12,
           (const char (*)[33])"player_ptr is nullptr, quest_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->quest_id_);
    common::milog::MiLogStream::~MiLogStream(&v12);
  }
  else
  {
    quest_excel_config_ptr = Quest::getQuestConfig(this);
    if ( quest_excel_config_ptr )
    {
      v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      QuestComp = Player::getQuestComp(v7);
      if ( *(_BYTE *)(((unsigned __int64)&this->quest_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->quest_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        QuestComp = (PlayerQuestComp *)&this->quest_id_;
        __asan_report_load4(&this->quest_id_);
      }
      quest_id = this->quest_id_;
      if ( *(_BYTE *)(((unsigned __int64)&quest_excel_config_ptr->main_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)quest_excel_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&quest_excel_config_ptr->main_id >> 3)
                                                                              + 0x7FFF8000) )
      {
        QuestComp = (PlayerQuestComp *)&quest_excel_config_ptr->main_id;
        __asan_report_load4(&quest_excel_config_ptr->main_id);
      }
      PlayerQuestComp::execAction(QuestComp, exec_vec, quest_excel_config_ptr->main_id, quest_id);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/quest/quest.cpp",
        "execAction",
        1817);
      v6 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
             &v12,
             (const char (*)[45])"quest_excel_config_ptr is nullptr, quest_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->quest_id_);
      common::milog::MiLogStream::~MiLogStream(&v12);
    }
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 32));
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

// Line 1824: range 00000000143C3C3E-00000000143C41C4
void __cdecl Quest::initAbilityGroup(Quest *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  Player *v4; // rax
  PlayerQuestComp *QuestComp; // rcx
  common::milog::MiLogStream *v6; // rax
  Player *v7; // rax
  PlayerAbilityGroupComp *AbilityGroupComp; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  Player *v12; // rax
  PlayerAbilityGroupComp *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  Player *v17; // rax
  PlayerAbilityGroupComp *v18; // rax
  std::allocator<std::string > __a; // [rsp+1Fh] [rbp-E1h] BYREF
  std::vector<std::string>::const_iterator __for_begin; // [rsp+20h] [rbp-E0h] BYREF
  std::vector<std::string>::const_iterator __for_end; // [rsp+28h] [rbp-D8h] BYREF
  const data::QuestExcelConfig *quest_config_ptr; // [rsp+30h] [rbp-D0h]
  const std::string *group_name; // [rsp+38h] [rbp-C8h]
  const std::vector<std::string> *__for_range; // [rsp+40h] [rbp-C0h]
  const std::string *group_name_0; // [rsp+48h] [rbp-B8h]
  std::vector<std::string> group_vec; // [rsp+50h] [rbp-B0h] BYREF
  common::milog::MiLogStream v27; // [rsp+70h] [rbp-90h] BYREF
  char v28[112]; // [rsp+90h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 15 player_ptr:1825";
  *(_QWORD *)(v1 + 16) = Quest::initAbilityGroup;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v1 + 32));
  if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/quest/quest.cpp",
      "initAbilityGroup",
      1828);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v27, (const char (*)[19])"nullptr player_ptr");
    common::milog::MiLogStream::~MiLogStream(&v27);
  }
  else
  {
    v4 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    QuestComp = Player::getQuestComp(v4);
    if ( *(_BYTE *)(((unsigned __int64)&this->quest_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->quest_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->quest_id_);
    }
    quest_config_ptr = PlayerQuestComp::findPlayerQuestExcelConfig(QuestComp, this->quest_id_);
    if ( quest_config_ptr )
    {
      group_name = &quest_config_ptr->ability_group_name;
      if ( (unsigned __int8)std::string::empty(&quest_config_ptr->ability_group_name) != 1 )
      {
        v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
        AbilityGroupComp = Player::getAbilityGroupComp(v7);
        std::allocator<std::string>::allocator(&__a);
        std::vector<std::string>::vector(&group_vec, 1uLL, group_name, &__a);
        PlayerAbilityGroupComp::addNoneFilterAbilityGroup(AbilityGroupComp, &group_vec, 0);
        std::vector<std::string>::~vector(&group_vec);
        std::allocator<std::string>::~allocator(&__a);
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/quest/quest.cpp",
          "initAbilityGroup",
          1842);
        v9 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
               &v27,
               (const char (*)[40])"[ABILITY_GROUP] quest initAbilityGroup:");
        v10 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, group_name);
        v11 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v10, (const char (*)[12])", quest_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &this->quest_id_);
        common::milog::MiLogStream::~MiLogStream(&v27);
      }
      v12 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      v13 = Player::getAbilityGroupComp(v12);
      PlayerAbilityGroupComp::addTeamAbilityGroup(v13, &quest_config_ptr->team_ability_group_list, 0);
      __for_range = &quest_config_ptr->team_ability_group_list;
      __for_begin._M_current = std::vector<std::string>::begin(&quest_config_ptr->team_ability_group_list)._M_current;
      __for_end._M_current = std::vector<std::string>::end(__for_range)._M_current;
      while ( __gnu_cxx::operator!=<std::string const*,std::vector<std::string>>(&__for_begin, &__for_end) )
      {
        group_name_0 = __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator*(&__for_begin);
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/quest/quest.cpp",
          "initAbilityGroup",
          1847);
        v14 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                &v27,
                (const char (*)[45])"[ABILITY_GROUP] quest init teamAbilityGroup:");
        v15 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v14, group_name_0);
        v16 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v15, (const char (*)[12])", quest_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &this->quest_id_);
        common::milog::MiLogStream::~MiLogStream(&v27);
        __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator++(&__for_begin);
      }
      v17 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      v18 = Player::getAbilityGroupComp(v17);
      PlayerAbilityGroupComp::tryRefreshAbilityGroup(v18);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/quest/quest.cpp",
        "initAbilityGroup",
        1835);
      v6 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
             &v27,
             (const char (*)[44])"findPlayerQuestExcelConfig fails, quest_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->quest_id_);
      common::milog::MiLogStream::~MiLogStream(&v27);
    }
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 32));
  if ( v28 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1854: range 00000000143C41C6-00000000143C4742
void __cdecl Quest::clearAbilityGroup(Quest *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  Player *v4; // rax
  PlayerQuestComp *QuestComp; // rcx
  common::milog::MiLogStream *v6; // rax
  Player *v7; // rax
  PlayerAbilityGroupComp *AbilityGroupComp; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  Player *v12; // rax
  PlayerAbilityGroupComp *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  Player *v17; // rax
  PlayerAbilityGroupComp *v18; // rax
  std::allocator<std::string > __a; // [rsp+1Fh] [rbp-E1h] BYREF
  std::vector<std::string>::const_iterator __for_begin; // [rsp+20h] [rbp-E0h] BYREF
  std::vector<std::string>::const_iterator __for_end; // [rsp+28h] [rbp-D8h] BYREF
  const data::QuestExcelConfig *quest_config_ptr; // [rsp+30h] [rbp-D0h]
  const std::string *group_name; // [rsp+38h] [rbp-C8h]
  const std::vector<std::string> *__for_range; // [rsp+40h] [rbp-C0h]
  const std::string *group_name_0; // [rsp+48h] [rbp-B8h]
  std::vector<std::string> group_vec; // [rsp+50h] [rbp-B0h] BYREF
  common::milog::MiLogStream v27; // [rsp+70h] [rbp-90h] BYREF
  char v28[112]; // [rsp+90h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 15 player_ptr:1855";
  *(_QWORD *)(v1 + 16) = Quest::clearAbilityGroup;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v1 + 32));
  if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/quest/quest.cpp",
      "clearAbilityGroup",
      1858);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v27, (const char (*)[19])"nullptr player_ptr");
    common::milog::MiLogStream::~MiLogStream(&v27);
  }
  else
  {
    v4 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    QuestComp = Player::getQuestComp(v4);
    if ( *(_BYTE *)(((unsigned __int64)&this->quest_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->quest_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->quest_id_);
    }
    quest_config_ptr = PlayerQuestComp::findPlayerQuestExcelConfig(QuestComp, this->quest_id_);
    if ( quest_config_ptr )
    {
      group_name = &quest_config_ptr->ability_group_name;
      if ( (unsigned __int8)std::string::empty(&quest_config_ptr->ability_group_name) != 1 )
      {
        v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
        AbilityGroupComp = Player::getAbilityGroupComp(v7);
        std::allocator<std::string>::allocator(&__a);
        std::vector<std::string>::vector(&group_vec, 1uLL, group_name, &__a);
        PlayerAbilityGroupComp::delNoneFilterAbilityGroup(AbilityGroupComp, &group_vec);
        std::vector<std::string>::~vector(&group_vec);
        std::allocator<std::string>::~allocator(&__a);
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/quest/quest.cpp",
          "clearAbilityGroup",
          1872);
        v9 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
               &v27,
               (const char (*)[41])"[ABILITY_GROUP] quest clearAbilityGroup:");
        v10 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, group_name);
        v11 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v10, (const char (*)[12])", quest_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &this->quest_id_);
        common::milog::MiLogStream::~MiLogStream(&v27);
      }
      v12 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      v13 = Player::getAbilityGroupComp(v12);
      PlayerAbilityGroupComp::delTeamAbilityGroup(v13, &quest_config_ptr->team_ability_group_list);
      __for_range = &quest_config_ptr->team_ability_group_list;
      __for_begin._M_current = std::vector<std::string>::begin(&quest_config_ptr->team_ability_group_list)._M_current;
      __for_end._M_current = std::vector<std::string>::end(__for_range)._M_current;
      while ( __gnu_cxx::operator!=<std::string const*,std::vector<std::string>>(&__for_begin, &__for_end) )
      {
        group_name_0 = __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator*(&__for_begin);
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/quest/quest.cpp",
          "clearAbilityGroup",
          1877);
        v14 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                &v27,
                (const char (*)[46])"[ABILITY_GROUP] quest clear teamAbilityGroup:");
        v15 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v14, group_name_0);
        v16 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v15, (const char (*)[12])", quest_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &this->quest_id_);
        common::milog::MiLogStream::~MiLogStream(&v27);
        __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator++(&__for_begin);
      }
      v17 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      v18 = Player::getAbilityGroupComp(v17);
      PlayerAbilityGroupComp::tryRefreshAbilityGroup(v18);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/quest/quest.cpp",
        "clearAbilityGroup",
        1865);
      v6 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
             &v27,
             (const char (*)[44])"findPlayerQuestExcelConfig fails, quest_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->quest_id_);
      common::milog::MiLogStream::~MiLogStream(&v27);
    }
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 32));
  if ( v28 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1885: range 00000000143C4744-00000000143C4918
void __fastcall Quest::tryTriggerChangeQuestStateEvent(Quest *const this, data::QuestState old_state, Player *player)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  PlayerEventComp *EventComp; // r14
  data::QuestState *v7; // r8
  data::QuestState *v8; // r9
  std::shared_ptr<QuestStateChangeEvent> __r; // [rsp+20h] [rbp-90h] BYREF
  std::shared_ptr<BaseEvent> p_event_ptr; // [rsp+30h] [rbp-80h] BYREF
  char v12[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 14 old_state:1884";
  *(_QWORD *)(v3 + 16) = Quest::tryTriggerChangeQuestStateEvent;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = old_state;
  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->state_);
  }
  if ( this->state_ != *(_DWORD *)(v3 + 32) )
  {
    EventComp = Player::getEventComp(player);
    common::tools::perf::make_shared<QuestStateChangeEvent,unsigned int &,data::QuestState &,data::QuestState &>(
      (unsigned int *)&__r,
      (data::QuestState *)&this->quest_id_,
      &this->state_,
      (unsigned int *)(v3 + 32),
      v7,
      v8);
    std::shared_ptr<BaseEvent>::shared_ptr<QuestStateChangeEvent,void>(&p_event_ptr, &__r);
    PlayerEventComp::notifyEvent(EventComp, &p_event_ptr);
    std::shared_ptr<BaseEvent>::~shared_ptr(&p_event_ptr);
    std::shared_ptr<QuestStateChangeEvent>::~shared_ptr(&__r);
  }
  if ( v12 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1893: range 00000000143C491A-00000000143C4D5F
void __cdecl Quest::addQuestSceneRange(Quest *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  common::milog::MiLogStream *v4; // rax
  QuestExcelConfigMgr *p_quest_config_mgr; // rcx
  Player *v6; // rax
  PlayerQuestComp *QuestComp; // r15
  const std::__tuple_element_t_22 *v8; // rax
  uint32_t *v9; // rax
  uint32_t *v10; // rdx
  uint32_t v11; // r14d
  uint32_t *v12; // rax
  uint32_t *v13; // rdx
  uint32_t v14; // edx
  std::vector<std::tuple<unsigned int,unsigned int,std::string >>::const_iterator __for_begin; // [rsp+18h] [rbp-C8h] BYREF
  std::vector<std::tuple<unsigned int,unsigned int,std::string >>::const_iterator __for_end; // [rsp+20h] [rbp-C0h] BYREF
  const std::vector<std::tuple<unsigned int,unsigned int,std::string >> *scene_range_vec_ptr; // [rsp+28h] [rbp-B8h]
  const std::vector<std::tuple<unsigned int,unsigned int,std::string >> *__for_range; // [rsp+30h] [rbp-B0h]
  const std::tuple<unsigned int,unsigned int,std::string > *scene_range; // [rsp+38h] [rbp-A8h]
  std::shared_ptr<Config> v20; // [rsp+40h] [rbp-A0h] BYREF
  common::milog::MiLogStream v21; // [rsp+50h] [rbp-90h] BYREF
  char v22[112]; // [rsp+70h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 15 player_ptr:1894";
  *(_QWORD *)(v1 + 16) = Quest::addQuestSceneRange;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  Quest::getOwner((const Quest *const)(v1 + 32));
  if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/quest/quest.cpp",
      "addQuestSceneRange",
      1897);
    v4 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
           &v21,
           (const char (*)[27])"getOwner failed, quest_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->quest_id_);
    common::milog::MiLogStream::~MiLogStream(&v21);
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v20);
    p_quest_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20)->design_config.txt_config_mgr.quest_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->quest_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->quest_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->quest_id_);
    }
    scene_range_vec_ptr = QuestExcelConfigMgr::findQuestSceneRangeVec[abi:cxx11](p_quest_config_mgr, this->quest_id_);
    std::shared_ptr<Config>::~shared_ptr(&v20);
    if ( scene_range_vec_ptr )
    {
      __for_range = scene_range_vec_ptr;
      __for_begin._M_current = std::vector<std::tuple<unsigned int,unsigned int,std::string>>::begin(scene_range_vec_ptr)._M_current;
      __for_end._M_current = std::vector<std::tuple<unsigned int,unsigned int,std::string>>::end(scene_range_vec_ptr)._M_current;
      while ( __gnu_cxx::operator!=<std::tuple<unsigned int,unsigned int,std::string> const*,std::vector<std::tuple<unsigned int,unsigned int,std::string>>>(
                &__for_begin,
                &__for_end) )
      {
        scene_range = __gnu_cxx::__normal_iterator<std::tuple<unsigned int,unsigned int,std::string> const*,std::vector<std::tuple<unsigned int,unsigned int,std::string>>>::operator*(&__for_begin);
        v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
        QuestComp = Player::getQuestComp(v6);
        v8 = std::get<2ul,unsigned int,unsigned int,std::string>(scene_range);
        std::string::basic_string(&v21, v8);
        v9 = (uint32_t *)std::get<1ul,unsigned int,unsigned int,std::string>(scene_range);
        v10 = v9;
        if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v9);
        }
        v11 = *v10;
        v12 = (uint32_t *)std::get<0ul,unsigned int,unsigned int,std::string>(scene_range);
        v13 = v12;
        if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v12);
        }
        v14 = *v13;
        if ( *(_BYTE *)(((unsigned __int64)&this->quest_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->quest_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->quest_id_);
        }
        PlayerQuestComp::addQuestSceneRange(QuestComp, this->quest_id_, v14, v11, (std::string *)&v21);
        std::string::~string(&v21);
        __gnu_cxx::__normal_iterator<std::tuple<unsigned int,unsigned int,std::string> const*,std::vector<std::tuple<unsigned int,unsigned int,std::string>>>::operator++(&__for_begin);
      }
    }
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 32));
  if ( v22 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1912: range 00000000143C4D60-00000000143C4F64
void __cdecl Quest::clearQuestSceneRange(Quest *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  common::milog::MiLogStream *v4; // rax
  Player *v5; // rax
  PlayerQuestComp *QuestComp; // rcx
  common::milog::MiLogStream v7; // [rsp+10h] [rbp-90h] BYREF
  char v8[112]; // [rsp+30h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 15 player_ptr:1913";
  *(_QWORD *)(v1 + 16) = Quest::clearQuestSceneRange;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  Quest::getOwner((const Quest *const)(v1 + 32));
  if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/quest/quest.cpp",
      "clearQuestSceneRange",
      1916);
    v4 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
           &v7,
           (const char (*)[27])"getOwner failed, quest_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->quest_id_);
    common::milog::MiLogStream::~MiLogStream(&v7);
  }
  else
  {
    v5 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    QuestComp = Player::getQuestComp(v5);
    if ( *(_BYTE *)(((unsigned __int64)&this->quest_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->quest_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->quest_id_);
    }
    PlayerQuestComp::clearQuestSceneRange(QuestComp, this->quest_id_);
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 32));
  if ( v8 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1923: range 00000000143C4F66-00000000143C50A6
void __cdecl Quest::setForceFinishFlagByGm(Quest *const this, bool flag)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rdx
  char v3; // cl
  GameserverService *v4; // rsi
  bool v5; // bl
  __int64 v6; // rcx
  char v7; // al
  std::shared_ptr<Config> v9; // [rsp+10h] [rbp-40h] BYREF
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-30h] BYREF

  v4 = ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v9);
  v2 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v9);
  v3 = *(_BYTE *)(((unsigned __int64)&v2->is_gm_talk_open >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v3 != 0;
  if ( v3 != 0 && (((unsigned __int8)v2 + 45) & 7) >= v3 )
    __asan_report_load1(&v2->is_gm_talk_open);
  v5 = !v2->is_gm_talk_open;
  std::shared_ptr<Config>::~shared_ptr(&v9);
  if ( v5 )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/quest/quest.cpp",
      "setForceFinishFlagByGm",
      1926);
    common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(&v10, (const char (*)[47])off_25331280);
    common::milog::MiLogStream::~MiLogStream(&v10);
  }
  else
  {
    v7 = *(_BYTE *)(((unsigned __int64)&this->gm_force_finish_flag_ >> 3) + 0x7FFF8000);
    if ( v7 < 0 )
    {
      LOBYTE(v6) = v7 != 0;
      __asan_report_store1(&this->gm_force_finish_flag_, v4, &this->gm_force_finish_flag_, v6);
    }
    this->gm_force_finish_flag_ = flag;
  }
};

// Line 1934: range 00000000143C50A8-00000000143C563A
void __cdecl Quest::onBindFlowGroupSuiteWorldQuestStart(Quest *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  common::milog::MiLogStream *v4; // rax
  Player *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  uint32_t parent_quest_id; // [rsp+1Ch] [rbp-F4h]
  std::map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-F0h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-E8h] BYREF
  PlayerQuestComp *quest_comp; // [rsp+30h] [rbp-E0h]
  const data::QuestExcelConfig *quest_config_ptr; // [rsp+38h] [rbp-D8h]
  const std::map<unsigned int,unsigned int> *__for_range; // [rsp+40h] [rbp-D0h]
  const std::pair<unsigned int const,unsigned int> *v16; // [rsp+48h] [rbp-C8h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *group_id; // [rsp+50h] [rbp-C0h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *suite_index; // [rsp+58h] [rbp-B8h]
  common::milog::MiLogStream v19; // [rsp+60h] [rbp-B0h] BYREF
  char v20[144]; // [rsp+80h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 15 player_ptr:1935 64 16 21 parent_quest_ptr:1955";
  *(_QWORD *)(v1 + 16) = Quest::onBindFlowGroupSuiteWorldQuestStart;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  Quest::getOwner((const Quest *const)(v1 + 32));
  if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/quest/quest.cpp",
      "onBindFlowGroupSuiteWorldQuestStart",
      1938);
    v4 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           &v19,
           (const char (*)[37])"[WQ_FLOW] getOwner failed, quest_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->quest_id_);
    common::milog::MiLogStream::~MiLogStream(&v19);
  }
  else
  {
    v5 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    quest_comp = Player::getQuestComp(v5);
    if ( *(_BYTE *)(((unsigned __int64)&this->quest_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->quest_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->quest_id_);
    }
    quest_config_ptr = PlayerQuestComp::findPlayerQuestExcelConfig(quest_comp, this->quest_id_);
    if ( quest_config_ptr )
    {
      if ( !std::map<unsigned int,unsigned int>::empty(&quest_config_ptr->world_quest_flow_group_suite_map) )
      {
        common::milog::MiLogStream::create(
          &v19,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/quest/quest.cpp",
          "onBindFlowGroupSuiteWorldQuestStart",
          1953);
        v7 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
               &v19,
               (const char (*)[56])"[WQ_FLOW] onBindFlowGroupSuiteWorldQuestStart, refresh:");
        v8 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
               v7,
               &quest_config_ptr->world_quest_flow_group_suite_map_str);
        v9 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v8, (const char (*)[12])", quest_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->quest_id_);
        common::milog::MiLogStream::~MiLogStream(&v19);
        if ( *(_BYTE *)(((unsigned __int64)&this->quest_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->quest_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->quest_id_);
        }
        parent_quest_id = PlayerQuestComp::findParentQuestId(quest_comp, this->quest_id_);
        PlayerQuestComp::findParentQuest((const PlayerQuestComp *const)(v1 + 64), (__int64)quest_comp, parent_quest_id);
        if ( std::operator!=<ParentQuest>((const std::shared_ptr<ParentQuest> *)(v1 + 64), 0LL) )
        {
          __for_range = &quest_config_ptr->world_quest_flow_group_suite_map;
          __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&quest_config_ptr->world_quest_flow_group_suite_map)._M_node;
          __for_end._M_node = std::map<unsigned int,unsigned int>::end(&quest_config_ptr->world_quest_flow_group_suite_map)._M_node;
          while ( std::operator!=(&__for_begin, &__for_end) )
          {
            v16 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
            group_id = std::get<0ul,unsigned int const,unsigned int>(v16);
            suite_index = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v16);
            if ( *(_BYTE *)(((unsigned __int64)group_id >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)group_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)group_id >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(group_id);
            }
            PlayerQuestComp::setGroupLinkedByWorldQuest(quest_comp, parent_quest_id, *group_id);
            std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
          }
        }
        PlayerQuestComp::refreshWorldQuestFlowGroupSuite(
          quest_comp,
          parent_quest_id,
          &quest_config_ptr->world_quest_flow_group_suite_map,
          0);
        std::shared_ptr<ParentQuest>::~shared_ptr((std::shared_ptr<ParentQuest> *const)(v1 + 64));
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/quest/quest.cpp",
        "onBindFlowGroupSuiteWorldQuestStart",
        1946);
      v6 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
             &v19,
             (const char (*)[54])"[WQ_FLOW] findPlayerQuestExcelConfig fails, quest_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->quest_id_);
      common::milog::MiLogStream::~MiLogStream(&v19);
    }
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 32));
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
