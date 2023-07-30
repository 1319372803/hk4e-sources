// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/dungeon/dungeon_candidate_team.h

// Line 23: range 0000000015810BE4-0000000015810C0C
DungeonCandidateTeamAvatar *__cdecl DungeonCandidateTeamAvatar::operator=(
        DungeonCandidateTeamAvatar *const this,
        const DungeonCandidateTeamAvatar *a2)
{
  std::weak_ptr<Avatar>::operator=(&this->avatar_wtr_, &a2->avatar_wtr_);
  return this;
};

// Line 23: range 00000000158B79F2-00000000158B7A17
void __cdecl DungeonCandidateTeamAvatar::DungeonCandidateTeamAvatar(
        DungeonCandidateTeamAvatar *const this,
        const DungeonCandidateTeamAvatar *a2)
{
  std::weak_ptr<Avatar>::weak_ptr(&this->avatar_wtr_, &a2->avatar_wtr_);
};

// Line 32: range 00000000155C44B6-00000000155C44CF
void __cdecl DungeonCandidateTeamAvatar::resetAvatarInfo(DungeonCandidateTeamAvatar *const this)
{
  std::__weak_ptr<Avatar,(__gnu_cxx::_Lock_policy)2>::reset(&this->avatar_wtr_);
};

// Line 36: range 00000000155C44D0-00000000155C451A
AvatarPtr __cdecl DungeonCandidateTeamAvatar::getAvatarPtr(DungeonCandidateTeamAvatar *const this)
{
  AvatarPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::weak_ptr<Avatar>::lock(&this->avatar_wtr_);
  result._M_ptr = (std::__shared_ptr<Avatar,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 38: range 00000000155C451C-00000000155C4535
void __cdecl DungeonCandidateTeamAvatar::resetAvatarWtrGM(DungeonCandidateTeamAvatar *const this)
{
  DungeonCandidateTeamAvatar::resetAvatarInfo(this);
};

// Line 44: range 00000000155C49D4-00000000155C4A79
void __cdecl DungeonCandidateTeamPlayer::DungeonCandidateTeamPlayer(DungeonCandidateTeamPlayer *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->player_uid_ = 0;
  std::weak_ptr<Player>::weak_ptr(&this->player_wtr_);
  std::vector<DungeonCandidateTeamAvatar>::vector(&this->avatar_vec_);
  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->state_);
  }
  this->state_ = DUNGEON_CANDIDATE_TEAM_PLAYER_STATE_IDLE;
};

// Line 44: range 000000001579CC80-000000001579CDCF
void __cdecl DungeonCandidateTeamPlayer::DungeonCandidateTeamPlayer(
        DungeonCandidateTeamPlayer *const this,
        const DungeonCandidateTeamPlayer *a2)
{
  uint32_t player_uid; // ecx
  proto::DungeonCandidateTeamPlayerState state; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  player_uid = a2->player_uid_;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->player_uid_ = player_uid;
  std::weak_ptr<Player>::weak_ptr(&this->player_wtr_, &a2->player_wtr_);
  std::vector<DungeonCandidateTeamAvatar>::vector(&this->avatar_vec_, &a2->avatar_vec_);
  if ( *(_BYTE *)(((unsigned __int64)&a2->state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->state_);
  }
  state = a2->state_;
  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->state_);
  }
  this->state_ = state;
};

// Line 44: range 00000000155C4A7A-00000000155C4AA8
void __cdecl DungeonCandidateTeamPlayer::~DungeonCandidateTeamPlayer(DungeonCandidateTeamPlayer *const this)
{
  std::vector<DungeonCandidateTeamAvatar>::~vector(&this->avatar_vec_);
  std::weak_ptr<Player>::~weak_ptr(&this->player_wtr_);
};

// Line 47: range 00000000155C4536-00000000155C4578
uint32_t __cdecl DungeonCandidateTeamPlayer::getPlayerUid(DungeonCandidateTeamPlayer *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  return this->player_uid_;
};

// Line 48: range 00000000155C457A-00000000155C45C8
PlayerPtr __cdecl DungeonCandidateTeamPlayer::getPlayerPtr(DungeonCandidateTeamPlayer *const this)
{
  PlayerPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)this);
  result._M_ptr = (std::__shared_ptr<Player,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 65: range 00000000155C45CA-00000000155C4617
bool __cdecl DungeonCandidateTeamPlayer::isReady(DungeonCandidateTeamPlayer *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->state_);
  }
  return this->state_ == DUNGEON_CANDIDATE_TEAM_PLAYER_STATE_READY;
};

// Line 66: range 00000000155C4618-00000000155C4665
void __cdecl DungeonCandidateTeamPlayer::setState(
        DungeonCandidateTeamPlayer *const this,
        proto::DungeonCandidateTeamPlayerState state)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->state_);
  }
  this->state_ = state;
};

// Line 67: range 00000000155C4666-00000000155C46AD
proto::DungeonCandidateTeamPlayerState __cdecl DungeonCandidateTeamPlayer::getState(
        DungeonCandidateTeamPlayer *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->state_);
  }
  return this->state_;
};

// Line 73: range 00000000155C46AE-00000000155C46CB
uint32_t __cdecl DungeonCandidateTeamPlayer::getAllSlotCount(DungeonCandidateTeamPlayer *const this)
{
  return std::vector<DungeonCandidateTeamAvatar>::size(&this->avatar_vec_);
};

// Line 83: range 00000000155C46CC-00000000155C46E9
void __cdecl DungeonCandidateTeamPlayer::resetPlayerWtrGM(DungeonCandidateTeamPlayer *const this)
{
  std::__weak_ptr<Player,(__gnu_cxx::_Lock_policy)2>::reset(&this->player_wtr_);
};

// Line 94: range 0000000015856736-0000000015856811
void __cdecl DungeonCandidateInvitePlayer::DungeonCandidateInvitePlayer(DungeonCandidateInvitePlayer *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->player_uid = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->state);
  }
  this->state = DUNGEON_CANDIDATE_TEAM_INVITE_STATE_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->invite_sec >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->invite_sec >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->invite_sec);
  }
  this->invite_sec = 0;
};

// Line 103: range 00000000155C4908-00000000155C495F
void __cdecl DungeonCandidateInviteInfo::DungeonCandidateInviteInfo(DungeonCandidateInviteInfo *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->vaild_sec_ = 0;
  std::unordered_map<unsigned int,DungeonCandidateInvitePlayer>::unordered_map(&this->invite_map_);
};

// Line 103: range 000000001666E56A-000000001666E602
void __cdecl DungeonCandidateInviteInfo::DungeonCandidateInviteInfo(
        DungeonCandidateInviteInfo *const this,
        const DungeonCandidateInviteInfo *a2)
{
  uint32_t vaild_sec; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  vaild_sec = a2->vaild_sec_;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->vaild_sec_ = vaild_sec;
  std::unordered_map<unsigned int,DungeonCandidateInvitePlayer>::unordered_map(&this->invite_map_, &a2->invite_map_);
};

// Line 103: range 00000000155C4960-00000000155C497E
void __cdecl DungeonCandidateInviteInfo::~DungeonCandidateInviteInfo(DungeonCandidateInviteInfo *const this)
{
  std::unordered_map<unsigned int,DungeonCandidateInvitePlayer>::~unordered_map(&this->invite_map_);
};

// Line 112: range 00000000131D865C-00000000131D869E
uint32_t __cdecl DungeonCandidateInviteInfo::getVaildSec(DungeonCandidateInviteInfo *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  return this->vaild_sec_;
};

// Line 121: range 000000001666E604-000000001666E85D
void __cdecl DungeonCandidateTeam::DungeonCandidateTeam(
        DungeonCandidateTeam *const this,
        const DungeonCandidateTeam *a2)
{
  uint32_t dungeon_id; // ecx
  uint32_t entry_point_id; // ecx
  uint32_t match_type; // ecx
  uint32_t player_limit; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  dungeon_id = a2->dungeon_id_;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->dungeon_id_ = dungeon_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->entry_point_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->entry_point_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->entry_point_id_);
  }
  entry_point_id = a2->entry_point_id_;
  if ( *(_BYTE *)(((unsigned __int64)&this->entry_point_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->entry_point_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->entry_point_id_);
  }
  this->entry_point_id_ = entry_point_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->match_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->match_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->match_type_);
  }
  match_type = a2->match_type_;
  if ( *(_BYTE *)(((unsigned __int64)&this->match_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->match_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->match_type_);
  }
  this->match_type_ = match_type;
  if ( *(_BYTE *)(((unsigned __int64)&a2->player_limit_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->player_limit_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->player_limit_);
  }
  player_limit = a2->player_limit_;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_limit_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->player_limit_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->player_limit_);
  }
  this->player_limit_ = player_limit;
  std::list<DungeonCandidateTeamPlayer>::list(&this->player_list_, &a2->player_list_);
  DungeonCandidateInviteInfo::DungeonCandidateInviteInfo(&this->invite_info_, &a2->invite_info_);
};

// Line 163: range 00000000131D86A0-00000000131D8703
bool __cdecl DungeonCandidateTeam::isFull(const DungeonCandidateTeam *const this)
{
  uint32_t PlayerCount; // ecx

  PlayerCount = DungeonCandidateTeam::getPlayerCount(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_limit_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->player_limit_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->player_limit_);
  }
  return PlayerCount >= this->player_limit_;
};

// Line 165: range 00000000131D8722-00000000131D8733
DungeonCandidateInviteInfo *__cdecl DungeonCandidateTeam::getInviteInfo(DungeonCandidateTeam *const this)
{
  return &this->invite_info_;
};

// Line 165: range 00000000131D8704-00000000131D8721
uint32_t __cdecl DungeonCandidateTeam::getPlayerCount(const DungeonCandidateTeam *const this)
{
  return std::list<DungeonCandidateTeamPlayer>::size(&this->player_list_);
};

// Line 169: range 00000000131D8734-00000000131D8776
uint32_t __cdecl DungeonCandidateTeam::getDungeonId(const DungeonCandidateTeam *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  return this->dungeon_id_;
};

// Line 170: range 00000000131D8778-00000000131D87C7
uint32_t __cdecl DungeonCandidateTeam::getEntryPointId(const DungeonCandidateTeam *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->entry_point_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->entry_point_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->entry_point_id_);
  }
  return this->entry_point_id_;
};

// Line 174: range 00000000131D87C8-00000000131D880F
bool __cdecl DungeonCandidateTeam::isVaild(DungeonCandidateTeam *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  return this->dungeon_id_ != 0;
};
