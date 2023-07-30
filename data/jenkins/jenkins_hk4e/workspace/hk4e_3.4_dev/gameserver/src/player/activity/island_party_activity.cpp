// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/island_party_activity.cpp

// Line 22: range 000000001454AC1E-000000001454AD1B
void __cdecl IslandPartyStageData::fromBin(IslandPartyStageData *const this, const proto::IslandPartyStageBin *bin)
{
  uint32_t v2; // ecx
  bool is_open; // cl
  uint32_t v4; // ecx

  v2 = proto::IslandPartyStageBin::stage_id(bin);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->stage_id = v2;
  is_open = proto::IslandPartyStageBin::is_open(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_open);
  }
  this->is_open = is_open;
  v4 = proto::IslandPartyStageBin::best_score(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->best_score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->best_score >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->best_score);
  }
  this->best_score = v4;
};

// Line 29: range 000000001454AD1C-000000001454AE1A
void __cdecl IslandPartyStageData::toBin(const IslandPartyStageData *const this, proto::IslandPartyStageBin *bin)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::IslandPartyStageBin::set_stage_id(bin, this->stage_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_open);
  }
  proto::IslandPartyStageBin::set_is_open(bin, this->is_open);
  if ( *(_BYTE *)(((unsigned __int64)&this->best_score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->best_score >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::IslandPartyStageBin::set_best_score(bin, this->best_score);
};

// Line 36: range 000000001454AE1C-000000001454AF1A
void __cdecl IslandPartyStageData::toClient(const IslandPartyStageData *const this, proto::IslandPartyStageData *proto)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::IslandPartyStageData::set_stage_id(proto, this->stage_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_open);
  }
  proto::IslandPartyStageData::set_is_open(proto, this->is_open);
  if ( *(_BYTE *)(((unsigned __int64)&this->best_score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->best_score >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::IslandPartyStageData::set_best_score(proto, this->best_score);
};

// Line 43: range 000000001454AF1C-000000001454B142
int32_t __cdecl IslandPartyActivity::fromScheduleBin(
        IslandPartyActivity *const this,
        const proto::ActivityScheduleBin *bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  unsigned __int64 v5; // rax
  int32_t result; // eax
  google::protobuf::RepeatedPtrField<proto::IslandPartyStageBin>::const_iterator __for_begin; // [rsp+18h] [rbp-88h] BYREF
  google::protobuf::RepeatedPtrField<proto::IslandPartyStageBin>::const_iterator __for_end; // [rsp+20h] [rbp-80h] BYREF
  const proto::IslandPartyScheduleBin *schedule_bin; // [rsp+28h] [rbp-78h]
  const google::protobuf::RepeatedPtrField<proto::IslandPartyStageBin> *__for_range; // [rsp+30h] [rbp-70h]
  const proto::IslandPartyStageBin *stage_bin; // [rsp+38h] [rbp-68h]
  char v12[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 12 13 stage_data:48";
  *(_QWORD *)(v2 + 16) = IslandPartyActivity::fromScheduleBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202177536;
  std::map<unsigned int,IslandPartyStageData>::clear(&this->stage_map_);
  schedule_bin = proto::ActivityScheduleBin::island_party_bin(bin);
  __for_range = proto::IslandPartyScheduleBin::stage_bin_list(schedule_bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::IslandPartyStageBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::IslandPartyStageBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::IslandPartyStageBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    stage_bin = google::protobuf::internal::RepeatedPtrIterator<proto::IslandPartyStageBin const>::operator*(&__for_begin);
    *(_DWORD *)(v2 + 32) = 0;
    *(_BYTE *)(v2 + 36) = 0;
    *(_DWORD *)(v2 + 40) = 0;
    IslandPartyStageData::fromBin((IslandPartyStageData *const)(v2 + 32), stage_bin);
    v5 = (unsigned __int64)std::map<unsigned int,IslandPartyStageData>::operator[](
                             &this->stage_map_,
                             (const std::map<unsigned int,IslandPartyStageData>::key_type *)(v2 + 32));
    if ( (char)(v5 & 7) >= *(_BYTE *)((v5 >> 3) + 0x7FFF8000) && *(_BYTE *)((v5 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)(((v5 + 11) >> 3) + 0x7FFF8000) != 0
      && (char)((v5 + 11) & 7) >= *(_BYTE *)(((v5 + 11) >> 3) + 0x7FFF8000) )
    {
      v5 = __asan_report_store_n(v5, 12LL);
    }
    *(_QWORD *)v5 = *(_QWORD *)(v2 + 32);
    *(_DWORD *)(v5 + 8) = *(_DWORD *)(v2 + 40);
    google::protobuf::internal::RepeatedPtrIterator<proto::IslandPartyStageBin const>::operator++(&__for_begin);
  }
  result = 0;
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

// Line 56: range 000000001454B144-000000001454B210
int32_t __cdecl IslandPartyActivity::toScheduleBin(
        const IslandPartyActivity *const this,
        proto::ActivityScheduleBin *bin)
{
  std::map<unsigned int,IslandPartyStageData>::const_iterator __for_begin; // [rsp+10h] [rbp-40h] BYREF
  std::map<unsigned int,IslandPartyStageData>::const_iterator __for_end; // [rsp+18h] [rbp-38h] BYREF
  proto::IslandPartyScheduleBin *schedule_bin; // [rsp+20h] [rbp-30h]
  const std::map<unsigned int,IslandPartyStageData> *__for_range; // [rsp+28h] [rbp-28h]
  const std::pair<unsigned int const,IslandPartyStageData> *v7; // [rsp+30h] [rbp-20h]
  std::tuple_element<0,const std::pair<unsigned int const,IslandPartyStageData> >::type *_; // [rsp+38h] [rbp-18h]
  std::tuple_element<1,const std::pair<unsigned int const,IslandPartyStageData> >::type *stage_data; // [rsp+40h] [rbp-10h]
  proto::IslandPartyStageBin *stage_bin; // [rsp+48h] [rbp-8h]

  schedule_bin = proto::ActivityScheduleBin::mutable_island_party_bin(bin);
  __for_range = &this->stage_map_;
  __for_begin._M_node = std::map<unsigned int,IslandPartyStageData>::begin(&this->stage_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,IslandPartyStageData>::end(&this->stage_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v7 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,IslandPartyStageData>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,IslandPartyStageData>(v7);
    stage_data = (std::tuple_element<1,const std::pair<unsigned int const,IslandPartyStageData> >::type *)std::get<1ul,unsigned int const,IslandPartyStageData>(v7);
    stage_bin = proto::IslandPartyScheduleBin::add_stage_bin_list(schedule_bin);
    IslandPartyStageData::toBin(stage_data, stage_bin);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,IslandPartyStageData>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 67: range 000000001454B212-000000001454B407
int32_t __cdecl IslandPartyActivity::toClient(IslandPartyActivity *const this, proto::ActivityInfo *activity_info)
{
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rbx
  unsigned int val; // [rsp+1Ch] [rbp-74h] BYREF
  std::map<unsigned int,IslandPartyStageData>::iterator __for_begin; // [rsp+20h] [rbp-70h] BYREF
  std::map<unsigned int,IslandPartyStageData>::iterator __for_end; // [rsp+28h] [rbp-68h] BYREF
  proto::IslandPartyDetailInfo *detail_info; // [rsp+30h] [rbp-60h]
  std::map<unsigned int,IslandPartyStageData> *__for_range; // [rsp+38h] [rbp-58h]
  const std::pair<unsigned int const,IslandPartyStageData> *v11; // [rsp+40h] [rbp-50h]
  std::tuple_element<0,const std::pair<unsigned int const,IslandPartyStageData> >::type *_; // [rsp+48h] [rbp-48h]
  std::tuple_element<1,const std::pair<unsigned int const,IslandPartyStageData> >::type *stage_data; // [rsp+50h] [rbp-40h]
  proto::IslandPartyStageData *stage_data_info; // [rsp+58h] [rbp-38h]
  common::milog::MiLogStream v15; // [rsp+60h] [rbp-30h] BYREF

  if ( BaseActivity::toClient(this, activity_info) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/island_party_activity.cpp",
      "toClient",
      70);
    v2 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
           &v15,
           (const char (*)[58])"[ISLAND_PARTY] BaseActivity::toClient fails, schedule_id:");
    v3 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &this->schedule_id_);
    v4 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v3, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
    common::milog::MiLogStream::~MiLogStream(&v15);
    return -1;
  }
  else
  {
    detail_info = proto::ActivityInfo::mutable_island_party_info(activity_info);
    __for_range = &this->stage_map_;
    __for_begin._M_node = std::map<unsigned int,IslandPartyStageData>::begin(&this->stage_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,IslandPartyStageData>::end(&this->stage_map_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v11 = std::_Rb_tree_iterator<std::pair<unsigned int const,IslandPartyStageData>>::operator*(&__for_begin);
      _ = std::get<0ul,unsigned int const,IslandPartyStageData>(v11);
      stage_data = (std::tuple_element<1,const std::pair<unsigned int const,IslandPartyStageData> >::type *)std::get<1ul,unsigned int const,IslandPartyStageData>(v11);
      stage_data_info = proto::IslandPartyDetailInfo::add_stage_data_list(detail_info);
      IslandPartyStageData::toClient(stage_data, stage_data_info);
      std::_Rb_tree_iterator<std::pair<unsigned int const,IslandPartyStageData>>::operator++(&__for_begin);
    }
    return 0;
  }
};

// Line 83: range 000000001454B408-000000001454B465
int32_t __cdecl IslandPartyActivity::init(IslandPartyActivity *const this)
{
  if ( BaseActivity::isOpening(this, 0) && !BaseActivity::isSettled(this) )
    IslandPartyActivity::registerObserver(this);
  return 0;
};

// Line 93: range 000000001454B466-000000001454B81F
void __cdecl IslandPartyActivity::onPreStart(IslandPartyActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  common::milog::MiLogStream *v4; // r14
  IslandPartyStageData *v5; // rax
  const unsigned int *v6; // rcx
  IslandPartyStageData *v7; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,IslandPartyStageData> >,bool> v8; // rax
  common::milog::MiLogStream *v9; // rax
  unsigned int val; // [rsp+1Ch] [rbp-D4h] BYREF
  std::unordered_map<unsigned int,data::ActivityIslandPartyStageExcelConfig>::const_iterator __for_begin; // [rsp+20h] [rbp-D0h] BYREF
  std::unordered_map<unsigned int,data::ActivityIslandPartyStageExcelConfig>::const_iterator __for_end; // [rsp+28h] [rbp-C8h] BYREF
  const std::unordered_map<unsigned int,data::ActivityIslandPartyStageExcelConfig> *__for_range; // [rsp+30h] [rbp-C0h]
  const std::pair<unsigned int const,data::ActivityIslandPartyStageExcelConfig> *v14; // [rsp+38h] [rbp-B8h]
  std::tuple_element<0,const std::pair<unsigned int const,data::ActivityIslandPartyStageExcelConfig> >::type *id; // [rsp+40h] [rbp-B0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivityIslandPartyStageExcelConfig> >::type *config; // [rsp+48h] [rbp-A8h]
  std::shared_ptr<Config> v17; // [rsp+50h] [rbp-A0h] BYREF
  common::milog::MiLogStream v18; // [rsp+60h] [rbp-90h] BYREF
  char v19[112]; // [rsp+80h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 12 7 data:99";
  *(_QWORD *)(v1 + 16) = IslandPartyActivity::onPreStart;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202177536;
  common::milog::MiLogStream::create(
    &v18,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/island_party_activity.cpp",
    "onPreStart",
    94);
  v4 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
         &v18,
         (const char (*)[32])"[ISLAND_PARTY] onPreStart, uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
  common::milog::MiLogStream::~MiLogStream(&v18);
  std::map<unsigned int,IslandPartyStageData>::clear(&this->stage_map_);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v17);
  __for_range = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17)->design_config.txt_config_mgr.activity_island_party_mgr.activity_island_party_stage_excel_config_map;
  std::shared_ptr<Config>::~shared_ptr(&v17);
  __for_begin._M_cur = std::unordered_map<unsigned int,data::ActivityIslandPartyStageExcelConfig>::begin(__for_range)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,data::ActivityIslandPartyStageExcelConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ActivityIslandPartyStageExcelConfig>,false>(
            &__for_begin,
            &__for_end) )
  {
    v14 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityIslandPartyStageExcelConfig>,false,false>::operator*(&__for_begin);
    id = std::get<0ul,unsigned int const,data::ActivityIslandPartyStageExcelConfig>(v14);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivityIslandPartyStageExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivityIslandPartyStageExcelConfig>(v14);
    *(_DWORD *)(v1 + 32) = 0;
    *(_BYTE *)(v1 + 36) = 0;
    *(_DWORD *)(v1 + 40) = 0;
    if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v1 + 32) = *id;
    *(_BYTE *)(v1 + 36) = 0;
    *(_DWORD *)(v1 + 40) = 0;
    v5 = std::move<IslandPartyStageData &>((IslandPartyStageData *)(v1 + 32));
    v8 = std::map<unsigned int,IslandPartyStageData>::emplace<unsigned int const&,IslandPartyStageData>(
           &this->stage_map_,
           id,
           v5,
           v6,
           v7);
    if ( !v8.second )
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/island_party_activity.cpp",
        "onPreStart",
        105);
      v9 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
             &v18,
             (const char (*)[30])"[ISLAND_PARTY] duplicated id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, id);
      common::milog::MiLogStream::~MiLogStream(&v18);
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityIslandPartyStageExcelConfig>,false,false>::operator++(&__for_begin);
  }
  if ( v19 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 111: range 000000001454B820-000000001454B83A
void __cdecl IslandPartyActivity::onStart(IslandPartyActivity *const this)
{
  IslandPartyActivity::registerObserver(this);
};

// Line 116: range 000000001454B83C-000000001454B856
void __cdecl IslandPartyActivity::onSettle(IslandPartyActivity *const this)
{
  IslandPartyActivity::unregisterObserver(this);
};

// Line 121: range 000000001454B858-000000001454B8B1
void __cdecl IslandPartyActivity::onDailyRefresh(IslandPartyActivity *const this)
{
  if ( BaseActivity::isOpening(this, 0) && !BaseActivity::isSettled(this) )
    BaseActivity::notifyClientData(this, 0);
};

// Line 130: range 000000001454B8B2-000000001454B8D2
void __cdecl IslandPartyActivity::onClear(IslandPartyActivity *const this)
{
  std::map<unsigned int,IslandPartyStageData>::clear(&this->stage_map_);
};

// Line 135: range 000000001454B8D4-000000001454BBF4
void __cdecl IslandPartyActivity::registerObserver(IslandPartyActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  PlayerEventComp *cb_ptr; // [rsp+10h] [rbp-C0h]
  PlayerEventComp *EventComp; // [rsp+20h] [rbp-B0h]
  std::enable_shared_from_this<BaseActivity> v6; // [rsp+30h] [rbp-A0h] BYREF
  char v7[144]; // [rsp+40h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 12 this_ptr:136 64 16 12 this_wtr:137";
  *(_QWORD *)(v1 + 16) = IslandPartyActivity::registerObserver;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  std::enable_shared_from_this<BaseActivity>::shared_from_this(&v6);
  std::dynamic_pointer_cast<IslandPartyActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)(v1 + 32));
  std::shared_ptr<BaseActivity>::~shared_ptr((std::shared_ptr<BaseActivity> *const)&v6);
  std::weak_ptr<IslandPartyActivity>::weak_ptr<IslandPartyActivity,void>(
    (std::weak_ptr<IslandPartyActivity> *const)(v1 + 64),
    (const std::shared_ptr<IslandPartyActivity> *)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  EventComp = Player::getEventComp(this->player_);
  std::weak_ptr<IslandPartyActivity>::weak_ptr(
    (std::weak_ptr<IslandPartyActivity> *const)&v6,
    (const std::weak_ptr<IslandPartyActivity> *)(v1 + 64));
  PlayerEventComp::tryRegisterObserver<IslandPartyActivity,GalleryIslandPartySettleEvent>(
    EventComp,
    (std::weak_ptr<IslandPartyActivity> *)&v6,
    (void (*)(IslandPartyActivity *, const GalleryIslandPartySettleEvent *))IslandPartyActivity::onGallerySettleEvent,
    0LL);
  std::weak_ptr<IslandPartyActivity>::~weak_ptr((std::weak_ptr<IslandPartyActivity> *const)&v6);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  cb_ptr = Player::getEventComp(this->player_);
  std::weak_ptr<IslandPartyActivity>::weak_ptr(
    (std::weak_ptr<IslandPartyActivity> *const)&v6,
    (const std::weak_ptr<IslandPartyActivity> *)(v1 + 64));
  PlayerEventComp::tryRegisterObserver<IslandPartyActivity,GalleryStartEvent>(
    cb_ptr,
    (std::weak_ptr<IslandPartyActivity> *)&v6,
    (void (*)(IslandPartyActivity *, const GalleryStartEvent *))IslandPartyActivity::onGalleryStartEvent,
    0LL);
  std::weak_ptr<IslandPartyActivity>::~weak_ptr((std::weak_ptr<IslandPartyActivity> *const)&v6);
  std::weak_ptr<IslandPartyActivity>::~weak_ptr((std::weak_ptr<IslandPartyActivity> *const)(v1 + 64));
  std::shared_ptr<IslandPartyActivity>::~shared_ptr((std::shared_ptr<IslandPartyActivity> *const)(v1 + 32));
  if ( v7 == (char *)v1 )
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

// Line 143: range 000000001454BBF6-000000001454BCFA
void __cdecl IslandPartyActivity::unregisterObserver(IslandPartyActivity *const this)
{
  PlayerEventComp *EventComp; // rax
  std::map<std::type_index,std::weak_ptr<Observer>>::iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::map<std::type_index,std::weak_ptr<Observer>>::iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  std::map<std::type_index,std::weak_ptr<Observer>> *__for_range; // [rsp+20h] [rbp-20h]
  std::pair<const std::type_index,std::weak_ptr<Observer> > *__in; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,std::pair<const std::type_index,std::weak_ptr<Observer> > >::type *_; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,std::pair<const std::type_index,std::weak_ptr<Observer> > >::type *obs_wtr; // [rsp+38h] [rbp-8h]

  __for_range = &this->event_observer_map_;
  __for_begin._M_node = std::map<std::type_index,std::weak_ptr<Observer>>::begin(&this->event_observer_map_)._M_node;
  __for_end._M_node = std::map<std::type_index,std::weak_ptr<Observer>>::end(&this->event_observer_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<std::type_index const,std::weak_ptr<Observer>>>::operator*(&__for_begin);
    _ = std::get<0ul,std::type_index const,std::weak_ptr<Observer>>(__in);
    obs_wtr = std::get<1ul,std::type_index const,std::weak_ptr<Observer>>(__in);
    if ( !std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(obs_wtr) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      EventComp = Player::getEventComp(this->player_);
      PlayerEventComp::unregisterObserver(EventComp, obs_wtr);
    }
    std::_Rb_tree_iterator<std::pair<std::type_index const,std::weak_ptr<Observer>>>::operator++(&__for_begin);
  }
  std::map<std::type_index,std::weak_ptr<Observer>>::clear(&this->event_observer_map_);
};

// Line 155: range 000000001454BCFC-000000001454C278
int32_t __cdecl IslandPartyActivity::execAction(
        IslandPartyActivity *const this,
        const data::NewActivityExec *action_exec)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rbx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  int v9; // r15d
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v10; // rdx
  common::milog::MiLogStream *v11; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,IslandPartyStageData> >::pointer v12; // rdx
  bool *p_is_open; // rax
  int32_t result; // eax
  std::vector<unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-110h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+28h] [rbp-108h] BYREF
  unsigned __int64 val; // [rsp+30h] [rbp-100h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-F8h]
  common::milog::MiLogStream v19; // [rsp+40h] [rbp-F0h] BYREF
  char v20[208]; // [rsp+60h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 6 id:171 64 8 8 iter:174 96 24 16 stage_id_vec:165";
  *(_QWORD *)(v3 + 16) = IslandPartyActivity::execAction;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218103808;
  v5[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( action_exec->type == NEW_ACTIVITY_ACTION_OPEN_ISLAND_PARTY_STAGE )
  {
    if ( std::vector<std::string>::size(&action_exec->param) )
    {
      std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 96));
      if ( common::tools::StringUtils::strVecToNumVec<unsigned int>(
             &action_exec->param,
             (std::vector<unsigned int> *)(v3 + 96)) )
      {
        common::milog::MiLogStream::create(
          &v19,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/island_party_activity.cpp",
          "execAction",
          168);
        v8 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
               &v19,
               (const char (*)[24])"strVecToNumVec falied: ");
        common::milog::MiLogStream::operator<<<std::string>(v8, &action_exec->param);
        common::milog::MiLogStream::~MiLogStream(&v19);
        v2 = -1;
        v9 = 0;
      }
      else
      {
        __for_range = (std::vector<unsigned int> *)(v3 + 96);
        __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 96))._M_current;
        __for_end._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v3 + 96))._M_current;
        while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
        {
          v10 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
          if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          *(_DWORD *)(v3 + 48) = *v10;
          *(std::map<unsigned int,IslandPartyStageData>::iterator *)(v3 + 64) = std::map<unsigned int,IslandPartyStageData>::find(
                                                                                  &this->stage_map_,
                                                                                  (const std::map<unsigned int,IslandPartyStageData>::key_type *)(v3 + 48));
          val = (unsigned __int64)std::map<unsigned int,IslandPartyStageData>::end(&this->stage_map_)._M_node;
          if ( std::operator==(
                 (const std::_Rb_tree_iterator<std::pair<unsigned int const,IslandPartyStageData> >::_Self *)(v3 + 64),
                 (const std::_Rb_tree_iterator<std::pair<unsigned int const,IslandPartyStageData> >::_Self *)&val) )
          {
            common::milog::MiLogStream::create(
              &v19,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/island_party_activity.cpp",
              "execAction",
              177);
            v11 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                    &v19,
                    (const char (*)[26])"[GACHA] id not invaild : ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 48));
            common::milog::MiLogStream::~MiLogStream(&v19);
            v2 = -1;
            v9 = 0;
            goto LABEL_21;
          }
          v12 = std::_Rb_tree_iterator<std::pair<unsigned int const,IslandPartyStageData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,IslandPartyStageData> > *const)(v3 + 64));
          p_is_open = &v12->second.is_open;
          if ( *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) != 0
            && ((unsigned __int8)p_is_open & 7) >= *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) )
          {
            __asan_report_store1(p_is_open);
          }
          v12->second.is_open = 1;
          __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
        }
        BaseActivity::notifyClientData(this, 0);
        v9 = 1;
      }
LABEL_21:
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 96));
      if ( v9 )
        v2 = 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/island_party_activity.cpp",
        "execAction",
        162);
      v6 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
             &v19,
             (const char (*)[19])"action param size ");
      val = std::vector<std::string>::size(&action_exec->param);
      v7 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v6, &val);
      common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v7, (const char (*)[12])off_253FD4A0);
      common::milog::MiLogStream::~MiLogStream(&v19);
      v2 = -1;
    }
  }
  else
  {
    v2 = BaseActivity::execAction(this, action_exec);
  }
  result = v2;
  if ( v20 == (char *)v3 )
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
  return result;
};

// Line 192: range 000000001454C27A-000000001454C4DE
__int64 __fastcall IslandPartyActivity::getStageIdByGalleryId(
        IslandPartyActivity *const this,
        uint32_t gallery_id,
        unsigned __int64 stage_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  uint32_t id; // ecx
  const data::ActivityIslandPartyStageExcelConfig *stage_config_ptr; // [rsp+28h] [rbp-98h]
  std::shared_ptr<Config> v12; // [rsp+30h] [rbp-90h] BYREF
  common::milog::MiLogStream v13; // [rsp+40h] [rbp-80h] BYREF
  char v14[96]; // [rsp+60h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 14 gallery_id:191";
  *(_QWORD *)(v3 + 16) = IslandPartyActivity::getStageIdByGalleryId;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = gallery_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v12);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v12);
  stage_config_ptr = ActivityIslandPartyExcelConfigMgr::findConfigByGalleryId(
                       &v6->design_config.txt_config_mgr.activity_island_party_mgr,
                       *(_DWORD *)(v3 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v12);
  if ( stage_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&stage_config_ptr->id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&stage_config_ptr->id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    id = stage_config_ptr->id;
    if ( *(_BYTE *)((stage_id >> 3) + 0x7FFF8000) != 0
      && (char)((stage_id & 7) + 3) >= *(_BYTE *)((stage_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(stage_id);
    }
    *(_DWORD *)stage_id = id;
    result = 0LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/island_party_activity.cpp",
      "getStageIdByGalleryId",
      196);
    v7 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
           &v13,
           (const char (*)[35])"[ISLAND_PARTY] invaild gallery_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v13);
    result = 0xFFFFFFFFLL;
  }
  if ( v14 == (char *)v3 )
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

// Line 204: range 000000001454C4E0-000000001454C932
__int64 __fastcall IslandPartyActivity::tryRecordGalleryScore(
        IslandPartyActivity *const this,
        uint32_t gallery_id,
        uint32_t score)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v8; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,IslandPartyStageData> >::pointer v9; // rdx
  uint32_t v10; // r14d
  std::_Rb_tree_iterator<std::pair<unsigned int const,IslandPartyStageData> >::pointer v11; // rdx
  uint32_t *p_best_score; // rax
  PlayerEventComp *EventComp; // r14
  std::_Rb_tree_iterator<std::pair<unsigned int const,IslandPartyStageData> >::_Self __x; // [rsp+18h] [rbp-F8h] BYREF
  std::shared_ptr<IslandPartyReachScoreEvent> __r; // [rsp+20h] [rbp-F0h] BYREF
  std::shared_ptr<BaseEvent> p_event_ptr; // [rsp+30h] [rbp-E0h] BYREF
  common::milog::MiLogStream v18; // [rsp+40h] [rbp-D0h] BYREF
  char v19[176]; // [rsp+60h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 12 stage_id:205 64 4 14 gallery_id:203 80 4 9 score:203 96 8 8 iter:211";
  *(_QWORD *)(v3 + 16) = IslandPartyActivity::tryRecordGalleryScore;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 64) = gallery_id;
  *(_DWORD *)(v3 + 80) = score;
  *(_DWORD *)(v3 + 48) = 0;
  if ( (unsigned int)IslandPartyActivity::getStageIdByGalleryId(this, *(_DWORD *)(v3 + 64), v3 + 48) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/island_party_activity.cpp",
      "tryRecordGalleryScore",
      208);
    v6 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
           &v18,
           (const char (*)[35])"[ISLAND_PARTY] invaild gallery_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 64));
    common::milog::MiLogStream::~MiLogStream(&v18);
    result = 0LL;
  }
  else
  {
    *(std::map<unsigned int,IslandPartyStageData>::iterator *)(v3 + 96) = std::map<unsigned int,IslandPartyStageData>::find(
                                                                            &this->stage_map_,
                                                                            (const std::map<unsigned int,IslandPartyStageData>::key_type *)(v3 + 48));
    __x._M_node = std::map<unsigned int,IslandPartyStageData>::end(&this->stage_map_)._M_node;
    if ( std::operator==(
           &__x,
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,IslandPartyStageData> >::_Self *)(v3 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/island_party_activity.cpp",
        "tryRecordGalleryScore",
        214);
      v8 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
             &v18,
             (const char (*)[33])"[ISLAND_PARTY] invaild stage_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v18);
      result = 0LL;
    }
    else
    {
      v9 = std::_Rb_tree_iterator<std::pair<unsigned int const,IslandPartyStageData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,IslandPartyStageData> > *const)(v3 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&v9->second.best_score >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v9 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v9->second.best_score >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( v9->second.best_score >= *(_DWORD *)(v3 + 80) )
      {
        result = 0LL;
      }
      else
      {
        v10 = *(_DWORD *)(v3 + 80);
        v11 = std::_Rb_tree_iterator<std::pair<unsigned int const,IslandPartyStageData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,IslandPartyStageData> > *const)(v3 + 96));
        p_best_score = &v11->second.best_score;
        if ( *(_BYTE *)(((unsigned __int64)p_best_score >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_best_score & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_best_score >> 3)
                                                                         + 0x7FFF8000) )
        {
          __asan_report_store4(p_best_score);
        }
        v11->second.best_score = v10;
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        EventComp = Player::getEventComp(this->player_);
        common::tools::perf::make_shared<IslandPartyReachScoreEvent,unsigned int &,unsigned int &>(
          (unsigned int *)&__r,
          (unsigned int *)(v3 + 48),
          (unsigned int *)(v3 + 80),
          (unsigned int *)(v3 + 48));
        std::shared_ptr<BaseEvent>::shared_ptr<IslandPartyReachScoreEvent,void>(&p_event_ptr, &__r);
        PlayerEventComp::notifyEvent(EventComp, &p_event_ptr);
        std::shared_ptr<BaseEvent>::~shared_ptr(&p_event_ptr);
        std::shared_ptr<IslandPartyReachScoreEvent>::~shared_ptr(&__r);
        BaseActivity::notifyClientData(this, 0);
        result = 1LL;
      }
    }
  }
  if ( v19 == (char *)v3 )
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

// Line 230: range 000000001454C934-000000001454D0FD
// local variable allocation has failed, the output may be wrong!
void __cdecl IslandPartyActivity::onGalleryStartEvent(IslandPartyActivity *const this, const GalleryStartEvent *event)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  ActivityIslandPartyExcelConfigMgr *p_activity_island_party_mgr; // rcx
  common::milog::MiLogStream *v7; // r14
  Scene *v8; // rax
  uint32_t GalleryComp; // ecx
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyIslandPartyStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyIslandPartyStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // r14
  std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyIslandPartyStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // r14
  std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  google::protobuf::uint32 GalleryStartSource; // eax
  Player *v17; // r14
  PlayerExhibitionComp *ExhibitionComp; // rcx
  std::string eventa; // [rsp+0h] [rbp-130h] OVERLAPPED BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-110h] BYREF
  std::shared_ptr<google::protobuf::Message> v21; // [rsp+30h] [rbp-100h] BYREF
  common::milog::MiLogStream v22; // [rsp+40h] [rbp-F0h] BYREF
  char v23[208]; // [rsp+60h] [rbp-D0h] BYREF

  eventa._M_string_length = (std::string::size_type)this;
  eventa._M_dataplus._M_p = (std::string::pointer)event;
  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 1 10 holder:254 64 16 13 scene_ptr:241 96 16 20 base_gallery_ptr:247 128 16 11 log_ptr:255";
  *(_QWORD *)(v2 + 16) = IslandPartyActivity::onGalleryStartEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -202178560;
  if ( BaseActivity::isOpening((const BaseActivity *const)eventa._M_string_length, 0)
    && !BaseActivity::isFinished((const BaseActivity *const)eventa._M_string_length) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v21);
    p_activity_island_party_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21)->design_config.txt_config_mgr.activity_island_party_mgr;
    if ( *(_BYTE *)(((unsigned __int64)(eventa._M_dataplus._M_p + 24) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)(eventa._M_dataplus._M_p + 24) >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    *(&eventa._anon_0._M_allocated_capacity + 1) = (std::string::size_type)ActivityIslandPartyExcelConfigMgr::findConfigByGalleryId(
                                                                             p_activity_island_party_mgr,
                                                                             *((_DWORD *)eventa._M_dataplus._M_p + 6));
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v21);
    if ( *(&eventa._anon_0._M_allocated_capacity + 1) )
    {
      if ( *(_BYTE *)(((eventa._M_string_length + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::getSceneComp(*(Player *const *)(eventa._M_string_length + 24));
      PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 64));
      if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/island_party_activity.cpp",
          "onGalleryStartEvent",
          244);
        v7 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
               &v22,
               (const char (*)[41])"[ISLAND_PARTY] getCurScene failed, uid: ");
        if ( *(_BYTE *)(((eventa._M_string_length + 24) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        HIDWORD(eventa._anon_0._M_allocated_capacity) = Player::getUid(*(const Player *const *)(eventa._M_string_length
                                                                                              + 24));
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
          v7,
          (const unsigned int *)&eventa._anon_0._M_allocated_capacity + 1);
        common::milog::MiLogStream::~MiLogStream(&v22);
      }
      else
      {
        v8 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        GalleryComp = (unsigned int)Scene::getGalleryComp(v8);
        if ( *(_BYTE *)(((unsigned __int64)(eventa._M_dataplus._M_p + 24) >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)(eventa._M_dataplus._M_p + 24) >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        SceneGalleryComp::findGallery((SceneGalleryComp *const)(v2 + 96), GalleryComp);
        if ( std::operator==<BaseGallery>(0LL, (const std::shared_ptr<BaseGallery> *)(v2 + 96)) )
        {
          common::milog::MiLogStream::create(
            &v22,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/island_party_activity.cpp",
            "onGalleryStartEvent",
            250);
          common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
            &v22,
            (const char (*)[34])"[ISLAND_PARTY] gallery not exists");
          common::milog::MiLogStream::~MiLogStream(&v22);
        }
        else
        {
          if ( *(_BYTE *)(((eventa._M_string_length + 24) >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          BasicComp = Player::getBasicComp(*(Player *const *)(eventa._M_string_length + 24));
          PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v22, BasicComp);
          StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 0xE31u, eventa);
          std::string::~string(&v22);
          common::tools::perf::make_shared<proto_log::PlayerLogBodyIslandPartyStart>();
          v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyIslandPartyStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyIslandPartyStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
          if ( *(_BYTE *)(((*(&eventa._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((*(&eventa._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          proto_log::PlayerLogBodyIslandPartyStart::set_level_id(
            v11,
            *(_DWORD *)(*(&eventa._anon_0._M_allocated_capacity + 1) + 8));
          v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyIslandPartyStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyIslandPartyStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
          v13 = std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          BaseGallery::getTransaction[abi:cxx11]((std::string *)&v22, v13);
          proto_log::PlayerLogBodyIslandPartyStart::set_transaction(v12, (std::string *)&v22);
          std::string::~string(&v22);
          v14 = std::__shared_ptr_access<proto_log::PlayerLogBodyIslandPartyStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyIslandPartyStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
          v15 = std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          GalleryStartSource = BaseGallery::getGalleryStartSource(v15);
          proto_log::PlayerLogBodyIslandPartyStart::set_start_source(v14, GalleryStartSource);
          if ( *(_BYTE *)(((eventa._M_string_length + 24) >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v17 = *(Player **)(eventa._M_string_length + 24);
          std::shared_ptr<google::protobuf::Message>::shared_ptr(&v21, 0LL);
          std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyIslandPartyStart,void>(
            &p_body_ptr,
            (const std::shared_ptr<proto_log::PlayerLogBodyIslandPartyStart> *)(v2 + 128));
          Player::printStatLog(v17, &p_body_ptr, &v21, 0xEu);
          std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
          std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v21);
          if ( *(_BYTE *)(((eventa._M_string_length + 24) >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          ExhibitionComp = Player::getExhibitionComp(*(Player *const *)(eventa._M_string_length + 24));
          if ( *(_BYTE *)(((*(&eventa._anon_0._M_allocated_capacity + 1) + 20) >> 3) + 0x7FFF8000) != 0
            && (char)(((eventa._anon_0._M_local_buf[8] + 20) & 7) + 3) >= *(_BYTE *)(((*(&eventa._anon_0._M_allocated_capacity
                                                                                       + 1)
                                                                                     + 20) >> 3)
                                                                                   + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          PlayerExhibitionComp::clearSeriesExhibitionReplaceableData(
            ExhibitionComp,
            *(_DWORD *)(*(&eventa._anon_0._M_allocated_capacity + 1) + 20));
          std::shared_ptr<proto_log::PlayerLogBodyIslandPartyStart>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyIslandPartyStart> *const)(v2 + 128));
          StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
        }
        std::shared_ptr<BaseGallery>::~shared_ptr((std::shared_ptr<BaseGallery> *const)(v2 + 96));
      }
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 64));
    }
  }
  if ( v23 == (char *)v2 )
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

// Line 266: range 000000001454D0FE-000000001454EC7C
void __cdecl IslandPartyActivity::onGallerySettleEvent(
        IslandPartyActivity *const this,
        const GalleryIslandPartySettleEvent *event)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,IslandPartyStageData> >::pointer v7; // rdx
  bool *p_is_open; // rax
  common::milog::MiLogStream *v9; // rax
  ActivityIslandPartyExcelConfigMgr *p_activity_island_party_mgr; // r14
  std::_Rb_tree_iterator<std::pair<unsigned int const,IslandPartyStageData> >::pointer v11; // rdx
  common::milog::MiLogStream *v12; // rax
  GameserverService *v13; // rax
  uint32_t v14; // ecx
  proto::OnlinePlayerInfo *v15; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  Player *v17; // rax
  PlayerExhibitionComp *ExhibitionComp; // rax
  std::tuple_element<0,const std::pair<unsigned int const,proto::OnlinePlayerInfo> >::type v19; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  PlayerExhibitionComp *v21; // rax
  unsigned __int64 n; // rax
  char v23; // al
  common::milog::MiLogStream *v24; // r14
  PlayerSceneComp *SceneComp; // rax
  uint32_t CurWorldOwnerUid; // r14d
  std::vector<unsigned int>::size_type v27; // rax
  bool v28; // r14
  signed int source; // r15d
  std::vector<unsigned int> *v30; // rax
  common::milog::MiLogStream *v31; // r14
  Scene *v32; // rax
  uint32_t GalleryComp; // ecx
  GalleryExcelConfigMgr *p_gallery_config_mgr; // rcx
  common::milog::MiLogStream *v35; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyIslandPartySettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyIslandPartySettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // r14
  std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v39; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyIslandPartySettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v40; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyIslandPartySettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v41; // rcx
  uint32_t duration; // esi
  std::__shared_ptr_access<proto_log::PlayerLogBodyIslandPartySettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v43; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyIslandPartySettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v44; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyIslandPartySettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v45; // rax
  google::protobuf::RepeatedField<unsigned int> *v46; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyIslandPartySettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v47; // rax
  google::protobuf::RepeatedField<unsigned int> *v48; // rax
  Player *v49; // r14
  std::string v50; // [rsp+0h] [rbp-3D0h]
  unsigned int val; // [rsp+28h] [rbp-3A8h] BYREF
  uint32_t add_score; // [rsp+2Ch] [rbp-3A4h]
  std::map<unsigned int,proto::OnlinePlayerInfo>::const_iterator __for_begin; // [rsp+30h] [rbp-3A0h] BYREF
  std::map<unsigned int,proto::OnlinePlayerInfo>::const_iterator __for_end; // [rsp+38h] [rbp-398h] BYREF
  std::vector<ExhibitonCardParam>::iterator __for_begin_0; // [rsp+40h] [rbp-390h] BYREF
  std::vector<ExhibitonCardParam>::iterator __for_end_0; // [rsp+48h] [rbp-388h] BYREF
  const data::ActivityIslandPartyStageExcelConfig *stage_config_ptr; // [rsp+50h] [rbp-380h]
  const std::map<unsigned int,proto::OnlinePlayerInfo> *__for_range; // [rsp+58h] [rbp-378h]
  std::vector<ExhibitionScoreParam> *__for_range_1; // [rsp+60h] [rbp-370h]
  proto::ExhibitionDisplayInfo *score_info; // [rsp+68h] [rbp-368h]
  const std::pair<unsigned int const,proto::OnlinePlayerInfo> *v61; // [rsp+70h] [rbp-360h]
  std::tuple_element<0,const std::pair<unsigned int const,proto::OnlinePlayerInfo> >::type *uid; // [rsp+78h] [rbp-358h]
  std::tuple_element<1,const std::pair<unsigned int const,proto::OnlinePlayerInfo> >::type *player_info; // [rsp+80h] [rbp-350h]
  proto::IslandPartyGallerySettleInfo *settle_info; // [rsp+88h] [rbp-348h]
  std::vector<ExhibitonCardParam> *__for_range_0; // [rsp+90h] [rbp-340h]
  const ExhibitonCardParam *param; // [rsp+98h] [rbp-338h]
  proto::ExhibitionDisplayInfo *card_info; // [rsp+A0h] [rbp-330h]
  const std::map<unsigned int,proto::OnlinePlayerInfo> *__for_range_2; // [rsp+A8h] [rbp-328h]
  const std::pair<unsigned int const,proto::OnlinePlayerInfo> *v69; // [rsp+B0h] [rbp-320h]
  std::tuple_element<0,const std::pair<unsigned int const,proto::OnlinePlayerInfo> >::type *uid_0; // [rsp+B8h] [rbp-318h]
  std::tuple_element<1,const std::pair<unsigned int const,proto::OnlinePlayerInfo> >::type *_; // [rsp+C0h] [rbp-310h]
  const data::GalleryExcelConfig *gallery_config_ptr; // [rsp+C8h] [rbp-308h]
  std::shared_ptr<google::protobuf::Message> v73; // [rsp+D0h] [rbp-300h] BYREF
  common::milog::MiLogStream v74; // [rsp+E0h] [rbp-2F0h] BYREF
  common::milog::MiLogStream v75; // [rsp+100h] [rbp-2D0h] BYREF
  char v76[688]; // [rsp+120h] [rbp-2B0h] BYREF

  *(&v50._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v50._anon_0._M_allocated_capacity = (std::string::size_type)event;
  v2 = (unsigned __int64)v76;
  v50._M_string_length = (std::string::size_type)v76;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(640LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "13 48 1 10 holder:376 64 4 12 stage_id:268 80 8 8 iter:274 112 12 9 param:326 144 16 13 scene_pt"
                        "r:358 176 16 20 base_gallery_ptr:364 208 16 11 log_ptr:377 240 16 14 player_ptr:303 272 24 19 sc"
                        "ore_entry_vec:289 336 24 18 card_entry_vec:290 400 24 11 uid_vec:348 464 24 18 card_param_vec:31"
                        "1 528 80 10 notify:287";
  *(_QWORD *)(v2 + 16) = IslandPartyActivity::onGallerySettleEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = 61956;
  v4[536862722] = -234881024;
  v4[536862723] = 62194;
  v4[536862723] = 0x4000000;
  v4[536862724] = 62194;
  v4[536862725] = 62194;
  v4[536862726] = 62194;
  v4[536862727] = 62194;
  v4[536862728] = 62194;
  v4[536862729] = -218959360;
  v4[536862730] = 62194;
  v4[536862731] = -218959360;
  v4[536862732] = 62194;
  v4[536862733] = -218959360;
  v4[536862734] = 62194;
  v4[536862735] = -218959360;
  v4[536862736] = 62194;
  v4[536862739] = -202116109;
  *(_DWORD *)(v2 + 64) = 0;
  if ( *(_BYTE *)(((unsigned __int64)&event->gallery_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->gallery_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( (unsigned int)IslandPartyActivity::getStageIdByGalleryId(this, event->gallery_id, v2 + 64) )
  {
    common::milog::MiLogStream::create(
      &v75,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/island_party_activity.cpp",
      "onGallerySettleEvent",
      271);
    v5 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
           &v75,
           (const char (*)[35])"[ISLAND_PARTY] invaild gallery_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &event->gallery_id);
    common::milog::MiLogStream::~MiLogStream(&v75);
    goto LABEL_100;
  }
  *(std::map<unsigned int,IslandPartyStageData>::iterator *)(v2 + 80) = std::map<unsigned int,IslandPartyStageData>::find(
                                                                          &this->stage_map_,
                                                                          (const std::map<unsigned int,IslandPartyStageData>::key_type *)(v2 + 64));
  __for_end_0._M_current = (ExhibitonCardParam *)std::map<unsigned int,IslandPartyStageData>::end(&this->stage_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,IslandPartyStageData> >::_Self *)&__for_end_0,
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,IslandPartyStageData> >::_Self *)(v2 + 80)) )
  {
    common::milog::MiLogStream::create(
      &v75,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/island_party_activity.cpp",
      "onGallerySettleEvent",
      277);
    v6 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
           &v75,
           (const char (*)[33])"[ISLAND_PARTY] invaild stage_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 64));
    common::milog::MiLogStream::~MiLogStream(&v75);
    goto LABEL_100;
  }
  v7 = std::_Rb_tree_iterator<std::pair<unsigned int const,IslandPartyStageData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,IslandPartyStageData> > *const)(v2 + 80));
  p_is_open = &v7->second.is_open;
  if ( *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)p_is_open & 7) >= *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(p_is_open);
  }
  if ( !v7->second.is_open )
  {
    common::milog::MiLogStream::create(
      &v75,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/island_party_activity.cpp",
      "onGallerySettleEvent",
      282);
    v9 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
           &v75,
           (const char (*)[54])"[ISLAND_PARTY] stage_data is not opening, gallery_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &event->gallery_id);
    common::milog::MiLogStream::~MiLogStream(&v75);
    goto LABEL_100;
  }
  proto::IslandPartySettleNotify::IslandPartySettleNotify((proto::IslandPartySettleNotify *const)(v2 + 528));
  add_score = 0;
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 272));
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 336));
  if ( *(_BYTE *)(((unsigned __int64)&event->reason >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->reason >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( event->reason != GALLERY_STOP_LUA_INTERRUPT_SUCCESS )
    goto LABEL_51;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v73);
  p_activity_island_party_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v73)->design_config.txt_config_mgr.activity_island_party_mgr;
  v11 = std::_Rb_tree_iterator<std::pair<unsigned int const,IslandPartyStageData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,IslandPartyStageData> > *const)(v2 + 80));
  if ( *(_BYTE *)(((unsigned __int64)&v11->second >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v11 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v11->second >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  stage_config_ptr = data::ActivityIslandPartyExcelConfigMgrBase::findActivityIslandPartyStageExcelConfig(
                       p_activity_island_party_mgr,
                       v11->second.stage_id);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v73);
  if ( stage_config_ptr )
  {
    __for_range = &event->player_info_map;
    __for_begin._M_node = std::map<unsigned int,proto::OnlinePlayerInfo>::begin(&event->player_info_map)._M_node;
    __for_end._M_node = std::map<unsigned int,proto::OnlinePlayerInfo>::end(__for_range)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v61 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo>>::operator*(&__for_begin);
      uid = std::get<0ul,unsigned int const,proto::OnlinePlayerInfo>(v61);
      player_info = (std::tuple_element<1,const std::pair<unsigned int const,proto::OnlinePlayerInfo> >::type *)std::get<1ul,unsigned int const,proto::OnlinePlayerInfo>(v61);
      v13 = ServiceBox::findService<GameserverService>();
      v14 = (unsigned int)GameserverService::getGameThreadLocal(v13) + 16;
      if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      PlayerMgr::findOnlinePlayer((PlayerMgr *const)(v2 + 240), v14);
      if ( !std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 240)) )
      {
        settle_info = proto::IslandPartySettleNotify::add_settle_info_list((proto::IslandPartySettleNotify *const)(v2 + 528));
        v15 = proto::IslandPartyGallerySettleInfo::mutable_player_info(settle_info);
        proto::OnlinePlayerInfo::operator=(v15, player_info);
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v73);
        v16 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v73);
        ActivityIslandPartyExcelConfigMgr::findCardVecByStageId(
          (std::vector<unsigned int> *)(v2 + 400),
          &v16->design_config.txt_config_mgr.activity_island_party_mgr,
          *(_DWORD *)(v2 + 64));
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v73);
        v17 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 240));
        ExhibitionComp = Player::getExhibitionComp(v17);
        PlayerExhibitionComp::getSettleCardVec(
          (std::vector<ExhibitonCardParam> *)(v2 + 464),
          ExhibitionComp,
          (const std::vector<unsigned int> *)(v2 + 400));
        __for_range_0 = (std::vector<ExhibitonCardParam> *)(v2 + 464);
        __for_begin_0._M_current = std::vector<ExhibitonCardParam>::begin((std::vector<ExhibitonCardParam> *const)(v2 + 464))._M_current;
        __for_end_0._M_current = std::vector<ExhibitonCardParam>::end(__for_range_0)._M_current;
        while ( __gnu_cxx::operator!=<ExhibitonCardParam *,std::vector<ExhibitonCardParam>>(
                  &__for_begin_0,
                  &__for_end_0) )
        {
          param = __gnu_cxx::__normal_iterator<ExhibitonCardParam *,std::vector<ExhibitonCardParam>>::operator*(&__for_begin_0);
          card_info = proto::IslandPartyGallerySettleInfo::add_card_list(settle_info);
          if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          proto::ExhibitionDisplayInfo::set_id(card_info, param->card_id);
          if ( *(_BYTE *)(((unsigned __int64)&param->card_param >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->card_param >> 3)
                                                                + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          proto::ExhibitionDisplayInfo::set_param(card_info, param->card_param);
          if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          v19 = *uid;
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          if ( v19 == Player::getUid(this->player_) )
            std::vector<unsigned int>::push_back(
              (std::vector<unsigned int> *const)(v2 + 336),
              (const std::vector<unsigned int>::value_type *)param);
          __gnu_cxx::__normal_iterator<ExhibitonCardParam *,std::vector<ExhibitonCardParam>>::operator++(&__for_begin_0);
        }
        std::vector<ExhibitonCardParam>::~vector((std::vector<ExhibitonCardParam> *const)(v2 + 464));
        std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 400));
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 240));
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo>>::operator++(&__for_begin);
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v73);
    v20 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v73);
    ActivityIslandPartyExcelConfigMgr::findScoreVecByStageId(
      (std::vector<unsigned int> *)(v2 + 400),
      &v20->design_config.txt_config_mgr.activity_island_party_mgr,
      *(_DWORD *)(v2 + 64));
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v73);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v21 = Player::getExhibitionComp(this->player_);
    PlayerExhibitionComp::getSettleScoreVec(
      (std::vector<ExhibitionScoreParam> *)(v2 + 464),
      v21,
      (const std::vector<unsigned int> *)(v2 + 400));
    __for_range_1 = (std::vector<ExhibitionScoreParam> *)(v2 + 464);
    __for_begin_0._M_current = (ExhibitonCardParam *)std::vector<ExhibitionScoreParam>::begin((std::vector<ExhibitionScoreParam> *const)(v2 + 464))._M_current;
    __for_end_0._M_current = (ExhibitonCardParam *)std::vector<ExhibitionScoreParam>::end(__for_range_1)._M_current;
    while ( __gnu_cxx::operator!=<ExhibitionScoreParam *,std::vector<ExhibitionScoreParam>>(
              (const __gnu_cxx::__normal_iterator<ExhibitionScoreParam*,std::vector<ExhibitionScoreParam> > *)&__for_begin_0,
              (const __gnu_cxx::__normal_iterator<ExhibitionScoreParam*,std::vector<ExhibitionScoreParam> > *)&__for_end_0) )
    {
      n = (unsigned __int64)__gnu_cxx::__normal_iterator<ExhibitionScoreParam *,std::vector<ExhibitionScoreParam>>::operator*((const __gnu_cxx::__normal_iterator<ExhibitionScoreParam*,std::vector<ExhibitionScoreParam> > *const)&__for_begin_0);
      if ( (char)(n & 7) >= *(_BYTE *)((n >> 3) + 0x7FFF8000) && *(_BYTE *)((n >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)(((n + 11) >> 3) + 0x7FFF8000) != 0
        && (char)((n + 11) & 7) >= *(_BYTE *)(((n + 11) >> 3) + 0x7FFF8000) )
      {
        n = __asan_report_load_n(n, 12LL);
      }
      *(_QWORD *)(v2 + 112) = *(_QWORD *)n;
      *(_DWORD *)(v2 + 120) = *(_DWORD *)(n + 8);
      score_info = proto::IslandPartySettleNotify::add_score_list((proto::IslandPartySettleNotify *const)(v2 + 528));
      proto::ExhibitionDisplayInfo::set_id(score_info, *(_DWORD *)(v2 + 112));
      proto::ExhibitionDisplayInfo::set_param(score_info, *(_DWORD *)(v2 + 116));
      proto::ExhibitionDisplayInfo::set_detail_param(score_info, *(_DWORD *)(v2 + 120));
      add_score = SAFE_ADD<unsigned int,unsigned int>(add_score, *(_DWORD *)(v2 + 116));
      std::vector<unsigned int>::push_back(
        (std::vector<unsigned int> *const)(v2 + 272),
        (const std::vector<unsigned int>::value_type *)(v2 + 112));
      __gnu_cxx::__normal_iterator<ExhibitionScoreParam *,std::vector<ExhibitionScoreParam>>::operator++((__gnu_cxx::__normal_iterator<ExhibitionScoreParam*,std::vector<ExhibitionScoreParam> > *const)&__for_begin_0);
    }
    if ( *(_BYTE *)(((unsigned __int64)&event->gallery_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->gallery_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    v23 = IslandPartyActivity::tryRecordGalleryScore(this, event->gallery_id, add_score);
    proto::IslandPartySettleNotify::set_is_new_record((proto::IslandPartySettleNotify *const)(v2 + 528), v23);
    std::vector<ExhibitionScoreParam>::~vector((std::vector<ExhibitionScoreParam> *const)(v2 + 464));
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 400));
LABEL_51:
    if ( *(_BYTE *)(((unsigned __int64)&event->time_remain >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->time_remain >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::IslandPartySettleNotify::set_time_remain(
      (proto::IslandPartySettleNotify *const)(v2 + 528),
      event->time_remain);
    if ( *(_BYTE *)(((unsigned __int64)&event->reason >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->reason >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::IslandPartySettleNotify::set_reason((proto::IslandPartySettleNotify *const)(v2 + 528), event->reason);
    common::milog::MiLogStream::create(
      &v74,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/island_party_activity.cpp",
      "onGallerySettleEvent",
      340);
    v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v74, (const char (*)[16])"[ISLAND_PARTY] ");
    google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v75, (google::protobuf::Message *)(v2 + 528));
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v24, (const std::string *)&v75);
    std::string::~string(&v75);
    common::milog::MiLogStream::~MiLogStream(&v74);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 528));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    SceneComp = Player::getSceneComp(this->player_);
    CurWorldOwnerUid = PlayerSceneComp::getCurWorldOwnerUid(SceneComp);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( CurWorldOwnerUid == Player::getUid(this->player_) )
    {
      std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 400));
      v27 = std::map<unsigned int,proto::OnlinePlayerInfo>::size(&event->player_info_map);
      std::vector<unsigned int>::reserve((std::vector<unsigned int> *const)(v2 + 400), v27);
      __for_range_2 = &event->player_info_map;
      __for_begin_0._M_current = (ExhibitonCardParam *)std::map<unsigned int,proto::OnlinePlayerInfo>::begin(&event->player_info_map)._M_node;
      __for_end_0._M_current = (ExhibitonCardParam *)std::map<unsigned int,proto::OnlinePlayerInfo>::end(__for_range_2)._M_node;
      while ( std::operator!=(
                (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo> >::_Self *)&__for_begin_0,
                (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo> >::_Self *)&__for_end_0) )
      {
        v69 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo> > *const)&__for_begin_0);
        uid_0 = std::get<0ul,unsigned int const,proto::OnlinePlayerInfo>(v69);
        _ = (std::tuple_element<1,const std::pair<unsigned int const,proto::OnlinePlayerInfo> >::type *)std::get<1ul,unsigned int const,proto::OnlinePlayerInfo>(v69);
        std::vector<unsigned int>::emplace_back<unsigned int const&>(
          (std::vector<unsigned int> *const)(v2 + 400),
          uid_0,
          uid_0);
        std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::OnlinePlayerInfo> > *const)&__for_begin_0);
      }
      if ( *(_BYTE *)(((unsigned __int64)&event->reason >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&event->reason >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      v28 = event->reason == GALLERY_STOP_LUA_INTERRUPT_SUCCESS;
      if ( *(_BYTE *)(((unsigned __int64)&event->source >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)event + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->source >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      source = event->source;
      v30 = std::move<std::vector<unsigned int> &>((std::vector<unsigned int> *)(v2 + 400));
      std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 464), v30);
      IslandPartyActivity::startSettleDisplayFinishedTimer(
        this,
        (std::vector<unsigned int> *)(v2 + 464),
        (proto::GalleryStartSource)source,
        v28);
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 464));
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 400));
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 144));
    if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 144)) )
    {
      common::milog::MiLogStream::create(
        &v75,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/island_party_activity.cpp",
        "onGallerySettleEvent",
        361);
      v31 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
              &v75,
              (const char (*)[41])"[ISLAND_PARTY] getCurScene failed, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, &val);
      common::milog::MiLogStream::~MiLogStream(&v75);
    }
    else
    {
      v32 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
      GalleryComp = (unsigned int)Scene::getGalleryComp(v32);
      if ( *(_BYTE *)(((unsigned __int64)&event->gallery_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&event->gallery_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      SceneGalleryComp::findGallery((SceneGalleryComp *const)(v2 + 176), GalleryComp);
      if ( std::operator==<BaseGallery>(0LL, (const std::shared_ptr<BaseGallery> *)(v2 + 176)) )
      {
        common::milog::MiLogStream::create(
          &v75,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/island_party_activity.cpp",
          "onGallerySettleEvent",
          367);
        common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
          &v75,
          (const char (*)[34])"[ISLAND_PARTY] gallery not exists");
        common::milog::MiLogStream::~MiLogStream(&v75);
      }
      else
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v73);
        p_gallery_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v73)->design_config.txt_config_mgr.gallery_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)&event->gallery_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&event->gallery_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        gallery_config_ptr = data::GalleryExcelConfigMgrBase::findGalleryExcelConfig(
                               p_gallery_config_mgr,
                               event->gallery_id);
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v73);
        if ( gallery_config_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          BasicComp = Player::getBasicComp(this->player_);
          PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v75, BasicComp);
          StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 0xE32u, v50);
          std::string::~string(&v75);
          common::tools::perf::make_shared<proto_log::PlayerLogBodyIslandPartySettle>();
          v37 = std::__shared_ptr_access<proto_log::PlayerLogBodyIslandPartySettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyIslandPartySettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 208));
          proto_log::PlayerLogBodyIslandPartySettle::set_level_id(v37, *(_DWORD *)(v2 + 64));
          v38 = std::__shared_ptr_access<proto_log::PlayerLogBodyIslandPartySettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyIslandPartySettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 208));
          v39 = std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 176));
          BaseGallery::getTransaction[abi:cxx11]((std::string *)&v75, v39);
          proto_log::PlayerLogBodyIslandPartySettle::set_transaction(v38, (std::string *)&v75);
          std::string::~string(&v75);
          v40 = std::__shared_ptr_access<proto_log::PlayerLogBodyIslandPartySettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyIslandPartySettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 208));
          if ( *(_BYTE *)(((v50._anon_0._M_allocated_capacity + 80) >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((v50._anon_0._M_allocated_capacity + 80) >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          proto_log::PlayerLogBodyIslandPartySettle::set_stop_reason(
            v40,
            *(_DWORD *)(v50._anon_0._M_allocated_capacity + 80));
          v41 = std::__shared_ptr_access<proto_log::PlayerLogBodyIslandPartySettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyIslandPartySettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 208));
          if ( *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->duration >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->duration >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          duration = gallery_config_ptr->duration;
          if ( *(_BYTE *)(((v50._anon_0._M_allocated_capacity + 28) >> 3) + 0x7FFF8000) != 0
            && (char)(((v50._anon_0._M_local_buf[0] + 28) & 7) + 3) >= *(_BYTE *)(((v50._anon_0._M_allocated_capacity
                                                                                  + 28) >> 3)
                                                                                + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          proto_log::PlayerLogBodyIslandPartySettle::set_use_time(
            v41,
            duration - *(_DWORD *)(v50._anon_0._M_allocated_capacity + 28));
          v43 = std::__shared_ptr_access<proto_log::PlayerLogBodyIslandPartySettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyIslandPartySettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 208));
          if ( *(_BYTE *)(((v50._anon_0._M_allocated_capacity + 28) >> 3) + 0x7FFF8000) != 0
            && (char)(((v50._anon_0._M_local_buf[0] + 28) & 7) + 3) >= *(_BYTE *)(((v50._anon_0._M_allocated_capacity
                                                                                  + 28) >> 3)
                                                                                + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          proto_log::PlayerLogBodyIslandPartySettle::set_left_time(
            v43,
            *(_DWORD *)(v50._anon_0._M_allocated_capacity + 28));
          v44 = std::__shared_ptr_access<proto_log::PlayerLogBodyIslandPartySettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyIslandPartySettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 208));
          proto_log::PlayerLogBodyIslandPartySettle::set_score(v44, add_score);
          v45 = std::__shared_ptr_access<proto_log::PlayerLogBodyIslandPartySettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyIslandPartySettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 208));
          v46 = proto_log::PlayerLogBodyIslandPartySettle::mutable_score_entry_list(v45);
          common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(
            (const std::vector<unsigned int> *)(v2 + 272),
            v46);
          v47 = std::__shared_ptr_access<proto_log::PlayerLogBodyIslandPartySettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyIslandPartySettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 208));
          v48 = proto_log::PlayerLogBodyIslandPartySettle::mutable_card_entry_list(v47);
          common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(
            (const std::vector<unsigned int> *)(v2 + 336),
            v48);
          if ( *(_BYTE *)(((*(&v50._anon_0._M_allocated_capacity + 1) + 24) >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v49 = *(Player **)(*(&v50._anon_0._M_allocated_capacity + 1) + 24);
          std::shared_ptr<google::protobuf::Message>::shared_ptr(&v73, 0LL);
          std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyIslandPartySettle,void>(
            (std::shared_ptr<google::protobuf::Message> *const)(v2 + 240),
            (const std::shared_ptr<proto_log::PlayerLogBodyIslandPartySettle> *)(v2 + 208));
          Player::printStatLog(v49, (MessagePtr *)(v2 + 240), &v73, 0xEu);
          std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)(v2 + 240));
          std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v73);
          std::shared_ptr<proto_log::PlayerLogBodyIslandPartySettle>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyIslandPartySettle> *const)(v2 + 208));
          StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
        }
        else
        {
          common::milog::MiLogStream::create(
            &v75,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/island_party_activity.cpp",
            "onGallerySettleEvent",
            373);
          v35 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                  &v75,
                  (const char (*)[55])"[ISLAND_PARTY] gallery_config_ptr is null, gallery_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, &event->gallery_id);
          common::milog::MiLogStream::~MiLogStream(&v75);
        }
      }
      std::shared_ptr<BaseGallery>::~shared_ptr((std::shared_ptr<BaseGallery> *const)(v2 + 176));
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 144));
    goto LABEL_99;
  }
  common::milog::MiLogStream::create(
    &v75,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/activity/island_party_activity.cpp",
    "onGallerySettleEvent",
    297);
  v12 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
          &v75,
          (const char (*)[35])"[ISLAND_PARTY] invaild gallery_id:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &event->gallery_id);
  common::milog::MiLogStream::~MiLogStream(&v75);
LABEL_99:
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 336));
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 272));
  proto::IslandPartySettleNotify::~IslandPartySettleNotify((proto::IslandPartySettleNotify *const)(v2 + 528));
LABEL_100:
  if ( v50._M_string_length == v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8040) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF804C) = 0;
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
  }
};

// Line 390: range 000000001454EC7E-000000001454EE0E
_BOOL8 __fastcall IslandPartyActivity::isStageOpen(const IslandPartyActivity *const this, uint32_t stage_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  _BOOL8 result; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,IslandPartyStageData> >::pointer v6; // rdx
  bool *p_is_open; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,IslandPartyStageData> >::_Self __y; // [rsp+18h] [rbp-88h] BYREF
  char v9[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 stage_id:389 64 8 8 iter:391";
  *(_QWORD *)(v2 + 16) = IslandPartyActivity::isStageOpen;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = stage_id;
  *(std::map<unsigned int,IslandPartyStageData>::const_iterator *)(v2 + 64) = std::map<unsigned int,IslandPartyStageData>::find(
                                                                                &this->stage_map_,
                                                                                (const std::map<unsigned int,IslandPartyStageData>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,IslandPartyStageData>::end(&this->stage_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,IslandPartyStageData> >::_Self *)(v2 + 64),
         &__y) )
  {
    result = 0LL;
  }
  else
  {
    v6 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,IslandPartyStageData>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,IslandPartyStageData> > *const)(v2 + 64));
    p_is_open = &v6->second.is_open;
    if ( *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_open & 7) >= *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(p_is_open);
    }
    result = v6->second.is_open;
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

// Line 400: range 00000000145508F6-0000000014551085
void __cdecl IslandPartyActivity::startSettleDisplayFinishedTimer(
        IslandPartyActivity *const this,
        std::vector<unsigned int> *p_uid_vec,
        proto::GalleryStartSource source,
        bool is_success)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::vector<unsigned int> *v8; // rax
  SceneUnixTimer *v9; // rax
  std::vector<unsigned int> *v10; // rax
  SceneUnixTimer *v11; // rax
  common::milog::MiLogStream *v12; // rax
  unsigned int val; // [rsp+2Ch] [rbp-F4h] BYREF
  uint32_t timeout; // [rsp+30h] [rbp-F0h]
  uint32_t timeout_0; // [rsp+34h] [rbp-ECh]
  const data::ActivityIslandPartyOverallExcelConfig *overall_config; // [rsp+38h] [rbp-E8h]
  std::shared_ptr<Scene> v19; // [rsp+40h] [rbp-E0h] BYREF
  std::shared_ptr<Scene> v20; // [rsp+50h] [rbp-D0h] BYREF
  common::milog::MiLogStream v21; // [rsp+60h] [rbp-C0h] BYREF
  IslandPartyActivity::startSettleDisplayFinishedTimer::<lambda(uint64_t)>_0 v22; // [rsp+80h] [rbp-A0h] BYREF
  char v23[112]; // [rsp+B0h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 13 scene_ptr:403";
  *(_QWORD *)(v4 + 16) = IslandPartyActivity::startSettleDisplayFinishedTimer;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v20);
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20);
  overall_config = ActivityIslandPartyExcelConfigMgr::getOverallConfig(&v7->design_config.txt_config_mgr.activity_island_party_mgr);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v20);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v4 + 32));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v4 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/island_party_activity.cpp",
      "startSettleDisplayFinishedTimer",
      406);
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
      &v21,
      (const char (*)[33])"[ISLAND_PARTY] scene_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v21);
  }
  else if ( source == GALLERY_START_BY_MATCH )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    std::enable_shared_from_this<Player>::weak_from_this((std::enable_shared_from_this<Player> *const)&v22);
    v8 = std::move<std::vector<unsigned int> &>(p_uid_vec);
    std::vector<unsigned int>::vector(&v22.__uid_vec, v8);
    common::tools::perf::make_shared<SceneUnixTimer,std::shared_ptr<Scene> &,IslandPartyActivity::startSettleDisplayFinishedTimer(std::vector<unsigned int>,proto::GalleryStartSource,bool)::{lambda(unsigned long)#1}>(
      &v19,
      (IslandPartyActivity::startSettleDisplayFinishedTimer::<lambda(uint64_t)> *)(v4 + 32),
      (std::shared_ptr<Scene> *)&v22,
      (IslandPartyActivity::startSettleDisplayFinishedTimer::<lambda(uint64_t)> *)(v4 + 32));
    std::shared_ptr<SceneUnixTimer>::operator=(
      &this->settle_transfer_time_ptr_,
      (std::shared_ptr<SceneUnixTimer> *)&v19);
    std::shared_ptr<SceneUnixTimer>::~shared_ptr((std::shared_ptr<SceneUnixTimer> *const)&v19);
    IslandPartyActivity::startSettleDisplayFinishedTimer(std::vector<unsigned int>,proto::GalleryStartSource,bool)::{lambda(unsigned long)#1}::~GalleryStartSource((IslandPartyActivity::startSettleDisplayFinishedTimer::<lambda(uint64_t)> *const)&v22);
    if ( std::operator==<SceneUnixTimer>(&this->settle_transfer_time_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/island_party_activity.cpp",
        "startSettleDisplayFinishedTimer",
        488);
      common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
        &v21,
        (const char (*)[25])"create shared_ptr failed");
      common::milog::MiLogStream::~MiLogStream(&v21);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&overall_config->card_display_countdown >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&overall_config->card_display_countdown >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      timeout = overall_config->card_display_countdown;
      if ( is_success )
      {
        if ( *(_BYTE *)(((unsigned __int64)&overall_config->score_display_countdown >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)overall_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&overall_config->score_display_countdown >> 3)
                                                                        + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        timeout += overall_config->score_display_countdown;
      }
      v9 = std::__shared_ptr_access<SceneUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->settle_transfer_time_ptr_);
      SceneUnixTimer::startS(
        v9,
        timeout,
        0,
        "./src/player/activity/island_party_activity.cpp",
        "startSettleDisplayFinishedTimer",
        494);
    }
  }
  else if ( source == GALLERY_START_BY_DRAFT )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    std::enable_shared_from_this<Player>::weak_from_this((std::enable_shared_from_this<Player> *const)&v22);
    v10 = std::move<std::vector<unsigned int> &>(p_uid_vec);
    std::vector<unsigned int>::vector(&v22.__uid_vec, v10);
    common::tools::perf::make_shared<SceneUnixTimer,std::shared_ptr<Scene> &,IslandPartyActivity::startSettleDisplayFinishedTimer(std::vector<unsigned int>,proto::GalleryStartSource,bool)::{lambda(unsigned long)#2}>(
      &v20,
      (IslandPartyActivity::startSettleDisplayFinishedTimer::<lambda(uint64_t)>_0 *)(v4 + 32),
      (std::shared_ptr<Scene> *)&v22,
      (IslandPartyActivity::startSettleDisplayFinishedTimer::<lambda(uint64_t)>_0 *)(v4 + 32));
    std::shared_ptr<SceneUnixTimer>::operator=(
      &this->settle_transfer_time_ptr_,
      (std::shared_ptr<SceneUnixTimer> *)&v20);
    std::shared_ptr<SceneUnixTimer>::~shared_ptr((std::shared_ptr<SceneUnixTimer> *const)&v20);
    IslandPartyActivity::startSettleDisplayFinishedTimer(std::vector<unsigned int>,proto::GalleryStartSource,bool)::{lambda(unsigned long)#2}::~GalleryStartSource(&v22);
    if ( std::operator==<SceneUnixTimer>(&this->settle_transfer_time_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/island_party_activity.cpp",
        "startSettleDisplayFinishedTimer",
        571);
      common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
        &v21,
        (const char (*)[25])"create shared_ptr failed");
      common::milog::MiLogStream::~MiLogStream(&v21);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&overall_config->card_display_countdown >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&overall_config->card_display_countdown >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      timeout_0 = overall_config->card_display_countdown;
      if ( is_success )
      {
        if ( *(_BYTE *)(((unsigned __int64)&overall_config->score_display_countdown >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)overall_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&overall_config->score_display_countdown >> 3)
                                                                        + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        timeout_0 += overall_config->score_display_countdown;
      }
      v11 = std::__shared_ptr_access<SceneUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->settle_transfer_time_ptr_);
      SceneUnixTimer::startS(
        v11,
        timeout_0,
        0,
        "./src/player/activity/island_party_activity.cpp",
        "startSettleDisplayFinishedTimer",
        577);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/island_party_activity.cpp",
      "startSettleDisplayFinishedTimer",
      582);
    v12 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
            &v21,
            (const char (*)[23])"invalid start source: ");
    val = source;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v4 + 32));
  if ( v23 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 415: range 00000000145F42BC-00000000145F42FC
void __cdecl IslandPartyActivity::startSettleDisplayFinishedTimer(std::vector<unsigned int>,proto::GalleryStartSource,bool)::{lambda(unsigned long)#1}::GalleryStartSource(
        IslandPartyActivity::startSettleDisplayFinishedTimer::<lambda(uint64_t)> *const this,
        IslandPartyActivity::startSettleDisplayFinishedTimer::<lambda(uint64_t)> *a2)
{
  std::weak_ptr<Player>::weak_ptr(&this->__player_wtr, &a2->__player_wtr);
  std::vector<unsigned int>::vector(&this->__uid_vec, &a2->__uid_vec);
};

// Line 415: range 00000000145F628C-00000000145F62EF
void __cdecl IslandPartyActivity::startSettleDisplayFinishedTimer(std::vector<unsigned int>,proto::GalleryStartSource,bool)::{lambda(unsigned long)#1}::GalleryStartSource(
        IslandPartyActivity::startSettleDisplayFinishedTimer::<lambda(uint64_t)> *const this,
        const IslandPartyActivity::startSettleDisplayFinishedTimer::<lambda(uint64_t)> *a2)
{
  std::weak_ptr<Player>::weak_ptr(&this->__player_wtr, &a2->__player_wtr);
  std::vector<unsigned int>::vector(&this->__uid_vec, &a2->__uid_vec);
};

// Line 415: range 000000001454EE10-000000001454FBD1
void __cdecl IslandPartyActivity::startSettleDisplayFinishedTimer(std::vector<unsigned int>,proto::GalleryStartSource,bool)::{lambda(unsigned long)#1}::operator()(
        const IslandPartyActivity::startSettleDisplayFinishedTimer::<lambda(uint64_t)> *const __closure,
        uint64_t ms)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  Player *v6; // rax
  unsigned int v7; // r14d
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  LuaConfigMgr *p_lua_config_mgr; // rcx
  Player *v11; // rax
  uint32_t SceneComp; // eax
  common::milog::MiLogStream *v13; // rax
  int v14; // r14d
  LuaConfigMgr *v15; // rcx
  common::milog::MiLogStream *v16; // rax
  std::vector<unsigned int>::const_reference v17; // rdx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  char v21; // r14
  Player *v22; // rax
  PlayerSceneComp *v23; // rax
  Player *v24; // rax
  bool v25; // r15
  common::milog::MiLogStream *v26; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  Player *v28; // rax
  Vector3 *p_rot; // r15
  Vector3 *p_pos; // r14
  Scene *v31; // rax
  common::milog::MiLogStream *v32; // rax
  std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rdx
  unsigned __int64 v34; // rax
  unsigned int (__fastcall *v35)(std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, _QWORD); // r8
  common::milog::MiLogStream *v36; // rax
  std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rcx
  unsigned __int64 v38; // rax
  void (__fastcall *v39)(std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, _QWORD, __int64); // r8
  PlayerSceneComp *v40; // [rsp+8h] [rbp-198h]
  unsigned int val; // [rsp+24h] [rbp-17Ch] BYREF
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-178h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-170h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-168h]
  const unsigned int *uid; // [rsp+40h] [rbp-160h]
  const data::ActivityIslandPartyOverallExcelConfig *overall_config; // [rsp+48h] [rbp-158h]
  const GroupScriptConfig *group_config_ptr; // [rsp+50h] [rbp-150h]
  const PointScriptConfig *point_config_ptr; // [rsp+58h] [rbp-148h]
  std::shared_ptr<Scene> v49; // [rsp+60h] [rbp-140h] BYREF
  common::milog::MiLogStream v50; // [rsp+70h] [rbp-130h] BYREF
  TransferReason p_reason; // [rsp+90h] [rbp-110h] BYREF
  char v52[208]; // [rsp+D0h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v52;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 12 scene_id:438 48 4 19 point_config_id:456 64 16 14 player_ptr:419 96 16 13 world_ptr:42"
                        "5 128 16 13 scene_ptr:439";
  *(_QWORD *)(v2 + 16) = IslandPartyActivity::startSettleDisplayFinishedTimer(std::vector<unsigned int>,proto::GalleryStartSource,bool)::{lambda(unsigned long)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -202178560;
  common::milog::MiLogStream::create(
    &v50,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/island_party_activity.cpp",
    "operator()",
    417);
  v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
         &v50,
         (const char (*)[25])"[ISLAND_PARTY] uid_vec: ");
  common::milog::MiLogStream::operator<<<unsigned int>(v5, &__closure->__uid_vec);
  common::milog::MiLogStream::~MiLogStream(&v50);
  std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v2 + 64));
  if ( !std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 64), 0LL) )
  {
    v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    Player::getSceneComp(v6);
    PlayerSceneComp::getCurWorld((const PlayerSceneComp *const)(v2 + 96));
    if ( std::operator==<World>((const std::shared_ptr<World> *)(v2 + 96), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v50,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/island_party_activity.cpp",
        "operator()",
        428);
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
        &v50,
        (const char (*)[33])"[ISLAND_PARTY] world_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v50);
    }
    else
    {
      __for_range = &__closure->__uid_vec;
      __for_begin._M_current = std::vector<unsigned int>::begin(&__closure->__uid_vec)._M_current;
      __for_end._M_current = std::vector<unsigned int>::end(&__closure->__uid_vec)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
      {
        uid = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
        if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        v7 = *uid;
        v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        if ( v7 == Player::getUid(v8) )
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v49);
          v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v49);
          overall_config = ActivityIslandPartyExcelConfigMgr::getOverallConfig(&v9->design_config.txt_config_mgr.activity_island_party_mgr);
          std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v49);
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v49);
          p_lua_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v49)->design_config.lua_config_mgr;
          if ( *(_BYTE *)(((unsigned __int64)&overall_config->settle_transfer_group_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&overall_config->settle_transfer_group_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          *(_DWORD *)(v2 + 32) = LuaConfigMgr::getSceneIdByGroupId(
                                   p_lua_config_mgr,
                                   overall_config->settle_transfer_group_id);
          std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v49);
          v11 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          SceneComp = (unsigned int)Player::getSceneComp(v11);
          PlayerSceneComp::findScene((const PlayerSceneComp *const)(v2 + 128), SceneComp);
          if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 128), 0LL) )
          {
            common::milog::MiLogStream::create(
              &v50,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/island_party_activity.cpp",
              "operator()",
              442);
            v13 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                    &v50,
                    (const char (*)[44])"[ISLAND_PARTY] scene is nullptr, scene_id: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 32));
            common::milog::MiLogStream::~MiLogStream(&v50);
            v14 = 0;
          }
          else
          {
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v49);
            v15 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v49)->design_config.lua_config_mgr;
            if ( *(_BYTE *)(((unsigned __int64)&overall_config->settle_transfer_group_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&overall_config->settle_transfer_group_id >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            group_config_ptr = LuaConfigMgr::findGroupScriptConfig(v15, overall_config->settle_transfer_group_id);
            std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v49);
            if ( group_config_ptr )
            {
              if ( std::vector<unsigned int>::empty(&overall_config->settle_transfer_config_id_list) )
              {
                common::milog::MiLogStream::create(
                  &v50,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/activity/island_party_activity.cpp",
                  "operator()",
                  453);
                common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                  &v50,
                  (const char (*)[48])"[ISLAND_PARTY] transfer config id list is empty");
                common::milog::MiLogStream::~MiLogStream(&v50);
                v14 = 0;
              }
              else
              {
                v17 = std::vector<unsigned int>::front(&overall_config->settle_transfer_config_id_list);
                if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                *(_DWORD *)(v2 + 48) = *v17;
                point_config_ptr = GroupScriptConfig::findPointConfig(group_config_ptr, *(_DWORD *)(v2 + 48));
                if ( point_config_ptr )
                {
                  v21 = 0;
                  v22 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
                  v23 = Player::getSceneComp(v22);
                  v25 = 1;
                  if ( !PlayerSceneComp::isInTransfer(v23) )
                  {
                    v24 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
                    Player::getSceneComp(v24);
                    PlayerSceneComp::getCurScene((const PlayerSceneComp *const)&v49);
                    v21 = 1;
                    if ( !std::operator!=<Scene,Scene>(&v49, (const std::shared_ptr<Scene> *)(v2 + 128)) )
                      v25 = 0;
                  }
                  if ( v21 )
                    std::shared_ptr<Scene>::~shared_ptr(&v49);
                  if ( v25 )
                  {
                    common::milog::MiLogStream::create(
                      &v50,
                      &common::milog::MiLogDefault::default_log_obj_,
                      1u,
                      "./src/player/activity/island_party_activity.cpp",
                      "operator()",
                      466);
                    v26 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                            &v50,
                            (const char (*)[49])"[ISLAND_PARTY] player already in transfer, uid: ");
                    v27 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
                    val = Player::getUid(v27);
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &val);
                    common::milog::MiLogStream::~MiLogStream(&v50);
                    v14 = 2;
                  }
                  else
                  {
                    v28 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
                    v40 = Player::getSceneComp(v28);
                    memset(&p_reason, 0, sizeof(p_reason));
                    TransferReason::TransferReason(&p_reason);
                    p_rot = &point_config_ptr->rot;
                    p_pos = &point_config_ptr->pos;
                    v31 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
                    LOBYTE(p_pos) = PlayerSceneComp::jumpToScene(v40, v31, p_pos, p_rot, 0, &p_reason) != 0;
                    TransferReason::~TransferReason(&p_reason);
                    if ( (_BYTE)p_pos )
                    {
                      common::milog::MiLogStream::create(
                        &v50,
                        &common::milog::MiLogDefault::default_log_obj_,
                        3u,
                        "./src/player/activity/island_party_activity.cpp",
                        "operator()",
                        471);
                      v32 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                              &v50,
                              (const char (*)[26])"jumpToScene failed, uid: ");
                      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, uid);
                      common::milog::MiLogStream::~MiLogStream(&v50);
                      v14 = 2;
                    }
                    else
                    {
                      v14 = 3;
                    }
                  }
                }
                else
                {
                  common::milog::MiLogStream::create(
                    &v50,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/activity/island_party_activity.cpp",
                    "operator()",
                    460);
                  v18 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                          &v50,
                          (const char (*)[50])"[ISLAND_PARTY] point config not found, group_id: ");
                  v19 = common::milog::MiLogStream::operator<<<unsigned int>(
                          v18,
                          &overall_config->settle_transfer_config_id_list);
                  v20 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                          v19,
                          (const char (*)[14])", config_id: ");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v20,
                    (const unsigned int *)(v2 + 48));
                  common::milog::MiLogStream::~MiLogStream(&v50);
                  v14 = 1;
                }
              }
            }
            else
            {
              common::milog::MiLogStream::create(
                &v50,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/island_party_activity.cpp",
                "operator()",
                448);
              v16 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                      &v50,
                      (const char (*)[50])"[ISLAND_PARTY] group config not found, group_id: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v16,
                &overall_config->settle_transfer_group_id);
              common::milog::MiLogStream::~MiLogStream(&v50);
              v14 = 0;
            }
          }
          std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 128));
          if ( v14 != 3 && (!v14 || v14 == 1) )
            break;
        }
        else
        {
          v33 = std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          if ( *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v34 = (unsigned __int64)(v33->_vptr_World + 13);
          if ( *(_BYTE *)((v34 >> 3) + 0x7FFF8000) )
            v34 = __asan_report_load8();
          v35 = *(unsigned int (__fastcall **)(std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, _QWORD))v34;
          if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          if ( v35(v33, *uid) )
          {
            common::milog::MiLogStream::create(
              &v50,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/activity/island_party_activity.cpp",
              "operator()",
              479);
            v36 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                    &v50,
                    (const char (*)[31])"check kick player failed, uid:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, uid);
            common::milog::MiLogStream::~MiLogStream(&v50);
          }
          else
          {
            v37 = std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            if ( *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v38 = (unsigned __int64)(v37->_vptr_World + 14);
            if ( *(_BYTE *)((v38 >> 3) + 0x7FFF8000) )
              v38 = __asan_report_load8();
            v39 = *(void (__fastcall **)(std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, _QWORD, __int64))v38;
            if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            v39(v37, *uid, 3LL);
          }
        }
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
      }
    }
    std::shared_ptr<World>::~shared_ptr((std::shared_ptr<World> *const)(v2 + 96));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 64));
  if ( v52 == (char *)v2 )
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

// Line 415: range 000000001454FBD2-000000001454FBFC
void __cdecl IslandPartyActivity::startSettleDisplayFinishedTimer(std::vector<unsigned int>,proto::GalleryStartSource,bool)::{lambda(unsigned long)#1}::~GalleryStartSource(
        IslandPartyActivity::startSettleDisplayFinishedTimer::<lambda(uint64_t)> *const this)
{
  std::vector<unsigned int>::~vector(&this->__uid_vec);
  std::weak_ptr<Player>::~weak_ptr(&this->__player_wtr);
};

// Line 500: range 00000000145F4636-00000000145F4676
void __cdecl IslandPartyActivity::startSettleDisplayFinishedTimer(std::vector<unsigned int>,proto::GalleryStartSource,bool)::{lambda(unsigned long)#2}::GalleryStartSource(
        IslandPartyActivity::startSettleDisplayFinishedTimer::<lambda(uint64_t)>_0 *const this,
        IslandPartyActivity::startSettleDisplayFinishedTimer::<lambda(uint64_t)>_0 *a2)
{
  std::weak_ptr<Player>::weak_ptr(&this->__host_player_wtr, &a2->__host_player_wtr);
  std::vector<unsigned int>::vector(&this->__uid_vec, &a2->__uid_vec);
};

// Line 500: range 00000000145F64CC-00000000145F652F
void __cdecl IslandPartyActivity::startSettleDisplayFinishedTimer(std::vector<unsigned int>,proto::GalleryStartSource,bool)::{lambda(unsigned long)#2}::GalleryStartSource(
        IslandPartyActivity::startSettleDisplayFinishedTimer::<lambda(uint64_t)>_0 *const this,
        const IslandPartyActivity::startSettleDisplayFinishedTimer::<lambda(uint64_t)>_0 *a2)
{
  std::weak_ptr<Player>::weak_ptr(&this->__host_player_wtr, &a2->__host_player_wtr);
  std::vector<unsigned int>::vector(&this->__uid_vec, &a2->__uid_vec);
};

// Line 500: range 000000001454FBFE-00000000145508C9
void __cdecl IslandPartyActivity::startSettleDisplayFinishedTimer(std::vector<unsigned int>,proto::GalleryStartSource,bool)::{lambda(unsigned long)#2}::operator()(
        const IslandPartyActivity::startSettleDisplayFinishedTimer::<lambda(uint64_t)>_0 *const __closure,
        uint64_t ms)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  Player *v6; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  LuaConfigMgr *p_lua_config_mgr; // rcx
  Player *v9; // rax
  uint32_t SceneComp; // eax
  common::milog::MiLogStream *v11; // rax
  LuaConfigMgr *v12; // rcx
  common::milog::MiLogStream *v13; // rax
  std::vector<unsigned int>::size_type v14; // r14
  std::vector<unsigned int>::size_type v15; // r14
  common::milog::MiLogStream *v16; // rax
  std::vector<unsigned int>::const_reference v17; // rdx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  std::vector<unsigned int>::const_reference v21; // rdx
  uint32_t v22; // eax
  common::milog::MiLogStream *v23; // rax
  char v24; // r14
  Player *v25; // rax
  PlayerSceneComp *v26; // rax
  Player *v27; // rax
  bool v28; // r15
  common::milog::MiLogStream *v29; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  Player *v31; // rax
  Vector3 *p_rot; // r15
  Vector3 *p_pos; // r14
  Scene *v34; // rax
  common::milog::MiLogStream *v35; // rax
  PlayerSceneComp *v36; // [rsp+8h] [rbp-1B8h]
  unsigned int val; // [rsp+20h] [rbp-1A0h] BYREF
  int idx; // [rsp+24h] [rbp-19Ch]
  const data::ActivityIslandPartyOverallExcelConfig *overall_config; // [rsp+28h] [rbp-198h]
  const GroupScriptConfig *group_config_ptr; // [rsp+30h] [rbp-190h]
  const PointScriptConfig *point_config_ptr; // [rsp+38h] [rbp-188h]
  std::shared_ptr<Scene> v42; // [rsp+40h] [rbp-180h] BYREF
  common::milog::MiLogStream v43; // [rsp+50h] [rbp-170h] BYREF
  TransferReason p_reason; // [rsp+70h] [rbp-150h] BYREF
  char v45[272]; // [rsp+B0h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v45;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 4 12 scene_id:518 64 4 19 point_config_id:540 80 4 7 uid:548 96 16 19 host_player_ptr:503 1"
                        "28 16 13 world_ptr:510 160 16 13 scene_ptr:519 192 16 14 player_ptr:549";
  *(_QWORD *)(v2 + 16) = IslandPartyActivity::startSettleDisplayFinishedTimer(std::vector<unsigned int>,proto::GalleryStartSource,bool)::{lambda(unsigned long)#2}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234556924;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -219021312;
  v4[536862726] = -202178560;
  common::milog::MiLogStream::create(
    &v43,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/island_party_activity.cpp",
    "operator()",
    502);
  v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
         &v43,
         (const char (*)[25])"[ISLAND_PARTY] uid_vec: ");
  common::milog::MiLogStream::operator<<<unsigned int>(v5, &__closure->__uid_vec);
  common::milog::MiLogStream::~MiLogStream(&v43);
  std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v2 + 96));
  if ( !std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 96), 0LL) )
  {
    v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    Player::getSceneComp(v6);
    PlayerSceneComp::getCurWorld((const PlayerSceneComp *const)(v2 + 128));
    if ( std::operator==<World>((const std::shared_ptr<World> *)(v2 + 128), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v43,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/island_party_activity.cpp",
        "operator()",
        513);
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
        &v43,
        (const char (*)[33])"[ISLAND_PARTY] world_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v43);
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v42);
      v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v42);
      overall_config = ActivityIslandPartyExcelConfigMgr::getOverallConfig(&v7->design_config.txt_config_mgr.activity_island_party_mgr);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v42);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v42);
      p_lua_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v42)->design_config.lua_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&overall_config->settle_transfer_group_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&overall_config->settle_transfer_group_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v2 + 48) = LuaConfigMgr::getSceneIdByGroupId(
                               p_lua_config_mgr,
                               overall_config->settle_transfer_group_id);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v42);
      v9 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      SceneComp = (unsigned int)Player::getSceneComp(v9);
      PlayerSceneComp::findScene((const PlayerSceneComp *const)(v2 + 160), SceneComp);
      if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 160), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v43,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/island_party_activity.cpp",
          "operator()",
          522);
        v11 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                &v43,
                (const char (*)[44])"[ISLAND_PARTY] scene is nullptr, scene_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v43);
      }
      else
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v42);
        v12 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v42)->design_config.lua_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)&overall_config->settle_transfer_group_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&overall_config->settle_transfer_group_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        group_config_ptr = LuaConfigMgr::findGroupScriptConfig(v12, overall_config->settle_transfer_group_id);
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v42);
        if ( group_config_ptr )
        {
          for ( idx = 0; ; ++idx )
          {
            v14 = idx;
            if ( v14 >= std::vector<unsigned int>::size(&__closure->__uid_vec) )
              break;
            v15 = idx;
            if ( v15 >= std::vector<unsigned int>::size(&overall_config->settle_transfer_config_id_list) )
            {
              common::milog::MiLogStream::create(
                &v43,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/island_party_activity.cpp",
                "operator()",
                536);
              v16 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
                      &v43,
                      (const char (*)[61])"[ISLAND_PARTY] config_id_list.size < uid_vec.size, uid_vec: ");
              common::milog::MiLogStream::operator<<<unsigned int>(v16, &__closure->__uid_vec);
              common::milog::MiLogStream::~MiLogStream(&v43);
              break;
            }
            v17 = std::vector<unsigned int>::operator[](&overall_config->settle_transfer_config_id_list, idx);
            if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            *(_DWORD *)(v2 + 64) = *v17;
            point_config_ptr = GroupScriptConfig::findPointConfig(group_config_ptr, *(_DWORD *)(v2 + 64));
            if ( !point_config_ptr )
            {
              common::milog::MiLogStream::create(
                &v43,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/island_party_activity.cpp",
                "operator()",
                544);
              v18 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                      &v43,
                      (const char (*)[50])"[ISLAND_PARTY] point config not found, group_id: ");
              v19 = common::milog::MiLogStream::operator<<<unsigned int>(
                      v18,
                      &overall_config->settle_transfer_config_id_list);
              v20 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                      v19,
                      (const char (*)[14])", config_id: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v20,
                (const unsigned int *)(v2 + 64));
              common::milog::MiLogStream::~MiLogStream(&v43);
              break;
            }
            v21 = std::vector<unsigned int>::operator[](&__closure->__uid_vec, idx);
            if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v21 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            *(_DWORD *)(v2 + 80) = *v21;
            v22 = (unsigned int)std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
            World::findPlayerPtr((World *const)(v2 + 192), v22);
            if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 192), 0LL) )
            {
              common::milog::MiLogStream::create(
                &v43,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/player/activity/island_party_activity.cpp",
                "operator()",
                552);
              v23 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                      &v43,
                      (const char (*)[24])"player not found, uid: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v23,
                (const unsigned int *)(v2 + 80));
              common::milog::MiLogStream::~MiLogStream(&v43);
            }
            else
            {
              v24 = 0;
              v25 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
              v26 = Player::getSceneComp(v25);
              v28 = 1;
              if ( !PlayerSceneComp::isInTransfer(v26) )
              {
                v27 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
                Player::getSceneComp(v27);
                PlayerSceneComp::getCurScene((const PlayerSceneComp *const)&v42);
                v24 = 1;
                if ( !std::operator!=<Scene,Scene>(&v42, (const std::shared_ptr<Scene> *)(v2 + 160)) )
                  v28 = 0;
              }
              if ( v24 )
                std::shared_ptr<Scene>::~shared_ptr(&v42);
              if ( v28 )
              {
                common::milog::MiLogStream::create(
                  &v43,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/player/activity/island_party_activity.cpp",
                  "operator()",
                  559);
                v29 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                        &v43,
                        (const char (*)[49])"[ISLAND_PARTY] player already in transfer, uid: ");
                v30 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
                val = Player::getUid(v30);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, &val);
                common::milog::MiLogStream::~MiLogStream(&v43);
              }
              else
              {
                v31 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
                v36 = Player::getSceneComp(v31);
                memset(&p_reason, 0, sizeof(p_reason));
                TransferReason::TransferReason(&p_reason);
                p_rot = &point_config_ptr->rot;
                p_pos = &point_config_ptr->pos;
                v34 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
                LOBYTE(p_pos) = PlayerSceneComp::jumpToScene(v36, v34, p_pos, p_rot, 0, &p_reason) != 0;
                TransferReason::~TransferReason(&p_reason);
                if ( (_BYTE)p_pos )
                {
                  common::milog::MiLogStream::create(
                    &v43,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/activity/island_party_activity.cpp",
                    "operator()",
                    564);
                  v35 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                          &v43,
                          (const char (*)[26])"jumpToScene failed, uid: ");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v35,
                    (const unsigned int *)(v2 + 80));
                  common::milog::MiLogStream::~MiLogStream(&v43);
                }
              }
            }
            std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 192));
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v43,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/island_party_activity.cpp",
            "operator()",
            528);
          v13 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                  &v43,
                  (const char (*)[50])"[ISLAND_PARTY] group config not found, group_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v13,
            &overall_config->settle_transfer_group_id);
          common::milog::MiLogStream::~MiLogStream(&v43);
        }
      }
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 160));
    }
    std::shared_ptr<World>::~shared_ptr((std::shared_ptr<World> *const)(v2 + 128));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 96));
  if ( v45 == (char *)v2 )
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

// Line 500: range 00000000145508CA-00000000145508F4
void __cdecl IslandPartyActivity::startSettleDisplayFinishedTimer(std::vector<unsigned int>,proto::GalleryStartSource,bool)::{lambda(unsigned long)#2}::~GalleryStartSource(
        IslandPartyActivity::startSettleDisplayFinishedTimer::<lambda(uint64_t)>_0 *const this)
{
  std::vector<unsigned int>::~vector(&this->__uid_vec);
  std::weak_ptr<Player>::~weak_ptr(&this->__host_player_wtr);
};
