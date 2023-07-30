// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/handler/tower_handler.h

// Line 37: range 000000001832707C-00000000183270C9
void __cdecl TowerHandler::~TowerHandler(TowerHandler *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'TowerHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerHandlerBase = v1;
  PlayerHandlerBase::~PlayerHandlerBase(this);
};

// Line 37: range 00000000183270CA-00000000183270F4
void __cdecl TowerHandler::~TowerHandler(TowerHandler *const this)
{
  TowerHandler::~TowerHandler(this);
  operator delete(this, 0x18uLL);
};

// Line 40: range 000000001749371A-00000000174937B0
void __cdecl ZN12TowerHandlerCI217PlayerHandlerBaseER6Player(TowerHandler *const this, Player *a2)
{
  int (**v2)(...); // rdx

  PlayerHandlerBase::PlayerHandlerBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'TowerHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerHandlerBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_select_tower_team_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_select_tower_team_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_select_tower_team_time_);
  }
  this->last_select_tower_team_time_ = 0;
};
