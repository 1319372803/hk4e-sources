// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/mechanicus/player_mechanicus_comp.h

// Line 29: range 0000000017635E60-00000000176360AB
MechanicusInfo *__cdecl MechanicusInfo::operator=(MechanicusInfo *const this, MechanicusInfo *a2)
{
  uint32_t mechanicus_id; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t coin; // ecx
  char v6; // dl
  __int64 v7; // rdx
  std::set<unsigned int> *p_open_sequence_id_set; // rsi
  bool is_finish_teach_dungeon; // cl
  char v10; // al
  std::set<unsigned int> *p_finish_difficult_level_set; // rsi
  uint32_t punish_over_time; // ecx
  char v13; // al
  MechanicusInfo *v15; // [rsp+0h] [rbp-10h]

  v15 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  mechanicus_id = a2->mechanicus_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2, this);
  }
  this->mechanicus_id = mechanicus_id;
  v4 = (((_BYTE)v15 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v15->coin >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v15 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v15->coin >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v15->coin);
  }
  coin = v15->coin;
  v6 = *(_BYTE *)(((unsigned __int64)&this->coin >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store4(&this->coin, v4, v7);
  this->coin = coin;
  std::map<unsigned int,unsigned int>::operator=(&this->gear_level_map, &v15->gear_level_map);
  p_open_sequence_id_set = &v15->open_sequence_id_set;
  std::set<unsigned int>::operator=(&this->open_sequence_id_set, &v15->open_sequence_id_set);
  if ( *(char *)(((unsigned __int64)&v15->is_finish_teach_dungeon >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v15->is_finish_teach_dungeon);
  is_finish_teach_dungeon = v15->is_finish_teach_dungeon;
  v10 = *(_BYTE *)(((unsigned __int64)&this->is_finish_teach_dungeon >> 3) + 0x7FFF8000);
  if ( v10 < 0 )
  {
    LOBYTE(p_open_sequence_id_set) = v10 != 0;
    __asan_report_store1(&this->is_finish_teach_dungeon, p_open_sequence_id_set, &this->is_finish_teach_dungeon);
  }
  this->is_finish_teach_dungeon = is_finish_teach_dungeon;
  p_finish_difficult_level_set = &v15->finish_difficult_level_set;
  std::set<unsigned int>::operator=(&this->finish_difficult_level_set, &v15->finish_difficult_level_set);
  if ( *(_BYTE *)(((unsigned __int64)&v15->punish_over_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v15->punish_over_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v15->punish_over_time);
  }
  punish_over_time = v15->punish_over_time;
  v13 = *(_BYTE *)(((unsigned __int64)&this->punish_over_time >> 3) + 0x7FFF8000);
  if ( v13 != 0 && v13 <= 3 )
  {
    LOBYTE(p_finish_difficult_level_set) = v13 != 0;
    __asan_report_store4(&this->punish_over_time, p_finish_difficult_level_set, &this->punish_over_time);
  }
  this->punish_over_time = punish_over_time;
  return this;
};

// Line 29: range 0000000017489066-00000000174891A1
void __cdecl MechanicusInfo::MechanicusInfo(MechanicusInfo *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1, this);
  }
  this->mechanicus_id = 0;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->coin >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->coin >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store4(&this->coin, v2, v3);
  this->coin = 0;
  std::map<unsigned int,unsigned int>::map(&this->gear_level_map);
  std::set<unsigned int>::set(&this->open_sequence_id_set);
  if ( *(char *)(((unsigned __int64)&this->is_finish_teach_dungeon >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_finish_teach_dungeon, v2, &this->is_finish_teach_dungeon);
  this->is_finish_teach_dungeon = 0;
  std::set<unsigned int>::set(&this->finish_difficult_level_set);
  if ( *(_BYTE *)(((unsigned __int64)&this->punish_over_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->punish_over_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->punish_over_time, v2, &this->punish_over_time);
  }
  this->punish_over_time = 0;
};

// Line 29: range 0000000017635E20-0000000017635E5E
void __cdecl MechanicusInfo::~MechanicusInfo(MechanicusInfo *const this)
{
  std::set<unsigned int>::~set(&this->finish_difficult_level_set);
  std::set<unsigned int>::~set(&this->open_sequence_id_set);
  std::map<unsigned int,unsigned int>::~map(&this->gear_level_map);
};

// Line 48: range 000000001788790C-000000001788797B
void __cdecl PlayerMechanicusComp::~PlayerMechanicusComp(PlayerMechanicusComp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlayerMechanicusComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_PlayerCompBase = v2;
  std::weak_ptr<MechanicusMultistagePlay>::~weak_ptr(&this->play_wtr_);
  MechanicusInfo::~MechanicusInfo(&this->cur_mechanicus_);
  PlayerCompBase::~PlayerCompBase(this);
};

// Line 48: range 000000001788797C-00000000178879A6
void __cdecl PlayerMechanicusComp::~PlayerMechanicusComp(PlayerMechanicusComp *const this)
{
  PlayerMechanicusComp::~PlayerMechanicusComp(this);
  operator delete(this, 0xD8uLL);
};

// Line 51: range 00000000172148FB-0000000017214905
uint32_t __cdecl PlayerMechanicusComp::getType()
{
  return 49;
};

// Line 54: range 00000000174891BE-0000000017489238
void __cdecl ZN20PlayerMechanicusCompCI214PlayerCompBaseER6Player(PlayerMechanicusComp *const this, Player *a2)
{
  int (**v2)(...); // rdx

  PlayerCompBase::PlayerCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'PlayerMechanicusComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_PlayerCompBase = v2;
  MechanicusInfo::MechanicusInfo(&this->cur_mechanicus_);
  std::weak_ptr<MechanicusMultistagePlay>::weak_ptr(&this->play_wtr_);
};

// Line 65: range 000000001385BEF4-000000001385BF3B
uint32_t __cdecl PlayerMechanicusComp::getCurMechanicusId(const PlayerMechanicusComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_mechanicus_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_mechanicus_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_mechanicus_);
  }
  return this->cur_mechanicus_.mechanicus_id;
};

// Line 96: range 0000000016050820-000000001605086F
uint32_t __cdecl PlayerMechanicusComp::getCoin(const PlayerMechanicusComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_mechanicus_.coin >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_mechanicus_.coin >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cur_mechanicus_.coin);
  }
  return this->cur_mechanicus_.coin;
};
