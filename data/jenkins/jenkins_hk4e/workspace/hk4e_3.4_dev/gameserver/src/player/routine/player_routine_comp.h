// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/routine/player_routine_comp.h

// Line 29: range 00000000170055C0-000000001700564F
void __cdecl RoutineDetailInfo::RoutineDetailInfo(RoutineDetailInfo *const this)
{
  bool v1; // dl
  __int64 v2; // rsi
  __int64 v3; // rdx

  v1 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v1 )
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3, v1);
  this->progress = 0;
  v2 = ((_BYTE)this + 4) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_finished >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_finished >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_finished, v2, v3);
  this->is_finished = 0;
};

// Line 35: range 00000000170053B4-0000000017005451
void __cdecl RoutineTypeInfo::RoutineTypeInfo(RoutineTypeInfo *const this)
{
  __int64 v1; // rsi
  bool v2; // dl

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1, (_BYTE)this);
  }
  this->finished_num = 0;
  v2 = *(_BYTE *)(((unsigned __int64)&this->last_refresh_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_refresh_time >> 3) + 0x7FFF8000);
  if ( v2 )
    __asan_report_store4(&this->last_refresh_time, (((_BYTE)this + 4) & 7u) + 3, v2);
  this->last_refresh_time = 0;
  std::map<unsigned int,RoutineDetailInfo>::map(&this->detail_map);
};

// Line 35: range 0000000016F685DA-0000000016F685F8
void __cdecl RoutineTypeInfo::~RoutineTypeInfo(RoutineTypeInfo *const this)
{
  std::map<unsigned int,RoutineDetailInfo>::~map(&this->detail_map);
};

// Line 42: range 0000000017093DB8-0000000017093E25
void __cdecl PlayerRoutineComp::~PlayerRoutineComp(PlayerRoutineComp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlayerRoutineComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_PlayerCompBase = v2;
  std::map<unsigned int,std::map<unsigned int,unsigned int>>::~map(&this->delayed_unregister_groups_map_);
  std::map<unsigned int,RoutineTypeInfo>::~map(&this->routine_type_map_);
  PlayerCompBase::~PlayerCompBase(this);
};

// Line 42: range 0000000017093E26-0000000017093E50
void __cdecl PlayerRoutineComp::~PlayerRoutineComp(PlayerRoutineComp *const this)
{
  PlayerRoutineComp::~PlayerRoutineComp(this);
  operator delete(this, 0x80uLL);
};

// Line 45: range 00000000172143AB-00000000172143B5
uint32_t __cdecl PlayerRoutineComp::getType()
{
  return 46;
};

// Line 48: range 00000000174888A2-000000001748891A
void __cdecl ZN17PlayerRoutineCompCI214PlayerCompBaseER6Player(PlayerRoutineComp *const this, Player *a2)
{
  int (**v2)(...); // rdx

  PlayerCompBase::PlayerCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'PlayerRoutineComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_PlayerCompBase = v2;
  std::map<unsigned int,RoutineTypeInfo>::map(&this->routine_type_map_);
  std::map<unsigned int,std::map<unsigned int,unsigned int>>::map(&this->delayed_unregister_groups_map_);
};
