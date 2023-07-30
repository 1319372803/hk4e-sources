// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/home/home_group/stake_home_group_record.cpp

// Line 18: range 00000000145E1736-00000000145E1995
void __cdecl StakePlayRecord::fromBin(
        StakePlayRecord *const this,
        const proto::HomeStakePlayRecordBin *stake_play_record_bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  uint32_t v5; // edx
  std::vector<HomeGroupPlayerInfo>::value_type *v6; // rax
  google::protobuf::RepeatedPtrField<proto::HomeGroupPlayerInfoBin>::const_iterator __for_begin; // [rsp+10h] [rbp-110h] BYREF
  google::protobuf::RepeatedPtrField<proto::HomeGroupPlayerInfoBin>::const_iterator __for_end; // [rsp+18h] [rbp-108h] BYREF
  const google::protobuf::RepeatedPtrField<proto::HomeGroupPlayerInfoBin> *__for_range; // [rsp+20h] [rbp-100h]
  const proto::HomeGroupPlayerInfoBin *engaged_player_bin; // [rsp+28h] [rbp-F8h]
  char v11[240]; // [rsp+30h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 120 14 player_info:22";
  *(_QWORD *)(v2 + 16) = StakePlayRecord::fromBin;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862724] = -218103808;
  v4[536862725] = -202116109;
  v5 = proto::HomeStakePlayRecordBin::timestamp(stake_play_record_bin);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->timestamp = v5;
  __for_range = proto::HomeStakePlayRecordBin::engaged_player_info_list(stake_play_record_bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::HomeGroupPlayerInfoBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::HomeGroupPlayerInfoBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::HomeGroupPlayerInfoBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    engaged_player_bin = google::protobuf::internal::RepeatedPtrIterator<proto::HomeGroupPlayerInfoBin const>::operator*(&__for_begin);
    HomeGroupPlayerInfo::HomeGroupPlayerInfo((HomeGroupPlayerInfo *const)(v2 + 32));
    HomeGroupPlayerInfo::fromBin((HomeGroupPlayerInfo *const)(v2 + 32), engaged_player_bin);
    v6 = std::move<HomeGroupPlayerInfo &>((HomeGroupPlayerInfo *)(v2 + 32));
    std::vector<HomeGroupPlayerInfo>::push_back(&this->engaged_player_info_vec, v6);
    HomeGroupPlayerInfo::~HomeGroupPlayerInfo((HomeGroupPlayerInfo *const)(v2 + 32));
    google::protobuf::internal::RepeatedPtrIterator<proto::HomeGroupPlayerInfoBin const>::operator++(&__for_begin);
  }
  if ( v11 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
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

// Line 30: range 00000000145E1996-00000000145E1A6F
void __cdecl StakePlayRecord::toBin(
        const StakePlayRecord *const this,
        proto::HomeStakePlayRecordBin *stake_play_record_bin)
{
  std::vector<HomeGroupPlayerInfo>::const_iterator __for_begin; // [rsp+18h] [rbp-28h] BYREF
  std::vector<HomeGroupPlayerInfo>::const_iterator __for_end; // [rsp+20h] [rbp-20h] BYREF
  const std::vector<HomeGroupPlayerInfo> *__for_range; // [rsp+28h] [rbp-18h]
  const HomeGroupPlayerInfo *player_info; // [rsp+30h] [rbp-10h]
  proto::HomeGroupPlayerInfoBin *player_info_bin; // [rsp+38h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::HomeStakePlayRecordBin::set_timestamp(stake_play_record_bin, this->timestamp);
  __for_range = &this->engaged_player_info_vec;
  __for_begin._M_current = std::vector<HomeGroupPlayerInfo>::begin(&this->engaged_player_info_vec)._M_current;
  __for_end._M_current = std::vector<HomeGroupPlayerInfo>::end(&this->engaged_player_info_vec)._M_current;
  while ( __gnu_cxx::operator!=<HomeGroupPlayerInfo const*,std::vector<HomeGroupPlayerInfo>>(&__for_begin, &__for_end) )
  {
    player_info = __gnu_cxx::__normal_iterator<HomeGroupPlayerInfo const*,std::vector<HomeGroupPlayerInfo>>::operator*(&__for_begin);
    player_info_bin = proto::HomeStakePlayRecordBin::add_engaged_player_info_list(stake_play_record_bin);
    HomeGroupPlayerInfo::toBin(player_info, player_info_bin);
    __gnu_cxx::__normal_iterator<HomeGroupPlayerInfo const*,std::vector<HomeGroupPlayerInfo>>::operator++(&__for_begin);
  }
};

// Line 40: range 00000000145E1A70-00000000145E1B49
void __cdecl StakePlayRecord::toClient(
        const StakePlayRecord *const this,
        proto::HomeStakePlayRecord *stake_play_record)
{
  std::vector<HomeGroupPlayerInfo>::const_iterator __for_begin; // [rsp+18h] [rbp-28h] BYREF
  std::vector<HomeGroupPlayerInfo>::const_iterator __for_end; // [rsp+20h] [rbp-20h] BYREF
  const std::vector<HomeGroupPlayerInfo> *__for_range; // [rsp+28h] [rbp-18h]
  const HomeGroupPlayerInfo *player_info; // [rsp+30h] [rbp-10h]
  proto::HomeGroupPlayerInfo *player_info_proto; // [rsp+38h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::HomeStakePlayRecord::set_timestamp(stake_play_record, this->timestamp);
  __for_range = &this->engaged_player_info_vec;
  __for_begin._M_current = std::vector<HomeGroupPlayerInfo>::begin(&this->engaged_player_info_vec)._M_current;
  __for_end._M_current = std::vector<HomeGroupPlayerInfo>::end(&this->engaged_player_info_vec)._M_current;
  while ( __gnu_cxx::operator!=<HomeGroupPlayerInfo const*,std::vector<HomeGroupPlayerInfo>>(&__for_begin, &__for_end) )
  {
    player_info = __gnu_cxx::__normal_iterator<HomeGroupPlayerInfo const*,std::vector<HomeGroupPlayerInfo>>::operator*(&__for_begin);
    player_info_proto = proto::HomeStakePlayRecord::add_engaged_player_info_list(stake_play_record);
    HomeGroupPlayerInfo::toClient(player_info, player_info_proto);
    __gnu_cxx::__normal_iterator<HomeGroupPlayerInfo const*,std::vector<HomeGroupPlayerInfo>>::operator++(&__for_begin);
  }
};

// Line 50: range 00000000145E1B4A-00000000145E1D5F
int32_t __cdecl StakeHomeGroupRecord::fromBin(
        StakeHomeGroupRecord *const this,
        const proto::HomeGroupRecordBin *home_group_record_bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::deque<StakePlayRecord>::value_type *v5; // rax
  int32_t result; // eax
  google::protobuf::RepeatedPtrField<proto::HomeStakePlayRecordBin>::const_iterator __for_begin; // [rsp+10h] [rbp-C0h] BYREF
  google::protobuf::RepeatedPtrField<proto::HomeStakePlayRecordBin>::const_iterator __for_end; // [rsp+18h] [rbp-B8h] BYREF
  const proto::HomeStakeRecordBin *stake_play_info_bin; // [rsp+20h] [rbp-B0h]
  const google::protobuf::RepeatedPtrField<proto::HomeStakePlayRecordBin> *record_list_bin; // [rsp+28h] [rbp-A8h]
  const google::protobuf::RepeatedPtrField<proto::HomeStakePlayRecordBin> *__for_range; // [rsp+30h] [rbp-A0h]
  const proto::HomeStakePlayRecordBin *record_bin; // [rsp+38h] [rbp-98h]
  char v13[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 9 record:56";
  *(_QWORD *)(v2 + 16) = StakeHomeGroupRecord::fromBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  std::deque<StakePlayRecord>::clear(&this->stake_play_record_deque_);
  stake_play_info_bin = proto::HomeGroupRecordBin::stake_play_info_bin(home_group_record_bin);
  record_list_bin = proto::HomeStakeRecordBin::record_list(stake_play_info_bin);
  __for_range = record_list_bin;
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::HomeStakePlayRecordBin>::begin(record_list_bin).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::HomeStakePlayRecordBin>::end(record_list_bin).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::HomeStakePlayRecordBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    record_bin = google::protobuf::internal::RepeatedPtrIterator<proto::HomeStakePlayRecordBin const>::operator*(&__for_begin);
    StakePlayRecord::StakePlayRecord((StakePlayRecord *const)(v2 + 32));
    StakePlayRecord::fromBin((StakePlayRecord *const)(v2 + 32), record_bin);
    v5 = std::move<StakePlayRecord &>((StakePlayRecord *)(v2 + 32));
    std::deque<StakePlayRecord>::push_back(&this->stake_play_record_deque_, v5);
    StakePlayRecord::~StakePlayRecord((StakePlayRecord *const)(v2 + 32));
    google::protobuf::internal::RepeatedPtrIterator<proto::HomeStakePlayRecordBin const>::operator++(&__for_begin);
  }
  result = 0;
  if ( v13 == (char *)v2 )
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

// Line 65: range 00000000145E1D60-00000000145E1E10
int32_t __cdecl StakeHomeGroupRecord::toBin(
        const StakeHomeGroupRecord *const this,
        proto::HomeGroupRecordBin *home_group_record_bin)
{
  proto::HomeStakePlayRecordBin *v2; // rdx
  proto::HomeStakeRecordBin *stake_play_info_bin; // [rsp+10h] [rbp-60h]
  std::_Deque_iterator<StakePlayRecord,const StakePlayRecord&,const StakePlayRecord*>::reference record; // [rsp+20h] [rbp-50h]
  std::deque<StakePlayRecord>::const_iterator __for_begin; // [rsp+30h] [rbp-40h] BYREF
  std::deque<StakePlayRecord>::const_iterator __for_end; // [rsp+50h] [rbp-20h] BYREF

  stake_play_info_bin = proto::HomeGroupRecordBin::mutable_stake_play_info_bin(home_group_record_bin);
  std::deque<StakePlayRecord>::begin(&__for_begin, &this->stake_play_record_deque_);
  std::deque<StakePlayRecord>::end(&__for_end, &this->stake_play_record_deque_);
  while ( std::operator!=<StakePlayRecord,StakePlayRecord const&,StakePlayRecord const*>(&__for_begin, &__for_end) )
  {
    record = std::_Deque_iterator<StakePlayRecord,StakePlayRecord const&,StakePlayRecord const*>::operator*(&__for_begin);
    v2 = proto::HomeStakeRecordBin::add_record_list(stake_play_info_bin);
    StakePlayRecord::toBin(record, v2);
    std::_Deque_iterator<StakePlayRecord,StakePlayRecord const&,StakePlayRecord const*>::operator++(&__for_begin);
  }
  return 0;
};

// Line 76: range 00000000145E1E12-00000000145E1F6D
int32_t __cdecl StakeHomeGroupRecord::toClient(
        const StakeHomeGroupRecord *const this,
        proto::HomeGroupRecord *home_group_record)
{
  common::milog::MiLogStream *v2; // rax
  proto::HomeStakePlayRecord *v4; // rdx
  proto::HomeStakeRecord *stake_play_info; // [rsp+10h] [rbp-70h]
  std::_Deque_iterator<StakePlayRecord,const StakePlayRecord&,const StakePlayRecord*>::reference record; // [rsp+20h] [rbp-60h]
  std::deque<StakePlayRecord>::const_iterator __for_begin; // [rsp+30h] [rbp-50h] BYREF
  std::deque<StakePlayRecord>::const_iterator __for_end; // [rsp+50h] [rbp-30h] BYREF

  if ( BaseHomeGroupRecord::toClient(this, home_group_record) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&__for_end,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/home/home_group/stake_home_group_record.cpp",
      "toClient",
      79);
    v2 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
           (common::milog::MiLogStream *const)&__for_end,
           (const char (*)[48])"BaseHomeGroupRecord::toClient fails, group_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &this->group_id_);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__for_end);
    return -1;
  }
  else
  {
    stake_play_info = proto::HomeGroupRecord::mutable_stake_play_info(home_group_record);
    std::deque<StakePlayRecord>::begin(&__for_begin, &this->stake_play_record_deque_);
    std::deque<StakePlayRecord>::end(&__for_end, &this->stake_play_record_deque_);
    while ( std::operator!=<StakePlayRecord,StakePlayRecord const&,StakePlayRecord const*>(&__for_begin, &__for_end) )
    {
      record = std::_Deque_iterator<StakePlayRecord,StakePlayRecord const&,StakePlayRecord const*>::operator*(&__for_begin);
      v4 = proto::HomeStakeRecord::add_record_list(stake_play_info);
      StakePlayRecord::toClient(record, v4);
      std::_Deque_iterator<StakePlayRecord,StakePlayRecord const&,StakePlayRecord const*>::operator++(&__for_begin);
    }
    return 0;
  }
};

// Line 92: range 00000000145E1F6E-00000000145E2364
int32_t __cdecl StakeHomeGroupRecord::addRecord(
        StakeHomeGroupRecord *const this,
        Player *player,
        BaseHomePlaySettleInfoPtr *p_settle_info_ptr,
        BaseHomePlayRankInfoPtr *p_rank_info_ptr)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  int32_t v7; // r14d
  std::__shared_ptr_access<StakeHomePlaySettleInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<StakeHomePlaySettleInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v11; // r14
  std::__shared_ptr_access<StakeHomePlaySettleInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<StakeHomePlaySettleInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<StakeHomePlaySettleInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::deque<StakePlayRecord>::value_type *v15; // rax
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
  *(_QWORD *)(v4 + 8) = "2 32 16 24 stake_settle_info_ptr:93 64 32 10 record:104";
  *(_QWORD *)(v4 + 16) = StakeHomeGroupRecord::addRecord;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -219021312;
  v6[536862723] = -202116109;
  std::dynamic_pointer_cast<StakeHomePlaySettleInfo,BaseHomePlaySettleInfo>((const std::shared_ptr<BaseHomePlaySettleInfo> *)(v4 + 32));
  if ( std::operator==<StakeHomePlaySettleInfo>(0LL, (const std::shared_ptr<StakeHomePlaySettleInfo> *)(v4 + 32)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/home/home_group/stake_home_group_record.cpp",
      "addRecord",
      96);
    common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
      (common::milog::MiLogStream *const)(v4 + 64),
      (const char (*)[38])"stake settle info dynamic cast failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 64));
    v7 = -1;
  }
  else
  {
    v8 = std::__shared_ptr_access<StakeHomePlaySettleInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<StakeHomePlaySettleInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    if ( !std::vector<HomeGroupPlayerInfo>::size(&v8->engaged_player_info_vec)
      || (v9 = std::__shared_ptr_access<StakeHomePlaySettleInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<StakeHomePlaySettleInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32)),
          std::vector<HomeGroupPlayerInfo>::size(&v9->engaged_player_info_vec) > 4) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 64),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/home/home_group/stake_home_group_record.cpp",
        "addRecord",
        101);
      v11 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
              (common::milog::MiLogStream *const)(v4 + 64),
              (const char (*)[39])"illegal engaged_player_info_vec size: ");
      v12 = std::__shared_ptr_access<StakeHomePlaySettleInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<StakeHomePlaySettleInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
      val = std::vector<HomeGroupPlayerInfo>::size(&v12->engaged_player_info_vec);
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v11, &val);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 64));
      v7 = -1;
    }
    else
    {
      StakePlayRecord::StakePlayRecord((StakePlayRecord *const)(v4 + 64));
      v13 = std::__shared_ptr_access<StakeHomePlaySettleInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<StakeHomePlaySettleInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
      if ( *(_BYTE *)(((unsigned __int64)&v13->timestamp >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v13->timestamp >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v4 + 64) = v13->timestamp;
      v14 = std::__shared_ptr_access<StakeHomePlaySettleInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<StakeHomePlaySettleInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
      std::vector<HomeGroupPlayerInfo>::operator=(
        (std::vector<HomeGroupPlayerInfo> *const)(v4 + 72),
        &v14->engaged_player_info_vec);
      v15 = std::move<StakePlayRecord &>((StakePlayRecord *)(v4 + 64));
      std::deque<StakePlayRecord>::push_front(&this->stake_play_record_deque_, v15);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v20);
      v16 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20);
      max_size = ConstValueExcelConfigMgr::getHomeRoomFurnitureGroupRecordLimit(&v16->design_config.txt_config_mgr.const_value_config_mgr);
      std::shared_ptr<Config>::~shared_ptr(&v20);
      while ( max_size < std::deque<StakePlayRecord>::size(&this->stake_play_record_deque_) )
        std::deque<StakePlayRecord>::pop_back(&this->stake_play_record_deque_);
      v7 = 0;
      StakePlayRecord::~StakePlayRecord((StakePlayRecord *const)(v4 + 64));
    }
  }
  std::shared_ptr<StakeHomePlaySettleInfo>::~shared_ptr((std::shared_ptr<StakeHomePlaySettleInfo> *const)(v4 + 32));
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

// Line 117: range 00000000145F7155-00000000145F7178
void __cdecl GLOBAL__sub_I_merge_merge_gear_comp_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
  __static_initialization_and_destruction_1(1, 0xFFFF);
};

// Line 117: range 00000000145F695C-00000000145F7041
void __cdecl __static_initialization_and_destruction_0(int __initialize_p, int __priority)
{
  const std::_V2::error_category *v2; // rax
  const std::_V2::error_category *v3; // rax
  const std::_V2::error_category *v4; // rax
  const std::_V2::error_category *v5; // rax
  const std::_V2::error_category *v6; // rax
  const boost::system::error_category *system_category; // rax
  const boost::system::error_category *netdb_category; // rax
  const boost::system::error_category *addrinfo_category; // rax
  const boost::system::error_category *misc_category; // rax
  _BYTE *v11; // rcx
  _BYTE *v12; // rcx
  _BYTE *v13; // rcx
  _BYTE *v14; // rcx
  _BYTE *v15; // rcx
  _BYTE *v16; // rcx
  const char *v17; // rcx
  _BYTE *v18; // rcx
  _BYTE *v19; // rcx
  _BYTE *v20; // rcx
  _BYTE *v21; // rcx
  _BYTE *v22; // rcx
  _BYTE *v23; // rcx
  const char *v24; // rcx
  _BYTE *v25; // rcx
  _BYTE *v26; // rcx
  luabind::detail::class_id v27; // rax
  luabind::type_id cls; // [rsp+18h] [rbp-8h] BYREF

  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src_merge/merge_merge_gear_comp.cpp");
    if ( __priority == 0xFFFF )
    {
      std::ios_base::Init::Init(&std::__ioinit);
      __cxa_atexit((void (__fastcall *)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
      v2 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&std::ios_base::Init::~Init);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::invalid_span_context_error, 1, v2);
      v3 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::invalid_span_context_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::invalid_carrier_error, 2, v3);
      v4 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::invalid_carrier_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::span_context_corrupted_error, 3, v4);
      v5 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::span_context_corrupted_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::key_not_found_error, 4, v5);
      v6 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::key_not_found_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::lookup_key_not_supported_error, 5, v6);
      boost::none_t::none_t((boost::none_t *const)&boost::none, (boost::none_t::init_tag)5);
      boost::optional_ns::in_place_init_t::in_place_init_t(
        (boost::optional_ns::in_place_init_t *const)&boost::optional_ns::in_place_init,
        (boost::optional_ns::in_place_init_t::init_tag)5);
      boost::optional_ns::in_place_init_if_t::in_place_init_if_t(
        (boost::optional_ns::in_place_init_if_t *const)&boost::optional_ns::in_place_init_if,
        (boost::optional_ns::in_place_init_if_t::init_tag)5);
      system_category = boost::asio::error::get_system_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::system_category >> 3) + 0x7FFF8000) )
        system_category = (const boost::system::error_category *)__asan_report_store8(&boost::asio::error::system_category);
      boost::asio::error::system_category = system_category;
      netdb_category = boost::asio::error::get_netdb_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::netdb_category >> 3) + 0x7FFF8000) )
        netdb_category = (const boost::system::error_category *)__asan_report_store8(&boost::asio::error::netdb_category);
      boost::asio::error::netdb_category = netdb_category;
      addrinfo_category = boost::asio::error::get_addrinfo_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::addrinfo_category >> 3) + 0x7FFF8000) )
        addrinfo_category = (const boost::system::error_category *)__asan_report_store8(&boost::asio::error::addrinfo_category);
      boost::asio::error::addrinfo_category = addrinfo_category;
      misc_category = boost::asio::error::get_misc_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::misc_category >> 3) + 0x7FFF8000) )
        misc_category = (const boost::system::error_category *)__asan_report_store8(&boost::asio::error::misc_category);
      boost::asio::error::misc_category = misc_category;
      v11 = &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_);
      }
      if ( !*v11 )
      {
        v12 = &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_);
        }
        *v12 = 1;
        boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::tss_ptr(&boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_);
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::~tss_ptr,
          &boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_,
          &_dso_handle);
      }
      v13 = &`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_);
      }
      if ( !*v13 )
      {
        v14 = &`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_);
        }
        *v14 = 1;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::posix_global_impl<boost::asio::system_context>::~posix_global_impl,
          &boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_,
          &_dso_handle);
      }
      v15 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero);
      }
      if ( !*v15 )
      {
        v16 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero);
        }
        *v16 = 1;
        v17 = common::tools::StringStream<common::tools::FixedBuffer<16384>>::digits + 9;
        if ( *(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                      + 0x7FFF8000) )
          __asan_report_store8(&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero);
        common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = v17;
      }
      v18 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id);
      }
      if ( !*v18 )
      {
        v19 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id);
        }
        *v19 = 1;
        boost::asio::detail::service_id<boost::asio::detail::scheduler>::service_id(&boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id);
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::scheduler>::~service_id,
          &boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id,
          &_dso_handle);
      }
      v20 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id);
      }
      if ( !*v20 )
      {
        v21 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id);
        }
        *v21 = 1;
        boost::asio::detail::service_id<boost::asio::detail::epoll_reactor>::service_id(&boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id);
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::epoll_reactor>::~service_id,
          &boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id,
          &_dso_handle);
      }
      v22 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero);
      }
      if ( !*v22 )
      {
        v23 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero);
        }
        *v23 = 1;
        v24 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::digits + 9;
        if ( *(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3)
                      + 0x7FFF8000) )
          __asan_report_store8(&common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero);
        common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero = v24;
      }
      v25 = &`guard variable for'luabind::detail::registered_class<ScriptContext>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<ScriptContext>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<ScriptContext>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<ScriptContext>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'luabind::detail::registered_class<ScriptContext>::id);
      }
      if ( !*v25 )
      {
        v26 = &`guard variable for'luabind::detail::registered_class<ScriptContext>::id;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<ScriptContext>::id >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<ScriptContext>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<ScriptContext>::id >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'luabind::detail::registered_class<ScriptContext>::id);
        }
        *v26 = 1;
        luabind::type_id::type_id(&cls, (const std::type_info *)&`typeinfo for'ScriptContext);
        v27 = luabind::detail::allocate_class_id(&cls);
        if ( *(_BYTE *)(((unsigned __int64)&luabind::detail::registered_class<ScriptContext>::id >> 3) + 0x7FFF8000) )
          v27 = __asan_report_store8(&luabind::detail::registered_class<ScriptContext>::id);
        luabind::detail::registered_class<ScriptContext>::id = v27;
      }
    }
    __asan_after_dynamic_init();
  }
};

// Line 117: range 00000000145F7042-00000000145F7154
void __cdecl __static_initialization_and_destruction_1(int __initialize_p, int __priority)
{
  _BYTE *v2; // rcx
  _BYTE *v3; // rcx
  luabind::detail::class_id v4; // rax
  luabind::type_id cls; // [rsp+18h] [rbp-8h] BYREF

  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src_merge/merge_merge_gear_comp.cpp");
    if ( __priority == 0xFFFF )
    {
      v2 = &`guard variable for'luabind::detail::registered_class<ScriptContext *>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<ScriptContext *>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<ScriptContext *>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<ScriptContext *>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'luabind::detail::registered_class<ScriptContext *>::id);
      }
      if ( !*v2 )
      {
        v3 = &`guard variable for'luabind::detail::registered_class<ScriptContext *>::id;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<ScriptContext *>::id >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<ScriptContext *>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<ScriptContext *>::id >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'luabind::detail::registered_class<ScriptContext *>::id);
        }
        *v3 = 1;
        luabind::type_id::type_id(&cls, (const std::type_info *)&`typeinfo for'ScriptContext *);
        v4 = luabind::detail::allocate_class_id(&cls);
        if ( *(_BYTE *)(((unsigned __int64)&luabind::detail::registered_class<ScriptContext *>::id >> 3) + 0x7FFF8000) )
          v4 = __asan_report_store8(&luabind::detail::registered_class<ScriptContext *>::id);
        luabind::detail::registered_class<ScriptContext *>::id = v4;
      }
    }
    __asan_after_dynamic_init();
  }
};
