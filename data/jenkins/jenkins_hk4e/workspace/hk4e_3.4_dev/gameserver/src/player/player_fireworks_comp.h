// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/player_fireworks_comp.h

// Line 26: range 0000000017B4E4A0-0000000017B4E4F7
void __cdecl FireworksReformData::FireworksReformData(FireworksReformData *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1, this);
  }
  this->id = 0;
  std::vector<FireworksParam>::vector(&this->reform_param_vec);
};

// Line 26: range 0000000017B0D2E8-0000000017B0D306
void __cdecl FireworksReformData::~FireworksReformData(FireworksReformData *const this)
{
  std::vector<FireworksParam>::~vector(&this->reform_param_vec);
};

// Line 38: range 0000000017B4E6C6-0000000017B4E72D
void __cdecl FireworksLaunchSchemeData::FireworksLaunchSchemeData(FireworksLaunchSchemeData *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1, this);
  }
  this->scheme_id = 0;
  std::vector<unsigned int>::vector(&this->fireworks_id_vec);
  std::vector<FireworksParam>::vector(&this->launch_param_vec);
};

// Line 38: range 0000000017B0D48A-0000000017B0D4B8
void __cdecl FireworksLaunchSchemeData::~FireworksLaunchSchemeData(FireworksLaunchSchemeData *const this)
{
  std::vector<FireworksParam>::~vector(&this->launch_param_vec);
  std::vector<unsigned int>::~vector(&this->fireworks_id_vec);
};

// Line 50: range 0000000017B8DA22-0000000017B8DA8F
void __cdecl PlayerFireworksComp::~PlayerFireworksComp(PlayerFireworksComp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlayerFireworksComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_PlayerCompBase = v2;
  std::map<unsigned int,FireworksLaunchSchemeData>::~map(&this->fireworks_launch_scheme_data_map_);
  std::map<unsigned int,FireworksReformData>::~map(&this->fireworks_reform_data_map_);
  PlayerCompBase::~PlayerCompBase(this);
};

// Line 50: range 0000000017B8DA90-0000000017B8DABA
void __cdecl PlayerFireworksComp::~PlayerFireworksComp(PlayerFireworksComp *const this)
{
  PlayerFireworksComp::~PlayerFireworksComp(this);
  operator delete(this, 0x88uLL);
};

// Line 53: range 0000000017214A7B-0000000017214A85
uint32_t __cdecl PlayerFireworksComp::getType()
{
  return 62;
};

// Line 59: range 000000001748D8A4-000000001748D95D
void __cdecl ZN19PlayerFireworksCompCI214PlayerCompBaseER6Player(PlayerFireworksComp *const this, Player *a2)
{
  int (**v2)(...); // rdx

  PlayerCompBase::PlayerCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'PlayerFireworksComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_PlayerCompBase = v2;
  std::map<unsigned int,FireworksReformData>::map(&this->fireworks_reform_data_map_);
  std::map<unsigned int,FireworksLaunchSchemeData>::map(&this->fireworks_launch_scheme_data_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_use_launch_scheme_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_use_launch_scheme_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_use_launch_scheme_id_, a2, &this->last_use_launch_scheme_id_);
  }
  this->last_use_launch_scheme_id_ = 0;
};
