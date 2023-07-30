// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_encounter_comp.h

// Line 24: range 0000000015D35F16-0000000015D35F8C
void __cdecl SceneEncounterBase::SceneEncounterBase(SceneEncounterBase *const this, PlayerWorldScene *world_scene)
{
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'SceneEncounterBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, world_scene);
  this->_vptr_SceneEncounterBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->world_scene_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->world_scene_, world_scene);
  this->world_scene_ = world_scene;
};

// Line 25: range 0000000015D4BDD4-0000000015D4BE15
void __cdecl SceneEncounterBase::~SceneEncounterBase(SceneEncounterBase *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'SceneEncounterBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SceneEncounterBase = v2;
};

// Line 25: range 0000000015D4BE16-0000000015D4BE40
void __cdecl SceneEncounterBase::~SceneEncounterBase(SceneEncounterBase *const this)
{
  SceneEncounterBase::~SceneEncounterBase(this);
  operator delete(this, 0x10uLL);
};

// Line 43: range 0000000015F465E8-0000000015F46645
void __cdecl SceneEncounterComp::~SceneEncounterComp(SceneEncounterComp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'SceneEncounterComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SceneCompBase = v2;
  std::map<unsigned int,std::unique_ptr<SceneEncounterBase>>::~map(&this->encounter_map_);
  SceneCompBase::~SceneCompBase(this);
};

// Line 43: range 0000000015F46646-0000000015F46670
void __cdecl SceneEncounterComp::~SceneEncounterComp(SceneEncounterComp *const this)
{
  SceneEncounterComp::~SceneEncounterComp(this);
  operator delete(this, 0x58uLL);
};

// Line 75: range 0000000017D68670-0000000017D686BD
// local variable allocation has failed, the output may be wrong!
void __cdecl SceneEncounterComp::setLastRefreshTime(SceneEncounterComp *const this, uint32_t next_refresh_time)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->next_refresh_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->next_refresh_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->next_refresh_time_, *(_QWORD *)&next_refresh_time, (_BYTE)this + 72);
  }
  this->next_refresh_time_ = next_refresh_time;
};

// Line 76: range 0000000017D686BE-0000000017D68711
void __cdecl SceneEncounterComp::resetLastCheckTimer(SceneEncounterComp *const this)
{
  bool v1; // dl

  v1 = *(_BYTE *)(((unsigned __int64)&this->last_check_timer_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_check_timer_ >> 3) + 0x7FFF8000);
  if ( v1 )
    __asan_report_store4(&this->last_check_timer_, (((_BYTE)this + 76) & 7u) + 3, v1);
  this->last_check_timer_ = 0;
};

// Line 930: range 0000000013EB9D04-0000000013EB9D4B
uint32_t __cdecl SceneEncounterComp::getLastZoneLevel(const SceneEncounterComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->last_zone_level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_zone_level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return this->last_zone_level_;
};
