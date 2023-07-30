// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_game/challenge/gcg_challenge.cpp

// Line 19: range 000000000E11B946-000000000E11BCD6
std::string *__cdecl GCGChallenge::getDesc[abi:cxx11](std::string *retstr, const GCGChallenge *const this)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v5; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v6; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v7; // rcx
  unsigned int *v8; // rax
  unsigned int *v9; // rdx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v10; // rax
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-78h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-70h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+28h] [rbp-68h]
  char v15[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 5 ss:20";
  *(_QWORD *)(v2 + 16) = GCGChallenge::getDesc[abi:cxx11];
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  v5 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
         (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
         "[challenge_id_:");
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->challenge_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->challenge_id_);
  }
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v5, this->challenge_id_);
  v6 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
         (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
         ",challenge_type_:");
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->challenge_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->challenge_type_);
  }
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v6, this->challenge_type_);
  v7 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
         (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
         ",cur_progress_:");
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_progress_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_progress_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_progress_);
  }
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v7, this->cur_progress_);
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
    ",param_vec_:[");
  __for_range = &this->param_vec_;
  __for_begin._M_current = std::vector<unsigned int>::begin(&this->param_vec_)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(&this->param_vec_)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v8 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    v9 = v8;
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v8);
    }
    v10 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
            (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
            *v9);
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v10, ",");
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
    "]]");
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
  if ( v15 == (char *)v2 )
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

// Line 34: range 000000000E11BCD8-000000000E11BE4E
void __cdecl GCGChallenge::fromProto(GCGChallenge *const this, const proto::GCGChallengeData *proto)
{
  uint32_t v2; // edx
  google::protobuf::uint32 v3; // ecx
  uint32_t v4; // ecx
  const google::protobuf::RepeatedField<unsigned int> *v5; // rax
  int (**vptr_GCGChallenge)(...); // rax

  v2 = proto::GCGChallengeData::challenge_id(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->challenge_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->challenge_id_);
  }
  this->challenge_id_ = v2;
  v3 = proto::GCGChallengeData::challenge_type(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->challenge_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->challenge_type_);
  }
  this->challenge_type_ = v3;
  v4 = proto::GCGChallengeData::progress(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->total_progress_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->total_progress_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->total_progress_);
  }
  this->total_progress_ = v4;
  v5 = proto::GCGChallengeData::param_list(proto);
  common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(v5, &this->param_vec_);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  vptr_GCGChallenge = this->_vptr_GCGChallenge;
  if ( *(_BYTE *)(((unsigned __int64)this->_vptr_GCGChallenge >> 3) + 0x7FFF8000) )
    __asan_report_load8(this->_vptr_GCGChallenge);
  (*vptr_GCGChallenge)(this);
};

// Line 44: range 000000000E11BE50-000000000E11BF42
void __cdecl GCGChallenge::toClient(const GCGChallenge *const this, proto::GCGDuelChallenge *proto)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->challenge_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->challenge_id_);
  }
  proto::GCGDuelChallenge::set_challenge_id(proto, this->challenge_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_progress_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_progress_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_progress_);
  }
  proto::GCGDuelChallenge::set_cur_progress(proto, this->cur_progress_);
  if ( *(_BYTE *)(((unsigned __int64)&this->total_progress_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->total_progress_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->total_progress_);
  }
  proto::GCGDuelChallenge::set_total_progress(proto, this->total_progress_);
};

// Line 52: range 000000000E11BF44-000000000E11C3B7
void __fastcall GCGChallenge::setProgressAndNotifyChange(
        GCGChallenge *const this,
        GCGGameMode *game_mode,
        GCGControllerValue controller_id,
        uint32_t progress)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  uint32_t v10; // ecx
  common::milog::MiLogStream *v11; // rax
  std::__shared_ptr_access<GCGPlayerController,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  uint32_t v13; // eax
  proto::GCGDuelChallenge *v14; // rax
  std::__shared_ptr_access<GCGPlayerController,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // r14
  proto::ServerGCGVerify *v16; // rax
  std::__shared_ptr_access<GCGPlayerController,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  common::milog::MiLogStream v20; // [rsp+20h] [rbp-130h] BYREF
  std::string val; // [rsp+40h] [rbp-110h] BYREF
  char v22[240]; // [rsp+60h] [rbp-F0h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 48 4 16 controller_id:51 64 4 11 progress:51 80 16 24 player_controller_ptr:62 112 40 9 notify:68";
  *(_QWORD *)(v4 + 16) = GCGChallenge::setProgressAndNotifyChange;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = 61956;
  v6[536862723] = 62194;
  v6[536862724] = -218103808;
  v6[536862725] = -202116109;
  *(_DWORD *)(v4 + 48) = controller_id;
  *(_DWORD *)(v4 + 64) = progress;
  common::milog::MiLogStream::create(
    &v20,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/card_game/challenge/gcg_challenge.cpp",
    "setProgressAndNotifyChange",
    53);
  v7 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
         &v20,
         (const char (*)[42])"setProgressAndNotifyChange, new_progress:");
  v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 64));
  v9 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v8, (const char (*)[12])" challenge:");
  GCGChallenge::getDesc[abi:cxx11](&val, this);
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, &val);
  std::string::~string(&val);
  common::milog::MiLogStream::~MiLogStream(&v20);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_progress_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_progress_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_progress_);
  }
  if ( this->cur_progress_ != *(_DWORD *)(v4 + 64) )
  {
    v10 = *(_DWORD *)(v4 + 64);
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_progress_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->cur_progress_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->cur_progress_);
    }
    this->cur_progress_ = v10;
    GCGGameMode::getController<GCGPlayerController>((GCGGameMode *const)(v4 + 80), (GCGControllerValue)game_mode);
    if ( std::operator==<GCGPlayerController>(0LL, (const std::shared_ptr<GCGPlayerController> *)(v4 + 80)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&val,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/card_game/challenge/gcg_challenge.cpp",
        "setProgressAndNotifyChange",
        65);
      v11 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
              (common::milog::MiLogStream *const)&val,
              (const char (*)[34])"getController fail, controller_id");
      common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
        v11,
        (const proto::GCGControllerValue *)(v4 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
    }
    else
    {
      proto::ServerGCGChallengeUpdateNotify::ServerGCGChallengeUpdateNotify((proto::ServerGCGChallengeUpdateNotify *const)(v4 + 112));
      v12 = std::__shared_ptr_access<GCGPlayerController,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPlayerController,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
      v13 = GCGPlayerController::genServerSeq(v12);
      proto::ServerGCGChallengeUpdateNotify::set_server_seq(
        (proto::ServerGCGChallengeUpdateNotify *const)(v4 + 112),
        v13);
      v14 = proto::ServerGCGChallengeUpdateNotify::mutable_challenge((proto::ServerGCGChallengeUpdateNotify *const)(v4 + 112));
      GCGChallenge::toClient(this, v14);
      v15 = std::__shared_ptr_access<GCGPlayerController,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPlayerController,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
      v16 = proto::ServerGCGChallengeUpdateNotify::mutable_verify((proto::ServerGCGChallengeUpdateNotify *const)(v4 + 112));
      GCGPlayerController::fillVerify(v15, v16);
      v17 = std::__shared_ptr_access<GCGPlayerController,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPlayerController,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
      GCGPlayerController::sendProto(v17, (const google::protobuf::Message *)(v4 + 112));
      proto::ServerGCGChallengeUpdateNotify::~ServerGCGChallengeUpdateNotify((proto::ServerGCGChallengeUpdateNotify *const)(v4 + 112));
    }
    std::shared_ptr<GCGPlayerController>::~shared_ptr((std::shared_ptr<GCGPlayerController> *const)(v4 + 80));
  }
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
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

// Line 77: range 000000000E11C3B8-000000000E11C3FF
void __cdecl GCGChallengeWin::updateProgress(
        GCGChallengeWin *const this,
        GCGGameMode *game_mode,
        GCGControllerValue controller_id,
        const GCGChallengeUpdateParam *param)
{
  if ( controller_id == GCGGameMode::getWinner(game_mode) )
    GCGChallenge::setProgressAndNotifyChange(this, game_mode, controller_id, 1u);
};

// Line 86: range 000000000E11C400-000000000E11C466
void __cdecl GCGChallengeCharacterAliveNum::updateProgress(
        GCGChallengeCharacterAliveNum *const this,
        GCGGameMode *game_mode,
        GCGControllerValue controller_id,
        const GCGChallengeUpdateParam *param)
{
  GCGDuel *Duel; // rax
  GCGCharacterZone *CharacterZone; // rax
  uint32_t num; // [rsp+24h] [rbp-Ch]
  GCGField *field; // [rsp+28h] [rbp-8h]

  Duel = GCGGameMode::getDuel(game_mode);
  field = GCGDuel::getField(Duel, controller_id);
  CharacterZone = GCGField::getCharacterZone(field);
  num = GCGCharacterZone::getAliveCharacterNum(CharacterZone);
  GCGChallenge::setProgressAndNotifyChange(this, game_mode, controller_id, num);
};

// Line 94: range 000000000E11C468-000000000E11C4F3
void __cdecl GCGChallengeBeingHealSum::updateProgress(
        GCGChallengeBeingHealSum *const this,
        GCGGameMode *game_mode,
        GCGControllerValue controller_id,
        const GCGChallengeUpdateParam *param)
{
  unsigned __int64 StatisticSpecifyData; // rax
  const GCGStatistics *statistics; // [rsp+28h] [rbp-8h]

  statistics = GCGGameMode::getStatistics(game_mode);
  StatisticSpecifyData = (unsigned __int64)GCGStatistics::getStatisticSpecifyData(
                                             statistics,
                                             controller_id,
                                             BEING_HEAL_SUM);
  if ( *(_BYTE *)((StatisticSpecifyData >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((StatisticSpecifyData >> 3) + 0x7FFF8000) <= 3 )
  {
    StatisticSpecifyData = __asan_report_load4(StatisticSpecifyData);
  }
  GCGChallenge::setProgressAndNotifyChange(this, game_mode, controller_id, *(_DWORD *)StatisticSpecifyData);
};

// Line 102: range 000000000E11C4F4-000000000E11C57F
void __cdecl GCGChallengeShieldReduceSum::updateProgress(
        GCGChallengeShieldReduceSum *const this,
        GCGGameMode *game_mode,
        GCGControllerValue controller_id,
        const GCGChallengeUpdateParam *param)
{
  unsigned __int64 StatisticSpecifyData; // rax
  const GCGStatistics *statistics; // [rsp+28h] [rbp-8h]

  statistics = GCGGameMode::getStatistics(game_mode);
  StatisticSpecifyData = (unsigned __int64)GCGStatistics::getStatisticSpecifyData(
                                             statistics,
                                             controller_id,
                                             SHIELD_REDUCE_SUM);
  if ( *(_BYTE *)((StatisticSpecifyData >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((StatisticSpecifyData >> 3) + 0x7FFF8000) <= 3 )
  {
    StatisticSpecifyData = __asan_report_load4(StatisticSpecifyData);
  }
  GCGChallenge::setProgressAndNotifyChange(this, game_mode, controller_id, *(_DWORD *)StatisticSpecifyData);
};

// Line 110: range 000000000E11C580-000000000E11C60B
void __cdecl GCGChallengeElementReactionTimes::updateProgress(
        GCGChallengeElementReactionTimes *const this,
        GCGGameMode *game_mode,
        GCGControllerValue controller_id,
        const GCGChallengeUpdateParam *param)
{
  unsigned __int64 StatisticSpecifyData; // rax
  const GCGStatistics *statistics; // [rsp+28h] [rbp-8h]

  statistics = GCGGameMode::getStatistics(game_mode);
  StatisticSpecifyData = (unsigned __int64)GCGStatistics::getStatisticSpecifyData(
                                             statistics,
                                             controller_id,
                                             ELEMENT_REACTION_TIMES);
  if ( *(_BYTE *)((StatisticSpecifyData >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((StatisticSpecifyData >> 3) + 0x7FFF8000) <= 3 )
  {
    StatisticSpecifyData = __asan_report_load4(StatisticSpecifyData);
  }
  GCGChallenge::setProgressAndNotifyChange(this, game_mode, controller_id, *(_DWORD *)StatisticSpecifyData);
};

// Line 118: range 000000000E11C60C-000000000E11C844
void __cdecl GCGChallengeOneHitDamageTimes::updateProgress(
        GCGChallengeOneHitDamageTimes *const this,
        GCGGameMode *game_mode,
        GCGControllerValue controller_id,
        const GCGChallengeUpdateParam *param)
{
  common::milog::MiLogStream *v4; // rbx
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  unsigned int *v7; // rax
  unsigned int *v8; // rdx
  std::vector<unsigned int>::reference v9; // rax
  unsigned int *v10; // rdx
  uint32_t new_progress; // [rsp+20h] [rbp-60h]
  unsigned int damage; // [rsp+24h] [rbp-5Ch]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-58h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-50h] BYREF
  GCGStatistics *statistics; // [rsp+38h] [rbp-48h]
  const std::vector<unsigned int> *damage_vec; // [rsp+40h] [rbp-40h]
  const std::vector<unsigned int> *__for_range; // [rsp+48h] [rbp-38h]
  common::milog::MiLogStream v19; // [rsp+50h] [rbp-30h] BYREF

  if ( std::vector<unsigned int>::empty(&this->param_vec_) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_game/challenge/gcg_challenge.cpp",
      "updateProgress",
      121);
    v4 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
           &v19,
           (const char (*)[20])"Invalid param size:");
    __for_end._M_current = (const unsigned int *)std::vector<unsigned int>::size(&this->param_vec_);
    v5 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
           v4,
           (const unsigned __int64 *)&__for_end);
    v6 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v5, (const char (*)[15])" challenge_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->challenge_id_);
    common::milog::MiLogStream::~MiLogStream(&v19);
  }
  else
  {
    statistics = GCGGameMode::getStatistics(game_mode);
    new_progress = 0;
    damage_vec = &GCGStatistics::getStatisticSpecifyData(statistics, controller_id, ONE_HIT_DAMAGE_VEC)->data_uint_vec;
    __for_range = damage_vec;
    __for_begin._M_current = std::vector<unsigned int>::begin(damage_vec)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(damage_vec)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v7 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
      v8 = v7;
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v7);
      }
      damage = *v8;
      v9 = std::vector<unsigned int>::operator[](&this->param_vec_, 0LL);
      v10 = v9;
      if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v9);
      }
      if ( damage >= *v10 )
        ++new_progress;
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    GCGChallenge::setProgressAndNotifyChange(this, game_mode, controller_id, new_progress);
  }
};

// Line 139: range 000000000E11C846-000000000E11C8D1
void __cdecl GCGChallengePlayCardTimes::updateProgress(
        GCGChallengePlayCardTimes *const this,
        GCGGameMode *game_mode,
        GCGControllerValue controller_id,
        const GCGChallengeUpdateParam *param)
{
  unsigned __int64 StatisticSpecifyData; // rax
  const GCGStatistics *statistics; // [rsp+28h] [rbp-8h]

  statistics = GCGGameMode::getStatistics(game_mode);
  StatisticSpecifyData = (unsigned __int64)GCGStatistics::getStatisticSpecifyData(
                                             statistics,
                                             controller_id,
                                             PLAY_CARD_TIMES);
  if ( *(_BYTE *)((StatisticSpecifyData >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((StatisticSpecifyData >> 3) + 0x7FFF8000) <= 3 )
  {
    StatisticSpecifyData = __asan_report_load4(StatisticSpecifyData);
  }
  GCGChallenge::setProgressAndNotifyChange(this, game_mode, controller_id, *(_DWORD *)StatisticSpecifyData);
};

// Line 147: range 000000000E11C8D2-000000000E11C95D
void __cdecl GCGChallengeSummonTimes::updateProgress(
        GCGChallengeSummonTimes *const this,
        GCGGameMode *game_mode,
        GCGControllerValue controller_id,
        const GCGChallengeUpdateParam *param)
{
  unsigned __int64 StatisticSpecifyData; // rax
  const GCGStatistics *statistics; // [rsp+28h] [rbp-8h]

  statistics = GCGGameMode::getStatistics(game_mode);
  StatisticSpecifyData = (unsigned __int64)GCGStatistics::getStatisticSpecifyData(
                                             statistics,
                                             controller_id,
                                             SUMMON_TIMES);
  if ( *(_BYTE *)((StatisticSpecifyData >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((StatisticSpecifyData >> 3) + 0x7FFF8000) <= 3 )
  {
    StatisticSpecifyData = __asan_report_load4(StatisticSpecifyData);
  }
  GCGChallenge::setProgressAndNotifyChange(this, game_mode, controller_id, *(_DWORD *)StatisticSpecifyData);
};

// Line 155: range 000000000E11C95E-000000000E11CB28
void __cdecl GCGChallengeSettleWithSkillTagQTimes::updateProgress(
        GCGChallengeSettleWithSkillTagQTimes *const this,
        GCGGameMode *game_mode,
        GCGControllerValue controller_id,
        const GCGChallengeUpdateParam *param)
{
  common::milog::MiLogStream *v4; // rbx
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  unsigned __int64 StatisticSpecifyData; // rax
  std::vector<unsigned int>::reference v8; // rax
  uint32_t *v9; // rdx
  uint32_t new_progress; // [rsp+28h] [rbp-48h]
  uint32_t use_skill_tag_q_times; // [rsp+2Ch] [rbp-44h]
  unsigned __int64 val; // [rsp+30h] [rbp-40h] BYREF
  GCGStatistics *statistics; // [rsp+38h] [rbp-38h]
  common::milog::MiLogStream v15; // [rsp+40h] [rbp-30h] BYREF

  if ( std::vector<unsigned int>::empty(&this->param_vec_) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_game/challenge/gcg_challenge.cpp",
      "updateProgress",
      158);
    v4 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
           &v15,
           (const char (*)[20])"Invalid param size:");
    val = std::vector<unsigned int>::size(&this->param_vec_);
    v5 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v4, &val);
    v6 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v5, (const char (*)[15])" challenge_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->challenge_id_);
    common::milog::MiLogStream::~MiLogStream(&v15);
  }
  else
  {
    statistics = GCGGameMode::getStatistics(game_mode);
    new_progress = 0;
    StatisticSpecifyData = (unsigned __int64)GCGStatistics::getStatisticSpecifyData(
                                               statistics,
                                               controller_id,
                                               SKILL_TAG_Q_TIMES);
    if ( *(_BYTE *)((StatisticSpecifyData >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)((StatisticSpecifyData >> 3) + 0x7FFF8000) <= 3 )
    {
      StatisticSpecifyData = __asan_report_load4(StatisticSpecifyData);
    }
    use_skill_tag_q_times = *(_DWORD *)StatisticSpecifyData;
    v8 = std::vector<unsigned int>::operator[](&this->param_vec_, 0LL);
    v9 = v8;
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v8);
    }
    if ( use_skill_tag_q_times >= *v9 )
      new_progress = 1;
    GCGChallenge::setProgressAndNotifyChange(this, game_mode, controller_id, new_progress);
  }
};

// Line 173: range 000000000E11CB2A-000000000E11CD62
void __cdecl GCGChallengeOneOperationKillCountTimes::updateProgress(
        GCGChallengeOneOperationKillCountTimes *const this,
        GCGGameMode *game_mode,
        GCGControllerValue controller_id,
        const GCGChallengeUpdateParam *param)
{
  common::milog::MiLogStream *v4; // rbx
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  unsigned int *v7; // rax
  unsigned int *v8; // rdx
  std::vector<unsigned int>::reference v9; // rax
  unsigned int *v10; // rdx
  uint32_t new_progress; // [rsp+20h] [rbp-60h]
  unsigned int kill_count; // [rsp+24h] [rbp-5Ch]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-58h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-50h] BYREF
  GCGStatistics *statistics; // [rsp+38h] [rbp-48h]
  const std::vector<unsigned int> *kill_count_vec; // [rsp+40h] [rbp-40h]
  const std::vector<unsigned int> *__for_range; // [rsp+48h] [rbp-38h]
  common::milog::MiLogStream v19; // [rsp+50h] [rbp-30h] BYREF

  if ( std::vector<unsigned int>::empty(&this->param_vec_) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_game/challenge/gcg_challenge.cpp",
      "updateProgress",
      176);
    v4 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
           &v19,
           (const char (*)[20])"Invalid param size:");
    __for_end._M_current = (const unsigned int *)std::vector<unsigned int>::size(&this->param_vec_);
    v5 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
           v4,
           (const unsigned __int64 *)&__for_end);
    v6 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v5, (const char (*)[15])" challenge_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->challenge_id_);
    common::milog::MiLogStream::~MiLogStream(&v19);
  }
  else
  {
    statistics = GCGGameMode::getStatistics(game_mode);
    new_progress = 0;
    kill_count_vec = &GCGStatistics::getStatisticSpecifyData(statistics, controller_id, ONE_OPERATION_KILL_COUNT_VEC)->data_uint_vec;
    __for_range = kill_count_vec;
    __for_begin._M_current = std::vector<unsigned int>::begin(kill_count_vec)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(kill_count_vec)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v7 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
      v8 = v7;
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v7);
      }
      kill_count = *v8;
      v9 = std::vector<unsigned int>::operator[](&this->param_vec_, 0LL);
      v10 = v9;
      if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v9);
      }
      if ( kill_count >= *v10 )
        ++new_progress;
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    GCGChallenge::setProgressAndNotifyChange(this, game_mode, controller_id, new_progress);
  }
};

// Line 194: range 000000000E11CD64-000000000E11CDEF
void __cdecl GCGChallengeDeadCharacterNum::updateProgress(
        GCGChallengeDeadCharacterNum *const this,
        GCGGameMode *game_mode,
        GCGControllerValue controller_id,
        const GCGChallengeUpdateParam *param)
{
  unsigned __int64 StatisticSpecifyData; // rax
  const GCGStatistics *statistics; // [rsp+28h] [rbp-8h]

  statistics = GCGGameMode::getStatistics(game_mode);
  StatisticSpecifyData = (unsigned __int64)GCGStatistics::getStatisticSpecifyData(
                                             statistics,
                                             controller_id,
                                             CHARACTER_DIE_TIMES);
  if ( *(_BYTE *)((StatisticSpecifyData >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((StatisticSpecifyData >> 3) + 0x7FFF8000) <= 3 )
  {
    StatisticSpecifyData = __asan_report_load4(StatisticSpecifyData);
  }
  GCGChallenge::setProgressAndNotifyChange(this, game_mode, controller_id, *(_DWORD *)StatisticSpecifyData);
};

// Line 202: range 000000000E11CDF0-000000000E11CE36
void __cdecl GCGChallengeRoundNum::updateProgress(
        GCGChallengeRoundNum *const this,
        GCGGameMode *game_mode,
        GCGControllerValue controller_id,
        const GCGChallengeUpdateParam *param)
{
  GCGDuel *Duel; // rax
  uint32_t cur_round; // [rsp+2Ch] [rbp-4h]

  Duel = GCGGameMode::getDuel(game_mode);
  cur_round = GCGDuel::getRound(Duel);
  GCGChallenge::setProgressAndNotifyChange(this, game_mode, controller_id, cur_round);
};

// Line 209: range 000000000E11CE38-000000000E11D0AC
void __cdecl GCGChallengeReactionWithTargetElementTimes::updateProgress(
        GCGChallengeReactionWithTargetElementTimes *const this,
        GCGGameMode *game_mode,
        GCGControllerValue controller_id,
        const GCGChallengeUpdateParam *param)
{
  common::milog::MiLogStream *v4; // rbx
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  uint32_t param1; // ebx
  std::vector<unsigned int>::reference v8; // rax
  _DWORD *v9; // rdx
  uint32_t param2; // ebx
  std::vector<unsigned int>::reference v11; // rax
  _DWORD *v12; // rdx
  char v13; // al
  GCGChallengeReactionWithTargetElementTimes *thisa; // [rsp+18h] [rbp-48h]
  unsigned __int64 val; // [rsp+28h] [rbp-38h] BYREF
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-30h] BYREF

  thisa = this;
  if ( std::vector<unsigned int>::empty(&this->param_vec_) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_game/challenge/gcg_challenge.cpp",
      "updateProgress",
      212);
    v4 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
           &v18,
           (const char (*)[20])"Invalid param size:");
    val = std::vector<unsigned int>::size(&this->param_vec_);
    v5 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v4, &val);
    v6 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v5, (const char (*)[15])" challenge_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->challenge_id_);
    common::milog::MiLogStream::~MiLogStream(&v18);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(param);
    }
    param1 = param->param1;
    v8 = std::vector<unsigned int>::operator[](&this->param_vec_, 0LL);
    v9 = v8;
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v8);
    }
    if ( param1 == *v9 )
      goto LABEL_13;
    if ( *(_BYTE *)(((unsigned __int64)&param->param2 >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->param2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&param->param2);
    }
    param2 = param->param2;
    v11 = std::vector<unsigned int>::operator[](&this->param_vec_, 0LL);
    v12 = v11;
    if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v11);
    }
    if ( param2 == *v12 )
LABEL_13:
      v13 = 1;
    else
      v13 = 0;
    if ( v13 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->cur_progress_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->cur_progress_ >> 3) + 0x7FFF8000) <= 3 )
      {
        this = (GCGChallengeReactionWithTargetElementTimes *const)((char *)this + 40);
        __asan_report_load4(&thisa->cur_progress_);
      }
      GCGChallenge::setProgressAndNotifyChange(this, game_mode, controller_id, thisa->cur_progress_ + 1);
    }
  }
};

// Line 223: range 000000000E11D0AE-000000000E11D139
void __cdecl GCGChallengeSkillTagQTimes::updateProgress(
        GCGChallengeSkillTagQTimes *const this,
        GCGGameMode *game_mode,
        GCGControllerValue controller_id,
        const GCGChallengeUpdateParam *param)
{
  unsigned __int64 StatisticSpecifyData; // rax
  const GCGStatistics *statistics; // [rsp+28h] [rbp-8h]

  statistics = GCGGameMode::getStatistics(game_mode);
  StatisticSpecifyData = (unsigned __int64)GCGStatistics::getStatisticSpecifyData(
                                             statistics,
                                             controller_id,
                                             SKILL_TAG_Q_TIMES);
  if ( *(_BYTE *)((StatisticSpecifyData >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((StatisticSpecifyData >> 3) + 0x7FFF8000) <= 3 )
  {
    StatisticSpecifyData = __asan_report_load4(StatisticSpecifyData);
  }
  GCGChallenge::setProgressAndNotifyChange(this, game_mode, controller_id, *(_DWORD *)StatisticSpecifyData);
};

// Line 231: range 000000000E11D13A-000000000E11D304
void __cdecl GCGChallengeSummonTimesEqualOrLargeThanParam::updateProgress(
        GCGChallengeSummonTimesEqualOrLargeThanParam *const this,
        GCGGameMode *game_mode,
        GCGControllerValue controller_id,
        const GCGChallengeUpdateParam *param)
{
  common::milog::MiLogStream *v4; // rbx
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  unsigned __int64 StatisticSpecifyData; // rax
  std::vector<unsigned int>::reference v8; // rax
  uint32_t *v9; // rdx
  uint32_t new_progress; // [rsp+28h] [rbp-48h]
  uint32_t summon_times; // [rsp+2Ch] [rbp-44h]
  unsigned __int64 val; // [rsp+30h] [rbp-40h] BYREF
  GCGStatistics *statistics; // [rsp+38h] [rbp-38h]
  common::milog::MiLogStream v15; // [rsp+40h] [rbp-30h] BYREF

  if ( std::vector<unsigned int>::empty(&this->param_vec_) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_game/challenge/gcg_challenge.cpp",
      "updateProgress",
      234);
    v4 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
           &v15,
           (const char (*)[20])"Invalid param size:");
    val = std::vector<unsigned int>::size(&this->param_vec_);
    v5 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v4, &val);
    v6 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v5, (const char (*)[15])" challenge_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->challenge_id_);
    common::milog::MiLogStream::~MiLogStream(&v15);
  }
  else
  {
    statistics = GCGGameMode::getStatistics(game_mode);
    new_progress = 0;
    StatisticSpecifyData = (unsigned __int64)GCGStatistics::getStatisticSpecifyData(
                                               statistics,
                                               controller_id,
                                               SUMMON_TIMES);
    if ( *(_BYTE *)((StatisticSpecifyData >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)((StatisticSpecifyData >> 3) + 0x7FFF8000) <= 3 )
    {
      StatisticSpecifyData = __asan_report_load4(StatisticSpecifyData);
    }
    summon_times = *(_DWORD *)StatisticSpecifyData;
    v8 = std::vector<unsigned int>::operator[](&this->param_vec_, 0LL);
    v9 = v8;
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v8);
    }
    if ( summon_times >= *v9 )
      new_progress = 1;
    GCGChallenge::setProgressAndNotifyChange(this, game_mode, controller_id, new_progress);
  }
};

// Line 248: range 000000000E11D306-000000000E11D695
void __cdecl GCGChallengePlayCardWithTagTimes::init(GCGChallengePlayCardWithTagTimes *const this)
{
  common::milog::MiLogStream *v1; // rbx
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream *v3; // rax
  std::vector<unsigned int>::reference v4; // rax
  uint32_t *v5; // rdx
  std::vector<unsigned int>::size_type v6; // rbx
  common::milog::MiLogStream *v7; // rbx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  unsigned int *v11; // rax
  unsigned int *v12; // rdx
  unsigned int *v13; // rax
  unsigned int *v14; // rdx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  uint32_t idx; // [rsp+10h] [rbp-40h]
  uint32_t param_card_type_size; // [rsp+14h] [rbp-3Ch]
  unsigned __int64 val; // [rsp+18h] [rbp-38h] BYREF
  common::milog::MiLogStream v23; // [rsp+20h] [rbp-30h] BYREF

  if ( std::vector<unsigned int>::size(&this->param_vec_) )
  {
    v4 = std::vector<unsigned int>::operator[](&this->param_vec_, 0LL);
    v5 = v4;
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v4);
    }
    param_card_type_size = *v5;
    v6 = *v5;
    if ( v6 < std::vector<unsigned int>::size(&this->param_vec_) )
    {
      for ( idx = 1; idx <= param_card_type_size && idx < std::vector<unsigned int>::size(&this->param_vec_); ++idx )
      {
        v11 = std::vector<unsigned int>::operator[](&this->param_vec_, idx);
        std::set<unsigned int>::emplace<unsigned int &>(&this->valid_card_type_set, v11, v12);
      }
      while ( idx < std::vector<unsigned int>::size(&this->param_vec_) )
      {
        v13 = std::vector<unsigned int>::operator[](&this->param_vec_, idx);
        std::set<unsigned int>::emplace<unsigned int &>(&this->valid_card_tag_set, v13, v14);
        ++idx;
      }
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/card_game/challenge/gcg_challenge.cpp",
        "init",
        269);
      v15 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
              &v23,
              (const char (*)[48])"GCGChallengePlayCardWithTagTimes, challenge_id:");
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &this->challenge_id_);
      v17 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              v16,
              (const char (*)[22])" valid_card_type_set:");
      v18 = common::milog::MiLogStream::operator<<<unsigned int>(v17, &this->valid_card_type_set);
      v19 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              v18,
              (const char (*)[21])" valid_card_tag_set:");
      common::milog::MiLogStream::operator<<<unsigned int>(v19, &this->valid_card_tag_set);
      common::milog::MiLogStream::~MiLogStream(&v23);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/card_game/challenge/gcg_challenge.cpp",
        "init",
        257);
      v7 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
             &v23,
             (const char (*)[20])"Invalid param size:");
      val = std::vector<unsigned int>::size(&this->param_vec_);
      v8 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v7, &val);
      v9 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v8, (const char (*)[15])" challenge_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->challenge_id_);
      common::milog::MiLogStream::~MiLogStream(&v23);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_game/challenge/gcg_challenge.cpp",
      "init",
      251);
    v1 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
           &v23,
           (const char (*)[20])"Invalid param size:");
    val = std::vector<unsigned int>::size(&this->param_vec_);
    v2 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v1, &val);
    v3 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v2, (const char (*)[15])" challenge_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &this->challenge_id_);
    common::milog::MiLogStream::~MiLogStream(&v23);
  }
};

// Line 274: range 000000000E11D696-000000000E11D8FC
void __cdecl GCGChallengePlayCardWithTagTimes::updateProgress(
        GCGChallengePlayCardWithTagTimes *const this,
        GCGGameMode *game_mode,
        GCGControllerValue controller_id,
        const GCGChallengeUpdateParam *param)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  std::_Rb_tree_const_iterator<unsigned int>::reference v7; // rax
  _DWORD *v8; // rdx
  bool v9; // al
  GCGChallengePlayCardWithTagTimes *thisa; // [rsp+18h] [rbp-88h]
  bool is_add_progress; // [rsp+27h] [rbp-79h]
  std::set<unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-78h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+30h] [rbp-70h] BYREF
  std::set<unsigned int> *__for_range; // [rsp+38h] [rbp-68h]
  char v17[96]; // [rsp+40h] [rbp-60h] BYREF

  thisa = this;
  v4 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 12 tag_type:277";
  *(_QWORD *)(v4 + 16) = GCGChallengePlayCardWithTagTimes::updateProgress;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  is_add_progress = std::set<unsigned int>::empty(&this->valid_card_tag_set);
  __for_range = &this->valid_card_tag_set;
  __for_begin._M_node = std::set<unsigned int>::begin(&this->valid_card_tag_set)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(&this->valid_card_tag_set)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v7 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    v8 = v7;
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v7);
    }
    *(_DWORD *)(v4 + 32) = *v8;
    if ( common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
           &param->param_set,
           (const unsigned int *)(v4 + 32)) )
    {
      is_add_progress = 1;
      break;
    }
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  v9 = std::set<unsigned int>::empty(&this->valid_card_type_set)
    || common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
         &this->valid_card_type_set,
         &param->param1);
  if ( is_add_progress && v9 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_progress_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->cur_progress_ >> 3) + 0x7FFF8000) <= 3 )
    {
      this = (GCGChallengePlayCardWithTagTimes *const)((char *)this + 40);
      __asan_report_load4(&thisa->cur_progress_);
    }
    GCGChallenge::setProgressAndNotifyChange(this, game_mode, controller_id, thisa->cur_progress_ + 1);
  }
  if ( v17 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 295: range 000000000E11D8FE-000000000E11DE11
GCGChallengePtr __cdecl GCGChallengeFactory::createGCGChallenge(const proto::GCGChallengeData *challenge_proto)
{
  const proto::GCGChallengeData *v1; // rsi
  common::milog::MiLogStream *v2; // rbx
  GCGChallengePtr result; // rax
  GCGChallenge *v4; // rdx
  unsigned int val; // [rsp+1Ch] [rbp-134h] BYREF
  std::shared_ptr<GCGChallengeWin> __r; // [rsp+20h] [rbp-130h] BYREF
  std::shared_ptr<GCGChallengeCharacterAliveNum> v7; // [rsp+30h] [rbp-120h] BYREF
  std::shared_ptr<GCGChallengeBeingHealSum> v8; // [rsp+40h] [rbp-110h] BYREF
  std::shared_ptr<GCGChallengeShieldReduceSum> v9; // [rsp+50h] [rbp-100h] BYREF
  std::shared_ptr<GCGChallengeElementReactionTimes> v10; // [rsp+60h] [rbp-F0h] BYREF
  std::shared_ptr<GCGChallengeOneHitDamageTimes> v11; // [rsp+70h] [rbp-E0h] BYREF
  std::shared_ptr<GCGChallengePlayCardTimes> v12; // [rsp+80h] [rbp-D0h] BYREF
  std::shared_ptr<GCGChallengeSummonTimes> v13; // [rsp+90h] [rbp-C0h] BYREF
  std::shared_ptr<GCGChallengeSettleWithSkillTagQTimes> v14; // [rsp+A0h] [rbp-B0h] BYREF
  std::shared_ptr<GCGChallengeOneOperationKillCountTimes> v15; // [rsp+B0h] [rbp-A0h] BYREF
  std::shared_ptr<GCGChallengeDeadCharacterNum> v16; // [rsp+C0h] [rbp-90h] BYREF
  std::shared_ptr<GCGChallengeRoundNum> v17; // [rsp+D0h] [rbp-80h] BYREF
  std::shared_ptr<GCGChallengeReactionWithTargetElementTimes> v18; // [rsp+E0h] [rbp-70h] BYREF
  std::shared_ptr<GCGChallengeSkillTagQTimes> v19; // [rsp+F0h] [rbp-60h] BYREF
  std::shared_ptr<GCGChallengeSummonTimesEqualOrLargeThanParam> v20; // [rsp+100h] [rbp-50h] BYREF
  std::shared_ptr<GCGChallengePlayCardWithTagTimes> v21; // [rsp+110h] [rbp-40h] BYREF
  common::milog::MiLogStream v22; // [rsp+120h] [rbp-30h] BYREF

  if ( *(_WORD *)(((unsigned __int64)challenge_proto >> 3) + 0x7FFF8000) )
    __asan_report_store16(challenge_proto, v1);
  challenge_proto->_vptr_MessageLite = 0LL;
  challenge_proto->_internal_metadata_.ptr_ = 0LL;
  switch ( proto::GCGChallengeData::challenge_type(v1) )
  {
    case 1u:
      common::tools::perf::make_shared<GCGChallengeWin>();
      std::shared_ptr<GCGChallenge>::operator=<GCGChallengeWin>(
        (std::shared_ptr<GCGChallenge> *const)challenge_proto,
        &__r);
      std::shared_ptr<GCGChallengeWin>::~shared_ptr(&__r);
      break;
    case 2u:
      common::tools::perf::make_shared<GCGChallengeCharacterAliveNum>();
      std::shared_ptr<GCGChallenge>::operator=<GCGChallengeCharacterAliveNum>(
        (std::shared_ptr<GCGChallenge> *const)challenge_proto,
        &v7);
      std::shared_ptr<GCGChallengeCharacterAliveNum>::~shared_ptr(&v7);
      break;
    case 3u:
      common::tools::perf::make_shared<GCGChallengeBeingHealSum>();
      std::shared_ptr<GCGChallenge>::operator=<GCGChallengeBeingHealSum>(
        (std::shared_ptr<GCGChallenge> *const)challenge_proto,
        &v8);
      std::shared_ptr<GCGChallengeBeingHealSum>::~shared_ptr(&v8);
      break;
    case 4u:
      common::tools::perf::make_shared<GCGChallengeShieldReduceSum>();
      std::shared_ptr<GCGChallenge>::operator=<GCGChallengeShieldReduceSum>(
        (std::shared_ptr<GCGChallenge> *const)challenge_proto,
        &v9);
      std::shared_ptr<GCGChallengeShieldReduceSum>::~shared_ptr(&v9);
      break;
    case 5u:
      common::tools::perf::make_shared<GCGChallengeElementReactionTimes>();
      std::shared_ptr<GCGChallenge>::operator=<GCGChallengeElementReactionTimes>(
        (std::shared_ptr<GCGChallenge> *const)challenge_proto,
        &v10);
      std::shared_ptr<GCGChallengeElementReactionTimes>::~shared_ptr(&v10);
      break;
    case 6u:
      common::tools::perf::make_shared<GCGChallengeOneHitDamageTimes>();
      std::shared_ptr<GCGChallenge>::operator=<GCGChallengeOneHitDamageTimes>(
        (std::shared_ptr<GCGChallenge> *const)challenge_proto,
        &v11);
      std::shared_ptr<GCGChallengeOneHitDamageTimes>::~shared_ptr(&v11);
      break;
    case 7u:
      common::tools::perf::make_shared<GCGChallengePlayCardTimes>();
      std::shared_ptr<GCGChallenge>::operator=<GCGChallengePlayCardTimes>(
        (std::shared_ptr<GCGChallenge> *const)challenge_proto,
        &v12);
      std::shared_ptr<GCGChallengePlayCardTimes>::~shared_ptr(&v12);
      break;
    case 8u:
      common::tools::perf::make_shared<GCGChallengeSummonTimes>();
      std::shared_ptr<GCGChallenge>::operator=<GCGChallengeSummonTimes>(
        (std::shared_ptr<GCGChallenge> *const)challenge_proto,
        &v13);
      std::shared_ptr<GCGChallengeSummonTimes>::~shared_ptr(&v13);
      break;
    case 9u:
      common::tools::perf::make_shared<GCGChallengeSettleWithSkillTagQTimes>();
      std::shared_ptr<GCGChallenge>::operator=<GCGChallengeSettleWithSkillTagQTimes>(
        (std::shared_ptr<GCGChallenge> *const)challenge_proto,
        &v14);
      std::shared_ptr<GCGChallengeSettleWithSkillTagQTimes>::~shared_ptr(&v14);
      break;
    case 0xAu:
      common::tools::perf::make_shared<GCGChallengeOneOperationKillCountTimes>();
      std::shared_ptr<GCGChallenge>::operator=<GCGChallengeOneOperationKillCountTimes>(
        (std::shared_ptr<GCGChallenge> *const)challenge_proto,
        &v15);
      std::shared_ptr<GCGChallengeOneOperationKillCountTimes>::~shared_ptr(&v15);
      break;
    case 0xBu:
      common::tools::perf::make_shared<GCGChallengeDeadCharacterNum>();
      std::shared_ptr<GCGChallenge>::operator=<GCGChallengeDeadCharacterNum>(
        (std::shared_ptr<GCGChallenge> *const)challenge_proto,
        &v16);
      std::shared_ptr<GCGChallengeDeadCharacterNum>::~shared_ptr(&v16);
      break;
    case 0xCu:
      common::tools::perf::make_shared<GCGChallengeRoundNum>();
      std::shared_ptr<GCGChallenge>::operator=<GCGChallengeRoundNum>(
        (std::shared_ptr<GCGChallenge> *const)challenge_proto,
        &v17);
      std::shared_ptr<GCGChallengeRoundNum>::~shared_ptr(&v17);
      break;
    case 0xDu:
      common::tools::perf::make_shared<GCGChallengeReactionWithTargetElementTimes>();
      std::shared_ptr<GCGChallenge>::operator=<GCGChallengeReactionWithTargetElementTimes>(
        (std::shared_ptr<GCGChallenge> *const)challenge_proto,
        &v18);
      std::shared_ptr<GCGChallengeReactionWithTargetElementTimes>::~shared_ptr(&v18);
      break;
    case 0xEu:
      common::tools::perf::make_shared<GCGChallengeSkillTagQTimes>();
      std::shared_ptr<GCGChallenge>::operator=<GCGChallengeSkillTagQTimes>(
        (std::shared_ptr<GCGChallenge> *const)challenge_proto,
        &v19);
      std::shared_ptr<GCGChallengeSkillTagQTimes>::~shared_ptr(&v19);
      break;
    case 0xFu:
      common::tools::perf::make_shared<GCGChallengeSummonTimesEqualOrLargeThanParam>();
      std::shared_ptr<GCGChallenge>::operator=<GCGChallengeSummonTimesEqualOrLargeThanParam>(
        (std::shared_ptr<GCGChallenge> *const)challenge_proto,
        &v20);
      std::shared_ptr<GCGChallengeSummonTimesEqualOrLargeThanParam>::~shared_ptr(&v20);
      break;
    case 0x10u:
      common::tools::perf::make_shared<GCGChallengePlayCardWithTagTimes>();
      std::shared_ptr<GCGChallenge>::operator=<GCGChallengePlayCardWithTagTimes>(
        (std::shared_ptr<GCGChallenge> *const)challenge_proto,
        &v21);
      std::shared_ptr<GCGChallengePlayCardWithTagTimes>::~shared_ptr(&v21);
      break;
    default:
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/card_game/challenge/gcg_challenge.cpp",
        "createGCGChallenge",
        381);
      v2 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
             &v22,
             (const char (*)[26])"invalid GCGChallengeType:");
      val = proto::GCGChallengeData::challenge_type(v1);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
      common::milog::MiLogStream::~MiLogStream(&v22);
      break;
  }
  if ( std::operator!=<GCGChallenge>(0LL, (const std::shared_ptr<GCGChallenge> *)challenge_proto) )
  {
    v4 = std::__shared_ptr_access<GCGChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGChallenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)challenge_proto);
    GCGChallenge::fromProto(v4, v1);
  }
  result._M_ptr = (std::__shared_ptr<GCGChallenge,(__gnu_cxx::_Lock_policy)2>::element_type *)challenge_proto;
  return result;
};
