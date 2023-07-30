// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/talk/player_talk_comp.h

// Line 31: range 00000000170938E2-0000000017093961
void __cdecl PlayerTalkComp::~PlayerTalkComp(PlayerTalkComp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlayerTalkComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_PlayerCompBase = v2;
  std::set<unsigned int>::~set(&this->finished_talk_id_set_);
  std::set<unsigned int>::~set(&this->npc_first_met_id_set_);
  std::map<unsigned int,std::shared_ptr<Bargain>>::~map(&this->bargain_map_);
  PlayerCompBase::~PlayerCompBase(this);
};

// Line 31: range 0000000017093962-000000001709398C
void __cdecl PlayerTalkComp::~PlayerTalkComp(PlayerTalkComp *const this)
{
  PlayerTalkComp::~PlayerTalkComp(this);
  operator delete(this, 0xB8uLL);
};

// Line 34: range 000000001747B59E-000000001747B666
void __cdecl ZN14PlayerTalkCompCI214PlayerCompBaseER6Player(PlayerTalkComp *const this, Player *a2)
{
  int (**v2)(...); // rdx

  PlayerCompBase::PlayerCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'PlayerTalkComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_PlayerCompBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_talk_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_talk_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_talk_id_, a2, (_BYTE)this + 32);
  }
  this->cur_talk_id_ = 0;
  std::map<unsigned int,std::shared_ptr<Bargain>>::map(&this->bargain_map_);
  std::set<unsigned int>::set(&this->npc_first_met_id_set_);
  std::set<unsigned int>::set(&this->finished_talk_id_set_);
};

// Line 76: range 0000000013EBE840-0000000013EBE887
uint32_t __cdecl PlayerTalkComp::getCurTalkId(const PlayerTalkComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_talk_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_talk_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_talk_id_);
  }
  return this->cur_talk_id_;
};

// Line 87: range 000000001721386F-0000000017213879
uint32_t __cdecl PlayerTalkComp::getType()
{
  return 5;
};
