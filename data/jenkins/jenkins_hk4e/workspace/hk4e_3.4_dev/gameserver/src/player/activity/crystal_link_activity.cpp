// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/crystal_link_activity.cpp

// Line 36: range 00000000165A61EE-00000000165A62C3
int32_t __cdecl CrystalLinkAvatarData::toBin(const CrystalLinkAvatarData *const this, proto::CrystalLinkAvatarBin *bin)
{
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(this);
  proto::CrystalLinkAvatarBin::set_is_trial(bin, this->is_trial);
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_id >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  proto::CrystalLinkAvatarBin::set_avatar_id(bin, this->avatar_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->in_dungeon_guid >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  proto::CrystalLinkAvatarBin::set_in_dungeon_guid(bin, this->in_dungeon_guid);
  return 0;
};

// Line 44: range 00000000165A62C4-00000000165A6390
int32_t __cdecl CrystalLinkAvatarData::fromBin(
        CrystalLinkAvatarData *const this,
        const proto::CrystalLinkAvatarBin *bin)
{
  bool is_trial; // dl
  uint64_t v3; // rax
  uint64_t v4; // rax

  is_trial = proto::CrystalLinkAvatarBin::is_trial(bin);
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(this);
  this->is_trial = is_trial;
  v3 = proto::CrystalLinkAvatarBin::avatar_id(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_id >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->avatar_id);
  this->avatar_id = v3;
  v4 = proto::CrystalLinkAvatarBin::in_dungeon_guid(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->in_dungeon_guid >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->in_dungeon_guid);
  this->in_dungeon_guid = v4;
  return 0;
};

// Line 52: range 00000000165A6392-00000000165A642B
int32_t __cdecl CrystalLinkAvatarData::toClient(
        const CrystalLinkAvatarData *const this,
        proto::CrystalLinkAvatarInfo *info)
{
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(this);
  proto::CrystalLinkAvatarInfo::set_is_trial(info, this->is_trial);
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_id >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  proto::CrystalLinkAvatarInfo::set_avatar_id(info, this->avatar_id);
  return 0;
};

// Line 59: range 00000000165A642C-00000000165A64F0
int32_t __cdecl CrystalLinkAvatarData::fromClient(
        CrystalLinkAvatarData *const this,
        const proto::CrystalLinkAvatarInfo *info)
{
  bool is_trial; // dl
  uint64_t v3; // rax

  is_trial = proto::CrystalLinkAvatarInfo::is_trial(info);
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(this);
  this->is_trial = is_trial;
  v3 = proto::CrystalLinkAvatarInfo::avatar_id(info);
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_id >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->avatar_id);
  this->avatar_id = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->in_dungeon_guid >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->in_dungeon_guid);
  this->in_dungeon_guid = 0LL;
  return 0;
};

// Line 67: range 00000000165A64F2-00000000165A65A3
int32_t __cdecl CrystalLinkBuffData::toBin(const CrystalLinkBuffData *const this, proto::CrystalLinkBuffBin *bin)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::CrystalLinkBuffBin::set_cond_buff_id(bin, this->cond_buff_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->effect_buff_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->effect_buff_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::CrystalLinkBuffBin::set_effect_buff_id(bin, this->effect_buff_id);
  return 0;
};

// Line 74: range 00000000165A65A4-00000000165A6657
int32_t __cdecl CrystalLinkBuffData::fromBin(CrystalLinkBuffData *const this, const proto::CrystalLinkBuffBin *bin)
{
  uint32_t v2; // ecx
  uint32_t v3; // ecx

  v2 = proto::CrystalLinkBuffBin::cond_buff_id(bin);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->cond_buff_id = v2;
  v3 = proto::CrystalLinkBuffBin::effect_buff_id(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->effect_buff_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->effect_buff_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->effect_buff_id);
  }
  this->effect_buff_id = v3;
  return 0;
};

// Line 81: range 00000000165A6658-00000000165A6709
int32_t __cdecl CrystalLinkBuffData::toClient(const CrystalLinkBuffData *const this, proto::CrystalLinkBuffInfo *info)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::CrystalLinkBuffInfo::set_cond_buff_id(info, this->cond_buff_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->effect_buff_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->effect_buff_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::CrystalLinkBuffInfo::set_effect_buff_id(info, this->effect_buff_id);
  return 0;
};

// Line 88: range 00000000165A670A-00000000165A67BD
int32_t __cdecl CrystalLinkBuffData::fromClient(
        CrystalLinkBuffData *const this,
        const proto::CrystalLinkBuffInfo *info)
{
  uint32_t v2; // ecx
  uint32_t v3; // ecx

  v2 = proto::CrystalLinkBuffInfo::cond_buff_id(info);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->cond_buff_id = v2;
  v3 = proto::CrystalLinkBuffInfo::effect_buff_id(info);
  if ( *(_BYTE *)(((unsigned __int64)&this->effect_buff_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->effect_buff_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->effect_buff_id);
  }
  this->effect_buff_id = v3;
  return 0;
};

// Line 95: range 00000000165A67BE-00000000165A684E
int32_t __cdecl CrystalLinkTeamData::toBin(const CrystalLinkTeamData *const this, proto::CrystalLinkTeamBin *bin)
{
  google::protobuf::RepeatedPtrField<proto::CrystalLinkAvatarBin> *v2; // rsi
  google::protobuf::RepeatedPtrField<proto::CrystalLinkBuffBin> *v3; // rax

  v2 = proto::CrystalLinkTeamBin::mutable_avatar_bin_list(bin);
  common::tools::MiscUtils::vectorToRepeated<CrystalLinkAvatarData,proto::CrystalLinkAvatarBin,int (CrystalLinkAvatarData::*)(proto::CrystalLinkAvatarBin&)const>(
    &this->avatar_data_vec,
    v2,
    (int (*)(const CrystalLinkAvatarData *, proto::CrystalLinkAvatarBin *))CrystalLinkAvatarData::toBin);
  v3 = proto::CrystalLinkTeamBin::mutable_buff_bin_list(bin);
  common::tools::MiscUtils::vectorToRepeated<CrystalLinkBuffData,proto::CrystalLinkBuffBin,int (CrystalLinkBuffData::*)(proto::CrystalLinkBuffBin&)const>(
    &this->buff_data_vec,
    v3,
    (int (*)(const CrystalLinkBuffData *, proto::CrystalLinkBuffBin *))CrystalLinkBuffData::toBin);
  return 0;
};

// Line 102: range 00000000165A6850-00000000165A68FE
int32_t __cdecl CrystalLinkTeamData::fromBin(CrystalLinkTeamData *const this, const proto::CrystalLinkTeamBin *bin)
{
  const google::protobuf::RepeatedPtrField<proto::CrystalLinkAvatarBin> *v2; // rax
  const google::protobuf::RepeatedPtrField<proto::CrystalLinkBuffBin> *v3; // rax

  std::vector<CrystalLinkAvatarData>::clear(&this->avatar_data_vec);
  std::vector<CrystalLinkBuffData>::clear(&this->buff_data_vec);
  v2 = proto::CrystalLinkTeamBin::avatar_bin_list(bin);
  common::tools::MiscUtils::repeatedToVector<CrystalLinkAvatarData,proto::CrystalLinkAvatarBin,int (CrystalLinkAvatarData::*)(proto::CrystalLinkAvatarBin const&)>(
    v2,
    &this->avatar_data_vec,
    (int (*)(CrystalLinkAvatarData *, const proto::CrystalLinkAvatarBin *))CrystalLinkAvatarData::fromBin);
  v3 = proto::CrystalLinkTeamBin::buff_bin_list(bin);
  common::tools::MiscUtils::repeatedToVector<CrystalLinkBuffData,proto::CrystalLinkBuffBin,int (CrystalLinkBuffData::*)(proto::CrystalLinkBuffBin const&)>(
    v3,
    &this->buff_data_vec,
    (int (*)(CrystalLinkBuffData *, const proto::CrystalLinkBuffBin *))CrystalLinkBuffData::fromBin);
  return 0;
};

// Line 111: range 00000000165A6900-00000000165A6990
int32_t __cdecl CrystalLinkTeamData::toClient(const CrystalLinkTeamData *const this, proto::CrystalLinkTeamInfo *info)
{
  google::protobuf::RepeatedPtrField<proto::CrystalLinkAvatarInfo> *v2; // rsi
  google::protobuf::RepeatedPtrField<proto::CrystalLinkBuffInfo> *v3; // rax

  v2 = proto::CrystalLinkTeamInfo::mutable_avatar_info_list(info);
  common::tools::MiscUtils::vectorToRepeated<CrystalLinkAvatarData,proto::CrystalLinkAvatarInfo,int (CrystalLinkAvatarData::*)(proto::CrystalLinkAvatarInfo&)const>(
    &this->avatar_data_vec,
    v2,
    (int (*)(const CrystalLinkAvatarData *, proto::CrystalLinkAvatarInfo *))CrystalLinkAvatarData::toClient);
  v3 = proto::CrystalLinkTeamInfo::mutable_buff_info_list(info);
  common::tools::MiscUtils::vectorToRepeated<CrystalLinkBuffData,proto::CrystalLinkBuffInfo,int (CrystalLinkBuffData::*)(proto::CrystalLinkBuffInfo&)const>(
    &this->buff_data_vec,
    v3,
    (int (*)(const CrystalLinkBuffData *, proto::CrystalLinkBuffInfo *))CrystalLinkBuffData::toClient);
  return 0;
};

// Line 118: range 00000000165A6992-00000000165A6A40
int32_t __cdecl CrystalLinkTeamData::fromClient(
        CrystalLinkTeamData *const this,
        const proto::CrystalLinkTeamInfo *info)
{
  const google::protobuf::RepeatedPtrField<proto::CrystalLinkAvatarInfo> *v2; // rax
  const google::protobuf::RepeatedPtrField<proto::CrystalLinkBuffInfo> *v3; // rax

  std::vector<CrystalLinkAvatarData>::clear(&this->avatar_data_vec);
  std::vector<CrystalLinkBuffData>::clear(&this->buff_data_vec);
  v2 = proto::CrystalLinkTeamInfo::avatar_info_list(info);
  common::tools::MiscUtils::repeatedToVector<CrystalLinkAvatarData,proto::CrystalLinkAvatarInfo,int (CrystalLinkAvatarData::*)(proto::CrystalLinkAvatarInfo const&)>(
    v2,
    &this->avatar_data_vec,
    (int (*)(CrystalLinkAvatarData *, const proto::CrystalLinkAvatarInfo *))CrystalLinkAvatarData::fromClient);
  v3 = proto::CrystalLinkTeamInfo::buff_info_list(info);
  common::tools::MiscUtils::repeatedToVector<CrystalLinkBuffData,proto::CrystalLinkBuffInfo,int (CrystalLinkBuffData::*)(proto::CrystalLinkBuffInfo const&)>(
    v3,
    &this->buff_data_vec,
    (int (*)(CrystalLinkBuffData *, const proto::CrystalLinkBuffInfo *))CrystalLinkBuffData::fromClient);
  return 0;
};

// Line 127: range 00000000165A6A42-00000000165A6B75
int32_t __cdecl CrystalLinkLevelData::toBin(const CrystalLinkLevelData *const this, proto::CrystalLinkLevelBin *bin)
{
  google::protobuf::RepeatedPtrField<proto::CrystalLinkTeamBin> *v2; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::CrystalLinkLevelBin::set_level_id(bin, this->level_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_open);
  }
  proto::CrystalLinkLevelBin::set_is_open(bin, this->is_open);
  if ( *(_BYTE *)(((unsigned __int64)&this->best_score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->best_score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::CrystalLinkLevelBin::set_best_score(bin, this->best_score);
  v2 = proto::CrystalLinkLevelBin::mutable_team_bin_list(bin);
  common::tools::MiscUtils::vectorToRepeated<CrystalLinkTeamData,proto::CrystalLinkTeamBin,int (CrystalLinkTeamData::*)(proto::CrystalLinkTeamBin&)const>(
    &this->team_data_vec,
    v2,
    (int (*)(const CrystalLinkTeamData *, proto::CrystalLinkTeamBin *))CrystalLinkTeamData::toBin);
  return 0;
};

// Line 136: range 00000000165A6B76-00000000165A6DDF
int32_t __cdecl CrystalLinkLevelData::fromBin(CrystalLinkLevelData *const this, const proto::CrystalLinkLevelBin *bin)
{
  uint32_t v2; // edx
  bool is_open; // cl
  uint32_t v4; // edx
  const google::protobuf::RepeatedPtrField<proto::CrystalLinkTeamBin> *v5; // rax
  std::vector<CrystalLinkTeamData>::iterator __for_begin; // [rsp+10h] [rbp-60h] BYREF
  std::vector<CrystalLinkTeamData>::iterator __for_end; // [rsp+18h] [rbp-58h] BYREF
  std::vector<CrystalLinkAvatarData>::const_iterator __for_begin_0; // [rsp+20h] [rbp-50h] BYREF
  std::vector<CrystalLinkAvatarData>::const_iterator __for_end_0; // [rsp+28h] [rbp-48h] BYREF
  std::vector<CrystalLinkTeamData> *__for_range; // [rsp+30h] [rbp-40h]
  const CrystalLinkTeamData *team_data; // [rsp+38h] [rbp-38h]
  const std::vector<CrystalLinkAvatarData> *__for_range_0; // [rsp+40h] [rbp-30h]
  const CrystalLinkAvatarData *avatar_data; // [rsp+48h] [rbp-28h]

  v2 = proto::CrystalLinkLevelBin::level_id(bin);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->level_id = v2;
  is_open = proto::CrystalLinkLevelBin::is_open(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_open);
  }
  this->is_open = is_open;
  v4 = proto::CrystalLinkLevelBin::best_score(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->best_score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->best_score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->best_score);
  }
  this->best_score = v4;
  std::vector<CrystalLinkTeamData>::clear(&this->team_data_vec);
  v5 = proto::CrystalLinkLevelBin::team_bin_list(bin);
  common::tools::MiscUtils::repeatedToVector<CrystalLinkTeamData,proto::CrystalLinkTeamBin,int (CrystalLinkTeamData::*)(proto::CrystalLinkTeamBin const&)>(
    v5,
    &this->team_data_vec,
    (int (*)(CrystalLinkTeamData *, const proto::CrystalLinkTeamBin *))CrystalLinkTeamData::fromBin);
  std::vector<unsigned long>::clear(&this->in_dungeon_avatar_guid_vec);
  __for_range = &this->team_data_vec;
  __for_begin._M_current = std::vector<CrystalLinkTeamData>::begin(&this->team_data_vec)._M_current;
  __for_end._M_current = std::vector<CrystalLinkTeamData>::end(&this->team_data_vec)._M_current;
  while ( __gnu_cxx::operator!=<CrystalLinkTeamData *,std::vector<CrystalLinkTeamData>>(&__for_begin, &__for_end) )
  {
    team_data = __gnu_cxx::__normal_iterator<CrystalLinkTeamData *,std::vector<CrystalLinkTeamData>>::operator*(&__for_begin);
    __for_range_0 = &team_data->avatar_data_vec;
    __for_begin_0._M_current = std::vector<CrystalLinkAvatarData>::begin(&team_data->avatar_data_vec)._M_current;
    __for_end_0._M_current = std::vector<CrystalLinkAvatarData>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<CrystalLinkAvatarData const*,std::vector<CrystalLinkAvatarData>>(
              &__for_begin_0,
              &__for_end_0) )
    {
      avatar_data = __gnu_cxx::__normal_iterator<CrystalLinkAvatarData const*,std::vector<CrystalLinkAvatarData>>::operator*(&__for_begin_0);
      if ( *(_BYTE *)(((unsigned __int64)&avatar_data->in_dungeon_guid >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( avatar_data->in_dungeon_guid )
        std::vector<unsigned long>::push_back(&this->in_dungeon_avatar_guid_vec, &avatar_data->in_dungeon_guid);
      __gnu_cxx::__normal_iterator<CrystalLinkAvatarData const*,std::vector<CrystalLinkAvatarData>>::operator++(&__for_begin_0);
    }
    __gnu_cxx::__normal_iterator<CrystalLinkTeamData *,std::vector<CrystalLinkTeamData>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 158: range 00000000165A6DE0-00000000165A6F13
int32_t __cdecl CrystalLinkLevelData::toClient(
        const CrystalLinkLevelData *const this,
        proto::CrystalLinkLevelInfo *info)
{
  google::protobuf::RepeatedPtrField<proto::CrystalLinkTeamInfo> *v2; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::CrystalLinkLevelInfo::set_level_id(info, this->level_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_open);
  }
  proto::CrystalLinkLevelInfo::set_is_open(info, this->is_open);
  if ( *(_BYTE *)(((unsigned __int64)&this->best_score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->best_score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::CrystalLinkLevelInfo::set_best_score(info, this->best_score);
  v2 = proto::CrystalLinkLevelInfo::mutable_team_info_list(info);
  common::tools::MiscUtils::vectorToRepeated<CrystalLinkTeamData,proto::CrystalLinkTeamInfo,int (CrystalLinkTeamData::*)(proto::CrystalLinkTeamInfo&)const>(
    &this->team_data_vec,
    v2,
    (int (*)(const CrystalLinkTeamData *, proto::CrystalLinkTeamInfo *))CrystalLinkTeamData::toClient);
  return 0;
};

// Line 167: range 00000000165A6F14-00000000165A72B2
int32_t __cdecl CrystalLinkActivity::fromScheduleBin(
        CrystalLinkActivity *const this,
        const proto::ActivityScheduleBin *bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  CrystalLinkLevelData *v5; // r15
  unsigned int *v6; // rcx
  CrystalLinkLevelData *v7; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,CrystalLinkLevelData> >,bool> v8; // rax
  common::milog::MiLogStream *v9; // r14
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  uint32_t v12; // edx
  int32_t result; // eax
  unsigned int val; // [rsp+20h] [rbp-100h] BYREF
  unsigned int Uid; // [rsp+24h] [rbp-FCh] BYREF
  google::protobuf::RepeatedPtrField<proto::CrystalLinkLevelBin>::const_iterator __for_begin; // [rsp+28h] [rbp-F8h] BYREF
  google::protobuf::RepeatedPtrField<proto::CrystalLinkLevelBin>::const_iterator __for_end; // [rsp+30h] [rbp-F0h] BYREF
  const proto::CrystalLinkScheduleBin *schedule_bin; // [rsp+38h] [rbp-E8h]
  const google::protobuf::RepeatedPtrField<proto::CrystalLinkLevelBin> *__for_range; // [rsp+40h] [rbp-E0h]
  const proto::CrystalLinkLevelBin *level_bin; // [rsp+48h] [rbp-D8h]
  common::milog::MiLogStream v21; // [rsp+50h] [rbp-D0h] BYREF
  char v22[176]; // [rsp+70h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 64 14 level_data:172";
  *(_QWORD *)(v2 + 16) = CrystalLinkActivity::fromScheduleBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450892) = -202116109;
  schedule_bin = proto::ActivityScheduleBin::crystal_link_bin(bin);
  std::map<unsigned int,CrystalLinkLevelData>::clear(&this->level_data_map_);
  __for_range = proto::CrystalLinkScheduleBin::level_bin_list(schedule_bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::CrystalLinkLevelBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::CrystalLinkLevelBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::CrystalLinkLevelBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    level_bin = google::protobuf::internal::RepeatedPtrIterator<proto::CrystalLinkLevelBin const>::operator*(&__for_begin);
    CrystalLinkLevelData::CrystalLinkLevelData((CrystalLinkLevelData *const)(v2 + 32));
    CrystalLinkLevelData::fromBin((CrystalLinkLevelData *const)(v2 + 32), level_bin);
    v5 = std::move<CrystalLinkLevelData &>((CrystalLinkLevelData *)(v2 + 32));
    Uid = proto::CrystalLinkLevelBin::level_id(level_bin);
    v8 = std::map<unsigned int,CrystalLinkLevelData>::emplace<unsigned int,CrystalLinkLevelData>(
           &this->level_data_map_,
           &Uid,
           v5,
           v6,
           v7);
    if ( !v8.second )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/crystal_link_activity.cpp",
        "fromScheduleBin",
        176);
      v9 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
             &v21,
             (const char (*)[35])"[CRYSTAL_LINK] duplicate level_id:");
      val = proto::CrystalLinkLevelBin::level_id(level_bin);
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
      v11 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v10, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Uid = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &Uid);
      common::milog::MiLogStream::~MiLogStream(&v21);
    }
    CrystalLinkLevelData::~CrystalLinkLevelData((CrystalLinkLevelData *const)(v2 + 32));
    google::protobuf::internal::RepeatedPtrIterator<proto::CrystalLinkLevelBin const>::operator++(&__for_begin);
  }
  v12 = proto::CrystalLinkScheduleBin::difficulty_id(schedule_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->difficulty_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->difficulty_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->difficulty_id_);
  }
  this->difficulty_id_ = v12;
  result = 0;
  if ( v22 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 184: range 00000000165A72B4-00000000165A73C8
int32_t __cdecl CrystalLinkActivity::toScheduleBin(
        const CrystalLinkActivity *const this,
        proto::ActivityScheduleBin *bin)
{
  proto::CrystalLinkLevelBin *v2; // rax
  std::map<unsigned int,CrystalLinkLevelData>::const_iterator __for_begin; // [rsp+18h] [rbp-38h] BYREF
  std::map<unsigned int,CrystalLinkLevelData>::const_iterator __for_end; // [rsp+20h] [rbp-30h] BYREF
  proto::CrystalLinkScheduleBin *schedule_bin; // [rsp+28h] [rbp-28h]
  const std::map<unsigned int,CrystalLinkLevelData> *__for_range; // [rsp+30h] [rbp-20h]
  const std::pair<unsigned int const,CrystalLinkLevelData> *v8; // [rsp+38h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,CrystalLinkLevelData> >::type *_; // [rsp+40h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,CrystalLinkLevelData> >::type *level_data; // [rsp+48h] [rbp-8h]

  schedule_bin = proto::ActivityScheduleBin::mutable_crystal_link_bin(bin);
  __for_range = &this->level_data_map_;
  __for_begin._M_node = std::map<unsigned int,CrystalLinkLevelData>::begin(&this->level_data_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,CrystalLinkLevelData>::end(&this->level_data_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v8 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,CrystalLinkLevelData>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,CrystalLinkLevelData>(v8);
    level_data = (std::tuple_element<1,const std::pair<unsigned int const,CrystalLinkLevelData> >::type *)std::get<1ul,unsigned int const,CrystalLinkLevelData>(v8);
    v2 = proto::CrystalLinkScheduleBin::add_level_bin_list(schedule_bin);
    CrystalLinkLevelData::toBin(level_data, v2);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,CrystalLinkLevelData>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->difficulty_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->difficulty_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::CrystalLinkScheduleBin::set_difficulty_id(schedule_bin, this->difficulty_id_);
  return 0;
};

// Line 195: range 00000000165A73CA-00000000165A75C1
int32_t __cdecl CrystalLinkActivity::toClient(CrystalLinkActivity *const this, proto::ActivityInfo *activity_info)
{
  common::milog::MiLogStream *v2; // rbx
  proto::CrystalLinkLevelInfo *v4; // rax
  unsigned int val; // [rsp+14h] [rbp-6Ch] BYREF
  std::map<unsigned int,CrystalLinkLevelData>::iterator __for_begin; // [rsp+18h] [rbp-68h] BYREF
  std::map<unsigned int,CrystalLinkLevelData>::iterator __for_end; // [rsp+20h] [rbp-60h] BYREF
  proto::CrystalLinkActivityDetailInfo *client_info; // [rsp+28h] [rbp-58h]
  std::map<unsigned int,CrystalLinkLevelData> *__for_range; // [rsp+30h] [rbp-50h]
  const std::pair<unsigned int const,CrystalLinkLevelData> *v10; // [rsp+38h] [rbp-48h]
  std::tuple_element<0,const std::pair<unsigned int const,CrystalLinkLevelData> >::type *_; // [rsp+40h] [rbp-40h]
  std::tuple_element<1,const std::pair<unsigned int const,CrystalLinkLevelData> >::type *level_data; // [rsp+48h] [rbp-38h]
  common::milog::MiLogStream v13; // [rsp+50h] [rbp-30h] BYREF

  if ( BaseActivity::toClient(this, activity_info) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/crystal_link_activity.cpp",
      "toClient",
      198);
    v2 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
           &v13,
           (const char (*)[51])"[CRYSTAL_LINK] BaseActivity::toClient fails, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    return -1;
  }
  else
  {
    client_info = proto::ActivityInfo::mutable_crystal_link_info(activity_info);
    __for_range = &this->level_data_map_;
    __for_begin._M_node = std::map<unsigned int,CrystalLinkLevelData>::begin(&this->level_data_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,CrystalLinkLevelData>::end(&this->level_data_map_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v10 = std::_Rb_tree_iterator<std::pair<unsigned int const,CrystalLinkLevelData>>::operator*(&__for_begin);
      _ = std::get<0ul,unsigned int const,CrystalLinkLevelData>(v10);
      level_data = (std::tuple_element<1,const std::pair<unsigned int const,CrystalLinkLevelData> >::type *)std::get<1ul,unsigned int const,CrystalLinkLevelData>(v10);
      v4 = proto::CrystalLinkActivityDetailInfo::add_level_info_list(client_info);
      CrystalLinkLevelData::toClient(level_data, v4);
      std::_Rb_tree_iterator<std::pair<unsigned int const,CrystalLinkLevelData>>::operator++(&__for_begin);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->difficulty_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->difficulty_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::CrystalLinkActivityDetailInfo::set_difficulty_id(client_info, this->difficulty_id_);
    return 0;
  }
};

// Line 211: range 00000000165A75C2-00000000165A7624
void __cdecl CrystalLinkActivity::onLogin(CrystalLinkActivity *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( !Player::isRelogin(this->player_) )
    CrystalLinkActivity::checkAndRecallDungeonAvatars(this);
  BaseActivity::onLogin(this);
};

// Line 220: range 00000000165A7626-00000000165A767C
int32_t __cdecl CrystalLinkActivity::init(CrystalLinkActivity *const this)
{
  if ( BaseActivity::isOpening(this, 0) && !BaseActivity::isSettled(this) )
    CrystalLinkActivity::registerObserver(this);
  return 0;
};

// Line 231: range 00000000165A767E-00000000165A7D98
void __cdecl CrystalLinkActivity::onPreStart(CrystalLinkActivity *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  ActivityCrystalLinkExcelConfigMgr *p_activity_crystal_link_config_mgr; // rcx
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rbx
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v8; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  CrystalLinkLevelData *v13; // rax
  unsigned int *v14; // rcx
  CrystalLinkLevelData *v15; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,CrystalLinkLevelData> >,bool> v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // r14
  common::milog::MiLogStream *v20; // rbx
  unsigned int val; // [rsp+14h] [rbp-12Ch] BYREF
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-128h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-120h] BYREF
  const std::vector<unsigned int> *level_id_vec_ptr; // [rsp+28h] [rbp-118h]
  const std::vector<unsigned int> *__for_range; // [rsp+30h] [rbp-110h]
  const data::ActivityCrystalLinkLevelExcelConfig *level_config_ptr; // [rsp+38h] [rbp-108h]
  std::shared_ptr<Config> v27; // [rsp+40h] [rbp-100h] BYREF
  common::milog::MiLogStream v28; // [rsp+50h] [rbp-F0h] BYREF
  char v29[208]; // [rsp+70h] [rbp-D0h] BYREF

  v1 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 12 level_id:240 64 64 14 level_data:248";
  *(_QWORD *)(v1 + 16) = CrystalLinkActivity::onPreStart;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862724] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v27);
  p_activity_crystal_link_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v27)->design_config.txt_config_mgr.activity_crystal_link_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  level_id_vec_ptr = ActivityCrystalLinkExcelConfigMgr::findScheduleLevelIdVec(
                       p_activity_crystal_link_config_mgr,
                       this->schedule_id_);
  std::shared_ptr<Config>::~shared_ptr(&v27);
  if ( level_id_vec_ptr )
  {
    std::map<unsigned int,CrystalLinkLevelData>::clear(&this->level_data_map_);
    __for_range = level_id_vec_ptr;
    __for_begin._M_current = std::vector<unsigned int>::begin(level_id_vec_ptr)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(level_id_vec_ptr)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v8 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v1 + 48) = *v8;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v27);
      v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v27);
      level_config_ptr = data::ActivityCrystalLinkExcelConfigMgrBase::findActivityCrystalLinkLevelExcelConfig(
                           &v9->design_config.txt_config_mgr.activity_crystal_link_config_mgr,
                           *(_DWORD *)(v1 + 48));
      std::shared_ptr<Config>::~shared_ptr(&v27);
      if ( level_config_ptr )
      {
        CrystalLinkLevelData::CrystalLinkLevelData((CrystalLinkLevelData *const)(v1 + 64));
        *(_DWORD *)(v1 + 64) = *(_DWORD *)(v1 + 48);
        v13 = std::move<CrystalLinkLevelData &>((CrystalLinkLevelData *)(v1 + 64));
        v16 = std::map<unsigned int,CrystalLinkLevelData>::emplace<unsigned int &,CrystalLinkLevelData>(
                &this->level_data_map_,
                (unsigned int *)(v1 + 48),
                v13,
                v14,
                v15);
        if ( !v16.second )
        {
          common::milog::MiLogStream::create(
            &v28,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/activity/crystal_link_activity.cpp",
            "onPreStart",
            252);
          v17 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                  &v28,
                  (const char (*)[36])"[CRYSTAL_LINK] duplicated level_id:");
          v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v17,
                  (const unsigned int *)(v1 + 48));
          v19 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v18, (const char (*)[6])" uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &val);
          common::milog::MiLogStream::~MiLogStream(&v28);
        }
        CrystalLinkLevelData::~CrystalLinkLevelData((CrystalLinkLevelData *const)(v1 + 64));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v28,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/crystal_link_activity.cpp",
          "onPreStart",
          245);
        v10 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                &v28,
                (const char (*)[49])"[CRYSTAL_LINK] level_config not found, level_id:");
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v10,
                (const unsigned int *)(v1 + 48));
        v12 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v11, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
        common::milog::MiLogStream::~MiLogStream(&v28);
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/crystal_link_activity.cpp",
      "onPreStart",
      255);
    v20 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
            &v28,
            (const char (*)[32])"[CRYSTAL_LINK] onPreStart, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &val);
    common::milog::MiLogStream::~MiLogStream(&v28);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/crystal_link_activity.cpp",
      "onPreStart",
      236);
    v5 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
           &v28,
           (const char (*)[57])"[CRYSTAL_LINK] findScheduleLevelIdVec fail, schedule_id:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->schedule_id_);
    v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v6, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v28);
  }
  if ( v29 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 259: range 00000000165A7D9A-00000000165A7DB4
void __cdecl CrystalLinkActivity::onStart(CrystalLinkActivity *const this)
{
  CrystalLinkActivity::registerObserver(this);
};

// Line 264: range 00000000165A7DB6-00000000165A7E19
void __cdecl CrystalLinkActivity::onClear(CrystalLinkActivity *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->difficulty_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->difficulty_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->difficulty_id_);
  }
  this->difficulty_id_ = 0;
  std::map<unsigned int,CrystalLinkLevelData>::clear(&this->level_data_map_);
};

// Line 270: range 00000000165A7E1A-00000000165A82AF
int32_t __cdecl CrystalLinkActivity::execAction(
        CrystalLinkActivity *const this,
        const data::NewActivityExec *action_exec)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t result; // eax
  const std::string *v9; // rax
  common::milog::MiLogStream *v10; // r13
  const std::string *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r13
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  unsigned int Uid; // [rsp+14h] [rbp-8Ch] BYREF
  unsigned __int64 val; // [rsp+18h] [rbp-88h] BYREF
  common::milog::MiLogStream v18; // [rsp+20h] [rbp-80h] BYREF
  char v19[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 level_id:280";
  *(_QWORD *)(v2 + 16) = CrystalLinkActivity::execAction;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( action_exec->type == NEW_ACTIVITY_ACTION_OPEN_CRYSTAL_LINK_LEVEL )
  {
    if ( std::vector<std::string>::size(&action_exec->param) )
    {
      *(_DWORD *)(v2 + 32) = 0;
      v9 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
      if ( common::tools::StringUtils::strToNum<unsigned int>(v9, (unsigned int *)(v2 + 32), 1) )
      {
        common::milog::MiLogStream::create(
          &v18,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/crystal_link_activity.cpp",
          "execAction",
          283);
        v10 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v18,
                (const char (*)[25])"[CRYSTAL_LINK] strToNum ");
        v11 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
        v12 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, v11);
        v13 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v12, (const char (*)[14])" failed, uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
      }
      else
      {
        if ( !CrystalLinkActivity::openLevel(this, *(_DWORD *)(v2 + 32)) )
        {
          result = 0;
          goto LABEL_21;
        }
        common::milog::MiLogStream::create(
          &v18,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/crystal_link_activity.cpp",
          "execAction",
          288);
        v14 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                &v18,
                (const char (*)[43])"[CRYSTAL_LINK] openLevel failed, level_id:");
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v14,
                (const unsigned int *)(v2 + 32));
        v13 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v15, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
      }
      Uid = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &Uid);
      common::milog::MiLogStream::~MiLogStream(&v18);
      result = -1;
      goto LABEL_21;
    }
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/crystal_link_activity.cpp",
      "execAction",
      277);
    v5 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v18,
           (const char (*)[34])"[CRYSTAL_LINK] action param size ");
    val = std::vector<std::string>::size(&action_exec->param);
    v6 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v5, &val);
    v7 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v6, (const char (*)[18])off_25D201A0);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Uid = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &Uid);
    common::milog::MiLogStream::~MiLogStream(&v18);
    result = -1;
  }
  else
  {
    result = BaseActivity::execAction(this, action_exec);
  }
LABEL_21:
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

// Line 301: range 00000000165A82B0-00000000165A8486
void __cdecl CrystalLinkActivity::checkAndRecallDungeonAvatars(CrystalLinkActivity *const this)
{
  common::milog::MiLogStream *v1; // rax
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream *v3; // rbx
  unsigned int val; // [rsp+1Ch] [rbp-64h] BYREF
  std::map<unsigned int,CrystalLinkLevelData>::iterator __for_begin; // [rsp+20h] [rbp-60h] BYREF
  std::map<unsigned int,CrystalLinkLevelData>::iterator __for_end; // [rsp+28h] [rbp-58h] BYREF
  std::map<unsigned int,CrystalLinkLevelData> *__for_range; // [rsp+30h] [rbp-50h]
  const std::pair<unsigned int const,CrystalLinkLevelData> *v8; // [rsp+38h] [rbp-48h]
  std::tuple_element<0,const std::pair<unsigned int const,CrystalLinkLevelData> >::type *level_id; // [rsp+40h] [rbp-40h]
  std::tuple_element<1,const std::pair<unsigned int const,CrystalLinkLevelData> >::type *level_data; // [rsp+48h] [rbp-38h]
  common::milog::MiLogStream v11; // [rsp+50h] [rbp-30h] BYREF

  __for_range = &this->level_data_map_;
  __for_begin._M_node = std::map<unsigned int,CrystalLinkLevelData>::begin(&this->level_data_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,CrystalLinkLevelData>::end(&this->level_data_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v8 = std::_Rb_tree_iterator<std::pair<unsigned int const,CrystalLinkLevelData>>::operator*(&__for_begin);
    level_id = std::get<0ul,unsigned int const,CrystalLinkLevelData>(v8);
    level_data = (std::tuple_element<1,const std::pair<unsigned int const,CrystalLinkLevelData> >::type *)std::get<1ul,unsigned int const,CrystalLinkLevelData>(v8);
    if ( !std::vector<unsigned long>::empty(&level_data->in_dungeon_avatar_guid_vec) )
    {
      if ( *(_BYTE *)(((unsigned __int64)level_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)level_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)level_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      CrystalLinkActivity::recallLevelDungeonAvatars(this, *level_id);
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/crystal_link_activity.cpp",
        "checkAndRecallDungeonAvatars",
        307);
      v1 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
             &v11,
             (const char (*)[53])"[CRYSTAL_LINK] level avatar not recalled!, level_id:");
      v2 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, level_id);
      v3 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v2, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &val);
      common::milog::MiLogStream::~MiLogStream(&v11);
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,CrystalLinkLevelData>>::operator++(&__for_begin);
  }
};

// Line 313: range 00000000165A8488-00000000165A8B9A
void __fastcall CrystalLinkActivity::recallLevelDungeonAvatars(CrystalLinkActivity *const this, uint32_t level_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r12
  std::_Rb_tree_iterator<std::pair<unsigned int const,CrystalLinkLevelData> >::pointer v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  PlayerAvatarComp *AvatarComp; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // r12
  unsigned int val; // [rsp+14h] [rbp-FCh] BYREF
  std::vector<CrystalLinkTeamData>::iterator __for_begin; // [rsp+18h] [rbp-F8h] BYREF
  std::vector<CrystalLinkTeamData>::iterator __for_end; // [rsp+20h] [rbp-F0h] BYREF
  std::vector<CrystalLinkAvatarData>::iterator __for_begin_0; // [rsp+28h] [rbp-E8h] BYREF
  std::vector<CrystalLinkAvatarData>::iterator __for_end_0; // [rsp+30h] [rbp-E0h] BYREF
  CrystalLinkLevelData *level_data; // [rsp+38h] [rbp-D8h]
  std::vector<CrystalLinkTeamData> *__for_range; // [rsp+40h] [rbp-D0h]
  CrystalLinkTeamData *team_data; // [rsp+48h] [rbp-C8h]
  std::vector<CrystalLinkAvatarData> *__for_range_0; // [rsp+50h] [rbp-C0h]
  CrystalLinkAvatarData *avatar_data; // [rsp+58h] [rbp-B8h]
  common::milog::MiLogStream v30; // [rsp+60h] [rbp-B0h] BYREF
  char v31[144]; // [rsp+80h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 level_id:312 64 8 14 level_iter:314";
  *(_QWORD *)(v2 + 16) = CrystalLinkActivity::recallLevelDungeonAvatars;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = level_id;
  *(std::map<unsigned int,CrystalLinkLevelData>::iterator *)(v2 + 64) = std::map<unsigned int,CrystalLinkLevelData>::find(
                                                                          &this->level_data_map_,
                                                                          (const std::map<unsigned int,CrystalLinkLevelData>::key_type *)(v2 + 48));
  __for_end_0._M_current = (CrystalLinkAvatarData *)std::map<unsigned int,CrystalLinkLevelData>::end(&this->level_data_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,CrystalLinkLevelData> >::_Self *)(v2 + 64),
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,CrystalLinkLevelData> >::_Self *)&__for_end_0) )
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/crystal_link_activity.cpp",
      "recallLevelDungeonAvatars",
      317);
    v5 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
           &v30,
           (const char (*)[35])"[CRYSTAL_LINK] not found level_id:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v6, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_7:
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v30);
    goto LABEL_28;
  }
  v8 = std::_Rb_tree_iterator<std::pair<unsigned int const,CrystalLinkLevelData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,CrystalLinkLevelData> > *const)(v2 + 64));
  level_data = &v8->second;
  if ( std::vector<unsigned long>::empty(&v8->second.in_dungeon_avatar_guid_vec) )
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/crystal_link_activity.cpp",
      "recallLevelDungeonAvatars",
      323);
    v9 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
           &v30,
           (const char (*)[59])"[CRYSTAL_LINK] level in dungeon avatar is empty, level_id:");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v10, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_7;
  }
  common::milog::MiLogStream::create(
    &v30,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/crystal_link_activity.cpp",
    "recallLevelDungeonAvatars",
    327);
  v11 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
          &v30,
          (const char (*)[44])"[CRYSTAL_LINK] recall level dungeon avatar:");
  v12 = common::milog::MiLogStream::operator<<<unsigned long>(v11, &level_data->in_dungeon_avatar_guid_vec);
  v13 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v12, (const char (*)[10])"level_id:");
  v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 48));
  v15 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v14, (const char (*)[6])" uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
  common::milog::MiLogStream::~MiLogStream(&v30);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  AvatarComp = Player::getAvatarComp(this->player_);
  if ( PlayerAvatarComp::delInformalAvatarBatchAndReplaceByAvatarTeam(
         AvatarComp,
         &level_data->in_dungeon_avatar_guid_vec) )
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/crystal_link_activity.cpp",
      "recallLevelDungeonAvatars",
      330);
    v17 = common::milog::MiLogStream::operator<<<char [78],(char *[78])0>(
            &v30,
            (const char (*)[78])"[CRYSTAL_LINK] delInformalAvatarBatchAndReplaceByAvatarTeam failed, level_id:");
    v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v2 + 48));
    v19 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v18, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &val);
    common::milog::MiLogStream::~MiLogStream(&v30);
  }
  std::vector<unsigned long>::clear(&level_data->in_dungeon_avatar_guid_vec);
  __for_range = &level_data->team_data_vec;
  __for_begin._M_current = std::vector<CrystalLinkTeamData>::begin(&level_data->team_data_vec)._M_current;
  __for_end._M_current = std::vector<CrystalLinkTeamData>::end(__for_range)._M_current;
  while ( __gnu_cxx::operator!=<CrystalLinkTeamData *,std::vector<CrystalLinkTeamData>>(&__for_begin, &__for_end) )
  {
    team_data = __gnu_cxx::__normal_iterator<CrystalLinkTeamData *,std::vector<CrystalLinkTeamData>>::operator*(&__for_begin);
    __for_range_0 = &team_data->avatar_data_vec;
    __for_begin_0._M_current = std::vector<CrystalLinkAvatarData>::begin(&team_data->avatar_data_vec)._M_current;
    __for_end_0._M_current = std::vector<CrystalLinkAvatarData>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<CrystalLinkAvatarData *,std::vector<CrystalLinkAvatarData>>(
              &__for_begin_0,
              &__for_end_0) )
    {
      avatar_data = __gnu_cxx::__normal_iterator<CrystalLinkAvatarData *,std::vector<CrystalLinkAvatarData>>::operator*(&__for_begin_0);
      if ( *(_BYTE *)(((unsigned __int64)&avatar_data->in_dungeon_guid >> 3) + 0x7FFF8000) )
        __asan_report_store8(&avatar_data->in_dungeon_guid);
      avatar_data->in_dungeon_guid = 0LL;
      __gnu_cxx::__normal_iterator<CrystalLinkAvatarData *,std::vector<CrystalLinkAvatarData>>::operator++(&__for_begin_0);
    }
    __gnu_cxx::__normal_iterator<CrystalLinkTeamData *,std::vector<CrystalLinkTeamData>>::operator++(&__for_begin);
  }
LABEL_28:
  if ( v31 == (char *)v2 )
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

// Line 343: range 00000000165A8B9C-00000000165A8F93
void __cdecl CrystalLinkActivity::registerObserver(CrystalLinkActivity *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  PlayerEventComp *cb_ptr; // [rsp+10h] [rbp-D0h]
  PlayerEventComp *v5; // [rsp+20h] [rbp-C0h]
  PlayerEventComp *EventComp; // [rsp+30h] [rbp-B0h]
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
  *(_QWORD *)(v1 + 8) = "2 32 16 12 this_ptr:344 64 16 12 this_wtr:345";
  *(_QWORD *)(v1 + 16) = CrystalLinkActivity::registerObserver;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  std::enable_shared_from_this<BaseActivity>::shared_from_this(&v7);
  std::dynamic_pointer_cast<CrystalLinkActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)(v1 + 32));
  std::shared_ptr<BaseActivity>::~shared_ptr((std::shared_ptr<BaseActivity> *const)&v7);
  std::weak_ptr<CrystalLinkActivity>::weak_ptr<CrystalLinkActivity,void>(
    (std::weak_ptr<CrystalLinkActivity> *const)(v1 + 64),
    (const std::shared_ptr<CrystalLinkActivity> *)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  EventComp = Player::getEventComp(this->player_);
  std::weak_ptr<CrystalLinkActivity>::weak_ptr(
    (std::weak_ptr<CrystalLinkActivity> *const)&v7,
    (const std::weak_ptr<CrystalLinkActivity> *)(v1 + 64));
  PlayerEventComp::tryRegisterObserver<CrystalLinkActivity,LeaveSceneEvent>(
    EventComp,
    (std::weak_ptr<CrystalLinkActivity> *)&v7,
    (void (*)(CrystalLinkActivity *, const LeaveSceneEvent *))CrystalLinkActivity::onLeaveSceneEvent,
    0LL);
  std::weak_ptr<CrystalLinkActivity>::~weak_ptr((std::weak_ptr<CrystalLinkActivity> *const)&v7);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  cb_ptr = Player::getEventComp(this->player_);
  std::weak_ptr<CrystalLinkActivity>::weak_ptr(
    (std::weak_ptr<CrystalLinkActivity> *const)&v7,
    (const std::weak_ptr<CrystalLinkActivity> *)(v1 + 64));
  PlayerEventComp::tryRegisterObserver<CrystalLinkActivity,PostEnterSceneEvent>(
    cb_ptr,
    (std::weak_ptr<CrystalLinkActivity> *)&v7,
    (void (*)(CrystalLinkActivity *, const PostEnterSceneEvent *))CrystalLinkActivity::onPostEnterSceneEvent,
    0LL);
  std::weak_ptr<CrystalLinkActivity>::~weak_ptr((std::weak_ptr<CrystalLinkActivity> *const)&v7);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = Player::getEventComp(this->player_);
  std::weak_ptr<CrystalLinkActivity>::weak_ptr(
    (std::weak_ptr<CrystalLinkActivity> *const)&v7,
    (const std::weak_ptr<CrystalLinkActivity> *)(v1 + 64));
  PlayerEventComp::tryRegisterObserver<CrystalLinkActivity,GalleryStartEvent>(
    v5,
    (std::weak_ptr<CrystalLinkActivity> *)&v7,
    (void (*)(CrystalLinkActivity *, const GalleryStartEvent *))CrystalLinkActivity::onGalleryStartEvent,
    0LL);
  std::weak_ptr<CrystalLinkActivity>::~weak_ptr((std::weak_ptr<CrystalLinkActivity> *const)&v7);
  std::weak_ptr<CrystalLinkActivity>::~weak_ptr((std::weak_ptr<CrystalLinkActivity> *const)(v1 + 64));
  std::shared_ptr<CrystalLinkActivity>::~shared_ptr((std::shared_ptr<CrystalLinkActivity> *const)(v1 + 32));
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

// Line 352: range 00000000165A8F94-00000000165A9320
__int64 __fastcall CrystalLinkActivity::openLevel(CrystalLinkActivity *const this, uint32_t level_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,CrystalLinkLevelData> >::pointer v9; // rdx
  bool *p_is_open; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r13
  unsigned int val; // [rsp+14h] [rbp-ACh] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,CrystalLinkLevelData> >::_Self __y; // [rsp+18h] [rbp-A8h] BYREF
  common::milog::MiLogStream v16; // [rsp+20h] [rbp-A0h] BYREF
  char v17[128]; // [rsp+40h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 level_id:351 64 8 8 iter:353";
  *(_QWORD *)(v2 + 16) = CrystalLinkActivity::openLevel;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = level_id;
  *(std::map<unsigned int,CrystalLinkLevelData>::iterator *)(v2 + 64) = std::map<unsigned int,CrystalLinkLevelData>::find(
                                                                          &this->level_data_map_,
                                                                          (const std::map<unsigned int,CrystalLinkLevelData>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,CrystalLinkLevelData>::end(&this->level_data_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,CrystalLinkLevelData> >::_Self *)(v2 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/crystal_link_activity.cpp",
      "openLevel",
      356);
    v5 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
           &v16,
           (const char (*)[35])"[CRYSTAL_LINK] not found level_id:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v6, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v16);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    v9 = std::_Rb_tree_iterator<std::pair<unsigned int const,CrystalLinkLevelData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,CrystalLinkLevelData> > *const)(v2 + 64));
    p_is_open = &v9->second.is_open;
    if ( *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_open & 7) >= *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(p_is_open);
    }
    v9->second.is_open = 1;
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/crystal_link_activity.cpp",
      "openLevel",
      360);
    v11 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
            &v16,
            (const char (*)[30])"[CRYSTAL_LINK] open level_id:");
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 48));
    v13 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v12, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
    common::milog::MiLogStream::~MiLogStream(&v16);
    BaseActivity::notifyClientData(this, 0);
    result = 0LL;
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

// Line 366: range 00000000165A9462-00000000165AAA17
int32_t __cdecl CrystalLinkActivity::enterCrystalLinkDungeon(
        CrystalLinkActivity *const this,
        const proto::CrystalLinkEnterDungeonReq *req)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  PlayerSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v6; // rbx
  int32_t v7; // r14d
  PlayerMpComp *MpComp; // rax
  common::milog::MiLogStream *v9; // rbx
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // r14
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  std::_Rb_tree_iterator<std::pair<unsigned int const,CrystalLinkLevelData> >::pointer v15; // rax
  bool *p_is_open; // rax
  common::milog::MiLogStream *v17; // r14
  common::milog::MiLogStream *v18; // rax
  uint32_t v19; // eax
  uint32_t schedule_id; // ecx
  common::milog::MiLogStream *v21; // r14
  common::milog::MiLogStream *v22; // rax
  uint32_t v23; // eax
  common::milog::MiLogStream *v24; // r14
  common::milog::MiLogStream *v25; // rax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  __int32 SceneId; // eax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // r14
  CrystalLinkActivity::enterCrystalLinkDungeon::<lambda(Player&, DungeonScene&, proto::DungeonSettleNotify&)> v33; // si
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rax
  common::milog::MiLogStream *v36; // r14
  PlayerAvatarComp *AvatarComp; // rax
  DungeonScene *v38; // rax
  DungeonScene *v39; // rcx
  const google::protobuf::RepeatedPtrField<proto::CrystalLinkTeamInfo> *v40; // rax
  uint32_t v41; // edx
  common::milog::MiLogStream *v42; // r14
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // r14
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // r14
  int32_t result; // eax
  bool v52; // [rsp+8h] [rbp-298h]
  ActivityCrystalLinkExcelConfigMgr *p_activity_crystal_link_config_mgr; // [rsp+8h] [rbp-298h]
  ActivityCrystalLinkExcelConfigMgr *v54; // [rsp+8h] [rbp-298h]
  PlayerDungeonComp *DungeonComp; // [rsp+8h] [rbp-298h]
  DungeonScene *v56; // [rsp+8h] [rbp-298h]
  std::vector<CrystalLinkTeamData> *p_team_data_vec; // [rsp+8h] [rbp-298h]
  unsigned int v59; // [rsp+30h] [rbp-270h] BYREF
  unsigned int v60; // [rsp+34h] [rbp-26Ch] BYREF
  unsigned int val; // [rsp+38h] [rbp-268h] BYREF
  int32_t ret; // [rsp+3Ch] [rbp-264h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,CrystalLinkLevelData> >::_Self __y; // [rsp+40h] [rbp-260h] BYREF
  CrystalLinkLevelData *level_data; // [rsp+48h] [rbp-258h]
  const data::ActivityCrystalLinkDifficultyExcelConfig *difficulty_config_ptr; // [rsp+50h] [rbp-250h]
  const data::ActivityCrystalLinkLevelExcelConfig *level_config_ptr; // [rsp+58h] [rbp-248h]
  std::tuple_element<0,std::pair<int,std::shared_ptr<DungeonScene> > >::type *enter_dungeon_retcode; // [rsp+60h] [rbp-240h]
  std::tuple_element<1,std::pair<int,std::shared_ptr<DungeonScene> > >::type *dungeon_scene_ptr; // [rsp+68h] [rbp-238h]
  std::shared_ptr<Scene> __r; // [rsp+70h] [rbp-230h] BYREF
  std::pair<int,std::shared_ptr<DungeonScene> > __in; // [rsp+80h] [rbp-220h] BYREF
  EnterDungeonOption v71; // [rsp+A0h] [rbp-200h] BYREF
  common::milog::MiLogStream v72; // [rsp+C0h] [rbp-1E0h] BYREF
  std::map<unsigned int,unsigned int> level_config_id_map; // [rsp+E0h] [rbp-1C0h] BYREF
  char v74[400]; // [rsp+110h] [rbp-190h] BYREF

  v2 = (unsigned __int64)v74;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 4 14 dungeon_id:427 48 8 19 level_data_iter:392 80 16 17 cur_scene_ptr:379 112 176 19 dungeon_context:451";
  *(_QWORD *)(v2 + 16) = CrystalLinkActivity::enterCrystalLinkDungeon;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862721] = -234881024;
  v4[536862722] = 62194;
  v4[536862723] = 62194;
  v4[536862729] = -202116109;
  v4[536862730] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = Player::getSceneComp(this->player_);
  if ( !PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
  {
    common::milog::MiLogStream::create(
      &v72,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/crystal_link_activity.cpp",
      "enterCrystalLinkDungeon",
      370);
    v6 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v72,
           (const char (*)[42])"[CRYSTAL_LINK] is not in self world, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v72);
    v7 = 512;
    goto LABEL_82;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  MpComp = Player::getMpComp(this->player_);
  if ( !PlayerMpComp::isInMpMode(MpComp) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 80));
    if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 80)) )
    {
      common::milog::MiLogStream::create(
        &v72,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/crystal_link_activity.cpp",
        "enterCrystalLinkDungeon",
        382);
      v10 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
              &v72,
              (const char (*)[39])"[CRYSTAL_LINK] cur scene is null, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
      common::milog::MiLogStream::~MiLogStream(&v72);
      v7 = -1;
      goto LABEL_81;
    }
    std::dynamic_pointer_cast<DungeonScene,Scene>(&__r);
    v52 = std::operator!=<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)&__r);
    std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)&__r);
    if ( v52 )
    {
      common::milog::MiLogStream::create(
        &v72,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/crystal_link_activity.cpp",
        "enterCrystalLinkDungeon",
        387);
      v11 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
              &v72,
              (const char (*)[42])"[CRYSTAL_LINK] player is in dungeon, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
      common::milog::MiLogStream::~MiLogStream(&v72);
      v7 = -1;
      goto LABEL_81;
    }
    val = proto::CrystalLinkEnterDungeonReq::level_id(req);
    *(std::map<unsigned int,CrystalLinkLevelData>::iterator *)(v2 + 48) = std::map<unsigned int,CrystalLinkLevelData>::find(
                                                                            &this->level_data_map_,
                                                                            &val);
    __y._M_node = std::map<unsigned int,CrystalLinkLevelData>::end(&this->level_data_map_)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,CrystalLinkLevelData> >::_Self *)(v2 + 48),
           &__y) )
    {
      common::milog::MiLogStream::create(
        &v72,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/crystal_link_activity.cpp",
        "enterCrystalLinkDungeon",
        395);
      v12 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
              &v72,
              (const char (*)[35])"[CRYSTAL_LINK] not found level_id:");
      v60 = proto::CrystalLinkEnterDungeonReq::level_id(req);
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &v60);
      v14 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v13, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
    }
    else
    {
      v15 = std::_Rb_tree_iterator<std::pair<unsigned int const,CrystalLinkLevelData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,CrystalLinkLevelData> > *const)(v2 + 48));
      level_data = &v15->second;
      p_is_open = &v15->second.is_open;
      if ( *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)p_is_open & 7) >= *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(p_is_open);
      }
      if ( !level_data->is_open )
      {
        common::milog::MiLogStream::create(
          &v72,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/crystal_link_activity.cpp",
          "enterCrystalLinkDungeon",
          401);
        v17 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                &v72,
                (const char (*)[34])"[CRYSTAL_LINK] not open level_id:");
        v60 = proto::CrystalLinkEnterDungeonReq::level_id(req);
        v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &v60);
        v14 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v18, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
      }
      else
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&__r);
        p_activity_crystal_link_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&__r)->design_config.txt_config_mgr.activity_crystal_link_config_mgr;
        v19 = proto::CrystalLinkEnterDungeonReq::difficulty_id(req);
        difficulty_config_ptr = data::ActivityCrystalLinkExcelConfigMgrBase::findActivityCrystalLinkDifficultyExcelConfig(
                                  p_activity_crystal_link_config_mgr,
                                  v19);
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&__r);
        if ( !difficulty_config_ptr )
          goto LABEL_42;
        if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        schedule_id = this->schedule_id_;
        if ( *(_BYTE *)(((unsigned __int64)&difficulty_config_ptr->schedule_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)difficulty_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&difficulty_config_ptr->schedule_id >> 3)
                                                                               + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( schedule_id == difficulty_config_ptr->schedule_id )
        {
          ret = CrystalLinkActivity::verifyClientTeamInfo(this, req);
          if ( ret )
          {
            v7 = ret;
LABEL_81:
            std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 80));
            goto LABEL_82;
          }
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&__r);
          v54 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&__r)->design_config.txt_config_mgr.activity_crystal_link_config_mgr;
          v23 = proto::CrystalLinkEnterDungeonReq::level_id(req);
          level_config_ptr = data::ActivityCrystalLinkExcelConfigMgrBase::findActivityCrystalLinkLevelExcelConfig(
                               v54,
                               v23);
          std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&__r);
          if ( level_config_ptr )
          {
            if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->dungeon_id >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)level_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_config_ptr->dungeon_id >> 3)
                                                                              + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            *(_DWORD *)(v2 + 32) = level_config_ptr->dungeon_id;
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            DungeonComp = Player::getDungeonComp(this->player_);
            memset(&v71, 0, sizeof(v71));
            EnterDungeonOption::EnterDungeonOption(&v71);
            memset(&level_config_id_map, 0, sizeof(level_config_id_map));
            std::map<unsigned int,unsigned int>::map(&level_config_id_map);
            v26 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
            SceneId = Scene::getSceneId(v26);
            PlayerDungeonComp::enterDungeon(
              &__in,
              DungeonComp,
              *(_DWORD *)(v2 + 32),
              SceneId,
              0,
              &level_config_id_map,
              v71);
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
                &v72,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/player/activity/crystal_link_activity.cpp",
                "enterCrystalLinkDungeon",
                431);
              v28 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                      &v72,
                      (const char (*)[46])"[CRYSTAL_LINK] enterDungeon fail, dungeon_id:");
              v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v28,
                      (const unsigned int *)(v2 + 32));
              v30 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                      v29,
                      (const char (*)[24])" enter_dungeon_retcode:");
              v31 = common::milog::MiLogStream::operator<<<int,(int *)0>(v30, enter_dungeon_retcode);
              v32 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v31, (const char (*)[6])" uid:");
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              val = Player::getUid(this->player_);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, &val);
              common::milog::MiLogStream::~MiLogStream(&v72);
              if ( *(_BYTE *)(((unsigned __int64)enter_dungeon_retcode >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)enter_dungeon_retcode & 7) + 3) >= *(_BYTE *)(((unsigned __int64)enter_dungeon_retcode >> 3)
                                                                                        + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              v7 = *enter_dungeon_retcode;
            }
            else
            {
              v33.gap0[0] = (char)dungeon_scene_ptr;
              if ( std::operator==<DungeonScene>(0LL, dungeon_scene_ptr)
                || (v34 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)dungeon_scene_ptr),
                    DungeonScene::getDungeonId(v34) != *(_DWORD *)(v2 + 32)) )
              {
                common::milog::MiLogStream::create(
                  &v72,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/player/activity/crystal_link_activity.cpp",
                  "enterCrystalLinkDungeon",
                  436);
                v36 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                        &v72,
                        (const char (*)[49])"[CRYSTAL_LINK] player enter dungeon failed, uid:");
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                val = Player::getUid(this->player_);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, &val);
                common::milog::MiLogStream::~MiLogStream(&v72);
                v7 = -1;
              }
              else
              {
                v56 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)dungeon_scene_ptr);
                std::function<void ()(Player &,DungeonScene &,proto::DungeonSettleNotify &)>::function<CrystalLinkActivity::enterCrystalLinkDungeon(proto::CrystalLinkEnterDungeonReq const&)::{lambda(Player &,DungeonScene &,proto::DungeonSettleNotify &)#1},void,void>(
                  (std::function<void(Player&,DungeonScene&,proto::DungeonSettleNotify&)> *const)&v72,
                  v33);
                DungeonScene::registerDungeonSettleCallback(v56, (DungeonSettleCallback *)&v72);
                std::function<void ()(Player &,DungeonScene &,proto::DungeonSettleNotify &)>::~function((std::function<void(Player&,DungeonScene&,proto::DungeonSettleNotify&)> *const)&v72);
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                AvatarComp = Player::getAvatarComp(this->player_);
                PlayerAvatarComp::delAllBuffs(AvatarComp);
                CrystalLinkDungeonContext::CrystalLinkDungeonContext((CrystalLinkDungeonContext *const)(v2 + 112));
                *(_DWORD *)(v2 + 112) = proto::CrystalLinkEnterDungeonReq::level_id(req);
                *(_DWORD *)(v2 + 116) = proto::CrystalLinkEnterDungeonReq::difficulty_id(req);
                *(_BYTE *)(v2 + 120) = 1;
                v38 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)dungeon_scene_ptr);
                DungeonScene::setDungeonExtraData<CrystalLinkDungeonContext>(
                  v38,
                  (const CrystalLinkDungeonContext *)(v2 + 112));
                v39 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)dungeon_scene_ptr);
                if ( *(_BYTE *)(((unsigned __int64)&difficulty_config_ptr->dungeon_level >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&difficulty_config_ptr->dungeon_level >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4();
                }
                DungeonScene::setReviseLevel(v39, difficulty_config_ptr->dungeon_level);
                std::vector<CrystalLinkTeamData>::clear(&level_data->team_data_vec);
                p_team_data_vec = &level_data->team_data_vec;
                v40 = proto::CrystalLinkEnterDungeonReq::team_info_list(req);
                common::tools::MiscUtils::repeatedToVector<CrystalLinkTeamData,proto::CrystalLinkTeamInfo,int (CrystalLinkTeamData::*)(proto::CrystalLinkTeamInfo const&)>(
                  v40,
                  p_team_data_vec,
                  (int (*)(CrystalLinkTeamData *, const proto::CrystalLinkTeamInfo *))CrystalLinkTeamData::fromClient);
                v41 = proto::CrystalLinkEnterDungeonReq::difficulty_id(req);
                if ( *(_BYTE *)(((unsigned __int64)&this->difficulty_id_ >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&this->difficulty_id_ >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_store4(&this->difficulty_id_);
                }
                this->difficulty_id_ = v41;
                BaseActivity::notifyClientData(this, 0);
                common::milog::MiLogStream::create(
                  &v72,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/player/activity/crystal_link_activity.cpp",
                  "enterCrystalLinkDungeon",
                  465);
                v42 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                        &v72,
                        (const char (*)[50])"[CRYSTAL_LINK] enterCrystalLinkDungeon, level_id:");
                v59 = proto::CrystalLinkEnterDungeonReq::level_id(req);
                v43 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v42, &v59);
                v44 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        v43,
                        (const char (*)[16])" difficulty_id:");
                v60 = proto::CrystalLinkEnterDungeonReq::difficulty_id(req);
                v45 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v44, &v60);
                v46 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                        v45,
                        (const char (*)[13])" dungeon_id:");
                v47 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v46,
                        (const unsigned int *)(v2 + 32));
                v48 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        v47,
                        (const char (*)[16])" dungeon_level:");
                v49 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v48,
                        &difficulty_config_ptr->dungeon_level);
                v50 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v49, (const char (*)[6])" uid:");
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                val = Player::getUid(this->player_);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v50, &val);
                common::milog::MiLogStream::~MiLogStream(&v72);
                v7 = 0;
                CrystalLinkDungeonContext::~CrystalLinkDungeonContext((CrystalLinkDungeonContext *const)(v2 + 112));
              }
            }
            std::pair<int,std::shared_ptr<DungeonScene>>::~pair(&__in);
            goto LABEL_81;
          }
          common::milog::MiLogStream::create(
            &v72,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/crystal_link_activity.cpp",
            "enterCrystalLinkDungeon",
            424);
          v24 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                  &v72,
                  (const char (*)[49])"[CRYSTAL_LINK] level config not found, level_id:");
          v60 = proto::CrystalLinkEnterDungeonReq::level_id(req);
          v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &v60);
          v14 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v25, (const char (*)[6])" uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
        }
        else
        {
LABEL_42:
          common::milog::MiLogStream::create(
            &v72,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/crystal_link_activity.cpp",
            "enterCrystalLinkDungeon",
            409);
          v21 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                  &v72,
                  (const char (*)[38])"[CRYSTAL_LINK] invalid difficulty_id:");
          v60 = proto::CrystalLinkEnterDungeonReq::difficulty_id(req);
          v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &v60);
          v14 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v22, (const char (*)[6])" uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
        }
      }
    }
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &val);
    common::milog::MiLogStream::~MiLogStream(&v72);
    v7 = -1;
    goto LABEL_81;
  }
  common::milog::MiLogStream::create(
    &v72,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/crystal_link_activity.cpp",
    "enterCrystalLinkDungeon",
    376);
  v9 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
         &v72,
         (const char (*)[32])"[CRYSTAL_LINK] in mp mode, uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
  common::milog::MiLogStream::~MiLogStream(&v72);
  v7 = 1202;
LABEL_82:
  result = v7;
  if ( v74 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8024) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = -168430091;
  }
  return result;
};

// Line 439: range 00000000165A9322-00000000165A9461
void __cdecl CrystalLinkActivity::enterCrystalLinkDungeon(proto::CrystalLinkEnterDungeonReq const&)::{lambda(Player &,DungeonScene &,proto::DungeonSettleNotify &)#1}::operator()(
        const CrystalLinkActivity::enterCrystalLinkDungeon::<lambda(Player&, DungeonScene&, proto::DungeonSettleNotify&)> *const __closure,
        Player *player,
        DungeonScene *dungeon_scene,
        proto::DungeonSettleNotify *notify)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  CrystalLinkActivity *v7; // rcx
  char v10[96]; // [rsp+20h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 16 activity_ptr:441";
  *(_QWORD *)(v4 + 16) = CrystalLinkActivity::enterCrystalLinkDungeon(proto::CrystalLinkEnterDungeonReq const&)::{lambda(Player &,DungeonScene &,proto::DungeonSettleNotify &)#1}::operator();
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  Player::getActivityComp(player);
  PlayerActivityComp::findOpenningActivity<CrystalLinkActivity>((PlayerActivityComp *const)(v4 + 32));
  if ( std::operator!=<CrystalLinkActivity>(0LL, (const std::shared_ptr<CrystalLinkActivity> *)(v4 + 32)) )
  {
    v7 = std::__shared_ptr_access<CrystalLinkActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CrystalLinkActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    CrystalLinkActivity::onDungeonSettle(v7, dungeon_scene, notify);
  }
  std::shared_ptr<CrystalLinkActivity>::~shared_ptr((std::shared_ptr<CrystalLinkActivity> *const)(v4 + 32));
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

// Line 471: range 00000000165AAA18-00000000165ABDAD
void __cdecl CrystalLinkActivity::onDungeonSettle(
        CrystalLinkActivity *const this,
        DungeonScene *dungeon_scene,
        proto::DungeonSettleNotify *notify)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  const unsigned int *M_current; // r14
  std::vector<unsigned int>::const_iterator v11; // rax
  const unsigned int *v12; // r14
  std::vector<unsigned int>::const_iterator v13; // rax
  const unsigned int *v14; // r14
  std::vector<unsigned int>::const_iterator v15; // rax
  unsigned int *v16; // r8
  unsigned int *v17; // r9
  PlayerEventComp *EventComp; // r14
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCrystalLinkDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // r14
  const std::string *v21; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCrystalLinkDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // r14
  uint32_t DungeonId; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCrystalLinkDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyCrystalLinkDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyCrystalLinkDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // r14
  google::protobuf::uint32 v27; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCrystalLinkDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  PlayerAvatarComp *AvatarComp; // rcx
  common::milog::MiLogStream *v30; // rax
  Avatar *v31; // r14
  proto_log::AvatarLog *v32; // rax
  google::protobuf::uint32 *v33; // rdx
  google::protobuf::uint32 *v34; // rdx
  google::protobuf::uint32 *v35; // rdx
  std::__shared_ptr_access<proto_log::PlayerLogBodyCrystalLinkDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // rax
  Player *player; // r14
  common::milog::MiLogStream *v38; // r14
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // r14
  std::string v51; // [rsp+0h] [rbp-330h]
  proto::DungeonSettleNotify *notifya; // [rsp+8h] [rbp-328h]
  DungeonScene *dungeon_scenea; // [rsp+10h] [rbp-320h]
  CrystalLinkActivity *thisa; // [rsp+18h] [rbp-318h]
  bool is_new_record; // [rsp+23h] [rbp-30Dh]
  unsigned int v56; // [rsp+24h] [rbp-30Ch] BYREF
  unsigned int val; // [rsp+28h] [rbp-308h] BYREF
  uint32_t team_index; // [rsp+2Ch] [rbp-304h]
  std::vector<CrystalLinkTeamData>::iterator __for_begin; // [rsp+30h] [rbp-300h] BYREF
  std::vector<CrystalLinkTeamData>::iterator __for_end; // [rsp+38h] [rbp-2F8h] BYREF
  std::vector<CrystalLinkAvatarData>::const_iterator __for_begin_0; // [rsp+40h] [rbp-2F0h] BYREF
  std::vector<CrystalLinkAvatarData>::const_iterator __for_end_0; // [rsp+48h] [rbp-2E8h] BYREF
  const CrystalLinkDungeonContext *dungeon_context; // [rsp+50h] [rbp-2E0h]
  CrystalLinkLevelData *level_data; // [rsp+58h] [rbp-2D8h]
  proto::CrystalLinkDungeonSettleInfo *settle_info; // [rsp+60h] [rbp-2D0h]
  std::vector<CrystalLinkTeamData> *__for_range; // [rsp+68h] [rbp-2C8h]
  const std::map<unsigned int,long unsigned int> *__for_range_2; // [rsp+70h] [rbp-2C0h]
  const std::pair<unsigned int const,long unsigned int> *v68; // [rsp+78h] [rbp-2B8h]
  std::tuple_element<0,const std::pair<unsigned int const,long unsigned int> >::type *stage_id; // [rsp+80h] [rbp-2B0h]
  std::tuple_element<1,const std::pair<unsigned int const,long unsigned int> >::type *time_ms; // [rsp+88h] [rbp-2A8h]
  proto_log::GalleryProgressStageInfo *progress_stage_info; // [rsp+90h] [rbp-2A0h]
  const CrystalLinkTeamData *team_data; // [rsp+98h] [rbp-298h]
  proto_log::CrystalLinkTeamInfo *log_team; // [rsp+A0h] [rbp-290h]
  const std::vector<CrystalLinkAvatarData> *__for_range_0; // [rsp+A8h] [rbp-288h]
  const std::vector<CrystalLinkBuffData> *__for_range_1; // [rsp+B0h] [rbp-280h]
  const CrystalLinkBuffData *buff_data; // [rsp+B8h] [rbp-278h]
  proto_log::CrystalLinkBuffInfo *log_buff; // [rsp+C0h] [rbp-270h]
  const CrystalLinkAvatarData *avatar_data; // [rsp+C8h] [rbp-268h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+D0h] [rbp-260h] BYREF
  common::milog::MiLogStream v80; // [rsp+E0h] [rbp-250h] BYREF
  char v81[560]; // [rsp+100h] [rbp-230h] BYREF

  *(&v51._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v51._anon_0._M_allocated_capacity = (std::string::size_type)dungeon_scene;
  v51._M_string_length = (std::string::size_type)notify;
  v3 = (unsigned __int64)v81;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(512LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "10 48 1 10 holder:511 64 4 15 final_score:490 80 4 27 kill_normal_monster_num:499 96 4 26 kill_e"
                        "lite_monster_num:501 112 4 26 level_total_best_score:504 128 8 14 level_iter:479 160 16 13 event"
                        "_ptr:505 192 16 11 log_ptr:512 224 16 14 avatar_ptr:524 256 184 23 dungeon_context_opt:472";
  *(_QWORD *)(v3 + 16) = CrystalLinkActivity::onDungeonSettle;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -234556924;
  v5[536862723] = -234556924;
  v5[536862724] = -218959360;
  v5[536862725] = -219021312;
  v5[536862726] = -219021312;
  v5[536862727] = -219021312;
  v5[536862733] = -218103808;
  v5[536862734] = -202116109;
  v5[536862735] = -202116109;
  DungeonScene::getDungeonExtraData<CrystalLinkDungeonContext>(
    (std::optional<CrystalLinkDungeonContext> *)(v3 + 256),
    dungeon_scene);
  if ( !std::optional<CrystalLinkDungeonContext>::has_value((const std::optional<CrystalLinkDungeonContext> *const)(v3 + 256)) )
  {
    common::milog::MiLogStream::create(
      &v80,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/crystal_link_activity.cpp",
      "onDungeonSettle",
      475);
    v6 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
           &v80,
           (const char (*)[61])"[CRYSTAL_LINK] cur dungeon is not crystal link dungeon, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v80);
  }
  else
  {
    dungeon_context = std::optional<CrystalLinkDungeonContext>::value((std::optional<CrystalLinkDungeonContext> *const)(v3 + 256));
    *(std::map<unsigned int,CrystalLinkLevelData>::iterator *)(v3 + 128) = std::map<unsigned int,CrystalLinkLevelData>::find(
                                                                             &this->level_data_map_,
                                                                             &dungeon_context->level_id);
    __for_end_0._M_current = (const CrystalLinkAvatarData *)std::map<unsigned int,CrystalLinkLevelData>::end(&this->level_data_map_)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,CrystalLinkLevelData> >::_Self *)(v3 + 128),
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,CrystalLinkLevelData> >::_Self *)&__for_end_0) )
    {
      common::milog::MiLogStream::create(
        &v80,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/crystal_link_activity.cpp",
        "onDungeonSettle",
        482);
      v7 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
             &v80,
             (const char (*)[35])"[CRYSTAL_LINK] not found level_id:");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &dungeon_context->level_id);
      v9 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v8, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
      common::milog::MiLogStream::~MiLogStream(&v80);
    }
    else
    {
      level_data = &std::_Rb_tree_iterator<std::pair<unsigned int const,CrystalLinkLevelData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,CrystalLinkLevelData> > *const)(v3 + 128))->second;
      settle_info = proto::DungeonSettleNotify::mutable_crystal_link_settle_info((proto::DungeonSettleNotify *const)v51._M_string_length);
      if ( *(_BYTE *)(((unsigned __int64)dungeon_context >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)dungeon_context >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      proto::CrystalLinkDungeonSettleInfo::set_level_id(settle_info, dungeon_context->level_id);
      if ( *(_BYTE *)(((unsigned __int64)&dungeon_context->difficulty_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)dungeon_context + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_context->difficulty_id >> 3)
                                                                      + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::CrystalLinkDungeonSettleInfo::set_difficulty_id(settle_info, dungeon_context->difficulty_id);
      M_current = std::vector<unsigned int>::end(&dungeon_context->score_vec)._M_current;
      v11._M_current = std::vector<unsigned int>::begin(&dungeon_context->score_vec)._M_current;
      *(_DWORD *)(v3 + 64) = std::accumulate<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,int>(
                               v11,
                               (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current,
                               0);
      proto::CrystalLinkDungeonSettleInfo::set_final_score(settle_info, *(_DWORD *)(v3 + 64));
      is_new_record = 0;
      if ( *(_BYTE *)(((unsigned __int64)&level_data->best_score >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&level_data->best_score >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( level_data->best_score < *(_DWORD *)(v3 + 64) )
      {
        is_new_record = 1;
        level_data->best_score = *(_DWORD *)(v3 + 64);
      }
      proto::CrystalLinkDungeonSettleInfo::set_is_new_record(settle_info, is_new_record);
      v12 = std::vector<unsigned int>::end(&dungeon_context->kill_normal_monster_vec)._M_current;
      v13._M_current = std::vector<unsigned int>::begin(&dungeon_context->kill_normal_monster_vec)._M_current;
      *(_DWORD *)(v3 + 80) = std::accumulate<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,int>(
                               v13,
                               (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)v12,
                               0);
      proto::CrystalLinkDungeonSettleInfo::set_kill_normal_mosnter_num(settle_info, *(_DWORD *)(v3 + 80));
      v14 = std::vector<unsigned int>::end(&dungeon_context->kill_elite_monster_vec)._M_current;
      v15._M_current = std::vector<unsigned int>::begin(&dungeon_context->kill_elite_monster_vec)._M_current;
      *(_DWORD *)(v3 + 96) = std::accumulate<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,int>(
                               v15,
                               (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)v14,
                               0);
      proto::CrystalLinkDungeonSettleInfo::set_kill_elite_monster_num(settle_info, *(_DWORD *)(v3 + 96));
      *(_DWORD *)(v3 + 112) = CrystalLinkActivity::getLevelTotalBestScore(this);
      common::tools::perf::make_shared<CrystalLinkDungeonSettleEvent,unsigned int &,unsigned int &,unsigned int &>(
        (unsigned int *)(v3 + 160),
        &level_data->level_id,
        &level_data->best_score,
        (unsigned int *)(v3 + 112),
        v16,
        v17);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      EventComp = Player::getEventComp(this->player_);
      std::shared_ptr<BaseEvent>::shared_ptr<CrystalLinkDungeonSettleEvent,void>(
        (std::shared_ptr<BaseEvent> *const)(v3 + 224),
        (const std::shared_ptr<CrystalLinkDungeonSettleEvent> *)(v3 + 160));
      PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)(v3 + 224));
      std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v3 + 224));
      BaseActivity::notifyClientData(this, 0);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      BasicComp = Player::getBasicComp(this->player_);
      PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v80, BasicComp);
      StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48), 0xE08u, v51);
      std::string::~string(&v80);
      common::tools::perf::make_shared<proto_log::PlayerLogBodyCrystalLinkDungeonSettle>();
      v20 = std::__shared_ptr_access<proto_log::PlayerLogBodyCrystalLinkDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCrystalLinkDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
      v21 = DungeonScene::getTransaction[abi:cxx11](dungeon_scenea);
      proto_log::PlayerLogBodyCrystalLinkDungeonSettle::set_dungeon_transaction(v20, v21);
      v22 = std::__shared_ptr_access<proto_log::PlayerLogBodyCrystalLinkDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCrystalLinkDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
      DungeonId = DungeonScene::getDungeonId(dungeon_scenea);
      proto_log::PlayerLogBodyCrystalLinkDungeonSettle::set_dungeon_id(v22, DungeonId);
      v24 = std::__shared_ptr_access<proto_log::PlayerLogBodyCrystalLinkDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCrystalLinkDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
      if ( *(_BYTE *)(((unsigned __int64)dungeon_context >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)dungeon_context >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      proto_log::PlayerLogBodyCrystalLinkDungeonSettle::set_level_id(v24, dungeon_context->level_id);
      v25 = std::__shared_ptr_access<proto_log::PlayerLogBodyCrystalLinkDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCrystalLinkDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
      if ( *(_BYTE *)(((unsigned __int64)&dungeon_context->difficulty_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)dungeon_context + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_context->difficulty_id >> 3)
                                                                      + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto_log::PlayerLogBodyCrystalLinkDungeonSettle::set_difficulty_id(v25, dungeon_context->difficulty_id);
      v26 = std::__shared_ptr_access<proto_log::PlayerLogBodyCrystalLinkDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCrystalLinkDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
      v27 = proto::DungeonSettleNotify::result(notifya);
      proto_log::PlayerLogBodyCrystalLinkDungeonSettle::set_dungeon_settle_type(v26, v27);
      team_index = 0;
      __for_range = &level_data->team_data_vec;
      __for_begin._M_current = std::vector<CrystalLinkTeamData>::begin(&level_data->team_data_vec)._M_current;
      __for_end._M_current = std::vector<CrystalLinkTeamData>::end(__for_range)._M_current;
      while ( __gnu_cxx::operator!=<CrystalLinkTeamData *,std::vector<CrystalLinkTeamData>>(&__for_begin, &__for_end) )
      {
        team_data = __gnu_cxx::__normal_iterator<CrystalLinkTeamData *,std::vector<CrystalLinkTeamData>>::operator*(&__for_begin);
        v28 = std::__shared_ptr_access<proto_log::PlayerLogBodyCrystalLinkDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCrystalLinkDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
        log_team = proto_log::PlayerLogBodyCrystalLinkDungeonSettle::add_team_info_list(v28);
        __for_range_0 = &team_data->avatar_data_vec;
        __for_begin_0._M_current = std::vector<CrystalLinkAvatarData>::begin(&team_data->avatar_data_vec)._M_current;
        __for_end_0._M_current = std::vector<CrystalLinkAvatarData>::end(__for_range_0)._M_current;
        while ( __gnu_cxx::operator!=<CrystalLinkAvatarData const*,std::vector<CrystalLinkAvatarData>>(
                  &__for_begin_0,
                  &__for_end_0) )
        {
          avatar_data = __gnu_cxx::__normal_iterator<CrystalLinkAvatarData const*,std::vector<CrystalLinkAvatarData>>::operator*(&__for_begin_0);
          if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          AvatarComp = Player::getAvatarComp(thisa->player_);
          if ( *(_BYTE *)(((unsigned __int64)&avatar_data->in_dungeon_guid >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          PlayerAvatarComp::findAvatar((const PlayerAvatarComp *const)(v3 + 224), (uint64_t)AvatarComp);
          if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v3 + 224)) )
          {
            common::milog::MiLogStream::create(
              &v80,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/crystal_link_activity.cpp",
              "onDungeonSettle",
              527);
            v30 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                    &v80,
                    (const char (*)[50])"[CRYSTAL_LINK] in dungeon avatar not found, guid:");
            common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v30, &avatar_data->in_dungeon_guid);
            common::milog::MiLogStream::~MiLogStream(&v80);
          }
          else
          {
            v31 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 224));
            v32 = proto_log::CrystalLinkTeamInfo::add_avatar_log_list(log_team);
            Avatar::getAvatarLog(v31, v32);
          }
          std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 224));
          __gnu_cxx::__normal_iterator<CrystalLinkAvatarData const*,std::vector<CrystalLinkAvatarData>>::operator++(&__for_begin_0);
        }
        __for_range_1 = &team_data->buff_data_vec;
        __for_begin_0._M_current = (const CrystalLinkAvatarData *)std::vector<CrystalLinkBuffData>::begin(&team_data->buff_data_vec)._M_current;
        __for_end_0._M_current = (const CrystalLinkAvatarData *)std::vector<CrystalLinkBuffData>::end(__for_range_1)._M_current;
        while ( __gnu_cxx::operator!=<CrystalLinkBuffData const*,std::vector<CrystalLinkBuffData>>(
                  (const __gnu_cxx::__normal_iterator<const CrystalLinkBuffData*,std::vector<CrystalLinkBuffData> > *)&__for_begin_0,
                  (const __gnu_cxx::__normal_iterator<const CrystalLinkBuffData*,std::vector<CrystalLinkBuffData> > *)&__for_end_0) )
        {
          buff_data = __gnu_cxx::__normal_iterator<CrystalLinkBuffData const*,std::vector<CrystalLinkBuffData>>::operator*((const __gnu_cxx::__normal_iterator<const CrystalLinkBuffData*,std::vector<CrystalLinkBuffData> > *const)&__for_begin_0);
          log_buff = proto_log::CrystalLinkTeamInfo::add_buff_info_list(log_team);
          if ( *(_BYTE *)(((unsigned __int64)buff_data >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)buff_data & 7) + 3) >= *(_BYTE *)(((unsigned __int64)buff_data >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          proto_log::CrystalLinkBuffInfo::set_cond_buff_id(log_buff, buff_data->cond_buff_id);
          if ( *(_BYTE *)(((unsigned __int64)&buff_data->effect_buff_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)buff_data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&buff_data->effect_buff_id >> 3)
                                                                    + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          proto_log::CrystalLinkBuffInfo::set_effect_buff_id(log_buff, buff_data->effect_buff_id);
          __gnu_cxx::__normal_iterator<CrystalLinkBuffData const*,std::vector<CrystalLinkBuffData>>::operator++((__gnu_cxx::__normal_iterator<const CrystalLinkBuffData*,std::vector<CrystalLinkBuffData> > *const)&__for_begin_0);
        }
        if ( team_index < std::vector<unsigned int>::size(&dungeon_context->score_vec) )
        {
          v33 = (google::protobuf::uint32 *)std::vector<unsigned int>::operator[](
                                              &dungeon_context->score_vec,
                                              team_index);
          if ( *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v33 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          proto_log::CrystalLinkTeamInfo::set_score(log_team, *v33);
        }
        if ( team_index < std::vector<unsigned int>::size(&dungeon_context->kill_normal_monster_vec) )
        {
          v34 = (google::protobuf::uint32 *)std::vector<unsigned int>::operator[](
                                              &dungeon_context->kill_normal_monster_vec,
                                              team_index);
          if ( *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v34 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          proto_log::CrystalLinkTeamInfo::set_kill_normal_monster_num(log_team, *v34);
        }
        if ( team_index < std::vector<unsigned int>::size(&dungeon_context->kill_elite_monster_vec) )
        {
          v35 = (google::protobuf::uint32 *)std::vector<unsigned int>::operator[](
                                              &dungeon_context->kill_elite_monster_vec,
                                              team_index);
          if ( *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v35 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          proto_log::CrystalLinkTeamInfo::set_kill_elite_monster_num(log_team, *v35);
        }
        ++team_index;
        __gnu_cxx::__normal_iterator<CrystalLinkTeamData *,std::vector<CrystalLinkTeamData>>::operator++(&__for_begin);
      }
      __for_range_2 = &dungeon_context->progress_stage_time_map;
      __for_begin_0._M_current = (const CrystalLinkAvatarData *)std::map<unsigned int,unsigned long>::begin(&dungeon_context->progress_stage_time_map)._M_node;
      __for_end_0._M_current = (const CrystalLinkAvatarData *)std::map<unsigned int,unsigned long>::end(__for_range_2)._M_node;
      while ( std::operator!=(
                (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,long unsigned int> >::_Self *)&__for_begin_0,
                (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,long unsigned int> >::_Self *)&__for_end_0) )
      {
        v68 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned long>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,long unsigned int> > *const)&__for_begin_0);
        stage_id = std::get<0ul,unsigned int const,unsigned long>(v68);
        time_ms = (std::tuple_element<1,const std::pair<unsigned int const,long unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned long>(v68);
        v36 = std::__shared_ptr_access<proto_log::PlayerLogBodyCrystalLinkDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCrystalLinkDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
        progress_stage_info = proto_log::PlayerLogBodyCrystalLinkDungeonSettle::add_progress_stage_time_list(v36);
        if ( *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)stage_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto_log::GalleryProgressStageInfo::set_stage_id(progress_stage_info, *stage_id);
        if ( *(_BYTE *)(((unsigned __int64)time_ms >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        proto_log::GalleryProgressStageInfo::set_time(progress_stage_info, *time_ms / 0x3E8);
        std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned long>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,long unsigned int> > *const)&__for_begin_0);
      }
      if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      player = thisa->player_;
      std::shared_ptr<google::protobuf::Message>::shared_ptr(
        (std::shared_ptr<google::protobuf::Message> *const)(v3 + 224),
        0LL);
      std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyCrystalLinkDungeonSettle,void>(
        &p_body_ptr,
        (const std::shared_ptr<proto_log::PlayerLogBodyCrystalLinkDungeonSettle> *)(v3 + 192));
      Player::printStatLog(player, &p_body_ptr, (MessagePtr *)(v3 + 224), 0xEu);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)(v3 + 224));
      common::milog::MiLogStream::create(
        &v80,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/crystal_link_activity.cpp",
        "onDungeonSettle",
        560);
      v38 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
              &v80,
              (const char (*)[44])"[CRYSTAL_LINK] onDungeonSettle, dungeon_id:");
      v56 = DungeonScene::getDungeonId(dungeon_scenea);
      v39 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v38, &v56);
      v40 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v39, (const char (*)[11])" level_id:");
      v41 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v40, &dungeon_context->level_id);
      v42 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v41, (const char (*)[16])" difficulty_id:");
      v43 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v42, &dungeon_context->difficulty_id);
      v44 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v43, (const char (*)[14])" final_score:");
      v45 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v44, (const unsigned int *)(v3 + 64));
      v46 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
              v45,
              (const char (*)[26])" kill_normal_monster_num:");
      v47 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v46, (const unsigned int *)(v3 + 80));
      v48 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
              v47,
              (const char (*)[25])" kill_elite_monster_num:");
      v49 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v48, (const unsigned int *)(v3 + 96));
      v50 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v49, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(thisa->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v50, &val);
      common::milog::MiLogStream::~MiLogStream(&v80);
      std::shared_ptr<proto_log::PlayerLogBodyCrystalLinkDungeonSettle>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyCrystalLinkDungeonSettle> *const)(v3 + 192));
      StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48));
      std::shared_ptr<CrystalLinkDungeonSettleEvent>::~shared_ptr((std::shared_ptr<CrystalLinkDungeonSettleEvent> *const)(v3 + 160));
    }
  }
  std::optional<CrystalLinkDungeonContext>::~optional((std::optional<CrystalLinkDungeonContext> *const)(v3 + 256));
  if ( v81 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8034) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF803C) = 0;
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
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 566: range 00000000165ABDAE-00000000165ABE98
uint32_t __cdecl CrystalLinkActivity::getLevelTotalBestScore(const CrystalLinkActivity *const this)
{
  unsigned int total_best_score; // [rsp+1Ch] [rbp-34h]
  std::map<unsigned int,CrystalLinkLevelData>::const_iterator __for_begin; // [rsp+20h] [rbp-30h] BYREF
  std::map<unsigned int,CrystalLinkLevelData>::const_iterator __for_end; // [rsp+28h] [rbp-28h] BYREF
  const std::map<unsigned int,CrystalLinkLevelData> *__for_range; // [rsp+30h] [rbp-20h]
  const std::pair<unsigned int const,CrystalLinkLevelData> *v6; // [rsp+38h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,CrystalLinkLevelData> >::type *_; // [rsp+40h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,CrystalLinkLevelData> >::type *level_data; // [rsp+48h] [rbp-8h]

  total_best_score = 0;
  __for_range = &this->level_data_map_;
  __for_begin._M_node = std::map<unsigned int,CrystalLinkLevelData>::begin(&this->level_data_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,CrystalLinkLevelData>::end(&this->level_data_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v6 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,CrystalLinkLevelData>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,CrystalLinkLevelData>(v6);
    level_data = (std::tuple_element<1,const std::pair<unsigned int const,CrystalLinkLevelData> >::type *)std::get<1ul,unsigned int const,CrystalLinkLevelData>(v6);
    if ( *(_BYTE *)(((unsigned __int64)&level_data->best_score >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&level_data->best_score >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    total_best_score = SAFE_ADD<unsigned int,unsigned int>(total_best_score, level_data->best_score);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,CrystalLinkLevelData>>::operator++(&__for_begin);
  }
  return total_best_score;
};

// Line 576: range 00000000165ABE9A-00000000165AD0EA
int32_t __cdecl CrystalLinkActivity::verifyClientTeamInfo(
        CrystalLinkActivity *const this,
        const proto::CrystalLinkEnterDungeonReq *req)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rbx
  ActivityCrystalLinkExcelConfigMgr *p_activity_crystal_link_config_mgr; // r15
  uint32_t v10; // eax
  common::milog::MiLogStream *v11; // r14
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v14; // r14
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  PlayerAvatarComp *AvatarComp; // r15
  common::milog::MiLogStream *v26; // r14
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // r14
  int v29; // r15d
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v31; // rax
  common::milog::MiLogStream *v32; // r14
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rax
  common::milog::MiLogStream *v34; // rax
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v35; // rax
  common::milog::MiLogStream *v36; // r14
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // r14
  common::milog::MiLogStream *v39; // r14
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // r14
  common::milog::MiLogStream *v42; // rax
  int v43; // r15d
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-1D4h] BYREF
  google::protobuf::RepeatedPtrField<proto::CrystalLinkTeamInfo>::const_iterator __for_begin; // [rsp+30h] [rbp-1D0h] BYREF
  google::protobuf::RepeatedPtrField<proto::CrystalLinkTeamInfo>::const_iterator __for_end; // [rsp+38h] [rbp-1C8h] BYREF
  google::protobuf::RepeatedPtrField<proto::CrystalLinkAvatarInfo>::const_iterator __for_begin_0; // [rsp+40h] [rbp-1C0h] BYREF
  google::protobuf::RepeatedPtrField<proto::CrystalLinkBuffInfo>::const_iterator __for_begin_1; // [rsp+48h] [rbp-1B8h] BYREF
  google::protobuf::RepeatedPtrField<proto::CrystalLinkBuffInfo>::const_iterator __for_end_0; // [rsp+50h] [rbp-1B0h] BYREF
  const google::protobuf::RepeatedPtrField<proto::CrystalLinkTeamInfo> *team_info_list; // [rsp+58h] [rbp-1A8h]
  const data::ActivityCrystalLinkLevelExcelConfig *level_config_ptr; // [rsp+60h] [rbp-1A0h]
  const google::protobuf::RepeatedPtrField<proto::CrystalLinkTeamInfo> *__for_range; // [rsp+68h] [rbp-198h]
  const proto::CrystalLinkTeamInfo *team_info; // [rsp+70h] [rbp-190h]
  const google::protobuf::RepeatedPtrField<proto::CrystalLinkAvatarInfo> *avatar_info_list; // [rsp+78h] [rbp-188h]
  const google::protobuf::RepeatedPtrField<proto::CrystalLinkAvatarInfo> *__for_range_0; // [rsp+80h] [rbp-180h]
  const google::protobuf::RepeatedPtrField<proto::CrystalLinkBuffInfo> *buff_info_list; // [rsp+88h] [rbp-178h]
  const google::protobuf::RepeatedPtrField<proto::CrystalLinkBuffInfo> *__for_range_1; // [rsp+90h] [rbp-170h]
  const proto::CrystalLinkBuffInfo *buff_info; // [rsp+98h] [rbp-168h]
  const proto::CrystalLinkAvatarInfo *avatar_info; // [rsp+A0h] [rbp-160h]
  const data::TrialAvatarExcelConfig *trial_avatar_config_ptr; // [rsp+A8h] [rbp-158h]
  common::milog::MiLogStream v62; // [rsp+B0h] [rbp-150h] BYREF
  char v63[304]; // [rsp+D0h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v63;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 19 trial_avatar_id:607 64 16 21 formal_avatar_ptr:628 96 48 17 avatar_id_set:592 176 48 2"
                        "0 cond_buff_id_set:643";
  *(_QWORD *)(v3 + 16) = CrystalLinkActivity::verifyClientTeamInfo;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = 62194;
  v5[536862727] = -202116109;
  team_info_list = proto::CrystalLinkEnterDungeonReq::team_info_list(req);
  if ( google::protobuf::RepeatedPtrField<proto::CrystalLinkTeamInfo>::size(team_info_list) != 2 )
  {
    common::milog::MiLogStream::create(
      &v62,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/crystal_link_activity.cpp",
      "verifyClientTeamInfo",
      581);
    v6 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v62,
           (const char (*)[34])"[CRYSTAL_LINK] invalid team size:");
    *(_DWORD *)(v3 + 48) = google::protobuf::RepeatedPtrField<proto::CrystalLinkTeamInfo>::size(team_info_list);
    v7 = common::milog::MiLogStream::operator<<<int,(int *)0>(v6, (const int *)(v3 + 48));
    v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v7, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_7:
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream(&v62);
    v2 = -1;
    goto LABEL_70;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 64));
  p_activity_crystal_link_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64))->design_config.txt_config_mgr.activity_crystal_link_config_mgr;
  v10 = proto::CrystalLinkEnterDungeonReq::level_id(req);
  level_config_ptr = data::ActivityCrystalLinkExcelConfigMgrBase::findActivityCrystalLinkLevelExcelConfig(
                       p_activity_crystal_link_config_mgr,
                       v10);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 64));
  if ( !level_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v62,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/crystal_link_activity.cpp",
      "verifyClientTeamInfo",
      588);
    v11 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
            &v62,
            (const char (*)[49])"[CRYSTAL_LINK] level_config not found, level_id:");
    *(_DWORD *)(v3 + 48) = proto::CrystalLinkEnterDungeonReq::level_id(req);
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 48));
    v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v12, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_7;
  }
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 96));
  __for_range = team_info_list;
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::CrystalLinkTeamInfo>::begin(team_info_list).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::CrystalLinkTeamInfo>::end(team_info_list).it_;
LABEL_13:
  if ( !google::protobuf::internal::RepeatedPtrIterator<proto::CrystalLinkTeamInfo const>::operator!=(
          &__for_begin,
          &__for_end) )
  {
    v2 = 0;
    goto LABEL_69;
  }
  team_info = google::protobuf::internal::RepeatedPtrIterator<proto::CrystalLinkTeamInfo const>::operator*(&__for_begin);
  avatar_info_list = proto::CrystalLinkTeamInfo::avatar_info_list(team_info);
  if ( !google::protobuf::RepeatedPtrField<proto::CrystalLinkAvatarInfo>::empty(avatar_info_list)
    && (unsigned int)google::protobuf::RepeatedPtrField<proto::CrystalLinkAvatarInfo>::size(avatar_info_list) <= 4 )
  {
    __for_range_0 = avatar_info_list;
    __for_begin_0.it_ = google::protobuf::RepeatedPtrField<proto::CrystalLinkAvatarInfo>::begin(avatar_info_list).it_;
    __for_begin_1.it_ = google::protobuf::RepeatedPtrField<proto::CrystalLinkAvatarInfo>::end(__for_range_0).it_;
    while ( 1 )
    {
      if ( !google::protobuf::internal::RepeatedPtrIterator<proto::CrystalLinkAvatarInfo const>::operator!=(
              &__for_begin_0,
              (const google::protobuf::internal::RepeatedPtrIterator<const proto::CrystalLinkAvatarInfo>::iterator *)&__for_begin_1) )
      {
        std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 176));
        buff_info_list = proto::CrystalLinkTeamInfo::buff_info_list(team_info);
        __for_range_1 = buff_info_list;
        __for_begin_1.it_ = google::protobuf::RepeatedPtrField<proto::CrystalLinkBuffInfo>::begin(buff_info_list).it_;
        __for_end_0.it_ = google::protobuf::RepeatedPtrField<proto::CrystalLinkBuffInfo>::end(__for_range_1).it_;
        while ( google::protobuf::internal::RepeatedPtrIterator<proto::CrystalLinkBuffInfo const>::operator!=(
                  &__for_begin_1,
                  &__for_end_0) )
        {
          buff_info = google::protobuf::internal::RepeatedPtrIterator<proto::CrystalLinkBuffInfo const>::operator*(&__for_begin_1);
          val = proto::CrystalLinkBuffInfo::cond_buff_id(buff_info);
          v35 = std::set<unsigned int>::insert((std::set<unsigned int> *const)(v3 + 176), &val);
          if ( !v35.second )
          {
            common::milog::MiLogStream::create(
              &v62,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/activity/crystal_link_activity.cpp",
              "verifyClientTeamInfo",
              649);
            v36 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                    &v62,
                    (const char (*)[39])"[CRYSTAL_LINK] duplicate cond_buff_id:");
            *(_DWORD *)(v3 + 48) = proto::CrystalLinkBuffInfo::cond_buff_id(buff_info);
            v37 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v36,
                    (const unsigned int *)(v3 + 48));
            v38 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v37, (const char (*)[6])" uid:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
LABEL_63:
            val = Player::getUid(this->player_);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v38, &val);
            common::milog::MiLogStream::~MiLogStream(&v62);
            v2 = -1;
            v43 = 0;
            goto LABEL_66;
          }
          val = proto::CrystalLinkBuffInfo::cond_buff_id(buff_info);
          if ( !common::tools::MiscUtils::isContains<unsigned int>(&level_config_ptr->cond_buff_id_list, &val) )
          {
            common::milog::MiLogStream::create(
              &v62,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/activity/crystal_link_activity.cpp",
              "verifyClientTeamInfo",
              654);
            v39 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                    &v62,
                    (const char (*)[37])"[CRYSTAL_LINK] invlaid cond_buff_id:");
            *(_DWORD *)(v3 + 48) = proto::CrystalLinkBuffInfo::cond_buff_id(buff_info);
            v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v39,
                    (const unsigned int *)(v3 + 48));
            v38 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v40, (const char (*)[6])" uid:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            goto LABEL_63;
          }
          val = proto::CrystalLinkBuffInfo::effect_buff_id(buff_info);
          if ( !common::tools::MiscUtils::isContains<unsigned int>(&level_config_ptr->effect_buff_id_list, &val) )
          {
            common::milog::MiLogStream::create(
              &v62,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/activity/crystal_link_activity.cpp",
              "verifyClientTeamInfo",
              659);
            v41 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                    &v62,
                    (const char (*)[39])"[CRYSTAL_LINK] invlaid effect_buff_id:");
            *(_DWORD *)(v3 + 48) = proto::CrystalLinkBuffInfo::effect_buff_id(buff_info);
            v42 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v41,
                    (const unsigned int *)(v3 + 48));
            v38 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v42, (const char (*)[6])" uid:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            goto LABEL_63;
          }
          google::protobuf::internal::RepeatedPtrIterator<proto::CrystalLinkBuffInfo const>::operator++(&__for_begin_1);
        }
        v43 = 1;
LABEL_66:
        std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 176));
        if ( v43 == 1 )
        {
          google::protobuf::internal::RepeatedPtrIterator<proto::CrystalLinkTeamInfo const>::operator++(&__for_begin);
          goto LABEL_13;
        }
        goto LABEL_69;
      }
      avatar_info = google::protobuf::internal::RepeatedPtrIterator<proto::CrystalLinkAvatarInfo const>::operator*(&__for_begin_0);
      if ( !proto::CrystalLinkAvatarInfo::is_trial(avatar_info) )
        break;
      *(_DWORD *)(v3 + 48) = proto::CrystalLinkAvatarInfo::avatar_id(avatar_info);
      if ( !common::tools::MiscUtils::isContains<unsigned int>(
              &level_config_ptr->trial_avatar_list,
              (const unsigned int *)(v3 + 48)) )
      {
        common::milog::MiLogStream::create(
          &v62,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/crystal_link_activity.cpp",
          "verifyClientTeamInfo",
          610);
        v17 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
                &v62,
                (const char (*)[58])"[CRYSTAL_LINK] trial avatar not in pool, trial_avatar_id:");
        v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v17,
                (const unsigned int *)(v3 + 48));
        v16 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v18, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        goto LABEL_36;
      }
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v3 + 64));
      v19 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      trial_avatar_config_ptr = data::TrialAvatarExcelConfigMgrBase::findTrialAvatarExcelConfig(
                                  &v19->design_config.txt_config_mgr.trial_avatar_config_mgr,
                                  *(_DWORD *)(v3 + 48));
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 64));
      if ( !trial_avatar_config_ptr )
      {
        common::milog::MiLogStream::create(
          &v62,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/crystal_link_activity.cpp",
          "verifyClientTeamInfo",
          616);
        v20 = common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(
                &v62,
                (const char (*)[65])"[CRYSTAL_LINK] findTrialAvatarExcelConfig fail, trial_avatar_id:");
        v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v20,
                (const unsigned int *)(v3 + 48));
        v16 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v21, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        goto LABEL_36;
      }
      v22 = std::set<unsigned int>::insert(
              (std::set<unsigned int> *const)(v3 + 96),
              &trial_avatar_config_ptr->avatar.avatar_id);
      if ( !v22.second )
      {
        common::milog::MiLogStream::create(
          &v62,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/crystal_link_activity.cpp",
          "verifyClientTeamInfo",
          621);
        v23 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                &v62,
                (const char (*)[37])"[CRYSTAL_LINK] duplicated avatar_id:");
        v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v23,
                &trial_avatar_config_ptr->avatar.avatar_id);
        v16 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v24, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        goto LABEL_36;
      }
LABEL_49:
      google::protobuf::internal::RepeatedPtrIterator<proto::CrystalLinkAvatarInfo const>::operator++(&__for_begin_0);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    AvatarComp = Player::getAvatarComp(this->player_);
    proto::CrystalLinkAvatarInfo::avatar_id(avatar_info);
    PlayerAvatarComp::findFormalAvatar((const PlayerAvatarComp *const)(v3 + 64), (uint64_t)AvatarComp);
    if ( std::operator==<FormalAvatar>(0LL, (const std::shared_ptr<FormalAvatar> *)(v3 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v62,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/crystal_link_activity.cpp",
        "verifyClientTeamInfo",
        631);
      v26 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
              &v62,
              (const char (*)[53])"[CRYSTAL_LINK] formal avatar not found, avatar_guid:");
      __for_end_0.it_ = (void *const *)proto::CrystalLinkAvatarInfo::avatar_id(avatar_info);
      v27 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v26,
              (const unsigned __int64 *)&__for_end_0);
      v28 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v27, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
    }
    else
    {
      v30 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      val = Avatar::getAvatarId(v30);
      v31 = std::set<unsigned int>::insert((std::set<unsigned int> *const)(v3 + 96), &val);
      if ( v31.second )
      {
        v29 = 1;
LABEL_48:
        std::shared_ptr<FormalAvatar>::~shared_ptr((std::shared_ptr<FormalAvatar> *const)(v3 + 64));
        if ( v29 != 1 )
          goto LABEL_69;
        goto LABEL_49;
      }
      common::milog::MiLogStream::create(
        &v62,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/crystal_link_activity.cpp",
        "verifyClientTeamInfo",
        636);
      v32 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
              &v62,
              (const char (*)[37])"[CRYSTAL_LINK] duplicated avatar_id:");
      v33 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      *(_DWORD *)(v3 + 48) = Avatar::getAvatarId(v33);
      v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, (const unsigned int *)(v3 + 48));
      v28 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v34, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
    }
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, &val);
    common::milog::MiLogStream::~MiLogStream(&v62);
    v2 = -1;
    v29 = 0;
    goto LABEL_48;
  }
  common::milog::MiLogStream::create(
    &v62,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/crystal_link_activity.cpp",
    "verifyClientTeamInfo",
    599);
  v14 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
          &v62,
          (const char (*)[34])"[CRYSTAL_LINK] invalid team size:");
  *(_DWORD *)(v3 + 48) = google::protobuf::RepeatedPtrField<proto::CrystalLinkAvatarInfo>::size(avatar_info_list);
  v15 = common::milog::MiLogStream::operator<<<int,(int *)0>(v14, (const int *)(v3 + 48));
  v16 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v15, (const char (*)[6])" uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
LABEL_36:
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &val);
  common::milog::MiLogStream::~MiLogStream(&v62);
  v2 = -1;
LABEL_69:
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 96));
LABEL_70:
  result = v2;
  if ( v63 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
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

// Line 668: range 00000000165AD0EC-00000000165ADDD6
int32_t __cdecl CrystalLinkActivity::restartDungeon(CrystalLinkActivity *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // r14
  int32_t v5; // r14d
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // r14
  ActivityCrystalLinkExcelConfigMgr *p_activity_crystal_link_config_mgr; // rcx
  uint32_t schedule_id; // ecx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  PlayerDungeonComp *DungeonComp; // r14
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // r14
  common::milog::MiLogStream *v20; // r14
  DungeonScene *v21; // rax
  DungeonScene *v22; // rcx
  int32_t result; // eax
  unsigned int val; // [rsp+14h] [rbp-33Ch] BYREF
  PlayerDungeonComp *dungeon_comp; // [rsp+18h] [rbp-338h]
  const CrystalLinkDungeonContext *dungeon_context; // [rsp+20h] [rbp-330h]
  const data::ActivityCrystalLinkDifficultyExcelConfig *difficulty_config_ptr; // [rsp+28h] [rbp-328h]
  std::tuple_element<0,std::pair<int,std::shared_ptr<DungeonScene> > >::type *ret; // [rsp+30h] [rbp-320h]
  std::tuple_element<1,std::pair<int,std::shared_ptr<DungeonScene> > >::type *dest_dungeon_scene_ptr; // [rsp+38h] [rbp-318h]
  std::shared_ptr<Config> v30; // [rsp+40h] [rbp-310h] BYREF
  std::pair<int,std::shared_ptr<DungeonScene> > __in; // [rsp+50h] [rbp-300h] BYREF
  EnterDungeonOption v32; // [rsp+70h] [rbp-2E0h] BYREF
  common::milog::MiLogStream v33; // [rsp+90h] [rbp-2C0h] BYREF
  std::map<unsigned int,unsigned int> level_config_id_map; // [rsp+B0h] [rbp-2A0h] BYREF
  char v35[624]; // [rsp+E0h] [rbp-270h] BYREF

  v1 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_4(576LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "4 32 4 12 ret_code:676 48 16 21 dungeon_scene_ptr:670 80 176 23 new_dungeon_context:710 320 184 "
                        "23 dungeon_context_opt:682";
  *(_QWORD *)(v1 + 16) = CrystalLinkActivity::restartDungeon;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61956;
  v3[536862722] = 62194;
  v3[536862728] = -218959118;
  v3[536862729] = -218959118;
  v3[536862735] = -218103808;
  v3[536862736] = -202116109;
  v3[536862737] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  dungeon_comp = Player::getDungeonComp(this->player_);
  PlayerDungeonComp::getCurDungeon((PlayerDungeonComp *const)(v1 + 48));
  if ( std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v1 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v33,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/crystal_link_activity.cpp",
      "restartDungeon",
      673);
    v4 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
           &v33,
           (const char (*)[47])"[CRYSTAL_LINK] dungeon_scene_ptr is null, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
    common::milog::MiLogStream::~MiLogStream(&v33);
    v5 = -1;
  }
  else
  {
    *(_DWORD *)(v1 + 32) = PlayerDungeonComp::checkRestartDungeon(dungeon_comp, DUNGEON_RESTART_REASON_DIE_RETRY);
    if ( *(_DWORD *)(v1 + 32) )
    {
      common::milog::MiLogStream::create(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/crystal_link_activity.cpp",
        "restartDungeon",
        679);
      v6 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
             &v33,
             (const char (*)[48])"[CRYSTAL_LINK] checkRestartDungeon failed, ret:");
      v7 = common::milog::MiLogStream::operator<<<int,(int *)0>(v6, (const int *)(v1 + 32));
      v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v7, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
      common::milog::MiLogStream::~MiLogStream(&v33);
      v5 = *(_DWORD *)(v1 + 32);
    }
    else
    {
      v9 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48));
      DungeonScene::getDungeonExtraData<CrystalLinkDungeonContext>(
        (std::optional<CrystalLinkDungeonContext> *)(v1 + 320),
        v9);
      if ( !std::optional<CrystalLinkDungeonContext>::has_value((const std::optional<CrystalLinkDungeonContext> *const)(v1 + 320)) )
      {
        common::milog::MiLogStream::create(
          &v33,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/crystal_link_activity.cpp",
          "restartDungeon",
          685);
        v10 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
                &v33,
                (const char (*)[61])"[CRYSTAL_LINK] cur dungeon is not crystal link dungeon, uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
        common::milog::MiLogStream::~MiLogStream(&v33);
        v5 = -1;
      }
      else
      {
        dungeon_context = std::optional<CrystalLinkDungeonContext>::value((std::optional<CrystalLinkDungeonContext> *const)(v1 + 320));
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v30);
        p_activity_crystal_link_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v30)->design_config.txt_config_mgr.activity_crystal_link_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)&dungeon_context->difficulty_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)dungeon_context + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_context->difficulty_id >> 3)
                                                                        + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        difficulty_config_ptr = data::ActivityCrystalLinkExcelConfigMgrBase::findActivityCrystalLinkDifficultyExcelConfig(
                                  p_activity_crystal_link_config_mgr,
                                  dungeon_context->difficulty_id);
        std::shared_ptr<Config>::~shared_ptr(&v30);
        if ( !difficulty_config_ptr )
          goto LABEL_26;
        if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        schedule_id = this->schedule_id_;
        if ( *(_BYTE *)(((unsigned __int64)&difficulty_config_ptr->schedule_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)difficulty_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&difficulty_config_ptr->schedule_id >> 3)
                                                                               + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( schedule_id == difficulty_config_ptr->schedule_id )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          DungeonComp = Player::getDungeonComp(this->player_);
          memset(&v32, 0, sizeof(v32));
          EnterDungeonOption::EnterDungeonOption(&v32);
          memset(&level_config_id_map, 0, sizeof(level_config_id_map));
          std::map<unsigned int,unsigned int>::map(&level_config_id_map);
          PlayerDungeonComp::restartDungeon(&__in, DungeonComp, &level_config_id_map, v32);
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
              &v33,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/activity/crystal_link_activity.cpp",
              "restartDungeon",
              700);
            v17 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                    &v33,
                    (const char (*)[44])"[CRYSTAL_LINK] restart dungeon failed, ret:");
            v18 = common::milog::MiLogStream::operator<<<int,(int *)0>(v17, ret);
            v19 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v18, (const char (*)[6])" uid:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            val = Player::getUid(this->player_);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &val);
            common::milog::MiLogStream::~MiLogStream(&v33);
            if ( *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            v5 = *ret;
          }
          else if ( std::operator==<DungeonScene>(0LL, dest_dungeon_scene_ptr) )
          {
            common::milog::MiLogStream::create(
              &v33,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/crystal_link_activity.cpp",
              "restartDungeon",
              705);
            v20 = common::milog::MiLogStream::operator<<<char [72],(char *[72])0>(
                    &v33,
                    (const char (*)[72])"[CRYSTAL_LINK] restart dungeon failed, dest dungeon scene is null, uid:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            val = Player::getUid(this->player_);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &val);
            common::milog::MiLogStream::~MiLogStream(&v33);
            v5 = -1;
          }
          else
          {
            CrystalLinkDungeonContext::CrystalLinkDungeonContext((CrystalLinkDungeonContext *const)(v1 + 80));
            if ( *(_BYTE *)(((unsigned __int64)dungeon_context >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)dungeon_context >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            *(_DWORD *)(v1 + 80) = dungeon_context->level_id;
            if ( *(_BYTE *)(((unsigned __int64)&dungeon_context->difficulty_id >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)dungeon_context + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_context->difficulty_id >> 3)
                                                                            + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            *(_DWORD *)(v1 + 84) = dungeon_context->difficulty_id;
            *(_BYTE *)(v1 + 88) = 1;
            v21 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)dest_dungeon_scene_ptr);
            DungeonScene::setDungeonExtraData<CrystalLinkDungeonContext>(
              v21,
              (const CrystalLinkDungeonContext *)(v1 + 80));
            v22 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)dest_dungeon_scene_ptr);
            if ( *(_BYTE *)(((unsigned __int64)&difficulty_config_ptr->dungeon_level >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&difficulty_config_ptr->dungeon_level >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            DungeonScene::setReviseLevel(v22, difficulty_config_ptr->dungeon_level);
            v5 = 0;
            CrystalLinkDungeonContext::~CrystalLinkDungeonContext((CrystalLinkDungeonContext *const)(v1 + 80));
          }
          std::pair<int,std::shared_ptr<DungeonScene>>::~pair(&__in);
        }
        else
        {
LABEL_26:
          common::milog::MiLogStream::create(
            &v33,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/crystal_link_activity.cpp",
            "restartDungeon",
            693);
          v13 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                  &v33,
                  (const char (*)[38])"[CRYSTAL_LINK] invalid difficulty_id:");
          v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v13,
                  &dungeon_context->difficulty_id);
          v15 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v14, (const char (*)[6])" uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
          common::milog::MiLogStream::~MiLogStream(&v33);
          v5 = -1;
        }
      }
      std::optional<CrystalLinkDungeonContext>::~optional((std::optional<CrystalLinkDungeonContext> *const)(v1 + 320));
    }
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v1 + 48));
  result = v5;
  if ( v35 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF803C) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8044) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 721: range 00000000165ADDD8-00000000165AEAB2
int32_t __cdecl CrystalLinkActivity::initCrystalLinkEnterSceneAvatar(
        CrystalLinkActivity *const this,
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
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  std::_Rb_tree_iterator<std::pair<unsigned int const,CrystalLinkLevelData> >::pointer v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  common::milog::MiLogStream *v18; // r14
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // r14
  PlayerAvatarComp *AvatarComp; // rcx
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // r14
  int v27; // r14d
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  common::milog::MiLogStream *v30; // r14
  const std::shared_ptr<Avatar> *v31; // rdx
  int32_t result; // eax
  unsigned int val; // [rsp+24h] [rbp-20Ch] BYREF
  int32_t ret; // [rsp+28h] [rbp-208h]
  uint32_t cur_team_index; // [rsp+2Ch] [rbp-204h]
  std::vector<CrystalLinkAvatarData>::iterator __for_begin; // [rsp+30h] [rbp-200h] BYREF
  std::vector<CrystalLinkAvatarData>::iterator __for_end; // [rsp+38h] [rbp-1F8h] BYREF
  const CrystalLinkDungeonContext *dungeon_context; // [rsp+40h] [rbp-1F0h]
  CrystalLinkLevelData *level_data; // [rsp+48h] [rbp-1E8h]
  std::vector<CrystalLinkAvatarData> *__for_range; // [rsp+50h] [rbp-1E0h]
  const CrystalLinkAvatarData *team_avatar; // [rsp+58h] [rbp-1D8h]
  common::milog::MiLogStream v44; // [rsp+60h] [rbp-1D0h] BYREF
  char v45[432]; // [rsp+80h] [rbp-1B0h] BYREF

  v4 = (unsigned __int64)v45;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(384LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 32 8 14 level_iter:736 64 16 21 dungeon_scene_ptr:722 96 16 14 avatar_ptr:768 128 184 23 dunge"
                        "on_context_opt:728";
  *(_QWORD *)(v4 + 16) = CrystalLinkActivity::initCrystalLinkEnterSceneAvatar;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -219021312;
  v6[536862723] = -219021312;
  v6[536862729] = -218103808;
  v6[536862730] = -202116109;
  v6[536862731] = -202116109;
  std::dynamic_pointer_cast<DungeonScene,Scene>((const std::shared_ptr<Scene> *)(v4 + 64));
  if ( std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v4 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v44,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/crystal_link_activity.cpp",
      "initCrystalLinkEnterSceneAvatar",
      725);
    v7 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
           &v44,
           (const char (*)[50])"[CRYSTAL_LINK] dungeon_scene_ptr is nullptr, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v44);
    v8 = -1;
  }
  else
  {
    v9 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    DungeonScene::getDungeonExtraData<CrystalLinkDungeonContext>(
      (std::optional<CrystalLinkDungeonContext> *)(v4 + 128),
      v9);
    if ( !std::optional<CrystalLinkDungeonContext>::has_value((const std::optional<CrystalLinkDungeonContext> *const)(v4 + 128)) )
    {
      common::milog::MiLogStream::create(
        &v44,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/crystal_link_activity.cpp",
        "initCrystalLinkEnterSceneAvatar",
        731);
      v10 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
              &v44,
              (const char (*)[50])"[CRYSTAL_LINK] dungeon context has not data, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
      common::milog::MiLogStream::~MiLogStream(&v44);
      v8 = -1;
    }
    else
    {
      dungeon_context = std::optional<CrystalLinkDungeonContext>::value((std::optional<CrystalLinkDungeonContext> *const)(v4 + 128));
      *(std::map<unsigned int,CrystalLinkLevelData>::iterator *)(v4 + 32) = std::map<unsigned int,CrystalLinkLevelData>::find(
                                                                              &this->level_data_map_,
                                                                              &dungeon_context->level_id);
      __for_end._M_current = (CrystalLinkAvatarData *)std::map<unsigned int,CrystalLinkLevelData>::end(&this->level_data_map_)._M_node;
      if ( std::operator==(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,CrystalLinkLevelData> >::_Self *)(v4 + 32),
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,CrystalLinkLevelData> >::_Self *)&__for_end) )
      {
        common::milog::MiLogStream::create(
          &v44,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/crystal_link_activity.cpp",
          "initCrystalLinkEnterSceneAvatar",
          739);
        v11 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                &v44,
                (const char (*)[35])"[CRYSTAL_LINK] not found level_id:");
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &dungeon_context->level_id);
        v13 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v12, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
        common::milog::MiLogStream::~MiLogStream(&v44);
        v8 = -1;
      }
      else
      {
        v14 = std::_Rb_tree_iterator<std::pair<unsigned int const,CrystalLinkLevelData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,CrystalLinkLevelData> > *const)(v4 + 32));
        level_data = &v14->second;
        ret = 0;
        if ( !std::vector<unsigned long>::empty(&v14->second.in_dungeon_avatar_guid_vec) )
          goto LABEL_23;
        if ( *(_BYTE *)(((unsigned __int64)level_data >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)level_data >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        ret = CrystalLinkActivity::createLevelDungeonAvatar(this, level_data->level_id);
        if ( ret )
        {
          common::milog::MiLogStream::create(
            &v44,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/crystal_link_activity.cpp",
            "initCrystalLinkEnterSceneAvatar",
            752);
          v15 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                  &v44,
                  (const char (*)[56])"[CRYSTAL_LINK] createLevelDungeonAvatar fail, level_id:");
          v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &level_data->level_id);
          v17 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v16, (const char (*)[6])" uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &val);
          common::milog::MiLogStream::~MiLogStream(&v44);
        }
        else
        {
LABEL_23:
          if ( *(char *)(((unsigned __int64)&dungeon_context->is_upper_part >> 3) + 0x7FFF8000) < 0 )
            __asan_report_load1(&dungeon_context->is_upper_part);
          cur_team_index = !dungeon_context->is_upper_part;
          if ( cur_team_index < std::vector<CrystalLinkTeamData>::size(&level_data->team_data_vec) )
          {
            __for_range = (std::vector<CrystalLinkAvatarData> *)std::vector<CrystalLinkTeamData>::operator[](
                                                                  &level_data->team_data_vec,
                                                                  cur_team_index);
            __for_begin._M_current = std::vector<CrystalLinkAvatarData>::begin(__for_range)._M_current;
            __for_end._M_current = std::vector<CrystalLinkAvatarData>::end(__for_range)._M_current;
            while ( __gnu_cxx::operator!=<CrystalLinkAvatarData *,std::vector<CrystalLinkAvatarData>>(
                      &__for_begin,
                      &__for_end) )
            {
              team_avatar = __gnu_cxx::__normal_iterator<CrystalLinkAvatarData *,std::vector<CrystalLinkAvatarData>>::operator*(&__for_begin);
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              AvatarComp = Player::getAvatarComp(this->player_);
              if ( *(_BYTE *)(((unsigned __int64)&team_avatar->in_dungeon_guid >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              PlayerAvatarComp::findAvatar((const PlayerAvatarComp *const)(v4 + 96), (uint64_t)AvatarComp);
              if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v4 + 96)) )
              {
                common::milog::MiLogStream::create(
                  &v44,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/activity/crystal_link_activity.cpp",
                  "initCrystalLinkEnterSceneAvatar",
                  771);
                v24 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                        &v44,
                        (const char (*)[40])"[CRYSTAL_LINK] findAvatar failed, guid:");
                v25 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                        v24,
                        &team_avatar->in_dungeon_guid);
                v26 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v25, (const char (*)[6])" uid:");
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                val = Player::getUid(this->player_);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &val);
                common::milog::MiLogStream::~MiLogStream(&v44);
                ret = -1;
                v27 = 0;
              }
              else
              {
                std::vector<std::shared_ptr<Avatar>>::push_back(
                  enter_scene_avatar_vec,
                  (const std::vector<std::shared_ptr<Avatar>>::value_type *)(v4 + 96));
                if ( std::operator==<Avatar>(0LL, appear_avatar_ptr) )
                {
                  v28 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
                  if ( Creature::getLifeState(v28) == LIFE_ALIVE )
                    std::shared_ptr<Avatar>::operator=(appear_avatar_ptr, (const std::shared_ptr<Avatar> *)(v4 + 96));
                }
                v27 = 1;
              }
              std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v4 + 96));
              if ( v27 != 1 )
                break;
              __gnu_cxx::__normal_iterator<CrystalLinkAvatarData *,std::vector<CrystalLinkAvatarData>>::operator++(&__for_begin);
            }
            if ( std::operator==<Avatar>(0LL, appear_avatar_ptr) )
            {
              if ( std::vector<std::shared_ptr<Avatar>>::size(enter_scene_avatar_vec) )
              {
                v31 = std::vector<std::shared_ptr<Avatar>>::operator[](enter_scene_avatar_vec, 0LL);
                std::shared_ptr<Avatar>::operator=(appear_avatar_ptr, v31);
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v44,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/activity/crystal_link_activity.cpp",
                  "initCrystalLinkEnterSceneAvatar",
                  786);
                v30 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
                        &v44,
                        (const char (*)[61])"[CRYSTAL_LINK] enter_scene_avatar_vec size less than 1, uid:");
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                val = Player::getUid(this->player_);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, &val);
                common::milog::MiLogStream::~MiLogStream(&v44);
                ret = -1;
              }
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v44,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/crystal_link_activity.cpp",
              "initCrystalLinkEnterSceneAvatar",
              760);
            v18 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                    &v44,
                    (const char (*)[40])"[CRYSTAL_LINK] invalid level team size:");
            __for_end._M_current = (CrystalLinkAvatarData *)std::vector<CrystalLinkTeamData>::size(&level_data->team_data_vec);
            v19 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                    v18,
                    (const unsigned __int64 *)&__for_end);
            v20 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v19, (const char (*)[11])" level_id:");
            v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &level_data->level_id);
            v22 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v21, (const char (*)[6])" uid:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            val = Player::getUid(this->player_);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &val);
            common::milog::MiLogStream::~MiLogStream(&v44);
            ret = -1;
          }
        }
        if ( ret )
        {
          if ( *(_BYTE *)(((unsigned __int64)level_data >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)level_data >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          CrystalLinkActivity::recallLevelDungeonAvatars(this, level_data->level_id);
        }
        v8 = ret;
      }
    }
    std::optional<CrystalLinkDungeonContext>::~optional((std::optional<CrystalLinkDungeonContext> *const)(v4 + 128));
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v4 + 64));
  result = v8;
  if ( v45 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8024) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF802C) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 805: range 00000000165AEAB4-00000000165AF898
__int64 __fastcall CrystalLinkActivity::createLevelDungeonAvatar(
        CrystalLinkActivity *const this,
        uint32_t level_id,
        __m128i a3)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rbx
  std::_Rb_tree_iterator<std::pair<unsigned int const,CrystalLinkLevelData> >::pointer v9; // rax
  uint32_t AvatarComp; // esi
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  FightPropComp *FightPropComp; // rax
  std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  common::milog::MiLogStream *v17; // rax
  std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  uint64_t Guid; // rax
  std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  unsigned __int64 v23; // rax
  uint64_t v24; // rdx
  const std::vector<long unsigned int>::value_type *v25; // rax
  __int64 result; // rax
  int v27; // [rsp+10h] [rbp-220h]
  FightPropComp *v28; // [rsp+10h] [rbp-220h]
  PlayerAvatarComp *v29; // [rsp+10h] [rbp-220h]
  std::vector<long unsigned int> *p_in_dungeon_avatar_guid_vec; // [rsp+10h] [rbp-220h]
  PlayerAvatarComp *v31; // [rsp+10h] [rbp-220h]
  int v32; // [rsp+10h] [rbp-220h]
  std::vector<long unsigned int> *v33; // [rsp+10h] [rbp-220h]
  unsigned int v34; // [rsp+18h] [rbp-218h]
  common::milog::MiLogStream *v35; // [rsp+18h] [rbp-218h]
  common::milog::MiLogStream *v36; // [rsp+18h] [rbp-218h]
  common::milog::MiLogStream *v37; // [rsp+18h] [rbp-218h]
  common::milog::MiLogStream *v38; // [rsp+18h] [rbp-218h]
  std::allocator<long unsigned int> __a; // [rsp+3Fh] [rbp-1F1h] BYREF
  unsigned int TrialAvatarId; // [rsp+40h] [rbp-1F0h] BYREF
  unsigned int val; // [rsp+44h] [rbp-1ECh] BYREF
  int ret; // [rsp+48h] [rbp-1E8h]
  float max_energy; // [rsp+4Ch] [rbp-1E4h]
  std::vector<CrystalLinkTeamData>::iterator __for_begin; // [rsp+50h] [rbp-1E0h] BYREF
  std::vector<CrystalLinkTeamData>::iterator __for_end; // [rsp+58h] [rbp-1D8h] BYREF
  std::vector<CrystalLinkAvatarData>::iterator __for_begin_0; // [rsp+60h] [rbp-1D0h] BYREF
  std::vector<CrystalLinkAvatarData>::iterator __for_end_0; // [rsp+68h] [rbp-1C8h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,CrystalLinkLevelData> >::_Self __y; // [rsp+70h] [rbp-1C0h] BYREF
  CrystalLinkLevelData *level_data; // [rsp+78h] [rbp-1B8h]
  std::vector<CrystalLinkTeamData> *__for_range; // [rsp+80h] [rbp-1B0h]
  CrystalLinkTeamData *team_data; // [rsp+88h] [rbp-1A8h]
  std::vector<CrystalLinkAvatarData> *__for_range_0; // [rsp+90h] [rbp-1A0h]
  CrystalLinkAvatarData *avatar_data; // [rsp+98h] [rbp-198h]
  proto::TrialAvatarGrantRecord v54; // [rsp+A0h] [rbp-190h] BYREF
  std::vector<long unsigned int> formal_guid_vec; // [rsp+C0h] [rbp-170h] BYREF
  common::milog::MiLogStream v56; // [rsp+E0h] [rbp-150h] BYREF
  char v57[304]; // [rsp+100h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v57;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 4 12 level_id:804 64 8 14 level_iter:806 96 16 20 trial_avatar_ptr:822 128 24 26 mirror_ava"
                        "tar_guid_vec:842 192 32 10 record:820";
  *(_QWORD *)(v3 + 16) = CrystalLinkActivity::createLevelDungeonAvatar;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -219021312;
  v5[536862724] = -234881024;
  v5[536862725] = -218959118;
  v5[536862727] = -202116109;
  *(_DWORD *)(v3 + 48) = level_id;
  *(std::map<unsigned int,CrystalLinkLevelData>::iterator *)(v3 + 64) = std::map<unsigned int,CrystalLinkLevelData>::find(
                                                                          &this->level_data_map_,
                                                                          (const std::map<unsigned int,CrystalLinkLevelData>::key_type *)(v3 + 48));
  __y._M_node = std::map<unsigned int,CrystalLinkLevelData>::end(&this->level_data_map_)._M_node;
  if ( !std::operator==(
          (const std::_Rb_tree_iterator<std::pair<unsigned int const,CrystalLinkLevelData> >::_Self *)(v3 + 64),
          &__y) )
  {
    v9 = std::_Rb_tree_iterator<std::pair<unsigned int const,CrystalLinkLevelData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,CrystalLinkLevelData> > *const)(v3 + 64));
    level_data = &v9->second;
    __for_range = &v9->second.team_data_vec;
    __for_begin._M_current = std::vector<CrystalLinkTeamData>::begin(&v9->second.team_data_vec)._M_current;
    __for_end._M_current = std::vector<CrystalLinkTeamData>::end(__for_range)._M_current;
    while ( 1 )
    {
      if ( !__gnu_cxx::operator!=<CrystalLinkTeamData *,std::vector<CrystalLinkTeamData>>(&__for_begin, &__for_end) )
      {
        v34 = 0;
        goto LABEL_55;
      }
      team_data = __gnu_cxx::__normal_iterator<CrystalLinkTeamData *,std::vector<CrystalLinkTeamData>>::operator*(&__for_begin);
      __for_range_0 = &team_data->avatar_data_vec;
      __for_begin_0._M_current = std::vector<CrystalLinkAvatarData>::begin(&team_data->avatar_data_vec)._M_current;
      __for_end_0._M_current = std::vector<CrystalLinkAvatarData>::end(__for_range_0)._M_current;
      while ( __gnu_cxx::operator!=<CrystalLinkAvatarData *,std::vector<CrystalLinkAvatarData>>(
                &__for_begin_0,
                &__for_end_0) )
      {
        avatar_data = __gnu_cxx::__normal_iterator<CrystalLinkAvatarData *,std::vector<CrystalLinkAvatarData>>::operator*(&__for_begin_0);
        if ( *(char *)(((unsigned __int64)avatar_data >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(avatar_data);
        if ( avatar_data->is_trial )
        {
          proto::TrialAvatarGrantRecord::TrialAvatarGrantRecord((proto::TrialAvatarGrantRecord *const)(v3 + 192));
          proto::TrialAvatarGrantRecord::set_grant_reason((proto::TrialAvatarGrantRecord *const)(v3 + 192), 7u);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          AvatarComp = (unsigned int)Player::getAvatarComp(this->player_);
          if ( *(_BYTE *)(((unsigned __int64)&avatar_data->avatar_id >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          PlayerAvatarComp::createTrialAvatar((PlayerAvatarComp *const)(v3 + 96), AvatarComp, avatar_data->avatar_id);
          if ( std::operator==<TrialAvatar>(0LL, (const std::shared_ptr<TrialAvatar> *)(v3 + 96)) )
          {
            common::milog::MiLogStream::create(
              &v56,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/crystal_link_activity.cpp",
              "createLevelDungeonAvatar",
              825);
            v11 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                    &v56,
                    (const char (*)[56])"[CRYSTAL_LINK] createTrialAvatar fail, trial_avatar_id:");
            v12 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v11, &avatar_data->avatar_id);
            v35 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v12, (const char (*)[6])" uid:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            goto LABEL_22;
          }
          v13 = std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
          FightPropComp = Creature::getFightPropComp(v13);
          *(float *)a3.m128i_i32 = FightPropComp::getMaxEnergy(FightPropComp);
          LODWORD(max_energy) = _mm_cvtsi128_si32(a3);
          v15 = std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
          v28 = Creature::getFightPropComp(v15);
          std::shared_ptr<FightPropNtfParam>::shared_ptr(
            (std::shared_ptr<FightPropNtfParam> *const)&v54.grant_reason_,
            0LL);
          a3 = _mm_cvtsi32_si128(LODWORD(max_energy));
          FightPropComp::setCurEnergy(v28, *(float *)a3.m128i_i32, 0, (FightPropNtfParamPtr *)&v54.grant_reason_);
          std::shared_ptr<FightPropNtfParam>::~shared_ptr((std::shared_ptr<FightPropNtfParam> *const)&v54.grant_reason_);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v29 = Player::getAvatarComp(this->player_);
          std::shared_ptr<TrialAvatar>::shared_ptr(
            (std::shared_ptr<TrialAvatar> *const)&v54,
            (const std::shared_ptr<TrialAvatar> *)(v3 + 96));
          PlayerAvatarComp::addTrialAvatar((PlayerAvatarComp *const)&v54.grant_reason_, (TrialAvatarPtr *)v29, &v54);
          LOBYTE(v29) = std::operator==<TrialAvatar>(0LL, (const std::shared_ptr<TrialAvatar> *)&v54.grant_reason_);
          std::shared_ptr<TrialAvatar>::~shared_ptr((std::shared_ptr<TrialAvatar> *const)&v54.grant_reason_);
          std::shared_ptr<TrialAvatar>::~shared_ptr((std::shared_ptr<TrialAvatar> *const)&v54);
          if ( (_BYTE)v29 )
          {
            common::milog::MiLogStream::create(
              &v56,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/crystal_link_activity.cpp",
              "createLevelDungeonAvatar",
              833);
            v36 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                    &v56,
                    (const char (*)[55])"[CRYSTAL_LINK] addTrialAvatar failed, trial_avatar_id:");
            v16 = std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
            TrialAvatarId = TrialAvatar::getTrialAvatarId(v16);
            v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, &TrialAvatarId);
            v35 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v17, (const char (*)[6])" uid:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
LABEL_22:
            val = Player::getUid(this->player_);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, &val);
            common::milog::MiLogStream::~MiLogStream(&v56);
            v34 = -1;
            v27 = 0;
          }
          else
          {
            v18 = std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
            Guid = Avatar::getGuid(v18);
            if ( *(_BYTE *)(((unsigned __int64)&avatar_data->in_dungeon_guid >> 3) + 0x7FFF8000) )
              *(double *)a3.m128i_i64 = __asan_report_store8(&avatar_data->in_dungeon_guid);
            avatar_data->in_dungeon_guid = Guid;
            p_in_dungeon_avatar_guid_vec = &level_data->in_dungeon_avatar_guid_vec;
            v20 = std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
            __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,CrystalLinkLevelData> >::_Base_ptr)Avatar::getGuid(v20);
            std::vector<unsigned long>::push_back(
              p_in_dungeon_avatar_guid_vec,
              (std::vector<long unsigned int>::value_type *)&__y);
            v27 = 1;
          }
          std::shared_ptr<TrialAvatar>::~shared_ptr((std::shared_ptr<TrialAvatar> *const)(v3 + 96));
          proto::TrialAvatarGrantRecord::~TrialAvatarGrantRecord((proto::TrialAvatarGrantRecord *const)(v3 + 192));
          if ( v27 != 1 )
            goto LABEL_55;
          goto LABEL_52;
        }
        std::vector<unsigned long>::vector((std::vector<long unsigned int> *const)(v3 + 128));
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v31 = Player::getAvatarComp(this->player_);
        if ( *(_BYTE *)(((unsigned __int64)&avatar_data->avatar_id >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,CrystalLinkLevelData> >::_Base_ptr)avatar_data->avatar_id;
        std::allocator<unsigned long>::allocator(&__a);
        std::vector<unsigned long>::vector(
          &formal_guid_vec,
          (std::initializer_list<long unsigned int>)__PAIR128__(1LL, &__y),
          &__a);
        ret = PlayerAvatarComp::addMirrorAvatars(
                v31,
                &formal_guid_vec,
                (std::vector<long unsigned int> *)(v3 + 128),
                AVATAR_SNAPSHOT_TYPE_NONE);
        std::vector<unsigned long>::~vector(&formal_guid_vec);
        std::allocator<unsigned long>::~allocator(&__a);
        if ( ret )
        {
          common::milog::MiLogStream::create(
            &v56,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/crystal_link_activity.cpp",
            "createLevelDungeonAvatar",
            846);
          v21 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
                  &v56,
                  (const char (*)[60])"[CRYSTAL_LINK] addMirrorAvatars failed, formal_avatar_guid:");
          v22 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v21, &avatar_data->avatar_id);
          v37 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v22, (const char (*)[6])" uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, &val);
          common::milog::MiLogStream::~MiLogStream(&v56);
          v34 = ret;
          v32 = 0;
        }
        else if ( std::vector<unsigned long>::size((const std::vector<long unsigned int> *const)(v3 + 128)) == 1 )
        {
          v23 = (unsigned __int64)std::vector<unsigned long>::operator[](
                                    (std::vector<long unsigned int> *const)(v3 + 128),
                                    0LL);
          if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
            v23 = __asan_report_load8();
          v24 = *(_QWORD *)v23;
          if ( *(_BYTE *)(((unsigned __int64)&avatar_data->in_dungeon_guid >> 3) + 0x7FFF8000) )
            *(double *)a3.m128i_i64 = __asan_report_store8(&avatar_data->in_dungeon_guid);
          avatar_data->in_dungeon_guid = v24;
          v33 = &level_data->in_dungeon_avatar_guid_vec;
          v25 = std::vector<unsigned long>::operator[]((std::vector<long unsigned int> *const)(v3 + 128), 0LL);
          std::vector<unsigned long>::push_back(v33, v25);
          v32 = 1;
        }
        else
        {
          common::milog::MiLogStream::create(
            &v56,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/crystal_link_activity.cpp",
            "createLevelDungeonAvatar",
            851);
          v38 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                  &v56,
                  (const char (*)[56])"[CRYSTAL_LINK]  added mirror avatar num incorrect, uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v38, &val);
          common::milog::MiLogStream::~MiLogStream(&v56);
          v34 = -1;
          v32 = 0;
        }
        std::vector<unsigned long>::~vector((std::vector<long unsigned int> *const)(v3 + 128));
        if ( v32 != 1 )
          goto LABEL_55;
LABEL_52:
        __gnu_cxx::__normal_iterator<CrystalLinkAvatarData *,std::vector<CrystalLinkAvatarData>>::operator++(&__for_begin_0);
      }
      __gnu_cxx::__normal_iterator<CrystalLinkTeamData *,std::vector<CrystalLinkTeamData>>::operator++(&__for_begin);
    }
  }
  common::milog::MiLogStream::create(
    &v56,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/activity/crystal_link_activity.cpp",
    "createLevelDungeonAvatar",
    809);
  v6 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
         &v56,
         (const char (*)[35])"[CRYSTAL_LINK] not found level_id:");
  v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
  v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v7, (const char (*)[6])" uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
  common::milog::MiLogStream::~MiLogStream(&v56);
  v34 = -1;
LABEL_55:
  result = v34;
  if ( v57 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
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

// Line 864: range 00000000165AF89A-00000000165B1381
__int64 __fastcall CrystalLinkActivity::forceSetUpDungeonTeam(
        CrystalLinkActivity *const this,
        uint32_t team_id,
        uint32_t init_gallery_progress)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r14
  unsigned int v7; // r14d
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // r14
  CrystalLinkDungeonContext *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  std::_Rb_tree_iterator<std::pair<unsigned int const,CrystalLinkLevelData> >::pointer v14; // rax
  bool *p_is_open; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // r14
  common::milog::MiLogStream *v24; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  common::milog::MiLogStream *v26; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // r14
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rdx
  Entity *v32; // rax
  Avatar *v33; // rax
  Avatar *v34; // rax
  uint32_t Uid; // eax
  uint32_t v36; // edx
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  PlayerAvatarComp *AvatarComp; // rcx
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v44; // rax
  common::milog::MiLogStream *v46; // r14
  PlayerAvatarComp *v47; // rax
  google::protobuf::RepeatedPtrField<proto::CrystalLinkBuffInfo> *v48; // rax
  PlayerAvatarComp *v49; // r14
  common::milog::MiLogStream *v50; // r14
  DungeonScene *v51; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // rax
  common::milog::MiLogStream *v58; // r14
  __int64 result; // rax
  std::vector<CrystalLinkTeamData>::size_type v60; // [rsp+8h] [rbp-4A8h]
  std::vector<CrystalLinkTeamData>::size_type v61; // [rsp+8h] [rbp-4A8h]
  Scene *v62; // [rsp+8h] [rbp-4A8h]
  common::milog::MiLogStream *v63; // [rsp+8h] [rbp-4A8h]
  std::vector<bool>::size_type v64; // [rsp+8h] [rbp-4A8h]
  common::milog::MiLogStream *v65; // [rsp+8h] [rbp-4A8h]
  unsigned int val; // [rsp+24h] [rbp-48Ch] BYREF
  std::vector<CrystalLinkAvatarData>::const_iterator __for_begin; // [rsp+28h] [rbp-488h] BYREF
  std::vector<CrystalLinkAvatarData>::const_iterator __for_end; // [rsp+30h] [rbp-480h] BYREF
  uint64_t appear_avatar_guid; // [rsp+38h] [rbp-478h]
  CrystalLinkLevelData *level_data; // [rsp+40h] [rbp-470h]
  const CrystalLinkTeamData *switch_team_data; // [rsp+48h] [rbp-468h]
  const SceneScriptConfig *scene_script_config_ptr; // [rsp+50h] [rbp-460h]
  const std::vector<CrystalLinkAvatarData> *__for_range; // [rsp+58h] [rbp-458h]
  const std::vector<CrystalLinkAvatarData> *__for_range_0; // [rsp+60h] [rbp-450h]
  const CrystalLinkAvatarData *avatar_data_0; // [rsp+68h] [rbp-448h]
  proto::CrystalLinkDungeonAvatarInfo *dungeon_avatar_info; // [rsp+70h] [rbp-440h]
  const CrystalLinkAvatarData *avatar_data; // [rsp+78h] [rbp-438h]
  common::milog::MiLogStream v79; // [rsp+80h] [rbp-430h] BYREF
  char v80[1040]; // [rsp+A0h] [rbp-410h] BYREF

  v3 = (unsigned __int64)v80;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(992LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "12 48 4 18 cur_team_index:891 64 4 21 switch_team_index:892 80 4 25 init_gallery_progress:863 96"
                        " 8 14 level_iter:878 128 16 21 dungeon_scene_ptr:865 160 16 18 cur_avatar_ptr:909 192 16 14 avat"
                        "ar_ptr:946 224 24 19 avatar_guid_vec:942 288 48 19 player_location:923 368 88 10 notify:971 496 "
                        "176 19 dungeon_context:877 736 184 23 dungeon_context_opt:871";
  *(_QWORD *)(v3 + 16) = CrystalLinkActivity::forceSetUpDungeonTeam;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -218959360;
  v5[536862724] = -219021312;
  v5[536862725] = -219021312;
  v5[536862726] = -219021312;
  v5[536862727] = -234881024;
  v5[536862728] = -218959118;
  v5[536862730] = -219021312;
  v5[536862731] = 62194;
  v5[536862734] = -218959360;
  v5[536862735] = 62194;
  v5[536862741] = -218959118;
  v5[536862742] = -218959118;
  v5[536862748] = -218103808;
  v5[536862749] = -202116109;
  v5[536862750] = -202116109;
  *(_DWORD *)(v3 + 80) = init_gallery_progress;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getDungeonComp(this->player_);
  PlayerDungeonComp::getCurDungeon((PlayerDungeonComp *const)(v3 + 128));
  if ( !std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v3 + 128)) )
  {
    v8 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
    DungeonScene::getDungeonExtraData<CrystalLinkDungeonContext>(
      (std::optional<CrystalLinkDungeonContext> *)(v3 + 736),
      v8);
    if ( !std::optional<CrystalLinkDungeonContext>::has_value((const std::optional<CrystalLinkDungeonContext> *const)(v3 + 736)) )
    {
      common::milog::MiLogStream::create(
        &v79,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/crystal_link_activity.cpp",
        "forceSetUpDungeonTeam",
        874);
      v9 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
             &v79,
             (const char (*)[50])"[CRYSTAL_LINK] dungeon context has not data, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
      common::milog::MiLogStream::~MiLogStream(&v79);
      v7 = -1;
      goto LABEL_107;
    }
    v10 = std::optional<CrystalLinkDungeonContext>::value((std::optional<CrystalLinkDungeonContext> *const)(v3 + 736));
    CrystalLinkDungeonContext::CrystalLinkDungeonContext((CrystalLinkDungeonContext *const)(v3 + 496), v10);
    *(std::map<unsigned int,CrystalLinkLevelData>::iterator *)(v3 + 96) = std::map<unsigned int,CrystalLinkLevelData>::find(
                                                                            &this->level_data_map_,
                                                                            (const std::map<unsigned int,CrystalLinkLevelData>::key_type *)(v3 + 496));
    __for_end._M_current = (const CrystalLinkAvatarData *)std::map<unsigned int,CrystalLinkLevelData>::end(&this->level_data_map_)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,CrystalLinkLevelData> >::_Self *)(v3 + 96),
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,CrystalLinkLevelData> >::_Self *)&__for_end) )
    {
      common::milog::MiLogStream::create(
        &v79,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/crystal_link_activity.cpp",
        "forceSetUpDungeonTeam",
        881);
      v11 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
              &v79,
              (const char (*)[35])"[CRYSTAL_LINK] not found level_id:");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v11,
              (const unsigned int *)(v3 + 496));
      v13 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v12, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
    }
    else
    {
      v14 = std::_Rb_tree_iterator<std::pair<unsigned int const,CrystalLinkLevelData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,CrystalLinkLevelData> > *const)(v3 + 96));
      level_data = &v14->second;
      p_is_open = &v14->second.is_open;
      if ( *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)p_is_open & 7) >= *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(p_is_open);
      }
      if ( !level_data->is_open )
      {
        common::milog::MiLogStream::create(
          &v79,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/crystal_link_activity.cpp",
          "forceSetUpDungeonTeam",
          887);
        v16 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                &v79,
                (const char (*)[34])"[CRYSTAL_LINK] not open level_id:");
        v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &level_data->level_id);
        v13 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v17, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
      }
      else
      {
        *(_DWORD *)(v3 + 48) = *(_BYTE *)(v3 + 504) == 0;
        *(_DWORD *)(v3 + 64) = team_id - 1;
        v60 = *(unsigned int *)(v3 + 64);
        if ( v60 >= std::vector<CrystalLinkTeamData>::size(&level_data->team_data_vec)
          || (v61 = *(unsigned int *)(v3 + 48), v61 >= std::vector<CrystalLinkTeamData>::size(&level_data->team_data_vec)) )
        {
          common::milog::MiLogStream::create(
            &v79,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/crystal_link_activity.cpp",
            "forceSetUpDungeonTeam",
            895);
          v19 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                  &v79,
                  (const char (*)[31])"[CRYSTAL_LINK] cur_team_index:");
          v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v19,
                  (const unsigned int *)(v3 + 48));
          v21 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                  v20,
                  (const char (*)[20])" switch_team_index:");
          v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v21,
                  (const unsigned int *)(v3 + 64));
          v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  v22,
                  (const char (*)[16])" team_data_vec:");
          __for_end._M_current = (const CrystalLinkAvatarData *)std::vector<CrystalLinkTeamData>::size(&level_data->team_data_vec);
          v24 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                  v23,
                  (const unsigned __int64 *)&__for_end);
          v13 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v24, (const char (*)[6])" uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
        }
        else
        {
          switch_team_data = std::vector<CrystalLinkTeamData>::operator[](
                               &level_data->team_data_vec,
                               *(unsigned int *)(v3 + 64));
          v25 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
          scene_script_config_ptr = Scene::getScriptConfig((const Scene *const)v25);
          if ( scene_script_config_ptr )
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            Player::getAvatarComp(this->player_);
            PlayerAvatarComp::getCurAvatar((const PlayerAvatarComp *const)(v3 + 160));
            if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v3 + 160)) )
            {
              common::milog::MiLogStream::create(
                &v79,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/crystal_link_activity.cpp",
                "forceSetUpDungeonTeam",
                912);
              v29 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                      &v79,
                      (const char (*)[39])"[CRYSTAL_LINK] getCurAvatar fail, uid:");
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              val = Player::getUid(this->player_);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, &val);
              common::milog::MiLogStream::~MiLogStream(&v79);
              v7 = -1;
            }
            else
            {
              v30 = (unsigned __int64)std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
              if ( *(_BYTE *)((v30 >> 3) + 0x7FFF8000) )
                v30 = __asan_report_load8();
              v31 = *(_QWORD *)v30 + 80LL;
              if ( *(_BYTE *)((v31 >> 3) + 0x7FFF8000) )
                v30 = __asan_report_load8();
              (*(void (__fastcall **)(unsigned __int64, Vector3 *))v31)(v30, &scene_script_config_ptr->born_pos);
              v32 = (Entity *)std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
              Entity::setRotation(v32, &scene_script_config_ptr->born_rot);
              v33 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
              Avatar::setLastValidPos(v33, &scene_script_config_ptr->born_pos);
              v34 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
              Avatar::setLastValidRot(v34, &scene_script_config_ptr->born_rot);
              ScenePlayerLocation::ScenePlayerLocation((ScenePlayerLocation *const)(v3 + 288));
              if ( (((unsigned __int8)scene_script_config_ptr - 52) & 7) >= *(_BYTE *)(((unsigned __int64)&scene_script_config_ptr->born_pos >> 3)
                                                                                     + 0x7FFF8000)
                && *(_BYTE *)(((unsigned __int64)&scene_script_config_ptr->born_pos >> 3) + 0x7FFF8000) != 0
                || *(_BYTE *)((((unsigned __int64)&scene_script_config_ptr->born_pos.z + 3) >> 3) + 0x7FFF8000) != 0
                && (((unsigned __int8)scene_script_config_ptr - 41) & 7) >= *(_BYTE *)((((unsigned __int64)&scene_script_config_ptr->born_pos.z
                                                                                       + 3) >> 3)
                                                                                     + 0x7FFF8000) )
              {
                __asan_report_load_n(&scene_script_config_ptr->born_pos, 12LL);
              }
              *(Vector3 *)(v3 + 288) = scene_script_config_ptr->born_pos;
              if ( *(char *)(((unsigned __int64)&scene_script_config_ptr->born_rot >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)((((unsigned __int64)&scene_script_config_ptr->born_rot.z + 3) >> 3) + 0x7FFF8000) != 0
                && (((unsigned __int8)scene_script_config_ptr - 29) & 7) >= *(_BYTE *)((((unsigned __int64)&scene_script_config_ptr->born_rot.z
                                                                                       + 3) >> 3)
                                                                                     + 0x7FFF8000) )
              {
                __asan_report_load_n(&scene_script_config_ptr->born_rot, 12LL);
              }
              *(Vector3 *)(v3 + 300) = scene_script_config_ptr->born_rot;
              *(Vector3 *)(v3 + 312) = scene_script_config_ptr->born_pos;
              *(Vector3 *)(v3 + 324) = scene_script_config_ptr->born_rot;
              v62 = (Scene *)std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              Uid = Player::getUid(this->player_);
              Scene::setPlayerLocation(v62, Uid, (const ScenePlayerLocation *)(v3 + 288));
              v36 = *(_DWORD *)(v3 + 48);
              if ( *(_BYTE *)(((unsigned __int64)level_data >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)level_data >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4();
              }
              if ( CrystalLinkActivity::delTeamAbilityGroup(this, level_data->level_id, v36) )
              {
                common::milog::MiLogStream::create(
                  &v79,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/activity/crystal_link_activity.cpp",
                  "forceSetUpDungeonTeam",
                  933);
                v37 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                        &v79,
                        (const char (*)[55])"[CRYSTAL_LINK] delTeamAbilityGroup failed, team_index:");
                v38 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v37,
                        (const unsigned int *)(v3 + 48));
                v39 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                        v38,
                        (const char (*)[11])" level_id:");
                v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v39, &level_data->level_id);
                v63 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v40, (const char (*)[6])" uid:");
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                val = Player::getUid(this->player_);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v63, &val);
                common::milog::MiLogStream::~MiLogStream(&v79);
              }
              v64 = *(unsigned int *)(v3 + 48);
              if ( v64 < std::vector<bool>::size((const std::vector<bool> *const)(v3 + 512)) )
              {
                *(std::vector<bool>::reference *)(v3 + 192) = std::vector<bool>::operator[](
                                                                (std::vector<bool> *const)(v3 + 512),
                                                                *(unsigned int *)(v3 + 48));
                std::_Bit_reference::operator=((std::_Bit_reference *const)(v3 + 192), 0);
              }
              std::vector<unsigned long>::vector((std::vector<long unsigned int> *const)(v3 + 224));
              appear_avatar_guid = 0LL;
              __for_range = &switch_team_data->avatar_data_vec;
              __for_begin._M_current = std::vector<CrystalLinkAvatarData>::begin(&switch_team_data->avatar_data_vec)._M_current;
              __for_end._M_current = std::vector<CrystalLinkAvatarData>::end(__for_range)._M_current;
              while ( __gnu_cxx::operator!=<CrystalLinkAvatarData const*,std::vector<CrystalLinkAvatarData>>(
                        &__for_begin,
                        &__for_end) )
              {
                avatar_data = __gnu_cxx::__normal_iterator<CrystalLinkAvatarData const*,std::vector<CrystalLinkAvatarData>>::operator*(&__for_begin);
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                AvatarComp = Player::getAvatarComp(this->player_);
                if ( *(_BYTE *)(((unsigned __int64)&avatar_data->in_dungeon_guid >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                PlayerAvatarComp::findAvatar((const PlayerAvatarComp *const)(v3 + 192), (uint64_t)AvatarComp);
                if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v3 + 192)) )
                {
                  common::milog::MiLogStream::create(
                    &v79,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/activity/crystal_link_activity.cpp",
                    "forceSetUpDungeonTeam",
                    949);
                  v42 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                          &v79,
                          (const char (*)[50])"[CRYSTAL_LINK] in dungeon avatar not found, guid:");
                  v43 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                          v42,
                          &avatar_data->in_dungeon_guid);
                  v65 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v43, (const char (*)[6])" uid:");
                  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8();
                  val = Player::getUid(this->player_);
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v65, &val);
                  common::milog::MiLogStream::~MiLogStream(&v79);
                }
                else
                {
                  std::vector<unsigned long>::push_back(
                    (std::vector<long unsigned int> *const)(v3 + 224),
                    &avatar_data->in_dungeon_guid);
                  if ( !appear_avatar_guid )
                  {
                    v44 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
                    if ( Creature::getLifeState(v44) == LIFE_ALIVE )
                    {
                      if ( *(_BYTE *)(((unsigned __int64)&avatar_data->in_dungeon_guid >> 3) + 0x7FFF8000) )
                        __asan_report_load8();
                      appear_avatar_guid = avatar_data->in_dungeon_guid;
                    }
                  }
                }
                std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 192));
                __gnu_cxx::__normal_iterator<CrystalLinkAvatarData const*,std::vector<CrystalLinkAvatarData>>::operator++(&__for_begin);
              }
              if ( appear_avatar_guid )
              {
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                v47 = Player::getAvatarComp(this->player_);
                PlayerAvatarComp::triggerCombatEnd(v47, COMBAT_END_CRYSTAL_LINK_HALF_LEVEL_END);
                *(_BYTE *)(v3 + 504) = *(_DWORD *)(v3 + 64) == 0;
                *(_DWORD *)(v3 + 508) = *(_DWORD *)(v3 + 80);
                proto::CrystalLinkDungeonInfoNotify::CrystalLinkDungeonInfoNotify((proto::CrystalLinkDungeonInfoNotify *const)(v3 + 368));
                proto::CrystalLinkDungeonInfoNotify::set_level_id(
                  (proto::CrystalLinkDungeonInfoNotify *const)(v3 + 368),
                  *(_DWORD *)(v3 + 496));
                proto::CrystalLinkDungeonInfoNotify::set_difficulty_id(
                  (proto::CrystalLinkDungeonInfoNotify *const)(v3 + 368),
                  *(_DWORD *)(v3 + 500));
                proto::CrystalLinkDungeonInfoNotify::set_is_upper_part(
                  (proto::CrystalLinkDungeonInfoNotify *const)(v3 + 368),
                  *(_BYTE *)(v3 + 504));
                proto::CrystalLinkDungeonInfoNotify::set_init_gallery_progress(
                  (proto::CrystalLinkDungeonInfoNotify *const)(v3 + 368),
                  *(_DWORD *)(v3 + 80));
                __for_range_0 = &switch_team_data->avatar_data_vec;
                __for_begin._M_current = std::vector<CrystalLinkAvatarData>::begin(&switch_team_data->avatar_data_vec)._M_current;
                __for_end._M_current = std::vector<CrystalLinkAvatarData>::end(__for_range_0)._M_current;
                while ( __gnu_cxx::operator!=<CrystalLinkAvatarData const*,std::vector<CrystalLinkAvatarData>>(
                          &__for_begin,
                          &__for_end) )
                {
                  avatar_data_0 = __gnu_cxx::__normal_iterator<CrystalLinkAvatarData const*,std::vector<CrystalLinkAvatarData>>::operator*(&__for_begin);
                  dungeon_avatar_info = proto::CrystalLinkDungeonInfoNotify::add_dungeon_avatar_info_list((proto::CrystalLinkDungeonInfoNotify *const)(v3 + 368));
                  if ( *(char *)(((unsigned __int64)avatar_data_0 >> 3) + 0x7FFF8000) < 0 )
                    __asan_report_load1(avatar_data_0);
                  proto::CrystalLinkDungeonAvatarInfo::set_is_trial(dungeon_avatar_info, avatar_data_0->is_trial);
                  if ( *(_BYTE *)(((unsigned __int64)&avatar_data_0->in_dungeon_guid >> 3) + 0x7FFF8000) )
                    __asan_report_load8();
                  proto::CrystalLinkDungeonAvatarInfo::set_avatar_guid(
                    dungeon_avatar_info,
                    avatar_data_0->in_dungeon_guid);
                  __gnu_cxx::__normal_iterator<CrystalLinkAvatarData const*,std::vector<CrystalLinkAvatarData>>::operator++(&__for_begin);
                }
                v48 = proto::CrystalLinkDungeonInfoNotify::mutable_buff_info_list((proto::CrystalLinkDungeonInfoNotify *const)(v3 + 368));
                common::tools::MiscUtils::vectorToRepeated<CrystalLinkBuffData,proto::CrystalLinkBuffInfo,int (CrystalLinkBuffData::*)(proto::CrystalLinkBuffInfo&)const>(
                  &switch_team_data->buff_data_vec,
                  v48,
                  (int (*)(const CrystalLinkBuffData *, proto::CrystalLinkBuffInfo *))CrystalLinkBuffData::toClient);
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                Player::sendProto(this->player_, (const google::protobuf::Message *)(v3 + 368));
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                v49 = Player::getAvatarComp(this->player_);
                std::shared_ptr<Scene>::shared_ptr<DungeonScene,void>(
                  (std::shared_ptr<Scene> *const)(v3 + 192),
                  (const std::shared_ptr<DungeonScene> *)(v3 + 128));
                LOBYTE(v49) = PlayerAvatarComp::setSceneTeamAndAddToScene(
                                v49,
                                (const std::vector<long unsigned int> *)(v3 + 224),
                                appear_avatar_guid,
                                (ScenePtr *)(v3 + 192),
                                CHANGE_SCENE_TEAM_REASON_SUMO_ACTIVITY_SWITCH_TEAM) != 0;
                std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 192));
                if ( (_BYTE)v49 )
                {
                  common::milog::MiLogStream::create(
                    &v79,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/activity/crystal_link_activity.cpp",
                    "forceSetUpDungeonTeam",
                    988);
                  v50 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
                          &v79,
                          (const char (*)[54])"[CRYSTAL_LINK] setSceneTeamAndAddToScene failed, uid:");
                  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8();
                  val = Player::getUid(this->player_);
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v50, &val);
                  common::milog::MiLogStream::~MiLogStream(&v79);
                  v7 = -1;
                }
                else
                {
                  v51 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
                  DungeonScene::setDungeonExtraData<CrystalLinkDungeonContext>(
                    v51,
                    (const CrystalLinkDungeonContext *)(v3 + 496));
                  common::milog::MiLogStream::create(
                    &v79,
                    &common::milog::MiLogDefault::default_log_obj_,
                    1u,
                    "./src/player/activity/crystal_link_activity.cpp",
                    "forceSetUpDungeonTeam",
                    993);
                  v52 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                          &v79,
                          (const char (*)[48])"[CRYSTAL_LINK] forceSetUpDungeonTeam from team:");
                  v53 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v52,
                          (const unsigned int *)(v3 + 48));
                  v54 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                          v53,
                          (const char (*)[10])off_25D21FE0);
                  v55 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v54,
                          (const unsigned int *)(v3 + 64));
                  v56 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                          v55,
                          (const char (*)[24])" init_gallery_progress:");
                  v57 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v56,
                          (const unsigned int *)(v3 + 80));
                  v58 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v57, (const char (*)[6])" uid:");
                  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8();
                  val = Player::getUid(this->player_);
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v58, &val);
                  common::milog::MiLogStream::~MiLogStream(&v79);
                  v7 = 0;
                }
                proto::CrystalLinkDungeonInfoNotify::~CrystalLinkDungeonInfoNotify((proto::CrystalLinkDungeonInfoNotify *const)(v3 + 368));
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v79,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/activity/crystal_link_activity.cpp",
                  "forceSetUpDungeonTeam",
                  960);
                v46 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                        &v79,
                        (const char (*)[37])"[CRYSTAL_LINK] all avatar dead, uid:");
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                val = Player::getUid(this->player_);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v46, &val);
                common::milog::MiLogStream::~MiLogStream(&v79);
                v7 = -1;
              }
              std::vector<unsigned long>::~vector((std::vector<long unsigned int> *const)(v3 + 224));
            }
            std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 160));
            goto LABEL_106;
          }
          common::milog::MiLogStream::create(
            &v79,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/crystal_link_activity.cpp",
            "forceSetUpDungeonTeam",
            905);
          v26 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                  &v79,
                  (const char (*)[44])"[CRYSTAL_LINK] getScriptConfig fail, scene:");
          v27 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
          v28 = common::milog::MiLogStream::operator<<<DungeonScene,(DungeonScene*)0>(v26, v27);
          v13 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v28, (const char (*)[6])" uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
        }
      }
    }
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
    common::milog::MiLogStream::~MiLogStream(&v79);
    v7 = -1;
LABEL_106:
    CrystalLinkDungeonContext::~CrystalLinkDungeonContext((CrystalLinkDungeonContext *const)(v3 + 496));
LABEL_107:
    std::optional<CrystalLinkDungeonContext>::~optional((std::optional<CrystalLinkDungeonContext> *const)(v3 + 736));
    goto LABEL_108;
  }
  common::milog::MiLogStream::create(
    &v79,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/activity/crystal_link_activity.cpp",
    "forceSetUpDungeonTeam",
    868);
  v6 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
         &v79,
         (const char (*)[47])"[CRYSTAL_LINK] dungeon_scene_ptr is null, uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
  common::milog::MiLogStream::~MiLogStream(&v79);
  v7 = -1;
LABEL_108:
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v3 + 128));
  result = v7;
  if ( v80 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8054) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8070) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8078) = 0;
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
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8068) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8070) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8078) = -168430091;
  }
  return result;
};

// Line 999: range 00000000165B1382-00000000165B190D
void __cdecl CrystalLinkActivity::onLeaveSceneEvent(CrystalLinkActivity *const this, const LeaveSceneEvent *event)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // rbx
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // r14
  std::vector<bool>::size_type v11; // r14
  unsigned int val; // [rsp+10h] [rbp-1A0h] BYREF
  uint32_t cur_team_index; // [rsp+14h] [rbp-19Ch]
  const CrystalLinkDungeonContext *dungeon_context; // [rsp+18h] [rbp-198h]
  common::milog::MiLogStream v16; // [rsp+20h] [rbp-190h] BYREF
  char v17[368]; // [rsp+40h] [rbp-170h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 22 dungeon_scene_ptr:1000 64 184 24 dungeon_context_opt:1008";
  *(_QWORD *)(v2 + 16) = CrystalLinkActivity::onLeaveSceneEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862727] = -218103808;
  v4[536862728] = -202116109;
  v4[536862729] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getDungeonComp(this->player_);
  PlayerDungeonComp::getCurDungeon((PlayerDungeonComp *const)(v2 + 32));
  if ( !std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v2 + 32)) )
  {
    v5 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( DungeonScene::getDungeonType(v5) == DUNGEON_CRYSTAL_LINK )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/crystal_link_activity.cpp",
        "onLeaveSceneEvent",
        1007);
      v6 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
             &v16,
             (const char (*)[44])"[CRYSTAL_LINK] onLeaveSceneEvent, scene_id:");
      v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &event->scene_id);
      v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v7, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
      common::milog::MiLogStream::~MiLogStream(&v16);
      v9 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      DungeonScene::getDungeonExtraData<CrystalLinkDungeonContext>(
        (std::optional<CrystalLinkDungeonContext> *)(v2 + 64),
        v9);
      if ( !std::optional<CrystalLinkDungeonContext>::has_value((const std::optional<CrystalLinkDungeonContext> *const)(v2 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v16,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/crystal_link_activity.cpp",
          "onLeaveSceneEvent",
          1011);
        v10 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                &v16,
                (const char (*)[44])"[CRYSTAL_LINK] dungeon has no context, uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
        common::milog::MiLogStream::~MiLogStream(&v16);
      }
      else
      {
        dungeon_context = std::optional<CrystalLinkDungeonContext>::value((std::optional<CrystalLinkDungeonContext> *const)(v2 + 64));
        if ( *(char *)(((unsigned __int64)&dungeon_context->is_upper_part >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(&dungeon_context->is_upper_part);
        cur_team_index = !dungeon_context->is_upper_part;
        v11 = cur_team_index;
        if ( v11 < std::vector<bool>::size(&dungeon_context->is_has_add_buff_vec)
          && std::vector<bool>::operator[](&dungeon_context->is_has_add_buff_vec, cur_team_index) )
        {
          if ( *(_BYTE *)(((unsigned __int64)dungeon_context >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)dungeon_context >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          CrystalLinkActivity::delTeamAbilityGroup(this, dungeon_context->level_id, cur_team_index);
        }
        if ( *(_BYTE *)(((unsigned __int64)dungeon_context >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)dungeon_context >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        CrystalLinkActivity::recallLevelDungeonAvatars(this, dungeon_context->level_id);
      }
      std::optional<CrystalLinkDungeonContext>::~optional((std::optional<CrystalLinkDungeonContext> *const)(v2 + 64));
    }
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 32));
  if ( v17 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF801C) = 0LL;
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

// Line 1030: range 00000000165B190E-00000000165B248A
void __cdecl CrystalLinkActivity::onPostEnterSceneEvent(
        CrystalLinkActivity *const this,
        const PostEnterSceneEvent *event)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // r14
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  google::protobuf::RepeatedPtrField<proto::CrystalLinkBuffInfo> *v16; // rax
  common::milog::MiLogStream *v17; // [rsp+8h] [rbp-298h]
  std::vector<CrystalLinkTeamData>::size_type v18; // [rsp+8h] [rbp-298h]
  unsigned int val; // [rsp+28h] [rbp-278h] BYREF
  uint32_t cur_team_index; // [rsp+2Ch] [rbp-274h]
  std::vector<CrystalLinkAvatarData>::const_iterator __for_begin; // [rsp+30h] [rbp-270h] BYREF
  std::vector<CrystalLinkAvatarData>::const_iterator __for_end; // [rsp+38h] [rbp-268h] BYREF
  const CrystalLinkDungeonContext *dungeon_context; // [rsp+40h] [rbp-260h]
  const CrystalLinkLevelData *level_data; // [rsp+48h] [rbp-258h]
  const CrystalLinkTeamData *cur_team_data; // [rsp+50h] [rbp-250h]
  const std::vector<CrystalLinkAvatarData> *__for_range; // [rsp+58h] [rbp-248h]
  const CrystalLinkAvatarData *avatar_data; // [rsp+60h] [rbp-240h]
  proto::CrystalLinkDungeonAvatarInfo *dungeon_avatar_info; // [rsp+68h] [rbp-238h]
  common::milog::MiLogStream v29; // [rsp+70h] [rbp-230h] BYREF
  char v30[528]; // [rsp+90h] [rbp-210h] BYREF

  v2 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(480LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 8 15 level_iter:1047 64 16 22 dungeon_scene_ptr:1031 96 88 11 notify:1063 224 184 24 dungeo"
                        "n_context_opt:1039";
  *(_QWORD *)(v2 + 16) = CrystalLinkActivity::onPostEnterSceneEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -219021312;
  v4[536862725] = -234881024;
  v4[536862726] = -218959118;
  v4[536862732] = -218103808;
  v4[536862733] = -202116109;
  v4[536862734] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getDungeonComp(this->player_);
  PlayerDungeonComp::getCurDungeon((PlayerDungeonComp *const)(v2 + 64));
  if ( !std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v2 + 64)) )
  {
    v5 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( DungeonScene::getDungeonType(v5) == DUNGEON_CRYSTAL_LINK )
    {
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/crystal_link_activity.cpp",
        "onPostEnterSceneEvent",
        1038);
      v6 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
             &v29,
             (const char (*)[49])"[CRYSTAL_LINK] onPostEnterSceneEvent, scene_id: ");
      v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &event->dst_scene_id);
      v17 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v7, (const char (*)[7])" uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &val);
      common::milog::MiLogStream::~MiLogStream(&v29);
      v8 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      DungeonScene::getDungeonExtraData<CrystalLinkDungeonContext>(
        (std::optional<CrystalLinkDungeonContext> *)(v2 + 224),
        v8);
      if ( !std::optional<CrystalLinkDungeonContext>::has_value((const std::optional<CrystalLinkDungeonContext> *const)(v2 + 224)) )
      {
        common::milog::MiLogStream::create(
          &v29,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/crystal_link_activity.cpp",
          "onPostEnterSceneEvent",
          1042);
        v9 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
               &v29,
               (const char (*)[55])"[CRYSTAL_LINK] CrystalLinkDungeonContext invalid, uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
      }
      else
      {
        dungeon_context = std::optional<CrystalLinkDungeonContext>::value((std::optional<CrystalLinkDungeonContext> *const)(v2 + 224));
        *(std::map<unsigned int,CrystalLinkLevelData>::iterator *)(v2 + 32) = std::map<unsigned int,CrystalLinkLevelData>::find(
                                                                                &this->level_data_map_,
                                                                                &dungeon_context->level_id);
        __for_end._M_current = (const CrystalLinkAvatarData *)std::map<unsigned int,CrystalLinkLevelData>::end(&this->level_data_map_)._M_node;
        if ( std::operator==(
               (const std::_Rb_tree_iterator<std::pair<unsigned int const,CrystalLinkLevelData> >::_Self *)(v2 + 32),
               (const std::_Rb_tree_iterator<std::pair<unsigned int const,CrystalLinkLevelData> >::_Self *)&__for_end) )
        {
          common::milog::MiLogStream::create(
            &v29,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/crystal_link_activity.cpp",
            "onPostEnterSceneEvent",
            1050);
          v10 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                  &v29,
                  (const char (*)[35])"[CRYSTAL_LINK] not found level_id:");
          v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &dungeon_context->level_id);
          v9 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v11, (const char (*)[6])" uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
        }
        else
        {
          level_data = &std::_Rb_tree_iterator<std::pair<unsigned int const,CrystalLinkLevelData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,CrystalLinkLevelData> > *const)(v2 + 32))->second;
          if ( *(char *)(((unsigned __int64)&dungeon_context->is_upper_part >> 3) + 0x7FFF8000) < 0 )
            __asan_report_load1(&dungeon_context->is_upper_part);
          cur_team_index = !dungeon_context->is_upper_part;
          v18 = cur_team_index;
          if ( v18 < std::vector<CrystalLinkTeamData>::size(&level_data->team_data_vec) )
          {
            cur_team_data = std::vector<CrystalLinkTeamData>::operator[](&level_data->team_data_vec, cur_team_index);
            proto::CrystalLinkDungeonInfoNotify::CrystalLinkDungeonInfoNotify((proto::CrystalLinkDungeonInfoNotify *const)(v2 + 96));
            if ( *(_BYTE *)(((unsigned __int64)dungeon_context >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)dungeon_context >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            proto::CrystalLinkDungeonInfoNotify::set_level_id(
              (proto::CrystalLinkDungeonInfoNotify *const)(v2 + 96),
              dungeon_context->level_id);
            if ( *(_BYTE *)(((unsigned __int64)&dungeon_context->difficulty_id >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)dungeon_context + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_context->difficulty_id >> 3)
                                                                            + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            proto::CrystalLinkDungeonInfoNotify::set_difficulty_id(
              (proto::CrystalLinkDungeonInfoNotify *const)(v2 + 96),
              dungeon_context->difficulty_id);
            if ( *(char *)(((unsigned __int64)&dungeon_context->is_upper_part >> 3) + 0x7FFF8000) < 0 )
              __asan_report_load1(&dungeon_context->is_upper_part);
            proto::CrystalLinkDungeonInfoNotify::set_is_upper_part(
              (proto::CrystalLinkDungeonInfoNotify *const)(v2 + 96),
              dungeon_context->is_upper_part);
            if ( *(char *)(((unsigned __int64)&dungeon_context->is_upper_part >> 3) + 0x7FFF8000) < 0 )
              __asan_report_load1(&dungeon_context->is_upper_part);
            if ( !dungeon_context->is_upper_part )
            {
              if ( *(_BYTE *)(((unsigned __int64)&dungeon_context->init_gallery_progress >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)dungeon_context + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_context->init_gallery_progress >> 3)
                                                                               + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              proto::CrystalLinkDungeonInfoNotify::set_init_gallery_progress(
                (proto::CrystalLinkDungeonInfoNotify *const)(v2 + 96),
                dungeon_context->init_gallery_progress);
            }
            __for_range = &cur_team_data->avatar_data_vec;
            __for_begin._M_current = std::vector<CrystalLinkAvatarData>::begin(&cur_team_data->avatar_data_vec)._M_current;
            __for_end._M_current = std::vector<CrystalLinkAvatarData>::end(__for_range)._M_current;
            while ( __gnu_cxx::operator!=<CrystalLinkAvatarData const*,std::vector<CrystalLinkAvatarData>>(
                      &__for_begin,
                      &__for_end) )
            {
              avatar_data = __gnu_cxx::__normal_iterator<CrystalLinkAvatarData const*,std::vector<CrystalLinkAvatarData>>::operator*(&__for_begin);
              dungeon_avatar_info = proto::CrystalLinkDungeonInfoNotify::add_dungeon_avatar_info_list((proto::CrystalLinkDungeonInfoNotify *const)(v2 + 96));
              if ( *(char *)(((unsigned __int64)avatar_data >> 3) + 0x7FFF8000) < 0 )
                __asan_report_load1(avatar_data);
              proto::CrystalLinkDungeonAvatarInfo::set_is_trial(dungeon_avatar_info, avatar_data->is_trial);
              if ( *(_BYTE *)(((unsigned __int64)&avatar_data->in_dungeon_guid >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              proto::CrystalLinkDungeonAvatarInfo::set_avatar_guid(dungeon_avatar_info, avatar_data->in_dungeon_guid);
              __gnu_cxx::__normal_iterator<CrystalLinkAvatarData const*,std::vector<CrystalLinkAvatarData>>::operator++(&__for_begin);
            }
            v16 = proto::CrystalLinkDungeonInfoNotify::mutable_buff_info_list((proto::CrystalLinkDungeonInfoNotify *const)(v2 + 96));
            common::tools::MiscUtils::vectorToRepeated<CrystalLinkBuffData,proto::CrystalLinkBuffInfo,int (CrystalLinkBuffData::*)(proto::CrystalLinkBuffInfo&)const>(
              &cur_team_data->buff_data_vec,
              v16,
              (int (*)(const CrystalLinkBuffData *, proto::CrystalLinkBuffInfo *))CrystalLinkBuffData::toClient);
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 96));
            proto::CrystalLinkDungeonInfoNotify::~CrystalLinkDungeonInfoNotify((proto::CrystalLinkDungeonInfoNotify *const)(v2 + 96));
            goto LABEL_46;
          }
          common::milog::MiLogStream::create(
            &v29,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/crystal_link_activity.cpp",
            "onPostEnterSceneEvent",
            1057);
          v12 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                  &v29,
                  (const char (*)[32])"[CRYSTAL_LINK] level team size:");
          __for_end._M_current = (const CrystalLinkAvatarData *)std::vector<CrystalLinkTeamData>::size(&level_data->team_data_vec);
          v13 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                  v12,
                  (const unsigned __int64 *)&__for_end);
          v14 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v13, (const char (*)[11])" level_id:");
          v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &level_data->level_id);
          v9 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v15, (const char (*)[6])" uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
        }
      }
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
      common::milog::MiLogStream::~MiLogStream(&v29);
LABEL_46:
      std::optional<CrystalLinkDungeonContext>::~optional((std::optional<CrystalLinkDungeonContext> *const)(v2 + 224));
    }
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 64));
  if ( v30 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8014) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = 0;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = -168430091;
  }
};

// Line 1084: range 00000000165B248C-00000000165B2CAD
void __cdecl CrystalLinkActivity::onGalleryStartEvent(CrystalLinkActivity *const this, const GalleryStartEvent *event)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // r14
  CrystalLinkDungeonContext *v11; // rax
  std::vector<bool>::size_type v12; // r14
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  DungeonScene *v22; // rax
  unsigned int val; // [rsp+1Ch] [rbp-2A4h] BYREF
  std::_Bit_reference v24; // [rsp+20h] [rbp-2A0h] BYREF
  common::milog::MiLogStream v25; // [rsp+30h] [rbp-290h] BYREF
  char v26[624]; // [rsp+50h] [rbp-270h] BYREF

  v2 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 4 19 cur_team_index:1100 48 16 22 dungeon_scene_ptr:1085 80 176 20 dungeon_context:1099 320"
                        " 184 24 dungeon_context_opt:1093";
  *(_QWORD *)(v2 + 16) = CrystalLinkActivity::onGalleryStartEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862722] = 62194;
  v4[536862728] = -218959118;
  v4[536862729] = -218959118;
  v4[536862735] = -218103808;
  v4[536862736] = -202116109;
  v4[536862737] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getDungeonComp(this->player_);
  PlayerDungeonComp::getCurDungeon((PlayerDungeonComp *const)(v2 + 48));
  if ( !std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v2 + 48)) )
  {
    v5 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
    if ( DungeonScene::getDungeonType(v5) == DUNGEON_CRYSTAL_LINK )
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/crystal_link_activity.cpp",
        "onGalleryStartEvent",
        1092);
      v6 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
             &v25,
             (const char (*)[49])"[CRYSTAL_LINK] onGalleryStartEvent, gallery_id: ");
      v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &event->gallery_id);
      v8 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v7, (const char (*)[7])" uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
      common::milog::MiLogStream::~MiLogStream(&v25);
      v9 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
      DungeonScene::getDungeonExtraData<CrystalLinkDungeonContext>(
        (std::optional<CrystalLinkDungeonContext> *)(v2 + 320),
        v9);
      if ( !std::optional<CrystalLinkDungeonContext>::has_value((const std::optional<CrystalLinkDungeonContext> *const)(v2 + 320)) )
      {
        common::milog::MiLogStream::create(
          &v25,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/crystal_link_activity.cpp",
          "onGalleryStartEvent",
          1096);
        v10 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                &v25,
                (const char (*)[55])"[CRYSTAL_LINK] CrystalLinkDungeonContext invalid, uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
        common::milog::MiLogStream::~MiLogStream(&v25);
        goto LABEL_24;
      }
      v11 = std::optional<CrystalLinkDungeonContext>::value((std::optional<CrystalLinkDungeonContext> *const)(v2 + 320));
      CrystalLinkDungeonContext::CrystalLinkDungeonContext((CrystalLinkDungeonContext *const)(v2 + 80), v11);
      *(_DWORD *)(v2 + 32) = *(_BYTE *)(v2 + 88) == 0;
      v12 = *(unsigned int *)(v2 + 32);
      if ( v12 < std::vector<bool>::size((const std::vector<bool> *const)(v2 + 96)) )
      {
        v24 = std::vector<bool>::operator[]((std::vector<bool> *const)(v2 + 96), *(unsigned int *)(v2 + 32));
        if ( !std::_Bit_reference::operator bool(&v24) )
        {
          CrystalLinkActivity::addTeamAbilityGroup(this, *(_DWORD *)(v2 + 80), *(_DWORD *)(v2 + 32));
          v24 = std::vector<bool>::operator[]((std::vector<bool> *const)(v2 + 96), *(unsigned int *)(v2 + 32));
          std::_Bit_reference::operator=(&v24, 1);
          v22 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
          DungeonScene::setDungeonExtraData<CrystalLinkDungeonContext>(
            v22,
            (const CrystalLinkDungeonContext *)(v2 + 80));
          goto LABEL_23;
        }
        common::milog::MiLogStream::create(
          &v25,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/crystal_link_activity.cpp",
          "onGalleryStartEvent",
          1109);
        v18 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                &v25,
                (const char (*)[45])"[CRYSTAL_LINK] has add buff, cur_team_index:");
        v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v18,
                (const unsigned int *)(v2 + 32));
        v20 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v19, (const char (*)[11])" level_id:");
        v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v20,
                (const unsigned int *)(v2 + 80));
        v17 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v21, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
      }
      else
      {
        common::milog::MiLogStream::create(
          &v25,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/crystal_link_activity.cpp",
          "onGalleryStartEvent",
          1103);
        v13 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                &v25,
                (const char (*)[36])"[CRYSTAL_LINK] is_has_add_buff_vec:");
        v14 = common::milog::MiLogStream::operator<<<bool>(v13, (const std::vector<bool> *)(v2 + 96));
        v15 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v14, (const char (*)[11])" level_id:");
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v15,
                (const unsigned int *)(v2 + 80));
        v17 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v16, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
      }
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &val);
      common::milog::MiLogStream::~MiLogStream(&v25);
LABEL_23:
      CrystalLinkDungeonContext::~CrystalLinkDungeonContext((CrystalLinkDungeonContext *const)(v2 + 80));
LABEL_24:
      std::optional<CrystalLinkDungeonContext>::~optional((std::optional<CrystalLinkDungeonContext> *const)(v2 + 320));
    }
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 48));
  if ( v26 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF803C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8044) = 0;
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
  }
};

// Line 1122: range 00000000165B2CAE-00000000165B2FCC
__int64 __fastcall CrystalLinkActivity::addTeamAbilityGroup(
        CrystalLinkActivity *const this,
        uint32_t level_id,
        uint32_t team_index)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  PlayerAbilityGroupComp *AbilityGroupComp; // rax
  PlayerAbilityGroupComp *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  __int64 result; // rax
  unsigned int val; // [rsp+1Ch] [rbp-D4h] BYREF
  common::milog::MiLogStream v16; // [rsp+20h] [rbp-D0h] BYREF
  char v17[176]; // [rsp+40h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 13 level_id:1121 48 4 15 team_index:1121 64 24 22 ability_group_vec:1123";
  *(_QWORD *)(v3 + 16) = CrystalLinkActivity::addTeamAbilityGroup;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  *(_DWORD *)(v3 + 32) = level_id;
  *(_DWORD *)(v3 + 48) = team_index;
  std::vector<std::string>::vector((std::vector<std::string> *const)(v3 + 64));
  CrystalLinkActivity::fillAbilityGroupVec(
    this,
    *(_DWORD *)(v3 + 32),
    *(_DWORD *)(v3 + 48),
    (std::vector<std::string> *)(v3 + 64));
  if ( !std::vector<std::string>::empty((const std::vector<std::string> *const)(v3 + 64)) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    AbilityGroupComp = Player::getAbilityGroupComp(this->player_);
    PlayerAbilityGroupComp::addNoneFilterAbilityGroup(AbilityGroupComp, (const std::vector<std::string> *)(v3 + 64), 0);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v7 = Player::getAbilityGroupComp(this->player_);
    PlayerAbilityGroupComp::tryRefreshAbilityGroup(v7);
  }
  common::milog::MiLogStream::create(
    &v16,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/crystal_link_activity.cpp",
    "addTeamAbilityGroup",
    1130);
  v8 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
         &v16,
         (const char (*)[48])"[CRYSTAL_LINK] addTeamAbilityGroup, team_index:");
  v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 48));
  v10 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v9, (const char (*)[11])" level_id:");
  v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 32));
  v12 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v11, (const char (*)[6])" uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
  common::milog::MiLogStream::~MiLogStream(&v16);
  std::vector<std::string>::~vector((std::vector<std::string> *const)(v3 + 64));
  result = 0LL;
  if ( v17 == (char *)v3 )
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

// Line 1135: range 00000000165B2FCE-00000000165B32E7
__int64 __fastcall CrystalLinkActivity::delTeamAbilityGroup(
        CrystalLinkActivity *const this,
        uint32_t level_id,
        uint32_t team_index)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  PlayerAbilityGroupComp *AbilityGroupComp; // rax
  PlayerAbilityGroupComp *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  __int64 result; // rax
  unsigned int val; // [rsp+1Ch] [rbp-D4h] BYREF
  common::milog::MiLogStream v16; // [rsp+20h] [rbp-D0h] BYREF
  char v17[176]; // [rsp+40h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 13 level_id:1134 48 4 15 team_index:1134 64 24 22 ability_group_vec:1136";
  *(_QWORD *)(v3 + 16) = CrystalLinkActivity::delTeamAbilityGroup;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  *(_DWORD *)(v3 + 32) = level_id;
  *(_DWORD *)(v3 + 48) = team_index;
  std::vector<std::string>::vector((std::vector<std::string> *const)(v3 + 64));
  CrystalLinkActivity::fillAbilityGroupVec(
    this,
    *(_DWORD *)(v3 + 32),
    *(_DWORD *)(v3 + 48),
    (std::vector<std::string> *)(v3 + 64));
  if ( !std::vector<std::string>::empty((const std::vector<std::string> *const)(v3 + 64)) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    AbilityGroupComp = Player::getAbilityGroupComp(this->player_);
    PlayerAbilityGroupComp::delNoneFilterAbilityGroup(AbilityGroupComp, (const std::vector<std::string> *)(v3 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v7 = Player::getAbilityGroupComp(this->player_);
    PlayerAbilityGroupComp::tryRefreshAbilityGroup(v7);
  }
  common::milog::MiLogStream::create(
    &v16,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/crystal_link_activity.cpp",
    "delTeamAbilityGroup",
    1143);
  v8 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
         &v16,
         (const char (*)[48])"[CRYSTAL_LINK] delTeamAbilityGroup, team_index:");
  v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 48));
  v10 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v9, (const char (*)[11])" level_id:");
  v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 32));
  v12 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v11, (const char (*)[6])" uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
  common::milog::MiLogStream::~MiLogStream(&v16);
  std::vector<std::string>::~vector((std::vector<std::string> *const)(v3 + 64));
  result = 0LL;
  if ( v17 == (char *)v3 )
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

// Line 1148: range 00000000165B32E8-00000000165B3DDB
__int64 __fastcall CrystalLinkActivity::fillAbilityGroupVec(
        CrystalLinkActivity *const this,
        uint32_t level_id,
        uint32_t team_index,
        std::vector<std::string> *ability_group_vec)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rbx
  unsigned int v10; // r14d
  std::_Rb_tree_iterator<std::pair<unsigned int const,CrystalLinkLevelData> >::pointer v11; // rax
  std::vector<CrystalLinkTeamData>::size_type v12; // r14
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  ActivityCrystalLinkExcelConfigMgr *p_activity_crystal_link_config_mgr; // rcx
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // r14
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v25; // rax
  ActivityCrystalLinkExcelConfigMgr *v26; // rcx
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  __int64 result; // rax
  unsigned int val; // [rsp+2Ch] [rbp-164h] BYREF
  std::vector<CrystalLinkBuffData>::const_iterator __for_begin; // [rsp+30h] [rbp-160h] BYREF
  std::vector<CrystalLinkBuffData>::const_iterator __for_end; // [rsp+38h] [rbp-158h] BYREF
  const CrystalLinkLevelData *level_data; // [rsp+40h] [rbp-150h]
  const CrystalLinkTeamData *team_data; // [rsp+48h] [rbp-148h]
  const std::vector<CrystalLinkBuffData> *__for_range; // [rsp+50h] [rbp-140h]
  const CrystalLinkBuffData *buff_data; // [rsp+58h] [rbp-138h]
  const data::ActivityCrystalLinkCondBuffExcelConfig *cond_buff_config_ptr; // [rsp+60h] [rbp-130h]
  const data::ActivityCrystalLinkEffectBuffExcelConfig *effect_buff_config_ptr; // [rsp+68h] [rbp-128h]
  std::shared_ptr<Config> v43; // [rsp+70h] [rbp-120h] BYREF
  common::milog::MiLogStream v44; // [rsp+80h] [rbp-110h] BYREF
  char v45[240]; // [rsp+A0h] [rbp-F0h] BYREF

  v4 = (unsigned __int64)v45;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 48 4 13 level_id:1147 64 4 15 team_index:1147 80 8 15 level_iter:1149 112 48 23 effect_buff_id_set:1163";
  *(_QWORD *)(v4 + 16) = CrystalLinkActivity::fillAbilityGroupVec;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = 61956;
  v6[536862722] = -234881024;
  v6[536862723] = 62194;
  v6[536862725] = -202116109;
  *(_DWORD *)(v4 + 48) = level_id;
  *(_DWORD *)(v4 + 64) = team_index;
  *(std::map<unsigned int,CrystalLinkLevelData>::iterator *)(v4 + 80) = std::map<unsigned int,CrystalLinkLevelData>::find(
                                                                          &this->level_data_map_,
                                                                          (const std::map<unsigned int,CrystalLinkLevelData>::key_type *)(v4 + 48));
  __for_end._M_current = (const CrystalLinkBuffData *)std::map<unsigned int,CrystalLinkLevelData>::end(&this->level_data_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,CrystalLinkLevelData> >::_Self *)(v4 + 80),
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,CrystalLinkLevelData> >::_Self *)&__for_end) )
  {
    common::milog::MiLogStream::create(
      &v44,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/crystal_link_activity.cpp",
      "fillAbilityGroupVec",
      1152);
    v7 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
           &v44,
           (const char (*)[35])"[CRYSTAL_LINK] not found level_id:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 48));
    v9 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v8, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_7:
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
    common::milog::MiLogStream::~MiLogStream(&v44);
    v10 = -1;
    goto LABEL_38;
  }
  v11 = std::_Rb_tree_iterator<std::pair<unsigned int const,CrystalLinkLevelData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,CrystalLinkLevelData> > *const)(v4 + 80));
  level_data = &v11->second;
  v12 = *(unsigned int *)(v4 + 64);
  if ( v12 >= std::vector<CrystalLinkTeamData>::size(&v11->second.team_data_vec) )
  {
    common::milog::MiLogStream::create(
      &v44,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/crystal_link_activity.cpp",
      "fillAbilityGroupVec",
      1158);
    v13 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
            &v44,
            (const char (*)[35])"[CRYSTAL_LINK] invalid team_index:");
    v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v4 + 64));
    v15 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v14, (const char (*)[11])"team size:");
    __for_end._M_current = (const CrystalLinkBuffData *)std::vector<CrystalLinkTeamData>::size(&level_data->team_data_vec);
    v16 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
            v15,
            (const unsigned __int64 *)&__for_end);
    v17 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v16, (const char (*)[11])" level_id:");
    v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v4 + 48));
    v9 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v18, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_7;
  }
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v4 + 112));
  team_data = std::vector<CrystalLinkTeamData>::operator[](&level_data->team_data_vec, *(unsigned int *)(v4 + 64));
  __for_range = &team_data->buff_data_vec;
  __for_begin._M_current = std::vector<CrystalLinkBuffData>::begin(&team_data->buff_data_vec)._M_current;
  __for_end._M_current = std::vector<CrystalLinkBuffData>::end(__for_range)._M_current;
  while ( __gnu_cxx::operator!=<CrystalLinkBuffData const*,std::vector<CrystalLinkBuffData>>(&__for_begin, &__for_end) )
  {
    buff_data = __gnu_cxx::__normal_iterator<CrystalLinkBuffData const*,std::vector<CrystalLinkBuffData>>::operator*(&__for_begin);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v43);
    p_activity_crystal_link_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v43)->design_config.txt_config_mgr.activity_crystal_link_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)buff_data >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)buff_data & 7) + 3) >= *(_BYTE *)(((unsigned __int64)buff_data >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    cond_buff_config_ptr = data::ActivityCrystalLinkExcelConfigMgrBase::findActivityCrystalLinkCondBuffExcelConfig(
                             p_activity_crystal_link_config_mgr,
                             buff_data->cond_buff_id);
    std::shared_ptr<Config>::~shared_ptr(&v43);
    if ( !cond_buff_config_ptr )
    {
      common::milog::MiLogStream::create(
        &v44,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/crystal_link_activity.cpp",
        "fillAbilityGroupVec",
        1171);
      v20 = common::milog::MiLogStream::operator<<<char [72],(char *[72])0>(
              &v44,
              (const char (*)[72])"[CRYSTAL_LINK] findActivityCrystalLinkCondBuffExcelConfig cond_buff_id:");
      v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)buff_data);
      v22 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v21, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
LABEL_34:
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &val);
      common::milog::MiLogStream::~MiLogStream(&v44);
      goto LABEL_36;
    }
    if ( (unsigned __int8)std::string::empty(&cond_buff_config_ptr->ability_group_name) )
    {
      common::milog::MiLogStream::create(
        &v44,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/crystal_link_activity.cpp",
        "fillAbilityGroupVec",
        1176);
      v23 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
              &v44,
              (const char (*)[55])"[CRYSTAL_LINK] ability group name empty, cond_buff_id:");
      v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, (const unsigned int *)buff_data);
      v22 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v24, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      goto LABEL_34;
    }
    std::vector<std::string>::push_back(ability_group_vec, &cond_buff_config_ptr->ability_group_name);
    v25 = std::set<unsigned int>::insert((std::set<unsigned int> *const)(v4 + 112), &buff_data->effect_buff_id);
    if ( !v25.second )
      goto LABEL_36;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v43);
    v26 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v43)->design_config.txt_config_mgr.activity_crystal_link_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&buff_data->effect_buff_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)buff_data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&buff_data->effect_buff_id >> 3)
                                                              + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    effect_buff_config_ptr = data::ActivityCrystalLinkExcelConfigMgrBase::findActivityCrystalLinkEffectBuffExcelConfig(
                               v26,
                               buff_data->effect_buff_id);
    std::shared_ptr<Config>::~shared_ptr(&v43);
    if ( !effect_buff_config_ptr )
    {
      common::milog::MiLogStream::create(
        &v44,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/crystal_link_activity.cpp",
        "fillAbilityGroupVec",
        1190);
      v27 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
              &v44,
              (const char (*)[63])"[CRYSTAL_LINK] findActivityCondBuffExcelConfig effect_buff_id:");
      v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, &buff_data->effect_buff_id);
      v22 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v28, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      goto LABEL_34;
    }
    if ( (unsigned __int8)std::string::empty(&effect_buff_config_ptr->ability_group_name) )
    {
      common::milog::MiLogStream::create(
        &v44,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/crystal_link_activity.cpp",
        "fillAbilityGroupVec",
        1195);
      v29 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
              &v44,
              (const char (*)[57])"[CRYSTAL_LINK] ability group name empty, effect_buff_id:");
      v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, &buff_data->effect_buff_id);
      v22 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v30, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      goto LABEL_34;
    }
    std::vector<std::string>::push_back(ability_group_vec, &effect_buff_config_ptr->ability_group_name);
LABEL_36:
    __gnu_cxx::__normal_iterator<CrystalLinkBuffData const*,std::vector<CrystalLinkBuffData>>::operator++(&__for_begin);
  }
  v10 = 0;
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v4 + 112));
LABEL_38:
  result = v10;
  if ( v45 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};
