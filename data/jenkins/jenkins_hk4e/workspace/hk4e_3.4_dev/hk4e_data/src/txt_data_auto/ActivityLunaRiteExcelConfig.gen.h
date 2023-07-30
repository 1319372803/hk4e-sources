// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ActivityLunaRiteExcelConfig.gen.h

// Line 42: range 00000000133BE022-00000000133BE161
void __cdecl data::LunaRitePreviewExcelConfig::LunaRitePreviewExcelConfig(
        data::LunaRitePreviewExcelConfig *const this,
        const data::LunaRitePreviewExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t activity_id; // ecx
  char v7; // dl
  const data::LunaRitePreviewExcelConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::LunaRitePreviewExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_LunaRitePreviewExcelConfig = v2;
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
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->activity_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->activity_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->activity_id);
  }
  activity_id = v8->activity_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->activity_id, v5);
  }
  this->activity_id = activity_id;
};

// Line 45: range 0000000013423F44-0000000013423F85
void __cdecl data::LunaRitePreviewExcelConfig::~LunaRitePreviewExcelConfig(
        data::LunaRitePreviewExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::LunaRitePreviewExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_LunaRitePreviewExcelConfig = v2;
};

// Line 45: range 0000000013423F86-0000000013423FB0
void __cdecl data::LunaRitePreviewExcelConfig::~LunaRitePreviewExcelConfig(
        data::LunaRitePreviewExcelConfig *const this)
{
  data::LunaRitePreviewExcelConfig::~LunaRitePreviewExcelConfig(this);
  operator delete(this, 0x10uLL);
};

// Line 57: range 00000000133BE2A2-00000000133BE5D5
void __cdecl data::LunaRiteSearchingExcelConfig::LunaRiteSearchingExcelConfig(
        data::LunaRiteSearchingExcelConfig *const this,
        const data::LunaRiteSearchingExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::LunaRiteRegionType region_type; // ecx
  char v7; // dl
  uint32_t chest_cond; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t rune_cond; // ecx
  char v12; // dl
  uint32_t chest_mark_num; // ecx
  char v14; // al
  __int64 v15; // rsi
  uint32_t rune_mark_num; // ecx
  char v17; // dl
  const data::LunaRiteSearchingExcelConfig *v18; // [rsp+0h] [rbp-10h]

  v18 = a2;
  v2 = (int (**)(...))(&`vtable for'data::LunaRiteSearchingExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_LunaRiteSearchingExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v18->region_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->region_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->region_type);
  }
  region_type = v18->region_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->region_type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->region_type, v5);
  }
  this->region_type = region_type;
  if ( *(_BYTE *)(((unsigned __int64)&v18->chest_cond >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->chest_cond >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v18->chest_cond);
  }
  chest_cond = v18->chest_cond;
  v9 = *(_BYTE *)(((unsigned __int64)&this->chest_cond >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->chest_cond, v5);
  }
  this->chest_cond = chest_cond;
  v10 = (((_BYTE)v18 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v18->rune_cond >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->rune_cond >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->rune_cond);
  }
  rune_cond = v18->rune_cond;
  v12 = *(_BYTE *)(((unsigned __int64)&this->rune_cond >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->rune_cond, v10);
  }
  this->rune_cond = rune_cond;
  if ( *(_BYTE *)(((unsigned __int64)&v18->chest_mark_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->chest_mark_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v18->chest_mark_num);
  }
  chest_mark_num = v18->chest_mark_num;
  v14 = *(_BYTE *)(((unsigned __int64)&this->chest_mark_num >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->chest_mark_num, v10);
  }
  this->chest_mark_num = chest_mark_num;
  v15 = (((_BYTE)v18 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v18->rune_mark_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->rune_mark_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->rune_mark_num);
  }
  rune_mark_num = v18->rune_mark_num;
  v17 = *(_BYTE *)(((unsigned __int64)&this->rune_mark_num >> 3) + 0x7FFF8000);
  if ( v17 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v17 )
  {
    LOBYTE(v15) = v17 != 0;
    __asan_report_store4(&this->rune_mark_num, v15);
  }
  this->rune_mark_num = rune_mark_num;
};

// Line 60: range 0000000013423ED6-0000000013423F17
void __cdecl data::LunaRiteSearchingExcelConfig::~LunaRiteSearchingExcelConfig(
        data::LunaRiteSearchingExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::LunaRiteSearchingExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_LunaRiteSearchingExcelConfig = v2;
};

// Line 60: range 0000000013423F18-0000000013423F42
void __cdecl data::LunaRiteSearchingExcelConfig::~LunaRiteSearchingExcelConfig(
        data::LunaRiteSearchingExcelConfig *const this)
{
  data::LunaRiteSearchingExcelConfig::~LunaRiteSearchingExcelConfig(this);
  operator delete(this, 0x20uLL);
};

// Line 76: range 00000000133BE716-00000000133BE94F
void __cdecl data::LunaRiteBattleExcelConfig::LunaRiteBattleExcelConfig(
        data::LunaRiteBattleExcelConfig *const this,
        const data::LunaRiteBattleExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::LunaRiteRegionType region_type; // ecx
  char v7; // dl
  uint32_t consecrate_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t group_bundle_id; // ecx
  char v12; // dl
  const data::LunaRiteBattleExcelConfig *v13; // [rsp+0h] [rbp-10h]

  v13 = a2;
  v2 = (int (**)(...))(&`vtable for'data::LunaRiteBattleExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_LunaRiteBattleExcelConfig = v2;
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
  v5 = (((_BYTE)v13 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->region_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->region_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->region_type);
  }
  region_type = v13->region_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->region_type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->region_type, v5);
  }
  this->region_type = region_type;
  if ( *(_BYTE *)(((unsigned __int64)&v13->consecrate_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->consecrate_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->consecrate_id);
  }
  consecrate_id = v13->consecrate_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->consecrate_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->consecrate_id, v5);
  }
  this->consecrate_id = consecrate_id;
  v10 = (((_BYTE)v13 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->group_bundle_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->group_bundle_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->group_bundle_id);
  }
  group_bundle_id = v13->group_bundle_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->group_bundle_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->group_bundle_id, v10);
  }
  this->group_bundle_id = group_bundle_id;
};

// Line 79: range 0000000013423E68-0000000013423EA9
void __cdecl data::LunaRiteBattleExcelConfig::~LunaRiteBattleExcelConfig(data::LunaRiteBattleExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::LunaRiteBattleExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_LunaRiteBattleExcelConfig = v2;
};

// Line 79: range 0000000013423EAA-0000000013423ED4
void __cdecl data::LunaRiteBattleExcelConfig::~LunaRiteBattleExcelConfig(data::LunaRiteBattleExcelConfig *const this)
{
  data::LunaRiteBattleExcelConfig::~LunaRiteBattleExcelConfig(this);
  operator delete(this, 0x18uLL);
};

// Line 93: range 00000000133BEA90-00000000133BECC9
void __cdecl data::LunaRiteBattleBuffExcelConfig::LunaRiteBattleBuffExcelConfig(
        data::LunaRiteBattleBuffExcelConfig *const this,
        const data::LunaRiteBattleBuffExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::LunaRiteRegionType region_type; // ecx
  char v7; // dl
  uint32_t number; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t reward_id; // ecx
  char v12; // dl
  const data::LunaRiteBattleBuffExcelConfig *v13; // [rsp+0h] [rbp-10h]

  v13 = a2;
  v2 = (int (**)(...))(&`vtable for'data::LunaRiteBattleBuffExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_LunaRiteBattleBuffExcelConfig = v2;
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
  v5 = (((_BYTE)v13 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->region_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->region_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->region_type);
  }
  region_type = v13->region_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->region_type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->region_type, v5);
  }
  this->region_type = region_type;
  if ( *(_BYTE *)(((unsigned __int64)&v13->number >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->number >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->number);
  }
  number = v13->number;
  v9 = *(_BYTE *)(((unsigned __int64)&this->number >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->number, v5);
  }
  this->number = number;
  v10 = (((_BYTE)v13 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->reward_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->reward_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->reward_id);
  }
  reward_id = v13->reward_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->reward_id, v10);
  }
  this->reward_id = reward_id;
};

// Line 96: range 0000000013423DFA-0000000013423E3B
void __cdecl data::LunaRiteBattleBuffExcelConfig::~LunaRiteBattleBuffExcelConfig(
        data::LunaRiteBattleBuffExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::LunaRiteBattleBuffExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_LunaRiteBattleBuffExcelConfig = v2;
};

// Line 96: range 0000000013423E3C-0000000013423E66
void __cdecl data::LunaRiteBattleBuffExcelConfig::~LunaRiteBattleBuffExcelConfig(
        data::LunaRiteBattleBuffExcelConfig *const this)
{
  data::LunaRiteBattleBuffExcelConfig::~LunaRiteBattleBuffExcelConfig(this);
  operator delete(this, 0x18uLL);
};
