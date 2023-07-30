// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/scene_play/player_scene_play_comp.h

// Line 20: range 0000000017487AB0-0000000017487B95
void __cdecl InviteInfo::InviteInfo(InviteInfo *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1, (_BYTE)this);
  }
  this->play_id = 0;
  std::vector<unsigned int>::vector(&this->agree_uid_vec);
  std::vector<unsigned int>::vector(&this->disagree_uid_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->deadline_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->deadline_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->deadline_time, v1, (_BYTE)this + 56);
  }
  this->deadline_time = 0;
  v2 = ((_BYTE)this + 60) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_skip_match >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_skip_match >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_skip_match, v2, v3);
  this->is_skip_match = 0;
};

// Line 20: range 0000000017093CD2-0000000017093D00
void __cdecl InviteInfo::~InviteInfo(InviteInfo *const this)
{
  std::vector<unsigned int>::~vector(&this->disagree_uid_vec);
  std::vector<unsigned int>::~vector(&this->agree_uid_vec);
};

// Line 31: range 0000000016D705D4-0000000016D7060B
uint32_t __cdecl InviteInfo::getReplyCount(const InviteInfo *const this)
{
  int v1; // ebx

  v1 = std::vector<unsigned int>::size(&this->agree_uid_vec);
  return v1 + std::vector<unsigned int>::size(&this->disagree_uid_vec);
};

// Line 34: range 0000000017093D02-0000000017093D6F
void __cdecl PlayerScenePlayComp::~PlayerScenePlayComp(PlayerScenePlayComp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlayerScenePlayComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_PlayerCompBase = v2;
  InviteInfo::~InviteInfo(&this->invite_info_);
  std::unordered_map<unsigned int,std::shared_ptr<BaseScenePlay>>::~unordered_map(&this->play_map_);
  PlayerCompBase::~PlayerCompBase(this);
};

// Line 34: range 0000000017093D70-0000000017093D9A
void __cdecl PlayerScenePlayComp::~PlayerScenePlayComp(PlayerScenePlayComp *const this)
{
  PlayerScenePlayComp::~PlayerScenePlayComp(this);
  operator delete(this, 0x98uLL);
};

// Line 37: range 0000000017212A3E-0000000017212A48
uint32_t __cdecl PlayerScenePlayComp::getType()
{
  return 43;
};

// Line 40: range 0000000017487B96-0000000017487C0E
void __cdecl ZN19PlayerScenePlayCompCI214PlayerCompBaseER6Player(PlayerScenePlayComp *const this, Player *a2)
{
  int (**v2)(...); // rdx

  PlayerCompBase::PlayerCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'PlayerScenePlayComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_PlayerCompBase = v2;
  std::unordered_map<unsigned int,std::shared_ptr<BaseScenePlay>>::unordered_map(&this->play_map_);
  InviteInfo::InviteInfo(&this->invite_info_);
};
