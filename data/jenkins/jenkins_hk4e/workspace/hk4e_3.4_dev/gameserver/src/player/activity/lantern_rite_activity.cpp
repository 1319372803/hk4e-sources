// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/lantern_rite_activity.cpp

// Line 38: range 0000000015FE60B0-0000000015FE6E58
int32_t __cdecl LanternRiteActivity::fromScheduleBin(
        LanternRiteActivity *const this,
        const proto::ActivityScheduleBin *bin)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  google::protobuf::uint32 v5; // r14d
  std::unordered_map<proto::VirtualItem,unsigned int>::mapped_type *v6; // rax
  google::protobuf::uint32 *v7; // rdx
  google::protobuf::uint32 v8; // r14d
  std::unordered_map<proto::VirtualItem,unsigned int>::mapped_type *v9; // rax
  google::protobuf::uint32 *v10; // rdx
  google::protobuf::uint32 v11; // r14d
  std::unordered_map<proto::VirtualItem,unsigned int>::mapped_type *v12; // rax
  google::protobuf::uint32 *v13; // rdx
  const proto::LanternRiteProjectionBin *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  const proto::LanternRiteFireworksBin *v17; // rdx
  uint32_t v18; // edx
  bool is_open; // cl
  bool is_finished; // cl
  int v21; // eax
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rdx
  common::milog::MiLogStream *v28; // rax
  bool is_mini_eldritch_dungeon_open; // dl
  bool is_taken_skin_reward; // cl
  unsigned int v31; // r14d
  std::map<data::SalvagePlayType,unsigned int> *p_salvage_current_tracking_bundle_map; // rcx
  std::map<data::SalvagePlayType,unsigned int>::mapped_type *v33; // rax
  unsigned int *v34; // rdx
  bool is_content_closed; // dl
  char __args_0[9]; // [rsp+17h] [rbp-169h] BYREF
  google::protobuf::RepeatedPtrField<proto::LanternSalvageStageBin>::const_iterator __for_end; // [rsp+20h] [rbp-160h] BYREF
  google::protobuf::RepeatedPtrField<proto::SalvageChallengeBin>::const_iterator __for_begin_0; // [rsp+28h] [rbp-158h] BYREF
  google::protobuf::RepeatedPtrField<proto::SalvageChallengeBin>::const_iterator __for_end_0; // [rsp+30h] [rbp-150h] BYREF
  const proto::LanternRiteScheduleBin *lantern_rite_bin; // [rsp+38h] [rbp-148h]
  const google::protobuf::RepeatedPtrField<proto::LanternSalvageStageBin> *__for_range; // [rsp+40h] [rbp-140h]
  const google::protobuf::Map<unsigned int,unsigned int> *__for_range_1; // [rsp+48h] [rbp-138h]
  const unsigned int *p_play_type; // [rsp+50h] [rbp-130h]
  const proto::LanternSalvageStageBin *stage_bin; // [rsp+58h] [rbp-128h]
  LanternSalvageStage *stage; // [rsp+60h] [rbp-120h]
  const google::protobuf::RepeatedPtrField<proto::SalvageChallengeBin> *__for_range_0; // [rsp+68h] [rbp-118h]
  const proto::SalvageChallengeBin *challenge_bin; // [rsp+70h] [rbp-110h]
  std::vector<std::shared_ptr<BaseSalvageChallenge>> *challenge_vec; // [rsp+78h] [rbp-108h]
  std::shared_ptr<BaseSalvageChallenge> __x; // [rsp+80h] [rbp-100h] BYREF
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __for_begin_1; // [rsp+90h] [rbp-F0h] BYREF
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __for_end_1; // [rsp+B0h] [rbp-D0h] BYREF
  common::milog::MiLogStream v52; // [rsp+D0h] [rbp-B0h] BYREF
  char v53[144]; // [rsp+F0h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v53;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 play_type:63 64 16 21 boss_challenge_ptr:85";
  *(_QWORD *)(v2 + 16) = LanternRiteActivity::fromScheduleBin;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  lantern_rite_bin = proto::ActivityScheduleBin::lantern_rite_bin(bin);
  std::unordered_map<proto::VirtualItem,unsigned int>::clear(&this->activity_coin_map_);
  v5 = proto::LanternRiteScheduleBin::coin_a(lantern_rite_bin);
  *(_DWORD *)(v2 + 48) = 137;
  v6 = std::unordered_map<proto::VirtualItem,unsigned int>::operator[](
         &this->activity_coin_map_,
         (std::unordered_map<proto::VirtualItem,unsigned int>::key_type *)(v2 + 48));
  v7 = v6;
  if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v6);
  }
  *v7 = v5;
  v8 = proto::LanternRiteScheduleBin::coin_b(lantern_rite_bin);
  *(_DWORD *)(v2 + 48) = 138;
  v9 = std::unordered_map<proto::VirtualItem,unsigned int>::operator[](
         &this->activity_coin_map_,
         (std::unordered_map<proto::VirtualItem,unsigned int>::key_type *)(v2 + 48));
  v10 = v9;
  if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v9);
  }
  *v10 = v8;
  v11 = proto::LanternRiteScheduleBin::coin_c(lantern_rite_bin);
  *(_DWORD *)(v2 + 48) = 139;
  v12 = std::unordered_map<proto::VirtualItem,unsigned int>::operator[](
          &this->activity_coin_map_,
          (std::unordered_map<proto::VirtualItem,unsigned int>::key_type *)(v2 + 48));
  v13 = v12;
  if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v12);
  }
  *v13 = v11;
  v14 = proto::LanternRiteScheduleBin::projection_bin(lantern_rite_bin);
  if ( LanternRiteActivity::fromProjectionBin(this, v14) )
  {
    common::milog::MiLogStream::create(
      &v52,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/lantern_rite_activity.cpp",
      "fromScheduleBin",
      46);
    v15 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
            &v52,
            (const char (*)[45])"[LanternRite] fromProjectionBin fails, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_13:
    *(_DWORD *)(v2 + 48) = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v52);
    result = -1;
    goto LABEL_69;
  }
  v17 = proto::LanternRiteScheduleBin::fireworks_bin(lantern_rite_bin);
  if ( LanternRiteActivity::fromFireworksBin(this, v17) )
  {
    common::milog::MiLogStream::create(
      &v52,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/lantern_rite_activity.cpp",
      "fromScheduleBin",
      51);
    v15 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
            &v52,
            (const char (*)[44])"[LanternRite] fromFireworksBin fails, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_13;
  }
  std::map<unsigned int,LanternSalvageStage>::clear(&this->salvage_stage_map_);
  __for_range = proto::LanternRiteScheduleBin::salvage_stage_bin_list(lantern_rite_bin);
  *(google::protobuf::RepeatedPtrField<proto::LanternSalvageStageBin>::const_iterator *)&__args_0[1] = google::protobuf::RepeatedPtrField<proto::LanternSalvageStageBin>::begin(__for_range);
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::LanternSalvageStageBin>::end(__for_range).it_;
LABEL_19:
  if ( google::protobuf::internal::RepeatedPtrIterator<proto::LanternSalvageStageBin const>::operator!=(
         (const google::protobuf::internal::RepeatedPtrIterator<const proto::LanternSalvageStageBin> *const)&__args_0[1],
         &__for_end) )
  {
    stage_bin = google::protobuf::internal::RepeatedPtrIterator<proto::LanternSalvageStageBin const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::LanternSalvageStageBin> *const)&__args_0[1]);
    *(_DWORD *)(v2 + 48) = proto::LanternSalvageStageBin::stage_id(stage_bin);
    stage = std::map<unsigned int,LanternSalvageStage>::operator[](
              &this->salvage_stage_map_,
              (std::map<unsigned int,LanternSalvageStage>::key_type *)(v2 + 48));
    v18 = proto::LanternSalvageStageBin::stage_id(stage_bin);
    if ( *(_BYTE *)(((unsigned __int64)stage >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)stage >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(stage);
    }
    stage->stage_id = v18;
    is_open = proto::LanternSalvageStageBin::is_open(stage_bin);
    if ( *(_BYTE *)(((unsigned __int64)&stage->is_open >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)stage + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&stage->is_open >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(&stage->is_open);
    }
    stage->is_open = is_open;
    is_finished = proto::LanternSalvageStageBin::is_finished(stage_bin);
    if ( *(_BYTE *)(((unsigned __int64)&stage->is_finished >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)stage + 5) & 7) >= *(_BYTE *)(((unsigned __int64)&stage->is_finished >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(&stage->is_finished);
    }
    stage->is_finished = is_finished;
    __for_range_0 = proto::LanternSalvageStageBin::challenge_bin_list(stage_bin);
    __for_begin_0.it_ = google::protobuf::RepeatedPtrField<proto::SalvageChallengeBin>::begin(__for_range_0).it_;
    __for_end_0.it_ = google::protobuf::RepeatedPtrField<proto::SalvageChallengeBin>::end(__for_range_0).it_;
    while ( 1 )
    {
      if ( !google::protobuf::internal::RepeatedPtrIterator<proto::SalvageChallengeBin const>::operator!=(
              &__for_begin_0,
              &__for_end_0) )
      {
        google::protobuf::internal::RepeatedPtrIterator<proto::LanternSalvageStageBin const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::LanternSalvageStageBin> *const)&__args_0[1]);
        goto LABEL_19;
      }
      challenge_bin = google::protobuf::internal::RepeatedPtrIterator<proto::SalvageChallengeBin const>::operator*(&__for_begin_0);
      *(_DWORD *)(v2 + 48) = proto::SalvageChallengeBin::challenge_type(challenge_bin);
      challenge_vec = std::map<data::SalvagePlayType,std::vector<std::shared_ptr<BaseSalvageChallenge>>>::operator[](
                        &stage->stage_challenge_map,
                        (const std::map<data::SalvagePlayType,std::vector<std::shared_ptr<BaseSalvageChallenge>>>::key_type *)(v2 + 48));
      v21 = *(_DWORD *)(v2 + 48);
      if ( v21 == 5 )
      {
        __args_0[0] = proto::SalvageChallengeBin::is_unlock(challenge_bin);
        common::tools::perf::make_shared<SalvageBossChallenge,data::SalvagePlayType &,bool>(
          (data::SalvagePlayType *)(v2 + 64),
          (bool *)(v2 + 48),
          (data::SalvagePlayType *)__args_0,
          (bool *)(v2 + 48));
        v26 = (unsigned __int64)std::__shared_ptr_access<SalvageBossChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SalvageBossChallenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        if ( *(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
          v26 = __asan_report_load8();
        v27 = *(_QWORD *)v26 + 24LL;
        if ( *(_BYTE *)((v27 >> 3) + 0x7FFF8000) )
          v26 = __asan_report_load8();
        (*(void (__fastcall **)(unsigned __int64, const proto::SalvageChallengeBin *))v27)(v26, challenge_bin);
        std::shared_ptr<BaseSalvageChallenge>::shared_ptr<SalvageBossChallenge,void>(
          &__x,
          (const std::shared_ptr<SalvageBossChallenge> *)(v2 + 64));
        std::vector<std::shared_ptr<BaseSalvageChallenge>>::push_back(challenge_vec, &__x);
        std::shared_ptr<BaseSalvageChallenge>::~shared_ptr(&__x);
        std::shared_ptr<SalvageBossChallenge>::~shared_ptr((std::shared_ptr<SalvageBossChallenge> *const)(v2 + 64));
      }
      else
      {
        if ( v21 > 5 )
          goto LABEL_50;
        if ( v21 > 2 )
        {
          if ( (unsigned int)(v21 - 3) > 1 )
          {
LABEL_50:
            common::milog::MiLogStream::create(
              &v52,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/activity/lantern_rite_activity.cpp",
              "fromScheduleBin",
              91);
            v28 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                    &v52,
                    (const char (*)[38])"[LanternRite] unknown challenge type:");
            common::milog::MiLogStream::operator<<<data::SalvagePlayType,(data::SalvagePlayType*)0>(
              v28,
              (const data::SalvagePlayType *)(v2 + 48));
            common::milog::MiLogStream::~MiLogStream(&v52);
            goto LABEL_51;
          }
          __args_0[0] = proto::SalvageChallengeBin::is_unlock(challenge_bin);
          common::tools::perf::make_shared<SalvageScoreChallenge,data::SalvagePlayType &,bool>(
            (data::SalvagePlayType *)(v2 + 64),
            (bool *)(v2 + 48),
            (data::SalvagePlayType *)__args_0,
            (bool *)(v2 + 48));
          v24 = (unsigned __int64)std::__shared_ptr_access<SalvageScoreChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SalvageScoreChallenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          if ( *(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
            v24 = __asan_report_load8();
          v25 = *(_QWORD *)v24 + 24LL;
          if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
            v24 = __asan_report_load8();
          (*(void (__fastcall **)(unsigned __int64, const proto::SalvageChallengeBin *))v25)(v24, challenge_bin);
          std::shared_ptr<BaseSalvageChallenge>::shared_ptr<SalvageScoreChallenge,void>(
            &__x,
            (const std::shared_ptr<SalvageScoreChallenge> *)(v2 + 64));
          std::vector<std::shared_ptr<BaseSalvageChallenge>>::push_back(challenge_vec, &__x);
          std::shared_ptr<BaseSalvageChallenge>::~shared_ptr(&__x);
          std::shared_ptr<SalvageScoreChallenge>::~shared_ptr((std::shared_ptr<SalvageScoreChallenge> *const)(v2 + 64));
        }
        else
        {
          if ( v21 <= 0 )
            goto LABEL_50;
          __args_0[0] = proto::SalvageChallengeBin::is_unlock(challenge_bin);
          common::tools::perf::make_shared<SalvageBundleChallenge,data::SalvagePlayType &,bool>(
            (data::SalvagePlayType *)(v2 + 64),
            (bool *)(v2 + 48),
            (data::SalvagePlayType *)__args_0,
            (bool *)(v2 + 48));
          v22 = (unsigned __int64)std::__shared_ptr_access<SalvageBundleChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SalvageBundleChallenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
            v22 = __asan_report_load8();
          v23 = *(_QWORD *)v22 + 24LL;
          if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
            v22 = __asan_report_load8();
          (*(void (__fastcall **)(unsigned __int64, const proto::SalvageChallengeBin *))v23)(v22, challenge_bin);
          std::shared_ptr<BaseSalvageChallenge>::shared_ptr<SalvageBundleChallenge,void>(
            &__x,
            (const std::shared_ptr<SalvageBundleChallenge> *)(v2 + 64));
          std::vector<std::shared_ptr<BaseSalvageChallenge>>::push_back(challenge_vec, &__x);
          std::shared_ptr<BaseSalvageChallenge>::~shared_ptr(&__x);
          std::shared_ptr<SalvageBundleChallenge>::~shared_ptr((std::shared_ptr<SalvageBundleChallenge> *const)(v2 + 64));
        }
      }
LABEL_51:
      google::protobuf::internal::RepeatedPtrIterator<proto::SalvageChallengeBin const>::operator++(&__for_begin_0);
    }
  }
  is_mini_eldritch_dungeon_open = proto::LanternRiteScheduleBin::is_mini_eldritch_dungeon_open(lantern_rite_bin);
  if ( *(char *)(((unsigned __int64)&this->is_mini_eldritch_dungeon_open_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_mini_eldritch_dungeon_open_);
  this->is_mini_eldritch_dungeon_open_ = is_mini_eldritch_dungeon_open;
  is_taken_skin_reward = proto::LanternRiteScheduleBin::is_taken_skin_reward(lantern_rite_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_taken_skin_reward_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 73) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_taken_skin_reward_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_taken_skin_reward_);
  }
  this->is_taken_skin_reward_ = is_taken_skin_reward;
  std::map<data::SalvagePlayType,unsigned int>::clear(&this->salvage_current_tracking_bundle_map_);
  __for_range_1 = proto::LanternRiteScheduleBin::salvage_tracking_mark_map(lantern_rite_bin);
  google::protobuf::Map<unsigned int,unsigned int>::begin(&__for_begin_1, __for_range_1);
  google::protobuf::Map<unsigned int,unsigned int>::end(&__for_end_1, __for_range_1);
  while ( google::protobuf::operator!=(&__for_begin_1, &__for_end_1) )
  {
    p_play_type = (const unsigned int *)google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator*(&__for_begin_1);
    if ( *(_BYTE *)(((unsigned __int64)(p_play_type + 1) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)p_play_type + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(p_play_type + 1) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v31 = p_play_type[1];
    p_salvage_current_tracking_bundle_map = &this->salvage_current_tracking_bundle_map_;
    if ( *(_BYTE *)(((unsigned __int64)p_play_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_play_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_play_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 48) = *p_play_type;
    v33 = std::map<data::SalvagePlayType,unsigned int>::operator[](
            p_salvage_current_tracking_bundle_map,
            (std::map<data::SalvagePlayType,unsigned int>::key_type *)(v2 + 48));
    v34 = v33;
    if ( *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v33 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v33);
    }
    *v34 = v31;
    google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator++(&__for_begin_1);
  }
  is_content_closed = proto::LanternRiteScheduleBin::is_content_closed(lantern_rite_bin);
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_content_closed_);
  this->is_content_closed_ = is_content_closed;
  result = 0;
LABEL_69:
  if ( v53 == (char *)v2 )
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

// Line 108: range 0000000015FE6E5A-0000000015FE6F07
int32_t __cdecl BaseSalvageChallenge::fromBin(
        BaseSalvageChallenge *const this,
        const proto::SalvageChallengeBin *challenge_bin)
{
  google::protobuf::uint32 v2; // edx
  bool is_unlock; // cl

  v2 = proto::SalvageChallengeBin::challenge_type(challenge_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->challenge_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->challenge_type);
  }
  this->challenge_type = v2;
  is_unlock = proto::SalvageChallengeBin::is_unlock(challenge_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_unlock >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_unlock >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_unlock);
  }
  this->is_unlock = is_unlock;
  return 0;
};

// Line 115: range 0000000015FE6F08-0000000015FE7092
int32_t __cdecl SalvageBundleChallenge::fromBin(
        SalvageBundleChallenge *const this,
        const proto::SalvageChallengeBin *challenge_bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t result; // eax
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin; // [rsp+10h] [rbp-80h]
  const proto::SalvageBundleChallengeBin *bundle_bin; // [rsp+18h] [rbp-78h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range; // [rsp+20h] [rbp-70h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-68h]
  char v10[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 bundle_id:118";
  *(_QWORD *)(v2 + 16) = SalvageBundleChallenge::fromBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  BaseSalvageChallenge::fromBin(this, challenge_bin);
  bundle_bin = proto::SalvageChallengeBin::bundle_info(challenge_bin);
  __for_range = proto::SalvageBundleChallengeBin::finished_bundle_list(bundle_bin);
  __for_begin = google::protobuf::RepeatedField<unsigned int>::begin(__for_range);
  __for_end = google::protobuf::RepeatedField<unsigned int>::end(__for_range);
  while ( __for_begin != __for_end )
  {
    if ( *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)__for_begin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 32) = *__for_begin;
    std::set<unsigned int>::insert(&this->finish_bundle_set, (const std::set<unsigned int>::value_type *)(v2 + 32));
    ++__for_begin;
  }
  result = 0;
  if ( v10 == (char *)v2 )
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

// Line 126: range 0000000015FE7094-0000000015FE7167
int32_t __cdecl SalvageScoreChallenge::fromBin(
        SalvageScoreChallenge *const this,
        const proto::SalvageChallengeBin *challenge_bin)
{
  uint32_t v2; // edx
  uint32_t v3; // ecx
  const proto::SalvageScoreChallengeBin *score_info; // [rsp+18h] [rbp-8h]

  BaseSalvageChallenge::fromBin(this, challenge_bin);
  score_info = proto::SalvageChallengeBin::score_challenge_info(challenge_bin);
  v2 = proto::SalvageScoreChallengeBin::salvage_challenge_id(score_info);
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->challenge_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->challenge_id);
  }
  this->challenge_id = v2;
  v3 = proto::SalvageScoreChallengeBin::max_score(score_info);
  if ( *(_BYTE *)(((unsigned __int64)&this->max_score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_score >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_score);
  }
  this->max_score = v3;
  return 0;
};

// Line 135: range 0000000015FE7168-0000000015FE71DA
int32_t __cdecl SalvageBossChallenge::fromBin(
        SalvageBossChallenge *const this,
        const proto::SalvageChallengeBin *challenge_bin)
{
  uint32_t v2; // edx

  BaseSalvageChallenge::fromBin(this, challenge_bin);
  v2 = proto::SalvageChallengeBin::boss_challenge_id(challenge_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->challenge_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->challenge_id);
  }
  this->challenge_id = v2;
  return 0;
};

// Line 142: range 0000000015FE71DC-0000000015FE79E4
int32_t __cdecl LanternRiteActivity::toScheduleBin(
        const LanternRiteActivity *const this,
        proto::ActivityScheduleBin *bin)
{
  proto::LanternRiteProjectionBin *v2; // rdx
  common::milog::MiLogStream *v3; // rbx
  proto::LanternRiteFireworksBin *v5; // rdx
  std::tuple_element<1,const std::pair<const data::SalvagePlayType,unsigned int> >::type v6; // ebx
  unsigned int *v7; // rax
  std::tuple_element<1,const std::pair<const data::SalvagePlayType,unsigned int> >::type *v8; // rdx
  unsigned int val; // [rsp+14h] [rbp-BCh] BYREF
  std::unordered_map<proto::VirtualItem,unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-B8h] BYREF
  std::unordered_map<proto::VirtualItem,unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-B0h] BYREF
  proto::LanternRiteScheduleBin *lantern_rite_bin; // [rsp+28h] [rbp-A8h]
  const std::unordered_map<proto::VirtualItem,unsigned int> *__for_range; // [rsp+30h] [rbp-A0h]
  const std::map<unsigned int,LanternSalvageStage> *__for_range_0; // [rsp+38h] [rbp-98h]
  google::protobuf::Map<unsigned int,unsigned int> *salvage_tracking_bin_map; // [rsp+40h] [rbp-90h]
  const std::map<data::SalvagePlayType,unsigned int> *__for_range_1; // [rsp+48h] [rbp-88h]
  const std::pair<const data::SalvagePlayType,unsigned int> *v17; // [rsp+50h] [rbp-80h]
  std::tuple_element<0,const std::pair<const data::SalvagePlayType,unsigned int> >::type *play_type; // [rsp+58h] [rbp-78h]
  std::tuple_element<1,const std::pair<const data::SalvagePlayType,unsigned int> >::type *bundle_id; // [rsp+60h] [rbp-70h]
  const std::pair<unsigned int const,LanternSalvageStage> *v20; // [rsp+68h] [rbp-68h]
  std::tuple_element<0,const std::pair<unsigned int const,LanternSalvageStage> >::type *stage_id; // [rsp+70h] [rbp-60h]
  std::tuple_element<1,const std::pair<unsigned int const,LanternSalvageStage> >::type *stage; // [rsp+78h] [rbp-58h]
  proto::LanternSalvageStageBin *stage_bin; // [rsp+80h] [rbp-50h]
  const std::pair<const proto::VirtualItem,unsigned int> *v24; // [rsp+88h] [rbp-48h]
  std::tuple_element<0,const std::pair<const proto::VirtualItem,unsigned int> >::type *coin_type; // [rsp+90h] [rbp-40h]
  std::tuple_element<1,const std::pair<const proto::VirtualItem,unsigned int> >::type *coin_num; // [rsp+98h] [rbp-38h]
  common::milog::MiLogStream v27; // [rsp+A0h] [rbp-30h] BYREF

  lantern_rite_bin = proto::ActivityScheduleBin::mutable_lantern_rite_bin(bin);
  __for_range = &this->activity_coin_map_;
  __for_begin._M_cur = std::unordered_map<proto::VirtualItem,unsigned int>::begin(&this->activity_coin_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<proto::VirtualItem,unsigned int>::end(&this->activity_coin_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<proto::VirtualItem const,unsigned int>,false>(&__for_begin, &__for_end) )
  {
    v24 = std::__detail::_Node_const_iterator<std::pair<proto::VirtualItem const,unsigned int>,false,false>::operator*(&__for_begin);
    coin_type = std::get<0ul,proto::VirtualItem const,unsigned int>(v24);
    coin_num = (std::tuple_element<1,const std::pair<const proto::VirtualItem,unsigned int> >::type *)std::get<1ul,proto::VirtualItem const,unsigned int>(v24);
    if ( *(_BYTE *)(((unsigned __int64)coin_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)coin_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)coin_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( *coin_type == ITEM_VIRTUAL_LANTERN_RITE_COIN_A )
    {
      if ( *(_BYTE *)(((unsigned __int64)coin_num >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)coin_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)coin_num >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::LanternRiteScheduleBin::set_coin_a(lantern_rite_bin, *coin_num);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)coin_type >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)coin_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)coin_type >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( *coin_type == ITEM_VIRTUAL_LANTERN_RITE_COIN_B )
      {
        if ( *(_BYTE *)(((unsigned __int64)coin_num >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)coin_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)coin_num >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto::LanternRiteScheduleBin::set_coin_b(lantern_rite_bin, *coin_num);
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)coin_type >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)coin_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)coin_type >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( *coin_type == ITEM_VIRTUAL_LANTERN_RITE_COIN_C )
        {
          if ( *(_BYTE *)(((unsigned __int64)coin_num >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)coin_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)coin_num >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          proto::LanternRiteScheduleBin::set_coin_c(lantern_rite_bin, *coin_num);
        }
      }
    }
    std::__detail::_Node_const_iterator<std::pair<proto::VirtualItem const,unsigned int>,false,false>::operator++(&__for_begin);
  }
  v2 = proto::LanternRiteScheduleBin::mutable_projection_bin(lantern_rite_bin);
  if ( LanternRiteActivity::toProjectionBin(this, v2) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/lantern_rite_activity.cpp",
      "toScheduleBin",
      162);
    v3 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v27,
           (const char (*)[43])"[LanternRite] toProjectionBin fails, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_25:
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &val);
    common::milog::MiLogStream::~MiLogStream(&v27);
    return -1;
  }
  v5 = proto::LanternRiteScheduleBin::mutable_fireworks_bin(lantern_rite_bin);
  if ( LanternRiteActivity::toFireworksBin(this, v5) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/lantern_rite_activity.cpp",
      "toScheduleBin",
      167);
    v3 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v27,
           (const char (*)[42])"[LanternRite] toFireworksBin fails, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_25;
  }
  __for_range_0 = &this->salvage_stage_map_;
  __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<const proto::VirtualItem,unsigned int>,false>::__node_type *)std::map<unsigned int,LanternSalvageStage>::begin(&this->salvage_stage_map_)._M_node;
  __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<const proto::VirtualItem,unsigned int>,false>::__node_type *)std::map<unsigned int,LanternSalvageStage>::end(__for_range_0)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,LanternSalvageStage> >::_Self *)&__for_begin,
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,LanternSalvageStage> >::_Self *)&__for_end) )
  {
    v20 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,LanternSalvageStage>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,LanternSalvageStage> > *const)&__for_begin);
    stage_id = std::get<0ul,unsigned int const,LanternSalvageStage>(v20);
    stage = (std::tuple_element<1,const std::pair<unsigned int const,LanternSalvageStage> >::type *)std::get<1ul,unsigned int const,LanternSalvageStage>(v20);
    stage_bin = proto::LanternRiteScheduleBin::add_salvage_stage_bin_list(lantern_rite_bin);
    LanternSalvageStage::toBin(stage, stage_bin);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,LanternSalvageStage>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,LanternSalvageStage> > *const)&__for_begin);
  }
  if ( *(char *)(((unsigned __int64)&this->is_mini_eldritch_dungeon_open_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_mini_eldritch_dungeon_open_);
  proto::LanternRiteScheduleBin::set_is_mini_eldritch_dungeon_open(
    lantern_rite_bin,
    this->is_mini_eldritch_dungeon_open_);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_taken_skin_reward_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 73) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_taken_skin_reward_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_taken_skin_reward_);
  }
  proto::LanternRiteScheduleBin::set_is_taken_skin_reward(lantern_rite_bin, this->is_taken_skin_reward_);
  salvage_tracking_bin_map = proto::LanternRiteScheduleBin::mutable_salvage_tracking_mark_map(lantern_rite_bin);
  __for_range_1 = &this->salvage_current_tracking_bundle_map_;
  __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<const proto::VirtualItem,unsigned int>,false>::__node_type *)std::map<data::SalvagePlayType,unsigned int>::begin(&this->salvage_current_tracking_bundle_map_)._M_node;
  __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<const proto::VirtualItem,unsigned int>,false>::__node_type *)std::map<data::SalvagePlayType,unsigned int>::end(__for_range_1)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<std::pair<const data::SalvagePlayType,unsigned int> >::_Self *)&__for_begin,
            (const std::_Rb_tree_const_iterator<std::pair<const data::SalvagePlayType,unsigned int> >::_Self *)&__for_end) )
  {
    v17 = std::_Rb_tree_const_iterator<std::pair<data::SalvagePlayType const,unsigned int>>::operator*((const std::_Rb_tree_const_iterator<std::pair<const data::SalvagePlayType,unsigned int> > *const)&__for_begin);
    play_type = std::get<0ul,data::SalvagePlayType const,unsigned int>(v17);
    bundle_id = (std::tuple_element<1,const std::pair<const data::SalvagePlayType,unsigned int> >::type *)std::get<1ul,data::SalvagePlayType const,unsigned int>(v17);
    if ( *(_BYTE *)(((unsigned __int64)bundle_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)bundle_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)bundle_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v6 = *bundle_id;
    if ( *(_BYTE *)(((unsigned __int64)play_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)play_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)play_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    val = *play_type;
    v7 = google::protobuf::Map<unsigned int,unsigned int>::operator[](salvage_tracking_bin_map, &val);
    v8 = v7;
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v7);
    }
    *v8 = v6;
    std::_Rb_tree_const_iterator<std::pair<data::SalvagePlayType const,unsigned int>>::operator++((std::_Rb_tree_const_iterator<std::pair<const data::SalvagePlayType,unsigned int> > *const)&__for_begin);
  }
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  proto::LanternRiteScheduleBin::set_is_content_closed(lantern_rite_bin, this->is_content_closed_);
  return 0;
};

// Line 187: range 0000000015FE79E6-0000000015FE7DA1
int32_t __cdecl LanternSalvageStage::toBin(
        const LanternSalvageStage *const this,
        proto::LanternSalvageStageBin *stage_bin)
{
  std::shared_ptr<BaseSalvageChallenge> *v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  const std::shared_ptr<BaseSalvageChallenge> *v5; // rax
  std::__shared_ptr_access<BaseSalvageChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // r14
  unsigned __int64 v7; // rax
  void (__fastcall *v8)(std::__shared_ptr_access<BaseSalvageChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, proto::SalvageChallengeBin *); // r15
  proto::SalvageChallengeBin *v9; // rax
  int32_t result; // eax
  std::map<data::SalvagePlayType,std::vector<std::shared_ptr<BaseSalvageChallenge>>>::const_iterator __for_begin; // [rsp+28h] [rbp-B8h] BYREF
  std::map<data::SalvagePlayType,std::vector<std::shared_ptr<BaseSalvageChallenge>>>::const_iterator __for_end; // [rsp+30h] [rbp-B0h] BYREF
  std::vector<std::shared_ptr<BaseSalvageChallenge>>::const_iterator __for_begin_0; // [rsp+38h] [rbp-A8h] BYREF
  std::vector<std::shared_ptr<BaseSalvageChallenge>>::const_iterator __for_end_0; // [rsp+40h] [rbp-A0h] BYREF
  const std::map<data::SalvagePlayType,std::vector<std::shared_ptr<BaseSalvageChallenge>>> *__for_range; // [rsp+48h] [rbp-98h]
  const std::pair<const data::SalvagePlayType,std::vector<std::shared_ptr<BaseSalvageChallenge>> > *v16; // [rsp+50h] [rbp-90h]
  std::tuple_element<0,const std::pair<const data::SalvagePlayType,std::vector<std::shared_ptr<BaseSalvageChallenge>> > >::type *_; // [rsp+58h] [rbp-88h]
  std::tuple_element<1,const std::pair<const data::SalvagePlayType,std::vector<std::shared_ptr<BaseSalvageChallenge>> > >::type *challenge_vec; // [rsp+60h] [rbp-80h]
  const std::vector<std::shared_ptr<BaseSalvageChallenge>> *__for_range_0; // [rsp+68h] [rbp-78h]
  char v20[112]; // [rsp+70h] [rbp-70h] BYREF

  v2 = (std::shared_ptr<BaseSalvageChallenge> *)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = (std::shared_ptr<BaseSalvageChallenge> *)v3;
  }
  v2->_M_ptr = (std::__shared_ptr<BaseSalvageChallenge,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v2->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 17 challenge_ptr:193";
  v2[1]._M_ptr = (std::__shared_ptr<BaseSalvageChallenge,(__gnu_cxx::_Lock_policy)2>::element_type *)LanternSalvageStage::toBin;
  v4 = (unsigned __int64)v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::LanternSalvageStageBin::set_stage_id(stage_bin, this->stage_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_open);
  }
  proto::LanternSalvageStageBin::set_is_open(stage_bin, this->is_open);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_finished >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 5) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_finished >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_finished);
  }
  proto::LanternSalvageStageBin::set_is_finished(stage_bin, this->is_finished);
  __for_range = &this->stage_challenge_map;
  __for_begin._M_node = std::map<data::SalvagePlayType,std::vector<std::shared_ptr<BaseSalvageChallenge>>>::begin(&this->stage_challenge_map)._M_node;
  __for_end._M_node = std::map<data::SalvagePlayType,std::vector<std::shared_ptr<BaseSalvageChallenge>>>::end(&this->stage_challenge_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v16 = std::_Rb_tree_const_iterator<std::pair<data::SalvagePlayType const,std::vector<std::shared_ptr<BaseSalvageChallenge>>>>::operator*(&__for_begin);
    _ = std::get<0ul,data::SalvagePlayType const,std::vector<std::shared_ptr<BaseSalvageChallenge>>>(v16);
    challenge_vec = (std::tuple_element<1,const std::pair<const data::SalvagePlayType,std::vector<std::shared_ptr<BaseSalvageChallenge>> > >::type *)std::get<1ul,data::SalvagePlayType const,std::vector<std::shared_ptr<BaseSalvageChallenge>>>(v16);
    __for_range_0 = challenge_vec;
    __for_begin_0._M_current = std::vector<std::shared_ptr<BaseSalvageChallenge>>::begin(challenge_vec)._M_current;
    __for_end_0._M_current = std::vector<std::shared_ptr<BaseSalvageChallenge>>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<std::shared_ptr<BaseSalvageChallenge> const*,std::vector<std::shared_ptr<BaseSalvageChallenge>>>(
              &__for_begin_0,
              &__for_end_0) )
    {
      v5 = __gnu_cxx::__normal_iterator<std::shared_ptr<BaseSalvageChallenge> const*,std::vector<std::shared_ptr<BaseSalvageChallenge>>>::operator*(&__for_begin_0);
      std::shared_ptr<BaseSalvageChallenge>::shared_ptr(v2 + 2, v5);
      if ( std::operator!=<BaseSalvageChallenge>(v2 + 2, 0LL) )
      {
        v6 = std::__shared_ptr_access<BaseSalvageChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseSalvageChallenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v2[2]);
        if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v7 = (unsigned __int64)(v6->_vptr_BaseSalvageChallenge + 4);
        if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
          v7 = __asan_report_load8();
        v8 = *(void (__fastcall **)(std::__shared_ptr_access<BaseSalvageChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, proto::SalvageChallengeBin *))v7;
        v9 = proto::LanternSalvageStageBin::add_challenge_bin_list(stage_bin);
        v8(v6, v9);
      }
      std::shared_ptr<BaseSalvageChallenge>::~shared_ptr(v2 + 2);
      __gnu_cxx::__normal_iterator<std::shared_ptr<BaseSalvageChallenge> const*,std::vector<std::shared_ptr<BaseSalvageChallenge>>>::operator++(&__for_begin_0);
    }
    std::_Rb_tree_const_iterator<std::pair<data::SalvagePlayType const,std::vector<std::shared_ptr<BaseSalvageChallenge>>>>::operator++(&__for_begin);
  }
  result = 0;
  if ( v20 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v2->_M_ptr = (std::__shared_ptr<BaseSalvageChallenge,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 206: range 0000000015FE7DA2-0000000015FE7E51
int32_t __cdecl BaseSalvageChallenge::toBin(
        const BaseSalvageChallenge *const this,
        proto::SalvageChallengeBin *stage_bin)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->challenge_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::SalvageChallengeBin::set_challenge_type(stage_bin, this->challenge_type);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_unlock >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_unlock >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_unlock);
  }
  proto::SalvageChallengeBin::set_is_unlock(stage_bin, this->is_unlock);
  return 0;
};

// Line 213: range 0000000015FE7E52-0000000015FE7F3B
int32_t __cdecl SalvageBundleChallenge::toBin(
        const SalvageBundleChallenge *const this,
        proto::SalvageChallengeBin *challenge_bin)
{
  google::protobuf::uint32 *v2; // rdx
  std::set<unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-20h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+28h] [rbp-18h] BYREF
  proto::SalvageBundleChallengeBin *bundle_info; // [rsp+30h] [rbp-10h]
  const std::set<unsigned int> *__for_range; // [rsp+38h] [rbp-8h]

  BaseSalvageChallenge::toBin(this, challenge_bin);
  bundle_info = proto::SalvageChallengeBin::mutable_bundle_info(challenge_bin);
  __for_range = &this->finish_bundle_set;
  __for_begin._M_node = std::set<unsigned int>::begin(&this->finish_bundle_set)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(&this->finish_bundle_set)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v2 = (google::protobuf::uint32 *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::SalvageBundleChallengeBin::add_finished_bundle_list(bundle_info, *v2);
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  return 0;
};

// Line 224: range 0000000015FE7F3C-0000000015FE800D
int32_t __cdecl SalvageScoreChallenge::toBin(
        const SalvageScoreChallenge *const this,
        proto::SalvageChallengeBin *challenge_bin)
{
  proto::SalvageScoreChallengeBin *score_info; // [rsp+18h] [rbp-8h]

  BaseSalvageChallenge::toBin(this, challenge_bin);
  score_info = proto::SalvageChallengeBin::mutable_score_challenge_info(challenge_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->challenge_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::SalvageScoreChallengeBin::set_salvage_challenge_id(score_info, this->challenge_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->max_score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_score >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::SalvageScoreChallengeBin::set_max_score(score_info, this->max_score);
  return 0;
};

// Line 233: range 0000000015FE800E-0000000015FE807F
int32_t __cdecl SalvageBossChallenge::toBin(
        const SalvageBossChallenge *const this,
        proto::SalvageChallengeBin *challenge_bin)
{
  BaseSalvageChallenge::toBin(this, challenge_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->challenge_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::SalvageChallengeBin::set_boss_challenge_id(challenge_bin, this->challenge_id);
  return 0;
};

// Line 240: range 0000000015FE8080-0000000015FE846F
int32_t __cdecl LanternSalvageStage::toClient(
        const LanternSalvageStage *const this,
        proto::SalvageStageInfo *stage_info)
{
  std::shared_ptr<BaseSalvageChallenge> *v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  const std::shared_ptr<BaseSalvageChallenge> *v5; // rax
  common::milog::MiLogStream *v6; // rax
  std::__shared_ptr_access<BaseSalvageChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // r14
  unsigned __int64 v8; // rax
  void (__fastcall *v9)(std::__shared_ptr_access<BaseSalvageChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, proto::SalvageChallengeInfo *); // r15
  proto::SalvageChallengeInfo *v10; // rax
  int32_t result; // eax
  std::map<data::SalvagePlayType,std::vector<std::shared_ptr<BaseSalvageChallenge>>>::const_iterator __for_begin; // [rsp+28h] [rbp-D8h] BYREF
  std::map<data::SalvagePlayType,std::vector<std::shared_ptr<BaseSalvageChallenge>>>::const_iterator __for_end; // [rsp+30h] [rbp-D0h] BYREF
  std::vector<std::shared_ptr<BaseSalvageChallenge>>::const_iterator __for_begin_0; // [rsp+38h] [rbp-C8h] BYREF
  std::vector<std::shared_ptr<BaseSalvageChallenge>>::const_iterator __for_end_0; // [rsp+40h] [rbp-C0h] BYREF
  const std::map<data::SalvagePlayType,std::vector<std::shared_ptr<BaseSalvageChallenge>>> *__for_range; // [rsp+48h] [rbp-B8h]
  const std::pair<const data::SalvagePlayType,std::vector<std::shared_ptr<BaseSalvageChallenge>> > *v17; // [rsp+50h] [rbp-B0h]
  std::tuple_element<0,const std::pair<const data::SalvagePlayType,std::vector<std::shared_ptr<BaseSalvageChallenge>> > >::type *play_type; // [rsp+58h] [rbp-A8h]
  std::tuple_element<1,const std::pair<const data::SalvagePlayType,std::vector<std::shared_ptr<BaseSalvageChallenge>> > >::type *challenge_vec; // [rsp+60h] [rbp-A0h]
  const std::vector<std::shared_ptr<BaseSalvageChallenge>> *__for_range_0; // [rsp+68h] [rbp-98h]
  common::milog::MiLogStream v21; // [rsp+70h] [rbp-90h] BYREF
  char v22[112]; // [rsp+90h] [rbp-70h] BYREF

  v2 = (std::shared_ptr<BaseSalvageChallenge> *)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = (std::shared_ptr<BaseSalvageChallenge> *)v3;
  }
  v2->_M_ptr = (std::__shared_ptr<BaseSalvageChallenge,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v2->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 17 challenge_ptr:245";
  v2[1]._M_ptr = (std::__shared_ptr<BaseSalvageChallenge,(__gnu_cxx::_Lock_policy)2>::element_type *)LanternSalvageStage::toClient;
  v4 = (unsigned __int64)v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::SalvageStageInfo::set_stage_id(stage_info, this->stage_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_open);
  }
  proto::SalvageStageInfo::set_is_open(stage_info, this->is_open);
  __for_range = &this->stage_challenge_map;
  __for_begin._M_node = std::map<data::SalvagePlayType,std::vector<std::shared_ptr<BaseSalvageChallenge>>>::begin(&this->stage_challenge_map)._M_node;
  __for_end._M_node = std::map<data::SalvagePlayType,std::vector<std::shared_ptr<BaseSalvageChallenge>>>::end(&this->stage_challenge_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v17 = std::_Rb_tree_const_iterator<std::pair<data::SalvagePlayType const,std::vector<std::shared_ptr<BaseSalvageChallenge>>>>::operator*(&__for_begin);
    play_type = std::get<0ul,data::SalvagePlayType const,std::vector<std::shared_ptr<BaseSalvageChallenge>>>(v17);
    challenge_vec = (std::tuple_element<1,const std::pair<const data::SalvagePlayType,std::vector<std::shared_ptr<BaseSalvageChallenge>> > >::type *)std::get<1ul,data::SalvagePlayType const,std::vector<std::shared_ptr<BaseSalvageChallenge>>>(v17);
    __for_range_0 = challenge_vec;
    __for_begin_0._M_current = std::vector<std::shared_ptr<BaseSalvageChallenge>>::begin(challenge_vec)._M_current;
    __for_end_0._M_current = std::vector<std::shared_ptr<BaseSalvageChallenge>>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<std::shared_ptr<BaseSalvageChallenge> const*,std::vector<std::shared_ptr<BaseSalvageChallenge>>>(
              &__for_begin_0,
              &__for_end_0) )
    {
      v5 = __gnu_cxx::__normal_iterator<std::shared_ptr<BaseSalvageChallenge> const*,std::vector<std::shared_ptr<BaseSalvageChallenge>>>::operator*(&__for_begin_0);
      std::shared_ptr<BaseSalvageChallenge>::shared_ptr(v2 + 2, v5);
      if ( std::operator==<BaseSalvageChallenge>(v2 + 2, 0LL) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/lantern_rite_activity.cpp",
          "toClient",
          249);
        v6 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
               &v21,
               (const char (*)[52])"[LanternRite] challenge_ptr cast failed, play_type:");
        common::milog::MiLogStream::operator<<<data::SalvagePlayType,(data::SalvagePlayType*)0>(v6, play_type);
        common::milog::MiLogStream::~MiLogStream(&v21);
      }
      else
      {
        v7 = std::__shared_ptr_access<BaseSalvageChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseSalvageChallenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v2[2]);
        if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v8 = (unsigned __int64)(v7->_vptr_BaseSalvageChallenge + 2);
        if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
          v8 = __asan_report_load8();
        v9 = *(void (__fastcall **)(std::__shared_ptr_access<BaseSalvageChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, proto::SalvageChallengeInfo *))v8;
        v10 = proto::SalvageStageInfo::add_challenge_info_list(stage_info);
        v9(v7, v10);
      }
      std::shared_ptr<BaseSalvageChallenge>::~shared_ptr(v2 + 2);
      __gnu_cxx::__normal_iterator<std::shared_ptr<BaseSalvageChallenge> const*,std::vector<std::shared_ptr<BaseSalvageChallenge>>>::operator++(&__for_begin_0);
    }
    std::_Rb_tree_const_iterator<std::pair<data::SalvagePlayType const,std::vector<std::shared_ptr<BaseSalvageChallenge>>>>::operator++(&__for_begin);
  }
  result = 0;
  if ( v22 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v2->_M_ptr = (std::__shared_ptr<BaseSalvageChallenge,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 259: range 0000000015FE8470-0000000015FE851F
int32_t __cdecl BaseSalvageChallenge::toClient(
        const BaseSalvageChallenge *const this,
        proto::SalvageChallengeInfo *challenge_info)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->challenge_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::SalvageChallengeInfo::set_challenge_type(challenge_info, this->challenge_type);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_unlock >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_unlock >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_unlock);
  }
  proto::SalvageChallengeInfo::set_is_unlock(challenge_info, this->is_unlock);
  return 0;
};

// Line 266: range 0000000015FE8520-0000000015FE8609
int32_t __cdecl SalvageBundleChallenge::toClient(
        const SalvageBundleChallenge *const this,
        proto::SalvageChallengeInfo *challenge_info)
{
  google::protobuf::uint32 *v2; // rdx
  std::set<unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-20h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+28h] [rbp-18h] BYREF
  proto::SalvageBundleChallengeInfo *bundle_info; // [rsp+30h] [rbp-10h]
  const std::set<unsigned int> *__for_range; // [rsp+38h] [rbp-8h]

  BaseSalvageChallenge::toClient(this, challenge_info);
  bundle_info = proto::SalvageChallengeInfo::mutable_bundle_info(challenge_info);
  __for_range = &this->finish_bundle_set;
  __for_begin._M_node = std::set<unsigned int>::begin(&this->finish_bundle_set)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(&this->finish_bundle_set)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v2 = (google::protobuf::uint32 *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::SalvageBundleChallengeInfo::add_finished_bundle_list(bundle_info, *v2);
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  return 0;
};

// Line 277: range 0000000015FE860A-0000000015FE86DB
int32_t __cdecl SalvageScoreChallenge::toClient(
        const SalvageScoreChallenge *const this,
        proto::SalvageChallengeInfo *challenge_info)
{
  proto::SalvageScoreChallengeInfo *score_info; // [rsp+18h] [rbp-8h]

  BaseSalvageChallenge::toClient(this, challenge_info);
  score_info = proto::SalvageChallengeInfo::mutable_score_challenge_info(challenge_info);
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->challenge_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::SalvageScoreChallengeInfo::set_salvage_challenge_id(score_info, this->challenge_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->max_score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_score >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::SalvageScoreChallengeInfo::set_max_score(score_info, this->max_score);
  return 0;
};

// Line 286: range 0000000015FE86DC-0000000015FE874D
int32_t __cdecl SalvageBossChallenge::toClient(
        const SalvageBossChallenge *const this,
        proto::SalvageChallengeInfo *challenge_info)
{
  BaseSalvageChallenge::toClient(this, challenge_info);
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->challenge_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::SalvageChallengeInfo::set_boss_challenge_id(challenge_info, this->challenge_id);
  return 0;
};

// Line 293: range 0000000015FE874E-0000000015FE8C03
int32_t __cdecl LanternRiteActivity::toClient(LanternRiteActivity *const this, proto::ActivityInfo *activity_info)
{
  common::milog::MiLogStream *v2; // rbx
  proto::LanternProjectionInfo *v3; // rdx
  proto::LanternRiteFireworksInfo *v4; // rdx
  unsigned int val; // [rsp+1Ch] [rbp-74h] BYREF
  std::map<unsigned int,LanternSalvageStage>::iterator __for_begin; // [rsp+20h] [rbp-70h] BYREF
  std::map<unsigned int,LanternSalvageStage>::iterator __for_end; // [rsp+28h] [rbp-68h] BYREF
  proto::LanternRiteActivityDetailInfo *detail_info; // [rsp+30h] [rbp-60h]
  std::map<unsigned int,LanternSalvageStage> *__for_range; // [rsp+38h] [rbp-58h]
  const std::pair<unsigned int const,LanternSalvageStage> *v11; // [rsp+40h] [rbp-50h]
  std::tuple_element<0,const std::pair<unsigned int const,LanternSalvageStage> >::type *stage_id; // [rsp+48h] [rbp-48h]
  std::tuple_element<1,const std::pair<unsigned int const,LanternSalvageStage> >::type *stage; // [rsp+50h] [rbp-40h]
  proto::SalvageStageInfo *stage_info; // [rsp+58h] [rbp-38h]
  common::milog::MiLogStream v15; // [rsp+60h] [rbp-30h] BYREF

  if ( BaseActivity::toClient(this, activity_info) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/lantern_rite_activity.cpp",
      "toClient",
      296);
    v2 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
           &v15,
           (const char (*)[50])"[LanternRite] BaseActivity::toClient fails, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_12:
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
    common::milog::MiLogStream::~MiLogStream(&v15);
    return -1;
  }
  detail_info = proto::ActivityInfo::mutable_lantern_rite_activity_info(activity_info);
  v3 = proto::LanternRiteActivityDetailInfo::mutable_projection_info(detail_info);
  if ( LanternRiteActivity::projectionToClient(this, v3) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/lantern_rite_activity.cpp",
      "toClient",
      303);
    v2 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
           &v15,
           (const char (*)[46])"[LanternRite] projectionToClient fails, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_12;
  }
  v4 = proto::LanternRiteActivityDetailInfo::mutable_fireworks_info(detail_info);
  if ( LanternRiteActivity::fireworksToClient(this, v4) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/lantern_rite_activity.cpp",
      "toClient",
      308);
    v2 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
           &v15,
           (const char (*)[45])"[LanternRite] fireworksToClient fails, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_12;
  }
  __for_range = &this->salvage_stage_map_;
  __for_begin._M_node = std::map<unsigned int,LanternSalvageStage>::begin(&this->salvage_stage_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,LanternSalvageStage>::end(&this->salvage_stage_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v11 = std::_Rb_tree_iterator<std::pair<unsigned int const,LanternSalvageStage>>::operator*(&__for_begin);
    stage_id = std::get<0ul,unsigned int const,LanternSalvageStage>(v11);
    stage = (std::tuple_element<1,const std::pair<unsigned int const,LanternSalvageStage> >::type *)std::get<1ul,unsigned int const,LanternSalvageStage>(v11);
    stage_info = proto::LanternRiteActivityDetailInfo::add_stage_info_list(detail_info);
    LanternSalvageStage::toClient(stage, stage_info);
    std::_Rb_tree_iterator<std::pair<unsigned int const,LanternSalvageStage>>::operator++(&__for_begin);
  }
  if ( *(char *)(((unsigned __int64)&this->is_mini_eldritch_dungeon_open_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_mini_eldritch_dungeon_open_);
  proto::LanternRiteActivityDetailInfo::set_is_mini_eldritch_dungeon_open(
    detail_info,
    this->is_mini_eldritch_dungeon_open_);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_taken_skin_reward_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 73) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_taken_skin_reward_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_taken_skin_reward_);
  }
  proto::LanternRiteActivityDetailInfo::set_is_taken_skin_reward(detail_info, this->is_taken_skin_reward_);
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  proto::LanternRiteActivityDetailInfo::set_is_content_closed(detail_info, this->is_content_closed_);
  return 0;
};

// Line 323: range 0000000015FE8C04-0000000015FE8D5F
void __cdecl LanternRiteActivity::onPreStart(LanternRiteActivity *const this)
{
  std::unordered_map<proto::VirtualItem,unsigned int>::mapped_type *v1; // rax
  _DWORD *v2; // rdx
  std::unordered_map<proto::VirtualItem,unsigned int>::mapped_type *v3; // rax
  _DWORD *v4; // rdx
  std::unordered_map<proto::VirtualItem,unsigned int>::mapped_type *v5; // rax
  _DWORD *v6; // rdx
  std::unordered_map<proto::VirtualItem,unsigned int>::key_type __k; // [rsp+1Ch] [rbp-4h] BYREF

  LanternRiteActivity::initSalvageInfoOnStart(this);
  LanternRiteActivity::initFireworksInfoOnStart(this);
  std::unordered_map<proto::VirtualItem,unsigned int>::clear(&this->activity_coin_map_);
  __k = ITEM_VIRTUAL_LANTERN_RITE_COIN_A;
  v1 = std::unordered_map<proto::VirtualItem,unsigned int>::operator[](&this->activity_coin_map_, &__k);
  v2 = v1;
  if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v1);
  }
  *v2 = 0;
  __k = ITEM_VIRTUAL_LANTERN_RITE_COIN_B;
  v3 = std::unordered_map<proto::VirtualItem,unsigned int>::operator[](&this->activity_coin_map_, &__k);
  v4 = v3;
  if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v3);
  }
  *v4 = 0;
  __k = ITEM_VIRTUAL_LANTERN_RITE_COIN_C;
  v5 = std::unordered_map<proto::VirtualItem,unsigned int>::operator[](&this->activity_coin_map_, &__k);
  v6 = v5;
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v5);
  }
  *v6 = 0;
};

// Line 333: range 0000000015FE8D60-0000000015FE8EED
int32_t __cdecl LanternRiteActivity::init(LanternRiteActivity *const this)
{
  common::milog::MiLogStream *v3; // rbx
  common::milog::MiLogStream *v4; // rax
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v6; // [rsp+20h] [rbp-30h] BYREF

  if ( !BaseActivity::isOpening(this, 0) || BaseActivity::isSettled(this) )
    return -1;
  LanternRiteActivity::registerEventObserver(this);
  if ( common::tools::MiTimer::isActive(&this->vehicle_timer_) )
    common::tools::MiTimer::cancel(&this->vehicle_timer_);
  if ( PlayerUnixTimer::startS(
         &this->vehicle_timer_,
         2u,
         1,
         "./src/player/activity/lantern_rite_activity.cpp",
         "init",
         343) )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/lantern_rite_activity.cpp",
      "init",
      345);
    v3 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v6, (const char (*)[6])"uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    v4 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &val);
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
      v4,
      (const char (*)[30])" activity_timer_ startS fails");
    common::milog::MiLogStream::~MiLogStream(&v6);
  }
  return 0;
};

// Line 351: range 0000000015FE8EEE-0000000015FE9035
void __cdecl LanternRiteActivity::onStart(LanternRiteActivity *const this)
{
  common::milog::MiLogStream *v1; // rbx
  common::milog::MiLogStream *v2; // rax
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v4; // [rsp+20h] [rbp-30h] BYREF

  LanternRiteActivity::registerEventObserver(this);
  if ( common::tools::MiTimer::isActive(&this->vehicle_timer_) )
    common::tools::MiTimer::cancel(&this->vehicle_timer_);
  if ( PlayerUnixTimer::startS(
         &this->vehicle_timer_,
         2u,
         1,
         "./src/player/activity/lantern_rite_activity.cpp",
         "onStart",
         360) )
  {
    common::milog::MiLogStream::create(
      &v4,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/lantern_rite_activity.cpp",
      "onStart",
      362);
    v1 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v4, (const char (*)[6])"uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    v2 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, &val);
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
      v2,
      (const char (*)[30])" activity_timer_ startS fails");
    common::milog::MiLogStream::~MiLogStream(&v4);
  }
};

// Line 367: range 0000000015FE9036-0000000015FE9181
void __cdecl LanternRiteActivity::onClear(LanternRiteActivity *const this)
{
  std::unordered_map<proto::VirtualItem,unsigned int>::clear(&this->activity_coin_map_);
  std::map<unsigned int,LanternSalvageStage>::clear(&this->salvage_stage_map_);
  std::map<unsigned int,LanternRiteFireworksStageData>::clear(&this->fireworks_stage_map_);
  LanternRiteActivity::clearProjectionData(this);
  if ( *(char *)(((unsigned __int64)&this->is_mini_eldritch_dungeon_open_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_mini_eldritch_dungeon_open_);
  this->is_mini_eldritch_dungeon_open_ = 0;
  std::map<data::SalvagePlayType,unsigned int>::clear(&this->salvage_current_tracking_bundle_map_);
  std::map<data::SalvagePlayType,std::set<unsigned int>>::clear(&this->salvage_registered_bundle_map_);
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_content_closed_);
  this->is_content_closed_ = 0;
  std::__weak_ptr<DungeonScene,(__gnu_cxx::_Lock_policy)2>::reset(&this->cur_boss_dungeon_wtr_);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_taken_skin_reward_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 73) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_taken_skin_reward_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_taken_skin_reward_);
  }
  this->is_taken_skin_reward_ = 0;
};

// Line 381: range 0000000015FE9182-0000000015FE95C7
__int64 __fastcall LanternRiteActivity::checkAddActivityCoin(
        const LanternRiteActivity *const this,
        proto::VirtualItem coin_type,
        uint32_t add_num)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v8; // rax
  std::__detail::_Node_const_iterator<std::pair<const proto::VirtualItem,unsigned int>,false,false>::pointer v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  int v15; // eax
  std::__detail::_Node_iterator_base<std::pair<const proto::VirtualItem,unsigned int>,false> __y; // [rsp+18h] [rbp-C8h] BYREF
  common::milog::MiLogStream v18; // [rsp+20h] [rbp-C0h] BYREF
  char v19[160]; // [rsp+40h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 16 cur_coin_num:393 64 4 13 coin_type:380 80 4 11 add_num:380 96 8 8 iter:387";
  *(_QWORD *)(v3 + 16) = LanternRiteActivity::checkAddActivityCoin;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 64) = coin_type;
  *(_DWORD *)(v3 + 80) = add_num;
  if ( !LanternRiteActivity::isCoinTypeValid(this, *(proto::VirtualItem *)(v3 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/lantern_rite_activity.cpp",
      "checkAddActivityCoin",
      384);
    v6 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
           &v18,
           (const char (*)[47])"[LanternRite] coin_type is invalid. coin_type:");
    common::milog::MiLogStream::operator<<<proto::VirtualItem,(proto::VirtualItem*)0>(
      v6,
      (const proto::VirtualItem *)(v3 + 64));
    common::milog::MiLogStream::~MiLogStream(&v18);
    result = 0xFFFFFFFFLL;
    goto LABEL_26;
  }
  *(std::unordered_map<proto::VirtualItem,unsigned int>::const_iterator *)(v3 + 96) = std::unordered_map<proto::VirtualItem,unsigned int>::find(
                                                                                        &this->activity_coin_map_,
                                                                                        (const std::unordered_map<proto::VirtualItem,unsigned int>::key_type *)(v3 + 64));
  __y._M_cur = std::unordered_map<proto::VirtualItem,unsigned int>::end(&this->activity_coin_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<proto::VirtualItem const,unsigned int>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<const proto::VirtualItem,unsigned int>,false> *)(v3 + 96),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/lantern_rite_activity.cpp",
      "checkAddActivityCoin",
      390);
    v8 = common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(
           &v18,
           (const char (*)[65])"[LanternRite] coin_type is not in activity_coin_map_. coin_type:");
    common::milog::MiLogStream::operator<<<proto::VirtualItem,(proto::VirtualItem*)0>(
      v8,
      (const proto::VirtualItem *)(v3 + 64));
    common::milog::MiLogStream::~MiLogStream(&v18);
    result = 0xFFFFFFFFLL;
    goto LABEL_26;
  }
  v9 = std::__detail::_Node_const_iterator<std::pair<proto::VirtualItem const,unsigned int>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<const proto::VirtualItem,unsigned int>,false,false> *const)(v3 + 96));
  if ( *(_BYTE *)(((unsigned __int64)&v9->second >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v9 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v9->second >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  *(_DWORD *)(v3 + 48) = v9->second;
  if ( (!*(_DWORD *)(v3 + 80)
     || !*(_DWORD *)(v3 + 48)
     || (unsigned int)(*(_DWORD *)(v3 + 48) + *(_DWORD *)(v3 + 80)) >= *(_DWORD *)(v3 + 80))
    && (*(_DWORD *)(v3 + 80)
     || *(_DWORD *)(v3 + 48)
     || (unsigned int)(*(_DWORD *)(v3 + 48) + *(_DWORD *)(v3 + 80)) <= *(_DWORD *)(v3 + 80)) )
  {
    result = 0LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/lantern_rite_activity.cpp",
      "checkAddActivityCoin",
      396);
    v10 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
            &v18,
            (const char (*)[41])"[LanternRite] coin over flow, coin_type:");
    v11 = common::milog::MiLogStream::operator<<<proto::VirtualItem,(proto::VirtualItem*)0>(
            v10,
            (const proto::VirtualItem *)(v3 + 64));
    v12 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v11, (const char (*)[12])", cur num: ");
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 48));
    v14 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v13, (const char (*)[12])" ,add num: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 80));
    common::milog::MiLogStream::~MiLogStream(&v18);
    v15 = *(_DWORD *)(v3 + 64);
    if ( v15 == 139 )
    {
      result = 10095LL;
    }
    else
    {
      if ( v15 > 139 )
        goto LABEL_24;
      if ( v15 == 137 )
      {
        result = 10093LL;
        goto LABEL_26;
      }
      if ( v15 == 138 )
        result = 10094LL;
      else
LABEL_24:
        result = 0xFFFFFFFFLL;
    }
  }
LABEL_26:
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

// Line 413: range 0000000015FE95C8-0000000015FE99D5
__int64 __fastcall LanternRiteActivity::checkSubActivityCoin(
        const LanternRiteActivity *const this,
        proto::VirtualItem coin_type,
        uint32_t sub_num)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v8; // rax
  std::__detail::_Node_const_iterator<std::pair<const proto::VirtualItem,unsigned int>,false,false>::pointer v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  int v15; // eax
  std::__detail::_Node_iterator_base<std::pair<const proto::VirtualItem,unsigned int>,false> __y; // [rsp+18h] [rbp-C8h] BYREF
  common::milog::MiLogStream v18; // [rsp+20h] [rbp-C0h] BYREF
  char v19[160]; // [rsp+40h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 16 cur_coin_num:425 64 4 13 coin_type:412 80 4 11 sub_num:412 96 8 8 iter:419";
  *(_QWORD *)(v3 + 16) = LanternRiteActivity::checkSubActivityCoin;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 64) = coin_type;
  *(_DWORD *)(v3 + 80) = sub_num;
  if ( !LanternRiteActivity::isCoinTypeValid(this, *(proto::VirtualItem *)(v3 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/lantern_rite_activity.cpp",
      "checkSubActivityCoin",
      416);
    v6 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
           &v18,
           (const char (*)[47])"[LanternRite] coin_type is invalid. coin_type:");
    common::milog::MiLogStream::operator<<<proto::VirtualItem,(proto::VirtualItem*)0>(
      v6,
      (const proto::VirtualItem *)(v3 + 64));
    common::milog::MiLogStream::~MiLogStream(&v18);
    result = 0xFFFFFFFFLL;
    goto LABEL_21;
  }
  *(std::unordered_map<proto::VirtualItem,unsigned int>::const_iterator *)(v3 + 96) = std::unordered_map<proto::VirtualItem,unsigned int>::find(
                                                                                        &this->activity_coin_map_,
                                                                                        (const std::unordered_map<proto::VirtualItem,unsigned int>::key_type *)(v3 + 64));
  __y._M_cur = std::unordered_map<proto::VirtualItem,unsigned int>::end(&this->activity_coin_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<proto::VirtualItem const,unsigned int>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<const proto::VirtualItem,unsigned int>,false> *)(v3 + 96),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/lantern_rite_activity.cpp",
      "checkSubActivityCoin",
      422);
    v8 = common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(
           &v18,
           (const char (*)[65])"[LanternRite] coin_type is not in activity_coin_map_. coin_type:");
    common::milog::MiLogStream::operator<<<proto::VirtualItem,(proto::VirtualItem*)0>(
      v8,
      (const proto::VirtualItem *)(v3 + 64));
    common::milog::MiLogStream::~MiLogStream(&v18);
    result = 0xFFFFFFFFLL;
    goto LABEL_21;
  }
  v9 = std::__detail::_Node_const_iterator<std::pair<proto::VirtualItem const,unsigned int>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<const proto::VirtualItem,unsigned int>,false,false> *const)(v3 + 96));
  if ( *(_BYTE *)(((unsigned __int64)&v9->second >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v9 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v9->second >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  *(_DWORD *)(v3 + 48) = v9->second;
  if ( *(_DWORD *)(v3 + 48) >= *(_DWORD *)(v3 + 80) )
  {
    result = 0LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/lantern_rite_activity.cpp",
      "checkSubActivityCoin",
      428);
    v10 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
            &v18,
            (const char (*)[42])"[LanternRite] coin not enough, coin_type:");
    v11 = common::milog::MiLogStream::operator<<<proto::VirtualItem,(proto::VirtualItem*)0>(
            v10,
            (const proto::VirtualItem *)(v3 + 64));
    v12 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v11, (const char (*)[12])", cur num: ");
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 48));
    v14 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v13, (const char (*)[10])off_25AC0620);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 80));
    common::milog::MiLogStream::~MiLogStream(&v18);
    v15 = *(_DWORD *)(v3 + 64);
    if ( v15 == 139 )
    {
      result = 10092LL;
    }
    else
    {
      if ( v15 > 139 )
        goto LABEL_19;
      if ( v15 == 137 )
      {
        result = 10090LL;
        goto LABEL_21;
      }
      if ( v15 == 138 )
        result = 10091LL;
      else
LABEL_19:
        result = 0xFFFFFFFFLL;
    }
  }
LABEL_21:
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

// Line 445: range 0000000015FE99D6-0000000015FE9E25
__int64 __fastcall LanternRiteActivity::addActivityCoin(
        LanternRiteActivity *const this,
        proto::VirtualItem coin_type,
        uint32_t add_num,
        const ActionReason *reason,
        __int8 is_notify)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r13
  unsigned int v8; // r14d
  PlayerBasicComp *BasicComp; // rax
  std::unordered_map<proto::VirtualItem,unsigned int>::mapped_type *v10; // rdx
  SelectType v11; // r14d
  std::unordered_map<proto::VirtualItem,unsigned int>::mapped_type *v12; // rax
  SelectType *v13; // rdx
  PlayerItemComp *ItemComp; // r14
  data::ItemLimitType v15; // r15d
  std::unordered_map<proto::VirtualItem,unsigned int>::mapped_type *v16; // rdx
  __int64 result; // rax
  std::string v18; // [rsp+0h] [rbp-F0h]
  uint32_t reason_type; // [rsp+10h] [rbp-E0h]
  int32_t ret; // [rsp+38h] [rbp-B8h]
  uint32_t old_coin_num; // [rsp+3Ch] [rbp-B4h]
  std::string v23; // [rsp+40h] [rbp-B0h] BYREF
  char v24[144]; // [rsp+60h] [rbp-90h] BYREF

  *(&v18._anon_0._M_allocated_capacity + 1) = (std::string::size_type)reason;
  v18._anon_0._M_local_buf[4] = is_notify;
  v5 = (unsigned __int64)v24;
  v18._M_string_length = (std::string::size_type)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 1 22 log_context_holder:452 64 4 13 coin_type:444";
  *(_QWORD *)(v5 + 16) = LanternRiteActivity::addActivityCoin;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234753551;
  v7[536862722] = -202116348;
  *(_DWORD *)(v5 + 64) = coin_type;
  ret = LanternRiteActivity::checkAddActivityCoin(this, (proto::VirtualItem)*(_DWORD *)(v5 + 64), add_num);
  if ( ret )
  {
    v8 = ret;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    BasicComp = Player::getBasicComp(this->player_);
    PlayerBasicComp::getNextTransNo[abi:cxx11](&v23, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 48), 0x67u, v18);
    std::string::~string(&v23);
    v10 = std::unordered_map<proto::VirtualItem,unsigned int>::operator[](
            &this->activity_coin_map_,
            (const std::unordered_map<proto::VirtualItem,unsigned int>::key_type *)(v5 + 64));
    if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    old_coin_num = *v10;
    v11 = SAFE_ADD<unsigned int,unsigned int>(*v10, add_num);
    v12 = std::unordered_map<proto::VirtualItem,unsigned int>::operator[](
            &this->activity_coin_map_,
            (const std::unordered_map<proto::VirtualItem,unsigned int>::key_type *)(v5 + 64));
    v13 = v12;
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v12);
    }
    *v13 = v11;
    if ( v18._anon_0._M_local_buf[4] )
      BaseActivity::notifyActivityCoinInfo(this);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    ItemComp = Player::getItemComp(this->player_);
    if ( *(_BYTE *)(((*(&v18._anon_0._M_allocated_capacity + 1) + 4) >> 3) + 0x7FFF8000) != 0
      && (char)(((v18._anon_0._M_local_buf[8] + 4) & 7) + 3) >= *(_BYTE *)(((*(&v18._anon_0._M_allocated_capacity + 1)
                                                                           + 4) >> 3)
                                                                         + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v15 = *(_DWORD *)(*(&v18._anon_0._M_allocated_capacity + 1) + 4);
    if ( *(_BYTE *)((*(&v18._anon_0._M_allocated_capacity + 1) >> 3) + 0x7FFF8000) != 0
      && (char)((v18._anon_0._M_local_buf[8] & 7) + 3) >= *(_BYTE *)((*(&v18._anon_0._M_allocated_capacity + 1) >> 3)
                                                                   + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    reason_type = **((_DWORD **)&v18._anon_0._M_allocated_capacity + 1);
    v16 = std::unordered_map<proto::VirtualItem,unsigned int>::operator[](
            &this->activity_coin_map_,
            (const std::unordered_map<proto::VirtualItem,unsigned int>::key_type *)(v5 + 64));
    if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    PlayerItemComp::logPlayerAddCoin(
      ItemComp,
      *(proto::VirtualItem *)(v5 + 64),
      old_coin_num,
      *v16,
      reason_type,
      v15,
      0);
    v8 = 0;
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 48));
  }
  result = v8;
  if ( v18._M_string_length == v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 465: range 0000000015FE9E26-0000000015FEA213
__int64 __fastcall LanternRiteActivity::subActivityCoin(
        LanternRiteActivity *const this,
        __int32 coin_type,
        __int32 sub_num,
        const SubItemReason *reason,
        __int8 is_notify)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r13
  unsigned int v8; // r14d
  PlayerBasicComp *BasicComp; // rax
  std::unordered_map<proto::VirtualItem,unsigned int>::mapped_type *v10; // rdx
  std::unordered_map<proto::VirtualItem,unsigned int>::mapped_type *v11; // rax
  PlayerItemComp *ItemComp; // r14
  std::unordered_map<proto::VirtualItem,unsigned int>::mapped_type *v13; // rdx
  __int64 result; // rax
  std::string reason_type; // [rsp+0h] [rbp-E0h]
  uint32_t reason_typea; // [rsp+0h] [rbp-E0h]
  bool is_notifya; // [rsp+4h] [rbp-DCh]
  const SubItemReason *reasona; // [rsp+8h] [rbp-D8h]
  uint32_t sub_numa; // [rsp+10h] [rbp-D0h]
  LanternRiteActivity *thisa; // [rsp+18h] [rbp-C8h]
  int32_t ret; // [rsp+28h] [rbp-B8h]
  uint32_t old_coin_num; // [rsp+2Ch] [rbp-B4h]
  std::string v23; // [rsp+30h] [rbp-B0h] BYREF
  char v24[144]; // [rsp+50h] [rbp-90h] BYREF

  *(&reason_type._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  HIDWORD(reason_type._anon_0._M_allocated_capacity) = coin_type;
  *(_DWORD *)reason_type._anon_0._M_local_buf = sub_num;
  reason_type._M_string_length = (std::string::size_type)reason;
  BYTE4(reason_type._M_dataplus._M_p) = is_notify;
  v5 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 1 22 log_context_holder:472 64 4 13 coin_type:464";
  *(_QWORD *)(v5 + 16) = LanternRiteActivity::subActivityCoin;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234753551;
  v7[536862722] = -202116348;
  *(_DWORD *)(v5 + 64) = coin_type;
  ret = LanternRiteActivity::checkSubActivityCoin(
          this,
          (proto::VirtualItem)*(_DWORD *)(v5 + 64),
          reason_type._anon_0._M_allocated_capacity);
  if ( ret )
  {
    v8 = ret;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    BasicComp = Player::getBasicComp(this->player_);
    PlayerBasicComp::getNextTransNo[abi:cxx11](&v23, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 48), 0x67u, reason_type);
    std::string::~string(&v23);
    v10 = std::unordered_map<proto::VirtualItem,unsigned int>::operator[](
            &thisa->activity_coin_map_,
            (const std::unordered_map<proto::VirtualItem,unsigned int>::key_type *)(v5 + 64));
    if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    old_coin_num = *v10;
    v11 = std::unordered_map<proto::VirtualItem,unsigned int>::operator[](
            &thisa->activity_coin_map_,
            (const std::unordered_map<proto::VirtualItem,unsigned int>::key_type *)(v5 + 64));
    if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *v11 -= sub_numa;
    if ( is_notifya )
      BaseActivity::notifyActivityCoinInfo(thisa);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    ItemComp = Player::getItemComp(thisa->player_);
    if ( *(_BYTE *)(((unsigned __int64)reasona >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)reasona & 7) + 3) >= *(_BYTE *)(((unsigned __int64)reasona >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    reason_typea = reasona->reason_type;
    v13 = std::unordered_map<proto::VirtualItem,unsigned int>::operator[](
            &thisa->activity_coin_map_,
            (const std::unordered_map<proto::VirtualItem,unsigned int>::key_type *)(v5 + 64));
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    PlayerItemComp::logPlayerAddCoin(
      ItemComp,
      *(proto::VirtualItem *)(v5 + 64),
      old_coin_num,
      *v13,
      reason_typea,
      ITEM_LIMIT_NONE,
      0);
    v8 = 0;
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 48));
  }
  result = v8;
  if ( v24 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 485: range 0000000015FEA214-0000000015FEA3A6
__int64 __fastcall LanternRiteActivity::getActivityCoin(
        const LanternRiteActivity *const this,
        proto::VirtualItem coin_type)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::__detail::_Node_const_iterator<std::pair<const proto::VirtualItem,unsigned int>,false,false>::pointer v6; // rdx
  std::__detail::_Node_iterator_base<std::pair<const proto::VirtualItem,unsigned int>,false> __y; // [rsp+18h] [rbp-88h] BYREF
  char v8[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 13 coin_type:484 64 8 8 iter:486";
  *(_QWORD *)(v2 + 16) = LanternRiteActivity::getActivityCoin;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = coin_type;
  *(std::unordered_map<proto::VirtualItem,unsigned int>::const_iterator *)(v2 + 64) = std::unordered_map<proto::VirtualItem,unsigned int>::find(
                                                                                        &this->activity_coin_map_,
                                                                                        (const std::unordered_map<proto::VirtualItem,unsigned int>::key_type *)(v2 + 48));
  __y._M_cur = std::unordered_map<proto::VirtualItem,unsigned int>::end(&this->activity_coin_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<proto::VirtualItem const,unsigned int>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<const proto::VirtualItem,unsigned int>,false> *)(v2 + 64),
         &__y) )
  {
    result = 0LL;
  }
  else
  {
    v6 = std::__detail::_Node_const_iterator<std::pair<proto::VirtualItem const,unsigned int>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<const proto::VirtualItem,unsigned int>,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v6->second >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v6 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v6->second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    result = v6->second;
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

// Line 495: range 0000000015FEA3A8-0000000015FEA3DB
bool __cdecl LanternRiteActivity::isCoinTypeValid(const LanternRiteActivity *const this, proto::VirtualItem coin_type)
{
  return coin_type == ITEM_VIRTUAL_LANTERN_RITE_COIN_A
      || coin_type == ITEM_VIRTUAL_LANTERN_RITE_COIN_B
      || coin_type == ITEM_VIRTUAL_LANTERN_RITE_COIN_C;
};

// Line 502: range 0000000015FEA3DC-0000000015FEA54A
void __cdecl LanternRiteActivity::fillActivityCoinInfo(
        LanternRiteActivity *const this,
        google::protobuf::Map<unsigned int,unsigned int> *activity_coin_map)
{
  std::tuple_element<1,const std::pair<const proto::VirtualItem,unsigned int> >::type v2; // ebx
  unsigned int *v3; // rax
  std::tuple_element<1,const std::pair<const proto::VirtualItem,unsigned int> >::type *v4; // rdx
  google::protobuf::Map<unsigned int,unsigned int>::key_type key; // [rsp+1Ch] [rbp-44h] BYREF
  std::unordered_map<proto::VirtualItem,unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-40h] BYREF
  std::unordered_map<proto::VirtualItem,unsigned int>::iterator __for_end; // [rsp+28h] [rbp-38h] BYREF
  std::unordered_map<proto::VirtualItem,unsigned int> *__for_range; // [rsp+30h] [rbp-30h]
  const std::pair<const proto::VirtualItem,unsigned int> *v9; // [rsp+38h] [rbp-28h]
  std::tuple_element<0,const std::pair<const proto::VirtualItem,unsigned int> >::type *coin_type; // [rsp+40h] [rbp-20h]
  std::tuple_element<1,const std::pair<const proto::VirtualItem,unsigned int> >::type *coin_num; // [rsp+48h] [rbp-18h]

  __for_range = &this->activity_coin_map_;
  __for_begin._M_cur = std::unordered_map<proto::VirtualItem,unsigned int>::begin(&this->activity_coin_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<proto::VirtualItem,unsigned int>::end(&this->activity_coin_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<proto::VirtualItem const,unsigned int>,false>(&__for_begin, &__for_end) )
  {
    v9 = std::__detail::_Node_iterator<std::pair<proto::VirtualItem const,unsigned int>,false,false>::operator*(&__for_begin);
    coin_type = std::get<0ul,proto::VirtualItem const,unsigned int>(v9);
    coin_num = (std::tuple_element<1,const std::pair<const proto::VirtualItem,unsigned int> >::type *)std::get<1ul,proto::VirtualItem const,unsigned int>(v9);
    if ( *(_BYTE *)(((unsigned __int64)coin_num >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)coin_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)coin_num >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v2 = *coin_num;
    if ( *(_BYTE *)(((unsigned __int64)coin_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)coin_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)coin_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    key = *coin_type;
    v3 = google::protobuf::Map<unsigned int,unsigned int>::operator[](activity_coin_map, &key);
    v4 = v3;
    if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v3);
    }
    *v4 = v2;
    std::__detail::_Node_iterator<std::pair<proto::VirtualItem const,unsigned int>,false,false>::operator++(&__for_begin);
  }
};

// Line 510: range 0000000015FEA54C-0000000015FEAEB6
int32_t __cdecl LanternRiteActivity::execAction(
        LanternRiteActivity *const this,
        const data::NewActivityExec *action_exec)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rbx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  int v9; // r15d
  std::vector<unsigned int>::iterator v10; // rax
  common::milog::MiLogStream *v11; // rbx
  common::milog::MiLogStream *v12; // rax
  const std::string *v13; // rax
  common::milog::MiLogStream *v14; // rbx
  const std::string *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rbx
  common::milog::MiLogStream *v18; // rax
  const std::string *v19; // rax
  common::milog::MiLogStream *v20; // rbx
  const std::string *v21; // rax
  common::milog::MiLogStream *v22; // rax
  int32_t result; // eax
  unsigned int *__last; // [rsp+8h] [rbp-F8h]
  unsigned __int64 val; // [rsp+28h] [rbp-D8h] BYREF
  common::milog::MiLogStream v26; // [rsp+30h] [rbp-D0h] BYREF
  char v27[176]; // [rsp+50h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 12 stage_id:575 64 24 13 stage_vec:520";
  *(_QWORD *)(v3 + 16) = LanternRiteActivity::execAction;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  switch ( action_exec->type )
  {
    case NEW_ACTIVITY_ACTION_LANV2_OPEN_PROJECTION_STAGE:
      if ( std::vector<std::string>::size(&action_exec->param) )
      {
        std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 64));
        if ( common::tools::StringUtils::strVecToNumVec<unsigned int>(
               &action_exec->param,
               (std::vector<unsigned int> *)(v3 + 64)) )
        {
          common::milog::MiLogStream::create(
            &v26,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/lantern_rite_activity.cpp",
            "execAction",
            523);
          v8 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                 &v26,
                 (const char (*)[18])"strToNum falied: ");
          common::milog::MiLogStream::operator<<<std::string>(v8, &action_exec->param);
          common::milog::MiLogStream::~MiLogStream(&v26);
          v2 = -1;
          v9 = 0;
        }
        else
        {
          __last = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v3 + 64))._M_current;
          v10._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 64))._M_current;
          std::unordered_set<unsigned int>::insert<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>>(
            &this->projection_open_stage_set_,
            v10,
            (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)__last);
          BaseActivity::notifyClientData(this, 0);
          v9 = 1;
        }
        std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 64));
        if ( v9 )
          goto LABEL_33;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v26,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/lantern_rite_activity.cpp",
          "execAction",
          517);
        v6 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
               &v26,
               (const char (*)[19])"action param size ");
        val = std::vector<std::string>::size(&action_exec->param);
        v7 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v6, &val);
        common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v7, (const char (*)[12])off_25AC07C0);
        common::milog::MiLogStream::~MiLogStream(&v26);
        v2 = -1;
      }
      break;
    case NEW_ACTIVITY_ACTION_LANV2_CLOSE_PROJECTION_CONTENT:
      goto LABEL_33;
    case NEW_ACTIVITY_ACTION_LANV2_OPEN_SALVAGE_STAGE:
      if ( !std::vector<std::string>::size(&action_exec->param) )
      {
        common::milog::MiLogStream::create(
          &v26,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/lantern_rite_activity.cpp",
          "execAction",
          539);
        v11 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                &v26,
                (const char (*)[19])"action param size ");
        val = std::vector<std::string>::size(&action_exec->param);
        v12 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v11, &val);
        common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v12, (const char (*)[12])off_25AC07C0);
        common::milog::MiLogStream::~MiLogStream(&v26);
        v2 = -1;
        break;
      }
      *(_DWORD *)(v3 + 48) = 0;
      v13 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
      if ( common::tools::StringUtils::strToNum<unsigned int>(v13, (unsigned int *)(v3 + 48), 1) )
      {
        common::milog::MiLogStream::create(
          &v26,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/lantern_rite_activity.cpp",
          "execAction",
          545);
        v14 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                &v26,
                (const char (*)[18])"strToNum falied: ");
        v15 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v14, v15);
        common::milog::MiLogStream::~MiLogStream(&v26);
        v2 = -1;
        break;
      }
      if ( !LanternRiteActivity::openSalvageStage(this, *(_DWORD *)(v3 + 48)) )
        goto LABEL_20;
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/lantern_rite_activity.cpp",
        "execAction",
        550);
      v16 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
              &v26,
              (const char (*)[49])"[LanternRite] openSalvageStage failed, stage_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v26);
      v2 = -1;
      break;
    case NEW_ACTIVITY_ACTION_OPEN_MINI_ELDRITCH:
      if ( *(char *)(((unsigned __int64)&this->is_mini_eldritch_dungeon_open_ >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&this->is_mini_eldritch_dungeon_open_);
      this->is_mini_eldritch_dungeon_open_ = 1;
      BaseActivity::notifyClientData(this, 0);
      goto LABEL_33;
    case NEW_ACTIVITY_ACTION_LANV2_OPEN_FIREWORKS_STAGE:
      if ( std::vector<std::string>::size(&action_exec->param) )
      {
        *(_DWORD *)(v3 + 48) = 0;
        v19 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
        if ( common::tools::StringUtils::strToNum<unsigned int>(v19, (unsigned int *)(v3 + 48), 1) )
        {
          common::milog::MiLogStream::create(
            &v26,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/lantern_rite_activity.cpp",
            "execAction",
            578);
          v20 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                  &v26,
                  (const char (*)[18])"strToNum falied: ");
          v21 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v20, v21);
          common::milog::MiLogStream::~MiLogStream(&v26);
          v2 = -1;
        }
        else if ( LanternRiteActivity::openFireworksStage(this, *(_DWORD *)(v3 + 48)) )
        {
          common::milog::MiLogStream::create(
            &v26,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/lantern_rite_activity.cpp",
            "execAction",
            583);
          v22 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                  &v26,
                  (const char (*)[51])"[LanternRite] openFireworksStage failed, stage_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream(&v26);
          v2 = -1;
        }
        else
        {
LABEL_20:
          BaseActivity::notifyClientData(this, 0);
LABEL_33:
          v2 = 0;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v26,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/lantern_rite_activity.cpp",
          "execAction",
          572);
        v17 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                &v26,
                (const char (*)[19])"action param size ");
        val = std::vector<std::string>::size(&action_exec->param);
        v18 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v17, &val);
        common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v18, (const char (*)[12])off_25AC07C0);
        common::milog::MiLogStream::~MiLogStream(&v26);
        v2 = -1;
      }
      break;
    case NEW_ACTIVITY_ACTION_CLOSE_LANTERN_RITE_CONTENT:
      LanternRiteActivity::closeContent(this);
      BaseActivity::notifyClientData(this, 0);
      goto LABEL_33;
    default:
      v2 = BaseActivity::execAction(this, action_exec);
      break;
  }
  result = v2;
  if ( v27 == (char *)v3 )
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

// Line 596: range 0000000015FEAEB8-0000000015FEB1FC
int32_t __cdecl LanternRiteActivity::fromProjectionBin(
        LanternRiteActivity *const this,
        const proto::LanternRiteProjectionBin *projection_bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  const google::protobuf::RepeatedField<unsigned int> *v5; // rax
  const google::protobuf::RepeatedField<unsigned int> *v6; // rax
  const google::protobuf::RepeatedField<unsigned int> *v7; // rax
  LanternRiteProjectionLevelData *v8; // r15
  unsigned int *v9; // rcx
  LanternRiteProjectionLevelData *v10; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,LanternRiteProjectionLevelData>,false,false>,bool> v11; // rax
  common::milog::MiLogStream *v12; // r12
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-B4h] BYREF
  google::protobuf::RepeatedPtrField<proto::LanternRiteProjectionLevelBin>::const_iterator __for_begin; // [rsp+30h] [rbp-B0h] BYREF
  google::protobuf::RepeatedPtrField<proto::LanternRiteProjectionLevelBin>::const_iterator __for_end; // [rsp+38h] [rbp-A8h] BYREF
  const google::protobuf::RepeatedPtrField<proto::LanternRiteProjectionLevelBin> *__for_range; // [rsp+40h] [rbp-A0h]
  const proto::LanternRiteProjectionLevelBin *level_bin; // [rsp+48h] [rbp-98h]
  common::milog::MiLogStream v19; // [rsp+50h] [rbp-90h] BYREF
  char v20[112]; // [rsp+70h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 level_data:602";
  *(_QWORD *)(v2 + 16) = LanternRiteActivity::fromProjectionBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  v5 = proto::LanternRiteProjectionBin::open_stage_list(projection_bin);
  common::tools::MiscUtils::setFromRepeated<std::unordered_set<unsigned int>,unsigned int>(
    &this->projection_open_stage_set_,
    v5);
  v6 = proto::LanternRiteProjectionBin::view_input_tips_list(projection_bin);
  common::tools::MiscUtils::setFromRepeated<std::unordered_set<unsigned int>,unsigned int>(
    &this->projection_view_input_tips_set_,
    v6);
  v7 = proto::LanternRiteProjectionBin::view_switch_tips_list(projection_bin);
  common::tools::MiscUtils::setFromRepeated<std::unordered_set<unsigned int>,unsigned int>(
    &this->projection_view_switch_tips_set_,
    v7);
  __for_range = proto::LanternRiteProjectionBin::level_bin_list(projection_bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::LanternRiteProjectionLevelBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::LanternRiteProjectionLevelBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::LanternRiteProjectionLevelBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    level_bin = google::protobuf::internal::RepeatedPtrIterator<proto::LanternRiteProjectionLevelBin const>::operator*(&__for_begin);
    *(_DWORD *)(v2 + 32) = 0;
    *(_BYTE *)(v2 + 36) = 0;
    *(_DWORD *)(v2 + 40) = 0;
    *(_BYTE *)(v2 + 44) = 0;
    *(_DWORD *)(v2 + 32) = proto::LanternRiteProjectionLevelBin::id(level_bin);
    *(_BYTE *)(v2 + 36) = proto::LanternRiteProjectionLevelBin::is_finish(level_bin);
    *(_DWORD *)(v2 + 40) = proto::LanternRiteProjectionLevelBin::min_finish_time(level_bin);
    *(_BYTE *)(v2 + 44) = proto::LanternRiteProjectionLevelBin::is_view_tips(level_bin);
    v8 = std::move<LanternRiteProjectionLevelData &>((LanternRiteProjectionLevelData *)(v2 + 32));
    val = proto::LanternRiteProjectionLevelBin::id(level_bin);
    v11 = std::unordered_map<unsigned int,LanternRiteProjectionLevelData>::emplace<unsigned int,LanternRiteProjectionLevelData>(
            &this->projection_level_map_,
            &val,
            v8,
            v9,
            v10);
    if ( !v11.second )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/lantern_rite_activity.cpp",
        "fromProjectionBin",
        609);
      v12 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
              &v19,
              (const char (*)[47])"fromProjectionBin failed, duplicated level_id:");
      val = proto::LanternRiteProjectionLevelBin::id(level_bin);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v19);
      result = -1;
      goto LABEL_10;
    }
    google::protobuf::internal::RepeatedPtrIterator<proto::LanternRiteProjectionLevelBin const>::operator++(&__for_begin);
  }
  result = 0;
LABEL_10:
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

// Line 617: range 0000000015FEB1FE-0000000015FEB457
int32_t __cdecl LanternRiteActivity::toProjectionBin(
        const LanternRiteActivity *const this,
        proto::LanternRiteProjectionBin *projection_bin)
{
  google::protobuf::RepeatedField<unsigned int> *v2; // rax
  google::protobuf::RepeatedField<unsigned int> *v3; // rax
  google::protobuf::RepeatedField<unsigned int> *v4; // rax
  std::unordered_map<unsigned int,LanternRiteProjectionLevelData>::const_iterator __for_begin; // [rsp+18h] [rbp-38h] BYREF
  std::unordered_map<unsigned int,LanternRiteProjectionLevelData>::const_iterator __for_end; // [rsp+20h] [rbp-30h] BYREF
  const std::unordered_map<unsigned int,LanternRiteProjectionLevelData> *__for_range; // [rsp+28h] [rbp-28h]
  const std::pair<unsigned int const,LanternRiteProjectionLevelData> *v9; // [rsp+30h] [rbp-20h]
  std::tuple_element<0,const std::pair<unsigned int const,LanternRiteProjectionLevelData> >::type *id; // [rsp+38h] [rbp-18h]
  std::tuple_element<1,const std::pair<unsigned int const,LanternRiteProjectionLevelData> >::type *level_data; // [rsp+40h] [rbp-10h]
  proto::LanternRiteProjectionLevelBin *level_bin; // [rsp+48h] [rbp-8h]

  v2 = proto::LanternRiteProjectionBin::mutable_open_stage_list(projection_bin);
  common::tools::MiscUtils::setToRepeated<std::unordered_set<unsigned int>,unsigned int>(
    &this->projection_open_stage_set_,
    v2);
  v3 = proto::LanternRiteProjectionBin::mutable_view_input_tips_list(projection_bin);
  common::tools::MiscUtils::setToRepeated<std::unordered_set<unsigned int>,unsigned int>(
    &this->projection_view_input_tips_set_,
    v3);
  v4 = proto::LanternRiteProjectionBin::mutable_view_switch_tips_list(projection_bin);
  common::tools::MiscUtils::setToRepeated<std::unordered_set<unsigned int>,unsigned int>(
    &this->projection_view_switch_tips_set_,
    v4);
  __for_range = &this->projection_level_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,LanternRiteProjectionLevelData>::begin(&this->projection_level_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,LanternRiteProjectionLevelData>::end(&this->projection_level_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,LanternRiteProjectionLevelData>,false>(
            &__for_begin,
            &__for_end) )
  {
    v9 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,LanternRiteProjectionLevelData>,false,false>::operator*(&__for_begin);
    id = std::get<0ul,unsigned int const,LanternRiteProjectionLevelData>(v9);
    level_data = (std::tuple_element<1,const std::pair<unsigned int const,LanternRiteProjectionLevelData> >::type *)std::get<1ul,unsigned int const,LanternRiteProjectionLevelData>(v9);
    level_bin = proto::LanternRiteProjectionBin::add_level_bin_list(projection_bin);
    if ( *(_BYTE *)(((unsigned __int64)level_data >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)level_data & 7) + 3) >= *(_BYTE *)(((unsigned __int64)level_data >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::LanternRiteProjectionLevelBin::set_id(level_bin, level_data->id);
    if ( *(_BYTE *)(((unsigned __int64)&level_data->is_finish >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)level_data + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&level_data->is_finish >> 3)
                                                             + 0x7FFF8000) )
    {
      __asan_report_load1(&level_data->is_finish);
    }
    proto::LanternRiteProjectionLevelBin::set_is_finish(level_bin, level_data->is_finish);
    if ( *(_BYTE *)(((unsigned __int64)&level_data->min_finish_time >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)level_data + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_data->min_finish_time >> 3)
                                                               + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::LanternRiteProjectionLevelBin::set_min_finish_time(level_bin, level_data->min_finish_time);
    if ( *(_BYTE *)(((unsigned __int64)&level_data->is_view_tips >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)level_data + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&level_data->is_view_tips >> 3)
                                                              + 0x7FFF8000) )
    {
      __asan_report_load1(&level_data->is_view_tips);
    }
    proto::LanternRiteProjectionLevelBin::set_is_view_tips(level_bin, level_data->is_view_tips);
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,LanternRiteProjectionLevelData>,false,false>::operator++(&__for_begin);
  }
  return 0;
};

// Line 633: range 0000000015FEB458-0000000015FEB881
int32_t __cdecl LanternRiteActivity::projectionToClient(
        const LanternRiteActivity *const this,
        proto::LanternProjectionInfo *projection_info)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  google::protobuf::RepeatedField<unsigned int> *v5; // rax
  google::protobuf::RepeatedField<int> *v6; // rax
  google::protobuf::RepeatedField<int> *v7; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v8; // rdx
  bool canStartProjectionLevel; // al
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,LanternRiteProjectionLevelData>,false,false>::pointer v10; // rdx
  bool *p_is_finish; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,LanternRiteProjectionLevelData>,false,false>::pointer v12; // rdx
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,LanternRiteProjectionLevelData>,false,false>::pointer v13; // rdx
  bool *p_is_view_tips; // rax
  int32_t result; // eax
  std::set<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-B8h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-B0h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,LanternRiteProjectionLevelData>,false> __y; // [rsp+28h] [rbp-A8h] BYREF
  const std::set<unsigned int> *__for_range; // [rsp+30h] [rbp-A0h]
  proto::LanternProjectionLevelInfo *level_info; // [rsp+38h] [rbp-98h]
  std::shared_ptr<Config> v21; // [rsp+40h] [rbp-90h] BYREF
  char v22[128]; // [rsp+50h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 level_id:637 64 8 8 iter:642";
  *(_QWORD *)(v2 + 16) = LanternRiteActivity::projectionToClient;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  v5 = proto::LanternProjectionInfo::mutable_open_stage_list(projection_info);
  common::tools::MiscUtils::setToRepeated<std::unordered_set<unsigned int>,unsigned int>(
    &this->projection_open_stage_set_,
    v5);
  v6 = proto::LanternProjectionInfo::mutable_view_input_tips_list(projection_info);
  common::tools::MiscUtils::setToRepeated<std::unordered_set<unsigned int>,int>(
    &this->projection_view_input_tips_set_,
    v6);
  v7 = proto::LanternProjectionInfo::mutable_view_switch_tips_list(projection_info);
  common::tools::MiscUtils::setToRepeated<std::unordered_set<unsigned int>,int>(
    &this->projection_view_switch_tips_set_,
    v7);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v21);
  __for_range = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21)->design_config.txt_config_mgr.activity_sea_lamp_config_mgr.projection_level_set;
  std::shared_ptr<Config>::~shared_ptr(&v21);
  __for_begin._M_node = std::set<unsigned int>::begin(__for_range)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(__for_range)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v8 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 48) = *v8;
    level_info = proto::LanternProjectionInfo::add_level_list(projection_info);
    proto::LanternProjectionLevelInfo::set_id(level_info, *(_DWORD *)(v2 + 48));
    canStartProjectionLevel = LanternRiteActivity::canStartProjectionLevel(this, *(_DWORD *)(v2 + 48));
    proto::LanternProjectionLevelInfo::set_is_can_start(level_info, canStartProjectionLevel);
    *(std::unordered_map<unsigned int,LanternRiteProjectionLevelData>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,LanternRiteProjectionLevelData>::find(&this->projection_level_map_, (const std::unordered_map<unsigned int,LanternRiteProjectionLevelData>::key_type *)(v2 + 48));
    __y._M_cur = std::unordered_map<unsigned int,LanternRiteProjectionLevelData>::end(&this->projection_level_map_)._M_cur;
    if ( std::__detail::operator!=<std::pair<unsigned int const,LanternRiteProjectionLevelData>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,LanternRiteProjectionLevelData>,false> *)(v2 + 64),
           &__y) )
    {
      v10 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,LanternRiteProjectionLevelData>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,LanternRiteProjectionLevelData>,false,false> *const)(v2 + 64));
      p_is_finish = &v10->second.is_finish;
      if ( *(_BYTE *)(((unsigned __int64)p_is_finish >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)p_is_finish & 7) >= *(_BYTE *)(((unsigned __int64)p_is_finish >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(p_is_finish);
      }
      proto::LanternProjectionLevelInfo::set_is_finished(level_info, v10->second.is_finish);
      v12 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,LanternRiteProjectionLevelData>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,LanternRiteProjectionLevelData>,false,false> *const)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&v12->second.min_finish_time >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v12 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v12->second.min_finish_time >> 3)
                                                           + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::LanternProjectionLevelInfo::set_min_finish_time(level_info, v12->second.min_finish_time);
      v13 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,LanternRiteProjectionLevelData>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,LanternRiteProjectionLevelData>,false,false> *const)(v2 + 64));
      p_is_view_tips = &v13->second.is_view_tips;
      if ( *(_BYTE *)(((unsigned __int64)p_is_view_tips >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)p_is_view_tips & 7) >= *(_BYTE *)(((unsigned __int64)p_is_view_tips >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(p_is_view_tips);
      }
      proto::LanternProjectionLevelInfo::set_is_show_tips(level_info, v13->second.is_view_tips);
    }
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  result = 0;
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

// Line 654: range 0000000015FEB882-0000000015FEB8D8
void __cdecl LanternRiteActivity::clearProjectionData(LanternRiteActivity *const this)
{
  std::unordered_set<unsigned int>::clear(&this->projection_open_stage_set_);
  std::unordered_map<unsigned int,LanternRiteProjectionLevelData>::clear(&this->projection_level_map_);
  std::unordered_set<unsigned int>::clear(&this->projection_view_input_tips_set_);
  std::unordered_set<unsigned int>::clear(&this->projection_view_switch_tips_set_);
};

// Line 662: range 0000000015FEB8DA-0000000015FEBD06
__int64 __fastcall LanternRiteActivity::canStartProjectionLevel(
        const LanternRiteActivity *const this,
        uint32_t level_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  __int64 result; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  bool v7; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool v10; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,LanternRiteProjectionLevelData>,false,false>::pointer v12; // rdx
  bool *p_is_finish; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,LanternRiteProjectionLevelData>,false> __y; // [rsp+18h] [rbp-C8h] BYREF
  std::shared_ptr<Config> v15; // [rsp+20h] [rbp-C0h] BYREF
  char v16[176]; // [rsp+30h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 12 stage_id:671 64 4 16 pre_level_id:680 80 4 12 level_id:661 96 8 8 iter:681";
  *(_QWORD *)(v2 + 16) = LanternRiteActivity::canStartProjectionLevel;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234556924;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 80) = level_id;
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  if ( this->is_content_closed_ )
  {
    result = 0LL;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v15);
    v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15);
    v7 = !common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
            &v6->design_config.txt_config_mgr.activity_sea_lamp_config_mgr.projection_level_set,
            (const unsigned int *)(v2 + 80));
    std::shared_ptr<Config>::~shared_ptr(&v15);
    if ( v7 )
    {
      result = 0LL;
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v15);
      v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15);
      *(_DWORD *)(v2 + 48) = ActivitySeaLampExcelConfigMgr::getProjectionLevelOpenStage(
                               &v8->design_config.txt_config_mgr.activity_sea_lamp_config_mgr,
                               *(_DWORD *)(v2 + 80));
      std::shared_ptr<Config>::~shared_ptr(&v15);
      if ( !common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
              &this->projection_open_stage_set_,
              (const unsigned int *)(v2 + 48)) )
      {
        result = 0LL;
      }
      else
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v15);
        v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15);
        v10 = !ActivitySeaLampExcelConfigMgr::isHasPreProjectionLevel(
                 &v9->design_config.txt_config_mgr.activity_sea_lamp_config_mgr,
                 *(_DWORD *)(v2 + 80));
        std::shared_ptr<Config>::~shared_ptr(&v15);
        if ( v10 )
        {
          result = 1LL;
        }
        else
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v15);
          v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15);
          *(_DWORD *)(v2 + 64) = ActivitySeaLampExcelConfigMgr::getPreProjectionLevel(
                                   &v11->design_config.txt_config_mgr.activity_sea_lamp_config_mgr,
                                   *(_DWORD *)(v2 + 80));
          std::shared_ptr<Config>::~shared_ptr(&v15);
          *(std::unordered_map<unsigned int,LanternRiteProjectionLevelData>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,LanternRiteProjectionLevelData>::find(&this->projection_level_map_, (const std::unordered_map<unsigned int,LanternRiteProjectionLevelData>::key_type *)(v2 + 64));
          __y._M_cur = std::unordered_map<unsigned int,LanternRiteProjectionLevelData>::end(&this->projection_level_map_)._M_cur;
          if ( std::__detail::operator==<std::pair<unsigned int const,LanternRiteProjectionLevelData>,false>(
                 (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,LanternRiteProjectionLevelData>,false> *)(v2 + 96),
                 &__y) )
          {
            result = 0LL;
          }
          else
          {
            v12 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,LanternRiteProjectionLevelData>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,LanternRiteProjectionLevelData>,false,false> *const)(v2 + 96));
            p_is_finish = &v12->second.is_finish;
            if ( *(_BYTE *)(((unsigned __int64)p_is_finish >> 3) + 0x7FFF8000) != 0
              && ((unsigned __int8)p_is_finish & 7) >= *(_BYTE *)(((unsigned __int64)p_is_finish >> 3) + 0x7FFF8000) )
            {
              __asan_report_load1(p_is_finish);
            }
            result = v12->second.is_finish;
          }
        }
      }
    }
  }
  if ( v16 == (char *)v2 )
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
  return result;
};

// Line 690: range 0000000015FEBD08-0000000015FEC332
__int64 __fastcall LanternRiteActivity::finishProjection(
        LanternRiteActivity *const this,
        uint32_t level_id,
        uint32_t finish_time)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  unsigned int v6; // r14d
  PlayerBasicComp *BasicComp; // rax
  std::unordered_map<unsigned int,LanternRiteProjectionLevelData>::mapped_type *v8; // rax
  uint32_t v9; // ecx
  uint32_t v10; // ecx
  uint32_t *v11; // rdx
  uint32_t v12; // ecx
  PlayerWatcherComp *WatcherComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyLanternProjectionFinish,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyLanternProjectionFinish,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyLanternProjectionFinish,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rcx
  Player *player; // r14
  __int64 result; // rax
  std::string v19; // [rsp+0h] [rbp-110h]
  LanternRiteActivity *thisa; // [rsp+8h] [rbp-108h]
  LanternRiteProjectionLevelData *level_data; // [rsp+18h] [rbp-F8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-F0h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+30h] [rbp-E0h] BYREF
  std::string v24; // [rsp+40h] [rbp-D0h] BYREF
  char v25[176]; // [rsp+60h] [rbp-B0h] BYREF

  v19._M_string_length = (std::string::size_type)this;
  v19._M_dataplus._M_p = (std::string::pointer)__PAIR64__(level_id, finish_time);
  v3 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 1 10 holder:699 64 4 12 level_id:689 80 4 15 finish_time:689 96 16 11 log_ptr:714";
  *(_QWORD *)(v3 + 16) = LanternRiteActivity::finishProjection;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -234556924;
  v5[536862723] = -202178560;
  *(_DWORD *)(v3 + 64) = level_id;
  *(_DWORD *)(v3 + 80) = v19._M_dataplus._M_p;
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  if ( this->is_content_closed_ )
  {
    v6 = 10096;
  }
  else if ( (unsigned __int8)LanternRiteActivity::canStartProjectionLevel(this, *(_DWORD *)(v3 + 64)) != 1 )
  {
    v6 = 10097;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    BasicComp = Player::getBasicComp(this->player_);
    PlayerBasicComp::getNextTransNo[abi:cxx11](&v24, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48), 0xDE8u, v19);
    std::string::~string(&v24);
    v8 = std::unordered_map<unsigned int,LanternRiteProjectionLevelData>::operator[](
           &thisa->projection_level_map_,
           (const std::unordered_map<unsigned int,LanternRiteProjectionLevelData>::key_type *)(v3 + 64));
    level_data = v8;
    v9 = *(_DWORD *)(v3 + 64);
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v8);
    }
    level_data->id = v9;
    if ( *(_BYTE *)(((unsigned __int64)&level_data->is_finish >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)level_data + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&level_data->is_finish >> 3)
                                                             + 0x7FFF8000) )
    {
      __asan_report_load1(&level_data->is_finish);
    }
    if ( !level_data->is_finish )
    {
      v10 = *(_DWORD *)(v3 + 80);
      if ( *(_BYTE *)(((unsigned __int64)&level_data->min_finish_time >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)level_data + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_data->min_finish_time >> 3)
                                                                 + 0x7FFF8000) )
      {
        __asan_report_store4(&level_data->min_finish_time);
      }
      level_data->min_finish_time = v10;
    }
    else
    {
      v11 = (uint32_t *)std::min<unsigned int>((const unsigned int *)(v3 + 80), &level_data->min_finish_time);
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v12 = *v11;
      if ( *(_BYTE *)(((unsigned __int64)&level_data->min_finish_time >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)level_data + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_data->min_finish_time >> 3)
                                                                 + 0x7FFF8000) )
      {
        __asan_report_store4(&level_data->min_finish_time);
      }
      level_data->min_finish_time = v12;
    }
    if ( *(_BYTE *)(((unsigned __int64)&level_data->is_finish >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)level_data + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&level_data->is_finish >> 3)
                                                             + 0x7FFF8000) )
    {
      __asan_report_store1(&level_data->is_finish);
    }
    level_data->is_finish = 1;
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    WatcherComp = Player::getWatcherComp(thisa->player_);
    PlayerWatcherComp::triggerProjectionFinishLevel(WatcherComp, *(_DWORD *)(v3 + 64));
    BaseActivity::notifyClientData(thisa, 0);
    common::tools::perf::make_shared<proto_log::PlayerLogBodyLanternProjectionFinish>();
    v14 = std::__shared_ptr_access<proto_log::PlayerLogBodyLanternProjectionFinish,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyLanternProjectionFinish,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
    proto_log::PlayerLogBodyLanternProjectionFinish::set_level_id(v14, *(_DWORD *)(v3 + 64));
    v15 = std::__shared_ptr_access<proto_log::PlayerLogBodyLanternProjectionFinish,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyLanternProjectionFinish,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
    proto_log::PlayerLogBodyLanternProjectionFinish::set_time(v15, *(_DWORD *)(v3 + 80));
    v16 = std::__shared_ptr_access<proto_log::PlayerLogBodyLanternProjectionFinish,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyLanternProjectionFinish,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
    if ( *(_BYTE *)(((unsigned __int64)&level_data->is_view_tips >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)level_data + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&level_data->is_view_tips >> 3)
                                                              + 0x7FFF8000) )
    {
      __asan_report_load1(&level_data->is_view_tips);
    }
    proto_log::PlayerLogBodyLanternProjectionFinish::set_is_view_tips(v16, level_data->is_view_tips);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    player = thisa->player_;
    std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyLanternProjectionFinish,void>(
      &p_body_ptr,
      (const std::shared_ptr<proto_log::PlayerLogBodyLanternProjectionFinish> *)(v3 + 96));
    Player::printStatLog(player, &p_body_ptr, &p_body_ext_ptr, 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
    v6 = 0;
    std::shared_ptr<proto_log::PlayerLogBodyLanternProjectionFinish>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyLanternProjectionFinish> *const)(v3 + 96));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48));
  }
  result = v6;
  if ( v25 == (char *)v3 )
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

// Line 723: range 0000000015FEC334-0000000015FEC57E
int32_t __cdecl LanternRiteActivity::viewProjectionTips(
        LanternRiteActivity *const this,
        proto::ClientInputType input_type,
        bool is_input_tips)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::milog::MiLogStream *v8; // rax
  std::unordered_set<unsigned int>::value_type __x; // [rsp+1Ch] [rbp-84h] BYREF
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-80h] BYREF
  char v12[96]; // [rsp+40h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 15 input_value:728";
  *(_QWORD *)(v3 + 16) = LanternRiteActivity::viewProjectionTips;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  if ( this->is_content_closed_ )
  {
    result = 10096;
  }
  else
  {
    *(_DWORD *)(v3 + 32) = input_type;
    if ( !proto::ClientInputType_IsValid(*(_DWORD *)(v3 + 32)) || !*(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/lantern_rite_activity.cpp",
        "viewProjectionTips",
        731);
      v8 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(&v11, (const char (*)[25])off_25AC0B20);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v11);
      result = -1;
    }
    else
    {
      __x = input_type;
      if ( is_input_tips )
        std::unordered_set<unsigned int>::insert(&this->projection_view_input_tips_set_, &__x);
      else
        std::unordered_set<unsigned int>::insert(&this->projection_view_switch_tips_set_, &__x);
      BaseActivity::notifyClientData(this, 0);
      result = 0;
    }
  }
  if ( v12 == (char *)v3 )
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

// Line 747: range 0000000015FEC580-0000000015FEC764
__int64 __fastcall LanternRiteActivity::viewProjectionLevelTips(LanternRiteActivity *const this, uint32_t level_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  __int64 result; // rax
  std::unordered_map<unsigned int,LanternRiteProjectionLevelData>::mapped_type *v6; // rax
  uint32_t v7; // ecx
  LanternRiteProjectionLevelData *level_data; // [rsp+18h] [rbp-68h]
  char v9[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 level_id:746";
  *(_QWORD *)(v2 + 16) = LanternRiteActivity::viewProjectionLevelTips;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = level_id;
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  if ( this->is_content_closed_ )
  {
    result = 10096LL;
  }
  else if ( (unsigned __int8)LanternRiteActivity::canStartProjectionLevel(this, *(_DWORD *)(v2 + 32)) != 1 )
  {
    result = 10097LL;
  }
  else
  {
    v6 = std::unordered_map<unsigned int,LanternRiteProjectionLevelData>::operator[](
           &this->projection_level_map_,
           (const std::unordered_map<unsigned int,LanternRiteProjectionLevelData>::key_type *)(v2 + 32));
    level_data = v6;
    v7 = *(_DWORD *)(v2 + 32);
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v6);
    }
    level_data->id = v7;
    if ( *(_BYTE *)(((unsigned __int64)&level_data->is_view_tips >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)level_data + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&level_data->is_view_tips >> 3)
                                                              + 0x7FFF8000) )
    {
      __asan_report_store1(&level_data->is_view_tips);
    }
    level_data->is_view_tips = 1;
    BaseActivity::notifyClientData(this, 0);
    result = 0LL;
  }
  if ( v9 == (char *)v2 )
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

// Line 764: range 0000000015FEC766-0000000015FED09A
void __cdecl LanternRiteActivity::initSalvageInfoOnStart(LanternRiteActivity *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::tuple_element<0,const std::pair<const data::SalvagePlayType,std::vector<unsigned int> > >::type v4; // eax
  uint32_t *v5; // rdx
  uint32_t v6; // r14d
  std::__shared_ptr_access<SalvageScoreChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v8; // rdx
  uint32_t v9; // r14d
  std::__shared_ptr_access<SalvageBossChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  LanternSalvageStage *v12; // rax
  const unsigned int *v13; // rcx
  LanternSalvageStage *v14; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,LanternSalvageStage> >,bool> v15; // rax
  common::milog::MiLogStream *v16; // rax
  char __args_0[5]; // [rsp+17h] [rbp-1A9h] BYREF
  uint32_t challenge_id; // [rsp+1Ch] [rbp-1A4h]
  std::unordered_map<unsigned int,std::map<data::SalvagePlayType,std::vector<unsigned int>>>::const_iterator __for_begin; // [rsp+20h] [rbp-1A0h] BYREF
  std::unordered_map<unsigned int,std::map<data::SalvagePlayType,std::vector<unsigned int>>>::const_iterator __for_end; // [rsp+28h] [rbp-198h] BYREF
  std::map<data::SalvagePlayType,std::vector<unsigned int>>::const_iterator __for_begin_0; // [rsp+30h] [rbp-190h] BYREF
  std::map<data::SalvagePlayType,std::vector<unsigned int>>::const_iterator __for_end_0; // [rsp+38h] [rbp-188h] BYREF
  std::vector<unsigned int>::const_iterator __for_begin_1; // [rsp+40h] [rbp-180h] BYREF
  std::vector<unsigned int>::const_iterator __for_end_1; // [rsp+48h] [rbp-178h] BYREF
  const ActivitySeaLampExcelConfigMgr *config_mgr; // [rsp+50h] [rbp-170h]
  const std::unordered_map<unsigned int,std::map<data::SalvagePlayType,std::vector<unsigned int>>> *__for_range; // [rsp+58h] [rbp-168h]
  const std::pair<unsigned int const,std::map<data::SalvagePlayType,std::vector<unsigned int>> > *v27; // [rsp+60h] [rbp-160h]
  std::tuple_element<0,const std::pair<unsigned int const,std::map<data::SalvagePlayType,std::vector<unsigned int>> > >::type *stage_id; // [rsp+68h] [rbp-158h]
  std::tuple_element<1,const std::pair<unsigned int const,std::map<data::SalvagePlayType,std::vector<unsigned int>> > >::type *challenge_map; // [rsp+70h] [rbp-150h]
  const std::map<data::SalvagePlayType,std::vector<unsigned int>> *__for_range_0; // [rsp+78h] [rbp-148h]
  const std::pair<const data::SalvagePlayType,std::vector<unsigned int> > *v31; // [rsp+80h] [rbp-140h]
  std::tuple_element<0,const std::pair<const data::SalvagePlayType,std::vector<unsigned int> > >::type *play_type; // [rsp+88h] [rbp-138h]
  std::tuple_element<1,const std::pair<const data::SalvagePlayType,std::vector<unsigned int> > >::type *challenge_id_vec; // [rsp+90h] [rbp-130h]
  std::vector<std::shared_ptr<BaseSalvageChallenge>> *stage_challenge_vec_1; // [rsp+98h] [rbp-128h]
  const std::vector<unsigned int> *__for_range_2; // [rsp+A0h] [rbp-120h]
  std::vector<std::shared_ptr<BaseSalvageChallenge>> *stage_challenge_vec_0; // [rsp+A8h] [rbp-118h]
  const std::vector<unsigned int> *__for_range_1; // [rsp+B0h] [rbp-110h]
  std::vector<std::shared_ptr<BaseSalvageChallenge>> *stage_challenge_vec; // [rsp+B8h] [rbp-108h]
  std::shared_ptr<Config> v39; // [rsp+C0h] [rbp-100h] BYREF
  common::milog::MiLogStream v40; // [rsp+D0h] [rbp-F0h] BYREF
  char v41[208]; // [rsp+F0h] [rbp-D0h] BYREF

  v1 = (unsigned __int64)v41;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 23 score_challenge_ptr:801 64 56 9 stage:769";
  *(_QWORD *)(v1 + 16) = LanternRiteActivity::initSalvageInfoOnStart;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862723] = -218103808;
  v3[536862724] = -202116109;
  std::map<unsigned int,LanternSalvageStage>::clear(&this->salvage_stage_map_);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v39);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v39)->design_config.txt_config_mgr.activity_sea_lamp_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v39);
  __for_range = &config_mgr->salvage_stage_id_2_challenge_map;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::map<data::SalvagePlayType,std::vector<unsigned int>>>::begin(&config_mgr->salvage_stage_id_2_challenge_map)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::map<data::SalvagePlayType,std::vector<unsigned int>>>::end(&config_mgr->salvage_stage_id_2_challenge_map)._M_cur;
LABEL_5:
  if ( std::__detail::operator!=<std::pair<unsigned int const,std::map<data::SalvagePlayType,std::vector<unsigned int>>>,false>(
         &__for_begin,
         &__for_end) )
  {
    v27 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<data::SalvagePlayType,std::vector<unsigned int>>>,false,false>::operator*(&__for_begin);
    stage_id = std::get<0ul,unsigned int const,std::map<data::SalvagePlayType,std::vector<unsigned int>>>(v27);
    challenge_map = (std::tuple_element<1,const std::pair<unsigned int const,std::map<data::SalvagePlayType,std::vector<unsigned int>> > >::type *)std::get<1ul,unsigned int const,std::map<data::SalvagePlayType,std::vector<unsigned int>>>(v27);
    LanternSalvageStage::LanternSalvageStage((LanternSalvageStage *const)(v1 + 64));
    if ( *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)stage_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v1 + 64) = *stage_id;
    *(_BYTE *)(v1 + 68) = 0;
    __for_range_0 = challenge_map;
    __for_begin_0._M_node = std::map<data::SalvagePlayType,std::vector<unsigned int>>::begin(challenge_map)._M_node;
    __for_end_0._M_node = std::map<data::SalvagePlayType,std::vector<unsigned int>>::end(__for_range_0)._M_node;
    while ( 1 )
    {
      if ( !std::operator!=(&__for_begin_0, &__for_end_0) )
      {
        v12 = std::move<LanternSalvageStage &>((LanternSalvageStage *)(v1 + 64));
        v15 = std::map<unsigned int,LanternSalvageStage>::emplace<unsigned int const&,LanternSalvageStage>(
                &this->salvage_stage_map_,
                stage_id,
                v12,
                v13,
                v14);
        if ( !v15.second )
        {
          common::milog::MiLogStream::create(
            &v40,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/activity/lantern_rite_activity.cpp",
            "initSalvageInfoOnStart",
            814);
          v16 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                  &v40,
                  (const char (*)[35])"[LanternRite] duplicated stage_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, stage_id);
          common::milog::MiLogStream::~MiLogStream(&v40);
        }
        LanternSalvageStage::~LanternSalvageStage((LanternSalvageStage *const)(v1 + 64));
        std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<data::SalvagePlayType,std::vector<unsigned int>>>,false,false>::operator++(&__for_begin);
        goto LABEL_5;
      }
      v31 = std::_Rb_tree_const_iterator<std::pair<data::SalvagePlayType const,std::vector<unsigned int>>>::operator*(&__for_begin_0);
      play_type = std::get<0ul,data::SalvagePlayType const,std::vector<unsigned int>>(v31);
      challenge_id_vec = (std::tuple_element<1,const std::pair<const data::SalvagePlayType,std::vector<unsigned int> > >::type *)std::get<1ul,data::SalvagePlayType const,std::vector<unsigned int>>(v31);
      if ( *(_BYTE *)(((unsigned __int64)play_type >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)play_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)play_type >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v4 = *play_type;
      if ( *play_type == SALVAGE_PLAY_TYPE_BOSS )
      {
        stage_challenge_vec_1 = std::map<data::SalvagePlayType,std::vector<std::shared_ptr<BaseSalvageChallenge>>>::operator[](
                                  (std::map<data::SalvagePlayType,std::vector<std::shared_ptr<BaseSalvageChallenge>>> *const)(v1 + 72),
                                  play_type);
        __for_range_2 = challenge_id_vec;
        __for_begin_1._M_current = std::vector<unsigned int>::begin(challenge_id_vec)._M_current;
        __for_end_1._M_current = std::vector<unsigned int>::end(__for_range_2)._M_current;
        while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin_1, &__for_end_1) )
        {
          v8 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin_1);
          if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          *(_DWORD *)&__args_0[1] = *v8;
          __args_0[0] = 1;
          common::tools::perf::make_shared<SalvageBossChallenge,data::SalvagePlayType const&,bool>(
            (const data::SalvagePlayType *)(v1 + 32),
            (bool *)play_type,
            (const data::SalvagePlayType *)__args_0,
            (bool *)play_type);
          v9 = *(_DWORD *)&__args_0[1];
          v10 = std::__shared_ptr_access<SalvageBossChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SalvageBossChallenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
          if ( *(_BYTE *)(((unsigned __int64)&v10->challenge_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&v10->challenge_id >> 3) + 0x7FFF8000) <= 3 )
          {
            v10 = (std::__shared_ptr_access<SalvageBossChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v10->challenge_id);
          }
          v10->challenge_id = v9;
          std::shared_ptr<BaseSalvageChallenge>::shared_ptr<SalvageBossChallenge,void>(
            (std::shared_ptr<BaseSalvageChallenge> *const)&v39,
            (const std::shared_ptr<SalvageBossChallenge> *)(v1 + 32));
          std::vector<std::shared_ptr<BaseSalvageChallenge>>::push_back(
            stage_challenge_vec_1,
            (std::vector<std::shared_ptr<BaseSalvageChallenge>>::value_type *)&v39);
          std::shared_ptr<BaseSalvageChallenge>::~shared_ptr((std::shared_ptr<BaseSalvageChallenge> *const)&v39);
          std::shared_ptr<SalvageBossChallenge>::~shared_ptr((std::shared_ptr<SalvageBossChallenge> *const)(v1 + 32));
          __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin_1);
        }
      }
      else
      {
        if ( v4 > SALVAGE_PLAY_TYPE_BOSS )
          goto LABEL_33;
        if ( v4 <= SALVAGE_PLAY_TYPE_SEA )
        {
          if ( v4 > SALVAGE_PLAY_TYPE_NONE )
          {
            __args_0[0] = 1;
            common::tools::perf::make_shared<SalvageBundleChallenge,data::SalvagePlayType const&,bool>(
              (const data::SalvagePlayType *)(v1 + 32),
              (bool *)play_type,
              (const data::SalvagePlayType *)__args_0,
              (bool *)play_type);
            stage_challenge_vec = std::map<data::SalvagePlayType,std::vector<std::shared_ptr<BaseSalvageChallenge>>>::operator[](
                                    (std::map<data::SalvagePlayType,std::vector<std::shared_ptr<BaseSalvageChallenge>>> *const)(v1 + 72),
                                    play_type);
            std::shared_ptr<BaseSalvageChallenge>::shared_ptr<SalvageBundleChallenge,void>(
              (std::shared_ptr<BaseSalvageChallenge> *const)&v39,
              (const std::shared_ptr<SalvageBundleChallenge> *)(v1 + 32));
            std::vector<std::shared_ptr<BaseSalvageChallenge>>::push_back(
              stage_challenge_vec,
              (std::vector<std::shared_ptr<BaseSalvageChallenge>>::value_type *)&v39);
            std::shared_ptr<BaseSalvageChallenge>::~shared_ptr((std::shared_ptr<BaseSalvageChallenge> *const)&v39);
            std::shared_ptr<SalvageBundleChallenge>::~shared_ptr((std::shared_ptr<SalvageBundleChallenge> *const)(v1 + 32));
            goto LABEL_34;
          }
LABEL_33:
          common::milog::MiLogStream::create(
            &v40,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/lantern_rite_activity.cpp",
            "initSalvageInfoOnStart",
            808);
          v11 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                  &v40,
                  (const char (*)[40])"[LanternRite] unkown salvage play type:");
          common::milog::MiLogStream::operator<<<data::SalvagePlayType,(data::SalvagePlayType*)0>(v11, play_type);
          common::milog::MiLogStream::~MiLogStream(&v40);
          goto LABEL_34;
        }
        if ( (unsigned int)(v4 - 3) > 1 )
          goto LABEL_33;
        stage_challenge_vec_0 = std::map<data::SalvagePlayType,std::vector<std::shared_ptr<BaseSalvageChallenge>>>::operator[](
                                  (std::map<data::SalvagePlayType,std::vector<std::shared_ptr<BaseSalvageChallenge>>> *const)(v1 + 72),
                                  play_type);
        __for_range_1 = challenge_id_vec;
        __for_begin_1._M_current = std::vector<unsigned int>::begin(challenge_id_vec)._M_current;
        __for_end_1._M_current = std::vector<unsigned int>::end(__for_range_1)._M_current;
        while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin_1, &__for_end_1) )
        {
          v5 = (uint32_t *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin_1);
          if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          challenge_id = *v5;
          __args_0[0] = 0;
          common::tools::perf::make_shared<SalvageScoreChallenge,data::SalvagePlayType const&,bool>(
            (const data::SalvagePlayType *)(v1 + 32),
            (bool *)play_type,
            (const data::SalvagePlayType *)__args_0,
            (bool *)play_type);
          v6 = challenge_id;
          v7 = std::__shared_ptr_access<SalvageScoreChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SalvageScoreChallenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
          if ( *(_BYTE *)(((unsigned __int64)&v7->challenge_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&v7->challenge_id >> 3) + 0x7FFF8000) <= 3 )
          {
            v7 = (std::__shared_ptr_access<SalvageScoreChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v7->challenge_id);
          }
          v7->challenge_id = v6;
          std::shared_ptr<BaseSalvageChallenge>::shared_ptr<SalvageScoreChallenge,void>(
            (std::shared_ptr<BaseSalvageChallenge> *const)&v39,
            (const std::shared_ptr<SalvageScoreChallenge> *)(v1 + 32));
          std::vector<std::shared_ptr<BaseSalvageChallenge>>::push_back(
            stage_challenge_vec_0,
            (std::vector<std::shared_ptr<BaseSalvageChallenge>>::value_type *)&v39);
          std::shared_ptr<BaseSalvageChallenge>::~shared_ptr((std::shared_ptr<BaseSalvageChallenge> *const)&v39);
          std::shared_ptr<SalvageScoreChallenge>::~shared_ptr((std::shared_ptr<SalvageScoreChallenge> *const)(v1 + 32));
          __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin_1);
        }
      }
LABEL_34:
      std::_Rb_tree_const_iterator<std::pair<data::SalvagePlayType const,std::vector<unsigned int>>>::operator++(&__for_begin_0);
    }
  }
  if ( v41 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF800C) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 821: range 0000000015FED09C-0000000015FED1D0
void __cdecl LanternRiteActivity::registerSalvageGroupBundle(LanternRiteActivity *const this)
{
  common::milog::MiLogStream *v1; // rax
  std::map<unsigned int,LanternSalvageStage>::iterator __for_begin; // [rsp+10h] [rbp-60h] BYREF
  std::map<unsigned int,LanternSalvageStage>::iterator __for_end; // [rsp+18h] [rbp-58h] BYREF
  std::map<unsigned int,LanternSalvageStage> *__for_range; // [rsp+20h] [rbp-50h]
  std::pair<unsigned int const,LanternSalvageStage> *__in; // [rsp+28h] [rbp-48h]
  std::tuple_element<0,std::pair<unsigned int const,LanternSalvageStage> >::type *stage_id; // [rsp+30h] [rbp-40h]
  std::tuple_element<1,std::pair<unsigned int const,LanternSalvageStage> >::type *stage; // [rsp+38h] [rbp-38h]
  common::milog::MiLogStream v8; // [rsp+40h] [rbp-30h] BYREF

  __for_range = &this->salvage_stage_map_;
  __for_begin._M_node = std::map<unsigned int,LanternSalvageStage>::begin(&this->salvage_stage_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,LanternSalvageStage>::end(&this->salvage_stage_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,LanternSalvageStage>>::operator*(&__for_begin);
    stage_id = std::get<0ul,unsigned int const,LanternSalvageStage>(__in);
    stage = std::get<1ul,unsigned int const,LanternSalvageStage>(__in);
    if ( LanternRiteActivity::tryRegisterSalvageStageBundle(this, stage) )
    {
      common::milog::MiLogStream::create(
        &v8,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/lantern_rite_activity.cpp",
        "registerSalvageGroupBundle",
        826);
      v1 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
             &v8,
             (const char (*)[62])"[LanternRite] tryRegisterSalvageStageBundle failed, stage_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, stage_id);
      common::milog::MiLogStream::~MiLogStream(&v8);
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,LanternSalvageStage>>::operator++(&__for_begin);
  }
};

// Line 833: range 0000000015FED1D2-0000000015FED231
void __cdecl LanternRiteActivity::openProjectionContentByGm(LanternRiteActivity *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_content_closed_);
  this->is_content_closed_ = 0;
  BaseActivity::notifyClientData(this, 0);
};

// Line 839: range 0000000015FED232-0000000015FED291
void __cdecl LanternRiteActivity::closeProjectionContentByGm(LanternRiteActivity *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_content_closed_);
  this->is_content_closed_ = 1;
  BaseActivity::notifyClientData(this, 0);
};

// Line 845: range 0000000015FED292-0000000015FED32E
void __cdecl LanternRiteActivity::unlockAllProjectionStageByGm(LanternRiteActivity *const this)
{
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr M_node; // r12
  std::set<unsigned int>::iterator v2; // rax
  std::set<unsigned int> *stage_set; // [rsp+18h] [rbp-28h]
  std::shared_ptr<Config> v4[2]; // [rsp+20h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v4);
  stage_set = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v4)->design_config.txt_config_mgr.activity_sea_lamp_config_mgr.projection_stage_set;
  std::shared_ptr<Config>::~shared_ptr(v4);
  M_node = std::set<unsigned int>::end(stage_set)._M_node;
  v2._M_node = std::set<unsigned int>::begin(stage_set)._M_node;
  std::unordered_set<unsigned int>::insert<std::_Rb_tree_const_iterator<unsigned int>>(
    &this->projection_open_stage_set_,
    v2,
    (std::_Rb_tree_const_iterator<unsigned int>)M_node);
  BaseActivity::notifyClientData(this, 0);
};

// Line 852: range 0000000015FED330-0000000015FED5DC
__int64 __fastcall LanternRiteActivity::finishProjectionLevelByGm(LanternRiteActivity *const this, uint32_t level_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  bool v6; // r14
  __int64 result; // rax
  std::unordered_map<unsigned int,LanternRiteProjectionLevelData>::mapped_type *v8; // rax
  uint32_t v9; // ecx
  PlayerWatcherComp *WatcherComp; // rax
  LanternRiteProjectionLevelData *level_data; // [rsp+18h] [rbp-88h]
  std::shared_ptr<Config> v12; // [rsp+20h] [rbp-80h] BYREF
  char v13[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 level_id:851";
  *(_QWORD *)(v2 + 16) = LanternRiteActivity::finishProjectionLevelByGm;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = level_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v12);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v12);
  v6 = !common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
          &v5->design_config.txt_config_mgr.activity_sea_lamp_config_mgr.projection_level_set,
          (const unsigned int *)(v2 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v12);
  if ( v6 )
  {
    result = 0xFFFFFFFFLL;
  }
  else
  {
    v8 = std::unordered_map<unsigned int,LanternRiteProjectionLevelData>::operator[](
           &this->projection_level_map_,
           (const std::unordered_map<unsigned int,LanternRiteProjectionLevelData>::key_type *)(v2 + 32));
    level_data = v8;
    v9 = *(_DWORD *)(v2 + 32);
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v8);
    }
    level_data->id = v9;
    if ( *(_BYTE *)(((unsigned __int64)&level_data->is_finish >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)level_data + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&level_data->is_finish >> 3)
                                                             + 0x7FFF8000) )
    {
      __asan_report_store1(&level_data->is_finish);
    }
    level_data->is_finish = 1;
    if ( *(_BYTE *)(((unsigned __int64)&level_data->min_finish_time >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)level_data + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_data->min_finish_time >> 3)
                                                               + 0x7FFF8000) )
    {
      __asan_report_store4(&level_data->min_finish_time);
    }
    level_data->min_finish_time = 0;
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    WatcherComp = Player::getWatcherComp(this->player_);
    PlayerWatcherComp::triggerProjectionFinishLevel(WatcherComp, *(_DWORD *)(v2 + 32));
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

// Line 867: range 0000000015FED5DE-0000000015FED609
void __cdecl LanternRiteActivity::clearProjectionDataByGm(LanternRiteActivity *const this)
{
  LanternRiteActivity::clearProjectionData(this);
  BaseActivity::notifyClientData(this, 0);
};

// Line 874: range 0000000015FED60A-0000000015FED762
LanternSalvageStage *__fastcall LanternRiteActivity::findSalvageStage(
        LanternRiteActivity *const this,
        uint32_t stage_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  LanternSalvageStage *result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,LanternSalvageStage> >::_Self __y; // [rsp+18h] [rbp-88h] BYREF
  char v7[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 stage_id:873 64 8 8 iter:875";
  *(_QWORD *)(v2 + 16) = LanternRiteActivity::findSalvageStage;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = stage_id;
  *(std::map<unsigned int,LanternSalvageStage>::iterator *)(v2 + 64) = std::map<unsigned int,LanternSalvageStage>::find(
                                                                         &this->salvage_stage_map_,
                                                                         (const std::map<unsigned int,LanternSalvageStage>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,LanternSalvageStage>::end(&this->salvage_stage_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,LanternSalvageStage> >::_Self *)(v2 + 64),
         &__y) )
  {
    result = 0LL;
  }
  else
  {
    result = &std::_Rb_tree_iterator<std::pair<unsigned int const,LanternSalvageStage>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,LanternSalvageStage> > *const)(v2 + 64))->second;
  }
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

// Line 884: range 0000000015FED764-0000000015FEDBB0
__int64 __fastcall LanternRiteActivity::openSalvageStage(LanternRiteActivity *const this, uint32_t stage_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  std::allocator<data::SalvagePlayType> __a; // [rsp+2Fh] [rbp-C1h] BYREF
  LanternSalvageStage *stage_ptr; // [rsp+30h] [rbp-C0h]
  std::initializer_list<data::SalvagePlayType> __l; // [rsp+38h] [rbp-B8h] BYREF
  common::milog::MiLogStream v12; // [rsp+60h] [rbp-90h] BYREF
  char v13[112]; // [rsp+80h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 stage_id:883";
  *(_QWORD *)(v2 + 16) = LanternRiteActivity::openSalvageStage;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = stage_id;
  stage_ptr = LanternRiteActivity::findSalvageStage(this, *(_DWORD *)(v2 + 32));
  if ( stage_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&stage_ptr->is_open >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)stage_ptr + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&stage_ptr->is_open >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&stage_ptr->is_open);
    }
    if ( stage_ptr->is_open )
    {
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/lantern_rite_activity.cpp",
        "openSalvageStage",
        893);
      v7 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
             &v12,
             (const char (*)[56])"[LanternRite] salvage stage has been openned, stage_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v12);
      result = 0LL;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&stage_ptr->is_open >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)stage_ptr + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&stage_ptr->is_open >> 3) + 0x7FFF8000) )
      {
        __asan_report_store1(&stage_ptr->is_open);
      }
      stage_ptr->is_open = 1;
      if ( LanternRiteActivity::tryRegisterSalvageStageBundle(this, stage_ptr) )
      {
        common::milog::MiLogStream::create(
          &v12,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/lantern_rite_activity.cpp",
          "openSalvageStage",
          899);
        v8 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
               &v12,
               (const char (*)[62])"[LanternRite] tryRegisterSalvageStageBundle failed, stage_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 32));
        common::milog::MiLogStream::~MiLogStream(&v12);
        result = 0xFFFFFFFFLL;
      }
      else
      {
        __l._M_array = (std::initializer_list<data::SalvagePlayType>::iterator)0x200000001LL;
        std::allocator<data::SalvagePlayType>::allocator(&__a);
        std::vector<data::SalvagePlayType>::vector(
          (std::vector<data::SalvagePlayType> *const)&__l._M_len,
          (std::initializer_list<data::SalvagePlayType>)__PAIR128__(2LL, &__l),
          &__a);
        LanternRiteActivity::updateSalveBundleTrackingMark(
          this,
          *(_DWORD *)(v2 + 32),
          (const std::vector<data::SalvagePlayType> *)&__l._M_len);
        std::vector<data::SalvagePlayType>::~vector((std::vector<data::SalvagePlayType> *const)&__l._M_len);
        std::allocator<data::SalvagePlayType>::~allocator(&__a);
        BaseActivity::notifyClientData(this, 0);
        result = 0LL;
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/lantern_rite_activity.cpp",
      "openSalvageStage",
      888);
    v5 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
           &v12,
           (const char (*)[49])"[LanternRite] salvage stage not found, stage_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v12);
    result = 0xFFFFFFFFLL;
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

// Line 909: range 0000000015FEDBB2-0000000015FEEEAD
int32_t __cdecl LanternRiteActivity::tryRegisterSalvageStageBundle(
        LanternRiteActivity *const this,
        LanternSalvageStage *stage)
{
  int32_t v2; // r15d
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  const std::shared_ptr<BaseSalvageChallenge> *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  int v10; // r14d
  std::__shared_ptr_access<BaseSalvageChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rdx
  bool *p_is_unlock; // rax
  common::milog::MiLogStream *v13; // rdx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  std::tuple_element<0,const std::pair<const data::SalvagePlayType,std::vector<std::shared_ptr<BaseSalvageChallenge>> > >::type v16; // eax
  const ActivitySeaLampExcelConfigMgr *v17; // rdi
  std::tuple_element<0,const std::pair<const data::SalvagePlayType,std::vector<std::shared_ptr<BaseSalvageChallenge>> > >::type v18; // edx
  common::milog::MiLogStream *v20; // rdx
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v23; // rdx
  uint32_t v24; // edx
  char v25; // al
  common::milog::MiLogStream *v26; // rax
  std::set<unsigned int> *v27; // rax
  common::milog::MiLogStream *v28; // rdx
  int v29; // r14d
  ActivitySeaLampExcelConfigMgr *v30; // r14
  std::__shared_ptr_access<SalvageScoreChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rax
  common::milog::MiLogStream *v32; // r14
  std::__shared_ptr_access<SalvageScoreChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rax
  uint32_t v34; // edx
  char v35; // al
  common::milog::MiLogStream *v36; // rax
  uint32_t v37; // edx
  common::milog::MiLogStream *v38; // rdx
  int v39; // r14d
  ActivitySeaLampExcelConfigMgr *p_activity_sea_lamp_config_mgr; // r14
  std::__shared_ptr_access<SalvageBossChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v41; // rax
  common::milog::MiLogStream *v42; // r14
  std::__shared_ptr_access<SalvageBossChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v43; // rax
  uint32_t group_link_id; // edx
  char v45; // al
  common::milog::MiLogStream *v46; // rax
  uint32_t activity_id; // edx
  int32_t result; // eax
  std::map<data::SalvagePlayType,std::vector<std::shared_ptr<BaseSalvageChallenge>>>::iterator __for_begin; // [rsp+20h] [rbp-160h] BYREF
  std::map<data::SalvagePlayType,std::vector<std::shared_ptr<BaseSalvageChallenge>>>::iterator __for_end; // [rsp+28h] [rbp-158h] BYREF
  std::vector<std::shared_ptr<BaseSalvageChallenge>>::const_iterator __for_begin_0; // [rsp+30h] [rbp-150h] BYREF
  std::vector<std::shared_ptr<BaseSalvageChallenge>>::const_iterator __for_end_0; // [rsp+38h] [rbp-148h] BYREF
  std::vector<unsigned int>::const_iterator __for_begin_1; // [rsp+40h] [rbp-140h] BYREF
  std::vector<unsigned int>::const_iterator __for_end_1; // [rsp+48h] [rbp-138h] BYREF
  PlayerGroupLinkComp *group_link_comp; // [rsp+50h] [rbp-130h]
  std::map<data::SalvagePlayType,std::vector<std::shared_ptr<BaseSalvageChallenge>>> *__for_range; // [rsp+58h] [rbp-128h]
  const std::pair<const data::SalvagePlayType,std::vector<std::shared_ptr<BaseSalvageChallenge>> > *v58; // [rsp+60h] [rbp-120h]
  std::tuple_element<0,const std::pair<const data::SalvagePlayType,std::vector<std::shared_ptr<BaseSalvageChallenge>> > >::type *play_type; // [rsp+68h] [rbp-118h]
  std::tuple_element<1,const std::pair<const data::SalvagePlayType,std::vector<std::shared_ptr<BaseSalvageChallenge>> > >::type *challenge_vec; // [rsp+70h] [rbp-110h]
  const std::vector<std::shared_ptr<BaseSalvageChallenge>> *__for_range_0; // [rsp+78h] [rbp-108h]
  const data::SalvageChallengeDataExcelConfig *challenge_config_ptr_0; // [rsp+80h] [rbp-100h]
  const data::SalvageChallengeDataExcelConfig *challenge_config_ptr; // [rsp+88h] [rbp-F8h]
  const std::vector<unsigned int> *bundle_vec_ptr; // [rsp+90h] [rbp-F0h]
  const std::vector<unsigned int> *__for_range_1; // [rsp+98h] [rbp-E8h]
  std::shared_ptr<Config> v66; // [rsp+A0h] [rbp-E0h] BYREF
  common::milog::MiLogStream v67; // [rsp+B0h] [rbp-D0h] BYREF
  char v68[176]; // [rsp+D0h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v68;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 13 bundle_id:941 64 16 17 challenge_ptr:918 96 16 23 score_challenge_ptr:978";
  *(_QWORD *)(v3 + 16) = LanternRiteActivity::tryRegisterSalvageStageBundle;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862723] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&stage->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)stage + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&stage->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&stage->is_open);
  }
  if ( !stage->is_open )
  {
    common::milog::MiLogStream::create(
      &v67,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/lantern_rite_activity.cpp",
      "tryRegisterSalvageStageBundle",
      912);
    common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
      &v67,
      (const char (*)[31])"[LanternRite] stage not opened");
    common::milog::MiLogStream::~MiLogStream(&v67);
    v2 = -1;
    goto LABEL_112;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  group_link_comp = Player::getGroupLinkComp(this->player_);
  __for_range = &stage->stage_challenge_map;
  __for_begin._M_node = std::map<data::SalvagePlayType,std::vector<std::shared_ptr<BaseSalvageChallenge>>>::begin(&stage->stage_challenge_map)._M_node;
  __for_end._M_node = std::map<data::SalvagePlayType,std::vector<std::shared_ptr<BaseSalvageChallenge>>>::end(&stage->stage_challenge_map)._M_node;
LABEL_11:
  if ( std::operator!=(&__for_begin, &__for_end) )
  {
    v58 = std::_Rb_tree_iterator<std::pair<data::SalvagePlayType const,std::vector<std::shared_ptr<BaseSalvageChallenge>>>>::operator*(&__for_begin);
    play_type = std::get<0ul,data::SalvagePlayType const,std::vector<std::shared_ptr<BaseSalvageChallenge>>>(v58);
    challenge_vec = (std::tuple_element<1,const std::pair<const data::SalvagePlayType,std::vector<std::shared_ptr<BaseSalvageChallenge>> > >::type *)std::get<1ul,data::SalvagePlayType const,std::vector<std::shared_ptr<BaseSalvageChallenge>>>(v58);
    __for_range_0 = challenge_vec;
    __for_begin_0._M_current = std::vector<std::shared_ptr<BaseSalvageChallenge>>::begin(challenge_vec)._M_current;
    __for_end_0._M_current = std::vector<std::shared_ptr<BaseSalvageChallenge>>::end(__for_range_0)._M_current;
    while ( 1 )
    {
      if ( !__gnu_cxx::operator!=<std::shared_ptr<BaseSalvageChallenge> const*,std::vector<std::shared_ptr<BaseSalvageChallenge>>>(
              &__for_begin_0,
              &__for_end_0) )
      {
        std::_Rb_tree_iterator<std::pair<data::SalvagePlayType const,std::vector<std::shared_ptr<BaseSalvageChallenge>>>>::operator++(&__for_begin);
        goto LABEL_11;
      }
      v6 = __gnu_cxx::__normal_iterator<std::shared_ptr<BaseSalvageChallenge> const*,std::vector<std::shared_ptr<BaseSalvageChallenge>>>::operator*(&__for_begin_0);
      std::shared_ptr<BaseSalvageChallenge>::shared_ptr((std::shared_ptr<BaseSalvageChallenge> *const)(v3 + 64), v6);
      if ( std::operator==<BaseSalvageChallenge>((const std::shared_ptr<BaseSalvageChallenge> *)(v3 + 64), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v67,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/lantern_rite_activity.cpp",
          "tryRegisterSalvageStageBundle",
          922);
        v7 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
               &v67,
               (const char (*)[58])"[LanternRite] salvage challenge_ptr is nullptr, stage_id:");
        v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &stage->stage_id);
        v9 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v8, (const char (*)[12])" play_type:");
        common::milog::MiLogStream::operator<<<data::SalvagePlayType,(data::SalvagePlayType*)0>(v9, play_type);
        common::milog::MiLogStream::~MiLogStream(&v67);
        v10 = 0;
      }
      else
      {
        v11 = std::__shared_ptr_access<BaseSalvageChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseSalvageChallenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        p_is_unlock = &v11->is_unlock;
        if ( *(_BYTE *)(((unsigned __int64)p_is_unlock >> 3) + 0x7FFF8000) != 0
          && ((unsigned __int8)p_is_unlock & 7) >= *(_BYTE *)(((unsigned __int64)p_is_unlock >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(p_is_unlock);
        }
        if ( !v11->is_unlock )
        {
          common::milog::MiLogStream::create(
            &v67,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/lantern_rite_activity.cpp",
            "tryRegisterSalvageStageBundle",
            927);
          v13 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                  &v67,
                  (const char (*)[45])"[LanternRite] challenge is locked, stage_id:");
          v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &stage->stage_id);
          v15 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v14, (const char (*)[12])" play_type:");
          common::milog::MiLogStream::operator<<<data::SalvagePlayType,(data::SalvagePlayType*)0>(v15, play_type);
          common::milog::MiLogStream::~MiLogStream(&v67);
          v10 = 0;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)play_type >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)play_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)play_type >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          v16 = *play_type;
          if ( *play_type == SALVAGE_PLAY_TYPE_BOSS )
          {
            std::dynamic_pointer_cast<SalvageBossChallenge,BaseSalvageChallenge>((const std::shared_ptr<BaseSalvageChallenge> *)(v3 + 96));
            if ( std::operator==<SalvageBossChallenge>((const std::shared_ptr<SalvageBossChallenge> *)(v3 + 96), 0LL) )
            {
              common::milog::MiLogStream::create(
                &v67,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/lantern_rite_activity.cpp",
                "tryRegisterSalvageStageBundle",
                981);
              v38 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                      &v67,
                      (const char (*)[47])"[LanternRite] challenge cast failed, stage_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v38, &stage->stage_id);
              common::milog::MiLogStream::~MiLogStream(&v67);
              v39 = 0;
            }
            else
            {
              ServiceBox::findService<GameserverService>();
              GameserverService::getConfig((GameserverService *const)&v66);
              p_activity_sea_lamp_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v66)->design_config.txt_config_mgr.activity_sea_lamp_config_mgr;
              v41 = std::__shared_ptr_access<SalvageBossChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SalvageBossChallenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
              if ( *(_BYTE *)(((unsigned __int64)&v41->challenge_id >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&v41->challenge_id >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4();
              }
              challenge_config_ptr_0 = data::ActivitySeaLampExcelConfigMgrBase::findSalvageChallengeDataExcelConfig(
                                         p_activity_sea_lamp_config_mgr,
                                         v41->challenge_id);
              std::shared_ptr<Config>::~shared_ptr(&v66);
              if ( challenge_config_ptr_0 )
              {
                if ( *(_BYTE *)(((unsigned __int64)&challenge_config_ptr_0->group_link_id >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&challenge_config_ptr_0->group_link_id >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4();
                }
                if ( PlayerGroupLinkComp::isGroupBundleRegistered(
                       group_link_comp,
                       challenge_config_ptr_0->group_link_id) )
                {
                  goto LABEL_94;
                }
                if ( *(_BYTE *)(((unsigned __int64)&challenge_config_ptr_0->group_link_id >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&challenge_config_ptr_0->group_link_id >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4();
                }
                group_link_id = challenge_config_ptr_0->group_link_id;
                if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4();
                }
                if ( PlayerGroupLinkComp::isGroupBundleFinish(group_link_comp, this->activity_id_, group_link_id) )
LABEL_94:
                  v45 = 1;
                else
                  v45 = 0;
                if ( v45 )
                {
                  common::milog::MiLogStream::create(
                    &v67,
                    &common::milog::MiLogDefault::default_log_obj_,
                    1u,
                    "./src/player/activity/lantern_rite_activity.cpp",
                    "tryRegisterSalvageStageBundle",
                    992);
                  v46 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                          &v67,
                          (const char (*)[53])"[LanternRite] bundle has been registered, bundle_id:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v46,
                    &challenge_config_ptr_0->group_link_id);
                  common::milog::MiLogStream::~MiLogStream(&v67);
                  v39 = 0;
                }
                else
                {
                  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_load4();
                  }
                  activity_id = this->activity_id_;
                  if ( *(_BYTE *)(((unsigned __int64)&challenge_config_ptr_0->group_link_id >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&challenge_config_ptr_0->group_link_id >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_load4();
                  }
                  PlayerGroupLinkComp::registerGroupBundle(
                    group_link_comp,
                    challenge_config_ptr_0->group_link_id,
                    activity_id);
                  v39 = 1;
                }
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v67,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/player/activity/lantern_rite_activity.cpp",
                  "tryRegisterSalvageStageBundle",
                  987);
                v42 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
                        &v67,
                        (const char (*)[61])"[LanternRite] challenge_config_ptr is nullptr, challenge_id:");
                v43 = std::__shared_ptr_access<SalvageBossChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SalvageBossChallenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v42, &v43->challenge_id);
                common::milog::MiLogStream::~MiLogStream(&v67);
                v39 = 0;
              }
            }
            std::shared_ptr<SalvageBossChallenge>::~shared_ptr((std::shared_ptr<SalvageBossChallenge> *const)(v3 + 96));
            if ( v39 )
              goto LABEL_106;
            v10 = 0;
          }
          else
          {
            if ( v16 > SALVAGE_PLAY_TYPE_BOSS )
              goto LABEL_105;
            if ( v16 > SALVAGE_PLAY_TYPE_SEA )
            {
              if ( (unsigned int)(v16 - 3) > 1 )
              {
LABEL_105:
                common::milog::MiLogStream::create(
                  &v67,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/activity/lantern_rite_activity.cpp",
                  "tryRegisterSalvageStageBundle",
                  999);
                common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                  &v67,
                  (const char (*)[32])"[LanternRite] unkown play type!");
                common::milog::MiLogStream::~MiLogStream(&v67);
                v2 = -1;
                v10 = 1;
                goto LABEL_107;
              }
              std::dynamic_pointer_cast<SalvageScoreChallenge,BaseSalvageChallenge>((const std::shared_ptr<BaseSalvageChallenge> *)(v3 + 96));
              if ( std::operator==<SalvageScoreChallenge>(
                     (const std::shared_ptr<SalvageScoreChallenge> *)(v3 + 96),
                     0LL) )
              {
                common::milog::MiLogStream::create(
                  &v67,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/activity/lantern_rite_activity.cpp",
                  "tryRegisterSalvageStageBundle",
                  959);
                v28 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                        &v67,
                        (const char (*)[47])"[LanternRite] challenge cast failed, stage_id:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, &stage->stage_id);
                common::milog::MiLogStream::~MiLogStream(&v67);
                v29 = 0;
              }
              else
              {
                ServiceBox::findService<GameserverService>();
                GameserverService::getConfig((GameserverService *const)&v66);
                v30 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v66)->design_config.txt_config_mgr.activity_sea_lamp_config_mgr;
                v31 = std::__shared_ptr_access<SalvageScoreChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SalvageScoreChallenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
                if ( *(_BYTE *)(((unsigned __int64)&v31->challenge_id >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&v31->challenge_id >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4();
                }
                challenge_config_ptr = data::ActivitySeaLampExcelConfigMgrBase::findSalvageChallengeDataExcelConfig(
                                         v30,
                                         v31->challenge_id);
                std::shared_ptr<Config>::~shared_ptr(&v66);
                if ( challenge_config_ptr )
                {
                  if ( *(_BYTE *)(((unsigned __int64)&challenge_config_ptr->group_link_id >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&challenge_config_ptr->group_link_id >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_load4();
                  }
                  if ( PlayerGroupLinkComp::isGroupBundleRegistered(
                         group_link_comp,
                         challenge_config_ptr->group_link_id) )
                  {
                    goto LABEL_69;
                  }
                  if ( *(_BYTE *)(((unsigned __int64)&challenge_config_ptr->group_link_id >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&challenge_config_ptr->group_link_id >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_load4();
                  }
                  v34 = challenge_config_ptr->group_link_id;
                  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_load4();
                  }
                  if ( PlayerGroupLinkComp::isGroupBundleFinish(group_link_comp, this->activity_id_, v34) )
LABEL_69:
                    v35 = 1;
                  else
                    v35 = 0;
                  if ( v35 )
                  {
                    common::milog::MiLogStream::create(
                      &v67,
                      &common::milog::MiLogDefault::default_log_obj_,
                      1u,
                      "./src/player/activity/lantern_rite_activity.cpp",
                      "tryRegisterSalvageStageBundle",
                      970);
                    v36 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                            &v67,
                            (const char (*)[53])"[LanternRite] bundle has been registered, bundle_id:");
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v36,
                      &challenge_config_ptr->group_link_id);
                    common::milog::MiLogStream::~MiLogStream(&v67);
                    v29 = 0;
                  }
                  else
                  {
                    if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
                    {
                      __asan_report_load4();
                    }
                    v37 = this->activity_id_;
                    if ( *(_BYTE *)(((unsigned __int64)&challenge_config_ptr->group_link_id >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((unsigned __int64)&challenge_config_ptr->group_link_id >> 3) + 0x7FFF8000) <= 3 )
                    {
                      __asan_report_load4();
                    }
                    PlayerGroupLinkComp::registerGroupBundle(group_link_comp, challenge_config_ptr->group_link_id, v37);
                    v29 = 1;
                  }
                }
                else
                {
                  common::milog::MiLogStream::create(
                    &v67,
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/player/activity/lantern_rite_activity.cpp",
                    "tryRegisterSalvageStageBundle",
                    965);
                  v32 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
                          &v67,
                          (const char (*)[61])"[LanternRite] challenge_config_ptr is nullptr, challenge_id:");
                  v33 = std::__shared_ptr_access<SalvageScoreChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SalvageScoreChallenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, &v33->challenge_id);
                  common::milog::MiLogStream::~MiLogStream(&v67);
                  v29 = 0;
                }
              }
              std::shared_ptr<SalvageScoreChallenge>::~shared_ptr((std::shared_ptr<SalvageScoreChallenge> *const)(v3 + 96));
              if ( v29 )
                goto LABEL_106;
              v10 = 0;
            }
            else
            {
              if ( v16 <= SALVAGE_PLAY_TYPE_NONE )
                goto LABEL_105;
              ServiceBox::findService<GameserverService>();
              GameserverService::getConfig((GameserverService *const)&v66);
              v17 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v66)->design_config.txt_config_mgr.activity_sea_lamp_config_mgr;
              if ( *(_BYTE *)(((unsigned __int64)play_type >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)play_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)play_type >> 3)
                                                                            + 0x7FFF8000) )
              {
                v17 = (const ActivitySeaLampExcelConfigMgr *)play_type;
                __asan_report_load4();
              }
              v18 = *play_type;
              if ( *(_BYTE *)(((unsigned __int64)stage >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)stage >> 3) + 0x7FFF8000) <= 3 )
              {
                v17 = (const ActivitySeaLampExcelConfigMgr *)stage;
                __asan_report_load4();
              }
              bundle_vec_ptr = ActivitySeaLampExcelConfigMgr::getSalvageBundleVecByStageIdAnaPlayType(
                                 v17,
                                 stage->stage_id,
                                 v18);
              std::shared_ptr<Config>::~shared_ptr(&v66);
              if ( bundle_vec_ptr && !std::vector<unsigned int>::empty(bundle_vec_ptr) )
              {
                __for_range_1 = bundle_vec_ptr;
                __for_begin_1._M_current = std::vector<unsigned int>::begin(bundle_vec_ptr)._M_current;
                __for_end_1._M_current = std::vector<unsigned int>::end(__for_range_1)._M_current;
                while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                          &__for_begin_1,
                          &__for_end_1) )
                {
                  v23 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin_1);
                  if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)v23 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load4();
                  }
                  *(_DWORD *)(v3 + 48) = *v23;
                  if ( PlayerGroupLinkComp::isGroupBundleRegistered(group_link_comp, *(_DWORD *)(v3 + 48)) )
                    goto LABEL_47;
                  v24 = *(_DWORD *)(v3 + 48);
                  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_load4();
                  }
                  if ( PlayerGroupLinkComp::isGroupBundleFinish(group_link_comp, this->activity_id_, v24) )
LABEL_47:
                    v25 = 1;
                  else
                    v25 = 0;
                  if ( v25 )
                  {
                    common::milog::MiLogStream::create(
                      &v67,
                      &common::milog::MiLogDefault::default_log_obj_,
                      1u,
                      "./src/player/activity/lantern_rite_activity.cpp",
                      "tryRegisterSalvageStageBundle",
                      945);
                    v26 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                            &v67,
                            (const char (*)[53])"[LanternRite] bundle has been registered, bundle_id:");
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v26,
                      (const unsigned int *)(v3 + 48));
                    common::milog::MiLogStream::~MiLogStream(&v67);
                  }
                  else
                  {
                    if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
                    {
                      __asan_report_load4();
                    }
                    PlayerGroupLinkComp::registerGroupBundle(group_link_comp, *(_DWORD *)(v3 + 48), this->activity_id_);
                    v27 = std::map<data::SalvagePlayType,std::set<unsigned int>>::operator[](
                            &this->salvage_registered_bundle_map_,
                            play_type);
                    std::set<unsigned int>::insert(v27, (const std::set<unsigned int>::value_type *)(v3 + 48));
                  }
                  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin_1);
                }
LABEL_106:
                v10 = 2;
                goto LABEL_107;
              }
              common::milog::MiLogStream::create(
                &v67,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/lantern_rite_activity.cpp",
                "tryRegisterSalvageStageBundle",
                938);
              v20 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                      &v67,
                      (const char (*)[46])"[LanternRite] bundle vec not found, stage_id:");
              v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &stage->stage_id);
              v22 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                      v21,
                      (const char (*)[12])" play_type:");
              common::milog::MiLogStream::operator<<<data::SalvagePlayType,(data::SalvagePlayType*)0>(v22, play_type);
              common::milog::MiLogStream::~MiLogStream(&v67);
              v10 = 0;
            }
          }
        }
      }
LABEL_107:
      std::shared_ptr<BaseSalvageChallenge>::~shared_ptr((std::shared_ptr<BaseSalvageChallenge> *const)(v3 + 64));
      if ( v10 && v10 != 2 )
        goto LABEL_112;
      __gnu_cxx::__normal_iterator<std::shared_ptr<BaseSalvageChallenge> const*,std::vector<std::shared_ptr<BaseSalvageChallenge>>>::operator++(&__for_begin_0);
    }
  }
  v2 = 0;
LABEL_112:
  result = v2;
  if ( v68 == (char *)v3 )
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

// Line 1009: range 0000000015FEEEAE-0000000015FEF4BF
void __cdecl LanternRiteActivity::registerEventObserver(LanternRiteActivity *const this)
{
  unsigned __int64 v1; // r14
  __int64 v2; // rax
  _DWORD *v3; // r15
  PlayerEventComp *EventComp; // r12
  PlayerEventComp *v5; // r12
  PlayerEventComp *v6; // r12
  PlayerEventComp *v7; // rbx
  PlayerEventComp *v8; // rbx
  PlayerEventComp *v9; // rbx
  std::enable_shared_from_this<BaseActivity> v10; // [rsp+70h] [rbp-A0h] BYREF
  char v11[144]; // [rsp+80h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 13 this_ptr:1010 64 16 13 this_wtr:1011";
  *(_QWORD *)(v1 + 16) = LanternRiteActivity::registerEventObserver;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  std::enable_shared_from_this<BaseActivity>::shared_from_this(&v10);
  std::dynamic_pointer_cast<LanternRiteActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)(v1 + 32));
  std::shared_ptr<BaseActivity>::~shared_ptr((std::shared_ptr<BaseActivity> *const)&v10);
  std::weak_ptr<LanternRiteActivity>::weak_ptr<LanternRiteActivity,void>(
    (std::weak_ptr<LanternRiteActivity> *const)(v1 + 64),
    (const std::shared_ptr<LanternRiteActivity> *)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  EventComp = Player::getEventComp(this->player_);
  std::weak_ptr<LanternRiteActivity>::weak_ptr(
    (std::weak_ptr<LanternRiteActivity> *const)&v10,
    (const std::weak_ptr<LanternRiteActivity> *)(v1 + 64));
  PlayerEventComp::tryRegisterObserver<LanternRiteActivity,GroupBundleFinishEvent>(
    EventComp,
    (std::weak_ptr<LanternRiteActivity> *)&v10,
    (void (*)(LanternRiteActivity *, const GroupBundleFinishEvent *))LanternRiteActivity::onGroupBundleFinishEvent,
    0LL);
  std::weak_ptr<LanternRiteActivity>::~weak_ptr((std::weak_ptr<LanternRiteActivity> *const)&v10);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = Player::getEventComp(this->player_);
  std::weak_ptr<LanternRiteActivity>::weak_ptr(
    (std::weak_ptr<LanternRiteActivity> *const)&v10,
    (const std::weak_ptr<LanternRiteActivity> *)(v1 + 64));
  PlayerEventComp::tryRegisterObserver<LanternRiteActivity,GallerySalvagePreventSettleEvent>(
    v5,
    (std::weak_ptr<LanternRiteActivity> *)&v10,
    (void (*)(LanternRiteActivity *, const GallerySalvagePreventSettleEvent *))LanternRiteActivity::onGallerySalvagePreventSettleEvent,
    0LL);
  std::weak_ptr<LanternRiteActivity>::~weak_ptr((std::weak_ptr<LanternRiteActivity> *const)&v10);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = Player::getEventComp(this->player_);
  std::weak_ptr<LanternRiteActivity>::weak_ptr(
    (std::weak_ptr<LanternRiteActivity> *const)&v10,
    (const std::weak_ptr<LanternRiteActivity> *)(v1 + 64));
  PlayerEventComp::tryRegisterObserver<LanternRiteActivity,GallerySalvageEscortSettleEvent>(
    v6,
    (std::weak_ptr<LanternRiteActivity> *)&v10,
    (void (*)(LanternRiteActivity *, const GallerySalvageEscortSettleEvent *))LanternRiteActivity::onGallerySalvageEscortSettleEvent,
    0LL);
  std::weak_ptr<LanternRiteActivity>::~weak_ptr((std::weak_ptr<LanternRiteActivity> *const)&v10);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v7 = Player::getEventComp(this->player_);
  std::weak_ptr<LanternRiteActivity>::weak_ptr(
    (std::weak_ptr<LanternRiteActivity> *const)&v10,
    (const std::weak_ptr<LanternRiteActivity> *)(v1 + 64));
  PlayerEventComp::tryRegisterObserver<LanternRiteActivity,CreateDungeonEvent>(
    v7,
    (std::weak_ptr<LanternRiteActivity> *)&v10,
    (void (*)(LanternRiteActivity *, const CreateDungeonEvent *))LanternRiteActivity::onCreateDungeonEvent,
    0LL);
  std::weak_ptr<LanternRiteActivity>::~weak_ptr((std::weak_ptr<LanternRiteActivity> *const)&v10);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v8 = Player::getEventComp(this->player_);
  std::weak_ptr<LanternRiteActivity>::weak_ptr(
    (std::weak_ptr<LanternRiteActivity> *const)&v10,
    (const std::weak_ptr<LanternRiteActivity> *)(v1 + 64));
  PlayerEventComp::tryRegisterObserver<LanternRiteActivity,PostEnterSceneEvent>(
    v8,
    (std::weak_ptr<LanternRiteActivity> *)&v10,
    (void (*)(LanternRiteActivity *, const PostEnterSceneEvent *))LanternRiteActivity::onPostEnterSceneEvent,
    0LL);
  std::weak_ptr<LanternRiteActivity>::~weak_ptr((std::weak_ptr<LanternRiteActivity> *const)&v10);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v9 = Player::getEventComp(this->player_);
  std::weak_ptr<LanternRiteActivity>::weak_ptr(
    (std::weak_ptr<LanternRiteActivity> *const)&v10,
    (const std::weak_ptr<LanternRiteActivity> *)(v1 + 64));
  PlayerEventComp::tryRegisterObserver<LanternRiteActivity,LeaveSceneEvent>(
    v9,
    (std::weak_ptr<LanternRiteActivity> *)&v10,
    (void (*)(LanternRiteActivity *, const LeaveSceneEvent *))LanternRiteActivity::onLeaveSceneEvent,
    0LL);
  std::weak_ptr<LanternRiteActivity>::~weak_ptr((std::weak_ptr<LanternRiteActivity> *const)&v10);
  std::weak_ptr<LanternRiteActivity>::~weak_ptr((std::weak_ptr<LanternRiteActivity> *const)(v1 + 64));
  std::shared_ptr<LanternRiteActivity>::~shared_ptr((std::shared_ptr<LanternRiteActivity> *const)(v1 + 32));
  if ( v11 == (char *)v1 )
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

// Line 1021: range 0000000015FEF4C0-0000000015FEF5C4
void __cdecl LanternRiteActivity::unregisterEventObserver(LanternRiteActivity *const this)
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

// Line 1033: range 0000000015FEF5C6-0000000015FEF884
bool __cdecl LanternRiteActivity::checkCondIsMeet(LanternRiteActivity *const this, const data::NewActivityCond *cond)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  bool result; // al
  uint32_t *v7; // rdx
  LanternSalvageStage *stage_ptr; // [rsp+18h] [rbp-88h]
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
  *(_QWORD *)(v2 + 8) = "1 32 1 16 has_changed:1050";
  *(_QWORD *)(v2 + 16) = LanternRiteActivity::checkCondIsMeet;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  if ( *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( cond->type == NEW_ACTIVITY_COND_FINISH_SALVAGE_STAGE )
  {
    if ( std::vector<int>::size(&cond->param) )
    {
      v7 = (uint32_t *)std::vector<int>::operator[](&cond->param, 0LL);
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      stage_ptr = LanternRiteActivity::findSalvageStage(this, *v7);
      if ( stage_ptr )
      {
        *(_BYTE *)(v2 + 32) = 0;
        LanternRiteActivity::updateSalvageChallengeUnlock(this, stage_ptr, (bool *)(v2 + 32));
        if ( *(_BYTE *)(((unsigned __int64)&stage_ptr->is_finished >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)stage_ptr + 5) & 7) >= *(_BYTE *)(((unsigned __int64)&stage_ptr->is_finished >> 3)
                                                                + 0x7FFF8000) )
        {
          __asan_report_load1(&stage_ptr->is_finished);
        }
        result = stage_ptr->is_finished;
      }
      else
      {
        result = 0;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v9,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/lantern_rite_activity.cpp",
        "checkCondIsMeet",
        1040);
      v5 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
             &v9,
             (const char (*)[36])"cond param size error, activity id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->activity_id_);
      common::milog::MiLogStream::~MiLogStream(&v9);
      result = 0;
    }
  }
  else
  {
    result = BaseActivity::checkCondIsMeet(this, cond);
  }
  if ( v10 == (char *)v2 )
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

// Line 1062: range 0000000015FEF886-0000000015FF0AF1
void __cdecl LanternRiteActivity::onGroupBundleFinishEvent(
        LanternRiteActivity *const this,
        const GroupBundleFinishEvent *event)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // al
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  ActivitySeaLampExcelConfigMgr *p_activity_sea_lamp_config_mgr; // rcx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  std::_Rb_tree_iterator<std::pair<const data::SalvagePlayType,std::vector<std::shared_ptr<BaseSalvageChallenge>> > >::pointer v15; // rax
  common::milog::MiLogStream *v16; // rax
  std::_Rb_tree_iterator<std::pair<const data::SalvagePlayType,std::vector<std::shared_ptr<BaseSalvageChallenge>> > >::pointer v17; // rax
  const std::shared_ptr<BaseSalvageChallenge> *v18; // rax
  common::milog::MiLogStream *v19; // rax
  std::__shared_ptr_access<SalvageBundleChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  std::__shared_ptr_access<SalvageBundleChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  std::_Rb_tree_iterator<std::pair<const data::SalvagePlayType,std::vector<std::shared_ptr<BaseSalvageChallenge>> > >::pointer v28; // rax
  common::milog::MiLogStream *v29; // rax
  std::_Rb_tree_iterator<std::pair<const data::SalvagePlayType,std::vector<std::shared_ptr<BaseSalvageChallenge>> > >::pointer v30; // rax
  const std::shared_ptr<BaseSalvageChallenge> *v31; // rax
  common::milog::MiLogStream *v32; // rax
  std::__shared_ptr_access<SalvageBundleChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rax
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  std::__shared_ptr_access<SalvageBundleChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  bool v43; // [rsp+8h] [rbp-188h]
  int v44; // [rsp+8h] [rbp-188h]
  common::milog::MiLogStream *v45; // [rsp+8h] [rbp-188h]
  int v46; // [rsp+8h] [rbp-188h]
  common::milog::MiLogStream *v47; // [rsp+8h] [rbp-188h]
  std::allocator<data::SalvagePlayType> __a; // [rsp+2Bh] [rbp-165h] BYREF
  _DWORD __l[5]; // [rsp+2Ch] [rbp-164h] BYREF
  std::tuple_element<1,std::pair<unsigned int,data::SalvagePlayType> >::type *play_type; // [rsp+40h] [rbp-150h]
  LanternSalvageStage *stage_ptr; // [rsp+48h] [rbp-148h]
  const data::SalvageStageDataExcelConfig *stage_config_ptr; // [rsp+50h] [rbp-140h]
  std::pair<unsigned int,data::SalvagePlayType> __in; // [rsp+58h] [rbp-138h] BYREF
  std::vector<data::SalvagePlayType> salvage_type_vec; // [rsp+60h] [rbp-130h] BYREF
  common::milog::MiLogStream v55; // [rsp+80h] [rbp-110h] BYREF
  char v56[240]; // [rsp+A0h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v56;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 1 19 is_has_changed:1151 48 4 14 bundle_id:1068 64 8 14 type_iter:1093 96 8 20 stage_type_p"
                        "air:1069 128 16 23 base_challenge_ptr:1130 160 16 25 bundle_challenge_ptr:1131";
  *(_QWORD *)(v2 + 16) = LanternRiteActivity::onGroupBundleFinishEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556927;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -219021312;
  v4[536862725] = -202178560;
  if ( !BaseActivity::isOpening(this, 0) || BaseActivity::isSettled(this) )
    goto LABEL_9;
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  if ( this->is_content_closed_ )
LABEL_9:
    v5 = 1;
  else
    v5 = 0;
  if ( v5 )
  {
    common::milog::MiLogStream::create(
      &v55,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/lantern_rite_activity.cpp",
      "onGroupBundleFinishEvent",
      1065);
    common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
      &v55,
      (const char (*)[38])"[LanternRite] activity is not opening");
    common::milog::MiLogStream::~MiLogStream(&v55);
    goto LABEL_63;
  }
  if ( *(_BYTE *)(((unsigned __int64)&event->bundle_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->bundle_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  *(_DWORD *)(v2 + 48) = event->bundle_id;
  *(_QWORD *)(v2 + 96) = 0LL;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 160));
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
  v43 = ActivitySeaLampExcelConfigMgr::findSalvageStagePlayTypeByBundleId(
          &v6->design_config.txt_config_mgr.activity_sea_lamp_config_mgr,
          *(_DWORD *)(v2 + 48),
          (std::pair<unsigned int,data::SalvagePlayType> *)(v2 + 96)) != 0;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 160));
  if ( v43 )
  {
    common::milog::MiLogStream::create(
      &v55,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/lantern_rite_activity.cpp",
      "onGroupBundleFinishEvent",
      1072);
    v7 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
           &v55,
           (const char (*)[53])"[LanternRite] group bundle not in config, bundle_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v55);
    goto LABEL_63;
  }
  __in = *(std::pair<unsigned int,data::SalvagePlayType> *)(v2 + 96);
  *(_QWORD *)&__l[3] = std::get<0ul,unsigned int,data::SalvagePlayType>(&__in);
  play_type = std::get<1ul,unsigned int,data::SalvagePlayType>(&__in);
  if ( *(_BYTE *)((*(_QWORD *)&__l[3] >> 3) + 0x7FFF8000LL) != 0
    && (char)((__l[3] & 7) + 3) >= *(_BYTE *)((*(_QWORD *)&__l[3] >> 3) + 0x7FFF8000LL) )
  {
    __asan_report_load4();
  }
  stage_ptr = LanternRiteActivity::findSalvageStage(this, **(_DWORD **)&__l[3]);
  if ( !stage_ptr )
  {
    common::milog::MiLogStream::create(
      &v55,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/lantern_rite_activity.cpp",
      "onGroupBundleFinishEvent",
      1079);
    v8 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
           &v55,
           (const char (*)[41])"[LanternRite] stage not found, stage_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, *(const unsigned int **)&__l[3]);
    common::milog::MiLogStream::~MiLogStream(&v55);
    goto LABEL_63;
  }
  if ( *(_BYTE *)(((unsigned __int64)&stage_ptr->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)stage_ptr + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&stage_ptr->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&stage_ptr->is_open);
  }
  if ( !stage_ptr->is_open )
  {
    common::milog::MiLogStream::create(
      &v55,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/lantern_rite_activity.cpp",
      "onGroupBundleFinishEvent",
      1084);
    v9 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
           &v55,
           (const char (*)[40])"[LanternRite] stage not open, stage_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, *(const unsigned int **)&__l[3]);
    common::milog::MiLogStream::~MiLogStream(&v55);
    goto LABEL_63;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 160));
  p_activity_sea_lamp_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160))->design_config.txt_config_mgr.activity_sea_lamp_config_mgr;
  if ( *(_BYTE *)((*(_QWORD *)&__l[3] >> 3) + 0x7FFF8000LL) != 0
    && (char)((__l[3] & 7) + 3) >= *(_BYTE *)((*(_QWORD *)&__l[3] >> 3) + 0x7FFF8000LL) )
  {
    __asan_report_load4();
  }
  stage_config_ptr = data::ActivitySeaLampExcelConfigMgrBase::findSalvageStageDataExcelConfig(
                       p_activity_sea_lamp_config_mgr,
                       **(_DWORD **)&__l[3]);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 160));
  if ( !stage_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v55,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/lantern_rite_activity.cpp",
      "onGroupBundleFinishEvent",
      1090);
    v11 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
            &v55,
            (const char (*)[40])"[LanternRite] stage not open, stage_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, *(const unsigned int **)&__l[3]);
    common::milog::MiLogStream::~MiLogStream(&v55);
    goto LABEL_63;
  }
  *(std::map<data::SalvagePlayType,std::vector<std::shared_ptr<BaseSalvageChallenge>>>::iterator *)(v2 + 64) = std::map<data::SalvagePlayType,std::vector<std::shared_ptr<BaseSalvageChallenge>>>::find(&stage_ptr->stage_challenge_map, play_type);
  *(std::map<data::SalvagePlayType,std::vector<std::shared_ptr<BaseSalvageChallenge>>>::iterator *)&__l[1] = std::map<data::SalvagePlayType,std::vector<std::shared_ptr<BaseSalvageChallenge>>>::end(&stage_ptr->stage_challenge_map);
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<const data::SalvagePlayType,std::vector<std::shared_ptr<BaseSalvageChallenge>> > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_iterator<std::pair<const data::SalvagePlayType,std::vector<std::shared_ptr<BaseSalvageChallenge>> > >::_Self *)&__l[1]) )
  {
    common::milog::MiLogStream::create(
      &v55,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/lantern_rite_activity.cpp",
      "onGroupBundleFinishEvent",
      1096);
    v12 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
            &v55,
            (const char (*)[46])"[LanternRite] play type not found, play_type:");
    v13 = common::milog::MiLogStream::operator<<<data::SalvagePlayType,(data::SalvagePlayType*)0>(v12, play_type);
    v14 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v13, (const char (*)[11])" stage_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, *(const unsigned int **)&__l[3]);
    common::milog::MiLogStream::~MiLogStream(&v55);
    goto LABEL_63;
  }
  if ( *(_BYTE *)(((unsigned __int64)play_type >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)play_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)play_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( *play_type == SALVAGE_PLAY_TYPE_LAND )
  {
    v15 = std::_Rb_tree_iterator<std::pair<data::SalvagePlayType const,std::vector<std::shared_ptr<BaseSalvageChallenge>>>>::operator->((const std::_Rb_tree_iterator<std::pair<const data::SalvagePlayType,std::vector<std::shared_ptr<BaseSalvageChallenge>> > > *const)(v2 + 64));
    if ( std::vector<std::shared_ptr<BaseSalvageChallenge>>::size(&v15->second) != 1 )
    {
      common::milog::MiLogStream::create(
        &v55,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/lantern_rite_activity.cpp",
        "onGroupBundleFinishEvent",
        1105);
      v16 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
              &v55,
              (const char (*)[66])"[LanternRite] land type challenge vec size should be 1, stage_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, *(const unsigned int **)&__l[3]);
      common::milog::MiLogStream::~MiLogStream(&v55);
      goto LABEL_63;
    }
    v17 = std::_Rb_tree_iterator<std::pair<data::SalvagePlayType const,std::vector<std::shared_ptr<BaseSalvageChallenge>>>>::operator->((const std::_Rb_tree_iterator<std::pair<const data::SalvagePlayType,std::vector<std::shared_ptr<BaseSalvageChallenge>> > > *const)(v2 + 64));
    v18 = std::vector<std::shared_ptr<BaseSalvageChallenge>>::operator[](&v17->second, 0LL);
    std::shared_ptr<BaseSalvageChallenge>::shared_ptr((std::shared_ptr<BaseSalvageChallenge> *const)(v2 + 128), v18);
    std::dynamic_pointer_cast<SalvageBundleChallenge,BaseSalvageChallenge>((const std::shared_ptr<BaseSalvageChallenge> *)(v2 + 160));
    if ( std::operator==<SalvageBundleChallenge>(0LL, (const std::shared_ptr<SalvageBundleChallenge> *)(v2 + 160)) )
    {
      common::milog::MiLogStream::create(
        &v55,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/lantern_rite_activity.cpp",
        "onGroupBundleFinishEvent",
        1112);
      v19 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
              &v55,
              (const char (*)[57])"[LanternRite] bundle_challenge_ptr is nullptr, stage_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, *(const unsigned int **)&__l[3]);
      common::milog::MiLogStream::~MiLogStream(&v55);
      v44 = 0;
    }
    else
    {
      v20 = std::__shared_ptr_access<SalvageBundleChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SalvageBundleChallenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
      v21 = std::set<unsigned int>::insert(
              &v20->finish_bundle_set,
              (const std::set<unsigned int>::value_type *)(v2 + 48));
      if ( !v21.second )
      {
        common::milog::MiLogStream::create(
          &v55,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/lantern_rite_activity.cpp",
          "onGroupBundleFinishEvent",
          1117);
        v22 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                &v55,
                (const char (*)[52])"[LanternRite] duplicated finnish bundle, bundle_id:");
        v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v22,
                (const unsigned int *)(v2 + 48));
        v24 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v23, (const char (*)[11])" stage_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, *(const unsigned int **)&__l[3]);
        common::milog::MiLogStream::~MiLogStream(&v55);
        v44 = 0;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v55,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/lantern_rite_activity.cpp",
          "onGroupBundleFinishEvent",
          1120);
        v25 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                &v55,
                (const char (*)[49])"[LanternRite] finish land type bundle, stage_id:");
        v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v25,
                *(const unsigned int **)&__l[3]);
        v45 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                v26,
                (const char (*)[19])" cur_finish_count:");
        v27 = std::__shared_ptr_access<SalvageBundleChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SalvageBundleChallenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
        *(_QWORD *)&__l[1] = std::set<unsigned int>::size(&v27->finish_bundle_set);
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v45, (const unsigned __int64 *)&__l[1]);
        common::milog::MiLogStream::~MiLogStream(&v55);
        v44 = 1;
      }
    }
    std::shared_ptr<SalvageBundleChallenge>::~shared_ptr((std::shared_ptr<SalvageBundleChallenge> *const)(v2 + 160));
    std::shared_ptr<BaseSalvageChallenge>::~shared_ptr((std::shared_ptr<BaseSalvageChallenge> *const)(v2 + 128));
    if ( v44 )
    {
LABEL_53:
      *(_BYTE *)(v2 + 32) = 0;
      if ( LanternRiteActivity::updateSalvageChallengeUnlock(this, stage_ptr, (bool *)(v2 + 32)) )
      {
        common::milog::MiLogStream::create(
          &v55,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/lantern_rite_activity.cpp",
          "onGroupBundleFinishEvent",
          1154);
        v42 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
                &v55,
                (const char (*)[61])"[LanternRite] updateSalvageChallengeUnlock failed, stage_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v42, *(const unsigned int **)&__l[3]);
        common::milog::MiLogStream::~MiLogStream(&v55);
      }
      if ( *(_BYTE *)(v2 + 32) )
      {
        BaseActivity::updateAllConds(this);
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)play_type >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)play_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)play_type >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        __l[0] = *play_type;
        std::allocator<data::SalvagePlayType>::allocator(&__a);
        std::vector<data::SalvagePlayType>::vector(
          &salvage_type_vec,
          (std::initializer_list<data::SalvagePlayType>)__PAIR128__(1LL, __l),
          &__a);
        if ( *(_BYTE *)(((unsigned __int64)stage_ptr >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)stage_ptr >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        LanternRiteActivity::updateSalveBundleTrackingMark(this, stage_ptr->stage_id, &salvage_type_vec);
        std::vector<data::SalvagePlayType>::~vector(&salvage_type_vec);
        std::allocator<data::SalvagePlayType>::~allocator(&__a);
      }
      BaseActivity::notifyClientData(this, 0);
    }
  }
  else
  {
    if ( *play_type != SALVAGE_PLAY_TYPE_SEA )
    {
      common::milog::MiLogStream::create(
        &v55,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/lantern_rite_activity.cpp",
        "onGroupBundleFinishEvent",
        1147);
      v41 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
              &v55,
              (const char (*)[63])"[LanternRite] other type bundle cannot be finished, bundle_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v41, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v55);
      goto LABEL_63;
    }
    v28 = std::_Rb_tree_iterator<std::pair<data::SalvagePlayType const,std::vector<std::shared_ptr<BaseSalvageChallenge>>>>::operator->((const std::_Rb_tree_iterator<std::pair<const data::SalvagePlayType,std::vector<std::shared_ptr<BaseSalvageChallenge>> > > *const)(v2 + 64));
    if ( std::vector<std::shared_ptr<BaseSalvageChallenge>>::size(&v28->second) != 1 )
    {
      common::milog::MiLogStream::create(
        &v55,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/lantern_rite_activity.cpp",
        "onGroupBundleFinishEvent",
        1127);
      v29 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
              &v55,
              (const char (*)[66])"[LanternRite] land type challenge vec size should be 1, stage_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, *(const unsigned int **)&__l[3]);
      common::milog::MiLogStream::~MiLogStream(&v55);
      goto LABEL_63;
    }
    v30 = std::_Rb_tree_iterator<std::pair<data::SalvagePlayType const,std::vector<std::shared_ptr<BaseSalvageChallenge>>>>::operator->((const std::_Rb_tree_iterator<std::pair<const data::SalvagePlayType,std::vector<std::shared_ptr<BaseSalvageChallenge>> > > *const)(v2 + 64));
    v31 = std::vector<std::shared_ptr<BaseSalvageChallenge>>::operator[](&v30->second, 0LL);
    std::shared_ptr<BaseSalvageChallenge>::shared_ptr((std::shared_ptr<BaseSalvageChallenge> *const)(v2 + 128), v31);
    std::dynamic_pointer_cast<SalvageBundleChallenge,BaseSalvageChallenge>((const std::shared_ptr<BaseSalvageChallenge> *)(v2 + 160));
    if ( std::operator==<SalvageBundleChallenge>(0LL, (const std::shared_ptr<SalvageBundleChallenge> *)(v2 + 160)) )
    {
      common::milog::MiLogStream::create(
        &v55,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/lantern_rite_activity.cpp",
        "onGroupBundleFinishEvent",
        1134);
      v32 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
              &v55,
              (const char (*)[57])"[LanternRite] bundle_challenge_ptr is nullptr, stage_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, *(const unsigned int **)&__l[3]);
      common::milog::MiLogStream::~MiLogStream(&v55);
      v46 = 0;
    }
    else
    {
      v33 = std::__shared_ptr_access<SalvageBundleChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SalvageBundleChallenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
      v34 = std::set<unsigned int>::insert(
              &v33->finish_bundle_set,
              (const std::set<unsigned int>::value_type *)(v2 + 48));
      if ( !v34.second )
      {
        common::milog::MiLogStream::create(
          &v55,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/lantern_rite_activity.cpp",
          "onGroupBundleFinishEvent",
          1139);
        v35 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                &v55,
                (const char (*)[52])"[LanternRite] duplicated finnish bundle, bundle_id:");
        v36 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v35,
                (const unsigned int *)(v2 + 48));
        v37 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v36, (const char (*)[11])" stage_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, *(const unsigned int **)&__l[3]);
        common::milog::MiLogStream::~MiLogStream(&v55);
        v46 = 0;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v55,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/lantern_rite_activity.cpp",
          "onGroupBundleFinishEvent",
          1142);
        v38 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                &v55,
                (const char (*)[48])"[LanternRite] finish sea type bundle, stage_id:");
        v39 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v38,
                *(const unsigned int **)&__l[3]);
        v47 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                v39,
                (const char (*)[19])" cur_finish_count:");
        v40 = std::__shared_ptr_access<SalvageBundleChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SalvageBundleChallenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
        *(_QWORD *)&__l[1] = std::set<unsigned int>::size(&v40->finish_bundle_set);
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v47, (const unsigned __int64 *)&__l[1]);
        common::milog::MiLogStream::~MiLogStream(&v55);
        v46 = 1;
      }
    }
    std::shared_ptr<SalvageBundleChallenge>::~shared_ptr((std::shared_ptr<SalvageBundleChallenge> *const)(v2 + 160));
    std::shared_ptr<BaseSalvageChallenge>::~shared_ptr((std::shared_ptr<BaseSalvageChallenge> *const)(v2 + 128));
    if ( v46 )
      goto LABEL_53;
  }
LABEL_63:
  if ( v56 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1168: range 0000000015FF0AF2-0000000015FF1827
int32_t __cdecl LanternRiteActivity::updateSalvageChallengeUnlock(
        LanternRiteActivity *const this,
        LanternSalvageStage *stage,
        bool *is_has_changed)
{
  int32_t v3; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  ActivitySeaLampExcelConfigMgr *p_activity_sea_lamp_config_mgr; // rcx
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v9; // rdx
  common::milog::MiLogStream *v10; // rdx
  const std::shared_ptr<BaseSalvageChallenge> *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  int v13; // r15d
  const unsigned int *M_current; // r15
  std::vector<unsigned int>::const_iterator v15; // rax
  std::__shared_ptr_access<SalvageBundleChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  common::milog::MiLogStream *v17; // rdx
  const std::shared_ptr<BaseSalvageChallenge> *v18; // rax
  common::milog::MiLogStream *v19; // rdx
  int v20; // r15d
  const unsigned int *v21; // r15
  std::vector<unsigned int>::const_iterator v22; // rax
  std::__shared_ptr_access<SalvageBundleChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  const std::shared_ptr<BaseSalvageChallenge> *v24; // rax
  common::milog::MiLogStream *v25; // rax
  std::__shared_ptr_access<BaseSalvageChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rdx
  bool *p_is_unlock; // rax
  int32_t result; // eax
  bool is_all_finished; // [rsp+2Fh] [rbp-181h]
  std::map<data::SalvagePlayType,std::vector<std::shared_ptr<BaseSalvageChallenge>>>::iterator __for_begin_0; // [rsp+30h] [rbp-180h] BYREF
  std::map<data::SalvagePlayType,std::vector<std::shared_ptr<BaseSalvageChallenge>>>::iterator __for_end_0; // [rsp+38h] [rbp-178h] BYREF
  std::map<data::SalvagePlayType,std::vector<std::shared_ptr<BaseSalvageChallenge>>>::iterator __for_begin; // [rsp+40h] [rbp-170h] BYREF
  std::map<data::SalvagePlayType,std::vector<std::shared_ptr<BaseSalvageChallenge>>>::iterator __for_end; // [rsp+48h] [rbp-168h] BYREF
  const data::SalvageStageDataExcelConfig *stage_config_ptr; // [rsp+50h] [rbp-160h]
  std::map<data::SalvagePlayType,std::vector<std::shared_ptr<BaseSalvageChallenge>>> *__for_range; // [rsp+58h] [rbp-158h]
  std::pair<const data::SalvagePlayType,std::vector<std::shared_ptr<BaseSalvageChallenge>> > *__in; // [rsp+60h] [rbp-150h]
  std::tuple_element<0,std::pair<const data::SalvagePlayType,std::vector<std::shared_ptr<BaseSalvageChallenge>> > >::type *play_type; // [rsp+68h] [rbp-148h]
  std::tuple_element<1,std::pair<const data::SalvagePlayType,std::vector<std::shared_ptr<BaseSalvageChallenge>> > >::type *challenge_vec; // [rsp+70h] [rbp-140h]
  std::map<data::SalvagePlayType,std::vector<std::shared_ptr<BaseSalvageChallenge>>> *__for_range_0; // [rsp+78h] [rbp-138h]
  std::pair<const data::SalvagePlayType,std::vector<std::shared_ptr<BaseSalvageChallenge>> > *v41; // [rsp+80h] [rbp-130h]
  std::tuple_element<0,std::pair<const data::SalvagePlayType,std::vector<std::shared_ptr<BaseSalvageChallenge>> > >::type *play_type_0; // [rsp+88h] [rbp-128h]
  std::tuple_element<1,std::pair<const data::SalvagePlayType,std::vector<std::shared_ptr<BaseSalvageChallenge>> > >::type *challenge_vec_0; // [rsp+90h] [rbp-120h]
  std::vector<std::shared_ptr<BaseSalvageChallenge>> *__for_range_1; // [rsp+98h] [rbp-118h]
  common::milog::MiLogStream v45; // [rsp+A0h] [rbp-110h] BYREF
  char v46[240]; // [rsp+C0h] [rbp-F0h] BYREF

  v4 = (unsigned __int64)v46;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 16 23 base_challenge_ptr:1214 80 16 18 challenge_ptr:1243 112 48 22 config_bundle_set:1221";
  *(_QWORD *)(v4 + 16) = LanternRiteActivity::updateSalvageChallengeUnlock;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61937;
  v6[536862722] = 62194;
  v6[536862723] = 62194;
  v6[536862725] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v4 + 80));
  p_activity_sea_lamp_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80))->design_config.txt_config_mgr.activity_sea_lamp_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)stage >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)stage >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  stage_config_ptr = data::ActivitySeaLampExcelConfigMgrBase::findSalvageStageDataExcelConfig(
                       p_activity_sea_lamp_config_mgr,
                       stage->stage_id);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 80));
  if ( stage_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)is_has_changed >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)is_has_changed & 7) >= *(_BYTE *)(((unsigned __int64)is_has_changed >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(is_has_changed);
    }
    *is_has_changed = 0;
    if ( *(_BYTE *)(((unsigned __int64)&stage->is_finished >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)stage + 5) & 7) >= *(_BYTE *)(((unsigned __int64)&stage->is_finished >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&stage->is_finished);
    }
    if ( stage->is_finished )
    {
      common::milog::MiLogStream::create(
        &v45,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/lantern_rite_activity.cpp",
        "updateSalvageChallengeUnlock",
        1178);
      v9 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
             &v45,
             (const char (*)[43])"[LanternRite] stage is finished, stage_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &stage->stage_id);
      common::milog::MiLogStream::~MiLogStream(&v45);
      v3 = 0;
    }
    else
    {
      is_all_finished = 1;
      __for_range = &stage->stage_challenge_map;
      __for_begin._M_node = std::map<data::SalvagePlayType,std::vector<std::shared_ptr<BaseSalvageChallenge>>>::begin(&stage->stage_challenge_map)._M_node;
      __for_end._M_node = std::map<data::SalvagePlayType,std::vector<std::shared_ptr<BaseSalvageChallenge>>>::end(&stage->stage_challenge_map)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        __in = std::_Rb_tree_iterator<std::pair<data::SalvagePlayType const,std::vector<std::shared_ptr<BaseSalvageChallenge>>>>::operator*(&__for_begin);
        play_type = std::get<0ul,data::SalvagePlayType const,std::vector<std::shared_ptr<BaseSalvageChallenge>>>(__in);
        challenge_vec = std::get<1ul,data::SalvagePlayType const,std::vector<std::shared_ptr<BaseSalvageChallenge>>>(__in);
        if ( *(_BYTE *)(((unsigned __int64)play_type >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)play_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)play_type >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( *play_type == SALVAGE_PLAY_TYPE_LAND )
        {
          if ( std::vector<std::shared_ptr<BaseSalvageChallenge>>::size(challenge_vec) != 1 )
          {
            common::milog::MiLogStream::create(
              &v45,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/activity/lantern_rite_activity.cpp",
              "updateSalvageChallengeUnlock",
              1190);
            v10 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
                    &v45,
                    (const char (*)[66])"[LanternRite] land type challenge vec size should be 1, stage_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &stage->stage_id);
            common::milog::MiLogStream::~MiLogStream(&v45);
            v3 = -1;
            goto LABEL_61;
          }
          v11 = std::vector<std::shared_ptr<BaseSalvageChallenge>>::operator[](challenge_vec, 0LL);
          std::shared_ptr<BaseSalvageChallenge>::shared_ptr(
            (std::shared_ptr<BaseSalvageChallenge> *const)(v4 + 48),
            v11);
          std::dynamic_pointer_cast<SalvageBundleChallenge,BaseSalvageChallenge>((const std::shared_ptr<BaseSalvageChallenge> *)(v4 + 80));
          if ( std::operator==<SalvageBundleChallenge>(0LL, (const std::shared_ptr<SalvageBundleChallenge> *)(v4 + 80)) )
          {
            common::milog::MiLogStream::create(
              &v45,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/lantern_rite_activity.cpp",
              "updateSalvageChallengeUnlock",
              1197);
            v12 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
                    &v45,
                    (const char (*)[57])"[LanternRite] bundle_challenge_ptr is nullptr, stage_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &stage->stage_id);
            common::milog::MiLogStream::~MiLogStream(&v45);
            v3 = -1;
            v13 = 0;
          }
          else
          {
            M_current = std::vector<unsigned int>::end(&stage_config_ptr->land_group_link_list)._M_current;
            v15._M_current = std::vector<unsigned int>::begin(&stage_config_ptr->land_group_link_list)._M_current;
            std::set<unsigned int>::set<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>>(
              (std::set<unsigned int> *const)(v4 + 112),
              v15,
              (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current);
            v16 = std::__shared_ptr_access<SalvageBundleChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SalvageBundleChallenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
            if ( std::operator!=<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>>(
                   (const std::set<unsigned int> *)(v4 + 112),
                   &v16->finish_bundle_set) )
            {
              is_all_finished = 0;
            }
            std::set<unsigned int>::~set((std::set<unsigned int> *const)(v4 + 112));
            v13 = 1;
          }
          std::shared_ptr<SalvageBundleChallenge>::~shared_ptr((std::shared_ptr<SalvageBundleChallenge> *const)(v4 + 80));
          std::shared_ptr<BaseSalvageChallenge>::~shared_ptr((std::shared_ptr<BaseSalvageChallenge> *const)(v4 + 48));
          if ( !v13 )
            goto LABEL_61;
        }
        else if ( *play_type == SALVAGE_PLAY_TYPE_SEA )
        {
          if ( std::vector<std::shared_ptr<BaseSalvageChallenge>>::size(challenge_vec) != 1 )
          {
            common::milog::MiLogStream::create(
              &v45,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/activity/lantern_rite_activity.cpp",
              "updateSalvageChallengeUnlock",
              1211);
            v17 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
                    &v45,
                    (const char (*)[66])"[LanternRite] land type challenge vec size should be 1, stage_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &stage->stage_id);
            common::milog::MiLogStream::~MiLogStream(&v45);
            v3 = -1;
            goto LABEL_61;
          }
          v18 = std::vector<std::shared_ptr<BaseSalvageChallenge>>::operator[](challenge_vec, 0LL);
          std::shared_ptr<BaseSalvageChallenge>::shared_ptr(
            (std::shared_ptr<BaseSalvageChallenge> *const)(v4 + 48),
            v18);
          std::dynamic_pointer_cast<SalvageBundleChallenge,BaseSalvageChallenge>((const std::shared_ptr<BaseSalvageChallenge> *)(v4 + 80));
          if ( std::operator==<SalvageBundleChallenge>(0LL, (const std::shared_ptr<SalvageBundleChallenge> *)(v4 + 80)) )
          {
            common::milog::MiLogStream::create(
              &v45,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/lantern_rite_activity.cpp",
              "updateSalvageChallengeUnlock",
              1218);
            v19 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
                    &v45,
                    (const char (*)[57])"[LanternRite] bundle_challenge_ptr is nullptr, stage_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &stage->stage_id);
            common::milog::MiLogStream::~MiLogStream(&v45);
            v3 = -1;
            v20 = 0;
          }
          else
          {
            v21 = std::vector<unsigned int>::end(&stage_config_ptr->sea_group_link_list)._M_current;
            v22._M_current = std::vector<unsigned int>::begin(&stage_config_ptr->sea_group_link_list)._M_current;
            std::set<unsigned int>::set<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>>(
              (std::set<unsigned int> *const)(v4 + 112),
              v22,
              (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)v21);
            v23 = std::__shared_ptr_access<SalvageBundleChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SalvageBundleChallenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
            if ( std::operator!=<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>>(
                   (const std::set<unsigned int> *)(v4 + 112),
                   &v23->finish_bundle_set) )
            {
              is_all_finished = 0;
            }
            std::set<unsigned int>::~set((std::set<unsigned int> *const)(v4 + 112));
            v20 = 1;
          }
          std::shared_ptr<SalvageBundleChallenge>::~shared_ptr((std::shared_ptr<SalvageBundleChallenge> *const)(v4 + 80));
          std::shared_ptr<BaseSalvageChallenge>::~shared_ptr((std::shared_ptr<BaseSalvageChallenge> *const)(v4 + 48));
          if ( !v20 )
            goto LABEL_61;
        }
        if ( !is_all_finished )
          break;
        std::_Rb_tree_iterator<std::pair<data::SalvagePlayType const,std::vector<std::shared_ptr<BaseSalvageChallenge>>>>::operator++(&__for_begin);
      }
      if ( *(_BYTE *)(((unsigned __int64)&stage->is_finished >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)stage + 5) & 7) >= *(_BYTE *)(((unsigned __int64)&stage->is_finished >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&stage->is_finished);
      }
      if ( !stage->is_finished && is_all_finished )
      {
        if ( *(_BYTE *)(((unsigned __int64)&stage->is_finished >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)stage + 5) & 7) >= *(_BYTE *)(((unsigned __int64)&stage->is_finished >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&stage->is_finished);
        }
        stage->is_finished = is_all_finished;
        if ( *(_BYTE *)(((unsigned __int64)is_has_changed >> 3) + 0x7FFF8000) != 0
          && ((unsigned __int8)is_has_changed & 7) >= *(_BYTE *)(((unsigned __int64)is_has_changed >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(is_has_changed);
        }
        *is_has_changed = 1;
        __for_range_0 = &stage->stage_challenge_map;
        __for_begin_0._M_node = std::map<data::SalvagePlayType,std::vector<std::shared_ptr<BaseSalvageChallenge>>>::begin(&stage->stage_challenge_map)._M_node;
        __for_end_0._M_node = std::map<data::SalvagePlayType,std::vector<std::shared_ptr<BaseSalvageChallenge>>>::end(__for_range_0)._M_node;
        while ( std::operator!=(&__for_begin_0, &__for_end_0) )
        {
          v41 = std::_Rb_tree_iterator<std::pair<data::SalvagePlayType const,std::vector<std::shared_ptr<BaseSalvageChallenge>>>>::operator*(&__for_begin_0);
          play_type_0 = std::get<0ul,data::SalvagePlayType const,std::vector<std::shared_ptr<BaseSalvageChallenge>>>(v41);
          challenge_vec_0 = std::get<1ul,data::SalvagePlayType const,std::vector<std::shared_ptr<BaseSalvageChallenge>>>(v41);
          __for_range_1 = challenge_vec_0;
          __for_begin._M_node = (std::_Rb_tree_iterator<std::pair<const data::SalvagePlayType,std::vector<std::shared_ptr<BaseSalvageChallenge>> > >::_Base_ptr)std::vector<std::shared_ptr<BaseSalvageChallenge>>::begin(challenge_vec_0)._M_current;
          __for_end._M_node = (std::_Rb_tree_iterator<std::pair<const data::SalvagePlayType,std::vector<std::shared_ptr<BaseSalvageChallenge>> > >::_Base_ptr)std::vector<std::shared_ptr<BaseSalvageChallenge>>::end(__for_range_1)._M_current;
          while ( __gnu_cxx::operator!=<std::shared_ptr<BaseSalvageChallenge> *,std::vector<std::shared_ptr<BaseSalvageChallenge>>>(
                    (const __gnu_cxx::__normal_iterator<std::shared_ptr<BaseSalvageChallenge>*,std::vector<std::shared_ptr<BaseSalvageChallenge>> > *)&__for_begin,
                    (const __gnu_cxx::__normal_iterator<std::shared_ptr<BaseSalvageChallenge>*,std::vector<std::shared_ptr<BaseSalvageChallenge>> > *)&__for_end) )
          {
            v24 = __gnu_cxx::__normal_iterator<std::shared_ptr<BaseSalvageChallenge> *,std::vector<std::shared_ptr<BaseSalvageChallenge>>>::operator*((const __gnu_cxx::__normal_iterator<std::shared_ptr<BaseSalvageChallenge>*,std::vector<std::shared_ptr<BaseSalvageChallenge>> > *const)&__for_begin);
            std::shared_ptr<BaseSalvageChallenge>::shared_ptr(
              (std::shared_ptr<BaseSalvageChallenge> *const)(v4 + 80),
              v24);
            if ( std::operator==<BaseSalvageChallenge>(0LL, (const std::shared_ptr<BaseSalvageChallenge> *)(v4 + 80)) )
            {
              common::milog::MiLogStream::create(
                &v45,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/lantern_rite_activity.cpp",
                "updateSalvageChallengeUnlock",
                1247);
              v25 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                      &v45,
                      (const char (*)[52])"[LanternRite] challenge type is nullptr, play_type:");
              common::milog::MiLogStream::operator<<<data::SalvagePlayType,(data::SalvagePlayType*)0>(v25, play_type_0);
              common::milog::MiLogStream::~MiLogStream(&v45);
            }
            else
            {
              v26 = std::__shared_ptr_access<BaseSalvageChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseSalvageChallenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
              p_is_unlock = &v26->is_unlock;
              if ( *(_BYTE *)(((unsigned __int64)p_is_unlock >> 3) + 0x7FFF8000) != 0
                && ((unsigned __int8)p_is_unlock & 7) >= *(_BYTE *)(((unsigned __int64)p_is_unlock >> 3) + 0x7FFF8000) )
              {
                __asan_report_store1(p_is_unlock);
              }
              v26->is_unlock = 1;
            }
            std::shared_ptr<BaseSalvageChallenge>::~shared_ptr((std::shared_ptr<BaseSalvageChallenge> *const)(v4 + 80));
            __gnu_cxx::__normal_iterator<std::shared_ptr<BaseSalvageChallenge> *,std::vector<std::shared_ptr<BaseSalvageChallenge>>>::operator++((__gnu_cxx::__normal_iterator<std::shared_ptr<BaseSalvageChallenge>*,std::vector<std::shared_ptr<BaseSalvageChallenge>> > *const)&__for_begin);
          }
          std::_Rb_tree_iterator<std::pair<data::SalvagePlayType const,std::vector<std::shared_ptr<BaseSalvageChallenge>>>>::operator++(&__for_begin_0);
        }
        LanternRiteActivity::clearSalvageBundleMark(this);
        LanternRiteActivity::tryRegisterSalvageStageBundle(this, stage);
      }
      v3 = 0;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v45,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/lantern_rite_activity.cpp",
      "updateSalvageChallengeUnlock",
      1172);
    v8 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
           &v45,
           (const char (*)[40])"[LanternRite] stage not open, stage_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &stage->stage_id);
    common::milog::MiLogStream::~MiLogStream(&v45);
    v3 = -1;
  }
LABEL_61:
  result = v3;
  if ( v46 == (char *)v4 )
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

// Line 1263: range 0000000015FF1828-0000000015FF1D1B
void __cdecl LanternRiteActivity::recycleVehicle(
        LanternRiteActivity *const this,
        const PlayerWorldScenePtr *p_world_scene_ptr,
        uint32_t uid)
{
  __m128i v3; // xmm0
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  unsigned __int64 v6; // r13
  common::milog::MiLogStream *v7; // rcx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  uint32_t v10; // eax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  const Vector3 *Position; // rax
  common::milog::MiLogStream *v13; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  common::milog::MiLogStream *v15; // rax
  Scene *v16; // rax
  unsigned int val; // [rsp+2Ch] [rbp-B4h] BYREF
  unsigned int vehicle_gadget_id; // [rsp+30h] [rbp-B0h]
  float distance; // [rsp+34h] [rbp-ACh]
  const data::SalvageOverAllExcelConfig *overall_config_ptr; // [rsp+38h] [rbp-A8h]
  Vector3 pos2; // [rsp+44h] [rbp-9Ch] BYREF
  common::milog::MiLogStream v23; // [rsp+50h] [rbp-90h] BYREF
  char v24[112]; // [rsp+70h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 22 owner_vehicle_ptr:1280";
  *(_QWORD *)(v4 + 16) = LanternRiteActivity::recycleVehicle;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  if ( std::operator==<PlayerWorldScene>(p_world_scene_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/lantern_rite_activity.cpp",
      "recycleVehicle",
      1266);
    v7 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
           &v23,
           (const char (*)[33])"findMainWorldScene fail. player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v7, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v23);
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v4 + 32));
    v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    overall_config_ptr = ActivitySeaLampExcelConfigMgr::findSalvageOverAllConfig(&v8->design_config.txt_config_mgr.activity_sea_lamp_config_mgr);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 32));
    if ( overall_config_ptr )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v4 + 32));
      v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
      vehicle_gadget_id = ActivitySeaLampExcelConfigMgr::getVehicleGadgetId(&v9->design_config.txt_config_mgr.activity_sea_lamp_config_mgr);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 32));
      v10 = (unsigned int)std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_world_scene_ptr);
      Scene::getVehicleByUidAndConfigid((Scene *const)(v4 + 32), v10, uid);
      if ( !std::operator==<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v4 + 32)) )
      {
        Vector3::Vector3(&pos2, &overall_config_ptr->region_center);
        v11 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
        Position = Entity::getPosition((const Entity *const)v11);
        *(float *)v3.m128i_i32 = getPlaneDistance(Position, &pos2);
        distance = COERCE_FLOAT(_mm_cvtsi128_si32(v3));
        if ( *(_BYTE *)(((unsigned __int64)&overall_config_ptr->destory_radius >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)overall_config_ptr + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&overall_config_ptr->destory_radius >> 3)
                                                                            + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( (float)(int)overall_config_ptr->destory_radius >= distance )
        {
          common::milog::MiLogStream::create(
            &v23,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/lantern_rite_activity.cpp",
            "recycleVehicle",
            1290);
          v13 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                  &v23,
                  (const char (*)[23])"[LanternRite] vehicle:");
          v14 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
          val = Entity::getEntityId((const Entity *const)v14);
          v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
          common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v15, (const char (*)[9])" destory");
          common::milog::MiLogStream::~MiLogStream(&v23);
          v16 = (Scene *)std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_world_scene_ptr);
          Scene::clearVehicleByUidAndConfigid(v16, uid, vehicle_gadget_id, CHANGE_HP_ATTACK_BY_RECYCLE);
        }
      }
      std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v4 + 32));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/lantern_rite_activity.cpp",
        "recycleVehicle",
        1273);
      common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
        &v23,
        (const char (*)[39])"[LanternRite] overall config not found");
      common::milog::MiLogStream::~MiLogStream(&v23);
    }
  }
  if ( v24 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1297: range 0000000015FF1DE4-0000000015FF215E
void __cdecl LanternRiteActivity::executeRecycleVehicle(LanternRiteActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  common::milog::MiLogStream *v4; // rcx
  Scene *v5; // r14
  uint32_t Uid; // r14d
  std::shared_ptr<PlayerWorldScene> p_world_scene_ptr; // [rsp+10h] [rbp-C0h] BYREF
  LanternRiteActivity::executeRecycleVehicle::<lambda(Player&)> v8; // [rsp+20h] [rbp-B0h] BYREF
  common::milog::MiLogStream v9; // [rsp+40h] [rbp-90h] BYREF
  char v10[112]; // [rsp+60h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 20 world_scene_ptr:1298";
  *(_QWORD *)(v1 + 16) = LanternRiteActivity::executeRecycleVehicle;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::findMainWorldScene((const PlayerSceneComp *const)(v1 + 32));
  if ( std::operator==<PlayerWorldScene>((const std::shared_ptr<PlayerWorldScene> *)(v1 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/lantern_rite_activity.cpp",
      "executeRecycleVehicle",
      1301);
    v4 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
           &v9,
           (const char (*)[33])"findMainWorldScene fail. player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v4, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v9);
  }
  else
  {
    v5 = (Scene *)std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    std::shared_ptr<PlayerWorldScene>::shared_ptr(
      &v8.__world_scene_ptr,
      (const std::shared_ptr<PlayerWorldScene> *)(v1 + 32));
    v8.__this = this;
    std::function<ForeachPolicy ()(Player &)>::function<LanternRiteActivity::executeRecycleVehicle(void)::{lambda(Player &)#1},void,void>(
      (std::function<ForeachPolicy(Player&)> *const)&v9,
      &v8);
    Scene::foreachPlayer(v5, (std::function<ForeachPolicy(Player&)> *)&v9);
    std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v9);
    LanternRiteActivity::executeRecycleVehicle(void)::{lambda(Player &)#1}::~Player(&v8);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Uid = Player::getUid(this->player_);
    std::shared_ptr<PlayerWorldScene>::shared_ptr(
      &p_world_scene_ptr,
      (const std::shared_ptr<PlayerWorldScene> *)(v1 + 32));
    LanternRiteActivity::recycleVehicle(this, &p_world_scene_ptr, Uid);
    std::shared_ptr<PlayerWorldScene>::~shared_ptr(&p_world_scene_ptr);
    if ( common::tools::MiTimer::isActive(&this->vehicle_timer_) )
      common::tools::MiTimer::cancel(&this->vehicle_timer_);
  }
  std::shared_ptr<PlayerWorldScene>::~shared_ptr((std::shared_ptr<PlayerWorldScene> *const)(v1 + 32));
  if ( v10 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1306: range 0000000015FF1D1C-0000000015FF1DC7
ForeachPolicy __cdecl LanternRiteActivity::executeRecycleVehicle(void)::{lambda(Player &)#1}::operator()(
        const LanternRiteActivity::executeRecycleVehicle::<lambda(Player&)> *const __closure,
        Player *player)
{
  LanternRiteActivity *this; // rbx
  uint32_t Uid; // r12d
  std::shared_ptr<PlayerWorldScene> v5; // [rsp+10h] [rbp-20h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  this = __closure->__this;
  Uid = Player::getUid(player);
  std::shared_ptr<PlayerWorldScene>::shared_ptr(&v5, &__closure->__world_scene_ptr);
  LanternRiteActivity::recycleVehicle(this, &v5, Uid);
  std::shared_ptr<PlayerWorldScene>::~shared_ptr(&v5);
  return 0;
};

// Line 1306: range 000000001603E36C-000000001603E3EB
void __cdecl LanternRiteActivity::executeRecycleVehicle(void)::{lambda(Player &)#1}::Player(
        LanternRiteActivity::executeRecycleVehicle::<lambda(Player&)> *const this,
        LanternRiteActivity::executeRecycleVehicle::<lambda(Player&)> *a2)
{
  LanternRiteActivity *v2; // rdx

  std::shared_ptr<PlayerWorldScene>::shared_ptr(&this->__world_scene_ptr, &a2->__world_scene_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&a2->__this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = a2->__this;
  if ( *(_BYTE *)(((unsigned __int64)&this->__this >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->__this);
  this->__this = v2;
};

// Line 1306: range 000000001603E4B6-000000001603E535
void __cdecl LanternRiteActivity::executeRecycleVehicle(void)::{lambda(Player &)#1}::Player(
        LanternRiteActivity::executeRecycleVehicle::<lambda(Player&)> *const this,
        const LanternRiteActivity::executeRecycleVehicle::<lambda(Player&)> *a2)
{
  LanternRiteActivity *v2; // rdx

  std::shared_ptr<PlayerWorldScene>::shared_ptr(&this->__world_scene_ptr, &a2->__world_scene_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&a2->__this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = a2->__this;
  if ( *(_BYTE *)(((unsigned __int64)&this->__this >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->__this);
  this->__this = v2;
};

// Line 1306: range 0000000015FF1DC8-0000000015FF1DE2
void __cdecl LanternRiteActivity::executeRecycleVehicle(void)::{lambda(Player &)#1}::~Player(
        LanternRiteActivity::executeRecycleVehicle::<lambda(Player&)> *const this)
{
  std::shared_ptr<PlayerWorldScene>::~shared_ptr(&this->__world_scene_ptr);
};

// Line 1322: range 0000000015FF2160-0000000015FF2186
void __cdecl LanternRiteActivity::onSettle(LanternRiteActivity *const this)
{
  LanternRiteActivity::unregisterEventObserver(this);
  LanternRiteActivity::executeRecycleVehicle(this);
};

// Line 1329: range 0000000015FF2188-0000000015FF256E
__int64 __fastcall LanternRiteActivity::checkEnterDungeon(const LanternRiteActivity *const this, uint32_t dungeon_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // al
  __int64 result; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  const data::LanV2OverAllDataExcelConfig *overall_config_ptr; // [rsp+18h] [rbp-B8h]
  std::shared_ptr<Config> v12; // [rsp+20h] [rbp-B0h] BYREF
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-A0h] BYREF
  char v14[128]; // [rsp+50h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 22 config_dungeon_id:1344 64 4 15 dungeon_id:1328";
  *(_QWORD *)(v2 + 16) = LanternRiteActivity::checkEnterDungeon;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  *(_DWORD *)(v2 + 64) = dungeon_id;
  if ( !BaseActivity::isOpening(this, 0) || BaseActivity::isSettled(this) )
    goto LABEL_9;
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  if ( this->is_content_closed_ )
LABEL_9:
    v5 = 1;
  else
    v5 = 0;
  if ( v5 )
  {
    result = 860LL;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v12);
    v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v12);
    overall_config_ptr = ActivitySeaLampExcelConfigMgr::getLanternRiteOverallConfig(&v7->design_config.txt_config_mgr.activity_sea_lamp_config_mgr);
    std::shared_ptr<Config>::~shared_ptr(&v12);
    if ( overall_config_ptr )
    {
      if ( *(char *)(((unsigned __int64)&this->is_mini_eldritch_dungeon_open_ >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&this->is_mini_eldritch_dungeon_open_);
      if ( !this->is_mini_eldritch_dungeon_open_ )
      {
        result = 10098LL;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&overall_config_ptr->boss_dungeon_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&overall_config_ptr->boss_dungeon_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v2 + 48) = overall_config_ptr->boss_dungeon_id;
        if ( *(_DWORD *)(v2 + 48) && *(_DWORD *)(v2 + 64) == *(_DWORD *)(v2 + 48) )
        {
          result = 0LL;
        }
        else
        {
          common::milog::MiLogStream::create(
            &v13,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/lantern_rite_activity.cpp",
            "checkEnterDungeon",
            1347);
          v8 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                 &v13,
                 (const char (*)[34])"[LanternRite] invalid dungeon_id:");
          v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                 v8,
                 (const unsigned int *)(v2 + 64));
          v10 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                  v9,
                  (const char (*)[21])", config_dungeon_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 48));
          common::milog::MiLogStream::~MiLogStream(&v13);
          result = 0xFFFFFFFFLL;
        }
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/lantern_rite_activity.cpp",
        "checkEnterDungeon",
        1337);
      common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
        &v13,
        (const char (*)[39])"[LanternRite] overall config not found");
      common::milog::MiLogStream::~MiLogStream(&v13);
      result = 0xFFFFFFFFLL;
    }
  }
  if ( v14 == (char *)v2 )
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

// Line 1355: range 0000000015FF2570-0000000015FF2D2D
__int64 __fastcall LanternRiteActivity::tryRecordGalleryScore(
        LanternRiteActivity *const this,
        data::SalvagePlayType play_type,
        uint32_t gallery_id,
        uint32_t score)
{
  unsigned int v4; // r15d
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  int v15; // r14d
  std::__shared_ptr_access<SalvageScoreChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  std::__shared_ptr_access<SalvageScoreChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rdx
  std::__shared_ptr_access<SalvageScoreChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rdx
  uint32_t *p_max_score; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  __int64 result; // rax
  std::vector<std::shared_ptr<BaseSalvageChallenge>>::iterator __for_begin; // [rsp+20h] [rbp-120h] BYREF
  std::vector<std::shared_ptr<BaseSalvageChallenge>>::iterator __for_end; // [rsp+28h] [rbp-118h] BYREF
  LanternSalvageStage *lantern_salvage_stage; // [rsp+30h] [rbp-110h]
  std::vector<std::shared_ptr<BaseSalvageChallenge>> *challenge_ptr_vec; // [rsp+38h] [rbp-108h]
  std::vector<std::shared_ptr<BaseSalvageChallenge>> *__for_range; // [rsp+40h] [rbp-100h]
  std::shared_ptr<BaseSalvageChallenge> *challenge_ptr; // [rsp+48h] [rbp-F8h]
  common::milog::MiLogStream v34; // [rsp+50h] [rbp-F0h] BYREF
  char v35[208]; // [rsp+70h] [rbp-D0h] BYREF

  v5 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(160LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "6 32 4 17 challenge_id:1356 48 4 13 stage_id:1357 64 4 14 play_type:1354 80 4 15 gallery_id:1354"
                        " 96 8 14 type_iter:1364 128 16 24 score_challenge_ptr:1373";
  *(_QWORD *)(v5 + 16) = LanternRiteActivity::tryRecordGalleryScore;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556924;
  v7[536862722] = -234556924;
  v7[536862723] = -218959360;
  v7[536862724] = -202178560;
  *(_DWORD *)(v5 + 64) = play_type;
  *(_DWORD *)(v5 + 80) = gallery_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v5 + 128));
  v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 128));
  *(_DWORD *)(v5 + 32) = ActivitySeaLampExcelConfigMgr::findChallengeIDByGalleryId(
                           &v8->design_config.txt_config_mgr.activity_sea_lamp_config_mgr,
                           *(_DWORD *)(v5 + 80));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v5 + 128));
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v5 + 128));
  v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 128));
  *(_DWORD *)(v5 + 48) = ActivitySeaLampExcelConfigMgr::findStageIDByChallengeId(
                           &v9->design_config.txt_config_mgr.activity_sea_lamp_config_mgr,
                           *(_DWORD *)(v5 + 32));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v5 + 128));
  lantern_salvage_stage = LanternRiteActivity::findSalvageStage(this, *(_DWORD *)(v5 + 48));
  if ( !lantern_salvage_stage )
    goto LABEL_8;
  if ( *(_BYTE *)(((unsigned __int64)&lantern_salvage_stage->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)lantern_salvage_stage + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&lantern_salvage_stage->is_open >> 3)
                                                                      + 0x7FFF8000) )
  {
    __asan_report_load1(&lantern_salvage_stage->is_open);
  }
  if ( lantern_salvage_stage->is_open )
  {
    *(std::map<data::SalvagePlayType,std::vector<std::shared_ptr<BaseSalvageChallenge>>>::iterator *)(v5 + 96) = std::map<data::SalvagePlayType,std::vector<std::shared_ptr<BaseSalvageChallenge>>>::find(&lantern_salvage_stage->stage_challenge_map, (const std::map<data::SalvagePlayType,std::vector<std::shared_ptr<BaseSalvageChallenge>>>::key_type *)(v5 + 64));
    __for_end._M_current = (std::shared_ptr<BaseSalvageChallenge> *)std::map<data::SalvagePlayType,std::vector<std::shared_ptr<BaseSalvageChallenge>>>::end(&lantern_salvage_stage->stage_challenge_map)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const data::SalvagePlayType,std::vector<std::shared_ptr<BaseSalvageChallenge>> > >::_Self *)(v5 + 96),
           (const std::_Rb_tree_iterator<std::pair<const data::SalvagePlayType,std::vector<std::shared_ptr<BaseSalvageChallenge>> > >::_Self *)&__for_end) )
    {
      common::milog::MiLogStream::create(
        &v34,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/lantern_rite_activity.cpp",
        "tryRecordGalleryScore",
        1367);
      v11 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
              &v34,
              (const char (*)[46])"[LanternRite] play type not found, play_type:");
      v12 = common::milog::MiLogStream::operator<<<data::SalvagePlayType,(data::SalvagePlayType*)0>(
              v11,
              (const data::SalvagePlayType *)(v5 + 64));
      v13 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v12, (const char (*)[11])" stage_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v5 + 48));
      common::milog::MiLogStream::~MiLogStream(&v34);
      v4 = 0;
    }
    else
    {
      challenge_ptr_vec = &std::_Rb_tree_iterator<std::pair<data::SalvagePlayType const,std::vector<std::shared_ptr<BaseSalvageChallenge>>>>::operator->((const std::_Rb_tree_iterator<std::pair<const data::SalvagePlayType,std::vector<std::shared_ptr<BaseSalvageChallenge>> > > *const)(v5 + 96))->second;
      __for_range = challenge_ptr_vec;
      __for_begin._M_current = std::vector<std::shared_ptr<BaseSalvageChallenge>>::begin(challenge_ptr_vec)._M_current;
      __for_end._M_current = std::vector<std::shared_ptr<BaseSalvageChallenge>>::end(__for_range)._M_current;
      while ( __gnu_cxx::operator!=<std::shared_ptr<BaseSalvageChallenge> *,std::vector<std::shared_ptr<BaseSalvageChallenge>>>(
                &__for_begin,
                &__for_end) )
      {
        challenge_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<BaseSalvageChallenge> *,std::vector<std::shared_ptr<BaseSalvageChallenge>>>::operator*(&__for_begin);
        std::dynamic_pointer_cast<SalvageScoreChallenge,BaseSalvageChallenge>((const std::shared_ptr<BaseSalvageChallenge> *)(v5 + 128));
        if ( std::operator==<SalvageScoreChallenge>((const std::shared_ptr<SalvageScoreChallenge> *)(v5 + 128), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v34,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/lantern_rite_activity.cpp",
            "tryRecordGalleryScore",
            1376);
          v14 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                  &v34,
                  (const char (*)[47])"[LanternRite] challenge cast failed, stage_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v5 + 48));
          common::milog::MiLogStream::~MiLogStream(&v34);
          v4 = 0;
          v15 = 0;
        }
        else
        {
          v16 = std::__shared_ptr_access<SalvageScoreChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SalvageScoreChallenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 128));
          if ( *(_BYTE *)(((unsigned __int64)&v16->challenge_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&v16->challenge_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          if ( v16->challenge_id == *(_DWORD *)(v5 + 32) )
          {
            v17 = std::__shared_ptr_access<SalvageScoreChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SalvageScoreChallenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 128));
            if ( *(_BYTE *)(((unsigned __int64)&v17->max_score >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)v17 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v17->max_score >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            if ( score <= v17->max_score )
            {
              v4 = 0;
              v15 = 0;
            }
            else
            {
              v18 = std::__shared_ptr_access<SalvageScoreChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SalvageScoreChallenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 128));
              p_max_score = &v18->max_score;
              if ( *(_BYTE *)(((unsigned __int64)p_max_score >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)p_max_score & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_max_score >> 3)
                                                                              + 0x7FFF8000) )
              {
                __asan_report_store4(p_max_score);
              }
              v18->max_score = score;
              BaseActivity::notifyClientData(this, 0);
              v4 = 1;
              v15 = 0;
            }
          }
          else
          {
            v15 = 1;
          }
        }
        std::shared_ptr<SalvageScoreChallenge>::~shared_ptr((std::shared_ptr<SalvageScoreChallenge> *const)(v5 + 128));
        if ( v15 != 1 )
          goto LABEL_29;
        __gnu_cxx::__normal_iterator<std::shared_ptr<BaseSalvageChallenge> *,std::vector<std::shared_ptr<BaseSalvageChallenge>>>::operator++(&__for_begin);
      }
      common::milog::MiLogStream::create(
        &v34,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/lantern_rite_activity.cpp",
        "tryRecordGalleryScore",
        1394);
      v20 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
              &v34,
              (const char (*)[39])"[LanternRite] not found challenge_id: ");
      v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v5 + 32));
      v22 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v21, (const char (*)[13])", stage_id: ");
      v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v5 + 48));
      v24 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v23, (const char (*)[15])", gallery_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)(v5 + 80));
      common::milog::MiLogStream::~MiLogStream(&v34);
      v4 = 0;
    }
  }
  else
  {
LABEL_8:
    common::milog::MiLogStream::create(
      &v34,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/lantern_rite_activity.cpp",
      "tryRecordGalleryScore",
      1361);
    v10 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
            &v34,
            (const char (*)[56])"[LanternRite] stage not found or not opening, stage_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v5 + 48));
    common::milog::MiLogStream::~MiLogStream(&v34);
    v4 = 0;
  }
LABEL_29:
  result = v4;
  if ( v35 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 1399: range 0000000015FF2D2E-0000000015FF3173
void __cdecl LanternRiteActivity::onGallerySalvagePreventSettleEvent(
        LanternRiteActivity *const this,
        const GallerySalvagePreventSettleEvent *event)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  char v5; // al
  uint32_t v6; // ecx
  proto::SalvagePreventGallerySettleInfo *v7; // rax
  common::milog::MiLogStream *v8; // r14
  char is_new_record; // [rsp+17h] [rbp-D9h]
  proto::SalvagePreventSettleInfo *settle_info; // [rsp+18h] [rbp-D8h]
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-D0h] BYREF
  common::milog::MiLogStream v12; // [rsp+40h] [rbp-B0h] BYREF
  char v13[144]; // [rsp+60h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 11 notify:1414";
  *(_QWORD *)(v2 + 16) = LanternRiteActivity::onGallerySalvagePreventSettleEvent;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( !BaseActivity::isOpening(this, 0) || BaseActivity::isSettled(this) )
    goto LABEL_9;
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  if ( this->is_content_closed_ )
LABEL_9:
    v5 = 1;
  else
    v5 = 0;
  if ( v5 )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/lantern_rite_activity.cpp",
      "onGallerySalvagePreventSettleEvent",
      1402);
    common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
      &v12,
      (const char (*)[38])"[LanternRite] activity is not opening");
    common::milog::MiLogStream::~MiLogStream(&v12);
  }
  else
  {
    is_new_record = 0;
    if ( proto::SalvagePreventGallerySettleInfo::reason(&event->gallery_settle_info) == SALVAGE_PREVENT_STOP_SUCCESS )
    {
      v6 = proto::SalvagePreventGallerySettleInfo::final_score(&event->gallery_settle_info);
      if ( *(_BYTE *)(((unsigned __int64)&event->gallery_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&event->gallery_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      is_new_record = LanternRiteActivity::tryRecordGalleryScore(
                        this,
                        SALVAGE_PLAY_TYPE_CARRIAGE,
                        event->gallery_id,
                        v6);
    }
    proto::SalvagePreventSettleNotify::SalvagePreventSettleNotify((proto::SalvagePreventSettleNotify *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&event->gallery_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->gallery_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::SalvagePreventSettleNotify::set_gallery_id(
      (proto::SalvagePreventSettleNotify *const)(v2 + 32),
      event->gallery_id);
    settle_info = proto::SalvagePreventSettleNotify::mutable_settle_info((proto::SalvagePreventSettleNotify *const)(v2 + 32));
    proto::SalvagePreventSettleInfo::set_is_new_record(settle_info, is_new_record);
    v7 = proto::SalvagePreventSettleInfo::mutable_settle_info(settle_info);
    proto::SalvagePreventGallerySettleInfo::operator=(v7, &event->gallery_settle_info);
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/lantern_rite_activity.cpp",
      "onGallerySalvagePreventSettleEvent",
      1419);
    v8 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v11, (const char (*)[18])"[SalvagePrevent] ");
    google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v12, settle_info);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, (const std::string *)&v12);
    std::string::~string(&v12);
    common::milog::MiLogStream::~MiLogStream(&v11);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 32));
    proto::SalvagePreventSettleNotify::~SalvagePreventSettleNotify((proto::SalvagePreventSettleNotify *const)(v2 + 32));
  }
  if ( v13 == (char *)v2 )
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

// Line 1424: range 0000000015FF3174-0000000015FF35B9
void __cdecl LanternRiteActivity::onGallerySalvageEscortSettleEvent(
        LanternRiteActivity *const this,
        const GallerySalvageEscortSettleEvent *event)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  char v5; // al
  uint32_t v6; // ecx
  proto::SalvageEscortGallerySettleInfo *v7; // rax
  common::milog::MiLogStream *v8; // r14
  char is_new_record; // [rsp+17h] [rbp-D9h]
  proto::SalvageEscortSettleInfo *settle_info; // [rsp+18h] [rbp-D8h]
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-D0h] BYREF
  common::milog::MiLogStream v12; // [rsp+40h] [rbp-B0h] BYREF
  char v13[144]; // [rsp+60h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 11 notify:1440";
  *(_QWORD *)(v2 + 16) = LanternRiteActivity::onGallerySalvageEscortSettleEvent;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( !BaseActivity::isOpening(this, 0) || BaseActivity::isSettled(this) )
    goto LABEL_9;
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  if ( this->is_content_closed_ )
LABEL_9:
    v5 = 1;
  else
    v5 = 0;
  if ( v5 )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/lantern_rite_activity.cpp",
      "onGallerySalvageEscortSettleEvent",
      1427);
    common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
      &v12,
      (const char (*)[38])"[LanternRite] activity is not opening");
    common::milog::MiLogStream::~MiLogStream(&v12);
  }
  else
  {
    is_new_record = 0;
    if ( proto::SalvageEscortGallerySettleInfo::reason(&event->gallery_settle_info) == SALVAGE_ESCORT_STOP_SUCCESS )
    {
      v6 = proto::SalvageEscortGallerySettleInfo::time_remain(&event->gallery_settle_info);
      if ( *(_BYTE *)(((unsigned __int64)&event->gallery_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&event->gallery_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      is_new_record = LanternRiteActivity::tryRecordGalleryScore(this, SALVAGE_PLAY_TYPE_ESCORT, event->gallery_id, v6);
    }
    proto::SalvageEscortSettleNotify::SalvageEscortSettleNotify((proto::SalvageEscortSettleNotify *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&event->gallery_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->gallery_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::SalvageEscortSettleNotify::set_gallery_id(
      (proto::SalvageEscortSettleNotify *const)(v2 + 32),
      event->gallery_id);
    settle_info = proto::SalvageEscortSettleNotify::mutable_settle_info((proto::SalvageEscortSettleNotify *const)(v2 + 32));
    proto::SalvageEscortSettleInfo::set_is_new_record(settle_info, is_new_record);
    v7 = proto::SalvageEscortSettleInfo::mutable_settle_info(settle_info);
    proto::SalvageEscortGallerySettleInfo::operator=(v7, &event->gallery_settle_info);
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/lantern_rite_activity.cpp",
      "onGallerySalvageEscortSettleEvent",
      1445);
    v8 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v11, (const char (*)[17])"[SalvageEscort] ");
    google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v12, settle_info);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, (const std::string *)&v12);
    std::string::~string(&v12);
    common::milog::MiLogStream::~MiLogStream(&v11);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 32));
    proto::SalvageEscortSettleNotify::~SalvageEscortSettleNotify((proto::SalvageEscortSettleNotify *const)(v2 + 32));
  }
  if ( v13 == (char *)v2 )
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

// Line 1450: range 0000000015FF3D42-0000000015FF4189
void __cdecl LanternRiteActivity::onVehicleTimer(LanternRiteActivity *const this, uint64_t now_ms)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  char v5; // al
  PlayerSceneComp *SceneComp; // rax
  char v7; // r14
  std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  uint32_t SceneId; // r15d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  bool v11; // r15
  Scene *v12; // r14
  std::shared_ptr<Config> v13; // [rsp+20h] [rbp-100h] BYREF
  LanternRiteActivity::onVehicleTimer::<lambda(Player&)> p___f; // [rsp+30h] [rbp-F0h] BYREF
  std::function<ForeachPolicy(Player&)> p_func; // [rsp+50h] [rbp-D0h] BYREF
  char v16[176]; // [rsp+70h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 22 back_vehicle_func:1479 64 16 14 scene_ptr:1458 96 16 20 world_scene_ptr:1473";
  *(_QWORD *)(v2 + 16) = LanternRiteActivity::onVehicleTimer;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  if ( !BaseActivity::isOpening(this, 0) || BaseActivity::isSettled(this) )
    goto LABEL_9;
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  if ( this->is_content_closed_ )
LABEL_9:
    v5 = 1;
  else
    v5 = 0;
  if ( !v5 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 64));
    if ( !std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 64)) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      SceneComp = Player::getSceneComp(this->player_);
      if ( PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
      {
        std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        toPtr<PlayerWorldScene,Scene>((Scene *)(v2 + 96));
        v7 = 0;
        v11 = 1;
        if ( !std::operator==<PlayerWorldScene>((const std::shared_ptr<PlayerWorldScene> *)(v2 + 96), 0LL) )
        {
          v8 = std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          SceneId = Scene::getSceneId((const Scene *const)v8);
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v13);
          v7 = 1;
          v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13);
          if ( SceneId == TxtConfigMgr::getDefaultWorldMainSceneId(&v10->design_config.txt_config_mgr) )
            v11 = 0;
        }
        if ( v7 )
          std::shared_ptr<Config>::~shared_ptr(&v13);
        if ( !v11 )
        {
          *(_QWORD *)(v2 + 32) = this;
          v12 = (Scene *)std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          p___f.__back_vehicle_func.__this = *(LanternRiteActivity **)(v2 + 32);
          std::shared_ptr<PlayerWorldScene>::shared_ptr(
            &p___f.__world_scene_ptr,
            (const std::shared_ptr<PlayerWorldScene> *)(v2 + 96));
          std::function<ForeachPolicy ()(Player &)>::function<LanternRiteActivity::onVehicleTimer(unsigned long)::{lambda(Player &)#2},void,void>(
            &p_func,
            &p___f);
          Scene::foreachPlayer(v12, &p_func);
          std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
          LanternRiteActivity::onVehicleTimer(unsigned long)::{lambda(Player &)#2}::~Player(&p___f);
        }
        std::shared_ptr<PlayerWorldScene>::~shared_ptr((std::shared_ptr<PlayerWorldScene> *const)(v2 + 96));
      }
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 64));
  }
  if ( v16 == (char *)v2 )
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

// Line 1479: range 0000000015FF35BA-0000000015FF3CAA
// local variable allocation has failed, the output may be wrong!
void __cdecl LanternRiteActivity::onVehicleTimer(unsigned long)::{lambda(std::shared_ptr<PlayerWorldScene>,Player &)#1}::operator()(
        const LanternRiteActivity::onVehicleTimer::<lambda(PlayerWorldScenePtr, Player&)> *const __closure,
        const PlayerWorldScenePtr *p_world_scene_ptr,
        Player *player)
{
  __m128i v3; // xmm0
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  uint32_t GadgetId; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  const Vector3 *Position; // rax
  __m128i v13; // xmm1
  std::unordered_map<unsigned int,unsigned int> *p_uid_last_reminder_time_map; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  const Vector3 *v16; // r14
  __int64 v17; // xmm0_8
  std::unordered_map<unsigned int,unsigned int>::key_type __k; // [rsp+20h] [rbp-110h] BYREF
  float distance; // [rsp+24h] [rbp-10Ch]
  uint32_t now; // [rsp+28h] [rbp-108h]
  float player_distance; // [rsp+2Ch] [rbp-104h]
  const data::SalvageOverAllExcelConfig *overall_config_ptr; // [rsp+30h] [rbp-100h]
  unsigned int *last_reminder_time; // [rsp+38h] [rbp-F8h]
  Vector3 pos2; // [rsp+44h] [rbp-ECh] BYREF
  std::shared_ptr<Config> v26; // [rsp+50h] [rbp-E0h] BYREF
  common::milog::MiLogStream v27; // [rsp+60h] [rbp-D0h] BYREF
  char v28[176]; // [rsp+80h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 32 16 22 owner_vehicle_ptr:1484 64 24 11 notify:1525";
  *(_QWORD *)(v4 + 16) = LanternRiteActivity::onVehicleTimer(unsigned long)::{lambda(std::shared_ptr<PlayerWorldScene>,Player &)#1}::operator();
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -219021312;
  v6[536862722] = -218103808;
  v6[536862723] = -202116109;
  Player::getVehicleComp(player);
  PlayerVehicleComp::getCurVehicle((const PlayerVehicleComp *const)(v4 + 32));
  if ( !std::operator==<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v4 + 32)) )
  {
    v7 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    GadgetId = Gadget::getGadgetId(v7);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v26);
    v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26);
    LOBYTE(GadgetId) = GadgetId != ActivitySeaLampExcelConfigMgr::getVehicleGadgetId(&v9->design_config.txt_config_mgr.activity_sea_lamp_config_mgr);
    std::shared_ptr<Config>::~shared_ptr(&v26);
    if ( !(_BYTE)GadgetId )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v26);
      v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26);
      overall_config_ptr = ActivitySeaLampExcelConfigMgr::findSalvageOverAllConfig(&v10->design_config.txt_config_mgr.activity_sea_lamp_config_mgr);
      std::shared_ptr<Config>::~shared_ptr(&v26);
      if ( overall_config_ptr )
      {
        Vector3::Vector3(&pos2, &overall_config_ptr->region_center);
        v11 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
        Position = Entity::getPosition((const Entity *const)v11);
        *(float *)v3.m128i_i32 = getPlaneDistance(Position, &pos2);
        distance = COERCE_FLOAT(_mm_cvtsi128_si32(v3));
        if ( *(_BYTE *)(((unsigned __int64)&overall_config_ptr->destory_radius >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)overall_config_ptr + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&overall_config_ptr->destory_radius >> 3)
                                                                            + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( distance <= (float)(int)overall_config_ptr->destory_radius )
        {
          if ( *(_BYTE *)(((unsigned __int64)&overall_config_ptr->region_radius >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&overall_config_ptr->region_radius >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          if ( distance <= (float)(int)overall_config_ptr->region_radius )
          {
            if ( *(_BYTE *)(((unsigned __int64)&overall_config_ptr->reminder_radius >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)overall_config_ptr + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&overall_config_ptr->reminder_radius >> 3)
                                                                                + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            v13 = (__m128i)LODWORD(distance);
            if ( distance > (float)(int)overall_config_ptr->reminder_radius )
            {
              now = common::tools::TimeUtils::getNow();
              if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              p_uid_last_reminder_time_map = &__closure->__this->uid_last_reminder_time_map_;
              __k = Player::getUid(player);
              last_reminder_time = std::unordered_map<unsigned int,unsigned int>::operator[](
                                     p_uid_last_reminder_time_map,
                                     &__k);
              if ( *(_BYTE *)(((unsigned __int64)last_reminder_time >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)last_reminder_time & 7) + 3) >= *(_BYTE *)(((unsigned __int64)last_reminder_time >> 3)
                                                                                     + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              if ( now > *last_reminder_time + 6 )
              {
                v15 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
                v16 = Entity::getPosition((const Entity *const)v15);
                *(Vector3 *)((char *)&v13 - 8) = Player::getPosition(player);
                *(_QWORD *)&pos2.x = v17;
                LODWORD(pos2.z) = v13.m128i_i32[0];
                getPlaneDistance(&pos2, v16);
                player_distance = COERCE_FLOAT(_mm_cvtsi128_si32(v13));
                if ( player_distance <= 3.0 )
                {
                  proto::DungeonShowReminderNotify::DungeonShowReminderNotify((proto::DungeonShowReminderNotify *const)(v4 + 64));
                  if ( *(_BYTE *)(((unsigned __int64)&overall_config_ptr->reminder_id >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&overall_config_ptr->reminder_id >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_load4();
                  }
                  proto::DungeonShowReminderNotify::set_reminder_id(
                    (proto::DungeonShowReminderNotify *const)(v4 + 64),
                    overall_config_ptr->reminder_id);
                  Player::sendProto(player, (const google::protobuf::Message *)(v4 + 64));
                  if ( *(_BYTE *)(((unsigned __int64)last_reminder_time >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)last_reminder_time & 7) + 3) >= *(_BYTE *)(((unsigned __int64)last_reminder_time >> 3)
                                                                                         + 0x7FFF8000) )
                  {
                    __asan_report_store4(last_reminder_time);
                  }
                  *last_reminder_time = now;
                  proto::DungeonShowReminderNotify::~DungeonShowReminderNotify((proto::DungeonShowReminderNotify *const)(v4 + 64));
                }
              }
            }
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            LanternRiteActivity::backSalvage(__closure->__this, player);
          }
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/lantern_rite_activity.cpp",
          "operator()",
          1498);
        common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
          &v27,
          (const char (*)[39])"[LanternRite] overall config not found");
        common::milog::MiLogStream::~MiLogStream(&v27);
      }
    }
  }
  std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v4 + 32));
  if ( v28 == (char *)v4 )
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
};

// Line 1533: range 0000000015FF3CAC-0000000015FF3D20
ForeachPolicy __cdecl LanternRiteActivity::onVehicleTimer(unsigned long)::{lambda(Player &)#2}::operator()(
        const LanternRiteActivity::onVehicleTimer::<lambda(Player&)> *const __closure,
        Player *player)
{
  std::shared_ptr<PlayerWorldScene> p_world_scene_ptr; // [rsp+10h] [rbp-20h] BYREF

  std::shared_ptr<PlayerWorldScene>::shared_ptr(&p_world_scene_ptr, &__closure->__world_scene_ptr);
  LanternRiteActivity::onVehicleTimer(unsigned long)::{lambda(std::shared_ptr<PlayerWorldScene>,Player &)#1}::operator()(
    &__closure->__back_vehicle_func,
    &p_world_scene_ptr,
    player);
  std::shared_ptr<PlayerWorldScene>::~shared_ptr(&p_world_scene_ptr);
  return 0;
};

// Line 1533: range 000000001603E628-000000001603E6A5
void __cdecl LanternRiteActivity::onVehicleTimer(unsigned long)::{lambda(Player &)#2}::Player(
        LanternRiteActivity::onVehicleTimer::<lambda(Player&)> *const this,
        LanternRiteActivity::onVehicleTimer::<lambda(Player&)> *a2)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  this->__back_vehicle_func.__this = a2->__back_vehicle_func.__this;
  std::shared_ptr<PlayerWorldScene>::shared_ptr(&this->__world_scene_ptr, &a2->__world_scene_ptr);
};

// Line 1533: range 000000001603E770-000000001603E7ED
void __cdecl LanternRiteActivity::onVehicleTimer(unsigned long)::{lambda(Player &)#2}::Player(
        LanternRiteActivity::onVehicleTimer::<lambda(Player&)> *const this,
        const LanternRiteActivity::onVehicleTimer::<lambda(Player&)> *a2)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  this->__back_vehicle_func.__this = a2->__back_vehicle_func.__this;
  std::shared_ptr<PlayerWorldScene>::shared_ptr(&this->__world_scene_ptr, &a2->__world_scene_ptr);
};

// Line 1533: range 0000000015FF3D22-0000000015FF3D40
void __cdecl LanternRiteActivity::onVehicleTimer(unsigned long)::{lambda(Player &)#2}::~Player(
        LanternRiteActivity::onVehicleTimer::<lambda(Player&)> *const this)
{
  std::shared_ptr<PlayerWorldScene>::~shared_ptr(&this->__world_scene_ptr);
};

// Line 1541: range 0000000015FF418A-0000000015FF4B44
int32_t __cdecl LanternRiteActivity::takeSkinReward(LanternRiteActivity *const this)
{
  int32_t v1; // r14d
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v7; // rdx
  common::milog::MiLogStream *v8; // rax
  PlayerBasicComp *BasicComp; // rax
  PlayerItemComp *ItemComp; // rcx
  common::milog::MiLogStream *v11; // r14
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  int v14; // r15d
  PlayerItemComp *p_clothes_reward_id; // rdi
  std::__shared_ptr_access<proto_log::PlayerLogBodyLanternRiteTakeSkinReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rcx
  Player *v17; // r15
  int32_t result; // eax
  std::string v19; // [rsp+0h] [rbp-150h]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-130h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-128h] BYREF
  const data::LanV2OverAllDataExcelConfig *overall_config_ptr; // [rsp+30h] [rbp-120h]
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-118h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+40h] [rbp-110h] BYREF
  std::shared_ptr<google::protobuf::Message> v25; // [rsp+50h] [rbp-100h] BYREF
  common::milog::MiLogStream v26; // [rsp+60h] [rbp-F0h] BYREF
  char v27[208]; // [rsp+80h] [rbp-D0h] BYREF

  v19._M_string_length = (std::string::size_type)this;
  v2 = (unsigned __int64)v27;
  v19._M_dataplus._M_p = v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 1 23 log_context_holder:1573 48 4 15 watcher_id:1558 64 16 12 log_ptr:1584 96 24 11 reason:1574";
  *(_QWORD *)(v2 + 16) = LanternRiteActivity::takeSkinReward;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556927;
  v4[536862722] = -219021312;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  if ( !BaseActivity::isOpening(this, 0) || BaseActivity::isSettled(this) )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/lantern_rite_activity.cpp",
      "takeSkinReward",
      1544);
    common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
      &v26,
      (const char (*)[38])"[LanternRite] activity is not opening");
    common::milog::MiLogStream::~MiLogStream(&v26);
    v1 = 860;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->is_taken_skin_reward_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 73) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_taken_skin_reward_ >> 3)
                                                        + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_taken_skin_reward_);
    }
    if ( this->is_taken_skin_reward_ )
    {
      v1 = 10099;
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v25);
      v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v25);
      overall_config_ptr = ActivitySeaLampExcelConfigMgr::getLanternRiteOverallConfig(&v6->design_config.txt_config_mgr.activity_sea_lamp_config_mgr);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v25);
      if ( overall_config_ptr )
      {
        v19._anon_0._M_local_buf[11] = 1;
        __for_range = &overall_config_ptr->clothes_watcher_id_list;
        __for_begin._M_current = std::vector<unsigned int>::begin(&overall_config_ptr->clothes_watcher_id_list)._M_current;
        __for_end._M_current = std::vector<unsigned int>::end(&overall_config_ptr->clothes_watcher_id_list)._M_current;
        while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
        {
          v7 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
          if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          *(_DWORD *)(v2 + 48) = *v7;
          if ( !BaseActivity::isWatcherFinished(this, *(_DWORD *)(v2 + 48)) )
          {
            common::milog::MiLogStream::create(
              &v26,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/activity/lantern_rite_activity.cpp",
              "takeSkinReward",
              1562);
            v8 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                   &v26,
                   (const char (*)[53])"[LanternRite] skin watcher not finished, watcher_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
            common::milog::MiLogStream::~MiLogStream(&v26);
            v19._anon_0._M_local_buf[11] = 0;
            break;
          }
          __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
        }
        if ( v19._anon_0._M_local_buf[11] != 1 )
        {
          v1 = 10100;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&overall_config_ptr->clothes_reward_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&overall_config_ptr->clothes_reward_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          if ( !overall_config_ptr->clothes_reward_id )
            goto LABEL_50;
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          BasicComp = Player::getBasicComp(this->player_);
          PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v26, BasicComp);
          StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32), 0xDE9u, v19);
          std::string::~string(&v26);
          ActionReason::ActionReason(
            (ActionReason *const)(v2 + 96),
            ACTION_REASON_LANTERN_RITE_SKIN_REWARD,
            ITEM_LIMIT_ACTIVITY_LANTERN_RITE);
          if ( *(_BYTE *)(((v19._M_string_length + 24) >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          ItemComp = Player::getItemComp(*(Player *const *)(v19._M_string_length + 24));
          if ( *(_BYTE *)(((unsigned __int64)&overall_config_ptr->clothes_reward_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&overall_config_ptr->clothes_reward_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          *((_DWORD *)&v19._anon_0._M_allocated_capacity + 3) = PlayerItemComp::checkGrantReward(
                                                                  ItemComp,
                                                                  overall_config_ptr->clothes_reward_id,
                                                                  (const ActionReason *)(v2 + 96));
          if ( *((_DWORD *)&v19._anon_0._M_allocated_capacity + 3) )
          {
            common::milog::MiLogStream::create(
              &v26,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/lantern_rite_activity.cpp",
              "takeSkinReward",
              1578);
            v11 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                    &v26,
                    (const char (*)[45])"[LanternRite] checkGrantReward failed, uid: ");
            if ( *(_BYTE *)(((v19._M_string_length + 24) >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            *(_DWORD *)(v2 + 48) = Player::getUid(*(const Player *const *)(v19._M_string_length + 24));
            v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v11,
                    (const unsigned int *)(v2 + 48));
            v13 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v12,
                    (const char (*)[14])" ,reward_id: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v13,
              &overall_config_ptr->clothes_reward_id);
            common::milog::MiLogStream::~MiLogStream(&v26);
            v1 = *((_DWORD *)&v19._anon_0._M_allocated_capacity + 3);
            v14 = 0;
          }
          else
          {
            if ( *(_BYTE *)(((v19._M_string_length + 24) >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            p_clothes_reward_id = Player::getItemComp(*(Player *const *)(v19._M_string_length + 24));
            if ( *(_BYTE *)(((unsigned __int64)&overall_config_ptr->clothes_reward_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&overall_config_ptr->clothes_reward_id >> 3) + 0x7FFF8000) <= 3 )
            {
              p_clothes_reward_id = (PlayerItemComp *)&overall_config_ptr->clothes_reward_id;
              __asan_report_load4();
            }
            PlayerItemComp::grantReward(
              p_clothes_reward_id,
              overall_config_ptr->clothes_reward_id,
              (const ActionReason *)(v2 + 96),
              0LL);
            if ( *(_BYTE *)(((v19._M_string_length + 1609) >> 3) + 0x7FFF8000) != 0
              && ((LOBYTE(v19._M_string_length) + 73) & 7) >= *(_BYTE *)(((v19._M_string_length + 1609) >> 3)
                                                                       + 0x7FFF8000) )
            {
              __asan_report_store1(v19._M_string_length + 1609);
            }
            *(_BYTE *)(v19._M_string_length + 1609) = 1;
            common::tools::perf::make_shared<proto_log::PlayerLogBodyLanternRiteTakeSkinReward>();
            v16 = std::__shared_ptr_access<proto_log::PlayerLogBodyLanternRiteTakeSkinReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyLanternRiteTakeSkinReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
            if ( *(_BYTE *)(((unsigned __int64)&overall_config_ptr->clothes_reward_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&overall_config_ptr->clothes_reward_id >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            proto_log::PlayerLogBodyLanternRiteTakeSkinReward::set_reward_id(v16, overall_config_ptr->clothes_reward_id);
            if ( *(_BYTE *)(((v19._M_string_length + 24) >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v17 = *(Player **)(v19._M_string_length + 24);
            std::shared_ptr<google::protobuf::Message>::shared_ptr(&v25, 0LL);
            std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyLanternRiteTakeSkinReward,void>(
              &p_body_ptr,
              (const std::shared_ptr<proto_log::PlayerLogBodyLanternRiteTakeSkinReward> *)(v2 + 64));
            Player::printStatLog(v17, &p_body_ptr, &v25, 0xEu);
            std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
            std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v25);
            std::shared_ptr<proto_log::PlayerLogBodyLanternRiteTakeSkinReward>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyLanternRiteTakeSkinReward> *const)(v2 + 64));
            v14 = 1;
          }
          StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32));
          if ( v14 == 1 )
          {
LABEL_50:
            BaseActivity::notifyClientData((BaseActivity *const)v19._M_string_length, 0);
            v1 = 0;
          }
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v26,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/lantern_rite_activity.cpp",
          "takeSkinReward",
          1554);
        common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
          &v26,
          (const char (*)[39])"[LanternRite] overall config not found");
        common::milog::MiLogStream::~MiLogStream(&v26);
        v1 = -1;
      }
    }
  }
  result = v1;
  if ( v19._M_dataplus._M_p == (std::string::pointer)v2 )
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
  return result;
};

// Line 1593: range 0000000015FF4B46-0000000015FF557D
void __cdecl LanternRiteActivity::backSalvage(LanternRiteActivity *const this, Player *player)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  PlayerSceneComp *SceneComp; // rax
  LuaConfigMgr *p_lua_config_mgr; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  uint32_t DefaultWorldMainSceneId; // eax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  Scene *v11; // rax
  bool v12; // r14
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  uint32_t v22; // r15d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  uint32_t VehicleGadgetId; // eax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rax
  PlayerSceneComp *v32; // [rsp+8h] [rbp-148h]
  const SceneScriptConfig *scene_config_ptr; // [rsp+28h] [rbp-128h]
  const DummyPointScriptConfig *player_point_config_ptr; // [rsp+30h] [rbp-120h]
  const DummyPointScriptConfig *point_config_ptr; // [rsp+38h] [rbp-118h]
  std::shared_ptr<Config> v36; // [rsp+40h] [rbp-110h] BYREF
  std::shared_ptr<Player> v37; // [rsp+50h] [rbp-100h] BYREF
  common::milog::MiLogStream v38; // [rsp+60h] [rbp-F0h] BYREF
  TransferReason p_reason; // [rsp+80h] [rbp-D0h] BYREF
  char v40[144]; // [rsp+C0h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 14 scene_ptr:1595 64 16 20 boat_gadget_ptr:1637";
  *(_QWORD *)(v2 + 16) = LanternRiteActivity::backSalvage;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  Player::getSceneComp(player);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 32));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v38,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/lantern_rite_activity.cpp",
      "backSalvage",
      1598);
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
      &v38,
      (const char (*)[35])"[LanternRite] player not on scene.");
    common::milog::MiLogStream::~MiLogStream(&v38);
  }
  else
  {
    SceneComp = Player::getSceneComp(player);
    if ( PlayerSceneComp::isInTransfer(SceneComp) )
    {
      common::milog::MiLogStream::create(
        &v38,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/lantern_rite_activity.cpp",
        "backSalvage",
        1604);
      common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
        &v38,
        (const char (*)[34])"[LanternRite] player in transfer.");
      common::milog::MiLogStream::~MiLogStream(&v38);
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v36);
      p_lua_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v36)->design_config.lua_config_mgr;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v37);
      v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v37);
      DefaultWorldMainSceneId = TxtConfigMgr::getDefaultWorldMainSceneId(&v7->design_config.txt_config_mgr);
      scene_config_ptr = LuaConfigMgr::findSceneScriptConfig(p_lua_config_mgr, DefaultWorldMainSceneId);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v37);
      std::shared_ptr<Config>::~shared_ptr(&v36);
      if ( scene_config_ptr )
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v37);
        v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v37);
        std::string::basic_string(
          &v38,
          &v9->design_config.txt_config_mgr.activity_sea_lamp_config_mgr.back_player_pos_name);
        player_point_config_ptr = SceneScriptConfig::findDummyPointScriptConfig(scene_config_ptr, (std::string *)&v38);
        std::string::~string(&v38);
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v37);
        if ( player_point_config_ptr )
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v37);
          v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v37);
          std::string::basic_string(
            &v38,
            &v10->design_config.txt_config_mgr.activity_sea_lamp_config_mgr.back_vehicle_pos_name);
          point_config_ptr = SceneScriptConfig::findDummyPointScriptConfig(scene_config_ptr, (std::string *)&v38);
          std::string::~string(&v38);
          std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v37);
          if ( point_config_ptr )
          {
            v32 = Player::getSceneComp(player);
            TransferReason::TransferReason(&p_reason, ENTER_REASON_SEALAMP_BOAT_BACK);
            v11 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
            v12 = PlayerSceneComp::jumpToScene(
                    v32,
                    v11,
                    &player_point_config_ptr->pos,
                    &player_point_config_ptr->rot,
                    0,
                    &p_reason) == 0;
            TransferReason::~TransferReason(&p_reason);
            if ( v12 )
            {
              common::milog::MiLogStream::create(
                &v38,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/player/activity/lantern_rite_activity.cpp",
                "backSalvage",
                1631);
              v13 = common::milog::MiLogStream::operator<<<LanternRiteActivity,(LanternRiteActivity*)0>(&v38, this);
              v14 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                      v13,
                      (const char (*)[21])" move player to pos:");
              v15 = operator<<(v14, &player_point_config_ptr->pos);
              v16 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v15, (const char (*)[6])" rot:");
              operator<<(v16, &player_point_config_ptr->rot);
            }
            else
            {
              common::milog::MiLogStream::create(
                &v38,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/lantern_rite_activity.cpp",
                "backSalvage",
                1635);
              v17 = common::milog::MiLogStream::operator<<<LanternRiteActivity,(LanternRiteActivity*)0>(&v38, this);
              v18 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                      v17,
                      (const char (*)[21])" move player to pos:");
              v19 = operator<<(v18, &player_point_config_ptr->pos);
              v20 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v19, (const char (*)[6])" rot:");
              v21 = operator<<(v20, &player_point_config_ptr->rot);
              common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v21, (const char (*)[9])" failed.");
            }
            common::milog::MiLogStream::~MiLogStream(&v38);
            v22 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
            toPtr<Player,Player>((Player *)&v37);
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v36);
            v23 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v36);
            VehicleGadgetId = ActivitySeaLampExcelConfigMgr::getVehicleGadgetId(&v23->design_config.txt_config_mgr.activity_sea_lamp_config_mgr);
            Scene::createPlayerVehicle(
              (Scene *const)(v2 + 64),
              v22,
              (const Vector3 *)VehicleGadgetId,
              &point_config_ptr->pos,
              (PlayerPtr *)&point_config_ptr->rot,
              (proto::CreateGadgetReason)&v37,
              0);
            std::shared_ptr<Config>::~shared_ptr(&v36);
            std::shared_ptr<Player>::~shared_ptr(&v37);
            if ( std::operator==<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v2 + 64)) )
            {
              common::milog::MiLogStream::create(
                &v38,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/lantern_rite_activity.cpp",
                "backSalvage",
                1640);
              v25 = common::milog::MiLogStream::operator<<<LanternRiteActivity,(LanternRiteActivity*)0>(&v38, this);
              v26 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                      v25,
                      (const char (*)[26])" create vehicle failed @:");
              v27 = operator<<(v26, &point_config_ptr->pos);
              v28 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v27, (const char (*)[3])", ");
              v29 = operator<<(v28, &point_config_ptr->rot);
              v30 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v29, (const char (*)[5])" in:");
              v31 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
              common::milog::MiLogStream::operator<<<Scene,(Scene*)0>(v30, v31);
              common::milog::MiLogStream::~MiLogStream(&v38);
            }
            std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v2 + 64));
          }
          else
          {
            common::milog::MiLogStream::create(
              &v38,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/activity/lantern_rite_activity.cpp",
              "backSalvage",
              1624);
            common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
              &v38,
              (const char (*)[28])"point_config_ptr == nullptr");
            common::milog::MiLogStream::~MiLogStream(&v38);
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v38,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/activity/lantern_rite_activity.cpp",
            "backSalvage",
            1618);
          common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
            &v38,
            (const char (*)[35])"player_point_config_ptr == nullptr");
          common::milog::MiLogStream::~MiLogStream(&v38);
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v38,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/lantern_rite_activity.cpp",
          "backSalvage",
          1611);
        common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
          &v38,
          (const char (*)[28])"scene_config_ptr == nullptr");
        common::milog::MiLogStream::~MiLogStream(&v38);
      }
    }
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 32));
  if ( v40 == (char *)v2 )
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

// Line 1645: range 0000000015FF557E-0000000015FF6C5F
__int64 __fastcall LanternRiteActivity::restartSalvage(
        LanternRiteActivity *const this,
        uint32_t gallery_id,
        data::SalvagePlayType play_type)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char v6; // al
  unsigned int v7; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  PlayerSceneComp *SceneComp; // rax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  uint32_t SceneId; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  common::milog::MiLogStream *v15; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  Scene *v17; // rax
  SceneGalleryComp *GalleryComp; // rax
  PlayerSceneComp *v19; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  std::vector<unsigned int>::const_reference v25; // rdx
  std::vector<unsigned int>::const_reference v26; // rdx
  std::vector<unsigned int>::const_reference v27; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  uint32_t AvatarComp; // eax
  Group *v42; // rax
  ChallengeComp *ChallengeComp; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  Scene *v47; // rax
  bool v48; // r14
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // rax
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // rax
  common::milog::MiLogStream *v61; // rax
  uint32_t v62; // r15d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v63; // rax
  uint32_t VehicleGadgetId; // eax
  common::milog::MiLogStream *v65; // rax
  common::milog::MiLogStream *v66; // rax
  common::milog::MiLogStream *v67; // rax
  common::milog::MiLogStream *v68; // rax
  common::milog::MiLogStream *v69; // rax
  common::milog::MiLogStream *v70; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v71; // rax
  __int64 result; // rax
  PlayerSceneComp *v73; // [rsp+8h] [rbp-1F8h]
  uint32_t challenge_id; // [rsp+24h] [rbp-1DCh]
  LanternSalvageStage *lantern_salvage_stage; // [rsp+28h] [rbp-1D8h]
  const data::SalvageChallengeDataExcelConfig *salvage_challenge_config_ptr; // [rsp+30h] [rbp-1D0h]
  const GroupScriptConfig *group_script_config_ptr; // [rsp+38h] [rbp-1C8h]
  const PointScriptConfig *point_config_ptr; // [rsp+40h] [rbp-1C0h]
  const PointScriptConfig *player_point_config_ptr; // [rsp+48h] [rbp-1B8h]
  std::shared_ptr<Config> v81; // [rsp+50h] [rbp-1B0h] BYREF
  std::shared_ptr<Player> v82; // [rsp+60h] [rbp-1A0h] BYREF
  common::milog::MiLogStream v83; // [rsp+70h] [rbp-190h] BYREF
  TransferReason p_reason; // [rsp+90h] [rbp-170h] BYREF
  char v85[304]; // [rsp+D0h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v85;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "10 32 4 13 stage_id:1654 48 4 13 group_id:1719 64 4 27 player_point_config_id:1720 80 4 25 boat_"
                        "point_config_id:1721 96 4 15 gallery_id:1644 112 4 14 play_type:1644 128 16 14 scene_ptr:1669 16"
                        "0 16 15 avatar_ptr:1693 192 16 14 group_ptr:1744 224 16 20 boat_gadget_ptr:1764";
  *(_QWORD *)(v3 + 16) = LanternRiteActivity::restartSalvage;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -234556924;
  v5[536862723] = -234556924;
  v5[536862724] = -219021312;
  v5[536862725] = -219021312;
  v5[536862726] = -219021312;
  v5[536862727] = -202178560;
  *(_DWORD *)(v3 + 96) = gallery_id;
  *(_DWORD *)(v3 + 112) = play_type;
  if ( !BaseActivity::isOpening(this, 0) || BaseActivity::isSettled(this) )
    goto LABEL_9;
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  if ( this->is_content_closed_ )
LABEL_9:
    v6 = 1;
  else
    v6 = 0;
  if ( v6 )
  {
    common::milog::MiLogStream::create(
      &v83,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/lantern_rite_activity.cpp",
      "restartSalvage",
      1648);
    common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
      &v83,
      (const char (*)[38])"[LanternRite] activity is not opening");
    common::milog::MiLogStream::~MiLogStream(&v83);
    v7 = 860;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v82);
    v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v82);
    challenge_id = ActivitySeaLampExcelConfigMgr::findChallengeIDByGalleryId(
                     &v8->design_config.txt_config_mgr.activity_sea_lamp_config_mgr,
                     *(_DWORD *)(v3 + 96));
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v82);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v82);
    v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v82);
    *(_DWORD *)(v3 + 32) = ActivitySeaLampExcelConfigMgr::findStageIDByChallengeId(
                             &v9->design_config.txt_config_mgr.activity_sea_lamp_config_mgr,
                             challenge_id);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v82);
    lantern_salvage_stage = LanternRiteActivity::findSalvageStage(this, *(_DWORD *)(v3 + 32));
    if ( !lantern_salvage_stage )
      goto LABEL_17;
    if ( *(_BYTE *)(((unsigned __int64)&lantern_salvage_stage->is_open >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)lantern_salvage_stage + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&lantern_salvage_stage->is_open >> 3)
                                                                        + 0x7FFF8000) )
    {
      __asan_report_load1(&lantern_salvage_stage->is_open);
    }
    if ( lantern_salvage_stage->is_open )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      SceneComp = Player::getSceneComp(this->player_);
      if ( !PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
      {
        common::milog::MiLogStream::create(
          &v83,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/lantern_rite_activity.cpp",
          "restartSalvage",
          1665);
        common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
          &v83,
          (const char (*)[39])"[LanternRite] player not in self scene");
        common::milog::MiLogStream::~MiLogStream(&v83);
        v7 = 512;
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
            &v83,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/lantern_rite_activity.cpp",
            "restartSalvage",
            1672);
          common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
            &v83,
            (const char (*)[35])"[LanternRite] player not on scene.");
          common::milog::MiLogStream::~MiLogStream(&v83);
          v7 = 103;
        }
        else
        {
          v12 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
          SceneId = Scene::getSceneId(v12);
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v82);
          v14 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v82);
          LOBYTE(SceneId) = SceneId != TxtConfigMgr::getDefaultWorldMainSceneId(&v14->design_config.txt_config_mgr);
          std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v82);
          if ( (_BYTE)SceneId )
          {
            common::milog::MiLogStream::create(
              &v83,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/activity/lantern_rite_activity.cpp",
              "restartSalvage",
              1678);
            v15 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                    &v83,
                    (const char (*)[44])"[LanternRite] player not in scene 3, scene:");
            v16 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
            *(_DWORD *)(v3 + 80) = Scene::getSceneId(v16);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 80));
            common::milog::MiLogStream::~MiLogStream(&v83);
            v7 = 531;
          }
          else
          {
            v17 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
            GalleryComp = Scene::getGalleryComp(v17);
            if ( SceneGalleryComp::isAnyGalleryStarted(GalleryComp) )
            {
              common::milog::MiLogStream::create(
                &v83,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/player/activity/lantern_rite_activity.cpp",
                "restartSalvage",
                1684);
              common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                &v83,
                (const char (*)[33])"[LanternRite] anyGalleryStarted.");
              common::milog::MiLogStream::~MiLogStream(&v83);
              v7 = 523;
            }
            else
            {
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              v19 = Player::getSceneComp(this->player_);
              if ( PlayerSceneComp::isInTransfer(v19) )
              {
                common::milog::MiLogStream::create(
                  &v83,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/player/activity/lantern_rite_activity.cpp",
                  "restartSalvage",
                  1690);
                common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                  &v83,
                  (const char (*)[34])"[LanternRite] player in transfer.");
                common::milog::MiLogStream::~MiLogStream(&v83);
                v7 = 170;
              }
              else
              {
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                Player::getAvatarComp(this->player_);
                PlayerAvatarComp::getCurAvatar((const PlayerAvatarComp *const)(v3 + 160));
                if ( std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v3 + 160), 0LL) )
                {
                  common::milog::MiLogStream::create(
                    &v83,
                    &common::milog::MiLogDefault::default_log_obj_,
                    1u,
                    "./src/player/activity/lantern_rite_activity.cpp",
                    "restartSalvage",
                    1696);
                  common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                    &v83,
                    (const char (*)[39])"[LanternRite] getCurAvatar is nullptr.");
                  common::milog::MiLogStream::~MiLogStream(&v83);
                  v7 = 103;
                }
                else
                {
                  ServiceBox::findService<GameserverService>();
                  GameserverService::getConfig((GameserverService *const)&v82);
                  v20 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v82);
                  salvage_challenge_config_ptr = ActivitySeaLampExcelConfigMgr::findSalvageChallengeByGalleryId(
                                                   &v20->design_config.txt_config_mgr.activity_sea_lamp_config_mgr,
                                                   *(_DWORD *)(v3 + 96));
                  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v82);
                  if ( !salvage_challenge_config_ptr )
                    goto LABEL_42;
                  if ( *(_BYTE *)(((unsigned __int64)&salvage_challenge_config_ptr->play_type >> 3) + 0x7FFF8000) != 0
                    && (char)((((_BYTE)salvage_challenge_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&salvage_challenge_config_ptr->play_type >> 3)
                                                                                                + 0x7FFF8000) )
                  {
                    __asan_report_load4();
                  }
                  if ( salvage_challenge_config_ptr->play_type == *(_DWORD *)(v3 + 112) )
                  {
                    if ( std::vector<unsigned int>::size(&salvage_challenge_config_ptr->player_point_config_id) == 2 )
                    {
                      if ( std::vector<unsigned int>::size(&salvage_challenge_config_ptr->boat_point_config_id) == 2 )
                      {
                        v25 = std::vector<unsigned int>::operator[](
                                &salvage_challenge_config_ptr->player_point_config_id,
                                0LL);
                        if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
                          && (char)(((unsigned __int8)v25 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v25 >> 3)
                                                                                + 0x7FFF8000) )
                        {
                          __asan_report_load4();
                        }
                        *(_DWORD *)(v3 + 48) = *v25;
                        v26 = std::vector<unsigned int>::operator[](
                                &salvage_challenge_config_ptr->player_point_config_id,
                                1uLL);
                        if ( *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) != 0
                          && (char)(((unsigned __int8)v26 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v26 >> 3)
                                                                                + 0x7FFF8000) )
                        {
                          __asan_report_load4();
                        }
                        *(_DWORD *)(v3 + 64) = *v26;
                        v27 = std::vector<unsigned int>::operator[](
                                &salvage_challenge_config_ptr->boat_point_config_id,
                                1uLL);
                        if ( *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) != 0
                          && (char)(((unsigned __int8)v27 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v27 >> 3)
                                                                                + 0x7FFF8000) )
                        {
                          __asan_report_load4();
                        }
                        *(_DWORD *)(v3 + 80) = *v27;
                        ServiceBox::findService<GameserverService>();
                        GameserverService::getConfig((GameserverService *const)&v82);
                        v28 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v82);
                        group_script_config_ptr = LuaConfigMgr::findGroupScriptConfig(
                                                    &v28->design_config.lua_config_mgr,
                                                    *(_DWORD *)(v3 + 48));
                        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v82);
                        if ( group_script_config_ptr )
                        {
                          point_config_ptr = GroupScriptConfig::findPointConfig(
                                               group_script_config_ptr,
                                               *(_DWORD *)(v3 + 80));
                          if ( point_config_ptr )
                          {
                            player_point_config_ptr = GroupScriptConfig::findPointConfig(
                                                        group_script_config_ptr,
                                                        *(_DWORD *)(v3 + 64));
                            if ( player_point_config_ptr )
                            {
                              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                                __asan_report_load8();
                              AvatarComp = (unsigned int)Player::getAvatarComp(this->player_);
                              PlayerAvatarComp::queryActiveGroup((PlayerAvatarComp *const)(v3 + 192), AvatarComp);
                              if ( std::operator!=<Group>(0LL, (const std::shared_ptr<Group> *)(v3 + 192)) )
                              {
                                v42 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
                                ChallengeComp = Group::getChallengeComp(v42);
                                ChallengeComp::finishUnfinishedChallenges(
                                  ChallengeComp,
                                  CLIENT,
                                  0,
                                  PlayerLogBodyChallengeFinish_FinishType_STOP);
                              }
                              else
                              {
                                common::milog::MiLogStream::create(
                                  &v83,
                                  &common::milog::MiLogDefault::default_log_obj_,
                                  1u,
                                  "./src/player/activity/lantern_rite_activity.cpp",
                                  "restartSalvage",
                                  1752);
                                v44 = common::milog::MiLogStream::operator<<<LanternRiteActivity,(LanternRiteActivity*)0>(
                                        &v83,
                                        this);
                                v45 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
                                        v44,
                                        (const char (*)[8])" group:");
                                v46 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                        v45,
                                        (const unsigned int *)(v3 + 48));
                                common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                                  v46,
                                  (const char (*)[19])" already unloaded.");
                                common::milog::MiLogStream::~MiLogStream(&v83);
                              }
                              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                                __asan_report_load8();
                              v73 = Player::getSceneComp(this->player_);
                              TransferReason::TransferReason(&p_reason, ENTER_REASON_SEALAMP_BOAT_RESTART);
                              v47 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
                              v48 = PlayerSceneComp::jumpToScene(
                                      v73,
                                      v47,
                                      &player_point_config_ptr->pos,
                                      &player_point_config_ptr->rot,
                                      0,
                                      &p_reason) == 0;
                              TransferReason::~TransferReason(&p_reason);
                              if ( v48 )
                              {
                                common::milog::MiLogStream::create(
                                  &v83,
                                  &common::milog::MiLogDefault::default_log_obj_,
                                  1u,
                                  "./src/player/activity/lantern_rite_activity.cpp",
                                  "restartSalvage",
                                  1758);
                                v49 = common::milog::MiLogStream::operator<<<LanternRiteActivity,(LanternRiteActivity*)0>(
                                        &v83,
                                        this);
                                v50 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                                        v49,
                                        (const char (*)[13])" gallery_id:");
                                v51 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                        v50,
                                        (const unsigned int *)(v3 + 96));
                                v52 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                                        v51,
                                        (const char (*)[21])" move player to pos:");
                                v53 = operator<<(v52, &player_point_config_ptr->pos);
                                v54 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
                                        v53,
                                        (const char (*)[6])" rot:");
                                operator<<(v54, &player_point_config_ptr->rot);
                              }
                              else
                              {
                                common::milog::MiLogStream::create(
                                  &v83,
                                  &common::milog::MiLogDefault::default_log_obj_,
                                  3u,
                                  "./src/player/activity/lantern_rite_activity.cpp",
                                  "restartSalvage",
                                  1762);
                                v55 = common::milog::MiLogStream::operator<<<LanternRiteActivity,(LanternRiteActivity*)0>(
                                        &v83,
                                        this);
                                v56 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                                        v55,
                                        (const char (*)[13])" gallery_id:");
                                v57 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                        v56,
                                        (const unsigned int *)(v3 + 96));
                                v58 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                                        v57,
                                        (const char (*)[21])" move player to pos:");
                                v59 = operator<<(v58, &player_point_config_ptr->pos);
                                v60 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
                                        v59,
                                        (const char (*)[6])" rot:");
                                v61 = operator<<(v60, &player_point_config_ptr->rot);
                                common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(
                                  v61,
                                  (const char (*)[9])" failed.");
                              }
                              common::milog::MiLogStream::~MiLogStream(&v83);
                              v62 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
                              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                                __asan_report_load8();
                              toPtr<Player,Player>((Player *)&v82);
                              ServiceBox::findService<GameserverService>();
                              GameserverService::getConfig((GameserverService *const)&v81);
                              v63 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v81);
                              VehicleGadgetId = ActivitySeaLampExcelConfigMgr::getVehicleGadgetId(&v63->design_config.txt_config_mgr.activity_sea_lamp_config_mgr);
                              Scene::createPlayerVehicle(
                                (Scene *const)(v3 + 224),
                                v62,
                                (const Vector3 *)VehicleGadgetId,
                                &point_config_ptr->pos,
                                (PlayerPtr *)&point_config_ptr->rot,
                                (proto::CreateGadgetReason)&v82,
                                0);
                              std::shared_ptr<Config>::~shared_ptr(&v81);
                              std::shared_ptr<Player>::~shared_ptr(&v82);
                              if ( std::operator==<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v3 + 224)) )
                              {
                                common::milog::MiLogStream::create(
                                  &v83,
                                  &common::milog::MiLogDefault::default_log_obj_,
                                  3u,
                                  "./src/player/activity/lantern_rite_activity.cpp",
                                  "restartSalvage",
                                  1767);
                                v65 = common::milog::MiLogStream::operator<<<LanternRiteActivity,(LanternRiteActivity*)0>(
                                        &v83,
                                        this);
                                v66 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                                        v65,
                                        (const char (*)[26])" create vehicle failed @:");
                                v67 = operator<<(v66, &point_config_ptr->pos);
                                v68 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(
                                        v67,
                                        (const char (*)[3])", ");
                                v69 = operator<<(v68, &point_config_ptr->rot);
                                v70 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
                                        v69,
                                        (const char (*)[5])" in:");
                                v71 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
                                common::milog::MiLogStream::operator<<<Scene,(Scene*)0>(v70, v71);
                                common::milog::MiLogStream::~MiLogStream(&v83);
                              }
                              v7 = 0;
                              std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v3 + 224));
                              std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v3 + 192));
                            }
                            else
                            {
                              common::milog::MiLogStream::create(
                                &v83,
                                &common::milog::MiLogDefault::default_log_obj_,
                                3u,
                                "./src/player/activity/lantern_rite_activity.cpp",
                                "restartSalvage",
                                1740);
                              v37 = common::milog::MiLogStream::operator<<<LanternRiteActivity,(LanternRiteActivity*)0>(
                                      &v83,
                                      this);
                              v38 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                                      v37,
                                      (const char (*)[22])" player point config:");
                              v39 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                      v38,
                                      (const unsigned int *)(v3 + 64));
                              v40 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                                      v39,
                                      (const char (*)[19])" NOT found @group:");
                              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                v40,
                                (const unsigned int *)(v3 + 48));
                              common::milog::MiLogStream::~MiLogStream(&v83);
                              v7 = 5;
                            }
                          }
                          else
                          {
                            common::milog::MiLogStream::create(
                              &v83,
                              &common::milog::MiLogDefault::default_log_obj_,
                              3u,
                              "./src/player/activity/lantern_rite_activity.cpp",
                              "restartSalvage",
                              1733);
                            v33 = common::milog::MiLogStream::operator<<<LanternRiteActivity,(LanternRiteActivity*)0>(
                                    &v83,
                                    this);
                            v34 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                                    v33,
                                    (const char (*)[20])" boat point config:");
                            v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                    v34,
                                    (const unsigned int *)(v3 + 80));
                            v36 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                                    v35,
                                    (const char (*)[19])" NOT found @group:");
                            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                              v36,
                              (const unsigned int *)(v3 + 48));
                            common::milog::MiLogStream::~MiLogStream(&v83);
                            v7 = 5;
                          }
                        }
                        else
                        {
                          common::milog::MiLogStream::create(
                            &v83,
                            &common::milog::MiLogDefault::default_log_obj_,
                            1u,
                            "./src/player/activity/lantern_rite_activity.cpp",
                            "restartSalvage",
                            1726);
                          v29 = common::milog::MiLogStream::operator<<<LanternRiteActivity,(LanternRiteActivity*)0>(
                                  &v83,
                                  this);
                          v30 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                                  v29,
                                  (const char (*)[37])" group script config nullptr @group ");
                          v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                  v30,
                                  (const unsigned int *)(v3 + 48));
                          v32 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                                  v31,
                                  (const char (*)[14])" @gallery_id ");
                          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                            v32,
                            (const unsigned int *)(v3 + 96));
                          common::milog::MiLogStream::~MiLogStream(&v83);
                          v7 = 5;
                        }
                      }
                      else
                      {
                        common::milog::MiLogStream::create(
                          &v83,
                          &common::milog::MiLogDefault::default_log_obj_,
                          4u,
                          "./src/player/activity/lantern_rite_activity.cpp",
                          "restartSalvage",
                          1716);
                        common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                          &v83,
                          (const char (*)[43])byte_25AC2AE0);
                        common::milog::MiLogStream::~MiLogStream(&v83);
                        v7 = -1;
                      }
                    }
                    else
                    {
                      common::milog::MiLogStream::create(
                        &v83,
                        &common::milog::MiLogDefault::default_log_obj_,
                        4u,
                        "./src/player/activity/lantern_rite_activity.cpp",
                        "restartSalvage",
                        1711);
                      common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                        &v83,
                        (const char (*)[45])byte_25AC2A80);
                      common::milog::MiLogStream::~MiLogStream(&v83);
                      v7 = -1;
                    }
                  }
                  else
                  {
LABEL_42:
                    common::milog::MiLogStream::create(
                      &v83,
                      &common::milog::MiLogDefault::default_log_obj_,
                      1u,
                      "./src/player/activity/lantern_rite_activity.cpp",
                      "restartSalvage",
                      1704);
                    v21 = common::milog::MiLogStream::operator<<<LanternRiteActivity,(LanternRiteActivity*)0>(
                            &v83,
                            this);
                    v22 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                            v21,
                            (const char (*)[13])" gallery_id:");
                    v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                            v22,
                            (const unsigned int *)(v3 + 96));
                    v24 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                            v23,
                            (const char (*)[28])" not in config. play_type: ");
                    common::milog::MiLogStream::operator<<<data::SalvagePlayType,(data::SalvagePlayType*)0>(
                      v24,
                      (const data::SalvagePlayType *)(v3 + 112));
                    common::milog::MiLogStream::~MiLogStream(&v83);
                    v7 = 5;
                  }
                }
                std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 160));
              }
            }
          }
        }
        std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 128));
      }
    }
    else
    {
LABEL_17:
      common::milog::MiLogStream::create(
        &v83,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/lantern_rite_activity.cpp",
        "restartSalvage",
        1658);
      v10 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
              &v83,
              (const char (*)[56])"[LanternRite] stage not found or not opening, stage_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v83);
      v7 = 860;
    }
  }
  result = v7;
  if ( v85 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
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
  return result;
};

// Line 1773: range 0000000015FF6C60-0000000015FF6C86
int32_t __cdecl LanternRiteActivity::restartSalvagePreventByGalleryId(
        LanternRiteActivity *const this,
        uint32_t gallery_id)
{
  return LanternRiteActivity::restartSalvage(this, gallery_id, SALVAGE_PLAY_TYPE_CARRIAGE);
};

// Line 1778: range 0000000015FF6C88-0000000015FF6CAE
int32_t __cdecl LanternRiteActivity::restartSalvageEscortByGalleryId(
        LanternRiteActivity *const this,
        uint32_t gallery_id)
{
  return LanternRiteActivity::restartSalvage(this, gallery_id, SALVAGE_PLAY_TYPE_ESCORT);
};

// Line 1783: range 0000000015FF6CB0-0000000015FF6D61
int32_t __cdecl LanternRiteFireworksReformFactorData::toClient(
        LanternRiteFireworksReformFactorData *const this,
        proto::LanternRiteFireworksReformFactorInfo *factor_info)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::LanternRiteFireworksReformFactorInfo::set_factor_id(factor_info, this->factor_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->factor_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->factor_value >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::LanternRiteFireworksReformFactorInfo::set_factor_value(factor_info, this->factor_value);
  return 0;
};

// Line 1790: range 0000000015FF6D62-0000000015FF72AE
void __cdecl LanternRiteFireworksReformData::start(
        LanternRiteFireworksReformData *const this,
        uint32_t req_stage_id,
        uint32_t req_challenge_id,
        uint32_t init_fire_element_value,
        uint32_t init_stamina_value)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  const ActivitySeaLampExcelConfigMgr *v8; // rcx
  common::milog::MiLogStream *v9; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v10; // rdx
  LanternRiteFireworksReformFactorData *v11; // rax
  unsigned int *v12; // rcx
  LanternRiteFireworksReformFactorData *v13; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,LanternRiteFireworksReformFactorData> >,bool> v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-E8h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-E0h] BYREF
  const ActivitySeaLampExcelConfigMgr *config_mgr; // [rsp+38h] [rbp-D8h]
  const data::LanV2FireworksChallengeDataExcelConfig *fireworks_challenge_config_ptr; // [rsp+40h] [rbp-D0h]
  const std::vector<unsigned int> *__for_range; // [rsp+48h] [rbp-C8h]
  std::shared_ptr<Config> v26; // [rsp+50h] [rbp-C0h] BYREF
  common::milog::MiLogStream v27; // [rsp+60h] [rbp-B0h] BYREF
  char v28[144]; // [rsp+80h] [rbp-90h] BYREF

  v5 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 4 14 factor_id:1805 64 12 16 factor_data:1807";
  *(_QWORD *)(v5 + 16) = LanternRiteFireworksReformData::start;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -202177536;
  LanternRiteFireworksReformData::reset(this);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->stage_id = req_stage_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->challenge_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->challenge_id);
  }
  this->challenge_id = req_challenge_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->fire_element_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fire_element_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->fire_element_value);
  }
  this->fire_element_value = init_fire_element_value;
  if ( *(_BYTE *)(((unsigned __int64)&this->stamina_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stamina_value >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->stamina_value);
  }
  this->stamina_value = init_stamina_value;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v26);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26)->design_config.txt_config_mgr.activity_sea_lamp_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v26);
  v8 = config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->challenge_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  fireworks_challenge_config_ptr = data::ActivitySeaLampExcelConfigMgrBase::findLanV2FireworksChallengeDataExcelConfig(
                                     v8,
                                     this->challenge_id);
  if ( fireworks_challenge_config_ptr )
  {
    __for_range = &fireworks_challenge_config_ptr->factor_id_list;
    __for_begin._M_current = std::vector<unsigned int>::begin(&fireworks_challenge_config_ptr->factor_id_list)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(&fireworks_challenge_config_ptr->factor_id_list)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v10 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v5 + 48) = *v10;
      *(_DWORD *)(v5 + 64) = 0;
      *(_DWORD *)(v5 + 68) = 0;
      *(_DWORD *)(v5 + 72) = 0;
      *(_DWORD *)(v5 + 64) = *(_DWORD *)(v5 + 48);
      *(_DWORD *)(v5 + 68) = 0;
      *(_DWORD *)(v5 + 72) = 0;
      v11 = std::move<LanternRiteFireworksReformFactorData &>((LanternRiteFireworksReformFactorData *)(v5 + 64));
      v14 = std::map<unsigned int,LanternRiteFireworksReformFactorData>::emplace<unsigned int &,LanternRiteFireworksReformFactorData>(
              &this->factor_map,
              (unsigned int *)(v5 + 48),
              v11,
              v12,
              v13);
      if ( !v14.second )
      {
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/lantern_rite_activity.cpp",
          "start",
          1813);
        v15 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                &v27,
                (const char (*)[22])"duplicated factor_id:");
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v15,
                (const unsigned int *)(v5 + 48));
        v17 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v16, (const char (*)[15])" challenge_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &this->challenge_id);
        common::milog::MiLogStream::~MiLogStream(&v27);
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/lantern_rite_activity.cpp",
      "start",
      1802);
    v9 = common::milog::MiLogStream::operator<<<char [77],(char *[77])0>(
           &v27,
           (const char (*)[77])"[LanternRite] findLanV2FireworksChallengeDataExcelConfig fail, challenge_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->challenge_id);
    common::milog::MiLogStream::~MiLogStream(&v27);
  }
  if ( v28 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 1819: range 0000000015FF72B0-0000000015FF742F
void __cdecl LanternRiteFireworksReformData::reset(LanternRiteFireworksReformData *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->stage_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->challenge_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->challenge_id);
  }
  this->challenge_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->fire_element_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fire_element_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->fire_element_value);
  }
  this->fire_element_value = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->stamina_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stamina_value >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->stamina_value);
  }
  this->stamina_value = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->gm_challenge_score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gm_challenge_score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gm_challenge_score);
  }
  this->gm_challenge_score = 0;
  std::map<unsigned int,LanternRiteFireworksReformFactorData>::clear(&this->factor_map);
  std::set<unsigned int>::clear(&this->unlock_skill_set);
  std::vector<LanternRiteFireworksReformResultData>::clear(&this->result_vec);
};

// Line 1831: range 0000000015FF7430-0000000015FF755E
uint32_t __cdecl LanternRiteFireworksReformData::getChallengeScore(LanternRiteFireworksReformData *const this)
{
  uint32_t challenge_score; // [rsp+1Ch] [rbp-34h]
  std::map<unsigned int,LanternRiteFireworksReformFactorData>::iterator __for_begin; // [rsp+20h] [rbp-30h] BYREF
  std::map<unsigned int,LanternRiteFireworksReformFactorData>::iterator __for_end; // [rsp+28h] [rbp-28h] BYREF
  std::map<unsigned int,LanternRiteFireworksReformFactorData> *__for_range; // [rsp+30h] [rbp-20h]
  const std::pair<unsigned int const,LanternRiteFireworksReformFactorData> *v6; // [rsp+38h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,LanternRiteFireworksReformFactorData> >::type *_; // [rsp+40h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,LanternRiteFireworksReformFactorData> >::type *factor_data; // [rsp+48h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&this->gm_challenge_score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gm_challenge_score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->gm_challenge_score )
    return this->gm_challenge_score;
  challenge_score = 0;
  __for_range = &this->factor_map;
  __for_begin._M_node = std::map<unsigned int,LanternRiteFireworksReformFactorData>::begin(&this->factor_map)._M_node;
  __for_end._M_node = std::map<unsigned int,LanternRiteFireworksReformFactorData>::end(&this->factor_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v6 = std::_Rb_tree_iterator<std::pair<unsigned int const,LanternRiteFireworksReformFactorData>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,LanternRiteFireworksReformFactorData>(v6);
    factor_data = (std::tuple_element<1,const std::pair<unsigned int const,LanternRiteFireworksReformFactorData> >::type *)std::get<1ul,unsigned int const,LanternRiteFireworksReformFactorData>(v6);
    if ( *(_BYTE *)(((unsigned __int64)&factor_data->factor_score >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)factor_data + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&factor_data->factor_score >> 3)
                                                                + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    challenge_score += factor_data->factor_score;
    std::_Rb_tree_iterator<std::pair<unsigned int const,LanternRiteFireworksReformFactorData>>::operator++(&__for_begin);
  }
  return challenge_score;
};

// Line 1846: range 0000000015FF7560-0000000015FF78C3
int32_t __cdecl LanternRiteFireworksStageData::fromBin(
        LanternRiteFireworksStageData *const this,
        const proto::LanternRiteFireworksStageBin *bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  uint32_t v5; // edx
  bool is_open; // cl
  LanternRiteFireworksChallengeData *v7; // r15
  unsigned int *v8; // rcx
  LanternRiteFireworksChallengeData *v9; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,LanternRiteFireworksChallengeData> >,bool> v10; // rax
  common::milog::MiLogStream *v11; // r14
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rdx
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-B4h] BYREF
  google::protobuf::RepeatedPtrField<proto::LanternRiteFireworksChallengeBin>::const_iterator __for_begin; // [rsp+30h] [rbp-B0h] BYREF
  google::protobuf::RepeatedPtrField<proto::LanternRiteFireworksChallengeBin>::const_iterator __for_end; // [rsp+38h] [rbp-A8h] BYREF
  const google::protobuf::RepeatedPtrField<proto::LanternRiteFireworksChallengeBin> *__for_range; // [rsp+40h] [rbp-A0h]
  const proto::LanternRiteFireworksChallengeBin *challenge_bin; // [rsp+48h] [rbp-98h]
  common::milog::MiLogStream v20; // [rsp+50h] [rbp-90h] BYREF
  char v21[112]; // [rsp+70h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 19 challenge_data:1852";
  *(_QWORD *)(v2 + 16) = LanternRiteFireworksStageData::fromBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  v5 = proto::LanternRiteFireworksStageBin::stage_id(bin);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->stage_id = v5;
  is_open = proto::LanternRiteFireworksStageBin::is_open(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_open);
  }
  this->is_open = is_open;
  std::map<unsigned int,LanternRiteFireworksChallengeData>::clear(&this->challenge_map);
  __for_range = proto::LanternRiteFireworksStageBin::challenge_bin_list(bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::LanternRiteFireworksChallengeBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::LanternRiteFireworksChallengeBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::LanternRiteFireworksChallengeBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    challenge_bin = google::protobuf::internal::RepeatedPtrIterator<proto::LanternRiteFireworksChallengeBin const>::operator*(&__for_begin);
    *(_DWORD *)(v2 + 32) = 0;
    *(_DWORD *)(v2 + 36) = 0;
    *(_DWORD *)(v2 + 32) = proto::LanternRiteFireworksChallengeBin::challenge_id(challenge_bin);
    *(_DWORD *)(v2 + 36) = proto::LanternRiteFireworksChallengeBin::best_score(challenge_bin);
    v7 = std::move<LanternRiteFireworksChallengeData &>((LanternRiteFireworksChallengeData *)(v2 + 32));
    val = proto::LanternRiteFireworksChallengeBin::challenge_id(challenge_bin);
    v10 = std::map<unsigned int,LanternRiteFireworksChallengeData>::emplace<unsigned int,LanternRiteFireworksChallengeData>(
            &this->challenge_map,
            &val,
            v7,
            v8,
            v9);
    if ( !v10.second )
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/lantern_rite_activity.cpp",
        "fromBin",
        1857);
      v11 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
              &v20,
              (const char (*)[38])"[LanternRite] duplicate challenge_id:");
      val = proto::LanternRiteFireworksChallengeBin::challenge_id(challenge_bin);
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
      v13 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v12, (const char (*)[11])" stage_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &this->stage_id);
      common::milog::MiLogStream::~MiLogStream(&v20);
    }
    google::protobuf::internal::RepeatedPtrIterator<proto::LanternRiteFireworksChallengeBin const>::operator++(&__for_begin);
  }
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

// Line 1864: range 0000000015FF78C4-0000000015FF7AA1
int32_t __cdecl LanternRiteFireworksStageData::toBin(
        const LanternRiteFireworksStageData *const this,
        proto::LanternRiteFireworksStageBin *bin)
{
  std::map<unsigned int,LanternRiteFireworksChallengeData>::const_iterator __for_begin; // [rsp+18h] [rbp-38h] BYREF
  std::map<unsigned int,LanternRiteFireworksChallengeData>::const_iterator __for_end; // [rsp+20h] [rbp-30h] BYREF
  const std::map<unsigned int,LanternRiteFireworksChallengeData> *__for_range; // [rsp+28h] [rbp-28h]
  const std::pair<unsigned int const,LanternRiteFireworksChallengeData> *v6; // [rsp+30h] [rbp-20h]
  std::tuple_element<0,const std::pair<unsigned int const,LanternRiteFireworksChallengeData> >::type *_; // [rsp+38h] [rbp-18h]
  std::tuple_element<1,const std::pair<unsigned int const,LanternRiteFireworksChallengeData> >::type *challenge_data; // [rsp+40h] [rbp-10h]
  proto::LanternRiteFireworksChallengeBin *challenge_bin; // [rsp+48h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::LanternRiteFireworksStageBin::set_stage_id(bin, this->stage_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_open);
  }
  proto::LanternRiteFireworksStageBin::set_is_open(bin, this->is_open);
  __for_range = &this->challenge_map;
  __for_begin._M_node = std::map<unsigned int,LanternRiteFireworksChallengeData>::begin(&this->challenge_map)._M_node;
  __for_end._M_node = std::map<unsigned int,LanternRiteFireworksChallengeData>::end(&this->challenge_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v6 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,LanternRiteFireworksChallengeData>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,LanternRiteFireworksChallengeData>(v6);
    challenge_data = (std::tuple_element<1,const std::pair<unsigned int const,LanternRiteFireworksChallengeData> >::type *)std::get<1ul,unsigned int const,LanternRiteFireworksChallengeData>(v6);
    challenge_bin = proto::LanternRiteFireworksStageBin::add_challenge_bin_list(bin);
    if ( *(_BYTE *)(((unsigned __int64)challenge_data >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)challenge_data & 7) + 3) >= *(_BYTE *)(((unsigned __int64)challenge_data >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::LanternRiteFireworksChallengeBin::set_challenge_id(challenge_bin, challenge_data->challenge_id);
    if ( *(_BYTE *)(((unsigned __int64)&challenge_data->best_score >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)challenge_data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&challenge_data->best_score >> 3)
                                                                   + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::LanternRiteFireworksChallengeBin::set_best_score(challenge_bin, challenge_data->best_score);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,LanternRiteFireworksChallengeData>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 1877: range 0000000015FF7AA2-0000000015FF7E70
int32_t __cdecl LanternRiteFireworksStageData::toClient(
        const LanternRiteFireworksStageData *const this,
        proto::LanternRiteFireworksStageInfo *proto)
{
  const ActivitySeaLampExcelConfigMgr *v2; // rcx
  common::milog::MiLogStream *v3; // rax
  uint32_t best_score; // ecx
  std::map<unsigned int,LanternRiteFireworksChallengeData>::const_iterator __for_begin; // [rsp+18h] [rbp-88h] BYREF
  std::map<unsigned int,LanternRiteFireworksChallengeData>::const_iterator __for_end; // [rsp+20h] [rbp-80h] BYREF
  const ActivitySeaLampExcelConfigMgr *config_mgr; // [rsp+28h] [rbp-78h]
  const std::map<unsigned int,LanternRiteFireworksChallengeData> *__for_range; // [rsp+30h] [rbp-70h]
  const std::pair<unsigned int const,LanternRiteFireworksChallengeData> *v10; // [rsp+38h] [rbp-68h]
  std::tuple_element<0,const std::pair<unsigned int const,LanternRiteFireworksChallengeData> >::type *_; // [rsp+40h] [rbp-60h]
  std::tuple_element<1,const std::pair<unsigned int const,LanternRiteFireworksChallengeData> >::type *challenge_data; // [rsp+48h] [rbp-58h]
  proto::LanternRiteFireworksChallengeInfo *challenge_info; // [rsp+50h] [rbp-50h]
  const data::LanV2FireworksChallengeDataExcelConfig *fireworks_challenge_config_ptr; // [rsp+58h] [rbp-48h]
  std::shared_ptr<Config> v15; // [rsp+60h] [rbp-40h] BYREF
  common::milog::MiLogStream v16; // [rsp+70h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::LanternRiteFireworksStageInfo::set_stage_id(proto, this->stage_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_open);
  }
  proto::LanternRiteFireworksStageInfo::set_is_open(proto, this->is_open);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v15);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15)->design_config.txt_config_mgr.activity_sea_lamp_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v15);
  __for_range = &this->challenge_map;
  __for_begin._M_node = std::map<unsigned int,LanternRiteFireworksChallengeData>::begin(&this->challenge_map)._M_node;
  __for_end._M_node = std::map<unsigned int,LanternRiteFireworksChallengeData>::end(&this->challenge_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v10 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,LanternRiteFireworksChallengeData>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,LanternRiteFireworksChallengeData>(v10);
    challenge_data = (std::tuple_element<1,const std::pair<unsigned int const,LanternRiteFireworksChallengeData> >::type *)std::get<1ul,unsigned int const,LanternRiteFireworksChallengeData>(v10);
    challenge_info = proto::LanternRiteFireworksStageInfo::add_challenge_info_list(proto);
    if ( *(_BYTE *)(((unsigned __int64)challenge_data >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)challenge_data & 7) + 3) >= *(_BYTE *)(((unsigned __int64)challenge_data >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::LanternRiteFireworksChallengeInfo::set_challenge_id(challenge_info, challenge_data->challenge_id);
    if ( *(_BYTE *)(((unsigned __int64)&challenge_data->best_score >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)challenge_data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&challenge_data->best_score >> 3)
                                                                   + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::LanternRiteFireworksChallengeInfo::set_best_score(challenge_info, challenge_data->best_score);
    v2 = config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)challenge_data >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)challenge_data & 7) + 3) >= *(_BYTE *)(((unsigned __int64)challenge_data >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    fireworks_challenge_config_ptr = data::ActivitySeaLampExcelConfigMgrBase::findLanV2FireworksChallengeDataExcelConfig(
                                       v2,
                                       challenge_data->challenge_id);
    if ( fireworks_challenge_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&challenge_data->best_score >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)challenge_data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&challenge_data->best_score >> 3)
                                                                     + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      best_score = challenge_data->best_score;
      if ( *(_BYTE *)(((unsigned __int64)&fireworks_challenge_config_ptr->full_score >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)fireworks_challenge_config_ptr + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&fireworks_challenge_config_ptr->full_score >> 3)
                                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::LanternRiteFireworksChallengeInfo::set_is_full_score(
        challenge_info,
        best_score >= fireworks_challenge_config_ptr->full_score);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/lantern_rite_activity.cpp",
        "toClient",
        1889);
      v3 = common::milog::MiLogStream::operator<<<char [77],(char *[77])0>(
             &v16,
             (const char (*)[77])"[LanternRite] findLanV2FireworksChallengeDataExcelConfig fail, challenge_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, (const unsigned int *)challenge_data);
      common::milog::MiLogStream::~MiLogStream(&v16);
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,LanternRiteFireworksChallengeData>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 1899: range 0000000015FF7E72-0000000015FF81AF
int32_t __cdecl LanternRiteActivity::fromFireworksBin(
        LanternRiteActivity *const this,
        const proto::LanternRiteFireworksBin *fireworks_bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  LanternRiteFireworksStageData *v5; // r15
  unsigned int *v6; // rcx
  LanternRiteFireworksStageData *v7; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,LanternRiteFireworksStageData> >,bool> v8; // rax
  common::milog::MiLogStream *v9; // r14
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+28h] [rbp-F8h] BYREF
  unsigned int Uid; // [rsp+2Ch] [rbp-F4h] BYREF
  google::protobuf::RepeatedPtrField<proto::LanternRiteFireworksStageBin>::const_iterator __for_begin; // [rsp+30h] [rbp-F0h] BYREF
  google::protobuf::RepeatedPtrField<proto::LanternRiteFireworksStageBin>::const_iterator __for_end; // [rsp+38h] [rbp-E8h] BYREF
  const google::protobuf::RepeatedPtrField<proto::LanternRiteFireworksStageBin> *__for_range; // [rsp+40h] [rbp-E0h]
  const proto::LanternRiteFireworksStageBin *stage_bin; // [rsp+48h] [rbp-D8h]
  common::milog::MiLogStream v19; // [rsp+50h] [rbp-D0h] BYREF
  char v20[176]; // [rsp+70h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 56 15 stage_data:1903";
  *(_QWORD *)(v2 + 16) = LanternRiteActivity::fromFireworksBin;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  std::map<unsigned int,LanternRiteFireworksStageData>::clear(&this->fireworks_stage_map_);
  __for_range = proto::LanternRiteFireworksBin::stage_bin_list(fireworks_bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::LanternRiteFireworksStageBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::LanternRiteFireworksStageBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::LanternRiteFireworksStageBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    stage_bin = google::protobuf::internal::RepeatedPtrIterator<proto::LanternRiteFireworksStageBin const>::operator*(&__for_begin);
    LanternRiteFireworksStageData::LanternRiteFireworksStageData((LanternRiteFireworksStageData *const)(v2 + 32));
    LanternRiteFireworksStageData::fromBin((LanternRiteFireworksStageData *const)(v2 + 32), stage_bin);
    v5 = std::move<LanternRiteFireworksStageData &>((LanternRiteFireworksStageData *)(v2 + 32));
    Uid = proto::LanternRiteFireworksStageBin::stage_id(stage_bin);
    v8 = std::map<unsigned int,LanternRiteFireworksStageData>::emplace<unsigned int,LanternRiteFireworksStageData>(
           &this->fireworks_stage_map_,
           &Uid,
           v5,
           v6,
           v7);
    if ( !v8.second )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/lantern_rite_activity.cpp",
        "fromFireworksBin",
        1907);
      v9 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
             &v19,
             (const char (*)[60])"[LanternRite] fromFireworksBin failed, duplicated stage_id:");
      val = proto::LanternRiteFireworksStageBin::stage_id(stage_bin);
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
      v11 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v10, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Uid = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &Uid);
      common::milog::MiLogStream::~MiLogStream(&v19);
    }
    LanternRiteFireworksStageData::~LanternRiteFireworksStageData((LanternRiteFireworksStageData *const)(v2 + 32));
    google::protobuf::internal::RepeatedPtrIterator<proto::LanternRiteFireworksStageBin const>::operator++(&__for_begin);
  }
  result = 0;
  if ( v20 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1914: range 0000000015FF81B0-0000000015FF8267
int32_t __cdecl LanternRiteActivity::toFireworksBin(
        const LanternRiteActivity *const this,
        proto::LanternRiteFireworksBin *fireworks_bin)
{
  proto::LanternRiteFireworksStageBin *v2; // rax
  std::map<unsigned int,LanternRiteFireworksStageData>::const_iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::map<unsigned int,LanternRiteFireworksStageData>::const_iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  const std::map<unsigned int,LanternRiteFireworksStageData> *__for_range; // [rsp+20h] [rbp-20h]
  const std::pair<unsigned int const,LanternRiteFireworksStageData> *v7; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,LanternRiteFireworksStageData> >::type *_; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,LanternRiteFireworksStageData> >::type *stage_data; // [rsp+38h] [rbp-8h]

  __for_range = &this->fireworks_stage_map_;
  __for_begin._M_node = std::map<unsigned int,LanternRiteFireworksStageData>::begin(&this->fireworks_stage_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,LanternRiteFireworksStageData>::end(&this->fireworks_stage_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v7 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,LanternRiteFireworksStageData>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,LanternRiteFireworksStageData>(v7);
    stage_data = (std::tuple_element<1,const std::pair<unsigned int const,LanternRiteFireworksStageData> >::type *)std::get<1ul,unsigned int const,LanternRiteFireworksStageData>(v7);
    v2 = proto::LanternRiteFireworksBin::add_stage_bin_list(fireworks_bin);
    LanternRiteFireworksStageData::toBin(stage_data, v2);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,LanternRiteFireworksStageData>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 1923: range 0000000015FF8268-0000000015FF831F
int32_t __cdecl LanternRiteActivity::fireworksToClient(
        const LanternRiteActivity *const this,
        proto::LanternRiteFireworksInfo *fireworks_info)
{
  proto::LanternRiteFireworksStageInfo *v2; // rax
  std::map<unsigned int,LanternRiteFireworksStageData>::const_iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::map<unsigned int,LanternRiteFireworksStageData>::const_iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  const std::map<unsigned int,LanternRiteFireworksStageData> *__for_range; // [rsp+20h] [rbp-20h]
  const std::pair<unsigned int const,LanternRiteFireworksStageData> *v7; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,LanternRiteFireworksStageData> >::type *_; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,LanternRiteFireworksStageData> >::type *stage_data; // [rsp+38h] [rbp-8h]

  __for_range = &this->fireworks_stage_map_;
  __for_begin._M_node = std::map<unsigned int,LanternRiteFireworksStageData>::begin(&this->fireworks_stage_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,LanternRiteFireworksStageData>::end(&this->fireworks_stage_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v7 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,LanternRiteFireworksStageData>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,LanternRiteFireworksStageData>(v7);
    stage_data = (std::tuple_element<1,const std::pair<unsigned int const,LanternRiteFireworksStageData> >::type *)std::get<1ul,unsigned int const,LanternRiteFireworksStageData>(v7);
    v2 = proto::LanternRiteFireworksInfo::add_stage_info_list(fireworks_info);
    LanternRiteFireworksStageData::toClient(stage_data, v2);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,LanternRiteFireworksStageData>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 1932: range 0000000015FF8320-0000000015FF8906
void __cdecl LanternRiteActivity::initFireworksInfoOnStart(LanternRiteActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  uint32_t v4; // ecx
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v5; // rdx
  std::map<unsigned int,LanternRiteFireworksChallengeData> *p_challenge_map; // r14
  LanternRiteFireworksChallengeData *v7; // rax
  unsigned int *v8; // rcx
  LanternRiteFireworksChallengeData *v9; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,LanternRiteFireworksChallengeData> >,bool> v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  common::milog::MiLogStream *v16; // r12
  unsigned int val; // [rsp+14h] [rbp-11Ch] BYREF
  std::unordered_map<unsigned int,data::LanV2FireworksStageDataExcelConfig>::const_iterator __for_begin; // [rsp+18h] [rbp-118h] BYREF
  std::unordered_map<unsigned int,data::LanV2FireworksStageDataExcelConfig>::const_iterator __for_end; // [rsp+20h] [rbp-110h] BYREF
  std::vector<unsigned int>::const_iterator __for_begin_0; // [rsp+28h] [rbp-108h] BYREF
  std::vector<unsigned int>::const_iterator __for_end_0; // [rsp+30h] [rbp-100h] BYREF
  const ActivitySeaLampExcelConfigMgr *config_mgr; // [rsp+38h] [rbp-F8h]
  const std::unordered_map<unsigned int,data::LanV2FireworksStageDataExcelConfig> *__for_range; // [rsp+40h] [rbp-F0h]
  const std::pair<unsigned int const,data::LanV2FireworksStageDataExcelConfig> *v24; // [rsp+48h] [rbp-E8h]
  std::tuple_element<0,const std::pair<unsigned int const,data::LanV2FireworksStageDataExcelConfig> >::type *stage_id; // [rsp+50h] [rbp-E0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::LanV2FireworksStageDataExcelConfig> >::type *stage_config; // [rsp+58h] [rbp-D8h]
  LanternRiteFireworksStageData *stage; // [rsp+60h] [rbp-D0h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+68h] [rbp-C8h]
  std::shared_ptr<Config> v29; // [rsp+70h] [rbp-C0h] BYREF
  common::milog::MiLogStream v30; // [rsp+80h] [rbp-B0h] BYREF
  char v31[144]; // [rsp+A0h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 17 challenge_id:1940 64 8 19 challenge_data:1942";
  *(_QWORD *)(v1 + 16) = LanternRiteActivity::initFireworksInfoOnStart;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202116352;
  std::map<unsigned int,LanternRiteFireworksStageData>::clear(&this->fireworks_stage_map_);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v29);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v29)->design_config.txt_config_mgr.activity_sea_lamp_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v29);
  __for_range = &config_mgr->lan_v2_fireworks_stage_data_excel_config_map;
  __for_begin._M_cur = std::unordered_map<unsigned int,data::LanV2FireworksStageDataExcelConfig>::begin(&config_mgr->lan_v2_fireworks_stage_data_excel_config_map)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,data::LanV2FireworksStageDataExcelConfig>::end(&config_mgr->lan_v2_fireworks_stage_data_excel_config_map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::LanV2FireworksStageDataExcelConfig>,false>(
            &__for_begin,
            &__for_end) )
  {
    v24 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::LanV2FireworksStageDataExcelConfig>,false,false>::operator*(&__for_begin);
    stage_id = std::get<0ul,unsigned int const,data::LanV2FireworksStageDataExcelConfig>(v24);
    stage_config = (std::tuple_element<1,const std::pair<unsigned int const,data::LanV2FireworksStageDataExcelConfig> >::type *)std::get<1ul,unsigned int const,data::LanV2FireworksStageDataExcelConfig>(v24);
    stage = std::map<unsigned int,LanternRiteFireworksStageData>::operator[](&this->fireworks_stage_map_, stage_id);
    if ( *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)stage_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v4 = *stage_id;
    if ( *(_BYTE *)(((unsigned __int64)stage >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)stage >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(stage);
    }
    stage->stage_id = v4;
    if ( *(_BYTE *)(((unsigned __int64)&stage->is_open >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)stage + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&stage->is_open >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(&stage->is_open);
    }
    stage->is_open = 0;
    __for_range_0 = &stage_config->challenge_id_list;
    __for_begin_0._M_current = std::vector<unsigned int>::begin(&stage_config->challenge_id_list)._M_current;
    __for_end_0._M_current = std::vector<unsigned int>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin_0, &__for_end_0) )
    {
      v5 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin_0);
      if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v1 + 48) = *v5;
      *(_DWORD *)(v1 + 64) = 0;
      *(_DWORD *)(v1 + 68) = 0;
      *(_DWORD *)(v1 + 64) = *(_DWORD *)(v1 + 48);
      *(_DWORD *)(v1 + 68) = 0;
      p_challenge_map = &stage->challenge_map;
      v7 = std::move<LanternRiteFireworksChallengeData &>((LanternRiteFireworksChallengeData *)(v1 + 64));
      v10 = std::map<unsigned int,LanternRiteFireworksChallengeData>::emplace<unsigned int &,LanternRiteFireworksChallengeData>(
              p_challenge_map,
              (unsigned int *)(v1 + 48),
              v7,
              v8,
              v9);
      if ( !v10.second )
      {
        common::milog::MiLogStream::create(
          &v30,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/lantern_rite_activity.cpp",
          "initFireworksInfoOnStart",
          1947);
        v11 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                &v30,
                (const char (*)[39])"[LanternRite] duplicated challenge_id:");
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v11,
                (const unsigned int *)(v1 + 48));
        v13 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v12, (const char (*)[11])" stage_id:");
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, stage_id);
        v15 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v14, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v30);
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin_0);
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::LanV2FireworksStageDataExcelConfig>,false,false>::operator++(&__for_begin);
  }
  common::milog::MiLogStream::create(
    &v30,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/lantern_rite_activity.cpp",
    "initFireworksInfoOnStart",
    1951);
  v16 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
          &v30,
          (const char (*)[45])"[LanternRite] initFireworksInfoOnStart, uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &val);
  common::milog::MiLogStream::~MiLogStream(&v30);
  if ( v31 == (char *)v1 )
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

// Line 1955: range 0000000015FF8908-0000000015FF8E44
LanternRiteFireworksChallengeData *__fastcall LanternRiteActivity::findOpeningFireworksChallenge(
        LanternRiteActivity *const this,
        uint32_t stage_id,
        uint32_t challenge_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rbx
  std::_Rb_tree_iterator<std::pair<unsigned int const,LanternRiteFireworksStageData> >::pointer v9; // rax
  bool *p_is_open; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  LanternRiteFireworksChallengeData *result; // rax
  unsigned int val; // [rsp+1Ch] [rbp-D4h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,LanternRiteFireworksStageData> >::_Self __y; // [rsp+20h] [rbp-D0h] BYREF
  LanternRiteFireworksStageData *stage; // [rsp+28h] [rbp-C8h]
  common::milog::MiLogStream v22; // [rsp+30h] [rbp-C0h] BYREF
  char v23[160]; // [rsp+50h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 4 13 stage_id:1954 48 4 17 challenge_id:1954 64 8 15 stage_iter:1956 96 8 19 challenge_iter:1968";
  *(_QWORD *)(v3 + 16) = LanternRiteActivity::findOpeningFireworksChallenge;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 32) = stage_id;
  *(_DWORD *)(v3 + 48) = challenge_id;
  *(std::map<unsigned int,LanternRiteFireworksStageData>::iterator *)(v3 + 64) = std::map<unsigned int,LanternRiteFireworksStageData>::find(
                                                                                   &this->fireworks_stage_map_,
                                                                                   (const std::map<unsigned int,LanternRiteFireworksStageData>::key_type *)(v3 + 32));
  __y._M_node = std::map<unsigned int,LanternRiteFireworksStageData>::end(&this->fireworks_stage_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,LanternRiteFireworksStageData> >::_Self *)(v3 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/lantern_rite_activity.cpp",
      "findOpeningFireworksChallenge",
      1959);
    v6 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
           &v22,
           (const char (*)[51])"[LanternRite] fireworks stage not found, stage_id:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 32));
    v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v7, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_17:
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream(&v22);
    result = 0LL;
    goto LABEL_19;
  }
  v9 = std::_Rb_tree_iterator<std::pair<unsigned int const,LanternRiteFireworksStageData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,LanternRiteFireworksStageData> > *const)(v3 + 64));
  stage = &v9->second;
  p_is_open = &v9->second.is_open;
  if ( *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)p_is_open & 7) >= *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(p_is_open);
  }
  if ( !stage->is_open )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/lantern_rite_activity.cpp",
      "findOpeningFireworksChallenge",
      1965);
    v11 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
            &v22,
            (const char (*)[50])"[LanternRite] fireworks stage not open, stage_id:");
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 32));
    v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v12, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_17;
  }
  *(std::map<unsigned int,LanternRiteFireworksChallengeData>::iterator *)(v3 + 96) = std::map<unsigned int,LanternRiteFireworksChallengeData>::find(
                                                                                       &stage->challenge_map,
                                                                                       (const std::map<unsigned int,LanternRiteFireworksChallengeData>::key_type *)(v3 + 48));
  __y._M_node = std::map<unsigned int,LanternRiteFireworksChallengeData>::end(&stage->challenge_map)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,LanternRiteFireworksChallengeData> >::_Self *)(v3 + 96),
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,LanternRiteFireworksChallengeData> >::_Self *)&__y) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/lantern_rite_activity.cpp",
      "findOpeningFireworksChallenge",
      1971);
    v13 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
            &v22,
            (const char (*)[49])"[LanternRite] challenge not found, challenge_id:");
    v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 48));
    v15 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v14, (const char (*)[11])" stage_id:");
    v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 32));
    v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v16, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_17;
  }
  result = &std::_Rb_tree_iterator<std::pair<unsigned int const,LanternRiteFireworksChallengeData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,LanternRiteFireworksChallengeData> > *const)(v3 + 96))->second;
LABEL_19:
  if ( v23 == (char *)v3 )
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

// Line 1978: range 0000000015FF8E46-0000000015FF91EA
uint32_t __cdecl LanternRiteActivity::getAddStaminaValue(LanternRiteActivity *const this)
{
  bool *p_is_open; // rax
  const ActivitySeaLampExcelConfigMgr *v2; // rcx
  common::milog::MiLogStream *v3; // rax
  uint32_t best_score; // ecx
  uint32_t add_stamina_value; // [rsp+1Ch] [rbp-B4h]
  std::map<unsigned int,LanternRiteFireworksStageData>::iterator __for_begin; // [rsp+20h] [rbp-B0h] BYREF
  std::map<unsigned int,LanternRiteFireworksStageData>::iterator __for_end; // [rsp+28h] [rbp-A8h] BYREF
  std::map<unsigned int,LanternRiteFireworksChallengeData>::const_iterator __for_begin_0; // [rsp+30h] [rbp-A0h] BYREF
  std::map<unsigned int,LanternRiteFireworksChallengeData>::const_iterator __for_end_0; // [rsp+38h] [rbp-98h] BYREF
  const ActivitySeaLampExcelConfigMgr *config_mgr; // [rsp+40h] [rbp-90h]
  std::map<unsigned int,LanternRiteFireworksStageData> *__for_range; // [rsp+48h] [rbp-88h]
  const std::pair<unsigned int const,LanternRiteFireworksStageData> *v13; // [rsp+50h] [rbp-80h]
  std::tuple_element<0,const std::pair<unsigned int const,LanternRiteFireworksStageData> >::type *_; // [rsp+58h] [rbp-78h]
  std::tuple_element<1,const std::pair<unsigned int const,LanternRiteFireworksStageData> >::type *stage_data; // [rsp+60h] [rbp-70h]
  const std::map<unsigned int,LanternRiteFireworksChallengeData> *__for_range_0; // [rsp+68h] [rbp-68h]
  const std::pair<unsigned int const,LanternRiteFireworksChallengeData> *v17; // [rsp+70h] [rbp-60h]
  std::tuple_element<0,const std::pair<unsigned int const,LanternRiteFireworksChallengeData> >::type *__0; // [rsp+78h] [rbp-58h]
  std::tuple_element<1,const std::pair<unsigned int const,LanternRiteFireworksChallengeData> >::type *challenge_data; // [rsp+80h] [rbp-50h]
  const data::LanV2FireworksChallengeDataExcelConfig *fireworks_challenge_config_ptr; // [rsp+88h] [rbp-48h]
  std::shared_ptr<Config> v21; // [rsp+90h] [rbp-40h] BYREF
  common::milog::MiLogStream v22; // [rsp+A0h] [rbp-30h] BYREF

  add_stamina_value = 0;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v21);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21)->design_config.txt_config_mgr.activity_sea_lamp_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v21);
  __for_range = &this->fireworks_stage_map_;
  __for_begin._M_node = std::map<unsigned int,LanternRiteFireworksStageData>::begin(&this->fireworks_stage_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,LanternRiteFireworksStageData>::end(&this->fireworks_stage_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v13 = std::_Rb_tree_iterator<std::pair<unsigned int const,LanternRiteFireworksStageData>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,LanternRiteFireworksStageData>(v13);
    stage_data = (std::tuple_element<1,const std::pair<unsigned int const,LanternRiteFireworksStageData> >::type *)std::get<1ul,unsigned int const,LanternRiteFireworksStageData>(v13);
    p_is_open = &stage_data->is_open;
    if ( *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_open & 7) >= *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(p_is_open);
    }
    if ( stage_data->is_open )
    {
      __for_range_0 = &stage_data->challenge_map;
      __for_begin_0._M_node = std::map<unsigned int,LanternRiteFireworksChallengeData>::begin(&stage_data->challenge_map)._M_node;
      __for_end_0._M_node = std::map<unsigned int,LanternRiteFireworksChallengeData>::end(__for_range_0)._M_node;
      while ( std::operator!=(&__for_begin_0, &__for_end_0) )
      {
        v17 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,LanternRiteFireworksChallengeData>>::operator*(&__for_begin_0);
        __0 = std::get<0ul,unsigned int const,LanternRiteFireworksChallengeData>(v17);
        challenge_data = (std::tuple_element<1,const std::pair<unsigned int const,LanternRiteFireworksChallengeData> >::type *)std::get<1ul,unsigned int const,LanternRiteFireworksChallengeData>(v17);
        v2 = config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)challenge_data >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)challenge_data & 7) + 3) >= *(_BYTE *)(((unsigned __int64)challenge_data >> 3)
                                                                           + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        fireworks_challenge_config_ptr = data::ActivitySeaLampExcelConfigMgrBase::findLanV2FireworksChallengeDataExcelConfig(
                                           v2,
                                           challenge_data->challenge_id);
        if ( fireworks_challenge_config_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&challenge_data->best_score >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)challenge_data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&challenge_data->best_score >> 3)
                                                                         + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          best_score = challenge_data->best_score;
          if ( *(_BYTE *)(((unsigned __int64)&fireworks_challenge_config_ptr->unlock_ability_score >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&fireworks_challenge_config_ptr->unlock_ability_score >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          if ( best_score >= fireworks_challenge_config_ptr->unlock_ability_score )
          {
            if ( *(_BYTE *)(((unsigned __int64)&fireworks_challenge_config_ptr->add_stamina_value >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&fireworks_challenge_config_ptr->add_stamina_value >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            add_stamina_value += fireworks_challenge_config_ptr->add_stamina_value;
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v22,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/activity/lantern_rite_activity.cpp",
            "getAddStaminaValue",
            1992);
          v3 = common::milog::MiLogStream::operator<<<char [77],(char *[77])0>(
                 &v22,
                 (const char (*)[77])"[LanternRite] findLanV2FireworksChallengeDataExcelConfig fail, challenge_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v3,
            (const unsigned int *)challenge_data);
          common::milog::MiLogStream::~MiLogStream(&v22);
        }
        std::_Rb_tree_const_iterator<std::pair<unsigned int const,LanternRiteFireworksChallengeData>>::operator++(&__for_begin_0);
      }
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,LanternRiteFireworksStageData>>::operator++(&__for_begin);
  }
  return add_stamina_value;
};

// Line 2005: range 0000000015FF91EC-0000000015FF9549
uint32_t __cdecl LanternRiteActivity::getFireElementAdditionRatio(
        LanternRiteActivity *const this,
        uint32_t fire_element_value)
{
  const ActivitySeaLampExcelConfigMgr *v2; // rcx
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v5; // rax
  std::vector<unsigned int>::const_reference v6; // rdx
  std::vector<unsigned int>::const_reference v7; // rdx
  char v8; // al
  uint32_t fire_element_addition_ratio; // [rsp+1Ch] [rbp-74h]
  std::vector<data::FireElementAdditionConfig>::const_iterator __for_begin; // [rsp+20h] [rbp-70h] BYREF
  std::vector<data::FireElementAdditionConfig>::const_iterator __for_end; // [rsp+28h] [rbp-68h] BYREF
  const ActivitySeaLampExcelConfigMgr *config_mgr; // [rsp+30h] [rbp-60h]
  const data::LanV2FireworksOverallDataExcelConfig *fireworks_overal_config_ptr; // [rsp+38h] [rbp-58h]
  const std::vector<data::FireElementAdditionConfig> *__for_range; // [rsp+40h] [rbp-50h]
  const data::FireElementAdditionConfig *fire_element_addition_config; // [rsp+48h] [rbp-48h]
  std::shared_ptr<Config> v16; // [rsp+50h] [rbp-40h] BYREF
  common::milog::MiLogStream v17; // [rsp+60h] [rbp-30h] BYREF

  fire_element_addition_ratio = 0;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v16);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v16)->design_config.txt_config_mgr.activity_sea_lamp_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v16);
  v2 = config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  fireworks_overal_config_ptr = data::ActivitySeaLampExcelConfigMgrBase::findLanV2FireworksOverallDataExcelConfig(
                                  v2,
                                  this->schedule_id_);
  if ( fireworks_overal_config_ptr )
  {
    __for_range = &fireworks_overal_config_ptr->fire_element_addition_list;
    __for_begin._M_current = std::vector<data::FireElementAdditionConfig>::begin(&fireworks_overal_config_ptr->fire_element_addition_list)._M_current;
    __for_end._M_current = std::vector<data::FireElementAdditionConfig>::end(&fireworks_overal_config_ptr->fire_element_addition_list)._M_current;
    while ( __gnu_cxx::operator!=<data::FireElementAdditionConfig const*,std::vector<data::FireElementAdditionConfig>>(
              &__for_begin,
              &__for_end) )
    {
      fire_element_addition_config = __gnu_cxx::__normal_iterator<data::FireElementAdditionConfig const*,std::vector<data::FireElementAdditionConfig>>::operator*(&__for_begin);
      if ( std::vector<unsigned int>::size(&fire_element_addition_config->range) == 2 )
      {
        v6 = std::vector<unsigned int>::operator[](&fire_element_addition_config->range, 0LL);
        if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( fire_element_value < *v6 )
          goto LABEL_16;
        v7 = std::vector<unsigned int>::operator[](&fire_element_addition_config->range, 1uLL);
        if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( fire_element_value >= *v7 )
LABEL_16:
          v8 = 0;
        else
          v8 = 1;
        if ( v8 )
        {
          if ( *(_BYTE *)(((unsigned __int64)&fire_element_addition_config->ratio >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&fire_element_addition_config->ratio >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          return fire_element_addition_config->ratio;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v17,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/lantern_rite_activity.cpp",
          "getFireElementAdditionRatio",
          2019);
        v5 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
               &v17,
               (const char (*)[60])"[LanternRite] fire_element_addition range incorrect, range:");
        common::milog::MiLogStream::operator<<<unsigned int>(v5, &fire_element_addition_config->range);
        common::milog::MiLogStream::~MiLogStream(&v17);
      }
      __gnu_cxx::__normal_iterator<data::FireElementAdditionConfig const*,std::vector<data::FireElementAdditionConfig>>::operator++(&__for_begin);
    }
    return fire_element_addition_ratio;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/lantern_rite_activity.cpp",
      "getFireElementAdditionRatio",
      2011);
    v3 = common::milog::MiLogStream::operator<<<char [74],(char *[74])0>(
           &v17,
           (const char (*)[74])"[LanternRite] findLanV2FireworksOverallDataExcelConfig fail, schedule_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &this->schedule_id_);
    common::milog::MiLogStream::~MiLogStream(&v17);
    return 0;
  }
};

// Line 2034: range 0000000015FF954A-0000000015FF9898
void __fastcall LanternRiteActivity::fillFireworksReformFactorInfo(
        LanternRiteActivity *const this,
        uint32_t challenge_id,
        google::protobuf::RepeatedPtrField<proto::LanternRiteFireworksReformFactorInfo> *factor_info_list)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  std::map<unsigned int,LanternRiteFireworksReformFactorData>::iterator __for_begin; // [rsp+28h] [rbp-B8h] BYREF
  std::map<unsigned int,LanternRiteFireworksReformFactorData>::iterator __for_end; // [rsp+30h] [rbp-B0h] BYREF
  std::map<unsigned int,LanternRiteFireworksReformFactorData> *__for_range; // [rsp+38h] [rbp-A8h]
  const std::pair<unsigned int const,LanternRiteFireworksReformFactorData> *v13; // [rsp+40h] [rbp-A0h]
  std::tuple_element<0,const std::pair<unsigned int const,LanternRiteFireworksReformFactorData> >::type *_; // [rsp+48h] [rbp-98h]
  std::tuple_element<1,const std::pair<unsigned int const,LanternRiteFireworksReformFactorData> >::type *factor_data; // [rsp+50h] [rbp-90h]
  proto::LanternRiteFireworksReformFactorInfo *factor_info; // [rsp+58h] [rbp-88h]
  common::milog::MiLogStream v17; // [rsp+60h] [rbp-80h] BYREF
  char v18[96]; // [rsp+80h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 17 challenge_id:2032";
  *(_QWORD *)(v3 + 16) = LanternRiteActivity::fillFireworksReformFactorInfo;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = challenge_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->fireworks_reform_Data_.challenge_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->fireworks_reform_Data_.challenge_id >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( this->fireworks_reform_Data_.challenge_id == *(_DWORD *)(v3 + 32) )
  {
    __for_range = &this->fireworks_reform_Data_.factor_map;
    __for_begin._M_node = std::map<unsigned int,LanternRiteFireworksReformFactorData>::begin(&this->fireworks_reform_Data_.factor_map)._M_node;
    __for_end._M_node = std::map<unsigned int,LanternRiteFireworksReformFactorData>::end(&this->fireworks_reform_Data_.factor_map)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v13 = std::_Rb_tree_iterator<std::pair<unsigned int const,LanternRiteFireworksReformFactorData>>::operator*(&__for_begin);
      _ = std::get<0ul,unsigned int const,LanternRiteFireworksReformFactorData>(v13);
      factor_data = (std::tuple_element<1,const std::pair<unsigned int const,LanternRiteFireworksReformFactorData> >::type *)std::get<1ul,unsigned int const,LanternRiteFireworksReformFactorData>(v13);
      factor_info = google::protobuf::RepeatedPtrField<proto::LanternRiteFireworksReformFactorInfo>::Add(factor_info_list);
      if ( *(_BYTE *)(((unsigned __int64)factor_data >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)factor_data & 7) + 3) >= *(_BYTE *)(((unsigned __int64)factor_data >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::LanternRiteFireworksReformFactorInfo::set_factor_id(factor_info, factor_data->factor_id);
      if ( *(_BYTE *)(((unsigned __int64)&factor_data->factor_value >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)factor_data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&factor_data->factor_value >> 3)
                                                                  + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::LanternRiteFireworksReformFactorInfo::set_factor_value(factor_info, factor_data->factor_value);
      std::_Rb_tree_iterator<std::pair<unsigned int const,LanternRiteFireworksReformFactorData>>::operator++(&__for_begin);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/lantern_rite_activity.cpp",
      "fillFireworksReformFactorInfo",
      2037);
    v6 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
           &v17,
           (const char (*)[56])"[LanternRite] challenge id not match, req challenge id:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 32));
    v8 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v7, (const char (*)[21])" local challenge id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
      v8,
      &this->fireworks_reform_Data_.challenge_id);
    common::milog::MiLogStream::~MiLogStream(&v17);
  }
  if ( v18 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 2049: range 0000000015FF989A-0000000015FF9FC2
void __cdecl LanternRiteActivity::fillFireworksReformSkillInfo(
        LanternRiteActivity *const this,
        google::protobuf::RepeatedPtrField<proto::LanternRiteFireworksReformSkillInfo> *skill_info_list)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v6; // rdx
  common::milog::MiLogStream *v7; // rax
  uint32_t open_day; // ecx
  uint32_t BeginTimeByOpenDay; // eax
  common::milog::MiLogStream *v10; // rax
  uint32_t best_score; // ecx
  std::unordered_map<unsigned int,data::LanV2FireworksSkillDataExcelConfig>::const_iterator __for_begin; // [rsp+10h] [rbp-150h] BYREF
  std::unordered_map<unsigned int,data::LanV2FireworksSkillDataExcelConfig>::const_iterator __for_end; // [rsp+18h] [rbp-148h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> __y; // [rsp+20h] [rbp-140h] BYREF
  const ActivitySeaLampExcelConfigMgr *config_mgr; // [rsp+28h] [rbp-138h]
  const std::unordered_map<unsigned int,data::LanV2FireworksSkillDataExcelConfig> *__for_range; // [rsp+30h] [rbp-130h]
  const std::pair<unsigned int const,data::LanV2FireworksSkillDataExcelConfig> *v17; // [rsp+38h] [rbp-128h]
  std::tuple_element<0,const std::pair<unsigned int const,data::LanV2FireworksSkillDataExcelConfig> >::type *skill_id; // [rsp+40h] [rbp-120h]
  std::tuple_element<1,const std::pair<unsigned int const,data::LanV2FireworksSkillDataExcelConfig> >::type *skill_config; // [rsp+48h] [rbp-118h]
  proto::LanternRiteFireworksReformSkillInfo *skill_info; // [rsp+50h] [rbp-110h]
  const data::LanV2FireworksStageDataExcelConfig *fireworks_stage_config_ptr; // [rsp+58h] [rbp-108h]
  LanternRiteFireworksChallengeData *challenge_data_ptr; // [rsp+60h] [rbp-100h]
  const data::LanV2FireworksChallengeDataExcelConfig *fireworks_challenge_config_ptr; // [rsp+68h] [rbp-F8h]
  std::shared_ptr<Config> v24; // [rsp+70h] [rbp-F0h] BYREF
  common::milog::MiLogStream v25; // [rsp+80h] [rbp-E0h] BYREF
  common::milog::MiLogStream v26; // [rsp+A0h] [rbp-C0h] BYREF
  common::milog::MiLogStream v27; // [rsp+C0h] [rbp-A0h] BYREF
  char v28[128]; // [rsp+E0h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 17 challenge_id:2062 48 4 13 stage_id:2070 64 8 9 iter:2064";
  *(_QWORD *)(v2 + 16) = LanternRiteActivity::fillFireworksReformSkillInfo;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -202116352;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v24);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v24)->design_config.txt_config_mgr.activity_sea_lamp_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v24);
  __for_range = &config_mgr->lan_v2_fireworks_skill_data_excel_config_map;
  __for_begin._M_cur = std::unordered_map<unsigned int,data::LanV2FireworksSkillDataExcelConfig>::begin(&config_mgr->lan_v2_fireworks_skill_data_excel_config_map)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,data::LanV2FireworksSkillDataExcelConfig>::end(&config_mgr->lan_v2_fireworks_skill_data_excel_config_map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::LanV2FireworksSkillDataExcelConfig>,false>(
            &__for_begin,
            &__for_end) )
  {
    v17 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::LanV2FireworksSkillDataExcelConfig>,false,false>::operator*(&__for_begin);
    skill_id = std::get<0ul,unsigned int const,data::LanV2FireworksSkillDataExcelConfig>(v17);
    skill_config = (std::tuple_element<1,const std::pair<unsigned int const,data::LanV2FireworksSkillDataExcelConfig> >::type *)std::get<1ul,unsigned int const,data::LanV2FireworksSkillDataExcelConfig>(v17);
    skill_info = google::protobuf::RepeatedPtrField<proto::LanternRiteFireworksReformSkillInfo>::Add(skill_info_list);
    if ( *(_BYTE *)(((unsigned __int64)skill_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)skill_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)skill_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::LanternRiteFireworksReformSkillInfo::set_skill_id(skill_info, *skill_id);
    proto::LanternRiteFireworksReformSkillInfo::set_is_unlock(skill_info, 0);
    if ( *(_BYTE *)(((unsigned __int64)&skill_config->unlock_challenge_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)skill_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&skill_config->unlock_challenge_id >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( !skill_config->unlock_challenge_id )
      goto LABEL_31;
    if ( *(_BYTE *)(((unsigned __int64)&skill_config->unlock_challenge_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)skill_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&skill_config->unlock_challenge_id >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 32) = skill_config->unlock_challenge_id;
    proto::LanternRiteFireworksReformSkillInfo::set_unlock_challenge_id(skill_info, *(_DWORD *)(v2 + 32));
    *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                    &config_mgr->fireworks_challenge_stage_map,
                                                                                    (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 32));
    __y._M_cur = std::unordered_map<unsigned int,unsigned int>::end(&config_mgr->fireworks_challenge_stage_map)._M_cur;
    if ( std::__detail::operator==<std::pair<unsigned int const,unsigned int>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 64),
           &__y) )
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/lantern_rite_activity.cpp",
        "fillFireworksReformSkillInfo",
        2067);
      v5 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
             &v25,
             (const char (*)[45])"[LanternRite] find stage fail, challenge_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v25);
      goto LABEL_32;
    }
    v6 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v6->second >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v6 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v6->second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 48) = v6->second;
    fireworks_stage_config_ptr = data::ActivitySeaLampExcelConfigMgrBase::findLanV2FireworksStageDataExcelConfig(
                                   config_mgr,
                                   *(_DWORD *)(v2 + 48));
    if ( !fireworks_stage_config_ptr )
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/lantern_rite_activity.cpp",
        "fillFireworksReformSkillInfo",
        2074);
      v7 = common::milog::MiLogStream::operator<<<char [69],(char *[69])0>(
             &v26,
             (const char (*)[69])"[LanternRite] findLanV2FireworksStageDataExcelConfig fail, stage_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v26);
      goto LABEL_32;
    }
    if ( *(_BYTE *)(((unsigned __int64)&fireworks_stage_config_ptr->open_day >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)fireworks_stage_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&fireworks_stage_config_ptr->open_day >> 3)
                                                                                + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    open_day = fireworks_stage_config_ptr->open_day;
    if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    BeginTimeByOpenDay = BaseActivity::getBeginTimeByOpenDay(this->schedule_id_, open_day);
    proto::LanternRiteFireworksReformSkillInfo::set_unlock_challenge_time(skill_info, BeginTimeByOpenDay);
    challenge_data_ptr = LanternRiteActivity::findOpeningFireworksChallenge(
                           this,
                           *(_DWORD *)(v2 + 48),
                           *(_DWORD *)(v2 + 32));
    if ( challenge_data_ptr )
    {
      fireworks_challenge_config_ptr = data::ActivitySeaLampExcelConfigMgrBase::findLanV2FireworksChallengeDataExcelConfig(
                                         config_mgr,
                                         *(_DWORD *)(v2 + 32));
      if ( !fireworks_challenge_config_ptr )
      {
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/lantern_rite_activity.cpp",
          "fillFireworksReformSkillInfo",
          2086);
        v10 = common::milog::MiLogStream::operator<<<char [77],(char *[77])0>(
                &v27,
                (const char (*)[77])"[LanternRite] findLanV2FireworksChallengeDataExcelConfig fail, challenge_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 32));
        common::milog::MiLogStream::~MiLogStream(&v27);
        goto LABEL_32;
      }
      if ( *(_BYTE *)(((unsigned __int64)&challenge_data_ptr->best_score >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)challenge_data_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&challenge_data_ptr->best_score >> 3)
                                                                         + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      best_score = challenge_data_ptr->best_score;
      if ( *(_BYTE *)(((unsigned __int64)&fireworks_challenge_config_ptr->unlock_ability_score >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&fireworks_challenge_config_ptr->unlock_ability_score >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( best_score >= fireworks_challenge_config_ptr->unlock_ability_score )
LABEL_31:
        proto::LanternRiteFireworksReformSkillInfo::set_is_unlock(skill_info, 1);
    }
LABEL_32:
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::LanV2FireworksSkillDataExcelConfig>,false,false>::operator++(&__for_begin);
  }
  if ( v28 == (char *)v2 )
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

// Line 2098: range 0000000015FF9FC4-0000000015FFA350
__int64 __fastcall LanternRiteActivity::openFireworksStage(LanternRiteActivity *const this, uint32_t stage_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,LanternRiteFireworksStageData> >::pointer v9; // rdx
  bool *p_is_open; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r13
  unsigned int val; // [rsp+14h] [rbp-ACh] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,LanternRiteFireworksStageData> >::_Self __y; // [rsp+18h] [rbp-A8h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 48 4 13 stage_id:2097 64 8 15 stage_iter:2099";
  *(_QWORD *)(v2 + 16) = LanternRiteActivity::openFireworksStage;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = stage_id;
  *(std::map<unsigned int,LanternRiteFireworksStageData>::iterator *)(v2 + 64) = std::map<unsigned int,LanternRiteFireworksStageData>::find(
                                                                                   &this->fireworks_stage_map_,
                                                                                   (const std::map<unsigned int,LanternRiteFireworksStageData>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,LanternRiteFireworksStageData>::end(&this->fireworks_stage_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,LanternRiteFireworksStageData> >::_Self *)(v2 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/lantern_rite_activity.cpp",
      "openFireworksStage",
      2102);
    v5 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
           &v16,
           (const char (*)[51])"[LanternRite] fireworks stage not found, stage_id:");
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
    v9 = std::_Rb_tree_iterator<std::pair<unsigned int const,LanternRiteFireworksStageData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,LanternRiteFireworksStageData> > *const)(v2 + 64));
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
      "./src/player/activity/lantern_rite_activity.cpp",
      "openFireworksStage",
      2106);
    v11 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
            &v16,
            (const char (*)[44])"[LanternRite] openFireworksStage, stage_id:");
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

// Line 2112: range 0000000015FFA352-0000000015FFAA9A
__int64 __fastcall LanternRiteActivity::getFireworksReformFactorScore(
        LanternRiteActivity *const this,
        uint32_t factor_id,
        uint32_t factor_value)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  const data::ActivitySeaLampExcelConfigMgrBase *v6; // rcx
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  std::vector<unsigned int>::const_reference v13; // rdx
  std::vector<unsigned int>::const_reference v14; // rdx
  std::vector<unsigned int>::const_reference v15; // rdx
  int v16; // r14d
  std::vector<unsigned int>::const_reference v17; // rdx
  __gnu_cxx::__promote_2<float,int,float,double>::__type v18; // xmm0_8
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  signed int diff_factor_value; // [rsp+10h] [rbp-E0h]
  float offset_value; // [rsp+14h] [rbp-DCh]
  ActivitySeaLampExcelConfigMgr *config_mgr; // [rsp+18h] [rbp-D8h]
  const data::LanV2FireworksOverallDataExcelConfig *fireworks_overal_config_ptr; // [rsp+20h] [rbp-D0h]
  const data::LanV2FireworksFactorDataExcelConfig *fireworks_factor_config_ptr; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<Config> v30; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v31; // [rsp+40h] [rbp-B0h] BYREF
  char v32[144]; // [rsp+60h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 17 factor_score:2132 48 4 14 factor_id:2111 64 4 17 factor_value:2111";
  *(_QWORD *)(v3 + 16) = LanternRiteActivity::getFireworksReformFactorScore;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 48) = factor_id;
  *(_DWORD *)(v3 + 64) = factor_value;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v30);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v30)->design_config.txt_config_mgr.activity_sea_lamp_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v30);
  v6 = config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  fireworks_overal_config_ptr = data::ActivitySeaLampExcelConfigMgrBase::findLanV2FireworksOverallDataExcelConfig(
                                  v6,
                                  this->schedule_id_);
  if ( fireworks_overal_config_ptr )
  {
    fireworks_factor_config_ptr = data::ActivitySeaLampExcelConfigMgrBase::findLanV2FireworksFactorDataExcelConfig(
                                    config_mgr,
                                    *(_DWORD *)(v3 + 48));
    if ( fireworks_factor_config_ptr )
    {
      if ( std::vector<unsigned int>::size(&fireworks_factor_config_ptr->perfect_range) == 2 )
      {
        *(_DWORD *)(v3 + 32) = 0;
        if ( *(_DWORD *)(v3 + 64) )
        {
          diff_factor_value = 0;
          v13 = std::vector<unsigned int>::operator[](&fireworks_factor_config_ptr->perfect_range, 0LL);
          if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          if ( *v13 <= *(_DWORD *)(v3 + 64) )
          {
            v15 = std::vector<unsigned int>::operator[](&fireworks_factor_config_ptr->perfect_range, 1uLL);
            if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            if ( *v15 < *(_DWORD *)(v3 + 64) )
            {
              v16 = *(_DWORD *)(v3 + 64);
              v17 = std::vector<unsigned int>::operator[](&fireworks_factor_config_ptr->perfect_range, 1uLL);
              if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              diff_factor_value = v16 - *v17;
            }
          }
          else
          {
            v14 = std::vector<unsigned int>::operator[](&fireworks_factor_config_ptr->perfect_range, 0LL);
            if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            diff_factor_value = *v14 - *(_DWORD *)(v3 + 64);
          }
          if ( *(_BYTE *)(((unsigned __int64)&fireworks_overal_config_ptr->score_formula_offset >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)fireworks_overal_config_ptr + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&fireworks_overal_config_ptr->score_formula_offset >> 3)
                                                                                       + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          offset_value = fireworks_overal_config_ptr->score_formula_offset - (float)diff_factor_value;
          if ( *(_BYTE *)(((unsigned __int64)&fireworks_overal_config_ptr->score_formula_exponent >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&fireworks_overal_config_ptr->score_formula_exponent >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          v18 = std::pow<float,int>(fireworks_overal_config_ptr->score_formula_exponent * offset_value, 2);
          *(_DWORD *)(v3 + 32) = (int)floor(v18 - offset_value);
        }
        common::milog::MiLogStream::create(
          &v31,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/lantern_rite_activity.cpp",
          "getFireworksReformFactorScore",
          2147);
        v19 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                &v31,
                (const char (*)[26])"[LanternRite] factor_id: ");
        v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v19,
                (const unsigned int *)(v3 + 48));
        v21 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v20, (const char (*)[15])" factor_value:");
        v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v21,
                (const unsigned int *)(v3 + 64));
        v23 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v22, (const char (*)[15])" factor_score:");
        common::milog::MiLogStream::operator<<<int,(int *)0>(v23, (const int *)(v3 + 32));
        common::milog::MiLogStream::~MiLogStream(&v31);
        result = *(unsigned int *)(v3 + 32);
        if ( (int)result < 0 )
          result = 0LL;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v31,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/lantern_rite_activity.cpp",
          "getFireworksReformFactorScore",
          2128);
        v10 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
                &v31,
                (const char (*)[60])"[LanternRite] factor perfect range config error, factor_id:");
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v10,
                (const unsigned int *)(v3 + 48));
        v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                v11,
                (const char (*)[16])" perfect_range:");
        common::milog::MiLogStream::operator<<<unsigned int>(v12, &fireworks_factor_config_ptr->perfect_range);
        common::milog::MiLogStream::~MiLogStream(&v31);
        result = 0LL;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v31,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/lantern_rite_activity.cpp",
        "getFireworksReformFactorScore",
        2123);
      v9 = common::milog::MiLogStream::operator<<<char [71],(char *[71])0>(
             &v31,
             (const char (*)[71])"[LanternRite] findLanV2FireworksFactorDataExcelConfig fail, factor_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v31);
      result = 0LL;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v31,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/lantern_rite_activity.cpp",
      "getFireworksReformFactorScore",
      2117);
    v7 = common::milog::MiLogStream::operator<<<char [74],(char *[74])0>(
           &v31,
           (const char (*)[74])"[LanternRite] findLanV2FireworksOverallDataExcelConfig fail, schedule_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->schedule_id_);
    common::milog::MiLogStream::~MiLogStream(&v31);
    result = 0LL;
  }
  if ( v32 == (char *)v3 )
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

// Line 2152: range 0000000015FFAA9C-0000000015FFB299
int32_t __cdecl LanternRiteActivity::startFireworksReform(
        LanternRiteActivity *const this,
        const proto::LanternRiteStartFireworksReformReq *req,
        proto::LanternRiteStartFireworksReformRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  int32_t result; // eax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  uint32_t FireElementAdditionRatio; // edx
  const ActivitySeaLampExcelConfigMgr *v12; // rcx
  common::milog::MiLogStream *v13; // rax
  uint32_t ChallengeScore; // edx
  google::protobuf::RepeatedPtrField<proto::LanternRiteFireworksReformFactorInfo> *v15; // rdx
  google::protobuf::RepeatedPtrField<proto::LanternRiteFireworksReformSkillInfo> *v16; // rdx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  std::set<unsigned int>::value_type __x; // [rsp+2Ch] [rbp-104h] BYREF
  uint32_t init_fire_element_value; // [rsp+30h] [rbp-100h]
  uint32_t stamina_value; // [rsp+34h] [rbp-FCh]
  google::protobuf::RepeatedPtrField<proto::LanternRiteFireworksReformSkillInfo>::const_iterator __for_begin; // [rsp+38h] [rbp-F8h] BYREF
  google::protobuf::RepeatedPtrField<proto::LanternRiteFireworksReformSkillInfo>::const_iterator __for_end; // [rsp+40h] [rbp-F0h] BYREF
  const ActivitySeaLampExcelConfigMgr *config_mgr; // [rsp+48h] [rbp-E8h]
  const data::LanV2FireworksChallengeDataExcelConfig *fireworks_challenge_config_ptr; // [rsp+50h] [rbp-E0h]
  const data::LanV2FireworksOverallDataExcelConfig *fireworks_overal_config_ptr; // [rsp+58h] [rbp-D8h]
  const google::protobuf::RepeatedPtrField<proto::LanternRiteFireworksReformSkillInfo> *__for_range; // [rsp+60h] [rbp-D0h]
  const proto::LanternRiteFireworksReformSkillInfo *skill_info; // [rsp+68h] [rbp-C8h]
  std::shared_ptr<Config> v31; // [rsp+70h] [rbp-C0h] BYREF
  common::milog::MiLogStream v32; // [rsp+80h] [rbp-B0h] BYREF
  char v33[144]; // [rsp+A0h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 13 stage_id:2159 64 4 17 challenge_id:2160";
  *(_QWORD *)(v3 + 16) = LanternRiteActivity::startFireworksReform;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116348;
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  if ( this->is_content_closed_ )
  {
    common::milog::MiLogStream::create(
      &v32,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/lantern_rite_activity.cpp",
      "startFireworksReform",
      2155);
    common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
      &v32,
      (const char (*)[45])"[LanternRite] fireworks reform content close");
    common::milog::MiLogStream::~MiLogStream(&v32);
    result = 10101;
  }
  else
  {
    *(_DWORD *)(v3 + 48) = proto::LanternRiteStartFireworksReformReq::stage_id(req);
    *(_DWORD *)(v3 + 64) = proto::LanternRiteStartFireworksReformReq::challenge_id(req);
    proto::LanternRiteStartFireworksReformRsp::set_stage_id(rsp_0, *(_DWORD *)(v3 + 48));
    proto::LanternRiteStartFireworksReformRsp::set_challenge_id(rsp_0, *(_DWORD *)(v3 + 64));
    if ( LanternRiteActivity::findOpeningFireworksChallenge(this, *(_DWORD *)(v3 + 48), *(_DWORD *)(v3 + 64)) )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v31);
      config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v31)->design_config.txt_config_mgr.activity_sea_lamp_config_mgr;
      std::shared_ptr<Config>::~shared_ptr(&v31);
      fireworks_challenge_config_ptr = data::ActivitySeaLampExcelConfigMgrBase::findLanV2FireworksChallengeDataExcelConfig(
                                         config_mgr,
                                         *(_DWORD *)(v3 + 64));
      if ( fireworks_challenge_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&fireworks_challenge_config_ptr->init_fire_element_value >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&fireworks_challenge_config_ptr->init_fire_element_value >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        init_fire_element_value = fireworks_challenge_config_ptr->init_fire_element_value;
        proto::LanternRiteStartFireworksReformRsp::set_fire_element_value(rsp_0, init_fire_element_value);
        FireElementAdditionRatio = LanternRiteActivity::getFireElementAdditionRatio(this, init_fire_element_value);
        proto::LanternRiteStartFireworksReformRsp::set_fire_element_addition_ratio(rsp_0, FireElementAdditionRatio);
        v12 = config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        fireworks_overal_config_ptr = data::ActivitySeaLampExcelConfigMgrBase::findLanV2FireworksOverallDataExcelConfig(
                                        v12,
                                        this->schedule_id_);
        if ( fireworks_overal_config_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&fireworks_overal_config_ptr->init_stamina_value >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)fireworks_overal_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&fireworks_overal_config_ptr->init_stamina_value >> 3)
                                                                                       + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          stamina_value = fireworks_overal_config_ptr->init_stamina_value;
          stamina_value += LanternRiteActivity::getAddStaminaValue(this);
          proto::LanternRiteStartFireworksReformRsp::set_stamina_value(rsp_0, stamina_value);
          LanternRiteFireworksReformData::start(
            &this->fireworks_reform_Data_,
            *(_DWORD *)(v3 + 48),
            *(_DWORD *)(v3 + 64),
            init_fire_element_value,
            stamina_value);
          ChallengeScore = LanternRiteFireworksReformData::getChallengeScore(&this->fireworks_reform_Data_);
          proto::LanternRiteStartFireworksReformRsp::set_reform_score(rsp_0, ChallengeScore);
          v15 = proto::LanternRiteStartFireworksReformRsp::mutable_factor_info_list(rsp_0);
          LanternRiteActivity::fillFireworksReformFactorInfo(this, *(_DWORD *)(v3 + 64), v15);
          v16 = proto::LanternRiteStartFireworksReformRsp::mutable_skill_info_list(rsp_0);
          LanternRiteActivity::fillFireworksReformSkillInfo(this, v16);
          __for_range = proto::LanternRiteStartFireworksReformRsp::skill_info_list(rsp_0);
          __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::LanternRiteFireworksReformSkillInfo>::begin(__for_range).it_;
          __for_end.it_ = google::protobuf::RepeatedPtrField<proto::LanternRiteFireworksReformSkillInfo>::end(__for_range).it_;
          while ( google::protobuf::internal::RepeatedPtrIterator<proto::LanternRiteFireworksReformSkillInfo const>::operator!=(
                    &__for_begin,
                    &__for_end) )
          {
            skill_info = google::protobuf::internal::RepeatedPtrIterator<proto::LanternRiteFireworksReformSkillInfo const>::operator*(&__for_begin);
            if ( proto::LanternRiteFireworksReformSkillInfo::is_unlock(skill_info) )
            {
              __x = proto::LanternRiteFireworksReformSkillInfo::skill_id(skill_info);
              std::set<unsigned int>::insert(&this->fireworks_reform_Data_.unlock_skill_set, &__x);
            }
            google::protobuf::internal::RepeatedPtrIterator<proto::LanternRiteFireworksReformSkillInfo const>::operator++(&__for_begin);
          }
          common::milog::MiLogStream::create(
            &v32,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/lantern_rite_activity.cpp",
            "startFireworksReform",
            2210);
          v17 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                  &v32,
                  (const char (*)[50])"[LanternRite] startFireworksReform, challenge_id:");
          v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v17,
                  (const unsigned int *)(v3 + 64));
          v19 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v18, (const char (*)[11])" stage_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream(&v32);
          result = 0;
        }
        else
        {
          common::milog::MiLogStream::create(
            &v32,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/activity/lantern_rite_activity.cpp",
            "startFireworksReform",
            2185);
          v13 = common::milog::MiLogStream::operator<<<char [74],(char *[74])0>(
                  &v32,
                  (const char (*)[74])"[LanternRite] findLanV2FireworksOverallDataExcelConfig fail, schedule_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &this->schedule_id_);
          common::milog::MiLogStream::~MiLogStream(&v32);
          result = -1;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v32,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/lantern_rite_activity.cpp",
          "startFireworksReform",
          2173);
        v10 = common::milog::MiLogStream::operator<<<char [77],(char *[77])0>(
                &v32,
                (const char (*)[77])"[LanternRite] findLanV2FireworksChallengeDataExcelConfig fail, challenge_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 64));
        common::milog::MiLogStream::~MiLogStream(&v32);
        result = -1;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v32,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/lantern_rite_activity.cpp",
        "startFireworksReform",
        2165);
      v7 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
             &v32,
             (const char (*)[64])"[LanternRite] findOpeningFireworksChallenge fail, challenge_id:");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 64));
      v9 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v8, (const char (*)[11])" stage_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v32);
      result = 10102;
    }
  }
  if ( v33 == (char *)v3 )
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

// Line 2215: range 0000000015FFB29A-0000000015FFC0BB
int32_t __cdecl LanternRiteActivity::doFireworksReform(
        LanternRiteActivity *const this,
        const proto::LanternRiteDoFireworksReformReq *req,
        proto::LanternRiteDoFireworksReformRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int32_t result; // eax
  google::protobuf::uint32 v7; // edx
  google::protobuf::uint32 v8; // edx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  uint32_t stamina_value_cost; // ecx
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  uint32_t stamina_value; // ecx
  int delta_fire_element_value; // edx
  uint32_t v29; // edx
  uint32_t FireElementAdditionRatio; // edx
  uint32_t ChallengeScore; // edx
  std::vector<LanternRiteFireworksReformResultData>::value_type *v32; // rax
  common::milog::MiLogStream *v33; // rbx
  int32_t ret; // [rsp+20h] [rbp-120h]
  unsigned int abs_delta_value; // [rsp+24h] [rbp-11Ch]
  std::_Rb_tree_iterator<std::pair<unsigned int const,LanternRiteFireworksReformFactorData> >::_Self __y; // [rsp+28h] [rbp-118h] BYREF
  const ActivitySeaLampExcelConfigMgr *config_mgr; // [rsp+30h] [rbp-110h]
  const data::LanV2FireworksSkillDataExcelConfig *fireworks_skill_config_ptr; // [rsp+38h] [rbp-108h]
  std::shared_ptr<Config> v40; // [rsp+40h] [rbp-100h] BYREF
  common::milog::MiLogStream v41; // [rsp+50h] [rbp-F0h] BYREF
  char v42[208]; // [rsp+70h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v42;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 4 13 stage_id:2224 48 4 17 challenge_id:2225 64 4 13 skill_id:2233 80 4 14 factor_id:2252 9"
                        "6 8 16 factor_iter:2253 128 12 11 result:2295";
  *(_QWORD *)(v3 + 16) = LanternRiteActivity::doFireworksReform;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -234556924;
  v5[536862723] = -218959360;
  v5[536862724] = -202177536;
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  if ( this->is_content_closed_ )
  {
    common::milog::MiLogStream::create(
      &v41,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/lantern_rite_activity.cpp",
      "doFireworksReform",
      2218);
    common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
      &v41,
      (const char (*)[45])"[LanternRite] fireworks reform content close");
    common::milog::MiLogStream::~MiLogStream(&v41);
    result = 10101;
  }
  else
  {
    v7 = proto::LanternRiteDoFireworksReformReq::stage_id(req);
    proto::LanternRiteDoFireworksReformRsp::set_stage_id(rsp_0, v7);
    v8 = proto::LanternRiteDoFireworksReformReq::challenge_id(req);
    proto::LanternRiteDoFireworksReformRsp::set_challenge_id(rsp_0, v8);
    *(_DWORD *)(v3 + 32) = proto::LanternRiteDoFireworksReformReq::stage_id(req);
    *(_DWORD *)(v3 + 48) = proto::LanternRiteDoFireworksReformReq::challenge_id(req);
    if ( *(_BYTE *)(((unsigned __int64)&this->fireworks_reform_Data_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->fireworks_reform_Data_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( this->fireworks_reform_Data_.stage_id != *(_DWORD *)(v3 + 32) )
      goto LABEL_14;
    if ( *(_BYTE *)(((unsigned __int64)&this->fireworks_reform_Data_.challenge_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->fireworks_reform_Data_.challenge_id >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( this->fireworks_reform_Data_.challenge_id == *(_DWORD *)(v3 + 48) )
    {
      *(_DWORD *)(v3 + 64) = proto::LanternRiteDoFireworksReformReq::skill_id(req);
      if ( !common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
              &this->fireworks_reform_Data_.unlock_skill_set,
              (const unsigned int *)(v3 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v41,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/lantern_rite_activity.cpp",
          "doFireworksReform",
          2236);
        v16 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
                &v41,
                (const char (*)[59])"[LanternRite] fireworks reform skill not unlock, skill_id:");
        v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v16,
                (const unsigned int *)(v3 + 64));
        v18 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                v17,
                (const char (*)[19])" unlock_skill_set:");
        common::milog::MiLogStream::operator<<<unsigned int>(v18, &this->fireworks_reform_Data_.unlock_skill_set);
        common::milog::MiLogStream::~MiLogStream(&v41);
        result = 10104;
      }
      else
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v40);
        config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v40)->design_config.txt_config_mgr.activity_sea_lamp_config_mgr;
        std::shared_ptr<Config>::~shared_ptr(&v40);
        fireworks_skill_config_ptr = data::ActivitySeaLampExcelConfigMgrBase::findLanV2FireworksSkillDataExcelConfig(
                                       config_mgr,
                                       *(_DWORD *)(v3 + 64));
        if ( fireworks_skill_config_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&fireworks_skill_config_ptr->stamina_value_cost >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&fireworks_skill_config_ptr->stamina_value_cost >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          stamina_value_cost = fireworks_skill_config_ptr->stamina_value_cost;
          if ( *(_BYTE *)(((unsigned __int64)&this->fireworks_reform_Data_.stamina_value >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->fireworks_reform_Data_.stamina_value >> 3)
                                                                + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          if ( stamina_value_cost <= this->fireworks_reform_Data_.stamina_value )
          {
            *(_DWORD *)(v3 + 80) = proto::LanternRiteDoFireworksReformReq::factor_id(req);
            *(std::map<unsigned int,LanternRiteFireworksReformFactorData>::iterator *)(v3 + 96) = std::map<unsigned int,LanternRiteFireworksReformFactorData>::find(
                                                                                                    &this->fireworks_reform_Data_.factor_map,
                                                                                                    (const std::map<unsigned int,LanternRiteFireworksReformFactorData>::key_type *)(v3 + 80));
            __y._M_node = std::map<unsigned int,LanternRiteFireworksReformFactorData>::end(&this->fireworks_reform_Data_.factor_map)._M_node;
            if ( std::operator==(
                   (const std::_Rb_tree_iterator<std::pair<unsigned int const,LanternRiteFireworksReformFactorData> >::_Self *)(v3 + 96),
                   &__y) )
            {
              common::milog::MiLogStream::create(
                &v41,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/player/activity/lantern_rite_activity.cpp",
                "doFireworksReform",
                2256);
              v24 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                      &v41,
                      (const char (*)[33])"[LanternRite] invalid factor_id:");
              v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v24,
                      (const unsigned int *)(v3 + 80));
              v26 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                      v25,
                      (const char (*)[15])" challenge_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v26,
                (const unsigned int *)(v3 + 48));
              common::milog::MiLogStream::~MiLogStream(&v41);
              result = -1;
            }
            else
            {
              ret = LanternRiteActivity::calcFireworksReformResult(
                      this,
                      *(_DWORD *)(v3 + 48),
                      *(_DWORD *)(v3 + 80),
                      *(_DWORD *)(v3 + 64),
                      rsp_0);
              if ( ret )
              {
                common::milog::MiLogStream::create(
                  &v41,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/activity/lantern_rite_activity.cpp",
                  "doFireworksReform",
                  2263);
                common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                  &v41,
                  (const char (*)[45])"[LanternRite] calcFireworksReformResult fail");
                common::milog::MiLogStream::~MiLogStream(&v41);
                result = ret;
              }
              else
              {
                if ( *(_BYTE *)(((unsigned __int64)&this->fireworks_reform_Data_.stamina_value >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)this - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->fireworks_reform_Data_.stamina_value >> 3)
                                                                      + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                stamina_value = this->fireworks_reform_Data_.stamina_value;
                if ( *(_BYTE *)(((unsigned __int64)&fireworks_skill_config_ptr->stamina_value_cost >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&fireworks_skill_config_ptr->stamina_value_cost >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4();
                }
                this->fireworks_reform_Data_.stamina_value = stamina_value
                                                           - fireworks_skill_config_ptr->stamina_value_cost;
                if ( *(_BYTE *)(((unsigned __int64)&fireworks_skill_config_ptr->delta_fire_element_value >> 3)
                              + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&fireworks_skill_config_ptr->delta_fire_element_value >> 3)
                              + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4();
                }
                if ( fireworks_skill_config_ptr->delta_fire_element_value < 0 )
                {
                  if ( *(_BYTE *)(((unsigned __int64)&fireworks_skill_config_ptr->delta_fire_element_value >> 3)
                                + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&fireworks_skill_config_ptr->delta_fire_element_value >> 3)
                                + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_load4();
                  }
                  abs_delta_value = abs32(fireworks_skill_config_ptr->delta_fire_element_value);
                  if ( *(_BYTE *)(((unsigned __int64)&this->fireworks_reform_Data_.fire_element_value >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&this->fireworks_reform_Data_.fire_element_value >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_load4();
                  }
                  if ( abs_delta_value >= this->fireworks_reform_Data_.fire_element_value )
                  {
                    if ( *(_BYTE *)(((unsigned __int64)&this->fireworks_reform_Data_.fire_element_value >> 3)
                                  + 0x7FFF8000) != 0
                      && *(_BYTE *)(((unsigned __int64)&this->fireworks_reform_Data_.fire_element_value >> 3)
                                  + 0x7FFF8000) <= 3 )
                    {
                      __asan_report_store4(&this->fireworks_reform_Data_.fire_element_value);
                    }
                    this->fireworks_reform_Data_.fire_element_value = 0;
                  }
                  else
                  {
                    this->fireworks_reform_Data_.fire_element_value -= abs_delta_value;
                  }
                }
                else
                {
                  delta_fire_element_value = fireworks_skill_config_ptr->delta_fire_element_value;
                  if ( *(_BYTE *)(((unsigned __int64)&this->fireworks_reform_Data_.fire_element_value >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&this->fireworks_reform_Data_.fire_element_value >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_load4();
                  }
                  v29 = SAFE_ADD<unsigned int,int>(
                          this->fireworks_reform_Data_.fire_element_value,
                          delta_fire_element_value);
                  if ( *(_BYTE *)(((unsigned __int64)&this->fireworks_reform_Data_.fire_element_value >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&this->fireworks_reform_Data_.fire_element_value >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_store4(&this->fireworks_reform_Data_.fire_element_value);
                  }
                  this->fireworks_reform_Data_.fire_element_value = v29;
                }
                if ( *(_BYTE *)(((unsigned __int64)&this->fireworks_reform_Data_.stamina_value >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)this - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->fireworks_reform_Data_.stamina_value >> 3)
                                                                      + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                proto::LanternRiteDoFireworksReformRsp::set_stamina_value(
                  rsp_0,
                  this->fireworks_reform_Data_.stamina_value);
                if ( *(_BYTE *)(((unsigned __int64)&this->fireworks_reform_Data_.fire_element_value >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&this->fireworks_reform_Data_.fire_element_value >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4();
                }
                proto::LanternRiteDoFireworksReformRsp::set_fire_element_value(
                  rsp_0,
                  this->fireworks_reform_Data_.fire_element_value);
                if ( *(_BYTE *)(((unsigned __int64)&this->fireworks_reform_Data_.fire_element_value >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&this->fireworks_reform_Data_.fire_element_value >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4();
                }
                FireElementAdditionRatio = LanternRiteActivity::getFireElementAdditionRatio(
                                             this,
                                             this->fireworks_reform_Data_.fire_element_value);
                proto::LanternRiteDoFireworksReformRsp::set_fire_element_addition_ratio(rsp_0, FireElementAdditionRatio);
                ChallengeScore = LanternRiteFireworksReformData::getChallengeScore(&this->fireworks_reform_Data_);
                proto::LanternRiteDoFireworksReformRsp::set_reform_score(rsp_0, ChallengeScore);
                if ( std::vector<LanternRiteFireworksReformResultData>::size(&this->fireworks_reform_Data_.result_vec) > 0x63 )
                {
                  common::milog::MiLogStream::create(
                    &v41,
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/player/activity/lantern_rite_activity.cpp",
                    "doFireworksReform",
                    2303);
                  v33 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                          &v41,
                          (const char (*)[48])"[LanternRite] fireworks reform result vec size:");
                  __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,LanternRiteFireworksReformFactorData> >::_Base_ptr)std::vector<LanternRiteFireworksReformResultData>::size(&this->fireworks_reform_Data_.result_vec);
                  common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                    v33,
                    (const unsigned __int64 *)&__y);
                  common::milog::MiLogStream::~MiLogStream(&v41);
                }
                else
                {
                  *(_DWORD *)(v3 + 128) = 0;
                  *(_DWORD *)(v3 + 132) = 0;
                  *(_DWORD *)(v3 + 136) = 0;
                  *(_DWORD *)(v3 + 128) = *(_DWORD *)(v3 + 64);
                  *(_DWORD *)(v3 + 132) = *(_DWORD *)(v3 + 80);
                  *(_DWORD *)(v3 + 136) = proto::LanternRiteDoFireworksReformRsp::reform_score(rsp_0);
                  v32 = std::move<LanternRiteFireworksReformResultData &>((LanternRiteFireworksReformResultData *)(v3 + 128));
                  std::vector<LanternRiteFireworksReformResultData>::push_back(
                    &this->fireworks_reform_Data_.result_vec,
                    v32);
                }
                result = 0;
              }
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v41,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/activity/lantern_rite_activity.cpp",
              "doFireworksReform",
              2248);
            v21 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                    &v41,
                    (const char (*)[46])"[LanternRite] stamina_value not enough, need:");
            v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v21,
                    &fireworks_skill_config_ptr->stamina_value_cost);
            v23 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v22, (const char (*)[7])" have:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v23,
              &this->fireworks_reform_Data_.stamina_value);
            common::milog::MiLogStream::~MiLogStream(&v41);
            result = 10105;
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v41,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/activity/lantern_rite_activity.cpp",
            "doFireworksReform",
            2243);
          v19 = common::milog::MiLogStream::operator<<<char [69],(char *[69])0>(
                  &v41,
                  (const char (*)[69])"[LanternRite] findLanV2FireworksSkillDataExcelConfig fail, skill_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v3 + 64));
          common::milog::MiLogStream::~MiLogStream(&v41);
          result = -1;
        }
      }
    }
    else
    {
LABEL_14:
      common::milog::MiLogStream::create(
        &v41,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/lantern_rite_activity.cpp",
        "doFireworksReform",
        2228);
      v9 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
             &v41,
             (const char (*)[53])"[LanternRite] client param invalid, client stage_id:");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 32));
      v11 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              v10,
              (const char (*)[22])" client challenge_id:");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 48));
      v13 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              v12,
              (const char (*)[18])" reform stage_id:");
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v13,
              &this->fireworks_reform_Data_.stage_id);
      v15 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              v14,
              (const char (*)[22])" reform challenge_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        v15,
        &this->fireworks_reform_Data_.challenge_id);
      common::milog::MiLogStream::~MiLogStream(&v41);
      result = 10103;
    }
  }
  if ( v42 == (char *)v3 )
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

// Line 2309: range 0000000015FFC0BC-0000000015FFD97D
__int64 __fastcall LanternRiteActivity::calcFireworksReformResult(
        LanternRiteActivity *const this,
        uint32_t challenge_id,
        uint32_t factor_id,
        uint32_t skill_id,
        proto::LanternRiteDoFireworksReformRsp *rsp_0)
{
  unsigned int v5; // r14d
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  uint32_t factor_value; // r15d
  std::vector<unsigned int>::const_reference v19; // rdx
  std::vector<unsigned int>::const_reference v20; // rdx
  int v21; // r15d
  std::vector<unsigned int>::const_reference v22; // rdx
  uint32_t v23; // edi
  uint32_t v24; // esi
  uint32_t FireworksReformFactorScore; // ecx
  proto::LanternRiteFireworksReformFactorInfo *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  data::FireworksReformSkillType skill_type; // eax
  proto::LanternRiteFireworksReformFactorInfo *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v41; // rdx
  std::map<unsigned int,unsigned int>::mapped_type *v42; // rax
  _DWORD *v43; // rdx
  std::vector<unsigned int>::const_reference v44; // rdx
  unsigned int v45; // r15d
  unsigned int *v46; // rdx
  std::vector<unsigned int>::const_reference v47; // rdx
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  proto::LanternRiteFireworksReformFactorInfo *v51; // rax
  common::milog::MiLogStream *v52; // rax
  int v53; // r15d
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // rax
  common::milog::MiLogStream *v58; // rax
  int v59; // r15d
  proto::LanternRiteFireworksReformFactorInfo *v60; // rax
  common::milog::MiLogStream *v61; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v62; // rdx
  std::vector<unsigned int>::const_reference v63; // rdx
  std::vector<unsigned int>::const_reference v64; // rdx
  proto::LanternRiteFireworksReformFactorInfo *v65; // rax
  common::milog::MiLogStream *v66; // rax
  common::milog::MiLogStream *v67; // rax
  common::milog::MiLogStream *v68; // rax
  common::milog::MiLogStream *v69; // rax
  __int64 result; // rax
  bool is_lucky; // [rsp+37h] [rbp-1A9h]
  uint32_t reform_index; // [rsp+38h] [rbp-1A8h]
  uint32_t factor_add_value_min; // [rsp+3Ch] [rbp-1A4h]
  uint32_t factor_add_value_max; // [rsp+40h] [rbp-1A0h]
  uint32_t adjacent_add_value_min; // [rsp+44h] [rbp-19Ch]
  uint32_t adjacent_add_value_max; // [rsp+48h] [rbp-198h]
  uint32_t reform_times; // [rsp+4Ch] [rbp-194h]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+50h] [rbp-190h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+58h] [rbp-188h] BYREF
  const ActivitySeaLampExcelConfigMgr *config_mgr; // [rsp+60h] [rbp-180h]
  const data::LanV2FireworksChallengeDataExcelConfig *fireworks_challenge_config_ptr; // [rsp+68h] [rbp-178h]
  const data::LanV2FireworksFactorDataExcelConfig *fireworks_factor_config_ptr; // [rsp+70h] [rbp-170h]
  const data::LanV2FireworksSkillDataExcelConfig *fireworks_skill_config_ptr; // [rsp+78h] [rbp-168h]
  LanternRiteFireworksReformFactorData *factor_data; // [rsp+80h] [rbp-160h]
  google::protobuf::RepeatedPtrField<proto::LanternRiteFireworksReformFactorInfo> *factor_info_list; // [rsp+88h] [rbp-158h]
  std::set<unsigned int> *__for_range_0; // [rsp+90h] [rbp-150h]
  const std::vector<unsigned int> *__for_range; // [rsp+98h] [rbp-148h]
  std::shared_ptr<Config> v92; // [rsp+A0h] [rbp-140h] BYREF
  common::milog::MiLogStream v93; // [rsp+B0h] [rbp-130h] BYREF
  char v94[272]; // [rsp+D0h] [rbp-110h] BYREF

  v6 = (unsigned __int64)v94;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_2(224LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "7 32 4 21 reform_factor_id:2403 48 4 23 adjacent_factor_id:2449 64 4 17 challenge_id:2308 80 4 1"
                        "4 factor_id:2308 96 4 13 skill_id:2308 112 8 16 factor_iter:2335 144 48 24 adjacent_factor_set:2436";
  *(_QWORD *)(v6 + 16) = LanternRiteActivity::calcFireworksReformResult;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234556924;
  v8[536862722] = -234556924;
  v8[536862723] = 61956;
  v8[536862723] = -234881024;
  v8[536862724] = 62194;
  v8[536862726] = -202116109;
  *(_DWORD *)(v6 + 64) = challenge_id;
  *(_DWORD *)(v6 + 80) = factor_id;
  *(_DWORD *)(v6 + 96) = skill_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v92);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v92)->design_config.txt_config_mgr.activity_sea_lamp_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v92);
  fireworks_challenge_config_ptr = data::ActivitySeaLampExcelConfigMgrBase::findLanV2FireworksChallengeDataExcelConfig(
                                     config_mgr,
                                     *(_DWORD *)(v6 + 64));
  if ( !fireworks_challenge_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v93,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/lantern_rite_activity.cpp",
      "calcFireworksReformResult",
      2314);
    v9 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
           &v93,
           (const char (*)[63])"findLanV2FireworksChallengeDataExcelConfig fail, challenge_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v6 + 64));
    common::milog::MiLogStream::~MiLogStream(&v93);
    v5 = -1;
    goto LABEL_103;
  }
  fireworks_factor_config_ptr = data::ActivitySeaLampExcelConfigMgrBase::findLanV2FireworksFactorDataExcelConfig(
                                  config_mgr,
                                  *(_DWORD *)(v6 + 80));
  if ( !fireworks_factor_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v93,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/lantern_rite_activity.cpp",
      "calcFireworksReformResult",
      2320);
    v10 = common::milog::MiLogStream::operator<<<char [71],(char *[71])0>(
            &v93,
            (const char (*)[71])"[LanternRite] findLanV2FireworksFactorDataExcelConfig fail, factor_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v6 + 80));
    common::milog::MiLogStream::~MiLogStream(&v93);
    v5 = -1;
    goto LABEL_103;
  }
  if ( std::vector<unsigned int>::size(&fireworks_factor_config_ptr->perfect_range) != 2 )
  {
    common::milog::MiLogStream::create(
      &v93,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/lantern_rite_activity.cpp",
      "calcFireworksReformResult",
      2325);
    v11 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
            &v93,
            (const char (*)[37])"[LanternRite] invalid perfect_range:");
    v12 = common::milog::MiLogStream::operator<<<unsigned int>(v11, &fireworks_factor_config_ptr->perfect_range);
    v13 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v12, (const char (*)[12])" factor_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v6 + 80));
    common::milog::MiLogStream::~MiLogStream(&v93);
    v5 = -1;
    goto LABEL_103;
  }
  fireworks_skill_config_ptr = data::ActivitySeaLampExcelConfigMgrBase::findLanV2FireworksSkillDataExcelConfig(
                                 config_mgr,
                                 *(_DWORD *)(v6 + 96));
  if ( !fireworks_skill_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v93,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/lantern_rite_activity.cpp",
      "calcFireworksReformResult",
      2331);
    v14 = common::milog::MiLogStream::operator<<<char [69],(char *[69])0>(
            &v93,
            (const char (*)[69])"[LanternRite] findLanV2FireworksSkillDataExcelConfig fail, skill_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v6 + 96));
    common::milog::MiLogStream::~MiLogStream(&v93);
    v5 = -1;
    goto LABEL_103;
  }
  *(std::map<unsigned int,LanternRiteFireworksReformFactorData>::iterator *)(v6 + 112) = std::map<unsigned int,LanternRiteFireworksReformFactorData>::find(
                                                                                           &this->fireworks_reform_Data_.factor_map,
                                                                                           (const std::map<unsigned int,LanternRiteFireworksReformFactorData>::key_type *)(v6 + 80));
  __for_end._M_current = (const unsigned int *)std::map<unsigned int,LanternRiteFireworksReformFactorData>::end(&this->fireworks_reform_Data_.factor_map)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,LanternRiteFireworksReformFactorData> >::_Self *)(v6 + 112),
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,LanternRiteFireworksReformFactorData> >::_Self *)&__for_end) )
  {
    common::milog::MiLogStream::create(
      &v93,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/lantern_rite_activity.cpp",
      "calcFireworksReformResult",
      2338);
    v15 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
            &v93,
            (const char (*)[33])"[LanternRite] invalid factor_id:");
    v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v6 + 80));
    v17 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v16, (const char (*)[15])" challenge_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v6 + 64));
    common::milog::MiLogStream::~MiLogStream(&v93);
    v5 = -1;
    goto LABEL_103;
  }
  factor_data = &std::_Rb_tree_iterator<std::pair<unsigned int const,LanternRiteFireworksReformFactorData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,LanternRiteFireworksReformFactorData> > *const)(v6 + 112))->second;
  factor_info_list = proto::LanternRiteDoFireworksReformRsp::mutable_factor_info_list(rsp_0);
  is_lucky = 0;
  if ( *(_BYTE *)(((unsigned __int64)&factor_data->factor_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)factor_data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&factor_data->factor_value >> 3)
                                                              + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  factor_value = factor_data->factor_value;
  v19 = std::vector<unsigned int>::operator[](&fireworks_factor_config_ptr->perfect_range, 0LL);
  if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( factor_value < *v19 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&fireworks_skill_config_ptr->lucky_prob >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)fireworks_skill_config_ptr + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&fireworks_skill_config_ptr->lucky_prob >> 3)
                                                                                + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( common::tools::RandomUtils::randomTestProbability(100.0) )
    {
      is_lucky = 1;
      v20 = std::vector<unsigned int>::operator[](&fireworks_factor_config_ptr->perfect_range, 0LL);
      if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v21 = *v20;
      v22 = std::vector<unsigned int>::operator[](&fireworks_factor_config_ptr->perfect_range, 1uLL);
      if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v22 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v23 = (int)std::floor((float)(v21 + *v22) / 2.0);
      if ( *(_BYTE *)(((unsigned __int64)&factor_data->factor_value >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)factor_data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&factor_data->factor_value >> 3)
                                                                  + 0x7FFF8000) )
      {
        v23 = (_DWORD)factor_data + 4;
        __asan_report_store4(&factor_data->factor_value);
      }
      factor_data->factor_value = v23;
      v24 = factor_data->factor_value;
      if ( *(_BYTE *)(((unsigned __int64)factor_data >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)factor_data & 7) + 3) >= *(_BYTE *)(((unsigned __int64)factor_data >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      FireworksReformFactorScore = LanternRiteActivity::getFireworksReformFactorScore(this, factor_data->factor_id, v24);
      if ( *(_BYTE *)(((unsigned __int64)&factor_data->factor_score >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)factor_data + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&factor_data->factor_score >> 3)
                                                                  + 0x7FFF8000) )
      {
        __asan_report_store4(&factor_data->factor_score);
      }
      factor_data->factor_score = FireworksReformFactorScore;
      v26 = google::protobuf::RepeatedPtrField<proto::LanternRiteFireworksReformFactorInfo>::Add(factor_info_list);
      LanternRiteFireworksReformFactorData::toClient(factor_data, v26);
      common::milog::MiLogStream::create(
        &v93,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/lantern_rite_activity.cpp",
        "calcFireworksReformResult",
        2354);
      v27 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
              &v93,
              (const char (*)[40])"[LanternRite] lucky reform,  factor_id:");
      v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, &factor_data->factor_id);
      v29 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v28, (const char (*)[15])" factor_value:");
      v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, &factor_data->factor_value);
      v31 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v30, (const char (*)[15])" factor_score:");
      v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, &factor_data->factor_score);
      v33 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v32, (const char (*)[11])" skill_id:");
      v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, (const unsigned int *)(v6 + 96));
      v35 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v34, (const char (*)[15])" challenge_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, (const unsigned int *)(v6 + 64));
      common::milog::MiLogStream::~MiLogStream(&v93);
    }
  }
  proto::LanternRiteDoFireworksReformRsp::set_is_lucky(rsp_0, is_lucky);
  if ( *(_BYTE *)(((unsigned __int64)&fireworks_skill_config_ptr->factor_add_value_min >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&fireworks_skill_config_ptr->factor_add_value_min >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  factor_add_value_min = fireworks_skill_config_ptr->factor_add_value_min;
  if ( *(_BYTE *)(((unsigned __int64)&fireworks_skill_config_ptr->factor_add_value_max >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)fireworks_skill_config_ptr + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&fireworks_skill_config_ptr->factor_add_value_max >> 3)
                                                                              + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  factor_add_value_max = fireworks_skill_config_ptr->factor_add_value_max;
  if ( *(_BYTE *)(((unsigned __int64)&fireworks_skill_config_ptr->skill_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)fireworks_skill_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&fireworks_skill_config_ptr->skill_type >> 3)
                                                                              + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  skill_type = fireworks_skill_config_ptr->skill_type;
  if ( skill_type == FIREWORKS_REFORM_SKILL_ADJACENT )
  {
    if ( is_lucky )
    {
      common::milog::MiLogStream::create(
        &v93,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/lantern_rite_activity.cpp",
        "calcFireworksReformResult",
        2427);
      v54 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(&v93, (const char (*)[66])byte_25AC44A0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v54, (const unsigned int *)(v6 + 96));
      common::milog::MiLogStream::~MiLogStream(&v93);
      v5 = -1;
      goto LABEL_103;
    }
    if ( std::vector<unsigned int>::size(&fireworks_skill_config_ptr->effect_params) <= 1 )
    {
      common::milog::MiLogStream::create(
        &v93,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/lantern_rite_activity.cpp",
        "calcFireworksReformResult",
        2432);
      v55 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(&v93, (const char (*)[58])byte_25AC43E0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v55, (const unsigned int *)(v6 + 96));
      common::milog::MiLogStream::~MiLogStream(&v93);
      v5 = -1;
      goto LABEL_103;
    }
    std::set<unsigned int>::set((std::set<unsigned int> *const)(v6 + 144));
    if ( ActivitySeaLampExcelConfigMgr::getRangeAdjacentFactor(
           config_mgr,
           *(_DWORD *)(v6 + 64),
           *(_DWORD *)(v6 + 80),
           1u,
           (std::set<unsigned int> *)(v6 + 144)) )
    {
      common::milog::MiLogStream::create(
        &v93,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/lantern_rite_activity.cpp",
        "calcFireworksReformResult",
        2439);
      v56 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
              &v93,
              (const char (*)[54])"[LanternRite] getRangeAdjacentFactor fail, factor_id:");
      v57 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v56, (const unsigned int *)(v6 + 80));
      v58 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v57, (const char (*)[15])" challenge_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v58, (const unsigned int *)(v6 + 64));
      common::milog::MiLogStream::~MiLogStream(&v93);
      v5 = -1;
      v59 = 0;
    }
    else
    {
      v60 = google::protobuf::RepeatedPtrField<proto::LanternRiteFireworksReformFactorInfo>::Add(factor_info_list);
      if ( LanternRiteActivity::reformFireworksFactorAndFillClient(
             this,
             *(_DWORD *)(v6 + 80),
             factor_add_value_min,
             factor_add_value_max,
             v60) )
      {
        common::milog::MiLogStream::create(
          &v93,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/lantern_rite_activity.cpp",
          "calcFireworksReformResult",
          2445);
        v61 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
                &v93,
                (const char (*)[66])"[LanternRite] reformFireworksFactorAndFillClient fail, factor_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v61, (const unsigned int *)(v6 + 80));
        common::milog::MiLogStream::~MiLogStream(&v93);
        v5 = -1;
        v59 = 0;
      }
      else
      {
        __for_range_0 = (std::set<unsigned int> *)(v6 + 144);
        __for_begin._M_current = (const unsigned int *)std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v6 + 144))._M_node;
        __for_end._M_current = (const unsigned int *)std::set<unsigned int>::end(__for_range_0)._M_node;
        while ( std::operator!=(
                  (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_begin,
                  (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_end) )
        {
          v62 = std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
          if ( *(_BYTE *)(((unsigned __int64)v62 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v62 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v62 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          *(_DWORD *)(v6 + 48) = *v62;
          v63 = std::vector<unsigned int>::operator[](&fireworks_skill_config_ptr->effect_params, 0LL);
          if ( *(_BYTE *)(((unsigned __int64)v63 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v63 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v63 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          adjacent_add_value_min = *v63;
          v64 = std::vector<unsigned int>::operator[](&fireworks_skill_config_ptr->effect_params, 1uLL);
          if ( *(_BYTE *)(((unsigned __int64)v64 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v64 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v64 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          adjacent_add_value_max = *v64;
          v65 = google::protobuf::RepeatedPtrField<proto::LanternRiteFireworksReformFactorInfo>::Add(factor_info_list);
          if ( LanternRiteActivity::reformFireworksFactorAndFillClient(
                 this,
                 *(_DWORD *)(v6 + 48),
                 adjacent_add_value_min,
                 adjacent_add_value_max,
                 v65) )
          {
            common::milog::MiLogStream::create(
              &v93,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/lantern_rite_activity.cpp",
              "calcFireworksReformResult",
              2455);
            v66 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
                    &v93,
                    (const char (*)[66])"[LanternRite] reformFireworksFactorAndFillClient fail, factor_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v66, (const unsigned int *)(v6 + 48));
            common::milog::MiLogStream::~MiLogStream(&v93);
            v5 = -1;
            v59 = 0;
            goto LABEL_99;
          }
          std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
        }
        v59 = 1;
      }
    }
LABEL_99:
    std::set<unsigned int>::~set((std::set<unsigned int> *const)(v6 + 144));
    if ( !v59 )
      goto LABEL_103;
LABEL_102:
    v5 = 0;
    goto LABEL_103;
  }
  if ( skill_type > FIREWORKS_REFORM_SKILL_ADJACENT )
  {
LABEL_101:
    common::milog::MiLogStream::create(
      &v93,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/lantern_rite_activity.cpp",
      "calcFireworksReformResult",
      2462);
    v67 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
            &v93,
            (const char (*)[52])" [LanternRite] invalid fireworks reform skill type:");
    v68 = common::milog::MiLogStream::operator<<<data::FireworksReformSkillType,(data::FireworksReformSkillType*)0>(
            v67,
            &fireworks_skill_config_ptr->skill_type);
    v69 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v68, (const char (*)[11])" skill_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v69, (const unsigned int *)(v6 + 96));
    common::milog::MiLogStream::~MiLogStream(&v93);
    v5 = -1;
    goto LABEL_103;
  }
  if ( skill_type == FIREWORKS_REFORM_SKILL_GENERAL )
  {
    if ( !is_lucky )
    {
      v37 = google::protobuf::RepeatedPtrField<proto::LanternRiteFireworksReformFactorInfo>::Add(factor_info_list);
      if ( LanternRiteActivity::reformFireworksFactorAndFillClient(
             this,
             *(_DWORD *)(v6 + 80),
             factor_add_value_min,
             factor_add_value_max,
             v37) )
      {
        common::milog::MiLogStream::create(
          &v93,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/lantern_rite_activity.cpp",
          "calcFireworksReformResult",
          2371);
        v38 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
                &v93,
                (const char (*)[66])"[LanternRite] reformFireworksFactorAndFillClient fail, factor_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v38, (const unsigned int *)(v6 + 80));
        common::milog::MiLogStream::~MiLogStream(&v93);
        v5 = -1;
        goto LABEL_103;
      }
    }
    goto LABEL_102;
  }
  if ( skill_type != FIREWORKS_REFORM_SKILL_INSTABLE )
    goto LABEL_101;
  if ( is_lucky )
  {
    common::milog::MiLogStream::create(
      &v93,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/lantern_rite_activity.cpp",
      "calcFireworksReformResult",
      2382);
    v39 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(&v93, (const char (*)[63])byte_25AC4380);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v39, (const unsigned int *)(v6 + 96));
    common::milog::MiLogStream::~MiLogStream(&v93);
    v5 = -1;
    goto LABEL_103;
  }
  if ( std::vector<unsigned int>::size(&fireworks_skill_config_ptr->effect_params) <= 2 )
  {
    common::milog::MiLogStream::create(
      &v93,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/lantern_rite_activity.cpp",
      "calcFireworksReformResult",
      2387);
    v40 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(&v93, (const char (*)[58])byte_25AC43E0);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v40, (const unsigned int *)(v6 + 96));
    common::milog::MiLogStream::~MiLogStream(&v93);
    v5 = -1;
    goto LABEL_103;
  }
  std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v6 + 144));
  __for_range = &fireworks_challenge_config_ptr->factor_id_list;
  __for_begin._M_current = std::vector<unsigned int>::begin(&fireworks_challenge_config_ptr->factor_id_list)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(__for_range)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v41 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v41 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v41 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v41 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v6 + 48) = *v41;
    if ( *(_DWORD *)(v6 + 48) != *(_DWORD *)(v6 + 80) )
    {
      v42 = std::map<unsigned int,unsigned int>::operator[](
              (std::map<unsigned int,unsigned int> *const)(v6 + 144),
              (const std::map<unsigned int,unsigned int>::key_type *)(v6 + 48));
      v43 = v42;
      if ( *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v42 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v42);
      }
      *v43 = 1;
    }
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  v44 = std::vector<unsigned int>::operator[](&fireworks_skill_config_ptr->effect_params, 1uLL);
  if ( *(_BYTE *)(((unsigned __int64)v44 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v44 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v44 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  v45 = *v44;
  v46 = (unsigned int *)std::vector<unsigned int>::operator[](&fireworks_skill_config_ptr->effect_params, 0LL);
  if ( *(_BYTE *)(((unsigned __int64)v46 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v46 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v46 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  reform_times = common::tools::RandomUtils::rand<unsigned int>(*v46, v45);
  for ( reform_index = 0; reform_index < reform_times; ++reform_index )
  {
    *(_DWORD *)(v6 + 32) = *(_DWORD *)(v6 + 80);
    v47 = std::vector<unsigned int>::operator[](&fireworks_skill_config_ptr->effect_params, 2uLL);
    if ( *(_BYTE *)(((unsigned __int64)v47 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v47 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v47 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( common::tools::RandomUtils::randomTestProbability(100.0) )
    {
      *(_DWORD *)(v6 + 48) = 0;
      if ( common::tools::RandomUtils::weightSelectOne<unsigned int,unsigned int>(
             (const std::map<unsigned int,unsigned int> *)(v6 + 144),
             (unsigned int *)(v6 + 48),
             0) )
      {
        common::milog::MiLogStream::create(
          &v93,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/lantern_rite_activity.cpp",
          "calcFireworksReformResult",
          2409);
        v48 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                &v93,
                (const char (*)[37])" rand select factor fail: factor_id:");
        v49 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v48,
                (const unsigned int *)(v6 + 80));
        v50 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v49, (const char (*)[15])" challenge_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v50, (const unsigned int *)(v6 + 64));
        common::milog::MiLogStream::~MiLogStream(&v93);
        v5 = -1;
LABEL_75:
        v53 = 0;
        goto LABEL_77;
      }
      *(_DWORD *)(v6 + 32) = *(_DWORD *)(v6 + 48);
    }
    v51 = google::protobuf::RepeatedPtrField<proto::LanternRiteFireworksReformFactorInfo>::Add(factor_info_list);
    if ( LanternRiteActivity::reformFireworksFactorAndFillClient(
           this,
           *(_DWORD *)(v6 + 32),
           factor_add_value_min,
           factor_add_value_max,
           v51) )
    {
      common::milog::MiLogStream::create(
        &v93,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/lantern_rite_activity.cpp",
        "calcFireworksReformResult",
        2416);
      v52 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
              &v93,
              (const char (*)[66])"[LanternRite] reformFireworksFactorAndFillClient fail, factor_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v52, (const unsigned int *)(v6 + 32));
      common::milog::MiLogStream::~MiLogStream(&v93);
      v5 = -1;
      goto LABEL_75;
    }
  }
  v53 = 1;
LABEL_77:
  std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v6 + 144));
  if ( v53 )
    goto LABEL_102;
LABEL_103:
  result = v5;
  if ( v94 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 2470: range 0000000015FFD97E-0000000015FFDF67
__int64 __fastcall LanternRiteActivity::reformFireworksFactorAndFillClient(
        LanternRiteActivity *const this,
        uint32_t factor_id,
        uint32_t factor_add_value_min,
        uint32_t factor_add_value_max,
        proto::LanternRiteFireworksReformFactorInfo *factor_info)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r12
  common::milog::MiLogStream *v8; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  uint32_t *p_factor_length; // rcx
  uint32_t *v14; // rdx
  uint32_t v15; // ecx
  uint32_t factor_value; // esi
  uint32_t FireworksReformFactorScore; // ecx
  unsigned int __a; // [rsp+24h] [rbp-DCh] BYREF
  uint32_t factor_add_value; // [rsp+28h] [rbp-D8h]
  uint32_t fire_element_addition_ratio; // [rsp+2Ch] [rbp-D4h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,LanternRiteFireworksReformFactorData> >::_Self __y; // [rsp+30h] [rbp-D0h] BYREF
  const ActivitySeaLampExcelConfigMgr *config_mgr; // [rsp+38h] [rbp-C8h]
  const data::LanV2FireworksFactorDataExcelConfig *fireworks_factor_config_ptr; // [rsp+40h] [rbp-C0h]
  LanternRiteFireworksReformFactorData *factor_data; // [rsp+48h] [rbp-B8h]
  std::shared_ptr<Config> v28; // [rsp+50h] [rbp-B0h] BYREF
  common::milog::MiLogStream v29; // [rsp+60h] [rbp-A0h] BYREF
  char v30[128]; // [rsp+80h] [rbp-80h] BYREF

  v5 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 4 14 factor_id:2468 64 8 16 factor_iter:2478";
  *(_QWORD *)(v5 + 16) = LanternRiteActivity::reformFireworksFactorAndFillClient;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -202116352;
  *(_DWORD *)(v5 + 48) = factor_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v28);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v28)->design_config.txt_config_mgr.activity_sea_lamp_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v28);
  fireworks_factor_config_ptr = data::ActivitySeaLampExcelConfigMgrBase::findLanV2FireworksFactorDataExcelConfig(
                                  config_mgr,
                                  *(_DWORD *)(v5 + 48));
  if ( fireworks_factor_config_ptr )
  {
    *(std::map<unsigned int,LanternRiteFireworksReformFactorData>::iterator *)(v5 + 64) = std::map<unsigned int,LanternRiteFireworksReformFactorData>::find(
                                                                                            &this->fireworks_reform_Data_.factor_map,
                                                                                            (const std::map<unsigned int,LanternRiteFireworksReformFactorData>::key_type *)(v5 + 48));
    __y._M_node = std::map<unsigned int,LanternRiteFireworksReformFactorData>::end(&this->fireworks_reform_Data_.factor_map)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,LanternRiteFireworksReformFactorData> >::_Self *)(v5 + 64),
           &__y) )
    {
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/lantern_rite_activity.cpp",
        "reformFireworksFactorAndFillClient",
        2481);
      v10 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v29,
              (const char (*)[33])"[LanternRite] invalid factor_id:");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v5 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v11, (const char (*)[15])" challenge_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        v12,
        &this->fireworks_reform_Data_.challenge_id);
      common::milog::MiLogStream::~MiLogStream(&v29);
      result = 0xFFFFFFFFLL;
    }
    else
    {
      factor_data = &std::_Rb_tree_iterator<std::pair<unsigned int const,LanternRiteFireworksReformFactorData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,LanternRiteFireworksReformFactorData> > *const)(v5 + 64))->second;
      factor_add_value = common::tools::RandomUtils::rand<unsigned int>(factor_add_value_min, factor_add_value_max);
      if ( *(_BYTE *)(((unsigned __int64)&this->fireworks_reform_Data_.fire_element_value >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->fireworks_reform_Data_.fire_element_value >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      fire_element_addition_ratio = LanternRiteActivity::getFireElementAdditionRatio(
                                      this,
                                      this->fireworks_reform_Data_.fire_element_value);
      factor_add_value = (int)std::ceil(
                                (float)((float)((float)(int)fire_element_addition_ratio / 100.0) + 1.0)
                              * (float)(int)factor_add_value);
      p_factor_length = &fireworks_factor_config_ptr->factor_length;
      if ( *(_BYTE *)(((unsigned __int64)&factor_data->factor_value >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)factor_data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&factor_data->factor_value >> 3)
                                                                  + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      __a = factor_data->factor_value + factor_add_value;
      v14 = (uint32_t *)std::min<unsigned int>(&__a, p_factor_length);
      if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v15 = *v14;
      if ( *(_BYTE *)(((unsigned __int64)&factor_data->factor_value >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)factor_data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&factor_data->factor_value >> 3)
                                                                  + 0x7FFF8000) )
      {
        __asan_report_store4(&factor_data->factor_value);
      }
      factor_data->factor_value = v15;
      factor_value = factor_data->factor_value;
      if ( *(_BYTE *)(((unsigned __int64)factor_data >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)factor_data & 7) + 3) >= *(_BYTE *)(((unsigned __int64)factor_data >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      FireworksReformFactorScore = LanternRiteActivity::getFireworksReformFactorScore(
                                     this,
                                     factor_data->factor_id,
                                     factor_value);
      if ( *(_BYTE *)(((unsigned __int64)&factor_data->factor_score >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)factor_data + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&factor_data->factor_score >> 3)
                                                                  + 0x7FFF8000) )
      {
        __asan_report_store4(&factor_data->factor_score);
      }
      factor_data->factor_score = FireworksReformFactorScore;
      LanternRiteFireworksReformFactorData::toClient(factor_data, factor_info);
      result = 0LL;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/lantern_rite_activity.cpp",
      "reformFireworksFactorAndFillClient",
      2475);
    v8 = common::milog::MiLogStream::operator<<<char [71],(char *[71])0>(
           &v29,
           (const char (*)[71])"[LanternRite] findLanV2FireworksFactorDataExcelConfig fail, factor_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v5 + 48));
    common::milog::MiLogStream::~MiLogStream(&v29);
    result = 0xFFFFFFFFLL;
  }
  if ( v30 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 2497: range 0000000015FFDF68-0000000015FFEA52
int32_t __cdecl LanternRiteActivity::endFireworksReform(
        LanternRiteActivity *const this,
        const proto::LanternRiteEndFireworksReformReq *req,
        proto::LanternRiteEndFireworksReformRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  int32_t v6; // r14d
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  uint32_t best_score; // ecx
  uint32_t v26; // ecx
  uint32_t v27; // ecx
  PlayerEventComp *EventComp; // r14
  int32_t result; // eax
  bool is_new_record; // [rsp+23h] [rbp-FDh]
  bool is_stamina_up; // [rsp+24h] [rbp-FCh]
  bool is_unlock_new_skill; // [rsp+25h] [rbp-FBh]
  bool is_unlock_fireworks; // [rsp+26h] [rbp-FAh]
  bool is_full_score; // [rsp+27h] [rbp-F9h]
  LanternRiteFireworksChallengeData *challenge_data_ptr; // [rsp+28h] [rbp-F8h]
  ActivitySeaLampExcelConfigMgr *config_mgr; // [rsp+30h] [rbp-F0h]
  const data::LanV2FireworksChallengeDataExcelConfig *fireworks_challenge_config_ptr; // [rsp+38h] [rbp-E8h]
  std::shared_ptr<Config> v39; // [rsp+40h] [rbp-E0h] BYREF
  common::milog::MiLogStream v40; // [rsp+50h] [rbp-D0h] BYREF
  char v41[176]; // [rsp+70h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v41;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 13 stage_id:2504 64 4 17 challenge_id:2505 80 4 20 challenge_score:2521 96 16 14 event_ptr:2566";
  *(_QWORD *)(v3 + 16) = LanternRiteActivity::endFireworksReform;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -202178560;
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  if ( this->is_content_closed_ )
  {
    common::milog::MiLogStream::create(
      &v40,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/lantern_rite_activity.cpp",
      "endFireworksReform",
      2500);
    common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
      &v40,
      (const char (*)[45])"[LanternRite] fireworks reform content close");
    common::milog::MiLogStream::~MiLogStream(&v40);
    v6 = 10101;
  }
  else
  {
    *(_DWORD *)(v3 + 48) = proto::LanternRiteEndFireworksReformReq::stage_id(req);
    *(_DWORD *)(v3 + 64) = proto::LanternRiteEndFireworksReformReq::challenge_id(req);
    proto::LanternRiteEndFireworksReformRsp::set_stage_id(rsp_0, *(_DWORD *)(v3 + 48));
    proto::LanternRiteEndFireworksReformRsp::set_challenge_id(rsp_0, *(_DWORD *)(v3 + 64));
    challenge_data_ptr = LanternRiteActivity::findOpeningFireworksChallenge(
                           this,
                           *(_DWORD *)(v3 + 48),
                           *(_DWORD *)(v3 + 64));
    if ( challenge_data_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->fireworks_reform_Data_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->fireworks_reform_Data_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( this->fireworks_reform_Data_.stage_id != *(_DWORD *)(v3 + 48) )
        goto LABEL_16;
      if ( *(_BYTE *)(((unsigned __int64)&this->fireworks_reform_Data_.challenge_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->fireworks_reform_Data_.challenge_id >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( this->fireworks_reform_Data_.challenge_id == *(_DWORD *)(v3 + 64) )
      {
        *(_DWORD *)(v3 + 80) = LanternRiteFireworksReformData::getChallengeScore(&this->fireworks_reform_Data_);
        common::milog::MiLogStream::create(
          &v40,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/lantern_rite_activity.cpp",
          "endFireworksReform",
          2522);
        v17 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                &v40,
                (const char (*)[51])"[LanternRite] endFireworksReform, challenge_score:");
        v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v17,
                (const unsigned int *)(v3 + 80));
        v19 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v18, (const char (*)[13])" best_score:");
        v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v19,
                &challenge_data_ptr->best_score);
        v21 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v20, (const char (*)[15])" challenge_id:");
        v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v21,
                (const unsigned int *)(v3 + 64));
        v23 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v22, (const char (*)[11])" stage_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v40);
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v39);
        config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v39)->design_config.txt_config_mgr.activity_sea_lamp_config_mgr;
        std::shared_ptr<Config>::~shared_ptr(&v39);
        fireworks_challenge_config_ptr = data::ActivitySeaLampExcelConfigMgrBase::findLanV2FireworksChallengeDataExcelConfig(
                                           config_mgr,
                                           *(_DWORD *)(v3 + 64));
        if ( fireworks_challenge_config_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&fireworks_challenge_config_ptr->full_score >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)fireworks_challenge_config_ptr + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&fireworks_challenge_config_ptr->full_score >> 3)
                                                                                           + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          is_full_score = fireworks_challenge_config_ptr->full_score <= *(_DWORD *)(v3 + 80);
          is_new_record = 0;
          is_stamina_up = 0;
          is_unlock_new_skill = 0;
          is_unlock_fireworks = 0;
          if ( *(_BYTE *)(((unsigned __int64)&challenge_data_ptr->best_score >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)challenge_data_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&challenge_data_ptr->best_score >> 3)
                                                                             + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          if ( challenge_data_ptr->best_score < *(_DWORD *)(v3 + 80) )
          {
            is_new_record = 1;
            best_score = challenge_data_ptr->best_score;
            if ( *(_BYTE *)(((unsigned __int64)&fireworks_challenge_config_ptr->unlock_ability_score >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&fireworks_challenge_config_ptr->unlock_ability_score >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            if ( best_score < fireworks_challenge_config_ptr->unlock_ability_score
              && fireworks_challenge_config_ptr->unlock_ability_score <= *(_DWORD *)(v3 + 80) )
            {
              if ( *(_BYTE *)(((unsigned __int64)&fireworks_challenge_config_ptr->add_stamina_value >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&fireworks_challenge_config_ptr->add_stamina_value >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4();
              }
              if ( fireworks_challenge_config_ptr->add_stamina_value )
                is_stamina_up = 1;
              if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::unordered_set<unsigned int>> const,unsigned int>(
                     &config_mgr->fireworks_challenge_unlock_skill_map,
                     (const unsigned int *)(v3 + 64)) )
              {
                is_unlock_new_skill = 1;
              }
            }
            if ( *(_BYTE *)(((unsigned __int64)&challenge_data_ptr->best_score >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)challenge_data_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&challenge_data_ptr->best_score >> 3)
                                                                               + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            v26 = challenge_data_ptr->best_score;
            if ( *(_BYTE *)(((unsigned __int64)&fireworks_challenge_config_ptr->unlock_fireworks_score >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)fireworks_challenge_config_ptr + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&fireworks_challenge_config_ptr->unlock_fireworks_score >> 3)
                                                                                             + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            if ( v26 < fireworks_challenge_config_ptr->unlock_fireworks_score
              && fireworks_challenge_config_ptr->unlock_fireworks_score <= *(_DWORD *)(v3 + 80) )
            {
              is_unlock_fireworks = 1;
            }
            v27 = *(_DWORD *)(v3 + 80);
            if ( *(_BYTE *)(((unsigned __int64)&challenge_data_ptr->best_score >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)challenge_data_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&challenge_data_ptr->best_score >> 3)
                                                                               + 0x7FFF8000) )
            {
              __asan_report_store4(&challenge_data_ptr->best_score);
            }
            challenge_data_ptr->best_score = v27;
          }
          proto::LanternRiteEndFireworksReformRsp::set_final_score(rsp_0, *(_DWORD *)(v3 + 80));
          proto::LanternRiteEndFireworksReformRsp::set_is_new_record(rsp_0, is_new_record);
          proto::LanternRiteEndFireworksReformRsp::set_is_stamina_up(rsp_0, is_stamina_up);
          proto::LanternRiteEndFireworksReformRsp::set_is_unlock_new_skill(rsp_0, is_unlock_new_skill);
          proto::LanternRiteEndFireworksReformRsp::set_is_unlock_fireworks(rsp_0, is_unlock_fireworks);
          proto::LanternRiteEndFireworksReformRsp::set_is_full_score(rsp_0, is_full_score);
          common::tools::perf::make_shared<FireworksChallengeSettleEvent,unsigned int &,unsigned int &>(
            (unsigned int *)(v3 + 96),
            (unsigned int *)(v3 + 64),
            (unsigned int *)(v3 + 80),
            (unsigned int *)(v3 + 64));
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          EventComp = Player::getEventComp(this->player_);
          std::shared_ptr<BaseEvent>::shared_ptr<FireworksChallengeSettleEvent,void>(
            (std::shared_ptr<BaseEvent> *const)&v39,
            (const std::shared_ptr<FireworksChallengeSettleEvent> *)(v3 + 96));
          PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v39);
          std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v39);
          LanternRiteActivity::logFireworksReformSettle(this);
          LanternRiteFireworksReformData::reset(&this->fireworks_reform_Data_);
          BaseActivity::notifyClientData(this, 0);
          v6 = 0;
          std::shared_ptr<FireworksChallengeSettleEvent>::~shared_ptr((std::shared_ptr<FireworksChallengeSettleEvent> *const)(v3 + 96));
        }
        else
        {
          common::milog::MiLogStream::create(
            &v40,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/activity/lantern_rite_activity.cpp",
            "endFireworksReform",
            2529);
          v24 = common::milog::MiLogStream::operator<<<char [77],(char *[77])0>(
                  &v40,
                  (const char (*)[77])"[LanternRite] findLanV2FireworksChallengeDataExcelConfig fail, challenge_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)(v3 + 64));
          common::milog::MiLogStream::~MiLogStream(&v40);
          v6 = -1;
        }
      }
      else
      {
LABEL_16:
        common::milog::MiLogStream::create(
          &v40,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/lantern_rite_activity.cpp",
          "endFireworksReform",
          2516);
        v10 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                &v40,
                (const char (*)[53])"[LanternRite] client param invalid, client stage_id:");
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v10,
                (const unsigned int *)(v3 + 48));
        v12 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                v11,
                (const char (*)[22])" client challenge_id:");
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v12,
                (const unsigned int *)(v3 + 64));
        v14 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                v13,
                (const char (*)[18])" reform stage_id:");
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v14,
                &this->fireworks_reform_Data_.stage_id);
        v16 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                v15,
                (const char (*)[22])" reform challenge_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
          v16,
          &this->fireworks_reform_Data_.challenge_id);
        common::milog::MiLogStream::~MiLogStream(&v40);
        v6 = 10103;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v40,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/lantern_rite_activity.cpp",
        "endFireworksReform",
        2511);
      v7 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
             &v40,
             (const char (*)[64])"[LanternRite] findOpeningFireworksChallenge fail, challenge_id:");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 64));
      v9 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v8, (const char (*)[11])" stage_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v40);
      v6 = 10102;
    }
  }
  result = v6;
  if ( v41 == (char *)v3 )
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

// Line 2579: range 0000000015FFEA54-0000000015FFEF8E
// local variable allocation has failed, the output may be wrong!
void __cdecl LanternRiteActivity::logFireworksReformSettle(LanternRiteActivity *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyLanternRiteFireworksReformSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyLanternRiteFireworksReformSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyLanternRiteFireworksReformSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // r14
  uint32_t ChallengeScore; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyLanternRiteFireworksReformSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  Player *v10; // r14
  std::string v11; // [rsp+0h] [rbp-110h] OVERLAPPED BYREF
  std::vector<LanternRiteFireworksReformResultData>::iterator __for_end; // [rsp+20h] [rbp-F0h] BYREF
  std::vector<LanternRiteFireworksReformResultData> *__for_range; // [rsp+28h] [rbp-E8h]
  const LanternRiteFireworksReformResultData *result_data; // [rsp+30h] [rbp-E0h]
  proto_log::LanternRiteFireworksReformResultInfo *result_log; // [rsp+38h] [rbp-D8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+40h] [rbp-D0h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+50h] [rbp-C0h] BYREF
  std::string v18; // [rsp+60h] [rbp-B0h] BYREF
  char v19[144]; // [rsp+80h] [rbp-90h] BYREF

  v11._M_string_length = (std::string::size_type)this;
  v1 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 23 log_context_holder:2580 64 16 12 log_ptr:2581";
  *(_QWORD *)(v1 + 16) = LanternRiteActivity::logFireworksReformSettle;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -202178560;
  if ( *(_BYTE *)(((v11._M_string_length + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Player::getBasicComp(*(Player *const *)(v11._M_string_length + 24));
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v18, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 48), 0xDEAu, v11);
  std::string::~string(&v18);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyLanternRiteFireworksReformSettle>();
  v5 = std::__shared_ptr_access<proto_log::PlayerLogBodyLanternRiteFireworksReformSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyLanternRiteFireworksReformSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
  if ( *(_BYTE *)(((v11._M_string_length + 940) >> 3) + 0x7FFF8000) != 0
    && (char)(((LOBYTE(v11._M_string_length) - 84) & 7) + 3) >= *(_BYTE *)(((v11._M_string_length + 940) >> 3)
                                                                         + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto_log::PlayerLogBodyLanternRiteFireworksReformSettle::set_challenge_id(
    v5,
    *(_DWORD *)(v11._M_string_length + 940));
  v6 = std::__shared_ptr_access<proto_log::PlayerLogBodyLanternRiteFireworksReformSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyLanternRiteFireworksReformSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
  if ( *(_BYTE *)(((v11._M_string_length + 948) >> 3) + 0x7FFF8000) != 0
    && (char)(((LOBYTE(v11._M_string_length) - 76) & 7) + 3) >= *(_BYTE *)(((v11._M_string_length + 948) >> 3)
                                                                         + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto_log::PlayerLogBodyLanternRiteFireworksReformSettle::set_remain_stamina_value(
    v6,
    *(_DWORD *)(v11._M_string_length + 948));
  v7 = std::__shared_ptr_access<proto_log::PlayerLogBodyLanternRiteFireworksReformSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyLanternRiteFireworksReformSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
  ChallengeScore = LanternRiteFireworksReformData::getChallengeScore((LanternRiteFireworksReformData *const)(v11._M_string_length + 936));
  proto_log::PlayerLogBodyLanternRiteFireworksReformSettle::set_final_reform_score(v7, ChallengeScore);
  __for_range = (std::vector<LanternRiteFireworksReformResultData> *)(v11._M_string_length + 1056);
  *((std::vector<LanternRiteFireworksReformResultData>::iterator *)&v11._anon_0._M_allocated_capacity + 1) = std::vector<LanternRiteFireworksReformResultData>::begin((std::vector<LanternRiteFireworksReformResultData> *const)(v11._M_string_length + 1056));
  __for_end._M_current = std::vector<LanternRiteFireworksReformResultData>::end((std::vector<LanternRiteFireworksReformResultData> *const)(v11._M_string_length + 1056))._M_current;
  while ( __gnu_cxx::operator!=<LanternRiteFireworksReformResultData *,std::vector<LanternRiteFireworksReformResultData>>(
            (const __gnu_cxx::__normal_iterator<LanternRiteFireworksReformResultData*,std::vector<LanternRiteFireworksReformResultData> > *)&v11._anon_0._M_allocated_capacity
          + 1,
            &__for_end) )
  {
    result_data = __gnu_cxx::__normal_iterator<LanternRiteFireworksReformResultData *,std::vector<LanternRiteFireworksReformResultData>>::operator*(
                    (const __gnu_cxx::__normal_iterator<LanternRiteFireworksReformResultData*,std::vector<LanternRiteFireworksReformResultData> > *const)&v11._anon_0._M_allocated_capacity
                  + 1);
    v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyLanternRiteFireworksReformSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyLanternRiteFireworksReformSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    result_log = proto_log::PlayerLogBodyLanternRiteFireworksReformSettle::add_result_info_list(v9);
    if ( *(_BYTE *)(((unsigned __int64)result_data >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)result_data & 7) + 3) >= *(_BYTE *)(((unsigned __int64)result_data >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto_log::LanternRiteFireworksReformResultInfo::set_skill_id(result_log, result_data->skill_id);
    if ( *(_BYTE *)(((unsigned __int64)&result_data->factor_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)result_data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&result_data->factor_id >> 3)
                                                                + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto_log::LanternRiteFireworksReformResultInfo::set_factor_id(result_log, result_data->factor_id);
    if ( *(_BYTE *)(((unsigned __int64)&result_data->reform_score >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)result_data + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&result_data->reform_score >> 3)
                                                                + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto_log::LanternRiteFireworksReformResultInfo::set_reform_score(result_log, result_data->reform_score);
    __gnu_cxx::__normal_iterator<LanternRiteFireworksReformResultData *,std::vector<LanternRiteFireworksReformResultData>>::operator++(
      (__gnu_cxx::__normal_iterator<LanternRiteFireworksReformResultData*,std::vector<LanternRiteFireworksReformResultData> > *const)&v11._anon_0._M_allocated_capacity
    + 1);
  }
  if ( *(_BYTE *)(((v11._M_string_length + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v10 = *(Player **)(v11._M_string_length + 24);
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyLanternRiteFireworksReformSettle,void>(
    &p_body_ptr,
    (const std::shared_ptr<proto_log::PlayerLogBodyLanternRiteFireworksReformSettle> *)(v1 + 64));
  Player::printStatLog(v10, &p_body_ptr, &p_body_ext_ptr, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
  std::shared_ptr<proto_log::PlayerLogBodyLanternRiteFireworksReformSettle>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyLanternRiteFireworksReformSettle> *const)(v1 + 64));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 48));
  if ( v19 == (char *)v1 )
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

// Line 2596: range 0000000015FFEF90-0000000015FFEFB1
int32_t __cdecl LanternRiteActivity::openFireworksStageByGm(LanternRiteActivity *const this, uint32_t stage_id)
{
  return LanternRiteActivity::openFireworksStage(this, stage_id);
};

// Line 2601: range 0000000015FFEFB2-0000000015FFF371
__int64 __fastcall LanternRiteActivity::setFireworksChallengeScoreByGm(
        LanternRiteActivity *const this,
        uint32_t challenge_id,
        uint32_t score)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v8; // rdx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> __y; // [rsp+18h] [rbp-C8h] BYREF
  const ActivitySeaLampExcelConfigMgr *config_mgr; // [rsp+20h] [rbp-C0h]
  LanternRiteFireworksChallengeData *challenge_data_ptr; // [rsp+28h] [rbp-B8h]
  std::shared_ptr<Config> v16; // [rsp+30h] [rbp-B0h] BYREF
  common::milog::MiLogStream v17; // [rsp+40h] [rbp-A0h] BYREF
  char v18[128]; // [rsp+60h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 17 challenge_id:2600 64 8 9 iter:2603";
  *(_QWORD *)(v3 + 16) = LanternRiteActivity::setFireworksChallengeScoreByGm;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = challenge_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v16);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v16)->design_config.txt_config_mgr.activity_sea_lamp_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v16);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                  &config_mgr->fireworks_challenge_stage_map,
                                                                                  (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v3 + 48));
  __y._M_cur = std::unordered_map<unsigned int,unsigned int>::end(&config_mgr->fireworks_challenge_stage_map)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,unsigned int>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v3 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/lantern_rite_activity.cpp",
      "setFireworksChallengeScoreByGm",
      2606);
    v6 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
           &v17,
           (const char (*)[45])"[LanternRite] find stage fail, challenge_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v17);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    v8 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v3 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v8->second >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v8 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    challenge_data_ptr = LanternRiteActivity::findOpeningFireworksChallenge(this, v8->second, *(_DWORD *)(v3 + 48));
    if ( challenge_data_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&challenge_data_ptr->best_score >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)challenge_data_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&challenge_data_ptr->best_score >> 3)
                                                                         + 0x7FFF8000) )
      {
        __asan_report_store4(&challenge_data_ptr->best_score);
      }
      challenge_data_ptr->best_score = score;
      BaseActivity::notifyClientData(this, 0);
      result = 0LL;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/lantern_rite_activity.cpp",
        "setFireworksChallengeScoreByGm",
        2613);
      v9 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
             &v17,
             (const char (*)[60])"[LanternRite] findOpeningFireworksChallenge fail, stage_id:");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 48));
      v11 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v10, (const char (*)[15])" challenge_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v17);
      result = 0xFFFFFFFFLL;
    }
  }
  if ( v18 == (char *)v3 )
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

// Line 2622: range 0000000015FFF372-0000000015FFF534
__int64 __fastcall LanternRiteActivity::setFireworksReformStaminaByGm(
        LanternRiteActivity *const this,
        uint32_t stamina_value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  uint32_t v5; // ecx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  __int64 result; // rax
  common::milog::MiLogStream v10; // [rsp+10h] [rbp-80h] BYREF
  char v11[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 18 stamina_value:2621";
  *(_QWORD *)(v2 + 16) = LanternRiteActivity::setFireworksReformStaminaByGm;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = stamina_value;
  v5 = *(_DWORD *)(v2 + 32);
  if ( *(_BYTE *)(((unsigned __int64)&this->fireworks_reform_Data_.stamina_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->fireworks_reform_Data_.stamina_value >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->fireworks_reform_Data_.stamina_value);
  }
  this->fireworks_reform_Data_.stamina_value = v5;
  common::milog::MiLogStream::create(
    &v10,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/lantern_rite_activity.cpp",
    "setFireworksReformStaminaByGm",
    2624);
  v6 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
         &v10,
         (const char (*)[45])"setFireworksReformStaminaByGm, challenge_id:");
  v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
         v6,
         &this->fireworks_reform_Data_.challenge_id);
  v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v7, (const char (*)[16])" stamina_value:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 32));
  common::milog::MiLogStream::~MiLogStream(&v10);
  result = 0LL;
  if ( v11 == (char *)v2 )
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

// Line 2629: range 0000000015FFF536-0000000015FFF6C6
__int64 __fastcall LanternRiteActivity::setFireworksReformScoreByGm(LanternRiteActivity *const this, uint32_t score)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  uint32_t v5; // ecx
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  common::milog::MiLogStream v8; // [rsp+10h] [rbp-80h] BYREF
  char v9[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 10 score:2628";
  *(_QWORD *)(v2 + 16) = LanternRiteActivity::setFireworksReformScoreByGm;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = score;
  v5 = *(_DWORD *)(v2 + 32);
  if ( *(_BYTE *)(((unsigned __int64)&this->fireworks_reform_Data_.gm_challenge_score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fireworks_reform_Data_.gm_challenge_score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->fireworks_reform_Data_.gm_challenge_score);
  }
  this->fireworks_reform_Data_.gm_challenge_score = v5;
  common::milog::MiLogStream::create(
    &v8,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/lantern_rite_activity.cpp",
    "setFireworksReformScoreByGm",
    2631);
  v6 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
         &v8,
         (const char (*)[36])"setFireworksReformScoreByGm, score:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
  common::milog::MiLogStream::~MiLogStream(&v8);
  result = 0LL;
  if ( v9 == (char *)v2 )
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

// Line 2636: range 0000000016000090-00000000160009FA
void __fastcall LanternRiteActivity::updateSalveBundleTrackingMark(
        LanternRiteActivity *const this,
        uint32_t stage_id,
        const std::vector<data::SalvagePlayType> *salvage_type_vec)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,LanternSalvageStage> >::pointer v7; // rax
  bool *p_is_open; // rax
  common::milog::MiLogStream *v9; // rax
  PlayerHomeComp *HomeComp; // rax
  char v11; // al
  common::milog::MiLogStream *v12; // rcx
  Scene *v13; // r14
  uint32_t Uid; // eax
  __gnu_cxx::__normal_iterator<const data::SalvagePlayType*,std::vector<data::SalvagePlayType> >::reference v15; // rdx
  data::SalvagePlayType play_type; // [rsp+2Ch] [rbp-1A4h]
  std::vector<data::SalvagePlayType>::const_iterator __for_begin; // [rsp+30h] [rbp-1A0h] BYREF
  std::vector<data::SalvagePlayType>::const_iterator __for_end; // [rsp+38h] [rbp-198h] BYREF
  LanternSalvageStage *stage; // [rsp+40h] [rbp-190h]
  const std::vector<data::SalvagePlayType> *__for_range; // [rsp+48h] [rbp-188h]
  std::shared_ptr<PlayerWorld> __r; // [rsp+50h] [rbp-180h] BYREF
  common::milog::MiLogStream v23; // [rsp+60h] [rbp-170h] BYREF
  char v24[336]; // [rsp+80h] [rbp-150h] BYREF

  v3 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 48 4 13 stage_id:2635 64 8 15 stage_iter:2637 96 12 19 cur_player_pos:2673 128 12 19 cur_playe"
                        "r_rot:2673 160 16 21 player_world_ptr:2655 192 16 21 target_scene_ptr:2667 224 24 27 process_pla"
                        "y_type_func:2683";
  *(_QWORD *)(v3 + 16) = LanternRiteActivity::updateSalveBundleTrackingMark;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -219020288;
  v5[536862724] = -219020288;
  v5[536862725] = -219021312;
  v5[536862726] = -219021312;
  v5[536862727] = -218103808;
  v5[536862728] = -202116109;
  *(_DWORD *)(v3 + 48) = stage_id;
  *(std::map<unsigned int,LanternSalvageStage>::iterator *)(v3 + 64) = std::map<unsigned int,LanternSalvageStage>::find(
                                                                         &this->salvage_stage_map_,
                                                                         (const std::map<unsigned int,LanternSalvageStage>::key_type *)(v3 + 48));
  __for_end._M_current = (const data::SalvagePlayType *)std::map<unsigned int,LanternSalvageStage>::end(&this->salvage_stage_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,LanternSalvageStage> >::_Self *)(v3 + 64),
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,LanternSalvageStage> >::_Self *)&__for_end) )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/lantern_rite_activity.cpp",
      "updateSalveBundleTrackingMark",
      2640);
    v6 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
           &v23,
           (const char (*)[41])"[LanternRite] stage not found, stage_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v23);
  }
  else
  {
    v7 = std::_Rb_tree_iterator<std::pair<unsigned int const,LanternSalvageStage>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,LanternSalvageStage> > *const)(v3 + 64));
    stage = &v7->second;
    p_is_open = &v7->second.is_open;
    if ( *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_open & 7) >= *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(p_is_open);
    }
    if ( !stage->is_open )
      goto LABEL_12;
    if ( *(_BYTE *)(((unsigned __int64)&stage->is_finished >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)stage + 5) & 7) >= *(_BYTE *)(((unsigned __int64)&stage->is_finished >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&stage->is_finished);
    }
    if ( stage->is_finished )
    {
LABEL_12:
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/lantern_rite_activity.cpp",
        "updateSalveBundleTrackingMark",
        2646);
      v9 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
             &v23,
             (const char (*)[56])"[LanternRite] stage not open or has finished, stage_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v23);
    }
    else if ( std::vector<data::SalvagePlayType>::empty(salvage_type_vec) )
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/lantern_rite_activity.cpp",
        "updateSalveBundleTrackingMark",
        2651);
      common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
        &v23,
        (const char (*)[36])"[LanternRite] salvage type is empty");
      common::milog::MiLogStream::~MiLogStream(&v23);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::getSceneComp(this->player_);
      PlayerSceneComp::getCurWorld<PlayerWorld>((const PlayerSceneComp *const)(v3 + 160));
      if ( std::operator==<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v3 + 160)) )
        goto LABEL_21;
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      HomeComp = Player::getHomeComp(this->player_);
      if ( PlayerHomeComp::isInHomeWorld(HomeComp) )
LABEL_21:
        v11 = 1;
      else
        v11 = 0;
      if ( v11 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Player::getSceneComp(this->player_);
        PlayerSceneComp::getMyPlayerWorld((const PlayerSceneComp *const)&__r);
        std::shared_ptr<PlayerWorld>::operator=((std::shared_ptr<PlayerWorld> *const)(v3 + 160), &__r);
        std::shared_ptr<PlayerWorld>::~shared_ptr(&__r);
      }
      if ( std::operator==<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v3 + 160)) )
      {
        common::milog::MiLogStream::create(
          &v23,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/lantern_rite_activity.cpp",
          "updateSalveBundleTrackingMark",
          2663);
        v12 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                &v23,
                (const char (*)[23])"world is null! player:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        operator<<(v12, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v23);
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Player::getSceneComp(this->player_);
        PlayerSceneComp::getCurScene<PlayerWorldScene>((PlayerSceneComp *const)(v3 + 192));
        if ( std::operator==<PlayerWorldScene>(0LL, (const std::shared_ptr<PlayerWorldScene> *)(v3 + 192)) )
        {
          std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
          PlayerWorld::getMainWorldScene((PlayerWorld *const)&__r);
          std::shared_ptr<PlayerWorldScene>::operator=(
            (std::shared_ptr<PlayerWorldScene> *const)(v3 + 192),
            (std::shared_ptr<PlayerWorldScene> *)&__r);
          std::shared_ptr<PlayerWorldScene>::~shared_ptr((std::shared_ptr<PlayerWorldScene> *const)&__r);
        }
        Vector3::Vector3((Vector3 *const)(v3 + 96), 0.0, 0.0, 0.0);
        Vector3::Vector3((Vector3 *const)(v3 + 128), 0.0, 0.0, 0.0);
        if ( std::operator!=<PlayerWorldScene>((const std::shared_ptr<PlayerWorldScene> *)(v3 + 192), 0LL) )
        {
          v13 = (Scene *)std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          Uid = Player::getUid(this->player_);
          Scene::getPlayerLocation(v13, Uid, (Vector3 *)(v3 + 96), (Vector3 *)(v3 + 128));
        }
        else
        {
          common::milog::MiLogStream::create(
            &v23,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/lantern_rite_activity.cpp",
            "updateSalveBundleTrackingMark",
            2680);
          common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
            &v23,
            (const char (*)[42])"[LanternRite] target_scene_ptr is nullptr");
          common::milog::MiLogStream::~MiLogStream(&v23);
        }
        *(_QWORD *)(v3 + 224) = this;
        *(_QWORD *)(v3 + 232) = stage;
        *(_QWORD *)(v3 + 240) = v3 + 96;
        __for_range = salvage_type_vec;
        __for_begin._M_current = std::vector<data::SalvagePlayType>::begin(salvage_type_vec)._M_current;
        __for_end._M_current = std::vector<data::SalvagePlayType>::end(__for_range)._M_current;
        while ( __gnu_cxx::operator!=<data::SalvagePlayType const*,std::vector<data::SalvagePlayType>>(
                  &__for_begin,
                  &__for_end) )
        {
          v15 = __gnu_cxx::__normal_iterator<data::SalvagePlayType const*,std::vector<data::SalvagePlayType>>::operator*(&__for_begin);
          if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          play_type = *v15;
          if ( *v15 == SALVAGE_PLAY_TYPE_LAND || play_type == SALVAGE_PLAY_TYPE_SEA )
            LanternRiteActivity::updateSalveBundleTrackingMark(unsigned int,std::vector<data::SalvagePlayType> const&)::{lambda(data::SalvagePlayType)#1}::operator()(
              (const LanternRiteActivity::updateSalveBundleTrackingMark::<lambda(data::SalvagePlayType)> *const)(v3 + 224),
              play_type);
          __gnu_cxx::__normal_iterator<data::SalvagePlayType const*,std::vector<data::SalvagePlayType>>::operator++(&__for_begin);
        }
        std::shared_ptr<PlayerWorldScene>::~shared_ptr((std::shared_ptr<PlayerWorldScene> *const)(v3 + 192));
      }
      std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v3 + 160));
    }
  }
  if ( v24 == (char *)v3 )
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
};

// Line 2683: range 0000000015FFF6C8-000000001600008E
void __fastcall LanternRiteActivity::updateSalveBundleTrackingMark(unsigned int,std::vector<data::SalvagePlayType> const&)::{lambda(data::SalvagePlayType)#1}::operator()(
        unsigned __int64 __closure,
        data::SalvagePlayType play_type)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const ActivitySeaLampExcelConfigMgr *p_activity_sea_lamp_config_mgr; // rdi
  data::SalvagePlayType v6; // ecx
  unsigned __int64 v7; // rax
  std::map<data::SalvagePlayType,unsigned int>::mapped_type *v8; // rdx
  const unsigned int *M_current; // r14
  std::vector<unsigned int>::const_iterator v10; // rax
  std::vector<unsigned int>::const_iterator v11; // rax
  std::vector<unsigned int>::const_reference v12; // rdx
  __int64 v13; // rax
  PlayerGroupLinkComp *GroupLinkComp; // rax
  __int64 v15; // rax
  const PlayerGroupLinkComp *v16; // rdi
  uint32_t v17; // ecx
  LanternRiteActivity *v18; // rax
  char v19; // dl
  char v20; // al
  __m128i v21; // xmm0
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  bool v23; // r14
  common::milog::MiLogStream *v24; // rax
  __int64 v25; // rax
  PlayerGroupLinkComp *v26; // rax
  char v27; // al
  __int64 v28; // rax
  PlayerGroupLinkComp *v29; // rax
  std::map<data::SalvagePlayType,unsigned int>::mapped_type *v30; // rax
  _DWORD *v31; // rdx
  std::vector<unsigned int>::const_reference v32; // rdx
  __int64 v33; // rax
  PlayerGroupLinkComp *v34; // rax
  std::map<data::SalvagePlayType,unsigned int>::mapped_type *v35; // rax
  uint32_t *v36; // rdx
  int32_t old_index; // [rsp+18h] [rbp-128h]
  int32_t first_unfinished_index; // [rsp+1Ch] [rbp-124h]
  float min_distance; // [rsp+20h] [rbp-120h]
  int32_t idx; // [rsp+24h] [rbp-11Ch]
  uint32_t mark_bundle_id; // [rsp+28h] [rbp-118h]
  float cur_distance; // [rsp+2Ch] [rbp-114h]
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > __rhs; // [rsp+30h] [rbp-110h] BYREF
  const std::vector<unsigned int> *bundle_vec_ptr; // [rsp+38h] [rbp-108h]
  std::shared_ptr<Config> v46; // [rsp+40h] [rbp-100h] BYREF
  common::milog::MiLogStream v47; // [rsp+50h] [rbp-F0h] BYREF
  char v48[208]; // [rsp+70h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v48;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 4 27 old_tracking_bundle_id:2691 64 4 14 bundle_id:2703 80 4 14 play_type:2683 96 8 13 old_"
                        "iter:2692 128 12 14 group_pos:2706";
  *(_QWORD *)(v2 + 16) = LanternRiteActivity::updateSalveBundleTrackingMark(unsigned int,std::vector<data::SalvagePlayType> const&)::{lambda(data::SalvagePlayType)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234556924;
  v4[536862723] = -218959360;
  v4[536862724] = -202177536;
  *(_DWORD *)(v2 + 80) = play_type;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v46);
  p_activity_sea_lamp_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v46)->design_config.txt_config_mgr.activity_sea_lamp_config_mgr;
  v6 = *(_DWORD *)(v2 + 80);
  if ( *(_BYTE *)(((__closure + 8) >> 3) + 0x7FFF8000) )
  {
    p_activity_sea_lamp_config_mgr = (const ActivitySeaLampExcelConfigMgr *)(__closure + 8);
    __asan_report_load8();
  }
  v7 = *(_QWORD *)(__closure + 8);
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((v7 >> 3) + 0x7FFF8000) <= 3 )
  {
    p_activity_sea_lamp_config_mgr = *(const ActivitySeaLampExcelConfigMgr **)(__closure + 8);
    __asan_report_load4();
  }
  bundle_vec_ptr = ActivitySeaLampExcelConfigMgr::getSalvageBundleVecByStageIdAnaPlayType(
                     p_activity_sea_lamp_config_mgr,
                     *(_DWORD *)v7,
                     v6);
  std::shared_ptr<Config>::~shared_ptr(&v46);
  if ( bundle_vec_ptr )
  {
    if ( *(_BYTE *)((__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v8 = std::map<data::SalvagePlayType,unsigned int>::operator[](
           (std::map<data::SalvagePlayType,unsigned int> *const)(*(_QWORD *)__closure + 1664LL),
           (const std::map<data::SalvagePlayType,unsigned int>::key_type *)(v2 + 80));
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 48) = *v8;
    M_current = std::vector<unsigned int>::end(bundle_vec_ptr)._M_current;
    v10._M_current = std::vector<unsigned int>::begin(bundle_vec_ptr)._M_current;
    *(__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 96) = std::find<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,unsigned int>(
                                                                                                   v10,
                                                                                                   (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current,
                                                                                                   (const unsigned int *)(v2 + 48));
    old_index = -1;
    __rhs._M_current = std::vector<unsigned int>::end(bundle_vec_ptr)._M_current;
    if ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
           (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 96),
           &__rhs) )
    {
      v11._M_current = std::vector<unsigned int>::begin(bundle_vec_ptr)._M_current;
      old_index = std::distance<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>>(
                    v11,
                    *(__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 96));
    }
    first_unfinished_index = -1;
    min_distance = 3.4028235e38;
    for ( idx = 0; idx < std::vector<unsigned int>::size(bundle_vec_ptr); ++idx )
    {
      v12 = std::vector<unsigned int>::at(bundle_vec_ptr, idx);
      if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v2 + 64) = *v12;
      if ( *(_BYTE *)((__closure >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v13 = *(_QWORD *)__closure;
      if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)__closure + 24LL) >> 3) + 0x7FFF8000) )
        v13 = __asan_report_load8();
      GroupLinkComp = Player::getGroupLinkComp(*(Player *const *)(v13 + 24));
      if ( !PlayerGroupLinkComp::isGroupBundleRegistered(GroupLinkComp, *(_DWORD *)(v2 + 64)) )
        goto LABEL_34;
      if ( *(_BYTE *)((__closure >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v15 = *(_QWORD *)__closure;
      if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)__closure + 24LL) >> 3) + 0x7FFF8000) )
        v15 = __asan_report_load8();
      v16 = Player::getGroupLinkComp(*(Player *const *)(v15 + 24));
      v17 = *(_DWORD *)(v2 + 64);
      if ( *(_BYTE *)((__closure >> 3) + 0x7FFF8000) )
      {
        v16 = (const PlayerGroupLinkComp *)__closure;
        __asan_report_load8();
      }
      v18 = *(LanternRiteActivity **)__closure;
      v19 = *(_BYTE *)(((unsigned __int64)(*(_QWORD *)__closure + 32LL) >> 3) + 0x7FFF8000);
      if ( v19 != 0 && v19 <= 3 )
      {
        v16 = (const PlayerGroupLinkComp *)(*(_QWORD *)__closure + 32LL);
        __asan_report_load4();
      }
      if ( !PlayerGroupLinkComp::isGroupBundleFinish(v16, v18->activity_id_, v17) )
        v20 = 1;
      else
LABEL_34:
        v20 = 0;
      if ( v20 )
      {
        v21 = 0LL;
        Vector3::Vector3((Vector3 *const)(v2 + 128), 0.0, 0.0, 0.0);
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v46);
        v22 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v46);
        v23 = ActivityGroupLinksExcelConfigMgr::findBundleHintGroupPos(
                &v22->design_config.txt_config_mgr.activity_group_links_config_mgr,
                *(_DWORD *)(v2 + 64),
                (Vector3 *)(v2 + 128)) != 0;
        std::shared_ptr<Config>::~shared_ptr(&v46);
        if ( v23 )
        {
          common::milog::MiLogStream::create(
            &v47,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/activity/lantern_rite_activity.cpp",
            "operator()",
            2709);
          v24 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                  &v47,
                  (const char (*)[51])"[LanternRite] hint group pos not found, bundle_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)(v2 + 64));
          common::milog::MiLogStream::~MiLogStream(&v47);
        }
        else
        {
          if ( *(_BYTE *)(((__closure + 16) >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          *(float *)v21.m128i_i32 = getPlaneDistance(*(const Vector3 **)(__closure + 16), (const Vector3 *)(v2 + 128));
          cur_distance = COERCE_FLOAT(_mm_cvtsi128_si32(v21));
          if ( min_distance > cur_distance )
          {
            first_unfinished_index = idx;
            min_distance = cur_distance;
          }
        }
      }
    }
    if ( old_index < 0 )
      goto LABEL_50;
    if ( *(_BYTE *)((__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v25 = *(_QWORD *)__closure;
    if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)__closure + 24LL) >> 3) + 0x7FFF8000) )
      v25 = __asan_report_load8();
    v26 = Player::getGroupLinkComp(*(Player *const *)(v25 + 24));
    if ( PlayerGroupLinkComp::isGroupBundleRegistered(v26, *(_DWORD *)(v2 + 48)) )
      v27 = 1;
    else
LABEL_50:
      v27 = 0;
    if ( v27 )
    {
      if ( *(_BYTE *)((__closure >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v28 = *(_QWORD *)__closure;
      if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)__closure + 24LL) >> 3) + 0x7FFF8000) )
        v28 = __asan_report_load8();
      v29 = Player::getGroupLinkComp(*(Player *const *)(v28 + 24));
      PlayerGroupLinkComp::updateBundleMarkShowState(v29, *(_DWORD *)(v2 + 48), 0);
      if ( *(_BYTE *)((__closure >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v30 = std::map<data::SalvagePlayType,unsigned int>::operator[](
              (std::map<data::SalvagePlayType,unsigned int> *const)(*(_QWORD *)__closure + 1664LL),
              (const std::map<data::SalvagePlayType,unsigned int>::key_type *)(v2 + 80));
      v31 = v30;
      if ( *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v30 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v30);
      }
      *v31 = 0;
    }
    if ( first_unfinished_index >= 0 )
    {
      v32 = std::vector<unsigned int>::at(bundle_vec_ptr, first_unfinished_index);
      if ( *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v32 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      mark_bundle_id = *v32;
      if ( *(_BYTE *)((__closure >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v33 = *(_QWORD *)__closure;
      if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)__closure + 24LL) >> 3) + 0x7FFF8000) )
        v33 = __asan_report_load8();
      v34 = Player::getGroupLinkComp(*(Player *const *)(v33 + 24));
      PlayerGroupLinkComp::updateBundleMarkShowState(v34, mark_bundle_id, 1);
      if ( *(_BYTE *)((__closure >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v35 = std::map<data::SalvagePlayType,unsigned int>::operator[](
              (std::map<data::SalvagePlayType,unsigned int> *const)(*(_QWORD *)__closure + 1664LL),
              (const std::map<data::SalvagePlayType,unsigned int>::key_type *)(v2 + 80));
      v36 = v35;
      if ( *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v35 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v35);
      }
      *v36 = mark_bundle_id;
    }
  }
  if ( v48 == (char *)v2 )
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

// Line 2745: range 00000000160009FC-0000000016000BB3
void __cdecl LanternRiteActivity::clearSalvageBundleMark(LanternRiteActivity *const this)
{
  PlayerGroupLinkComp *GroupLinkComp; // rcx
  PlayerGroupLinkComp *v2; // rcx
  std::map<data::SalvagePlayType,unsigned int>::iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::map<data::SalvagePlayType,unsigned int>::iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  std::map<data::SalvagePlayType,unsigned int> *__for_range; // [rsp+20h] [rbp-20h]
  const std::pair<const data::SalvagePlayType,unsigned int> *v6; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,const std::pair<const data::SalvagePlayType,unsigned int> >::type *_; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,const std::pair<const data::SalvagePlayType,unsigned int> >::type *bundle_id; // [rsp+38h] [rbp-8h]

  __for_range = &this->salvage_current_tracking_bundle_map_;
  __for_begin._M_node = std::map<data::SalvagePlayType,unsigned int>::begin(&this->salvage_current_tracking_bundle_map_)._M_node;
  __for_end._M_node = std::map<data::SalvagePlayType,unsigned int>::end(&this->salvage_current_tracking_bundle_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v6 = std::_Rb_tree_iterator<std::pair<data::SalvagePlayType const,unsigned int>>::operator*(&__for_begin);
    _ = std::get<0ul,data::SalvagePlayType const,unsigned int>(v6);
    bundle_id = (std::tuple_element<1,const std::pair<const data::SalvagePlayType,unsigned int> >::type *)std::get<1ul,data::SalvagePlayType const,unsigned int>(v6);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    GroupLinkComp = Player::getGroupLinkComp(this->player_);
    if ( *(_BYTE *)(((unsigned __int64)bundle_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)bundle_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)bundle_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( PlayerGroupLinkComp::isGroupBundleRegistered(GroupLinkComp, *bundle_id) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v2 = Player::getGroupLinkComp(this->player_);
      if ( *(_BYTE *)(((unsigned __int64)bundle_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)bundle_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)bundle_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      PlayerGroupLinkComp::updateBundleMarkShowState(v2, *bundle_id, 0);
    }
    std::_Rb_tree_iterator<std::pair<data::SalvagePlayType const,unsigned int>>::operator++(&__for_begin);
  }
  std::map<data::SalvagePlayType,unsigned int>::clear(&this->salvage_current_tracking_bundle_map_);
};

// Line 2757: range 0000000016000BB4-0000000016001826
int32_t __cdecl LanternRiteActivity::unregisterSalvageGroupBundle(LanternRiteActivity *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::__shared_ptr_access<BaseSalvageChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  int v5; // eax
  const ActivitySeaLampExcelConfigMgr *v6; // rdi
  data::SalvagePlayType v7; // edx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v12; // rdx
  common::milog::MiLogStream *v13; // rax
  ActivitySeaLampExcelConfigMgr *v14; // r14
  std::__shared_ptr_access<SalvageScoreChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  common::milog::MiLogStream *v16; // r14
  std::__shared_ptr_access<SalvageScoreChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  common::milog::MiLogStream *v18; // rax
  ActivitySeaLampExcelConfigMgr *p_activity_sea_lamp_config_mgr; // r14
  std::__shared_ptr_access<SalvageBossChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  common::milog::MiLogStream *v21; // r14
  std::__shared_ptr_access<SalvageBossChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  int32_t result; // eax
  uint32_t bundle_id; // [rsp+14h] [rbp-1BCh]
  std::map<unsigned int,LanternSalvageStage>::iterator __for_begin; // [rsp+18h] [rbp-1B8h] BYREF
  std::map<unsigned int,LanternSalvageStage>::iterator __for_end; // [rsp+20h] [rbp-1B0h] BYREF
  std::map<data::SalvagePlayType,std::vector<std::shared_ptr<BaseSalvageChallenge>>>::const_iterator __for_begin_0; // [rsp+28h] [rbp-1A8h] BYREF
  std::map<data::SalvagePlayType,std::vector<std::shared_ptr<BaseSalvageChallenge>>>::const_iterator __for_end_0; // [rsp+30h] [rbp-1A0h] BYREF
  std::vector<std::shared_ptr<BaseSalvageChallenge>>::const_iterator __for_begin_1; // [rsp+38h] [rbp-198h] BYREF
  std::vector<std::shared_ptr<BaseSalvageChallenge>>::const_iterator __for_end_1; // [rsp+40h] [rbp-190h] BYREF
  std::vector<unsigned int>::const_iterator __for_begin_2; // [rsp+48h] [rbp-188h] BYREF
  std::vector<unsigned int>::const_iterator __for_end_2; // [rsp+50h] [rbp-180h] BYREF
  PlayerGroupLinkComp *group_link_comp; // [rsp+58h] [rbp-178h]
  std::map<unsigned int,LanternSalvageStage> *__for_range; // [rsp+60h] [rbp-170h]
  const std::pair<unsigned int const,LanternSalvageStage> *v35; // [rsp+68h] [rbp-168h]
  std::tuple_element<0,const std::pair<unsigned int const,LanternSalvageStage> >::type *_; // [rsp+70h] [rbp-160h]
  std::tuple_element<1,const std::pair<unsigned int const,LanternSalvageStage> >::type *stage; // [rsp+78h] [rbp-158h]
  const std::map<data::SalvagePlayType,std::vector<std::shared_ptr<BaseSalvageChallenge>>> *__for_range_0; // [rsp+80h] [rbp-150h]
  const std::pair<const data::SalvagePlayType,std::vector<std::shared_ptr<BaseSalvageChallenge>> > *v39; // [rsp+88h] [rbp-148h]
  std::tuple_element<0,const std::pair<const data::SalvagePlayType,std::vector<std::shared_ptr<BaseSalvageChallenge>> > >::type *__0; // [rsp+90h] [rbp-140h]
  std::tuple_element<1,const std::pair<const data::SalvagePlayType,std::vector<std::shared_ptr<BaseSalvageChallenge>> > >::type *challenge_vec; // [rsp+98h] [rbp-138h]
  const std::vector<std::shared_ptr<BaseSalvageChallenge>> *__for_range_1; // [rsp+A0h] [rbp-130h]
  const std::shared_ptr<BaseSalvageChallenge> *challenge_ptr; // [rsp+A8h] [rbp-128h]
  const data::SalvageChallengeDataExcelConfig *challenge_config_ptr_0; // [rsp+B0h] [rbp-120h]
  const data::SalvageChallengeDataExcelConfig *challenge_config_ptr; // [rsp+B8h] [rbp-118h]
  const std::vector<unsigned int> *bundle_vec_ptr; // [rsp+C0h] [rbp-110h]
  const std::vector<unsigned int> *__for_range_2; // [rsp+C8h] [rbp-108h]
  std::shared_ptr<Config> v48; // [rsp+D0h] [rbp-100h] BYREF
  common::milog::MiLogStream v49; // [rsp+E0h] [rbp-F0h] BYREF
  common::milog::MiLogStream v50; // [rsp+100h] [rbp-D0h] BYREF
  char v51[176]; // [rsp+120h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v51;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 4 14 play_type:2769 64 16 24 score_challenge_ptr:2793 96 16 24 score_challenge_ptr:2813";
  *(_QWORD *)(v1 + 16) = LanternRiteActivity::unregisterSalvageGroupBundle;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -219021312;
  v3[536862723] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  group_link_comp = Player::getGroupLinkComp(this->player_);
  __for_range = &this->salvage_stage_map_;
  __for_begin._M_node = std::map<unsigned int,LanternSalvageStage>::begin(&this->salvage_stage_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,LanternSalvageStage>::end(&this->salvage_stage_map_)._M_node;
LABEL_7:
  if ( std::operator!=(&__for_begin, &__for_end) )
  {
    v35 = std::_Rb_tree_iterator<std::pair<unsigned int const,LanternSalvageStage>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,LanternSalvageStage>(v35);
    stage = (std::tuple_element<1,const std::pair<unsigned int const,LanternSalvageStage> >::type *)std::get<1ul,unsigned int const,LanternSalvageStage>(v35);
    __for_range_0 = &stage->stage_challenge_map;
    __for_begin_0._M_node = std::map<data::SalvagePlayType,std::vector<std::shared_ptr<BaseSalvageChallenge>>>::begin(&stage->stage_challenge_map)._M_node;
    __for_end_0._M_node = std::map<data::SalvagePlayType,std::vector<std::shared_ptr<BaseSalvageChallenge>>>::end(__for_range_0)._M_node;
    while ( 1 )
    {
      if ( !std::operator!=(&__for_begin_0, &__for_end_0) )
      {
        std::_Rb_tree_iterator<std::pair<unsigned int const,LanternSalvageStage>>::operator++(&__for_begin);
        goto LABEL_7;
      }
      v39 = std::_Rb_tree_const_iterator<std::pair<data::SalvagePlayType const,std::vector<std::shared_ptr<BaseSalvageChallenge>>>>::operator*(&__for_begin_0);
      __0 = std::get<0ul,data::SalvagePlayType const,std::vector<std::shared_ptr<BaseSalvageChallenge>>>(v39);
      challenge_vec = (std::tuple_element<1,const std::pair<const data::SalvagePlayType,std::vector<std::shared_ptr<BaseSalvageChallenge>> > >::type *)std::get<1ul,data::SalvagePlayType const,std::vector<std::shared_ptr<BaseSalvageChallenge>>>(v39);
      __for_range_1 = challenge_vec;
      __for_begin_1._M_current = std::vector<std::shared_ptr<BaseSalvageChallenge>>::begin(challenge_vec)._M_current;
      __for_end_1._M_current = std::vector<std::shared_ptr<BaseSalvageChallenge>>::end(__for_range_1)._M_current;
      while ( __gnu_cxx::operator!=<std::shared_ptr<BaseSalvageChallenge> const*,std::vector<std::shared_ptr<BaseSalvageChallenge>>>(
                &__for_begin_1,
                &__for_end_1) )
      {
        challenge_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<BaseSalvageChallenge> const*,std::vector<std::shared_ptr<BaseSalvageChallenge>>>::operator*(&__for_begin_1);
        if ( std::operator==<BaseSalvageChallenge>(challenge_ptr, 0LL) )
          goto LABEL_64;
        v4 = std::__shared_ptr_access<BaseSalvageChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseSalvageChallenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)challenge_ptr);
        if ( *(_BYTE *)(((unsigned __int64)&v4->challenge_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v4->challenge_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v1 + 48) = v4->challenge_type;
        v5 = *(_DWORD *)(v1 + 48);
        if ( v5 == 5 )
        {
          std::dynamic_pointer_cast<SalvageBossChallenge,BaseSalvageChallenge>((const std::shared_ptr<BaseSalvageChallenge> *)(v1 + 96));
          if ( std::operator==<SalvageBossChallenge>((const std::shared_ptr<SalvageBossChallenge> *)(v1 + 96), 0LL) )
          {
            common::milog::MiLogStream::create(
              &v50,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/lantern_rite_activity.cpp",
              "unregisterSalvageGroupBundle",
              2816);
            v18 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                    &v50,
                    (const char (*)[47])"[LanternRite] challenge cast failed, stage_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &stage->stage_id);
            common::milog::MiLogStream::~MiLogStream(&v50);
          }
          else
          {
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v48);
            p_activity_sea_lamp_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v48)->design_config.txt_config_mgr.activity_sea_lamp_config_mgr;
            v20 = std::__shared_ptr_access<SalvageBossChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SalvageBossChallenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
            if ( *(_BYTE *)(((unsigned __int64)&v20->challenge_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&v20->challenge_id >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            challenge_config_ptr_0 = data::ActivitySeaLampExcelConfigMgrBase::findSalvageChallengeDataExcelConfig(
                                       p_activity_sea_lamp_config_mgr,
                                       v20->challenge_id);
            std::shared_ptr<Config>::~shared_ptr(&v48);
            if ( challenge_config_ptr_0 )
            {
              if ( *(_BYTE *)(((unsigned __int64)&challenge_config_ptr_0->group_link_id >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&challenge_config_ptr_0->group_link_id >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4();
              }
              if ( PlayerGroupLinkComp::isGroupBundleRegistered(group_link_comp, challenge_config_ptr_0->group_link_id) )
              {
                if ( *(_BYTE *)(((unsigned __int64)&challenge_config_ptr_0->group_link_id >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&challenge_config_ptr_0->group_link_id >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4();
                }
                PlayerGroupLinkComp::unregisterGroupBundle(group_link_comp, challenge_config_ptr_0->group_link_id, 1);
              }
            }
            else
            {
              common::milog::MiLogStream::create(
                &v50,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/player/activity/lantern_rite_activity.cpp",
                "unregisterSalvageGroupBundle",
                2822);
              v21 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
                      &v50,
                      (const char (*)[61])"[LanternRite] challenge_config_ptr is nullptr, challenge_id:");
              v22 = std::__shared_ptr_access<SalvageBossChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SalvageBossChallenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &v22->challenge_id);
              common::milog::MiLogStream::~MiLogStream(&v50);
            }
          }
          std::shared_ptr<SalvageBossChallenge>::~shared_ptr((std::shared_ptr<SalvageBossChallenge> *const)(v1 + 96));
        }
        else
        {
          if ( v5 > 5 )
            goto LABEL_63;
          if ( v5 > 2 )
          {
            if ( (unsigned int)(v5 - 3) > 1 )
            {
LABEL_63:
              common::milog::MiLogStream::create(
                &v50,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/lantern_rite_activity.cpp",
                "unregisterSalvageGroupBundle",
                2832);
              common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                &v50,
                (const char (*)[32])"[LanternRite] unkown play type!");
              common::milog::MiLogStream::~MiLogStream(&v50);
              goto LABEL_64;
            }
            std::dynamic_pointer_cast<SalvageScoreChallenge,BaseSalvageChallenge>((const std::shared_ptr<BaseSalvageChallenge> *)(v1 + 64));
            if ( std::operator==<SalvageScoreChallenge>((const std::shared_ptr<SalvageScoreChallenge> *)(v1 + 64), 0LL) )
            {
              common::milog::MiLogStream::create(
                &v50,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/lantern_rite_activity.cpp",
                "unregisterSalvageGroupBundle",
                2796);
              v13 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                      &v50,
                      (const char (*)[47])"[LanternRite] challenge cast failed, stage_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &stage->stage_id);
              common::milog::MiLogStream::~MiLogStream(&v50);
            }
            else
            {
              ServiceBox::findService<GameserverService>();
              GameserverService::getConfig((GameserverService *const)&v48);
              v14 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v48)->design_config.txt_config_mgr.activity_sea_lamp_config_mgr;
              v15 = std::__shared_ptr_access<SalvageScoreChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SalvageScoreChallenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
              if ( *(_BYTE *)(((unsigned __int64)&v15->challenge_id >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&v15->challenge_id >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4();
              }
              challenge_config_ptr = data::ActivitySeaLampExcelConfigMgrBase::findSalvageChallengeDataExcelConfig(
                                       v14,
                                       v15->challenge_id);
              std::shared_ptr<Config>::~shared_ptr(&v48);
              if ( challenge_config_ptr )
              {
                if ( *(_BYTE *)(((unsigned __int64)&challenge_config_ptr->group_link_id >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&challenge_config_ptr->group_link_id >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4();
                }
                if ( PlayerGroupLinkComp::isGroupBundleRegistered(group_link_comp, challenge_config_ptr->group_link_id) )
                {
                  if ( *(_BYTE *)(((unsigned __int64)&challenge_config_ptr->group_link_id >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&challenge_config_ptr->group_link_id >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_load4();
                  }
                  PlayerGroupLinkComp::unregisterGroupBundle(group_link_comp, challenge_config_ptr->group_link_id, 1);
                }
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v50,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/player/activity/lantern_rite_activity.cpp",
                  "unregisterSalvageGroupBundle",
                  2802);
                v16 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
                        &v50,
                        (const char (*)[61])"[LanternRite] challenge_config_ptr is nullptr, challenge_id:");
                v17 = std::__shared_ptr_access<SalvageScoreChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SalvageScoreChallenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &v17->challenge_id);
                common::milog::MiLogStream::~MiLogStream(&v50);
              }
            }
            std::shared_ptr<SalvageScoreChallenge>::~shared_ptr((std::shared_ptr<SalvageScoreChallenge> *const)(v1 + 64));
          }
          else
          {
            if ( v5 <= 0 )
              goto LABEL_63;
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v48);
            v6 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v48)->design_config.txt_config_mgr.activity_sea_lamp_config_mgr;
            v7 = *(_DWORD *)(v1 + 48);
            if ( *(_BYTE *)(((unsigned __int64)stage >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)stage >> 3) + 0x7FFF8000) <= 3 )
            {
              v6 = (const ActivitySeaLampExcelConfigMgr *)stage;
              __asan_report_load4();
            }
            bundle_vec_ptr = ActivitySeaLampExcelConfigMgr::getSalvageBundleVecByStageIdAnaPlayType(
                               v6,
                               stage->stage_id,
                               v7);
            std::shared_ptr<Config>::~shared_ptr(&v48);
            if ( !bundle_vec_ptr || std::vector<unsigned int>::empty(bundle_vec_ptr) )
            {
              common::milog::MiLogStream::create(
                &v49,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/lantern_rite_activity.cpp",
                "unregisterSalvageGroupBundle",
                2778);
              v9 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                     &v49,
                     (const char (*)[46])"[LanternRite] bundle vec not found, stage_id:");
              v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &stage->stage_id);
              v11 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                      v10,
                      (const char (*)[12])" play_type:");
              common::milog::MiLogStream::operator<<<data::SalvagePlayType,(data::SalvagePlayType*)0>(
                v11,
                (const data::SalvagePlayType *)(v1 + 48));
              common::milog::MiLogStream::~MiLogStream(&v49);
            }
            else
            {
              __for_range_2 = bundle_vec_ptr;
              __for_begin_2._M_current = std::vector<unsigned int>::begin(bundle_vec_ptr)._M_current;
              __for_end_2._M_current = std::vector<unsigned int>::end(__for_range_2)._M_current;
              while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin_2, &__for_end_2) )
              {
                v12 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin_2);
                if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                bundle_id = *v12;
                if ( PlayerGroupLinkComp::isGroupBundleRegistered(group_link_comp, *v12) )
                  PlayerGroupLinkComp::unregisterGroupBundle(group_link_comp, bundle_id, 1);
                __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin_2);
              }
            }
          }
        }
LABEL_64:
        __gnu_cxx::__normal_iterator<std::shared_ptr<BaseSalvageChallenge> const*,std::vector<std::shared_ptr<BaseSalvageChallenge>>>::operator++(&__for_begin_1);
      }
      std::_Rb_tree_const_iterator<std::pair<data::SalvagePlayType const,std::vector<std::shared_ptr<BaseSalvageChallenge>>>>::operator++(&__for_begin_0);
    }
  }
  result = 0;
  if ( v51 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2842: range 0000000016001828-0000000016001986
void __cdecl LanternRiteActivity::closeContent(LanternRiteActivity *const this)
{
  common::milog::MiLogStream v2; // [rsp+10h] [rbp-30h] BYREF

  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  if ( !this->is_content_closed_ && !BaseActivity::isFinished(this) && BaseActivity::isOpening(this, 0) )
  {
    if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->is_content_closed_);
    this->is_content_closed_ = 1;
    if ( LanternRiteActivity::unregisterSalvageGroupBundle(this) )
    {
      common::milog::MiLogStream::create(
        &v2,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/lantern_rite_activity.cpp",
        "closeContent",
        2850);
      common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
        &v2,
        (const char (*)[50])"[LanternRite] unregisterSalvageGroupBundle failed");
      common::milog::MiLogStream::~MiLogStream(&v2);
    }
    LanternRiteActivity::executeRecycleVehicle(this);
  }
};

// Line 2857: range 0000000016001988-0000000016001DAA
void __cdecl LanternRiteActivity::onCreateDungeonEvent(
        LanternRiteActivity *const this,
        const CreateDungeonEvent *event)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  GameserverService *v6; // rax
  DungeonMgr *p_dungeon_mgr; // rcx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  uint32_t DungeonId; // ecx
  char v11; // al
  DungeonScene *v12; // rax
  const data::LanV2OverAllDataExcelConfig *overall_config_ptr; // [rsp+18h] [rbp-A8h]
  std::shared_ptr<Config> v14; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v15; // [rsp+30h] [rbp-90h] BYREF
  char v16[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 22 dungeon_scene_ptr:2866";
  *(_QWORD *)(v2 + 16) = LanternRiteActivity::onCreateDungeonEvent;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  if ( !this->is_content_closed_ && !BaseActivity::isFinished(this) && BaseActivity::isOpening(this, 0) )
  {
    if ( *(char *)(((unsigned __int64)&this->is_mini_eldritch_dungeon_open_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->is_mini_eldritch_dungeon_open_);
    if ( this->is_mini_eldritch_dungeon_open_ )
    {
      v6 = ServiceBox::findService<GameserverService>();
      p_dungeon_mgr = &GameserverService::getGameThreadLocal(v6)->dungeon_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&event->inst_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&event->inst_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      DungeonMgr::findDungeon((DungeonMgr *const)(v2 + 32), &p_dungeon_mgr->dungeon_scene_map_, event->inst_id);
      if ( !std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v2 + 32), 0LL) )
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v14);
        v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14);
        overall_config_ptr = ActivitySeaLampExcelConfigMgr::getLanternRiteOverallConfig(&v8->design_config.txt_config_mgr.activity_sea_lamp_config_mgr);
        std::shared_ptr<Config>::~shared_ptr(&v14);
        if ( overall_config_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&overall_config_ptr->boss_dungeon_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&overall_config_ptr->boss_dungeon_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          if ( !overall_config_ptr->boss_dungeon_id )
            goto LABEL_26;
          v9 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
          DungeonId = DungeonScene::getDungeonId(v9);
          if ( *(_BYTE *)(((unsigned __int64)&overall_config_ptr->boss_dungeon_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&overall_config_ptr->boss_dungeon_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          if ( DungeonId == overall_config_ptr->boss_dungeon_id )
            v11 = 0;
          else
LABEL_26:
            v11 = 1;
          if ( !v11 )
          {
            v12 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
            DungeonScene::setDungeonExhibitionCardVec(v12, &overall_config_ptr->boss_card_id_list);
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v15,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/activity/lantern_rite_activity.cpp",
            "onCreateDungeonEvent",
            2874);
          common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
            &v15,
            (const char (*)[39])"[LanternRite] overall config not found");
          common::milog::MiLogStream::~MiLogStream(&v15);
        }
      }
      std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 32));
    }
  }
  if ( v16 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 2885: range 0000000016001DAC-0000000016001F7C
void __cdecl LanternRiteActivity::onMiniEldritchDungeonSettle(
        LanternRiteActivity *const this,
        const DungeonScene *dungeon_scene,
        proto::DungeonSettleNotify *notify)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  const data::LanV2OverAllDataExcelConfig *overall_config_ptr; // [rsp+28h] [rbp-48h]
  std::shared_ptr<Config> v6; // [rsp+30h] [rbp-40h] BYREF
  common::milog::MiLogStream v7; // [rsp+40h] [rbp-30h] BYREF

  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  if ( !this->is_content_closed_ && !BaseActivity::isFinished(this) && BaseActivity::isOpening(this, 0) )
  {
    if ( *(char *)(((unsigned __int64)&this->is_mini_eldritch_dungeon_open_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->is_mini_eldritch_dungeon_open_);
    if ( this->is_mini_eldritch_dungeon_open_ )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v6);
      v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v6);
      overall_config_ptr = ActivitySeaLampExcelConfigMgr::getLanternRiteOverallConfig(&v4->design_config.txt_config_mgr.activity_sea_lamp_config_mgr);
      std::shared_ptr<Config>::~shared_ptr(&v6);
      if ( overall_config_ptr )
      {
        DungeonScene::isSettledAndSuccess(dungeon_scene);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v7,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/lantern_rite_activity.cpp",
          "onMiniEldritchDungeonSettle",
          2897);
        common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
          &v7,
          (const char (*)[39])"[LanternRite] overall config not found");
        common::milog::MiLogStream::~MiLogStream(&v7);
      }
    }
  }
};

// Line 2907: range 0000000016001F7E-0000000016002508
void __cdecl LanternRiteActivity::onPostEnterSceneEvent(
        LanternRiteActivity *const this,
        const PostEnterSceneEvent *event)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  uint32_t DungeonId; // ecx
  char v9; // al
  common::milog::MiLogStream *v11; // r14
  PlayerExhibitionComp *ExhibitionComp; // rax
  unsigned int val; // [rsp+14h] [rbp-BCh] BYREF
  const data::LanV2OverAllDataExcelConfig *overall_config_ptr; // [rsp+18h] [rbp-B8h]
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-B0h] BYREF
  char v16[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 26 cur_dungeon_scene_ptr:2922 64 16 21 boss_dungeon_ptr:2927";
  *(_QWORD *)(v2 + 16) = LanternRiteActivity::onPostEnterSceneEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  if ( !this->is_content_closed_ && !BaseActivity::isFinished(this) && BaseActivity::isOpening(this, 0) )
  {
    if ( *(char *)(((unsigned __int64)&this->is_mini_eldritch_dungeon_open_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->is_mini_eldritch_dungeon_open_);
    if ( this->is_mini_eldritch_dungeon_open_ )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v2 + 64));
      v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      overall_config_ptr = ActivitySeaLampExcelConfigMgr::getLanternRiteOverallConfig(&v6->design_config.txt_config_mgr.activity_sea_lamp_config_mgr);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 64));
      if ( overall_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Player::getSceneComp(this->player_);
        PlayerSceneComp::getCurScene<DungeonScene>((PlayerSceneComp *const)(v2 + 32));
        if ( std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v2 + 32), 0LL) )
          goto LABEL_23;
        v7 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        DungeonId = DungeonScene::getDungeonId(v7);
        if ( *(_BYTE *)(((unsigned __int64)&overall_config_ptr->boss_dungeon_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&overall_config_ptr->boss_dungeon_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        if ( DungeonId == overall_config_ptr->boss_dungeon_id )
          v9 = 0;
        else
LABEL_23:
          v9 = 1;
        if ( !v9 )
        {
          std::weak_ptr<DungeonScene>::lock((const std::weak_ptr<DungeonScene> *const)(v2 + 64));
          if ( std::operator!=<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v2 + 64))
            && std::operator==<DungeonScene,DungeonScene>(
                 (const std::shared_ptr<DungeonScene> *)(v2 + 64),
                 (const std::shared_ptr<DungeonScene> *)(v2 + 32)) )
          {
            common::milog::MiLogStream::create(
              &v15,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/activity/lantern_rite_activity.cpp",
              "onPostEnterSceneEvent",
              2930);
            v11 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                    &v15,
                    (const char (*)[41])"[LanternRite] reenter boss dungeon, uid:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            val = Player::getUid(this->player_);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
            common::milog::MiLogStream::~MiLogStream(&v15);
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            ExhibitionComp = Player::getExhibitionComp(this->player_);
            PlayerExhibitionComp::clearExhibitionReplaceableData(
              ExhibitionComp,
              &overall_config_ptr->boss_exhibition_id_list);
            std::weak_ptr<DungeonScene>::operator=<DungeonScene>(
              &this->cur_boss_dungeon_wtr_,
              (const std::shared_ptr<DungeonScene> *)(v2 + 32));
          }
          std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 64));
        }
        std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 32));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v15,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/lantern_rite_activity.cpp",
          "onPostEnterSceneEvent",
          2919);
        common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
          &v15,
          (const char (*)[39])"[LanternRite] overall config not found");
        common::milog::MiLogStream::~MiLogStream(&v15);
      }
    }
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
};

// Line 2938: range 000000001600250A-000000001600284B
void __cdecl LanternRiteActivity::onLeaveSceneEvent(LanternRiteActivity *const this, const LeaveSceneEvent *event)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t DungeonId; // ecx
  char v8; // al
  const data::LanV2OverAllDataExcelConfig *overall_config_ptr; // [rsp+18h] [rbp-B8h]
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-B0h] BYREF
  char v12[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 26 cur_dungeon_scene_ptr:2945 64 16 25 cur_boss_dungeon_ptr:2950";
  *(_QWORD *)(v2 + 16) = LanternRiteActivity::onLeaveSceneEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 64));
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  overall_config_ptr = ActivitySeaLampExcelConfigMgr::getLanternRiteOverallConfig(&v5->design_config.txt_config_mgr.activity_sea_lamp_config_mgr);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 64));
  if ( overall_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurScene<DungeonScene>((PlayerSceneComp *const)(v2 + 32));
    if ( std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v2 + 32), 0LL) )
      goto LABEL_12;
    v6 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    DungeonId = DungeonScene::getDungeonId(v6);
    if ( *(_BYTE *)(((unsigned __int64)&overall_config_ptr->boss_dungeon_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&overall_config_ptr->boss_dungeon_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( DungeonId == overall_config_ptr->boss_dungeon_id )
      v8 = 0;
    else
LABEL_12:
      v8 = 1;
    if ( !v8 )
    {
      std::weak_ptr<DungeonScene>::lock((const std::weak_ptr<DungeonScene> *const)(v2 + 64));
      if ( std::operator!=<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v2 + 64), 0LL)
        && std::operator==<DungeonScene,DungeonScene>(
             (const std::shared_ptr<DungeonScene> *)(v2 + 64),
             (const std::shared_ptr<DungeonScene> *)(v2 + 32)) )
      {
        std::__weak_ptr<DungeonScene,(__gnu_cxx::_Lock_policy)2>::reset(&this->cur_boss_dungeon_wtr_);
      }
      std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 64));
    }
    std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 32));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/lantern_rite_activity.cpp",
      "onLeaveSceneEvent",
      2942);
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      &v11,
      (const char (*)[39])"[LanternRite] overall config not found");
    common::milog::MiLogStream::~MiLogStream(&v11);
  }
  if ( v12 == (char *)v2 )
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

// Line 2958: range 000000001600284C-0000000016002B2F
int32_t __cdecl LanternRiteActivity::clientRequestUpdateSalvageBundleMark(
        LanternRiteActivity *const this,
        uint32_t stage_id,
        uint32_t challenge_type_int,
        proto::UpdateSalvageBundleMarkRsp *rsp_0)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r13
  int32_t result; // eax
  common::milog::MiLogStream *v9; // rax
  std::allocator<data::SalvagePlayType> __a; // [rsp+2Bh] [rbp-B5h] BYREF
  std::initializer_list<data::SalvagePlayType> __l; // [rsp+2Ch] [rbp-B4h] BYREF
  common::milog::MiLogStream v13; // [rsp+50h] [rbp-90h] BYREF
  char v14[112]; // [rsp+70h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 19 challenge_type:2964";
  *(_QWORD *)(v4 + 16) = LanternRiteActivity::clientRequestUpdateSalvageBundleMark;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  if ( this->is_content_closed_ || BaseActivity::isFinished(this) || !BaseActivity::isOpening(this, 0) )
  {
    result = 860;
  }
  else
  {
    *(_DWORD *)(v4 + 32) = challenge_type_int;
    if ( *(_DWORD *)(v4 + 32) == 1 || *(_DWORD *)(v4 + 32) == 2 )
    {
      LODWORD(__l._M_array) = *(_DWORD *)(v4 + 32);
      std::allocator<data::SalvagePlayType>::allocator(&__a);
      std::vector<data::SalvagePlayType>::vector(
        (std::vector<data::SalvagePlayType> *const)((char *)&__l._M_array + 4),
        (std::initializer_list<data::SalvagePlayType>)__PAIR128__(1LL, &__l),
        &__a);
      LanternRiteActivity::updateSalveBundleTrackingMark(
        this,
        stage_id,
        (const std::vector<data::SalvagePlayType> *)((char *)&__l._M_array + 4));
      std::vector<data::SalvagePlayType>::~vector((std::vector<data::SalvagePlayType> *const)((char *)&__l._M_array + 4));
      std::allocator<data::SalvagePlayType>::~allocator(&__a);
      result = 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/lantern_rite_activity.cpp",
        "clientRequestUpdateSalvageBundleMark",
        2967);
      v9 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
             &v13,
             (const char (*)[44])"[LanternRite] not supported challenge_type:");
      common::milog::MiLogStream::operator<<<data::SalvagePlayType,(data::SalvagePlayType*)0>(
        v9,
        (const data::SalvagePlayType *)(v4 + 32));
      common::milog::MiLogStream::~MiLogStream(&v13);
      result = -1;
    }
  }
  if ( v14 == (char *)v4 )
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

// Line 2975: range 0000000016002B30-0000000016002D7A
int32_t __cdecl LanternRiteActivity::updateSalvageBundleByGm(
        LanternRiteActivity *const this,
        uint32_t stage_id,
        uint32_t challenge_type_int)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  common::milog::MiLogStream *v6; // rax
  int32_t result; // eax
  std::allocator<data::SalvagePlayType> __a; // [rsp+2Bh] [rbp-B5h] BYREF
  std::initializer_list<data::SalvagePlayType> __l; // [rsp+2Ch] [rbp-B4h] BYREF
  common::milog::MiLogStream v11; // [rsp+50h] [rbp-90h] BYREF
  char v12[112]; // [rsp+70h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 19 challenge_type:2976";
  *(_QWORD *)(v3 + 16) = LanternRiteActivity::updateSalvageBundleByGm;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = challenge_type_int;
  if ( *(_DWORD *)(v3 + 32) == 1 || *(_DWORD *)(v3 + 32) == 2 )
  {
    LODWORD(__l._M_array) = *(_DWORD *)(v3 + 32);
    std::allocator<data::SalvagePlayType>::allocator(&__a);
    std::vector<data::SalvagePlayType>::vector(
      (std::vector<data::SalvagePlayType> *const)((char *)&__l._M_array + 4),
      (std::initializer_list<data::SalvagePlayType>)__PAIR128__(1LL, &__l),
      &__a);
    LanternRiteActivity::updateSalveBundleTrackingMark(
      this,
      stage_id,
      (const std::vector<data::SalvagePlayType> *)((char *)&__l._M_array + 4));
    std::vector<data::SalvagePlayType>::~vector((std::vector<data::SalvagePlayType> *const)((char *)&__l._M_array + 4));
    std::allocator<data::SalvagePlayType>::~allocator(&__a);
    result = 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/lantern_rite_activity.cpp",
      "updateSalvageBundleByGm",
      2979);
    v6 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
           &v11,
           (const char (*)[44])"[LanternRite] not supported challenge_type:");
    common::milog::MiLogStream::operator<<<data::SalvagePlayType,(data::SalvagePlayType*)0>(
      v6,
      (const data::SalvagePlayType *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v11);
    result = -1;
  }
  if ( v12 == (char *)v3 )
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
