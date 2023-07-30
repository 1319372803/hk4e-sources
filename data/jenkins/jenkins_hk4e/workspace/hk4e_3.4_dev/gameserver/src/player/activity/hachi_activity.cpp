// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/hachi_activity.cpp

// Line 30: range 000000001509E896-000000001509E9E5
int32_t __cdecl HachiStageData::fromBin(HachiStageData *const this, const proto::HachiStageBin *stage_bin)
{
  uint32_t v2; // ecx
  bool is_open; // cl
  bool is_finished; // cl
  uint32_t v5; // ecx

  v2 = proto::HachiStageBin::stage_id(stage_bin);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->stage_id = v2;
  is_open = proto::HachiStageBin::is_open(stage_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_open);
  }
  this->is_open = is_open;
  is_finished = proto::HachiStageBin::is_finished(stage_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_finished >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 5) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_finished >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_finished);
  }
  this->is_finished = is_finished;
  v5 = proto::HachiStageBin::dungeon_pass_times(stage_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_pass_times >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_pass_times >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->dungeon_pass_times);
  }
  this->dungeon_pass_times = v5;
  return 0;
};

// Line 39: range 000000001509E9E6-000000001509EB39
int32_t __cdecl HachiStageData::toBin(const HachiStageData *const this, proto::HachiStageBin *stage_bin)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::HachiStageBin::set_stage_id(stage_bin, this->stage_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_open);
  }
  proto::HachiStageBin::set_is_open(stage_bin, this->is_open);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_finished >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 5) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_finished >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_finished);
  }
  proto::HachiStageBin::set_is_finished(stage_bin, this->is_finished);
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_pass_times >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_pass_times >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::HachiStageBin::set_dungeon_pass_times(stage_bin, this->dungeon_pass_times);
  return 0;
};

// Line 48: range 000000001509EB3A-000000001509EC3D
int32_t __cdecl HachiStageData::toClient(const HachiStageData *const this, proto::HachiStageInfo *proto)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::HachiStageInfo::set_stage_id(proto, this->stage_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_open);
  }
  proto::HachiStageInfo::set_is_open(proto, this->is_open);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_finished >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 5) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_finished >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_finished);
  }
  proto::HachiStageInfo::set_is_finished(proto, this->is_finished);
  return 0;
};

// Line 56: range 000000001509EC3E-000000001509EF89
int32_t __cdecl HachiActivity::fromScheduleBin(HachiActivity *const this, const proto::ActivityScheduleBin *bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  unsigned __int64 v5; // rax
  bool is_content_closed; // dl
  uint32_t v7; // ecx
  uint32_t v8; // edx
  int32_t result; // eax
  const proto::HachiScheduleBin *schedule_bin; // [rsp+18h] [rbp-B8h]
  const google::protobuf::Map<unsigned int,proto::HachiStageBin> *__for_range; // [rsp+20h] [rbp-B0h]
  google::protobuf::Map<unsigned int,proto::HachiStageBin>::const_reference p_stage_id; // [rsp+28h] [rbp-A8h]
  google::protobuf::Map<unsigned int,proto::HachiStageBin>::const_iterator __for_begin; // [rsp+30h] [rbp-A0h] BYREF
  google::protobuf::Map<unsigned int,proto::HachiStageBin>::const_iterator __for_end; // [rsp+50h] [rbp-80h] BYREF
  char v15[96]; // [rsp+70h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 12 13 stage_data:60";
  *(_QWORD *)(v2 + 16) = HachiActivity::fromScheduleBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202177536;
  schedule_bin = proto::ActivityScheduleBin::hachi_bin(bin);
  __for_range = proto::HachiScheduleBin::stage_bin_map(schedule_bin);
  google::protobuf::Map<unsigned int,proto::HachiStageBin>::begin(&__for_begin, __for_range);
  google::protobuf::Map<unsigned int,proto::HachiStageBin>::end(&__for_end, __for_range);
  while ( google::protobuf::operator!=(&__for_begin, &__for_end) )
  {
    p_stage_id = google::protobuf::Map<unsigned int,proto::HachiStageBin>::const_iterator::operator*(&__for_begin);
    *(_DWORD *)(v2 + 32) = 0;
    *(_BYTE *)(v2 + 36) = 0;
    *(_BYTE *)(v2 + 37) = 0;
    *(_DWORD *)(v2 + 40) = 0;
    HachiStageData::fromBin((HachiStageData *const)(v2 + 32), &p_stage_id->second);
    v5 = (unsigned __int64)std::map<unsigned int,HachiStageData>::operator[](&this->stage_map_, &p_stage_id->first);
    if ( (char)(v5 & 7) >= *(_BYTE *)((v5 >> 3) + 0x7FFF8000) && *(_BYTE *)((v5 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)(((v5 + 11) >> 3) + 0x7FFF8000) != 0
      && (char)((v5 + 11) & 7) >= *(_BYTE *)(((v5 + 11) >> 3) + 0x7FFF8000) )
    {
      v5 = __asan_report_store_n(v5, 12LL);
    }
    *(_QWORD *)v5 = *(_QWORD *)(v2 + 32);
    *(_DWORD *)(v5 + 8) = *(_DWORD *)(v2 + 40);
    google::protobuf::Map<unsigned int,proto::HachiStageBin>::const_iterator::operator++(&__for_begin);
  }
  is_content_closed = proto::HachiScheduleBin::is_content_closed(schedule_bin);
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_content_closed_);
  this->is_content_closed_ = is_content_closed;
  v7 = proto::HachiScheduleBin::cur_finish_steal_stage_id(schedule_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_finish_steal_stage_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_finish_steal_stage_id_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cur_finish_steal_stage_id_);
  }
  this->cur_finish_steal_stage_id_ = v7;
  v8 = proto::HachiScheduleBin::cur_finish_battle_stage_id(schedule_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_finish_battle_stage_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_finish_battle_stage_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_finish_battle_stage_id_);
  }
  this->cur_finish_battle_stage_id_ = v8;
  result = 0;
  if ( v15 == (char *)v2 )
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

// Line 71: range 000000001509EF8A-000000001509F160
int32_t __cdecl HachiActivity::toScheduleBin(const HachiActivity *const this, proto::ActivityScheduleBin *bin)
{
  std::map<unsigned int,HachiStageData>::const_iterator __for_begin; // [rsp+18h] [rbp-48h] BYREF
  std::map<unsigned int,HachiStageData>::const_iterator __for_end; // [rsp+20h] [rbp-40h] BYREF
  proto::HachiScheduleBin *schedule_bin; // [rsp+28h] [rbp-38h]
  google::protobuf::Map<unsigned int,proto::HachiStageBin> *bin_map; // [rsp+30h] [rbp-30h]
  const std::map<unsigned int,HachiStageData> *__for_range; // [rsp+38h] [rbp-28h]
  const std::pair<unsigned int const,HachiStageData> *v8; // [rsp+40h] [rbp-20h]
  std::tuple_element<0,const std::pair<unsigned int const,HachiStageData> >::type *stage_id; // [rsp+48h] [rbp-18h]
  std::tuple_element<1,const std::pair<unsigned int const,HachiStageData> >::type *stage; // [rsp+50h] [rbp-10h]
  proto::HachiStageBin *stage_bin; // [rsp+58h] [rbp-8h]

  schedule_bin = proto::ActivityScheduleBin::mutable_hachi_bin(bin);
  bin_map = proto::HachiScheduleBin::mutable_stage_bin_map(schedule_bin);
  __for_range = &this->stage_map_;
  __for_begin._M_node = std::map<unsigned int,HachiStageData>::begin(&this->stage_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,HachiStageData>::end(&this->stage_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v8 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,HachiStageData>>::operator*(&__for_begin);
    stage_id = std::get<0ul,unsigned int const,HachiStageData>(v8);
    stage = (std::tuple_element<1,const std::pair<unsigned int const,HachiStageData> >::type *)std::get<1ul,unsigned int const,HachiStageData>(v8);
    stage_bin = google::protobuf::Map<unsigned int,proto::HachiStageBin>::operator[](bin_map, stage_id);
    HachiStageData::toBin(stage, stage_bin);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,HachiStageData>>::operator++(&__for_begin);
  }
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  proto::HachiScheduleBin::set_is_content_closed(schedule_bin, this->is_content_closed_);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_finish_steal_stage_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_finish_steal_stage_id_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::HachiScheduleBin::set_cur_finish_steal_stage_id(schedule_bin, this->cur_finish_steal_stage_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_finish_battle_stage_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_finish_battle_stage_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::HachiScheduleBin::set_cur_finish_battle_stage_id(schedule_bin, this->cur_finish_battle_stage_id_);
  return 0;
};

// Line 86: range 000000001509F162-000000001509F52A
int32_t __cdecl HachiActivity::toClient(HachiActivity *const this, proto::ActivityInfo *activity_info)
{
  common::milog::MiLogStream *v2; // rbx
  ActivityHachiExcelConfigMgr *p_activity_hachi_config_mgr; // rcx
  common::milog::MiLogStream *v5; // rax
  uint32_t open_day; // ecx
  uint32_t BeginTimeByOpenDay; // eax
  unsigned int val; // [rsp+1Ch] [rbp-94h] BYREF
  std::map<unsigned int,HachiStageData>::iterator __for_begin; // [rsp+20h] [rbp-90h] BYREF
  std::map<unsigned int,HachiStageData>::iterator __for_end; // [rsp+28h] [rbp-88h] BYREF
  proto::HachiActivityDetailInfo *client_info; // [rsp+30h] [rbp-80h]
  google::protobuf::Map<unsigned int,proto::HachiStageInfo> *stage_map; // [rsp+38h] [rbp-78h]
  std::map<unsigned int,HachiStageData> *__for_range; // [rsp+40h] [rbp-70h]
  const std::pair<unsigned int const,HachiStageData> *v14; // [rsp+48h] [rbp-68h]
  std::tuple_element<0,const std::pair<unsigned int const,HachiStageData> >::type *stage_id; // [rsp+50h] [rbp-60h]
  std::tuple_element<1,const std::pair<unsigned int const,HachiStageData> >::type *stage; // [rsp+58h] [rbp-58h]
  proto::HachiStageInfo *client_stage_info; // [rsp+60h] [rbp-50h]
  const HachiActivityStageInfo *stage_config_ptr; // [rsp+68h] [rbp-48h]
  std::shared_ptr<Config> v19; // [rsp+70h] [rbp-40h] BYREF
  common::milog::MiLogStream v20; // [rsp+80h] [rbp-30h] BYREF

  if ( BaseActivity::toClient(this, activity_info) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/hachi_activity.cpp",
      "toClient",
      89);
    v2 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v20,
           (const char (*)[43])"[HACHI]BaseActivity::toClient fails, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
    common::milog::MiLogStream::~MiLogStream(&v20);
    return -1;
  }
  else
  {
    client_info = proto::ActivityInfo::mutable_hachi_info(activity_info);
    stage_map = proto::HachiActivityDetailInfo::mutable_stage_map(client_info);
    __for_range = &this->stage_map_;
    __for_begin._M_node = std::map<unsigned int,HachiStageData>::begin(&this->stage_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,HachiStageData>::end(&this->stage_map_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v14 = std::_Rb_tree_iterator<std::pair<unsigned int const,HachiStageData>>::operator*(&__for_begin);
      stage_id = std::get<0ul,unsigned int const,HachiStageData>(v14);
      stage = (std::tuple_element<1,const std::pair<unsigned int const,HachiStageData> >::type *)std::get<1ul,unsigned int const,HachiStageData>(v14);
      client_stage_info = google::protobuf::Map<unsigned int,proto::HachiStageInfo>::operator[](stage_map, stage_id);
      HachiStageData::toClient(stage, client_stage_info);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v19);
      p_activity_hachi_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19)->design_config.txt_config_mgr.activity_hachi_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)stage_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      stage_config_ptr = ActivityHachiExcelConfigMgr::findStageInfoByStageId(p_activity_hachi_config_mgr, *stage_id);
      std::shared_ptr<Config>::~shared_ptr(&v19);
      if ( stage_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&stage_config_ptr->open_day >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&stage_config_ptr->open_day >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        open_day = stage_config_ptr->open_day;
        if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        BeginTimeByOpenDay = BaseActivity::getBeginTimeByOpenDay(this->schedule_id_, open_day);
        proto::HachiStageInfo::set_open_time(client_stage_info, BeginTimeByOpenDay);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v20,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/hachi_activity.cpp",
          "toClient",
          101);
        v5 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
               &v20,
               (const char (*)[44])"[HACHI] stage_config_ptr is null, stage_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, stage_id);
        common::milog::MiLogStream::~MiLogStream(&v20);
      }
      std::_Rb_tree_iterator<std::pair<unsigned int const,HachiStageData>>::operator++(&__for_begin);
    }
    return 0;
  }
};

// Line 111: range 000000001509F52C-000000001509F589
int32_t __cdecl HachiActivity::init(HachiActivity *const this)
{
  if ( BaseActivity::isOpening(this, 0) && !BaseActivity::isSettled(this) )
    HachiActivity::registerObserver(this);
  return 0;
};

// Line 121: range 000000001509F58A-000000001509F970
void __cdecl HachiActivity::onPreStart(HachiActivity *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  unsigned __int64 v4; // rax
  std::unordered_map<unsigned int,HachiActivityStageInfo>::const_iterator __for_begin; // [rsp+10h] [rbp-C0h] BYREF
  std::unordered_map<unsigned int,HachiActivityStageInfo>::const_iterator __for_end; // [rsp+18h] [rbp-B8h] BYREF
  const std::unordered_map<unsigned int,HachiActivityStageInfo> *__for_range; // [rsp+20h] [rbp-B0h]
  const std::pair<unsigned int const,HachiActivityStageInfo> *v8; // [rsp+28h] [rbp-A8h]
  std::tuple_element<0,const std::pair<unsigned int const,HachiActivityStageInfo> >::type *stage_id; // [rsp+30h] [rbp-A0h]
  std::tuple_element<1,const std::pair<unsigned int const,HachiActivityStageInfo> >::type *_; // [rsp+38h] [rbp-98h]
  std::shared_ptr<Config> v11; // [rsp+40h] [rbp-90h] BYREF
  common::milog::MiLogStream v12; // [rsp+50h] [rbp-80h] BYREF
  char v13[96]; // [rsp+70h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 12 14 stage_data:129";
  *(_QWORD *)(v1 + 16) = HachiActivity::onPreStart;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202177536;
  if ( !std::map<unsigned int,HachiStageData>::empty(&this->stage_map_) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/hachi_activity.cpp",
      "onPreStart",
      124);
    common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
      &v12,
      (const char (*)[37])"[HACHI] stage_open_map_ is not empty");
    common::milog::MiLogStream::~MiLogStream(&v12);
    std::map<unsigned int,HachiStageData>::clear(&this->stage_map_);
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v11);
  __for_range = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v11)->design_config.txt_config_mgr.activity_hachi_config_mgr.stage_map;
  std::shared_ptr<Config>::~shared_ptr(&v11);
  __for_begin._M_cur = std::unordered_map<unsigned int,HachiActivityStageInfo>::begin(__for_range)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,HachiActivityStageInfo>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,HachiActivityStageInfo>,false>(
            &__for_begin,
            &__for_end) )
  {
    v8 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,HachiActivityStageInfo>,false,false>::operator*(&__for_begin);
    stage_id = std::get<0ul,unsigned int const,HachiActivityStageInfo>(v8);
    _ = (std::tuple_element<1,const std::pair<unsigned int const,HachiActivityStageInfo> >::type *)std::get<1ul,unsigned int const,HachiActivityStageInfo>(v8);
    *(_DWORD *)(v1 + 32) = 0;
    *(_BYTE *)(v1 + 36) = 0;
    *(_BYTE *)(v1 + 37) = 0;
    *(_DWORD *)(v1 + 40) = 0;
    if ( *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)stage_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v1 + 32) = *stage_id;
    *(_BYTE *)(v1 + 36) = 0;
    *(_BYTE *)(v1 + 37) = 0;
    *(_DWORD *)(v1 + 40) = 0;
    v4 = (unsigned __int64)std::map<unsigned int,HachiStageData>::operator[](&this->stage_map_, stage_id);
    if ( (char)(v4 & 7) >= *(_BYTE *)((v4 >> 3) + 0x7FFF8000) && *(_BYTE *)((v4 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)(((v4 + 11) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 + 11) & 7) >= *(_BYTE *)(((v4 + 11) >> 3) + 0x7FFF8000) )
    {
      v4 = __asan_report_store_n(v4, 12LL);
    }
    *(_QWORD *)v4 = *(_QWORD *)(v1 + 32);
    *(_DWORD *)(v4 + 8) = *(_DWORD *)(v1 + 40);
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,HachiActivityStageInfo>,false,false>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_finish_steal_stage_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_finish_steal_stage_id_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cur_finish_steal_stage_id_);
  }
  this->cur_finish_steal_stage_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_finish_battle_stage_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_finish_battle_stage_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_finish_battle_stage_id_);
  }
  this->cur_finish_battle_stage_id_ = 0;
  if ( v13 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 141: range 000000001509F972-000000001509F9DE
void __cdecl HachiActivity::onLogin(HachiActivity *const this)
{
  if ( BaseActivity::isOpening(this, 0) && !BaseActivity::isSettled(this) )
  {
    BaseActivity::onLogin(this);
    BaseActivity::updateAllConds(this);
    HachiActivity::refreshAllStageFinishQuest(this);
  }
};

// Line 153: range 000000001509F9E0-000000001509FA06
void __cdecl HachiActivity::onStart(HachiActivity *const this)
{
  HachiActivity::registerObserver(this);
  BaseActivity::updateAllConds(this);
};

// Line 159: range 000000001509FA08-000000001509FA81
void __cdecl HachiActivity::onSettle(HachiActivity *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  if ( !this->is_content_closed_ )
    HachiActivity::closeContent(this);
  BaseActivity::delWatchers(this);
  HachiActivity::unregisterObserver(this);
};

// Line 169: range 000000001509FA82-000000001509FAA1
void __cdecl HachiActivity::onDailyRefresh(HachiActivity *const this)
{
  BaseActivity::notifyClientData(this, 0);
};

// Line 174: range 000000001509FAA2-000000001509FB9C
void __cdecl HachiActivity::onClear(HachiActivity *const this)
{
  std::map<unsigned int,HachiStageData>::clear(&this->stage_map_);
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_content_closed_);
  this->is_content_closed_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_finish_steal_stage_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_finish_steal_stage_id_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cur_finish_steal_stage_id_);
  }
  this->cur_finish_steal_stage_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_finish_battle_stage_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_finish_battle_stage_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_finish_battle_stage_id_);
  }
  this->cur_finish_battle_stage_id_ = 0;
  BaseActivity::delWatchers(this);
};

// Line 183: range 000000001509FB9E-000000001509FBFD
void __cdecl HachiActivity::closeContent(HachiActivity *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_content_closed_);
  this->is_content_closed_ = 1;
  BaseActivity::notifyClientData(this, 0);
};

// Line 190: range 000000001509FBFE-000000001509FDA5
void __fastcall HachiActivity::onStageAllChallengeFinish(HachiActivity *const this, uint32_t stage_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  unsigned int val; // [rsp+1Ch] [rbp-84h] BYREF
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-80h] BYREF
  char v10[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 stage_id:189";
  *(_QWORD *)(v2 + 16) = HachiActivity::onStageAllChallengeFinish;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = stage_id;
  common::milog::MiLogStream::create(
    &v9,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/hachi_activity.cpp",
    "onStageAllChallengeFinish",
    191);
  v5 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v9, (const char (*)[11])off_256F5AA0);
  v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
  v7 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
         v6,
         (const char (*)[28])" challenge all finish, uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
  common::milog::MiLogStream::~MiLogStream(&v9);
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

// Line 196: range 000000001509FDA6-00000000150A0856
void __fastcall HachiActivity::onWatcherFinish(HachiActivity *const this, uint32_t watcher_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // r14
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v20; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  bool isStageWatcherFinish; // r14
  common::milog::MiLogStream *v23; // [rsp+8h] [rbp-198h]
  bool v24; // [rsp+8h] [rbp-198h]
  std::allocator<unsigned int> __a; // [rsp+2Fh] [rbp-171h] BYREF
  std::vector<unsigned int>::iterator __for_begin; // [rsp+30h] [rbp-170h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+38h] [rbp-168h] BYREF
  std::_Rb_tree_const_iterator<unsigned int>::_Self __x; // [rsp+40h] [rbp-160h] BYREF
  std::_Rb_tree_const_iterator<unsigned int>::_Self __y; // [rsp+48h] [rbp-158h] BYREF
  const HachiActivityStageInfo *stage_config_ptr; // [rsp+50h] [rbp-150h]
  std::vector<unsigned int> *__for_range; // [rsp+58h] [rbp-148h]
  std::shared_ptr<Config> v32; // [rsp+60h] [rbp-140h] BYREF
  common::milog::MiLogStream v33; // [rsp+70h] [rbp-130h] BYREF
  char v34[272]; // [rsp+90h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 4 12 stage_id:197 64 4 18 cur_watcher_id:237 80 4 14 watcher_id:195 96 24 25 cur_stage_watc"
                        "her_vec:230 160 24 24 finished_watcher_vec:236";
  *(_QWORD *)(v2 + 16) = HachiActivity::onWatcherFinish;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234556924;
  v4[536862723] = -234881024;
  v4[536862724] = -218959118;
  v4[536862725] = -218103808;
  v4[536862726] = -202116109;
  *(_DWORD *)(v2 + 80) = watcher_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v32);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v32);
  *(_DWORD *)(v2 + 48) = ActivityHachiExcelConfigMgr::getStageByWatcherId(
                           &v5->design_config.txt_config_mgr.activity_hachi_config_mgr,
                           *(_DWORD *)(v2 + 80));
  std::shared_ptr<Config>::~shared_ptr(&v32);
  if ( *(_DWORD *)(v2 + 48) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v32);
    v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v32);
    stage_config_ptr = ActivityHachiExcelConfigMgr::findStageInfoByStageId(
                         &v6->design_config.txt_config_mgr.activity_hachi_config_mgr,
                         *(_DWORD *)(v2 + 48));
    std::shared_ptr<Config>::~shared_ptr(&v32);
    if ( stage_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)stage_config_ptr >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)stage_config_ptr >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( stage_config_ptr->stage_type == HACHI_ACTIVITY_STAGE_TYPE_DUNGEON )
      {
        BaseActivity::updateAllConds(this);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v33,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/hachi_activity.cpp",
          "onWatcherFinish",
          214);
        v10 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                &v33,
                (const char (*)[19])"[HACHI]watcher_id:");
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v10,
                (const unsigned int *)(v2 + 80));
        v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])" stage_id:");
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v12,
                (const unsigned int *)(v2 + 48));
        v23 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v13, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        *(_DWORD *)(v2 + 64) = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, (const unsigned int *)(v2 + 64));
        common::milog::MiLogStream::~MiLogStream(&v33);
        if ( *(_BYTE *)(((unsigned __int64)&stage_config_ptr->stealth_watcher >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&stage_config_ptr->stealth_watcher >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        if ( stage_config_ptr->stealth_watcher == *(_DWORD *)(v2 + 80) )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->cur_finish_steal_stage_id_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_finish_steal_stage_id_ >> 3)
                                                                + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          if ( this->cur_finish_steal_stage_id_ < *(_DWORD *)(v2 + 48) )
            this->cur_finish_steal_stage_id_ = *(_DWORD *)(v2 + 48);
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&stage_config_ptr->battle_watcher >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)stage_config_ptr + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&stage_config_ptr->battle_watcher >> 3)
                                                                            + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          if ( stage_config_ptr->battle_watcher == *(_DWORD *)(v2 + 80) )
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->cur_finish_battle_stage_id_ >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->cur_finish_battle_stage_id_ >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            if ( this->cur_finish_battle_stage_id_ < *(_DWORD *)(v2 + 48) )
              this->cur_finish_battle_stage_id_ = *(_DWORD *)(v2 + 48);
          }
        }
        BaseActivity::updateAllConds(this);
        std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 96));
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v32);
        v14 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v32);
        v24 = ActivityHachiExcelConfigMgr::getStageWatcherVec(
                &v14->design_config.txt_config_mgr.activity_hachi_config_mgr,
                *(_DWORD *)(v2 + 48),
                (std::vector<unsigned int> *)(v2 + 96)) != 0;
        std::shared_ptr<Config>::~shared_ptr(&v32);
        if ( v24 )
        {
          common::milog::MiLogStream::create(
            &v33,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/hachi_activity.cpp",
            "onWatcherFinish",
            233);
          v15 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                  &v33,
                  (const char (*)[19])"[HACHI]watcher_id:");
          v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v15,
                  (const unsigned int *)(v2 + 80));
          v17 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v16, (const char (*)[11])" stage_id:");
          v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v17,
                  (const unsigned int *)(v2 + 48));
          v19 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                  v18,
                  (const char (*)[29])" not find watcher list, uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          *(_DWORD *)(v2 + 64) = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v2 + 64));
          common::milog::MiLogStream::~MiLogStream(&v33);
        }
        else
        {
          *(_DWORD *)(v2 + 64) = *(_DWORD *)(v2 + 80);
          std::allocator<unsigned int>::allocator(&__a);
          std::vector<unsigned int>::vector(
            (std::vector<unsigned int> *const)(v2 + 160),
            (std::initializer_list<unsigned int>)__PAIR128__(1LL, v2 + 64),
            &__a);
          std::allocator<unsigned int>::~allocator(&__a);
          __for_range = (std::vector<unsigned int> *)(v2 + 96);
          __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 96))._M_current;
          __for_end._M_current = std::vector<unsigned int>::end(__for_range)._M_current;
          while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
          {
            v20 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
            if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            *(_DWORD *)(v2 + 64) = *v20;
            if ( *(_DWORD *)(v2 + 64) )
            {
              if ( *(_DWORD *)(v2 + 64) != *(_DWORD *)(v2 + 80) )
              {
                __y._M_node = std::set<unsigned int>::end(&this->finished_watcher_id_set_)._M_node;
                __x._M_node = std::set<unsigned int>::find(
                                &this->finished_watcher_id_set_,
                                (const std::set<unsigned int>::key_type *)(v2 + 64))._M_node;
                if ( std::operator!=(&__x, &__y) )
                  std::vector<unsigned int>::push_back(
                    (std::vector<unsigned int> *const)(v2 + 160),
                    (const std::vector<unsigned int>::value_type *)(v2 + 64));
              }
            }
            __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
          }
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v32);
          v21 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v32);
          isStageWatcherFinish = ActivityHachiExcelConfigMgr::isStageWatcherFinish(
                                   &v21->design_config.txt_config_mgr.activity_hachi_config_mgr,
                                   *(_DWORD *)(v2 + 48),
                                   (const std::vector<unsigned int> *)(v2 + 160));
          std::shared_ptr<Config>::~shared_ptr(&v32);
          if ( isStageWatcherFinish )
            HachiActivity::onStageAllChallengeFinish(this, *(_DWORD *)(v2 + 48));
          std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 160));
        }
        std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 96));
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/hachi_activity.cpp",
        "onWatcherFinish",
        205);
      v7 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
             &v33,
             (const char (*)[58])"[HACHI] HachiActivityStageInfo config not find, stage_id:");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
      v9 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v8, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      *(_DWORD *)(v2 + 64) = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 64));
      common::milog::MiLogStream::~MiLogStream(&v33);
    }
  }
  if ( v34 == (char *)v2 )
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

// Line 256: range 00000000150A0858-00000000150A0C04
void __cdecl HachiActivity::registerObserver(HachiActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::weak_ptr<HachiActivity> *EventComp; // [rsp+10h] [rbp-D0h]
  std::weak_ptr<HachiActivity> *p_this_wtr; // [rsp+20h] [rbp-C0h]
  std::weak_ptr<Observer> __r; // [rsp+30h] [rbp-B0h] BYREF
  std::enable_shared_from_this<BaseActivity> v7; // [rsp+40h] [rbp-A0h] BYREF
  char v8[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 12 this_ptr:257 64 16 12 this_wtr:258";
  *(_QWORD *)(v1 + 16) = HachiActivity::registerObserver;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  std::enable_shared_from_this<BaseActivity>::shared_from_this(&v7);
  std::dynamic_pointer_cast<HachiActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)(v1 + 32));
  std::shared_ptr<BaseActivity>::~shared_ptr((std::shared_ptr<BaseActivity> *const)&v7);
  std::weak_ptr<HachiActivity>::weak_ptr<HachiActivity,void>(
    (std::weak_ptr<HachiActivity> *const)(v1 + 64),
    (const std::shared_ptr<HachiActivity> *)(v1 + 32));
  if ( std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->dungeon_finish_wtr_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    p_this_wtr = (std::weak_ptr<HachiActivity> *)Player::getEventComp(this->player_);
    std::weak_ptr<HachiActivity>::weak_ptr(
      (std::weak_ptr<HachiActivity> *const)&v7,
      (const std::weak_ptr<HachiActivity> *)(v1 + 64));
    PlayerEventComp::registerObserver<HachiActivity,FinishDungeonEvent>(
      (PlayerEventComp *const)&__r,
      p_this_wtr,
      (void (*)(HachiActivity *, const FinishDungeonEvent *))&v7);
    std::weak_ptr<Observer>::operator=(&this->dungeon_finish_wtr_, &__r);
    std::weak_ptr<Observer>::~weak_ptr(&__r);
    std::weak_ptr<HachiActivity>::~weak_ptr((std::weak_ptr<HachiActivity> *const)&v7);
  }
  if ( std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->finish_quest_obs_wtr_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    EventComp = (std::weak_ptr<HachiActivity> *)Player::getEventComp(this->player_);
    std::weak_ptr<HachiActivity>::weak_ptr(
      (std::weak_ptr<HachiActivity> *const)&__r,
      (const std::weak_ptr<HachiActivity> *)(v1 + 64));
    PlayerEventComp::registerObserver<HachiActivity,FinishQuestEvent>(
      (PlayerEventComp *const)&v7,
      EventComp,
      (void (*)(HachiActivity *, const FinishQuestEvent *))&__r);
    std::weak_ptr<Observer>::operator=(&this->finish_quest_obs_wtr_, (std::weak_ptr<Observer> *)&v7);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v7);
    std::weak_ptr<HachiActivity>::~weak_ptr((std::weak_ptr<HachiActivity> *const)&__r);
  }
  std::weak_ptr<HachiActivity>::~weak_ptr((std::weak_ptr<HachiActivity> *const)(v1 + 64));
  std::shared_ptr<HachiActivity>::~shared_ptr((std::shared_ptr<HachiActivity> *const)(v1 + 32));
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

// Line 270: range 00000000150A0C06-00000000150A0D04
void __cdecl HachiActivity::unregisterObserver(HachiActivity *const this)
{
  PlayerEventComp *EventComp; // rax
  PlayerEventComp *v2; // rax

  if ( !std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->dungeon_finish_wtr_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    EventComp = Player::getEventComp(this->player_);
    PlayerEventComp::unregisterObserver(EventComp, &this->dungeon_finish_wtr_);
    std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::reset(&this->dungeon_finish_wtr_);
  }
  if ( !std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->finish_quest_obs_wtr_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v2 = Player::getEventComp(this->player_);
    PlayerEventComp::unregisterObserver(v2, &this->finish_quest_obs_wtr_);
    std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::reset(&this->finish_quest_obs_wtr_);
  }
};

// Line 284: range 00000000150A0D06-00000000150A1148
void __cdecl HachiActivity::onFinishQuestEvent(HachiActivity *const this, const FinishQuestEvent *event)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r12
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r12
  bool *p_is_open; // rax
  unsigned int val; // [rsp+14h] [rbp-CCh] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,HachiStageData> >::_Self __x; // [rsp+18h] [rbp-C8h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,HachiStageData> >::_Self __y; // [rsp+20h] [rbp-C0h] BYREF
  const HachiStageData *stage_info; // [rsp+28h] [rbp-B8h]
  std::shared_ptr<Config> v18; // [rsp+30h] [rbp-B0h] BYREF
  common::milog::MiLogStream v19; // [rsp+40h] [rbp-A0h] BYREF
  char v20[128]; // [rsp+60h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 23 cur_finish_quest_id:285 64 4 12 stage_id:286";
  *(_QWORD *)(v2 + 16) = HachiActivity::onFinishQuestEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&event->quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  *(_DWORD *)(v2 + 48) = event->quest_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v18);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v18);
  *(_DWORD *)(v2 + 64) = ActivityHachiExcelConfigMgr::getStageByStageFinishQuestId(
                           &v5->design_config.txt_config_mgr.activity_hachi_config_mgr,
                           *(_DWORD *)(v2 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v18);
  if ( *(_DWORD *)(v2 + 64) )
  {
    __y._M_node = std::map<unsigned int,HachiStageData>::end(&this->stage_map_)._M_node;
    __x._M_node = std::map<unsigned int,HachiStageData>::find(
                    &this->stage_map_,
                    (const std::map<unsigned int,HachiStageData>::key_type *)(v2 + 64))._M_node;
    if ( std::operator==(&__x, &__y) )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/hachi_activity.cpp",
        "onFinishQuestEvent",
        293);
      v6 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
             &v19,
             (const char (*)[18])"[HACHI] quest_id:");
      v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 48));
      v8 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
             v7,
             (const char (*)[23])" find config stage_id:");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 64));
      v10 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
              v9,
              (const char (*)[30])" not find in stage_map_ size:");
      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,HachiStageData> >::_Base_ptr)std::map<unsigned int,HachiStageData>::size(&this->stage_map_);
      v11 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v10,
              (const unsigned __int64 *)&__y);
      v12 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v11, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v19);
    }
    else
    {
      stage_info = std::map<unsigned int,HachiStageData>::operator[](
                     &this->stage_map_,
                     (const std::map<unsigned int,HachiStageData>::key_type *)(v2 + 64));
      p_is_open = &stage_info->is_open;
      if ( *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)p_is_open & 7) >= *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(p_is_open);
      }
      if ( stage_info->is_open )
      {
        if ( *(_BYTE *)(((unsigned __int64)&stage_info->is_finished >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)stage_info + 5) & 7) >= *(_BYTE *)(((unsigned __int64)&stage_info->is_finished >> 3)
                                                                 + 0x7FFF8000) )
        {
          __asan_report_load1(&stage_info->is_finished);
        }
        if ( !stage_info->is_finished )
          HachiActivity::refreshCurStageFinishQuest(this, *(_DWORD *)(v2 + 64));
      }
      BaseActivity::updateAllConds(this);
    }
  }
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
};

// Line 305: range 00000000150A114A-00000000150A16E9
void __cdecl HachiActivity::onFinishDungeonEvent(HachiActivity *const this, const FinishDungeonEvent *event)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rbx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  std::map<unsigned int,HachiStageData>::mapped_type *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  std::map<unsigned int,HachiStageData>::mapped_type *v16; // rax
  common::milog::MiLogStream *v17; // rax
  unsigned int val; // [rsp+1Ch] [rbp-C4h] BYREF
  std::shared_ptr<Config> v19; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v20; // [rsp+30h] [rbp-B0h] BYREF
  char v21[144]; // [rsp+50h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 18 cur_dungeon_id:306 64 4 20 dungeon_stage_id:311";
  *(_QWORD *)(v2 + 16) = HachiActivity::onFinishDungeonEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v19);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19);
  *(_DWORD *)(v2 + 48) = ActivityHachiExcelConfigMgr::getDungeonId(&v5->design_config.txt_config_mgr.activity_hachi_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v19);
  if ( *(_DWORD *)(v2 + 48) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->dungeon_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( event->dungeon_id == *(_DWORD *)(v2 + 48) )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v19);
      v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19);
      *(_DWORD *)(v2 + 64) = ActivityHachiExcelConfigMgr::getDungeonStageId(&v6->design_config.txt_config_mgr.activity_hachi_config_mgr);
      std::shared_ptr<Config>::~shared_ptr(&v19);
      if ( !HachiActivity::isStageOpen(this, *(_DWORD *)(v2 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v20,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/hachi_activity.cpp",
          "onFinishDungeonEvent",
          314);
        v7 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
               &v20,
               (const char (*)[48])"[HACHI] cur dungeon not open, dungeon_stage_id:");
        v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 64));
        v9 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v8, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
      }
      else if ( std::map<unsigned int,HachiStageData>::count(
                  &this->stage_map_,
                  (const std::map<unsigned int,HachiStageData>::key_type *)(v2 + 64)) )
      {
        v12 = std::map<unsigned int,HachiStageData>::operator[](
                &this->stage_map_,
                (const std::map<unsigned int,HachiStageData>::key_type *)(v2 + 64));
        if ( *(_BYTE *)(((unsigned __int64)&v12->dungeon_pass_times >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)v12 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v12->dungeon_pass_times >> 3)
                                                            + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        ++v12->dungeon_pass_times;
        BaseActivity::updateAllConds(this);
        common::milog::MiLogStream::create(
          &v20,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/hachi_activity.cpp",
          "onFinishDungeonEvent",
          324);
        v13 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                &v20,
                (const char (*)[22])"[HACHI] pass dungeon:");
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v13,
                (const unsigned int *)(v2 + 48));
        v15 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v14, (const char (*)[13])" pass times:");
        v16 = std::map<unsigned int,HachiStageData>::operator[](
                &this->stage_map_,
                (const std::map<unsigned int,HachiStageData>::key_type *)(v2 + 64));
        v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &v16->dungeon_pass_times);
        v9 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v17, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
      }
      else
      {
        common::milog::MiLogStream::create(
          &v20,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/hachi_activity.cpp",
          "onFinishDungeonEvent",
          319);
        v10 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                &v20,
                (const char (*)[36])"[HACHI] not valid dungeon_stage_id:");
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v10,
                (const unsigned int *)(v2 + 64));
        v9 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v11, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
      }
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
      common::milog::MiLogStream::~MiLogStream(&v20);
    }
  }
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
};

// Line 330: range 00000000150A16EA-00000000150A1BAE
bool __cdecl HachiActivity::checkCondIsMeet(HachiActivity *const this, const data::NewActivityCond *cond)
{
  data::NewActivityCondType type; // eax
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rbx
  uint32_t *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rbx
  std::vector<int>::const_reference v11; // rdx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rbx
  std::vector<int>::const_reference v15; // rdx
  uint32_t stage_id_1; // [rsp+1Ch] [rbp-44h]
  uint32_t stage_id_0; // [rsp+20h] [rbp-40h]
  unsigned __int64 val; // [rsp+28h] [rbp-38h] BYREF
  common::milog::MiLogStream v19; // [rsp+30h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  type = cond->type;
  if ( type == NEW_ACTIVITY_COND_HACHI_FINISH_BATTLE_STAGE_EQUAL )
  {
    if ( std::vector<int>::size(&cond->param) )
    {
      v15 = std::vector<int>::operator[](&cond->param, 0LL);
      if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      stage_id_1 = *v15;
      if ( *(_BYTE *)(((unsigned __int64)&this->cur_finish_battle_stage_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->cur_finish_battle_stage_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      return stage_id_1 == this->cur_finish_battle_stage_id_;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/hachi_activity.cpp",
        "checkCondIsMeet",
        357);
      v12 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
              &v19,
              (const char (*)[19])"[HACHI]cond_type: ");
      v13 = common::milog::MiLogStream::operator<<<data::NewActivityCondType,(data::NewActivityCondType*)0>(
              v12,
              &cond->type);
      v14 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              v13,
              (const char (*)[21])" param num invalid: ");
      val = std::vector<int>::size(&cond->param);
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v14, &val);
      common::milog::MiLogStream::~MiLogStream(&v19);
      return 0;
    }
  }
  else
  {
    if ( type > NEW_ACTIVITY_COND_HACHI_FINISH_BATTLE_STAGE_EQUAL )
      return BaseActivity::checkCondIsMeet(this, cond);
    if ( type == NEW_ACTIVITY_COND_FINISH_HACHI_STAGE )
    {
      if ( std::vector<int>::size(&cond->param) )
      {
        v7 = (uint32_t *)std::vector<int>::operator[](&cond->param, 0LL);
        if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        return HachiActivity::isStageFinished(this, *v7);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v19,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/hachi_activity.cpp",
          "checkCondIsMeet",
          337);
        v3 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
               &v19,
               (const char (*)[19])"[HACHI]cond_type: ");
        v4 = common::milog::MiLogStream::operator<<<data::NewActivityCondType,(data::NewActivityCondType*)0>(
               v3,
               &cond->type);
        v5 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
               v4,
               (const char (*)[21])" param num invalid: ");
        val = std::vector<int>::size(&cond->param);
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v5, &val);
        common::milog::MiLogStream::~MiLogStream(&v19);
        return 0;
      }
    }
    else
    {
      if ( type != NEW_ACTIVITY_COND_HACHI_FINISH_STEALTH_STAGE_EQUAL )
        return BaseActivity::checkCondIsMeet(this, cond);
      if ( std::vector<int>::size(&cond->param) )
      {
        v11 = std::vector<int>::operator[](&cond->param, 0LL);
        if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        stage_id_0 = *v11;
        if ( *(_BYTE *)(((unsigned __int64)&this->cur_finish_steal_stage_id_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_finish_steal_stage_id_ >> 3)
                                                              + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        return stage_id_0 == this->cur_finish_steal_stage_id_;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v19,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/hachi_activity.cpp",
          "checkCondIsMeet",
          347);
        v8 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
               &v19,
               (const char (*)[19])"[HACHI]cond_type: ");
        v9 = common::milog::MiLogStream::operator<<<data::NewActivityCondType,(data::NewActivityCondType*)0>(
               v8,
               &cond->type);
        v10 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                v9,
                (const char (*)[21])" param num invalid: ");
        val = std::vector<int>::size(&cond->param);
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v10, &val);
        common::milog::MiLogStream::~MiLogStream(&v19);
        return 0;
      }
    }
  }
};

// Line 371: range 00000000150A1BB0-00000000150A1FA7
int32_t __cdecl HachiActivity::execAction(HachiActivity *const this, const data::NewActivityExec *action_exec)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // r12
  common::milog::MiLogStream *v6; // rax
  int32_t result; // eax
  const std::string *v8; // rax
  common::milog::MiLogStream *v9; // r12
  const std::string *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r12
  unsigned int Uid; // [rsp+14h] [rbp-8Ch] BYREF
  unsigned __int64 val; // [rsp+18h] [rbp-88h] BYREF
  common::milog::MiLogStream v17; // [rsp+20h] [rbp-80h] BYREF
  char v18[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 stage_id:381";
  *(_QWORD *)(v2 + 16) = HachiActivity::execAction;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( action_exec->type == NEW_ACTIVITY_ACTION_OPEN_HACHI_STAGE )
  {
    if ( std::vector<std::string>::size(&action_exec->param) )
    {
      *(_DWORD *)(v2 + 32) = 0;
      v8 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
      if ( common::tools::StringUtils::strToNum<unsigned int>(v8, (unsigned int *)(v2 + 32), 1) )
      {
        common::milog::MiLogStream::create(
          &v17,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/hachi_activity.cpp",
          "execAction",
          384);
        v9 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
               &v17,
               (const char (*)[18])"[HACHI] strToNum ");
        v10 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
        v11 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, v10);
        common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v11, (const char (*)[8])" failed");
        common::milog::MiLogStream::~MiLogStream(&v17);
        result = -1;
      }
      else
      {
        if ( !HachiActivity::isStageOpen(this, *(_DWORD *)(v2 + 32)) )
        {
          HachiActivity::openStage(this, *(_DWORD *)(v2 + 32));
        }
        else
        {
          common::milog::MiLogStream::create(
            &v17,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/hachi_activity.cpp",
            "execAction",
            393);
          v12 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                  &v17,
                  (const char (*)[48])"[HACHI]execAction stage is already open, stage:");
          v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v12,
                  (const unsigned int *)(v2 + 32));
          v14 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v13, (const char (*)[7])", uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          Uid = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &Uid);
          common::milog::MiLogStream::~MiLogStream(&v17);
        }
        result = 0;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/hachi_activity.cpp",
        "execAction",
        378);
      v5 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             &v17,
             (const char (*)[27])"[HACHI] action param size ");
      val = std::vector<std::string>::size(&action_exec->param);
      v6 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v5, &val);
      common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v6, (const char (*)[12])off_256E81C0);
      common::milog::MiLogStream::~MiLogStream(&v17);
      result = -1;
    }
  }
  else
  {
    result = BaseActivity::execAction(this, action_exec);
  }
  if ( v18 == (char *)v2 )
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

// Line 404: range 00000000150A1FA8-00000000150A2138
_BOOL8 __fastcall HachiActivity::isStageFinished(const HachiActivity *const this, uint32_t stage_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  _BOOL8 result; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,HachiStageData> >::pointer v6; // rdx
  bool *p_is_finished; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,HachiStageData> >::_Self __y; // [rsp+18h] [rbp-88h] BYREF
  char v9[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 stage_id:403 64 8 8 iter:405";
  *(_QWORD *)(v2 + 16) = HachiActivity::isStageFinished;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = stage_id;
  *(std::map<unsigned int,HachiStageData>::const_iterator *)(v2 + 64) = std::map<unsigned int,HachiStageData>::find(
                                                                          &this->stage_map_,
                                                                          (const std::map<unsigned int,HachiStageData>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,HachiStageData>::end(&this->stage_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,HachiStageData> >::_Self *)(v2 + 64),
         &__y) )
  {
    result = 0LL;
  }
  else
  {
    v6 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,HachiStageData>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,HachiStageData> > *const)(v2 + 64));
    p_is_finished = &v6->second.is_finished;
    if ( *(_BYTE *)(((unsigned __int64)p_is_finished >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_finished & 7) >= *(_BYTE *)(((unsigned __int64)p_is_finished >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(p_is_finished);
    }
    result = v6->second.is_finished;
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

// Line 414: range 00000000150A213A-00000000150A22CA
_BOOL8 __fastcall HachiActivity::isStageOpen(const HachiActivity *const this, uint32_t stage_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  _BOOL8 result; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,HachiStageData> >::pointer v6; // rdx
  bool *p_is_open; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,HachiStageData> >::_Self __y; // [rsp+18h] [rbp-88h] BYREF
  char v9[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 stage_id:413 64 8 8 iter:415";
  *(_QWORD *)(v2 + 16) = HachiActivity::isStageOpen;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = stage_id;
  *(std::map<unsigned int,HachiStageData>::const_iterator *)(v2 + 64) = std::map<unsigned int,HachiStageData>::find(
                                                                          &this->stage_map_,
                                                                          (const std::map<unsigned int,HachiStageData>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,HachiStageData>::end(&this->stage_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,HachiStageData> >::_Self *)(v2 + 64),
         &__y) )
  {
    result = 0LL;
  }
  else
  {
    v6 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,HachiStageData>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,HachiStageData> > *const)(v2 + 64));
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

// Line 424: range 00000000150A22CC-00000000150A253C
__int64 __fastcall HachiActivity::openStage(HachiActivity *const this, uint32_t stage_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  __int64 result; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  bool *p_is_open; // rax
  unsigned int val; // [rsp+14h] [rbp-9Ch] BYREF
  HachiStageData *stage; // [rsp+18h] [rbp-98h]
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
  *(_QWORD *)(v2 + 8) = "1 32 4 12 stage_id:423";
  *(_QWORD *)(v2 + 16) = HachiActivity::openStage;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = stage_id;
  if ( HachiActivity::isStageOpen(this, *(_DWORD *)(v2 + 32)) )
  {
    result = 0xFFFFFFFFLL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/hachi_activity.cpp",
      "openStage",
      429);
    v6 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           &v12,
           (const char (*)[28])"[HACHI] openStage stage_id:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
    v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v7, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream(&v12);
    stage = std::map<unsigned int,HachiStageData>::operator[](
              &this->stage_map_,
              (const std::map<unsigned int,HachiStageData>::key_type *)(v2 + 32));
    p_is_open = &stage->is_open;
    if ( *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_open & 7) >= *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(p_is_open);
    }
    stage->is_open = 1;
    BaseActivity::updateAllConds(this);
    BaseActivity::notifyClientData(this, 0);
    result = 0LL;
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

// Line 438: range 00000000150A253E-00000000150A29E1
__int64 __fastcall HachiActivity::finishStage(HachiActivity *const this, uint32_t stage_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r12
  __int64 result; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  bool *p_is_finished; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r12
  unsigned int val; // [rsp+14h] [rbp-9Ch] BYREF
  HachiStageData *stage; // [rsp+18h] [rbp-98h]
  common::milog::MiLogStream v18; // [rsp+20h] [rbp-90h] BYREF
  char v19[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 stage_id:437";
  *(_QWORD *)(v2 + 16) = HachiActivity::finishStage;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = stage_id;
  if ( !HachiActivity::isStageOpen(this, *(_DWORD *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/hachi_activity.cpp",
      "finishStage",
      441);
    v5 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v18,
           (const char (*)[30])"[HACHI] finishStage stage_id:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v6, (const char (*)[16])" not open. uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v18);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/hachi_activity.cpp",
      "finishStage",
      444);
    v9 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v18,
           (const char (*)[30])"[HACHI] finishStage stage_id:");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 32));
    v11 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v10, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
    common::milog::MiLogStream::~MiLogStream(&v18);
    stage = std::map<unsigned int,HachiStageData>::operator[](
              &this->stage_map_,
              (const std::map<unsigned int,HachiStageData>::key_type *)(v2 + 32));
    p_is_finished = &stage->is_finished;
    if ( *(_BYTE *)(((unsigned __int64)p_is_finished >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_finished & 7) >= *(_BYTE *)(((unsigned __int64)p_is_finished >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(p_is_finished);
    }
    if ( stage->is_finished )
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/hachi_activity.cpp",
        "finishStage",
        448);
      v13 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
              &v18,
              (const char (*)[30])"[HACHI] finishStage stage_id:");
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 32));
      v15 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
              v14,
              (const char (*)[20])" has finished. uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
      common::milog::MiLogStream::~MiLogStream(&v18);
      result = 0xFFFFFFFFLL;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&stage->is_finished >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)stage + 5) & 7) >= *(_BYTE *)(((unsigned __int64)&stage->is_finished >> 3) + 0x7FFF8000) )
      {
        __asan_report_store1(&stage->is_finished);
      }
      stage->is_finished = 1;
      BaseActivity::updateAllConds(this);
      BaseActivity::notifyClientData(this, 0);
      result = 0LL;
    }
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
  return result;
};

// Line 459: range 00000000150A29E2-00000000150A2E94
__int64 __fastcall HachiActivity::isStagePreQuestFinish(const HachiActivity *const this, uint32_t stage_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r13
  __int64 result; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v10; // rdx
  PlayerQuestComp *QuestComp; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r13
  unsigned int val; // [rsp+14h] [rbp-DCh] BYREF
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-D8h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-D0h] BYREF
  const HachiActivityStageInfo *stage_config_ptr; // [rsp+28h] [rbp-C8h]
  const std::vector<unsigned int> *quest_id_vec; // [rsp+30h] [rbp-C0h]
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-B8h]
  std::shared_ptr<Config> v23; // [rsp+40h] [rbp-B0h] BYREF
  common::milog::MiLogStream v24; // [rsp+50h] [rbp-A0h] BYREF
  char v25[128]; // [rsp+70h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 quest_id:467 64 4 12 stage_id:458";
  *(_QWORD *)(v2 + 16) = HachiActivity::isStagePreQuestFinish;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  *(_DWORD *)(v2 + 64) = stage_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v23);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v23);
  stage_config_ptr = ActivityHachiExcelConfigMgr::findStageInfoByStageId(
                       &v5->design_config.txt_config_mgr.activity_hachi_config_mgr,
                       *(_DWORD *)(v2 + 64));
  std::shared_ptr<Config>::~shared_ptr(&v23);
  if ( stage_config_ptr )
  {
    quest_id_vec = &stage_config_ptr->quest_id_vec;
    __for_range = &stage_config_ptr->quest_id_vec;
    __for_begin._M_current = std::vector<unsigned int>::begin(&stage_config_ptr->quest_id_vec)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(&stage_config_ptr->quest_id_vec)._M_current;
    while ( 1 )
    {
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
      {
        result = 1LL;
        goto LABEL_20;
      }
      v10 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v2 + 48) = *v10;
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      QuestComp = Player::getQuestComp(this->player_);
      if ( PlayerQuestComp::getQuestState(QuestComp, *(_DWORD *)(v2 + 48)) != QUEST_STATE_FINISHED )
        break;
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/hachi_activity.cpp",
      "isStagePreQuestFinish",
      471);
    v12 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v24, (const char (*)[18])"[HACHI] stage_id:");
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 64));
    v14 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v13, (const char (*)[12])" pre quest:");
    v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v2 + 48));
    v16 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v15, (const char (*)[17])" not finish uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &val);
    common::milog::MiLogStream::~MiLogStream(&v24);
    result = 0LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/hachi_activity.cpp",
      "isStagePreQuestFinish",
      463);
    v6 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
           &v24,
           (const char (*)[44])"[HACHI] stage_config_ptr is null, stage_id:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 64));
    v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v7, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream(&v24);
    result = 0LL;
  }
LABEL_20:
  if ( v25 == (char *)v2 )
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

// Line 480: range 00000000150A2E96-00000000150A32FE
__int64 __fastcall HachiActivity::isStagePostQuestFinish(const HachiActivity *const this, uint32_t stage_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r13
  __int64 result; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r13
  unsigned int *v13; // rdx
  PlayerQuestComp *QuestComp; // rax
  unsigned int val; // [rsp+10h] [rbp-C0h] BYREF
  unsigned int quest_id; // [rsp+14h] [rbp-BCh]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-B8h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-B0h] BYREF
  const HachiActivityStageInfo *stage_config_ptr; // [rsp+28h] [rbp-A8h]
  const std::vector<unsigned int> *quest_id_vec; // [rsp+30h] [rbp-A0h]
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-98h]
  std::shared_ptr<Config> v22; // [rsp+40h] [rbp-90h] BYREF
  common::milog::MiLogStream v23; // [rsp+50h] [rbp-80h] BYREF
  char v24[96]; // [rsp+70h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 stage_id:479";
  *(_QWORD *)(v2 + 16) = HachiActivity::isStagePostQuestFinish;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = stage_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v22);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22);
  stage_config_ptr = ActivityHachiExcelConfigMgr::findStageInfoByStageId(
                       &v5->design_config.txt_config_mgr.activity_hachi_config_mgr,
                       *(_DWORD *)(v2 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v22);
  if ( stage_config_ptr )
  {
    quest_id_vec = &stage_config_ptr->final_quest_id_vec;
    if ( std::vector<unsigned int>::empty(&stage_config_ptr->final_quest_id_vec) )
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/hachi_activity.cpp",
        "isStagePostQuestFinish",
        491);
      v10 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              &v23,
              (const char (*)[18])"[HACHI] stage_id:");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 32));
      v12 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
              v11,
              (const char (*)[29])" not config finish task uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v23);
    }
    __for_range = quest_id_vec;
    __for_begin._M_current = std::vector<unsigned int>::begin(quest_id_vec)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(__for_range)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v13 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      quest_id = *v13;
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      QuestComp = Player::getQuestComp(this->player_);
      if ( PlayerQuestComp::getQuestState(QuestComp, quest_id) != QUEST_STATE_FINISHED )
      {
        result = 0LL;
        goto LABEL_22;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    result = 1LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/hachi_activity.cpp",
      "isStagePostQuestFinish",
      484);
    v6 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
           &v23,
           (const char (*)[44])"[HACHI] stage_config_ptr is null, stage_id:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
    v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v7, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream(&v23);
    result = 0LL;
  }
LABEL_22:
  if ( v24 == (char *)v2 )
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

// Line 504: range 00000000150A3300-00000000150A3472
void __cdecl HachiActivity::refreshAllStageFinishQuest(HachiActivity *const this)
{
  bool *p_is_open; // rax
  std::map<unsigned int,HachiStageData>::iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::map<unsigned int,HachiStageData>::iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  std::map<unsigned int,HachiStageData> *__for_range; // [rsp+20h] [rbp-20h]
  std::pair<unsigned int const,HachiStageData> *__in; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,std::pair<unsigned int const,HachiStageData> >::type *stage_id; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,std::pair<unsigned int const,HachiStageData> >::type *stage_info; // [rsp+38h] [rbp-8h]

  __for_range = &this->stage_map_;
  __for_begin._M_node = std::map<unsigned int,HachiStageData>::begin(&this->stage_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,HachiStageData>::end(&this->stage_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,HachiStageData>>::operator*(&__for_begin);
    stage_id = std::get<0ul,unsigned int const,HachiStageData>(__in);
    stage_info = std::get<1ul,unsigned int const,HachiStageData>(__in);
    p_is_open = &stage_info->is_open;
    if ( *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_open & 7) >= *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(p_is_open);
    }
    if ( stage_info->is_open )
    {
      if ( *(_BYTE *)(((unsigned __int64)&stage_info->is_finished >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)stage_info + 5) & 7) >= *(_BYTE *)(((unsigned __int64)&stage_info->is_finished >> 3)
                                                               + 0x7FFF8000) )
      {
        __asan_report_load1(&stage_info->is_finished);
      }
      if ( !stage_info->is_finished )
      {
        if ( *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)stage_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        HachiActivity::refreshCurStageFinishQuest(this, *stage_id);
      }
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,HachiStageData>>::operator++(&__for_begin);
  }
};

// Line 515: range 00000000150A3474-00000000150A371C
void __fastcall HachiActivity::refreshCurStageFinishQuest(HachiActivity *const this, uint32_t stage_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r12
  unsigned int val; // [rsp+14h] [rbp-9Ch] BYREF
  const HachiActivityStageInfo *stage_config_ptr; // [rsp+18h] [rbp-98h]
  std::shared_ptr<Config> v11; // [rsp+20h] [rbp-90h] BYREF
  common::milog::MiLogStream v12; // [rsp+30h] [rbp-80h] BYREF
  char v13[96]; // [rsp+50h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 stage_id:514";
  *(_QWORD *)(v2 + 16) = HachiActivity::refreshCurStageFinishQuest;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = stage_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v11);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v11);
  stage_config_ptr = ActivityHachiExcelConfigMgr::findStageInfoByStageId(
                       &v5->design_config.txt_config_mgr.activity_hachi_config_mgr,
                       *(_DWORD *)(v2 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v11);
  if ( stage_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)stage_config_ptr >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)stage_config_ptr >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( stage_config_ptr->stage_type != HACHI_ACTIVITY_STAGE_TYPE_DUNGEON
      && (unsigned __int8)HachiActivity::isStagePostQuestFinish(this, *(_DWORD *)(v2 + 32)) )
    {
      HachiActivity::finishStage(this, *(_DWORD *)(v2 + 32));
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/hachi_activity.cpp",
      "refreshCurStageFinishQuest",
      519);
    v6 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
           &v12,
           (const char (*)[44])"[HACHI] stage_config_ptr is null, stage_id:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
    v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v7, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream(&v12);
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
};

// Line 534: range 00000000150A371E-00000000150A3AFF
bool __cdecl HachiActivity::isDungeonPass(const HachiActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  bool result; // al
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r13
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,HachiStageData> >::pointer v12; // rdx
  unsigned int val; // [rsp+14h] [rbp-BCh] BYREF
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,HachiStageData> >::_Self __y; // [rsp+18h] [rbp-B8h] BYREF
  std::shared_ptr<Config> v15; // [rsp+20h] [rbp-B0h] BYREF
  common::milog::MiLogStream v16; // [rsp+30h] [rbp-A0h] BYREF
  char v17[128]; // [rsp+50h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 20 dungeon_stage_id:535 64 8 8 iter:541";
  *(_QWORD *)(v1 + 16) = HachiActivity::isDungeonPass;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202116352;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v15);
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15);
  *(_DWORD *)(v1 + 48) = ActivityHachiExcelConfigMgr::getDungeonStageId(&v4->design_config.txt_config_mgr.activity_hachi_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v15);
  if ( !HachiActivity::isStageOpen(this, *(_DWORD *)(v1 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/hachi_activity.cpp",
      "isDungeonPass",
      538);
    v5 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
           &v16,
           (const char (*)[45])"[HACHI] cur dungeon not open, dungeon_stage:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v6, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v16);
    result = 0;
  }
  else
  {
    *(std::map<unsigned int,HachiStageData>::const_iterator *)(v1 + 64) = std::map<unsigned int,HachiStageData>::find(
                                                                            &this->stage_map_,
                                                                            (const std::map<unsigned int,HachiStageData>::key_type *)(v1 + 48));
    __y._M_node = std::map<unsigned int,HachiStageData>::end(&this->stage_map_)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,HachiStageData> >::_Self *)(v1 + 64),
           &__y) )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/hachi_activity.cpp",
        "isDungeonPass",
        544);
      v9 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
             &v16,
             (const char (*)[22])"[HACHI]dungeon stage:");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v1 + 48));
      v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v10, (const char (*)[16])" not open, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
      common::milog::MiLogStream::~MiLogStream(&v16);
      result = 0;
    }
    else
    {
      v12 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,HachiStageData>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,HachiStageData> > *const)(v1 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&v12->second.dungeon_pass_times >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v12 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v12->second.dungeon_pass_times >> 3)
                                                           + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      result = v12->second.dungeon_pass_times != 0;
    }
  }
  if ( v17 == (char *)v1 )
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

// Line 553: range 00000000150A3B00-00000000150A405B
__int64 __fastcall HachiActivity::checkEnterDungeon(const HachiActivity *const this, uint32_t dungeon_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r13
  __int64 result; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r13
  PlayerSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v17; // r13
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  unsigned int val; // [rsp+18h] [rbp-B8h] BYREF
  uint32_t dungeon_stage_id; // [rsp+1Ch] [rbp-B4h]
  std::shared_ptr<Config> v22; // [rsp+20h] [rbp-B0h] BYREF
  common::milog::MiLogStream v23; // [rsp+30h] [rbp-A0h] BYREF
  char v24[128]; // [rsp+50h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 18 cur_dungeon_id:554 64 4 14 dungeon_id:552";
  *(_QWORD *)(v2 + 16) = HachiActivity::checkEnterDungeon;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  *(_DWORD *)(v2 + 64) = dungeon_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v22);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22);
  *(_DWORD *)(v2 + 48) = ActivityHachiExcelConfigMgr::getDungeonId(&v5->design_config.txt_config_mgr.activity_hachi_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v22);
  if ( *(_DWORD *)(v2 + 64) == *(_DWORD *)(v2 + 48) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v22);
    v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22);
    dungeon_stage_id = ActivityHachiExcelConfigMgr::getDungeonStageId(&v12->design_config.txt_config_mgr.activity_hachi_config_mgr);
    std::shared_ptr<Config>::~shared_ptr(&v22);
    if ( !HachiActivity::isStageOpen(this, dungeon_stage_id) )
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/hachi_activity.cpp",
        "checkEnterDungeon",
        563);
      v13 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
              &v23,
              (const char (*)[42])"[HACHI] cur dungeon not open, dungeon_id:");
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 64));
      v15 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v14, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
      common::milog::MiLogStream::~MiLogStream(&v23);
      result = 10053LL;
    }
    else if ( (unsigned __int8)HachiActivity::isStagePreQuestFinish(this, dungeon_stage_id) != 1 )
    {
      result = 0xFFFFFFFFLL;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      SceneComp = Player::getSceneComp(this->player_);
      if ( PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
      {
        result = 0LL;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v23,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/hachi_activity.cpp",
          "checkEnterDungeon",
          577);
        v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                &v23,
                (const char (*)[16])"[HACHI] player:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &val);
        v19 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v18, (const char (*)[11])off_256F68A0);
        common::milog::MiLogStream::operator<<<HachiActivity,(HachiActivity*)0>(v19, this);
        common::milog::MiLogStream::~MiLogStream(&v23);
        if ( !HachiActivity::isDungeonPass(this) )
          result = 10054LL;
        else
          result = 0LL;
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/hachi_activity.cpp",
      "checkEnterDungeon",
      557);
    v6 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
           &v23,
           (const char (*)[53])"[HACHI] enter not current hachi activity dungeon_id:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 48));
    v8 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v7, (const char (*)[9])" client:");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 64));
    v10 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v9, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
    common::milog::MiLogStream::~MiLogStream(&v23);
    result = 10052LL;
  }
  if ( v24 == (char *)v2 )
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
