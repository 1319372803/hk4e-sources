// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/giving/player_giving_comp.h

// Line 18: range 0000000016790A40-0000000016790A5E
void __cdecl GivingRecord::~GivingRecord(GivingRecord *const this)
{
  std::map<unsigned int,unsigned int>::~map(&this->material_cnt_map);
};

// Line 31: range 00000000168322E6-0000000016832343
void __cdecl PlayerGivingComp::~PlayerGivingComp(PlayerGivingComp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlayerGivingComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_PlayerCompBase = v2;
  std::map<unsigned int,GivingRecord>::~map(&this->giving_record_map_);
  PlayerCompBase::~PlayerCompBase(this);
};

// Line 31: range 0000000016832344-000000001683236E
void __cdecl PlayerGivingComp::~PlayerGivingComp(PlayerGivingComp *const this)
{
  PlayerGivingComp::~PlayerGivingComp(this);
  operator delete(this, 0x50uLL);
};

// Line 34: range 0000000017213FBA-0000000017213FC4
uint32_t __cdecl PlayerGivingComp::getType()
{
  return 21;
};

// Line 37: range 000000001747ED7E-000000001747EDE6
void __cdecl ZN16PlayerGivingCompCI214PlayerCompBaseER6Player(PlayerGivingComp *const this, Player *a2)
{
  int (**v2)(...); // rdx

  PlayerCompBase::PlayerCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'PlayerGivingComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_PlayerCompBase = v2;
  std::map<unsigned int,GivingRecord>::map(&this->giving_record_map_);
};

// Line 353: range 00000000167EABF2-00000000167EAD8B
void __cdecl GivingRecord::GivingRecord(GivingRecord *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1, this);
  }
  this->giving_id = 0;
  v2 = ((_BYTE)this + 4) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_finished >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_finished >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_finished, v2, v3);
  this->is_finished = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_group_id, v2, &this->last_group_id);
  }
  this->last_group_id = 0;
  v4 = ((_BYTE)this + 12) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->is_gadget_giving >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->is_gadget_giving >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->is_gadget_giving, v4, v5);
  this->is_gadget_giving = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->group_id, v4, &this->group_id);
  }
  this->group_id = 0;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store4(&this->config_id, (((_BYTE)this + 20) & 7u) + 3, v6);
  this->config_id = 0;
  std::map<unsigned int,unsigned int>::map(&this->material_cnt_map);
};
