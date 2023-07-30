// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/monster/monster_fishtank_fish_comp.h

// Line 18: range 0000000016B7B896-0000000016B7B8E3
void __cdecl MonsterFishtankFishComp::~MonsterFishtankFishComp(MonsterFishtankFishComp *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'MonsterFishtankFishComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_MonsterCompBase = v1;
  MonsterCompBase::~MonsterCompBase(this);
};

// Line 18: range 0000000016B7B8E4-0000000016B7B90E
void __cdecl MonsterFishtankFishComp::~MonsterFishtankFishComp(MonsterFishtankFishComp *const this)
{
  MonsterFishtankFishComp::~MonsterFishtankFishComp(this);
  operator delete(this, 0x20uLL);
};
