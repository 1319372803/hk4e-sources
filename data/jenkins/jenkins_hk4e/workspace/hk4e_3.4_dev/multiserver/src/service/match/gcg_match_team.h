// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/service/match/gcg_match_team.h

// Line 19: range 000000000E0EE574-000000000E0EE5E3
void __cdecl GCGMatchTeam::~GCGMatchTeam(GCGMatchTeam *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGMatchTeam + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  proto::OnlinePlayerInfo::~OnlinePlayerInfo(&this->ai_info_);
  std::set<unsigned int>::~set(&this->confirm_uid_set_);
  MatchTeam::~MatchTeam(this);
};

// Line 32: range 000000000DF3E58C-000000000DF3E941
void __cdecl GCGMatchTeam::GCGMatchTeam(GCGMatchTeam *const this)
{
  int (**v1)(...); // rdx

  MatchTeam::MatchTeam(this);
  v1 = (int (**)(...))(&`vtable for'GCGMatchTeam + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  if ( *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->match_id_);
  }
  this->match_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->team_status_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->team_status_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->team_status_);
  }
  this->team_status_ = GCG_TEAM_INVALID;
  if ( *(_BYTE *)(((unsigned __int64)&this->min_player_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->min_player_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->min_player_num_);
  }
  this->min_player_num_ = 2;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_player_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_player_num_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_player_num_);
  }
  this->max_player_num_ = 2;
  if ( *(_BYTE *)(((unsigned __int64)&this->confirm_begin_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->confirm_begin_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->confirm_begin_time_);
  }
  this->confirm_begin_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->confirm_timeout_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->confirm_timeout_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->confirm_timeout_);
  }
  this->confirm_timeout_ = 60;
  if ( *(_BYTE *)(((unsigned __int64)&this->ai_confirm_timeout_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->ai_confirm_timeout_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->ai_confirm_timeout_);
  }
  this->ai_confirm_timeout_ = 2;
  if ( *(_BYTE *)(((unsigned __int64)&this->rank_idx_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->rank_idx_ >> 3) + 0x7FFF8000) )
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
  std::set<unsigned int>::set(&this->confirm_uid_set_);
  if ( *(char *)(((unsigned __int64)&this->is_match_ai_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_match_ai_);
  this->is_match_ai_ = 0;
  proto::OnlinePlayerInfo::OnlinePlayerInfo(&this->ai_info_);
  if ( *(char *)(((unsigned __int64)&this->is_internal_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_internal_);
  this->is_internal_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_ai_confirm_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 41) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_ai_confirm_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_ai_confirm_);
  }
  this->is_ai_confirm_ = 0;
};

// Line 57: range 000000000D8309A0-000000000D8309F5
bool __cdecl GCGMatchTeam::isInMatch(GCGMatchTeam *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->team_status_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->team_status_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->team_status_);
  }
  return this->team_status_ == GCG_TEAM_MATCH;
};

// Line 60: range 000000000D8309F6-000000000D830A4B
bool __cdecl GCGMatchTeam::isInConfirm(GCGMatchTeam *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->team_status_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->team_status_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->team_status_);
  }
  return this->team_status_ == GCG_TEAM_CONFIRM;
};

// Line 66: range 000000000D830A4C-000000000D830A9F
void __cdecl GCGMatchTeam::setStatusInvalid(GCGMatchTeam *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->team_status_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->team_status_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->team_status_);
  }
  this->team_status_ = GCG_TEAM_INVALID;
};

// Line 91: range 000000000DF3E942-000000000DF3E989
uint32_t __cdecl GCGMatchTeam::getMatchId(const GCGMatchTeam *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->match_id_);
  }
  return this->match_id_;
};
