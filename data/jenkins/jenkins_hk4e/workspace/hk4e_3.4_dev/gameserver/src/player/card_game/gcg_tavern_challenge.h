// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/card_game/gcg_tavern_challenge.h

// Line 35: range 0000000017215000-000000001721515B
void __cdecl GCGTavernInfo::GCGTavernInfo(GCGTavernInfo *const this)
{
  __int64 v1; // rdx
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rdx

  v1 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7)
                                                                                              + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
  if ( (_BYTE)v1 )
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3, v1);
  this->character_id = 0;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store4(&this->level_id, (((_BYTE)this + 4) & 7u) + 3, v2);
  this->level_id = 0;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->point_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->point_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store4(&this->point_id, (((_BYTE)this + 8) & 7u) + 3, v3);
  this->point_id = 0;
  v4 = ((_BYTE)this + 12) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->is_owner_in_duel >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->is_owner_in_duel >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->is_owner_in_duel, v4, v5);
  this->is_owner_in_duel = 0;
  v6 = ((_BYTE)this + 13) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->is_last_duel_win >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->is_last_duel_win >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->is_last_duel_win, v6, v7);
  this->is_last_duel_win = 0;
};

// Line 50: range 000000001783CB5A-000000001783CBB1
void __cdecl GCGTavernChallengeData::GCGTavernChallengeData(GCGTavernChallengeData *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1, this);
  }
  this->character_id = 0;
  std::set<unsigned int>::set(&this->unlock_level_id_set);
};

// Line 50: range 00000000177E7566-00000000177E7584
void __cdecl GCGTavernChallengeData::~GCGTavernChallengeData(GCGTavernChallengeData *const this)
{
  std::set<unsigned int>::~set(&this->unlock_level_id_set);
};

// Line 60: range 00000000176B16E2-00000000176B1700
void __cdecl GCGTavernChallenge::~GCGTavernChallenge(GCGTavernChallenge *const this)
{
  std::map<unsigned int,GCGTavernChallengeData>::~map(&this->tavern_challenge_map_);
};

// Line 64: range 0000000017215194-00000000172151F2
void __cdecl GCGTavernChallenge::GCGTavernChallenge(GCGTavernChallenge *const this, Player *player)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, player);
  this->player_ = player;
  GCGTavernInfo::GCGTavernInfo(&this->tavern_info_);
  std::map<unsigned int,GCGTavernChallengeData>::map(&this->tavern_challenge_map_);
};

// Line 102: range 00000000176AF836-00000000176AF84F
void __cdecl GCGTavernChallenge::onEnterOtherGame(GCGTavernChallenge *const this)
{
  GCGTavernChallenge::clearTavernInfo(this);
};

// Line 105: range 00000000176AF850-00000000176AF869
void __cdecl GCGTavernChallenge::onCondQuestStart(GCGTavernChallenge *const this)
{
  GCGTavernChallenge::clearTavernInfo(this);
};

// Line 107: range 00000000176AF86A-00000000176AF883
void __cdecl GCGTavernChallenge::onLoginNotInGame(GCGTavernChallenge *const this)
{
  GCGTavernChallenge::clearTavernInfo(this);
};

// Line 109: range 00000000176AF884-00000000176AF8A8
void __cdecl GCGTavernChallenge::onSettle(GCGTavernChallenge *const this, bool is_win)
{
  GCGTavernChallenge::enterStateCharacterStand(this, is_win);
};
