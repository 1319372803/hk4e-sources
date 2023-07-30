// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/muqadas_potion_activity.cpp

// Line 26: range 00000000145737E0-00000000145738DE
void __cdecl MuqadasPotionLevelData::toClient(
        const MuqadasPotionLevelData *const this,
        proto::MuqadasPotionLevelData *client_muqadas_potion_data)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::MuqadasPotionLevelData::set_level_id(client_muqadas_potion_data, this->level_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_open);
  }
  proto::MuqadasPotionLevelData::set_is_open(client_muqadas_potion_data, this->is_open);
  if ( *(_BYTE *)(((unsigned __int64)&this->max_score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_score >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::MuqadasPotionLevelData::set_max_score(client_muqadas_potion_data, this->max_score);
};

// Line 33: range 00000000145738E0-00000000145739DE
void __cdecl MuqadasPotionLevelData::toBin(
        const MuqadasPotionLevelData *const this,
        proto::MuqadasPotionLevelDataBin *bin)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::MuqadasPotionLevelDataBin::set_level_id(bin, this->level_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_open);
  }
  proto::MuqadasPotionLevelDataBin::set_is_open(bin, this->is_open);
  if ( *(_BYTE *)(((unsigned __int64)&this->max_score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_score >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::MuqadasPotionLevelDataBin::set_max_score(bin, this->max_score);
};

// Line 40: range 00000000145739E0-0000000014573ADD
void __cdecl MuqadasPotionLevelData::fromBin(
        MuqadasPotionLevelData *const this,
        const proto::MuqadasPotionLevelDataBin *bin)
{
  uint32_t v2; // ecx
  bool is_open; // cl
  uint32_t v4; // ecx

  v2 = proto::MuqadasPotionLevelDataBin::level_id(bin);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->level_id = v2;
  is_open = proto::MuqadasPotionLevelDataBin::is_open(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_open);
  }
  this->is_open = is_open;
  v4 = proto::MuqadasPotionLevelDataBin::max_score(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->max_score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_score >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_score);
  }
  this->max_score = v4;
};

// Line 47: range 0000000014573ADE-0000000014573D6E
int32_t __cdecl MuqadasPotionActivity::fromScheduleBin(
        MuqadasPotionActivity *const this,
        const proto::ActivityScheduleBin *bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  MuqadasPotionLevelData *v5; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,MuqadasPotionLevelData> >,bool> v6; // rax
  common::milog::MiLogStream *v7; // rax
  const google::protobuf::RepeatedField<long unsigned int> *v8; // rax
  int32_t result; // eax
  google::protobuf::RepeatedPtrField<proto::MuqadasPotionLevelDataBin>::const_iterator __for_begin; // [rsp+18h] [rbp-A8h] BYREF
  google::protobuf::RepeatedPtrField<proto::MuqadasPotionLevelDataBin>::const_iterator __for_end; // [rsp+20h] [rbp-A0h] BYREF
  const proto::MuqadasPotionScheduleBin *schedule_bin; // [rsp+28h] [rbp-98h]
  const google::protobuf::RepeatedPtrField<proto::MuqadasPotionLevelDataBin> *__for_range; // [rsp+30h] [rbp-90h]
  const proto::MuqadasPotionLevelDataBin *level_bin; // [rsp+38h] [rbp-88h]
  common::milog::MiLogStream v15; // [rsp+40h] [rbp-80h] BYREF
  char v16[96]; // [rsp+60h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 12 13 level_data:53";
  *(_QWORD *)(v2 + 16) = MuqadasPotionActivity::fromScheduleBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202177536;
  schedule_bin = proto::ActivityScheduleBin::muqadas_potion_bin(bin);
  std::map<unsigned int,MuqadasPotionLevelData>::clear(&this->level_data_map_);
  __for_range = proto::MuqadasPotionScheduleBin::level_bin_list(schedule_bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::MuqadasPotionLevelDataBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::MuqadasPotionLevelDataBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::MuqadasPotionLevelDataBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    level_bin = google::protobuf::internal::RepeatedPtrIterator<proto::MuqadasPotionLevelDataBin const>::operator*(&__for_begin);
    *(_DWORD *)(v2 + 32) = 0;
    *(_BYTE *)(v2 + 36) = 0;
    *(_DWORD *)(v2 + 40) = 0;
    MuqadasPotionLevelData::fromBin((MuqadasPotionLevelData *const)(v2 + 32), level_bin);
    v6 = std::map<unsigned int,MuqadasPotionLevelData>::emplace<unsigned int &,MuqadasPotionLevelData&>(
           &this->level_data_map_,
           (unsigned int *)(v2 + 32),
           (MuqadasPotionLevelData *)(v2 + 32),
           (unsigned int *)&this->level_data_map_,
           v5);
    if ( !v6.second )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/muqadas_potion_activity.cpp",
        "fromScheduleBin",
        57);
      v7 = common::milog::MiLogStream::operator<<<char [67],(char *[67])0>(
             &v15,
             (const char (*)[67])"[MUQADAS_POTION] fromScheduleBin error, duplicate level, level_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
    }
    google::protobuf::internal::RepeatedPtrIterator<proto::MuqadasPotionLevelDataBin const>::operator++(&__for_begin);
  }
  std::vector<unsigned long>::clear(&this->in_dungeon_avatar_guid_vec_);
  v8 = proto::MuqadasPotionScheduleBin::in_dungeon_avatar_guid_list(schedule_bin);
  common::tools::MiscUtils::repeatedToVector<unsigned long,unsigned long>(v8, &this->in_dungeon_avatar_guid_vec_);
  result = 0;
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

// Line 67: range 0000000014573D70-0000000014573E60
int32_t __cdecl MuqadasPotionActivity::toScheduleBin(
        const MuqadasPotionActivity *const this,
        proto::ActivityScheduleBin *bin)
{
  google::protobuf::RepeatedField<long unsigned int> *v2; // rax
  std::map<unsigned int,MuqadasPotionLevelData>::const_iterator __for_begin; // [rsp+10h] [rbp-40h] BYREF
  std::map<unsigned int,MuqadasPotionLevelData>::const_iterator __for_end; // [rsp+18h] [rbp-38h] BYREF
  proto::MuqadasPotionScheduleBin *schedule_bin; // [rsp+20h] [rbp-30h]
  const std::map<unsigned int,MuqadasPotionLevelData> *__for_range; // [rsp+28h] [rbp-28h]
  const std::pair<unsigned int const,MuqadasPotionLevelData> *v8; // [rsp+30h] [rbp-20h]
  std::tuple_element<0,const std::pair<unsigned int const,MuqadasPotionLevelData> >::type *level_id; // [rsp+38h] [rbp-18h]
  std::tuple_element<1,const std::pair<unsigned int const,MuqadasPotionLevelData> >::type *level_data; // [rsp+40h] [rbp-10h]
  proto::MuqadasPotionLevelDataBin *level_bin; // [rsp+48h] [rbp-8h]

  schedule_bin = proto::ActivityScheduleBin::mutable_muqadas_potion_bin(bin);
  __for_range = &this->level_data_map_;
  __for_begin._M_node = std::map<unsigned int,MuqadasPotionLevelData>::begin(&this->level_data_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,MuqadasPotionLevelData>::end(&this->level_data_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v8 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,MuqadasPotionLevelData>>::operator*(&__for_begin);
    level_id = std::get<0ul,unsigned int const,MuqadasPotionLevelData>(v8);
    level_data = (std::tuple_element<1,const std::pair<unsigned int const,MuqadasPotionLevelData> >::type *)std::get<1ul,unsigned int const,MuqadasPotionLevelData>(v8);
    level_bin = proto::MuqadasPotionScheduleBin::add_level_bin_list(schedule_bin);
    MuqadasPotionLevelData::toBin(level_data, level_bin);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,MuqadasPotionLevelData>>::operator++(&__for_begin);
  }
  v2 = proto::MuqadasPotionScheduleBin::mutable_in_dungeon_avatar_guid_list(schedule_bin);
  common::tools::MiscUtils::vectorToRepeated<unsigned long,unsigned long>(&this->in_dungeon_avatar_guid_vec_, v2);
  return 0;
};

// Line 79: range 0000000014573E62-000000001457402F
int32_t __cdecl MuqadasPotionActivity::toClient(MuqadasPotionActivity *const this, proto::ActivityInfo *activity_info)
{
  common::milog::MiLogStream *v2; // rbx
  unsigned int val; // [rsp+1Ch] [rbp-74h] BYREF
  std::map<unsigned int,MuqadasPotionLevelData>::iterator __for_begin; // [rsp+20h] [rbp-70h] BYREF
  std::map<unsigned int,MuqadasPotionLevelData>::iterator __for_end; // [rsp+28h] [rbp-68h] BYREF
  proto::MuqadasPotionActivityDetailInfo *client_info; // [rsp+30h] [rbp-60h]
  std::map<unsigned int,MuqadasPotionLevelData> *__for_range; // [rsp+38h] [rbp-58h]
  const std::pair<unsigned int const,MuqadasPotionLevelData> *v9; // [rsp+40h] [rbp-50h]
  std::tuple_element<0,const std::pair<unsigned int const,MuqadasPotionLevelData> >::type *level_id; // [rsp+48h] [rbp-48h]
  std::tuple_element<1,const std::pair<unsigned int const,MuqadasPotionLevelData> >::type *level_data; // [rsp+50h] [rbp-40h]
  proto::MuqadasPotionLevelData *level_client_info; // [rsp+58h] [rbp-38h]
  common::milog::MiLogStream v13; // [rsp+60h] [rbp-30h] BYREF

  if ( BaseActivity::toClient(this, activity_info) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/muqadas_potion_activity.cpp",
      "toClient",
      82);
    v2 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v13,
           (const char (*)[36])"BaseActivity::toClient fails, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    return -1;
  }
  else
  {
    client_info = proto::ActivityInfo::mutable_muqadas_potion_info(activity_info);
    __for_range = &this->level_data_map_;
    __for_begin._M_node = std::map<unsigned int,MuqadasPotionLevelData>::begin(&this->level_data_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,MuqadasPotionLevelData>::end(&this->level_data_map_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v9 = std::_Rb_tree_iterator<std::pair<unsigned int const,MuqadasPotionLevelData>>::operator*(&__for_begin);
      level_id = std::get<0ul,unsigned int const,MuqadasPotionLevelData>(v9);
      level_data = (std::tuple_element<1,const std::pair<unsigned int const,MuqadasPotionLevelData> >::type *)std::get<1ul,unsigned int const,MuqadasPotionLevelData>(v9);
      level_client_info = proto::MuqadasPotionActivityDetailInfo::add_muqadas_potion_level_data_list(client_info);
      MuqadasPotionLevelData::toClient(level_data, level_client_info);
      std::_Rb_tree_iterator<std::pair<unsigned int const,MuqadasPotionLevelData>>::operator++(&__for_begin);
    }
    return 0;
  }
};

// Line 96: range 0000000014574030-000000001457408D
int32_t __cdecl MuqadasPotionActivity::init(MuqadasPotionActivity *const this)
{
  if ( BaseActivity::isOpening(this, 0) && !BaseActivity::isSettled(this) )
    MuqadasPotionActivity::registerObserver(this);
  return 0;
};

// Line 106: range 000000001457408E-00000000145742DC
void __cdecl MuqadasPotionActivity::onPreStart(MuqadasPotionActivity *const this)
{
  GameserverService *v1; // rsi
  unsigned __int64 v2; // rax
  uint32_t v3; // ecx
  std::unordered_map<unsigned int,data::ActivityMuqadasPotionLevelExcelConfig>::const_iterator __for_begin; // [rsp+10h] [rbp-50h] BYREF
  std::unordered_map<unsigned int,data::ActivityMuqadasPotionLevelExcelConfig>::const_iterator __for_end; // [rsp+18h] [rbp-48h] BYREF
  const ActivityMuqadasPotionExcelConfigMgr *config_mgr; // [rsp+20h] [rbp-40h]
  const std::unordered_map<unsigned int,data::ActivityMuqadasPotionLevelExcelConfig> *__for_range; // [rsp+28h] [rbp-38h]
  const std::pair<unsigned int const,data::ActivityMuqadasPotionLevelExcelConfig> *v8; // [rsp+30h] [rbp-30h]
  std::tuple_element<0,const std::pair<unsigned int const,data::ActivityMuqadasPotionLevelExcelConfig> >::type *level_id; // [rsp+38h] [rbp-28h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivityMuqadasPotionLevelExcelConfig> >::type *_; // [rsp+40h] [rbp-20h]
  MuqadasPotionLevelData *level_data; // [rsp+48h] [rbp-18h]
  std::shared_ptr<Config> v12; // [rsp+50h] [rbp-10h] BYREF

  v1 = ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v12);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v12)->design_config.txt_config_mgr.activity_muqadas_potion_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v12);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = (unsigned __int64)(this->_vptr_DescribalBase + 35);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8();
  (*(void (__fastcall **)(MuqadasPotionActivity *const, GameserverService *))v2)(this, v1);
  __for_range = &config_mgr->activity_muqadas_potion_level_excel_config_map;
  __for_begin._M_cur = std::unordered_map<unsigned int,data::ActivityMuqadasPotionLevelExcelConfig>::begin(&config_mgr->activity_muqadas_potion_level_excel_config_map)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,data::ActivityMuqadasPotionLevelExcelConfig>::end(&config_mgr->activity_muqadas_potion_level_excel_config_map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ActivityMuqadasPotionLevelExcelConfig>,false>(
            &__for_begin,
            &__for_end) )
  {
    v8 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityMuqadasPotionLevelExcelConfig>,false,false>::operator*(&__for_begin);
    level_id = std::get<0ul,unsigned int const,data::ActivityMuqadasPotionLevelExcelConfig>(v8);
    _ = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivityMuqadasPotionLevelExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivityMuqadasPotionLevelExcelConfig>(v8);
    level_data = std::map<unsigned int,MuqadasPotionLevelData>::operator[](&this->level_data_map_, level_id);
    if ( *(_BYTE *)(((unsigned __int64)level_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)level_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)level_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v3 = *level_id;
    if ( *(_BYTE *)(((unsigned __int64)level_data >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)level_data & 7) + 3) >= *(_BYTE *)(((unsigned __int64)level_data >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(level_data);
    }
    level_data->level_id = v3;
    if ( *(_BYTE *)(((unsigned __int64)&level_data->is_open >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)level_data + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&level_data->is_open >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(&level_data->is_open);
    }
    level_data->is_open = 0;
    if ( *(_BYTE *)(((unsigned __int64)&level_data->max_score >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)level_data + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_data->max_score >> 3)
                                                               + 0x7FFF8000) )
    {
      __asan_report_store4(&level_data->max_score);
    }
    level_data->max_score = 0;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityMuqadasPotionLevelExcelConfig>,false,false>::operator++(&__for_begin);
  }
};

// Line 120: range 00000000145742DE-0000000014574340
void __cdecl MuqadasPotionActivity::onLogin(MuqadasPotionActivity *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( !Player::isRelogin(this->player_) )
    MuqadasPotionActivity::recallDungeonAvatars(this);
  BaseActivity::onLogin(this);
};

// Line 129: range 0000000014574342-00000000145743CA
void __cdecl MuqadasPotionActivity::onStart(MuqadasPotionActivity *const this)
{
  common::milog::MiLogStream v1; // [rsp+10h] [rbp-30h] BYREF

  MuqadasPotionActivity::registerObserver(this);
  common::milog::MiLogStream::create(
    &v1,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/muqadas_potion_activity.cpp",
    "onStart",
    131);
  common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
    &v1,
    (const char (*)[50])"[MUQADAS_POTION] MuqadasPotionActivity::onStart()");
  common::milog::MiLogStream::~MiLogStream(&v1);
};

// Line 135: range 00000000145743CC-0000000014574741
int32_t __cdecl MuqadasPotionActivity::execAction(
        MuqadasPotionActivity *const this,
        const data::NewActivityExec *action_exec)
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
  const std::string *level_id_str; // [rsp+28h] [rbp-88h]
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
  *(_QWORD *)(v2 + 8) = "1 32 4 12 level_id:148";
  *(_QWORD *)(v2 + 16) = MuqadasPotionActivity::execAction;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( action_exec->type == NEW_ACTIVITY_ACTION_OPEN_MUQADAS_POTION_LEVEL )
  {
    if ( std::vector<std::string>::size(&action_exec->param) )
    {
      __for_range = &action_exec->param;
      __for_begin._M_current = std::vector<std::string>::begin(&action_exec->param)._M_current;
      __for_end._M_current = std::vector<std::string>::end(&action_exec->param)._M_current;
      while ( __gnu_cxx::operator!=<std::string const*,std::vector<std::string>>(&__for_begin, &__for_end) )
      {
        level_id_str = __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator*(&__for_begin);
        *(_DWORD *)(v2 + 32) = 0;
        if ( !common::tools::StringUtils::strToNum<unsigned int>(level_id_str, (unsigned int *)(v2 + 32), 1)
          && MuqadasPotionActivity::tryOpenLevel(this, *(_DWORD *)(v2 + 32)) )
        {
          common::milog::MiLogStream::create(
            &v13,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/muqadas_potion_activity.cpp",
            "execAction",
            155);
          v8 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                 &v13,
                 (const char (*)[49])"[MUQADAS_POTION] tryOpenStage failed, stage_id: ");
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
        "./src/player/activity/muqadas_potion_activity.cpp",
        "execAction",
        142);
      v5 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
             &v13,
             (const char (*)[36])"[MUQADAS_POTION] action param size ");
      __for_end._M_current = (const std::string *)std::vector<std::string>::size(&action_exec->param);
      v6 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
             v5,
             (const unsigned __int64 *)&__for_end);
      common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v6, (const char (*)[12])off_253FD4A0);
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

// Line 170: range 0000000014574742-0000000014574774
void __cdecl MuqadasPotionActivity::onClear(MuqadasPotionActivity *const this)
{
  std::map<unsigned int,MuqadasPotionLevelData>::clear(&this->level_data_map_);
  std::vector<unsigned long>::clear(&this->in_dungeon_avatar_guid_vec_);
};

// Line 176: range 0000000014574776-00000000145747CF
void __cdecl MuqadasPotionActivity::onDailyRefresh(MuqadasPotionActivity *const this)
{
  if ( BaseActivity::isOpening(this, 0) && !BaseActivity::isSettled(this) )
    BaseActivity::notifyClientData(this, 0);
};

// Line 185: range 0000000014574910-0000000014575466
int32_t __cdecl MuqadasPotionActivity::onMuqadasPotionActivityEnterDungeonReq(
        MuqadasPotionActivity *const this,
        const proto::MuqadasPotionActivityEnterDungeonReq *req,
        proto::MuqadasPotionActivityEnterDungeonRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  int32_t v7; // r14d
  uint32_t v8; // eax
  common::milog::MiLogStream *v9; // rbx
  ActivityMuqadasPotionExcelConfigMgr *p_activity_muqadas_potion_mgr; // r14
  uint32_t v11; // eax
  common::milog::MiLogStream *v12; // rbx
  common::milog::MiLogStream *v13; // r14
  PlayerDungeonComp *DungeonComp; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  __int32 SceneId; // eax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  common::milog::MiLogStream *v24; // r14
  DungeonScene *v25; // r14
  DungeonScene *v26; // rax
  PlayerAvatarComp *AvatarComp; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+24h] [rbp-15Ch] BYREF
  const data::ActivityMuqadasPotionLevelExcelConfig *level_config_ptr; // [rsp+28h] [rbp-158h]
  std::tuple_element<0,std::pair<int,std::shared_ptr<DungeonScene> > >::type *enter_dungeon_retcode; // [rsp+30h] [rbp-150h]
  std::tuple_element<1,std::pair<int,std::shared_ptr<DungeonScene> > >::type *dungeon_scene_ptr; // [rsp+38h] [rbp-148h]
  std::pair<int,std::shared_ptr<DungeonScene> > __in; // [rsp+40h] [rbp-140h] BYREF
  EnterDungeonOption v37; // [rsp+60h] [rbp-120h] BYREF
  common::milog::MiLogStream v38; // [rsp+80h] [rbp-100h] BYREF
  std::map<unsigned int,unsigned int> level_config_id_map; // [rsp+A0h] [rbp-E0h] BYREF
  char v40[176]; // [rsp+D0h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 14 dungeon_id:203 64 8 19 dungeon_context:233 96 16 17 cur_scene_ptr:204";
  *(_QWORD *)(v3 + 16) = MuqadasPotionActivity::onMuqadasPotionActivityEnterDungeonReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202178560;
  if ( !BaseActivity::isOpening(this, 0) || BaseActivity::isSettled(this) )
  {
    v7 = -1;
  }
  else
  {
    v8 = proto::MuqadasPotionActivityEnterDungeonReq::level_id(req);
    if ( !MuqadasPotionActivity::isLevelOpen(this, v8) )
    {
      common::milog::MiLogStream::create(
        &v38,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/muqadas_potion_activity.cpp",
        "onMuqadasPotionActivityEnterDungeonReq",
        192);
      v9 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
             &v38,
             (const char (*)[46])"[MUQADAS_POTION] level is not open, level_id:");
      val = proto::MuqadasPotionActivityEnterDungeonReq::level_id(req);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
      common::milog::MiLogStream::~MiLogStream(&v38);
      v7 = -1;
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v3 + 96));
      p_activity_muqadas_potion_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96))->design_config.txt_config_mgr.activity_muqadas_potion_mgr;
      v11 = proto::MuqadasPotionActivityEnterDungeonReq::level_id(req);
      level_config_ptr = data::ActivityMuqadasPotionExcelConfigMgrBase::findActivityMuqadasPotionLevelExcelConfig(
                           p_activity_muqadas_potion_mgr,
                           v11);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 96));
      if ( level_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->dungeon_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&level_config_ptr->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v3 + 48) = level_config_ptr->dungeon_id;
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Player::getSceneComp(this->player_);
        PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v3 + 96));
        if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 96)) )
        {
          common::milog::MiLogStream::create(
            &v38,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/muqadas_potion_activity.cpp",
            "onMuqadasPotionActivityEnterDungeonReq",
            207);
          v13 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                  &v38,
                  (const char (*)[41])"[MUQADAS_POTION] cur scene is null, uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
          common::milog::MiLogStream::~MiLogStream(&v38);
          v7 = -1;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          DungeonComp = Player::getDungeonComp(this->player_);
          memset(&v37, 0, sizeof(v37));
          EnterDungeonOption::EnterDungeonOption(&v37);
          memset(&level_config_id_map, 0, sizeof(level_config_id_map));
          std::map<unsigned int,unsigned int>::map(&level_config_id_map);
          v15 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
          SceneId = Scene::getSceneId(v15);
          PlayerDungeonComp::enterDungeon(
            &__in,
            DungeonComp,
            *(_DWORD *)(v3 + 48),
            SceneId,
            0,
            &level_config_id_map,
            v37);
          std::map<unsigned int,unsigned int>::~map(&level_config_id_map);
          enter_dungeon_retcode = std::get<0ul,int,std::shared_ptr<DungeonScene>>(&__in);
          dungeon_scene_ptr = std::get<1ul,int,std::shared_ptr<DungeonScene>>(&__in);
          if ( *(_BYTE *)(((unsigned __int64)enter_dungeon_retcode >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)enter_dungeon_retcode & 7) + 3) >= *(_BYTE *)(((unsigned __int64)enter_dungeon_retcode >> 3)
                                                                                    + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          if ( *enter_dungeon_retcode )
          {
            common::milog::MiLogStream::create(
              &v38,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/activity/muqadas_potion_activity.cpp",
              "onMuqadasPotionActivityEnterDungeonReq",
              215);
            v17 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                    &v38,
                    (const char (*)[48])"[MUQADAS_POTION] enterDungeon fail, dungeon_id:");
            v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v17,
                    (const unsigned int *)(v3 + 48));
            v19 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                    v18,
                    (const char (*)[24])" enter_dungeon_retcode:");
            v20 = common::milog::MiLogStream::operator<<<int,(int *)0>(v19, enter_dungeon_retcode);
            v21 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v20, (const char (*)[6])" uid:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            val = Player::getUid(this->player_);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &val);
            common::milog::MiLogStream::~MiLogStream(&v38);
            if ( *(_BYTE *)(((unsigned __int64)enter_dungeon_retcode >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)enter_dungeon_retcode & 7) + 3) >= *(_BYTE *)(((unsigned __int64)enter_dungeon_retcode >> 3)
                                                                                      + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            v7 = *enter_dungeon_retcode;
          }
          else if ( std::operator==<DungeonScene>(0LL, dungeon_scene_ptr)
                 || (v22 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)dungeon_scene_ptr),
                     DungeonScene::getDungeonId(v22) != *(_DWORD *)(v3 + 48)) )
          {
            common::milog::MiLogStream::create(
              &v38,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/activity/muqadas_potion_activity.cpp",
              "onMuqadasPotionActivityEnterDungeonReq",
              220);
            v24 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                    &v38,
                    (const char (*)[51])"[MUQADAS_POTION] player enter dungeon failed, uid:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            val = Player::getUid(this->player_);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &val);
            common::milog::MiLogStream::~MiLogStream(&v38);
            v7 = -1;
          }
          else
          {
            v25 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)dungeon_scene_ptr);
            std::function<void ()(Player &,DungeonScene &,proto::DungeonSettleNotify &)>::function<MuqadasPotionActivity::onMuqadasPotionActivityEnterDungeonReq(proto::MuqadasPotionActivityEnterDungeonReq const&,proto::MuqadasPotionActivityEnterDungeonRsp &)::{lambda(Player &,DungeonScene &,proto::DungeonSettleNotify &)#1},void,void>(
              (std::function<void(Player&,DungeonScene&,proto::DungeonSettleNotify&)> *const)&v38,
              (MuqadasPotionActivity::onMuqadasPotionActivityEnterDungeonReq::<lambda(Player&, DungeonScene&, proto::DungeonSettleNotify&)>)dungeon_scene_ptr);
            DungeonScene::registerDungeonSettleCallback(v25, (DungeonSettleCallback *)&v38);
            std::function<void ()(Player &,DungeonScene &,proto::DungeonSettleNotify &)>::~function((std::function<void(Player&,DungeonScene&,proto::DungeonSettleNotify&)> *const)&v38);
            *(_DWORD *)(v3 + 64) = 0;
            *(_DWORD *)(v3 + 68) = 0;
            *(_DWORD *)(v3 + 64) = proto::MuqadasPotionActivityEnterDungeonReq::level_id(req);
            if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            *(_DWORD *)(v3 + 68) = this->activity_id_;
            v26 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)dungeon_scene_ptr);
            DungeonScene::setDungeonExtraData<MuqadasPotionDungeonContext>(
              v26,
              (const MuqadasPotionDungeonContext *)(v3 + 64));
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            AvatarComp = Player::getAvatarComp(this->player_);
            PlayerAvatarComp::delAllBuffs(AvatarComp);
            common::milog::MiLogStream::create(
              &v38,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/activity/muqadas_potion_activity.cpp",
              "onMuqadasPotionActivityEnterDungeonReq",
              241);
            v28 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                    &v38,
                    (const char (*)[49])"[MUQADAS_POTION] enter dungeon succ, dungeon_id:");
            v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v28,
                    (const unsigned int *)(v3 + 48));
            v30 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v29, (const char (*)[7])", uid:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            val = Player::getUid(this->player_);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, &val);
            common::milog::MiLogStream::~MiLogStream(&v38);
            v7 = 0;
          }
          std::pair<int,std::shared_ptr<DungeonScene>>::~pair(&__in);
        }
        std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 96));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v38,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/muqadas_potion_activity.cpp",
          "onMuqadasPotionActivityEnterDungeonReq",
          200);
        v12 = common::milog::MiLogStream::operator<<<char [76],(char *[76])0>(
                &v38,
                (const char (*)[76])"[MUQADAS_POTION] findActivityMuqadasPotionLevelExcelConfig fails, level_id:");
        val = proto::MuqadasPotionActivityEnterDungeonReq::level_id(req);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
        common::milog::MiLogStream::~MiLogStream(&v38);
        v7 = -1;
      }
    }
  }
  result = v7;
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

// Line 223: range 00000000145747D0-000000001457490F
void __cdecl MuqadasPotionActivity::onMuqadasPotionActivityEnterDungeonReq(proto::MuqadasPotionActivityEnterDungeonReq const&,proto::MuqadasPotionActivityEnterDungeonRsp &)::{lambda(Player &,DungeonScene &,proto::DungeonSettleNotify &)#1}::operator()(
        const MuqadasPotionActivity::onMuqadasPotionActivityEnterDungeonReq::<lambda(Player&, DungeonScene&, proto::DungeonSettleNotify&)> *const __closure,
        Player *player,
        DungeonScene *dungeon_scene,
        proto::DungeonSettleNotify *notify)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  std::__shared_ptr_access<MuqadasPotionActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rcx
  char v10[96]; // [rsp+20h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 16 activity_ptr:225";
  *(_QWORD *)(v4 + 16) = MuqadasPotionActivity::onMuqadasPotionActivityEnterDungeonReq(proto::MuqadasPotionActivityEnterDungeonReq const&,proto::MuqadasPotionActivityEnterDungeonRsp &)::{lambda(Player &,DungeonScene &,proto::DungeonSettleNotify &)#1}::operator();
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  Player::getActivityComp(player);
  PlayerActivityComp::findOpenningActivity<MuqadasPotionActivity>((PlayerActivityComp *const)(v4 + 32));
  if ( std::operator!=<MuqadasPotionActivity>(0LL, (const std::shared_ptr<MuqadasPotionActivity> *)(v4 + 32)) )
  {
    v7 = std::__shared_ptr_access<MuqadasPotionActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MuqadasPotionActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    MuqadasPotionActivity::onDungeonSettle(v7, dungeon_scene, notify);
  }
  std::shared_ptr<MuqadasPotionActivity>::~shared_ptr((std::shared_ptr<MuqadasPotionActivity> *const)(v4 + 32));
  if ( v10 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 247: range 0000000014575468-00000000145757F3
__int64 __fastcall MuqadasPotionActivity::tryOpenLevel(MuqadasPotionActivity *const this, uint32_t level_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v7; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,MuqadasPotionLevelData> >::pointer v8; // rax
  bool *p_is_open; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,MuqadasPotionLevelData> >::_Self __y; // [rsp+10h] [rbp-D0h] BYREF
  const ActivityMuqadasPotionExcelConfigMgr *muqadas_potion_config_mgr; // [rsp+18h] [rbp-C8h]
  MuqadasPotionLevelData *level_data; // [rsp+28h] [rbp-B8h]
  std::shared_ptr<Config> v14; // [rsp+30h] [rbp-B0h] BYREF
  common::milog::MiLogStream v15; // [rsp+40h] [rbp-A0h] BYREF
  char v16[128]; // [rsp+60h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 level_id:246 64 8 8 iter:256";
  *(_QWORD *)(v2 + 16) = MuqadasPotionActivity::tryOpenLevel;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = level_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v14);
  muqadas_potion_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14)->design_config.txt_config_mgr.activity_muqadas_potion_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v14);
  if ( data::ActivityMuqadasPotionExcelConfigMgrBase::findActivityMuqadasPotionLevelExcelConfig(
         muqadas_potion_config_mgr,
         *(_DWORD *)(v2 + 48)) )
  {
    *(std::map<unsigned int,MuqadasPotionLevelData>::iterator *)(v2 + 64) = std::map<unsigned int,MuqadasPotionLevelData>::find(
                                                                              &this->level_data_map_,
                                                                              (const std::map<unsigned int,MuqadasPotionLevelData>::key_type *)(v2 + 48));
    __y._M_node = std::map<unsigned int,MuqadasPotionLevelData>::end(&this->level_data_map_)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,MuqadasPotionLevelData> >::_Self *)(v2 + 64),
           &__y) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/muqadas_potion_activity.cpp",
        "tryOpenLevel",
        259);
      v7 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
             &v15,
             (const char (*)[47])"[MUQADAS_POTION] stage_id not found, level_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v8 = std::_Rb_tree_iterator<std::pair<unsigned int const,MuqadasPotionLevelData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,MuqadasPotionLevelData> > *const)(v2 + 64));
      level_data = &v8->second;
      p_is_open = &v8->second.is_open;
      if ( *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)p_is_open & 7) >= *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(p_is_open);
      }
      if ( level_data->is_open )
      {
        result = 0LL;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&level_data->is_open >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)level_data + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&level_data->is_open >> 3)
                                                                 + 0x7FFF8000) )
        {
          __asan_report_store1(&level_data->is_open);
        }
        level_data->is_open = 1;
        result = 0LL;
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/muqadas_potion_activity.cpp",
      "tryOpenLevel",
      252);
    v5 = common::milog::MiLogStream::operator<<<char [76],(char *[76])0>(
           &v15,
           (const char (*)[76])"[MUQADAS_POTION] findActivityMuqadasPotionLevelExcelConfig fails, level_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = 0xFFFFFFFFLL;
  }
  if ( v16 == (char *)v2 )
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

// Line 274: range 00000000145757F4-0000000014575A11
_BOOL8 __fastcall MuqadasPotionActivity::isLevelOpen(MuqadasPotionActivity *const this, uint32_t level_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  _BOOL8 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,MuqadasPotionLevelData> >::pointer v7; // rdx
  bool *p_is_open; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,MuqadasPotionLevelData> >::_Self __y; // [rsp+18h] [rbp-A8h] BYREF
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-A0h] BYREF
  char v11[128]; // [rsp+40h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 level_id:273 64 8 8 iter:275";
  *(_QWORD *)(v2 + 16) = MuqadasPotionActivity::isLevelOpen;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = level_id;
  *(std::map<unsigned int,MuqadasPotionLevelData>::iterator *)(v2 + 64) = std::map<unsigned int,MuqadasPotionLevelData>::find(
                                                                            &this->level_data_map_,
                                                                            (const std::map<unsigned int,MuqadasPotionLevelData>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,MuqadasPotionLevelData>::end(&this->level_data_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,MuqadasPotionLevelData> >::_Self *)(v2 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/muqadas_potion_activity.cpp",
      "isLevelOpen",
      278);
    v5 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
           &v10,
           (const char (*)[47])"[MUQADAS_POTION] stage_id not found, level_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v10);
    result = 0LL;
  }
  else
  {
    v7 = std::_Rb_tree_iterator<std::pair<unsigned int const,MuqadasPotionLevelData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,MuqadasPotionLevelData> > *const)(v2 + 64));
    p_is_open = &v7->second.is_open;
    if ( *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_open & 7) >= *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(p_is_open);
    }
    result = v7->second.is_open;
  }
  if ( v11 == (char *)v2 )
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

// Line 286: range 0000000014575A12-0000000014575C21
void __cdecl MuqadasPotionActivity::onDungeonSettle(
        MuqadasPotionActivity *const this,
        DungeonScene *dungeon_scene,
        proto::DungeonSettleNotify *notify)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream v7; // [rsp+20h] [rbp-80h] BYREF
  char v8[96]; // [rsp+40h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 12 23 dungeon_context_opt:291";
  *(_QWORD *)(v3 + 16) = MuqadasPotionActivity::onDungeonSettle;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202177536;
  if ( BaseActivity::isOpening(this, 0) && !BaseActivity::isSettled(this) )
  {
    *(std::optional<MuqadasPotionDungeonContext> *)(v3 + 32) = DungeonScene::getDungeonExtraData<MuqadasPotionDungeonContext>(dungeon_scene);
    if ( !std::optional<MuqadasPotionDungeonContext>::has_value((const std::optional<MuqadasPotionDungeonContext> *const)(v3 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v7,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/muqadas_potion_activity.cpp",
        "onDungeonSettle",
        294);
      common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
        &v7,
        (const char (*)[59])"[MUQADAS_POTION] cur dungeon is not muqadas potion dungeon");
    }
    else
    {
      common::milog::MiLogStream::create(
        &v7,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/muqadas_potion_activity.cpp",
        "onDungeonSettle",
        298);
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
        &v7,
        (const char (*)[33])"[MUQADAS_POTION] dungeon settled");
    }
    common::milog::MiLogStream::~MiLogStream(&v7);
  }
  if ( v8 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 304: range 0000000014575C22-0000000014576C2F
int32_t __cdecl MuqadasPotionActivity::initEnterSceneAvatar(
        MuqadasPotionActivity *const this,
        ScenePtr *p_dest_scene_ptr,
        std::vector<std::shared_ptr<Avatar>> *enter_scene_avatar_vec,
        AvatarPtr *appear_avatar_ptr)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  MuqadasPotionDungeonContext *v10; // rax
  _QWORD *v11; // rdx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  uint32_t AvatarComp; // esi
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r14
  int v21; // r14d
  PlayerAvatarComp *v22; // r14
  common::milog::MiLogStream *v23; // r14
  std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  common::milog::MiLogStream *v25; // rax
  std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  PlayerAvatarComp *v27; // rcx
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // r14
  int v31; // r14d
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rax
  common::milog::MiLogStream *v34; // r14
  const std::shared_ptr<Avatar> *v35; // rdx
  int32_t result; // eax
  unsigned int TrialAvatarId; // [rsp+24h] [rbp-1DCh] BYREF
  unsigned int val; // [rsp+28h] [rbp-1D8h] BYREF
  int32_t ret; // [rsp+2Ch] [rbp-1D4h]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+30h] [rbp-1D0h] BYREF
  std::vector<long unsigned int>::iterator __for_begin_0; // [rsp+38h] [rbp-1C8h] BYREF
  std::vector<long unsigned int>::iterator __for_end; // [rsp+40h] [rbp-1C0h] BYREF
  const ActivityMuqadasPotionExcelConfigMgr *muqadas_potion_config_mgr; // [rsp+48h] [rbp-1B8h]
  const data::ActivityMuqadasPotionLevelExcelConfig *muqadas_potion_level_ptr; // [rsp+50h] [rbp-1B0h]
  const std::vector<unsigned int> *team_avatar_vec; // [rsp+58h] [rbp-1A8h]
  const std::vector<unsigned int> *__for_range; // [rsp+60h] [rbp-1A0h]
  const unsigned int *team_avatar_id; // [rsp+68h] [rbp-198h]
  std::vector<long unsigned int> *__for_range_0; // [rsp+70h] [rbp-190h]
  const unsigned __int64 *team_avatar_guid; // [rsp+78h] [rbp-188h]
  std::shared_ptr<Config> v52; // [rsp+80h] [rbp-180h] BYREF
  common::milog::MiLogStream v53; // [rsp+90h] [rbp-170h] BYREF
  char v54[336]; // [rsp+B0h] [rbp-150h] BYREF

  v4 = (unsigned __int64)v54;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(288LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "7 48 4 12 level_id:324 64 8 19 dungeon_context:318 96 12 23 dungeon_context_opt:311 128 16 21 du"
                        "ngeon_scene_ptr:305 160 16 20 trial_avatar_ptr:348 192 16 14 avatar_ptr:376 224 32 10 record:342";
  *(_QWORD *)(v4 + 16) = MuqadasPotionActivity::initEnterSceneAvatar;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -218959360;
  v6[536862723] = -219020288;
  v6[536862724] = -219021312;
  v6[536862725] = -219021312;
  v6[536862726] = -219021312;
  v6[536862728] = -202116109;
  std::dynamic_pointer_cast<DungeonScene,Scene>((const std::shared_ptr<Scene> *)(v4 + 128));
  if ( std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v4 + 128)) )
  {
    common::milog::MiLogStream::create(
      &v53,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/muqadas_potion_activity.cpp",
      "initEnterSceneAvatar",
      308);
    v7 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
           &v53,
           (const char (*)[52])"[MUQADAS_POTION] dungeon_scene_ptr is nullptr, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_7:
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v53);
    v8 = -1;
    goto LABEL_72;
  }
  v9 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
  *(std::optional<MuqadasPotionDungeonContext> *)(v4 + 96) = DungeonScene::getDungeonExtraData<MuqadasPotionDungeonContext>(v9);
  if ( !std::optional<MuqadasPotionDungeonContext>::has_value((const std::optional<MuqadasPotionDungeonContext> *const)(v4 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v53,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/muqadas_potion_activity.cpp",
      "initEnterSceneAvatar",
      314);
    v7 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
           &v53,
           (const char (*)[52])"[MUQADAS_POTION] dungeon context has not data, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_7;
  }
  v10 = std::optional<MuqadasPotionDungeonContext>::value((std::optional<MuqadasPotionDungeonContext> *const)(v4 + 96));
  v11 = v10;
  if ( ((unsigned __int8)v10 & 7) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&v10->activity_id + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v10 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v10->activity_id + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(v10, 8LL);
  }
  *(_QWORD *)(v4 + 64) = *v11;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->activity_id_ != *(_DWORD *)(v4 + 68) )
  {
    common::milog::MiLogStream::create(
      &v53,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/muqadas_potion_activity.cpp",
      "initEnterSceneAvatar",
      321);
    v12 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
            &v53,
            (const char (*)[53])"[MUQADAS_POTION] activity_id not match, activity_id:");
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &this->activity_id_);
    v14 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
            v13,
            (const char (*)[31])", dungeon_context.activity_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v4 + 68));
    common::milog::MiLogStream::~MiLogStream(&v53);
    v8 = -1;
    goto LABEL_72;
  }
  *(_DWORD *)(v4 + 48) = *(_DWORD *)(v4 + 64);
  if ( !MuqadasPotionActivity::isLevelOpen(this, *(_DWORD *)(v4 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v53,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/muqadas_potion_activity.cpp",
      "initEnterSceneAvatar",
      327);
    v15 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
            &v53,
            (const char (*)[43])"[MUQADAS_POTION] level not open, level_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream(&v53);
    v8 = -1;
    goto LABEL_72;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v52);
  muqadas_potion_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v52)->design_config.txt_config_mgr.activity_muqadas_potion_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v52);
  muqadas_potion_level_ptr = data::ActivityMuqadasPotionExcelConfigMgrBase::findActivityMuqadasPotionLevelExcelConfig(
                               muqadas_potion_config_mgr,
                               *(_DWORD *)(v4 + 48));
  if ( !muqadas_potion_level_ptr )
  {
    common::milog::MiLogStream::create(
      &v53,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/muqadas_potion_activity.cpp",
      "initEnterSceneAvatar",
      335);
    v16 = common::milog::MiLogStream::operator<<<char [76],(char *[76])0>(
            &v53,
            (const char (*)[76])"[MUQADAS_POTION] findActivityMuqadasPotionLevelExcelConfig fails, level_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream(&v53);
    v8 = -1;
    goto LABEL_72;
  }
  team_avatar_vec = &muqadas_potion_level_ptr->trial_avatar_list;
  ret = 0;
  proto::TrialAvatarGrantRecord::TrialAvatarGrantRecord((proto::TrialAvatarGrantRecord *const)(v4 + 224));
  proto::TrialAvatarGrantRecord::set_grant_reason((proto::TrialAvatarGrantRecord *const)(v4 + 224), 0xBu);
  if ( std::vector<unsigned long>::empty(&this->in_dungeon_avatar_guid_vec_) )
  {
    __for_range = team_avatar_vec;
    __for_begin._M_current = std::vector<unsigned int>::begin(team_avatar_vec)._M_current;
    __for_begin_0._M_current = (unsigned __int64 *)std::vector<unsigned int>::end(team_avatar_vec)._M_current;
    while ( 1 )
    {
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              &__for_begin,
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&__for_begin_0) )
        goto LABEL_42;
      team_avatar_id = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      AvatarComp = (unsigned int)Player::getAvatarComp(this->player_);
      if ( *(_BYTE *)(((unsigned __int64)team_avatar_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)team_avatar_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)team_avatar_id >> 3)
                                                                         + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      PlayerAvatarComp::createTrialAvatar((PlayerAvatarComp *const)(v4 + 160), AvatarComp, *team_avatar_id);
      if ( std::operator==<TrialAvatar>(0LL, (const std::shared_ptr<TrialAvatar> *)(v4 + 160)) )
        break;
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v22 = Player::getAvatarComp(this->player_);
      std::shared_ptr<TrialAvatar>::shared_ptr(
        (std::shared_ptr<TrialAvatar> *const)&v52,
        (const std::shared_ptr<TrialAvatar> *)(v4 + 160));
      PlayerAvatarComp::addTrialAvatar(
        (PlayerAvatarComp *const)(v4 + 192),
        (TrialAvatarPtr *)v22,
        (const proto::TrialAvatarGrantRecord *)&v52);
      LOBYTE(v22) = std::operator==<TrialAvatar>(0LL, (const std::shared_ptr<TrialAvatar> *)(v4 + 192));
      std::shared_ptr<TrialAvatar>::~shared_ptr((std::shared_ptr<TrialAvatar> *const)(v4 + 192));
      std::shared_ptr<TrialAvatar>::~shared_ptr((std::shared_ptr<TrialAvatar> *const)&v52);
      if ( (_BYTE)v22 )
      {
        common::milog::MiLogStream::create(
          &v53,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/muqadas_potion_activity.cpp",
          "initEnterSceneAvatar",
          358);
        v23 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
                &v53,
                (const char (*)[57])"[MUQADAS_POTION] addTrialAvatar failed, trial_avatar_id:");
        v24 = std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
        TrialAvatarId = TrialAvatar::getTrialAvatarId(v24);
        v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &TrialAvatarId);
        v20 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v25, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        goto LABEL_32;
      }
      v26 = std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
      __for_end._M_current = (unsigned __int64 *)Avatar::getGuid(v26);
      std::vector<unsigned long>::push_back(
        &this->in_dungeon_avatar_guid_vec_,
        (std::vector<long unsigned int>::value_type *)&__for_end);
      v21 = 1;
LABEL_40:
      std::shared_ptr<TrialAvatar>::~shared_ptr((std::shared_ptr<TrialAvatar> *const)(v4 + 160));
      if ( v21 != 1 )
        goto LABEL_42;
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    common::milog::MiLogStream::create(
      &v53,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/muqadas_potion_activity.cpp",
      "initEnterSceneAvatar",
      351);
    v18 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
            &v53,
            (const char (*)[58])"[MUQADAS_POTION] createTrialAvatar fail, trial_avatar_id:");
    v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, team_avatar_id);
    v20 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v19, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_32:
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &val);
    common::milog::MiLogStream::~MiLogStream(&v53);
    ret = -1;
    v21 = 0;
    goto LABEL_40;
  }
LABEL_42:
  if ( ret )
    goto LABEL_43;
  __for_range_0 = &this->in_dungeon_avatar_guid_vec_;
  __for_begin_0._M_current = std::vector<unsigned long>::begin(&this->in_dungeon_avatar_guid_vec_)._M_current;
  __for_end._M_current = std::vector<unsigned long>::end(__for_range_0)._M_current;
  while ( __gnu_cxx::operator!=<unsigned long *,std::vector<unsigned long>>(&__for_begin_0, &__for_end) )
  {
    team_avatar_guid = __gnu_cxx::__normal_iterator<unsigned long *,std::vector<unsigned long>>::operator*(&__for_begin_0);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v27 = Player::getAvatarComp(this->player_);
    if ( *(_BYTE *)(((unsigned __int64)team_avatar_guid >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    PlayerAvatarComp::findAvatar((const PlayerAvatarComp *const)(v4 + 192), (uint64_t)v27);
    if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v4 + 192)) )
    {
      common::milog::MiLogStream::create(
        &v53,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/muqadas_potion_activity.cpp",
        "initEnterSceneAvatar",
        379);
      v28 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
              &v53,
              (const char (*)[42])"[MUQADAS_POTION] findAvatar failed, guid:");
      v29 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v28, team_avatar_guid);
      v30 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v29, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, &val);
      common::milog::MiLogStream::~MiLogStream(&v53);
      ret = -1;
      v31 = 0;
    }
    else
    {
      std::vector<std::shared_ptr<Avatar>>::push_back(
        enter_scene_avatar_vec,
        (const std::vector<std::shared_ptr<Avatar>>::value_type *)(v4 + 192));
      if ( std::operator==<Avatar>(0LL, appear_avatar_ptr) )
      {
        v32 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
        if ( Creature::getLifeState(v32) == LIFE_ALIVE )
          std::shared_ptr<Avatar>::operator=(appear_avatar_ptr, (const std::shared_ptr<Avatar> *)(v4 + 192));
      }
      v31 = 1;
    }
    std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v4 + 192));
    if ( v31 != 1 )
      break;
    __gnu_cxx::__normal_iterator<unsigned long *,std::vector<unsigned long>>::operator++(&__for_begin_0);
  }
  if ( ret )
  {
LABEL_43:
    MuqadasPotionActivity::recallDungeonAvatars(this);
    v8 = ret;
  }
  else
  {
    if ( std::operator==<Avatar>(0LL, appear_avatar_ptr) )
    {
      if ( !std::vector<std::shared_ptr<Avatar>>::size(enter_scene_avatar_vec) )
      {
        common::milog::MiLogStream::create(
          &v53,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/muqadas_potion_activity.cpp",
          "initEnterSceneAvatar",
          401);
        v34 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
                &v53,
                (const char (*)[63])"[MUQADAS_POTION] enter_scene_avatar_vec size less than 1, uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, &val);
        common::milog::MiLogStream::~MiLogStream(&v53);
        v8 = -1;
        goto LABEL_71;
      }
      v35 = std::vector<std::shared_ptr<Avatar>>::operator[](enter_scene_avatar_vec, 0LL);
      std::shared_ptr<Avatar>::operator=(appear_avatar_ptr, v35);
    }
    v8 = 0;
  }
LABEL_71:
  proto::TrialAvatarGrantRecord::~TrialAvatarGrantRecord((proto::TrialAvatarGrantRecord *const)(v4 + 224));
LABEL_72:
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v4 + 128));
  result = v8;
  if ( v54 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 411: range 0000000014576C30-0000000014576E7C
void __cdecl MuqadasPotionActivity::recallDungeonAvatars(MuqadasPotionActivity *const this)
{
  common::milog::MiLogStream *v1; // rax
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream *v3; // rbx
  PlayerAvatarComp *AvatarComp; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rbx
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-30h] BYREF

  if ( !std::vector<unsigned long>::empty(&this->in_dungeon_avatar_guid_vec_) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/muqadas_potion_activity.cpp",
      "recallDungeonAvatars",
      416);
    v1 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
           &v9,
           (const char (*)[39])"[MUQADAS_POTION] recallDungeonAvatars:");
    v2 = common::milog::MiLogStream::operator<<<unsigned long>(v1, &this->in_dungeon_avatar_guid_vec_);
    v3 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v2, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &val);
    common::milog::MiLogStream::~MiLogStream(&v9);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    AvatarComp = Player::getAvatarComp(this->player_);
    if ( PlayerAvatarComp::delInformalAvatarBatchAndReplaceByAvatarTeam(AvatarComp, &this->in_dungeon_avatar_guid_vec_) )
    {
      common::milog::MiLogStream::create(
        &v9,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/muqadas_potion_activity.cpp",
        "recallDungeonAvatars",
        419);
      v5 = common::milog::MiLogStream::operator<<<char [88],(char *[88])0>(
             &v9,
             (const char (*)[88])"[MUQADAS_POTION] delInformalAvatarBatchAndReplaceByAvatarTeam failed, avatar_guid_vec_:");
      v6 = common::milog::MiLogStream::operator<<<unsigned long>(v5, &this->in_dungeon_avatar_guid_vec_);
      v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v6, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
      common::milog::MiLogStream::~MiLogStream(&v9);
    }
    std::vector<unsigned long>::clear(&this->in_dungeon_avatar_guid_vec_);
  }
};

// Line 425: range 0000000014576E7E-000000001457719E
void __cdecl MuqadasPotionActivity::registerObserver(MuqadasPotionActivity *const this)
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
  *(_QWORD *)(v1 + 8) = "2 32 16 12 this_ptr:426 64 16 12 this_wtr:427";
  *(_QWORD *)(v1 + 16) = MuqadasPotionActivity::registerObserver;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  std::enable_shared_from_this<BaseActivity>::shared_from_this(&v6);
  std::dynamic_pointer_cast<MuqadasPotionActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)(v1 + 32));
  std::shared_ptr<BaseActivity>::~shared_ptr((std::shared_ptr<BaseActivity> *const)&v6);
  std::weak_ptr<MuqadasPotionActivity>::weak_ptr<MuqadasPotionActivity,void>(
    (std::weak_ptr<MuqadasPotionActivity> *const)(v1 + 64),
    (const std::shared_ptr<MuqadasPotionActivity> *)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  EventComp = Player::getEventComp(this->player_);
  std::weak_ptr<MuqadasPotionActivity>::weak_ptr(
    (std::weak_ptr<MuqadasPotionActivity> *const)&v6,
    (const std::weak_ptr<MuqadasPotionActivity> *)(v1 + 64));
  PlayerEventComp::tryRegisterObserver<MuqadasPotionActivity,LeaveSceneEvent>(
    EventComp,
    (std::weak_ptr<MuqadasPotionActivity> *)&v6,
    (void (*)(MuqadasPotionActivity *, const LeaveSceneEvent *))MuqadasPotionActivity::onLeaveSceneEvent,
    0LL);
  std::weak_ptr<MuqadasPotionActivity>::~weak_ptr((std::weak_ptr<MuqadasPotionActivity> *const)&v6);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  cb_ptr = Player::getEventComp(this->player_);
  std::weak_ptr<MuqadasPotionActivity>::weak_ptr(
    (std::weak_ptr<MuqadasPotionActivity> *const)&v6,
    (const std::weak_ptr<MuqadasPotionActivity> *)(v1 + 64));
  PlayerEventComp::tryRegisterObserver<MuqadasPotionActivity,GalleryMuqadasPotionSettleEvent>(
    cb_ptr,
    (std::weak_ptr<MuqadasPotionActivity> *)&v6,
    (void (*)(MuqadasPotionActivity *, const GalleryMuqadasPotionSettleEvent *))MuqadasPotionActivity::onGalleryMuqadasPotionSettleEvent,
    0LL);
  std::weak_ptr<MuqadasPotionActivity>::~weak_ptr((std::weak_ptr<MuqadasPotionActivity> *const)&v6);
  std::weak_ptr<MuqadasPotionActivity>::~weak_ptr((std::weak_ptr<MuqadasPotionActivity> *const)(v1 + 64));
  std::shared_ptr<MuqadasPotionActivity>::~shared_ptr((std::shared_ptr<MuqadasPotionActivity> *const)(v1 + 32));
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

// Line 433: range 00000000145771A0-0000000014577574
void __cdecl MuqadasPotionActivity::onLeaveSceneEvent(MuqadasPotionActivity *const this, const LeaveSceneEvent *event)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  unsigned int val; // [rsp+1Ch] [rbp-D4h] BYREF
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-D0h] BYREF
  char v12[176]; // [rsp+40h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 12 15 context_opt:449 64 16 17 cur_scene_ptr:434 96 16 21 dungeon_scene_ptr:440";
  *(_QWORD *)(v2 + 16) = MuqadasPotionActivity::onLeaveSceneEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219020288;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 64));
  if ( !std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 64)) )
  {
    std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    toPtr<DungeonScene,Scene>((Scene *)(v2 + 96));
    if ( !std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v2 + 96)) )
    {
      v5 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      if ( DungeonScene::getDungeonType(v5) == DUNGEON_MUQADAS_POTION )
      {
        common::milog::MiLogStream::create(
          &v11,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/muqadas_potion_activity.cpp",
          "onLeaveSceneEvent",
          448);
        v6 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
               &v11,
               (const char (*)[46])"[MUQADAS_POTION] onLeaveSceneEvent, scene_id:");
        v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &event->scene_id);
        v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v7, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
        common::milog::MiLogStream::~MiLogStream(&v11);
        v9 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        *(std::optional<MuqadasPotionDungeonContext> *)(v2 + 32) = DungeonScene::getDungeonExtraData<MuqadasPotionDungeonContext>(v9);
        if ( !std::optional<MuqadasPotionDungeonContext>::has_value((const std::optional<MuqadasPotionDungeonContext> *const)(v2 + 32)) )
        {
          common::milog::MiLogStream::create(
            &v11,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/activity/muqadas_potion_activity.cpp",
            "onLeaveSceneEvent",
            452);
          common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
            &v11,
            (const char (*)[40])"[MUQADAS_POTION] dungeon has no context");
          common::milog::MiLogStream::~MiLogStream(&v11);
        }
        else
        {
          MuqadasPotionActivity::recallDungeonAvatars(this);
        }
      }
    }
    std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 96));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 64));
  if ( v12 == (char *)v2 )
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

// Line 460: range 0000000014577576-00000000145786E2
// local variable allocation has failed, the output may be wrong!
void __cdecl MuqadasPotionActivity::onGalleryMuqadasPotionSettleEvent(
        MuqadasPotionActivity *const this,
        const GalleryMuqadasPotionSettleEvent *event)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int v5; // ecx
  char v6; // al
  common::milog::MiLogStream *v7; // rax
  uint32_t v8; // ecx
  uint32_t *v9; // rdx
  uint32_t v10; // ecx
  PlayerEventComp *EventComp; // r14
  std::string::pointer WatcherComp; // rdi
  uint32_t v13; // ecx
  std::string::pointer v14; // rdi
  uint32_t v15; // ecx
  ActivityMuqadasPotionExcelConfigMgr *p_activity_muqadas_potion_mgr; // rcx
  common::milog::MiLogStream *v17; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMuqadasGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyMuqadasGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyMuqadasGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyMuqadasGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyMuqadasGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyMuqadasGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyMuqadasGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rcx
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v26; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  common::milog::MiLogStream *v28; // rax
  uint32_t AvatarComp; // ecx
  std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // r14
  std::__shared_ptr_access<proto_log::PlayerLogBodyMuqadasGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rax
  proto_log::AvatarLog *v32; // rax
  Player *v33; // r14
  std::string eventa; // [rsp+0h] [rbp-1C0h] OVERLAPPED BYREF
  MuqadasPotionLevelData *level_data; // [rsp+20h] [rbp-1A0h]
  const data::ActivityMuqadasPotionLevelExcelConfig *level_config_ptr; // [rsp+28h] [rbp-198h]
  const std::vector<unsigned int> *__for_range; // [rsp+30h] [rbp-190h]
  const data::TrialAvatarExcelConfig *trial_avatar_config_ptr; // [rsp+38h] [rbp-188h]
  std::shared_ptr<google::protobuf::Message> v39; // [rsp+40h] [rbp-180h] BYREF
  common::milog::MiLogStream v40; // [rsp+50h] [rbp-170h] BYREF
  char v41[336]; // [rsp+70h] [rbp-150h] BYREF

  eventa._M_string_length = (std::string::size_type)this;
  eventa._M_dataplus._M_p = (std::string::pointer)event;
  v2 = (unsigned __int64)v41;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 1 10 holder:499 64 4 19 trial_avatar_id:508 80 8 8 iter:466 112 16 13 event_ptr:487 144 16 "
                        "11 log_ptr:500 176 16 20 trial_avatar_ptr:516 208 40 10 notify:474";
  *(_QWORD *)(v2 + 16) = MuqadasPotionActivity::onGalleryMuqadasPotionSettleEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = 61956;
  v4[536862722] = -234881024;
  v4[536862723] = 62194;
  v4[536862724] = 62194;
  v4[536862725] = 62194;
  v4[536862726] = 62194;
  v4[536862727] = -218103808;
  v4[536862728] = -202116109;
  if ( !BaseActivity::isOpening((const BaseActivity *const)eventa._M_string_length, 0)
    || BaseActivity::isSettled((const BaseActivity *const)eventa._M_string_length) )
  {
    goto LABEL_11;
  }
  if ( *(_BYTE *)(((unsigned __int64)(eventa._M_dataplus._M_p + 24) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)(eventa._M_dataplus._M_p + 24) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  v5 = *((_DWORD *)eventa._M_dataplus._M_p + 6);
  if ( *(_BYTE *)(((eventa._M_string_length + 32) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((eventa._M_string_length + 32) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( v5 != *(_DWORD *)(eventa._M_string_length + 32) )
LABEL_11:
    v6 = 1;
  else
    v6 = 0;
  if ( !v6 )
  {
    *(std::map<unsigned int,MuqadasPotionLevelData>::iterator *)(v2 + 80) = std::map<unsigned int,MuqadasPotionLevelData>::find(
                                                                              (std::map<unsigned int,MuqadasPotionLevelData> *const)(eventa._M_string_length + 936),
                                                                              (const std::map<unsigned int,MuqadasPotionLevelData>::key_type *)eventa._M_dataplus._M_p
                                                                            + 7);
    *((std::map<unsigned int,MuqadasPotionLevelData>::iterator *)&eventa._anon_0._M_allocated_capacity + 1) = std::map<unsigned int,MuqadasPotionLevelData>::end((std::map<unsigned int,MuqadasPotionLevelData> *const)(eventa._M_string_length + 936));
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,MuqadasPotionLevelData> >::_Self *)(v2 + 80),
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,MuqadasPotionLevelData> >::_Self *)&eventa._anon_0._M_allocated_capacity
         + 1) )
    {
      common::milog::MiLogStream::create(
        &v40,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/muqadas_potion_activity.cpp",
        "onGalleryMuqadasPotionSettleEvent",
        469);
      v7 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
             &v40,
             (const char (*)[44])"[MUQADAS_POTION] level not found, level_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        v7,
        (const unsigned int *)eventa._M_dataplus._M_p + 7);
      common::milog::MiLogStream::~MiLogStream(&v40);
    }
    else
    {
      level_data = &std::_Rb_tree_iterator<std::pair<unsigned int const,MuqadasPotionLevelData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,MuqadasPotionLevelData> > *const)(v2 + 80))->second;
      proto::MuqadasPotionDungeonSettleNotify::MuqadasPotionDungeonSettleNotify((proto::MuqadasPotionDungeonSettleNotify *const)(v2 + 208));
      if ( *(_BYTE *)(((unsigned __int64)(eventa._M_dataplus._M_p + 28) >> 3) + 0x7FFF8000) != 0
        && (char)(((LOBYTE(eventa._M_dataplus._M_p) + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(eventa._M_dataplus._M_p + 28) >> 3)
                                                                                + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::MuqadasPotionDungeonSettleNotify::set_level_id(
        (proto::MuqadasPotionDungeonSettleNotify *const)(v2 + 208),
        *((_DWORD *)eventa._M_dataplus._M_p + 7));
      if ( *(_BYTE *)(((unsigned __int64)(eventa._M_dataplus._M_p + 32) >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)(eventa._M_dataplus._M_p + 32) >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      proto::MuqadasPotionDungeonSettleNotify::set_final_score(
        (proto::MuqadasPotionDungeonSettleNotify *const)(v2 + 208),
        *((_DWORD *)eventa._M_dataplus._M_p + 8));
      if ( *(_BYTE *)(((unsigned __int64)(eventa._M_dataplus._M_p + 36) >> 3) + 0x7FFF8000) != 0
        && (char)(((LOBYTE(eventa._M_dataplus._M_p) + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(eventa._M_dataplus._M_p + 36) >> 3)
                                                                                + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::MuqadasPotionDungeonSettleNotify::set_capture_weakness_count(
        (proto::MuqadasPotionDungeonSettleNotify *const)(v2 + 208),
        *((_DWORD *)eventa._M_dataplus._M_p + 9));
      if ( *(_BYTE *)(((unsigned __int64)(eventa._M_dataplus._M_p + 32) >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)(eventa._M_dataplus._M_p + 32) >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      v8 = *((_DWORD *)eventa._M_dataplus._M_p + 8);
      if ( *(_BYTE *)(((unsigned __int64)&level_data->max_score >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)level_data + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_data->max_score >> 3)
                                                                 + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::MuqadasPotionDungeonSettleNotify::set_is_new_record(
        (proto::MuqadasPotionDungeonSettleNotify *const)(v2 + 208),
        v8 > level_data->max_score);
      if ( *(char *)(((unsigned __int64)(eventa._M_dataplus._M_p + 40) >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(eventa._M_dataplus._M_p + 40);
      proto::MuqadasPotionDungeonSettleNotify::set_is_success(
        (proto::MuqadasPotionDungeonSettleNotify *const)(v2 + 208),
        eventa._M_dataplus._M_p[40]);
      if ( *(_BYTE *)(((eventa._M_string_length + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::sendProto(*(Player *const *)(eventa._M_string_length + 24), (const google::protobuf::Message *)(v2 + 208));
      v9 = (uint32_t *)std::max<unsigned int>(&level_data->max_score, (const unsigned int *)eventa._M_dataplus._M_p + 8);
      if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v10 = *v9;
      if ( *(_BYTE *)(((unsigned __int64)&level_data->max_score >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)level_data + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_data->max_score >> 3)
                                                                 + 0x7FFF8000) )
      {
        __asan_report_store4(&level_data->max_score);
      }
      level_data->max_score = v10;
      BaseActivity::notifyClientData((BaseActivity *const)eventa._M_string_length, 0);
      common::tools::perf::make_shared<MuqadasPotionLevelScoreEvent,unsigned int const&,unsigned int const&>(
        (const unsigned int *)(v2 + 112),
        (const unsigned int *)eventa._M_dataplus._M_p + 7,
        (const unsigned int *)eventa._M_dataplus._M_p + 8,
        (const unsigned int *)eventa._M_dataplus._M_p + 7);
      if ( *(_BYTE *)(((eventa._M_string_length + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      EventComp = Player::getEventComp(*(Player *const *)(eventa._M_string_length + 24));
      std::shared_ptr<BaseEvent>::shared_ptr<MuqadasPotionLevelScoreEvent,void>(
        (std::shared_ptr<BaseEvent> *const)(v2 + 176),
        (const std::shared_ptr<MuqadasPotionLevelScoreEvent> *)(v2 + 112));
      PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)(v2 + 176));
      std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v2 + 176));
      if ( *(_BYTE *)(((eventa._M_string_length + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      WatcherComp = (std::string::pointer)Player::getWatcherComp(*(Player *const *)(eventa._M_string_length + 24));
      if ( *(_BYTE *)(((unsigned __int64)(eventa._M_dataplus._M_p + 36) >> 3) + 0x7FFF8000) != 0
        && (char)(((LOBYTE(eventa._M_dataplus._M_p) + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(eventa._M_dataplus._M_p + 36) >> 3)
                                                                                + 0x7FFF8000) )
      {
        WatcherComp = eventa._M_dataplus._M_p + 36;
        __asan_report_load4();
      }
      v13 = *((_DWORD *)eventa._M_dataplus._M_p + 9);
      if ( *(_BYTE *)(((unsigned __int64)(eventa._M_dataplus._M_p + 28) >> 3) + 0x7FFF8000) != 0
        && (char)(((LOBYTE(eventa._M_dataplus._M_p) + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(eventa._M_dataplus._M_p + 28) >> 3)
                                                                                + 0x7FFF8000) )
      {
        WatcherComp = eventa._M_dataplus._M_p + 28;
        __asan_report_load4();
      }
      PlayerWatcherComp::triggerMuqadasLevelWeaknessEvent(
        (PlayerWatcherComp *const)WatcherComp,
        *((_DWORD *)eventa._M_dataplus._M_p + 7),
        v13);
      if ( *(_BYTE *)(((eventa._M_string_length + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v14 = (std::string::pointer)Player::getWatcherComp(*(Player *const *)(eventa._M_string_length + 24));
      if ( *(_BYTE *)(((unsigned __int64)(eventa._M_dataplus._M_p + 48) >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)(eventa._M_dataplus._M_p + 48) >> 3) + 0x7FFF8000) <= 3 )
      {
        v14 = eventa._M_dataplus._M_p + 48;
        __asan_report_load4();
      }
      v15 = *((_DWORD *)eventa._M_dataplus._M_p + 12);
      if ( *(_BYTE *)(((unsigned __int64)(eventa._M_dataplus._M_p + 28) >> 3) + 0x7FFF8000) != 0
        && (char)(((LOBYTE(eventa._M_dataplus._M_p) + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(eventa._M_dataplus._M_p + 28) >> 3)
                                                                                + 0x7FFF8000) )
      {
        v14 = eventa._M_dataplus._M_p + 28;
        __asan_report_load4();
      }
      PlayerWatcherComp::triggerMuqadasLevelOnceWeaknessEvent(
        (PlayerWatcherComp *const)v14,
        *((_DWORD *)eventa._M_dataplus._M_p + 7),
        v15);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v2 + 176));
      p_activity_muqadas_potion_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 176))->design_config.txt_config_mgr.activity_muqadas_potion_mgr;
      if ( *(_BYTE *)(((unsigned __int64)(eventa._M_dataplus._M_p + 28) >> 3) + 0x7FFF8000) != 0
        && (char)(((LOBYTE(eventa._M_dataplus._M_p) + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(eventa._M_dataplus._M_p + 28) >> 3)
                                                                                + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      level_config_ptr = data::ActivityMuqadasPotionExcelConfigMgrBase::findActivityMuqadasPotionLevelExcelConfig(
                           p_activity_muqadas_potion_mgr,
                           *((_DWORD *)eventa._M_dataplus._M_p + 7));
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 176));
      if ( level_config_ptr )
      {
        if ( *(_BYTE *)(((eventa._M_string_length + 24) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        BasicComp = Player::getBasicComp(*(Player *const *)(eventa._M_string_length + 24));
        PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v40, BasicComp);
        StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 0xE4Cu, eventa);
        std::string::~string(&v40);
        common::tools::perf::make_shared<proto_log::PlayerLogBodyMuqadasGallerySettle>();
        v19 = std::__shared_ptr_access<proto_log::PlayerLogBodyMuqadasGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMuqadasGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
        if ( *(_BYTE *)(((unsigned __int64)(eventa._M_dataplus._M_p + 28) >> 3) + 0x7FFF8000) != 0
          && (char)(((LOBYTE(eventa._M_dataplus._M_p) + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(eventa._M_dataplus._M_p + 28) >> 3)
                                                                                  + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto_log::PlayerLogBodyMuqadasGallerySettle::set_level_id(v19, *((_DWORD *)eventa._M_dataplus._M_p + 7));
        v20 = std::__shared_ptr_access<proto_log::PlayerLogBodyMuqadasGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMuqadasGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
        if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->dungeon_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&level_config_ptr->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        proto_log::PlayerLogBodyMuqadasGallerySettle::set_dungeon_id(v20, level_config_ptr->dungeon_id);
        v21 = std::__shared_ptr_access<proto_log::PlayerLogBodyMuqadasGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMuqadasGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
        if ( *(_BYTE *)(((unsigned __int64)(eventa._M_dataplus._M_p + 32) >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)(eventa._M_dataplus._M_p + 32) >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        proto_log::PlayerLogBodyMuqadasGallerySettle::set_score(v21, *((_DWORD *)eventa._M_dataplus._M_p + 8));
        v22 = std::__shared_ptr_access<proto_log::PlayerLogBodyMuqadasGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMuqadasGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
        if ( *(_BYTE *)(((unsigned __int64)(eventa._M_dataplus._M_p + 52) >> 3) + 0x7FFF8000) != 0
          && (char)(((LOBYTE(eventa._M_dataplus._M_p) + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(eventa._M_dataplus._M_p + 52) >> 3)
                                                                                  + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto_log::PlayerLogBodyMuqadasGallerySettle::set_actual_use_time(
          v22,
          *((_DWORD *)eventa._M_dataplus._M_p + 13));
        v23 = std::__shared_ptr_access<proto_log::PlayerLogBodyMuqadasGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMuqadasGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
        if ( *(_BYTE *)(((unsigned __int64)(eventa._M_dataplus._M_p + 44) >> 3) + 0x7FFF8000) != 0
          && (char)(((LOBYTE(eventa._M_dataplus._M_p) + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(eventa._M_dataplus._M_p + 44) >> 3)
                                                                                  + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto_log::PlayerLogBodyMuqadasGallerySettle::set_pause_times(v23, *((_DWORD *)eventa._M_dataplus._M_p + 11));
        v24 = std::__shared_ptr_access<proto_log::PlayerLogBodyMuqadasGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMuqadasGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
        if ( *(_BYTE *)(((unsigned __int64)(eventa._M_dataplus._M_p + 36) >> 3) + 0x7FFF8000) != 0
          && (char)(((LOBYTE(eventa._M_dataplus._M_p) + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(eventa._M_dataplus._M_p + 36) >> 3)
                                                                                  + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto_log::PlayerLogBodyMuqadasGallerySettle::set_capture_weakness_count(
          v24,
          *((_DWORD *)eventa._M_dataplus._M_p + 9));
        v25 = std::__shared_ptr_access<proto_log::PlayerLogBodyMuqadasGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMuqadasGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
        if ( *(_BYTE *)(((unsigned __int64)(eventa._M_dataplus._M_p + 48) >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)(eventa._M_dataplus._M_p + 48) >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        proto_log::PlayerLogBodyMuqadasGallerySettle::set_once_max_weakness_count(
          v25,
          *((_DWORD *)eventa._M_dataplus._M_p + 12));
        __for_range = &level_config_ptr->trial_avatar_list;
        *(std::vector<unsigned int>::const_iterator *)eventa._anon_0._M_local_buf = std::vector<unsigned int>::begin(&level_config_ptr->trial_avatar_list);
        *((std::vector<unsigned int>::const_iterator *)&eventa._anon_0._M_allocated_capacity + 1) = std::vector<unsigned int>::end(__for_range);
        while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&eventa._anon_0,
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&eventa._anon_0._M_allocated_capacity
                + 1) )
        {
          v26 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&eventa._anon_0);
          if ( *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v26 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          *(_DWORD *)(v2 + 64) = *v26;
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v39);
          v27 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v39);
          trial_avatar_config_ptr = data::TrialAvatarExcelConfigMgrBase::findTrialAvatarExcelConfig(
                                      &v27->design_config.txt_config_mgr.trial_avatar_config_mgr,
                                      *(_DWORD *)(v2 + 64));
          std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v39);
          if ( trial_avatar_config_ptr )
          {
            if ( *(_BYTE *)(((eventa._M_string_length + 24) >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            AvatarComp = (unsigned int)Player::getAvatarComp(*(Player *const *)(eventa._M_string_length + 24));
            if ( *(_BYTE *)(((unsigned __int64)&trial_avatar_config_ptr->avatar.avatar_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&trial_avatar_config_ptr->avatar.avatar_id >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            PlayerAvatarComp::findTrialAvatarByAvatarId((const PlayerAvatarComp *const)(v2 + 176), AvatarComp);
            if ( std::operator!=<TrialAvatar>(0LL, (const std::shared_ptr<TrialAvatar> *)(v2 + 176)) )
            {
              v30 = std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 176));
              v31 = std::__shared_ptr_access<proto_log::PlayerLogBodyMuqadasGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMuqadasGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
              v32 = proto_log::PlayerLogBodyMuqadasGallerySettle::add_avatar_list(v31);
              Avatar::getAvatarLog(v30, v32);
            }
            std::shared_ptr<TrialAvatar>::~shared_ptr((std::shared_ptr<TrialAvatar> *const)(v2 + 176));
          }
          else
          {
            common::milog::MiLogStream::create(
              &v40,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/muqadas_potion_activity.cpp",
              "onGalleryMuqadasPotionSettleEvent",
              513);
            v28 = common::milog::MiLogStream::operator<<<char [69],(char *[69])0>(
                    &v40,
                    (const char (*)[69])"[MUQADAS_POTION] findTrialAvatarExcelConfig failed, trial_avatar_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, (const unsigned int *)(v2 + 64));
            common::milog::MiLogStream::~MiLogStream(&v40);
          }
          __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&eventa._anon_0);
        }
        if ( *(_BYTE *)(((eventa._M_string_length + 24) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v33 = *(Player **)(eventa._M_string_length + 24);
        std::shared_ptr<google::protobuf::Message>::shared_ptr(
          (std::shared_ptr<google::protobuf::Message> *const)(v2 + 176),
          0LL);
        std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyMuqadasGallerySettle,void>(
          &v39,
          (const std::shared_ptr<proto_log::PlayerLogBodyMuqadasGallerySettle> *)(v2 + 144));
        Player::printStatLog(v33, &v39, (MessagePtr *)(v2 + 176), 0xEu);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v39);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)(v2 + 176));
        std::shared_ptr<proto_log::PlayerLogBodyMuqadasGallerySettle>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyMuqadasGallerySettle> *const)(v2 + 144));
        StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v40,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/muqadas_potion_activity.cpp",
          "onGalleryMuqadasPotionSettleEvent",
          496);
        v17 = common::milog::MiLogStream::operator<<<char [76],(char *[76])0>(
                &v40,
                (const char (*)[76])"[MUQADAS_POTION] findActivityMuqadasPotionLevelExcelConfig fails, level_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
          v17,
          (const unsigned int *)eventa._M_dataplus._M_p + 7);
        common::milog::MiLogStream::~MiLogStream(&v40);
      }
      std::shared_ptr<MuqadasPotionLevelScoreEvent>::~shared_ptr((std::shared_ptr<MuqadasPotionLevelScoreEvent> *const)(v2 + 112));
      proto::MuqadasPotionDungeonSettleNotify::~MuqadasPotionDungeonSettleNotify((proto::MuqadasPotionDungeonSettleNotify *const)(v2 + 208));
    }
  }
  if ( v41 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
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
};

// Line 526: range 00000000145786E4-00000000145791EE
int32_t __cdecl MuqadasPotionActivity::restartDungeon(MuqadasPotionActivity *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // r14
  int32_t v5; // r14d
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t OwnerUid; // r14d
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  ActivityMuqadasPotionExcelConfigMgr *p_activity_muqadas_potion_mgr; // rcx
  bool v13; // r14
  common::milog::MiLogStream *v14; // rax
  PlayerDungeonComp *DungeonComp; // r14
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // r14
  DungeonScene *v19; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+1Ch] [rbp-194h] BYREF
  PlayerDungeonComp *dungeon_comp; // [rsp+20h] [rbp-190h]
  const MuqadasPotionDungeonContext *dungeon_context; // [rsp+28h] [rbp-188h]
  std::tuple_element<0,std::pair<int,std::shared_ptr<DungeonScene> > >::type *ret; // [rsp+30h] [rbp-180h]
  std::tuple_element<1,std::pair<int,std::shared_ptr<DungeonScene> > >::type *dest_dungeon_scene_ptr; // [rsp+38h] [rbp-178h]
  std::shared_ptr<Config> v26; // [rsp+40h] [rbp-170h] BYREF
  std::pair<int,std::shared_ptr<DungeonScene> > __in; // [rsp+50h] [rbp-160h] BYREF
  EnterDungeonOption v28; // [rsp+70h] [rbp-140h] BYREF
  common::milog::MiLogStream v29; // [rsp+90h] [rbp-120h] BYREF
  std::map<unsigned int,unsigned int> level_config_id_map; // [rsp+B0h] [rbp-100h] BYREF
  char v31[208]; // [rsp+E0h] [rbp-D0h] BYREF

  v1 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "4 48 4 12 ret_code:541 64 8 23 new_dungeon_context:577 96 12 23 dungeon_context_opt:548 128 16 2"
                        "1 dungeon_scene_ptr:528";
  *(_QWORD *)(v1 + 16) = MuqadasPotionActivity::restartDungeon;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -218959360;
  v3[536862723] = -219020288;
  v3[536862724] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  dungeon_comp = Player::getDungeonComp(this->player_);
  PlayerDungeonComp::getCurDungeon((PlayerDungeonComp *const)(v1 + 128));
  if ( std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v1 + 128)) )
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/muqadas_potion_activity.cpp",
      "restartDungeon",
      531);
    v4 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
           &v29,
           (const char (*)[49])"[MUQADAS_POTION] dungeon_scene_ptr is null, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_9:
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
    common::milog::MiLogStream::~MiLogStream(&v29);
    v5 = -1;
    goto LABEL_44;
  }
  v6 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
  OwnerUid = Scene::getOwnerUid((const Scene *const)v6);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( OwnerUid == Player::getUid(this->player_) )
  {
    *(_DWORD *)(v1 + 48) = PlayerDungeonComp::checkRestartDungeon(dungeon_comp, DUNGEON_RESTART_REASON_DIE_RETRY);
    if ( *(_DWORD *)(v1 + 48) )
    {
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/muqadas_potion_activity.cpp",
        "restartDungeon",
        544);
      v8 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
             &v29,
             (const char (*)[50])"[MUQADAS_POTION] checkRestartDungeon failed, ret:");
      v9 = common::milog::MiLogStream::operator<<<int,(int *)0>(v8, (const int *)(v1 + 48));
      v10 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v9, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
      common::milog::MiLogStream::~MiLogStream(&v29);
      v5 = *(_DWORD *)(v1 + 48);
    }
    else
    {
      v11 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
      *(std::optional<MuqadasPotionDungeonContext> *)(v1 + 96) = DungeonScene::getDungeonExtraData<MuqadasPotionDungeonContext>(v11);
      if ( !std::optional<MuqadasPotionDungeonContext>::has_value((const std::optional<MuqadasPotionDungeonContext> *const)(v1 + 96)) )
      {
        common::milog::MiLogStream::create(
          &v29,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/muqadas_potion_activity.cpp",
          "restartDungeon",
          551);
        v4 = common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(
               &v29,
               (const char (*)[65])"[MUQADAS_POTION] cur dungeon is not muqadas_potion dungeon, uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        goto LABEL_9;
      }
      dungeon_context = std::optional<MuqadasPotionDungeonContext>::value((std::optional<MuqadasPotionDungeonContext> *const)(v1 + 96));
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v26);
      p_activity_muqadas_potion_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26)->design_config.txt_config_mgr.activity_muqadas_potion_mgr;
      if ( *(_BYTE *)(((unsigned __int64)dungeon_context >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)dungeon_context & 7) + 3) >= *(_BYTE *)(((unsigned __int64)dungeon_context >> 3)
                                                                          + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v13 = data::ActivityMuqadasPotionExcelConfigMgrBase::findActivityMuqadasPotionLevelExcelConfig(
              p_activity_muqadas_potion_mgr,
              dungeon_context->level_id) == 0LL;
      std::shared_ptr<Config>::~shared_ptr(&v26);
      if ( v13 )
      {
        common::milog::MiLogStream::create(
          &v29,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/muqadas_potion_activity.cpp",
          "restartDungeon",
          558);
        v14 = common::milog::MiLogStream::operator<<<char [91],(char *[91])0>(
                &v29,
                (const char (*)[91])"[MUQADAS_POTION] findActivityMuqadasPotionLevelExcelConfig fails, can't restart. level_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
          v14,
          (const unsigned int *)dungeon_context);
        common::milog::MiLogStream::~MiLogStream(&v29);
        v5 = -1;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        DungeonComp = Player::getDungeonComp(this->player_);
        memset(&v28, 0, sizeof(v28));
        EnterDungeonOption::EnterDungeonOption(&v28);
        memset(&level_config_id_map, 0, sizeof(level_config_id_map));
        std::map<unsigned int,unsigned int>::map(&level_config_id_map);
        PlayerDungeonComp::restartDungeon(&__in, DungeonComp, &level_config_id_map, v28);
        std::map<unsigned int,unsigned int>::~map(&level_config_id_map);
        ret = std::get<0ul,int,std::shared_ptr<DungeonScene>>(&__in);
        dest_dungeon_scene_ptr = std::get<1ul,int,std::shared_ptr<DungeonScene>>(&__in);
        if ( *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( *ret )
        {
          common::milog::MiLogStream::create(
            &v29,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/muqadas_potion_activity.cpp",
            "restartDungeon",
            566);
          v16 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                  &v29,
                  (const char (*)[45])"[MUQADAS_POTION] restart dungeo failed, ret:");
          v17 = common::milog::MiLogStream::operator<<<int,(int *)0>(v16, ret);
          v18 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v17, (const char (*)[6])" uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &val);
          common::milog::MiLogStream::~MiLogStream(&v29);
          if ( *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          v5 = *ret;
        }
        else if ( std::operator==<DungeonScene>(dest_dungeon_scene_ptr, 0LL) )
        {
          common::milog::MiLogStream::create(
            &v29,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/muqadas_potion_activity.cpp",
            "restartDungeon",
            572);
          common::milog::MiLogStream::operator<<<char [67],(char *[67])0>(
            &v29,
            (const char (*)[67])"[MUQADAS_POTION] restart dungeo failed, dest dungeon scene is null");
          common::milog::MiLogStream::~MiLogStream(&v29);
          v5 = -1;
        }
        else
        {
          *(_DWORD *)(v1 + 64) = 0;
          *(_DWORD *)(v1 + 68) = 0;
          if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          *(_DWORD *)(v1 + 68) = this->activity_id_;
          if ( *(_BYTE *)(((unsigned __int64)dungeon_context >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)dungeon_context & 7) + 3) >= *(_BYTE *)(((unsigned __int64)dungeon_context >> 3)
                                                                              + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          *(_DWORD *)(v1 + 64) = dungeon_context->level_id;
          v19 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)dest_dungeon_scene_ptr);
          DungeonScene::setDungeonExtraData<MuqadasPotionDungeonContext>(
            v19,
            (const MuqadasPotionDungeonContext *)(v1 + 64));
          v5 = 0;
        }
        std::pair<int,std::shared_ptr<DungeonScene>>::~pair(&__in);
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/muqadas_potion_activity.cpp",
      "restartDungeon",
      537);
    common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
      &v29,
      (const char (*)[53])"[MUQADAS_POTION] guest can not restartDungeon, error");
    common::milog::MiLogStream::~MiLogStream(&v29);
    v5 = -1;
  }
LABEL_44:
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v1 + 128));
  result = v5;
  if ( v31 == (char *)v1 )
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
  return result;
};

// Line 586: range 00000000145791F0-0000000014579920
int32_t __cdecl MuqadasPotionActivity::onMuqadasPotionCaptureWeaknessReq(
        MuqadasPotionActivity *const this,
        const proto::MuqadasPotionCaptureWeaknessReq *req,
        proto::MuqadasPotionCaptureWeaknessRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  ActivityMuqadasPotionExcelConfigMgr *p_activity_muqadas_potion_mgr; // r14
  uint32_t v7; // eax
  common::milog::MiLogStream *v8; // rbx
  int32_t v9; // r14d
  Scene *v10; // rax
  uint32_t GalleryComp; // ecx
  BaseGallery *v12; // rax
  common::milog::MiLogStream *v14; // r14
  ActivityMuqadasPotionExcelConfigMgr *v15; // rcx
  common::milog::MiLogStream *v16; // rax
  uint32_t v17; // ecx
  common::milog::MiLogStream *v18; // r14
  MuqadasPotionGallery *v19; // r14
  uint32_t v20; // eax
  int32_t result; // eax
  unsigned int val; // [rsp+28h] [rbp-D8h] BYREF
  const data::ActivityMuqadasPotionLevelExcelConfig *level_config_ptr; // [rsp+30h] [rbp-D0h]
  const data::ActivityMuqadasPotionExcelConfig *base_config_ptr; // [rsp+38h] [rbp-C8h]
  std::shared_ptr<Config> v26; // [rsp+40h] [rbp-C0h] BYREF
  common::milog::MiLogStream v27; // [rsp+50h] [rbp-B0h] BYREF
  char v28[144]; // [rsp+70h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 13 scene_ptr:593 64 16 15 gallery_ptr:599";
  *(_QWORD *)(v3 + 16) = MuqadasPotionActivity::onMuqadasPotionCaptureWeaknessReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -202178560;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v26);
  p_activity_muqadas_potion_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26)->design_config.txt_config_mgr.activity_muqadas_potion_mgr;
  v7 = proto::MuqadasPotionCaptureWeaknessReq::level_id(req);
  level_config_ptr = data::ActivityMuqadasPotionExcelConfigMgrBase::findActivityMuqadasPotionLevelExcelConfig(
                       p_activity_muqadas_potion_mgr,
                       v7);
  std::shared_ptr<Config>::~shared_ptr(&v26);
  if ( level_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v3 + 32));
    if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 32), 0LL) )
    {
      v9 = 103;
    }
    else
    {
      v10 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      GalleryComp = (unsigned int)Scene::getGalleryComp(v10);
      if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->gallery_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)level_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_config_ptr->gallery_id >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      SceneGalleryComp::findGallery<MuqadasPotionGallery>((SceneGalleryComp *const)(v3 + 64), GalleryComp);
      if ( std::operator==<MuqadasPotionGallery>(0LL, (const std::shared_ptr<MuqadasPotionGallery> *)(v3 + 64))
        || (v12 = (BaseGallery *)std::__shared_ptr_access<MuqadasPotionGallery,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MuqadasPotionGallery,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64)),
            !BaseGallery::isStart(v12)) )
      {
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/muqadas_potion_activity.cpp",
          "onMuqadasPotionCaptureWeaknessReq",
          602);
        v14 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                &v27,
                (const char (*)[47])"[MUQADAS_POTION] find gallery fails, level_id:");
        val = proto::MuqadasPotionCaptureWeaknessReq::level_id(req);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &val);
        common::milog::MiLogStream::~MiLogStream(&v27);
        v9 = -1;
      }
      else
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v26);
        v15 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26)->design_config.txt_config_mgr.activity_muqadas_potion_mgr;
        if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        base_config_ptr = data::ActivityMuqadasPotionExcelConfigMgrBase::findActivityMuqadasPotionExcelConfig(
                            v15,
                            this->activity_id_);
        std::shared_ptr<Config>::~shared_ptr(&v26);
        if ( base_config_ptr )
        {
          v17 = proto::MuqadasPotionCaptureWeaknessReq::capture_weakness_count(req);
          if ( *(_BYTE *)(((unsigned __int64)&base_config_ptr->once_capture_limit >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)base_config_ptr + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&base_config_ptr->once_capture_limit >> 3)
                                                                           + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          if ( v17 <= base_config_ptr->once_capture_limit )
          {
            v19 = std::__shared_ptr_access<MuqadasPotionGallery,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MuqadasPotionGallery,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
            v20 = proto::MuqadasPotionCaptureWeaknessReq::capture_weakness_count(req);
            if ( MuqadasPotionGallery::addCaptureWeakness(v19, v20) )
            {
              common::milog::MiLogStream::create(
                &v27,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/player/activity/muqadas_potion_activity.cpp",
                "onMuqadasPotionCaptureWeaknessReq",
                622);
              common::milog::MiLogStream::operator<<<char [71],(char *[71])0>(
                &v27,
                (const char (*)[71])"[MUQADAS_POTION] gallery_ptr->onMuqadasPotionCaptureWeaknessReq fails.");
              common::milog::MiLogStream::~MiLogStream(&v27);
              v9 = -1;
            }
            else
            {
              v9 = 0;
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v27,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/muqadas_potion_activity.cpp",
              "onMuqadasPotionCaptureWeaknessReq",
              615);
            v18 = common::milog::MiLogStream::operator<<<char [93],(char *[93])0>(
                    &v27,
                    (const char (*)[93])"[MUQADAS_POTION] findActivityMuqad capture_weakness_count too large, capture_weakness_count:");
            val = proto::MuqadasPotionCaptureWeaknessReq::capture_weakness_count(req);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &val);
            common::milog::MiLogStream::~MiLogStream(&v27);
            v9 = -1;
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v27,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/muqadas_potion_activity.cpp",
            "onMuqadasPotionCaptureWeaknessReq",
            609);
          v16 = common::milog::MiLogStream::operator<<<char [74],(char *[74])0>(
                  &v27,
                  (const char (*)[74])"[MUQADAS_POTION] findActivityMuqadasPotionExcelConfig fails, activity_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &this->activity_id_);
          common::milog::MiLogStream::~MiLogStream(&v27);
          v9 = -1;
        }
      }
      std::shared_ptr<MuqadasPotionGallery>::~shared_ptr((std::shared_ptr<MuqadasPotionGallery> *const)(v3 + 64));
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 32));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/muqadas_potion_activity.cpp",
      "onMuqadasPotionCaptureWeaknessReq",
      590);
    v8 = common::milog::MiLogStream::operator<<<char [76],(char *[76])0>(
           &v27,
           (const char (*)[76])"[MUQADAS_POTION] findActivityMuqadasPotionLevelExcelConfig fails, level_id:");
    val = proto::MuqadasPotionCaptureWeaknessReq::level_id(req);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream(&v27);
    v9 = -1;
  }
  result = v9;
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
