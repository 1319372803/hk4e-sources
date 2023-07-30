// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/card_game/gcg_level_challenge.cpp

// Line 30: range 00000000150E74D4-00000000150E7550
int32_t __cdecl GCGLevelData::fromBin(GCGLevelData *const this, const proto::GCGLevelBin *bin)
{
  __int64 v2; // rdx
  char v3; // al
  const google::protobuf::RepeatedField<unsigned int> *v4; // rax
  const proto::GCGLevelBin *bina; // [rsp+0h] [rbp-10h]

  bina = bin;
  v2 = proto::GCGLevelBin::level_id(bin);
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(bin) = v3 != 0;
    __asan_report_store4(this, bin, v2);
  }
  this->level_id = v2;
  v4 = proto::GCGLevelBin::finished_challenge_id_list(bina);
  common::tools::MiscUtils::setFromRepeated<std::set<unsigned int>,unsigned int>(&this->finished_challenge_set, v4);
  return 0;
};

// Line 37: range 00000000150E7552-00000000150E75CD
int32_t __cdecl GCGLevelData::toBin(const GCGLevelData *const this, proto::GCGLevelBin *bin)
{
  google::protobuf::RepeatedField<unsigned int> *v2; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  proto::GCGLevelBin::set_level_id(bin, this->level_id);
  v2 = proto::GCGLevelBin::mutable_finished_challenge_id_list(bin);
  common::tools::MiscUtils::setToRepeated<std::set<unsigned int>,unsigned int>(&this->finished_challenge_set, v2);
  return 0;
};

// Line 44: range 00000000150E75CE-00000000150E7649
int32_t __cdecl GCGLevelData::toClient(const GCGLevelData *const this, proto::GCGLevelData *proto)
{
  google::protobuf::RepeatedField<unsigned int> *v2; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  proto::GCGLevelData::set_level_id(proto, this->level_id);
  v2 = proto::GCGLevelData::mutable_finished_challenge_id_list(proto);
  common::tools::MiscUtils::setToRepeated<std::set<unsigned int>,unsigned int>(&this->finished_challenge_set, v2);
  return 0;
};

// Line 51: range 00000000150E764A-00000000150E76C6
int32_t __cdecl GCGBossChallengeData::fromBin(GCGBossChallengeData *const this, const proto::GCGBossChallengeBin *bin)
{
  __int64 v2; // rdx
  char v3; // al
  const google::protobuf::RepeatedField<unsigned int> *v4; // rax
  const proto::GCGBossChallengeBin *bina; // [rsp+0h] [rbp-10h]

  bina = bin;
  v2 = proto::GCGBossChallengeBin::id(bin);
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(bin) = v3 != 0;
    __asan_report_store4(this, bin, v2);
  }
  this->id = v2;
  v4 = proto::GCGBossChallengeBin::unlock_level_id_list(bina);
  common::tools::MiscUtils::setFromRepeated<std::set<unsigned int>,unsigned int>(&this->unlock_level_id_set, v4);
  return 0;
};

// Line 58: range 00000000150E76C8-00000000150E7743
int32_t __cdecl GCGBossChallengeData::toBin(const GCGBossChallengeData *const this, proto::GCGBossChallengeBin *bin)
{
  google::protobuf::RepeatedField<unsigned int> *v2; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  proto::GCGBossChallengeBin::set_id(bin, this->id);
  v2 = proto::GCGBossChallengeBin::mutable_unlock_level_id_list(bin);
  common::tools::MiscUtils::setToRepeated<std::set<unsigned int>,unsigned int>(&this->unlock_level_id_set, v2);
  return 0;
};

// Line 65: range 00000000150E7744-00000000150E77BF
int32_t __cdecl GCGBossChallengeData::toClient(
        const GCGBossChallengeData *const this,
        proto::GCGBossChallengeData *proto)
{
  google::protobuf::RepeatedField<unsigned int> *v2; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  proto::GCGBossChallengeData::set_id(proto, this->id);
  v2 = proto::GCGBossChallengeData::mutable_unlock_level_id_list(proto);
  common::tools::MiscUtils::setToRepeated<std::set<unsigned int>,unsigned int>(&this->unlock_level_id_set, v2);
  return 0;
};

// Line 72: range 00000000150E77C0-00000000150E7B31
int32_t __cdecl GCGLevelChallenge::fromBin(GCGLevelChallenge *const this, const proto::GCGLevelChallengeBin *bin)
{
  google::protobuf::RepeatedPtrField<proto::GCGLevelBin>::const_iterator *p_for_end; // rsi
  GCGLevelData *v3; // rax
  __int64 v4; // rdx
  char v5; // al
  uint32_t v6; // ecx
  char v7; // dl
  __int64 v8; // rdx
  __int64 v9; // rsi
  const google::protobuf::RepeatedField<unsigned int> *v10; // rax
  GCGBossChallengeData *v11; // rax
  google::protobuf::uint32 v12; // ebx
  std::map<unsigned int,GCGLevelData>::key_type *p_k; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v14; // rax
  google::protobuf::uint32 *v15; // rdx
  char v16; // cl
  const google::protobuf::RepeatedField<unsigned int> *v17; // rax
  std::map<unsigned int,GCGLevelData>::key_type __k; // [rsp+1Ch] [rbp-54h] BYREF
  google::protobuf::RepeatedPtrField<proto::GCGLevelBin>::const_iterator __for_begin; // [rsp+20h] [rbp-50h] BYREF
  google::protobuf::RepeatedPtrField<proto::GCGLevelBin>::const_iterator __for_end; // [rsp+28h] [rbp-48h] BYREF
  const google::protobuf::RepeatedPtrField<proto::GCGLevelBin> *__for_range; // [rsp+30h] [rbp-40h]
  const google::protobuf::RepeatedPtrField<proto::GCGBossChallengeBin> *__for_range_0; // [rsp+38h] [rbp-38h]
  const google::protobuf::RepeatedPtrField<proto::GCGGuideGroupBin> *__for_range_1; // [rsp+40h] [rbp-30h]
  const proto::GCGGuideGroupBin *guide_group_bin; // [rsp+48h] [rbp-28h]
  const proto::GCGBossChallengeBin *boss_challenge_bin; // [rsp+50h] [rbp-20h]
  const proto::GCGLevelBin *level_bin; // [rsp+58h] [rbp-18h]

  __for_range = proto::GCGLevelChallengeBin::level_bin_list(bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::GCGLevelBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::GCGLevelBin>::end(__for_range).it_;
  while ( 1 )
  {
    p_for_end = &__for_end;
    if ( !google::protobuf::internal::RepeatedPtrIterator<proto::GCGLevelBin const>::operator!=(
            &__for_begin,
            &__for_end) )
      break;
    level_bin = google::protobuf::internal::RepeatedPtrIterator<proto::GCGLevelBin const>::operator*(&__for_begin);
    __k = proto::GCGLevelBin::level_id(level_bin);
    v3 = std::map<unsigned int,GCGLevelData>::operator[](&this->level_map_, &__k);
    GCGLevelData::fromBin(v3, level_bin);
    google::protobuf::internal::RepeatedPtrIterator<proto::GCGLevelBin const>::operator++(&__for_begin);
  }
  v4 = proto::GCGLevelChallengeBin::pre_config_id(bin);
  v5 = *(_BYTE *)(((unsigned __int64)&this->pre_config_id_ >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(p_for_end) = v5 != 0;
    __asan_report_store4(&this->pre_config_id_, p_for_end, v4);
  }
  this->pre_config_id_ = v4;
  v6 = proto::GCGLevelChallengeBin::pre_level_id(bin);
  v7 = *(_BYTE *)(((unsigned __int64)&this->pre_level_id_ >> 3) + 0x7FFF8000);
  LOBYTE(p_for_end) = v7 != 0;
  v8 = (v7 != 0) & (unsigned __int8)((char)((((_BYTE)this + 60) & 7) + 3) >= v7);
  if ( (_BYTE)v8 )
    __asan_report_store4(&this->pre_level_id_, p_for_end, v8);
  this->pre_level_id_ = v6;
  v9 = proto::GCGLevelChallengeBin::pre_level_type(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->pre_level_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->pre_level_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->pre_level_type_, v9, &this->pre_level_type_);
  }
  this->pre_level_type_ = v9;
  v10 = proto::GCGLevelChallengeBin::unlock_world_challenge_list(bin);
  common::tools::MiscUtils::setFromRepeated<std::set<unsigned int>,unsigned int>(
    &this->unlock_world_challenge_set_,
    v10);
  std::map<unsigned int,GCGBossChallengeData>::clear(&this->unlock_boss_challenge_map_);
  __for_range_0 = proto::GCGLevelChallengeBin::unlock_boss_challenge_list(bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::GCGBossChallengeBin>::begin(__for_range_0).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::GCGBossChallengeBin>::end(__for_range_0).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::GCGBossChallengeBin const>::operator!=(
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::GCGBossChallengeBin> *const)&__for_begin,
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::GCGBossChallengeBin>::iterator *)&__for_end) )
  {
    boss_challenge_bin = google::protobuf::internal::RepeatedPtrIterator<proto::GCGBossChallengeBin const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::GCGBossChallengeBin> *const)&__for_begin);
    __k = proto::GCGBossChallengeBin::id(boss_challenge_bin);
    v11 = std::map<unsigned int,GCGBossChallengeData>::operator[](&this->unlock_boss_challenge_map_, &__k);
    GCGBossChallengeData::fromBin(v11, boss_challenge_bin);
    google::protobuf::internal::RepeatedPtrIterator<proto::GCGBossChallengeBin const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::GCGBossChallengeBin> *const)&__for_begin);
  }
  __for_range_1 = proto::GCGLevelChallengeBin::guide_group_bin_list(bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::GCGGuideGroupBin>::begin(__for_range_1).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::GCGGuideGroupBin>::end(__for_range_1).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::GCGGuideGroupBin const>::operator!=(
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::GCGGuideGroupBin> *const)&__for_begin,
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::GCGGuideGroupBin>::iterator *)&__for_end) )
  {
    guide_group_bin = google::protobuf::internal::RepeatedPtrIterator<proto::GCGGuideGroupBin const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::GCGGuideGroupBin> *const)&__for_begin);
    v12 = proto::GCGGuideGroupBin::progress(guide_group_bin);
    __k = proto::GCGGuideGroupBin::id(guide_group_bin);
    p_k = &__k;
    v14 = std::map<unsigned int,unsigned int>::operator[](&this->guide_level_group_map_, &__k);
    v15 = v14;
    v16 = *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000);
    if ( v16 != 0 && (char)(((unsigned __int8)v14 & 7) + 3) >= v16 )
    {
      LOBYTE(p_k) = v16 != 0;
      __asan_report_store4(v14, p_k, v14);
    }
    *v15 = v12;
    google::protobuf::internal::RepeatedPtrIterator<proto::GCGGuideGroupBin const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::GCGGuideGroupBin> *const)&__for_begin);
  }
  v17 = proto::GCGLevelChallengeBin::win_level_id_set(bin);
  common::tools::MiscUtils::setFromRepeated<std::set<unsigned int>,unsigned int>(&this->win_level_id_set_, v17);
  return 0;
};

// Line 95: range 00000000150E7B32-00000000150E7F20
int32_t __cdecl GCGLevelChallenge::toBin(const GCGLevelChallenge *const this, proto::GCGLevelChallengeBin *bin)
{
  proto::GCGLevelBin *v2; // rax
  google::protobuf::RepeatedField<unsigned int> *v3; // rax
  proto::GCGBossChallengeBin *v4; // rax
  google::protobuf::RepeatedField<unsigned int> *v5; // rax
  std::map<unsigned int,GCGLevelData>::const_iterator __for_begin; // [rsp+18h] [rbp-78h] BYREF
  std::map<unsigned int,GCGLevelData>::const_iterator __for_end; // [rsp+20h] [rbp-70h] BYREF
  const std::map<unsigned int,GCGLevelData> *__for_range; // [rsp+28h] [rbp-68h]
  const std::map<unsigned int,GCGBossChallengeData> *__for_range_0; // [rsp+30h] [rbp-60h]
  const std::map<unsigned int,unsigned int> *__for_range_1; // [rsp+38h] [rbp-58h]
  const std::pair<unsigned int const,unsigned int> *v12; // [rsp+40h] [rbp-50h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *id_1; // [rsp+48h] [rbp-48h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *progress; // [rsp+50h] [rbp-40h]
  proto::GCGGuideGroupBin *guide_group_bin; // [rsp+58h] [rbp-38h]
  const std::pair<unsigned int const,GCGBossChallengeData> *v16; // [rsp+60h] [rbp-30h]
  std::tuple_element<0,const std::pair<unsigned int const,GCGBossChallengeData> >::type *id_0; // [rsp+68h] [rbp-28h]
  std::tuple_element<1,const std::pair<unsigned int const,GCGBossChallengeData> >::type *boss_data; // [rsp+70h] [rbp-20h]
  const std::pair<unsigned int const,GCGLevelData> *v19; // [rsp+78h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,GCGLevelData> >::type *id; // [rsp+80h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,GCGLevelData> >::type *level_data; // [rsp+88h] [rbp-8h]

  __for_range = &this->level_map_;
  __for_begin._M_node = std::map<unsigned int,GCGLevelData>::begin(&this->level_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,GCGLevelData>::end(&this->level_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v19 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,GCGLevelData>>::operator*(&__for_begin);
    id = std::get<0ul,unsigned int const,GCGLevelData>(v19);
    level_data = (std::tuple_element<1,const std::pair<unsigned int const,GCGLevelData> >::type *)std::get<1ul,unsigned int const,GCGLevelData>(v19);
    v2 = proto::GCGLevelChallengeBin::add_level_bin_list(bin);
    GCGLevelData::toBin(level_data, v2);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,GCGLevelData>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->pre_config_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->pre_config_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->pre_config_id_);
  }
  proto::GCGLevelChallengeBin::set_pre_config_id(bin, this->pre_config_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->pre_level_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->pre_level_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->pre_level_id_);
  }
  proto::GCGLevelChallengeBin::set_pre_level_id(bin, this->pre_level_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->pre_level_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->pre_level_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->pre_level_type_);
  }
  proto::GCGLevelChallengeBin::set_pre_level_type(bin, this->pre_level_type_);
  v3 = proto::GCGLevelChallengeBin::mutable_unlock_world_challenge_list(bin);
  common::tools::MiscUtils::setToRepeated<std::set<unsigned int>,unsigned int>(&this->unlock_world_challenge_set_, v3);
  __for_range_0 = &this->unlock_boss_challenge_map_;
  __for_begin._M_node = std::map<unsigned int,GCGBossChallengeData>::begin(&this->unlock_boss_challenge_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,GCGBossChallengeData>::end(__for_range_0)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,GCGBossChallengeData> >::_Self *)&__for_begin,
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,GCGBossChallengeData> >::_Self *)&__for_end) )
  {
    v16 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,GCGBossChallengeData>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,GCGBossChallengeData> > *const)&__for_begin);
    id_0 = std::get<0ul,unsigned int const,GCGBossChallengeData>(v16);
    boss_data = (std::tuple_element<1,const std::pair<unsigned int const,GCGBossChallengeData> >::type *)std::get<1ul,unsigned int const,GCGBossChallengeData>(v16);
    v4 = proto::GCGLevelChallengeBin::add_unlock_boss_challenge_list(bin);
    GCGBossChallengeData::toBin(boss_data, v4);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,GCGBossChallengeData>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,GCGBossChallengeData> > *const)&__for_begin);
  }
  __for_range_1 = &this->guide_level_group_map_;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&this->guide_level_group_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(__for_range_1)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_begin,
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_end) )
  {
    v12 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin);
    id_1 = std::get<0ul,unsigned int const,unsigned int>(v12);
    progress = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v12);
    guide_group_bin = proto::GCGLevelChallengeBin::add_guide_group_bin_list(bin);
    if ( *(_BYTE *)(((unsigned __int64)id_1 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)id_1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id_1 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(id_1);
    }
    proto::GCGGuideGroupBin::set_id(guide_group_bin, *id_1);
    if ( *(_BYTE *)(((unsigned __int64)progress >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)progress & 7) + 3) >= *(_BYTE *)(((unsigned __int64)progress >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(progress);
    }
    proto::GCGGuideGroupBin::set_progress(guide_group_bin, *progress);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin);
  }
  v5 = proto::GCGLevelChallengeBin::mutable_win_level_id_set(bin);
  common::tools::MiscUtils::setToRepeated<std::set<unsigned int>,unsigned int>(&this->win_level_id_set_, v5);
  return 0;
};

// Line 119: range 00000000150E7F22-00000000150E7F48
void __cdecl GCGLevelChallenge::onLogin(GCGLevelChallenge *const this)
{
  GCGLevelChallenge::tryUnlockWorldChallenge(this);
  GCGLevelChallenge::tryUnlockBossChallenge(this);
};

// Line 125: range 00000000150E7F4A-00000000150E8273
void __cdecl GCGLevelChallenge::notifyAllData(GCGLevelChallenge *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  proto::GCGLevelData *v4; // rax
  google::protobuf::RepeatedField<unsigned int> *v5; // rax
  proto::GCGBossChallengeData *v6; // rax
  std::map<unsigned int,GCGLevelData>::iterator __for_begin; // [rsp+10h] [rbp-110h] BYREF
  std::map<unsigned int,GCGLevelData>::iterator __for_end; // [rsp+18h] [rbp-108h] BYREF
  std::map<unsigned int,GCGLevelData> *__for_range; // [rsp+20h] [rbp-100h]
  std::map<unsigned int,GCGBossChallengeData> *__for_range_0; // [rsp+28h] [rbp-F8h]
  std::pair<unsigned int const,GCGBossChallengeData> *v11; // [rsp+30h] [rbp-F0h]
  std::tuple_element<0,std::pair<unsigned int const,GCGBossChallengeData> >::type *id_0; // [rsp+38h] [rbp-E8h]
  std::tuple_element<1,std::pair<unsigned int const,GCGBossChallengeData> >::type *boss_data; // [rsp+40h] [rbp-E0h]
  std::pair<unsigned int const,GCGLevelData> *__in; // [rsp+48h] [rbp-D8h]
  std::tuple_element<0,std::pair<unsigned int const,GCGLevelData> >::type *id; // [rsp+50h] [rbp-D0h]
  std::tuple_element<1,std::pair<unsigned int const,GCGLevelData> >::type *level_data; // [rsp+58h] [rbp-C8h]
  char v17[192]; // [rsp+60h] [rbp-C0h] BYREF

  v1 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 96 10 notify:126";
  *(_QWORD *)(v1 + 16) = GCGLevelChallenge::notifyAllData;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450896) = -202116109;
  proto::GCGLevelChallengeNotify::GCGLevelChallengeNotify((proto::GCGLevelChallengeNotify *const)(v1 + 32));
  __for_range = &this->level_map_;
  __for_begin._M_node = std::map<unsigned int,GCGLevelData>::begin(&this->level_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,GCGLevelData>::end(&this->level_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,GCGLevelData>>::operator*(&__for_begin);
    id = std::get<0ul,unsigned int const,GCGLevelData>(__in);
    level_data = std::get<1ul,unsigned int const,GCGLevelData>(__in);
    v4 = proto::GCGLevelChallengeNotify::add_level_list((proto::GCGLevelChallengeNotify *const)(v1 + 32));
    GCGLevelData::toClient(level_data, v4);
    std::_Rb_tree_iterator<std::pair<unsigned int const,GCGLevelData>>::operator++(&__for_begin);
  }
  v5 = proto::GCGLevelChallengeNotify::mutable_unlock_world_challenge_list((proto::GCGLevelChallengeNotify *const)(v1 + 32));
  common::tools::MiscUtils::setToRepeated<std::set<unsigned int>,unsigned int>(&this->unlock_world_challenge_set_, v5);
  __for_range_0 = &this->unlock_boss_challenge_map_;
  __for_begin._M_node = std::map<unsigned int,GCGBossChallengeData>::begin(&this->unlock_boss_challenge_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,GCGBossChallengeData>::end(__for_range_0)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,GCGBossChallengeData> >::_Self *)&__for_begin,
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,GCGBossChallengeData> >::_Self *)&__for_end) )
  {
    v11 = std::_Rb_tree_iterator<std::pair<unsigned int const,GCGBossChallengeData>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,GCGBossChallengeData> > *const)&__for_begin);
    id_0 = std::get<0ul,unsigned int const,GCGBossChallengeData>(v11);
    boss_data = std::get<1ul,unsigned int const,GCGBossChallengeData>(v11);
    v6 = proto::GCGLevelChallengeNotify::add_unlock_boss_challenge_list((proto::GCGLevelChallengeNotify *const)(v1 + 32));
    GCGBossChallengeData::toClient(boss_data, v6);
    std::_Rb_tree_iterator<std::pair<unsigned int const,GCGBossChallengeData>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,GCGBossChallengeData> > *const)&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v1 + 32));
  proto::GCGLevelChallengeNotify::~GCGLevelChallengeNotify((proto::GCGLevelChallengeNotify *const)(v1 + 32));
  if ( v17 == (char *)v1 )
  {
    *(_DWORD *)((v1 >> 3) + 0x7FFF8000) = 0;
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

// Line 140: range 00000000150E8274-00000000150E829A
void __cdecl GCGLevelChallenge::onGCGLevelUp(GCGLevelChallenge *const this)
{
  GCGLevelChallenge::tryUnlockWorldChallenge(this);
  GCGLevelChallenge::tryUnlockBossChallenge(this);
};

// Line 146: range 00000000150E829C-00000000150E839D
void __cdecl GCGLevelChallenge::onFinishParentQuestEvent(
        GCGLevelChallenge *const this,
        const FinishParentQuestEvent *event)
{
  GCGPlayingExcelConfigMgr *gcg_playing_config_mgr; // [rsp+18h] [rbp-18h]
  std::shared_ptr<Config> v3; // [rsp+20h] [rbp-10h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v3);
  gcg_playing_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v3)->design_config.txt_config_mgr.gcg_playing_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v3);
  if ( *(_BYTE *)(((unsigned __int64)&event->parent_quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->parent_quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->parent_quest_id);
  }
  if ( GCGPlayingExcelConfigMgr::isWorldChallengeUnlockQuest(gcg_playing_config_mgr, event->parent_quest_id) )
    GCGLevelChallenge::tryUnlockWorldChallenge(this);
  if ( *(_BYTE *)(((unsigned __int64)&event->parent_quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->parent_quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->parent_quest_id);
  }
  if ( GCGPlayingExcelConfigMgr::isBossChallengeUnlockQuest(gcg_playing_config_mgr, event->parent_quest_id) )
    GCGLevelChallenge::tryUnlockBossChallenge(this);
};

// Line 159: range 00000000150E839E-00000000150E864C
void __cdecl GCGLevelChallenge::onOpenStateChange(GCGLevelChallenge *const this, const OpenStateChangeEvent *event)
{
  common::milog::MiLogStream *v2; // rbx
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v4; // [rsp+20h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&event->key >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->key >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->key);
  }
  if ( event->key == 3307 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->value >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->value >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&event->value);
    }
    if ( event->value )
    {
      GCGLevelChallenge::tryUnlockWorldChallenge(this);
      common::milog::MiLogStream::create(
        &v4,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/card_game/gcg_level_challenge.cpp",
        "onOpenStateChange",
        164);
      v2 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
             &v4,
             (const char (*)[45])"OPEN_STATE_GCG_WORLD_CHALLENGE is open, uid:");
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
LABEL_18:
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
      common::milog::MiLogStream::~MiLogStream(&v4);
      return;
    }
  }
  if ( *(_BYTE *)(((unsigned __int64)&event->key >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->key >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->key);
  }
  if ( event->key == 3306 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->value >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->value >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&event->value);
    }
    if ( event->value )
    {
      GCGLevelChallenge::tryUnlockBossChallenge(this);
      common::milog::MiLogStream::create(
        &v4,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/card_game/gcg_level_challenge.cpp",
        "onOpenStateChange",
        170);
      v2 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
             &v4,
             (const char (*)[44])"OPEN_STATE_GCG_BOSS_CHALLENGE is open, uid:");
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      goto LABEL_18;
    }
  }
};

// Line 175: range 00000000150E864E-00000000150E8792
void __cdecl GCGLevelChallenge::onGCGLevelSettleEvent(GCGLevelChallenge *const this, const GCGLevelSettleEvent *event)
{
  GCGPlayingExcelConfigMgr *gcg_playing_config_mgr; // [rsp+18h] [rbp-18h]
  std::shared_ptr<Config> v3; // [rsp+20h] [rbp-10h] BYREF

  if ( *(char *)(((unsigned __int64)&event->is_win >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&event->is_win);
  if ( event->is_win )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v3);
    gcg_playing_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v3)->design_config.txt_config_mgr.gcg_playing_config_mgr;
    std::shared_ptr<Config>::~shared_ptr(&v3);
    if ( *(_BYTE *)(((unsigned __int64)&event->level_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->level_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&event->level_id);
    }
    if ( GCGPlayingExcelConfigMgr::isWorldChallengeUnlockLevel(gcg_playing_config_mgr, event->level_id) )
      GCGLevelChallenge::tryUnlockWorldChallenge(this);
    if ( *(_BYTE *)(((unsigned __int64)&event->level_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->level_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&event->level_id);
    }
    if ( GCGPlayingExcelConfigMgr::isBossChallengeUnlockLevel(gcg_playing_config_mgr, event->level_id) )
      GCGLevelChallenge::tryUnlockBossLevel(this);
  }
};

// Line 191: range 00000000150E8794-00000000150E8936
void __cdecl GCGLevelChallenge::notifyChallengeFinish(
        GCGLevelChallenge *const this,
        uint32_t level_id,
        const std::set<unsigned int> *finish_challenge_id_set)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  google::protobuf::RepeatedField<unsigned int> *v6; // rdx
  char v8[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 48 48 10 notify:192";
  *(_QWORD *)(v3 + 16) = GCGLevelChallenge::notifyChallengeFinish;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862723] = -202116109;
  proto::GCGLevelChallengeFinishNotify::GCGLevelChallengeFinishNotify((proto::GCGLevelChallengeFinishNotify *const)(v3 + 48));
  proto::GCGLevelChallengeFinishNotify::set_level_id((proto::GCGLevelChallengeFinishNotify *const)(v3 + 48), level_id);
  v6 = proto::GCGLevelChallengeFinishNotify::mutable_finished_challenge_id_list((proto::GCGLevelChallengeFinishNotify *const)(v3 + 48));
  common::tools::MiscUtils::setToRepeated<std::set<unsigned int>,unsigned int>(finish_challenge_id_set, v6);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v3 + 48));
  proto::GCGLevelChallengeFinishNotify::~GCGLevelChallengeFinishNotify((proto::GCGLevelChallengeFinishNotify *const)(v3 + 48));
  if ( v8 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 199: range 00000000150E8938-00000000150E8AE3
void __cdecl GCGLevelChallenge::notifyChallengeDelete(
        GCGLevelChallenge *const this,
        const std::set<unsigned int> *level_id_set)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  google::protobuf::RepeatedField<unsigned int> *v5; // rdx
  char v6[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 48 40 10 notify:204";
  *(_QWORD *)(v2 + 16) = GCGLevelChallenge::notifyChallengeDelete;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  if ( !std::set<unsigned int>::empty(level_id_set) )
  {
    proto::GCGLevelChallengeDeleteNotify::GCGLevelChallengeDeleteNotify((proto::GCGLevelChallengeDeleteNotify *const)(v2 + 48));
    v5 = proto::GCGLevelChallengeDeleteNotify::mutable_level_id_list((proto::GCGLevelChallengeDeleteNotify *const)(v2 + 48));
    common::tools::MiscUtils::setToRepeated<std::set<unsigned int>,unsigned int>(level_id_set, v5);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 48));
    proto::GCGLevelChallengeDeleteNotify::~GCGLevelChallengeDeleteNotify((proto::GCGLevelChallengeDeleteNotify *const)(v2 + 48));
  }
  if ( v6 == (char *)v2 )
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

// Line 210: range 00000000150E8AE4-00000000150E912E
__int64 __fastcall GCGLevelChallenge::startLevel(
        GCGLevelChallenge *const this,
        uint32_t config_id,
        uint32_t level_id,
        proto::GCGLevelType level_type,
        bool is_restart)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  bool isGCGPveClosed; // r14
  common::milog::MiLogStream *v10; // rbx
  __int64 result; // rax
  GCGTavernSceneBuilder *TavernSceneBuilder; // rax
  GCGWeekChallenge *WeekChallenge; // rax
  GCGTavernChallenge *TavernChallenge; // rax
  common::milog::MiLogStream *v15; // r14
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  unsigned int val; // [rsp+24h] [rbp-ECh] BYREF
  PlayerGCGComp *gcg_comp; // [rsp+28h] [rbp-E8h]
  std::shared_ptr<Config> v30; // [rsp+30h] [rbp-E0h] BYREF
  common::milog::MiLogStream v31; // [rsp+40h] [rbp-D0h] BYREF
  char v32[176]; // [rsp+60h] [rbp-B0h] BYREF

  v5 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(128LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 48 4 7 ret:217 64 4 13 config_id:209 80 4 12 level_id:209 96 4 14 level_type:209";
  *(_QWORD *)(v5 + 16) = GCGLevelChallenge::startLevel;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -234556924;
  v7[536862723] = -202116348;
  *(_DWORD *)(v5 + 64) = config_id;
  *(_DWORD *)(v5 + 80) = level_id;
  *(_DWORD *)(v5 + 96) = level_type;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v30);
  v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v30);
  isGCGPveClosed = FeatureSwitchMgr::isGCGPveClosed(&v8->feature_switch_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v30);
  if ( isGCGPveClosed )
  {
    common::milog::MiLogStream::create(
      &v31,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/card_game/gcg_level_challenge.cpp",
      "startLevel",
      213);
    v10 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v31, (const char (*)[21])off_25709320);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
    common::milog::MiLogStream::~MiLogStream(&v31);
    result = 142LL;
  }
  else
  {
    *(_DWORD *)(v5 + 48) = 0;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    gcg_comp = Player::getGCGComp(this->player_);
    switch ( *(_DWORD *)(v5 + 96) )
    {
      case 1:
        TavernSceneBuilder = PlayerGCGComp::getTavernSceneBuilder(gcg_comp);
        *(_DWORD *)(v5 + 48) = GCGTavernSceneBuilder::startConstLevel(
                                 TavernSceneBuilder,
                                 *(_DWORD *)(v5 + 64),
                                 *(_DWORD *)(v5 + 80),
                                 is_restart);
        break;
      case 2:
        WeekChallenge = PlayerGCGComp::getWeekChallenge(gcg_comp);
        *(_DWORD *)(v5 + 48) = GCGWeekChallenge::startWeekLevel(
                                 WeekChallenge,
                                 *(_DWORD *)(v5 + 64),
                                 *(_DWORD *)(v5 + 80),
                                 is_restart);
        break;
      case 3:
        *(_DWORD *)(v5 + 48) = GCGLevelChallenge::startWorldLevel(this, *(_DWORD *)(v5 + 80), is_restart);
        break;
      case 4:
        *(_DWORD *)(v5 + 48) = GCGLevelChallenge::startBossLevel(
                                 this,
                                 *(_DWORD *)(v5 + 64),
                                 *(_DWORD *)(v5 + 80),
                                 is_restart);
        break;
      case 5:
        TavernChallenge = PlayerGCGComp::getTavernChallenge(gcg_comp);
        *(_DWORD *)(v5 + 48) = GCGTavernChallenge::startLevel(
                                 TavernChallenge,
                                 *(_DWORD *)(v5 + 64),
                                 *(_DWORD *)(v5 + 80),
                                 is_restart);
        break;
      case 6:
        *(_DWORD *)(v5 + 48) = GCGLevelChallenge::startBreakLevel(this, *(_DWORD *)(v5 + 80), is_restart);
        break;
      case 7:
        *(_DWORD *)(v5 + 48) = GCGLevelChallenge::startQuestLevel(this, *(_DWORD *)(v5 + 64), is_restart);
        break;
      case 8:
        if ( !is_restart )
          *(_DWORD *)(v5 + 80) = GCGLevelChallenge::getGuideLevelByQuest(this, *(_DWORD *)(v5 + 64));
        *(_DWORD *)(v5 + 48) = GCGLevelChallenge::startGuideLevel(
                                 this,
                                 *(_DWORD *)(v5 + 64),
                                 *(_DWORD *)(v5 + 80),
                                 is_restart);
        break;
      default:
        *(_DWORD *)(v5 + 48) = -1;
        common::milog::MiLogStream::create(
          &v31,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/card_game/gcg_level_challenge.cpp",
          "startLevel",
          253);
        v15 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(&v31, (const char (*)[29])off_25709360);
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v31);
        break;
    }
    if ( *(_DWORD *)(v5 + 48) )
    {
      common::milog::MiLogStream::create(
        &v31,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/card_game/gcg_level_challenge.cpp",
        "startLevel",
        258);
      v16 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
              &v31,
              (const char (*)[34])"start challenge fail. config_id: ");
      v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v5 + 64));
      v18 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v17, (const char (*)[12])" level_id: ");
      v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v5 + 80));
      v20 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v19, (const char (*)[14])" level_type: ");
      v21 = common::milog::MiLogStream::operator<<<proto::GCGLevelType,(proto::GCGLevelType*)0>(
              v20,
              (const proto::GCGLevelType *)(v5 + 96));
      v22 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v21, (const char (*)[14])" is_restart: ");
      v23 = common::milog::MiLogStream::operator<<(v22, is_restart);
      v24 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v23, (const char (*)[7])" ret: ");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v24, (const int *)(v5 + 48));
      common::milog::MiLogStream::~MiLogStream(&v31);
      result = *(unsigned int *)(v5 + 48);
    }
    else
    {
      GCGLevelChallenge::recordPreLevelInfo(
        this,
        *(_DWORD *)(v5 + 64),
        *(_DWORD *)(v5 + 80),
        *(proto::GCGLevelType *)(v5 + 96));
      result = 0LL;
    }
  }
  if ( v32 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 266: range 00000000150E9130-00000000150E9207
int32_t __cdecl GCGLevelChallenge::restartLevel(GCGLevelChallenge *const this)
{
  proto::GCGLevelType pre_level_type; // ecx
  uint32_t pre_level_id; // edx

  if ( *(_BYTE *)(((unsigned __int64)&this->pre_level_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->pre_level_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->pre_level_type_);
  }
  pre_level_type = this->pre_level_type_;
  if ( *(_BYTE *)(((unsigned __int64)&this->pre_level_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->pre_level_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->pre_level_id_);
  }
  pre_level_id = this->pre_level_id_;
  if ( *(_BYTE *)(((unsigned __int64)&this->pre_config_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->pre_config_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->pre_config_id_);
  }
  return GCGLevelChallenge::startLevel(this, this->pre_config_id_, pre_level_id, pre_level_type, 1);
};

// Line 271: range 00000000150E9208-00000000150E9373
int32_t __cdecl GCGLevelChallenge::continueLevel(GCGLevelChallenge *const this)
{
  uint32_t pre_level_id; // edx
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream v4; // [rsp+10h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->pre_level_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->pre_level_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->pre_level_type_);
  }
  if ( this->pre_level_type_ == GCG_LEVEL_GUIDE_GROUP )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->pre_level_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->pre_level_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->pre_level_id_);
    }
    pre_level_id = this->pre_level_id_;
    if ( *(_BYTE *)(((unsigned __int64)&this->pre_config_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->pre_config_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->pre_config_id_);
    }
    return GCGLevelChallenge::continueGuideLevel(this, this->pre_config_id_, pre_level_id);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v4,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/card_game/gcg_level_challenge.cpp",
      "continueLevel",
      277);
    v3 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
           &v4,
           (const char (*)[26])"unsupport continue type: ");
    common::milog::MiLogStream::operator<<<proto::GCGLevelType,(proto::GCGLevelType*)0>(v3, &this->pre_level_type_);
    common::milog::MiLogStream::~MiLogStream(&v4);
    return 12118;
  }
};

// Line 284: range 00000000150E9374-00000000150E9545
const GCGLevelData *__fastcall GCGLevelChallenge::findLevelData(const GCGLevelChallenge *const this, uint32_t level_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  const GCGLevelData *result; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,GCGLevelData> >::_Self __y; // [rsp+18h] [rbp-98h] BYREF
  std::shared_ptr<Config> v8; // [rsp+20h] [rbp-90h] BYREF
  char v9[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 level_id:283 64 8 8 iter:286";
  *(_QWORD *)(v2 + 16) = GCGLevelChallenge::findLevelData;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = level_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v8);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v8);
  *(_DWORD *)(v2 + 48) = GCGPlayingExcelConfigMgr::getGroupRedirectLevelId(
                           &v5->design_config.txt_config_mgr.gcg_playing_config_mgr,
                           *(_DWORD *)(v2 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v8);
  *(std::map<unsigned int,GCGLevelData>::const_iterator *)(v2 + 64) = std::map<unsigned int,GCGLevelData>::find(
                                                                        &this->level_map_,
                                                                        (const std::map<unsigned int,GCGLevelData>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,GCGLevelData>::end(&this->level_map_)._M_node;
  if ( std::operator!=(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,GCGLevelData> >::_Self *)(v2 + 64),
         &__y) )
  {
    result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,GCGLevelData>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,GCGLevelData> > *const)(v2 + 64))->second;
  }
  else
  {
    result = 0LL;
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

// Line 295: range 00000000150E9546-00000000150E977C
GCGLevelData *__fastcall GCGLevelChallenge::getLevelData(GCGLevelChallenge *const this, uint32_t level_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  GCGLevelData *result; // rax
  char *v7; // rsi
  uint32_t v8; // ecx
  char v9; // al
  std::_Rb_tree_iterator<std::pair<unsigned int const,GCGLevelData> >::_Self __y; // [rsp+10h] [rbp-A0h] BYREF
  GCGLevelData *level_data; // [rsp+18h] [rbp-98h]
  std::shared_ptr<Config> v12; // [rsp+20h] [rbp-90h] BYREF
  char v13[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 level_id:294 64 8 8 iter:297";
  *(_QWORD *)(v2 + 16) = GCGLevelChallenge::getLevelData;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = level_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v12);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v12);
  *(_DWORD *)(v2 + 48) = GCGPlayingExcelConfigMgr::getGroupRedirectLevelId(
                           &v5->design_config.txt_config_mgr.gcg_playing_config_mgr,
                           *(_DWORD *)(v2 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v12);
  *(std::map<unsigned int,GCGLevelData>::iterator *)(v2 + 64) = std::map<unsigned int,GCGLevelData>::find(
                                                                  &this->level_map_,
                                                                  (const std::map<unsigned int,GCGLevelData>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,GCGLevelData>::end(&this->level_map_)._M_node;
  if ( std::operator!=(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,GCGLevelData> >::_Self *)(v2 + 64),
         &__y) )
  {
    result = &std::_Rb_tree_iterator<std::pair<unsigned int const,GCGLevelData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,GCGLevelData> > *const)(v2 + 64))->second;
  }
  else
  {
    v7 = (char *)(v2 + 48);
    level_data = std::map<unsigned int,GCGLevelData>::operator[](
                   &this->level_map_,
                   (const std::map<unsigned int,GCGLevelData>::key_type *)(v2 + 48));
    v8 = *(_DWORD *)(v2 + 48);
    v9 = *(_BYTE *)(((unsigned __int64)level_data >> 3) + 0x7FFF8000);
    if ( v9 != 0 && v9 <= 3 )
    {
      LOBYTE(v7) = v9 != 0;
      __asan_report_store4(level_data, v7, level_data);
    }
    level_data->level_id = v8;
    result = level_data;
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

// Line 308: range 00000000150E977E-00000000150E99B7
void __fastcall GCGLevelChallenge::removeLevelData(GCGLevelChallenge *const this, uint32_t level_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r12
  unsigned int val; // [rsp+1Ch] [rbp-94h] BYREF
  std::shared_ptr<Config> v10; // [rsp+20h] [rbp-90h] BYREF
  common::milog::MiLogStream v11; // [rsp+30h] [rbp-80h] BYREF
  char v12[96]; // [rsp+50h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 level_id:307";
  *(_QWORD *)(v2 + 16) = GCGLevelChallenge::removeLevelData;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = level_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v10);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v10);
  *(_DWORD *)(v2 + 32) = GCGPlayingExcelConfigMgr::getGroupRedirectLevelId(
                           &v5->design_config.txt_config_mgr.gcg_playing_config_mgr,
                           *(_DWORD *)(v2 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v10);
  std::map<unsigned int,GCGLevelData>::erase(
    &this->level_map_,
    (const std::map<unsigned int,GCGLevelData>::key_type *)(v2 + 32));
  common::milog::MiLogStream::create(
    &v11,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/card_game/gcg_level_challenge.cpp",
    "removeLevelData",
    311);
  v6 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
         &v11,
         (const char (*)[27])"removeLevelData, level_id:");
  v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
  v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v7, (const char (*)[6])" uid:");
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
  common::milog::MiLogStream::~MiLogStream(&v11);
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 315: range 00000000150E99B8-00000000150E9BE5
const std::set<unsigned int> *__fastcall GCGLevelChallenge::getFinishedChallengeSet(
        const GCGLevelChallenge *const this,
        uint32_t level_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  const std::set<unsigned int> *result; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,GCGLevelData> >::_Self __y; // [rsp+18h] [rbp-98h] BYREF
  std::shared_ptr<Config> v8; // [rsp+20h] [rbp-90h] BYREF
  char v9[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 level_id:314 64 8 8 iter:317";
  *(_QWORD *)(v2 + 16) = GCGLevelChallenge::getFinishedChallengeSet;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = level_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v8);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v8);
  *(_DWORD *)(v2 + 48) = GCGPlayingExcelConfigMgr::getGroupRedirectLevelId(
                           &v5->design_config.txt_config_mgr.gcg_playing_config_mgr,
                           *(_DWORD *)(v2 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v8);
  *(std::map<unsigned int,GCGLevelData>::const_iterator *)(v2 + 64) = std::map<unsigned int,GCGLevelData>::find(
                                                                        &this->level_map_,
                                                                        (const std::map<unsigned int,GCGLevelData>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,GCGLevelData>::end(&this->level_map_)._M_node;
  if ( std::operator!=(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,GCGLevelData> >::_Self *)(v2 + 64),
         &__y) )
  {
    result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,GCGLevelData>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,GCGLevelData> > *const)(v2 + 64))->second.finished_challenge_set;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'GCGLevelChallenge::getFinishedChallengeSet(unsigned int)::dummy_set
      && __cxa_guard_acquire(&`guard variable for'GCGLevelChallenge::getFinishedChallengeSet(unsigned int)::dummy_set) )
    {
      std::set<unsigned int>::set(&GCGLevelChallenge::getFinishedChallengeSet(unsigned int)const::dummy_set);
      __cxa_guard_release(&`guard variable for'GCGLevelChallenge::getFinishedChallengeSet(unsigned int)::dummy_set);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::set<unsigned int>::~set,
        &GCGLevelChallenge::getFinishedChallengeSet(unsigned int)const::dummy_set,
        &_dso_handle);
    }
    result = &GCGLevelChallenge::getFinishedChallengeSet(unsigned int)const::dummy_set;
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

// Line 327: range 00000000150E9BE6-00000000150E9DBF
std::set<unsigned int>::size_type __fastcall GCGLevelChallenge::getFinishedChallengeCount(
        const GCGLevelChallenge *const this,
        uint32_t level_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,GCGLevelData> >::pointer v6; // rax
  std::set<unsigned int>::size_type result; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,GCGLevelData> >::_Self __y; // [rsp+18h] [rbp-98h] BYREF
  std::shared_ptr<Config> v9; // [rsp+20h] [rbp-90h] BYREF
  char v10[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 level_id:326 64 8 8 iter:329";
  *(_QWORD *)(v2 + 16) = GCGLevelChallenge::getFinishedChallengeCount;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = level_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v9);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v9);
  *(_DWORD *)(v2 + 48) = GCGPlayingExcelConfigMgr::getGroupRedirectLevelId(
                           &v5->design_config.txt_config_mgr.gcg_playing_config_mgr,
                           *(_DWORD *)(v2 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v9);
  *(std::map<unsigned int,GCGLevelData>::const_iterator *)(v2 + 64) = std::map<unsigned int,GCGLevelData>::find(
                                                                        &this->level_map_,
                                                                        (const std::map<unsigned int,GCGLevelData>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,GCGLevelData>::end(&this->level_map_)._M_node;
  if ( std::operator!=(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,GCGLevelData> >::_Self *)(v2 + 64),
         &__y) )
  {
    v6 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,GCGLevelData>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,GCGLevelData> > *const)(v2 + 64));
    result = std::set<unsigned int>::size(&v6->second.finished_challenge_set);
  }
  else
  {
    result = 0LL;
  }
  if ( v10 == (char *)v2 )
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

// Line 338: range 00000000150E9DC0-00000000150E9F94
std::set<unsigned int> *__cdecl GCGLevelChallenge::getUnfinishedChallengeSet(
        std::set<unsigned int> *retstr,
        const GCGLevelChallenge *const this,
        uint32_t level_id)
{
  std::vector<data::GCGChallengeReward>::const_iterator __for_begin; // [rsp+28h] [rbp-68h] BYREF
  std::vector<data::GCGChallengeReward>::const_iterator __for_end; // [rsp+30h] [rbp-60h] BYREF
  const GCGPlayingExcelConfigMgr *gcg_playing_config_mgr; // [rsp+38h] [rbp-58h]
  const std::vector<data::GCGChallengeReward> *challenge_reward_vec; // [rsp+40h] [rbp-50h]
  const GCGLevelData *level_data_ptr; // [rsp+48h] [rbp-48h]
  const std::vector<data::GCGChallengeReward> *__for_range_0; // [rsp+50h] [rbp-40h]
  const data::GCGChallengeReward *challenge_config_0; // [rsp+58h] [rbp-38h]
  const std::vector<data::GCGChallengeReward> *__for_range; // [rsp+60h] [rbp-30h]
  const data::GCGChallengeReward *challenge_config; // [rsp+68h] [rbp-28h]
  std::shared_ptr<Config> v14[2]; // [rsp+70h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v14);
  gcg_playing_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v14)->design_config.txt_config_mgr.gcg_playing_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(v14);
  challenge_reward_vec = GCGPlayingExcelConfigMgr::getLevelChallengeRewardVec(gcg_playing_config_mgr, level_id);
  std::set<unsigned int>::set(retstr);
  level_data_ptr = GCGLevelChallenge::findLevelData(this, level_id);
  if ( level_data_ptr )
  {
    __for_range_0 = challenge_reward_vec;
    __for_begin._M_current = std::vector<data::GCGChallengeReward>::begin(challenge_reward_vec)._M_current;
    __for_end._M_current = std::vector<data::GCGChallengeReward>::end(challenge_reward_vec)._M_current;
    while ( __gnu_cxx::operator!=<data::GCGChallengeReward const*,std::vector<data::GCGChallengeReward>>(
              &__for_begin,
              &__for_end) )
    {
      challenge_config_0 = __gnu_cxx::__normal_iterator<data::GCGChallengeReward const*,std::vector<data::GCGChallengeReward>>::operator*(&__for_begin);
      if ( !common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
              &level_data_ptr->finished_challenge_set,
              &challenge_config_0->challenge_id) )
        std::set<unsigned int>::insert(retstr, &challenge_config_0->challenge_id);
      __gnu_cxx::__normal_iterator<data::GCGChallengeReward const*,std::vector<data::GCGChallengeReward>>::operator++(&__for_begin);
    }
  }
  else
  {
    __for_range = challenge_reward_vec;
    __for_begin._M_current = std::vector<data::GCGChallengeReward>::begin(challenge_reward_vec)._M_current;
    __for_end._M_current = std::vector<data::GCGChallengeReward>::end(challenge_reward_vec)._M_current;
    while ( __gnu_cxx::operator!=<data::GCGChallengeReward const*,std::vector<data::GCGChallengeReward>>(
              &__for_begin,
              &__for_end) )
    {
      challenge_config = __gnu_cxx::__normal_iterator<data::GCGChallengeReward const*,std::vector<data::GCGChallengeReward>>::operator*(&__for_begin);
      std::set<unsigned int>::insert(retstr, &challenge_config->challenge_id);
      __gnu_cxx::__normal_iterator<data::GCGChallengeReward const*,std::vector<data::GCGChallengeReward>>::operator++(&__for_begin);
    }
  }
  return retstr;
};

// Line 364: range 00000000150E9F96-00000000150EA16A
std::set<unsigned int> *__cdecl GCGLevelChallenge::getUnfinishedChallengeRewardIdSet(
        std::set<unsigned int> *retstr,
        const GCGLevelChallenge *const this,
        uint32_t level_id)
{
  std::vector<data::GCGChallengeReward>::const_iterator __for_begin; // [rsp+28h] [rbp-68h] BYREF
  std::vector<data::GCGChallengeReward>::const_iterator __for_end; // [rsp+30h] [rbp-60h] BYREF
  const GCGPlayingExcelConfigMgr *gcg_playing_config_mgr; // [rsp+38h] [rbp-58h]
  const std::vector<data::GCGChallengeReward> *challenge_reward_vec; // [rsp+40h] [rbp-50h]
  const GCGLevelData *level_data_ptr; // [rsp+48h] [rbp-48h]
  const std::vector<data::GCGChallengeReward> *__for_range_0; // [rsp+50h] [rbp-40h]
  const data::GCGChallengeReward *challenge_config_0; // [rsp+58h] [rbp-38h]
  const std::vector<data::GCGChallengeReward> *__for_range; // [rsp+60h] [rbp-30h]
  const data::GCGChallengeReward *challenge_config; // [rsp+68h] [rbp-28h]
  std::shared_ptr<Config> v14[2]; // [rsp+70h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v14);
  gcg_playing_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v14)->design_config.txt_config_mgr.gcg_playing_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(v14);
  challenge_reward_vec = GCGPlayingExcelConfigMgr::getLevelChallengeRewardVec(gcg_playing_config_mgr, level_id);
  std::set<unsigned int>::set(retstr);
  level_data_ptr = GCGLevelChallenge::findLevelData(this, level_id);
  if ( level_data_ptr )
  {
    __for_range_0 = challenge_reward_vec;
    __for_begin._M_current = std::vector<data::GCGChallengeReward>::begin(challenge_reward_vec)._M_current;
    __for_end._M_current = std::vector<data::GCGChallengeReward>::end(challenge_reward_vec)._M_current;
    while ( __gnu_cxx::operator!=<data::GCGChallengeReward const*,std::vector<data::GCGChallengeReward>>(
              &__for_begin,
              &__for_end) )
    {
      challenge_config_0 = __gnu_cxx::__normal_iterator<data::GCGChallengeReward const*,std::vector<data::GCGChallengeReward>>::operator*(&__for_begin);
      if ( !common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
              &level_data_ptr->finished_challenge_set,
              &challenge_config_0->challenge_id) )
        std::set<unsigned int>::insert(retstr, &challenge_config_0->reward_id);
      __gnu_cxx::__normal_iterator<data::GCGChallengeReward const*,std::vector<data::GCGChallengeReward>>::operator++(&__for_begin);
    }
  }
  else
  {
    __for_range = challenge_reward_vec;
    __for_begin._M_current = std::vector<data::GCGChallengeReward>::begin(challenge_reward_vec)._M_current;
    __for_end._M_current = std::vector<data::GCGChallengeReward>::end(challenge_reward_vec)._M_current;
    while ( __gnu_cxx::operator!=<data::GCGChallengeReward const*,std::vector<data::GCGChallengeReward>>(
              &__for_begin,
              &__for_end) )
    {
      challenge_config = __gnu_cxx::__normal_iterator<data::GCGChallengeReward const*,std::vector<data::GCGChallengeReward>>::operator*(&__for_begin);
      std::set<unsigned int>::insert(retstr, &challenge_config->reward_id);
      __gnu_cxx::__normal_iterator<data::GCGChallengeReward const*,std::vector<data::GCGChallengeReward>>::operator++(&__for_begin);
    }
  }
  return retstr;
};

// Line 389: range 00000000150EA16C-00000000150EA812
void __cdecl GCGLevelChallenge::getUnfinishedCanTakeRewardChallengeSet(
        const GCGLevelChallenge *const this,
        uint32_t level_id,
        std::set<unsigned int> *challenge_set,
        std::set<unsigned int> *exceeded_challenge_set)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  uint32_t *p_reward_id; // rax
  std::initializer_list<unsigned int> __l; // [rsp+10h] [rbp-1B0h]
  std::allocator<unsigned int> __a; // [rsp+47h] [rbp-179h] BYREF
  std::initializer_list<unsigned int> v12; // [rsp+48h] [rbp-178h] BYREF
  std::vector<data::GCGChallengeReward>::const_iterator __for_end; // [rsp+58h] [rbp-168h] BYREF
  const GCGPlayingExcelConfigMgr *gcg_playing_config_mgr; // [rsp+60h] [rbp-160h]
  const std::vector<data::GCGChallengeReward> *challenge_reward_vec; // [rsp+68h] [rbp-158h]
  PlayerItemComp *item_comp; // [rsp+70h] [rbp-150h]
  const GCGLevelData *level_data_ptr; // [rsp+78h] [rbp-148h]
  const std::vector<data::GCGChallengeReward> *__for_range_0; // [rsp+80h] [rbp-140h]
  const data::GCGChallengeReward *challenge_config_0; // [rsp+88h] [rbp-138h]
  const std::vector<data::GCGChallengeReward> *__for_range; // [rsp+90h] [rbp-130h]
  const data::GCGChallengeReward *challenge_config; // [rsp+98h] [rbp-128h]
  std::shared_ptr<Config> v22; // [rsp+A0h] [rbp-120h] BYREF
  char v23[272]; // [rsp+B0h] [rbp-110h] BYREF

  v4 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(224LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 24 17 reward_id_vec:396 96 24 10 reason:403 160 24 17 reward_id_vec:427";
  *(_QWORD *)(v4 + 16) = GCGLevelChallenge::getUnfinishedCanTakeRewardChallengeSet;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234881024;
  v6[536862722] = -218959118;
  v6[536862723] = -234881024;
  v6[536862724] = -218959118;
  v6[536862725] = -218103808;
  v6[536862726] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v22);
  gcg_playing_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22)->design_config.txt_config_mgr.gcg_playing_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v22);
  challenge_reward_vec = GCGPlayingExcelConfigMgr::getLevelChallengeRewardVec(gcg_playing_config_mgr, level_id);
  if ( !std::vector<data::GCGChallengeReward>::empty(challenge_reward_vec) )
  {
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v4 + 32));
    HIDWORD(v12._M_array) = 3303;
    if ( GCGPlayingExcelConfigMgr::isRepeatableLevel(gcg_playing_config_mgr, level_id) )
      HIDWORD(v12._M_array) = 3304;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    item_comp = Player::getItemComp(this->player_);
    ActionReason::ActionReason(
      (ActionReason *const)(v4 + 96),
      ACTION_REASON_GCG_CHALLENGE_FINISH,
      SHIDWORD(v12._M_array));
    *(_BYTE *)(v4 + 110) = 0;
    level_data_ptr = GCGLevelChallenge::findLevelData(this, level_id);
    if ( level_data_ptr )
    {
      __for_range_0 = challenge_reward_vec;
      v12._M_len = (std::initializer_list<unsigned int>::size_type)std::vector<data::GCGChallengeReward>::begin(challenge_reward_vec)._M_current;
      __for_end._M_current = std::vector<data::GCGChallengeReward>::end(challenge_reward_vec)._M_current;
      while ( __gnu_cxx::operator!=<data::GCGChallengeReward const*,std::vector<data::GCGChallengeReward>>(
                (const __gnu_cxx::__normal_iterator<const data::GCGChallengeReward*,std::vector<data::GCGChallengeReward> > *)&v12._M_len,
                &__for_end) )
      {
        challenge_config_0 = __gnu_cxx::__normal_iterator<data::GCGChallengeReward const*,std::vector<data::GCGChallengeReward>>::operator*((const __gnu_cxx::__normal_iterator<const data::GCGChallengeReward*,std::vector<data::GCGChallengeReward> > *const)&v12._M_len);
        if ( !common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
                &level_data_ptr->finished_challenge_set,
                &challenge_config_0->challenge_id) )
        {
          if ( *(_BYTE *)(((unsigned __int64)&challenge_config_0->reward_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)challenge_config_0 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&challenge_config_0->reward_id >> 3)
                                                                              + 0x7FFF8000) )
          {
            __asan_report_load4(&challenge_config_0->reward_id);
          }
          LODWORD(v12._M_array) = challenge_config_0->reward_id;
          std::allocator<unsigned int>::allocator(&__a);
          std::vector<unsigned int>::vector(
            (std::vector<unsigned int> *const)(v4 + 160),
            (std::initializer_list<unsigned int>)__PAIR128__(1LL, &v12),
            &__a);
          std::allocator<unsigned int>::~allocator(&__a);
          if ( PlayerItemComp::checkFrontLooseGrantRewards(
                 item_comp,
                 (const std::vector<unsigned int> *)(v4 + 160),
                 (const ActionReason *)(v4 + 96),
                 0LL) )
          {
            std::set<unsigned int>::insert(exceeded_challenge_set, &challenge_config_0->challenge_id);
          }
          else
          {
            std::set<unsigned int>::insert(challenge_set, &challenge_config_0->challenge_id);
          }
          std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v4 + 160));
        }
        __gnu_cxx::__normal_iterator<data::GCGChallengeReward const*,std::vector<data::GCGChallengeReward>>::operator++((__gnu_cxx::__normal_iterator<const data::GCGChallengeReward*,std::vector<data::GCGChallengeReward> > *const)&v12._M_len);
      }
    }
    else
    {
      __for_range = challenge_reward_vec;
      v12._M_len = (std::initializer_list<unsigned int>::size_type)std::vector<data::GCGChallengeReward>::begin(challenge_reward_vec)._M_current;
      __for_end._M_current = std::vector<data::GCGChallengeReward>::end(challenge_reward_vec)._M_current;
      while ( __gnu_cxx::operator!=<data::GCGChallengeReward const*,std::vector<data::GCGChallengeReward>>(
                (const __gnu_cxx::__normal_iterator<const data::GCGChallengeReward*,std::vector<data::GCGChallengeReward> > *)&v12._M_len,
                &__for_end) )
      {
        challenge_config = __gnu_cxx::__normal_iterator<data::GCGChallengeReward const*,std::vector<data::GCGChallengeReward>>::operator*((const __gnu_cxx::__normal_iterator<const data::GCGChallengeReward*,std::vector<data::GCGChallengeReward> > *const)&v12._M_len);
        p_reward_id = &challenge_config->reward_id;
        if ( *(_BYTE *)(((unsigned __int64)p_reward_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_reward_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_reward_id >> 3)
                                                                        + 0x7FFF8000) )
        {
          __asan_report_load4(p_reward_id);
        }
        LODWORD(v12._M_array) = challenge_config->reward_id;
        __l._M_array = (std::initializer_list<unsigned int>::iterator)&v12;
        __l._M_len = 1LL;
        std::allocator<unsigned int>::allocator(&__a);
        std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v4 + 160), __l, &__a);
        std::allocator<unsigned int>::~allocator(&__a);
        if ( PlayerItemComp::checkFrontLooseGrantRewards(
               item_comp,
               (const std::vector<unsigned int> *)(v4 + 160),
               (const ActionReason *)(v4 + 96),
               0LL) )
        {
          std::set<unsigned int>::insert(exceeded_challenge_set, &challenge_config->challenge_id);
        }
        else
        {
          std::set<unsigned int>::insert(challenge_set, &challenge_config->challenge_id);
        }
        std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v4 + 160));
        __gnu_cxx::__normal_iterator<data::GCGChallengeReward const*,std::vector<data::GCGChallengeReward>>::operator++((__gnu_cxx::__normal_iterator<const data::GCGChallengeReward*,std::vector<data::GCGChallengeReward> > *const)&v12._M_len);
      }
    }
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v4 + 32));
  }
  if ( v23 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = -168430091;
  }
};

// Line 442: range 00000000150EA814-00000000150EA935
uint32_t __cdecl GCGLevelChallenge::getUnfinishedChallengeCount(const GCGLevelChallenge *const this, uint32_t level_id)
{
  uint32_t count; // [rsp+14h] [rbp-4Ch]
  std::vector<data::GCGChallengeReward>::const_iterator __for_begin; // [rsp+18h] [rbp-48h] BYREF
  std::vector<data::GCGChallengeReward>::const_iterator __for_end; // [rsp+20h] [rbp-40h] BYREF
  const GCGPlayingExcelConfigMgr *gcg_playing_config_mgr; // [rsp+28h] [rbp-38h]
  const std::vector<data::GCGChallengeReward> *challenge_reward_vec; // [rsp+30h] [rbp-30h]
  const GCGLevelData *level_data_ptr; // [rsp+38h] [rbp-28h]
  const std::vector<data::GCGChallengeReward> *__for_range; // [rsp+40h] [rbp-20h]
  const data::GCGChallengeReward *challenge_config; // [rsp+48h] [rbp-18h]
  std::shared_ptr<Config> v11; // [rsp+50h] [rbp-10h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v11);
  gcg_playing_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v11)->design_config.txt_config_mgr.gcg_playing_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v11);
  challenge_reward_vec = GCGPlayingExcelConfigMgr::getLevelChallengeRewardVec(gcg_playing_config_mgr, level_id);
  count = 0;
  level_data_ptr = GCGLevelChallenge::findLevelData(this, level_id);
  if ( !level_data_ptr )
    return std::vector<data::GCGChallengeReward>::size(challenge_reward_vec);
  __for_range = challenge_reward_vec;
  __for_begin._M_current = std::vector<data::GCGChallengeReward>::begin(challenge_reward_vec)._M_current;
  __for_end._M_current = std::vector<data::GCGChallengeReward>::end(challenge_reward_vec)._M_current;
  while ( __gnu_cxx::operator!=<data::GCGChallengeReward const*,std::vector<data::GCGChallengeReward>>(
            &__for_begin,
            &__for_end) )
  {
    challenge_config = __gnu_cxx::__normal_iterator<data::GCGChallengeReward const*,std::vector<data::GCGChallengeReward>>::operator*(&__for_begin);
    if ( !common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
            &level_data_ptr->finished_challenge_set,
            &challenge_config->challenge_id) )
      ++count;
    __gnu_cxx::__normal_iterator<data::GCGChallengeReward const*,std::vector<data::GCGChallengeReward>>::operator++(&__for_begin);
  }
  return count;
};

// Line 466: range 00000000150EA936-00000000150EA971
void __cdecl GCGLevelChallenge::onSettle(
        GCGLevelChallenge *const this,
        uint32_t level_id,
        bool is_win,
        const std::map<unsigned int,unsigned int> *challenge_progress_map,
        proto::GCGSettleNotify *notify)
{
  if ( is_win )
    GCGLevelChallenge::grantLevelChallengeReward(this, level_id, challenge_progress_map, notify);
};

// Line 474: range 00000000150EA972-00000000150EB596
void __fastcall GCGLevelChallenge::grantLevelChallengeReward(
        GCGLevelChallenge *const this,
        uint32_t level_id,
        const std::map<unsigned int,unsigned int> *challenge_progress_map,
        proto::GCGSettleNotify *notify)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  _BOOL4 is_achieve_fail; // ecx
  common::milog::MiLogStream *v16; // rax
  google::protobuf::RepeatedPtrField<proto::ItemParam> *v17; // rax
  google::protobuf::RepeatedField<unsigned int> *v18; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGcgFinishLevelChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGcgFinishLevelChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGcgFinishLevelChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  google::protobuf::RepeatedField<unsigned int> *v23; // rax
  Player *player; // r14
  std::string v25; // [rsp+0h] [rbp-290h]
  data::ItemLimitType limit_type; // [rsp+38h] [rbp-258h]
  unsigned int progress; // [rsp+3Ch] [rbp-254h]
  std::vector<data::GCGChallengeReward>::const_iterator __for_begin; // [rsp+40h] [rbp-250h] BYREF
  std::vector<data::GCGChallengeReward>::const_iterator __for_end; // [rsp+48h] [rbp-248h] BYREF
  const GCGPlayingExcelConfigMgr *gcg_playing_config_mgr; // [rsp+50h] [rbp-240h]
  GCGLevelData *level_data_ptr; // [rsp+60h] [rbp-230h]
  std::set<unsigned int> *finished_challenge_set; // [rsp+68h] [rbp-228h]
  PlayerItemComp *item_comp; // [rsp+70h] [rbp-220h]
  const std::vector<data::GCGChallengeReward> *challenge_reward_vec; // [rsp+78h] [rbp-218h]
  const std::vector<data::GCGChallengeReward> *__for_range; // [rsp+80h] [rbp-210h]
  const data::GCGChallengeReward *challenge_config; // [rsp+88h] [rbp-208h]
  const unsigned int *value_ptr; // [rsp+90h] [rbp-200h]
  const data::GCGChallengeExcelConfig *challenge_config_ptr; // [rsp+98h] [rbp-1F8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+A0h] [rbp-1F0h] BYREF
  std::shared_ptr<google::protobuf::Message> v41; // [rsp+B0h] [rbp-1E0h] BYREF
  common::milog::MiLogStream v42; // [rsp+C0h] [rbp-1D0h] BYREF
  common::milog::MiLogStream v43; // [rsp+E0h] [rbp-1B0h] BYREF
  char v44[400]; // [rsp+100h] [rbp-190h] BYREF

  *(&v25._anon_0._M_allocated_capacity + 1) = (std::string::size_type)challenge_progress_map;
  v25._anon_0._M_allocated_capacity = (std::string::size_type)notify;
  v4 = (unsigned __int64)v44;
  v25._M_string_length = (std::string::size_type)v44;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(352LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "8 48 1 10 holder:542 64 4 17 real_level_id:476 80 4 16 challenge_id:502 96 4 12 level_id:473 112"
                        " 16 11 log_ptr:543 144 24 10 reason:497 208 24 14 result_vec:529 272 48 31 temp_finished_challenge_set:498";
  *(_QWORD *)(v4 + 16) = GCGLevelChallenge::grantLevelChallengeReward;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -234556924;
  v6[536862723] = 61956;
  v6[536862724] = 62194;
  v6[536862725] = -218959360;
  v6[536862726] = 62194;
  v6[536862727] = -218959360;
  v6[536862728] = 62194;
  v6[536862730] = -202116109;
  *(_DWORD *)(v4 + 96) = level_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v41);
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v41);
  *(_DWORD *)(v4 + 64) = GCGPlayingExcelConfigMgr::getGroupRedirectLevelId(
                           &v7->design_config.txt_config_mgr.gcg_playing_config_mgr,
                           *(_DWORD *)(v4 + 96));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v41);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v41);
  gcg_playing_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v41)->design_config.txt_config_mgr.gcg_playing_config_mgr;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v41);
  if ( data::GCGPlayingExcelConfigMgrBase::findGCGGameRewardExcelConfig(gcg_playing_config_mgr, *(_DWORD *)(v4 + 64)) )
  {
    level_data_ptr = GCGLevelChallenge::getLevelData(this, *(_DWORD *)(v4 + 64));
    if ( level_data_ptr )
    {
      limit_type = ITEM_LIMIT_GCG_CHALLENGE_REWARD;
      if ( GCGPlayingExcelConfigMgr::isRepeatableLevel(gcg_playing_config_mgr, *(_DWORD *)(v4 + 64)) )
        limit_type = ITEM_LIMIT_GCG_REPEATABLE_CHALLENGE_REWARD;
      finished_challenge_set = &level_data_ptr->finished_challenge_set;
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      item_comp = Player::getItemComp(this->player_);
      ActionReason::ActionReason((ActionReason *const)(v4 + 144), ACTION_REASON_GCG_CHALLENGE_FINISH, limit_type);
      std::set<unsigned int>::set((std::set<unsigned int> *const)(v4 + 272));
      challenge_reward_vec = GCGPlayingExcelConfigMgr::getLevelChallengeRewardVec(
                               gcg_playing_config_mgr,
                               *(_DWORD *)(v4 + 64));
      __for_range = challenge_reward_vec;
      __for_begin._M_current = std::vector<data::GCGChallengeReward>::begin(challenge_reward_vec)._M_current;
      __for_end._M_current = std::vector<data::GCGChallengeReward>::end(challenge_reward_vec)._M_current;
      while ( __gnu_cxx::operator!=<data::GCGChallengeReward const*,std::vector<data::GCGChallengeReward>>(
                &__for_begin,
                &__for_end) )
      {
        challenge_config = __gnu_cxx::__normal_iterator<data::GCGChallengeReward const*,std::vector<data::GCGChallengeReward>>::operator*(&__for_begin);
        if ( *(_BYTE *)(((unsigned __int64)&challenge_config->challenge_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&challenge_config->challenge_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&challenge_config->challenge_id);
        }
        *(_DWORD *)(v4 + 80) = challenge_config->challenge_id;
        if ( !common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
                finished_challenge_set,
                (const unsigned int *)(v4 + 80)) )
        {
          value_ptr = common::tools::MiscUtils::findMapValuePointer<std::map<unsigned int,unsigned int> const>(
                        *((const std::map<unsigned int,unsigned int> **)&v25._anon_0._M_allocated_capacity + 1),
                        (const std::map<unsigned int,unsigned int>::key_type *)(v4 + 80));
          if ( value_ptr )
          {
            if ( *(_BYTE *)(((unsigned __int64)value_ptr >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)value_ptr & 7) + 3) >= *(_BYTE *)(((unsigned __int64)value_ptr >> 3)
                                                                          + 0x7FFF8000) )
            {
              __asan_report_load4(value_ptr);
            }
            progress = *value_ptr;
            challenge_config_ptr = data::GCGPlayingExcelConfigMgrBase::findGCGChallengeExcelConfig(
                                     gcg_playing_config_mgr,
                                     *(_DWORD *)(v4 + 80));
            if ( challenge_config_ptr )
            {
              if ( *(char *)(((unsigned __int64)&challenge_config_ptr->is_achieve_fail >> 3) + 0x7FFF8000) < 0 )
                __asan_report_load1(&challenge_config_ptr->is_achieve_fail);
              is_achieve_fail = challenge_config_ptr->is_achieve_fail;
              if ( *(_BYTE *)(((unsigned __int64)&challenge_config_ptr->progress >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)challenge_config_ptr + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&challenge_config_ptr->progress >> 3)
                                                                                    + 0x7FFF8000) )
              {
                __asan_report_load4(&challenge_config_ptr->progress);
              }
              if ( is_achieve_fail == progress < challenge_config_ptr->progress )
              {
                common::milog::MiLogStream::create(
                  &v43,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/player/card_game/gcg_level_challenge.cpp",
                  "grantLevelChallengeReward",
                  525);
                v16 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                        &v43,
                        (const char (*)[19])"finish challenge: ");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v16,
                  (const unsigned int *)(v4 + 80));
                common::milog::MiLogStream::~MiLogStream(&v43);
                if ( *(_BYTE *)(((unsigned __int64)&challenge_config->reward_id >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)challenge_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&challenge_config->reward_id >> 3)
                                                                                  + 0x7FFF8000) )
                {
                  __asan_report_load4(&challenge_config->reward_id);
                }
                if ( challenge_config->reward_id )
                {
                  std::vector<AddItemResult>::vector((std::vector<AddItemResult> *const)(v4 + 208));
                  if ( *(_BYTE *)(((unsigned __int64)&challenge_config->reward_id >> 3) + 0x7FFF8000) != 0
                    && (char)((((_BYTE)challenge_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&challenge_config->reward_id >> 3)
                                                                                    + 0x7FFF8000) )
                  {
                    __asan_report_load4(&challenge_config->reward_id);
                  }
                  PlayerItemComp::grantReward(
                    item_comp,
                    challenge_config->reward_id,
                    (const ActionReason *)(v4 + 144),
                    (std::vector<AddItemResult> *)(v4 + 208));
                  v17 = proto::GCGSettleNotify::mutable_reward_item_list((proto::GCGSettleNotify *const)v25._anon_0._M_allocated_capacity);
                  common::tools::MiscUtils::vectorToRepeated<AddItemResult,proto::ItemParam,void (AddItemResult::*)(proto::ItemParam&)const>(
                    (const std::vector<AddItemResult> *)(v4 + 208),
                    v17,
                    (void (*)(const AddItemResult *, proto::ItemParam *))AddItemResult::toClient);
                  std::vector<AddItemResult>::~vector((std::vector<AddItemResult> *const)(v4 + 208));
                }
                std::set<unsigned int>::insert(
                  (std::set<unsigned int> *const)(v4 + 272),
                  (const std::set<unsigned int>::value_type *)(v4 + 80));
                std::set<unsigned int>::insert(
                  finished_challenge_set,
                  (const std::set<unsigned int>::value_type *)(v4 + 80));
              }
            }
            else
            {
              common::milog::MiLogStream::create(
                &v42,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/player/card_game/gcg_level_challenge.cpp",
                "grantLevelChallengeReward",
                516);
              v14 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                      &v42,
                      (const char (*)[49])"findGCGChallengeExcelConfig fail. challenge_id: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v14,
                (const unsigned int *)(v4 + 80));
              common::milog::MiLogStream::~MiLogStream(&v42);
            }
          }
        }
        __gnu_cxx::__normal_iterator<data::GCGChallengeReward const*,std::vector<data::GCGChallengeReward>>::operator++(&__for_begin);
      }
      v18 = proto::GCGSettleNotify::mutable_finished_challenge_id_list((proto::GCGSettleNotify *const)v25._anon_0._M_allocated_capacity);
      common::tools::MiscUtils::setToRepeated<std::set<unsigned int>,unsigned int>(
        (const std::set<unsigned int> *)(v4 + 272),
        v18);
      if ( !std::set<unsigned int>::empty((const std::set<unsigned int> *const)(v4 + 272)) )
      {
        GCGLevelChallenge::notifyChallengeFinish(this, *(_DWORD *)(v4 + 64), (const std::set<unsigned int> *)(v4 + 272));
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        BasicComp = Player::getBasicComp(this->player_);
        PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v43, BasicComp);
        StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 48), 0xEB9u, v25);
        std::string::~string(&v43);
        common::tools::perf::make_shared<proto_log::PlayerLogBodyGcgFinishLevelChallenge>();
        v20 = std::__shared_ptr_access<proto_log::PlayerLogBodyGcgFinishLevelChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGcgFinishLevelChallenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 112));
        proto_log::PlayerLogBodyGcgFinishLevelChallenge::set_level_id(v20, *(_DWORD *)(v4 + 96));
        v21 = std::__shared_ptr_access<proto_log::PlayerLogBodyGcgFinishLevelChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGcgFinishLevelChallenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 112));
        proto_log::PlayerLogBodyGcgFinishLevelChallenge::set_real_level_id(v21, *(_DWORD *)(v4 + 64));
        v22 = std::__shared_ptr_access<proto_log::PlayerLogBodyGcgFinishLevelChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGcgFinishLevelChallenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 112));
        v23 = proto_log::PlayerLogBodyGcgFinishLevelChallenge::mutable_challenge_id_list(v22);
        common::tools::MiscUtils::setToRepeated<std::set<unsigned int>,unsigned int>(
          (const std::set<unsigned int> *)(v4 + 272),
          v23);
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        player = this->player_;
        std::shared_ptr<google::protobuf::Message>::shared_ptr(&v41, 0LL);
        std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyGcgFinishLevelChallenge,void>(
          &p_body_ptr,
          (const std::shared_ptr<proto_log::PlayerLogBodyGcgFinishLevelChallenge> *)(v4 + 112));
        Player::printStatLog(player, &p_body_ptr, &v41, 0xEu);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v41);
        std::shared_ptr<proto_log::PlayerLogBodyGcgFinishLevelChallenge>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyGcgFinishLevelChallenge> *const)(v4 + 112));
        StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 48));
      }
      std::set<unsigned int>::~set((std::set<unsigned int> *const)(v4 + 272));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v43,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/card_game/gcg_level_challenge.cpp",
        "grantLevelChallengeReward",
        487);
      v11 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
              &v43,
              (const char (*)[30])"getLevelData fail. level id: ");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v4 + 96));
      v13 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v12, (const char (*)[17])" real_level_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v4 + 64));
      common::milog::MiLogStream::~MiLogStream(&v43);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v43,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/card_game/gcg_level_challenge.cpp",
      "grantLevelChallengeReward",
      481);
    v8 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
           &v43,
           (const char (*)[46])"findGCGGameRewardExcelConfig fail. level id: ");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 96));
    v10 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" real_level_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v4 + 64));
    common::milog::MiLogStream::~MiLogStream(&v43);
  }
  if ( v25._M_string_length == v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8028) = -168430091;
  }
};

// Line 552: range 00000000150EB598-00000000150EB6B2
bool __cdecl GCGLevelChallenge::isLevelChallengeAllFinished(const GCGLevelChallenge *const this, uint32_t level_id)
{
  std::vector<data::GCGChallengeReward>::const_iterator __for_begin; // [rsp+18h] [rbp-48h] BYREF
  std::vector<data::GCGChallengeReward>::const_iterator __for_end; // [rsp+20h] [rbp-40h] BYREF
  const GCGPlayingExcelConfigMgr *gcg_playing_config_mgr; // [rsp+28h] [rbp-38h]
  const std::set<unsigned int> *finished_challenge_set; // [rsp+30h] [rbp-30h]
  const std::vector<data::GCGChallengeReward> *challenge_reward_vec; // [rsp+38h] [rbp-28h]
  const std::vector<data::GCGChallengeReward> *__for_range; // [rsp+40h] [rbp-20h]
  const data::GCGChallengeReward *challenge_config; // [rsp+48h] [rbp-18h]
  std::shared_ptr<Config> v10; // [rsp+50h] [rbp-10h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v10);
  gcg_playing_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v10)->design_config.txt_config_mgr.gcg_playing_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v10);
  finished_challenge_set = GCGLevelChallenge::getFinishedChallengeSet(this, level_id);
  if ( std::set<unsigned int>::empty(finished_challenge_set) )
    return 0;
  challenge_reward_vec = GCGPlayingExcelConfigMgr::getLevelChallengeRewardVec(gcg_playing_config_mgr, level_id);
  __for_range = challenge_reward_vec;
  __for_begin._M_current = std::vector<data::GCGChallengeReward>::begin(challenge_reward_vec)._M_current;
  __for_end._M_current = std::vector<data::GCGChallengeReward>::end(challenge_reward_vec)._M_current;
  while ( __gnu_cxx::operator!=<data::GCGChallengeReward const*,std::vector<data::GCGChallengeReward>>(
            &__for_begin,
            &__for_end) )
  {
    challenge_config = __gnu_cxx::__normal_iterator<data::GCGChallengeReward const*,std::vector<data::GCGChallengeReward>>::operator*(&__for_begin);
    if ( !common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
            finished_challenge_set,
            &challenge_config->challenge_id) )
      return 0;
    __gnu_cxx::__normal_iterator<data::GCGChallengeReward const*,std::vector<data::GCGChallengeReward>>::operator++(&__for_begin);
  }
  return 1;
};

// Line 572: range 00000000150EB6B4-00000000150EBD16
__int64 __fastcall GCGLevelChallenge::isLevelCanStart(const GCGLevelChallenge *const this, uint32_t level_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  __int64 result; // rax
  data::GCGLevelCondType type; // eax
  common::milog::MiLogStream *v8; // rax
  PlayerGCGComp *GCGComp; // rax
  uint32_t Level; // r13d
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v11; // rax
  uint32_t *v12; // rdx
  common::milog::MiLogStream *v13; // rax
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v14; // rax
  uint32_t *v15; // rdx
  const std::set<unsigned int> *FinishedChallengeSet; // rax
  std::set<unsigned int>::size_type v17; // r13
  std::vector<unsigned int>::const_reference v18; // rax
  unsigned int *v19; // rdx
  common::milog::MiLogStream *v20; // rcx
  unsigned int val; // [rsp+1Ch] [rbp-C4h] BYREF
  std::vector<data::GCGLevelCond>::const_iterator __for_begin; // [rsp+20h] [rbp-C0h] BYREF
  std::vector<data::GCGLevelCond>::const_iterator __for_end; // [rsp+28h] [rbp-B8h] BYREF
  const GCGPlayingExcelConfigMgr *gcg_playing_config_mgr; // [rsp+30h] [rbp-B0h]
  const data::GCGGameRewardExcelConfig *config_ptr; // [rsp+38h] [rbp-A8h]
  const std::vector<data::GCGLevelCond> *__for_range; // [rsp+40h] [rbp-A0h]
  const data::GCGLevelCond *cond; // [rsp+48h] [rbp-98h]
  std::shared_ptr<Config> v28; // [rsp+50h] [rbp-90h] BYREF
  common::milog::MiLogStream v29; // [rsp+60h] [rbp-80h] BYREF
  char v30[96]; // [rsp+80h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 level_id:571";
  *(_QWORD *)(v2 + 16) = GCGLevelChallenge::isLevelCanStart;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = level_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v28);
  gcg_playing_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v28)->design_config.txt_config_mgr.gcg_playing_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v28);
  config_ptr = data::GCGPlayingExcelConfigMgrBase::findGCGGameRewardExcelConfig(
                 gcg_playing_config_mgr,
                 *(_DWORD *)(v2 + 32));
  if ( !config_ptr )
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/card_game/gcg_level_challenge.cpp",
      "isLevelCanStart",
      577);
    v5 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
           &v29,
           (const char (*)[46])"findGCGGameRewardExcelConfig fail. level id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v29);
    result = 0LL;
    goto LABEL_35;
  }
  __for_range = &config_ptr->cond_list;
  __for_begin._M_current = std::vector<data::GCGLevelCond>::begin(&config_ptr->cond_list)._M_current;
  __for_end._M_current = std::vector<data::GCGLevelCond>::end(&config_ptr->cond_list)._M_current;
  while ( 1 )
  {
    if ( !__gnu_cxx::operator!=<data::GCGLevelCond const*,std::vector<data::GCGLevelCond>>(&__for_begin, &__for_end) )
    {
      result = 1LL;
      goto LABEL_35;
    }
    cond = __gnu_cxx::__normal_iterator<data::GCGLevelCond const*,std::vector<data::GCGLevelCond>>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&cond->type);
    }
    type = cond->type;
    if ( type == FINISH_LEVEL_CHALLENGE )
    {
      if ( std::vector<unsigned int>::size(&cond->param_list) <= 1 )
      {
        common::milog::MiLogStream::create(
          &v29,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/card_game/gcg_level_challenge.cpp",
          "isLevelCanStart",
          605);
        v13 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                &v29,
                (const char (*)[29])"param_list size not enough. ");
        common::milog::MiLogStream::operator<<<unsigned int>(v13, &cond->param_list);
        common::milog::MiLogStream::~MiLogStream(&v29);
        result = 0LL;
        goto LABEL_35;
      }
      v14 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                  &cond->param_list,
                                                                                                  0LL);
      v15 = v14;
      if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v14);
      }
      FinishedChallengeSet = GCGLevelChallenge::getFinishedChallengeSet(this, *v15);
      v17 = std::set<unsigned int>::size(FinishedChallengeSet);
      v18 = std::vector<unsigned int>::operator[](&cond->param_list, 1uLL);
      v19 = (unsigned int *)v18;
      if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v18);
      }
      if ( v17 < *v19 )
      {
        result = 0LL;
        goto LABEL_35;
      }
      goto LABEL_33;
    }
    if ( type > FINISH_LEVEL_CHALLENGE )
      goto LABEL_30;
    if ( type )
      break;
LABEL_33:
    __gnu_cxx::__normal_iterator<data::GCGLevelCond const*,std::vector<data::GCGLevelCond>>::operator++(&__for_begin);
  }
  if ( type == GCG_LEVEL )
  {
    if ( !std::vector<unsigned int>::size(&cond->param_list) )
    {
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/card_game/gcg_level_challenge.cpp",
        "isLevelCanStart",
        592);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v29,
             (const char (*)[29])"param_list size not enough. ");
      common::milog::MiLogStream::operator<<<unsigned int>(v8, &cond->param_list);
      common::milog::MiLogStream::~MiLogStream(&v29);
      result = 0LL;
      goto LABEL_35;
    }
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    GCGComp = Player::getGCGComp(this->player_);
    Level = PlayerGCGComp::getLevel(GCGComp);
    v11 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                &cond->param_list,
                                                                                                0LL);
    v12 = v11;
    if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v11);
    }
    if ( Level < *v12 )
    {
      result = 0LL;
      goto LABEL_35;
    }
    goto LABEL_33;
  }
LABEL_30:
  common::milog::MiLogStream::create(
    &v29,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/player/card_game/gcg_level_challenge.cpp",
    "isLevelCanStart",
    615);
  v20 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(&v29, (const char (*)[25])off_25709A60);
  if ( *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&cond->type);
  }
  val = cond->type;
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &val);
  common::milog::MiLogStream::~MiLogStream(&v29);
  result = 0LL;
LABEL_35:
  if ( v30 == (char *)v2 )
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

// Line 623: range 00000000150EBD18-00000000150EBEE5
bool __cdecl GCGLevelChallenge::checkLevelUnlockCondIsMeet(
        const GCGLevelChallenge *const this,
        const data::GCGLevelUnlockCond *cond,
        uint32_t param)
{
  data::GCGLevelUnlockCond v3; // eax
  PlayerGCGComp *GCGComp; // rax
  PlayerQuestComp *QuestComp; // rax
  common::milog::MiLogStream *v7; // rbx
  char *val; // [rsp+28h] [rbp-38h] BYREF
  common::milog::MiLogStream v10; // [rsp+30h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)cond >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)cond & 7) + 3) >= *(_BYTE *)(((unsigned __int64)cond >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(cond);
  }
  v3 = *cond;
  if ( *cond == GCG_LEVEL_UNLOCK_QUEST )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    QuestComp = Player::getQuestComp(this->player_);
    return PlayerQuestComp::isParentQuestOnceFinished(QuestComp, param);
  }
  else
  {
    if ( v3 > GCG_LEVEL_UNLOCK_QUEST )
      goto LABEL_15;
    if ( v3 == GCG_LEVEL_UNLOCK_NONE )
      return 1;
    if ( v3 == GCG_LEVEL_UNLOCK_LEVEL )
    {
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      GCGComp = Player::getGCGComp(this->player_);
      return param <= PlayerGCGComp::getLevel(GCGComp);
    }
    else
    {
LABEL_15:
      common::milog::MiLogStream::create(
        &v10,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/card_game/gcg_level_challenge.cpp",
        "checkLevelUnlockCondIsMeet",
        640);
      v7 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
             &v10,
             (const char (*)[22])"unsupport cond type: ");
      if ( *(_BYTE *)(((unsigned __int64)cond >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)cond & 7) + 3) >= *(_BYTE *)(((unsigned __int64)cond >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(cond);
      }
      val = (char *)data::enumValToStr((data::GCGLevelUnlockCond)*cond);
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
      common::milog::MiLogStream::~MiLogStream(&v10);
      return 0;
    }
  }
};

// Line 648: range 00000000150EBEE6-00000000150EBFB5
bool __fastcall GCGLevelChallenge::isWorldChallengeUnlock(GCGLevelChallenge *const this, uint32_t id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 6 id:647";
  *(_QWORD *)(v2 + 16) = GCGLevelChallenge::isWorldChallengeUnlock;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = id;
  result = common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
             &this->unlock_world_challenge_set_,
             (const unsigned int *)(v2 + 32));
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

// Line 653: range 00000000150EBFB6-00000000150EC086
void __fastcall GCGLevelChallenge::unlockWorldChallenge(GCGLevelChallenge *const this, uint32_t id)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 6 id:652";
  *(_QWORD *)(v2 + 16) = GCGLevelChallenge::unlockWorldChallenge;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = id;
  std::set<unsigned int>::insert(
    &this->unlock_world_challenge_set_,
    (const std::set<unsigned int>::value_type *)(v2 + 32));
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

// Line 658: range 00000000150EC088-00000000150EC21C
void __cdecl GCGLevelChallenge::notifyWorldChallengeUnlock(
        GCGLevelChallenge *const this,
        const std::set<unsigned int> *unlock_id_set)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  google::protobuf::RepeatedField<unsigned int> *v5; // rdx
  char v6[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 48 40 10 notify:659";
  *(_QWORD *)(v2 + 16) = GCGLevelChallenge::notifyWorldChallengeUnlock;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  proto::GCGWorldChallengeUnlockNotify::GCGWorldChallengeUnlockNotify((proto::GCGWorldChallengeUnlockNotify *const)(v2 + 48));
  v5 = proto::GCGWorldChallengeUnlockNotify::mutable_unlock_id_list((proto::GCGWorldChallengeUnlockNotify *const)(v2 + 48));
  common::tools::MiscUtils::setToRepeated<std::set<unsigned int>,unsigned int>(unlock_id_set, v5);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 48));
  proto::GCGWorldChallengeUnlockNotify::~GCGWorldChallengeUnlockNotify((proto::GCGWorldChallengeUnlockNotify *const)(v2 + 48));
  if ( v6 == (char *)v2 )
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

// Line 665: range 00000000150EC21E-00000000150EC6F3
int32_t __cdecl GCGLevelChallenge::startWorldLevel(GCGLevelChallenge *const this, uint32_t level_id, bool is_restart)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  PlayerBasicComp *BasicComp; // rax
  common::milog::MiLogStream *v7; // r14
  int32_t result; // eax
  uint32_t WorldConfigIdByLevelId; // edx
  PlayerGCGComp *GCGComp; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  PlayerGCGComp *v13; // rbx
  GCGPlayingExcelConfigMgr *gcg_playing_config_mgr; // [rsp+18h] [rbp-108h]
  std::shared_ptr<Config> v16; // [rsp+20h] [rbp-100h] BYREF
  std::vector<unsigned int> param_vec; // [rsp+30h] [rbp-F0h] BYREF
  common::milog::MiLogStream v18; // [rsp+50h] [rbp-D0h] BYREF
  common::milog::MiLogStream v19; // [rsp+70h] [rbp-B0h] BYREF
  char v20[144]; // [rsp+90h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 7 ret:684 64 12 10 option:681";
  *(_QWORD *)(v3 + 16) = GCGLevelChallenge::startWorldLevel;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202177536;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  BasicComp = Player::getBasicComp(this->player_);
  if ( !PlayerBasicComp::isStateOpen(BasicComp, 0xCEBu) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/card_game/gcg_level_challenge.cpp",
      "startWorldLevel",
      668);
    v7 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
           &v19,
           (const char (*)[46])"OPEN_STATE_GCG_WORLD_CHALLENGE not open, uid:");
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    *(_DWORD *)(v3 + 48) = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v19);
    result = 141;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v16);
    gcg_playing_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v16)->design_config.txt_config_mgr.gcg_playing_config_mgr;
    std::shared_ptr<Config>::~shared_ptr(&v16);
    WorldConfigIdByLevelId = GCGPlayingExcelConfigMgr::getWorldConfigIdByLevelId(gcg_playing_config_mgr, level_id);
    if ( !GCGLevelChallenge::isWorldChallengeUnlock(this, WorldConfigIdByLevelId) )
    {
      result = 12120;
    }
    else if ( (unsigned __int8)GCGLevelChallenge::isLevelCanStart(this, level_id) != 1 )
    {
      result = 12120;
    }
    else
    {
      *(_QWORD *)(v3 + 64) = 0LL;
      *(_DWORD *)(v3 + 72) = 0;
      *(_DWORD *)(v3 + 64) = level_id;
      *(_BYTE *)(v3 + 72) = is_restart;
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      GCGComp = Player::getGCGComp(this->player_);
      *(_DWORD *)(v3 + 48) = PlayerGCGComp::checkCanEnterGame(GCGComp, (const GCGEnterCheckOption *)(v3 + 64));
      if ( *(_DWORD *)(v3 + 48) )
      {
        common::milog::MiLogStream::create(
          &v18,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/card_game/gcg_level_challenge.cpp",
          "startWorldLevel",
          687);
        v11 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                &v18,
                (const char (*)[30])"checkCanEnterGame fail. ret: ");
        v12 = common::milog::MiLogStream::operator<<<int,(int *)0>(v11, (const int *)(v3 + 48));
        GCGEnterCheckOption::getDesc[abi:cxx11]((std::string *)&v19, (GCGEnterCheckOption *const)(v3 + 64));
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, (const std::string *)&v19);
        std::string::~string(&v19);
        common::milog::MiLogStream::~MiLogStream(&v18);
        result = *(_DWORD *)(v3 + 48);
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        v13 = Player::getGCGComp(this->player_);
        memset(&param_vec, 0, sizeof(param_vec));
        std::vector<unsigned int>::vector(&param_vec);
        PlayerGCGComp::startSingleGame(v13, level_id, GCG_GAME_WORLD_CHALLENGE, &param_vec);
        std::vector<unsigned int>::~vector(&param_vec);
        result = 0;
      }
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

// Line 695: range 00000000150EC6F4-00000000150ECB82
void __cdecl GCGLevelChallenge::tryUnlockWorldChallenge(GCGLevelChallenge *const this)
{
  std::set<unsigned int> *v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  PlayerBasicComp *BasicComp; // rax
  common::milog::MiLogStream *v5; // r13
  unsigned int val; // [rsp+14h] [rbp-10Ch] BYREF
  std::unordered_map<unsigned int,data::GCGWorldLevelExcelConfig>::const_iterator __for_begin; // [rsp+18h] [rbp-108h] BYREF
  std::unordered_map<unsigned int,data::GCGWorldLevelExcelConfig>::const_iterator __for_end; // [rsp+20h] [rbp-100h] BYREF
  const GCGPlayingExcelConfigMgr *gcg_playing_config_mgr; // [rsp+28h] [rbp-F8h]
  const std::unordered_map<unsigned int,data::GCGWorldLevelExcelConfig> *__for_range; // [rsp+30h] [rbp-F0h]
  const std::pair<unsigned int const,data::GCGWorldLevelExcelConfig> *v11; // [rsp+38h] [rbp-E8h]
  std::tuple_element<0,const std::pair<unsigned int const,data::GCGWorldLevelExcelConfig> >::type *id; // [rsp+40h] [rbp-E0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::GCGWorldLevelExcelConfig> >::type *config; // [rsp+48h] [rbp-D8h]
  std::shared_ptr<Config> v14; // [rsp+50h] [rbp-D0h] BYREF
  common::milog::MiLogStream v15; // [rsp+60h] [rbp-C0h] BYREF
  char v16[160]; // [rsp+80h] [rbp-A0h] BYREF

  v1 = (std::set<unsigned int> *)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = (std::set<unsigned int> *)v2;
  }
  *(_QWORD *)v1->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v1->_M_t._M_impl._M_header._M_color = "1 48 48 24 notify_config_id_set:704";
  v1->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)GCGLevelChallenge::tryUnlockWorldChallenge;
  v3 = (_DWORD *)((unsigned __int64)v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862723] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  BasicComp = Player::getBasicComp(this->player_);
  if ( !PlayerBasicComp::isStateOpen(BasicComp, 0xCEBu) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/card_game/gcg_level_challenge.cpp",
      "tryUnlockWorldChallenge",
      699);
    v5 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
           &v15,
           (const char (*)[46])"OPEN_STATE_GCG_WORLD_CHALLENGE not open, uid:");
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v15);
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v14);
    gcg_playing_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14)->design_config.txt_config_mgr.gcg_playing_config_mgr;
    std::shared_ptr<Config>::~shared_ptr(&v14);
    std::set<unsigned int>::set(v1 + 1);
    __for_range = &gcg_playing_config_mgr->gcg_world_level_excel_config_map;
    __for_begin._M_cur = std::unordered_map<unsigned int,data::GCGWorldLevelExcelConfig>::begin(&gcg_playing_config_mgr->gcg_world_level_excel_config_map)._M_cur;
    __for_end._M_cur = std::unordered_map<unsigned int,data::GCGWorldLevelExcelConfig>::end(&gcg_playing_config_mgr->gcg_world_level_excel_config_map)._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,data::GCGWorldLevelExcelConfig>,false>(
              &__for_begin,
              &__for_end) )
    {
      v11 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGWorldLevelExcelConfig>,false,false>::operator*(&__for_begin);
      id = std::get<0ul,unsigned int const,data::GCGWorldLevelExcelConfig>(v11);
      config = (std::tuple_element<1,const std::pair<unsigned int const,data::GCGWorldLevelExcelConfig> >::type *)std::get<1ul,unsigned int const,data::GCGWorldLevelExcelConfig>(v11);
      if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(id);
      }
      if ( !GCGLevelChallenge::isWorldChallengeUnlock(this, *id) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&config->unlock_param >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&config->unlock_param >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&config->unlock_param);
        }
        if ( GCGLevelChallenge::checkLevelUnlockCondIsMeet(this, &config->unlock_cond, config->unlock_param) )
        {
          if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(id);
          }
          GCGLevelChallenge::unlockWorldChallenge(this, *id);
          std::set<unsigned int>::insert(v1 + 1, id);
        }
      }
      std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGWorldLevelExcelConfig>,false,false>::operator++(&__for_begin);
    }
    if ( !std::set<unsigned int>::empty(v1 + 1) )
      GCGLevelChallenge::notifyWorldChallengeUnlock(this, v1 + 1);
    std::set<unsigned int>::~set(v1 + 1);
  }
  if ( v16 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v1->_M_t._M_impl.gap0 = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 723: range 00000000150ECB84-00000000150ECF01
uint32_t __cdecl GCGLevelChallenge::getWorldChallengeTotalStarNum(const GCGLevelChallenge *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::_Rb_tree_const_iterator<unsigned int>::reference v4; // rax
  _DWORD *v5; // rdx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  uint32_t result; // eax
  unsigned int val; // [rsp+14h] [rbp-DCh] BYREF
  uint32_t total_star_num; // [rsp+18h] [rbp-D8h]
  uint32_t level_star_num; // [rsp+1Ch] [rbp-D4h]
  std::set<unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-D0h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+28h] [rbp-C8h] BYREF
  const GCGPlayingExcelConfigMgr *gcg_playing_config_mgr; // [rsp+30h] [rbp-C0h]
  const std::set<unsigned int> *__for_range; // [rsp+38h] [rbp-B8h]
  const data::GCGWorldLevelExcelConfig *world_level_config_ptr; // [rsp+40h] [rbp-B0h]
  const GCGLevelData *level_data_ptr; // [rsp+48h] [rbp-A8h]
  std::shared_ptr<Config> v19; // [rsp+50h] [rbp-A0h] BYREF
  common::milog::MiLogStream v20; // [rsp+60h] [rbp-90h] BYREF
  char v21[112]; // [rsp+80h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 13 config_id:726";
  *(_QWORD *)(v1 + 16) = GCGLevelChallenge::getWorldChallengeTotalStarNum;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  total_star_num = 0;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v19);
  gcg_playing_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19)->design_config.txt_config_mgr.gcg_playing_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v19);
  __for_range = &this->unlock_world_challenge_set_;
  __for_begin._M_node = std::set<unsigned int>::begin(&this->unlock_world_challenge_set_)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(&this->unlock_world_challenge_set_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v4 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    v5 = v4;
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v4);
    }
    *(_DWORD *)(v1 + 32) = *v5;
    world_level_config_ptr = data::GCGPlayingExcelConfigMgrBase::findGCGWorldLevelExcelConfig(
                               gcg_playing_config_mgr,
                               *(_DWORD *)(v1 + 32));
    if ( world_level_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&world_level_config_ptr->level_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&world_level_config_ptr->level_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&world_level_config_ptr->level_id);
      }
      level_data_ptr = GCGLevelChallenge::findLevelData(this, world_level_config_ptr->level_id);
      if ( level_data_ptr )
      {
        level_star_num = std::set<unsigned int>::size(&level_data_ptr->finished_challenge_set);
        total_star_num += level_star_num;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/card_game/gcg_level_challenge.cpp",
        "getWorldChallengeTotalStarNum",
        731);
      v6 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
             &v20,
             (const char (*)[46])"findGCGWorldLevelExcelConfig fail, config_id:");
      v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v1 + 32));
      v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v7, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
      common::milog::MiLogStream::~MiLogStream(&v20);
    }
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  result = total_star_num;
  if ( v21 == (char *)v1 )
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

// Line 748: range 00000000150ECF02-00000000150ED03A
bool __fastcall GCGLevelChallenge::isBossChallengeUnlock(GCGLevelChallenge *const this, uint32_t id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::_Rb_tree_iterator<std::pair<unsigned int const,GCGBossChallengeData> >::_Self __y; // [rsp+18h] [rbp-88h] BYREF
  char v7[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 6 id:747 64 8 8 iter:749";
  *(_QWORD *)(v2 + 16) = GCGLevelChallenge::isBossChallengeUnlock;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  *(std::map<unsigned int,GCGBossChallengeData>::iterator *)(v2 + 64) = std::map<unsigned int,GCGBossChallengeData>::find(
                                                                          &this->unlock_boss_challenge_map_,
                                                                          (const std::map<unsigned int,GCGBossChallengeData>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,GCGBossChallengeData>::end(&this->unlock_boss_challenge_map_)._M_node;
  result = std::operator!=(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,GCGBossChallengeData> >::_Self *)(v2 + 64),
             &__y);
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

// Line 754: range 00000000150ED03C-00000000150ED1AE
bool __fastcall GCGLevelChallenge::isBossChallengeLevelUnlock(
        GCGLevelChallenge *const this,
        uint32_t id,
        uint32_t level_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::_Rb_tree_iterator<std::pair<unsigned int const,GCGBossChallengeData> >::pointer v6; // rax
  bool result; // al
  std::_Rb_tree_iterator<std::pair<unsigned int const,GCGBossChallengeData> >::_Self __y; // [rsp+18h] [rbp-88h] BYREF
  char v10[128]; // [rsp+20h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 6 id:753 48 4 12 level_id:753 64 8 8 iter:755";
  *(_QWORD *)(v3 + 16) = GCGLevelChallenge::isBossChallengeLevelUnlock;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 32) = id;
  *(_DWORD *)(v3 + 48) = level_id;
  *(std::map<unsigned int,GCGBossChallengeData>::iterator *)(v3 + 64) = std::map<unsigned int,GCGBossChallengeData>::find(
                                                                          &this->unlock_boss_challenge_map_,
                                                                          (const std::map<unsigned int,GCGBossChallengeData>::key_type *)(v3 + 32));
  __y._M_node = std::map<unsigned int,GCGBossChallengeData>::end(&this->unlock_boss_challenge_map_)._M_node;
  if ( std::operator!=(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,GCGBossChallengeData> >::_Self *)(v3 + 64),
         &__y) )
  {
    v6 = std::_Rb_tree_iterator<std::pair<unsigned int const,GCGBossChallengeData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,GCGBossChallengeData> > *const)(v3 + 64));
    result = common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
               &v6->second.unlock_level_id_set,
               (const unsigned int *)(v3 + 48));
  }
  else
  {
    result = 0;
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
  return result;
};

// Line 764: range 00000000150ED1B0-00000000150ED31A
void __cdecl GCGLevelChallenge::notifyBossChallenge(GCGLevelChallenge *const this, GCGBossChallengeData *data)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  proto::GCGBossChallengeData *v5; // rdx
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 10 notify:765";
  *(_QWORD *)(v2 + 16) = GCGLevelChallenge::notifyBossChallenge;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  proto::GCGBossChallengeUpdateNotify::GCGBossChallengeUpdateNotify((proto::GCGBossChallengeUpdateNotify *const)(v2 + 32));
  v5 = proto::GCGBossChallengeUpdateNotify::mutable_boss_challenge((proto::GCGBossChallengeUpdateNotify *const)(v2 + 32));
  GCGBossChallengeData::toClient(data, v5);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 32));
  proto::GCGBossChallengeUpdateNotify::~GCGBossChallengeUpdateNotify((proto::GCGBossChallengeUpdateNotify *const)(v2 + 32));
  if ( v6 == (char *)v2 )
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

// Line 771: range 00000000150ED31C-00000000150ED75D
void __fastcall GCGLevelChallenge::unlockBossChallenge(GCGLevelChallenge *const this, uint32_t id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  int v6; // r14d
  unsigned __int64 v7; // rax
  char v8; // dl
  char *v9; // rsi
  __int64 v10; // rdx
  bool is_need_notify; // [rsp+1Fh] [rbp-E1h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,GCGBossChallengeData> >::_Self __y; // [rsp+20h] [rbp-E0h] BYREF
  const GCGPlayingExcelConfigMgr *gcg_playing_config_mgr; // [rsp+28h] [rbp-D8h]
  const data::GCGBossLevelExcelConfig *config_ptr; // [rsp+30h] [rbp-D0h]
  GCGBossChallengeData *boss_data; // [rsp+38h] [rbp-C8h]
  std::shared_ptr<Config> v16; // [rsp+40h] [rbp-C0h] BYREF
  common::milog::MiLogStream v17; // [rsp+50h] [rbp-B0h] BYREF
  char v18[144]; // [rsp+70h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 6 id:770 64 8 8 iter:780";
  *(_QWORD *)(v2 + 16) = GCGLevelChallenge::unlockBossChallenge;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v16);
  gcg_playing_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v16)->design_config.txt_config_mgr.gcg_playing_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v16);
  config_ptr = data::GCGPlayingExcelConfigMgrBase::findGCGBossLevelExcelConfig(
                 gcg_playing_config_mgr,
                 *(_DWORD *)(v2 + 48));
  if ( config_ptr )
  {
    is_need_notify = 0;
    *(std::map<unsigned int,GCGBossChallengeData>::iterator *)(v2 + 64) = std::map<unsigned int,GCGBossChallengeData>::find(
                                                                            &this->unlock_boss_challenge_map_,
                                                                            (const std::map<unsigned int,GCGBossChallengeData>::key_type *)(v2 + 48));
    __y._M_node = std::map<unsigned int,GCGBossChallengeData>::end(&this->unlock_boss_challenge_map_)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,GCGBossChallengeData> >::_Self *)(v2 + 64),
           &__y) )
    {
      v6 = *(_DWORD *)(v2 + 48);
      v9 = (char *)(v2 + 48);
      v7 = (unsigned __int64)std::map<unsigned int,GCGBossChallengeData>::operator[](
                               &this->unlock_boss_challenge_map_,
                               (const std::map<unsigned int,GCGBossChallengeData>::key_type *)(v2 + 48));
      v8 = *(_BYTE *)((v7 >> 3) + 0x7FFF8000);
      LOBYTE(v9) = v8 != 0;
      v10 = (v8 != 0) & (unsigned __int8)(v8 <= 3);
      if ( (_BYTE)v10 )
        v7 = __asan_report_store4(v7, v9, v10);
      *(_DWORD *)v7 = v6;
      is_need_notify = 1;
    }
    boss_data = std::map<unsigned int,GCGBossChallengeData>::operator[](
                  &this->unlock_boss_challenge_map_,
                  (const std::map<unsigned int,GCGBossChallengeData>::key_type *)(v2 + 48));
    if ( !common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
            &boss_data->unlock_level_id_set,
            &config_ptr->normal_level_id) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&config_ptr->normal_level_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->normal_level_id >> 3)
                                                                  + 0x7FFF8000) )
      {
        __asan_report_load4(&config_ptr->normal_level_id);
      }
      if ( (unsigned __int8)GCGLevelChallenge::isLevelCanStart(this, config_ptr->normal_level_id) )
      {
        std::set<unsigned int>::insert(&boss_data->unlock_level_id_set, &config_ptr->normal_level_id);
        is_need_notify = 1;
      }
    }
    if ( !common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
            &boss_data->unlock_level_id_set,
            &config_ptr->hard_level_id) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&config_ptr->hard_level_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config_ptr->hard_level_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config_ptr->hard_level_id);
      }
      if ( (unsigned __int8)GCGLevelChallenge::isLevelCanStart(this, config_ptr->hard_level_id) )
      {
        std::set<unsigned int>::insert(&boss_data->unlock_level_id_set, &config_ptr->hard_level_id);
        is_need_notify = 1;
      }
    }
    if ( is_need_notify )
      GCGLevelChallenge::notifyBossChallenge(this, boss_data);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/card_game/gcg_level_challenge.cpp",
      "unlockBossChallenge",
      776);
    v5 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
           &v17,
           (const char (*)[39])"findGCGBossLevelExcelConfig fail. id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v17);
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
};

// Line 812: range 00000000150ED75E-00000000150EDC20
int32_t __cdecl GCGLevelChallenge::startBossLevel(
        GCGLevelChallenge *const this,
        uint32_t config_id,
        uint32_t level_id,
        bool is_restart)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  PlayerBasicComp *BasicComp; // rax
  common::milog::MiLogStream *v8; // rbx
  int32_t result; // eax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  PlayerGCGComp *GCGComp; // [rsp+10h] [rbp-120h]
  std::allocator<unsigned int> __a; // [rsp+33h] [rbp-FDh] BYREF
  unsigned int val; // [rsp+34h] [rbp-FCh] BYREF
  PlayerGCGComp *gcg_comp; // [rsp+38h] [rbp-F8h]
  std::vector<unsigned int> param_vec; // [rsp+40h] [rbp-F0h] BYREF
  common::milog::MiLogStream v19; // [rsp+60h] [rbp-D0h] BYREF
  common::milog::MiLogStream v20; // [rsp+80h] [rbp-B0h] BYREF
  char v21[144]; // [rsp+A0h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 7 ret:827 64 12 10 option:822";
  *(_QWORD *)(v4 + 16) = GCGLevelChallenge::startBossLevel;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202177536;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  BasicComp = Player::getBasicComp(this->player_);
  if ( !PlayerBasicComp::isStateOpen(BasicComp, 0xCEAu) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/card_game/gcg_level_challenge.cpp",
      "startBossLevel",
      815);
    v8 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
           &v20,
           (const char (*)[45])"OPEN_STATE_GCG_BOSS_CHALLENGE not open, uid:");
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream(&v20);
    result = 141;
  }
  else if ( !GCGLevelChallenge::isBossChallengeLevelUnlock(this, config_id, level_id) )
  {
    result = 12121;
  }
  else
  {
    *(_QWORD *)(v4 + 64) = 0LL;
    *(_DWORD *)(v4 + 72) = 0;
    *(_DWORD *)(v4 + 64) = level_id;
    *(_BYTE *)(v4 + 72) = is_restart;
    *(_BYTE *)(v4 + 71) = 1;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    gcg_comp = Player::getGCGComp(this->player_);
    *(_DWORD *)(v4 + 48) = PlayerGCGComp::checkCanEnterGame(gcg_comp, (const GCGEnterCheckOption *)(v4 + 64));
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/card_game/gcg_level_challenge.cpp",
        "startBossLevel",
        830);
      v10 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
              &v19,
              (const char (*)[30])"checkCanEnterGame fail. ret: ");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      GCGEnterCheckOption::getDesc[abi:cxx11]((std::string *)&v20, (GCGEnterCheckOption *const)(v4 + 64));
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, (const std::string *)&v20);
      std::string::~string(&v20);
      common::milog::MiLogStream::~MiLogStream(&v19);
      result = *(_DWORD *)(v4 + 48);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      GCGComp = Player::getGCGComp(this->player_);
      val = config_id;
      std::allocator<unsigned int>::allocator(&__a);
      std::vector<unsigned int>::vector(&param_vec, (std::initializer_list<unsigned int>)__PAIR128__(1LL, &val), &__a);
      PlayerGCGComp::startSingleGame(GCGComp, level_id, GCG_GAME_BOSS_CHALLENGE, &param_vec);
      std::vector<unsigned int>::~vector(&param_vec);
      std::allocator<unsigned int>::~allocator(&__a);
      result = 0;
    }
  }
  if ( v21 == (char *)v4 )
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

// Line 838: range 00000000150EDC22-00000000150EE071
void __cdecl GCGLevelChallenge::tryUnlockBossChallenge(GCGLevelChallenge *const this)
{
  std::set<unsigned int> *v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  PlayerBasicComp *BasicComp; // rax
  common::milog::MiLogStream *v5; // r13
  unsigned int val; // [rsp+14h] [rbp-10Ch] BYREF
  std::unordered_map<unsigned int,data::GCGBossLevelExcelConfig>::const_iterator __for_begin; // [rsp+18h] [rbp-108h] BYREF
  std::unordered_map<unsigned int,data::GCGBossLevelExcelConfig>::const_iterator __for_end; // [rsp+20h] [rbp-100h] BYREF
  const GCGPlayingExcelConfigMgr *gcg_playing_config_mgr; // [rsp+28h] [rbp-F8h]
  const std::unordered_map<unsigned int,data::GCGBossLevelExcelConfig> *__for_range; // [rsp+30h] [rbp-F0h]
  const std::pair<unsigned int const,data::GCGBossLevelExcelConfig> *v11; // [rsp+38h] [rbp-E8h]
  std::tuple_element<0,const std::pair<unsigned int const,data::GCGBossLevelExcelConfig> >::type *id; // [rsp+40h] [rbp-E0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::GCGBossLevelExcelConfig> >::type *config; // [rsp+48h] [rbp-D8h]
  std::shared_ptr<Config> v14; // [rsp+50h] [rbp-D0h] BYREF
  common::milog::MiLogStream v15; // [rsp+60h] [rbp-C0h] BYREF
  char v16[160]; // [rsp+80h] [rbp-A0h] BYREF

  v1 = (std::set<unsigned int> *)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = (std::set<unsigned int> *)v2;
  }
  *(_QWORD *)v1->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v1->_M_t._M_impl._M_header._M_color = "1 48 48 17 config_id_set:847";
  v1->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)GCGLevelChallenge::tryUnlockBossChallenge;
  v3 = (_DWORD *)((unsigned __int64)v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862723] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  BasicComp = Player::getBasicComp(this->player_);
  if ( !PlayerBasicComp::isStateOpen(BasicComp, 0xCEAu) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/card_game/gcg_level_challenge.cpp",
      "tryUnlockBossChallenge",
      842);
    v5 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
           &v15,
           (const char (*)[45])"OPEN_STATE_GCG_BOSS_CHALLENGE not open, uid:");
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v15);
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v14);
    gcg_playing_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14)->design_config.txt_config_mgr.gcg_playing_config_mgr;
    std::shared_ptr<Config>::~shared_ptr(&v14);
    std::set<unsigned int>::set(v1 + 1);
    __for_range = &gcg_playing_config_mgr->gcg_boss_level_excel_config_map;
    __for_begin._M_cur = std::unordered_map<unsigned int,data::GCGBossLevelExcelConfig>::begin(&gcg_playing_config_mgr->gcg_boss_level_excel_config_map)._M_cur;
    __for_end._M_cur = std::unordered_map<unsigned int,data::GCGBossLevelExcelConfig>::end(&gcg_playing_config_mgr->gcg_boss_level_excel_config_map)._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,data::GCGBossLevelExcelConfig>,false>(
              &__for_begin,
              &__for_end) )
    {
      v11 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGBossLevelExcelConfig>,false,false>::operator*(&__for_begin);
      id = std::get<0ul,unsigned int const,data::GCGBossLevelExcelConfig>(v11);
      config = (std::tuple_element<1,const std::pair<unsigned int const,data::GCGBossLevelExcelConfig> >::type *)std::get<1ul,unsigned int const,data::GCGBossLevelExcelConfig>(v11);
      if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(id);
      }
      if ( !GCGLevelChallenge::isBossChallengeUnlock(this, *id) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&config->unlock_param >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&config->unlock_param >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&config->unlock_param);
        }
        if ( GCGLevelChallenge::checkLevelUnlockCondIsMeet(this, &config->unlock_cond, config->unlock_param) )
        {
          if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(id);
          }
          GCGLevelChallenge::unlockBossChallenge(this, *id);
        }
      }
      std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGBossLevelExcelConfig>,false,false>::operator++(&__for_begin);
    }
    std::set<unsigned int>::~set(v1 + 1);
  }
  if ( v16 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v1->_M_t._M_impl.gap0 = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 861: range 00000000150EE072-00000000150EE1E3
void __cdecl GCGLevelChallenge::tryUnlockBossLevel(GCGLevelChallenge *const this)
{
  std::unordered_map<unsigned int,data::GCGBossLevelExcelConfig>::const_iterator __for_begin; // [rsp+18h] [rbp-48h] BYREF
  std::unordered_map<unsigned int,data::GCGBossLevelExcelConfig>::const_iterator __for_end; // [rsp+20h] [rbp-40h] BYREF
  const GCGPlayingExcelConfigMgr *gcg_playing_config_mgr; // [rsp+28h] [rbp-38h]
  const std::unordered_map<unsigned int,data::GCGBossLevelExcelConfig> *__for_range; // [rsp+30h] [rbp-30h]
  const std::pair<unsigned int const,data::GCGBossLevelExcelConfig> *v5; // [rsp+38h] [rbp-28h]
  std::tuple_element<0,const std::pair<unsigned int const,data::GCGBossLevelExcelConfig> >::type *id; // [rsp+40h] [rbp-20h]
  std::tuple_element<1,const std::pair<unsigned int const,data::GCGBossLevelExcelConfig> >::type *config; // [rsp+48h] [rbp-18h]
  std::shared_ptr<Config> v8; // [rsp+50h] [rbp-10h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v8);
  gcg_playing_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v8)->design_config.txt_config_mgr.gcg_playing_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v8);
  __for_range = &gcg_playing_config_mgr->gcg_boss_level_excel_config_map;
  __for_begin._M_cur = std::unordered_map<unsigned int,data::GCGBossLevelExcelConfig>::begin(&gcg_playing_config_mgr->gcg_boss_level_excel_config_map)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,data::GCGBossLevelExcelConfig>::end(&gcg_playing_config_mgr->gcg_boss_level_excel_config_map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::GCGBossLevelExcelConfig>,false>(
            &__for_begin,
            &__for_end) )
  {
    v5 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGBossLevelExcelConfig>,false,false>::operator*(&__for_begin);
    id = std::get<0ul,unsigned int const,data::GCGBossLevelExcelConfig>(v5);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::GCGBossLevelExcelConfig> >::type *)std::get<1ul,unsigned int const,data::GCGBossLevelExcelConfig>(v5);
    if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(id);
    }
    if ( GCGLevelChallenge::isBossChallengeUnlock(this, *id) )
    {
      if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(id);
      }
      GCGLevelChallenge::unlockBossChallenge(this, *id);
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGBossLevelExcelConfig>,false,false>::operator++(&__for_begin);
  }
};

// Line 874: range 00000000150EE1E4-00000000150EE5FA
uint32_t __cdecl GCGLevelChallenge::getFinishSpecifiedDifficultyBossChallengeNum(
        const GCGLevelChallenge *const this,
        bool is_hard)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  const GCGPlayingExcelConfigMgr *v5; // rcx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  uint32_t hard_level_id; // eax
  uint32_t result; // eax
  uint32_t finish_num; // [rsp+1Ch] [rbp-E4h]
  std::map<unsigned int,GCGBossChallengeData>::const_iterator __for_begin; // [rsp+20h] [rbp-E0h] BYREF
  std::map<unsigned int,GCGBossChallengeData>::const_iterator __for_end; // [rsp+28h] [rbp-D8h] BYREF
  const GCGPlayingExcelConfigMgr *gcg_playing_config_mgr; // [rsp+30h] [rbp-D0h]
  const std::map<unsigned int,GCGBossChallengeData> *__for_range; // [rsp+38h] [rbp-C8h]
  const std::pair<unsigned int const,GCGBossChallengeData> *v16; // [rsp+40h] [rbp-C0h]
  std::tuple_element<0,const std::pair<unsigned int const,GCGBossChallengeData> >::type *id; // [rsp+48h] [rbp-B8h]
  std::tuple_element<1,const std::pair<unsigned int const,GCGBossChallengeData> >::type *challenge_data; // [rsp+50h] [rbp-B0h]
  const data::GCGBossLevelExcelConfig *config_ptr; // [rsp+58h] [rbp-A8h]
  std::shared_ptr<Config> v20; // [rsp+60h] [rbp-A0h] BYREF
  common::milog::MiLogStream v21; // [rsp+70h] [rbp-90h] BYREF
  char v22[112]; // [rsp+90h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 level_id:885";
  *(_QWORD *)(v2 + 16) = GCGLevelChallenge::getFinishSpecifiedDifficultyBossChallengeNum;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  finish_num = 0;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v20);
  gcg_playing_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20)->design_config.txt_config_mgr.gcg_playing_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v20);
  __for_range = &this->unlock_boss_challenge_map_;
  __for_begin._M_node = std::map<unsigned int,GCGBossChallengeData>::begin(&this->unlock_boss_challenge_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,GCGBossChallengeData>::end(&this->unlock_boss_challenge_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v16 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,GCGBossChallengeData>>::operator*(&__for_begin);
    id = std::get<0ul,unsigned int const,GCGBossChallengeData>(v16);
    challenge_data = (std::tuple_element<1,const std::pair<unsigned int const,GCGBossChallengeData> >::type *)std::get<1ul,unsigned int const,GCGBossChallengeData>(v16);
    v5 = gcg_playing_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(id);
    }
    config_ptr = data::GCGPlayingExcelConfigMgrBase::findGCGBossLevelExcelConfig(v5, *id);
    if ( config_ptr )
    {
      if ( is_hard )
      {
        if ( *(_BYTE *)(((unsigned __int64)&config_ptr->hard_level_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&config_ptr->hard_level_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&config_ptr->hard_level_id);
        }
        hard_level_id = config_ptr->hard_level_id;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&config_ptr->normal_level_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->normal_level_id >> 3)
                                                                    + 0x7FFF8000) )
        {
          __asan_report_load4(&config_ptr->normal_level_id);
        }
        hard_level_id = config_ptr->normal_level_id;
      }
      *(_DWORD *)(v2 + 32) = hard_level_id;
      if ( common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
             &challenge_data->unlock_level_id_set,
             (const unsigned int *)(v2 + 32))
        && GCGLevelChallenge::findLevelData(this, *(_DWORD *)(v2 + 32)) )
      {
        ++finish_num;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/card_game/gcg_level_challenge.cpp",
        "getFinishSpecifiedDifficultyBossChallengeNum",
        882);
      v6 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
             &v21,
             (const char (*)[39])"findGCGBossLevelExcelConfig fail. id: ");
      v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, id);
      v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v7, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      *(_DWORD *)(v2 + 32) = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v21);
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,GCGBossChallengeData>>::operator++(&__for_begin);
  }
  result = finish_num;
  if ( v22 == (char *)v2 )
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

// Line 901: range 00000000150EE5FC-00000000150EED9A
__int64 __fastcall GCGLevelChallenge::startBreakLevel(
        GCGLevelChallenge *const this,
        uint32_t level_id,
        char is_restart)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  __int64 result; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  PlayerQuestComp *QuestComp; // rcx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r14
  PlayerGCGComp *GCGComp; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // r14
  PlayerGCGComp *v24; // r14
  GCGGrowthExcelConfigMgr *gcg_growth_config_mgr; // [rsp+18h] [rbp-138h]
  GCGPlayingExcelConfigMgr *gcg_playing_config_mgr; // [rsp+20h] [rbp-130h]
  const data::GCGQuestLevelExcelConfig *quest_level_config_ptr; // [rsp+28h] [rbp-128h]
  std::shared_ptr<Config> v29; // [rsp+30h] [rbp-120h] BYREF
  std::vector<unsigned int> param_vec; // [rsp+40h] [rbp-110h] BYREF
  common::milog::MiLogStream v31; // [rsp+60h] [rbp-F0h] BYREF
  common::milog::MiLogStream v32; // [rsp+80h] [rbp-D0h] BYREF
  char v33[176]; // [rsp+A0h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 15 quest_state:918 64 4 7 ret:928 80 4 12 level_id:900 96 12 10 option:925";
  *(_QWORD *)(v3 + 16) = GCGLevelChallenge::startBreakLevel;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -202177536;
  *(_DWORD *)(v3 + 80) = level_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v29);
  gcg_growth_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v29)->design_config.txt_config_mgr.gcg_growth_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v29);
  if ( !GCGGrowthExcelConfigMgr::isBreakLevel(gcg_growth_config_mgr, *(_DWORD *)(v3 + 80)) )
  {
    common::milog::MiLogStream::create(
      &v32,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/card_game/gcg_level_challenge.cpp",
      "startBreakLevel",
      906);
    v6 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v32,
           (const char (*)[30])"is not break level, level_id:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 80));
    v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v7, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    *(_DWORD *)(v3 + 64) = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 64));
    common::milog::MiLogStream::~MiLogStream(&v32);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v29);
    gcg_playing_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v29)->design_config.txt_config_mgr.gcg_playing_config_mgr;
    std::shared_ptr<Config>::~shared_ptr(&v29);
    quest_level_config_ptr = data::GCGPlayingExcelConfigMgrBase::findGCGQuestLevelExcelConfig(
                               gcg_playing_config_mgr,
                               *(_DWORD *)(v3 + 80));
    if ( quest_level_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      QuestComp = Player::getQuestComp(this->player_);
      if ( *(_BYTE *)(((unsigned __int64)&quest_level_config_ptr->quest_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)quest_level_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&quest_level_config_ptr->quest_id >> 3)
                                                                              + 0x7FFF8000) )
      {
        __asan_report_load4(&quest_level_config_ptr->quest_id);
      }
      *(_DWORD *)(v3 + 48) = PlayerQuestComp::getQuestState(QuestComp, quest_level_config_ptr->quest_id);
      if ( *(_DWORD *)(v3 + 48) == 2 )
      {
        *(_QWORD *)(v3 + 96) = 0LL;
        *(_DWORD *)(v3 + 104) = 0;
        *(_DWORD *)(v3 + 96) = *(_DWORD *)(v3 + 80);
        *(_BYTE *)(v3 + 104) = is_restart;
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        GCGComp = Player::getGCGComp(this->player_);
        *(_DWORD *)(v3 + 64) = PlayerGCGComp::checkCanEnterGame(GCGComp, (const GCGEnterCheckOption *)(v3 + 96));
        if ( *(_DWORD *)(v3 + 64) )
        {
          common::milog::MiLogStream::create(
            &v31,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/card_game/gcg_level_challenge.cpp",
            "startBreakLevel",
            931);
          v22 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                  &v31,
                  (const char (*)[30])"checkCanEnterGame fail. ret: ");
          v23 = common::milog::MiLogStream::operator<<<int,(int *)0>(v22, (const int *)(v3 + 64));
          GCGEnterCheckOption::getDesc[abi:cxx11]((std::string *)&v32, (GCGEnterCheckOption *const)(v3 + 96));
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v23, (const std::string *)&v32);
          std::string::~string(&v32);
          common::milog::MiLogStream::~MiLogStream(&v31);
          result = *(unsigned int *)(v3 + 64);
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8(this);
          v24 = Player::getGCGComp(this->player_);
          memset(&param_vec, 0, sizeof(param_vec));
          std::vector<unsigned int>::vector(&param_vec);
          PlayerGCGComp::startSingleGame(v24, *(_DWORD *)(v3 + 80), GCG_GAME_BREAK_CHALLENGE, &param_vec);
          std::vector<unsigned int>::~vector(&param_vec);
          result = 0LL;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v32,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/card_game/gcg_level_challenge.cpp",
          "startBreakLevel",
          921);
        v14 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v32, (const char (*)[10])"quest_id:");
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v14,
                &quest_level_config_ptr->quest_id);
        v16 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v15, (const char (*)[14])" quest_state:");
        v17 = common::milog::MiLogStream::operator<<<data::QuestState,(data::QuestState*)0>(
                v16,
                (const data::QuestState *)(v3 + 48));
        v18 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v17, (const char (*)[10])" level_id");
        v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v18,
                (const unsigned int *)(v3 + 80));
        v20 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v19, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        *(_DWORD *)(v3 + 64) = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v3 + 64));
        common::milog::MiLogStream::~MiLogStream(&v32);
        result = 12125LL;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v32,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/card_game/gcg_level_challenge.cpp",
        "startBreakLevel",
        915);
      v10 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
              &v32,
              (const char (*)[47])"findGCGQuestLevelExcelConfig failed, level_id:");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 80));
      v12 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v11, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      *(_DWORD *)(v3 + 64) = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 64));
      common::milog::MiLogStream::~MiLogStream(&v32);
      result = 5LL;
    }
  }
  if ( v33 == (char *)v3 )
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

// Line 939: range 00000000150EED9C-00000000150EF337
__int64 __fastcall GCGLevelChallenge::startQuestLevel(
        GCGLevelChallenge *const this,
        uint32_t quest_id,
        char is_restart)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  PlayerGCGComp *GCGComp; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  PlayerQuestComp *QuestComp; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rbx
  PlayerGCGComp *v17; // rbx
  unsigned int val; // [rsp+10h] [rbp-130h] BYREF
  uint32_t level_id; // [rsp+14h] [rbp-12Ch]
  const GCGPlayingExcelConfigMgr *gcg_playing_config_mgr; // [rsp+18h] [rbp-128h]
  std::shared_ptr<Config> v22; // [rsp+20h] [rbp-120h] BYREF
  std::vector<unsigned int> param_vec; // [rsp+30h] [rbp-110h] BYREF
  common::milog::MiLogStream v24; // [rsp+50h] [rbp-F0h] BYREF
  common::milog::MiLogStream v25; // [rsp+70h] [rbp-D0h] BYREF
  char v26[176]; // [rsp+90h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 7 ret:951 64 4 15 quest_state:957 80 4 12 quest_id:938 96 12 10 option:948";
  *(_QWORD *)(v3 + 16) = GCGLevelChallenge::startQuestLevel;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -202177536;
  *(_DWORD *)(v3 + 80) = quest_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v22);
  gcg_playing_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22)->design_config.txt_config_mgr.gcg_playing_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v22);
  if ( !GCGPlayingExcelConfigMgr::isQuestInQuestLevel(gcg_playing_config_mgr, *(_DWORD *)(v3 + 80)) )
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/card_game/gcg_level_challenge.cpp",
      "startQuestLevel",
      943);
    v6 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           &v25,
           (const char (*)[31])"quest id not valid. quest_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 80));
    common::milog::MiLogStream::~MiLogStream(&v25);
    result = 12132LL;
  }
  else
  {
    level_id = GCGPlayingExcelConfigMgr::getQuestLevelByQuest(gcg_playing_config_mgr, *(_DWORD *)(v3 + 80));
    *(_QWORD *)(v3 + 96) = 0LL;
    *(_DWORD *)(v3 + 104) = 0;
    *(_DWORD *)(v3 + 96) = level_id;
    *(_BYTE *)(v3 + 104) = is_restart;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    GCGComp = Player::getGCGComp(this->player_);
    *(_DWORD *)(v3 + 48) = PlayerGCGComp::checkCanEnterGame(GCGComp, (const GCGEnterCheckOption *)(v3 + 96));
    if ( *(_DWORD *)(v3 + 48) )
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/card_game/gcg_level_challenge.cpp",
        "startQuestLevel",
        954);
      v9 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
             &v24,
             (const char (*)[30])"checkCanEnterGame fail. ret: ");
      v10 = common::milog::MiLogStream::operator<<<int,(int *)0>(v9, (const int *)(v3 + 48));
      GCGEnterCheckOption::getDesc[abi:cxx11]((std::string *)&v25, (GCGEnterCheckOption *const)(v3 + 96));
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, (const std::string *)&v25);
      std::string::~string(&v25);
      common::milog::MiLogStream::~MiLogStream(&v24);
      result = *(unsigned int *)(v3 + 48);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      QuestComp = Player::getQuestComp(this->player_);
      *(_DWORD *)(v3 + 64) = PlayerQuestComp::getQuestState(QuestComp, *(_DWORD *)(v3 + 80));
      if ( *(_DWORD *)(v3 + 64) == 2 )
      {
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        v17 = Player::getGCGComp(this->player_);
        memset(&param_vec, 0, sizeof(param_vec));
        std::vector<unsigned int>::vector(&param_vec);
        PlayerGCGComp::startSingleGame(v17, level_id, GCG_GAME_QUEST, &param_vec);
        std::vector<unsigned int>::~vector(&param_vec);
        result = 0LL;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v25,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/card_game/gcg_level_challenge.cpp",
          "startQuestLevel",
          960);
        v12 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v25, (const char (*)[10])"quest_id:");
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v12,
                (const unsigned int *)(v3 + 80));
        v14 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v13, (const char (*)[14])" quest_state:");
        v15 = common::milog::MiLogStream::operator<<<data::QuestState,(data::QuestState*)0>(
                v14,
                (const data::QuestState *)(v3 + 64));
        v16 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v15, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &val);
        common::milog::MiLogStream::~MiLogStream(&v25);
        result = 12133LL;
      }
    }
  }
  if ( v26 == (char *)v3 )
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

// Line 968: range 00000000150EF338-00000000150EF523
__int64 __fastcall GCGLevelChallenge::getGuideLevelByQuest(const GCGLevelChallenge *const this, uint32_t quest_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  uint32_t game_group_id; // [rsp+18h] [rbp-98h]
  uint32_t level_id; // [rsp+1Ch] [rbp-94h]
  std::shared_ptr<Config> v10; // [rsp+20h] [rbp-90h] BYREF
  common::milog::MiLogStream v11; // [rsp+30h] [rbp-80h] BYREF
  char v12[96]; // [rsp+50h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 quest_id:967";
  *(_QWORD *)(v2 + 16) = GCGLevelChallenge::getGuideLevelByQuest;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = quest_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v10);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v10);
  game_group_id = GCGPlayingExcelConfigMgr::getGuideGroupIdByQuest(
                    &v5->design_config.txt_config_mgr.gcg_playing_config_mgr,
                    *(_DWORD *)(v2 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v10);
  level_id = GCGLevelChallenge::getGuideLevel(this, game_group_id);
  if ( !level_id )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/card_game/gcg_level_challenge.cpp",
      "getGuideLevelByQuest",
      973);
    v6 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
           &v11,
           (const char (*)[38])"getGuideLevelByQuest fail. quest_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v11);
  }
  result = level_id;
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

// Line 979: range 00000000150EF524-00000000150EF88D
__int64 __fastcall GCGLevelChallenge::getGuideLevel(const GCGLevelChallenge *const this, uint32_t game_group_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  std::vector<unsigned int>::size_type v8; // r15
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  std::vector<unsigned int>::const_reference v12; // rax
  unsigned int *v13; // rdx
  const data::GCGGameGroupExcelConfig *config_ptr; // [rsp+18h] [rbp-C8h]
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
  *(_QWORD *)(v2 + 8) = "2 48 4 12 progress:986 64 4 17 game_group_id:978";
  *(_QWORD *)(v2 + 16) = GCGLevelChallenge::getGuideLevel;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  *(_DWORD *)(v2 + 64) = game_group_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v15);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15);
  config_ptr = data::GCGPlayingExcelConfigMgrBase::findGCGGameGroupExcelConfig(
                 &v5->design_config.txt_config_mgr.gcg_playing_config_mgr,
                 *(_DWORD *)(v2 + 64));
  std::shared_ptr<Config>::~shared_ptr(&v15);
  if ( config_ptr )
  {
    *(_DWORD *)(v2 + 48) = common::tools::MiscUtils::findMapWithDefaultValue<std::map<unsigned int,unsigned int>>(
                             &this->guide_level_group_map_,
                             (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 64),
                             0);
    v8 = *(unsigned int *)(v2 + 48);
    if ( v8 < std::vector<unsigned int>::size(&config_ptr->level_list) )
    {
      v12 = std::vector<unsigned int>::operator[](&config_ptr->level_list, *(unsigned int *)(v2 + 48));
      v13 = (unsigned int *)v12;
      if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v12);
      }
      result = *v13;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/card_game/gcg_level_challenge.cpp",
        "getGuideLevel",
        989);
      v9 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
             &v16,
             (const char (*)[49])"progress larger than level list size. progress: ");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
      v11 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v10, (const char (*)[14])" level_list: ");
      common::milog::MiLogStream::operator<<<unsigned int>(v11, &config_ptr->level_list);
      common::milog::MiLogStream::~MiLogStream(&v16);
      result = 0LL;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/card_game/gcg_level_challenge.cpp",
      "getGuideLevel",
      983);
    v6 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
           &v16,
           (const char (*)[50])"findGCGGameGroupExcelConfig fail. game_group_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 64));
    common::milog::MiLogStream::~MiLogStream(&v16);
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

// Line 996: range 00000000150EF88E-00000000150EFDD0
__int64 __fastcall GCGLevelChallenge::startGuideLevel(
        GCGLevelChallenge *const this,
        uint32_t quest_id,
        uint32_t level_id,
        char is_restart)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  PlayerQuestComp *QuestComp; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  PlayerGCGComp *GCGComp; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  PlayerGCGComp *v18; // r14
  std::vector<unsigned int> param_vec; // [rsp+20h] [rbp-110h] BYREF
  common::milog::MiLogStream v22; // [rsp+40h] [rbp-F0h] BYREF
  common::milog::MiLogStream v23; // [rsp+60h] [rbp-D0h] BYREF
  char v24[176]; // [rsp+80h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 32 4 16 quest_state:1002 48 4 8 ret:1012 64 4 12 quest_id:995 80 4 12 level_id:995 96 12 11 option:1008";
  *(_QWORD *)(v4 + 16) = GCGLevelChallenge::startGuideLevel;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -234556924;
  v6[536862723] = -202177536;
  *(_DWORD *)(v4 + 64) = quest_id;
  *(_DWORD *)(v4 + 80) = level_id;
  if ( (unsigned int)GCGLevelChallenge::getGuideLevelByQuest(this, *(_DWORD *)(v4 + 64)) == *(_DWORD *)(v4 + 80) )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    QuestComp = Player::getQuestComp(this->player_);
    *(_DWORD *)(v4 + 32) = PlayerQuestComp::getQuestState(QuestComp, *(_DWORD *)(v4 + 64));
    if ( *(_DWORD *)(v4 + 32) == 2 )
    {
      *(_QWORD *)(v4 + 96) = 0LL;
      *(_DWORD *)(v4 + 104) = 0;
      *(_DWORD *)(v4 + 96) = *(_DWORD *)(v4 + 80);
      *(_BYTE *)(v4 + 104) = is_restart;
      *(_BYTE *)(v4 + 100) = 1;
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      GCGComp = Player::getGCGComp(this->player_);
      *(_DWORD *)(v4 + 48) = PlayerGCGComp::checkCanEnterGame(GCGComp, (const GCGEnterCheckOption *)(v4 + 96));
      if ( *(_DWORD *)(v4 + 48) )
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/card_game/gcg_level_challenge.cpp",
          "startGuideLevel",
          1015);
        v16 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                &v22,
                (const char (*)[30])"checkCanEnterGame fail. ret: ");
        v17 = common::milog::MiLogStream::operator<<<int,(int *)0>(v16, (const int *)(v4 + 48));
        GCGEnterCheckOption::getDesc[abi:cxx11]((std::string *)&v23, (GCGEnterCheckOption *const)(v4 + 96));
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v17, (const std::string *)&v23);
        std::string::~string(&v23);
        common::milog::MiLogStream::~MiLogStream(&v22);
        result = *(unsigned int *)(v4 + 48);
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        v18 = Player::getGCGComp(this->player_);
        memset(&param_vec, 0, sizeof(param_vec));
        std::vector<unsigned int>::vector(&param_vec);
        PlayerGCGComp::startSingleGame(v18, *(_DWORD *)(v4 + 80), GCG_GAME_GUIDE_GROUP, &param_vec);
        std::vector<unsigned int>::~vector(&param_vec);
        result = 0LL;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/card_game/gcg_level_challenge.cpp",
        "startGuideLevel",
        1005);
      v10 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v23, (const char (*)[10])"quest_id:");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v4 + 64));
      v12 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v11, (const char (*)[14])" quest_state:");
      v13 = common::milog::MiLogStream::operator<<<data::QuestState,(data::QuestState*)0>(
              v12,
              (const data::QuestState *)(v4 + 32));
      v14 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v13, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      *(_DWORD *)(v4 + 48) = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v4 + 48));
      common::milog::MiLogStream::~MiLogStream(&v23);
      result = 12133LL;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/card_game/gcg_level_challenge.cpp",
      "startGuideLevel",
      999);
    v7 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           &v23,
           (const char (*)[31])"level id not match. level_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 80));
    common::milog::MiLogStream::~MiLogStream(&v23);
    result = 12132LL;
  }
  if ( v24 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1023: range 00000000150EFDD2-00000000150F0349
__int64 __fastcall GCGLevelChallenge::continueGuideLevel(
        GCGLevelChallenge *const this,
        uint32_t quest_id,
        uint32_t pre_level_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  PlayerGCGComp *GCGComp; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  PlayerGCGComp *v18; // r14
  uint32_t level_id; // [rsp+14h] [rbp-12Ch]
  GCGPlayingExcelConfigMgr *gcg_playing_config_mgr; // [rsp+18h] [rbp-128h]
  std::shared_ptr<Config> v22; // [rsp+20h] [rbp-120h] BYREF
  std::vector<unsigned int> param_vec; // [rsp+30h] [rbp-110h] BYREF
  common::milog::MiLogStream v24; // [rsp+50h] [rbp-F0h] BYREF
  common::milog::MiLogStream v25; // [rsp+70h] [rbp-D0h] BYREF
  char v26[176]; // [rsp+90h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 4 18 game_group_id:1025 48 4 8 ret:1042 64 4 13 quest_id:1022 80 4 17 pre_level_id:1022 96 "
                        "12 11 option:1038";
  *(_QWORD *)(v3 + 16) = GCGLevelChallenge::continueGuideLevel;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -234556924;
  v5[536862723] = -202177536;
  *(_DWORD *)(v3 + 64) = quest_id;
  *(_DWORD *)(v3 + 80) = pre_level_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v22);
  gcg_playing_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22)->design_config.txt_config_mgr.gcg_playing_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v22);
  *(_DWORD *)(v3 + 32) = GCGPlayingExcelConfigMgr::getGuideGroupIdByQuest(gcg_playing_config_mgr, *(_DWORD *)(v3 + 64));
  if ( GCGPlayingExcelConfigMgr::getGuideGroupIdByLevel(gcg_playing_config_mgr, *(_DWORD *)(v3 + 80)) == *(_DWORD *)(v3 + 32) )
  {
    level_id = GCGLevelChallenge::getGuideLevelByQuest(this, *(_DWORD *)(v3 + 64));
    if ( level_id )
    {
      *(_QWORD *)(v3 + 96) = 0LL;
      *(_DWORD *)(v3 + 104) = 0;
      *(_DWORD *)(v3 + 96) = level_id;
      *(_BYTE *)(v3 + 104) = 1;
      *(_BYTE *)(v3 + 100) = 1;
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      GCGComp = Player::getGCGComp(this->player_);
      *(_DWORD *)(v3 + 48) = PlayerGCGComp::checkCanEnterGame(GCGComp, (const GCGEnterCheckOption *)(v3 + 96));
      if ( *(_DWORD *)(v3 + 48) )
      {
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/card_game/gcg_level_challenge.cpp",
          "continueGuideLevel",
          1045);
        v16 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                &v24,
                (const char (*)[30])"checkCanEnterGame fail. ret: ");
        v17 = common::milog::MiLogStream::operator<<<int,(int *)0>(v16, (const int *)(v3 + 48));
        GCGEnterCheckOption::getDesc[abi:cxx11]((std::string *)&v25, (GCGEnterCheckOption *const)(v3 + 96));
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v17, (const std::string *)&v25);
        std::string::~string(&v25);
        common::milog::MiLogStream::~MiLogStream(&v24);
        result = *(unsigned int *)(v3 + 48);
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        v18 = Player::getGCGComp(this->player_);
        memset(&param_vec, 0, sizeof(param_vec));
        std::vector<unsigned int>::vector(&param_vec);
        PlayerGCGComp::startSingleGame(v18, level_id, GCG_GAME_GUIDE_GROUP, &param_vec);
        std::vector<unsigned int>::~vector(&param_vec);
        GCGLevelChallenge::recordPreLevelInfo(this, *(_DWORD *)(v3 + 64), level_id, GCG_LEVEL_GUIDE_GROUP);
        result = 0LL;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/card_game/gcg_level_challenge.cpp",
        "continueGuideLevel",
        1034);
      v12 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(&v25, (const char (*)[36])off_2570A860);
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 64));
      v14 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v13, (const char (*)[17])" game_group_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v25);
      result = 0xFFFFFFFFLL;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/card_game/gcg_level_challenge.cpp",
      "continueGuideLevel",
      1028);
    v6 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
           &v25,
           (const char (*)[48])"pre_level_id not match quest id. pre_level_id: ");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 80));
    v8 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v7, (const char (*)[12])" quest_id: ");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 64));
    v10 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" game_group_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v25);
    result = 0xFFFFFFFFLL;
  }
  if ( v26 == (char *)v3 )
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

// Line 1054: range 00000000150F034A-00000000150F0671
void __fastcall GCGLevelChallenge::onGuideLevelSettle(GCGLevelChallenge *const this, uint32_t level_id, bool is_win)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  unsigned __int64 v10; // rax
  GCGPlayingExcelConfigMgr *gcg_playing_config_mgr; // [rsp+18h] [rbp-B8h]
  std::shared_ptr<Config> v13; // [rsp+20h] [rbp-B0h] BYREF
  common::milog::MiLogStream v14; // [rsp+30h] [rbp-A0h] BYREF
  char v15[128]; // [rsp+50h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 18 game_group_id:1060 48 4 17 cur_level_id:1066 64 4 13 level_id:1053";
  *(_QWORD *)(v3 + 16) = GCGLevelChallenge::onGuideLevelSettle;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 64) = level_id;
  if ( is_win )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v13);
    gcg_playing_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13)->design_config.txt_config_mgr.gcg_playing_config_mgr;
    std::shared_ptr<Config>::~shared_ptr(&v13);
    *(_DWORD *)(v3 + 32) = GCGPlayingExcelConfigMgr::getGuideGroupIdByLevel(
                             gcg_playing_config_mgr,
                             *(_DWORD *)(v3 + 64));
    if ( *(_DWORD *)(v3 + 32) )
    {
      *(_DWORD *)(v3 + 48) = GCGLevelChallenge::getGuideLevel(this, *(_DWORD *)(v3 + 32));
      if ( *(_DWORD *)(v3 + 48) == *(_DWORD *)(v3 + 64) )
      {
        v10 = (unsigned __int64)std::map<unsigned int,unsigned int>::operator[](
                                  &this->guide_level_group_map_,
                                  (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 32));
        if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) != 0 && (char)((v10 & 7) + 3) >= *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
          v10 = __asan_report_load4(v10);
        ++*(_DWORD *)v10;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v14,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/card_game/gcg_level_challenge.cpp",
          "onGuideLevelSettle",
          1069);
        v7 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
               &v14,
               (const char (*)[35])"level id not match. cur_level_id: ");
        v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
        v9 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v8, (const char (*)[8])" level:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 64));
        common::milog::MiLogStream::~MiLogStream(&v14);
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/card_game/gcg_level_challenge.cpp",
        "onGuideLevelSettle",
        1063);
      v6 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
             &v14,
             (const char (*)[40])"getGuideGroupIdByLevel fail. level_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 64));
      common::milog::MiLogStream::~MiLogStream(&v14);
    }
  }
  if ( v15 == (char *)v3 )
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

// Line 1077: range 00000000150F0672-00000000150F0744
void __fastcall GCGLevelChallenge::onGMResetGuideProgress(GCGLevelChallenge *const this, uint32_t game_group_id)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 18 game_group_id:1076";
  *(_QWORD *)(v2 + 16) = GCGLevelChallenge::onGMResetGuideProgress;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = game_group_id;
  std::map<unsigned int,unsigned int>::erase(
    &this->guide_level_group_map_,
    (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 32));
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
