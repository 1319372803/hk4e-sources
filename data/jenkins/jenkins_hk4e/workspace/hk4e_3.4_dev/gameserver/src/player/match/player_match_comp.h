// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/match/player_match_comp.h

// Line 23: range 0000000017483E16-000000001748407D
void __cdecl MatchInfo::MatchInfo(MatchInfo *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1, this);
  }
  this->match_type = MATCH_TYPE_NONE;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->match_begin_time >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->match_begin_time >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store4(&this->match_begin_time, v2, v3);
  this->match_begin_time = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->estimate_match_cost_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->estimate_match_cost_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->estimate_match_cost_time, v2, &this->estimate_match_cost_time);
  }
  this->estimate_match_cost_time = 0;
  v4 = (((_BYTE)this + 12) & 7u) + 3;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store4(&this->dungeon_id, v4, v5);
  this->dungeon_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->mp_play_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mp_play_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->mp_play_id, v4, &this->mp_play_id);
  }
  this->mp_play_id = 0;
  v6 = (((_BYTE)this + 20) & 7u) + 3;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->mechanicus_difficult_level >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->mechanicus_difficult_level >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store4(&this->mechanicus_difficult_level, v6, v7);
  this->mechanicus_difficult_level = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->matchserver_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->matchserver_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->matchserver_id, v6, &this->matchserver_id);
  }
  this->matchserver_id = 0;
  v8 = (((_BYTE)this + 28) & 7u) + 3;
  v9 = (*(_BYTE *)(((unsigned __int64)&this->last_sync_succ_time >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_sync_succ_time >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_store4(&this->last_sync_succ_time, v8, v9);
  this->last_sync_succ_time = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->match_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->match_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->match_id, v8, &this->match_id);
  }
  this->match_id = 0;
  std::vector<unsigned int>::vector(&this->match_param_vec);
};

// Line 23: range 0000000017D85EC4-0000000017D86344
void __cdecl MatchInfo::MatchInfo(MatchInfo *const this, const MatchInfo *a2)
{
  proto::MatchType match_type; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t match_begin_time; // ecx
  char v6; // dl
  __int64 v7; // rdx
  uint32_t estimate_match_cost_time; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t dungeon_id; // ecx
  char v12; // dl
  __int64 v13; // rdx
  uint32_t mp_play_id; // ecx
  char v15; // al
  __int64 v16; // rsi
  uint32_t mechanicus_difficult_level; // ecx
  char v18; // dl
  __int64 v19; // rdx
  uint32_t matchserver_id; // ecx
  char v21; // al
  __int64 v22; // rsi
  uint32_t last_sync_succ_time; // ecx
  char v24; // dl
  __int64 v25; // rdx
  uint32_t match_id; // ecx
  char v27; // al
  const MatchInfo *v28; // [rsp+0h] [rbp-10h]

  v28 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  match_type = a2->match_type;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2, this);
  }
  this->match_type = match_type;
  v4 = (((_BYTE)v28 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v28->match_begin_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v28 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v28->match_begin_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v28->match_begin_time);
  }
  match_begin_time = v28->match_begin_time;
  v6 = *(_BYTE *)(((unsigned __int64)&this->match_begin_time >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store4(&this->match_begin_time, v4, v7);
  this->match_begin_time = match_begin_time;
  if ( *(_BYTE *)(((unsigned __int64)&v28->estimate_match_cost_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v28->estimate_match_cost_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v28->estimate_match_cost_time);
  }
  estimate_match_cost_time = v28->estimate_match_cost_time;
  v9 = *(_BYTE *)(((unsigned __int64)&this->estimate_match_cost_time >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v4) = v9 != 0;
    __asan_report_store4(&this->estimate_match_cost_time, v4, &this->estimate_match_cost_time);
  }
  this->estimate_match_cost_time = estimate_match_cost_time;
  v10 = (((_BYTE)v28 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v28->dungeon_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v28 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v28->dungeon_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v28->dungeon_id);
  }
  dungeon_id = v28->dungeon_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000);
  LOBYTE(v10) = v12 != 0;
  v13 = (v12 != 0) & (unsigned __int8)((char)((((_BYTE)this + 12) & 7) + 3) >= v12);
  if ( (_BYTE)v13 )
    __asan_report_store4(&this->dungeon_id, v10, v13);
  this->dungeon_id = dungeon_id;
  if ( *(_BYTE *)(((unsigned __int64)&v28->mp_play_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v28->mp_play_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v28->mp_play_id);
  }
  mp_play_id = v28->mp_play_id;
  v15 = *(_BYTE *)(((unsigned __int64)&this->mp_play_id >> 3) + 0x7FFF8000);
  if ( v15 != 0 && v15 <= 3 )
  {
    LOBYTE(v10) = v15 != 0;
    __asan_report_store4(&this->mp_play_id, v10, &this->mp_play_id);
  }
  this->mp_play_id = mp_play_id;
  v16 = (((_BYTE)v28 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v28->mechanicus_difficult_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v28 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v28->mechanicus_difficult_level >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v28->mechanicus_difficult_level);
  }
  mechanicus_difficult_level = v28->mechanicus_difficult_level;
  v18 = *(_BYTE *)(((unsigned __int64)&this->mechanicus_difficult_level >> 3) + 0x7FFF8000);
  LOBYTE(v16) = v18 != 0;
  v19 = (v18 != 0) & (unsigned __int8)((char)((((_BYTE)this + 20) & 7) + 3) >= v18);
  if ( (_BYTE)v19 )
    __asan_report_store4(&this->mechanicus_difficult_level, v16, v19);
  this->mechanicus_difficult_level = mechanicus_difficult_level;
  if ( *(_BYTE *)(((unsigned __int64)&v28->matchserver_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v28->matchserver_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v28->matchserver_id);
  }
  matchserver_id = v28->matchserver_id;
  v21 = *(_BYTE *)(((unsigned __int64)&this->matchserver_id >> 3) + 0x7FFF8000);
  if ( v21 != 0 && v21 <= 3 )
  {
    LOBYTE(v16) = v21 != 0;
    __asan_report_store4(&this->matchserver_id, v16, &this->matchserver_id);
  }
  this->matchserver_id = matchserver_id;
  v22 = (((_BYTE)v28 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v28->last_sync_succ_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v28 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v28->last_sync_succ_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v28->last_sync_succ_time);
  }
  last_sync_succ_time = v28->last_sync_succ_time;
  v24 = *(_BYTE *)(((unsigned __int64)&this->last_sync_succ_time >> 3) + 0x7FFF8000);
  LOBYTE(v22) = v24 != 0;
  v25 = (v24 != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= v24);
  if ( (_BYTE)v25 )
    __asan_report_store4(&this->last_sync_succ_time, v22, v25);
  this->last_sync_succ_time = last_sync_succ_time;
  if ( *(_BYTE *)(((unsigned __int64)&v28->match_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v28->match_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v28->match_id);
  }
  match_id = v28->match_id;
  v27 = *(_BYTE *)(((unsigned __int64)&this->match_id >> 3) + 0x7FFF8000);
  if ( v27 != 0 && v27 <= 3 )
  {
    LOBYTE(v22) = v27 != 0;
    __asan_report_store4(&this->match_id, v22, &this->match_id);
  }
  this->match_id = match_id;
  std::vector<unsigned int>::vector(&this->match_param_vec, &v28->match_param_vec);
};

// Line 23: range 000000001748407E-000000001748409C
void __cdecl MatchInfo::~MatchInfo(MatchInfo *const this)
{
  std::vector<unsigned int>::~vector(&this->match_param_vec);
};

// Line 38: range 0000000017D85DB4-0000000017D85E8F
void __cdecl MatchPunish::MatchPunish(MatchPunish *const this)
{
  __int64 v1; // rdx
  __int64 v2; // rdx
  __int64 v3; // rdx

  v1 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7)
                                                                                              + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
  if ( (_BYTE)v1 )
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3, v1);
  this->match_id = 0;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->punish_times >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->punish_times >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store4(&this->punish_times, (((_BYTE)this + 4) & 7u) + 3, v2);
  this->punish_times = 0;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->punish_end_time >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->punish_end_time >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store4(&this->punish_end_time, (((_BYTE)this + 8) & 7u) + 3, v3);
  this->punish_end_time = 0;
};

// Line 47: range 0000000017F532F0-0000000017F5336F
void __cdecl PlayerMatchComp::~PlayerMatchComp(PlayerMatchComp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlayerMatchComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_PlayerCompBase = v2;
  std::map<unsigned int,MatchPunish>::~map(&this->match_punish_map_);
  PlayerUnixTimer::~PlayerUnixTimer(&this->match_sync_timer_);
  MatchInfo::~MatchInfo(&this->match_info_);
  PlayerCompBase::~PlayerCompBase(this);
};

// Line 47: range 0000000017F53370-0000000017F5339A
void __cdecl PlayerMatchComp::~PlayerMatchComp(PlayerMatchComp *const this)
{
  PlayerMatchComp::~PlayerMatchComp(this);
  operator delete(this, 0xF0uLL);
};

// Line 50: range 000000001721404D-0000000017214057
uint32_t __cdecl PlayerMatchComp::getType()
{
  return 32;
};

// Line 53: range 00000000174840D6-0000000017484327
void __cdecl ZN15PlayerMatchCompCI214PlayerCompBaseER6Player(PlayerMatchComp *const this, Player *a2)
{
  int (**v2)(...); // rdx
  PlayerMatchComp **v3; // r8
  const std::_Placeholder<1> *v4; // r9
  __int64 v5; // rdx
  PlayerMatchComp *v6; // [rsp+18h] [rbp-78h] BYREF
  PlayerPtr p_player_ptr; // [rsp+20h] [rbp-70h] BYREF
  void (*__f[2])(PlayerMatchComp *, unsigned __int64); // [rsp+30h] [rbp-60h] BYREF
  std::_Bind_helper<false,void (PlayerMatchComp::*)(long unsigned int),PlayerMatchComp*,const std::_Placeholder<1>&>::type p___f; // [rsp+40h] [rbp-50h] BYREF
  std::function<void(long unsigned int)> p_callback; // [rsp+60h] [rbp-30h] BYREF

  PlayerCompBase::PlayerCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'PlayerMatchComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_PlayerCompBase = v2;
  MatchInfo::MatchInfo(&this->match_info_);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  toPtr<Player,Player>((Player *)&p_player_ptr);
  v6 = this;
  __f[0] = (void (*)(PlayerMatchComp *, unsigned __int64))PlayerMatchComp::onMatchSyncTimer;
  __f[1] = 0LL;
  std::bind<void (PlayerMatchComp::*)(unsigned long),PlayerMatchComp*,std::_Placeholder<1> const&>(
    &p___f,
    __f,
    &v6,
    (const std::_Placeholder<1> *)&std::placeholders::_1,
    v3,
    v4);
  std::function<void ()(unsigned long)>::function<std::_Bind<void (PlayerMatchComp::*)(unsigned long) ()(PlayerMatchComp*,std::_Placeholder<1>)>,void,void>(
    &p_callback,
    &p___f);
  PlayerUnixTimer::PlayerUnixTimer(&this->match_sync_timer_, &p_player_ptr, &p_callback);
  std::function<void ()(unsigned long)>::~function(&p_callback);
  std::shared_ptr<Player>::~shared_ptr(&p_player_ptr);
  std::map<unsigned int,MatchPunish>::map(&this->match_punish_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_punish_refresh_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_punish_refresh_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_punish_refresh_time_, &p_player_ptr, &this->last_punish_refresh_time_);
  }
  this->last_punish_refresh_time_ = 0;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->last_general_match_succ_time_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_general_match_succ_time_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store4(&this->last_general_match_succ_time_, (((_BYTE)this - 20) & 7u) + 3, v5);
  this->last_general_match_succ_time_ = 0;
};

// Line 70: range 00000000131DFBB8-00000000131DFC04
bool __cdecl PlayerMatchComp::isInMatch(const PlayerMatchComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->match_info_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->match_info_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->match_info_);
  }
  return this->match_info_.match_type != MATCH_TYPE_NONE;
};

// Line 368: range 0000000014F77D3A-0000000014F77D81
uint32_t __cdecl PlayerMatchComp::getMatchMpPlayId(const PlayerMatchComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->match_info_.mp_play_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->match_info_.mp_play_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->match_info_.mp_play_id);
  }
  return this->match_info_.mp_play_id;
};

// Line 3762: range 000000001690A3F2-000000001690A439
uint32_t __cdecl PlayerMatchComp::getMatchServerId(const PlayerMatchComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->match_info_.matchserver_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->match_info_.matchserver_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->match_info_.matchserver_id);
  }
  return this->match_info_.matchserver_id;
};
