// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/RegionPlayLevelExcelConfig.gen.h

// Line 17: range 0000000014D69EEC-0000000014D6A0A6
void __cdecl data::DeathRegionLevelExcelConfig::DeathRegionLevelExcelConfig(
        data::DeathRegionLevelExcelConfig *const this,
        const data::DeathRegionLevelExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t death_zone_level; // ecx
  char v4; // al
  float base_erosion; // xmm0_4
  __int64 v6; // rsi
  float erosion_rate; // xmm0_4
  const data::DeathRegionLevelExcelConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::DeathRegionLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_DeathRegionLevelExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->death_zone_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->death_zone_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->death_zone_level);
  }
  death_zone_level = a2->death_zone_level;
  v4 = *(_BYTE *)(((unsigned __int64)&this->death_zone_level >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->death_zone_level, a2);
  }
  this->death_zone_level = death_zone_level;
  if ( *(_BYTE *)(((unsigned __int64)&v8->base_erosion >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->base_erosion >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->base_erosion);
  }
  base_erosion = v8->base_erosion;
  v6 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->base_erosion >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->base_erosion >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->base_erosion, v6);
  }
  this->base_erosion = base_erosion;
  if ( *(_BYTE *)(((unsigned __int64)&v8->erosion_rate >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v8->erosion_rate >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v8->erosion_rate);
  }
  erosion_rate = v8->erosion_rate;
  if ( *(_BYTE *)(((unsigned __int64)&this->erosion_rate >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->erosion_rate >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->erosion_rate, v6);
  }
  this->erosion_rate = erosion_rate;
};

// Line 20: range 0000000014DE73FE-0000000014DE743F
void __cdecl data::DeathRegionLevelExcelConfig::~DeathRegionLevelExcelConfig(
        data::DeathRegionLevelExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::DeathRegionLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DeathRegionLevelExcelConfig = v2;
};

// Line 20: range 0000000014DE7440-0000000014DE746A
void __cdecl data::DeathRegionLevelExcelConfig::~DeathRegionLevelExcelConfig(
        data::DeathRegionLevelExcelConfig *const this)
{
  data::DeathRegionLevelExcelConfig::~DeathRegionLevelExcelConfig(this);
  operator delete(this, 0x18uLL);
};
