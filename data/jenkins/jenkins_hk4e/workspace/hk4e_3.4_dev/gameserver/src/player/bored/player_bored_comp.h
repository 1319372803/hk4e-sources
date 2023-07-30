// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/bored/player_bored_comp.h

// Line 21: range 00000000154CBDB6-00000000154CBE35
void __cdecl PlayerBoredComp::~PlayerBoredComp(PlayerBoredComp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlayerBoredComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_PlayerCompBase = v2;
  PlayerUnixTimer::~PlayerUnixTimer(&this->event_game_timer_);
  PlayerUnixTimer::~PlayerUnixTimer(&this->create_monster_timer_);
  std::unordered_map<unsigned int,int>::~unordered_map(&this->event_bored_map_);
  PlayerCompBase::~PlayerCompBase(this);
};

// Line 21: range 00000000154CBE36-00000000154CBE60
void __cdecl PlayerBoredComp::~PlayerBoredComp(PlayerBoredComp *const this)
{
  PlayerBoredComp::~PlayerBoredComp(this);
  operator delete(this, 0x138uLL);
};

// Line 24: range 0000000017213F09-0000000017213F13
uint32_t __cdecl PlayerBoredComp::getType()
{
  return 11;
};

// Line 28: range 000000001747C28A-000000001747C708
void __cdecl ZN15PlayerBoredCompCI214PlayerCompBaseER6Player(PlayerBoredComp *const this, Player *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  PlayerBoredComp **v5; // r8
  const std::_Placeholder<1> *v6; // r9
  PlayerBoredComp **v7; // r8
  const std::_Placeholder<1> *v8; // r9
  PlayerBoredComp *v9; // [rsp+10h] [rbp-90h] BYREF
  PlayerBoredComp *v10; // [rsp+18h] [rbp-88h] BYREF
  void (*__f[2])(PlayerBoredComp *, unsigned __int64); // [rsp+20h] [rbp-80h] BYREF
  PlayerPtr v12; // [rsp+30h] [rbp-70h] BYREF
  PlayerPtr p_player_ptr; // [rsp+40h] [rbp-60h] BYREF
  std::_Bind_helper<false,void (PlayerBoredComp::*)(long unsigned int),PlayerBoredComp*,const std::_Placeholder<1>&>::type p___f; // [rsp+50h] [rbp-50h] BYREF
  std::function<void(long unsigned int)> p_callback; // [rsp+70h] [rbp-30h] BYREF

  PlayerCompBase::PlayerCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'PlayerBoredComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_PlayerCompBase = v2;
  if ( *(char *)(((unsigned __int64)&this->is_open_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_open_, a2, &this->is_open_);
  this->is_open_ = 0;
  v3 = (((_BYTE)this + 36) & 7u) + 3;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->bored_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->bored_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->bored_, v3, v4);
  this->bored_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->bored_threshold_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->bored_threshold_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->bored_threshold_, v3, &this->bored_threshold_);
  }
  this->bored_threshold_ = 0;
  std::unordered_map<unsigned int,int>::unordered_map(&this->event_bored_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->last_time_ms_, v3);
  this->last_time_ms_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->check_interval_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->check_interval_ms_, v3);
  this->check_interval_ms_ = 0LL;
  if ( *(char *)(((unsigned __int64)&this->is_action_begin_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_action_begin_, v3, &this->is_action_begin_);
  this->is_action_begin_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  toPtr<Player,Player>((Player *)&p_player_ptr);
  v9 = this;
  __f[0] = (void (*)(PlayerBoredComp *, unsigned __int64))PlayerBoredComp::monsterActionTimeout;
  __f[1] = 0LL;
  std::bind<void (PlayerBoredComp::*)(unsigned long),PlayerBoredComp*,std::_Placeholder<1> const&>(
    &p___f,
    __f,
    &v9,
    (const std::_Placeholder<1> *)&std::placeholders::_1,
    v5,
    v6);
  std::function<void ()(unsigned long)>::function<std::_Bind<void (PlayerBoredComp::*)(unsigned long) ()(PlayerBoredComp*,std::_Placeholder<1>)>,void,void>(
    &p_callback,
    &p___f);
  PlayerUnixTimer::PlayerUnixTimer(&this->create_monster_timer_, &p_player_ptr, &p_callback);
  std::function<void ()(unsigned long)>::~function(&p_callback);
  std::shared_ptr<Player>::~shared_ptr(&p_player_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  toPtr<Player,Player>((Player *)&v12);
  v10 = this;
  p_player_ptr._M_ptr = (std::__shared_ptr<Player,(__gnu_cxx::_Lock_policy)2>::element_type *)PlayerBoredComp::onEventGameTimer;
  p_player_ptr._M_refcount._M_pi = 0LL;
  std::bind<void (PlayerBoredComp::*)(unsigned long),PlayerBoredComp*,std::_Placeholder<1> const&>(
    &p___f,
    (void (**)(PlayerBoredComp *, unsigned __int64))&p_player_ptr,
    &v10,
    (const std::_Placeholder<1> *)&std::placeholders::_1,
    v7,
    v8);
  std::function<void ()(unsigned long)>::function<std::_Bind<void (PlayerBoredComp::*)(unsigned long) ()(PlayerBoredComp*,std::_Placeholder<1>)>,void,void>(
    &p_callback,
    &p___f);
  PlayerUnixTimer::PlayerUnixTimer(&this->event_game_timer_, &v12, &p_callback);
  std::function<void ()(unsigned long)>::~function(&p_callback);
  std::shared_ptr<Player>::~shared_ptr(&v12);
  if ( *(_BYTE *)(((unsigned __int64)&this->create_monster_entity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->create_monster_entity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->create_monster_entity_id_, &v12, &this->create_monster_entity_id_);
  }
  this->create_monster_entity_id_ = 0;
};

// Line 51: range 0000000013EBF642-0000000013EBF692
// local variable allocation has failed, the output may be wrong!
void __cdecl PlayerBoredComp::open(PlayerBoredComp *const this, bool is_open)
{
  if ( *(char *)(((unsigned __int64)&this->is_open_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_open_, is_open, &this->is_open_);
  this->is_open_ = is_open;
};
