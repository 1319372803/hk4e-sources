// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_game/common/gcg_common.cpp

// Line 22: range 000000000DED2296-000000000DED2913
void __cdecl GCGControllerParam::fromExtra(GCGControllerParam *const this, const proto::GCGDuelExtra *extra)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  uint32_t v5; // edx
  uint32_t v6; // ecx
  unsigned __int64 v7; // rax
  unsigned int v8; // r14d
  std::map<unsigned int,data::GCGCardFaceType>::mapped_type *v9; // rax
  unsigned int *v10; // rdx
  const google::protobuf::RepeatedField<unsigned int> *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r12
  uint32_t v14; // edx
  uint32_t v15; // ecx
  const google::protobuf::RepeatedField<unsigned int> *v16; // rax
  uint32_t v17; // edx
  google::protobuf::RepeatedPtrField<proto::GCGChallengeData>::const_iterator __for_begin_0; // [rsp+10h] [rbp-120h] BYREF
  google::protobuf::RepeatedPtrField<proto::GCGChallengeData>::const_iterator __for_end_0; // [rsp+18h] [rbp-118h] BYREF
  const google::protobuf::Map<unsigned int,unsigned int> *__for_range; // [rsp+20h] [rbp-110h]
  const google::protobuf::RepeatedPtrField<proto::GCGChallengeData> *__for_range_0; // [rsp+28h] [rbp-108h]
  const proto::GCGChallengeData *challenge_proto; // [rsp+30h] [rbp-100h]
  const unsigned int *p_card_id; // [rsp+38h] [rbp-F8h]
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+40h] [rbp-F0h] BYREF
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+60h] [rbp-D0h] BYREF
  common::milog::MiLogStream v26; // [rsp+80h] [rbp-B0h] BYREF
  std::string val; // [rsp+A0h] [rbp-90h] BYREF
  char v28[112]; // [rsp+C0h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 16 challenge_ptr:32";
  *(_QWORD *)(v2 + 16) = GCGControllerParam::fromExtra;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  v5 = proto::GCGDuelExtra::card_back_id(extra);
  if ( *(_BYTE *)(((unsigned __int64)&this->card_back_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->card_back_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->card_back_id);
  }
  this->card_back_id = v5;
  v6 = proto::GCGDuelExtra::field_id(extra);
  if ( *(_BYTE *)(((unsigned __int64)&this->field_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->field_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->field_id);
  }
  this->field_id = v6;
  __for_range = proto::GCGDuelExtra::card_face_map(extra);
  google::protobuf::Map<unsigned int,unsigned int>::begin(&__for_begin, __for_range);
  google::protobuf::Map<unsigned int,unsigned int>::end(&__for_end, __for_range);
  while ( google::protobuf::operator!=(&__for_begin, &__for_end) )
  {
    p_card_id = (const unsigned int *)google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator*(&__for_begin);
    v7 = (unsigned __int64)(p_card_id + 1);
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) != 0 && (char)((v7 & 7) + 3) >= *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      __asan_report_load4(v7);
    v8 = p_card_id[1];
    v9 = std::map<unsigned int,data::GCGCardFaceType>::operator[](&this->card_face_map, p_card_id);
    v10 = (unsigned int *)v9;
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v9);
    }
    *v10 = v8;
    google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator++(&__for_begin);
  }
  v11 = proto::GCGDuelExtra::card_id_list(extra);
  common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(v11, &this->card_vec);
  __for_range_0 = proto::GCGDuelExtra::challenge_list(extra);
  __for_begin_0.it_ = google::protobuf::RepeatedPtrField<proto::GCGChallengeData>::begin(__for_range_0).it_;
  __for_end_0.it_ = google::protobuf::RepeatedPtrField<proto::GCGChallengeData>::end(__for_range_0).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::GCGChallengeData const>::operator!=(
            &__for_begin_0,
            &__for_end_0) )
  {
    challenge_proto = google::protobuf::internal::RepeatedPtrIterator<proto::GCGChallengeData const>::operator*(&__for_begin_0);
    GCGChallengeFactory::createGCGChallenge((const proto::GCGChallengeData *)(v2 + 32));
    if ( std::operator==<GCGChallenge>(0LL, (const std::shared_ptr<GCGChallenge> *)(v2 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/card_game/common/gcg_common.cpp",
        "fromExtra",
        35);
      v12 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
              &v26,
              (const char (*)[26])"createGCGChallenge fail! ");
      google::protobuf::Message::ShortDebugString[abi:cxx11](&val, &challenge_proto->google::protobuf::Message);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, &val);
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v26);
    }
    else
    {
      std::vector<std::shared_ptr<GCGChallenge>>::emplace_back<std::shared_ptr<GCGChallenge>&>(
        &this->challenge_vec,
        (std::shared_ptr<GCGChallenge> *)(v2 + 32),
        (std::shared_ptr<GCGChallenge> *)&this->challenge_vec);
    }
    std::shared_ptr<GCGChallenge>::~shared_ptr((std::shared_ptr<GCGChallenge> *const)(v2 + 32));
    google::protobuf::internal::RepeatedPtrIterator<proto::GCGChallengeData const>::operator++(&__for_begin_0);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)&val,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/card_game/common/gcg_common.cpp",
    "fromExtra",
    40);
  v13 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
          (common::milog::MiLogStream *const)&val,
          (const char (*)[20])"challenge_vec size:");
  __for_end_0.it_ = (void *const *)std::vector<std::shared_ptr<GCGChallenge>>::size(&this->challenge_vec);
  common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v13, (const unsigned __int64 *)&__for_end_0);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
  v14 = proto::GCGDuelExtra::score(extra);
  if ( *(_BYTE *)(((unsigned __int64)&this->show_data.score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->show_data.score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->show_data.score);
  }
  this->show_data.score = v14;
  v15 = proto::GCGDuelExtra::level(extra);
  if ( *(_BYTE *)(((unsigned __int64)&this->show_data.level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->show_data.level >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->show_data.level);
  }
  this->show_data.level = v15;
  v16 = proto::GCGDuelExtra::forbid_finish_challenge_list(extra);
  common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(v16, &this->forbid_finish_challenge_vec);
  v17 = proto::GCGDuelExtra::client_version(extra);
  if ( *(_BYTE *)(((unsigned __int64)&this->client_version >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->client_version >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->client_version);
  }
  this->client_version = v17;
  if ( v28 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 49: range 000000000DED2914-000000000DED29B3
void __cdecl GCGControllerParam::fromOnlinePlayerInfo(
        GCGControllerParam *const this,
        const proto::OnlinePlayerInfo *player_info)
{
  uint32_t v2; // edx
  const std::string *v3; // rax
  const proto::ProfilePicture *v4; // rax

  v2 = proto::OnlinePlayerInfo::uid(player_info);
  if ( *(_BYTE *)(((unsigned __int64)&this->uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->uid);
  }
  this->uid = v2;
  v3 = proto::OnlinePlayerInfo::nickname[abi:cxx11](player_info);
  std::string::operator=(&this->show_data, v3);
  v4 = proto::OnlinePlayerInfo::profile_picture(player_info);
  proto::ProfilePicture::operator=(&this->show_data.profile_picture, v4);
};

// Line 56: range 000000000DED29B4-000000000DED2A2F
int32_t __cdecl GCGAttackCostInfo::toClient(const GCGAttackCostInfo *const this, proto::GCGAttackCostInfo *proto)
{
  google::protobuf::Map<unsigned int,unsigned int> *v2; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  proto::GCGAttackCostInfo::set_skill_id(proto, this->skill_id);
  v2 = proto::GCGAttackCostInfo::mutable_cost_map(proto);
  common::tools::MiscUtils::toProtoMap<std::map<unsigned int,unsigned int>,google::protobuf::Map<unsigned int,unsigned int>>(
    &this->cost_map,
    v2);
  return 0;
};

// Line 63: range 000000000DED2A30-000000000DED2AAB
int32_t __cdecl GCGPlayCardCostInfo::toClient(const GCGPlayCardCostInfo *const this, proto::GCGPlayCardCostInfo *proto)
{
  google::protobuf::Map<unsigned int,unsigned int> *v2; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  proto::GCGPlayCardCostInfo::set_card_id(proto, this->card_id);
  v2 = proto::GCGPlayCardCostInfo::mutable_cost_map(proto);
  common::tools::MiscUtils::toProtoMap<std::map<unsigned int,unsigned int>,google::protobuf::Map<unsigned int,unsigned int>>(
    &this->cost_map,
    v2);
  return 0;
};

// Line 70: range 000000000DED2AAC-000000000DED2B27
int32_t __cdecl GCGSelectOnStageCostInfo::toClient(
        const GCGSelectOnStageCostInfo *const this,
        proto::GCGSelectOnStageCostInfo *proto)
{
  google::protobuf::Map<unsigned int,unsigned int> *v2; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  proto::GCGSelectOnStageCostInfo::set_card_guid(proto, this->card_guid);
  v2 = proto::GCGSelectOnStageCostInfo::mutable_cost_map(proto);
  common::tools::MiscUtils::toProtoMap<std::map<unsigned int,unsigned int>,google::protobuf::Map<unsigned int,unsigned int>>(
    &this->cost_map,
    v2);
  return 0;
};

// Line 77: range 000000000DED2B28-000000000DED2BFA
void __cdecl GCGCostReviseInfo::clear(GCGCostReviseInfo *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->operation_seq = 0;
  std::vector<GCGAttackCostInfo>::clear(&this->attack_cost_vec);
  std::vector<GCGPlayCardCostInfo>::clear(&this->play_card_cost_vec);
  std::vector<GCGSelectOnStageCostInfo>::clear(&this->select_on_stage_cost_vec);
  std::vector<unsigned int>::clear(&this->can_use_hand_card_id_vec);
  std::vector<unsigned int>::clear(&this->can_use_hand_card_id_vec);
  if ( *(char *)(((unsigned __int64)&this->is_can_attack >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_can_attack);
  this->is_can_attack = 0;
};

// Line 88: range 000000000DED2BFC-000000000DED2DFD
int32_t __cdecl GCGCostReviseInfo::toClient(const GCGCostReviseInfo *const this, proto::GCGCostReviseInfo *proto)
{
  proto::GCGAttackCostInfo *v2; // rax
  proto::GCGPlayCardCostInfo *v3; // rax
  proto::GCGSelectOnStageCostInfo *v4; // rax
  google::protobuf::RepeatedField<unsigned int> *v5; // rax
  std::vector<GCGAttackCostInfo>::const_iterator __for_begin; // [rsp+10h] [rbp-40h] BYREF
  std::vector<GCGAttackCostInfo>::const_iterator __for_end; // [rsp+18h] [rbp-38h] BYREF
  const std::vector<GCGAttackCostInfo> *__for_range; // [rsp+20h] [rbp-30h]
  const std::vector<GCGPlayCardCostInfo> *__for_range_0; // [rsp+28h] [rbp-28h]
  const std::vector<GCGSelectOnStageCostInfo> *__for_range_1; // [rsp+30h] [rbp-20h]
  const GCGSelectOnStageCostInfo *select_cost; // [rsp+38h] [rbp-18h]
  const GCGPlayCardCostInfo *player_card_cost; // [rsp+40h] [rbp-10h]
  const GCGAttackCostInfo *attack_cost; // [rsp+48h] [rbp-8h]

  __for_range = &this->attack_cost_vec;
  __for_begin._M_current = std::vector<GCGAttackCostInfo>::begin(&this->attack_cost_vec)._M_current;
  __for_end._M_current = std::vector<GCGAttackCostInfo>::end(&this->attack_cost_vec)._M_current;
  while ( __gnu_cxx::operator!=<GCGAttackCostInfo const*,std::vector<GCGAttackCostInfo>>(&__for_begin, &__for_end) )
  {
    attack_cost = __gnu_cxx::__normal_iterator<GCGAttackCostInfo const*,std::vector<GCGAttackCostInfo>>::operator*(&__for_begin);
    v2 = proto::GCGCostReviseInfo::add_attack_cost_list(proto);
    GCGAttackCostInfo::toClient(attack_cost, v2);
    __gnu_cxx::__normal_iterator<GCGAttackCostInfo const*,std::vector<GCGAttackCostInfo>>::operator++(&__for_begin);
  }
  __for_range_0 = &this->play_card_cost_vec;
  __for_begin._M_current = (const GCGAttackCostInfo *)std::vector<GCGPlayCardCostInfo>::begin(&this->play_card_cost_vec)._M_current;
  __for_end._M_current = (const GCGAttackCostInfo *)std::vector<GCGPlayCardCostInfo>::end(__for_range_0)._M_current;
  while ( __gnu_cxx::operator!=<GCGPlayCardCostInfo const*,std::vector<GCGPlayCardCostInfo>>(
            (const __gnu_cxx::__normal_iterator<const GCGPlayCardCostInfo*,std::vector<GCGPlayCardCostInfo> > *)&__for_begin,
            (const __gnu_cxx::__normal_iterator<const GCGPlayCardCostInfo*,std::vector<GCGPlayCardCostInfo> > *)&__for_end) )
  {
    player_card_cost = __gnu_cxx::__normal_iterator<GCGPlayCardCostInfo const*,std::vector<GCGPlayCardCostInfo>>::operator*((const __gnu_cxx::__normal_iterator<const GCGPlayCardCostInfo*,std::vector<GCGPlayCardCostInfo> > *const)&__for_begin);
    v3 = proto::GCGCostReviseInfo::add_play_card_cost_list(proto);
    GCGPlayCardCostInfo::toClient(player_card_cost, v3);
    __gnu_cxx::__normal_iterator<GCGPlayCardCostInfo const*,std::vector<GCGPlayCardCostInfo>>::operator++((__gnu_cxx::__normal_iterator<const GCGPlayCardCostInfo*,std::vector<GCGPlayCardCostInfo> > *const)&__for_begin);
  }
  __for_range_1 = &this->select_on_stage_cost_vec;
  __for_begin._M_current = (const GCGAttackCostInfo *)std::vector<GCGSelectOnStageCostInfo>::begin(&this->select_on_stage_cost_vec)._M_current;
  __for_end._M_current = (const GCGAttackCostInfo *)std::vector<GCGSelectOnStageCostInfo>::end(__for_range_1)._M_current;
  while ( __gnu_cxx::operator!=<GCGSelectOnStageCostInfo const*,std::vector<GCGSelectOnStageCostInfo>>(
            (const __gnu_cxx::__normal_iterator<const GCGSelectOnStageCostInfo*,std::vector<GCGSelectOnStageCostInfo> > *)&__for_begin,
            (const __gnu_cxx::__normal_iterator<const GCGSelectOnStageCostInfo*,std::vector<GCGSelectOnStageCostInfo> > *)&__for_end) )
  {
    select_cost = __gnu_cxx::__normal_iterator<GCGSelectOnStageCostInfo const*,std::vector<GCGSelectOnStageCostInfo>>::operator*((const __gnu_cxx::__normal_iterator<const GCGSelectOnStageCostInfo*,std::vector<GCGSelectOnStageCostInfo> > *const)&__for_begin);
    v4 = proto::GCGCostReviseInfo::add_select_on_stage_cost_list(proto);
    GCGSelectOnStageCostInfo::toClient(select_cost, v4);
    __gnu_cxx::__normal_iterator<GCGSelectOnStageCostInfo const*,std::vector<GCGSelectOnStageCostInfo>>::operator++((__gnu_cxx::__normal_iterator<const GCGSelectOnStageCostInfo*,std::vector<GCGSelectOnStageCostInfo> > *const)&__for_begin);
  }
  v5 = proto::GCGCostReviseInfo::mutable_can_use_hand_card_id_list(proto);
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&this->can_use_hand_card_id_vec, v5);
  if ( *(char *)(((unsigned __int64)&this->is_can_attack >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_can_attack);
  proto::GCGCostReviseInfo::set_is_can_attack(proto, this->is_can_attack);
  return 0;
};

// Line 107: range 000000000DED2DFE-000000000DED2E3B
uint32_t __cdecl GCGSkillUseParam::getSkillId(const GCGSkillUseParam *const this)
{
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax

  if ( std::operator==<GCGSkill>(&this->skill_ptr, 0LL) )
    return 0;
  v2 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)this);
  return GCGSkill::getSkillId(v2);
};

// Line 116: range 000000000DED2E3C-000000000DED2E81
uint32_t __cdecl GCGSkillUseParam::getTriggerSkillId(const GCGSkillUseParam *const this)
{
  std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax

  if ( std::operator==<GCGSkillUseParam>(0LL, &this->trigger_window_param_ptr) )
    return 0;
  v2 = std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->trigger_window_param_ptr);
  return GCGSkillUseParam::getSkillId(v2);
};

// Line 125: range 000000000DED2E82-000000000DED3292
std::string *__cdecl GCGSkillUseParam::getDesc[abi:cxx11](std::string *retstr, const GCGSkillUseParam *const this)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v5; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v6; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v7; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v8; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  unsigned int Id; // eax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v11; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  unsigned int v13; // eax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v14; // r14
  unsigned int SkillId; // eax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v16; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v17; // r14
  std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  unsigned int v19; // eax
  char v21[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 6 ss:126";
  *(_QWORD *)(v2 + 16) = GCGSkillUseParam::getDesc[abi:cxx11];
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  v5 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
         (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
         "[param|trigger:");
  if ( *(_BYTE *)(((unsigned __int64)&this->trigger_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->trigger_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->trigger_type);
  }
  v6 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v5, this->trigger_type);
  v7 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v6, ",category:");
  if ( *(_BYTE *)(((unsigned __int64)&this->effect_category_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->effect_category_type >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&this->effect_category_type);
  }
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v7, this->effect_category_type);
  if ( std::operator!=<GCGCard>(&this->source_card_ptr, 0LL) )
  {
    v8 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
           (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
           ",src:");
    v9 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->source_card_ptr);
    Id = GCGCard::getId(v9);
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v8, Id);
  }
  if ( std::operator!=<GCGCard>(&this->target_card_ptr, 0LL) )
  {
    v11 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
            (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
            ",tar:");
    v12 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->target_card_ptr);
    v13 = GCGCard::getId(v12);
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v11, v13);
  }
  v14 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
          (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
          ",skill:");
  SkillId = GCGSkillUseParam::getSkillId(this);
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v14, SkillId);
  if ( *(char *)(((unsigned __int64)&this->is_ignore_damage >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_ignore_damage);
  if ( this->is_ignore_damage )
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
      (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
      ",ignore_damage");
  v16 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
          (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
          ",c:");
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->controller_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->controller_id);
  }
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v16, this->controller_id);
  if ( std::operator!=<GCGSkillUseParam>(&this->trigger_window_param_ptr, 0LL) )
  {
    v17 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
            (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
            ",trigger window skill:");
    v18 = std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkillUseParam,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->trigger_window_param_ptr);
    v19 = GCGSkillUseParam::getSkillId(v18);
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v17, v19);
  }
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
    "]");
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::str[abi:cxx11](
    retstr,
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::~StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  if ( v21 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 151: range 000000000DED3294-000000000DED3368
void __cdecl GCGEffectBase::GCGEffectBase(
        GCGEffectBase *const this,
        data::ConfigGCGEffectPtr *p_config_effect_ptr,
        GCGEffectParam *param)
{
  int (**v3)(...); // rdx

  std::enable_shared_from_this<GCGEffectBase>::enable_shared_from_this(&this->std::enable_shared_from_this<GCGEffectBase>);
  v3 = (int (**)(...))(&`vtable for'GCGEffectBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGEffectBase = v3;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
    __asan_report_load8(param);
  if ( *(_WORD *)(((unsigned __int64)&this->skill_wtr_ >> 3) + 0x7FFF8000) )
    __asan_report_store16(&this->skill_wtr_, p_config_effect_ptr);
  std::enable_shared_from_this<GCGSkill>::weak_from_this((std::enable_shared_from_this<GCGSkill> *const)&this->skill_wtr_);
  std::shared_ptr<data::ConfigGCGEffect>::shared_ptr(&this->config_effect_ptr_, p_config_effect_ptr);
};

// Line 159: range 000000000DED336A-000000000DED38A5
bool __cdecl GCGEffectBase::checkCondition(GCGEffectBase *const this, const GCGSkillUseParam *param)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rbx
  common::milog::MiLogStream *v6; // r14
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  uint32_t SkillId; // eax
  std::__shared_ptr_access<data::ConfigGCGLogicCondition,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<data::ConfigGCGLogicCondition,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // r14
  unsigned __int64 v11; // rax
  int (__fastcall *v12)(std::__shared_ptr_access<data::ConfigGCGLogicCondition,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, unsigned __int64); // r15
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  int v14; // r14d
  bool result; // al
  bool v16; // [rsp+Fh] [rbp-181h]
  data::ConfigGCGLogicConditionPtr *cond_ptr; // [rsp+28h] [rbp-168h]
  GCGEffectBase v18; // [rsp+30h] [rbp-160h] BYREF
  char v19[272]; // [rsp+80h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 16 13 skill_ptr:166 80 24 15 log_context:175 144 48 11 context:176";
  *(_QWORD *)(v2 + 16) = GCGEffectBase::checkCondition;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = 62194;
  v4[536862723] = -218959360;
  v4[536862724] = 62194;
  v4[536862726] = -202116109;
  GCGEffectBase::getConfig(&v18);
  if ( std::operator==<data::ConfigGCGEffect>((const std::shared_ptr<data::ConfigGCGEffect> *)&v18, 0LL) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v18._M_weak_this._M_refcount,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/common/gcg_common.cpp",
      "checkCondition",
      163);
    v5 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           (common::milog::MiLogStream *const)&v18._M_weak_this._M_refcount,
           (const char (*)[31])"effect config is not find cur:");
    GCGEffectBase::getDesc[abi:cxx11]((std::string *)&v18.config_effect_ptr_._M_refcount, this);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
      v5,
      (const std::string *)&v18.config_effect_ptr_._M_refcount);
    std::string::~string(&v18.config_effect_ptr_._M_refcount);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v18._M_weak_this._M_refcount);
    v16 = 0;
  }
  else
  {
    GCGEffectBase::getSkill((GCGEffectBase *const)(v2 + 48));
    if ( std::operator==<GCGSkill>((const std::shared_ptr<GCGSkill> *)(v2 + 48), 0LL) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v18._M_weak_this._M_refcount,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/common/gcg_common.cpp",
        "checkCondition",
        169);
      v6 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
             (common::milog::MiLogStream *const)&v18._M_weak_this._M_refcount,
             (const char (*)[23])"skill_ptr is null cur:");
      GCGEffectBase::getDesc[abi:cxx11]((std::string *)&v18.config_effect_ptr_._M_refcount, this);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
        v6,
        (const std::string *)&v18.config_effect_ptr_._M_refcount);
      std::string::~string(&v18.config_effect_ptr_._M_refcount);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v18._M_weak_this._M_refcount);
      v16 = 0;
    }
    else
    {
      cond_ptr = &std::__shared_ptr_access<data::ConfigGCGEffect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGEffect,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v18)->condition;
      if ( !std::operator!=<data::ConfigGCGLogicCondition>(cond_ptr, 0LL) )
        goto LABEL_17;
      v7 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
      SkillId = GCGSkill::getSkillId(v7);
      LogContext::LogContext((LogContext *const)(v2 + 80), SkillId);
      GCGEffectContext::GCGEffectContext((GCGEffectContext *const)(v2 + 144), param, (const LogContext *)(v2 + 80), 1);
      v9 = std::__shared_ptr_access<data::ConfigGCGLogicCondition,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGLogicCondition,(__gnu_cxx::_Lock_policy)2,false,false> *const)cond_ptr);
      v10 = v9;
      if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v9);
      v11 = (unsigned __int64)(v10->_vptr_ConfigGCGCondition + 7);
      if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v10->_vptr_ConfigGCGCondition + 7);
      v12 = *(int (__fastcall **)(std::__shared_ptr_access<data::ConfigGCGLogicCondition,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, unsigned __int64))v11;
      v13 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
      if ( v12(v10, v13, v2 + 144) >= 0 )
      {
        v14 = 1;
      }
      else
      {
        v16 = 0;
        v14 = 0;
      }
      GCGEffectContext::~GCGEffectContext((GCGEffectContext *const)(v2 + 144));
      LogContext::~LogContext((LogContext *const)(v2 + 80));
      if ( v14 == 1 )
LABEL_17:
        v16 = 1;
    }
    std::shared_ptr<GCGSkill>::~shared_ptr((std::shared_ptr<GCGSkill> *const)(v2 + 48));
  }
  std::shared_ptr<data::ConfigGCGEffect>::~shared_ptr((std::shared_ptr<data::ConfigGCGEffect> *const)&v18);
  result = v16;
  if ( v19 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
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
  return result;
};

// Line 186: range 000000000DED38A6-000000000DED39CA
GCGCardPtr __cdecl GCGEffectBase::getCard(const GCGEffectBase *const this)
{
  GCGCardPtr result; // rax
  GCGEffectBase v2; // [rsp+20h] [rbp-40h] BYREF

  GCGEffectBase::getSkill(&v2);
  if ( std::operator==<GCGSkill>((const std::shared_ptr<GCGSkill> *)&v2, 0LL) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v2._M_weak_this._M_refcount,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_game/common/gcg_common.cpp",
      "getCard",
      190);
    common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
      (common::milog::MiLogStream *const)&v2._M_weak_this._M_refcount,
      (const char (*)[37])"GCGEffectBase getCard not find skill");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v2._M_weak_this._M_refcount);
    std::shared_ptr<GCGCard>::shared_ptr((std::shared_ptr<GCGCard> *const)this, 0LL);
  }
  else
  {
    std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v2);
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this, 0LL);
    GCGSkill::getOwnerCard((const GCGSkill *const)this);
  }
  std::shared_ptr<GCGSkill>::~shared_ptr((std::shared_ptr<GCGSkill> *const)&v2);
  result._M_ptr = (std::__shared_ptr<GCGCard,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 197: range 000000000DED39CC-000000000DED3B9D
GCGCardPtr __cdecl GCGEffectBase::getCard(GCGEffectBase *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  GCGCardPtr result; // rax
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-80h] BYREF
  char v6[96]; // [rsp+30h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 13 skill_ptr:198";
  *(_QWORD *)(v1 + 16) = GCGEffectBase::getCard;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  GCGEffectBase::getSkill((GCGEffectBase *const)(v1 + 32));
  if ( std::operator==<GCGSkill>((const std::shared_ptr<GCGSkill> *)(v1 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_game/common/gcg_common.cpp",
      "getCard",
      201);
    common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
      &v5,
      (const char (*)[37])"GCGEffectBase getCard not find skill");
    common::milog::MiLogStream::~MiLogStream(&v5);
    std::shared_ptr<GCGCard>::shared_ptr((std::shared_ptr<GCGCard> *const)this, 0LL);
  }
  else
  {
    std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this, 0LL);
    GCGSkill::getOwnerCard((const GCGSkill *const)this);
  }
  std::shared_ptr<GCGSkill>::~shared_ptr((std::shared_ptr<GCGSkill> *const)(v1 + 32));
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<GCGCard,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 208: range 000000000DED3B9E-000000000DED3F6B
std::string *__cdecl GCGEffectBase::getDesc[abi:cxx11](std::string *retstr, const GCGEffectBase *const this)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v6; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v7; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  unsigned int Id; // eax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v10; // r14
  std::__shared_ptr_access<data::ConfigGCGEffect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  unsigned __int64 v12; // rdx
  const char *v13; // rax
  unsigned int skill_id; // [rsp+1Ch] [rbp-D4h]
  char v16[208]; // [rsp+20h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 16 6 ss:209 64 16 13 skill_ptr:210 96 16 12 card_ptr:217 128 16 14 config_ptr:222";
  *(_QWORD *)(v2 + 16) = GCGEffectBase::getDesc[abi:cxx11];
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -202178560;
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  GCGEffectBase::getSkill((const GCGEffectBase *const)(v2 + 64));
  skill_id = 0;
  if ( std::operator!=<GCGSkill>((const std::shared_ptr<GCGSkill> *)(v2 + 64), 0LL) )
  {
    v5 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    skill_id = GCGSkill::getSkillId(v5);
  }
  v6 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
         (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
         "[EFFECT| skill:");
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v6, skill_id);
  GCGEffectBase::getCard((const GCGEffectBase *const)(v2 + 96));
  if ( std::operator!=<GCGCard>((const std::shared_ptr<GCGCard> *)(v2 + 96), 0LL) )
  {
    v7 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
           (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
           ",card:");
    v8 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    Id = GCGCard::getId(v8);
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v7, Id);
  }
  GCGEffectBase::getConfig((const GCGEffectBase *const)(v2 + 128));
  if ( std::operator!=<data::ConfigGCGEffect>((const std::shared_ptr<data::ConfigGCGEffect> *)(v2 + 128), 0LL) )
  {
    v10 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
            (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
            ",effect:");
    v11 = std::__shared_ptr_access<data::ConfigGCGEffect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGCGEffect,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
    if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v11);
    v12 = (unsigned __int64)(v11->_vptr_ConfigGCGEffect + 4);
    if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v11->_vptr_ConfigGCGEffect + 4);
    v13 = (const char *)(*(__int64 (__fastcall **)(std::__shared_ptr_access<data::ConfigGCGEffect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v12)(v11);
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v10, v13);
  }
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
    "]");
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::str[abi:cxx11](
    retstr,
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  std::shared_ptr<data::ConfigGCGEffect>::~shared_ptr((std::shared_ptr<data::ConfigGCGEffect> *const)(v2 + 128));
  std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v2 + 96));
  std::shared_ptr<GCGSkill>::~shared_ptr((std::shared_ptr<GCGSkill> *const)(v2 + 64));
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::~StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  if ( v16 == (char *)v2 )
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
  return retstr;
};

// Line 232: range 000000000DED3F6C-000000000DED408E
void __cdecl GCGSkillPrevewGuard::GCGSkillPrevewGuard(
        GCGSkillPrevewGuard *const this,
        GCGGameMode *game_mode,
        GCGControllerValue controller_id)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->game_mode_ = game_mode;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_controller_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_controller_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_controller_id_);
  }
  this->cur_controller_id_ = controller_id;
  GCGGameMode::resetSkillTriggerVars(this->game_mode_);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  GCGGameMode::setIsNeedBreakForSpecialAsk(this->game_mode_, 0);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  GCGGameMode::startNewPreview(this->game_mode_);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  GCGGameMode::setDuringSnapshot(this->game_mode_);
};

// Line 242: range 000000000DED4090-000000000DED4133
void __cdecl GCGSkillPrevewGuard::~GCGSkillPrevewGuard(GCGSkillPrevewGuard *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  GCGGameMode::resetSkillTriggerVars(this->game_mode_);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  GCGGameMode::setIsNeedBreakForSpecialAsk(this->game_mode_, 0);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  GCGGameMode::clearDuringSnapshot(this->game_mode_);
};

// Line 251: range 000000000DED4134-000000000DED44D5
std::string *__cdecl GCGBothAIAttackTask::getDesc[abi:cxx11](
        std::string *retstr,
        const GCGBothAIAttackTask *const this)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v5; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v6; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v7; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v8; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v9; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v10; // rcx
  char v12[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 6 ss:252";
  *(_QWORD *)(v2 + 16) = GCGBothAIAttackTask::getDesc[abi:cxx11];
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  v5 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
         (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
         "[task:");
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v5, this->task_id);
  v6 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
         (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
         " sub task:");
  if ( *(_BYTE *)(((unsigned __int64)&this->subtask_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->subtask_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->subtask_id);
  }
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v6, this->subtask_id);
  v7 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
         (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
         " level:");
  if ( *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->level_id);
  }
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v7, this->level_id);
  v8 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
         (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
         " mode:");
  if ( *(_BYTE *)(((unsigned __int64)&this->mode >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mode >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->mode);
  }
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v8, this->mode);
  v9 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
         (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
         " group1:");
  if ( *(_BYTE *)(((unsigned __int64)&this->card_group1_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->card_group1_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->card_group1_id);
  }
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v9, this->card_group1_id);
  v10 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
          (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
          " group2:");
  if ( *(_BYTE *)(((unsigned __int64)&this->card_group2_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->card_group2_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->card_group2_id);
  }
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v10, this->card_group2_id);
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
    "]");
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::str[abi:cxx11](
    retstr,
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::~StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};
