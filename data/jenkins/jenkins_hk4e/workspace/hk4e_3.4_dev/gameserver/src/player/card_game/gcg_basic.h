// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/card_game/gcg_basic.h

// Line 34: range 000000001542BA42-000000001542BC35
void __cdecl GCGMatchData::GCGMatchData(GCGMatchData *const this)
{
  __int64 v1; // rdx
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rdx

  v1 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7)
                                                                                              + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
  if ( (_BYTE)v1 )
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3, v1);
  this->match_id = 0;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store4(&this->score, (((_BYTE)this + 4) & 7u) + 3, v2);
  this->score = 0;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->win_streak_count >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->win_streak_count >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store4(&this->win_streak_count, (((_BYTE)this + 8) & 7u) + 3, v3);
  this->win_streak_count = 0;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->lose_streak_count >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->lose_streak_count >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->lose_streak_count, (((_BYTE)this + 12) & 7u) + 3, v4);
  this->lose_streak_count = 0;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->refuse_count >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->refuse_count >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store4(&this->refuse_count, (((_BYTE)this + 16) & 7u) + 3, v5);
  this->refuse_count = 0;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->punish_end_time >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->punish_end_time >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store4(&this->punish_end_time, (((_BYTE)this + 20) & 7u) + 3, v6);
  this->punish_end_time = 0;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->version >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->version >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store4(&this->version, (((_BYTE)this + 24) & 7u) + 3, v7);
  this->version = 0;
};

// Line 41: range 0000000013EBEC92-0000000013EBECD9
uint32_t __cdecl GCGBasic::getBanMatchExpireTime(const GCGBasic *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ban_match_expire_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->ban_match_expire_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->ban_match_expire_time_);
  }
  return this->ban_match_expire_time_;
};

// Line 48: range 00000000176B164E-00000000176B167C
void __cdecl GCGBasic::~GCGBasic(GCGBasic *const this)
{
  std::map<unsigned int,GCGMatchData>::~map(&this->match_data_map_);
  std::set<unsigned int>::~set(&this->level_reward_taken_set_);
};

// Line 52: range 0000000017214B0C-0000000017214CF6
void __cdecl GCGBasic::GCGBasic(GCGBasic *const this, Player *player)
{
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, player);
  this->player_ = player;
  if ( *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->exp_, player, &this->exp_);
  }
  this->exp_ = 0;
  v2 = (((_BYTE)this + 12) & 7u) + 3;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store4(&this->level_, v2, v3);
  this->level_ = 0;
  std::set<unsigned int>::set(&this->level_reward_taken_set_);
  std::map<unsigned int,GCGMatchData>::map(&this->match_data_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->invite_uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->invite_uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->invite_uid_, v2, &this->invite_uid_);
  }
  this->invite_uid_ = 0;
  v4 = (((_BYTE)this + 116) & 7u) + 3;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->invite_time_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->invite_time_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store4(&this->invite_time_, v4, v5);
  this->invite_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->ban_match_expire_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->ban_match_expire_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->ban_match_expire_time_, v4, &this->ban_match_expire_time_);
  }
  this->ban_match_expire_time_ = 0;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->ban_invite_expire_time_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->ban_invite_expire_time_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store4(&this->ban_invite_expire_time_, (((_BYTE)this + 124) & 7u) + 3, v6);
  this->ban_invite_expire_time_ = 0;
};

// Line 69: range 00000000176B12CC-00000000176B131B
uint32_t __cdecl GCGBasic::getLevel(const GCGBasic *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->level_);
  }
  return this->level_;
};

// Line 126: range 0000000013EBECDA-0000000013EBED28
// local variable allocation has failed, the output may be wrong!
void __cdecl GCGBasic::setBanMatchExpireTime(GCGBasic *const this, uint32_t ban_match_expire_time__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ban_match_expire_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->ban_match_expire_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(
      &this->ban_match_expire_time_,
      *(_QWORD *)&ban_match_expire_time__out,
      &this->ban_match_expire_time_);
  }
  this->ban_match_expire_time_ = ban_match_expire_time__out;
};

// Line 127: range 0000000013EBED2A-0000000013EBED79
uint32_t __cdecl GCGBasic::getBanInviteExpireTime(const GCGBasic *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ban_invite_expire_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->ban_invite_expire_time_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&this->ban_invite_expire_time_);
  }
  return this->ban_invite_expire_time_;
};

// Line 127: range 0000000013EBED7A-0000000013EBEDD0
void __cdecl GCGBasic::setBanInviteExpireTime(GCGBasic *const this, uint32_t ban_invite_expire_time__out)
{
  __int64 v2; // rdx

  v2 = (*(_BYTE *)(((unsigned __int64)&this->ban_invite_expire_time_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->ban_invite_expire_time_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store4(&this->ban_invite_expire_time_, (((_BYTE)this + 124) & 7u) + 3, v2);
  this->ban_invite_expire_time_ = ban_invite_expire_time__out;
};
