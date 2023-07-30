// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/LevelSuppressExcelConfig.gen.h

// Line 18: range 0000000014D46290-0000000014D4674A
void __cdecl data::LevelSuppressExcelConfig::LevelSuppressExcelConfig(
        data::LevelSuppressExcelConfig *const this,
        const data::LevelSuppressExcelConfig *a2)
{
  int (**v2)(...); // rdx
  int32_t level; // ecx
  char v4; // al
  float level_suppress_damage_co; // xmm0_4
  __int64 v6; // rsi
  float level_suppress_endure; // xmm0_4
  float level_suppress_dis_min_horizontal; // xmm0_4
  __int64 v9; // rsi
  float level_suppress_dis_max_horizontal; // xmm0_4
  float level_suppress_dis_min_vertical; // xmm0_4
  __int64 v12; // rsi
  float level_suppress_dis_max_vertical; // xmm0_4
  __int64 v14; // rsi
  __int64 v15; // rdx
  bool is_attacker_player; // cl
  char v17; // dl
  __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // rdx
  bool is_defenser_player; // cl
  char v22; // dl
  __int64 v23; // rdx
  const data::LevelSuppressExcelConfig *v24; // [rsp+0h] [rbp-10h]

  v24 = a2;
  v2 = (int (**)(...))(&`vtable for'data::LevelSuppressExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_LevelSuppressExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->level);
  }
  level = a2->level;
  v4 = *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->level, a2);
  }
  this->level = level;
  if ( *(_BYTE *)(((unsigned __int64)&v24->level_suppress_damage_co >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v24 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v24->level_suppress_damage_co >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v24->level_suppress_damage_co);
  }
  level_suppress_damage_co = v24->level_suppress_damage_co;
  v6 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_suppress_damage_co >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_suppress_damage_co >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->level_suppress_damage_co, v6);
  }
  this->level_suppress_damage_co = level_suppress_damage_co;
  if ( *(_BYTE *)(((unsigned __int64)&v24->level_suppress_endure >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v24->level_suppress_endure >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v24->level_suppress_endure);
  }
  level_suppress_endure = v24->level_suppress_endure;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_suppress_endure >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_suppress_endure >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level_suppress_endure, v6);
  }
  this->level_suppress_endure = level_suppress_endure;
  if ( *(_BYTE *)(((unsigned __int64)&v24->level_suppress_dis_min_horizontal >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v24 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v24->level_suppress_dis_min_horizontal >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v24->level_suppress_dis_min_horizontal);
  }
  level_suppress_dis_min_horizontal = v24->level_suppress_dis_min_horizontal;
  v9 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_suppress_dis_min_horizontal >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_suppress_dis_min_horizontal >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->level_suppress_dis_min_horizontal, v9);
  }
  this->level_suppress_dis_min_horizontal = level_suppress_dis_min_horizontal;
  if ( *(_BYTE *)(((unsigned __int64)&v24->level_suppress_dis_max_horizontal >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v24->level_suppress_dis_max_horizontal >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v24->level_suppress_dis_max_horizontal);
  }
  level_suppress_dis_max_horizontal = v24->level_suppress_dis_max_horizontal;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_suppress_dis_max_horizontal >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_suppress_dis_max_horizontal >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level_suppress_dis_max_horizontal, v9);
  }
  this->level_suppress_dis_max_horizontal = level_suppress_dis_max_horizontal;
  if ( *(_BYTE *)(((unsigned __int64)&v24->level_suppress_dis_min_vertical >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v24 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v24->level_suppress_dis_min_vertical >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v24->level_suppress_dis_min_vertical);
  }
  level_suppress_dis_min_vertical = v24->level_suppress_dis_min_vertical;
  v12 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_suppress_dis_min_vertical >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_suppress_dis_min_vertical >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->level_suppress_dis_min_vertical, v12);
  }
  this->level_suppress_dis_min_vertical = level_suppress_dis_min_vertical;
  if ( *(_BYTE *)(((unsigned __int64)&v24->level_suppress_dis_max_vertical >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v24->level_suppress_dis_max_vertical >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v24->level_suppress_dis_max_vertical);
  }
  level_suppress_dis_max_vertical = v24->level_suppress_dis_max_vertical;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_suppress_dis_max_vertical >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_suppress_dis_max_vertical >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level_suppress_dis_max_vertical, v12);
  }
  this->level_suppress_dis_max_vertical = level_suppress_dis_max_vertical;
  v14 = ((_BYTE)v24 + 36) & 7;
  v15 = (*(_BYTE *)(((unsigned __int64)&v24->is_attacker_player >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v14 >= *(_BYTE *)(((unsigned __int64)&v24->is_attacker_player >> 3) + 0x7FFF8000));
  if ( (_BYTE)v15 )
    __asan_report_load1(&v24->is_attacker_player, v14, v15);
  is_attacker_player = v24->is_attacker_player;
  v17 = *(_BYTE *)(((unsigned __int64)&this->is_attacker_player >> 3) + 0x7FFF8000);
  LOBYTE(v14) = v17 != 0;
  v18 = (v17 != 0) & (unsigned __int8)((((unsigned __int8)this + 36) & 7) >= v17);
  if ( (_BYTE)v18 )
    __asan_report_store1(&this->is_attacker_player, v14, v18);
  this->is_attacker_player = is_attacker_player;
  v19 = ((_BYTE)v24 + 37) & 7;
  v20 = (*(_BYTE *)(((unsigned __int64)&v24->is_defenser_player >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v19 >= *(_BYTE *)(((unsigned __int64)&v24->is_defenser_player >> 3) + 0x7FFF8000));
  if ( (_BYTE)v20 )
    __asan_report_load1(&v24->is_defenser_player, v19, v20);
  is_defenser_player = v24->is_defenser_player;
  v22 = *(_BYTE *)(((unsigned __int64)&this->is_defenser_player >> 3) + 0x7FFF8000);
  LOBYTE(v19) = v22 != 0;
  v23 = (v22 != 0) & (unsigned __int8)((((unsigned __int8)this + 37) & 7) >= v22);
  if ( (_BYTE)v23 )
    __asan_report_store1(&this->is_defenser_player, v19, v23);
  this->is_defenser_player = is_defenser_player;
};

// Line 21: range 0000000014DEB264-0000000014DEB2A5
void __cdecl data::LevelSuppressExcelConfig::~LevelSuppressExcelConfig(data::LevelSuppressExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::LevelSuppressExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_LevelSuppressExcelConfig = v2;
};

// Line 21: range 0000000014DEB2A6-0000000014DEB2D0
void __cdecl data::LevelSuppressExcelConfig::~LevelSuppressExcelConfig(data::LevelSuppressExcelConfig *const this)
{
  data::LevelSuppressExcelConfig::~LevelSuppressExcelConfig(this);
  operator delete(this, 0x28uLL);
};
