// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/sumo_activity.cpp

// Line 42: range 0000000017FF3C30-0000000017FF3CF8
void __cdecl SumoAvatar::fromBin(SumoAvatar *const this, const proto::SumoAvatarBin *avatar_bin)
{
  unsigned int v2; // eax
  __int64 v3; // rdx
  uint64_t v4; // rax
  uint64_t v5; // rax
  const proto::SumoAvatarBin *avatar_bina; // [rsp+0h] [rbp-10h]

  avatar_bina = avatar_bin;
  LOBYTE(v2) = proto::SumoAvatarBin::is_trial(avatar_bin);
  v3 = v2;
  LOBYTE(v2) = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  LOBYTE(avatar_bin) = (_BYTE)v2 != 0;
  if ( (v2 & 0x80u) != 0 )
    __asan_report_store1(this, avatar_bin, v3);
  this->is_trial = v3;
  v4 = proto::SumoAvatarBin::avatar_id(avatar_bina);
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_id >> 3) + 0x7FFF8000) )
    v4 = __asan_report_store8(&this->avatar_id, avatar_bin);
  this->avatar_id = v4;
  v5 = proto::SumoAvatarBin::in_dungeon_guid(avatar_bina);
  if ( *(_BYTE *)(((unsigned __int64)&this->in_dungeon_guid >> 3) + 0x7FFF8000) )
    v5 = __asan_report_store8(&this->in_dungeon_guid, avatar_bin);
  this->in_dungeon_guid = v5;
};

// Line 49: range 0000000017FF3CFA-0000000017FF3DCB
void __cdecl SumoAvatar::toBin(const SumoAvatar *const this, proto::SumoAvatarBin *avatar_bin)
{
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(this);
  proto::SumoAvatarBin::set_is_trial(avatar_bin, this->is_trial);
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_id >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->avatar_id);
  proto::SumoAvatarBin::set_avatar_id(avatar_bin, this->avatar_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->in_dungeon_guid >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->in_dungeon_guid);
  proto::SumoAvatarBin::set_in_dungeon_guid(avatar_bin, this->in_dungeon_guid);
};

// Line 56: range 0000000017FF3DCC-0000000017FF3E61
void __cdecl SumoAvatar::toClient(const SumoAvatar *const this, proto::SumoAvatarInfo *avatar_info)
{
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(this);
  proto::SumoAvatarInfo::set_is_trial(avatar_info, this->is_trial);
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_id >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->avatar_id);
  proto::SumoAvatarInfo::set_avatar_id(avatar_info, this->avatar_id);
};

// Line 62: range 0000000017FF3E62-0000000017FF3EF1
void __cdecl SumoAvatar::fromClient(SumoAvatar *const this, const proto::SumoAvatarInfo *team_data)
{
  unsigned int v2; // eax
  __int64 v3; // rdx
  uint64_t v4; // rax
  const proto::SumoAvatarInfo *team_dataa; // [rsp+0h] [rbp-10h]

  team_dataa = team_data;
  LOBYTE(v2) = proto::SumoAvatarInfo::is_trial(team_data);
  v3 = v2;
  LOBYTE(v2) = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  LOBYTE(team_data) = (_BYTE)v2 != 0;
  if ( (v2 & 0x80u) != 0 )
    __asan_report_store1(this, team_data, v3);
  this->is_trial = v3;
  v4 = proto::SumoAvatarInfo::avatar_id(team_dataa);
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_id >> 3) + 0x7FFF8000) )
    v4 = __asan_report_store8(&this->avatar_id, team_data);
  this->avatar_id = v4;
};

// Line 68: range 0000000017FF3EF2-0000000017FF419A
void __cdecl SumoTeam::fromBin(SumoTeam *const this, const proto::SumoTeamBin *team_bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  google::protobuf::RepeatedPtrField<proto::SumoAvatarBin>::const_iterator __for_begin; // [rsp+18h] [rbp-D8h] BYREF
  google::protobuf::RepeatedPtrField<proto::SumoAvatarBin>::const_iterator __for_end; // [rsp+20h] [rbp-D0h] BYREF
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin_0; // [rsp+28h] [rbp-C8h]
  const google::protobuf::RepeatedPtrField<proto::SumoAvatarBin> *__for_range; // [rsp+30h] [rbp-C0h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range_0; // [rsp+38h] [rbp-B8h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end_0; // [rsp+40h] [rbp-B0h]
  const proto::SumoAvatarBin *avatar_bin; // [rsp+48h] [rbp-A8h]
  char v12[160]; // [rsp+50h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 11 skill_id:77 64 24 14 sumo_avatar:72";
  *(_QWORD *)(v2 + 16) = SumoTeam::fromBin;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  std::vector<SumoAvatar>::clear(&this->avatar_vec);
  __for_range = proto::SumoTeamBin::avatar_bin_list(team_bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::SumoAvatarBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::SumoAvatarBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::SumoAvatarBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    avatar_bin = google::protobuf::internal::RepeatedPtrIterator<proto::SumoAvatarBin const>::operator*(&__for_begin);
    *(_BYTE *)(v2 + 64) = 0;
    *(_QWORD *)(v2 + 72) = 0LL;
    *(_QWORD *)(v2 + 80) = 0LL;
    SumoAvatar::fromBin((SumoAvatar *const)(v2 + 64), avatar_bin);
    std::vector<SumoAvatar>::push_back(&this->avatar_vec, (const std::vector<SumoAvatar>::value_type *)(v2 + 64));
    google::protobuf::internal::RepeatedPtrIterator<proto::SumoAvatarBin const>::operator++(&__for_begin);
  }
  std::vector<unsigned int>::clear(&this->selected_skill_id_vec);
  __for_range_0 = proto::SumoTeamBin::skill_id_list(team_bin);
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
    *(_DWORD *)(v2 + 48) = *__for_begin_0;
    std::vector<unsigned int>::push_back(
      &this->selected_skill_id_vec,
      (const std::vector<unsigned int>::value_type *)(v2 + 48));
    ++__for_begin_0;
  }
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

// Line 84: range 0000000017FF419C-0000000017FF42D9
void __cdecl SumoTeam::toBin(const SumoTeam *const this, proto::SumoTeamBin *team_bin)
{
  proto::SumoAvatarBin *v2; // rax
  unsigned int *v3; // rax
  google::protobuf::uint32 *v4; // rdx
  std::vector<SumoAvatar>::const_iterator __for_begin; // [rsp+18h] [rbp-28h] BYREF
  std::vector<SumoAvatar>::const_iterator __for_end; // [rsp+20h] [rbp-20h] BYREF
  const std::vector<SumoAvatar> *__for_range; // [rsp+28h] [rbp-18h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+30h] [rbp-10h]
  const SumoAvatar *sumo_avatar; // [rsp+38h] [rbp-8h]

  __for_range = &this->avatar_vec;
  __for_begin._M_current = std::vector<SumoAvatar>::begin(&this->avatar_vec)._M_current;
  __for_end._M_current = std::vector<SumoAvatar>::end(&this->avatar_vec)._M_current;
  while ( __gnu_cxx::operator!=<SumoAvatar const*,std::vector<SumoAvatar>>(&__for_begin, &__for_end) )
  {
    sumo_avatar = __gnu_cxx::__normal_iterator<SumoAvatar const*,std::vector<SumoAvatar>>::operator*(&__for_begin);
    v2 = proto::SumoTeamBin::add_avatar_bin_list(team_bin);
    SumoAvatar::toBin(sumo_avatar, v2);
    __gnu_cxx::__normal_iterator<SumoAvatar const*,std::vector<SumoAvatar>>::operator++(&__for_begin);
  }
  __for_range_0 = &this->selected_skill_id_vec;
  __for_begin._M_current = (const SumoAvatar *)std::vector<unsigned int>::begin(&this->selected_skill_id_vec)._M_current;
  __for_end._M_current = (const SumoAvatar *)std::vector<unsigned int>::end(__for_range_0)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
            (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&__for_begin,
            (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&__for_end) )
  {
    v3 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__for_begin);
    v4 = v3;
    if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v3);
    }
    proto::SumoTeamBin::add_skill_id_list(team_bin, *v4);
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__for_begin);
  }
};

// Line 96: range 0000000017FF42DA-0000000017FF4417
void __cdecl SumoTeam::toClient(const SumoTeam *const this, proto::SumoTeamData *team_data)
{
  unsigned int *v2; // rax
  google::protobuf::uint32 *v3; // rdx
  proto::SumoAvatarInfo *v4; // rax
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-28h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-20h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+28h] [rbp-18h]
  const std::vector<SumoAvatar> *__for_range_0; // [rsp+30h] [rbp-10h]
  const SumoAvatar *avatar_info; // [rsp+38h] [rbp-8h]

  __for_range = &this->selected_skill_id_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(&this->selected_skill_id_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(&this->selected_skill_id_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v2 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    v3 = v2;
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v2);
    }
    proto::SumoTeamData::add_skill_id_list(team_data, *v3);
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  __for_range_0 = &this->avatar_vec;
  __for_begin._M_current = (const unsigned int *)std::vector<SumoAvatar>::begin(&this->avatar_vec)._M_current;
  __for_end._M_current = (const unsigned int *)std::vector<SumoAvatar>::end(__for_range_0)._M_current;
  while ( __gnu_cxx::operator!=<SumoAvatar const*,std::vector<SumoAvatar>>(
            (const __gnu_cxx::__normal_iterator<const SumoAvatar*,std::vector<SumoAvatar> > *)&__for_begin,
            (const __gnu_cxx::__normal_iterator<const SumoAvatar*,std::vector<SumoAvatar> > *)&__for_end) )
  {
    avatar_info = __gnu_cxx::__normal_iterator<SumoAvatar const*,std::vector<SumoAvatar>>::operator*((const __gnu_cxx::__normal_iterator<const SumoAvatar*,std::vector<SumoAvatar> > *const)&__for_begin);
    v4 = proto::SumoTeamData::add_avatar_info_list(team_data);
    SumoAvatar::toClient(avatar_info, v4);
    __gnu_cxx::__normal_iterator<SumoAvatar const*,std::vector<SumoAvatar>>::operator++((__gnu_cxx::__normal_iterator<const SumoAvatar*,std::vector<SumoAvatar> > *const)&__for_begin);
  }
};

// Line 108: range 0000000017FF4418-0000000017FF46C0
void __cdecl SumoTeam::fromClient(SumoTeam *const this, const proto::SumoTeamData *team_data)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  google::protobuf::RepeatedPtrField<proto::SumoAvatarInfo>::const_iterator __for_begin; // [rsp+18h] [rbp-D8h] BYREF
  google::protobuf::RepeatedPtrField<proto::SumoAvatarInfo>::const_iterator __for_end; // [rsp+20h] [rbp-D0h] BYREF
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin_0; // [rsp+28h] [rbp-C8h]
  const google::protobuf::RepeatedPtrField<proto::SumoAvatarInfo> *__for_range; // [rsp+30h] [rbp-C0h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range_0; // [rsp+38h] [rbp-B8h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end_0; // [rsp+40h] [rbp-B0h]
  const proto::SumoAvatarInfo *avatar_info; // [rsp+48h] [rbp-A8h]
  char v12[160]; // [rsp+50h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 skill_id:117 64 24 15 sumo_avatar:112";
  *(_QWORD *)(v2 + 16) = SumoTeam::fromClient;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  std::vector<SumoAvatar>::clear(&this->avatar_vec);
  __for_range = proto::SumoTeamData::avatar_info_list(team_data);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::SumoAvatarInfo>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::SumoAvatarInfo>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::SumoAvatarInfo const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    avatar_info = google::protobuf::internal::RepeatedPtrIterator<proto::SumoAvatarInfo const>::operator*(&__for_begin);
    *(_BYTE *)(v2 + 64) = 0;
    *(_QWORD *)(v2 + 72) = 0LL;
    *(_QWORD *)(v2 + 80) = 0LL;
    SumoAvatar::fromClient((SumoAvatar *const)(v2 + 64), avatar_info);
    std::vector<SumoAvatar>::push_back(&this->avatar_vec, (const std::vector<SumoAvatar>::value_type *)(v2 + 64));
    google::protobuf::internal::RepeatedPtrIterator<proto::SumoAvatarInfo const>::operator++(&__for_begin);
  }
  std::vector<unsigned int>::clear(&this->selected_skill_id_vec);
  __for_range_0 = proto::SumoTeamData::skill_id_list(team_data);
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
    *(_DWORD *)(v2 + 48) = *__for_begin_0;
    std::vector<unsigned int>::push_back(
      &this->selected_skill_id_vec,
      (const std::vector<unsigned int>::value_type *)(v2 + 48));
    ++__for_begin_0;
  }
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

// Line 124: range 0000000017FF46C2-0000000017FF4832
void __cdecl SumoStage::toBin(const SumoStage *const this, proto::SumoStageBin *stage_bin)
{
  proto::SumoTeamBin *v2; // rax
  std::vector<SumoTeam>::const_iterator __for_begin; // [rsp+10h] [rbp-20h] BYREF
  std::vector<SumoTeam>::const_iterator __for_end; // [rsp+18h] [rbp-18h] BYREF
  const std::vector<SumoTeam> *__for_range; // [rsp+20h] [rbp-10h]
  const SumoTeam *team; // [rsp+28h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  proto::SumoStageBin::set_stage_id(stage_bin, this->stage_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->max_score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_score >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->max_score);
  }
  proto::SumoStageBin::set_max_score(stage_bin, this->max_score);
  if ( *(char *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_open);
  proto::SumoStageBin::set_is_open(stage_bin, this->is_open);
  __for_range = &this->sumo_team_vec;
  __for_begin._M_current = std::vector<SumoTeam>::begin(&this->sumo_team_vec)._M_current;
  __for_end._M_current = std::vector<SumoTeam>::end(&this->sumo_team_vec)._M_current;
  while ( __gnu_cxx::operator!=<SumoTeam const*,std::vector<SumoTeam>>(&__for_begin, &__for_end) )
  {
    team = __gnu_cxx::__normal_iterator<SumoTeam const*,std::vector<SumoTeam>>::operator*(&__for_begin);
    v2 = proto::SumoStageBin::add_team_list(stage_bin);
    SumoTeam::toBin(team, v2);
    __gnu_cxx::__normal_iterator<SumoTeam const*,std::vector<SumoTeam>>::operator++(&__for_begin);
  }
};

// Line 135: range 0000000017FF4834-0000000017FF4CBC
void __cdecl SumoStage::fromBin(SumoStage *const this, const proto::SumoStageBin *stage_bin)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 v5; // rdx
  char v6; // al
  uint32_t v7; // ecx
  char v8; // dl
  __int64 v9; // rdx
  unsigned int v10; // eax
  __int64 v11; // rdx
  char v12; // al
  std::vector<SumoTeam>::size_type v13; // r14
  std::vector<SumoAvatar>::size_type v14; // r14
  std::vector<SumoAvatar>::reference v15; // rax
  std::vector<SumoAvatar>::reference v16; // rax
  std::pair<unsigned int,unsigned int> *v17; // rax
  const proto::SumoStageBin *stage_bina; // [rsp+0h] [rbp-110h]
  google::protobuf::RepeatedPtrField<proto::SumoTeamBin>::const_iterator __for_begin; // [rsp+18h] [rbp-F8h] BYREF
  const google::protobuf::RepeatedPtrField<proto::SumoTeamBin> *__for_range; // [rsp+20h] [rbp-F0h]
  SumoTeam *team; // [rsp+28h] [rbp-E8h]
  const proto::SumoTeamBin *bin_team; // [rsp+30h] [rbp-E0h]
  google::protobuf::RepeatedPtrField<proto::SumoTeamBin>::const_iterator __for_end; // [rsp+38h] [rbp-D8h] BYREF
  char v24[208]; // [rsp+40h] [rbp-D0h] BYREF

  stage_bina = stage_bin;
  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 12 team_idx:148 64 4 14 avatar_idx:151 80 48 8 team:142";
  *(_QWORD *)(v2 + 16) = SumoStage::fromBin;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = 61956;
  v4[536862724] = -202116109;
  v5 = proto::SumoStageBin::stage_id(stage_bin);
  v6 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(stage_bin) = v6 != 0;
    __asan_report_store4(this, stage_bin, v5);
  }
  this->stage_id = v5;
  v7 = proto::SumoStageBin::max_score(stage_bina);
  v8 = *(_BYTE *)(((unsigned __int64)&this->max_score >> 3) + 0x7FFF8000);
  LOBYTE(stage_bin) = v8 != 0;
  v9 = (v8 != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= v8);
  if ( (_BYTE)v9 )
    __asan_report_store4(&this->max_score, stage_bin, v9);
  this->max_score = v7;
  LOBYTE(v10) = proto::SumoStageBin::is_open(stage_bina);
  v11 = v10;
  v12 = *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000);
  if ( v12 < 0 )
  {
    LOBYTE(stage_bin) = v12 != 0;
    __asan_report_store1(&this->is_open, stage_bin, v11);
  }
  this->is_open = v11;
  std::vector<SumoTeam>::clear(&this->sumo_team_vec);
  __for_range = proto::SumoStageBin::team_list(stage_bina);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::SumoTeamBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::SumoTeamBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::SumoTeamBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    bin_team = google::protobuf::internal::RepeatedPtrIterator<proto::SumoTeamBin const>::operator*(&__for_begin);
    SumoTeam::SumoTeam((SumoTeam *const)(v2 + 80));
    SumoTeam::fromBin((SumoTeam *const)(v2 + 80), bin_team);
    std::vector<SumoTeam>::push_back(&this->sumo_team_vec, (const std::vector<SumoTeam>::value_type *)(v2 + 80));
    SumoTeam::~SumoTeam((SumoTeam *const)(v2 + 80));
    google::protobuf::internal::RepeatedPtrIterator<proto::SumoTeamBin const>::operator++(&__for_begin);
  }
  SumoStage::postSetTeam(this);
  std::map<unsigned long,std::pair<unsigned int,unsigned int>>::clear(&this->in_dungeon_avatar_team_index_map);
  for ( *(_DWORD *)(v2 + 48) = 0; ; ++*(_DWORD *)(v2 + 48) )
  {
    v13 = *(unsigned int *)(v2 + 48);
    if ( v13 >= std::vector<SumoTeam>::size(&this->sumo_team_vec) )
      break;
    team = std::vector<SumoTeam>::operator[](&this->sumo_team_vec, *(unsigned int *)(v2 + 48));
    for ( *(_DWORD *)(v2 + 64) = 0; ; ++*(_DWORD *)(v2 + 64) )
    {
      v14 = *(unsigned int *)(v2 + 64);
      if ( v14 >= std::vector<SumoAvatar>::size(&team->avatar_vec) )
        break;
      v15 = std::vector<SumoAvatar>::operator[](&team->avatar_vec, *(unsigned int *)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&v15->in_dungeon_guid >> 3) + 0x7FFF8000) )
        v15 = (std::vector<SumoAvatar>::reference)__asan_report_load8(&v15->in_dungeon_guid);
      if ( v15->in_dungeon_guid )
      {
        __for_end.it_ = (void *const *)std::make_pair<unsigned int &,unsigned int &>(
                                         (unsigned int *)(v2 + 48),
                                         (unsigned int *)(v2 + 64));
        v16 = std::vector<SumoAvatar>::operator[](&team->avatar_vec, *(unsigned int *)(v2 + 64));
        v17 = std::map<unsigned long,std::pair<unsigned int,unsigned int>>::operator[](
                &this->in_dungeon_avatar_team_index_map,
                &v16->in_dungeon_guid);
        std::pair<unsigned int,unsigned int>::operator=(
          v17,
          (std::conditional<true,std::pair<unsigned int,unsigned int>&&,std::__nonesuch_no_braces&&>::type)&__for_end);
      }
    }
  }
  if ( v24 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
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

// Line 162: range 0000000017FF4CBE-0000000017FF4E2E
void __cdecl SumoStage::toClient(const SumoStage *const this, proto::SumoStageData *client_stage_data)
{
  proto::SumoTeamData *v2; // rax
  std::vector<SumoTeam>::const_iterator __for_begin; // [rsp+10h] [rbp-20h] BYREF
  std::vector<SumoTeam>::const_iterator __for_end; // [rsp+18h] [rbp-18h] BYREF
  const std::vector<SumoTeam> *__for_range; // [rsp+20h] [rbp-10h]
  const SumoTeam *team; // [rsp+28h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  proto::SumoStageData::set_stage_id(client_stage_data, this->stage_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->max_score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_score >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->max_score);
  }
  proto::SumoStageData::set_max_score(client_stage_data, this->max_score);
  if ( *(char *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_open);
  proto::SumoStageData::set_is_open(client_stage_data, this->is_open);
  __for_range = &this->sumo_team_vec;
  __for_begin._M_current = std::vector<SumoTeam>::begin(&this->sumo_team_vec)._M_current;
  __for_end._M_current = std::vector<SumoTeam>::end(&this->sumo_team_vec)._M_current;
  while ( __gnu_cxx::operator!=<SumoTeam const*,std::vector<SumoTeam>>(&__for_begin, &__for_end) )
  {
    team = __gnu_cxx::__normal_iterator<SumoTeam const*,std::vector<SumoTeam>>::operator*(&__for_begin);
    v2 = proto::SumoStageData::add_team_list(client_stage_data);
    SumoTeam::toClient(team, v2);
    __gnu_cxx::__normal_iterator<SumoTeam const*,std::vector<SumoTeam>>::operator++(&__for_begin);
  }
};

// Line 173: range 0000000017FF4E30-0000000017FF5227
void __cdecl SumoStage::postSetTeam(SumoStage *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::vector<SumoTeam>::size_type v4; // r14
  std::vector<SumoAvatar>::size_type v5; // r14
  unsigned __int64 v6; // rax
  std::vector<SumoAvatar>::reference v7; // rax
  std::pair<unsigned int,unsigned int> *v8; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> > >,bool> v9; // rax
  common::milog::MiLogStream *v10; // r14
  std::vector<SumoAvatar>::reference v11; // rax
  std::vector<SumoAvatar>::reference v12; // rax
  std::pair<unsigned int,unsigned int> *v13; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<long unsigned int const,std::pair<unsigned int,unsigned int> > >,bool> v14; // rax
  common::milog::MiLogStream *v15; // r14
  std::vector<SumoAvatar>::reference v16; // rax
  SumoTeam *team; // [rsp+18h] [rbp-E8h]
  std::pair<unsigned int,unsigned int> v18; // [rsp+20h] [rbp-E0h] BYREF
  std::pair<unsigned int,unsigned int> v19; // [rsp+28h] [rbp-D8h] BYREF
  common::milog::MiLogStream v20; // [rsp+30h] [rbp-D0h] BYREF
  common::milog::MiLogStream v21; // [rsp+50h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+70h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 12 team_idx:176 64 4 14 avatar_idx:179";
  *(_QWORD *)(v1 + 16) = SumoStage::postSetTeam;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202116348;
  std::map<unsigned long,std::pair<unsigned int,unsigned int>>::clear(&this->formal_avatar_team_index_map);
  std::map<unsigned int,std::pair<unsigned int,unsigned int>>::clear(&this->trial_avatar_team_index_map);
  for ( *(_DWORD *)(v1 + 48) = 0; ; ++*(_DWORD *)(v1 + 48) )
  {
    v4 = *(unsigned int *)(v1 + 48);
    if ( v4 >= std::vector<SumoTeam>::size(&this->sumo_team_vec) )
      break;
    team = std::vector<SumoTeam>::operator[](&this->sumo_team_vec, *(unsigned int *)(v1 + 48));
    for ( *(_DWORD *)(v1 + 64) = 0; ; ++*(_DWORD *)(v1 + 64) )
    {
      v5 = *(unsigned int *)(v1 + 64);
      if ( v5 >= std::vector<SumoAvatar>::size(&team->avatar_vec) )
        break;
      v6 = (unsigned __int64)std::vector<SumoAvatar>::operator[](&team->avatar_vec, *(unsigned int *)(v1 + 64));
      if ( *(char *)((v6 >> 3) + 0x7FFF8000) < 0 )
        v6 = __asan_report_load1(v6);
      if ( *(_BYTE *)v6 )
      {
        v18 = std::make_pair<unsigned int &,unsigned int &>((unsigned int *)(v1 + 48), (unsigned int *)(v1 + 64));
        v7 = std::vector<SumoAvatar>::operator[](&team->avatar_vec, *(unsigned int *)(v1 + 64));
        v9 = std::map<unsigned int,std::pair<unsigned int,unsigned int>>::emplace<unsigned long &,std::pair<unsigned int,unsigned int>>(
               &this->trial_avatar_team_index_map,
               &v7->avatar_id,
               &v18,
               &v7->avatar_id,
               v8);
        if ( !v9.second )
        {
          common::milog::MiLogStream::create(
            &v20,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/activity/sumo_activity.cpp",
            "postSetTeam",
            185);
          v10 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                  &v20,
                  (const char (*)[51])"[SUMO] duplicate trial avatar id, trial_avatar_id:");
          v11 = std::vector<SumoAvatar>::operator[](&team->avatar_vec, *(unsigned int *)(v1 + 64));
          common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v10, &v11->avatar_id);
          common::milog::MiLogStream::~MiLogStream(&v20);
          goto LABEL_17;
        }
      }
      else
      {
        v19 = std::make_pair<unsigned int &,unsigned int &>((unsigned int *)(v1 + 48), (unsigned int *)(v1 + 64));
        v12 = std::vector<SumoAvatar>::operator[](&team->avatar_vec, *(unsigned int *)(v1 + 64));
        v14 = std::map<unsigned long,std::pair<unsigned int,unsigned int>>::emplace<unsigned long &,std::pair<unsigned int,unsigned int>>(
                &this->formal_avatar_team_index_map,
                &v12->avatar_id,
                &v19,
                &v12->avatar_id,
                v13);
        if ( !v14.second )
        {
          common::milog::MiLogStream::create(
            &v21,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/activity/sumo_activity.cpp",
            "postSetTeam",
            193);
          v15 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                  &v21,
                  (const char (*)[53])"[SUMO] duplicate formal avatar id, formal_avatar_id:");
          v16 = std::vector<SumoAvatar>::operator[](&team->avatar_vec, *(unsigned int *)(v1 + 64));
          common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v15, &v16->avatar_id);
          common::milog::MiLogStream::~MiLogStream(&v21);
          goto LABEL_17;
        }
      }
    }
  }
LABEL_17:
  if ( v22 == (char *)v1 )
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

// Line 202: range 0000000017FF5228-0000000017FF55F5
int32_t __cdecl SumoActivity::fromScheduleBin(SumoActivity *const this, const proto::ActivityScheduleBin *bin)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // rbx
  google::protobuf::RepeatedPtrField<proto::SumoStageBin>::const_iterator *p_for_end; // rsi
  unsigned int *v6; // rcx
  SumoStage *v7; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,SumoStage> >,bool> v8; // rax
  common::milog::MiLogStream *v9; // r14
  __int64 v10; // rdx
  char v11; // al
  __int64 stage_id; // rdx
  char v13; // al
  int32_t result; // eax
  unsigned int val; // [rsp+14h] [rbp-1BCh] BYREF
  google::protobuf::RepeatedPtrField<proto::SumoStageBin>::const_iterator __for_begin; // [rsp+18h] [rbp-1B8h] BYREF
  google::protobuf::RepeatedPtrField<proto::SumoStageBin>::const_iterator __for_end; // [rsp+20h] [rbp-1B0h] BYREF
  const proto::SumoScheduleBin *schedule_bin; // [rsp+28h] [rbp-1A8h]
  const google::protobuf::RepeatedPtrField<proto::SumoStageBin> *__for_range; // [rsp+30h] [rbp-1A0h]
  const proto::SumoStageBin *stage_bin; // [rsp+38h] [rbp-198h]
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-190h] BYREF
  char v22[368]; // [rsp+60h] [rbp-170h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 48 200 9 stage:207";
  *(_QWORD *)(v2 + 16) = SumoActivity::fromScheduleBin;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862727] = -218103808;
  v4[536862728] = -202116109;
  v4[536862729] = -202116109;
  schedule_bin = proto::ActivityScheduleBin::sumo_bin(bin);
  std::map<unsigned int,SumoStage>::clear(&this->sumo_stage_map_);
  __for_range = proto::SumoScheduleBin::stage_bin_list(schedule_bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::SumoStageBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::SumoStageBin>::end(__for_range).it_;
  while ( 1 )
  {
    p_for_end = &__for_end;
    if ( !google::protobuf::internal::RepeatedPtrIterator<proto::SumoStageBin const>::operator!=(
            &__for_begin,
            &__for_end) )
      break;
    stage_bin = google::protobuf::internal::RepeatedPtrIterator<proto::SumoStageBin const>::operator*(&__for_begin);
    SumoStage::SumoStage((SumoStage *const)(v2 + 48));
    SumoStage::fromBin((SumoStage *const)(v2 + 48), stage_bin);
    val = proto::SumoStageBin::stage_id(stage_bin);
    v8 = std::map<unsigned int,SumoStage>::emplace<unsigned int,SumoStage&>(
           &this->sumo_stage_map_,
           &val,
           (SumoStage *)(v2 + 48),
           v6,
           v7);
    if ( !v8.second )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/sumo_activity.cpp",
        "fromScheduleBin",
        211);
      v9 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
             &v21,
             (const char (*)[34])"[SUMO] duplicate stage, stage_id:");
      val = proto::SumoStageBin::stage_id(stage_bin);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
    }
    SumoStage::~SumoStage((SumoStage *const)(v2 + 48));
    google::protobuf::internal::RepeatedPtrIterator<proto::SumoStageBin const>::operator++(&__for_begin);
  }
  v10 = proto::SumoScheduleBin::difficulty_id(schedule_bin);
  v11 = *(_BYTE *)(((unsigned __int64)&this->saved_difficulty_id_ >> 3) + 0x7FFF8000);
  if ( v11 != 0 && v11 <= 3 )
  {
    LOBYTE(p_for_end) = v11 != 0;
    __asan_report_store4(&this->saved_difficulty_id_, p_for_end, v10);
  }
  this->saved_difficulty_id_ = v10;
  stage_id = proto::SumoScheduleBin::last_stage_id(schedule_bin);
  v13 = *(_BYTE *)(((unsigned __int64)&this->last_stage_id_ >> 3) + 0x7FFF8000);
  if ( v13 != 0 && v13 <= 3 )
  {
    LOBYTE(p_for_end) = v13 != 0;
    __asan_report_store4(&this->last_stage_id_, p_for_end, stage_id);
  }
  this->last_stage_id_ = stage_id;
  result = 0;
  if ( v22 == (char *)v2 )
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
  return result;
};

// Line 220: range 0000000017FF55F6-0000000017FF5757
int32_t __cdecl SumoActivity::toScheduleBin(const SumoActivity *const this, proto::ActivityScheduleBin *bin)
{
  proto::SumoStageBin *v2; // rax
  std::map<unsigned int,SumoStage>::const_iterator __for_begin; // [rsp+18h] [rbp-38h] BYREF
  std::map<unsigned int,SumoStage>::const_iterator __for_end; // [rsp+20h] [rbp-30h] BYREF
  proto::SumoScheduleBin *schedule_bin; // [rsp+28h] [rbp-28h]
  const std::map<unsigned int,SumoStage> *__for_range; // [rsp+30h] [rbp-20h]
  const std::pair<unsigned int const,SumoStage> *v8; // [rsp+38h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,SumoStage> >::type *_; // [rsp+40h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,SumoStage> >::type *stage; // [rsp+48h] [rbp-8h]

  schedule_bin = proto::ActivityScheduleBin::mutable_sumo_bin(bin);
  __for_range = &this->sumo_stage_map_;
  __for_begin._M_node = std::map<unsigned int,SumoStage>::begin(&this->sumo_stage_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,SumoStage>::end(&this->sumo_stage_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v8 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,SumoStage>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,SumoStage>(v8);
    stage = (std::tuple_element<1,const std::pair<unsigned int const,SumoStage> >::type *)std::get<1ul,unsigned int const,SumoStage>(v8);
    v2 = proto::SumoScheduleBin::add_stage_bin_list(schedule_bin);
    SumoStage::toBin(stage, v2);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,SumoStage>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->saved_difficulty_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->saved_difficulty_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->saved_difficulty_id_);
  }
  proto::SumoScheduleBin::set_difficulty_id(schedule_bin, this->saved_difficulty_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_stage_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_stage_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_stage_id_);
  }
  proto::SumoScheduleBin::set_last_stage_id(schedule_bin, this->last_stage_id_);
  return 0;
};

// Line 232: range 0000000017FF5758-0000000017FF5BC6
int32_t __cdecl SumoActivity::toClient(SumoActivity *const this, proto::ActivityInfo *activity_info)
{
  common::milog::MiLogStream *v2; // rbx
  ActivitySumoExcelConfigMgr *p_activity_sumo_config_mgr; // rcx
  common::milog::MiLogStream *v5; // rax
  uint32_t open_day; // ecx
  uint32_t BeginTimeByOpenDay; // eax
  unsigned int val; // [rsp+1Ch] [rbp-94h] BYREF
  std::map<unsigned int,SumoStage>::iterator __for_begin; // [rsp+20h] [rbp-90h] BYREF
  std::map<unsigned int,SumoStage>::iterator __for_end; // [rsp+28h] [rbp-88h] BYREF
  proto::SumoActivityDetailInfo *client_info; // [rsp+30h] [rbp-80h]
  google::protobuf::Map<unsigned int,proto::SumoStageData> *stage_map; // [rsp+38h] [rbp-78h]
  std::map<unsigned int,SumoStage> *__for_range; // [rsp+40h] [rbp-70h]
  const std::pair<unsigned int const,SumoStage> *v14; // [rsp+48h] [rbp-68h]
  std::tuple_element<0,const std::pair<unsigned int const,SumoStage> >::type *stage_id; // [rsp+50h] [rbp-60h]
  std::tuple_element<1,const std::pair<unsigned int const,SumoStage> >::type *stage; // [rsp+58h] [rbp-58h]
  proto::SumoStageData *client_stage_data; // [rsp+60h] [rbp-50h]
  const data::ActivitySumoStageExcelConfig *stage_config_ptr; // [rsp+68h] [rbp-48h]
  std::shared_ptr<Config> v19; // [rsp+70h] [rbp-40h] BYREF
  common::milog::MiLogStream v20; // [rsp+80h] [rbp-30h] BYREF

  if ( BaseActivity::toClient(this, activity_info) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/sumo_activity.cpp",
      "toClient",
      235);
    v2 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v20,
           (const char (*)[36])"BaseActivity::toClient fails, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
    common::milog::MiLogStream::~MiLogStream(&v20);
    return -1;
  }
  else
  {
    client_info = proto::ActivityInfo::mutable_sumo_info(activity_info);
    stage_map = proto::SumoActivityDetailInfo::mutable_sumo_stage_map(client_info);
    __for_range = &this->sumo_stage_map_;
    __for_begin._M_node = std::map<unsigned int,SumoStage>::begin(&this->sumo_stage_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,SumoStage>::end(&this->sumo_stage_map_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v14 = std::_Rb_tree_iterator<std::pair<unsigned int const,SumoStage>>::operator*(&__for_begin);
      stage_id = std::get<0ul,unsigned int const,SumoStage>(v14);
      stage = (std::tuple_element<1,const std::pair<unsigned int const,SumoStage> >::type *)std::get<1ul,unsigned int const,SumoStage>(v14);
      client_stage_data = google::protobuf::Map<unsigned int,proto::SumoStageData>::operator[](stage_map, stage_id);
      SumoStage::toClient(stage, client_stage_data);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v19);
      p_activity_sumo_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19)->design_config.txt_config_mgr.activity_sumo_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)stage_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(stage_id);
      }
      stage_config_ptr = data::ActivitySumoExcelConfigMgrBase::findActivitySumoStageExcelConfig(
                           p_activity_sumo_config_mgr,
                           *stage_id);
      std::shared_ptr<Config>::~shared_ptr(&v19);
      if ( stage_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&stage_config_ptr->open_day >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&stage_config_ptr->open_day >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&stage_config_ptr->open_day);
        }
        open_day = stage_config_ptr->open_day;
        if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&this->schedule_id_);
        }
        BeginTimeByOpenDay = BaseActivity::getBeginTimeByOpenDay(this->schedule_id_, open_day);
        proto::SumoStageData::set_open_time(client_stage_data, BeginTimeByOpenDay);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v20,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/sumo_activity.cpp",
          "toClient",
          247);
        v5 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
               &v20,
               (const char (*)[41])"[SUMO] stage config not found, stage_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, stage_id);
        common::milog::MiLogStream::~MiLogStream(&v20);
      }
      std::_Rb_tree_iterator<std::pair<unsigned int const,SumoStage>>::operator++(&__for_begin);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->saved_difficulty_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->saved_difficulty_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->saved_difficulty_id_);
    }
    proto::SumoActivityDetailInfo::set_difficulty_id(client_info, this->saved_difficulty_id_);
    if ( *(_BYTE *)(((unsigned __int64)&this->last_stage_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->last_stage_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->last_stage_id_);
    }
    proto::SumoActivityDetailInfo::set_last_stage_id(client_info, this->last_stage_id_);
    return 0;
  }
};

// Line 258: range 0000000017FF5BC8-0000000017FF5C2A
void __cdecl SumoActivity::onLogin(SumoActivity *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  if ( !Player::isRelogin(this->player_) )
    SumoActivity::checkAvatarWhenLogin(this);
  BaseActivity::onLogin(this);
};

// Line 267: range 0000000017FF5C2C-0000000017FF5C89
int32_t __cdecl SumoActivity::init(SumoActivity *const this)
{
  if ( BaseActivity::isOpening(this, 0) && !BaseActivity::isSettled(this) )
    SumoActivity::initObserver(this);
  return 0;
};

// Line 277: range 0000000017FF5C8A-0000000017FF5CA4
void __cdecl SumoActivity::onStart(SumoActivity *const this)
{
  SumoActivity::initObserver(this);
};

// Line 282: range 0000000017FF5CA6-0000000017FF5CC0
void __cdecl SumoActivity::onSettle(SumoActivity *const this)
{
  SumoActivity::delSumoWatchers(this);
};

// Line 287: range 0000000017FF5CC2-0000000017FF62F5
void __cdecl SumoActivity::onPreStart(SumoActivity *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  ActivitySumoExcelConfigMgr *p_activity_sumo_config_mgr; // rcx
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r14
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v8; // rax
  _DWORD *v9; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  SumoStage *v12; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,SumoStage> >,bool> v13; // rax
  common::milog::MiLogStream *v14; // rax
  std::vector<unsigned int>::iterator __for_begin; // [rsp+10h] [rbp-200h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+18h] [rbp-1F8h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+20h] [rbp-1F0h]
  const data::ActivitySumoStageExcelConfig *stage_config_ptr; // [rsp+28h] [rbp-1E8h]
  std::shared_ptr<Config> v19; // [rsp+30h] [rbp-1E0h] BYREF
  common::milog::MiLogStream v20; // [rsp+40h] [rbp-1D0h] BYREF
  char v21[432]; // [rsp+60h] [rbp-1B0h] BYREF

  v1 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(384LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 4 12 stage_id:294 48 24 16 stage_id_vec:288 112 200 9 stage:302";
  *(_QWORD *)(v1 + 16) = SumoActivity::onPreStart;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61956;
  v3[536862722] = -218959360;
  v3[536862723] = 62194;
  v3[536862729] = -218103808;
  v3[536862730] = -202116109;
  v3[536862731] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v19);
  p_activity_sumo_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19)->design_config.txt_config_mgr.activity_sumo_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->schedule_id_);
  }
  ActivitySumoExcelConfigMgr::findScheduleStageIdVec(
    (std::vector<unsigned int> *)(v1 + 48),
    p_activity_sumo_config_mgr,
    this->schedule_id_);
  std::shared_ptr<Config>::~shared_ptr(&v19);
  if ( std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v1 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/sumo_activity.cpp",
      "onPreStart",
      291);
    v5 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v20,
           (const char (*)[43])"[SUMO] stage_id_vec is empty, schedule_id:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->schedule_id_);
    v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v6, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    *(_DWORD *)(v1 + 32) = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v1 + 32));
    common::milog::MiLogStream::~MiLogStream(&v20);
  }
  else
  {
    __for_range = (std::vector<unsigned int> *)(v1 + 48);
    __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v1 + 48))._M_current;
    __for_end._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v1 + 48))._M_current;
    while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v8 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
      v9 = v8;
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v8);
      }
      *(_DWORD *)(v1 + 32) = *v9;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v19);
      v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19);
      stage_config_ptr = data::ActivitySumoExcelConfigMgrBase::findActivitySumoStageExcelConfig(
                           &v10->design_config.txt_config_mgr.activity_sumo_config_mgr,
                           *(_DWORD *)(v1 + 32));
      std::shared_ptr<Config>::~shared_ptr(&v19);
      if ( stage_config_ptr )
      {
        SumoStage::SumoStage((SumoStage *const)(v1 + 112));
        *(_DWORD *)(v1 + 112) = *(_DWORD *)(v1 + 32);
        *(_BYTE *)(v1 + 120) = 0;
        v13 = std::map<unsigned int,SumoStage>::emplace<unsigned int &,SumoStage&>(
                &this->sumo_stage_map_,
                (unsigned int *)(v1 + 32),
                (SumoStage *)(v1 + 112),
                (unsigned int *)&this->sumo_stage_map_,
                v12);
        if ( !v13.second )
        {
          common::milog::MiLogStream::create(
            &v20,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/activity/sumo_activity.cpp",
            "onPreStart",
            307);
          v14 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                  &v20,
                  (const char (*)[36])"[SUMO] duplicated stage!, stage_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v1 + 32));
          common::milog::MiLogStream::~MiLogStream(&v20);
        }
        SumoStage::~SumoStage((SumoStage *const)(v1 + 112));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v20,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/sumo_activity.cpp",
          "onPreStart",
          299);
        v11 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                &v20,
                (const char (*)[41])"[SUMO] stage_config not found, stage_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v1 + 32));
        common::milog::MiLogStream::~MiLogStream(&v20);
      }
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
    }
  }
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v1 + 48));
  if ( v21 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8024) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF802C) = 0;
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
  }
};

// Line 314: range 0000000017FF62F6-0000000017FF6676
int32_t __cdecl SumoActivity::execAction(SumoActivity *const this, const data::NewActivityExec *action_exec)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // r13
  common::milog::MiLogStream *v6; // rax
  int32_t result; // eax
  const std::string *v8; // rax
  common::milog::MiLogStream *v9; // r13
  const std::string *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  unsigned __int64 val; // [rsp+18h] [rbp-88h] BYREF
  common::milog::MiLogStream v14; // [rsp+20h] [rbp-80h] BYREF
  char v15[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 stage_id:324";
  *(_QWORD *)(v2 + 16) = SumoActivity::execAction;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&action_exec->type);
  }
  if ( action_exec->type == NEW_ACTIVITY_ACTION_OPEN_SUMO_STAGE )
  {
    if ( std::vector<std::string>::size(&action_exec->param) )
    {
      *(_DWORD *)(v2 + 32) = 0;
      v8 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
      if ( common::tools::StringUtils::strToNum<unsigned int>(v8, (unsigned int *)(v2 + 32), 1) )
      {
        common::milog::MiLogStream::create(
          &v14,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/sumo_activity.cpp",
          "execAction",
          327);
        v9 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
               &v14,
               (const char (*)[17])"[SUMO] strToNum ");
        v10 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
        v11 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, v10);
        common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v11, (const char (*)[8])" failed");
        common::milog::MiLogStream::~MiLogStream(&v14);
        result = -1;
      }
      else if ( SumoActivity::openStage(this, *(_DWORD *)(v2 + 32)) )
      {
        common::milog::MiLogStream::create(
          &v14,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/sumo_activity.cpp",
          "execAction",
          332);
        v12 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                &v14,
                (const char (*)[35])"[SUMO] openStage failed, stage_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 32));
        common::milog::MiLogStream::~MiLogStream(&v14);
        result = -1;
      }
      else
      {
        result = 0;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/sumo_activity.cpp",
        "execAction",
        321);
      v5 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
             &v14,
             (const char (*)[26])"[SUMO] action param size ");
      val = std::vector<std::string>::size(&action_exec->param);
      v6 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v5, &val);
      common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v6, (const char (*)[12])off_2648B580);
      common::milog::MiLogStream::~MiLogStream(&v14);
      result = -1;
    }
  }
  else
  {
    result = BaseActivity::execAction(this, action_exec);
  }
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

// Line 344: range 0000000017FF6678-0000000017FF671E
void __cdecl SumoActivity::onClear(SumoActivity *const this)
{
  __int64 v1; // rsi
  uint32_t *p_saved_difficulty_id; // rdx

  std::map<unsigned int,SumoStage>::clear(&this->sumo_stage_map_);
  p_saved_difficulty_id = &this->saved_difficulty_id_;
  if ( *(_BYTE *)(((unsigned __int64)p_saved_difficulty_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_saved_difficulty_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->saved_difficulty_id_, v1, p_saved_difficulty_id);
  }
  this->saved_difficulty_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_stage_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_stage_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_stage_id_, v1, &this->last_stage_id_);
  }
  this->last_stage_id_ = 0;
};

// Line 351: range 0000000017FF6720-0000000017FF6BA8
void __cdecl SumoActivity::initObserver(SumoActivity *const this)
{
  unsigned __int64 v1; // r14
  __int64 v2; // rax
  _DWORD *v3; // r15
  PlayerEventComp *EventComp; // r12
  PlayerEventComp *v5; // rbx
  PlayerEventComp *v6; // rbx
  PlayerEventComp *v7; // rbx
  std::enable_shared_from_this<BaseActivity> v8; // [rsp+50h] [rbp-A0h] BYREF
  char v9[144]; // [rsp+60h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 12 this_ptr:352 64 16 12 this_wtr:353";
  *(_QWORD *)(v1 + 16) = SumoActivity::initObserver;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  std::enable_shared_from_this<BaseActivity>::shared_from_this(&v8);
  std::dynamic_pointer_cast<SumoActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)(v1 + 32));
  std::shared_ptr<BaseActivity>::~shared_ptr((std::shared_ptr<BaseActivity> *const)&v8);
  std::weak_ptr<SumoActivity>::weak_ptr<SumoActivity,void>(
    (std::weak_ptr<SumoActivity> *const)(v1 + 64),
    (const std::shared_ptr<SumoActivity> *)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  EventComp = Player::getEventComp(this->player_);
  std::weak_ptr<SumoActivity>::weak_ptr(
    (std::weak_ptr<SumoActivity> *const)&v8,
    (const std::weak_ptr<SumoActivity> *)(v1 + 64));
  PlayerEventComp::tryRegisterObserver<SumoActivity,LeaveSceneEvent>(
    EventComp,
    (std::weak_ptr<SumoActivity> *)&v8,
    (void (*)(SumoActivity *, const LeaveSceneEvent *))SumoActivity::onLeaveSceneEvent,
    0LL);
  std::weak_ptr<SumoActivity>::~weak_ptr((std::weak_ptr<SumoActivity> *const)&v8);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  v5 = Player::getEventComp(this->player_);
  std::weak_ptr<SumoActivity>::weak_ptr(
    (std::weak_ptr<SumoActivity> *const)&v8,
    (const std::weak_ptr<SumoActivity> *)(v1 + 64));
  PlayerEventComp::tryRegisterObserver<SumoActivity,PostEnterSceneEvent>(
    v5,
    (std::weak_ptr<SumoActivity> *)&v8,
    (void (*)(SumoActivity *, const PostEnterSceneEvent *))SumoActivity::onPostEnterSceneEvent,
    0LL);
  std::weak_ptr<SumoActivity>::~weak_ptr((std::weak_ptr<SumoActivity> *const)&v8);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  v6 = Player::getEventComp(this->player_);
  std::weak_ptr<SumoActivity>::weak_ptr(
    (std::weak_ptr<SumoActivity> *const)&v8,
    (const std::weak_ptr<SumoActivity> *)(v1 + 64));
  PlayerEventComp::tryRegisterObserver<SumoActivity,GallerySumoCombatSettleEvent>(
    v6,
    (std::weak_ptr<SumoActivity> *)&v8,
    (void (*)(SumoActivity *, const GallerySumoCombatSettleEvent *))SumoActivity::onGallerySumoCombatSettleEvent,
    0LL);
  std::weak_ptr<SumoActivity>::~weak_ptr((std::weak_ptr<SumoActivity> *const)&v8);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  v7 = Player::getEventComp(this->player_);
  std::weak_ptr<SumoActivity>::weak_ptr(
    (std::weak_ptr<SumoActivity> *const)&v8,
    (const std::weak_ptr<SumoActivity> *)(v1 + 64));
  PlayerEventComp::tryRegisterObserver<SumoActivity,GalleryStartEvent>(
    v7,
    (std::weak_ptr<SumoActivity> *)&v8,
    (void (*)(SumoActivity *, const GalleryStartEvent *))SumoActivity::onGalleryStartEvent,
    0LL);
  std::weak_ptr<SumoActivity>::~weak_ptr((std::weak_ptr<SumoActivity> *const)&v8);
  std::weak_ptr<SumoActivity>::~weak_ptr((std::weak_ptr<SumoActivity> *const)(v1 + 64));
  std::shared_ptr<SumoActivity>::~shared_ptr((std::shared_ptr<SumoActivity> *const)(v1 + 32));
  if ( v9 == (char *)v1 )
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

// Line 361: range 0000000017FF6BAA-0000000017FF6DD9
__int64 __fastcall SumoActivity::openStage(SumoActivity *const this, uint32_t stage_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::_Rb_tree_iterator<std::pair<unsigned int const,SumoStage> >::_Self *p_y; // rsi
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  __int64 v8; // rax
  char v9; // dl
  _BOOL8 v10; // rdx
  std::_Rb_tree_iterator<std::pair<unsigned int const,SumoStage> >::_Self __y; // [rsp+18h] [rbp-A8h] BYREF
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-A0h] BYREF
  char v13[128]; // [rsp+40h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 stage_id:360 64 8 8 iter:362";
  *(_QWORD *)(v2 + 16) = SumoActivity::openStage;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = stage_id;
  *(std::map<unsigned int,SumoStage>::iterator *)(v2 + 64) = std::map<unsigned int,SumoStage>::find(
                                                               &this->sumo_stage_map_,
                                                               (const std::map<unsigned int,SumoStage>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,SumoStage>::end(&this->sumo_stage_map_)._M_node;
  p_y = &__y;
  if ( std::operator==((const std::_Rb_tree_iterator<std::pair<unsigned int const,SumoStage> >::_Self *)(v2 + 64), &__y) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/sumo_activity.cpp",
      "openStage",
      365);
    v6 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v12,
           (const char (*)[34])"[SUMO] stage not found, stage_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v12);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    v8 = (__int64)std::_Rb_tree_iterator<std::pair<unsigned int const,SumoStage>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,SumoStage> > *const)(v2 + 64));
    v9 = *(_BYTE *)(((unsigned __int64)(v8 + 16) >> 3) + 0x7FFF8000);
    LOBYTE(p_y) = v9 != 0;
    v10 = v9 < 0;
    if ( v10 )
      v8 = __asan_report_store1(v8 + 16, p_y, v10);
    *(_BYTE *)(v8 + 16) = 1;
    BaseActivity::notifyClientData(this, 0);
    result = 0LL;
  }
  if ( v13 == (char *)v2 )
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

// Line 375: range 0000000017FF6DDA-0000000017FF773A
void __cdecl SumoActivity::delSumoWatchers(SumoActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  ActivitySumoExcelConfigMgr *p_activity_sumo_config_mgr; // rcx
  common::milog::MiLogStream *v5; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v6; // rax
  _DWORD *v7; // rdx
  uint32_t WatcherComp; // eax
  bool v9; // r14
  PlayerWatcherComp *v10; // rax
  common::milog::MiLogStream *v11; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  common::milog::MiLogStream *v14; // rax
  uint32_t v15; // ecx
  bool v16; // r13
  PlayerWatcherComp *v17; // rcx
  common::milog::MiLogStream *v18; // rax
  std::map<unsigned int,SumoStage>::iterator __for_begin; // [rsp+10h] [rbp-100h] BYREF
  std::map<unsigned int,SumoStage>::iterator __for_end; // [rsp+18h] [rbp-F8h] BYREF
  std::vector<unsigned int>::const_iterator __for_begin_0; // [rsp+20h] [rbp-F0h] BYREF
  std::vector<unsigned int>::const_iterator __for_end_0; // [rsp+28h] [rbp-E8h] BYREF
  std::map<unsigned int,SumoStage> *__for_range; // [rsp+30h] [rbp-E0h]
  const data::ActivitySumoOverallConfig *overall_config_ptr; // [rsp+38h] [rbp-D8h]
  const data::NewActivityWatcherConfig *wathcer_config_ptr; // [rsp+40h] [rbp-D0h]
  const std::pair<unsigned int const,SumoStage> *v26; // [rsp+48h] [rbp-C8h]
  std::tuple_element<0,const std::pair<unsigned int const,SumoStage> >::type *stage_id; // [rsp+50h] [rbp-C0h]
  std::tuple_element<1,const std::pair<unsigned int const,SumoStage> >::type *stage; // [rsp+58h] [rbp-B8h]
  const data::ActivitySumoStageExcelConfig *stage_config_ptr; // [rsp+60h] [rbp-B0h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+68h] [rbp-A8h]
  std::shared_ptr<Config> v31; // [rsp+70h] [rbp-A0h] BYREF
  common::milog::MiLogStream v32; // [rsp+80h] [rbp-90h] BYREF
  char v33[112]; // [rsp+A0h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 14 watcher_id:384";
  *(_QWORD *)(v1 + 16) = SumoActivity::delSumoWatchers;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  __for_range = &this->sumo_stage_map_;
  __for_begin._M_node = std::map<unsigned int,SumoStage>::begin(&this->sumo_stage_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,SumoStage>::end(&this->sumo_stage_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v26 = std::_Rb_tree_iterator<std::pair<unsigned int const,SumoStage>>::operator*(&__for_begin);
    stage_id = std::get<0ul,unsigned int const,SumoStage>(v26);
    stage = (std::tuple_element<1,const std::pair<unsigned int const,SumoStage> >::type *)std::get<1ul,unsigned int const,SumoStage>(v26);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v31);
    p_activity_sumo_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v31)->design_config.txt_config_mgr.activity_sumo_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)stage_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(stage_id);
    }
    stage_config_ptr = data::ActivitySumoExcelConfigMgrBase::findActivitySumoStageExcelConfig(
                         p_activity_sumo_config_mgr,
                         *stage_id);
    std::shared_ptr<Config>::~shared_ptr(&v31);
    if ( stage_config_ptr )
    {
      __for_range_0 = &stage_config_ptr->watcher_list;
      __for_begin_0._M_current = std::vector<unsigned int>::begin(&stage_config_ptr->watcher_list)._M_current;
      __for_end_0._M_current = std::vector<unsigned int>::end(__for_range_0)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin_0, &__for_end_0) )
      {
        v6 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin_0);
        v7 = v6;
        if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v6);
        }
        *(_DWORD *)(v1 + 32) = *v7;
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        WatcherComp = (unsigned int)Player::getWatcherComp(this->player_);
        PlayerWatcherComp::findWatcher((PlayerWatcherComp *const)&v31, WatcherComp);
        v9 = std::operator!=<BaseWatcher>(0LL, (const std::shared_ptr<BaseWatcher> *)&v31);
        std::shared_ptr<BaseWatcher>::~shared_ptr((std::shared_ptr<BaseWatcher> *const)&v31);
        if ( v9 )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          v10 = Player::getWatcherComp(this->player_);
          PlayerWatcherComp::delWatcher(v10, *(_DWORD *)(v1 + 32));
        }
        common::milog::MiLogStream::create(
          &v32,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/sumo_activity.cpp",
          "delSumoWatchers",
          390);
        v11 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                &v32,
                (const char (*)[32])"[SUMO] del watcher, watcher_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v1 + 32));
        common::milog::MiLogStream::~MiLogStream(&v32);
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin_0);
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v32,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/sumo_activity.cpp",
        "delSumoWatchers",
        381);
      v5 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
             &v32,
             (const char (*)[46])"[SUMO] stage_config_ptr is nullptr, stage_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, stage_id);
      common::milog::MiLogStream::~MiLogStream(&v32);
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,SumoStage>>::operator++(&__for_begin);
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v31);
  v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v31);
  overall_config_ptr = ActivitySumoExcelConfigMgr::getSumoOverallConfig(&v12->design_config.txt_config_mgr.activity_sumo_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v31);
  if ( overall_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&overall_config_ptr->global_watcher_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)overall_config_ptr + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&overall_config_ptr->global_watcher_id >> 3)
                                                                        + 0x7FFF8000) )
    {
      __asan_report_load4(&overall_config_ptr->global_watcher_id);
    }
    if ( overall_config_ptr->global_watcher_id )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v31);
      p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v31)->design_config.txt_config_mgr.new_activity_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&overall_config_ptr->global_watcher_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)overall_config_ptr + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&overall_config_ptr->global_watcher_id >> 3)
                                                                          + 0x7FFF8000) )
      {
        __asan_report_load4(&overall_config_ptr->global_watcher_id);
      }
      wathcer_config_ptr = data::NewActivityExcelConfigMgrBase::findNewActivityWatcherConfig(
                             p_new_activity_config_mgr,
                             overall_config_ptr->global_watcher_id);
      std::shared_ptr<Config>::~shared_ptr(&v31);
      if ( wathcer_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        v15 = (unsigned int)Player::getWatcherComp(this->player_);
        if ( *(_BYTE *)(((unsigned __int64)&overall_config_ptr->global_watcher_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)overall_config_ptr + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&overall_config_ptr->global_watcher_id >> 3)
                                                                            + 0x7FFF8000) )
        {
          __asan_report_load4(&overall_config_ptr->global_watcher_id);
        }
        PlayerWatcherComp::findWatcher((PlayerWatcherComp *const)&v31, v15);
        v16 = std::operator!=<BaseWatcher>(0LL, (const std::shared_ptr<BaseWatcher> *)&v31);
        std::shared_ptr<BaseWatcher>::~shared_ptr((std::shared_ptr<BaseWatcher> *const)&v31);
        if ( v16 )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          v17 = Player::getWatcherComp(this->player_);
          if ( *(_BYTE *)(((unsigned __int64)&overall_config_ptr->global_watcher_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)overall_config_ptr + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&overall_config_ptr->global_watcher_id >> 3)
                                                                              + 0x7FFF8000) )
          {
            __asan_report_load4(&overall_config_ptr->global_watcher_id);
          }
          PlayerWatcherComp::delWatcher(v17, overall_config_ptr->global_watcher_id);
        }
        common::milog::MiLogStream::create(
          &v32,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/sumo_activity.cpp",
          "delSumoWatchers",
          411);
        v18 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                &v32,
                (const char (*)[32])"[SUMO] del watcher, watcher_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
          v18,
          &overall_config_ptr->global_watcher_id);
        common::milog::MiLogStream::~MiLogStream(&v32);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v32,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/sumo_activity.cpp",
          "delSumoWatchers",
          404);
        v14 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                &v32,
                (const char (*)[50])"[SUMO] watcher_config_ptr is nullptr, watcher_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
          v14,
          &overall_config_ptr->global_watcher_id);
        common::milog::MiLogStream::~MiLogStream(&v32);
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v32,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/sumo_activity.cpp",
      "delSumoWatchers",
      396);
    common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
      &v32,
      (const char (*)[37])"[SUMO] overall_config_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v32);
  }
  if ( v33 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 416: range 0000000017FF773C-0000000017FF78C5
_BOOL8 __fastcall SumoActivity::isStageOpen(SumoActivity *const this, uint32_t stage_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  _BOOL8 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,SumoStage> >::pointer v6; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,SumoStage> >::_Self __y; // [rsp+18h] [rbp-88h] BYREF
  char v8[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 stage_id:415 64 8 8 iter:417";
  *(_QWORD *)(v2 + 16) = SumoActivity::isStageOpen;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = stage_id;
  *(std::map<unsigned int,SumoStage>::iterator *)(v2 + 64) = std::map<unsigned int,SumoStage>::find(
                                                               &this->sumo_stage_map_,
                                                               (const std::map<unsigned int,SumoStage>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,SumoStage>::end(&this->sumo_stage_map_)._M_node;
  if ( std::operator==((const std::_Rb_tree_iterator<std::pair<unsigned int const,SumoStage> >::_Self *)(v2 + 64), &__y) )
  {
    result = 0LL;
  }
  else
  {
    v6 = std::_Rb_tree_iterator<std::pair<unsigned int const,SumoStage>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,SumoStage> > *const)(v2 + 64));
    if ( *(char *)(((unsigned __int64)&v6->second.is_open >> 3) + 0x7FFF8000) < 0 )
      v6 = (std::_Rb_tree_iterator<std::pair<unsigned int const,SumoStage> >::pointer)__asan_report_load1(&v6->second.is_open);
    result = v6->second.is_open;
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

// Line 426: range 0000000017FF78C6-0000000017FF8D53
__int64 __fastcall SumoActivity::verifyClientTeamInfo(
        SumoActivity *const this,
        uint32_t stage_id,
        uint32_t difficulty_id,
        const google::protobuf::RepeatedPtrField<proto::SumoTeamData> *sumo_team_data)
{
  unsigned int v4; // r14d
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  bool v9; // r15
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  int v13; // ecx
  common::milog::MiLogStream *v14; // rax
  const unsigned int *M_current; // r15
  std::vector<unsigned int>::const_iterator v16; // rax
  const unsigned int *v17; // r15
  std::vector<unsigned int>::const_iterator v18; // rax
  const unsigned int *v19; // r15
  std::vector<unsigned int>::const_iterator v20; // rax
  unsigned int v21; // esi
  char v22; // al
  common::milog::MiLogStream *v23; // r14
  TrialAvatarExcelConfigMgr *p_trial_avatar_config_mgr; // r15
  uint32_t v25; // eax
  common::milog::MiLogStream *v26; // r14
  common::milog::MiLogStream *v27; // r14
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v28; // rax
  common::milog::MiLogStream *v29; // rax
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v30; // rax
  common::milog::MiLogStream *v31; // r14
  PlayerAvatarComp *AvatarComp; // r15
  common::milog::MiLogStream *v33; // r14
  int v34; // r15d
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v35; // rax
  common::milog::MiLogStream *v36; // r14
  std::pair<std::_Rb_tree_const_iterator<long unsigned int>,bool> v37; // rax
  common::milog::MiLogStream *v38; // r14
  unsigned int v39; // edi
  common::milog::MiLogStream *v40; // r14
  common::milog::MiLogStream *v42; // rax
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v43; // rax
  common::milog::MiLogStream *v44; // rax
  __int64 result; // rax
  google::protobuf::RepeatedPtrField<proto::SumoTeamData>::const_iterator __for_begin; // [rsp+28h] [rbp-368h] BYREF
  google::protobuf::RepeatedPtrField<proto::SumoTeamData>::const_iterator __for_end; // [rsp+30h] [rbp-360h] BYREF
  google::protobuf::RepeatedPtrField<proto::SumoAvatarInfo>::const_iterator __for_begin_0; // [rsp+38h] [rbp-358h] BYREF
  google::protobuf::RepeatedPtrField<proto::SumoAvatarInfo>::const_iterator __for_end_0; // [rsp+40h] [rbp-350h] BYREF
  unsigned __int64 val; // [rsp+48h] [rbp-348h] BYREF
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin_1; // [rsp+50h] [rbp-340h]
  const data::ActivitySumoOverallConfig *overall_config_ptr; // [rsp+58h] [rbp-338h]
  const data::ActivitySumoStageExcelConfig *stage_config_ptr; // [rsp+60h] [rbp-330h]
  const google::protobuf::RepeatedPtrField<proto::SumoTeamData> *__for_range; // [rsp+68h] [rbp-328h]
  const proto::SumoTeamData *team; // [rsp+70h] [rbp-320h]
  const google::protobuf::RepeatedPtrField<proto::SumoAvatarInfo> *__for_range_0; // [rsp+78h] [rbp-318h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range_1; // [rsp+80h] [rbp-310h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end_1; // [rsp+88h] [rbp-308h]
  const proto::SumoAvatarInfo *avatar_info; // [rsp+90h] [rbp-300h]
  const data::TrialAvatarExcelConfig *trial_avatar_config_ptr; // [rsp+98h] [rbp-2F8h]
  common::milog::MiLogStream v64; // [rsp+A0h] [rbp-2F0h] BYREF
  char v65[720]; // [rsp+C0h] [rbp-2D0h] BYREF

  v5 = (unsigned __int64)v65;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_4(672LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "10 48 4 12 skill_id:522 64 4 12 stage_id:425 80 16 21 formal_avatar_ptr:498 112 48 25 trial_avat"
                        "ar_pool_set:455 192 48 18 skill_pool_set:456 272 48 26 special_skill_pool_set:457 352 48 23 tria"
                        "l_avatar_id_set:458 432 48 16 skill_id_set:458 512 48 26 formal_avatar_guid_set:459 592 48 17 avatar_id_set:460";
  *(_QWORD *)(v5 + 16) = SumoActivity::verifyClientTeamInfo;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = 61956;
  v7[536862723] = 62194;
  v7[536862725] = -218959118;
  v7[536862727] = -219021312;
  v7[536862728] = 62194;
  v7[536862730] = -218959118;
  v7[536862732] = -219021312;
  v7[536862733] = 62194;
  v7[536862735] = -218959118;
  v7[536862737] = -219021312;
  v7[536862738] = 62194;
  v7[536862740] = -202116109;
  *(_DWORD *)(v5 + 64) = stage_id;
  if ( !SumoActivity::isStageOpen(this, *(_DWORD *)(v5 + 64)) )
  {
    v4 = 10000;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v5 + 80));
    v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 80));
    v9 = data::ActivitySumoExcelConfigMgrBase::findActivitySumoDifficultyExcelConfig(
           &v8->design_config.txt_config_mgr.activity_sumo_config_mgr,
           difficulty_id) == 0LL;
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v5 + 80));
    if ( v9 )
    {
      common::milog::MiLogStream::create(
        &v64,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/sumo_activity.cpp",
        "verifyClientTeamInfo",
        434);
      common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
        &v64,
        (const char (*)[30])"[SUMO] difficulty not correct");
      common::milog::MiLogStream::~MiLogStream(&v64);
      v4 = -1;
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v5 + 80));
      v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 80));
      overall_config_ptr = ActivitySumoExcelConfigMgr::getSumoOverallConfig(&v10->design_config.txt_config_mgr.activity_sumo_config_mgr);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v5 + 80));
      if ( overall_config_ptr )
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)(v5 + 80));
        v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 80));
        stage_config_ptr = data::ActivitySumoExcelConfigMgrBase::findActivitySumoStageExcelConfig(
                             &v11->design_config.txt_config_mgr.activity_sumo_config_mgr,
                             *(_DWORD *)(v5 + 64));
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v5 + 80));
        if ( stage_config_ptr )
        {
          v13 = google::protobuf::RepeatedPtrField<proto::SumoTeamData>::size(sumo_team_data);
          if ( *(_BYTE *)(((unsigned __int64)&overall_config_ptr->team_num >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)overall_config_ptr + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&overall_config_ptr->team_num >> 3)
                                                                              + 0x7FFF8000) )
          {
            __asan_report_load4(&overall_config_ptr->team_num);
          }
          if ( v13 == overall_config_ptr->team_num )
          {
            M_current = std::vector<unsigned int>::end(&stage_config_ptr->trial_avatar_pool)._M_current;
            v16._M_current = std::vector<unsigned int>::begin(&stage_config_ptr->trial_avatar_pool)._M_current;
            std::set<unsigned int>::set<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>>(
              (std::set<unsigned int> *const)(v5 + 112),
              v16,
              (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current);
            v17 = std::vector<unsigned int>::end(&stage_config_ptr->skill_pool)._M_current;
            v18._M_current = std::vector<unsigned int>::begin(&stage_config_ptr->skill_pool)._M_current;
            std::set<unsigned int>::set<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>>(
              (std::set<unsigned int> *const)(v5 + 192),
              v18,
              (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)v17);
            v19 = std::vector<unsigned int>::end(&stage_config_ptr->special_skill_pool)._M_current;
            v20._M_current = std::vector<unsigned int>::begin(&stage_config_ptr->special_skill_pool)._M_current;
            std::set<unsigned int>::set<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>>(
              (std::set<unsigned int> *const)(v5 + 272),
              v20,
              (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)v19);
            std::set<unsigned int>::set((std::set<unsigned int> *const)(v5 + 352));
            std::set<unsigned int>::set((std::set<unsigned int> *const)(v5 + 432));
            std::set<unsigned long>::set((std::set<long unsigned int> *const)(v5 + 512));
            std::set<unsigned int>::set((std::set<unsigned int> *const)(v5 + 592));
            __for_range = sumo_team_data;
            __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::SumoTeamData>::begin(sumo_team_data).it_;
            __for_end.it_ = google::protobuf::RepeatedPtrField<proto::SumoTeamData>::end(sumo_team_data).it_;
            while ( google::protobuf::internal::RepeatedPtrIterator<proto::SumoTeamData const>::operator!=(
                      &__for_begin,
                      &__for_end) )
            {
              team = google::protobuf::internal::RepeatedPtrIterator<proto::SumoTeamData const>::operator*(&__for_begin);
              if ( !proto::SumoTeamData::avatar_info_list_size(team) )
                goto LABEL_22;
              v21 = proto::SumoTeamData::avatar_info_list_size(team);
              if ( *(_BYTE *)(((unsigned __int64)&overall_config_ptr->max_team_member_num >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&overall_config_ptr->max_team_member_num >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&overall_config_ptr->max_team_member_num);
              }
              if ( v21 <= overall_config_ptr->max_team_member_num )
                v22 = 0;
              else
LABEL_22:
                v22 = 1;
              if ( v22 )
              {
                common::milog::MiLogStream::create(
                  &v64,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/activity/sumo_activity.cpp",
                  "verifyClientTeamInfo",
                  465);
                v23 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                        &v64,
                        (const char (*)[44])"[SUMO] team avatar size exceed limit, size:");
                *(_DWORD *)(v5 + 48) = proto::SumoTeamData::avatar_info_list_size(team);
                common::milog::MiLogStream::operator<<<int,(int *)0>(v23, (const int *)(v5 + 48));
                common::milog::MiLogStream::~MiLogStream(&v64);
                v4 = -1;
                goto LABEL_67;
              }
              __for_range_0 = proto::SumoTeamData::avatar_info_list(team);
              __for_begin_0.it_ = google::protobuf::RepeatedPtrField<proto::SumoAvatarInfo>::begin(__for_range_0).it_;
              __for_end_0.it_ = google::protobuf::RepeatedPtrField<proto::SumoAvatarInfo>::end(__for_range_0).it_;
              while ( google::protobuf::internal::RepeatedPtrIterator<proto::SumoAvatarInfo const>::operator!=(
                        &__for_begin_0,
                        &__for_end_0) )
              {
                avatar_info = google::protobuf::internal::RepeatedPtrIterator<proto::SumoAvatarInfo const>::operator*(&__for_begin_0);
                if ( proto::SumoAvatarInfo::is_trial(avatar_info) )
                {
                  ServiceBox::findService<GameserverService>();
                  GameserverService::getConfig((GameserverService *const)(v5 + 80));
                  p_trial_avatar_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 80))->design_config.txt_config_mgr.trial_avatar_config_mgr;
                  v25 = proto::SumoAvatarInfo::avatar_id(avatar_info);
                  trial_avatar_config_ptr = data::TrialAvatarExcelConfigMgrBase::findTrialAvatarExcelConfig(
                                              p_trial_avatar_config_mgr,
                                              v25);
                  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v5 + 80));
                  if ( !trial_avatar_config_ptr )
                  {
                    common::milog::MiLogStream::create(
                      &v64,
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/player/activity/sumo_activity.cpp",
                      "verifyClientTeamInfo",
                      476);
                    v26 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                            &v64,
                            (const char (*)[55])"[SUMO] trial avatar config not found, trial_avatar_id:");
                    val = proto::SumoAvatarInfo::avatar_id(avatar_info);
                    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v26, &val);
                    common::milog::MiLogStream::~MiLogStream(&v64);
                    v4 = -1;
                    goto LABEL_67;
                  }
                  val = proto::SumoAvatarInfo::avatar_id(avatar_info);
                  if ( !common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned long>(
                          (std::set<unsigned int> *)(v5 + 112),
                          &val) )
                  {
                    common::milog::MiLogStream::create(
                      &v64,
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/player/activity/sumo_activity.cpp",
                      "verifyClientTeamInfo",
                      481);
                    v27 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                            &v64,
                            (const char (*)[50])"[SUMO] trial avatar not in pool, trial_avatar_id:");
                    val = proto::SumoAvatarInfo::avatar_id(avatar_info);
                    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v27, &val);
                    common::milog::MiLogStream::~MiLogStream(&v64);
                    v4 = -1;
                    goto LABEL_67;
                  }
                  v28 = std::set<unsigned int>::insert(
                          (std::set<unsigned int> *const)(v5 + 592),
                          &trial_avatar_config_ptr->avatar.avatar_id);
                  if ( !v28.second )
                  {
                    common::milog::MiLogStream::create(
                      &v64,
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/player/activity/sumo_activity.cpp",
                      "verifyClientTeamInfo",
                      486);
                    v29 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                            &v64,
                            (const char (*)[40])"[SUMO] duplicated avatar id, avatar_id:");
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v29,
                      &trial_avatar_config_ptr->avatar.avatar_id);
                    common::milog::MiLogStream::~MiLogStream(&v64);
                    v4 = -1;
                    goto LABEL_67;
                  }
                  *(_DWORD *)(v5 + 48) = proto::SumoAvatarInfo::avatar_id(avatar_info);
                  v30 = std::set<unsigned int>::insert(
                          (std::set<unsigned int> *const)(v5 + 352),
                          (std::set<unsigned int>::value_type *)(v5 + 48));
                  if ( !v30.second )
                  {
                    common::milog::MiLogStream::create(
                      &v64,
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/player/activity/sumo_activity.cpp",
                      "verifyClientTeamInfo",
                      491);
                    v31 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                            &v64,
                            (const char (*)[52])"[SUMO] duplicated trial avatar id, trial_avatar_id:");
                    val = proto::SumoAvatarInfo::avatar_id(avatar_info);
                    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v31, &val);
                    common::milog::MiLogStream::~MiLogStream(&v64);
                    v4 = -1;
                    goto LABEL_67;
                  }
                }
                else
                {
                  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8(&this->player_);
                  AvatarComp = Player::getAvatarComp(this->player_);
                  proto::SumoAvatarInfo::avatar_id(avatar_info);
                  PlayerAvatarComp::findFormalAvatar((const PlayerAvatarComp *const)(v5 + 80), (uint64_t)AvatarComp);
                  if ( std::operator==<FormalAvatar>((const std::shared_ptr<FormalAvatar> *)(v5 + 80), 0LL) )
                  {
                    common::milog::MiLogStream::create(
                      &v64,
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/player/activity/sumo_activity.cpp",
                      "verifyClientTeamInfo",
                      501);
                    v33 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                            &v64,
                            (const char (*)[43])"[SUMO] formal avatar not found, avatar_id:");
                    val = proto::SumoAvatarInfo::avatar_id(avatar_info);
                    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v33, &val);
                    common::milog::MiLogStream::~MiLogStream(&v64);
                    v4 = -1;
                    v34 = 0;
                  }
                  else
                  {
                    *(_DWORD *)(v5 + 48) = proto::SumoAvatarInfo::avatar_id(avatar_info);
                    v35 = std::set<unsigned int>::insert(
                            (std::set<unsigned int> *const)(v5 + 592),
                            (std::set<unsigned int>::value_type *)(v5 + 48));
                    if ( !v35.second )
                    {
                      common::milog::MiLogStream::create(
                        &v64,
                        &common::milog::MiLogDefault::default_log_obj_,
                        3u,
                        "./src/player/activity/sumo_activity.cpp",
                        "verifyClientTeamInfo",
                        506);
                      v36 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                              &v64,
                              (const char (*)[40])"[SUMO] duplicated avatar id, avatar_id:");
                      val = proto::SumoAvatarInfo::avatar_id(avatar_info);
                      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v36, &val);
                      common::milog::MiLogStream::~MiLogStream(&v64);
                      v4 = -1;
                      v34 = 0;
                    }
                    else
                    {
                      val = proto::SumoAvatarInfo::avatar_id(avatar_info);
                      v37 = std::set<unsigned long>::insert((std::set<long unsigned int> *const)(v5 + 512), &val);
                      if ( !v37.second )
                      {
                        common::milog::MiLogStream::create(
                          &v64,
                          &common::milog::MiLogDefault::default_log_obj_,
                          3u,
                          "./src/player/activity/sumo_activity.cpp",
                          "verifyClientTeamInfo",
                          511);
                        v38 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
                                &v64,
                                (const char (*)[58])"[SUMO] duplicated formal avatar guid, formal_avatar_guid:");
                        val = proto::SumoAvatarInfo::avatar_id(avatar_info);
                        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v38, &val);
                        common::milog::MiLogStream::~MiLogStream(&v64);
                        v4 = -1;
                        v34 = 0;
                      }
                      else
                      {
                        v34 = 1;
                      }
                    }
                  }
                  std::shared_ptr<FormalAvatar>::~shared_ptr((std::shared_ptr<FormalAvatar> *const)(v5 + 80));
                  if ( v34 != 1 )
                    goto LABEL_67;
                }
                google::protobuf::internal::RepeatedPtrIterator<proto::SumoAvatarInfo const>::operator++(&__for_begin_0);
              }
              v39 = proto::SumoTeamData::skill_id_list_size(team);
              if ( *(_BYTE *)(((unsigned __int64)&overall_config_ptr->team_selectable_skill_num >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)overall_config_ptr + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&overall_config_ptr->team_selectable_skill_num >> 3)
                                                                                  + 0x7FFF8000) )
              {
                v39 = (_DWORD)overall_config_ptr + 44;
                __asan_report_load4(&overall_config_ptr->team_selectable_skill_num);
              }
              if ( v39 > overall_config_ptr->team_selectable_skill_num )
              {
                common::milog::MiLogStream::create(
                  &v64,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/activity/sumo_activity.cpp",
                  "verifyClientTeamInfo",
                  518);
                v40 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                        &v64,
                        (const char (*)[41])"[SUMO] skill id list exceed limit, size:");
                *(_DWORD *)(v5 + 48) = proto::SumoTeamData::skill_id_list_size(team);
                common::milog::MiLogStream::operator<<<int,(int *)0>(v40, (const int *)(v5 + 48));
                common::milog::MiLogStream::~MiLogStream(&v64);
                v4 = -1;
                goto LABEL_67;
              }
              __for_range_1 = proto::SumoTeamData::skill_id_list(team);
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
                *(_DWORD *)(v5 + 48) = *__for_begin_1;
                if ( !common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
                        (std::set<unsigned int> *)(v5 + 192),
                        (const unsigned int *)(v5 + 48))
                  && !common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
                        (std::set<unsigned int> *)(v5 + 272),
                        (const unsigned int *)(v5 + 48)) )
                {
                  common::milog::MiLogStream::create(
                    &v64,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/activity/sumo_activity.cpp",
                    "verifyClientTeamInfo",
                    526);
                  v42 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                          &v64,
                          (const char (*)[37])"[SUMO] skill_id not found, skill_id:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v42,
                    (const unsigned int *)(v5 + 48));
                  common::milog::MiLogStream::~MiLogStream(&v64);
                  v4 = -1;
                  goto LABEL_67;
                }
                v43 = std::set<unsigned int>::insert(
                        (std::set<unsigned int> *const)(v5 + 432),
                        (const std::set<unsigned int>::value_type *)(v5 + 48));
                if ( !v43.second )
                {
                  common::milog::MiLogStream::create(
                    &v64,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/activity/sumo_activity.cpp",
                    "verifyClientTeamInfo",
                    531);
                  v44 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                          &v64,
                          (const char (*)[38])"[SUMO] duplicated skill id, skill_id:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v44,
                    (const unsigned int *)(v5 + 48));
                  common::milog::MiLogStream::~MiLogStream(&v64);
                  v4 = -1;
                  goto LABEL_67;
                }
                ++__for_begin_1;
              }
              google::protobuf::internal::RepeatedPtrIterator<proto::SumoTeamData const>::operator++(&__for_begin);
            }
            v4 = 0;
LABEL_67:
            std::set<unsigned int>::~set((std::set<unsigned int> *const)(v5 + 592));
            std::set<unsigned long>::~set((std::set<long unsigned int> *const)(v5 + 512));
            std::set<unsigned int>::~set((std::set<unsigned int> *const)(v5 + 432));
            std::set<unsigned int>::~set((std::set<unsigned int> *const)(v5 + 352));
            std::set<unsigned int>::~set((std::set<unsigned int> *const)(v5 + 272));
            std::set<unsigned int>::~set((std::set<unsigned int> *const)(v5 + 192));
            std::set<unsigned int>::~set((std::set<unsigned int> *const)(v5 + 112));
          }
          else
          {
            common::milog::MiLogStream::create(
              &v64,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/sumo_activity.cpp",
              "verifyClientTeamInfo",
              452);
            v14 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                    &v64,
                    (const char (*)[29])"[SUMO] team size shoule be, ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &overall_config_ptr->team_num);
            common::milog::MiLogStream::~MiLogStream(&v64);
            v4 = 10002;
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v64,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/sumo_activity.cpp",
            "verifyClientTeamInfo",
            446);
          v12 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                  &v64,
                  (const char (*)[41])"[SUMO] stage config not found, stage_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v5 + 64));
          common::milog::MiLogStream::~MiLogStream(&v64);
          v4 = -1;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v64,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/sumo_activity.cpp",
          "verifyClientTeamInfo",
          440);
        common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
          &v64,
          (const char (*)[37])"[SUMO] overall_config_ptr is nullptr");
        common::milog::MiLogStream::~MiLogStream(&v64);
        v4 = -1;
      }
    }
  }
  result = v4;
  if ( v65 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8014) = 0;
    *(_QWORD *)((v5 >> 3) + 0x7FFF801C) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8028) = 0;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF803C) = 0;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8044) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8050) = 0;
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
    *(_QWORD *)((v5 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8050) = -168430091;
  }
  return result;
};

// Line 540: range 0000000017FF8D54-0000000017FF9144
__int64 __fastcall SumoActivity::saveStageTeam(
        SumoActivity *const this,
        uint32_t stage_id,
        uint32_t difficulty_id,
        const google::protobuf::RepeatedPtrField<proto::SumoTeamData> *sumo_team_data)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,SumoStage> >::pointer v9; // rax
  google::protobuf::RepeatedPtrField<proto::SumoTeamData>::const_iterator *p_for_end; // rsi
  uint32_t v11; // ecx
  char v12; // al
  google::protobuf::RepeatedPtrField<proto::SumoTeamData>::const_iterator __for_begin; // [rsp+28h] [rbp-108h] BYREF
  google::protobuf::RepeatedPtrField<proto::SumoTeamData>::const_iterator __for_end; // [rsp+30h] [rbp-100h] BYREF
  SumoStage *stage; // [rsp+38h] [rbp-F8h]
  const google::protobuf::RepeatedPtrField<proto::SumoTeamData> *__for_range; // [rsp+40h] [rbp-F0h]
  const proto::SumoTeamData *team_info; // [rsp+48h] [rbp-E8h]
  common::milog::MiLogStream v20; // [rsp+50h] [rbp-E0h] BYREF
  char v21[192]; // [rsp+70h] [rbp-C0h] BYREF

  v4 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 4 12 stage_id:539 48 8 8 iter:542 80 48 8 team:552";
  *(_QWORD *)(v4 + 16) = SumoActivity::saveStageTeam;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61956;
  v6[536862721] = -234881024;
  v6[536862722] = 62194;
  v6[536862724] = -202116109;
  *(_DWORD *)(v4 + 32) = stage_id;
  *(std::map<unsigned int,SumoStage>::iterator *)(v4 + 48) = std::map<unsigned int,SumoStage>::find(
                                                               &this->sumo_stage_map_,
                                                               (const std::map<unsigned int,SumoStage>::key_type *)(v4 + 32));
  __for_end.it_ = (void *const *)std::map<unsigned int,SumoStage>::end(&this->sumo_stage_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,SumoStage> >::_Self *)(v4 + 48),
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,SumoStage> >::_Self *)&__for_end) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/sumo_activity.cpp",
      "saveStageTeam",
      545);
    v7 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v20,
           (const char (*)[34])"[SUMO] stage not found, stage_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 32));
    common::milog::MiLogStream::~MiLogStream(&v20);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    v9 = std::_Rb_tree_iterator<std::pair<unsigned int const,SumoStage>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,SumoStage> > *const)(v4 + 48));
    stage = &v9->second;
    std::vector<SumoTeam>::clear(&v9->second.sumo_team_vec);
    __for_range = sumo_team_data;
    __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::SumoTeamData>::begin(sumo_team_data).it_;
    __for_end.it_ = google::protobuf::RepeatedPtrField<proto::SumoTeamData>::end(__for_range).it_;
    while ( 1 )
    {
      p_for_end = &__for_end;
      if ( !google::protobuf::internal::RepeatedPtrIterator<proto::SumoTeamData const>::operator!=(
              &__for_begin,
              &__for_end) )
        break;
      team_info = google::protobuf::internal::RepeatedPtrIterator<proto::SumoTeamData const>::operator*(&__for_begin);
      SumoTeam::SumoTeam((SumoTeam *const)(v4 + 80));
      SumoTeam::fromClient((SumoTeam *const)(v4 + 80), team_info);
      std::vector<SumoTeam>::push_back(&stage->sumo_team_vec, (const std::vector<SumoTeam>::value_type *)(v4 + 80));
      SumoTeam::~SumoTeam((SumoTeam *const)(v4 + 80));
      google::protobuf::internal::RepeatedPtrIterator<proto::SumoTeamData const>::operator++(&__for_begin);
    }
    SumoStage::postSetTeam(stage);
    if ( *(_BYTE *)(((unsigned __int64)&this->saved_difficulty_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->saved_difficulty_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->saved_difficulty_id_, &__for_end, &this->saved_difficulty_id_);
    }
    this->saved_difficulty_id_ = difficulty_id;
    v11 = *(_DWORD *)(v4 + 32);
    v12 = *(_BYTE *)(((unsigned __int64)&this->last_stage_id_ >> 3) + 0x7FFF8000);
    if ( v12 != 0 && v12 <= 3 )
    {
      LOBYTE(p_for_end) = v12 != 0;
      __asan_report_store4(&this->last_stage_id_, p_for_end, &this->last_stage_id_);
    }
    this->last_stage_id_ = v11;
    BaseActivity::notifyClientData(this, 0);
    result = 0LL;
  }
  if ( v21 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 576: range 0000000017FF9304-0000000017FF9F17
__int64 __fastcall SumoActivity::enterStageDungeon(
        SumoActivity *const this,
        uint32_t stage_id,
        uint32_t difficulty_id,
        const google::protobuf::RepeatedPtrField<proto::SumoTeamData> *sumo_team_data)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  unsigned int v8; // ebx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  PlayerSceneComp *SceneComp; // rax
  PlayerDungeonComp *DungeonComp; // r15
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rcx
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  common::milog::MiLogStream *v23; // rbx
  DungeonScene *v24; // r15
  PlayerAvatarComp *AvatarComp; // rax
  DungeonScene *v26; // rax
  DungeonScene *v27; // rcx
  __int64 result; // rax
  unsigned int val; // [rsp+20h] [rbp-1A0h] BYREF
  int32_t ret; // [rsp+24h] [rbp-19Ch]
  uint32_t scene_id; // [rsp+28h] [rbp-198h]
  uint32_t activity_id; // [rsp+2Ch] [rbp-194h]
  const data::ActivitySumoStageExcelConfig *stage_config_ptr; // [rsp+30h] [rbp-190h]
  const data::ActivitySumoDifficultyExcelConfig *difficulty_config_ptr; // [rsp+38h] [rbp-188h]
  std::tuple_element<0,std::pair<int,std::shared_ptr<DungeonScene> > >::type *enter_dungeon_retcode; // [rsp+40h] [rbp-180h]
  std::tuple_element<1,std::pair<int,std::shared_ptr<DungeonScene> > >::type *dungeon_scene_ptr; // [rsp+48h] [rbp-178h]
  std::shared_ptr<Config> v39; // [rsp+50h] [rbp-170h] BYREF
  std::pair<int,std::shared_ptr<DungeonScene> > __in; // [rsp+60h] [rbp-160h] BYREF
  EnterDungeonOption v41; // [rsp+80h] [rbp-140h] BYREF
  common::milog::MiLogStream v42; // [rsp+A0h] [rbp-120h] BYREF
  std::map<unsigned int,unsigned int> level_config_id_map; // [rsp+C0h] [rbp-100h] BYREF
  char v44[208]; // [rsp+F0h] [rbp-D0h] BYREF
  SumoActivity::enterStageDungeon::<lambda(Player&, DungeonScene&, proto::DungeonSettleNotify&)> v45; // 0:rsi.8

  v4 = (unsigned __int64)v44;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 48 4 14 dungeon_id:613 64 4 12 stage_id:575 80 4 17 difficulty_id:575 96 20 19 dungeon_context:638";
  *(_QWORD *)(v4 + 16) = SumoActivity::enterStageDungeon;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -234556924;
  v6[536862723] = -217841664;
  v6[536862724] = -202116109;
  *(_DWORD *)(v4 + 64) = stage_id;
  *(_DWORD *)(v4 + 80) = difficulty_id;
  if ( !BaseActivity::isOpening(this, 0) || BaseActivity::isFinished(this) )
  {
    v8 = -1;
  }
  else if ( !SumoActivity::isStageOpen(this, *(_DWORD *)(v4 + 64)) )
  {
    v8 = 10000;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v39);
    v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v39);
    stage_config_ptr = data::ActivitySumoExcelConfigMgrBase::findActivitySumoStageExcelConfig(
                         &v9->design_config.txt_config_mgr.activity_sumo_config_mgr,
                         *(_DWORD *)(v4 + 64));
    std::shared_ptr<Config>::~shared_ptr(&v39);
    if ( stage_config_ptr )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v39);
      v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v39);
      difficulty_config_ptr = data::ActivitySumoExcelConfigMgrBase::findActivitySumoDifficultyExcelConfig(
                                &v11->design_config.txt_config_mgr.activity_sumo_config_mgr,
                                *(_DWORD *)(v4 + 80));
      std::shared_ptr<Config>::~shared_ptr(&v39);
      if ( difficulty_config_ptr )
      {
        ret = SumoActivity::saveStageTeam(this, *(_DWORD *)(v4 + 64), *(_DWORD *)(v4 + 80), sumo_team_data);
        if ( ret )
        {
          common::milog::MiLogStream::create(
            &v42,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/sumo_activity.cpp",
            "enterStageDungeon",
            601);
          v13 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                  &v42,
                  (const char (*)[39])"[SUMO] saveStageTeam failed, stage_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v4 + 64));
          common::milog::MiLogStream::~MiLogStream(&v42);
          v8 = ret;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          SceneComp = Player::getSceneComp(this->player_);
          scene_id = PlayerSceneComp::getCurSceneId(SceneComp);
          if ( scene_id )
          {
            if ( *(_BYTE *)(((unsigned __int64)&stage_config_ptr->dungeon_id >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)stage_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&stage_config_ptr->dungeon_id >> 3)
                                                                              + 0x7FFF8000) )
            {
              __asan_report_load4(&stage_config_ptr->dungeon_id);
            }
            *(_DWORD *)(v4 + 48) = stage_config_ptr->dungeon_id;
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            DungeonComp = Player::getDungeonComp(this->player_);
            memset(&v41, 0, sizeof(v41));
            EnterDungeonOption::EnterDungeonOption(&v41);
            memset(&level_config_id_map, 0, sizeof(level_config_id_map));
            std::map<unsigned int,unsigned int>::map(&level_config_id_map);
            PlayerDungeonComp::enterDungeon(
              &__in,
              DungeonComp,
              *(_DWORD *)(v4 + 48),
              scene_id,
              0,
              &level_config_id_map,
              v41);
            std::map<unsigned int,unsigned int>::~map(&level_config_id_map);
            enter_dungeon_retcode = std::get<0ul,int,std::shared_ptr<DungeonScene>>(&__in);
            dungeon_scene_ptr = std::get<1ul,int,std::shared_ptr<DungeonScene>>(&__in);
            if ( *(_BYTE *)(((unsigned __int64)enter_dungeon_retcode >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)enter_dungeon_retcode & 7) + 3) >= *(_BYTE *)(((unsigned __int64)enter_dungeon_retcode >> 3)
                                                                                      + 0x7FFF8000) )
            {
              __asan_report_load4(enter_dungeon_retcode);
            }
            if ( *enter_dungeon_retcode )
            {
              common::milog::MiLogStream::create(
                &v42,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/player/activity/sumo_activity.cpp",
                "enterStageDungeon",
                617);
              v16 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                      &v42,
                      (const char (*)[38])"[SUMO] enterDungeon fail, dungeon_id:");
              v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v16,
                      (const unsigned int *)(v4 + 48));
              v18 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                      v17,
                      (const char (*)[24])" enter_dungeon_retcode:");
              v19 = common::milog::MiLogStream::operator<<<int,(int *)0>(v18, enter_dungeon_retcode);
              v20 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v19, (const char (*)[9])" player:");
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->player_);
              operator<<(v20, this->player_);
              common::milog::MiLogStream::~MiLogStream(&v42);
              if ( *(_BYTE *)(((unsigned __int64)enter_dungeon_retcode >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)enter_dungeon_retcode & 7) + 3) >= *(_BYTE *)(((unsigned __int64)enter_dungeon_retcode >> 3)
                                                                                        + 0x7FFF8000) )
              {
                __asan_report_load4(enter_dungeon_retcode);
              }
              v8 = *enter_dungeon_retcode;
            }
            else if ( std::operator==<DungeonScene>(0LL, dungeon_scene_ptr)
                   || (v21 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)dungeon_scene_ptr),
                       DungeonScene::getDungeonId(v21) != *(_DWORD *)(v4 + 48)) )
            {
              common::milog::MiLogStream::create(
                &v42,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/player/activity/sumo_activity.cpp",
                "enterStageDungeon",
                622);
              v23 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                      &v42,
                      (const char (*)[41])"[SUMO] player enter dungeon failed, uid:");
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->player_);
              val = Player::getUid(this->player_);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &val);
              common::milog::MiLogStream::~MiLogStream(&v42);
              v8 = -1;
            }
            else
            {
              if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&this->activity_id_);
              }
              activity_id = this->activity_id_;
              v24 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)dungeon_scene_ptr);
              v45.__activity_id = activity_id;
              v45.__stage_id = *(_DWORD *)(v4 + 64);
              std::function<void ()(Player &,DungeonScene &,proto::DungeonSettleNotify &)>::function<SumoActivity::enterStageDungeon(unsigned int,unsigned int,google::protobuf::RepeatedPtrField<proto::SumoTeamData> const&)::{lambda(Player &,DungeonScene &,proto::DungeonSettleNotify &)#1},void,void>(
                (std::function<void(Player&,DungeonScene&,proto::DungeonSettleNotify&)> *const)&v42,
                v45);
              DungeonScene::registerDungeonSettleCallback(v24, (DungeonSettleCallback *)&v42);
              std::function<void ()(Player &,DungeonScene &,proto::DungeonSettleNotify &)>::~function((std::function<void(Player&,DungeonScene&,proto::DungeonSettleNotify&)> *const)&v42);
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->player_);
              AvatarComp = Player::getAvatarComp(this->player_);
              PlayerAvatarComp::delAllBuffs(AvatarComp);
              *(_DWORD *)(v4 + 96) = 0;
              *(_DWORD *)(v4 + 100) = 0;
              *(_DWORD *)(v4 + 104) = 0;
              *(_DWORD *)(v4 + 108) = 0;
              *(_DWORD *)(v4 + 112) = 0;
              if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&this->activity_id_);
              }
              *(_DWORD *)(v4 + 100) = this->activity_id_;
              *(_DWORD *)(v4 + 96) = *(_DWORD *)(v4 + 64);
              *(_DWORD *)(v4 + 104) = *(_DWORD *)(v4 + 80);
              *(_DWORD *)(v4 + 112) = google::protobuf::RepeatedPtrField<proto::SumoTeamData>::size(sumo_team_data);
              v26 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)dungeon_scene_ptr);
              DungeonScene::setDungeonExtraData<SumoDungeonContext>(v26, (const SumoDungeonContext *)(v4 + 96));
              v27 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)dungeon_scene_ptr);
              if ( *(_BYTE *)(((unsigned __int64)&difficulty_config_ptr->dungeon_level >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&difficulty_config_ptr->dungeon_level >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&difficulty_config_ptr->dungeon_level);
              }
              DungeonScene::setReviseLevel(v27, difficulty_config_ptr->dungeon_level);
              v8 = ret;
            }
            std::pair<int,std::shared_ptr<DungeonScene>>::~pair(&__in);
          }
          else
          {
            common::milog::MiLogStream::create(
              &v42,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/sumo_activity.cpp",
              "enterStageDungeon",
              608);
            common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
              &v42,
              (const char (*)[25])"[SUMO] cur_scene_id is 0");
            common::milog::MiLogStream::~MiLogStream(&v42);
            v8 = -1;
          }
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v42,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/sumo_activity.cpp",
          "enterStageDungeon",
          594);
        v12 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                &v42,
                (const char (*)[51])"[SUMO] difficulty config not found, difficulty_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v4 + 80));
        common::milog::MiLogStream::~MiLogStream(&v42);
        v8 = -1;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v42,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/sumo_activity.cpp",
        "enterStageDungeon",
        588);
      v10 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
              &v42,
              (const char (*)[41])"[SUMO] stage config not found, stage_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v4 + 64));
      common::milog::MiLogStream::~MiLogStream(&v42);
      v8 = -1;
    }
  }
  result = v8;
  if ( v44 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 626: range 0000000017FF9146-0000000017FF9302
void __cdecl SumoActivity::enterStageDungeon(unsigned int,unsigned int,google::protobuf::RepeatedPtrField<proto::SumoTeamData> const&)::{lambda(Player &,DungeonScene &,proto::DungeonSettleNotify &)#1}::operator()(
        const SumoActivity::enterStageDungeon::<lambda(Player&, DungeonScene&, proto::DungeonSettleNotify&)> *const __closure,
        Player *player,
        DungeonScene *dungeon_scene,
        proto::DungeonSettleNotify *notify)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  uint32_t ActivityComp; // ecx
  SumoActivity *p_stage_id; // rdi
  char v12[96]; // [rsp+20h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 16 activity_ptr:628";
  *(_QWORD *)(v4 + 16) = SumoActivity::enterStageDungeon(unsigned int,unsigned int,google::protobuf::RepeatedPtrField<proto::SumoTeamData> const&)::{lambda(Player &,DungeonScene &,proto::DungeonSettleNotify &)#1}::operator();
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  ActivityComp = (unsigned int)Player::getActivityComp(player);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)__closure & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(__closure);
  }
  PlayerActivityComp::findActivity<SumoActivity>((PlayerActivityComp *const)(v4 + 32), ActivityComp);
  if ( std::operator!=<SumoActivity>(0LL, (const std::shared_ptr<SumoActivity> *)(v4 + 32)) )
  {
    p_stage_id = std::__shared_ptr_access<SumoActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SumoActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__stage_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)__closure + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&__closure->__stage_id >> 3)
                                                              + 0x7FFF8000) )
    {
      p_stage_id = (SumoActivity *)&__closure->__stage_id;
      __asan_report_load4(&__closure->__stage_id);
    }
    SumoActivity::onDungeonSettle(p_stage_id, dungeon_scene, __closure->__stage_id, notify);
  }
  std::shared_ptr<SumoActivity>::~shared_ptr((std::shared_ptr<SumoActivity> *const)(v4 + 32));
  if ( v12 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 652: range 0000000017FF9F18-0000000017FFBA0D
int32_t __cdecl SumoActivity::initSumoEnterSceneAvatar(
        SumoActivity *const this,
        ScenePtr *p_dest_scene_ptr,
        std::vector<std::shared_ptr<Avatar>> *enter_scene_avatar_vec,
        AvatarPtr *appear_avatar_ptr)
{
  __m128i v4; // xmm0
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  int32_t v8; // r14d
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  unsigned __int64 n; // rax
  __int64 v11; // rdi
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  PlayerAvatarComp *AvatarComp; // rax
  common::milog::MiLogStream *v15; // rax
  std::vector<long unsigned int>::size_type v16; // r14
  const std::map<long unsigned int,std::pair<unsigned int,unsigned int>>::key_type *v17; // rax
  common::milog::MiLogStream *v18; // r14
  const unsigned __int64 *v19; // rax
  std::_Rb_tree_iterator<std::pair<long unsigned int const,std::pair<unsigned int,unsigned int> > >::pointer v20; // rax
  std::vector<SumoTeam>::size_type v21; // r14
  std::vector<SumoTeam> *p_sumo_team_vec; // rcx
  std::vector<SumoAvatar>::size_type v23; // r14
  unsigned __int64 v24; // rax
  __int64 v25; // r14
  SumoTeam *v26; // rcx
  std::vector<SumoAvatar>::size_type v27; // rsi
  __int64 v28; // rax
  const std::map<long unsigned int,std::pair<unsigned int,unsigned int>>::key_type *v29; // rax
  std::pair<unsigned int,unsigned int> *v30; // rax
  const char *p_for_end; // rsi
  uint32_t v32; // esi
  int v33; // r14d
  std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rax
  FightPropComp *FightPropComp; // rax
  std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // rax
  FightPropComp *v37; // r14
  PlayerAvatarComp *v38; // r14
  common::milog::MiLogStream *v39; // rax
  std::vector<SumoTeam>::size_type v40; // r14
  std::vector<SumoTeam> *v41; // rcx
  std::vector<SumoAvatar>::size_type v42; // r14
  std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v43; // rax
  uint64_t Guid; // r14
  SumoTeam *v45; // rcx
  std::vector<SumoAvatar>::size_type v46; // rsi
  __int64 v47; // rax
  std::map<long unsigned int,std::pair<unsigned int,unsigned int>> *p_in_dungeon_avatar_team_index_map; // r14
  std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v49; // rax
  std::pair<unsigned int,unsigned int> *v50; // rax
  __int64 v51; // rdx
  std::vector<SumoTeam>::size_type cur_team_index; // r14
  common::milog::MiLogStream *v53; // r14
  std::vector<SumoTeam> *v54; // rcx
  PlayerAvatarComp *v55; // r14
  std::vector<SumoAvatar>::reference v56; // rax
  common::milog::MiLogStream *v57; // r14
  std::vector<SumoAvatar>::reference v58; // rax
  int v59; // r14d
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v60; // rax
  const std::shared_ptr<Avatar> *v62; // rdx
  DungeonScene *v63; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+20h] [rbp-2D0h]
  uint32_t idx; // [rsp+24h] [rbp-2CCh]
  uint32_t idx_0; // [rsp+28h] [rbp-2C8h]
  std::map<unsigned int,std::pair<unsigned int,unsigned int>>::iterator __for_begin; // [rsp+30h] [rbp-2C0h] BYREF
  std::map<unsigned int,std::pair<unsigned int,unsigned int>>::iterator __for_end; // [rsp+38h] [rbp-2B8h] BYREF
  SumoStage *stage; // [rsp+40h] [rbp-2B0h]
  std::tuple_element<0,std::pair<unsigned int,unsigned int> >::type *team_idx; // [rsp+48h] [rbp-2A8h]
  std::tuple_element<1,std::pair<unsigned int,unsigned int> >::type *in_team_idx; // [rsp+50h] [rbp-2A0h]
  SumoTeam *team_0; // [rsp+58h] [rbp-298h]
  std::map<unsigned int,std::pair<unsigned int,unsigned int>> *__for_range; // [rsp+60h] [rbp-290h]
  const std::pair<unsigned int const,std::pair<unsigned int,unsigned int> > *v78; // [rsp+68h] [rbp-288h]
  std::tuple_element<0,const std::pair<unsigned int const,std::pair<unsigned int,unsigned int> > >::type *trial_avatar_id; // [rsp+70h] [rbp-280h]
  std::tuple_element<1,const std::pair<unsigned int const,std::pair<unsigned int,unsigned int> > >::type *team_index_pair; // [rsp+78h] [rbp-278h]
  std::tuple_element<0,std::pair<unsigned int,unsigned int> >::type *team_idx_0; // [rsp+80h] [rbp-270h]
  std::tuple_element<1,std::pair<unsigned int,unsigned int> >::type *in_team_idx_0; // [rsp+88h] [rbp-268h]
  SumoTeam *team_1; // [rsp+90h] [rbp-260h]
  SumoTeam *team; // [rsp+98h] [rbp-258h]
  std::pair<unsigned int,unsigned int> __in; // [rsp+A0h] [rbp-250h] BYREF
  std::_Rb_tree_iterator<std::pair<long unsigned int const,std::pair<unsigned int,unsigned int> > >::_Self __y; // [rsp+A8h] [rbp-248h] BYREF
  std::shared_ptr<TrialAvatar> v87; // [rsp+B0h] [rbp-240h] BYREF
  common::milog::MiLogStream v88; // [rsp+C0h] [rbp-230h] BYREF
  char v89[528]; // [rsp+E0h] [rbp-210h] BYREF

  v5 = (unsigned __int64)v89;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_3(480LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "9 32 8 15 formal_iter:699 64 16 21 dungeon_scene_ptr:653 96 16 20 trial_avatar_ptr:734 128 16 14"
                        " avatar_ptr:789 160 20 19 dungeon_context:665 224 24 23 dungeon_context_opt:659 288 24 26 formal"
                        "_avatar_guid_vec:683 352 24 26 mirror_avatar_guid_vec:684 416 32 10 record:730";
  *(_QWORD *)(v5 + 16) = SumoActivity::initSumoEnterSceneAvatar;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -218959360;
  v7[536862722] = -219021312;
  v7[536862723] = -219021312;
  v7[536862724] = -219021312;
  v7[536862725] = -234618880;
  v7[536862726] = -218959118;
  v7[536862727] = -234881024;
  v7[536862728] = -218959118;
  v7[536862729] = -234881024;
  v7[536862730] = -218959118;
  v7[536862731] = -234881024;
  v7[536862732] = -218959118;
  v7[536862734] = -202116109;
  std::dynamic_pointer_cast<DungeonScene,Scene>((const std::shared_ptr<Scene> *)(v5 + 64));
  if ( std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v5 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v88,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/sumo_activity.cpp",
      "initSumoEnterSceneAvatar",
      656);
    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
      &v88,
      (const char (*)[36])"[SUMO] dungeon_scene_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v88);
    v8 = -1;
    goto LABEL_118;
  }
  v9 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
  DungeonScene::getDungeonExtraData<SumoDungeonContext>((std::optional<SumoDungeonContext> *)(v5 + 224), v9);
  if ( !std::optional<SumoDungeonContext>::has_value((const std::optional<SumoDungeonContext> *const)(v5 + 224)) )
  {
    common::milog::MiLogStream::create(
      &v88,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/sumo_activity.cpp",
      "initSumoEnterSceneAvatar",
      662);
    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
      &v88,
      (const char (*)[36])"[SUMO] dungeon context has not data");
    common::milog::MiLogStream::~MiLogStream(&v88);
    v8 = -1;
    goto LABEL_118;
  }
  n = (unsigned __int64)std::optional<SumoDungeonContext>::value((std::optional<SumoDungeonContext> *const)(v5 + 224));
  if ( (char)(n & 7) >= *(_BYTE *)((n >> 3) + 0x7FFF8000) && *(_BYTE *)((n >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((n + 19) >> 3) + 0x7FFF8000) != 0 && (char)((n + 19) & 7) >= *(_BYTE *)(((n + 19) >> 3) + 0x7FFF8000) )
  {
    n = __asan_report_load_n(n, 20LL);
  }
  v11 = *(_QWORD *)(n + 8);
  *(_QWORD *)(v5 + 160) = *(_QWORD *)n;
  *(_QWORD *)(v5 + 168) = v11;
  *(_DWORD *)(v5 + 176) = *(_DWORD *)(n + 16);
  if ( !SumoActivity::isStageOpen(this, *(_DWORD *)(v5 + 160)) )
  {
    common::milog::MiLogStream::create(
      &v88,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/sumo_activity.cpp",
      "initSumoEnterSceneAvatar",
      668);
    v12 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
            &v88,
            (const char (*)[33])"[SUMO] stage not open, stage_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v5 + 160));
    common::milog::MiLogStream::~MiLogStream(&v88);
    v8 = -1;
    goto LABEL_118;
  }
  stage = std::map<unsigned int,SumoStage>::operator[](
            &this->sumo_stage_map_,
            (const std::map<unsigned int,SumoStage>::key_type *)(v5 + 160));
  if ( std::vector<SumoTeam>::empty(&stage->sumo_team_vec) )
  {
    common::milog::MiLogStream::create(
      &v88,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/sumo_activity.cpp",
      "initSumoEnterSceneAvatar",
      674);
    v13 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
            &v88,
            (const char (*)[41])"[SUMO] cur stage has not team, stage_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v5 + 160));
    common::milog::MiLogStream::~MiLogStream(&v88);
    v8 = -1;
    goto LABEL_118;
  }
  ret = 0;
  if ( std::map<unsigned long,std::pair<unsigned int,unsigned int>>::empty(&stage->in_dungeon_avatar_team_index_map) )
  {
    common::tools::MiscUtils::getAllMapKeys<std::map<unsigned long,std::pair<unsigned int,unsigned int>>>(
      (std::vector<long unsigned int> *)(v5 + 288),
      &stage->formal_avatar_team_index_map);
    std::vector<unsigned long>::vector((std::vector<long unsigned int> *const)(v5 + 352));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    AvatarComp = Player::getAvatarComp(this->player_);
    ret = PlayerAvatarComp::addMirrorAvatars(
            AvatarComp,
            (const std::vector<long unsigned int> *)(v5 + 288),
            (std::vector<long unsigned int> *)(v5 + 352),
            AVATAR_SNAPSHOT_TYPE_NONE);
    if ( ret )
    {
      common::milog::MiLogStream::create(
        &v88,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/sumo_activity.cpp",
        "initSumoEnterSceneAvatar",
        688);
      v15 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
              &v88,
              (const char (*)[42])"[SUMO] addMirrorAvatars failed, stage_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &stage->stage_id);
      common::milog::MiLogStream::~MiLogStream(&v88);
    }
    else
    {
      v16 = std::vector<unsigned long>::size((const std::vector<long unsigned int> *const)(v5 + 352));
      if ( v16 == std::vector<unsigned long>::size((const std::vector<long unsigned int> *const)(v5 + 288)) )
      {
        for ( idx = 0;
              idx < std::vector<unsigned long>::size((const std::vector<long unsigned int> *const)(v5 + 288));
              ++idx )
        {
          v17 = std::vector<unsigned long>::operator[]((std::vector<long unsigned int> *const)(v5 + 288), idx);
          *(std::map<long unsigned int,std::pair<unsigned int,unsigned int>>::iterator *)(v5 + 32) = std::map<unsigned long,std::pair<unsigned int,unsigned int>>::find(&stage->formal_avatar_team_index_map, v17);
          __y._M_node = std::map<unsigned long,std::pair<unsigned int,unsigned int>>::end(&stage->formal_avatar_team_index_map)._M_node;
          if ( std::operator==(
                 (const std::_Rb_tree_iterator<std::pair<long unsigned int const,std::pair<unsigned int,unsigned int> > >::_Self *)(v5 + 32),
                 &__y) )
          {
            common::milog::MiLogStream::create(
              &v88,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/sumo_activity.cpp",
              "initSumoEnterSceneAvatar",
              702);
            v18 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
                    &v88,
                    (const char (*)[57])"[SUMO] formal_avatar_guid not found, formal_avatar_guid:");
            v19 = std::vector<unsigned long>::operator[]((std::vector<long unsigned int> *const)(v5 + 288), idx);
            common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v18, v19);
            common::milog::MiLogStream::~MiLogStream(&v88);
            ret = -1;
            break;
          }
          v20 = std::_Rb_tree_iterator<std::pair<unsigned long const,std::pair<unsigned int,unsigned int>>>::operator->((const std::_Rb_tree_iterator<std::pair<long unsigned int const,std::pair<unsigned int,unsigned int> > > *const)(v5 + 32));
          if ( *(_BYTE *)(((unsigned __int64)&v20->second >> 3) + 0x7FFF8000) )
            v20 = (std::_Rb_tree_iterator<std::pair<long unsigned int const,std::pair<unsigned int,unsigned int> > >::pointer)__asan_report_load8(&v20->second);
          __in = v20->second;
          team_idx = std::get<0ul,unsigned int,unsigned int>(&__in);
          in_team_idx = std::get<1ul,unsigned int,unsigned int>(&__in);
          if ( *(_BYTE *)(((unsigned __int64)team_idx >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)team_idx & 7) + 3) >= *(_BYTE *)(((unsigned __int64)team_idx >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(team_idx);
          }
          v21 = *team_idx;
          if ( v21 >= std::vector<SumoTeam>::size(&stage->sumo_team_vec) )
          {
            common::milog::MiLogStream::create(
              &v88,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/sumo_activity.cpp",
              "initSumoEnterSceneAvatar",
              709);
            common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
              &v88,
              (const char (*)[29])"[SUMO] team_idx out of range");
            common::milog::MiLogStream::~MiLogStream(&v88);
            ret = -1;
            break;
          }
          p_sumo_team_vec = &stage->sumo_team_vec;
          if ( *(_BYTE *)(((unsigned __int64)team_idx >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)team_idx & 7) + 3) >= *(_BYTE *)(((unsigned __int64)team_idx >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(team_idx);
          }
          team_0 = std::vector<SumoTeam>::operator[](p_sumo_team_vec, *team_idx);
          if ( *(_BYTE *)(((unsigned __int64)in_team_idx >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)in_team_idx & 7) + 3) >= *(_BYTE *)(((unsigned __int64)in_team_idx >> 3)
                                                                          + 0x7FFF8000) )
          {
            __asan_report_load4(in_team_idx);
          }
          v23 = *in_team_idx;
          if ( v23 >= std::vector<SumoAvatar>::size(&team_0->avatar_vec) )
          {
            common::milog::MiLogStream::create(
              &v88,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/sumo_activity.cpp",
              "initSumoEnterSceneAvatar",
              716);
            common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
              &v88,
              (const char (*)[32])"[SUMO] in_team_idx out of range");
            common::milog::MiLogStream::~MiLogStream(&v88);
            ret = -1;
            break;
          }
          v24 = (unsigned __int64)std::vector<unsigned long>::operator[](
                                    (std::vector<long unsigned int> *const)(v5 + 352),
                                    idx);
          if ( *(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
            v24 = __asan_report_load8(v24);
          v25 = *(_QWORD *)v24;
          v26 = team_0;
          if ( *(_BYTE *)(((unsigned __int64)in_team_idx >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)in_team_idx & 7) + 3) >= *(_BYTE *)(((unsigned __int64)in_team_idx >> 3)
                                                                          + 0x7FFF8000) )
          {
            __asan_report_load4(in_team_idx);
          }
          v27 = *in_team_idx;
          v28 = (__int64)std::vector<SumoAvatar>::operator[](&v26->avatar_vec, v27);
          if ( *(_BYTE *)(((unsigned __int64)(v28 + 16) >> 3) + 0x7FFF8000) )
            v28 = __asan_report_store8(v28 + 16, v27);
          *(_QWORD *)(v28 + 16) = v25;
          __y._M_node = (std::_Rb_tree_iterator<std::pair<long unsigned int const,std::pair<unsigned int,unsigned int> > >::_Base_ptr)std::make_pair<unsigned int &,unsigned int &>(team_idx, in_team_idx);
          v29 = std::vector<unsigned long>::operator[]((std::vector<long unsigned int> *const)(v5 + 352), idx);
          v30 = std::map<unsigned long,std::pair<unsigned int,unsigned int>>::operator[](
                  &stage->in_dungeon_avatar_team_index_map,
                  v29);
          std::pair<unsigned int,unsigned int>::operator=(
            v30,
            (std::conditional<true,std::pair<unsigned int,unsigned int>&&,std::__nonesuch_no_braces&&>::type)&__y);
        }
        if ( !ret )
        {
          proto::TrialAvatarGrantRecord::TrialAvatarGrantRecord((proto::TrialAvatarGrantRecord *const)(v5 + 416));
          proto::TrialAvatarGrantRecord::set_grant_reason((proto::TrialAvatarGrantRecord *const)(v5 + 416), 5u);
          __for_range = &stage->trial_avatar_team_index_map;
          __for_begin._M_node = std::map<unsigned int,std::pair<unsigned int,unsigned int>>::begin(&stage->trial_avatar_team_index_map)._M_node;
          __for_end._M_node = std::map<unsigned int,std::pair<unsigned int,unsigned int>>::end(&stage->trial_avatar_team_index_map)._M_node;
          while ( 1 )
          {
            p_for_end = (const char *)&__for_end;
            if ( !std::operator!=(&__for_begin, &__for_end) )
              break;
            v78 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int>>>::operator*(&__for_begin);
            trial_avatar_id = std::get<0ul,unsigned int const,std::pair<unsigned int,unsigned int>>(v78);
            team_index_pair = (std::tuple_element<1,const std::pair<unsigned int const,std::pair<unsigned int,unsigned int> > >::type *)std::get<1ul,unsigned int const,std::pair<unsigned int,unsigned int>>(v78);
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            v32 = (unsigned int)Player::getAvatarComp(this->player_);
            if ( *(_BYTE *)(((unsigned __int64)trial_avatar_id >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)trial_avatar_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)trial_avatar_id >> 3)
                                                                                + 0x7FFF8000) )
            {
              __asan_report_load4(trial_avatar_id);
            }
            PlayerAvatarComp::createTrialAvatar((PlayerAvatarComp *const)(v5 + 96), v32, *trial_avatar_id);
            if ( std::operator==<TrialAvatar>(0LL, (const std::shared_ptr<TrialAvatar> *)(v5 + 96)) )
            {
              common::milog::MiLogStream::create(
                &v88,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/sumo_activity.cpp",
                "initSumoEnterSceneAvatar",
                737);
              p_for_end = "[SUMO] trial_avatar_ptr is nullptr";
              common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                &v88,
                (const char (*)[35])"[SUMO] trial_avatar_ptr is nullptr");
              common::milog::MiLogStream::~MiLogStream(&v88);
              ret = -1;
              v33 = 0;
            }
            else
            {
              v34 = std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
              FightPropComp = Creature::getFightPropComp(v34);
              *(float *)v4.m128i_i32 = FightPropComp::getMaxEnergy(FightPropComp);
              v36 = std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
              v37 = Creature::getFightPropComp(v36);
              std::shared_ptr<FightPropNtfParam>::shared_ptr((std::shared_ptr<FightPropNtfParam> *const)(v5 + 128), 0LL);
              v4 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v4));
              FightPropComp::setCurEnergy(v37, *(float *)v4.m128i_i32, 0, (FightPropNtfParamPtr *)(v5 + 128));
              std::shared_ptr<FightPropNtfParam>::~shared_ptr((std::shared_ptr<FightPropNtfParam> *const)(v5 + 128));
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->player_);
              v38 = Player::getAvatarComp(this->player_);
              std::shared_ptr<TrialAvatar>::shared_ptr(&v87, (const std::shared_ptr<TrialAvatar> *)(v5 + 96));
              PlayerAvatarComp::addTrialAvatar(
                (PlayerAvatarComp *const)(v5 + 128),
                (TrialAvatarPtr *)v38,
                (const proto::TrialAvatarGrantRecord *)&v87);
              LOBYTE(v38) = std::operator==<TrialAvatar>(0LL, (const std::shared_ptr<TrialAvatar> *)(v5 + 128));
              std::shared_ptr<TrialAvatar>::~shared_ptr((std::shared_ptr<TrialAvatar> *const)(v5 + 128));
              std::shared_ptr<TrialAvatar>::~shared_ptr(&v87);
              if ( (_BYTE)v38 )
              {
                common::milog::MiLogStream::create(
                  &v88,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/activity/sumo_activity.cpp",
                  "initSumoEnterSceneAvatar",
                  746);
                v39 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                        &v88,
                        (const char (*)[47])"[SUMO] addTrialAvatar failed, trial_avatar_id:");
                p_for_end = (const char *)trial_avatar_id;
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v39, trial_avatar_id);
                common::milog::MiLogStream::~MiLogStream(&v88);
                ret = -1;
                v33 = 0;
              }
              else
              {
                if ( ((unsigned __int8)team_index_pair & 7) >= *(_BYTE *)(((unsigned __int64)team_index_pair >> 3)
                                                                        + 0x7FFF8000)
                  && *(_BYTE *)(((unsigned __int64)team_index_pair >> 3) + 0x7FFF8000) != 0
                  || *(_BYTE *)((((unsigned __int64)&team_index_pair->second + 3) >> 3) + 0x7FFF8000) != 0
                  && (((unsigned __int8)team_index_pair + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&team_index_pair->second
                                                                                + 3) >> 3)
                                                                              + 0x7FFF8000) )
                {
                  __asan_report_load_n(team_index_pair, 8LL);
                }
                __in = *team_index_pair;
                team_idx_0 = std::get<0ul,unsigned int,unsigned int>(&__in);
                in_team_idx_0 = std::get<1ul,unsigned int,unsigned int>(&__in);
                if ( *(_BYTE *)(((unsigned __int64)team_idx_0 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)team_idx_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)team_idx_0 >> 3)
                                                                               + 0x7FFF8000) )
                {
                  __asan_report_load4(team_idx_0);
                }
                v40 = *team_idx_0;
                if ( v40 < std::vector<SumoTeam>::size(&stage->sumo_team_vec) )
                {
                  v41 = &stage->sumo_team_vec;
                  if ( *(_BYTE *)(((unsigned __int64)team_idx_0 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)team_idx_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)team_idx_0 >> 3)
                                                                                 + 0x7FFF8000) )
                  {
                    __asan_report_load4(team_idx_0);
                  }
                  team_1 = std::vector<SumoTeam>::operator[](v41, *team_idx_0);
                  if ( *(_BYTE *)(((unsigned __int64)in_team_idx_0 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)in_team_idx_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)in_team_idx_0 >> 3)
                                                                                    + 0x7FFF8000) )
                  {
                    __asan_report_load4(in_team_idx_0);
                  }
                  v42 = *in_team_idx_0;
                  if ( v42 < std::vector<SumoAvatar>::size(&team_1->avatar_vec) )
                  {
                    v43 = std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
                    Guid = Avatar::getGuid(v43);
                    v45 = team_1;
                    if ( *(_BYTE *)(((unsigned __int64)in_team_idx_0 >> 3) + 0x7FFF8000) != 0
                      && (char)(((unsigned __int8)in_team_idx_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)in_team_idx_0 >> 3)
                                                                                      + 0x7FFF8000) )
                    {
                      __asan_report_load4(in_team_idx_0);
                    }
                    v46 = *in_team_idx_0;
                    v47 = (__int64)std::vector<SumoAvatar>::operator[](&v45->avatar_vec, v46);
                    if ( *(_BYTE *)(((unsigned __int64)(v47 + 16) >> 3) + 0x7FFF8000) )
                      v47 = __asan_report_store8(v47 + 16, v46);
                    *(_QWORD *)(v47 + 16) = Guid;
                    __y._M_node = (std::_Rb_tree_iterator<std::pair<long unsigned int const,std::pair<unsigned int,unsigned int> > >::_Base_ptr)std::make_pair<unsigned int const&,unsigned int const&>((const unsigned int *)team_index_pair, &team_index_pair->second);
                    p_in_dungeon_avatar_team_index_map = &stage->in_dungeon_avatar_team_index_map;
                    v49 = std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
                    *(_QWORD *)(v5 + 32) = Avatar::getGuid(v49);
                    v50 = std::map<unsigned long,std::pair<unsigned int,unsigned int>>::operator[](
                            p_in_dungeon_avatar_team_index_map,
                            (std::map<long unsigned int,std::pair<unsigned int,unsigned int>>::key_type *)(v5 + 32));
                    p_for_end = (const char *)&__y;
                    std::pair<unsigned int,unsigned int>::operator=(
                      v50,
                      (std::conditional<true,std::pair<unsigned int,unsigned int>&&,std::__nonesuch_no_braces&&>::type)&__y);
                    v33 = 1;
                  }
                  else
                  {
                    common::milog::MiLogStream::create(
                      &v88,
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/player/activity/sumo_activity.cpp",
                      "initSumoEnterSceneAvatar",
                      761);
                    p_for_end = "[SUMO] in_team_idx out of range";
                    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                      &v88,
                      (const char (*)[32])"[SUMO] in_team_idx out of range");
                    common::milog::MiLogStream::~MiLogStream(&v88);
                    ret = -1;
                    v33 = 0;
                  }
                }
                else
                {
                  common::milog::MiLogStream::create(
                    &v88,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/activity/sumo_activity.cpp",
                    "initSumoEnterSceneAvatar",
                    754);
                  p_for_end = "[SUMO] team_idx out of range";
                  common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                    &v88,
                    (const char (*)[29])"[SUMO] team_idx out of range");
                  common::milog::MiLogStream::~MiLogStream(&v88);
                  ret = -1;
                  v33 = 0;
                }
              }
            }
            std::shared_ptr<TrialAvatar>::~shared_ptr((std::shared_ptr<TrialAvatar> *const)(v5 + 96));
            if ( v33 != 1 )
              break;
            std::_Rb_tree_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int>>>::operator++(&__for_begin);
          }
          if ( *(_BYTE *)(((unsigned __int64)&stage->cur_team_index >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&stage->cur_team_index >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_store4(&stage->cur_team_index, p_for_end, &stage->cur_team_index);
          }
          stage->cur_team_index = 0;
          v51 = (*(_BYTE *)(((unsigned __int64)&stage->next_switch_team_time >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)stage - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&stage->next_switch_team_time >> 3) + 0x7FFF8000));
          if ( (_BYTE)v51 )
            __asan_report_store4(&stage->next_switch_team_time, (((_BYTE)stage - 68) & 7u) + 3, v51);
          stage->next_switch_team_time = 0;
          proto::TrialAvatarGrantRecord::~TrialAvatarGrantRecord((proto::TrialAvatarGrantRecord *const)(v5 + 416));
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v88,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/sumo_activity.cpp",
          "initSumoEnterSceneAvatar",
          693);
        common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
          &v88,
          (const char (*)[41])"[SUMO] added mirror avatar num incorrect");
        common::milog::MiLogStream::~MiLogStream(&v88);
        ret = -1;
      }
    }
    std::vector<unsigned long>::~vector((std::vector<long unsigned int> *const)(v5 + 352));
    std::vector<unsigned long>::~vector((std::vector<long unsigned int> *const)(v5 + 288));
  }
  if ( ret )
  {
    if ( *(_BYTE *)(((unsigned __int64)stage >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)stage >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(stage);
    }
LABEL_85:
    SumoActivity::recallStageDungeonAvatars(this, stage->stage_id);
    v8 = ret;
    goto LABEL_118;
  }
  if ( *(_BYTE *)(((unsigned __int64)&stage->cur_team_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&stage->cur_team_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&stage->cur_team_index);
  }
  *(_DWORD *)(v5 + 172) = stage->cur_team_index;
  cur_team_index = stage->cur_team_index;
  if ( cur_team_index >= std::vector<SumoTeam>::size(&stage->sumo_team_vec) )
  {
    common::milog::MiLogStream::create(
      &v88,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/sumo_activity.cpp",
      "initSumoEnterSceneAvatar",
      783);
    v53 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
            &v88,
            (const char (*)[43])"[SUMO] init team_index exceed limit, size:");
    __y._M_node = (std::_Rb_tree_iterator<std::pair<long unsigned int const,std::pair<unsigned int,unsigned int> > >::_Base_ptr)std::vector<SumoTeam>::size(&stage->sumo_team_vec);
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v53, (const unsigned __int64 *)&__y);
    common::milog::MiLogStream::~MiLogStream(&v88);
    v8 = -1;
    goto LABEL_118;
  }
  v54 = &stage->sumo_team_vec;
  if ( *(_BYTE *)(((unsigned __int64)&stage->cur_team_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&stage->cur_team_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&stage->cur_team_index);
  }
  team = std::vector<SumoTeam>::operator[](v54, stage->cur_team_index);
  for ( idx_0 = 0; idx_0 < std::vector<SumoAvatar>::size(&team->avatar_vec); ++idx_0 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    v55 = Player::getAvatarComp(this->player_);
    v56 = std::vector<SumoAvatar>::operator[](&team->avatar_vec, idx_0);
    if ( *(_BYTE *)(((unsigned __int64)&v56->in_dungeon_guid >> 3) + 0x7FFF8000) )
      __asan_report_load8(&v56->in_dungeon_guid);
    PlayerAvatarComp::findAvatar((const PlayerAvatarComp *const)(v5 + 128), (uint64_t)v55);
    if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v5 + 128)) )
    {
      common::milog::MiLogStream::create(
        &v88,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/sumo_activity.cpp",
        "initSumoEnterSceneAvatar",
        792);
      v57 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
              &v88,
              (const char (*)[32])"[SUMO] findAvatar failed, guid:");
      v58 = std::vector<SumoAvatar>::operator[](&team->avatar_vec, idx_0);
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v57, &v58->in_dungeon_guid);
      common::milog::MiLogStream::~MiLogStream(&v88);
      ret = -1;
      v59 = 0;
    }
    else
    {
      std::vector<std::shared_ptr<Avatar>>::push_back(
        enter_scene_avatar_vec,
        (const std::vector<std::shared_ptr<Avatar>>::value_type *)(v5 + 128));
      if ( std::operator==<Avatar>(appear_avatar_ptr, 0LL) )
      {
        v60 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 128));
        if ( Creature::getLifeState(v60) == LIFE_ALIVE )
          std::shared_ptr<Avatar>::operator=(appear_avatar_ptr, (const std::shared_ptr<Avatar> *)(v5 + 128));
      }
      v59 = 1;
    }
    std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v5 + 128));
    if ( v59 != 1 )
      break;
  }
  if ( ret )
  {
    if ( *(_BYTE *)(((unsigned __int64)stage >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)stage >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(stage);
    }
    goto LABEL_85;
  }
  if ( std::operator==<Avatar>(appear_avatar_ptr, 0LL) )
  {
    if ( !std::vector<std::shared_ptr<Avatar>>::size(enter_scene_avatar_vec) )
    {
      common::milog::MiLogStream::create(
        &v88,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/sumo_activity.cpp",
        "initSumoEnterSceneAvatar",
        812);
      common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
        &v88,
        (const char (*)[47])"[SUMO] enter_scene_avatar_vec size less than 1");
      common::milog::MiLogStream::~MiLogStream(&v88);
      v8 = -1;
      goto LABEL_118;
    }
    v62 = std::vector<std::shared_ptr<Avatar>>::operator[](enter_scene_avatar_vec, 0LL);
    std::shared_ptr<Avatar>::operator=(appear_avatar_ptr, v62);
  }
  v63 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
  DungeonScene::setDungeonExtraData<SumoDungeonContext>(v63, (const SumoDungeonContext *)(v5 + 160));
  v8 = 0;
LABEL_118:
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v5 + 64));
  result = v8;
  if ( v89 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8030) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8038) = 0;
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
    *(_DWORD *)((v5 >> 3) + 0x7FFF8038) = -168430091;
  }
  return result;
};

// Line 822: range 0000000017FFBA0E-0000000017FFD6D0
__int64 __fastcall SumoActivity::switchDungeonTeam(
        SumoActivity *const this,
        __int32 stage_id,
        proto::SumoSwitchTeamRsp *rsp_0)
{
  unsigned int v3; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,SumoStage> >::pointer v9; // rax
  ActivitySumoExcelConfigMgr *p_activity_sumo_config_mgr; // rcx
  common::milog::MiLogStream *v11; // rax
  Scene *v12; // rax
  uint32_t GalleryComp; // ecx
  BaseGallery *v14; // rax
  common::milog::MiLogStream *v16; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  SumoDungeonContext *v18; // rax
  common::milog::MiLogStream *v19; // rax
  Scene *v20; // rax
  std::vector<SumoTeam>::size_type v21; // r15
  uint32_t v22; // eax
  std::vector<SumoTeam>::size_type v23; // r15
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // r14
  uint32_t cur_team_index; // edx
  common::milog::MiLogStream *v28; // rax
  PlayerAvatarComp *AvatarComp; // rcx
  common::milog::MiLogStream *v30; // rax
  int v31; // r15d
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rax
  PlayerAvatarComp *v34; // r14
  char *v35; // rsi
  uint32_t v36; // ecx
  char v37; // al
  Scene *v38; // rax
  uint32_t SceneTimeSeconds; // ecx
  uint32_t v40; // ecx
  char v41; // dl
  __int64 v42; // rdx
  PlayerAvatarComp *v43; // rcx
  common::milog::MiLogStream *v44; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v45; // rax
  data::LifeState LifeState; // eax
  PlayerBasicComp *BasicComp; // rax
  __int64 v48; // rsi
  uint32_t v49; // ecx
  char v50; // dl
  __int64 v51; // rdx
  uint32_t v52; // edx
  common::milog::MiLogStream *v53; // rax
  DungeonScene *v54; // rax
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // rax
  __int64 v58; // rsi
  uint32_t Uid; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v60; // rdx
  char v61; // cl
  BaseGallery *v62; // r14
  std::__shared_ptr_access<proto_log::PlayerLogBodySumoActivitySwitchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v63; // r14
  DungeonScene *v64; // rax
  const std::string *v65; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodySumoActivitySwitchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v66; // rcx
  Player *v67; // r14
  __int64 result; // rax
  std::string v69; // [rsp+0h] [rbp-2E0h]
  uint32_t now; // [rsp+2Ch] [rbp-2B4h]
  std::vector<SumoTeam>::iterator __for_begin_0; // [rsp+30h] [rbp-2B0h] BYREF
  std::vector<SumoTeam>::iterator __for_end_0; // [rsp+38h] [rbp-2A8h] BYREF
  std::vector<SumoAvatar>::iterator __for_begin; // [rsp+40h] [rbp-2A0h] BYREF
  std::vector<SumoAvatar>::iterator __for_end; // [rsp+48h] [rbp-298h] BYREF
  uint64_t appear_avatar_guid; // [rsp+50h] [rbp-290h]
  const data::ActivitySumoOverallConfig *overall_config_ptr; // [rsp+58h] [rbp-288h]
  SumoStage *stage; // [rsp+60h] [rbp-280h]
  const data::ActivitySumoStageExcelConfig *stage_config_ptr; // [rsp+68h] [rbp-278h]
  SumoDungeonContext *dungeon_context; // [rsp+70h] [rbp-270h]
  SumoTeam *next_team; // [rsp+78h] [rbp-268h]
  std::vector<SumoAvatar> *__for_range; // [rsp+80h] [rbp-260h]
  std::vector<SumoTeam> *__for_range_0; // [rsp+88h] [rbp-258h]
  const SumoTeam *team; // [rsp+90h] [rbp-250h]
  proto::SumoDungeonTeam *dungeon_team; // [rsp+98h] [rbp-248h]
  const std::vector<SumoAvatar> *__for_range_1; // [rsp+A0h] [rbp-240h]
  const SumoAvatar *sumo_avatar; // [rsp+A8h] [rbp-238h]
  proto::SumoDungeonAvatar *dungeon_avatar; // [rsp+B0h] [rbp-230h]
  const SumoAvatar *avatar_info; // [rsp+B8h] [rbp-228h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+C0h] [rbp-220h] BYREF
  common::milog::MiLogStream v90; // [rsp+D0h] [rbp-210h] BYREF
  char v91[496]; // [rsp+F0h] [rbp-1F0h] BYREF

  *(&v69._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  HIDWORD(v69._anon_0._M_allocated_capacity) = stage_id;
  v69._M_string_length = (std::string::size_type)rsp_0;
  v4 = (unsigned __int64)v91;
  v69._M_dataplus._M_p = v91;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(448LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "12 48 1 22 log_context_holder:947 64 4 19 next_team_index:884 80 4 12 stage_id:821 96 8 14 stage"
                        "_iter:823 128 16 17 cur_scene_ptr:840 160 16 21 dungeon_scene_ptr:846 192 16 20 sumo_gallery_ptr"
                        ":859 224 16 11 evt_ptr:958 256 16 11 log_ptr:964 288 16 14 avatar_ptr:901 320 24 23 dungeon_cont"
                        "ext_opt:866 384 24 24 next_team_avatar_vec:897";
  *(_QWORD *)(v4 + 16) = SumoActivity::switchDungeonTeam;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -234556924;
  v6[536862723] = -218959360;
  v6[536862724] = -219021312;
  v6[536862725] = -219021312;
  v6[536862726] = -219021312;
  v6[536862727] = -219021312;
  v6[536862728] = -219021312;
  v6[536862729] = -219021312;
  v6[536862730] = -234881024;
  v6[536862731] = -218959118;
  v6[536862732] = -218103808;
  v6[536862733] = -202116109;
  *(_DWORD *)(v4 + 80) = stage_id;
  *(std::map<unsigned int,SumoStage>::iterator *)(v4 + 96) = std::map<unsigned int,SumoStage>::find(
                                                               &this->sumo_stage_map_,
                                                               (const std::map<unsigned int,SumoStage>::key_type *)(v4 + 80));
  __for_end._M_current = (SumoAvatar *)std::map<unsigned int,SumoStage>::end(&this->sumo_stage_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,SumoStage> >::_Self *)(v4 + 96),
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,SumoStage> >::_Self *)&__for_end) )
  {
    common::milog::MiLogStream::create(
      &v90,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/sumo_activity.cpp",
      "switchDungeonTeam",
      826);
    v7 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v90,
           (const char (*)[34])"[SUMO] stage not found, stage_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 80));
    common::milog::MiLogStream::~MiLogStream(&v90);
    v3 = -1;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v4 + 288));
    v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 288));
    overall_config_ptr = ActivitySumoExcelConfigMgr::getSumoOverallConfig(&v8->design_config.txt_config_mgr.activity_sumo_config_mgr);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 288));
    if ( overall_config_ptr )
    {
      v9 = std::_Rb_tree_iterator<std::pair<unsigned int const,SumoStage>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,SumoStage> > *const)(v4 + 96));
      stage = &v9->second;
      if ( *(char *)(((unsigned __int64)&v9->second.is_open >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&v9->second.is_open);
      if ( !stage->is_open )
      {
        v3 = 10000;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        Player::getSceneComp(this->player_);
        PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v4 + 128));
        if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v4 + 128)) )
        {
          common::milog::MiLogStream::create(
            &v90,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/sumo_activity.cpp",
            "switchDungeonTeam",
            843);
          common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
            &v90,
            (const char (*)[32])"[SUMO] cur_scene_ptr is nullptr");
          common::milog::MiLogStream::~MiLogStream(&v90);
          v3 = -1;
        }
        else
        {
          std::dynamic_pointer_cast<DungeonScene,Scene>((const std::shared_ptr<Scene> *)(v4 + 160));
          if ( std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v4 + 160)) )
          {
            common::milog::MiLogStream::create(
              &v90,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/sumo_activity.cpp",
              "switchDungeonTeam",
              849);
            common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v90,
              (const char (*)[33])"[SUMO] cur scene is not dungeon!");
            common::milog::MiLogStream::~MiLogStream(&v90);
            v3 = -1;
          }
          else
          {
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)(v4 + 288));
            p_activity_sumo_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 288))->design_config.txt_config_mgr.activity_sumo_config_mgr;
            if ( *(_BYTE *)(((unsigned __int64)stage >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)stage >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(stage);
            }
            stage_config_ptr = data::ActivitySumoExcelConfigMgrBase::findActivitySumoStageExcelConfig(
                                 p_activity_sumo_config_mgr,
                                 stage->stage_id);
            std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 288));
            if ( stage_config_ptr )
            {
              v12 = (Scene *)std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
              GalleryComp = (unsigned int)Scene::getGalleryComp(v12);
              if ( *(_BYTE *)(((unsigned __int64)&stage_config_ptr->gallery_id >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&stage_config_ptr->gallery_id >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&stage_config_ptr->gallery_id);
              }
              SceneGalleryComp::findGallery<SumoGallery>((SceneGalleryComp *const)(v4 + 192), GalleryComp);
              if ( std::operator==<SumoGallery>(0LL, (const std::shared_ptr<SumoGallery> *)(v4 + 192))
                || (v14 = (BaseGallery *)std::__shared_ptr_access<SumoGallery,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SumoGallery,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192)),
                    !BaseGallery::isStart(v14)) )
              {
                common::milog::MiLogStream::create(
                  &v90,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/player/activity/sumo_activity.cpp",
                  "switchDungeonTeam",
                  862);
                v16 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                        &v90,
                        (const char (*)[45])"[SUMO] cannot find sumo gallery, gallery_id:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v16,
                  &stage_config_ptr->gallery_id);
                common::milog::MiLogStream::~MiLogStream(&v90);
                v3 = -1;
              }
              else
              {
                v17 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
                DungeonScene::getDungeonExtraData<SumoDungeonContext>(
                  (std::optional<SumoDungeonContext> *)(v4 + 320),
                  v17);
                if ( !std::optional<SumoDungeonContext>::has_value((const std::optional<SumoDungeonContext> *const)(v4 + 320)) )
                {
                  common::milog::MiLogStream::create(
                    &v90,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/activity/sumo_activity.cpp",
                    "switchDungeonTeam",
                    869);
                  common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                    &v90,
                    (const char (*)[39])"[SUMO] cur dungeon is not sumo dungeon");
                  common::milog::MiLogStream::~MiLogStream(&v90);
                  v3 = -1;
                }
                else
                {
                  v18 = std::optional<SumoDungeonContext>::value((std::optional<SumoDungeonContext> *const)(v4 + 320));
                  dungeon_context = v18;
                  if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load4(v18);
                  }
                  if ( dungeon_context->stage_id == *(_DWORD *)(v4 + 80) )
                  {
                    v20 = (Scene *)std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
                    now = Scene::getSceneTimeSeconds(v20);
                    if ( *(_BYTE *)(((unsigned __int64)&stage->next_switch_team_time >> 3) + 0x7FFF8000) != 0
                      && (char)((((_BYTE)stage - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&stage->next_switch_team_time >> 3)
                                                                           + 0x7FFF8000) )
                    {
                      __asan_report_load4(&stage->next_switch_team_time);
                    }
                    if ( now >= stage->next_switch_team_time )
                    {
                      if ( *(_BYTE *)(((unsigned __int64)&stage->cur_team_index >> 3) + 0x7FFF8000) != 0
                        && *(_BYTE *)(((unsigned __int64)&stage->cur_team_index >> 3) + 0x7FFF8000) <= 3 )
                      {
                        __asan_report_load4(&stage->cur_team_index);
                      }
                      v21 = stage->cur_team_index + 1;
                      if ( v21 >= std::vector<SumoTeam>::size(&stage->sumo_team_vec) )
                      {
                        v22 = 0;
                      }
                      else
                      {
                        if ( *(_BYTE *)(((unsigned __int64)&stage->cur_team_index >> 3) + 0x7FFF8000) != 0
                          && *(_BYTE *)(((unsigned __int64)&stage->cur_team_index >> 3) + 0x7FFF8000) <= 3 )
                        {
                          __asan_report_load4(&stage->cur_team_index);
                        }
                        v22 = stage->cur_team_index + 1;
                      }
                      *(_DWORD *)(v4 + 64) = v22;
                      v23 = *(unsigned int *)(v4 + 64);
                      if ( v23 < std::vector<SumoTeam>::size(&stage->sumo_team_vec) )
                      {
                        if ( *(_BYTE *)(((unsigned __int64)&stage->cur_team_index >> 3) + 0x7FFF8000) != 0
                          && *(_BYTE *)(((unsigned __int64)&stage->cur_team_index >> 3) + 0x7FFF8000) <= 3 )
                        {
                          __asan_report_load4(&stage->cur_team_index);
                        }
                        cur_team_index = stage->cur_team_index;
                        if ( *(_BYTE *)(((unsigned __int64)stage >> 3) + 0x7FFF8000) != 0
                          && *(_BYTE *)(((unsigned __int64)stage >> 3) + 0x7FFF8000) <= 3 )
                        {
                          __asan_report_load4(stage);
                        }
                        if ( SumoActivity::delTeamAbilityGroup(this, stage->stage_id, cur_team_index) )
                        {
                          common::milog::MiLogStream::create(
                            &v90,
                            &common::milog::MiLogDefault::default_log_obj_,
                            3u,
                            "./src/player/activity/sumo_activity.cpp",
                            "switchDungeonTeam",
                            893);
                          v28 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                                  &v90,
                                  (const char (*)[47])"[SUMO] delTeamAbilityGroup failed, team_index:");
                          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                            v28,
                            &stage->cur_team_index);
                          common::milog::MiLogStream::~MiLogStream(&v90);
                        }
                        next_team = std::vector<SumoTeam>::operator[](&stage->sumo_team_vec, *(unsigned int *)(v4 + 64));
                        std::vector<unsigned long>::vector((std::vector<long unsigned int> *const)(v4 + 384));
                        appear_avatar_guid = 0LL;
                        __for_range = &next_team->avatar_vec;
                        __for_begin._M_current = std::vector<SumoAvatar>::begin(&next_team->avatar_vec)._M_current;
                        __for_end._M_current = std::vector<SumoAvatar>::end(__for_range)._M_current;
                        while ( __gnu_cxx::operator!=<SumoAvatar *,std::vector<SumoAvatar>>(&__for_begin, &__for_end) )
                        {
                          avatar_info = __gnu_cxx::__normal_iterator<SumoAvatar *,std::vector<SumoAvatar>>::operator*(&__for_begin);
                          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                            __asan_report_load8(&this->player_);
                          AvatarComp = Player::getAvatarComp(this->player_);
                          if ( *(_BYTE *)(((unsigned __int64)&avatar_info->in_dungeon_guid >> 3) + 0x7FFF8000) )
                            __asan_report_load8(&avatar_info->in_dungeon_guid);
                          PlayerAvatarComp::findAvatar((const PlayerAvatarComp *const)(v4 + 288), (uint64_t)AvatarComp);
                          if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v4 + 288)) )
                          {
                            common::milog::MiLogStream::create(
                              &v90,
                              &common::milog::MiLogDefault::default_log_obj_,
                              4u,
                              "./src/player/activity/sumo_activity.cpp",
                              "switchDungeonTeam",
                              904);
                            v30 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                                    &v90,
                                    (const char (*)[42])"[SUMO] in dungeon avatar not found, guid:");
                            common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                              v30,
                              &avatar_info->in_dungeon_guid);
                            common::milog::MiLogStream::~MiLogStream(&v90);
                            v3 = -1;
                            v31 = 0;
                          }
                          else
                          {
                            std::vector<unsigned long>::push_back(
                              (std::vector<long unsigned int> *const)(v4 + 384),
                              &avatar_info->in_dungeon_guid);
                            if ( !appear_avatar_guid )
                            {
                              v32 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 288));
                              if ( Creature::getLifeState(v32) == LIFE_ALIVE )
                              {
                                if ( *(_BYTE *)(((unsigned __int64)&avatar_info->in_dungeon_guid >> 3) + 0x7FFF8000) )
                                  __asan_report_load8(&avatar_info->in_dungeon_guid);
                                appear_avatar_guid = avatar_info->in_dungeon_guid;
                              }
                            }
                            v31 = 1;
                          }
                          std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v4 + 288));
                          if ( v31 != 1 )
                            goto LABEL_126;
                          __gnu_cxx::__normal_iterator<SumoAvatar *,std::vector<SumoAvatar>>::operator++(&__for_begin);
                        }
                        if ( appear_avatar_guid )
                        {
                          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                            __asan_report_load8(&this->player_);
                          v34 = Player::getAvatarComp(this->player_);
                          std::shared_ptr<Scene>::shared_ptr(
                            (std::shared_ptr<Scene> *const)(v4 + 288),
                            (const std::shared_ptr<Scene> *)(v4 + 128));
                          v35 = (char *)(v4 + 384);
                          LOBYTE(v34) = PlayerAvatarComp::setSceneTeamAndAddToScene(
                                          v34,
                                          (const std::vector<long unsigned int> *)(v4 + 384),
                                          appear_avatar_guid,
                                          (ScenePtr *)(v4 + 288),
                                          CHANGE_SCENE_TEAM_REASON_SUMO_ACTIVITY_SWITCH_TEAM) != 0;
                          std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v4 + 288));
                          if ( (_BYTE)v34 )
                          {
                            common::milog::MiLogStream::create(
                              &v90,
                              &common::milog::MiLogDefault::default_log_obj_,
                              3u,
                              "./src/player/activity/sumo_activity.cpp",
                              "switchDungeonTeam",
                              921);
                            common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                              &v90,
                              (const char (*)[40])"[SUMO] setSceneTeamAndAddToScene failed");
                            common::milog::MiLogStream::~MiLogStream(&v90);
                            v3 = -1;
                          }
                          else
                          {
                            v36 = *(_DWORD *)(v4 + 64);
                            v37 = *(_BYTE *)(((unsigned __int64)&stage->cur_team_index >> 3) + 0x7FFF8000);
                            if ( v37 != 0 && v37 <= 3 )
                            {
                              LOBYTE(v35) = v37 != 0;
                              __asan_report_store4(&stage->cur_team_index, v35, &stage->cur_team_index);
                            }
                            stage->cur_team_index = v36;
                            v38 = (Scene *)std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
                            SceneTimeSeconds = Scene::getSceneTimeSeconds(v38);
                            if ( *(_BYTE *)(((unsigned __int64)&overall_config_ptr->switch_team_cd >> 3) + 0x7FFF8000) != 0
                              && *(_BYTE *)(((unsigned __int64)&overall_config_ptr->switch_team_cd >> 3) + 0x7FFF8000) <= 3 )
                            {
                              __asan_report_load4(&overall_config_ptr->switch_team_cd);
                            }
                            v40 = overall_config_ptr->switch_team_cd + SceneTimeSeconds;
                            v41 = *(_BYTE *)(((unsigned __int64)&stage->next_switch_team_time >> 3) + 0x7FFF8000);
                            LOBYTE(v35) = v41 != 0;
                            v42 = (v41 != 0) & (unsigned __int8)((char)((((_BYTE)stage - 68) & 7) + 3) >= v41);
                            if ( (_BYTE)v42 )
                              __asan_report_store4(&stage->next_switch_team_time, v35, v42);
                            stage->next_switch_team_time = v40;
                            proto::SumoSwitchTeamRsp::set_cur_team_index(
                              (proto::SumoSwitchTeamRsp *const)v69._M_string_length,
                              *(_DWORD *)(v4 + 64));
                            if ( *(_BYTE *)(((unsigned __int64)&stage->next_switch_team_time >> 3) + 0x7FFF8000) != 0
                              && (char)((((_BYTE)stage - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&stage->next_switch_team_time >> 3)
                                                                                   + 0x7FFF8000) )
                            {
                              __asan_report_load4(&stage->next_switch_team_time);
                            }
                            proto::SumoSwitchTeamRsp::set_next_valid_switch_time(
                              (proto::SumoSwitchTeamRsp *const)v69._M_string_length,
                              stage->next_switch_team_time);
                            __for_range_0 = &stage->sumo_team_vec;
                            __for_begin_0._M_current = std::vector<SumoTeam>::begin(&stage->sumo_team_vec)._M_current;
                            __for_end_0._M_current = std::vector<SumoTeam>::end(__for_range_0)._M_current;
                            while ( __gnu_cxx::operator!=<SumoTeam *,std::vector<SumoTeam>>(
                                      &__for_begin_0,
                                      &__for_end_0) )
                            {
                              team = __gnu_cxx::__normal_iterator<SumoTeam *,std::vector<SumoTeam>>::operator*(&__for_begin_0);
                              dungeon_team = proto::SumoSwitchTeamRsp::add_dungeon_team_list((proto::SumoSwitchTeamRsp *const)v69._M_string_length);
                              __for_range_1 = &team->avatar_vec;
                              __for_begin._M_current = (SumoAvatar *)std::vector<SumoAvatar>::begin(&team->avatar_vec)._M_current;
                              __for_end._M_current = (SumoAvatar *)std::vector<SumoAvatar>::end(__for_range_1)._M_current;
                              while ( __gnu_cxx::operator!=<SumoAvatar const*,std::vector<SumoAvatar>>(
                                        (const __gnu_cxx::__normal_iterator<const SumoAvatar*,std::vector<SumoAvatar> > *)&__for_begin,
                                        (const __gnu_cxx::__normal_iterator<const SumoAvatar*,std::vector<SumoAvatar> > *)&__for_end) )
                              {
                                sumo_avatar = __gnu_cxx::__normal_iterator<SumoAvatar const*,std::vector<SumoAvatar>>::operator*((const __gnu_cxx::__normal_iterator<const SumoAvatar*,std::vector<SumoAvatar> > *const)&__for_begin);
                                dungeon_avatar = proto::SumoDungeonTeam::add_dungeon_avatar_list(dungeon_team);
                                if ( *(_BYTE *)(((unsigned __int64)&sumo_avatar->in_dungeon_guid >> 3) + 0x7FFF8000) )
                                  __asan_report_load8(&sumo_avatar->in_dungeon_guid);
                                proto::SumoDungeonAvatar::set_avatar_guid(dungeon_avatar, sumo_avatar->in_dungeon_guid);
                                if ( *(char *)(((unsigned __int64)sumo_avatar >> 3) + 0x7FFF8000) < 0 )
                                  __asan_report_load1(sumo_avatar);
                                proto::SumoDungeonAvatar::set_is_trial(dungeon_avatar, sumo_avatar->is_trial);
                                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                                  __asan_report_load8(&this->player_);
                                v43 = Player::getAvatarComp(this->player_);
                                if ( *(_BYTE *)(((unsigned __int64)&sumo_avatar->in_dungeon_guid >> 3) + 0x7FFF8000) )
                                  __asan_report_load8(&sumo_avatar->in_dungeon_guid);
                                PlayerAvatarComp::findAvatar((const PlayerAvatarComp *const)(v4 + 288), (uint64_t)v43);
                                if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v4 + 288)) )
                                {
                                  common::milog::MiLogStream::create(
                                    &v90,
                                    &common::milog::MiLogDefault::default_log_obj_,
                                    4u,
                                    "./src/player/activity/sumo_activity.cpp",
                                    "switchDungeonTeam",
                                    941);
                                  v44 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                                          &v90,
                                          (const char (*)[42])"[SUMO] in dungeon avatar not found, guid:");
                                  common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                                    v44,
                                    &sumo_avatar->in_dungeon_guid);
                                  common::milog::MiLogStream::~MiLogStream(&v90);
                                }
                                else
                                {
                                  v45 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 288));
                                  LifeState = Creature::getLifeState(v45);
                                  proto::SumoDungeonAvatar::set_is_avlive(dungeon_avatar, LifeState == LIFE_ALIVE);
                                }
                                std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v4 + 288));
                                __gnu_cxx::__normal_iterator<SumoAvatar const*,std::vector<SumoAvatar>>::operator++((__gnu_cxx::__normal_iterator<const SumoAvatar*,std::vector<SumoAvatar> > *const)&__for_begin);
                              }
                              __gnu_cxx::__normal_iterator<SumoTeam *,std::vector<SumoTeam>>::operator++(&__for_begin_0);
                            }
                            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                              __asan_report_load8(&this->player_);
                            BasicComp = Player::getBasicComp(this->player_);
                            PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v90, BasicComp);
                            v48 = 3517LL;
                            StatLogUtils::ContextHolder::ContextHolder(
                              (StatLogUtils::ContextHolder *const)(v4 + 48),
                              0xDBDu,
                              v69);
                            std::string::~string(&v90);
                            if ( *(_BYTE *)(((unsigned __int64)&stage->cur_team_index >> 3) + 0x7FFF8000) != 0
                              && *(_BYTE *)(((unsigned __int64)&stage->cur_team_index >> 3) + 0x7FFF8000) <= 3 )
                            {
                              __asan_report_load4(&stage->cur_team_index);
                            }
                            v49 = stage->cur_team_index;
                            v50 = *(_BYTE *)(((unsigned __int64)&dungeon_context->cur_team_index >> 3) + 0x7FFF8000);
                            LOBYTE(v48) = v50 != 0;
                            v51 = (v50 != 0) & (unsigned __int8)((char)((((_BYTE)dungeon_context + 12) & 7) + 3) >= v50);
                            if ( (_BYTE)v51 )
                              __asan_report_store4(&dungeon_context->cur_team_index, v48, v51);
                            dungeon_context->cur_team_index = v49;
                            v52 = stage->cur_team_index;
                            if ( *(_BYTE *)(((unsigned __int64)stage >> 3) + 0x7FFF8000) != 0
                              && *(_BYTE *)(((unsigned __int64)stage >> 3) + 0x7FFF8000) <= 3 )
                            {
                              __asan_report_load4(stage);
                            }
                            if ( SumoActivity::addTeamAbilityGroup(
                                   *((SumoActivity *const *)&v69._anon_0._M_allocated_capacity + 1),
                                   stage->stage_id,
                                   v52) )
                            {
                              common::milog::MiLogStream::create(
                                &v90,
                                &common::milog::MiLogDefault::default_log_obj_,
                                3u,
                                "./src/player/activity/sumo_activity.cpp",
                                "switchDungeonTeam",
                                952);
                              v53 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                                      &v90,
                                      (const char (*)[47])"[SUMO] delTeamAbilityGroup failed, team_index:");
                              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                v53,
                                &stage->cur_team_index);
                              common::milog::MiLogStream::~MiLogStream(&v90);
                            }
                            v54 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
                            DungeonScene::setDungeonExtraData<SumoDungeonContext>(v54, dungeon_context);
                            common::milog::MiLogStream::create(
                              &v90,
                              &common::milog::MiLogDefault::default_log_obj_,
                              1u,
                              "./src/player/activity/sumo_activity.cpp",
                              "switchDungeonTeam",
                              956);
                            v55 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                                    &v90,
                                    (const char (*)[35])"[SUMO] switch team succ, stage_id:");
                            v56 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                    v55,
                                    (const unsigned int *)(v4 + 80));
                            v57 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                                    v56,
                                    (const char (*)[17])" cur_team_index:");
                            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                              v57,
                              &stage->cur_team_index);
                            common::milog::MiLogStream::~MiLogStream(&v90);
                            EventUtil::createEvent((data::EventType)(v4 + 224));
                            v58 = 0LL;
                            if ( std::operator!=<Event>((const std::shared_ptr<Event> *)(v4 + 224), 0LL) )
                            {
                              if ( *(_BYTE *)(((*(&v69._anon_0._M_allocated_capacity + 1) + 24) >> 3) + 0x7FFF8000) )
                                __asan_report_load8(*(&v69._anon_0._M_allocated_capacity + 1) + 24);
                              Uid = Player::getUid(*(const Player *const *)(*(&v69._anon_0._M_allocated_capacity + 1)
                                                                          + 24));
                              v60 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 224));
                              v61 = *(_BYTE *)(((unsigned __int64)&v60->uid >> 3) + 0x7FFF8000);
                              if ( v61 != 0 && (char)((((_BYTE)v60 + 60) & 7) + 3) >= v61 )
                              {
                                LOBYTE(v58) = v61 != 0;
                                __asan_report_store4(&v60->uid, v58, v60);
                              }
                              v60->uid = Uid;
                              v62 = (BaseGallery *)std::__shared_ptr_access<SumoGallery,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SumoGallery,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
                              std::shared_ptr<Event>::shared_ptr(
                                (std::shared_ptr<Event> *const)(v4 + 288),
                                (const std::shared_ptr<Event> *)(v4 + 224));
                              BaseGallery::notifyGroupEvent(v62, (EventPtr *)(v4 + 288));
                              std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v4 + 288));
                            }
                            common::tools::perf::make_shared<proto_log::PlayerLogBodySumoActivitySwitchTeam>();
                            v63 = std::__shared_ptr_access<proto_log::PlayerLogBodySumoActivitySwitchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodySumoActivitySwitchTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 256));
                            v64 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
                            v65 = DungeonScene::getTransaction[abi:cxx11](v64);
                            proto_log::PlayerLogBodySumoActivitySwitchTeam::set_dungeon_transaction(v63, v65);
                            v66 = std::__shared_ptr_access<proto_log::PlayerLogBodySumoActivitySwitchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodySumoActivitySwitchTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 256));
                            if ( *(_BYTE *)(((unsigned __int64)&stage->cur_team_index >> 3) + 0x7FFF8000) != 0
                              && *(_BYTE *)(((unsigned __int64)&stage->cur_team_index >> 3) + 0x7FFF8000) <= 3 )
                            {
                              __asan_report_load4(&stage->cur_team_index);
                            }
                            proto_log::PlayerLogBodySumoActivitySwitchTeam::set_team_idx(v66, stage->cur_team_index);
                            if ( *(_BYTE *)(((*(&v69._anon_0._M_allocated_capacity + 1) + 24) >> 3) + 0x7FFF8000) )
                              __asan_report_load8(*(&v69._anon_0._M_allocated_capacity + 1) + 24);
                            v67 = *(Player **)(*(&v69._anon_0._M_allocated_capacity + 1) + 24);
                            std::shared_ptr<google::protobuf::Message>::shared_ptr(
                              (std::shared_ptr<google::protobuf::Message> *const)(v4 + 288),
                              0LL);
                            std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodySumoActivitySwitchTeam,void>(
                              &p_body_ptr,
                              (const std::shared_ptr<proto_log::PlayerLogBodySumoActivitySwitchTeam> *)(v4 + 256));
                            Player::printStatLog(v67, &p_body_ptr, (MessagePtr *)(v4 + 288), 0xEu);
                            std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
                            std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)(v4 + 288));
                            v3 = 0;
                            std::shared_ptr<proto_log::PlayerLogBodySumoActivitySwitchTeam>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodySumoActivitySwitchTeam> *const)(v4 + 256));
                            std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v4 + 224));
                            StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 48));
                          }
                        }
                        else
                        {
                          common::milog::MiLogStream::create(
                            &v90,
                            &common::milog::MiLogDefault::default_log_obj_,
                            4u,
                            "./src/player/activity/sumo_activity.cpp",
                            "switchDungeonTeam",
                            915);
                          common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                            &v90,
                            (const char (*)[47])"[SUMO] all avatar dead, dungeon should settle!");
                          common::milog::MiLogStream::~MiLogStream(&v90);
                          v3 = -1;
                        }
LABEL_126:
                        std::vector<unsigned long>::~vector((std::vector<long unsigned int> *const)(v4 + 384));
                      }
                      else
                      {
                        common::milog::MiLogStream::create(
                          &v90,
                          &common::milog::MiLogDefault::default_log_obj_,
                          3u,
                          "./src/player/activity/sumo_activity.cpp",
                          "switchDungeonTeam",
                          887);
                        v24 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
                                &v90,
                                (const char (*)[54])"[SUMO] next team index out of range, next_team_index:");
                        v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                v24,
                                (const unsigned int *)(v4 + 64));
                        v26 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                                v25,
                                (const char (*)[12])" team_size:");
                        __for_end._M_current = (SumoAvatar *)std::vector<SumoTeam>::size(&stage->sumo_team_vec);
                        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                          v26,
                          (const unsigned __int64 *)&__for_end);
                        common::milog::MiLogStream::~MiLogStream(&v90);
                        v3 = -1;
                      }
                    }
                    else
                    {
                      v3 = 10001;
                    }
                  }
                  else
                  {
                    common::milog::MiLogStream::create(
                      &v90,
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/player/activity/sumo_activity.cpp",
                      "switchDungeonTeam",
                      875);
                    v19 = common::milog::MiLogStream::operator<<<char [69],(char *[69])0>(
                            &v90,
                            (const char (*)[69])"[SUMO] dungeon_context stage_id not match, dungeon_context.stage_id:");
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v19,
                      &dungeon_context->stage_id);
                    common::milog::MiLogStream::~MiLogStream(&v90);
                    v3 = -1;
                  }
                }
              }
              std::shared_ptr<SumoGallery>::~shared_ptr((std::shared_ptr<SumoGallery> *const)(v4 + 192));
            }
            else
            {
              common::milog::MiLogStream::create(
                &v90,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/player/activity/sumo_activity.cpp",
                "switchDungeonTeam",
                856);
              v11 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                      &v90,
                      (const char (*)[46])"[SUMO] stage_config_ptr is nullptr, stage_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &stage->stage_id);
              common::milog::MiLogStream::~MiLogStream(&v90);
              v3 = -1;
            }
          }
          std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v4 + 160));
        }
        std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v4 + 128));
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v90,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/sumo_activity.cpp",
        "switchDungeonTeam",
        832);
      common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
        &v90,
        (const char (*)[37])"[SUMO] overall_config_ptr is nullptr");
      common::milog::MiLogStream::~MiLogStream(&v90);
      v3 = -1;
    }
  }
  result = v3;
  if ( v69._M_dataplus._M_p == (std::string::pointer)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0LL;
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
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 972: range 0000000017FFD6D2-0000000017FFDC3D
void __cdecl SumoActivity::onLeaveSceneEvent(SumoActivity *const this, const LeaveSceneEvent *event)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  uint32_t *p_cur_team_index; // rax
  uint32_t cur_team_index; // esi
  unsigned int val; // [rsp+14h] [rbp-13Ch] BYREF
  SumoDungeonContext *dungeon_context; // [rsp+18h] [rbp-138h]
  common::milog::MiLogStream v13; // [rsp+20h] [rbp-130h] BYREF
  char v14[272]; // [rsp+40h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 16 17 cur_scene_ptr:973 64 16 21 dungeon_scene_ptr:979 96 24 15 context_opt:989 160 24 10 notify:995";
  *(_QWORD *)(v2 + 16) = SumoActivity::onLeaveSceneEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -234881024;
  v4[536862724] = -218959118;
  v4[536862725] = -218103808;
  v4[536862726] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 32));
  if ( !std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 32)) )
  {
    std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    toPtr<DungeonScene,Scene>((Scene *)(v2 + 64));
    if ( std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v2 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/sumo_activity.cpp",
        "onLeaveSceneEvent",
        982);
      v5 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
             &v13,
             (const char (*)[47])"[SUMO] cur scene is not dungeon, cur_scene_id:");
      v6 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      val = Scene::getSceneId(v6);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
      common::milog::MiLogStream::~MiLogStream(&v13);
    }
    else
    {
      v7 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      if ( DungeonScene::getDungeonType(v7) == DUNGEON_SUMO_COMBAT )
      {
        v8 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        DungeonScene::getDungeonExtraData<SumoDungeonContext>((std::optional<SumoDungeonContext> *)(v2 + 96), v8);
        if ( !std::optional<SumoDungeonContext>::has_value((const std::optional<SumoDungeonContext> *const)(v2 + 96)) )
        {
          common::milog::MiLogStream::create(
            &v13,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/activity/sumo_activity.cpp",
            "onLeaveSceneEvent",
            992);
          common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
            &v13,
            (const char (*)[30])"[SUMO] dungeon has no context");
          common::milog::MiLogStream::~MiLogStream(&v13);
        }
        else
        {
          proto::SumoLeaveDungeonNotify::SumoLeaveDungeonNotify((proto::SumoLeaveDungeonNotify *const)(v2 + 160));
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 160));
          dungeon_context = std::optional<SumoDungeonContext>::value((std::optional<SumoDungeonContext> *const)(v2 + 96));
          p_cur_team_index = &dungeon_context->cur_team_index;
          if ( *(_BYTE *)(((unsigned __int64)p_cur_team_index >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)p_cur_team_index & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_cur_team_index >> 3)
                                                                               + 0x7FFF8000) )
          {
            __asan_report_load4(p_cur_team_index);
          }
          cur_team_index = dungeon_context->cur_team_index;
          if ( *(_BYTE *)(((unsigned __int64)dungeon_context >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)dungeon_context & 7) + 3) >= *(_BYTE *)(((unsigned __int64)dungeon_context >> 3)
                                                                              + 0x7FFF8000) )
          {
            __asan_report_load4(dungeon_context);
          }
          SumoActivity::delTeamAbilityGroup(this, dungeon_context->stage_id, cur_team_index);
          if ( *(_BYTE *)(((unsigned __int64)dungeon_context >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)dungeon_context & 7) + 3) >= *(_BYTE *)(((unsigned __int64)dungeon_context >> 3)
                                                                              + 0x7FFF8000) )
          {
            __asan_report_load4(dungeon_context);
          }
          SumoActivity::recallStageDungeonAvatars(this, dungeon_context->stage_id);
          proto::SumoLeaveDungeonNotify::~SumoLeaveDungeonNotify((proto::SumoLeaveDungeonNotify *const)(v2 + 160));
        }
      }
    }
    std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 64));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 32));
  if ( v14 == (char *)v2 )
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

// Line 1005: range 0000000017FFDC3E-0000000017FFE807
void __cdecl SumoActivity::onPostEnterSceneEvent(SumoActivity *const this, const PostEnterSceneEvent *event)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream *v13; // rax
  PlayerAvatarComp *AvatarComp; // rcx
  common::milog::MiLogStream *v15; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  data::LifeState LifeState; // eax
  unsigned int val; // [rsp+1Ch] [rbp-1F4h] BYREF
  std::vector<SumoTeam>::iterator __for_begin; // [rsp+20h] [rbp-1F0h] BYREF
  std::vector<SumoTeam>::iterator __for_end; // [rsp+28h] [rbp-1E8h] BYREF
  std::vector<SumoAvatar>::const_iterator __for_begin_0; // [rsp+30h] [rbp-1E0h] BYREF
  std::vector<SumoAvatar>::const_iterator __for_end_0; // [rsp+38h] [rbp-1D8h] BYREF
  SumoDungeonContext *dungeon_context; // [rsp+40h] [rbp-1D0h]
  SumoStage *stage; // [rsp+48h] [rbp-1C8h]
  std::vector<SumoTeam> *__for_range; // [rsp+50h] [rbp-1C0h]
  const SumoTeam *team; // [rsp+58h] [rbp-1B8h]
  proto::SumoDungeonTeam *dungeon_team; // [rsp+60h] [rbp-1B0h]
  const std::vector<SumoAvatar> *__for_range_0; // [rsp+68h] [rbp-1A8h]
  const SumoAvatar *sumo_avatar; // [rsp+70h] [rbp-1A0h]
  proto::SumoDungeonAvatar *dungeon_avatar; // [rsp+78h] [rbp-198h]
  common::milog::MiLogStream v31; // [rsp+80h] [rbp-190h] BYREF
  char v32[368]; // [rsp+A0h] [rbp-170h] BYREF

  v2 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 8 15 stage_iter:1029 64 16 18 cur_scene_ptr:1006 96 16 22 dungeon_scene_ptr:1013 128 16 15 "
                        "avatar_ptr:1050 160 24 16 context_opt:1022 224 64 11 notify:1037";
  *(_QWORD *)(v2 + 16) = SumoActivity::onPostEnterSceneEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -234881024;
  v4[536862726] = -218959118;
  v4[536862729] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 64));
  if ( !std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v31,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/sumo_activity.cpp",
      "onPostEnterSceneEvent",
      1011);
    v5 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
           &v31,
           (const char (*)[44])"[SUMO] onPostEnterSceneEvent, cur_scene_id:");
    v6 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    val = Scene::getSceneId(v6);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v31);
    std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    toPtr<DungeonScene,Scene>((Scene *)(v2 + 96));
    if ( std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v2 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v31,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/sumo_activity.cpp",
        "onPostEnterSceneEvent",
        1016);
      v7 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
             &v31,
             (const char (*)[47])"[SUMO] cur scene is not dungeon, cur_scene_id:");
      v8 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      val = Scene::getSceneId(v8);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
      common::milog::MiLogStream::~MiLogStream(&v31);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v31,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/sumo_activity.cpp",
        "onPostEnterSceneEvent",
        1019);
      v9 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
             &v31,
             (const char (*)[21])"[SUMO] dungeon type:");
      v10 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      val = DungeonScene::getDungeonType(v10);
      common::milog::MiLogStream::operator<<<data::DungeonType,(data::DungeonType*)0>(
        v9,
        (const data::DungeonType *)&val);
      common::milog::MiLogStream::~MiLogStream(&v31);
      v11 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      if ( DungeonScene::getDungeonType(v11) == DUNGEON_SUMO_COMBAT )
      {
        v12 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        DungeonScene::getDungeonExtraData<SumoDungeonContext>((std::optional<SumoDungeonContext> *)(v2 + 160), v12);
        if ( !std::optional<SumoDungeonContext>::has_value((const std::optional<SumoDungeonContext> *const)(v2 + 160)) )
        {
          common::milog::MiLogStream::create(
            &v31,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/activity/sumo_activity.cpp",
            "onPostEnterSceneEvent",
            1025);
          common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
            &v31,
            (const char (*)[30])"[SUMO] dungeon has no context");
          common::milog::MiLogStream::~MiLogStream(&v31);
        }
        else
        {
          dungeon_context = std::optional<SumoDungeonContext>::value((std::optional<SumoDungeonContext> *const)(v2 + 160));
          *(std::map<unsigned int,SumoStage>::iterator *)(v2 + 32) = std::map<unsigned int,SumoStage>::find(
                                                                       &this->sumo_stage_map_,
                                                                       &dungeon_context->stage_id);
          __for_end_0._M_current = (const SumoAvatar *)std::map<unsigned int,SumoStage>::end(&this->sumo_stage_map_)._M_node;
          if ( std::operator==(
                 (const std::_Rb_tree_iterator<std::pair<unsigned int const,SumoStage> >::_Self *)(v2 + 32),
                 (const std::_Rb_tree_iterator<std::pair<unsigned int const,SumoStage> >::_Self *)&__for_end_0) )
          {
            common::milog::MiLogStream::create(
              &v31,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/activity/sumo_activity.cpp",
              "onPostEnterSceneEvent",
              1032);
            v13 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                    &v31,
                    (const char (*)[34])"[SUMO] stage not found, stage_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &dungeon_context->stage_id);
            common::milog::MiLogStream::~MiLogStream(&v31);
          }
          else
          {
            stage = &std::_Rb_tree_iterator<std::pair<unsigned int const,SumoStage>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,SumoStage> > *const)(v2 + 32))->second;
            proto::SumoEnterDungeonNotify::SumoEnterDungeonNotify((proto::SumoEnterDungeonNotify *const)(v2 + 224));
            if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&this->activity_id_);
            }
            proto::SumoEnterDungeonNotify::set_activity_id(
              (proto::SumoEnterDungeonNotify *const)(v2 + 224),
              this->activity_id_);
            if ( *(_BYTE *)(((unsigned __int64)stage >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)stage >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(stage);
            }
            proto::SumoEnterDungeonNotify::set_stage_id(
              (proto::SumoEnterDungeonNotify *const)(v2 + 224),
              stage->stage_id);
            if ( *(_BYTE *)(((unsigned __int64)&stage->cur_team_index >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&stage->cur_team_index >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&stage->cur_team_index);
            }
            proto::SumoEnterDungeonNotify::set_cur_team_index(
              (proto::SumoEnterDungeonNotify *const)(v2 + 224),
              stage->cur_team_index);
            if ( *(_BYTE *)(((unsigned __int64)&stage->next_switch_team_time >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)stage - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&stage->next_switch_team_time >> 3)
                                                                   + 0x7FFF8000) )
            {
              __asan_report_load4(&stage->next_switch_team_time);
            }
            proto::SumoEnterDungeonNotify::set_next_valid_switch_time(
              (proto::SumoEnterDungeonNotify *const)(v2 + 224),
              stage->next_switch_team_time);
            __for_range = &stage->sumo_team_vec;
            __for_begin._M_current = std::vector<SumoTeam>::begin(&stage->sumo_team_vec)._M_current;
            __for_end._M_current = std::vector<SumoTeam>::end(__for_range)._M_current;
            while ( __gnu_cxx::operator!=<SumoTeam *,std::vector<SumoTeam>>(&__for_begin, &__for_end) )
            {
              team = __gnu_cxx::__normal_iterator<SumoTeam *,std::vector<SumoTeam>>::operator*(&__for_begin);
              dungeon_team = proto::SumoEnterDungeonNotify::add_dungeon_team_list((proto::SumoEnterDungeonNotify *const)(v2 + 224));
              __for_range_0 = &team->avatar_vec;
              __for_begin_0._M_current = std::vector<SumoAvatar>::begin(&team->avatar_vec)._M_current;
              __for_end_0._M_current = std::vector<SumoAvatar>::end(__for_range_0)._M_current;
              while ( __gnu_cxx::operator!=<SumoAvatar const*,std::vector<SumoAvatar>>(&__for_begin_0, &__for_end_0) )
              {
                sumo_avatar = __gnu_cxx::__normal_iterator<SumoAvatar const*,std::vector<SumoAvatar>>::operator*(&__for_begin_0);
                dungeon_avatar = proto::SumoDungeonTeam::add_dungeon_avatar_list(dungeon_team);
                if ( *(_BYTE *)(((unsigned __int64)&sumo_avatar->in_dungeon_guid >> 3) + 0x7FFF8000) )
                  __asan_report_load8(&sumo_avatar->in_dungeon_guid);
                proto::SumoDungeonAvatar::set_avatar_guid(dungeon_avatar, sumo_avatar->in_dungeon_guid);
                if ( *(char *)(((unsigned __int64)sumo_avatar >> 3) + 0x7FFF8000) < 0 )
                  __asan_report_load1(sumo_avatar);
                proto::SumoDungeonAvatar::set_is_trial(dungeon_avatar, sumo_avatar->is_trial);
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8(&this->player_);
                AvatarComp = Player::getAvatarComp(this->player_);
                if ( *(_BYTE *)(((unsigned __int64)&sumo_avatar->in_dungeon_guid >> 3) + 0x7FFF8000) )
                  __asan_report_load8(&sumo_avatar->in_dungeon_guid);
                PlayerAvatarComp::findAvatar((const PlayerAvatarComp *const)(v2 + 128), (uint64_t)AvatarComp);
                if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v2 + 128)) )
                {
                  common::milog::MiLogStream::create(
                    &v31,
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/player/activity/sumo_activity.cpp",
                    "onPostEnterSceneEvent",
                    1053);
                  v15 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                          &v31,
                          (const char (*)[42])"[SUMO] in dungeon avatar not found, guid:");
                  common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                    v15,
                    &sumo_avatar->in_dungeon_guid);
                  common::milog::MiLogStream::~MiLogStream(&v31);
                }
                else
                {
                  v16 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
                  LifeState = Creature::getLifeState(v16);
                  proto::SumoDungeonAvatar::set_is_avlive(dungeon_avatar, LifeState == LIFE_ALIVE);
                }
                std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 128));
                __gnu_cxx::__normal_iterator<SumoAvatar const*,std::vector<SumoAvatar>>::operator++(&__for_begin_0);
              }
              __gnu_cxx::__normal_iterator<SumoTeam *,std::vector<SumoTeam>>::operator++(&__for_begin);
            }
            if ( *(_BYTE *)(((unsigned __int64)&stage->no_switch_punish_time >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&stage->no_switch_punish_time >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&stage->no_switch_punish_time);
            }
            proto::SumoEnterDungeonNotify::set_no_switch_punish_time(
              (proto::SumoEnterDungeonNotify *const)(v2 + 224),
              stage->no_switch_punish_time);
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 224));
            proto::SumoEnterDungeonNotify::~SumoEnterDungeonNotify((proto::SumoEnterDungeonNotify *const)(v2 + 224));
          }
        }
      }
    }
    std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 96));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 64));
  if ( v32 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
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

// Line 1067: range 0000000017FFE808-0000000017FFF00E
void __fastcall SumoActivity::recallStageDungeonAvatars(SumoActivity *const this, uint32_t stage_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  PlayerAvatarComp *AvatarComp; // rax
  common::milog::MiLogStream *v8; // rax
  std::tuple_element<1,const std::pair<long unsigned int const,std::pair<unsigned int,unsigned int> > >::type *v9; // rax
  std::vector<SumoTeam>::size_type v10; // r15
  std::vector<SumoTeam> *p_sumo_team_vec; // rcx
  std::vector<SumoAvatar>::size_type v12; // r15
  SumoTeam *v13; // rcx
  std::vector<SumoAvatar>::size_type v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rdx
  std::map<long unsigned int,std::pair<unsigned int,unsigned int>>::iterator __for_begin; // [rsp+18h] [rbp-148h] BYREF
  std::map<long unsigned int,std::pair<unsigned int,unsigned int>>::iterator __for_end; // [rsp+20h] [rbp-140h] BYREF
  SumoStage *stage; // [rsp+28h] [rbp-138h]
  std::map<long unsigned int,std::pair<unsigned int,unsigned int>> *__for_range; // [rsp+30h] [rbp-130h]
  const std::pair<long unsigned int const,std::pair<unsigned int,unsigned int> > *v21; // [rsp+38h] [rbp-128h]
  std::tuple_element<0,const std::pair<long unsigned int const,std::pair<unsigned int,unsigned int> > >::type *_; // [rsp+40h] [rbp-120h]
  std::tuple_element<1,const std::pair<long unsigned int const,std::pair<unsigned int,unsigned int> > >::type *team_index_pair; // [rsp+48h] [rbp-118h]
  std::tuple_element<0,std::pair<unsigned int,unsigned int> >::type *team_idx; // [rsp+50h] [rbp-110h]
  std::tuple_element<1,std::pair<unsigned int,unsigned int> >::type *avatar_idx; // [rsp+58h] [rbp-108h]
  SumoTeam *team; // [rsp+60h] [rbp-100h]
  std::pair<unsigned int,unsigned int> __in; // [rsp+68h] [rbp-F8h] BYREF
  common::milog::MiLogStream v28; // [rsp+70h] [rbp-F0h] BYREF
  char v29[208]; // [rsp+90h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 stage_id:1066 64 8 15 stage_iter:1068 96 24 27 in_dungeon_avatar_guid:1075";
  *(_QWORD *)(v2 + 16) = SumoActivity::recallStageDungeonAvatars;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  *(_DWORD *)(v2 + 48) = stage_id;
  *(std::map<unsigned int,SumoStage>::iterator *)(v2 + 64) = std::map<unsigned int,SumoStage>::find(
                                                               &this->sumo_stage_map_,
                                                               (const std::map<unsigned int,SumoStage>::key_type *)(v2 + 48));
  __in = (std::pair<unsigned int,unsigned int>)std::map<unsigned int,SumoStage>::end(&this->sumo_stage_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,SumoStage> >::_Self *)(v2 + 64),
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,SumoStage> >::_Self *)&__in) )
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/sumo_activity.cpp",
      "recallStageDungeonAvatars",
      1071);
    v5 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v28,
           (const char (*)[34])"[SUMO] stage not found, stage_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v28);
  }
  else
  {
    stage = std::map<unsigned int,SumoStage>::operator[](
              &this->sumo_stage_map_,
              (const std::map<unsigned int,SumoStage>::key_type *)(v2 + 48));
    common::tools::MiscUtils::getAllMapKeys<std::map<unsigned long,std::pair<unsigned int,unsigned int>>>(
      (std::vector<long unsigned int> *)(v2 + 96),
      &stage->in_dungeon_avatar_team_index_map);
    if ( std::vector<unsigned long>::empty((const std::vector<long unsigned int> *const)(v2 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/sumo_activity.cpp",
        "recallStageDungeonAvatars",
        1078);
      v6 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
             &v28,
             (const char (*)[45])"[SUMO] stage avatar team is empty, stage_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v28);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      AvatarComp = Player::getAvatarComp(this->player_);
      if ( PlayerAvatarComp::delInformalAvatarBatchAndReplaceByAvatarTeam(
             AvatarComp,
             (const std::vector<long unsigned int> *)(v2 + 96)) )
      {
        common::milog::MiLogStream::create(
          &v28,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/sumo_activity.cpp",
          "recallStageDungeonAvatars",
          1083);
        v8 = common::milog::MiLogStream::operator<<<char [70],(char *[70])0>(
               &v28,
               (const char (*)[70])"[SUMO] delInformalAvatarBatchAndReplaceByAvatarTeam failed, stage_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v28);
      }
      __for_range = &stage->in_dungeon_avatar_team_index_map;
      __for_begin._M_node = std::map<unsigned long,std::pair<unsigned int,unsigned int>>::begin(&stage->in_dungeon_avatar_team_index_map)._M_node;
      __for_end._M_node = std::map<unsigned long,std::pair<unsigned int,unsigned int>>::end(&stage->in_dungeon_avatar_team_index_map)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        v21 = std::_Rb_tree_iterator<std::pair<unsigned long const,std::pair<unsigned int,unsigned int>>>::operator*(&__for_begin);
        _ = std::get<0ul,unsigned long const,std::pair<unsigned int,unsigned int>>(v21);
        v9 = (std::tuple_element<1,const std::pair<long unsigned int const,std::pair<unsigned int,unsigned int> > >::type *)std::get<1ul,unsigned long const,std::pair<unsigned int,unsigned int>>(v21);
        team_index_pair = v9;
        if ( ((unsigned __int8)v9 & 7) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&v9->second + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)v9 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v9->second + 3) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load_n(v9, 8LL);
        }
        __in = *team_index_pair;
        team_idx = std::get<0ul,unsigned int,unsigned int>(&__in);
        avatar_idx = std::get<1ul,unsigned int,unsigned int>(&__in);
        if ( *(_BYTE *)(((unsigned __int64)team_idx >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)team_idx & 7) + 3) >= *(_BYTE *)(((unsigned __int64)team_idx >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(team_idx);
        }
        v10 = *team_idx;
        if ( v10 < std::vector<SumoTeam>::size(&stage->sumo_team_vec) )
        {
          p_sumo_team_vec = &stage->sumo_team_vec;
          if ( *(_BYTE *)(((unsigned __int64)team_idx >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)team_idx & 7) + 3) >= *(_BYTE *)(((unsigned __int64)team_idx >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(team_idx);
          }
          team = std::vector<SumoTeam>::operator[](p_sumo_team_vec, *team_idx);
          if ( *(_BYTE *)(((unsigned __int64)avatar_idx >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)avatar_idx & 7) + 3) >= *(_BYTE *)(((unsigned __int64)avatar_idx >> 3)
                                                                         + 0x7FFF8000) )
          {
            __asan_report_load4(avatar_idx);
          }
          v12 = *avatar_idx;
          if ( v12 < std::vector<SumoAvatar>::size(&team->avatar_vec) )
          {
            v13 = team;
            if ( *(_BYTE *)(((unsigned __int64)avatar_idx >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)avatar_idx & 7) + 3) >= *(_BYTE *)(((unsigned __int64)avatar_idx >> 3)
                                                                           + 0x7FFF8000) )
            {
              __asan_report_load4(avatar_idx);
            }
            v14 = *avatar_idx;
            v15 = (__int64)std::vector<SumoAvatar>::operator[](&v13->avatar_vec, v14);
            if ( *(_BYTE *)(((unsigned __int64)(v15 + 16) >> 3) + 0x7FFF8000) )
              v15 = __asan_report_store8(v15 + 16, v14);
            *(_QWORD *)(v15 + 16) = 0LL;
          }
        }
        std::_Rb_tree_iterator<std::pair<unsigned long const,std::pair<unsigned int,unsigned int>>>::operator++(&__for_begin);
      }
      std::map<unsigned long,std::pair<unsigned int,unsigned int>>::clear(&stage->in_dungeon_avatar_team_index_map);
      if ( *(_BYTE *)(((unsigned __int64)&stage->cur_team_index >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&stage->cur_team_index >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&stage->cur_team_index, &__for_end, &stage->cur_team_index);
      }
      stage->cur_team_index = 0;
      v16 = (*(_BYTE *)(((unsigned __int64)&stage->next_switch_team_time >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)stage - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&stage->next_switch_team_time >> 3) + 0x7FFF8000));
      if ( (_BYTE)v16 )
        __asan_report_store4(&stage->next_switch_team_time, (((_BYTE)stage - 68) & 7u) + 3, v16);
      stage->next_switch_team_time = 0;
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/sumo_activity.cpp",
        "recallStageDungeonAvatars",
        1102);
      common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
        &v28,
        (const char (*)[39])"[SUMO] recallStageDungeonAvatars succ.");
      common::milog::MiLogStream::~MiLogStream(&v28);
    }
    std::vector<unsigned long>::~vector((std::vector<long unsigned int> *const)(v2 + 96));
  }
  if ( v29 == (char *)v2 )
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

// Line 1107: range 0000000017FFF010-0000000017FFF38D
void __fastcall SumoActivity::onDungeonSettle(
        SumoActivity *const this,
        DungeonScene *dungeon_scene,
        uint32_t stage_id,
        proto::DungeonSettleNotify *notify)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // rbx
  common::milog::MiLogStream *v8; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,SumoStage> >::_Self __y; // [rsp+20h] [rbp-F0h] BYREF
  SumoDungeonContext *dungeon_context; // [rsp+28h] [rbp-E8h]
  common::milog::MiLogStream v12; // [rsp+30h] [rbp-E0h] BYREF
  char v13[192]; // [rsp+50h] [rbp-C0h] BYREF

  v4 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 4 13 stage_id:1106 64 8 15 stage_iter:1119 96 24 24 dungeon_context_opt:1112";
  *(_QWORD *)(v4 + 16) = SumoActivity::onDungeonSettle;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -218959360;
  v6[536862723] = -218103808;
  v6[536862724] = -202116109;
  *(_DWORD *)(v4 + 48) = stage_id;
  if ( BaseActivity::isOpening(this, 0) && !BaseActivity::isFinished(this) )
  {
    DungeonScene::getDungeonExtraData<SumoDungeonContext>((std::optional<SumoDungeonContext> *)(v4 + 96), dungeon_scene);
    if ( !std::optional<SumoDungeonContext>::has_value((const std::optional<SumoDungeonContext> *const)(v4 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/sumo_activity.cpp",
        "onDungeonSettle",
        1115);
      common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
        &v12,
        (const char (*)[39])"[SUMO] cur dungeon is not sumo dungeon");
      common::milog::MiLogStream::~MiLogStream(&v12);
    }
    else
    {
      dungeon_context = std::optional<SumoDungeonContext>::value((std::optional<SumoDungeonContext> *const)(v4 + 96));
      *(std::map<unsigned int,SumoStage>::iterator *)(v4 + 64) = std::map<unsigned int,SumoStage>::find(
                                                                   &this->sumo_stage_map_,
                                                                   &dungeon_context->stage_id);
      __y._M_node = std::map<unsigned int,SumoStage>::end(&this->sumo_stage_map_)._M_node;
      if ( std::operator==(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,SumoStage> >::_Self *)(v4 + 64),
             &__y) )
      {
        common::milog::MiLogStream::create(
          &v12,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/sumo_activity.cpp",
          "onDungeonSettle",
          1122);
        v8 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
               &v12,
               (const char (*)[34])"[SUMO] stage not found, stage_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 48));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v12,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/sumo_activity.cpp",
          "onDungeonSettle",
          1125);
        common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
          &v12,
          (const char (*)[29])"[SUMO] stage dungeon settled");
      }
      common::milog::MiLogStream::~MiLogStream(&v12);
    }
  }
  if ( v13 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 1130: range 0000000017FFF38E-0000000017FFF503
void __cdecl SumoActivity::checkAvatarWhenLogin(SumoActivity *const this)
{
  common::milog::MiLogStream *v1; // rax
  std::map<unsigned int,SumoStage>::iterator __for_begin; // [rsp+10h] [rbp-60h] BYREF
  std::map<unsigned int,SumoStage>::iterator __for_end; // [rsp+18h] [rbp-58h] BYREF
  std::map<unsigned int,SumoStage> *__for_range; // [rsp+20h] [rbp-50h]
  const std::pair<unsigned int const,SumoStage> *v5; // [rsp+28h] [rbp-48h]
  std::tuple_element<0,const std::pair<unsigned int const,SumoStage> >::type *_; // [rsp+30h] [rbp-40h]
  std::tuple_element<1,const std::pair<unsigned int const,SumoStage> >::type *stage; // [rsp+38h] [rbp-38h]
  common::milog::MiLogStream v8; // [rsp+40h] [rbp-30h] BYREF

  __for_range = &this->sumo_stage_map_;
  __for_begin._M_node = std::map<unsigned int,SumoStage>::begin(&this->sumo_stage_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,SumoStage>::end(&this->sumo_stage_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v5 = std::_Rb_tree_iterator<std::pair<unsigned int const,SumoStage>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,SumoStage>(v5);
    stage = (std::tuple_element<1,const std::pair<unsigned int const,SumoStage> >::type *)std::get<1ul,unsigned int const,SumoStage>(v5);
    if ( !std::map<unsigned long,std::pair<unsigned int,unsigned int>>::empty(&stage->in_dungeon_avatar_team_index_map) )
    {
      common::milog::MiLogStream::create(
        &v8,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/sumo_activity.cpp",
        "checkAvatarWhenLogin",
        1135);
      v1 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
             &v8,
             (const char (*)[45])"[SUMO] stage avatar not recalled!, stage_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, &stage->stage_id);
      common::milog::MiLogStream::~MiLogStream(&v8);
      if ( *(_BYTE *)(((unsigned __int64)stage >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)stage >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(stage);
      }
      SumoActivity::recallStageDungeonAvatars(this, stage->stage_id);
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,SumoStage>>::operator++(&__for_begin);
  }
};

// Line 1142: range 0000000017FFF504-0000000017FFFB70
__int64 __fastcall SumoActivity::addTeamAbilityGroup(SumoActivity *const this, uint32_t stage_id, uint32_t team_index)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,SumoStage> >::pointer v8; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v9; // rax
  _DWORD *v10; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  PlayerAbilityGroupComp *AbilityGroupComp; // r14
  common::milog::MiLogStream *i; // r14
  PlayerAbilityGroupComp *v15; // rax
  std::initializer_list<std::string > __l; // [rsp+0h] [rbp-140h]
  std::allocator<std::string > __a; // [rsp+2Fh] [rbp-111h] BYREF
  std::vector<unsigned int>::iterator __for_begin; // [rsp+30h] [rbp-110h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+38h] [rbp-108h] BYREF
  SumoStage *stage; // [rsp+40h] [rbp-100h]
  SumoTeam *team; // [rsp+48h] [rbp-F8h]
  std::vector<unsigned int> *__for_range; // [rsp+50h] [rbp-F0h]
  const data::ActivitySumoSwitchSkillExcelConfig *sumo_skill_config_ptr; // [rsp+58h] [rbp-E8h]
  std::shared_ptr<Config> v25; // [rsp+60h] [rbp-E0h] BYREF
  std::vector<std::string> group_vec; // [rsp+70h] [rbp-D0h] BYREF
  common::milog::MiLogStream v27; // [rsp+90h] [rbp-B0h] BYREF
  char v28[144]; // [rsp+B0h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 22 selected_skill_id:1156 48 4 13 stage_id:1141 64 8 15 stage_iter:1143";
  *(_QWORD *)(v3 + 16) = SumoActivity::addTeamAbilityGroup;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = stage_id;
  *(std::map<unsigned int,SumoStage>::iterator *)(v3 + 64) = std::map<unsigned int,SumoStage>::find(
                                                               &this->sumo_stage_map_,
                                                               (const std::map<unsigned int,SumoStage>::key_type *)(v3 + 48));
  __for_end._M_current = (unsigned int *)std::map<unsigned int,SumoStage>::end(&this->sumo_stage_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,SumoStage> >::_Self *)(v3 + 64),
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,SumoStage> >::_Self *)&__for_end) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/sumo_activity.cpp",
      "addTeamAbilityGroup",
      1146);
    v6 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v27,
           (const char (*)[34])"[SUMO] stage not found, stage_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v27);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    v8 = std::_Rb_tree_iterator<std::pair<unsigned int const,SumoStage>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,SumoStage> > *const)(v3 + 64));
    stage = &v8->second;
    if ( team_index < std::vector<SumoTeam>::size(&v8->second.sumo_team_vec) )
    {
      team = std::vector<SumoTeam>::operator[](&stage->sumo_team_vec, team_index);
      __for_range = &team->selected_skill_id_vec;
      __for_begin._M_current = std::vector<unsigned int>::begin(&team->selected_skill_id_vec)._M_current;
      __for_end._M_current = std::vector<unsigned int>::end(__for_range)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
      {
        v9 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
        v10 = v9;
        if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v9);
        }
        *(_DWORD *)(v3 + 32) = *v10;
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v25);
        v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v25);
        sumo_skill_config_ptr = data::ActivitySumoExcelConfigMgrBase::findActivitySumoSwitchSkillExcelConfig(
                                  &v11->design_config.txt_config_mgr.activity_sumo_config_mgr,
                                  *(_DWORD *)(v3 + 32));
        std::shared_ptr<Config>::~shared_ptr(&v25);
        if ( sumo_skill_config_ptr )
        {
          if ( (unsigned __int8)std::string::empty(&sumo_skill_config_ptr->ability_group_name) != 1 )
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            AbilityGroupComp = Player::getAbilityGroupComp(this->player_);
            std::string::basic_string(&v27, &sumo_skill_config_ptr->ability_group_name);
            __l._M_array = (std::initializer_list<std::string >::iterator)&v27;
            __l._M_len = 1LL;
            std::allocator<std::string>::allocator(&__a);
            std::vector<std::string>::vector(&group_vec, __l, &__a);
            PlayerAbilityGroupComp::addNoneFilterAbilityGroup(AbilityGroupComp, &group_vec, 0);
            std::vector<std::string>::~vector(&group_vec);
            std::allocator<std::string>::~allocator(&__a);
            for ( i = (common::milog::MiLogStream *)v28; i != &v27; std::string::~string(i) )
              --i;
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v27,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/activity/sumo_activity.cpp",
            "addTeamAbilityGroup",
            1161);
          v12 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                  &v27,
                  (const char (*)[41])"[SUMO] skill config not found, skill_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 32));
          common::milog::MiLogStream::~MiLogStream(&v27);
        }
        __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      v15 = Player::getAbilityGroupComp(this->player_);
      PlayerAbilityGroupComp::tryRefreshAbilityGroup(v15);
      result = 0LL;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/sumo_activity.cpp",
        "addTeamAbilityGroup",
        1152);
      common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
        &v27,
        (const char (*)[31])"[SUMO] team_index out of range");
      common::milog::MiLogStream::~MiLogStream(&v27);
      result = 0xFFFFFFFFLL;
    }
  }
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

// Line 1175: range 0000000017FFFB72-00000000180001D9
__int64 __fastcall SumoActivity::delTeamAbilityGroup(SumoActivity *const this, uint32_t stage_id, uint32_t team_index)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,SumoStage> >::pointer v8; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v9; // rax
  _DWORD *v10; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  PlayerAbilityGroupComp *AbilityGroupComp; // r14
  common::milog::MiLogStream *i; // r14
  PlayerAbilityGroupComp *v15; // rax
  std::initializer_list<std::string > __l; // [rsp+0h] [rbp-140h]
  std::allocator<std::string > __a; // [rsp+2Fh] [rbp-111h] BYREF
  std::vector<unsigned int>::iterator __for_begin; // [rsp+30h] [rbp-110h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+38h] [rbp-108h] BYREF
  SumoStage *stage; // [rsp+40h] [rbp-100h]
  SumoTeam *team; // [rsp+48h] [rbp-F8h]
  std::vector<unsigned int> *__for_range; // [rsp+50h] [rbp-F0h]
  const data::ActivitySumoSwitchSkillExcelConfig *sumo_skill_config_ptr; // [rsp+58h] [rbp-E8h]
  std::shared_ptr<Config> v25; // [rsp+60h] [rbp-E0h] BYREF
  std::vector<std::string> group_vec; // [rsp+70h] [rbp-D0h] BYREF
  common::milog::MiLogStream v27; // [rsp+90h] [rbp-B0h] BYREF
  char v28[144]; // [rsp+B0h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 22 selected_skill_id:1189 48 4 13 stage_id:1174 64 8 15 stage_iter:1176";
  *(_QWORD *)(v3 + 16) = SumoActivity::delTeamAbilityGroup;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = stage_id;
  *(std::map<unsigned int,SumoStage>::iterator *)(v3 + 64) = std::map<unsigned int,SumoStage>::find(
                                                               &this->sumo_stage_map_,
                                                               (const std::map<unsigned int,SumoStage>::key_type *)(v3 + 48));
  __for_end._M_current = (unsigned int *)std::map<unsigned int,SumoStage>::end(&this->sumo_stage_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,SumoStage> >::_Self *)(v3 + 64),
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,SumoStage> >::_Self *)&__for_end) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/sumo_activity.cpp",
      "delTeamAbilityGroup",
      1179);
    v6 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v27,
           (const char (*)[34])"[SUMO] stage not found, stage_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v27);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    v8 = std::_Rb_tree_iterator<std::pair<unsigned int const,SumoStage>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,SumoStage> > *const)(v3 + 64));
    stage = &v8->second;
    if ( team_index < std::vector<SumoTeam>::size(&v8->second.sumo_team_vec) )
    {
      team = std::vector<SumoTeam>::operator[](&stage->sumo_team_vec, team_index);
      __for_range = &team->selected_skill_id_vec;
      __for_begin._M_current = std::vector<unsigned int>::begin(&team->selected_skill_id_vec)._M_current;
      __for_end._M_current = std::vector<unsigned int>::end(__for_range)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
      {
        v9 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
        v10 = v9;
        if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v9);
        }
        *(_DWORD *)(v3 + 32) = *v10;
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v25);
        v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v25);
        sumo_skill_config_ptr = data::ActivitySumoExcelConfigMgrBase::findActivitySumoSwitchSkillExcelConfig(
                                  &v11->design_config.txt_config_mgr.activity_sumo_config_mgr,
                                  *(_DWORD *)(v3 + 32));
        std::shared_ptr<Config>::~shared_ptr(&v25);
        if ( sumo_skill_config_ptr )
        {
          if ( (unsigned __int8)std::string::empty(&sumo_skill_config_ptr->ability_group_name) != 1 )
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            AbilityGroupComp = Player::getAbilityGroupComp(this->player_);
            std::string::basic_string(&v27, &sumo_skill_config_ptr->ability_group_name);
            __l._M_array = (std::initializer_list<std::string >::iterator)&v27;
            __l._M_len = 1LL;
            std::allocator<std::string>::allocator(&__a);
            std::vector<std::string>::vector(&group_vec, __l, &__a);
            PlayerAbilityGroupComp::delNoneFilterAbilityGroup(AbilityGroupComp, &group_vec);
            std::vector<std::string>::~vector(&group_vec);
            std::allocator<std::string>::~allocator(&__a);
            for ( i = (common::milog::MiLogStream *)v28; i != &v27; std::string::~string(i) )
              --i;
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v27,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/activity/sumo_activity.cpp",
            "delTeamAbilityGroup",
            1194);
          v12 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                  &v27,
                  (const char (*)[41])"[SUMO] skill config not found, skill_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 32));
          common::milog::MiLogStream::~MiLogStream(&v27);
        }
        __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      v15 = Player::getAbilityGroupComp(this->player_);
      PlayerAbilityGroupComp::tryRefreshAbilityGroup(v15);
      result = 0LL;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/sumo_activity.cpp",
        "delTeamAbilityGroup",
        1185);
      common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
        &v27,
        (const char (*)[31])"[SUMO] team_index out of range");
      common::milog::MiLogStream::~MiLogStream(&v27);
      result = 0xFFFFFFFFLL;
    }
  }
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

// Line 1208: range 00000000180001DA-000000001800136D
void __cdecl SumoActivity::onGallerySumoCombatSettleEvent(
        SumoActivity *const this,
        const GallerySumoCombatSettleEvent *event)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v6; // rax
  PlayerBasicComp *BasicComp; // rax
  uint32_t score; // ecx
  uint32_t *p_score; // rsi
  uint32_t *v11; // rax
  uint32_t *v12; // rdx
  uint32_t v13; // ecx
  char v14; // dl
  __int64 v15; // rdx
  uint32_t *p_max_score; // rax
  PlayerWatcherComp *WatcherComp; // rdi
  uint32_t v18; // ecx
  uint32_t stage_id; // edx
  std::__shared_ptr_access<proto_log::PlayerLogBodySumoActivityGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // r14
  DungeonScene *v21; // rax
  const std::string *v22; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodySumoActivityGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  uint32_t DungeonId; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodySumoActivityGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodySumoActivityGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodySumoActivityGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  PlayerAvatarComp *AvatarComp; // rcx
  common::milog::MiLogStream *v30; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rax
  uint32_t AvatarId; // eax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rax
  uint32_t Level; // eax
  unsigned int *v35; // rax
  google::protobuf::uint32 *v36; // rdx
  std::__shared_ptr_access<proto_log::PlayerLogBodySumoActivityGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rax
  google::protobuf::RepeatedField<unsigned int> *v38; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodySumoActivityGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v39; // rax
  google::protobuf::RepeatedField<unsigned int> *v40; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodySumoActivityGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v41; // rax
  google::protobuf::RepeatedField<unsigned int> *v42; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodySumoActivityGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v43; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodySumoActivityGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v44; // rcx
  Player *player; // r14
  std::string eventa; // [rsp+0h] [rbp-200h]
  const GallerySumoCombatSettleEvent *eventb; // [rsp+0h] [rbp-200h]
  SumoActivity *thisa; // [rsp+8h] [rbp-1F8h]
  uint32_t total_stage_max_score; // [rsp+18h] [rbp-1E8h]
  std::vector<SumoTeam>::iterator __for_begin_0; // [rsp+20h] [rbp-1E0h] BYREF
  std::vector<SumoTeam>::iterator __for_end_0; // [rsp+28h] [rbp-1D8h] BYREF
  std::map<unsigned int,SumoStage>::iterator __for_begin; // [rsp+30h] [rbp-1D0h] BYREF
  std::map<unsigned int,SumoStage>::iterator __for_end; // [rsp+38h] [rbp-1C8h] BYREF
  SumoStage *stage; // [rsp+40h] [rbp-1C0h]
  std::map<unsigned int,SumoStage> *__for_range; // [rsp+48h] [rbp-1B8h]
  const std::pair<unsigned int const,SumoStage> *v56; // [rsp+50h] [rbp-1B0h]
  std::tuple_element<0,const std::pair<unsigned int const,SumoStage> >::type *_; // [rsp+58h] [rbp-1A8h]
  std::tuple_element<1,const std::pair<unsigned int const,SumoStage> >::type *stage_0; // [rsp+60h] [rbp-1A0h]
  std::vector<SumoTeam> *__for_range_0; // [rsp+68h] [rbp-198h]
  const SumoTeam *team; // [rsp+70h] [rbp-190h]
  proto_log::SumoTeamInfo *log_team; // [rsp+78h] [rbp-188h]
  const std::vector<SumoAvatar> *__for_range_1; // [rsp+80h] [rbp-180h]
  const std::vector<unsigned int> *__for_range_2; // [rsp+88h] [rbp-178h]
  const SumoAvatar *sumo_avatar; // [rsp+90h] [rbp-170h]
  proto_log::SumoAvatarInfo *log_avatar; // [rsp+98h] [rbp-168h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+A0h] [rbp-160h] BYREF
  common::milog::MiLogStream v67; // [rsp+B0h] [rbp-150h] BYREF
  char v68[304]; // [rsp+D0h] [rbp-130h] BYREF

  eventa._M_string_length = (std::string::size_type)this;
  eventa._M_dataplus._M_p = (std::string::pointer)event;
  v2 = (unsigned __int64)v68;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 1 23 log_context_holder:1222 48 8 15 stage_iter:1213 80 16 20 cur_dungeon_ptr:1220 112 16 1"
                        "2 log_ptr:1250 144 16 15 avatar_ptr:1262 176 48 11 notify:1227";
  *(_QWORD *)(v2 + 16) = SumoActivity::onGallerySumoCombatSettleEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61953;
  v4[536862721] = -234881024;
  v4[536862722] = 62194;
  v4[536862723] = 62194;
  v4[536862724] = 62194;
  v4[536862725] = 62194;
  v4[536862727] = -202116109;
  if ( BaseActivity::isOpening(this, 0) && !BaseActivity::isFinished(this) )
  {
    *(std::map<unsigned int,SumoStage>::iterator *)(v2 + 48) = std::map<unsigned int,SumoStage>::find(
                                                                 &this->sumo_stage_map_,
                                                                 &event->stage_id);
    __for_end._M_node = std::map<unsigned int,SumoStage>::end(&this->sumo_stage_map_)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,SumoStage> >::_Self *)(v2 + 48),
           &__for_end) )
    {
      common::milog::MiLogStream::create(
        &v67,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/sumo_activity.cpp",
        "onGallerySumoCombatSettleEvent",
        1216);
      v6 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
             &v67,
             (const char (*)[34])"[SUMO] stage not found, stage_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &event->stage_id);
      common::milog::MiLogStream::~MiLogStream(&v67);
    }
    else
    {
      stage = &std::_Rb_tree_iterator<std::pair<unsigned int const,SumoStage>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,SumoStage> > *const)(v2 + 48))->second;
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      Player::getDungeonComp(this->player_);
      PlayerDungeonComp::getCurDungeon((PlayerDungeonComp *const)(v2 + 80));
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      BasicComp = Player::getBasicComp(this->player_);
      PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v67, BasicComp);
      StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32), 0xDBCu, eventa);
      std::string::~string(&v67);
      if ( BaseActivity::isOpening(thisa, 0) && !BaseActivity::isFinished(thisa) )
      {
        if ( *(char *)(((unsigned __int64)&eventb->is_succ >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(&eventb->is_succ);
        if ( eventb->is_succ )
        {
          proto::SumoDungeonSettleNotify::SumoDungeonSettleNotify((proto::SumoDungeonSettleNotify *const)(v2 + 176));
          if ( *(_BYTE *)(((unsigned __int64)&eventb->stage_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)eventb + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&eventb->stage_id >> 3)
                                                                  + 0x7FFF8000) )
          {
            __asan_report_load4(&eventb->stage_id);
          }
          proto::SumoDungeonSettleNotify::set_stage_id(
            (proto::SumoDungeonSettleNotify *const)(v2 + 176),
            eventb->stage_id);
          if ( *(_BYTE *)(((unsigned __int64)&eventb->difficulty_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&eventb->difficulty_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&eventb->difficulty_id);
          }
          proto::SumoDungeonSettleNotify::set_difficulty_id(
            (proto::SumoDungeonSettleNotify *const)(v2 + 176),
            eventb->difficulty_id);
          if ( *(_BYTE *)(((unsigned __int64)&eventb->score >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)eventb + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&eventb->score >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(&eventb->score);
          }
          proto::SumoDungeonSettleNotify::set_final_score(
            (proto::SumoDungeonSettleNotify *const)(v2 + 176),
            eventb->score);
          if ( *(_BYTE *)(((unsigned __int64)&eventb->score >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)eventb + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&eventb->score >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(&eventb->score);
          }
          score = eventb->score;
          if ( *(_BYTE *)(((unsigned __int64)&stage->max_score >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)stage + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&stage->max_score >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(&stage->max_score);
          }
          proto::SumoDungeonSettleNotify::set_is_new_record(
            (proto::SumoDungeonSettleNotify *const)(v2 + 176),
            score > stage->max_score);
          if ( *(_BYTE *)(((unsigned __int64)&eventb->kill_normal_monster_num >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&eventb->kill_normal_monster_num >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&eventb->kill_normal_monster_num);
          }
          proto::SumoDungeonSettleNotify::set_kill_monster_num(
            (proto::SumoDungeonSettleNotify *const)(v2 + 176),
            eventb->kill_normal_monster_num);
          if ( *(_BYTE *)(((unsigned __int64)&eventb->kill_special_monster_num >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)eventb + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&eventb->kill_special_monster_num >> 3)
                                                                  + 0x7FFF8000) )
          {
            __asan_report_load4(&eventb->kill_special_monster_num);
          }
          proto::SumoDungeonSettleNotify::set_kill_elite_monster_num(
            (proto::SumoDungeonSettleNotify *const)(v2 + 176),
            eventb->kill_special_monster_num);
          if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&thisa->player_);
          Player::sendProto(thisa->player_, (const google::protobuf::Message *)(v2 + 176));
          p_score = &eventb->score;
          v11 = (uint32_t *)std::max<unsigned int>(&stage->max_score, &eventb->score);
          v12 = v11;
          if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v11);
          }
          v13 = *v12;
          v14 = *(_BYTE *)(((unsigned __int64)&stage->max_score >> 3) + 0x7FFF8000);
          LOBYTE(p_score) = v14 != 0;
          v15 = (v14 != 0) & (unsigned __int8)((char)((((_BYTE)stage + 4) & 7) + 3) >= v14);
          if ( (_BYTE)v15 )
            __asan_report_store4(&stage->max_score, p_score, v15);
          stage->max_score = v13;
          total_stage_max_score = 0;
          __for_range = &thisa->sumo_stage_map_;
          __for_begin._M_node = std::map<unsigned int,SumoStage>::begin(&thisa->sumo_stage_map_)._M_node;
          __for_end._M_node = std::map<unsigned int,SumoStage>::end(__for_range)._M_node;
          while ( std::operator!=(&__for_begin, &__for_end) )
          {
            v56 = std::_Rb_tree_iterator<std::pair<unsigned int const,SumoStage>>::operator*(&__for_begin);
            _ = std::get<0ul,unsigned int const,SumoStage>(v56);
            stage_0 = (std::tuple_element<1,const std::pair<unsigned int const,SumoStage> >::type *)std::get<1ul,unsigned int const,SumoStage>(v56);
            p_max_score = &stage_0->max_score;
            if ( *(_BYTE *)(((unsigned __int64)p_max_score >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)p_max_score & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_max_score >> 3)
                                                                            + 0x7FFF8000) )
            {
              __asan_report_load4(p_max_score);
            }
            total_stage_max_score += stage_0->max_score;
            std::_Rb_tree_iterator<std::pair<unsigned int const,SumoStage>>::operator++(&__for_begin);
          }
          if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&thisa->player_);
          WatcherComp = Player::getWatcherComp(thisa->player_);
          if ( *(_BYTE *)(((unsigned __int64)&eventb->score >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)eventb + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&eventb->score >> 3) + 0x7FFF8000) )
          {
            WatcherComp = (PlayerWatcherComp *)&eventb->score;
            __asan_report_load4(&eventb->score);
          }
          v18 = eventb->score;
          if ( *(_BYTE *)(((unsigned __int64)&eventb->stage_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)eventb + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&eventb->stage_id >> 3)
                                                                  + 0x7FFF8000) )
          {
            WatcherComp = (PlayerWatcherComp *)&eventb->stage_id;
            __asan_report_load4(&eventb->stage_id);
          }
          stage_id = eventb->stage_id;
          if ( *(_BYTE *)(((unsigned __int64)&thisa->activity_id_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&thisa->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
          {
            WatcherComp = (PlayerWatcherComp *)&thisa->activity_id_;
            __asan_report_load4(&thisa->activity_id_);
          }
          PlayerWatcherComp::triggerSumoGallerySettleEvent(
            WatcherComp,
            thisa->activity_id_,
            stage_id,
            v18,
            total_stage_max_score);
          BaseActivity::notifyClientData(thisa, 0);
          proto::SumoDungeonSettleNotify::~SumoDungeonSettleNotify((proto::SumoDungeonSettleNotify *const)(v2 + 176));
        }
        if ( std::operator!=<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v2 + 80), 0LL) )
        {
          common::tools::perf::make_shared<proto_log::PlayerLogBodySumoActivityGallerySettle>();
          v20 = std::__shared_ptr_access<proto_log::PlayerLogBodySumoActivityGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodySumoActivityGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
          v21 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
          v22 = DungeonScene::getTransaction[abi:cxx11](v21);
          proto_log::PlayerLogBodySumoActivityGallerySettle::set_dungeon_transaction(v20, v22);
          v23 = std::__shared_ptr_access<proto_log::PlayerLogBodySumoActivityGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodySumoActivityGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
          v24 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
          DungeonId = DungeonScene::getDungeonId(v24);
          proto_log::PlayerLogBodySumoActivityGallerySettle::set_dungeon_id(v23, DungeonId);
          v26 = std::__shared_ptr_access<proto_log::PlayerLogBodySumoActivityGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodySumoActivityGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
          if ( *(_BYTE *)(((unsigned __int64)&eventb->difficulty_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&eventb->difficulty_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&eventb->difficulty_id);
          }
          proto_log::PlayerLogBodySumoActivityGallerySettle::set_difficulty_id(v26, eventb->difficulty_id);
          v27 = std::__shared_ptr_access<proto_log::PlayerLogBodySumoActivityGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodySumoActivityGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
          if ( *(_BYTE *)(((unsigned __int64)&eventb->score >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)eventb + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&eventb->score >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(&eventb->score);
          }
          proto_log::PlayerLogBodySumoActivityGallerySettle::set_score(v27, eventb->score);
          __for_range_0 = &stage->sumo_team_vec;
          __for_begin_0._M_current = std::vector<SumoTeam>::begin(&stage->sumo_team_vec)._M_current;
          __for_end_0._M_current = std::vector<SumoTeam>::end(__for_range_0)._M_current;
          while ( __gnu_cxx::operator!=<SumoTeam *,std::vector<SumoTeam>>(&__for_begin_0, &__for_end_0) )
          {
            team = __gnu_cxx::__normal_iterator<SumoTeam *,std::vector<SumoTeam>>::operator*(&__for_begin_0);
            v28 = std::__shared_ptr_access<proto_log::PlayerLogBodySumoActivityGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodySumoActivityGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
            log_team = proto_log::PlayerLogBodySumoActivityGallerySettle::add_team_list(v28);
            __for_range_1 = &team->avatar_vec;
            __for_begin._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,SumoStage> >::_Base_ptr)std::vector<SumoAvatar>::begin(&team->avatar_vec)._M_current;
            __for_end._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,SumoStage> >::_Base_ptr)std::vector<SumoAvatar>::end(__for_range_1)._M_current;
            while ( __gnu_cxx::operator!=<SumoAvatar const*,std::vector<SumoAvatar>>(
                      (const __gnu_cxx::__normal_iterator<const SumoAvatar*,std::vector<SumoAvatar> > *)&__for_begin,
                      (const __gnu_cxx::__normal_iterator<const SumoAvatar*,std::vector<SumoAvatar> > *)&__for_end) )
            {
              sumo_avatar = __gnu_cxx::__normal_iterator<SumoAvatar const*,std::vector<SumoAvatar>>::operator*((const __gnu_cxx::__normal_iterator<const SumoAvatar*,std::vector<SumoAvatar> > *const)&__for_begin);
              log_avatar = proto_log::SumoTeamInfo::add_avatar_info_list(log_team);
              if ( *(char *)(((unsigned __int64)sumo_avatar >> 3) + 0x7FFF8000) < 0 )
                __asan_report_load1(sumo_avatar);
              proto_log::SumoAvatarInfo::set_is_trial(log_avatar, sumo_avatar->is_trial);
              if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&thisa->player_);
              AvatarComp = Player::getAvatarComp(thisa->player_);
              if ( *(_BYTE *)(((unsigned __int64)&sumo_avatar->in_dungeon_guid >> 3) + 0x7FFF8000) )
                __asan_report_load8(&sumo_avatar->in_dungeon_guid);
              PlayerAvatarComp::findAvatar((const PlayerAvatarComp *const)(v2 + 144), (uint64_t)AvatarComp);
              if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v2 + 144)) )
              {
                common::milog::MiLogStream::create(
                  &v67,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/player/activity/sumo_activity.cpp",
                  "onGallerySumoCombatSettleEvent",
                  1265);
                v30 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                        &v67,
                        (const char (*)[42])"[SUMO] in dungeon avatar not found, guid:");
                common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                  v30,
                  &sumo_avatar->in_dungeon_guid);
                common::milog::MiLogStream::~MiLogStream(&v67);
              }
              else
              {
                v31 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
                AvatarId = Avatar::getAvatarId(v31);
                proto_log::SumoAvatarInfo::set_avatar_id(log_avatar, AvatarId);
                v33 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
                Level = Creature::getLevel(v33);
                proto_log::SumoAvatarInfo::set_avatar_level(log_avatar, Level);
              }
              std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 144));
              __gnu_cxx::__normal_iterator<SumoAvatar const*,std::vector<SumoAvatar>>::operator++((__gnu_cxx::__normal_iterator<const SumoAvatar*,std::vector<SumoAvatar> > *const)&__for_begin);
            }
            __for_range_2 = &team->selected_skill_id_vec;
            __for_begin._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,SumoStage> >::_Base_ptr)std::vector<unsigned int>::begin(&team->selected_skill_id_vec)._M_current;
            __for_end._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,SumoStage> >::_Base_ptr)std::vector<unsigned int>::end(__for_range_2)._M_current;
            while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                      (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&__for_begin,
                      (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&__for_end) )
            {
              v35 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__for_begin);
              v36 = v35;
              if ( *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v35 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v35);
              }
              proto_log::SumoTeamInfo::add_buff_id_list(log_team, *v36);
              __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__for_begin);
            }
            __gnu_cxx::__normal_iterator<SumoTeam *,std::vector<SumoTeam>>::operator++(&__for_begin_0);
          }
          v37 = std::__shared_ptr_access<proto_log::PlayerLogBodySumoActivityGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodySumoActivityGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
          v38 = proto_log::PlayerLogBodySumoActivityGallerySettle::mutable_kill_normal_monster_list(v37);
          common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(
            &eventb->team_kill_normal_monster_vec,
            v38);
          v39 = std::__shared_ptr_access<proto_log::PlayerLogBodySumoActivityGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodySumoActivityGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
          v40 = proto_log::PlayerLogBodySumoActivityGallerySettle::mutable_kill_elite_monster_list(v39);
          common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(
            &eventb->team_kill_elite_monster_vec,
            v40);
          v41 = std::__shared_ptr_access<proto_log::PlayerLogBodySumoActivityGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodySumoActivityGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
          v42 = proto_log::PlayerLogBodySumoActivityGallerySettle::mutable_team_score_list(v41);
          common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&eventb->team_score_vec, v42);
          v43 = std::__shared_ptr_access<proto_log::PlayerLogBodySumoActivityGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodySumoActivityGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
          if ( *(char *)(((unsigned __int64)&eventb->is_succ >> 3) + 0x7FFF8000) < 0 )
            __asan_report_load1(&eventb->is_succ);
          proto_log::PlayerLogBodySumoActivityGallerySettle::set_is_succ(v43, eventb->is_succ);
          v44 = std::__shared_ptr_access<proto_log::PlayerLogBodySumoActivityGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodySumoActivityGallerySettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
          if ( *(_BYTE *)(((unsigned __int64)&eventb->duration >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)eventb + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&eventb->duration >> 3)
                                                                   + 0x7FFF8000) )
          {
            __asan_report_load4(&eventb->duration);
          }
          proto_log::PlayerLogBodySumoActivityGallerySettle::set_duration(v44, eventb->duration);
          if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&thisa->player_);
          player = thisa->player_;
          std::shared_ptr<google::protobuf::Message>::shared_ptr(
            (std::shared_ptr<google::protobuf::Message> *const)(v2 + 144),
            0LL);
          std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodySumoActivityGallerySettle,void>(
            &p_body_ptr,
            (const std::shared_ptr<proto_log::PlayerLogBodySumoActivityGallerySettle> *)(v2 + 112));
          Player::printStatLog(player, &p_body_ptr, (MessagePtr *)(v2 + 144), 0xEu);
          std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
          std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)(v2 + 144));
          std::shared_ptr<proto_log::PlayerLogBodySumoActivityGallerySettle>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodySumoActivityGallerySettle> *const)(v2 + 112));
        }
      }
      StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32));
      std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 80));
    }
  }
  if ( v68 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1287: range 000000001800136E-0000000018001944
void __cdecl SumoActivity::onGalleryStartEvent(SumoActivity *const this, const GalleryStartEvent *event)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  DungeonScene *v6; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,SumoStage> >::pointer v9; // rax
  common::milog::MiLogStream *v10; // rax
  uint32_t cur_team_index; // edx
  std::_Rb_tree_iterator<std::pair<unsigned int const,SumoStage> >::_Self __y; // [rsp+10h] [rbp-110h] BYREF
  const data::DungeonExcelConfig *dungeon_config_ptr; // [rsp+18h] [rbp-108h]
  const SumoDungeonContext *dungeon_context; // [rsp+20h] [rbp-100h]
  SumoStage *stage; // [rsp+28h] [rbp-F8h]
  common::milog::MiLogStream v16; // [rsp+30h] [rbp-F0h] BYREF
  char v17[208]; // [rsp+50h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 15 stage_iter:1310 64 16 20 cur_dungeon_ptr:1292 96 24 24 dungeon_context_opt:1303";
  *(_QWORD *)(v2 + 16) = SumoActivity::onGalleryStartEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -219021312;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  if ( BaseActivity::isOpening(this, 0) && !BaseActivity::isFinished(this) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Player::getDungeonComp(this->player_);
    PlayerDungeonComp::getCurDungeon((PlayerDungeonComp *const)(v2 + 64));
    if ( std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v2 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/sumo_activity.cpp",
        "onGalleryStartEvent",
        1295);
      common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(&v16, (const char (*)[25])off_264952A0);
      common::milog::MiLogStream::~MiLogStream(&v16);
    }
    else
    {
      v6 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      dungeon_config_ptr = DungeonScene::getDungeonConfig(v6);
      if ( !dungeon_config_ptr )
        goto LABEL_17;
      if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)dungeon_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->type >> 3)
                                                                          + 0x7FFF8000) )
      {
        __asan_report_load4(&dungeon_config_ptr->type);
      }
      if ( dungeon_config_ptr->type == DUNGEON_SUMO_COMBAT )
      {
LABEL_17:
        v7 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        DungeonScene::getDungeonExtraData<SumoDungeonContext>((std::optional<SumoDungeonContext> *)(v2 + 96), v7);
        if ( !std::optional<SumoDungeonContext>::has_value((const std::optional<SumoDungeonContext> *const)(v2 + 96)) )
        {
          common::milog::MiLogStream::create(
            &v16,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/activity/sumo_activity.cpp",
            "onGalleryStartEvent",
            1306);
          common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
            &v16,
            (const char (*)[35])"[SUMO] dungeon has no sumo context");
          common::milog::MiLogStream::~MiLogStream(&v16);
        }
        else
        {
          dungeon_context = std::optional<SumoDungeonContext>::value((std::optional<SumoDungeonContext> *const)(v2 + 96));
          *(std::map<unsigned int,SumoStage>::iterator *)(v2 + 32) = std::map<unsigned int,SumoStage>::find(
                                                                       &this->sumo_stage_map_,
                                                                       &dungeon_context->stage_id);
          __y._M_node = std::map<unsigned int,SumoStage>::end(&this->sumo_stage_map_)._M_node;
          if ( std::operator==(
                 (const std::_Rb_tree_iterator<std::pair<unsigned int const,SumoStage> >::_Self *)(v2 + 32),
                 &__y) )
          {
            common::milog::MiLogStream::create(
              &v16,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/sumo_activity.cpp",
              "onGalleryStartEvent",
              1313);
            v8 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                   &v16,
                   (const char (*)[34])"[SUMO] stage not found, stage_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &dungeon_context->stage_id);
            common::milog::MiLogStream::~MiLogStream(&v16);
          }
          else
          {
            v9 = std::_Rb_tree_iterator<std::pair<unsigned int const,SumoStage>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,SumoStage> > *const)(v2 + 32));
            stage = &v9->second;
            if ( std::map<unsigned long,std::pair<unsigned int,unsigned int>>::empty(&v9->second.in_dungeon_avatar_team_index_map) )
            {
              common::milog::MiLogStream::create(
                &v16,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/sumo_activity.cpp",
                "onGalleryStartEvent",
                1319);
              v10 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                      &v16,
                      (const char (*)[38])"[SUMO] sumo stage not init, stage_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &dungeon_context->stage_id);
              common::milog::MiLogStream::~MiLogStream(&v16);
            }
            else
            {
              if ( *(_BYTE *)(((unsigned __int64)&stage->cur_team_index >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&stage->cur_team_index >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&stage->cur_team_index);
              }
              cur_team_index = stage->cur_team_index;
              if ( *(_BYTE *)(((unsigned __int64)stage >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)stage >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(stage);
              }
              SumoActivity::addTeamAbilityGroup(this, stage->stage_id, cur_team_index);
            }
          }
        }
      }
    }
    std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 64));
  }
  if ( v17 == (char *)v2 )
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

// Line 1327: range 0000000018001946-00000000180019E1
bool __cdecl SumoActivity::isContainsWatcher(SumoActivity *const this, uint32_t watcher_id)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  bool isContainsWatcher; // bl
  std::shared_ptr<Config> v5[2]; // [rsp+10h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v5);
  v2 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v5);
  isContainsWatcher = ActivitySumoExcelConfigMgr::isContainsWatcher(
                        &v2->design_config.txt_config_mgr.activity_sumo_config_mgr,
                        watcher_id);
  std::shared_ptr<Config>::~shared_ptr(v5);
  return isContainsWatcher || BaseActivity::isContainsWatcher(this, watcher_id);
};

// Line 1336: range 00000000180019E2-00000000180021E0
int32_t __cdecl SumoActivity::fillWatcherProtoList(
        SumoActivity *const this,
        google::protobuf::RepeatedPtrField<proto::ActivityWatcherInfo> *proto_info_list)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  int32_t result; // eax
  ActivitySumoExcelConfigMgr *p_activity_sumo_config_mgr; // rcx
  common::milog::MiLogStream *v8; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v9; // rax
  _DWORD *v10; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  proto::ActivityWatcherInfo *v13; // rax
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  common::milog::MiLogStream *v15; // rax
  proto::ActivityWatcherInfo *v16; // rax
  std::map<unsigned int,SumoStage>::iterator __for_begin; // [rsp+18h] [rbp-108h] BYREF
  std::map<unsigned int,SumoStage>::iterator __for_end; // [rsp+20h] [rbp-100h] BYREF
  std::vector<unsigned int>::const_iterator __for_begin_0; // [rsp+28h] [rbp-F8h] BYREF
  std::vector<unsigned int>::const_iterator __for_end_0; // [rsp+30h] [rbp-F0h] BYREF
  const data::ActivitySumoOverallConfig *overall_config_ptr; // [rsp+38h] [rbp-E8h]
  std::map<unsigned int,SumoStage> *__for_range; // [rsp+40h] [rbp-E0h]
  const data::NewActivityWatcherConfig *wathcer_config_ptr_0; // [rsp+48h] [rbp-D8h]
  const std::pair<unsigned int const,SumoStage> *v24; // [rsp+50h] [rbp-D0h]
  std::tuple_element<0,const std::pair<unsigned int const,SumoStage> >::type *stage_id; // [rsp+58h] [rbp-C8h]
  std::tuple_element<1,const std::pair<unsigned int const,SumoStage> >::type *stage; // [rsp+60h] [rbp-C0h]
  const data::ActivitySumoStageExcelConfig *stage_config_ptr; // [rsp+68h] [rbp-B8h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+70h] [rbp-B0h]
  const data::NewActivityWatcherConfig *wathcer_config_ptr; // [rsp+78h] [rbp-A8h]
  std::shared_ptr<Config> v30; // [rsp+80h] [rbp-A0h] BYREF
  common::milog::MiLogStream v31; // [rsp+90h] [rbp-90h] BYREF
  char v32[112]; // [rsp+B0h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 15 watcher_id:1353";
  *(_QWORD *)(v2 + 16) = SumoActivity::fillWatcherProtoList;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v30);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v30);
  overall_config_ptr = ActivitySumoExcelConfigMgr::getSumoOverallConfig(&v5->design_config.txt_config_mgr.activity_sumo_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v30);
  if ( !overall_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v31,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/sumo_activity.cpp",
      "fillWatcherProtoList",
      1340);
    common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
      &v31,
      (const char (*)[37])"[SUMO] overall_config_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v31);
    result = -1;
    goto LABEL_32;
  }
  __for_range = &this->sumo_stage_map_;
  __for_begin._M_node = std::map<unsigned int,SumoStage>::begin(&this->sumo_stage_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,SumoStage>::end(&this->sumo_stage_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v24 = std::_Rb_tree_iterator<std::pair<unsigned int const,SumoStage>>::operator*(&__for_begin);
    stage_id = std::get<0ul,unsigned int const,SumoStage>(v24);
    stage = (std::tuple_element<1,const std::pair<unsigned int const,SumoStage> >::type *)std::get<1ul,unsigned int const,SumoStage>(v24);
    if ( *(char *)(((unsigned __int64)&stage->is_open >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&stage->is_open);
    if ( stage->is_open )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v30);
      p_activity_sumo_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v30)->design_config.txt_config_mgr.activity_sumo_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)stage_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(stage_id);
      }
      stage_config_ptr = data::ActivitySumoExcelConfigMgrBase::findActivitySumoStageExcelConfig(
                           p_activity_sumo_config_mgr,
                           *stage_id);
      std::shared_ptr<Config>::~shared_ptr(&v30);
      if ( !stage_config_ptr )
      {
        common::milog::MiLogStream::create(
          &v31,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/sumo_activity.cpp",
          "fillWatcherProtoList",
          1350);
        v8 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
               &v31,
               (const char (*)[46])"[SUMO] stage_config_ptr is nullptr, stage_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, stage_id);
        common::milog::MiLogStream::~MiLogStream(&v31);
        result = -1;
        goto LABEL_32;
      }
      __for_range_0 = &stage_config_ptr->watcher_list;
      __for_begin_0._M_current = std::vector<unsigned int>::begin(&stage_config_ptr->watcher_list)._M_current;
      __for_end_0._M_current = std::vector<unsigned int>::end(__for_range_0)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin_0, &__for_end_0) )
      {
        v9 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin_0);
        v10 = v9;
        if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v9);
        }
        *(_DWORD *)(v2 + 32) = *v10;
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v30);
        v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v30);
        wathcer_config_ptr = data::NewActivityExcelConfigMgrBase::findNewActivityWatcherConfig(
                               &v11->design_config.txt_config_mgr.new_activity_config_mgr,
                               *(_DWORD *)(v2 + 32));
        std::shared_ptr<Config>::~shared_ptr(&v30);
        if ( !wathcer_config_ptr )
        {
          common::milog::MiLogStream::create(
            &v31,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/activity/sumo_activity.cpp",
            "fillWatcherProtoList",
            1358);
          v12 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                  &v31,
                  (const char (*)[50])"[SUMO] watcher_config_ptr is nullptr, watcher_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 32));
          common::milog::MiLogStream::~MiLogStream(&v31);
          result = -1;
          goto LABEL_32;
        }
        v13 = google::protobuf::RepeatedPtrField<proto::ActivityWatcherInfo>::Add(proto_info_list);
        BaseActivity::fillWatcherProto(this, v13, wathcer_config_ptr);
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin_0);
      }
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,SumoStage>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&overall_config_ptr->global_watcher_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)overall_config_ptr + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&overall_config_ptr->global_watcher_id >> 3)
                                                                      + 0x7FFF8000) )
  {
    __asan_report_load4(&overall_config_ptr->global_watcher_id);
  }
  if ( overall_config_ptr->global_watcher_id )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v30);
    p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v30)->design_config.txt_config_mgr.new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&overall_config_ptr->global_watcher_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)overall_config_ptr + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&overall_config_ptr->global_watcher_id >> 3)
                                                                        + 0x7FFF8000) )
    {
      __asan_report_load4(&overall_config_ptr->global_watcher_id);
    }
    wathcer_config_ptr_0 = data::NewActivityExcelConfigMgrBase::findNewActivityWatcherConfig(
                             p_new_activity_config_mgr,
                             overall_config_ptr->global_watcher_id);
    std::shared_ptr<Config>::~shared_ptr(&v30);
    if ( !wathcer_config_ptr_0 )
    {
      common::milog::MiLogStream::create(
        &v31,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/sumo_activity.cpp",
        "fillWatcherProtoList",
        1370);
      v15 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
              &v31,
              (const char (*)[50])"[SUMO] watcher_config_ptr is nullptr, watcher_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        v15,
        &overall_config_ptr->global_watcher_id);
      common::milog::MiLogStream::~MiLogStream(&v31);
      result = -1;
      goto LABEL_32;
    }
    v16 = google::protobuf::RepeatedPtrField<proto::ActivityWatcherInfo>::Add(proto_info_list);
    BaseActivity::fillWatcherProto(this, v16, wathcer_config_ptr_0);
  }
  result = 0;
LABEL_32:
  if ( v32 == (char *)v2 )
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

// Line 1379: range 00000000180021E2-0000000018002C05
int32_t __cdecl SumoActivity::restartSumoDungeon(SumoActivity *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  int32_t v4; // r14d
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  PlayerDungeonComp *DungeonComp; // r14
  common::milog::MiLogStream *v7; // rax
  ActivitySumoExcelConfigMgr *p_activity_sumo_config_mgr; // rcx
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  DungeonScene *v11; // rax
  DungeonScene *v12; // rcx
  int32_t result; // eax
  SumoDungeonContext *dungeon_context; // [rsp+18h] [rbp-1B8h]
  const int *ret; // [rsp+20h] [rbp-1B0h]
  std::tuple_element<1,std::pair<int,std::shared_ptr<DungeonScene> > >::type *dest_dungeon_scene_ptr; // [rsp+28h] [rbp-1A8h]
  const data::ActivitySumoDifficultyExcelConfig *difficulty_config_ptr; // [rsp+30h] [rbp-1A0h]
  const data::ActivitySumoOverallConfig *overall_config_ptr; // [rsp+38h] [rbp-198h]
  std::shared_ptr<Config> v19; // [rsp+40h] [rbp-190h] BYREF
  std::pair<int,std::shared_ptr<DungeonScene> > __in; // [rsp+50h] [rbp-180h] BYREF
  EnterDungeonOption v21; // [rsp+70h] [rbp-160h] BYREF
  common::milog::MiLogStream v22; // [rsp+90h] [rbp-140h] BYREF
  std::map<unsigned int,unsigned int> level_config_id_map; // [rsp+B0h] [rbp-120h] BYREF
  char v24[240]; // [rsp+E0h] [rbp-F0h] BYREF

  v1 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(192LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 16 22 dungeon_scene_ptr:1380 64 20 16 new_conetxt:1420 128 24 24 dungeon_context_opt:1387";
  *(_QWORD *)(v1 + 16) = SumoActivity::restartSumoDungeon;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -234618880;
  v3[536862723] = -218959118;
  v3[536862724] = -218103808;
  v3[536862725] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::getDungeonComp(this->player_);
  PlayerDungeonComp::getCurDungeon((PlayerDungeonComp *const)(v1 + 32));
  if ( std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v1 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/sumo_activity.cpp",
      "restartSumoDungeon",
      1383);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
      &v22,
      (const char (*)[26])"dungeon_scene_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v22);
    v4 = -1;
  }
  else
  {
    v5 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    DungeonScene::getDungeonExtraData<SumoDungeonContext>((std::optional<SumoDungeonContext> *)(v1 + 128), v5);
    if ( !std::optional<SumoDungeonContext>::has_value((const std::optional<SumoDungeonContext> *const)(v1 + 128)) )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/sumo_activity.cpp",
        "restartSumoDungeon",
        1390);
      common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
        &v22,
        (const char (*)[39])"[SUMO] cur dungeon is not sumo dungeon");
      common::milog::MiLogStream::~MiLogStream(&v22);
      v4 = -1;
    }
    else
    {
      dungeon_context = std::optional<SumoDungeonContext>::value((std::optional<SumoDungeonContext> *const)(v1 + 128));
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      DungeonComp = Player::getDungeonComp(this->player_);
      memset(&v21, 0, sizeof(v21));
      EnterDungeonOption::EnterDungeonOption(&v21);
      memset(&level_config_id_map, 0, sizeof(level_config_id_map));
      std::map<unsigned int,unsigned int>::map(&level_config_id_map);
      PlayerDungeonComp::restartDungeon(&__in, DungeonComp, &level_config_id_map, v21);
      std::map<unsigned int,unsigned int>::~map(&level_config_id_map);
      ret = std::get<0ul,int,std::shared_ptr<DungeonScene>>(&__in);
      dest_dungeon_scene_ptr = std::get<1ul,int,std::shared_ptr<DungeonScene>>(&__in);
      if ( *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(ret);
      }
      if ( *ret )
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/sumo_activity.cpp",
          "restartSumoDungeon",
          1397);
        v7 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
               &v22,
               (const char (*)[35])"[SUMO] restart dungeo failed, ret:");
        common::milog::MiLogStream::operator<<<int,(int *)0>(v7, ret);
        common::milog::MiLogStream::~MiLogStream(&v22);
        if ( *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(ret);
        }
        v4 = *ret;
      }
      else if ( std::operator==<DungeonScene>(dest_dungeon_scene_ptr, 0LL) )
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/sumo_activity.cpp",
          "restartSumoDungeon",
          1402);
        common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
          &v22,
          (const char (*)[57])"[SUMO] restart dungeo failed, dest dungeon scene is null");
        common::milog::MiLogStream::~MiLogStream(&v22);
        v4 = -1;
      }
      else
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v19);
        p_activity_sumo_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19)->design_config.txt_config_mgr.activity_sumo_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)&dungeon_context->difficulty_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)dungeon_context + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_context->difficulty_id >> 3)
                                                                        + 0x7FFF8000) )
        {
          __asan_report_load4(&dungeon_context->difficulty_id);
        }
        difficulty_config_ptr = data::ActivitySumoExcelConfigMgrBase::findActivitySumoDifficultyExcelConfig(
                                  p_activity_sumo_config_mgr,
                                  dungeon_context->difficulty_id);
        std::shared_ptr<Config>::~shared_ptr(&v19);
        if ( difficulty_config_ptr )
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v19);
          v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19);
          overall_config_ptr = ActivitySumoExcelConfigMgr::getSumoOverallConfig(&v10->design_config.txt_config_mgr.activity_sumo_config_mgr);
          std::shared_ptr<Config>::~shared_ptr(&v19);
          if ( overall_config_ptr )
          {
            *(_DWORD *)(v1 + 64) = 0;
            *(_DWORD *)(v1 + 68) = 0;
            *(_DWORD *)(v1 + 72) = 0;
            *(_DWORD *)(v1 + 76) = 0;
            *(_DWORD *)(v1 + 80) = 0;
            if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&this->activity_id_);
            }
            *(_DWORD *)(v1 + 68) = this->activity_id_;
            if ( *(_BYTE *)(((unsigned __int64)dungeon_context >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)dungeon_context & 7) + 3) >= *(_BYTE *)(((unsigned __int64)dungeon_context >> 3)
                                                                                + 0x7FFF8000) )
            {
              __asan_report_load4(dungeon_context);
            }
            *(_DWORD *)(v1 + 64) = dungeon_context->stage_id;
            if ( *(_BYTE *)(((unsigned __int64)&dungeon_context->difficulty_id >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)dungeon_context + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_context->difficulty_id >> 3)
                                                                            + 0x7FFF8000) )
            {
              __asan_report_load4(&dungeon_context->difficulty_id);
            }
            *(_DWORD *)(v1 + 72) = dungeon_context->difficulty_id;
            if ( *(_BYTE *)(((unsigned __int64)&overall_config_ptr->team_num >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)overall_config_ptr + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&overall_config_ptr->team_num >> 3)
                                                                                + 0x7FFF8000) )
            {
              __asan_report_load4(&overall_config_ptr->team_num);
            }
            *(_DWORD *)(v1 + 80) = overall_config_ptr->team_num;
            v11 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)dest_dungeon_scene_ptr);
            DungeonScene::setDungeonExtraData<SumoDungeonContext>(v11, (const SumoDungeonContext *)(v1 + 64));
            v12 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)dest_dungeon_scene_ptr);
            if ( *(_BYTE *)(((unsigned __int64)&difficulty_config_ptr->dungeon_level >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&difficulty_config_ptr->dungeon_level >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&difficulty_config_ptr->dungeon_level);
            }
            DungeonScene::setReviseLevel(v12, difficulty_config_ptr->dungeon_level);
            v4 = 0;
          }
          else
          {
            common::milog::MiLogStream::create(
              &v22,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/sumo_activity.cpp",
              "restartSumoDungeon",
              1416);
            common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
              &v22,
              (const char (*)[37])"[SUMO] overall_config_ptr is nullptr");
            common::milog::MiLogStream::~MiLogStream(&v22);
            v4 = -1;
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v22,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/sumo_activity.cpp",
            "restartSumoDungeon",
            1409);
          v9 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                 &v22,
                 (const char (*)[51])"[SUMO] difficulty config not found, difficulty_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &dungeon_context->difficulty_id);
          common::milog::MiLogStream::~MiLogStream(&v22);
          v4 = -1;
        }
      }
      std::pair<int,std::shared_ptr<DungeonScene>>::~pair(&__in);
    }
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v1 + 32));
  result = v4;
  if ( v24 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1431: range 0000000018002C06-0000000018003612
__int64 __fastcall SumoActivity::gallerySetSwithPunishTime(
        SumoActivity *const this,
        uint32_t stage_id,
        uint32_t time_gap)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  unsigned int v7; // r14d
  std::_Rb_tree_iterator<std::pair<unsigned int const,SumoStage> >::pointer v8; // rax
  common::milog::MiLogStream *v9; // rax
  __int64 v10; // rsi
  Scene *v11; // rax
  uint32_t v12; // ecx
  char v13; // al
  PlayerAvatarComp *AvatarComp; // rcx
  common::milog::MiLogStream *v15; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  data::LifeState LifeState; // eax
  __int64 result; // rax
  std::vector<SumoTeam>::iterator __for_begin; // [rsp+18h] [rbp-1A8h] BYREF
  std::vector<SumoTeam>::iterator __for_end; // [rsp+20h] [rbp-1A0h] BYREF
  std::vector<SumoAvatar>::const_iterator __for_begin_0; // [rsp+28h] [rbp-198h] BYREF
  std::vector<SumoAvatar>::const_iterator __for_end_0; // [rsp+30h] [rbp-190h] BYREF
  SumoStage *stage; // [rsp+38h] [rbp-188h]
  std::vector<SumoTeam> *__for_range; // [rsp+40h] [rbp-180h]
  const SumoTeam *team; // [rsp+48h] [rbp-178h]
  proto::SumoDungeonTeam *dungeon_team; // [rsp+50h] [rbp-170h]
  const std::vector<SumoAvatar> *__for_range_0; // [rsp+58h] [rbp-168h]
  const SumoAvatar *sumo_avatar; // [rsp+60h] [rbp-160h]
  proto::SumoDungeonAvatar *dungeon_avatar; // [rsp+68h] [rbp-158h]
  common::milog::MiLogStream v31; // [rsp+70h] [rbp-150h] BYREF
  char v32[304]; // [rsp+90h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 4 13 stage_id:1430 64 8 15 stage_iter:1432 96 16 22 dungeon_scene_ptr:1444 128 16 15 avatar"
                        "_ptr:1464 160 64 11 notify:1451";
  *(_QWORD *)(v3 + 16) = SumoActivity::gallerySetSwithPunishTime;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862727] = -202116109;
  *(_DWORD *)(v3 + 48) = stage_id;
  *(std::map<unsigned int,SumoStage>::iterator *)(v3 + 64) = std::map<unsigned int,SumoStage>::find(
                                                               &this->sumo_stage_map_,
                                                               (const std::map<unsigned int,SumoStage>::key_type *)(v3 + 48));
  __for_end_0._M_current = (const SumoAvatar *)std::map<unsigned int,SumoStage>::end(&this->sumo_stage_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,SumoStage> >::_Self *)(v3 + 64),
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,SumoStage> >::_Self *)&__for_end_0) )
  {
    common::milog::MiLogStream::create(
      &v31,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/sumo_activity.cpp",
      "gallerySetSwithPunishTime",
      1435);
    v6 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v31,
           (const char (*)[34])"[SUMO] stage not found, stage_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v31);
    v7 = -1;
  }
  else
  {
    v8 = std::_Rb_tree_iterator<std::pair<unsigned int const,SumoStage>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,SumoStage> > *const)(v3 + 64));
    stage = &v8->second;
    if ( *(char *)(((unsigned __int64)&v8->second.is_open >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&v8->second.is_open);
    if ( !stage->is_open )
    {
      common::milog::MiLogStream::create(
        &v31,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/sumo_activity.cpp",
        "gallerySetSwithPunishTime",
        1441);
      v9 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
             &v31,
             (const char (*)[38])"[SUMO] sumo stage not open, stage_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v31);
      v7 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      Player::getDungeonComp(this->player_);
      PlayerDungeonComp::getCurDungeon((PlayerDungeonComp *const)(v3 + 96));
      v10 = 0LL;
      if ( std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v3 + 96), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v31,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/sumo_activity.cpp",
          "gallerySetSwithPunishTime",
          1447);
        common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
          &v31,
          (const char (*)[26])"dungeon_scene_ptr is null");
        common::milog::MiLogStream::~MiLogStream(&v31);
        v7 = -1;
      }
      else
      {
        v11 = (Scene *)std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        v12 = Scene::getSceneTimeSeconds(v11) + time_gap;
        v13 = *(_BYTE *)(((unsigned __int64)&stage->no_switch_punish_time >> 3) + 0x7FFF8000);
        if ( v13 != 0 && v13 <= 3 )
        {
          LOBYTE(v10) = v13 != 0;
          __asan_report_store4(&stage->no_switch_punish_time, v10, &stage->no_switch_punish_time);
        }
        stage->no_switch_punish_time = v12;
        proto::SumoSetNoSwitchPunishTimeNotify::SumoSetNoSwitchPunishTimeNotify((proto::SumoSetNoSwitchPunishTimeNotify *const)(v3 + 160));
        if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->activity_id_);
        }
        proto::SumoSetNoSwitchPunishTimeNotify::set_activity_id(
          (proto::SumoSetNoSwitchPunishTimeNotify *const)(v3 + 160),
          this->activity_id_);
        if ( *(_BYTE *)(((unsigned __int64)stage >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)stage >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(stage);
        }
        proto::SumoSetNoSwitchPunishTimeNotify::set_stage_id(
          (proto::SumoSetNoSwitchPunishTimeNotify *const)(v3 + 160),
          stage->stage_id);
        if ( *(_BYTE *)(((unsigned __int64)&stage->cur_team_index >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&stage->cur_team_index >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&stage->cur_team_index);
        }
        proto::SumoSetNoSwitchPunishTimeNotify::set_cur_team_index(
          (proto::SumoSetNoSwitchPunishTimeNotify *const)(v3 + 160),
          stage->cur_team_index);
        if ( *(_BYTE *)(((unsigned __int64)&stage->next_switch_team_time >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)stage - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&stage->next_switch_team_time >> 3)
                                                               + 0x7FFF8000) )
        {
          __asan_report_load4(&stage->next_switch_team_time);
        }
        proto::SumoSetNoSwitchPunishTimeNotify::set_next_valid_switch_time(
          (proto::SumoSetNoSwitchPunishTimeNotify *const)(v3 + 160),
          stage->next_switch_team_time);
        __for_range = &stage->sumo_team_vec;
        __for_begin._M_current = std::vector<SumoTeam>::begin(&stage->sumo_team_vec)._M_current;
        __for_end._M_current = std::vector<SumoTeam>::end(__for_range)._M_current;
        while ( __gnu_cxx::operator!=<SumoTeam *,std::vector<SumoTeam>>(&__for_begin, &__for_end) )
        {
          team = __gnu_cxx::__normal_iterator<SumoTeam *,std::vector<SumoTeam>>::operator*(&__for_begin);
          dungeon_team = proto::SumoSetNoSwitchPunishTimeNotify::add_dungeon_team_list((proto::SumoSetNoSwitchPunishTimeNotify *const)(v3 + 160));
          __for_range_0 = &team->avatar_vec;
          __for_begin_0._M_current = std::vector<SumoAvatar>::begin(&team->avatar_vec)._M_current;
          __for_end_0._M_current = std::vector<SumoAvatar>::end(__for_range_0)._M_current;
          while ( __gnu_cxx::operator!=<SumoAvatar const*,std::vector<SumoAvatar>>(&__for_begin_0, &__for_end_0) )
          {
            sumo_avatar = __gnu_cxx::__normal_iterator<SumoAvatar const*,std::vector<SumoAvatar>>::operator*(&__for_begin_0);
            dungeon_avatar = proto::SumoDungeonTeam::add_dungeon_avatar_list(dungeon_team);
            if ( *(_BYTE *)(((unsigned __int64)&sumo_avatar->in_dungeon_guid >> 3) + 0x7FFF8000) )
              __asan_report_load8(&sumo_avatar->in_dungeon_guid);
            proto::SumoDungeonAvatar::set_avatar_guid(dungeon_avatar, sumo_avatar->in_dungeon_guid);
            if ( *(char *)(((unsigned __int64)sumo_avatar >> 3) + 0x7FFF8000) < 0 )
              __asan_report_load1(sumo_avatar);
            proto::SumoDungeonAvatar::set_is_trial(dungeon_avatar, sumo_avatar->is_trial);
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            AvatarComp = Player::getAvatarComp(this->player_);
            if ( *(_BYTE *)(((unsigned __int64)&sumo_avatar->in_dungeon_guid >> 3) + 0x7FFF8000) )
              __asan_report_load8(&sumo_avatar->in_dungeon_guid);
            PlayerAvatarComp::findAvatar((const PlayerAvatarComp *const)(v3 + 128), (uint64_t)AvatarComp);
            if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v3 + 128)) )
            {
              common::milog::MiLogStream::create(
                &v31,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/player/activity/sumo_activity.cpp",
                "gallerySetSwithPunishTime",
                1467);
              v15 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                      &v31,
                      (const char (*)[42])"[SUMO] in dungeon avatar not found, guid:");
              common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                v15,
                &sumo_avatar->in_dungeon_guid);
              common::milog::MiLogStream::~MiLogStream(&v31);
            }
            else
            {
              v16 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
              LifeState = Creature::getLifeState(v16);
              proto::SumoDungeonAvatar::set_is_avlive(dungeon_avatar, LifeState == LIFE_ALIVE);
            }
            std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 128));
            __gnu_cxx::__normal_iterator<SumoAvatar const*,std::vector<SumoAvatar>>::operator++(&__for_begin_0);
          }
          __gnu_cxx::__normal_iterator<SumoTeam *,std::vector<SumoTeam>>::operator++(&__for_begin);
        }
        if ( *(_BYTE *)(((unsigned __int64)&stage->no_switch_punish_time >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&stage->no_switch_punish_time >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&stage->no_switch_punish_time);
        }
        proto::SumoSetNoSwitchPunishTimeNotify::set_no_switch_punish_time(
          (proto::SumoSetNoSwitchPunishTimeNotify *const)(v3 + 160),
          stage->no_switch_punish_time);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        Player::sendProto(this->player_, (const google::protobuf::Message *)(v3 + 160));
        v7 = 0;
        proto::SumoSetNoSwitchPunishTimeNotify::~SumoSetNoSwitchPunishTimeNotify((proto::SumoSetNoSwitchPunishTimeNotify *const)(v3 + 160));
      }
      std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v3 + 96));
    }
  }
  result = v7;
  if ( v32 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
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
