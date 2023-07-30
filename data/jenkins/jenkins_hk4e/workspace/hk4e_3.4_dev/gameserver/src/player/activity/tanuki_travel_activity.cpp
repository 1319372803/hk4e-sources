// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/tanuki_travel_activity.cpp

// Line 21: range 0000000018003614-0000000018003713
void __cdecl TanukiTravelLevelData::toClient(
        TanukiTravelLevelData *const this,
        proto::TanukiTravelLevelData *client_tanuki_travel_data)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  proto::TanukiTravelLevelData::set_route_id(client_tanuki_travel_data, this->route_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_open);
  }
  proto::TanukiTravelLevelData::set_is_open(client_tanuki_travel_data, this->is_open);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_finish >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 5) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_finish >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_finish);
  }
  proto::TanukiTravelLevelData::set_is_finish(client_tanuki_travel_data, this->is_finish);
};

// Line 28: range 0000000018003714-0000000018003813
void __cdecl TanukiTravelLevelData::toBin(const TanukiTravelLevelData *const this, proto::TanukiTravelLevelBin *bin)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  proto::TanukiTravelLevelBin::set_route_id(bin, this->route_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_open);
  }
  proto::TanukiTravelLevelBin::set_is_open(bin, this->is_open);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_finish >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 5) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_finish >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_finish);
  }
  proto::TanukiTravelLevelBin::set_is_finish(bin, this->is_finish);
};

// Line 35: range 0000000018003814-000000001800390E
void __cdecl TanukiTravelLevelData::fromBin(TanukiTravelLevelData *const this, const proto::TanukiTravelLevelBin *bin)
{
  uint32_t v2; // ecx
  char v3; // dl
  __int64 v4; // rdx
  bool is_open; // cl
  char v6; // dl
  __int64 v7; // rdx
  bool is_finish; // cl
  char v9; // dl
  __int64 v10; // rdx
  const proto::TanukiTravelLevelBin *bina; // [rsp+0h] [rbp-10h]

  bina = bin;
  v2 = proto::TanukiTravelLevelBin::route_id(bin);
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  LOBYTE(bin) = v3 != 0;
  v4 = (v3 != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7) + 3) >= v3);
  if ( (_BYTE)v4 )
    __asan_report_store4(this, bin, v4);
  this->route_id = v2;
  is_open = proto::TanukiTravelLevelBin::is_open(bina);
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000);
  LOBYTE(bin) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this + 4) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->is_open, bin, v7);
  this->is_open = is_open;
  is_finish = proto::TanukiTravelLevelBin::is_finish(bina);
  v9 = *(_BYTE *)(((unsigned __int64)&this->is_finish >> 3) + 0x7FFF8000);
  LOBYTE(bin) = v9 != 0;
  v10 = (v9 != 0) & (unsigned __int8)((((unsigned __int8)this + 5) & 7) >= v9);
  if ( (_BYTE)v10 )
    __asan_report_store1(&this->is_finish, bin, v10);
  this->is_finish = is_finish;
};

// Line 42: range 0000000018003910-0000000018003C51
int32_t __cdecl TanukiTravelActivity::fromScheduleBin(
        TanukiTravelActivity *const this,
        const proto::ActivityScheduleBin *bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  google::protobuf::RepeatedPtrField<proto::TanukiTravelLevelBin>::const_iterator *p_for_end; // rsi
  unsigned int *v6; // rcx
  TanukiTravelLevelData *v7; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,TanukiTravelLevelData> >,bool> v8; // rax
  common::milog::MiLogStream *v9; // r14
  __int64 v10; // rdx
  char v11; // al
  bool is_content_closed; // cl
  char v13; // dl
  __int64 v14; // rdx
  int32_t result; // eax
  unsigned int val; // [rsp+14h] [rbp-BCh] BYREF
  google::protobuf::RepeatedPtrField<proto::TanukiTravelLevelBin>::const_iterator __for_begin; // [rsp+18h] [rbp-B8h] BYREF
  google::protobuf::RepeatedPtrField<proto::TanukiTravelLevelBin>::const_iterator __for_end; // [rsp+20h] [rbp-B0h] BYREF
  const proto::TanukiTravelScheduleBin *schedule_bin; // [rsp+28h] [rbp-A8h]
  const google::protobuf::RepeatedPtrField<proto::TanukiTravelLevelBin> *__for_range; // [rsp+30h] [rbp-A0h]
  const proto::TanukiTravelLevelBin *level_bin; // [rsp+38h] [rbp-98h]
  common::milog::MiLogStream v22; // [rsp+40h] [rbp-90h] BYREF
  char v23[112]; // [rsp+60h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 13 level_data:47";
  *(_QWORD *)(v2 + 16) = TanukiTravelActivity::fromScheduleBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  schedule_bin = proto::ActivityScheduleBin::tanuki_travel_bin(bin);
  std::map<unsigned int,TanukiTravelLevelData>::clear(&this->level_data_map_);
  __for_range = proto::TanukiTravelScheduleBin::level_bin_list(schedule_bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::TanukiTravelLevelBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::TanukiTravelLevelBin>::end(__for_range).it_;
  while ( 1 )
  {
    p_for_end = &__for_end;
    if ( !google::protobuf::internal::RepeatedPtrIterator<proto::TanukiTravelLevelBin const>::operator!=(
            &__for_begin,
            &__for_end) )
      break;
    level_bin = google::protobuf::internal::RepeatedPtrIterator<proto::TanukiTravelLevelBin const>::operator*(&__for_begin);
    *(_DWORD *)(v2 + 32) = 0;
    *(_BYTE *)(v2 + 36) = 0;
    *(_BYTE *)(v2 + 37) = 0;
    TanukiTravelLevelData::fromBin((TanukiTravelLevelData *const)(v2 + 32), level_bin);
    val = proto::TanukiTravelLevelBin::route_id(level_bin);
    v8 = std::map<unsigned int,TanukiTravelLevelData>::emplace<unsigned int,TanukiTravelLevelData&>(
           &this->level_data_map_,
           &val,
           (TanukiTravelLevelData *)(v2 + 32),
           v6,
           v7);
    if ( !v8.second )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/tanuki_travel_activity.cpp",
        "fromScheduleBin",
        51);
      v9 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
             &v22,
             (const char (*)[43])"[TANUKI_TRAVEL] duplicate level, level_id:");
      val = proto::TanukiTravelLevelBin::route_id(level_bin);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
      common::milog::MiLogStream::~MiLogStream(&v22);
    }
    google::protobuf::internal::RepeatedPtrIterator<proto::TanukiTravelLevelBin const>::operator++(&__for_begin);
  }
  v10 = proto::TanukiTravelScheduleBin::finished_level_index(schedule_bin);
  v11 = *(_BYTE *)(((unsigned __int64)&this->finished_level_index_ >> 3) + 0x7FFF8000);
  if ( v11 != 0 && v11 <= 3 )
  {
    LOBYTE(p_for_end) = v11 != 0;
    __asan_report_store4(&this->finished_level_index_, p_for_end, v10);
  }
  this->finished_level_index_ = v10;
  is_content_closed = proto::TanukiTravelScheduleBin::is_content_closed(schedule_bin);
  v13 = *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000);
  LOBYTE(p_for_end) = v13 != 0;
  v14 = (v13 != 0) & (unsigned __int8)((((unsigned __int8)this - 36) & 7) >= v13);
  if ( (_BYTE)v14 )
    __asan_report_store1(&this->is_content_closed_, p_for_end, v14);
  this->is_content_closed_ = is_content_closed;
  result = 0;
  if ( v23 == (char *)v2 )
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

// Line 60: range 0000000018003C52-0000000018003DC1
int32_t __cdecl TanukiTravelActivity::toScheduleBin(
        const TanukiTravelActivity *const this,
        proto::ActivityScheduleBin *bin)
{
  std::map<unsigned int,TanukiTravelLevelData>::const_iterator __for_begin; // [rsp+10h] [rbp-40h] BYREF
  std::map<unsigned int,TanukiTravelLevelData>::const_iterator __for_end; // [rsp+18h] [rbp-38h] BYREF
  proto::TanukiTravelScheduleBin *schedule_bin; // [rsp+20h] [rbp-30h]
  const std::map<unsigned int,TanukiTravelLevelData> *__for_range; // [rsp+28h] [rbp-28h]
  const std::pair<unsigned int const,TanukiTravelLevelData> *v7; // [rsp+30h] [rbp-20h]
  std::tuple_element<0,const std::pair<unsigned int const,TanukiTravelLevelData> >::type *route_id; // [rsp+38h] [rbp-18h]
  std::tuple_element<1,const std::pair<unsigned int const,TanukiTravelLevelData> >::type *level_data; // [rsp+40h] [rbp-10h]
  proto::TanukiTravelLevelBin *level_bin; // [rsp+48h] [rbp-8h]

  schedule_bin = proto::ActivityScheduleBin::mutable_tanuki_travel_bin(bin);
  __for_range = &this->level_data_map_;
  __for_begin._M_node = std::map<unsigned int,TanukiTravelLevelData>::begin(&this->level_data_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,TanukiTravelLevelData>::end(&this->level_data_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v7 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,TanukiTravelLevelData>>::operator*(&__for_begin);
    route_id = std::get<0ul,unsigned int const,TanukiTravelLevelData>(v7);
    level_data = (std::tuple_element<1,const std::pair<unsigned int const,TanukiTravelLevelData> >::type *)std::get<1ul,unsigned int const,TanukiTravelLevelData>(v7);
    level_bin = proto::TanukiTravelScheduleBin::add_level_bin_list(schedule_bin);
    TanukiTravelLevelData::toBin(level_data, level_bin);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,TanukiTravelLevelData>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->finished_level_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->finished_level_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->finished_level_index_);
  }
  proto::TanukiTravelScheduleBin::set_finished_level_index(schedule_bin, this->finished_level_index_);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_content_closed_);
  }
  proto::TanukiTravelScheduleBin::set_is_content_closed(schedule_bin, this->is_content_closed_);
  return 0;
};

// Line 73: range 0000000018003DC2-000000001800403E
int32_t __cdecl TanukiTravelActivity::toClient(TanukiTravelActivity *const this, proto::ActivityInfo *activity_info)
{
  common::milog::MiLogStream *v2; // rbx
  unsigned int val; // [rsp+1Ch] [rbp-74h] BYREF
  std::map<unsigned int,TanukiTravelLevelData>::iterator __for_begin; // [rsp+20h] [rbp-70h] BYREF
  std::map<unsigned int,TanukiTravelLevelData>::iterator __for_end; // [rsp+28h] [rbp-68h] BYREF
  proto::TanukiTravelActivityDetailInfo *info; // [rsp+30h] [rbp-60h]
  std::map<unsigned int,TanukiTravelLevelData> *__for_range; // [rsp+38h] [rbp-58h]
  std::pair<unsigned int const,TanukiTravelLevelData> *__in; // [rsp+40h] [rbp-50h]
  std::tuple_element<0,std::pair<unsigned int const,TanukiTravelLevelData> >::type *route_id; // [rsp+48h] [rbp-48h]
  std::tuple_element<1,std::pair<unsigned int const,TanukiTravelLevelData> >::type *level_data; // [rsp+50h] [rbp-40h]
  proto::TanukiTravelLevelData *client_level_data; // [rsp+58h] [rbp-38h]
  common::milog::MiLogStream v13; // [rsp+60h] [rbp-30h] BYREF

  if ( BaseActivity::toClient(this, activity_info) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/tanuki_travel_activity.cpp",
      "toClient",
      76);
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
    info = proto::ActivityInfo::mutable_tanuki_travel_activity_info(activity_info);
    __for_range = &this->level_data_map_;
    __for_begin._M_node = std::map<unsigned int,TanukiTravelLevelData>::begin(&this->level_data_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,TanukiTravelLevelData>::end(&this->level_data_map_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      __in = std::_Rb_tree_iterator<std::pair<unsigned int const,TanukiTravelLevelData>>::operator*(&__for_begin);
      route_id = std::get<0ul,unsigned int const,TanukiTravelLevelData>(__in);
      level_data = std::get<1ul,unsigned int const,TanukiTravelLevelData>(__in);
      client_level_data = proto::TanukiTravelActivityDetailInfo::add_tanuki_travel_level_data_list(info);
      TanukiTravelLevelData::toClient(level_data, client_level_data);
      std::_Rb_tree_iterator<std::pair<unsigned int const,TanukiTravelLevelData>>::operator++(&__for_begin);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->finished_level_index_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->finished_level_index_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->finished_level_index_);
    }
    proto::TanukiTravelActivityDetailInfo::set_finished_level_index(info, this->finished_level_index_);
    if ( *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this - 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_content_closed_);
    }
    proto::TanukiTravelActivityDetailInfo::set_is_content_closed(info, this->is_content_closed_);
    return 0;
  }
};

// Line 93: range 0000000018004040-000000001800409D
int32_t __cdecl TanukiTravelActivity::init(TanukiTravelActivity *const this)
{
  if ( BaseActivity::isOpening(this, 0) && !BaseActivity::isSettled(this) )
    TanukiTravelActivity::registerObserver(this);
  return 0;
};

// Line 103: range 000000001800409E-0000000018004547
void __cdecl TanukiTravelActivity::onPreStart(TanukiTravelActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  common::milog::MiLogStream *v4; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v5; // rax
  _DWORD *v6; // rdx
  __int64 v7; // rsi
  common::milog::MiLogStream *v8; // rax
  uint32_t v9; // ecx
  char v10; // dl
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rdx
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-C8h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-C0h] BYREF
  const ActivityTanukiTravelExcelConfigMgr *config_mgr; // [rsp+28h] [rbp-B8h]
  const std::vector<unsigned int> *route_vec_ptr; // [rsp+30h] [rbp-B0h]
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-A8h]
  TanukiTravelLevelData *level_data; // [rsp+40h] [rbp-A0h]
  std::shared_ptr<Config> v23; // [rsp+50h] [rbp-90h] BYREF
  common::milog::MiLogStream v24; // [rsp+60h] [rbp-80h] BYREF
  char v25[96]; // [rsp+80h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 12 route_id:113";
  *(_QWORD *)(v1 + 16) = TanukiTravelActivity::onPreStart;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v23);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v23)->design_config.txt_config_mgr.activity_tanuki_travel_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v23);
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->activity_id_);
  }
  route_vec_ptr = ActivityTanukiTravelExcelConfigMgr::findTanukiTravelRouteIdVecByActivityId(
                    config_mgr,
                    this->activity_id_);
  if ( route_vec_ptr )
  {
    std::map<unsigned int,TanukiTravelLevelData>::clear(&this->level_data_map_);
    __for_range = route_vec_ptr;
    __for_begin._M_current = std::vector<unsigned int>::begin(route_vec_ptr)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(route_vec_ptr)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v5 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
      v6 = v5;
      if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v5);
      }
      *(_DWORD *)(v1 + 32) = *v6;
      level_data = std::map<unsigned int,TanukiTravelLevelData>::operator[](
                     &this->level_data_map_,
                     (const std::map<unsigned int,TanukiTravelLevelData>::key_type *)(v1 + 32));
      v7 = *(unsigned int *)(v1 + 32);
      if ( data::ActivityTanukiTravelExcelConfigMgrBase::findActivityTanukiTravelRouteDataExcelConfig(config_mgr, v7) )
      {
        v9 = *(_DWORD *)(v1 + 32);
        v10 = *(_BYTE *)(((unsigned __int64)level_data >> 3) + 0x7FFF8000);
        LOBYTE(v7) = v10 != 0;
        v11 = (v10 != 0) & (unsigned __int8)((char)(((unsigned __int8)level_data & 7) + 3) >= v10);
        if ( (_BYTE)v11 )
          __asan_report_store4(level_data, v7, v11);
        level_data->route_id = v9;
        v12 = ((_BYTE)level_data + 4) & 7;
        v13 = (*(_BYTE *)(((unsigned __int64)&level_data->is_open >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v12 >= *(_BYTE *)(((unsigned __int64)&level_data->is_open >> 3) + 0x7FFF8000));
        if ( (_BYTE)v13 )
          __asan_report_store1(&level_data->is_open, v12, v13);
        level_data->is_open = 0;
        v14 = ((_BYTE)level_data + 5) & 7;
        v15 = (*(_BYTE *)(((unsigned __int64)&level_data->is_finish >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v14 >= *(_BYTE *)(((unsigned __int64)&level_data->is_finish >> 3) + 0x7FFF8000));
        if ( (_BYTE)v15 )
          __asan_report_store1(&level_data->is_finish, v14, v15);
        level_data->is_finish = 0;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/tanuki_travel_activity.cpp",
          "onPreStart",
          119);
        v8 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
               &v24,
               (const char (*)[52])"[TANUKI_TRAVEL] level_config_ptr is null, route_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v1 + 32));
        common::milog::MiLogStream::~MiLogStream(&v24);
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->finished_level_index_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->finished_level_index_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->finished_level_index_, &__for_end, &this->finished_level_index_);
    }
    this->finished_level_index_ = 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/tanuki_travel_activity.cpp",
      "onPreStart",
      108);
    v4 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
           &v24,
           (const char (*)[58])"[TANUKI_TRAVEL] activity route vec is null, activity_id_:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->activity_id_);
    common::milog::MiLogStream::~MiLogStream(&v24);
  }
  if ( v25 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 131: range 0000000018004548-00000000180045DC
void __cdecl TanukiTravelActivity::onStart(TanukiTravelActivity *const this)
{
  common::milog::MiLogStream v1; // [rsp+10h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v1,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/tanuki_travel_activity.cpp",
    "onStart",
    132);
  common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
    &v1,
    (const char (*)[48])"[TANUKI_TRAVEL] TanukiTravelActivity::onStart()");
  common::milog::MiLogStream::~MiLogStream(&v1);
  TanukiTravelActivity::updateLevelDataMap(this);
  TanukiTravelActivity::registerObserver(this);
};

// Line 138: range 00000000180045DE-000000001800471C
void __cdecl TanukiTravelActivity::onSettle(TanukiTravelActivity *const this)
{
  common::milog::MiLogStream *v1; // rbx
  common::milog::MiLogStream *v2; // rax
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v4; // [rsp+20h] [rbp-30h] BYREF

  TanukiTravelActivity::unregisterObserver(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_content_closed_);
  }
  if ( !this->is_content_closed_ )
  {
    common::milog::MiLogStream::create(
      &v4,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/tanuki_travel_activity.cpp",
      "onSettle",
      143);
    v1 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v4, (const char (*)[5])"uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    v2 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, &val);
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
      v2,
      (const char (*)[30])" is_content_closed_ not false");
    common::milog::MiLogStream::~MiLogStream(&v4);
    TanukiTravelActivity::closeTanukiTravelContent(this);
  }
};

// Line 159: range 000000001800471E-0000000018004795
int32_t __cdecl TanukiTravelActivity::execAction(
        TanukiTravelActivity *const this,
        const data::NewActivityExec *action_exec)
{
  if ( *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&action_exec->type);
  }
  if ( action_exec->type != NEW_ACTIVITY_ACTION_CLOSE_TANUKI_TRAVEL )
    return BaseActivity::execAction(this, action_exec);
  TanukiTravelActivity::closeTanukiTravelContent(this);
  return 0;
};

// Line 175: range 0000000018004796-000000001800483E
void __cdecl TanukiTravelActivity::onClear(TanukiTravelActivity *const this)
{
  __int64 v1; // rsi
  uint32_t *p_finished_level_index; // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  std::map<unsigned int,TanukiTravelLevelData>::clear(&this->level_data_map_);
  p_finished_level_index = &this->finished_level_index_;
  if ( *(_BYTE *)(((unsigned __int64)p_finished_level_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_finished_level_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->finished_level_index_, v1, p_finished_level_index);
  }
  this->finished_level_index_ = 0;
  v3 = ((_BYTE)this - 36) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_content_closed_, v3, v4);
  this->is_content_closed_ = 0;
};

// Line 182: range 0000000018004840-0000000018004C26
void __cdecl TanukiTravelActivity::clearAllQuests(TanukiTravelActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  common::milog::MiLogStream *v4; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v5; // rax
  _DWORD *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  PlayerQuestComp *QuestComp; // rcx
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+10h] [rbp-C0h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+18h] [rbp-B8h] BYREF
  const ActivityTanukiTravelExcelConfigMgr *config_mgr; // [rsp+20h] [rbp-B0h]
  const std::vector<unsigned int> *route_vec_ptr; // [rsp+28h] [rbp-A8h]
  const std::vector<unsigned int> *__for_range; // [rsp+30h] [rbp-A0h]
  const data::ActivityTanukiTravelRouteDataExcelConfig *route_config_ptr; // [rsp+38h] [rbp-98h]
  std::shared_ptr<Config> v15; // [rsp+40h] [rbp-90h] BYREF
  common::milog::MiLogStream v16; // [rsp+50h] [rbp-80h] BYREF
  char v17[96]; // [rsp+70h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 12 route_id:191";
  *(_QWORD *)(v1 + 16) = TanukiTravelActivity::clearAllQuests;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v15);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15)->design_config.txt_config_mgr.activity_tanuki_travel_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v15);
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->activity_id_);
  }
  route_vec_ptr = ActivityTanukiTravelExcelConfigMgr::findTanukiTravelRouteIdVecByActivityId(
                    config_mgr,
                    this->activity_id_);
  if ( route_vec_ptr )
  {
    __for_range = route_vec_ptr;
    __for_begin._M_current = std::vector<unsigned int>::begin(route_vec_ptr)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(route_vec_ptr)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v5 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
      v6 = v5;
      if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v5);
      }
      *(_DWORD *)(v1 + 32) = *v6;
      route_config_ptr = data::ActivityTanukiTravelExcelConfigMgrBase::findActivityTanukiTravelRouteDataExcelConfig(
                           config_mgr,
                           *(_DWORD *)(v1 + 32));
      if ( route_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        QuestComp = Player::getQuestComp(this->player_);
        if ( *(_BYTE *)(((unsigned __int64)&route_config_ptr->quest_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)route_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&route_config_ptr->quest_id >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4(&route_config_ptr->quest_id);
        }
        PlayerQuestComp::cancelParentQuest(QuestComp, route_config_ptr->quest_id, 1);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v16,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/tanuki_travel_activity.cpp",
          "clearAllQuests",
          196);
        v7 = common::milog::MiLogStream::operator<<<char [78],(char *[78])0>(
               &v16,
               (const char (*)[78])"[TANUKI_TRAVEL] findActivityTanukiTravelRouteDataExcelConfig fails, route_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v1 + 32));
        common::milog::MiLogStream::~MiLogStream(&v16);
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/tanuki_travel_activity.cpp",
      "clearAllQuests",
      187);
    v4 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
           &v16,
           (const char (*)[58])"[TANUKI_TRAVEL] activity route vec is null, activity_id_:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->activity_id_);
    common::milog::MiLogStream::~MiLogStream(&v16);
  }
  if ( v17 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 204: range 0000000018004C28-000000001800506D
void __cdecl TanukiTravelActivity::registerObserver(TanukiTravelActivity *const this)
{
  unsigned __int64 p_M_start; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::weak_ptr<TanukiTravelActivity> *EventComp; // [rsp+10h] [rbp-F0h]
  std::weak_ptr<TanukiTravelActivity> *p_this_wtr; // [rsp+20h] [rbp-E0h]
  PlayerEventComp v6; // [rsp+30h] [rbp-D0h] BYREF

  p_M_start = (unsigned __int64)&v6.event_center_.context_.pending_que_.c._M_impl._M_start;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      p_M_start = v2;
  }
  *(_QWORD *)p_M_start = 1102416563LL;
  *(_QWORD *)(p_M_start + 8) = "2 32 16 12 this_ptr:205 64 16 12 this_wtr:211";
  *(_QWORD *)(p_M_start + 16) = TanukiTravelActivity::registerObserver;
  v3 = (_DWORD *)(p_M_start >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  std::enable_shared_from_this<BaseActivity>::shared_from_this((std::enable_shared_from_this<BaseActivity> *const)&v6._M_weak_this._M_refcount);
  std::dynamic_pointer_cast<TanukiTravelActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)(p_M_start + 32));
  std::shared_ptr<BaseActivity>::~shared_ptr((std::shared_ptr<BaseActivity> *const)&v6._M_weak_this._M_refcount);
  if ( std::operator==<TanukiTravelActivity>((const std::shared_ptr<TanukiTravelActivity> *)(p_M_start + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v6.event_center_,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/tanuki_travel_activity.cpp",
      "registerObserver",
      208);
    common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
      (common::milog::MiLogStream *const)&v6.event_center_,
      (const char (*)[64])"[TANUKI_TRAVEL] dynamic cast to TanukiTravelActivity ptr fails.");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v6.event_center_);
  }
  else
  {
    std::weak_ptr<TanukiTravelActivity>::weak_ptr<TanukiTravelActivity,void>(
      (std::weak_ptr<TanukiTravelActivity> *const)(p_M_start + 64),
      (const std::shared_ptr<TanukiTravelActivity> *)(p_M_start + 32));
    if ( std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->finish_quest_obs_wtr_) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      p_this_wtr = (std::weak_ptr<TanukiTravelActivity> *)Player::getEventComp(this->player_);
      std::weak_ptr<TanukiTravelActivity>::weak_ptr(
        (std::weak_ptr<TanukiTravelActivity> *const)&v6._M_weak_this._M_refcount,
        (const std::weak_ptr<TanukiTravelActivity> *)(p_M_start + 64));
      PlayerEventComp::registerObserver<TanukiTravelActivity,FinishParentQuestEvent>(
        &v6,
        p_this_wtr,
        (void (*)(TanukiTravelActivity *, const FinishParentQuestEvent *))&v6._M_weak_this._M_refcount);
      std::weak_ptr<Observer>::operator=(&this->finish_quest_obs_wtr_, (std::weak_ptr<Observer> *)&v6);
      std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v6);
      std::weak_ptr<TanukiTravelActivity>::~weak_ptr((std::weak_ptr<TanukiTravelActivity> *const)&v6._M_weak_this._M_refcount);
    }
    if ( std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->quest_state_change_obs_wtr_) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      EventComp = (std::weak_ptr<TanukiTravelActivity> *)Player::getEventComp(this->player_);
      std::weak_ptr<TanukiTravelActivity>::weak_ptr(
        (std::weak_ptr<TanukiTravelActivity> *const)&v6,
        (const std::weak_ptr<TanukiTravelActivity> *)(p_M_start + 64));
      PlayerEventComp::registerObserver<TanukiTravelActivity,QuestStateChangeEvent>(
        (PlayerEventComp *const)&v6._M_weak_this._M_refcount,
        EventComp,
        (void (*)(TanukiTravelActivity *, const QuestStateChangeEvent *))&v6);
      std::weak_ptr<Observer>::operator=(
        &this->quest_state_change_obs_wtr_,
        (std::weak_ptr<Observer> *)&v6._M_weak_this._M_refcount);
      std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v6._M_weak_this._M_refcount);
      std::weak_ptr<TanukiTravelActivity>::~weak_ptr((std::weak_ptr<TanukiTravelActivity> *const)&v6);
    }
    std::weak_ptr<TanukiTravelActivity>::~weak_ptr((std::weak_ptr<TanukiTravelActivity> *const)(p_M_start + 64));
  }
  std::shared_ptr<TanukiTravelActivity>::~shared_ptr((std::shared_ptr<TanukiTravelActivity> *const)(p_M_start + 32));
  if ( &v6.event_center_.context_.pending_que_.c._M_impl._M_start == (std::_Deque_base<std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> >>::iterator *)p_M_start )
  {
    *(_QWORD *)((p_M_start >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((p_M_start >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)p_M_start = 1172321806LL;
    *(_QWORD *)((p_M_start >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((p_M_start >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 224: range 000000001800506E-000000001800516C
void __cdecl TanukiTravelActivity::unregisterObserver(TanukiTravelActivity *const this)
{
  PlayerEventComp *EventComp; // rax
  PlayerEventComp *v2; // rax

  if ( !std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->finish_quest_obs_wtr_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    EventComp = Player::getEventComp(this->player_);
    PlayerEventComp::unregisterObserver(EventComp, &this->finish_quest_obs_wtr_);
    std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::reset(&this->finish_quest_obs_wtr_);
  }
  if ( !std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->quest_state_change_obs_wtr_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    v2 = Player::getEventComp(this->player_);
    PlayerEventComp::unregisterObserver(v2, &this->quest_state_change_obs_wtr_);
    std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::reset(&this->quest_state_change_obs_wtr_);
  }
};

// Line 238: range 000000001800516E-000000001800590D
void __cdecl TanukiTravelActivity::onFinishParentQuestEvent(
        TanukiTravelActivity *const this,
        const FinishParentQuestEvent *event)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  uint32_t parent_quest_id; // r14d
  ActivityTanukiTravelExcelConfigMgr *p_activity_tanuki_travel_config_mgr; // rcx
  bool v8; // r14
  const ActivityTanukiTravelExcelConfigMgr *p_parent_quest_id; // rdi
  uint32_t v10; // edx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,TanukiTravelLevelData> >::_Self *p_y; // rsi
  std::_Rb_tree_iterator<std::pair<unsigned int const,TanukiTravelLevelData> >::pointer v16; // rdx
  bool *p_is_open; // rax
  common::milog::MiLogStream *v18; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,TanukiTravelLevelData> >::pointer v19; // rdx
  char v20; // cl
  uint32_t v21; // ecx
  char v22; // al
  std::_Rb_tree_iterator<std::pair<unsigned int const,TanukiTravelLevelData> >::_Self __y; // [rsp+18h] [rbp-108h] BYREF
  std::shared_ptr<Config> v25; // [rsp+20h] [rbp-100h] BYREF
  common::milog::MiLogStream v26; // [rsp+30h] [rbp-F0h] BYREF
  char v27[208]; // [rsp+50h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 day_index:254 64 8 8 iter:269 96 24 10 notify:248";
  *(_QWORD *)(v2 + 16) = TanukiTravelActivity::onFinishParentQuestEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  if ( !BaseActivity::isFinished(this) && !BaseActivity::isSettled(this) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->parent_quest_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->parent_quest_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&event->parent_quest_id);
    }
    parent_quest_id = event->parent_quest_id;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v25);
    p_activity_tanuki_travel_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v25)->design_config.txt_config_mgr.activity_tanuki_travel_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->activity_id_);
    }
    v8 = parent_quest_id == ActivityTanukiTravelExcelConfigMgr::findTanukiTravelGuideQuestId(
                              p_activity_tanuki_travel_config_mgr,
                              this->activity_id_);
    std::shared_ptr<Config>::~shared_ptr(&v25);
    if ( v8 )
    {
      proto::TanukiTravelFinishGuideQuestNotify::TanukiTravelFinishGuideQuestNotify((proto::TanukiTravelFinishGuideQuestNotify *const)(v2 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->activity_id_);
      }
      proto::TanukiTravelFinishGuideQuestNotify::set_activity_id(
        (proto::TanukiTravelFinishGuideQuestNotify *const)(v2 + 96),
        this->activity_id_);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 96));
      proto::TanukiTravelFinishGuideQuestNotify::~TanukiTravelFinishGuideQuestNotify((proto::TanukiTravelFinishGuideQuestNotify *const)(v2 + 96));
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v25);
      p_parent_quest_id = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v25)->design_config.txt_config_mgr.activity_tanuki_travel_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&event->parent_quest_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&event->parent_quest_id >> 3) + 0x7FFF8000) <= 3 )
      {
        p_parent_quest_id = (const ActivityTanukiTravelExcelConfigMgr *)&event->parent_quest_id;
        __asan_report_load4(&event->parent_quest_id);
      }
      v10 = event->parent_quest_id;
      if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        p_parent_quest_id = (const ActivityTanukiTravelExcelConfigMgr *)&this->activity_id_;
        __asan_report_load4(&this->activity_id_);
      }
      *(_DWORD *)(v2 + 48) = ActivityTanukiTravelExcelConfigMgr::findTanukiTravelDayIndexByQuestId(
                               p_parent_quest_id,
                               this->activity_id_,
                               v10);
      std::shared_ptr<Config>::~shared_ptr(&v25);
      if ( *(_DWORD *)(v2 + 48) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->finished_level_index_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->finished_level_index_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->finished_level_index_);
        }
        if ( this->finished_level_index_ + 1 == *(_DWORD *)(v2 + 48) )
        {
          *(std::map<unsigned int,TanukiTravelLevelData>::iterator *)(v2 + 64) = std::map<unsigned int,TanukiTravelLevelData>::find(
                                                                                   &this->level_data_map_,
                                                                                   (const std::map<unsigned int,TanukiTravelLevelData>::key_type *)(v2 + 48));
          __y._M_node = std::map<unsigned int,TanukiTravelLevelData>::end(&this->level_data_map_)._M_node;
          p_y = &__y;
          if ( !std::operator==(
                  (const std::_Rb_tree_iterator<std::pair<unsigned int const,TanukiTravelLevelData> >::_Self *)(v2 + 64),
                  &__y) )
          {
            v16 = std::_Rb_tree_iterator<std::pair<unsigned int const,TanukiTravelLevelData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,TanukiTravelLevelData> > *const)(v2 + 64));
            p_is_open = &v16->second.is_open;
            if ( *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) != 0
              && ((unsigned __int8)p_is_open & 7) >= *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) )
            {
              __asan_report_load1(p_is_open);
            }
            if ( !v16->second.is_open )
            {
              common::milog::MiLogStream::create(
                &v26,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/tanuki_travel_activity.cpp",
                "onFinishParentQuestEvent",
                276);
              v18 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                      &v26,
                      (const char (*)[50])"[TANUKI_TRAVEL] day_index is not open, day_index:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v18,
                (const unsigned int *)(v2 + 48));
              common::milog::MiLogStream::~MiLogStream(&v26);
            }
            else
            {
              v19 = std::_Rb_tree_iterator<std::pair<unsigned int const,TanukiTravelLevelData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,TanukiTravelLevelData> > *const)(v2 + 64));
              v20 = *(_BYTE *)(((unsigned __int64)&v19->second.is_finish >> 3) + 0x7FFF8000);
              if ( v20 != 0 && (((unsigned __int8)v19 + 9) & 7) >= v20 )
              {
                LOBYTE(p_y) = v20 != 0;
                __asan_report_store1(&v19->second.is_finish, p_y, v19);
              }
              v19->second.is_finish = 1;
              v21 = *(_DWORD *)(v2 + 48);
              v22 = *(_BYTE *)(((unsigned __int64)&this->finished_level_index_ >> 3) + 0x7FFF8000);
              if ( v22 != 0 && v22 <= 3 )
              {
                LOBYTE(p_y) = v22 != 0;
                __asan_report_store4(&this->finished_level_index_, p_y, &this->finished_level_index_);
              }
              this->finished_level_index_ = v21;
              BaseActivity::notifyClientData(this, 0);
            }
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v26,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/tanuki_travel_activity.cpp",
            "onFinishParentQuestEvent",
            264);
          v12 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
                  &v26,
                  (const char (*)[63])"[TANUKI_TRAVEL] day_index not in order, finished_level_index_:");
          v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v12,
                  &this->finished_level_index_);
          v14 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v13, (const char (*)[13])", day_index:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v2 + 48));
          common::milog::MiLogStream::~MiLogStream(&v26);
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v26,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/tanuki_travel_activity.cpp",
          "onFinishParentQuestEvent",
          257);
        v11 = common::milog::MiLogStream::operator<<<char [67],(char *[67])0>(
                &v26,
                (const char (*)[67])"[TANUKI_TRAVEL] findTanukiTravelDayIndexByQuestId fails, quest_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &event->parent_quest_id);
        common::milog::MiLogStream::~MiLogStream(&v26);
      }
    }
  }
  if ( v27 == (char *)v2 )
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

// Line 287: range 000000001800590E-0000000018005973
void __cdecl TanukiTravelActivity::onLogin(TanukiTravelActivity *const this)
{
  if ( BaseActivity::isOpening(this, 0) && !BaseActivity::isSettled(this) )
  {
    TanukiTravelActivity::updateLevelDataMap(this);
    BaseActivity::notifyClientData(this, 0);
  }
};

// Line 297: range 0000000018005974-00000000180059D9
void __cdecl TanukiTravelActivity::onDailyRefresh(TanukiTravelActivity *const this)
{
  if ( BaseActivity::isOpening(this, 0) && !BaseActivity::isSettled(this) )
  {
    TanukiTravelActivity::updateLevelDataMap(this);
    BaseActivity::notifyClientData(this, 0);
  }
};

// Line 307: range 00000000180059DA-0000000018005C3B
void __cdecl TanukiTravelActivity::updateLevelDataMap(TanukiTravelActivity *const this)
{
  ActivityTanukiTravelExcelConfigMgr *p_activity_tanuki_travel_config_mgr; // rcx
  common::milog::MiLogStream *v2; // rax
  __int64 v3; // rsi
  __int64 v4; // rdx
  uint32_t cur_day_index; // [rsp+14h] [rbp-7Ch]
  std::map<unsigned int,TanukiTravelLevelData>::iterator __for_begin; // [rsp+18h] [rbp-78h] BYREF
  std::map<unsigned int,TanukiTravelLevelData>::iterator __for_end; // [rsp+20h] [rbp-70h] BYREF
  std::map<unsigned int,TanukiTravelLevelData> *__for_range; // [rsp+28h] [rbp-68h]
  std::pair<unsigned int const,TanukiTravelLevelData> *__in; // [rsp+30h] [rbp-60h]
  std::tuple_element<0,std::pair<unsigned int const,TanukiTravelLevelData> >::type *route_id; // [rsp+38h] [rbp-58h]
  std::tuple_element<1,std::pair<unsigned int const,TanukiTravelLevelData> >::type *info; // [rsp+40h] [rbp-50h]
  const data::ActivityTanukiTravelRouteDataExcelConfig *route_config_ptr; // [rsp+48h] [rbp-48h]
  std::shared_ptr<Config> v13; // [rsp+50h] [rbp-40h] BYREF
  common::milog::MiLogStream v14; // [rsp+60h] [rbp-30h] BYREF

  cur_day_index = BaseActivity::getDayIndexAfterStart(this);
  __for_range = &this->level_data_map_;
  __for_begin._M_node = std::map<unsigned int,TanukiTravelLevelData>::begin(&this->level_data_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,TanukiTravelLevelData>::end(&this->level_data_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,TanukiTravelLevelData>>::operator*(&__for_begin);
    route_id = std::get<0ul,unsigned int const,TanukiTravelLevelData>(__in);
    info = std::get<1ul,unsigned int const,TanukiTravelLevelData>(__in);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v13);
    p_activity_tanuki_travel_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13)->design_config.txt_config_mgr.activity_tanuki_travel_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)route_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)route_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)route_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(route_id);
    }
    route_config_ptr = data::ActivityTanukiTravelExcelConfigMgrBase::findActivityTanukiTravelRouteDataExcelConfig(
                         p_activity_tanuki_travel_config_mgr,
                         *route_id);
    std::shared_ptr<Config>::~shared_ptr(&v13);
    if ( route_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&route_config_ptr->open_day_index >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&route_config_ptr->open_day_index >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&route_config_ptr->open_day_index);
      }
      if ( cur_day_index >= route_config_ptr->open_day_index )
      {
        v3 = ((_BYTE)info + 4) & 7;
        v4 = (*(_BYTE *)(((unsigned __int64)&info->is_open >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&info->is_open >> 3) + 0x7FFF8000));
        if ( (_BYTE)v4 )
          __asan_report_store1(&info->is_open, v3, v4);
        info->is_open = 1;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/tanuki_travel_activity.cpp",
        "updateLevelDataMap",
        314);
      v2 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
             &v14,
             (const char (*)[52])"[TANUKI_TRAVEL] level_config_ptr is null, route_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, route_id);
      common::milog::MiLogStream::~MiLogStream(&v14);
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,TanukiTravelLevelData>>::operator++(&__for_begin);
  }
};

// Line 325: range 0000000018005C3C-00000000180062E3
void __cdecl TanukiTravelActivity::onQuestStateChangeEvent(
        TanukiTravelActivity *const this,
        const QuestStateChangeEvent *event)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  PlayerQuestComp *QuestComp; // rcx
  ActivityTanukiTravelExcelConfigMgr *p_activity_tanuki_travel_config_mgr; // rdi
  uint32_t v8; // edx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyTanukiTravelQuestChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyTanukiTravelQuestChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyTanukiTravelQuestChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyTanukiTravelQuestChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyTanukiTravelQuestChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyTanukiTravelQuestChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rcx
  Player *player; // r14
  std::string eventa; // [rsp+0h] [rbp-F0h]
  const QuestStateChangeEvent *eventb; // [rsp+0h] [rbp-F0h]
  TanukiTravelActivity *thisa; // [rsp+8h] [rbp-E8h]
  google::protobuf::uint32 day_index; // [rsp+1Ch] [rbp-D4h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-D0h] BYREF
  std::shared_ptr<google::protobuf::Message> v25; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v26; // [rsp+40h] [rbp-B0h] BYREF
  char v27[144]; // [rsp+60h] [rbp-90h] BYREF

  eventa._M_string_length = (std::string::size_type)this;
  eventa._M_dataplus._M_p = (std::string::pointer)event;
  v2 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 1 10 holder:341 48 4 19 parent_quest_id:332 64 16 11 log_ptr:342";
  *(_QWORD *)(v2 + 16) = TanukiTravelActivity::onQuestStateChangeEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556927;
  v4[536862722] = -202178560;
  if ( BaseActivity::isOpening(this, 0) && !BaseActivity::isSettled(this) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    QuestComp = Player::getQuestComp(this->player_);
    if ( *(_BYTE *)(((unsigned __int64)&event->quest_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->quest_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&event->quest_id);
    }
    *(_DWORD *)(v2 + 48) = PlayerQuestComp::findParentQuestId(QuestComp, event->quest_id);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v25);
    p_activity_tanuki_travel_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v25)->design_config.txt_config_mgr.activity_tanuki_travel_config_mgr;
    v8 = *(_DWORD *)(v2 + 48);
    if ( *(_BYTE *)(((eventa._M_string_length + 32) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((eventa._M_string_length + 32) >> 3) + 0x7FFF8000) <= 3 )
    {
      p_activity_tanuki_travel_config_mgr = (ActivityTanukiTravelExcelConfigMgr *)(eventa._M_string_length + 32);
      __asan_report_load4(eventa._M_string_length + 32);
    }
    eventa._anon_0._M_local_buf[11] = ActivityTanukiTravelExcelConfigMgr::isContainsParentQuestId(
                                        p_activity_tanuki_travel_config_mgr,
                                        *(_DWORD *)(eventa._M_string_length + 32),
                                        v8);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v25);
    if ( eventa._anon_0._M_local_buf[11] != 1 )
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/tanuki_travel_activity.cpp",
        "onQuestStateChangeEvent",
        336);
      v9 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
             &v26,
             (const char (*)[56])"[TANUKI_TRAVEL] not activity parent_quest_id, quest_id:");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &event->quest_id);
      v11 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
              v10,
              (const char (*)[19])", parent_quest_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v26);
    }
    else
    {
      if ( *(_BYTE *)(((eventa._M_string_length + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8(eventa._M_string_length + 24);
      BasicComp = Player::getBasicComp(*(Player *const *)(eventa._M_string_length + 24));
      PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v26, BasicComp);
      StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32), 0xDE4u, eventa);
      std::string::~string(&v26);
      common::tools::perf::make_shared<proto_log::PlayerLogBodyTanukiTravelQuestChange>();
      v13 = std::__shared_ptr_access<proto_log::PlayerLogBodyTanukiTravelQuestChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTanukiTravelQuestChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&thisa->activity_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&thisa->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&thisa->activity_id_);
      }
      proto_log::PlayerLogBodyTanukiTravelQuestChange::set_activity_id(v13, thisa->activity_id_);
      v14 = std::__shared_ptr_access<proto_log::PlayerLogBodyTanukiTravelQuestChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTanukiTravelQuestChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&thisa->schedule_id_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)thisa + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->schedule_id_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&thisa->schedule_id_);
      }
      proto_log::PlayerLogBodyTanukiTravelQuestChange::set_schedule_id(v14, thisa->schedule_id_);
      day_index = BaseActivity::getDayIndexAfterStart(thisa);
      v15 = std::__shared_ptr_access<proto_log::PlayerLogBodyTanukiTravelQuestChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTanukiTravelQuestChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      proto_log::PlayerLogBodyTanukiTravelQuestChange::set_day_index(v15, day_index);
      v16 = std::__shared_ptr_access<proto_log::PlayerLogBodyTanukiTravelQuestChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTanukiTravelQuestChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      proto_log::PlayerLogBodyTanukiTravelQuestChange::set_mission_id(v16, *(_DWORD *)(v2 + 48));
      v17 = std::__shared_ptr_access<proto_log::PlayerLogBodyTanukiTravelQuestChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTanukiTravelQuestChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&eventb->quest_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&eventb->quest_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&eventb->quest_id);
      }
      proto_log::PlayerLogBodyTanukiTravelQuestChange::set_quest_id(v17, eventb->quest_id);
      v18 = std::__shared_ptr_access<proto_log::PlayerLogBodyTanukiTravelQuestChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTanukiTravelQuestChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&eventb->quest_state >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)eventb + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&eventb->quest_state >> 3)
                                                              + 0x7FFF8000) )
      {
        __asan_report_load4(&eventb->quest_state);
      }
      proto_log::PlayerLogBodyTanukiTravelQuestChange::set_quest_status(v18, eventb->quest_state);
      if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&thisa->player_);
      player = thisa->player_;
      std::shared_ptr<google::protobuf::Message>::shared_ptr(&v25, 0LL);
      std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyTanukiTravelQuestChange,void>(
        &p_body_ptr,
        (const std::shared_ptr<proto_log::PlayerLogBodyTanukiTravelQuestChange> *)(v2 + 64));
      Player::printStatLog(player, &p_body_ptr, &v25, 0xEu);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v25);
      std::shared_ptr<proto_log::PlayerLogBodyTanukiTravelQuestChange>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyTanukiTravelQuestChange> *const)(v2 + 64));
      StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32));
    }
  }
  if ( v27 == (char *)v2 )
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

// Line 354: range 00000000180062E4-000000001800650F
void __cdecl TanukiTravelActivity::closeTanukiTravelContent(TanukiTravelActivity *const this)
{
  common::milog::MiLogStream *v1; // rcx
  common::milog::MiLogStream *v2; // rbx
  common::milog::MiLogStream *v3; // rax
  __int64 v4; // rsi
  __int64 v5; // rdx
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v7; // [rsp+20h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v7,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/tanuki_travel_activity.cpp",
    "closeTanukiTravelContent",
    355);
  v1 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
         &v7,
         (const char (*)[34])"closeTanukiTravelContent, player:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  operator<<(v1, this->player_);
  common::milog::MiLogStream::~MiLogStream(&v7);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_content_closed_);
  }
  if ( this->is_content_closed_ )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/tanuki_travel_activity.cpp",
      "closeTanukiTravelContent",
      358);
    v2 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v7, (const char (*)[5])"uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    v3 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
      v3,
      (const char (*)[36])" is_content_closed_ is already true");
    common::milog::MiLogStream::~MiLogStream(&v7);
  }
  else
  {
    v4 = ((_BYTE)this - 36) & 7;
    v5 = (*(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000));
    if ( (_BYTE)v5 )
      __asan_report_store1(&this->is_content_closed_, v4, v5);
    this->is_content_closed_ = 1;
    TanukiTravelActivity::clearAllQuests(this);
    BaseActivity::notifyClientData(this, 0);
  }
};
