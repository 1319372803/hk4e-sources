// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/monster/monster_env_animal_comp.h

// Line 21: range 0000000016B7B99A-0000000016B7B9E7
void __cdecl MonsterEnvAnimalComp::~MonsterEnvAnimalComp(MonsterEnvAnimalComp *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'MonsterEnvAnimalComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_MonsterCompBase = v1;
  MonsterCompBase::~MonsterCompBase(this);
};

// Line 21: range 0000000016B7B9E8-0000000016B7BA12
void __cdecl MonsterEnvAnimalComp::~MonsterEnvAnimalComp(MonsterEnvAnimalComp *const this)
{
  MonsterEnvAnimalComp::~MonsterEnvAnimalComp(this);
  operator delete(this, 0x18uLL);
};

// Line 27: range 000000001681691C-00000000168169F8
void __cdecl ZN20MonsterEnvAnimalCompCI215MonsterCompBaseER7Monster(MonsterEnvAnimalComp *const this, Monster *a2)
{
  int (**v2)(...); // rdx

  MonsterCompBase::MonsterCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'MonsterEnvAnimalComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_MonsterCompBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->far_away_start_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->far_away_start_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->far_away_start_time_);
  }
  this->far_away_start_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->escape_start_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->escape_start_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->escape_start_time_);
  }
  this->escape_start_time_ = 0;
};
