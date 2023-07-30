// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/city/player_city_comp.h

// Line 20: range 0000000017887410-000000001788746D
void __cdecl PlayerCityComp::~PlayerCityComp(PlayerCityComp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlayerCityComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_PlayerCompBase = v2;
  std::unordered_map<unsigned int,std::shared_ptr<City>>::~unordered_map(&this->city_map_);
  PlayerCompBase::~PlayerCompBase(this);
};

// Line 20: range 000000001788746E-0000000017887498
void __cdecl PlayerCityComp::~PlayerCityComp(PlayerCityComp *const this)
{
  PlayerCityComp::~PlayerCityComp(this);
  operator delete(this, 0x58uLL);
};

// Line 25: range 0000000017214A86-0000000017214A90
uint32_t __cdecl PlayerCityComp::getType()
{
  return 63;
};

// Line 29: range 000000001748DB74-000000001748DBDC
void __cdecl ZN14PlayerCityCompCI214PlayerCompBaseER6Player(PlayerCityComp *const this, Player *a2)
{
  int (**v2)(...); // rdx

  PlayerCompBase::PlayerCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'PlayerCityComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_PlayerCompBase = v2;
  std::unordered_map<unsigned int,std::shared_ptr<City>>::unordered_map(&this->city_map_);
};
