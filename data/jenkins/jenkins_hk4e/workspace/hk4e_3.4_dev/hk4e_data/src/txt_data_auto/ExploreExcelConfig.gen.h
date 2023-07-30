// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ExploreExcelConfig.gen.h

// Line 15: range 0000000014D170A0-0000000014D171DF
void __cdecl data::ExploreExcelConfig::ExploreExcelConfig(
        data::ExploreExcelConfig *const this,
        const data::ExploreExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t material_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t exp; // ecx
  char v7; // dl
  const data::ExploreExcelConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ExploreExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ExploreExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->material_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->material_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->material_id);
  }
  material_id = a2->material_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->material_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->material_id, a2);
  }
  this->material_id = material_id;
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->exp >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->exp >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->exp);
  }
  exp = v8->exp;
  v7 = *(_BYTE *)(((unsigned __int64)&this->exp >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->exp, v5);
  }
  this->exp = exp;
};

// Line 18: range 0000000014DE9B4A-0000000014DE9B8B
void __cdecl data::ExploreExcelConfig::~ExploreExcelConfig(data::ExploreExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ExploreExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ExploreExcelConfig = v2;
};

// Line 18: range 0000000014DE9B8C-0000000014DE9BB6
void __cdecl data::ExploreExcelConfig::~ExploreExcelConfig(data::ExploreExcelConfig *const this)
{
  data::ExploreExcelConfig::~ExploreExcelConfig(this);
  operator delete(this, 0x10uLL);
};

// Line 30: range 0000000014D17320-0000000014D174D7
void __cdecl data::ExploreAreaTotalExpExcelConfig::ExploreAreaTotalExpExcelConfig(
        data::ExploreAreaTotalExpExcelConfig *const this,
        const data::ExploreAreaTotalExpExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t area_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t total_exp; // ecx
  char v7; // dl
  float reputation_ratio; // xmm0_4
  const data::ExploreAreaTotalExpExcelConfig *v9; // [rsp+0h] [rbp-10h]

  v9 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ExploreAreaTotalExpExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ExploreAreaTotalExpExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->area_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->area_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->area_id);
  }
  area_id = a2->area_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->area_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->area_id, a2);
  }
  this->area_id = area_id;
  v5 = (((_BYTE)v9 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v9->total_exp >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v9 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v9->total_exp >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v9->total_exp);
  }
  total_exp = v9->total_exp;
  v7 = *(_BYTE *)(((unsigned __int64)&this->total_exp >> 3) + 0x7FFF8000);
  LOBYTE(v5) = v7 != 0;
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
    __asan_report_store4(&this->total_exp, v5);
  this->total_exp = total_exp;
  if ( *(_BYTE *)(((unsigned __int64)&v9->reputation_ratio >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v9->reputation_ratio >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v9->reputation_ratio);
  }
  reputation_ratio = v9->reputation_ratio;
  if ( *(_BYTE *)(((unsigned __int64)&this->reputation_ratio >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reputation_ratio >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->reputation_ratio, v5);
  }
  this->reputation_ratio = reputation_ratio;
};

// Line 33: range 0000000014DE9ADC-0000000014DE9B1D
void __cdecl data::ExploreAreaTotalExpExcelConfig::~ExploreAreaTotalExpExcelConfig(
        data::ExploreAreaTotalExpExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ExploreAreaTotalExpExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ExploreAreaTotalExpExcelConfig = v2;
};

// Line 33: range 0000000014DE9B1E-0000000014DE9B48
void __cdecl data::ExploreAreaTotalExpExcelConfig::~ExploreAreaTotalExpExcelConfig(
        data::ExploreAreaTotalExpExcelConfig *const this)
{
  data::ExploreAreaTotalExpExcelConfig::~ExploreAreaTotalExpExcelConfig(this);
  operator delete(this, 0x18uLL);
};

// Line 46: range 0000000014D17618-0000000014D17757
void __cdecl data::DungeonMapAreaExcelConfig::DungeonMapAreaExcelConfig(
        data::DungeonMapAreaExcelConfig *const this,
        const data::DungeonMapAreaExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t dungeon_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t area_id; // ecx
  char v7; // dl
  const data::DungeonMapAreaExcelConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::DungeonMapAreaExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_DungeonMapAreaExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->dungeon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->dungeon_id);
  }
  dungeon_id = a2->dungeon_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->dungeon_id, a2);
  }
  this->dungeon_id = dungeon_id;
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->area_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->area_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->area_id);
  }
  area_id = v8->area_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->area_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->area_id, v5);
  }
  this->area_id = area_id;
};

// Line 49: range 0000000014DE9A6E-0000000014DE9AAF
void __cdecl data::DungeonMapAreaExcelConfig::~DungeonMapAreaExcelConfig(data::DungeonMapAreaExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::DungeonMapAreaExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DungeonMapAreaExcelConfig = v2;
};

// Line 49: range 0000000014DE9AB0-0000000014DE9ADA
void __cdecl data::DungeonMapAreaExcelConfig::~DungeonMapAreaExcelConfig(data::DungeonMapAreaExcelConfig *const this)
{
  data::DungeonMapAreaExcelConfig::~DungeonMapAreaExcelConfig(this);
  operator delete(this, 0x10uLL);
};
