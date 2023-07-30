// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/home/home_group/seek_furniture_home_group_record.cpp

// Line 18: range 00000000145E0A54-00000000145E0CC5
void __cdecl SeekFurnitureOneRecord::fromBin(
        SeekFurnitureOneRecord *const this,
        const proto::HomeSeekFurnitureOneRecordBin *seek_furniture_play_record_bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  uint32_t v5; // edx
  const proto::HomeGroupPlayerInfoBin *v6; // rax
  std::vector<SeekFurniturePlayerScore>::value_type *v7; // rax
  google::protobuf::RepeatedPtrField<proto::HomeSeekFurniturePlayerScoreBin>::const_iterator __for_begin; // [rsp+10h] [rbp-110h] BYREF
  google::protobuf::RepeatedPtrField<proto::HomeSeekFurniturePlayerScoreBin>::const_iterator __for_end; // [rsp+18h] [rbp-108h] BYREF
  const google::protobuf::RepeatedPtrField<proto::HomeSeekFurniturePlayerScoreBin> *__for_range; // [rsp+20h] [rbp-100h]
  const proto::HomeSeekFurniturePlayerScoreBin *player_info; // [rsp+28h] [rbp-F8h]
  char v12[240]; // [rsp+30h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 128 15 player_score:22";
  *(_QWORD *)(v2 + 16) = SeekFurnitureOneRecord::fromBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450900) = -202116109;
  v5 = proto::HomeSeekFurnitureOneRecordBin::timestamp(seek_furniture_play_record_bin);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->time_stamp = v5;
  __for_range = proto::HomeSeekFurnitureOneRecordBin::engaged_player_score_list(seek_furniture_play_record_bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::HomeSeekFurniturePlayerScoreBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::HomeSeekFurniturePlayerScoreBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::HomeSeekFurniturePlayerScoreBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    player_info = google::protobuf::internal::RepeatedPtrIterator<proto::HomeSeekFurniturePlayerScoreBin const>::operator*(&__for_begin);
    SeekFurniturePlayerScore::SeekFurniturePlayerScore((SeekFurniturePlayerScore *const)(v2 + 32));
    *(_DWORD *)(v2 + 152) = proto::HomeSeekFurniturePlayerScoreBin::score(player_info);
    v6 = proto::HomeSeekFurniturePlayerScoreBin::player_info(player_info);
    HomeGroupPlayerInfo::fromBin((HomeGroupPlayerInfo *const)(v2 + 32), v6);
    v7 = std::move<SeekFurniturePlayerScore &>((SeekFurniturePlayerScore *)(v2 + 32));
    std::vector<SeekFurniturePlayerScore>::push_back(&this->engaged_player_score_info_vec, v7);
    SeekFurniturePlayerScore::~SeekFurniturePlayerScore((SeekFurniturePlayerScore *const)(v2 + 32));
    google::protobuf::internal::RepeatedPtrIterator<proto::HomeSeekFurniturePlayerScoreBin const>::operator++(&__for_begin);
  }
  if ( v12 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 30: range 00000000145E0CC6-00000000145E0DFE
void __cdecl SeekFurnitureOneRecord::toBin(
        const SeekFurnitureOneRecord *const this,
        proto::HomeSeekFurnitureOneRecordBin *seek_furniture_play_record_bin)
{
  std::vector<SeekFurniturePlayerScore>::const_iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::vector<SeekFurniturePlayerScore>::const_iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  const std::vector<SeekFurniturePlayerScore> *__for_range; // [rsp+20h] [rbp-20h]
  const SeekFurniturePlayerScore *player_score_info; // [rsp+28h] [rbp-18h]
  proto::HomeSeekFurniturePlayerScoreBin *player_score_bin; // [rsp+30h] [rbp-10h]
  proto::HomeGroupPlayerInfoBin *player_bin; // [rsp+38h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::HomeSeekFurnitureOneRecordBin::set_timestamp(seek_furniture_play_record_bin, this->time_stamp);
  __for_range = &this->engaged_player_score_info_vec;
  __for_begin._M_current = std::vector<SeekFurniturePlayerScore>::begin(&this->engaged_player_score_info_vec)._M_current;
  __for_end._M_current = std::vector<SeekFurniturePlayerScore>::end(&this->engaged_player_score_info_vec)._M_current;
  while ( __gnu_cxx::operator!=<SeekFurniturePlayerScore const*,std::vector<SeekFurniturePlayerScore>>(
            &__for_begin,
            &__for_end) )
  {
    player_score_info = __gnu_cxx::__normal_iterator<SeekFurniturePlayerScore const*,std::vector<SeekFurniturePlayerScore>>::operator*(&__for_begin);
    player_score_bin = proto::HomeSeekFurnitureOneRecordBin::add_engaged_player_score_list(seek_furniture_play_record_bin);
    if ( *(_BYTE *)(((unsigned __int64)&player_score_info->score >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&player_score_info->score >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::HomeSeekFurniturePlayerScoreBin::set_score(player_score_bin, player_score_info->score);
    player_bin = proto::HomeSeekFurniturePlayerScoreBin::mutable_player_info(player_score_bin);
    HomeGroupPlayerInfo::toBin(&player_score_info->player_info, player_bin);
    __gnu_cxx::__normal_iterator<SeekFurniturePlayerScore const*,std::vector<SeekFurniturePlayerScore>>::operator++(&__for_begin);
  }
};

// Line 42: range 00000000145E0E00-00000000145E0F38
void __cdecl SeekFurnitureOneRecord::toClient(
        const SeekFurnitureOneRecord *const this,
        proto::HomeSeekFurnitureOneRecord *seek_furniture_play_record)
{
  std::vector<SeekFurniturePlayerScore>::const_iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::vector<SeekFurniturePlayerScore>::const_iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  const std::vector<SeekFurniturePlayerScore> *__for_range; // [rsp+20h] [rbp-20h]
  const SeekFurniturePlayerScore *player_score_info; // [rsp+28h] [rbp-18h]
  proto::HomeSeekFurniturePlayerScore *player_score; // [rsp+30h] [rbp-10h]
  proto::HomeGroupPlayerInfo *player_info; // [rsp+38h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::HomeSeekFurnitureOneRecord::set_timestamp(seek_furniture_play_record, this->time_stamp);
  __for_range = &this->engaged_player_score_info_vec;
  __for_begin._M_current = std::vector<SeekFurniturePlayerScore>::begin(&this->engaged_player_score_info_vec)._M_current;
  __for_end._M_current = std::vector<SeekFurniturePlayerScore>::end(&this->engaged_player_score_info_vec)._M_current;
  while ( __gnu_cxx::operator!=<SeekFurniturePlayerScore const*,std::vector<SeekFurniturePlayerScore>>(
            &__for_begin,
            &__for_end) )
  {
    player_score_info = __gnu_cxx::__normal_iterator<SeekFurniturePlayerScore const*,std::vector<SeekFurniturePlayerScore>>::operator*(&__for_begin);
    player_score = proto::HomeSeekFurnitureOneRecord::add_engaged_player_score_list(seek_furniture_play_record);
    if ( *(_BYTE *)(((unsigned __int64)&player_score_info->score >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&player_score_info->score >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::HomeSeekFurniturePlayerScore::set_score(player_score, player_score_info->score);
    player_info = proto::HomeSeekFurniturePlayerScore::mutable_player_info(player_score);
    HomeGroupPlayerInfo::toClient(&player_score_info->player_info, player_info);
    __gnu_cxx::__normal_iterator<SeekFurniturePlayerScore const*,std::vector<SeekFurniturePlayerScore>>::operator++(&__for_begin);
  }
};

// Line 54: range 00000000145E0F3A-00000000145E1141
int32_t __cdecl SeekFurnitureHomeGroupRecord::fromBin(
        SeekFurnitureHomeGroupRecord *const this,
        const proto::HomeGroupRecordBin *home_group_record_bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::deque<SeekFurnitureOneRecord>::value_type *v5; // rax
  int32_t result; // eax
  google::protobuf::RepeatedPtrField<proto::HomeSeekFurnitureOneRecordBin>::const_iterator __for_begin; // [rsp+18h] [rbp-B8h] BYREF
  google::protobuf::RepeatedPtrField<proto::HomeSeekFurnitureOneRecordBin>::const_iterator __for_end; // [rsp+20h] [rbp-B0h] BYREF
  const proto::HomeSeekFurnitureAllRecordBin *seek_furniture_all_record; // [rsp+28h] [rbp-A8h]
  const google::protobuf::RepeatedPtrField<proto::HomeSeekFurnitureOneRecordBin> *__for_range; // [rsp+30h] [rbp-A0h]
  const proto::HomeSeekFurnitureOneRecordBin *seek_furniture_record; // [rsp+38h] [rbp-98h]
  char v12[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 13 one_record:59";
  *(_QWORD *)(v2 + 16) = SeekFurnitureHomeGroupRecord::fromBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  std::deque<SeekFurnitureOneRecord>::clear(&this->seek_furniture_play_record_deque_);
  seek_furniture_all_record = proto::HomeGroupRecordBin::seek_furniture_play_info_bin(home_group_record_bin);
  __for_range = proto::HomeSeekFurnitureAllRecordBin::record_list(seek_furniture_all_record);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::HomeSeekFurnitureOneRecordBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::HomeSeekFurnitureOneRecordBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::HomeSeekFurnitureOneRecordBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    seek_furniture_record = google::protobuf::internal::RepeatedPtrIterator<proto::HomeSeekFurnitureOneRecordBin const>::operator*(&__for_begin);
    SeekFurnitureOneRecord::SeekFurnitureOneRecord((SeekFurnitureOneRecord *const)(v2 + 32));
    SeekFurnitureOneRecord::fromBin((SeekFurnitureOneRecord *const)(v2 + 32), seek_furniture_record);
    v5 = std::move<SeekFurnitureOneRecord &>((SeekFurnitureOneRecord *)(v2 + 32));
    std::deque<SeekFurnitureOneRecord>::push_back(&this->seek_furniture_play_record_deque_, v5);
    SeekFurnitureOneRecord::~SeekFurnitureOneRecord((SeekFurnitureOneRecord *const)(v2 + 32));
    google::protobuf::internal::RepeatedPtrIterator<proto::HomeSeekFurnitureOneRecordBin const>::operator++(&__for_begin);
  }
  result = 0;
  if ( v12 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
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

// Line 67: range 00000000145E1142-00000000145E11F2
int32_t __cdecl SeekFurnitureHomeGroupRecord::toBin(
        const SeekFurnitureHomeGroupRecord *const this,
        proto::HomeGroupRecordBin *home_group_record_bin)
{
  proto::HomeSeekFurnitureOneRecordBin *v2; // rdx
  proto::HomeSeekFurnitureAllRecordBin *seek_furniture_play_info_bin; // [rsp+10h] [rbp-60h]
  std::_Deque_iterator<SeekFurnitureOneRecord,const SeekFurnitureOneRecord&,const SeekFurnitureOneRecord*>::reference seek_furniture_record; // [rsp+20h] [rbp-50h]
  std::deque<SeekFurnitureOneRecord>::const_iterator __for_begin; // [rsp+30h] [rbp-40h] BYREF
  std::deque<SeekFurnitureOneRecord>::const_iterator __for_end; // [rsp+50h] [rbp-20h] BYREF

  seek_furniture_play_info_bin = proto::HomeGroupRecordBin::mutable_seek_furniture_play_info_bin(home_group_record_bin);
  std::deque<SeekFurnitureOneRecord>::begin(&__for_begin, &this->seek_furniture_play_record_deque_);
  std::deque<SeekFurnitureOneRecord>::end(&__for_end, &this->seek_furniture_play_record_deque_);
  while ( std::operator!=<SeekFurnitureOneRecord,SeekFurnitureOneRecord const&,SeekFurnitureOneRecord const*>(
            &__for_begin,
            &__for_end) )
  {
    seek_furniture_record = std::_Deque_iterator<SeekFurnitureOneRecord,SeekFurnitureOneRecord const&,SeekFurnitureOneRecord const*>::operator*(&__for_begin);
    v2 = proto::HomeSeekFurnitureAllRecordBin::add_record_list(seek_furniture_play_info_bin);
    SeekFurnitureOneRecord::toBin(seek_furniture_record, v2);
    std::_Deque_iterator<SeekFurnitureOneRecord,SeekFurnitureOneRecord const&,SeekFurnitureOneRecord const*>::operator++(&__for_begin);
  }
  return 0;
};

// Line 78: range 00000000145E11F4-00000000145E134F
int32_t __cdecl SeekFurnitureHomeGroupRecord::toClient(
        const SeekFurnitureHomeGroupRecord *const this,
        proto::HomeGroupRecord *home_group_record)
{
  common::milog::MiLogStream *v2; // rax
  proto::HomeSeekFurnitureOneRecord *v4; // rdx
  proto::HomeSeekFurnitureAllRecord *seek_furniture_play_info; // [rsp+10h] [rbp-70h]
  std::_Deque_iterator<SeekFurnitureOneRecord,const SeekFurnitureOneRecord&,const SeekFurnitureOneRecord*>::reference seek_furniture_play_record; // [rsp+20h] [rbp-60h]
  std::deque<SeekFurnitureOneRecord>::const_iterator __for_begin; // [rsp+30h] [rbp-50h] BYREF
  std::deque<SeekFurnitureOneRecord>::const_iterator __for_end; // [rsp+50h] [rbp-30h] BYREF

  if ( BaseHomeGroupRecord::toClient(this, home_group_record) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&__for_end,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/home/home_group/seek_furniture_home_group_record.cpp",
      "toClient",
      81);
    v2 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
           (common::milog::MiLogStream *const)&__for_end,
           (const char (*)[48])"BaseHomeGroupRecord::toClient fails, group_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &this->group_id_);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__for_end);
    return -1;
  }
  else
  {
    seek_furniture_play_info = proto::HomeGroupRecord::mutable_seek_furniture_gallery_info(home_group_record);
    std::deque<SeekFurnitureOneRecord>::begin(&__for_begin, &this->seek_furniture_play_record_deque_);
    std::deque<SeekFurnitureOneRecord>::end(&__for_end, &this->seek_furniture_play_record_deque_);
    while ( std::operator!=<SeekFurnitureOneRecord,SeekFurnitureOneRecord const&,SeekFurnitureOneRecord const*>(
              &__for_begin,
              &__for_end) )
    {
      seek_furniture_play_record = std::_Deque_iterator<SeekFurnitureOneRecord,SeekFurnitureOneRecord const&,SeekFurnitureOneRecord const*>::operator*(&__for_begin);
      v4 = proto::HomeSeekFurnitureAllRecord::add_record_list(seek_furniture_play_info);
      SeekFurnitureOneRecord::toClient(seek_furniture_play_record, v4);
      std::_Deque_iterator<SeekFurnitureOneRecord,SeekFurnitureOneRecord const&,SeekFurnitureOneRecord const*>::operator++(&__for_begin);
    }
    return 0;
  }
};

// Line 94: range 00000000145E1350-00000000145E1735
int32_t __cdecl SeekFurnitureHomeGroupRecord::addRecord(
        SeekFurnitureHomeGroupRecord *const this,
        Player *player,
        BaseHomePlaySettleInfoPtr *p_settle_info_ptr,
        BaseHomePlayRankInfoPtr *p_rank_info_ptr)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  int32_t v7; // r14d
  std::__shared_ptr_access<SeekFurnitureHomePlaySettleInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<SeekFurnitureHomePlaySettleInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v11; // r14
  std::__shared_ptr_access<SeekFurnitureHomePlaySettleInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::vector<SeekFurniturePlayerScore> *p_engaged_player_score_info_vec; // r14
  std::__shared_ptr_access<SeekFurnitureHomePlaySettleInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::deque<SeekFurnitureOneRecord>::value_type *v15; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  int32_t result; // eax
  uint32_t max_size; // [rsp+24h] [rbp-CCh]
  unsigned __int64 val; // [rsp+28h] [rbp-C8h] BYREF
  std::shared_ptr<Config> v20; // [rsp+30h] [rbp-C0h] BYREF
  char v21[176]; // [rsp+40h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 32 16 23 seek_settle_info_ptr:95 64 32 14 one_record:107";
  *(_QWORD *)(v4 + 16) = SeekFurnitureHomeGroupRecord::addRecord;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -219021312;
  v6[536862723] = -202116109;
  std::dynamic_pointer_cast<SeekFurnitureHomePlaySettleInfo,BaseHomePlaySettleInfo>((const std::shared_ptr<BaseHomePlaySettleInfo> *)(v4 + 32));
  if ( std::operator==<SeekFurnitureHomePlaySettleInfo>(
         0LL,
         (const std::shared_ptr<SeekFurnitureHomePlaySettleInfo> *)(v4 + 32)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/home/home_group/seek_furniture_home_group_record.cpp",
      "addRecord",
      98);
    common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
      (common::milog::MiLogStream *const)(v4 + 64),
      (const char (*)[47])"seek furniture settle info dynamic cast failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 64));
    v7 = -1;
  }
  else
  {
    v8 = std::__shared_ptr_access<SeekFurnitureHomePlaySettleInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SeekFurnitureHomePlaySettleInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    if ( !std::vector<SeekFurniturePlayerScore>::size(&v8->engaged_player_score_info_vec)
      || (v9 = std::__shared_ptr_access<SeekFurnitureHomePlaySettleInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SeekFurnitureHomePlaySettleInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32)),
          std::vector<SeekFurniturePlayerScore>::size(&v9->engaged_player_score_info_vec) > 4) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 64),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/home/home_group/seek_furniture_home_group_record.cpp",
        "addRecord",
        103);
      v11 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
              (common::milog::MiLogStream *const)(v4 + 64),
              (const char (*)[36])"illegal seek_settle_info_ptr size: ");
      v12 = std::__shared_ptr_access<SeekFurnitureHomePlaySettleInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SeekFurnitureHomePlaySettleInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
      val = std::vector<SeekFurniturePlayerScore>::size(&v12->engaged_player_score_info_vec);
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v11, &val);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 64));
      v7 = -1;
    }
    else
    {
      p_engaged_player_score_info_vec = &std::__shared_ptr_access<SeekFurnitureHomePlaySettleInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SeekFurnitureHomePlaySettleInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32))->engaged_player_score_info_vec;
      v14 = std::__shared_ptr_access<SeekFurnitureHomePlaySettleInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SeekFurnitureHomePlaySettleInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
      if ( *(_BYTE *)(((unsigned __int64)&v14->time_stamp >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v14->time_stamp >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      SeekFurnitureOneRecord::SeekFurnitureOneRecord(
        (SeekFurnitureOneRecord *const)(v4 + 64),
        v14->time_stamp,
        p_engaged_player_score_info_vec);
      v15 = std::move<SeekFurnitureOneRecord &>((SeekFurnitureOneRecord *)(v4 + 64));
      std::deque<SeekFurnitureOneRecord>::push_front(&this->seek_furniture_play_record_deque_, v15);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v20);
      v16 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20);
      max_size = ConstValueExcelConfigMgr::getHomeRoomFurnitureGroupRecordLimit(&v16->design_config.txt_config_mgr.const_value_config_mgr);
      std::shared_ptr<Config>::~shared_ptr(&v20);
      while ( max_size < std::deque<SeekFurnitureOneRecord>::size(&this->seek_furniture_play_record_deque_) )
        std::deque<SeekFurnitureOneRecord>::pop_back(&this->seek_furniture_play_record_deque_);
      v7 = 0;
      SeekFurnitureOneRecord::~SeekFurnitureOneRecord((SeekFurnitureOneRecord *const)(v4 + 64));
    }
  }
  std::shared_ptr<SeekFurnitureHomePlaySettleInfo>::~shared_ptr((std::shared_ptr<SeekFurnitureHomePlaySettleInfo> *const)(v4 + 32));
  result = v7;
  if ( v21 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};
