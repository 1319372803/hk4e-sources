// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/home/home_group/racing_home_group_record.cpp

// Line 18: range 00000000145DFCD8-00000000145DFD9F
void __cdecl RacingGalleryRecord::fromBin(
        RacingGalleryRecord *const this,
        const proto::HomeRacingGalleryRecordBin *racing_gallery_record_bin)
{
  uint32_t v2; // edx
  const proto::HomeGroupPlayerInfoBin *v3; // rax
  uint32_t v4; // edx

  v2 = proto::HomeRacingGalleryRecordBin::use_time(racing_gallery_record_bin);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->use_time = v2;
  v3 = proto::HomeRacingGalleryRecordBin::player_info(racing_gallery_record_bin);
  HomeGroupPlayerInfo::fromBin(&this->player_info, v3);
  v4 = proto::HomeRacingGalleryRecordBin::timestamp(racing_gallery_record_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->timestamp >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->timestamp >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->timestamp);
  }
  this->timestamp = v4;
};

// Line 25: range 00000000145DFDA0-00000000145DFE67
void __cdecl RacingGalleryRecord::toBin(
        const RacingGalleryRecord *const this,
        proto::HomeRacingGalleryRecordBin *racing_gallery_record_bin)
{
  proto::HomeGroupPlayerInfoBin *player_info_bin; // [rsp+18h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::HomeRacingGalleryRecordBin::set_use_time(racing_gallery_record_bin, this->use_time);
  player_info_bin = proto::HomeRacingGalleryRecordBin::mutable_player_info(racing_gallery_record_bin);
  HomeGroupPlayerInfo::toBin(&this->player_info, player_info_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->timestamp >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->timestamp >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::HomeRacingGalleryRecordBin::set_timestamp(racing_gallery_record_bin, this->timestamp);
};

// Line 33: range 00000000145DFE68-00000000145DFF2F
void __cdecl RacingGalleryRecord::toClient(
        const RacingGalleryRecord *const this,
        proto::HomeRacingGalleryRecord *racing_gallery_record)
{
  proto::HomeGroupPlayerInfo *player_info_proto; // [rsp+18h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::HomeRacingGalleryRecord::set_use_time(racing_gallery_record, this->use_time);
  player_info_proto = proto::HomeRacingGalleryRecord::mutable_player_info(racing_gallery_record);
  HomeGroupPlayerInfo::toClient(&this->player_info, player_info_proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->timestamp >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->timestamp >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::HomeRacingGalleryRecord::set_timestamp(racing_gallery_record, this->timestamp);
};

// Line 41: range 00000000145DFF30-00000000145E0184
int32_t __cdecl RacingHomeGroupRecord::fromBin(
        RacingHomeGroupRecord *const this,
        const proto::HomeGroupRecordBin *home_group_record_bin)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // rbx
  int32_t result; // eax
  google::protobuf::RepeatedPtrField<proto::HomeRacingGalleryRecordBin>::const_iterator __for_begin; // [rsp+10h] [rbp-150h] BYREF
  google::protobuf::RepeatedPtrField<proto::HomeRacingGalleryRecordBin>::const_iterator __for_end; // [rsp+18h] [rbp-148h] BYREF
  const proto::HomeRacingRecordBin *racing_gallery_info_bin; // [rsp+20h] [rbp-140h]
  const google::protobuf::RepeatedPtrField<proto::HomeRacingGalleryRecordBin> *record_list_bin; // [rsp+28h] [rbp-138h]
  const google::protobuf::RepeatedPtrField<proto::HomeRacingGalleryRecordBin> *__for_range; // [rsp+30h] [rbp-130h]
  const proto::HomeRacingGalleryRecordBin *record_bin; // [rsp+38h] [rbp-128h]
  char v12[288]; // [rsp+40h] [rbp-120h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 48 136 9 record:47";
  *(_QWORD *)(v2 + 16) = RacingHomeGroupRecord::fromBin;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862725] = -218103808;
  v4[536862726] = -202116109;
  v4[536862727] = -202116109;
  std::vector<RacingGalleryRecord>::clear(&this->racing_gallery_record_vec_);
  racing_gallery_info_bin = proto::HomeGroupRecordBin::racing_gallery_info_bin(home_group_record_bin);
  record_list_bin = proto::HomeRacingRecordBin::record_list(racing_gallery_info_bin);
  __for_range = record_list_bin;
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::HomeRacingGalleryRecordBin>::begin(record_list_bin).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::HomeRacingGalleryRecordBin>::end(record_list_bin).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::HomeRacingGalleryRecordBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    record_bin = google::protobuf::internal::RepeatedPtrIterator<proto::HomeRacingGalleryRecordBin const>::operator*(&__for_begin);
    RacingGalleryRecord::RacingGalleryRecord((RacingGalleryRecord *const)(v2 + 48));
    RacingGalleryRecord::fromBin((RacingGalleryRecord *const)(v2 + 48), record_bin);
    std::vector<RacingGalleryRecord>::push_back(
      &this->racing_gallery_record_vec_,
      (const std::vector<RacingGalleryRecord>::value_type *)(v2 + 48));
    RacingGalleryRecord::~RacingGalleryRecord((RacingGalleryRecord *const)(v2 + 48));
    google::protobuf::internal::RepeatedPtrIterator<proto::HomeRacingGalleryRecordBin const>::operator++(&__for_begin);
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

// Line 55: range 00000000145E0186-00000000145E0230
int32_t __cdecl RacingHomeGroupRecord::toBin(
        const RacingHomeGroupRecord *const this,
        proto::HomeGroupRecordBin *home_group_record_bin)
{
  std::vector<RacingGalleryRecord>::const_iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::vector<RacingGalleryRecord>::const_iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  proto::HomeRacingRecordBin *racing_gallery_info_bin; // [rsp+20h] [rbp-20h]
  const std::vector<RacingGalleryRecord> *__for_range; // [rsp+28h] [rbp-18h]
  const RacingGalleryRecord *record; // [rsp+30h] [rbp-10h]
  proto::HomeRacingGalleryRecordBin *record_bin; // [rsp+38h] [rbp-8h]

  racing_gallery_info_bin = proto::HomeGroupRecordBin::mutable_racing_gallery_info_bin(home_group_record_bin);
  __for_range = &this->racing_gallery_record_vec_;
  __for_begin._M_current = std::vector<RacingGalleryRecord>::begin(&this->racing_gallery_record_vec_)._M_current;
  __for_end._M_current = std::vector<RacingGalleryRecord>::end(&this->racing_gallery_record_vec_)._M_current;
  while ( __gnu_cxx::operator!=<RacingGalleryRecord const*,std::vector<RacingGalleryRecord>>(&__for_begin, &__for_end) )
  {
    record = __gnu_cxx::__normal_iterator<RacingGalleryRecord const*,std::vector<RacingGalleryRecord>>::operator*(&__for_begin);
    record_bin = proto::HomeRacingRecordBin::add_record_list(racing_gallery_info_bin);
    RacingGalleryRecord::toBin(record, record_bin);
    __gnu_cxx::__normal_iterator<RacingGalleryRecord const*,std::vector<RacingGalleryRecord>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 66: range 00000000145E0232-00000000145E0387
int32_t __cdecl RacingHomeGroupRecord::toClient(
        const RacingHomeGroupRecord *const this,
        proto::HomeGroupRecord *home_group_record)
{
  common::milog::MiLogStream *v2; // rax
  std::vector<RacingGalleryRecord>::const_iterator __for_begin; // [rsp+10h] [rbp-60h] BYREF
  std::vector<RacingGalleryRecord>::const_iterator __for_end; // [rsp+18h] [rbp-58h] BYREF
  proto::HomeRacingRecord *racing_gallery_info; // [rsp+20h] [rbp-50h]
  const std::vector<RacingGalleryRecord> *__for_range; // [rsp+28h] [rbp-48h]
  const RacingGalleryRecord *record; // [rsp+30h] [rbp-40h]
  proto::HomeRacingGalleryRecord *record_proto; // [rsp+38h] [rbp-38h]
  common::milog::MiLogStream v10; // [rsp+40h] [rbp-30h] BYREF

  if ( BaseHomeGroupRecord::toClient(this, home_group_record) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/home/home_group/racing_home_group_record.cpp",
      "toClient",
      69);
    v2 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
           &v10,
           (const char (*)[48])"BaseHomeGroupRecord::toClient fails, group_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &this->group_id_);
    common::milog::MiLogStream::~MiLogStream(&v10);
    return -1;
  }
  else
  {
    racing_gallery_info = proto::HomeGroupRecord::mutable_racing_gallery_info(home_group_record);
    __for_range = &this->racing_gallery_record_vec_;
    __for_begin._M_current = std::vector<RacingGalleryRecord>::begin(&this->racing_gallery_record_vec_)._M_current;
    __for_end._M_current = std::vector<RacingGalleryRecord>::end(&this->racing_gallery_record_vec_)._M_current;
    while ( __gnu_cxx::operator!=<RacingGalleryRecord const*,std::vector<RacingGalleryRecord>>(&__for_begin, &__for_end) )
    {
      record = __gnu_cxx::__normal_iterator<RacingGalleryRecord const*,std::vector<RacingGalleryRecord>>::operator*(&__for_begin);
      record_proto = proto::HomeRacingRecord::add_record_list(racing_gallery_info);
      RacingGalleryRecord::toClient(record, record_proto);
      __gnu_cxx::__normal_iterator<RacingGalleryRecord const*,std::vector<RacingGalleryRecord>>::operator++(&__for_begin);
    }
    return 0;
  }
};

// Line 82: range 00000000145E0388-00000000145E0A53
int32_t __cdecl RacingHomeGroupRecord::addRecord(
        RacingHomeGroupRecord *const this,
        Player *player,
        BaseHomePlaySettleInfoPtr *p_settle_info_ptr,
        BaseHomePlayRankInfoPtr *p_rank_info_ptr)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  int32_t v7; // r14d
  std::__shared_ptr_access<RacingHomePlaySettleInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  __gnu_cxx::__normal_iterator<RacingGalleryRecord*,std::vector<RacingGalleryRecord> >::pointer v9; // rax
  __gnu_cxx::__normal_iterator<RacingGalleryRecord*,std::vector<RacingGalleryRecord> >::pointer v10; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<RacingHomePlayRankInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rdx
  bool *p_is_new_record; // rax
  std::__shared_ptr_access<RacingHomePlayRankInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  int32_t result; // eax
  bool is_new_record; // [rsp+2Eh] [rbp-1D2h]
  bool is_record_inserted; // [rsp+2Fh] [rbp-1D1h]
  uint32_t rank; // [rsp+30h] [rbp-1D0h]
  uint32_t max_size; // [rsp+34h] [rbp-1CCh]
  __gnu_cxx::__normal_iterator<RacingGalleryRecord*,std::vector<RacingGalleryRecord> > __rhs; // [rsp+38h] [rbp-1C8h] BYREF
  std::shared_ptr<Config> v22; // [rsp+40h] [rbp-1C0h] BYREF
  common::milog::MiLogStream v23; // [rsp+50h] [rbp-1B0h] BYREF
  char v24[400]; // [rsp+70h] [rbp-190h] BYREF

  v4 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(352LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 48 8 8 iter:104 80 16 25 racing_settle_info_ptr:83 112 16 23 racing_rank_info_ptr:89 144 136 9 record:95";
  *(_QWORD *)(v4 + 16) = RacingHomeGroupRecord::addRecord;
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
  std::dynamic_pointer_cast<RacingHomePlaySettleInfo,BaseHomePlaySettleInfo>((const std::shared_ptr<BaseHomePlaySettleInfo> *)(v4 + 80));
  if ( std::operator==<RacingHomePlaySettleInfo>(0LL, (const std::shared_ptr<RacingHomePlaySettleInfo> *)(v4 + 80)) )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/home/home_group/racing_home_group_record.cpp",
      "addRecord",
      86);
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      &v23,
      (const char (*)[39])"racing settle info dynamic cast failed");
    common::milog::MiLogStream::~MiLogStream(&v23);
    v7 = -1;
  }
  else
  {
    std::dynamic_pointer_cast<RacingHomePlayRankInfo,BaseHomePlayRankInfo>((const std::shared_ptr<BaseHomePlayRankInfo> *)(v4 + 112));
    if ( std::operator==<RacingHomePlayRankInfo>(0LL, (const std::shared_ptr<RacingHomePlayRankInfo> *)(v4 + 112)) )
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/home/home_group/racing_home_group_record.cpp",
        "addRecord",
        92);
      common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
        &v23,
        (const char (*)[37])"racing rank info dynamic cast failed");
      common::milog::MiLogStream::~MiLogStream(&v23);
      v7 = -1;
    }
    else
    {
      RacingGalleryRecord::RacingGalleryRecord((RacingGalleryRecord *const)(v4 + 144));
      v8 = std::__shared_ptr_access<RacingHomePlaySettleInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RacingHomePlaySettleInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
      *(_DWORD *)(v4 + 144) = proto::RacingGallerySettleInfo::use_time(&v8->settle_info);
      *(_DWORD *)(v4 + 272) = common::tools::TimeUtils::getNow();
      HomeGroupPlayerInfo::fromPlayer((HomeGroupPlayerInfo *const)(v4 + 152), player);
      is_new_record = 1;
      rank = 1;
      is_record_inserted = 0;
      *(std::vector<RacingGalleryRecord>::iterator *)(v4 + 48) = std::vector<RacingGalleryRecord>::begin(&this->racing_gallery_record_vec_);
      while ( 1 )
      {
        __rhs._M_current = std::vector<RacingGalleryRecord>::end(&this->racing_gallery_record_vec_)._M_current;
        if ( !__gnu_cxx::operator!=<RacingGalleryRecord *,std::vector<RacingGalleryRecord>>(
                (const __gnu_cxx::__normal_iterator<RacingGalleryRecord*,std::vector<RacingGalleryRecord> > *)(v4 + 48),
                &__rhs) )
          break;
        v9 = __gnu_cxx::__normal_iterator<RacingGalleryRecord *,std::vector<RacingGalleryRecord>>::operator->((const __gnu_cxx::__normal_iterator<RacingGalleryRecord*,std::vector<RacingGalleryRecord> > *const)(v4 + 48));
        if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        if ( v9->use_time > *(_DWORD *)(v4 + 144) )
        {
          __gnu_cxx::__normal_iterator<RacingGalleryRecord const*,std::vector<RacingGalleryRecord>>::__normal_iterator<RacingGalleryRecord*>(
            (__gnu_cxx::__normal_iterator<const RacingGalleryRecord*,std::vector<RacingGalleryRecord> > *const)&__rhs,
            (const __gnu_cxx::__normal_iterator<RacingGalleryRecord*,std::vector<RacingGalleryRecord> > *)(v4 + 48));
          std::vector<RacingGalleryRecord>::insert(
            &this->racing_gallery_record_vec_,
            (std::vector<RacingGalleryRecord>::const_iterator)__rhs._M_current,
            (const std::vector<RacingGalleryRecord>::value_type *)(v4 + 144));
          is_record_inserted = 1;
          break;
        }
        v10 = __gnu_cxx::__normal_iterator<RacingGalleryRecord *,std::vector<RacingGalleryRecord>>::operator->((const __gnu_cxx::__normal_iterator<RacingGalleryRecord*,std::vector<RacingGalleryRecord> > *const)(v4 + 48));
        if ( *(_BYTE *)(((unsigned __int64)&v10->player_info >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v10->player_info >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        if ( v10->player_info.uid == *(_DWORD *)(v4 + 152) )
          is_new_record = 0;
        ++rank;
        __gnu_cxx::__normal_iterator<RacingGalleryRecord *,std::vector<RacingGalleryRecord>>::operator++(
          (__gnu_cxx::__normal_iterator<RacingGalleryRecord*,std::vector<RacingGalleryRecord> > *const)(v4 + 48),
          0);
      }
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v22);
      v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22);
      max_size = ConstValueExcelConfigMgr::getHomeRoomFurnitureGroupRecordLimit(&v11->design_config.txt_config_mgr.const_value_config_mgr);
      std::shared_ptr<Config>::~shared_ptr(&v22);
      if ( !is_record_inserted && std::vector<RacingGalleryRecord>::size(&this->racing_gallery_record_vec_) < max_size )
        std::vector<RacingGalleryRecord>::push_back(
          &this->racing_gallery_record_vec_,
          (const std::vector<RacingGalleryRecord>::value_type *)(v4 + 144));
      if ( std::vector<RacingGalleryRecord>::size(&this->racing_gallery_record_vec_) > max_size )
        std::vector<RacingGalleryRecord>::resize(&this->racing_gallery_record_vec_, max_size);
      v13 = std::__shared_ptr_access<RacingHomePlayRankInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RacingHomePlayRankInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 112));
      p_is_new_record = &v13->rank_info.is_new_record;
      if ( *(_BYTE *)(((unsigned __int64)p_is_new_record >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)p_is_new_record & 7) >= *(_BYTE *)(((unsigned __int64)p_is_new_record >> 3) + 0x7FFF8000) )
      {
        __asan_report_store1(p_is_new_record);
      }
      v13->rank_info.is_new_record = is_new_record;
      v15 = std::__shared_ptr_access<RacingHomePlayRankInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RacingHomePlayRankInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 112));
      if ( *(_BYTE *)(((unsigned __int64)&v15->rank_info >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v15->rank_info >> 3) + 0x7FFF8000) <= 3 )
      {
        v15 = (std::__shared_ptr_access<RacingHomePlayRankInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v15->rank_info);
      }
      v15->rank_info.rank = rank;
      v7 = 0;
      RacingGalleryRecord::~RacingGalleryRecord((RacingGalleryRecord *const)(v4 + 144));
    }
    std::shared_ptr<RacingHomePlayRankInfo>::~shared_ptr((std::shared_ptr<RacingHomePlayRankInfo> *const)(v4 + 112));
  }
  std::shared_ptr<RacingHomePlaySettleInfo>::~shared_ptr((std::shared_ptr<RacingHomePlaySettleInfo> *const)(v4 + 80));
  result = v7;
  if ( v24 == (char *)v4 )
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
