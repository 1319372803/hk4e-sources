// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/avatar/avatar_team.h

// Line 17: range 0000000017216EAA-0000000017216F05
void __cdecl AvatarTeam::AvatarTeam(AvatarTeam *const this)
{
  __int64 v1; // rsi

  std::vector<unsigned long>::vector(&this->avatar_vec_);
  std::string::basic_string(&this->team_name_);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_cur_avatar_guid_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->last_cur_avatar_guid_, v1);
  this->last_cur_avatar_guid_ = 0LL;
};

// Line 17: range 00000000173D777C-00000000173D7816
void __cdecl AvatarTeam::AvatarTeam(AvatarTeam *const this, AvatarTeam *a2)
{
  std::string *p_team_name; // rsi
  uint64_t last_cur_avatar_guid; // rdx

  std::vector<unsigned long>::vector(&this->avatar_vec_, &a2->avatar_vec_);
  p_team_name = &a2->team_name_;
  std::string::basic_string(&this->team_name_, p_team_name);
  if ( *(_BYTE *)(((unsigned __int64)&a2->last_cur_avatar_guid_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->last_cur_avatar_guid_);
  last_cur_avatar_guid = a2->last_cur_avatar_guid_;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_cur_avatar_guid_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->last_cur_avatar_guid_, p_team_name);
  this->last_cur_avatar_guid_ = last_cur_avatar_guid;
};

// Line 17: range 0000000017216F06-0000000017216F30
void __cdecl AvatarTeam::~AvatarTeam(AvatarTeam *const this)
{
  std::string::~string(&this->team_name_);
  std::vector<unsigned long>::~vector(&this->avatar_vec_);
};

// Line 21: range 000000001720F9C4-000000001720FA07
void __cdecl AvatarTeam::setLastCurAvatarGuid(AvatarTeam *const this, uint64_t last_cur_avatar_guid__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->last_cur_avatar_guid_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->last_cur_avatar_guid_, last_cur_avatar_guid__out);
  this->last_cur_avatar_guid_ = last_cur_avatar_guid__out;
};

// Line 25: range 00000000155B6A10-00000000155B6A1D
std::vector<long unsigned int> *__cdecl AvatarTeam::getAvatarVec(AvatarTeam *const this)
{
  return &this->avatar_vec_;
};

// Line 26: range 000000001720FA08-000000001720FA15
const std::vector<long unsigned int> *__cdecl AvatarTeam::getAvatarVec(const AvatarTeam *const this)
{
  return &this->avatar_vec_;
};

// Line 27: range 000000001720FA16-000000001720FA27
const std::string *__cdecl AvatarTeam::getTeamName[abi:cxx11](const AvatarTeam *const this)
{
  return &this->team_name_;
};

// Line 479: range 00000000131D8DEA-00000000131D8E12
void __cdecl AvatarTeam::setTeamName(AvatarTeam *const this, const std::string *name)
{
  std::string::operator=(&this->team_name_, name);
};

// Line 15802: range 000000001720F988-000000001720F9C2
uint64_t __cdecl AvatarTeam::getLastCurAvatarGuid(const AvatarTeam *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->last_cur_avatar_guid_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->last_cur_avatar_guid_);
  return this->last_cur_avatar_guid_;
};
