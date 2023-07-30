// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/coin_collect_activity.cpp

// Line 26: range 000000001795AF8C-000000001795B0E3
int32_t __cdecl CoinCollectTeamInfo::fromBin(
        CoinCollectTeamInfo *const this,
        const proto::CoinCollectTeamInfoBin *proto)
{
  uint32_t v2; // edx
  const google::protobuf::RepeatedField<unsigned int> *v3; // rax
  const google::protobuf::RepeatedField<unsigned int> *v4; // rax
  bool is_host; // dl
  uint32_t v6; // ecx
  const google::protobuf::RepeatedField<unsigned int> *v7; // rax

  v2 = proto::CoinCollectTeamInfoBin::choose_skill_no(proto);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->choose_skill_no = v2;
  v3 = proto::CoinCollectTeamInfoBin::avatar_id_list(proto);
  common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(v3, &this->avatar_id_vec);
  v4 = proto::CoinCollectTeamInfoBin::avatar_lv_list(proto);
  common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(v4, &this->avatar_lv_vec);
  is_host = proto::CoinCollectTeamInfoBin::is_host(proto);
  if ( *(char *)(((unsigned __int64)&this->is_host >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_host);
  this->is_host = is_host;
  v6 = proto::CoinCollectTeamInfoBin::player_uid(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_uid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->player_uid >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->player_uid);
  }
  this->player_uid = v6;
  v7 = proto::CoinCollectTeamInfoBin::avatar_costume_id_list(proto);
  common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(v7, &this->avatar_costume_id_vec);
  return 0;
};

// Line 37: range 000000001795B0E4-000000001795B23F
int32_t __cdecl CoinCollectTeamInfo::toBin(const CoinCollectTeamInfo *const this, proto::CoinCollectTeamInfoBin *proto)
{
  google::protobuf::RepeatedField<unsigned int> *v2; // rax
  google::protobuf::RepeatedField<unsigned int> *v3; // rax
  google::protobuf::RepeatedField<unsigned int> *v4; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::CoinCollectTeamInfoBin::set_choose_skill_no(proto, this->choose_skill_no);
  v2 = proto::CoinCollectTeamInfoBin::mutable_avatar_id_list(proto);
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&this->avatar_id_vec, v2);
  v3 = proto::CoinCollectTeamInfoBin::mutable_avatar_lv_list(proto);
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&this->avatar_lv_vec, v3);
  if ( *(char *)(((unsigned __int64)&this->is_host >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_host);
  proto::CoinCollectTeamInfoBin::set_is_host(proto, this->is_host);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_uid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->player_uid >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::CoinCollectTeamInfoBin::set_player_uid(proto, this->player_uid);
  v4 = proto::CoinCollectTeamInfoBin::mutable_avatar_costume_id_list(proto);
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&this->avatar_costume_id_vec, v4);
  return 0;
};

// Line 48: range 000000001795B240-000000001795B397
void __cdecl CoinCollectTeamInfo::toClient(
        const CoinCollectTeamInfo *const this,
        proto::CoinCollectTeamInfoData *proto)
{
  google::protobuf::RepeatedField<unsigned int> *v2; // rax
  google::protobuf::RepeatedField<unsigned int> *v3; // rax
  google::protobuf::RepeatedField<unsigned int> *v4; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::CoinCollectTeamInfoData::set_choose_skill_no(proto, this->choose_skill_no);
  v2 = proto::CoinCollectTeamInfoData::mutable_avatar_id_list(proto);
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&this->avatar_id_vec, v2);
  v3 = proto::CoinCollectTeamInfoData::mutable_avatar_lv_list(proto);
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&this->avatar_lv_vec, v3);
  if ( *(char *)(((unsigned __int64)&this->is_host >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_host);
  proto::CoinCollectTeamInfoData::set_is_host(proto, this->is_host);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_uid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->player_uid >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::CoinCollectTeamInfoData::set_player_uid(proto, this->player_uid);
  v4 = proto::CoinCollectTeamInfoData::mutable_avatar_costume_id_list(proto);
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&this->avatar_costume_id_vec, v4);
};

// Line 58: range 000000001795B398-000000001795B713
int32_t __cdecl CoinCollectLevelData::fromBin(
        CoinCollectLevelData *const this,
        const proto::CoinCollectLevelBin *proto)
{
  uint32_t v2; // edx
  bool is_level_open; // cl
  uint32_t choose_skill_no; // edx
  uint32_t v5; // ecx
  uint32_t v6; // edx
  const proto::CoinCollectTeamInfoBin *v7; // rax
  uint32_t v8; // edx
  uint32_t v9; // ecx
  const google::protobuf::RepeatedPtrField<proto::CoinCollectTeamInfoBin> *v10; // rax
  bool have_watched_cutscene; // dl
  bool have_play_single_level; // cl
  bool have_play_double_level; // cl

  v2 = proto::CoinCollectLevelBin::level_id(proto);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->level_id = v2;
  is_level_open = proto::CoinCollectLevelBin::is_level_open(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_level_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_level_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_level_open);
  }
  this->is_level_open = is_level_open;
  choose_skill_no = proto::CoinCollectLevelBin::last_choose_skill_no(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_choose_skill_no >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_choose_skill_no >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_choose_skill_no);
  }
  this->last_choose_skill_no = choose_skill_no;
  v5 = proto::CoinCollectLevelBin::single_best_collect_num(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->single_best_collect_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->single_best_collect_num >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->single_best_collect_num);
  }
  this->single_best_collect_num = v5;
  v6 = proto::CoinCollectLevelBin::single_best_pass_time_ms(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->single_best_pass_time_ms >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->single_best_pass_time_ms >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->single_best_pass_time_ms);
  }
  this->single_best_pass_time_ms = v6;
  v7 = proto::CoinCollectLevelBin::single_best_team_info(proto);
  CoinCollectTeamInfo::fromBin(&this->single_best_team_info, v7);
  v8 = proto::CoinCollectLevelBin::double_best_collect_num(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->double_best_collect_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->double_best_collect_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->double_best_collect_num);
  }
  this->double_best_collect_num = v8;
  v9 = proto::CoinCollectLevelBin::double_best_pass_time_ms(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->double_best_pass_time_ms >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->double_best_pass_time_ms >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->double_best_pass_time_ms);
  }
  this->double_best_pass_time_ms = v9;
  v10 = proto::CoinCollectLevelBin::double_best_team_info_list(proto);
  common::tools::MiscUtils::repeatedToVector<CoinCollectTeamInfo,proto::CoinCollectTeamInfoBin,int (CoinCollectTeamInfo::*)(proto::CoinCollectTeamInfoBin const&)>(
    v10,
    &this->double_best_team_info_vec,
    (int (*)(CoinCollectTeamInfo *, const proto::CoinCollectTeamInfoBin *))CoinCollectTeamInfo::fromBin);
  have_watched_cutscene = proto::CoinCollectLevelBin::is_have_watched_cutscene(proto);
  if ( *(char *)(((unsigned __int64)&this->is_have_watched_cutscene >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_have_watched_cutscene);
  this->is_have_watched_cutscene = have_watched_cutscene;
  have_play_single_level = proto::CoinCollectLevelBin::is_have_play_single_level(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_have_play_single_level >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 111) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_have_play_single_level >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_have_play_single_level);
  }
  this->is_have_play_single_level = have_play_single_level;
  have_play_double_level = proto::CoinCollectLevelBin::is_have_play_double_level(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_have_play_double_level >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 110) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_have_play_double_level >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_have_play_double_level);
  }
  this->is_have_play_double_level = have_play_double_level;
  return 0;
};

// Line 75: range 000000001795B714-000000001795BA95
int32_t __cdecl CoinCollectLevelData::toBin(const CoinCollectLevelData *const this, proto::CoinCollectLevelBin *proto)
{
  proto::CoinCollectTeamInfoBin *v2; // rax
  google::protobuf::RepeatedPtrField<proto::CoinCollectTeamInfoBin> *v3; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::CoinCollectLevelBin::set_level_id(proto, this->level_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_level_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_level_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_level_open);
  }
  proto::CoinCollectLevelBin::set_is_level_open(proto, this->is_level_open);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_choose_skill_no >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_choose_skill_no >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::CoinCollectLevelBin::set_last_choose_skill_no(proto, this->last_choose_skill_no);
  if ( *(_BYTE *)(((unsigned __int64)&this->single_best_collect_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->single_best_collect_num >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::CoinCollectLevelBin::set_single_best_collect_num(proto, this->single_best_collect_num);
  if ( *(_BYTE *)(((unsigned __int64)&this->single_best_pass_time_ms >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->single_best_pass_time_ms >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::CoinCollectLevelBin::set_single_best_pass_time_ms(proto, this->single_best_pass_time_ms);
  v2 = proto::CoinCollectLevelBin::mutable_single_best_team_info(proto);
  CoinCollectTeamInfo::toBin(&this->single_best_team_info, v2);
  if ( *(_BYTE *)(((unsigned __int64)&this->double_best_collect_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->double_best_collect_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::CoinCollectLevelBin::set_double_best_collect_num(proto, this->double_best_collect_num);
  if ( *(_BYTE *)(((unsigned __int64)&this->double_best_pass_time_ms >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->double_best_pass_time_ms >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::CoinCollectLevelBin::set_double_best_pass_time_ms(proto, this->double_best_pass_time_ms);
  v3 = proto::CoinCollectLevelBin::mutable_double_best_team_info_list(proto);
  common::tools::MiscUtils::vectorToRepeated<CoinCollectTeamInfo,proto::CoinCollectTeamInfoBin,int (CoinCollectTeamInfo::*)(proto::CoinCollectTeamInfoBin&)const>(
    &this->double_best_team_info_vec,
    v3,
    (int (*)(const CoinCollectTeamInfo *, proto::CoinCollectTeamInfoBin *))CoinCollectTeamInfo::toBin);
  if ( *(char *)(((unsigned __int64)&this->is_have_watched_cutscene >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_have_watched_cutscene);
  proto::CoinCollectLevelBin::set_is_have_watched_cutscene(proto, this->is_have_watched_cutscene);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_have_play_single_level >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 111) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_have_play_single_level >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_have_play_single_level);
  }
  proto::CoinCollectLevelBin::set_is_have_play_single_level(proto, this->is_have_play_single_level);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_have_play_double_level >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 110) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_have_play_double_level >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_have_play_double_level);
  }
  proto::CoinCollectLevelBin::set_is_have_play_double_level(proto, this->is_have_play_double_level);
  return 0;
};

// Line 92: range 000000001795BA96-000000001795BE13
void __cdecl CoinCollectLevelData::toClient(const CoinCollectLevelData *const this, proto::CoinCollectLevelData *proto)
{
  proto::CoinCollectTeamInfoData *v2; // rax
  google::protobuf::RepeatedPtrField<proto::CoinCollectTeamInfoData> *v3; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::CoinCollectLevelData::set_level_id(proto, this->level_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_level_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_level_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_level_open);
  }
  proto::CoinCollectLevelData::set_is_level_open(proto, this->is_level_open);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_choose_skill_no >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_choose_skill_no >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::CoinCollectLevelData::set_last_choose_skill_no(proto, this->last_choose_skill_no);
  if ( *(_BYTE *)(((unsigned __int64)&this->single_best_collect_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->single_best_collect_num >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::CoinCollectLevelData::set_single_best_collect_num(proto, this->single_best_collect_num);
  if ( *(_BYTE *)(((unsigned __int64)&this->single_best_pass_time_ms >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->single_best_pass_time_ms >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::CoinCollectLevelData::set_single_best_pass_time_ms(proto, this->single_best_pass_time_ms);
  v2 = proto::CoinCollectLevelData::mutable_single_best_team_info(proto);
  CoinCollectTeamInfo::toClient(&this->single_best_team_info, v2);
  if ( *(_BYTE *)(((unsigned __int64)&this->double_best_collect_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->double_best_collect_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::CoinCollectLevelData::set_double_best_collect_num(proto, this->double_best_collect_num);
  if ( *(_BYTE *)(((unsigned __int64)&this->double_best_pass_time_ms >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->double_best_pass_time_ms >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::CoinCollectLevelData::set_double_best_pass_time_ms(proto, this->double_best_pass_time_ms);
  v3 = proto::CoinCollectLevelData::mutable_double_best_team_info_list(proto);
  common::tools::MiscUtils::vectorToRepeated<CoinCollectTeamInfo,proto::CoinCollectTeamInfoData,void (CoinCollectTeamInfo::*)(proto::CoinCollectTeamInfoData&)const>(
    &this->double_best_team_info_vec,
    v3,
    (void (*)(const CoinCollectTeamInfo *, proto::CoinCollectTeamInfoData *))CoinCollectTeamInfo::toClient);
  if ( *(char *)(((unsigned __int64)&this->is_have_watched_cutscene >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_have_watched_cutscene);
  proto::CoinCollectLevelData::set_is_have_watched_cutscene(proto, this->is_have_watched_cutscene);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_have_play_single_level >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 111) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_have_play_single_level >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_have_play_single_level);
  }
  proto::CoinCollectLevelData::set_is_have_play_single_level(proto, this->is_have_play_single_level);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_have_play_double_level >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 110) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_have_play_double_level >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_have_play_double_level);
  }
  proto::CoinCollectLevelData::set_is_have_play_double_level(proto, this->is_have_play_double_level);
};

// Line 108: range 000000001795BE14-000000001795C0FA
int32_t __cdecl CoinCollectActivity::fromScheduleBin(
        CoinCollectActivity *const this,
        const proto::ActivityScheduleBin *bin)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // rbx
  CoinCollectLevelData *v6; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,CoinCollectLevelData> >,bool> v7; // rax
  common::milog::MiLogStream *v8; // rax
  int v9; // r15d
  int32_t result; // eax
  google::protobuf::RepeatedPtrField<proto::CoinCollectLevelBin>::const_iterator __for_begin; // [rsp+28h] [rbp-178h] BYREF
  google::protobuf::RepeatedPtrField<proto::CoinCollectLevelBin>::const_iterator __for_end; // [rsp+30h] [rbp-170h] BYREF
  const proto::CoinCollectScheduleBin *coin_collect_bin; // [rsp+38h] [rbp-168h]
  const google::protobuf::RepeatedPtrField<proto::CoinCollectLevelBin> *__for_range; // [rsp+40h] [rbp-160h]
  const proto::CoinCollectLevelBin *level_bin; // [rsp+48h] [rbp-158h]
  common::milog::MiLogStream v16; // [rsp+50h] [rbp-150h] BYREF
  char v17[304]; // [rsp+70h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 152 18 new_level_data:112";
  *(_QWORD *)(v3 + 16) = CoinCollectActivity::fromScheduleBin;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862725] = -218103808;
  v5[536862726] = -202116109;
  v5[536862727] = -202116109;
  coin_collect_bin = proto::ActivityScheduleBin::coin_collect_bin(bin);
  __for_range = proto::CoinCollectScheduleBin::level_bin_list(coin_collect_bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::CoinCollectLevelBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::CoinCollectLevelBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::CoinCollectLevelBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    level_bin = google::protobuf::internal::RepeatedPtrIterator<proto::CoinCollectLevelBin const>::operator*(&__for_begin);
    CoinCollectLevelData::CoinCollectLevelData((CoinCollectLevelData *const)(v3 + 32));
    CoinCollectLevelData::fromBin((CoinCollectLevelData *const)(v3 + 32), level_bin);
    v7 = std::map<unsigned int,CoinCollectLevelData>::emplace<unsigned int &,CoinCollectLevelData&>(
           &this->level_data_map_,
           (unsigned int *)(v3 + 32),
           (CoinCollectLevelData *)(v3 + 32),
           (unsigned int *)&this->level_data_map_,
           v6);
    if ( !v7.second )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/coin_collect_activity.cpp",
        "fromScheduleBin",
        116);
      v8 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
             &v16,
             (const char (*)[46])"[CoinCollect] level_id duplicated, level_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v16);
      v2 = -1;
      v9 = 0;
    }
    else
    {
      v9 = 1;
    }
    CoinCollectLevelData::~CoinCollectLevelData((CoinCollectLevelData *const)(v3 + 32));
    if ( v9 != 1 )
      goto LABEL_12;
    google::protobuf::internal::RepeatedPtrIterator<proto::CoinCollectLevelBin const>::operator++(&__for_begin);
  }
  v2 = 0;
LABEL_12:
  result = v2;
  if ( v17 == (char *)v3 )
  {
    *(_DWORD *)((v3 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8014) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF801C) = 0;
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

// Line 124: range 000000001795C0FC-000000001795C1C8
int32_t __cdecl CoinCollectActivity::toScheduleBin(
        const CoinCollectActivity *const this,
        proto::ActivityScheduleBin *bin)
{
  std::map<unsigned int,CoinCollectLevelData>::const_iterator __for_begin; // [rsp+10h] [rbp-40h] BYREF
  std::map<unsigned int,CoinCollectLevelData>::const_iterator __for_end; // [rsp+18h] [rbp-38h] BYREF
  proto::CoinCollectScheduleBin *coin_collect_bin; // [rsp+20h] [rbp-30h]
  const std::map<unsigned int,CoinCollectLevelData> *__for_range; // [rsp+28h] [rbp-28h]
  const std::pair<unsigned int const,CoinCollectLevelData> *v7; // [rsp+30h] [rbp-20h]
  std::tuple_element<0,const std::pair<unsigned int const,CoinCollectLevelData> >::type *level_id; // [rsp+38h] [rbp-18h]
  std::tuple_element<1,const std::pair<unsigned int const,CoinCollectLevelData> >::type *level_data; // [rsp+40h] [rbp-10h]
  proto::CoinCollectLevelBin *new_level_data_bin; // [rsp+48h] [rbp-8h]

  coin_collect_bin = proto::ActivityScheduleBin::mutable_coin_collect_bin(bin);
  __for_range = &this->level_data_map_;
  __for_begin._M_node = std::map<unsigned int,CoinCollectLevelData>::begin(&this->level_data_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,CoinCollectLevelData>::end(&this->level_data_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v7 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,CoinCollectLevelData>>::operator*(&__for_begin);
    level_id = std::get<0ul,unsigned int const,CoinCollectLevelData>(v7);
    level_data = (std::tuple_element<1,const std::pair<unsigned int const,CoinCollectLevelData> >::type *)std::get<1ul,unsigned int const,CoinCollectLevelData>(v7);
    new_level_data_bin = proto::CoinCollectScheduleBin::add_level_bin_list(coin_collect_bin);
    CoinCollectLevelData::toBin(level_data, new_level_data_bin);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,CoinCollectLevelData>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 135: range 000000001795C1CA-000000001795C397
int32_t __cdecl CoinCollectActivity::toClient(CoinCollectActivity *const this, proto::ActivityInfo *activity_info)
{
  common::milog::MiLogStream *v2; // rbx
  unsigned int val; // [rsp+1Ch] [rbp-74h] BYREF
  std::map<unsigned int,CoinCollectLevelData>::iterator __for_begin; // [rsp+20h] [rbp-70h] BYREF
  std::map<unsigned int,CoinCollectLevelData>::iterator __for_end; // [rsp+28h] [rbp-68h] BYREF
  proto::CoinCollectDetailInfo *coin_collect_info; // [rsp+30h] [rbp-60h]
  std::map<unsigned int,CoinCollectLevelData> *__for_range; // [rsp+38h] [rbp-58h]
  const std::pair<unsigned int const,CoinCollectLevelData> *v9; // [rsp+40h] [rbp-50h]
  std::tuple_element<0,const std::pair<unsigned int const,CoinCollectLevelData> >::type *level_id; // [rsp+48h] [rbp-48h]
  std::tuple_element<1,const std::pair<unsigned int const,CoinCollectLevelData> >::type *level_data; // [rsp+50h] [rbp-40h]
  proto::CoinCollectLevelData *new_coin_collect_level_info; // [rsp+58h] [rbp-38h]
  common::milog::MiLogStream v13; // [rsp+60h] [rbp-30h] BYREF

  if ( BaseActivity::toClient((BaseActivity *const)this, activity_info) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/coin_collect_activity.cpp",
      "toClient",
      139);
    v2 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
           &v13,
           (const char (*)[51])"[CoinCollect] BaseActivity::toClient failed, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    return -1;
  }
  else
  {
    coin_collect_info = proto::ActivityInfo::mutable_coin_collect_info(activity_info);
    __for_range = &this->level_data_map_;
    __for_begin._M_node = std::map<unsigned int,CoinCollectLevelData>::begin(&this->level_data_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,CoinCollectLevelData>::end(&this->level_data_map_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v9 = std::_Rb_tree_iterator<std::pair<unsigned int const,CoinCollectLevelData>>::operator*(&__for_begin);
      level_id = std::get<0ul,unsigned int const,CoinCollectLevelData>(v9);
      level_data = (std::tuple_element<1,const std::pair<unsigned int const,CoinCollectLevelData> >::type *)std::get<1ul,unsigned int const,CoinCollectLevelData>(v9);
      new_coin_collect_level_info = proto::CoinCollectDetailInfo::add_level_data_list(coin_collect_info);
      CoinCollectLevelData::toClient(level_data, new_coin_collect_level_info);
      std::_Rb_tree_iterator<std::pair<unsigned int const,CoinCollectLevelData>>::operator++(&__for_begin);
    }
    return 0;
  }
};

// Line 153: range 000000001795C398-000000001795C444
int32_t __cdecl CoinCollectActivity::init(CoinCollectActivity *const this)
{
  CoinCollectActivity *v1; // rdx
  unsigned __int64 v2; // rax
  char v3; // al

  if ( !BaseActivity::isOpening((const BaseActivity *const)this, 0) )
    goto LABEL_7;
  v1 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = (unsigned __int64)(this->_vptr_DescribalBase + 17);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8();
  if ( (*(unsigned __int8 (__fastcall **)(CoinCollectActivity *))v2)(v1) )
LABEL_7:
    v3 = 1;
  else
    v3 = 0;
  if ( !v3 )
    CoinCollectActivity::registerObserver(this);
  return 0;
};

// Line 166: range 000000001795C446-000000001795C799
void __cdecl CoinCollectActivity::onPreStart(CoinCollectActivity *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // rbx
  std::vector<unsigned int>::const_reference v4; // rdx
  CoinCollectLevelData *v5; // rax
  const unsigned int *v6; // rcx
  CoinCollectLevelData *v7; // r8
  std::unordered_map<unsigned int,data::CoinCollectExcelConfig>::const_iterator __for_begin; // [rsp+18h] [rbp-178h] BYREF
  std::unordered_map<unsigned int,data::CoinCollectExcelConfig>::const_iterator __for_end; // [rsp+20h] [rbp-170h] BYREF
  const ActivityCoinCollectExcelConfigMgr *config_mgr; // [rsp+28h] [rbp-168h]
  const std::unordered_map<unsigned int,data::CoinCollectExcelConfig> *__for_range; // [rsp+30h] [rbp-160h]
  const std::pair<unsigned int const,data::CoinCollectExcelConfig> *v12; // [rsp+38h] [rbp-158h]
  std::tuple_element<0,const std::pair<unsigned int const,data::CoinCollectExcelConfig> >::type *level_id; // [rsp+40h] [rbp-150h]
  std::tuple_element<1,const std::pair<unsigned int const,data::CoinCollectExcelConfig> >::type *level_config; // [rsp+48h] [rbp-148h]
  std::shared_ptr<Config> v15; // [rsp+50h] [rbp-140h] BYREF
  char v16[304]; // [rsp+60h] [rbp-130h] BYREF

  v1 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(256LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 152 18 new_level_data:171";
  *(_QWORD *)(v1 + 16) = CoinCollectActivity::onPreStart;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862725] = -218103808;
  v3[536862726] = -202116109;
  v3[536862727] = -202116109;
  std::map<unsigned int,CoinCollectLevelData>::clear(&this->level_data_map_);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v15);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15)->design_config.txt_config_mgr.activity_coin_collect_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v15);
  __for_range = &config_mgr->coin_collect_excel_config_map;
  __for_begin._M_cur = std::unordered_map<unsigned int,data::CoinCollectExcelConfig>::begin(&config_mgr->coin_collect_excel_config_map)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,data::CoinCollectExcelConfig>::end(&config_mgr->coin_collect_excel_config_map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::CoinCollectExcelConfig>,false>(
            &__for_begin,
            &__for_end) )
  {
    v12 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::CoinCollectExcelConfig>,false,false>::operator*(&__for_begin);
    level_id = std::get<0ul,unsigned int const,data::CoinCollectExcelConfig>(v12);
    level_config = (std::tuple_element<1,const std::pair<unsigned int const,data::CoinCollectExcelConfig> >::type *)std::get<1ul,unsigned int const,data::CoinCollectExcelConfig>(v12);
    CoinCollectLevelData::CoinCollectLevelData((CoinCollectLevelData *const)(v1 + 32));
    if ( *(_BYTE *)(((unsigned __int64)level_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)level_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)level_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v1 + 32) = *level_id;
    if ( std::vector<unsigned int>::size(&level_config->skill_no_list) )
    {
      v4 = std::vector<unsigned int>::operator[](&level_config->skill_no_list, 0LL);
      if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v1 + 40) = *v4;
    }
    v5 = std::move<CoinCollectLevelData &>((CoinCollectLevelData *)(v1 + 32));
    std::map<unsigned int,CoinCollectLevelData>::emplace<unsigned int const&,CoinCollectLevelData>(
      &this->level_data_map_,
      level_id,
      v5,
      v6,
      v7);
    CoinCollectLevelData::~CoinCollectLevelData((CoinCollectLevelData *const)(v1 + 32));
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::CoinCollectExcelConfig>,false,false>::operator++(&__for_begin);
  }
  if ( v16 == (char *)v1 )
  {
    *(_DWORD *)((v1 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8014) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 183: range 000000001795C79A-000000001795C7B4
void __cdecl CoinCollectActivity::onStart(CoinCollectActivity *const this)
{
  CoinCollectActivity::registerObserver(this);
};

// Line 188: range 000000001795C7B6-000000001795C7D0
void __cdecl CoinCollectActivity::onSettle(CoinCollectActivity *const this)
{
  CoinCollectActivity::unregisterObserver(this);
};

// Line 193: range 000000001795C7D2-000000001795C7F2
void __cdecl CoinCollectActivity::onClear(CoinCollectActivity *const this)
{
  std::map<unsigned int,CoinCollectLevelData>::clear(&this->level_data_map_);
};

// Line 199: range 000000001795C7F4-000000001795CCCA
int32_t __cdecl CoinCollectActivity::execAction(
        CoinCollectActivity *const this,
        const data::NewActivityExec *action_exec)
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
  const std::string *level_id_str; // [rsp+18h] [rbp-A8h]
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
  *(_QWORD *)(v2 + 8) = "1 32 4 12 level_id:211";
  *(_QWORD *)(v2 + 16) = CoinCollectActivity::execAction;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( action_exec->type == NEW_ACTIVITY_ACTION_OPEN_COIN_COLLECT_LEVEL )
  {
    if ( std::vector<std::string>::size(&action_exec->param) )
    {
      *(_DWORD *)(v2 + 32) = 0;
      level_id_str = std::vector<std::string>::operator[](&action_exec->param, 0LL);
      if ( common::tools::StringUtils::strToNum<unsigned int>(level_id_str, (unsigned int *)(v2 + 32), 1) )
      {
        common::milog::MiLogStream::create(
          &v17,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/coin_collect_activity.cpp",
          "execAction",
          215);
        v8 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
               &v17,
               (const char (*)[41])"[CoinCollect] convert to level_id error ");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, level_id_str);
        common::milog::MiLogStream::~MiLogStream(&v17);
        result = -1;
      }
      else
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v16);
        v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v16);
        v10 = data::ActivityCoinCollectExcelConfigMgrBase::findCoinCollectExcelConfig(
                &v9->design_config.txt_config_mgr.activity_coin_collect_config_mgr,
                *(_DWORD *)(v2 + 32)) == 0LL;
        std::shared_ptr<Config>::~shared_ptr(&v16);
        if ( v10 )
        {
          common::milog::MiLogStream::create(
            &v17,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/coin_collect_activity.cpp",
            "execAction",
            220);
          v11 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                  &v17,
                  (const char (*)[24])"[CoinCollect] level id ");
          v12 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, level_id_str);
          common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v12, (const char (*)[16])" does not exist");
          common::milog::MiLogStream::~MiLogStream(&v17);
          result = -1;
        }
        else if ( CoinCollectActivity::openCoinCollectLevel(this, *(_DWORD *)(v2 + 32)) )
        {
          common::milog::MiLogStream::create(
            &v17,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/coin_collect_activity.cpp",
            "execAction",
            226);
          v13 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
                  &v17,
                  (const char (*)[54])"[CoinCollect] openCoinCollectLevel failed, level_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 32));
          common::milog::MiLogStream::~MiLogStream(&v17);
          result = -1;
        }
        else
        {
          BaseActivity::notifyClientData((BaseActivity *const)this, 0);
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
        "./src/player/activity/coin_collect_activity.cpp",
        "execAction",
        207);
      v5 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
             &v17,
             (const char (*)[33])"[CoinCollect] action param size ");
      val = std::vector<std::string>::size(&action_exec->param);
      v6 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v5, &val);
      common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v6, (const char (*)[12])off_262413A0);
      common::milog::MiLogStream::~MiLogStream(&v17);
      result = -1;
    }
  }
  else
  {
    result = BaseActivity::execAction((BaseActivity *const)this, action_exec);
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

// Line 239: range 000000001795D294-000000001795DCED
__int64 __fastcall CoinCollectActivity::checkCoinCollectDraftExec(
        CoinCollectActivity *const this,
        uint32_t draft_id,
        std::unordered_map<unsigned int,int> *fail_uid_reason_map)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdx
  char v8; // al
  std::unordered_map<unsigned int,int>::mapped_type *v9; // rax
  _DWORD *v10; // rdx
  unsigned int v11; // r14d
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v15; // rax
  uint32_t Uid; // r14d
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  common::milog::MiLogStream *v19; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  bool v21; // r14
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  Scene *v24; // rax
  SceneTransferGuardComp *TransferGuardComp; // rax
  Scene *v26; // rax
  bool v27; // r14
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // r14
  __int64 result; // rax
  const data::DraftExcelConfig *draft_config_ptr; // [rsp+28h] [rbp-138h]
  std::shared_ptr<Config> v32; // [rsp+30h] [rbp-130h] BYREF
  common::milog::MiLogStream v33; // [rsp+40h] [rbp-120h] BYREF
  CoinCollectActivity::checkCoinCollectDraftExec::<lambda(Player&)> p___f; // [rsp+60h] [rbp-100h] BYREF
  char v35[208]; // [rsp+90h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 4 12 level_id:266 64 4 7 ret:289 80 4 12 draft_id:238 96 16 13 world_ptr:241 128 16 13 scene_ptr:273";
  *(_QWORD *)(v3 + 16) = CoinCollectActivity::checkCoinCollectDraftExec;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -219021312;
  v5[536862724] = -202178560;
  *(_DWORD *)(v3 + 80) = draft_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurWorld<PlayerWorld>((const PlayerSceneComp *const)(v3 + 96));
  if ( std::operator==<PlayerWorld>((const std::shared_ptr<PlayerWorld> *)(v3 + 96), 0LL) )
    goto LABEL_12;
  v6 = (unsigned __int64)std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8();
  v7 = *(_QWORD *)v6 + 16LL;
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8();
  if ( (*(unsigned int (__fastcall **)(unsigned __int64))v7)(v6) == 1 )
    v8 = 0;
  else
LABEL_12:
    v8 = 1;
  if ( v8 )
  {
    common::milog::MiLogStream::create(
      &v33,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/coin_collect_activity.cpp",
      "checkCoinCollectDraftExec",
      244);
    common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
      &v33,
      (const char (*)[51])"[CoinCollect] cur world can not start coin collect");
    common::milog::MiLogStream::~MiLogStream(&v33);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_DWORD *)(v3 + 64) = Player::getUid(this->player_);
    v9 = std::unordered_map<unsigned int,int>::operator[](
           fail_uid_reason_map,
           (std::unordered_map<unsigned int,int>::key_type *)(v3 + 64));
    v10 = v9;
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v9);
    }
    *v10 = 527;
    v11 = 527;
  }
  else
  {
    v12 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
    if ( World::getPlayerCount(v12) != 1
      && (v13 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96)),
          World::getPlayerCount(v13) != 2) )
    {
      common::milog::MiLogStream::create(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/coin_collect_activity.cpp",
        "checkCoinCollectDraftExec",
        251);
      v15 = common::milog::MiLogStream::operator<<<char [70],(char *[70])0>(
              &v33,
              (const char (*)[70])"[CoinCollect] draft cannot start when player num != 1 or 2, draft_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 80));
      common::milog::MiLogStream::~MiLogStream(&v33);
      v11 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Uid = Player::getUid(this->player_);
      v17 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      if ( Uid == World::getOwnerUid(v17) )
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v32);
        v18 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v32);
        draft_config_ptr = data::DraftExcelConfigMgrBase::findDraftExcelConfig(
                             &v18->design_config.txt_config_mgr.draft_config_mgr,
                             *(_DWORD *)(v3 + 80));
        std::shared_ptr<Config>::~shared_ptr(&v32);
        if ( draft_config_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&draft_config_ptr->param >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)draft_config_ptr + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&draft_config_ptr->param >> 3)
                                                                            + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          *(_DWORD *)(v3 + 48) = draft_config_ptr->param;
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v32);
          v20 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v32);
          v21 = data::ActivityCoinCollectExcelConfigMgrBase::findCoinCollectExcelConfig(
                  &v20->design_config.txt_config_mgr.activity_coin_collect_config_mgr,
                  *(_DWORD *)(v3 + 48)) == 0LL;
          std::shared_ptr<Config>::~shared_ptr(&v32);
          if ( v21 )
          {
            common::milog::MiLogStream::create(
              &v33,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/coin_collect_activity.cpp",
              "checkCoinCollectDraftExec",
              269);
            v22 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                    &v33,
                    (const char (*)[25])"[CoinCollect] level id: ");
            v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v22,
                    (const unsigned int *)(v3 + 48));
            common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v23, (const char (*)[12])off_262413A0);
            common::milog::MiLogStream::~MiLogStream(&v33);
            v11 = -1;
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            Player::getSceneComp(this->player_);
            PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v3 + 128));
            if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 128), 0LL) )
            {
              common::milog::MiLogStream::create(
                &v33,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/coin_collect_activity.cpp",
                "checkCoinCollectDraftExec",
                276);
              common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                &v33,
                (const char (*)[35])"[CoinCollect] cur scene is nullptr");
              common::milog::MiLogStream::~MiLogStream(&v33);
              v11 = -1;
            }
            else
            {
              v24 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
              TransferGuardComp = Scene::getTransferGuardComp(v24);
              if ( SceneTransferGuardComp::isActive(TransferGuardComp) )
              {
                common::milog::MiLogStream::create(
                  &v33,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/activity/coin_collect_activity.cpp",
                  "checkCoinCollectDraftExec",
                  281);
                common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                  &v33,
                  (const char (*)[37])"[CoinCollect] transferguard is start");
                common::milog::MiLogStream::~MiLogStream(&v33);
                v11 = -1;
              }
              else
              {
                v26 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
                Scene::getMultistagePlayComp(v26);
                SceneMultistagePlayComp::findPlay<CoinCollectMultistagePlay>((const SceneMultistagePlayComp *const)&v32);
                v27 = std::operator!=<CoinCollectMultistagePlay>(
                        (const std::shared_ptr<CoinCollectMultistagePlay> *)&v32,
                        0LL);
                std::shared_ptr<CoinCollectMultistagePlay>::~shared_ptr((std::shared_ptr<CoinCollectMultistagePlay> *const)&v32);
                if ( v27 )
                {
                  common::milog::MiLogStream::create(
                    &v33,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/activity/coin_collect_activity.cpp",
                    "checkCoinCollectDraftExec",
                    286);
                  common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
                    &v33,
                    (const char (*)[54])"[CoinCollect] coin collect multistage play is ongoing");
                  common::milog::MiLogStream::~MiLogStream(&v33);
                  v11 = -1;
                }
                else
                {
                  *(_DWORD *)(v3 + 64) = 0;
                  v28 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
                  p___f.__ret = (int32_t *)(v3 + 64);
                  p___f.__fail_uid_reason_map = fail_uid_reason_map;
                  std::shared_ptr<PlayerWorld>::shared_ptr(
                    &p___f.__world_ptr,
                    (const std::shared_ptr<PlayerWorld> *)(v3 + 96));
                  p___f.__level_id = *(_DWORD *)(v3 + 48);
                  std::function<ForeachPolicy ()(Player &)>::function<CoinCollectActivity::checkCoinCollectDraftExec(unsigned int,std::unordered_map<unsigned int,int> &)::{lambda(Player &)#1},void,void>(
                    (std::function<ForeachPolicy(Player&)> *const)&v33,
                    &p___f);
                  World::foreachPlayer(v28, (std::function<ForeachPolicy(Player&)> *)&v33);
                  std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v33);
                  CoinCollectActivity::checkCoinCollectDraftExec(unsigned int,std::unordered_map<unsigned int,int> &)::{lambda(Player &)#1}::~Player(&p___f);
                  v11 = *(_DWORD *)(v3 + 64);
                }
              }
            }
            std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 128));
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v33,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/coin_collect_activity.cpp",
            "checkCoinCollectDraftExec",
            263);
          v19 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                  &v33,
                  (const char (*)[49])"[CoinCollect] draft config not found, draft_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v3 + 80));
          common::milog::MiLogStream::~MiLogStream(&v33);
          v11 = -1;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v33,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/coin_collect_activity.cpp",
          "checkCoinCollectDraftExec",
          257);
        common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
          &v33,
          (const char (*)[49])"[CoinCollect] draft cannot start by other player");
        common::milog::MiLogStream::~MiLogStream(&v33);
        v11 = -1;
      }
    }
  }
  std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v3 + 96));
  result = v11;
  if ( v35 == (char *)v3 )
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

// Line 291: range 000000001795CCCC-000000001795D272
ForeachPolicy __cdecl CoinCollectActivity::checkCoinCollectDraftExec(unsigned int,std::unordered_map<unsigned int,int> &)::{lambda(Player &)#1}::operator()(
        const CoinCollectActivity::checkCoinCollectDraftExec::<lambda(Player&)> *const __closure,
        Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // r14
  std::unordered_map<unsigned int,int> *fail_uid_reason_map; // r14
  std::unordered_map<unsigned int,int>::mapped_type *v7; // rax
  _DWORD *v8; // rdx
  int32_t *ret; // rdx
  ForeachPolicy v10; // r14d
  const CoinCollectActivity *p_level_id; // rdi
  uint32_t level_id; // eax
  int32_t *v13; // r14
  int32_t canStartCoinCollectPlay; // ecx
  int32_t *v15; // rdx
  common::milog::MiLogStream *v16; // r14
  int32_t *v17; // rdx
  int32_t v18; // r15d
  std::unordered_map<unsigned int,int> *v19; // r14
  std::unordered_map<unsigned int,int>::mapped_type *v20; // rax
  int32_t *v21; // rdx
  ForeachPolicy result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-94h] BYREF
  common::milog::MiLogStream v25; // [rsp+30h] [rbp-90h] BYREF
  char v26[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 16 activity_ptr:294";
  *(_QWORD *)(v2 + 16) = CoinCollectActivity::checkCoinCollectDraftExec(unsigned int,std::unordered_map<unsigned int,int> &)::{lambda(Player &)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  Player::getActivityComp(player);
  PlayerActivityComp::findOpenningActivity<CoinCollectActivity>((PlayerActivityComp *const)(v2 + 32));
  if ( std::operator==<CoinCollectActivity>(0LL, (const std::shared_ptr<CoinCollectActivity> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/coin_collect_activity.cpp",
      "operator()",
      297);
    v5 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
           &v25,
           (const char (*)[45])"[CoinCollect] activity is not opening, uid: ");
    val = Player::getUid(player);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v25);
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__fail_uid_reason_map >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    fail_uid_reason_map = __closure->__fail_uid_reason_map;
    val = Player::getUid(player);
    v7 = std::unordered_map<unsigned int,int>::operator[](fail_uid_reason_map, &val);
    v8 = v7;
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v7);
    }
    *v8 = 860;
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    ret = __closure->__ret;
    if ( *(_BYTE *)(((unsigned __int64)__closure->__ret >> 3) + 0x7FFF8000) != 0
      && (char)(((__int64)__closure->__ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure->__ret >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(__closure->__ret);
    }
    *ret = 860;
    v10 = FOREACH_BREAK;
  }
  else
  {
    p_level_id = std::__shared_ptr_access<CoinCollectActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CoinCollectActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__level_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&__closure->__level_id >> 3) + 0x7FFF8000) <= 3 )
    {
      p_level_id = (const CoinCollectActivity *)&__closure->__level_id;
      __asan_report_load4();
    }
    level_id = __closure->__level_id;
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    {
      p_level_id = (const CoinCollectActivity *)__closure;
      level_id = __asan_report_load8();
    }
    v13 = __closure->__ret;
    canStartCoinCollectPlay = CoinCollectActivity::canStartCoinCollectPlay(p_level_id, level_id);
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v13);
    }
    *v13 = canStartCoinCollectPlay;
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v15 = __closure->__ret;
    if ( *(_BYTE *)(((unsigned __int64)__closure->__ret >> 3) + 0x7FFF8000) != 0
      && (char)(((__int64)__closure->__ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure->__ret >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( *v15 )
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/coin_collect_activity.cpp",
        "operator()",
        306);
      v16 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
              &v25,
              (const char (*)[55])"[CoinCollect] player can not start coin collect, uid: ");
      val = Player::getUid(player);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &val);
      common::milog::MiLogStream::~MiLogStream(&v25);
      if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v17 = __closure->__ret;
      if ( *(_BYTE *)(((unsigned __int64)__closure->__ret >> 3) + 0x7FFF8000) != 0
        && (char)(((__int64)__closure->__ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure->__ret >> 3)
                                                                   + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v18 = *v17;
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__fail_uid_reason_map >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v19 = __closure->__fail_uid_reason_map;
      val = Player::getUid(player);
      v20 = std::unordered_map<unsigned int,int>::operator[](v19, &val);
      v21 = v20;
      if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v20);
      }
      *v21 = v18;
      v10 = FOREACH_BREAK;
    }
    else
    {
      v10 = FOREACH_CONTINUE;
    }
  }
  std::shared_ptr<CoinCollectActivity>::~shared_ptr((std::shared_ptr<CoinCollectActivity> *const)(v2 + 32));
  result = v10;
  if ( v26 == (char *)v2 )
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

// Line 291: range 00000000179E6C30-00000000179E6D7C
void __cdecl CoinCollectActivity::checkCoinCollectDraftExec(unsigned int,std::unordered_map<unsigned int,int> &)::{lambda(Player &)#1}::Player(
        CoinCollectActivity::checkCoinCollectDraftExec::<lambda(Player&)> *const this,
        CoinCollectActivity::checkCoinCollectDraftExec::<lambda(Player&)> *a2)
{
  int32_t *ret; // rdx
  std::unordered_map<unsigned int,int> *fail_uid_reason_map; // rdx
  uint32_t level_id; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  ret = a2->__ret;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->__ret = ret;
  if ( *(_BYTE *)(((unsigned __int64)&a2->__fail_uid_reason_map >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  fail_uid_reason_map = a2->__fail_uid_reason_map;
  if ( *(_BYTE *)(((unsigned __int64)&this->__fail_uid_reason_map >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->__fail_uid_reason_map);
  this->__fail_uid_reason_map = fail_uid_reason_map;
  std::shared_ptr<PlayerWorld>::shared_ptr(&this->__world_ptr, &a2->__world_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&a2->__level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->__level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  level_id = a2->__level_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->__level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->__level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->__level_id);
  }
  this->__level_id = level_id;
};

// Line 291: range 00000000179E6E48-00000000179E6F94
void __cdecl CoinCollectActivity::checkCoinCollectDraftExec(unsigned int,std::unordered_map<unsigned int,int> &)::{lambda(Player &)#1}::Player(
        CoinCollectActivity::checkCoinCollectDraftExec::<lambda(Player&)> *const this,
        const CoinCollectActivity::checkCoinCollectDraftExec::<lambda(Player&)> *a2)
{
  int32_t *ret; // rdx
  std::unordered_map<unsigned int,int> *fail_uid_reason_map; // rdx
  uint32_t level_id; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  ret = a2->__ret;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->__ret = ret;
  if ( *(_BYTE *)(((unsigned __int64)&a2->__fail_uid_reason_map >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  fail_uid_reason_map = a2->__fail_uid_reason_map;
  if ( *(_BYTE *)(((unsigned __int64)&this->__fail_uid_reason_map >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->__fail_uid_reason_map);
  this->__fail_uid_reason_map = fail_uid_reason_map;
  std::shared_ptr<PlayerWorld>::shared_ptr(&this->__world_ptr, &a2->__world_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&a2->__level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->__level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  level_id = a2->__level_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->__level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->__level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->__level_id);
  }
  this->__level_id = level_id;
};

// Line 291: range 000000001795D274-000000001795D292
void __cdecl CoinCollectActivity::checkCoinCollectDraftExec(unsigned int,std::unordered_map<unsigned int,int> &)::{lambda(Player &)#1}::~Player(
        CoinCollectActivity::checkCoinCollectDraftExec::<lambda(Player&)> *const this)
{
  std::shared_ptr<PlayerWorld>::~shared_ptr(&this->__world_ptr);
};

// Line 316: range 000000001795DCEE-000000001795DEA3
int32_t __cdecl CoinCollectActivity::canStartCoinCollectPlay(const CoinCollectActivity *const this, uint32_t level_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  int32_t result; // eax
  char v8[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 scene_ptr:323";
  *(_QWORD *)(v2 + 16) = CoinCollectActivity::canStartCoinCollectPlay;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( !CoinCollectActivity::isLevelOpen(this, level_id) )
  {
    v5 = 10446;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 32));
    if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 32), 0LL) )
    {
      v5 = -1;
    }
    else
    {
      v6 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      if ( Scene::getSceneType(v6) == SCENE_WORLD )
      {
        if ( !CoinCollectActivity::isEquipCoinCollectWidget(this) )
          v5 = 10447;
        else
          v5 = 0;
      }
      else
      {
        v5 = 10448;
      }
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 32));
  }
  result = v5;
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

// Line 341: range 000000001795DEA4-000000001795E11C
bool __cdecl CoinCollectActivity::isEquipCoinCollectWidget(const CoinCollectActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  bool v5; // r14
  PlayerWidgetComp *WidgetComp; // r14
  std::__shared_ptr_access<data::ConfigWidgetCoinCollect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  bool result; // al
  std::shared_ptr<Config> v9; // [rsp+10h] [rbp-A0h] BYREF
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-90h] BYREF
  char v11[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 21 widget_config_ptr:343";
  *(_QWORD *)(v1 + 16) = CoinCollectActivity::isEquipCoinCollectWidget;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v9);
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v9);
  JsonConfigMgr::getWidgetNewConfig(&v4->design_config.json_config_mgr);
  WidgetJsonNewConfig::findWidgetConfig<data::ConfigWidgetCoinCollect>((const WidgetJsonNewConfig *const)(v1 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v9);
  if ( std::operator==<data::ConfigWidgetCoinCollect>(
         0LL,
         (const std::shared_ptr<data::ConfigWidgetCoinCollect> *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/coin_collect_activity.cpp",
      "isEquipCoinCollectWidget",
      346);
    common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
      &v10,
      (const char (*)[60])"[CoinCollect] config ConfigWidgetCoinCollect does not exist");
    common::milog::MiLogStream::~MiLogStream(&v10);
    v5 = 0;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    WidgetComp = Player::getWidgetComp(this->player_);
    v7 = std::__shared_ptr_access<data::ConfigWidgetCoinCollect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigWidgetCoinCollect,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&v7->material_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v7->material_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    v5 = PlayerWidgetComp::isOnQuickUse(WidgetComp, v7->material_id);
  }
  std::shared_ptr<data::ConfigWidgetCoinCollect>::~shared_ptr((std::shared_ptr<data::ConfigWidgetCoinCollect> *const)(v1 + 32));
  result = v5;
  if ( v11 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 353: range 000000001795E270-000000001795EFEB
__int64 __fastcall CoinCollectActivity::startCoinCollectTransferGuard(
        CoinCollectActivity *const this,
        uint32_t draft_id,
        uint32_t level_id,
        const std::set<unsigned int> *uid_set,
        char is_pre_in_single_mp_mode)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  unsigned int v8; // r14d
  Scene *v9; // rax
  SceneTransferGuardComp *TransferGuardComp; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  common::milog::MiLogStream *v15; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  common::milog::MiLogStream *v17; // rax
  std::set<unsigned int>::size_type v18; // r14
  common::milog::MiLogStream *v19; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v20; // rdx
  common::milog::MiLogStream *v21; // rax
  uint32_t v22; // eax
  std::vector<unsigned int>::const_reference v23; // rdx
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  std::pair<Vector3,Vector3> *v27; // rax
  Scene *v28; // rax
  SceneTransferGuardComp *v29; // r14
  __int64 result; // rax
  uint32_t idx; // [rsp+2Ch] [rbp-344h]
  std::set<unsigned int>::iterator __for_begin; // [rsp+30h] [rbp-340h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+38h] [rbp-338h] BYREF
  const data::CoinCollectExcelConfig *level_config_ptr; // [rsp+40h] [rbp-330h]
  const data::GalleryExcelConfig *gallery_config_ptr; // [rsp+48h] [rbp-328h]
  const GroupScriptConfig *group_config_ptr; // [rsp+50h] [rbp-320h]
  const std::vector<unsigned int> *config_id_vec; // [rsp+58h] [rbp-318h]
  const std::set<unsigned int> *__for_range; // [rsp+60h] [rbp-310h]
  const PointScriptConfig *point_config_ptr; // [rsp+68h] [rbp-308h]
  std::any v43; // [rsp+70h] [rbp-300h] BYREF
  std::pair<Vector3,Vector3> __p; // [rsp+80h] [rbp-2F0h] BYREF
  common::milog::MiLogStream v45; // [rsp+A0h] [rbp-2D0h] BYREF
  common::milog::MiLogStream v46; // [rsp+C0h] [rbp-2B0h] BYREF
  char v47[656]; // [rsp+E0h] [rbp-290h] BYREF

  v5 = (unsigned __int64)v47;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_4(608LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "10 32 4 14 gallery_id:371 48 4 12 group_id:378 64 4 7 uid:399 80 4 13 config_id:406 96 4 12 leve"
                        "l_id:352 112 16 13 scene_ptr:354 144 16 9 s_ptr:416 176 16 9 w_ptr:416 208 64 11 context:392 304"
                        " 232 9 param:397";
  *(_QWORD *)(v5 + 16) = CoinCollectActivity::startCoinCollectTransferGuard;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556924;
  v7[536862722] = -234556924;
  v7[536862723] = 61956;
  v7[536862724] = 62194;
  v7[536862725] = 62194;
  v7[536862726] = 62194;
  v7[536862728] = -219021312;
  v7[536862729] = 62194;
  v7[536862736] = -218103808;
  v7[536862737] = -202116109;
  v7[536862738] = -202116109;
  *(_DWORD *)(v5 + 96) = level_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v5 + 112));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v5 + 112), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v46,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/coin_collect_activity.cpp",
      "startCoinCollectTransferGuard",
      357);
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
      &v46,
      (const char (*)[27])"[CoinCollect] not in scene");
    common::milog::MiLogStream::~MiLogStream(&v46);
    v8 = -1;
  }
  else
  {
    v9 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 112));
    TransferGuardComp = Scene::getTransferGuardComp(v9);
    if ( SceneTransferGuardComp::isActive(TransferGuardComp) )
    {
      common::milog::MiLogStream::create(
        &v46,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/coin_collect_activity.cpp",
        "startCoinCollectTransferGuard",
        362);
      common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
        &v46,
        (const char (*)[37])"[CoinCollect] transferguard is start");
      common::milog::MiLogStream::~MiLogStream(&v46);
      v8 = -1;
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v43);
      v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v43);
      level_config_ptr = data::ActivityCoinCollectExcelConfigMgrBase::findCoinCollectExcelConfig(
                           &v11->design_config.txt_config_mgr.activity_coin_collect_config_mgr,
                           *(_DWORD *)(v5 + 96));
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v43);
      if ( level_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->gallery_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&level_config_ptr->gallery_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v5 + 32) = level_config_ptr->gallery_id;
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v43);
        v14 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v43);
        gallery_config_ptr = data::GalleryExcelConfigMgrBase::findGalleryExcelConfig(
                               &v14->design_config.txt_config_mgr.gallery_config_mgr,
                               *(_DWORD *)(v5 + 32));
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v43);
        if ( gallery_config_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->transfer_group_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)gallery_config_ptr - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->transfer_group_id >> 3)
                                                                              + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          *(_DWORD *)(v5 + 48) = gallery_config_ptr->transfer_group_id;
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v43);
          v16 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v43);
          group_config_ptr = LuaConfigMgr::findGroupScriptConfig(
                               &v16->design_config.lua_config_mgr,
                               *(_DWORD *)(v5 + 48));
          std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v43);
          if ( group_config_ptr )
          {
            config_id_vec = &gallery_config_ptr->transfer_config_id_list;
            v18 = std::vector<unsigned int>::size(&gallery_config_ptr->transfer_config_id_list);
            if ( v18 >= std::set<unsigned int>::size(uid_set) )
            {
              CoinCollectTransferGuardContext::CoinCollectTransferGuardContext((CoinCollectTransferGuardContext *const)(v5 + 208));
              *(_DWORD *)(v5 + 208) = *(_DWORD *)(v5 + 96);
              std::set<unsigned int>::operator=((std::set<unsigned int> *const)(v5 + 216), uid_set);
              *(_BYTE *)(v5 + 264) = is_pre_in_single_mp_mode;
              TransferGuardParam::TransferGuardParam((TransferGuardParam *const)(v5 + 304));
              idx = 0;
              __for_range = uid_set;
              __for_begin._M_node = std::set<unsigned int>::begin(uid_set)._M_node;
              __for_end._M_node = std::set<unsigned int>::end(uid_set)._M_node;
              while ( std::operator!=(&__for_begin, &__for_end) )
              {
                v20 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
                if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                *(_DWORD *)(v5 + 64) = *v20;
                if ( idx >= std::vector<unsigned int>::size(config_id_vec) )
                {
                  common::milog::MiLogStream::create(
                    &v45,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/activity/coin_collect_activity.cpp",
                    "startCoinCollectTransferGuard",
                    403);
                  v21 = common::milog::MiLogStream::operator<<<char [71],(char *[71])0>(
                          &v45,
                          (const char (*)[71])"[CoinCollect] transfer point config_id vec is not enough, gallery_id: ");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v21,
                    (const unsigned int *)(v5 + 32));
                  common::milog::MiLogStream::~MiLogStream(&v45);
                  v8 = -1;
                  goto LABEL_36;
                }
                v22 = idx++;
                v23 = std::vector<unsigned int>::operator[](config_id_vec, v22);
                if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v23 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                *(_DWORD *)(v5 + 80) = *v23;
                point_config_ptr = GroupScriptConfig::findPointConfig(group_config_ptr, *(_DWORD *)(v5 + 80));
                if ( !point_config_ptr )
                {
                  common::milog::MiLogStream::create(
                    &v46,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/activity/coin_collect_activity.cpp",
                    "startCoinCollectTransferGuard",
                    410);
                  v24 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                          &v46,
                          (const char (*)[49])"[CoinCollect] point config not found, group_id: ");
                  v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v24,
                          (const unsigned int *)(v5 + 48));
                  v26 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                          v25,
                          (const char (*)[14])", config_id: ");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v26,
                    (const unsigned int *)(v5 + 80));
                  common::milog::MiLogStream::~MiLogStream(&v46);
                  v8 = -1;
                  goto LABEL_36;
                }
                std::pair<Vector3,Vector3>::pair<Vector3,Vector3,true>(
                  &__p,
                  &point_config_ptr->pos,
                  &point_config_ptr->rot);
                v27 = std::map<unsigned int,std::pair<Vector3,Vector3>>::operator[](
                        (std::map<unsigned int,std::pair<Vector3,Vector3>> *const)(v5 + 304),
                        (const std::map<unsigned int,std::pair<Vector3,Vector3>>::key_type *)(v5 + 64));
                std::pair<Vector3,Vector3>::operator=(v27, &__p);
                std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
              }
              *(_BYTE *)(v5 + 456) = 0;
              std::enable_shared_from_this<BaseActivity>::shared_from_this((std::enable_shared_from_this<BaseActivity> *const)&v43);
              std::dynamic_pointer_cast<CoinCollectActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)(v5 + 144));
              std::shared_ptr<BaseActivity>::~shared_ptr((std::shared_ptr<BaseActivity> *const)&v43);
              std::weak_ptr<CoinCollectActivity>::weak_ptr<CoinCollectActivity,void>(
                (std::weak_ptr<CoinCollectActivity> *const)(v5 + 176),
                (const std::shared_ptr<CoinCollectActivity> *)(v5 + 144));
              std::weak_ptr<CoinCollectActivity>::weak_ptr(
                (std::weak_ptr<CoinCollectActivity> *const)&v43,
                (const std::weak_ptr<CoinCollectActivity> *)(v5 + 176));
              std::function<void ()(std::set<unsigned int> const&,unsigned int,bool)>::operator=<CoinCollectActivity::startCoinCollectTransferGuard(unsigned int,unsigned int,std::set<unsigned int> const&,bool)::{lambda(std::set<unsigned int> const&,unsigned int,bool)#1}>(
                (std::function<void(const std::set<unsigned int>&,unsigned int,bool)> *const)(v5 + 472),
                (CoinCollectActivity::startCoinCollectTransferGuard::<lambda(const std::set<unsigned int>&, uint32_t, bool)> *)&v43);
              CoinCollectActivity::startCoinCollectTransferGuard(unsigned int,unsigned int,std::set<unsigned int> const&,bool)::{lambda(std::set<unsigned int> const&,unsigned int,bool)#1}::~set((CoinCollectActivity::startCoinCollectTransferGuard::<lambda(const std::set<unsigned int>&, uint32_t, bool)> *const)&v43);
              std::weak_ptr<CoinCollectActivity>::~weak_ptr((std::weak_ptr<CoinCollectActivity> *const)(v5 + 176));
              std::shared_ptr<CoinCollectActivity>::~shared_ptr((std::shared_ptr<CoinCollectActivity> *const)(v5 + 144));
              v28 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 112));
              v29 = Scene::getTransferGuardComp(v28);
              std::any::any<CoinCollectTransferGuardContext &,CoinCollectTransferGuardContext,std::any::_Manager_external<CoinCollectTransferGuardContext>,true,true>(
                &v43,
                (CoinCollectTransferGuardContext *)(v5 + 208));
              LOBYTE(v29) = SceneTransferGuardComp::startTransferGuard(
                              v29,
                              (const TransferGuardParam *)(v5 + 304),
                              &v43) != 0;
              std::any::~any(&v43);
              if ( (_BYTE)v29 )
                v8 = -1;
              else
                v8 = 0;
LABEL_36:
              TransferGuardParam::~TransferGuardParam((TransferGuardParam *const)(v5 + 304));
              CoinCollectTransferGuardContext::~CoinCollectTransferGuardContext((CoinCollectTransferGuardContext *const)(v5 + 208));
            }
            else
            {
              common::milog::MiLogStream::create(
                &v46,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/coin_collect_activity.cpp",
                "startCoinCollectTransferGuard",
                388);
              v19 = common::milog::MiLogStream::operator<<<char [71],(char *[71])0>(
                      &v46,
                      (const char (*)[71])"[CoinCollect] transfer point config_id vec is not enough, gallery_id: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v19,
                (const unsigned int *)(v5 + 32));
              common::milog::MiLogStream::~MiLogStream(&v46);
              v8 = -1;
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v46,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/coin_collect_activity.cpp",
              "startCoinCollectTransferGuard",
              382);
            v17 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                    &v46,
                    (const char (*)[56])"[CoinCollect] group script config not found, group_id: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v5 + 48));
            common::milog::MiLogStream::~MiLogStream(&v46);
            v8 = -1;
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v46,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/coin_collect_activity.cpp",
            "startCoinCollectTransferGuard",
            375);
          v15 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                  &v46,
                  (const char (*)[53])"[CoinCollect] gallery config not found, gallery_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v5 + 32));
          common::milog::MiLogStream::~MiLogStream(&v46);
          v8 = -1;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v46,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/coin_collect_activity.cpp",
          "startCoinCollectTransferGuard",
          368);
        v12 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v46,
                (const char (*)[25])"[CoinCollect] level_id: ");
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v12,
                (const unsigned int *)(v5 + 96));
        common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v13, (const char (*)[12])off_262413A0);
        common::milog::MiLogStream::~MiLogStream(&v46);
        v8 = -1;
      }
    }
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v5 + 112));
  result = v8;
  if ( v47 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8040) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8048) = 0;
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
    *(_QWORD *)((v5 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8048) = -168430091;
  }
  return result;
};

// Line 416: range 000000001795E11E-000000001795E252
void __cdecl CoinCollectActivity::startCoinCollectTransferGuard(unsigned int,unsigned int,std::set<unsigned int> const&,bool)::{lambda(std::set<unsigned int> const&,unsigned int,bool)#1}::operator()(
        const CoinCollectActivity::startCoinCollectTransferGuard::<lambda(const std::set<unsigned int>&, uint32_t, bool)> *const __closure,
        const std::set<unsigned int> *enter_uid_set,
        uint32_t enter_uid,
        bool is_new_arrive)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  std::__shared_ptr_access<CoinCollectActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rdi
  char v10[96]; // [rsp+20h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 9 s_ptr:416";
  *(_QWORD *)(v4 + 16) = CoinCollectActivity::startCoinCollectTransferGuard(unsigned int,unsigned int,std::set<unsigned int> const&,bool)::{lambda(std::set<unsigned int> const&,unsigned int,bool)#1}::operator();
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  std::weak_ptr<CoinCollectActivity>::lock((const std::weak_ptr<CoinCollectActivity> *const)(v4 + 32));
  if ( std::operator!=<CoinCollectActivity>((const std::shared_ptr<CoinCollectActivity> *)(v4 + 32), 0LL) )
  {
    v7 = std::__shared_ptr_access<CoinCollectActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CoinCollectActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    CoinCollectActivity::onTransferGuardPlayerEnter(v7, enter_uid_set, enter_uid, is_new_arrive);
  }
  std::shared_ptr<CoinCollectActivity>::~shared_ptr((std::shared_ptr<CoinCollectActivity> *const)(v4 + 32));
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

// Line 416: range 00000000179E0224-00000000179E0249
void __cdecl CoinCollectActivity::startCoinCollectTransferGuard(unsigned int,unsigned int,std::set<unsigned int> const&,bool)::{lambda(std::set<unsigned int> const&,unsigned int,bool)#1}::set(
        CoinCollectActivity::startCoinCollectTransferGuard::<lambda(const std::set<unsigned int>&, uint32_t, bool)> *const this,
        CoinCollectActivity::startCoinCollectTransferGuard::<lambda(const std::set<unsigned int>&, uint32_t, bool)> *a2)
{
  std::weak_ptr<CoinCollectActivity>::weak_ptr(&this->__w_ptr, &a2->__w_ptr);
};

// Line 416: range 00000000179E981C-00000000179E9841
void __cdecl CoinCollectActivity::startCoinCollectTransferGuard(unsigned int,unsigned int,std::set<unsigned int> const&,bool)::{lambda(std::set<unsigned int> const&,unsigned int,bool)#1}::set(
        CoinCollectActivity::startCoinCollectTransferGuard::<lambda(const std::set<unsigned int>&, uint32_t, bool)> *const this,
        const CoinCollectActivity::startCoinCollectTransferGuard::<lambda(const std::set<unsigned int>&, uint32_t, bool)> *a2)
{
  std::weak_ptr<CoinCollectActivity>::weak_ptr(&this->__w_ptr, &a2->__w_ptr);
};

// Line 416: range 000000001795E254-000000001795E26E
void __cdecl CoinCollectActivity::startCoinCollectTransferGuard(unsigned int,unsigned int,std::set<unsigned int> const&,bool)::{lambda(std::set<unsigned int> const&,unsigned int,bool)#1}::~set(
        CoinCollectActivity::startCoinCollectTransferGuard::<lambda(const std::set<unsigned int>&, uint32_t, bool)> *const this)
{
  std::weak_ptr<CoinCollectActivity>::~weak_ptr(&this->__w_ptr);
};

// Line 427: range 000000001795EFEC-0000000017960E9D
__int64 __fastcall CoinCollectActivity::initCoinCollectPlay(
        CoinCollectActivity *const this,
        uint32_t level_id,
        const std::set<unsigned int> *uid_set,
        bool is_pre_in_single_mp_mode)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  unsigned int M_array_high; // r14d
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  char v10; // al
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  ActivityCoinCollectExcelConfigMgr *p_activity_coin_collect_config_mgr; // rcx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v18; // r14
  Scene *v19; // rax
  std::unordered_map<std::string,unsigned int>::mapped_type *v20; // rax
  _DWORD *v21; // rdx
  std::unordered_map<std::string,unsigned int>::mapped_type *v22; // rax
  uint32_t *v23; // rdx
  Scene *v24; // rax
  unsigned __int64 v25; // rax
  common::milog::MiLogStream *v26; // rax
  Scene *v27; // rax
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rdx
  common::milog::MiLogStream *v30; // rax
  Scene *v31; // rax
  Group *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  const std::string *v35; // rax
  common::milog::MiLogStream *v36; // rax
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  const std::string *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v44; // rax
  unsigned int idle_after_prepare_time; // edx
  Scene *v46; // rax
  Group *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v50; // rax
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,CoinCollectLevelData> >::pointer v53; // rax
  Scene *v54; // rax
  Group *v55; // rax
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // rax
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v58; // rax
  uint32_t v59; // edx
  Scene *v60; // rax
  Group *v61; // rax
  common::milog::MiLogStream *v62; // rax
  common::milog::MiLogStream *v63; // rax
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v64; // rax
  common::milog::MiLogStream *v65; // rax
  common::milog::MiLogStream *v66; // rax
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v67; // rax
  common::milog::MiLogStream *v68; // rax
  common::milog::MiLogStream *v69; // rax
  Scene *v70; // rax
  unsigned __int64 v71; // rax
  bool v72; // r14
  common::milog::MiLogStream *v73; // rax
  PlayerMpComp *MpComp; // rax
  char v75; // al
  common::milog::MiLogStream *v76; // r14
  PlayerWorld *v77; // rax
  __int64 result; // rax
  unsigned int (__fastcall *play_index)(SceneBlockGroupComp *, std::vector<unsigned int> *, __int64, _QWORD); // [rsp+8h] [rbp-218h]
  uint32_t play_indexa; // [rsp+8h] [rbp-218h]
  std::initializer_list<unsigned int> __la; // [rsp+10h] [rbp-210h]
  uint32_t __lb; // [rsp+10h] [rbp-210h]
  uint32_t __lc; // [rsp+10h] [rbp-210h]
  uint32_t __l; // [rsp+10h] [rbp-210h]
  uint32_t __ld; // [rsp+10h] [rbp-210h]
  unsigned int (__fastcall *__le)(SceneBlockGroupComp *, std::vector<unsigned int> *, __int64); // [rsp+10h] [rbp-210h]
  bool v87; // [rsp+20h] [rbp-200h]
  int v88; // [rsp+20h] [rbp-200h]
  uint32_t activity_id; // [rsp+20h] [rbp-200h]
  SceneBlockGroupComp *BlockGroupComp; // [rsp+20h] [rbp-200h]
  bool v91; // [rsp+20h] [rbp-200h]
  SceneMultistagePlayComp *MultistagePlayComp; // [rsp+20h] [rbp-200h]
  common::milog::MiLogStream *v93; // [rsp+20h] [rbp-200h]
  common::milog::MiLogStream *v94; // [rsp+20h] [rbp-200h]
  common::milog::MiLogStream *v95; // [rsp+20h] [rbp-200h]
  common::milog::MiLogStream *v96; // [rsp+20h] [rbp-200h]
  SceneMultistagePlayComp *v97; // [rsp+20h] [rbp-200h]
  bool v98; // [rsp+20h] [rbp-200h]
  common::milog::MiLogStream *v99; // [rsp+20h] [rbp-200h]
  SceneMultistagePlayComp *v100; // [rsp+20h] [rbp-200h]
  bool v101; // [rsp+20h] [rbp-200h]
  common::milog::MiLogStream *v102; // [rsp+20h] [rbp-200h]
  SceneMultistagePlayComp *v103; // [rsp+20h] [rbp-200h]
  bool v104; // [rsp+20h] [rbp-200h]
  common::milog::MiLogStream *v105; // [rsp+20h] [rbp-200h]
  common::milog::MiLogStream *v106; // [rsp+20h] [rbp-200h]
  SceneBlockGroupComp *v107; // [rsp+20h] [rbp-200h]
  std::allocator<char> __a; // [rsp+47h] [rbp-1D9h] BYREF
  std::initializer_list<unsigned int> v111; // [rsp+48h] [rbp-1D8h] BYREF
  unsigned __int64 val; // [rsp+58h] [rbp-1C8h] BYREF
  const data::CoinCollectExcelConfig *level_config_ptr; // [rsp+60h] [rbp-1C0h]
  const data::CoinCollectOverallExcelConfig *activity_overall_config_ptr; // [rsp+68h] [rbp-1B8h]
  std::vector<unsigned int> v115; // [rsp+70h] [rbp-1B0h] BYREF
  common::milog::MiLogStream v116; // [rsp+90h] [rbp-190h] BYREF
  char v117[368]; // [rsp+B0h] [rbp-170h] BYREF

  v4 = (unsigned __int64)v117;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(320LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "8 32 4 18 level_group_id:474 48 4 12 level_id:426 64 8 19 level_data_iter:517 96 16 13 scene_ptr"
                        ":428 128 16 20 player_world_ptr:434 160 16 13 group_ptr:483 192 16 15 param_table:501 224 56 13 param_map:470";
  *(_QWORD *)(v4 + 16) = CoinCollectActivity::initCoinCollectPlay;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -218959360;
  v6[536862723] = -219021312;
  v6[536862724] = -219021312;
  v6[536862725] = -219021312;
  v6[536862726] = -219021312;
  v6[536862728] = -218103808;
  v6[536862729] = -202116109;
  *(_DWORD *)(v4 + 48) = level_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v4 + 96));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v4 + 96), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v116,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/coin_collect_activity.cpp",
      "initCoinCollectPlay",
      431);
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
      &v116,
      (const char (*)[35])"[CoinCollect] scene ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v116);
    M_array_high = -1;
    goto LABEL_113;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurWorld<PlayerWorld>((const PlayerSceneComp *const)(v4 + 128));
  if ( std::operator==<PlayerWorld>((const std::shared_ptr<PlayerWorld> *)(v4 + 128), 0LL) )
    goto LABEL_16;
  v8 = (unsigned __int64)std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
  if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
    v8 = __asan_report_load8();
  v9 = *(_QWORD *)v8 + 16LL;
  if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
    v8 = __asan_report_load8();
  if ( (*(unsigned int (__fastcall **)(unsigned __int64))v9)(v8) == 1 )
    v10 = 0;
  else
LABEL_16:
    v10 = 1;
  if ( !v10 )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v4 + 192));
    v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
    level_config_ptr = data::ActivityCoinCollectExcelConfigMgrBase::findCoinCollectExcelConfig(
                         &v11->design_config.txt_config_mgr.activity_coin_collect_config_mgr,
                         *(_DWORD *)(v4 + 48));
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 192));
    if ( !level_config_ptr )
    {
      common::milog::MiLogStream::create(
        &v116,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/coin_collect_activity.cpp",
        "initCoinCollectPlay",
        443);
      v12 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
              &v116,
              (const char (*)[25])"[CoinCollect] level id: ");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v4 + 48));
      common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v13, (const char (*)[12])off_262413A0);
      common::milog::MiLogStream::~MiLogStream(&v116);
      M_array_high = -1;
      goto LABEL_112;
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v4 + 192));
    p_activity_coin_collect_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192))->design_config.txt_config_mgr.activity_coin_collect_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    activity_overall_config_ptr = data::ActivityCoinCollectExcelConfigMgrBase::findCoinCollectOverallExcelConfig(
                                    p_activity_coin_collect_config_mgr,
                                    this->activity_id_);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 192));
    if ( !activity_overall_config_ptr )
    {
      common::milog::MiLogStream::create(
        &v116,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/coin_collect_activity.cpp",
        "initCoinCollectPlay",
        449);
      v15 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
              &v116,
              (const char (*)[28])"[CoinCollect] activity_id: ");
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &this->activity_id_);
      common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
        v16,
        (const char (*)[28])" does not have overall data");
      common::milog::MiLogStream::~MiLogStream(&v116);
      M_array_high = -1;
      goto LABEL_112;
    }
    if ( std::set<unsigned int>::size(uid_set) != 1 && std::set<unsigned int>::size(uid_set) != 2 )
    {
      common::milog::MiLogStream::create(
        &v116,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/coin_collect_activity.cpp",
        "initCoinCollectPlay",
        455);
      v18 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v116,
              (const char (*)[33])"[CoinCollect] wrong player num: ");
      val = std::set<unsigned int>::size(uid_set);
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v18, &val);
      common::milog::MiLogStream::~MiLogStream(&v116);
      M_array_high = -1;
      goto LABEL_112;
    }
    v19 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
    Scene::getMultistagePlayComp(v19);
    SceneMultistagePlayComp::findPlay<CoinCollectMultistagePlay>((const SceneMultistagePlayComp *const)(v4 + 192));
    v87 = std::operator!=<CoinCollectMultistagePlay>(
            (const std::shared_ptr<CoinCollectMultistagePlay> *)(v4 + 192),
            0LL);
    std::shared_ptr<CoinCollectMultistagePlay>::~shared_ptr((std::shared_ptr<CoinCollectMultistagePlay> *const)(v4 + 192));
    if ( v87 )
    {
      common::milog::MiLogStream::create(
        &v116,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/coin_collect_activity.cpp",
        "initCoinCollectPlay",
        461);
      common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
        &v116,
        (const char (*)[54])"[CoinCollect] coin collect multistage play is ongoing");
      common::milog::MiLogStream::~MiLogStream(&v116);
      M_array_high = -1;
      goto LABEL_112;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    ++this->play_index_;
    if ( *(char *)(((unsigned __int64)&this->is_pre_in_single_mp_mode_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->is_pre_in_single_mp_mode_);
    this->is_pre_in_single_mp_mode_ = is_pre_in_single_mp_mode;
    std::unordered_map<std::string,unsigned int>::unordered_map((std::unordered_map<std::string,unsigned int> *const)(v4 + 224));
    v88 = *(_DWORD *)(v4 + 48);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v116, "level_id", &__a);
    v20 = std::unordered_map<std::string,unsigned int>::operator[](
            (std::unordered_map<std::string,unsigned int> *const)(v4 + 224),
            (std::unordered_map<std::string,unsigned int>::key_type *)&v116);
    v21 = v20;
    if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v20);
    }
    *v21 = v88;
    std::string::~string(&v116);
    std::allocator<char>::~allocator(&__a);
    if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    activity_id = this->activity_id_;
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v116, "activity_id", &__a);
    v22 = std::unordered_map<std::string,unsigned int>::operator[](
            (std::unordered_map<std::string,unsigned int> *const)(v4 + 224),
            (std::unordered_map<std::string,unsigned int>::key_type *)&v116);
    v23 = v22;
    if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v22 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v22);
    }
    *v23 = activity_id;
    std::string::~string(&v116);
    std::allocator<char>::~allocator(&__a);
    if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->group_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&level_config_ptr->group_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v4 + 32) = level_config_ptr->group_id;
    v24 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
    BlockGroupComp = Scene::getBlockGroupComp(v24);
    if ( *(_BYTE *)(((unsigned __int64)BlockGroupComp >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v25 = (unsigned __int64)(BlockGroupComp->_vptr_SceneCompBase + 12);
    if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
      v25 = __asan_report_load8();
    play_index = *(unsigned int (__fastcall **)(SceneBlockGroupComp *, std::vector<unsigned int> *, __int64, _QWORD))v25;
    LODWORD(v111._M_array) = *(_DWORD *)(v4 + 32);
    __la._M_array = (std::initializer_list<unsigned int>::iterator)&v111;
    __la._M_len = 1LL;
    std::allocator<unsigned int>::allocator((std::allocator<unsigned int> *const)&__a);
    std::vector<unsigned int>::vector(&v115, __la, (const std::vector<unsigned int>::allocator_type *)&__a);
    v91 = play_index(BlockGroupComp, &v115, 1LL, 0LL) != 0;
    std::vector<unsigned int>::~vector(&v115);
    std::allocator<unsigned int>::~allocator((std::allocator<unsigned int> *const)&__a);
    if ( v91 )
    {
      common::milog::MiLogStream::create(
        &v116,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/coin_collect_activity.cpp",
        "initCoinCollectPlay",
        477);
      v26 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
              &v116,
              (const char (*)[47])"[CoinCollect] registerGroups failed, group_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, (const unsigned int *)(v4 + 32));
      common::milog::MiLogStream::~MiLogStream(&v116);
      M_array_high = -1;
LABEL_111:
      std::unordered_map<std::string,unsigned int>::~unordered_map((std::unordered_map<std::string,unsigned int> *const)(v4 + 224));
      goto LABEL_112;
    }
    HIDWORD(v111._M_array) = 0;
    v27 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
    v28 = (unsigned __int64)Scene::getBlockGroupComp(v27);
    if ( *(_BYTE *)((v28 >> 3) + 0x7FFF8000) )
      v28 = __asan_report_load8();
    v29 = *(_QWORD *)v28 + 80LL;
    if ( *(_BYTE *)((v29 >> 3) + 0x7FFF8000) )
      v28 = __asan_report_load8();
    (*(void (__fastcall **)(unsigned __int64, unsigned __int64, _QWORD, _QWORD, _QWORD, _QWORD))v29)(
      v4 + 160,
      v28,
      *(unsigned int *)(v4 + 32),
      0LL,
      0LL,
      0LL);
    if ( std::operator==<Group>((const std::shared_ptr<Group> *)(v4 + 160), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v116,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/coin_collect_activity.cpp",
        "initCoinCollectPlay",
        486);
      v30 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
              &v116,
              (const char (*)[42])"[CoinCollect] findGroup failed, group_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, (const unsigned int *)(v4 + 32));
      common::milog::MiLogStream::~MiLogStream(&v116);
      HIDWORD(v111._M_array) = -1;
      goto LABEL_92;
    }
    v31 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
    MultistagePlayComp = Scene::getMultistagePlayComp(v31);
    if ( *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    __lb = this->play_index_;
    v32 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
    if ( SceneMultistagePlayComp::initPlay(
           MultistagePlayComp,
           v32,
           __lb,
           MULTISTAGE_PLAY_TYPE_COIN_COLLECT,
           (const std::unordered_map<std::string,unsigned int> *)(v4 + 224),
           uid_set) )
    {
      common::milog::MiLogStream::create(
        &v116,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/coin_collect_activity.cpp",
        "initCoinCollectPlay",
        494);
      v33 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
              &v116,
              (const char (*)[25])"[CoinCollect] init play ");
      v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, &this->play_index_);
      v93 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v34, (const char (*)[10])off_2624F6E0);
      v35 = proto::MultistagePlayType_Name[abi:cxx11](MULTISTAGE_PLAY_TYPE_COIN_COLLECT);
      v36 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v93, v35);
      v94 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v36, (const char (*)[10])" failed. ");
      v37 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
      operator<<(v94, v37);
      common::milog::MiLogStream::~MiLogStream(&v116);
      HIDWORD(v111._M_array) = -1;
      goto LABEL_92;
    }
    common::milog::MiLogStream::create(
      &v116,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/coin_collect_activity.cpp",
      "initCoinCollectPlay",
      498);
    v38 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
            &v116,
            (const char (*)[25])"[CoinCollect] init play ");
    v39 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v38, &this->play_index_);
    v95 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v39, (const char (*)[10])off_2624F6E0);
    v40 = proto::MultistagePlayType_Name[abi:cxx11](MULTISTAGE_PLAY_TYPE_COIN_COLLECT);
    v41 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v95, v40);
    v42 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v41, (const char (*)[12])", uid_set: ");
    v43 = common::milog::MiLogStream::operator<<<unsigned int>(v42, uid_set);
    v96 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v43, (const char (*)[8])" done. ");
    v44 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
    operator<<(v96, v44);
    common::milog::MiLogStream::~MiLogStream(&v116);
    luabind::adl::object::object((luabind::adl::object *const)(v4 + 192));
    if ( std::set<unsigned int>::size(uid_set) == 2 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&activity_overall_config_ptr->idle_after_prepare_time >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)activity_overall_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&activity_overall_config_ptr->idle_after_prepare_time >> 3)
                                                                                   + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      idle_after_prepare_time = activity_overall_config_ptr->idle_after_prepare_time;
      if ( *(_BYTE *)(((unsigned __int64)&activity_overall_config_ptr->prepare_time >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&activity_overall_config_ptr->prepare_time >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      HIDWORD(v111._M_len) = SAFE_ADD<unsigned int,unsigned int>(
                               activity_overall_config_ptr->prepare_time,
                               idle_after_prepare_time);
      v46 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
      v97 = Scene::getMultistagePlayComp(v46);
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)&v116, byte_261E1600, &__a);
      if ( *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      __lc = this->play_index_;
      v47 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
      v98 = SceneMultistagePlayComp::startStage(
              v97,
              v47,
              __lc,
              HIDWORD(v111._M_len),
              MULTISTAGE_STAGE_COIN_COLLECT_PREPARE,
              (const std::string *)&v116,
              (const luabind::adl::object *)(v4 + 192)) != 0;
      std::string::~string(&v116);
      std::allocator<char>::~allocator(&__a);
      if ( v98 )
      {
        common::milog::MiLogStream::create(
          &v116,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/coin_collect_activity.cpp",
          "initCoinCollectPlay",
          508);
        v48 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                &v116,
                (const char (*)[45])"[CoinCollect] startStage failed @play_index ");
        v49 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v48, &this->play_index_);
        v99 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v49, (const char (*)[8])" group:");
        v50 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
        operator<<(v99, v50);
        common::milog::MiLogStream::~MiLogStream(&v116);
        HIDWORD(v111._M_array) = -1;
LABEL_91:
        luabind::adl::object::~object((luabind::adl::object *const)(v4 + 192));
LABEL_92:
        std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v4 + 160));
        if ( HIDWORD(v111._M_array) )
        {
          v70 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
          v107 = Scene::getBlockGroupComp(v70);
          if ( *(_BYTE *)(((unsigned __int64)v107 >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v71 = (unsigned __int64)(v107->_vptr_SceneCompBase + 13);
          if ( *(_BYTE *)((v71 >> 3) + 0x7FFF8000) )
            v71 = __asan_report_load8();
          __le = *(unsigned int (__fastcall **)(SceneBlockGroupComp *, std::vector<unsigned int> *, __int64))v71;
          LODWORD(v111._M_array) = *(_DWORD *)(v4 + 32);
          std::allocator<unsigned int>::allocator((std::allocator<unsigned int> *const)&__a);
          std::vector<unsigned int>::vector(
            &v115,
            (std::initializer_list<unsigned int>)__PAIR128__(1LL, &v111),
            (const std::vector<unsigned int>::allocator_type *)&__a);
          v72 = __le(v107, &v115, 1LL) != 0;
          std::vector<unsigned int>::~vector(&v115);
          std::allocator<unsigned int>::~allocator((std::allocator<unsigned int> *const)&__a);
          if ( v72 )
          {
            common::milog::MiLogStream::create(
              &v116,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/coin_collect_activity.cpp",
              "initCoinCollectPlay",
              554);
            v73 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                    &v116,
                    (const char (*)[49])"[CoinCollect] unregisterGroups failed, group_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v73, (const unsigned int *)(v4 + 32));
            common::milog::MiLogStream::~MiLogStream(&v116);
          }
          if ( is_pre_in_single_mp_mode )
            goto LABEL_104;
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          MpComp = Player::getMpComp(this->player_);
          if ( PlayerMpComp::isInSingleMpMode(MpComp) )
            v75 = 1;
          else
LABEL_104:
            v75 = 0;
          if ( v75 )
          {
            common::milog::MiLogStream::create(
              &v116,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/activity/coin_collect_activity.cpp",
              "initCoinCollectPlay",
              559);
            v76 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                    &v116,
                    (const char (*)[46])"[CoinCollect] set world in not mp mode, uid: ");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            LODWORD(v111._M_array) = Player::getUid(this->player_);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v76, (const unsigned int *)&v111);
            common::milog::MiLogStream::~MiLogStream(&v116);
            v77 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
            PlayerWorld::setIsInMpMode(v77, 0);
          }
          M_array_high = HIDWORD(v111._M_array);
        }
        else
        {
          M_array_high = 0;
        }
        goto LABEL_111;
      }
    }
    else
    {
      *(std::map<unsigned int,CoinCollectLevelData>::iterator *)(v4 + 64) = std::map<unsigned int,CoinCollectLevelData>::find(
                                                                              &this->level_data_map_,
                                                                              (const std::map<unsigned int,CoinCollectLevelData>::key_type *)(v4 + 48));
      val = (unsigned __int64)std::map<unsigned int,CoinCollectLevelData>::end(&this->level_data_map_)._M_node;
      if ( std::operator==(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,CoinCollectLevelData> >::_Self *)(v4 + 64),
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,CoinCollectLevelData> >::_Self *)&val) )
      {
        common::milog::MiLogStream::create(
          &v116,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/coin_collect_activity.cpp",
          "initCoinCollectPlay",
          520);
        v51 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v116,
                (const char (*)[25])"[CoinCollect] level_id: ");
        v52 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v51,
                (const unsigned int *)(v4 + 48));
        common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v52, (const char (*)[26])off_2624F840);
        common::milog::MiLogStream::~MiLogStream(&v116);
        HIDWORD(v111._M_array) = -1;
        goto LABEL_91;
      }
      v53 = std::_Rb_tree_iterator<std::pair<unsigned int const,CoinCollectLevelData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,CoinCollectLevelData> > *const)(v4 + 64));
      if ( *(char *)(((unsigned __int64)&v53->second.is_have_watched_cutscene >> 3) + 0x7FFF8000) < 0 )
        v53 = (std::_Rb_tree_iterator<std::pair<unsigned int const,CoinCollectLevelData> >::pointer)__asan_report_load1(&v53->second.is_have_watched_cutscene);
      if ( !v53->second.is_have_watched_cutscene )
      {
        v54 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
        v100 = Scene::getMultistagePlayComp(v54);
        std::allocator<char>::allocator(&__a);
        std::string::basic_string<std::allocator<char>>((std::string *const)&v116, byte_261E1600, &__a);
        if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->cutscene_time >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&level_config_ptr->cutscene_time >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        __l = level_config_ptr->cutscene_time;
        if ( *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        play_indexa = this->play_index_;
        v55 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
        v101 = SceneMultistagePlayComp::startStage(
                 v100,
                 v55,
                 play_indexa,
                 __l,
                 MULTISTAGE_STAGE_COIN_COLLECT_CUTSCENE,
                 (const std::string *)&v116,
                 (const luabind::adl::object *)(v4 + 192)) != 0;
        std::string::~string(&v116);
        std::allocator<char>::~allocator(&__a);
        if ( v101 )
        {
          common::milog::MiLogStream::create(
            &v116,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/coin_collect_activity.cpp",
            "initCoinCollectPlay",
            529);
          v56 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                  &v116,
                  (const char (*)[45])"[CoinCollect] startStage failed @play_index ");
          v57 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v56, &this->play_index_);
          v102 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v57, (const char (*)[8])" group:");
          v58 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
          operator<<(v102, v58);
          common::milog::MiLogStream::~MiLogStream(&v116);
          HIDWORD(v111._M_array) = -1;
          goto LABEL_91;
        }
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        v59 = this->activity_id_;
        if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->gallery_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&level_config_ptr->gallery_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        LODWORD(v111._M_len) = CoinCollectActivity::getGalleryPlayGuaranteedTime(level_config_ptr->gallery_id, v59);
        v60 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
        v103 = Scene::getMultistagePlayComp(v60);
        std::allocator<char>::allocator(&__a);
        std::string::basic_string<std::allocator<char>>((std::string *const)&v116, byte_261E1600, &__a);
        if ( *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        __ld = this->play_index_;
        v61 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
        v104 = SceneMultistagePlayComp::startStage(
                 v103,
                 v61,
                 __ld,
                 v111._M_len,
                 MULTISTAGE_STAGE_COIN_COLLECT_GALLERY,
                 (const std::string *)&v116,
                 (const luabind::adl::object *)(v4 + 192)) != 0;
        std::string::~string(&v116);
        std::allocator<char>::~allocator(&__a);
        if ( v104 )
        {
          common::milog::MiLogStream::create(
            &v116,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/coin_collect_activity.cpp",
            "initCoinCollectPlay",
            540);
          v62 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                  &v116,
                  (const char (*)[45])"[CoinCollect] startStage failed @play_index ");
          v63 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v62, &this->play_index_);
          v105 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v63, (const char (*)[8])" group:");
          v64 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
          operator<<(v105, v64);
          common::milog::MiLogStream::~MiLogStream(&v116);
          HIDWORD(v111._M_array) = -1;
          goto LABEL_91;
        }
      }
    }
    common::milog::MiLogStream::create(
      &v116,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/coin_collect_activity.cpp",
      "initCoinCollectPlay",
      546);
    v65 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
            &v116,
            (const char (*)[43])"[CoinCollect] startStage done @play_index ");
    v66 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v65, &this->play_index_);
    v106 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v66, (const char (*)[8])" group:");
    v67 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
    v68 = operator<<(v106, v67);
    v69 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v68, (const char (*)[12])", level_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v69, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream(&v116);
    goto LABEL_91;
  }
  common::milog::MiLogStream::create(
    &v116,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/activity/coin_collect_activity.cpp",
    "initCoinCollectPlay",
    437);
  common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
    &v116,
    (const char (*)[34])"[CoinCollect] not in player world");
  common::milog::MiLogStream::~MiLogStream(&v116);
  M_array_high = -1;
LABEL_112:
  std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v4 + 128));
LABEL_113:
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v4 + 96));
  result = M_array_high;
  if ( v117 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 568: range 0000000017960E9E-0000000017961768
int32_t __cdecl CoinCollectActivity::chooseCoinCollectSkill(
        CoinCollectActivity *const this,
        const proto::CoinCollectChooseSkillReq *req,
        proto::CoinCollectChooseSkillRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  CoinCollectActivity *v6; // rdx
  unsigned __int64 v7; // rax
  char v8; // al
  int32_t v9; // r14d
  Scene *v10; // rax
  SceneGalleryComp *GalleryComp; // r14
  uint32_t Uid; // eax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,CoinCollectLevelData> >::pointer v24; // rax
  Scene *v25; // rax
  uint32_t v26; // r15d
  uint32_t v27; // r14d
  uint32_t v28; // eax
  int32_t result; // eax
  std::__shared_ptr_access<CoinCollectMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // [rsp+10h] [rbp-130h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,CoinCollectLevelData> >::_Self __y; // [rsp+38h] [rbp-108h] BYREF
  const data::CoinCollectExcelConfig *level_config_ptr; // [rsp+40h] [rbp-100h]
  CoinCollectLevelData *cur_level_data; // [rsp+48h] [rbp-F8h]
  common::milog::MiLogStream v35; // [rsp+50h] [rbp-F0h] BYREF
  char v36[208]; // [rsp+70h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 4 12 level_id:587 48 4 19 choose_skill_no:588 64 8 19 level_data_iter:609 96 16 17 cur_scen"
                        "e_ptr:575 128 16 23 multistage_play_ptr:623";
  *(_QWORD *)(v3 + 16) = CoinCollectActivity::chooseCoinCollectSkill;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -219021312;
  v5[536862724] = -202178560;
  if ( !BaseActivity::isOpening((const BaseActivity *const)this, 0) )
    goto LABEL_10;
  v6 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v7 = (unsigned __int64)(this->_vptr_DescribalBase + 17);
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load8();
  if ( (*(unsigned __int8 (__fastcall **)(CoinCollectActivity *))v7)(v6) )
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
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v3 + 96));
    if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 96), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v35,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/coin_collect_activity.cpp",
        "chooseCoinCollectSkill",
        578);
      common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
        &v35,
        (const char (*)[23])"player is not in scene");
      common::milog::MiLogStream::~MiLogStream(&v35);
      v9 = -1;
    }
    else
    {
      v10 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      GalleryComp = Scene::getGalleryComp(v10);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Uid = Player::getUid(this->player_);
      if ( SceneGalleryComp::isPlayerInStartedGallery<CoinCollectGallery>(GalleryComp, Uid) )
      {
        common::milog::MiLogStream::create(
          &v35,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/coin_collect_activity.cpp",
          "chooseCoinCollectSkill",
          583);
        common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
          &v35,
          (const char (*)[47])"player should not choose skill when in gallery");
        common::milog::MiLogStream::~MiLogStream(&v35);
        v9 = -1;
      }
      else
      {
        *(_DWORD *)(v3 + 32) = proto::CoinCollectChooseSkillReq::level_id(req);
        *(_DWORD *)(v3 + 48) = proto::CoinCollectChooseSkillReq::choose_skill_no(req);
        proto::CoinCollectChooseSkillRsp::set_level_id(rsp_0, *(_DWORD *)(v3 + 32));
        proto::CoinCollectChooseSkillRsp::set_choose_skill_no(rsp_0, *(_DWORD *)(v3 + 48));
        if ( !CoinCollectActivity::isLevelOpen(this, *(_DWORD *)(v3 + 32)) )
        {
          common::milog::MiLogStream::create(
            &v35,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/coin_collect_activity.cpp",
            "chooseCoinCollectSkill",
            594);
          v13 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(&v35, (const char (*)[7])"level ");
          v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v13,
                  (const unsigned int *)(v3 + 32));
          common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v14, (const char (*)[13])off_2624FB60);
          common::milog::MiLogStream::~MiLogStream(&v35);
          v9 = -1;
        }
        else
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)(v3 + 128));
          v15 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
          level_config_ptr = data::ActivityCoinCollectExcelConfigMgrBase::findCoinCollectExcelConfig(
                               &v15->design_config.txt_config_mgr.activity_coin_collect_config_mgr,
                               *(_DWORD *)(v3 + 32));
          std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 128));
          if ( level_config_ptr )
          {
            if ( !common::tools::MiscUtils::isContains<unsigned int>(
                    &level_config_ptr->skill_no_list,
                    (const unsigned int *)(v3 + 48)) )
            {
              common::milog::MiLogStream::create(
                &v35,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/coin_collect_activity.cpp",
                "chooseCoinCollectSkill",
                605);
              v18 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                      &v35,
                      (const char (*)[11])"level_id: ");
              v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v18,
                      (const unsigned int *)(v3 + 32));
              v20 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                      v19,
                      (const char (*)[13])", skill no: ");
              v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v20,
                      (const unsigned int *)(v3 + 48));
              common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v21, (const char (*)[12])off_262413A0);
              common::milog::MiLogStream::~MiLogStream(&v35);
              v9 = -1;
            }
            else
            {
              *(std::map<unsigned int,CoinCollectLevelData>::iterator *)(v3 + 64) = std::map<unsigned int,CoinCollectLevelData>::find(
                                                                                      &this->level_data_map_,
                                                                                      (const std::map<unsigned int,CoinCollectLevelData>::key_type *)(v3 + 32));
              __y._M_node = std::map<unsigned int,CoinCollectLevelData>::end(&this->level_data_map_)._M_node;
              if ( std::operator==(
                     (const std::_Rb_tree_iterator<std::pair<unsigned int const,CoinCollectLevelData> >::_Self *)(v3 + 64),
                     &__y) )
              {
                common::milog::MiLogStream::create(
                  &v35,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/activity/coin_collect_activity.cpp",
                  "chooseCoinCollectSkill",
                  612);
                v22 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                        &v35,
                        (const char (*)[11])"level_id: ");
                v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v22,
                        (const unsigned int *)(v3 + 32));
                common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                  v23,
                  (const char (*)[24])" not in level_data_map_");
                common::milog::MiLogStream::~MiLogStream(&v35);
                v9 = -1;
              }
              else
              {
                v24 = std::_Rb_tree_iterator<std::pair<unsigned int const,CoinCollectLevelData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,CoinCollectLevelData> > *const)(v3 + 64));
                cur_level_data = &v24->second;
                if ( *(_BYTE *)(((unsigned __int64)&v24->second.last_choose_skill_no >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&v24->second.last_choose_skill_no >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4();
                }
                if ( cur_level_data->last_choose_skill_no != *(_DWORD *)(v3 + 48) )
                {
                  cur_level_data->last_choose_skill_no = *(_DWORD *)(v3 + 48);
                  BaseActivity::notifyClientData((BaseActivity *const)this, 0);
                }
                v25 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
                Scene::getMultistagePlayComp(v25);
                SceneMultistagePlayComp::findPlay<CoinCollectMultistagePlay>((const SceneMultistagePlayComp *const)(v3 + 128));
                if ( std::operator!=<CoinCollectMultistagePlay>(
                       (const std::shared_ptr<CoinCollectMultistagePlay> *)(v3 + 128),
                       0LL) )
                {
                  v30 = std::__shared_ptr_access<CoinCollectMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CoinCollectMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
                  v26 = *(_DWORD *)(v3 + 48);
                  v27 = *(_DWORD *)(v3 + 32);
                  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8();
                  v28 = Player::getUid(this->player_);
                  CoinCollectMultistagePlay::onPlayerChooseSkill(v30, v28, v27, v26);
                }
                v9 = 0;
                std::shared_ptr<CoinCollectMultistagePlay>::~shared_ptr((std::shared_ptr<CoinCollectMultistagePlay> *const)(v3 + 128));
              }
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v35,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/coin_collect_activity.cpp",
              "chooseCoinCollectSkill",
              600);
            v16 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v35, (const char (*)[10])"level id ");
            v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v16,
                    (const unsigned int *)(v3 + 32));
            common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v17, (const char (*)[39])off_2624FBE0);
            common::milog::MiLogStream::~MiLogStream(&v35);
            v9 = 5;
          }
        }
      }
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 96));
  }
  result = v9;
  if ( v36 == (char *)v3 )
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

// Line 632: range 000000001796176A-0000000017962125
int32_t __cdecl CoinCollectActivity::restartCoinCollectPlaySingleMode(
        CoinCollectActivity *const this,
        const proto::RestartCoinCollectPlaySingleModeReq *req,
        proto::RestartCoinCollectPlaySingleModeRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  CoinCollectActivity *v6; // rdx
  unsigned __int64 v7; // rax
  char v8; // al
  int32_t v9; // r14d
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  char v12; // al
  uint32_t Uid; // r14d
  std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  uint32_t v18; // r15d
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  uint32_t SceneId; // eax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  PlayerSceneComp *SceneComp; // r14
  std::__shared_ptr_access<data::ConfigScenePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  std::__shared_ptr_access<data::ConfigScenePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  Scene *v31; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-164h] BYREF
  const data::CoinCollectExcelConfig *level_config_ptr; // [rsp+30h] [rbp-160h]
  Vector3 pos; // [rsp+38h] [rbp-158h] BYREF
  Vector3 rot; // [rsp+44h] [rbp-14Ch] BYREF
  std::shared_ptr<Config> v38; // [rsp+50h] [rbp-140h] BYREF
  common::milog::MiLogStream v39; // [rsp+60h] [rbp-130h] BYREF
  TransferReason p_reason; // [rsp+80h] [rbp-110h] BYREF
  char v41[208]; // [rsp+C0h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v41;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 12 level_id:638 64 16 13 scene_ptr:641 96 16 20 player_world_ptr:647 128 16 19 scene_point_ptr:665";
  *(_QWORD *)(v3 + 16) = CoinCollectActivity::restartCoinCollectPlaySingleMode;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -202178560;
  if ( !BaseActivity::isOpening((const BaseActivity *const)this, 0) )
    goto LABEL_10;
  v6 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v7 = (unsigned __int64)(this->_vptr_DescribalBase + 17);
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load8();
  if ( (*(unsigned __int8 (__fastcall **)(CoinCollectActivity *))v7)(v6) )
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
    *(_DWORD *)(v3 + 48) = proto::RestartCoinCollectPlaySingleModeReq::level_id(req);
    proto::RestartCoinCollectPlaySingleModeRsp::set_level_id(rsp_0, *(_DWORD *)(v3 + 48));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v3 + 64));
    if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v39,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/coin_collect_activity.cpp",
        "restartCoinCollectPlaySingleMode",
        644);
      common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
        &v39,
        (const char (*)[32])"[CoinCollect] scene_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v39);
      v9 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::getSceneComp(this->player_);
      PlayerSceneComp::getCurWorld((const PlayerSceneComp *const)(v3 + 96));
      if ( std::operator==<World>((const std::shared_ptr<World> *)(v3 + 96), 0LL) )
        goto LABEL_26;
      v10 = (unsigned __int64)std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
        v10 = __asan_report_load8();
      v11 = *(_QWORD *)v10 + 16LL;
      if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
        v10 = __asan_report_load8();
      if ( (*(unsigned int (__fastcall **)(unsigned __int64))v11)(v10) == 1 )
        v12 = 0;
      else
LABEL_26:
        v12 = 1;
      if ( v12 )
      {
        common::milog::MiLogStream::create(
          &v39,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/coin_collect_activity.cpp",
          "restartCoinCollectPlaySingleMode",
          650);
        common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
          &v39,
          (const char (*)[34])"[CoinCollect] not in player world");
        common::milog::MiLogStream::~MiLogStream(&v39);
        v9 = -1;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Uid = Player::getUid(this->player_);
        v14 = std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        if ( Uid == World::getOwnerUid(v14) )
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v38);
          v15 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v38);
          level_config_ptr = data::ActivityCoinCollectExcelConfigMgrBase::findCoinCollectExcelConfig(
                               &v15->design_config.txt_config_mgr.activity_coin_collect_config_mgr,
                               *(_DWORD *)(v3 + 48));
          std::shared_ptr<Config>::~shared_ptr(&v38);
          if ( level_config_ptr )
          {
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v38);
            v18 = (unsigned int)std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v38)
                + 93080;
            if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->gallery_trans_point_id >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)level_config_ptr + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_config_ptr->gallery_trans_point_id >> 3)
                                                                              + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            v19 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
            SceneId = Scene::getSceneId(v19);
            JsonConfigMgr::findScenePoint((const JsonConfigMgr *const)(v3 + 128), v18, SceneId);
            std::shared_ptr<Config>::~shared_ptr(&v38);
            if ( std::operator==<data::ConfigScenePoint>(
                   (const std::shared_ptr<data::ConfigScenePoint> *)(v3 + 128),
                   0LL) )
            {
              common::milog::MiLogStream::create(
                &v39,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/coin_collect_activity.cpp",
                "restartCoinCollectPlaySingleMode",
                668);
              v21 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                      &v39,
                      (const char (*)[25])"[CoinCollect] level_id: ");
              v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v21,
                      (const unsigned int *)(v3 + 48));
              v23 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                      v22,
                      (const char (*)[13])", scene_id: ");
              v24 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
              val = Scene::getSceneId(v24);
              v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &val);
              v26 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                      v25,
                      (const char (*)[13])", point_id: ");
              v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v26,
                      &level_config_ptr->gallery_trans_point_id);
              common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v27, (const char (*)[12])off_262413A0);
              common::milog::MiLogStream::~MiLogStream(&v39);
              v9 = -1;
            }
            else
            {
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              SceneComp = Player::getSceneComp(this->player_);
              TransferReason::TransferReason(&p_reason, ENTER_REASON_COIN_COLLECT_SINGLE);
              v29 = std::__shared_ptr_access<data::ConfigScenePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigScenePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
              Vector3::Vector3(&rot, &v29->rot);
              v30 = std::__shared_ptr_access<data::ConfigScenePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigScenePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
              Vector3::Vector3(&pos, &v30->pos);
              v31 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
              LOBYTE(SceneComp) = PlayerSceneComp::jumpToScene(SceneComp, v31, &pos, &rot, 0, &p_reason) != 0;
              TransferReason::~TransferReason(&p_reason);
              if ( (_BYTE)SceneComp )
              {
                common::milog::MiLogStream::create(
                  &v39,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/activity/coin_collect_activity.cpp",
                  "restartCoinCollectPlaySingleMode",
                  675);
                common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                  &v39,
                  (const char (*)[31])"[CoinCollect] jumpToScene fail");
                common::milog::MiLogStream::~MiLogStream(&v39);
                v9 = -1;
              }
              else
              {
                v9 = 0;
              }
            }
            std::shared_ptr<data::ConfigScenePoint>::~shared_ptr((std::shared_ptr<data::ConfigScenePoint> *const)(v3 + 128));
          }
          else
          {
            common::milog::MiLogStream::create(
              &v39,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/coin_collect_activity.cpp",
              "restartCoinCollectPlaySingleMode",
              662);
            v16 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                    &v39,
                    (const char (*)[25])"[CoinCollect] level_id: ");
            v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v16,
                    (const unsigned int *)(v3 + 48));
            common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v17, (const char (*)[12])off_262413A0);
            common::milog::MiLogStream::~MiLogStream(&v39);
            v9 = -1;
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v39,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/coin_collect_activity.cpp",
            "restartCoinCollectPlaySingleMode",
            655);
          common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
            &v39,
            (const char (*)[31])"[CoinCollect] not in own world");
          common::milog::MiLogStream::~MiLogStream(&v39);
          v9 = -1;
        }
      }
      std::shared_ptr<World>::~shared_ptr((std::shared_ptr<World> *const)(v3 + 96));
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 64));
  }
  result = v9;
  if ( v41 == (char *)v3 )
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

// Line 682: range 0000000017962126-000000001796270F
int32_t __cdecl CoinCollectActivity::endCoinCollectPlaySingleMode(
        CoinCollectActivity *const this,
        const proto::EndCoinCollectPlaySingleModeReq *req,
        proto::EndCoinCollectPlaySingleModeRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  int32_t v9; // r14d
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  char v12; // al
  uint32_t Uid; // r14d
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  PlayerMpComp *MpComp; // rax
  char v16; // al
  common::milog::MiLogStream *v17; // r14
  PlayerWorld *v18; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-B4h] BYREF
  common::milog::MiLogStream v21; // [rsp+30h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+50h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 25 multistage_play_index:683 64 16 20 player_world_ptr:689";
  *(_QWORD *)(v3 + 16) = CoinCollectActivity::endCoinCollectPlaySingleMode;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = proto::EndCoinCollectPlaySingleModeReq::multistage_play_index(req);
  if ( *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( this->play_index_ == *(_DWORD *)(v3 + 48) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurWorld<PlayerWorld>((const PlayerSceneComp *const)(v3 + 64));
    if ( std::operator==<PlayerWorld>((const std::shared_ptr<PlayerWorld> *)(v3 + 64), 0LL) )
      goto LABEL_16;
    v10 = (unsigned __int64)std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
      v10 = __asan_report_load8();
    v11 = *(_QWORD *)v10 + 16LL;
    if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
      v10 = __asan_report_load8();
    if ( (*(unsigned int (__fastcall **)(unsigned __int64))v11)(v10) == 1 )
      v12 = 0;
    else
LABEL_16:
      v12 = 1;
    if ( v12 )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/coin_collect_activity.cpp",
        "endCoinCollectPlaySingleMode",
        692);
      common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
        &v21,
        (const char (*)[51])"[CoinCollect] cur world can not start coin collect");
      common::milog::MiLogStream::~MiLogStream(&v21);
      v9 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Uid = Player::getUid(this->player_);
      v14 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      if ( Uid == World::getOwnerUid(v14) )
      {
        if ( *(char *)(((unsigned __int64)&this->is_pre_in_single_mp_mode_ >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(&this->is_pre_in_single_mp_mode_);
        if ( this->is_pre_in_single_mp_mode_ )
          goto LABEL_31;
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        MpComp = Player::getMpComp(this->player_);
        if ( PlayerMpComp::isInSingleMpMode(MpComp) )
          v16 = 1;
        else
LABEL_31:
          v16 = 0;
        if ( v16 )
        {
          common::milog::MiLogStream::create(
            &v21,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/coin_collect_activity.cpp",
            "endCoinCollectPlaySingleMode",
            704);
          v17 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                  &v21,
                  (const char (*)[46])"[CoinCollect] set world in not mp mode, uid: ");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &val);
          common::milog::MiLogStream::~MiLogStream(&v21);
          v18 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          PlayerWorld::setIsInMpMode(v18, 0);
        }
        v9 = 0;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/coin_collect_activity.cpp",
          "endCoinCollectPlaySingleMode",
          698);
        common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
          &v21,
          (const char (*)[30])"[CoinCollect] not world owner");
        common::milog::MiLogStream::~MiLogStream(&v21);
        v9 = -1;
      }
    }
    std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v3 + 64));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/coin_collect_activity.cpp",
      "endCoinCollectPlaySingleMode",
      686);
    v6 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
           &v21,
           (const char (*)[23])"play index not equal: ");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
    v8 = common::milog::MiLogStream::operator<<<char [4],(char *[4])0>(v7, (const char (*)[4])" - ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->play_index_);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v9 = -1;
  }
  result = v9;
  if ( v22 == (char *)v3 )
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

// Line 711: range 0000000017962710-0000000017962A2B
int32_t __cdecl CoinCollectActivity::coinCollectPrepare(
        CoinCollectActivity *const this,
        const proto::CoinCollectPrepareReq *req,
        proto::CoinCollectPrepareRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  int32_t v6; // r14d
  Scene *v7; // rax
  std::__shared_ptr_access<CoinCollectMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // r14
  uint32_t Uid; // eax
  int32_t result; // eax
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-B0h] BYREF
  char v12[144]; // [rsp+40h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 13 scene_ptr:712 64 16 23 multistage_play_ptr:718";
  *(_QWORD *)(v3 + 16) = CoinCollectActivity::coinCollectPrepare;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v3 + 32));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/coin_collect_activity.cpp",
      "coinCollectPrepare",
      715);
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v11, (const char (*)[21])off_26250100);
    common::milog::MiLogStream::~MiLogStream(&v11);
    v6 = -1;
  }
  else
  {
    v7 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    Scene::getMultistagePlayComp(v7);
    SceneMultistagePlayComp::findPlay<CoinCollectMultistagePlay>((const SceneMultistagePlayComp *const)(v3 + 64));
    if ( std::operator==<CoinCollectMultistagePlay>((const std::shared_ptr<CoinCollectMultistagePlay> *)(v3 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/coin_collect_activity.cpp",
        "coinCollectPrepare",
        721);
      common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(&v11, (const char (*)[53])off_26250140);
      common::milog::MiLogStream::~MiLogStream(&v11);
      v6 = -1;
    }
    else
    {
      v8 = std::__shared_ptr_access<CoinCollectMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CoinCollectMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Uid = Player::getUid(this->player_);
      v6 = CoinCollectMultistagePlay::onPlayerAgreeToPrepare(v8, Uid);
    }
    std::shared_ptr<CoinCollectMultistagePlay>::~shared_ptr((std::shared_ptr<CoinCollectMultistagePlay> *const)(v3 + 64));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 32));
  result = v6;
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
  return result;
};

// Line 728: range 0000000017962A2C-0000000017962F87
int32_t __cdecl CoinCollectActivity::coinCollectInterruptPlay(
        CoinCollectActivity *const this,
        const proto::CoinCollectInterruptPlayReq *req,
        proto::CoinCollectInterruptPlayRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  int32_t v6; // r14d
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  char v9; // al
  uint32_t Uid; // r14d
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  Scene *v12; // rax
  std::__shared_ptr_access<CoinCollectMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  int32_t result; // eax
  uint32_t gallery_id; // [rsp+2Ch] [rbp-D4h]
  common::milog::MiLogStream v17; // [rsp+30h] [rbp-D0h] BYREF
  char v18[176]; // [rsp+50h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 16 13 scene_ptr:729 64 16 20 player_world_ptr:735 96 16 23 multistage_play_ptr:747";
  *(_QWORD *)(v3 + 16) = CoinCollectActivity::coinCollectInterruptPlay;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -219021312;
  v5[536862723] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v3 + 32));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/coin_collect_activity.cpp",
      "coinCollectInterruptPlay",
      732);
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v17, (const char (*)[21])off_26250100);
    common::milog::MiLogStream::~MiLogStream(&v17);
    v6 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurWorld<PlayerWorld>((const PlayerSceneComp *const)(v3 + 64));
    if ( std::operator==<PlayerWorld>((const std::shared_ptr<PlayerWorld> *)(v3 + 64), 0LL) )
      goto LABEL_16;
    v7 = (unsigned __int64)std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      v7 = __asan_report_load8();
    v8 = *(_QWORD *)v7 + 16LL;
    if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
      v7 = __asan_report_load8();
    if ( (*(unsigned int (__fastcall **)(unsigned __int64))v8)(v7) == 1 )
      v9 = 0;
    else
LABEL_16:
      v9 = 1;
    if ( v9 )
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/coin_collect_activity.cpp",
        "coinCollectInterruptPlay",
        738);
      common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
        &v17,
        (const char (*)[51])"[CoinCollect] cur world can not start coin collect");
      common::milog::MiLogStream::~MiLogStream(&v17);
      v6 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Uid = Player::getUid(this->player_);
      v11 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      if ( Uid == World::getOwnerUid(v11) )
      {
        v12 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        Scene::getMultistagePlayComp(v12);
        SceneMultistagePlayComp::findPlay<CoinCollectMultistagePlay>((const SceneMultistagePlayComp *const)(v3 + 96));
        if ( std::operator==<CoinCollectMultistagePlay>(
               (const std::shared_ptr<CoinCollectMultistagePlay> *)(v3 + 96),
               0LL) )
        {
          common::milog::MiLogStream::create(
            &v17,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/coin_collect_activity.cpp",
            "coinCollectInterruptPlay",
            750);
          common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(&v17, (const char (*)[53])off_26250140);
          common::milog::MiLogStream::~MiLogStream(&v17);
          v6 = -1;
        }
        else
        {
          gallery_id = proto::CoinCollectInterruptPlayReq::gallery_id(req);
          proto::CoinCollectInterruptPlayRsp::set_gallery_id(rsp_0, gallery_id);
          v13 = std::__shared_ptr_access<CoinCollectMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CoinCollectMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
          v6 = CoinCollectMultistagePlay::onInterruptCoinCollectGallery(v13, gallery_id);
        }
        std::shared_ptr<CoinCollectMultistagePlay>::~shared_ptr((std::shared_ptr<CoinCollectMultistagePlay> *const)(v3 + 96));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v17,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/coin_collect_activity.cpp",
          "coinCollectInterruptPlay",
          744);
        common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
          &v17,
          (const char (*)[30])"[CoinCollect] not world owner");
        common::milog::MiLogStream::~MiLogStream(&v17);
        v6 = -1;
      }
    }
    std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v3 + 64));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 32));
  result = v6;
  if ( v18 == (char *)v3 )
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

// Line 759: range 00000000179632A0-00000000179637C3
int32_t __cdecl CoinCollectActivity::coinCollectCheckDoubleStartPlay(
        CoinCollectActivity *const this,
        const proto::CoinCollectCheckDoubleStartPlayReq *req,
        proto::CoinCollectCheckDoubleStartPlayRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  CoinCollectActivity *v6; // rdx
  unsigned __int64 v7; // rax
  char v8; // al
  int32_t v9; // r14d
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  char v12; // al
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  int32_t result; // eax
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // [rsp+10h] [rbp-100h]
  uint32_t level_id; // [rsp+38h] [rbp-D8h]
  uint32_t owner_uid; // [rsp+3Ch] [rbp-D4h]
  common::milog::MiLogStream v20; // [rsp+40h] [rbp-D0h] BYREF
  char v21[176]; // [rsp+60h] [rbp-B0h] BYREF
  CoinCollectActivity::coinCollectCheckDoubleStartPlay::<lambda(Player&)> v22; // 0:rsi.8,8:rdx.8

  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 7 ret:788 64 16 13 scene_ptr:768 96 16 20 player_world_ptr:773";
  *(_QWORD *)(v3 + 16) = CoinCollectActivity::coinCollectCheckDoubleStartPlay;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862723] = -202178560;
  level_id = proto::CoinCollectCheckDoubleStartPlayReq::level_id(req);
  proto::CoinCollectCheckDoubleStartPlayRsp::set_level_id(rsp_0, level_id);
  if ( !BaseActivity::isOpening((const BaseActivity *const)this, 0) )
    goto LABEL_10;
  v6 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v7 = (unsigned __int64)(this->_vptr_DescribalBase + 17);
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load8();
  if ( (*(unsigned __int8 (__fastcall **)(CoinCollectActivity *))v7)(v6) )
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
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v3 + 64));
    if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 64), 0LL) )
    {
      v9 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::getSceneComp(this->player_);
      PlayerSceneComp::getCurWorld<PlayerWorld>((const PlayerSceneComp *const)(v3 + 96));
      if ( std::operator==<PlayerWorld>((const std::shared_ptr<PlayerWorld> *)(v3 + 96), 0LL) )
        goto LABEL_26;
      v10 = (unsigned __int64)std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
        v10 = __asan_report_load8();
      v11 = *(_QWORD *)v10 + 16LL;
      if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
        v10 = __asan_report_load8();
      if ( (*(unsigned int (__fastcall **)(unsigned __int64))v11)(v10) == 1 )
        v12 = 0;
      else
LABEL_26:
        v12 = 1;
      if ( v12 )
      {
        v9 = -1;
      }
      else
      {
        v13 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        owner_uid = World::getOwnerUid(v13);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        if ( owner_uid == Player::getUid(this->player_) )
        {
          v14 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
          if ( World::getPlayerCount(v14) <= 2 )
          {
            *(_DWORD *)(v3 + 48) = 0;
            v16 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
            v22.__owner_uid = owner_uid;
            v22.__level_id = level_id;
            v22.__ret = (int32_t *)(v3 + 48);
            std::function<ForeachPolicy ()(Player &)>::function<CoinCollectActivity::coinCollectCheckDoubleStartPlay(proto::CoinCollectCheckDoubleStartPlayReq const&,proto::CoinCollectCheckDoubleStartPlayRsp &)::{lambda(Player &)#1},void,void>(
              (std::function<ForeachPolicy(Player&)> *const)&v20,
              v22);
            World::foreachPlayer(v16, (std::function<ForeachPolicy(Player&)> *)&v20);
            std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v20);
            v9 = *(_DWORD *)(v3 + 48);
          }
          else
          {
            v9 = -1;
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v20,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/coin_collect_activity.cpp",
            "coinCollectCheckDoubleStartPlay",
            781);
          common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
            &v20,
            (const char (*)[30])"[CoinCollect] not world owner");
          common::milog::MiLogStream::~MiLogStream(&v20);
          v9 = -1;
        }
      }
      std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v3 + 96));
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 64));
  }
  result = v9;
  if ( v21 == (char *)v3 )
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

// Line 789: range 0000000017962F88-000000001796329F
ForeachPolicy __cdecl CoinCollectActivity::coinCollectCheckDoubleStartPlay(proto::CoinCollectCheckDoubleStartPlayReq const&,proto::CoinCollectCheckDoubleStartPlayRsp &)::{lambda(Player &)#1}::operator()(
        const CoinCollectActivity::coinCollectCheckDoubleStartPlay::<lambda(Player&)> *const __closure,
        Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  uint32_t Uid; // ecx
  _BOOL4 v6; // r14d
  int32_t *ret; // rdx
  const CoinCollectActivity *p_level_id; // rdi
  uint32_t level_id; // eax
  int32_t *v10; // r14
  int32_t canStartCoinCollectPlay; // ecx
  int32_t *v12; // rdx
  ForeachPolicy result; // eax
  char v15[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 16 activity_ptr:795";
  *(_QWORD *)(v2 + 16) = CoinCollectActivity::coinCollectCheckDoubleStartPlay(proto::CoinCollectCheckDoubleStartPlayReq const&,proto::CoinCollectCheckDoubleStartPlayRsp &)::{lambda(Player &)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  Uid = Player::getUid(player);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__owner_uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&__closure->__owner_uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( Uid == __closure->__owner_uid )
  {
    v6 = 0;
  }
  else
  {
    Player::getActivityComp(player);
    PlayerActivityComp::findOpenningActivity<CoinCollectActivity>((PlayerActivityComp *const)(v2 + 32));
    if ( std::operator==<CoinCollectActivity>((const std::shared_ptr<CoinCollectActivity> *)(v2 + 32), 0LL) )
    {
      if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      ret = __closure->__ret;
      if ( *(_BYTE *)(((unsigned __int64)__closure->__ret >> 3) + 0x7FFF8000) != 0
        && (char)(((__int64)__closure->__ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure->__ret >> 3)
                                                                   + 0x7FFF8000) )
      {
        __asan_report_store4(__closure->__ret);
      }
      *ret = 860;
      v6 = 1;
    }
    else
    {
      p_level_id = std::__shared_ptr_access<CoinCollectActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CoinCollectActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__level_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)__closure + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&__closure->__level_id >> 3)
                                                                 + 0x7FFF8000) )
      {
        p_level_id = (const CoinCollectActivity *)&__closure->__level_id;
        __asan_report_load4();
      }
      level_id = __closure->__level_id;
      if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      {
        p_level_id = (const CoinCollectActivity *)__closure;
        level_id = __asan_report_load8();
      }
      v10 = __closure->__ret;
      canStartCoinCollectPlay = CoinCollectActivity::canStartCoinCollectPlay(p_level_id, level_id);
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v10);
      }
      *v10 = canStartCoinCollectPlay;
      if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v12 = __closure->__ret;
      if ( *(_BYTE *)(((unsigned __int64)__closure->__ret >> 3) + 0x7FFF8000) != 0
        && (char)(((__int64)__closure->__ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure->__ret >> 3)
                                                                   + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v6 = *v12 != 0;
    }
    std::shared_ptr<CoinCollectActivity>::~shared_ptr((std::shared_ptr<CoinCollectActivity> *const)(v2 + 32));
  }
  result = v6;
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

// Line 812: range 00000000179637C4-0000000017963A0E
void __cdecl CoinCollectActivity::registerObserver(CoinCollectActivity *const this)
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
  *(_QWORD *)(v1 + 8) = "2 32 16 12 this_ptr:813 64 16 12 this_wtr:814";
  *(_QWORD *)(v1 + 16) = CoinCollectActivity::registerObserver;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  std::enable_shared_from_this<BaseActivity>::shared_from_this(&v5);
  std::dynamic_pointer_cast<CoinCollectActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)(v1 + 32));
  std::shared_ptr<BaseActivity>::~shared_ptr((std::shared_ptr<BaseActivity> *const)&v5);
  std::weak_ptr<CoinCollectActivity>::weak_ptr<CoinCollectActivity,void>(
    (std::weak_ptr<CoinCollectActivity> *const)(v1 + 64),
    (const std::shared_ptr<CoinCollectActivity> *)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  EventComp = Player::getEventComp(this->player_);
  std::weak_ptr<CoinCollectActivity>::weak_ptr(
    (std::weak_ptr<CoinCollectActivity> *const)&v5,
    (const std::weak_ptr<CoinCollectActivity> *)(v1 + 64));
  PlayerEventComp::tryRegisterObserver<CoinCollectActivity,CoinCollectGalleryFinishEvent>(
    EventComp,
    (std::weak_ptr<CoinCollectActivity> *)&v5,
    (void (*)(CoinCollectActivity *, const CoinCollectGalleryFinishEvent *))CoinCollectActivity::onGallerySettleEvent,
    0LL);
  std::weak_ptr<CoinCollectActivity>::~weak_ptr((std::weak_ptr<CoinCollectActivity> *const)&v5);
  std::weak_ptr<CoinCollectActivity>::~weak_ptr((std::weak_ptr<CoinCollectActivity> *const)(v1 + 64));
  std::shared_ptr<CoinCollectActivity>::~shared_ptr((std::shared_ptr<CoinCollectActivity> *const)(v1 + 32));
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

// Line 819: range 0000000017963A10-0000000017963B14
void __cdecl CoinCollectActivity::unregisterObserver(CoinCollectActivity *const this)
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

// Line 833: range 0000000017963F6A-0000000017964512
void __cdecl CoinCollectActivity::internalUpdateBestRecord(
        CoinCollectActivity *const this,
        bool *is_new_record,
        uint32_t *best_collect_num,
        uint32_t *best_collect_time,
        std::vector<CoinCollectTeamInfo> *new_team_info_vec,
        const CoinCollectGalleryFinishEvent *event)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // [rsp+8h] [rbp-E8h]
  uint32_t new_coin_collect_num; // [rsp+4Ch] [rbp-A4h]
  uint32_t new_coin_collect_time_ms; // [rsp+50h] [rbp-A0h]
  uint32_t coin_total_num; // [rsp+54h] [rbp-9Ch]
  common::milog::MiLogStream v17; // [rsp+60h] [rbp-90h] BYREF
  char v18[112]; // [rsp+80h] [rbp-70h] BYREF

  v6 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_0(64LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "1 32 16 17 cur_scene_ptr:862";
  *(_QWORD *)(v6 + 16) = CoinCollectActivity::internalUpdateBestRecord;
  v8 = v6 >> 3;
  *(_DWORD *)(v8 + 2147450880) = -235802127;
  *(_DWORD *)(v8 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&event->level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( *(_BYTE *)(((unsigned __int64)&event->coin_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->coin_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  new_coin_collect_num = event->coin_num;
  if ( *(_BYTE *)(((unsigned __int64)&event->time_ms >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->time_ms >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  new_coin_collect_time_ms = event->time_ms;
  if ( *(_BYTE *)(((unsigned __int64)&event->coin_total_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)event + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->coin_total_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  coin_total_num = event->coin_total_num;
  if ( *(_BYTE *)(((unsigned __int64)best_collect_num >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)best_collect_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)best_collect_num >> 3)
                                                                       + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( new_coin_collect_num <= *best_collect_num )
  {
    if ( new_coin_collect_num == coin_total_num )
    {
      if ( *(_BYTE *)(((unsigned __int64)best_collect_time >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)best_collect_time & 7) + 3) >= *(_BYTE *)(((unsigned __int64)best_collect_time >> 3)
                                                                            + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( new_coin_collect_time_ms < *best_collect_time )
      {
        *best_collect_time = new_coin_collect_time_ms;
        if ( *(_BYTE *)(((unsigned __int64)is_new_record >> 3) + 0x7FFF8000) != 0
          && ((unsigned __int8)is_new_record & 7) >= *(_BYTE *)(((unsigned __int64)is_new_record >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(is_new_record);
        }
        *is_new_record = 1;
      }
    }
  }
  else
  {
    *best_collect_num = new_coin_collect_num;
    if ( new_coin_collect_num == coin_total_num )
    {
      if ( *(_BYTE *)(((unsigned __int64)best_collect_time >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)best_collect_time & 7) + 3) >= *(_BYTE *)(((unsigned __int64)best_collect_time >> 3)
                                                                            + 0x7FFF8000) )
      {
        __asan_report_store4(best_collect_time);
      }
      *best_collect_time = new_coin_collect_time_ms;
    }
    if ( *(_BYTE *)(((unsigned __int64)is_new_record >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)is_new_record & 7) >= *(_BYTE *)(((unsigned __int64)is_new_record >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(is_new_record);
    }
    *is_new_record = 1;
  }
  if ( *(_BYTE *)(((unsigned __int64)is_new_record >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)is_new_record & 7) >= *(_BYTE *)(((unsigned __int64)is_new_record >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(is_new_record);
  }
  if ( *is_new_record )
  {
    std::vector<CoinCollectTeamInfo>::clear(new_team_info_vec);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v6 + 32));
    if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v6 + 32), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/coin_collect_activity.cpp",
        "internalUpdateBestRecord",
        865);
      common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v17, (const char (*)[21])off_26250100);
      common::milog::MiLogStream::~MiLogStream(&v17);
    }
    else
    {
      v9 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 32));
      std::function<ForeachPolicy ()(Player &)>::function<CoinCollectActivity::internalUpdateBestRecord(bool &,unsigned int &,unsigned int &,std::vector<CoinCollectTeamInfo> &,CoinCollectGalleryFinishEvent const&)::{lambda(Player &)#1},void,void>(
        (std::function<ForeachPolicy(Player&)> *const)&v17,
        (CoinCollectActivity::internalUpdateBestRecord::<lambda(Player&)>)__PAIR128__(
                                                                            (unsigned __int64)&event->uid_2_choose_skill_no_map_,
                                                                            (unsigned __int64)new_team_info_vec));
      Scene::foreachPlayer(v9, (std::function<ForeachPolicy(Player&)> *)&v17);
      std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v17);
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v6 + 32));
  }
  if ( v18 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 868: range 0000000017963C12-0000000017963F69
ForeachPolicy __cdecl CoinCollectActivity::internalUpdateBestRecord(bool &,unsigned int &,unsigned int &,std::vector<CoinCollectTeamInfo> &,CoinCollectGalleryFinishEvent const&)::{lambda(Player &)#1}::operator()(
        const CoinCollectActivity::internalUpdateBestRecord::<lambda(Player&)> *const __closure,
        Player *player)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::unordered_map<unsigned int,unsigned int> *uid_2_choose_skill_no_map; // r14
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v6; // rdx
  uint32_t Uid; // r14d
  PlayerSceneComp *SceneComp; // rax
  PlayerAvatarComp *AvatarComp; // r14
  std::vector<CoinCollectTeamInfo> *new_team_info_vec; // r14
  CoinCollectTeamInfo *v11; // rax
  CoinCollectTeamInfo *v12; // rdx
  ForeachPolicy result; // eax
  std::unordered_map<unsigned int,unsigned int>::key_type __x; // [rsp+14h] [rbp-11Ch] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> __y; // [rsp+18h] [rbp-118h] BYREF
  std::function<ForeachPolicy(Avatar&)> p_func; // [rsp+20h] [rbp-110h] BYREF
  char v17[240]; // [rsp+40h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 17 skill_no_iter:870 64 88 17 new_team_info:875";
  *(_QWORD *)(v2 + 16) = CoinCollectActivity::internalUpdateBestRecord(bool &,unsigned int &,unsigned int &,std::vector<CoinCollectTeamInfo> &,CoinCollectGalleryFinishEvent const&)::{lambda(Player &)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862724] = -218103808;
  v4[536862725] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__uid_2_choose_skill_no_map >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  uid_2_choose_skill_no_map = __closure->__uid_2_choose_skill_no_map;
  __x = Player::getUid(player);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                  uid_2_choose_skill_no_map,
                                                                                  &__x);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__uid_2_choose_skill_no_map >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  __y._M_cur = std::unordered_map<unsigned int,unsigned int>::end(__closure->__uid_2_choose_skill_no_map)._M_cur;
  if ( !std::__detail::operator==<std::pair<unsigned int const,unsigned int>,false>(
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 32),
          &__y) )
  {
    CoinCollectTeamInfo::CoinCollectTeamInfo((CoinCollectTeamInfo *const)(v2 + 64));
    v6 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&v6->second >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v6 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v6->second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 64) = v6->second;
    Uid = Player::getUid(player);
    SceneComp = Player::getSceneComp(player);
    *(_BYTE *)(v2 + 120) = Uid == PlayerSceneComp::getCurWorldOwnerUid(SceneComp);
    *(_DWORD *)(v2 + 124) = Player::getUid(player);
    AvatarComp = Player::getAvatarComp(player);
    std::function<ForeachPolicy ()(Avatar &)>::function<CoinCollectActivity::internalUpdateBestRecord(bool &,unsigned int &,unsigned int &,std::vector<CoinCollectTeamInfo> &,CoinCollectGalleryFinishEvent const&)::{lambda(Player &)#1}::operator() const(Player &)::{lambda(Avatar &)#1},void,void>(
      &p_func,
      (CoinCollectActivity::internalUpdateBestRecord::<lambda(Player&)>::operator()::<lambda(Avatar&)>)(v2 + 64));
    PlayerAvatarComp::foreachAvatarInSceneTeam(AvatarComp, &p_func);
    std::function<ForeachPolicy ()(Avatar &)>::~function(&p_func);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    new_team_info_vec = __closure->__new_team_info_vec;
    v11 = std::move<CoinCollectTeamInfo &>((CoinCollectTeamInfo *)(v2 + 64));
    std::vector<CoinCollectTeamInfo>::emplace_back<CoinCollectTeamInfo>(new_team_info_vec, v11, v12);
    CoinCollectTeamInfo::~CoinCollectTeamInfo((CoinCollectTeamInfo *const)(v2 + 64));
  }
  result = FOREACH_CONTINUE;
  if ( v17 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 879: range 0000000017963B16-0000000017963C10
ForeachPolicy __cdecl CoinCollectActivity::internalUpdateBestRecord(bool &,unsigned int &,unsigned int &,std::vector<CoinCollectTeamInfo> &,CoinCollectGalleryFinishEvent const&)::{lambda(Player &)#1}::operator() const(Player &)::{lambda(Avatar &)#1}::operator()(
        const CoinCollectActivity::internalUpdateBestRecord::<lambda(Player&)>::operator()::<lambda(Avatar&)> *const __closure,
        Avatar *avatar)
{
  std::vector<unsigned int> *p_avatar_id_vec; // rbx
  std::vector<unsigned int> *p_avatar_lv_vec; // rbx
  std::vector<unsigned int> *p_avatar_costume_id_vec; // rbx
  std::vector<unsigned int>::value_type __x[5]; // [rsp+1Ch] [rbp-14h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  p_avatar_id_vec = &__closure->__new_team_info->avatar_id_vec;
  __x[0] = Avatar::getAvatarId(avatar);
  std::vector<unsigned int>::push_back(p_avatar_id_vec, __x);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  p_avatar_lv_vec = &__closure->__new_team_info->avatar_lv_vec;
  __x[0] = Creature::getLevel(avatar);
  std::vector<unsigned int>::push_back(p_avatar_lv_vec, __x);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  p_avatar_costume_id_vec = &__closure->__new_team_info->avatar_costume_id_vec;
  __x[0] = Avatar::getCostumeId(avatar);
  std::vector<unsigned int>::push_back(p_avatar_costume_id_vec, __x);
  return 0;
};

// Line 894: range 0000000017964514-0000000017964E2E
void __cdecl CoinCollectActivity::onGallerySettleEvent(
        CoinCollectActivity *const this,
        const CoinCollectGalleryFinishEvent *event)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  const CoinCollectTeamInfo *v9; // rax
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,CoinCollectLevelData> >::_Self __y; // [rsp+18h] [rbp-188h] BYREF
  const std::unordered_map<unsigned int,unsigned int> *uid_2_choose_skill_no_map; // [rsp+20h] [rbp-180h]
  CoinCollectLevelData *level_data; // [rsp+28h] [rbp-178h]
  common::milog::MiLogStream v15; // [rsp+30h] [rbp-170h] BYREF
  char v16[336]; // [rsp+50h] [rbp-150h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 48 1 17 is_new_record:910 64 4 12 level_id:901 80 8 19 level_data_iter:903 112 16 17 cur_scene"
                        "_ptr:895 144 24 21 new_team_info_vec:912 208 48 10 notify:943";
  *(_QWORD *)(v2 + 16) = CoinCollectActivity::onGallerySettleEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = 61956;
  v4[536862722] = -234881024;
  v4[536862723] = 62194;
  v4[536862724] = 62194;
  v4[536862725] = -218959360;
  v4[536862726] = 62194;
  v4[536862728] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 112));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 112), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/coin_collect_activity.cpp",
      "onGallerySettleEvent",
      898);
    common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
      &v15,
      (const char (*)[37])"scene is nullptr when gallery settle");
    common::milog::MiLogStream::~MiLogStream(&v15);
    goto LABEL_47;
  }
  if ( *(_BYTE *)(((unsigned __int64)&event->level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  *(_DWORD *)(v2 + 64) = event->level_id;
  uid_2_choose_skill_no_map = &event->uid_2_choose_skill_no_map_;
  *(std::map<unsigned int,CoinCollectLevelData>::iterator *)(v2 + 80) = std::map<unsigned int,CoinCollectLevelData>::find(
                                                                          &this->level_data_map_,
                                                                          (const std::map<unsigned int,CoinCollectLevelData>::key_type *)(v2 + 64));
  __y._M_node = std::map<unsigned int,CoinCollectLevelData>::end(&this->level_data_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,CoinCollectLevelData> >::_Self *)(v2 + 80),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/coin_collect_activity.cpp",
      "onGallerySettleEvent",
      906);
    v5 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v15, (const char (*)[11])"level_id: ");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 64));
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v6, (const char (*)[12])off_262413A0);
    common::milog::MiLogStream::~MiLogStream(&v15);
    goto LABEL_47;
  }
  level_data = &std::_Rb_tree_iterator<std::pair<unsigned int const,CoinCollectLevelData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,CoinCollectLevelData> > *const)(v2 + 80))->second;
  *(_BYTE *)(v2 + 48) = 0;
  std::vector<CoinCollectTeamInfo>::vector((std::vector<CoinCollectTeamInfo> *const)(v2 + 144));
  if ( std::unordered_map<unsigned int,unsigned int>::size(uid_2_choose_skill_no_map) == 2 )
  {
    CoinCollectActivity::internalUpdateBestRecord(
      this,
      (bool *)(v2 + 48),
      &level_data->double_best_collect_num,
      &level_data->double_best_pass_time_ms,
      (std::vector<CoinCollectTeamInfo> *)(v2 + 144),
      event);
    if ( *(_BYTE *)(v2 + 48)
      && !std::vector<CoinCollectTeamInfo>::empty((const std::vector<CoinCollectTeamInfo> *const)(v2 + 144)) )
    {
      std::vector<CoinCollectTeamInfo>::operator=(
        &level_data->double_best_team_info_vec,
        (const std::vector<CoinCollectTeamInfo> *)(v2 + 144));
    }
    if ( *(_BYTE *)(((unsigned __int64)&level_data->is_have_play_double_level >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)level_data - 110) & 7) >= *(_BYTE *)(((unsigned __int64)&level_data->is_have_play_double_level >> 3)
                                                               + 0x7FFF8000) )
    {
      __asan_report_store1(&level_data->is_have_play_double_level);
    }
    level_data->is_have_play_double_level = 1;
LABEL_33:
    if ( *(_BYTE *)(v2 + 48) )
      BaseActivity::notifyClientData((BaseActivity *const)this, 0);
    proto::CoinCollectGallerySettleNotify::CoinCollectGallerySettleNotify((proto::CoinCollectGallerySettleNotify *const)(v2 + 208));
    proto::CoinCollectGallerySettleNotify::set_level_id(
      (proto::CoinCollectGallerySettleNotify *const)(v2 + 208),
      *(_DWORD *)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&event->coin_num >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->coin_num >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::CoinCollectGallerySettleNotify::set_coin_collect_num(
      (proto::CoinCollectGallerySettleNotify *const)(v2 + 208),
      event->coin_num);
    if ( *(_BYTE *)(((unsigned __int64)&event->time_ms >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->time_ms >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::CoinCollectGallerySettleNotify::set_coin_collect_time(
      (proto::CoinCollectGallerySettleNotify *const)(v2 + 208),
      event->time_ms);
    if ( *(_BYTE *)(((unsigned __int64)&event->coin_total_num >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->coin_total_num >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::CoinCollectGallerySettleNotify::set_coin_total_num(
      (proto::CoinCollectGallerySettleNotify *const)(v2 + 208),
      event->coin_total_num);
    proto::CoinCollectGallerySettleNotify::set_is_new_record(
      (proto::CoinCollectGallerySettleNotify *const)(v2 + 208),
      *(_BYTE *)(v2 + 48));
    if ( *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::CoinCollectGallerySettleNotify::set_multistage_play_index(
      (proto::CoinCollectGallerySettleNotify *const)(v2 + 208),
      this->play_index_);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 208));
    proto::CoinCollectGallerySettleNotify::~CoinCollectGallerySettleNotify((proto::CoinCollectGallerySettleNotify *const)(v2 + 208));
    goto LABEL_46;
  }
  if ( std::unordered_map<unsigned int,unsigned int>::size(uid_2_choose_skill_no_map) == 1 )
  {
    CoinCollectActivity::internalUpdateBestRecord(
      this,
      (bool *)(v2 + 48),
      &level_data->single_best_collect_num,
      &level_data->single_best_pass_time_ms,
      (std::vector<CoinCollectTeamInfo> *)(v2 + 144),
      event);
    if ( *(_BYTE *)(v2 + 48)
      && !std::vector<CoinCollectTeamInfo>::empty((const std::vector<CoinCollectTeamInfo> *const)(v2 + 144)) )
    {
      v9 = std::vector<CoinCollectTeamInfo>::operator[]((std::vector<CoinCollectTeamInfo> *const)(v2 + 144), 0LL);
      CoinCollectTeamInfo::operator=(&level_data->single_best_team_info, v9);
    }
    if ( *(_BYTE *)(((unsigned __int64)&level_data->is_have_play_single_level >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)level_data - 111) & 7) >= *(_BYTE *)(((unsigned __int64)&level_data->is_have_play_single_level >> 3)
                                                               + 0x7FFF8000) )
    {
      __asan_report_store1(&level_data->is_have_play_single_level);
    }
    level_data->is_have_play_single_level = 1;
    goto LABEL_33;
  }
  common::milog::MiLogStream::create(
    &v15,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/activity/coin_collect_activity.cpp",
    "onGallerySettleEvent",
    935);
  v10 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v15, (const char (*)[19])"wrong player num: ");
  __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,CoinCollectLevelData> >::_Base_ptr)std::unordered_map<unsigned int,unsigned int>::size(uid_2_choose_skill_no_map);
  v11 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v10, (const unsigned __int64 *)&__y);
  common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(v11, (const char (*)[25])off_26250520);
  common::milog::MiLogStream::~MiLogStream(&v15);
LABEL_46:
  std::vector<CoinCollectTeamInfo>::~vector((std::vector<CoinCollectTeamInfo> *const)(v2 + 144));
LABEL_47:
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 112));
  if ( v16 == (char *)v2 )
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
};

// Line 954: range 0000000017964E30-0000000017964E3A
void __cdecl CoinCollectActivity::onCoinCollectMultiStageEnd(CoinCollectActivity *const this)
{
  ;
};

// Line 959: range 0000000017964E3C-000000001796502D
void __fastcall CoinCollectActivity::onStartWatchCutScene(CoinCollectActivity *const this, uint32_t level_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::_Rb_tree_iterator<std::pair<unsigned int const,CoinCollectLevelData> >::pointer v5; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,CoinCollectLevelData> >::pointer v6; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,CoinCollectLevelData> >::_Self __y; // [rsp+18h] [rbp-88h] BYREF
  char v8[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 level_id:958 64 8 8 iter:960";
  *(_QWORD *)(v2 + 16) = CoinCollectActivity::onStartWatchCutScene;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = level_id;
  *(std::map<unsigned int,CoinCollectLevelData>::iterator *)(v2 + 64) = std::map<unsigned int,CoinCollectLevelData>::find(
                                                                          &this->level_data_map_,
                                                                          (const std::map<unsigned int,CoinCollectLevelData>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,CoinCollectLevelData>::end(&this->level_data_map_)._M_node;
  if ( !std::operator==(
          (const std::_Rb_tree_iterator<std::pair<unsigned int const,CoinCollectLevelData> >::_Self *)(v2 + 64),
          &__y) )
  {
    v5 = std::_Rb_tree_iterator<std::pair<unsigned int const,CoinCollectLevelData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,CoinCollectLevelData> > *const)(v2 + 64));
    if ( *(char *)(((unsigned __int64)&v5->second.is_have_watched_cutscene >> 3) + 0x7FFF8000) < 0 )
      v5 = (std::_Rb_tree_iterator<std::pair<unsigned int const,CoinCollectLevelData> >::pointer)__asan_report_load1(&v5->second.is_have_watched_cutscene);
    if ( !v5->second.is_have_watched_cutscene )
    {
      v6 = std::_Rb_tree_iterator<std::pair<unsigned int const,CoinCollectLevelData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,CoinCollectLevelData> > *const)(v2 + 64));
      if ( *(char *)(((unsigned __int64)&v6->second.is_have_watched_cutscene >> 3) + 0x7FFF8000) < 0 )
        v6 = (std::_Rb_tree_iterator<std::pair<unsigned int const,CoinCollectLevelData> >::pointer)__asan_report_store1(&v6->second.is_have_watched_cutscene);
      v6->second.is_have_watched_cutscene = 1;
      BaseActivity::notifyClientData((BaseActivity *const)this, 0);
    }
  }
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
};

// Line 973: range 000000001796502E-000000001796550F
void __cdecl CoinCollectActivity::onTransferGuardPlayerEnter(
        CoinCollectActivity *const this,
        const std::set<unsigned int> *entered_uid_set,
        uint32_t enter_uid,
        bool is_new_arrive)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  Scene *v7; // rax
  SceneTransferGuardComp *TransferGuardComp; // rax
  Scene *v9; // rax
  SceneTransferGuardComp *v10; // rax
  CoinCollectTransferGuardContext *v11; // rax
  bool is_pre_in_single_mp_mode; // r14
  std::set<unsigned int> *p_uid_set; // r15
  CoinCollectTransferGuardContext *v14; // rax
  Scene *v15; // rax
  SceneTransferGuardComp *v16; // rax
  int32_t ret; // [rsp+2Ch] [rbp-114h]
  common::milog::MiLogStream v19; // [rsp+30h] [rbp-110h] BYREF
  char v20[240]; // [rsp+50h] [rbp-F0h] BYREF

  v4 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 16 17 cur_scene_ptr:978 80 72 15 context_opt:992";
  *(_QWORD *)(v4 + 16) = CoinCollectActivity::onTransferGuardPlayerEnter;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61937;
  v6[536862722] = 62194;
  v6[536862724] = -218103808;
  v6[536862725] = -202116109;
  if ( is_new_arrive )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v4 + 48));
    if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v4 + 48), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/coin_collect_activity.cpp",
        "onTransferGuardPlayerEnter",
        981);
      common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
        &v19,
        (const char (*)[51])"[CoinCollect] scene is nullptr when gallery settle");
      common::milog::MiLogStream::~MiLogStream(&v19);
    }
    else
    {
      v7 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 48));
      TransferGuardComp = Scene::getTransferGuardComp(v7);
      if ( SceneTransferGuardComp::isAttachedByPlay(TransferGuardComp) )
      {
        common::milog::MiLogStream::create(
          &v19,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/coin_collect_activity.cpp",
          "onTransferGuardPlayerEnter",
          986);
        common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
          &v19,
          (const char (*)[41])"[CoinCollect] transfer guard is attached");
        common::milog::MiLogStream::~MiLogStream(&v19);
      }
      else
      {
        ret = 0;
        v9 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 48));
        v10 = Scene::getTransferGuardComp(v9);
        SceneTransferGuardComp::getTransferGuardContext<CoinCollectTransferGuardContext>(
          (std::optional<CoinCollectTransferGuardContext> *)(v4 + 80),
          v10);
        if ( !std::optional<CoinCollectTransferGuardContext>::has_value((const std::optional<CoinCollectTransferGuardContext> *const)(v4 + 80)) )
        {
          common::milog::MiLogStream::create(
            &v19,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/coin_collect_activity.cpp",
            "onTransferGuardPlayerEnter",
            995);
          common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
            &v19,
            (const char (*)[23])"[CoinCollect] no data.");
          common::milog::MiLogStream::~MiLogStream(&v19);
          ret = -1;
        }
        else
        {
          v11 = std::optional<CoinCollectTransferGuardContext>::operator->((std::optional<CoinCollectTransferGuardContext> *const)(v4 + 80));
          if ( *(char *)(((unsigned __int64)&v11->is_pre_in_single_mp_mode >> 3) + 0x7FFF8000) < 0 )
            v11 = (CoinCollectTransferGuardContext *)__asan_report_load1(&v11->is_pre_in_single_mp_mode);
          is_pre_in_single_mp_mode = v11->is_pre_in_single_mp_mode;
          p_uid_set = &std::optional<CoinCollectTransferGuardContext>::operator->((std::optional<CoinCollectTransferGuardContext> *const)(v4 + 80))->uid_set;
          v14 = std::optional<CoinCollectTransferGuardContext>::operator->((std::optional<CoinCollectTransferGuardContext> *const)(v4 + 80));
          if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          if ( (unsigned int)CoinCollectActivity::initCoinCollectPlay(
                               this,
                               v14->level_id,
                               p_uid_set,
                               is_pre_in_single_mp_mode) )
            ret = -1;
        }
        std::optional<CoinCollectTransferGuardContext>::~optional((std::optional<CoinCollectTransferGuardContext> *const)(v4 + 80));
        if ( ret )
        {
          v15 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 48));
          v16 = Scene::getTransferGuardComp(v15);
          SceneTransferGuardComp::stopTransferGuard(v16, 0);
        }
      }
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v4 + 48));
  }
  if ( v20 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1015: range 0000000017965510-0000000017965699
__int64 __fastcall CoinCollectActivity::getChooseSkillNoByLevelId(
        const CoinCollectActivity *const this,
        uint32_t level_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,CoinCollectLevelData> >::pointer v6; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,CoinCollectLevelData> >::_Self __y; // [rsp+18h] [rbp-88h] BYREF
  char v8[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 13 level_id:1014 64 8 9 iter:1016";
  *(_QWORD *)(v2 + 16) = CoinCollectActivity::getChooseSkillNoByLevelId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = level_id;
  *(std::map<unsigned int,CoinCollectLevelData>::const_iterator *)(v2 + 64) = std::map<unsigned int,CoinCollectLevelData>::find(
                                                                                &this->level_data_map_,
                                                                                (const std::map<unsigned int,CoinCollectLevelData>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,CoinCollectLevelData>::end(&this->level_data_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,CoinCollectLevelData> >::_Self *)(v2 + 64),
         &__y) )
  {
    result = 0LL;
  }
  else
  {
    v6 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,CoinCollectLevelData>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,CoinCollectLevelData> > *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v6->second.last_choose_skill_no >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v6->second.last_choose_skill_no >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    result = v6->second.last_choose_skill_no;
  }
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

// Line 1025: range 000000001796569A-0000000017965829
_BOOL8 __fastcall CoinCollectActivity::isHaveWatchedCutScene(const CoinCollectActivity *const this, uint32_t level_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  _BOOL8 result; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,CoinCollectLevelData> >::pointer v6; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,CoinCollectLevelData> >::_Self __y; // [rsp+18h] [rbp-88h] BYREF
  char v8[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 13 level_id:1024 64 8 9 iter:1026";
  *(_QWORD *)(v2 + 16) = CoinCollectActivity::isHaveWatchedCutScene;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = level_id;
  *(std::map<unsigned int,CoinCollectLevelData>::const_iterator *)(v2 + 64) = std::map<unsigned int,CoinCollectLevelData>::find(
                                                                                &this->level_data_map_,
                                                                                (const std::map<unsigned int,CoinCollectLevelData>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,CoinCollectLevelData>::end(&this->level_data_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,CoinCollectLevelData> >::_Self *)(v2 + 64),
         &__y) )
  {
    result = 0LL;
  }
  else
  {
    v6 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,CoinCollectLevelData>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,CoinCollectLevelData> > *const)(v2 + 64));
    if ( *(char *)(((unsigned __int64)&v6->second.is_have_watched_cutscene >> 3) + 0x7FFF8000) < 0 )
      v6 = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,CoinCollectLevelData> >::pointer)__asan_report_load1(&v6->second.is_have_watched_cutscene);
    result = v6->second.is_have_watched_cutscene;
  }
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

// Line 1035: range 000000001796582A-0000000017965C84
__int64 __fastcall CoinCollectActivity::getGalleryPlayGuaranteedTime(uint32_t gallery_id, uint32_t activity_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  unsigned int guaranteed_time; // [rsp+1Ch] [rbp-C4h]
  unsigned int guaranteed_timea; // [rsp+1Ch] [rbp-C4h]
  const data::GalleryExcelConfig *gallery_config_ptr; // [rsp+20h] [rbp-C0h]
  const data::CoinCollectOverallExcelConfig *overall_config_ptr; // [rsp+28h] [rbp-B8h]
  std::shared_ptr<Config> v16; // [rsp+30h] [rbp-B0h] BYREF
  common::milog::MiLogStream v17; // [rsp+40h] [rbp-A0h] BYREF
  char v18[128]; // [rsp+60h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 15 gallery_id:1034 64 4 16 activity_id:1034";
  *(_QWORD *)(v2 + 16) = CoinCollectActivity::getGalleryPlayGuaranteedTime;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  *(_DWORD *)(v2 + 48) = gallery_id;
  *(_DWORD *)(v2 + 64) = activity_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v16);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v16);
  gallery_config_ptr = data::GalleryExcelConfigMgrBase::findGalleryExcelConfig(
                         &v5->design_config.txt_config_mgr.gallery_config_mgr,
                         *(_DWORD *)(v2 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v16);
  if ( gallery_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->mp_prepare_time >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)gallery_config_ptr + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->mp_prepare_time >> 3)
                                                                        + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    guaranteed_time = SAFE_ADD<unsigned int,unsigned int>(0, gallery_config_ptr->mp_prepare_time);
    if ( *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->duration >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->duration >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    guaranteed_timea = SAFE_ADD<unsigned int,unsigned int>(guaranteed_time, gallery_config_ptr->duration);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v16);
    v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v16);
    overall_config_ptr = data::ActivityCoinCollectExcelConfigMgrBase::findCoinCollectOverallExcelConfig(
                           &v9->design_config.txt_config_mgr.activity_coin_collect_config_mgr,
                           *(_DWORD *)(v2 + 64));
    std::shared_ptr<Config>::~shared_ptr(&v16);
    if ( overall_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&overall_config_ptr->gallery_extra_time >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&overall_config_ptr->gallery_extra_time >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      result = SAFE_ADD<unsigned int,unsigned int>(guaranteed_timea, overall_config_ptr->gallery_extra_time);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/coin_collect_activity.cpp",
        "getGalleryPlayGuaranteedTime",
        1050);
      v10 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v17, (const char (*)[11])"activity: ");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 64));
      common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v11, (const char (*)[12])off_262413A0);
      common::milog::MiLogStream::~MiLogStream(&v17);
      result = 0LL;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/coin_collect_activity.cpp",
      "getGalleryPlayGuaranteedTime",
      1041);
    v6 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v17, (const char (*)[10])"gallery: ");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v7, (const char (*)[12])off_262413A0);
    common::milog::MiLogStream::~MiLogStream(&v17);
    result = 0LL;
  }
  if ( v18 == (char *)v2 )
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

// Line 1058: range 0000000017965C86-0000000017966040
__int64 __fastcall CoinCollectActivity::openCoinCollectLevel(CoinCollectActivity *const this, uint32_t level_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  bool v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  uint32_t v12; // ecx
  std::_Rb_tree_iterator<std::pair<unsigned int const,CoinCollectLevelData> >::_Self __y; // [rsp+10h] [rbp-D0h] BYREF
  CoinCollectLevelData *level_data; // [rsp+18h] [rbp-C8h]
  std::shared_ptr<Config> v15; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v16; // [rsp+30h] [rbp-B0h] BYREF
  char v17[144]; // [rsp+50h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 13 level_id:1057 64 8 20 level_data_iter:1064";
  *(_QWORD *)(v2 + 16) = CoinCollectActivity::openCoinCollectLevel;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = level_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v15);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15);
  v6 = data::ActivityCoinCollectExcelConfigMgrBase::findCoinCollectExcelConfig(
         &v5->design_config.txt_config_mgr.activity_coin_collect_config_mgr,
         *(_DWORD *)(v2 + 48)) == 0LL;
  std::shared_ptr<Config>::~shared_ptr(&v15);
  if ( v6 )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/coin_collect_activity.cpp",
      "openCoinCollectLevel",
      1061);
    v7 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
           &v16,
           (const char (*)[24])"[CoinCollect] level id ");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v8, (const char (*)[16])" does not exist");
    common::milog::MiLogStream::~MiLogStream(&v16);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    *(std::map<unsigned int,CoinCollectLevelData>::iterator *)(v2 + 64) = std::map<unsigned int,CoinCollectLevelData>::find(
                                                                            &this->level_data_map_,
                                                                            (const std::map<unsigned int,CoinCollectLevelData>::key_type *)(v2 + 48));
    __y._M_node = std::map<unsigned int,CoinCollectLevelData>::end(&this->level_data_map_)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,CoinCollectLevelData> >::_Self *)(v2 + 64),
           &__y) )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/coin_collect_activity.cpp",
        "openCoinCollectLevel",
        1067);
      v10 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v16, (const char (*)[11])"level_id: ");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
        v11,
        (const char (*)[24])" not in level_data_map_");
      common::milog::MiLogStream::~MiLogStream(&v16);
      result = 0xFFFFFFFFLL;
    }
    else
    {
      level_data = &std::_Rb_tree_iterator<std::pair<unsigned int const,CoinCollectLevelData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,CoinCollectLevelData> > *const)(v2 + 64))->second;
      v12 = *(_DWORD *)(v2 + 48);
      if ( *(_BYTE *)(((unsigned __int64)level_data >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)level_data >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(level_data);
      }
      level_data->level_id = v12;
      if ( *(_BYTE *)(((unsigned __int64)&level_data->is_level_open >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)level_data + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&level_data->is_level_open >> 3)
                                                               + 0x7FFF8000) )
      {
        __asan_report_store1(&level_data->is_level_open);
      }
      level_data->is_level_open = 1;
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

// Line 1077: range 0000000017966042-00000000179661D2
_BOOL8 __fastcall CoinCollectActivity::isLevelOpen(const CoinCollectActivity *const this, uint32_t level_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  _BOOL8 result; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,CoinCollectLevelData> >::pointer v6; // rdx
  bool *p_is_level_open; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,CoinCollectLevelData> >::_Self __y; // [rsp+18h] [rbp-88h] BYREF
  char v9[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 13 level_id:1076 64 8 9 iter:1078";
  *(_QWORD *)(v2 + 16) = CoinCollectActivity::isLevelOpen;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = level_id;
  *(std::map<unsigned int,CoinCollectLevelData>::const_iterator *)(v2 + 64) = std::map<unsigned int,CoinCollectLevelData>::find(
                                                                                &this->level_data_map_,
                                                                                (const std::map<unsigned int,CoinCollectLevelData>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,CoinCollectLevelData>::end(&this->level_data_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,CoinCollectLevelData> >::_Self *)(v2 + 64),
         &__y) )
  {
    result = 0LL;
  }
  else
  {
    v6 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,CoinCollectLevelData>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,CoinCollectLevelData> > *const)(v2 + 64));
    p_is_level_open = &v6->second.is_level_open;
    if ( *(_BYTE *)(((unsigned __int64)p_is_level_open >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_level_open & 7) >= *(_BYTE *)(((unsigned __int64)p_is_level_open >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(p_is_level_open);
    }
    result = v6->second.is_level_open;
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

// Line 1088: range 00000000179661D4-0000000017966F18
int32_t __cdecl CoinCollectActivity::setFakeLevelDataByGM(
        CoinCollectActivity *const this,
        const std::vector<unsigned int> *param_vec)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t result; // eax
  std::vector<unsigned int>::const_reference v6; // rdi
  uint32_t *v7; // rdi
  uint32_t *v8; // rdi
  uint32_t *v9; // rdi
  uint32_t *v10; // rdi
  std::_Rb_tree_iterator<std::pair<unsigned int const,CoinCollectLevelData> >::pointer v11; // rax
  uint32_t last_choose_skill_no; // esi
  int Uid; // edi
  uint32_t v14; // eax
  uint32_t v15; // eax
  CoinCollectTeamInfo *i; // rbx
  std::initializer_list<unsigned int> v17; // [rsp+40h] [rbp-210h]
  std::initializer_list<unsigned int> v18; // [rsp+50h] [rbp-200h]
  std::initializer_list<unsigned int> v19; // [rsp+60h] [rbp-1F0h]
  std::initializer_list<unsigned int> v20; // [rsp+70h] [rbp-1E0h]
  std::initializer_list<unsigned int> v21; // [rsp+80h] [rbp-1D0h]
  std::initializer_list<unsigned int> v22; // [rsp+90h] [rbp-1C0h]
  std::allocator<unsigned int> __a; // [rsp+B2h] [rbp-19Eh] BYREF
  std::allocator<unsigned int> v25; // [rsp+B3h] [rbp-19Dh] BYREF
  std::allocator<unsigned int> v26; // [rsp+B4h] [rbp-19Ch] BYREF
  std::allocator<unsigned int> v27; // [rsp+B5h] [rbp-19Bh] BYREF
  std::allocator<unsigned int> v28; // [rsp+B6h] [rbp-19Ah] BYREF
  std::allocator<unsigned int> v29; // [rsp+B7h] [rbp-199h] BYREF
  uint32_t single_coin_num; // [rsp+B8h] [rbp-198h]
  uint32_t single_coin_time; // [rsp+BCh] [rbp-194h]
  uint32_t double_coin_num; // [rsp+C0h] [rbp-190h]
  uint32_t double_coin_time; // [rsp+C4h] [rbp-18Ch]
  CoinCollectLevelData *level_data; // [rsp+C8h] [rbp-188h]
  int v35[2]; // [rsp+D0h] [rbp-180h] BYREF
  int v36[2]; // [rsp+D8h] [rbp-178h] BYREF
  __int64 v37; // [rsp+E0h] [rbp-170h] BYREF
  int v38[2]; // [rsp+E8h] [rbp-168h] BYREF
  int v39[2]; // [rsp+F0h] [rbp-160h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,CoinCollectLevelData> >::_Self __y; // [rsp+F8h] [rbp-158h] BYREF
  std::initializer_list<unsigned int> __l; // [rsp+100h] [rbp-150h] BYREF
  uint32_t v42; // [rsp+110h] [rbp-140h] BYREF
  std::vector<unsigned int> v43; // [rsp+118h] [rbp-138h] BYREF
  std::vector<unsigned int> v44; // [rsp+130h] [rbp-120h] BYREF
  bool v45; // [rsp+148h] [rbp-108h]
  uint32_t v46; // [rsp+14Ch] [rbp-104h]
  std::vector<unsigned int> v47; // [rsp+150h] [rbp-100h] BYREF
  uint32_t v48; // [rsp+168h] [rbp-E8h]
  std::vector<unsigned int> v49; // [rsp+170h] [rbp-E0h] BYREF
  std::vector<unsigned int> v50; // [rsp+188h] [rbp-C8h] BYREF
  bool v51; // [rsp+1A0h] [rbp-B0h]
  uint32_t v52; // [rsp+1A4h] [rbp-ACh]
  std::vector<unsigned int> v53; // [rsp+1A8h] [rbp-A8h] BYREF
  char v54[144]; // [rsp+1C0h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v54;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 13 level_id:1093 64 8 9 iter:1099";
  *(_QWORD *)(v2 + 16) = CoinCollectActivity::setFakeLevelDataByGM;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  if ( std::vector<unsigned int>::size(param_vec) > 4 )
  {
    v6 = std::vector<unsigned int>::operator[](param_vec, 0LL);
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 48) = *v6;
    v7 = (uint32_t *)std::vector<unsigned int>::operator[](param_vec, 1uLL);
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    single_coin_num = *v7;
    v8 = (uint32_t *)std::vector<unsigned int>::operator[](param_vec, 2uLL);
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    single_coin_time = *v8;
    v9 = (uint32_t *)std::vector<unsigned int>::operator[](param_vec, 3uLL);
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    double_coin_num = *v9;
    v10 = (uint32_t *)std::vector<unsigned int>::operator[](param_vec, 4uLL);
    if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    double_coin_time = *v10;
    *(std::map<unsigned int,CoinCollectLevelData>::iterator *)(v2 + 64) = std::map<unsigned int,CoinCollectLevelData>::find(
                                                                            &this->level_data_map_,
                                                                            (const std::map<unsigned int,CoinCollectLevelData>::key_type *)(v2 + 48));
    __y._M_node = std::map<unsigned int,CoinCollectLevelData>::end(&this->level_data_map_)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,CoinCollectLevelData> >::_Self *)(v2 + 64),
           &__y) )
    {
      result = -1;
    }
    else
    {
      v11 = std::_Rb_tree_iterator<std::pair<unsigned int const,CoinCollectLevelData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,CoinCollectLevelData> > *const)(v2 + 64));
      level_data = &v11->second;
      if ( *(_BYTE *)(((unsigned __int64)&v11->second.is_level_open >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v11 + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&v11->second.is_level_open >> 3)
                                                         + 0x7FFF8000) )
      {
        __asan_report_store1(&v11->second.is_level_open);
      }
      level_data->is_level_open = 1;
      if ( *(_BYTE *)(((unsigned __int64)&level_data->is_have_play_single_level >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)level_data - 111) & 7) >= *(_BYTE *)(((unsigned __int64)&level_data->is_have_play_single_level >> 3)
                                                                 + 0x7FFF8000) )
      {
        __asan_report_store1(&level_data->is_have_play_single_level);
      }
      level_data->is_have_play_single_level = 1;
      if ( *(_BYTE *)(((unsigned __int64)&level_data->is_have_play_double_level >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)level_data - 110) & 7) >= *(_BYTE *)(((unsigned __int64)&level_data->is_have_play_double_level >> 3)
                                                                 + 0x7FFF8000) )
      {
        __asan_report_store1(&level_data->is_have_play_double_level);
      }
      level_data->is_have_play_double_level = 1;
      if ( *(_BYTE *)(((unsigned __int64)&level_data->single_best_collect_num >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)level_data + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_data->single_best_collect_num >> 3)
                                                                  + 0x7FFF8000) )
      {
        __asan_report_store4(&level_data->single_best_collect_num);
      }
      level_data->single_best_collect_num = single_coin_num;
      if ( *(_BYTE *)(((unsigned __int64)&level_data->single_best_pass_time_ms >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&level_data->single_best_pass_time_ms >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&level_data->single_best_pass_time_ms);
      }
      level_data->single_best_pass_time_ms = single_coin_time;
      if ( *(_BYTE *)(((unsigned __int64)&level_data->double_best_collect_num >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&level_data->double_best_collect_num >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&level_data->double_best_collect_num);
      }
      level_data->double_best_collect_num = double_coin_num;
      if ( *(_BYTE *)(((unsigned __int64)&level_data->double_best_pass_time_ms >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)level_data + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_data->double_best_pass_time_ms >> 3)
                                                                   + 0x7FFF8000) )
      {
        __asan_report_store4(&level_data->double_best_pass_time_ms);
      }
      level_data->double_best_pass_time_ms = double_coin_time;
      if ( *(_BYTE *)(((unsigned __int64)&level_data->last_choose_skill_no >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&level_data->last_choose_skill_no >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      last_choose_skill_no = level_data->last_choose_skill_no;
      if ( *(_BYTE *)(((unsigned __int64)&level_data->single_best_team_info >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&level_data->single_best_team_info >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&level_data->single_best_team_info);
      }
      level_data->single_best_team_info.choose_skill_no = last_choose_skill_no;
      __l._M_array = (std::initializer_list<unsigned int>::iterator)0x98969B0098969ALL;
      __l._M_len = 0x98969E0098969DLL;
      std::vector<unsigned int>::operator=(
        &level_data->single_best_team_info.avatar_id_vec,
        (std::initializer_list<unsigned int>)__PAIR128__(4LL, &__l));
      __l._M_array = (std::initializer_list<unsigned int>::iterator)0x140000000ALL;
      __l._M_len = 0x280000001ELL;
      std::vector<unsigned int>::operator=(
        &level_data->single_best_team_info.avatar_lv_vec,
        (std::initializer_list<unsigned int>)__PAIR128__(4LL, &__l));
      if ( *(char *)(((unsigned __int64)&level_data->single_best_team_info.is_host >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&level_data->single_best_team_info.is_host);
      level_data->single_best_team_info.is_host = 1;
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Uid = Player::getUid(this->player_);
      if ( *(_BYTE *)(((unsigned __int64)&level_data->single_best_team_info.player_uid >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)level_data + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_data->single_best_team_info.player_uid >> 3)
                                                                  + 0x7FFF8000) )
      {
        Uid = (_DWORD)level_data + 84;
        __asan_report_store4(&level_data->single_best_team_info.player_uid);
      }
      level_data->single_best_team_info.player_uid = Uid;
      __l._M_array = 0LL;
      __l._M_len = 0LL;
      std::vector<unsigned int>::operator=(
        &level_data->single_best_team_info.avatar_costume_id_vec,
        (std::initializer_list<unsigned int>)__PAIR128__(4LL, &__l));
      if ( *(_BYTE *)(((unsigned __int64)&level_data->last_choose_skill_no >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&level_data->last_choose_skill_no >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      v42 = level_data->last_choose_skill_no;
      v35[0] = 10000026;
      v35[1] = 10000027;
      v17._M_array = (std::initializer_list<unsigned int>::iterator)v35;
      v17._M_len = 2LL;
      std::allocator<unsigned int>::allocator(&__a);
      std::vector<unsigned int>::vector(&v43, v17, &__a);
      v36[0] = 10;
      v36[1] = 20;
      v18._M_array = (std::initializer_list<unsigned int>::iterator)v36;
      v18._M_len = 2LL;
      std::allocator<unsigned int>::allocator(&v25);
      std::vector<unsigned int>::vector(&v44, v18, &v25);
      v45 = (double_coin_num & 1) == 0;
      if ( (double_coin_num & 1) != 0 )
      {
        v14 = 0;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v14 = Player::getUid(this->player_);
      }
      v46 = v14;
      v37 = 0LL;
      v19._M_array = (std::initializer_list<unsigned int>::iterator)&v37;
      v19._M_len = 2LL;
      std::allocator<unsigned int>::allocator(&v26);
      std::vector<unsigned int>::vector(&v47, v19, &v26);
      if ( *(_BYTE *)(((unsigned __int64)&level_data->last_choose_skill_no >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&level_data->last_choose_skill_no >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      v48 = level_data->last_choose_skill_no;
      v38[0] = 10000029;
      v38[1] = 10000030;
      v20._M_array = (std::initializer_list<unsigned int>::iterator)v38;
      v20._M_len = 2LL;
      std::allocator<unsigned int>::allocator(&v27);
      std::vector<unsigned int>::vector(&v49, v20, &v27);
      v39[0] = 30;
      v39[1] = 40;
      v21._M_array = (std::initializer_list<unsigned int>::iterator)v39;
      v21._M_len = 2LL;
      std::allocator<unsigned int>::allocator(&v28);
      std::vector<unsigned int>::vector(&v50, v21, &v28);
      v51 = (double_coin_num & 1) != 0;
      if ( (double_coin_num & 1) != 0 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v15 = Player::getUid(this->player_);
      }
      else
      {
        v15 = 0;
      }
      v52 = v15;
      __y._M_node = 0LL;
      v22._M_array = (std::initializer_list<unsigned int>::iterator)&__y;
      v22._M_len = 2LL;
      std::allocator<unsigned int>::allocator(&v29);
      std::vector<unsigned int>::vector(&v53, v22, &v29);
      std::vector<CoinCollectTeamInfo>::operator=(
        &level_data->double_best_team_info_vec,
        (std::initializer_list<CoinCollectTeamInfo>)__PAIR128__(2LL, &v42));
      for ( i = (CoinCollectTeamInfo *)v54; i != (CoinCollectTeamInfo *)&v42; CoinCollectTeamInfo::~CoinCollectTeamInfo(i) )
        --i;
      std::allocator<unsigned int>::~allocator(&v29);
      std::allocator<unsigned int>::~allocator(&v28);
      std::allocator<unsigned int>::~allocator(&v27);
      std::allocator<unsigned int>::~allocator(&v26);
      std::allocator<unsigned int>::~allocator(&v25);
      std::allocator<unsigned int>::~allocator(&__a);
      BaseActivity::notifyClientData((BaseActivity *const)this, 0);
      result = 0;
    }
  }
  else
  {
    result = -1;
  }
  if ( v54 == (char *)v2 )
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

// Line 1142: range 0000000017966F1A-00000000179672D1
__int64 __fastcall CoinCollectActivity::setLevelOpenStateByGM(
        CoinCollectActivity *const this,
        uint32_t level_id,
        uint32_t is_open)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // rbx
  unsigned int v6; // r14d
  uint32_t v7; // ecx
  uint32_t v8; // ecx
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,CoinCollectLevelData> >::_Self __y; // [rsp+10h] [rbp-220h] BYREF
  CoinCollectLevelData *level_data; // [rsp+18h] [rbp-218h]
  CoinCollectLevelData v13; // [rsp+20h] [rbp-210h] BYREF
  char v14[368]; // [rsp+C0h] [rbp-170h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(320LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 13 level_id:1141 64 8 9 iter:1144 96 152 19 old_level_data:1150";
  *(_QWORD *)(v3 + 16) = CoinCollectActivity::setLevelOpenStateByGM;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862727] = -218103808;
  v5[536862728] = -202116109;
  v5[536862729] = -202116109;
  *(_DWORD *)(v3 + 48) = level_id;
  *(std::map<unsigned int,CoinCollectLevelData>::iterator *)(v3 + 64) = std::map<unsigned int,CoinCollectLevelData>::find(
                                                                          &this->level_data_map_,
                                                                          (const std::map<unsigned int,CoinCollectLevelData>::key_type *)(v3 + 48));
  __y._M_node = std::map<unsigned int,CoinCollectLevelData>::end(&this->level_data_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,CoinCollectLevelData> >::_Self *)(v3 + 64),
         &__y) )
  {
    v6 = -1;
  }
  else
  {
    level_data = &std::_Rb_tree_iterator<std::pair<unsigned int const,CoinCollectLevelData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,CoinCollectLevelData> > *const)(v3 + 64))->second;
    CoinCollectLevelData::CoinCollectLevelData((CoinCollectLevelData *const)(v3 + 96), level_data);
    memset(&v13, 0, sizeof(v13));
    CoinCollectLevelData::CoinCollectLevelData(&v13);
    CoinCollectLevelData::operator=(level_data, &v13);
    CoinCollectLevelData::~CoinCollectLevelData(&v13);
    v7 = *(_DWORD *)(v3 + 96);
    if ( *(_BYTE *)(((unsigned __int64)level_data >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)level_data >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(level_data);
    }
    level_data->level_id = v7;
    v8 = *(_DWORD *)(v3 + 104);
    if ( *(_BYTE *)(((unsigned __int64)&level_data->last_choose_skill_no >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&level_data->last_choose_skill_no >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&level_data->last_choose_skill_no);
    }
    level_data->last_choose_skill_no = v8;
    if ( is_open )
    {
      if ( *(_BYTE *)(((unsigned __int64)&level_data->is_level_open >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)level_data + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&level_data->is_level_open >> 3)
                                                               + 0x7FFF8000) )
      {
        __asan_report_store1(&level_data->is_level_open);
      }
      level_data->is_level_open = 1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&level_data->is_level_open >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)level_data + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&level_data->is_level_open >> 3)
                                                               + 0x7FFF8000) )
      {
        __asan_report_store1(&level_data->is_level_open);
      }
      level_data->is_level_open = 0;
    }
    BaseActivity::notifyClientData((BaseActivity *const)this, 0);
    v6 = 0;
    CoinCollectLevelData::~CoinCollectLevelData((CoinCollectLevelData *const)(v3 + 96));
  }
  result = v6;
  if ( v14 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF801C) = 0LL;
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
