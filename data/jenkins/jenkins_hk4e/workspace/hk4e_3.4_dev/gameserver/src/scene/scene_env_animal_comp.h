// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_env_animal_comp.h

// Line 22: range 0000000015E9986A-0000000015E998FF
void __cdecl EnvZoneInfo::EnvZoneInfo(EnvZoneInfo *const this)
{
  bool v1; // dl
  bool v2; // dl

  v1 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v1 )
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3, v1);
  this->last_refresh_time = 0;
  v2 = *(_BYTE *)(((unsigned __int64)&this->animal_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->animal_num >> 3) + 0x7FFF8000);
  if ( v2 )
    __asan_report_store4(&this->animal_num, (((_BYTE)this + 4) & 7u) + 3, v2);
  this->animal_num = 0;
};

// Line 28: range 0000000015F4654E-0000000015F465BB
void __cdecl SceneEnvAnimalComp::~SceneEnvAnimalComp(SceneEnvAnimalComp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'SceneEnvAnimalComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SceneCompBase = v2;
  std::unordered_map<unsigned int,std::weak_ptr<Entity>>::~unordered_map(&this->env_animal_map_);
  std::unordered_map<unsigned int,EnvZoneInfo>::~unordered_map(&this->env_zone_info_map_);
  SceneCompBase::~SceneCompBase(this);
};

// Line 28: range 0000000015F465BC-0000000015F465E6
void __cdecl SceneEnvAnimalComp::~SceneEnvAnimalComp(SceneEnvAnimalComp *const this)
{
  SceneEnvAnimalComp::~SceneEnvAnimalComp(this);
  operator delete(this, 0x98uLL);
};

// Line 34: range 0000000015F332DA-0000000015F33416
void __cdecl ZN18SceneEnvAnimalCompCI213SceneCompBaseER5Scene(SceneEnvAnimalComp *const this, Scene *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  bool v4; // dl

  SceneCompBase::SceneCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'SceneEnvAnimalComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_SceneCompBase = v2;
  std::unordered_map<unsigned int,EnvZoneInfo>::unordered_map(&this->env_zone_info_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->refresh_interval_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->refresh_interval_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->refresh_interval_, a2, (_BYTE)this + 80);
  }
  this->refresh_interval_ = 0;
  v3 = (((_BYTE)this + 84) & 7u) + 3;
  v4 = *(_BYTE *)(((unsigned __int64)&this->next_refresh_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->next_refresh_time_ >> 3) + 0x7FFF8000);
  if ( v4 )
    __asan_report_store4(&this->next_refresh_time_, v3, v4);
  this->next_refresh_time_ = 0;
  std::unordered_map<unsigned int,std::weak_ptr<Entity>>::unordered_map(&this->env_animal_map_);
  if ( *(char *)(((unsigned __int64)&this->is_enable_refresh_env_animal_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_enable_refresh_env_animal_, v3, &this->is_enable_refresh_env_animal_);
  this->is_enable_refresh_env_animal_ = 1;
};
