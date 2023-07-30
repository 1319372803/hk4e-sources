// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ActivityWinterCampExcelConfig.gen.h

// Line 17: range 00000000141971B2-000000001419726C
void __cdecl data::WinterCampExcelConfig::WinterCampExcelConfig(
        data::WinterCampExcelConfig *const this,
        const data::WinterCampExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t activity_id; // ecx
  char v4; // al

  v2 = (int (**)(...))(&`vtable for'data::WinterCampExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_WinterCampExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->activity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->activity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->activity_id);
  }
  activity_id = a2->activity_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->activity_id, a2);
  }
  this->activity_id = activity_id;
};

// Line 20: range 00000000142A3546-00000000142A3570
void __cdecl data::WinterCampExcelConfig::~WinterCampExcelConfig(data::WinterCampExcelConfig *const this)
{
  data::WinterCampExcelConfig::~WinterCampExcelConfig(this);
  operator delete(this, 0x10uLL);
};

// Line 20: range 00000000142A3504-00000000142A3545
void __cdecl data::WinterCampExcelConfig::~WinterCampExcelConfig(data::WinterCampExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::WinterCampExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_WinterCampExcelConfig = v2;
};

// Line 31: range 00000000141973AE-00000000141976E1
void __cdecl data::WinterCampBattleExcelConfig::WinterCampBattleExcelConfig(
        data::WinterCampBattleExcelConfig *const this,
        const data::WinterCampBattleExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t open_day; // ecx
  char v7; // dl
  uint32_t priority; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t group_link_id; // ecx
  char v12; // dl
  uint32_t challenge_index; // ecx
  char v14; // al
  __int64 v15; // rsi
  uint32_t reward_id; // ecx
  char v17; // dl
  const data::WinterCampBattleExcelConfig *v18; // [rsp+0h] [rbp-10h]

  v18 = a2;
  v2 = (int (**)(...))(&`vtable for'data::WinterCampBattleExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_WinterCampBattleExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->id);
  }
  id = a2->id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->id, a2);
  }
  this->id = id;
  v5 = (((_BYTE)v18 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v18->open_day >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->open_day >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->open_day);
  }
  open_day = v18->open_day;
  v7 = *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->open_day, v5);
  }
  this->open_day = open_day;
  if ( *(_BYTE *)(((unsigned __int64)&v18->priority >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->priority >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v18->priority);
  }
  priority = v18->priority;
  v9 = *(_BYTE *)(((unsigned __int64)&this->priority >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->priority, v5);
  }
  this->priority = priority;
  v10 = (((_BYTE)v18 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v18->group_link_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->group_link_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->group_link_id);
  }
  group_link_id = v18->group_link_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->group_link_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->group_link_id, v10);
  }
  this->group_link_id = group_link_id;
  if ( *(_BYTE *)(((unsigned __int64)&v18->challenge_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->challenge_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v18->challenge_index);
  }
  challenge_index = v18->challenge_index;
  v14 = *(_BYTE *)(((unsigned __int64)&this->challenge_index >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->challenge_index, v10);
  }
  this->challenge_index = challenge_index;
  v15 = (((_BYTE)v18 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v18->reward_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->reward_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->reward_id);
  }
  reward_id = v18->reward_id;
  v17 = *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000);
  if ( v17 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v17 )
  {
    LOBYTE(v15) = v17 != 0;
    __asan_report_store4(&this->reward_id, v15);
  }
  this->reward_id = reward_id;
};

// Line 34: range 00000000142A3496-00000000142A34D7
void __cdecl data::WinterCampBattleExcelConfig::~WinterCampBattleExcelConfig(
        data::WinterCampBattleExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::WinterCampBattleExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_WinterCampBattleExcelConfig = v2;
};

// Line 34: range 00000000142A34D8-00000000142A3502
void __cdecl data::WinterCampBattleExcelConfig::~WinterCampBattleExcelConfig(
        data::WinterCampBattleExcelConfig *const this)
{
  data::WinterCampBattleExcelConfig::~WinterCampBattleExcelConfig(this);
  operator delete(this, 0x20uLL);
};

// Line 50: range 00000000140E7506-00000000140E7557
void __cdecl data::WinterCampDropGroup::WinterCampDropGroup(data::WinterCampDropGroup *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::WinterCampDropGroup + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_WinterCampDropGroup = v2;
  std::vector<unsigned int>::vector(&this->drop_id);
};

// Line 50: range 00000000141970CE-000000001419712E
void __cdecl data::WinterCampDropGroup::WinterCampDropGroup(
        data::WinterCampDropGroup *const this,
        const data::WinterCampDropGroup *a2)
{
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::WinterCampDropGroup + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_WinterCampDropGroup = v2;
  std::vector<unsigned int>::vector(&this->drop_id, &a2->drop_id);
};

// Line 53: range 0000000014001960-00000000140019B1
void __cdecl data::WinterCampDropGroup::~WinterCampDropGroup(data::WinterCampDropGroup *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::WinterCampDropGroup + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_WinterCampDropGroup = v2;
  std::vector<unsigned int>::~vector(&this->drop_id);
};

// Line 53: range 00000000140019B2-00000000140019DC
void __cdecl data::WinterCampDropGroup::~WinterCampDropGroup(data::WinterCampDropGroup *const this)
{
  data::WinterCampDropGroup::~WinterCampDropGroup(this);
  operator delete(this, 0x20uLL);
};

// Line 62: range 0000000013BDAA14-0000000013BDABF1
void __cdecl data::WinterCampExploreExcelConfig::WinterCampExploreExcelConfig(
        data::WinterCampExploreExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi

  v2 = (int (**)(...))(&`vtable for'data::WinterCampExploreExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_WinterCampExploreExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->open_day, v3);
  }
  this->open_day = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->priority >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->priority >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->priority, v3);
  }
  this->priority = 0;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->group_id, v4);
  }
  this->group_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_link_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->group_link_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->group_link_id, v4);
  }
  this->group_link_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->reward_id, (((_BYTE)this + 28) & 7u) + 3);
  }
  this->reward_id = 0;
  std::vector<data::WinterCampDropGroup>::vector(&this->drop_groups);
};

// Line 62: range 0000000014197822-0000000014197B70
void __cdecl data::WinterCampExploreExcelConfig::WinterCampExploreExcelConfig(
        data::WinterCampExploreExcelConfig *const this,
        const data::WinterCampExploreExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t open_day; // ecx
  char v7; // dl
  uint32_t priority; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t group_id; // ecx
  char v12; // dl
  uint32_t group_link_id; // ecx
  char v14; // al
  __int64 v15; // rsi
  uint32_t reward_id; // ecx
  char v17; // dl
  const data::WinterCampExploreExcelConfig *v18; // [rsp+0h] [rbp-10h]

  v18 = a2;
  v2 = (int (**)(...))(&`vtable for'data::WinterCampExploreExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_WinterCampExploreExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->id);
  }
  id = a2->id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->id, a2);
  }
  this->id = id;
  v5 = (((_BYTE)v18 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v18->open_day >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->open_day >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->open_day);
  }
  open_day = v18->open_day;
  v7 = *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->open_day, v5);
  }
  this->open_day = open_day;
  if ( *(_BYTE *)(((unsigned __int64)&v18->priority >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->priority >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v18->priority);
  }
  priority = v18->priority;
  v9 = *(_BYTE *)(((unsigned __int64)&this->priority >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->priority, v5);
  }
  this->priority = priority;
  v10 = (((_BYTE)v18 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v18->group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->group_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->group_id);
  }
  group_id = v18->group_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->group_id, v10);
  }
  this->group_id = group_id;
  if ( *(_BYTE *)(((unsigned __int64)&v18->group_link_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->group_link_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v18->group_link_id);
  }
  group_link_id = v18->group_link_id;
  v14 = *(_BYTE *)(((unsigned __int64)&this->group_link_id >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->group_link_id, v10);
  }
  this->group_link_id = group_link_id;
  v15 = (((_BYTE)v18 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v18->reward_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->reward_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->reward_id);
  }
  reward_id = v18->reward_id;
  v17 = *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000);
  if ( v17 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v17 )
  {
    LOBYTE(v15) = v17 != 0;
    __asan_report_store4(&this->reward_id, v15);
  }
  this->reward_id = reward_id;
  std::vector<data::WinterCampDropGroup>::vector(&this->drop_groups, &v18->drop_groups);
};

// Line 65: range 00000000142A3418-00000000142A3469
void __cdecl data::WinterCampExploreExcelConfig::~WinterCampExploreExcelConfig(
        data::WinterCampExploreExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::WinterCampExploreExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_WinterCampExploreExcelConfig = v2;
  std::vector<data::WinterCampDropGroup>::~vector(&this->drop_groups);
};

// Line 65: range 00000000142A346A-00000000142A3494
void __cdecl data::WinterCampExploreExcelConfig::~WinterCampExploreExcelConfig(
        data::WinterCampExploreExcelConfig *const this)
{
  data::WinterCampExploreExcelConfig::~WinterCampExploreExcelConfig(this);
  operator delete(this, 0x38uLL);
};

// Line 82: range 0000000013BDABF2-0000000013BDAE0D
void __cdecl data::WinterCampRaceExcelConfig::WinterCampRaceExcelConfig(data::WinterCampRaceExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi

  v2 = (int (**)(...))(&`vtable for'data::WinterCampRaceExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_WinterCampRaceExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->open_day, v3);
  }
  this->open_day = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gallery_id, v3);
  }
  this->gallery_id = 0;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_link_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->group_link_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->group_link_id, v4);
  }
  this->group_link_id = 0;
  std::vector<unsigned int>::vector(&this->score_watcher);
  if ( *(_BYTE *)(((unsigned __int64)&this->time_factor >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_factor >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_factor, v4);
  }
  this->time_factor = 0;
  v5 = (((_BYTE)this + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->gold_factor >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gold_factor >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gold_factor, v5);
  }
  this->gold_factor = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->limited_gold_factor >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->limited_gold_factor >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->limited_gold_factor, v5);
  }
  this->limited_gold_factor = 0;
};

// Line 82: range 0000000014197CB2-0000000014198075
void __cdecl data::WinterCampRaceExcelConfig::WinterCampRaceExcelConfig(
        data::WinterCampRaceExcelConfig *const this,
        const data::WinterCampRaceExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t open_day; // ecx
  char v7; // dl
  uint32_t gallery_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t group_link_id; // ecx
  char v12; // dl
  std::vector<unsigned int> *p_score_watcher; // rsi
  uint32_t time_factor; // ecx
  char v15; // al
  __int64 v16; // rsi
  uint32_t gold_factor; // ecx
  char v18; // dl
  uint32_t limited_gold_factor; // ecx
  char v20; // al
  const data::WinterCampRaceExcelConfig *v21; // [rsp+0h] [rbp-10h]

  v21 = a2;
  v2 = (int (**)(...))(&`vtable for'data::WinterCampRaceExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_WinterCampRaceExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->id);
  }
  id = a2->id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->id, a2);
  }
  this->id = id;
  v5 = (((_BYTE)v21 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v21->open_day >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v21 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v21->open_day >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v21->open_day);
  }
  open_day = v21->open_day;
  v7 = *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->open_day, v5);
  }
  this->open_day = open_day;
  if ( *(_BYTE *)(((unsigned __int64)&v21->gallery_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v21->gallery_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v21->gallery_id);
  }
  gallery_id = v21->gallery_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->gallery_id, v5);
  }
  this->gallery_id = gallery_id;
  v10 = (((_BYTE)v21 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v21->group_link_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v21 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v21->group_link_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v21->group_link_id);
  }
  group_link_id = v21->group_link_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->group_link_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->group_link_id, v10);
  }
  this->group_link_id = group_link_id;
  p_score_watcher = &v21->score_watcher;
  std::vector<unsigned int>::vector(&this->score_watcher, &v21->score_watcher);
  if ( *(_BYTE *)(((unsigned __int64)&v21->time_factor >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v21->time_factor >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v21->time_factor);
  }
  time_factor = v21->time_factor;
  v15 = *(_BYTE *)(((unsigned __int64)&this->time_factor >> 3) + 0x7FFF8000);
  if ( v15 != 0 && v15 <= 3 )
  {
    LOBYTE(p_score_watcher) = v15 != 0;
    __asan_report_store4(&this->time_factor, p_score_watcher);
  }
  this->time_factor = time_factor;
  v16 = (((_BYTE)v21 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v21->gold_factor >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v21 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v21->gold_factor >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v21->gold_factor);
  }
  gold_factor = v21->gold_factor;
  v18 = *(_BYTE *)(((unsigned __int64)&this->gold_factor >> 3) + 0x7FFF8000);
  if ( v18 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v18 )
  {
    LOBYTE(v16) = v18 != 0;
    __asan_report_store4(&this->gold_factor, v16);
  }
  this->gold_factor = gold_factor;
  if ( *(_BYTE *)(((unsigned __int64)&v21->limited_gold_factor >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v21->limited_gold_factor >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v21->limited_gold_factor);
  }
  limited_gold_factor = v21->limited_gold_factor;
  v20 = *(_BYTE *)(((unsigned __int64)&this->limited_gold_factor >> 3) + 0x7FFF8000);
  if ( v20 != 0 && v20 <= 3 )
  {
    LOBYTE(v16) = v20 != 0;
    __asan_report_store4(&this->limited_gold_factor, v16);
  }
  this->limited_gold_factor = limited_gold_factor;
};

// Line 85: range 00000000142A33EC-00000000142A3416
void __cdecl data::WinterCampRaceExcelConfig::~WinterCampRaceExcelConfig(data::WinterCampRaceExcelConfig *const this)
{
  data::WinterCampRaceExcelConfig::~WinterCampRaceExcelConfig(this);
  operator delete(this, 0x40uLL);
};

// Line 85: range 00000000142A339A-00000000142A33EB
void __cdecl data::WinterCampRaceExcelConfig::~WinterCampRaceExcelConfig(data::WinterCampRaceExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::WinterCampRaceExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_WinterCampRaceExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->score_watcher);
};

// Line 103: range 0000000013BDAE0E-0000000013BDAEAD
void __cdecl data::WinterCampSnowmanExcelConfig::WinterCampSnowmanExcelConfig(
        data::WinterCampSnowmanExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::WinterCampSnowmanExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_WinterCampSnowmanExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  std::vector<unsigned int>::vector(&this->item_id_list);
  std::vector<unsigned int>::vector(&this->group_id_list);
};

// Line 103: range 00000000141981B6-00000000141982CD
void __cdecl data::WinterCampSnowmanExcelConfig::WinterCampSnowmanExcelConfig(
        data::WinterCampSnowmanExcelConfig *const this,
        const data::WinterCampSnowmanExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  const data::WinterCampSnowmanExcelConfig *v5; // [rsp+0h] [rbp-20h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::WinterCampSnowmanExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_WinterCampSnowmanExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->id);
  }
  id = a2->id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->id, a2);
  }
  this->id = id;
  std::vector<unsigned int>::vector(&this->item_id_list, &v5->item_id_list);
  std::vector<unsigned int>::vector(&this->group_id_list, &v5->group_id_list);
};

// Line 106: range 00000000142A336E-00000000142A3398
void __cdecl data::WinterCampSnowmanExcelConfig::~WinterCampSnowmanExcelConfig(
        data::WinterCampSnowmanExcelConfig *const this)
{
  data::WinterCampSnowmanExcelConfig::~WinterCampSnowmanExcelConfig(this);
  operator delete(this, 0x40uLL);
};

// Line 106: range 00000000142A330C-00000000142A336D
void __cdecl data::WinterCampSnowmanExcelConfig::~WinterCampSnowmanExcelConfig(
        data::WinterCampSnowmanExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::WinterCampSnowmanExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_WinterCampSnowmanExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->group_id_list);
  std::vector<unsigned int>::~vector(&this->item_id_list);
};
