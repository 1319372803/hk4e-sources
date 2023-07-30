// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/service/match/match_unit_base.cpp

// Line 25: range 000000000D7ACC36-000000000D7AD043
int32_t __cdecl MatchUnitBase::initFromProto(MatchUnitBase *const this, const proto::MatchUnit *proto_match_unit)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // r13
  int32_t v6; // r14d
  proto::MatchPlayer *v7; // rax
  common::milog::MiLogStream *v8; // r14
  std::unordered_map<unsigned int,proto::MatchPlayer> *matched; // rax
  uint32_t v10; // edx
  int32_t result; // eax
  unsigned int val; // [rsp+1Ch] [rbp-F4h] BYREF
  google::protobuf::RepeatedPtrField<proto::MatchPlayer>::const_iterator __for_begin; // [rsp+20h] [rbp-F0h] BYREF
  google::protobuf::RepeatedPtrField<proto::MatchPlayer>::const_iterator __for_end; // [rsp+28h] [rbp-E8h] BYREF
  const google::protobuf::RepeatedPtrField<proto::MatchPlayer> *__for_range; // [rsp+30h] [rbp-E0h]
  const proto::MatchPlayer *match_player; // [rsp+38h] [rbp-D8h]
  common::milog::MiLogStream v17; // [rsp+40h] [rbp-D0h] BYREF
  char v18[176]; // [rsp+60h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 56 23 tmp_match_player_map:32";
  *(_QWORD *)(v2 + 16) = MatchUnitBase::initFromProto;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  if ( proto::MatchUnit::match_player_list_size(proto_match_unit) )
  {
    std::unordered_map<unsigned int,proto::MatchPlayer>::unordered_map((std::unordered_map<unsigned int,proto::MatchPlayer> *const)(v2 + 32));
    __for_range = proto::MatchUnit::match_player_list(proto_match_unit);
    __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::MatchPlayer>::begin(__for_range).it_;
    __for_end.it_ = google::protobuf::RepeatedPtrField<proto::MatchPlayer>::end(__for_range).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<proto::MatchPlayer const>::operator!=(
              &__for_begin,
              &__for_end) )
    {
      match_player = google::protobuf::internal::RepeatedPtrIterator<proto::MatchPlayer const>::operator*(&__for_begin);
      val = proto::MatchPlayer::uid(match_player);
      v7 = std::unordered_map<unsigned int,proto::MatchPlayer>::operator[](
             (std::unordered_map<unsigned int,proto::MatchPlayer> *const)(v2 + 32),
             &val);
      proto::MatchPlayer::operator=(v7, match_player);
      google::protobuf::internal::RepeatedPtrIterator<proto::MatchPlayer const>::operator++(&__for_begin);
    }
    val = proto::MatchUnit::unit_id(proto_match_unit);
    if ( std::unordered_map<unsigned int,proto::MatchPlayer>::count(
           (const std::unordered_map<unsigned int,proto::MatchPlayer> *const)(v2 + 32),
           &val) )
    {
      matched = std::move<std::unordered_map<unsigned int,proto::MatchPlayer> &>((std::unordered_map<unsigned int,proto::MatchPlayer> *)(v2 + 32));
      std::unordered_map<unsigned int,proto::MatchPlayer>::operator=(&this->match_player_map_, matched);
      v10 = proto::MatchUnit::unit_id(proto_match_unit);
      if ( *(_BYTE *)(((unsigned __int64)&this->unit_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->unit_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->unit_id_);
      }
      this->unit_id_ = v10;
      v6 = 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/service/match/match_unit_base.cpp",
        "initFromProto",
        41);
      v8 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
             &v17,
             (const char (*)[37])"[MATCH] unit_id not found, unit_id: ");
      val = proto::MatchUnit::unit_id(proto_match_unit);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
      common::milog::MiLogStream::~MiLogStream(&v17);
      v6 = -1;
    }
    std::unordered_map<unsigned int,proto::MatchPlayer>::~unordered_map((std::unordered_map<unsigned int,proto::MatchPlayer> *const)(v2 + 32));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/match/match_unit_base.cpp",
      "initFromProto",
      28);
    v5 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           &v17,
           (const char (*)[37])"[MATCH] player list empty, unit_id: ");
    val = proto::MatchUnit::unit_id(proto_match_unit);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v17);
    v6 = -1;
  }
  result = v6;
  if ( v18 == (char *)v2 )
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

// Line 53: range 000000000D7AD044-000000000D7AD160
uint32_t __cdecl MatchUnitBase::getWorldLevel(const MatchUnitBase *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  uint32_t result; // eax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,proto::MatchPlayer>,false,false>::pointer v5; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,proto::MatchPlayer>,false> __y; // [rsp+18h] [rbp-68h] BYREF
  char v7[96]; // [rsp+20h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 8 7 iter:54";
  *(_QWORD *)(v1 + 16) = MatchUnitBase::getWorldLevel;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  *(std::unordered_map<unsigned int,proto::MatchPlayer>::const_iterator *)(v1 + 32) = std::unordered_map<unsigned int,proto::MatchPlayer>::find(
                                                                                        &this->match_player_map_,
                                                                                        &this->unit_id_);
  __y._M_cur = std::unordered_map<unsigned int,proto::MatchPlayer>::end(&this->match_player_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,proto::MatchPlayer>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,proto::MatchPlayer>,false> *)(v1 + 32),
         &__y) )
  {
    result = 0;
  }
  else
  {
    v5 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,proto::MatchPlayer>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,proto::MatchPlayer>,false,false> *const)(v1 + 32));
    result = proto::MatchPlayer::world_level(&v5->second);
  }
  if ( v7 == (char *)v1 )
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

// Line 64: range 000000000D7AD162-000000000D7AD32F
void __cdecl MatchUnitBase::onJoinMatchTeam(
        MatchUnitBase *const this,
        MatchTeamPtr *p_match_team_ptr,
        proto::MatchIdentity match_identity)
{
  common::milog::MiLogStream *v3; // rax
  uint32_t Now; // edi
  common::milog::MiLogStream *v5; // rdx
  unsigned int val; // [rsp+2Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v9; // [rsp+30h] [rbp-30h] BYREF

  if ( match_identity == MATCH_IDENTITY_HOST || match_identity == MATCH_IDENTITY_GUEST )
  {
    std::weak_ptr<MatchTeam>::operator=<MatchTeam>(&this->match_team_wtr_, p_match_team_ptr);
    if ( *(_BYTE *)(((unsigned __int64)&this->match_identity_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->match_identity_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&this->match_identity_);
    }
    this->match_identity_ = match_identity;
    Now = common::tools::TimeUtils::getNow();
    if ( *(_BYTE *)(((unsigned __int64)&this->join_team_time_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->join_team_time_ >> 3) + 0x7FFF8000) )
    {
      Now = (_DWORD)this + 44;
      __asan_report_store4(&this->join_team_time_);
    }
    this->join_team_time_ = Now;
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/service/match/match_unit_base.cpp",
      "onJoinMatchTeam",
      73);
    v5 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           &v9,
           (const char (*)[29])"[MATCH] on join match team: ");
    common::milog::MiLogStream::operator<<<MatchUnitBase,(MatchUnitBase*)0>(v5, this);
    common::milog::MiLogStream::~MiLogStream(&v9);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/match/match_unit_base.cpp",
      "onJoinMatchTeam",
      67);
    v3 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
           &v9,
           (const char (*)[52])"[MATCH] match_identity is invalid, match_identity: ");
    val = match_identity;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &val);
    common::milog::MiLogStream::~MiLogStream(&v9);
  }
};

// Line 77: range 000000000D7AD330-000000000D7AD4EE
int32_t __cdecl MatchUnitBase::addMatchPlayer(MatchUnitBase *const this, const proto::MatchPlayer *match_player)
{
  common::milog::MiLogStream *v2; // rbx
  unsigned int *v3; // rcx
  const proto::MatchPlayer *v4; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,proto::MatchPlayer>,false,false>,bool> matched; // rax
  common::milog::MiLogStream *v6; // rbx
  std::unordered_map<unsigned int,SlotContext>::key_type __x; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-30h] BYREF

  __x = proto::MatchPlayer::uid(match_player);
  if ( !std::unordered_map<unsigned int,SlotContext>::count(&this->slot_uid_map_, &__x) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/service/match/match_unit_base.cpp",
      "addMatchPlayer",
      81);
    v2 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
           &v9,
           (const char (*)[47])"[Match] player uid not in slot_uid_map_, uid: ");
    __x = proto::MatchPlayer::uid(match_player);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &__x);
    common::milog::MiLogStream::~MiLogStream(&v9);
  }
  __x = proto::MatchPlayer::uid(match_player);
  matched = std::unordered_map<unsigned int,proto::MatchPlayer>::emplace<unsigned int,proto::MatchPlayer const&>(
              &this->match_player_map_,
              &__x,
              match_player,
              v3,
              v4);
  if ( !matched.second )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/match/match_unit_base.cpp",
      "addMatchPlayer",
      86);
    v6 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v9,
           (const char (*)[36])"[MATCH] player already exist, uid: ");
    __x = proto::MatchPlayer::uid(match_player);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &__x);
    common::milog::MiLogStream::~MiLogStream(&v9);
    return -1;
  }
  else
  {
    __x = proto::MatchPlayer::uid(match_player);
    std::unordered_map<unsigned int,SlotContext>::erase(&this->slot_uid_map_, &__x);
    return 0;
  }
};

// Line 96: range 000000000D7AD4F0-000000000D7AD72C
__int64 __fastcall MatchUnitBase::removeMatchPlayer(MatchUnitBase *const this, uint32_t uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v7; // rax
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
  *(_QWORD *)(v2 + 8) = "1 32 4 6 uid:95";
  *(_QWORD *)(v2 + 16) = MatchUnitBase::removeMatchPlayer;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = uid;
  if ( *(_BYTE *)(((unsigned __int64)&this->unit_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->unit_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->unit_id_);
  }
  if ( this->unit_id_ == *(_DWORD *)(v2 + 32) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/match/match_unit_base.cpp",
      "removeMatchPlayer",
      100);
    v5 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v8,
           (const char (*)[42])"[MATCH] can not remove host player, uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v8);
    result = 0xFFFFFFFFLL;
  }
  else if ( std::unordered_map<unsigned int,proto::MatchPlayer>::erase(
              &this->match_player_map_,
              (const std::unordered_map<unsigned int,proto::MatchPlayer>::key_type *)(v2 + 32)) )
  {
    result = 0LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/match/match_unit_base.cpp",
      "removeMatchPlayer",
      106);
    v7 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           &v8,
           (const char (*)[29])"[MATCH] uid not exist, uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v8);
    result = 0xFFFFFFFFLL;
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

// Line 114: range 000000000D7AD72E-000000000D7AD845
int32_t __cdecl MatchUnitBase::updateMatchPlayer(MatchUnitBase *const this, const proto::MatchPlayer *match_player)
{
  common::milog::MiLogStream *v2; // rbx
  unsigned int value; // [rsp+14h] [rbp-3Ch] BYREF
  proto::MatchPlayer *old_match_player; // [rsp+18h] [rbp-38h]
  common::milog::MiLogStream v6; // [rsp+20h] [rbp-30h] BYREF

  value = proto::MatchPlayer::uid(match_player);
  if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,proto::MatchPlayer>,unsigned int>(
          &this->match_player_map_,
          &value) )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/match/match_unit_base.cpp",
      "updateMatchPlayer",
      117);
    v2 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           &v6,
           (const char (*)[32])"[MATCH] player not exist, uid: ");
    value = proto::MatchPlayer::uid(match_player);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &value);
    common::milog::MiLogStream::~MiLogStream(&v6);
    return -1;
  }
  else
  {
    value = proto::MatchPlayer::uid(match_player);
    old_match_player = std::unordered_map<unsigned int,proto::MatchPlayer>::operator[](&this->match_player_map_, &value);
    proto::MatchPlayer::CopyFrom(old_match_player, match_player);
    return 0;
  }
};

// Line 128: range 000000000D7AD846-000000000D7ADAC7
__int64 __fastcall MatchUnitBase::addSlot(MatchUnitBase *const this, uint32_t uid, __int128 context)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  SlotContext *v6; // r8
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,SlotContext>,false,false>,bool> v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-A0h] BYREF
  char v13[128]; // [rsp+40h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 7 uid:127 64 16 11 context:127";
  *(_QWORD *)(v3 + 16) = MatchUnitBase::addSlot;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = uid;
  *(_OWORD *)(v3 + 64) = context;
  if ( std::unordered_map<unsigned int,proto::MatchPlayer>::count(
         &this->match_player_map_,
         (const std::unordered_map<unsigned int,proto::MatchPlayer>::key_type *)(v3 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/service/match/match_unit_base.cpp",
      "addSlot",
      131);
    v7 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
           &v12,
           (const char (*)[54])"[MATCH] uid already exist in match_player_map_, uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v12);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    v9 = std::unordered_map<unsigned int,SlotContext>::emplace<unsigned int &,SlotContext&>(
           &this->slot_uid_map_,
           (unsigned int *)(v3 + 48),
           (SlotContext *)(v3 + 64),
           (unsigned int *)&this->slot_uid_map_,
           v6);
    if ( !v9.second )
    {
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/service/match/match_unit_base.cpp",
        "addSlot",
        137);
      v10 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
              &v12,
              (const char (*)[50])"[MATCH] uid already exist in slot_uid_map_, uid: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v12);
      result = 0xFFFFFFFFLL;
    }
    else
    {
      result = 0LL;
    }
  }
  if ( v13 == (char *)v3 )
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

// Line 145: range 000000000D7ADAC8-000000000D7ADC4B
void __cdecl MatchUnitBase::removeExpiredSlotUid(MatchUnitBase *const this)
{
  std::unordered_map<unsigned int,SlotContext>::iterator *v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  std::__detail::_Node_iterator<std::pair<unsigned int const,SlotContext>,false,false>::pointer v4; // rax
  uint32_t cur_time; // [rsp+14h] [rbp-7Ch]
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,SlotContext>,false> __y; // [rsp+18h] [rbp-78h] BYREF
  char v7[112]; // [rsp+20h] [rbp-70h] BYREF

  v1 = (std::unordered_map<unsigned int,SlotContext>::iterator *)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = (std::unordered_map<unsigned int,SlotContext>::iterator *)v2;
  }
  v1->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,SlotContext>,false>::__node_type *)1102416563;
  v1[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,SlotContext>,false>::__node_type *)"1 32 8 8 iter:147";
  v1[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,SlotContext>,false>::__node_type *)MatchUnitBase::removeExpiredSlotUid;
  v3 = (unsigned __int64)v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  cur_time = common::tools::TimeUtils::getNow();
  v1[4]._M_cur = std::unordered_map<unsigned int,SlotContext>::begin(&this->slot_uid_map_)._M_cur;
  while ( 1 )
  {
    __y._M_cur = std::unordered_map<unsigned int,SlotContext>::end(&this->slot_uid_map_)._M_cur;
    if ( !std::__detail::operator!=<std::pair<unsigned int const,SlotContext>,false>(v1 + 4, &__y) )
      break;
    v4 = std::__detail::_Node_iterator<std::pair<unsigned int const,SlotContext>,false,false>::operator->(v1 + 4);
    if ( *(_BYTE *)(((unsigned __int64)&v4->second >> 3) + 0x7FFF8000) )
      __asan_report_load8(&v4->second);
    if ( cur_time <= v4->second.join_time + 360 )
      std::__detail::_Node_iterator<std::pair<unsigned int const,SlotContext>,false,false>::operator++(v1 + 4);
    else
      v1[4]._M_cur = std::unordered_map<unsigned int,SlotContext>::erase(&this->slot_uid_map_, v1[4])._M_cur;
  }
  if ( v7 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v1->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,SlotContext>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 161: range 000000000D7ADC4C-000000000D7ADCB1
bool __cdecl MatchUnitBase::isMatchTimeout(const MatchUnitBase *const this)
{
  time_t Now; // rcx

  Now = common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)&this->match_begin_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->match_begin_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->match_begin_time_);
  }
  return Now > this->match_begin_time_ + 3600;
};

// Line 166: range 000000000D7ADCB2-000000000D7ADD67
bool __cdecl MatchUnitBase::isMatchConfirmTimeout(const MatchUnitBase *const this)
{
  time_t Now; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->match_identity_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->match_identity_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->match_identity_);
  }
  if ( this->match_identity_ != MATCH_IDENTITY_GUEST )
    return 0;
  Now = common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)&this->join_team_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->join_team_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->join_team_time_);
  }
  return Now > this->join_team_time_ + 30;
};

// Line 171: range 000000000D7ADD68-000000000D7ADEA1
void __cdecl MatchUnitBase::rematch(MatchUnitBase *const this)
{
  uint32_t Now; // edi

  if ( *(_BYTE *)(((unsigned __int64)&this->match_identity_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->match_identity_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->match_identity_);
  }
  this->match_identity_ = MATCH_IDENTITY_NONE;
  Now = common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)&this->match_begin_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->match_begin_time_ >> 3) + 0x7FFF8000) )
  {
    Now = (_DWORD)this + 36;
    __asan_report_store4(&this->match_begin_time_);
  }
  this->match_begin_time_ = Now;
  if ( *(_BYTE *)(((unsigned __int64)&this->join_team_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->join_team_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->join_team_time_);
  }
  this->join_team_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->rematch_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->rematch_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->rematch_count_);
  }
  ++this->rematch_count_;
  std::__weak_ptr<MatchTeam,(__gnu_cxx::_Lock_policy)2>::reset(&this->match_team_wtr_);
};

// Line 180: range 000000000D7ADEA2-000000000D7AE100
bool __cdecl MatchUnitBase::isMatchFinish(const MatchUnitBase *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  common::milog::MiLogStream *v4; // r14
  bool v5; // r14
  std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t max_players; // r14d
  bool result; // al
  unsigned int val; // [rsp+1Ch] [rbp-94h] BYREF
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
  *(_QWORD *)(v1 + 8) = "1 32 16 18 match_team_ptr:181";
  *(_QWORD *)(v1 + 16) = MatchUnitBase::isMatchFinish;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  MatchUnitBase::getMatchTeam((const MatchUnitBase *const)(v1 + 32));
  if ( std::operator==<MatchTeam>(0LL, (const std::shared_ptr<MatchTeam> *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/match/match_unit_base.cpp",
      "isMatchFinish",
      184);
    v4 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           &v10,
           (const char (*)[37])"[MATCH] not in match team, unit id: ");
    val = MatchUnitBase::getUnitId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
    common::milog::MiLogStream::~MiLogStream(&v10);
    v5 = 0;
  }
  else
  {
    v6 = std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    if ( MatchTeam::getMatchUnitCount(v6) == 1 )
    {
      if ( MatchUnitBase::getMatchIdentity(this) != MATCH_IDENTITY_HOST )
        goto LABEL_13;
      if ( *(_BYTE *)(((unsigned __int64)&this->max_players_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_players_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->max_players_);
      }
      max_players = this->max_players_;
      if ( max_players <= MatchUnitBase::getPlayerCount(this) )
        v5 = 1;
      else
LABEL_13:
        v5 = 0;
    }
    else
    {
      v5 = 0;
    }
  }
  std::shared_ptr<MatchTeam>::~shared_ptr((std::shared_ptr<MatchTeam> *const)(v1 + 32));
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

// Line 198: range 000000000D7AE102-000000000D7AE21E
uint32_t __cdecl MatchUnitBase::getHostPlatfromType(const MatchUnitBase *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  uint32_t result; // eax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,proto::MatchPlayer>,false,false>::pointer v5; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,proto::MatchPlayer>,false> __y; // [rsp+18h] [rbp-68h] BYREF
  char v7[96]; // [rsp+20h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 8 8 iter:199";
  *(_QWORD *)(v1 + 16) = MatchUnitBase::getHostPlatfromType;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  *(std::unordered_map<unsigned int,proto::MatchPlayer>::const_iterator *)(v1 + 32) = std::unordered_map<unsigned int,proto::MatchPlayer>::find(
                                                                                        &this->match_player_map_,
                                                                                        &this->unit_id_);
  __y._M_cur = std::unordered_map<unsigned int,proto::MatchPlayer>::end(&this->match_player_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,proto::MatchPlayer>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,proto::MatchPlayer>,false> *)(v1 + 32),
         &__y) )
  {
    result = 0;
  }
  else
  {
    v5 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,proto::MatchPlayer>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,proto::MatchPlayer>,false,false> *const)(v1 + 32));
    result = proto::MatchPlayer::platform_type(&v5->second);
  }
  if ( v7 == (char *)v1 )
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

// Line 209: range 000000000D7AE220-000000000D7AE33C
uint32_t __cdecl MatchUnitBase::getHostPlayerLevel(const MatchUnitBase *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  uint32_t result; // eax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,proto::MatchPlayer>,false,false>::pointer v5; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,proto::MatchPlayer>,false> __y; // [rsp+18h] [rbp-68h] BYREF
  char v7[96]; // [rsp+20h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 8 8 iter:210";
  *(_QWORD *)(v1 + 16) = MatchUnitBase::getHostPlayerLevel;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  *(std::unordered_map<unsigned int,proto::MatchPlayer>::const_iterator *)(v1 + 32) = std::unordered_map<unsigned int,proto::MatchPlayer>::find(
                                                                                        &this->match_player_map_,
                                                                                        &this->unit_id_);
  __y._M_cur = std::unordered_map<unsigned int,proto::MatchPlayer>::end(&this->match_player_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,proto::MatchPlayer>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,proto::MatchPlayer>,false> *)(v1 + 32),
         &__y) )
  {
    result = 0;
  }
  else
  {
    v5 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,proto::MatchPlayer>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,proto::MatchPlayer>,false,false> *const)(v1 + 32));
    result = proto::MatchPlayer::player_level(&v5->second);
  }
  if ( v7 == (char *)v1 )
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

// Line 220: range 000000000D7AE33E-000000000D7AE45A
bool __cdecl MatchUnitBase::isHostOnlyMatchWithPSPlayer(const MatchUnitBase *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  bool result; // al
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,proto::MatchPlayer>,false,false>::pointer v5; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,proto::MatchPlayer>,false> __y; // [rsp+18h] [rbp-68h] BYREF
  char v7[96]; // [rsp+20h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 8 8 iter:221";
  *(_QWORD *)(v1 + 16) = MatchUnitBase::isHostOnlyMatchWithPSPlayer;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  *(std::unordered_map<unsigned int,proto::MatchPlayer>::const_iterator *)(v1 + 32) = std::unordered_map<unsigned int,proto::MatchPlayer>::find(
                                                                                        &this->match_player_map_,
                                                                                        &this->unit_id_);
  __y._M_cur = std::unordered_map<unsigned int,proto::MatchPlayer>::end(&this->match_player_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,proto::MatchPlayer>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,proto::MatchPlayer>,false> *)(v1 + 32),
         &__y) )
  {
    result = 0;
  }
  else
  {
    v5 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,proto::MatchPlayer>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,proto::MatchPlayer>,false,false> *const)(v1 + 32));
    result = proto::MatchPlayer::is_only_match_with_ps_player(&v5->second);
  }
  if ( v7 == (char *)v1 )
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

// Line 231: range 000000000D7AE45C-000000000D7AE79D
bool __cdecl MatchUnitBase::isPlayerInBlacklist(
        MatchUnitBase *const this,
        const std::vector<unsigned int> *player_uid_vec)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const google::protobuf::RepeatedField<unsigned int> *v5; // rax
  const unsigned int *v6; // r14
  const google::protobuf::RepeatedField<unsigned int> *v7; // rax
  const unsigned int *v8; // rax
  bool v9; // r14
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v10; // rax
  _DWORD *v11; // rdx
  bool result; // al
  std::unordered_map<unsigned int,proto::MatchPlayer>::iterator __for_begin; // [rsp+18h] [rbp-108h] BYREF
  std::unordered_map<unsigned int,proto::MatchPlayer>::iterator __for_end; // [rsp+20h] [rbp-100h] BYREF
  std::unordered_map<unsigned int,proto::MatchPlayer> *__for_range; // [rsp+28h] [rbp-F8h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+30h] [rbp-F0h]
  const std::pair<unsigned int const,proto::MatchPlayer> *v17; // [rsp+38h] [rbp-E8h]
  std::tuple_element<0,const std::pair<unsigned int const,proto::MatchPlayer> >::type *uid; // [rsp+40h] [rbp-E0h]
  std::tuple_element<1,const std::pair<unsigned int const,proto::MatchPlayer> >::type *match_player; // [rsp+48h] [rbp-D8h]
  char v20[208]; // [rsp+50h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 7 uid:243 64 56 21 blacklist_uid_set:232";
  *(_QWORD *)(v2 + 16) = MatchUnitBase::isPlayerInBlacklist;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  std::unordered_set<unsigned int>::unordered_set((std::unordered_set<unsigned int> *const)(v2 + 64));
  __for_range = &this->match_player_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,proto::MatchPlayer>::begin(&this->match_player_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,proto::MatchPlayer>::end(&this->match_player_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,proto::MatchPlayer>,false>(&__for_begin, &__for_end) )
  {
    v17 = std::__detail::_Node_iterator<std::pair<unsigned int const,proto::MatchPlayer>,false,false>::operator*(&__for_begin);
    uid = std::get<0ul,unsigned int const,proto::MatchPlayer>(v17);
    match_player = (std::tuple_element<1,const std::pair<unsigned int const,proto::MatchPlayer> >::type *)std::get<1ul,unsigned int const,proto::MatchPlayer>(v17);
    v5 = proto::MatchPlayer::blacklist_uid_list(match_player);
    v6 = google::protobuf::RepeatedField<unsigned int>::end(v5);
    v7 = proto::MatchPlayer::blacklist_uid_list(match_player);
    v8 = google::protobuf::RepeatedField<unsigned int>::begin(v7);
    std::unordered_set<unsigned int>::insert<unsigned int const*>(
      (std::unordered_set<unsigned int> *const)(v2 + 64),
      v8,
      v6);
    std::__detail::_Node_iterator<std::pair<unsigned int const,proto::MatchPlayer>,false,false>::operator++(&__for_begin);
  }
  if ( std::unordered_set<unsigned int>::empty((const std::unordered_set<unsigned int> *const)(v2 + 64)) )
  {
    v9 = 0;
  }
  else
  {
    __for_range_0 = player_uid_vec;
    __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,proto::MatchPlayer>,false>::__node_type *)std::vector<unsigned int>::begin(player_uid_vec)._M_current;
    __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,proto::MatchPlayer>,false>::__node_type *)std::vector<unsigned int>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&__for_begin,
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&__for_end) )
    {
      v10 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__for_begin);
      v11 = v10;
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v10);
      }
      *(_DWORD *)(v2 + 48) = *v11;
      if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
             (std::unordered_set<unsigned int> *)(v2 + 64),
             (const unsigned int *)(v2 + 48)) )
      {
        v9 = 1;
        goto LABEL_17;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__for_begin);
    }
    v9 = 0;
  }
LABEL_17:
  std::unordered_set<unsigned int>::~unordered_set((std::unordered_set<unsigned int> *const)(v2 + 64));
  result = v9;
  if ( v20 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF800C) = 0LL;
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

// Line 254: range 000000000D7AE79E-000000000D7AE848
int32_t __cdecl MatchUnitBase::getAllMatchPlayerUids(MatchUnitBase *const this, std::vector<unsigned int> *uid_vec)
{
  std::unordered_map<unsigned int,proto::MatchPlayer>::iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::unordered_map<unsigned int,proto::MatchPlayer>::iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  std::unordered_map<unsigned int,proto::MatchPlayer> *__for_range; // [rsp+20h] [rbp-20h]
  const std::pair<unsigned int const,proto::MatchPlayer> *v6; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,proto::MatchPlayer> >::type *uid; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,proto::MatchPlayer> >::type *_; // [rsp+38h] [rbp-8h]

  __for_range = &this->match_player_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,proto::MatchPlayer>::begin(&this->match_player_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,proto::MatchPlayer>::end(&this->match_player_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,proto::MatchPlayer>,false>(&__for_begin, &__for_end) )
  {
    v6 = std::__detail::_Node_iterator<std::pair<unsigned int const,proto::MatchPlayer>,false,false>::operator*(&__for_begin);
    uid = std::get<0ul,unsigned int const,proto::MatchPlayer>(v6);
    _ = (std::tuple_element<1,const std::pair<unsigned int const,proto::MatchPlayer> >::type *)std::get<1ul,unsigned int const,proto::MatchPlayer>(v6);
    std::vector<unsigned int>::push_back(uid_vec, uid);
    std::__detail::_Node_iterator<std::pair<unsigned int const,proto::MatchPlayer>,false,false>::operator++(&__for_begin);
  }
  return 0;
};

// Line 263: range 000000000D7AE84A-000000000D7AEC4D
std::string *__cdecl DungeonMatchUnit::getDesc[abi:cxx11](std::string *retstr, const DungeonMatchUnit *const this)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // rbx
  __int64 v5; // r14
  proto::MatchType MatchType; // eax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r14
  proto::MatchIdentity MatchIdentity; // eax
  __int64 v12; // rax
  __int64 v13; // r14
  uint32_t UnitId; // eax
  __int64 v15; // rax
  __int64 v16; // r14
  uint32_t MatchBeginTime; // eax
  __int64 v18; // rax
  __int64 v19; // r14
  uint32_t JoinTeamTime; // eax
  __int64 v21; // rax
  __int64 v22; // r14
  uint32_t PlayerCount; // eax
  __int64 v24; // rax
  __int64 v25; // r14
  uint32_t PossiblePlayerCount; // eax
  __int64 v27; // rax
  __int64 v28; // r14
  uint32_t WorldLevel; // eax
  __int64 v30; // rax
  __int64 v31; // r14
  uint32_t RematchCount; // eax
  __int64 v33; // rax
  char v35[528]; // [rsp+10h] [rbp-210h] BYREF

  v2 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(480LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 376 7 oss:264";
  *(_QWORD *)(v2 + 16) = DungeonMatchUnit::getDesc[abi:cxx11];
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862732] = -218103808;
  v4[536862733] = -202116109;
  v4[536862734] = -202116109;
  std::ostringstream::basic_ostringstream(v2 + 32);
  v5 = std::operator<<<std::char_traits<char>>(v2 + 32, "[match_type:");
  MatchType = MatchUnitBase::getMatchType(this);
  v7 = std::ostream::operator<<(v5, (unsigned int)MatchType);
  v8 = std::operator<<<std::char_traits<char>>(v7, " ,dungeon_id: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->dungeon_id_);
  }
  v9 = std::ostream::operator<<(v8, this->dungeon_id_);
  v10 = std::operator<<<std::char_traits<char>>(v9, " ,match_identity: ");
  MatchIdentity = MatchUnitBase::getMatchIdentity(this);
  v12 = std::ostream::operator<<(v10, (unsigned int)MatchIdentity);
  v13 = std::operator<<<std::char_traits<char>>(v12, " ,unit_id: ");
  UnitId = MatchUnitBase::getUnitId(this);
  v15 = std::ostream::operator<<(v13, UnitId);
  v16 = std::operator<<<std::char_traits<char>>(v15, " ,match_begin_time: ");
  MatchBeginTime = MatchUnitBase::getMatchBeginTime(this);
  v18 = std::ostream::operator<<(v16, MatchBeginTime);
  v19 = std::operator<<<std::char_traits<char>>(v18, " ,join_team_time: ");
  JoinTeamTime = MatchUnitBase::getJoinTeamTime(this);
  v21 = std::ostream::operator<<(v19, JoinTeamTime);
  v22 = std::operator<<<std::char_traits<char>>(v21, " ,player_count: ");
  PlayerCount = MatchUnitBase::getPlayerCount(this);
  v24 = std::ostream::operator<<(v22, PlayerCount);
  v25 = std::operator<<<std::char_traits<char>>(v24, " ,possible_player_count: ");
  PossiblePlayerCount = MatchUnitBase::getPossiblePlayerCount(this);
  v27 = std::ostream::operator<<(v25, PossiblePlayerCount);
  v28 = std::operator<<<std::char_traits<char>>(v27, " ,world_level: ");
  WorldLevel = MatchUnitBase::getWorldLevel(this);
  v30 = std::ostream::operator<<(v28, WorldLevel);
  v31 = std::operator<<<std::char_traits<char>>(v30, " ,rematch_count: ");
  RematchCount = MatchUnitBase::getRematchCount(this);
  v33 = std::ostream::operator<<(v31, RematchCount);
  std::operator<<<std::char_traits<char>>(v33, "]");
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  std::ostringstream::str(retstr, v2 + 32);
  std::ostringstream::~ostringstream(v2 + 32);
  if ( v35 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
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
  return retstr;
};

// Line 274: range 000000000D7AEC4E-000000000D7AEE71
void __cdecl DungeonMatchUnit::initMaxPlayers(DungeonMatchUnit *const this)
{
  DungeonExcelConfigMgr *p_dungeon_config_mgr; // rcx
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream *v3; // rbx
  unsigned int val; // [rsp+10h] [rbp-50h] BYREF
  uint32_t max_players; // [rsp+14h] [rbp-4Ch]
  const data::DungeonExcelConfig *dungeon_config_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v7; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v8; // [rsp+30h] [rbp-30h] BYREF

  Config::getConfig();
  p_dungeon_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v7)->design_config_.txt_config_mgr.dungeon_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->dungeon_id_);
  }
  dungeon_config_ptr = data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(p_dungeon_config_mgr, this->dungeon_id_);
  std::shared_ptr<Config>::~shared_ptr(&v7);
  if ( dungeon_config_ptr )
  {
    max_players = 4;
    if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)dungeon_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->type >> 3)
                                                                        + 0x7FFF8000) )
    {
      __asan_report_load4(&dungeon_config_ptr->type);
    }
    if ( dungeon_config_ptr->type == DUNGEON_CHESS )
      max_players = 2;
    MatchUnitBase::setMaxPlayers(this, max_players);
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/service/match/match_unit_base.cpp",
      "initMaxPlayers",
      287);
    v3 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
           &v8,
           (const char (*)[21])"[MATCH] player max: ");
    val = MatchUnitBase::getMaxPlayers(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &val);
    common::milog::MiLogStream::~MiLogStream(&v8);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/match/match_unit_base.cpp",
      "initMaxPlayers",
      278);
    v2 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v8,
           (const char (*)[43])"findDungeonExcelConfig failed, dungeon_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &this->dungeon_id_);
    common::milog::MiLogStream::~MiLogStream(&v8);
  }
};

// Line 291: range 000000000D7AEE72-000000000D7AF2A0
std::string *__cdecl MpPlayMatchUnit::getDesc[abi:cxx11](std::string *retstr, const MpPlayMatchUnit *const this)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // rbx
  __int64 v5; // r14
  proto::MatchType MatchType; // eax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r14
  proto::MatchIdentity MatchIdentity; // eax
  __int64 v12; // rax
  __int64 v13; // r14
  uint32_t UnitId; // eax
  __int64 v15; // rax
  __int64 v16; // r14
  uint32_t MatchBeginTime; // eax
  __int64 v18; // rax
  __int64 v19; // r14
  uint32_t JoinTeamTime; // eax
  __int64 v21; // rax
  __int64 v22; // r14
  uint32_t PlayerCount; // eax
  __int64 v24; // rax
  __int64 v25; // r14
  uint32_t PossiblePlayerCount; // eax
  __int64 v27; // rax
  __int64 v28; // r14
  uint32_t MaxPlayers; // eax
  __int64 v30; // rax
  __int64 v31; // r14
  uint32_t WorldLevel; // eax
  __int64 v33; // rax
  __int64 v34; // r14
  uint32_t RematchCount; // eax
  __int64 v36; // rax
  char v38[528]; // [rsp+10h] [rbp-210h] BYREF

  v2 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(480LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 376 7 oss:292";
  *(_QWORD *)(v2 + 16) = MpPlayMatchUnit::getDesc[abi:cxx11];
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862732] = -218103808;
  v4[536862733] = -202116109;
  v4[536862734] = -202116109;
  std::ostringstream::basic_ostringstream(v2 + 32);
  v5 = std::operator<<<std::char_traits<char>>(v2 + 32, "[match_type:");
  MatchType = MatchUnitBase::getMatchType(this);
  v7 = std::ostream::operator<<(v5, (unsigned int)MatchType);
  v8 = std::operator<<<std::char_traits<char>>(v7, " ,mp_play_id: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->mp_play_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mp_play_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->mp_play_id_);
  }
  v9 = std::ostream::operator<<(v8, this->mp_play_id_);
  v10 = std::operator<<<std::char_traits<char>>(v9, " ,match_identity: ");
  MatchIdentity = MatchUnitBase::getMatchIdentity(this);
  v12 = std::ostream::operator<<(v10, (unsigned int)MatchIdentity);
  v13 = std::operator<<<std::char_traits<char>>(v12, " ,unit_id: ");
  UnitId = MatchUnitBase::getUnitId(this);
  v15 = std::ostream::operator<<(v13, UnitId);
  v16 = std::operator<<<std::char_traits<char>>(v15, " ,match_begin_time: ");
  MatchBeginTime = MatchUnitBase::getMatchBeginTime(this);
  v18 = std::ostream::operator<<(v16, MatchBeginTime);
  v19 = std::operator<<<std::char_traits<char>>(v18, " ,join_team_time: ");
  JoinTeamTime = MatchUnitBase::getJoinTeamTime(this);
  v21 = std::ostream::operator<<(v19, JoinTeamTime);
  v22 = std::operator<<<std::char_traits<char>>(v21, " ,player_count: ");
  PlayerCount = MatchUnitBase::getPlayerCount(this);
  v24 = std::ostream::operator<<(v22, PlayerCount);
  v25 = std::operator<<<std::char_traits<char>>(v24, " ,possible_player_count: ");
  PossiblePlayerCount = MatchUnitBase::getPossiblePlayerCount(this);
  v27 = std::ostream::operator<<(v25, PossiblePlayerCount);
  v28 = std::operator<<<std::char_traits<char>>(v27, " ,max_players: ");
  MaxPlayers = MatchUnitBase::getMaxPlayers(this);
  v30 = std::ostream::operator<<(v28, MaxPlayers);
  v31 = std::operator<<<std::char_traits<char>>(v30, " ,world_level: ");
  WorldLevel = MatchUnitBase::getWorldLevel(this);
  v33 = std::ostream::operator<<(v31, WorldLevel);
  v34 = std::operator<<<std::char_traits<char>>(v33, " ,rematch_count: ");
  RematchCount = MatchUnitBase::getRematchCount(this);
  v36 = std::ostream::operator<<(v34, RematchCount);
  std::operator<<<std::char_traits<char>>(v36, "]");
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  std::ostringstream::str(retstr, v2 + 32);
  std::ostringstream::~ostringstream(v2 + 32);
  if ( v38 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
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
  return retstr;
};

// Line 304: range 000000000D7AF2A2-000000000D7AF4A8
void __cdecl MpPlayMatchUnit::initMaxPlayers(MpPlayMatchUnit *const this)
{
  MpPlayExcelConfigMgr *p_mp_play_config_mgr; // rcx
  common::milog::MiLogStream *v2; // rax
  MpPlayMatchUnit *v3; // rdx
  common::milog::MiLogStream *v4; // rbx
  unsigned int val; // [rsp+14h] [rbp-4Ch] BYREF
  const data::MpPlayMatchExcelConfig *mp_play_match_config_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v7; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v8; // [rsp+30h] [rbp-30h] BYREF

  Config::getConfig();
  p_mp_play_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v7)->design_config_.txt_config_mgr.mp_play_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->mp_play_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mp_play_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->mp_play_id_);
  }
  mp_play_match_config_ptr = data::MpPlayExcelConfigMgrBase::findMpPlayMatchExcelConfig(
                               p_mp_play_config_mgr,
                               this->mp_play_id_);
  std::shared_ptr<Config>::~shared_ptr(&v7);
  if ( mp_play_match_config_ptr )
  {
    v3 = this;
    if ( *(_BYTE *)(((unsigned __int64)&mp_play_match_config_ptr->max_players >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&mp_play_match_config_ptr->max_players >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&mp_play_match_config_ptr->max_players);
    }
    MatchUnitBase::setMaxPlayers(v3, mp_play_match_config_ptr->max_players);
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/service/match/match_unit_base.cpp",
      "initMaxPlayers",
      313);
    v4 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
           &v8,
           (const char (*)[21])"[MATCH] player max: ");
    val = MatchUnitBase::getMaxPlayers(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
    common::milog::MiLogStream::~MiLogStream(&v8);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/match/match_unit_base.cpp",
      "initMaxPlayers",
      308);
    v2 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           &v8,
           (const char (*)[37])"[MATCH] find mp play id failed, id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &this->mp_play_id_);
    common::milog::MiLogStream::~MiLogStream(&v8);
  }
};

// Line 317: range 000000000D7AF4AA-000000000D7AF8D8
std::string *__cdecl MechanicusMatchUnit::getDesc[abi:cxx11](
        std::string *retstr,
        const MechanicusMatchUnit *const this)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // rbx
  __int64 v5; // r14
  proto::MatchType MatchType; // eax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r14
  proto::MatchIdentity MatchIdentity; // eax
  __int64 v12; // rax
  __int64 v13; // r14
  uint32_t UnitId; // eax
  __int64 v15; // rax
  __int64 v16; // r14
  uint32_t MatchBeginTime; // eax
  __int64 v18; // rax
  __int64 v19; // r14
  uint32_t JoinTeamTime; // eax
  __int64 v21; // rax
  __int64 v22; // r14
  uint32_t PlayerCount; // eax
  __int64 v24; // rax
  __int64 v25; // r14
  uint32_t PossiblePlayerCount; // eax
  __int64 v27; // rax
  __int64 v28; // r14
  uint32_t MaxPlayers; // eax
  __int64 v30; // rax
  __int64 v31; // r14
  uint32_t WorldLevel; // eax
  __int64 v33; // rax
  __int64 v34; // r14
  uint32_t RematchCount; // eax
  __int64 v36; // rax
  char v38[528]; // [rsp+10h] [rbp-210h] BYREF

  v2 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(480LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 376 7 oss:318";
  *(_QWORD *)(v2 + 16) = MechanicusMatchUnit::getDesc[abi:cxx11];
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862732] = -218103808;
  v4[536862733] = -202116109;
  v4[536862734] = -202116109;
  std::ostringstream::basic_ostringstream(v2 + 32);
  v5 = std::operator<<<std::char_traits<char>>(v2 + 32, "[match_type:");
  MatchType = MatchUnitBase::getMatchType(this);
  v7 = std::ostream::operator<<(v5, (unsigned int)MatchType);
  v8 = std::operator<<<std::char_traits<char>>(v7, " ,mechanicus_tag: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->mechanicus_tag_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mechanicus_tag_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->mechanicus_tag_);
  }
  v9 = std::ostream::operator<<(v8, this->mechanicus_tag_);
  v10 = std::operator<<<std::char_traits<char>>(v9, " ,match_identity: ");
  MatchIdentity = MatchUnitBase::getMatchIdentity(this);
  v12 = std::ostream::operator<<(v10, (unsigned int)MatchIdentity);
  v13 = std::operator<<<std::char_traits<char>>(v12, " ,unit_id: ");
  UnitId = MatchUnitBase::getUnitId(this);
  v15 = std::ostream::operator<<(v13, UnitId);
  v16 = std::operator<<<std::char_traits<char>>(v15, " ,match_begin_time: ");
  MatchBeginTime = MatchUnitBase::getMatchBeginTime(this);
  v18 = std::ostream::operator<<(v16, MatchBeginTime);
  v19 = std::operator<<<std::char_traits<char>>(v18, " ,join_team_time: ");
  JoinTeamTime = MatchUnitBase::getJoinTeamTime(this);
  v21 = std::ostream::operator<<(v19, JoinTeamTime);
  v22 = std::operator<<<std::char_traits<char>>(v21, " ,player_count: ");
  PlayerCount = MatchUnitBase::getPlayerCount(this);
  v24 = std::ostream::operator<<(v22, PlayerCount);
  v25 = std::operator<<<std::char_traits<char>>(v24, " ,possible_player_count: ");
  PossiblePlayerCount = MatchUnitBase::getPossiblePlayerCount(this);
  v27 = std::ostream::operator<<(v25, PossiblePlayerCount);
  v28 = std::operator<<<std::char_traits<char>>(v27, " ,max_players: ");
  MaxPlayers = MatchUnitBase::getMaxPlayers(this);
  v30 = std::ostream::operator<<(v28, MaxPlayers);
  v31 = std::operator<<<std::char_traits<char>>(v30, " ,world_level: ");
  WorldLevel = MatchUnitBase::getWorldLevel(this);
  v33 = std::ostream::operator<<(v31, WorldLevel);
  v34 = std::operator<<<std::char_traits<char>>(v33, " ,rematch_count: ");
  RematchCount = MatchUnitBase::getRematchCount(this);
  v36 = std::ostream::operator<<(v34, RematchCount);
  std::operator<<<std::char_traits<char>>(v36, "]");
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  std::ostringstream::str(retstr, v2 + 32);
  std::ostringstream::~ostringstream(v2 + 32);
  if ( v38 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
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
  return retstr;
};

// Line 329: range 000000000D7AF8DA-000000000D7AFB45
void __cdecl MechanicusMatchUnit::initMaxPlayers(MechanicusMatchUnit *const this)
{
  TreatreMechanicusExcelConfigMgr *p_mechanicus_config_mgr; // rcx
  common::milog::MiLogStream *v2; // rax
  MechanicusMatchUnit *v3; // rdx
  common::milog::MiLogStream *v4; // rbx
  unsigned int val; // [rsp+1Ch] [rbp-64h] BYREF
  std::tuple_element<0,std::tuple<unsigned int,unsigned int> >::type *mechanicus_id; // [rsp+20h] [rbp-60h]
  std::tuple_element<0,std::tuple<unsigned int> >::type *_; // [rsp+28h] [rbp-58h]
  const data::MechanicusExcelConfig *mechanicus_config_ptr; // [rsp+30h] [rbp-50h]
  std::tuple<unsigned int,unsigned int> __t; // [rsp+38h] [rbp-48h] BYREF
  std::shared_ptr<Config> v10; // [rsp+40h] [rbp-40h] BYREF
  common::milog::MiLogStream v11; // [rsp+50h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->mechanicus_tag_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mechanicus_tag_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->mechanicus_tag_);
  }
  Hk4eUtils::parseMechanicusTag((uint32_t)&__t);
  mechanicus_id = std::get<0ul,unsigned int,unsigned int>(&__t);
  _ = std::get<1ul,unsigned int,unsigned int>(&__t);
  Config::getConfig();
  p_mechanicus_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v10)->design_config_.txt_config_mgr.mechanicus_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)mechanicus_id >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)mechanicus_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)mechanicus_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(mechanicus_id);
  }
  mechanicus_config_ptr = data::TreatreMechanicusExcelConfigMgrBase::findMechanicusExcelConfig(
                            p_mechanicus_config_mgr,
                            *mechanicus_id);
  std::shared_ptr<Config>::~shared_ptr(&v10);
  if ( mechanicus_config_ptr )
  {
    v3 = this;
    if ( *(_BYTE *)(((unsigned __int64)&mechanicus_config_ptr->match_player_limit >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&mechanicus_config_ptr->match_player_limit >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&mechanicus_config_ptr->match_player_limit);
    }
    MatchUnitBase::setMaxPlayers(v3, mechanicus_config_ptr->match_player_limit);
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/service/match/match_unit_base.cpp",
      "initMaxPlayers",
      339);
    v4 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
           &v11,
           (const char (*)[21])"[MATCH] player max: ");
    val = MatchUnitBase::getMaxPlayers(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
    common::milog::MiLogStream::~MiLogStream(&v11);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/service/match/match_unit_base.cpp",
      "initMaxPlayers",
      334);
    v2 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
           &v11,
           (const char (*)[40])"[MATCH] find mechanicus id failed, id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, mechanicus_id);
    common::milog::MiLogStream::~MiLogStream(&v11);
  }
};

// Line 343: range 000000000D7AFB46-000000000D7AFF74
std::string *__cdecl GeneralMatchUnit::getDesc[abi:cxx11](std::string *retstr, const GeneralMatchUnit *const this)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // rbx
  __int64 v5; // r14
  proto::MatchType MatchType; // eax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r14
  proto::MatchIdentity MatchIdentity; // eax
  __int64 v12; // rax
  __int64 v13; // r14
  uint32_t UnitId; // eax
  __int64 v15; // rax
  __int64 v16; // r14
  uint32_t MatchBeginTime; // eax
  __int64 v18; // rax
  __int64 v19; // r14
  uint32_t JoinTeamTime; // eax
  __int64 v21; // rax
  __int64 v22; // r14
  uint32_t PlayerCount; // eax
  __int64 v24; // rax
  __int64 v25; // r14
  uint32_t PossiblePlayerCount; // eax
  __int64 v27; // rax
  __int64 v28; // r14
  uint32_t MaxPlayers; // eax
  __int64 v30; // rax
  __int64 v31; // r14
  uint32_t WorldLevel; // eax
  __int64 v33; // rax
  __int64 v34; // r14
  uint32_t RematchCount; // eax
  __int64 v36; // rax
  char v38[528]; // [rsp+10h] [rbp-210h] BYREF

  v2 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(480LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 376 7 oss:344";
  *(_QWORD *)(v2 + 16) = GeneralMatchUnit::getDesc[abi:cxx11];
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862732] = -218103808;
  v4[536862733] = -202116109;
  v4[536862734] = -202116109;
  std::ostringstream::basic_ostringstream(v2 + 32);
  v5 = std::operator<<<std::char_traits<char>>(v2 + 32, "[match_type:");
  MatchType = MatchUnitBase::getMatchType(this);
  v7 = std::ostream::operator<<(v5, (unsigned int)MatchType);
  v8 = std::operator<<<std::char_traits<char>>(v7, " ,match_id: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->match_id_);
  }
  v9 = std::ostream::operator<<(v8, this->match_id_);
  v10 = std::operator<<<std::char_traits<char>>(v9, " ,match_identity: ");
  MatchIdentity = MatchUnitBase::getMatchIdentity(this);
  v12 = std::ostream::operator<<(v10, (unsigned int)MatchIdentity);
  v13 = std::operator<<<std::char_traits<char>>(v12, " ,unit_id: ");
  UnitId = MatchUnitBase::getUnitId(this);
  v15 = std::ostream::operator<<(v13, UnitId);
  v16 = std::operator<<<std::char_traits<char>>(v15, " ,match_begin_time: ");
  MatchBeginTime = MatchUnitBase::getMatchBeginTime(this);
  v18 = std::ostream::operator<<(v16, MatchBeginTime);
  v19 = std::operator<<<std::char_traits<char>>(v18, " ,join_team_time: ");
  JoinTeamTime = MatchUnitBase::getJoinTeamTime(this);
  v21 = std::ostream::operator<<(v19, JoinTeamTime);
  v22 = std::operator<<<std::char_traits<char>>(v21, " ,player_count: ");
  PlayerCount = MatchUnitBase::getPlayerCount(this);
  v24 = std::ostream::operator<<(v22, PlayerCount);
  v25 = std::operator<<<std::char_traits<char>>(v24, " ,possible_player_count: ");
  PossiblePlayerCount = MatchUnitBase::getPossiblePlayerCount(this);
  v27 = std::ostream::operator<<(v25, PossiblePlayerCount);
  v28 = std::operator<<<std::char_traits<char>>(v27, " ,max_players: ");
  MaxPlayers = MatchUnitBase::getMaxPlayers(this);
  v30 = std::ostream::operator<<(v28, MaxPlayers);
  v31 = std::operator<<<std::char_traits<char>>(v30, " ,world_level: ");
  WorldLevel = MatchUnitBase::getWorldLevel(this);
  v33 = std::ostream::operator<<(v31, WorldLevel);
  v34 = std::operator<<<std::char_traits<char>>(v33, " ,rematch_count: ");
  RematchCount = MatchUnitBase::getRematchCount(this);
  v36 = std::ostream::operator<<(v34, RematchCount);
  std::operator<<<std::char_traits<char>>(v36, "]");
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  std::ostringstream::str(retstr, v2 + 32);
  std::ostringstream::~ostringstream(v2 + 32);
  if ( v38 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
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
  return retstr;
};

// Line 355: range 000000000D7AFF76-000000000D7B010B
void __cdecl GeneralMatchUnit::initMaxPlayers(GeneralMatchUnit *const this)
{
  MatchExcelConfigMgr *p_match_config_mgr; // rcx
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream *v3; // rax
  GeneralMatchUnit *v4; // rcx
  const data::MatchExcelConfig *match_config_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v6; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v7; // [rsp+30h] [rbp-30h] BYREF

  Config::getConfig();
  p_match_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v6)->design_config_.txt_config_mgr.match_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->match_id_);
  }
  match_config_ptr = data::MatchExcelConfigMgrBase::findMatchExcelConfig(p_match_config_mgr, this->match_id_);
  std::shared_ptr<Config>::~shared_ptr(&v6);
  if ( match_config_ptr )
  {
    v4 = this;
    if ( *(_BYTE *)(((unsigned __int64)&match_config_ptr->max_player_num >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)match_config_ptr + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&match_config_ptr->max_player_num >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(&match_config_ptr->max_player_num);
    }
    MatchUnitBase::setMaxPlayers(v4, match_config_ptr->max_player_num);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/match/match_unit_base.cpp",
      "initMaxPlayers",
      359);
    v2 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v7, (const char (*)[18])"[MATCH] match_id:");
    v3 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &this->match_id_);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v3, (const char (*)[18])" config not found");
    common::milog::MiLogStream::~MiLogStream(&v7);
  }
};

// Line 365: range 000000000D7B010C-000000000D7B0A86
void __cdecl GCGMatchUnit::GCGMatchUnit(
        GCGMatchUnit *const this,
        proto::MatchType match_type,
        const proto::AddMatchUnitReq *req)
{
  int (**v3)(...); // rdx
  uint32_t matched; // edx
  uint32_t Now; // edi
  const proto::GCGDuelExtra *v6; // rax
  bool is_match_ai; // dl
  const GCGPlayingExcelConfigMgr *v8; // rcx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  std::vector<unsigned int>::size_type v12; // rbx
  uint32_t v13; // r12d
  std::vector<unsigned int>::const_reference v14; // rax
  _DWORD *v15; // rdx
  std::map<unsigned int,unsigned int>::mapped_type *v16; // rax
  uint32_t *v17; // rdx
  uint32_t v18; // ecx
  common::milog::MiLogStream *v19; // rbx
  std::map<unsigned int,unsigned int>::key_type __k; // [rsp+28h] [rbp-88h] BYREF
  uint32_t i; // [rsp+2Ch] [rbp-84h]
  uint32_t score; // [rsp+30h] [rbp-80h]
  uint32_t delay; // [rsp+34h] [rbp-7Ch]
  const GCGPlayingExcelConfigMgr *gcg_playing_config_mgr; // [rsp+38h] [rbp-78h]
  const data::GCGMatchRankExcelConfig *rank_config_ptr; // [rsp+40h] [rbp-70h]
  std::pair<unsigned int,unsigned int> __in; // [rsp+48h] [rbp-68h] BYREF
  std::shared_ptr<Config> v29; // [rsp+50h] [rbp-60h] BYREF
  common::milog::MiLogStream v30; // [rsp+60h] [rbp-50h] BYREF
  common::milog::MiLogStream v31; // [rsp+80h] [rbp-30h] BYREF

  MatchUnitBase::MatchUnitBase(this, match_type);
  v3 = (int (**)(...))(&`vtable for'GCGMatchUnit + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->match_id_);
  }
  this->match_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->rank_idx_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->rank_idx_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->rank_idx_);
  }
  this->rank_idx_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->extend_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->extend_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->extend_);
  }
  this->extend_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->start_time_);
  }
  this->start_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->match_ai_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->match_ai_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->match_ai_time_);
  }
  this->match_ai_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->rank_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->rank_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->rank_id_);
  }
  this->rank_id_ = 0;
  if ( *(char *)(((unsigned __int64)&this->is_match_ai_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_match_ai_);
  this->is_match_ai_ = 0;
  std::map<unsigned int,unsigned int>::map(&this->extend_time_map_);
  proto::GCGDuelExtra::GCGDuelExtra(&this->gcg_duel_extra);
  GCGMatchUnit::initMaxPlayers(this);
  matched = proto::AddMatchUnitReq::match_id(req);
  if ( *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->match_id_);
  }
  this->match_id_ = matched;
  Now = common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) )
  {
    Now = (_DWORD)this + 204;
    __asan_report_store4(&this->start_time_);
  }
  this->start_time_ = Now;
  if ( proto::AddMatchUnitReq::has_gcg_duel_extra(req) )
  {
    Config::getConfig();
    gcg_playing_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v29)->design_config_.txt_config_mgr.gcg_playing_config_mgr;
    std::shared_ptr<Config>::~shared_ptr(&v29);
    v6 = proto::AddMatchUnitReq::gcg_duel_extra(req);
    proto::GCGDuelExtra::operator=(&this->gcg_duel_extra, v6);
    score = proto::GCGDuelExtra::score(&this->gcg_duel_extra);
    if ( *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->match_id_);
    }
    __in = GCGPlayingExcelConfigMgr::getScoreRank(gcg_playing_config_mgr, this->match_id_, score);
    std::tie<unsigned int,unsigned int>((unsigned int *)&v29, &this->rank_idx_, &this->rank_id_, &this->rank_idx_);
    std::tuple<unsigned int &,unsigned int &>::operator=<unsigned int,unsigned int>(
      (std::tuple<unsigned int&,unsigned int&> *const)&v29,
      &__in);
    if ( *(_BYTE *)(((unsigned __int64)&this->extend_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->extend_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->extend_);
    }
    this->extend_ = 0;
    is_match_ai = proto::GCGDuelExtra::is_match_ai(&this->gcg_duel_extra);
    if ( *(char *)(((unsigned __int64)&this->is_match_ai_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->is_match_ai_);
    this->is_match_ai_ = is_match_ai;
    v8 = gcg_playing_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->rank_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->rank_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->rank_id_);
    }
    rank_config_ptr = data::GCGPlayingExcelConfigMgrBase::findGCGMatchRankExcelConfig(v8, this->rank_id_);
    if ( rank_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&rank_config_ptr->rand_delay >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&rank_config_ptr->rand_delay >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&rank_config_ptr->rand_delay);
      }
      delay = common::tools::RandomUtils::rand<unsigned int>(0, rank_config_ptr->rand_delay);
      for ( i = 0; ; ++i )
      {
        v12 = i;
        if ( v12 >= std::vector<unsigned int>::size(&rank_config_ptr->rank_time_list) )
          break;
        v13 = i + 1;
        v14 = std::vector<unsigned int>::operator[](&rank_config_ptr->rank_time_list, i);
        v15 = v14;
        if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v14);
        }
        __k = *v15 + delay;
        v16 = std::map<unsigned int,unsigned int>::operator[](&this->extend_time_map_, &__k);
        v17 = v16;
        if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v16);
        }
        *v17 = v13;
      }
      if ( *(_BYTE *)(((unsigned __int64)&rank_config_ptr->match_ai_time_limit >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)rank_config_ptr + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rank_config_ptr->match_ai_time_limit >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4(&rank_config_ptr->match_ai_time_limit);
      }
      if ( rank_config_ptr->match_ai_time_limit )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&this->start_time_);
        }
        v18 = rank_config_ptr->match_ai_time_limit + this->start_time_ + delay;
        if ( *(_BYTE *)(((unsigned __int64)&this->match_ai_time_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->match_ai_time_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&this->match_ai_time_);
        }
        this->match_ai_time_ = v18;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v31,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/service/match/match_unit_base.cpp",
        "GCGMatchUnit",
        381);
      v9 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
             &v31,
             (const char (*)[45])"findGCGMatchRankExcelConfig fail. rank_id_: ");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->rank_id_);
      v11 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v10, (const char (*)[12])" match_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &this->match_id_);
      common::milog::MiLogStream::~MiLogStream(&v31);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/service/match/match_unit_base.cpp",
      "GCGMatchUnit",
      396);
    v19 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(&v30, (const char (*)[25])off_1BA1D800);
    GCGMatchUnit::getDesc[abi:cxx11]((std::string *)&v31, this);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v19, (const std::string *)&v31);
    std::string::~string(&v31);
    common::milog::MiLogStream::~MiLogStream(&v30);
  }
};

// Line 401: range 000000000D7B0A88-000000000D7B0B66
int32_t __cdecl GCGMatchUnit::initFromProto(GCGMatchUnit *const this, const proto::MatchUnit *proto_match_unit)
{
  unsigned int matched; // ebx
  common::milog::MiLogStream *v3; // rbx
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v6; // [rsp+20h] [rbp-30h] BYREF

  matched = proto::MatchUnit::match_player_list_size(proto_match_unit);
  if ( matched <= MatchUnitBase::getMaxPlayers(this) )
    return MatchUnitBase::initFromProto(this, proto_match_unit);
  common::milog::MiLogStream::create(
    &v6,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/service/match/match_unit_base.cpp",
    "initFromProto",
    404);
  v3 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
         &v6,
         (const char (*)[41])"[MATCH] player list too large, unit_id: ");
  val = proto::MatchUnit::unit_id(proto_match_unit);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &val);
  common::milog::MiLogStream::~MiLogStream(&v6);
  return -1;
};

// Line 411: range 000000000D7B0B68-000000000D7B10B5
std::string *__cdecl GCGMatchUnit::getDesc[abi:cxx11](std::string *retstr, const GCGMatchUnit *const this)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // rbx
  __int64 v5; // r14
  proto::MatchType MatchType; // eax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // r14
  proto::MatchIdentity MatchIdentity; // eax
  __int64 v20; // rax
  __int64 v21; // r14
  uint32_t UnitId; // eax
  __int64 v23; // rax
  __int64 v24; // r14
  uint32_t v25; // eax
  __int64 v26; // rax
  __int64 v27; // r14
  uint32_t MatchBeginTime; // eax
  __int64 v29; // rax
  __int64 v30; // r14
  uint32_t JoinTeamTime; // eax
  __int64 v32; // rax
  __int64 v33; // r14
  uint32_t RematchCount; // eax
  __int64 v35; // rax
  char v37[528]; // [rsp+10h] [rbp-210h] BYREF

  v2 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(480LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 376 7 oss:412";
  *(_QWORD *)(v2 + 16) = GCGMatchUnit::getDesc[abi:cxx11];
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862732] = -218103808;
  v4[536862733] = -202116109;
  v4[536862734] = -202116109;
  std::ostringstream::basic_ostringstream(v2 + 32);
  v5 = std::operator<<<std::char_traits<char>>(v2 + 32, "[match_type:");
  MatchType = MatchUnitBase::getMatchType(this);
  v7 = std::ostream::operator<<(v5, (unsigned int)MatchType);
  v8 = std::operator<<<std::char_traits<char>>(v7, " match_id: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->match_id_);
  }
  v9 = std::ostream::operator<<(v8, this->match_id_);
  v10 = std::operator<<<std::char_traits<char>>(v9, " rank_id: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->rank_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->rank_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->rank_id_);
  }
  v11 = std::ostream::operator<<(v10, this->rank_id_);
  v12 = std::operator<<<std::char_traits<char>>(v11, " rank_idx_: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->rank_idx_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->rank_idx_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->rank_idx_);
  }
  v13 = std::ostream::operator<<(v12, this->rank_idx_);
  v14 = std::operator<<<std::char_traits<char>>(v13, " extend_: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->extend_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->extend_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->extend_);
  }
  v15 = std::ostream::operator<<(v14, this->extend_);
  v16 = std::operator<<<std::char_traits<char>>(v15, " start_time_: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->start_time_);
  }
  v17 = std::ostream::operator<<(v16, this->start_time_);
  v18 = std::operator<<<std::char_traits<char>>(v17, " ,match_identity: ");
  MatchIdentity = MatchUnitBase::getMatchIdentity(this);
  v20 = std::ostream::operator<<(v18, (unsigned int)MatchIdentity);
  v21 = std::operator<<<std::char_traits<char>>(v20, " ,unit_id: ");
  UnitId = MatchUnitBase::getUnitId(this);
  v23 = std::ostream::operator<<(v21, UnitId);
  v24 = std::operator<<<std::char_traits<char>>(v23, " uid: ");
  v25 = MatchUnitBase::getUnitId(this);
  v26 = std::ostream::operator<<(v24, v25);
  v27 = std::operator<<<std::char_traits<char>>(v26, " ,match_begin_time: ");
  MatchBeginTime = MatchUnitBase::getMatchBeginTime(this);
  v29 = std::ostream::operator<<(v27, MatchBeginTime);
  v30 = std::operator<<<std::char_traits<char>>(v29, " ,join_team_time: ");
  JoinTeamTime = MatchUnitBase::getJoinTeamTime(this);
  v32 = std::ostream::operator<<(v30, JoinTeamTime);
  v33 = std::operator<<<std::char_traits<char>>(v32, " ,rematch_count: ");
  RematchCount = MatchUnitBase::getRematchCount(this);
  v35 = std::ostream::operator<<(v33, RematchCount);
  std::operator<<<std::char_traits<char>>(v35, "]");
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  std::ostringstream::str(retstr, v2 + 32);
  std::ostringstream::~ostringstream(v2 + 32);
  if ( v37 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
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
  return retstr;
};

// Line 422: range 000000000D7B10B6-000000000D7B1693
__int64 __fastcall GCGMatchUnit::refreshMatchExtend(GCGMatchUnit *const this, uint32_t now)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  int v9; // ecx
  uint32_t extend; // r14d
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::pointer v11; // rdx
  unsigned int *p_second; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::pointer v18; // rax
  common::milog::MiLogStream *v19; // r14
  int (**vptr_DescribalBase)(...); // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::pointer v21; // rdx
  unsigned int *v22; // rax
  uint32_t second; // ecx
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self __y; // [rsp+18h] [rbp-D8h] BYREF
  common::milog::MiLogStream v25; // [rsp+20h] [rbp-D0h] BYREF
  common::milog::MiLogStream v26; // [rsp+40h] [rbp-B0h] BYREF
  char v27[144]; // [rsp+60h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 14 match_time:432 48 4 7 now:421 64 8 8 iter:433";
  *(_QWORD *)(v2 + 16) = GCGMatchUnit::refreshMatchExtend;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = now;
  if ( *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->start_time_);
  }
  if ( this->start_time_ <= *(_DWORD *)(v2 + 48) )
  {
    if ( std::map<unsigned int,unsigned int>::empty(&this->extend_time_map_) )
    {
      result = 0LL;
    }
    else
    {
      v9 = *(_DWORD *)(v2 + 48);
      if ( *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->start_time_);
      }
      *(_DWORD *)(v2 + 32) = v9 - this->start_time_;
      *(std::map<unsigned int,unsigned int>::iterator *)(v2 + 64) = std::map<unsigned int,unsigned int>::upper_bound(
                                                                      &this->extend_time_map_,
                                                                      (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 32));
      __y._M_node = std::map<unsigned int,unsigned int>::begin(&this->extend_time_map_)._M_node;
      if ( !std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 64),
              &__y) )
        goto LABEL_28;
      std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator--(
        (std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 64),
        0);
      __y._M_node = std::map<unsigned int,unsigned int>::end(&this->extend_time_map_)._M_node;
      if ( !std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 64),
              &__y) )
        goto LABEL_28;
      if ( *(_BYTE *)(((unsigned __int64)&this->extend_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->extend_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->extend_);
      }
      extend = this->extend_;
      v11 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 64));
      p_second = &v11->second;
      if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_second);
      }
      if ( extend != v11->second )
      {
        common::milog::MiLogStream::create(
          &v25,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/service/match/match_unit_base.cpp",
          "refreshMatchExtend",
          442);
        v13 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                &v25,
                (const char (*)[20])"extend change now: ");
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v13,
                (const unsigned int *)(v2 + 48));
        v15 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v14, (const char (*)[10])" before: ");
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &this->extend_);
        v17 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v16, (const char (*)[9])" after: ");
        v18 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 64));
        v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &v18->second);
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        vptr_DescribalBase = this->_vptr_DescribalBase;
        if ( *(_BYTE *)(((unsigned __int64)this->_vptr_DescribalBase >> 3) + 0x7FFF8000) )
          __asan_report_load8(this->_vptr_DescribalBase);
        (*vptr_DescribalBase)(&v26, this);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v19, (const std::string *)&v26);
        std::string::~string(&v26);
        common::milog::MiLogStream::~MiLogStream(&v25);
        v21 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 64));
        v22 = &v21->second;
        if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v22 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v22);
        }
        second = v21->second;
        if ( *(_BYTE *)(((unsigned __int64)&this->extend_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->extend_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&this->extend_);
        }
        this->extend_ = second;
        result = 1LL;
      }
      else
      {
LABEL_28:
        result = 0LL;
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/match/match_unit_base.cpp",
      "refreshMatchExtend",
      425);
    v5 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v26, (const char (*)[23])off_1BA1DA40);
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v6, (const char (*)[14])" start_time: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->start_time_);
    common::milog::MiLogStream::~MiLogStream(&v26);
    result = 0LL;
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
  return result;
};

// Line 452: range 000000000D7B1694-000000000D7B16CE
void __cdecl GCGMatchUnit::rematchByExtend(GCGMatchUnit *const this)
{
  unsigned int rematch_count; // [rsp+1Ch] [rbp-4h]

  rematch_count = MatchUnitBase::getRematchCount(this);
  MatchUnitBase::rematch(this);
  MatchUnitBase::setRematchCount(this, rematch_count);
};

// Line 459: range 000000000D7B16D0-000000000D7B17EA
bool __cdecl GCGMatchUnit::isMatchAI(GCGMatchUnit *const this)
{
  time_t Now; // rcx

  if ( !proto::GCGDuelExtra::ai_deck_id(&this->gcg_duel_extra) )
    return 0;
  if ( *(char *)(((unsigned __int64)&this->is_match_ai_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_match_ai_);
  if ( this->is_match_ai_ )
    return 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->match_ai_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->match_ai_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->match_ai_time_);
  }
  if ( !this->match_ai_time_ )
    return 0;
  Now = common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)&this->match_ai_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->match_ai_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->match_ai_time_);
  }
  return Now >= this->match_ai_time_;
};

// Line 477: range 000000000D7B17EC-000000000D7B180B
void __cdecl GCGMatchUnit::initMaxPlayers(GCGMatchUnit *const this)
{
  MatchUnitBase::setMaxPlayers(this, 1u);
};
