// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ActivityTanukiTravelExcelConfig.gen.h

// Line 17: range 0000000013BD7916-0000000013BD7A29
void __cdecl data::ActivityTanukiTravelDataExcelConfig::ActivityTanukiTravelDataExcelConfig(
        data::ActivityTanukiTravelDataExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::ActivityTanukiTravelDataExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityTanukiTravelDataExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->activity_id, v3);
  }
  this->activity_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->guide_quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->guide_quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->guide_quest_id, v3);
  }
  this->guide_quest_id = 0;
  std::vector<unsigned int>::vector(&this->activity_open_list);
};

// Line 17: range 000000001418F980-000000001418FB4F
void __cdecl data::ActivityTanukiTravelDataExcelConfig::ActivityTanukiTravelDataExcelConfig(
        data::ActivityTanukiTravelDataExcelConfig *const this,
        const data::ActivityTanukiTravelDataExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t activity_id; // ecx
  char v7; // dl
  uint32_t guide_quest_id; // ecx
  char v9; // al
  const data::ActivityTanukiTravelDataExcelConfig *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ActivityTanukiTravelDataExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ActivityTanukiTravelDataExcelConfig = v2;
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
  v5 = (((_BYTE)v10 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->activity_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->activity_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->activity_id);
  }
  activity_id = v10->activity_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->activity_id, v5);
  }
  this->activity_id = activity_id;
  if ( *(_BYTE *)(((unsigned __int64)&v10->guide_quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->guide_quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->guide_quest_id);
  }
  guide_quest_id = v10->guide_quest_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->guide_quest_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->guide_quest_id, v5);
  }
  this->guide_quest_id = guide_quest_id;
  std::vector<unsigned int>::vector(&this->activity_open_list, &v10->activity_open_list);
};

// Line 20: range 00000000142A2FF8-00000000142A3049
void __cdecl data::ActivityTanukiTravelDataExcelConfig::~ActivityTanukiTravelDataExcelConfig(
        data::ActivityTanukiTravelDataExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivityTanukiTravelDataExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityTanukiTravelDataExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->activity_open_list);
};

// Line 20: range 00000000142A304A-00000000142A3074
void __cdecl data::ActivityTanukiTravelDataExcelConfig::~ActivityTanukiTravelDataExcelConfig(
        data::ActivityTanukiTravelDataExcelConfig *const this)
{
  data::ActivityTanukiTravelDataExcelConfig::~ActivityTanukiTravelDataExcelConfig(this);
  operator delete(this, 0x30uLL);
};

// Line 34: range 000000001418FC90-00000000141900BD
void __cdecl data::ActivityTanukiTravelRouteDataExcelConfig::ActivityTanukiTravelRouteDataExcelConfig(
        data::ActivityTanukiTravelRouteDataExcelConfig *const this,
        const data::ActivityTanukiTravelRouteDataExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t open_index; // ecx
  char v7; // dl
  uint32_t open_day_index; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t quest_id; // ecx
  char v12; // dl
  uint32_t watcher_id; // ecx
  char v14; // al
  __int64 v15; // rsi
  uint32_t needed_home_quest_id; // ecx
  char v17; // dl
  uint32_t needed_fish_quest_id; // ecx
  char v19; // al
  __int64 v20; // rsi
  uint32_t route_last_quest_id; // ecx
  char v22; // dl
  const data::ActivityTanukiTravelRouteDataExcelConfig *v23; // [rsp+0h] [rbp-10h]

  v23 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ActivityTanukiTravelRouteDataExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ActivityTanukiTravelRouteDataExcelConfig = v2;
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
  v5 = (((_BYTE)v23 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v23->open_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v23 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->open_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v23->open_index);
  }
  open_index = v23->open_index;
  v7 = *(_BYTE *)(((unsigned __int64)&this->open_index >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->open_index, v5);
  }
  this->open_index = open_index;
  if ( *(_BYTE *)(((unsigned __int64)&v23->open_day_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->open_day_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v23->open_day_index);
  }
  open_day_index = v23->open_day_index;
  v9 = *(_BYTE *)(((unsigned __int64)&this->open_day_index >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->open_day_index, v5);
  }
  this->open_day_index = open_day_index;
  v10 = (((_BYTE)v23 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v23->quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v23 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->quest_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v23->quest_id);
  }
  quest_id = v23->quest_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->quest_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->quest_id, v10);
  }
  this->quest_id = quest_id;
  if ( *(_BYTE *)(((unsigned __int64)&v23->watcher_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->watcher_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v23->watcher_id);
  }
  watcher_id = v23->watcher_id;
  v14 = *(_BYTE *)(((unsigned __int64)&this->watcher_id >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->watcher_id, v10);
  }
  this->watcher_id = watcher_id;
  v15 = (((_BYTE)v23 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v23->needed_home_quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v23 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->needed_home_quest_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v23->needed_home_quest_id);
  }
  needed_home_quest_id = v23->needed_home_quest_id;
  v17 = *(_BYTE *)(((unsigned __int64)&this->needed_home_quest_id >> 3) + 0x7FFF8000);
  if ( v17 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v17 )
  {
    LOBYTE(v15) = v17 != 0;
    __asan_report_store4(&this->needed_home_quest_id, v15);
  }
  this->needed_home_quest_id = needed_home_quest_id;
  if ( *(_BYTE *)(((unsigned __int64)&v23->needed_fish_quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->needed_fish_quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v23->needed_fish_quest_id);
  }
  needed_fish_quest_id = v23->needed_fish_quest_id;
  v19 = *(_BYTE *)(((unsigned __int64)&this->needed_fish_quest_id >> 3) + 0x7FFF8000);
  if ( v19 != 0 && v19 <= 3 )
  {
    LOBYTE(v15) = v19 != 0;
    __asan_report_store4(&this->needed_fish_quest_id, v15);
  }
  this->needed_fish_quest_id = needed_fish_quest_id;
  v20 = (((_BYTE)v23 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v23->route_last_quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v23 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->route_last_quest_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v23->route_last_quest_id);
  }
  route_last_quest_id = v23->route_last_quest_id;
  v22 = *(_BYTE *)(((unsigned __int64)&this->route_last_quest_id >> 3) + 0x7FFF8000);
  if ( v22 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v22 )
  {
    LOBYTE(v20) = v22 != 0;
    __asan_report_store4(&this->route_last_quest_id, v20);
  }
  this->route_last_quest_id = route_last_quest_id;
};

// Line 37: range 00000000142A2F8A-00000000142A2FCB
void __cdecl data::ActivityTanukiTravelRouteDataExcelConfig::~ActivityTanukiTravelRouteDataExcelConfig(
        data::ActivityTanukiTravelRouteDataExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivityTanukiTravelRouteDataExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityTanukiTravelRouteDataExcelConfig = v2;
};

// Line 37: range 00000000142A2FCC-00000000142A2FF6
void __cdecl data::ActivityTanukiTravelRouteDataExcelConfig::~ActivityTanukiTravelRouteDataExcelConfig(
        data::ActivityTanukiTravelRouteDataExcelConfig *const this)
{
  data::ActivityTanukiTravelRouteDataExcelConfig::~ActivityTanukiTravelRouteDataExcelConfig(this);
  operator delete(this, 0x28uLL);
};
