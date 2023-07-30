// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/quest/parent_quest.cpp

// Line 31: range 0000000016CD1752-0000000016CD233D
int32_t __cdecl ParentQuest::fromBin(ParentQuest *const this, const proto::ParentQuestBin *proto_bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  unsigned int v5; // eax
  __int64 v6; // rdx
  char v7; // al
  uint32_t v8; // ecx
  char v9; // dl
  __int64 v10; // rdx
  __int64 v11; // rdx
  char v12; // al
  uint32_t v13; // ecx
  char v14; // dl
  __int64 v15; // rdx
  __int64 finish_time; // rdx
  char v17; // al
  uint32_t v18; // ecx
  char v19; // dl
  __int64 v20; // rdx
  unsigned int *v21; // rcx
  data::QuestState *v22; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,data::QuestState> >,bool> v23; // rax
  common::milog::MiLogStream *v24; // r12
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  int32_t result; // eax
  const proto::ParentQuestRandomInfoBin *v28; // rsi
  common::milog::MiLogStream *v29; // rax
  const google::protobuf::RepeatedField<int> *v30; // rax
  common::milog::MiLogStream *v31; // r12
  const google::protobuf::RepeatedField<int> *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  const google::protobuf::RepeatedField<int> *v35; // rax
  int v36; // eax
  const google::protobuf::RepeatedField<int> *v37; // rax
  int *v38; // rax
  int *v39; // rdx
  int v40; // r14d
  std::vector<int>::reference v41; // rax
  _DWORD *v42; // rdx
  char v43; // cl
  uint32_t v44; // ecx
  char v45; // dl
  __int64 v46; // rdx
  __int64 v47; // rdx
  char v48; // al
  unsigned int *v49; // rcx
  unsigned int *v50; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >,bool> v51; // rax
  common::milog::MiLogStream *v52; // r12
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  uint32_t v55; // eax
  unsigned int *v56; // rcx
  ParentQuestInferenceWordData *v57; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,ParentQuestInferenceWordData>,false,false>,bool> v58; // rax
  common::milog::MiLogStream *v59; // r14
  common::milog::MiLogStream *v60; // rax
  common::milog::MiLogStream *v61; // rax
  const google::protobuf::RepeatedField<unsigned int> *v62; // rax
  const proto::ParentQuestBin *proto_bina; // [rsp+0h] [rbp-F0h]
  unsigned int v64; // [rsp+14h] [rbp-DCh] BYREF
  data::QuestState v65; // [rsp+18h] [rbp-D8h] BYREF
  int i; // [rsp+1Ch] [rbp-D4h]
  google::protobuf::RepeatedPtrField<proto::Uint32PairBin>::const_iterator __for_begin; // [rsp+20h] [rbp-D0h] BYREF
  google::protobuf::RepeatedPtrField<proto::Uint32PairBin>::const_iterator __for_end; // [rsp+28h] [rbp-C8h] BYREF
  const google::protobuf::RepeatedPtrField<proto::Uint32PairBin> *__for_range; // [rsp+30h] [rbp-C0h]
  const google::protobuf::RepeatedPtrField<proto::Uint32PairBin> *__for_range_0; // [rsp+38h] [rbp-B8h]
  const google::protobuf::RepeatedPtrField<proto::ParentQuestInferenceWordBin> *__for_range_1; // [rsp+40h] [rbp-B0h]
  const proto::ParentQuestInferenceWordBin *inference_word_bin; // [rsp+48h] [rbp-A8h]
  const proto::Uint32PairBin *pair_bin_0; // [rsp+50h] [rbp-A0h]
  const proto::Uint32PairBin *pair_bin; // [rsp+58h] [rbp-98h]
  common::milog::MiLogStream v75; // [rsp+60h] [rbp-90h] BYREF
  char v76[112]; // [rsp+80h] [rbp-70h] BYREF

  proto_bina = proto_bin;
  v2 = (unsigned __int64)v76;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 12 12 word_data:79";
  *(_QWORD *)(v2 + 16) = ParentQuest::fromBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202177536;
  LOBYTE(v5) = proto::ParentQuestBin::is_random(proto_bin);
  v6 = v5;
  v7 = *(_BYTE *)(((unsigned __int64)&this->is_random_ >> 3) + 0x7FFF8000);
  if ( v7 < 0 )
  {
    LOBYTE(proto_bin) = v7 != 0;
    __asan_report_store1(&this->is_random_, proto_bin, v6);
  }
  this->is_random_ = v6;
  v8 = proto::ParentQuestBin::parent_quest_id(proto_bina);
  v9 = *(_BYTE *)(((unsigned __int64)&this->parent_quest_id_ >> 3) + 0x7FFF8000);
  LOBYTE(proto_bin) = v9 != 0;
  v10 = (v9 != 0) & (unsigned __int8)((char)((((_BYTE)this + 20) & 7) + 3) >= v9);
  if ( (_BYTE)v10 )
    __asan_report_store4(&this->parent_quest_id_, proto_bin, v10);
  this->parent_quest_id_ = v8;
  v11 = proto::ParentQuestBin::total_finish_count(proto_bina);
  v12 = *(_BYTE *)(((unsigned __int64)&this->total_finish_count_ >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(proto_bin) = v12 != 0;
    __asan_report_store4(&this->total_finish_count_, proto_bin, v11);
  }
  this->total_finish_count_ = v11;
  v13 = proto::ParentQuestBin::today_finish_count(proto_bina);
  v14 = *(_BYTE *)(((unsigned __int64)&this->today_finish_count_ >> 3) + 0x7FFF8000);
  LOBYTE(proto_bin) = v14 != 0;
  v15 = (v14 != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= v14);
  if ( (_BYTE)v15 )
    __asan_report_store4(&this->today_finish_count_, proto_bin, v15);
  this->today_finish_count_ = v13;
  finish_time = proto::ParentQuestBin::last_finish_time(proto_bina);
  v17 = *(_BYTE *)(((unsigned __int64)&this->last_finish_time_ >> 3) + 0x7FFF8000);
  if ( v17 != 0 && v17 <= 3 )
  {
    LOBYTE(proto_bin) = v17 != 0;
    __asan_report_store4(&this->last_finish_time_, proto_bin, finish_time);
  }
  this->last_finish_time_ = finish_time;
  v18 = proto::ParentQuestBin::accept_time(proto_bina);
  v19 = *(_BYTE *)(((unsigned __int64)&this->accept_time_ >> 3) + 0x7FFF8000);
  LOBYTE(proto_bin) = v19 != 0;
  v20 = (v19 != 0) & (unsigned __int8)((char)((((_BYTE)this + 36) & 7) + 3) >= v19);
  if ( (_BYTE)v20 )
    __asan_report_store4(&this->accept_time_, proto_bin, v20);
  this->accept_time_ = v18;
  __for_range = proto::ParentQuestBin::child_quest_state_list(proto_bina);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::Uint32PairBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::Uint32PairBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::Uint32PairBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    pair_bin = google::protobuf::internal::RepeatedPtrIterator<proto::Uint32PairBin const>::operator*(&__for_begin);
    v65 = proto::Uint32PairBin::value(pair_bin);
    v64 = proto::Uint32PairBin::key(pair_bin);
    v23 = std::map<unsigned int,data::QuestState>::emplace<unsigned int,data::QuestState>(
            &this->child_quest_state_map_,
            &v64,
            &v65,
            v21,
            v22);
    if ( !v23.second )
    {
      common::milog::MiLogStream::create(
        &v75,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/quest/parent_quest.cpp",
        "fromBin",
        44);
      v24 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
              &v75,
              (const char (*)[20])"duplicate quest_id:");
      v65 = proto::Uint32PairBin::key(pair_bin);
      v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)&v65);
      v26 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v25, (const char (*)[21])off_25F2DC80);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &this->parent_quest_id_);
      common::milog::MiLogStream::~MiLogStream(&v75);
      result = -1;
      goto LABEL_47;
    }
    google::protobuf::internal::RepeatedPtrIterator<proto::Uint32PairBin const>::operator++(&__for_begin);
  }
  v28 = proto::ParentQuestBin::random_info(proto_bina);
  if ( ParentQuestRandomInfo::fromBin(&this->random_info_, v28) )
  {
    common::milog::MiLogStream::create(
      &v75,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/quest/parent_quest.cpp",
      "fromBin",
      51);
    v29 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
            &v75,
            (const char (*)[46])"random_info_ fromBin failed, parent_quest_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, &this->parent_quest_id_);
    common::milog::MiLogStream::~MiLogStream(&v75);
    result = -1;
  }
  else
  {
    v30 = proto::ParentQuestBin::quest_var(proto_bina);
    if ( (unsigned int)google::protobuf::RepeatedField<int>::size(v30) <= 5 )
    {
      for ( i = 0; ; ++i )
      {
        v35 = proto::ParentQuestBin::quest_var(proto_bina);
        v36 = google::protobuf::RepeatedField<int>::size(v35);
        if ( i >= v36 )
          break;
        v37 = proto::ParentQuestBin::quest_var(proto_bina);
        v38 = (int *)google::protobuf::RepeatedField<int>::operator[](v37, i);
        v39 = v38;
        if ( *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v38 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v38);
        }
        v40 = *v39;
        v28 = (const proto::ParentQuestRandomInfoBin *)i;
        v41 = std::vector<int>::operator[](&this->quest_var_list_, i);
        v42 = v41;
        v43 = *(_BYTE *)(((unsigned __int64)v41 >> 3) + 0x7FFF8000);
        if ( v43 != 0 && (char)(((unsigned __int8)v41 & 7) + 3) >= v43 )
        {
          LOBYTE(v28) = v43 != 0;
          __asan_report_store4(v41, v28, v41);
        }
        *v42 = v40;
      }
      v44 = proto::ParentQuestBin::reward_index(proto_bina);
      v45 = *(_BYTE *)(((unsigned __int64)&this->reward_index_ >> 3) + 0x7FFF8000);
      LOBYTE(v28) = v45 != 0;
      v46 = (v45 != 0) & (unsigned __int8)((char)((((_BYTE)this + 108) & 7) + 3) >= v45);
      if ( (_BYTE)v46 )
        __asan_report_store4(&this->reward_index_, v28, v46);
      this->reward_index_ = v44;
      v47 = proto::ParentQuestBin::state(proto_bina);
      v48 = *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000);
      if ( v48 != 0 && v48 <= 3 )
      {
        LOBYTE(v28) = v48 != 0;
        __asan_report_store4(&this->state_, v28, v47);
      }
      this->state_ = v47;
      __for_range_0 = proto::ParentQuestBin::time_var_list(proto_bina);
      __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::Uint32PairBin>::begin(__for_range_0).it_;
      __for_end.it_ = google::protobuf::RepeatedPtrField<proto::Uint32PairBin>::end(__for_range_0).it_;
      while ( google::protobuf::internal::RepeatedPtrIterator<proto::Uint32PairBin const>::operator!=(
                &__for_begin,
                &__for_end) )
      {
        pair_bin_0 = google::protobuf::internal::RepeatedPtrIterator<proto::Uint32PairBin const>::operator*(&__for_begin);
        v65 = proto::Uint32PairBin::value(pair_bin_0);
        v64 = proto::Uint32PairBin::key(pair_bin_0);
        v51 = std::map<unsigned int,unsigned int>::emplace<unsigned int,unsigned int>(
                &this->time_var_map_,
                &v64,
                (unsigned int *)&v65,
                v49,
                v50);
        if ( !v51.second )
        {
          common::milog::MiLogStream::create(
            &v75,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/quest/parent_quest.cpp",
            "fromBin",
            72);
          v52 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                  &v75,
                  (const char (*)[20])"duplicate time_var:");
          v65 = proto::Uint32PairBin::key(pair_bin_0);
          v53 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v52, (const unsigned int *)&v65);
          v54 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v53, (const char (*)[21])off_25F2DC80);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v54, &this->parent_quest_id_);
          common::milog::MiLogStream::~MiLogStream(&v75);
          result = -1;
          goto LABEL_47;
        }
        google::protobuf::internal::RepeatedPtrIterator<proto::Uint32PairBin const>::operator++(&__for_begin);
      }
      __for_range_1 = proto::ParentQuestBin::unlock_inference_word_list(proto_bina);
      __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::ParentQuestInferenceWordBin>::begin(__for_range_1).it_;
      __for_end.it_ = google::protobuf::RepeatedPtrField<proto::ParentQuestInferenceWordBin>::end(__for_range_1).it_;
      while ( google::protobuf::internal::RepeatedPtrIterator<proto::ParentQuestInferenceWordBin const>::operator!=(
                (const google::protobuf::internal::RepeatedPtrIterator<const proto::ParentQuestInferenceWordBin> *const)&__for_begin,
                (const google::protobuf::internal::RepeatedPtrIterator<const proto::ParentQuestInferenceWordBin>::iterator *)&__for_end) )
      {
        inference_word_bin = google::protobuf::internal::RepeatedPtrIterator<proto::ParentQuestInferenceWordBin const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::ParentQuestInferenceWordBin> *const)&__for_begin);
        v55 = proto::ParentQuestInferenceWordBin::word_id(inference_word_bin);
        ParentQuestInferenceWordData::ParentQuestInferenceWordData((ParentQuestInferenceWordData *const)(v2 + 32), v55);
        *(_BYTE *)(v2 + 37) = proto::ParentQuestInferenceWordBin::is_associate(inference_word_bin);
        *(_BYTE *)(v2 + 36) = proto::ParentQuestInferenceWordBin::is_interpret(inference_word_bin);
        *(_BYTE *)(v2 + 38) = proto::ParentQuestInferenceWordBin::is_submit(inference_word_bin);
        *(_DWORD *)(v2 + 40) = proto::ParentQuestInferenceWordBin::unlock_by_word_id(inference_word_bin);
        v65 = proto::ParentQuestInferenceWordBin::word_id(inference_word_bin);
        v58 = std::unordered_map<unsigned int,ParentQuestInferenceWordData>::emplace<unsigned int,ParentQuestInferenceWordData&>(
                &this->unlock_inference_word_map_,
                (unsigned int *)&v65,
                (ParentQuestInferenceWordData *)(v2 + 32),
                v56,
                v57);
        if ( !v58.second )
        {
          common::milog::MiLogStream::create(
            &v75,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/quest/parent_quest.cpp",
            "fromBin",
            86);
          v59 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                  &v75,
                  (const char (*)[19])"duplicate word_id:");
          v65 = proto::ParentQuestInferenceWordBin::word_id(inference_word_bin);
          v60 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v59, (const unsigned int *)&v65);
          v61 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                  v60,
                  (const char (*)[19])", parent_quest_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v61, &this->parent_quest_id_);
          common::milog::MiLogStream::~MiLogStream(&v75);
        }
        google::protobuf::internal::RepeatedPtrIterator<proto::ParentQuestInferenceWordBin const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::ParentQuestInferenceWordBin> *const)&__for_begin);
      }
      v62 = proto::ParentQuestBin::unlock_inference_conclusion_list(proto_bina);
      common::tools::MiscUtils::setFromRepeated<std::set<unsigned int>,unsigned int>(
        &this->unlock_inference_conclusion_set_,
        v62);
      result = 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v75,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/quest/parent_quest.cpp",
        "fromBin",
        57);
      v31 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v75, (const char (*)[20])off_25F2DD20);
      v32 = proto::ParentQuestBin::quest_var(proto_bina);
      v65 = google::protobuf::RepeatedField<int>::size(v32);
      v33 = common::milog::MiLogStream::operator<<<int,(int *)0>(v31, (const int *)&v65);
      v34 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v33, (const char (*)[20])off_25F2DD60);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, &QuestExcelConfigMgr::QUEST_VAR_LEN);
      common::milog::MiLogStream::~MiLogStream(&v75);
      result = -1;
    }
  }
LABEL_47:
  if ( v76 == (char *)v2 )
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

// Line 95: range 0000000016CD233E-0000000016CD2CEB
int32_t __cdecl ParentQuest::toBin(const ParentQuest *const this, proto::ParentQuestBin *proto_bin)
{
  common::milog::MiLogStream *v2; // rax
  int *v4; // rax
  google::protobuf::int32 *v5; // rdx
  google::protobuf::RepeatedField<unsigned int> *v6; // rax
  std::map<unsigned int,data::QuestState>::const_iterator __for_begin; // [rsp+18h] [rbp-C8h] BYREF
  std::map<unsigned int,data::QuestState>::const_iterator __for_end; // [rsp+20h] [rbp-C0h] BYREF
  const std::map<unsigned int,data::QuestState> *__for_range; // [rsp+28h] [rbp-B8h]
  proto::ParentQuestRandomInfoBin *proto_random_info; // [rsp+30h] [rbp-B0h]
  const std::vector<int> *__for_range_0; // [rsp+38h] [rbp-A8h]
  const std::map<unsigned int,unsigned int> *__for_range_1; // [rsp+40h] [rbp-A0h]
  const std::unordered_map<unsigned int,ParentQuestInferenceWordData> *__for_range_2; // [rsp+48h] [rbp-98h]
  const std::pair<unsigned int const,ParentQuestInferenceWordData> *v14; // [rsp+50h] [rbp-90h]
  std::tuple_element<0,const std::pair<unsigned int const,ParentQuestInferenceWordData> >::type *word_id; // [rsp+58h] [rbp-88h]
  std::tuple_element<1,const std::pair<unsigned int const,ParentQuestInferenceWordData> >::type *word_data; // [rsp+60h] [rbp-80h]
  proto::ParentQuestInferenceWordBin *word_bin; // [rsp+68h] [rbp-78h]
  const std::pair<unsigned int const,unsigned int> *v18; // [rsp+70h] [rbp-70h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *key; // [rsp+78h] [rbp-68h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *value; // [rsp+80h] [rbp-60h]
  proto::Uint32PairBin *pair_bin_0; // [rsp+88h] [rbp-58h]
  const std::pair<unsigned int const,data::QuestState> *v22; // [rsp+90h] [rbp-50h]
  std::tuple_element<0,const std::pair<unsigned int const,data::QuestState> >::type *quest_id; // [rsp+98h] [rbp-48h]
  std::tuple_element<1,const std::pair<unsigned int const,data::QuestState> >::type *quest_state; // [rsp+A0h] [rbp-40h]
  proto::Uint32PairBin *pair_bin; // [rsp+A8h] [rbp-38h]
  common::milog::MiLogStream v26; // [rsp+B0h] [rbp-30h] BYREF

  if ( *(char *)(((unsigned __int64)&this->is_random_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_random_);
  proto::ParentQuestBin::set_is_random(proto_bin, this->is_random_);
  if ( *(_BYTE *)(((unsigned __int64)&this->parent_quest_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->parent_quest_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->parent_quest_id_);
  }
  proto::ParentQuestBin::set_parent_quest_id(proto_bin, this->parent_quest_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->total_finish_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->total_finish_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->total_finish_count_);
  }
  proto::ParentQuestBin::set_total_finish_count(proto_bin, this->total_finish_count_);
  if ( *(_BYTE *)(((unsigned __int64)&this->today_finish_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->today_finish_count_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->today_finish_count_);
  }
  proto::ParentQuestBin::set_today_finish_count(proto_bin, this->today_finish_count_);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_finish_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_finish_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_finish_time_);
  }
  proto::ParentQuestBin::set_last_finish_time(proto_bin, this->last_finish_time_);
  if ( *(_BYTE *)(((unsigned __int64)&this->accept_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->accept_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->accept_time_);
  }
  proto::ParentQuestBin::set_accept_time(proto_bin, this->accept_time_);
  __for_range = &this->child_quest_state_map_;
  __for_begin._M_node = std::map<unsigned int,data::QuestState>::begin(&this->child_quest_state_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,data::QuestState>::end(&this->child_quest_state_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v22 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::QuestState>>::operator*(&__for_begin);
    quest_id = std::get<0ul,unsigned int const,data::QuestState>(v22);
    quest_state = (std::tuple_element<1,const std::pair<unsigned int const,data::QuestState> >::type *)std::get<1ul,unsigned int const,data::QuestState>(v22);
    pair_bin = proto::ParentQuestBin::add_child_quest_state_list(proto_bin);
    if ( *(_BYTE *)(((unsigned __int64)quest_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)quest_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)quest_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(quest_id);
    }
    proto::Uint32PairBin::set_key(pair_bin, *quest_id);
    if ( *(_BYTE *)(((unsigned __int64)quest_state >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)quest_state & 7) + 3) >= *(_BYTE *)(((unsigned __int64)quest_state >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(quest_state);
    }
    proto::Uint32PairBin::set_value(pair_bin, *quest_state);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::QuestState>>::operator++(&__for_begin);
  }
  proto_random_info = proto::ParentQuestBin::mutable_random_info(proto_bin);
  if ( ParentQuestRandomInfo::toBin(&this->random_info_, proto_random_info) )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/quest/parent_quest.cpp",
      "toBin",
      113);
    v2 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v26,
           (const char (*)[43])"random_info toBin failed, parent_quest_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &this->parent_quest_id_);
    common::milog::MiLogStream::~MiLogStream(&v26);
    return -1;
  }
  else
  {
    proto::ParentQuestBin::clear_quest_var(proto_bin);
    __for_range_0 = &this->quest_var_list_;
    __for_begin._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::QuestState> >::_Base_ptr)std::vector<int>::begin(&this->quest_var_list_)._M_current;
    __for_end._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::QuestState> >::_Base_ptr)std::vector<int>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<int const*,std::vector<int>>(
              (const __gnu_cxx::__normal_iterator<int const*,std::vector<int> > *)&__for_begin,
              (const __gnu_cxx::__normal_iterator<int const*,std::vector<int> > *)&__for_end) )
    {
      v4 = (int *)__gnu_cxx::__normal_iterator<int const*,std::vector<int>>::operator*((const __gnu_cxx::__normal_iterator<int const*,std::vector<int> > *const)&__for_begin);
      v5 = v4;
      if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v4);
      }
      proto::ParentQuestBin::add_quest_var(proto_bin, *v5);
      __gnu_cxx::__normal_iterator<int const*,std::vector<int>>::operator++((__gnu_cxx::__normal_iterator<int const*,std::vector<int> > *const)&__for_begin);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->reward_index_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reward_index_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->reward_index_);
    }
    proto::ParentQuestBin::set_reward_index(proto_bin, this->reward_index_);
    if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->state_);
    }
    proto::ParentQuestBin::set_state(proto_bin, this->state_);
    __for_range_1 = &this->time_var_map_;
    __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&this->time_var_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,unsigned int>::end(__for_range_1)._M_node;
    while ( std::operator!=(
              (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_begin,
              (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_end) )
    {
      v18 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin);
      key = std::get<0ul,unsigned int const,unsigned int>(v18);
      value = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v18);
      pair_bin_0 = proto::ParentQuestBin::add_time_var_list(proto_bin);
      if ( *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)key & 7) + 3) >= *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(key);
      }
      proto::Uint32PairBin::set_key(pair_bin_0, *key);
      if ( *(_BYTE *)(((unsigned __int64)value >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)value & 7) + 3) >= *(_BYTE *)(((unsigned __int64)value >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(value);
      }
      proto::Uint32PairBin::set_value(pair_bin_0, *value);
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin);
    }
    __for_range_2 = &this->unlock_inference_word_map_;
    __for_begin._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::QuestState> >::_Base_ptr)std::unordered_map<unsigned int,ParentQuestInferenceWordData>::begin(&this->unlock_inference_word_map_)._M_cur;
    __for_end._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::QuestState> >::_Base_ptr)std::unordered_map<unsigned int,ParentQuestInferenceWordData>::end(__for_range_2)._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,ParentQuestInferenceWordData>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,ParentQuestInferenceWordData>,false> *)&__for_begin,
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,ParentQuestInferenceWordData>,false> *)&__for_end) )
    {
      v14 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,ParentQuestInferenceWordData>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,ParentQuestInferenceWordData>,false,false> *const)&__for_begin);
      word_id = std::get<0ul,unsigned int const,ParentQuestInferenceWordData>(v14);
      word_data = (std::tuple_element<1,const std::pair<unsigned int const,ParentQuestInferenceWordData> >::type *)std::get<1ul,unsigned int const,ParentQuestInferenceWordData>(v14);
      word_bin = proto::ParentQuestBin::add_unlock_inference_word_list(proto_bin);
      if ( *(_BYTE *)(((unsigned __int64)word_data >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)word_data & 7) + 3) >= *(_BYTE *)(((unsigned __int64)word_data >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(word_data);
      }
      proto::ParentQuestInferenceWordBin::set_word_id(word_bin, word_data->word_id);
      if ( *(_BYTE *)(((unsigned __int64)&word_data->is_associate >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)word_data + 5) & 7) >= *(_BYTE *)(((unsigned __int64)&word_data->is_associate >> 3)
                                                              + 0x7FFF8000) )
      {
        __asan_report_load1(&word_data->is_associate);
      }
      proto::ParentQuestInferenceWordBin::set_is_associate(word_bin, word_data->is_associate);
      if ( *(_BYTE *)(((unsigned __int64)&word_data->is_interpret >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)word_data + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&word_data->is_interpret >> 3)
                                                              + 0x7FFF8000) )
      {
        __asan_report_load1(&word_data->is_interpret);
      }
      proto::ParentQuestInferenceWordBin::set_is_interpret(word_bin, word_data->is_interpret);
      if ( *(_BYTE *)(((unsigned __int64)&word_data->is_submit >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)word_data + 6) & 7) >= *(_BYTE *)(((unsigned __int64)&word_data->is_submit >> 3)
                                                              + 0x7FFF8000) )
      {
        __asan_report_load1(&word_data->is_submit);
      }
      proto::ParentQuestInferenceWordBin::set_is_submit(word_bin, word_data->is_submit);
      if ( *(_BYTE *)(((unsigned __int64)&word_data->unlock_by_word_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)word_data + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&word_data->unlock_by_word_id >> 3)
                                                                + 0x7FFF8000) )
      {
        __asan_report_load4(&word_data->unlock_by_word_id);
      }
      proto::ParentQuestInferenceWordBin::set_unlock_by_word_id(word_bin, word_data->unlock_by_word_id);
      std::__detail::_Node_const_iterator<std::pair<unsigned int const,ParentQuestInferenceWordData>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,ParentQuestInferenceWordData>,false,false> *const)&__for_begin);
    }
    v6 = proto::ParentQuestBin::mutable_unlock_inference_conclusion_list(proto_bin);
    common::tools::MiscUtils::setToRepeated<std::set<unsigned int>,unsigned int>(
      &this->unlock_inference_conclusion_set_,
      v6);
    return 0;
  }
};

// Line 146: range 0000000016CD2CEC-0000000016CD35A3
int32_t __cdecl ParentQuest::toClient(const ParentQuest *const this, proto::ParentQuest *proto_parent_quest)
{
  bool v2; // dl
  uint32_t RandomQuestConfigId; // eax
  common::milog::MiLogStream *v4; // rax
  QuestExcelConfigMgr *p_quest_config_mgr; // rcx
  int *v7; // rax
  google::protobuf::int32 *v8; // rdx
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type v9; // ebx
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *v10; // rsi
  unsigned int *v11; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v12; // rdx
  char v13; // cl
  google::protobuf::RepeatedPtrField<proto::InferencePageInfo> *v14; // rdx
  std::map<unsigned int,data::QuestState>::const_iterator __for_begin; // [rsp+18h] [rbp-B8h] BYREF
  std::map<unsigned int,data::QuestState>::const_iterator __for_end; // [rsp+20h] [rbp-B0h] BYREF
  const std::map<unsigned int,data::QuestState> *__for_range; // [rsp+28h] [rbp-A8h]
  const data::MainQuestExcelConfig *quest_config_ptr; // [rsp+30h] [rbp-A0h]
  proto::ParentQuestRandomInfo *proto_random_info; // [rsp+38h] [rbp-98h]
  const std::vector<int> *__for_range_0; // [rsp+40h] [rbp-90h]
  const std::map<unsigned int,unsigned int> *__for_range_1; // [rsp+48h] [rbp-88h]
  const std::pair<unsigned int const,unsigned int> *v23; // [rsp+50h] [rbp-80h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *key; // [rsp+58h] [rbp-78h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *value; // [rsp+60h] [rbp-70h]
  google::protobuf::Map<unsigned int,unsigned int> *time_var_map; // [rsp+68h] [rbp-68h]
  const std::pair<unsigned int const,data::QuestState> *v27; // [rsp+70h] [rbp-60h]
  std::tuple_element<0,const std::pair<unsigned int const,data::QuestState> >::type *child_quest_id; // [rsp+78h] [rbp-58h]
  std::tuple_element<1,const std::pair<unsigned int const,data::QuestState> >::type *child_quest_state; // [rsp+80h] [rbp-50h]
  proto::ChildQuest *proto_child_quest; // [rsp+88h] [rbp-48h]
  std::shared_ptr<Config> v31; // [rsp+90h] [rbp-40h] BYREF
  common::milog::MiLogStream v32; // [rsp+A0h] [rbp-30h] BYREF

  v2 = !std::map<unsigned int,data::QuestState>::empty(&this->child_quest_state_map_);
  proto::ParentQuest::set_is_finished(proto_parent_quest, v2);
  if ( *(char *)(((unsigned __int64)&this->is_random_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_random_);
  proto::ParentQuest::set_is_random(proto_parent_quest, this->is_random_);
  if ( *(_BYTE *)(((unsigned __int64)&this->parent_quest_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->parent_quest_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->parent_quest_id_);
  }
  proto::ParentQuest::set_parent_quest_id(proto_parent_quest, this->parent_quest_id_);
  __for_range = &this->child_quest_state_map_;
  __for_begin._M_node = std::map<unsigned int,data::QuestState>::begin(&this->child_quest_state_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,data::QuestState>::end(&this->child_quest_state_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v27 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::QuestState>>::operator*(&__for_begin);
    child_quest_id = std::get<0ul,unsigned int const,data::QuestState>(v27);
    child_quest_state = (std::tuple_element<1,const std::pair<unsigned int const,data::QuestState> >::type *)std::get<1ul,unsigned int const,data::QuestState>(v27);
    proto_child_quest = proto::ParentQuest::add_child_quest_list(proto_parent_quest);
    if ( *(_BYTE *)(((unsigned __int64)child_quest_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)child_quest_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)child_quest_id >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_load4(child_quest_id);
    }
    proto::ChildQuest::set_quest_id(proto_child_quest, *child_quest_id);
    if ( *(_BYTE *)(((unsigned __int64)child_quest_state >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)child_quest_state & 7) + 3) >= *(_BYTE *)(((unsigned __int64)child_quest_state >> 3)
                                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(child_quest_state);
    }
    proto::ChildQuest::set_state(proto_child_quest, *child_quest_state);
    if ( *(char *)(((unsigned __int64)&this->is_random_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->is_random_);
    if ( this->is_random_ )
    {
      if ( *(_BYTE *)(((unsigned __int64)child_quest_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)child_quest_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)child_quest_id >> 3)
                                                                         + 0x7FFF8000) )
      {
        __asan_report_load4(child_quest_id);
      }
      RandomQuestConfigId = ParentQuest::findRandomQuestConfigId(this, *child_quest_id);
      proto::ChildQuest::set_quest_config_id(proto_child_quest, RandomQuestConfigId);
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::QuestState>>::operator++(&__for_begin);
  }
  if ( *(char *)(((unsigned __int64)&this->is_random_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_random_);
  if ( this->is_random_ )
  {
    proto_random_info = proto::ParentQuest::mutable_random_info(proto_parent_quest);
    if ( ParentQuestRandomInfo::toClient(&this->random_info_, proto_random_info) )
    {
      common::milog::MiLogStream::create(
        &v32,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/quest/parent_quest.cpp",
        "toClient",
        167);
      v4 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
             &v32,
             (const char (*)[46])"random_info toClient failed, parent_quest_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->parent_quest_id_);
      common::milog::MiLogStream::~MiLogStream(&v32);
      return -1;
    }
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v31);
    p_quest_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v31)->design_config.txt_config_mgr.quest_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->parent_quest_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->parent_quest_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->parent_quest_id_);
    }
    quest_config_ptr = data::QuestExcelConfigMgrBase::findMainQuestExcelConfig(
                         p_quest_config_mgr,
                         this->parent_quest_id_);
    std::shared_ptr<Config>::~shared_ptr(&v31);
    if ( !quest_config_ptr )
    {
      common::milog::MiLogStream::create(
        &v32,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/quest/parent_quest.cpp",
        "toClient",
        177);
      common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
        &v32,
        (const char (*)[25])"parent_quest_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v32);
      return -1;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->state_);
    }
    if ( this->state_ == PARENT_QUEST_STATE_NONE )
    {
      if ( *(_BYTE *)(((unsigned __int64)&quest_config_ptr->video_key >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      proto::ParentQuest::set_video_key(proto_parent_quest, quest_config_ptr->video_key);
    }
  }
  __for_range_0 = &this->quest_var_list_;
  __for_begin._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::QuestState> >::_Base_ptr)std::vector<int>::begin(&this->quest_var_list_)._M_current;
  __for_end._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::QuestState> >::_Base_ptr)std::vector<int>::end(__for_range_0)._M_current;
  while ( __gnu_cxx::operator!=<int const*,std::vector<int>>(
            (const __gnu_cxx::__normal_iterator<int const*,std::vector<int> > *)&__for_begin,
            (const __gnu_cxx::__normal_iterator<int const*,std::vector<int> > *)&__for_end) )
  {
    v7 = (int *)__gnu_cxx::__normal_iterator<int const*,std::vector<int>>::operator*((const __gnu_cxx::__normal_iterator<int const*,std::vector<int> > *const)&__for_begin);
    v8 = v7;
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v7);
    }
    proto::ParentQuest::add_quest_var(proto_parent_quest, *v8);
    __gnu_cxx::__normal_iterator<int const*,std::vector<int>>::operator++((__gnu_cxx::__normal_iterator<int const*,std::vector<int> > *const)&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->state_);
  }
  proto::ParentQuest::set_parent_quest_state(proto_parent_quest, this->state_);
  if ( *(_BYTE *)(((unsigned __int64)&this->quest_var_seq_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->quest_var_seq_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->quest_var_seq_);
  }
  proto::ParentQuest::set_quest_var_seq(proto_parent_quest, this->quest_var_seq_);
  __for_range_1 = &this->time_var_map_;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&this->time_var_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(__for_range_1)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_begin,
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_end) )
  {
    v23 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin);
    key = std::get<0ul,unsigned int const,unsigned int>(v23);
    value = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v23);
    time_var_map = proto::ParentQuest::mutable_time_var_map(proto_parent_quest);
    if ( *(_BYTE *)(((unsigned __int64)value >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)value & 7) + 3) >= *(_BYTE *)(((unsigned __int64)value >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(value);
    }
    v9 = *value;
    v10 = key;
    v11 = google::protobuf::Map<unsigned int,unsigned int>::operator[](time_var_map, key);
    v12 = v11;
    v13 = *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000);
    if ( v13 != 0 && (char)(((unsigned __int8)v11 & 7) + 3) >= v13 )
    {
      LOBYTE(v10) = v13 != 0;
      __asan_report_store4(v11, v10, v11);
    }
    *v12 = v9;
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin);
  }
  v14 = proto::ParentQuest::mutable_inference_page_list(proto_parent_quest);
  ParentQuest::fillInferencePageInfo(this, v14);
  return 0;
};

// Line 205: range 0000000016CD35A4-0000000016CD36E3
int32_t __cdecl ParentQuest::checkAndInit(ParentQuest *const this)
{
  ParentQuestRandomInfo *p_random_info; // rcx
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream v4; // [rsp+10h] [rbp-30h] BYREF

  if ( *(char *)(((unsigned __int64)&this->is_random_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_random_);
  if ( !this->is_random_ )
    return 0;
  p_random_info = &this->random_info_;
  if ( *(_BYTE *)(((unsigned __int64)&this->parent_quest_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->parent_quest_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->parent_quest_id_);
  }
  if ( !ParentQuestRandomInfo::init(p_random_info, this->parent_quest_id_) )
    return 0;
  common::milog::MiLogStream::create(
    &v4,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/quest/parent_quest.cpp",
    "checkAndInit",
    210);
  v2 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
         &v4,
         (const char (*)[42])"random_info init failed, parent_quest_id:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &this->parent_quest_id_);
  common::milog::MiLogStream::~MiLogStream(&v4);
  return -1;
};

// Line 219: range 0000000016CD36E4-0000000016CD3871
__int64 __fastcall ParentQuest::getChildQuestState(ParentQuest *const this, uint32_t child_quest_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,data::QuestState> >::pointer v6; // rdx
  data::QuestState *p_second; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,data::QuestState> >::_Self __y; // [rsp+18h] [rbp-88h] BYREF
  char v9[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 18 child_quest_id:218 64 8 6 it:220";
  *(_QWORD *)(v2 + 16) = ParentQuest::getChildQuestState;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = child_quest_id;
  *(std::map<unsigned int,data::QuestState>::iterator *)(v2 + 64) = std::map<unsigned int,data::QuestState>::find(
                                                                      &this->child_quest_state_map_,
                                                                      (const std::map<unsigned int,data::QuestState>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,data::QuestState>::end(&this->child_quest_state_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,data::QuestState> >::_Self *)(v2 + 64),
         &__y) )
  {
    result = 0LL;
  }
  else
  {
    v6 = std::_Rb_tree_iterator<std::pair<unsigned int const,data::QuestState>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,data::QuestState> > *const)(v2 + 64));
    p_second = &v6->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    result = (unsigned int)v6->second;
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

// Line 232: range 0000000016CD3872-0000000016CD3990
uint32_t __cdecl ParentQuest::findRandomQuestConfigId(const ParentQuest *const this, uint32_t quest_id)
{
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v2; // rax
  std::map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  const std::map<unsigned int,unsigned int> *__for_range; // [rsp+20h] [rbp-20h]
  const std::pair<unsigned int const,unsigned int> *v7; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *config_id; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *run_time_id; // [rsp+38h] [rbp-8h]

  __for_range = &this->random_info_.quest_id_map;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&this->random_info_.quest_id_map)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(&this->random_info_.quest_id_map)._M_node;
  while ( 1 )
  {
    if ( !std::operator!=(&__for_begin, &__for_end) )
      return 0;
    v7 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
    config_id = std::get<0ul,unsigned int const,unsigned int>(v7);
    v2 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v7);
    run_time_id = v2;
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v2);
    }
    if ( quest_id == *run_time_id )
      break;
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)config_id >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)config_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)config_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(config_id);
  }
  return *config_id;
};

// Line 244: range 0000000016CD3992-0000000016CD39A5
const ParentQuestScriptConfig *__cdecl ParentQuest::findRandomParentQuestScriptConfig(const ParentQuest *const this)
{
  return &this->random_info_.parent_quest_script_config;
};

// Line 249: range 0000000016CD39A6-0000000016CD39EC
const QuestNpcScriptConfig *__cdecl ParentQuest::findRandomQuestNpcData(
        const ParentQuest *const this,
        uint32_t quest_id,
        uint32_t npc_id)
{
  uint32_t RandomQuestConfigId; // eax

  RandomQuestConfigId = ParentQuest::findRandomQuestConfigId(this, quest_id);
  return ParentQuestScriptConfig::findNpcConfig(
           &this->random_info_.parent_quest_script_config,
           RandomQuestConfigId,
           npc_id);
};

// Line 254: range 0000000016CD39EE-0000000016CD3A2A
const QuestAvatarScriptConfig *__cdecl ParentQuest::findRandomQuestAvatarData(
        const ParentQuest *const this,
        uint32_t quest_id)
{
  uint32_t RandomQuestConfigId; // eax

  RandomQuestConfigId = ParentQuest::findRandomQuestConfigId(this, quest_id);
  return ParentQuestScriptConfig::findAvatarConfig(&this->random_info_.parent_quest_script_config, RandomQuestConfigId);
};

// Line 259: range 0000000016CD3A2C-0000000016CD3A68
const std::vector<int> *__cdecl ParentQuest::findRandomQuestVarData(const ParentQuest *const this, uint32_t quest_id)
{
  uint32_t RandomQuestConfigId; // eax

  RandomQuestConfigId = ParentQuest::findRandomQuestConfigId(this, quest_id);
  return ParentQuestScriptConfig::findQuestVar(&this->random_info_.parent_quest_script_config, RandomQuestConfigId);
};

// Line 264: range 0000000016CD3A6A-0000000016CD3ABB
void __cdecl ParentQuest::clearChildQuestState(ParentQuest *const this, bool is_notify)
{
  bool is_finished; // [rsp+1Fh] [rbp-1h]

  is_finished = !std::map<unsigned int,data::QuestState>::empty(&this->child_quest_state_map_);
  std::map<unsigned int,data::QuestState>::clear(&this->child_quest_state_map_);
  if ( is_finished && is_notify )
    ParentQuest::notifyParentQuest(this);
};

// Line 278: range 0000000016CD3ABC-0000000016CD3BAC
void __fastcall ParentQuest::delChildQuestState(ParentQuest *const this, uint32_t child_quest_id)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 18 child_quest_id:277";
  *(_QWORD *)(v2 + 16) = ParentQuest::delChildQuestState;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = child_quest_id;
  if ( common::tools::MiscUtils::isContains<std::map<unsigned int,data::QuestState>,unsigned int>(
         &this->child_quest_state_map_,
         (const unsigned int *)(v2 + 32)) )
  {
    std::map<unsigned int,data::QuestState>::erase(
      &this->child_quest_state_map_,
      (const std::map<unsigned int,data::QuestState>::key_type *)(v2 + 32));
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

// Line 286: range 0000000016CD3BAE-0000000016CD3CB6
int32_t __cdecl ParentQuest::onAccept(ParentQuest *const this)
{
  common::milog::MiLogStream *v1; // rax
  uint32_t Now; // edi
  __int64 v4; // rdx
  common::milog::MiLogStream v6; // [rsp+10h] [rbp-30h] BYREF

  if ( ParentQuest::checkAndInit(this) )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/quest/parent_quest.cpp",
      "onAccept",
      289);
    v1 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v6,
           (const char (*)[43])"parent quest init failed, parent_quest_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, &this->parent_quest_id_);
    common::milog::MiLogStream::~MiLogStream(&v6);
    return -1;
  }
  else
  {
    ParentQuest::initInferenceData(this);
    Now = common::tools::TimeUtils::getNow();
    v4 = (*(_BYTE *)(((unsigned __int64)&this->accept_time_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->accept_time_ >> 3) + 0x7FFF8000));
    if ( (_BYTE)v4 )
    {
      Now = (_DWORD)this + 36;
      __asan_report_store4(&this->accept_time_, (((_BYTE)this + 36) & 7u) + 3, v4);
    }
    this->accept_time_ = Now;
    return 0;
  }
};

// Line 298: range 0000000016CD3CB8-0000000016CD48D0
// local variable allocation has failed, the output may be wrong!
void __cdecl ParentQuest::finish(ParentQuest *const this, bool is_notify)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  __int64 Now; // rsi
  __int64 v9; // rsi
  std::vector<int>::reference v10; // rax
  _DWORD *v11; // rdx
  char v12; // cl
  LuaConfigMgr *p_lua_config_mgr; // rcx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  Player *v16; // rax
  PlayerQuestComp *QuestComp; // rcx
  common::milog::MiLogStream *v18; // rax
  proto_log::PlayerLogMissionType v19; // eax
  Player *v20; // rax
  PlayerQuestComp *p_accept_time; // rdi
  uint32_t accept_time; // ecx
  std::vector<unsigned int>::size_type reward_index; // r14
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  std::vector<unsigned int> *p_reward_id_list; // rcx
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v28; // rax
  uint32_t *v29; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  Player *v31; // rax
  PlayerItemComp *ItemComp; // rax
  Player *v33; // rax
  PlayerBasicComp *BasicComp; // rcx
  Player *v35; // rax
  PlayerEventComp *EventComp; // r14
  char __args_0[5]; // [rsp+1Fh] [rbp-111h] BYREF
  proto_log::PlayerLogMissionType log_mission_type; // [rsp+24h] [rbp-10Ch]
  uint32_t reward_id; // [rsp+28h] [rbp-108h]
  data::ItemLimitType item_limit_type; // [rsp+2Ch] [rbp-104h]
  const ParentQuestScriptConfig *parent_script_config; // [rsp+30h] [rbp-100h]
  const data::MainQuestExcelConfig *parent_config_ptr; // [rsp+38h] [rbp-F8h]
  std::shared_ptr<FinishParentQuestEvent> __r; // [rsp+40h] [rbp-F0h] BYREF
  std::shared_ptr<Config> v46; // [rsp+50h] [rbp-E0h] BYREF
  common::milog::MiLogStream v47; // [rsp+60h] [rbp-D0h] BYREF
  char v48[176]; // [rsp+80h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v48;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 14 player_ptr:335 64 24 17 action_reason:364";
  *(_QWORD *)(v2 + 16) = ParentQuest::finish;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->state_);
  }
  if ( this->state_ )
  {
    common::milog::MiLogStream::create(
      &v47,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/quest/parent_quest.cpp",
      "finish",
      301);
    v5 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
           &v47,
           (const char (*)[44])"parent quest state invalid,parent_quest_id:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->parent_quest_id_);
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])" state:");
    common::milog::MiLogStream::operator<<<data::ParentQuestState,(data::ParentQuestState*)0>(v7, &this->state_);
    common::milog::MiLogStream::~MiLogStream(&v47);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->state_, is_notify, &this->state_);
    }
    this->state_ = PARENT_QUEST_STATE_FINISHED;
    ParentQuest::incTotalFinishCount(this);
    ParentQuest::incTodayFinishCount(this);
    ParentQuest::recordChildQuestState(this);
    ParentQuest::clearInferenceData(this);
    Now = (unsigned int)common::tools::TimeUtils::getNow();
    if ( *(_BYTE *)(((unsigned __int64)&this->last_finish_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->last_finish_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->last_finish_time_, Now, &this->last_finish_time_);
    }
    this->last_finish_time_ = Now;
    *(_DWORD *)&__args_0[1] = 0;
    while ( *(int *)&__args_0[1] < std::vector<int>::size(&this->quest_var_list_) )
    {
      v9 = *(int *)&__args_0[1];
      v10 = std::vector<int>::operator[](&this->quest_var_list_, *(int *)&__args_0[1]);
      v11 = v10;
      v12 = *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000);
      if ( v12 != 0 && (char)(((unsigned __int8)v10 & 7) + 3) >= v12 )
      {
        LOBYTE(v9) = v12 != 0;
        __asan_report_store4(v10, v9, v10);
      }
      *v11 = 0;
      ++*(_DWORD *)&__args_0[1];
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v46);
    p_lua_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v46)->design_config.lua_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->parent_quest_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->parent_quest_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->parent_quest_id_);
    }
    parent_script_config = LuaConfigMgr::findParentQuestScriptConfig(p_lua_config_mgr, this->parent_quest_id_);
    std::shared_ptr<Config>::~shared_ptr(&v46);
    if ( parent_script_config )
    {
      ParentQuest::execAction(this, &parent_script_config->finish_action_vec);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v47,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/quest/parent_quest.cpp",
        "finish",
        326);
      v14 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
              &v47,
              (const char (*)[52])"findParentQuestScriptConfig failed,parent_quest_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &this->parent_quest_id_);
      common::milog::MiLogStream::~MiLogStream(&v47);
    }
    if ( is_notify )
      ParentQuest::notifyParentQuest(this);
    ParentQuest::getOwner((ParentQuest *const)(v2 + 32));
    if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 32), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v47,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/quest/parent_quest.cpp",
        "finish",
        338);
      v15 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
              &v47,
              (const char (*)[41])"ParentQuest is nullptr, parent_quest_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &this->parent_quest_id_);
      common::milog::MiLogStream::~MiLogStream(&v47);
    }
    else
    {
      v16 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      QuestComp = Player::getQuestComp(v16);
      if ( *(_BYTE *)(((unsigned __int64)&this->parent_quest_id_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->parent_quest_id_ >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load4(&this->parent_quest_id_);
      }
      parent_config_ptr = PlayerQuestComp::findPlayerParentQuestExcelConfig(QuestComp, this->parent_quest_id_);
      if ( parent_config_ptr )
      {
        if ( *(char *)(((unsigned __int64)&this->is_random_ >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(&this->is_random_);
        if ( this->is_random_ )
          v19 = PLAYER_LOG_MISSION_RANDOM_QUEST;
        else
          v19 = PLAYER_LOG_MISSION_MAIN_QUEST;
        log_mission_type = v19;
        v20 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        p_accept_time = Player::getQuestComp(v20);
        if ( *(_BYTE *)(((unsigned __int64)&this->accept_time_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->accept_time_ >> 3) + 0x7FFF8000) )
        {
          p_accept_time = (PlayerQuestComp *)&this->accept_time_;
          __asan_report_load4(&this->accept_time_);
        }
        accept_time = this->accept_time_;
        if ( *(_BYTE *)(((unsigned __int64)&this->parent_quest_id_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->parent_quest_id_ >> 3)
                                                              + 0x7FFF8000) )
        {
          p_accept_time = (PlayerQuestComp *)&this->parent_quest_id_;
          __asan_report_load4(&this->parent_quest_id_);
        }
        PlayerQuestComp::logPlayerMissionFinish(p_accept_time, log_mission_type, this->parent_quest_id_, accept_time);
        if ( !std::vector<unsigned int>::empty(&parent_config_ptr->reward_id_list) )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->reward_index_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reward_index_ >> 3)
                                                                 + 0x7FFF8000) )
          {
            __asan_report_load4(&this->reward_index_);
          }
          reward_index = this->reward_index_;
          if ( reward_index < std::vector<unsigned int>::size(&parent_config_ptr->reward_id_list) )
          {
            p_reward_id_list = &parent_config_ptr->reward_id_list;
            if ( *(_BYTE *)(((unsigned __int64)&this->reward_index_ >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reward_index_ >> 3)
                                                                   + 0x7FFF8000) )
            {
              __asan_report_load4(&this->reward_index_);
            }
            v28 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](p_reward_id_list, this->reward_index_);
            v29 = v28;
            if ( *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v28 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v28);
            }
            reward_id = *v29;
            if ( reward_id )
            {
              ServiceBox::findService<GameserverService>();
              GameserverService::getConfig((GameserverService *const)&v46);
              v30 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v46);
              item_limit_type = QuestExcelConfigMgr::getParentQuestItemLimitType(
                                  &v30->design_config.txt_config_mgr,
                                  parent_config_ptr);
              std::shared_ptr<Config>::~shared_ptr(&v46);
              ActionReason::ActionReason((ActionReason *const)(v2 + 64), ACTION_REASON_QUEST_REWARD, item_limit_type);
              if ( *(_BYTE *)(((unsigned __int64)&this->parent_quest_id_ >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->parent_quest_id_ >> 3)
                                                                    + 0x7FFF8000) )
              {
                __asan_report_load4(&this->parent_quest_id_);
              }
              *(_DWORD *)(v2 + 72) = this->parent_quest_id_;
              v31 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
              ItemComp = Player::getItemComp(v31);
              PlayerItemComp::grantReward(ItemComp, reward_id, (const ActionReason *)(v2 + 64), 0LL);
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v47,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/quest/parent_quest.cpp",
              "finish",
              356);
            v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    &v47,
                    (const char (*)[16])" reward_index_:");
            v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &this->reward_index_);
            v26 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                    v25,
                    (const char (*)[27])" overflow, reward_id_list:");
            common::milog::MiLogStream::operator<<<unsigned int>(v26, &parent_config_ptr->reward_id_list);
            common::milog::MiLogStream::~MiLogStream(&v47);
          }
        }
        v33 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        BasicComp = Player::getBasicComp(v33);
        if ( *(_BYTE *)(((unsigned __int64)&this->parent_quest_id_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->parent_quest_id_ >> 3)
                                                              + 0x7FFF8000) )
        {
          __asan_report_load4(&this->parent_quest_id_);
        }
        PlayerBasicComp::onOpenStateCond(BasicComp, OPEN_STATE_COND_PARENT_QUEST, this->parent_quest_id_);
        v35 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        EventComp = Player::getEventComp(v35);
        __args_0[0] = ParentQuest::isRandom(this);
        common::tools::perf::make_shared<FinishParentQuestEvent,unsigned int &,bool>(
          (unsigned int *)&__r,
          (bool *)&this->parent_quest_id_,
          (unsigned int *)__args_0,
          (bool *)&this->parent_quest_id_);
        std::shared_ptr<BaseEvent>::shared_ptr<FinishParentQuestEvent,void>(
          (std::shared_ptr<BaseEvent> *const)&v46,
          &__r);
        PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v46);
        std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v46);
        std::shared_ptr<FinishParentQuestEvent>::~shared_ptr(&__r);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v47,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/quest/parent_quest.cpp",
          "finish",
          345);
        v18 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
                &v47,
                (const char (*)[58])"findPlayerParentQuestExcelConfig failed, parent_quest_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &this->parent_quest_id_);
        common::milog::MiLogStream::~MiLogStream(&v47);
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 32));
  }
  if ( v48 == (char *)v2 )
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

// Line 378: range 0000000016CD48D2-0000000016CD4E1D
// local variable allocation has failed, the output may be wrong!
void __cdecl ParentQuest::fail(ParentQuest *const this, bool is_notify)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  LuaConfigMgr *p_lua_config_mgr; // rcx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  Player *v11; // rax
  PlayerEventComp *EventComp; // r14
  char __args_0[9]; // [rsp+17h] [rbp-B9h] BYREF
  std::shared_ptr<FailParentQuestEvent> __r; // [rsp+20h] [rbp-B0h] BYREF
  std::shared_ptr<Config> v15; // [rsp+30h] [rbp-A0h] BYREF
  common::milog::MiLogStream v16; // [rsp+40h] [rbp-90h] BYREF
  char v17[112]; // [rsp+60h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 player_ptr:397";
  *(_QWORD *)(v2 + 16) = ParentQuest::fail;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->state_);
  }
  if ( this->state_ )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/quest/parent_quest.cpp",
      "fail",
      381);
    v5 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
           &v16,
           (const char (*)[44])"parent quest state invalid,parent_quest_id:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->parent_quest_id_);
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])" state:");
    common::milog::MiLogStream::operator<<<data::ParentQuestState,(data::ParentQuestState*)0>(v7, &this->state_);
    common::milog::MiLogStream::~MiLogStream(&v16);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->state_, is_notify, &this->state_);
    }
    this->state_ = PARENT_QUEST_STATE_FAILED;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v15);
    p_lua_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15)->design_config.lua_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->parent_quest_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->parent_quest_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->parent_quest_id_);
    }
    *(_QWORD *)&__args_0[1] = LuaConfigMgr::findParentQuestScriptConfig(p_lua_config_mgr, this->parent_quest_id_);
    std::shared_ptr<Config>::~shared_ptr(&v15);
    if ( *(_QWORD *)&__args_0[1] )
    {
      ParentQuest::execAction(this, (const std::vector<data::QuestExec> *)(*(_QWORD *)&__args_0[1] + 128LL));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/quest/parent_quest.cpp",
        "fail",
        394);
      v9 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
             &v16,
             (const char (*)[52])"findParentQuestScriptConfig failed,parent_quest_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->parent_quest_id_);
      common::milog::MiLogStream::~MiLogStream(&v16);
    }
    ParentQuest::getOwner((ParentQuest *const)(v2 + 32));
    if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 32), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/quest/parent_quest.cpp",
        "fail",
        400);
      v10 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
              &v16,
              (const char (*)[41])"ParentQuest is nullptr, parent_quest_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->parent_quest_id_);
      common::milog::MiLogStream::~MiLogStream(&v16);
    }
    else
    {
      v11 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      EventComp = Player::getEventComp(v11);
      __args_0[0] = ParentQuest::isRandom(this);
      common::tools::perf::make_shared<FailParentQuestEvent,unsigned int &,bool>(
        (unsigned int *)&__r,
        (bool *)&this->parent_quest_id_,
        (unsigned int *)__args_0,
        (bool *)&this->parent_quest_id_);
      std::shared_ptr<BaseEvent>::shared_ptr<FailParentQuestEvent,void>((std::shared_ptr<BaseEvent> *const)&v15, &__r);
      PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v15);
      std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v15);
      std::shared_ptr<FailParentQuestEvent>::~shared_ptr(&__r);
      if ( is_notify )
        ParentQuest::notifyParentQuest(this);
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 32));
  }
  if ( v17 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 412: range 0000000016CD4E1E-0000000016CD539F
// local variable allocation has failed, the output may be wrong!
void __cdecl ParentQuest::cancel(ParentQuest *const this, bool is_notify)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  LuaConfigMgr *p_lua_config_mgr; // rcx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  Player *v11; // rax
  PlayerEventComp *EventComp; // r14
  Player *v13; // rax
  PlayerAvatarComp *AvatarComp; // rax
  char __args_0[9]; // [rsp+17h] [rbp-B9h] BYREF
  std::shared_ptr<CancelParentQuestEvent> __r; // [rsp+20h] [rbp-B0h] BYREF
  std::shared_ptr<Config> v17; // [rsp+30h] [rbp-A0h] BYREF
  common::milog::MiLogStream v18; // [rsp+40h] [rbp-90h] BYREF
  char v19[112]; // [rsp+60h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 player_ptr:431";
  *(_QWORD *)(v2 + 16) = ParentQuest::cancel;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->state_);
  }
  if ( this->state_ )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/quest/parent_quest.cpp",
      "cancel",
      415);
    v5 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
           &v18,
           (const char (*)[44])"parent quest state invalid,parent_quest_id:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->parent_quest_id_);
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])" state:");
    common::milog::MiLogStream::operator<<<data::ParentQuestState,(data::ParentQuestState*)0>(v7, &this->state_);
    common::milog::MiLogStream::~MiLogStream(&v18);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->state_, is_notify, &this->state_);
    }
    this->state_ = PARENT_QUEST_STATE_CANCELED;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v17);
    p_lua_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17)->design_config.lua_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->parent_quest_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->parent_quest_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->parent_quest_id_);
    }
    *(_QWORD *)&__args_0[1] = LuaConfigMgr::findParentQuestScriptConfig(p_lua_config_mgr, this->parent_quest_id_);
    std::shared_ptr<Config>::~shared_ptr(&v17);
    if ( *(_QWORD *)&__args_0[1] )
    {
      ParentQuest::execAction(this, (const std::vector<data::QuestExec> *)(*(_QWORD *)&__args_0[1] + 152LL));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/quest/parent_quest.cpp",
        "cancel",
        428);
      v9 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
             &v18,
             (const char (*)[52])"findParentQuestScriptConfig failed,parent_quest_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->parent_quest_id_);
      common::milog::MiLogStream::~MiLogStream(&v18);
    }
    ParentQuest::getOwner((ParentQuest *const)(v2 + 32));
    if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 32), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/quest/parent_quest.cpp",
        "cancel",
        434);
      v10 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
              &v18,
              (const char (*)[41])"ParentQuest is nullptr, parent_quest_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->parent_quest_id_);
      common::milog::MiLogStream::~MiLogStream(&v18);
    }
    else
    {
      v11 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      EventComp = Player::getEventComp(v11);
      __args_0[0] = ParentQuest::isRandom(this);
      common::tools::perf::make_shared<CancelParentQuestEvent,unsigned int &,bool>(
        (unsigned int *)&__r,
        (bool *)&this->parent_quest_id_,
        (unsigned int *)__args_0,
        (bool *)&this->parent_quest_id_);
      std::shared_ptr<BaseEvent>::shared_ptr<CancelParentQuestEvent,void>((std::shared_ptr<BaseEvent> *const)&v17, &__r);
      PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v17);
      std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v17);
      std::shared_ptr<CancelParentQuestEvent>::~shared_ptr(&__r);
      if ( ParentQuest::getIsLockTeam(this) )
      {
        v13 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        AvatarComp = Player::getAvatarComp(v13);
        PlayerAvatarComp::unlockTeamAvatarByQuest(AvatarComp, CHANGE_SCENE_TEAM_REASON_QUEST);
      }
      if ( is_notify )
        ParentQuest::notifyParentQuest(this);
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 32));
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

// Line 451: range 0000000016CD53A0-0000000016CD56C4
int32_t __cdecl ParentQuest::notifyParentQuest(ParentQuest *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  common::milog::MiLogStream *v4; // rax
  int32_t v5; // r14d
  std::__shared_ptr_access<proto::FinishedParentQuestUpdateNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  proto::ParentQuest *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  Player *v9; // r14
  int32_t result; // eax
  std::shared_ptr<proto::FinishedParentQuestUpdateNotify> __r; // [rsp+20h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v1 + 8) = "2 32 16 14 player_ptr:452 64 16 14 notify_ptr:459";
  *(_QWORD *)(v1 + 16) = ParentQuest::notifyParentQuest;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  ParentQuest::getOwner((ParentQuest *const)(v1 + 32));
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v1 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/quest/parent_quest.cpp",
      "notifyParentQuest",
      455);
    v4 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
           &v12,
           (const char (*)[40])"player_ptr is nullptr, parent_quest_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->parent_quest_id_);
    common::milog::MiLogStream::~MiLogStream(&v12);
    v5 = -1;
  }
  else
  {
    common::tools::perf::make_shared<proto::FinishedParentQuestUpdateNotify>();
    v6 = std::__shared_ptr_access<proto::FinishedParentQuestUpdateNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::FinishedParentQuestUpdateNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    v7 = proto::FinishedParentQuestUpdateNotify::add_parent_quest_list(v6);
    if ( ParentQuest::toClient(this, v7) )
    {
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/quest/parent_quest.cpp",
        "notifyParentQuest",
        463);
      v8 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
             &v12,
             (const char (*)[46])"ParentQuest toClient failed, parent_quest_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->parent_quest_id_);
      common::milog::MiLogStream::~MiLogStream(&v12);
      v5 = -1;
    }
    else
    {
      v9 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      std::dynamic_pointer_cast<google::protobuf::Message const,proto::FinishedParentQuestUpdateNotify>(&__r);
      Player::sendMessage(v9, (common::minet::ConstMessagePtr *)&__r, 0LL);
      std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
      v5 = 0;
    }
    std::shared_ptr<proto::FinishedParentQuestUpdateNotify>::~shared_ptr((std::shared_ptr<proto::FinishedParentQuestUpdateNotify> *const)(v1 + 64));
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

// Line 473: range 0000000016CD56C6-0000000016CD5ACA
int32_t __cdecl ParentQuest::notifyQuestVar(ParentQuest *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  common::milog::MiLogStream *v4; // rax
  int32_t v5; // r14d
  std::__shared_ptr_access<proto::QuestUpdateQuestVarNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rcx
  __gnu_cxx::__normal_iterator<int*,std::vector<int> >::reference v7; // rax
  int32_t *v8; // rdx
  std::__shared_ptr_access<proto::QuestUpdateQuestVarNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<proto::QuestUpdateQuestVarNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rcx
  Player *v11; // r14
  int32_t result; // eax
  int32_t value; // [rsp+14h] [rbp-DCh]
  std::vector<int>::iterator __for_begin; // [rsp+18h] [rbp-D8h] BYREF
  std::vector<int>::iterator __for_end; // [rsp+20h] [rbp-D0h] BYREF
  std::vector<int> *__for_range; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<proto::QuestUpdateQuestVarNotify> __r; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v18; // [rsp+40h] [rbp-B0h] BYREF
  char v19[144]; // [rsp+60h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 14 player_ptr:474 64 16 14 notify_ptr:481";
  *(_QWORD *)(v1 + 16) = ParentQuest::notifyQuestVar;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  ParentQuest::getOwner((ParentQuest *const)(v1 + 32));
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v1 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/quest/parent_quest.cpp",
      "notifyQuestVar",
      477);
    v4 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
           &v18,
           (const char (*)[40])"player_ptr is nullptr, parent_quest_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->parent_quest_id_);
    common::milog::MiLogStream::~MiLogStream(&v18);
    v5 = -1;
  }
  else
  {
    common::tools::perf::make_shared<proto::QuestUpdateQuestVarNotify>();
    v6 = std::__shared_ptr_access<proto::QuestUpdateQuestVarNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::QuestUpdateQuestVarNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&this->parent_quest_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->parent_quest_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->parent_quest_id_);
    }
    proto::QuestUpdateQuestVarNotify::set_parent_quest_id(v6, this->parent_quest_id_);
    __for_range = &this->quest_var_list_;
    __for_begin._M_current = std::vector<int>::begin(&this->quest_var_list_)._M_current;
    __for_end._M_current = std::vector<int>::end(&this->quest_var_list_)._M_current;
    while ( __gnu_cxx::operator!=<int *,std::vector<int>>(&__for_begin, &__for_end) )
    {
      v7 = __gnu_cxx::__normal_iterator<int *,std::vector<int>>::operator*(&__for_begin);
      v8 = v7;
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v7);
      }
      value = *v8;
      v9 = std::__shared_ptr_access<proto::QuestUpdateQuestVarNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::QuestUpdateQuestVarNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      proto::QuestUpdateQuestVarNotify::add_quest_var(v9, value);
      __gnu_cxx::__normal_iterator<int *,std::vector<int>>::operator++(&__for_begin);
    }
    v10 = std::__shared_ptr_access<proto::QuestUpdateQuestVarNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::QuestUpdateQuestVarNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&this->quest_var_seq_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->quest_var_seq_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->quest_var_seq_);
    }
    proto::QuestUpdateQuestVarNotify::set_parent_quest_var_seq(v10, this->quest_var_seq_);
    v11 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    std::dynamic_pointer_cast<google::protobuf::Message const,proto::QuestUpdateQuestVarNotify>(&__r);
    Player::sendMessage(v11, (common::minet::ConstMessagePtr *)&__r, 0LL);
    std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
    v5 = 0;
    std::shared_ptr<proto::QuestUpdateQuestVarNotify>::~shared_ptr((std::shared_ptr<proto::QuestUpdateQuestVarNotify> *const)(v1 + 64));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 32));
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

// Line 494: range 0000000016CD5ACC-0000000016CD5E76
int32_t __cdecl ParentQuest::notifyQuestTimeVar(ParentQuest *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  common::milog::MiLogStream *v4; // rax
  int32_t v5; // r14d
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type v6; // r14d
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *v7; // rsi
  unsigned int *v8; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v9; // rdx
  char v10; // cl
  Player *v11; // rax
  int32_t result; // eax
  std::map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-148h] BYREF
  std::map<unsigned int,unsigned int>::iterator __for_end; // [rsp+20h] [rbp-140h] BYREF
  std::map<unsigned int,unsigned int> *__for_range; // [rsp+28h] [rbp-138h]
  const std::pair<unsigned int const,unsigned int> *v16; // [rsp+30h] [rbp-130h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *key; // [rsp+38h] [rbp-128h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *value; // [rsp+40h] [rbp-120h]
  google::protobuf::Map<unsigned int,unsigned int> *time_var_map; // [rsp+48h] [rbp-118h]
  common::milog::MiLogStream v20; // [rsp+50h] [rbp-110h] BYREF
  char v21[240]; // [rsp+70h] [rbp-F0h] BYREF

  v1 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(192LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 14 player_ptr:495 64 96 10 notify:502";
  *(_QWORD *)(v1 + 16) = ParentQuest::notifyQuestTimeVar;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862725] = -202116109;
  ParentQuest::getOwner((ParentQuest *const)(v1 + 32));
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v1 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/quest/parent_quest.cpp",
      "notifyQuestTimeVar",
      498);
    v4 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
           &v20,
           (const char (*)[40])"player_ptr is nullptr, parent_quest_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->parent_quest_id_);
    common::milog::MiLogStream::~MiLogStream(&v20);
    v5 = -1;
  }
  else
  {
    proto::QuestUpdateQuestTimeVarNotify::QuestUpdateQuestTimeVarNotify((proto::QuestUpdateQuestTimeVarNotify *const)(v1 + 64));
    __for_range = &this->time_var_map_;
    __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&this->time_var_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,unsigned int>::end(&this->time_var_map_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v16 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
      key = std::get<0ul,unsigned int const,unsigned int>(v16);
      value = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v16);
      time_var_map = proto::QuestUpdateQuestTimeVarNotify::mutable_time_var_map((proto::QuestUpdateQuestTimeVarNotify *const)(v1 + 64));
      if ( *(_BYTE *)(((unsigned __int64)value >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)value & 7) + 3) >= *(_BYTE *)(((unsigned __int64)value >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(value);
      }
      v6 = *value;
      v7 = key;
      v8 = google::protobuf::Map<unsigned int,unsigned int>::operator[](time_var_map, key);
      v9 = v8;
      v10 = *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000);
      if ( v10 != 0 && (char)(((unsigned __int8)v8 & 7) + 3) >= v10 )
      {
        LOBYTE(v7) = v10 != 0;
        __asan_report_store4(v8, v7, v8);
      }
      *v9 = v6;
      std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
    }
    v11 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    Player::sendProto(v11, (const google::protobuf::Message *)(v1 + 64));
    v5 = 0;
    proto::QuestUpdateQuestTimeVarNotify::~QuestUpdateQuestTimeVarNotify((proto::QuestUpdateQuestTimeVarNotify *const)(v1 + 64));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 32));
  result = v5;
  if ( v21 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 513: range 0000000016CD5E78-0000000016CD60B3
__int64 __fastcall ParentQuest::initRandomInfo(
        ParentQuest *const this,
        uint32_t entrance_id,
        uint32_t template_id,
        const std::vector<unsigned int> *factor_vec,
        const std::map<unsigned int,unsigned int> *quest_id_map)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r12
  __int64 v8; // rsi
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  __int64 result; // rax
  common::milog::MiLogStream v16; // [rsp+20h] [rbp-A0h] BYREF
  char v17[128]; // [rsp+40h] [rbp-80h] BYREF

  v5 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 4 15 entrance_id:512 64 4 15 template_id:512";
  *(_QWORD *)(v5 + 16) = ParentQuest::initRandomInfo;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -202116348;
  *(_DWORD *)(v5 + 48) = entrance_id;
  *(_DWORD *)(v5 + 64) = template_id;
  v8 = *(unsigned int *)(v5 + 48);
  if ( ParentQuestRandomInfo::initRandomInfo(&this->random_info_, v8, *(_DWORD *)(v5 + 64), factor_vec, quest_id_map) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/quest/parent_quest.cpp",
      "initRandomInfo",
      516);
    v9 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v16,
           (const char (*)[36])"initRandomInfo failed, entrance_id:");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v5 + 48));
    v11 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v10, (const char (*)[14])" template_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v5 + 64));
    common::milog::MiLogStream::~MiLogStream(&v16);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    if ( *(char *)(((unsigned __int64)&this->is_random_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->is_random_, v8, &this->is_random_);
    this->is_random_ = 1;
    result = 0LL;
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

// Line 526: range 0000000016CD60B4-0000000016CD60C7
data::MainQuestExcelConfig *__cdecl ParentQuest::getRandomParentExcelConfig(ParentQuest *const this)
{
  return &this->random_info_.parent_quest_config;
};

// Line 531: range 0000000016CD60C8-0000000016CD60DB
std::map<unsigned int,data::QuestExcelConfig> *__cdecl ParentQuest::getRandomQuestExcelConfigMap(
        ParentQuest *const this)
{
  return &this->random_info_.quest_config_map;
};

// Line 536: range 0000000016CD60DC-0000000016CD60ED
std::map<unsigned int,unsigned int> *__cdecl ParentQuest::getRandomQuestIdMap(ParentQuest *const this)
{
  return &this->random_info_.quest_id_map;
};

// Line 541: range 0000000016CD60EE-0000000016CD60F8
void __cdecl ParentQuest::refreshTodayFinishCount(ParentQuest *const this)
{
  ;
};

// Line 546: range 0000000016CD60FA-0000000016CD614C
void __cdecl ParentQuest::incTotalFinishCount(ParentQuest *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->total_finish_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->total_finish_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->total_finish_count_);
  }
  ++this->total_finish_count_;
};

// Line 551: range 0000000016CD614E-0000000016CD61B4
void __cdecl ParentQuest::incTodayFinishCount(ParentQuest *const this)
{
  ParentQuest::refreshTodayFinishCount(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->today_finish_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->today_finish_count_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->today_finish_count_);
  }
  ++this->today_finish_count_;
};

// Line 557: range 0000000016CD61B6-0000000016CD664A
void __cdecl ParentQuest::recordChildQuestState(ParentQuest *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  common::milog::MiLogStream *v4; // rax
  Player *v5; // rax
  PlayerQuestComp *QuestComp; // rcx
  common::milog::MiLogStream *v7; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v8; // rax
  _DWORD *v9; // rdx
  Player *v10; // rax
  uint32_t v11; // eax
  std::__shared_ptr_access<Quest,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  data::QuestState State; // r14d
  char *v14; // rsi
  std::map<unsigned int,data::QuestState>::mapped_type *v15; // rax
  data::QuestState *v16; // rdx
  char v17; // cl
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+10h] [rbp-F0h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+18h] [rbp-E8h] BYREF
  const data::MainQuestExcelConfig *parent_config_ptr; // [rsp+20h] [rbp-E0h]
  const std::vector<unsigned int> *__for_range; // [rsp+28h] [rbp-D8h]
  common::milog::MiLogStream v22; // [rsp+30h] [rbp-D0h] BYREF
  char v23[176]; // [rsp+50h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 4 12 quest_id:573 64 16 14 player_ptr:558 96 16 13 quest_ptr:575";
  *(_QWORD *)(v1 + 16) = ParentQuest::recordChildQuestState;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -219021312;
  v3[536862723] = -202178560;
  ParentQuest::getOwner((ParentQuest *const)(v1 + 64));
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v1 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/quest/parent_quest.cpp",
      "recordChildQuestState",
      561);
    v4 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
           &v22,
           (const char (*)[41])"ParentQuest is nullptr, parent_quest_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->parent_quest_id_);
    common::milog::MiLogStream::~MiLogStream(&v22);
  }
  else
  {
    v5 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    QuestComp = Player::getQuestComp(v5);
    if ( *(_BYTE *)(((unsigned __int64)&this->parent_quest_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->parent_quest_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->parent_quest_id_);
    }
    parent_config_ptr = PlayerQuestComp::findPlayerParentQuestExcelConfig(QuestComp, this->parent_quest_id_);
    if ( parent_config_ptr )
    {
      std::map<unsigned int,data::QuestState>::clear(&this->child_quest_state_map_);
      __for_range = &parent_config_ptr->child_quest_list;
      __for_begin._M_current = std::vector<unsigned int>::begin(&parent_config_ptr->child_quest_list)._M_current;
      __for_end._M_current = std::vector<unsigned int>::end(&parent_config_ptr->child_quest_list)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
      {
        v8 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
        v9 = v8;
        if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v8);
        }
        *(_DWORD *)(v1 + 48) = *v9;
        v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
        v11 = (unsigned int)Player::getQuestComp(v10);
        PlayerQuestComp::findQuest((const PlayerQuestComp *const)(v1 + 96), v11);
        if ( !std::operator==<Quest>((const std::shared_ptr<Quest> *)(v1 + 96), 0LL) )
        {
          v12 = std::__shared_ptr_access<Quest,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Quest,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
          State = Quest::getState(v12);
          v14 = (char *)(v1 + 48);
          v15 = std::map<unsigned int,data::QuestState>::operator[](
                  &this->child_quest_state_map_,
                  (const std::map<unsigned int,data::QuestState>::key_type *)(v1 + 48));
          v16 = v15;
          v17 = *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000);
          if ( v17 != 0 && (char)(((unsigned __int8)v15 & 7) + 3) >= v17 )
          {
            LOBYTE(v14) = v17 != 0;
            __asan_report_store4(v15, v14, v15);
          }
          *v16 = State;
        }
        std::shared_ptr<Quest>::~shared_ptr((std::shared_ptr<Quest> *const)(v1 + 96));
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/quest/parent_quest.cpp",
        "recordChildQuestState",
        568);
      v7 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
             &v22,
             (const char (*)[58])"findPlayerParentQuestExcelConfig failed, parent_quest_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->parent_quest_id_);
      common::milog::MiLogStream::~MiLogStream(&v22);
    }
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 64));
  if ( v23 == (char *)v1 )
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
};

// Line 588: range 0000000016CD664C-0000000016CD6911
__int64 __fastcall ParentQuest::setQuestVar(
        ParentQuest *const this,
        uint32_t index,
        int32_t value,
        Flag<SetQuestVarOption> option)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // rbx
  unsigned int v7; // r14d
  __int64 result; // rax
  std::initializer_list<unsigned int> __l; // [rsp+0h] [rbp-130h]
  std::allocator<unsigned int> __a; // [rsp+3Bh] [rbp-F5h] BYREF
  std::initializer_list<int> v13; // [rsp+3Ch] [rbp-F4h] BYREF

  v4 = (unsigned __int64)&v13._M_array + 4;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 4 10 option:587 64 24 14 index_list:589 128 24 14 value_list:590";
  *(_QWORD *)(v4 + 16) = ParentQuest::setQuestVar;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -234881024;
  v6[536862723] = -218959118;
  v6[536862724] = -218103808;
  v6[536862725] = -202116109;
  *(Flag<SetQuestVarOption> *)(v4 + 48) = option;
  LODWORD(v13._M_array) = index;
  __l._M_array = (std::initializer_list<unsigned int>::iterator)&v13;
  __l._M_len = 1LL;
  std::allocator<unsigned int>::allocator(&__a);
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v4 + 64), __l, &__a);
  std::allocator<unsigned int>::~allocator(&__a);
  LODWORD(v13._M_array) = value;
  std::allocator<int>::allocator((std::allocator<int> *const)&__a);
  std::vector<int>::vector(
    (std::vector<int> *const)(v4 + 128),
    (std::initializer_list<int>)__PAIR128__(1LL, &v13),
    (const std::vector<int>::allocator_type *)&__a);
  std::allocator<int>::~allocator((std::allocator<int> *const)&__a);
  v7 = ParentQuest::setQuestVar(
         this,
         (const std::vector<unsigned int> *)(v4 + 64),
         (const std::vector<int> *)(v4 + 128),
         *(Flag<SetQuestVarOption> *)(v4 + 48));
  std::vector<int>::~vector((std::vector<int> *const)(v4 + 128));
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v4 + 64));
  result = v7;
  if ( (std::initializer_list<int>::iterator *)((char *)&v13._M_array + 4) == (std::initializer_list<int>::iterator *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
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

// Line 595: range 0000000016CD6912-0000000016CD702A
__int64 __fastcall ParentQuest::setQuestVar(
        ParentQuest *const this,
        const std::vector<unsigned int> *index_list,
        const std::vector<int> *value_list,
        Flag<SetQuestVarOption> option)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  __int64 result; // rax
  std::vector<unsigned int>::size_type v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v12; // rax
  _DWORD *v13; // rdx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  std::vector<unsigned int>::const_reference v17; // rax
  _DWORD *v18; // rdx
  std::vector<int>::const_reference v19; // rax
  _DWORD *v20; // rdx
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  int v26; // r14d
  std::vector<int>::size_type v27; // rsi
  std::vector<int>::reference v28; // rax
  _DWORD *v29; // rdx
  char v30; // cl
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  int32_t i; // [rsp+24h] [rbp-CCh]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-C8h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-C0h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-B8h]
  common::milog::MiLogStream v43; // [rsp+40h] [rbp-B0h] BYREF
  char v44[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v44;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 4 9 index:620 48 4 9 value:621 64 4 10 option:594";
  *(_QWORD *)(v4 + 16) = ParentQuest::setQuestVar;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -202116348;
  *(Flag<SetQuestVarOption> *)(v4 + 64) = option;
  if ( std::vector<unsigned int>::empty(index_list) )
  {
    result = 0LL;
  }
  else
  {
    v8 = std::vector<unsigned int>::size(index_list);
    if ( v8 == std::vector<int>::size(value_list) )
    {
      __for_range = index_list;
      __for_begin._M_current = std::vector<unsigned int>::begin(index_list)._M_current;
      __for_end._M_current = std::vector<unsigned int>::end(index_list)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
      {
        v12 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
        v13 = v12;
        if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v12);
        }
        *(_DWORD *)(v4 + 48) = *v13;
        if ( *(_DWORD *)(v4 + 48) > 5u )
        {
          common::milog::MiLogStream::create(
            &v43,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/quest/parent_quest.cpp",
            "setQuestVar",
            610);
          v14 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(&v43, (const char (*)[8])"index: ");
          v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v14,
                  (const unsigned int *)(v4 + 48));
          v16 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v15, (const char (*)[17])byte_25F2E9C0);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v16,
            &QuestExcelConfigMgr::QUEST_VAR_LEN);
          common::milog::MiLogStream::~MiLogStream(&v43);
          result = 0xFFFFFFFFLL;
          goto LABEL_33;
        }
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
      }
      if ( Flag<SetQuestVarOption>::isOpen((const Flag<SetQuestVarOption> *const)(v4 + 64), is_add_seq) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->quest_var_seq_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->quest_var_seq_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->quest_var_seq_);
        }
        ++this->quest_var_seq_;
      }
      for ( i = 0; i < std::vector<unsigned int>::size(index_list); ++i )
      {
        v17 = std::vector<unsigned int>::operator[](index_list, i);
        v18 = v17;
        if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v17);
        }
        *(_DWORD *)(v4 + 32) = *v18;
        v19 = std::vector<int>::operator[](value_list, i);
        v20 = v19;
        if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v19);
        }
        *(_DWORD *)(v4 + 48) = *v20;
        if ( *(int *)(v4 + 48) < 0 )
        {
          common::milog::MiLogStream::create(
            &v43,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/quest/parent_quest.cpp",
            "setQuestVar",
            624);
          v21 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                  &v43,
                  (const char (*)[42])"parent quest var value cannot < 0, index:");
          v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v21,
                  (const unsigned int *)(v4 + 32));
          v23 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v22, (const char (*)[8])" value:");
          v24 = common::milog::MiLogStream::operator<<<int,(int *)0>(v23, (const int *)(v4 + 48));
          v25 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                  v24,
                  (const char (*)[17])"parent quest id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &this->parent_quest_id_);
          common::milog::MiLogStream::~MiLogStream(&v43);
          result = 0xFFFFFFFFLL;
          goto LABEL_33;
        }
        v26 = *(_DWORD *)(v4 + 48);
        v27 = *(unsigned int *)(v4 + 32);
        v28 = std::vector<int>::operator[](&this->quest_var_list_, v27);
        v29 = v28;
        v30 = *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000);
        if ( v30 != 0 && (char)(((unsigned __int8)v28 & 7) + 3) >= v30 )
        {
          LOBYTE(v27) = v30 != 0;
          __asan_report_store4(v28, v27, v28);
        }
        *v29 = v26;
        common::milog::MiLogStream::create(
          &v43,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/quest/parent_quest.cpp",
          "setQuestVar",
          629);
        v31 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                &v43,
                (const char (*)[32])"parent quest var update, index:");
        v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v31,
                (const unsigned int *)(v4 + 32));
        v33 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v32, (const char (*)[8])" value:");
        v34 = common::milog::MiLogStream::operator<<<int,(int *)0>(v33, (const int *)(v4 + 48));
        v35 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                v34,
                (const char (*)[17])"parent quest id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, &this->parent_quest_id_);
        common::milog::MiLogStream::~MiLogStream(&v43);
      }
      if ( Flag<SetQuestVarOption>::isOpen((const Flag<SetQuestVarOption> *const)(v4 + 64), is_notify) )
        ParentQuest::notifyQuestVar(this);
      result = 0LL;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v43,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/quest/parent_quest.cpp",
        "setQuestVar",
        602);
      v9 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v43,
             (const char (*)[29])"index value not same: index:");
      v10 = common::milog::MiLogStream::operator<<<unsigned int>(v9, index_list);
      v11 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v10, (const char (*)[8])" value:");
      common::milog::MiLogStream::operator<<<int>(v11, value_list);
      common::milog::MiLogStream::~MiLogStream(&v43);
      result = 0xFFFFFFFFLL;
    }
  }
LABEL_33:
  if ( v44 == (char *)v4 )
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

// Line 638: range 0000000016CD702C-0000000016CD7276
__int64 __fastcall ParentQuest::getQuestVar(ParentQuest *const this, uint32_t index)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::vector<int>::size_type v5; // r15
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r13
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  __int64 result; // rax
  std::vector<int>::reference v12; // rax
  unsigned int *v13; // rdx
  unsigned __int64 val; // [rsp+18h] [rbp-98h] BYREF
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 index:637";
  *(_QWORD *)(v2 + 16) = ParentQuest::getQuestVar;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = index;
  v5 = *(unsigned int *)(v2 + 32);
  if ( v5 < std::vector<int>::size(&this->quest_var_list_) )
  {
    v12 = std::vector<int>::operator[](&this->quest_var_list_, *(unsigned int *)(v2 + 32));
    v13 = (unsigned int *)v12;
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v12);
    }
    result = *v13;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/quest/parent_quest.cpp",
      "getQuestVar",
      641);
    v6 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(&v15, (const char (*)[8])"index: ");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
    v8 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v7, (const char (*)[18])off_25F2EB40);
    val = std::vector<int>::size(&this->quest_var_list_);
    v9 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v8, &val);
    v10 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v9, (const char (*)[19])", parent_quest_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->parent_quest_id_);
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = 0LL;
  }
  if ( v16 == (char *)v2 )
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

// Line 648: range 0000000016CD7278-0000000016CD7421
std::string *__cdecl ParentQuest::getQuestVarStr[abi:cxx11](std::string *retstr, ParentQuest *const this)
{
  __gnu_cxx::__normal_iterator<int*,std::vector<int> >::reference v2; // rax
  int32_t *v3; // rdx
  std::allocator<char> __a; // [rsp+12h] [rbp-4Eh] BYREF
  bool is_first; // [rsp+13h] [rbp-4Dh]
  int32_t var; // [rsp+14h] [rbp-4Ch]
  std::vector<int>::iterator __for_begin; // [rsp+18h] [rbp-48h] BYREF
  std::vector<int>::iterator __for_end; // [rsp+20h] [rbp-40h] BYREF
  std::vector<int> *__for_range; // [rsp+28h] [rbp-38h]
  std::string v11; // [rsp+30h] [rbp-30h] BYREF

  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(retstr, "[", &__a);
  std::allocator<char>::~allocator(&__a);
  is_first = 1;
  __for_range = &this->quest_var_list_;
  __for_begin._M_current = std::vector<int>::begin(&this->quest_var_list_)._M_current;
  __for_end._M_current = std::vector<int>::end(__for_range)._M_current;
  while ( __gnu_cxx::operator!=<int *,std::vector<int>>(&__for_begin, &__for_end) )
  {
    v2 = __gnu_cxx::__normal_iterator<int *,std::vector<int>>::operator*(&__for_begin);
    v3 = v2;
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v2);
    }
    var = *v3;
    if ( !is_first )
      std::string::operator+=(retstr, ",");
    common::tools::StringUtils::numToStr<int>(&v11, var);
    std::string::operator+=(retstr, &v11);
    std::string::~string(&v11);
    if ( is_first )
      is_first = 0;
    __gnu_cxx::__normal_iterator<int *,std::vector<int>>::operator++(&__for_begin);
  }
  std::string::operator+=(retstr, "]");
  return retstr;
};

// Line 662: range 0000000016CD7422-0000000016CD77C8
__int64 __fastcall ParentQuest::setRewardIndex(ParentQuest *const this, uint32_t index)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  unsigned int v5; // r14d
  Player *v6; // rax
  PlayerQuestComp *QuestComp; // r14
  uint32_t ParentQuestId; // eax
  __int64 v9; // rsi
  std::vector<unsigned int>::size_type v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  uint32_t v14; // ecx
  char v15; // dl
  __int64 v16; // rdx
  __int64 result; // rax
  const data::MainQuestExcelConfig *parent_quest_ptr; // [rsp+18h] [rbp-B8h]
  common::milog::MiLogStream v19; // [rsp+20h] [rbp-B0h] BYREF
  char v20[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 9 index:661 64 16 14 player_ptr:663";
  *(_QWORD *)(v2 + 16) = ParentQuest::setRewardIndex;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = index;
  ParentQuest::getOwner((ParentQuest *const)(v2 + 64));
  if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/quest/parent_quest.cpp",
      "setRewardIndex",
      666);
    common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v19, (const char (*)[14])"owner is null");
    common::milog::MiLogStream::~MiLogStream(&v19);
    v5 = -1;
  }
  else
  {
    v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    QuestComp = Player::getQuestComp(v6);
    ParentQuestId = ParentQuest::getParentQuestId(this);
    v9 = ParentQuestId;
    parent_quest_ptr = PlayerQuestComp::findPlayerParentQuestExcelConfig(QuestComp, ParentQuestId);
    if ( parent_quest_ptr )
    {
      v10 = *(unsigned int *)(v2 + 48);
      if ( v10 < std::vector<unsigned int>::size(&parent_quest_ptr->reward_id_list) )
      {
        v14 = *(_DWORD *)(v2 + 48);
        v15 = *(_BYTE *)(((unsigned __int64)&this->reward_index_ >> 3) + 0x7FFF8000);
        LOBYTE(v9) = v15 != 0;
        v16 = (v15 != 0) & (unsigned __int8)((char)((((_BYTE)this + 108) & 7) + 3) >= v15);
        if ( (_BYTE)v16 )
          __asan_report_store4(&this->reward_index_, v9, v16);
        this->reward_index_ = v14;
        v5 = 0;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v19,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/quest/parent_quest.cpp",
          "setRewardIndex",
          677);
        v11 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v19, (const char (*)[19])off_25F2EC80);
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v11,
                (const unsigned int *)(v2 + 48));
        v13 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                v12,
                (const char (*)[26])" for parent quest reward:");
        common::milog::MiLogStream::operator<<<unsigned int>(v13, &parent_quest_ptr->reward_id_list);
        common::milog::MiLogStream::~MiLogStream(&v19);
        v5 = -1;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/quest/parent_quest.cpp",
        "setRewardIndex",
        672);
      common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
        &v19,
        (const char (*)[25])"parent_quest_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v19);
      v5 = -1;
    }
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 64));
  result = v5;
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

// Line 685: range 0000000016CD77CA-0000000016CD79CD
void __cdecl ParentQuest::execAction(ParentQuest *const this, const std::vector<data::QuestExec> *exec_vec)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  Player *v5; // rax
  PlayerQuestComp *QuestComp; // rdi
  common::milog::MiLogStream v8; // [rsp+10h] [rbp-90h] BYREF
  char v9[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 player_ptr:686";
  *(_QWORD *)(v2 + 16) = ParentQuest::execAction;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  ParentQuest::getOwner((ParentQuest *const)(v2 + 32));
  if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/quest/parent_quest.cpp",
      "execAction",
      689);
    common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v8, (const char (*)[14])"owner is null");
    common::milog::MiLogStream::~MiLogStream(&v8);
  }
  else
  {
    v5 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    QuestComp = Player::getQuestComp(v5);
    if ( *(_BYTE *)(((unsigned __int64)&this->parent_quest_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->parent_quest_id_ >> 3) + 0x7FFF8000) )
    {
      QuestComp = (PlayerQuestComp *)&this->parent_quest_id_;
      __asan_report_load4(&this->parent_quest_id_);
    }
    PlayerQuestComp::execAction(QuestComp, exec_vec, this->parent_quest_id_, 0);
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 32));
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 696: range 0000000016CD79CE-0000000016CD7BF4
__int64 __fastcall ParentQuest::refreshQuestTimeVar(ParentQuest *const this, uint32_t key)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  __int64 result; // rax
  int Now; // r14d
  char *v12; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v13; // rax
  _DWORD *v14; // rdx
  char v15; // cl
  common::milog::MiLogStream v16; // [rsp+10h] [rbp-90h] BYREF
  char v17[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 7 key:695";
  *(_QWORD *)(v2 + 16) = ParentQuest::refreshQuestTimeVar;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = key;
  if ( *(_DWORD *)(v2 + 32) <= 9u )
  {
    Now = common::tools::TimeUtils::getNow();
    v12 = (char *)(v2 + 32);
    v13 = std::map<unsigned int,unsigned int>::operator[](
            &this->time_var_map_,
            (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 32));
    v14 = v13;
    v15 = *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000);
    if ( v15 != 0 && (char)(((unsigned __int8)v13 & 7) + 3) >= v15 )
    {
      LOBYTE(v12) = v15 != 0;
      __asan_report_store4(v13, v12, v13);
    }
    *v14 = Now;
    ParentQuest::notifyQuestTimeVar(this);
    result = 0LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/quest/parent_quest.cpp",
      "refreshQuestTimeVar",
      699);
    v5 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(&v16, (const char (*)[30])off_25F2ED80);
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v6, (const char (*)[16])"is larger than:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
           v7,
           &QuestExcelConfigMgr::QUEST_TIME_VAR_LEN);
    v9 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v8, (const char (*)[19])", parent_quest_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->parent_quest_id_);
    common::milog::MiLogStream::~MiLogStream(&v16);
    result = 0xFFFFFFFFLL;
  }
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

// Line 708: range 0000000016CD7BF6-0000000016CD7CE2
__int64 __fastcall ParentQuest::clearQuestTimeVar(ParentQuest *const this, uint32_t key)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  __int64 result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 7 key:707";
  *(_QWORD *)(v2 + 16) = ParentQuest::clearQuestTimeVar;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = key;
  if ( std::map<unsigned int,unsigned int>::erase(
         &this->time_var_map_,
         (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 32)) )
  {
    ParentQuest::notifyQuestTimeVar(this);
  }
  result = 0LL;
  if ( v6 == (char *)v2 )
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

// Line 717: range 0000000016CD7CE4-0000000016CD7E76
__int64 __fastcall ParentQuest::getQuestTimeVar(const ParentQuest *const this, uint32_t key)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::pointer v5; // rdx
  unsigned int *p_second; // rax
  __int64 result; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self __y; // [rsp+18h] [rbp-88h] BYREF
  char v9[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 7 key:716 64 8 8 iter:718";
  *(_QWORD *)(v2 + 16) = ParentQuest::getQuestTimeVar;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = key;
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::map<unsigned int,unsigned int>::find(
                                                                        &this->time_var_map_,
                                                                        (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,unsigned int>::end(&this->time_var_map_)._M_node;
  if ( std::operator!=(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 64),
         &__y) )
  {
    v5 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 64));
    p_second = &v5->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    result = v5->second;
  }
  else
  {
    result = 0LL;
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

// Line 727: range 0000000016CD7E78-0000000016CD7F96
__int64 __fastcall ParentQuest::setQuestTimeVarByGM(ParentQuest *const this, uint32_t key, uint32_t value)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  char *v6; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v7; // rax
  _DWORD *v8; // rdx
  char v9; // cl
  __int64 result; // rax
  char v12[96]; // [rsp+10h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 7 key:726";
  *(_QWORD *)(v3 + 16) = ParentQuest::setQuestTimeVarByGM;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = key;
  v6 = (char *)(v3 + 32);
  v7 = std::map<unsigned int,unsigned int>::operator[](
         &this->time_var_map_,
         (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 32));
  v8 = v7;
  v9 = *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000);
  if ( v9 != 0 && (char)(((unsigned __int8)v7 & 7) + 3) >= v9 )
  {
    LOBYTE(v6) = v9 != 0;
    __asan_report_store4(v7, v6, v7);
  }
  *v8 = value;
  result = 0LL;
  if ( v12 == (char *)v3 )
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

// Line 733: range 0000000016CD7F98-0000000016CD8497
__int64 __fastcall ParentQuest::setQuestStateByMUIP(ParentQuest *const this, uint32_t quest_id, data::QuestState state)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  uint32_t main_id; // ecx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  char *v13; // rsi
  std::map<unsigned int,data::QuestState>::mapped_type *v14; // rax
  _DWORD *v15; // rdx
  char v16; // cl
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // r12
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // r12
  char *val; // [rsp+18h] [rbp-B8h] BYREF
  char *v26; // [rsp+20h] [rbp-B0h] BYREF
  const data::QuestExcelConfig *quest_config_ptr; // [rsp+28h] [rbp-A8h]
  std::shared_ptr<Config> v28; // [rsp+30h] [rbp-A0h] BYREF
  common::milog::MiLogStream v29; // [rsp+40h] [rbp-90h] BYREF
  char v30[112]; // [rsp+60h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 12 quest_id:732";
  *(_QWORD *)(v3 + 16) = ParentQuest::setQuestStateByMUIP;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = quest_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v28);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v28);
  quest_config_ptr = data::QuestExcelConfigMgrBase::findQuestExcelConfig(
                       &v6->design_config.txt_config_mgr.quest_config_mgr,
                       *(_DWORD *)(v3 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v28);
  if ( quest_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&quest_config_ptr->main_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)quest_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&quest_config_ptr->main_id >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(&quest_config_ptr->main_id);
    }
    main_id = quest_config_ptr->main_id;
    if ( *(_BYTE *)(((unsigned __int64)&this->parent_quest_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->parent_quest_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->parent_quest_id_);
    }
    if ( main_id == this->parent_quest_id_ )
    {
      v13 = (char *)(v3 + 32);
      v14 = std::map<unsigned int,data::QuestState>::operator[](
              &this->child_quest_state_map_,
              (const std::map<unsigned int,data::QuestState>::key_type *)(v3 + 32));
      v15 = v14;
      v16 = *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000);
      if ( v16 != 0 && (char)(((unsigned __int8)v14 & 7) + 3) >= v16 )
      {
        LOBYTE(v13) = v16 != 0;
        __asan_report_store4(v14, v13, v14);
      }
      *v15 = state;
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/quest/parent_quest.cpp",
        "setQuestStateByMUIP",
        746);
      v17 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
              &v29,
              (const char (*)[31])"setQuestStateByMUIP, quest_id:");
      v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v3 + 32));
      v19 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
              v18,
              (const char (*)[19])", parent_quest_id:");
      v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &this->parent_quest_id_);
      v21 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              v20,
              (const char (*)[22])", parent_quest_state:");
      if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->state_);
      }
      val = (char *)data::enumValToStr(this->state_);
      v22 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v21, (const char *const *)&val);
      v23 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v22, (const char (*)[23])off_25F2F000);
      v26 = (char *)data::enumValToStr(state);
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v23, (const char *const *)&v26);
      common::milog::MiLogStream::~MiLogStream(&v29);
      result = 0LL;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/quest/parent_quest.cpp",
        "setQuestStateByMUIP",
        742);
      v10 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
              &v29,
              (const char (*)[39])"quest_id is not child quest, quest_id:");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 32));
      v12 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
              v11,
              (const char (*)[19])", parent_quest_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &this->parent_quest_id_);
      common::milog::MiLogStream::~MiLogStream(&v29);
      result = 0xFFFFFFFFLL;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/quest/parent_quest.cpp",
      "setQuestStateByMUIP",
      737);
    v7 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v29,
           (const char (*)[34])"quest config not exist, quest_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v29);
    result = 0xFFFFFFFFLL;
  }
  if ( v30 == (char *)v3 )
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

// Line 752: range 0000000016CD8498-0000000016CD8A80
void __cdecl ParentQuest::initInferenceData(ParentQuest *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::_Rb_tree_const_iterator<unsigned int>::reference v4; // rax
  _DWORD *v5; // rdx
  common::milog::MiLogStream *v6; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v7; // rax
  _DWORD *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  ParentQuestInferenceWordData *v10; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,ParentQuestInferenceWordData>,false,false>,bool> v11; // rax
  common::milog::MiLogStream *v12; // rax
  std::set<unsigned int>::iterator __for_begin; // [rsp+10h] [rbp-170h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+18h] [rbp-168h] BYREF
  std::set<unsigned int>::iterator __for_begin_0; // [rsp+20h] [rbp-160h] BYREF
  std::set<unsigned int>::iterator __for_end_0; // [rsp+28h] [rbp-158h] BYREF
  const InferenceExcelConfigMgr *inference_config_mgr; // [rsp+30h] [rbp-150h]
  const std::set<unsigned int> *__for_range; // [rsp+38h] [rbp-148h]
  const std::set<unsigned int> *__for_range_0; // [rsp+40h] [rbp-140h]
  const data::InferenceWordExcelConfig *word_config_ptr; // [rsp+48h] [rbp-138h]
  std::shared_ptr<Config> v21; // [rsp+50h] [rbp-130h] BYREF
  common::milog::MiLogStream v22; // [rsp+60h] [rbp-120h] BYREF
  common::milog::MiLogStream v23; // [rsp+80h] [rbp-100h] BYREF
  common::milog::MiLogStream v24; // [rsp+A0h] [rbp-E0h] BYREF
  char v25[192]; // [rsp+C0h] [rbp-C0h] BYREF

  v1 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "5 32 4 11 page_id:759 48 4 11 word_id:768 64 8 17 page_set_iter:754 96 8 17 word_set_iter:761 12"
                        "8 12 13 word_data:778";
  *(_QWORD *)(v1 + 16) = ParentQuest::initInferenceData;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556924;
  v3[536862722] = -218959360;
  v3[536862723] = -218959360;
  v3[536862724] = -202177536;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v21);
  inference_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21)->design_config.txt_config_mgr.inference_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v21);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator *)(v1 + 64) = std::unordered_map<unsigned int,std::set<unsigned int>>::find(
                                                                                            &inference_config_mgr->parent_quest_to_page_map,
                                                                                            &this->parent_quest_id_);
  __for_end_0._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::unordered_map<unsigned int,std::set<unsigned int>>::end(&inference_config_mgr->parent_quest_to_page_map)._M_cur;
  if ( !std::__detail::operator==<std::pair<unsigned int const,std::set<unsigned int>>,false>(
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v1 + 64),
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)&__for_end_0) )
  {
    __for_range = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v1 + 64))->second;
    __for_begin._M_node = std::set<unsigned int>::begin(__for_range)._M_node;
    __for_end._M_node = std::set<unsigned int>::end(__for_range)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v4 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
      v5 = v4;
      if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v4);
      }
      *(_DWORD *)(v1 + 32) = *v5;
      *(std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator *)(v1 + 96) = std::unordered_map<unsigned int,std::set<unsigned int>>::find(
                                                                                                &inference_config_mgr->page_to_word_map,
                                                                                                (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v1 + 32));
      __for_end_0._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::unordered_map<unsigned int,std::set<unsigned int>>::end(&inference_config_mgr->page_to_word_map)._M_cur;
      if ( std::__detail::operator==<std::pair<unsigned int const,std::set<unsigned int>>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v1 + 96),
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)&__for_end_0) )
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/quest/parent_quest.cpp",
          "initInferenceData",
          765);
        v6 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
               &v22,
               (const char (*)[38])"inference page have no word, page_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v1 + 32));
        common::milog::MiLogStream::~MiLogStream(&v22);
      }
      else
      {
        __for_range_0 = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v1 + 96))->second;
        __for_begin_0._M_node = std::set<unsigned int>::begin(__for_range_0)._M_node;
        __for_end_0._M_node = std::set<unsigned int>::end(__for_range_0)._M_node;
        while ( std::operator!=(&__for_begin_0, &__for_end_0) )
        {
          v7 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin_0);
          v8 = v7;
          if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v7);
          }
          *(_DWORD *)(v1 + 48) = *v8;
          word_config_ptr = data::InferenceExcelConfigMgrBase::findInferenceWordExcelConfig(
                              inference_config_mgr,
                              *(_DWORD *)(v1 + 48));
          if ( word_config_ptr )
          {
            if ( *(char *)(((unsigned __int64)&word_config_ptr->default_unlock >> 3) + 0x7FFF8000) < 0 )
              __asan_report_load1(&word_config_ptr->default_unlock);
            if ( word_config_ptr->default_unlock )
            {
              ParentQuestInferenceWordData::ParentQuestInferenceWordData(
                (ParentQuestInferenceWordData *const)(v1 + 128),
                *(_DWORD *)(v1 + 48));
              v11 = std::unordered_map<unsigned int,ParentQuestInferenceWordData>::emplace<unsigned int &,ParentQuestInferenceWordData&>(
                      &this->unlock_inference_word_map_,
                      (unsigned int *)(v1 + 48),
                      (ParentQuestInferenceWordData *)(v1 + 128),
                      (unsigned int *)&this->unlock_inference_word_map_,
                      v10);
              if ( !v11.second )
              {
                common::milog::MiLogStream::create(
                  &v24,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/quest/parent_quest.cpp",
                  "initInferenceData",
                  781);
                v12 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                        &v24,
                        (const char (*)[35])"duplicate word_id failed, word_id:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v12,
                  (const unsigned int *)(v1 + 48));
                common::milog::MiLogStream::~MiLogStream(&v24);
              }
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v23,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/quest/parent_quest.cpp",
              "initInferenceData",
              773);
            v9 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                   &v23,
                   (const char (*)[46])"findInferenceWordExcelConfig failed, word_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v1 + 48));
            common::milog::MiLogStream::~MiLogStream(&v23);
          }
          std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin_0);
        }
      }
      std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
    }
  }
  if ( v25 == (char *)v1 )
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
};

// Line 790: range 0000000016CD8A82-0000000016CD8E1D
void __cdecl ParentQuest::notifyInferenceData(ParentQuest *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  google::protobuf::RepeatedPtrField<proto::InferencePageInfo> *v4; // rdx
  common::milog::MiLogStream *v5; // rax
  Player *v6; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> __y; // [rsp+10h] [rbp-120h] BYREF
  const InferenceExcelConfigMgr *inference_config_mgr; // [rsp+18h] [rbp-118h]
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-110h] BYREF
  char v10[240]; // [rsp+40h] [rbp-F0h] BYREF

  v1 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(192LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 8 17 page_set_iter:792 80 16 14 player_ptr:800 112 48 10 notify:797";
  *(_QWORD *)(v1 + 16) = ParentQuest::notifyInferenceData;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862721] = -234881024;
  v3[536862722] = 62194;
  v3[536862723] = 62194;
  v3[536862725] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v1 + 80));
  inference_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 80))->design_config.txt_config_mgr.inference_config_mgr;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v1 + 80));
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator *)(v1 + 48) = std::unordered_map<unsigned int,std::set<unsigned int>>::find(
                                                                                            &inference_config_mgr->parent_quest_to_page_map,
                                                                                            &this->parent_quest_id_);
  __y._M_cur = std::unordered_map<unsigned int,std::set<unsigned int>>::end(&inference_config_mgr->parent_quest_to_page_map)._M_cur;
  if ( !std::__detail::operator==<std::pair<unsigned int const,std::set<unsigned int>>,false>(
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v1 + 48),
          &__y) )
  {
    proto::ParentQuestInferenceDataNotify::ParentQuestInferenceDataNotify((proto::ParentQuestInferenceDataNotify *const)(v1 + 112));
    if ( *(_BYTE *)(((unsigned __int64)&this->parent_quest_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->parent_quest_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->parent_quest_id_);
    }
    proto::ParentQuestInferenceDataNotify::set_parent_quest_id(
      (proto::ParentQuestInferenceDataNotify *const)(v1 + 112),
      this->parent_quest_id_);
    v4 = proto::ParentQuestInferenceDataNotify::mutable_inference_page_list((proto::ParentQuestInferenceDataNotify *const)(v1 + 112));
    ParentQuest::fillInferencePageInfo(this, v4);
    ParentQuest::getOwner((ParentQuest *const)(v1 + 80));
    if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v1 + 80), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v9,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/quest/parent_quest.cpp",
        "notifyInferenceData",
        803);
      v5 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
             &v9,
             (const char (*)[41])"ParentQuest is nullptr, parent_quest_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->parent_quest_id_);
      common::milog::MiLogStream::~MiLogStream(&v9);
    }
    else
    {
      v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 80));
      Player::sendProto(v6, (const google::protobuf::Message *)(v1 + 112));
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 80));
    proto::ParentQuestInferenceDataNotify::~ParentQuestInferenceDataNotify((proto::ParentQuestInferenceDataNotify *const)(v1 + 112));
  }
  if ( v10 == (char *)v1 )
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
};

// Line 810: range 0000000016CD8E1E-0000000016CD94CF
void __cdecl ParentQuest::fillInferencePageInfo(
        const ParentQuest *const this,
        google::protobuf::RepeatedPtrField<proto::InferencePageInfo> *page_info_list)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::_Rb_tree_const_iterator<unsigned int>::reference v5; // rax
  _DWORD *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v8; // rax
  _DWORD *v9; // rdx
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,ParentQuestInferenceWordData>,false,false>::pointer v10; // rdx
  ParentQuestInferenceWordData *p_second; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,ParentQuestInferenceWordData>,false,false>::pointer v12; // rdx
  bool *p_is_interpret; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,ParentQuestInferenceWordData>,false,false>::pointer v14; // rdx
  bool *p_is_associate; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,ParentQuestInferenceWordData>,false,false>::pointer v16; // rdx
  bool *p_is_submit; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,ParentQuestInferenceWordData>,false,false>::pointer v18; // rdx
  uint32_t *p_unlock_by_word_id; // rax
  std::set<unsigned int>::iterator __for_begin; // [rsp+10h] [rbp-140h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+18h] [rbp-138h] BYREF
  std::set<unsigned int>::iterator __for_begin_0; // [rsp+20h] [rbp-130h] BYREF
  std::set<unsigned int>::iterator __for_end_0; // [rsp+28h] [rbp-128h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> __y; // [rsp+30h] [rbp-120h] BYREF
  const InferenceExcelConfigMgr *inference_config_mgr; // [rsp+38h] [rbp-118h]
  const std::set<unsigned int> *__for_range; // [rsp+40h] [rbp-110h]
  proto::InferencePageInfo *page_info; // [rsp+48h] [rbp-108h]
  const std::set<unsigned int> *__for_range_0; // [rsp+50h] [rbp-100h]
  proto::InfernceWordInfo *word_info; // [rsp+58h] [rbp-F8h]
  std::shared_ptr<Config> v30; // [rsp+60h] [rbp-F0h] BYREF
  common::milog::MiLogStream v31; // [rsp+70h] [rbp-E0h] BYREF
  char v32[192]; // [rsp+90h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 11 page_id:817 48 4 11 word_id:828 64 8 17 page_set_iter:812 96 8 17 word_set_iter:821 12"
                        "8 8 18 word_data_iter:830";
  *(_QWORD *)(v2 + 16) = ParentQuest::fillInferencePageInfo;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -202116352;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v30);
  inference_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v30)->design_config.txt_config_mgr.inference_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v30);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::set<unsigned int>>::find(
                                                                                            &inference_config_mgr->parent_quest_to_page_map,
                                                                                            &this->parent_quest_id_);
  __y._M_cur = std::unordered_map<unsigned int,std::set<unsigned int>>::end(&inference_config_mgr->parent_quest_to_page_map)._M_cur;
  if ( !std::__detail::operator==<std::pair<unsigned int const,std::set<unsigned int>>,false>(
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v2 + 64),
          &__y) )
  {
    __for_range = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v2 + 64))->second;
    __for_begin._M_node = std::set<unsigned int>::begin(__for_range)._M_node;
    __for_end._M_node = std::set<unsigned int>::end(__for_range)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v5 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
      v6 = v5;
      if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v5);
      }
      *(_DWORD *)(v2 + 32) = *v6;
      page_info = google::protobuf::RepeatedPtrField<proto::InferencePageInfo>::Add(page_info_list);
      proto::InferencePageInfo::set_page_id(page_info, *(_DWORD *)(v2 + 32));
      *(std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,std::set<unsigned int>>::find(
                                                                                                &inference_config_mgr->page_to_word_map,
                                                                                                (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v2 + 32));
      __y._M_cur = std::unordered_map<unsigned int,std::set<unsigned int>>::end(&inference_config_mgr->page_to_word_map)._M_cur;
      if ( std::__detail::operator==<std::pair<unsigned int const,std::set<unsigned int>>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v2 + 96),
             &__y) )
      {
        common::milog::MiLogStream::create(
          &v31,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/quest/parent_quest.cpp",
          "fillInferencePageInfo",
          825);
        v7 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
               &v31,
               (const char (*)[38])"inference page have no word, page_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
        common::milog::MiLogStream::~MiLogStream(&v31);
      }
      else
      {
        __for_range_0 = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v2 + 96))->second;
        __for_begin_0._M_node = std::set<unsigned int>::begin(__for_range_0)._M_node;
        __for_end_0._M_node = std::set<unsigned int>::end(__for_range_0)._M_node;
        while ( std::operator!=(&__for_begin_0, &__for_end_0) )
        {
          v8 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin_0);
          v9 = v8;
          if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v8);
          }
          *(_DWORD *)(v2 + 48) = *v9;
          *(std::unordered_map<unsigned int,ParentQuestInferenceWordData>::const_iterator *)(v2 + 128) = std::unordered_map<unsigned int,ParentQuestInferenceWordData>::find(&this->unlock_inference_word_map_, (const std::unordered_map<unsigned int,ParentQuestInferenceWordData>::key_type *)(v2 + 48));
          __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false>::__node_type *)std::unordered_map<unsigned int,ParentQuestInferenceWordData>::end(&this->unlock_inference_word_map_)._M_cur;
          if ( !std::__detail::operator==<std::pair<unsigned int const,ParentQuestInferenceWordData>,false>(
                  (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,ParentQuestInferenceWordData>,false> *)(v2 + 128),
                  (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,ParentQuestInferenceWordData>,false> *)&__y) )
          {
            word_info = proto::InferencePageInfo::add_unlock_word_list(page_info);
            v10 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,ParentQuestInferenceWordData>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,ParentQuestInferenceWordData>,false,false> *const)(v2 + 128));
            p_second = &v10->second;
            if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(p_second);
            }
            proto::InfernceWordInfo::set_word_id(word_info, v10->second.word_id);
            v12 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,ParentQuestInferenceWordData>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,ParentQuestInferenceWordData>,false,false> *const)(v2 + 128));
            p_is_interpret = &v12->second.is_interpret;
            if ( *(_BYTE *)(((unsigned __int64)p_is_interpret >> 3) + 0x7FFF8000) != 0
              && ((unsigned __int8)p_is_interpret & 7) >= *(_BYTE *)(((unsigned __int64)p_is_interpret >> 3) + 0x7FFF8000) )
            {
              __asan_report_load1(p_is_interpret);
            }
            proto::InfernceWordInfo::set_is_interpret(word_info, v12->second.is_interpret);
            v14 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,ParentQuestInferenceWordData>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,ParentQuestInferenceWordData>,false,false> *const)(v2 + 128));
            p_is_associate = &v14->second.is_associate;
            if ( *(_BYTE *)(((unsigned __int64)p_is_associate >> 3) + 0x7FFF8000) != 0
              && ((unsigned __int8)p_is_associate & 7) >= *(_BYTE *)(((unsigned __int64)p_is_associate >> 3) + 0x7FFF8000) )
            {
              __asan_report_load1(p_is_associate);
            }
            proto::InfernceWordInfo::set_is_associate(word_info, v14->second.is_associate);
            v16 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,ParentQuestInferenceWordData>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,ParentQuestInferenceWordData>,false,false> *const)(v2 + 128));
            p_is_submit = &v16->second.is_submit;
            if ( *(_BYTE *)(((unsigned __int64)p_is_submit >> 3) + 0x7FFF8000) != 0
              && ((unsigned __int8)p_is_submit & 7) >= *(_BYTE *)(((unsigned __int64)p_is_submit >> 3) + 0x7FFF8000) )
            {
              __asan_report_load1(p_is_submit);
            }
            proto::InfernceWordInfo::set_is_submit(word_info, v16->second.is_submit);
            v18 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,ParentQuestInferenceWordData>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,ParentQuestInferenceWordData>,false,false> *const)(v2 + 128));
            p_unlock_by_word_id = &v18->second.unlock_by_word_id;
            if ( *(_BYTE *)(((unsigned __int64)p_unlock_by_word_id >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)p_unlock_by_word_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_unlock_by_word_id >> 3)
                                                                                    + 0x7FFF8000) )
            {
              __asan_report_load4(p_unlock_by_word_id);
            }
            proto::InfernceWordInfo::set_unlock_by_word_id(word_info, v18->second.unlock_by_word_id);
          }
          std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin_0);
        }
      }
      std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
    }
  }
  if ( v32 == (char *)v2 )
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

// Line 846: range 0000000016CD94D0-0000000016CD9AE8
__int64 __fastcall ParentQuest::interpretInferenceWord(ParentQuest *const this, uint32_t word_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,ParentQuestInferenceWordData>,false,false>::pointer v12; // rdx
  bool *p_is_interpret; // rax
  common::milog::MiLogStream *v14; // rax
  std::vector<data::InferenceAction> *p_interpret_action; // rsi
  std::__detail::_Node_iterator<std::pair<unsigned int const,ParentQuestInferenceWordData>,false,false>::pointer v16; // rdx
  char v17; // cl
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,ParentQuestInferenceWordData>,false> __y; // [rsp+18h] [rbp-C8h] BYREF
  const InferenceExcelConfigMgr *inference_config_mgr; // [rsp+20h] [rbp-C0h]
  const data::InferenceWordExcelConfig *word_config_ptr; // [rsp+28h] [rbp-B8h]
  std::shared_ptr<Config> v21; // [rsp+30h] [rbp-B0h] BYREF
  common::milog::MiLogStream v22; // [rsp+40h] [rbp-A0h] BYREF
  char v23[128]; // [rsp+60h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 11 word_id:845 64 8 18 word_data_iter:866";
  *(_QWORD *)(v2 + 16) = ParentQuest::interpretInferenceWord;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = word_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->state_);
  }
  if ( this->state_ )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/quest/parent_quest.cpp",
      "interpretInferenceWord",
      849);
    v5 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
           &v22,
           (const char (*)[45])"parent quest state invalid, parent_quest_id:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->parent_quest_id_);
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])" state:");
    common::milog::MiLogStream::operator<<<data::ParentQuestState,(data::ParentQuestState*)0>(v7, &this->state_);
    common::milog::MiLogStream::~MiLogStream(&v22);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v21);
    inference_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21)->design_config.txt_config_mgr.inference_config_mgr;
    std::shared_ptr<Config>::~shared_ptr(&v21);
    word_config_ptr = data::InferenceExcelConfigMgrBase::findInferenceWordExcelConfig(
                        inference_config_mgr,
                        *(_DWORD *)(v2 + 48));
    if ( word_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&word_config_ptr->is_can_interpret >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)word_config_ptr + 17) & 7) >= *(_BYTE *)(((unsigned __int64)&word_config_ptr->is_can_interpret >> 3)
                                                                     + 0x7FFF8000) )
      {
        __asan_report_load1(&word_config_ptr->is_can_interpret);
      }
      if ( !word_config_ptr->is_can_interpret )
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/quest/parent_quest.cpp",
          "interpretInferenceWord",
          862);
        v10 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                &v22,
                (const char (*)[43])"inference word can not interpret, word_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v22);
        result = 0xFFFFFFFFLL;
      }
      else
      {
        *(std::unordered_map<unsigned int,ParentQuestInferenceWordData>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,ParentQuestInferenceWordData>::find(
                                                                                                  &this->unlock_inference_word_map_,
                                                                                                  (const std::unordered_map<unsigned int,ParentQuestInferenceWordData>::key_type *)(v2 + 48));
        __y._M_cur = std::unordered_map<unsigned int,ParentQuestInferenceWordData>::end(&this->unlock_inference_word_map_)._M_cur;
        if ( std::__detail::operator==<std::pair<unsigned int const,ParentQuestInferenceWordData>,false>(
               (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,ParentQuestInferenceWordData>,false> *)(v2 + 64),
               &__y) )
        {
          common::milog::MiLogStream::create(
            &v22,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/quest/parent_quest.cpp",
            "interpretInferenceWord",
            869);
          v11 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                  &v22,
                  (const char (*)[35])"inference word is locked, word_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 48));
          common::milog::MiLogStream::~MiLogStream(&v22);
          result = 0xFFFFFFFFLL;
        }
        else
        {
          v12 = std::__detail::_Node_iterator<std::pair<unsigned int const,ParentQuestInferenceWordData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,ParentQuestInferenceWordData>,false,false> *const)(v2 + 64));
          p_is_interpret = &v12->second.is_interpret;
          if ( *(_BYTE *)(((unsigned __int64)p_is_interpret >> 3) + 0x7FFF8000) != 0
            && ((unsigned __int8)p_is_interpret & 7) >= *(_BYTE *)(((unsigned __int64)p_is_interpret >> 3) + 0x7FFF8000) )
          {
            __asan_report_load1(p_is_interpret);
          }
          if ( v12->second.is_interpret )
          {
            common::milog::MiLogStream::create(
              &v22,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/quest/parent_quest.cpp",
              "interpretInferenceWord",
              874);
            v14 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                    &v22,
                    (const char (*)[40])"inference word is interpreted, word_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v2 + 48));
            common::milog::MiLogStream::~MiLogStream(&v22);
            result = 0xFFFFFFFFLL;
          }
          else
          {
            p_interpret_action = &word_config_ptr->interpret_action;
            ParentQuest::execInferenceAction(this, &word_config_ptr->interpret_action, *(_DWORD *)(v2 + 48));
            v16 = std::__detail::_Node_iterator<std::pair<unsigned int const,ParentQuestInferenceWordData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,ParentQuestInferenceWordData>,false,false> *const)(v2 + 64));
            v17 = *(_BYTE *)(((unsigned __int64)&v16->second.is_interpret >> 3) + 0x7FFF8000);
            if ( v17 != 0 && (((unsigned __int8)v16 + 8) & 7) >= v17 )
            {
              LOBYTE(p_interpret_action) = v17 != 0;
              __asan_report_store1(&v16->second.is_interpret, p_interpret_action, v16);
            }
            v16->second.is_interpret = 1;
            ParentQuest::notifyInferenceData(this);
            result = 0LL;
          }
        }
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/quest/parent_quest.cpp",
        "interpretInferenceWord",
        857);
      v9 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
             &v22,
             (const char (*)[46])"findInferenceWordExcelConfig failed, word_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v22);
      result = 0xFFFFFFFFLL;
    }
  }
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

// Line 884: range 0000000016CD9AEA-0000000016CDA216
__int64 __fastcall ParentQuest::associateInferenceWord(
        ParentQuest *const this,
        uint32_t base_word_id,
        uint32_t associate_word_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,ParentQuestInferenceWordData>,false,false>::pointer v13; // rdx
  bool *p_is_associate; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  std::vector<data::InferenceAction> *p_associate_action; // rsi
  std::__detail::_Node_iterator<std::pair<unsigned int const,ParentQuestInferenceWordData>,false,false>::pointer v20; // rdx
  char v21; // cl
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,ParentQuestInferenceWordData>,false> __y; // [rsp+18h] [rbp-C8h] BYREF
  const InferenceExcelConfigMgr *inference_config_mgr; // [rsp+20h] [rbp-C0h]
  const data::InferenceWordExcelConfig *word_config_ptr; // [rsp+28h] [rbp-B8h]
  std::shared_ptr<Config> v26; // [rsp+30h] [rbp-B0h] BYREF
  common::milog::MiLogStream v27; // [rsp+40h] [rbp-A0h] BYREF
  char v28[128]; // [rsp+60h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 16 base_word_id:883 48 4 21 associate_word_id:883 64 8 18 word_data_iter:904";
  *(_QWORD *)(v3 + 16) = ParentQuest::associateInferenceWord;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 32) = base_word_id;
  *(_DWORD *)(v3 + 48) = associate_word_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->state_);
  }
  if ( this->state_ )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/quest/parent_quest.cpp",
      "associateInferenceWord",
      887);
    v6 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
           &v27,
           (const char (*)[45])"parent quest state invalid, parent_quest_id:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->parent_quest_id_);
    v8 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v7, (const char (*)[8])" state:");
    common::milog::MiLogStream::operator<<<data::ParentQuestState,(data::ParentQuestState*)0>(v8, &this->state_);
    common::milog::MiLogStream::~MiLogStream(&v27);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v26);
    inference_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26)->design_config.txt_config_mgr.inference_config_mgr;
    std::shared_ptr<Config>::~shared_ptr(&v26);
    word_config_ptr = data::InferenceExcelConfigMgrBase::findInferenceWordExcelConfig(
                        inference_config_mgr,
                        *(_DWORD *)(v3 + 32));
    if ( word_config_ptr )
    {
      if ( *(char *)(((unsigned __int64)&word_config_ptr->is_can_associate >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&word_config_ptr->is_can_associate);
      if ( !word_config_ptr->is_can_associate )
      {
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/quest/parent_quest.cpp",
          "associateInferenceWord",
          900);
        v11 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                &v27,
                (const char (*)[43])"inference word can not associate, word_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 32));
        common::milog::MiLogStream::~MiLogStream(&v27);
        result = 0xFFFFFFFFLL;
      }
      else
      {
        *(std::unordered_map<unsigned int,ParentQuestInferenceWordData>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,ParentQuestInferenceWordData>::find(
                                                                                                  &this->unlock_inference_word_map_,
                                                                                                  (const std::unordered_map<unsigned int,ParentQuestInferenceWordData>::key_type *)(v3 + 32));
        __y._M_cur = std::unordered_map<unsigned int,ParentQuestInferenceWordData>::end(&this->unlock_inference_word_map_)._M_cur;
        if ( std::__detail::operator==<std::pair<unsigned int const,ParentQuestInferenceWordData>,false>(
               (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,ParentQuestInferenceWordData>,false> *)(v3 + 64),
               &__y) )
        {
          common::milog::MiLogStream::create(
            &v27,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/quest/parent_quest.cpp",
            "associateInferenceWord",
            907);
          v12 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                  &v27,
                  (const char (*)[35])"inference word is locked, word_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 32));
          common::milog::MiLogStream::~MiLogStream(&v27);
          result = 0xFFFFFFFFLL;
        }
        else
        {
          v13 = std::__detail::_Node_iterator<std::pair<unsigned int const,ParentQuestInferenceWordData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,ParentQuestInferenceWordData>,false,false> *const)(v3 + 64));
          p_is_associate = &v13->second.is_associate;
          if ( *(_BYTE *)(((unsigned __int64)p_is_associate >> 3) + 0x7FFF8000) != 0
            && ((unsigned __int8)p_is_associate & 7) >= *(_BYTE *)(((unsigned __int64)p_is_associate >> 3) + 0x7FFF8000) )
          {
            __asan_report_load1(p_is_associate);
          }
          if ( v13->second.is_associate )
          {
            common::milog::MiLogStream::create(
              &v27,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/quest/parent_quest.cpp",
              "associateInferenceWord",
              912);
            v15 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                    &v27,
                    (const char (*)[39])"inference word is associated, word_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 32));
            common::milog::MiLogStream::~MiLogStream(&v27);
            result = 0xFFFFFFFFLL;
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)&word_config_ptr->associate_word_id >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)word_config_ptr + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&word_config_ptr->associate_word_id >> 3)
                                                                             + 0x7FFF8000) )
            {
              __asan_report_load4(&word_config_ptr->associate_word_id);
            }
            if ( word_config_ptr->associate_word_id == *(_DWORD *)(v3 + 48) )
            {
              p_associate_action = &word_config_ptr->associate_action;
              ParentQuest::execInferenceAction(this, &word_config_ptr->associate_action, *(_DWORD *)(v3 + 32));
              v20 = std::__detail::_Node_iterator<std::pair<unsigned int const,ParentQuestInferenceWordData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,ParentQuestInferenceWordData>,false,false> *const)(v3 + 64));
              v21 = *(_BYTE *)(((unsigned __int64)&v20->second.is_associate >> 3) + 0x7FFF8000);
              if ( v21 != 0 && (((unsigned __int8)v20 + 9) & 7) >= v21 )
              {
                LOBYTE(p_associate_action) = v21 != 0;
                __asan_report_store1(&v20->second.is_associate, p_associate_action, v20);
              }
              v20->second.is_associate = 1;
              ParentQuest::notifyInferenceData(this);
              result = 0LL;
            }
            else
            {
              common::milog::MiLogStream::create(
                &v27,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/player/quest/parent_quest.cpp",
                "associateInferenceWord",
                917);
              v16 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                      &v27,
                      (const char (*)[51])"error associate_word_id, config_associate_word_id:");
              v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v16,
                      &word_config_ptr->associate_word_id);
              v18 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                      v17,
                      (const char (*)[21])", associate_word_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v18,
                (const unsigned int *)(v3 + 48));
              common::milog::MiLogStream::~MiLogStream(&v27);
              result = 406LL;
            }
          }
        }
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/quest/parent_quest.cpp",
        "associateInferenceWord",
        895);
      v10 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
              &v27,
              (const char (*)[46])"findInferenceWordExcelConfig failed, word_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v27);
      result = 0xFFFFFFFFLL;
    }
  }
  if ( v28 == (char *)v3 )
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

// Line 927: range 0000000016CDA218-0000000016CDA9DE
__int64 __fastcall ParentQuest::submitInferenceWord(
        ParentQuest *const this,
        uint32_t word_id,
        unsigned __int64 conclusion_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  char *v13; // rsi
  std::__detail::_Node_iterator<std::pair<unsigned int const,ParentQuestInferenceWordData>,false,false>::pointer v14; // rdx
  char v15; // cl
  std::__detail::_Node_iterator<std::pair<unsigned int const,ParentQuestInferenceWordData>,false,false>::pointer v16; // rdx
  bool *p_is_submit; // rax
  common::milog::MiLogStream *v18; // rax
  char *v19; // rsi
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v20; // rdx
  unsigned int *p_second; // rax
  uint32_t second; // ecx
  char v23; // dl
  __int64 v24; // rdx
  unsigned int *v25; // rsi
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v26; // rdx
  unsigned int *v27; // rax
  uint32_t v28; // ecx
  char v29; // dl
  __int64 v30; // rdx
  std::__detail::_Node_iterator<std::pair<unsigned int const,ParentQuestInferenceWordData>,false,false>::pointer v31; // rdx
  char v32; // cl
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,ParentQuestInferenceWordData>,false> __y; // [rsp+28h] [rbp-F8h] BYREF
  const InferenceExcelConfigMgr *inference_config_mgr; // [rsp+30h] [rbp-F0h]
  std::shared_ptr<Config> v37; // [rsp+40h] [rbp-E0h] BYREF
  common::milog::MiLogStream v38; // [rsp+50h] [rbp-D0h] BYREF
  char v39[176]; // [rsp+70h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 11 word_id:926 64 8 18 word_data_iter:941 96 8 19 conclusion_iter:948";
  *(_QWORD *)(v3 + 16) = ParentQuest::submitInferenceWord;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 48) = word_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->state_);
  }
  if ( this->state_ )
  {
    common::milog::MiLogStream::create(
      &v38,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/quest/parent_quest.cpp",
      "submitInferenceWord",
      930);
    v6 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
           &v38,
           (const char (*)[45])"parent quest state invalid, parent_quest_id:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->parent_quest_id_);
    v8 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v7, (const char (*)[8])" state:");
    common::milog::MiLogStream::operator<<<data::ParentQuestState,(data::ParentQuestState*)0>(v8, &this->state_);
    common::milog::MiLogStream::~MiLogStream(&v38);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v37);
    inference_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v37)->design_config.txt_config_mgr.inference_config_mgr;
    std::shared_ptr<Config>::~shared_ptr(&v37);
    if ( data::InferenceExcelConfigMgrBase::findInferenceWordExcelConfig(inference_config_mgr, *(_DWORD *)(v3 + 48)) )
    {
      *(std::unordered_map<unsigned int,ParentQuestInferenceWordData>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,ParentQuestInferenceWordData>::find(
                                                                                                &this->unlock_inference_word_map_,
                                                                                                (const std::unordered_map<unsigned int,ParentQuestInferenceWordData>::key_type *)(v3 + 48));
      __y._M_cur = std::unordered_map<unsigned int,ParentQuestInferenceWordData>::end(&this->unlock_inference_word_map_)._M_cur;
      if ( std::__detail::operator==<std::pair<unsigned int const,ParentQuestInferenceWordData>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,ParentQuestInferenceWordData>,false> *)(v3 + 64),
             &__y) )
      {
        common::milog::MiLogStream::create(
          &v38,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/quest/parent_quest.cpp",
          "submitInferenceWord",
          944);
        v11 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                &v38,
                (const char (*)[35])"inference word is locked, word_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v38);
        result = 0xFFFFFFFFLL;
      }
      else
      {
        *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                        &inference_config_mgr->word_to_conclusion_map,
                                                                                        (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v3 + 48));
        __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,ParentQuestInferenceWordData>,false>::__node_type *)std::unordered_map<unsigned int,unsigned int>::end(&inference_config_mgr->word_to_conclusion_map)._M_cur;
        if ( std::__detail::operator==<std::pair<unsigned int const,unsigned int>,false>(
               (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v3 + 96),
               (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)&__y) )
        {
          common::milog::MiLogStream::create(
            &v38,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/quest/parent_quest.cpp",
            "submitInferenceWord",
            952);
          v12 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                  &v38,
                  (const char (*)[41])"submit word have no conclusion, word_id:");
          v13 = (char *)(v3 + 48);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream(&v38);
          v14 = std::__detail::_Node_iterator<std::pair<unsigned int const,ParentQuestInferenceWordData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,ParentQuestInferenceWordData>,false,false> *const)(v3 + 64));
          v15 = *(_BYTE *)(((unsigned __int64)&v14->second.is_submit >> 3) + 0x7FFF8000);
          if ( v15 != 0 && (((unsigned __int8)v14 + 10) & 7) >= v15 )
          {
            LOBYTE(v13) = v15 != 0;
            __asan_report_store1(&v14->second.is_submit, v13, v14);
          }
          v14->second.is_submit = 1;
          ParentQuest::notifyInferenceData(this);
          result = 407LL;
        }
        else
        {
          v16 = std::__detail::_Node_iterator<std::pair<unsigned int const,ParentQuestInferenceWordData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,ParentQuestInferenceWordData>,false,false> *const)(v3 + 64));
          p_is_submit = &v16->second.is_submit;
          if ( *(_BYTE *)(((unsigned __int64)p_is_submit >> 3) + 0x7FFF8000) != 0
            && ((unsigned __int8)p_is_submit & 7) >= *(_BYTE *)(((unsigned __int64)p_is_submit >> 3) + 0x7FFF8000) )
          {
            __asan_report_load1(p_is_submit);
          }
          if ( v16->second.is_submit )
          {
            common::milog::MiLogStream::create(
              &v38,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/quest/parent_quest.cpp",
              "submitInferenceWord",
              961);
            v18 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                    &v38,
                    (const char (*)[38])"inference word is submitted, word_id:");
            v19 = (char *)(v3 + 48);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v3 + 48));
            common::milog::MiLogStream::~MiLogStream(&v38);
            v20 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v3 + 96));
            p_second = &v20->second;
            if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(p_second);
            }
            second = v20->second;
            v23 = *(_BYTE *)((conclusion_id >> 3) + 0x7FFF8000);
            LOBYTE(v19) = v23 != 0;
            v24 = (v23 != 0) & (unsigned __int8)((char)((conclusion_id & 7) + 3) >= v23);
            if ( (_BYTE)v24 )
              __asan_report_store4(conclusion_id, v19, v24);
            *(_DWORD *)conclusion_id = second;
          }
          else
          {
            v25 = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v3 + 96))->second;
            std::set<unsigned int>::insert(&this->unlock_inference_conclusion_set_, v25);
            v26 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v3 + 96));
            v27 = &v26->second;
            if ( *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v27 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v27);
            }
            v28 = v26->second;
            v29 = *(_BYTE *)((conclusion_id >> 3) + 0x7FFF8000);
            LOBYTE(v25) = v29 != 0;
            v30 = (v29 != 0) & (unsigned __int8)((char)((conclusion_id & 7) + 3) >= v29);
            if ( (_BYTE)v30 )
              __asan_report_store4(conclusion_id, v25, v30);
            *(_DWORD *)conclusion_id = v28;
            v31 = std::__detail::_Node_iterator<std::pair<unsigned int const,ParentQuestInferenceWordData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,ParentQuestInferenceWordData>,false,false> *const)(v3 + 64));
            v32 = *(_BYTE *)(((unsigned __int64)&v31->second.is_submit >> 3) + 0x7FFF8000);
            if ( v32 != 0 && (((unsigned __int8)v31 + 10) & 7) >= v32 )
            {
              LOBYTE(v25) = v32 != 0;
              __asan_report_store1(&v31->second.is_submit, v25, v31);
            }
            v31->second.is_submit = 1;
          }
          ParentQuest::notifyInferenceData(this);
          result = 0LL;
        }
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v38,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/quest/parent_quest.cpp",
        "submitInferenceWord",
        937);
      v10 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
              &v38,
              (const char (*)[46])"findInferenceWordExcelConfig failed, word_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v38);
      result = 0xFFFFFFFFLL;
    }
  }
  if ( v39 == (char *)v3 )
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

// Line 977: range 0000000016CDA9E0-0000000016CDAE8E
void __fastcall ParentQuest::execInferenceAction(
        ParentQuest *const this,
        const std::vector<data::InferenceAction> *action_vec,
        uint32_t word_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  ParentQuestInferenceWordData *v10; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,ParentQuestInferenceWordData>,false,false>,bool> v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  std::vector<data::InferenceAction>::const_iterator __for_begin; // [rsp+20h] [rbp-C0h] BYREF
  std::vector<data::InferenceAction>::const_iterator __for_end; // [rsp+28h] [rbp-B8h] BYREF
  const std::vector<data::InferenceAction> *__for_range; // [rsp+30h] [rbp-B0h]
  const data::InferenceAction *action; // [rsp+38h] [rbp-A8h]
  common::milog::MiLogStream v19; // [rsp+40h] [rbp-A0h] BYREF
  char v20[128]; // [rsp+60h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 18 unlock_word_id:984 48 4 11 word_id:976 64 12 13 word_data:995";
  *(_QWORD *)(v3 + 16) = ParentQuest::execInferenceAction;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202177536;
  *(_DWORD *)(v3 + 48) = word_id;
  __for_range = action_vec;
  __for_begin._M_current = std::vector<data::InferenceAction>::begin(action_vec)._M_current;
  __for_end._M_current = std::vector<data::InferenceAction>::end(action_vec)._M_current;
  while ( __gnu_cxx::operator!=<data::InferenceAction const*,std::vector<data::InferenceAction>>(
            &__for_begin,
            &__for_end) )
  {
    action = __gnu_cxx::__normal_iterator<data::InferenceAction const*,std::vector<data::InferenceAction>>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)&action->type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&action->type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&action->type);
    }
    if ( action->type == INFERENCE_ACTION_UNLOCK_WORD )
    {
      *(_DWORD *)(v3 + 32) = 0;
      if ( common::tools::StringUtils::strToNum<unsigned int>(&action->param, (unsigned int *)(v3 + 32), 1) )
      {
        common::milog::MiLogStream::create(
          &v19,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/quest/parent_quest.cpp",
          "execInferenceAction",
          987);
        v6 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
               &v19,
               (const char (*)[24])"strToNum failed, param:");
        v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, &action->param);
        v8 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v7, (const char (*)[11])", word_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 32));
        common::milog::MiLogStream::~MiLogStream(&v19);
      }
      else if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,ParentQuestInferenceWordData>,unsigned int>(
                  &this->unlock_inference_word_map_,
                  (const unsigned int *)(v3 + 32)) )
      {
        common::milog::MiLogStream::create(
          &v19,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/quest/parent_quest.cpp",
          "execInferenceAction",
          992);
        v9 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
               &v19,
               (const char (*)[33])"word is already unlock, word_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 32));
        common::milog::MiLogStream::~MiLogStream(&v19);
      }
      else
      {
        ParentQuestInferenceWordData::ParentQuestInferenceWordData(
          (ParentQuestInferenceWordData *const)(v3 + 64),
          *(_DWORD *)(v3 + 32));
        *(_DWORD *)(v3 + 72) = *(_DWORD *)(v3 + 48);
        v11 = std::unordered_map<unsigned int,ParentQuestInferenceWordData>::emplace<unsigned int &,ParentQuestInferenceWordData&>(
                &this->unlock_inference_word_map_,
                (unsigned int *)(v3 + 32),
                (ParentQuestInferenceWordData *)(v3 + 64),
                (unsigned int *)&this->unlock_inference_word_map_,
                v10);
        if ( !v11.second )
        {
          common::milog::MiLogStream::create(
            &v19,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/quest/parent_quest.cpp",
            "execInferenceAction",
            999);
          v12 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                  &v19,
                  (const char (*)[35])"duplicate word_id failed, word_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream(&v19);
        }
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/quest/parent_quest.cpp",
        "execInferenceAction",
        1005);
      v13 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
              &v19,
              (const char (*)[31])"invalid inference action type:");
      common::milog::MiLogStream::operator<<<data::InferenceActionType,(data::InferenceActionType*)0>(
        v13,
        &action->type);
      common::milog::MiLogStream::~MiLogStream(&v19);
    }
    __gnu_cxx::__normal_iterator<data::InferenceAction const*,std::vector<data::InferenceAction>>::operator++(&__for_begin);
  }
  if ( v20 == (char *)v3 )
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

// Line 1012: range 0000000016CDAE90-0000000016CDAEC2
void __cdecl ParentQuest::clearInferenceData(ParentQuest *const this)
{
  std::unordered_map<unsigned int,ParentQuestInferenceWordData>::clear(&this->unlock_inference_word_map_);
  std::set<unsigned int>::clear(&this->unlock_inference_conclusion_set_);
};
