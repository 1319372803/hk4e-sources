// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/StrengthenExcelConfig.gen.h

// Line 71: range 000000000CE5EFD8-000000000CE5F0E7
data::StrengthBaseScoreConfig *__cdecl data::StrengthBaseScoreConfig::operator=(
        data::StrengthBaseScoreConfig *const this,
        const data::StrengthBaseScoreConfig *a2)
{
  data::StrengthenPointType strengthen_point_type; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t base_score; // ecx
  char v6; // dl
  const data::StrengthBaseScoreConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->strengthen_point_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->strengthen_point_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->strengthen_point_type);
  }
  strengthen_point_type = a2->strengthen_point_type;
  v3 = *(_BYTE *)(((unsigned __int64)&this->strengthen_point_type >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->strengthen_point_type, a2);
  }
  this->strengthen_point_type = strengthen_point_type;
  v4 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->base_score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->base_score >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->base_score);
  }
  base_score = v8->base_score;
  v6 = *(_BYTE *)(((unsigned __int64)&this->base_score >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->base_score, v4);
  }
  this->base_score = base_score;
  return this;
};

// Line 71: range 000000000D2E71CC-000000000D2E7291
void __cdecl data::StrengthBaseScoreConfig::StrengthBaseScoreConfig(data::StrengthBaseScoreConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::StrengthBaseScoreConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_StrengthBaseScoreConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->strengthen_point_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->strengthen_point_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->strengthen_point_type, v1);
  }
  this->strengthen_point_type = STRENGTHEN_POINT_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->base_score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->base_score >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->base_score, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->base_score = 0;
};

// Line 71: range 000000000D415D86-000000000D415EC5
void __cdecl data::StrengthBaseScoreConfig::StrengthBaseScoreConfig(
        data::StrengthBaseScoreConfig *const this,
        const data::StrengthBaseScoreConfig *a2)
{
  int (**v2)(...); // rdx
  data::StrengthenPointType strengthen_point_type; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t base_score; // ecx
  char v7; // dl
  const data::StrengthBaseScoreConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::StrengthBaseScoreConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_StrengthBaseScoreConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->strengthen_point_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->strengthen_point_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->strengthen_point_type);
  }
  strengthen_point_type = a2->strengthen_point_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->strengthen_point_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->strengthen_point_type, a2);
  }
  this->strengthen_point_type = strengthen_point_type;
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->base_score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->base_score >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->base_score);
  }
  base_score = v8->base_score;
  v7 = *(_BYTE *)(((unsigned __int64)&this->base_score >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->base_score, v5);
  }
  this->base_score = base_score;
};

// Line 74: range 000000000D248CA8-000000000D248CE9
void __cdecl data::StrengthBaseScoreConfig::~StrengthBaseScoreConfig(data::StrengthBaseScoreConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::StrengthBaseScoreConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_StrengthBaseScoreConfig = v2;
};

// Line 74: range 000000000D248CEA-000000000D248D14
void __cdecl data::StrengthBaseScoreConfig::~StrengthBaseScoreConfig(data::StrengthBaseScoreConfig *const this)
{
  data::StrengthBaseScoreConfig::~StrengthBaseScoreConfig(this);
  operator delete(this, 0x10uLL);
};

// Line 84: range 000000000CE1981C-000000000CE198AB
void __cdecl data::StrengthenBasePointExcelConfig::StrengthenBasePointExcelConfig(
        data::StrengthenBasePointExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::StrengthenBasePointExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_StrengthenBasePointExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dungeon_id, v1);
  }
  this->dungeon_id = 0;
  std::vector<data::StrengthBaseScoreConfig>::vector(&this->base_scores);
};

// Line 84: range 000000000D3724D8-000000000D3725AD
void __cdecl data::StrengthenBasePointExcelConfig::StrengthenBasePointExcelConfig(
        data::StrengthenBasePointExcelConfig *const this,
        const data::StrengthenBasePointExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t dungeon_id; // ecx
  char v4; // al
  const data::StrengthenBasePointExcelConfig *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::StrengthenBasePointExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_StrengthenBasePointExcelConfig = v2;
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
  std::vector<data::StrengthBaseScoreConfig>::vector(&this->base_scores, &v5->base_scores);
};

// Line 87: range 000000000D491EE8-000000000D491F39
void __cdecl data::StrengthenBasePointExcelConfig::~StrengthenBasePointExcelConfig(
        data::StrengthenBasePointExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::StrengthenBasePointExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_StrengthenBasePointExcelConfig = v2;
  std::vector<data::StrengthBaseScoreConfig>::~vector(&this->base_scores);
};

// Line 87: range 000000000D491F3A-000000000D491F64
void __cdecl data::StrengthenBasePointExcelConfig::~StrengthenBasePointExcelConfig(
        data::StrengthenBasePointExcelConfig *const this)
{
  data::StrengthenBasePointExcelConfig::~StrengthenBasePointExcelConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 99: range 000000000D0680AC-000000000D0682E5
void __cdecl data::StrengthenPointExcelConfig::StrengthenPointExcelConfig(
        data::StrengthenPointExcelConfig *const this,
        const data::StrengthenPointExcelConfig *a2)
{
  int (**v2)(...); // rdx
  data::StrengthenPointType strengthen_point_type; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t rank_level; // ecx
  char v7; // dl
  uint32_t level; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t score; // ecx
  char v12; // dl
  const data::StrengthenPointExcelConfig *v13; // [rsp+0h] [rbp-10h]

  v13 = a2;
  v2 = (int (**)(...))(&`vtable for'data::StrengthenPointExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_StrengthenPointExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->strengthen_point_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->strengthen_point_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->strengthen_point_type);
  }
  strengthen_point_type = a2->strengthen_point_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->strengthen_point_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->strengthen_point_type, a2);
  }
  this->strengthen_point_type = strengthen_point_type;
  v5 = (((_BYTE)v13 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->rank_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->rank_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->rank_level);
  }
  rank_level = v13->rank_level;
  v7 = *(_BYTE *)(((unsigned __int64)&this->rank_level >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->rank_level, v5);
  }
  this->rank_level = rank_level;
  if ( *(_BYTE *)(((unsigned __int64)&v13->level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->level);
  }
  level = v13->level;
  v9 = *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->level, v5);
  }
  this->level = level;
  v10 = (((_BYTE)v13 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->score >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->score);
  }
  score = v13->score;
  v12 = *(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->score, v10);
  }
  this->score = score;
};

// Line 102: range 000000000D491E7A-000000000D491EBB
void __cdecl data::StrengthenPointExcelConfig::~StrengthenPointExcelConfig(
        data::StrengthenPointExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::StrengthenPointExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_StrengthenPointExcelConfig = v2;
};

// Line 102: range 000000000D491EBC-000000000D491EE6
void __cdecl data::StrengthenPointExcelConfig::~StrengthenPointExcelConfig(
        data::StrengthenPointExcelConfig *const this)
{
  data::StrengthenPointExcelConfig::~StrengthenPointExcelConfig(this);
  operator delete(this, 0x18uLL);
};
