// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/TeamResonanceExcelConfig.gen.h

// Line 40: range 000000000CE19FFA-000000000CE1A367
void __cdecl data::TeamResonanceExcelConfig::TeamResonanceExcelConfig(data::TeamResonanceExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rsi

  data::BaseTalentConfig::BaseTalentConfig(this);
  v2 = (int (**)(...))(&`vtable for'data::TeamResonanceExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseTalentConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->team_resonance_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->team_resonance_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->team_resonance_id, v1);
  }
  this->team_resonance_id = 0;
  v3 = (((_BYTE)this + 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->team_resonance_group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->team_resonance_group_id >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->team_resonance_group_id, v3);
  }
  this->team_resonance_group_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level, v3);
  }
  this->level = 0;
  v4 = (((_BYTE)this + 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->fire_avatar_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->fire_avatar_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->fire_avatar_count, v4);
  }
  this->fire_avatar_count = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->water_avatar_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->water_avatar_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->water_avatar_count, v4);
  }
  this->water_avatar_count = 0;
  v5 = (((_BYTE)this + 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->grass_avatar_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->grass_avatar_count >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->grass_avatar_count, v5);
  }
  this->grass_avatar_count = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->electric_avatar_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->electric_avatar_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->electric_avatar_count, v5);
  }
  this->electric_avatar_count = 0;
  v6 = (((_BYTE)this + 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->ice_avatar_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->ice_avatar_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->ice_avatar_count, v6);
  }
  this->ice_avatar_count = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->wind_avatar_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->wind_avatar_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->wind_avatar_count, v6);
  }
  this->wind_avatar_count = 0;
  v7 = (((_BYTE)this + 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->rock_avatar_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->rock_avatar_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->rock_avatar_count, v7);
  }
  this->rock_avatar_count = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cond >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cond >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cond, v7);
  }
  this->cond = TEAM_RESONANCE_COND_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->min_total_promote_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->min_total_promote_level >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->min_total_promote_level, (((_BYTE)this - 124) & 7u) + 3);
  }
  this->min_total_promote_level = 0;
};

// Line 40: range 000000000D3730AE-000000000D3736F2
void __cdecl data::TeamResonanceExcelConfig::TeamResonanceExcelConfig(
        data::TeamResonanceExcelConfig *const this,
        const data::TeamResonanceExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t team_resonance_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t team_resonance_group_id; // ecx
  char v7; // dl
  uint32_t level; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t fire_avatar_count; // ecx
  char v12; // dl
  uint32_t water_avatar_count; // ecx
  char v14; // al
  __int64 v15; // rsi
  uint32_t grass_avatar_count; // ecx
  char v17; // dl
  uint32_t electric_avatar_count; // ecx
  char v19; // al
  __int64 v20; // rsi
  uint32_t ice_avatar_count; // ecx
  char v22; // dl
  uint32_t wind_avatar_count; // ecx
  char v24; // al
  __int64 v25; // rsi
  uint32_t rock_avatar_count; // ecx
  char v27; // dl
  data::TeamResonanceCondType cond; // ecx
  char v29; // al
  __int64 v30; // rsi
  uint32_t min_total_promote_level; // ecx
  char v32; // dl
  const data::TeamResonanceExcelConfig *v33; // [rsp+0h] [rbp-10h]

  v33 = a2;
  data::BaseTalentConfig::BaseTalentConfig(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::TeamResonanceExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_BaseTalentConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->team_resonance_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->team_resonance_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->team_resonance_id);
  }
  team_resonance_id = a2->team_resonance_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->team_resonance_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->team_resonance_id, a2);
  }
  this->team_resonance_id = team_resonance_id;
  v5 = (((_BYTE)v33 + 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v33->team_resonance_group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v33 + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v33->team_resonance_group_id >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v33->team_resonance_group_id);
  }
  team_resonance_group_id = v33->team_resonance_group_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->team_resonance_group_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 92) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->team_resonance_group_id, v5);
  }
  this->team_resonance_group_id = team_resonance_group_id;
  if ( *(_BYTE *)(((unsigned __int64)&v33->level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v33->level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v33->level);
  }
  level = v33->level;
  v9 = *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->level, v5);
  }
  this->level = level;
  v10 = (((_BYTE)v33 + 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v33->fire_avatar_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v33 + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v33->fire_avatar_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v33->fire_avatar_count);
  }
  fire_avatar_count = v33->fire_avatar_count;
  v12 = *(_BYTE *)(((unsigned __int64)&this->fire_avatar_count >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 100) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->fire_avatar_count, v10);
  }
  this->fire_avatar_count = fire_avatar_count;
  if ( *(_BYTE *)(((unsigned __int64)&v33->water_avatar_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v33->water_avatar_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v33->water_avatar_count);
  }
  water_avatar_count = v33->water_avatar_count;
  v14 = *(_BYTE *)(((unsigned __int64)&this->water_avatar_count >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->water_avatar_count, v10);
  }
  this->water_avatar_count = water_avatar_count;
  v15 = (((_BYTE)v33 + 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v33->grass_avatar_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v33 + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v33->grass_avatar_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v33->grass_avatar_count);
  }
  grass_avatar_count = v33->grass_avatar_count;
  v17 = *(_BYTE *)(((unsigned __int64)&this->grass_avatar_count >> 3) + 0x7FFF8000);
  if ( v17 != 0 && (char)((((_BYTE)this + 108) & 7) + 3) >= v17 )
  {
    LOBYTE(v15) = v17 != 0;
    __asan_report_store4(&this->grass_avatar_count, v15);
  }
  this->grass_avatar_count = grass_avatar_count;
  if ( *(_BYTE *)(((unsigned __int64)&v33->electric_avatar_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v33->electric_avatar_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v33->electric_avatar_count);
  }
  electric_avatar_count = v33->electric_avatar_count;
  v19 = *(_BYTE *)(((unsigned __int64)&this->electric_avatar_count >> 3) + 0x7FFF8000);
  if ( v19 != 0 && v19 <= 3 )
  {
    LOBYTE(v15) = v19 != 0;
    __asan_report_store4(&this->electric_avatar_count, v15);
  }
  this->electric_avatar_count = electric_avatar_count;
  v20 = (((_BYTE)v33 + 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v33->ice_avatar_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v33 + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v33->ice_avatar_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v33->ice_avatar_count);
  }
  ice_avatar_count = v33->ice_avatar_count;
  v22 = *(_BYTE *)(((unsigned __int64)&this->ice_avatar_count >> 3) + 0x7FFF8000);
  if ( v22 != 0 && (char)((((_BYTE)this + 116) & 7) + 3) >= v22 )
  {
    LOBYTE(v20) = v22 != 0;
    __asan_report_store4(&this->ice_avatar_count, v20);
  }
  this->ice_avatar_count = ice_avatar_count;
  if ( *(_BYTE *)(((unsigned __int64)&v33->wind_avatar_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v33->wind_avatar_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v33->wind_avatar_count);
  }
  wind_avatar_count = v33->wind_avatar_count;
  v24 = *(_BYTE *)(((unsigned __int64)&this->wind_avatar_count >> 3) + 0x7FFF8000);
  if ( v24 != 0 && v24 <= 3 )
  {
    LOBYTE(v20) = v24 != 0;
    __asan_report_store4(&this->wind_avatar_count, v20);
  }
  this->wind_avatar_count = wind_avatar_count;
  v25 = (((_BYTE)v33 + 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v33->rock_avatar_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v33 + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v33->rock_avatar_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v33->rock_avatar_count);
  }
  rock_avatar_count = v33->rock_avatar_count;
  v27 = *(_BYTE *)(((unsigned __int64)&this->rock_avatar_count >> 3) + 0x7FFF8000);
  if ( v27 != 0 && (char)((((_BYTE)this + 124) & 7) + 3) >= v27 )
  {
    LOBYTE(v25) = v27 != 0;
    __asan_report_store4(&this->rock_avatar_count, v25);
  }
  this->rock_avatar_count = rock_avatar_count;
  if ( *(_BYTE *)(((unsigned __int64)&v33->cond >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v33->cond >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v33->cond);
  }
  cond = v33->cond;
  v29 = *(_BYTE *)(((unsigned __int64)&this->cond >> 3) + 0x7FFF8000);
  if ( v29 != 0 && v29 <= 3 )
  {
    LOBYTE(v25) = v29 != 0;
    __asan_report_store4(&this->cond, v25);
  }
  this->cond = cond;
  v30 = (((_BYTE)v33 - 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v33->min_total_promote_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v33 - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v33->min_total_promote_level >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&v33->min_total_promote_level);
  }
  min_total_promote_level = v33->min_total_promote_level;
  v32 = *(_BYTE *)(((unsigned __int64)&this->min_total_promote_level >> 3) + 0x7FFF8000);
  if ( v32 != 0 && (char)((((_BYTE)this - 124) & 7) + 3) >= v32 )
  {
    LOBYTE(v30) = v32 != 0;
    __asan_report_store4(&this->min_total_promote_level, v30);
  }
  this->min_total_promote_level = min_total_promote_level;
};

// Line 44: range 000000000D49207E-000000000D4920CB
void __cdecl data::TeamResonanceExcelConfig::~TeamResonanceExcelConfig(data::TeamResonanceExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::TeamResonanceExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseTalentConfig = v2;
  data::BaseTalentConfig::~BaseTalentConfig(this);
};

// Line 44: range 000000000D4920CC-000000000D4920F6
void __cdecl data::TeamResonanceExcelConfig::~TeamResonanceExcelConfig(data::TeamResonanceExcelConfig *const this)
{
  data::TeamResonanceExcelConfig::~TeamResonanceExcelConfig(this);
  operator delete(this, 0x88uLL);
};
