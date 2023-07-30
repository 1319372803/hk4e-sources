// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/reunion/player_reunion_comp.h

// Line 23: range 0000000017093E52-0000000017093ED1
void __cdecl PlayerReunionComp::~PlayerReunionComp(PlayerReunionComp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlayerReunionComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_PlayerCompBase = v2;
  Reunion::~Reunion(&this->reunion_);
  PlayerUnixTimer::~PlayerUnixTimer(&this->runion_settle_timer_);
  std::weak_ptr<Observer>::~weak_ptr(&this->watcher_progress_obs_wtr_);
  PlayerCompBase::~PlayerCompBase(this);
};

// Line 23: range 0000000017093ED2-0000000017093EFC
void __cdecl PlayerReunionComp::~PlayerReunionComp(PlayerReunionComp *const this)
{
  PlayerReunionComp::~PlayerReunionComp(this);
  operator delete(this, 0x1E0uLL);
};

// Line 26: range 00000000172148E5-00000000172148EF
uint32_t __cdecl PlayerReunionComp::getType()
{
  return 47;
};

// Line 29: range 000000001748836A-0000000017488606
void __cdecl ZN17PlayerReunionCompCI214PlayerCompBaseER6Player(PlayerReunionComp *const this, Player *a2)
{
  int (**v2)(...); // rdx
  PlayerReunionComp **v3; // r8
  const std::_Placeholder<1> *v4; // r9
  Reunion *p_reunion; // rcx
  Player *player; // rsi
  PlayerReunionComp *v7; // [rsp+18h] [rbp-78h] BYREF
  PlayerPtr p_player_ptr; // [rsp+20h] [rbp-70h] BYREF
  void (*__f[2])(PlayerReunionComp *, unsigned __int64); // [rsp+30h] [rbp-60h] BYREF
  std::_Bind_helper<false,void (PlayerReunionComp::*)(long unsigned int),PlayerReunionComp*,const std::_Placeholder<1>&>::type p___f; // [rsp+40h] [rbp-50h] BYREF
  std::function<void(long unsigned int)> p_callback; // [rsp+60h] [rbp-30h] BYREF

  PlayerCompBase::PlayerCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'PlayerReunionComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_PlayerCompBase = v2;
  std::weak_ptr<Observer>::weak_ptr(&this->watcher_progress_obs_wtr_);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  toPtr<Player,Player>((Player *)&p_player_ptr);
  v7 = this;
  __f[0] = (void (*)(PlayerReunionComp *, unsigned __int64))PlayerReunionComp::onReunionSettleTimer;
  __f[1] = 0LL;
  std::bind<void (PlayerReunionComp::*)(unsigned long),PlayerReunionComp*,std::_Placeholder<1> const&>(
    &p___f,
    __f,
    &v7,
    (const std::_Placeholder<1> *)&std::placeholders::_1,
    v3,
    v4);
  std::function<void ()(unsigned long)>::function<std::_Bind<void (PlayerReunionComp::*)(unsigned long) ()(PlayerReunionComp*,std::_Placeholder<1>)>,void,void>(
    &p_callback,
    &p___f);
  PlayerUnixTimer::PlayerUnixTimer(&this->runion_settle_timer_, &p_player_ptr, &p_callback);
  std::function<void ()(unsigned long)>::~function(&p_callback);
  std::shared_ptr<Player>::~shared_ptr(&p_player_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_activate_reunion_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_activate_reunion_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_activate_reunion_time_, &p_player_ptr, (_BYTE)this - 120);
  }
  this->last_activate_reunion_time_ = 0;
  p_reunion = &this->reunion_;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  player = this->player_;
  Reunion::Reunion(p_reunion, player, this);
  if ( *(char *)(((unsigned __int64)&this->is_activated_when_close_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_activated_when_close_, player, &this->is_activated_when_close_);
  this->is_activated_when_close_ = 0;
};

// Line 37: range 0000000015D3DBB4-0000000015D3DBD3
bool __cdecl PlayerReunionComp::isReunionActivated(PlayerReunionComp *const this)
{
  return Reunion::isActivated(&this->reunion_);
};

// Line 38: range 0000000015D3DBD4-0000000015D3DBE7
Reunion *__cdecl PlayerReunionComp::getReunionInst(PlayerReunionComp *const this)
{
  return &this->reunion_;
};

// Line 67: range 0000000016D740FC-0000000016D74148
uint32_t __cdecl PlayerReunionComp::getLastActivateReunionTime(const PlayerReunionComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->last_activate_reunion_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_activate_reunion_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_activate_reunion_time_);
  }
  return this->last_activate_reunion_time_;
};
