// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/home/home_group/balloon_home_group_record.cpp

// Line 18: range 00000000145DCDCA-00000000145DCEE2
void __cdecl BalloonGalleryRecord::fromBin(
        BalloonGalleryRecord *const this,
        const proto::HomeBalloonGalleryRecordBin *balloon_gallery_record_bin)
{
  uint32_t v2; // edx
  uint32_t v3; // ecx
  const proto::HomeGroupPlayerInfoBin *v4; // rax
  uint32_t v5; // edx

  v2 = proto::HomeBalloonGalleryRecordBin::score(balloon_gallery_record_bin);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->score = v2;
  v3 = proto::HomeBalloonGalleryRecordBin::hit_count(balloon_gallery_record_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->hit_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->hit_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->hit_count);
  }
  this->hit_count = v3;
  v4 = proto::HomeBalloonGalleryRecordBin::player_info(balloon_gallery_record_bin);
  HomeGroupPlayerInfo::fromBin(&this->player_info, v4);
  v5 = proto::HomeBalloonGalleryRecordBin::timestamp(balloon_gallery_record_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->timestamp >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->timestamp >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->timestamp);
  }
  this->timestamp = v5;
};

// Line 27: range 00000000145DCEE4-00000000145DCFFB
void __cdecl BalloonGalleryRecord::toBin(
        const BalloonGalleryRecord *const this,
        proto::HomeBalloonGalleryRecordBin *balloon_gallery_record_bin)
{
  proto::HomeGroupPlayerInfoBin *player_info_bin; // [rsp+18h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::HomeBalloonGalleryRecordBin::set_score(balloon_gallery_record_bin, this->score);
  if ( *(_BYTE *)(((unsigned __int64)&this->hit_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->hit_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::HomeBalloonGalleryRecordBin::set_hit_count(balloon_gallery_record_bin, this->hit_count);
  player_info_bin = proto::HomeBalloonGalleryRecordBin::mutable_player_info(balloon_gallery_record_bin);
  HomeGroupPlayerInfo::toBin(&this->player_info, player_info_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->timestamp >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->timestamp >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::HomeBalloonGalleryRecordBin::set_timestamp(balloon_gallery_record_bin, this->timestamp);
};

// Line 36: range 00000000145DCFFC-00000000145DD113
void __cdecl BalloonGalleryRecord::toClient(
        const BalloonGalleryRecord *const this,
        proto::HomeBalloonGalleryRecord *balloon_gallery_record)
{
  proto::HomeGroupPlayerInfo *player_info_proto; // [rsp+18h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::HomeBalloonGalleryRecord::set_score(balloon_gallery_record, this->score);
  if ( *(_BYTE *)(((unsigned __int64)&this->hit_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->hit_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::HomeBalloonGalleryRecord::set_hit_count(balloon_gallery_record, this->hit_count);
  player_info_proto = proto::HomeBalloonGalleryRecord::mutable_player_info(balloon_gallery_record);
  HomeGroupPlayerInfo::toClient(&this->player_info, player_info_proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->timestamp >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->timestamp >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::HomeBalloonGalleryRecord::set_timestamp(balloon_gallery_record, this->timestamp);
};

// Line 45: range 00000000145DD114-00000000145DD368
int32_t __cdecl BalloonHomeGroupRecord::fromBin(
        BalloonHomeGroupRecord *const this,
        const proto::HomeGroupRecordBin *home_group_record_bin)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // rbx
  int32_t result; // eax
  google::protobuf::RepeatedPtrField<proto::HomeBalloonGalleryRecordBin>::const_iterator __for_begin; // [rsp+10h] [rbp-150h] BYREF
  google::protobuf::RepeatedPtrField<proto::HomeBalloonGalleryRecordBin>::const_iterator __for_end; // [rsp+18h] [rbp-148h] BYREF
  const proto::HomeBalloonRecordBin *balloon_gallery_info_bin; // [rsp+20h] [rbp-140h]
  const google::protobuf::RepeatedPtrField<proto::HomeBalloonGalleryRecordBin> *record_list_bin; // [rsp+28h] [rbp-138h]
  const google::protobuf::RepeatedPtrField<proto::HomeBalloonGalleryRecordBin> *__for_range; // [rsp+30h] [rbp-130h]
  const proto::HomeBalloonGalleryRecordBin *record_bin; // [rsp+38h] [rbp-128h]
  char v12[288]; // [rsp+40h] [rbp-120h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 48 136 9 record:51";
  *(_QWORD *)(v2 + 16) = BalloonHomeGroupRecord::fromBin;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862725] = -218103808;
  v4[536862726] = -202116109;
  v4[536862727] = -202116109;
  std::vector<BalloonGalleryRecord>::clear(&this->balloon_gallery_record_vec_);
  balloon_gallery_info_bin = proto::HomeGroupRecordBin::balloon_gallery_info_bin(home_group_record_bin);
  record_list_bin = proto::HomeBalloonRecordBin::record_list(balloon_gallery_info_bin);
  __for_range = record_list_bin;
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::HomeBalloonGalleryRecordBin>::begin(record_list_bin).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::HomeBalloonGalleryRecordBin>::end(record_list_bin).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::HomeBalloonGalleryRecordBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    record_bin = google::protobuf::internal::RepeatedPtrIterator<proto::HomeBalloonGalleryRecordBin const>::operator*(&__for_begin);
    BalloonGalleryRecord::BalloonGalleryRecord((BalloonGalleryRecord *const)(v2 + 48));
    BalloonGalleryRecord::fromBin((BalloonGalleryRecord *const)(v2 + 48), record_bin);
    std::vector<BalloonGalleryRecord>::push_back(
      &this->balloon_gallery_record_vec_,
      (const std::vector<BalloonGalleryRecord>::value_type *)(v2 + 48));
    BalloonGalleryRecord::~BalloonGalleryRecord((BalloonGalleryRecord *const)(v2 + 48));
    google::protobuf::internal::RepeatedPtrIterator<proto::HomeBalloonGalleryRecordBin const>::operator++(&__for_begin);
  }
  result = 0;
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8014) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF801C) = 0;
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

// Line 59: range 00000000145DD36A-00000000145DD414
int32_t __cdecl BalloonHomeGroupRecord::toBin(
        const BalloonHomeGroupRecord *const this,
        proto::HomeGroupRecordBin *home_group_record_bin)
{
  std::vector<BalloonGalleryRecord>::const_iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::vector<BalloonGalleryRecord>::const_iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  proto::HomeBalloonRecordBin *balloon_gallery_info_bin; // [rsp+20h] [rbp-20h]
  const std::vector<BalloonGalleryRecord> *__for_range; // [rsp+28h] [rbp-18h]
  const BalloonGalleryRecord *record; // [rsp+30h] [rbp-10h]
  proto::HomeBalloonGalleryRecordBin *record_bin; // [rsp+38h] [rbp-8h]

  balloon_gallery_info_bin = proto::HomeGroupRecordBin::mutable_balloon_gallery_info_bin(home_group_record_bin);
  __for_range = &this->balloon_gallery_record_vec_;
  __for_begin._M_current = std::vector<BalloonGalleryRecord>::begin(&this->balloon_gallery_record_vec_)._M_current;
  __for_end._M_current = std::vector<BalloonGalleryRecord>::end(&this->balloon_gallery_record_vec_)._M_current;
  while ( __gnu_cxx::operator!=<BalloonGalleryRecord const*,std::vector<BalloonGalleryRecord>>(&__for_begin, &__for_end) )
  {
    record = __gnu_cxx::__normal_iterator<BalloonGalleryRecord const*,std::vector<BalloonGalleryRecord>>::operator*(&__for_begin);
    record_bin = proto::HomeBalloonRecordBin::add_record_list(balloon_gallery_info_bin);
    BalloonGalleryRecord::toBin(record, record_bin);
    __gnu_cxx::__normal_iterator<BalloonGalleryRecord const*,std::vector<BalloonGalleryRecord>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 69: range 00000000145DD416-00000000145DD56B
int32_t __cdecl BalloonHomeGroupRecord::toClient(
        const BalloonHomeGroupRecord *const this,
        proto::HomeGroupRecord *home_group_record)
{
  common::milog::MiLogStream *v2; // rax
  std::vector<BalloonGalleryRecord>::const_iterator __for_begin; // [rsp+10h] [rbp-60h] BYREF
  std::vector<BalloonGalleryRecord>::const_iterator __for_end; // [rsp+18h] [rbp-58h] BYREF
  proto::HomeBalloonRecord *balloon_gallery_info; // [rsp+20h] [rbp-50h]
  const std::vector<BalloonGalleryRecord> *__for_range; // [rsp+28h] [rbp-48h]
  const BalloonGalleryRecord *record; // [rsp+30h] [rbp-40h]
  proto::HomeBalloonGalleryRecord *record_proto; // [rsp+38h] [rbp-38h]
  common::milog::MiLogStream v10; // [rsp+40h] [rbp-30h] BYREF

  if ( BaseHomeGroupRecord::toClient(this, home_group_record) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/home/home_group/balloon_home_group_record.cpp",
      "toClient",
      72);
    v2 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
           &v10,
           (const char (*)[48])"BaseHomeGroupRecord::toClient fails, group_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &this->group_id_);
    common::milog::MiLogStream::~MiLogStream(&v10);
    return -1;
  }
  else
  {
    balloon_gallery_info = proto::HomeGroupRecord::mutable_balloon_gallery_info(home_group_record);
    __for_range = &this->balloon_gallery_record_vec_;
    __for_begin._M_current = std::vector<BalloonGalleryRecord>::begin(&this->balloon_gallery_record_vec_)._M_current;
    __for_end._M_current = std::vector<BalloonGalleryRecord>::end(&this->balloon_gallery_record_vec_)._M_current;
    while ( __gnu_cxx::operator!=<BalloonGalleryRecord const*,std::vector<BalloonGalleryRecord>>(
              &__for_begin,
              &__for_end) )
    {
      record = __gnu_cxx::__normal_iterator<BalloonGalleryRecord const*,std::vector<BalloonGalleryRecord>>::operator*(&__for_begin);
      record_proto = proto::HomeBalloonRecord::add_record_list(balloon_gallery_info);
      BalloonGalleryRecord::toClient(record, record_proto);
      __gnu_cxx::__normal_iterator<BalloonGalleryRecord const*,std::vector<BalloonGalleryRecord>>::operator++(&__for_begin);
    }
    return 0;
  }
};

// Line 84: range 00000000145DD56C-00000000145DDC58
int32_t __cdecl BalloonHomeGroupRecord::addRecord(
        BalloonHomeGroupRecord *const this,
        Player *player,
        BaseHomePlaySettleInfoPtr *p_settle_info_ptr,
        BaseHomePlayRankInfoPtr *p_rank_info_ptr)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  int32_t v7; // r14d
  std::__shared_ptr_access<BalloonHomePlaySettleInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<BalloonHomePlaySettleInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  __gnu_cxx::__normal_iterator<BalloonGalleryRecord*,std::vector<BalloonGalleryRecord> >::pointer v10; // rax
  __gnu_cxx::__normal_iterator<BalloonGalleryRecord*,std::vector<BalloonGalleryRecord> >::pointer v11; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<BalloonHomePlayRankInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rdx
  bool *p_is_new_record; // rax
  std::__shared_ptr_access<BalloonHomePlayRankInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  int32_t result; // eax
  bool is_new_record; // [rsp+2Eh] [rbp-1D2h]
  bool is_record_inserted; // [rsp+2Fh] [rbp-1D1h]
  uint32_t rank; // [rsp+30h] [rbp-1D0h]
  uint32_t max_size; // [rsp+34h] [rbp-1CCh]
  __gnu_cxx::__normal_iterator<BalloonGalleryRecord*,std::vector<BalloonGalleryRecord> > __rhs; // [rsp+38h] [rbp-1C8h] BYREF
  std::shared_ptr<Config> v23; // [rsp+40h] [rbp-1C0h] BYREF
  common::milog::MiLogStream v24; // [rsp+50h] [rbp-1B0h] BYREF
  char v25[400]; // [rsp+70h] [rbp-190h] BYREF

  v4 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(352LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 48 8 8 iter:107 80 16 26 balloon_settle_info_ptr:85 112 16 24 balloon_rank_info_ptr:91 144 136 9 record:97";
  *(_QWORD *)(v4 + 16) = BalloonHomeGroupRecord::addRecord;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61937;
  v6[536862721] = -234881024;
  v6[536862722] = 62194;
  v6[536862723] = 62194;
  v6[536862724] = 62194;
  v6[536862728] = -218103808;
  v6[536862729] = -202116109;
  v6[536862730] = -202116109;
  std::dynamic_pointer_cast<BalloonHomePlaySettleInfo,BaseHomePlaySettleInfo>((const std::shared_ptr<BaseHomePlaySettleInfo> *)(v4 + 80));
  if ( std::operator==<BalloonHomePlaySettleInfo>(0LL, (const std::shared_ptr<BalloonHomePlaySettleInfo> *)(v4 + 80)) )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/home/home_group/balloon_home_group_record.cpp",
      "addRecord",
      88);
    common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
      &v24,
      (const char (*)[40])"balloon settle info dynamic cast failed");
    common::milog::MiLogStream::~MiLogStream(&v24);
    v7 = -1;
  }
  else
  {
    std::dynamic_pointer_cast<BalloonHomePlayRankInfo,BaseHomePlayRankInfo>((const std::shared_ptr<BaseHomePlayRankInfo> *)(v4 + 112));
    if ( std::operator==<BalloonHomePlayRankInfo>(0LL, (const std::shared_ptr<BalloonHomePlayRankInfo> *)(v4 + 112)) )
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/home/home_group/balloon_home_group_record.cpp",
        "addRecord",
        94);
      common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
        &v24,
        (const char (*)[38])"balloon rank info dynamic cast failed");
      common::milog::MiLogStream::~MiLogStream(&v24);
      v7 = -1;
    }
    else
    {
      BalloonGalleryRecord::BalloonGalleryRecord((BalloonGalleryRecord *const)(v4 + 144));
      v8 = std::__shared_ptr_access<BalloonHomePlaySettleInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BalloonHomePlaySettleInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
      *(_DWORD *)(v4 + 144) = proto::BalloonGallerySettleInfo::score(&v8->settle_info);
      v9 = std::__shared_ptr_access<BalloonHomePlaySettleInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BalloonHomePlaySettleInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
      *(_DWORD *)(v4 + 148) = proto::BalloonGallerySettleInfo::hit_count(&v9->settle_info);
      *(_DWORD *)(v4 + 272) = common::tools::TimeUtils::getNow();
      HomeGroupPlayerInfo::fromPlayer((HomeGroupPlayerInfo *const)(v4 + 152), player);
      is_new_record = 1;
      rank = 1;
      is_record_inserted = 0;
      *(std::vector<BalloonGalleryRecord>::iterator *)(v4 + 48) = std::vector<BalloonGalleryRecord>::begin(&this->balloon_gallery_record_vec_);
      while ( 1 )
      {
        __rhs._M_current = std::vector<BalloonGalleryRecord>::end(&this->balloon_gallery_record_vec_)._M_current;
        if ( !__gnu_cxx::operator!=<BalloonGalleryRecord *,std::vector<BalloonGalleryRecord>>(
                (const __gnu_cxx::__normal_iterator<BalloonGalleryRecord*,std::vector<BalloonGalleryRecord> > *)(v4 + 48),
                &__rhs) )
          break;
        v10 = __gnu_cxx::__normal_iterator<BalloonGalleryRecord *,std::vector<BalloonGalleryRecord>>::operator->((const __gnu_cxx::__normal_iterator<BalloonGalleryRecord*,std::vector<BalloonGalleryRecord> > *const)(v4 + 48));
        if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        if ( v10->score < *(_DWORD *)(v4 + 144) )
        {
          __gnu_cxx::__normal_iterator<BalloonGalleryRecord const*,std::vector<BalloonGalleryRecord>>::__normal_iterator<BalloonGalleryRecord*>(
            (__gnu_cxx::__normal_iterator<const BalloonGalleryRecord*,std::vector<BalloonGalleryRecord> > *const)&__rhs,
            (const __gnu_cxx::__normal_iterator<BalloonGalleryRecord*,std::vector<BalloonGalleryRecord> > *)(v4 + 48));
          std::vector<BalloonGalleryRecord>::insert(
            &this->balloon_gallery_record_vec_,
            (std::vector<BalloonGalleryRecord>::const_iterator)__rhs._M_current,
            (const std::vector<BalloonGalleryRecord>::value_type *)(v4 + 144));
          is_record_inserted = 1;
          break;
        }
        v11 = __gnu_cxx::__normal_iterator<BalloonGalleryRecord *,std::vector<BalloonGalleryRecord>>::operator->((const __gnu_cxx::__normal_iterator<BalloonGalleryRecord*,std::vector<BalloonGalleryRecord> > *const)(v4 + 48));
        if ( *(_BYTE *)(((unsigned __int64)&v11->player_info >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v11->player_info >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        if ( v11->player_info.uid == *(_DWORD *)(v4 + 152) )
          is_new_record = 0;
        ++rank;
        __gnu_cxx::__normal_iterator<BalloonGalleryRecord *,std::vector<BalloonGalleryRecord>>::operator++(
          (__gnu_cxx::__normal_iterator<BalloonGalleryRecord*,std::vector<BalloonGalleryRecord> > *const)(v4 + 48),
          0);
      }
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v23);
      v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v23);
      max_size = ConstValueExcelConfigMgr::getHomeRoomFurnitureGroupRecordLimit(&v12->design_config.txt_config_mgr.const_value_config_mgr);
      std::shared_ptr<Config>::~shared_ptr(&v23);
      if ( !is_record_inserted && std::vector<BalloonGalleryRecord>::size(&this->balloon_gallery_record_vec_) < max_size )
        std::vector<BalloonGalleryRecord>::push_back(
          &this->balloon_gallery_record_vec_,
          (const std::vector<BalloonGalleryRecord>::value_type *)(v4 + 144));
      if ( std::vector<BalloonGalleryRecord>::size(&this->balloon_gallery_record_vec_) > max_size )
        std::vector<BalloonGalleryRecord>::resize(&this->balloon_gallery_record_vec_, max_size);
      v14 = std::__shared_ptr_access<BalloonHomePlayRankInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BalloonHomePlayRankInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 112));
      p_is_new_record = &v14->rank_info.is_new_record;
      if ( *(_BYTE *)(((unsigned __int64)p_is_new_record >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)p_is_new_record & 7) >= *(_BYTE *)(((unsigned __int64)p_is_new_record >> 3) + 0x7FFF8000) )
      {
        __asan_report_store1(p_is_new_record);
      }
      v14->rank_info.is_new_record = is_new_record;
      v16 = std::__shared_ptr_access<BalloonHomePlayRankInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BalloonHomePlayRankInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 112));
      if ( *(_BYTE *)(((unsigned __int64)&v16->rank_info >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v16->rank_info >> 3) + 0x7FFF8000) <= 3 )
      {
        v16 = (std::__shared_ptr_access<BalloonHomePlayRankInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v16->rank_info);
      }
      v16->rank_info.rank = rank;
      v7 = 0;
      BalloonGalleryRecord::~BalloonGalleryRecord((BalloonGalleryRecord *const)(v4 + 144));
    }
    std::shared_ptr<BalloonHomePlayRankInfo>::~shared_ptr((std::shared_ptr<BalloonHomePlayRankInfo> *const)(v4 + 112));
  }
  std::shared_ptr<BalloonHomePlaySettleInfo>::~shared_ptr((std::shared_ptr<BalloonHomePlaySettleInfo> *const)(v4 + 80));
  result = v7;
  if ( v25 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8028) = -168430091;
  }
  return result;
};
