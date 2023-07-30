// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/combine/player_combine_comp.h

// Line 22: range 00000000178872EC-0000000017887359
void __cdecl PlayerCombineComp::~PlayerCombineComp(PlayerCombineComp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlayerCombineComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_PlayerCompBase = v2;
  std::set<unsigned long>::~set(&this->temp_reliquary_guid_set_);
  std::unordered_set<unsigned int>::~unordered_set(&this->unlock_combine_id_set_);
  PlayerCompBase::~PlayerCompBase(this);
};

// Line 22: range 000000001788735A-0000000017887384
void __cdecl PlayerCombineComp::~PlayerCombineComp(PlayerCombineComp *const this)
{
  PlayerCombineComp::~PlayerCombineComp(this);
  operator delete(this, 0x88uLL);
};

// Line 25: range 00000000172141D9-00000000172141E3
uint32_t __cdecl PlayerCombineComp::getType()
{
  return 44;
};

// Line 28: range 0000000017487E28-0000000017487EA0
void __cdecl ZN17PlayerCombineCompCI214PlayerCompBaseER6Player(PlayerCombineComp *const this, Player *a2)
{
  int (**v2)(...); // rdx

  PlayerCompBase::PlayerCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'PlayerCombineComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_PlayerCompBase = v2;
  std::unordered_set<unsigned int>::unordered_set(&this->unlock_combine_id_set_);
  std::set<unsigned long>::set(&this->temp_reliquary_guid_set_);
};

// Line 50: range 00000000180ADE9E-00000000180ADF03
void __cdecl PlayerCombineComp::refreshCombine(PlayerCombineComp *const this)
{
  void (__fastcall **v1)(PlayerCombineComp *const); // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v1 = (void (__fastcall **)(PlayerCombineComp *const))(this->_vptr_PlayerCompBase + 10);
  if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
    __asan_report_load8(this->_vptr_PlayerCompBase + 10);
  (*v1)(this);
};
