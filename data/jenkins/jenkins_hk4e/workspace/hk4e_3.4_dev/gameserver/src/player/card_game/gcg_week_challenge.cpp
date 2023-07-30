// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/card_game/gcg_week_challenge.cpp

// Line 28: range 00000000175B5F00-00000000175B6290
int32_t __cdecl GCGWeekChallenge::fromBin(GCGWeekChallenge *const this, const proto::GCGWeekChallengeBin *bin)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  uint32_t refresh_time; // ecx
  char v6; // dl
  __int64 v7; // rdx
  __int64 refresh_gcg_level; // rdx
  char v9; // al
  google::protobuf::RepeatedPtrField<proto::GCGWeekNpcBin>::const_iterator *p_for_end; // rsi
  std::vector<GCGWeekNpcData>::value_type *v11; // rax
  __int64 refreshed; // rdx
  char v13; // al
  uint32_t v14; // ecx
  char v15; // dl
  __int64 v16; // rdx
  int32_t result; // eax
  const proto::GCGWeekChallengeBin *bina; // [rsp+0h] [rbp-C0h]
  google::protobuf::RepeatedPtrField<proto::GCGWeekNpcBin>::const_iterator __for_begin; // [rsp+10h] [rbp-B0h] BYREF
  google::protobuf::RepeatedPtrField<proto::GCGWeekNpcBin>::const_iterator __for_end; // [rsp+18h] [rbp-A8h] BYREF
  const google::protobuf::RepeatedPtrField<proto::GCGWeekNpcBin> *__for_range; // [rsp+20h] [rbp-A0h]
  const proto::GCGWeekNpcBin *npc_bin; // [rsp+28h] [rbp-98h]
  char v23[144]; // [rsp+30h] [rbp-90h] BYREF

  bina = bin;
  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 11 npc_data:33";
  *(_QWORD *)(v2 + 16) = GCGWeekChallenge::fromBin;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  refresh_time = proto::GCGWeekChallengeBin::last_refresh_time(bin);
  v6 = *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000);
  LOBYTE(bin) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store4(&this->last_refresh_time_, bin, v7);
  this->last_refresh_time_ = refresh_time;
  refresh_gcg_level = proto::GCGWeekChallengeBin::last_refresh_gcg_level(bina);
  v9 = *(_BYTE *)(((unsigned __int64)&this->last_refresh_gcg_level_ >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(bin) = v9 != 0;
    __asan_report_store4(&this->last_refresh_gcg_level_, bin, refresh_gcg_level);
  }
  this->last_refresh_gcg_level_ = refresh_gcg_level;
  __for_range = proto::GCGWeekChallengeBin::week_npc_list(bina);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::GCGWeekNpcBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::GCGWeekNpcBin>::end(__for_range).it_;
  while ( 1 )
  {
    p_for_end = &__for_end;
    if ( !google::protobuf::internal::RepeatedPtrIterator<proto::GCGWeekNpcBin const>::operator!=(
            &__for_begin,
            &__for_end) )
      break;
    npc_bin = google::protobuf::internal::RepeatedPtrIterator<proto::GCGWeekNpcBin const>::operator*(&__for_begin);
    *(_DWORD *)(v2 + 32) = 0;
    *(_DWORD *)(v2 + 36) = 0;
    *(_BYTE *)(v2 + 40) = 0;
    *(_DWORD *)(v2 + 44) = 0;
    *(_DWORD *)(v2 + 48) = 0;
    *(_DWORD *)(v2 + 52) = 0;
    *(_DWORD *)(v2 + 32) = proto::GCGWeekNpcBin::npc_id(npc_bin);
    *(_DWORD *)(v2 + 36) = proto::GCGWeekNpcBin::level_id(npc_bin);
    *(_BYTE *)(v2 + 40) = proto::GCGWeekNpcBin::is_unlock(npc_bin);
    *(_DWORD *)(v2 + 44) = proto::GCGWeekNpcBin::finish_time(npc_bin);
    *(_DWORD *)(v2 + 48) = proto::GCGWeekNpcBin::scene_point_id(npc_bin);
    v11 = std::move<GCGWeekNpcData &>((GCGWeekNpcData *)(v2 + 32));
    std::vector<GCGWeekNpcData>::push_back(&this->npc_data_vec_, v11);
    google::protobuf::internal::RepeatedPtrIterator<proto::GCGWeekNpcBin const>::operator++(&__for_begin);
  }
  refreshed = (unsigned int)proto::GCGWeekChallengeBin::gm_refresh_start_week_day(bina);
  v13 = *(_BYTE *)(((unsigned __int64)&this->gm_refresh_start_week_day_ >> 3) + 0x7FFF8000);
  if ( v13 != 0 && v13 <= 3 )
  {
    LOBYTE(p_for_end) = v13 != 0;
    __asan_report_store4(&this->gm_refresh_start_week_day_, p_for_end, refreshed);
  }
  this->gm_refresh_start_week_day_ = refreshed;
  v14 = proto::GCGWeekChallengeBin::gm_refresh_start_week_day_set_time(bina);
  v15 = *(_BYTE *)(((unsigned __int64)&this->gm_refresh_start_week_day_set_time_ >> 3) + 0x7FFF8000);
  LOBYTE(p_for_end) = v15 != 0;
  v16 = (v15 != 0) & (unsigned __int8)((char)((((_BYTE)this + 44) & 7) + 3) >= v15);
  if ( (_BYTE)v16 )
    __asan_report_store4(&this->gm_refresh_start_week_day_set_time_, p_for_end, v16);
  this->gm_refresh_start_week_day_set_time_ = v14;
  result = 0;
  if ( v23 == (char *)v2 )
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

// Line 47: range 00000000175B6292-00000000175B65F2
int32_t __cdecl GCGWeekChallenge::toBin(const GCGWeekChallenge *const this, proto::GCGWeekChallengeBin *bin)
{
  std::vector<GCGWeekNpcData>::const_iterator __for_begin; // [rsp+18h] [rbp-28h] BYREF
  std::vector<GCGWeekNpcData>::const_iterator __for_end; // [rsp+20h] [rbp-20h] BYREF
  const std::vector<GCGWeekNpcData> *__for_range; // [rsp+28h] [rbp-18h]
  const GCGWeekNpcData *npc_data; // [rsp+30h] [rbp-10h]
  proto::GCGWeekNpcBin *npc_bin; // [rsp+38h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->last_refresh_time_);
  }
  proto::GCGWeekChallengeBin::set_last_refresh_time(bin, this->last_refresh_time_);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_refresh_gcg_level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_refresh_gcg_level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_refresh_gcg_level_);
  }
  proto::GCGWeekChallengeBin::set_last_refresh_gcg_level(bin, this->last_refresh_gcg_level_);
  __for_range = &this->npc_data_vec_;
  __for_begin._M_current = std::vector<GCGWeekNpcData>::begin(&this->npc_data_vec_)._M_current;
  __for_end._M_current = std::vector<GCGWeekNpcData>::end(&this->npc_data_vec_)._M_current;
  while ( __gnu_cxx::operator!=<GCGWeekNpcData const*,std::vector<GCGWeekNpcData>>(&__for_begin, &__for_end) )
  {
    npc_data = __gnu_cxx::__normal_iterator<GCGWeekNpcData const*,std::vector<GCGWeekNpcData>>::operator*(&__for_begin);
    npc_bin = proto::GCGWeekChallengeBin::add_week_npc_list(bin);
    if ( *(_BYTE *)(((unsigned __int64)npc_data >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)npc_data & 7) + 3) >= *(_BYTE *)(((unsigned __int64)npc_data >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(npc_data);
    }
    proto::GCGWeekNpcBin::set_npc_id(npc_bin, npc_data->npc_id);
    if ( *(_BYTE *)(((unsigned __int64)&npc_data->level_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)npc_data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&npc_data->level_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&npc_data->level_id);
    }
    proto::GCGWeekNpcBin::set_level_id(npc_bin, npc_data->level_id);
    if ( *(_BYTE *)(((unsigned __int64)&npc_data->is_unlock >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)npc_data + 8) & 7) >= *(_BYTE *)(((unsigned __int64)&npc_data->is_unlock >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&npc_data->is_unlock);
    }
    proto::GCGWeekNpcBin::set_is_unlock(npc_bin, npc_data->is_unlock);
    if ( *(_BYTE *)(((unsigned __int64)&npc_data->finish_time >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)npc_data + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&npc_data->finish_time >> 3)
                                                              + 0x7FFF8000) )
    {
      __asan_report_load4(&npc_data->finish_time);
    }
    proto::GCGWeekNpcBin::set_finish_time(npc_bin, npc_data->finish_time);
    if ( *(_BYTE *)(((unsigned __int64)&npc_data->scene_point_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)npc_data + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&npc_data->scene_point_id >> 3)
                                                              + 0x7FFF8000) )
    {
      __asan_report_load4(&npc_data->scene_point_id);
    }
    proto::GCGWeekNpcBin::set_scene_point_id(npc_bin, npc_data->scene_point_id);
    __gnu_cxx::__normal_iterator<GCGWeekNpcData const*,std::vector<GCGWeekNpcData>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->gm_refresh_start_week_day_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gm_refresh_start_week_day_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->gm_refresh_start_week_day_);
  }
  proto::GCGWeekChallengeBin::set_gm_refresh_start_week_day(bin, this->gm_refresh_start_week_day_);
  if ( *(_BYTE *)(((unsigned __int64)&this->gm_refresh_start_week_day_set_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gm_refresh_start_week_day_set_time_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->gm_refresh_start_week_day_set_time_);
  }
  proto::GCGWeekChallengeBin::set_gm_refresh_start_week_day_set_time(bin, this->gm_refresh_start_week_day_set_time_);
  return 0;
};

// Line 65: range 00000000175B65F4-00000000175B6749
void __cdecl GCGWeekChallenge::onLogin(GCGWeekChallenge *const this)
{
  PlayerBasicComp *BasicComp; // rax
  common::milog::MiLogStream *v2; // rbx
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v4; // [rsp+20h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  BasicComp = Player::getBasicComp(this->player_);
  if ( !PlayerBasicComp::isStateOpen(BasicComp, 0xCECu) )
  {
    common::milog::MiLogStream::create(
      &v4,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/card_game/gcg_week_challenge.cpp",
      "onLogin",
      68);
    v2 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
           &v4,
           (const char (*)[45])"OPEN_STATE_GCG_WEEK_CHALLENGE not open, uid:");
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
    common::milog::MiLogStream::~MiLogStream(&v4);
  }
  else
  {
    if ( GCGWeekChallenge::isNeedRefresh(this) )
      GCGWeekChallenge::refreshNpcInfo(this);
    GCGWeekChallenge::tryUnlockNpc(this, 0);
    GCGWeekChallenge::updateNpcQuestSet(this);
    GCGWeekChallenge::notifyChallengeInfo(this, 0);
  }
};

// Line 82: range 00000000175B674A-00000000175B6882
void __cdecl GCGWeekChallenge::onDailyRefresh(GCGWeekChallenge *const this)
{
  PlayerBasicComp *BasicComp; // rax
  common::milog::MiLogStream *v2; // rbx
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v4; // [rsp+20h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  BasicComp = Player::getBasicComp(this->player_);
  if ( !PlayerBasicComp::isStateOpen(BasicComp, 0xCECu) )
  {
    common::milog::MiLogStream::create(
      &v4,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/card_game/gcg_week_challenge.cpp",
      "onDailyRefresh",
      85);
    v2 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
           &v4,
           (const char (*)[45])"OPEN_STATE_GCG_WEEK_CHALLENGE not open, uid:");
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
    common::milog::MiLogStream::~MiLogStream(&v4);
  }
  else
  {
    if ( GCGWeekChallenge::isNeedRefresh(this) )
      GCGWeekChallenge::refreshNpcInfo(this);
    GCGWeekChallenge::tryUnlockNpc(this, 1);
  }
};

// Line 97: range 00000000175B6884-00000000175B6F8F
void __cdecl GCGWeekChallenge::onLevelUp(GCGWeekChallenge *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  PlayerBasicComp *BasicComp; // rax
  common::milog::MiLogStream *v5; // r13
  PlayerGCGComp *GCGComp; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r13
  __int64 last_refresh_gcg_level; // rsi
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  uint32_t gcg_level; // ecx
  uint32_t v14; // ecx
  char v15; // al
  GCGTavernSceneBuilder *TavernSceneBuilder; // rax
  unsigned int val; // [rsp+14h] [rbp-BCh] BYREF
  uint32_t refresh_days; // [rsp+18h] [rbp-B8h]
  uint32_t total_npc_count; // [rsp+1Ch] [rbp-B4h]
  const GCGPlayingExcelConfigMgr *gcg_playing_config_mgr; // [rsp+20h] [rbp-B0h]
  const data::GCGWeekRefreshExcelConfig *refresh_config_ptr; // [rsp+28h] [rbp-A8h]
  const data::GCGWeekRefreshExcelConfig *last_refresh_config_ptr; // [rsp+30h] [rbp-A0h]
  PlayerGCGComp *gcg_comp; // [rsp+38h] [rbp-98h]
  std::shared_ptr<Config> v24; // [rsp+40h] [rbp-90h] BYREF
  common::milog::MiLogStream v25; // [rsp+50h] [rbp-80h] BYREF
  char v26[96]; // [rsp+70h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 13 gcg_level:105";
  *(_QWORD *)(v1 + 16) = GCGWeekChallenge::onLevelUp;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  BasicComp = Player::getBasicComp(this->player_);
  if ( !PlayerBasicComp::isStateOpen(BasicComp, 0xCECu) )
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/card_game/gcg_week_challenge.cpp",
      "onLevelUp",
      101);
    v5 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
           &v25,
           (const char (*)[45])"OPEN_STATE_GCG_WEEK_CHALLENGE not open, uid:");
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v25);
    goto LABEL_38;
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  GCGComp = Player::getGCGComp(this->player_);
  *(_DWORD *)(v1 + 32) = PlayerGCGComp::getLevel(GCGComp);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v24);
  gcg_playing_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v24)->design_config.txt_config_mgr.gcg_playing_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v24);
  refresh_config_ptr = GCGPlayingExcelConfigMgr::getWeekRefreshExcelConfig(gcg_playing_config_mgr, *(_DWORD *)(v1 + 32));
  if ( !refresh_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/card_game/gcg_week_challenge.cpp",
      "onLevelUp",
      110);
    v7 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
           &v25,
           (const char (*)[55])"[GCG_WEEK] getWeekRefreshExcelConfig fails, gcg_level:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v1 + 32));
    v9 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v8, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
LABEL_15:
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
    common::milog::MiLogStream::~MiLogStream(&v25);
    goto LABEL_38;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->last_refresh_gcg_level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_refresh_gcg_level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_refresh_gcg_level_);
  }
  last_refresh_gcg_level = this->last_refresh_gcg_level_;
  last_refresh_config_ptr = GCGPlayingExcelConfigMgr::getWeekRefreshExcelConfig(
                              gcg_playing_config_mgr,
                              last_refresh_gcg_level);
  if ( !last_refresh_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/card_game/gcg_week_challenge.cpp",
      "onLevelUp",
      116);
    v11 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
            &v25,
            (const char (*)[55])"[GCG_WEEK] getWeekRefreshExcelConfig fails, gcg_level:");
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &this->last_refresh_gcg_level_);
    v9 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v12, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    goto LABEL_15;
  }
  if ( *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->gcg_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->gcg_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&refresh_config_ptr->gcg_level);
  }
  gcg_level = refresh_config_ptr->gcg_level;
  if ( *(_BYTE *)(((unsigned __int64)&last_refresh_config_ptr->gcg_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&last_refresh_config_ptr->gcg_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&last_refresh_config_ptr->gcg_level);
  }
  if ( gcg_level != last_refresh_config_ptr->gcg_level )
  {
    v14 = *(_DWORD *)(v1 + 32);
    v15 = *(_BYTE *)(((unsigned __int64)&this->last_refresh_gcg_level_ >> 3) + 0x7FFF8000);
    if ( v15 != 0 && v15 <= 3 )
    {
      LOBYTE(last_refresh_gcg_level) = v15 != 0;
      __asan_report_store4(&this->last_refresh_gcg_level_, last_refresh_gcg_level, &this->last_refresh_gcg_level_);
    }
    this->last_refresh_gcg_level_ = v14;
    if ( *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->refresh_days >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)refresh_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->refresh_days >> 3)
                                                                        + 0x7FFF8000) )
    {
      __asan_report_load4(&refresh_config_ptr->refresh_days);
    }
    refresh_days = GCGWeekChallenge::getRefreshDays(this, refresh_config_ptr->refresh_days);
    if ( *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->daily_refresh_count >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->daily_refresh_count >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&refresh_config_ptr->daily_refresh_count);
    }
    total_npc_count = refresh_days * refresh_config_ptr->daily_refresh_count;
    if ( total_npc_count > std::vector<GCGWeekNpcData>::size(&this->npc_data_vec_) )
    {
      GCGWeekChallenge::appendNpc(this);
      GCGWeekChallenge::tryUnlockNpc(this, 0);
      GCGWeekChallenge::updateNpcQuestSet(this);
      GCGWeekChallenge::notifyChallengeInfo(this, 1);
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      gcg_comp = Player::getGCGComp(this->player_);
      TavernSceneBuilder = PlayerGCGComp::getTavernSceneBuilder(gcg_comp);
      GCGTavernSceneBuilder::broadNpcInfo(TavernSceneBuilder);
    }
    else
    {
      GCGWeekChallenge::tryUnlockNpc(this, 1);
    }
  }
LABEL_38:
  if ( v26 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 145: range 00000000175B6F90-00000000175B7076
bool __cdecl GCGWeekChallenge::isNeedRefresh(const GCGWeekChallenge *const this)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rax
  uint32_t time_offset; // [rsp+18h] [rbp-18h]
  uint32_t now; // [rsp+1Ch] [rbp-14h]
  std::shared_ptr<Config> v6; // [rsp+20h] [rbp-10h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v6);
  v1 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v6);
  time_offset = ConstValueExcelConfigMgr::getTimeOffsetSec(&v1->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v6);
  now = common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->last_refresh_time_);
  }
  return !this->last_refresh_time_ || !common::tools::TimeUtils::isSameWeek(this->last_refresh_time_, now, time_offset);
};

// Line 156: range 00000000175B7078-00000000175B74DD
void __cdecl GCGWeekChallenge::notifyChallengeInfo(const GCGWeekChallenge *const this, bool is_notify_npc_change)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  uint32_t now; // [rsp+18h] [rbp-E8h]
  uint32_t time_offset; // [rsp+1Ch] [rbp-E4h]
  uint32_t next_week_time; // [rsp+20h] [rbp-E0h]
  std::vector<GCGWeekNpcData>::const_iterator __for_begin; // [rsp+28h] [rbp-D8h] BYREF
  std::vector<GCGWeekNpcData>::const_iterator __for_end; // [rsp+30h] [rbp-D0h] BYREF
  const std::vector<GCGWeekNpcData> *__for_range; // [rsp+38h] [rbp-C8h]
  const GCGWeekNpcData *npc_data; // [rsp+40h] [rbp-C0h]
  proto::GCGWeekChallengeInfo *challenge_info; // [rsp+48h] [rbp-B8h]
  std::shared_ptr<Config> v14; // [rsp+50h] [rbp-B0h] BYREF
  char v15[160]; // [rsp+60h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 56 10 notify:157";
  *(_QWORD *)(v2 + 16) = GCGWeekChallenge::notifyChallengeInfo;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  proto::GCGWeekChallengeInfoNotify::GCGWeekChallengeInfoNotify((proto::GCGWeekChallengeInfoNotify *const)(v2 + 32));
  __for_range = &this->npc_data_vec_;
  __for_begin._M_current = std::vector<GCGWeekNpcData>::begin(&this->npc_data_vec_)._M_current;
  __for_end._M_current = std::vector<GCGWeekNpcData>::end(&this->npc_data_vec_)._M_current;
  while ( __gnu_cxx::operator!=<GCGWeekNpcData const*,std::vector<GCGWeekNpcData>>(&__for_begin, &__for_end) )
  {
    npc_data = __gnu_cxx::__normal_iterator<GCGWeekNpcData const*,std::vector<GCGWeekNpcData>>::operator*(&__for_begin);
    challenge_info = proto::GCGWeekChallengeInfoNotify::add_challenge_info_list((proto::GCGWeekChallengeInfoNotify *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)npc_data >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)npc_data & 7) + 3) >= *(_BYTE *)(((unsigned __int64)npc_data >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(npc_data);
    }
    proto::GCGWeekChallengeInfo::set_npc_id(challenge_info, npc_data->npc_id);
    if ( *(_BYTE *)(((unsigned __int64)&npc_data->is_unlock >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)npc_data + 8) & 7) >= *(_BYTE *)(((unsigned __int64)&npc_data->is_unlock >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&npc_data->is_unlock);
    }
    if ( !npc_data->is_unlock
      && *(_BYTE *)(((unsigned __int64)&npc_data->unlock_time >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)npc_data + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&npc_data->unlock_time >> 3)
                                                              + 0x7FFF8000) )
    {
      __asan_report_load4(&npc_data->unlock_time);
    }
    if ( *(_BYTE *)(((unsigned __int64)&npc_data->unlock_time >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)npc_data + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&npc_data->unlock_time >> 3)
                                                              + 0x7FFF8000) )
    {
      __asan_report_load4(&npc_data->unlock_time);
    }
    proto::GCGWeekChallengeInfo::set_unlock_time(challenge_info, npc_data->unlock_time);
    if ( *(_BYTE *)(((unsigned __int64)&npc_data->finish_time >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)npc_data + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&npc_data->finish_time >> 3)
                                                              + 0x7FFF8000) )
    {
      __asan_report_load4(&npc_data->finish_time);
    }
    proto::GCGWeekChallengeInfo::set_is_finished(challenge_info, npc_data->finish_time != 0);
    __gnu_cxx::__normal_iterator<GCGWeekNpcData const*,std::vector<GCGWeekNpcData>>::operator++(&__for_begin);
  }
  now = common::tools::TimeUtils::getNow();
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v14);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14);
  time_offset = ConstValueExcelConfigMgr::getTimeOffsetSec(&v5->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v14);
  next_week_time = common::tools::TimeUtils::getWeekTime(now, time_offset) + 604800;
  proto::GCGWeekChallengeInfoNotify::set_next_refresh_time(
    (proto::GCGWeekChallengeInfoNotify *const)(v2 + 32),
    next_week_time);
  proto::GCGWeekChallengeInfoNotify::set_is_notify_npc_change(
    (proto::GCGWeekChallengeInfoNotify *const)(v2 + 32),
    is_notify_npc_change);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 32));
  proto::GCGWeekChallengeInfoNotify::~GCGWeekChallengeInfoNotify((proto::GCGWeekChallengeInfoNotify *const)(v2 + 32));
  if ( v15 == (char *)v2 )
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
};

// Line 176: range 00000000175B74DE-00000000175B7F84
__int64 __fastcall GCGWeekChallenge::startWeekLevel(
        GCGWeekChallenge *const this,
        uint32_t npc_id,
        uint32_t level_id,
        char is_restart)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  PlayerBasicComp *BasicComp; // rax
  common::milog::MiLogStream *v8; // rbx
  unsigned int v9; // r14d
  PlayerBasicComp *v10; // rax
  GCGWeekNpcData *M_current; // r14
  std::vector<GCGWeekNpcData>::iterator v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rbx
  __gnu_cxx::__normal_iterator<GCGWeekNpcData*,std::vector<GCGWeekNpcData> >::pointer v16; // rdx
  uint32_t *p_level_id; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r14
  __gnu_cxx::__normal_iterator<GCGWeekNpcData*,std::vector<GCGWeekNpcData> >::pointer v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rbx
  __gnu_cxx::__normal_iterator<GCGWeekNpcData*,std::vector<GCGWeekNpcData> >::pointer v26; // rdx
  bool *p_is_unlock; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // r14
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // r14
  __gnu_cxx::__normal_iterator<GCGWeekNpcData*,std::vector<GCGWeekNpcData> >::pointer v34; // rax
  __int64 result; // rax
  unsigned int val; // [rsp+2Ch] [rbp-164h] BYREF
  __gnu_cxx::__normal_iterator<GCGWeekNpcData*,std::vector<GCGWeekNpcData> > __rhs; // [rsp+30h] [rbp-160h] BYREF
  PlayerGCGComp *gcg_comp; // [rsp+38h] [rbp-158h]
  common::milog::MiLogStream v41; // [rsp+40h] [rbp-150h] BYREF
  common::milog::MiLogStream v42; // [rsp+60h] [rbp-130h] BYREF
  char v43[272]; // [rsp+80h] [rbp-110h] BYREF

  v4 = (unsigned __int64)v43;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(224LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "6 48 4 11 retcode:213 64 4 10 npc_id:175 80 4 12 level_id:175 96 8 8 iter:189 128 12 10 option:2"
                        "09 160 24 13 param_vec:219";
  *(_QWORD *)(v4 + 16) = GCGWeekChallenge::startWeekLevel;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -234556924;
  v6[536862723] = -218959360;
  v6[536862724] = -219020288;
  v6[536862725] = -218103808;
  v6[536862726] = -202116109;
  *(_DWORD *)(v4 + 64) = npc_id;
  *(_DWORD *)(v4 + 80) = level_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  BasicComp = Player::getBasicComp(this->player_);
  if ( !PlayerBasicComp::isStateOpen(BasicComp, 0xCEDu) )
  {
    common::milog::MiLogStream::create(
      &v42,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/card_game/gcg_week_challenge.cpp",
      "startWeekLevel",
      180);
    v8 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
           &v42,
           (const char (*)[51])"OPEN_STATE_GCG_TAVERN_SCENE_BUILDER not open, uid:");
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
LABEL_9:
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream(&v42);
    v9 = 141;
    goto LABEL_39;
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v10 = Player::getBasicComp(this->player_);
  if ( !PlayerBasicComp::isStateOpen(v10, 0xCECu) )
  {
    common::milog::MiLogStream::create(
      &v42,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/card_game/gcg_week_challenge.cpp",
      "startWeekLevel",
      185);
    v8 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
           &v42,
           (const char (*)[45])"OPEN_STATE_GCG_WEEK_CHALLENGE not open, uid:");
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    goto LABEL_9;
  }
  M_current = std::vector<GCGWeekNpcData>::end(&this->npc_data_vec_)._M_current;
  v12._M_current = std::vector<GCGWeekNpcData>::begin(&this->npc_data_vec_)._M_current;
  *(__gnu_cxx::__normal_iterator<GCGWeekNpcData*,std::vector<GCGWeekNpcData> > *)(v4 + 96) = std::find<__gnu_cxx::__normal_iterator<GCGWeekNpcData *,std::vector<GCGWeekNpcData>>,unsigned int>(
                                                                                               v12,
                                                                                               (__gnu_cxx::__normal_iterator<GCGWeekNpcData*,std::vector<GCGWeekNpcData> >)M_current,
                                                                                               (const unsigned int *)(v4 + 64));
  __rhs._M_current = std::vector<GCGWeekNpcData>::end(&this->npc_data_vec_)._M_current;
  if ( __gnu_cxx::operator==<GCGWeekNpcData *,std::vector<GCGWeekNpcData>>(
         (const __gnu_cxx::__normal_iterator<GCGWeekNpcData*,std::vector<GCGWeekNpcData> > *)(v4 + 96),
         &__rhs) )
  {
    common::milog::MiLogStream::create(
      &v42,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/card_game/gcg_week_challenge.cpp",
      "startWeekLevel",
      193);
    v13 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
            &v42,
            (const char (*)[32])"[GCG_WEEK] invalid week npc_id:");
    v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v4 + 64));
    v15 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v14, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
    common::milog::MiLogStream::~MiLogStream(&v42);
    v9 = 12123;
    goto LABEL_39;
  }
  v16 = __gnu_cxx::__normal_iterator<GCGWeekNpcData *,std::vector<GCGWeekNpcData>>::operator->((const __gnu_cxx::__normal_iterator<GCGWeekNpcData*,std::vector<GCGWeekNpcData> > *const)(v4 + 96));
  p_level_id = &v16->level_id;
  if ( *(_BYTE *)(((unsigned __int64)p_level_id >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)p_level_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_level_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(p_level_id);
  }
  if ( v16->level_id != *(_DWORD *)(v4 + 80) )
  {
    common::milog::MiLogStream::create(
      &v42,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/card_game/gcg_week_challenge.cpp",
      "startWeekLevel",
      198);
    v18 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
            &v42,
            (const char (*)[24])"[GCG_WEEK] week npc_id:");
    v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v4 + 64));
    v20 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v19, (const char (*)[18])" config level_id:");
    v21 = __gnu_cxx::__normal_iterator<GCGWeekNpcData *,std::vector<GCGWeekNpcData>>::operator->((const __gnu_cxx::__normal_iterator<GCGWeekNpcData*,std::vector<GCGWeekNpcData> > *const)(v4 + 96));
    v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &v21->level_id);
    v23 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v22, (const char (*)[15])" req level_id:");
    v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, (const unsigned int *)(v4 + 80));
    v25 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v24, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
LABEL_25:
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &val);
    common::milog::MiLogStream::~MiLogStream(&v42);
    v9 = -1;
    goto LABEL_39;
  }
  v26 = __gnu_cxx::__normal_iterator<GCGWeekNpcData *,std::vector<GCGWeekNpcData>>::operator->((const __gnu_cxx::__normal_iterator<GCGWeekNpcData*,std::vector<GCGWeekNpcData> > *const)(v4 + 96));
  p_is_unlock = &v26->is_unlock;
  if ( *(_BYTE *)(((unsigned __int64)p_is_unlock >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)p_is_unlock & 7) >= *(_BYTE *)(((unsigned __int64)p_is_unlock >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(p_is_unlock);
  }
  if ( !v26->is_unlock )
  {
    common::milog::MiLogStream::create(
      &v42,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/card_game/gcg_week_challenge.cpp",
      "startWeekLevel",
      204);
    v28 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
            &v42,
            (const char (*)[24])"[GCG_WEEK] week npc_id:");
    v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, (const unsigned int *)(v4 + 64));
    v25 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v29, (const char (*)[18])" not unlock, uid:");
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    goto LABEL_25;
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  gcg_comp = Player::getGCGComp(this->player_);
  *(_QWORD *)(v4 + 128) = 0LL;
  *(_DWORD *)(v4 + 136) = 0;
  *(_DWORD *)(v4 + 128) = *(_DWORD *)(v4 + 80);
  *(_BYTE *)(v4 + 136) = is_restart;
  *(_BYTE *)(v4 + 135) = 1;
  *(_DWORD *)(v4 + 48) = PlayerGCGComp::checkCanEnterGame(gcg_comp, (const GCGEnterCheckOption *)(v4 + 128));
  if ( *(_DWORD *)(v4 + 48) )
  {
    common::milog::MiLogStream::create(
      &v41,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/card_game/gcg_week_challenge.cpp",
      "startWeekLevel",
      216);
    v30 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
            &v41,
            (const char (*)[37])"[GCG_WEEK] checkCanEnter fail. ret: ");
    v31 = common::milog::MiLogStream::operator<<<int,(int *)0>(v30, (const int *)(v4 + 48));
    GCGEnterCheckOption::getDesc[abi:cxx11]((std::string *)&v42, (GCGEnterCheckOption *const)(v4 + 128));
    v32 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v31, (const std::string *)&v42);
    v33 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v32, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, &val);
    std::string::~string(&v42);
    common::milog::MiLogStream::~MiLogStream(&v41);
    v9 = *(_DWORD *)(v4 + 48);
  }
  else
  {
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v4 + 160));
    std::vector<unsigned int>::push_back(
      (std::vector<unsigned int> *const)(v4 + 160),
      (const std::vector<unsigned int>::value_type *)(v4 + 64));
    std::vector<unsigned int>::push_back((std::vector<unsigned int> *const)(v4 + 160), &this->last_refresh_time_);
    v34 = __gnu_cxx::__normal_iterator<GCGWeekNpcData *,std::vector<GCGWeekNpcData>>::operator->((const __gnu_cxx::__normal_iterator<GCGWeekNpcData*,std::vector<GCGWeekNpcData> > *const)(v4 + 96));
    std::vector<unsigned int>::push_back((std::vector<unsigned int> *const)(v4 + 160), &v34->finish_time);
    PlayerGCGComp::startSingleGame(
      gcg_comp,
      *(_DWORD *)(v4 + 80),
      GCG_GAME_WEEK_CHALLENGE,
      (const std::vector<unsigned int> *)(v4 + 160));
    v9 = 0;
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v4 + 160));
  }
LABEL_39:
  result = v9;
  if ( v43 == (char *)v4 )
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
  return result;
};

// Line 229: range 00000000175B7F86-00000000175B8C4B
void __fastcall GCGWeekChallenge::onSettle(
        GCGWeekChallenge *const this,
        uint32_t level_id,
        bool is_win,
        uint32_t npc_id,
        uint32_t npc_refresh_time,
        uint32_t npc_finish_time,
        const std::map<unsigned int,unsigned int> *challenge_progress_map,
        proto::GCGSettleNotify *notify)
{
  unsigned __int64 v8; // r12
  __int64 v9; // rax
  _DWORD *v10; // r13
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // r14
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // r14
  PlayerGCGComp *GCGComp; // rax
  PlayerEventComp *EventComp; // r14
  GCGWeekNpcData *M_current; // r14
  std::vector<GCGWeekNpcData>::iterator v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rbx
  __gnu_cxx::__normal_iterator<GCGWeekNpcData*,std::vector<GCGWeekNpcData> >::pointer v34; // rdx
  uint32_t *p_level_id; // rax
  __gnu_cxx::__normal_iterator<GCGWeekNpcData*,std::vector<GCGWeekNpcData> >::pointer v36; // rdx
  bool *p_is_unlock; // rax
  char v38; // al
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // r14
  __gnu_cxx::__normal_iterator<GCGWeekNpcData*,std::vector<GCGWeekNpcData> >::pointer v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // r14
  __gnu_cxx::__normal_iterator<GCGWeekNpcData*,std::vector<GCGWeekNpcData> >::pointer v47; // rdx
  bool *v48; // rax
  common::milog::MiLogStream *v49; // rax
  __gnu_cxx::__normal_iterator<GCGWeekNpcData*,std::vector<GCGWeekNpcData> >::pointer v50; // rdx
  uint32_t *p_finish_time; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // r14
  __gnu_cxx::__normal_iterator<GCGWeekNpcData*,std::vector<GCGWeekNpcData> >::pointer v55; // rax
  common::milog::MiLogStream *v56; // rax
  PlayerGCGComp *v57; // rax
  __int64 v58; // rsi
  uint32_t Now; // r14d
  __gnu_cxx::__normal_iterator<GCGWeekNpcData*,std::vector<GCGWeekNpcData> >::pointer v60; // rdx
  char v61; // cl
  PlayerEventComp *v62; // r14
  uint32_t v63; // eax
  unsigned int val; // [rsp+24h] [rbp-10Ch] BYREF
  __gnu_cxx::__normal_iterator<GCGWeekNpcData*,std::vector<GCGWeekNpcData> > __rhs; // [rsp+28h] [rbp-108h] BYREF
  GCGLevelChallenge *level_challenge; // [rsp+30h] [rbp-100h]
  GCGLevelChallenge *level_challenge_0; // [rsp+38h] [rbp-F8h]
  std::shared_ptr<GCGFinishWeekChallengeEvent> __r; // [rsp+40h] [rbp-F0h] BYREF
  std::shared_ptr<BaseEvent> p_event_ptr; // [rsp+50h] [rbp-E0h] BYREF
  common::milog::MiLogStream v74; // [rsp+60h] [rbp-D0h] BYREF
  char v75[176]; // [rsp+80h] [rbp-B0h] BYREF

  v8 = (unsigned __int64)v75;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_1(128LL);
    if ( v9 )
      v8 = v9;
  }
  *(_QWORD *)v8 = 1102416563LL;
  *(_QWORD *)(v8 + 8) = "5 32 4 12 level_id:227 48 4 10 npc_id:227 64 4 20 npc_refresh_time:227 80 4 19 npc_finish_time:2"
                        "27 96 8 8 iter:256";
  *(_QWORD *)(v8 + 16) = GCGWeekChallenge::onSettle;
  v10 = (_DWORD *)(v8 >> 3);
  v10[536862720] = -235802127;
  v10[536862721] = -234556924;
  v10[536862722] = -234556924;
  v10[536862723] = -202116352;
  *(_DWORD *)(v8 + 32) = level_id;
  *(_DWORD *)(v8 + 48) = npc_id;
  *(_DWORD *)(v8 + 64) = npc_refresh_time;
  *(_DWORD *)(v8 + 80) = npc_finish_time;
  common::milog::MiLogStream::create(
    &v74,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/card_game/gcg_week_challenge.cpp",
    "onSettle",
    230);
  v11 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
          &v74,
          (const char (*)[31])"[GCG_WEEK] onSettle, level_id:");
  v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v8 + 32));
  v13 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v12, (const char (*)[9])" is_win:");
  v14 = common::milog::MiLogStream::operator<<(v13, is_win);
  v15 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v14, (const char (*)[9])" npc_id:");
  v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v8 + 48));
  v17 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v16, (const char (*)[19])" npc_refresh_time:");
  v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v8 + 64));
  v19 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v18, (const char (*)[6])" uid:");
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &val);
  common::milog::MiLogStream::~MiLogStream(&v74);
  if ( is_win )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3)
                                                         + 0x7FFF8000) )
    {
      __asan_report_load4(&this->last_refresh_time_);
    }
    if ( this->last_refresh_time_ != *(_DWORD *)(v8 + 64) )
    {
      common::milog::MiLogStream::create(
        &v74,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/card_game/gcg_week_challenge.cpp",
        "onSettle",
        238);
      v20 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
              &v74,
              (const char (*)[39])"[GCG_WEEK] onSettle, npc_refresh_time:");
      v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v8 + 64));
      v22 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              v21,
              (const char (*)[21])" last_refresh_time_:");
      v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &this->last_refresh_time_);
      v24 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              v23,
              (const char (*)[18])" npc_finish_time:");
      v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)(v8 + 80));
      v26 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v25, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &val);
      common::milog::MiLogStream::~MiLogStream(&v74);
      if ( !*(_DWORD *)(v8 + 80) )
      {
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        GCGComp = Player::getGCGComp(this->player_);
        level_challenge_0 = PlayerGCGComp::getLevelChallenge(GCGComp);
        GCGLevelChallenge::grantLevelChallengeReward(
          level_challenge_0,
          *(_DWORD *)(v8 + 32),
          challenge_progress_map,
          notify);
        if ( GCGLevelChallenge::isLevelChallengeAllFinished(level_challenge_0, *(_DWORD *)(v8 + 32)) )
        {
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8(this);
          EventComp = Player::getEventComp(this->player_);
          common::tools::perf::make_shared<GCGFinishWeekChallengeEvent,unsigned int &,unsigned int &>(
            (unsigned int *)&__r,
            (unsigned int *)(v8 + 48),
            (unsigned int *)(v8 + 32),
            (unsigned int *)(v8 + 48));
          std::shared_ptr<BaseEvent>::shared_ptr<GCGFinishWeekChallengeEvent,void>(&p_event_ptr, &__r);
          PlayerEventComp::notifyEvent(EventComp, &p_event_ptr);
          std::shared_ptr<BaseEvent>::~shared_ptr(&p_event_ptr);
          std::shared_ptr<GCGFinishWeekChallengeEvent>::~shared_ptr(&__r);
          GCGWeekChallenge::logChallengeFinish(
            this,
            *(_DWORD *)(v8 + 48),
            *(_DWORD *)(v8 + 32),
            0,
            *(_DWORD *)(v8 + 64));
        }
        GCGLevelChallenge::removeLevelData(level_challenge_0, *(_DWORD *)(v8 + 32));
      }
      goto LABEL_52;
    }
    M_current = std::vector<GCGWeekNpcData>::end(&this->npc_data_vec_)._M_current;
    v30._M_current = std::vector<GCGWeekNpcData>::begin(&this->npc_data_vec_)._M_current;
    *(__gnu_cxx::__normal_iterator<GCGWeekNpcData*,std::vector<GCGWeekNpcData> > *)(v8 + 96) = std::find<__gnu_cxx::__normal_iterator<GCGWeekNpcData *,std::vector<GCGWeekNpcData>>,unsigned int>(
                                                                                                 v30,
                                                                                                 (__gnu_cxx::__normal_iterator<GCGWeekNpcData*,std::vector<GCGWeekNpcData> >)M_current,
                                                                                                 (const unsigned int *)(v8 + 48));
    __rhs._M_current = std::vector<GCGWeekNpcData>::end(&this->npc_data_vec_)._M_current;
    if ( __gnu_cxx::operator==<GCGWeekNpcData *,std::vector<GCGWeekNpcData>>(
           (const __gnu_cxx::__normal_iterator<GCGWeekNpcData*,std::vector<GCGWeekNpcData> > *)(v8 + 96),
           &__rhs) )
    {
      common::milog::MiLogStream::create(
        &v74,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/card_game/gcg_week_challenge.cpp",
        "onSettle",
        259);
      v31 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
              &v74,
              (const char (*)[42])"[GCG_WEEK] onSettle, invalid week npc_id:");
      v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, (const unsigned int *)(v8 + 48));
      v33 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v32, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
LABEL_43:
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, &val);
      common::milog::MiLogStream::~MiLogStream(&v74);
      goto LABEL_52;
    }
    v34 = __gnu_cxx::__normal_iterator<GCGWeekNpcData *,std::vector<GCGWeekNpcData>>::operator->((const __gnu_cxx::__normal_iterator<GCGWeekNpcData*,std::vector<GCGWeekNpcData> > *const)(v8 + 96));
    p_level_id = &v34->level_id;
    if ( *(_BYTE *)(((unsigned __int64)p_level_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_level_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_level_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_level_id);
    }
    if ( v34->level_id != *(_DWORD *)(v8 + 32) )
      goto LABEL_30;
    v36 = __gnu_cxx::__normal_iterator<GCGWeekNpcData *,std::vector<GCGWeekNpcData>>::operator->((const __gnu_cxx::__normal_iterator<GCGWeekNpcData*,std::vector<GCGWeekNpcData> > *const)(v8 + 96));
    p_is_unlock = &v36->is_unlock;
    if ( *(_BYTE *)(((unsigned __int64)p_is_unlock >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_unlock & 7) >= *(_BYTE *)(((unsigned __int64)p_is_unlock >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(p_is_unlock);
    }
    if ( v36->is_unlock )
      v38 = 0;
    else
LABEL_30:
      v38 = 1;
    if ( v38 )
    {
      common::milog::MiLogStream::create(
        &v74,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/card_game/gcg_week_challenge.cpp",
        "onSettle",
        264);
      v39 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
              &v74,
              (const char (*)[29])"[GCG_WEEK] onSettle, npc_id:");
      v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v39, (const unsigned int *)(v8 + 48));
      v41 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v40, (const char (*)[11])" level_id:");
      v42 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v41, (const unsigned int *)(v8 + 32));
      v43 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v42, (const char (*)[14])" npc_level_id");
      v44 = __gnu_cxx::__normal_iterator<GCGWeekNpcData *,std::vector<GCGWeekNpcData>>::operator->((const __gnu_cxx::__normal_iterator<GCGWeekNpcData*,std::vector<GCGWeekNpcData> > *const)(v8 + 96));
      v45 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v43, &v44->level_id);
      v46 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v45, (const char (*)[12])" is_unlock:");
      v47 = __gnu_cxx::__normal_iterator<GCGWeekNpcData *,std::vector<GCGWeekNpcData>>::operator->((const __gnu_cxx::__normal_iterator<GCGWeekNpcData*,std::vector<GCGWeekNpcData> > *const)(v8 + 96));
      v48 = &v47->is_unlock;
      if ( *(_BYTE *)(((unsigned __int64)v48 >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)v48 & 7) >= *(_BYTE *)(((unsigned __int64)v48 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(v48);
      }
      v49 = common::milog::MiLogStream::operator<<(v46, v47->is_unlock);
      v33 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v49, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      goto LABEL_43;
    }
    v50 = __gnu_cxx::__normal_iterator<GCGWeekNpcData *,std::vector<GCGWeekNpcData>>::operator->((const __gnu_cxx::__normal_iterator<GCGWeekNpcData*,std::vector<GCGWeekNpcData> > *const)(v8 + 96));
    p_finish_time = &v50->finish_time;
    if ( *(_BYTE *)(((unsigned __int64)p_finish_time >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_finish_time & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_finish_time >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(p_finish_time);
    }
    if ( v50->finish_time )
    {
      common::milog::MiLogStream::create(
        &v74,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/card_game/gcg_week_challenge.cpp",
        "onSettle",
        270);
      v52 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
              &v74,
              (const char (*)[47])"[GCG_WEEK] onSettle, level is finised, npc_id:");
      v53 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v52, (const unsigned int *)(v8 + 48));
      v54 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v53, (const char (*)[14])" finish_time:");
      v55 = __gnu_cxx::__normal_iterator<GCGWeekNpcData *,std::vector<GCGWeekNpcData>>::operator->((const __gnu_cxx::__normal_iterator<GCGWeekNpcData*,std::vector<GCGWeekNpcData> > *const)(v8 + 96));
      v56 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v54, &v55->finish_time);
      v33 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v56, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      goto LABEL_43;
    }
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v57 = Player::getGCGComp(this->player_);
    level_challenge = PlayerGCGComp::getLevelChallenge(v57);
    GCGLevelChallenge::grantLevelChallengeReward(level_challenge, *(_DWORD *)(v8 + 32), challenge_progress_map, notify);
    v58 = *(unsigned int *)(v8 + 32);
    if ( GCGLevelChallenge::isLevelChallengeAllFinished(level_challenge, v58) )
    {
      Now = common::tools::TimeUtils::getNow();
      v60 = __gnu_cxx::__normal_iterator<GCGWeekNpcData *,std::vector<GCGWeekNpcData>>::operator->((const __gnu_cxx::__normal_iterator<GCGWeekNpcData*,std::vector<GCGWeekNpcData> > *const)(v8 + 96));
      v61 = *(_BYTE *)(((unsigned __int64)&v60->finish_time >> 3) + 0x7FFF8000);
      if ( v61 != 0 && (char)((((_BYTE)v60 + 12) & 7) + 3) >= v61 )
      {
        LOBYTE(v58) = v61 != 0;
        __asan_report_store4(&v60->finish_time, v58, v60);
      }
      v60->finish_time = Now;
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      v62 = Player::getEventComp(this->player_);
      common::tools::perf::make_shared<GCGFinishWeekChallengeEvent,unsigned int &,unsigned int &>(
        (unsigned int *)&__r,
        (unsigned int *)(v8 + 48),
        (unsigned int *)(v8 + 32),
        (unsigned int *)(v8 + 48));
      std::shared_ptr<BaseEvent>::shared_ptr<GCGFinishWeekChallengeEvent,void>(&p_event_ptr, &__r);
      PlayerEventComp::notifyEvent(v62, &p_event_ptr);
      std::shared_ptr<BaseEvent>::~shared_ptr(&p_event_ptr);
      std::shared_ptr<GCGFinishWeekChallengeEvent>::~shared_ptr(&__r);
      GCGWeekChallenge::notifyChallengeInfo(this, 0);
      LODWORD(v62) = *(_DWORD *)(v8 + 64);
      v63 = std::vector<GCGWeekNpcData>::size(&this->npc_data_vec_);
      GCGWeekChallenge::logChallengeFinish(this, *(_DWORD *)(v8 + 48), *(_DWORD *)(v8 + 32), v63, (uint32_t)v62);
    }
  }
LABEL_52:
  if ( v75 == (char *)v8 )
  {
    *(_QWORD *)((v8 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v8 = 1172321806LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 286: range 00000000175B8C4C-00000000175B8D03
void __cdecl GCGWeekChallenge::onTavernSceneRefresh(GCGWeekChallenge *const this)
{
  uint32_t *p_scene_point_id; // rax
  __int64 v2; // rdx
  std::vector<GCGWeekNpcData>::iterator __for_begin; // [rsp+10h] [rbp-20h] BYREF
  std::vector<GCGWeekNpcData>::iterator __for_end; // [rsp+18h] [rbp-18h] BYREF
  std::vector<GCGWeekNpcData> *__for_range; // [rsp+20h] [rbp-10h]
  GCGWeekNpcData *npc_data; // [rsp+28h] [rbp-8h]

  __for_range = &this->npc_data_vec_;
  __for_begin._M_current = std::vector<GCGWeekNpcData>::begin(&this->npc_data_vec_)._M_current;
  __for_end._M_current = std::vector<GCGWeekNpcData>::end(&this->npc_data_vec_)._M_current;
  while ( __gnu_cxx::operator!=<GCGWeekNpcData *,std::vector<GCGWeekNpcData>>(&__for_begin, &__for_end) )
  {
    npc_data = __gnu_cxx::__normal_iterator<GCGWeekNpcData *,std::vector<GCGWeekNpcData>>::operator*(&__for_begin);
    p_scene_point_id = &npc_data->scene_point_id;
    v2 = (*(_BYTE *)(((unsigned __int64)p_scene_point_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)(((unsigned __int8)p_scene_point_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_scene_point_id >> 3) + 0x7FFF8000));
    if ( (_BYTE)v2 )
      __asan_report_store4(p_scene_point_id, (((_BYTE)npc_data + 16) & 7u) + 3, v2);
    npc_data->scene_point_id = 0;
    __gnu_cxx::__normal_iterator<GCGWeekNpcData *,std::vector<GCGWeekNpcData>>::operator++(&__for_begin);
  }
};

// Line 295: range 00000000175B8D04-00000000175B8F22
void __cdecl GCGWeekChallenge::fillNpcInfo(const GCGWeekChallenge *const this, proto::GCGTavernNpcInfoNotify *notify)
{
  bool *p_is_unlock; // rax
  std::vector<GCGWeekNpcData>::const_iterator __for_begin; // [rsp+18h] [rbp-28h] BYREF
  std::vector<GCGWeekNpcData>::const_iterator __for_end; // [rsp+20h] [rbp-20h] BYREF
  const std::vector<GCGWeekNpcData> *__for_range; // [rsp+28h] [rbp-18h]
  const GCGWeekNpcData *npc_data; // [rsp+30h] [rbp-10h]
  proto::GCGTavernNpcInfo *npc_info; // [rsp+38h] [rbp-8h]

  __for_range = &this->npc_data_vec_;
  __for_begin._M_current = std::vector<GCGWeekNpcData>::begin(&this->npc_data_vec_)._M_current;
  __for_end._M_current = std::vector<GCGWeekNpcData>::end(&this->npc_data_vec_)._M_current;
  while ( __gnu_cxx::operator!=<GCGWeekNpcData const*,std::vector<GCGWeekNpcData>>(&__for_begin, &__for_end) )
  {
    npc_data = __gnu_cxx::__normal_iterator<GCGWeekNpcData const*,std::vector<GCGWeekNpcData>>::operator*(&__for_begin);
    p_is_unlock = &npc_data->is_unlock;
    if ( *(_BYTE *)(((unsigned __int64)p_is_unlock >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_unlock & 7) >= *(_BYTE *)(((unsigned __int64)p_is_unlock >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(p_is_unlock);
    }
    if ( npc_data->is_unlock )
    {
      if ( *(_BYTE *)(((unsigned __int64)npc_data >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)npc_data & 7) + 3) >= *(_BYTE *)(((unsigned __int64)npc_data >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(npc_data);
      }
      if ( GCGWeekChallenge::isNpcCondQuestAllValid(this, npc_data->npc_id) )
      {
        npc_info = proto::GCGTavernNpcInfoNotify::add_week_npc_list(notify);
        if ( *(_BYTE *)(((unsigned __int64)npc_data >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)npc_data & 7) + 3) >= *(_BYTE *)(((unsigned __int64)npc_data >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(npc_data);
        }
        proto::GCGTavernNpcInfo::set_id(npc_info, npc_data->npc_id);
        if ( *(_BYTE *)(((unsigned __int64)&npc_data->scene_point_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)npc_data + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&npc_data->scene_point_id >> 3)
                                                                  + 0x7FFF8000) )
        {
          __asan_report_load4(&npc_data->scene_point_id);
        }
        proto::GCGTavernNpcInfo::set_scene_point_id(npc_info, npc_data->scene_point_id);
        if ( *(_BYTE *)(((unsigned __int64)&npc_data->level_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)npc_data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&npc_data->level_id >> 3)
                                                                 + 0x7FFF8000) )
        {
          __asan_report_load4(&npc_data->level_id);
        }
        proto::GCGTavernNpcInfo::set_level_id(npc_info, npc_data->level_id);
      }
    }
    __gnu_cxx::__normal_iterator<GCGWeekNpcData const*,std::vector<GCGWeekNpcData>>::operator++(&__for_begin);
  }
};

// Line 316: range 00000000175B8F24-00000000175B9392
int32_t __cdecl GCGWeekChallenge::setNpcScenePoint(
        GCGWeekChallenge *const this,
        const std::unordered_map<unsigned int,unsigned int> *npc_point_map)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  GCGWeekNpcData *M_current; // r14
  std::vector<GCGWeekNpcData>::iterator v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  __int64 v10; // rsi
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type v11; // r14d
  __gnu_cxx::__normal_iterator<GCGWeekNpcData*,std::vector<GCGWeekNpcData> >::pointer v12; // rdx
  char v13; // cl
  common::milog::MiLogStream *v14; // rdx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r13
  int32_t result; // eax
  unsigned int val; // [rsp+14h] [rbp-CCh] BYREF
  std::unordered_map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-C8h] BYREF
  std::unordered_map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-C0h] BYREF
  __gnu_cxx::__normal_iterator<GCGWeekNpcData*,std::vector<GCGWeekNpcData> > __rhs; // [rsp+28h] [rbp-B8h] BYREF
  const std::unordered_map<unsigned int,unsigned int> *__for_range; // [rsp+30h] [rbp-B0h]
  const std::pair<unsigned int const,unsigned int> *v24; // [rsp+38h] [rbp-A8h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *npc_id; // [rsp+40h] [rbp-A0h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *scene_point_id; // [rsp+48h] [rbp-98h]
  common::milog::MiLogStream v27; // [rsp+50h] [rbp-90h] BYREF
  char v28[112]; // [rsp+70h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 8 iter:319";
  *(_QWORD *)(v2 + 16) = GCGWeekChallenge::setNpcScenePoint;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  __for_range = npc_point_map;
  __for_begin._M_cur = std::unordered_map<unsigned int,unsigned int>::begin(npc_point_map)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,unsigned int>::end(npc_point_map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(&__for_begin, &__for_end) )
  {
    v24 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*(&__for_begin);
    npc_id = std::get<0ul,unsigned int const,unsigned int>(v24);
    scene_point_id = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v24);
    M_current = std::vector<GCGWeekNpcData>::end(&this->npc_data_vec_)._M_current;
    v6._M_current = std::vector<GCGWeekNpcData>::begin(&this->npc_data_vec_)._M_current;
    *(__gnu_cxx::__normal_iterator<GCGWeekNpcData*,std::vector<GCGWeekNpcData> > *)(v2 + 32) = std::find<__gnu_cxx::__normal_iterator<GCGWeekNpcData *,std::vector<GCGWeekNpcData>>,unsigned int>(
                                                                                                 v6,
                                                                                                 (__gnu_cxx::__normal_iterator<GCGWeekNpcData*,std::vector<GCGWeekNpcData> >)M_current,
                                                                                                 npc_id);
    __rhs._M_current = std::vector<GCGWeekNpcData>::end(&this->npc_data_vec_)._M_current;
    if ( __gnu_cxx::operator==<GCGWeekNpcData *,std::vector<GCGWeekNpcData>>(
           (const __gnu_cxx::__normal_iterator<GCGWeekNpcData*,std::vector<GCGWeekNpcData> > *)(v2 + 32),
           &__rhs) )
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/card_game/gcg_week_challenge.cpp",
        "setNpcScenePoint",
        322);
      v7 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
             &v27,
             (const char (*)[32])"[GCG_WEEK] invalid week npc_id:");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, npc_id);
      v9 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v8, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
      common::milog::MiLogStream::~MiLogStream(&v27);
    }
    else
    {
      v10 = ((unsigned __int8)scene_point_id & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)scene_point_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)scene_point_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)scene_point_id >> 3)
                                                                         + 0x7FFF8000) )
      {
        __asan_report_load4(scene_point_id);
      }
      v11 = *scene_point_id;
      v12 = __gnu_cxx::__normal_iterator<GCGWeekNpcData *,std::vector<GCGWeekNpcData>>::operator->((const __gnu_cxx::__normal_iterator<GCGWeekNpcData*,std::vector<GCGWeekNpcData> > *const)(v2 + 32));
      v13 = *(_BYTE *)(((unsigned __int64)&v12->scene_point_id >> 3) + 0x7FFF8000);
      if ( v13 != 0 && (char)((((_BYTE)v12 + 16) & 7) + 3) >= v13 )
      {
        LOBYTE(v10) = v13 != 0;
        __asan_report_store4(&v12->scene_point_id, v10, v12);
      }
      v12->scene_point_id = v11;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++(&__for_begin);
  }
  common::milog::MiLogStream::create(
    &v27,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/card_game/gcg_week_challenge.cpp",
    "setNpcScenePoint",
    327);
  v14 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
          &v27,
          (const char (*)[29])"[GCG_WEEK] setNpcScenePoint:");
  v15 = common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(v14, npc_point_map);
  v16 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v15, (const char (*)[6])" uid:");
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &val);
  common::milog::MiLogStream::~MiLogStream(&v27);
  result = 0;
  if ( v28 == (char *)v2 )
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

// Line 332: range 00000000175B9394-00000000175B9499
std::set<unsigned int> *__cdecl GCGWeekChallenge::getAppearNpcSet(
        std::set<unsigned int> *retstr,
        GCGWeekChallenge *const this)
{
  bool *p_is_unlock; // rax
  std::vector<GCGWeekNpcData>::iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::vector<GCGWeekNpcData>::iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  std::vector<GCGWeekNpcData> *__for_range; // [rsp+20h] [rbp-20h]
  const GCGWeekNpcData *npc_data; // [rsp+28h] [rbp-18h]

  std::set<unsigned int>::set(retstr);
  __for_range = &this->npc_data_vec_;
  __for_begin._M_current = std::vector<GCGWeekNpcData>::begin(&this->npc_data_vec_)._M_current;
  __for_end._M_current = std::vector<GCGWeekNpcData>::end(&this->npc_data_vec_)._M_current;
  while ( __gnu_cxx::operator!=<GCGWeekNpcData *,std::vector<GCGWeekNpcData>>(&__for_begin, &__for_end) )
  {
    npc_data = __gnu_cxx::__normal_iterator<GCGWeekNpcData *,std::vector<GCGWeekNpcData>>::operator*(&__for_begin);
    p_is_unlock = &npc_data->is_unlock;
    if ( *(_BYTE *)(((unsigned __int64)p_is_unlock >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_unlock & 7) >= *(_BYTE *)(((unsigned __int64)p_is_unlock >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(p_is_unlock);
    }
    if ( npc_data->is_unlock )
      std::set<unsigned int>::insert(retstr, &npc_data->npc_id);
    __gnu_cxx::__normal_iterator<GCGWeekNpcData *,std::vector<GCGWeekNpcData>>::operator++(&__for_begin);
  }
  return retstr;
};

// Line 345: range 00000000175B949A-00000000175B95A5
std::unordered_set<unsigned int> *__cdecl GCGWeekChallenge::getNpcScenePointSet(
        std::unordered_set<unsigned int> *retstr,
        GCGWeekChallenge *const this)
{
  uint32_t *p_scene_point_id; // rax
  std::vector<GCGWeekNpcData>::iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::vector<GCGWeekNpcData>::iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  std::vector<GCGWeekNpcData> *__for_range; // [rsp+20h] [rbp-20h]
  const GCGWeekNpcData *npc_data; // [rsp+28h] [rbp-18h]

  std::unordered_set<unsigned int>::unordered_set(retstr);
  __for_range = &this->npc_data_vec_;
  __for_begin._M_current = std::vector<GCGWeekNpcData>::begin(&this->npc_data_vec_)._M_current;
  __for_end._M_current = std::vector<GCGWeekNpcData>::end(&this->npc_data_vec_)._M_current;
  while ( __gnu_cxx::operator!=<GCGWeekNpcData *,std::vector<GCGWeekNpcData>>(&__for_begin, &__for_end) )
  {
    npc_data = __gnu_cxx::__normal_iterator<GCGWeekNpcData *,std::vector<GCGWeekNpcData>>::operator*(&__for_begin);
    p_scene_point_id = &npc_data->scene_point_id;
    if ( *(_BYTE *)(((unsigned __int64)p_scene_point_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_scene_point_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_scene_point_id >> 3)
                                                                         + 0x7FFF8000) )
    {
      __asan_report_load4(p_scene_point_id);
    }
    if ( npc_data->scene_point_id )
      std::unordered_set<unsigned int>::insert(retstr, &npc_data->scene_point_id);
    __gnu_cxx::__normal_iterator<GCGWeekNpcData *,std::vector<GCGWeekNpcData>>::operator++(&__for_begin);
  }
  return retstr;
};

// Line 358: range 00000000175B95A6-00000000175B9C87
void __cdecl GCGWeekChallenge::refreshNpcInfo(GCGWeekChallenge *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // r14
  uint32_t *p_finish_time; // rax
  GCGLevelChallenge *LevelChallenge; // rcx
  GCGLevelChallenge *v7; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v8; // rax
  uint32_t *v9; // rdx
  std::vector<GCGWeekNpcData>::value_type *v10; // rax
  uint32_t Now; // edi
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 Level; // rdx
  char v15; // al
  GCGTavernSceneBuilder *TavernSceneBuilder; // rax
  unsigned int val; // [rsp+10h] [rbp-1A0h] BYREF
  uint32_t npc_id; // [rsp+14h] [rbp-19Ch]
  std::vector<GCGWeekNpcData>::iterator __for_begin; // [rsp+18h] [rbp-198h] BYREF
  std::vector<GCGWeekNpcData>::iterator __for_end; // [rsp+20h] [rbp-190h] BYREF
  PlayerGCGComp *gcg_comp; // [rsp+28h] [rbp-188h]
  std::vector<GCGWeekNpcData> *__for_range; // [rsp+30h] [rbp-180h]
  const GCGPlayingExcelConfigMgr *gcg_playing_config_mgr; // [rsp+38h] [rbp-178h]
  std::vector<unsigned int> *__for_range_0; // [rsp+40h] [rbp-170h]
  const GCGWeekNpcData *npc_data; // [rsp+48h] [rbp-168h]
  std::shared_ptr<Config> v27; // [rsp+50h] [rbp-160h] BYREF
  common::milog::MiLogStream v28; // [rsp+60h] [rbp-150h] BYREF
  char v29[304]; // [rsp+80h] [rbp-130h] BYREF

  v1 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(256LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 24 14 npc_id_vec:359 112 24 12 npc_data:383 176 48 23 finish_level_id_set:367";
  *(_QWORD *)(v1 + 16) = GCGWeekChallenge::refreshNpcInfo;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862722] = -218959360;
  v3[536862723] = 62194;
  v3[536862724] = -218959360;
  v3[536862725] = 62194;
  v3[536862727] = -202116109;
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v1 + 48));
  if ( GCGWeekChallenge::getRefreshNpcVec(this, (std::vector<unsigned int> *)(v1 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/card_game/gcg_week_challenge.cpp",
      "refreshNpcInfo",
      362);
    v4 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
           &v28,
           (const char (*)[40])"[GCG_WEEK] getRefreshNpcVec fails, uid:");
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
    common::milog::MiLogStream::~MiLogStream(&v28);
  }
  else
  {
    std::set<unsigned int>::set((std::set<unsigned int> *const)(v1 + 176));
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    gcg_comp = Player::getGCGComp(this->player_);
    __for_range = &this->npc_data_vec_;
    __for_begin._M_current = std::vector<GCGWeekNpcData>::begin(&this->npc_data_vec_)._M_current;
    __for_end._M_current = std::vector<GCGWeekNpcData>::end(&this->npc_data_vec_)._M_current;
    while ( __gnu_cxx::operator!=<GCGWeekNpcData *,std::vector<GCGWeekNpcData>>(&__for_begin, &__for_end) )
    {
      npc_data = __gnu_cxx::__normal_iterator<GCGWeekNpcData *,std::vector<GCGWeekNpcData>>::operator*(&__for_begin);
      p_finish_time = &npc_data->finish_time;
      if ( *(_BYTE *)(((unsigned __int64)p_finish_time >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_finish_time & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_finish_time >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(p_finish_time);
      }
      if ( npc_data->finish_time )
      {
        std::set<unsigned int>::insert((std::set<unsigned int> *const)(v1 + 176), &npc_data->level_id);
        LevelChallenge = PlayerGCGComp::getLevelChallenge(gcg_comp);
        if ( *(_BYTE *)(((unsigned __int64)&npc_data->level_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)npc_data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&npc_data->level_id >> 3)
                                                                 + 0x7FFF8000) )
        {
          __asan_report_load4(&npc_data->level_id);
        }
        GCGLevelChallenge::removeLevelData(LevelChallenge, npc_data->level_id);
      }
      __gnu_cxx::__normal_iterator<GCGWeekNpcData *,std::vector<GCGWeekNpcData>>::operator++(&__for_begin);
    }
    v7 = PlayerGCGComp::getLevelChallenge(gcg_comp);
    GCGLevelChallenge::notifyChallengeDelete(v7, (const std::set<unsigned int> *)(v1 + 176));
    std::vector<GCGWeekNpcData>::clear(&this->npc_data_vec_);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v27);
    gcg_playing_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v27)->design_config.txt_config_mgr.gcg_playing_config_mgr;
    std::shared_ptr<Config>::~shared_ptr(&v27);
    __for_range_0 = (std::vector<unsigned int> *)(v1 + 48);
    __for_begin._M_current = (GCGWeekNpcData *)std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v1 + 48))._M_current;
    __for_end._M_current = (GCGWeekNpcData *)std::vector<unsigned int>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_begin,
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_end) )
    {
      v8 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
      v9 = v8;
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v8);
      }
      npc_id = *v9;
      *(_DWORD *)(v1 + 112) = 0;
      *(_DWORD *)(v1 + 116) = 0;
      *(_BYTE *)(v1 + 120) = 0;
      *(_DWORD *)(v1 + 124) = 0;
      *(_DWORD *)(v1 + 128) = 0;
      *(_DWORD *)(v1 + 132) = 0;
      *(_DWORD *)(v1 + 112) = npc_id;
      v10 = std::move<GCGWeekNpcData &>((GCGWeekNpcData *)(v1 + 112));
      std::vector<GCGWeekNpcData>::push_back(&this->npc_data_vec_, v10);
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
    }
    GCGWeekChallenge::tryUnlockNpc(this, 0);
    Now = common::tools::TimeUtils::getNow();
    v12 = (((_BYTE)this + 4) & 7u) + 3;
    v13 = (*(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000));
    if ( (_BYTE)v13 )
    {
      Now = (_DWORD)this + 260;
      __asan_report_store4(&this->last_refresh_time_, v12, v13);
    }
    this->last_refresh_time_ = Now;
    Level = PlayerGCGComp::getLevel(gcg_comp);
    v15 = *(_BYTE *)(((unsigned __int64)&this->last_refresh_gcg_level_ >> 3) + 0x7FFF8000);
    if ( v15 != 0 && v15 <= 3 )
    {
      LOBYTE(v12) = v15 != 0;
      __asan_report_store4(&this->last_refresh_gcg_level_, v12, Level);
    }
    this->last_refresh_gcg_level_ = Level;
    GCGWeekChallenge::updateNpcQuestSet(this);
    GCGWeekChallenge::notifyChallengeInfo(this, 1);
    TavernSceneBuilder = PlayerGCGComp::getTavernSceneBuilder(gcg_comp);
    GCGTavernSceneBuilder::broadNpcInfo(TavernSceneBuilder);
    std::set<unsigned int>::~set((std::set<unsigned int> *const)(v1 + 176));
  }
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v1 + 48));
  if ( v29 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
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

// Line 397: range 00000000175B9C88-00000000175BA112
__int64 __fastcall GCGWeekChallenge::isNpcCondQuestAllValid(const GCGWeekChallenge *const this, uint32_t npc_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  __int64 result; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v9; // rax
  _DWORD *v10; // rdx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r13
  unsigned int val; // [rsp+1Ch] [rbp-E4h] BYREF
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-E0h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-D8h] BYREF
  const GCGPlayingExcelConfigMgr *gcg_playing_config_mgr; // [rsp+30h] [rbp-D0h]
  const data::GCGWeekLevelExcelConfig *config_ptr; // [rsp+38h] [rbp-C8h]
  PlayerQuestComp *quest_comp; // [rsp+40h] [rbp-C0h]
  const std::vector<unsigned int> *__for_range; // [rsp+48h] [rbp-B8h]
  std::shared_ptr<Config> v23; // [rsp+50h] [rbp-B0h] BYREF
  common::milog::MiLogStream v24; // [rsp+60h] [rbp-A0h] BYREF
  char v25[128]; // [rsp+80h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 quest_id:406 64 4 10 npc_id:396";
  *(_QWORD *)(v2 + 16) = GCGWeekChallenge::isNpcCondQuestAllValid;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  *(_DWORD *)(v2 + 64) = npc_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v23);
  gcg_playing_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v23)->design_config.txt_config_mgr.gcg_playing_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v23);
  config_ptr = data::GCGPlayingExcelConfigMgrBase::findGCGWeekLevelExcelConfig(
                 gcg_playing_config_mgr,
                 *(_DWORD *)(v2 + 64));
  if ( config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    quest_comp = Player::getQuestComp(this->player_);
    __for_range = &config_ptr->cond_quest_list;
    __for_begin._M_current = std::vector<unsigned int>::begin(&config_ptr->cond_quest_list)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(&config_ptr->cond_quest_list)._M_current;
    while ( 1 )
    {
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
      {
        result = 1LL;
        goto LABEL_20;
      }
      v9 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
      v10 = v9;
      if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v9);
      }
      *(_DWORD *)(v2 + 48) = *v10;
      if ( PlayerQuestComp::getQuestState(quest_comp, *(_DWORD *)(v2 + 48)) == QUEST_STATE_UNFINISHED )
        break;
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/card_game/gcg_week_challenge.cpp",
      "isNpcCondQuestAllValid",
      410);
    v11 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
            &v24,
            (const char (*)[39])"[GCG_WEEK] quest unfinished, quest_id:");
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 48));
    v13 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v12, (const char (*)[9])" npc_id:");
    v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 64));
    v15 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v14, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
    common::milog::MiLogStream::~MiLogStream(&v24);
    result = 0LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/card_game/gcg_week_challenge.cpp",
      "isNpcCondQuestAllValid",
      402);
    v5 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
           &v24,
           (const char (*)[54])"[GCG_WEEK] findGCGWeekLevelExcelConfig fails, npc_id:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 64));
    v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v6, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v24);
    result = 0LL;
  }
LABEL_20:
  if ( v25 == (char *)v2 )
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

// Line 418: range 00000000175BA114-00000000175BAA83
int32_t __cdecl GCGWeekChallenge::tryUnlockNpc(GCGWeekChallenge *const this, bool is_notify)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::vector<GCGWeekNpcData>::size_type v5; // r14
  uint32_t v6; // esi
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rdx
  GCGLevelChallenge *LevelChallenge; // rcx
  __int64 v21; // rdx
  uint32_t NpcUnlockTime; // ecx
  char v23; // dl
  __int64 v24; // rsi
  __int64 v25; // rdx
  GCGTavernSceneBuilder *TavernSceneBuilder; // rax
  GCGTavernSceneBuilder *v27; // rax
  int32_t result; // eax
  bool is_change; // [rsp+12h] [rbp-12Eh]
  bool is_notify_npc_change; // [rsp+13h] [rbp-12Dh]
  unsigned int val; // [rsp+14h] [rbp-12Ch] BYREF
  uint32_t npc_index; // [rsp+18h] [rbp-128h]
  uint32_t unclok_npc_count; // [rsp+1Ch] [rbp-124h]
  uint32_t unlock_time; // [rsp+20h] [rbp-120h]
  uint32_t level_id; // [rsp+24h] [rbp-11Ch]
  PlayerGCGComp *gcg_comp; // [rsp+28h] [rbp-118h]
  const GCGPlayingExcelConfigMgr *gcg_playing_config_mgr; // [rsp+30h] [rbp-110h]
  GCGWeekNpcData *npc_data; // [rsp+38h] [rbp-108h]
  std::shared_ptr<Config> v40; // [rsp+40h] [rbp-100h] BYREF
  common::milog::MiLogStream v41; // [rsp+50h] [rbp-F0h] BYREF
  char v42[208]; // [rsp+70h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v42;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 13 gcg_level:423 64 56 14 npc_id_set:421";
  *(_QWORD *)(v2 + 16) = GCGWeekChallenge::tryUnlockNpc;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  is_change = 0;
  is_notify_npc_change = 0;
  std::unordered_set<unsigned int>::unordered_set((std::unordered_set<unsigned int> *const)(v2 + 64));
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  gcg_comp = Player::getGCGComp(this->player_);
  *(_DWORD *)(v2 + 48) = PlayerGCGComp::getLevel(gcg_comp);
  unclok_npc_count = GCGWeekChallenge::getUnlockNpcCount(this);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v40);
  gcg_playing_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v40)->design_config.txt_config_mgr.gcg_playing_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v40);
  for ( npc_index = 0; ; ++npc_index )
  {
    v5 = npc_index;
    if ( v5 >= std::vector<GCGWeekNpcData>::size(&this->npc_data_vec_) )
      break;
    npc_data = std::vector<GCGWeekNpcData>::operator[](&this->npc_data_vec_, npc_index);
    if ( npc_index >= unclok_npc_count )
    {
      if ( *(_BYTE *)(((unsigned __int64)&npc_data->is_unlock >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)npc_data + 8) & 7) >= *(_BYTE *)(((unsigned __int64)&npc_data->is_unlock >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&npc_data->is_unlock);
      }
      if ( npc_data->is_unlock )
      {
        if ( GCGWeekChallenge::getGMRefreshStartWeekDay(this) > 0 )
        {
          v17 = ((_BYTE)npc_data + 8) & 7;
          v18 = (*(_BYTE *)(((unsigned __int64)&npc_data->is_unlock >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v17 >= *(_BYTE *)(((unsigned __int64)&npc_data->is_unlock >> 3) + 0x7FFF8000));
          if ( (_BYTE)v18 )
            __asan_report_store1(&npc_data->is_unlock, v17, v18);
          npc_data->is_unlock = 0;
          v19 = (*(_BYTE *)(((unsigned __int64)&npc_data->scene_point_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)npc_data + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&npc_data->scene_point_id >> 3) + 0x7FFF8000));
          if ( (_BYTE)v19 )
            __asan_report_store4(&npc_data->scene_point_id, (((_BYTE)npc_data + 16) & 7u) + 3, v19);
          npc_data->scene_point_id = 0;
          if ( *(_BYTE *)(((unsigned __int64)&npc_data->finish_time >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)npc_data + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&npc_data->finish_time >> 3)
                                                                    + 0x7FFF8000) )
          {
            __asan_report_load4(&npc_data->finish_time);
          }
          if ( npc_data->finish_time )
          {
            npc_data->finish_time = 0;
            LevelChallenge = PlayerGCGComp::getLevelChallenge(gcg_comp);
            if ( *(_BYTE *)(((unsigned __int64)&npc_data->level_id >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)npc_data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&npc_data->level_id >> 3)
                                                                     + 0x7FFF8000) )
            {
              __asan_report_load4(&npc_data->level_id);
            }
            GCGLevelChallenge::removeLevelData(LevelChallenge, npc_data->level_id);
          }
          v21 = (*(_BYTE *)(((unsigned __int64)&npc_data->level_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)npc_data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&npc_data->level_id >> 3) + 0x7FFF8000));
          if ( (_BYTE)v21 )
            __asan_report_store4(&npc_data->level_id, (((_BYTE)npc_data + 4) & 7u) + 3, v21);
          npc_data->level_id = 0;
          v24 = npc_index;
          NpcUnlockTime = GCGWeekChallenge::getNpcUnlockTime(this, npc_index);
          v23 = *(_BYTE *)(((unsigned __int64)&npc_data->unlock_time >> 3) + 0x7FFF8000);
          LOBYTE(v24) = v23 != 0;
          v25 = (v23 != 0) & (unsigned __int8)((char)((((_BYTE)npc_data + 20) & 7) + 3) >= v23);
          if ( (_BYTE)v25 )
            __asan_report_store4(&npc_data->unlock_time, v24, v25);
          npc_data->unlock_time = NpcUnlockTime;
          is_change = 1;
          is_notify_npc_change = 1;
        }
      }
      else
      {
        unlock_time = GCGWeekChallenge::getNpcUnlockTime(this, npc_index);
        if ( *(_BYTE *)(((unsigned __int64)&npc_data->unlock_time >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)npc_data + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&npc_data->unlock_time >> 3)
                                                                  + 0x7FFF8000) )
        {
          __asan_report_load4(&npc_data->unlock_time);
        }
        if ( unlock_time != npc_data->unlock_time )
        {
          npc_data->unlock_time = unlock_time;
          is_change = 1;
        }
      }
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&npc_data->is_unlock >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)npc_data + 8) & 7) >= *(_BYTE *)(((unsigned __int64)&npc_data->is_unlock >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&npc_data->is_unlock);
      }
      if ( !npc_data->is_unlock )
      {
        v6 = *(_DWORD *)(v2 + 48);
        if ( *(_BYTE *)(((unsigned __int64)npc_data >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)npc_data & 7) + 3) >= *(_BYTE *)(((unsigned __int64)npc_data >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(npc_data);
        }
        level_id = GCGPlayingExcelConfigMgr::getWeekNpcLevelId(gcg_playing_config_mgr, npc_data->npc_id, v6);
        if ( level_id )
        {
          v12 = ((_BYTE)npc_data + 8) & 7;
          v13 = (*(_BYTE *)(((unsigned __int64)&npc_data->is_unlock >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v12 >= *(_BYTE *)(((unsigned __int64)&npc_data->is_unlock >> 3) + 0x7FFF8000));
          if ( (_BYTE)v13 )
            __asan_report_store1(&npc_data->is_unlock, v12, v13);
          npc_data->is_unlock = 1;
          v14 = (*(_BYTE *)(((unsigned __int64)&npc_data->level_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)npc_data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&npc_data->level_id >> 3) + 0x7FFF8000));
          if ( (_BYTE)v14 )
            __asan_report_store4(&npc_data->level_id, (((_BYTE)npc_data + 4) & 7u) + 3, v14);
          npc_data->level_id = level_id;
          v15 = (*(_BYTE *)(((unsigned __int64)&npc_data->unlock_time >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)npc_data + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&npc_data->unlock_time >> 3) + 0x7FFF8000));
          if ( (_BYTE)v15 )
            __asan_report_store4(&npc_data->unlock_time, (((_BYTE)npc_data + 20) & 7u) + 3, v15);
          npc_data->unlock_time = 0;
          v16 = (*(_BYTE *)(((unsigned __int64)&npc_data->scene_point_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)npc_data + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&npc_data->scene_point_id >> 3) + 0x7FFF8000));
          if ( (_BYTE)v16 )
            __asan_report_store4(&npc_data->scene_point_id, (((_BYTE)npc_data + 16) & 7u) + 3, v16);
          npc_data->scene_point_id = 0;
          std::unordered_set<unsigned int>::insert(
            (std::unordered_set<unsigned int> *const)(v2 + 64),
            &npc_data->npc_id);
          is_change = 1;
          is_notify_npc_change = 1;
        }
        else
        {
          common::milog::MiLogStream::create(
            &v41,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/card_game/gcg_week_challenge.cpp",
            "tryUnlockNpc",
            436);
          v7 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                 &v41,
                 (const char (*)[45])"[GCG_WEEK] getWeekNpcLevelId failed, npc_id:");
          v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &npc_data->npc_id);
          v9 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v8, (const char (*)[12])" gcg_level:");
          v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v9,
                  (const unsigned int *)(v2 + 48));
          v11 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v10, (const char (*)[6])" uid:");
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8(this);
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
          common::milog::MiLogStream::~MiLogStream(&v41);
        }
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&npc_data->scene_point_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)npc_data + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&npc_data->scene_point_id >> 3)
                                                                  + 0x7FFF8000) )
        {
          __asan_report_load4(&npc_data->scene_point_id);
        }
        if ( !npc_data->scene_point_id )
        {
          std::unordered_set<unsigned int>::insert(
            (std::unordered_set<unsigned int> *const)(v2 + 64),
            &npc_data->npc_id);
          is_change = 1;
        }
      }
    }
  }
  TavernSceneBuilder = PlayerGCGComp::getTavernSceneBuilder(gcg_comp);
  GCGTavernSceneBuilder::appendWeekNpcScenePointInfo(
    TavernSceneBuilder,
    (const std::unordered_set<unsigned int> *)(v2 + 64));
  if ( is_change && is_notify )
  {
    GCGWeekChallenge::notifyChallengeInfo(this, is_notify_npc_change);
    v27 = PlayerGCGComp::getTavernSceneBuilder(gcg_comp);
    GCGTavernSceneBuilder::broadNpcInfo(v27);
  }
  std::unordered_set<unsigned int>::~unordered_set((std::unordered_set<unsigned int> *const)(v2 + 64));
  result = 0;
  if ( v42 == (char *)v2 )
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

// Line 499: range 00000000175BAA84-00000000175BB15E
uint32_t __cdecl GCGWeekChallenge::getUnlockNpcCount(const GCGWeekChallenge *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  PlayerGCGComp *GCGComp; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rbx
  uint32_t result; // eax
  uint32_t RefreshStartWeekDay; // eax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  uint32_t *v15; // rax
  uint32_t *v16; // rdx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rbx
  unsigned int val; // [rsp+10h] [rbp-110h] BYREF
  uint32_t now; // [rsp+14h] [rbp-10Ch]
  uint32_t time_offset; // [rsp+18h] [rbp-108h]
  uint32_t unlock_days; // [rsp+1Ch] [rbp-104h]
  const GCGPlayingExcelConfigMgr *gcg_playing_config_mgr; // [rsp+20h] [rbp-100h]
  const data::GCGWeekRefreshExcelConfig *refresh_config_ptr; // [rsp+28h] [rbp-F8h]
  std::shared_ptr<Config> v30; // [rsp+30h] [rbp-F0h] BYREF
  common::milog::MiLogStream v31; // [rsp+40h] [rbp-E0h] BYREF
  char v32[192]; // [rsp+60h] [rbp-C0h] BYREF

  v1 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "6 48 4 13 gcg_level:500 64 4 29 gm_refresh_start_week_day:509 80 4 26 refresh_start_week_day:510"
                        " 96 4 16 cur_week_day:513 112 4 16 refresh_days:519 128 4 13 pass_days:520";
  *(_QWORD *)(v1 + 16) = GCGWeekChallenge::getUnlockNpcCount;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -234556924;
  v3[536862723] = -234556924;
  v3[536862724] = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  GCGComp = Player::getGCGComp(this->player_);
  *(_DWORD *)(v1 + 48) = PlayerGCGComp::getLevel(GCGComp);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v30);
  gcg_playing_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v30)->design_config.txt_config_mgr.gcg_playing_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v30);
  refresh_config_ptr = GCGPlayingExcelConfigMgr::getWeekRefreshExcelConfig(gcg_playing_config_mgr, *(_DWORD *)(v1 + 48));
  if ( !refresh_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v31,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/card_game/gcg_week_challenge.cpp",
      "getUnlockNpcCount",
      505);
    v5 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
           &v31,
           (const char (*)[55])"[GCG_WEEK] getWeekRefreshExcelConfig fails, gcg_level:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v6, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
LABEL_9:
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v31);
    result = 0;
    goto LABEL_28;
  }
  *(_DWORD *)(v1 + 64) = GCGWeekChallenge::getGMRefreshStartWeekDay(this);
  if ( *(int *)(v1 + 64) > 0 )
    RefreshStartWeekDay = *(_DWORD *)(v1 + 64);
  else
    RefreshStartWeekDay = GCGWeekChallenge::getRefreshStartWeekDay(this);
  *(_DWORD *)(v1 + 80) = RefreshStartWeekDay;
  now = common::tools::TimeUtils::getNow();
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v30);
  v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v30);
  time_offset = ConstValueExcelConfigMgr::getTimeOffsetSec(&v10->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v30);
  *(_DWORD *)(v1 + 96) = common::tools::TimeUtils::getTimeWeekDay(now, time_offset);
  if ( *(_DWORD *)(v1 + 96) < *(_DWORD *)(v1 + 80) )
  {
    common::milog::MiLogStream::create(
      &v31,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/card_game/gcg_week_challenge.cpp",
      "getUnlockNpcCount",
      516);
    v11 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
            &v31,
            (const char (*)[25])"[GCG_WEEK] cur_week_day:");
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v1 + 96));
    v13 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
            v12,
            (const char (*)[25])" refresh_start_week_day:");
    v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v1 + 80));
    v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v14, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    goto LABEL_9;
  }
  if ( *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->refresh_days >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)refresh_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->refresh_days >> 3)
                                                                      + 0x7FFF8000) )
  {
    __asan_report_load4(&refresh_config_ptr->refresh_days);
  }
  *(_DWORD *)(v1 + 112) = GCGWeekChallenge::getRefreshDays(this, refresh_config_ptr->refresh_days);
  *(_DWORD *)(v1 + 128) = *(_DWORD *)(v1 + 96) - *(_DWORD *)(v1 + 80);
  if ( *(int *)(v1 + 64) < 0 )
    *(_DWORD *)(v1 + 128) -= *(_DWORD *)(v1 + 64);
  val = *(_DWORD *)(v1 + 128) + 1;
  v15 = (uint32_t *)std::min<unsigned int>((const unsigned int *)(v1 + 112), &val);
  v16 = v15;
  if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v15);
  }
  unlock_days = *v16;
  common::milog::MiLogStream::create(
    &v31,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/card_game/gcg_week_challenge.cpp",
    "getUnlockNpcCount",
    526);
  v17 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
          &v31,
          (const char (*)[38])"[GCG_WEEK] gm_refresh_start_week_day:");
  v18 = common::milog::MiLogStream::operator<<<int,(int *)0>(v17, (const int *)(v1 + 64));
  v19 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v18, (const char (*)[12])" pass_days:");
  v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v1 + 128));
  v21 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v20, (const char (*)[15])" refresh_days:");
  v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v1 + 112));
  v23 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v22, (const char (*)[6])" uid:");
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &val);
  common::milog::MiLogStream::~MiLogStream(&v31);
  if ( *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->daily_refresh_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->daily_refresh_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&refresh_config_ptr->daily_refresh_count);
  }
  result = unlock_days * refresh_config_ptr->daily_refresh_count;
LABEL_28:
  if ( v32 == (char *)v1 )
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

// Line 532: range 00000000175BB160-00000000175BB686
uint32_t __cdecl GCGWeekChallenge::getNpcUnlockTime(const GCGWeekChallenge *const this, uint32_t npc_index)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  PlayerGCGComp *GCGComp; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r13
  uint32_t result; // eax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  uint32_t RefreshStartWeekDay; // eax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  unsigned int val; // [rsp+14h] [rbp-BCh] BYREF
  uint32_t npc_week_day; // [rsp+18h] [rbp-B8h]
  int32_t gm_refresh_start_week_day; // [rsp+1Ch] [rbp-B4h]
  uint32_t start_week_day; // [rsp+20h] [rbp-B0h]
  uint32_t now; // [rsp+24h] [rbp-ACh]
  uint32_t time_offset; // [rsp+28h] [rbp-A8h]
  const GCGPlayingExcelConfigMgr *gcg_playing_config_mgr; // [rsp+30h] [rbp-A0h]
  const data::GCGWeekRefreshExcelConfig *refresh_config_ptr; // [rsp+38h] [rbp-98h]
  std::shared_ptr<Config> v22; // [rsp+40h] [rbp-90h] BYREF
  common::milog::MiLogStream v23; // [rsp+50h] [rbp-80h] BYREF
  char v24[96]; // [rsp+70h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 gcg_level:533";
  *(_QWORD *)(v2 + 16) = GCGWeekChallenge::getNpcUnlockTime;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  GCGComp = Player::getGCGComp(this->player_);
  *(_DWORD *)(v2 + 32) = PlayerGCGComp::getLevel(GCGComp);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v22);
  gcg_playing_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22)->design_config.txt_config_mgr.gcg_playing_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v22);
  refresh_config_ptr = GCGPlayingExcelConfigMgr::getWeekRefreshExcelConfig(gcg_playing_config_mgr, *(_DWORD *)(v2 + 32));
  if ( !refresh_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/card_game/gcg_week_challenge.cpp",
      "getNpcUnlockTime",
      538);
    v6 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
           &v23,
           (const char (*)[55])"[GCG_WEEK] getWeekRefreshExcelConfig fails, gcg_level:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
    v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v7, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
LABEL_9:
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream(&v23);
    result = -1;
    goto LABEL_28;
  }
  if ( *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->daily_refresh_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->daily_refresh_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&refresh_config_ptr->daily_refresh_count);
  }
  if ( !refresh_config_ptr->daily_refresh_count )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/card_game/gcg_week_challenge.cpp",
      "getNpcUnlockTime",
      543);
    v10 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
            &v23,
            (const char (*)[58])"[GCG_WEEK] daily_refresh_count is zero, config_gcg_level:");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &refresh_config_ptr->gcg_level);
    v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v11, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    goto LABEL_9;
  }
  gm_refresh_start_week_day = GCGWeekChallenge::getGMRefreshStartWeekDay(this);
  if ( gm_refresh_start_week_day > 0 )
    RefreshStartWeekDay = gm_refresh_start_week_day;
  else
    RefreshStartWeekDay = GCGWeekChallenge::getRefreshStartWeekDay(this);
  start_week_day = RefreshStartWeekDay;
  if ( *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->daily_refresh_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->daily_refresh_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&refresh_config_ptr->daily_refresh_count);
  }
  npc_week_day = npc_index / refresh_config_ptr->daily_refresh_count + start_week_day;
  if ( gm_refresh_start_week_day >= 0 )
  {
LABEL_25:
    now = common::tools::TimeUtils::getNow();
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v22);
    v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22);
    time_offset = ConstValueExcelConfigMgr::getTimeOffsetSec(&v13->design_config.txt_config_mgr.const_value_config_mgr);
    std::shared_ptr<Config>::~shared_ptr(&v22);
    if ( npc_week_day > (unsigned int)common::tools::TimeUtils::getTimeWeekDay(now, time_offset) )
      result = common::tools::TimeUtils::getWeekTime(now, time_offset) + 86400 * npc_week_day - 86400;
    else
      result = 0;
    goto LABEL_28;
  }
  if ( npc_week_day > abs32(gm_refresh_start_week_day) )
  {
    npc_week_day -= abs32(gm_refresh_start_week_day);
    goto LABEL_25;
  }
  result = 0;
LABEL_28:
  if ( v24 == (char *)v2 )
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

// Line 569: range 00000000175BB688-00000000175BC27C
int32_t __cdecl GCGWeekChallenge::appendNpc(GCGWeekChallenge *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  PlayerGCGComp *GCGComp; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rbx
  int32_t v8; // r14d
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  std::vector<unsigned int>::size_type v11; // r14
  std::vector<unsigned int>::const_reference v12; // rax
  _DWORD *v13; // rdx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r14
  std::vector<GCGWeekNpcData>::size_type v21; // r14
  std::vector<GCGWeekNpcData>::reference v22; // rax
  uint32_t *p_npc_id; // rdx
  std::vector<GCGWeekNpcData>::value_type *v24; // rax
  common::milog::MiLogStream *v25; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+1Ch] [rbp-204h] BYREF
  uint32_t need_character_npc_count; // [rsp+20h] [rbp-200h]
  uint32_t have_character_npc_count; // [rsp+24h] [rbp-1FCh]
  uint32_t npc_index; // [rsp+28h] [rbp-1F8h]
  uint32_t refresh_index; // [rsp+2Ch] [rbp-1F4h]
  uint32_t refresh_days; // [rsp+30h] [rbp-1F0h]
  uint32_t npc_id; // [rsp+34h] [rbp-1ECh]
  std::vector<GCGWeekNpcData>::iterator __for_begin; // [rsp+38h] [rbp-1E8h] BYREF
  std::vector<GCGWeekNpcData>::iterator __for_end; // [rsp+40h] [rbp-1E0h] BYREF
  const GCGPlayingExcelConfigMgr *gcg_playing_config_mgr; // [rsp+48h] [rbp-1D8h]
  const data::GCGWeekRefreshExcelConfig *refresh_config_ptr; // [rsp+50h] [rbp-1D0h]
  const std::vector<unsigned int> *Character_npc_refresh_vec_ptr; // [rsp+58h] [rbp-1C8h]
  const std::vector<unsigned int> *character_npc_refresh_vec; // [rsp+60h] [rbp-1C0h]
  std::vector<GCGWeekNpcData> *__for_range; // [rsp+68h] [rbp-1B8h]
  const data::GCGWeekLevelExcelConfig *config_ptr; // [rsp+70h] [rbp-1B0h]
  const GCGWeekNpcData *npc_data; // [rsp+78h] [rbp-1A8h]
  std::shared_ptr<Config> v43; // [rsp+80h] [rbp-1A0h] BYREF
  common::milog::MiLogStream v44; // [rsp+90h] [rbp-190h] BYREF
  char v45[368]; // [rsp+B0h] [rbp-170h] BYREF

  v1 = (unsigned __int64)v45;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(320LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "7 32 4 13 gcg_level:570 48 4 13 day_index:601 64 4 23 character_npc_count:603 80 4 17 select_npc"
                        "_id:629 96 24 18 day_npc_id_vec:615 160 24 12 npc_data:641 224 56 14 npc_id_set:589";
  *(_QWORD *)(v1 + 16) = GCGWeekChallenge::appendNpc;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556924;
  v3[536862722] = -234556924;
  v3[536862723] = -234881024;
  v3[536862724] = -218959118;
  v3[536862725] = -234881024;
  v3[536862726] = -218959118;
  v3[536862728] = -218103808;
  v3[536862729] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  GCGComp = Player::getGCGComp(this->player_);
  *(_DWORD *)(v1 + 32) = PlayerGCGComp::getLevel(GCGComp);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v43);
  gcg_playing_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v43)->design_config.txt_config_mgr.gcg_playing_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v43);
  refresh_config_ptr = GCGPlayingExcelConfigMgr::getWeekRefreshExcelConfig(gcg_playing_config_mgr, *(_DWORD *)(v1 + 32));
  if ( !refresh_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v44,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/card_game/gcg_week_challenge.cpp",
      "appendNpc",
      575);
    v5 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
           &v44,
           (const char (*)[55])"[GCG_WEEK] getWeekRefreshExcelConfig fails, gcg_level:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 32));
    v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v6, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
LABEL_9:
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v44);
    v8 = -1;
    goto LABEL_58;
  }
  if ( *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->gcg_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->gcg_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&refresh_config_ptr->gcg_level);
  }
  Character_npc_refresh_vec_ptr = GCGWeekChallenge::getCharacterNpcRefreshVec(this, refresh_config_ptr->gcg_level);
  if ( !Character_npc_refresh_vec_ptr )
  {
    common::milog::MiLogStream::create(
      &v44,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/card_game/gcg_week_challenge.cpp",
      "appendNpc",
      581);
    v9 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
           &v44,
           (const char (*)[62])"[GCG_WEEK] getCharacterNpcRefreshVec fails, config_gcg_level:");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &refresh_config_ptr->gcg_level);
    v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v10, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    goto LABEL_9;
  }
  character_npc_refresh_vec = Character_npc_refresh_vec_ptr;
  GCGWeekChallenge::calcNpcWeightMap(this);
  std::unordered_set<unsigned int>::unordered_set((std::unordered_set<unsigned int> *const)(v1 + 224));
  __for_range = &this->npc_data_vec_;
  __for_begin._M_current = std::vector<GCGWeekNpcData>::begin(&this->npc_data_vec_)._M_current;
  __for_end._M_current = std::vector<GCGWeekNpcData>::end(&this->npc_data_vec_)._M_current;
  while ( __gnu_cxx::operator!=<GCGWeekNpcData *,std::vector<GCGWeekNpcData>>(&__for_begin, &__for_end) )
  {
    npc_data = __gnu_cxx::__normal_iterator<GCGWeekNpcData *,std::vector<GCGWeekNpcData>>::operator*(&__for_begin);
    std::unordered_set<unsigned int>::insert((std::unordered_set<unsigned int> *const)(v1 + 224), &npc_data->npc_id);
    __gnu_cxx::__normal_iterator<GCGWeekNpcData *,std::vector<GCGWeekNpcData>>::operator++(&__for_begin);
  }
  GCGWeekChallenge::deleteNpcFromWeightMap(this, (const std::unordered_set<unsigned int> *)(v1 + 224));
  need_character_npc_count = 0;
  have_character_npc_count = 0;
  npc_index = 0;
  if ( *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->refresh_days >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)refresh_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->refresh_days >> 3)
                                                                      + 0x7FFF8000) )
  {
    __asan_report_load4(&refresh_config_ptr->refresh_days);
  }
  refresh_days = GCGWeekChallenge::getRefreshDays(this, refresh_config_ptr->refresh_days);
  for ( *(_DWORD *)(v1 + 48) = 0; refresh_days > *(_DWORD *)(v1 + 48); ++*(_DWORD *)(v1 + 48) )
  {
    *(_DWORD *)(v1 + 64) = 0;
    v11 = *(unsigned int *)(v1 + 48);
    if ( v11 < std::vector<unsigned int>::size(character_npc_refresh_vec) )
    {
      v12 = std::vector<unsigned int>::operator[](character_npc_refresh_vec, *(unsigned int *)(v1 + 48));
      v13 = v12;
      if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v12);
      }
      *(_DWORD *)(v1 + 64) = *v13;
    }
    if ( *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->daily_refresh_count >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->daily_refresh_count >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&refresh_config_ptr->daily_refresh_count);
    }
    if ( refresh_config_ptr->daily_refresh_count < *(_DWORD *)(v1 + 64) )
    {
      common::milog::MiLogStream::create(
        &v44,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/card_game/gcg_week_challenge.cpp",
        "appendNpc",
        610);
      v14 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v44,
              (const char (*)[22])"[GCG_WEEK] day_index:");
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v1 + 48));
      v16 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              v15,
              (const char (*)[22])" character_npc_count:");
      v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v1 + 64));
      v18 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
              v17,
              (const char (*)[34])" bigger than daily_refresh_count:");
      v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v18,
              &refresh_config_ptr->daily_refresh_count);
      v20 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v19, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &val);
      common::milog::MiLogStream::~MiLogStream(&v44);
      if ( *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->daily_refresh_count >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->daily_refresh_count >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&refresh_config_ptr->daily_refresh_count);
      }
      *(_DWORD *)(v1 + 64) = refresh_config_ptr->daily_refresh_count;
    }
    need_character_npc_count += *(_DWORD *)(v1 + 64);
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v1 + 96));
    for ( refresh_index = 0; ; ++refresh_index )
    {
      if ( *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->daily_refresh_count >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->daily_refresh_count >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&refresh_config_ptr->daily_refresh_count);
      }
      if ( refresh_index >= refresh_config_ptr->daily_refresh_count )
        break;
      v21 = npc_index;
      if ( v21 >= std::vector<GCGWeekNpcData>::size(&this->npc_data_vec_) )
      {
        *(_DWORD *)(v1 + 80) = 0;
        if ( need_character_npc_count <= have_character_npc_count )
        {
          GCGWeekChallenge::randomSelectNpc(this, 0, (uint32_t *)(v1 + 80));
        }
        else
        {
          GCGWeekChallenge::randomSelectNpc(this, 1, (uint32_t *)(v1 + 80));
          ++have_character_npc_count;
        }
        if ( *(_DWORD *)(v1 + 80) )
        {
          *(_DWORD *)(v1 + 160) = 0;
          *(_DWORD *)(v1 + 164) = 0;
          *(_BYTE *)(v1 + 168) = 0;
          *(_DWORD *)(v1 + 172) = 0;
          *(_DWORD *)(v1 + 176) = 0;
          *(_DWORD *)(v1 + 180) = 0;
          *(_DWORD *)(v1 + 160) = *(_DWORD *)(v1 + 80);
          v24 = std::move<GCGWeekNpcData &>((GCGWeekNpcData *)(v1 + 160));
          std::vector<GCGWeekNpcData>::push_back(&this->npc_data_vec_, v24);
        }
        else
        {
          common::milog::MiLogStream::create(
            &v44,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/card_game/gcg_week_challenge.cpp",
            "appendNpc",
            647);
          v25 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                  &v44,
                  (const char (*)[38])"[GCG_WEEK] randomSelectNpc fail, uid:");
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8(this);
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &val);
          common::milog::MiLogStream::~MiLogStream(&v44);
        }
      }
      else
      {
        v22 = std::vector<GCGWeekNpcData>::operator[](&this->npc_data_vec_, npc_index);
        p_npc_id = &v22->npc_id;
        if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v22 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v22);
        }
        npc_id = *p_npc_id;
        config_ptr = data::GCGPlayingExcelConfigMgrBase::findGCGWeekLevelExcelConfig(gcg_playing_config_mgr, npc_id);
        if ( config_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&config_ptr->npc_type >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->npc_type >> 3)
                                                                      + 0x7FFF8000) )
          {
            __asan_report_load4(&config_ptr->npc_type);
          }
          if ( config_ptr->npc_type == WEEK_NPC_CHARACTER )
            ++have_character_npc_count;
        }
      }
      ++npc_index;
    }
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v1 + 96));
  }
  GCGWeekChallenge::clearNpcWeightMap(this);
  v8 = 0;
  std::unordered_set<unsigned int>::~unordered_set((std::unordered_set<unsigned int> *const)(v1 + 224));
LABEL_58:
  result = v8;
  if ( v45 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 661: range 00000000175BC27E-00000000175BCA3D
int32_t __cdecl GCGWeekChallenge::getRefreshNpcVec(GCGWeekChallenge *const this, std::vector<unsigned int> *npc_id_vec)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  PlayerGCGComp *GCGComp; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  int32_t result; // eax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  std::vector<unsigned int>::size_type v12; // r14
  std::vector<unsigned int>::const_reference v13; // rax
  _DWORD *v14; // rdx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // r14
  uint32_t refresh_index; // [rsp+18h] [rbp-108h]
  uint32_t refresh_days; // [rsp+1Ch] [rbp-104h]
  GCGPlayingExcelConfigMgr *gcg_playing_config_mgr; // [rsp+20h] [rbp-100h]
  const data::GCGWeekRefreshExcelConfig *refresh_config_ptr; // [rsp+28h] [rbp-F8h]
  const std::vector<unsigned int> *Character_npc_refresh_vec_ptr; // [rsp+30h] [rbp-F0h]
  std::shared_ptr<Config> v27; // [rsp+40h] [rbp-E0h] BYREF
  common::milog::MiLogStream v28; // [rsp+50h] [rbp-D0h] BYREF
  char v29[176]; // [rsp+70h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 13 gcg_level:662 64 4 13 day_index:682 80 4 23 character_npc_count:684 96 4 17 select_npc_id:697";
  *(_QWORD *)(v2 + 16) = GCGWeekChallenge::getRefreshNpcVec;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234556924;
  v4[536862723] = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  GCGComp = Player::getGCGComp(this->player_);
  *(_DWORD *)(v2 + 48) = PlayerGCGComp::getLevel(GCGComp);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v27);
  gcg_playing_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v27)->design_config.txt_config_mgr.gcg_playing_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v27);
  refresh_config_ptr = GCGPlayingExcelConfigMgr::getWeekRefreshExcelConfig(gcg_playing_config_mgr, *(_DWORD *)(v2 + 48));
  if ( !refresh_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/card_game/gcg_week_challenge.cpp",
      "getRefreshNpcVec",
      667);
    v6 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
           &v28,
           (const char (*)[55])"[GCG_WEEK] getWeekRefreshExcelConfig fails, gcg_level:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 48));
    v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v7, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
LABEL_9:
    *(_DWORD *)(v2 + 96) = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 96));
    common::milog::MiLogStream::~MiLogStream(&v28);
    result = -1;
    goto LABEL_43;
  }
  if ( *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->gcg_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->gcg_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&refresh_config_ptr->gcg_level);
  }
  Character_npc_refresh_vec_ptr = GCGWeekChallenge::getCharacterNpcRefreshVec(this, refresh_config_ptr->gcg_level);
  if ( !Character_npc_refresh_vec_ptr )
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/card_game/gcg_week_challenge.cpp",
      "getRefreshNpcVec",
      673);
    v10 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
            &v28,
            (const char (*)[62])"[GCG_WEEK] getCharacterNpcRefreshVec fails, config_gcg_level:");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &refresh_config_ptr->gcg_level);
    v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v11, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    goto LABEL_9;
  }
  GCGWeekChallenge::calcNpcWeightMap(this);
  if ( *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->refresh_days >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)refresh_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->refresh_days >> 3)
                                                                      + 0x7FFF8000) )
  {
    __asan_report_load4(&refresh_config_ptr->refresh_days);
  }
  refresh_days = GCGWeekChallenge::getRefreshDays(this, refresh_config_ptr->refresh_days);
  for ( *(_DWORD *)(v2 + 64) = 0; refresh_days > *(_DWORD *)(v2 + 64); ++*(_DWORD *)(v2 + 64) )
  {
    *(_DWORD *)(v2 + 80) = 0;
    v12 = *(unsigned int *)(v2 + 64);
    if ( v12 < std::vector<unsigned int>::size(Character_npc_refresh_vec_ptr) )
    {
      v13 = std::vector<unsigned int>::operator[](Character_npc_refresh_vec_ptr, *(unsigned int *)(v2 + 64));
      v14 = v13;
      if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v13);
      }
      *(_DWORD *)(v2 + 80) = *v14;
    }
    if ( *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->daily_refresh_count >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->daily_refresh_count >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&refresh_config_ptr->daily_refresh_count);
    }
    if ( refresh_config_ptr->daily_refresh_count < *(_DWORD *)(v2 + 80) )
    {
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/card_game/gcg_week_challenge.cpp",
        "getRefreshNpcVec",
        691);
      v15 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v28,
              (const char (*)[22])"[GCG_WEEK] day_index:");
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v2 + 64));
      v17 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              v16,
              (const char (*)[22])" character_npc_count:");
      v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v2 + 80));
      v19 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
              v18,
              (const char (*)[34])" bigger than daily_refresh_count:");
      v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v19,
              &refresh_config_ptr->daily_refresh_count);
      v21 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v20, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      *(_DWORD *)(v2 + 96) = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v2 + 96));
      common::milog::MiLogStream::~MiLogStream(&v28);
      if ( *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->daily_refresh_count >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->daily_refresh_count >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&refresh_config_ptr->daily_refresh_count);
      }
      *(_DWORD *)(v2 + 80) = refresh_config_ptr->daily_refresh_count;
    }
    for ( refresh_index = 0; ; ++refresh_index )
    {
      if ( *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->daily_refresh_count >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&refresh_config_ptr->daily_refresh_count >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&refresh_config_ptr->daily_refresh_count);
      }
      if ( refresh_index >= refresh_config_ptr->daily_refresh_count )
        break;
      *(_DWORD *)(v2 + 96) = 0;
      if ( *(_DWORD *)(v2 + 80) )
      {
        if ( GCGWeekChallenge::randomSelectNpc(this, 1, (uint32_t *)(v2 + 96)) )
          break;
        --*(_DWORD *)(v2 + 80);
      }
      else if ( GCGWeekChallenge::randomSelectNpc(this, 0, (uint32_t *)(v2 + 96)) )
      {
        break;
      }
      std::vector<unsigned int>::push_back(npc_id_vec, (const std::vector<unsigned int>::value_type *)(v2 + 96));
    }
  }
  GCGWeekChallenge::clearNpcWeightMap(this);
  result = 0;
LABEL_43:
  if ( v29 == (char *)v2 )
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

// Line 724: range 00000000175BCA3E-00000000175BD0F4
void __cdecl GCGWeekChallenge::calcNpcWeightMap(GCGWeekChallenge *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  PlayerGCGComp *GCGComp; // rax
  uint32_t *p_open_gcg_level; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  std::tuple_element<0,const std::pair<unsigned int const,data::GCGWeekLevelExcelConfig> >::type *v12; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v13; // rax
  _DWORD *v14; // rdx
  char v15; // cl
  std::tuple_element<0,const std::pair<unsigned int const,data::GCGWeekLevelExcelConfig> >::type *v16; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v17; // rax
  _DWORD *v18; // rdx
  char v19; // cl
  std::tuple_element<0,const std::pair<unsigned int const,data::GCGWeekLevelExcelConfig> >::type *v20; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v21; // rax
  _DWORD *v22; // rdx
  char v23; // cl
  std::tuple_element<0,const std::pair<unsigned int const,data::GCGWeekLevelExcelConfig> >::type *v24; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v25; // rax
  _DWORD *v26; // rdx
  char v27; // cl
  unsigned int val; // [rsp+18h] [rbp-E8h] BYREF
  uint32_t gcg_level; // [rsp+1Ch] [rbp-E4h]
  std::unordered_map<unsigned int,data::GCGWeekLevelExcelConfig>::const_iterator __for_begin; // [rsp+20h] [rbp-E0h] BYREF
  std::unordered_map<unsigned int,data::GCGWeekLevelExcelConfig>::const_iterator __for_end; // [rsp+28h] [rbp-D8h] BYREF
  const PlayerQuestComp *quest_comp; // [rsp+30h] [rbp-D0h]
  const GCGPlayingExcelConfigMgr *gcg_playing_config_mgr; // [rsp+38h] [rbp-C8h]
  const std::unordered_map<unsigned int,data::GCGWeekLevelExcelConfig> *__for_range; // [rsp+40h] [rbp-C0h]
  const std::pair<unsigned int const,data::GCGWeekLevelExcelConfig> *v35; // [rsp+48h] [rbp-B8h]
  std::tuple_element<0,const std::pair<unsigned int const,data::GCGWeekLevelExcelConfig> >::type *npc_id; // [rsp+50h] [rbp-B0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::GCGWeekLevelExcelConfig> >::type *npc_level_config; // [rsp+58h] [rbp-A8h]
  std::shared_ptr<Config> v38; // [rsp+60h] [rbp-A0h] BYREF
  common::milog::MiLogStream v39; // [rsp+70h] [rbp-90h] BYREF
  char v40[112]; // [rsp+90h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 17 open_quest_id:738";
  *(_QWORD *)(v1 + 16) = GCGWeekChallenge::calcNpcWeightMap;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  GCGWeekChallenge::clearNpcWeightMap(this);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  GCGComp = Player::getGCGComp(this->player_);
  gcg_level = PlayerGCGComp::getLevel(GCGComp);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  quest_comp = Player::getQuestComp(this->player_);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v38);
  gcg_playing_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v38)->design_config.txt_config_mgr.gcg_playing_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v38);
  __for_range = &gcg_playing_config_mgr->gcg_week_level_excel_config_map;
  __for_begin._M_cur = std::unordered_map<unsigned int,data::GCGWeekLevelExcelConfig>::begin(&gcg_playing_config_mgr->gcg_week_level_excel_config_map)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,data::GCGWeekLevelExcelConfig>::end(&gcg_playing_config_mgr->gcg_week_level_excel_config_map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::GCGWeekLevelExcelConfig>,false>(
            &__for_begin,
            &__for_end) )
  {
    v35 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGWeekLevelExcelConfig>,false,false>::operator*(&__for_begin);
    npc_id = std::get<0ul,unsigned int const,data::GCGWeekLevelExcelConfig>(v35);
    npc_level_config = (std::tuple_element<1,const std::pair<unsigned int const,data::GCGWeekLevelExcelConfig> >::type *)std::get<1ul,unsigned int const,data::GCGWeekLevelExcelConfig>(v35);
    p_open_gcg_level = &npc_level_config->open_gcg_level;
    if ( *(_BYTE *)(((unsigned __int64)p_open_gcg_level >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_open_gcg_level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_open_gcg_level >> 3)
                                                                         + 0x7FFF8000) )
    {
      __asan_report_load4(p_open_gcg_level);
    }
    if ( gcg_level >= npc_level_config->open_gcg_level )
    {
      if ( *(_BYTE *)(((unsigned __int64)&npc_level_config->open_quest_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&npc_level_config->open_quest_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&npc_level_config->open_quest_id);
      }
      *(_DWORD *)(v1 + 32) = npc_level_config->open_quest_id;
      if ( *(_DWORD *)(v1 + 32)
        && PlayerQuestComp::getQuestState(quest_comp, *(_DWORD *)(v1 + 32)) != QUEST_STATE_FINISHED )
      {
        common::milog::MiLogStream::create(
          &v39,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/card_game/gcg_week_challenge.cpp",
          "calcNpcWeightMap",
          741);
        v7 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
               &v39,
               (const char (*)[19])"[GCG_WEEK] npc_id:");
        v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, npc_id);
        v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
               v8,
               (const char (*)[27])" not finish open_quest_id:");
        v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v9,
                (const unsigned int *)(v1 + 32));
        v11 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v10, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
        common::milog::MiLogStream::~MiLogStream(&v39);
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)npc_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)npc_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)npc_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(npc_id);
        }
        if ( (unsigned __int8)GCGWeekChallenge::isNpcCondQuestAllValid(this, *npc_id) )
        {
          if ( *(_BYTE *)(((unsigned __int64)&npc_level_config->npc_type >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)npc_level_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&npc_level_config->npc_type >> 3)
                                                                            + 0x7FFF8000) )
          {
            __asan_report_load4(&npc_level_config->npc_type);
          }
          if ( npc_level_config->npc_type == WEEK_NPC_CHARACTER )
          {
            v12 = npc_id;
            v13 = std::map<unsigned int,unsigned int>::operator[](&this->free_character_npc_weight_map_, npc_id);
            v14 = v13;
            v15 = *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000);
            if ( v15 != 0 && (char)(((unsigned __int8)v13 & 7) + 3) >= v15 )
            {
              LOBYTE(v12) = v15 != 0;
              __asan_report_store4(v13, v12, v13);
            }
            *v14 = 1;
          }
          else
          {
            v16 = npc_id;
            v17 = std::map<unsigned int,unsigned int>::operator[](&this->free_normal_npc_weight_map_, npc_id);
            v18 = v17;
            v19 = *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000);
            if ( v19 != 0 && (char)(((unsigned __int8)v17 & 7) + 3) >= v19 )
            {
              LOBYTE(v16) = v19 != 0;
              __asan_report_store4(v17, v16, v17);
            }
            *v18 = 1;
          }
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&npc_level_config->npc_type >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)npc_level_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&npc_level_config->npc_type >> 3)
                                                                            + 0x7FFF8000) )
          {
            __asan_report_load4(&npc_level_config->npc_type);
          }
          if ( npc_level_config->npc_type == WEEK_NPC_CHARACTER )
          {
            v20 = npc_id;
            v21 = std::map<unsigned int,unsigned int>::operator[](&this->occupied_character_npc_weight_map_, npc_id);
            v22 = v21;
            v23 = *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000);
            if ( v23 != 0 && (char)(((unsigned __int8)v21 & 7) + 3) >= v23 )
            {
              LOBYTE(v20) = v23 != 0;
              __asan_report_store4(v21, v20, v21);
            }
            *v22 = 1;
          }
          else
          {
            v24 = npc_id;
            v25 = std::map<unsigned int,unsigned int>::operator[](&this->occupied_normal_npc_weight_map_, npc_id);
            v26 = v25;
            v27 = *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000);
            if ( v27 != 0 && (char)(((unsigned __int8)v25 & 7) + 3) >= v27 )
            {
              LOBYTE(v24) = v27 != 0;
              __asan_report_store4(v25, v24, v25);
            }
            *v26 = 1;
          }
        }
      }
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGWeekLevelExcelConfig>,false,false>::operator++(&__for_begin);
  }
  if ( v40 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 771: range 00000000175BD0F6-00000000175BD148
void __cdecl GCGWeekChallenge::clearNpcWeightMap(GCGWeekChallenge *const this)
{
  std::map<unsigned int,unsigned int>::clear(&this->free_character_npc_weight_map_);
  std::map<unsigned int,unsigned int>::clear(&this->occupied_character_npc_weight_map_);
  std::map<unsigned int,unsigned int>::clear(&this->free_normal_npc_weight_map_);
  std::map<unsigned int,unsigned int>::clear(&this->occupied_normal_npc_weight_map_);
};

// Line 779: range 00000000175BD14A-00000000175BD31A
void __cdecl GCGWeekChallenge::deleteNpcFromWeightMap(
        GCGWeekChallenge *const this,
        const std::unordered_set<unsigned int> *npc_id_set)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::__detail::_Node_const_iterator<unsigned int,true,false>::reference v5; // rax
  _DWORD *v6; // rdx
  std::unordered_set<unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-78h] BYREF
  std::unordered_set<unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-70h] BYREF
  const std::unordered_set<unsigned int> *__for_range; // [rsp+28h] [rbp-68h]
  char v10[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 10 npc_id:780";
  *(_QWORD *)(v2 + 16) = GCGWeekChallenge::deleteNpcFromWeightMap;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  __for_range = npc_id_set;
  __for_begin._M_cur = std::unordered_set<unsigned int>::begin(npc_id_set)._M_cur;
  __for_end._M_cur = std::unordered_set<unsigned int>::end(npc_id_set)._M_cur;
  while ( std::__detail::operator!=<unsigned int,false>(&__for_begin, &__for_end) )
  {
    v5 = std::__detail::_Node_const_iterator<unsigned int,true,false>::operator*(&__for_begin);
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    *(_DWORD *)(v2 + 32) = *v6;
    std::map<unsigned int,unsigned int>::erase(
      &this->free_character_npc_weight_map_,
      (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 32));
    std::map<unsigned int,unsigned int>::erase(
      &this->occupied_character_npc_weight_map_,
      (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 32));
    std::map<unsigned int,unsigned int>::erase(
      &this->free_normal_npc_weight_map_,
      (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 32));
    std::map<unsigned int,unsigned int>::erase(
      &this->occupied_normal_npc_weight_map_,
      (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 32));
    std::__detail::_Node_const_iterator<unsigned int,true,false>::operator++(&__for_begin);
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
};

// Line 790: range 00000000175BD31C-00000000175BD74A
int32_t __cdecl GCGWeekChallenge::randomSelectNpc(
        GCGWeekChallenge *const this,
        bool is_character_npc,
        uint32_t *select_npc_id)
{
  common::milog::MiLogStream *v3; // rbx
  unsigned int val; // [rsp+2Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v7; // [rsp+30h] [rbp-30h] BYREF

  if ( !is_character_npc )
  {
    if ( !std::map<unsigned int,unsigned int>::empty(&this->free_normal_npc_weight_map_) )
      goto LABEL_5;
    if ( !std::map<unsigned int,unsigned int>::empty(&this->free_character_npc_weight_map_) )
      goto LABEL_3;
    if ( !std::map<unsigned int,unsigned int>::empty(&this->occupied_normal_npc_weight_map_) )
      goto LABEL_9;
    if ( !std::map<unsigned int,unsigned int>::empty(&this->occupied_character_npc_weight_map_) )
      goto LABEL_7;
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/card_game/gcg_week_challenge.cpp",
      "randomSelectNpc",
      844);
    v3 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
           &v7,
           (const char (*)[41])"[GGC_WEEK] all npc weight is empty, uid:");
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    goto LABEL_12;
  }
  if ( std::map<unsigned int,unsigned int>::empty(&this->free_character_npc_weight_map_) )
  {
    if ( !std::map<unsigned int,unsigned int>::empty(&this->free_normal_npc_weight_map_) )
    {
LABEL_5:
      common::tools::RandomUtils::weightSelectOne<unsigned int,unsigned int>(
        &this->free_normal_npc_weight_map_,
        select_npc_id,
        0);
      std::map<unsigned int,unsigned int>::erase(&this->free_normal_npc_weight_map_, select_npc_id);
      return 0;
    }
    if ( !std::map<unsigned int,unsigned int>::empty(&this->occupied_character_npc_weight_map_) )
    {
LABEL_7:
      common::tools::RandomUtils::weightSelectOne<unsigned int,unsigned int>(
        &this->occupied_character_npc_weight_map_,
        select_npc_id,
        0);
      std::map<unsigned int,unsigned int>::erase(&this->occupied_character_npc_weight_map_, select_npc_id);
      return 0;
    }
    if ( !std::map<unsigned int,unsigned int>::empty(&this->occupied_normal_npc_weight_map_) )
    {
LABEL_9:
      common::tools::RandomUtils::weightSelectOne<unsigned int,unsigned int>(
        &this->occupied_normal_npc_weight_map_,
        select_npc_id,
        0);
      std::map<unsigned int,unsigned int>::erase(&this->occupied_normal_npc_weight_map_, select_npc_id);
      return 0;
    }
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/card_game/gcg_week_challenge.cpp",
      "randomSelectNpc",
      816);
    v3 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
           &v7,
           (const char (*)[41])"[GGC_WEEK] all npc weight is empty, uid:");
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
LABEL_12:
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &val);
    common::milog::MiLogStream::~MiLogStream(&v7);
    return -1;
  }
LABEL_3:
  common::tools::RandomUtils::weightSelectOne<unsigned int,unsigned int>(
    &this->free_character_npc_weight_map_,
    select_npc_id,
    0);
  std::map<unsigned int,unsigned int>::erase(&this->free_character_npc_weight_map_, select_npc_id);
  return 0;
};

// Line 852: range 00000000175BD74C-00000000175BDF07
const std::vector<unsigned int> *__fastcall GCGWeekChallenge::getCharacterNpcRefreshVec(
        const GCGWeekChallenge *const this,
        uint32_t config_gcg_level)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r14
  const std::vector<unsigned int> *v8; // r14
  std::vector<data::GCGWeekNpcRefreshConfig>::size_type v9; // r14
  std::vector<data::GCGWeekNpcRefreshConfig>::const_reference v10; // rax
  uint32_t weight; // r14d
  char *v12; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v13; // rax
  uint32_t *v14; // rdx
  char v15; // cl
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r14
  std::vector<data::GCGWeekNpcRefreshConfig>::size_type v21; // r14
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // r14
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // r14
  common::milog::MiLogStream *v29; // r14
  PlayerGCGComp *GCGComp; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // r14
  const std::vector<unsigned int> *result; // rax
  unsigned int Level; // [rsp+1Ch] [rbp-124h] BYREF
  unsigned __int64 val; // [rsp+20h] [rbp-120h] BYREF
  const GCGPlayingExcelConfigMgr *gcg_playing_config_mgr; // [rsp+28h] [rbp-118h]
  const data::GCGWeekRefreshExcelConfig *refresh_config_ptr; // [rsp+30h] [rbp-110h]
  const std::vector<unsigned int> *character_npc_refresh_list; // [rsp+38h] [rbp-108h]
  std::shared_ptr<Config> v43; // [rsp+40h] [rbp-100h] BYREF
  common::milog::MiLogStream v44; // [rsp+50h] [rbp-F0h] BYREF
  char v45[208]; // [rsp+70h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v45;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 4 24 select_refresh_index:865 48 4 9 index:861 64 4 20 config_gcg_level:851 80 48 21 refresh_weigt_map:860";
  *(_QWORD *)(v2 + 16) = GCGWeekChallenge::getCharacterNpcRefreshVec;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = 61956;
  v4[536862724] = -202116109;
  *(_DWORD *)(v2 + 64) = config_gcg_level;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v43);
  gcg_playing_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v43)->design_config.txt_config_mgr.gcg_playing_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v43);
  refresh_config_ptr = data::GCGPlayingExcelConfigMgrBase::findGCGWeekRefreshExcelConfig(
                         gcg_playing_config_mgr,
                         *(_DWORD *)(v2 + 64));
  if ( refresh_config_ptr )
  {
    std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v2 + 80));
    for ( *(_DWORD *)(v2 + 48) = 0; ; ++*(_DWORD *)(v2 + 48) )
    {
      v9 = *(unsigned int *)(v2 + 48);
      if ( v9 >= std::vector<data::GCGWeekNpcRefreshConfig>::size(&refresh_config_ptr->npc_refresh_list) )
        break;
      v10 = std::vector<data::GCGWeekNpcRefreshConfig>::operator[](
              &refresh_config_ptr->npc_refresh_list,
              *(unsigned int *)(v2 + 48));
      if ( *(_BYTE *)(((unsigned __int64)&v10->weight >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v10->weight >> 3) + 0x7FFF8000) <= 3 )
      {
        v10 = (std::vector<data::GCGWeekNpcRefreshConfig>::const_reference)__asan_report_load4(&v10->weight);
      }
      weight = v10->weight;
      v12 = (char *)(v2 + 48);
      v13 = std::map<unsigned int,unsigned int>::operator[](
              (std::map<unsigned int,unsigned int> *const)(v2 + 80),
              (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 48));
      v14 = v13;
      v15 = *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000);
      if ( v15 != 0 && (char)(((unsigned __int8)v13 & 7) + 3) >= v15 )
      {
        LOBYTE(v12) = v15 != 0;
        __asan_report_store4(v13, v12, v13);
      }
      *v14 = weight;
    }
    *(_DWORD *)(v2 + 32) = 0;
    if ( common::tools::RandomUtils::weightSelectOne<unsigned int,unsigned int>(
           (const std::map<unsigned int,unsigned int> *)(v2 + 80),
           (unsigned int *)(v2 + 32),
           0) )
    {
      common::milog::MiLogStream::create(
        &v44,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/card_game/gcg_week_challenge.cpp",
        "getCharacterNpcRefreshVec",
        868);
      v16 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
              &v44,
              (const char (*)[54])"[GCG_WEEK] weightSelectOne failed, refresh_weigt_map:");
      v17 = common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(
              v16,
              (const std::map<unsigned int,unsigned int> *)(v2 + 80));
      v18 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
              v17,
              (const char (*)[19])" config_gcg_level:");
      v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v2 + 64));
      v20 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v19, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      *(_DWORD *)(v2 + 48) = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v44);
      v8 = 0LL;
    }
    else
    {
      v21 = *(unsigned int *)(v2 + 32);
      if ( v21 < std::vector<data::GCGWeekNpcRefreshConfig>::size(&refresh_config_ptr->npc_refresh_list) )
      {
        common::milog::MiLogStream::create(
          &v44,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/card_game/gcg_week_challenge.cpp",
          "getCharacterNpcRefreshVec",
          878);
        v29 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                &v44,
                (const char (*)[29])"[GCG_WEEK] player gcg_level:");
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        GCGComp = Player::getGCGComp(this->player_);
        Level = PlayerGCGComp::getLevel(GCGComp);
        v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, &Level);
        v32 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                v31,
                (const char (*)[19])" config_gcg_level:");
        v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v32,
                (const unsigned int *)(v2 + 64));
        v34 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                v33,
                (const char (*)[23])" select_refresh_index:");
        v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v34,
                (const unsigned int *)(v2 + 32));
        v36 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v35, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        *(_DWORD *)(v2 + 48) = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v44);
        character_npc_refresh_list = &std::vector<data::GCGWeekNpcRefreshConfig>::operator[](
                                        &refresh_config_ptr->npc_refresh_list,
                                        *(unsigned int *)(v2 + 32))->character_npc_refresh_list;
        v8 = character_npc_refresh_list;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v44,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/card_game/gcg_week_challenge.cpp",
          "getCharacterNpcRefreshVec",
          874);
        v22 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                &v44,
                (const char (*)[33])"[GCG_WEEK] select_refresh_index:");
        v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v22,
                (const unsigned int *)(v2 + 32));
        v24 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                v23,
                (const char (*)[24])" npc_refresh_list size:");
        val = std::vector<data::GCGWeekNpcRefreshConfig>::size(&refresh_config_ptr->npc_refresh_list);
        v25 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v24, &val);
        v26 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                v25,
                (const char (*)[19])" config_gcg_level:");
        v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v26,
                (const unsigned int *)(v2 + 64));
        v28 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v27, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        *(_DWORD *)(v2 + 48) = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v44);
        v8 = 0LL;
      }
    }
    std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v2 + 80));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v44,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/card_game/gcg_week_challenge.cpp",
      "getCharacterNpcRefreshVec",
      857);
    v5 = common::milog::MiLogStream::operator<<<char [67],(char *[67])0>(
           &v44,
           (const char (*)[67])"[GCG_WEEK] findGCGWeekRefreshExcelConfig failed, config_gcg_level:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 64));
    v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v6, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    *(_DWORD *)(v2 + 48) = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v44);
    v8 = 0LL;
  }
  result = v8;
  if ( v45 == (char *)v2 )
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
  return result;
};

// Line 887: range 00000000175BDF08-00000000175BE2DC
void __cdecl GCGWeekChallenge::updateNpcQuestSet(GCGWeekChallenge *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  const GCGWeekNpcData *v4; // rax
  const GCGPlayingExcelConfigMgr *v5; // rcx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v9; // rax
  _DWORD *v10; // rdx
  std::vector<GCGWeekNpcData>::iterator __for_begin; // [rsp+18h] [rbp-E8h] BYREF
  std::vector<GCGWeekNpcData>::iterator __for_end; // [rsp+20h] [rbp-E0h] BYREF
  std::vector<unsigned int>::const_iterator __for_begin_0; // [rsp+28h] [rbp-D8h] BYREF
  std::vector<unsigned int>::const_iterator __for_end_0; // [rsp+30h] [rbp-D0h] BYREF
  const GCGPlayingExcelConfigMgr *gcg_playing_config_mgr; // [rsp+38h] [rbp-C8h]
  std::vector<GCGWeekNpcData> *__for_range; // [rsp+40h] [rbp-C0h]
  const GCGWeekNpcData *npc_data; // [rsp+48h] [rbp-B8h]
  const data::GCGWeekLevelExcelConfig *config_ptr; // [rsp+50h] [rbp-B0h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+58h] [rbp-A8h]
  std::shared_ptr<Config> v20; // [rsp+60h] [rbp-A0h] BYREF
  common::milog::MiLogStream v21; // [rsp+70h] [rbp-90h] BYREF
  char v22[112]; // [rsp+90h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 12 quest_id:898";
  *(_QWORD *)(v1 + 16) = GCGWeekChallenge::updateNpcQuestSet;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  std::unordered_set<unsigned int>::clear(&this->npc_quest_set_);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v20);
  gcg_playing_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20)->design_config.txt_config_mgr.gcg_playing_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v20);
  __for_range = &this->npc_data_vec_;
  __for_begin._M_current = std::vector<GCGWeekNpcData>::begin(&this->npc_data_vec_)._M_current;
  __for_end._M_current = std::vector<GCGWeekNpcData>::end(&this->npc_data_vec_)._M_current;
  while ( __gnu_cxx::operator!=<GCGWeekNpcData *,std::vector<GCGWeekNpcData>>(&__for_begin, &__for_end) )
  {
    v4 = __gnu_cxx::__normal_iterator<GCGWeekNpcData *,std::vector<GCGWeekNpcData>>::operator*(&__for_begin);
    npc_data = v4;
    v5 = gcg_playing_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v4);
    }
    config_ptr = data::GCGPlayingExcelConfigMgrBase::findGCGWeekLevelExcelConfig(v5, npc_data->npc_id);
    if ( config_ptr )
    {
      __for_range_0 = &config_ptr->cond_quest_list;
      __for_begin_0._M_current = std::vector<unsigned int>::begin(&config_ptr->cond_quest_list)._M_current;
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
        *(_DWORD *)(v1 + 32) = *v10;
        std::unordered_set<unsigned int>::insert(
          &this->npc_quest_set_,
          (const std::unordered_set<unsigned int>::value_type *)(v1 + 32));
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin_0);
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/card_game/gcg_week_challenge.cpp",
        "updateNpcQuestSet",
        895);
      v6 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
             &v21,
             (const char (*)[55])"[GCG_WEEK] findGCGWeekLevelExcelConfig fails, npc_id: ");
      v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &npc_data->npc_id);
      v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v7, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      *(_DWORD *)(v1 + 32) = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v1 + 32));
      common::milog::MiLogStream::~MiLogStream(&v21);
    }
    __gnu_cxx::__normal_iterator<GCGWeekNpcData *,std::vector<GCGWeekNpcData>>::operator++(&__for_begin);
  }
  if ( v22 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 906: range 00000000175BE2DE-00000000175BE43F
void __cdecl GCGWeekChallenge::onOpenStateChange(GCGWeekChallenge *const this, const OpenStateChangeEvent *event)
{
  common::milog::MiLogStream *v2; // rbx
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v4; // [rsp+20h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&event->key >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->key >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->key);
  }
  if ( event->key == 3308 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->value >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->value >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&event->value);
    }
    if ( event->value )
    {
      GCGWeekChallenge::refreshNpcInfo(this);
      common::milog::MiLogStream::create(
        &v4,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/card_game/gcg_week_challenge.cpp",
        "onOpenStateChange",
        911);
      v2 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
             &v4,
             (const char (*)[55])"[GCG_WEEK] OPEN_STATE_GCG_WEEK_CHALLENGE is open, uid:");
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
      common::milog::MiLogStream::~MiLogStream(&v4);
    }
  }
};

// Line 916: range 00000000175BE440-00000000175BE66A
void __cdecl GCGWeekChallenge::onQuestStateChangeEvent(
        GCGWeekChallenge *const this,
        const QuestStateChangeEvent *event)
{
  GCGTavernSceneBuilder *TavernSceneBuilder; // rax
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rbx
  unsigned int val; // [rsp+14h] [rbp-3Ch] BYREF
  PlayerGCGComp *gcg_comp; // [rsp+18h] [rbp-38h]
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&event->quest_state >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->quest_state >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&event->quest_state);
  }
  if ( event->quest_state == 2 )
    goto LABEL_15;
  if ( *(_BYTE *)(((unsigned __int64)&event->old_quest_state >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->old_quest_state >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->old_quest_state);
  }
  if ( event->old_quest_state == 2 )
  {
LABEL_15:
    if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
           &this->npc_quest_set_,
           &event->quest_id) )
    {
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      gcg_comp = Player::getGCGComp(this->player_);
      TavernSceneBuilder = PlayerGCGComp::getTavernSceneBuilder(gcg_comp);
      GCGTavernSceneBuilder::broadNpcInfo(TavernSceneBuilder);
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/card_game/gcg_week_challenge.cpp",
        "onQuestStateChangeEvent",
        926);
      v3 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
             &v12,
             (const char (*)[46])"[GCG_WEEK] onQuestStateChangeEvent, quest_id:");
      v4 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &event->quest_id);
      v5 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v4, (const char (*)[14])" quest_state:");
      v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &event->quest_state);
      v7 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v6, (const char (*)[18])" old_quest_state:");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &event->old_quest_state);
      v9 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v8, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
      common::milog::MiLogStream::~MiLogStream(&v12);
    }
  }
};

// Line 932: range 00000000175BE66C-00000000175BE980
__int64 __fastcall GCGWeekChallenge::getRefreshDays(const GCGWeekChallenge *const this, uint32_t config_refresh_days)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r14
  __int64 result; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  unsigned int *v12; // rax
  unsigned int *v13; // rdx
  unsigned int val; // [rsp+1Ch] [rbp-B4h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 48 4 26 refresh_start_week_day:933 64 4 23 config_refresh_days:931";
  *(_QWORD *)(v2 + 16) = GCGWeekChallenge::getRefreshDays;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  *(_DWORD *)(v2 + 64) = config_refresh_days;
  *(_DWORD *)(v2 + 48) = GCGWeekChallenge::getRefreshStartWeekDay(this);
  if ( *(_DWORD *)(v2 + 48) <= 7u )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/card_game/gcg_week_challenge.cpp",
      "getRefreshDays",
      940);
    v9 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
           &v15,
           (const char (*)[35])"[GCG_WEEK] refresh_start_week_day:");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
    v11 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
            v10,
            (const char (*)[22])" config_refresh_days:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 64));
    common::milog::MiLogStream::~MiLogStream(&v15);
    val = 8 - *(_DWORD *)(v2 + 48);
    v12 = (unsigned int *)std::min<unsigned int>((const unsigned int *)(v2 + 64), &val);
    v13 = v12;
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
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/card_game/gcg_week_challenge.cpp",
      "getRefreshDays",
      937);
    v5 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v15,
           (const char (*)[43])"[GCG_WEEK] invalid refresh_start_week_day:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v6, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = *(unsigned int *)(v2 + 64);
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

// Line 945: range 00000000175BE982-00000000175BEE39
uint32_t __cdecl GCGWeekChallenge::getRefreshStartWeekDay(const GCGWeekChallenge *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rbx
  uint32_t result; // eax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  unsigned int val; // [rsp+10h] [rbp-C0h] BYREF
  uint32_t refresh_time; // [rsp+14h] [rbp-BCh]
  uint32_t time_offset; // [rsp+18h] [rbp-B8h]
  uint32_t now; // [rsp+1Ch] [rbp-B4h]
  std::shared_ptr<Config> v19; // [rsp+20h] [rbp-B0h] BYREF
  common::milog::MiLogStream v20; // [rsp+30h] [rbp-A0h] BYREF
  char v21[128]; // [rsp+50h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 4 20 gcg_release_time:948 48 4 20 release_week_day:962 64 4 20 refresh_week_day:963";
  *(_QWORD *)(v1 + 16) = GCGWeekChallenge::getRefreshStartWeekDay;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556924;
  v3[536862722] = -202116348;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v19);
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19);
  time_offset = ConstValueExcelConfigMgr::getTimeOffsetSec(&v4->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v19);
  now = common::tools::TimeUtils::getNow();
  *(_DWORD *)(v1 + 32) = GCGWeekChallenge::getGCGReleaseTime(this);
  if ( !*(_DWORD *)(v1 + 32) || !common::tools::TimeUtils::isSameWeek(*(unsigned int *)(v1 + 32), now, time_offset) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/card_game/gcg_week_challenge.cpp",
      "getRefreshStartWeekDay",
      952);
    v6 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
           &v20,
           (const char (*)[52])"[GCG_WEEK] now not same week with gcg_release_time:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v1 + 32));
    v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v7, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
LABEL_11:
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream(&v20);
    result = 1;
    goto LABEL_27;
  }
  refresh_time = now;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->last_refresh_time_);
  }
  if ( this->last_refresh_time_ && common::tools::TimeUtils::isSameWeek(this->last_refresh_time_, now, time_offset) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3)
                                                         + 0x7FFF8000) )
    {
      __asan_report_load4(&this->last_refresh_time_);
    }
    refresh_time = this->last_refresh_time_;
  }
  *(_DWORD *)(v1 + 48) = common::tools::TimeUtils::getTimeWeekDay(*(unsigned int *)(v1 + 32), time_offset);
  *(_DWORD *)(v1 + 64) = common::tools::TimeUtils::getTimeWeekDay(refresh_time, time_offset);
  if ( *(_DWORD *)(v1 + 64) < *(_DWORD *)(v1 + 48) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/card_game/gcg_week_challenge.cpp",
      "getRefreshStartWeekDay",
      967);
    v11 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
            &v20,
            (const char (*)[25])"[GCG_WEEK] cur_week_day:");
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v1 + 64));
    v13 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v12, (const char (*)[19])" release_week_day:");
    v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v1 + 48));
    v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v14, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    goto LABEL_11;
  }
  result = *(_DWORD *)(v1 + 48);
LABEL_27:
  if ( v21 == (char *)v1 )
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
  return result;
};

// Line 975: range 00000000175BEE3A-00000000175BEEE4
uint32_t __cdecl GCGWeekChallenge::getGCGReleaseTime(const GCGWeekChallenge *const this)
{
  uint32_t GCGReleaseTime; // ebx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  std::shared_ptr<Config> v4[2]; // [rsp+10h] [rbp-20h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->gcg_release_gm_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gcg_release_gm_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->gcg_release_gm_time_);
  }
  if ( this->gcg_release_gm_time_ )
    return this->gcg_release_gm_time_;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v4);
  v2 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v4);
  GCGReleaseTime = ConstValueExcelConfigMgr::getGCGReleaseTime(&v2->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(v4);
  return GCGReleaseTime;
};

// Line 986: range 00000000175BEEE6-00000000175BEFAA
uint32_t __cdecl GCGWeekChallenge::getFinishNpcCount(const GCGWeekChallenge *const this)
{
  uint32_t *p_finish_time; // rax
  uint32_t finish_count; // [rsp+1Ch] [rbp-24h]
  std::vector<GCGWeekNpcData>::const_iterator __for_begin; // [rsp+20h] [rbp-20h] BYREF
  std::vector<GCGWeekNpcData>::const_iterator __for_end; // [rsp+28h] [rbp-18h] BYREF
  const std::vector<GCGWeekNpcData> *__for_range; // [rsp+30h] [rbp-10h]
  const GCGWeekNpcData *npc_data; // [rsp+38h] [rbp-8h]

  finish_count = 0;
  __for_range = &this->npc_data_vec_;
  __for_begin._M_current = std::vector<GCGWeekNpcData>::begin(&this->npc_data_vec_)._M_current;
  __for_end._M_current = std::vector<GCGWeekNpcData>::end(&this->npc_data_vec_)._M_current;
  while ( __gnu_cxx::operator!=<GCGWeekNpcData const*,std::vector<GCGWeekNpcData>>(&__for_begin, &__for_end) )
  {
    npc_data = __gnu_cxx::__normal_iterator<GCGWeekNpcData const*,std::vector<GCGWeekNpcData>>::operator*(&__for_begin);
    p_finish_time = &npc_data->finish_time;
    if ( *(_BYTE *)(((unsigned __int64)p_finish_time >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_finish_time & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_finish_time >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(p_finish_time);
    }
    if ( npc_data->finish_time )
      ++finish_count;
    __gnu_cxx::__normal_iterator<GCGWeekNpcData const*,std::vector<GCGWeekNpcData>>::operator++(&__for_begin);
  }
  return finish_count;
};

// Line 999: range 00000000175BEFAC-00000000175BF30D
void __cdecl GCGWeekChallenge::logChallengeFinish(
        GCGWeekChallenge *const this,
        uint32_t npc_id,
        uint32_t level_id,
        uint32_t total_npc_count,
        uint32_t refresh_time)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGcgFinishWeekChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGcgFinishWeekChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGcgFinishWeekChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  uint32_t FinishNpcCount; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGcgFinishWeekChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGcgFinishWeekChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  Player *player; // r14
  std::string v16; // [rsp+0h] [rbp-100h]
  uint32_t refresh_timea; // [rsp+8h] [rbp-F8h]
  google::protobuf::uint32 total_npc_counta; // [rsp+Ch] [rbp-F4h]
  google::protobuf::uint32 level_ida; // [rsp+10h] [rbp-F0h]
  google::protobuf::uint32 npc_ida; // [rsp+14h] [rbp-ECh]
  const GCGWeekChallenge *thisa; // [rsp+18h] [rbp-E8h]
  uint32_t finish_npc_count; // [rsp+2Ch] [rbp-D4h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+30h] [rbp-D0h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+40h] [rbp-C0h] BYREF
  std::string v25; // [rsp+50h] [rbp-B0h] BYREF
  char v26[144]; // [rsp+70h] [rbp-90h] BYREF

  *(&v16._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  HIDWORD(v16._anon_0._M_allocated_capacity) = npc_id;
  *(_DWORD *)v16._anon_0._M_local_buf = level_id;
  HIDWORD(v16._M_string_length) = total_npc_count;
  LODWORD(v16._M_string_length) = refresh_time;
  v5 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 1 11 holder:1000 64 16 12 log_ptr:1001";
  *(_QWORD *)(v5 + 16) = GCGWeekChallenge::logChallengeFinish;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234753551;
  v7[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  BasicComp = Player::getBasicComp(this->player_);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v25, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 48), 0xEBAu, v16);
  std::string::~string(&v25);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyGcgFinishWeekChallenge>();
  v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyGcgFinishWeekChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGcgFinishWeekChallenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
  proto_log::PlayerLogBodyGcgFinishWeekChallenge::set_npc_id(v9, npc_ida);
  v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyGcgFinishWeekChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGcgFinishWeekChallenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
  proto_log::PlayerLogBodyGcgFinishWeekChallenge::set_level_id(v10, level_ida);
  v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyGcgFinishWeekChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGcgFinishWeekChallenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
  proto_log::PlayerLogBodyGcgFinishWeekChallenge::set_total_npc_count(v11, total_npc_counta);
  if ( total_npc_counta )
    FinishNpcCount = GCGWeekChallenge::getFinishNpcCount(thisa);
  else
    FinishNpcCount = 0;
  finish_npc_count = FinishNpcCount;
  v13 = std::__shared_ptr_access<proto_log::PlayerLogBodyGcgFinishWeekChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGcgFinishWeekChallenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
  proto_log::PlayerLogBodyGcgFinishWeekChallenge::set_finish_npc_count(v13, finish_npc_count);
  v14 = std::__shared_ptr_access<proto_log::PlayerLogBodyGcgFinishWeekChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGcgFinishWeekChallenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
  proto_log::PlayerLogBodyGcgFinishWeekChallenge::set_refresh_time(v14, refresh_timea);
  if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
    __asan_report_load8(thisa);
  player = thisa->player_;
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyGcgFinishWeekChallenge,void>(
    &p_body_ptr,
    (const std::shared_ptr<proto_log::PlayerLogBodyGcgFinishWeekChallenge> *)(v5 + 64));
  Player::printStatLog(player, &p_body_ptr, &p_body_ext_ptr, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
  std::shared_ptr<proto_log::PlayerLogBodyGcgFinishWeekChallenge>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyGcgFinishWeekChallenge> *const)(v5 + 64));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 48));
  if ( v26 == (char *)v5 )
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

// Line 1012: range 00000000175BF30E-00000000175BF43B
// local variable allocation has failed, the output may be wrong!
void __cdecl GCGWeekChallenge::setGCGReleaseTimeByGM(GCGWeekChallenge *const this, uint32_t gcg_release_time)
{
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rbx
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v6; // [rsp+20h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->gcg_release_gm_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gcg_release_gm_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gcg_release_gm_time_, *(_QWORD *)&gcg_release_time, &this->gcg_release_gm_time_);
  }
  this->gcg_release_gm_time_ = gcg_release_time;
  common::milog::MiLogStream::create(
    &v6,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/card_game/gcg_week_challenge.cpp",
    "setGCGReleaseTimeByGM",
    1014);
  v2 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
         &v6,
         (const char (*)[32])"[GCG_WEEK] gcg_release_gm_time:");
  v3 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &this->gcg_release_gm_time_);
  v4 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v3, (const char (*)[6])" uid:");
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
  common::milog::MiLogStream::~MiLogStream(&v6);
};

// Line 1018: range 00000000175BF43C-00000000175BF55C
int32_t __cdecl GCGWeekChallenge::getGMRefreshStartWeekDay(const GCGWeekChallenge *const this)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rax
  uint32_t time_offset; // [rsp+18h] [rbp-18h]
  uint32_t now; // [rsp+1Ch] [rbp-14h]
  std::shared_ptr<Config> v6; // [rsp+20h] [rbp-10h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v6);
  v1 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v6);
  time_offset = ConstValueExcelConfigMgr::getTimeOffsetSec(&v1->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v6);
  now = common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)&this->gm_refresh_start_week_day_set_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gm_refresh_start_week_day_set_time_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->gm_refresh_start_week_day_set_time_);
  }
  if ( !this->gm_refresh_start_week_day_set_time_
    || !common::tools::TimeUtils::isSameWeek(this->gm_refresh_start_week_day_set_time_, now, time_offset) )
  {
    return 0;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->gm_refresh_start_week_day_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gm_refresh_start_week_day_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->gm_refresh_start_week_day_);
  }
  return this->gm_refresh_start_week_day_;
};

// Line 1029: range 00000000175BF55E-00000000175BF6EF
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl GCGWeekChallenge::setRefreshStartWeekDayByGM(GCGWeekChallenge *const this, int32_t week_day)
{
  uint32_t Now; // edi
  __int64 v3; // rdx
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rbx
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->gm_refresh_start_week_day_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gm_refresh_start_week_day_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gm_refresh_start_week_day_, *(_QWORD *)&week_day, &this->gm_refresh_start_week_day_);
  }
  this->gm_refresh_start_week_day_ = week_day;
  Now = common::tools::TimeUtils::getNow();
  v3 = (*(_BYTE *)(((unsigned __int64)&this->gm_refresh_start_week_day_set_time_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gm_refresh_start_week_day_set_time_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
  {
    Now = (_DWORD)this + 300;
    __asan_report_store4(&this->gm_refresh_start_week_day_set_time_, (((_BYTE)this + 44) & 7u) + 3, v3);
  }
  this->gm_refresh_start_week_day_set_time_ = Now;
  GCGWeekChallenge::tryUnlockNpc(this, 1);
  common::milog::MiLogStream::create(
    &v10,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/card_game/gcg_week_challenge.cpp",
    "setRefreshStartWeekDayByGM",
    1033);
  v4 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
         &v10,
         (const char (*)[38])"[GCG_WEEK] gm_refresh_start_week_day:");
  v5 = common::milog::MiLogStream::operator<<<int,(int *)0>(v4, &this->gm_refresh_start_week_day_);
  v6 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v5, (const char (*)[6])" uid:");
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
  common::milog::MiLogStream::~MiLogStream(&v10);
  return 0;
};

// Line 1038: range 00000000175BF6F0-00000000175BF759
int32_t __cdecl GCGWeekChallenge::refreshNpcInfoByGM(GCGWeekChallenge *const this)
{
  __int64 v1; // rdx

  v1 = (*(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v1 )
    __asan_report_store4(&this->last_refresh_time_, (((_BYTE)this + 4) & 7u) + 3, v1);
  this->last_refresh_time_ = 0;
  GCGWeekChallenge::refreshNpcInfo(this);
  return 0;
};
