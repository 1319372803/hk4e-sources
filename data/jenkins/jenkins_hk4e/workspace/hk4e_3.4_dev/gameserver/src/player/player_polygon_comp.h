// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/player_polygon_comp.h

// Line 19: range 0000000017B8D7F6-0000000017B8D853
void __cdecl PlayerPolygonComp::~PlayerPolygonComp(PlayerPolygonComp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlayerPolygonComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_PlayerCompBase = v2;
  PlayerTimer::~PlayerTimer(&this->polygon_timer_);
  PlayerCompBase::~PlayerCompBase(this);
};

// Line 19: range 0000000017B8D854-0000000017B8D87E
void __cdecl PlayerPolygonComp::~PlayerPolygonComp(PlayerPolygonComp *const this)
{
  PlayerPolygonComp::~PlayerPolygonComp(this);
  operator delete(this, 0x90uLL);
};

// Line 22: range 0000000017214ABD-0000000017214AC7
uint32_t __cdecl PlayerPolygonComp::getType()
{
  return 68;
};

// Line 25: range 000000001748F2A6-000000001748F48A
void __cdecl ZN17PlayerPolygonCompCI214PlayerCompBaseER6Player(PlayerPolygonComp *const this, Player *a2)
{
  int (**v2)(...); // rdx
  PlayerPolygonComp **v3; // r8
  const std::_Placeholder<1> *v4; // r9
  PlayerPolygonComp *v5; // [rsp+18h] [rbp-78h] BYREF
  PlayerPtr p_player_ptr; // [rsp+20h] [rbp-70h] BYREF
  void (*__f[2])(PlayerPolygonComp *, unsigned __int64); // [rsp+30h] [rbp-60h] BYREF
  std::_Bind_helper<false,void (PlayerPolygonComp::*)(long unsigned int),PlayerPolygonComp*,const std::_Placeholder<1>&>::type p___f; // [rsp+40h] [rbp-50h] BYREF
  std::function<void(long unsigned int)> p_callback; // [rsp+60h] [rbp-30h] BYREF

  PlayerCompBase::PlayerCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'PlayerPolygonComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_PlayerCompBase = v2;
  Vector3::Vector3(&this->check_polygon_position_, 0.0, 0.0, 0.0);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  toPtr<Player,Player>((Player *)&p_player_ptr);
  v5 = this;
  __f[0] = (void (*)(PlayerPolygonComp *, unsigned __int64))PlayerPolygonComp::updatePolygon;
  __f[1] = 0LL;
  std::bind<void (PlayerPolygonComp::*)(unsigned long),PlayerPolygonComp*,std::_Placeholder<1> const&>(
    &p___f,
    __f,
    &v5,
    (const std::_Placeholder<1> *)&std::placeholders::_1,
    v3,
    v4);
  std::function<void ()(unsigned long)>::function<std::_Bind<void (PlayerPolygonComp::*)(unsigned long) ()(PlayerPolygonComp*,std::_Placeholder<1>)>,void,void>(
    &p_callback,
    &p___f);
  PlayerTimer::PlayerTimer(&this->polygon_timer_, &p_player_ptr, &p_callback);
  std::function<void ()(unsigned long)>::~function(&p_callback);
  std::shared_ptr<Player>::~shared_ptr(&p_player_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_polygon_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_polygon_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_polygon_id_, &p_player_ptr, &this->cur_polygon_id_);
  }
  this->cur_polygon_id_ = 0;
};

// Line 32: range 0000000015D40146-0000000015D40192
uint32_t __cdecl PlayerPolygonComp::getCurPolygonId(const PlayerPolygonComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_polygon_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_polygon_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_polygon_id_);
  }
  return this->cur_polygon_id_;
};
