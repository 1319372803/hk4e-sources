// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/card_game/gcg_level_challenge.h

// Line 41: range 000000001543043E-0000000015430495
void __cdecl GCGLevelData::GCGLevelData(GCGLevelData *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1, this);
  }
  this->level_id = 0;
  std::set<unsigned int>::set(&this->finished_challenge_set);
};

// Line 41: range 00000000153666C2-00000000153666E0
void __cdecl GCGLevelData::~GCGLevelData(GCGLevelData *const this)
{
  std::set<unsigned int>::~set(&this->finished_challenge_set);
};

// Line 52: range 00000000154305E8-000000001543063F
void __cdecl GCGBossChallengeData::GCGBossChallengeData(GCGBossChallengeData *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1, this);
  }
  this->id = 0;
  std::set<unsigned int>::set(&this->unlock_level_id_set);
};

// Line 62: range 00000000176B17A8-00000000176B180A
void __cdecl GCGLevelChallenge::~GCGLevelChallenge(GCGLevelChallenge *const this)
{
  std::set<unsigned int>::~set(&this->win_level_id_set_);
  std::map<unsigned int,unsigned int>::~map(&this->guide_level_group_map_);
  std::map<unsigned int,GCGBossChallengeData>::~map(&this->unlock_boss_challenge_map_);
  std::set<unsigned int>::~set(&this->unlock_world_challenge_set_);
  std::map<unsigned int,GCGLevelData>::~map(&this->level_map_);
};

// Line 66: range 0000000017214D68-0000000017214EBC
void __cdecl GCGLevelChallenge::GCGLevelChallenge(GCGLevelChallenge *const this, Player *player)
{
  __int64 v2; // rsi
  __int64 v3; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, player);
  this->player_ = player;
  std::map<unsigned int,GCGLevelData>::map(&this->level_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->pre_config_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->pre_config_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->pre_config_id_, player, &this->pre_config_id_);
  }
  this->pre_config_id_ = 0;
  v2 = (((_BYTE)this + 60) & 7u) + 3;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->pre_level_id_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->pre_level_id_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store4(&this->pre_level_id_, v2, v3);
  this->pre_level_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->pre_level_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->pre_level_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->pre_level_type_, v2, &this->pre_level_type_);
  }
  this->pre_level_type_ = GCG_LEVEL_NONE;
  std::set<unsigned int>::set(&this->unlock_world_challenge_set_);
  std::map<unsigned int,GCGBossChallengeData>::map(&this->unlock_boss_challenge_map_);
  std::map<unsigned int,unsigned int>::map(&this->guide_level_group_map_);
  std::set<unsigned int>::set(&this->win_level_id_set_);
};

// Line 83: range 0000000015190BC0-0000000015190C96
// local variable allocation has failed, the output may be wrong!
void __cdecl GCGLevelChallenge::recordPreLevelInfo(
        GCGLevelChallenge *const this,
        uint32_t config_id,
        uint32_t level_id,
        proto::GCGLevelType level_type)
{
  __int64 v4; // rsi
  __int64 v5; // rdx

  if ( *(_BYTE *)(((unsigned __int64)&this->pre_config_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->pre_config_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->pre_config_id_, *(_QWORD *)&config_id, &this->pre_config_id_);
  }
  this->pre_config_id_ = config_id;
  v4 = (((_BYTE)this + 60) & 7u) + 3;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->pre_level_id_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->pre_level_id_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store4(&this->pre_level_id_, v4, v5);
  this->pre_level_id_ = level_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->pre_level_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->pre_level_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->pre_level_type_, v4, &this->pre_level_type_);
  }
  this->pre_level_type_ = level_type;
};

// Line 105: range 00000000176B138C-00000000176B145D
bool __fastcall GCGLevelChallenge::isLevelHasWin(GCGLevelChallenge *const this, uint32_t level_id)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 12 level_id:105";
  *(_QWORD *)(v2 + 16) = GCGLevelChallenge::isLevelHasWin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = level_id;
  result = common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
             &this->win_level_id_set_,
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

// Line 107: range 00000000176B145E-00000000176B152F
void __fastcall GCGLevelChallenge::recordLevelwin(GCGLevelChallenge *const this, uint32_t level_id)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 12 level_id:107";
  *(_QWORD *)(v2 + 16) = GCGLevelChallenge::recordLevelwin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = level_id;
  std::set<unsigned int>::emplace<unsigned int &>(
    &this->win_level_id_set_,
    (unsigned int *)(v2 + 32),
    (unsigned int *)(v2 + 32));
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

// Line 116: range 0000000017D71626-0000000017D71643
void __cdecl GCGLevelChallenge::onGMLevelChallengeClear(GCGLevelChallenge *const this)
{
  std::map<unsigned int,GCGLevelData>::clear(&this->level_map_);
};

// Line 129: range 0000000015366744-0000000015366762
void __cdecl GCGBossChallengeData::~GCGBossChallengeData(GCGBossChallengeData *const this)
{
  std::set<unsigned int>::~set(&this->unlock_level_id_set);
};
