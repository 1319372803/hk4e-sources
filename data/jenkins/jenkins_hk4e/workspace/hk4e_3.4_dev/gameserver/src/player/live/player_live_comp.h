// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/live/player_live_comp.h

// Line 18: range 0000000017887A66-0000000017887AD3
void __cdecl PlayerLiveComp::~PlayerLiveComp(PlayerLiveComp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlayerLiveComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_PlayerCompBase = v2;
  std::set<unsigned int>::~set(&this->active_live_set_);
  PlayerUnixTimer::~PlayerUnixTimer(&this->live_timer_);
  PlayerCompBase::~PlayerCompBase(this);
};

// Line 18: range 0000000017887AD4-0000000017887AFE
void __cdecl PlayerLiveComp::~PlayerLiveComp(PlayerLiveComp *const this)
{
  PlayerLiveComp::~PlayerLiveComp(this);
  operator delete(this, 0xA8uLL);
};

// Line 21: range 0000000017214A65-0000000017214A6F
uint32_t __cdecl PlayerLiveComp::getType()
{
  return 59;
};

// Line 26: range 000000001748CADA-000000001748CC69
void __cdecl ZN14PlayerLiveCompCI214PlayerCompBaseER6Player(PlayerLiveComp *const this, Player *a2)
{
  int (**v2)(...); // rdx
  PlayerLiveComp **v3; // r8
  const std::_Placeholder<1> *v4; // r9
  PlayerLiveComp *v5; // [rsp+18h] [rbp-78h] BYREF
  PlayerPtr p_player_ptr; // [rsp+20h] [rbp-70h] BYREF
  void (*__f[2])(PlayerLiveComp *, unsigned __int64); // [rsp+30h] [rbp-60h] BYREF
  std::_Bind_helper<false,void (PlayerLiveComp::*)(long unsigned int),PlayerLiveComp*,const std::_Placeholder<1>&>::type p___f; // [rsp+40h] [rbp-50h] BYREF
  std::function<void(long unsigned int)> p_callback; // [rsp+60h] [rbp-30h] BYREF

  PlayerCompBase::PlayerCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'PlayerLiveComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_PlayerCompBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  toPtr<Player,Player>((Player *)&p_player_ptr);
  v5 = this;
  __f[0] = (void (*)(PlayerLiveComp *, unsigned __int64))PlayerLiveComp::onLiveTimer;
  __f[1] = 0LL;
  std::bind<void (PlayerLiveComp::*)(unsigned long),PlayerLiveComp*,std::_Placeholder<1> const&>(
    &p___f,
    __f,
    &v5,
    (const std::_Placeholder<1> *)&std::placeholders::_1,
    v3,
    v4);
  std::function<void ()(unsigned long)>::function<std::_Bind<void (PlayerLiveComp::*)(unsigned long) ()(PlayerLiveComp*,std::_Placeholder<1>)>,void,void>(
    &p_callback,
    &p___f);
  PlayerUnixTimer::PlayerUnixTimer(&this->live_timer_, &p_player_ptr, &p_callback);
  std::function<void ()(unsigned long)>::~function(&p_callback);
  std::shared_ptr<Player>::~shared_ptr(&p_player_ptr);
  std::set<unsigned int>::set(&this->active_live_set_);
};
