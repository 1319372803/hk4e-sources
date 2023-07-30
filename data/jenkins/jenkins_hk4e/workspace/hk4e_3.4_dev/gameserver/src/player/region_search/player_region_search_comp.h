// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/region_search/player_region_search_comp.h

// Line 27: range 0000000015F45EF8-0000000015F45F65
void __cdecl PlayerRegionSearchComp::~PlayerRegionSearchComp(PlayerRegionSearchComp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlayerRegionSearchComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_PlayerCompBase = v2;
  PlayerUnixTimer::~PlayerUnixTimer(&this->play_timer_);
  std::map<unsigned int,std::shared_ptr<RegionSearchPlay>>::~map(&this->play_map_);
  PlayerCompBase::~PlayerCompBase(this);
};

// Line 27: range 0000000015F45F66-0000000015F45F90
void __cdecl PlayerRegionSearchComp::~PlayerRegionSearchComp(PlayerRegionSearchComp *const this)
{
  PlayerRegionSearchComp::~PlayerRegionSearchComp(this);
  operator delete(this, 0xA8uLL);
};

// Line 30: range 000000001748A232-000000001748A3D4
void __cdecl ZN22PlayerRegionSearchCompCI214PlayerCompBaseER6Player(PlayerRegionSearchComp *const this, Player *a2)
{
  int (**v2)(...); // rdx
  PlayerRegionSearchComp **v3; // r8
  const std::_Placeholder<1> *v4; // r9
  PlayerRegionSearchComp *v5; // [rsp+18h] [rbp-78h] BYREF
  PlayerPtr p_player_ptr; // [rsp+20h] [rbp-70h] BYREF
  void (*__f[2])(PlayerRegionSearchComp *, unsigned __int64); // [rsp+30h] [rbp-60h] BYREF
  std::_Bind_helper<false,void (PlayerRegionSearchComp::*)(long unsigned int),PlayerRegionSearchComp*,const std::_Placeholder<1>&>::type p___f; // [rsp+40h] [rbp-50h] BYREF
  std::function<void(long unsigned int)> p_callback; // [rsp+60h] [rbp-30h] BYREF

  PlayerCompBase::PlayerCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'PlayerRegionSearchComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_PlayerCompBase = v2;
  std::map<unsigned int,std::shared_ptr<RegionSearchPlay>>::map(&this->play_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  toPtr<Player,Player>((Player *)&p_player_ptr);
  v5 = this;
  __f[0] = (void (*)(PlayerRegionSearchComp *, unsigned __int64))PlayerRegionSearchComp::onTimer;
  __f[1] = 0LL;
  std::bind<void (PlayerRegionSearchComp::*)(unsigned long),PlayerRegionSearchComp*,std::_Placeholder<1> const&>(
    &p___f,
    __f,
    &v5,
    (const std::_Placeholder<1> *)&std::placeholders::_1,
    v3,
    v4);
  std::function<void ()(unsigned long)>::function<std::_Bind<void (PlayerRegionSearchComp::*)(unsigned long) ()(PlayerRegionSearchComp*,std::_Placeholder<1>)>,void,void>(
    &p_callback,
    &p___f);
  PlayerUnixTimer::PlayerUnixTimer(&this->play_timer_, &p_player_ptr, &p_callback);
  std::function<void ()(unsigned long)>::~function(&p_callback);
  std::shared_ptr<Player>::~shared_ptr(&p_player_ptr);
};

// Line 32: range 0000000017214927-0000000017214931
uint32_t __cdecl PlayerRegionSearchComp::getType()
{
  return 53;
};
