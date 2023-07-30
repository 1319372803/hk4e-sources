// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_team.h

// Line 23: range 0000000015ED1A5E-0000000015ED1B70
SceneTeamAvatar *__cdecl SceneTeamAvatar::operator=(SceneTeamAvatar *const this, SceneTeamAvatar *a2)
{
  uint32_t uid; // ecx
  char v3; // al
  uint64_t avatar_guid; // rdx
  SceneTeamAvatar *v6; // [rsp+0h] [rbp-10h]

  v6 = a2;
  common::milog::DescribalBase::operator=(this, a2);
  if ( *(_BYTE *)(((unsigned __int64)&v6->uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v6->uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  uid = a2->uid_;
  v3 = *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000);
  LOBYTE(a2) = v3 != 0;
  if ( v3 != 0 && v3 <= 3 )
    __asan_report_store4(&this->uid_, a2, (_BYTE)this + 8);
  this->uid_ = uid;
  if ( *(_BYTE *)(((unsigned __int64)&v6->avatar_guid_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  avatar_guid = v6->avatar_guid_;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_guid_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->avatar_guid_, a2);
  this->avatar_guid_ = avatar_guid;
  std::weak_ptr<Avatar>::operator=(&this->avatar_wtr, &v6->avatar_wtr);
  return this;
};

// Line 23: range 0000000015E49380-0000000015E49492
SceneTeamAvatar *__cdecl SceneTeamAvatar::operator=(SceneTeamAvatar *const this, const SceneTeamAvatar *a2)
{
  uint32_t uid; // ecx
  char v3; // al
  uint64_t avatar_guid; // rdx
  const SceneTeamAvatar *v6; // [rsp+0h] [rbp-10h]

  v6 = a2;
  common::milog::DescribalBase::operator=(this, a2);
  if ( *(_BYTE *)(((unsigned __int64)&v6->uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v6->uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  uid = a2->uid_;
  v3 = *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000);
  LOBYTE(a2) = v3 != 0;
  if ( v3 != 0 && v3 <= 3 )
    __asan_report_store4(&this->uid_, a2, (_BYTE)this + 8);
  this->uid_ = uid;
  if ( *(_BYTE *)(((unsigned __int64)&v6->avatar_guid_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  avatar_guid = v6->avatar_guid_;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_guid_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->avatar_guid_, a2);
  this->avatar_guid_ = avatar_guid;
  std::weak_ptr<Avatar>::operator=(&this->avatar_wtr, &v6->avatar_wtr);
  return this;
};

// Line 23: range 0000000015F09A66-0000000015F09BA8
void __cdecl SceneTeamAvatar::SceneTeamAvatar(SceneTeamAvatar *const this, SceneTeamAvatar *a2)
{
  int (**v2)(...); // rdx
  uint32_t uid; // ecx
  char v4; // al
  uint64_t avatar_guid; // rdx
  SceneTeamAvatar *v6; // [rsp+0h] [rbp-10h]

  v6 = a2;
  common::milog::DescribalBase::DescribalBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'SceneTeamAvatar + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_DescribalBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  uid = a2->uid_;
  v4 = *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000);
  LOBYTE(a2) = v4 != 0;
  if ( v4 != 0 && v4 <= 3 )
    __asan_report_store4(&this->uid_, a2, (_BYTE)this + 8);
  this->uid_ = uid;
  if ( *(_BYTE *)(((unsigned __int64)&v6->avatar_guid_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  avatar_guid = v6->avatar_guid_;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_guid_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->avatar_guid_, a2);
  this->avatar_guid_ = avatar_guid;
  std::weak_ptr<Avatar>::weak_ptr(&this->avatar_wtr, &v6->avatar_wtr);
};

// Line 23: range 0000000015E1186E-0000000015E118BF
void __cdecl SceneTeamAvatar::~SceneTeamAvatar(SceneTeamAvatar *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'SceneTeamAvatar + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  std::weak_ptr<Avatar>::~weak_ptr(&this->avatar_wtr);
};

// Line 27: range 0000000015D33B92-0000000015D33C6F
// local variable allocation has failed, the output may be wrong!
void __cdecl SceneTeamAvatar::SceneTeamAvatar(
        SceneTeamAvatar *const this,
        uint32_t uid,
        uint64_t avatar_guid,
        AvatarPtr *p_avatar_ptr)
{
  int (**v4)(...); // rdx

  common::milog::DescribalBase::DescribalBase(this);
  v4 = (int (**)(...))(&`vtable for'SceneTeamAvatar + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&uid);
  this->_vptr_DescribalBase = v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->uid_, *(_QWORD *)&uid, (_BYTE)this + 8);
  }
  this->uid_ = uid;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_guid_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->avatar_guid_, *(_QWORD *)&uid);
  this->avatar_guid_ = avatar_guid;
  std::weak_ptr<Avatar>::weak_ptr<Avatar,void>(&this->avatar_wtr, p_avatar_ptr);
};

// Line 32: range 0000000015D33C70-0000000015D33CBE
AvatarPtr __cdecl SceneTeamAvatar::getAvatar(const SceneTeamAvatar *const this)
{
  __int64 v1; // rsi
  AvatarPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v1);
  result = std::weak_ptr<Avatar>::lock((const std::weak_ptr<Avatar> *const)this);
  result._M_ptr = (std::__shared_ptr<Avatar,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 34: range 0000000015D33CC0-0000000015D33D07
uint32_t __cdecl SceneTeamAvatar::getPlayerUid(const SceneTeamAvatar *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return this->uid_;
};

// Line 35: range 0000000015D33D08-0000000015D33D42
uint64_t __cdecl SceneTeamAvatar::getAvatarGuid(const SceneTeamAvatar *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_guid_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return this->avatar_guid_;
};

// Line 35: range 0000000015DDCC42-0000000015DDCD84
void __cdecl SceneTeamAvatar::SceneTeamAvatar(SceneTeamAvatar *const this, const SceneTeamAvatar *a2)
{
  int (**v2)(...); // rdx
  uint32_t uid; // ecx
  char v4; // al
  uint64_t avatar_guid; // rdx
  const SceneTeamAvatar *v6; // [rsp+0h] [rbp-10h]

  v6 = a2;
  common::milog::DescribalBase::DescribalBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'SceneTeamAvatar + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_DescribalBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  uid = a2->uid_;
  v4 = *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000);
  LOBYTE(a2) = v4 != 0;
  if ( v4 != 0 && v4 <= 3 )
    __asan_report_store4(&this->uid_, a2, (_BYTE)this + 8);
  this->uid_ = uid;
  if ( *(_BYTE *)(((unsigned __int64)&v6->avatar_guid_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  avatar_guid = v6->avatar_guid_;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_guid_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->avatar_guid_, a2);
  this->avatar_guid_ = avatar_guid;
  std::weak_ptr<Avatar>::weak_ptr(&this->avatar_wtr, &v6->avatar_wtr);
};

// Line 40: range 0000000015F0A154-0000000015F0A2B1
void __cdecl SceneTeam::SceneTeam(SceneTeam *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  bool v3; // dl
  __int64 v4; // rsi
  __int64 v5; // rdx

  std::enable_shared_from_this<SceneTeam>::enable_shared_from_this(this);
  std::vector<unsigned int>::vector(&this->player_uid_vec_);
  std::unordered_map<unsigned int,std::weak_ptr<Player>>::unordered_map(&this->player_wtr_map_);
  std::unordered_map<unsigned int,std::vector<SceneTeamAvatar>>::unordered_map(&this->team_avatar_map_);
  if ( *(char *)(((unsigned __int64)&this->is_in_mp_mode_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_in_mp_mode_, v1, &this->is_in_mp_mode_);
  this->is_in_mp_mode_ = 0;
  v2 = (((_BYTE)this - 100) & 7u) + 3;
  v3 = *(_BYTE *)(((unsigned __int64)&this->host_uid_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->host_uid_ >> 3) + 0x7FFF8000);
  if ( v3 )
    __asan_report_store4(&this->host_uid_, v2, v3);
  this->host_uid_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scene_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->scene_id_, v2, (_BYTE)this - 96);
  }
  this->scene_id_ = 0;
  v4 = ((_BYTE)this - 92) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->is_in_singe_avatar_mode_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->is_in_singe_avatar_mode_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->is_in_singe_avatar_mode_, v4, v5);
  this->is_in_singe_avatar_mode_ = 0;
};

// Line 40: range 0000000015F8B790-0000000015F8B7DA
void __cdecl SceneTeam::~SceneTeam(SceneTeam *const this)
{
  std::unordered_map<unsigned int,std::vector<SceneTeamAvatar>>::~unordered_map(&this->team_avatar_map_);
  std::unordered_map<unsigned int,std::weak_ptr<Player>>::~unordered_map(&this->player_wtr_map_);
  std::vector<unsigned int>::~vector(&this->player_uid_vec_);
  std::enable_shared_from_this<SceneTeam>::~enable_shared_from_this(this);
};

// Line 61: range 00000000141F4FBE-00000000141F4FCF
const std::vector<unsigned int> *__cdecl SceneTeam::getPlayerUidVec(const SceneTeam *const this)
{
  return &this->player_uid_vec_;
};

// Line 61: range 00000000141F4FD0-00000000141F5025
// local variable allocation has failed, the output may be wrong!
void __cdecl SceneTeam::setIsInMpMode(SceneTeam *const this, bool value)
{
  if ( *(char *)(((unsigned __int64)&this->is_in_mp_mode_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_in_mp_mode_, value, &this->is_in_mp_mode_);
  this->is_in_mp_mode_ = value;
};

// Line 101: range 0000000015D33D44-0000000015D33D98
uint32_t __cdecl SceneTeam::getHostUid(const SceneTeam *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->host_uid_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->host_uid_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  return this->host_uid_;
};

// Line 103: range 000000001518A3D0-000000001518A42B
void __cdecl SceneTeam::setInSingeAvatarMode(SceneTeam *const this, bool is_in_singe_avatar_mode__out)
{
  __int64 v2; // rsi
  __int64 v3; // rdx

  v2 = ((_BYTE)this - 92) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_in_singe_avatar_mode_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_in_singe_avatar_mode_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_in_singe_avatar_mode_, v2, v3);
  this->is_in_singe_avatar_mode_ = is_in_singe_avatar_mode__out;
};

// Line 14531: range 0000000015D33AC4-0000000015D33B90
void __cdecl SceneTeamAvatar::SceneTeamAvatar(SceneTeamAvatar *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  common::milog::DescribalBase::DescribalBase(this);
  v2 = (int (**)(...))(&`vtable for'SceneTeamAvatar + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->uid_, v1, (_BYTE)this + 8);
  }
  this->uid_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_guid_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->avatar_guid_, v1);
  this->avatar_guid_ = 0LL;
  std::weak_ptr<Avatar>::weak_ptr(&this->avatar_wtr);
};
