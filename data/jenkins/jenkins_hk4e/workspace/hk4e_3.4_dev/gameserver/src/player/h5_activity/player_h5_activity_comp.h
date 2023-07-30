// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/h5_activity/player_h5_activity_comp.h

// Line 36: range 0000000017094A5E-0000000017094ADD
void __cdecl PlayerH5ActivityComp::~PlayerH5ActivityComp(PlayerH5ActivityComp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlayerH5ActivityComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_PlayerCompBase = v2;
  PlayerUnixTimer::~PlayerUnixTimer(&this->notify_red_point_timer_);
  PlayerUnixTimer::~PlayerUnixTimer(&this->refresh_h5_activity_timer_);
  std::unordered_map<unsigned int,H5Activity>::~unordered_map(&this->h5_activity_map_);
  PlayerCompBase::~PlayerCompBase(this);
};

// Line 36: range 0000000017094ADE-0000000017094B08
void __cdecl PlayerH5ActivityComp::~PlayerH5ActivityComp(PlayerH5ActivityComp *const this)
{
  PlayerH5ActivityComp::~PlayerH5ActivityComp(this);
  operator delete(this, 0x118uLL);
};

// Line 40: range 0000000017214A5A-0000000017214A64
uint32_t __cdecl PlayerH5ActivityComp::getType()
{
  return 56;
};

// Line 43: range 000000001748BFBA-000000001748C2FE
void __cdecl ZN20PlayerH5ActivityCompCI214PlayerCompBaseER6Player(PlayerH5ActivityComp *const this, Player *a2)
{
  int (**v2)(...); // rdx
  PlayerH5ActivityComp **v3; // r8
  const std::_Placeholder<1> *v4; // r9
  PlayerH5ActivityComp **v5; // r8
  const std::_Placeholder<1> *v6; // r9
  PlayerH5ActivityComp *v7; // [rsp+10h] [rbp-90h] BYREF
  PlayerH5ActivityComp *v8; // [rsp+18h] [rbp-88h] BYREF
  void (*__f[2])(PlayerH5ActivityComp *, unsigned __int64); // [rsp+20h] [rbp-80h] BYREF
  PlayerPtr v10; // [rsp+30h] [rbp-70h] BYREF
  PlayerPtr p_player_ptr; // [rsp+40h] [rbp-60h] BYREF
  std::_Bind_helper<false,void (PlayerH5ActivityComp::*)(long unsigned int),PlayerH5ActivityComp*,const std::_Placeholder<1>&>::type p___f; // [rsp+50h] [rbp-50h] BYREF
  std::function<void(long unsigned int)> p_callback; // [rsp+70h] [rbp-30h] BYREF

  PlayerCompBase::PlayerCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'PlayerH5ActivityComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_PlayerCompBase = v2;
  std::unordered_map<unsigned int,H5Activity>::unordered_map(&this->h5_activity_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  toPtr<Player,Player>((Player *)&p_player_ptr);
  v7 = this;
  __f[0] = (void (*)(PlayerH5ActivityComp *, unsigned __int64))PlayerH5ActivityComp::onTimer;
  __f[1] = 0LL;
  std::bind<void (PlayerH5ActivityComp::*)(unsigned long),PlayerH5ActivityComp*,std::_Placeholder<1> const&>(
    &p___f,
    __f,
    &v7,
    (const std::_Placeholder<1> *)&std::placeholders::_1,
    v3,
    v4);
  std::function<void ()(unsigned long)>::function<std::_Bind<void (PlayerH5ActivityComp::*)(unsigned long) ()(PlayerH5ActivityComp*,std::_Placeholder<1>)>,void,void>(
    &p_callback,
    &p___f);
  PlayerUnixTimer::PlayerUnixTimer(&this->refresh_h5_activity_timer_, &p_player_ptr, &p_callback);
  std::function<void ()(unsigned long)>::~function(&p_callback);
  std::shared_ptr<Player>::~shared_ptr(&p_player_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&this->client_red_dot_timestamp_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->client_red_dot_timestamp_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->client_red_dot_timestamp_, &p_player_ptr, &this->client_red_dot_timestamp_);
  }
  this->client_red_dot_timestamp_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  toPtr<Player,Player>((Player *)&v10);
  v8 = this;
  p_player_ptr._M_ptr = (std::__shared_ptr<Player,(__gnu_cxx::_Lock_policy)2>::element_type *)PlayerH5ActivityComp::onRedPointTimer;
  p_player_ptr._M_refcount._M_pi = 0LL;
  std::bind<void (PlayerH5ActivityComp::*)(unsigned long),PlayerH5ActivityComp*,std::_Placeholder<1> const&>(
    &p___f,
    (void (**)(PlayerH5ActivityComp *, unsigned __int64))&p_player_ptr,
    &v8,
    (const std::_Placeholder<1> *)&std::placeholders::_1,
    v5,
    v6);
  std::function<void ()(unsigned long)>::function<std::_Bind<void (PlayerH5ActivityComp::*)(unsigned long) ()(PlayerH5ActivityComp*,std::_Placeholder<1>)>,void,void>(
    &p_callback,
    &p___f);
  PlayerUnixTimer::PlayerUnixTimer(&this->notify_red_point_timer_, &v10, &p_callback);
  std::function<void ()(unsigned long)>::~function(&p_callback);
  std::shared_ptr<Player>::~shared_ptr(&v10);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_check_red_point_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_check_red_point_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_check_red_point_time_, &v10, &this->last_check_red_point_time_);
  }
  this->last_check_red_point_time_ = 0;
};
