// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/spice_activity.cpp

// Line 29: range 0000000017FD3864-0000000017FD3961
void __cdecl SpiceStageData::fromBin(SpiceStageData *const this, const proto::SpiceStageBin *bin)
{
  uint32_t v2; // ecx
  char v3; // dl
  __int64 v4; // rdx
  bool is_open; // cl
  char v6; // dl
  __int64 v7; // rdx
  uint32_t v8; // ecx
  char v9; // dl
  __int64 v10; // rdx
  const proto::SpiceStageBin *bina; // [rsp+0h] [rbp-10h]

  bina = bin;
  v2 = proto::SpiceStageBin::stage_id(bin);
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  LOBYTE(bin) = v3 != 0;
  v4 = (v3 != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7) + 3) >= v3);
  if ( (_BYTE)v4 )
    __asan_report_store4(this, bin, v4);
  this->stage_id = v2;
  is_open = proto::SpiceStageBin::is_open(bina);
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000);
  LOBYTE(bin) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this + 4) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->is_open, bin, v7);
  this->is_open = is_open;
  v8 = proto::SpiceStageBin::success_times(bina);
  v9 = *(_BYTE *)(((unsigned __int64)&this->success_times >> 3) + 0x7FFF8000);
  LOBYTE(bin) = v9 != 0;
  v10 = (v9 != 0) & (unsigned __int8)((char)((((_BYTE)this + 8) & 7) + 3) >= v9);
  if ( (_BYTE)v10 )
    __asan_report_store4(&this->success_times, bin, v10);
  this->success_times = v8;
};

// Line 36: range 0000000017FD3962-0000000017FD3A60
void __cdecl SpiceStageData::toBin(const SpiceStageData *const this, proto::SpiceStageBin *bin)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  proto::SpiceStageBin::set_stage_id(bin, this->stage_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_open);
  }
  proto::SpiceStageBin::set_is_open(bin, this->is_open);
  if ( *(_BYTE *)(((unsigned __int64)&this->success_times >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->success_times >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->success_times);
  }
  proto::SpiceStageBin::set_success_times(bin, this->success_times);
};

// Line 43: range 0000000017FD3A62-0000000017FD3B60
void __cdecl SpiceStageData::toClient(const SpiceStageData *const this, proto::SpiceStageData *client_spice_data)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  proto::SpiceStageData::set_stage_id(client_spice_data, this->stage_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_open);
  }
  proto::SpiceStageData::set_is_open(client_spice_data, this->is_open);
  if ( *(_BYTE *)(((unsigned __int64)&this->success_times >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->success_times >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->success_times);
  }
  proto::SpiceStageData::set_success_times(client_spice_data, this->success_times);
};

// Line 50: range 0000000017FD3B62-0000000017FD3E6B
int32_t __cdecl SpiceActivity::fromScheduleBin(SpiceActivity *const this, const proto::ActivityScheduleBin *bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  google::protobuf::RepeatedPtrField<proto::SpiceStageBin>::const_iterator *p_for_end; // rsi
  SpiceStageData *v6; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,SpiceStageData> >,bool> v7; // rax
  common::milog::MiLogStream *v8; // rax
  __int64 v9; // rdx
  char v10; // al
  uint32_t v11; // ecx
  char v12; // dl
  __int64 v13; // rdx
  int32_t result; // eax
  google::protobuf::RepeatedPtrField<proto::SpiceStageBin>::const_iterator __for_begin; // [rsp+18h] [rbp-A8h] BYREF
  google::protobuf::RepeatedPtrField<proto::SpiceStageBin>::const_iterator __for_end; // [rsp+20h] [rbp-A0h] BYREF
  const proto::SpiceScheduleBin *schedule_bin; // [rsp+28h] [rbp-98h]
  const google::protobuf::RepeatedPtrField<proto::SpiceStageBin> *__for_range; // [rsp+30h] [rbp-90h]
  const proto::SpiceStageBin *stage_bin; // [rsp+38h] [rbp-88h]
  common::milog::MiLogStream v20; // [rsp+40h] [rbp-80h] BYREF
  char v21[96]; // [rsp+60h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 12 13 stage_data:55";
  *(_QWORD *)(v2 + 16) = SpiceActivity::fromScheduleBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202177536;
  schedule_bin = proto::ActivityScheduleBin::spice_bin(bin);
  std::map<unsigned int,SpiceStageData>::clear(&this->stage_data_map_);
  __for_range = proto::SpiceScheduleBin::stage_bin_list(schedule_bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::SpiceStageBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::SpiceStageBin>::end(__for_range).it_;
  while ( 1 )
  {
    p_for_end = &__for_end;
    if ( !google::protobuf::internal::RepeatedPtrIterator<proto::SpiceStageBin const>::operator!=(
            &__for_begin,
            &__for_end) )
      break;
    stage_bin = google::protobuf::internal::RepeatedPtrIterator<proto::SpiceStageBin const>::operator*(&__for_begin);
    *(_DWORD *)(v2 + 32) = 0;
    *(_BYTE *)(v2 + 36) = 0;
    *(_DWORD *)(v2 + 40) = 0;
    SpiceStageData::fromBin((SpiceStageData *const)(v2 + 32), stage_bin);
    v7 = std::map<unsigned int,SpiceStageData>::emplace<unsigned int &,SpiceStageData&>(
           &this->stage_data_map_,
           (unsigned int *)(v2 + 32),
           (SpiceStageData *)(v2 + 32),
           (unsigned int *)&this->stage_data_map_,
           v6);
    if ( !v7.second )
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/spice_activity.cpp",
        "fromScheduleBin",
        59);
      v8 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
             &v20,
             (const char (*)[35])"[SPICE] duplicate stage, stage_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v20);
    }
    google::protobuf::internal::RepeatedPtrIterator<proto::SpiceStageBin const>::operator++(&__for_begin);
  }
  v9 = proto::SpiceScheduleBin::increase_avatar_fetter_limit_times(schedule_bin);
  v10 = *(_BYTE *)(((unsigned __int64)&this->increase_avatar_fetter_limit_times_ >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(p_for_end) = v10 != 0;
    __asan_report_store4(&this->increase_avatar_fetter_limit_times_, p_for_end, v9);
  }
  this->increase_avatar_fetter_limit_times_ = v9;
  v11 = proto::SpiceScheduleBin::current_increase_avatar_fetter_times(schedule_bin);
  v12 = *(_BYTE *)(((unsigned __int64)&this->current_increase_avatar_fetter_times_ >> 3) + 0x7FFF8000);
  LOBYTE(p_for_end) = v12 != 0;
  v13 = (v12 != 0) & (unsigned __int8)((char)((((_BYTE)this - 36) & 7) + 3) >= v12);
  if ( (_BYTE)v13 )
    __asan_report_store4(&this->current_increase_avatar_fetter_times_, p_for_end, v13);
  this->current_increase_avatar_fetter_times_ = v11;
  result = 0;
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

// Line 69: range 0000000017FD3E6C-0000000017FD3FDA
int32_t __cdecl SpiceActivity::toScheduleBin(const SpiceActivity *const this, proto::ActivityScheduleBin *bin)
{
  std::map<unsigned int,SpiceStageData>::const_iterator __for_begin; // [rsp+10h] [rbp-40h] BYREF
  std::map<unsigned int,SpiceStageData>::const_iterator __for_end; // [rsp+18h] [rbp-38h] BYREF
  proto::SpiceScheduleBin *schedule_bin; // [rsp+20h] [rbp-30h]
  const std::map<unsigned int,SpiceStageData> *__for_range; // [rsp+28h] [rbp-28h]
  const std::pair<unsigned int const,SpiceStageData> *v7; // [rsp+30h] [rbp-20h]
  std::tuple_element<0,const std::pair<unsigned int const,SpiceStageData> >::type *stage_id; // [rsp+38h] [rbp-18h]
  std::tuple_element<1,const std::pair<unsigned int const,SpiceStageData> >::type *stage_data; // [rsp+40h] [rbp-10h]
  proto::SpiceStageBin *stage_bin; // [rsp+48h] [rbp-8h]

  schedule_bin = proto::ActivityScheduleBin::mutable_spice_bin(bin);
  __for_range = &this->stage_data_map_;
  __for_begin._M_node = std::map<unsigned int,SpiceStageData>::begin(&this->stage_data_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,SpiceStageData>::end(&this->stage_data_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v7 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,SpiceStageData>>::operator*(&__for_begin);
    stage_id = std::get<0ul,unsigned int const,SpiceStageData>(v7);
    stage_data = (std::tuple_element<1,const std::pair<unsigned int const,SpiceStageData> >::type *)std::get<1ul,unsigned int const,SpiceStageData>(v7);
    stage_bin = proto::SpiceScheduleBin::add_stage_bin_list(schedule_bin);
    SpiceStageData::toBin(stage_data, stage_bin);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,SpiceStageData>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->increase_avatar_fetter_limit_times_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->increase_avatar_fetter_limit_times_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->increase_avatar_fetter_limit_times_);
  }
  proto::SpiceScheduleBin::set_increase_avatar_fetter_limit_times(
    schedule_bin,
    this->increase_avatar_fetter_limit_times_);
  if ( *(_BYTE *)(((unsigned __int64)&this->current_increase_avatar_fetter_times_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->current_increase_avatar_fetter_times_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->current_increase_avatar_fetter_times_);
  }
  proto::SpiceScheduleBin::set_current_increase_avatar_fetter_times(
    schedule_bin,
    this->current_increase_avatar_fetter_times_);
  return 0;
};

// Line 83: range 0000000017FD3FDC-0000000017FD4257
int32_t __cdecl SpiceActivity::toClient(SpiceActivity *const this, proto::ActivityInfo *activity_info)
{
  common::milog::MiLogStream *v2; // rbx
  unsigned int val; // [rsp+1Ch] [rbp-74h] BYREF
  std::map<unsigned int,SpiceStageData>::iterator __for_begin; // [rsp+20h] [rbp-70h] BYREF
  std::map<unsigned int,SpiceStageData>::iterator __for_end; // [rsp+28h] [rbp-68h] BYREF
  proto::SpiceActivityDetailInfo *info; // [rsp+30h] [rbp-60h]
  std::map<unsigned int,SpiceStageData> *__for_range; // [rsp+38h] [rbp-58h]
  const std::pair<unsigned int const,SpiceStageData> *v9; // [rsp+40h] [rbp-50h]
  std::tuple_element<0,const std::pair<unsigned int const,SpiceStageData> >::type *stage_id; // [rsp+48h] [rbp-48h]
  std::tuple_element<1,const std::pair<unsigned int const,SpiceStageData> >::type *stage_data; // [rsp+50h] [rbp-40h]
  proto::SpiceStageData *client_stage_data; // [rsp+58h] [rbp-38h]
  common::milog::MiLogStream v13; // [rsp+60h] [rbp-30h] BYREF

  if ( BaseActivity::toClient(this, activity_info) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/spice_activity.cpp",
      "toClient",
      86);
    v2 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v13,
           (const char (*)[36])"BaseActivity::toClient fails, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    return -1;
  }
  else
  {
    info = proto::ActivityInfo::mutable_spice_info(activity_info);
    __for_range = &this->stage_data_map_;
    __for_begin._M_node = std::map<unsigned int,SpiceStageData>::begin(&this->stage_data_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,SpiceStageData>::end(&this->stage_data_map_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v9 = std::_Rb_tree_iterator<std::pair<unsigned int const,SpiceStageData>>::operator*(&__for_begin);
      stage_id = std::get<0ul,unsigned int const,SpiceStageData>(v9);
      stage_data = (std::tuple_element<1,const std::pair<unsigned int const,SpiceStageData> >::type *)std::get<1ul,unsigned int const,SpiceStageData>(v9);
      client_stage_data = proto::SpiceActivityDetailInfo::add_spice_stage_data_list(info);
      SpiceStageData::toClient(stage_data, client_stage_data);
      std::_Rb_tree_iterator<std::pair<unsigned int const,SpiceStageData>>::operator++(&__for_begin);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->increase_avatar_fetter_limit_times_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->increase_avatar_fetter_limit_times_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->increase_avatar_fetter_limit_times_);
    }
    proto::SpiceActivityDetailInfo::set_increase_avatar_fetter_limit_times(
      info,
      this->increase_avatar_fetter_limit_times_);
    if ( *(_BYTE *)(((unsigned __int64)&this->current_increase_avatar_fetter_times_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->current_increase_avatar_fetter_times_ >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(&this->current_increase_avatar_fetter_times_);
    }
    proto::SpiceActivityDetailInfo::set_current_increase_avatar_fetter_times(
      info,
      this->current_increase_avatar_fetter_times_);
    return 0;
  }
};

// Line 103: range 0000000017FD4258-0000000017FD42B5
int32_t __cdecl SpiceActivity::init(SpiceActivity *const this)
{
  if ( BaseActivity::isOpening(this, 0) && !BaseActivity::isSettled(this) )
    SpiceActivity::registerObserver(this);
  return 0;
};

// Line 113: range 0000000017FD42B6-0000000017FD44BC
void __cdecl SpiceActivity::onPreStart(SpiceActivity *const this)
{
  __int64 v1; // rsi
  uint32_t v2; // ecx
  char v3; // dl
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rdx
  std::unordered_map<unsigned int,data::ActivitySpiceStageDataExcelConfig>::const_iterator __for_begin; // [rsp+10h] [rbp-50h] BYREF
  std::unordered_map<unsigned int,data::ActivitySpiceStageDataExcelConfig>::const_iterator __for_end; // [rsp+18h] [rbp-48h] BYREF
  const ActivitySpiceExcelConfigMgr *config_mgr; // [rsp+20h] [rbp-40h]
  const std::unordered_map<unsigned int,data::ActivitySpiceStageDataExcelConfig> *__for_range; // [rsp+28h] [rbp-38h]
  const std::pair<unsigned int const,data::ActivitySpiceStageDataExcelConfig> *v12; // [rsp+30h] [rbp-30h]
  std::tuple_element<0,const std::pair<unsigned int const,data::ActivitySpiceStageDataExcelConfig> >::type *stage_id; // [rsp+38h] [rbp-28h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivitySpiceStageDataExcelConfig> >::type *_; // [rsp+40h] [rbp-20h]
  SpiceStageData *stage_data; // [rsp+48h] [rbp-18h]
  std::shared_ptr<Config> v16; // [rsp+50h] [rbp-10h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v16);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v16)->design_config.txt_config_mgr.activity_spice_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v16);
  std::map<unsigned int,SpiceStageData>::clear(&this->stage_data_map_);
  __for_range = &config_mgr->activity_spice_stage_data_excel_config_map;
  __for_begin._M_cur = std::unordered_map<unsigned int,data::ActivitySpiceStageDataExcelConfig>::begin(&config_mgr->activity_spice_stage_data_excel_config_map)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,data::ActivitySpiceStageDataExcelConfig>::end(&config_mgr->activity_spice_stage_data_excel_config_map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ActivitySpiceStageDataExcelConfig>,false>(
            &__for_begin,
            &__for_end) )
  {
    v12 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivitySpiceStageDataExcelConfig>,false,false>::operator*(&__for_begin);
    stage_id = std::get<0ul,unsigned int const,data::ActivitySpiceStageDataExcelConfig>(v12);
    _ = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivitySpiceStageDataExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivitySpiceStageDataExcelConfig>(v12);
    stage_data = std::map<unsigned int,SpiceStageData>::operator[](&this->stage_data_map_, stage_id);
    v1 = ((unsigned __int8)stage_id & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)stage_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(stage_id);
    }
    v2 = *stage_id;
    v3 = *(_BYTE *)(((unsigned __int64)stage_data >> 3) + 0x7FFF8000);
    LOBYTE(v1) = v3 != 0;
    v4 = (v3 != 0) & (unsigned __int8)((char)(((unsigned __int8)stage_data & 7) + 3) >= v3);
    if ( (_BYTE)v4 )
      __asan_report_store4(stage_data, v1, v4);
    stage_data->stage_id = v2;
    v5 = ((_BYTE)stage_data + 4) & 7;
    v6 = (*(_BYTE *)(((unsigned __int64)&stage_data->is_open >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&stage_data->is_open >> 3) + 0x7FFF8000));
    if ( (_BYTE)v6 )
      __asan_report_store1(&stage_data->is_open, v5, v6);
    stage_data->is_open = 0;
    v7 = (*(_BYTE *)(((unsigned __int64)&stage_data->success_times >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)stage_data + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&stage_data->success_times >> 3) + 0x7FFF8000));
    if ( (_BYTE)v7 )
      __asan_report_store4(&stage_data->success_times, (((_BYTE)stage_data + 8) & 7u) + 3, v7);
    stage_data->success_times = 0;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivitySpiceStageDataExcelConfig>,false,false>::operator++(&__for_begin);
  }
};

// Line 126: range 0000000017FD44BE-0000000017FD4831
int32_t __cdecl SpiceActivity::execAction(SpiceActivity *const this, const data::NewActivityExec *action_exec)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // r13
  common::milog::MiLogStream *v6; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v8; // rax
  std::vector<std::string>::const_iterator __for_begin; // [rsp+10h] [rbp-A0h] BYREF
  std::vector<std::string>::const_iterator __for_end; // [rsp+18h] [rbp-98h] BYREF
  const std::vector<std::string> *__for_range; // [rsp+20h] [rbp-90h]
  const std::string *stage_id_str; // [rsp+28h] [rbp-88h]
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
  *(_QWORD *)(v2 + 8) = "1 32 4 12 stage_id:139";
  *(_QWORD *)(v2 + 16) = SpiceActivity::execAction;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&action_exec->type);
  }
  if ( action_exec->type == NEW_ACTIVITY_ACTION_OPEN_SPICE_STAGE )
  {
    if ( std::vector<std::string>::size(&action_exec->param) )
    {
      __for_range = &action_exec->param;
      __for_begin._M_current = std::vector<std::string>::begin(&action_exec->param)._M_current;
      __for_end._M_current = std::vector<std::string>::end(&action_exec->param)._M_current;
      while ( __gnu_cxx::operator!=<std::string const*,std::vector<std::string>>(&__for_begin, &__for_end) )
      {
        stage_id_str = __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator*(&__for_begin);
        *(_DWORD *)(v2 + 32) = 0;
        if ( !common::tools::StringUtils::strToNum<unsigned int>(stage_id_str, (unsigned int *)(v2 + 32), 1)
          && SpiceActivity::openStage(this, *(_DWORD *)(v2 + 32)) )
        {
          common::milog::MiLogStream::create(
            &v13,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/spice_activity.cpp",
            "execAction",
            146);
          v8 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                 &v13,
                 (const char (*)[37])"[SPICE] openStage failed, stage_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 32));
          common::milog::MiLogStream::~MiLogStream(&v13);
          result = -1;
          goto LABEL_17;
        }
        __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator++(&__for_begin);
      }
      BaseActivity::notifyClientData(this, 0);
      result = 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/spice_activity.cpp",
        "execAction",
        133);
      v5 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             &v13,
             (const char (*)[27])"[SPICE] action param size ");
      __for_end._M_current = (const std::string *)std::vector<std::string>::size(&action_exec->param);
      v6 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
             v5,
             (const unsigned __int64 *)&__for_end);
      common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v6, (const char (*)[12])off_2648B580);
      common::milog::MiLogStream::~MiLogStream(&v13);
      result = -1;
    }
  }
  else
  {
    result = BaseActivity::execAction(this, action_exec);
  }
LABEL_17:
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

// Line 160: range 0000000017FD4832-0000000017FD48BA
void __cdecl SpiceActivity::onStart(SpiceActivity *const this)
{
  common::milog::MiLogStream v1; // [rsp+10h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v1,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/spice_activity.cpp",
    "onStart",
    161);
  common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
    &v1,
    (const char (*)[33])"[SPICE] SpiceActivity::onStart()");
  common::milog::MiLogStream::~MiLogStream(&v1);
  SpiceActivity::registerObserver(this);
};

// Line 166: range 0000000017FD48BC-0000000017FD48D6
void __cdecl SpiceActivity::onSettle(SpiceActivity *const this)
{
  SpiceActivity::unregisterObserver(this);
};

// Line 171: range 0000000017FD48D8-0000000017FD4986
void __cdecl SpiceActivity::onClear(SpiceActivity *const this)
{
  __int64 v1; // rsi
  uint32_t *p_increase_avatar_fetter_limit_times; // rdx
  __int64 v3; // rdx

  std::map<unsigned int,SpiceStageData>::clear(&this->stage_data_map_);
  p_increase_avatar_fetter_limit_times = &this->increase_avatar_fetter_limit_times_;
  if ( *(_BYTE *)(((unsigned __int64)p_increase_avatar_fetter_limit_times >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_increase_avatar_fetter_limit_times >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->increase_avatar_fetter_limit_times_, v1, p_increase_avatar_fetter_limit_times);
  }
  this->increase_avatar_fetter_limit_times_ = 0;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->current_increase_avatar_fetter_times_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->current_increase_avatar_fetter_times_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store4(&this->current_increase_avatar_fetter_times_, (((_BYTE)this - 36) & 7u) + 3, v3);
  this->current_increase_avatar_fetter_times_ = 0;
};

// Line 178: range 0000000017FD4988-0000000017FD4CB0
void __cdecl SpiceActivity::registerObserver(SpiceActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::weak_ptr<SpiceActivity> *p_this_wtr; // [rsp+10h] [rbp-E0h]
  std::weak_ptr<SpiceActivity> v5; // [rsp+20h] [rbp-D0h] BYREF
  std::enable_shared_from_this<BaseActivity> v6; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v7; // [rsp+40h] [rbp-B0h] BYREF
  char v8[144]; // [rsp+60h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 12 this_ptr:179 64 16 12 this_wtr:185";
  *(_QWORD *)(v1 + 16) = SpiceActivity::registerObserver;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  std::enable_shared_from_this<BaseActivity>::shared_from_this(&v6);
  std::dynamic_pointer_cast<SpiceActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)(v1 + 32));
  std::shared_ptr<BaseActivity>::~shared_ptr((std::shared_ptr<BaseActivity> *const)&v6);
  if ( std::operator==<SpiceActivity>(0LL, (const std::shared_ptr<SpiceActivity> *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/spice_activity.cpp",
      "registerObserver",
      182);
    common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
      &v7,
      (const char (*)[49])"[SPICE] dynamic cast to SpiceActivity ptr fails.");
    common::milog::MiLogStream::~MiLogStream(&v7);
  }
  else
  {
    std::weak_ptr<SpiceActivity>::weak_ptr<SpiceActivity,void>(
      (std::weak_ptr<SpiceActivity> *const)(v1 + 64),
      (const std::shared_ptr<SpiceActivity> *)(v1 + 32));
    if ( std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->finish_giving_obs_wtr_) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      p_this_wtr = (std::weak_ptr<SpiceActivity> *)Player::getEventComp(this->player_);
      std::weak_ptr<SpiceActivity>::weak_ptr(&v5, (const std::weak_ptr<SpiceActivity> *)(v1 + 64));
      PlayerEventComp::registerObserver<SpiceActivity,FinishItemGivingEvent>(
        (PlayerEventComp *const)&v6,
        p_this_wtr,
        (void (*)(SpiceActivity *, const FinishItemGivingEvent *))&v5);
      std::weak_ptr<Observer>::operator=(&this->finish_giving_obs_wtr_, (std::weak_ptr<Observer> *)&v6);
      std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v6);
      std::weak_ptr<SpiceActivity>::~weak_ptr(&v5);
    }
    std::weak_ptr<SpiceActivity>::~weak_ptr((std::weak_ptr<SpiceActivity> *const)(v1 + 64));
  }
  std::shared_ptr<SpiceActivity>::~shared_ptr((std::shared_ptr<SpiceActivity> *const)(v1 + 32));
  if ( v8 == (char *)v1 )
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

// Line 193: range 0000000017FD4CB2-0000000017FD4D38
void __cdecl SpiceActivity::unregisterObserver(SpiceActivity *const this)
{
  PlayerEventComp *EventComp; // rax

  if ( !std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->finish_giving_obs_wtr_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    EventComp = Player::getEventComp(this->player_);
    PlayerEventComp::unregisterObserver(EventComp, &this->finish_giving_obs_wtr_);
    std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::reset(&this->finish_giving_obs_wtr_);
  }
};

// Line 202: range 0000000017FD4D3A-0000000017FD5DD5
int32_t __cdecl SpiceActivity::onSpiceActivityFinishMakeSpiceReq(
        SpiceActivity *const this,
        const proto::SpiceActivityFinishMakeSpiceReq *req,
        proto::SpiceActivityFinishMakeSpiceRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int32_t v7; // r14d
  common::milog::MiLogStream *v8; // rbx
  std::_Rb_tree_iterator<std::pair<unsigned int const,SpiceStageData> >::pointer v9; // rax
  bool *p_is_open; // rax
  common::milog::MiLogStream *v11; // rbx
  PlayerEventComp *EventComp; // r14
  ActivitySpiceExcelConfigMgr *p_activity_spice_config_mgr; // r14
  uint32_t v14; // eax
  common::milog::MiLogStream *v15; // rbx
  std::vector<unsigned int>::size_type v16; // r14
  common::milog::MiLogStream *v17; // rbx
  std::vector<unsigned int>::size_type v18; // r14
  std::vector<unsigned int>::const_reference v19; // rax
  _DWORD *v20; // rdx
  std::vector<unsigned int>::const_reference v21; // rax
  _DWORD *v22; // rdx
  ActivitySpiceExcelConfigMgr *v23; // rcx
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  PlayerEventComp *v26; // r14
  PlayerEventComp *v27; // r14
  int32_t result; // eax
  std::map<unsigned int,SpiceStageData>::key_type __x; // [rsp+2Ch] [rbp-204h] BYREF
  uint32_t i; // [rsp+30h] [rbp-200h]
  int32_t ret; // [rsp+34h] [rbp-1FCh]
  SpiceStageData *stage_data; // [rsp+38h] [rbp-1F8h]
  const data::ActivitySpiceStageDataExcelConfig *stage_config_ptr; // [rsp+40h] [rbp-1F0h]
  PlayerItemComp *item_comp; // [rsp+48h] [rbp-1E8h]
  const data::ActivitySpiceExcelConfig *spice_config_ptr; // [rsp+50h] [rbp-1E0h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,SpiceStageData> >::_Self __y; // [rsp+58h] [rbp-1D8h] BYREF
  common::milog::MiLogStream v37; // [rsp+60h] [rbp-1D0h] BYREF
  char v38[432]; // [rsp+80h] [rbp-1B0h] BYREF

  v3 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(384LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "8 32 8 8 iter:209 64 16 9 param:272 96 16 13 event_ptr:303 128 16 24 successful_event_ptr:306 16"
                        "0 16 14 item_param:249 192 24 24 input_item_param_vec:246 256 24 25 output_item_param_vec:265 32"
                        "0 24 17 action_reason:279";
  *(_QWORD *)(v3 + 16) = SpiceActivity::onSpiceActivityFinishMakeSpiceReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = -219021312;
  v5[536862726] = -234881024;
  v5[536862727] = -218959118;
  v5[536862728] = -234881024;
  v5[536862729] = -218959118;
  v5[536862730] = -218103808;
  v5[536862731] = -202116109;
  if ( !BaseActivity::isOpening(this, 0) || BaseActivity::isSettled(this) )
  {
    v7 = -1;
  }
  else
  {
    __x = proto::SpiceActivityFinishMakeSpiceReq::stage_id(req);
    *(std::map<unsigned int,SpiceStageData>::iterator *)(v3 + 32) = std::map<unsigned int,SpiceStageData>::find(
                                                                      &this->stage_data_map_,
                                                                      &__x);
    __y._M_node = std::map<unsigned int,SpiceStageData>::end(&this->stage_data_map_)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,SpiceStageData> >::_Self *)(v3 + 32),
           &__y) )
    {
      common::milog::MiLogStream::create(
        &v37,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/spice_activity.cpp",
        "onSpiceActivityFinishMakeSpiceReq",
        212);
      v8 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
             &v37,
             (const char (*)[34])"[SPICE] error stage_id, stage_id:");
      __x = proto::SpiceActivityFinishMakeSpiceReq::stage_id(req);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &__x);
      common::milog::MiLogStream::~MiLogStream(&v37);
      v7 = -1;
    }
    else
    {
      v9 = std::_Rb_tree_iterator<std::pair<unsigned int const,SpiceStageData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,SpiceStageData> > *const)(v3 + 32));
      stage_data = &v9->second;
      p_is_open = &v9->second.is_open;
      if ( *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)p_is_open & 7) >= *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(p_is_open);
      }
      if ( !stage_data->is_open )
      {
        common::milog::MiLogStream::create(
          &v37,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/spice_activity.cpp",
          "onSpiceActivityFinishMakeSpiceReq",
          218);
        v11 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                &v37,
                (const char (*)[37])"[SPICE] stage_id not open, stage_id:");
        __x = proto::SpiceActivityFinishMakeSpiceReq::stage_id(req);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &__x);
        common::milog::MiLogStream::~MiLogStream(&v37);
        v7 = -1;
      }
      else if ( !proto::SpiceActivityFinishMakeSpiceReq::is_success(req) )
      {
        __x = proto::SpiceActivityFinishMakeSpiceReq::stage_id(req);
        common::tools::perf::make_shared<SpiceMakeFormulaTimesEvent,unsigned int>((unsigned int *)(v3 + 128), &__x);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        EventComp = Player::getEventComp(this->player_);
        std::shared_ptr<BaseEvent>::shared_ptr<SpiceMakeFormulaTimesEvent,void>(
          (std::shared_ptr<BaseEvent> *const)(v3 + 160),
          (const std::shared_ptr<SpiceMakeFormulaTimesEvent> *)(v3 + 128));
        PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)(v3 + 160));
        std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v3 + 160));
        SpiceActivity::logPlayerFinishMakeSpice(this, req);
        v7 = 0;
        std::shared_ptr<SpiceMakeFormulaTimesEvent>::~shared_ptr((std::shared_ptr<SpiceMakeFormulaTimesEvent> *const)(v3 + 128));
      }
      else
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)(v3 + 160));
        p_activity_spice_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160))->design_config.txt_config_mgr.activity_spice_config_mgr;
        v14 = proto::SpiceActivityFinishMakeSpiceReq::stage_id(req);
        stage_config_ptr = data::ActivitySpiceExcelConfigMgrBase::findActivitySpiceStageDataExcelConfig(
                             p_activity_spice_config_mgr,
                             v14);
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 160));
        if ( stage_config_ptr )
        {
          v16 = std::vector<unsigned int>::size(&stage_config_ptr->material_id_list);
          if ( v16 == std::vector<unsigned int>::size(&stage_config_ptr->material_num_list) )
          {
            std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v3 + 192));
            for ( i = 0; ; ++i )
            {
              v18 = i;
              if ( v18 >= std::vector<unsigned int>::size(&stage_config_ptr->material_id_list) )
                break;
              *(_DWORD *)(v3 + 160) = 0;
              *(_DWORD *)(v3 + 164) = 0;
              *(_DWORD *)(v3 + 168) = 0;
              *(_DWORD *)(v3 + 172) = 0;
              v19 = std::vector<unsigned int>::operator[](&stage_config_ptr->material_id_list, i);
              v20 = v19;
              if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v19);
              }
              *(_DWORD *)(v3 + 160) = *v20;
              v21 = std::vector<unsigned int>::operator[](&stage_config_ptr->material_num_list, i);
              v22 = v21;
              if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v21 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v21);
              }
              *(_DWORD *)(v3 + 164) = *v22;
              std::vector<ItemParam>::push_back(
                (std::vector<ItemParam> *const)(v3 + 192),
                (const std::vector<ItemParam>::value_type *)(v3 + 160));
            }
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            item_comp = Player::getItemComp(this->player_);
            if ( PlayerItemComp::checkSubItemBatch(item_comp, (const std::vector<ItemParam> *)(v3 + 192)) )
            {
              common::milog::MiLogStream::create(
                &v37,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/spice_activity.cpp",
                "onSpiceActivityFinishMakeSpiceReq",
                260);
              common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                &v37,
                (const char (*)[33])"[SPICE] checkSubItemBatch fails.");
              common::milog::MiLogStream::~MiLogStream(&v37);
              v7 = 609;
            }
            else
            {
              std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v3 + 256));
              ServiceBox::findService<GameserverService>();
              GameserverService::getConfig((GameserverService *const)(v3 + 160));
              v23 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160))->design_config.txt_config_mgr.activity_spice_config_mgr;
              if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&this->activity_id_);
              }
              spice_config_ptr = ActivitySpiceExcelConfigMgr::findActivitySpiceExcelConfigByActivityId(
                                   v23,
                                   this->activity_id_);
              std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 160));
              if ( spice_config_ptr )
              {
                *(_DWORD *)(v3 + 64) = 0;
                *(_DWORD *)(v3 + 68) = 0;
                *(_DWORD *)(v3 + 72) = 0;
                *(_DWORD *)(v3 + 76) = 0;
                if ( *(_BYTE *)(((unsigned __int64)&spice_config_ptr->spice_id >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)spice_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&spice_config_ptr->spice_id >> 3)
                                                                                  + 0x7FFF8000) )
                {
                  __asan_report_load4(&spice_config_ptr->spice_id);
                }
                *(_DWORD *)(v3 + 64) = spice_config_ptr->spice_id;
                *(_DWORD *)(v3 + 68) = 1;
                std::vector<ItemParam>::push_back(
                  (std::vector<ItemParam> *const)(v3 + 256),
                  (const std::vector<ItemParam>::value_type *)(v3 + 64));
                common::milog::MiLogStream::create(
                  &v37,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/player/activity/spice_activity.cpp",
                  "onSpiceActivityFinishMakeSpiceReq",
                  276);
                v25 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
                        &v37,
                        (const char (*)[66])"[SPICE] onSpiceActivityFinishMakeSpiceReq, output_item_param_vec:");
                common::milog::MiLogStream::operator<<<ItemParam>(v25, (const std::vector<ItemParam> *)(v3 + 256));
                common::milog::MiLogStream::~MiLogStream(&v37);
                ActionReason::ActionReason(
                  (ActionReason *const)(v3 + 320),
                  ACTION_REASON_SPICE_ACTIVITY_MAKE_SPICE,
                  ITEM_LIMIT_ACTIVITY_SPICE);
                ret = PlayerItemComp::checkAddItemBatch(
                        item_comp,
                        (const std::vector<ItemParam> *)(v3 + 256),
                        (const ActionReason *)(v3 + 320));
                if ( ret )
                {
                  common::milog::MiLogStream::create(
                    &v37,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/activity/spice_activity.cpp",
                    "onSpiceActivityFinishMakeSpiceReq",
                    283);
                  common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                    &v37,
                    (const char (*)[33])"[SPICE] checkAddItemBatch failed");
                  common::milog::MiLogStream::~MiLogStream(&v37);
                  v7 = ret;
                }
                else
                {
                  SubItemReason::SubItemReason((SubItemReason *const)&__y, (const ActionReason *)(v3 + 320));
                  ret = PlayerItemComp::subItemBatch(
                          item_comp,
                          (const std::vector<ItemParam> *)(v3 + 192),
                          (const SubItemReason *)&__y);
                  if ( ret )
                  {
                    common::milog::MiLogStream::create(
                      &v37,
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/player/activity/spice_activity.cpp",
                      "onSpiceActivityFinishMakeSpiceReq",
                      291);
                    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                      &v37,
                      (const char (*)[28])"[SPICE] subItemBatch failed");
                    common::milog::MiLogStream::~MiLogStream(&v37);
                    v7 = ret;
                  }
                  else
                  {
                    ret = PlayerItemComp::addItemBatch(
                            item_comp,
                            (const std::vector<ItemParam> *)(v3 + 256),
                            (const ActionReason *)(v3 + 320),
                            0LL);
                    if ( ret )
                    {
                      common::milog::MiLogStream::create(
                        &v37,
                        &common::milog::MiLogDefault::default_log_obj_,
                        3u,
                        "./src/player/activity/spice_activity.cpp",
                        "onSpiceActivityFinishMakeSpiceReq",
                        297);
                      common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                        &v37,
                        (const char (*)[28])"[SPICE] addItemBatch failed");
                      common::milog::MiLogStream::~MiLogStream(&v37);
                      v7 = ret;
                    }
                    else
                    {
                      if ( *(_BYTE *)(((unsigned __int64)&stage_data->success_times >> 3) + 0x7FFF8000) != 0
                        && (char)((((_BYTE)stage_data + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&stage_data->success_times >> 3)
                                                                                 + 0x7FFF8000) )
                      {
                        __asan_report_load4(&stage_data->success_times);
                      }
                      ++stage_data->success_times;
                      __x = proto::SpiceActivityFinishMakeSpiceReq::stage_id(req);
                      common::tools::perf::make_shared<SpiceMakeFormulaTimesEvent,unsigned int>(
                        (unsigned int *)(v3 + 96),
                        &__x);
                      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                        __asan_report_load8(&this->player_);
                      v26 = Player::getEventComp(this->player_);
                      std::shared_ptr<BaseEvent>::shared_ptr<SpiceMakeFormulaTimesEvent,void>(
                        (std::shared_ptr<BaseEvent> *const)(v3 + 160),
                        (const std::shared_ptr<SpiceMakeFormulaTimesEvent> *)(v3 + 96));
                      PlayerEventComp::notifyEvent(v26, (BaseEventPtr *)(v3 + 160));
                      std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v3 + 160));
                      __x = proto::SpiceActivityFinishMakeSpiceReq::stage_id(req);
                      common::tools::perf::make_shared<SpiceMakeFormulaSuccessfulTimesEvent,unsigned int>(
                        (unsigned int *)(v3 + 128),
                        &__x);
                      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                        __asan_report_load8(&this->player_);
                      v27 = Player::getEventComp(this->player_);
                      std::shared_ptr<BaseEvent>::shared_ptr<SpiceMakeFormulaSuccessfulTimesEvent,void>(
                        (std::shared_ptr<BaseEvent> *const)(v3 + 160),
                        (const std::shared_ptr<SpiceMakeFormulaSuccessfulTimesEvent> *)(v3 + 128));
                      PlayerEventComp::notifyEvent(v27, (BaseEventPtr *)(v3 + 160));
                      std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v3 + 160));
                      SpiceActivity::logPlayerFinishMakeSpice(this, req);
                      v7 = 0;
                      std::shared_ptr<SpiceMakeFormulaSuccessfulTimesEvent>::~shared_ptr((std::shared_ptr<SpiceMakeFormulaSuccessfulTimesEvent> *const)(v3 + 128));
                      std::shared_ptr<SpiceMakeFormulaTimesEvent>::~shared_ptr((std::shared_ptr<SpiceMakeFormulaTimesEvent> *const)(v3 + 96));
                    }
                  }
                }
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v37,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/activity/spice_activity.cpp",
                  "onSpiceActivityFinishMakeSpiceReq",
                  269);
                v24 = common::milog::MiLogStream::operator<<<char [70],(char *[70])0>(
                        &v37,
                        (const char (*)[70])"[SPICE] findActivitySpiceExcelConfigByActivityId fails, activity_id_:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &this->activity_id_);
                common::milog::MiLogStream::~MiLogStream(&v37);
                v7 = -1;
              }
              std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v3 + 256));
            }
            std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v3 + 192));
          }
          else
          {
            common::milog::MiLogStream::create(
              &v37,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/spice_activity.cpp",
              "onSpiceActivityFinishMakeSpiceReq",
              242);
            v17 = common::milog::MiLogStream::operator<<<char [69],(char *[69])0>(
                    &v37,
                    (const char (*)[69])"[SPICE] material_id_list and  material_num_list not match, stage_id:");
            __x = proto::SpiceActivityFinishMakeSpiceReq::stage_id(req);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &__x);
            common::milog::MiLogStream::~MiLogStream(&v37);
            v7 = -1;
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v37,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/spice_activity.cpp",
            "onSpiceActivityFinishMakeSpiceReq",
            237);
          v15 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
                  &v37,
                  (const char (*)[63])"[SPICE] findActivitySpiceStageDataExcelConfig fails, stage_id:");
          __x = proto::SpiceActivityFinishMakeSpiceReq::stage_id(req);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &__x);
          common::milog::MiLogStream::~MiLogStream(&v37);
          v7 = -1;
        }
      }
    }
  }
  result = v7;
  if ( v38 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
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
  }
  return result;
};

// Line 314: range 0000000017FD5DD6-0000000017FD6C37
int32_t __cdecl SpiceActivity::onSpiceActivityProcessFoodReq(
        SpiceActivity *const this,
        const proto::SpiceActivityProcessFoodReq *req,
        proto::SpiceActivityProcessFoodRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int32_t v7; // r14d
  ActivitySpiceExcelConfigMgr *p_activity_spice_config_mgr; // r14
  uint32_t v9; // eax
  common::milog::MiLogStream *v10; // r14
  ActivitySpiceExcelConfigMgr *v11; // rcx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  ActivitySpiceExcelConfigMgr *v14; // r14
  uint32_t v15; // eax
  common::milog::MiLogStream *v16; // r14
  common::milog::MiLogStream *v17; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-1E4h] BYREF
  uint32_t total_count; // [rsp+30h] [rbp-1E0h]
  int32_t ret; // [rsp+34h] [rbp-1DCh]
  google::protobuf::RepeatedPtrField<proto::ItemParam>::const_iterator __for_begin; // [rsp+38h] [rbp-1D8h] BYREF
  const google::protobuf::RepeatedPtrField<proto::ItemParam> *__for_range; // [rsp+40h] [rbp-1D0h]
  const data::ActivitySpiceExcelConfig *spice_config_ptr; // [rsp+48h] [rbp-1C8h]
  PlayerItemComp *item_comp; // [rsp+50h] [rbp-1C0h]
  const google::protobuf::RepeatedPtrField<proto::ItemParam> *__for_range_0; // [rsp+58h] [rbp-1B8h]
  std::vector<ItemParam> *__for_range_1; // [rsp+60h] [rbp-1B0h]
  ItemParam *p; // [rsp+68h] [rbp-1A8h]
  proto::ItemParam *proto_item; // [rsp+70h] [rbp-1A0h]
  const proto::ItemParam *item_param; // [rsp+78h] [rbp-198h]
  const data::ActivitySpiceFoodExcelConfig *spice_food_config_ptr_0; // [rsp+80h] [rbp-190h]
  const proto::ItemParam *input_normal_food; // [rsp+88h] [rbp-188h]
  const data::ActivitySpiceFoodExcelConfig *spice_food_config_ptr; // [rsp+90h] [rbp-180h]
  google::protobuf::RepeatedPtrField<proto::ItemParam>::const_iterator __for_end; // [rsp+98h] [rbp-178h] BYREF
  common::milog::MiLogStream v36; // [rsp+A0h] [rbp-170h] BYREF
  char v37[336]; // [rsp+C0h] [rbp-150h] BYREF

  v3 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 16 15 input_spice:352 64 16 9 param:377 96 24 24 input_item_param_vec:321 160 24 25 output_"
                        "item_param_vec:368 224 24 17 action_reason:385";
  *(_QWORD *)(v3 + 16) = SpiceActivity::onSpiceActivityProcessFoodReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -219021312;
  v5[536862723] = -234881024;
  v5[536862724] = -218959118;
  v5[536862725] = -234881024;
  v5[536862726] = -218959118;
  v5[536862727] = -218103808;
  v5[536862728] = -202116109;
  if ( !BaseActivity::isOpening(this, 0) || BaseActivity::isSettled(this) )
  {
    v7 = -1;
  }
  else
  {
    std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v3 + 96));
    total_count = 0;
    __for_range = proto::SpiceActivityProcessFoodReq::normal_food_list(req);
    __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::ItemParam>::begin(__for_range).it_;
    __for_end.it_ = google::protobuf::RepeatedPtrField<proto::ItemParam>::end(__for_range).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<proto::ItemParam const>::operator!=(
              &__for_begin,
              &__for_end) )
    {
      input_normal_food = google::protobuf::internal::RepeatedPtrIterator<proto::ItemParam const>::operator*(&__for_begin);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v3 + 64));
      p_activity_spice_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64))->design_config.txt_config_mgr.activity_spice_config_mgr;
      v9 = proto::ItemParam::item_id(input_normal_food);
      spice_food_config_ptr = data::ActivitySpiceExcelConfigMgrBase::findActivitySpiceFoodExcelConfig(
                                p_activity_spice_config_mgr,
                                v9);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 64));
      if ( !spice_food_config_ptr )
      {
        common::milog::MiLogStream::create(
          &v36,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/spice_activity.cpp",
          "onSpiceActivityProcessFoodReq",
          330);
        v10 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
                &v36,
                (const char (*)[64])"[SPICE] findActivitySpiceFoodExcelConfig fails, normal_food_id:");
        val = proto::ItemParam::item_id(input_normal_food);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
        common::milog::MiLogStream::~MiLogStream(&v36);
        v7 = -1;
        goto LABEL_49;
      }
      *(_DWORD *)(v3 + 64) = 0;
      *(_DWORD *)(v3 + 68) = 0;
      *(_DWORD *)(v3 + 72) = 0;
      *(_DWORD *)(v3 + 76) = 0;
      *(_DWORD *)(v3 + 64) = proto::ItemParam::item_id(input_normal_food);
      *(_DWORD *)(v3 + 68) = proto::ItemParam::count(input_normal_food);
      std::vector<ItemParam>::push_back(
        (std::vector<ItemParam> *const)(v3 + 96),
        (const std::vector<ItemParam>::value_type *)(v3 + 64));
      total_count += proto::ItemParam::count(input_normal_food);
      google::protobuf::internal::RepeatedPtrIterator<proto::ItemParam const>::operator++(&__for_begin);
    }
    if ( total_count )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v3 + 64));
      v11 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64))->design_config.txt_config_mgr.activity_spice_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->activity_id_);
      }
      spice_config_ptr = ActivitySpiceExcelConfigMgr::findActivitySpiceExcelConfigByActivityId(v11, this->activity_id_);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 64));
      if ( spice_config_ptr )
      {
        *(_DWORD *)(v3 + 32) = 0;
        *(_DWORD *)(v3 + 36) = 0;
        *(_DWORD *)(v3 + 40) = 0;
        *(_DWORD *)(v3 + 44) = 0;
        if ( *(_BYTE *)(((unsigned __int64)&spice_config_ptr->spice_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)spice_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&spice_config_ptr->spice_id >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4(&spice_config_ptr->spice_id);
        }
        *(_DWORD *)(v3 + 32) = spice_config_ptr->spice_id;
        *(_DWORD *)(v3 + 36) = total_count;
        std::vector<ItemParam>::push_back(
          (std::vector<ItemParam> *const)(v3 + 96),
          (const std::vector<ItemParam>::value_type *)(v3 + 32));
        common::milog::MiLogStream::create(
          &v36,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/spice_activity.cpp",
          "onSpiceActivityProcessFoodReq",
          357);
        v13 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
                &v36,
                (const char (*)[61])"[SPICE] onSpiceActivityProcessFoodReq, input_item_param_vec:");
        common::milog::MiLogStream::operator<<<ItemParam>(v13, (const std::vector<ItemParam> *)(v3 + 96));
        common::milog::MiLogStream::~MiLogStream(&v36);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        item_comp = Player::getItemComp(this->player_);
        if ( PlayerItemComp::checkSubItemBatch(item_comp, (const std::vector<ItemParam> *)(v3 + 96)) )
        {
          common::milog::MiLogStream::create(
            &v36,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/spice_activity.cpp",
            "onSpiceActivityProcessFoodReq",
            363);
          common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
            &v36,
            (const char (*)[33])"[SPICE] checkSubItemBatch fails.");
          common::milog::MiLogStream::~MiLogStream(&v36);
          v7 = 609;
        }
        else
        {
          std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v3 + 160));
          __for_range_0 = proto::SpiceActivityProcessFoodReq::normal_food_list(req);
          __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::ItemParam>::begin(__for_range_0).it_;
          __for_end.it_ = google::protobuf::RepeatedPtrField<proto::ItemParam>::end(__for_range_0).it_;
          while ( google::protobuf::internal::RepeatedPtrIterator<proto::ItemParam const>::operator!=(
                    &__for_begin,
                    &__for_end) )
          {
            item_param = google::protobuf::internal::RepeatedPtrIterator<proto::ItemParam const>::operator*(&__for_begin);
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)(v3 + 64));
            v14 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64))->design_config.txt_config_mgr.activity_spice_config_mgr;
            v15 = proto::ItemParam::item_id(item_param);
            spice_food_config_ptr_0 = data::ActivitySpiceExcelConfigMgrBase::findActivitySpiceFoodExcelConfig(v14, v15);
            std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 64));
            if ( !spice_food_config_ptr_0 )
            {
              common::milog::MiLogStream::create(
                &v36,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/spice_activity.cpp",
                "onSpiceActivityProcessFoodReq",
                374);
              v16 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
                      &v36,
                      (const char (*)[64])"[SPICE] findActivitySpiceFoodExcelConfig fails, normal_food_id:");
              val = proto::ItemParam::item_id(item_param);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &val);
              common::milog::MiLogStream::~MiLogStream(&v36);
              v7 = -1;
              goto LABEL_48;
            }
            *(_DWORD *)(v3 + 64) = 0;
            *(_DWORD *)(v3 + 68) = 0;
            *(_DWORD *)(v3 + 72) = 0;
            *(_DWORD *)(v3 + 76) = 0;
            if ( *(_BYTE *)(((unsigned __int64)&spice_food_config_ptr_0->special_food_id >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)spice_food_config_ptr_0 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&spice_food_config_ptr_0->special_food_id >> 3)
                                                                                     + 0x7FFF8000) )
            {
              __asan_report_load4(&spice_food_config_ptr_0->special_food_id);
            }
            *(_DWORD *)(v3 + 64) = spice_food_config_ptr_0->special_food_id;
            *(_DWORD *)(v3 + 68) = proto::ItemParam::count(item_param);
            std::vector<ItemParam>::push_back(
              (std::vector<ItemParam> *const)(v3 + 160),
              (const std::vector<ItemParam>::value_type *)(v3 + 64));
            google::protobuf::internal::RepeatedPtrIterator<proto::ItemParam const>::operator++(&__for_begin);
          }
          common::milog::MiLogStream::create(
            &v36,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/spice_activity.cpp",
            "onSpiceActivityProcessFoodReq",
            382);
          v17 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
                  &v36,
                  (const char (*)[62])"[SPICE] onSpiceActivityProcessFoodReq, output_item_param_vec:");
          common::milog::MiLogStream::operator<<<ItemParam>(v17, (const std::vector<ItemParam> *)(v3 + 160));
          common::milog::MiLogStream::~MiLogStream(&v36);
          ActionReason::ActionReason(
            (ActionReason *const)(v3 + 224),
            ACTION_REASON_SPICE_ACTIVITY_PROCESS_FOOD,
            ITEM_LIMIT_ACTIVITY_SPICE);
          ret = PlayerItemComp::checkAddItemBatch(
                  item_comp,
                  (const std::vector<ItemParam> *)(v3 + 160),
                  (const ActionReason *)(v3 + 224));
          if ( ret )
          {
            common::milog::MiLogStream::create(
              &v36,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/spice_activity.cpp",
              "onSpiceActivityProcessFoodReq",
              389);
            common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v36,
              (const char (*)[33])"[SPICE] checkAddItemBatch failed");
            common::milog::MiLogStream::~MiLogStream(&v36);
            v7 = ret;
          }
          else
          {
            __for_range_1 = (std::vector<ItemParam> *)(v3 + 160);
            __for_begin.it_ = (void *const *)std::vector<ItemParam>::begin((std::vector<ItemParam> *const)(v3 + 160))._M_current;
            __for_end.it_ = (void *const *)std::vector<ItemParam>::end(__for_range_1)._M_current;
            while ( __gnu_cxx::operator!=<ItemParam *,std::vector<ItemParam>>(
                      (const __gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> > *)&__for_begin,
                      (const __gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> > *)&__for_end) )
            {
              p = __gnu_cxx::__normal_iterator<ItemParam *,std::vector<ItemParam>>::operator*((const __gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> > *const)&__for_begin);
              proto_item = proto::SpiceActivityProcessFoodRsp::add_special_food_list(rsp_0);
              if ( *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)p & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(p);
              }
              proto::ItemParam::set_item_id(proto_item, p->item_id);
              if ( *(_BYTE *)(((unsigned __int64)&p->count >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)p + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&p->count >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(&p->count);
              }
              proto::ItemParam::set_count(proto_item, p->count);
              __gnu_cxx::__normal_iterator<ItemParam *,std::vector<ItemParam>>::operator++((__gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> > *const)&__for_begin);
            }
            SubItemReason::SubItemReason((SubItemReason *const)&__for_end, (const ActionReason *)(v3 + 224));
            ret = PlayerItemComp::subItemBatch(
                    item_comp,
                    (const std::vector<ItemParam> *)(v3 + 96),
                    (const SubItemReason *)&__for_end);
            if ( ret )
            {
              common::milog::MiLogStream::create(
                &v36,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/spice_activity.cpp",
                "onSpiceActivityProcessFoodReq",
                405);
              common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                &v36,
                (const char (*)[28])"[SPICE] subItemBatch failed");
              common::milog::MiLogStream::~MiLogStream(&v36);
              v7 = ret;
            }
            else
            {
              ret = PlayerItemComp::addItemBatch(
                      item_comp,
                      (const std::vector<ItemParam> *)(v3 + 160),
                      (const ActionReason *)(v3 + 224),
                      0LL);
              if ( ret )
              {
                common::milog::MiLogStream::create(
                  &v36,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/activity/spice_activity.cpp",
                  "onSpiceActivityProcessFoodReq",
                  411);
                common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                  &v36,
                  (const char (*)[28])"[SPICE] addItemBatch failed");
                common::milog::MiLogStream::~MiLogStream(&v36);
                v7 = ret;
              }
              else
              {
                v7 = 0;
              }
            }
          }
LABEL_48:
          std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v3 + 160));
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v36,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/spice_activity.cpp",
          "onSpiceActivityProcessFoodReq",
          349);
        v12 = common::milog::MiLogStream::operator<<<char [70],(char *[70])0>(
                &v36,
                (const char (*)[70])"[SPICE] findActivitySpiceExcelConfigByActivityId fails, activity_id_:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &this->activity_id_);
        common::milog::MiLogStream::~MiLogStream(&v36);
        v7 = -1;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v36,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/spice_activity.cpp",
        "onSpiceActivityProcessFoodReq",
        343);
      common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
        &v36,
        (const char (*)[37])"[SPICE] req has no normal food list.");
      common::milog::MiLogStream::~MiLogStream(&v36);
      v7 = -1;
    }
LABEL_49:
    std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v3 + 96));
  }
  result = v7;
  if ( v37 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = 0;
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
  return result;
};

// Line 420: range 0000000017FD6C38-0000000017FD7056
__int64 __fastcall SpiceActivity::openStage(SpiceActivity *const this, uint32_t stage_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,SpiceStageData> >::_Self *p_y; // rsi
  common::milog::MiLogStream *v8; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,SpiceStageData> >::pointer v9; // rdx
  bool *p_is_open; // rax
  uint32_t fetter_inc_cnt_limit; // ecx
  std::_Rb_tree_iterator<std::pair<unsigned int const,SpiceStageData> >::pointer v12; // rdx
  char v13; // cl
  std::_Rb_tree_iterator<std::pair<unsigned int const,SpiceStageData> >::_Self __y; // [rsp+18h] [rbp-C8h] BYREF
  const ActivitySpiceExcelConfigMgr *config_mgr; // [rsp+20h] [rbp-C0h]
  const data::ActivitySpiceStageDataExcelConfig *stage_config_ptr; // [rsp+28h] [rbp-B8h]
  std::shared_ptr<Config> v17; // [rsp+30h] [rbp-B0h] BYREF
  common::milog::MiLogStream v18; // [rsp+40h] [rbp-A0h] BYREF
  char v19[128]; // [rsp+60h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 stage_id:419 64 8 8 iter:429";
  *(_QWORD *)(v2 + 16) = SpiceActivity::openStage;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = stage_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v17);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17)->design_config.txt_config_mgr.activity_spice_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v17);
  stage_config_ptr = data::ActivitySpiceExcelConfigMgrBase::findActivitySpiceStageDataExcelConfig(
                       config_mgr,
                       *(_DWORD *)(v2 + 48));
  if ( stage_config_ptr )
  {
    *(std::map<unsigned int,SpiceStageData>::iterator *)(v2 + 64) = std::map<unsigned int,SpiceStageData>::find(
                                                                      &this->stage_data_map_,
                                                                      (const std::map<unsigned int,SpiceStageData>::key_type *)(v2 + 48));
    __y._M_node = std::map<unsigned int,SpiceStageData>::end(&this->stage_data_map_)._M_node;
    p_y = &__y;
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,SpiceStageData> >::_Self *)(v2 + 64),
           &__y) )
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/spice_activity.cpp",
        "openStage",
        432);
      v8 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
             &v18,
             (const char (*)[38])"[SPICE] stage_id not found, stage_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v18);
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v9 = std::_Rb_tree_iterator<std::pair<unsigned int const,SpiceStageData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,SpiceStageData> > *const)(v2 + 64));
      p_is_open = &v9->second.is_open;
      if ( *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)p_is_open & 7) >= *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(p_is_open);
      }
      if ( v9->second.is_open )
      {
        result = 0LL;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&stage_config_ptr->fetter_inc_cnt_limit >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&stage_config_ptr->fetter_inc_cnt_limit >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&stage_config_ptr->fetter_inc_cnt_limit);
        }
        fetter_inc_cnt_limit = stage_config_ptr->fetter_inc_cnt_limit;
        if ( *(_BYTE *)(((unsigned __int64)&this->increase_avatar_fetter_limit_times_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->increase_avatar_fetter_limit_times_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->increase_avatar_fetter_limit_times_);
        }
        if ( fetter_inc_cnt_limit > this->increase_avatar_fetter_limit_times_ )
          this->increase_avatar_fetter_limit_times_ = stage_config_ptr->fetter_inc_cnt_limit;
        v12 = std::_Rb_tree_iterator<std::pair<unsigned int const,SpiceStageData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,SpiceStageData> > *const)(v2 + 64));
        v13 = *(_BYTE *)(((unsigned __int64)&v12->second.is_open >> 3) + 0x7FFF8000);
        if ( v13 != 0 && (((unsigned __int8)v12 + 8) & 7) >= v13 )
        {
          LOBYTE(p_y) = v13 != 0;
          __asan_report_store1(&v12->second.is_open, p_y, v12);
        }
        v12->second.is_open = 1;
        result = 0LL;
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/spice_activity.cpp",
      "openStage",
      425);
    v5 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
           &v18,
           (const char (*)[63])"[SPICE] findActivitySpiceStageDataExcelConfig fails, stage_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v18);
    result = 0xFFFFFFFFLL;
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
  return result;
};

// Line 452: range 0000000017FD7058-0000000017FD7666
void __cdecl SpiceActivity::onFinishItemGivingEvent(SpiceActivity *const this, const FinishItemGivingEvent *event)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  PlayerHomeComp *HomeComp; // rax
  common::milog::MiLogStream *v8; // rax
  std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  uint32_t HomeUid; // r14d
  common::milog::MiLogStream *v11; // rax
  const data::ActivitySpiceExcelConfigMgrBase *v12; // rdx
  PlayerHomeComp *v13; // rax
  HomeAvatar *HomeAvatar; // rcx
  common::milog::MiLogStream *v15; // rax
  uint32_t giving_group_id; // edx
  ActivitySpiceExcelConfigMgr *config_mgr; // [rsp+10h] [rbp-F0h]
  const data::ActivitySpiceGivingExcelConfig *spice_giving_config_ptr; // [rsp+18h] [rbp-E8h]
  std::shared_ptr<Config> v19; // [rsp+20h] [rbp-E0h] BYREF
  common::milog::MiLogStream v20; // [rsp+30h] [rbp-D0h] BYREF
  char v21[176]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 7 ret:461 64 16 18 home_world_ptr:459 96 16 12 home_ptr:460";
  *(_QWORD *)(v2 + 16) = SpiceActivity::onFinishItemGivingEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  if ( BaseActivity::isOpening(this, 0) && !BaseActivity::isSettled(this) )
  {
    std::shared_ptr<HomeWorld>::shared_ptr((std::shared_ptr<HomeWorld> *const)(v2 + 64), 0LL);
    std::shared_ptr<Home>::shared_ptr((std::shared_ptr<Home> *const)(v2 + 96), 0LL);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    HomeComp = Player::getHomeComp(this->player_);
    *(_DWORD *)(v2 + 48) = PlayerHomeComp::getCurHomeWorldAndHome(
                             HomeComp,
                             (HomeWorldPtr *)(v2 + 64),
                             (HomePtr *)(v2 + 96));
    if ( *(_DWORD *)(v2 + 48)
      || std::operator==<HomeWorld>((const std::shared_ptr<HomeWorld> *)(v2 + 64), 0LL)
      || std::operator==<Home>((const std::shared_ptr<Home> *)(v2 + 96), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/spice_activity.cpp",
        "onFinishItemGivingEvent",
        464);
      v8 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
             &v20,
             (const char (*)[44])"[SPICE] getCurHomeWorldAndHome failed. ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v8, (const int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v20);
    }
    else
    {
      v9 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      HomeUid = Home::getHomeUid(v9);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      if ( HomeUid == Player::getUid(this->player_) )
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v19);
        config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19)->design_config.txt_config_mgr.activity_spice_config_mgr;
        std::shared_ptr<Config>::~shared_ptr(&v19);
        v12 = config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)&event->giving_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&event->giving_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&event->giving_id);
        }
        spice_giving_config_ptr = data::ActivitySpiceExcelConfigMgrBase::findActivitySpiceGivingExcelConfig(
                                    v12,
                                    event->giving_id);
        if ( spice_giving_config_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          v13 = Player::getHomeComp(this->player_);
          HomeAvatar = PlayerHomeComp::getHomeAvatar(v13);
          if ( *(_BYTE *)(((unsigned __int64)&spice_giving_config_ptr->character_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)spice_giving_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&spice_giving_config_ptr->character_id >> 3)
                                                                                   + 0x7FFF8000) )
          {
            __asan_report_load4(&spice_giving_config_ptr->character_id);
          }
          if ( !HomeAvatar::isAvatarInHome(HomeAvatar, spice_giving_config_ptr->character_id) )
          {
            common::milog::MiLogStream::create(
              &v20,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/spice_activity.cpp",
              "onFinishItemGivingEvent",
              482);
            v15 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                    &v20,
                    (const char (*)[44])"[SPICE] avatar not show in home, avatar_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v15,
              &spice_giving_config_ptr->character_id);
            common::milog::MiLogStream::~MiLogStream(&v20);
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)&event->giving_group_id >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->giving_group_id >> 3)
                                                                   + 0x7FFF8000) )
            {
              __asan_report_load4(&event->giving_group_id);
            }
            giving_group_id = event->giving_group_id;
            if ( *(_BYTE *)(((unsigned __int64)&event->giving_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&event->giving_id >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&event->giving_id);
            }
            SpiceActivity::doAddHomeAvatarFetterAndLog(this, event->giving_id, giving_group_id);
          }
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v20,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/spice_activity.cpp",
          "onFinishItemGivingEvent",
          469);
        v11 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                &v20,
                (const char (*)[31])"[SPICE] not in self home, ret:");
        common::milog::MiLogStream::operator<<<int,(int *)0>(v11, (const int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v20);
      }
    }
    std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v2 + 96));
    std::shared_ptr<HomeWorld>::~shared_ptr((std::shared_ptr<HomeWorld> *const)(v2 + 64));
  }
  if ( v21 == (char *)v2 )
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

// Line 491: range 0000000017FD7668-0000000017FD76CA
void __cdecl SpiceActivity::addHomeAvatarFetterByGM(
        SpiceActivity *const this,
        const uint32_t giving_id,
        const uint32_t giving_group_id)
{
  if ( BaseActivity::isOpening(this, 0) && !BaseActivity::isSettled(this) )
    SpiceActivity::doAddHomeAvatarFetterAndLog(this, giving_id, giving_group_id);
};

// Line 501: range 0000000017FD76CC-0000000017FD8719
void __fastcall SpiceActivity::doAddHomeAvatarFetterAndLog(
        SpiceActivity *const this,
        uint32_t giving_id,
        uint32_t giving_group_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  uint32_t current_increase_avatar_fetter_times; // ecx
  uint32_t AvatarComp; // ecx
  common::milog::MiLogStream *v9; // rax
  int v10; // r14d
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  FetterComp *FetterComp; // rax
  uint32_t Level; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  PlayerAvatarComp *p_fetter_value; // rdi
  PlayerEventComp *EventComp; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  common::milog::MiLogStream *v18; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  common::milog::MiLogStream *v20; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodySpiceFinishItemGiving,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // r14
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v23; // rax
  google::protobuf::uint32 *v24; // rdx
  std::__shared_ptr_access<proto_log::PlayerLogBodySpiceFinishItemGiving,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodySpiceFinishItemGiving,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodySpiceFinishItemGiving,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rcx
  uint32_t fetter_value; // eax
  const unsigned int *M_current; // r14
  std::vector<unsigned int>::const_iterator v30; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodySpiceFinishItemGiving,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // r14
  int v32; // eax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  Player *player; // r14
  std::string v37; // [rsp+0h] [rbp-250h]
  SpiceActivity *thisa; // [rsp+8h] [rbp-248h]
  __int16 is_exceed_send_limit; // [rsp+1Eh] [rbp-232h]
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > __rhs; // [rsp+20h] [rbp-230h] BYREF
  const ActivitySpiceExcelConfigMgr *config_mgr; // [rsp+28h] [rbp-228h]
  const data::ActivitySpiceGivingExcelConfig *spice_giving_config_ptr; // [rsp+30h] [rbp-220h]
  const data::ActivitySpiceExcelConfig *spice_config_ptr; // [rsp+38h] [rbp-218h]
  const data::GivingExcelConfig *giving_config_ptr; // [rsp+40h] [rbp-210h]
  const data::GivingGroupExcelConfig *giving_group_config_ptr; // [rsp+48h] [rbp-208h]
  std::shared_ptr<google::protobuf::Message> v46; // [rsp+50h] [rbp-200h] BYREF
  common::milog::MiLogStream v47; // [rsp+60h] [rbp-1F0h] BYREF
  char v48[464]; // [rsp+80h] [rbp-1D0h] BYREF

  v37._M_string_length = (std::string::size_type)this;
  v37._M_dataplus._M_p = (std::string::pointer)__PAIR64__(giving_id, giving_group_id);
  v3 = (unsigned __int64)v48;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(416LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "10 32 1 10 holder:566 48 4 13 giving_id:500 64 4 19 giving_group_id:500 80 8 8 iter:575 112 16 1"
                        "3 event_ptr:549 144 16 11 log_ptr:567 176 16 21 formal_avatar_ptr:523 208 24 17 action_reason:50"
                        "9 272 32 10 notify:542 336 48 17 avatar_id_set:534";
  *(_QWORD *)(v3 + 16) = SpiceActivity::doAddHomeAvatarFetterAndLog;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556927;
  v5[536862722] = 61956;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862724] = 62194;
  v5[536862725] = 62194;
  v5[536862726] = 62194;
  v5[536862727] = -218959360;
  v5[536862728] = 62194;
  v5[536862729] = -219021312;
  v5[536862730] = 62194;
  v5[536862732] = -202116109;
  *(_DWORD *)(v3 + 48) = giving_id;
  *(_DWORD *)(v3 + 64) = v37._M_dataplus._M_p;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v46);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v46)->design_config.txt_config_mgr.activity_spice_config_mgr;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v46);
  spice_giving_config_ptr = data::ActivitySpiceExcelConfigMgrBase::findActivitySpiceGivingExcelConfig(
                              config_mgr,
                              *(_DWORD *)(v3 + 48));
  if ( spice_giving_config_ptr )
  {
    ActionReason::ActionReason(
      (ActionReason *const)(v3 + 208),
      ACTION_REASON_SPICE_ADD_AVATAR_FETTER,
      ITEM_LIMIT_ACTIVITY_SPICE);
    if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->activity_id_);
    }
    spice_config_ptr = ActivitySpiceExcelConfigMgr::findActivitySpiceExcelConfigByActivityId(
                         config_mgr,
                         this->activity_id_);
    if ( spice_config_ptr )
    {
      v37._anon_0._M_local_buf[14] = 1;
      v37._anon_0._M_local_buf[15] = 1;
      if ( *(_BYTE *)(((unsigned __int64)&this->current_increase_avatar_fetter_times_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->current_increase_avatar_fetter_times_ >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load4(&this->current_increase_avatar_fetter_times_);
      }
      current_increase_avatar_fetter_times = this->current_increase_avatar_fetter_times_;
      if ( *(_BYTE *)(((unsigned __int64)&this->increase_avatar_fetter_limit_times_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->increase_avatar_fetter_limit_times_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->increase_avatar_fetter_limit_times_);
      }
      if ( current_increase_avatar_fetter_times >= this->increase_avatar_fetter_limit_times_ )
        goto LABEL_30;
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      AvatarComp = (unsigned int)Player::getAvatarComp(this->player_);
      if ( *(_BYTE *)(((unsigned __int64)&spice_giving_config_ptr->character_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)spice_giving_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&spice_giving_config_ptr->character_id >> 3)
                                                                               + 0x7FFF8000) )
      {
        __asan_report_load4(&spice_giving_config_ptr->character_id);
      }
      PlayerAvatarComp::findFormalAvatarByAvatarId((const PlayerAvatarComp *const)(v3 + 176), AvatarComp);
      if ( std::operator==<FormalAvatar>(0LL, (const std::shared_ptr<FormalAvatar> *)(v3 + 176)) )
      {
        common::milog::MiLogStream::create(
          &v47,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/spice_activity.cpp",
          "doAddHomeAvatarFetterAndLog",
          526);
        v9 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
               &v47,
               (const char (*)[53])"[SPICE] findFormalAvatarByAvatarId fails, avatar_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
          v9,
          &spice_giving_config_ptr->character_id);
        common::milog::MiLogStream::~MiLogStream(&v47);
        v10 = 0;
      }
      else
      {
        v11 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 176));
        FetterComp = FormalAvatar::getFetterComp(v11);
        Level = FetterComp::getLevel(FetterComp);
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v46);
        v14 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v46);
        LOBYTE(Level) = Level < AvatarExcelConfigMgr::getAvatarMaxFetterLevel(&v14->design_config.txt_config_mgr.avatar_config_mgr);
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v46);
        if ( (_BYTE)Level )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->current_increase_avatar_fetter_times_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->current_increase_avatar_fetter_times_ >> 3)
                                                                + 0x7FFF8000) )
          {
            __asan_report_load4(&this->current_increase_avatar_fetter_times_);
          }
          ++this->current_increase_avatar_fetter_times_;
          v37._anon_0._M_local_buf[15] = 0;
          std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 336));
          std::set<unsigned int>::insert(
            (std::set<unsigned int> *const)(v3 + 336),
            &spice_giving_config_ptr->character_id);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          p_fetter_value = Player::getAvatarComp(this->player_);
          if ( *(_BYTE *)(((unsigned __int64)&spice_config_ptr->fetter_value >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&spice_config_ptr->fetter_value >> 3) + 0x7FFF8000) <= 3 )
          {
            p_fetter_value = (PlayerAvatarComp *)&spice_config_ptr->fetter_value;
            __asan_report_load4(&spice_config_ptr->fetter_value);
          }
          PlayerAvatarComp::addMyAvatarFetterExpForIds(
            p_fetter_value,
            spice_config_ptr->fetter_value,
            (const std::set<unsigned int> *)(v3 + 336),
            (const ActionReason *)(v3 + 208));
          std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 336));
        }
        v37._anon_0._M_local_buf[14] = 0;
        v10 = 1;
      }
      std::shared_ptr<FormalAvatar>::~shared_ptr((std::shared_ptr<FormalAvatar> *const)(v3 + 176));
      if ( v10 == 1 )
      {
LABEL_30:
        proto::SpiceActivityGivingRecordNotify::SpiceActivityGivingRecordNotify((proto::SpiceActivityGivingRecordNotify *const)(v3 + 272));
        if ( *(_BYTE *)(((v37._M_string_length + 984) >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((v37._M_string_length + 984) >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(v37._M_string_length + 984);
        }
        proto::SpiceActivityGivingRecordNotify::set_increase_avatar_fetter_limit_times(
          (proto::SpiceActivityGivingRecordNotify *const)(v3 + 272),
          *(_DWORD *)(v37._M_string_length + 984));
        if ( *(_BYTE *)(((v37._M_string_length + 988) >> 3) + 0x7FFF8000) != 0
          && (char)(((LOBYTE(v37._M_string_length) - 36) & 7) + 3) >= *(_BYTE *)(((v37._M_string_length + 988) >> 3)
                                                                               + 0x7FFF8000) )
        {
          __asan_report_load4(v37._M_string_length + 988);
        }
        proto::SpiceActivityGivingRecordNotify::set_current_increase_avatar_fetter_times(
          (proto::SpiceActivityGivingRecordNotify *const)(v3 + 272),
          *(_DWORD *)(v37._M_string_length + 988));
        if ( *(_BYTE *)(((unsigned __int64)&spice_giving_config_ptr->character_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)spice_giving_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&spice_giving_config_ptr->character_id >> 3)
                                                                                 + 0x7FFF8000) )
        {
          __asan_report_load4(&spice_giving_config_ptr->character_id);
        }
        proto::SpiceActivityGivingRecordNotify::set_avatar_id(
          (proto::SpiceActivityGivingRecordNotify *const)(v3 + 272),
          spice_giving_config_ptr->character_id);
        if ( *(_BYTE *)(((v37._M_string_length + 24) >> 3) + 0x7FFF8000) )
          __asan_report_load8(v37._M_string_length + 24);
        Player::sendProto(*(Player *const *)(v37._M_string_length + 24), (const google::protobuf::Message *)(v3 + 272));
        common::tools::perf::make_shared<SpiceGiveFoodTimesEvent>();
        if ( *(_BYTE *)(((v37._M_string_length + 24) >> 3) + 0x7FFF8000) )
          __asan_report_load8(v37._M_string_length + 24);
        EventComp = Player::getEventComp(*(Player *const *)(v37._M_string_length + 24));
        std::shared_ptr<BaseEvent>::shared_ptr<SpiceGiveFoodTimesEvent,void>(
          (std::shared_ptr<BaseEvent> *const)&v46,
          (const std::shared_ptr<SpiceGiveFoodTimesEvent> *)(v3 + 112));
        PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v46);
        std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v46);
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v46);
        v17 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v46);
        giving_config_ptr = data::GivingExcelConfigMgrBase::findGivingExcelConfig(
                              &v17->design_config.txt_config_mgr.giving_config_mgr,
                              *(_DWORD *)(v3 + 48));
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v46);
        if ( giving_config_ptr )
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v46);
          v19 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v46);
          giving_group_config_ptr = data::GivingExcelConfigMgrBase::findGivingGroupExcelConfig(
                                      &v19->design_config.txt_config_mgr.giving_config_mgr,
                                      *(_DWORD *)(v3 + 64));
          std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v46);
          if ( giving_group_config_ptr )
          {
            if ( *(_BYTE *)(((v37._M_string_length + 24) >> 3) + 0x7FFF8000) )
              __asan_report_load8(v37._M_string_length + 24);
            BasicComp = Player::getBasicComp(*(Player *const *)(v37._M_string_length + 24));
            PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v47, BasicComp);
            StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32), 0xE07u, v37);
            std::string::~string(&v47);
            common::tools::perf::make_shared<proto_log::PlayerLogBodySpiceFinishItemGiving>();
            if ( !std::vector<unsigned int>::empty(&giving_group_config_ptr->item_ids) )
            {
              v22 = std::__shared_ptr_access<proto_log::PlayerLogBodySpiceFinishItemGiving,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodySpiceFinishItemGiving,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
              v23 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](&giving_group_config_ptr->item_ids, 0LL);
              v24 = v23;
              if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v23 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v23);
              }
              proto_log::PlayerLogBodySpiceFinishItemGiving::set_material_id(v22, *v24);
            }
            v25 = std::__shared_ptr_access<proto_log::PlayerLogBodySpiceFinishItemGiving,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodySpiceFinishItemGiving,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
            if ( *(_BYTE *)(((unsigned __int64)&spice_giving_config_ptr->character_id >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)spice_giving_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&spice_giving_config_ptr->character_id >> 3)
                                                                                     + 0x7FFF8000) )
            {
              __asan_report_load4(&spice_giving_config_ptr->character_id);
            }
            proto_log::PlayerLogBodySpiceFinishItemGiving::set_avatar_id(v25, spice_giving_config_ptr->character_id);
            v26 = std::__shared_ptr_access<proto_log::PlayerLogBodySpiceFinishItemGiving,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodySpiceFinishItemGiving,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
            proto_log::PlayerLogBodySpiceFinishItemGiving::set_is_exceed_send_limit(v26, is_exceed_send_limit);
            v27 = std::__shared_ptr_access<proto_log::PlayerLogBodySpiceFinishItemGiving,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodySpiceFinishItemGiving,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
            if ( HIBYTE(is_exceed_send_limit) )
            {
              fetter_value = 0;
            }
            else
            {
              if ( *(_BYTE *)(((unsigned __int64)&spice_config_ptr->fetter_value >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&spice_config_ptr->fetter_value >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&spice_config_ptr->fetter_value);
              }
              fetter_value = spice_config_ptr->fetter_value;
            }
            proto_log::PlayerLogBodySpiceFinishItemGiving::set_add_fetter_value(v27, fetter_value);
            M_current = std::vector<unsigned int>::end(&giving_config_ptr->giving_group_ids)._M_current;
            v30._M_current = std::vector<unsigned int>::begin(&giving_config_ptr->giving_group_ids)._M_current;
            *(__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 80) = std::find<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,unsigned int>(v30, (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current, (const unsigned int *)(v3 + 64));
            __rhs._M_current = std::vector<unsigned int>::end(&giving_config_ptr->giving_group_ids)._M_current;
            if ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                   (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 80),
                   &__rhs) )
            {
              v31 = std::__shared_ptr_access<proto_log::PlayerLogBodySpiceFinishItemGiving,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodySpiceFinishItemGiving,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
              __rhs._M_current = std::vector<unsigned int>::begin(&giving_config_ptr->giving_group_ids)._M_current;
              v32 = __gnu_cxx::operator-<unsigned int const*,std::vector<unsigned int>>(
                      (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 80),
                      &__rhs);
              proto_log::PlayerLogBodySpiceFinishItemGiving::set_avatar_feedback(v31, v32 + 1);
            }
            else
            {
              common::milog::MiLogStream::create(
                &v47,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/spice_activity.cpp",
                "doAddHomeAvatarFetterAndLog",
                583);
              v33 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
                      &v47,
                      (const char (*)[62])"giving_group_id not belong to the giving_id. giving_group_id:");
              v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v33,
                      (const unsigned int *)(v3 + 64));
              v35 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                      v34,
                      (const char (*)[13])", giving_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v35,
                (const unsigned int *)(v3 + 48));
              common::milog::MiLogStream::~MiLogStream(&v47);
            }
            if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&thisa->player_);
            player = thisa->player_;
            std::shared_ptr<google::protobuf::Message>::shared_ptr(&v46, 0LL);
            std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodySpiceFinishItemGiving,void>(
              (std::shared_ptr<google::protobuf::Message> *const)(v3 + 176),
              (const std::shared_ptr<proto_log::PlayerLogBodySpiceFinishItemGiving> *)(v3 + 144));
            Player::printStatLog(player, (MessagePtr *)(v3 + 176), &v46, 0xEu);
            std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)(v3 + 176));
            std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v46);
            std::shared_ptr<proto_log::PlayerLogBodySpiceFinishItemGiving>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodySpiceFinishItemGiving> *const)(v3 + 144));
            StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32));
          }
          else
          {
            common::milog::MiLogStream::create(
              &v47,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/spice_activity.cpp",
              "doAddHomeAvatarFetterAndLog",
              562);
            v20 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                    &v47,
                    (const char (*)[50])"findGivingGroupExcelConfig fail, giving_group_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v3 + 64));
            common::milog::MiLogStream::~MiLogStream(&v47);
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v47,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/spice_activity.cpp",
            "doAddHomeAvatarFetterAndLog",
            556);
          v18 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                  &v47,
                  (const char (*)[39])"findGivingExcelConfig fail, giving_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream(&v47);
        }
        std::shared_ptr<SpiceGiveFoodTimesEvent>::~shared_ptr((std::shared_ptr<SpiceGiveFoodTimesEvent> *const)(v3 + 112));
        proto::SpiceActivityGivingRecordNotify::~SpiceActivityGivingRecordNotify((proto::SpiceActivityGivingRecordNotify *const)(v3 + 272));
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v47,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/spice_activity.cpp",
        "doAddHomeAvatarFetterAndLog",
        513);
      v6 = common::milog::MiLogStream::operator<<<char [70],(char *[70])0>(
             &v47,
             (const char (*)[70])"[SPICE] findActivitySpiceExcelConfigByActivityId fails, activity_id_:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->activity_id_);
      common::milog::MiLogStream::~MiLogStream(&v47);
    }
  }
  if ( v48 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8030) = 0;
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
    *(_DWORD *)((v3 >> 3) + 0x7FFF8030) = -168430091;
  }
};

// Line 593: range 0000000017FD871A-0000000017FD8C65
// local variable allocation has failed, the output may be wrong!
void __cdecl SpiceActivity::logPlayerFinishMakeSpice(
        SpiceActivity *const this,
        const proto::SpiceActivityFinishMakeSpiceReq *req)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  uint32_t v5; // eax
  common::milog::MiLogStream *v6; // rbx
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodySpiceFinishMakeSpice,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodySpiceFinishMakeSpice,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // r14
  google::protobuf::uint32 v10; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodySpiceFinishMakeSpice,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // r14
  bool is_success; // al
  std::__shared_ptr_access<proto_log::PlayerLogBodySpiceFinishMakeSpice,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // r14
  google::protobuf::uint32 v14; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodySpiceFinishMakeSpice,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  google::protobuf::RepeatedField<unsigned int> *v16; // r14
  const google::protobuf::RepeatedField<unsigned int> *v17; // rax
  Player *v18; // r14
  std::string reqa; // [rsp+0h] [rbp-120h] OVERLAPPED BYREF
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-100h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-F8h] BYREF
  const ActivitySpiceExcelConfigMgr *config_mgr; // [rsp+30h] [rbp-F0h]
  const data::ActivitySpiceStageDataExcelConfig *stage_config_ptr; // [rsp+38h] [rbp-E8h]
  const std::vector<unsigned int> *__for_range; // [rsp+40h] [rbp-E0h]
  const unsigned int *material_id; // [rsp+48h] [rbp-D8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+50h] [rbp-D0h] BYREF
  std::shared_ptr<google::protobuf::Message> v27; // [rsp+60h] [rbp-C0h] BYREF
  common::milog::MiLogStream v28; // [rsp+70h] [rbp-B0h] BYREF
  char v29[144]; // [rsp+90h] [rbp-90h] BYREF

  reqa._M_string_length = (std::string::size_type)this;
  reqa._M_dataplus._M_p = (std::string::pointer)req;
  v2 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 10 holder:602 64 16 11 log_ptr:603";
  *(_QWORD *)(v2 + 16) = SpiceActivity::logPlayerFinishMakeSpice;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -202178560;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v27);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v27)->design_config.txt_config_mgr.activity_spice_config_mgr;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v27);
  v5 = proto::SpiceActivityFinishMakeSpiceReq::stage_id((const proto::SpiceActivityFinishMakeSpiceReq *const)reqa._M_dataplus._M_p);
  stage_config_ptr = data::ActivitySpiceExcelConfigMgrBase::findActivitySpiceStageDataExcelConfig(config_mgr, v5);
  if ( stage_config_ptr )
  {
    if ( *(_BYTE *)(((reqa._M_string_length + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8(reqa._M_string_length + 24);
    BasicComp = Player::getBasicComp(*(Player *const *)(reqa._M_string_length + 24));
    PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v28, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 0xE06u, reqa);
    std::string::~string(&v28);
    common::tools::perf::make_shared<proto_log::PlayerLogBodySpiceFinishMakeSpice>();
    __for_range = &stage_config_ptr->material_order_list;
    __for_begin._M_current = std::vector<unsigned int>::begin(&stage_config_ptr->material_order_list)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(&stage_config_ptr->material_order_list)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      material_id = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
      v8 = std::__shared_ptr_access<proto_log::PlayerLogBodySpiceFinishMakeSpice,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodySpiceFinishMakeSpice,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)material_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)material_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)material_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(material_id);
      }
      proto_log::PlayerLogBodySpiceFinishMakeSpice::add_material_id_list(v8, *material_id);
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    v9 = std::__shared_ptr_access<proto_log::PlayerLogBodySpiceFinishMakeSpice,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodySpiceFinishMakeSpice,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    v10 = proto::SpiceActivityFinishMakeSpiceReq::stage_id((const proto::SpiceActivityFinishMakeSpiceReq *const)reqa._M_dataplus._M_p);
    proto_log::PlayerLogBodySpiceFinishMakeSpice::set_spice_id(v9, v10);
    v11 = std::__shared_ptr_access<proto_log::PlayerLogBodySpiceFinishMakeSpice,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodySpiceFinishMakeSpice,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    is_success = proto::SpiceActivityFinishMakeSpiceReq::is_success((const proto::SpiceActivityFinishMakeSpiceReq *const)reqa._M_dataplus._M_p);
    proto_log::PlayerLogBodySpiceFinishMakeSpice::set_is_success(v11, is_success);
    v13 = std::__shared_ptr_access<proto_log::PlayerLogBodySpiceFinishMakeSpice,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodySpiceFinishMakeSpice,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    v14 = proto::SpiceActivityFinishMakeSpiceReq::left_turns((const proto::SpiceActivityFinishMakeSpiceReq *const)reqa._M_dataplus._M_p);
    proto_log::PlayerLogBodySpiceFinishMakeSpice::set_left_turns(v13, v14);
    v15 = std::__shared_ptr_access<proto_log::PlayerLogBodySpiceFinishMakeSpice,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodySpiceFinishMakeSpice,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    v16 = proto_log::PlayerLogBodySpiceFinishMakeSpice::mutable_left_material_id_list(v15);
    v17 = proto::SpiceActivityFinishMakeSpiceReq::left_material_id_list((const proto::SpiceActivityFinishMakeSpiceReq *const)reqa._M_dataplus._M_p);
    google::protobuf::RepeatedField<unsigned int>::CopyFrom(v16, v17);
    if ( *(_BYTE *)(((reqa._M_string_length + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8(reqa._M_string_length + 24);
    v18 = *(Player **)(reqa._M_string_length + 24);
    std::shared_ptr<google::protobuf::Message>::shared_ptr(&v27, 0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodySpiceFinishMakeSpice,void>(
      &p_body_ptr,
      (const std::shared_ptr<proto_log::PlayerLogBodySpiceFinishMakeSpice> *)(v2 + 64));
    Player::printStatLog(v18, &p_body_ptr, &v27, 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v27);
    std::shared_ptr<proto_log::PlayerLogBodySpiceFinishMakeSpice>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodySpiceFinishMakeSpice> *const)(v2 + 64));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/spice_activity.cpp",
      "logPlayerFinishMakeSpice",
      598);
    v6 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
           &v28,
           (const char (*)[63])"[SPICE] findActivitySpiceStageDataExcelConfig fails, stage_id:");
    *((_DWORD *)&reqa._anon_0._M_allocated_capacity + 3) = proto::SpiceActivityFinishMakeSpiceReq::stage_id((const proto::SpiceActivityFinishMakeSpiceReq *const)reqa._M_dataplus._M_p);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
      v6,
      (const unsigned int *)&reqa._anon_0._M_allocated_capacity + 3);
    common::milog::MiLogStream::~MiLogStream(&v28);
  }
  if ( v29 == (char *)v2 )
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
