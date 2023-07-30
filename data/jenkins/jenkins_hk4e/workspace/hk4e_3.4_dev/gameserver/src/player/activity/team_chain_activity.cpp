// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/team_chain_activity.cpp

// Line 27: range 0000000018006510-0000000018006611
int32_t __cdecl TeamChainStageData::fromBin(TeamChainStageData *const this, const proto::TeamChainStageBin *proto)
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
  const proto::TeamChainStageBin *protoa; // [rsp+0h] [rbp-10h]

  protoa = proto;
  v2 = proto::TeamChainStageBin::stage_id(proto);
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  LOBYTE(proto) = v3 != 0;
  v4 = (v3 != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7) + 3) >= v3);
  if ( (_BYTE)v4 )
    __asan_report_store4(this, proto, v4);
  this->stage_id = v2;
  is_open = proto::TeamChainStageBin::is_open(protoa);
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000);
  LOBYTE(proto) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this + 4) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->is_open, proto, v7);
  this->is_open = is_open;
  v8 = proto::TeamChainStageBin::best_score(protoa);
  v9 = *(_BYTE *)(((unsigned __int64)&this->best_score >> 3) + 0x7FFF8000);
  LOBYTE(proto) = v9 != 0;
  v10 = (v9 != 0) & (unsigned __int8)((char)((((_BYTE)this + 8) & 7) + 3) >= v9);
  if ( (_BYTE)v10 )
    __asan_report_store4(&this->best_score, proto, v10);
  this->best_score = v8;
  return 0;
};

// Line 35: range 0000000018006612-0000000018006714
int32_t __cdecl TeamChainStageData::toBin(const TeamChainStageData *const this, proto::TeamChainStageBin *proto)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  proto::TeamChainStageBin::set_stage_id(proto, this->stage_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_open);
  }
  proto::TeamChainStageBin::set_is_open(proto, this->is_open);
  if ( *(_BYTE *)(((unsigned __int64)&this->best_score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->best_score >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->best_score);
  }
  proto::TeamChainStageBin::set_best_score(proto, this->best_score);
  return 0;
};

// Line 43: range 0000000018006716-0000000018006814
void __cdecl TeamChainStageData::toClient(const TeamChainStageData *const this, proto::TeamChainStageData *proto)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  proto::TeamChainStageData::set_stage_id(proto, this->stage_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_open);
  }
  proto::TeamChainStageData::set_is_open(proto, this->is_open);
  if ( *(_BYTE *)(((unsigned __int64)&this->best_score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->best_score >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->best_score);
  }
  proto::TeamChainStageData::set_best_score(proto, this->best_score);
};

// Line 50: range 0000000018006816-0000000018006ADD
int32_t __cdecl TeamChainActivity::fromScheduleBin(
        TeamChainActivity *const this,
        const proto::ActivityScheduleBin *bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  TeamChainStageData *v5; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,TeamChainStageData> >,bool> v6; // rax
  common::milog::MiLogStream *v7; // rax
  int32_t result; // eax
  const google::protobuf::RepeatedField<long unsigned int> *v9; // rax
  std::vector<long unsigned int> *p_in_dungeon_avatar_guid_vec; // rsi
  unsigned int v11; // eax
  __int64 v12; // rdx
  char v13; // al
  google::protobuf::RepeatedPtrField<proto::TeamChainStageBin>::const_iterator __for_begin; // [rsp+18h] [rbp-A8h] BYREF
  google::protobuf::RepeatedPtrField<proto::TeamChainStageBin>::const_iterator __for_end; // [rsp+20h] [rbp-A0h] BYREF
  const proto::TeamChainScheduleBin *team_chain_bin; // [rsp+28h] [rbp-98h]
  const google::protobuf::RepeatedPtrField<proto::TeamChainStageBin> *__for_range; // [rsp+30h] [rbp-90h]
  const proto::TeamChainStageBin *stage_bin; // [rsp+38h] [rbp-88h]
  common::milog::MiLogStream v19; // [rsp+40h] [rbp-80h] BYREF
  char v20[96]; // [rsp+60h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 12 17 new_stage_data:54";
  *(_QWORD *)(v2 + 16) = TeamChainActivity::fromScheduleBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202177536;
  team_chain_bin = proto::ActivityScheduleBin::team_chain_bin(bin);
  __for_range = proto::TeamChainScheduleBin::stage_bin_list(team_chain_bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::TeamChainStageBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::TeamChainStageBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::TeamChainStageBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    stage_bin = google::protobuf::internal::RepeatedPtrIterator<proto::TeamChainStageBin const>::operator*(&__for_begin);
    *(_DWORD *)(v2 + 32) = 0;
    *(_BYTE *)(v2 + 36) = 0;
    *(_DWORD *)(v2 + 40) = 0;
    TeamChainStageData::fromBin((TeamChainStageData *const)(v2 + 32), stage_bin);
    v6 = std::map<unsigned int,TeamChainStageData>::emplace<unsigned int &,TeamChainStageData&>(
           &this->stage_data_map_,
           (unsigned int *)(v2 + 32),
           (TeamChainStageData *)(v2 + 32),
           (unsigned int *)&this->stage_data_map_,
           v5);
    if ( !v6.second )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/team_chain_activity.cpp",
        "fromScheduleBin",
        58);
      v7 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
             &v19,
             (const char (*)[44])"[TeamChain] stage_id duplicated, stage_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v19);
      result = -1;
      goto LABEL_12;
    }
    google::protobuf::internal::RepeatedPtrIterator<proto::TeamChainStageBin const>::operator++(&__for_begin);
  }
  v9 = proto::TeamChainScheduleBin::in_dungeon_avatar_guid_list(team_chain_bin);
  p_in_dungeon_avatar_guid_vec = &this->in_dungeon_avatar_guid_vec_;
  common::tools::MiscUtils::repeatedToVector<unsigned long,unsigned long>(v9, &this->in_dungeon_avatar_guid_vec_);
  LOBYTE(v11) = proto::TeamChainScheduleBin::is_token_costume_reward(team_chain_bin);
  v12 = v11;
  v13 = *(_BYTE *)(((unsigned __int64)&this->is_token_costume_reward_ >> 3) + 0x7FFF8000);
  if ( v13 < 0 )
  {
    LOBYTE(p_in_dungeon_avatar_guid_vec) = v13 != 0;
    __asan_report_store1(&this->is_token_costume_reward_, p_in_dungeon_avatar_guid_vec, v12);
  }
  this->is_token_costume_reward_ = v12;
  result = 0;
LABEL_12:
  if ( v20 == (char *)v2 )
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

// Line 68: range 0000000018006ADE-0000000018006C1F
int32_t __cdecl TeamChainActivity::toScheduleBin(const TeamChainActivity *const this, proto::ActivityScheduleBin *bin)
{
  google::protobuf::RepeatedField<long unsigned int> *v2; // rax
  std::map<unsigned int,TeamChainStageData>::const_iterator __for_begin; // [rsp+10h] [rbp-40h] BYREF
  std::map<unsigned int,TeamChainStageData>::const_iterator __for_end; // [rsp+18h] [rbp-38h] BYREF
  proto::TeamChainScheduleBin *team_chain_bin; // [rsp+20h] [rbp-30h]
  const std::map<unsigned int,TeamChainStageData> *__for_range; // [rsp+28h] [rbp-28h]
  const std::pair<unsigned int const,TeamChainStageData> *v8; // [rsp+30h] [rbp-20h]
  std::tuple_element<0,const std::pair<unsigned int const,TeamChainStageData> >::type *stage_id; // [rsp+38h] [rbp-18h]
  std::tuple_element<1,const std::pair<unsigned int const,TeamChainStageData> >::type *stage_data; // [rsp+40h] [rbp-10h]
  proto::TeamChainStageBin *new_stage_data_bin; // [rsp+48h] [rbp-8h]

  team_chain_bin = proto::ActivityScheduleBin::mutable_team_chain_bin(bin);
  __for_range = &this->stage_data_map_;
  __for_begin._M_node = std::map<unsigned int,TeamChainStageData>::begin(&this->stage_data_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,TeamChainStageData>::end(&this->stage_data_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v8 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,TeamChainStageData>>::operator*(&__for_begin);
    stage_id = std::get<0ul,unsigned int const,TeamChainStageData>(v8);
    stage_data = (std::tuple_element<1,const std::pair<unsigned int const,TeamChainStageData> >::type *)std::get<1ul,unsigned int const,TeamChainStageData>(v8);
    new_stage_data_bin = proto::TeamChainScheduleBin::add_stage_bin_list(team_chain_bin);
    TeamChainStageData::toBin(stage_data, new_stage_data_bin);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,TeamChainStageData>>::operator++(&__for_begin);
  }
  v2 = proto::TeamChainScheduleBin::mutable_in_dungeon_avatar_guid_list(team_chain_bin);
  common::tools::MiscUtils::vectorToRepeated<unsigned long,unsigned long>(&this->in_dungeon_avatar_guid_vec_, v2);
  if ( *(char *)(((unsigned __int64)&this->is_token_costume_reward_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_token_costume_reward_);
  proto::TeamChainScheduleBin::set_is_token_costume_reward(team_chain_bin, this->is_token_costume_reward_);
  return 0;
};

// Line 81: range 0000000018006C20-0000000018006E44
int32_t __cdecl TeamChainActivity::toClient(TeamChainActivity *const this, proto::ActivityInfo *activity_info)
{
  common::milog::MiLogStream *v2; // rbx
  unsigned int val; // [rsp+1Ch] [rbp-74h] BYREF
  std::map<unsigned int,TeamChainStageData>::iterator __for_begin; // [rsp+20h] [rbp-70h] BYREF
  std::map<unsigned int,TeamChainStageData>::iterator __for_end; // [rsp+28h] [rbp-68h] BYREF
  proto::TeamChainDetailInfo *team_chain_info; // [rsp+30h] [rbp-60h]
  std::map<unsigned int,TeamChainStageData> *__for_range; // [rsp+38h] [rbp-58h]
  const std::pair<unsigned int const,TeamChainStageData> *v9; // [rsp+40h] [rbp-50h]
  std::tuple_element<0,const std::pair<unsigned int const,TeamChainStageData> >::type *stage_id; // [rsp+48h] [rbp-48h]
  std::tuple_element<1,const std::pair<unsigned int const,TeamChainStageData> >::type *stage_data; // [rsp+50h] [rbp-40h]
  proto::TeamChainStageData *new_team_chain_stage_info; // [rsp+58h] [rbp-38h]
  common::milog::MiLogStream v13; // [rsp+60h] [rbp-30h] BYREF

  if ( BaseActivity::toClient(this, activity_info) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/team_chain_activity.cpp",
      "toClient",
      85);
    v2 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
           &v13,
           (const char (*)[49])"[TeamChain] BaseActivity::toClient failed, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    return -1;
  }
  else
  {
    team_chain_info = proto::ActivityInfo::mutable_team_chain_info(activity_info);
    __for_range = &this->stage_data_map_;
    __for_begin._M_node = std::map<unsigned int,TeamChainStageData>::begin(&this->stage_data_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,TeamChainStageData>::end(&this->stage_data_map_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v9 = std::_Rb_tree_iterator<std::pair<unsigned int const,TeamChainStageData>>::operator*(&__for_begin);
      stage_id = std::get<0ul,unsigned int const,TeamChainStageData>(v9);
      stage_data = (std::tuple_element<1,const std::pair<unsigned int const,TeamChainStageData> >::type *)std::get<1ul,unsigned int const,TeamChainStageData>(v9);
      new_team_chain_stage_info = proto::TeamChainDetailInfo::add_stage_data_list(team_chain_info);
      TeamChainStageData::toClient(stage_data, new_team_chain_stage_info);
      std::_Rb_tree_iterator<std::pair<unsigned int const,TeamChainStageData>>::operator++(&__for_begin);
    }
    if ( *(char *)(((unsigned __int64)&this->is_token_costume_reward_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->is_token_costume_reward_);
    proto::TeamChainDetailInfo::set_is_token_costume_reward(team_chain_info, this->is_token_costume_reward_);
    return 0;
  }
};

// Line 100: range 0000000018006E46-0000000018006EF2
int32_t __cdecl TeamChainActivity::init(TeamChainActivity *const this)
{
  TeamChainActivity *v1; // rdx
  unsigned __int64 v2; // rax
  char v3; // al

  if ( !BaseActivity::isOpening(this, 0) )
    goto LABEL_7;
  v1 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v2 = (unsigned __int64)(this->_vptr_DescribalBase + 17);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8(this->_vptr_DescribalBase + 17);
  if ( (*(unsigned __int8 (__fastcall **)(TeamChainActivity *))v2)(v1) )
LABEL_7:
    v3 = 1;
  else
    v3 = 0;
  if ( !v3 )
    TeamChainActivity::registerObserver(this);
  return 0;
};

// Line 113: range 0000000018006EF4-0000000018006F56
void __cdecl TeamChainActivity::onLogin(TeamChainActivity *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  if ( !Player::isRelogin(this->player_) )
    TeamChainActivity::recallInDungeonAvatars(this);
  BaseActivity::onLogin(this);
};

// Line 122: range 0000000018006F58-00000000180071B1
void __cdecl TeamChainActivity::onPreStart(TeamChainActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  TeamChainStageData *v4; // rax
  const unsigned int *v5; // rcx
  TeamChainStageData *v6; // r8
  std::unordered_map<unsigned int,data::TeamChainExcelConfig>::const_iterator __for_begin; // [rsp+18h] [rbp-B8h] BYREF
  std::unordered_map<unsigned int,data::TeamChainExcelConfig>::const_iterator __for_end; // [rsp+20h] [rbp-B0h] BYREF
  const ActivityTeamChainExcelConfigMgr *config_mgr; // [rsp+28h] [rbp-A8h]
  const std::unordered_map<unsigned int,data::TeamChainExcelConfig> *__for_range; // [rsp+30h] [rbp-A0h]
  const std::pair<unsigned int const,data::TeamChainExcelConfig> *v11; // [rsp+38h] [rbp-98h]
  std::tuple_element<0,const std::pair<unsigned int const,data::TeamChainExcelConfig> >::type *stage_id; // [rsp+40h] [rbp-90h]
  std::tuple_element<1,const std::pair<unsigned int const,data::TeamChainExcelConfig> >::type *stage_config; // [rsp+48h] [rbp-88h]
  std::shared_ptr<Config> v14; // [rsp+50h] [rbp-80h] BYREF
  char v15[112]; // [rsp+60h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 12 18 new_stage_data:127";
  *(_QWORD *)(v1 + 16) = TeamChainActivity::onPreStart;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202177536;
  std::map<unsigned int,TeamChainStageData>::clear(&this->stage_data_map_);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v14);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14)->design_config.txt_config_mgr.activity_team_chain_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v14);
  __for_range = &config_mgr->team_chain_excel_config_map;
  __for_begin._M_cur = std::unordered_map<unsigned int,data::TeamChainExcelConfig>::begin(&config_mgr->team_chain_excel_config_map)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,data::TeamChainExcelConfig>::end(&config_mgr->team_chain_excel_config_map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::TeamChainExcelConfig>,false>(
            &__for_begin,
            &__for_end) )
  {
    v11 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::TeamChainExcelConfig>,false,false>::operator*(&__for_begin);
    stage_id = std::get<0ul,unsigned int const,data::TeamChainExcelConfig>(v11);
    stage_config = (std::tuple_element<1,const std::pair<unsigned int const,data::TeamChainExcelConfig> >::type *)std::get<1ul,unsigned int const,data::TeamChainExcelConfig>(v11);
    *(_DWORD *)(v1 + 32) = 0;
    *(_BYTE *)(v1 + 36) = 0;
    *(_DWORD *)(v1 + 40) = 0;
    if ( *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)stage_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(stage_id);
    }
    *(_DWORD *)(v1 + 32) = *stage_id;
    v4 = std::move<TeamChainStageData &>((TeamChainStageData *)(v1 + 32));
    std::map<unsigned int,TeamChainStageData>::emplace<unsigned int const&,TeamChainStageData>(
      &this->stage_data_map_,
      stage_id,
      v4,
      v5,
      v6);
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::TeamChainExcelConfig>,false,false>::operator++(&__for_begin);
  }
  if ( v15 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 134: range 00000000180071B2-00000000180071CC
void __cdecl TeamChainActivity::onStart(TeamChainActivity *const this)
{
  TeamChainActivity::registerObserver(this);
};

// Line 139: range 00000000180071CE-00000000180071E8
void __cdecl TeamChainActivity::onSettle(TeamChainActivity *const this)
{
  TeamChainActivity::unregisterObserver(this);
};

// Line 144: range 00000000180071EA-000000001800725C
void __cdecl TeamChainActivity::onClear(TeamChainActivity *const this)
{
  __int64 v1; // rsi

  std::map<unsigned int,TeamChainStageData>::clear(&this->stage_data_map_);
  std::vector<unsigned long>::clear(&this->in_dungeon_avatar_guid_vec_);
  if ( *(char *)(((unsigned __int64)&this->is_token_costume_reward_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_token_costume_reward_, v1, &this->is_token_costume_reward_);
  this->is_token_costume_reward_ = 0;
};

// Line 152: range 000000001800725E-0000000018007734
int32_t __cdecl TeamChainActivity::execAction(TeamChainActivity *const this, const data::NewActivityExec *action_exec)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // r12
  common::milog::MiLogStream *v6; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v8; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  unsigned __int64 val; // [rsp+10h] [rbp-B0h] BYREF
  const std::string *stage_id_str; // [rsp+18h] [rbp-A8h]
  std::shared_ptr<Config> v16; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v17; // [rsp+30h] [rbp-90h] BYREF
  char v18[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 stage_id:164";
  *(_QWORD *)(v2 + 16) = TeamChainActivity::execAction;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&action_exec->type);
  }
  if ( action_exec->type == NEW_ACTIVITY_ACTION_TEAM_CHAIN_OPEN_STAGE )
  {
    if ( std::vector<std::string>::size(&action_exec->param) )
    {
      *(_DWORD *)(v2 + 32) = 0;
      stage_id_str = std::vector<std::string>::operator[](&action_exec->param, 0LL);
      if ( common::tools::StringUtils::strToNum<unsigned int>(stage_id_str, (unsigned int *)(v2 + 32), 1) )
      {
        common::milog::MiLogStream::create(
          &v17,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/team_chain_activity.cpp",
          "execAction",
          168);
        v8 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
               &v17,
               (const char (*)[39])"[TeamChain] convert to stage_id error ");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, stage_id_str);
        common::milog::MiLogStream::~MiLogStream(&v17);
        result = -1;
      }
      else
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v16);
        v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v16);
        v10 = data::ActivityTeamChainExcelConfigMgrBase::findTeamChainExcelConfig(
                &v9->design_config.txt_config_mgr.activity_team_chain_config_mgr,
                *(_DWORD *)(v2 + 32)) == 0LL;
        std::shared_ptr<Config>::~shared_ptr(&v16);
        if ( v10 )
        {
          common::milog::MiLogStream::create(
            &v17,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/team_chain_activity.cpp",
            "execAction",
            173);
          v11 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  &v17,
                  (const char (*)[22])"[TeamChain] stage_id ");
          v12 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, stage_id_str);
          common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v12, (const char (*)[16])" does not exist");
          common::milog::MiLogStream::~MiLogStream(&v17);
          result = -1;
        }
        else if ( TeamChainActivity::openTeamChainStage(this, *(_DWORD *)(v2 + 32)) )
        {
          common::milog::MiLogStream::create(
            &v17,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/team_chain_activity.cpp",
            "execAction",
            179);
          v13 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                  &v17,
                  (const char (*)[50])"[TeamChain] openTeamChainStage failed, stage_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 32));
          common::milog::MiLogStream::~MiLogStream(&v17);
          result = -1;
        }
        else
        {
          BaseActivity::notifyClientData(this, 0);
          result = 0;
        }
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/team_chain_activity.cpp",
        "execAction",
        160);
      v5 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
             &v17,
             (const char (*)[31])"[TeamChain] action param size ");
      val = std::vector<std::string>::size(&action_exec->param);
      v6 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v5, &val);
      common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v6, (const char (*)[12])off_2648B580);
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

// Line 192: range 0000000018007736-00000000180079B9
int32_t __cdecl TeamChainActivity::checkEnterDungeon(TeamChainActivity *const this, uint32_t dungeon_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  TeamChainActivity *v5; // rdx
  unsigned __int64 v6; // rax
  char v7; // al
  int32_t result; // eax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  std::shared_ptr<Config> v12; // [rsp+10h] [rbp-90h] BYREF
  common::milog::MiLogStream v13; // [rsp+20h] [rbp-80h] BYREF
  char v14[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 stage_id:198";
  *(_QWORD *)(v2 + 16) = TeamChainActivity::checkEnterDungeon;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( !BaseActivity::isOpening(this, 0) )
    goto LABEL_10;
  v5 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v6 = (unsigned __int64)(this->_vptr_DescribalBase + 17);
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8(this->_vptr_DescribalBase + 17);
  if ( (*(unsigned __int8 (__fastcall **)(TeamChainActivity *))v6)(v5) )
LABEL_10:
    v7 = 1;
  else
    v7 = 0;
  if ( v7 )
  {
    result = -1;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v12);
    v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v12);
    *(_DWORD *)(v2 + 32) = ActivityTeamChainExcelConfigMgr::getStageIdByDungeonId(
                             &v9->design_config.txt_config_mgr.activity_team_chain_config_mgr,
                             dungeon_id);
    std::shared_ptr<Config>::~shared_ptr(&v12);
    if ( !TeamChainActivity::isStageOpen(this, *(_DWORD *)(v2 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/team_chain_activity.cpp",
        "checkEnterDungeon",
        202);
      v10 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v13, (const char (*)[11])"stage_id: ");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v11, (const char (*)[13])off_264961A0);
      common::milog::MiLogStream::~MiLogStream(&v13);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
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

// Line 209: range 00000000180079BA-0000000018007C04
void __cdecl TeamChainActivity::registerObserver(TeamChainActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  PlayerEventComp *EventComp; // [rsp+10h] [rbp-B0h]
  std::enable_shared_from_this<BaseActivity> v5; // [rsp+20h] [rbp-A0h] BYREF
  char v6[144]; // [rsp+30h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 12 this_ptr:210 64 16 12 this_wtr:211";
  *(_QWORD *)(v1 + 16) = TeamChainActivity::registerObserver;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  std::enable_shared_from_this<BaseActivity>::shared_from_this(&v5);
  std::dynamic_pointer_cast<TeamChainActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)(v1 + 32));
  std::shared_ptr<BaseActivity>::~shared_ptr((std::shared_ptr<BaseActivity> *const)&v5);
  std::weak_ptr<TeamChainActivity>::weak_ptr<TeamChainActivity,void>(
    (std::weak_ptr<TeamChainActivity> *const)(v1 + 64),
    (const std::shared_ptr<TeamChainActivity> *)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  EventComp = Player::getEventComp(this->player_);
  std::weak_ptr<TeamChainActivity>::weak_ptr(
    (std::weak_ptr<TeamChainActivity> *const)&v5,
    (const std::weak_ptr<TeamChainActivity> *)(v1 + 64));
  PlayerEventComp::tryRegisterObserver<TeamChainActivity,PostEnterSceneEvent>(
    EventComp,
    (std::weak_ptr<TeamChainActivity> *)&v5,
    (void (*)(TeamChainActivity *, const PostEnterSceneEvent *))TeamChainActivity::onPostEnterSceneEvent,
    0LL);
  std::weak_ptr<TeamChainActivity>::~weak_ptr((std::weak_ptr<TeamChainActivity> *const)&v5);
  std::weak_ptr<TeamChainActivity>::~weak_ptr((std::weak_ptr<TeamChainActivity> *const)(v1 + 64));
  std::shared_ptr<TeamChainActivity>::~shared_ptr((std::shared_ptr<TeamChainActivity> *const)(v1 + 32));
  if ( v6 == (char *)v1 )
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

// Line 216: range 0000000018007C06-0000000018007D0A
void __cdecl TeamChainActivity::unregisterObserver(TeamChainActivity *const this)
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
        __asan_report_load8(&this->player_);
      EventComp = Player::getEventComp(this->player_);
      PlayerEventComp::unregisterObserver(EventComp, obs_wtr);
    }
    std::_Rb_tree_iterator<std::pair<std::type_index const,std::weak_ptr<Observer>>>::operator++(&__for_begin);
  }
  std::map<std::type_index,std::weak_ptr<Observer>>::clear(&this->event_observer_map_);
};

// Line 228: range 0000000018008036-0000000018009438
int32_t __cdecl TeamChainActivity::onEnterDungeonReq(
        TeamChainActivity *const this,
        const proto::TeamChainEnterDungeonReq *req,
        proto::TeamChainEnterDungeonRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  TeamChainActivity *v6; // rdx
  unsigned __int64 v7; // rax
  char v8; // al
  int32_t v9; // r14d
  PlayerSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v11; // rbx
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  const google::protobuf::RepeatedPtrField<proto::TeamChainChooseTeamInfo> *v23; // rax
  const google::protobuf::RepeatedPtrField<proto::TeamChainChooseTeamInfo> *v24; // rax
  int v25; // eax
  PlayerDungeonComp *DungeonComp; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  uint32_t SceneId; // eax
  common::milog::MiLogStream *v29; // r14
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // r14
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // r14
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v40; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // r14
  DungeonScene *v45; // rax
  DungeonScene *v46; // rax
  DungeonScene *v47; // r14
  DungeonScene *v48; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+28h] [rbp-238h] BYREF
  uint32_t dungeon_level; // [rsp+2Ch] [rbp-234h]
  const data::TeamChainExcelConfig *stage_config_ptr; // [rsp+30h] [rbp-230h]
  const data::TeamChainDifficultyExcelConfig *difficulty_config_ptr; // [rsp+38h] [rbp-228h]
  std::tuple_element<0,std::pair<int,std::shared_ptr<DungeonScene> > >::type *enter_dungeon_ret; // [rsp+40h] [rbp-220h]
  std::tuple_element<1,std::pair<int,std::shared_ptr<DungeonScene> > >::type *dungeon_ptr; // [rsp+48h] [rbp-218h]
  std::shared_ptr<Scene> v56; // [rsp+50h] [rbp-210h] BYREF
  std::pair<int,std::shared_ptr<DungeonScene> > __in; // [rsp+60h] [rbp-200h] BYREF
  EnterDungeonOption v58; // [rsp+80h] [rbp-1E0h] BYREF
  common::milog::MiLogStream v59; // [rsp+A0h] [rbp-1C0h] BYREF
  std::map<unsigned int,unsigned int> level_config_id_map; // [rsp+C0h] [rbp-1A0h] BYREF
  char v61[368]; // [rsp+F0h] [rbp-170h] BYREF

  v3 = (unsigned __int64)v61;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(320LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "8 48 4 12 stage_id:257 64 4 25 team_chain_difficulty:271 80 4 14 dungeon_id:297 96 16 17 cur_wor"
                        "ld_ptr:240 128 16 13 scene_ptr:246 160 16 21 dungeon_scene_ptr:315 192 16 27 team_chain_activity"
                        "_wtr:330 224 64 23 new_dungeon_context:284";
  *(_QWORD *)(v3 + 16) = TeamChainActivity::onEnterDungeonReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = -219021312;
  v5[536862726] = -219021312;
  v5[536862729] = -202116109;
  if ( !BaseActivity::isOpening(this, 0) )
    goto LABEL_10;
  v6 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v7 = (unsigned __int64)(this->_vptr_DescribalBase + 17);
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load8(this->_vptr_DescribalBase + 17);
  if ( (*(unsigned __int8 (__fastcall **)(TeamChainActivity *))v7)(v6) )
LABEL_10:
    v8 = 1;
  else
    v8 = 0;
  if ( v8 )
  {
    v9 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    SceneComp = Player::getSceneComp(this->player_);
    if ( !PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
    {
      common::milog::MiLogStream::create(
        &v59,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/team_chain_activity.cpp",
        "onEnterDungeonReq",
        237);
      v11 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
              &v59,
              (const char (*)[37])"[TeamChain] not in self world, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
      common::milog::MiLogStream::~MiLogStream(&v59);
      v9 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      Player::getSceneComp(this->player_);
      PlayerSceneComp::getCurWorld<PlayerWorld>((const PlayerSceneComp *const)(v3 + 96));
      if ( std::operator==<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v3 + 96)) )
      {
        common::milog::MiLogStream::create(
          &v59,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/team_chain_activity.cpp",
          "onEnterDungeonReq",
          243);
        v12 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                &v59,
                (const char (*)[38])"[TeamChain] getCurWorld failed, uid: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
        common::milog::MiLogStream::~MiLogStream(&v59);
        v9 = -1;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        Player::getSceneComp(this->player_);
        PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v3 + 128));
        if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 128)) )
        {
          common::milog::MiLogStream::create(
            &v59,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/team_chain_activity.cpp",
            "onEnterDungeonReq",
            249);
          v13 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                  &v59,
                  (const char (*)[36])"[TeamChain] scene_ptr is null, uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
          common::milog::MiLogStream::~MiLogStream(&v59);
          v9 = 512;
        }
        else
        {
          v14 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
          if ( Scene::getSceneType(v14) == SCENE_WORLD )
          {
            *(_DWORD *)(v3 + 48) = proto::TeamChainEnterDungeonReq::stage_id(req);
            if ( !TeamChainActivity::isStageOpen(this, *(_DWORD *)(v3 + 48)) )
            {
              common::milog::MiLogStream::create(
                &v59,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/team_chain_activity.cpp",
                "onEnterDungeonReq",
                260);
              v15 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                      &v59,
                      (const char (*)[23])"[TeamChain] stage_id: ");
              v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v15,
                      (const unsigned int *)(v3 + 48));
              common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v16, (const char (*)[13])off_264961A0);
              common::milog::MiLogStream::~MiLogStream(&v59);
              v9 = -1;
            }
            else
            {
              ServiceBox::findService<GameserverService>();
              GameserverService::getConfig((GameserverService *const)&v56);
              v17 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v56);
              stage_config_ptr = data::ActivityTeamChainExcelConfigMgrBase::findTeamChainExcelConfig(
                                   &v17->design_config.txt_config_mgr.activity_team_chain_config_mgr,
                                   *(_DWORD *)(v3 + 48));
              std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v56);
              if ( stage_config_ptr )
              {
                *(_DWORD *)(v3 + 64) = proto::TeamChainEnterDungeonReq::difficulty(req);
                ServiceBox::findService<GameserverService>();
                GameserverService::getConfig((GameserverService *const)&v56);
                v20 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v56);
                difficulty_config_ptr = data::ActivityTeamChainExcelConfigMgrBase::findTeamChainDifficultyExcelConfig(
                                          &v20->design_config.txt_config_mgr.activity_team_chain_config_mgr,
                                          *(_DWORD *)(v3 + 64));
                std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v56);
                if ( difficulty_config_ptr )
                {
                  v23 = proto::TeamChainEnterDungeonReq::team_info_list(req);
                  if ( TeamChainActivity::checkEnterDungeonChooseTeamInfo(this, *(_DWORD *)(v3 + 48), v23) )
                  {
                    v9 = -1;
                  }
                  else
                  {
                    TeamChainDungeonContext::TeamChainDungeonContext((TeamChainDungeonContext *const)(v3 + 224));
                    v24 = proto::TeamChainEnterDungeonReq::team_info_list(req);
                    if ( TeamChainActivity::constructEnterDungeonContext(
                           this,
                           *(_DWORD *)(v3 + 48),
                           *(_DWORD *)(v3 + 64),
                           v24,
                           (TeamChainDungeonContext *)(v3 + 224)) )
                    {
                      v9 = -1;
                    }
                    else if ( TeamChainActivity::createEnterDungeonAvatarSnapShot(
                                this,
                                (TeamChainDungeonContext *)(v3 + 224)) )
                    {
                      v9 = -1;
                    }
                    else
                    {
                      v25 = *(unsigned __int8 *)(((unsigned __int64)&stage_config_ptr->dungeon_id >> 3) + 0x7FFF8000);
                      if ( (_BYTE)v25 != 0 && (char)v25 <= 3 )
                        __asan_report_load4(&stage_config_ptr->dungeon_id);
                      *(_DWORD *)(v3 + 80) = stage_config_ptr->dungeon_id;
                      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                        __asan_report_load8(&this->player_);
                      DungeonComp = Player::getDungeonComp(this->player_);
                      memset(&v58, 0, sizeof(v58));
                      EnterDungeonOption::EnterDungeonOption(&v58);
                      memset(&level_config_id_map, 0, sizeof(level_config_id_map));
                      std::map<unsigned int,unsigned int>::map(&level_config_id_map);
                      v27 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
                      SceneId = Scene::getSceneId(v27);
                      PlayerDungeonComp::enterDungeon(
                        &__in,
                        DungeonComp,
                        *(_DWORD *)(v3 + 80),
                        SceneId,
                        0,
                        &level_config_id_map,
                        v58);
                      std::map<unsigned int,unsigned int>::~map(&level_config_id_map);
                      enter_dungeon_ret = std::get<0ul,int,std::shared_ptr<DungeonScene>>(&__in);
                      dungeon_ptr = std::get<1ul,int,std::shared_ptr<DungeonScene>>(&__in);
                      if ( *(_BYTE *)(((unsigned __int64)enter_dungeon_ret >> 3) + 0x7FFF8000) != 0
                        && (char)(((unsigned __int8)enter_dungeon_ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)enter_dungeon_ret >> 3)
                                                                                            + 0x7FFF8000) )
                      {
                        __asan_report_load4(enter_dungeon_ret);
                      }
                      if ( *enter_dungeon_ret >= 0 )
                      {
                        if ( *(_BYTE *)(((unsigned __int64)enter_dungeon_ret >> 3) + 0x7FFF8000) != 0
                          && (char)(((unsigned __int8)enter_dungeon_ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)enter_dungeon_ret >> 3)
                                                                                              + 0x7FFF8000) )
                        {
                          __asan_report_load4(enter_dungeon_ret);
                        }
                        if ( *enter_dungeon_ret <= 0 )
                        {
                          if ( std::operator==<DungeonScene>(dungeon_ptr, 0LL) )
                          {
                            common::milog::MiLogStream::create(
                              &v59,
                              &common::milog::MiLogDefault::default_log_obj_,
                              3u,
                              "./src/player/activity/team_chain_activity.cpp",
                              "onEnterDungeonReq",
                              311);
                            v37 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                                    &v59,
                                    (const char (*)[55])"[TeamChain] enterDungeon dungeon_ptr is nullptr, uid: ");
                            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                              __asan_report_load8(&this->player_);
                            val = Player::getUid(this->player_);
                            v38 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, &val);
                            v39 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                                    v38,
                                    (const char (*)[15])", dungeon_id: ");
                            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                              v39,
                              (const unsigned int *)(v3 + 80));
                            common::milog::MiLogStream::~MiLogStream(&v59);
                            v9 = -1;
                          }
                          else
                          {
                            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                              __asan_report_load8(&this->player_);
                            Player::getSceneComp(this->player_);
                            PlayerSceneComp::getDestScene((const PlayerSceneComp *const)&v56);
                            std::dynamic_pointer_cast<DungeonScene,Scene>((const std::shared_ptr<Scene> *)(v3 + 160));
                            std::shared_ptr<Scene>::~shared_ptr(&v56);
                            if ( std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v3 + 160))
                              || (v40 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160)),
                                  DungeonScene::getDungeonId(v40) != *(_DWORD *)(v3 + 80)) )
                            {
                              common::milog::MiLogStream::create(
                                &v59,
                                &common::milog::MiLogDefault::default_log_obj_,
                                3u,
                                "./src/player/activity/team_chain_activity.cpp",
                                "onEnterDungeonReq",
                                318);
                              v42 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                                      &v59,
                                      (const char (*)[34])"[TeamChain] player enter dungeon ");
                              v43 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                      v42,
                                      (const unsigned int *)(v3 + 80));
                              v44 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                                      v43,
                                      (const char (*)[14])" failed, uid:");
                              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                                __asan_report_load8(&this->player_);
                              val = Player::getUid(this->player_);
                              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v44, &val);
                              common::milog::MiLogStream::~MiLogStream(&v59);
                              v9 = -1;
                            }
                            else
                            {
                              v45 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
                              DungeonScene::setDungeonExtraData<TeamChainDungeonContext>(
                                v45,
                                (const TeamChainDungeonContext *)(v3 + 224));
                              if ( *(_BYTE *)(((unsigned __int64)&difficulty_config_ptr->dungeon_level >> 3) + 0x7FFF8000) != 0
                                && *(_BYTE *)(((unsigned __int64)&difficulty_config_ptr->dungeon_level >> 3) + 0x7FFF8000) <= 3 )
                              {
                                __asan_report_load4(&difficulty_config_ptr->dungeon_level);
                              }
                              dungeon_level = difficulty_config_ptr->dungeon_level;
                              if ( dungeon_level )
                              {
                                v46 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
                                DungeonScene::setReviseLevel(v46, dungeon_level);
                              }
                              toThisPtr<TeamChainActivity>((TeamChainActivity *)&v56);
                              std::weak_ptr<TeamChainActivity>::weak_ptr<TeamChainActivity,void>(
                                (std::weak_ptr<TeamChainActivity> *const)(v3 + 192),
                                (const std::shared_ptr<TeamChainActivity> *)&v56);
                              std::shared_ptr<TeamChainActivity>::~shared_ptr((std::shared_ptr<TeamChainActivity> *const)&v56);
                              v47 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
                              std::weak_ptr<TeamChainActivity>::weak_ptr(
                                (std::weak_ptr<TeamChainActivity> *const)&v56,
                                (const std::weak_ptr<TeamChainActivity> *)(v3 + 192));
                              std::function<int ()(DungeonScene &,std::vector<std::shared_ptr<Avatar>> &,std::shared_ptr<Avatar>&)>::function<TeamChainActivity::onEnterDungeonReq(proto::TeamChainEnterDungeonReq const&,proto::TeamChainEnterDungeonRsp &)::{lambda(DungeonScene &,std::vector<std::shared_ptr<Avatar>> &,std::shared_ptr<Avatar>&)#1},void,void>(
                                (std::function<int(DungeonScene&,std::vector<std::shared_ptr<Avatar>>&,std::shared_ptr<Avatar>&)> *const)&v59,
                                (TeamChainActivity::onEnterDungeonReq::<lambda(DungeonScene&, std::vector<std::shared_ptr<Avatar>>&, AvatarPtr&)> *)&v56);
                              DungeonScene::registerDungeonInitEnterSceneAvatarCallback(
                                v47,
                                (DungeonInitEnterSceneAvatarCallback *)&v59);
                              std::function<int ()(DungeonScene &,std::vector<std::shared_ptr<Avatar>> &,std::shared_ptr<Avatar>&)>::~function((std::function<int(DungeonScene&,std::vector<std::shared_ptr<Avatar>>&,std::shared_ptr<Avatar>&)> *const)&v59);
                              TeamChainActivity::onEnterDungeonReq(proto::TeamChainEnterDungeonReq const&,proto::TeamChainEnterDungeonRsp &)::{lambda(DungeonScene &,std::vector<std::shared_ptr<Avatar>> &,std::shared_ptr<Avatar>&)#1}::~vector((TeamChainActivity::onEnterDungeonReq::<lambda(DungeonScene&, std::vector<std::shared_ptr<Avatar>>&, AvatarPtr&)> *const)&v56);
                              v48 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
                              std::function<void ()(Player &,DungeonScene &,proto::DungeonSettleNotify &)>::function<TeamChainActivity::onEnterDungeonReq(proto::TeamChainEnterDungeonReq const&,proto::TeamChainEnterDungeonRsp &)::{lambda(Player &,DungeonScene &,proto::DungeonSettleNotify &)#2},void,void>(
                                (std::function<void(Player&,DungeonScene&,proto::DungeonSettleNotify&)> *const)&v59,
                                (TeamChainActivity::onEnterDungeonReq::<lambda(Player&, DungeonScene&, proto::DungeonSettleNotify&)>)&v59);
                              DungeonScene::registerDungeonSettleCallback(v48, (DungeonSettleCallback *)&v59);
                              std::function<void ()(Player &,DungeonScene &,proto::DungeonSettleNotify &)>::~function((std::function<void(Player&,DungeonScene&,proto::DungeonSettleNotify&)> *const)&v59);
                              v9 = 0;
                              std::weak_ptr<TeamChainActivity>::~weak_ptr((std::weak_ptr<TeamChainActivity> *const)(v3 + 192));
                            }
                            std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v3 + 160));
                          }
                        }
                        else
                        {
                          common::milog::MiLogStream::create(
                            &v59,
                            &common::milog::MiLogDefault::default_log_obj_,
                            1u,
                            "./src/player/activity/team_chain_activity.cpp",
                            "onEnterDungeonReq",
                            306);
                          v32 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                                  &v59,
                                  (const char (*)[39])"[TeamChain] enterDungeon failed, uid: ");
                          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                            __asan_report_load8(&this->player_);
                          val = Player::getUid(this->player_);
                          v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, &val);
                          v34 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                                  v33,
                                  (const char (*)[15])", dungeon_id: ");
                          v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                  v34,
                                  (const unsigned int *)(v3 + 80));
                          v36 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(
                                  v35,
                                  (const char (*)[7])" ret: ");
                          common::milog::MiLogStream::operator<<<int,(int *)0>(v36, enter_dungeon_ret);
                          common::milog::MiLogStream::~MiLogStream(&v59);
                          if ( *(_BYTE *)(((unsigned __int64)enter_dungeon_ret >> 3) + 0x7FFF8000) != 0
                            && (char)(((unsigned __int8)enter_dungeon_ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)enter_dungeon_ret >> 3)
                                                                                                + 0x7FFF8000) )
                          {
                            __asan_report_load4(enter_dungeon_ret);
                          }
                          v9 = *enter_dungeon_ret;
                        }
                      }
                      else
                      {
                        common::milog::MiLogStream::create(
                          &v59,
                          &common::milog::MiLogDefault::default_log_obj_,
                          3u,
                          "./src/player/activity/team_chain_activity.cpp",
                          "onEnterDungeonReq",
                          301);
                        v29 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                                &v59,
                                (const char (*)[39])"[TeamChain] enterDungeon failed, uid: ");
                        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                          __asan_report_load8(&this->player_);
                        val = Player::getUid(this->player_);
                        v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, &val);
                        v31 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                                v30,
                                (const char (*)[15])", dungeon_id: ");
                        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v31,
                          (const unsigned int *)(v3 + 80));
                        common::milog::MiLogStream::~MiLogStream(&v59);
                        if ( *(_BYTE *)(((unsigned __int64)enter_dungeon_ret >> 3) + 0x7FFF8000) != 0
                          && (char)(((unsigned __int8)enter_dungeon_ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)enter_dungeon_ret >> 3)
                                                                                              + 0x7FFF8000) )
                        {
                          __asan_report_load4(enter_dungeon_ret);
                        }
                        v9 = *enter_dungeon_ret;
                      }
                      std::pair<int,std::shared_ptr<DungeonScene>>::~pair(&__in);
                    }
                    TeamChainDungeonContext::~TeamChainDungeonContext((TeamChainDungeonContext *const)(v3 + 224));
                  }
                }
                else
                {
                  common::milog::MiLogStream::create(
                    &v59,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/activity/team_chain_activity.cpp",
                    "onEnterDungeonReq",
                    275);
                  v21 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                          &v59,
                          (const char (*)[36])"[TeamChain] team_chain_difficulty: ");
                  v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v21,
                          (const unsigned int *)(v3 + 64));
                  common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v22, (const char (*)[12])off_2648B580);
                  common::milog::MiLogStream::~MiLogStream(&v59);
                  v9 = -1;
                }
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v59,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/activity/team_chain_activity.cpp",
                  "onEnterDungeonReq",
                  266);
                v18 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                        &v59,
                        (const char (*)[23])"[TeamChain] stage_id: ");
                v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v18,
                        (const unsigned int *)(v3 + 48));
                common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v19, (const char (*)[12])off_2648B580);
                common::milog::MiLogStream::~MiLogStream(&v59);
                v9 = -1;
              }
            }
          }
          else
          {
            v9 = -1;
          }
        }
        std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 128));
      }
      std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v3 + 96));
    }
  }
  result = v9;
  if ( v61 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8024) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 331: range 0000000018007D0C-0000000018007ED8
int __cdecl TeamChainActivity::onEnterDungeonReq(proto::TeamChainEnterDungeonReq const&,proto::TeamChainEnterDungeonRsp &)::{lambda(DungeonScene &,std::vector<std::shared_ptr<Avatar>> &,std::shared_ptr<Avatar>&)#1}::operator()(
        const TeamChainActivity::onEnterDungeonReq::<lambda(DungeonScene&, std::vector<std::shared_ptr<Avatar>>&, AvatarPtr&)> *const __closure,
        DungeonScene *dungeon_scene,
        std::vector<std::shared_ptr<Avatar>> *enter_scene_avatar_vec,
        AvatarPtr *appear_avatar_ptr)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  int inited; // r14d
  TeamChainActivity *v8; // rdi
  int result; // eax
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-90h] BYREF
  char v13[112]; // [rsp+40h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 27 team_chain_activity_ptr:333";
  *(_QWORD *)(v4 + 16) = TeamChainActivity::onEnterDungeonReq(proto::TeamChainEnterDungeonReq const&,proto::TeamChainEnterDungeonRsp &)::{lambda(DungeonScene &,std::vector<std::shared_ptr<Avatar>> &,std::shared_ptr<Avatar>&)#1}::operator();
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  std::weak_ptr<TeamChainActivity>::lock((const std::weak_ptr<TeamChainActivity> *const)(v4 + 32));
  if ( std::operator==<TeamChainActivity>(0LL, (const std::shared_ptr<TeamChainActivity> *)(v4 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/team_chain_activity.cpp",
      "operator()",
      336);
    common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
      &v12,
      (const char (*)[44])"[TeamChain] team_chain_activity_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v12);
    inited = -1;
  }
  else
  {
    v8 = std::__shared_ptr_access<TeamChainActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TeamChainActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    inited = TeamChainActivity::initTeamChainEnterSceneAvatar(
               v8,
               dungeon_scene,
               enter_scene_avatar_vec,
               appear_avatar_ptr);
  }
  std::shared_ptr<TeamChainActivity>::~shared_ptr((std::shared_ptr<TeamChainActivity> *const)(v4 + 32));
  result = inited;
  if ( v13 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 331: range 000000001808762E-0000000018087653
void __cdecl TeamChainActivity::onEnterDungeonReq(proto::TeamChainEnterDungeonReq const&,proto::TeamChainEnterDungeonRsp &)::{lambda(DungeonScene &,std::vector<std::shared_ptr<Avatar>> &,std::shared_ptr<Avatar>&)#1}::vector(
        TeamChainActivity::onEnterDungeonReq::<lambda(DungeonScene&, std::vector<std::shared_ptr<Avatar>>&, AvatarPtr&)> *const this,
        TeamChainActivity::onEnterDungeonReq::<lambda(DungeonScene&, std::vector<std::shared_ptr<Avatar>>&, AvatarPtr&)> *a2)
{
  std::weak_ptr<TeamChainActivity>::weak_ptr(&this->__team_chain_activity_wtr, &a2->__team_chain_activity_wtr);
};

// Line 331: range 000000001808771E-0000000018087743
void __cdecl TeamChainActivity::onEnterDungeonReq(proto::TeamChainEnterDungeonReq const&,proto::TeamChainEnterDungeonRsp &)::{lambda(DungeonScene &,std::vector<std::shared_ptr<Avatar>> &,std::shared_ptr<Avatar>&)#1}::vector(
        TeamChainActivity::onEnterDungeonReq::<lambda(DungeonScene&, std::vector<std::shared_ptr<Avatar>>&, AvatarPtr&)> *const this,
        const TeamChainActivity::onEnterDungeonReq::<lambda(DungeonScene&, std::vector<std::shared_ptr<Avatar>>&, AvatarPtr&)> *a2)
{
  std::weak_ptr<TeamChainActivity>::weak_ptr(&this->__team_chain_activity_wtr, &a2->__team_chain_activity_wtr);
};

// Line 331: range 0000000018007EDA-0000000018007EF4
void __cdecl TeamChainActivity::onEnterDungeonReq(proto::TeamChainEnterDungeonReq const&,proto::TeamChainEnterDungeonRsp &)::{lambda(DungeonScene &,std::vector<std::shared_ptr<Avatar>> &,std::shared_ptr<Avatar>&)#1}::~vector(
        TeamChainActivity::onEnterDungeonReq::<lambda(DungeonScene&, std::vector<std::shared_ptr<Avatar>>&, AvatarPtr&)> *const this)
{
  std::weak_ptr<TeamChainActivity>::~weak_ptr(&this->__team_chain_activity_wtr);
};

// Line 341: range 0000000018007EF6-0000000018008035
void __cdecl TeamChainActivity::onEnterDungeonReq(proto::TeamChainEnterDungeonReq const&,proto::TeamChainEnterDungeonRsp &)::{lambda(Player &,DungeonScene &,proto::DungeonSettleNotify &)#2}::operator()(
        const TeamChainActivity::onEnterDungeonReq::<lambda(Player&, DungeonScene&, proto::DungeonSettleNotify&)> *const __closure,
        Player *player,
        DungeonScene *dungeon_scene,
        proto::DungeonSettleNotify *notify)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  TeamChainActivity *v7; // rcx
  char v10[96]; // [rsp+20h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 16 activity_ptr:343";
  *(_QWORD *)(v4 + 16) = TeamChainActivity::onEnterDungeonReq(proto::TeamChainEnterDungeonReq const&,proto::TeamChainEnterDungeonRsp &)::{lambda(Player &,DungeonScene &,proto::DungeonSettleNotify &)#2}::operator();
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  Player::getActivityComp(player);
  PlayerActivityComp::findOpenningActivity<TeamChainActivity>((PlayerActivityComp *const)(v4 + 32));
  if ( std::operator!=<TeamChainActivity>(0LL, (const std::shared_ptr<TeamChainActivity> *)(v4 + 32)) )
  {
    v7 = std::__shared_ptr_access<TeamChainActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TeamChainActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    TeamChainActivity::onDungeonSettle(v7, dungeon_scene, notify);
  }
  std::shared_ptr<TeamChainActivity>::~shared_ptr((std::shared_ptr<TeamChainActivity> *const)(v4 + 32));
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

// Line 354: range 000000001800943A-000000001800A222
int32_t __cdecl TeamChainActivity::onRestartDungeonReq(
        TeamChainActivity *const this,
        const proto::TeamChainRestartDungeonReq *req,
        proto::TeamChainRestartDungeonRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  TeamChainActivity *v6; // rdx
  unsigned __int64 v7; // rax
  char v8; // al
  int32_t v9; // r14d
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  bool isDungeonClosed; // r14
  common::milog::MiLogStream *v13; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  unsigned __int64 v17; // rax
  TeamChainDungeonContext *v18; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  const google::protobuf::RepeatedPtrField<proto::TeamChainChooseTeamInfo> *v22; // rax
  const google::protobuf::RepeatedPtrField<proto::TeamChainChooseTeamInfo> *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // r14
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  DungeonScene *v30; // rax
  DungeonScene *v31; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+24h] [rbp-23Ch] BYREF
  unsigned int stage_id; // [rsp+28h] [rbp-238h]
  uint32_t dungeon_level; // [rsp+2Ch] [rbp-234h]
  PlayerDungeonComp *dungeon_comp; // [rsp+30h] [rbp-230h]
  const data::TeamChainDifficultyExcelConfig *difficulty_config_ptr; // [rsp+38h] [rbp-228h]
  std::tuple_element<0,std::pair<int,std::shared_ptr<DungeonScene> > >::type *restart_dungeon_ret; // [rsp+40h] [rbp-220h]
  std::tuple_element<1,std::pair<int,std::shared_ptr<DungeonScene> > >::type *next_dungeon_scene_ptr; // [rsp+48h] [rbp-218h]
  std::shared_ptr<Config> v40; // [rsp+50h] [rbp-210h] BYREF
  std::pair<int,std::shared_ptr<DungeonScene> > __in; // [rsp+60h] [rbp-200h] BYREF
  EnterDungeonOption v42; // [rsp+80h] [rbp-1E0h] BYREF
  common::milog::MiLogStream v43; // [rsp+A0h] [rbp-1C0h] BYREF
  std::map<unsigned int,unsigned int> level_config_id_map; // [rsp+C0h] [rbp-1A0h] BYREF
  char v45[368]; // [rsp+F0h] [rbp-170h] BYREF

  v3 = (unsigned __int64)v45;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(320LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 4 14 dungeon_id:367 64 4 14 difficulty:392 80 16 21 dungeon_scene_ptr:361 112 64 23 new_dun"
                        "geon_context:406 208 72 15 context_opt:385";
  *(_QWORD *)(v3 + 16) = TeamChainActivity::onRestartDungeonReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = 61956;
  v5[536862723] = 62194;
  v5[536862725] = -219021312;
  v5[536862726] = 62194;
  v5[536862728] = -218103808;
  v5[536862729] = -202116109;
  if ( !BaseActivity::isOpening(this, 0) )
    goto LABEL_10;
  v6 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v7 = (unsigned __int64)(this->_vptr_DescribalBase + 17);
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load8(this->_vptr_DescribalBase + 17);
  if ( (*(unsigned __int8 (__fastcall **)(TeamChainActivity *))v7)(v6) )
LABEL_10:
    v8 = 1;
  else
    v8 = 0;
  if ( v8 )
  {
    v9 = 860;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    dungeon_comp = Player::getDungeonComp(this->player_);
    PlayerDungeonComp::getCurDungeon((PlayerDungeonComp *const)(v3 + 80));
    if ( std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v3 + 80), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v43,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/team_chain_activity.cpp",
        "onRestartDungeonReq",
        364);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v43,
        (const char (*)[26])"dungeon_scene_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v43);
      v9 = -1;
    }
    else
    {
      v10 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
      *(_DWORD *)(v3 + 48) = DungeonScene::getDungeonId(v10);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v40);
      v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v40);
      isDungeonClosed = FeatureSwitchMgr::isDungeonClosed(&v11->feature_switch_mgr, *(_DWORD *)(v3 + 48));
      std::shared_ptr<Config>::~shared_ptr(&v40);
      if ( isDungeonClosed )
      {
        common::milog::MiLogStream::create(
          &v43,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/team_chain_activity.cpp",
          "onRestartDungeonReq",
          370);
        v13 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                &v43,
                (const char (*)[46])"[FEATURE_SWITCH] dungeon closed, dungeon_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v43);
        v9 = 142;
      }
      else
      {
        v14 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
        if ( DungeonScene::getIsForceQuit(v14) )
        {
          common::milog::MiLogStream::create(
            &v43,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/team_chain_activity.cpp",
            "onRestartDungeonReq",
            375);
          common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
            &v43,
            (const char (*)[39])"dungeon timeout force all players quit");
          common::milog::MiLogStream::~MiLogStream(&v43);
          v9 = 1123;
        }
        else
        {
          v15 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
          if ( DungeonScene::getDungeonResult(v15) )
          {
            v16 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
            DungeonScene::getDungeonExtraData<TeamChainDungeonContext>(
              (std::optional<TeamChainDungeonContext> *)(v3 + 208),
              v16);
            if ( !std::optional<TeamChainDungeonContext>::has_value((const std::optional<TeamChainDungeonContext> *const)(v3 + 208)) )
            {
              common::milog::MiLogStream::create(
                &v43,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/team_chain_activity.cpp",
                "onRestartDungeonReq",
                388);
              common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                &v43,
                (const char (*)[20])"[TeamChain] no data");
              common::milog::MiLogStream::~MiLogStream(&v43);
              v9 = -1;
            }
            else
            {
              v17 = (unsigned __int64)std::optional<TeamChainDungeonContext>::operator->((std::optional<TeamChainDungeonContext> *const)(v3 + 208));
              if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((v17 >> 3) + 0x7FFF8000) <= 3 )
                v17 = __asan_report_load4(v17);
              stage_id = *(_DWORD *)v17;
              v18 = std::optional<TeamChainDungeonContext>::operator->((std::optional<TeamChainDungeonContext> *const)(v3 + 208));
              if ( *(_BYTE *)(((unsigned __int64)&v18->difficulty >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&v18->difficulty >> 3) + 0x7FFF8000) <= 3 )
              {
                v18 = (TeamChainDungeonContext *)__asan_report_load4(&v18->difficulty);
              }
              *(_DWORD *)(v3 + 64) = v18->difficulty;
              ServiceBox::findService<GameserverService>();
              GameserverService::getConfig((GameserverService *const)&v40);
              v19 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v40);
              difficulty_config_ptr = data::ActivityTeamChainExcelConfigMgrBase::findTeamChainDifficultyExcelConfig(
                                        &v19->design_config.txt_config_mgr.activity_team_chain_config_mgr,
                                        *(_DWORD *)(v3 + 64));
              std::shared_ptr<Config>::~shared_ptr(&v40);
              if ( difficulty_config_ptr )
              {
                v22 = proto::TeamChainRestartDungeonReq::team_info_list(req);
                if ( TeamChainActivity::checkEnterDungeonChooseTeamInfo(this, stage_id, v22) )
                {
                  v9 = -1;
                }
                else
                {
                  TeamChainDungeonContext::TeamChainDungeonContext((TeamChainDungeonContext *const)(v3 + 112));
                  v23 = proto::TeamChainRestartDungeonReq::team_info_list(req);
                  if ( TeamChainActivity::constructEnterDungeonContext(
                         this,
                         stage_id,
                         *(_DWORD *)(v3 + 64),
                         v23,
                         (TeamChainDungeonContext *)(v3 + 112)) )
                  {
                    v9 = -1;
                  }
                  else if ( TeamChainActivity::createEnterDungeonAvatarSnapShot(
                              this,
                              (TeamChainDungeonContext *)(v3 + 112)) )
                  {
                    v9 = -1;
                  }
                  else
                  {
                    memset(&v42, 0, sizeof(v42));
                    EnterDungeonOption::EnterDungeonOption(&v42);
                    memset(&level_config_id_map, 0, sizeof(level_config_id_map));
                    std::map<unsigned int,unsigned int>::map(&level_config_id_map);
                    PlayerDungeonComp::restartDungeon(&__in, dungeon_comp, &level_config_id_map, v42);
                    std::map<unsigned int,unsigned int>::~map(&level_config_id_map);
                    restart_dungeon_ret = std::get<0ul,int,std::shared_ptr<DungeonScene>>(&__in);
                    next_dungeon_scene_ptr = std::get<1ul,int,std::shared_ptr<DungeonScene>>(&__in);
                    if ( *(_BYTE *)(((unsigned __int64)restart_dungeon_ret >> 3) + 0x7FFF8000) != 0
                      && (char)(((unsigned __int8)restart_dungeon_ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)restart_dungeon_ret >> 3)
                                                                                            + 0x7FFF8000) )
                    {
                      __asan_report_load4(restart_dungeon_ret);
                    }
                    if ( *restart_dungeon_ret >= 0 )
                    {
                      if ( *(_BYTE *)(((unsigned __int64)restart_dungeon_ret >> 3) + 0x7FFF8000) != 0
                        && (char)(((unsigned __int8)restart_dungeon_ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)restart_dungeon_ret >> 3)
                                                                                              + 0x7FFF8000) )
                      {
                        __asan_report_load4(restart_dungeon_ret);
                      }
                      if ( *restart_dungeon_ret <= 0 )
                      {
                        if ( std::operator==<DungeonScene>(0LL, next_dungeon_scene_ptr) )
                        {
                          common::milog::MiLogStream::create(
                            &v43,
                            &common::milog::MiLogDefault::default_log_obj_,
                            3u,
                            "./src/player/activity/team_chain_activity.cpp",
                            "onRestartDungeonReq",
                            431);
                          common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
                            &v43,
                            (const char (*)[63])"[TeamChain] restartDungeon failed. next dungeon ptr is nullptr");
                          common::milog::MiLogStream::~MiLogStream(&v43);
                          v9 = -1;
                        }
                        else
                        {
                          v30 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)next_dungeon_scene_ptr);
                          DungeonScene::setDungeonExtraData<TeamChainDungeonContext>(
                            v30,
                            (const TeamChainDungeonContext *)(v3 + 112));
                          if ( *(_BYTE *)(((unsigned __int64)&difficulty_config_ptr->dungeon_level >> 3) + 0x7FFF8000) != 0
                            && *(_BYTE *)(((unsigned __int64)&difficulty_config_ptr->dungeon_level >> 3) + 0x7FFF8000) <= 3 )
                          {
                            __asan_report_load4(&difficulty_config_ptr->dungeon_level);
                          }
                          dungeon_level = difficulty_config_ptr->dungeon_level;
                          if ( dungeon_level )
                          {
                            v31 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)next_dungeon_scene_ptr);
                            DungeonScene::setReviseLevel(v31, dungeon_level);
                          }
                          v9 = 0;
                        }
                      }
                      else
                      {
                        common::milog::MiLogStream::create(
                          &v43,
                          &common::milog::MiLogDefault::default_log_obj_,
                          1u,
                          "./src/player/activity/team_chain_activity.cpp",
                          "onRestartDungeonReq",
                          426);
                        v25 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                                &v43,
                                (const char (*)[41])"[TeamChain] restartDungeon failed, uid: ");
                        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                          __asan_report_load8(&this->player_);
                        val = Player::getUid(this->player_);
                        v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &val);
                        v27 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                                v26,
                                (const char (*)[15])", dungeon_id: ");
                        v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                v27,
                                (const unsigned int *)(v3 + 48));
                        v29 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(
                                v28,
                                (const char (*)[7])" ret: ");
                        common::milog::MiLogStream::operator<<<int,(int *)0>(v29, restart_dungeon_ret);
                        common::milog::MiLogStream::~MiLogStream(&v43);
                        if ( *(_BYTE *)(((unsigned __int64)restart_dungeon_ret >> 3) + 0x7FFF8000) != 0
                          && (char)(((unsigned __int8)restart_dungeon_ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)restart_dungeon_ret >> 3)
                                                                                                + 0x7FFF8000) )
                        {
                          __asan_report_load4(restart_dungeon_ret);
                        }
                        v9 = *restart_dungeon_ret;
                      }
                    }
                    else
                    {
                      common::milog::MiLogStream::create(
                        &v43,
                        &common::milog::MiLogDefault::default_log_obj_,
                        3u,
                        "./src/player/activity/team_chain_activity.cpp",
                        "onRestartDungeonReq",
                        421);
                      v24 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                              &v43,
                              (const char (*)[41])"[TeamChain] restartDungeon failed. ret: ");
                      common::milog::MiLogStream::operator<<<int,(int *)0>(v24, restart_dungeon_ret);
                      common::milog::MiLogStream::~MiLogStream(&v43);
                      if ( *(_BYTE *)(((unsigned __int64)restart_dungeon_ret >> 3) + 0x7FFF8000) != 0
                        && (char)(((unsigned __int8)restart_dungeon_ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)restart_dungeon_ret >> 3)
                                                                                              + 0x7FFF8000) )
                      {
                        __asan_report_load4(restart_dungeon_ret);
                      }
                      v9 = *restart_dungeon_ret;
                    }
                    std::pair<int,std::shared_ptr<DungeonScene>>::~pair(&__in);
                  }
                  TeamChainDungeonContext::~TeamChainDungeonContext((TeamChainDungeonContext *const)(v3 + 112));
                }
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v43,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/activity/team_chain_activity.cpp",
                  "onRestartDungeonReq",
                  396);
                v20 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                        &v43,
                        (const char (*)[36])"[TeamChain] team_chain_difficulty: ");
                v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v20,
                        (const unsigned int *)(v3 + 64));
                common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v21, (const char (*)[12])off_2648B580);
                common::milog::MiLogStream::~MiLogStream(&v43);
                v9 = -1;
              }
            }
            std::optional<TeamChainDungeonContext>::~optional((std::optional<TeamChainDungeonContext> *const)(v3 + 208));
          }
          else
          {
            common::milog::MiLogStream::create(
              &v43,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/team_chain_activity.cpp",
              "onRestartDungeonReq",
              381);
            common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
              &v43,
              (const char (*)[51])"[TeamChain] dungeon is not settled, cannot restart");
            common::milog::MiLogStream::~MiLogStream(&v43);
            v9 = -1;
          }
        }
      }
    }
    std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v3 + 80));
  }
  result = v9;
  if ( v45 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8014) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 445: range 000000001800A224-000000001800AA2F
int32_t __cdecl TeamChainActivity::onTakeCostumeRewardReq(
        TeamChainActivity *const this,
        const proto::TeamChainTakeCostumeRewardReq *req,
        proto::TeamChainTakeCostumeRewardRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  TeamChainActivity *v6; // rdx
  unsigned __int64 v7; // rax
  char v8; // al
  int32_t result; // eax
  ActivityTeamChainExcelConfigMgr *p_activity_team_chain_config_mgr; // rcx
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v11; // rax
  _DWORD *v12; // rdx
  common::milog::MiLogStream *v13; // rax
  PlayerItemComp *ItemComp; // rcx
  common::milog::MiLogStream *v15; // r14
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  PlayerItemComp *p_costume_reward_id; // rdi
  __int64 costume_reward_id; // rsi
  int32_t ret; // [rsp+2Ch] [rbp-104h]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+30h] [rbp-100h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+38h] [rbp-F8h] BYREF
  const data::TeamChainOverallExcelConfig *overall_config_ptr; // [rsp+40h] [rbp-F0h]
  const std::vector<unsigned int> *__for_range; // [rsp+48h] [rbp-E8h]
  std::shared_ptr<Config> v26; // [rsp+50h] [rbp-E0h] BYREF
  common::milog::MiLogStream v27; // [rsp+60h] [rbp-D0h] BYREF
  char v28[176]; // [rsp+80h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 18 pre_watcher_id:464 64 24 10 reason:475";
  *(_QWORD *)(v3 + 16) = TeamChainActivity::onTakeCostumeRewardReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  if ( !BaseActivity::isOpening(this, 0) )
    goto LABEL_10;
  v6 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v7 = (unsigned __int64)(this->_vptr_DescribalBase + 17);
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load8(this->_vptr_DescribalBase + 17);
  if ( (*(unsigned __int8 (__fastcall **)(TeamChainActivity *))v7)(v6) )
LABEL_10:
    v8 = 1;
  else
    v8 = 0;
  if ( v8 )
  {
    result = 860;
    goto LABEL_48;
  }
  if ( *(char *)(((unsigned __int64)&this->is_token_costume_reward_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_token_costume_reward_);
  if ( this->is_token_costume_reward_ )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/team_chain_activity.cpp",
      "onTakeCostumeRewardReq",
      454);
    common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
      &v27,
      (const char (*)[37])"[TeamChain] has token costume reward");
    common::milog::MiLogStream::~MiLogStream(&v27);
    result = -1;
    goto LABEL_48;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v26);
  p_activity_team_chain_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26)->design_config.txt_config_mgr.activity_team_chain_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->schedule_id_);
  }
  overall_config_ptr = data::ActivityTeamChainExcelConfigMgrBase::findTeamChainOverallExcelConfig(
                         p_activity_team_chain_config_mgr,
                         this->schedule_id_);
  std::shared_ptr<Config>::~shared_ptr(&v26);
  if ( !overall_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/team_chain_activity.cpp",
      "onTakeCostumeRewardReq",
      461);
    common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
      &v27,
      (const char (*)[38])"[TeamChain] overall config is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v27);
    result = -1;
    goto LABEL_48;
  }
  __for_range = &overall_config_ptr->costume_target_watcher_id_list;
  __for_begin._M_current = std::vector<unsigned int>::begin(&overall_config_ptr->costume_target_watcher_id_list)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(&overall_config_ptr->costume_target_watcher_id_list)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v11 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    v12 = v11;
    if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v11);
    }
    *(_DWORD *)(v3 + 48) = *v12;
    if ( !BaseActivity::isWatcherFinished(this, *(_DWORD *)(v3 + 48)) )
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/team_chain_activity.cpp",
        "onTakeCostumeRewardReq",
        468);
      v13 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
              &v27,
              (const char (*)[38])"[TeamChain] watcher is not finished: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v27);
      result = -1;
      goto LABEL_48;
    }
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&overall_config_ptr->costume_reward_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&overall_config_ptr->costume_reward_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&overall_config_ptr->costume_reward_id);
  }
  if ( !overall_config_ptr->costume_reward_id )
    goto LABEL_47;
  ActionReason::ActionReason(
    (ActionReason *const)(v3 + 64),
    ACTION_REASON_TEAM_CHAIN_COSTUME_REWARD,
    ITEM_LIMIT_ACTIVITY_TEAM_CHAIN);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  ItemComp = Player::getItemComp(this->player_);
  if ( *(_BYTE *)(((unsigned __int64)&overall_config_ptr->costume_reward_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&overall_config_ptr->costume_reward_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&overall_config_ptr->costume_reward_id);
  }
  ret = PlayerItemComp::checkGrantReward(
          ItemComp,
          overall_config_ptr->costume_reward_id,
          (const ActionReason *)(v3 + 64));
  if ( !ret )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    p_costume_reward_id = Player::getItemComp(this->player_);
    if ( *(_BYTE *)(((unsigned __int64)&overall_config_ptr->costume_reward_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&overall_config_ptr->costume_reward_id >> 3) + 0x7FFF8000) <= 3 )
    {
      p_costume_reward_id = (PlayerItemComp *)&overall_config_ptr->costume_reward_id;
      __asan_report_load4(&overall_config_ptr->costume_reward_id);
    }
    costume_reward_id = overall_config_ptr->costume_reward_id;
    PlayerItemComp::grantReward(p_costume_reward_id, costume_reward_id, (const ActionReason *)(v3 + 64), 0LL);
    if ( *(char *)(((unsigned __int64)&this->is_token_costume_reward_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->is_token_costume_reward_, costume_reward_id, &this->is_token_costume_reward_);
    this->is_token_costume_reward_ = 1;
    BaseActivity::notifyClientData(this, 0);
LABEL_47:
    result = 0;
    goto LABEL_48;
  }
  common::milog::MiLogStream::create(
    &v27,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/activity/team_chain_activity.cpp",
    "onTakeCostumeRewardReq",
    479);
  v15 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
          &v27,
          (const char (*)[43])"[TeamChain] checkGrantReward failed, uid: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  *(_DWORD *)(v3 + 48) = Player::getUid(this->player_);
  v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 48));
  v17 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v16, (const char (*)[14])", reward_id: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &overall_config_ptr->costume_reward_id);
  common::milog::MiLogStream::~MiLogStream(&v27);
  result = ret;
LABEL_48:
  if ( v28 == (char *)v3 )
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

// Line 490: range 000000001800AA70-000000001800B670
int32_t __cdecl TeamChainActivity::initTeamChainEnterSceneAvatar(
        TeamChainActivity *const this,
        DungeonScene *dungeon_scene,
        std::vector<std::shared_ptr<Avatar>> *enter_scene_avatar_vec,
        AvatarPtr *appear_avatar_ptr)
{
  int32_t v4; // r14d
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  common::milog::MiLogStream *v8; // r14
  TeamChainDungeonContext *v9; // rax
  std::vector<TeamChainRoomTeamInfo>::size_type v10; // r15
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  PlayerAvatarComp *AvatarComp; // rcx
  signed int v15; // esi
  common::milog::MiLogStream *v16; // rax
  int v17; // r15d
  std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  uint64_t Guid; // rax
  int v20; // r15d
  common::milog::MiLogStream *v21; // rax
  const std::weak_ptr<Avatar> *v22; // rax
  int32_t result; // eax
  std::vector<TeamChainRoomAvatarInfo>::iterator __for_begin; // [rsp+30h] [rbp-280h] BYREF
  std::vector<TeamChainRoomAvatarInfo>::iterator __for_end; // [rsp+38h] [rbp-278h] BYREF
  TeamChainRoomTeamInfo *next_room_team_info; // [rsp+40h] [rbp-270h]
  std::vector<TeamChainRoomAvatarInfo> *__for_range; // [rsp+48h] [rbp-268h]
  std::vector<std::weak_ptr<Avatar>> *__for_range_0; // [rsp+50h] [rbp-260h]
  TeamChainRoomAvatarInfo *avatar_info; // [rsp+58h] [rbp-258h]
  common::milog::MiLogStream v32; // [rsp+60h] [rbp-250h] BYREF
  char v33[560]; // [rsp+80h] [rbp-230h] BYREF

  v5 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_3(512LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "8 48 4 17 next_room_idx:499 64 16 21 target_avatar_ptr:515 96 16 14 avatar_wtr:542 128 16 14 ava"
                        "tar_ptr:544 160 24 21 mirror_avatar_vec:512 224 40 13 committer:506 304 64 19 dungeon_context:49"
                        "7 400 72 23 dungeon_context_opt:491";
  *(_QWORD *)(v5 + 16) = TeamChainActivity::initTeamChainEnterSceneAvatar;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -219021312;
  v7[536862723] = -219021312;
  v7[536862724] = -219021312;
  v7[536862725] = -234881024;
  v7[536862726] = -218959118;
  v7[536862728] = -218959360;
  v7[536862729] = 62194;
  v7[536862731] = -219021312;
  v7[536862732] = 62194;
  v7[536862734] = -218103808;
  v7[536862735] = -202116109;
  DungeonScene::getDungeonExtraData<TeamChainDungeonContext>(
    (std::optional<TeamChainDungeonContext> *)(v5 + 400),
    dungeon_scene);
  if ( !std::optional<TeamChainDungeonContext>::has_value((const std::optional<TeamChainDungeonContext> *const)(v5 + 400)) )
  {
    common::milog::MiLogStream::create(
      &v32,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/team_chain_activity.cpp",
      "initTeamChainEnterSceneAvatar",
      494);
    v8 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
           &v32,
           (const char (*)[47])"[TeamChain] dungeon context has not data, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    *(_DWORD *)(v5 + 48) = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v5 + 48));
    common::milog::MiLogStream::~MiLogStream(&v32);
    v4 = -1;
    goto LABEL_47;
  }
  v9 = std::optional<TeamChainDungeonContext>::value((std::optional<TeamChainDungeonContext> *const)(v5 + 400));
  TeamChainDungeonContext::TeamChainDungeonContext((TeamChainDungeonContext *const)(v5 + 304), v9);
  *(_DWORD *)(v5 + 48) = std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v5 + 344));
  v10 = *(unsigned int *)(v5 + 48);
  if ( v10 >= std::vector<TeamChainRoomTeamInfo>::size((const std::vector<TeamChainRoomTeamInfo> *const)(v5 + 320)) )
  {
    common::milog::MiLogStream::create(
      &v32,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/team_chain_activity.cpp",
      "initTeamChainEnterSceneAvatar",
      502);
    v11 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
            &v32,
            (const char (*)[28])"[TeamChain] next_room_idx: ");
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v5 + 48));
    v13 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(v12, (const char (*)[37])off_26496EE0);
    __for_end._M_current = (TeamChainRoomAvatarInfo *)std::vector<TeamChainRoomTeamInfo>::size((const std::vector<TeamChainRoomTeamInfo> *const)(v5 + 320));
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v13, (const unsigned __int64 *)&__for_end);
    common::milog::MiLogStream::~MiLogStream(&v32);
    v4 = -1;
    goto LABEL_46;
  }
  std::function<void ()(void)>::function<TeamChainActivity::initTeamChainEnterSceneAvatar(DungeonScene &,std::vector<std::shared_ptr<Avatar>> &,std::shared_ptr<Avatar>&)::{lambda(void)#1},void,void>(
    (std::function<void()> *const)&v32,
    (TeamChainActivity::initTeamChainEnterSceneAvatar::<lambda()>)this);
  common::tools::ScopedCommitter::ScopedCommitter(
    (common::tools::ScopedCommitter *const)(v5 + 224),
    (std::function<void()> *)&v32);
  std::function<void ()(void)>::~function((std::function<void()> *const)&v32);
  next_room_team_info = std::vector<TeamChainRoomTeamInfo>::operator[](
                          (std::vector<TeamChainRoomTeamInfo> *const)(v5 + 320),
                          *(unsigned int *)(v5 + 48));
  std::vector<std::weak_ptr<Avatar>>::vector((std::vector<std::weak_ptr<Avatar>> *const)(v5 + 160));
  __for_range = &next_room_team_info->avatar_info_vec;
  __for_begin._M_current = std::vector<TeamChainRoomAvatarInfo>::begin(&next_room_team_info->avatar_info_vec)._M_current;
  __for_end._M_current = std::vector<TeamChainRoomAvatarInfo>::end(&next_room_team_info->avatar_info_vec)._M_current;
  while ( __gnu_cxx::operator!=<TeamChainRoomAvatarInfo *,std::vector<TeamChainRoomAvatarInfo>>(
            &__for_begin,
            &__for_end) )
  {
    avatar_info = __gnu_cxx::__normal_iterator<TeamChainRoomAvatarInfo *,std::vector<TeamChainRoomAvatarInfo>>::operator*(&__for_begin);
    std::shared_ptr<Avatar>::shared_ptr((std::shared_ptr<Avatar> *const)(v5 + 64), 0LL);
    if ( *(_BYTE *)(((unsigned __int64)&avatar_info->in_dungeon_avatar_guid >> 3) + 0x7FFF8000) )
      __asan_report_load8(&avatar_info->in_dungeon_avatar_guid);
    if ( avatar_info->in_dungeon_avatar_guid )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      AvatarComp = Player::getAvatarComp(this->player_);
      if ( *(_BYTE *)(((unsigned __int64)&avatar_info->in_dungeon_avatar_guid >> 3) + 0x7FFF8000) )
        __asan_report_load8(&avatar_info->in_dungeon_avatar_guid);
      PlayerAvatarComp::findAvatar((const PlayerAvatarComp *const)(v5 + 128), (uint64_t)AvatarComp);
      std::shared_ptr<Avatar>::operator=(
        (std::shared_ptr<Avatar> *const)(v5 + 64),
        (std::shared_ptr<Avatar> *)(v5 + 128));
      std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v5 + 128));
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      v15 = (unsigned int)Player::getAvatarComp(this->player_);
      if ( *(_BYTE *)(((unsigned __int64)&avatar_info->snapshot_bin_avatar_guid >> 3) + 0x7FFF8000) )
        __asan_report_load8(&avatar_info->snapshot_bin_avatar_guid);
      PlayerAvatarComp::findMirrorAvatarOrCreateFromSnapshot(
        (PlayerAvatarComp *const)(v5 + 96),
        (proto::AvatarSnapshotType)v15,
        3uLL);
      if ( std::operator==<MirrorAvatar>((const std::shared_ptr<MirrorAvatar> *)(v5 + 96), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v32,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/team_chain_activity.cpp",
          "initTeamChainEnterSceneAvatar",
          527);
        v16 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
                &v32,
                (const char (*)[58])"[TeamChain] findMirrorAvatarOrCreateFromSnapshot failed: ");
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
          v16,
          &avatar_info->snapshot_bin_avatar_guid);
        common::milog::MiLogStream::~MiLogStream(&v32);
        v4 = -1;
        v17 = 0;
      }
      else
      {
        v18 = std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
        Guid = Avatar::getGuid(v18);
        if ( *(_BYTE *)(((unsigned __int64)&avatar_info->in_dungeon_avatar_guid >> 3) + 0x7FFF8000) )
          Guid = __asan_report_store8(&avatar_info->in_dungeon_avatar_guid, 0LL);
        avatar_info->in_dungeon_avatar_guid = Guid;
        std::vector<unsigned long>::push_back(&this->in_dungeon_avatar_guid_vec_, &avatar_info->in_dungeon_avatar_guid);
        std::dynamic_pointer_cast<Avatar,MirrorAvatar>((const std::shared_ptr<MirrorAvatar> *)(v5 + 128));
        std::shared_ptr<Avatar>::operator=(
          (std::shared_ptr<Avatar> *const)(v5 + 64),
          (std::shared_ptr<Avatar> *)(v5 + 128));
        std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v5 + 128));
        v17 = 1;
      }
      std::shared_ptr<MirrorAvatar>::~shared_ptr((std::shared_ptr<MirrorAvatar> *const)(v5 + 96));
      if ( v17 != 1 )
      {
        v20 = 0;
        goto LABEL_34;
      }
    }
    if ( std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v5 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v32,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/team_chain_activity.cpp",
        "initTeamChainEnterSceneAvatar",
        536);
      v21 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
              &v32,
              (const char (*)[39])"[TeamChain] get mirror avatar failed: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &avatar_info->avatar_id);
      common::milog::MiLogStream::~MiLogStream(&v32);
      v4 = -1;
      v20 = 0;
    }
    else
    {
      std::weak_ptr<Avatar>::weak_ptr<Avatar,void>(
        (std::weak_ptr<Avatar> *const)(v5 + 128),
        (const std::shared_ptr<Avatar> *)(v5 + 64));
      std::vector<std::weak_ptr<Avatar>>::push_back(
        (std::vector<std::weak_ptr<Avatar>> *const)(v5 + 160),
        (std::vector<std::weak_ptr<Avatar>>::value_type *)(v5 + 128));
      std::weak_ptr<Avatar>::~weak_ptr((std::weak_ptr<Avatar> *const)(v5 + 128));
      v20 = 1;
    }
LABEL_34:
    std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v5 + 64));
    if ( v20 != 1 )
      goto LABEL_45;
    __gnu_cxx::__normal_iterator<TeamChainRoomAvatarInfo *,std::vector<TeamChainRoomAvatarInfo>>::operator++(&__for_begin);
  }
  __for_range_0 = (std::vector<std::weak_ptr<Avatar>> *)(v5 + 160);
  __for_begin._M_current = (TeamChainRoomAvatarInfo *)std::vector<std::weak_ptr<Avatar>>::begin((std::vector<std::weak_ptr<Avatar>> *const)(v5 + 160))._M_current;
  __for_end._M_current = (TeamChainRoomAvatarInfo *)std::vector<std::weak_ptr<Avatar>>::end(__for_range_0)._M_current;
  while ( __gnu_cxx::operator!=<std::weak_ptr<Avatar> *,std::vector<std::weak_ptr<Avatar>>>(
            (const __gnu_cxx::__normal_iterator<std::weak_ptr<Avatar>*,std::vector<std::weak_ptr<Avatar>> > *)&__for_begin,
            (const __gnu_cxx::__normal_iterator<std::weak_ptr<Avatar>*,std::vector<std::weak_ptr<Avatar>> > *)&__for_end) )
  {
    v22 = __gnu_cxx::__normal_iterator<std::weak_ptr<Avatar> *,std::vector<std::weak_ptr<Avatar>>>::operator*((const __gnu_cxx::__normal_iterator<std::weak_ptr<Avatar>*,std::vector<std::weak_ptr<Avatar>> > *const)&__for_begin);
    std::weak_ptr<Avatar>::weak_ptr((std::weak_ptr<Avatar> *const)(v5 + 96), v22);
    std::weak_ptr<Avatar>::lock((const std::weak_ptr<Avatar> *const)(v5 + 128));
    if ( !std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v5 + 128), 0LL) )
    {
      std::vector<std::shared_ptr<Avatar>>::push_back(
        enter_scene_avatar_vec,
        (const std::vector<std::shared_ptr<Avatar>>::value_type *)(v5 + 128));
      if ( std::operator==<Avatar>(appear_avatar_ptr, 0LL) )
        std::shared_ptr<Avatar>::operator=(appear_avatar_ptr, (const std::shared_ptr<Avatar> *)(v5 + 128));
    }
    std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v5 + 128));
    std::weak_ptr<Avatar>::~weak_ptr((std::weak_ptr<Avatar> *const)(v5 + 96));
    __gnu_cxx::__normal_iterator<std::weak_ptr<Avatar> *,std::vector<std::weak_ptr<Avatar>>>::operator++((__gnu_cxx::__normal_iterator<std::weak_ptr<Avatar>*,std::vector<std::weak_ptr<Avatar>> > *const)&__for_begin);
  }
  if ( std::vector<std::shared_ptr<Avatar>>::empty(enter_scene_avatar_vec) )
  {
    common::milog::MiLogStream::create(
      &v32,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/team_chain_activity.cpp",
      "initTeamChainEnterSceneAvatar",
      557);
    common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
      &v32,
      (const char (*)[49])"[TeamChain] initTeamChainEnterSceneAvatar failed");
    common::milog::MiLogStream::~MiLogStream(&v32);
    v4 = -1;
  }
  else
  {
    common::tools::ScopedCommitter::commit((common::tools::ScopedCommitter *const)(v5 + 224));
    v4 = 0;
  }
LABEL_45:
  std::vector<std::weak_ptr<Avatar>>::~vector((std::vector<std::weak_ptr<Avatar>> *const)(v5 + 160));
  common::tools::ScopedCommitter::~ScopedCommitter((common::tools::ScopedCommitter *const)(v5 + 224));
LABEL_46:
  TeamChainDungeonContext::~TeamChainDungeonContext((TeamChainDungeonContext *const)(v5 + 304));
LABEL_47:
  std::optional<TeamChainDungeonContext>::~optional((std::optional<TeamChainDungeonContext> *const)(v5 + 400));
  result = v4;
  if ( v33 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8038) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 506: range 000000001800AA30-000000001800AA6E
void __cdecl TeamChainActivity::initTeamChainEnterSceneAvatar(DungeonScene &,std::vector<std::shared_ptr<Avatar>> &,std::shared_ptr<Avatar>&)::{lambda(void)#1}::operator()(
        const TeamChainActivity::initTeamChainEnterSceneAvatar::<lambda()> *const __closure)
{
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  TeamChainActivity::recallInDungeonAvatars(__closure->__this);
};

// Line 565: range 000000001800B672-000000001800BB9E
void __cdecl TeamChainActivity::onPostEnterSceneEvent(TeamChainActivity *const this, const PostEnterSceneEvent *event)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  TeamChainDungeonContext *v8; // rax
  TeamChainDungeonContext *v9; // rax
  google::protobuf::RepeatedField<unsigned int> *v10; // r14
  std::vector<TeamChainRoomTeamInfo> *p_room_team_info_vec; // rdx
  std::vector<TeamChainRoomTeamInfo>::reference v12; // rax
  uint32_t dungeon_id; // [rsp+10h] [rbp-190h]
  google::protobuf::uint32 stage_id; // [rsp+14h] [rbp-18Ch]
  std::vector<unsigned int>::size_type cur_idx; // [rsp+18h] [rbp-188h]
  std::shared_ptr<Config> v16; // [rsp+20h] [rbp-180h] BYREF
  common::milog::MiLogStream v17; // [rsp+30h] [rbp-170h] BYREF
  char v18[336]; // [rsp+50h] [rbp-150h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 16 17 cur_scene_ptr:566 64 16 21 dungeon_scene_ptr:571 96 48 10 notify:589 176 72 15 context_opt:582";
  *(_QWORD *)(v2 + 16) = TeamChainActivity::onPostEnterSceneEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = 62194;
  v4[536862727] = -218103808;
  v4[536862728] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 32));
  if ( !std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 32), 0LL) )
  {
    std::dynamic_pointer_cast<DungeonScene,Scene>((const std::shared_ptr<Scene> *)(v2 + 64));
    if ( !std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v2 + 64), 0LL) )
    {
      v5 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      dungeon_id = DungeonScene::getDungeonId(v5);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v16);
      v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v16);
      stage_id = ActivityTeamChainExcelConfigMgr::getStageIdByDungeonId(
                   &v6->design_config.txt_config_mgr.activity_team_chain_config_mgr,
                   dungeon_id);
      std::shared_ptr<Config>::~shared_ptr(&v16);
      if ( stage_id )
      {
        v7 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        DungeonScene::getDungeonExtraData<TeamChainDungeonContext>(
          (std::optional<TeamChainDungeonContext> *)(v2 + 176),
          v7);
        if ( !std::optional<TeamChainDungeonContext>::has_value((const std::optional<TeamChainDungeonContext> *const)(v2 + 176)) )
        {
          common::milog::MiLogStream::create(
            &v17,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/team_chain_activity.cpp",
            "onPostEnterSceneEvent",
            585);
          common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
            &v17,
            (const char (*)[22])"[TeamChain] no data. ");
          common::milog::MiLogStream::~MiLogStream(&v17);
        }
        else
        {
          proto::TeamChainDungeonInfoNotify::TeamChainDungeonInfoNotify((proto::TeamChainDungeonInfoNotify *const)(v2 + 96));
          proto::TeamChainDungeonInfoNotify::set_stage_id((proto::TeamChainDungeonInfoNotify *const)(v2 + 96), stage_id);
          v8 = std::optional<TeamChainDungeonContext>::operator->((std::optional<TeamChainDungeonContext> *const)(v2 + 176));
          cur_idx = std::vector<unsigned int>::size(&v8->room_score_vec);
          v9 = std::optional<TeamChainDungeonContext>::operator->((std::optional<TeamChainDungeonContext> *const)(v2 + 176));
          if ( cur_idx < std::vector<TeamChainRoomTeamInfo>::size(&v9->room_team_info_vec) )
          {
            v10 = proto::TeamChainDungeonInfoNotify::mutable_skill_no_list((proto::TeamChainDungeonInfoNotify *const)(v2 + 96));
            p_room_team_info_vec = &std::optional<TeamChainDungeonContext>::operator->((std::optional<TeamChainDungeonContext> *const)(v2 + 176))->room_team_info_vec;
            v12 = std::vector<TeamChainRoomTeamInfo>::operator[](p_room_team_info_vec, cur_idx);
            common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&v12->skill_no_vec, v10);
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 96));
          }
          proto::TeamChainDungeonInfoNotify::~TeamChainDungeonInfoNotify((proto::TeamChainDungeonInfoNotify *const)(v2 + 96));
        }
        std::optional<TeamChainDungeonContext>::~optional((std::optional<TeamChainDungeonContext> *const)(v2 + 176));
      }
    }
    std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 64));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 32));
  if ( v18 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF801C) = 0LL;
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

// Line 603: range 000000001800BBA0-000000001800C436
void __cdecl TeamChainActivity::onDungeonSettle(
        TeamChainActivity *const this,
        DungeonScene *dungeon_scene,
        proto::DungeonSettleNotify *notify)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  unsigned __int64 v10; // rax
  TeamChainDungeonContext *v11; // rax
  google::protobuf::RepeatedField<unsigned int> *v12; // r14
  TeamChainDungeonContext *v13; // rax
  TeamChainDungeonContext *v14; // rax
  unsigned int *M_current; // r14
  TeamChainDungeonContext *v16; // rax
  std::vector<unsigned int>::iterator v17; // rax
  PlayerEventComp *EventComp; // r14
  TeamChainDungeonContext *v19; // rax
  TeamChainDungeonContext *v20; // rax
  common::milog::MiLogStream *v21; // r14
  TeamChainDungeonContext *v22; // rax
  common::milog::MiLogStream *v23; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,TeamChainStageData> >::pointer v24; // rdx
  uint32_t *p_best_score; // rax
  __int64 v26; // rsi
  uint32_t v27; // r14d
  std::_Rb_tree_iterator<std::pair<unsigned int const,TeamChainStageData> >::pointer v28; // rdx
  char v29; // cl
  std::_Rb_tree_iterator<std::pair<unsigned int const,TeamChainStageData> >::_Self __y; // [rsp+20h] [rbp-180h] BYREF
  proto::TeamChainSettleInfo *settle_info; // [rsp+28h] [rbp-178h]
  std::shared_ptr<TeamChainStageSuccessFinishEvent> __r; // [rsp+30h] [rbp-170h] BYREF
  std::shared_ptr<BaseEvent> p_event_ptr; // [rsp+40h] [rbp-160h] BYREF
  common::milog::MiLogStream v35; // [rsp+50h] [rbp-150h] BYREF
  char v36[304]; // [rsp+70h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 4 15 total_score:637 48 8 14 stage_iter:641 80 16 17 cur_scene_ptr:607 112 16 19 cur_dungeo"
                        "n_ptr:613 144 72 15 context_opt:619";
  *(_QWORD *)(v3 + 16) = TeamChainActivity::onDungeonSettle;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862721] = -234881024;
  v5[536862722] = 62194;
  v5[536862723] = 62194;
  v5[536862724] = 62194;
  v5[536862726] = -218103808;
  v5[536862727] = -202116109;
  TeamChainActivity::recallInDungeonAvatars(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v3 + 80));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 80), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v35,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/team_chain_activity.cpp",
      "onDungeonSettle",
      610);
    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
      &v35,
      (const char (*)[34])"[TeamChain] cur_scene_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v35);
  }
  else
  {
    std::dynamic_pointer_cast<DungeonScene,Scene>((const std::shared_ptr<Scene> *)(v3 + 112));
    if ( std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v3 + 112), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v35,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/team_chain_activity.cpp",
        "onDungeonSettle",
        616);
      v6 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
             &v35,
             (const char (*)[49])"[TeamChain] dynamic cast to dungeon scene failed");
      v7 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
      *(_DWORD *)(v3 + 32) = Scene::getSceneId(v7);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v35);
    }
    else
    {
      v8 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
      DungeonScene::getDungeonExtraData<TeamChainDungeonContext>(
        (std::optional<TeamChainDungeonContext> *)(v3 + 144),
        v8);
      if ( !std::optional<TeamChainDungeonContext>::has_value((const std::optional<TeamChainDungeonContext> *const)(v3 + 144)) )
      {
        common::milog::MiLogStream::create(
          &v35,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/team_chain_activity.cpp",
          "onDungeonSettle",
          622);
        common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v35, (const char (*)[20])"[TeamChain] no data");
        common::milog::MiLogStream::~MiLogStream(&v35);
      }
      else
      {
        v9 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
        if ( DungeonScene::isSettledAndSuccess(v9) )
        {
          settle_info = proto::DungeonSettleNotify::mutable_team_chain_settle_info(notify);
          v10 = (unsigned __int64)std::optional<TeamChainDungeonContext>::operator->((std::optional<TeamChainDungeonContext> *const)(v3 + 144));
          if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((v10 >> 3) + 0x7FFF8000) <= 3 )
            v10 = __asan_report_load4(v10);
          proto::TeamChainSettleInfo::set_stage_id(settle_info, *(_DWORD *)v10);
          v11 = std::optional<TeamChainDungeonContext>::operator->((std::optional<TeamChainDungeonContext> *const)(v3 + 144));
          if ( *(_BYTE *)(((unsigned __int64)&v11->difficulty >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&v11->difficulty >> 3) + 0x7FFF8000) <= 3 )
          {
            v11 = (TeamChainDungeonContext *)__asan_report_load4(&v11->difficulty);
          }
          proto::TeamChainSettleInfo::set_difficulty(settle_info, v11->difficulty);
          v12 = proto::TeamChainSettleInfo::mutable_score_list(settle_info);
          v13 = std::optional<TeamChainDungeonContext>::operator->((std::optional<TeamChainDungeonContext> *const)(v3 + 144));
          common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&v13->room_score_vec, v12);
          v14 = std::optional<TeamChainDungeonContext>::operator->((std::optional<TeamChainDungeonContext> *const)(v3 + 144));
          M_current = std::vector<unsigned int>::end(&v14->room_score_vec)._M_current;
          v16 = std::optional<TeamChainDungeonContext>::operator->((std::optional<TeamChainDungeonContext> *const)(v3 + 144));
          v17._M_current = std::vector<unsigned int>::begin(&v16->room_score_vec)._M_current;
          *(_DWORD *)(v3 + 32) = std::accumulate<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,int>(
                                   v17,
                                   (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current,
                                   0);
          proto::TeamChainSettleInfo::set_total_score(settle_info, *(_DWORD *)(v3 + 32));
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          EventComp = Player::getEventComp(this->player_);
          v19 = std::optional<TeamChainDungeonContext>::operator->((std::optional<TeamChainDungeonContext> *const)(v3 + 144));
          common::tools::perf::make_shared<TeamChainStageSuccessFinishEvent,unsigned int &,unsigned int const&>(
            (unsigned int *)&__r,
            &v19->stage_id,
            (unsigned int *)(v3 + 32),
            &v19->stage_id);
          std::shared_ptr<BaseEvent>::shared_ptr<TeamChainStageSuccessFinishEvent,void>(&p_event_ptr, &__r);
          PlayerEventComp::notifyEvent(EventComp, &p_event_ptr);
          std::shared_ptr<BaseEvent>::~shared_ptr(&p_event_ptr);
          std::shared_ptr<TeamChainStageSuccessFinishEvent>::~shared_ptr(&__r);
          v20 = std::optional<TeamChainDungeonContext>::operator->((std::optional<TeamChainDungeonContext> *const)(v3 + 144));
          *(std::map<unsigned int,TeamChainStageData>::iterator *)(v3 + 48) = std::map<unsigned int,TeamChainStageData>::find(
                                                                                &this->stage_data_map_,
                                                                                &v20->stage_id);
          __y._M_node = std::map<unsigned int,TeamChainStageData>::end(&this->stage_data_map_)._M_node;
          if ( std::operator==(
                 (const std::_Rb_tree_iterator<std::pair<unsigned int const,TeamChainStageData> >::_Self *)(v3 + 48),
                 &__y) )
          {
            common::milog::MiLogStream::create(
              &v35,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/team_chain_activity.cpp",
              "onDungeonSettle",
              644);
            v21 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                    &v35,
                    (const char (*)[11])"stage_id: ");
            v22 = std::optional<TeamChainDungeonContext>::operator->((std::optional<TeamChainDungeonContext> *const)(v3 + 144));
            v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &v22->stage_id);
            common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v23, (const char (*)[27])off_26497280);
            common::milog::MiLogStream::~MiLogStream(&v35);
          }
          else
          {
            v24 = std::_Rb_tree_iterator<std::pair<unsigned int const,TeamChainStageData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,TeamChainStageData> > *const)(v3 + 48));
            p_best_score = &v24->second.best_score;
            if ( *(_BYTE *)(((unsigned __int64)p_best_score >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)p_best_score & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_best_score >> 3)
                                                                             + 0x7FFF8000) )
            {
              __asan_report_load4(p_best_score);
            }
            if ( v24->second.best_score < *(_DWORD *)(v3 + 32) )
            {
              v26 = 1LL;
              proto::TeamChainSettleInfo::set_is_new_record(settle_info, 1);
              v27 = *(_DWORD *)(v3 + 32);
              v28 = std::_Rb_tree_iterator<std::pair<unsigned int const,TeamChainStageData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,TeamChainStageData> > *const)(v3 + 48));
              v29 = *(_BYTE *)(((unsigned __int64)&v28->second.best_score >> 3) + 0x7FFF8000);
              if ( v29 != 0 && (char)((((_BYTE)v28 + 12) & 7) + 3) >= v29 )
              {
                LOBYTE(v26) = v29 != 0;
                __asan_report_store4(&v28->second.best_score, v26, v28);
              }
              v28->second.best_score = v27;
              BaseActivity::notifyClientData(this, 0);
            }
          }
        }
      }
      std::optional<TeamChainDungeonContext>::~optional((std::optional<TeamChainDungeonContext> *const)(v3 + 144));
    }
    std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v3 + 112));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 80));
  if ( v36 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
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
};

// Line 659: range 000000001800C438-000000001800C544
uint32_t __cdecl TeamChainActivity::getSuccessFinishStageCnt(
        const TeamChainActivity *const this,
        const std::unordered_set<unsigned int> *target_stage_id_set)
{
  uint32_t cnt; // [rsp+1Ch] [rbp-34h]
  std::map<unsigned int,TeamChainStageData>::const_iterator __for_begin; // [rsp+20h] [rbp-30h] BYREF
  std::map<unsigned int,TeamChainStageData>::const_iterator __for_end; // [rsp+28h] [rbp-28h] BYREF
  const std::map<unsigned int,TeamChainStageData> *__for_range; // [rsp+30h] [rbp-20h]
  const std::pair<unsigned int const,TeamChainStageData> *v7; // [rsp+38h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,TeamChainStageData> >::type *stage_id; // [rsp+40h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,TeamChainStageData> >::type *stage_data; // [rsp+48h] [rbp-8h]

  cnt = 0;
  __for_range = &this->stage_data_map_;
  __for_begin._M_node = std::map<unsigned int,TeamChainStageData>::begin(&this->stage_data_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,TeamChainStageData>::end(&this->stage_data_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v7 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,TeamChainStageData>>::operator*(&__for_begin);
    stage_id = std::get<0ul,unsigned int const,TeamChainStageData>(v7);
    stage_data = (std::tuple_element<1,const std::pair<unsigned int const,TeamChainStageData> >::type *)std::get<1ul,unsigned int const,TeamChainStageData>(v7);
    if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
           target_stage_id_set,
           stage_id) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&stage_data->best_score >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)stage_data + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&stage_data->best_score >> 3)
                                                                 + 0x7FFF8000) )
      {
        __asan_report_load4(&stage_data->best_score);
      }
      if ( stage_data->best_score )
        ++cnt;
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,TeamChainStageData>>::operator++(&__for_begin);
  }
  return cnt;
};

// Line 677: range 000000001800C546-000000001800DE78
__int64 __fastcall TeamChainActivity::checkEnterDungeonChooseTeamInfo(
        TeamChainActivity *const this,
        uint32_t stage_id,
        const google::protobuf::RepeatedPtrField<proto::TeamChainChooseTeamInfo> *team_info_list)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  unsigned int v9; // r14d
  ActivityTeamChainExcelConfigMgr *p_activity_team_chain_config_mgr; // rcx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  char v13; // r14
  unsigned int v14; // r15d
  bool v15; // r15
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v17; // rdx
  unsigned int *p_second; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  bool v31; // r14
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // r14
  bool is_trial_avatar; // al
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // r14
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // r14
  bool v41; // al
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v48; // rax
  common::milog::MiLogStream *v49; // rax
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v50; // rax
  common::milog::MiLogStream *v51; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  PlayerAvatarComp *AvatarComp; // rax
  common::milog::MiLogStream *v56; // rax
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v57; // rax
  common::milog::MiLogStream *v58; // rax
  unsigned int v59; // edi
  common::milog::MiLogStream *v60; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v61; // rax
  bool v62; // r14
  common::milog::MiLogStream *v63; // rax
  common::milog::MiLogStream *v64; // rax
  common::milog::MiLogStream *v65; // rax
  common::milog::MiLogStream *v66; // rax
  common::milog::MiLogStream *v67; // rax
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v68; // rax
  common::milog::MiLogStream *v69; // rax
  __int64 result; // rax
  unsigned int room_idx; // [rsp+28h] [rbp-2B8h]
  unsigned int room_avatar_idx; // [rsp+2Ch] [rbp-2B4h]
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> __y; // [rsp+30h] [rbp-2B0h] BYREF
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin; // [rsp+38h] [rbp-2A8h]
  const data::TeamChainExcelConfig *stage_config_ptr; // [rsp+40h] [rbp-2A0h]
  const data::TeamChainOverallExcelConfig *overall_config_ptr; // [rsp+48h] [rbp-298h]
  const proto::TeamChainChooseTeamInfo *room_team_info; // [rsp+50h] [rbp-290h]
  const google::protobuf::RepeatedPtrField<proto::TeamChainChooseAvatarInfo> *avatar_info_list; // [rsp+58h] [rbp-288h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range; // [rsp+60h] [rbp-280h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end; // [rsp+68h] [rbp-278h]
  const proto::TeamChainChooseAvatarInfo *avatar_info; // [rsp+70h] [rbp-270h]
  const std::unordered_map<unsigned int,unsigned int> *chain_pre_idx_map; // [rsp+78h] [rbp-268h]
  const data::AvatarExcelConfig *formal_avatar_config_ptr; // [rsp+80h] [rbp-260h]
  const data::TrialAvatarExcelConfig *trial_avatar_config_ptr; // [rsp+88h] [rbp-258h]
  const proto::TeamChainChooseTeamInfo *pre_room_team_info; // [rsp+90h] [rbp-250h]
  const proto::TeamChainChooseAvatarInfo *pre_avatar_info; // [rsp+98h] [rbp-248h]
  std::shared_ptr<Config> v89; // [rsp+A0h] [rbp-240h] BYREF
  std::shared_ptr<Config> v90; // [rsp+B0h] [rbp-230h] BYREF
  std::shared_ptr<Config> v91; // [rsp+C0h] [rbp-220h] BYREF
  common::milog::MiLogStream v92; // [rsp+D0h] [rbp-210h] BYREF
  char v93[496]; // [rsp+F0h] [rbp-1F0h] BYREF

  v3 = (unsigned __int64)v93;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(448LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "12 48 4 23 team_info_list_size:697 64 4 13 avatar_id:722 80 4 20 avatar_chain_idx:724 96 4 24 pr"
                        "e_avatar_chain_idx:730 112 4 16 pre_room_idx:736 128 4 18 pre_avatar_idx:743 144 4 12 skill_no:8"
                        "20 160 4 12 stage_id:676 176 8 16 pre_idx_iter:727 208 48 30 total_formal_avatar_id_set:704 288 "
                        "48 29 total_trial_avatar_id_set:705 368 48 27 total_room_skill_no_set:707";
  *(_QWORD *)(v3 + 16) = TeamChainActivity::checkEnterDungeonChooseTeamInfo;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -234556924;
  v5[536862724] = -234556924;
  v5[536862725] = 61956;
  v5[536862725] = -234881024;
  v5[536862726] = 62194;
  v5[536862728] = -218959118;
  v5[536862730] = -219021312;
  v5[536862731] = 62194;
  v5[536862733] = -202116109;
  *(_DWORD *)(v3 + 160) = stage_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v91);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v91);
  stage_config_ptr = data::ActivityTeamChainExcelConfigMgrBase::findTeamChainExcelConfig(
                       &v6->design_config.txt_config_mgr.activity_team_chain_config_mgr,
                       *(_DWORD *)(v3 + 160));
  std::shared_ptr<Config>::~shared_ptr(&v91);
  if ( stage_config_ptr )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v91);
    std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v91);
    std::shared_ptr<Config>::~shared_ptr(&v91);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v91);
    p_activity_team_chain_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v91)->design_config.txt_config_mgr.activity_team_chain_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->schedule_id_);
    }
    overall_config_ptr = data::ActivityTeamChainExcelConfigMgrBase::findTeamChainOverallExcelConfig(
                           p_activity_team_chain_config_mgr,
                           this->schedule_id_);
    std::shared_ptr<Config>::~shared_ptr(&v91);
    if ( overall_config_ptr )
    {
      *(_DWORD *)(v3 + 48) = google::protobuf::RepeatedPtrField<proto::TeamChainChooseTeamInfo>::size(team_info_list);
      if ( *(_BYTE *)(((unsigned __int64)&overall_config_ptr->room_num >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&overall_config_ptr->room_num >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&overall_config_ptr->room_num);
      }
      if ( overall_config_ptr->room_num == *(_DWORD *)(v3 + 48) )
      {
        std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 208));
        std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 288));
        std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 368));
        for ( room_idx = 0; room_idx < *(_DWORD *)(v3 + 48); ++room_idx )
        {
          room_team_info = google::protobuf::RepeatedPtrField<proto::TeamChainChooseTeamInfo>::operator[](
                             team_info_list,
                             room_idx);
          avatar_info_list = proto::TeamChainChooseTeamInfo::avatar_info_list(room_team_info);
          v13 = 0;
          v15 = 1;
          if ( google::protobuf::RepeatedPtrField<proto::TeamChainChooseAvatarInfo>::size(avatar_info_list) > 0 )
          {
            v14 = google::protobuf::RepeatedPtrField<proto::TeamChainChooseAvatarInfo>::size(avatar_info_list);
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v91);
            v13 = 1;
            std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v91);
            if ( v14 <= 4 )
              v15 = 0;
          }
          if ( v13 )
            std::shared_ptr<Config>::~shared_ptr(&v91);
          if ( v15 )
          {
            common::milog::MiLogStream::create(
              &v92,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/team_chain_activity.cpp",
              "checkEnterDungeonChooseTeamInfo",
              716);
            common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
              &v92,
              (const char (*)[42])"[TeamChain] avatar num in team is invalid");
            common::milog::MiLogStream::~MiLogStream(&v92);
            v9 = -1;
            goto LABEL_76;
          }
          for ( room_avatar_idx = 0;
                room_avatar_idx < google::protobuf::RepeatedPtrField<proto::TeamChainChooseAvatarInfo>::size(avatar_info_list);
                ++room_avatar_idx )
          {
            avatar_info = google::protobuf::RepeatedPtrField<proto::TeamChainChooseAvatarInfo>::operator[](
                            avatar_info_list,
                            room_avatar_idx);
            *(_DWORD *)(v3 + 64) = proto::TeamChainChooseAvatarInfo::avatar_id(avatar_info);
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v89);
            std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v89);
            *(_DWORD *)(v3 + 80) = 4 * room_idx + room_avatar_idx + 1;
            std::shared_ptr<Config>::~shared_ptr(&v89);
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v91);
            v16 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v91);
            chain_pre_idx_map = ActivityTeamChainExcelConfigMgr::getChainPreIdxMap(
                                  &v16->design_config.txt_config_mgr.activity_team_chain_config_mgr,
                                  *(_DWORD *)(v3 + 160));
            std::shared_ptr<Config>::~shared_ptr(&v91);
            *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v3 + 176) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                             chain_pre_idx_map,
                                                                                             (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v3 + 80));
            __y._M_cur = std::unordered_map<unsigned int,unsigned int>::end(chain_pre_idx_map)._M_cur;
            if ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
                   (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v3 + 176),
                   &__y) )
            {
              v17 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v3 + 176));
              p_second = &v17->second;
              if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3)
                                                                           + 0x7FFF8000) )
              {
                __asan_report_load4(p_second);
              }
              *(_DWORD *)(v3 + 96) = v17->second;
              if ( !*(_DWORD *)(v3 + 96) )
              {
                common::milog::MiLogStream::create(
                  &v92,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/activity/team_chain_activity.cpp",
                  "checkEnterDungeonChooseTeamInfo",
                  733);
                v19 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                        &v92,
                        (const char (*)[23])"[TeamChain] stage_id: ");
                v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v19,
                        (const unsigned int *)(v3 + 160));
                v21 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                        v20,
                        (const char (*)[19])", pre_avatar_idx: ");
                v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v21,
                        (const unsigned int *)(v3 + 96));
                common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v22, (const char (*)[12])off_2648B580);
                common::milog::MiLogStream::~MiLogStream(&v92);
                v9 = -1;
                goto LABEL_76;
              }
              ServiceBox::findService<GameserverService>();
              GameserverService::getConfig((GameserverService *const)&v90);
              std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v90);
              *(_DWORD *)(v3 + 112) = (unsigned int)(*(_DWORD *)(v3 + 96) - 1) >> 2;
              std::shared_ptr<Config>::~shared_ptr(&v90);
              if ( *(_DWORD *)(v3 + 112) >= *(_DWORD *)(v3 + 48) )
              {
                common::milog::MiLogStream::create(
                  &v92,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/activity/team_chain_activity.cpp",
                  "checkEnterDungeonChooseTeamInfo",
                  739);
                v23 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                        &v92,
                        (const char (*)[23])"[TeamChain] stage_id: ");
                v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v23,
                        (const unsigned int *)(v3 + 160));
                v25 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                        v24,
                        (const char (*)[17])", pre_room_idx: ");
                v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v25,
                        (const unsigned int *)(v3 + 112));
                common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v26, (const char (*)[12])off_2648B580);
                common::milog::MiLogStream::~MiLogStream(&v92);
                v9 = -1;
                goto LABEL_76;
              }
              pre_room_team_info = google::protobuf::RepeatedPtrField<proto::TeamChainChooseTeamInfo>::operator[](
                                     team_info_list,
                                     *(_DWORD *)(v3 + 112));
              ServiceBox::findService<GameserverService>();
              GameserverService::getConfig((GameserverService *const)&v91);
              std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v91);
              *(_DWORD *)(v3 + 128) = ((unsigned __int8)*(_DWORD *)(v3 + 96) - 1) & 3;
              std::shared_ptr<Config>::~shared_ptr(&v91);
              if ( (unsigned int)proto::TeamChainChooseTeamInfo::avatar_info_list_size(pre_room_team_info) <= *(_DWORD *)(v3 + 128) )
              {
                common::milog::MiLogStream::create(
                  &v92,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/activity/team_chain_activity.cpp",
                  "checkEnterDungeonChooseTeamInfo",
                  746);
                v27 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                        &v92,
                        (const char (*)[23])"[TeamChain] stage_id: ");
                v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v27,
                        (const unsigned int *)(v3 + 160));
                v29 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                        v28,
                        (const char (*)[19])", pre_avatar_idx: ");
                v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v29,
                        (const unsigned int *)(v3 + 128));
                common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v30, (const char (*)[12])off_2648B580);
                common::milog::MiLogStream::~MiLogStream(&v92);
                v9 = -1;
                goto LABEL_76;
              }
              pre_avatar_info = proto::TeamChainChooseTeamInfo::avatar_info_list(
                                  pre_room_team_info,
                                  *(_DWORD *)(v3 + 128));
              if ( proto::TeamChainChooseAvatarInfo::avatar_id(pre_avatar_info) != *(_DWORD *)(v3 + 64)
                || (v31 = proto::TeamChainChooseAvatarInfo::is_trial_avatar(avatar_info),
                    v31 != proto::TeamChainChooseAvatarInfo::is_trial_avatar(pre_avatar_info)) )
              {
                common::milog::MiLogStream::create(
                  &v92,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/activity/team_chain_activity.cpp",
                  "checkEnterDungeonChooseTeamInfo",
                  752);
                v33 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                        &v92,
                        (const char (*)[35])"[TeamChain] cur room avatar info: ");
                v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v33,
                        (const unsigned int *)(v3 + 64));
                v35 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v34, (const char (*)[3])", ");
                is_trial_avatar = proto::TeamChainChooseAvatarInfo::is_trial_avatar(avatar_info);
                v37 = common::milog::MiLogStream::operator<<(v35, is_trial_avatar);
                v38 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                        v37,
                        (const char (*)[39])off_264976E0);
                *(_DWORD *)(v3 + 144) = proto::TeamChainChooseAvatarInfo::avatar_id(pre_avatar_info);
                v39 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v38,
                        (const unsigned int *)(v3 + 144));
                v40 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v39, (const char (*)[3])", ");
                v41 = proto::TeamChainChooseAvatarInfo::is_trial_avatar(pre_avatar_info);
                common::milog::MiLogStream::operator<<(v40, v41);
                common::milog::MiLogStream::~MiLogStream(&v92);
                v9 = -1;
                goto LABEL_76;
              }
            }
            else if ( proto::TeamChainChooseAvatarInfo::is_trial_avatar(avatar_info) )
            {
              ServiceBox::findService<GameserverService>();
              GameserverService::getConfig((GameserverService *const)&v91);
              v42 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v91);
              trial_avatar_config_ptr = data::TrialAvatarExcelConfigMgrBase::findTrialAvatarExcelConfig(
                                          &v42->design_config.txt_config_mgr.trial_avatar_config_mgr,
                                          *(_DWORD *)(v3 + 64));
              std::shared_ptr<Config>::~shared_ptr(&v91);
              if ( !trial_avatar_config_ptr )
              {
                common::milog::MiLogStream::create(
                  &v92,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/activity/team_chain_activity.cpp",
                  "checkEnterDungeonChooseTeamInfo",
                  766);
                v43 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                        &v92,
                        (const char (*)[27])"[TeamChain] trial avatar: ");
                v44 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v43,
                        (const unsigned int *)(v3 + 64));
                common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v44, (const char (*)[12])off_2648B580);
                common::milog::MiLogStream::~MiLogStream(&v92);
                v9 = -1;
                goto LABEL_76;
              }
              if ( !common::tools::MiscUtils::isContains<unsigned int>(
                      &stage_config_ptr->trial_avatar_id_list,
                      (const unsigned int *)(v3 + 64)) )
              {
                common::milog::MiLogStream::create(
                  &v92,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/activity/team_chain_activity.cpp",
                  "checkEnterDungeonChooseTeamInfo",
                  772);
                v45 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                        &v92,
                        (const char (*)[36])"[TeamChain] cant use trial avatar: ");
                v46 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v45,
                        (const unsigned int *)(v3 + 64));
                v47 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                        v46,
                        (const char (*)[12])off_264977E0);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v47,
                  (const unsigned int *)(v3 + 160));
                common::milog::MiLogStream::~MiLogStream(&v92);
                v9 = -1;
                goto LABEL_76;
              }
              v48 = std::set<unsigned int>::insert(
                      (std::set<unsigned int> *const)(v3 + 288),
                      (const std::set<unsigned int>::value_type *)(v3 + 64));
              if ( !v48.second )
              {
                common::milog::MiLogStream::create(
                  &v92,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/activity/team_chain_activity.cpp",
                  "checkEnterDungeonChooseTeamInfo",
                  778);
                v49 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                        &v92,
                        (const char (*)[37])"[TeamChain] duplicate trial avatar: ");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v49,
                  (const unsigned int *)(v3 + 64));
                common::milog::MiLogStream::~MiLogStream(&v92);
                v9 = -1;
                goto LABEL_76;
              }
              v50 = std::set<unsigned int>::insert(
                      (std::set<unsigned int> *const)(v3 + 208),
                      &trial_avatar_config_ptr->avatar.avatar_id);
              if ( !v50.second )
              {
                common::milog::MiLogStream::create(
                  &v92,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/activity/team_chain_activity.cpp",
                  "checkEnterDungeonChooseTeamInfo",
                  784);
                v51 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                        &v92,
                        (const char (*)[44])"[TeamChain] duplicate trial formal avatar: ");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v51,
                  (const unsigned int *)(v3 + 64));
                common::milog::MiLogStream::~MiLogStream(&v92);
                v9 = -1;
                goto LABEL_76;
              }
            }
            else
            {
              ServiceBox::findService<GameserverService>();
              GameserverService::getConfig((GameserverService *const)&v91);
              v52 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v91);
              formal_avatar_config_ptr = data::AvatarExcelConfigMgrBase::findAvatarExcelConfig(
                                           &v52->design_config.txt_config_mgr.avatar_config_mgr,
                                           *(_DWORD *)(v3 + 64));
              std::shared_ptr<Config>::~shared_ptr(&v91);
              if ( !formal_avatar_config_ptr )
              {
                common::milog::MiLogStream::create(
                  &v92,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/activity/team_chain_activity.cpp",
                  "checkEnterDungeonChooseTeamInfo",
                  795);
                v53 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                        &v92,
                        (const char (*)[28])"[TeamChain] formal avatar: ");
                v54 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v53,
                        (const unsigned int *)(v3 + 64));
                common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v54, (const char (*)[12])off_2648B580);
                common::milog::MiLogStream::~MiLogStream(&v92);
                v9 = -1;
                goto LABEL_76;
              }
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->player_);
              AvatarComp = Player::getAvatarComp(this->player_);
              if ( !PlayerAvatarComp::hasAvatar(AvatarComp, AVATAR_TYPE_FORMAL, *(_DWORD *)(v3 + 64)) )
              {
                common::milog::MiLogStream::create(
                  &v92,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/activity/team_chain_activity.cpp",
                  "checkEnterDungeonChooseTeamInfo",
                  801);
                v56 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                        &v92,
                        (const char (*)[45])"[TeamChain] player dont have formal avatar: ");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v56,
                  (const unsigned int *)(v3 + 64));
                common::milog::MiLogStream::~MiLogStream(&v92);
                v9 = -1;
                goto LABEL_76;
              }
              v57 = std::set<unsigned int>::insert(
                      (std::set<unsigned int> *const)(v3 + 208),
                      (const std::set<unsigned int>::value_type *)(v3 + 64));
              if ( !v57.second )
              {
                common::milog::MiLogStream::create(
                  &v92,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/activity/team_chain_activity.cpp",
                  "checkEnterDungeonChooseTeamInfo",
                  807);
                v58 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                        &v92,
                        (const char (*)[38])"[TeamChain] duplicate formal avatar: ");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v58,
                  (const unsigned int *)(v3 + 64));
                common::milog::MiLogStream::~MiLogStream(&v92);
                v9 = -1;
                goto LABEL_76;
              }
            }
          }
          v59 = proto::TeamChainChooseTeamInfo::skill_no_list_size(room_team_info);
          if ( *(_BYTE *)(((unsigned __int64)&overall_config_ptr->room_skill_num >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)overall_config_ptr + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&overall_config_ptr->room_skill_num >> 3)
                                                                              + 0x7FFF8000) )
          {
            v59 = (_DWORD)overall_config_ptr + 36;
            __asan_report_load4(&overall_config_ptr->room_skill_num);
          }
          if ( v59 > overall_config_ptr->room_skill_num )
          {
            common::milog::MiLogStream::create(
              &v92,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/team_chain_activity.cpp",
              "checkEnterDungeonChooseTeamInfo",
              816);
            v60 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                    &v92,
                    (const char (*)[36])"[TeamChain] skill size is invalid: ");
            *(_DWORD *)(v3 + 144) = proto::TeamChainChooseTeamInfo::skill_no_list_size(room_team_info);
            common::milog::MiLogStream::operator<<<int,(int *)0>(v60, (const int *)(v3 + 144));
            common::milog::MiLogStream::~MiLogStream(&v92);
            v9 = -1;
            goto LABEL_76;
          }
          __for_range = proto::TeamChainChooseTeamInfo::skill_no_list(room_team_info);
          __for_begin = google::protobuf::RepeatedField<unsigned int>::begin(__for_range);
          __for_end = google::protobuf::RepeatedField<unsigned int>::end(__for_range);
          while ( __for_begin != __for_end )
          {
            if ( *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)__for_begin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin >> 3)
                                                                            + 0x7FFF8000) )
            {
              __asan_report_load4(__for_begin);
            }
            *(_DWORD *)(v3 + 144) = *__for_begin;
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v91);
            v61 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v91);
            v62 = data::ActivityTeamChainExcelConfigMgrBase::findTeamChainBuffExcelConfig(
                    &v61->design_config.txt_config_mgr.activity_team_chain_config_mgr,
                    *(_DWORD *)(v3 + 144)) == 0LL;
            std::shared_ptr<Config>::~shared_ptr(&v91);
            if ( v62 )
            {
              common::milog::MiLogStream::create(
                &v92,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/team_chain_activity.cpp",
                "checkEnterDungeonChooseTeamInfo",
                825);
              v63 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                      &v92,
                      (const char (*)[23])"[TeamChain] skill no: ");
              v64 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v63,
                      (const unsigned int *)(v3 + 144));
              common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v64, (const char (*)[12])off_2648B580);
              common::milog::MiLogStream::~MiLogStream(&v92);
              v9 = -1;
              goto LABEL_76;
            }
            if ( !common::tools::MiscUtils::isContains<unsigned int>(
                    &stage_config_ptr->normal_buff_id_list,
                    (const unsigned int *)(v3 + 144)) )
            {
              common::milog::MiLogStream::create(
                &v92,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/team_chain_activity.cpp",
                "checkEnterDungeonChooseTeamInfo",
                831);
              v65 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                      &v92,
                      (const char (*)[29])"[TeamChain] cant use skill: ");
              v66 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v65,
                      (const unsigned int *)(v3 + 144));
              v67 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                      v66,
                      (const char (*)[12])off_264977E0);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v67,
                (const unsigned int *)(v3 + 160));
              common::milog::MiLogStream::~MiLogStream(&v92);
              v9 = -1;
              goto LABEL_76;
            }
            v68 = std::set<unsigned int>::insert(
                    (std::set<unsigned int> *const)(v3 + 368),
                    (const std::set<unsigned int>::value_type *)(v3 + 144));
            if ( !v68.second )
            {
              common::milog::MiLogStream::create(
                &v92,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/team_chain_activity.cpp",
                "checkEnterDungeonChooseTeamInfo",
                837);
              v69 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                      &v92,
                      (const char (*)[37])"[TeamChain] has duplicate skill no: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v69,
                (const unsigned int *)(v3 + 144));
              common::milog::MiLogStream::~MiLogStream(&v92);
              v9 = -1;
              goto LABEL_76;
            }
            ++__for_begin;
          }
        }
        v9 = 0;
LABEL_76:
        std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 368));
        std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 288));
        std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 208));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v92,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/team_chain_activity.cpp",
          "checkEnterDungeonChooseTeamInfo",
          700);
        v12 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                &v92,
                (const char (*)[35])"[TeamChain] team size is invalid: ");
        common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v92);
        v9 = -1;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v92,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/team_chain_activity.cpp",
        "checkEnterDungeonChooseTeamInfo",
        693);
      v11 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
              &v92,
              (const char (*)[39])"[TeamChain] cant find overall config: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &this->schedule_id_);
      common::milog::MiLogStream::~MiLogStream(&v92);
      v9 = -1;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v92,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/team_chain_activity.cpp",
      "checkEnterDungeonChooseTeamInfo",
      681);
    v7 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
           &v92,
           (const char (*)[23])"[TeamChain] stage_id: ");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 160));
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v8, (const char (*)[12])off_2648B580);
    common::milog::MiLogStream::~MiLogStream(&v92);
    v9 = -1;
  }
  result = v9;
  if ( v93 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8034) = 0;
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
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 847: range 000000001800DE7A-000000001800E3A7
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl TeamChainActivity::constructEnterDungeonContext(
        TeamChainActivity *const this,
        uint32_t stage_id,
        uint32_t difficulty,
        const google::protobuf::RepeatedPtrField<proto::TeamChainChooseTeamInfo> *team_info_list,
        TeamChainDungeonContext *new_dungeon_context)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  __int64 v8; // rsi
  uint32_t schedule_id; // ecx
  char v10; // dl
  __int64 v11; // rdx
  TeamChainRoomAvatarInfo *v12; // rax
  TeamChainRoomTeamInfo *v13; // rax
  TeamChainRoomTeamInfo *v14; // rdx
  int32_t result; // eax
  google::protobuf::RepeatedPtrField<proto::TeamChainChooseTeamInfo>::const_iterator __for_begin; // [rsp+28h] [rbp-148h] BYREF
  google::protobuf::RepeatedPtrField<proto::TeamChainChooseTeamInfo>::const_iterator __for_end; // [rsp+30h] [rbp-140h] BYREF
  google::protobuf::RepeatedPtrField<proto::TeamChainChooseAvatarInfo>::const_iterator __for_begin_0; // [rsp+38h] [rbp-138h] BYREF
  google::protobuf::RepeatedPtrField<proto::TeamChainChooseAvatarInfo>::const_iterator __for_end_0; // [rsp+40h] [rbp-130h] BYREF
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin_1; // [rsp+48h] [rbp-128h]
  const google::protobuf::RepeatedPtrField<proto::TeamChainChooseTeamInfo> *__for_range; // [rsp+50h] [rbp-120h]
  const proto::TeamChainChooseTeamInfo *room_team_info; // [rsp+58h] [rbp-118h]
  const google::protobuf::RepeatedPtrField<proto::TeamChainChooseAvatarInfo> *__for_range_0; // [rsp+60h] [rbp-110h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range_1; // [rsp+68h] [rbp-108h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end_1; // [rsp+70h] [rbp-100h]
  const proto::TeamChainChooseAvatarInfo *avatar_info; // [rsp+78h] [rbp-F8h]
  char v30[240]; // [rsp+80h] [rbp-F0h] BYREF

  v5 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(192LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "3 32 4 12 skill_no:870 48 32 19 new_avatar_info:862 112 48 17 new_team_info:858";
  *(_QWORD *)(v5 + 16) = TeamChainActivity::constructEnterDungeonContext;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = 61956;
  v7[536862722] = -219021312;
  v7[536862723] = 62194;
  v7[536862725] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)new_dungeon_context >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)new_dungeon_context >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(new_dungeon_context, *(_QWORD *)&stage_id, new_dungeon_context);
  }
  new_dungeon_context->stage_id = stage_id;
  v8 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->schedule_id_);
  }
  schedule_id = this->schedule_id_;
  v10 = *(_BYTE *)(((unsigned __int64)&new_dungeon_context->schedule_id >> 3) + 0x7FFF8000);
  LOBYTE(v8) = v10 != 0;
  v11 = (v10 != 0) & (unsigned __int8)((char)((((_BYTE)new_dungeon_context + 4) & 7) + 3) >= v10);
  if ( (_BYTE)v11 )
    __asan_report_store4(&new_dungeon_context->schedule_id, v8, v11);
  new_dungeon_context->schedule_id = schedule_id;
  if ( *(_BYTE *)(((unsigned __int64)&new_dungeon_context->difficulty >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&new_dungeon_context->difficulty >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&new_dungeon_context->difficulty, v8, &new_dungeon_context->difficulty);
  }
  new_dungeon_context->difficulty = difficulty;
  std::vector<TeamChainRoomTeamInfo>::clear(&new_dungeon_context->room_team_info_vec);
  __for_range = team_info_list;
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::TeamChainChooseTeamInfo>::begin(team_info_list).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::TeamChainChooseTeamInfo>::end(team_info_list).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::TeamChainChooseTeamInfo const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    room_team_info = google::protobuf::internal::RepeatedPtrIterator<proto::TeamChainChooseTeamInfo const>::operator*(&__for_begin);
    TeamChainRoomTeamInfo::TeamChainRoomTeamInfo((TeamChainRoomTeamInfo *const)(v5 + 112));
    __for_range_0 = proto::TeamChainChooseTeamInfo::avatar_info_list(room_team_info);
    __for_begin_0.it_ = google::protobuf::RepeatedPtrField<proto::TeamChainChooseAvatarInfo>::begin(__for_range_0).it_;
    __for_end_0.it_ = google::protobuf::RepeatedPtrField<proto::TeamChainChooseAvatarInfo>::end(__for_range_0).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<proto::TeamChainChooseAvatarInfo const>::operator!=(
              &__for_begin_0,
              &__for_end_0) )
    {
      avatar_info = google::protobuf::internal::RepeatedPtrIterator<proto::TeamChainChooseAvatarInfo const>::operator*(&__for_begin_0);
      *(_DWORD *)(v5 + 48) = 0;
      *(_QWORD *)(v5 + 56) = 0LL;
      *(_QWORD *)(v5 + 64) = 0LL;
      *(_BYTE *)(v5 + 72) = 0;
      *(_DWORD *)(v5 + 48) = proto::TeamChainChooseAvatarInfo::avatar_id(avatar_info);
      *(_QWORD *)(v5 + 56) = 0LL;
      *(_QWORD *)(v5 + 64) = 0LL;
      *(_BYTE *)(v5 + 72) = proto::TeamChainChooseAvatarInfo::is_trial_avatar(avatar_info);
      v12 = std::move<TeamChainRoomAvatarInfo &>((TeamChainRoomAvatarInfo *)(v5 + 48));
      std::vector<TeamChainRoomAvatarInfo>::emplace_back<TeamChainRoomAvatarInfo>(
        (std::vector<TeamChainRoomAvatarInfo> *const)(v5 + 112),
        v12,
        v12);
      google::protobuf::internal::RepeatedPtrIterator<proto::TeamChainChooseAvatarInfo const>::operator++(&__for_begin_0);
    }
    __for_range_1 = proto::TeamChainChooseTeamInfo::skill_no_list(room_team_info);
    __for_begin_1 = google::protobuf::RepeatedField<unsigned int>::begin(__for_range_1);
    __for_end_1 = google::protobuf::RepeatedField<unsigned int>::end(__for_range_1);
    while ( __for_begin_1 != __for_end_1 )
    {
      if ( *(_BYTE *)(((unsigned __int64)__for_begin_1 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)__for_begin_1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin_1 >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(__for_begin_1);
      }
      *(_DWORD *)(v5 + 32) = *__for_begin_1;
      std::vector<unsigned int>::push_back(
        (std::vector<unsigned int> *const)(v5 + 136),
        (const std::vector<unsigned int>::value_type *)(v5 + 32));
      ++__for_begin_1;
    }
    v13 = std::move<TeamChainRoomTeamInfo &>((TeamChainRoomTeamInfo *)(v5 + 112));
    std::vector<TeamChainRoomTeamInfo>::emplace_back<TeamChainRoomTeamInfo>(
      &new_dungeon_context->room_team_info_vec,
      v13,
      v14);
    TeamChainRoomTeamInfo::~TeamChainRoomTeamInfo((TeamChainRoomTeamInfo *const)(v5 + 112));
    google::protobuf::internal::RepeatedPtrIterator<proto::TeamChainChooseTeamInfo const>::operator++(&__for_begin);
  }
  std::vector<unsigned int>::clear(&new_dungeon_context->room_score_vec);
  result = 0;
  if ( v30 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 881: range 000000001800E3E8-000000001800F272
int32_t __cdecl TeamChainActivity::createEnterDungeonAvatarSnapShot(
        TeamChainActivity *const this,
        TeamChainDungeonContext *dungeon_context)
{
  int32_t v2; // r15d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::unordered_map<unsigned int,std::shared_ptr<Avatar>>::mapped_type *v6; // rax
  uint32_t AvatarComp; // eax
  common::milog::MiLogStream *v8; // rax
  _BOOL4 v9; // r14d
  common::milog::MiLogStream *v10; // rax
  int v11; // r14d
  std::shared_ptr<Avatar> *v12; // rax
  _BOOL4 v13; // r14d
  uint32_t v14; // eax
  common::milog::MiLogStream *v15; // rax
  _BOOL4 v16; // r14d
  common::milog::MiLogStream *v17; // rax
  int v18; // r14d
  std::weak_ptr<Avatar> *v19; // rax
  PlayerAvatarComp *v20; // r14
  std::shared_ptr<Avatar> *i; // r14
  int v22; // r14d
  std::vector<long unsigned int>::reference v23; // rax
  uint64_t v24; // rdx
  const std::vector<long unsigned int>::value_type *v25; // rax
  int32_t result; // eax
  bool v27; // [rsp+Fh] [rbp-2C1h]
  std::initializer_list<std::shared_ptr<Avatar> > __l; // [rsp+10h] [rbp-2C0h]
  std::allocator<std::shared_ptr<Avatar> > __a; // [rsp+3Fh] [rbp-291h] BYREF
  std::vector<TeamChainRoomTeamInfo>::iterator __for_begin; // [rsp+40h] [rbp-290h] BYREF
  std::vector<TeamChainRoomTeamInfo>::iterator __for_end; // [rsp+48h] [rbp-288h] BYREF
  std::vector<TeamChainRoomAvatarInfo>::iterator __for_begin_0; // [rsp+50h] [rbp-280h] BYREF
  std::vector<TeamChainRoomAvatarInfo>::iterator __for_end_0; // [rsp+58h] [rbp-278h] BYREF
  std::vector<TeamChainRoomTeamInfo> *__for_range; // [rsp+60h] [rbp-270h]
  TeamChainRoomTeamInfo *room_team_info; // [rsp+68h] [rbp-268h]
  std::vector<TeamChainRoomAvatarInfo> *__for_range_0; // [rsp+70h] [rbp-260h]
  TeamChainRoomAvatarInfo *avatar_info; // [rsp+78h] [rbp-258h]
  std::vector<std::shared_ptr<Avatar>> avatar_vec; // [rsp+80h] [rbp-250h] BYREF
  std::function<void()> rollbacker; // [rsp+A0h] [rbp-230h] BYREF
  char v40[528]; // [rsp+C0h] [rbp-210h] BYREF

  v3 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(480LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "8 32 4 20 formal_avatar_id:926 48 16 21 target_avatar_ptr:895 80 16 21 formal_avatar_ptr:934 112"
                        " 16 14 avatar_ptr:913 144 24 12 guid_vec:956 208 40 13 committer:882 288 56 24 trial_avatar_ptr_"
                        "map:888 384 56 25 formal_avatar_wtr_map:890";
  *(_QWORD *)(v3 + 16) = TeamChainActivity::createEnterDungeonAvatarSnapShot;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862722] = 62194;
  v5[536862723] = 62194;
  v5[536862724] = 62194;
  v5[536862725] = -218959360;
  v5[536862726] = 62194;
  v5[536862727] = -234881024;
  v5[536862728] = -218959118;
  v5[536862730] = -234881024;
  v5[536862731] = -218959118;
  v5[536862733] = -218103808;
  v5[536862734] = -202116109;
  std::function<void ()(void)>::function<TeamChainActivity::createEnterDungeonAvatarSnapShot(TeamChainDungeonContext &)::{lambda(void)#1},void,void>(
    &rollbacker,
    (TeamChainActivity::createEnterDungeonAvatarSnapShot::<lambda()>)this);
  common::tools::ScopedCommitter::ScopedCommitter((common::tools::ScopedCommitter *const)(v3 + 208), &rollbacker);
  std::function<void ()(void)>::~function(&rollbacker);
  std::unordered_map<unsigned int,std::shared_ptr<Avatar>>::unordered_map((std::unordered_map<unsigned int,std::shared_ptr<Avatar>> *const)(v3 + 288));
  std::unordered_map<unsigned int,std::weak_ptr<Avatar>>::unordered_map((std::unordered_map<unsigned int,std::weak_ptr<Avatar>> *const)(v3 + 384));
  __for_range = &dungeon_context->room_team_info_vec;
  __for_begin._M_current = std::vector<TeamChainRoomTeamInfo>::begin(&dungeon_context->room_team_info_vec)._M_current;
  __for_end._M_current = std::vector<TeamChainRoomTeamInfo>::end(&dungeon_context->room_team_info_vec)._M_current;
LABEL_5:
  if ( __gnu_cxx::operator!=<TeamChainRoomTeamInfo *,std::vector<TeamChainRoomTeamInfo>>(&__for_begin, &__for_end) )
  {
    room_team_info = __gnu_cxx::__normal_iterator<TeamChainRoomTeamInfo *,std::vector<TeamChainRoomTeamInfo>>::operator*(&__for_begin);
    __for_range_0 = &room_team_info->avatar_info_vec;
    __for_begin_0._M_current = std::vector<TeamChainRoomAvatarInfo>::begin(&room_team_info->avatar_info_vec)._M_current;
    __for_end_0._M_current = std::vector<TeamChainRoomAvatarInfo>::end(__for_range_0)._M_current;
    while ( 1 )
    {
      if ( !__gnu_cxx::operator!=<TeamChainRoomAvatarInfo *,std::vector<TeamChainRoomAvatarInfo>>(
              &__for_begin_0,
              &__for_end_0) )
      {
        __gnu_cxx::__normal_iterator<TeamChainRoomTeamInfo *,std::vector<TeamChainRoomTeamInfo>>::operator++(&__for_begin);
        goto LABEL_5;
      }
      avatar_info = __gnu_cxx::__normal_iterator<TeamChainRoomAvatarInfo *,std::vector<TeamChainRoomAvatarInfo>>::operator*(&__for_begin_0);
      std::shared_ptr<Avatar>::shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 48), 0LL);
      if ( *(char *)(((unsigned __int64)&avatar_info->is_trial_avatar >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&avatar_info->is_trial_avatar);
      if ( avatar_info->is_trial_avatar )
      {
        if ( *(_BYTE *)(((unsigned __int64)avatar_info >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)avatar_info >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(avatar_info);
        }
        *(_DWORD *)(v3 + 32) = avatar_info->avatar_id;
        if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::shared_ptr<Avatar>>,unsigned int>(
               (std::unordered_map<unsigned int,std::shared_ptr<Avatar>> *)(v3 + 288),
               (const unsigned int *)(v3 + 32)) )
        {
          v6 = std::unordered_map<unsigned int,std::shared_ptr<Avatar>>::operator[](
                 (std::unordered_map<unsigned int,std::shared_ptr<Avatar>> *const)(v3 + 288),
                 (const std::unordered_map<unsigned int,std::shared_ptr<Avatar>>::key_type *)(v3 + 32));
          std::shared_ptr<Avatar>::operator=((std::shared_ptr<Avatar> *const)(v3 + 48), v6);
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          AvatarComp = (unsigned int)Player::getAvatarComp(this->player_);
          PlayerAvatarComp::createTrialAvatar((PlayerAvatarComp *const)(v3 + 80), AvatarComp, *(_DWORD *)(v3 + 32));
          if ( std::operator==<TrialAvatar>(0LL, (const std::shared_ptr<TrialAvatar> *)(v3 + 80)) )
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&rollbacker,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/team_chain_activity.cpp",
              "createEnterDungeonAvatarSnapShot",
              910);
            v8 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                   (common::milog::MiLogStream *const)&rollbacker,
                   (const char (*)[56])"[TeamChain] createTrialAvatar nullptr, trial_avatar_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 32));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&rollbacker);
            v2 = -1;
            v9 = 0;
          }
          else
          {
            std::dynamic_pointer_cast<Avatar,TrialAvatar>((const std::shared_ptr<TrialAvatar> *)(v3 + 112));
            if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v3 + 112)) )
            {
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)&rollbacker,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/team_chain_activity.cpp",
                "createEnterDungeonAvatarSnapShot",
                916);
              v10 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                      (common::milog::MiLogStream *const)&rollbacker,
                      (const char (*)[56])"[TeamChain] createTrialAvatar nullptr, trial_avatar_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v10,
                (const unsigned int *)(v3 + 32));
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&rollbacker);
              v2 = -1;
              v11 = 0;
            }
            else
            {
              v12 = std::unordered_map<unsigned int,std::shared_ptr<Avatar>>::operator[](
                      (std::unordered_map<unsigned int,std::shared_ptr<Avatar>> *const)(v3 + 288),
                      (const std::unordered_map<unsigned int,std::shared_ptr<Avatar>>::key_type *)(v3 + 32));
              std::shared_ptr<Avatar>::operator=(v12, (const std::shared_ptr<Avatar> *)(v3 + 112));
              std::shared_ptr<Avatar>::operator=(
                (std::shared_ptr<Avatar> *const)(v3 + 48),
                (const std::shared_ptr<Avatar> *)(v3 + 112));
              v11 = 1;
            }
            std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 112));
            v9 = v11 == 1;
          }
          std::shared_ptr<TrialAvatar>::~shared_ptr((std::shared_ptr<TrialAvatar> *const)(v3 + 80));
          if ( !v9 )
          {
            v13 = 0;
            goto LABEL_56;
          }
        }
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)avatar_info >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)avatar_info >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(avatar_info);
        }
        *(_DWORD *)(v3 + 32) = avatar_info->avatar_id;
        if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::weak_ptr<Avatar>>,unsigned int>(
               (std::unordered_map<unsigned int,std::weak_ptr<Avatar>> *)(v3 + 384),
               (const unsigned int *)(v3 + 32)) )
        {
          std::unordered_map<unsigned int,std::weak_ptr<Avatar>>::operator[](
            (std::unordered_map<unsigned int,std::weak_ptr<Avatar>> *const)(v3 + 384),
            (const std::unordered_map<unsigned int,std::weak_ptr<Avatar>>::key_type *)(v3 + 32));
          std::weak_ptr<Avatar>::lock((const std::weak_ptr<Avatar> *const)(v3 + 112));
          std::shared_ptr<Avatar>::operator=(
            (std::shared_ptr<Avatar> *const)(v3 + 48),
            (std::shared_ptr<Avatar> *)(v3 + 112));
          std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 112));
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          v14 = (unsigned int)Player::getAvatarComp(this->player_);
          PlayerAvatarComp::findFormalAvatarByAvatarId((const PlayerAvatarComp *const)(v3 + 80), v14);
          if ( std::operator==<FormalAvatar>(0LL, (const std::shared_ptr<FormalAvatar> *)(v3 + 80)) )
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&rollbacker,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/team_chain_activity.cpp",
              "createEnterDungeonAvatarSnapShot",
              937);
            v15 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                    (common::milog::MiLogStream *const)&rollbacker,
                    (const char (*)[56])"[TeamChain] findFormalAvatar nullptr, formal_avatar_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 32));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&rollbacker);
            v2 = -1;
            v16 = 0;
          }
          else
          {
            std::dynamic_pointer_cast<Avatar,FormalAvatar>((const std::shared_ptr<FormalAvatar> *)(v3 + 112));
            if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v3 + 112)) )
            {
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)&rollbacker,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/team_chain_activity.cpp",
                "createEnterDungeonAvatarSnapShot",
                943);
              v17 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                      (common::milog::MiLogStream *const)&rollbacker,
                      (const char (*)[56])"[TeamChain] findFormalAvatar nullptr, formal_avatar_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v17,
                (const unsigned int *)(v3 + 32));
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&rollbacker);
              v2 = -1;
              v18 = 0;
            }
            else
            {
              v19 = std::unordered_map<unsigned int,std::weak_ptr<Avatar>>::operator[](
                      (std::unordered_map<unsigned int,std::weak_ptr<Avatar>> *const)(v3 + 384),
                      (const std::unordered_map<unsigned int,std::weak_ptr<Avatar>>::key_type *)(v3 + 32));
              std::weak_ptr<Avatar>::operator=<Avatar>(v19, (const std::shared_ptr<Avatar> *)(v3 + 112));
              std::shared_ptr<Avatar>::operator=(
                (std::shared_ptr<Avatar> *const)(v3 + 48),
                (const std::shared_ptr<Avatar> *)(v3 + 112));
              v18 = 1;
            }
            std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 112));
            v16 = v18 == 1;
          }
          std::shared_ptr<FormalAvatar>::~shared_ptr((std::shared_ptr<FormalAvatar> *const)(v3 + 80));
          if ( !v16 )
          {
            v13 = 0;
            goto LABEL_56;
          }
        }
      }
      if ( std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v3 + 48), 0LL) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&rollbacker,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/team_chain_activity.cpp",
          "createEnterDungeonAvatarSnapShot",
          952);
        common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
          (common::milog::MiLogStream *const)&rollbacker,
          (const char (*)[41])"[TeamChain] target_avatar_ptr is nullptr");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&rollbacker);
        v2 = -1;
        v13 = 0;
      }
      else
      {
        std::vector<unsigned long>::vector((std::vector<long unsigned int> *const)(v3 + 144));
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        v20 = Player::getAvatarComp(this->player_);
        std::shared_ptr<Avatar>::shared_ptr(
          (std::shared_ptr<Avatar> *const)(v3 + 112),
          (const std::shared_ptr<Avatar> *)(v3 + 48));
        __l._M_array = (std::initializer_list<std::shared_ptr<Avatar> >::iterator)(v3 + 112);
        __l._M_len = 1LL;
        std::allocator<std::shared_ptr<Avatar>>::allocator(&__a);
        std::vector<std::shared_ptr<Avatar>>::vector(&avatar_vec, __l, &__a);
        v27 = PlayerAvatarComp::saveAvatarSnapshotBatch(
                v20,
                AVATAR_SNAPSHOT_TYPE_TEAM_CHAIN_ACTIVITY,
                &avatar_vec,
                (std::vector<long unsigned int> *)(v3 + 144)) != 0;
        std::vector<std::shared_ptr<Avatar>>::~vector(&avatar_vec);
        std::allocator<std::shared_ptr<Avatar>>::~allocator(&__a);
        for ( i = (std::shared_ptr<Avatar> *)(v3 + 128);
              i != (std::shared_ptr<Avatar> *)(v3 + 112);
              std::shared_ptr<Avatar>::~shared_ptr(i) )
        {
          --i;
        }
        if ( v27 )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&rollbacker,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/activity/team_chain_activity.cpp",
            "createEnterDungeonAvatarSnapShot",
            959);
          common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
            (common::milog::MiLogStream *const)&rollbacker,
            (const char (*)[43])"[TeamChain] saveAvatarSnapshotBatch failed");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&rollbacker);
          v2 = -1;
          v22 = 0;
        }
        else if ( std::vector<unsigned long>::empty((const std::vector<long unsigned int> *const)(v3 + 144)) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&rollbacker,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/activity/team_chain_activity.cpp",
            "createEnterDungeonAvatarSnapShot",
            964);
          common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
            (common::milog::MiLogStream *const)&rollbacker,
            (const char (*)[43])"[TeamChain] saveAvatarSnapshotBatch failed");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&rollbacker);
          v2 = -1;
          v22 = 0;
        }
        else
        {
          v23 = std::vector<unsigned long>::operator[]((std::vector<long unsigned int> *const)(v3 + 144), 0LL);
          if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
            v23 = (std::vector<long unsigned int>::reference)__asan_report_load8(v23);
          v24 = *v23;
          if ( *(_BYTE *)(((unsigned __int64)&avatar_info->snapshot_bin_avatar_guid >> 3) + 0x7FFF8000) )
            __asan_report_store8(&avatar_info->snapshot_bin_avatar_guid, 0LL);
          avatar_info->snapshot_bin_avatar_guid = v24;
          v25 = std::vector<unsigned long>::operator[]((std::vector<long unsigned int> *const)(v3 + 144), 0LL);
          std::vector<unsigned long>::push_back(&this->in_dungeon_avatar_guid_vec_, v25);
          v22 = 1;
        }
        std::vector<unsigned long>::~vector((std::vector<long unsigned int> *const)(v3 + 144));
        v13 = v22 == 1;
      }
LABEL_56:
      std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 48));
      if ( !v13 )
        goto LABEL_60;
      __gnu_cxx::__normal_iterator<TeamChainRoomAvatarInfo *,std::vector<TeamChainRoomAvatarInfo>>::operator++(&__for_begin_0);
    }
  }
  common::tools::ScopedCommitter::commit((common::tools::ScopedCommitter *const)(v3 + 208));
  v2 = 0;
LABEL_60:
  std::unordered_map<unsigned int,std::weak_ptr<Avatar>>::~unordered_map((std::unordered_map<unsigned int,std::weak_ptr<Avatar>> *const)(v3 + 384));
  std::unordered_map<unsigned int,std::shared_ptr<Avatar>>::~unordered_map((std::unordered_map<unsigned int,std::shared_ptr<Avatar>> *const)(v3 + 288));
  common::tools::ScopedCommitter::~ScopedCommitter((common::tools::ScopedCommitter *const)(v3 + 208));
  result = v2;
  if ( v40 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8034) = 0LL;
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
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8038) = -168430091;
  }
  return result;
};

// Line 882: range 000000001800E3A8-000000001800E3E6
void __cdecl TeamChainActivity::createEnterDungeonAvatarSnapShot(TeamChainDungeonContext &)::{lambda(void)#1}::operator()(
        const TeamChainActivity::createEnterDungeonAvatarSnapShot::<lambda()> *const __closure)
{
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  TeamChainActivity::recallInDungeonAvatars(__closure->__this);
};

// Line 976: range 000000001800F274-000000001800F4C5
void __cdecl TeamChainActivity::recallInDungeonAvatars(TeamChainActivity *const this)
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
      "./src/player/activity/team_chain_activity.cpp",
      "recallInDungeonAvatars",
      981);
    v1 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v9,
           (const char (*)[36])"[TeamChain] recallInDungeonAvatars:");
    v2 = common::milog::MiLogStream::operator<<<unsigned long>(v1, &this->in_dungeon_avatar_guid_vec_);
    v3 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v2, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &val);
    common::milog::MiLogStream::~MiLogStream(&v9);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    AvatarComp = Player::getAvatarComp(this->player_);
    if ( PlayerAvatarComp::delInformalAvatarOrSnapshotBatch(
           AvatarComp,
           AVATAR_SNAPSHOT_TYPE_TEAM_CHAIN_ACTIVITY,
           &this->in_dungeon_avatar_guid_vec_) )
    {
      common::milog::MiLogStream::create(
        &v9,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/team_chain_activity.cpp",
        "recallInDungeonAvatars",
        984);
      v5 = common::milog::MiLogStream::operator<<<char [83],(char *[83])0>(
             &v9,
             (const char (*)[83])"[TeamChain] delInformalAvatarBatchAndReplaceByAvatarTeam failed, avatar_guid_vec_:");
      v6 = common::milog::MiLogStream::operator<<<unsigned long>(v5, &this->in_dungeon_avatar_guid_vec_);
      v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v6, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
      common::milog::MiLogStream::~MiLogStream(&v9);
    }
    std::vector<unsigned long>::clear(&this->in_dungeon_avatar_guid_vec_);
  }
};

// Line 990: range 000000001800F4C6-000000001800F888
__int64 __fastcall TeamChainActivity::openTeamChainStage(TeamChainActivity *const this, uint32_t stage_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  bool v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,TeamChainStageData> >::_Self *p_y; // rsi
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  uint32_t v13; // ecx
  char v14; // dl
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rdx
  std::_Rb_tree_iterator<std::pair<unsigned int const,TeamChainStageData> >::_Self __y; // [rsp+10h] [rbp-D0h] BYREF
  TeamChainStageData *stage_data; // [rsp+18h] [rbp-C8h]
  std::shared_ptr<Config> v20; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+30h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+50h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 stage_id:989 64 8 19 stage_data_iter:996";
  *(_QWORD *)(v2 + 16) = TeamChainActivity::openTeamChainStage;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = stage_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v20);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20);
  v6 = data::ActivityTeamChainExcelConfigMgrBase::findTeamChainExcelConfig(
         &v5->design_config.txt_config_mgr.activity_team_chain_config_mgr,
         *(_DWORD *)(v2 + 48)) == 0LL;
  std::shared_ptr<Config>::~shared_ptr(&v20);
  if ( v6 )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/team_chain_activity.cpp",
      "openTeamChainStage",
      993);
    v7 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
           &v21,
           (const char (*)[22])"[TeamChain] stage_id ");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v8, (const char (*)[16])" does not exist");
    common::milog::MiLogStream::~MiLogStream(&v21);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    *(std::map<unsigned int,TeamChainStageData>::iterator *)(v2 + 64) = std::map<unsigned int,TeamChainStageData>::find(
                                                                          &this->stage_data_map_,
                                                                          (const std::map<unsigned int,TeamChainStageData>::key_type *)(v2 + 48));
    __y._M_node = std::map<unsigned int,TeamChainStageData>::end(&this->stage_data_map_)._M_node;
    p_y = &__y;
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,TeamChainStageData> >::_Self *)(v2 + 64),
           &__y) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/team_chain_activity.cpp",
        "openTeamChainStage",
        999);
      v11 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v21, (const char (*)[11])"stage_id: ");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
        v12,
        (const char (*)[24])" not in stage_data_map_");
      common::milog::MiLogStream::~MiLogStream(&v21);
      result = 0xFFFFFFFFLL;
    }
    else
    {
      stage_data = &std::_Rb_tree_iterator<std::pair<unsigned int const,TeamChainStageData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,TeamChainStageData> > *const)(v2 + 64))->second;
      v13 = *(_DWORD *)(v2 + 48);
      v14 = *(_BYTE *)(((unsigned __int64)stage_data >> 3) + 0x7FFF8000);
      LOBYTE(p_y) = v14 != 0;
      v15 = (v14 != 0) & (unsigned __int8)((char)(((unsigned __int8)stage_data & 7) + 3) >= v14);
      if ( (_BYTE)v15 )
        __asan_report_store4(stage_data, p_y, v15);
      stage_data->stage_id = v13;
      v16 = ((_BYTE)stage_data + 4) & 7;
      v17 = (*(_BYTE *)(((unsigned __int64)&stage_data->is_open >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v16 >= *(_BYTE *)(((unsigned __int64)&stage_data->is_open >> 3) + 0x7FFF8000));
      if ( (_BYTE)v17 )
        __asan_report_store1(&stage_data->is_open, v16, v17);
      stage_data->is_open = 1;
      result = 0LL;
    }
  }
  if ( v22 == (char *)v2 )
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

// Line 1009: range 000000001800F88A-000000001800FA1A
_BOOL8 __fastcall TeamChainActivity::isStageOpen(const TeamChainActivity *const this, uint32_t stage_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  _BOOL8 result; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,TeamChainStageData> >::pointer v6; // rdx
  bool *p_is_open; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,TeamChainStageData> >::_Self __y; // [rsp+18h] [rbp-88h] BYREF
  char v9[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 13 stage_id:1008 64 8 9 iter:1010";
  *(_QWORD *)(v2 + 16) = TeamChainActivity::isStageOpen;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = stage_id;
  *(std::map<unsigned int,TeamChainStageData>::const_iterator *)(v2 + 64) = std::map<unsigned int,TeamChainStageData>::find(
                                                                              &this->stage_data_map_,
                                                                              (const std::map<unsigned int,TeamChainStageData>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,TeamChainStageData>::end(&this->stage_data_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,TeamChainStageData> >::_Self *)(v2 + 64),
         &__y) )
  {
    result = 0LL;
  }
  else
  {
    v6 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,TeamChainStageData>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,TeamChainStageData> > *const)(v2 + 64));
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

// Line 1019: range 000000001800FA1C-000000001800FA54
int32_t __cdecl TeamChainActivity::openStageLevelByGm(TeamChainActivity *const this, uint32_t stage_id)
{
  int ret; // [rsp+1Ch] [rbp-4h]

  ret = TeamChainActivity::openTeamChainStage(this, stage_id);
  BaseActivity::notifyClientData(this, 0);
  return ret;
};

// Line 1026: range 000000001800FA56-000000001800FE2E
__int64 __fastcall TeamChainActivity::setRandomStageLevelDataByGm(
        TeamChainActivity *const this,
        uint32_t stage_id,
        uint32_t score)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  bool v7; // r14
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,TeamChainStageData> >::pointer v13; // rax
  bool *p_is_open; // rax
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rdx
  std::_Rb_tree_iterator<std::pair<unsigned int const,TeamChainStageData> >::_Self __y; // [rsp+10h] [rbp-D0h] BYREF
  TeamChainStageData *stage_data; // [rsp+18h] [rbp-C8h]
  std::shared_ptr<Config> v21; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v22; // [rsp+30h] [rbp-B0h] BYREF
  char v23[144]; // [rsp+50h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 13 stage_id:1025 64 8 20 stage_data_iter:1032";
  *(_QWORD *)(v3 + 16) = TeamChainActivity::setRandomStageLevelDataByGm;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = stage_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v21);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21);
  v7 = data::ActivityTeamChainExcelConfigMgrBase::findTeamChainExcelConfig(
         &v6->design_config.txt_config_mgr.activity_team_chain_config_mgr,
         *(_DWORD *)(v3 + 48)) == 0LL;
  std::shared_ptr<Config>::~shared_ptr(&v21);
  if ( v7 )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/team_chain_activity.cpp",
      "setRandomStageLevelDataByGm",
      1029);
    v8 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
           &v22,
           (const char (*)[22])"[TeamChain] stage_id ");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v9, (const char (*)[16])" does not exist");
    common::milog::MiLogStream::~MiLogStream(&v22);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    *(std::map<unsigned int,TeamChainStageData>::iterator *)(v3 + 64) = std::map<unsigned int,TeamChainStageData>::find(
                                                                          &this->stage_data_map_,
                                                                          (const std::map<unsigned int,TeamChainStageData>::key_type *)(v3 + 48));
    __y._M_node = std::map<unsigned int,TeamChainStageData>::end(&this->stage_data_map_)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,TeamChainStageData> >::_Self *)(v3 + 64),
           &__y) )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/team_chain_activity.cpp",
        "setRandomStageLevelDataByGm",
        1035);
      v11 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v22, (const char (*)[11])"stage_id: ");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
        v12,
        (const char (*)[24])" not in stage_data_map_");
      common::milog::MiLogStream::~MiLogStream(&v22);
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v13 = std::_Rb_tree_iterator<std::pair<unsigned int const,TeamChainStageData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,TeamChainStageData> > *const)(v3 + 64));
      stage_data = &v13->second;
      p_is_open = &v13->second.is_open;
      v15 = (unsigned __int8)p_is_open & 7;
      v16 = (*(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v15 >= *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000));
      if ( (_BYTE)v16 )
        __asan_report_store1(p_is_open, v15, v16);
      stage_data->is_open = 1;
      v17 = (*(_BYTE *)(((unsigned __int64)&stage_data->best_score >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)stage_data + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&stage_data->best_score >> 3) + 0x7FFF8000));
      if ( (_BYTE)v17 )
        __asan_report_store4(&stage_data->best_score, (((_BYTE)stage_data + 8) & 7u) + 3, v17);
      stage_data->best_score = score;
      BaseActivity::notifyClientData(this, 0);
      result = 0LL;
    }
  }
  if ( v23 == (char *)v3 )
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

// Line 1046: range 000000001800FE94-0000000018010F03
__int64 __fastcall TeamChainActivity::enterDungeonByGm(
        TeamChainActivity *const this,
        uint32_t stage_id,
        uint32_t difficulty)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  unsigned int v9; // r14d
  ActivityTeamChainExcelConfigMgr *p_activity_team_chain_config_mgr; // rcx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  PlayerAvatarComp *AvatarComp; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v15; // rdx
  unsigned int *p_second; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v21; // rdx
  unsigned int *v22; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v23; // rdx
  unsigned int *v24; // rax
  google::protobuf::uint32 v25; // eax
  bool is_trial_avatar; // al
  std::vector<unsigned int>::reference v27; // rax
  google::protobuf::uint32 *v28; // rdx
  std::vector<unsigned int>::reference v29; // rax
  google::protobuf::uint32 *v30; // rdx
  std::vector<unsigned int>::reference v31; // rax
  google::protobuf::uint32 *v32; // rdx
  __int64 result; // rax
  uint32_t avatar_idx; // [rsp+1Ch] [rbp-2C4h]
  uint32_t i; // [rsp+20h] [rbp-2C0h]
  unsigned int pre_room_idx; // [rsp+24h] [rbp-2BCh]
  unsigned int pre_avatar_idx; // [rsp+28h] [rbp-2B8h]
  int ret; // [rsp+2Ch] [rbp-2B4h]
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> __y; // [rsp+30h] [rbp-2B0h] BYREF
  const data::TeamChainExcelConfig *stage_config_ptr; // [rsp+38h] [rbp-2A8h]
  const data::TeamChainOverallExcelConfig *overall_config_ptr; // [rsp+40h] [rbp-2A0h]
  const std::unordered_map<unsigned int,unsigned int> *pre_idx_map; // [rsp+48h] [rbp-298h]
  proto::TeamChainChooseTeamInfo *new_room_avatar_info; // [rsp+50h] [rbp-290h]
  proto::TeamChainChooseAvatarInfo *new_avatar_info; // [rsp+58h] [rbp-288h]
  const proto::TeamChainChooseTeamInfo *pre_room_avatar_info; // [rsp+60h] [rbp-280h]
  const proto::TeamChainChooseAvatarInfo *pre_avatar_info; // [rsp+68h] [rbp-278h]
  std::shared_ptr<Config> v48; // [rsp+70h] [rbp-270h] BYREF
  std::shared_ptr<Config> v49; // [rsp+80h] [rbp-260h] BYREF
  std::shared_ptr<Config> v50; // [rsp+90h] [rbp-250h] BYREF
  std::shared_ptr<Config> v51; // [rsp+A0h] [rbp-240h] BYREF
  common::milog::MiLogStream v52; // [rsp+B0h] [rbp-230h] BYREF
  char v53[528]; // [rsp+D0h] [rbp-210h] BYREF

  v3 = (unsigned __int64)v53;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(480LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "9 48 4 13 room_idx:1081 64 4 12 cur_pos:1088 80 4 13 stage_id:1045 96 8 17 pre_pos_iter:1090 128"
                        " 24 24 trial_avatar_id_vec:1065 192 24 25 formal_avatar_id_vec:1067 256 24 22 stage_buff_id_vec:"
                        "1074 320 24 8 rsp:1077 384 56 8 req:1076";
  *(_QWORD *)(v3 + 16) = TeamChainActivity::enterDungeonByGm;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -218959360;
  v5[536862724] = -234881024;
  v5[536862725] = -218959118;
  v5[536862726] = -234881024;
  v5[536862727] = -218959118;
  v5[536862728] = -234881024;
  v5[536862729] = -218959118;
  v5[536862730] = -234881024;
  v5[536862731] = -218959118;
  v5[536862733] = -218103808;
  v5[536862734] = -202116109;
  *(_DWORD *)(v3 + 80) = stage_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v51);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v51);
  stage_config_ptr = data::ActivityTeamChainExcelConfigMgrBase::findTeamChainExcelConfig(
                       &v6->design_config.txt_config_mgr.activity_team_chain_config_mgr,
                       *(_DWORD *)(v3 + 80));
  std::shared_ptr<Config>::~shared_ptr(&v51);
  if ( stage_config_ptr )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v51);
    std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v51);
    std::shared_ptr<Config>::~shared_ptr(&v51);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v51);
    p_activity_team_chain_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v51)->design_config.txt_config_mgr.activity_team_chain_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->schedule_id_);
    }
    overall_config_ptr = data::ActivityTeamChainExcelConfigMgrBase::findTeamChainOverallExcelConfig(
                           p_activity_team_chain_config_mgr,
                           this->schedule_id_);
    std::shared_ptr<Config>::~shared_ptr(&v51);
    if ( overall_config_ptr )
    {
      std::vector<unsigned int>::vector(
        (std::vector<unsigned int> *const)(v3 + 128),
        &stage_config_ptr->trial_avatar_id_list);
      std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 192));
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      AvatarComp = Player::getAvatarComp(this->player_);
      std::function<ForeachPolicy ()(FormalAvatar const&)>::function<TeamChainActivity::enterDungeonByGm(unsigned int,unsigned int)::{lambda(FormalAvatar const&)#1},void,void>(
        (std::function<ForeachPolicy(const FormalAvatar&)> *const)&v52,
        (TeamChainActivity::enterDungeonByGm::<lambda(const FormalAvatar&)>)(v3 + 192));
      PlayerAvatarComp::foreachFormalAvatar(AvatarComp, (std::function<ForeachPolicy(const FormalAvatar&)> *)&v52);
      std::function<ForeachPolicy ()(FormalAvatar const&)>::~function((std::function<ForeachPolicy(const FormalAvatar&)> *const)&v52);
      std::vector<unsigned int>::vector(
        (std::vector<unsigned int> *const)(v3 + 256),
        &stage_config_ptr->normal_buff_id_list);
      proto::TeamChainEnterDungeonReq::TeamChainEnterDungeonReq((proto::TeamChainEnterDungeonReq *const)(v3 + 384));
      proto::TeamChainEnterDungeonRsp::TeamChainEnterDungeonRsp((proto::TeamChainEnterDungeonRsp *const)(v3 + 320));
      proto::TeamChainEnterDungeonReq::set_stage_id(
        (proto::TeamChainEnterDungeonReq *const)(v3 + 384),
        *(_DWORD *)(v3 + 80));
      proto::TeamChainEnterDungeonReq::set_difficulty((proto::TeamChainEnterDungeonReq *const)(v3 + 384), difficulty);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v51);
      v14 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v51);
      pre_idx_map = ActivityTeamChainExcelConfigMgr::getChainPreIdxMap(
                      &v14->design_config.txt_config_mgr.activity_team_chain_config_mgr,
                      *(_DWORD *)(v3 + 80));
      std::shared_ptr<Config>::~shared_ptr(&v51);
      for ( *(_DWORD *)(v3 + 48) = 0; ; ++*(_DWORD *)(v3 + 48) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&overall_config_ptr->room_num >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&overall_config_ptr->room_num >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&overall_config_ptr->room_num);
        }
        if ( overall_config_ptr->room_num <= *(_DWORD *)(v3 + 48) )
          break;
        new_room_avatar_info = proto::TeamChainEnterDungeonReq::add_team_info_list((proto::TeamChainEnterDungeonReq *const)(v3 + 384));
        for ( avatar_idx = 0; ; ++avatar_idx )
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v48);
          std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v48);
          std::shared_ptr<Config>::~shared_ptr(&v48);
          if ( avatar_idx > 3 )
            break;
          new_avatar_info = proto::TeamChainChooseTeamInfo::add_avatar_info_list(new_room_avatar_info);
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v49);
          std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v49);
          *(_DWORD *)(v3 + 64) = 4 * *(_DWORD *)(v3 + 48) + avatar_idx + 1;
          std::shared_ptr<Config>::~shared_ptr(&v49);
          *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                          pre_idx_map,
                                                                                          (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v3 + 64));
          __y._M_cur = std::unordered_map<unsigned int,unsigned int>::end(pre_idx_map)._M_cur;
          if ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
                 (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v3 + 96),
                 &__y) )
          {
            v15 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v3 + 96));
            p_second = &v15->second;
            if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(p_second);
            }
            if ( !v15->second )
            {
              common::milog::MiLogStream::create(
                &v52,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/team_chain_activity.cpp",
                "enterDungeonByGm",
                1095);
              v17 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                      &v52,
                      (const char (*)[23])"[TeamChain] stage_id: ");
              v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v17,
                      (const unsigned int *)(v3 + 80));
              v19 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                      v18,
                      (const char (*)[13])", room_idx: ");
              v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v19,
                      (const unsigned int *)(v3 + 48));
              common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                v20,
                (const char (*)[17])" pre pos is zero");
              common::milog::MiLogStream::~MiLogStream(&v52);
              v9 = -1;
              goto LABEL_55;
            }
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v50);
            std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v50);
            v21 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v3 + 96));
            v22 = &v21->second;
            if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v22 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v22);
            }
            pre_room_idx = (v21->second - 1) >> 2;
            std::shared_ptr<Config>::~shared_ptr(&v50);
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v51);
            std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v51);
            v23 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v3 + 96));
            v24 = &v23->second;
            if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v24 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v24);
            }
            pre_avatar_idx = ((unsigned __int8)v23->second - 1) & 3;
            std::shared_ptr<Config>::~shared_ptr(&v51);
            if ( pre_room_idx >= proto::TeamChainEnterDungeonReq::team_info_list_size((const proto::TeamChainEnterDungeonReq *const)(v3 + 384)) )
            {
              common::milog::MiLogStream::create(
                &v52,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/team_chain_activity.cpp",
                "enterDungeonByGm",
                1102);
              common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                &v52,
                (const char (*)[36])"[TeamChain] pre_room_idx is invalid");
              common::milog::MiLogStream::~MiLogStream(&v52);
              v9 = -1;
              goto LABEL_55;
            }
            pre_room_avatar_info = proto::TeamChainEnterDungeonReq::mutable_team_info_list(
                                     (proto::TeamChainEnterDungeonReq *const)(v3 + 384),
                                     pre_room_idx);
            if ( pre_avatar_idx >= proto::TeamChainChooseTeamInfo::avatar_info_list_size(pre_room_avatar_info) )
            {
              common::milog::MiLogStream::create(
                &v52,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/team_chain_activity.cpp",
                "enterDungeonByGm",
                1108);
              common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                &v52,
                (const char (*)[38])"[TeamChain] pre_avatar_idx is invalid");
              common::milog::MiLogStream::~MiLogStream(&v52);
              v9 = -1;
              goto LABEL_55;
            }
            pre_avatar_info = proto::TeamChainChooseTeamInfo::avatar_info_list(pre_room_avatar_info, pre_avatar_idx);
            v25 = proto::TeamChainChooseAvatarInfo::avatar_id(pre_avatar_info);
            proto::TeamChainChooseAvatarInfo::set_avatar_id(new_avatar_info, v25);
            is_trial_avatar = proto::TeamChainChooseAvatarInfo::is_trial_avatar(pre_avatar_info);
            proto::TeamChainChooseAvatarInfo::set_is_trial_avatar(new_avatar_info, is_trial_avatar);
          }
          else if ( !std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v3 + 128)) )
          {
            v27 = std::vector<unsigned int>::back((std::vector<unsigned int> *const)(v3 + 128));
            v28 = v27;
            if ( *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v27 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v27);
            }
            proto::TeamChainChooseAvatarInfo::set_avatar_id(new_avatar_info, *v28);
            proto::TeamChainChooseAvatarInfo::set_is_trial_avatar(new_avatar_info, 1);
            std::vector<unsigned int>::pop_back((std::vector<unsigned int> *const)(v3 + 128));
          }
          else
          {
            if ( std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v3 + 192)) )
            {
              common::milog::MiLogStream::create(
                &v52,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/team_chain_activity.cpp",
                "enterDungeonByGm",
                1132);
              common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                &v52,
                (const char (*)[33])"[TeamChain] avatar is not enough");
              common::milog::MiLogStream::~MiLogStream(&v52);
              v9 = -1;
              goto LABEL_55;
            }
            v29 = std::vector<unsigned int>::back((std::vector<unsigned int> *const)(v3 + 192));
            v30 = v29;
            if ( *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v29 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v29);
            }
            proto::TeamChainChooseAvatarInfo::set_avatar_id(new_avatar_info, *v30);
            proto::TeamChainChooseAvatarInfo::set_is_trial_avatar(new_avatar_info, 0);
            std::vector<unsigned int>::pop_back((std::vector<unsigned int> *const)(v3 + 192));
          }
        }
        for ( i = 0; ; ++i )
        {
          if ( *(_BYTE *)(((unsigned __int64)&overall_config_ptr->room_skill_num >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)overall_config_ptr + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&overall_config_ptr->room_skill_num >> 3)
                                                                              + 0x7FFF8000) )
          {
            __asan_report_load4(&overall_config_ptr->room_skill_num);
          }
          if ( i >= overall_config_ptr->room_skill_num )
            break;
          if ( std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v3 + 256)) )
          {
            common::milog::MiLogStream::create(
              &v52,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/team_chain_activity.cpp",
              "enterDungeonByGm",
              1145);
            common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
              &v52,
              (const char (*)[31])"[TeamChain] buff is not enough");
            common::milog::MiLogStream::~MiLogStream(&v52);
            v9 = -1;
            goto LABEL_55;
          }
          v31 = std::vector<unsigned int>::back((std::vector<unsigned int> *const)(v3 + 256));
          v32 = v31;
          if ( *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v31 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v31);
          }
          proto::TeamChainChooseTeamInfo::add_skill_no_list(new_room_avatar_info, *v32);
          std::vector<unsigned int>::pop_back((std::vector<unsigned int> *const)(v3 + 256));
        }
      }
      ret = TeamChainActivity::onEnterDungeonReq(
              this,
              (const proto::TeamChainEnterDungeonReq *)(v3 + 384),
              (proto::TeamChainEnterDungeonRsp *)(v3 + 320));
      if ( ret )
        v9 = ret;
      else
        v9 = 0;
LABEL_55:
      proto::TeamChainEnterDungeonRsp::~TeamChainEnterDungeonRsp((proto::TeamChainEnterDungeonRsp *const)(v3 + 320));
      proto::TeamChainEnterDungeonReq::~TeamChainEnterDungeonReq((proto::TeamChainEnterDungeonReq *const)(v3 + 384));
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 256));
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 192));
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 128));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v52,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/team_chain_activity.cpp",
        "enterDungeonByGm",
        1061);
      v11 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
              &v52,
              (const char (*)[29])"[TeamChain] overall config: ");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &this->schedule_id_);
      common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v12, (const char (*)[16])" does not exist");
      common::milog::MiLogStream::~MiLogStream(&v52);
      v9 = -1;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v52,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/team_chain_activity.cpp",
      "enterDungeonByGm",
      1050);
    v7 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
           &v52,
           (const char (*)[22])"[TeamChain] stage_id ");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 80));
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v8, (const char (*)[16])" does not exist");
    common::milog::MiLogStream::~MiLogStream(&v52);
    v9 = -1;
  }
  result = v9;
  if ( v53 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8034) = 0LL;
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
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8038) = -168430091;
  }
  return result;
};

// Line 1068: range 000000001800FE30-000000001800FE92
ForeachPolicy __cdecl TeamChainActivity::enterDungeonByGm(unsigned int,unsigned int)::{lambda(FormalAvatar const&)#1}::operator()(
        const TeamChainActivity::enterDungeonByGm::<lambda(const FormalAvatar&)> *const __closure,
        const FormalAvatar *avatar)
{
  std::vector<unsigned int> *formal_avatar_id_vec; // rbx
  std::vector<unsigned int>::value_type __x[5]; // [rsp+1Ch] [rbp-14h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  formal_avatar_id_vec = __closure->__formal_avatar_id_vec;
  __x[0] = Avatar::getAvatarId(avatar);
  std::vector<unsigned int>::push_back(formal_avatar_id_vec, __x);
  return 0;
};
