// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/service/match/general_match_team.h

// Line 17: range 000000000DDE86EE-000000000DDE875D
void __cdecl GeneralMatchTeam::~GeneralMatchTeam(GeneralMatchTeam *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GeneralMatchTeam + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  std::set<unsigned int>::~set(&this->confirm_uid_set_);
  std::set<unsigned int>::~set(&this->param_set_);
  MatchTeam::~MatchTeam(this);
};

// Line 29: range 000000000D830C1A-000000000D830E53
void __cdecl GeneralMatchTeam::GeneralMatchTeam(GeneralMatchTeam *const this)
{
  int (**v1)(...); // rdx

  MatchTeam::MatchTeam(this);
  v1 = (int (**)(...))(&`vtable for'GeneralMatchTeam + 2);
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
  this->team_status_ = GENERAL_TEAM_INVALID;
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
  this->max_player_num_ = 4;
  if ( *(_BYTE *)(((unsigned __int64)&this->confirm_begin_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->confirm_begin_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->confirm_begin_time_);
  }
  this->confirm_begin_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->target_param_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->target_param_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->target_param_);
  }
  this->target_param_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->confirm_timeout_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->confirm_timeout_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->confirm_timeout_);
  }
  this->confirm_timeout_ = 60;
  std::set<unsigned int>::set(&this->param_set_);
  std::set<unsigned int>::set(&this->confirm_uid_set_);
};

// Line 52: range 000000000D830E54-000000000D830EA9
bool __cdecl GeneralMatchTeam::isInMatch(GeneralMatchTeam *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->team_status_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->team_status_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->team_status_);
  }
  return this->team_status_ == GENERAL_TEAM_MATCH;
};

// Line 55: range 000000000D830EAA-000000000D830EFF
bool __cdecl GeneralMatchTeam::isInConfirm(GeneralMatchTeam *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->team_status_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->team_status_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->team_status_);
  }
  return this->team_status_ == GENERAL_TEAM_CONFIRM;
};

// Line 61: range 000000000D830F00-000000000D830F53
void __cdecl GeneralMatchTeam::setStatusInvalid(GeneralMatchTeam *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->team_status_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->team_status_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->team_status_);
  }
  this->team_status_ = GENERAL_TEAM_INVALID;
};

// Line 81: range 000000000D830F54-000000000D830F9B
uint32_t __cdecl GeneralMatchTeam::getMatchId(const GeneralMatchTeam *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->match_id_);
  }
  return this->match_id_;
};

// Line 83: range 000000000D830F9C-000000000D830FE3
uint32_t __cdecl GeneralMatchTeam::getMinPlayerNum(const GeneralMatchTeam *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->min_player_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->min_player_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->min_player_num_);
  }
  return this->min_player_num_;
};
