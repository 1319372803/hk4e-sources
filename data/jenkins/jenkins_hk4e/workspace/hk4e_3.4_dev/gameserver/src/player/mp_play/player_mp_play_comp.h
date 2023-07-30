// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/mp_play/player_mp_play_comp.h

// Line 24: range 000000001709428A-00000000170942F7
void __cdecl PlayerMpPlayComp::~PlayerMpPlayComp(PlayerMpPlayComp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlayerMpPlayComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_PlayerCompBase = v2;
  PlayerMpPlayComp::InviteInfo::~InviteInfo(&this->invite_info_);
  std::unordered_map<unsigned int,std::shared_ptr<BaseMpPlay>>::~unordered_map(&this->mp_play_map_);
  PlayerCompBase::~PlayerCompBase(this);
};

// Line 24: range 00000000170942F8-0000000017094322
void __cdecl PlayerMpPlayComp::~PlayerMpPlayComp(PlayerMpPlayComp *const this)
{
  PlayerMpPlayComp::~PlayerMpPlayComp(this);
  operator delete(this, 0x98uLL);
};

// Line 28: range 0000000017214149-0000000017214153
uint32_t __cdecl PlayerMpPlayComp::getType()
{
  return 33;
};

// Line 30: range 0000000016D70E88-0000000016D7103B
PlayerMpPlayComp::InviteInfo *__cdecl PlayerMpPlayComp::InviteInfo::operator=(
        PlayerMpPlayComp::InviteInfo *const this,
        PlayerMpPlayComp::InviteInfo *a2)
{
  std::vector<unsigned int> *p_disagree_uid_vec; // rsi
  uint32_t mp_play_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t deadline_time; // ecx
  char v7; // dl
  __int64 v8; // rdx
  bool is_skip_match; // cl
  char v10; // al

  std::vector<unsigned int>::operator=(&this->agree_uid_vec, &a2->agree_uid_vec);
  p_disagree_uid_vec = &a2->disagree_uid_vec;
  std::vector<unsigned int>::operator=(&this->disagree_uid_vec, p_disagree_uid_vec);
  if ( *(_BYTE *)(((unsigned __int64)&a2->mp_play_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->mp_play_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->mp_play_id);
  }
  mp_play_id = a2->mp_play_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->mp_play_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(p_disagree_uid_vec) = v4 != 0;
    __asan_report_store4(&this->mp_play_id, p_disagree_uid_vec, &this->mp_play_id);
  }
  this->mp_play_id = mp_play_id;
  v5 = (((_BYTE)a2 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->deadline_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->deadline_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->deadline_time);
  }
  deadline_time = a2->deadline_time;
  v7 = *(_BYTE *)(((unsigned __int64)&this->deadline_time >> 3) + 0x7FFF8000);
  LOBYTE(v5) = v7 != 0;
  v8 = (v7 != 0) & (unsigned __int8)((char)((((_BYTE)this + 52) & 7) + 3) >= v7);
  if ( (_BYTE)v8 )
    __asan_report_store4(&this->deadline_time, v5, v8);
  this->deadline_time = deadline_time;
  if ( *(char *)(((unsigned __int64)&a2->is_skip_match >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_skip_match);
  is_skip_match = a2->is_skip_match;
  v10 = *(_BYTE *)(((unsigned __int64)&this->is_skip_match >> 3) + 0x7FFF8000);
  if ( v10 < 0 )
  {
    LOBYTE(v5) = v10 != 0;
    __asan_report_store1(&this->is_skip_match, v5, &this->is_skip_match);
  }
  this->is_skip_match = is_skip_match;
  return this;
};

// Line 30: range 0000000016D70D72-0000000016D70E5B
void __cdecl PlayerMpPlayComp::InviteInfo::InviteInfo(PlayerMpPlayComp::InviteInfo *const this)
{
  __int64 v1; // rsi
  uint32_t *p_mp_play_id; // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  std::vector<unsigned int>::vector(&this->agree_uid_vec);
  std::vector<unsigned int>::vector(&this->disagree_uid_vec);
  p_mp_play_id = &this->mp_play_id;
  if ( *(_BYTE *)(((unsigned __int64)p_mp_play_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_mp_play_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->mp_play_id, v1, p_mp_play_id);
  }
  this->mp_play_id = 0;
  v3 = (((_BYTE)this + 52) & 7u) + 3;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->deadline_time >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->deadline_time >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->deadline_time, v3, v4);
  this->deadline_time = 0;
  if ( *(char *)(((unsigned __int64)&this->is_skip_match >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_skip_match, v3, &this->is_skip_match);
  this->is_skip_match = 0;
};

// Line 30: range 0000000016D70E5C-0000000016D70E86
void __cdecl PlayerMpPlayComp::InviteInfo::~InviteInfo(PlayerMpPlayComp::InviteInfo *const this)
{
  std::vector<unsigned int>::~vector(&this->disagree_uid_vec);
  std::vector<unsigned int>::~vector(&this->agree_uid_vec);
};

// Line 40: range 0000000017484A2C-0000000017484AA4
void __cdecl ZN16PlayerMpPlayCompCI214PlayerCompBaseER6Player(PlayerMpPlayComp *const this, Player *a2)
{
  int (**v2)(...); // rdx

  PlayerCompBase::PlayerCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'PlayerMpPlayComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_PlayerCompBase = v2;
  std::unordered_map<unsigned int,std::shared_ptr<BaseMpPlay>>::unordered_map(&this->mp_play_map_);
  PlayerMpPlayComp::InviteInfo::InviteInfo(&this->invite_info_);
};
