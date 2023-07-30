// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/watcher/player_watcher_comp.cpp

// Line 38: range 00000000143885FA-00000000143894AC
int32_t __cdecl PlayerWatcherComp::fromBin(PlayerWatcherComp *const this, const proto::PlayerDataBin *player_data_bin)
{
  int32_t v2; // r14d
  __m128i v3; // xmm0
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  const google::protobuf::MapPair<unsigned int,unsigned int> *v7; // rax
  const unsigned int *v8; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>,bool> v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  int v13; // r15d
  std::pair<std::__detail::_Node_iterator<unsigned int,true,false>,bool> v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rbx
  unsigned int *v18; // rcx
  unsigned int *v19; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>,bool> v20; // rax
  common::milog::MiLogStream *v21; // r15
  google::protobuf::RepeatedPtrField<proto::PushTipsBin>::const_iterator *p_for_end_1; // rsi
  WatcherExcelConfigMgr *p_watcher_config_mgr; // r15
  uint32_t v24; // eax
  common::milog::MiLogStream *v25; // rbx
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rcx
  common::milog::MiLogStream *v28; // r15
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rcx
  common::milog::MiLogStream *v31; // r14
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rcx
  int v34; // r15d
  BaseWatcher *v35; // rax
  bool v36; // r15
  common::milog::MiLogStream *v37; // r14
  std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rcx
  const proto::RecordValueBin *v41; // rax
  float v42; // edx
  char v43; // al
  const proto::RecordValueBin *v44; // rax
  float v45; // edx
  char v46; // al
  const proto::RecordValueBin *v47; // rax
  float v48; // ecx
  char v49; // dl
  bool v50; // dl
  const proto::RecordValueBin *v51; // rax
  float v52; // ecx
  char v53; // dl
  bool v54; // dl
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-184h] BYREF
  google::protobuf::RepeatedPtrField<proto::PushTipsBin>::const_iterator __for_begin_1; // [rsp+30h] [rbp-180h] BYREF
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin_0; // [rsp+38h] [rbp-178h]
  const proto::PlayerWatcherCompBin *proto_comp; // [rsp+40h] [rbp-170h]
  const google::protobuf::Map<unsigned int,unsigned int> *__for_range; // [rsp+48h] [rbp-168h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range_0; // [rsp+50h] [rbp-160h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end_0; // [rsp+58h] [rbp-158h]
  const google::protobuf::RepeatedPtrField<proto::PushTipsBin> *__for_range_1; // [rsp+60h] [rbp-150h]
  const google::protobuf::RepeatedPtrField<proto::WatcherBin> *__for_range_2; // [rsp+68h] [rbp-148h]
  const proto::WatcherBin *watcher_bin; // [rsp+70h] [rbp-140h]
  const data::WatcherConfig *watcher_config_ptr; // [rsp+78h] [rbp-138h]
  const proto::PushTipsBin *push_tips_bin; // [rsp+80h] [rbp-130h]
  google::protobuf::RepeatedPtrField<proto::PushTipsBin>::const_iterator __for_end_1; // [rsp+88h] [rbp-128h] BYREF
  std::shared_ptr<Config> v69; // [rsp+90h] [rbp-120h] BYREF
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+A0h] [rbp-110h] BYREF
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+C0h] [rbp-F0h] BYREF
  common::milog::MiLogStream v72; // [rsp+E0h] [rbp-D0h] BYREF
  common::milog::MiLogStream v73; // [rsp+100h] [rbp-B0h] BYREF
  char v74[144]; // [rsp+120h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v74;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 13 watcher_id:50 64 16 14 watcher_ptr:82";
  *(_QWORD *)(v4 + 16) = PlayerWatcherComp::fromBin;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  proto_comp = proto::PlayerDataBin::watcher_bin(player_data_bin);
  __for_range = proto::PlayerWatcherCompBin::global_watcher_progress_map(proto_comp);
  google::protobuf::Map<unsigned int,unsigned int>::begin(&__for_begin, __for_range);
  google::protobuf::Map<unsigned int,unsigned int>::end(&__for_end, __for_range);
  while ( google::protobuf::operator!=(&__for_begin, &__for_end) )
  {
    v7 = google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator*(&__for_begin);
    google::protobuf::MapPair<unsigned int,unsigned int>::MapPair(
      (google::protobuf::MapPair<unsigned int,unsigned int> *const)&__for_end_1,
      v7);
    v9 = std::unordered_map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int const&>(
           &this->global_watcher_progress_map_,
           (const unsigned int *)&__for_end_1,
           (const unsigned int *)&__for_end_1.it_ + 1,
           (const unsigned int *)&this->global_watcher_progress_map_,
           v8);
    if ( !v9.second )
    {
      common::milog::MiLogStream::create(
        &v73,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/watcher/player_watcher_comp.cpp",
        "fromBin",
        46);
      v10 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
              &v73,
              (const char (*)[29])"duplicate global watcher_id:");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v10,
              (const unsigned int *)&__for_end_1);
      v12 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v11, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v73);
      v2 = -1;
      v13 = 0;
    }
    else
    {
      v13 = 1;
    }
    google::protobuf::MapPair<unsigned int,unsigned int>::~MapPair((google::protobuf::MapPair<unsigned int,unsigned int> *const)&__for_end_1);
    if ( v13 != 1 )
      goto LABEL_61;
    google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator++(&__for_begin);
  }
  __for_range_0 = proto::PlayerWatcherCompBin::finished_global_watcher_list(proto_comp);
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
    *(_DWORD *)(v4 + 48) = *__for_begin_0;
    v14 = std::unordered_set<unsigned int>::insert(
            &this->finished_global_watcher_set_,
            (const std::unordered_set<unsigned int>::value_type *)(v4 + 48));
    if ( !v14.second )
    {
      common::milog::MiLogStream::create(
        &v73,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/watcher/player_watcher_comp.cpp",
        "fromBin",
        54);
      v15 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
              &v73,
              (const char (*)[38])"duplicate global finished watcher_id:");
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v4 + 48));
      v17 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v16, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &val);
      common::milog::MiLogStream::~MiLogStream(&v73);
      v2 = -1;
      goto LABEL_61;
    }
    ++__for_begin_0;
  }
  __for_range_1 = proto::PlayerWatcherCompBin::push_tips_list(proto_comp);
  __for_begin_1.it_ = google::protobuf::RepeatedPtrField<proto::PushTipsBin>::begin(__for_range_1).it_;
  __for_end_1.it_ = google::protobuf::RepeatedPtrField<proto::PushTipsBin>::end(__for_range_1).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::PushTipsBin const>::operator!=(
            &__for_begin_1,
            &__for_end_1) )
  {
    push_tips_bin = google::protobuf::internal::RepeatedPtrIterator<proto::PushTipsBin const>::operator*(&__for_begin_1);
    val = proto::PushTipsBin::state(push_tips_bin);
    *(_DWORD *)(v4 + 48) = proto::PushTipsBin::push_tips_id(push_tips_bin);
    v20 = std::unordered_map<unsigned int,unsigned int>::emplace<unsigned int,unsigned int>(
            &this->push_tips_map_,
            (unsigned int *)(v4 + 48),
            &val,
            v18,
            v19);
    if ( !v20.second )
    {
      common::milog::MiLogStream::create(
        &v73,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/watcher/player_watcher_comp.cpp",
        "fromBin",
        64);
      v21 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
              &v73,
              (const char (*)[35])"push_tips_map_ emplace failed, id:");
      val = proto::PushTipsBin::push_tips_id(push_tips_bin);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &val);
      common::milog::MiLogStream::~MiLogStream(&v73);
    }
    google::protobuf::internal::RepeatedPtrIterator<proto::PushTipsBin const>::operator++(&__for_begin_1);
  }
  __for_range_2 = proto::PlayerWatcherCompBin::watcher_list(proto_comp);
  __for_begin_1.it_ = google::protobuf::RepeatedPtrField<proto::WatcherBin>::begin(__for_range_2).it_;
  __for_end_1.it_ = google::protobuf::RepeatedPtrField<proto::WatcherBin>::end(__for_range_2).it_;
  while ( 1 )
  {
    p_for_end_1 = &__for_end_1;
    if ( !google::protobuf::internal::RepeatedPtrIterator<proto::WatcherBin const>::operator!=(
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::WatcherBin> *const)&__for_begin_1,
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::WatcherBin>::iterator *)&__for_end_1) )
      break;
    watcher_bin = google::protobuf::internal::RepeatedPtrIterator<proto::WatcherBin const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::WatcherBin> *const)&__for_begin_1);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v69);
    p_watcher_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v69)->design_config.txt_config_mgr.watcher_config_mgr;
    v24 = proto::WatcherBin::watcher_id(watcher_bin);
    watcher_config_ptr = WatcherExcelConfigMgr::findWatcherConfigIncludingDisused(p_watcher_config_mgr, v24);
    std::shared_ptr<Config>::~shared_ptr(&v69);
    if ( !watcher_config_ptr )
    {
      common::milog::MiLogStream::create(
        &v72,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/watcher/player_watcher_comp.cpp",
        "fromBin",
        74);
      v25 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
              &v72,
              (const char (*)[41])"cannot find watcher config, watcher_bin:");
      google::protobuf::Message::ShortDebugString[abi:cxx11](
        (std::string *)&v73,
        &watcher_bin->google::protobuf::Message);
      v26 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v25, (const std::string *)&v73);
      v27 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v26, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      operator<<(v27, this->player_);
      std::string::~string(&v73);
      common::milog::MiLogStream::~MiLogStream(&v72);
      v2 = -1;
      goto LABEL_61;
    }
    if ( *(char *)(((unsigned __int64)&watcher_config_ptr->is_disuse >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&watcher_config_ptr->is_disuse);
    if ( watcher_config_ptr->is_disuse )
    {
      common::milog::MiLogStream::create(
        &v72,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/watcher/player_watcher_comp.cpp",
        "fromBin",
        79);
      v28 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
              &v72,
              (const char (*)[30])"watcher disused, watcher_bin:");
      google::protobuf::Message::ShortDebugString[abi:cxx11](
        (std::string *)&v73,
        &watcher_bin->google::protobuf::Message);
      v29 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v28, (const std::string *)&v73);
      v30 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v29, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      operator<<(v30, this->player_);
      std::string::~string(&v73);
      common::milog::MiLogStream::~MiLogStream(&v72);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      WatcherFactory::createWatcher(
        (Player *)(v4 + 64),
        (const data::WatcherConfig *)this->player_,
        (uint32_t)watcher_config_ptr);
      if ( std::operator==<BaseWatcher>(0LL, (const std::shared_ptr<BaseWatcher> *)(v4 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v72,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/watcher/player_watcher_comp.cpp",
          "fromBin",
          85);
        v31 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                &v72,
                (const char (*)[36])"create watcher failed, watcher_bin:");
        google::protobuf::Message::ShortDebugString[abi:cxx11](
          (std::string *)&v73,
          &watcher_bin->google::protobuf::Message);
        v32 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v31, (const std::string *)&v73);
        v33 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v32, (const char (*)[9])" player:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        operator<<(v33, this->player_);
        std::string::~string(&v73);
        common::milog::MiLogStream::~MiLogStream(&v72);
        v2 = -1;
        v34 = 0;
      }
      else
      {
        v35 = std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
        BaseWatcher::fromBin(v35, watcher_bin);
        std::shared_ptr<BaseWatcher>::shared_ptr(
          (std::shared_ptr<BaseWatcher> *const)&v69,
          (const std::shared_ptr<BaseWatcher> *)(v4 + 64));
        v36 = PlayerWatcherComp::emplaceWatcher(this, (BaseWatcherPtr *)&v69) != 0;
        std::shared_ptr<BaseWatcher>::~shared_ptr((std::shared_ptr<BaseWatcher> *const)&v69);
        if ( v36 )
        {
          common::milog::MiLogStream::create(
            &v73,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/watcher/player_watcher_comp.cpp",
            "fromBin",
            93);
          v37 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                  &v73,
                  (const char (*)[30])"emplaceWatcher fail, watcher:");
          v38 = std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
          v39 = common::milog::MiLogStream::operator<<<BaseWatcher,(BaseWatcher*)0>(v37, v38);
          v40 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v39, (const char (*)[9])" player:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          operator<<(v40, this->player_);
          common::milog::MiLogStream::~MiLogStream(&v73);
          v2 = -1;
          v34 = 0;
        }
        else
        {
          v34 = 1;
        }
      }
      std::shared_ptr<BaseWatcher>::~shared_ptr((std::shared_ptr<BaseWatcher> *const)(v4 + 64));
      if ( v34 != 1 )
        goto LABEL_61;
    }
    google::protobuf::internal::RepeatedPtrIterator<proto::WatcherBin const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::WatcherBin> *const)&__for_begin_1);
  }
  v41 = proto::PlayerWatcherCompBin::record_value(proto_comp);
  *(float *)v3.m128i_i32 = proto::RecordValueBin::max_critical_damage(v41);
  v42 = COERCE_FLOAT(_mm_cvtsi128_si32(v3));
  v43 = *(_BYTE *)(((unsigned __int64)&this->record_value_ >> 3) + 0x7FFF8000);
  if ( v43 != 0 && v43 <= 3 )
  {
    LOBYTE(p_for_end_1) = v43 != 0;
    __asan_report_store4(&this->record_value_, p_for_end_1, LOBYTE(v42));
  }
  this->record_value_.max_critical_damage = v42;
  v44 = proto::PlayerWatcherCompBin::record_value(proto_comp);
  *(float *)v3.m128i_i32 = proto::RecordValueBin::max_fly_time(v44);
  v45 = COERCE_FLOAT(_mm_cvtsi128_si32(v3));
  v46 = *(_BYTE *)(((unsigned __int64)&this->record_value_.max_fly_time >> 3) + 0x7FFF8000);
  if ( v46 != 0 && v46 <= 3 )
  {
    LOBYTE(p_for_end_1) = v46 != 0;
    __asan_report_store4(&this->record_value_.max_fly_time, p_for_end_1, LOBYTE(v45));
  }
  this->record_value_.max_fly_time = v45;
  v47 = proto::PlayerWatcherCompBin::record_value(proto_comp);
  *(float *)v3.m128i_i32 = proto::RecordValueBin::max_dash_time(v47);
  v48 = COERCE_FLOAT(_mm_cvtsi128_si32(v3));
  v49 = *(_BYTE *)(((unsigned __int64)&this->record_value_.max_dash_time >> 3) + 0x7FFF8000);
  LOBYTE(p_for_end_1) = v49 != 0;
  v50 = v49 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v49;
  if ( v50 )
    __asan_report_store4(&this->record_value_.max_dash_time, p_for_end_1, v50);
  this->record_value_.max_dash_time = v48;
  v51 = proto::PlayerWatcherCompBin::record_value(proto_comp);
  *(float *)v3.m128i_i32 = proto::RecordValueBin::max_fly_map_distance(v51);
  v52 = COERCE_FLOAT(_mm_cvtsi128_si32(v3));
  v53 = *(_BYTE *)(((unsigned __int64)&this->record_value_.max_fly_map_distance >> 3) + 0x7FFF8000);
  LOBYTE(p_for_end_1) = v53 != 0;
  v54 = v53 != 0 && (char)((((_BYTE)this + 4) & 7) + 3) >= v53;
  if ( v54 )
    __asan_report_store4(&this->record_value_.max_fly_map_distance, p_for_end_1, v54);
  this->record_value_.max_fly_map_distance = v52;
  v2 = 0;
LABEL_61:
  result = v2;
  if ( v74 == (char *)v4 )
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

// Line 110: range 00000000143894AE-0000000014389C2D
int32_t __cdecl PlayerWatcherComp::toBin(PlayerWatcherComp *const this, proto::PlayerDataBin *player_data_bin)
{
  std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::reference v2; // rax
  std::pair<unsigned int const,unsigned int> *v3; // rdx
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v4; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type v5; // ebx
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *v6; // rsi
  unsigned int *v7; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v8; // rdx
  char v9; // cl
  unsigned int *v10; // rax
  google::protobuf::uint32 *v11; // rdx
  std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::reference v12; // rax
  std::pair<unsigned int const,unsigned int> *v13; // rdx
  const std::pair<unsigned int const,std::shared_ptr<BaseWatcher> > *v14; // rax
  std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  proto::RecordValueBin *v18; // rcx
  proto::RecordValueBin *v19; // rcx
  proto::RecordValueBin *v20; // rcx
  proto::RecordValueBin *v21; // rcx
  std::unordered_map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-B8h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseWatcher>>::iterator __for_begin_0; // [rsp+20h] [rbp-B0h] BYREF
  proto::PlayerWatcherCompBin *proto_comp; // [rsp+28h] [rbp-A8h]
  google::protobuf::Map<unsigned int,unsigned int> *proto_watcher_map; // [rsp+30h] [rbp-A0h]
  std::unordered_map<unsigned int,unsigned int> *__for_range; // [rsp+38h] [rbp-98h]
  std::unordered_set<unsigned int> *__for_range_0; // [rsp+40h] [rbp-90h]
  std::unordered_map<unsigned int,unsigned int> *__for_range_1; // [rsp+48h] [rbp-88h]
  std::unordered_map<unsigned int,std::shared_ptr<BaseWatcher>> *__for_range_2; // [rsp+50h] [rbp-80h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<BaseWatcher> > >::type *watcher_id_1; // [rsp+58h] [rbp-78h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<BaseWatcher> > >::type *watcher_ptr; // [rsp+60h] [rbp-70h]
  proto::WatcherBin *watcher_bin; // [rsp+68h] [rbp-68h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *push_tips_id; // [rsp+70h] [rbp-60h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *state; // [rsp+78h] [rbp-58h]
  proto::PushTipsBin *push_tips_bin; // [rsp+80h] [rbp-50h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *watcher_id; // [rsp+88h] [rbp-48h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *progress; // [rsp+90h] [rbp-40h]
  std::pair<unsigned int const,unsigned int> __for_end; // [rsp+98h] [rbp-38h] BYREF
  std::pair<unsigned int const,std::shared_ptr<BaseWatcher> > __in; // [rsp+A0h] [rbp-30h] BYREF

  proto_comp = proto::PlayerDataBin::mutable_watcher_bin(player_data_bin);
  proto_watcher_map = proto::PlayerWatcherCompBin::mutable_global_watcher_progress_map(proto_comp);
  __for_range = &this->global_watcher_progress_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,unsigned int>::begin(&this->global_watcher_progress_map_)._M_cur;
  __for_begin_0._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<BaseWatcher> >,false>::__node_type *)std::unordered_map<unsigned int,unsigned int>::end(&this->global_watcher_progress_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
            &__for_begin,
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)&__for_begin_0) )
  {
    v2 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*(&__for_begin);
    v3 = v2;
    if ( ((unsigned __int8)v2 & 7) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v2->second + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v2->second + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(v2, 8LL);
    }
    __for_end = *v3;
    watcher_id = std::get<0ul,unsigned int const,unsigned int>(&__for_end);
    v4 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(&__for_end);
    progress = v4;
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v4);
    }
    if ( *progress )
    {
      v5 = *progress;
      v6 = watcher_id;
      v7 = google::protobuf::Map<unsigned int,unsigned int>::operator[](proto_watcher_map, watcher_id);
      v8 = v7;
      v9 = *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000);
      if ( v9 != 0 && (char)(((unsigned __int8)v7 & 7) + 3) >= v9 )
      {
        LOBYTE(v6) = v9 != 0;
        __asan_report_store4(v7, v6, (_BYTE)v7);
      }
      *v8 = v5;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++(&__for_begin);
  }
  __for_range_0 = &this->finished_global_watcher_set_;
  __for_begin_0._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<BaseWatcher> >,false>::__node_type *)std::unordered_set<unsigned int>::begin(&this->finished_global_watcher_set_)._M_cur;
  __for_end = (std::pair<unsigned int const,unsigned int>)std::unordered_set<unsigned int>::end(__for_range_0)._M_cur;
  while ( std::__detail::operator!=<unsigned int,false>(
            (const std::__detail::_Node_iterator_base<unsigned int,false> *)&__for_begin_0,
            (const std::__detail::_Node_iterator_base<unsigned int,false> *)&__for_end) )
  {
    v10 = (unsigned int *)std::__detail::_Node_iterator<unsigned int,true,false>::operator*((const std::__detail::_Node_iterator<unsigned int,true,false> *const)&__for_begin_0);
    v11 = v10;
    if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v10);
    }
    proto::PlayerWatcherCompBin::add_finished_global_watcher_list(proto_comp, *v11);
    std::__detail::_Node_iterator<unsigned int,true,false>::operator++((std::__detail::_Node_iterator<unsigned int,true,false> *const)&__for_begin_0);
  }
  __for_range_1 = &this->push_tips_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,unsigned int>::begin(&this->push_tips_map_)._M_cur;
  __for_begin_0._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<BaseWatcher> >,false>::__node_type *)std::unordered_map<unsigned int,unsigned int>::end(__for_range_1)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
            &__for_begin,
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)&__for_begin_0) )
  {
    v12 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*(&__for_begin);
    v13 = v12;
    if ( ((unsigned __int8)v12 & 7) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v12->second + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v12 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v12->second + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(v12, 8LL);
    }
    __for_end = *v13;
    push_tips_id = std::get<0ul,unsigned int const,unsigned int>(&__for_end);
    state = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(&__for_end);
    push_tips_bin = proto::PlayerWatcherCompBin::add_push_tips_list(proto_comp);
    if ( *(_BYTE *)(((unsigned __int64)push_tips_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)push_tips_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)push_tips_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(push_tips_id);
    }
    proto::PushTipsBin::set_push_tips_id(push_tips_bin, *push_tips_id);
    if ( *(_BYTE *)(((unsigned __int64)state >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)state & 7) + 3) >= *(_BYTE *)(((unsigned __int64)state >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(state);
    }
    proto::PushTipsBin::set_state(push_tips_bin, *state);
    std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++(&__for_begin);
  }
  __for_range_2 = &this->watcher_map_;
  __for_begin_0._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseWatcher>>::begin(&this->watcher_map_)._M_cur;
  __for_end = (std::pair<unsigned int const,unsigned int>)std::unordered_map<unsigned int,std::shared_ptr<BaseWatcher>>::end(__for_range_2)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseWatcher>>,false>(
            &__for_begin_0,
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<BaseWatcher> >,false> *)&__for_end) )
  {
    v14 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseWatcher>>,false,false>::operator*(&__for_begin_0);
    std::pair<unsigned int const,std::shared_ptr<BaseWatcher>>::pair(&__in, v14);
    watcher_id_1 = std::get<0ul,unsigned int const,std::shared_ptr<BaseWatcher>>(&__in);
    watcher_ptr = std::get<1ul,unsigned int const,std::shared_ptr<BaseWatcher>>(&__in);
    if ( std::operator!=<BaseWatcher>(watcher_ptr, 0LL) )
    {
      v15 = std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false> *const)watcher_ptr);
      if ( !BaseWatcher::isDebug(v15) )
      {
        watcher_bin = proto::PlayerWatcherCompBin::add_watcher_list(proto_comp);
        v17 = std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false> *const)watcher_ptr);
        BaseWatcher::toBin(v17, watcher_bin);
      }
    }
    std::pair<unsigned int const,std::shared_ptr<BaseWatcher>>::~pair(&__in);
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseWatcher>>,false,false>::operator++(&__for_begin_0);
  }
  v18 = proto::PlayerWatcherCompBin::mutable_record_value(proto_comp);
  if ( *(_BYTE *)(((unsigned __int64)&this->record_value_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->record_value_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->record_value_);
  }
  proto::RecordValueBin::set_max_critical_damage(v18, this->record_value_.max_critical_damage);
  v19 = proto::PlayerWatcherCompBin::mutable_record_value(proto_comp);
  if ( *(_BYTE *)(((unsigned __int64)&this->record_value_.max_dash_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->record_value_.max_dash_time >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->record_value_.max_dash_time);
  }
  proto::RecordValueBin::set_max_dash_time(v19, this->record_value_.max_dash_time);
  v20 = proto::PlayerWatcherCompBin::mutable_record_value(proto_comp);
  if ( *(_BYTE *)(((unsigned __int64)&this->record_value_.max_fly_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->record_value_.max_fly_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->record_value_.max_fly_time);
  }
  proto::RecordValueBin::set_max_fly_time(v20, this->record_value_.max_fly_time);
  v21 = proto::PlayerWatcherCompBin::mutable_record_value(proto_comp);
  if ( *(_BYTE *)(((unsigned __int64)&this->record_value_.max_fly_map_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->record_value_.max_fly_map_distance >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&this->record_value_.max_fly_map_distance);
  }
  proto::RecordValueBin::set_max_fly_map_distance(v21, this->record_value_.max_fly_map_distance);
  return 0;
};

// Line 156: range 0000000014389C2E-000000001438A121
int32_t __cdecl PlayerWatcherComp::init(PlayerWatcherComp *const this)
{
  std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  bool v5; // r14
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  bool v16; // dl
  int32_t result; // eax
  unsigned int val; // [rsp+1Ch] [rbp-C4h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> __y; // [rsp+20h] [rbp-C0h] BYREF
  std::pair<unsigned int const,unsigned int> *__in; // [rsp+28h] [rbp-B8h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *push_tips_id; // [rsp+30h] [rbp-B0h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *state; // [rsp+38h] [rbp-A8h]
  std::shared_ptr<Config> v23; // [rsp+40h] [rbp-A0h] BYREF
  common::milog::MiLogStream v24; // [rsp+50h] [rbp-90h] BYREF
  char v25[112]; // [rsp+70h] [rbp-70h] BYREF

  v1 = (std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = (std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *)v2;
  }
  v1->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false>::__node_type *)1102416563;
  v1[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false>::__node_type *)"1 32 8 8 iter:162";
  v1[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false>::__node_type *)PlayerWatcherComp::init;
  v3 = (unsigned __int64)v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  PlayerWatcherComp::initEventObservers(this);
  v1[4]._M_cur = std::unordered_map<unsigned int,unsigned int>::begin(&this->push_tips_map_)._M_cur;
  while ( 1 )
  {
    __y._M_cur = std::unordered_map<unsigned int,unsigned int>::end(&this->push_tips_map_)._M_cur;
    if ( !std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(v1 + 4, &__y) )
      break;
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*(v1 + 4);
    push_tips_id = std::get<0ul,unsigned int const,unsigned int>(__in);
    state = std::get<1ul,unsigned int const,unsigned int>(__in);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v23);
    v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v23);
    v5 = !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,data::PushTipsConfig> const,unsigned int>(
            &v4->design_config.txt_config_mgr.watcher_config_mgr.push_tips_config_map,
            push_tips_id);
    std::shared_ptr<Config>::~shared_ptr(&v23);
    if ( v5 )
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/watcher/player_watcher_comp.cpp",
        "init",
        167);
      v6 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
             &v24,
             (const char (*)[21])"push_tips not found:");
      v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, push_tips_id);
      v8 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v7, (const char (*)[8])" state:");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, state);
      v10 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v9, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
      common::milog::MiLogStream::~MiLogStream(&v24);
      v1[4]._M_cur = std::unordered_map<unsigned int,unsigned int>::erase(&this->push_tips_map_, v1[4])._M_cur;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)state >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)state & 7) + 3) >= *(_BYTE *)(((unsigned __int64)state >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(state);
      }
      if ( !proto::PushTipsState_IsValid(*state) )
      {
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/watcher/player_watcher_comp.cpp",
          "init",
          174);
        v11 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                &v24,
                (const char (*)[29])"invalid state. push_tips_id:");
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, push_tips_id);
        v13 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v12, (const char (*)[8])" state:");
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, state);
        v15 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v14, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v24);
        v16 = *(_BYTE *)(((unsigned __int64)state >> 3) + 0x7FFF8000) != 0
           && (char)(((unsigned __int8)state & 7) + 3) >= *(_BYTE *)(((unsigned __int64)state >> 3) + 0x7FFF8000);
        if ( v16 )
          __asan_report_store4(state, ((unsigned __int8)state & 7u) + 3, v16);
        *state = 3;
      }
      std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++(v1 + 4);
    }
  }
  PlayerWatcherComp::initAbilityGroup(this);
  result = 0;
  if ( v25 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v1->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 186: range 000000001438A122-000000001438AE23
int32_t __cdecl PlayerWatcherComp::onLogin(PlayerWatcherComp *const this, bool is_new_player)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::pair<unsigned int const,std::shared_ptr<BaseWatcher> > *v5; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v6; // rax
  _DWORD *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  int32_t v11; // r14d
  bool v12; // r14
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  std::unordered_map<unsigned int,std::shared_ptr<BaseWatcher>>::size_type v15; // rax
  const std::weak_ptr<BaseWatcher> *v16; // rax
  std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // r14
  std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  uint32_t Progress; // eax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rdx
  int32_t result; // eax
  unsigned int val; // [rsp+14h] [rbp-1CCh] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseWatcher>>::iterator __for_begin; // [rsp+18h] [rbp-1C8h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseWatcher>>::iterator __for_end; // [rsp+20h] [rbp-1C0h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseWatcher>> *__for_range; // [rsp+28h] [rbp-1B8h]
  std::vector<unsigned int> *__for_range_0; // [rsp+30h] [rbp-1B0h]
  const std::unordered_map<unsigned int,data::GlobalWatcherConfig> *__for_range_1; // [rsp+38h] [rbp-1A8h]
  std::unordered_map<unsigned int,std::shared_ptr<BaseWatcher>> *__for_range_2; // [rsp+40h] [rbp-1A0h]
  std::vector<std::weak_ptr<BaseWatcher>> *__for_range_3; // [rsp+48h] [rbp-198h]
  const std::pair<unsigned int const,std::shared_ptr<BaseWatcher> > *v33; // [rsp+50h] [rbp-190h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseWatcher> > >::type *__0; // [rsp+58h] [rbp-188h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseWatcher> > >::type *watcher_ptr; // [rsp+60h] [rbp-180h]
  const std::pair<unsigned int const,data::GlobalWatcherConfig> *v36; // [rsp+68h] [rbp-178h]
  std::tuple_element<0,const std::pair<unsigned int const,data::GlobalWatcherConfig> >::type *watcher_id_0; // [rsp+70h] [rbp-170h]
  std::tuple_element<1,const std::pair<unsigned int const,data::GlobalWatcherConfig> >::type *global_watcher_config; // [rsp+78h] [rbp-168h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<BaseWatcher> > >::type *watcher_id; // [rsp+80h] [rbp-160h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<BaseWatcher> > >::type *_; // [rsp+88h] [rbp-158h]
  common::milog::MiLogStream v41; // [rsp+90h] [rbp-150h] BYREF
  char v42[304]; // [rsp+B0h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v42;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 4 14 watcher_id:208 64 16 15 watcher_wtr:251 96 16 15 watcher_ptr:253 128 24 26 disable_wat"
                        "cher_id_vec:189 192 24 19 watcher_wtr_vec:245";
  *(_QWORD *)(v2 + 16) = PlayerWatcherComp::onLogin;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -234881024;
  v4[536862725] = -218959118;
  v4[536862726] = -218103808;
  v4[536862727] = -202116109;
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 128));
  __for_range = &this->watcher_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseWatcher>>::begin(&this->watcher_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseWatcher>>::end(&this->watcher_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseWatcher>>,false>(
            &__for_begin,
            &__for_end) )
  {
    v5 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseWatcher>>,false,false>::operator*(&__for_begin);
    std::pair<unsigned int const,std::shared_ptr<BaseWatcher>>::pair(
      (std::pair<unsigned int const,std::shared_ptr<BaseWatcher> > *const)(v2 + 192),
      v5);
    watcher_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseWatcher>>((std::pair<unsigned int const,std::shared_ptr<BaseWatcher> > *)(v2 + 192));
    _ = std::get<1ul,unsigned int const,std::shared_ptr<BaseWatcher>>((std::pair<unsigned int const,std::shared_ptr<BaseWatcher> > *)(v2 + 192));
    if ( *(_BYTE *)(((unsigned __int64)watcher_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)watcher_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)watcher_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(watcher_id);
    }
    if ( PlayerWatcherComp::isGlobalWatcher(this, *watcher_id) )
    {
      if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
             &this->finished_global_watcher_set_,
             watcher_id) )
      {
        goto LABEL_13;
      }
      if ( *(_BYTE *)(((unsigned __int64)watcher_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)watcher_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)watcher_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(watcher_id);
      }
      if ( !PlayerWatcherComp::checkGlobalWatcherPredicateConfig(this, *watcher_id) )
LABEL_13:
        std::vector<unsigned int>::push_back((std::vector<unsigned int> *const)(v2 + 128), watcher_id);
    }
    std::pair<unsigned int const,std::shared_ptr<BaseWatcher>>::~pair((std::pair<unsigned int const,std::shared_ptr<BaseWatcher> > *const)(v2 + 192));
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseWatcher>>,false,false>::operator++(&__for_begin);
  }
  __for_range_0 = (std::vector<unsigned int> *)(v2 + 128);
  __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<BaseWatcher> >,false>::__node_type *)std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 128))._M_current;
  __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<BaseWatcher> >,false>::__node_type *)std::vector<unsigned int>::end(__for_range_0)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
            (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_begin,
            (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_end) )
  {
    v6 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    *(_DWORD *)(v2 + 48) = *v7;
    if ( PlayerWatcherComp::internalDisableGlobalWatcher(this, *(_DWORD *)(v2 + 48)) )
    {
      common::milog::MiLogStream::create(
        &v41,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/watcher/player_watcher_comp.cpp",
        "onLogin",
        212);
      v8 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
             &v41,
             (const char (*)[46])"internalDisableGlobalWatcher fail watcher_id:");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
      v10 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v9, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
LABEL_22:
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
      common::milog::MiLogStream::~MiLogStream(&v41);
      v11 = -1;
      goto LABEL_65;
    }
    __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 64));
  __for_range_1 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64))->design_config.txt_config_mgr.watcher_config_mgr.global_watcher_config_map;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 64));
  __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<BaseWatcher> >,false>::__node_type *)std::unordered_map<unsigned int,data::GlobalWatcherConfig>::begin(__for_range_1)._M_cur;
  __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<BaseWatcher> >,false>::__node_type *)std::unordered_map<unsigned int,data::GlobalWatcherConfig>::end(__for_range_1)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::GlobalWatcherConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GlobalWatcherConfig>,false> *)&__for_begin,
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GlobalWatcherConfig>,false> *)&__for_end) )
  {
    v36 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GlobalWatcherConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GlobalWatcherConfig>,false,false> *const)&__for_begin);
    watcher_id_0 = std::get<0ul,unsigned int const,data::GlobalWatcherConfig>(v36);
    global_watcher_config = (std::tuple_element<1,const std::pair<unsigned int const,data::GlobalWatcherConfig> >::type *)std::get<1ul,unsigned int const,data::GlobalWatcherConfig>(v36);
    if ( *(char *)(((unsigned __int64)&global_watcher_config->is_disuse >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&global_watcher_config->is_disuse);
    if ( !global_watcher_config->is_disuse
      && !common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
            &this->finished_global_watcher_set_,
            watcher_id_0) )
    {
      if ( *(_BYTE *)(((unsigned __int64)watcher_id_0 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)watcher_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)watcher_id_0 >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4(watcher_id_0);
      }
      if ( PlayerWatcherComp::checkGlobalWatcherPredicateConfig(this, *watcher_id_0) )
      {
        if ( *(_BYTE *)(((unsigned __int64)watcher_id_0 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)watcher_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)watcher_id_0 >> 3)
                                                                         + 0x7FFF8000) )
        {
          __asan_report_load4(watcher_id_0);
        }
        PlayerWatcherComp::findWatcher((PlayerWatcherComp *const)(v2 + 96), (uint32_t)this);
        v12 = std::operator!=<BaseWatcher>(0LL, (const std::shared_ptr<BaseWatcher> *)(v2 + 96));
        std::shared_ptr<BaseWatcher>::~shared_ptr((std::shared_ptr<BaseWatcher> *const)(v2 + 96));
        if ( !v12 )
        {
          if ( *(_BYTE *)(((unsigned __int64)watcher_id_0 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)watcher_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)watcher_id_0 >> 3)
                                                                           + 0x7FFF8000) )
          {
            __asan_report_load4(watcher_id_0);
          }
          if ( PlayerWatcherComp::internalEnableGlobalWatcher(this, *watcher_id_0) )
          {
            common::milog::MiLogStream::create(
              &v41,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/watcher/player_watcher_comp.cpp",
              "onLogin",
              239);
            v13 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                    &v41,
                    (const char (*)[39])"internalEnableWatcher fail watcher_id:");
            v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, watcher_id_0);
            v10 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v14, (const char (*)[6])" uid:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            goto LABEL_22;
          }
        }
      }
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GlobalWatcherConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GlobalWatcherConfig>,false,false> *const)&__for_begin);
  }
  std::vector<std::weak_ptr<BaseWatcher>>::vector((std::vector<std::weak_ptr<BaseWatcher>> *const)(v2 + 192));
  v15 = std::unordered_map<unsigned int,std::shared_ptr<BaseWatcher>>::size(&this->watcher_map_);
  std::vector<std::weak_ptr<BaseWatcher>>::reserve((std::vector<std::weak_ptr<BaseWatcher>> *const)(v2 + 192), v15);
  __for_range_2 = &this->watcher_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseWatcher>>::begin(&this->watcher_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseWatcher>>::end(__for_range_2)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseWatcher>>,false>(
            &__for_begin,
            &__for_end) )
  {
    v33 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseWatcher>>,false,false>::operator*(&__for_begin);
    __0 = std::get<0ul,unsigned int const,std::shared_ptr<BaseWatcher>>(v33);
    watcher_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseWatcher> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseWatcher>>(v33);
    std::weak_ptr<BaseWatcher>::weak_ptr<BaseWatcher,void>((std::weak_ptr<BaseWatcher> *const)(v2 + 96), watcher_ptr);
    std::vector<std::weak_ptr<BaseWatcher>>::push_back(
      (std::vector<std::weak_ptr<BaseWatcher>> *const)(v2 + 192),
      (std::vector<std::weak_ptr<BaseWatcher>>::value_type *)(v2 + 96));
    std::weak_ptr<BaseWatcher>::~weak_ptr((std::weak_ptr<BaseWatcher> *const)(v2 + 96));
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseWatcher>>,false,false>::operator++(&__for_begin);
  }
  __for_range_3 = (std::vector<std::weak_ptr<BaseWatcher>> *)(v2 + 192);
  __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<BaseWatcher> >,false>::__node_type *)std::vector<std::weak_ptr<BaseWatcher>>::begin((std::vector<std::weak_ptr<BaseWatcher>> *const)(v2 + 192))._M_current;
  __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<BaseWatcher> >,false>::__node_type *)std::vector<std::weak_ptr<BaseWatcher>>::end(__for_range_3)._M_current;
  while ( __gnu_cxx::operator!=<std::weak_ptr<BaseWatcher> *,std::vector<std::weak_ptr<BaseWatcher>>>(
            (const __gnu_cxx::__normal_iterator<std::weak_ptr<BaseWatcher>*,std::vector<std::weak_ptr<BaseWatcher>> > *)&__for_begin,
            (const __gnu_cxx::__normal_iterator<std::weak_ptr<BaseWatcher>*,std::vector<std::weak_ptr<BaseWatcher>> > *)&__for_end) )
  {
    v16 = __gnu_cxx::__normal_iterator<std::weak_ptr<BaseWatcher> *,std::vector<std::weak_ptr<BaseWatcher>>>::operator*((const __gnu_cxx::__normal_iterator<std::weak_ptr<BaseWatcher>*,std::vector<std::weak_ptr<BaseWatcher>> > *const)&__for_begin);
    std::weak_ptr<BaseWatcher>::weak_ptr((std::weak_ptr<BaseWatcher> *const)(v2 + 64), v16);
    std::weak_ptr<BaseWatcher>::lock((const std::weak_ptr<BaseWatcher> *const)(v2 + 96));
    if ( !std::operator==<BaseWatcher>(0LL, (const std::shared_ptr<BaseWatcher> *)(v2 + 96)) )
    {
      v17 = std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      if ( BaseWatcher::isFinished(v17) )
      {
        v18 = std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        v19 = std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        Progress = BaseWatcher::getProgress(v19);
        BaseWatcher::fireWatcherProgressUpdateEvent(v18, Progress);
      }
      else
      {
        v21 = (unsigned __int64)std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
          v21 = __asan_report_load8(v21);
        v22 = *(_QWORD *)v21 + 32LL;
        if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
          v21 = __asan_report_load8(*(_QWORD *)v21 + 32LL);
        (*(void (__fastcall **)(unsigned __int64))v22)(v21);
      }
    }
    std::shared_ptr<BaseWatcher>::~shared_ptr((std::shared_ptr<BaseWatcher> *const)(v2 + 96));
    std::weak_ptr<BaseWatcher>::~weak_ptr((std::weak_ptr<BaseWatcher> *const)(v2 + 64));
    __gnu_cxx::__normal_iterator<std::weak_ptr<BaseWatcher> *,std::vector<std::weak_ptr<BaseWatcher>>>::operator++((__gnu_cxx::__normal_iterator<std::weak_ptr<BaseWatcher>*,std::vector<std::weak_ptr<BaseWatcher>> > *const)&__for_begin);
  }
  if ( !common::tools::MiTimer::isActive(&this->check_time_interval_timer_)
    && PlayerTimer::startS(
         &this->check_time_interval_timer_,
         1u,
         1,
         "./src/player/watcher/player_watcher_comp.cpp",
         "onLogin",
         269) )
  {
    common::milog::MiLogStream::create(
      &v41,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/watcher/player_watcher_comp.cpp",
      "onLogin",
      271);
    common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
      &v41,
      (const char (*)[40])"check_time_interval_timer_ start failed");
    common::milog::MiLogStream::~MiLogStream(&v41);
    v11 = -1;
  }
  else
  {
    v11 = 0;
  }
  std::vector<std::weak_ptr<BaseWatcher>>::~vector((std::vector<std::weak_ptr<BaseWatcher>> *const)(v2 + 192));
LABEL_65:
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 128));
  result = v11;
  if ( v42 == (char *)v2 )
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

// Line 280: range 000000001438AE24-000000001438B41D
int32_t __cdecl PlayerWatcherComp::notifyAllData(PlayerWatcherComp *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::__shared_ptr_access<proto::WatcherAllDataNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  google::protobuf::RepeatedField<unsigned int> *v5; // r14
  int v6; // eax
  const std::pair<unsigned int const,std::shared_ptr<BaseWatcher> > *v7; // rax
  std::__shared_ptr_access<proto::WatcherAllDataNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  Player *player; // r14
  std::__shared_ptr_access<proto::PushTipsAllDataNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  google::protobuf::RepeatedPtrField<proto::PushTipsData> *v11; // r14
  int v12; // eax
  std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::reference v13; // rax
  std::pair<unsigned int const,unsigned int> *v14; // rdx
  std::__shared_ptr_access<proto::PushTipsAllDataNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  Player *v16; // r14
  int32_t result; // eax
  std::unordered_map<unsigned int,unsigned int>::iterator __for_begin_0; // [rsp+10h] [rbp-110h] BYREF
  std::unordered_map<unsigned int,unsigned int>::iterator __for_end_0; // [rsp+18h] [rbp-108h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseWatcher>> *__for_range; // [rsp+20h] [rbp-100h]
  std::unordered_map<unsigned int,unsigned int> *__for_range_0; // [rsp+28h] [rbp-F8h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *push_tips_id; // [rsp+30h] [rbp-F0h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *state; // [rsp+38h] [rbp-E8h]
  proto::PushTipsData *proto_push_tips; // [rsp+40h] [rbp-E0h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<BaseWatcher> > >::type *watcher_id; // [rsp+48h] [rbp-D8h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<BaseWatcher> > >::type *_; // [rsp+50h] [rbp-D0h]
  std::pair<unsigned int const,unsigned int> __for_end; // [rsp+58h] [rbp-C8h] BYREF
  std::shared_ptr<proto::WatcherAllDataNotify> __r; // [rsp+60h] [rbp-C0h] BYREF
  std::pair<unsigned int const,std::shared_ptr<BaseWatcher> > __in; // [rsp+70h] [rbp-B0h] BYREF
  char v30[144]; // [rsp+90h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 22 watcher_notify_ptr:282 64 16 24 push_tips_notify_ptr:292";
  *(_QWORD *)(v1 + 16) = PlayerWatcherComp::notifyAllData;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  common::tools::perf::make_shared<proto::WatcherAllDataNotify>();
  v4 = std::__shared_ptr_access<proto::WatcherAllDataNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::WatcherAllDataNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
  v5 = proto::WatcherAllDataNotify::mutable_watcher_list(v4);
  v6 = std::unordered_map<unsigned int,std::shared_ptr<BaseWatcher>>::size(&this->watcher_map_);
  google::protobuf::RepeatedField<unsigned int>::Reserve(v5, v6);
  __for_range = &this->watcher_map_;
  __for_end_0._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false>::__node_type *)std::unordered_map<unsigned int,std::shared_ptr<BaseWatcher>>::begin(&this->watcher_map_)._M_cur;
  __for_end = (std::pair<unsigned int const,unsigned int>)std::unordered_map<unsigned int,std::shared_ptr<BaseWatcher>>::end(&this->watcher_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseWatcher>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<BaseWatcher> >,false> *)&__for_end_0,
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<BaseWatcher> >,false> *)&__for_end) )
  {
    v7 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseWatcher>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseWatcher> >,false,false> *const)&__for_end_0);
    std::pair<unsigned int const,std::shared_ptr<BaseWatcher>>::pair(&__in, v7);
    watcher_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseWatcher>>(&__in);
    _ = std::get<1ul,unsigned int const,std::shared_ptr<BaseWatcher>>(&__in);
    v8 = std::__shared_ptr_access<proto::WatcherAllDataNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::WatcherAllDataNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    if ( *(_BYTE *)(((unsigned __int64)watcher_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)watcher_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)watcher_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(watcher_id);
    }
    proto::WatcherAllDataNotify::add_watcher_list(v8, *watcher_id);
    std::pair<unsigned int const,std::shared_ptr<BaseWatcher>>::~pair(&__in);
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseWatcher>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseWatcher> >,false,false> *const)&__for_end_0);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  player = this->player_;
  std::dynamic_pointer_cast<google::protobuf::Message const,proto::WatcherAllDataNotify>(&__r);
  Player::sendMessage(player, (common::minet::ConstMessagePtr *)&__r, 0LL);
  std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
  common::tools::perf::make_shared<proto::PushTipsAllDataNotify>();
  v10 = std::__shared_ptr_access<proto::PushTipsAllDataNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::PushTipsAllDataNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
  v11 = proto::PushTipsAllDataNotify::mutable_push_tips_list(v10);
  v12 = std::unordered_map<unsigned int,unsigned int>::size(&this->push_tips_map_);
  google::protobuf::RepeatedPtrField<proto::PushTipsData>::Reserve(v11, v12);
  __for_range_0 = &this->push_tips_map_;
  __for_begin_0._M_cur = std::unordered_map<unsigned int,unsigned int>::begin(&this->push_tips_map_)._M_cur;
  __for_end_0._M_cur = std::unordered_map<unsigned int,unsigned int>::end(__for_range_0)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(&__for_begin_0, &__for_end_0) )
  {
    v13 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*(&__for_begin_0);
    v14 = v13;
    if ( ((unsigned __int8)v13 & 7) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v13->second + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v13 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v13->second + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(v13, 8LL);
    }
    __for_end = *v14;
    push_tips_id = std::get<0ul,unsigned int const,unsigned int>(&__for_end);
    state = std::get<1ul,unsigned int const,unsigned int>(&__for_end);
    v15 = std::__shared_ptr_access<proto::PushTipsAllDataNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::PushTipsAllDataNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    proto_push_tips = proto::PushTipsAllDataNotify::add_push_tips_list(v15);
    if ( *(_BYTE *)(((unsigned __int64)push_tips_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)push_tips_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)push_tips_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(push_tips_id);
    }
    proto::PushTipsData::set_push_tips_id(proto_push_tips, *push_tips_id);
    if ( *(_BYTE *)(((unsigned __int64)state >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)state & 7) + 3) >= *(_BYTE *)(((unsigned __int64)state >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(state);
    }
    proto::PushTipsData::set_state(proto_push_tips, *state);
    std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++(&__for_begin_0);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  v16 = this->player_;
  std::dynamic_pointer_cast<google::protobuf::Message const,proto::PushTipsAllDataNotify>((const std::shared_ptr<proto::PushTipsAllDataNotify> *)&__r);
  Player::sendMessage(v16, (common::minet::ConstMessagePtr *)&__r, 0LL);
  std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
  std::shared_ptr<proto::PushTipsAllDataNotify>::~shared_ptr((std::shared_ptr<proto::PushTipsAllDataNotify> *const)(v1 + 64));
  std::shared_ptr<proto::WatcherAllDataNotify>::~shared_ptr((std::shared_ptr<proto::WatcherAllDataNotify> *const)(v1 + 32));
  result = 0;
  if ( v30 == (char *)v1 )
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

// Line 307: range 000000001438B41E-000000001438B6AC
int32_t __cdecl PlayerWatcherComp::onWatcherEventNotify(
        PlayerWatcherComp *const this,
        const proto::WatcherEventNotify *notify)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  char v7; // al
  common::milog::MiLogStream *v8; // rax
  int32_t v9; // r14d
  BaseWatcher *v10; // rax
  int32_t result; // eax
  google::protobuf::uint32 add_progress; // [rsp+1Ch] [rbp-B4h]
  common::milog::MiLogStream v13; // [rsp+20h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 14 watcher_id:308 64 16 15 watcher_ptr:311";
  *(_QWORD *)(v2 + 16) = PlayerWatcherComp::onWatcherEventNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = proto::WatcherEventNotify::watcher_id(notify);
  add_progress = proto::WatcherEventNotify::add_progress(notify);
  PlayerWatcherComp::findWatcher((PlayerWatcherComp *const)(v2 + 64), (uint32_t)this);
  if ( std::operator==<BaseWatcher>(0LL, (const std::shared_ptr<BaseWatcher> *)(v2 + 64)) )
    goto LABEL_10;
  v5 = (unsigned __int64)std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8(v5);
  v6 = *(_QWORD *)v5 + 24LL;
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8(*(_QWORD *)v5 + 24LL);
  if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))v6)(v5) != 1 )
LABEL_10:
    v7 = 1;
  else
    v7 = 0;
  if ( v7 )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/watcher/player_watcher_comp.cpp",
      "onWatcherEventNotify",
      314);
    v8 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
           &v13,
           (const char (*)[52])"watcher not exist or is server trigger. watcher_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v13);
    v9 = -1;
  }
  else
  {
    v10 = std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    BaseWatcher::addProgress(v10, add_progress);
    v9 = 0;
  }
  std::shared_ptr<BaseWatcher>::~shared_ptr((std::shared_ptr<BaseWatcher> *const)(v2 + 64));
  result = v9;
  if ( v14 == (char *)v2 )
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

// Line 324: range 000000001438B6AE-000000001438BDAD
int32_t __cdecl PlayerWatcherComp::onWatcherEventTypeNotify(
        PlayerWatcherComp *const this,
        const proto::WatcherEventTypeNotify *notify)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rbx
  int32_t v6; // r14d
  const google::protobuf::RepeatedField<unsigned int> *v7; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false>::pointer v8; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v9; // rax
  _DWORD *v10; // rdx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  char v13; // al
  common::milog::MiLogStream *v14; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  common::milog::MiLogStream *v16; // rax
  BaseWatcher *v17; // rax
  int32_t result; // eax
  google::protobuf::uint32 add_progress; // [rsp+1Ch] [rbp-1C4h]
  std::set<unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-1C0h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+28h] [rbp-1B8h] BYREF
  std::set<unsigned int> *__for_range; // [rsp+30h] [rbp-1B0h]
  const data::WatcherConfig *watcher_config_ptr; // [rsp+38h] [rbp-1A8h]
  std::shared_ptr<Config> v24; // [rsp+40h] [rbp-1A0h] BYREF
  common::milog::MiLogStream v25; // [rsp+50h] [rbp-190h] BYREF
  std::string val; // [rsp+70h] [rbp-170h] BYREF
  char v27[336]; // [rsp+90h] [rbp-150h] BYREF

  v2 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 48 4 24 watcher_trigger_type:325 64 4 14 watcher_id:339 80 8 8 iter:328 112 16 15 watcher_ptr:"
                        "341 144 24 19 proto_param_vec:335 208 48 15 watcher_set:338";
  *(_QWORD *)(v2 + 16) = PlayerWatcherComp::onWatcherEventTypeNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = 61956;
  v4[536862722] = -234881024;
  v4[536862723] = 62194;
  v4[536862724] = 62194;
  v4[536862725] = -218959360;
  v4[536862726] = 62194;
  v4[536862728] = -202116109;
  *(_DWORD *)(v2 + 48) = proto::WatcherEventTypeNotify::watcher_trigger_type(notify);
  add_progress = proto::WatcherEventTypeNotify::add_progress(notify);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::iterator *)(v2 + 80) = std::unordered_map<unsigned int,std::set<unsigned int>>::find(
                                                                                      &this->trigger_watcher_map_,
                                                                                      (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v2 + 48));
  __for_end._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::unordered_map<unsigned int,std::set<unsigned int>>::end(&this->trigger_watcher_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,std::set<unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v2 + 80),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)&__for_end) )
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/watcher/player_watcher_comp.cpp",
      "onWatcherEventTypeNotify",
      331);
    v5 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
           &v25,
           (const char (*)[35])"trigger_watcher not found. notify:");
    google::protobuf::Message::ShortDebugString[abi:cxx11](&val, &notify->google::protobuf::Message);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v25);
    v6 = -1;
  }
  else
  {
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 144));
    v7 = proto::WatcherEventTypeNotify::param_list(notify);
    common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(v7, (std::vector<unsigned int> *)(v2 + 144));
    v8 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v2 + 80));
    std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 208), &v8->second);
    __for_range = (std::set<unsigned int> *)(v2 + 208);
    __for_begin._M_node = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v2 + 208))._M_node;
    __for_end._M_node = std::set<unsigned int>::end(__for_range)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v9 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
      v10 = v9;
      if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v9);
      }
      *(_DWORD *)(v2 + 64) = *v10;
      PlayerWatcherComp::findWatcher((PlayerWatcherComp *const)(v2 + 112), (uint32_t)this);
      if ( std::operator==<BaseWatcher>(0LL, (const std::shared_ptr<BaseWatcher> *)(v2 + 112)) )
        goto LABEL_16;
      v11 = (unsigned __int64)std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
      if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
        v11 = __asan_report_load8(v11);
      v12 = *(_QWORD *)v11 + 24LL;
      if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
        v11 = __asan_report_load8(*(_QWORD *)v11 + 24LL);
      if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))v12)(v11) != 1 )
LABEL_16:
        v13 = 1;
      else
        v13 = 0;
      if ( v13 )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&val,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/watcher/player_watcher_comp.cpp",
          "onWatcherEventTypeNotify",
          344);
        v14 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                (common::milog::MiLogStream *const)&val,
                (const char (*)[52])"watcher not exist or is server trigger. watcher_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v2 + 64));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
      }
      else
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v24);
        v15 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v24);
        watcher_config_ptr = WatcherExcelConfigMgr::findWatcherConfig(
                               &v15->design_config.txt_config_mgr.watcher_config_mgr,
                               *(_DWORD *)(v2 + 64));
        std::shared_ptr<Config>::~shared_ptr(&v24);
        if ( watcher_config_ptr )
        {
          if ( !std::operator!=<unsigned int,std::allocator<unsigned int>>(
                  (const std::vector<unsigned int> *)(v2 + 144),
                  &watcher_config_ptr->trigger_config.param_vec) )
          {
            v17 = std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
            BaseWatcher::addProgress(v17, add_progress);
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&val,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/watcher/player_watcher_comp.cpp",
            "onWatcherEventTypeNotify",
            350);
          v16 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                  (common::milog::MiLogStream *const)&val,
                  (const char (*)[38])"watcher config not found. watcher_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v2 + 64));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
        }
      }
      std::shared_ptr<BaseWatcher>::~shared_ptr((std::shared_ptr<BaseWatcher> *const)(v2 + 112));
      std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
    }
    v6 = 0;
    std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 208));
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 144));
  }
  result = v6;
  if ( v27 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
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
  return result;
};

// Line 365: range 000000001438BDAE-000000001438C13B
int32_t __cdecl PlayerWatcherComp::onWatcherEventStageNotify(
        PlayerWatcherComp *const this,
        const proto::WatcherEventStageNotify *notify)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  int32_t v6; // r14d
  std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // r14
  unsigned __int64 v13; // rax
  __int64 (__fastcall *v14)(std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, CombatMulticondConfigCommonEvent *); // r15
  int32_t result; // eax
  google::protobuf::uint32 stage_id; // [rsp+28h] [rbp-E8h]
  google::protobuf::uint32 add_progress; // [rsp+2Ch] [rbp-E4h]
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-E0h] BYREF
  CombatMulticondConfigCommonEvent v19; // [rsp+50h] [rbp-C0h] BYREF
  char v20[144]; // [rsp+80h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 14 watcher_id:366 48 4 24 watcher_trigger_type:377 64 16 15 watcher_ptr:370";
  *(_QWORD *)(v2 + 16) = PlayerWatcherComp::onWatcherEventStageNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 32) = proto::WatcherEventStageNotify::watcher_id(notify);
  stage_id = proto::WatcherEventStageNotify::stage(notify);
  add_progress = proto::WatcherEventStageNotify::add_progress(notify);
  PlayerWatcherComp::findWatcher((PlayerWatcherComp *const)(v2 + 64), (uint32_t)this);
  if ( std::operator==<BaseWatcher>(0LL, (const std::shared_ptr<BaseWatcher> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/watcher/player_watcher_comp.cpp",
      "onWatcherEventStageNotify",
      373);
    v5 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           &v18,
           (const char (*)[31])"watcher not exist. watcher_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v18);
    v6 = -1;
  }
  else
  {
    v7 = std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    *(_DWORD *)(v2 + 48) = BaseWatcher::getWatcherTriggerType(v7);
    if ( *(_DWORD *)(v2 + 48) == 13 )
    {
      v11 = std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      v12 = v11;
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v11);
      v13 = (unsigned __int64)(v12->_vptr_DescribalBase + 5);
      if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
        v13 = __asan_report_load8(v12->_vptr_DescribalBase + 5);
      v14 = *(__int64 (__fastcall **)(std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, CombatMulticondConfigCommonEvent *))v13;
      CombatMulticondConfigCommonEvent::CombatMulticondConfigCommonEvent(
        &v19,
        *(_DWORD *)(v2 + 32),
        stage_id,
        add_progress);
      v6 = v14(v12, &v19);
      CombatMulticondConfigCommonEvent::~CombatMulticondConfigCommonEvent(&v19);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/watcher/player_watcher_comp.cpp",
        "onWatcherEventStageNotify",
        380);
      v8 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
             &v18,
             (const char (*)[36])"watcher type not match. watcher_id:");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 32));
      v10 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
              v9,
              (const char (*)[23])" watcher_trigger_type:");
      common::milog::MiLogStream::operator<<<data::WatcherTriggerType,(data::WatcherTriggerType*)0>(
        v10,
        (const data::WatcherTriggerType *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v18);
      v6 = -1;
    }
  }
  std::shared_ptr<BaseWatcher>::~shared_ptr((std::shared_ptr<BaseWatcher> *const)(v2 + 64));
  result = v6;
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

// Line 389: range 000000001438C13C-000000001438C59F
__int64 __fastcall PlayerWatcherComp::onPushTipsReadFinish(PlayerWatcherComp *const this, uint32_t push_tips_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r12
  bool v10; // dl
  std::allocator<unsigned int> __a; // [rsp+2Bh] [rbp-E5h] BYREF
  unsigned int val; // [rsp+2Ch] [rbp-E4h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> __y; // [rsp+30h] [rbp-E0h] BYREF
  uint32_t *push_tips_state; // [rsp+38h] [rbp-D8h]
  std::vector<unsigned int> push_tips_vec; // [rsp+40h] [rbp-D0h] BYREF
  common::milog::MiLogStream v16; // [rsp+60h] [rbp-B0h] BYREF
  char v17[144]; // [rsp+80h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 16 push_tips_id:388 64 8 8 iter:390";
  *(_QWORD *)(v2 + 16) = PlayerWatcherComp::onPushTipsReadFinish;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = push_tips_id;
  *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                            &this->push_tips_map_,
                                                                            (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  __y._M_cur = std::unordered_map<unsigned int,unsigned int>::end(&this->push_tips_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,unsigned int>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/watcher/player_watcher_comp.cpp",
      "onPushTipsReadFinish",
      393);
    v5 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
           &v16,
           (const char (*)[35])"push_tips not found. push_tips_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v16);
    result = 1505LL;
  }
  else
  {
    push_tips_state = &std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 64))->second;
    if ( *(_BYTE *)(((unsigned __int64)push_tips_state >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)push_tips_state & 7) + 3) >= *(_BYTE *)(((unsigned __int64)push_tips_state >> 3)
                                                                        + 0x7FFF8000) )
    {
      __asan_report_load4(push_tips_state);
    }
    if ( *push_tips_state == 3 )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/watcher/player_watcher_comp.cpp",
        "onPushTipsReadFinish",
        400);
      v7 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
             &v16,
             (const char (*)[42])"push_tips already finished. push_tips_id:");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
      v9 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v8, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
      common::milog::MiLogStream::~MiLogStream(&v16);
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v10 = *(_BYTE *)(((unsigned __int64)push_tips_state >> 3) + 0x7FFF8000) != 0
         && (char)(((unsigned __int8)push_tips_state & 7) + 3) >= *(_BYTE *)(((unsigned __int64)push_tips_state >> 3)
                                                                           + 0x7FFF8000);
      if ( v10 )
        __asan_report_store4(push_tips_state, ((unsigned __int8)push_tips_state & 7u) + 3, v10);
      *push_tips_state = 2;
      val = *(_DWORD *)(v2 + 48);
      std::allocator<unsigned int>::allocator(&__a);
      std::vector<unsigned int>::vector(
        &push_tips_vec,
        (std::initializer_list<unsigned int>)__PAIR128__(1LL, &val),
        &__a);
      PlayerWatcherComp::notifyPushTipsChange(this, &push_tips_vec);
      std::vector<unsigned int>::~vector(&push_tips_vec);
      std::allocator<unsigned int>::~allocator(&__a);
      PlayerWatcherComp::logPushTipsChange(this, *(_DWORD *)(v2 + 48));
      result = 0LL;
    }
  }
  if ( v17 == (char *)v2 )
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

// Line 413: range 000000001438C5A0-000000001438C6FB
int32_t __cdecl PlayerWatcherComp::onPushTipsRewardReq(
        PlayerWatcherComp *const this,
        const proto::GetPushTipsRewardReq *req)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const google::protobuf::RepeatedField<unsigned int> *v5; // rax
  int32_t v6; // r14d
  int32_t result; // eax
  char v8[144]; // [rsp+10h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 17 push_tips_vec:414";
  *(_QWORD *)(v2 + 16) = PlayerWatcherComp::onPushTipsRewardReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 32));
  v5 = proto::GetPushTipsRewardReq::push_tips_id_list(req);
  common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(v5, (std::vector<unsigned int> *)(v2 + 32));
  v6 = PlayerWatcherComp::takePushTipsReward(this, (const std::vector<unsigned int> *)(v2 + 32));
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 32));
  result = v6;
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

// Line 420: range 000000001438C6FC-000000001438CFF8
int32_t __cdecl PlayerWatcherComp::takePushTipsReward(
        PlayerWatcherComp *const this,
        const std::vector<unsigned int> *push_tips_vec)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v5; // rax
  _DWORD *v6; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  int32_t v9; // r14d
  common::milog::MiLogStream *v10; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v11; // rdx
  unsigned int *p_second; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  PlayerItemComp *ItemComp; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rcx
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v20; // rax
  _DWORD *v21; // rdx
  char *v22; // rsi
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v23; // rax
  _DWORD *v24; // rdx
  char v25; // cl
  PlayerItemComp *v26; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-1B4h]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-1B0h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-1A8h] BYREF
  std::vector<unsigned int>::const_iterator __for_end_0; // [rsp+30h] [rbp-1A0h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-198h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+40h] [rbp-190h]
  const data::PushTipsConfig *push_tips_config_ptr; // [rsp+48h] [rbp-188h]
  std::shared_ptr<Config> v36; // [rsp+50h] [rbp-180h] BYREF
  common::milog::MiLogStream v37; // [rsp+60h] [rbp-170h] BYREF
  common::milog::MiLogStream v38; // [rsp+80h] [rbp-150h] BYREF
  common::milog::MiLogStream v39; // [rsp+A0h] [rbp-130h] BYREF
  char v40[272]; // [rsp+C0h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 16 push_tips_id:423 48 4 16 push_tips_id:460 64 8 8 iter:432 96 24 17 reward_id_vec:421 1"
                        "60 24 17 action_reason:452";
  *(_QWORD *)(v2 + 16) = PlayerWatcherComp::takePushTipsReward;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -234881024;
  v4[536862724] = -218959118;
  v4[536862725] = -218103808;
  v4[536862726] = -202116109;
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 96));
  __for_range = push_tips_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(push_tips_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(push_tips_vec)._M_current;
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
    GameserverService::getConfig((GameserverService *const)&v36);
    v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v36);
    push_tips_config_ptr = data::WatcherExcelConfigMgrBase::findPushTipsConfig(
                             &v7->design_config.txt_config_mgr.watcher_config_mgr,
                             *(_DWORD *)(v2 + 32));
    std::shared_ptr<Config>::~shared_ptr(&v36);
    if ( !push_tips_config_ptr )
    {
      common::milog::MiLogStream::create(
        &v37,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/watcher/player_watcher_comp.cpp",
        "takePushTipsReward",
        428);
      v8 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
             &v37,
             (const char (*)[22])"invalid push_tips_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v37);
      v9 = 5;
      goto LABEL_39;
    }
    *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                              &this->push_tips_map_,
                                                                              (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 32));
    __for_end_0._M_current = (const unsigned int *)std::unordered_map<unsigned int,unsigned int>::end(&this->push_tips_map_)._M_cur;
    if ( std::__detail::operator==<std::pair<unsigned int const,unsigned int>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)&__for_end_0) )
    {
      common::milog::MiLogStream::create(
        &v38,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/watcher/player_watcher_comp.cpp",
        "takePushTipsReward",
        435);
      v10 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
              &v38,
              (const char (*)[35])"push_tips not found. push_tips_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v38);
      v9 = 1505;
      goto LABEL_39;
    }
    v11 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 64));
    p_second = &v11->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    if ( v11->second == 3 )
    {
      common::milog::MiLogStream::create(
        &v39,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/watcher/player_watcher_comp.cpp",
        "takePushTipsReward",
        442);
      v13 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
              &v39,
              (const char (*)[42])"push_tips already finished. push_tips_id:");
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 32));
      v15 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v14, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      *(_DWORD *)(v2 + 48) = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v39);
      v9 = -1;
      goto LABEL_39;
    }
    if ( *(_BYTE *)(((unsigned __int64)&push_tips_config_ptr->reward_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&push_tips_config_ptr->reward_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&push_tips_config_ptr->reward_id);
    }
    if ( push_tips_config_ptr->reward_id )
      std::vector<unsigned int>::push_back(
        (std::vector<unsigned int> *const)(v2 + 96),
        &push_tips_config_ptr->reward_id);
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  ActionReason::ActionReason(
    (ActionReason *const)(v2 + 160),
    ACTION_REASON_PUSH_TIPS_REWARD,
    ITEM_LIMIT_PUSH_TIPS_REWARD);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  ItemComp = Player::getItemComp(this->player_);
  ret = PlayerItemComp::checkGrantRewards(
          ItemComp,
          (const std::vector<unsigned int> *)(v2 + 96),
          (const ActionReason *)(v2 + 160));
  if ( ret )
  {
    common::milog::MiLogStream::create(
      &v39,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/watcher/player_watcher_comp.cpp",
      "takePushTipsReward",
      456);
    v17 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
            &v39,
            (const char (*)[39])"checkGrantRewards fail, reward_id_vec:");
    v18 = common::milog::MiLogStream::operator<<<unsigned int>(v17, (const std::vector<unsigned int> *)(v2 + 96));
    v19 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v18, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v19, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v39);
    v9 = ret;
  }
  else
  {
    __for_range_0 = push_tips_vec;
    *(std::vector<unsigned int>::const_iterator *)(v2 + 64) = std::vector<unsigned int>::begin(push_tips_vec);
    __for_end_0._M_current = std::vector<unsigned int>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 64),
              &__for_end_0) )
    {
      v20 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 64));
      v21 = v20;
      if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v20);
      }
      *(_DWORD *)(v2 + 48) = *v21;
      v22 = (char *)(v2 + 48);
      v23 = std::unordered_map<unsigned int,unsigned int>::operator[](
              &this->push_tips_map_,
              (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
      v24 = v23;
      v25 = *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000);
      if ( v25 != 0 && (char)(((unsigned __int8)v23 & 7) + 3) >= v25 )
      {
        LOBYTE(v22) = v25 != 0;
        __asan_report_store4(v23, v22, (_BYTE)v23);
      }
      *v24 = 3;
      PlayerWatcherComp::logPushTipsChange(this, *(_DWORD *)(v2 + 48));
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 64));
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    v26 = Player::getItemComp(this->player_);
    PlayerItemComp::grantRewards(
      v26,
      (const std::vector<unsigned int> *)(v2 + 96),
      (const ActionReason *)(v2 + 160),
      0LL);
    PlayerWatcherComp::notifyPushTipsChange(this, push_tips_vec);
    v9 = 0;
  }
LABEL_39:
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 96));
  result = v9;
  if ( v40 == (char *)v2 )
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

// Line 474: range 000000001438CFFA-000000001438D2D2
void __cdecl PlayerWatcherComp::notifyWatcherChange(
        PlayerWatcherComp *const this,
        const std::vector<unsigned int> *watcher_vec)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v5; // rax
  _DWORD *v6; // rdx
  std::__shared_ptr_access<proto::WatcherChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<proto::WatcherChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  Player *player; // r14
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-B8h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-B0h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+28h] [rbp-A8h]
  std::shared_ptr<proto::WatcherChangeNotify> __r; // [rsp+30h] [rbp-A0h] BYREF
  char v14[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 14 watcher_id:480 64 16 14 notify_ptr:479";
  *(_QWORD *)(v2 + 16) = PlayerWatcherComp::notifyWatcherChange;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  if ( !std::vector<unsigned int>::empty(watcher_vec) )
  {
    common::tools::perf::make_shared<proto::WatcherChangeNotify>();
    __for_range = watcher_vec;
    __for_begin._M_current = std::vector<unsigned int>::begin(watcher_vec)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(watcher_vec)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v5 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
      v6 = v5;
      if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v5);
      }
      *(_DWORD *)(v2 + 48) = *v6;
      if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::shared_ptr<BaseWatcher>>,unsigned int>(
             &this->watcher_map_,
             (const unsigned int *)(v2 + 48)) )
      {
        v7 = std::__shared_ptr_access<proto::WatcherChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::WatcherChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        proto::WatcherChangeNotify::add_new_watcher_list(v7, *(_DWORD *)(v2 + 48));
      }
      else
      {
        v8 = std::__shared_ptr_access<proto::WatcherChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::WatcherChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        proto::WatcherChangeNotify::add_removed_watcher_list(v8, *(_DWORD *)(v2 + 48));
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    player = this->player_;
    std::dynamic_pointer_cast<google::protobuf::Message const,proto::WatcherChangeNotify>(&__r);
    Player::sendMessage(player, (common::minet::ConstMessagePtr *)&__r, 0LL);
    std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
    std::shared_ptr<proto::WatcherChangeNotify>::~shared_ptr((std::shared_ptr<proto::WatcherChangeNotify> *const)(v2 + 64));
  }
  if ( v14 == (char *)v2 )
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

// Line 496: range 000000001438D2D4-000000001438D66D
void __cdecl PlayerWatcherComp::notifyPushTipsChange(
        PlayerWatcherComp *const this,
        const std::vector<unsigned int> *push_tips_vec)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v5; // rax
  _DWORD *v6; // rdx
  std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v7; // rdx
  unsigned int *p_second; // rax
  std::__shared_ptr_access<proto::PushTipsChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<proto::PushTipsChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  const google::protobuf::RepeatedPtrField<proto::PushTipsData> *v11; // rax
  Player *player; // r14
  uint32_t push_tips_state; // [rsp+14h] [rbp-ECh]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-E8h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-E0h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> __y; // [rsp+28h] [rbp-D8h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+30h] [rbp-D0h]
  proto::PushTipsData *proto_push_tips_data; // [rsp+38h] [rbp-C8h]
  std::shared_ptr<proto::PushTipsChangeNotify> __r; // [rsp+40h] [rbp-C0h] BYREF
  char v20[176]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 16 push_tips_id:498 64 8 8 iter:501 96 16 14 notify_ptr:497";
  *(_QWORD *)(v2 + 16) = PlayerWatcherComp::notifyPushTipsChange;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202178560;
  common::tools::perf::make_shared<proto::PushTipsChangeNotify>();
  __for_range = push_tips_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(push_tips_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(push_tips_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v5 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    *(_DWORD *)(v2 + 48) = *v6;
    push_tips_state = 0;
    *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                              &this->push_tips_map_,
                                                                              (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
    __y._M_cur = std::unordered_map<unsigned int,unsigned int>::end(&this->push_tips_map_)._M_cur;
    if ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 64),
           &__y) )
    {
      v7 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 64));
      p_second = &v7->second;
      if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_second);
      }
      push_tips_state = v7->second;
    }
    v9 = std::__shared_ptr_access<proto::PushTipsChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::PushTipsChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    proto_push_tips_data = proto::PushTipsChangeNotify::add_push_tips_list(v9);
    proto::PushTipsData::set_push_tips_id(proto_push_tips_data, *(_DWORD *)(v2 + 48));
    proto::PushTipsData::set_state(proto_push_tips_data, push_tips_state);
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  v10 = std::__shared_ptr_access<proto::PushTipsChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::PushTipsChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
  v11 = proto::PushTipsChangeNotify::push_tips_list(v10);
  if ( !google::protobuf::RepeatedPtrField<proto::PushTipsData>::empty(v11) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    player = this->player_;
    std::dynamic_pointer_cast<google::protobuf::Message const,proto::PushTipsChangeNotify>(&__r);
    Player::sendMessage(player, (common::minet::ConstMessagePtr *)&__r, 0LL);
    std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
  }
  std::shared_ptr<proto::PushTipsChangeNotify>::~shared_ptr((std::shared_ptr<proto::PushTipsChangeNotify> *const)(v2 + 96));
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
};

// Line 518: range 000000001438D66E-000000001438D744
uint32_t __fastcall PlayerWatcherComp::getPushTipsState(const PlayerWatcherComp *const this, uint32_t push_tips_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  uint32_t result; // eax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 16 push_tips_id:517";
  *(_QWORD *)(v2 + 16) = PlayerWatcherComp::getPushTipsState;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = push_tips_id;
  result = common::tools::MiscUtils::findMapWithDefaultValue<std::unordered_map<unsigned int,unsigned int>>(
             &this->push_tips_map_,
             (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 32),
             0);
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

// Line 524: range 000000001438D746-000000001438DF4B
int32_t __cdecl PlayerWatcherComp::setWatcherByGm(
        PlayerWatcherComp *const this,
        std::vector<unsigned int> *watcher_id_vec,
        bool is_active)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v6; // rax
  uint32_t *v7; // rdx
  PlayerSceneComp *SceneComp; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v9; // rax
  _DWORD *v10; // rdx
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v11; // rax
  _DWORD *v12; // rdx
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false>::pointer v13; // rax
  const unsigned int *M_current; // r15
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false>::pointer v15; // rax
  const unsigned int *v16; // r14
  BaseWatcher *v17; // rax
  int32_t result; // eax
  std::vector<unsigned int>::iterator __for_begin_0; // [rsp+30h] [rbp-1B0h] BYREF
  std::vector<unsigned int>::iterator __for_end_0; // [rsp+38h] [rbp-1A8h] BYREF
  std::vector<unsigned int>::const_iterator __for_begin_1; // [rsp+40h] [rbp-1A0h] BYREF
  std::vector<unsigned int>::const_iterator __for_end_1; // [rsp+48h] [rbp-198h] BYREF
  std::unordered_map<unsigned int,data::WatcherConfig*>::const_iterator __for_begin; // [rsp+50h] [rbp-190h] BYREF
  std::unordered_map<unsigned int,data::WatcherConfig*>::const_iterator __for_end; // [rsp+58h] [rbp-188h] BYREF
  const std::unordered_map<unsigned int,data::WatcherConfig*> *__for_range; // [rsp+60h] [rbp-180h]
  const std::pair<unsigned int const,data::WatcherConfig*> *v27; // [rsp+68h] [rbp-178h]
  std::tuple_element<0,const std::pair<unsigned int const,data::WatcherConfig*> >::type *watcher_id; // [rsp+70h] [rbp-170h]
  std::tuple_element<1,const std::pair<unsigned int const,data::WatcherConfig*> >::type *_; // [rsp+78h] [rbp-168h]
  std::vector<unsigned int> *__for_range_1; // [rsp+80h] [rbp-160h]
  const std::unordered_map<unsigned int,std::vector<unsigned int>> *watcher_push_tips_map; // [rsp+88h] [rbp-158h]
  const std::vector<unsigned int> *__for_range_2; // [rsp+90h] [rbp-150h]
  std::vector<unsigned int> *__for_range_0; // [rsp+98h] [rbp-148h]
  std::shared_ptr<Config> v34; // [rsp+A0h] [rbp-140h] BYREF
  char v35[304]; // [rsp+B0h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 4 14 watcher_id:546 48 4 16 push_tips_id:554 64 8 18 push_tips_iter:551 96 16 15 watcher_pt"
                        "r:567 128 24 27 notify_push_tips_id_vec:542 192 24 25 notify_watcher_id_vec:543";
  *(_QWORD *)(v3 + 16) = PlayerWatcherComp::setWatcherByGm;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -219021312;
  v5[536862724] = -234881024;
  v5[536862725] = -218959118;
  v5[536862726] = -218103808;
  v5[536862727] = -202116109;
  if ( std::vector<unsigned int>::empty(watcher_id_vec) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v3 + 96));
    __for_range = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96))->design_config.txt_config_mgr.watcher_config_mgr.watcher_config_map;
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 96));
    __for_begin._M_cur = std::unordered_map<unsigned int,data::WatcherConfig *>::begin(__for_range)._M_cur;
    __for_end._M_cur = std::unordered_map<unsigned int,data::WatcherConfig *>::end(__for_range)._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,data::WatcherConfig *>,false>(
              &__for_begin,
              &__for_end) )
    {
      v27 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::WatcherConfig *>,false,false>::operator*(&__for_begin);
      watcher_id = std::get<0ul,unsigned int const,data::WatcherConfig *>(v27);
      _ = (std::tuple_element<1,const std::pair<unsigned int const,data::WatcherConfig*> >::type *)std::get<1ul,unsigned int const,data::WatcherConfig *>(v27);
      std::vector<unsigned int>::push_back(watcher_id_vec, watcher_id);
      std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::WatcherConfig *>,false,false>::operator++(&__for_begin);
    }
  }
  if ( is_active )
  {
    __for_range_0 = watcher_id_vec;
    __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::WatcherConfig*>,false>::__node_type *)std::vector<unsigned int>::begin(watcher_id_vec)._M_current;
    __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::WatcherConfig*>,false>::__node_type *)std::vector<unsigned int>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_begin,
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_end) )
    {
      v6 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
      v7 = v6;
      if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v6);
      }
      PlayerWatcherComp::finishGlobalWatcher(this, *v7);
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
    }
  }
  else
  {
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 128));
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 192));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    SceneComp = Player::getSceneComp(this->player_);
    PlayerSceneComp::clearSeenMonsterByGm(SceneComp);
    __for_range_1 = watcher_id_vec;
    __for_begin_0._M_current = std::vector<unsigned int>::begin(watcher_id_vec)._M_current;
    __for_end_0._M_current = std::vector<unsigned int>::end(__for_range_1)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin_0, &__for_end_0) )
    {
      v9 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin_0);
      v10 = v9;
      if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v9);
      }
      *(_DWORD *)(v3 + 32) = *v10;
      if ( std::unordered_set<unsigned int>::erase(
             &this->finished_global_watcher_set_,
             (const std::unordered_set<unsigned int>::key_type *)(v3 + 32)) )
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v34);
        watcher_push_tips_map = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v34)->design_config.txt_config_mgr.watcher_config_mgr.watcher_push_tips_map;
        std::shared_ptr<Config>::~shared_ptr(&v34);
        *(std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::vector<unsigned int>>::find(
                                                                                                     watcher_push_tips_map,
                                                                                                     (const std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *)(v3 + 32));
        __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::WatcherConfig*>,false>::__node_type *)std::unordered_map<unsigned int,std::vector<unsigned int>>::end(watcher_push_tips_map)._M_cur;
        if ( std::__detail::operator!=<std::pair<unsigned int const,std::vector<unsigned int>>,false>(
               (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v3 + 64),
               (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)&__for_end) )
        {
          __for_range_2 = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *const)(v3 + 64))->second;
          __for_begin_1._M_current = std::vector<unsigned int>::begin(__for_range_2)._M_current;
          __for_end_1._M_current = std::vector<unsigned int>::end(__for_range_2)._M_current;
          while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin_1, &__for_end_1) )
          {
            v11 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin_1);
            v12 = v11;
            if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v11);
            }
            *(_DWORD *)(v3 + 48) = *v12;
            std::unordered_map<unsigned int,unsigned int>::erase(
              &this->push_tips_map_,
              (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v3 + 48));
            PlayerWatcherComp::logPushTipsChange(this, *(_DWORD *)(v3 + 48));
            __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin_1);
          }
          v13 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *const)(v3 + 64));
          M_current = std::vector<unsigned int>::end(&v13->second)._M_current;
          v15 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *const)(v3 + 64));
          v16 = std::vector<unsigned int>::begin(&v15->second)._M_current;
          __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::WatcherConfig*>,false>::__node_type *)std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v3 + 128))._M_current;
          __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::__normal_iterator<unsigned int *>(
            (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__for_end,
            (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_begin);
          std::vector<unsigned int>::insert<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,void>(
            (std::vector<unsigned int> *const)(v3 + 128),
            (std::vector<unsigned int>::const_iterator)__for_end._M_cur,
            (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)v16,
            (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current);
        }
        if ( PlayerWatcherComp::checkGlobalWatcherPredicateConfig(this, *(_DWORD *)(v3 + 32)) )
          PlayerWatcherComp::tryEnableGlobalWatcher(this, *(_DWORD *)(v3 + 32), (std::vector<unsigned int> *)(v3 + 192));
      }
      PlayerWatcherComp::findWatcher((PlayerWatcherComp *const)(v3 + 96), (uint32_t)this);
      if ( std::operator!=<BaseWatcher>(0LL, (const std::shared_ptr<BaseWatcher> *)(v3 + 96)) )
      {
        v17 = std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        BaseWatcher::tryCorrectProgress(v17, 0);
      }
      std::shared_ptr<BaseWatcher>::~shared_ptr((std::shared_ptr<BaseWatcher> *const)(v3 + 96));
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin_0);
    }
    PlayerWatcherComp::notifyPushTipsChange(this, (const std::vector<unsigned int> *)(v3 + 128));
    PlayerWatcherComp::notifyWatcherChange(this, (const std::vector<unsigned int> *)(v3 + 192));
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 192));
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 128));
  }
  result = 0;
  if ( v35 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
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

// Line 581: range 000000001438DF4C-000000001438E1A0
__int64 __fastcall PlayerWatcherComp::addWatcherProgressByGm(
        PlayerWatcherComp *const this,
        uint32_t watcher_id,
        uint32_t add_progress)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rcx
  unsigned int v9; // r14d
  BaseWatcher *v10; // rax
  __int64 result; // rax
  common::milog::MiLogStream v13; // [rsp+10h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+30h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 14 watcher_id:580 64 16 15 watcher_ptr:583";
  *(_QWORD *)(v3 + 16) = PlayerWatcherComp::addWatcherProgressByGm;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = watcher_id;
  PlayerWatcherComp::findWatcher((PlayerWatcherComp *const)(v3 + 64), (uint32_t)this);
  if ( std::operator==<BaseWatcher>(0LL, (const std::shared_ptr<BaseWatcher> *)(v3 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/watcher/player_watcher_comp.cpp",
      "addWatcherProgressByGm",
      586);
    v6 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v13,
           (const char (*)[30])"findWatcher fail, watcher_id:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
    v8 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v7, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v8, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v9 = -1;
  }
  else
  {
    v10 = std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    BaseWatcher::addProgress(v10, add_progress);
    v9 = 0;
  }
  std::shared_ptr<BaseWatcher>::~shared_ptr((std::shared_ptr<BaseWatcher> *const)(v3 + 64));
  result = v9;
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

// Line 595: range 000000001438E1A2-000000001438E5FD
__int64 __fastcall PlayerWatcherComp::setPushTipsStateByGm(
        PlayerWatcherComp *const this,
        uint32_t push_tips_id,
        uint32_t state)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  char *v8; // rsi
  common::milog::MiLogStream *v9; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v10; // rdx
  char v11; // cl
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  unsigned int v15; // [rsp+Ch] [rbp-F4h]
  std::allocator<unsigned int> __a; // [rsp+23h] [rbp-DDh] BYREF
  std::initializer_list<unsigned int> __l; // [rsp+24h] [rbp-DCh] BYREF
  common::milog::MiLogStream v19; // [rsp+50h] [rbp-B0h] BYREF
  char v20[144]; // [rsp+70h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 16 push_tips_id:594 48 4 9 state:594 64 8 8 iter:601";
  *(_QWORD *)(v3 + 16) = PlayerWatcherComp::setPushTipsStateByGm;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 32) = push_tips_id;
  *(_DWORD *)(v3 + 48) = state;
  if ( !proto::PushTipsState_IsValid(*(_DWORD *)(v3 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/watcher/player_watcher_comp.cpp",
      "setPushTipsStateByGm",
      598);
    v6 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
           &v19,
           (const char (*)[21])"wrong state, state: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v19);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                              &this->push_tips_map_,
                                                                              (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v3 + 32));
    *(std::unordered_map<unsigned int,unsigned int>::iterator *)((char *)&__l._M_array + 4) = std::unordered_map<unsigned int,unsigned int>::end(&this->push_tips_map_);
    v8 = (char *)&__l._M_array + 4;
    if ( std::__detail::operator==<std::pair<unsigned int const,unsigned int>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v3 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)((char *)&__l._M_array + 4)) )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/watcher/player_watcher_comp.cpp",
        "setPushTipsStateByGm",
        604);
      v9 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v19,
             (const char (*)[29])"push tips not push_tips_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v19);
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v15 = *(_DWORD *)(v3 + 48);
      v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v3 + 64));
      v11 = *(_BYTE *)(((unsigned __int64)&v10->second >> 3) + 0x7FFF8000);
      if ( v11 != 0 && (char)((((_BYTE)v10 + 4) & 7) + 3) >= v11 )
      {
        LOBYTE(v8) = v11 != 0;
        __asan_report_store4(&v10->second, v8, (_BYTE)v10);
      }
      v10->second = v15;
      std::allocator<unsigned int>::allocator(&__a);
      LODWORD(__l._M_array) = *(_DWORD *)(v3 + 32);
      std::vector<unsigned int>::vector(
        (std::vector<unsigned int> *const)((char *)&__l._M_len + 4),
        (std::initializer_list<unsigned int>)__PAIR128__(1LL, &__l),
        &__a);
      PlayerWatcherComp::notifyPushTipsChange(this, (const std::vector<unsigned int> *)((char *)&__l._M_len + 4));
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)((char *)&__l._M_len + 4));
      std::allocator<unsigned int>::~allocator(&__a);
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/watcher/player_watcher_comp.cpp",
        "setPushTipsStateByGm",
        609);
      v12 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
              &v19,
              (const char (*)[40])"push tips state changed, push_tips_id: ");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 32));
      v14 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v13, (const char (*)[10])", state: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v19);
      result = 0LL;
    }
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
  return result;
};

// Line 615: range 000000001438E5FE-000000001438ED8E
__int64 __fastcall PlayerWatcherComp::setPushTipsStateByMuip(
        PlayerWatcherComp *const this,
        uint32_t push_tips_id,
        uint32_t state)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  __int64 result; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  _DWORD *v15; // rsi
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v19; // rdx
  unsigned int *p_second; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v26; // rdx
  char v27; // cl
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  unsigned int v33; // [rsp+Ch] [rbp-134h]
  std::allocator<unsigned int> __a; // [rsp+2Bh] [rbp-115h] BYREF
  _DWORD __l[5]; // [rsp+2Ch] [rbp-114h] BYREF
  std::shared_ptr<Config> v37; // [rsp+40h] [rbp-100h] BYREF
  std::vector<unsigned int> push_tips_vec; // [rsp+50h] [rbp-F0h] BYREF
  common::milog::MiLogStream v39; // [rsp+70h] [rbp-D0h] BYREF
  char v40[176]; // [rsp+90h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 7 uid:616 64 4 16 push_tips_id:614 80 4 9 state:614 96 8 8 iter:628";
  *(_QWORD *)(v3 + 16) = PlayerWatcherComp::setPushTipsStateByMuip;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 64) = push_tips_id;
  *(_DWORD *)(v3 + 80) = state;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  *(_DWORD *)(v3 + 48) = Player::getUid(this->player_);
  if ( !proto::PushTipsState_IsValid(*(_DWORD *)(v3 + 80)) || !*(_DWORD *)(v3 + 80) )
  {
    common::milog::MiLogStream::create(
      &v39,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/watcher/player_watcher_comp.cpp",
      "setPushTipsStateByMuip",
      619);
    v7 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v39, (const char (*)[10])"player : ");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    v9 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
           v8,
           (const char (*)[48])"setPushTipsStateByMuip but wrong state, state: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 80));
    common::milog::MiLogStream::~MiLogStream(&v39);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v37);
    v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v37);
    *(_QWORD *)&__l[3] = data::WatcherExcelConfigMgrBase::findPushTipsConfig(
                           &v11->design_config.txt_config_mgr.watcher_config_mgr,
                           *(_DWORD *)(v3 + 64));
    std::shared_ptr<Config>::~shared_ptr(&v37);
    if ( *(_QWORD *)&__l[3] )
    {
      *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                &this->push_tips_map_,
                                                                                (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v3 + 64));
      *(std::unordered_map<unsigned int,unsigned int>::iterator *)&__l[1] = std::unordered_map<unsigned int,unsigned int>::end(&this->push_tips_map_);
      v15 = &__l[1];
      if ( std::__detail::operator==<std::pair<unsigned int const,unsigned int>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v3 + 96),
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)&__l[1]) )
      {
        common::milog::MiLogStream::create(
          &v39,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/watcher/player_watcher_comp.cpp",
          "setPushTipsStateByMuip",
          631);
        v16 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v39, (const char (*)[10])"player : ");
        v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v16,
                (const unsigned int *)(v3 + 48));
        v18 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                v17,
                (const char (*)[56])"setPushTipsStateByMuip but player has no push_tips_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v3 + 64));
        common::milog::MiLogStream::~MiLogStream(&v39);
        result = 0xFFFFFFFFLL;
      }
      else
      {
        v19 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v3 + 96));
        p_second = &v19->second;
        if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(p_second);
        }
        if ( v19->second == *(_DWORD *)(v3 + 80) )
        {
          common::milog::MiLogStream::create(
            &v39,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/watcher/player_watcher_comp.cpp",
            "setPushTipsStateByMuip",
            636);
          v21 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v39, (const char (*)[10])"player : ");
          v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v21,
                  (const unsigned int *)(v3 + 48));
          v23 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
                  v22,
                  (const char (*)[54])"setPushTipsStateByMuip but same state  push_tips_id: ");
          v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v23,
                  (const unsigned int *)(v3 + 64));
          v25 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v24, (const char (*)[10])" state : ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, (const unsigned int *)(v3 + 80));
          common::milog::MiLogStream::~MiLogStream(&v39);
          result = 0xFFFFFFFFLL;
        }
        else
        {
          v33 = *(_DWORD *)(v3 + 80);
          v26 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v3 + 96));
          v27 = *(_BYTE *)(((unsigned __int64)&v26->second >> 3) + 0x7FFF8000);
          if ( v27 != 0 && (char)((((_BYTE)v26 + 4) & 7) + 3) >= v27 )
          {
            LOBYTE(v15) = v27 != 0;
            __asan_report_store4(&v26->second, v15, (_BYTE)v26);
          }
          v26->second = v33;
          __l[0] = *(_DWORD *)(v3 + 64);
          std::allocator<unsigned int>::allocator(&__a);
          std::vector<unsigned int>::vector(
            &push_tips_vec,
            (std::initializer_list<unsigned int>)__PAIR128__(1LL, __l),
            &__a);
          PlayerWatcherComp::notifyPushTipsChange(this, &push_tips_vec);
          std::vector<unsigned int>::~vector(&push_tips_vec);
          std::allocator<unsigned int>::~allocator(&__a);
          common::milog::MiLogStream::create(
            &v39,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/watcher/player_watcher_comp.cpp",
            "setPushTipsStateByMuip",
            641);
          v28 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v39, (const char (*)[10])"player : ");
          v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v28,
                  (const unsigned int *)(v3 + 48));
          v30 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                  v29,
                  (const char (*)[39])"setPushTipsStateByMuip push_tips_id : ");
          v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v30,
                  (const unsigned int *)(v3 + 64));
          v32 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v31, (const char (*)[10])" state : ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, (const unsigned int *)(v3 + 80));
          common::milog::MiLogStream::~MiLogStream(&v39);
          result = 0LL;
        }
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v39,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/watcher/player_watcher_comp.cpp",
        "setPushTipsStateByMuip",
        625);
      v12 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v39, (const char (*)[10])"player : ");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 48));
      v14 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
              v13,
              (const char (*)[50])"setPushTipsStateByMuip but illegal push_tips_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 64));
      common::milog::MiLogStream::~MiLogStream(&v39);
      result = 0xFFFFFFFFLL;
    }
  }
  if ( v40 == (char *)v3 )
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

// Line 646: range 000000001438ED90-000000001438F0F5
__int64 __fastcall PlayerWatcherComp::addPushTipsByGm(PlayerWatcherComp *const this, uint32_t push_tips_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v8; // rax
  std::allocator<unsigned int> __a; // [rsp+23h] [rbp-CDh] BYREF
  std::initializer_list<unsigned int> __l; // [rsp+24h] [rbp-CCh] BYREF
  std::vector<unsigned int> push_tips_vec; // [rsp+40h] [rbp-B0h] BYREF
  common::milog::MiLogStream v12; // [rsp+60h] [rbp-90h] BYREF
  char v13[112]; // [rsp+80h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 16 push_tips_id:645";
  *(_QWORD *)(v2 + 16) = PlayerWatcherComp::addPushTipsByGm;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = push_tips_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)((char *)&__l._M_len + 4));
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&__l._M_len + 4);
  *(std::initializer_list<unsigned int>::iterator *)((char *)&__l._M_array + 4) = (std::initializer_list<unsigned int>::iterator)data::WatcherExcelConfigMgrBase::findPushTipsConfig(&v5->design_config.txt_config_mgr.watcher_config_mgr, *(_DWORD *)(v2 + 32));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)((char *)&__l._M_len + 4));
  if ( *(std::initializer_list<unsigned int>::iterator *)((char *)&__l._M_array + 4) )
  {
    if ( PlayerWatcherComp::internalAddPushTips(this, *(_DWORD *)(v2 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/watcher/player_watcher_comp.cpp",
        "addPushTipsByGm",
        655);
      v8 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
             &v12,
             (const char (*)[43])"internalAddPushTips failed, push_tips_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v12);
      result = 0xFFFFFFFFLL;
    }
    else
    {
      std::allocator<unsigned int>::allocator(&__a);
      LODWORD(__l._M_array) = *(_DWORD *)(v2 + 32);
      std::vector<unsigned int>::vector(
        &push_tips_vec,
        (std::initializer_list<unsigned int>)__PAIR128__(1LL, &__l),
        &__a);
      PlayerWatcherComp::notifyPushTipsChange(this, &push_tips_vec);
      std::vector<unsigned int>::~vector(&push_tips_vec);
      std::allocator<unsigned int>::~allocator(&__a);
      result = 0LL;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/watcher/player_watcher_comp.cpp",
      "addPushTipsByGm",
      650);
    v6 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
           &v12,
           (const char (*)[23])"illegal push_tips_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v12);
    result = 0xFFFFFFFFLL;
  }
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

// Line 664: range 000000001438F0F6-000000001438F52A
int32_t __cdecl PlayerWatcherComp::emplaceWatcher(PlayerWatcherComp *const this, BaseWatcherPtr *p_watcher_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // rcx
  int32_t result; // eax
  std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // r12
  std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rcx
  std::shared_ptr<BaseWatcher> *v13; // r8
  common::milog::MiLogStream *v14; // r12
  std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  common::milog::MiLogStream *v16; // rax
  std::unordered_map<unsigned int,std::set<unsigned int>>::key_type __k; // [rsp+10h] [rbp-90h] BYREF
  data::WatcherTriggerType watcher_trigger_type; // [rsp+14h] [rbp-8Ch]
  std::set<unsigned int> *trigger_watcher_id_set; // [rsp+18h] [rbp-88h]
  common::milog::MiLogStream v20; // [rsp+20h] [rbp-80h] BYREF
  char v21[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 14 watcher_id:670";
  *(_QWORD *)(v2 + 16) = PlayerWatcherComp::emplaceWatcher;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( !std::operator==<BaseWatcher>(0LL, p_watcher_ptr) )
  {
    v7 = std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_watcher_ptr);
    *(_DWORD *)(v2 + 32) = BaseWatcher::getWatcherId(v7);
    v8 = std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_watcher_ptr);
    watcher_trigger_type = BaseWatcher::getWatcherTriggerType(v8);
    __k = watcher_trigger_type;
    trigger_watcher_id_set = std::unordered_map<unsigned int,std::set<unsigned int>>::operator[](
                               &this->trigger_watcher_map_,
                               &__k);
    if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::shared_ptr<BaseWatcher>>,unsigned int>(
           &this->watcher_map_,
           (const unsigned int *)(v2 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/watcher/player_watcher_comp.cpp",
        "emplaceWatcher",
        675);
      v9 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
             &v20,
             (const char (*)[28])"duplicate watcher, watcher:");
      v10 = std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_watcher_ptr);
      v11 = common::milog::MiLogStream::operator<<<BaseWatcher,(BaseWatcher*)0>(v9, v10);
      v12 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v11, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
    }
    else
    {
      if ( !common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
              trigger_watcher_id_set,
              (const unsigned int *)(v2 + 32)) )
      {
        std::unordered_map<unsigned int,std::shared_ptr<BaseWatcher>>::emplace<unsigned int &,std::shared_ptr<BaseWatcher>&>(
          &this->watcher_map_,
          (unsigned int *)(v2 + 32),
          p_watcher_ptr,
          (unsigned int *)&this->watcher_map_,
          v13);
        std::set<unsigned int>::insert(trigger_watcher_id_set, (const std::set<unsigned int>::value_type *)(v2 + 32));
        result = 0;
        goto LABEL_17;
      }
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/watcher/player_watcher_comp.cpp",
        "emplaceWatcher",
        680);
      v14 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
              &v20,
              (const char (*)[45])"duplicate watcher in trigger_watcher_id_set:");
      v15 = std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_watcher_ptr);
      v16 = common::milog::MiLogStream::operator<<<BaseWatcher,(BaseWatcher*)0>(v14, v15);
      v12 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v16, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
    }
    operator<<(v12, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v20);
    result = -1;
    goto LABEL_17;
  }
  common::milog::MiLogStream::create(
    &v20,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/player/watcher/player_watcher_comp.cpp",
    "emplaceWatcher",
    667);
  v5 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
         &v20,
         (const char (*)[29])"watcher_ptr is null, player:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  operator<<(v5, this->player_);
  common::milog::MiLogStream::~MiLogStream(&v20);
  result = -1;
LABEL_17:
  if ( v21 == (char *)v2 )
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

// Line 690: range 000000001438F52C-000000001438FA16
__int64 __fastcall PlayerWatcherComp::removeWatcher(PlayerWatcherComp *const this, uint32_t watcher_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rcx
  unsigned int v8; // r14d
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseWatcher> >,false,false>::pointer v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rcx
  std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v14; // r14
  std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rcx
  __int64 result; // rax
  std::unordered_map<unsigned int,std::set<unsigned int>>::key_type __k; // [rsp+18h] [rbp-E8h] BYREF
  data::WatcherTriggerType watcher_trigger_type; // [rsp+1Ch] [rbp-E4h]
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<BaseWatcher> >,false> __y; // [rsp+20h] [rbp-E0h] BYREF
  std::set<unsigned int> *trigger_watcher_id_set; // [rsp+28h] [rbp-D8h]
  common::milog::MiLogStream v23; // [rsp+30h] [rbp-D0h] BYREF
  char v24[176]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 watcher_id:689 64 8 8 iter:691 96 16 15 watcher_ptr:697";
  *(_QWORD *)(v2 + 16) = PlayerWatcherComp::removeWatcher;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202178560;
  *(_DWORD *)(v2 + 48) = watcher_id;
  *(std::unordered_map<unsigned int,std::shared_ptr<BaseWatcher>>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::shared_ptr<BaseWatcher>>::find(
                                                                                            &this->watcher_map_,
                                                                                            (const std::unordered_map<unsigned int,std::shared_ptr<BaseWatcher>>::key_type *)(v2 + 48));
  __y._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseWatcher>>::end(&this->watcher_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,std::shared_ptr<BaseWatcher>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<BaseWatcher> >,false> *)(v2 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/watcher/player_watcher_comp.cpp",
      "removeWatcher",
      694);
    v5 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           &v23,
           (const char (*)[31])"watcher not found, watcher_id:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v6, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v7, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v23);
    v8 = -1;
  }
  else
  {
    v9 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseWatcher>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseWatcher> >,false,false> *const)(v2 + 64));
    std::shared_ptr<BaseWatcher>::shared_ptr((std::shared_ptr<BaseWatcher> *const)(v2 + 96), &v9->second);
    std::unordered_map<unsigned int,std::shared_ptr<BaseWatcher>>::erase(
      &this->watcher_map_,
      *(std::unordered_map<unsigned int,std::shared_ptr<BaseWatcher>>::iterator *)(v2 + 64));
    if ( std::operator==<BaseWatcher>(0LL, (const std::shared_ptr<BaseWatcher> *)(v2 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/watcher/player_watcher_comp.cpp",
        "removeWatcher",
        701);
      v10 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v23,
              (const char (*)[33])"watcher_ptr is null, watcher_id:");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v11, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      operator<<(v12, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v23);
      v8 = 0;
    }
    else
    {
      v13 = std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      watcher_trigger_type = BaseWatcher::getWatcherTriggerType(v13);
      __k = watcher_trigger_type;
      trigger_watcher_id_set = std::unordered_map<unsigned int,std::set<unsigned int>>::operator[](
                                 &this->trigger_watcher_map_,
                                 &__k);
      if ( !std::set<unsigned int>::erase(trigger_watcher_id_set, (const std::set<unsigned int>::key_type *)(v2 + 48)) )
      {
        common::milog::MiLogStream::create(
          &v23,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/watcher/player_watcher_comp.cpp",
          "removeWatcher",
          708);
        v14 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                &v23,
                (const char (*)[51])"watcher_id not in trigger_watcher_id_set, watcher:");
        v15 = std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        v16 = common::milog::MiLogStream::operator<<<BaseWatcher,(BaseWatcher*)0>(v14, v15);
        v17 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v16, (const char (*)[9])" player:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        operator<<(v17, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v23);
      }
      v8 = 0;
    }
    std::shared_ptr<BaseWatcher>::~shared_ptr((std::shared_ptr<BaseWatcher> *const)(v2 + 96));
  }
  result = v8;
  if ( v24 == (char *)v2 )
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

// Line 715: range 000000001438FA18-0000000014390441
__int64 __fastcall PlayerWatcherComp::checkGlobalWatcherPredicateConfig(
        const PlayerWatcherComp *const this,
        uint32_t watcher_id)
{
  unsigned int v2; // r14d
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  data::WatcherPredicateType predicate_type; // eax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rbx
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v12; // rax
  uint32_t *v13; // rdx
  PlayerQuestComp *QuestComp; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v17; // rax
  uint32_t *v18; // rdx
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v19; // rax
  uint32_t *v20; // rdx
  int v21; // r15d
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  uint32_t AvatarId; // eax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v26; // rax
  uint32_t *v27; // rdx
  PlayerGCGComp *GCGComp; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  __int64 result; // rax
  unsigned int val; // [rsp+24h] [rbp-ECh] BYREF
  uint32_t level; // [rsp+28h] [rbp-E8h]
  uint32_t avatar_filter_type; // [rsp+2Ch] [rbp-E4h]
  uint32_t avatar_filter_param; // [rsp+30h] [rbp-E0h]
  uint32_t quest_id; // [rsp+34h] [rbp-DCh]
  std::vector<data::WatcherPredicateConfig>::const_iterator __for_begin; // [rsp+38h] [rbp-D8h] BYREF
  std::vector<data::WatcherPredicateConfig>::const_iterator __for_end; // [rsp+40h] [rbp-D0h] BYREF
  const data::GlobalWatcherConfig *global_watcher_config_ptr; // [rsp+48h] [rbp-C8h]
  const std::vector<data::WatcherPredicateConfig> *__for_range; // [rsp+50h] [rbp-C0h]
  const WatcherPredicate *predicate; // [rsp+58h] [rbp-B8h]
  common::milog::MiLogStream v43; // [rsp+60h] [rbp-B0h] BYREF
  char v44[144]; // [rsp+80h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v44;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 14 watcher_id:714 64 16 14 avatar_ptr:750";
  *(_QWORD *)(v3 + 16) = PlayerWatcherComp::checkGlobalWatcherPredicateConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = watcher_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 64));
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  global_watcher_config_ptr = data::WatcherExcelConfigMgrBase::findGlobalWatcherConfig(
                                &v6->design_config.txt_config_mgr.watcher_config_mgr,
                                *(_DWORD *)(v3 + 48));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 64));
  if ( !global_watcher_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v43,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/watcher/player_watcher_comp.cpp",
      "checkGlobalWatcherPredicateConfig",
      719);
    v7 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
           &v43,
           (const char (*)[38])"watcher config not found. watcher_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v43);
    v2 = 0;
    goto LABEL_55;
  }
  __for_range = &global_watcher_config_ptr->predicate_configs;
  __for_begin._M_current = std::vector<data::WatcherPredicateConfig>::begin(&global_watcher_config_ptr->predicate_configs)._M_current;
  __for_end._M_current = std::vector<data::WatcherPredicateConfig>::end(&global_watcher_config_ptr->predicate_configs)._M_current;
  while ( __gnu_cxx::operator!=<data::WatcherPredicateConfig const*,std::vector<data::WatcherPredicateConfig>>(
            &__for_begin,
            &__for_end) )
  {
    predicate = __gnu_cxx::__normal_iterator<data::WatcherPredicateConfig const*,std::vector<data::WatcherPredicateConfig>>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)&predicate->predicate_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&predicate->predicate_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&predicate->predicate_type);
    }
    predicate_type = predicate->predicate_type;
    if ( predicate_type == PREDICATE_GCG_LEVEL )
    {
      if ( std::vector<unsigned int>::size(&predicate->param_list) != 1 )
      {
        common::milog::MiLogStream::create(
          &v43,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/watcher/player_watcher_comp.cpp",
          "checkGlobalWatcherPredicateConfig",
          765);
        v24 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                &v43,
                (const char (*)[27])"invalid param, watcher_id:");
        v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v24,
                (const unsigned int *)(v3 + 48));
        v11 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v25, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        goto LABEL_45;
      }
      v26 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                  &predicate->param_list,
                                                                                                  0LL);
      v27 = v26;
      if ( *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v26 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v26);
      }
      level = *v27;
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      GCGComp = Player::getGCGComp(this->player_);
      if ( level > PlayerGCGComp::getLevel(GCGComp) )
      {
        v2 = 0;
        goto LABEL_55;
      }
    }
    else
    {
      if ( predicate_type > PREDICATE_GCG_LEVEL )
        goto LABEL_52;
      if ( predicate_type == PREDICATE_QUEST_FINISH )
      {
        if ( std::vector<unsigned int>::size(&predicate->param_list) != 1 )
        {
          common::milog::MiLogStream::create(
            &v43,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/watcher/player_watcher_comp.cpp",
            "checkGlobalWatcherPredicateConfig",
            730);
          v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                 &v43,
                 (const char (*)[27])"invalid param, watcher_id:");
          v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v9,
                  (const unsigned int *)(v3 + 48));
          v11 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v10, (const char (*)[6])" uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          goto LABEL_45;
        }
        v12 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                    &predicate->param_list,
                                                                                                    0LL);
        v13 = v12;
        if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v12);
        }
        quest_id = *v13;
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        QuestComp = Player::getQuestComp(this->player_);
        if ( PlayerQuestComp::getQuestState(QuestComp, quest_id) != QUEST_STATE_FINISHED )
        {
          v2 = 0;
          goto LABEL_55;
        }
      }
      else
      {
        if ( predicate_type != PREDICATE_CURRENT_AVATAR )
        {
LABEL_52:
          common::milog::MiLogStream::create(
            &v43,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/watcher/player_watcher_comp.cpp",
            "checkGlobalWatcherPredicateConfig",
            776);
          v29 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                  &v43,
                  (const char (*)[24])"unknown predicate_type:");
          v30 = common::milog::MiLogStream::operator<<<data::WatcherPredicateType,(data::WatcherPredicateType*)0>(
                  v29,
                  &predicate->predicate_type);
          v31 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v30, (const char (*)[13])" watcher_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream(&v43);
          v2 = 0;
          goto LABEL_55;
        }
        if ( std::vector<unsigned int>::size(&predicate->param_list) != 2 )
        {
          common::milog::MiLogStream::create(
            &v43,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/watcher/player_watcher_comp.cpp",
            "checkGlobalWatcherPredicateConfig",
            745);
          v15 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                  &v43,
                  (const char (*)[27])"invalid param, watcher_id:");
          v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v15,
                  (const unsigned int *)(v3 + 48));
          v11 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v16, (const char (*)[6])" uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
LABEL_45:
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
          common::milog::MiLogStream::~MiLogStream(&v43);
          v2 = 0;
          goto LABEL_55;
        }
        v17 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                    &predicate->param_list,
                                                                                                    0LL);
        v18 = v17;
        if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v17);
        }
        avatar_filter_type = *v18;
        v19 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                    &predicate->param_list,
                                                                                                    1uLL);
        v20 = v19;
        if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v19);
        }
        avatar_filter_param = *v20;
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        Player::getAvatarComp(this->player_);
        PlayerAvatarComp::getCurAvatar((const PlayerAvatarComp *const)(v3 + 64));
        if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v3 + 64)) )
        {
          v2 = 0;
          v21 = 0;
        }
        else
        {
          v22 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          AvatarId = Avatar::getAvatarId(v22);
          if ( avatar_filter_param == PlayerWatcherComp::getAvatarFilterParam(this, AvatarId, avatar_filter_type) )
          {
            v21 = 1;
          }
          else
          {
            v2 = 0;
            v21 = 0;
          }
        }
        std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 64));
        if ( !v21 )
          goto LABEL_55;
      }
    }
    __gnu_cxx::__normal_iterator<data::WatcherPredicateConfig const*,std::vector<data::WatcherPredicateConfig>>::operator++(&__for_begin);
  }
  v2 = 1;
LABEL_55:
  result = v2;
  if ( v44 == (char *)v3 )
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

// Line 785: range 0000000014390442-0000000014390B1D
void __fastcall PlayerWatcherComp::finishGlobalWatcher(PlayerWatcherComp *const this, uint32_t watcher_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rcx
  unsigned int *v8; // rax
  uint32_t *v9; // rdx
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false>::pointer v10; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v11; // rax
  _DWORD *v12; // rdx
  PlayerActivityComp *ActivityComp; // rax
  common::milog::MiLogStream *v14; // rax
  std::allocator<unsigned int> __a; // [rsp+2Bh] [rbp-135h] BYREF
  uint32_t push_tips_id; // [rsp+2Ch] [rbp-134h]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+30h] [rbp-130h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+38h] [rbp-128h] BYREF
  const std::unordered_map<unsigned int,std::vector<unsigned int>> *watcher_push_tips_map; // [rsp+40h] [rbp-120h]
  const std::vector<unsigned int> *__for_range; // [rsp+48h] [rbp-118h]
  const std::unordered_map<unsigned int,std::vector<unsigned int>> *watcher_activity_push_tips_map; // [rsp+50h] [rbp-110h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+58h] [rbp-108h]
  std::shared_ptr<Config> v23; // [rsp+60h] [rbp-100h] BYREF
  std::vector<unsigned int> watcher_vec; // [rsp+70h] [rbp-F0h] BYREF
  common::milog::MiLogStream v25; // [rsp+90h] [rbp-D0h] BYREF
  char v26[176]; // [rsp+B0h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 4 25 activity_push_tips_id:815 48 4 14 watcher_id:784 64 8 18 push_tips_iter:800 96 8 27 ac"
                        "tivity_push_tips_iter:812";
  *(_QWORD *)(v2 + 16) = PlayerWatcherComp::finishGlobalWatcher;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = watcher_id;
  if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
         &this->finished_global_watcher_set_,
         (const unsigned int *)(v2 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/watcher/player_watcher_comp.cpp",
      "finishGlobalWatcher",
      788);
    v5 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
           &v25,
           (const char (*)[45])"global watcher already finished, watcher_id:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v6, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v7, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v25);
  }
  else
  {
    PlayerWatcherComp::internalDisableGlobalWatcher(this, *(_DWORD *)(v2 + 48));
    std::unordered_map<unsigned int,unsigned int>::erase(
      &this->global_watcher_progress_map_,
      (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
    std::unordered_set<unsigned int>::insert(
      &this->finished_global_watcher_set_,
      (const std::unordered_set<unsigned int>::value_type *)(v2 + 48));
    *(_DWORD *)(v2 + 32) = *(_DWORD *)(v2 + 48);
    std::allocator<unsigned int>::allocator(&__a);
    std::vector<unsigned int>::vector(
      &watcher_vec,
      (std::initializer_list<unsigned int>)__PAIR128__(1LL, v2 + 32),
      &__a);
    PlayerWatcherComp::notifyWatcherChange(this, &watcher_vec);
    std::vector<unsigned int>::~vector(&watcher_vec);
    std::allocator<unsigned int>::~allocator(&__a);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v23);
    watcher_push_tips_map = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v23)->design_config.txt_config_mgr.watcher_config_mgr.watcher_push_tips_map;
    std::shared_ptr<Config>::~shared_ptr(&v23);
    *(std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::vector<unsigned int>>::find(
                                                                                                 watcher_push_tips_map,
                                                                                                 (const std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *)(v2 + 48));
    __for_end._M_current = (const unsigned int *)std::unordered_map<unsigned int,std::vector<unsigned int>>::end(watcher_push_tips_map)._M_cur;
    if ( std::__detail::operator!=<std::pair<unsigned int const,std::vector<unsigned int>>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)&__for_end) )
    {
      __for_range = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *const)(v2 + 64))->second;
      __for_begin._M_current = std::vector<unsigned int>::begin(__for_range)._M_current;
      __for_end._M_current = std::vector<unsigned int>::end(__for_range)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
      {
        v8 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
        v9 = v8;
        if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v8);
        }
        push_tips_id = *v9;
        PlayerWatcherComp::internalAddPushTips(this, push_tips_id);
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
      }
      v10 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *const)(v2 + 64));
      PlayerWatcherComp::notifyPushTipsChange(this, &v10->second);
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v23);
    watcher_activity_push_tips_map = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v23)->design_config.txt_config_mgr.new_activity_config_mgr.watcher_activity_push_tips_map;
    std::shared_ptr<Config>::~shared_ptr(&v23);
    *(std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,std::vector<unsigned int>>::find(
                                                                                                 watcher_activity_push_tips_map,
                                                                                                 (const std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *)(v2 + 48));
    __for_end._M_current = (const unsigned int *)std::unordered_map<unsigned int,std::vector<unsigned int>>::end(watcher_activity_push_tips_map)._M_cur;
    if ( std::__detail::operator!=<std::pair<unsigned int const,std::vector<unsigned int>>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v2 + 96),
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)&__for_end) )
    {
      __for_range_0 = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *const)(v2 + 96))->second;
      __for_begin._M_current = std::vector<unsigned int>::begin(__for_range_0)._M_current;
      __for_end._M_current = std::vector<unsigned int>::end(__for_range_0)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
      {
        v11 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
        v12 = v11;
        if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v11);
        }
        *(_DWORD *)(v2 + 32) = *v12;
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        ActivityComp = Player::getActivityComp(this->player_);
        if ( PlayerActivityComp::tryRecordActivityPushTips(ActivityComp, *(_DWORD *)(v2 + 32)) )
        {
          common::milog::MiLogStream::create(
            &v25,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/watcher/player_watcher_comp.cpp",
            "finishGlobalWatcher",
            819);
          v14 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
                  &v25,
                  (const char (*)[58])"tryRecordActivityPushTips failed, activity_push_tips_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v2 + 32));
          common::milog::MiLogStream::~MiLogStream(&v25);
        }
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
      }
    }
  }
  if ( v26 == (char *)v2 )
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

// Line 828: range 0000000014390B1E-0000000014390C86
void __fastcall PlayerWatcherComp::tryEnableGlobalWatcher(
        PlayerWatcherComp *const this,
        uint32_t watcher_id,
        std::vector<unsigned int> *watcher_vec_ptr)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  char v9[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 14 watcher_id:827";
  *(_QWORD *)(v3 + 16) = PlayerWatcherComp::tryEnableGlobalWatcher;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = watcher_id;
  if ( !common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
          &this->finished_global_watcher_set_,
          (const unsigned int *)(v3 + 32))
    && !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::shared_ptr<BaseWatcher>>,unsigned int>(
          &this->watcher_map_,
          (const unsigned int *)(v3 + 32))
    && PlayerWatcherComp::isGlobalWatcher(this, *(_DWORD *)(v3 + 32))
    && !PlayerWatcherComp::internalEnableGlobalWatcher(this, *(_DWORD *)(v3 + 32))
    && watcher_vec_ptr )
  {
    std::vector<unsigned int>::push_back(watcher_vec_ptr, (const std::vector<unsigned int>::value_type *)(v3 + 32));
  }
  if ( v9 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 840: range 0000000014390C88-0000000014390DF3
void __fastcall PlayerWatcherComp::tryDisableGlobalWatcher(
        PlayerWatcherComp *const this,
        uint32_t watcher_id,
        std::vector<unsigned int> *watcher_vec_ptr)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  char v9[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 14 watcher_id:839";
  *(_QWORD *)(v3 + 16) = PlayerWatcherComp::tryDisableGlobalWatcher;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = watcher_id;
  if ( !common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
          &this->finished_global_watcher_set_,
          (const unsigned int *)(v3 + 32))
    && common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::shared_ptr<BaseWatcher>>,unsigned int>(
         &this->watcher_map_,
         (const unsigned int *)(v3 + 32))
    && PlayerWatcherComp::isGlobalWatcher(this, *(_DWORD *)(v3 + 32))
    && !PlayerWatcherComp::internalDisableGlobalWatcher(this, *(_DWORD *)(v3 + 32))
    && watcher_vec_ptr )
  {
    std::vector<unsigned int>::push_back(watcher_vec_ptr, (const std::vector<unsigned int>::value_type *)(v3 + 32));
  }
  if ( v9 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 853: range 0000000014390DF4-000000001439139E
__int64 __fastcall PlayerWatcherComp::internalEnableGlobalWatcher(PlayerWatcherComp *const this, uint32_t watcher_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  unsigned int v7; // r14d
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rbx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  __int64 result; // rax
  unsigned int val; // [rsp+10h] [rbp-C0h] BYREF
  uint32_t last_progress; // [rsp+14h] [rbp-BCh]
  const data::WatcherConfig *config_ptr; // [rsp+18h] [rbp-B8h]
  common::milog::MiLogStream v20; // [rsp+20h] [rbp-B0h] BYREF
  char v21[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 14 watcher_id:852 64 16 15 watcher_ptr:873";
  *(_QWORD *)(v2 + 16) = PlayerWatcherComp::internalEnableGlobalWatcher;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = watcher_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 64));
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  config_ptr = WatcherExcelConfigMgr::findWatcherConfig(
                 &v5->design_config.txt_config_mgr.watcher_config_mgr,
                 *(_DWORD *)(v2 + 48));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 64));
  if ( !config_ptr )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/watcher/player_watcher_comp.cpp",
      "internalEnableGlobalWatcher",
      857);
    v6 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
           &v20,
           (const char (*)[38])"watcher config not found. watcher_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v20);
    v7 = 5;
    goto LABEL_20;
  }
  if ( !PlayerWatcherComp::isGlobalWatcher(this, *(_DWORD *)(v2 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/watcher/player_watcher_comp.cpp",
      "internalEnableGlobalWatcher",
      862);
    v8 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(&v20, (const char (*)[32])off_25326DE0);
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
    v10 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v9, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
LABEL_9:
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
    common::milog::MiLogStream::~MiLogStream(&v20);
    v7 = -1;
    goto LABEL_20;
  }
  if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
         &this->finished_global_watcher_set_,
         (const unsigned int *)(v2 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/watcher/player_watcher_comp.cpp",
      "internalEnableGlobalWatcher",
      868);
    v11 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
            &v20,
            (const char (*)[30])"already finished, watcher_id:");
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 48));
    v10 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v12, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    goto LABEL_9;
  }
  last_progress = common::tools::MiscUtils::findMapWithDefaultValue<std::unordered_map<unsigned int,unsigned int>>(
                    &this->global_watcher_progress_map_,
                    (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48),
                    0);
  PlayerWatcherComp::addWatcher((PlayerWatcherComp *const)(v2 + 64), (const WatcherConfig *)this, (uint32_t)config_ptr);
  if ( std::operator==<BaseWatcher>(0LL, (const std::shared_ptr<BaseWatcher> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/watcher/player_watcher_comp.cpp",
      "internalEnableGlobalWatcher",
      876);
    v13 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
            &v20,
            (const char (*)[32])"add_watcher failed, watcher_id:");
    v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 48));
    v15 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v14, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
    common::milog::MiLogStream::~MiLogStream(&v20);
    v7 = -1;
  }
  else
  {
    v7 = 0;
  }
  std::shared_ptr<BaseWatcher>::~shared_ptr((std::shared_ptr<BaseWatcher> *const)(v2 + 64));
LABEL_20:
  result = v7;
  if ( v21 == (char *)v2 )
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

// Line 883: range 00000000143913A0-00000000143918C8
__int64 __fastcall PlayerWatcherComp::internalDisableGlobalWatcher(PlayerWatcherComp *const this, uint32_t watcher_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r12
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r12
  unsigned int val; // [rsp+14h] [rbp-ACh] BYREF
  const data::WatcherConfig *config_ptr; // [rsp+18h] [rbp-A8h]
  std::shared_ptr<Config> v19; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v20; // [rsp+30h] [rbp-90h] BYREF
  char v21[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 14 watcher_id:882";
  *(_QWORD *)(v2 + 16) = PlayerWatcherComp::internalDisableGlobalWatcher;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = watcher_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v19);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19);
  config_ptr = WatcherExcelConfigMgr::findWatcherConfig(
                 &v5->design_config.txt_config_mgr.watcher_config_mgr,
                 *(_DWORD *)(v2 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v19);
  if ( config_ptr )
  {
    if ( !PlayerWatcherComp::isGlobalWatcher(this, *(_DWORD *)(v2 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/watcher/player_watcher_comp.cpp",
        "internalDisableGlobalWatcher",
        893);
      v8 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(&v20, (const char (*)[32])off_25326DE0);
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 32));
      v10 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v9, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
      common::milog::MiLogStream::~MiLogStream(&v20);
      result = 0xFFFFFFFFLL;
    }
    else
    {
      if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
             &this->finished_global_watcher_set_,
             (const unsigned int *)(v2 + 32)) )
      {
        common::milog::MiLogStream::create(
          &v20,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/watcher/player_watcher_comp.cpp",
          "internalDisableGlobalWatcher",
          899);
        v11 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                &v20,
                (const char (*)[30])"already finished, watcher_id:");
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v11,
                (const unsigned int *)(v2 + 32));
        v13 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v12, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
        common::milog::MiLogStream::~MiLogStream(&v20);
      }
      if ( PlayerWatcherComp::delWatcher(this, *(_DWORD *)(v2 + 32)) )
      {
        common::milog::MiLogStream::create(
          &v20,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/watcher/player_watcher_comp.cpp",
          "internalDisableGlobalWatcher",
          904);
        v14 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                &v20,
                (const char (*)[31])"delWatcher failed, watcher_id:");
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v14,
                (const unsigned int *)(v2 + 32));
        v16 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v15, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &val);
        common::milog::MiLogStream::~MiLogStream(&v20);
        result = 0xFFFFFFFFLL;
      }
      else
      {
        result = 0LL;
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/watcher/player_watcher_comp.cpp",
      "internalDisableGlobalWatcher",
      887);
    v6 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
           &v20,
           (const char (*)[38])"watcher config not found. watcher_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v20);
    result = 5LL;
  }
  if ( v21 == (char *)v2 )
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

// Line 911: range 00000000143918CA-0000000014391A57
PlayerWatcherComp *__fastcall PlayerWatcherComp::findWatcher(PlayerWatcherComp *const this, __int64 watcher_id, int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseWatcher> >,false,false>::pointer v6; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<BaseWatcher> >,false> __y; // [rsp+28h] [rbp-88h] BYREF
  char v10[128]; // [rsp+30h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 14 watcher_id:910 64 8 8 iter:912";
  *(_QWORD *)(v3 + 16) = PlayerWatcherComp::findWatcher;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = a3;
  *(std::unordered_map<unsigned int,std::shared_ptr<BaseWatcher>>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::shared_ptr<BaseWatcher>>::find(
                                                                                            (std::unordered_map<unsigned int,std::shared_ptr<BaseWatcher>> *const)(watcher_id + 200),
                                                                                            (const std::unordered_map<unsigned int,std::shared_ptr<BaseWatcher>>::key_type *)(v3 + 48));
  __y._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseWatcher>>::end((std::unordered_map<unsigned int,std::shared_ptr<BaseWatcher>> *const)(watcher_id + 200))._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,std::shared_ptr<BaseWatcher>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<BaseWatcher> >,false> *)(v3 + 64),
         &__y) )
  {
    std::shared_ptr<BaseWatcher>::shared_ptr((std::shared_ptr<BaseWatcher> *const)this, 0LL);
  }
  else
  {
    v6 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseWatcher>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseWatcher> >,false,false> *const)(v3 + 64));
    std::shared_ptr<BaseWatcher>::shared_ptr((std::shared_ptr<BaseWatcher> *const)this, &v6->second);
  }
  if ( v10 == (char *)v3 )
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
  return this;
};

// Line 921: range 0000000014391A58-0000000014391ADD
bool __cdecl PlayerWatcherComp::isGlobalWatcher(PlayerWatcherComp *const this, uint32_t watcher_id)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  bool v3; // bl
  std::shared_ptr<Config> v5[2]; // [rsp+10h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v5);
  v2 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v5);
  v3 = data::WatcherExcelConfigMgrBase::findGlobalWatcherConfig(
         &v2->design_config.txt_config_mgr.watcher_config_mgr,
         watcher_id) != 0LL;
  std::shared_ptr<Config>::~shared_ptr(v5);
  return v3;
};

// Line 926: range 0000000014391ADE-0000000014391BDD
bool __fastcall PlayerWatcherComp::isGlobalWatcherFinished(PlayerWatcherComp *const this, uint32_t watcher_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
  std::__detail::_Node_iterator_base<unsigned int,false> __x; // [rsp+10h] [rbp-70h] BYREF
  std::__detail::_Node_iterator_base<unsigned int,false> __y; // [rsp+18h] [rbp-68h] BYREF
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 14 watcher_id:925";
  *(_QWORD *)(v2 + 16) = PlayerWatcherComp::isGlobalWatcherFinished;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = watcher_id;
  __y._M_cur = std::unordered_set<unsigned int>::end(&this->finished_global_watcher_set_)._M_cur;
  __x._M_cur = std::unordered_set<unsigned int>::find(
                 &this->finished_global_watcher_set_,
                 (const std::unordered_set<unsigned int>::key_type *)(v2 + 32))._M_cur;
  result = std::__detail::operator!=<unsigned int,false>(&__x, &__y);
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

// Line 932: range 0000000014391BDE-0000000014391EEB
__int64 __fastcall PlayerWatcherComp::internalAddPushTips(
        PlayerWatcherComp *const this,
        uint32_t push_tips_id,
        __int64 a3,
        __int64 a4,
        proto::PushTipsState *a5)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r13
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>,bool> v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r12
  unsigned int v12; // r14d
  PlayerEventComp *EventComp; // r14
  __int64 result; // rax
  proto::PushTipsState Uid; // [rsp+1Ch] [rbp-C4h] BYREF
  std::shared_ptr<BaseEvent> p_event_ptr; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v17; // [rsp+30h] [rbp-B0h] BYREF
  char v18[144]; // [rsp+50h] [rbp-90h] BYREF

  v5 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 4 16 push_tips_id:931 64 16 13 event_ptr:940";
  *(_QWORD *)(v5 + 16) = PlayerWatcherComp::internalAddPushTips;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -202178560;
  *(_DWORD *)(v5 + 48) = push_tips_id;
  Uid = PUSH_TIPS_STATE_START;
  v8 = std::unordered_map<unsigned int,unsigned int>::emplace<unsigned int &,proto::PushTipsState>(
         &this->push_tips_map_,
         (unsigned int *)(v5 + 48),
         &Uid,
         (unsigned int *)&this->push_tips_map_,
         a5);
  if ( !v8.second )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/watcher/player_watcher_comp.cpp",
      "internalAddPushTips",
      935);
    v9 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
           &v17,
           (const char (*)[24])"duplicate push_tips_id:");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v5 + 48));
    v11 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v10, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Uid = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)&Uid);
    common::milog::MiLogStream::~MiLogStream(&v17);
    v12 = -1;
  }
  else
  {
    common::tools::perf::make_shared<PushTipAddEvent,unsigned int &>(
      (unsigned int *)(v5 + 64),
      (unsigned int *)(v5 + 48));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    EventComp = Player::getEventComp(this->player_);
    std::shared_ptr<BaseEvent>::shared_ptr<PushTipAddEvent,void>(
      &p_event_ptr,
      (const std::shared_ptr<PushTipAddEvent> *)(v5 + 64));
    PlayerEventComp::notifyEvent(EventComp, &p_event_ptr);
    std::shared_ptr<BaseEvent>::~shared_ptr(&p_event_ptr);
    PlayerWatcherComp::logPushTipsChange(this, *(_DWORD *)(v5 + 48));
    v12 = 0;
    std::shared_ptr<PushTipAddEvent>::~shared_ptr((std::shared_ptr<PushTipAddEvent> *const)(v5 + 64));
  }
  result = v12;
  if ( v18 == (char *)v5 )
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

// Line 948: range 0000000014391EEC-000000001439217F
PlayerWatcherComp *__fastcall PlayerWatcherComp::addWatcher(
        PlayerWatcherComp *const this,
        __int64 watcher_id,
        uint32_t initial_progress)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  __int64 v7; // rsi
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rcx
  const data::WatcherConfig *config_ptr; // [rsp+28h] [rbp-98h]
  std::shared_ptr<Config> v15; // [rsp+30h] [rbp-90h] BYREF
  common::milog::MiLogStream v16; // [rsp+40h] [rbp-80h] BYREF
  char v17[96]; // [rsp+60h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 14 watcher_id:947";
  *(_QWORD *)(v3 + 16) = PlayerWatcherComp::addWatcher;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = initial_progress;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v15);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15);
  v7 = *(unsigned int *)(v3 + 32);
  config_ptr = WatcherExcelConfigMgr::findWatcherConfig(&v6->design_config.txt_config_mgr.watcher_config_mgr, v7);
  std::shared_ptr<Config>::~shared_ptr(&v15);
  if ( config_ptr )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this, v7);
    PlayerWatcherComp::addWatcher(this, (const WatcherConfig *)watcher_id, (uint32_t)config_ptr);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/watcher/player_watcher_comp.cpp",
      "addWatcher",
      952);
    v8 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
           &v16,
           (const char (*)[38])"watcher config not found. watcher_id:");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 32));
    v10 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v9, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)(watcher_id + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8(watcher_id + 24);
    operator<<(v10, *(const Player **)(watcher_id + 24));
    common::milog::MiLogStream::~MiLogStream(&v16);
    std::shared_ptr<BaseWatcher>::shared_ptr((std::shared_ptr<BaseWatcher> *const)this, 0LL);
  }
  if ( v17 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return this;
};

// Line 959: range 0000000014392180-0000000014392784
// local variable allocation has failed, the output may be wrong!
BaseWatcherPtr __cdecl PlayerWatcherComp::addWatcher(
        PlayerWatcherComp *const this,
        const WatcherConfig *config,
        uint32_t initial_progress)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  common::milog::MiLogStream *v6; // rax
  BaseWatcherPtr result; // rax
  common::milog::MiLogStream *v8; // rax
  bool v9; // r14
  common::milog::MiLogStream *v10; // r14
  std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rcx
  common::milog::MiLogStream *v14; // r14
  std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rcx
  std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // r14
  std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  uint32_t Progress; // eax
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rdx
  const WatcherConfig *configa; // [rsp+8h] [rbp-B8h]
  std::shared_ptr<BaseWatcher> p_watcher_ptr; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v26; // [rsp+30h] [rbp-90h] BYREF
  char v27[112]; // [rsp+50h] [rbp-70h] BYREF

  configa = *(const WatcherConfig **)&initial_progress;
  v3 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 15 watcher_ptr:965";
  *(_QWORD *)(v3 + 16) = PlayerWatcherComp::addWatcher;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::shared_ptr<BaseWatcher>>,unsigned int>(
         (std::unordered_map<unsigned int,std::shared_ptr<BaseWatcher>> *)&config[1].param,
         &configa->id) )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/watcher/player_watcher_comp.cpp",
      "addWatcher",
      962);
    v6 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(&v26, (const char (*)[42])off_253270C0);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &configa->id);
    common::milog::MiLogStream::~MiLogStream(&v26);
    std::shared_ptr<BaseWatcher>::shared_ptr((std::shared_ptr<BaseWatcher> *const)this, 0LL);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&config->trigger_config.trigger_type >> 3) + 0x7FFF8000) )
      __asan_report_load8(&config->trigger_config.trigger_type);
    WatcherFactory::createWatcher(
      (Player *)(v3 + 32),
      *(const data::WatcherConfig **)&config->trigger_config.trigger_type,
      (uint32_t)configa);
    if ( std::operator==<BaseWatcher>((const std::shared_ptr<BaseWatcher> *)(v3 + 32), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/watcher/player_watcher_comp.cpp",
        "addWatcher",
        968);
      v8 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
             &v26,
             (const char (*)[39])"create watcher_ptr failed, watcher_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &configa->id);
      common::milog::MiLogStream::~MiLogStream(&v26);
      std::shared_ptr<BaseWatcher>::shared_ptr((std::shared_ptr<BaseWatcher> *const)this, 0LL);
    }
    else
    {
      std::shared_ptr<BaseWatcher>::shared_ptr(&p_watcher_ptr, (const std::shared_ptr<BaseWatcher> *)(v3 + 32));
      v9 = PlayerWatcherComp::emplaceWatcher((PlayerWatcherComp *const)config, &p_watcher_ptr) != 0;
      std::shared_ptr<BaseWatcher>::~shared_ptr(&p_watcher_ptr);
      if ( v9 )
      {
        common::milog::MiLogStream::create(
          &v26,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/watcher/player_watcher_comp.cpp",
          "addWatcher",
          975);
        v10 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                &v26,
                (const char (*)[30])"emplaceWatcher fail, watcher:");
        v11 = std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        v12 = common::milog::MiLogStream::operator<<<BaseWatcher,(BaseWatcher*)0>(v10, v11);
        v13 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v12, (const char (*)[9])" player:");
        if ( *(_BYTE *)(((unsigned __int64)&config->trigger_config.trigger_type >> 3) + 0x7FFF8000) )
          __asan_report_load8(&config->trigger_config.trigger_type);
        operator<<(v13, *(const Player **)&config->trigger_config.trigger_type);
        common::milog::MiLogStream::~MiLogStream(&v26);
        std::shared_ptr<BaseWatcher>::shared_ptr((std::shared_ptr<BaseWatcher> *const)this, 0LL);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v26,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/watcher/player_watcher_comp.cpp",
          "addWatcher",
          978);
        v14 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v26, (const char (*)[13])off_25327180);
        v15 = std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        v16 = common::milog::MiLogStream::operator<<<BaseWatcher,(BaseWatcher*)0>(v14, v15);
        v17 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v16, (const char (*)[9])" player:");
        if ( *(_BYTE *)(((unsigned __int64)&config->trigger_config.trigger_type >> 3) + 0x7FFF8000) )
          __asan_report_load8(&config->trigger_config.trigger_type);
        operator<<(v17, *(const Player **)&config->trigger_config.trigger_type);
        common::milog::MiLogStream::~MiLogStream(&v26);
        v18 = std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        if ( BaseWatcher::isFinished(v18) )
        {
          v19 = std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
          v20 = std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
          Progress = BaseWatcher::getProgress(v20);
          BaseWatcher::fireWatcherProgressUpdateEvent(v19, Progress);
        }
        else
        {
          v22 = (unsigned __int64)std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
          if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
            v22 = __asan_report_load8(v22);
          v23 = *(_QWORD *)v22 + 32LL;
          if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
            v22 = __asan_report_load8(*(_QWORD *)v22 + 32LL);
          (*(void (__fastcall **)(unsigned __int64))v23)(v22);
        }
        std::shared_ptr<BaseWatcher>::shared_ptr(&p_watcher_ptr, (const std::shared_ptr<BaseWatcher> *)(v3 + 32));
        PlayerWatcherComp::processAbilityGroupOnAddWatcher((PlayerWatcherComp *const)config, &p_watcher_ptr);
        std::shared_ptr<BaseWatcher>::~shared_ptr(&p_watcher_ptr);
        std::shared_ptr<BaseWatcher>::shared_ptr(
          (std::shared_ptr<BaseWatcher> *const)this,
          (std::shared_ptr<BaseWatcher> *)(v3 + 32));
      }
    }
    std::shared_ptr<BaseWatcher>::~shared_ptr((std::shared_ptr<BaseWatcher> *const)(v3 + 32));
  }
  if ( v27 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<BaseWatcher,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 993: range 0000000014392786-00000000143928BC
// local variable allocation has failed, the output may be wrong!
BaseWatcherPtr __cdecl PlayerWatcherComp::addWatcherAndNotify(
        PlayerWatcherComp *const this,
        uint32_t watcher_id,
        uint32_t initial_progress)
{
  BaseWatcherPtr result; // rax
  std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  std::allocator<unsigned int> __a; // [rsp+2Bh] [rbp-45h] BYREF
  std::initializer_list<unsigned int> __l; // [rsp+2Ch] [rbp-44h] BYREF

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, *(_QWORD *)&watcher_id);
  PlayerWatcherComp::addWatcher(this, *(__int64 *)&watcher_id, initial_progress);
  if ( !std::operator==<BaseWatcher>(0LL, (const std::shared_ptr<BaseWatcher> *)this) )
  {
    v4 = std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false> *const)this);
    LODWORD(__l._M_array) = BaseWatcher::getWatcherId(v4);
    std::allocator<unsigned int>::allocator(&__a);
    std::vector<unsigned int>::vector(
      (std::vector<unsigned int> *const)((char *)&__l._M_array + 4),
      (std::initializer_list<unsigned int>)__PAIR128__(1LL, &__l),
      &__a);
    PlayerWatcherComp::notifyWatcherChange(
      *(PlayerWatcherComp *const *)&watcher_id,
      (const std::vector<unsigned int> *)((char *)&__l._M_array + 4));
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)((char *)&__l._M_array + 4));
    std::allocator<unsigned int>::~allocator(&__a);
  }
  result._M_ptr = (std::__shared_ptr<BaseWatcher,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 1005: range 00000000143928BE-000000001439301B
__int64 __fastcall PlayerWatcherComp::addWatcherByOfflineMsg(
        PlayerWatcherComp *const this,
        uint32_t watcher_id,
        uint32_t progress)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rcx
  unsigned int v9; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rcx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rcx
  bool v17; // r14
  common::milog::MiLogStream *v18; // r14
  std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // r14
  std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rcx
  BaseWatcher *v25; // rax
  __int64 result; // rax
  const data::WatcherConfig *config_ptr; // [rsp+18h] [rbp-C8h]
  std::shared_ptr<Config> v29; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v30; // [rsp+30h] [rbp-B0h] BYREF
  char v31[144]; // [rsp+50h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 15 watcher_id:1004 64 16 16 watcher_ptr:1017";
  *(_QWORD *)(v3 + 16) = PlayerWatcherComp::addWatcherByOfflineMsg;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = watcher_id;
  if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::shared_ptr<BaseWatcher>>,unsigned int>(
         &this->watcher_map_,
         (const unsigned int *)(v3 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/watcher/player_watcher_comp.cpp",
      "addWatcherByOfflineMsg",
      1008);
    v6 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(&v30, (const char (*)[42])off_253270C0);
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
    v8 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v7, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v8, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v30);
    v9 = 0;
    goto LABEL_26;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v29);
  v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v29);
  config_ptr = WatcherExcelConfigMgr::findWatcherConfig(
                 &v10->design_config.txt_config_mgr.watcher_config_mgr,
                 *(_DWORD *)(v3 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v29);
  if ( config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    WatcherFactory::createWatcher((Player *)(v3 + 64), (const data::WatcherConfig *)this->player_, (uint32_t)config_ptr);
    if ( std::operator==<BaseWatcher>((const std::shared_ptr<BaseWatcher> *)(v3 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v30,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/watcher/player_watcher_comp.cpp",
        "addWatcherByOfflineMsg",
        1020);
      v14 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
              &v30,
              (const char (*)[39])"create watcher_ptr failed, watcher_id:");
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 48));
      v16 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v15, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
    }
    else
    {
      std::shared_ptr<BaseWatcher>::shared_ptr(
        (std::shared_ptr<BaseWatcher> *const)&v29,
        (const std::shared_ptr<BaseWatcher> *)(v3 + 64));
      v17 = PlayerWatcherComp::emplaceWatcher(this, (BaseWatcherPtr *)&v29) != 0;
      std::shared_ptr<BaseWatcher>::~shared_ptr((std::shared_ptr<BaseWatcher> *const)&v29);
      if ( !v17 )
      {
        common::milog::MiLogStream::create(
          &v30,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/watcher/player_watcher_comp.cpp",
          "addWatcherByOfflineMsg",
          1029);
        v21 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v30, (const char (*)[13])off_25327180);
        v22 = std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        v23 = common::milog::MiLogStream::operator<<<BaseWatcher,(BaseWatcher*)0>(v21, v22);
        v24 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v23, (const char (*)[9])" player:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        operator<<(v24, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v30);
        v25 = std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        BaseWatcher::tryCorrectProgress(v25, progress);
        std::shared_ptr<BaseWatcher>::shared_ptr(
          (std::shared_ptr<BaseWatcher> *const)&v29,
          (const std::shared_ptr<BaseWatcher> *)(v3 + 64));
        PlayerWatcherComp::processAbilityGroupOnAddWatcher(this, (BaseWatcherPtr *)&v29);
        std::shared_ptr<BaseWatcher>::~shared_ptr((std::shared_ptr<BaseWatcher> *const)&v29);
        v9 = 1;
        goto LABEL_25;
      }
      common::milog::MiLogStream::create(
        &v30,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/watcher/player_watcher_comp.cpp",
        "addWatcherByOfflineMsg",
        1026);
      v18 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
              &v30,
              (const char (*)[30])"emplaceWatcher fail, watcher:");
      v19 = std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      v20 = common::milog::MiLogStream::operator<<<BaseWatcher,(BaseWatcher*)0>(v18, v19);
      v16 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v20, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
    }
    operator<<(v16, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v30);
    v9 = 0;
LABEL_25:
    std::shared_ptr<BaseWatcher>::~shared_ptr((std::shared_ptr<BaseWatcher> *const)(v3 + 64));
    goto LABEL_26;
  }
  common::milog::MiLogStream::create(
    &v30,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/watcher/player_watcher_comp.cpp",
    "addWatcherByOfflineMsg",
    1014);
  v11 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
          &v30,
          (const char (*)[38])"watcher config not found. watcher_id:");
  v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 48));
  v13 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v12, (const char (*)[9])" player:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  operator<<(v13, this->player_);
  common::milog::MiLogStream::~MiLogStream(&v30);
  v9 = 0;
LABEL_26:
  result = v9;
  if ( v31 == (char *)v3 )
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

// Line 1036: range 000000001439301C-0000000014393335
__int64 __fastcall PlayerWatcherComp::delWatcher(PlayerWatcherComp *const this, uint32_t watcher_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  unsigned int v6; // r14d
  common::milog::MiLogStream *v7; // r14
  std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rcx
  __int64 result; // rax
  std::shared_ptr<BaseWatcher> p_watcher_ptr; // [rsp+10h] [rbp-C0h] BYREF
  common::milog::MiLogStream v13; // [rsp+20h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 15 watcher_id:1035 64 16 16 watcher_ptr:1037";
  *(_QWORD *)(v2 + 16) = PlayerWatcherComp::delWatcher;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = watcher_id;
  PlayerWatcherComp::findWatcher((PlayerWatcherComp *const)(v2 + 64), (__int64)this, *(_DWORD *)(v2 + 48));
  if ( std::operator==<BaseWatcher>(0LL, (const std::shared_ptr<BaseWatcher> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/watcher/player_watcher_comp.cpp",
      "delWatcher",
      1040);
    v5 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(&v13, (const char (*)[42])off_253272C0);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v13);
    v6 = -1;
  }
  else
  {
    std::shared_ptr<BaseWatcher>::shared_ptr(&p_watcher_ptr, (const std::shared_ptr<BaseWatcher> *)(v2 + 64));
    PlayerWatcherComp::processAbilityGroupOnDelWatcher(this, &p_watcher_ptr);
    std::shared_ptr<BaseWatcher>::~shared_ptr(&p_watcher_ptr);
    PlayerWatcherComp::removeWatcher(this, *(_DWORD *)(v2 + 48));
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/watcher/player_watcher_comp.cpp",
      "delWatcher",
      1046);
    v7 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v13, (const char (*)[13])off_25327320);
    v8 = std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    v9 = common::milog::MiLogStream::operator<<<BaseWatcher,(BaseWatcher*)0>(v7, v8);
    v10 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v9, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v10, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v6 = 0;
  }
  std::shared_ptr<BaseWatcher>::~shared_ptr((std::shared_ptr<BaseWatcher> *const)(v2 + 64));
  result = v6;
  if ( v14 == (char *)v2 )
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

// Line 1051: range 0000000014393336-0000000014393417
int32_t __cdecl PlayerWatcherComp::delWatcherAndNotify(PlayerWatcherComp *const this, uint32_t watcher_id)
{
  std::allocator<unsigned int> __a; // [rsp+17h] [rbp-49h] BYREF
  std::initializer_list<unsigned int> __l; // [rsp+18h] [rbp-48h] BYREF

  HIDWORD(__l._M_array) = PlayerWatcherComp::delWatcher(this, watcher_id);
  if ( !HIDWORD(__l._M_array) )
  {
    LODWORD(__l._M_array) = watcher_id;
    std::allocator<unsigned int>::allocator(&__a);
    std::vector<unsigned int>::vector(
      (std::vector<unsigned int> *const)&__l._M_len,
      (std::initializer_list<unsigned int>)__PAIR128__(1LL, &__l),
      &__a);
    PlayerWatcherComp::notifyWatcherChange(this, (const std::vector<unsigned int> *)&__l._M_len);
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)&__l._M_len);
    std::allocator<unsigned int>::~allocator(&__a);
  }
  return HIDWORD(__l._M_array);
};

// Line 1063: range 0000000014393418-0000000014393691
std::pair<unsigned int,unsigned int> __fastcall PlayerWatcherComp::getWatcherProgress(
        PlayerWatcherComp *const this,
        uint32_t watcher_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  std::pair<unsigned int,unsigned int> v6; // r14
  std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::pair<unsigned int,unsigned int> result; // rax
  int __x; // [rsp+18h] [rbp-C8h] BYREF
  int __y; // [rsp+1Ch] [rbp-C4h] BYREF
  std::pair<int,int> __p; // [rsp+20h] [rbp-C0h] BYREF
  std::pair<unsigned int,unsigned int> v13; // [rsp+28h] [rbp-B8h] BYREF
  common::milog::MiLogStream v14; // [rsp+30h] [rbp-B0h] BYREF
  char v15[144]; // [rsp+50h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 15 watcher_id:1062 64 16 16 watcher_ptr:1064";
  *(_QWORD *)(v2 + 16) = PlayerWatcherComp::getWatcherProgress;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = watcher_id;
  PlayerWatcherComp::findWatcher((PlayerWatcherComp *const)(v2 + 64), (__int64)this, *(_DWORD *)(v2 + 48));
  if ( std::operator==<BaseWatcher>(0LL, (const std::shared_ptr<BaseWatcher> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/watcher/player_watcher_comp.cpp",
      "getWatcherProgress",
      1067);
    v5 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(&v14, (const char (*)[55])off_253273E0);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v14);
    __y = 0;
    __x = 0;
    __p = std::make_pair<int,int>(&__x, &__y);
    std::pair<unsigned int,unsigned int>::pair<int,int,true>(&v13, &__p);
    v6 = v13;
  }
  else
  {
    v7 = std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    __y = BaseWatcher::getTotalProgress(v7);
    v8 = std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    __x = BaseWatcher::getProgress(v8);
    v6 = std::make_pair<unsigned int,unsigned int>((unsigned int *)&__x, (unsigned int *)&__y);
  }
  std::shared_ptr<BaseWatcher>::~shared_ptr((std::shared_ptr<BaseWatcher> *const)(v2 + 64));
  result = v6;
  if ( v15 == (char *)v2 )
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

// Line 1074: range 0000000014393692-0000000014393846
const std::set<unsigned int> *__fastcall PlayerWatcherComp::getWatcherIdSetByTriggerType(
        PlayerWatcherComp *const this,
        uint32_t trigger_type)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::set<unsigned int> *result; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> __y; // [rsp+18h] [rbp-88h] BYREF
  char v7[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 17 trigger_type:1073 64 8 9 iter:1076";
  *(_QWORD *)(v2 + 16) = PlayerWatcherComp::getWatcherIdSetByTriggerType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = trigger_type;
  if ( !(_BYTE)`guard variable for'PlayerWatcherComp::getWatcherIdSetByTriggerType(unsigned int)::empty_set
    && __cxa_guard_acquire(&`guard variable for'PlayerWatcherComp::getWatcherIdSetByTriggerType(unsigned int)::empty_set) )
  {
    std::set<unsigned int>::set((std::set<unsigned int> *const)&PlayerWatcherComp::getWatcherIdSetByTriggerType(unsigned int)::empty_set);
    __cxa_guard_release(&`guard variable for'PlayerWatcherComp::getWatcherIdSetByTriggerType(unsigned int)::empty_set);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::set<unsigned int>::~set,
      (void *)&PlayerWatcherComp::getWatcherIdSetByTriggerType(unsigned int)::empty_set,
      &_dso_handle);
  }
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::set<unsigned int>>::find(
                                                                                      &this->trigger_watcher_map_,
                                                                                      (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v2 + 48));
  __y._M_cur = std::unordered_map<unsigned int,std::set<unsigned int>>::end(&this->trigger_watcher_map_)._M_cur;
  if ( std::__detail::operator!=<std::pair<unsigned int const,std::set<unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v2 + 64),
         &__y) )
  {
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v2 + 64))->second;
  }
  else
  {
    result = &PlayerWatcherComp::getWatcherIdSetByTriggerType(unsigned int)::empty_set;
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

// Line 1086: range 0000000014393848-0000000014393E7B
void __cdecl PlayerWatcherComp::initEventObservers(PlayerWatcherComp *const this)
{
  std::_Deque_iterator<std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> >,std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> >&,std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> >*>::_Elt_pointer *p_M_last; // r14
  __int64 v2; // rax
  _DWORD *v3; // r15
  PlayerEventComp *EventComp; // r12
  PlayerEventComp *v5; // r12
  PlayerEventComp *v6; // r12
  PlayerEventComp *v7; // r12
  const std::pair<const std::type_index,std::set<data::WatcherTriggerType> > *v8; // rax
  PlayerEventComp *v9; // r12
  std::unordered_map<std::type_index,std::set<data::WatcherTriggerType>>::const_iterator __for_begin; // [rsp+60h] [rbp-100h] BYREF
  std::unordered_map<std::type_index,std::set<data::WatcherTriggerType>>::const_iterator __for_end; // [rsp+68h] [rbp-F8h] BYREF
  const std::unordered_map<std::type_index,std::set<data::WatcherTriggerType>> *__for_range; // [rsp+70h] [rbp-F0h]
  const std::pair<const std::type_index,std::set<data::WatcherTriggerType> > *p; // [rsp+78h] [rbp-E8h]
  PlayerEventComp v14; // [rsp+80h] [rbp-E0h] BYREF

  p_M_last = &v14.event_center_.context_.pending_que_.c._M_impl._M_start._M_last;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      p_M_last = (std::_Deque_iterator<std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> >,std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> >&,std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> >*>::_Elt_pointer *)v2;
  }
  *p_M_last = (std::_Deque_iterator<std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> >,std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> >&,std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> >*>::_Elt_pointer)1102416563;
  p_M_last[1] = (std::_Deque_iterator<std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> >,std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> >&,std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> >*>::_Elt_pointer)"2 32 8 15 event_type:1094 64 16 13 this_wtr:1087";
  p_M_last[2] = (std::_Deque_iterator<std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> >,std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> >&,std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> >*>::_Elt_pointer)PlayerWatcherComp::initEventObservers;
  v3 = (_DWORD *)((unsigned __int64)p_M_last >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218959360;
  v3[536862722] = -202178560;
  toThisPtr<PlayerWatcherComp>((PlayerWatcherComp *)&v14.event_center_.context_.pending_que_.c._M_impl._M_start);
  std::weak_ptr<PlayerWatcherComp>::weak_ptr<PlayerWatcherComp,void>(
    (std::weak_ptr<PlayerWatcherComp> *const)p_M_last + 4,
    (const std::shared_ptr<PlayerWatcherComp> *)&v14.event_center_.context_.pending_que_.c._M_impl._M_start);
  std::shared_ptr<PlayerWatcherComp>::~shared_ptr((std::shared_ptr<PlayerWatcherComp> *const)&v14.event_center_.context_.pending_que_.c._M_impl._M_start);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  EventComp = Player::getEventComp(this->player_);
  std::weak_ptr<PlayerWatcherComp>::weak_ptr(
    (std::weak_ptr<PlayerWatcherComp> *const)&v14.event_center_.context_.pending_que_.c._M_impl._M_start,
    (const std::weak_ptr<PlayerWatcherComp> *)p_M_last + 4);
  PlayerEventComp::registerObserver<PlayerWatcherComp,ChangeAvatarEvent>(
    &v14,
    (std::weak_ptr<PlayerWatcherComp> *)EventComp,
    (void (*)(PlayerWatcherComp *, const ChangeAvatarEvent *))&v14.event_center_.context_.pending_que_.c._M_impl._M_start);
  std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v14);
  std::weak_ptr<PlayerWatcherComp>::~weak_ptr((std::weak_ptr<PlayerWatcherComp> *const)&v14.event_center_.context_.pending_que_.c._M_impl._M_start);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  v5 = Player::getEventComp(this->player_);
  std::weak_ptr<PlayerWatcherComp>::weak_ptr(
    (std::weak_ptr<PlayerWatcherComp> *const)&v14.event_center_.context_.pending_que_.c._M_impl._M_start,
    (const std::weak_ptr<PlayerWatcherComp> *)p_M_last + 4);
  PlayerEventComp::registerObserver<PlayerWatcherComp,FinishQuestEvent>(
    (PlayerEventComp *const)&v14._M_weak_this._M_refcount,
    (std::weak_ptr<PlayerWatcherComp> *)v5,
    (void (*)(PlayerWatcherComp *, const FinishQuestEvent *))&v14.event_center_.context_.pending_que_.c._M_impl._M_start);
  std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v14._M_weak_this._M_refcount);
  std::weak_ptr<PlayerWatcherComp>::~weak_ptr((std::weak_ptr<PlayerWatcherComp> *const)&v14.event_center_.context_.pending_que_.c._M_impl._M_start);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  v6 = Player::getEventComp(this->player_);
  std::weak_ptr<PlayerWatcherComp>::weak_ptr(
    (std::weak_ptr<PlayerWatcherComp> *const)&v14.event_center_.context_.pending_que_.c._M_impl._M_start,
    (const std::weak_ptr<PlayerWatcherComp> *)p_M_last + 4);
  PlayerEventComp::registerObserver<PlayerWatcherComp,GCGLevelUpEvent>(
    (PlayerEventComp *const)&v14.event_center_,
    (std::weak_ptr<PlayerWatcherComp> *)v6,
    (void (*)(PlayerWatcherComp *, const GCGLevelUpEvent *))&v14.event_center_.context_.pending_que_.c._M_impl._M_start);
  std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v14.event_center_);
  std::weak_ptr<PlayerWatcherComp>::~weak_ptr((std::weak_ptr<PlayerWatcherComp> *const)&v14.event_center_.context_.pending_que_.c._M_impl._M_start);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  v7 = Player::getEventComp(this->player_);
  std::weak_ptr<PlayerWatcherComp>::weak_ptr(
    (std::weak_ptr<PlayerWatcherComp> *const)&v14.event_center_.context_.pending_que_.c._M_impl._M_start,
    (const std::weak_ptr<PlayerWatcherComp> *)p_M_last + 4);
  PlayerEventComp::registerObserver<PlayerWatcherComp,WatcherProgressUpdateEvent>(
    (PlayerEventComp *const)&v14.event_center_.context_.pending_que_,
    (std::weak_ptr<PlayerWatcherComp> *)v7,
    (void (*)(PlayerWatcherComp *, const WatcherProgressUpdateEvent *))&v14.event_center_.context_.pending_que_.c._M_impl._M_start);
  std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v14.event_center_.context_.pending_que_);
  std::weak_ptr<PlayerWatcherComp>::~weak_ptr((std::weak_ptr<PlayerWatcherComp> *const)&v14.event_center_.context_.pending_que_.c._M_impl._M_start);
  __for_range = WatcherFactory::getEventTriggerMap();
  __for_begin._M_cur = std::unordered_map<std::type_index,std::set<data::WatcherTriggerType>>::begin(__for_range)._M_cur;
  __for_end._M_cur = std::unordered_map<std::type_index,std::set<data::WatcherTriggerType>>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<std::type_index const,std::set<data::WatcherTriggerType>>,false>(
            &__for_begin,
            &__for_end) )
  {
    v8 = std::__detail::_Node_const_iterator<std::pair<std::type_index const,std::set<data::WatcherTriggerType>>,false,false>::operator*(&__for_begin);
    p = v8;
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v8);
    p_M_last[4] = (std::_Deque_iterator<std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> >,std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> >&,std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> >*>::_Elt_pointer)p->first._M_target;
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    v9 = Player::getEventComp(this->player_);
    std::weak_ptr<PlayerWatcherComp>::weak_ptr(
      (std::weak_ptr<PlayerWatcherComp> *const)&v14.event_center_.context_.pending_que_,
      (const std::weak_ptr<PlayerWatcherComp> *)p_M_last + 4);
    PlayerEventComp::registerObserver<PlayerWatcherComp>(
      (PlayerEventComp *const)&v14.event_center_.context_.pending_que_.c._M_impl._M_start,
      (std::weak_ptr<PlayerWatcherComp> *)v9,
      (void (*)(PlayerWatcherComp *, const BaseEvent *))&v14.event_center_.context_.pending_que_,
      (InternalPlayerEventType)PlayerWatcherComp::onBaseEvent);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v14.event_center_.context_.pending_que_.c._M_impl._M_start);
    std::weak_ptr<PlayerWatcherComp>::~weak_ptr((std::weak_ptr<PlayerWatcherComp> *const)&v14.event_center_.context_.pending_que_);
    std::__detail::_Node_const_iterator<std::pair<std::type_index const,std::set<data::WatcherTriggerType>>,false,false>::operator++(&__for_begin);
  }
  std::weak_ptr<PlayerWatcherComp>::~weak_ptr((std::weak_ptr<PlayerWatcherComp> *const)p_M_last + 4);
  if ( &v14.event_center_.context_.pending_que_.c._M_impl._M_start._M_last == p_M_last )
  {
    *(_QWORD *)(((unsigned __int64)p_M_last >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)p_M_last >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *p_M_last = (std::_Deque_iterator<std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> >,std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> >&,std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> >*>::_Elt_pointer)1172321806;
    *(_QWORD *)(((unsigned __int64)p_M_last >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)p_M_last >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 1100: range 0000000014393E7C-000000001439447B
void __cdecl PlayerWatcherComp::onBaseEvent(PlayerWatcherComp *const this, const BaseEvent *event)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  InternalPlayerEventType v5; // rax
  data::WatcherTriggerType *v6; // rax
  data::WatcherTriggerType *v7; // rdx
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr M_node; // r14
  std::set<unsigned int>::iterator v9; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v10; // rax
  _DWORD *v11; // rdx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rcx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  std::allocator<unsigned int> __a; // [rsp+1Bh] [rbp-135h] BYREF
  data::WatcherTriggerType trigger_type; // [rsp+1Ch] [rbp-134h]
  std::set<data::WatcherTriggerType>::iterator __for_begin; // [rsp+20h] [rbp-130h] BYREF
  std::set<data::WatcherTriggerType>::iterator __for_end; // [rsp+28h] [rbp-128h] BYREF
  std::vector<unsigned int>::iterator __for_begin_0; // [rsp+30h] [rbp-120h] BYREF
  std::vector<unsigned int>::iterator __for_end_0; // [rsp+38h] [rbp-118h] BYREF
  const std::set<data::WatcherTriggerType> *trigger_type_set; // [rsp+40h] [rbp-110h]
  const std::set<data::WatcherTriggerType> *__for_range; // [rsp+48h] [rbp-108h]
  const std::set<unsigned int> *watcher_id_set; // [rsp+50h] [rbp-100h]
  std::vector<unsigned int> *__for_range_0; // [rsp+58h] [rbp-F8h]
  common::milog::MiLogStream v29; // [rsp+60h] [rbp-F0h] BYREF
  char v30[208]; // [rsp+80h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 15 watcher_id:1107 64 16 16 watcher_ptr:1109 96 24 19 watcher_id_vec:1106";
  *(_QWORD *)(v2 + 16) = PlayerWatcherComp::onBaseEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  v5._M_target = BaseEvent::getType(event)._M_target;
  trigger_type_set = WatcherFactory::getWatcherTriggerTypeSetByRef(v5);
  __for_range = trigger_type_set;
  __for_begin._M_node = std::set<data::WatcherTriggerType>::begin(trigger_type_set)._M_node;
  __for_end._M_node = std::set<data::WatcherTriggerType>::end(trigger_type_set)._M_node;
LABEL_5:
  if ( std::operator!=(&__for_begin, &__for_end) )
  {
    v6 = (data::WatcherTriggerType *)std::_Rb_tree_const_iterator<data::WatcherTriggerType>::operator*(&__for_begin);
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    trigger_type = *v7;
    *(_DWORD *)(v2 + 48) = trigger_type;
    watcher_id_set = std::unordered_map<unsigned int,std::set<unsigned int>>::operator[](
                       &this->trigger_watcher_map_,
                       (std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v2 + 48));
    std::allocator<unsigned int>::allocator(&__a);
    M_node = std::set<unsigned int>::end(watcher_id_set)._M_node;
    v9._M_node = std::set<unsigned int>::begin(watcher_id_set)._M_node;
    std::vector<unsigned int>::vector<std::_Rb_tree_const_iterator<unsigned int>,void>(
      (std::vector<unsigned int> *const)(v2 + 96),
      v9,
      (std::_Rb_tree_const_iterator<unsigned int>)M_node,
      &__a);
    std::allocator<unsigned int>::~allocator(&__a);
    __for_range_0 = (std::vector<unsigned int> *)(v2 + 96);
    __for_begin_0._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 96))._M_current;
    __for_end_0._M_current = std::vector<unsigned int>::end(__for_range_0)._M_current;
    while ( 1 )
    {
      if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin_0, &__for_end_0) )
      {
        std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 96));
        std::_Rb_tree_const_iterator<data::WatcherTriggerType>::operator++(&__for_begin);
        goto LABEL_5;
      }
      v10 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin_0);
      v11 = v10;
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v10);
      }
      *(_DWORD *)(v2 + 48) = *v11;
      PlayerWatcherComp::findWatcher((PlayerWatcherComp *const)(v2 + 64), (__int64)this, *(_DWORD *)(v2 + 48));
      if ( std::operator==<BaseWatcher>(0LL, (const std::shared_ptr<BaseWatcher> *)(v2 + 64)) )
        break;
      v15 = (unsigned __int64)std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
        v15 = __asan_report_load8(v15);
      v16 = *(_QWORD *)v15 + 40LL;
      if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
        v15 = __asan_report_load8(*(_QWORD *)v15 + 40LL);
      if ( (*(unsigned int (__fastcall **)(unsigned __int64, const BaseEvent *))v16)(v15, event) )
      {
        common::milog::MiLogStream::create(
          &v29,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/watcher/player_watcher_comp.cpp",
          "onBaseEvent",
          1117);
        v17 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                &v29,
                (const char (*)[36])"tryUpdateProgress fail, watcher_id:");
        v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v17,
                (const unsigned int *)(v2 + 48));
        v14 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v18, (const char (*)[9])" player:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        goto LABEL_23;
      }
LABEL_24:
      std::shared_ptr<BaseWatcher>::~shared_ptr((std::shared_ptr<BaseWatcher> *const)(v2 + 64));
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin_0);
    }
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/watcher/player_watcher_comp.cpp",
      "onBaseEvent",
      1112);
    v12 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
            &v29,
            (const char (*)[30])"findWatcher fail, watcher_id:");
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 48));
    v14 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v13, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
LABEL_23:
    operator<<(v14, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v29);
    goto LABEL_24;
  }
  if ( v30 == (char *)v2 )
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

// Line 1126: range 000000001439447C-0000000014394A4E
__int64 __fastcall PlayerWatcherComp::getAvatarFilterParam(
        const PlayerWatcherComp *const this,
        uint32_t avatar_id,
        uint32_t avatar_filter_type)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  uint32_t AvatarComp; // eax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v14; // rax
  unsigned int v15; // eax
  data::WeaponType weapon_type; // r14d
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdx
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  __int64 result; // rax
  unsigned int val; // [rsp+14h] [rbp-BCh] BYREF
  const data::AvatarExcelConfig *avatar_config_ptr; // [rsp+18h] [rbp-B8h]
  common::milog::MiLogStream v27; // [rsp+20h] [rbp-B0h] BYREF
  char v28[144]; // [rsp+40h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 14 avatar_id:1125 48 4 23 avatar_filter_type:1125 64 16 22 formal_avatar_ptr:1127";
  *(_QWORD *)(v3 + 16) = PlayerWatcherComp::getAvatarFilterParam;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 32) = avatar_id;
  *(_DWORD *)(v3 + 48) = avatar_filter_type;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  AvatarComp = (unsigned int)Player::getAvatarComp(this->player_);
  PlayerAvatarComp::findFormalAvatarByAvatarId((const PlayerAvatarComp *const)(v3 + 64), AvatarComp);
  if ( std::operator==<FormalAvatar>(0LL, (const std::shared_ptr<FormalAvatar> *)(v3 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/watcher/player_watcher_comp.cpp",
      "getAvatarFilterParam",
      1130);
    v7 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v27,
           (const char (*)[36])"formal_avatar not found. avatar_id:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 32));
    v9 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v8, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
LABEL_34:
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
    common::milog::MiLogStream::~MiLogStream(&v27);
    weapon_type = WEAPON_NONE;
    goto LABEL_35;
  }
  v10 = (unsigned __int64)std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
    v10 = __asan_report_load8(v10);
  v11 = *(_QWORD *)v10 + 312LL;
  if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
    v10 = __asan_report_load8(*(_QWORD *)v10 + 312LL);
  avatar_config_ptr = (const data::AvatarExcelConfig *)(*(__int64 (__fastcall **)(unsigned __int64))v11)(v10);
  if ( !avatar_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/watcher/player_watcher_comp.cpp",
      "getAvatarFilterParam",
      1137);
    v12 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
            &v27,
            (const char (*)[40])"avatar config not found. formal_avatar:");
    v13 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    v14 = common::milog::MiLogStream::operator<<<FormalAvatar,(FormalAvatar*)0>(v12, v13);
    v9 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v14, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    goto LABEL_34;
  }
  v15 = *(_DWORD *)(v3 + 48);
  if ( v15 == 3 )
  {
    v17 = (unsigned __int64)std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
      v17 = __asan_report_load8(v17);
    v18 = *(_QWORD *)v17 + 280LL;
    if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
      v17 = __asan_report_load8(*(_QWORD *)v17 + 280LL);
    weapon_type = (*(unsigned int (__fastcall **)(unsigned __int64))v18)(v17);
  }
  else
  {
    if ( v15 > 3 )
      goto LABEL_32;
    if ( v15 == 1 )
    {
      weapon_type = *(_DWORD *)(v3 + 32);
      goto LABEL_35;
    }
    if ( v15 != 2 )
    {
LABEL_32:
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/watcher/player_watcher_comp.cpp",
        "getAvatarFilterParam",
        1150);
      v19 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
              &v27,
              (const char (*)[28])"unknown avatar filter type:");
      v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v3 + 48));
      v21 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v20, (const char (*)[12])" avatar_id:");
      v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v3 + 32));
      v9 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v22, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      goto LABEL_34;
    }
    if ( *(_BYTE *)(((unsigned __int64)&avatar_config_ptr->weapon_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&avatar_config_ptr->weapon_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&avatar_config_ptr->weapon_type);
    }
    weapon_type = avatar_config_ptr->weapon_type;
  }
LABEL_35:
  std::shared_ptr<FormalAvatar>::~shared_ptr((std::shared_ptr<FormalAvatar> *const)(v3 + 64));
  result = (unsigned int)weapon_type;
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

// Line 1159: range 0000000014394A50-0000000014394E52
void __cdecl PlayerWatcherComp::onFinishQuest(PlayerWatcherComp *const this, const FinishQuestEvent *event)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // rbx
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v5; // rax
  _DWORD *v6; // rdx
  std::initializer_list<unsigned int> __l; // [rsp+28h] [rbp-148h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+38h] [rbp-138h] BYREF
  const std::unordered_map<data::WatcherPredicateConfig,std::vector<unsigned int>> *predicate_global_watcher_map; // [rsp+40h] [rbp-130h]
  const std::vector<unsigned int> *__for_range; // [rsp+48h] [rbp-128h]
  std::shared_ptr<Config> v11; // [rsp+50h] [rbp-120h] BYREF
  char v12[272]; // [rsp+60h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 8 9 iter:1166 80 24 16 watcher_vec:1172 144 40 14 predicate:1162";
  *(_QWORD *)(v2 + 16) = PlayerWatcherComp::onFinishQuest;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862721] = -234881024;
  v4[536862722] = 62194;
  v4[536862723] = -218959360;
  v4[536862724] = 62194;
  v4[536862725] = -218103808;
  v4[536862726] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v11);
  predicate_global_watcher_map = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v11)->design_config.txt_config_mgr.watcher_config_mgr.predicate_global_watcher_map;
  std::shared_ptr<Config>::~shared_ptr(&v11);
  data::WatcherPredicateConfig::WatcherPredicateConfig((data::WatcherPredicateConfig *const)(v2 + 144));
  *(_DWORD *)(v2 + 152) = 1;
  if ( *(_BYTE *)(((unsigned __int64)&event->quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->quest_id);
  }
  LODWORD(__l._M_array) = event->quest_id;
  std::vector<unsigned int>::operator=(
    (std::vector<unsigned int> *const)(v2 + 160),
    (std::initializer_list<unsigned int>)__PAIR128__(1LL, &__l));
  *(std::unordered_map<data::WatcherPredicateConfig,std::vector<unsigned int>>::const_iterator *)(v2 + 48) = std::unordered_map<data::WatcherPredicateConfig,std::vector<unsigned int>>::find(predicate_global_watcher_map, (const std::unordered_map<data::WatcherPredicateConfig,std::vector<unsigned int>>::key_type *)(v2 + 144));
  __for_end._M_current = (const unsigned int *)std::unordered_map<data::WatcherPredicateConfig,std::vector<unsigned int>>::end(predicate_global_watcher_map)._M_cur;
  if ( !std::__detail::operator==<std::pair<data::WatcherPredicateConfig const,std::vector<unsigned int>>,false>(
          (const std::__detail::_Node_iterator_base<std::pair<const data::WatcherPredicateConfig,std::vector<unsigned int> >,false> *)(v2 + 48),
          (const std::__detail::_Node_iterator_base<std::pair<const data::WatcherPredicateConfig,std::vector<unsigned int> >,false> *)&__for_end) )
  {
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 80));
    __for_range = &std::__detail::_Node_const_iterator<std::pair<data::WatcherPredicateConfig const,std::vector<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<const data::WatcherPredicateConfig,std::vector<unsigned int> >,false,false> *const)(v2 + 48))->second;
    __l._M_len = (std::initializer_list<unsigned int>::size_type)std::vector<unsigned int>::begin(__for_range)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(__for_range)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&__l._M_len,
              &__for_end) )
    {
      v5 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__l._M_len);
      v6 = v5;
      if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v5);
      }
      HIDWORD(__l._M_array) = *v6;
      PlayerWatcherComp::tryEnableGlobalWatcher(this, HIDWORD(__l._M_array), (std::vector<unsigned int> *)(v2 + 80));
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__l._M_len);
    }
    PlayerWatcherComp::notifyWatcherChange(this, (const std::vector<unsigned int> *)(v2 + 80));
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 80));
  }
  data::WatcherPredicateConfig::~WatcherPredicateConfig((data::WatcherPredicateConfig *const)(v2 + 144));
  if ( v12 == (char *)v2 )
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

// Line 1183: range 0000000014395422-00000000143958B5
void __cdecl PlayerWatcherComp::onChangeAvatar(PlayerWatcherComp *const this, const ChangeAvatarEvent *event)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::_Rb_tree_const_iterator<unsigned int>::reference v5; // rax
  _DWORD *v6; // rdx
  unsigned int *v7; // rax
  uint32_t *v8; // rdx
  std::set<unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-180h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+28h] [rbp-178h] BYREF
  std::set<unsigned int> *__for_range; // [rsp+30h] [rbp-170h]
  std::set<unsigned int> *__for_range_0; // [rsp+38h] [rbp-168h]
  char v13[352]; // [rsp+40h] [rbp-160h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 4 15 watcher_id:1230 64 8 24 get_related_watcher:1185 96 24 16 watcher_vec:1225 160 48 23 o"
                        "ld_watcher_id_set:1228 240 48 23 cur_watcher_id_set:1229";
  *(_QWORD *)(v2 + 16) = PlayerWatcherComp::onChangeAvatar;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -234881024;
  v4[536862724] = -218959118;
  v4[536862726] = -219021312;
  v4[536862727] = 62194;
  v4[536862729] = -202116109;
  *(_QWORD *)(v2 + 64) = this;
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 96));
  if ( *(_BYTE *)(((unsigned __int64)&event->old_guid >> 3) + 0x7FFF8000) )
    __asan_report_load8(&event->old_guid);
  PlayerWatcherComp::onChangeAvatar(ChangeAvatarEvent const&)::{lambda(unsigned long)#1}::operator()(
    (std::set<unsigned int> *)(v2 + 160),
    (const PlayerWatcherComp::onChangeAvatar::<lambda(uint64_t)> *const)(v2 + 64),
    event->old_guid);
  if ( *(_BYTE *)(((unsigned __int64)&event->cur_guid >> 3) + 0x7FFF8000) )
    __asan_report_load8(&event->cur_guid);
  PlayerWatcherComp::onChangeAvatar(ChangeAvatarEvent const&)::{lambda(unsigned long)#1}::operator()(
    (std::set<unsigned int> *)(v2 + 240),
    (const PlayerWatcherComp::onChangeAvatar::<lambda(uint64_t)> *const)(v2 + 64),
    event->cur_guid);
  __for_range = (std::set<unsigned int> *)(v2 + 160);
  __for_begin._M_node = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v2 + 160))._M_node;
  __for_end._M_node = std::set<unsigned int>::end((const std::set<unsigned int> *const)(v2 + 160))._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v5 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    *(_DWORD *)(v2 + 48) = *v6;
    if ( !std::set<unsigned int>::erase(
            (std::set<unsigned int> *const)(v2 + 240),
            (const std::set<unsigned int>::key_type *)(v2 + 48)) )
      PlayerWatcherComp::tryDisableGlobalWatcher(this, *(_DWORD *)(v2 + 48), (std::vector<unsigned int> *)(v2 + 96));
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  __for_range_0 = (std::set<unsigned int> *)(v2 + 240);
  __for_begin._M_node = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v2 + 240))._M_node;
  __for_end._M_node = std::set<unsigned int>::end(__for_range_0)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v7 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    v8 = v7;
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v7);
    }
    PlayerWatcherComp::tryEnableGlobalWatcher(this, *v8, (std::vector<unsigned int> *)(v2 + 96));
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  PlayerWatcherComp::notifyWatcherChange(this, (const std::vector<unsigned int> *)(v2 + 96));
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 240));
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 160));
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 96));
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8024) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1185: range 0000000014394E54-0000000014395421
std::set<unsigned int> *__cdecl PlayerWatcherComp::onChangeAvatar(ChangeAvatarEvent const&)::{lambda(unsigned long)#1}::operator()(
        std::set<unsigned int> *retstr,
        const PlayerWatcherComp::onChangeAvatar::<lambda(uint64_t)> *const __closure,
        uint64_t avatar_guid)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  PlayerWatcherComp *this; // rax
  PlayerAvatarComp *AvatarComp; // rax
  __gnu_cxx::__normal_iterator<data::AvatarFilterType*,std::vector<data::AvatarFilterType> >::reference v8; // rax
  data::AvatarFilterType *v9; // rdx
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  uint32_t AvatarId; // eax
  std::__detail::_Node_const_iterator<std::pair<const data::WatcherPredicateConfig,std::vector<unsigned int> >,false,false>::pointer v12; // rax
  std::__detail::_Node_const_iterator<std::pair<const data::WatcherPredicateConfig,std::vector<unsigned int> >,false,false>::pointer v13; // rax
  const unsigned int *M_current; // rcx
  std::initializer_list<data::AvatarFilterType> __l; // [rsp+0h] [rbp-1C0h]
  PlayerWatcherComp *__la; // [rsp+0h] [rbp-1C0h]
  const unsigned int *__lb; // [rsp+0h] [rbp-1C0h]
  std::allocator<data::AvatarFilterType> __a; // [rsp+3Fh] [rbp-181h] BYREF
  data::AvatarFilterType avatar_filter_type; // [rsp+40h] [rbp-180h]
  uint32_t filter_type; // [rsp+44h] [rbp-17Ch]
  std::vector<data::AvatarFilterType>::iterator __for_begin; // [rsp+48h] [rbp-178h] BYREF
  std::vector<data::AvatarFilterType>::iterator __for_end; // [rsp+50h] [rbp-170h] BYREF
  const std::unordered_map<data::WatcherPredicateConfig,std::vector<unsigned int>> *predicate_global_watcher_map; // [rsp+58h] [rbp-168h]
  std::vector<data::AvatarFilterType> *__for_range; // [rsp+60h] [rbp-160h]
  std::initializer_list<unsigned int> v27; // [rsp+68h] [rbp-158h] BYREF
  int v28; // [rsp+78h] [rbp-148h]
  int v29; // [rsp+7Ch] [rbp-144h]
  std::shared_ptr<Config> v30; // [rsp+80h] [rbp-140h] BYREF
  char v31[304]; // [rsp+90h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 8 9 iter:1215 80 16 22 formal_avatar_ptr:1193 112 24 22 avatar_filter_vec:1199 176 40 14 predicate:1211";
  *(_QWORD *)(v3 + 16) = PlayerWatcherComp::onChangeAvatar(ChangeAvatarEvent const&)::{lambda(unsigned long)#1}::operator();
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862721] = -234881024;
  v5[536862722] = 62194;
  v5[536862723] = 62194;
  v5[536862724] = -218959360;
  v5[536862725] = 62194;
  v5[536862726] = -218103808;
  v5[536862727] = -202116109;
  std::set<unsigned int>::set(retstr);
  if ( avatar_guid )
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure);
    this = __closure->__this;
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__this->player_ >> 3) + 0x7FFF8000) )
      this = (PlayerWatcherComp *)__asan_report_load8(&__closure->__this->player_);
    AvatarComp = Player::getAvatarComp(this->player_);
    PlayerAvatarComp::findFormalAvatar((const PlayerAvatarComp *const)(v3 + 80), (uint64_t)AvatarComp);
    if ( !std::operator==<FormalAvatar>(0LL, (const std::shared_ptr<FormalAvatar> *)(v3 + 80)) )
    {
      HIDWORD(v27._M_len) = 1;
      v28 = 2;
      v29 = 3;
      __l._M_array = (std::initializer_list<data::AvatarFilterType>::iterator)&v27._M_len + 1;
      __l._M_len = 3LL;
      std::allocator<data::AvatarFilterType>::allocator(&__a);
      std::vector<data::AvatarFilterType>::vector((std::vector<data::AvatarFilterType> *const)(v3 + 112), __l, &__a);
      std::allocator<data::AvatarFilterType>::~allocator(&__a);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v30);
      predicate_global_watcher_map = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v30)->design_config.txt_config_mgr.watcher_config_mgr.predicate_global_watcher_map;
      std::shared_ptr<Config>::~shared_ptr(&v30);
      __for_range = (std::vector<data::AvatarFilterType> *)(v3 + 112);
      __for_begin._M_current = std::vector<data::AvatarFilterType>::begin((std::vector<data::AvatarFilterType> *const)(v3 + 112))._M_current;
      __for_end._M_current = std::vector<data::AvatarFilterType>::end(__for_range)._M_current;
      while ( __gnu_cxx::operator!=<data::AvatarFilterType *,std::vector<data::AvatarFilterType>>(
                &__for_begin,
                &__for_end) )
      {
        v8 = __gnu_cxx::__normal_iterator<data::AvatarFilterType *,std::vector<data::AvatarFilterType>>::operator*(&__for_begin);
        v9 = v8;
        if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v8);
        }
        avatar_filter_type = *v9;
        filter_type = avatar_filter_type;
        data::WatcherPredicateConfig::WatcherPredicateConfig((data::WatcherPredicateConfig *const)(v3 + 176));
        *(_DWORD *)(v3 + 184) = 2;
        LODWORD(v27._M_array) = filter_type;
        if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
          __asan_report_load8(__closure);
        __la = __closure->__this;
        v10 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
        AvatarId = Avatar::getAvatarId(v10);
        HIDWORD(v27._M_array) = PlayerWatcherComp::getAvatarFilterParam(__la, AvatarId, filter_type);
        std::vector<unsigned int>::operator=(
          (std::vector<unsigned int> *const)(v3 + 192),
          (std::initializer_list<unsigned int>)__PAIR128__(2LL, &v27));
        *(std::unordered_map<data::WatcherPredicateConfig,std::vector<unsigned int>>::const_iterator *)(v3 + 48) = std::unordered_map<data::WatcherPredicateConfig,std::vector<unsigned int>>::find(predicate_global_watcher_map, (const std::unordered_map<data::WatcherPredicateConfig,std::vector<unsigned int>>::key_type *)(v3 + 176));
        v27._M_array = (std::initializer_list<unsigned int>::iterator)std::unordered_map<data::WatcherPredicateConfig,std::vector<unsigned int>>::end(predicate_global_watcher_map)._M_cur;
        if ( std::__detail::operator!=<std::pair<data::WatcherPredicateConfig const,std::vector<unsigned int>>,false>(
               (const std::__detail::_Node_iterator_base<std::pair<const data::WatcherPredicateConfig,std::vector<unsigned int> >,false> *)(v3 + 48),
               (const std::__detail::_Node_iterator_base<std::pair<const data::WatcherPredicateConfig,std::vector<unsigned int> >,false> *)&v27) )
        {
          v12 = std::__detail::_Node_const_iterator<std::pair<data::WatcherPredicateConfig const,std::vector<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<const data::WatcherPredicateConfig,std::vector<unsigned int> >,false,false> *const)(v3 + 48));
          __lb = std::vector<unsigned int>::end(&v12->second)._M_current;
          v13 = std::__detail::_Node_const_iterator<std::pair<data::WatcherPredicateConfig const,std::vector<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<const data::WatcherPredicateConfig,std::vector<unsigned int> >,false,false> *const)(v3 + 48));
          M_current = std::vector<unsigned int>::begin(&v13->second)._M_current;
          std::set<unsigned int>::insert<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>>(
            retstr,
            (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current,
            (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)__lb);
        }
        data::WatcherPredicateConfig::~WatcherPredicateConfig((data::WatcherPredicateConfig *const)(v3 + 176));
        __gnu_cxx::__normal_iterator<data::AvatarFilterType *,std::vector<data::AvatarFilterType>>::operator++(&__for_begin);
      }
      std::vector<data::AvatarFilterType>::~vector((std::vector<data::AvatarFilterType> *const)(v3 + 112));
    }
    std::shared_ptr<FormalAvatar>::~shared_ptr((std::shared_ptr<FormalAvatar> *const)(v3 + 80));
  }
  if ( v31 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 1247: range 00000000143958B6-0000000014395D27
void __cdecl PlayerWatcherComp::onGCGLevelUp(PlayerWatcherComp *const this, const GCGLevelUpEvent *event)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // rbx
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v5; // rax
  _DWORD *v6; // rdx
  _DWORD __l[5]; // [rsp+24h] [rbp-14Ch] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+38h] [rbp-138h] BYREF
  const std::unordered_map<data::WatcherPredicateConfig,std::vector<unsigned int>> *predicate_global_watcher_map; // [rsp+40h] [rbp-130h]
  const std::vector<unsigned int> *__for_range; // [rsp+48h] [rbp-128h]
  std::shared_ptr<Config> v11; // [rsp+50h] [rbp-120h] BYREF
  char v12[272]; // [rsp+60h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 8 9 iter:1255 80 24 16 watcher_vec:1260 144 40 14 predicate:1250";
  *(_QWORD *)(v2 + 16) = PlayerWatcherComp::onGCGLevelUp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862721] = -234881024;
  v4[536862722] = 62194;
  v4[536862723] = -218959360;
  v4[536862724] = 62194;
  v4[536862725] = -218103808;
  v4[536862726] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v11);
  predicate_global_watcher_map = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v11)->design_config.txt_config_mgr.watcher_config_mgr.predicate_global_watcher_map;
  std::shared_ptr<Config>::~shared_ptr(&v11);
  data::WatcherPredicateConfig::WatcherPredicateConfig((data::WatcherPredicateConfig *const)(v2 + 144));
  *(_DWORD *)(v2 + 152) = 3;
  if ( *(_BYTE *)(((unsigned __int64)&event->before_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->before_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->before_level);
  }
  for ( __l[1] = event->before_level + 1; ; ++__l[1] )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->cur_level >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->cur_level >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&event->cur_level);
    }
    if ( __l[1] > event->cur_level )
      break;
    __l[0] = __l[1];
    std::vector<unsigned int>::operator=(
      (std::vector<unsigned int> *const)(v2 + 160),
      (std::initializer_list<unsigned int>)__PAIR128__(1LL, __l));
    *(std::unordered_map<data::WatcherPredicateConfig,std::vector<unsigned int>>::const_iterator *)(v2 + 48) = std::unordered_map<data::WatcherPredicateConfig,std::vector<unsigned int>>::find(predicate_global_watcher_map, (const std::unordered_map<data::WatcherPredicateConfig,std::vector<unsigned int>>::key_type *)(v2 + 144));
    __for_end._M_current = (const unsigned int *)std::unordered_map<data::WatcherPredicateConfig,std::vector<unsigned int>>::end(predicate_global_watcher_map)._M_cur;
    if ( std::__detail::operator==<std::pair<data::WatcherPredicateConfig const,std::vector<unsigned int>>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<const data::WatcherPredicateConfig,std::vector<unsigned int> >,false> *)(v2 + 48),
           (const std::__detail::_Node_iterator_base<std::pair<const data::WatcherPredicateConfig,std::vector<unsigned int> >,false> *)&__for_end) )
    {
      break;
    }
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 80));
    __for_range = &std::__detail::_Node_const_iterator<std::pair<data::WatcherPredicateConfig const,std::vector<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<const data::WatcherPredicateConfig,std::vector<unsigned int> >,false,false> *const)(v2 + 48))->second;
    *(std::vector<unsigned int>::const_iterator *)&__l[3] = std::vector<unsigned int>::begin(__for_range);
    __for_end._M_current = std::vector<unsigned int>::end(__for_range)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&__l[3],
              &__for_end) )
    {
      v5 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__l[3]);
      v6 = v5;
      if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v5);
      }
      __l[2] = *v6;
      PlayerWatcherComp::tryEnableGlobalWatcher(this, __l[2], (std::vector<unsigned int> *)(v2 + 80));
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__l[3]);
    }
    PlayerWatcherComp::notifyWatcherChange(this, (const std::vector<unsigned int> *)(v2 + 80));
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 80));
  }
  data::WatcherPredicateConfig::~WatcherPredicateConfig((data::WatcherPredicateConfig *const)(v2 + 144));
  if ( v12 == (char *)v2 )
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

// Line 1270: range 0000000014395D28-00000000143963A4
void __cdecl PlayerWatcherComp::onWatcherProgressUpdate(
        PlayerWatcherComp *const this,
        const WatcherProgressUpdateEvent *event)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // rbx
  std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v7; // r14
  std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  Player *player; // r14
  unsigned __int64 v10; // rax
  void (__fastcall **v11)(std::string *, unsigned __int64); // rdx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rcx
  uint32_t cur_progress; // r14d
  uint32_t *p_watcher_id; // rsi
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v17; // rax
  uint32_t *v18; // rdx
  char v19; // cl
  std::string __rhs; // [rsp+10h] [rbp-270h] BYREF
  common::milog::MiLogStream v22; // [rsp+30h] [rbp-250h] BYREF
  char v23[560]; // [rsp+50h] [rbp-230h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(512LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 16 watcher_ptr:1272 64 376 8 oss:1275";
  *(_QWORD *)(v2 + 16) = PlayerWatcherComp::onWatcherProgressUpdate;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862733] = -218103808;
  v4[536862734] = -202116109;
  v4[536862735] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&event->watcher_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->watcher_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->watcher_id);
  }
  PlayerWatcherComp::findWatcher((PlayerWatcherComp *const)(v2 + 32), (__int64)this, event->watcher_id);
  if ( std::operator!=<BaseWatcher>((const std::shared_ptr<BaseWatcher> *)(v2 + 32), 0LL) )
  {
    v5 = std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( BaseWatcher::isDebug(v5) )
    {
      std::ostringstream::basic_ostringstream(v2 + 64);
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/watcher/player_watcher_comp.cpp",
        "onWatcherProgressUpdate",
        1276);
      v7 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v22, (const char (*)[17])"[DEBUG WATCHER] ");
      v8 = std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      common::milog::MiLogStream::operator<<<BaseWatcher,(BaseWatcher*)0>(v7, v8);
      common::milog::MiLogStream::~MiLogStream(&v22);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      player = this->player_;
      v10 = (unsigned __int64)std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
        v10 = __asan_report_load8(v10);
      v11 = *(void (__fastcall ***)(std::string *, unsigned __int64))v10;
      if ( *(_BYTE *)((*(_QWORD *)v10 >> 3) + 0x7FFF8000LL) )
        v10 = __asan_report_load8(*(_QWORD *)v10);
      (*v11)(&__rhs, v10);
      std::operator+<char>((std::string *)&v22, "[DEBUG_WATCHER]", &__rhs);
      Player::notifyGMServerLog(player, SERVER_LOG_LEVEL, LOG_LEVEL_INFO_0, (const std::string *)&v22);
      std::string::~string(&v22);
      std::string::~string(&__rhs);
      std::ostringstream::~ostringstream(v2 + 64);
    }
  }
  if ( *(_BYTE *)(((unsigned __int64)&event->watcher_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->watcher_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->watcher_id);
  }
  if ( PlayerWatcherComp::isGlobalWatcher(this, event->watcher_id) )
  {
    if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
           &this->finished_global_watcher_set_,
           &event->watcher_id) )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/watcher/player_watcher_comp.cpp",
        "onWatcherProgressUpdate",
        1285);
      v12 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
              &v22,
              (const char (*)[45])"global watcher already finished, watcher_id:");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &event->watcher_id);
      v14 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v13, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      operator<<(v14, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v22);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&event->cur_progress >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->cur_progress >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&event->cur_progress);
      }
      cur_progress = event->cur_progress;
      p_watcher_id = &event->watcher_id;
      v17 = std::unordered_map<unsigned int,unsigned int>::operator[](
              &this->global_watcher_progress_map_,
              &event->watcher_id);
      v18 = v17;
      v19 = *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000);
      if ( v19 != 0 && (char)(((unsigned __int8)v17 & 7) + 3) >= v19 )
      {
        LOBYTE(p_watcher_id) = v19 != 0;
        __asan_report_store4(v17, p_watcher_id, (_BYTE)v17);
      }
      *v18 = cur_progress;
      if ( *(char *)(((unsigned __int64)&event->is_finished >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&event->is_finished);
      if ( event->is_finished )
      {
        if ( *(_BYTE *)(((unsigned __int64)&event->watcher_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&event->watcher_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&event->watcher_id);
        }
        PlayerWatcherComp::finishGlobalWatcher(this, event->watcher_id);
      }
    }
  }
  std::shared_ptr<BaseWatcher>::~shared_ptr((std::shared_ptr<BaseWatcher> *const)(v2 + 32));
  if ( v23 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8034) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF803C) = 0;
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

// Line 1299: range 00000000143963A6-0000000014396902
void __fastcall PlayerWatcherComp::logPushTipsChange(const PlayerWatcherComp *const this, __int32 push_tips_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rcx
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v9; // rdx
  unsigned int *p_second; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyPushTipsChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyPushTipsChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyPushTipsChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  Player *player; // r14
  std::string v16; // [rsp+0h] [rbp-120h]
  const PlayerWatcherComp *thisa; // [rsp+8h] [rbp-118h]
  uint32_t op; // [rsp+1Ch] [rbp-104h]
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> __y; // [rsp+20h] [rbp-100h] BYREF
  const data::PushTipsConfig *push_tips_config_ptr; // [rsp+28h] [rbp-F8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+30h] [rbp-F0h] BYREF
  std::shared_ptr<google::protobuf::Message> v22; // [rsp+40h] [rbp-E0h] BYREF
  common::milog::MiLogStream v23; // [rsp+50h] [rbp-D0h] BYREF
  char v24[176]; // [rsp+70h] [rbp-B0h] BYREF

  v16._M_string_length = (std::string::size_type)this;
  HIDWORD(v16._M_dataplus._M_p) = push_tips_id;
  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 1 23 log_context_holder:1314 48 4 17 push_tips_id:1298 64 8 9 iter:1308 96 16 29 push_tips_"
                        "change_log_ptr:1315";
  *(_QWORD *)(v2 + 16) = PlayerWatcherComp::logPushTipsChange;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556927;
  v4[536862722] = -218959360;
  v4[536862723] = -202178560;
  *(_DWORD *)(v2 + 48) = push_tips_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v22);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22);
  push_tips_config_ptr = data::WatcherExcelConfigMgrBase::findPushTipsConfig(
                           &v5->design_config.txt_config_mgr.watcher_config_mgr,
                           *(_DWORD *)(v2 + 48));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v22);
  if ( push_tips_config_ptr )
  {
    *((_DWORD *)&v16._anon_0._M_allocated_capacity + 3) = 0;
    *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                    &this->push_tips_map_,
                                                                                    (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
    __y._M_cur = std::unordered_map<unsigned int,unsigned int>::end(&this->push_tips_map_)._M_cur;
    if ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 64),
           &__y) )
    {
      v9 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 64));
      p_second = &v9->second;
      if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_second);
      }
      *((_DWORD *)&v16._anon_0._M_allocated_capacity + 3) = v9->second;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    BasicComp = Player::getBasicComp(this->player_);
    PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v23, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32), 0x96Au, v16);
    std::string::~string(&v23);
    common::tools::perf::make_shared<proto_log::PlayerLogBodyPushTipsChange>();
    v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyPushTipsChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyPushTipsChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    proto_log::PlayerLogBodyPushTipsChange::set_id(v12, *(_DWORD *)(v2 + 48));
    v13 = std::__shared_ptr_access<proto_log::PlayerLogBodyPushTipsChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyPushTipsChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    if ( *(_BYTE *)(((unsigned __int64)&push_tips_config_ptr->tutorial_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)push_tips_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&push_tips_config_ptr->tutorial_id >> 3)
                                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(&push_tips_config_ptr->tutorial_id);
    }
    proto_log::PlayerLogBodyPushTipsChange::set_guide_id(v13, push_tips_config_ptr->tutorial_id);
    v14 = std::__shared_ptr_access<proto_log::PlayerLogBodyPushTipsChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyPushTipsChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    proto_log::PlayerLogBodyPushTipsChange::set_op(v14, op);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&thisa->player_);
    player = thisa->player_;
    std::shared_ptr<google::protobuf::Message>::shared_ptr(&v22, 0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyPushTipsChange,void>(
      &p_body_ptr,
      (const std::shared_ptr<proto_log::PlayerLogBodyPushTipsChange> *)(v2 + 96));
    Player::printStatLog(player, &p_body_ptr, &v22, 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v22);
    std::shared_ptr<proto_log::PlayerLogBodyPushTipsChange>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyPushTipsChange> *const)(v2 + 96));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/watcher/player_watcher_comp.cpp",
      "logPushTipsChange",
      1303);
    v6 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
           &v23,
           (const char (*)[22])"invalid push_tips_id:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 48));
    v8 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v7, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v8, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v23);
  }
  if ( v24 == (char *)v2 )
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

// Line 1323: range 0000000014396904-0000000014396BDA
void __cdecl PlayerWatcherComp::triggerElementReaction(
        PlayerWatcherComp *const this,
        data::ElementReactionType reaction_type,
        uint32_t entity_id,
        float drop_hp,
        bool is_kill)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  PlayerBasicComp *BasicComp; // rax
  ElementReactionRecordEntry *n; // rax
  char v12[208]; // [rsp+30h] [rbp-D0h] BYREF

  v5 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(160LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 32 24 10 entry:1325 96 24 10 event:1329";
  *(_QWORD *)(v5 + 16) = PlayerWatcherComp::triggerElementReaction;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234881024;
  v7[536862722] = -218959118;
  v7[536862723] = -218103808;
  v7[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  BasicComp = Player::getBasicComp(this->player_);
  *(_QWORD *)(v5 + 32) = PlayerBasicComp::getPlayerTimeMs(BasicComp);
  *(_DWORD *)(v5 + 40) = reaction_type;
  *(_DWORD *)(v5 + 44) = entity_id;
  *(float *)(v5 + 48) = drop_hp;
  *(_BYTE *)(v5 + 52) = is_kill;
  n = std::move<ElementReactionRecordEntry &>((ElementReactionRecordEntry *)(v5 + 32));
  if ( *(char *)(((unsigned __int64)n >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&n->is_kill + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)n + 23) & 7) >= *(_BYTE *)(((unsigned __int64)(&n->is_kill + 3) >> 3) + 0x7FFF8000) )
  {
    n = (ElementReactionRecordEntry *)__asan_report_load_n(n, 24LL);
  }
  ElementReactionStatCollector::addEntry(&this->element_reaction_stat_collector_, *n);
  if ( ElementReactionStatCollector::isNeedTriggerWatcher(&this->element_reaction_stat_collector_) )
  {
    *(_QWORD *)(v5 + 96) = 0LL;
    *(_QWORD *)(v5 + 104) = 0LL;
    *(_QWORD *)(v5 + 112) = 0LL;
    *(_QWORD *)(v5 + 96) = &`vtable for'ElementReactionStatUpdateEvent + 2;
    PlayerWatcherComp::onBaseEvent(this, (const BaseEvent *)(v5 + 96));
    ElementReactionStatUpdateEvent::~ElementReactionStatUpdateEvent((ElementReactionStatUpdateEvent *const)(v5 + 96));
  }
  if ( v12 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 1335: range 0000000014396BDC-0000000014396E1F
// local variable allocation has failed, the output may be wrong!
void __cdecl PlayerWatcherComp::triggerSkill(PlayerWatcherComp *const this, uint32_t skill_id, bool is_energy_skill)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  PlayerBasicComp *BasicComp; // rax
  unsigned __int64 v7; // rax
  uint64_t v8; // rsi OVERLAPPED
  __int64 v9; // rdx OVERLAPPED
  char v11[176]; // [rsp+20h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 10 entry:1337 64 24 10 event:1341";
  *(_QWORD *)(v3 + 16) = PlayerWatcherComp::triggerSkill;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  BasicComp = Player::getBasicComp(this->player_);
  *(_QWORD *)(v3 + 32) = PlayerBasicComp::getPlayerTimeMs(BasicComp);
  *(_DWORD *)(v3 + 40) = skill_id;
  *(_BYTE *)(v3 + 44) = is_energy_skill;
  v7 = (unsigned __int64)std::move<SkillRecordEntry &>((SkillRecordEntry *)(v3 + 32));
  if ( *(_WORD *)((v7 >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load16(v7);
  v8 = *(_QWORD *)v7;
  v9 = *(_QWORD *)(v7 + 8);
  SkillStatCollector::addEntry(&this->skill_stat_collector_, *(SkillRecordEntry *)&v8);
  if ( SkillStatCollector::isNeedTriggerWatcher(&this->skill_stat_collector_) )
  {
    *(_QWORD *)(v3 + 64) = 0LL;
    *(_QWORD *)(v3 + 72) = 0LL;
    *(_QWORD *)(v3 + 80) = 0LL;
    *(_QWORD *)(v3 + 64) = &`vtable for'SkillStatUpdateEvent + 2;
    PlayerWatcherComp::onBaseEvent(this, (const BaseEvent *)(v3 + 64));
    SkillStatUpdateEvent::~SkillStatUpdateEvent((SkillStatUpdateEvent *const)(v3 + 64));
  }
  if ( v11 == (char *)v3 )
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

// Line 1347: range 0000000014396E20-0000000014396F91
void __cdecl PlayerWatcherComp::triggerAbilityStatePassTime(
        PlayerWatcherComp *const this,
        data::AbilityState state,
        uint64_t pass_time_ms)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  char v7[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 48 40 10 event:1352";
  *(_QWORD *)(v3 + 16) = PlayerWatcherComp::triggerAbilityStatePassTime;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  if ( pass_time_ms > 0xBB7 )
  {
    AbilityStatePassTimeEvent::AbilityStatePassTimeEvent(
      (AbilityStatePassTimeEvent *const)(v3 + 48),
      state,
      pass_time_ms);
    PlayerWatcherComp::onBaseEvent(this, (const BaseEvent *)(v3 + 48));
    AbilityStatePassTimeEvent::~AbilityStatePassTimeEvent((AbilityStatePassTimeEvent *const)(v3 + 48));
  }
  if ( v7 == (char *)v3 )
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

// Line 1357: range 0000000014396F92-00000000143970C4
void __cdecl PlayerWatcherComp::triggerShieldSourceUpdate(PlayerWatcherComp *const this, uint32_t source_num)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  char v5[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 10 event:1362";
  *(_QWORD *)(v2 + 16) = PlayerWatcherComp::triggerShieldSourceUpdate;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( source_num > 2 )
  {
    ShieldSourceNumUpdateEvent::ShieldSourceNumUpdateEvent((ShieldSourceNumUpdateEvent *const)(v2 + 32), source_num);
    PlayerWatcherComp::onBaseEvent(this, (const BaseEvent *)(v2 + 32));
    ShieldSourceNumUpdateEvent::~ShieldSourceNumUpdateEvent((ShieldSourceNumUpdateEvent *const)(v2 + 32));
  }
  if ( v5 == (char *)v2 )
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
};

// Line 1367: range 00000000143970C6-0000000014397275
// local variable allocation has failed, the output may be wrong!
void __fastcall PlayerWatcherComp::triggerSitDown(PlayerWatcherComp *const this, uint32_t scene_id, Vector3 pos)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // rbx
  char v6[192]; // [rsp+20h] [rbp-C0h] BYREF

  v3 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 12 8 pos:1366 80 40 10 event:1368";
  *(_QWORD *)(v3 + 16) = PlayerWatcherComp::triggerSitDown;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862721] = 0x4000000;
  v5[536862722] = 62194;
  v5[536862723] = -218103808;
  v5[536862724] = -202116109;
  *(Vector3 *)(v3 + 48) = pos;
  SitDownEvent::SitDownEvent((SitDownEvent *const)(v3 + 80), scene_id, *(Vector3 *)(v3 + 48));
  PlayerWatcherComp::onBaseEvent(this, (const BaseEvent *)(v3 + 80));
  SitDownEvent::~SitDownEvent((SitDownEvent *const)(v3 + 80));
  if ( v6 == (char *)v3 )
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

// Line 1373: range 0000000014397276-0000000014397485
void __fastcall PlayerWatcherComp::triggerDeliverItemToSalesman(PlayerWatcherComp *const this, uint32_t cnt)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rcx
  DeliverItemToSalesmanEvent v8; // [rsp+10h] [rbp-A0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "1 32 4 8 cnt:1372";
  *(_QWORD *)(v2 + 16) = PlayerWatcherComp::triggerDeliverItemToSalesman;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = cnt;
  common::milog::MiLogStream::create(
    &v9,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/watcher/player_watcher_comp.cpp",
    "triggerDeliverItemToSalesman",
    1375);
  v5 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
         &v9,
         (const char (*)[35])"deliver item to salesman. new cnt:");
  v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
  v7 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v6, (const char (*)[10])" player_:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  operator<<(v7, this->player_);
  common::milog::MiLogStream::~MiLogStream(&v9);
  memset(&v8, 0, sizeof(v8));
  DeliverItemToSalesmanEvent::DeliverItemToSalesmanEvent(&v8);
  PlayerWatcherComp::onBaseEvent(this, &v8);
  DeliverItemToSalesmanEvent::~DeliverItemToSalesmanEvent(&v8);
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

// Line 1381: range 0000000014397486-00000000143975B7
void __cdecl PlayerWatcherComp::triggerElementTypeChange(
        PlayerWatcherComp *const this,
        data::ElementType old_type,
        data::ElementType new_type)
{
  const char *v3; // r12
  const char *v4; // rbx
  uint32_t Uid; // eax
  common::milog::MiLogStream v7; // [rsp+10h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v7,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/watcher/player_watcher_comp.cpp",
    "triggerElementTypeChange",
    1383);
  v3 = data::enumValToStr(new_type);
  v4 = data::enumValToStr(old_type);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Uid = Player::getUid(this->player_);
  common::milog::MiLogStream::operator()(&v7, "player[%u] element type changed from [%s] to [%s]", Uid, v4, v3);
  common::milog::MiLogStream::~MiLogStream(&v7);
  ElementTypeChangeEvent::ElementTypeChangeEvent((ElementTypeChangeEvent *const)&v7, old_type, new_type);
  PlayerWatcherComp::onBaseEvent(this, (const BaseEvent *)&v7);
  ElementTypeChangeEvent::~ElementTypeChangeEvent((ElementTypeChangeEvent *const)&v7);
};

// Line 1389: range 00000000143975B8-00000000143976C6
void __cdecl PlayerWatcherComp::triggerGadgetInteractable(PlayerWatcherComp *const this, uint32_t gadget_id)
{
  uint32_t Uid; // eax
  common::milog::MiLogStream v3; // [rsp+10h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v3,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/watcher/player_watcher_comp.cpp",
    "triggerGadgetInteractable",
    1391);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Uid = Player::getUid(this->player_);
  common::milog::MiLogStream::operator()(&v3, "player[%u] gadget[%u] became interactable.", Uid, gadget_id);
  common::milog::MiLogStream::~MiLogStream(&v3);
  GadgetInteractableEvent::GadgetInteractableEvent((GadgetInteractableEvent *const)&v3, gadget_id);
  PlayerWatcherComp::onBaseEvent(this, (const BaseEvent *)&v3);
  GadgetInteractableEvent::~GadgetInteractableEvent((GadgetInteractableEvent *const)&v3);
};

// Line 1398: range 00000000143976C8-00000000143977E9
void __cdecl PlayerWatcherComp::triggerSkilledAtRecipe(PlayerWatcherComp *const this, uint32_t recipe_id)
{
  uint32_t Uid; // eax
  SkilledAtRecipeEvent v3; // [rsp+10h] [rbp-50h] BYREF
  common::milog::MiLogStream v4; // [rsp+30h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v4,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/watcher/player_watcher_comp.cpp",
    "triggerSkilledAtRecipe",
    1400);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Uid = Player::getUid(this->player_);
  common::milog::MiLogStream::operator()(&v4, "player[%u] recipe_id[%u] reached maximum proficiency.", Uid, recipe_id);
  common::milog::MiLogStream::~MiLogStream(&v4);
  memset(&v3, 0, sizeof(v3));
  SkilledAtRecipeEvent::SkilledAtRecipeEvent(&v3);
  PlayerWatcherComp::onBaseEvent(this, &v3);
  SkilledAtRecipeEvent::~SkilledAtRecipeEvent(&v3);
};

// Line 1406: range 00000000143977EA-0000000014397966
void __cdecl PlayerWatcherComp::triggerKilledByCertainMonster(PlayerWatcherComp *const this, uint32_t monster_id)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  uint32_t Uid; // eax
  uint32_t describel_id; // [rsp+1Ch] [rbp-44h]
  std::shared_ptr<Config> v5; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v6; // [rsp+30h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v5);
  v2 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5);
  describel_id = MonsterExcelConfigMgr::getCreatureDescribeId(
                   &v2->design_config.txt_config_mgr.monster_config_mgr,
                   monster_id);
  std::shared_ptr<Config>::~shared_ptr(&v5);
  common::milog::MiLogStream::create(
    &v6,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/watcher/player_watcher_comp.cpp",
    "triggerKilledByCertainMonster",
    1409);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Uid = Player::getUid(this->player_);
  common::milog::MiLogStream::operator()(
    &v6,
    "player[%u] killed by monster[%u] of describel_id[%u].",
    Uid,
    monster_id,
    describel_id);
  common::milog::MiLogStream::~MiLogStream(&v6);
  KilledByCertainMonsterEvent::KilledByCertainMonsterEvent((KilledByCertainMonsterEvent *const)&v6, describel_id);
  PlayerWatcherComp::onBaseEvent(this, (const BaseEvent *)&v6);
  KilledByCertainMonsterEvent::~KilledByCertainMonsterEvent((KilledByCertainMonsterEvent *const)&v6);
};

// Line 1415: range 0000000014397968-0000000014397A84
void __cdecl PlayerWatcherComp::triggerKilledBySpecificAbility(
        PlayerWatcherComp *const this,
        const std::string *ability_name)
{
  const char *v2; // rbx
  uint32_t Uid; // eax
  common::milog::MiLogStream v4; // [rsp+10h] [rbp-70h] BYREF
  KilledBySpecificAbilityEvent v5; // [rsp+30h] [rbp-50h] BYREF

  common::milog::MiLogStream::create(
    &v4,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/watcher/player_watcher_comp.cpp",
    "triggerKilledBySpecificAbility",
    1417);
  v2 = (const char *)std::string::c_str(ability_name);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Uid = Player::getUid(this->player_);
  common::milog::MiLogStream::operator()(&v4, "player[%u] killed by ability[%s]", Uid, v2);
  common::milog::MiLogStream::~MiLogStream(&v4);
  KilledBySpecificAbilityEvent::KilledBySpecificAbilityEvent(&v5, ability_name);
  PlayerWatcherComp::onBaseEvent(this, &v5);
  KilledBySpecificAbilityEvent::~KilledBySpecificAbilityEvent(&v5);
};

// Line 1424: range 0000000014397A86-0000000014397BA0
void __cdecl PlayerWatcherComp::triggerTeleportWithCertainPortal(
        PlayerWatcherComp *const this,
        uint32_t point_id,
        uint32_t scene_id)
{
  uint32_t Uid; // eax
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v5,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/watcher/player_watcher_comp.cpp",
    "triggerTeleportWithCertainPortal",
    1426);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Uid = Player::getUid(this->player_);
  common::milog::MiLogStream::operator()(
    &v5,
    "player[%u] teleport with point_id[%u] @ scene_id[%u].",
    Uid,
    point_id,
    scene_id);
  common::milog::MiLogStream::~MiLogStream(&v5);
  TeleportWithCertainPortalEvent::TeleportWithCertainPortalEvent(
    (TeleportWithCertainPortalEvent *const)&v5,
    point_id,
    scene_id);
  PlayerWatcherComp::onBaseEvent(this, (const BaseEvent *)&v5);
  TeleportWithCertainPortalEvent::~TeleportWithCertainPortalEvent((TeleportWithCertainPortalEvent *const)&v5);
};

// Line 1433: range 0000000014397BA2-0000000014397E51
void __cdecl PlayerWatcherComp::triggerCollectSetOfReadings(PlayerWatcherComp *const this, uint32_t item_id)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  uint32_t v3; // eax
  uint32_t set_id; // ebx
  uint32_t Uid; // eax
  const data::MaterialExcelConfig *material_config_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v7; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v8; // [rsp+30h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v7);
  v2 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v7);
  material_config_ptr = data::MaterialExcelConfigMgrBase::findMaterialExcelConfig(
                          &v2->design_config.txt_config_mgr.material_config_mgr,
                          item_id);
  std::shared_ptr<Config>::~shared_ptr(&v7);
  if ( material_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/watcher/player_watcher_comp.cpp",
      "triggerCollectSetOfReadings",
      1443);
    if ( *(_BYTE *)(((unsigned __int64)&material_config_ptr->set_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&material_config_ptr->set_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&material_config_ptr->set_id);
    }
    set_id = material_config_ptr->set_id;
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Uid = Player::getUid(this->player_);
    common::milog::MiLogStream::operator()(&v8, "player[%u] collect item[%u] of set[%u].", Uid, item_id, set_id);
    common::milog::MiLogStream::~MiLogStream(&v8);
    if ( *(_BYTE *)(((unsigned __int64)&material_config_ptr->set_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&material_config_ptr->set_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&material_config_ptr->set_id);
    }
    CollectSetOfReadingsEvent::CollectSetOfReadingsEvent(
      (CollectSetOfReadingsEvent *const)&v8,
      material_config_ptr->set_id);
    PlayerWatcherComp::onBaseEvent(this, (const BaseEvent *)&v8);
    CollectSetOfReadingsEvent::~CollectSetOfReadingsEvent((CollectSetOfReadingsEvent *const)&v8);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/watcher/player_watcher_comp.cpp",
      "triggerCollectSetOfReadings",
      1438);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    v3 = Player::getUid(this->player_);
    common::milog::MiLogStream::operator()(&v8, "player[%u] collect item[%u] not material.", v3, item_id);
    common::milog::MiLogStream::~MiLogStream(&v8);
  }
};

// Line 1450: range 0000000014397E52-0000000014397F60
void __cdecl PlayerWatcherComp::triggerMpDungeonSucceed(PlayerWatcherComp *const this, uint32_t dungeon_id)
{
  uint32_t Uid; // eax
  common::milog::MiLogStream v3; // [rsp+10h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v3,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/watcher/player_watcher_comp.cpp",
    "triggerMpDungeonSucceed",
    1452);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Uid = Player::getUid(this->player_);
  common::milog::MiLogStream::operator()(&v3, "player[%u] dungeon[%u] settle succeed.", Uid, dungeon_id);
  common::milog::MiLogStream::~MiLogStream(&v3);
  MpDungeonSucceedEvent::MpDungeonSucceedEvent((MpDungeonSucceedEvent *const)&v3, dungeon_id);
  PlayerWatcherComp::onBaseEvent(this, (const BaseEvent *)&v3);
  MpDungeonSucceedEvent::~MpDungeonSucceedEvent((MpDungeonSucceedEvent *const)&v3);
};

// Line 1458: range 0000000014397F62-000000001439831D
void __cdecl PlayerWatcherComp::triggerMpKillMonsterNum(
        PlayerWatcherComp *const this,
        CreaturePtr *p_killer_ptr,
        uint32_t monster_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  unsigned __int64 v7; // rax
  void (__fastcall **v8)(common::milog::MiLogStream *, unsigned __int64); // rdx
  uint32_t Uid; // r14d
  const char *v10; // rax
  std::allocator<char> __a; // [rsp+2Bh] [rbp-C5h] BYREF
  uint32_t describel_id; // [rsp+2Ch] [rbp-C4h]
  std::shared_ptr<Config> v14; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v15; // [rsp+40h] [rbp-B0h] BYREF
  char v16[144]; // [rsp+60h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 32 16 killer_desc:1461";
  *(_QWORD *)(v3 + 16) = PlayerWatcherComp::triggerMpKillMonsterNum;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450888) = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v14);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14);
  describel_id = MonsterExcelConfigMgr::getCreatureDescribeId(
                   &v6->design_config.txt_config_mgr.monster_config_mgr,
                   monster_id);
  std::shared_ptr<Config>::~shared_ptr(&v14);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>((std::string *const)(v3 + 32), "Unkonwn", &__a);
  std::allocator<char>::~allocator(&__a);
  if ( std::operator!=<Creature>(0LL, p_killer_ptr) )
  {
    v7 = (unsigned __int64)std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_killer_ptr);
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      v7 = __asan_report_load8(v7);
    v8 = *(void (__fastcall ***)(common::milog::MiLogStream *, unsigned __int64))v7;
    if ( *(_BYTE *)((*(_QWORD *)v7 >> 3) + 0x7FFF8000LL) )
      v7 = __asan_report_load8(*(_QWORD *)v7);
    (*v8)(&v15, v7);
    std::string::operator=(v3 + 32, &v15);
    std::string::~string(&v15);
  }
  common::milog::MiLogStream::create(
    &v15,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/watcher/player_watcher_comp.cpp",
    "triggerMpKillMonsterNum",
    1466);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Uid = Player::getUid(this->player_);
  v10 = (const char *)std::string::c_str(v3 + 32);
  common::milog::MiLogStream::operator()(
    &v15,
    "%s killed monster[%u] of type[%u] in MP. self[%u].",
    v10,
    monster_id,
    describel_id,
    Uid);
  common::milog::MiLogStream::~MiLogStream(&v15);
  MpKillMonsterNumEvent::MpKillMonsterNumEvent((MpKillMonsterNumEvent *const)&v15, describel_id, monster_id);
  PlayerWatcherComp::onBaseEvent(this, (const BaseEvent *)&v15);
  MpKillMonsterNumEvent::~MpKillMonsterNumEvent((MpKillMonsterNumEvent *const)&v15);
  std::string::~string((void *)(v3 + 32));
  if ( v16 == (char *)v3 )
  {
    *(_DWORD *)((v3 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 1473: range 000000001439831E-000000001439847E
void __cdecl PlayerWatcherComp::triggerMpAreaGatherTimes(
        PlayerWatcherComp *const this,
        uint32_t area_id,
        uint32_t gather_id)
{
  PlayerMpComp *MpComp; // rax
  uint32_t Uid; // eax
  common::milog::MiLogStream v6; // [rsp+10h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  MpComp = Player::getMpComp(this->player_);
  if ( PlayerMpComp::isInOtherWorldOrScene(MpComp) )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/watcher/player_watcher_comp.cpp",
      "triggerMpAreaGatherTimes",
      1479);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Uid = Player::getUid(this->player_);
    common::milog::MiLogStream::operator()(
      &v6,
      "player[%u] gathered gather_id[%u] in MP @ area[%u].",
      Uid,
      gather_id,
      area_id);
    common::milog::MiLogStream::~MiLogStream(&v6);
    MpAreaGatherTimesEvent::MpAreaGatherTimesEvent((MpAreaGatherTimesEvent *const)&v6, area_id);
    PlayerWatcherComp::onBaseEvent(this, (const BaseEvent *)&v6);
    MpAreaGatherTimesEvent::~MpAreaGatherTimesEvent((MpAreaGatherTimesEvent *const)&v6);
  }
};

// Line 1485: range 0000000014398480-0000000014398795
void __fastcall PlayerWatcherComp::tryUpdateMaxCriticalDamage(PlayerWatcherComp *const this, float critical_damage)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rcx
  Player *player; // rsi
  float v11; // xmm0_4
  common::milog::MiLogStream v12; // [rsp+10h] [rbp-C0h] BYREF
  char v13[160]; // [rsp+30h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 20 critical_damage:1484 64 24 10 event:1494";
  *(_QWORD *)(v2 + 16) = PlayerWatcherComp::tryUpdateMaxCriticalDamage;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  *(float *)(v2 + 48) = critical_damage;
  if ( *(_BYTE *)(((unsigned __int64)&this->record_value_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->record_value_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->record_value_);
  }
  if ( this->record_value_.max_critical_damage < *(float *)(v2 + 48) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/watcher/player_watcher_comp.cpp",
      "tryUpdateMaxCriticalDamage",
      1491);
    v5 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
           &v12,
           (const char (*)[33])"max_critical_damage change from:");
    v6 = common::milog::MiLogStream::operator<<<float,(float *)0>(v5, &this->record_value_.max_critical_damage);
    v7 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v6, (const char (*)[5])" to:");
    v8 = common::milog::MiLogStream::operator<<<float,(float *)0>(v7, (const float *)(v2 + 48));
    v9 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v8, (const char (*)[10])" player_:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    player = this->player_;
    operator<<(v9, player);
    common::milog::MiLogStream::~MiLogStream(&v12);
    v11 = *(float *)(v2 + 48);
    if ( *(_BYTE *)(((unsigned __int64)&this->record_value_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->record_value_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->record_value_, player, (_BYTE)this);
    }
    this->record_value_.max_critical_damage = v11;
    *(_QWORD *)(v2 + 64) = 0LL;
    *(_QWORD *)(v2 + 72) = 0LL;
    *(_QWORD *)(v2 + 80) = 0LL;
    *(_QWORD *)(v2 + 64) = &`vtable for'RecordMaxCriticalDamageUpdateEvent + 2;
    PlayerWatcherComp::onBaseEvent(this, (const BaseEvent *)(v2 + 64));
    RecordMaxCriticalDamageUpdateEvent::~RecordMaxCriticalDamageUpdateEvent((RecordMaxCriticalDamageUpdateEvent *const)(v2 + 64));
  }
  if ( v13 == (char *)v2 )
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

// Line 1499: range 0000000014398796-0000000014398AF7
void __fastcall PlayerWatcherComp::tryUpdateDashRecord(PlayerWatcherComp *const this, uint32_t dash_time)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  float v5; // xmm0_4
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rcx
  float v11; // xmm0_4
  bool v12; // dl
  common::milog::MiLogStream v13; // [rsp+10h] [rbp-C0h] BYREF
  char v14[160]; // [rsp+30h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 14 dash_time:1498 64 24 10 event:1508";
  *(_QWORD *)(v2 + 16) = PlayerWatcherComp::tryUpdateDashRecord;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  *(_DWORD *)(v2 + 48) = dash_time;
  v5 = (float)*(int *)(v2 + 48);
  if ( *(_BYTE *)(((unsigned __int64)&this->record_value_.max_dash_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->record_value_.max_dash_time >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->record_value_.max_dash_time);
  }
  if ( this->record_value_.max_dash_time < v5 )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/watcher/player_watcher_comp.cpp",
      "tryUpdateDashRecord",
      1505);
    v6 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
           &v13,
           (const char (*)[27])"max_dash_time change from:");
    v7 = common::milog::MiLogStream::operator<<<float,(float *)0>(v6, &this->record_value_.max_dash_time);
    v8 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v7, (const char (*)[5])" to:");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
    v10 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v9, (const char (*)[10])" player_:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v10, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v11 = (float)*(int *)(v2 + 48);
    v12 = *(_BYTE *)(((unsigned __int64)&this->record_value_.max_dash_time >> 3) + 0x7FFF8000) != 0
       && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->record_value_.max_dash_time >> 3)
                                                           + 0x7FFF8000);
    if ( v12 )
      __asan_report_store4(&this->record_value_.max_dash_time, (((_BYTE)this + 12) & 7u) + 3, v12);
    this->record_value_.max_dash_time = v11;
    *(_QWORD *)(v2 + 64) = 0LL;
    *(_QWORD *)(v2 + 72) = 0LL;
    *(_QWORD *)(v2 + 80) = 0LL;
    *(_QWORD *)(v2 + 64) = &`vtable for'RecordMaxDashTimeUpdateEvent + 2;
    PlayerWatcherComp::onBaseEvent(this, (const BaseEvent *)(v2 + 64));
    RecordMaxDashTimeUpdateEvent::~RecordMaxDashTimeUpdateEvent((RecordMaxDashTimeUpdateEvent *const)(v2 + 64));
  }
  if ( v14 == (char *)v2 )
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

// Line 1513: range 0000000014398AF8-0000000014399118
void __fastcall PlayerWatcherComp::tryUpdateFlyRecord(
        PlayerWatcherComp *const this,
        uint32_t fly_time,
        float fly_map_distance)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  PlayerSceneComp *SceneComp; // rax
  PlayerSceneComp *v7; // rax
  char v8; // al
  float v9; // xmm0_4
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rcx
  Player *player; // rsi
  float v16; // xmm0_4
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rcx
  float v22; // xmm0_4
  bool v23; // dl
  common::milog::MiLogStream v24; // [rsp+10h] [rbp-C0h] BYREF
  char v25[160]; // [rsp+30h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 13 fly_time:1512 48 4 21 fly_map_distance:1512 64 24 10 event:1534";
  *(_QWORD *)(v3 + 16) = PlayerWatcherComp::tryUpdateFlyRecord;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  *(_DWORD *)(v3 + 32) = fly_time;
  *(float *)(v3 + 48) = fly_map_distance;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  SceneComp = Player::getSceneComp(this->player_);
  if ( PlayerSceneComp::isInTransfer(SceneComp) )
    goto LABEL_10;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  v7 = Player::getSceneComp(this->player_);
  if ( PlayerSceneComp::getIsHasTransferMarkForSpeedCheck(v7) )
LABEL_10:
    v8 = 1;
  else
    v8 = 0;
  if ( !v8 )
  {
    v9 = (float)*(int *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)&this->record_value_.max_fly_time >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->record_value_.max_fly_time >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->record_value_.max_fly_time);
    }
    if ( v9 > this->record_value_.max_fly_time )
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/watcher/player_watcher_comp.cpp",
        "tryUpdateFlyRecord",
        1521);
      v10 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
              &v24,
              (const char (*)[26])"max_fly_time change from:");
      v11 = common::milog::MiLogStream::operator<<<float,(float *)0>(v10, &this->record_value_.max_fly_time);
      v12 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v11, (const char (*)[5])" to:");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 32));
      v14 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v13, (const char (*)[10])" player_:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      player = this->player_;
      operator<<(v14, player);
      common::milog::MiLogStream::~MiLogStream(&v24);
      v16 = (float)*(int *)(v3 + 32);
      if ( *(_BYTE *)(((unsigned __int64)&this->record_value_.max_fly_time >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->record_value_.max_fly_time >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->record_value_.max_fly_time, player, (_BYTE)this + 8);
      }
      this->record_value_.max_fly_time = v16;
      *(_QWORD *)(v3 + 64) = 0LL;
      *(_QWORD *)(v3 + 72) = 0LL;
      *(_QWORD *)(v3 + 80) = 0LL;
      *(_QWORD *)(v3 + 64) = &`vtable for'RecordMaxFlyTimeUpdateEvent + 2;
      PlayerWatcherComp::onBaseEvent(this, (const BaseEvent *)(v3 + 64));
      RecordMaxFlyTimeUpdateEvent::~RecordMaxFlyTimeUpdateEvent((RecordMaxFlyTimeUpdateEvent *const)(v3 + 64));
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->record_value_.max_fly_map_distance >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->record_value_.max_fly_map_distance >> 3)
                                                         + 0x7FFF8000) )
    {
      __asan_report_load4(&this->record_value_.max_fly_map_distance);
    }
    if ( *(float *)(v3 + 48) > this->record_value_.max_fly_map_distance )
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/watcher/player_watcher_comp.cpp",
        "tryUpdateFlyRecord",
        1531);
      v17 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
              &v24,
              (const char (*)[34])"max_fly_map_distance change from:");
      v18 = common::milog::MiLogStream::operator<<<float,(float *)0>(v17, &this->record_value_.max_fly_map_distance);
      v19 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v18, (const char (*)[5])" to:");
      v20 = common::milog::MiLogStream::operator<<<float,(float *)0>(v19, (const float *)(v3 + 48));
      v21 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v20, (const char (*)[10])" player_:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      operator<<(v21, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v24);
      v22 = *(float *)(v3 + 48);
      v23 = *(_BYTE *)(((unsigned __int64)&this->record_value_.max_fly_map_distance >> 3) + 0x7FFF8000) != 0
         && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->record_value_.max_fly_map_distance >> 3)
                                                            + 0x7FFF8000);
      if ( v23 )
        __asan_report_store4(&this->record_value_.max_fly_map_distance, (((_BYTE)this + 4) & 7u) + 3, v23);
      this->record_value_.max_fly_map_distance = v22;
      *(_QWORD *)(v3 + 64) = 0LL;
      *(_QWORD *)(v3 + 72) = 0LL;
      *(_QWORD *)(v3 + 80) = 0LL;
      *(_QWORD *)(v3 + 64) = &`vtable for'RecordMaxFlyMapDistanceUpdateEvent + 2;
      PlayerWatcherComp::onBaseEvent(this, (const BaseEvent *)(v3 + 64));
      RecordMaxFlyMapDistanceUpdateEvent::~RecordMaxFlyMapDistanceUpdateEvent((RecordMaxFlyMapDistanceUpdateEvent *const)(v3 + 64));
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
};

// Line 1540: range 000000001439911A-0000000014399184
void __cdecl PlayerWatcherComp::triggerDoneTowerUnhurt(
        PlayerWatcherComp *const this,
        uint32_t floor_index,
        uint32_t level_index)
{
  DoneTowerUnhurtEvent v3; // [rsp+10h] [rbp-30h] BYREF

  DoneTowerUnhurtEvent::DoneTowerUnhurtEvent(&v3, floor_index, level_index);
  PlayerWatcherComp::onBaseEvent(this, &v3);
  DoneTowerUnhurtEvent::~DoneTowerUnhurtEvent(&v3);
};

// Line 1545: range 0000000014399186-00000000143991F0
void __cdecl PlayerWatcherComp::triggerDoneTowerStars(
        PlayerWatcherComp *const this,
        uint32_t floor_index,
        uint32_t star_num)
{
  DoneTowerStarsEvent v3; // [rsp+10h] [rbp-30h] BYREF

  DoneTowerStarsEvent::DoneTowerStarsEvent(&v3, floor_index, star_num);
  PlayerWatcherComp::onBaseEvent(this, &v3);
  DoneTowerStarsEvent::~DoneTowerStarsEvent(&v3);
};

// Line 1551: range 00000000143991F2-000000001439926E
void __cdecl PlayerWatcherComp::triggerDoneTowerGadgetUnhurt(
        PlayerWatcherComp *const this,
        uint32_t floor_index,
        uint32_t level_index,
        const std::unordered_set<unsigned int> *gadget_set)
{
  DoneTowerGadgetUnhurtEvent v4; // [rsp+20h] [rbp-70h] BYREF

  DoneTowerGadgetUnhurtEvent::DoneTowerGadgetUnhurtEvent(&v4, gadget_set, floor_index, level_index);
  PlayerWatcherComp::onBaseEvent(this, &v4);
  DoneTowerGadgetUnhurtEvent::~DoneTowerGadgetUnhurtEvent(&v4);
};

// Line 1557: range 0000000014399270-00000000143993A0
void __cdecl PlayerWatcherComp::triggerDoneDungeonWithSameElementAvatars(
        PlayerWatcherComp *const this,
        const std::unordered_map<data::ElementType,unsigned int> *element_count_map)
{
  common::milog::MiLogStream *v2; // rcx
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream v4; // [rsp+10h] [rbp-80h] BYREF
  DoneDungeonWithSameElementAvatarsEvent v5; // [rsp+30h] [rbp-60h] BYREF

  common::milog::MiLogStream::create(
    &v4,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/watcher/player_watcher_comp.cpp",
    "triggerDoneDungeonWithSameElementAvatars",
    1559);
  v2 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v4, (const char (*)[10])" player_:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  v3 = operator<<(v2, this->player_);
  common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
    v3,
    (const char (*)[40])" done dungeon with same element avatar.");
  common::milog::MiLogStream::~MiLogStream(&v4);
  DoneDungeonWithSameElementAvatarsEvent::DoneDungeonWithSameElementAvatarsEvent(&v5, element_count_map);
  PlayerWatcherComp::onBaseEvent(this, &v5);
  DoneDungeonWithSameElementAvatarsEvent::~DoneDungeonWithSameElementAvatarsEvent(&v5);
};

// Line 1566: range 00000000143993A2-0000000014399630
void __fastcall PlayerWatcherComp::triggerDoneTreasureMapRegion(
        PlayerWatcherComp *const this,
        uint32_t activity_id,
        uint32_t schedule_id,
        uint32_t region_id)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // rcx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream v16; // [rsp+20h] [rbp-D0h] BYREF
  TreasureMapDoneRegionEvent v17; // [rsp+40h] [rbp-B0h] BYREF
  char v18[128]; // [rsp+70h] [rbp-80h] BYREF

  v4 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 4 16 activity_id:1565 48 4 16 schedule_id:1565 64 4 14 region_id:1565";
  *(_QWORD *)(v4 + 16) = PlayerWatcherComp::triggerDoneTreasureMapRegion;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -202116348;
  *(_DWORD *)(v4 + 32) = activity_id;
  *(_DWORD *)(v4 + 48) = schedule_id;
  *(_DWORD *)(v4 + 64) = region_id;
  common::milog::MiLogStream::create(
    &v16,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/watcher/player_watcher_comp.cpp",
    "triggerDoneTreasureMapRegion",
    1568);
  v7 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v16, (const char (*)[10])" player_:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  v8 = operator<<(v7, this->player_);
  v9 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
         v8,
         (const char (*)[26])" done treasure map region");
  v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 64));
  v11 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v10, (const char (*)[12])" @activity ");
  v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v4 + 32));
  v13 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v12, (const char (*)[15])" schedule_id: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v4 + 48));
  common::milog::MiLogStream::~MiLogStream(&v16);
  TreasureMapDoneRegionEvent::TreasureMapDoneRegionEvent(
    &v17,
    *(_DWORD *)(v4 + 32),
    *(_DWORD *)(v4 + 48),
    *(_DWORD *)(v4 + 64));
  PlayerWatcherComp::onBaseEvent(this, &v17);
  TreasureMapDoneRegionEvent::~TreasureMapDoneRegionEvent(&v17);
  if ( v18 == (char *)v4 )
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

// Line 1574: range 0000000014399632-00000000143998C0
void __fastcall PlayerWatcherComp::triggerDoneTreasureSeelieRegion(
        PlayerWatcherComp *const this,
        uint32_t activity_id,
        uint32_t schedule_id,
        uint32_t region_id)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // rcx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream v16; // [rsp+20h] [rbp-D0h] BYREF
  TreasureSeelieDoneRegionEvent v17; // [rsp+40h] [rbp-B0h] BYREF
  char v18[128]; // [rsp+70h] [rbp-80h] BYREF

  v4 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 4 16 activity_id:1573 48 4 16 schedule_id:1573 64 4 14 region_id:1573";
  *(_QWORD *)(v4 + 16) = PlayerWatcherComp::triggerDoneTreasureSeelieRegion;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -202116348;
  *(_DWORD *)(v4 + 32) = activity_id;
  *(_DWORD *)(v4 + 48) = schedule_id;
  *(_DWORD *)(v4 + 64) = region_id;
  common::milog::MiLogStream::create(
    &v16,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/watcher/player_watcher_comp.cpp",
    "triggerDoneTreasureSeelieRegion",
    1576);
  v7 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v16, (const char (*)[10])" player_:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  v8 = operator<<(v7, this->player_);
  v9 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
         v8,
         (const char (*)[26])" done treasure map region");
  v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 64));
  v11 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v10, (const char (*)[12])" @activity ");
  v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v4 + 32));
  v13 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v12, (const char (*)[15])" schedule_id: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v4 + 48));
  common::milog::MiLogStream::~MiLogStream(&v16);
  TreasureSeelieDoneRegionEvent::TreasureSeelieDoneRegionEvent(
    &v17,
    *(_DWORD *)(v4 + 32),
    *(_DWORD *)(v4 + 48),
    *(_DWORD *)(v4 + 64));
  PlayerWatcherComp::onBaseEvent(this, &v17);
  TreasureSeelieDoneRegionEvent::~TreasureSeelieDoneRegionEvent(&v17);
  if ( v18 == (char *)v4 )
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

// Line 1582: range 00000000143998C2-0000000014399B17
void __fastcall PlayerWatcherComp::tryAddWatcherProgress(
        PlayerWatcherComp *const this,
        uint32_t watcher_id,
        uint32_t add_progress)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rcx
  BaseWatcher *v9; // rax
  common::milog::MiLogStream v11; // [rsp+10h] [rbp-B0h] BYREF
  char v12[144]; // [rsp+30h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 15 watcher_id:1581 64 16 16 watcher_ptr:1583";
  *(_QWORD *)(v3 + 16) = PlayerWatcherComp::tryAddWatcherProgress;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = watcher_id;
  PlayerWatcherComp::findWatcher((PlayerWatcherComp *const)(v3 + 64), (__int64)this, *(_DWORD *)(v3 + 48));
  if ( std::operator==<BaseWatcher>(0LL, (const std::shared_ptr<BaseWatcher> *)(v3 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/watcher/player_watcher_comp.cpp",
      "tryAddWatcherProgress",
      1586);
    v6 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v11, (const char (*)[12])"watcher_id:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
    v8 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v7, (const char (*)[20])" not found player_:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v8, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v11);
  }
  else
  {
    v9 = std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    BaseWatcher::addProgress(v9, add_progress);
  }
  std::shared_ptr<BaseWatcher>::~shared_ptr((std::shared_ptr<BaseWatcher> *const)(v3 + 64));
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
};

// Line 1594: range 0000000014399B18-0000000014399BED
void __fastcall PlayerWatcherComp::recordCurAvatarAbilityState(
        PlayerWatcherComp *const this,
        data::AbilityState ability_state)
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
  *(_QWORD *)(v2 + 8) = "1 32 8 18 ability_state:1593";
  *(_QWORD *)(v2 + 16) = PlayerWatcherComp::recordCurAvatarAbilityState;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(_QWORD *)(v2 + 32) = ability_state;
  std::set<data::AbilityState>::insert(
    &this->cur_avatar_ability_state_in_last_time_interval_set_,
    (const std::set<data::AbilityState>::value_type *)(v2 + 32));
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

// Line 1599: range 0000000014399BEE-000000001439A095
void __cdecl PlayerWatcherComp::triggerAndResetStatusInLastTimeInterval(PlayerWatcherComp *const this, uint64_t now_ms)
{
  std::set<data::AbilityState> *v2; // rax
  TimeIntervalFlyEvent v3; // [rsp+10h] [rbp-B0h] BYREF
  std::set<data::AbilityState> p_ability_state_set; // [rsp+30h] [rbp-90h] BYREF
  TimeIntervalAbilityStateEvent v5; // [rsp+60h] [rbp-60h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->last_trigger_time_interval_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->last_trigger_time_interval_time_ms_);
  if ( now_ms >= this->last_trigger_time_interval_time_ms_ + 1000 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->last_trigger_time_interval_time_ms_ >> 3) + 0x7FFF8000) )
      __asan_report_store8(&this->last_trigger_time_interval_time_ms_, now_ms);
    this->last_trigger_time_interval_time_ms_ = now_ms;
    if ( PlayerWatcherComp::getIsFlyInLastTimeInterval(this) )
    {
      memset(&v3, 0, sizeof(v3));
      TimeIntervalFlyEvent::TimeIntervalFlyEvent(&v3);
      PlayerWatcherComp::onBaseEvent(this, &v3);
      TimeIntervalFlyEvent::~TimeIntervalFlyEvent(&v3);
      PlayerWatcherComp::setIsFlyInLastTimeInterval(this, 0);
    }
    if ( PlayerWatcherComp::getIsDashInLastTimeInterval(this) )
    {
      memset(&v3, 0, sizeof(v3));
      TimeIntervalDashEvent::TimeIntervalDashEvent((TimeIntervalDashEvent *const)&v3);
      PlayerWatcherComp::onBaseEvent(this, &v3);
      TimeIntervalDashEvent::~TimeIntervalDashEvent((TimeIntervalDashEvent *const)&v3);
      PlayerWatcherComp::setIsDashInLastTimeInterval(this, 0);
    }
    if ( PlayerWatcherComp::getIsClimbInLastTimeInterval(this) )
    {
      memset(&v3, 0, sizeof(v3));
      TimeIntervalClimbEvent::TimeIntervalClimbEvent((TimeIntervalClimbEvent *const)&v3);
      PlayerWatcherComp::onBaseEvent(this, &v3);
      TimeIntervalClimbEvent::~TimeIntervalClimbEvent((TimeIntervalClimbEvent *const)&v3);
      PlayerWatcherComp::setIsClimbInLastTimeInterval(this, 0);
    }
    if ( PlayerWatcherComp::getIsHurtInLastTimeInterval(this) )
    {
      memset(&v3, 0, sizeof(v3));
      TimeIntervalHurtEvent::TimeIntervalHurtEvent((TimeIntervalHurtEvent *const)&v3);
      PlayerWatcherComp::onBaseEvent(this, &v3);
      TimeIntervalHurtEvent::~TimeIntervalHurtEvent((TimeIntervalHurtEvent *const)&v3);
      PlayerWatcherComp::setIsHurtInLastTimeInterval(this, 0);
    }
    if ( !std::unordered_set<std::string>::empty(&this->hurt_ability_name_set_) )
    {
      memset(&v3, 0, sizeof(v3));
      TimeIntervalHurtByAbilityEvent::TimeIntervalHurtByAbilityEvent((TimeIntervalHurtByAbilityEvent *const)&v3);
      PlayerWatcherComp::onBaseEvent(this, &v3);
      TimeIntervalHurtByAbilityEvent::~TimeIntervalHurtByAbilityEvent((TimeIntervalHurtByAbilityEvent *const)&v3);
      std::unordered_set<std::string>::clear(&this->hurt_ability_name_set_);
    }
    if ( !std::set<data::AbilityState>::empty(&this->cur_avatar_ability_state_in_last_time_interval_set_) )
    {
      v2 = std::move<std::set<data::AbilityState> &>(&this->cur_avatar_ability_state_in_last_time_interval_set_);
      std::set<data::AbilityState>::set(&p_ability_state_set, v2);
      TimeIntervalAbilityStateEvent::TimeIntervalAbilityStateEvent(&v5, &p_ability_state_set);
      PlayerWatcherComp::onBaseEvent(this, &v5);
      TimeIntervalAbilityStateEvent::~TimeIntervalAbilityStateEvent(&v5);
      std::set<data::AbilityState>::~set(&p_ability_state_set);
      std::set<data::AbilityState>::clear(&this->cur_avatar_ability_state_in_last_time_interval_set_);
    }
  }
};

// Line 1640: range 000000001439A096-000000001439A79F
void __cdecl PlayerWatcherComp::initAbilityGroup(PlayerWatcherComp *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r14
  const WatcherExcelConfigMgr *p_watcher_config_mgr; // rdi
  PlayerAbilityGroupComp *v5; // r15
  char *j; // rbx
  PlayerAbilityGroupComp *AbilityGroupComp; // r15
  char *i; // rbx
  PlayerAbilityGroupComp *v9; // rax
  std::initializer_list<std::string > __l; // [rsp+0h] [rbp-1A0h]
  std::initializer_list<std::string > v11; // [rsp+10h] [rbp-190h]
  std::initializer_list<unsigned int> v12; // [rsp+20h] [rbp-180h]
  std::allocator<unsigned int> v14; // [rsp+42h] [rbp-15Eh] BYREF
  std::allocator<std::string > __a; // [rsp+43h] [rbp-15Dh] BYREF
  int v16; // [rsp+44h] [rbp-15Ch] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseWatcher>>::iterator __for_begin; // [rsp+48h] [rbp-158h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseWatcher>>::iterator __for_end; // [rsp+50h] [rbp-150h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseWatcher>> *__for_range; // [rsp+58h] [rbp-148h]
  std::pair<unsigned int const,std::shared_ptr<BaseWatcher> > *__in; // [rsp+60h] [rbp-140h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<BaseWatcher> > >::type *watcher_id; // [rsp+68h] [rbp-138h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<BaseWatcher> > >::type *watcher_ptr; // [rsp+70h] [rbp-130h]
  const data::WatcherConfig *config_ptr; // [rsp+78h] [rbp-128h]
  std::shared_ptr<Config> v24; // [rsp+80h] [rbp-120h] BYREF
  std::vector<unsigned int> feature_tag_vec; // [rsp+90h] [rbp-110h] BYREF
  std::vector<std::string> group_vec; // [rsp+B0h] [rbp-F0h] BYREF
  char v27[32]; // [rsp+D0h] [rbp-D0h] BYREF
  char v28[176]; // [rsp+F0h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 48 40 10 param:1651";
  *(_QWORD *)(v1 + 16) = PlayerWatcherComp::initAbilityGroup;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862722] = -218103808;
  v3[536862723] = -202116109;
  if ( !PlayerWatcherComp::getIsAbilityGroupInited(this) )
  {
    __for_range = &this->watcher_map_;
    __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseWatcher>>::begin(&this->watcher_map_)._M_cur;
    __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseWatcher>>::end(&this->watcher_map_)._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseWatcher>>,false>(
              &__for_begin,
              &__for_end) )
    {
      __in = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseWatcher>>,false,false>::operator*(&__for_begin);
      watcher_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseWatcher>>(__in);
      watcher_ptr = std::get<1ul,unsigned int const,std::shared_ptr<BaseWatcher>>(__in);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v24);
      p_watcher_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v24)->design_config.txt_config_mgr.watcher_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)watcher_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)watcher_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)watcher_id >> 3) + 0x7FFF8000) )
      {
        p_watcher_config_mgr = (const WatcherExcelConfigMgr *)watcher_id;
        __asan_report_load4(watcher_id);
      }
      config_ptr = WatcherExcelConfigMgr::findWatcherConfig(p_watcher_config_mgr, *watcher_id);
      std::shared_ptr<Config>::~shared_ptr(&v24);
      if ( config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&config_ptr->trigger_config.trigger_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&config_ptr->trigger_config.trigger_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&config_ptr->trigger_config.trigger_type);
        }
        if ( config_ptr->trigger_config.trigger_type == TRIGGER_COMBAT_CONFIG_COMMON )
        {
          tryAnyCast<CombatConfigCommonParam>((CombatConfigCommonParam *)(v1 + 48), &config_ptr->param);
          if ( std::operator!=<char>((const std::string *)(v1 + 48), byte_252BEFC0) )
          {
            if ( *(_DWORD *)(v1 + 80) )
            {
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->player_);
              AbilityGroupComp = Player::getAbilityGroupComp(this->player_);
              std::string::basic_string(v27, v1 + 48);
              v11._M_array = (std::initializer_list<std::string >::iterator)v27;
              v11._M_len = 1LL;
              std::allocator<std::string>::allocator(&__a);
              std::vector<std::string>::vector(&group_vec, v11, &__a);
              v16 = *(_DWORD *)(v1 + 80);
              v12._M_array = (std::initializer_list<unsigned int>::iterator)&v16;
              v12._M_len = 1LL;
              std::allocator<unsigned int>::allocator(&v14);
              std::vector<unsigned int>::vector(&feature_tag_vec, v12, &v14);
              PlayerAbilityGroupComp::addFeatureTagFilterAbilityGroup(AbilityGroupComp, &feature_tag_vec, &group_vec, 1);
              std::vector<unsigned int>::~vector(&feature_tag_vec);
              std::allocator<unsigned int>::~allocator(&v14);
              std::vector<std::string>::~vector(&group_vec);
              std::allocator<std::string>::~allocator(&__a);
              for ( i = v28; i != v27; std::string::~string(i) )
                i -= 32;
            }
            else
            {
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->player_);
              v5 = Player::getAbilityGroupComp(this->player_);
              std::string::basic_string(v27, v1 + 48);
              __l._M_array = (std::initializer_list<std::string >::iterator)v27;
              __l._M_len = 1LL;
              std::allocator<std::string>::allocator(&__a);
              std::vector<std::string>::vector(&group_vec, __l, &__a);
              PlayerAbilityGroupComp::addNoneFilterAbilityGroup(v5, &group_vec, 1);
              std::vector<std::string>::~vector(&group_vec);
              std::allocator<std::string>::~allocator(&__a);
              for ( j = v28; j != v27; std::string::~string(j) )
                j -= 32;
            }
          }
          CombatConfigCommonParam::~CombatConfigCommonParam((CombatConfigCommonParam *const)(v1 + 48));
        }
      }
      std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseWatcher>>,false,false>::operator++(&__for_begin);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    v9 = Player::getAbilityGroupComp(this->player_);
    PlayerAbilityGroupComp::tryRefreshAbilityGroup(v9);
    PlayerWatcherComp::setIsAbilityGroupInited(this, 1);
  }
  if ( v28 == (char *)v1 )
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

// Line 1669: range 000000001439A7A0-000000001439AD54
void __cdecl PlayerWatcherComp::processAbilityGroupOnAddWatcher(
        PlayerWatcherComp *const this,
        BaseWatcherPtr *p_watcher_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  PlayerAbilityGroupComp *AbilityGroupComp; // r14
  char *j; // r14
  char *i; // r14
  PlayerAbilityGroupComp *v9; // rax
  std::initializer_list<std::string > __l; // [rsp+10h] [rbp-150h]
  PlayerAbilityGroupComp *__la; // [rsp+10h] [rbp-150h]
  std::initializer_list<std::string > v12; // [rsp+20h] [rbp-140h]
  std::allocator<unsigned int> v13; // [rsp+42h] [rbp-11Eh] BYREF
  std::allocator<std::string > __a; // [rsp+43h] [rbp-11Dh] BYREF
  std::initializer_list<unsigned int> v15; // [rsp+44h] [rbp-11Ch] BYREF
  std::vector<std::string> group_vec; // [rsp+70h] [rbp-F0h] BYREF
  char v17[32]; // [rsp+90h] [rbp-D0h] BYREF
  char v18[176]; // [rsp+B0h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 48 40 10 param:1679";
  *(_QWORD *)(v2 + 16) = PlayerWatcherComp::processAbilityGroupOnAddWatcher;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  if ( !std::operator==<BaseWatcher>(p_watcher_ptr, 0LL) )
  {
    v5 = std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_watcher_ptr);
    *(std::initializer_list<unsigned int>::iterator *)((char *)&v15._M_array + 4) = (std::initializer_list<unsigned int>::iterator)BaseWatcher::getConfig(v5);
    if ( *(std::initializer_list<unsigned int>::iterator *)((char *)&v15._M_array + 4) )
    {
      if ( *(_BYTE *)(((unsigned __int64)(*(std::initializer_list<unsigned int>::iterator *)((char *)&v15._M_array + 4)
                                        + 6) >> 3)
                    + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)(*(std::initializer_list<unsigned int>::iterator *)((char *)&v15._M_array + 4)
                                        + 6) >> 3)
                    + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(*(std::initializer_list<unsigned int>::iterator *)((char *)&v15._M_array + 4) + 6);
      }
      if ( (*(_DWORD **)((char *)&v15._M_array + 4))[6] == 1 )
      {
        tryAnyCast<CombatConfigCommonParam>(
          (CombatConfigCommonParam *)(v2 + 48),
          (const std::any *)(*(std::initializer_list<unsigned int>::iterator *)((char *)&v15._M_array + 4) + 22));
        if ( !std::operator==<char>((const std::string *)(v2 + 48), byte_252BEFC0) )
        {
          if ( *(_DWORD *)(v2 + 80) )
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            __la = Player::getAbilityGroupComp(this->player_);
            std::string::basic_string(v17, v2 + 48);
            v12._M_array = (std::initializer_list<std::string >::iterator)v17;
            v12._M_len = 1LL;
            std::allocator<std::string>::allocator(&__a);
            std::vector<std::string>::vector(&group_vec, v12, &__a);
            LODWORD(v15._M_array) = *(_DWORD *)(v2 + 80);
            std::allocator<unsigned int>::allocator(&v13);
            std::vector<unsigned int>::vector(
              (std::vector<unsigned int> *const)((char *)&v15._M_len + 4),
              (std::initializer_list<unsigned int>)__PAIR128__(1LL, &v15),
              &v13);
            PlayerAbilityGroupComp::addFeatureTagFilterAbilityGroup(
              __la,
              (const std::vector<unsigned int> *)((char *)&v15._M_len + 4),
              &group_vec,
              1);
            std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)((char *)&v15._M_len + 4));
            std::allocator<unsigned int>::~allocator(&v13);
            std::vector<std::string>::~vector(&group_vec);
            std::allocator<std::string>::~allocator(&__a);
            for ( i = v18; i != v17; std::string::~string(i) )
              i -= 32;
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            AbilityGroupComp = Player::getAbilityGroupComp(this->player_);
            std::string::basic_string(v17, v2 + 48);
            __l._M_array = (std::initializer_list<std::string >::iterator)v17;
            __l._M_len = 1LL;
            std::allocator<std::string>::allocator(&__a);
            std::vector<std::string>::vector(&group_vec, __l, &__a);
            PlayerAbilityGroupComp::addNoneFilterAbilityGroup(AbilityGroupComp, &group_vec, 1);
            std::vector<std::string>::~vector(&group_vec);
            std::allocator<std::string>::~allocator(&__a);
            for ( j = v18; j != v17; std::string::~string(j) )
              j -= 32;
          }
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          v9 = Player::getAbilityGroupComp(this->player_);
          PlayerAbilityGroupComp::tryRefreshAbilityGroup(v9);
        }
        CombatConfigCommonParam::~CombatConfigCommonParam((CombatConfigCommonParam *const)(v2 + 48));
      }
    }
  }
  if ( v18 == (char *)v2 )
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

// Line 1697: range 000000001439AD56-000000001439B30E
void __cdecl PlayerWatcherComp::processAbilityGroupOnDelWatcher(
        PlayerWatcherComp *const this,
        BaseWatcherPtr *p_watcher_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  PlayerAbilityGroupComp *AbilityGroupComp; // r14
  char *j; // r14
  char *i; // r14
  PlayerAbilityGroupComp *v9; // rax
  std::initializer_list<std::string > __l; // [rsp+10h] [rbp-150h]
  PlayerAbilityGroupComp *__la; // [rsp+10h] [rbp-150h]
  std::initializer_list<std::string > v12; // [rsp+20h] [rbp-140h]
  std::allocator<unsigned int> v13; // [rsp+42h] [rbp-11Eh] BYREF
  std::allocator<std::string > __a; // [rsp+43h] [rbp-11Dh] BYREF
  std::initializer_list<unsigned int> v15; // [rsp+44h] [rbp-11Ch] BYREF
  std::vector<std::string> group_vec; // [rsp+70h] [rbp-F0h] BYREF
  char v17[32]; // [rsp+90h] [rbp-D0h] BYREF
  char v18[176]; // [rsp+B0h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 48 40 10 param:1707";
  *(_QWORD *)(v2 + 16) = PlayerWatcherComp::processAbilityGroupOnDelWatcher;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  if ( !std::operator==<BaseWatcher>(p_watcher_ptr, 0LL) )
  {
    v5 = std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_watcher_ptr);
    *(std::initializer_list<unsigned int>::iterator *)((char *)&v15._M_array + 4) = (std::initializer_list<unsigned int>::iterator)BaseWatcher::getConfig(v5);
    if ( *(std::initializer_list<unsigned int>::iterator *)((char *)&v15._M_array + 4) )
    {
      if ( *(_BYTE *)(((unsigned __int64)(*(std::initializer_list<unsigned int>::iterator *)((char *)&v15._M_array + 4)
                                        + 6) >> 3)
                    + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)(*(std::initializer_list<unsigned int>::iterator *)((char *)&v15._M_array + 4)
                                        + 6) >> 3)
                    + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(*(std::initializer_list<unsigned int>::iterator *)((char *)&v15._M_array + 4) + 6);
      }
      if ( (*(_DWORD **)((char *)&v15._M_array + 4))[6] == 1 )
      {
        tryAnyCast<CombatConfigCommonParam>(
          (CombatConfigCommonParam *)(v2 + 48),
          (const std::any *)(*(std::initializer_list<unsigned int>::iterator *)((char *)&v15._M_array + 4) + 22));
        if ( !std::operator==<char>((const std::string *)(v2 + 48), byte_252BEFC0) )
        {
          if ( *(_DWORD *)(v2 + 80) )
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            __la = Player::getAbilityGroupComp(this->player_);
            std::string::basic_string(v17, v2 + 48);
            v12._M_array = (std::initializer_list<std::string >::iterator)v17;
            v12._M_len = 1LL;
            std::allocator<std::string>::allocator(&__a);
            std::vector<std::string>::vector(&group_vec, v12, &__a);
            LODWORD(v15._M_array) = *(_DWORD *)(v2 + 80);
            std::allocator<unsigned int>::allocator(&v13);
            std::vector<unsigned int>::vector(
              (std::vector<unsigned int> *const)((char *)&v15._M_len + 4),
              (std::initializer_list<unsigned int>)__PAIR128__(1LL, &v15),
              &v13);
            PlayerAbilityGroupComp::delFeatureTagFilterAbilityGroup(
              __la,
              (const std::vector<unsigned int> *)((char *)&v15._M_len + 4),
              &group_vec);
            std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)((char *)&v15._M_len + 4));
            std::allocator<unsigned int>::~allocator(&v13);
            std::vector<std::string>::~vector(&group_vec);
            std::allocator<std::string>::~allocator(&__a);
            for ( i = v18; i != v17; std::string::~string(i) )
              i -= 32;
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            AbilityGroupComp = Player::getAbilityGroupComp(this->player_);
            std::string::basic_string(v17, v2 + 48);
            __l._M_array = (std::initializer_list<std::string >::iterator)v17;
            __l._M_len = 1LL;
            std::allocator<std::string>::allocator(&__a);
            std::vector<std::string>::vector(&group_vec, __l, &__a);
            PlayerAbilityGroupComp::delNoneFilterAbilityGroup(AbilityGroupComp, &group_vec);
            std::vector<std::string>::~vector(&group_vec);
            std::allocator<std::string>::~allocator(&__a);
            for ( j = v18; j != v17; std::string::~string(j) )
              j -= 32;
          }
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          v9 = Player::getAbilityGroupComp(this->player_);
          PlayerAbilityGroupComp::tryRefreshAbilityGroup(v9);
        }
        CombatConfigCommonParam::~CombatConfigCommonParam((CombatConfigCommonParam *const)(v2 + 48));
      }
    }
  }
  if ( v18 == (char *)v2 )
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

// Line 1724: range 000000001439B310-000000001439B35B
void __cdecl PlayerWatcherComp::tryRecordCurAvatarHurtByAbility(
        PlayerWatcherComp *const this,
        const std::string *ability_name)
{
  if ( common::tools::MiscUtils::isContains<std::unordered_set<std::string> const,std::string>(
         &CurAvatarHurtBySpecificAbilityWatcherParam::ALLOW_ABILITY_NAME_SET[abi:cxx11],
         ability_name) )
  {
    std::unordered_set<std::string>::insert(&this->hurt_ability_name_set_, ability_name);
  }
};

// Line 1734: range 000000001439B35C-000000001439B3D0
void __cdecl PlayerWatcherComp::triggerHomeAvatarFetterGet(PlayerWatcherComp *const this)
{
  HomeAvatarFetterGetEvent v1; // [rsp+10h] [rbp-30h] BYREF

  memset(&v1, 0, sizeof(v1));
  HomeAvatarFetterGetEvent::HomeAvatarFetterGetEvent(&v1);
  PlayerWatcherComp::onBaseEvent(this, &v1);
  HomeAvatarFetterGetEvent::~HomeAvatarFetterGetEvent(&v1);
};

// Line 1739: range 000000001439B3D2-000000001439B446
void __cdecl PlayerWatcherComp::triggerHomeDoPlant(PlayerWatcherComp *const this)
{
  HomeDoPlantEvent v1; // [rsp+10h] [rbp-30h] BYREF

  memset(&v1, 0, sizeof(v1));
  HomeDoPlantEvent::HomeDoPlantEvent(&v1);
  PlayerWatcherComp::onBaseEvent(this, &v1);
  HomeDoPlantEvent::~HomeDoPlantEvent(&v1);
};

// Line 1744: range 000000001439B448-000000001439B4AC
void __cdecl PlayerWatcherComp::triggerHomeFieldGather(PlayerWatcherComp *const this, uint32_t furniture_id)
{
  HomeFieldGatherEvent v2; // [rsp+10h] [rbp-30h] BYREF

  HomeFieldGatherEvent::HomeFieldGatherEvent(&v2, furniture_id);
  PlayerWatcherComp::onBaseEvent(this, &v2);
  HomeFieldGatherEvent::~HomeFieldGatherEvent(&v2);
};

// Line 1749: range 000000001439B4AE-000000001439B512
void __cdecl PlayerWatcherComp::triggerLunaRiteSearch(PlayerWatcherComp *const this, uint32_t area_id)
{
  LunaRiteSearchEvent v2; // [rsp+10h] [rbp-30h] BYREF

  LunaRiteSearchEvent::LunaRiteSearchEvent(&v2, area_id);
  PlayerWatcherComp::onBaseEvent(this, &v2);
  LunaRiteSearchEvent::~LunaRiteSearchEvent(&v2);
};

// Line 1754: range 000000001439B514-000000001439B588
void __cdecl PlayerWatcherComp::triggerPlaceMiracleRing(PlayerWatcherComp *const this)
{
  PlaceMiracleRingEvent v1; // [rsp+10h] [rbp-30h] BYREF

  memset(&v1, 0, sizeof(v1));
  PlaceMiracleRingEvent::PlaceMiracleRingEvent(&v1);
  PlayerWatcherComp::onBaseEvent(this, &v1);
  PlaceMiracleRingEvent::~PlaceMiracleRingEvent(&v1);
};

// Line 1759: range 000000001439B58A-000000001439B799
void __fastcall PlayerWatcherComp::triggerMiracleRingDeliverItem(PlayerWatcherComp *const this, uint32_t cnt)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rcx
  MiracleRingDeliverItemEvent v8; // [rsp+10h] [rbp-A0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "1 32 4 8 cnt:1758";
  *(_QWORD *)(v2 + 16) = PlayerWatcherComp::triggerMiracleRingDeliverItem;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = cnt;
  common::milog::MiLogStream::create(
    &v9,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/watcher/player_watcher_comp.cpp",
    "triggerMiracleRingDeliverItem",
    1761);
  v5 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
         &v9,
         (const char (*)[40])"triggerMiracleRingDeliverItem. new cnt:");
  v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
  v7 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v6, (const char (*)[10])" player_:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  operator<<(v7, this->player_);
  common::milog::MiLogStream::~MiLogStream(&v9);
  memset(&v8, 0, sizeof(v8));
  MiracleRingDeliverItemEvent::MiracleRingDeliverItemEvent(&v8);
  PlayerWatcherComp::onBaseEvent(this, &v8);
  MiracleRingDeliverItemEvent::~MiracleRingDeliverItemEvent(&v8);
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

// Line 1767: range 000000001439B79A-000000001439B9A9
void __fastcall PlayerWatcherComp::triggerMiracleRingTakeReward(PlayerWatcherComp *const this, uint32_t cnt)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rcx
  MiracleRingTakeRewardEvent v8; // [rsp+10h] [rbp-A0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "1 32 4 8 cnt:1766";
  *(_QWORD *)(v2 + 16) = PlayerWatcherComp::triggerMiracleRingTakeReward;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = cnt;
  common::milog::MiLogStream::create(
    &v9,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/watcher/player_watcher_comp.cpp",
    "triggerMiracleRingTakeReward",
    1769);
  v5 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
         &v9,
         (const char (*)[39])"triggerMiracleRingTakeReward. new cnt:");
  v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
  v7 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v6, (const char (*)[10])" player_:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  operator<<(v7, this->player_);
  common::milog::MiLogStream::~MiLogStream(&v9);
  memset(&v8, 0, sizeof(v8));
  MiracleRingTakeRewardEvent::MiracleRingTakeRewardEvent(&v8);
  PlayerWatcherComp::onBaseEvent(this, &v8);
  MiracleRingTakeRewardEvent::~MiracleRingTakeRewardEvent(&v8);
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

// Line 1775: range 000000001439B9AA-000000001439BAF8
void __cdecl PlayerWatcherComp::triggerMechanicusBattleEnd(
        PlayerWatcherComp *const this,
        const MechanicusBattleEndEvent *event)
{
  common::milog::MiLogStream *v2; // rcx
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rcx
  common::milog::MiLogStream v7; // [rsp+10h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v7,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/watcher/player_watcher_comp.cpp",
    "triggerMechanicusBattleEnd",
    1776);
  v2 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
         &v7,
         (const char (*)[24])"[MECH WATCHER]: is_succ");
  if ( *(char *)(((unsigned __int64)&event->is_succ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&event->is_succ);
  v3 = common::milog::MiLogStream::operator<<(v2, event->is_succ);
  v4 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v3, (const char (*)[15])" end_gear_num:");
  v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &event->end_gear_num);
  v6 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v5, (const char (*)[10])" @player:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  operator<<(v6, this->player_);
  common::milog::MiLogStream::~MiLogStream(&v7);
  PlayerWatcherComp::onBaseEvent(this, event);
};

// Line 1781: range 000000001439BAFA-000000001439BB1F
void __cdecl PlayerWatcherComp::triggerSeaLampMiniQuestFinish(
        PlayerWatcherComp *const this,
        const SeaLampMiniQuestFinishEvent *event)
{
  PlayerWatcherComp::onBaseEvent(this, event);
};

// Line 1786: range 000000001439BB20-000000001439BC38
void __cdecl PlayerWatcherComp::triggerMechanicusBattleScore(
        PlayerWatcherComp *const this,
        const MechanicusBattleScoreEvent *event)
{
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rcx
  common::milog::MiLogStream v7; // [rsp+10h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v7,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/watcher/player_watcher_comp.cpp",
    "triggerMechanicusBattleScore",
    1787);
  v2 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
         &v7,
         (const char (*)[24])"[MECH WATCHER]: dungeon");
  v3 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &event->dungeon_id);
  v4 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v3, (const char (*)[8])" score:");
  v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &event->settle_points);
  v6 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v5, (const char (*)[10])" @player:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  operator<<(v6, this->player_);
  common::milog::MiLogStream::~MiLogStream(&v7);
  PlayerWatcherComp::onBaseEvent(this, event);
};

// Line 1792: range 000000001439BC3A-000000001439BCF6
void __cdecl PlayerWatcherComp::triggerSaveMainCoop(
        PlayerWatcherComp *const this,
        uint32_t main_coop_id,
        const std::vector<unsigned int> *save_point_vec)
{
  MainCoopSavePointAndEvent v4; // [rsp+20h] [rbp-50h] BYREF

  MainCoopSavePointAndEvent::MainCoopSavePointAndEvent(&v4, main_coop_id, save_point_vec);
  PlayerWatcherComp::onBaseEvent(this, &v4);
  MainCoopSavePointAndEvent::~MainCoopSavePointAndEvent(&v4);
  MainCoopSavePointOrEvent::MainCoopSavePointOrEvent((MainCoopSavePointOrEvent *const)&v4, main_coop_id, save_point_vec);
  PlayerWatcherComp::onBaseEvent(this, &v4);
  MainCoopSavePointOrEvent::~MainCoopSavePointOrEvent((MainCoopSavePointOrEvent *const)&v4);
};

// Line 1798: range 000000001439BCF8-000000001439BD1D
void __cdecl PlayerWatcherComp::triggerMainCoopSetVar(
        PlayerWatcherComp *const this,
        const MainCoopVarEqualEvent *event)
{
  PlayerWatcherComp::onBaseEvent(this, event);
};

// Line 1803: range 000000001439BD1E-000000001439C06F
void __cdecl PlayerWatcherComp::triggerObtainWood(
        PlayerWatcherComp *const this,
        const std::vector<ItemParam> *item_param_vec,
        const std::vector<ItemParam> *extra_item_param_vec)
{
  MaterialExcelConfigMgr *p_material_config_mgr; // rcx
  bool v4; // bl
  MaterialExcelConfigMgr *v5; // rcx
  bool v6; // bl
  unsigned int count; // [rsp+2Ch] [rbp-74h]
  std::vector<ItemParam>::const_iterator __for_begin; // [rsp+30h] [rbp-70h] BYREF
  std::vector<ItemParam>::const_iterator __for_end; // [rsp+38h] [rbp-68h] BYREF
  const std::vector<ItemParam> *__for_range; // [rsp+40h] [rbp-60h]
  const std::vector<ItemParam> *__for_range_0; // [rsp+48h] [rbp-58h]
  const ItemParam *item_param_0; // [rsp+50h] [rbp-50h]
  const ItemParam *item_param; // [rsp+58h] [rbp-48h]
  std::shared_ptr<Config> v15; // [rsp+60h] [rbp-40h] BYREF
  ObtainWoodEvent v16; // [rsp+70h] [rbp-30h] BYREF

  count = 0;
  __for_range = item_param_vec;
  __for_begin._M_current = std::vector<ItemParam>::begin(item_param_vec)._M_current;
  __for_end._M_current = std::vector<ItemParam>::end(item_param_vec)._M_current;
  while ( __gnu_cxx::operator!=<ItemParam const*,std::vector<ItemParam>>(&__for_begin, &__for_end) )
  {
    item_param = __gnu_cxx::__normal_iterator<ItemParam const*,std::vector<ItemParam>>::operator*(&__for_begin);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v15);
    p_material_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15)->design_config.txt_config_mgr.material_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)item_param >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)item_param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_param >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(item_param);
    }
    v4 = MaterialExcelConfigMgr::getMaterialTypeByItemId(p_material_config_mgr, item_param->item_id) == MATERIAL_WOOD;
    std::shared_ptr<Config>::~shared_ptr(&v15);
    if ( v4 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&item_param->count >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)item_param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_param->count >> 3)
                                                                 + 0x7FFF8000) )
      {
        __asan_report_load4(&item_param->count);
      }
      count = SAFE_ADD<unsigned int,unsigned int>(count, item_param->count);
    }
    __gnu_cxx::__normal_iterator<ItemParam const*,std::vector<ItemParam>>::operator++(&__for_begin);
  }
  __for_range_0 = extra_item_param_vec;
  __for_begin._M_current = std::vector<ItemParam>::begin(extra_item_param_vec)._M_current;
  __for_end._M_current = std::vector<ItemParam>::end(__for_range_0)._M_current;
  while ( __gnu_cxx::operator!=<ItemParam const*,std::vector<ItemParam>>(&__for_begin, &__for_end) )
  {
    item_param_0 = __gnu_cxx::__normal_iterator<ItemParam const*,std::vector<ItemParam>>::operator*(&__for_begin);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v15);
    v5 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15)->design_config.txt_config_mgr.material_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)item_param_0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)item_param_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_param_0 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(item_param_0);
    }
    v6 = MaterialExcelConfigMgr::getMaterialTypeByItemId(v5, item_param_0->item_id) == MATERIAL_WOOD;
    std::shared_ptr<Config>::~shared_ptr(&v15);
    if ( v6 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&item_param_0->count >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)item_param_0 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_param_0->count >> 3)
                                                                   + 0x7FFF8000) )
      {
        __asan_report_load4(&item_param_0->count);
      }
      count = SAFE_ADD<unsigned int,unsigned int>(count, item_param_0->count);
    }
    __gnu_cxx::__normal_iterator<ItemParam const*,std::vector<ItemParam>>::operator++(&__for_begin);
  }
  if ( count )
  {
    ObtainWoodEvent::ObtainWoodEvent(&v16, count);
    PlayerWatcherComp::onBaseEvent(this, &v16);
    ObtainWoodEvent::~ObtainWoodEvent(&v16);
  }
};

// Line 1826: range 000000001439C070-000000001439C23F
void __cdecl PlayerWatcherComp::triggerObtainWood(
        PlayerWatcherComp *const this,
        const std::vector<AddItemResult> *item_add_rlt_vec)
{
  MaterialExcelConfigMgr *p_material_config_mgr; // rcx
  bool v3; // bl
  unsigned int count; // [rsp+1Ch] [rbp-64h]
  std::vector<AddItemResult>::const_iterator __for_begin; // [rsp+20h] [rbp-60h] BYREF
  std::vector<AddItemResult>::const_iterator __for_end; // [rsp+28h] [rbp-58h] BYREF
  const std::vector<AddItemResult> *__for_range; // [rsp+30h] [rbp-50h]
  const AddItemResult *add_item_rlt; // [rsp+38h] [rbp-48h]
  std::shared_ptr<Config> v9; // [rsp+40h] [rbp-40h] BYREF
  ObtainWoodEvent v10; // [rsp+50h] [rbp-30h] BYREF

  count = 0;
  __for_range = item_add_rlt_vec;
  __for_begin._M_current = std::vector<AddItemResult>::begin(item_add_rlt_vec)._M_current;
  __for_end._M_current = std::vector<AddItemResult>::end(item_add_rlt_vec)._M_current;
  while ( __gnu_cxx::operator!=<AddItemResult const*,std::vector<AddItemResult>>(&__for_begin, &__for_end) )
  {
    add_item_rlt = __gnu_cxx::__normal_iterator<AddItemResult const*,std::vector<AddItemResult>>::operator*(&__for_begin);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v9);
    p_material_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v9)->design_config.txt_config_mgr.material_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&add_item_rlt->item_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&add_item_rlt->item_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&add_item_rlt->item_id);
    }
    v3 = MaterialExcelConfigMgr::getMaterialTypeByItemId(p_material_config_mgr, add_item_rlt->item_id) == MATERIAL_WOOD;
    std::shared_ptr<Config>::~shared_ptr(&v9);
    if ( v3 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&add_item_rlt->add_count >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)add_item_rlt + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&add_item_rlt->add_count >> 3)
                                                                    + 0x7FFF8000) )
      {
        __asan_report_load4(&add_item_rlt->add_count);
      }
      count = SAFE_ADD<unsigned int,unsigned int>(count, add_item_rlt->add_count);
    }
    __gnu_cxx::__normal_iterator<AddItemResult const*,std::vector<AddItemResult>>::operator++(&__for_begin);
  }
  if ( count )
  {
    ObtainWoodEvent::ObtainWoodEvent(&v10, count);
    PlayerWatcherComp::onBaseEvent(this, &v10);
    ObtainWoodEvent::~ObtainWoodEvent(&v10);
  }
};

// Line 1842: range 000000001439C240-000000001439C2AE
void __cdecl PlayerWatcherComp::triggerMistTrialStatUpdate(
        PlayerWatcherComp *const this,
        uint32_t dungeon_id,
        uint32_t stat_id,
        uint32_t delta_val)
{
  MistTrialStatUpdateEvent v4; // [rsp+20h] [rbp-40h] BYREF

  MistTrialStatUpdateEvent::MistTrialStatUpdateEvent(&v4, dungeon_id, stat_id, delta_val);
  PlayerWatcherComp::onBaseEvent(this, &v4);
  MistTrialStatUpdateEvent::~MistTrialStatUpdateEvent(&v4);
};

// Line 1847: range 000000001439C2B0-000000001439C314
void __cdecl PlayerWatcherComp::triggerUnlockFurniture(PlayerWatcherComp *const this, uint32_t furniture_id)
{
  UnlockFurnitureEvent v2; // [rsp+10h] [rbp-30h] BYREF

  UnlockFurnitureEvent::UnlockFurnitureEvent(&v2, furniture_id);
  PlayerWatcherComp::onBaseEvent(this, &v2);
  UnlockFurnitureEvent::~UnlockFurnitureEvent(&v2);
};

// Line 1852: range 000000001439C316-000000001439C37A
void __cdecl PlayerWatcherComp::triggerHomeLevel(PlayerWatcherComp *const this, uint32_t level)
{
  HomeLevelEvent v2; // [rsp+10h] [rbp-30h] BYREF

  HomeLevelEvent::HomeLevelEvent(&v2, level);
  PlayerWatcherComp::onBaseEvent(this, &v2);
  HomeLevelEvent::~HomeLevelEvent(&v2);
};

// Line 1857: range 000000001439C37C-000000001439C3F0
void __cdecl PlayerWatcherComp::triggerArrangementFurniture(PlayerWatcherComp *const this)
{
  HomeArrangementFurnitureEvent v1; // [rsp+10h] [rbp-30h] BYREF

  memset(&v1, 0, sizeof(v1));
  HomeArrangementFurnitureEvent::HomeArrangementFurnitureEvent(&v1);
  PlayerWatcherComp::onBaseEvent(this, &v1);
  HomeArrangementFurnitureEvent::~HomeArrangementFurnitureEvent(&v1);
};

// Line 1862: range 000000001439C3F2-000000001439C45C
void __cdecl PlayerWatcherComp::triggerHomeLimitedShopBuy(
        PlayerWatcherComp *const this,
        uint32_t home_uid,
        uint32_t buy_count)
{
  HomeLimitedShopBuyEvent v3; // [rsp+10h] [rbp-30h] BYREF

  HomeLimitedShopBuyEvent::HomeLimitedShopBuyEvent(&v3, home_uid, buy_count);
  PlayerWatcherComp::onBaseEvent(this, &v3);
  HomeLimitedShopBuyEvent::~HomeLimitedShopBuyEvent(&v3);
};

// Line 1867: range 000000001439C45E-000000001439C4C2
void __cdecl PlayerWatcherComp::triggerHomeEnterRoom(PlayerWatcherComp *const this, uint32_t scene_id)
{
  EnterHomeRoomEvent v2; // [rsp+10h] [rbp-30h] BYREF

  EnterHomeRoomEvent::EnterHomeRoomEvent(&v2, scene_id);
  PlayerWatcherComp::onBaseEvent(this, &v2);
  EnterHomeRoomEvent::~EnterHomeRoomEvent(&v2);
};

// Line 1872: range 000000001439C4C4-000000001439C528
void __cdecl PlayerWatcherComp::triggerAvatarShowInHome(PlayerWatcherComp *const this, uint32_t avatar_id)
{
  HomeAvatarShowInEvent v2; // [rsp+10h] [rbp-30h] BYREF

  HomeAvatarShowInEvent::HomeAvatarShowInEvent(&v2, avatar_id);
  PlayerWatcherComp::onBaseEvent(this, &v2);
  HomeAvatarShowInEvent::~HomeAvatarShowInEvent(&v2);
};

// Line 1877: range 000000001439C52A-000000001439C58E
void __cdecl PlayerWatcherComp::triggerHomeAvatarRewardGet(PlayerWatcherComp *const this, uint32_t avatar_id)
{
  HomeAvatarEventRewardGetEvent v2; // [rsp+10h] [rbp-30h] BYREF

  HomeAvatarEventRewardGetEvent::HomeAvatarEventRewardGetEvent(&v2, avatar_id);
  PlayerWatcherComp::onBaseEvent(this, &v2);
  HomeAvatarEventRewardGetEvent::~HomeAvatarEventRewardGetEvent(&v2);
};

// Line 1882: range 000000001439C590-000000001439C5F4
void __cdecl PlayerWatcherComp::triggerHomeAvatarTalk(PlayerWatcherComp *const this, uint32_t avatar_id)
{
  HomeAvatarTalkEvent v2; // [rsp+10h] [rbp-30h] BYREF

  HomeAvatarTalkEvent::HomeAvatarTalkEvent(&v2, avatar_id);
  PlayerWatcherComp::onBaseEvent(this, &v2);
  HomeAvatarTalkEvent::~HomeAvatarTalkEvent(&v2);
};

// Line 1888: range 000000001439C5F6-000000001439C660
void __cdecl PlayerWatcherComp::triggerExhibitionAccumulableValueIncrease(
        PlayerWatcherComp *const this,
        uint32_t exhibiton_id,
        uint32_t add_value)
{
  ExhibitionAccumulableValueEvent v3; // [rsp+10h] [rbp-30h] BYREF

  ExhibitionAccumulableValueEvent::ExhibitionAccumulableValueEvent(&v3, exhibiton_id, add_value);
  PlayerWatcherComp::onBaseEvent(this, &v3);
  ExhibitionAccumulableValueEvent::~ExhibitionAccumulableValueEvent(&v3);
};

// Line 1893: range 000000001439C662-000000001439C6D0
void __cdecl PlayerWatcherComp::triggerExhibitionReplaceableValueIncrease(
        PlayerWatcherComp *const this,
        uint32_t exhibiton_id,
        uint32_t before_value,
        uint32_t cur_value)
{
  ExhibitionReplaceableValueSettleNumEvent v4; // [rsp+20h] [rbp-40h] BYREF

  ExhibitionReplaceableValueSettleNumEvent::ExhibitionReplaceableValueSettleNumEvent(
    &v4,
    exhibiton_id,
    before_value,
    cur_value);
  PlayerWatcherComp::onBaseEvent(this, &v4);
  ExhibitionReplaceableValueSettleNumEvent::~ExhibitionReplaceableValueSettleNumEvent(&v4);
};

// Line 1899: range 000000001439C6D2-000000001439C73C
void __cdecl PlayerWatcherComp::triggerActivityScoreChange(
        PlayerWatcherComp *const this,
        uint32_t activity_id,
        uint32_t add_score)
{
  ActivityScoreExceedValueEvent v3; // [rsp+10h] [rbp-30h] BYREF

  ActivityScoreExceedValueEvent::ActivityScoreExceedValueEvent(&v3, activity_id, add_score);
  PlayerWatcherComp::onBaseEvent(this, &v3);
  ActivityScoreExceedValueEvent::~ActivityScoreExceedValueEvent(&v3);
};

// Line 1905: range 000000001439C73E-000000001439C7A8
void __cdecl PlayerWatcherComp::triggerChannellerSlabFinishAllCamp(
        PlayerWatcherComp *const this,
        uint32_t activity_id,
        uint32_t schedule_id)
{
  ActivityChannellerSlabFinishAllCampEvent v3; // [rsp+10h] [rbp-30h] BYREF

  ActivityChannellerSlabFinishAllCampEvent::ActivityChannellerSlabFinishAllCampEvent(&v3, activity_id, schedule_id);
  PlayerWatcherComp::onBaseEvent(this, &v3);
  ActivityChannellerSlabFinishAllCampEvent::~ActivityChannellerSlabFinishAllCampEvent(&v3);
};

// Line 1911: range 000000001439C7AA-000000001439C814
void __cdecl PlayerWatcherComp::triggerChannellerSlabFinishAllOneoffDungeon(
        PlayerWatcherComp *const this,
        uint32_t activity_id,
        uint32_t schedule_id)
{
  ActivityChannellerSlabFinishAllOneoffDungeonEvent v3; // [rsp+10h] [rbp-30h] BYREF

  ActivityChannellerSlabFinishAllOneoffDungeonEvent::ActivityChannellerSlabFinishAllOneoffDungeonEvent(
    &v3,
    activity_id,
    schedule_id);
  PlayerWatcherComp::onBaseEvent(this, &v3);
  ActivityChannellerSlabFinishAllOneoffDungeonEvent::~ActivityChannellerSlabFinishAllOneoffDungeonEvent(&v3);
};

// Line 1917: range 000000001439C816-000000001439CA90
void __fastcall PlayerWatcherComp::triggerKillGadgetsBySpecificSkill(
        PlayerWatcherComp *const this,
        const std::string *ability_name,
        uint32_t group_id,
        uint32_t gadget_id)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rcx
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-E0h] BYREF
  KillGadgetsBySpecificSkillEvent v16; // [rsp+40h] [rbp-C0h] BYREF
  char v17[128]; // [rsp+80h] [rbp-80h] BYREF

  v4 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 13 group_id:1916 64 4 14 gadget_id:1916";
  *(_QWORD *)(v4 + 16) = PlayerWatcherComp::triggerKillGadgetsBySpecificSkill;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202116348;
  *(_DWORD *)(v4 + 48) = group_id;
  *(_DWORD *)(v4 + 64) = gadget_id;
  common::milog::MiLogStream::create(
    &v15,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/watcher/player_watcher_comp.cpp",
    "triggerKillGadgetsBySpecificSkill",
    1919);
  v7 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v15, (const char (*)[9])"ability:");
  v8 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, ability_name);
  v9 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v8, (const char (*)[8])" group:");
  v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 48));
  v11 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v10, (const char (*)[9])" gadget:");
  v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v4 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  operator<<(v12, this->player_);
  common::milog::MiLogStream::~MiLogStream(&v15);
  KillGadgetsBySpecificSkillEvent::KillGadgetsBySpecificSkillEvent(
    &v16,
    ability_name,
    *(_DWORD *)(v4 + 64),
    *(_DWORD *)(v4 + 48));
  PlayerWatcherComp::onBaseEvent(this, &v16);
  KillGadgetsBySpecificSkillEvent::~KillGadgetsBySpecificSkillEvent(&v16);
  if ( v17 == (char *)v4 )
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

// Line 1926: range 000000001439CA92-000000001439CCDC
void __fastcall PlayerWatcherComp::triggerKillMonstersWithoutVehicle(
        PlayerWatcherComp *const this,
        uint32_t group_id,
        uint32_t monster_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rcx
  common::milog::MiLogStream v11; // [rsp+10h] [rbp-A0h] BYREF
  char v12[128]; // [rsp+30h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 13 group_id:1925 64 4 15 monster_id:1925";
  *(_QWORD *)(v3 + 16) = PlayerWatcherComp::triggerKillMonstersWithoutVehicle;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 48) = group_id;
  *(_DWORD *)(v3 + 64) = monster_id;
  common::milog::MiLogStream::create(
    &v11,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/watcher/player_watcher_comp.cpp",
    "triggerKillMonstersWithoutVehicle",
    1928);
  v6 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(&v11, (const char (*)[7])"group:");
  v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
  v8 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v7, (const char (*)[13])" monster_id:");
  v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  operator<<(v9, this->player_);
  common::milog::MiLogStream::~MiLogStream(&v11);
  KillMonstersWithoutVehicleEvent::KillMonstersWithoutVehicleEvent(
    (KillMonstersWithoutVehicleEvent *const)&v11,
    *(_DWORD *)(v3 + 48),
    *(_DWORD *)(v3 + 64));
  PlayerWatcherComp::onBaseEvent(this, (const BaseEvent *)&v11);
  KillMonstersWithoutVehicleEvent::~KillMonstersWithoutVehicleEvent((KillMonstersWithoutVehicleEvent *const)&v11);
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
};

// Line 1935: range 000000001439CCDE-000000001439CEB1
void __fastcall PlayerWatcherComp::triggerVehicleFriends(PlayerWatcherComp *const this, uint32_t vehicle_type)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rcx
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
  *(_QWORD *)(v2 + 8) = "1 32 4 17 vehicle_type:1934";
  *(_QWORD *)(v2 + 16) = PlayerWatcherComp::triggerVehicleFriends;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = vehicle_type;
  common::milog::MiLogStream::create(
    &v7,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/watcher/player_watcher_comp.cpp",
    "triggerVehicleFriends",
    1937);
  v5 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v7, (const char (*)[14])"vehicle_type:");
  v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  operator<<(v6, this->player_);
  common::milog::MiLogStream::~MiLogStream(&v7);
  VehicleFriendsEvent::VehicleFriendsEvent((VehicleFriendsEvent *const)&v7, *(_DWORD *)(v2 + 32));
  PlayerWatcherComp::onBaseEvent(this, (const BaseEvent *)&v7);
  VehicleFriendsEvent::~VehicleFriendsEvent((VehicleFriendsEvent *const)&v7);
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1944: range 000000001439CEB2-000000001439D0FC
void __fastcall PlayerWatcherComp::triggerVehicleDash(
        PlayerWatcherComp *const this,
        uint32_t vehicle_type,
        uint32_t dash_time)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rcx
  common::milog::MiLogStream v11; // [rsp+10h] [rbp-A0h] BYREF
  char v12[128]; // [rsp+30h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 17 vehicle_type:1943 64 4 14 dash_time:1943";
  *(_QWORD *)(v3 + 16) = PlayerWatcherComp::triggerVehicleDash;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 48) = vehicle_type;
  *(_DWORD *)(v3 + 64) = dash_time;
  common::milog::MiLogStream::create(
    &v11,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/watcher/player_watcher_comp.cpp",
    "triggerVehicleDash",
    1946);
  v6 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v11, (const char (*)[14])"vehicle_type:");
  v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
  v8 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v7, (const char (*)[12])" dash time:");
  v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  operator<<(v9, this->player_);
  common::milog::MiLogStream::~MiLogStream(&v11);
  VehicleDashEvent::VehicleDashEvent((VehicleDashEvent *const)&v11, *(_DWORD *)(v3 + 48), *(_DWORD *)(v3 + 64));
  PlayerWatcherComp::onBaseEvent(this, (const BaseEvent *)&v11);
  VehicleDashEvent::~VehicleDashEvent((VehicleDashEvent *const)&v11);
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
};

// Line 1953: range 000000001439D0FE-000000001439D162
void __cdecl PlayerWatcherComp::triggerUnlockForge(PlayerWatcherComp *const this, uint32_t forge_id)
{
  UnlockForgeEvent v2; // [rsp+10h] [rbp-30h] BYREF

  UnlockForgeEvent::UnlockForgeEvent(&v2, forge_id);
  PlayerWatcherComp::onBaseEvent(this, &v2);
  UnlockForgeEvent::~UnlockForgeEvent(&v2);
};

// Line 1959: range 000000001439D164-000000001439D1C8
void __cdecl PlayerWatcherComp::triggerEnterClimateAreaEvent(PlayerWatcherComp *const this, uint32_t json_climate_type)
{
  EnterClimateAreaEvent v2; // [rsp+10h] [rbp-30h] BYREF

  EnterClimateAreaEvent::EnterClimateAreaEvent(&v2, json_climate_type);
  PlayerWatcherComp::onBaseEvent(this, &v2);
  EnterClimateAreaEvent::~EnterClimateAreaEvent(&v2);
};

// Line 1964: range 000000001439D1CA-000000001439D242
void __cdecl PlayerWatcherComp::triggerSumoGallerySettleEvent(
        PlayerWatcherComp *const this,
        uint32_t activity_id,
        uint32_t stage_id,
        uint32_t score,
        uint32_t all_stage_max_score)
{
  SumoGallerySettleEvent v5; // [rsp+20h] [rbp-40h] BYREF

  SumoGallerySettleEvent::SumoGallerySettleEvent(&v5, activity_id, stage_id, score, all_stage_max_score);
  PlayerWatcherComp::onBaseEvent(this, &v5);
  SumoGallerySettleEvent::~SumoGallerySettleEvent(&v5);
};

// Line 1969: range 000000001439D244-000000001439D2AE
void __cdecl PlayerWatcherComp::triggerUnlockScenePoint(
        PlayerWatcherComp *const this,
        uint32_t scene_id,
        uint32_t point_id)
{
  UnlockScenePointEvent v3; // [rsp+10h] [rbp-30h] BYREF

  UnlockScenePointEvent::UnlockScenePointEvent(&v3, scene_id, point_id);
  PlayerWatcherComp::onBaseEvent(this, &v3);
  UnlockScenePointEvent::~UnlockScenePointEvent(&v3);
};

// Line 1974: range 000000001439D2B0-000000001439D34F
void __cdecl PlayerWatcherComp::triggerRogueGadgetDie(
        PlayerWatcherComp *const this,
        uint32_t stage_id,
        uint32_t level_id,
        uint32_t dungeon_id,
        const std::map<data::RogueCreateGadgetType,unsigned int> *die_gadget_count_map,
        bool is_triggered_by_finish)
{
  RogueDungeonGadgetDieEvent v6; // [rsp+20h] [rbp-70h] BYREF

  RogueDungeonGadgetDieEvent::RogueDungeonGadgetDieEvent(
    &v6,
    stage_id,
    level_id,
    dungeon_id,
    die_gadget_count_map,
    is_triggered_by_finish);
  PlayerWatcherComp::onBaseEvent(this, &v6);
  RogueDungeonGadgetDieEvent::~RogueDungeonGadgetDieEvent(&v6);
};

// Line 1979: range 000000001439D350-000000001439D3C1
void __cdecl PlayerWatcherComp::triggerRogueMonsterDie(
        PlayerWatcherComp *const this,
        uint32_t stage_id,
        uint32_t count,
        bool is_triggered_by_finish)
{
  RogueMonsterDieDieEvent v4; // [rsp+20h] [rbp-40h] BYREF

  RogueMonsterDieDieEvent::RogueMonsterDieDieEvent(&v4, stage_id, count, is_triggered_by_finish);
  PlayerWatcherComp::onBaseEvent(this, &v4);
  RogueMonsterDieDieEvent::~RogueMonsterDieDieEvent(&v4);
};

// Line 1984: range 000000001439D3C2-000000001439D42C
void __cdecl PlayerWatcherComp::triggerRogueShikigamiUpgrade(
        PlayerWatcherComp *const this,
        uint32_t id,
        uint32_t level)
{
  RogueShikigamiUpgradeEvent v3; // [rsp+10h] [rbp-30h] BYREF

  RogueShikigamiUpgradeEvent::RogueShikigamiUpgradeEvent(&v3, id, level);
  PlayerWatcherComp::onBaseEvent(this, &v3);
  RogueShikigamiUpgradeEvent::~RogueShikigamiUpgradeEvent(&v3);
};

// Line 1989: range 000000001439D42E-000000001439D48A
void __cdecl PlayerWatcherComp::triggerRogueCurse(PlayerWatcherComp *const this)
{
  RogueTriggerCurseEvent v1; // [rsp+10h] [rbp-30h] BYREF

  RogueTriggerCurseEvent::RogueTriggerCurseEvent(&v1);
  PlayerWatcherComp::onBaseEvent(this, &v1);
  RogueTriggerCurseEvent::~RogueTriggerCurseEvent(&v1);
};

// Line 1994: range 000000001439D48C-000000001439D4FD
void __cdecl PlayerWatcherComp::triggerRogueSelectCard(
        PlayerWatcherComp *const this,
        uint32_t card_type,
        uint32_t card_count,
        bool is_settle_trigger)
{
  RogueSelectCardEvent v4; // [rsp+20h] [rbp-40h] BYREF

  RogueSelectCardEvent::RogueSelectCardEvent(&v4, card_type, card_count, is_settle_trigger);
  PlayerWatcherComp::onBaseEvent(this, &v4);
  RogueSelectCardEvent::~RogueSelectCardEvent(&v4);
};

// Line 1999: range 000000001439D4FE-000000001439D55A
void __cdecl PlayerWatcherComp::triggerWinterCampSnowmanEdit(PlayerWatcherComp *const this)
{
  WinterCampSnomanEditEvent v1; // [rsp+10h] [rbp-30h] BYREF

  WinterCampSnomanEditEvent::WinterCampSnomanEditEvent(&v1);
  PlayerWatcherComp::onBaseEvent(this, &v1);
  WinterCampSnomanEditEvent::~WinterCampSnomanEditEvent(&v1);
};

// Line 2004: range 000000001439D55C-000000001439D5C0
void __cdecl PlayerWatcherComp::triggerProjectionFinishLevel(PlayerWatcherComp *const this, uint32_t level_id)
{
  ProjectionFinishLevelEvent v2; // [rsp+10h] [rbp-30h] BYREF

  ProjectionFinishLevelEvent::ProjectionFinishLevelEvent(&v2, level_id);
  PlayerWatcherComp::onBaseEvent(this, &v2);
  ProjectionFinishLevelEvent::~ProjectionFinishLevelEvent(&v2);
};

// Line 2009: range 000000001439D5C2-000000001439D636
void __cdecl PlayerWatcherComp::triggerBartenderUnlockFormula(PlayerWatcherComp *const this)
{
  BartenderUnlockFormulaEvent v1; // [rsp+10h] [rbp-30h] BYREF

  memset(&v1, 0, sizeof(v1));
  BartenderUnlockFormulaEvent::BartenderUnlockFormulaEvent(&v1);
  PlayerWatcherComp::onBaseEvent(this, &v1);
  BartenderUnlockFormulaEvent::~BartenderUnlockFormulaEvent(&v1);
};

// Line 2014: range 000000001439D638-000000001439D69C
void __cdecl PlayerWatcherComp::triggerBartenderFinishStoryModule(PlayerWatcherComp *const this, uint32_t task_id)
{
  BartenderFinishStoryModuleEvent v2; // [rsp+10h] [rbp-30h] BYREF

  BartenderFinishStoryModuleEvent::BartenderFinishStoryModuleEvent(&v2, task_id);
  PlayerWatcherComp::onBaseEvent(this, &v2);
  BartenderFinishStoryModuleEvent::~BartenderFinishStoryModuleEvent(&v2);
};

// Line 2019: range 000000001439D69E-000000001439D708
void __cdecl PlayerWatcherComp::triggerBartenderFinishLevel(
        PlayerWatcherComp *const this,
        uint32_t level_id,
        uint32_t level_score)
{
  BartenderChallengeModuleLevelScoreEvent v3; // [rsp+10h] [rbp-30h] BYREF

  BartenderChallengeModuleLevelScoreEvent::BartenderChallengeModuleLevelScoreEvent(&v3, level_id, level_score);
  PlayerWatcherComp::onBaseEvent(this, &v3);
  BartenderChallengeModuleLevelScoreEvent::~BartenderChallengeModuleLevelScoreEvent(&v3);
};

// Line 2024: range 000000001439D70A-000000001439D77B
void __cdecl PlayerWatcherComp::triggerIrodoriChessSettleNewRecord(
        PlayerWatcherComp *const this,
        uint32_t level_id,
        bool is_hard_map,
        uint32_t settle_score)
{
  IrodoriChessSettleNewRecordEvent v4; // [rsp+20h] [rbp-40h] BYREF

  IrodoriChessSettleNewRecordEvent::IrodoriChessSettleNewRecordEvent(&v4, level_id, is_hard_map, settle_score);
  PlayerWatcherComp::onBaseEvent(this, &v4);
  IrodoriChessSettleNewRecordEvent::~IrodoriChessSettleNewRecordEvent(&v4);
};

// Line 2029: range 000000001439D77C-000000001439D7F7
void __cdecl PlayerWatcherComp::triggerIrodoriMasterLevelEvent(
        PlayerWatcherComp *const this,
        uint32_t level_id,
        uint32_t difficulty,
        bool is_finish,
        uint32_t finish_time)
{
  IrodoriMasterLevelEvent v5; // [rsp+20h] [rbp-40h] BYREF

  IrodoriMasterLevelEvent::IrodoriMasterLevelEvent(&v5, level_id, difficulty, is_finish, finish_time);
  PlayerWatcherComp::onBaseEvent(this, &v5);
  IrodoriMasterLevelEvent::~IrodoriMasterLevelEvent(&v5);
};

// Line 2034: range 000000001439D7F8-000000001439D866
void __cdecl PlayerWatcherComp::triggerRogueDiaryFinishStage(
        PlayerWatcherComp *const this,
        uint32_t id,
        uint32_t finish_difficulty,
        uint32_t finish_time)
{
  FinishRogueDiaryStageEvent v4; // [rsp+20h] [rbp-40h] BYREF

  FinishRogueDiaryStageEvent::FinishRogueDiaryStageEvent(&v4, id, finish_difficulty, finish_time);
  PlayerWatcherComp::onBaseEvent(this, &v4);
  FinishRogueDiaryStageEvent::~FinishRogueDiaryStageEvent(&v4);
};

// Line 2039: range 000000001439D868-000000001439D8D6
void __cdecl PlayerWatcherComp::triggerRogueDiaryFinishStageRound(
        PlayerWatcherComp *const this,
        uint32_t id,
        uint32_t finish_difficulty,
        uint32_t finish_round)
{
  FinishRogueDiaryStageRoundEvent v4; // [rsp+20h] [rbp-40h] BYREF

  FinishRogueDiaryStageRoundEvent::FinishRogueDiaryStageRoundEvent(&v4, id, finish_difficulty, finish_round);
  PlayerWatcherComp::onBaseEvent(this, &v4);
  FinishRogueDiaryStageRoundEvent::~FinishRogueDiaryStageRoundEvent(&v4);
};

// Line 2044: range 000000001439D8D8-000000001439D942
void __cdecl PlayerWatcherComp::triggerMuqadasLevelWeaknessEvent(
        PlayerWatcherComp *const this,
        uint32_t level_id,
        uint32_t weakness_num)
{
  MuqadasPotionLevelWeaknessNumEvent v3; // [rsp+10h] [rbp-30h] BYREF

  MuqadasPotionLevelWeaknessNumEvent::MuqadasPotionLevelWeaknessNumEvent(&v3, level_id, weakness_num);
  PlayerWatcherComp::onBaseEvent(this, &v3);
  MuqadasPotionLevelWeaknessNumEvent::~MuqadasPotionLevelWeaknessNumEvent(&v3);
};

// Line 2049: range 000000001439D944-000000001439D9AE
void __cdecl PlayerWatcherComp::triggerMuqadasLevelOnceWeaknessEvent(
        PlayerWatcherComp *const this,
        uint32_t level_id,
        uint32_t once_weakness_num)
{
  MuqadasPotionLevelOnceWeaknessNumEvent v3; // [rsp+10h] [rbp-30h] BYREF

  MuqadasPotionLevelOnceWeaknessNumEvent::MuqadasPotionLevelOnceWeaknessNumEvent(&v3, level_id, once_weakness_num);
  PlayerWatcherComp::onBaseEvent(this, &v3);
  MuqadasPotionLevelOnceWeaknessNumEvent::~MuqadasPotionLevelOnceWeaknessNumEvent(&v3);
};

// Line 2054: range 000000001439D9B0-000000001439DA14
void __cdecl PlayerWatcherComp::triggerVintageHuntingScoreEvent(PlayerWatcherComp *const this, uint32_t score)
{
  VintageHuntingScoreEvent v2; // [rsp+10h] [rbp-30h] BYREF

  VintageHuntingScoreEvent::VintageHuntingScoreEvent(&v2, score);
  PlayerWatcherComp::onBaseEvent(this, &v2);
  VintageHuntingScoreEvent::~VintageHuntingScoreEvent(&v2);
};

// Line 2059: range 000000001439DA16-000000001439DA7A
void __cdecl PlayerWatcherComp::triggerVintageHuntingCaptureNumEvent(PlayerWatcherComp *const this, uint32_t num)
{
  VintageHuntingCaptureNumEvent v2; // [rsp+10h] [rbp-30h] BYREF

  VintageHuntingCaptureNumEvent::VintageHuntingCaptureNumEvent(&v2, num);
  PlayerWatcherComp::onBaseEvent(this, &v2);
  VintageHuntingCaptureNumEvent::~VintageHuntingCaptureNumEvent(&v2);
};

// Line 2064: range 000000001439DA7C-000000001439DAE0
void __cdecl PlayerWatcherComp::triggerVintageHuntingCaptureNoBattleNumEvent(
        PlayerWatcherComp *const this,
        uint32_t num)
{
  VintageHuntingCaptureNoBattleNumEvent v2; // [rsp+10h] [rbp-30h] BYREF

  VintageHuntingCaptureNoBattleNumEvent::VintageHuntingCaptureNoBattleNumEvent(&v2, num);
  PlayerWatcherComp::onBaseEvent(this, &v2);
  VintageHuntingCaptureNoBattleNumEvent::~VintageHuntingCaptureNoBattleNumEvent(&v2);
};

// Line 2069: range 000000001439DAE2-000000001439DB46
void __cdecl PlayerWatcherComp::triggerVintageHuntingCaptureTypeNumEvent(
        PlayerWatcherComp *const this,
        uint32_t type_num)
{
  VintageHuntingCaptureTypeNumEvent v2; // [rsp+10h] [rbp-30h] BYREF

  VintageHuntingCaptureTypeNumEvent::VintageHuntingCaptureTypeNumEvent(&v2, type_num);
  PlayerWatcherComp::onBaseEvent(this, &v2);
  VintageHuntingCaptureTypeNumEvent::~VintageHuntingCaptureTypeNumEvent(&v2);
};

// Line 2074: range 000000001439DB48-000000001439DBA4
void __cdecl PlayerWatcherComp::triggerVintageHuntingFinishBossEvent(PlayerWatcherComp *const this)
{
  VintageHuntingFinishBossEvent v1; // [rsp+10h] [rbp-30h] BYREF

  VintageHuntingFinishBossEvent::VintageHuntingFinishBossEvent(&v1);
  PlayerWatcherComp::onBaseEvent(this, &v1);
  VintageHuntingFinishBossEvent::~VintageHuntingFinishBossEvent(&v1);
};

// Line 2079: range 000000001439DBA6-000000001439DC0A
void __cdecl PlayerWatcherComp::triggerVintageHuntingFinishBossInTimeEvent(
        PlayerWatcherComp *const this,
        uint32_t left_time)
{
  VintageHuntingFinishBossInTimeEvent v2; // [rsp+10h] [rbp-30h] BYREF

  VintageHuntingFinishBossInTimeEvent::VintageHuntingFinishBossInTimeEvent(&v2, left_time);
  PlayerWatcherComp::onBaseEvent(this, &v2);
  VintageHuntingFinishBossInTimeEvent::~VintageHuntingFinishBossInTimeEvent(&v2);
};

// Line 2084: range 000000001439DC0C-000000001439DC70
void __cdecl PlayerWatcherComp::triggerVintageHuntingBossWeakTimesEvent(
        PlayerWatcherComp *const this,
        uint32_t boss_weak_times)
{
  VintageHuntingBossWeakTimesEvent v2; // [rsp+10h] [rbp-30h] BYREF

  VintageHuntingBossWeakTimesEvent::VintageHuntingBossWeakTimesEvent(&v2, boss_weak_times);
  PlayerWatcherComp::onBaseEvent(this, &v2);
  VintageHuntingBossWeakTimesEvent::~VintageHuntingBossWeakTimesEvent(&v2);
};

// Line 2089: range 000000001439DC72-000000001439DCD6
void __cdecl PlayerWatcherComp::triggerVintageMarketCoinAChangeEvent(PlayerWatcherComp *const this, uint32_t count)
{
  VintageMarketCoinAChangeEvent v2; // [rsp+10h] [rbp-30h] BYREF

  VintageMarketCoinAChangeEvent::VintageMarketCoinAChangeEvent(&v2, count);
  PlayerWatcherComp::onBaseEvent(this, &v2);
  VintageMarketCoinAChangeEvent::~VintageMarketCoinAChangeEvent(&v2);
};

// Line 2094: range 000000001439DCD8-000000001439DD4C
void __cdecl PlayerWatcherComp::triggerVintageMarketContentFinishEvent(PlayerWatcherComp *const this)
{
  VintageMarketContentFinishEvent v1; // [rsp+10h] [rbp-30h] BYREF

  memset(&v1, 0, sizeof(v1));
  VintageMarketContentFinishEvent::VintageMarketContentFinishEvent(&v1);
  PlayerWatcherComp::onBaseEvent(this, &v1);
  VintageMarketContentFinishEvent::~VintageMarketContentFinishEvent(&v1);
};
